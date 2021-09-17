#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IUrlAccessor IUrlAccessor;
typedef interface IUrlAccessor2 IUrlAccessor2;
typedef interface IUrlAccessor3 IUrlAccessor3;
typedef interface IUrlAccessor4 IUrlAccessor4;
typedef interface IOpLockStatus IOpLockStatus;
typedef interface ISearchProtocolThreadContext ISearchProtocolThreadContext;
typedef interface ISearchProtocol ISearchProtocol;
typedef interface ISearchProtocol2 ISearchProtocol2;
typedef interface IProtocolHandlerSite IProtocolHandlerSite;
typedef interface ISearchRoot ISearchRoot;
typedef interface IEnumSearchRoots IEnumSearchRoots;
typedef interface ISearchScopeRule ISearchScopeRule;
typedef interface IEnumSearchScopeRules IEnumSearchScopeRules;
typedef interface ISearchCrawlScopeManager ISearchCrawlScopeManager;
typedef interface ISearchCrawlScopeManager2 ISearchCrawlScopeManager2;
typedef interface ISearchItemsChangedSink ISearchItemsChangedSink;
typedef interface ISearchPersistentItemsChangedSink ISearchPersistentItemsChangedSink;
typedef interface ISearchViewChangedSink ISearchViewChangedSink;
typedef interface ISearchNotifyInlineSite ISearchNotifyInlineSite;
typedef interface ISearchCatalogManager ISearchCatalogManager;
typedef interface ISearchCatalogManager2 ISearchCatalogManager2;
typedef interface ISearchQueryHelper ISearchQueryHelper;
typedef interface IRowsetPrioritization IRowsetPrioritization;
typedef interface IRowsetEvents IRowsetEvents;
typedef interface ISearchManager ISearchManager;
typedef interface ISearchManager2 ISearchManager2;
typedef interface ISearchLanguageSupport ISearchLanguageSupport;
typedef class CSearchManager CSearchManager;
typedef class CSearchRoot CSearchRoot;
typedef class CSearchScopeRule CSearchScopeRule;
typedef class FilterRegistration FilterRegistration;
#include "unknwn.h"
#include "objidl.h"
#include "ocidl.h"
#include "propidl.h"
#include "filter.h"
#include "filtereg.h"
#include "propsys.h"
#include "oledb.h"
#include "StructuredQuery.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef LONG ITEMID;
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IUrlAccessor;
    typedef struct IUrlAccessorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUrlAccessor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUrlAccessor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUrlAccessor * This);
        HRESULT ( STDMETHODCALLTYPE *AddRequestParameter )(
            __RPC__in IUrlAccessor * This,
                       __RPC__in PROPSPEC *pSpec,
                       __RPC__in PROPVARIANT *pVar);
        HRESULT ( STDMETHODCALLTYPE *GetDocFormat )(
            __RPC__in IUrlAccessor * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszDocFormat[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )(
            __RPC__in IUrlAccessor * This,
                        __RPC__out CLSID *pClsid);
        HRESULT ( STDMETHODCALLTYPE *GetHost )(
            __RPC__in IUrlAccessor * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszHost[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *IsDirectory )(
            __RPC__in IUrlAccessor * This);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IUrlAccessor * This,
                        __RPC__out ULONGLONG *pllSize);
        HRESULT ( STDMETHODCALLTYPE *GetLastModified )(
            __RPC__in IUrlAccessor * This,
                        __RPC__out FILETIME *pftLastModified);
        HRESULT ( STDMETHODCALLTYPE *GetFileName )(
            __RPC__in IUrlAccessor * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszFileName[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetSecurityDescriptor )(
            __RPC__in IUrlAccessor * This,
                                 __RPC__out_ecount_full(dwSize) BYTE *pSD,
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetRedirectedURL )(
            __RPC__in IUrlAccessor * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszRedirectedURL[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetSecurityProvider )(
            __RPC__in IUrlAccessor * This,
                        __RPC__out CLSID *pSPClsid);
        HRESULT ( STDMETHODCALLTYPE *BindToStream )(
            __RPC__in IUrlAccessor * This,
                        __RPC__deref_out_opt IStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *BindToFilter )(
            __RPC__in IUrlAccessor * This,
                        __RPC__deref_out_opt IFilter **ppFilter);
        END_INTERFACE
    } IUrlAccessorVtbl;
    interface IUrlAccessor
    {
        CONST_VTBL struct IUrlAccessorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddRequestParameter(This,pSpec,pVar) )
    ( (This)->lpVtbl -> GetDocFormat(This,wszDocFormat,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetCLSID(This,pClsid) )
    ( (This)->lpVtbl -> GetHost(This,wszHost,dwSize,pdwLength) )
    ( (This)->lpVtbl -> IsDirectory(This) )
    ( (This)->lpVtbl -> GetSize(This,pllSize) )
    ( (This)->lpVtbl -> GetLastModified(This,pftLastModified) )
    ( (This)->lpVtbl -> GetFileName(This,wszFileName,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetSecurityDescriptor(This,pSD,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetRedirectedURL(This,wszRedirectedURL,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetSecurityProvider(This,pSPClsid) )
    ( (This)->lpVtbl -> BindToStream(This,ppStream) )
    ( (This)->lpVtbl -> BindToFilter(This,ppFilter) )
EXTERN_C const IID IID_IUrlAccessor2;
    typedef struct IUrlAccessor2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUrlAccessor2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUrlAccessor2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUrlAccessor2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddRequestParameter )(
            __RPC__in IUrlAccessor2 * This,
                       __RPC__in PROPSPEC *pSpec,
                       __RPC__in PROPVARIANT *pVar);
        HRESULT ( STDMETHODCALLTYPE *GetDocFormat )(
            __RPC__in IUrlAccessor2 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszDocFormat[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )(
            __RPC__in IUrlAccessor2 * This,
                        __RPC__out CLSID *pClsid);
        HRESULT ( STDMETHODCALLTYPE *GetHost )(
            __RPC__in IUrlAccessor2 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszHost[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *IsDirectory )(
            __RPC__in IUrlAccessor2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IUrlAccessor2 * This,
                        __RPC__out ULONGLONG *pllSize);
        HRESULT ( STDMETHODCALLTYPE *GetLastModified )(
            __RPC__in IUrlAccessor2 * This,
                        __RPC__out FILETIME *pftLastModified);
        HRESULT ( STDMETHODCALLTYPE *GetFileName )(
            __RPC__in IUrlAccessor2 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszFileName[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetSecurityDescriptor )(
            __RPC__in IUrlAccessor2 * This,
                                 __RPC__out_ecount_full(dwSize) BYTE *pSD,
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetRedirectedURL )(
            __RPC__in IUrlAccessor2 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszRedirectedURL[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetSecurityProvider )(
            __RPC__in IUrlAccessor2 * This,
                        __RPC__out CLSID *pSPClsid);
        HRESULT ( STDMETHODCALLTYPE *BindToStream )(
            __RPC__in IUrlAccessor2 * This,
                        __RPC__deref_out_opt IStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *BindToFilter )(
            __RPC__in IUrlAccessor2 * This,
                        __RPC__deref_out_opt IFilter **ppFilter);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayUrl )(
            __RPC__in IUrlAccessor2 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszDocUrl[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *IsDocument )(
            __RPC__in IUrlAccessor2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetCodePage )(
            __RPC__in IUrlAccessor2 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszCodePage[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        END_INTERFACE
    } IUrlAccessor2Vtbl;
    interface IUrlAccessor2
    {
        CONST_VTBL struct IUrlAccessor2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddRequestParameter(This,pSpec,pVar) )
    ( (This)->lpVtbl -> GetDocFormat(This,wszDocFormat,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetCLSID(This,pClsid) )
    ( (This)->lpVtbl -> GetHost(This,wszHost,dwSize,pdwLength) )
    ( (This)->lpVtbl -> IsDirectory(This) )
    ( (This)->lpVtbl -> GetSize(This,pllSize) )
    ( (This)->lpVtbl -> GetLastModified(This,pftLastModified) )
    ( (This)->lpVtbl -> GetFileName(This,wszFileName,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetSecurityDescriptor(This,pSD,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetRedirectedURL(This,wszRedirectedURL,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetSecurityProvider(This,pSPClsid) )
    ( (This)->lpVtbl -> BindToStream(This,ppStream) )
    ( (This)->lpVtbl -> BindToFilter(This,ppFilter) )
    ( (This)->lpVtbl -> GetDisplayUrl(This,wszDocUrl,dwSize,pdwLength) )
    ( (This)->lpVtbl -> IsDocument(This) )
    ( (This)->lpVtbl -> GetCodePage(This,wszCodePage,dwSize,pdwLength) )
EXTERN_C const IID IID_IUrlAccessor3;
    typedef struct IUrlAccessor3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUrlAccessor3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUrlAccessor3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUrlAccessor3 * This);
        HRESULT ( STDMETHODCALLTYPE *AddRequestParameter )(
            __RPC__in IUrlAccessor3 * This,
                       __RPC__in PROPSPEC *pSpec,
                       __RPC__in PROPVARIANT *pVar);
        HRESULT ( STDMETHODCALLTYPE *GetDocFormat )(
            __RPC__in IUrlAccessor3 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszDocFormat[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )(
            __RPC__in IUrlAccessor3 * This,
                        __RPC__out CLSID *pClsid);
        HRESULT ( STDMETHODCALLTYPE *GetHost )(
            __RPC__in IUrlAccessor3 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszHost[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *IsDirectory )(
            __RPC__in IUrlAccessor3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IUrlAccessor3 * This,
                        __RPC__out ULONGLONG *pllSize);
        HRESULT ( STDMETHODCALLTYPE *GetLastModified )(
            __RPC__in IUrlAccessor3 * This,
                        __RPC__out FILETIME *pftLastModified);
        HRESULT ( STDMETHODCALLTYPE *GetFileName )(
            __RPC__in IUrlAccessor3 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszFileName[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetSecurityDescriptor )(
            __RPC__in IUrlAccessor3 * This,
                                 __RPC__out_ecount_full(dwSize) BYTE *pSD,
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetRedirectedURL )(
            __RPC__in IUrlAccessor3 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszRedirectedURL[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetSecurityProvider )(
            __RPC__in IUrlAccessor3 * This,
                        __RPC__out CLSID *pSPClsid);
        HRESULT ( STDMETHODCALLTYPE *BindToStream )(
            __RPC__in IUrlAccessor3 * This,
                        __RPC__deref_out_opt IStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *BindToFilter )(
            __RPC__in IUrlAccessor3 * This,
                        __RPC__deref_out_opt IFilter **ppFilter);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayUrl )(
            __RPC__in IUrlAccessor3 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszDocUrl[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *IsDocument )(
            __RPC__in IUrlAccessor3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetCodePage )(
            __RPC__in IUrlAccessor3 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszCodePage[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetImpersonationSidBlobs )(
            __RPC__in IUrlAccessor3 * This,
                       __RPC__in LPCWSTR pcwszURL,
                        __RPC__out DWORD *pcSidCount,
                        __RPC__deref_out_opt BLOB **ppSidBlobs);
        END_INTERFACE
    } IUrlAccessor3Vtbl;
    interface IUrlAccessor3
    {
        CONST_VTBL struct IUrlAccessor3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddRequestParameter(This,pSpec,pVar) )
    ( (This)->lpVtbl -> GetDocFormat(This,wszDocFormat,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetCLSID(This,pClsid) )
    ( (This)->lpVtbl -> GetHost(This,wszHost,dwSize,pdwLength) )
    ( (This)->lpVtbl -> IsDirectory(This) )
    ( (This)->lpVtbl -> GetSize(This,pllSize) )
    ( (This)->lpVtbl -> GetLastModified(This,pftLastModified) )
    ( (This)->lpVtbl -> GetFileName(This,wszFileName,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetSecurityDescriptor(This,pSD,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetRedirectedURL(This,wszRedirectedURL,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetSecurityProvider(This,pSPClsid) )
    ( (This)->lpVtbl -> BindToStream(This,ppStream) )
    ( (This)->lpVtbl -> BindToFilter(This,ppFilter) )
    ( (This)->lpVtbl -> GetDisplayUrl(This,wszDocUrl,dwSize,pdwLength) )
    ( (This)->lpVtbl -> IsDocument(This) )
    ( (This)->lpVtbl -> GetCodePage(This,wszCodePage,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetImpersonationSidBlobs(This,pcwszURL,pcSidCount,ppSidBlobs) )
EXTERN_C const IID IID_IUrlAccessor4;
    typedef struct IUrlAccessor4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUrlAccessor4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUrlAccessor4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUrlAccessor4 * This);
        HRESULT ( STDMETHODCALLTYPE *AddRequestParameter )(
            __RPC__in IUrlAccessor4 * This,
                       __RPC__in PROPSPEC *pSpec,
                       __RPC__in PROPVARIANT *pVar);
        HRESULT ( STDMETHODCALLTYPE *GetDocFormat )(
            __RPC__in IUrlAccessor4 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszDocFormat[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )(
            __RPC__in IUrlAccessor4 * This,
                        __RPC__out CLSID *pClsid);
        HRESULT ( STDMETHODCALLTYPE *GetHost )(
            __RPC__in IUrlAccessor4 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszHost[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *IsDirectory )(
            __RPC__in IUrlAccessor4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IUrlAccessor4 * This,
                        __RPC__out ULONGLONG *pllSize);
        HRESULT ( STDMETHODCALLTYPE *GetLastModified )(
            __RPC__in IUrlAccessor4 * This,
                        __RPC__out FILETIME *pftLastModified);
        HRESULT ( STDMETHODCALLTYPE *GetFileName )(
            __RPC__in IUrlAccessor4 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszFileName[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetSecurityDescriptor )(
            __RPC__in IUrlAccessor4 * This,
                                 __RPC__out_ecount_full(dwSize) BYTE *pSD,
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetRedirectedURL )(
            __RPC__in IUrlAccessor4 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszRedirectedURL[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetSecurityProvider )(
            __RPC__in IUrlAccessor4 * This,
                        __RPC__out CLSID *pSPClsid);
        HRESULT ( STDMETHODCALLTYPE *BindToStream )(
            __RPC__in IUrlAccessor4 * This,
                        __RPC__deref_out_opt IStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *BindToFilter )(
            __RPC__in IUrlAccessor4 * This,
                        __RPC__deref_out_opt IFilter **ppFilter);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayUrl )(
            __RPC__in IUrlAccessor4 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszDocUrl[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *IsDocument )(
            __RPC__in IUrlAccessor4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetCodePage )(
            __RPC__in IUrlAccessor4 * This,
                                            __RPC__out_ecount_part(dwSize, *pdwLength) WCHAR wszCodePage[ ],
                       DWORD dwSize,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetImpersonationSidBlobs )(
            __RPC__in IUrlAccessor4 * This,
                       __RPC__in LPCWSTR pcwszURL,
                        __RPC__out DWORD *pcSidCount,
                        __RPC__deref_out_opt BLOB **ppSidBlobs);
        HRESULT ( STDMETHODCALLTYPE *ShouldIndexItemContent )(
            __RPC__in IUrlAccessor4 * This,
                        __RPC__out BOOL *pfIndexContent);
        HRESULT ( STDMETHODCALLTYPE *ShouldIndexProperty )(
            __RPC__in IUrlAccessor4 * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out BOOL *pfIndexProperty);
        END_INTERFACE
    } IUrlAccessor4Vtbl;
    interface IUrlAccessor4
    {
        CONST_VTBL struct IUrlAccessor4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddRequestParameter(This,pSpec,pVar) )
    ( (This)->lpVtbl -> GetDocFormat(This,wszDocFormat,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetCLSID(This,pClsid) )
    ( (This)->lpVtbl -> GetHost(This,wszHost,dwSize,pdwLength) )
    ( (This)->lpVtbl -> IsDirectory(This) )
    ( (This)->lpVtbl -> GetSize(This,pllSize) )
    ( (This)->lpVtbl -> GetLastModified(This,pftLastModified) )
    ( (This)->lpVtbl -> GetFileName(This,wszFileName,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetSecurityDescriptor(This,pSD,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetRedirectedURL(This,wszRedirectedURL,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetSecurityProvider(This,pSPClsid) )
    ( (This)->lpVtbl -> BindToStream(This,ppStream) )
    ( (This)->lpVtbl -> BindToFilter(This,ppFilter) )
    ( (This)->lpVtbl -> GetDisplayUrl(This,wszDocUrl,dwSize,pdwLength) )
    ( (This)->lpVtbl -> IsDocument(This) )
    ( (This)->lpVtbl -> GetCodePage(This,wszCodePage,dwSize,pdwLength) )
    ( (This)->lpVtbl -> GetImpersonationSidBlobs(This,pcwszURL,pcSidCount,ppSidBlobs) )
    ( (This)->lpVtbl -> ShouldIndexItemContent(This,pfIndexContent) )
    ( (This)->lpVtbl -> ShouldIndexProperty(This,key,pfIndexProperty) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IOpLockStatus;
    typedef struct IOpLockStatusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IOpLockStatus * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IOpLockStatus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IOpLockStatus * This);
        HRESULT ( STDMETHODCALLTYPE *IsOplockValid )(
            IOpLockStatus * This,
            _Out_ BOOL *pfIsOplockValid);
        HRESULT ( STDMETHODCALLTYPE *IsOplockBroken )(
            IOpLockStatus * This,
            _Out_ BOOL *pfIsOplockBroken);
        HRESULT ( STDMETHODCALLTYPE *GetOplockEventHandle )(
            IOpLockStatus * This,
            _Outptr_ HANDLE *phOplockEv);
        END_INTERFACE
    } IOpLockStatusVtbl;
    interface IOpLockStatus
    {
        CONST_VTBL struct IOpLockStatusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsOplockValid(This,pfIsOplockValid) )
    ( (This)->lpVtbl -> IsOplockBroken(This,pfIsOplockBroken) )
    ( (This)->lpVtbl -> GetOplockEventHandle(This,phOplockEv) )
EXTERN_C const IID IID_ISearchProtocolThreadContext;
    typedef struct ISearchProtocolThreadContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISearchProtocolThreadContext * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISearchProtocolThreadContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISearchProtocolThreadContext * This);
        HRESULT ( STDMETHODCALLTYPE *ThreadInit )(
            ISearchProtocolThreadContext * This);
        HRESULT ( STDMETHODCALLTYPE *ThreadShutdown )(
            ISearchProtocolThreadContext * This);
        HRESULT ( STDMETHODCALLTYPE *ThreadIdle )(
            ISearchProtocolThreadContext * This,
                       DWORD dwTimeElaspedSinceLastCallInMS);
        END_INTERFACE
    } ISearchProtocolThreadContextVtbl;
    interface ISearchProtocolThreadContext
    {
        CONST_VTBL struct ISearchProtocolThreadContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ThreadInit(This) )
    ( (This)->lpVtbl -> ThreadShutdown(This) )
    ( (This)->lpVtbl -> ThreadIdle(This,dwTimeElaspedSinceLastCallInMS) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma pack(8)
typedef struct _TIMEOUT_INFO
    {
    DWORD dwSize;
    DWORD dwConnectTimeout;
    DWORD dwDataTimeout;
    } TIMEOUT_INFO;
typedef
enum _PROXY_ACCESS
    {
        PROXY_ACCESS_PRECONFIG = 0,
        PROXY_ACCESS_DIRECT = ( PROXY_ACCESS_PRECONFIG + 1 ) ,
        PROXY_ACCESS_PROXY = ( PROXY_ACCESS_DIRECT + 1 )
    } PROXY_ACCESS;
typedef struct _PROXY_INFO
    {
    DWORD dwSize;
    LPCWSTR pcwszUserAgent;
    PROXY_ACCESS paUseProxy;
    BOOL fLocalBypass;
    DWORD dwPortNumber;
    LPCWSTR pcwszProxyName;
    LPCWSTR pcwszBypassList;
    } PROXY_INFO;
typedef
enum _AUTH_TYPE
    {
        eAUTH_TYPE_ANONYMOUS = 0,
        eAUTH_TYPE_NTLM = ( eAUTH_TYPE_ANONYMOUS + 1 ) ,
        eAUTH_TYPE_BASIC = ( eAUTH_TYPE_NTLM + 1 )
    } AUTH_TYPE;
typedef struct _AUTHENTICATION_INFO
    {
    DWORD dwSize;
    AUTH_TYPE atAuthenticationType;
    LPCWSTR pcwszUser;
    LPCWSTR pcwszPassword;
    } AUTHENTICATION_INFO;
typedef struct _INCREMENTAL_ACCESS_INFO
    {
    DWORD dwSize;
    FILETIME ftLastModifiedTime;
    } INCREMENTAL_ACCESS_INFO;
typedef struct _ITEM_INFO
    {
    DWORD dwSize;
    LPCWSTR pcwszFromEMail;
    LPCWSTR pcwszApplicationName;
    LPCWSTR pcwszCatalogName;
    LPCWSTR pcwszContentClass;
    } ITEM_INFO;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_ISearchProtocol;
    typedef struct ISearchProtocolVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISearchProtocol * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISearchProtocol * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISearchProtocol * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            ISearchProtocol * This,
                       TIMEOUT_INFO *pTimeoutInfo,
                       IProtocolHandlerSite *pProtocolHandlerSite,
                       PROXY_INFO *pProxyInfo);
        HRESULT ( STDMETHODCALLTYPE *CreateAccessor )(
            ISearchProtocol * This,
                       LPCWSTR pcwszURL,
                       AUTHENTICATION_INFO *pAuthenticationInfo,
                       INCREMENTAL_ACCESS_INFO *pIncrementalAccessInfo,
                       ITEM_INFO *pItemInfo,
                        IUrlAccessor **ppAccessor);
        HRESULT ( STDMETHODCALLTYPE *CloseAccessor )(
            ISearchProtocol * This,
                       IUrlAccessor *pAccessor);
        HRESULT ( STDMETHODCALLTYPE *ShutDown )(
            ISearchProtocol * This);
        END_INTERFACE
    } ISearchProtocolVtbl;
    interface ISearchProtocol
    {
        CONST_VTBL struct ISearchProtocolVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,pTimeoutInfo,pProtocolHandlerSite,pProxyInfo) )
    ( (This)->lpVtbl -> CreateAccessor(This,pcwszURL,pAuthenticationInfo,pIncrementalAccessInfo,pItemInfo,ppAccessor) )
    ( (This)->lpVtbl -> CloseAccessor(This,pAccessor) )
    ( (This)->lpVtbl -> ShutDown(This) )
EXTERN_C const IID IID_ISearchProtocol2;
    typedef struct ISearchProtocol2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISearchProtocol2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISearchProtocol2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISearchProtocol2 * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            ISearchProtocol2 * This,
                       TIMEOUT_INFO *pTimeoutInfo,
                       IProtocolHandlerSite *pProtocolHandlerSite,
                       PROXY_INFO *pProxyInfo);
        HRESULT ( STDMETHODCALLTYPE *CreateAccessor )(
            ISearchProtocol2 * This,
                       LPCWSTR pcwszURL,
                       AUTHENTICATION_INFO *pAuthenticationInfo,
                       INCREMENTAL_ACCESS_INFO *pIncrementalAccessInfo,
                       ITEM_INFO *pItemInfo,
                        IUrlAccessor **ppAccessor);
        HRESULT ( STDMETHODCALLTYPE *CloseAccessor )(
            ISearchProtocol2 * This,
                       IUrlAccessor *pAccessor);
        HRESULT ( STDMETHODCALLTYPE *ShutDown )(
            ISearchProtocol2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateAccessorEx )(
            ISearchProtocol2 * This,
                       LPCWSTR pcwszURL,
                       AUTHENTICATION_INFO *pAuthenticationInfo,
                       INCREMENTAL_ACCESS_INFO *pIncrementalAccessInfo,
                       ITEM_INFO *pItemInfo,
                       const BLOB *pUserData,
                        IUrlAccessor **ppAccessor);
        END_INTERFACE
    } ISearchProtocol2Vtbl;
    interface ISearchProtocol2
    {
        CONST_VTBL struct ISearchProtocol2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,pTimeoutInfo,pProtocolHandlerSite,pProxyInfo) )
    ( (This)->lpVtbl -> CreateAccessor(This,pcwszURL,pAuthenticationInfo,pIncrementalAccessInfo,pItemInfo,ppAccessor) )
    ( (This)->lpVtbl -> CloseAccessor(This,pAccessor) )
    ( (This)->lpVtbl -> ShutDown(This) )
    ( (This)->lpVtbl -> CreateAccessorEx(This,pcwszURL,pAuthenticationInfo,pIncrementalAccessInfo,pItemInfo,pUserData,ppAccessor) )
EXTERN_C const IID IID_IProtocolHandlerSite;
    typedef struct IProtocolHandlerSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IProtocolHandlerSite * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IProtocolHandlerSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IProtocolHandlerSite * This);
        HRESULT ( STDMETHODCALLTYPE *GetFilter )(
            IProtocolHandlerSite * This,
                       CLSID *pclsidObj,
                       LPCWSTR pcwszContentType,
                       LPCWSTR pcwszExtension,
                        IFilter **ppFilter);
        END_INTERFACE
    } IProtocolHandlerSiteVtbl;
    interface IProtocolHandlerSite
    {
        CONST_VTBL struct IProtocolHandlerSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFilter(This,pclsidObj,pcwszContentType,pcwszExtension,ppFilter) )
#pragma pack()
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_ISearchRoot;
    typedef struct ISearchRootVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchRoot * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchRoot * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchRoot * This);
                        HRESULT ( STDMETHODCALLTYPE *put_Schedule )(
            __RPC__in ISearchRoot * This,
                               __RPC__in_string LPCWSTR pszTaskArg);
                        HRESULT ( STDMETHODCALLTYPE *get_Schedule )(
            __RPC__in ISearchRoot * This,
                                        __RPC__deref_out_opt_string LPWSTR *ppszTaskArg);
                        HRESULT ( STDMETHODCALLTYPE *put_RootURL )(
            __RPC__in ISearchRoot * This,
                               __RPC__in_string LPCWSTR pszURL);
                        HRESULT ( STDMETHODCALLTYPE *get_RootURL )(
            __RPC__in ISearchRoot * This,
                                        __RPC__deref_out_opt_string LPWSTR *ppszURL);
                        HRESULT ( STDMETHODCALLTYPE *put_IsHierarchical )(
            __RPC__in ISearchRoot * This,
                       BOOL fIsHierarchical);
                        HRESULT ( STDMETHODCALLTYPE *get_IsHierarchical )(
            __RPC__in ISearchRoot * This,
                                __RPC__out BOOL *pfIsHierarchical);
                        HRESULT ( STDMETHODCALLTYPE *put_ProvidesNotifications )(
            __RPC__in ISearchRoot * This,
                       BOOL fProvidesNotifications);
                        HRESULT ( STDMETHODCALLTYPE *get_ProvidesNotifications )(
            __RPC__in ISearchRoot * This,
                                __RPC__out BOOL *pfProvidesNotifications);
                        HRESULT ( STDMETHODCALLTYPE *put_UseNotificationsOnly )(
            __RPC__in ISearchRoot * This,
                       BOOL fUseNotificationsOnly);
                        HRESULT ( STDMETHODCALLTYPE *get_UseNotificationsOnly )(
            __RPC__in ISearchRoot * This,
                                __RPC__out BOOL *pfUseNotificationsOnly);
                        HRESULT ( STDMETHODCALLTYPE *put_EnumerationDepth )(
            __RPC__in ISearchRoot * This,
                       DWORD dwDepth);
                        HRESULT ( STDMETHODCALLTYPE *get_EnumerationDepth )(
            __RPC__in ISearchRoot * This,
                                __RPC__out DWORD *pdwDepth);
                        HRESULT ( STDMETHODCALLTYPE *put_HostDepth )(
            __RPC__in ISearchRoot * This,
                       DWORD dwDepth);
                        HRESULT ( STDMETHODCALLTYPE *get_HostDepth )(
            __RPC__in ISearchRoot * This,
                                __RPC__out DWORD *pdwDepth);
                        HRESULT ( STDMETHODCALLTYPE *put_FollowDirectories )(
            __RPC__in ISearchRoot * This,
                       BOOL fFollowDirectories);
                        HRESULT ( STDMETHODCALLTYPE *get_FollowDirectories )(
            __RPC__in ISearchRoot * This,
                                __RPC__out BOOL *pfFollowDirectories);
                        HRESULT ( STDMETHODCALLTYPE *put_AuthenticationType )(
            __RPC__in ISearchRoot * This,
                       AUTH_TYPE authType);
                        HRESULT ( STDMETHODCALLTYPE *get_AuthenticationType )(
            __RPC__in ISearchRoot * This,
                                __RPC__out AUTH_TYPE *pAuthType);
                        HRESULT ( STDMETHODCALLTYPE *put_User )(
            __RPC__in ISearchRoot * This,
                               __RPC__in_string LPCWSTR pszUser);
                        HRESULT ( STDMETHODCALLTYPE *get_User )(
            __RPC__in ISearchRoot * This,
                                        __RPC__deref_out_opt_string LPWSTR *ppszUser);
                        HRESULT ( STDMETHODCALLTYPE *put_Password )(
            __RPC__in ISearchRoot * This,
                               __RPC__in_string LPCWSTR pszPassword);
                        HRESULT ( STDMETHODCALLTYPE *get_Password )(
            __RPC__in ISearchRoot * This,
                                        __RPC__deref_out_opt_string LPWSTR *ppszPassword);
        END_INTERFACE
    } ISearchRootVtbl;
    interface ISearchRoot
    {
        CONST_VTBL struct ISearchRootVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_Schedule(This,pszTaskArg) )
    ( (This)->lpVtbl -> get_Schedule(This,ppszTaskArg) )
    ( (This)->lpVtbl -> put_RootURL(This,pszURL) )
    ( (This)->lpVtbl -> get_RootURL(This,ppszURL) )
    ( (This)->lpVtbl -> put_IsHierarchical(This,fIsHierarchical) )
    ( (This)->lpVtbl -> get_IsHierarchical(This,pfIsHierarchical) )
    ( (This)->lpVtbl -> put_ProvidesNotifications(This,fProvidesNotifications) )
    ( (This)->lpVtbl -> get_ProvidesNotifications(This,pfProvidesNotifications) )
    ( (This)->lpVtbl -> put_UseNotificationsOnly(This,fUseNotificationsOnly) )
    ( (This)->lpVtbl -> get_UseNotificationsOnly(This,pfUseNotificationsOnly) )
    ( (This)->lpVtbl -> put_EnumerationDepth(This,dwDepth) )
    ( (This)->lpVtbl -> get_EnumerationDepth(This,pdwDepth) )
    ( (This)->lpVtbl -> put_HostDepth(This,dwDepth) )
    ( (This)->lpVtbl -> get_HostDepth(This,pdwDepth) )
    ( (This)->lpVtbl -> put_FollowDirectories(This,fFollowDirectories) )
    ( (This)->lpVtbl -> get_FollowDirectories(This,pfFollowDirectories) )
    ( (This)->lpVtbl -> put_AuthenticationType(This,authType) )
    ( (This)->lpVtbl -> get_AuthenticationType(This,pAuthType) )
    ( (This)->lpVtbl -> put_User(This,pszUser) )
    ( (This)->lpVtbl -> get_User(This,ppszUser) )
    ( (This)->lpVtbl -> put_Password(This,pszPassword) )
    ( (This)->lpVtbl -> get_Password(This,ppszPassword) )
EXTERN_C const IID IID_IEnumSearchRoots;
    typedef struct IEnumSearchRootsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumSearchRoots * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumSearchRoots * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumSearchRoots * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumSearchRoots * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) ISearchRoot **rgelt,
                                    __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumSearchRoots * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumSearchRoots * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumSearchRoots * This,
                                __RPC__deref_out_opt IEnumSearchRoots **ppenum);
        END_INTERFACE
    } IEnumSearchRootsVtbl;
    interface IEnumSearchRoots
    {
        CONST_VTBL struct IEnumSearchRootsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
typedef
enum _FOLLOW_FLAGS
    {
        FF_INDEXCOMPLEXURLS = 0x1,
        FF_SUPPRESSINDEXING = 0x2
    } FOLLOW_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_ISearchScopeRule;
    typedef struct ISearchScopeRuleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchScopeRule * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchScopeRule * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchScopeRule * This);
                        HRESULT ( STDMETHODCALLTYPE *get_PatternOrURL )(
            __RPC__in ISearchScopeRule * This,
                                        __RPC__deref_out_opt_string LPWSTR *ppszPatternOrURL);
                        HRESULT ( STDMETHODCALLTYPE *get_IsIncluded )(
            __RPC__in ISearchScopeRule * This,
                                __RPC__out BOOL *pfIsIncluded);
                        HRESULT ( STDMETHODCALLTYPE *get_IsDefault )(
            __RPC__in ISearchScopeRule * This,
                                __RPC__out BOOL *pfIsDefault);
                        HRESULT ( STDMETHODCALLTYPE *get_FollowFlags )(
            __RPC__in ISearchScopeRule * This,
                                __RPC__out DWORD *pFollowFlags);
        END_INTERFACE
    } ISearchScopeRuleVtbl;
    interface ISearchScopeRule
    {
        CONST_VTBL struct ISearchScopeRuleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_PatternOrURL(This,ppszPatternOrURL) )
    ( (This)->lpVtbl -> get_IsIncluded(This,pfIsIncluded) )
    ( (This)->lpVtbl -> get_IsDefault(This,pfIsDefault) )
    ( (This)->lpVtbl -> get_FollowFlags(This,pFollowFlags) )
EXTERN_C const IID IID_IEnumSearchScopeRules;
    typedef struct IEnumSearchScopeRulesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumSearchScopeRules * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumSearchScopeRules * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumSearchScopeRules * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumSearchScopeRules * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) ISearchScopeRule **pprgelt,
                                    __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumSearchScopeRules * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumSearchScopeRules * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumSearchScopeRules * This,
                                __RPC__deref_out_opt IEnumSearchScopeRules **ppenum);
        END_INTERFACE
    } IEnumSearchScopeRulesVtbl;
    interface IEnumSearchScopeRules
    {
        CONST_VTBL struct IEnumSearchScopeRulesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,pprgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
typedef
enum __MIDL___MIDL_itf_searchapi_0000_0013_0001
    {
        CLUSIONREASON_UNKNOWNSCOPE = 0,
        CLUSIONREASON_DEFAULT = 1,
        CLUSIONREASON_USER = 2,
        CLUSIONREASON_GROUPPOLICY = 3
    } CLUSION_REASON;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_ISearchCrawlScopeManager;
    typedef struct ISearchCrawlScopeManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchCrawlScopeManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchCrawlScopeManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchCrawlScopeManager * This);
        HRESULT ( STDMETHODCALLTYPE *AddDefaultScopeRule )(
            __RPC__in ISearchCrawlScopeManager * This,
                               __RPC__in_string LPCWSTR pszURL,
                       BOOL fInclude,
                       DWORD fFollowFlags);
        HRESULT ( STDMETHODCALLTYPE *AddRoot )(
            __RPC__in ISearchCrawlScopeManager * This,
                       __RPC__in_opt ISearchRoot *pSearchRoot);
        HRESULT ( STDMETHODCALLTYPE *RemoveRoot )(
            __RPC__in ISearchCrawlScopeManager * This,
                       __RPC__in LPCWSTR pszURL);
        HRESULT ( STDMETHODCALLTYPE *EnumerateRoots )(
            __RPC__in ISearchCrawlScopeManager * This,
                                __RPC__deref_out_opt IEnumSearchRoots **ppSearchRoots);
        HRESULT ( STDMETHODCALLTYPE *AddHierarchicalScope )(
            __RPC__in ISearchCrawlScopeManager * This,
                               __RPC__in_string LPCWSTR pszURL,
                       BOOL fInclude,
                       BOOL fDefault,
                       BOOL fOverrideChildren);
        HRESULT ( STDMETHODCALLTYPE *AddUserScopeRule )(
            __RPC__in ISearchCrawlScopeManager * This,
                               __RPC__in_string LPCWSTR pszURL,
                       BOOL fInclude,
                       BOOL fOverrideChildren,
                       DWORD fFollowFlags);
        HRESULT ( STDMETHODCALLTYPE *RemoveScopeRule )(
            __RPC__in ISearchCrawlScopeManager * This,
                               __RPC__in_string LPCWSTR pszRule);
        HRESULT ( STDMETHODCALLTYPE *EnumerateScopeRules )(
            __RPC__in ISearchCrawlScopeManager * This,
                                __RPC__deref_out_opt IEnumSearchScopeRules **ppSearchScopeRules);
        HRESULT ( STDMETHODCALLTYPE *HasParentScopeRule )(
            __RPC__in ISearchCrawlScopeManager * This,
                               __RPC__in_string LPCWSTR pszURL,
                                __RPC__out BOOL *pfHasParentRule);
        HRESULT ( STDMETHODCALLTYPE *HasChildScopeRule )(
            __RPC__in ISearchCrawlScopeManager * This,
                               __RPC__in_string LPCWSTR pszURL,
                                __RPC__out BOOL *pfHasChildRule);
        HRESULT ( STDMETHODCALLTYPE *IncludedInCrawlScope )(
            __RPC__in ISearchCrawlScopeManager * This,
                               __RPC__in_string LPCWSTR pszURL,
                                __RPC__out BOOL *pfIsIncluded);
        HRESULT ( STDMETHODCALLTYPE *IncludedInCrawlScopeEx )(
            __RPC__in ISearchCrawlScopeManager * This,
                               __RPC__in_string LPCWSTR pszURL,
                        __RPC__out BOOL *pfIsIncluded,
                        __RPC__out CLUSION_REASON *pReason);
        HRESULT ( STDMETHODCALLTYPE *RevertToDefaultScopes )(
            __RPC__in ISearchCrawlScopeManager * This);
        HRESULT ( STDMETHODCALLTYPE *SaveAll )(
            __RPC__in ISearchCrawlScopeManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetParentScopeVersionId )(
            __RPC__in ISearchCrawlScopeManager * This,
                               __RPC__in_string LPCWSTR pszURL,
                                __RPC__out LONG *plScopeId);
        HRESULT ( STDMETHODCALLTYPE *RemoveDefaultScopeRule )(
            __RPC__in ISearchCrawlScopeManager * This,
                               __RPC__in_string LPCWSTR pszURL);
        END_INTERFACE
    } ISearchCrawlScopeManagerVtbl;
    interface ISearchCrawlScopeManager
    {
        CONST_VTBL struct ISearchCrawlScopeManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddDefaultScopeRule(This,pszURL,fInclude,fFollowFlags) )
    ( (This)->lpVtbl -> AddRoot(This,pSearchRoot) )
    ( (This)->lpVtbl -> RemoveRoot(This,pszURL) )
    ( (This)->lpVtbl -> EnumerateRoots(This,ppSearchRoots) )
    ( (This)->lpVtbl -> AddHierarchicalScope(This,pszURL,fInclude,fDefault,fOverrideChildren) )
    ( (This)->lpVtbl -> AddUserScopeRule(This,pszURL,fInclude,fOverrideChildren,fFollowFlags) )
    ( (This)->lpVtbl -> RemoveScopeRule(This,pszRule) )
    ( (This)->lpVtbl -> EnumerateScopeRules(This,ppSearchScopeRules) )
    ( (This)->lpVtbl -> HasParentScopeRule(This,pszURL,pfHasParentRule) )
    ( (This)->lpVtbl -> HasChildScopeRule(This,pszURL,pfHasChildRule) )
    ( (This)->lpVtbl -> IncludedInCrawlScope(This,pszURL,pfIsIncluded) )
    ( (This)->lpVtbl -> IncludedInCrawlScopeEx(This,pszURL,pfIsIncluded,pReason) )
    ( (This)->lpVtbl -> RevertToDefaultScopes(This) )
    ( (This)->lpVtbl -> SaveAll(This) )
    ( (This)->lpVtbl -> GetParentScopeVersionId(This,pszURL,plScopeId) )
    ( (This)->lpVtbl -> RemoveDefaultScopeRule(This,pszURL) )
EXTERN_C const IID IID_ISearchCrawlScopeManager2;
    typedef struct ISearchCrawlScopeManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchCrawlScopeManager2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchCrawlScopeManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchCrawlScopeManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddDefaultScopeRule )(
            __RPC__in ISearchCrawlScopeManager2 * This,
                               __RPC__in_string LPCWSTR pszURL,
                       BOOL fInclude,
                       DWORD fFollowFlags);
        HRESULT ( STDMETHODCALLTYPE *AddRoot )(
            __RPC__in ISearchCrawlScopeManager2 * This,
                       __RPC__in_opt ISearchRoot *pSearchRoot);
        HRESULT ( STDMETHODCALLTYPE *RemoveRoot )(
            __RPC__in ISearchCrawlScopeManager2 * This,
                       __RPC__in LPCWSTR pszURL);
        HRESULT ( STDMETHODCALLTYPE *EnumerateRoots )(
            __RPC__in ISearchCrawlScopeManager2 * This,
                                __RPC__deref_out_opt IEnumSearchRoots **ppSearchRoots);
        HRESULT ( STDMETHODCALLTYPE *AddHierarchicalScope )(
            __RPC__in ISearchCrawlScopeManager2 * This,
                               __RPC__in_string LPCWSTR pszURL,
                       BOOL fInclude,
                       BOOL fDefault,
                       BOOL fOverrideChildren);
        HRESULT ( STDMETHODCALLTYPE *AddUserScopeRule )(
            __RPC__in ISearchCrawlScopeManager2 * This,
                               __RPC__in_string LPCWSTR pszURL,
                       BOOL fInclude,
                       BOOL fOverrideChildren,
                       DWORD fFollowFlags);
        HRESULT ( STDMETHODCALLTYPE *RemoveScopeRule )(
            __RPC__in ISearchCrawlScopeManager2 * This,
                               __RPC__in_string LPCWSTR pszRule);
        HRESULT ( STDMETHODCALLTYPE *EnumerateScopeRules )(
            __RPC__in ISearchCrawlScopeManager2 * This,
                                __RPC__deref_out_opt IEnumSearchScopeRules **ppSearchScopeRules);
        HRESULT ( STDMETHODCALLTYPE *HasParentScopeRule )(
            __RPC__in ISearchCrawlScopeManager2 * This,
                               __RPC__in_string LPCWSTR pszURL,
                                __RPC__out BOOL *pfHasParentRule);
        HRESULT ( STDMETHODCALLTYPE *HasChildScopeRule )(
            __RPC__in ISearchCrawlScopeManager2 * This,
                               __RPC__in_string LPCWSTR pszURL,
                                __RPC__out BOOL *pfHasChildRule);
        HRESULT ( STDMETHODCALLTYPE *IncludedInCrawlScope )(
            __RPC__in ISearchCrawlScopeManager2 * This,
                               __RPC__in_string LPCWSTR pszURL,
                                __RPC__out BOOL *pfIsIncluded);
        HRESULT ( STDMETHODCALLTYPE *IncludedInCrawlScopeEx )(
            __RPC__in ISearchCrawlScopeManager2 * This,
                               __RPC__in_string LPCWSTR pszURL,
                        __RPC__out BOOL *pfIsIncluded,
                        __RPC__out CLUSION_REASON *pReason);
        HRESULT ( STDMETHODCALLTYPE *RevertToDefaultScopes )(
            __RPC__in ISearchCrawlScopeManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *SaveAll )(
            __RPC__in ISearchCrawlScopeManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetParentScopeVersionId )(
            __RPC__in ISearchCrawlScopeManager2 * This,
                               __RPC__in_string LPCWSTR pszURL,
                                __RPC__out LONG *plScopeId);
        HRESULT ( STDMETHODCALLTYPE *RemoveDefaultScopeRule )(
            __RPC__in ISearchCrawlScopeManager2 * This,
                               __RPC__in_string LPCWSTR pszURL);
                      HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            ISearchCrawlScopeManager2 * This,
                        long **plVersion,
                        HANDLE *phFileMapping);
        END_INTERFACE
    } ISearchCrawlScopeManager2Vtbl;
    interface ISearchCrawlScopeManager2
    {
        CONST_VTBL struct ISearchCrawlScopeManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddDefaultScopeRule(This,pszURL,fInclude,fFollowFlags) )
    ( (This)->lpVtbl -> AddRoot(This,pSearchRoot) )
    ( (This)->lpVtbl -> RemoveRoot(This,pszURL) )
    ( (This)->lpVtbl -> EnumerateRoots(This,ppSearchRoots) )
    ( (This)->lpVtbl -> AddHierarchicalScope(This,pszURL,fInclude,fDefault,fOverrideChildren) )
    ( (This)->lpVtbl -> AddUserScopeRule(This,pszURL,fInclude,fOverrideChildren,fFollowFlags) )
    ( (This)->lpVtbl -> RemoveScopeRule(This,pszRule) )
    ( (This)->lpVtbl -> EnumerateScopeRules(This,ppSearchScopeRules) )
    ( (This)->lpVtbl -> HasParentScopeRule(This,pszURL,pfHasParentRule) )
    ( (This)->lpVtbl -> HasChildScopeRule(This,pszURL,pfHasChildRule) )
    ( (This)->lpVtbl -> IncludedInCrawlScope(This,pszURL,pfIsIncluded) )
    ( (This)->lpVtbl -> IncludedInCrawlScopeEx(This,pszURL,pfIsIncluded,pReason) )
    ( (This)->lpVtbl -> RevertToDefaultScopes(This) )
    ( (This)->lpVtbl -> SaveAll(This) )
    ( (This)->lpVtbl -> GetParentScopeVersionId(This,pszURL,plScopeId) )
    ( (This)->lpVtbl -> RemoveDefaultScopeRule(This,pszURL) )
    ( (This)->lpVtbl -> GetVersion(This,plVersion,phFileMapping) )
                HRESULT STDMETHODCALLTYPE ISearchCrawlScopeManager2_RemoteGetVersion_Proxy(
    __RPC__in ISearchCrawlScopeManager2 * This,
                __RPC__out long *plVersion);
void __RPC_STUB ISearchCrawlScopeManager2_RemoteGetVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _SEARCH_KIND_OF_CHANGE
    {
        SEARCH_CHANGE_ADD = 0,
        SEARCH_CHANGE_DELETE = 1,
        SEARCH_CHANGE_MODIFY = 2,
        SEARCH_CHANGE_MOVE_RENAME = 3,
        SEARCH_CHANGE_SEMANTICS_DIRECTORY = 0x40000,
        SEARCH_CHANGE_SEMANTICS_SHALLOW = 0x80000,
        SEARCH_CHANGE_SEMANTICS_UPDATE_SECURITY = 0x400000
    } SEARCH_KIND_OF_CHANGE;
typedef
enum _SEARCH_NOTIFICATION_PRIORITY
    {
        SEARCH_NORMAL_PRIORITY = 0,
        SEARCH_HIGH_PRIORITY = 1
    } SEARCH_NOTIFICATION_PRIORITY;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0015_v0_0_s_ifspec;
typedef struct _SEARCH_ITEM_CHANGE
    {
    SEARCH_KIND_OF_CHANGE Change;
    SEARCH_NOTIFICATION_PRIORITY Priority;
    BLOB *pUserData;
    LPWSTR lpwszURL;
                   LPWSTR lpwszOldURL;
    } SEARCH_ITEM_CHANGE;
EXTERN_C const IID IID_ISearchItemsChangedSink;
    typedef struct ISearchItemsChangedSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchItemsChangedSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchItemsChangedSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchItemsChangedSink * This);
        HRESULT ( STDMETHODCALLTYPE *StartedMonitoringScope )(
            __RPC__in ISearchItemsChangedSink * This,
                               __RPC__in_string LPCWSTR pszURL);
        HRESULT ( STDMETHODCALLTYPE *StoppedMonitoringScope )(
            __RPC__in ISearchItemsChangedSink * This,
                               __RPC__in_string LPCWSTR pszURL);
        HRESULT ( STDMETHODCALLTYPE *OnItemsChanged )(
            __RPC__in ISearchItemsChangedSink * This,
                       DWORD dwNumberOfChanges,
                                __RPC__in_ecount_full(dwNumberOfChanges) SEARCH_ITEM_CHANGE rgDataChangeEntries[ ],
                                 __RPC__out_ecount_full(dwNumberOfChanges) DWORD rgdwDocIds[ ],
                                 __RPC__out_ecount_full(dwNumberOfChanges) HRESULT rghrCompletionCodes[ ]);
        END_INTERFACE
    } ISearchItemsChangedSinkVtbl;
    interface ISearchItemsChangedSink
    {
        CONST_VTBL struct ISearchItemsChangedSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartedMonitoringScope(This,pszURL) )
    ( (This)->lpVtbl -> StoppedMonitoringScope(This,pszURL) )
    ( (This)->lpVtbl -> OnItemsChanged(This,dwNumberOfChanges,rgDataChangeEntries,rgdwDocIds,rghrCompletionCodes) )
typedef struct _SEARCH_ITEM_PERSISTENT_CHANGE
    {
    SEARCH_KIND_OF_CHANGE Change;
    LPWSTR URL;
                   LPWSTR OldURL;
    SEARCH_NOTIFICATION_PRIORITY Priority;
    } SEARCH_ITEM_PERSISTENT_CHANGE;
EXTERN_C const IID IID_ISearchPersistentItemsChangedSink;
    typedef struct ISearchPersistentItemsChangedSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchPersistentItemsChangedSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchPersistentItemsChangedSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchPersistentItemsChangedSink * This);
        HRESULT ( STDMETHODCALLTYPE *StartedMonitoringScope )(
            __RPC__in ISearchPersistentItemsChangedSink * This,
                               __RPC__in_string LPCWSTR pszURL);
        HRESULT ( STDMETHODCALLTYPE *StoppedMonitoringScope )(
            __RPC__in ISearchPersistentItemsChangedSink * This,
                               __RPC__in_string LPCWSTR pszURL);
        HRESULT ( STDMETHODCALLTYPE *OnItemsChanged )(
            __RPC__in ISearchPersistentItemsChangedSink * This,
                       DWORD dwNumberOfChanges,
                                __RPC__in_ecount_full(dwNumberOfChanges) SEARCH_ITEM_PERSISTENT_CHANGE DataChangeEntries[ ],
                                 __RPC__out_ecount_full(dwNumberOfChanges) HRESULT hrCompletionCodes[ ]);
        END_INTERFACE
    } ISearchPersistentItemsChangedSinkVtbl;
    interface ISearchPersistentItemsChangedSink
    {
        CONST_VTBL struct ISearchPersistentItemsChangedSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartedMonitoringScope(This,pszURL) )
    ( (This)->lpVtbl -> StoppedMonitoringScope(This,pszURL) )
    ( (This)->lpVtbl -> OnItemsChanged(This,dwNumberOfChanges,DataChangeEntries,hrCompletionCodes) )
EXTERN_C const IID IID_ISearchViewChangedSink;
    typedef struct ISearchViewChangedSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchViewChangedSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchViewChangedSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchViewChangedSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnChange )(
            __RPC__in ISearchViewChangedSink * This,
                       __RPC__in ITEMID *pdwDocID,
                       __RPC__in SEARCH_ITEM_CHANGE *pChange,
                       __RPC__in BOOL *pfInView);
        END_INTERFACE
    } ISearchViewChangedSinkVtbl;
    interface ISearchViewChangedSink
    {
        CONST_VTBL struct ISearchViewChangedSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnChange(This,pdwDocID,pChange,pfInView) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0018_v0_0_s_ifspec;
typedef
enum _SEARCH_INDEXING_PHASE
    {
        SEARCH_INDEXING_PHASE_GATHERER = 0,
        SEARCH_INDEXING_PHASE_QUERYABLE = 1,
        SEARCH_INDEXING_PHASE_PERSISTED = 2
    } SEARCH_INDEXING_PHASE;
typedef struct _SEARCH_ITEM_INDEXING_STATUS
    {
    DWORD dwDocID;
    HRESULT hrIndexingStatus;
    } SEARCH_ITEM_INDEXING_STATUS;
EXTERN_C const IID IID_ISearchNotifyInlineSite;
    typedef struct ISearchNotifyInlineSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchNotifyInlineSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchNotifyInlineSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchNotifyInlineSite * This);
        HRESULT ( STDMETHODCALLTYPE *OnItemIndexedStatusChange )(
            __RPC__in ISearchNotifyInlineSite * This,
                       SEARCH_INDEXING_PHASE sipStatus,
                       DWORD dwNumEntries,
                                __RPC__in_ecount_full(dwNumEntries) SEARCH_ITEM_INDEXING_STATUS rgItemStatusEntries[ ]);
        HRESULT ( STDMETHODCALLTYPE *OnCatalogStatusChange )(
            __RPC__in ISearchNotifyInlineSite * This,
                       __RPC__in REFGUID guidCatalogResetSignature,
                       __RPC__in REFGUID guidCheckPointSignature,
                       DWORD dwLastCheckPointNumber);
        END_INTERFACE
    } ISearchNotifyInlineSiteVtbl;
    interface ISearchNotifyInlineSite
    {
        CONST_VTBL struct ISearchNotifyInlineSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnItemIndexedStatusChange(This,sipStatus,dwNumEntries,rgItemStatusEntries) )
    ( (This)->lpVtbl -> OnCatalogStatusChange(This,guidCatalogResetSignature,guidCheckPointSignature,dwLastCheckPointNumber) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _CatalogStatus
    {
        CATALOG_STATUS_IDLE = 0,
        CATALOG_STATUS_PAUSED = 1,
        CATALOG_STATUS_RECOVERING = 2,
        CATALOG_STATUS_FULL_CRAWL = 3,
        CATALOG_STATUS_INCREMENTAL_CRAWL = 4,
        CATALOG_STATUS_PROCESSING_NOTIFICATIONS = 5,
        CATALOG_STATUS_SHUTTING_DOWN = 6
    } CatalogStatus;
typedef
enum _CatalogPausedReason
    {
        CATALOG_PAUSED_REASON_NONE = 0,
        CATALOG_PAUSED_REASON_HIGH_IO = 1,
        CATALOG_PAUSED_REASON_HIGH_CPU = 2,
        CATALOG_PAUSED_REASON_HIGH_NTF_RATE = 3,
        CATALOG_PAUSED_REASON_LOW_BATTERY = 4,
        CATALOG_PAUSED_REASON_LOW_MEMORY = 5,
        CATALOG_PAUSED_REASON_LOW_DISK = 6,
        CATALOG_PAUSED_REASON_DELAYED_RECOVERY = 7,
        CATALOG_PAUSED_REASON_USER_ACTIVE = 8,
        CATALOG_PAUSED_REASON_EXTERNAL = 9,
        CATALOG_PAUSED_REASON_UPGRADING = 10
    } CatalogPausedReason;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0019_v0_0_s_ifspec;
EXTERN_C const IID IID_ISearchCatalogManager;
    typedef struct ISearchCatalogManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchCatalogManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchCatalogManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchCatalogManager * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ISearchCatalogManager * This,
                                        __RPC__deref_out_opt_string LPWSTR *pszName);
        HRESULT ( STDMETHODCALLTYPE *GetParameter )(
            __RPC__in ISearchCatalogManager * This,
                               __RPC__in_string LPCWSTR pszName,
                                __RPC__deref_out_opt PROPVARIANT **ppValue);
        HRESULT ( STDMETHODCALLTYPE *SetParameter )(
            __RPC__in ISearchCatalogManager * This,
                               __RPC__in_string LPCWSTR pszName,
                       __RPC__in PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetCatalogStatus )(
            __RPC__in ISearchCatalogManager * This,
                        __RPC__out CatalogStatus *pStatus,
                        __RPC__out CatalogPausedReason *pPausedReason);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ISearchCatalogManager * This);
        HRESULT ( STDMETHODCALLTYPE *Reindex )(
            __RPC__in ISearchCatalogManager * This);
        HRESULT ( STDMETHODCALLTYPE *ReindexMatchingURLs )(
            __RPC__in ISearchCatalogManager * This,
                               __RPC__in_string LPCWSTR pszPattern);
        HRESULT ( STDMETHODCALLTYPE *ReindexSearchRoot )(
            __RPC__in ISearchCatalogManager * This,
                               __RPC__in_string LPCWSTR pszRootURL);
                        HRESULT ( STDMETHODCALLTYPE *put_ConnectTimeout )(
            __RPC__in ISearchCatalogManager * This,
                       DWORD dwConnectTimeout);
                        HRESULT ( STDMETHODCALLTYPE *get_ConnectTimeout )(
            __RPC__in ISearchCatalogManager * This,
                                __RPC__out DWORD *pdwConnectTimeout);
                        HRESULT ( STDMETHODCALLTYPE *put_DataTimeout )(
            __RPC__in ISearchCatalogManager * This,
                       DWORD dwDataTimeout);
                        HRESULT ( STDMETHODCALLTYPE *get_DataTimeout )(
            __RPC__in ISearchCatalogManager * This,
                                __RPC__out DWORD *pdwDataTimeout);
        HRESULT ( STDMETHODCALLTYPE *NumberOfItems )(
            __RPC__in ISearchCatalogManager * This,
                                __RPC__out LONG *plCount);
        HRESULT ( STDMETHODCALLTYPE *NumberOfItemsToIndex )(
            __RPC__in ISearchCatalogManager * This,
                        __RPC__out LONG *plIncrementalCount,
                        __RPC__out LONG *plNotificationQueue,
                        __RPC__out LONG *plHighPriorityQueue);
        HRESULT ( STDMETHODCALLTYPE *URLBeingIndexed )(
            __RPC__in ISearchCatalogManager * This,
                                        __RPC__deref_out_opt_string LPWSTR *pszUrl);
        HRESULT ( STDMETHODCALLTYPE *GetURLIndexingState )(
            __RPC__in ISearchCatalogManager * This,
                               __RPC__in_string LPCWSTR pszURL,
                                __RPC__out DWORD *pdwState);
        HRESULT ( STDMETHODCALLTYPE *GetPersistentItemsChangedSink )(
            __RPC__in ISearchCatalogManager * This,
                                __RPC__deref_out_opt ISearchPersistentItemsChangedSink **ppISearchPersistentItemsChangedSink);
        HRESULT ( STDMETHODCALLTYPE *RegisterViewForNotification )(
            __RPC__in ISearchCatalogManager * This,
                               __RPC__in_string LPCWSTR pszView,
                       __RPC__in_opt ISearchViewChangedSink *pViewChangedSink,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *GetItemsChangedSink )(
            __RPC__in ISearchCatalogManager * This,
                       __RPC__in_opt ISearchNotifyInlineSite *pISearchNotifyInlineSite,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv,
                        __RPC__out GUID *pGUIDCatalogResetSignature,
                        __RPC__out GUID *pGUIDCheckPointSignature,
                        __RPC__out DWORD *pdwLastCheckPointNumber);
        HRESULT ( STDMETHODCALLTYPE *UnregisterViewForNotification )(
            __RPC__in ISearchCatalogManager * This,
                       DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *SetExtensionClusion )(
            __RPC__in ISearchCatalogManager * This,
                               __RPC__in_string LPCWSTR pszExtension,
                       BOOL fExclude);
        HRESULT ( STDMETHODCALLTYPE *EnumerateExcludedExtensions )(
            __RPC__in ISearchCatalogManager * This,
                                __RPC__deref_out_opt IEnumString **ppExtensions);
        HRESULT ( STDMETHODCALLTYPE *GetQueryHelper )(
            __RPC__in ISearchCatalogManager * This,
                                __RPC__deref_out_opt ISearchQueryHelper **ppSearchQueryHelper);
                        HRESULT ( STDMETHODCALLTYPE *put_DiacriticSensitivity )(
            __RPC__in ISearchCatalogManager * This,
                       BOOL fDiacriticSensitive);
                        HRESULT ( STDMETHODCALLTYPE *get_DiacriticSensitivity )(
            __RPC__in ISearchCatalogManager * This,
                                __RPC__out BOOL *pfDiacriticSensitive);
        HRESULT ( STDMETHODCALLTYPE *GetCrawlScopeManager )(
            __RPC__in ISearchCatalogManager * This,
                                __RPC__deref_out_opt ISearchCrawlScopeManager **ppCrawlScopeManager);
        END_INTERFACE
    } ISearchCatalogManagerVtbl;
    interface ISearchCatalogManager
    {
        CONST_VTBL struct ISearchCatalogManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Name(This,pszName) )
    ( (This)->lpVtbl -> GetParameter(This,pszName,ppValue) )
    ( (This)->lpVtbl -> SetParameter(This,pszName,pValue) )
    ( (This)->lpVtbl -> GetCatalogStatus(This,pStatus,pPausedReason) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Reindex(This) )
    ( (This)->lpVtbl -> ReindexMatchingURLs(This,pszPattern) )
    ( (This)->lpVtbl -> ReindexSearchRoot(This,pszRootURL) )
    ( (This)->lpVtbl -> put_ConnectTimeout(This,dwConnectTimeout) )
    ( (This)->lpVtbl -> get_ConnectTimeout(This,pdwConnectTimeout) )
    ( (This)->lpVtbl -> put_DataTimeout(This,dwDataTimeout) )
    ( (This)->lpVtbl -> get_DataTimeout(This,pdwDataTimeout) )
    ( (This)->lpVtbl -> NumberOfItems(This,plCount) )
    ( (This)->lpVtbl -> NumberOfItemsToIndex(This,plIncrementalCount,plNotificationQueue,plHighPriorityQueue) )
    ( (This)->lpVtbl -> URLBeingIndexed(This,pszUrl) )
    ( (This)->lpVtbl -> GetURLIndexingState(This,pszURL,pdwState) )
    ( (This)->lpVtbl -> GetPersistentItemsChangedSink(This,ppISearchPersistentItemsChangedSink) )
    ( (This)->lpVtbl -> RegisterViewForNotification(This,pszView,pViewChangedSink,pdwCookie) )
    ( (This)->lpVtbl -> GetItemsChangedSink(This,pISearchNotifyInlineSite,riid,ppv,pGUIDCatalogResetSignature,pGUIDCheckPointSignature,pdwLastCheckPointNumber) )
    ( (This)->lpVtbl -> UnregisterViewForNotification(This,dwCookie) )
    ( (This)->lpVtbl -> SetExtensionClusion(This,pszExtension,fExclude) )
    ( (This)->lpVtbl -> EnumerateExcludedExtensions(This,ppExtensions) )
    ( (This)->lpVtbl -> GetQueryHelper(This,ppSearchQueryHelper) )
    ( (This)->lpVtbl -> put_DiacriticSensitivity(This,fDiacriticSensitive) )
    ( (This)->lpVtbl -> get_DiacriticSensitivity(This,pfDiacriticSensitive) )
    ( (This)->lpVtbl -> GetCrawlScopeManager(This,ppCrawlScopeManager) )
enum tagPRIORITIZE_FLAGS
    {
        PRIORITIZE_FLAG_RETRYFAILEDITEMS = 0x1,
        PRIORITIZE_FLAG_IGNOREFAILURECOUNT = 0x2
    } ;
typedef int PRIORITIZE_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0020_v0_0_s_ifspec;
EXTERN_C const IID IID_ISearchCatalogManager2;
    typedef struct ISearchCatalogManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchCatalogManager2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchCatalogManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchCatalogManager2 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ISearchCatalogManager2 * This,
                                        __RPC__deref_out_opt_string LPWSTR *pszName);
        HRESULT ( STDMETHODCALLTYPE *GetParameter )(
            __RPC__in ISearchCatalogManager2 * This,
                               __RPC__in_string LPCWSTR pszName,
                                __RPC__deref_out_opt PROPVARIANT **ppValue);
        HRESULT ( STDMETHODCALLTYPE *SetParameter )(
            __RPC__in ISearchCatalogManager2 * This,
                               __RPC__in_string LPCWSTR pszName,
                       __RPC__in PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetCatalogStatus )(
            __RPC__in ISearchCatalogManager2 * This,
                        __RPC__out CatalogStatus *pStatus,
                        __RPC__out CatalogPausedReason *pPausedReason);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ISearchCatalogManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *Reindex )(
            __RPC__in ISearchCatalogManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *ReindexMatchingURLs )(
            __RPC__in ISearchCatalogManager2 * This,
                               __RPC__in_string LPCWSTR pszPattern);
        HRESULT ( STDMETHODCALLTYPE *ReindexSearchRoot )(
            __RPC__in ISearchCatalogManager2 * This,
                               __RPC__in_string LPCWSTR pszRootURL);
                        HRESULT ( STDMETHODCALLTYPE *put_ConnectTimeout )(
            __RPC__in ISearchCatalogManager2 * This,
                       DWORD dwConnectTimeout);
                        HRESULT ( STDMETHODCALLTYPE *get_ConnectTimeout )(
            __RPC__in ISearchCatalogManager2 * This,
                                __RPC__out DWORD *pdwConnectTimeout);
                        HRESULT ( STDMETHODCALLTYPE *put_DataTimeout )(
            __RPC__in ISearchCatalogManager2 * This,
                       DWORD dwDataTimeout);
                        HRESULT ( STDMETHODCALLTYPE *get_DataTimeout )(
            __RPC__in ISearchCatalogManager2 * This,
                                __RPC__out DWORD *pdwDataTimeout);
        HRESULT ( STDMETHODCALLTYPE *NumberOfItems )(
            __RPC__in ISearchCatalogManager2 * This,
                                __RPC__out LONG *plCount);
        HRESULT ( STDMETHODCALLTYPE *NumberOfItemsToIndex )(
            __RPC__in ISearchCatalogManager2 * This,
                        __RPC__out LONG *plIncrementalCount,
                        __RPC__out LONG *plNotificationQueue,
                        __RPC__out LONG *plHighPriorityQueue);
        HRESULT ( STDMETHODCALLTYPE *URLBeingIndexed )(
            __RPC__in ISearchCatalogManager2 * This,
                                        __RPC__deref_out_opt_string LPWSTR *pszUrl);
        HRESULT ( STDMETHODCALLTYPE *GetURLIndexingState )(
            __RPC__in ISearchCatalogManager2 * This,
                               __RPC__in_string LPCWSTR pszURL,
                                __RPC__out DWORD *pdwState);
        HRESULT ( STDMETHODCALLTYPE *GetPersistentItemsChangedSink )(
            __RPC__in ISearchCatalogManager2 * This,
                                __RPC__deref_out_opt ISearchPersistentItemsChangedSink **ppISearchPersistentItemsChangedSink);
        HRESULT ( STDMETHODCALLTYPE *RegisterViewForNotification )(
            __RPC__in ISearchCatalogManager2 * This,
                               __RPC__in_string LPCWSTR pszView,
                       __RPC__in_opt ISearchViewChangedSink *pViewChangedSink,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *GetItemsChangedSink )(
            __RPC__in ISearchCatalogManager2 * This,
                       __RPC__in_opt ISearchNotifyInlineSite *pISearchNotifyInlineSite,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv,
                        __RPC__out GUID *pGUIDCatalogResetSignature,
                        __RPC__out GUID *pGUIDCheckPointSignature,
                        __RPC__out DWORD *pdwLastCheckPointNumber);
        HRESULT ( STDMETHODCALLTYPE *UnregisterViewForNotification )(
            __RPC__in ISearchCatalogManager2 * This,
                       DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *SetExtensionClusion )(
            __RPC__in ISearchCatalogManager2 * This,
                               __RPC__in_string LPCWSTR pszExtension,
                       BOOL fExclude);
        HRESULT ( STDMETHODCALLTYPE *EnumerateExcludedExtensions )(
            __RPC__in ISearchCatalogManager2 * This,
                                __RPC__deref_out_opt IEnumString **ppExtensions);
        HRESULT ( STDMETHODCALLTYPE *GetQueryHelper )(
            __RPC__in ISearchCatalogManager2 * This,
                                __RPC__deref_out_opt ISearchQueryHelper **ppSearchQueryHelper);
                        HRESULT ( STDMETHODCALLTYPE *put_DiacriticSensitivity )(
            __RPC__in ISearchCatalogManager2 * This,
                       BOOL fDiacriticSensitive);
                        HRESULT ( STDMETHODCALLTYPE *get_DiacriticSensitivity )(
            __RPC__in ISearchCatalogManager2 * This,
                                __RPC__out BOOL *pfDiacriticSensitive);
        HRESULT ( STDMETHODCALLTYPE *GetCrawlScopeManager )(
            __RPC__in ISearchCatalogManager2 * This,
                                __RPC__deref_out_opt ISearchCrawlScopeManager **ppCrawlScopeManager);
        HRESULT ( STDMETHODCALLTYPE *PrioritizeMatchingURLs )(
            __RPC__in ISearchCatalogManager2 * This,
                               __RPC__in_string LPCWSTR pszPattern,
                       PRIORITIZE_FLAGS dwPrioritizeFlags);
        END_INTERFACE
    } ISearchCatalogManager2Vtbl;
    interface ISearchCatalogManager2
    {
        CONST_VTBL struct ISearchCatalogManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Name(This,pszName) )
    ( (This)->lpVtbl -> GetParameter(This,pszName,ppValue) )
    ( (This)->lpVtbl -> SetParameter(This,pszName,pValue) )
    ( (This)->lpVtbl -> GetCatalogStatus(This,pStatus,pPausedReason) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Reindex(This) )
    ( (This)->lpVtbl -> ReindexMatchingURLs(This,pszPattern) )
    ( (This)->lpVtbl -> ReindexSearchRoot(This,pszRootURL) )
    ( (This)->lpVtbl -> put_ConnectTimeout(This,dwConnectTimeout) )
    ( (This)->lpVtbl -> get_ConnectTimeout(This,pdwConnectTimeout) )
    ( (This)->lpVtbl -> put_DataTimeout(This,dwDataTimeout) )
    ( (This)->lpVtbl -> get_DataTimeout(This,pdwDataTimeout) )
    ( (This)->lpVtbl -> NumberOfItems(This,plCount) )
    ( (This)->lpVtbl -> NumberOfItemsToIndex(This,plIncrementalCount,plNotificationQueue,plHighPriorityQueue) )
    ( (This)->lpVtbl -> URLBeingIndexed(This,pszUrl) )
    ( (This)->lpVtbl -> GetURLIndexingState(This,pszURL,pdwState) )
    ( (This)->lpVtbl -> GetPersistentItemsChangedSink(This,ppISearchPersistentItemsChangedSink) )
    ( (This)->lpVtbl -> RegisterViewForNotification(This,pszView,pViewChangedSink,pdwCookie) )
    ( (This)->lpVtbl -> GetItemsChangedSink(This,pISearchNotifyInlineSite,riid,ppv,pGUIDCatalogResetSignature,pGUIDCheckPointSignature,pdwLastCheckPointNumber) )
    ( (This)->lpVtbl -> UnregisterViewForNotification(This,dwCookie) )
    ( (This)->lpVtbl -> SetExtensionClusion(This,pszExtension,fExclude) )
    ( (This)->lpVtbl -> EnumerateExcludedExtensions(This,ppExtensions) )
    ( (This)->lpVtbl -> GetQueryHelper(This,ppSearchQueryHelper) )
    ( (This)->lpVtbl -> put_DiacriticSensitivity(This,fDiacriticSensitive) )
    ( (This)->lpVtbl -> get_DiacriticSensitivity(This,pfDiacriticSensitive) )
    ( (This)->lpVtbl -> GetCrawlScopeManager(This,ppCrawlScopeManager) )
    ( (This)->lpVtbl -> PrioritizeMatchingURLs(This,pszPattern,dwPrioritizeFlags) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0021_v0_0_s_ifspec;
typedef
enum _SEARCH_TERM_EXPANSION
    {
        SEARCH_TERM_NO_EXPANSION = 0,
        SEARCH_TERM_PREFIX_ALL = ( SEARCH_TERM_NO_EXPANSION + 1 ) ,
        SEARCH_TERM_STEM_ALL = ( SEARCH_TERM_PREFIX_ALL + 1 )
    } SEARCH_TERM_EXPANSION;
typedef
enum _SEARCH_QUERY_SYNTAX
    {
        SEARCH_NO_QUERY_SYNTAX = 0,
        SEARCH_ADVANCED_QUERY_SYNTAX = ( SEARCH_NO_QUERY_SYNTAX + 1 ) ,
        SEARCH_NATURAL_QUERY_SYNTAX = ( SEARCH_ADVANCED_QUERY_SYNTAX + 1 )
    } SEARCH_QUERY_SYNTAX;
typedef struct _SEARCH_COLUMN_PROPERTIES
    {
    PROPVARIANT Value;
    LCID lcid;
    } SEARCH_COLUMN_PROPERTIES;
EXTERN_C const IID IID_ISearchQueryHelper;
    typedef struct ISearchQueryHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchQueryHelper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchQueryHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchQueryHelper * This);
                        HRESULT ( STDMETHODCALLTYPE *get_ConnectionString )(
            __RPC__in ISearchQueryHelper * This,
                                        __RPC__deref_out_opt_string LPWSTR *pszConnectionString);
                        HRESULT ( STDMETHODCALLTYPE *put_QueryContentLocale )(
            __RPC__in ISearchQueryHelper * This,
                       LCID lcid);
                        HRESULT ( STDMETHODCALLTYPE *get_QueryContentLocale )(
            __RPC__in ISearchQueryHelper * This,
                                __RPC__out LCID *plcid);
                        HRESULT ( STDMETHODCALLTYPE *put_QueryKeywordLocale )(
            __RPC__in ISearchQueryHelper * This,
                       LCID lcid);
                        HRESULT ( STDMETHODCALLTYPE *get_QueryKeywordLocale )(
            __RPC__in ISearchQueryHelper * This,
                                __RPC__out LCID *plcid);
                        HRESULT ( STDMETHODCALLTYPE *put_QueryTermExpansion )(
            __RPC__in ISearchQueryHelper * This,
                       SEARCH_TERM_EXPANSION expandTerms);
                        HRESULT ( STDMETHODCALLTYPE *get_QueryTermExpansion )(
            __RPC__in ISearchQueryHelper * This,
                                __RPC__out SEARCH_TERM_EXPANSION *pExpandTerms);
                        HRESULT ( STDMETHODCALLTYPE *put_QuerySyntax )(
            __RPC__in ISearchQueryHelper * This,
                       SEARCH_QUERY_SYNTAX querySyntax);
                        HRESULT ( STDMETHODCALLTYPE *get_QuerySyntax )(
            __RPC__in ISearchQueryHelper * This,
                                __RPC__out SEARCH_QUERY_SYNTAX *pQuerySyntax);
                        HRESULT ( STDMETHODCALLTYPE *put_QueryContentProperties )(
            __RPC__in ISearchQueryHelper * This,
                                       __RPC__in_opt_string LPCWSTR pszContentProperties);
                        HRESULT ( STDMETHODCALLTYPE *get_QueryContentProperties )(
            __RPC__in ISearchQueryHelper * This,
                                        __RPC__deref_out_opt_string LPWSTR *ppszContentProperties);
                        HRESULT ( STDMETHODCALLTYPE *put_QuerySelectColumns )(
            __RPC__in ISearchQueryHelper * This,
                                       __RPC__in_opt_string LPCWSTR pszSelectColumns);
                        HRESULT ( STDMETHODCALLTYPE *get_QuerySelectColumns )(
            __RPC__in ISearchQueryHelper * This,
                                        __RPC__deref_out_opt_string LPWSTR *ppszSelectColumns);
                        HRESULT ( STDMETHODCALLTYPE *put_QueryWhereRestrictions )(
            __RPC__in ISearchQueryHelper * This,
                                       __RPC__in_opt_string LPCWSTR pszRestrictions);
                        HRESULT ( STDMETHODCALLTYPE *get_QueryWhereRestrictions )(
            __RPC__in ISearchQueryHelper * This,
                                        __RPC__deref_out_opt_string LPWSTR *ppszRestrictions);
                        HRESULT ( STDMETHODCALLTYPE *put_QuerySorting )(
            __RPC__in ISearchQueryHelper * This,
                                       __RPC__in_opt_string LPCWSTR pszSorting);
                        HRESULT ( STDMETHODCALLTYPE *get_QuerySorting )(
            __RPC__in ISearchQueryHelper * This,
                                        __RPC__deref_out_opt_string LPWSTR *ppszSorting);
        HRESULT ( STDMETHODCALLTYPE *GenerateSQLFromUserQuery )(
            __RPC__in ISearchQueryHelper * This,
                               __RPC__in_string LPCWSTR pszQuery,
                                        __RPC__deref_out_opt_string LPWSTR *ppszSQL);
        HRESULT ( STDMETHODCALLTYPE *WriteProperties )(
            __RPC__in ISearchQueryHelper * This,
                       ITEMID itemID,
                       DWORD dwNumberOfColumns,
                                __RPC__in_ecount_full(dwNumberOfColumns) PROPERTYKEY *pColumns,
                                __RPC__in_ecount_full(dwNumberOfColumns) SEARCH_COLUMN_PROPERTIES *pValues,
                               __RPC__in_opt FILETIME *pftGatherModifiedTime);
                        HRESULT ( STDMETHODCALLTYPE *put_QueryMaxResults )(
            __RPC__in ISearchQueryHelper * This,
                       LONG cMaxResults);
                        HRESULT ( STDMETHODCALLTYPE *get_QueryMaxResults )(
            __RPC__in ISearchQueryHelper * This,
                                __RPC__out LONG *pcMaxResults);
        END_INTERFACE
    } ISearchQueryHelperVtbl;
    interface ISearchQueryHelper
    {
        CONST_VTBL struct ISearchQueryHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ConnectionString(This,pszConnectionString) )
    ( (This)->lpVtbl -> put_QueryContentLocale(This,lcid) )
    ( (This)->lpVtbl -> get_QueryContentLocale(This,plcid) )
    ( (This)->lpVtbl -> put_QueryKeywordLocale(This,lcid) )
    ( (This)->lpVtbl -> get_QueryKeywordLocale(This,plcid) )
    ( (This)->lpVtbl -> put_QueryTermExpansion(This,expandTerms) )
    ( (This)->lpVtbl -> get_QueryTermExpansion(This,pExpandTerms) )
    ( (This)->lpVtbl -> put_QuerySyntax(This,querySyntax) )
    ( (This)->lpVtbl -> get_QuerySyntax(This,pQuerySyntax) )
    ( (This)->lpVtbl -> put_QueryContentProperties(This,pszContentProperties) )
    ( (This)->lpVtbl -> get_QueryContentProperties(This,ppszContentProperties) )
    ( (This)->lpVtbl -> put_QuerySelectColumns(This,pszSelectColumns) )
    ( (This)->lpVtbl -> get_QuerySelectColumns(This,ppszSelectColumns) )
    ( (This)->lpVtbl -> put_QueryWhereRestrictions(This,pszRestrictions) )
    ( (This)->lpVtbl -> get_QueryWhereRestrictions(This,ppszRestrictions) )
    ( (This)->lpVtbl -> put_QuerySorting(This,pszSorting) )
    ( (This)->lpVtbl -> get_QuerySorting(This,ppszSorting) )
    ( (This)->lpVtbl -> GenerateSQLFromUserQuery(This,pszQuery,ppszSQL) )
    ( (This)->lpVtbl -> WriteProperties(This,itemID,dwNumberOfColumns,pColumns,pValues,pftGatherModifiedTime) )
    ( (This)->lpVtbl -> put_QueryMaxResults(This,cMaxResults) )
    ( (This)->lpVtbl -> get_QueryMaxResults(This,pcMaxResults) )
typedef
enum __MIDL___MIDL_itf_searchapi_0000_0022_0001
    {
        PRIORITY_LEVEL_FOREGROUND = 0,
        PRIORITY_LEVEL_HIGH = 1,
        PRIORITY_LEVEL_LOW = 2,
        PRIORITY_LEVEL_DEFAULT = 3
    } PRIORITY_LEVEL;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0022_v0_0_s_ifspec;
EXTERN_C const IID IID_IRowsetPrioritization;
    typedef struct IRowsetPrioritizationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRowsetPrioritization * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRowsetPrioritization * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRowsetPrioritization * This);
        HRESULT ( STDMETHODCALLTYPE *SetScopePriority )(
            __RPC__in IRowsetPrioritization * This,
                       PRIORITY_LEVEL priority,
                       DWORD scopeStatisticsEventFrequency);
        HRESULT ( STDMETHODCALLTYPE *GetScopePriority )(
            __RPC__in IRowsetPrioritization * This,
                        __RPC__out PRIORITY_LEVEL *priority,
                        __RPC__out DWORD *scopeStatisticsEventFrequency);
        HRESULT ( STDMETHODCALLTYPE *GetScopeStatistics )(
            __RPC__in IRowsetPrioritization * This,
                        __RPC__out DWORD *indexedDocumentCount,
                        __RPC__out DWORD *oustandingAddCount,
                        __RPC__out DWORD *oustandingModifyCount);
        END_INTERFACE
    } IRowsetPrioritizationVtbl;
    interface IRowsetPrioritization
    {
        CONST_VTBL struct IRowsetPrioritizationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetScopePriority(This,priority,scopeStatisticsEventFrequency) )
    ( (This)->lpVtbl -> GetScopePriority(This,priority,scopeStatisticsEventFrequency) )
    ( (This)->lpVtbl -> GetScopeStatistics(This,indexedDocumentCount,oustandingAddCount,oustandingModifyCount) )
typedef
enum __MIDL___MIDL_itf_searchapi_0000_0023_0001
    {
        ROWSETEVENT_ITEMSTATE_NOTINROWSET = 0,
        ROWSETEVENT_ITEMSTATE_INROWSET = 1,
        ROWSETEVENT_ITEMSTATE_UNKNOWN = 2
    } ROWSETEVENT_ITEMSTATE;
typedef
enum __MIDL___MIDL_itf_searchapi_0000_0023_0002
    {
        ROWSETEVENT_TYPE_DATAEXPIRED = 0,
        ROWSETEVENT_TYPE_FOREGROUNDLOST = 1,
        ROWSETEVENT_TYPE_SCOPESTATISTICS = 2
    } ROWSETEVENT_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0023_v0_0_s_ifspec;
EXTERN_C const IID IID_IRowsetEvents;
    typedef struct IRowsetEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRowsetEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRowsetEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRowsetEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnNewItem )(
            __RPC__in IRowsetEvents * This,
                       __RPC__in REFPROPVARIANT itemID,
                       ROWSETEVENT_ITEMSTATE newItemState);
        HRESULT ( STDMETHODCALLTYPE *OnChangedItem )(
            __RPC__in IRowsetEvents * This,
                       __RPC__in REFPROPVARIANT itemID,
                       ROWSETEVENT_ITEMSTATE rowsetItemState,
                       ROWSETEVENT_ITEMSTATE changedItemState);
        HRESULT ( STDMETHODCALLTYPE *OnDeletedItem )(
            __RPC__in IRowsetEvents * This,
                       __RPC__in REFPROPVARIANT itemID,
                       ROWSETEVENT_ITEMSTATE deletedItemState);
        HRESULT ( STDMETHODCALLTYPE *OnRowsetEvent )(
            __RPC__in IRowsetEvents * This,
                       ROWSETEVENT_TYPE eventType,
                       __RPC__in REFPROPVARIANT eventData);
        END_INTERFACE
    } IRowsetEventsVtbl;
    interface IRowsetEvents
    {
        CONST_VTBL struct IRowsetEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnNewItem(This,itemID,newItemState) )
    ( (This)->lpVtbl -> OnChangedItem(This,itemID,rowsetItemState,changedItemState) )
    ( (This)->lpVtbl -> OnDeletedItem(This,itemID,deletedItemState) )
    ( (This)->lpVtbl -> OnRowsetEvent(This,eventType,eventData) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0024_v0_0_s_ifspec;
EXTERN_C const IID IID_ISearchManager;
    typedef struct ISearchManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetIndexerVersionStr )(
            __RPC__in ISearchManager * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszVersionString);
        HRESULT ( STDMETHODCALLTYPE *GetIndexerVersion )(
            __RPC__in ISearchManager * This,
                        __RPC__out DWORD *pdwMajor,
                        __RPC__out DWORD *pdwMinor);
        HRESULT ( STDMETHODCALLTYPE *GetParameter )(
            __RPC__in ISearchManager * This,
                               __RPC__in_string LPCWSTR pszName,
                                __RPC__deref_out_opt PROPVARIANT **ppValue);
        HRESULT ( STDMETHODCALLTYPE *SetParameter )(
            __RPC__in ISearchManager * This,
                               __RPC__in_string LPCWSTR pszName,
                       __RPC__in const PROPVARIANT *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ProxyName )(
            __RPC__in ISearchManager * This,
                                        __RPC__deref_out_opt_string LPWSTR *ppszProxyName);
                        HRESULT ( STDMETHODCALLTYPE *get_BypassList )(
            __RPC__in ISearchManager * This,
                                        __RPC__deref_out_opt_string LPWSTR *ppszBypassList);
        HRESULT ( STDMETHODCALLTYPE *SetProxy )(
            __RPC__in ISearchManager * This,
                       PROXY_ACCESS sUseProxy,
                       BOOL fLocalByPassProxy,
                       DWORD dwPortNumber,
                               __RPC__in_string LPCWSTR pszProxyName,
                               __RPC__in_string LPCWSTR pszByPassList);
        HRESULT ( STDMETHODCALLTYPE *GetCatalog )(
            __RPC__in ISearchManager * This,
                               __RPC__in_string LPCWSTR pszCatalog,
                                __RPC__deref_out_opt ISearchCatalogManager **ppCatalogManager);
                        HRESULT ( STDMETHODCALLTYPE *get_UserAgent )(
            __RPC__in ISearchManager * This,
                                        __RPC__deref_out_opt_string LPWSTR *ppszUserAgent);
                        HRESULT ( STDMETHODCALLTYPE *put_UserAgent )(
            __RPC__in ISearchManager * This,
                               __RPC__in_string LPCWSTR pszUserAgent);
                        HRESULT ( STDMETHODCALLTYPE *get_UseProxy )(
            __RPC__in ISearchManager * This,
                                __RPC__out PROXY_ACCESS *pUseProxy);
                        HRESULT ( STDMETHODCALLTYPE *get_LocalBypass )(
            __RPC__in ISearchManager * This,
                                __RPC__out BOOL *pfLocalBypass);
                        HRESULT ( STDMETHODCALLTYPE *get_PortNumber )(
            __RPC__in ISearchManager * This,
                                __RPC__out DWORD *pdwPortNumber);
        END_INTERFACE
    } ISearchManagerVtbl;
    interface ISearchManager
    {
        CONST_VTBL struct ISearchManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIndexerVersionStr(This,ppszVersionString) )
    ( (This)->lpVtbl -> GetIndexerVersion(This,pdwMajor,pdwMinor) )
    ( (This)->lpVtbl -> GetParameter(This,pszName,ppValue) )
    ( (This)->lpVtbl -> SetParameter(This,pszName,pValue) )
    ( (This)->lpVtbl -> get_ProxyName(This,ppszProxyName) )
    ( (This)->lpVtbl -> get_BypassList(This,ppszBypassList) )
    ( (This)->lpVtbl -> SetProxy(This,sUseProxy,fLocalByPassProxy,dwPortNumber,pszProxyName,pszByPassList) )
    ( (This)->lpVtbl -> GetCatalog(This,pszCatalog,ppCatalogManager) )
    ( (This)->lpVtbl -> get_UserAgent(This,ppszUserAgent) )
    ( (This)->lpVtbl -> put_UserAgent(This,pszUserAgent) )
    ( (This)->lpVtbl -> get_UseProxy(This,pUseProxy) )
    ( (This)->lpVtbl -> get_LocalBypass(This,pfLocalBypass) )
    ( (This)->lpVtbl -> get_PortNumber(This,pdwPortNumber) )
EXTERN_C const IID IID_ISearchManager2;
    typedef struct ISearchManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchManager2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetIndexerVersionStr )(
            __RPC__in ISearchManager2 * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszVersionString);
        HRESULT ( STDMETHODCALLTYPE *GetIndexerVersion )(
            __RPC__in ISearchManager2 * This,
                        __RPC__out DWORD *pdwMajor,
                        __RPC__out DWORD *pdwMinor);
        HRESULT ( STDMETHODCALLTYPE *GetParameter )(
            __RPC__in ISearchManager2 * This,
                               __RPC__in_string LPCWSTR pszName,
                                __RPC__deref_out_opt PROPVARIANT **ppValue);
        HRESULT ( STDMETHODCALLTYPE *SetParameter )(
            __RPC__in ISearchManager2 * This,
                               __RPC__in_string LPCWSTR pszName,
                       __RPC__in const PROPVARIANT *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ProxyName )(
            __RPC__in ISearchManager2 * This,
                                        __RPC__deref_out_opt_string LPWSTR *ppszProxyName);
                        HRESULT ( STDMETHODCALLTYPE *get_BypassList )(
            __RPC__in ISearchManager2 * This,
                                        __RPC__deref_out_opt_string LPWSTR *ppszBypassList);
        HRESULT ( STDMETHODCALLTYPE *SetProxy )(
            __RPC__in ISearchManager2 * This,
                       PROXY_ACCESS sUseProxy,
                       BOOL fLocalByPassProxy,
                       DWORD dwPortNumber,
                               __RPC__in_string LPCWSTR pszProxyName,
                               __RPC__in_string LPCWSTR pszByPassList);
        HRESULT ( STDMETHODCALLTYPE *GetCatalog )(
            __RPC__in ISearchManager2 * This,
                               __RPC__in_string LPCWSTR pszCatalog,
                                __RPC__deref_out_opt ISearchCatalogManager **ppCatalogManager);
                        HRESULT ( STDMETHODCALLTYPE *get_UserAgent )(
            __RPC__in ISearchManager2 * This,
                                        __RPC__deref_out_opt_string LPWSTR *ppszUserAgent);
                        HRESULT ( STDMETHODCALLTYPE *put_UserAgent )(
            __RPC__in ISearchManager2 * This,
                               __RPC__in_string LPCWSTR pszUserAgent);
                        HRESULT ( STDMETHODCALLTYPE *get_UseProxy )(
            __RPC__in ISearchManager2 * This,
                                __RPC__out PROXY_ACCESS *pUseProxy);
                        HRESULT ( STDMETHODCALLTYPE *get_LocalBypass )(
            __RPC__in ISearchManager2 * This,
                                __RPC__out BOOL *pfLocalBypass);
                        HRESULT ( STDMETHODCALLTYPE *get_PortNumber )(
            __RPC__in ISearchManager2 * This,
                                __RPC__out DWORD *pdwPortNumber);
        HRESULT ( STDMETHODCALLTYPE *CreateCatalog )(
            __RPC__in ISearchManager2 * This,
                               __RPC__in_string LPCWSTR pszCatalog,
                        __RPC__deref_out_opt ISearchCatalogManager **ppCatalogManager);
        HRESULT ( STDMETHODCALLTYPE *DeleteCatalog )(
            __RPC__in ISearchManager2 * This,
                               __RPC__in_string LPCWSTR pszCatalog);
        END_INTERFACE
    } ISearchManager2Vtbl;
    interface ISearchManager2
    {
        CONST_VTBL struct ISearchManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIndexerVersionStr(This,ppszVersionString) )
    ( (This)->lpVtbl -> GetIndexerVersion(This,pdwMajor,pdwMinor) )
    ( (This)->lpVtbl -> GetParameter(This,pszName,ppValue) )
    ( (This)->lpVtbl -> SetParameter(This,pszName,pValue) )
    ( (This)->lpVtbl -> get_ProxyName(This,ppszProxyName) )
    ( (This)->lpVtbl -> get_BypassList(This,ppszBypassList) )
    ( (This)->lpVtbl -> SetProxy(This,sUseProxy,fLocalByPassProxy,dwPortNumber,pszProxyName,pszByPassList) )
    ( (This)->lpVtbl -> GetCatalog(This,pszCatalog,ppCatalogManager) )
    ( (This)->lpVtbl -> get_UserAgent(This,ppszUserAgent) )
    ( (This)->lpVtbl -> put_UserAgent(This,pszUserAgent) )
    ( (This)->lpVtbl -> get_UseProxy(This,pUseProxy) )
    ( (This)->lpVtbl -> get_LocalBypass(This,pfLocalBypass) )
    ( (This)->lpVtbl -> get_PortNumber(This,pdwPortNumber) )
    ( (This)->lpVtbl -> CreateCatalog(This,pszCatalog,ppCatalogManager) )
    ( (This)->lpVtbl -> DeleteCatalog(This,pszCatalog) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const CLSID CLSID_CSearchLanguageSupport;
class DECLSPEC_UUID("6A68CC80-4337-4dbc-BD27-FBFB1053820B")
CSearchLanguageSupport;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0026_v0_0_s_ifspec;
EXTERN_C const IID IID_ISearchLanguageSupport;
    typedef struct ISearchLanguageSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchLanguageSupport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchLanguageSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchLanguageSupport * This);
        HRESULT ( STDMETHODCALLTYPE *SetDiacriticSensitivity )(
            __RPC__in ISearchLanguageSupport * This,
                       BOOL fDiacriticSensitive);
        HRESULT ( STDMETHODCALLTYPE *GetDiacriticSensitivity )(
            __RPC__in ISearchLanguageSupport * This,
                                __RPC__out BOOL *pfDiacriticSensitive);
        HRESULT ( STDMETHODCALLTYPE *LoadWordBreaker )(
            __RPC__in ISearchLanguageSupport * This,
                       LCID lcid,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppWordBreaker,
                        __RPC__out LCID *pLcidUsed);
        HRESULT ( STDMETHODCALLTYPE *LoadStemmer )(
            __RPC__in ISearchLanguageSupport * This,
                       LCID lcid,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppStemmer,
                        __RPC__out LCID *pLcidUsed);
        HRESULT ( STDMETHODCALLTYPE *IsPrefixNormalized )(
            __RPC__in ISearchLanguageSupport * This,
                                __RPC__in_ecount_full(cwcQueryToken) LPCWSTR pwcsQueryToken,
                       ULONG cwcQueryToken,
                                __RPC__in_ecount_full(cwcDocumentToken) LPCWSTR pwcsDocumentToken,
                       ULONG cwcDocumentToken,
                        __RPC__out ULONG *pulPrefixLength);
        END_INTERFACE
    } ISearchLanguageSupportVtbl;
    interface ISearchLanguageSupport
    {
        CONST_VTBL struct ISearchLanguageSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDiacriticSensitivity(This,fDiacriticSensitive) )
    ( (This)->lpVtbl -> GetDiacriticSensitivity(This,pfDiacriticSensitive) )
    ( (This)->lpVtbl -> LoadWordBreaker(This,lcid,riid,ppWordBreaker,pLcidUsed) )
    ( (This)->lpVtbl -> LoadStemmer(This,lcid,riid,ppStemmer,pLcidUsed) )
    ( (This)->lpVtbl -> IsPrefixNormalized(This,pwcsQueryToken,cwcQueryToken,pwcsDocumentToken,cwcDocumentToken,pulPrefixLength) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0027_v0_0_s_ifspec;
EXTERN_C const IID LIBID_SearchAPILib;
EXTERN_C const CLSID CLSID_CSearchManager;
class DECLSPEC_UUID("7D096C5F-AC08-4f1f-BEB7-5C22C517CE39")
CSearchManager;
EXTERN_C const CLSID CLSID_CSearchRoot;
class DECLSPEC_UUID("30766BD2-EA1C-4F28-BF27-0B44E2F68DB7")
CSearchRoot;
EXTERN_C const CLSID CLSID_CSearchScopeRule;
class DECLSPEC_UUID("E63DE750-3BD7-4BE5-9C84-6B4281988C44")
CSearchScopeRule;
EXTERN_C const CLSID CLSID_FilterRegistration;
class DECLSPEC_UUID("9E175B8D-F52A-11D8-B9A5-505054503030")
FilterRegistration;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0028_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
              HRESULT STDMETHODCALLTYPE ISearchCrawlScopeManager2_GetVersion_Proxy(
    ISearchCrawlScopeManager2 * This,
                long **plVersion,
                HANDLE *phFileMapping);
                HRESULT STDMETHODCALLTYPE ISearchCrawlScopeManager2_GetVersion_Stub(
    __RPC__in ISearchCrawlScopeManager2 * This,
                __RPC__out long *plVersion);
}
