#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMLangStringBufW IMLangStringBufW;
typedef interface IMLangStringBufA IMLangStringBufA;
typedef interface IMLangString IMLangString;
typedef interface IMLangStringWStr IMLangStringWStr;
typedef interface IMLangStringAStr IMLangStringAStr;
typedef interface IMLangLineBreakConsole IMLangLineBreakConsole;
typedef interface IEnumCodePage IEnumCodePage;
typedef interface IEnumRfc1766 IEnumRfc1766;
typedef interface IEnumScript IEnumScript;
typedef interface IMLangConvertCharset IMLangConvertCharset;
typedef interface IMultiLanguage IMultiLanguage;
typedef interface IMultiLanguage2 IMultiLanguage2;
typedef interface IMLangCodePages IMLangCodePages;
typedef interface IMLangFontLink IMLangFontLink;
typedef interface IMLangFontLink2 IMLangFontLink2;
typedef interface IMultiLanguage3 IMultiLanguage3;
typedef class CMLangString CMLangString;
typedef class CMLangConvertCharset CMLangConvertCharset;
typedef class CMultiLanguage CMultiLanguage;
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#pragma comment(lib,"uuid.lib")
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mlang_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mlang_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMLangStringBufW;
    typedef struct IMLangStringBufWVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMLangStringBufW * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMLangStringBufW * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMLangStringBufW * This);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            IMLangStringBufW * This,
            _Out_opt_ long *plFlags,
            _Out_opt_ long *pcchBuf);
        HRESULT ( STDMETHODCALLTYPE *LockBuf )(
            IMLangStringBufW * This,
                       long cchOffset,
                       long cchMaxLock,
            _Outptr_result_buffer_(*pcchBuf) WCHAR **ppszBuf,
            _Out_opt_ long *pcchBuf);
        HRESULT ( STDMETHODCALLTYPE *UnlockBuf )(
            IMLangStringBufW * This,
            _In_reads_(cchWrite-cchOffset) const WCHAR *pszBuf,
                       long cchOffset,
                       long cchWrite);
        HRESULT ( STDMETHODCALLTYPE *Insert )(
            IMLangStringBufW * This,
                       long cchOffset,
                       long cchMaxInsert,
            _Out_opt_ long *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            IMLangStringBufW * This,
                       long cchOffset,
                       long cchDelete);
        END_INTERFACE
    } IMLangStringBufWVtbl;
    interface IMLangStringBufW
    {
        CONST_VTBL struct IMLangStringBufWVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStatus(This,plFlags,pcchBuf) )
    ( (This)->lpVtbl -> LockBuf(This,cchOffset,cchMaxLock,ppszBuf,pcchBuf) )
    ( (This)->lpVtbl -> UnlockBuf(This,pszBuf,cchOffset,cchWrite) )
    ( (This)->lpVtbl -> Insert(This,cchOffset,cchMaxInsert,pcchActual) )
    ( (This)->lpVtbl -> Delete(This,cchOffset,cchDelete) )
EXTERN_C const IID IID_IMLangStringBufA;
    typedef struct IMLangStringBufAVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMLangStringBufA * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMLangStringBufA * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMLangStringBufA * This);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            IMLangStringBufA * This,
            _Out_opt_ long *plFlags,
            _Out_opt_ long *pcchBuf);
        HRESULT ( STDMETHODCALLTYPE *LockBuf )(
            IMLangStringBufA * This,
                       long cchOffset,
                       long cchMaxLock,
            _Outptr_result_buffer_(*pcchBuf) CHAR **ppszBuf,
            _Out_opt_ long *pcchBuf);
        HRESULT ( STDMETHODCALLTYPE *UnlockBuf )(
            IMLangStringBufA * This,
            _In_reads_(cchWrite-cchOffset) const CHAR *pszBuf,
                       long cchOffset,
                       long cchWrite);
        HRESULT ( STDMETHODCALLTYPE *Insert )(
            IMLangStringBufA * This,
                       long cchOffset,
                       long cchMaxInsert,
            _Out_opt_ long *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            IMLangStringBufA * This,
                       long cchOffset,
                       long cchDelete);
        END_INTERFACE
    } IMLangStringBufAVtbl;
    interface IMLangStringBufA
    {
        CONST_VTBL struct IMLangStringBufAVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStatus(This,plFlags,pcchBuf) )
    ( (This)->lpVtbl -> LockBuf(This,cchOffset,cchMaxLock,ppszBuf,pcchBuf) )
    ( (This)->lpVtbl -> UnlockBuf(This,pszBuf,cchOffset,cchWrite) )
    ( (This)->lpVtbl -> Insert(This,cchOffset,cchMaxInsert,pcchActual) )
    ( (This)->lpVtbl -> Delete(This,cchOffset,cchDelete) )
EXTERN_C const IID IID_IMLangString;
    typedef struct IMLangStringVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMLangString * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMLangString * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMLangString * This);
        HRESULT ( STDMETHODCALLTYPE *Sync )(
            IMLangString * This,
                       BOOL fNoAccess);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IMLangString * This,
            _Out_opt_ long *plLen);
        HRESULT ( STDMETHODCALLTYPE *SetMLStr )(
            IMLangString * This,
                       long lDestPos,
                       long lDestLen,
            _In_ IUnknown *pSrcMLStr,
                       long lSrcPos,
                       long lSrcLen);
        HRESULT ( STDMETHODCALLTYPE *GetMLStr )(
            IMLangString * This,
                       long lSrcPos,
                       long lSrcLen,
            _In_ IUnknown *pUnkOuter,
                       DWORD dwClsContext,
            _In_ const IID *piid,
            _Outptr_ IUnknown **ppDestMLStr,
            _Out_opt_ long *plDestPos,
            _Out_opt_ long *plDestLen);
        END_INTERFACE
    } IMLangStringVtbl;
    interface IMLangString
    {
        CONST_VTBL struct IMLangStringVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Sync(This,fNoAccess) )
    ( (This)->lpVtbl -> GetLength(This,plLen) )
    ( (This)->lpVtbl -> SetMLStr(This,lDestPos,lDestLen,pSrcMLStr,lSrcPos,lSrcLen) )
    ( (This)->lpVtbl -> GetMLStr(This,lSrcPos,lSrcLen,pUnkOuter,dwClsContext,piid,ppDestMLStr,plDestPos,plDestLen) )
EXTERN_C const IID IID_IMLangStringWStr;
    typedef struct IMLangStringWStrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMLangStringWStr * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMLangStringWStr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMLangStringWStr * This);
        HRESULT ( STDMETHODCALLTYPE *Sync )(
            IMLangStringWStr * This,
                       BOOL fNoAccess);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IMLangStringWStr * This,
            _Out_opt_ long *plLen);
        HRESULT ( STDMETHODCALLTYPE *SetMLStr )(
            IMLangStringWStr * This,
                       long lDestPos,
                       long lDestLen,
            _In_ IUnknown *pSrcMLStr,
                       long lSrcPos,
                       long lSrcLen);
        HRESULT ( STDMETHODCALLTYPE *GetMLStr )(
            IMLangStringWStr * This,
                       long lSrcPos,
                       long lSrcLen,
            _In_ IUnknown *pUnkOuter,
                       DWORD dwClsContext,
            _In_ const IID *piid,
            _Outptr_ IUnknown **ppDestMLStr,
            _Out_opt_ long *plDestPos,
            _Out_opt_ long *plDestLen);
        HRESULT ( STDMETHODCALLTYPE *SetWStr )(
            IMLangStringWStr * This,
                       long lDestPos,
                       long lDestLen,
            _In_reads_(cchSrc) LPCWSTR pszSrc,
                       long cchSrc,
            _Out_opt_ long *pcchActual,
            _Out_opt_ long *plActualLen);
        HRESULT ( STDMETHODCALLTYPE *SetStrBufW )(
            IMLangStringWStr * This,
                       long lDestPos,
                       long lDestLen,
            _In_opt_ IMLangStringBufW *pSrcBuf,
            _Out_opt_ long *pcchActual,
            _Out_opt_ long *plActualLen);
        HRESULT ( STDMETHODCALLTYPE *GetWStr )(
            IMLangStringWStr * This,
                       long lSrcPos,
                       long lSrcLen,
            _Out_writes_opt_(cchDest) LPWSTR pszDest,
                       long cchDest,
            _Out_opt_ long *pcchActual,
            _Out_opt_ long *plActualLen);
        HRESULT ( STDMETHODCALLTYPE *GetStrBufW )(
            IMLangStringWStr * This,
                       long lSrcPos,
                       long lSrcMaxLen,
            _Outptr_ IMLangStringBufW **ppDestBuf,
            _Out_opt_ long *plDestLen);
        HRESULT ( STDMETHODCALLTYPE *LockWStr )(
            IMLangStringWStr * This,
                       long lSrcPos,
                       long lSrcLen,
                       long lFlags,
                       long cchRequest,
            _Outptr_opt_result_buffer_(*pcchDest) LPWSTR *ppszDest,
            _Out_opt_ long *pcchDest,
            _Out_opt_ long *plDestLen);
        HRESULT ( STDMETHODCALLTYPE *UnlockWStr )(
            IMLangStringWStr * This,
            _In_reads_(cchSrc) LPCWSTR pszSrc,
                       long cchSrc,
            _Out_opt_ long *pcchActual,
            _Out_opt_ long *plActualLen);
        HRESULT ( STDMETHODCALLTYPE *SetLocale )(
            IMLangStringWStr * This,
                       long lDestPos,
                       long lDestLen,
                       LCID locale);
        HRESULT ( STDMETHODCALLTYPE *GetLocale )(
            IMLangStringWStr * This,
                       long lSrcPos,
                       long lSrcMaxLen,
            _Out_opt_ LCID *plocale,
            _Out_opt_ long *plLocalePos,
            _Out_opt_ long *plLocaleLen);
        END_INTERFACE
    } IMLangStringWStrVtbl;
    interface IMLangStringWStr
    {
        CONST_VTBL struct IMLangStringWStrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Sync(This,fNoAccess) )
    ( (This)->lpVtbl -> GetLength(This,plLen) )
    ( (This)->lpVtbl -> SetMLStr(This,lDestPos,lDestLen,pSrcMLStr,lSrcPos,lSrcLen) )
    ( (This)->lpVtbl -> GetMLStr(This,lSrcPos,lSrcLen,pUnkOuter,dwClsContext,piid,ppDestMLStr,plDestPos,plDestLen) )
    ( (This)->lpVtbl -> SetWStr(This,lDestPos,lDestLen,pszSrc,cchSrc,pcchActual,plActualLen) )
    ( (This)->lpVtbl -> SetStrBufW(This,lDestPos,lDestLen,pSrcBuf,pcchActual,plActualLen) )
    ( (This)->lpVtbl -> GetWStr(This,lSrcPos,lSrcLen,pszDest,cchDest,pcchActual,plActualLen) )
    ( (This)->lpVtbl -> GetStrBufW(This,lSrcPos,lSrcMaxLen,ppDestBuf,plDestLen) )
    ( (This)->lpVtbl -> LockWStr(This,lSrcPos,lSrcLen,lFlags,cchRequest,ppszDest,pcchDest,plDestLen) )
    ( (This)->lpVtbl -> UnlockWStr(This,pszSrc,cchSrc,pcchActual,plActualLen) )
    ( (This)->lpVtbl -> SetLocale(This,lDestPos,lDestLen,locale) )
    ( (This)->lpVtbl -> GetLocale(This,lSrcPos,lSrcMaxLen,plocale,plLocalePos,plLocaleLen) )
EXTERN_C const IID IID_IMLangStringAStr;
    typedef struct IMLangStringAStrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMLangStringAStr * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMLangStringAStr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMLangStringAStr * This);
        HRESULT ( STDMETHODCALLTYPE *Sync )(
            IMLangStringAStr * This,
                       BOOL fNoAccess);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IMLangStringAStr * This,
            _Out_opt_ long *plLen);
        HRESULT ( STDMETHODCALLTYPE *SetMLStr )(
            IMLangStringAStr * This,
                       long lDestPos,
                       long lDestLen,
            _In_ IUnknown *pSrcMLStr,
                       long lSrcPos,
                       long lSrcLen);
        HRESULT ( STDMETHODCALLTYPE *GetMLStr )(
            IMLangStringAStr * This,
                       long lSrcPos,
                       long lSrcLen,
            _In_ IUnknown *pUnkOuter,
                       DWORD dwClsContext,
            _In_ const IID *piid,
            _Outptr_ IUnknown **ppDestMLStr,
            _Out_opt_ long *plDestPos,
            _Out_opt_ long *plDestLen);
        HRESULT ( STDMETHODCALLTYPE *SetAStr )(
            IMLangStringAStr * This,
                       long lDestPos,
                       long lDestLen,
                       UINT uCodePage,
            _In_reads_(cchSrc) LPCSTR pszSrc,
                       long cchSrc,
            _Out_opt_ long *pcchActual,
            _Out_opt_ long *plActualLen);
        HRESULT ( STDMETHODCALLTYPE *SetStrBufA )(
            IMLangStringAStr * This,
                       long lDestPos,
                       long lDestLen,
                       UINT uCodePage,
            _In_opt_ IMLangStringBufA *pSrcBuf,
            _Out_opt_ long *pcchActual,
            _Out_opt_ long *plActualLen);
        HRESULT ( STDMETHODCALLTYPE *GetAStr )(
            IMLangStringAStr * This,
                       long lSrcPos,
                       long lSrcLen,
                       UINT uCodePageIn,
            _Reserved_ UINT *puCodePageOut,
            _Out_writes_opt_(cchDest) LPSTR pszDest,
                       long cchDest,
            _Out_opt_ long *pcchActual,
            _Out_opt_ long *plActualLen);
        HRESULT ( STDMETHODCALLTYPE *GetStrBufA )(
            IMLangStringAStr * This,
                       long lSrcPos,
                       long lSrcMaxLen,
            _Out_opt_ UINT *puDestCodePage,
            _Outptr_ IMLangStringBufA **ppDestBuf,
            _Out_opt_ long *plDestLen);
        HRESULT ( STDMETHODCALLTYPE *LockAStr )(
            IMLangStringAStr * This,
                       long lSrcPos,
                       long lSrcLen,
                       long lFlags,
                       UINT uCodePageIn,
                       long cchRequest,
            _Out_opt_ UINT *puCodePageOut,
            _Outptr_opt_result_buffer_(*pcchDest) LPSTR *ppszDest,
            _Out_opt_ long *pcchDest,
            _Out_opt_ long *plDestLen);
        HRESULT ( STDMETHODCALLTYPE *UnlockAStr )(
            IMLangStringAStr * This,
            _In_reads_(cchSrc) LPCSTR pszSrc,
                       long cchSrc,
            _Out_opt_ long *pcchActual,
            _Out_opt_ long *plActualLen);
        HRESULT ( STDMETHODCALLTYPE *SetLocale )(
            IMLangStringAStr * This,
                       long lDestPos,
                       long lDestLen,
                       LCID locale);
        HRESULT ( STDMETHODCALLTYPE *GetLocale )(
            IMLangStringAStr * This,
                       long lSrcPos,
                       long lSrcMaxLen,
            _Out_opt_ LCID *plocale,
            _Out_opt_ long *plLocalePos,
            _Out_opt_ long *plLocaleLen);
        END_INTERFACE
    } IMLangStringAStrVtbl;
    interface IMLangStringAStr
    {
        CONST_VTBL struct IMLangStringAStrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Sync(This,fNoAccess) )
    ( (This)->lpVtbl -> GetLength(This,plLen) )
    ( (This)->lpVtbl -> SetMLStr(This,lDestPos,lDestLen,pSrcMLStr,lSrcPos,lSrcLen) )
    ( (This)->lpVtbl -> GetMLStr(This,lSrcPos,lSrcLen,pUnkOuter,dwClsContext,piid,ppDestMLStr,plDestPos,plDestLen) )
    ( (This)->lpVtbl -> SetAStr(This,lDestPos,lDestLen,uCodePage,pszSrc,cchSrc,pcchActual,plActualLen) )
    ( (This)->lpVtbl -> SetStrBufA(This,lDestPos,lDestLen,uCodePage,pSrcBuf,pcchActual,plActualLen) )
    ( (This)->lpVtbl -> GetAStr(This,lSrcPos,lSrcLen,uCodePageIn,puCodePageOut,pszDest,cchDest,pcchActual,plActualLen) )
    ( (This)->lpVtbl -> GetStrBufA(This,lSrcPos,lSrcMaxLen,puDestCodePage,ppDestBuf,plDestLen) )
    ( (This)->lpVtbl -> LockAStr(This,lSrcPos,lSrcLen,lFlags,uCodePageIn,cchRequest,puCodePageOut,ppszDest,pcchDest,plDestLen) )
    ( (This)->lpVtbl -> UnlockAStr(This,pszSrc,cchSrc,pcchActual,plActualLen) )
    ( (This)->lpVtbl -> SetLocale(This,lDestPos,lDestLen,locale) )
    ( (This)->lpVtbl -> GetLocale(This,lSrcPos,lSrcMaxLen,plocale,plLocalePos,plLocaleLen) )
EXTERN_C const IID IID_IMLangLineBreakConsole;
    typedef struct IMLangLineBreakConsoleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMLangLineBreakConsole * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMLangLineBreakConsole * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMLangLineBreakConsole * This);
                           HRESULT ( STDMETHODCALLTYPE *BreakLineML )(
            IMLangLineBreakConsole * This,
            _In_ IMLangString *pSrcMLStr,
                       long lSrcPos,
                       long lSrcLen,
                       long cMinColumns,
                       long cMaxColumns,
            _Out_opt_ long *plLineLen,
            _Out_opt_ long *plSkipLen);
                           HRESULT ( STDMETHODCALLTYPE *BreakLineW )(
            IMLangLineBreakConsole * This,
                       LCID locale,
            _In_reads_(cchSrc) const WCHAR *pszSrc,
                       long cchSrc,
                       long cMaxColumns,
            _Out_opt_ long *pcchLine,
            _Out_opt_ long *pcchSkip);
                           HRESULT ( STDMETHODCALLTYPE *BreakLineA )(
            IMLangLineBreakConsole * This,
                       LCID locale,
                       UINT uCodePage,
            _In_reads_(cchSrc) const CHAR *pszSrc,
                       long cchSrc,
                       long cMaxColumns,
            _Out_opt_ long *pcchLine,
            _Out_opt_ long *pcchSkip);
        END_INTERFACE
    } IMLangLineBreakConsoleVtbl;
    interface IMLangLineBreakConsole
    {
        CONST_VTBL struct IMLangLineBreakConsoleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BreakLineML(This,pSrcMLStr,lSrcPos,lSrcLen,cMinColumns,cMaxColumns,plLineLen,plSkipLen) )
    ( (This)->lpVtbl -> BreakLineW(This,locale,pszSrc,cchSrc,cMaxColumns,pcchLine,pcchSkip) )
    ( (This)->lpVtbl -> BreakLineA(This,locale,uCodePage,pszSrc,cchSrc,cMaxColumns,pcchLine,pcchSkip) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_mlang_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mlang_0000_0006_v0_0_s_ifspec;
typedef
enum tagMIMECONTF
    {
        MIMECONTF_MAILNEWS = 0x1,
        MIMECONTF_BROWSER = 0x2,
        MIMECONTF_MINIMAL = 0x4,
        MIMECONTF_IMPORT = 0x8,
        MIMECONTF_SAVABLE_MAILNEWS = 0x100,
        MIMECONTF_SAVABLE_BROWSER = 0x200,
        MIMECONTF_EXPORT = 0x400,
        MIMECONTF_PRIVCONVERTER = 0x10000,
        MIMECONTF_VALID = 0x20000,
        MIMECONTF_VALID_NLS = 0x40000,
        MIMECONTF_MIME_IE4 = 0x10000000,
        MIMECONTF_MIME_LATEST = 0x20000000,
        MIMECONTF_MIME_REGISTRY = 0x40000000
    } MIMECONTF;
typedef struct tagMIMECPINFO
    {
    DWORD dwFlags;
    UINT uiCodePage;
    UINT uiFamilyCodePage;
    WCHAR wszDescription[ 64 ];
    WCHAR wszWebCharset[ 50 ];
    WCHAR wszHeaderCharset[ 50 ];
    WCHAR wszBodyCharset[ 50 ];
    WCHAR wszFixedWidthFont[ 32 ];
    WCHAR wszProportionalFont[ 32 ];
    BYTE bGDICharset;
    } MIMECPINFO;
typedef struct tagMIMECPINFO *PMIMECPINFO;
typedef struct tagMIMECSETINFO
    {
    UINT uiCodePage;
    UINT uiInternetEncoding;
    WCHAR wszCharset[ 50 ];
    } MIMECSETINFO;
typedef struct tagMIMECSETINFO *PMIMECSETINFO;
typedef IEnumCodePage *LPENUMCODEPAGE;
EXTERN_C const IID IID_IEnumCodePage;
    typedef struct IEnumCodePageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumCodePage * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumCodePage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumCodePage * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumCodePage * This,
            _Reserved_ IEnumCodePage **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumCodePage * This,
                       ULONG celt,
            _Out_ PMIMECPINFO rgelt,
            _Out_opt_ ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumCodePage * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumCodePage * This,
                       ULONG celt);
        END_INTERFACE
    } IEnumCodePageVtbl;
    interface IEnumCodePage
    {
        CONST_VTBL struct IEnumCodePageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
typedef struct tagRFC1766INFO
    {
    LCID lcid;
    WCHAR wszRfc1766[ 6 ];
    WCHAR wszLocaleName[ 32 ];
    } RFC1766INFO;
typedef struct tagRFC1766INFO *PRFC1766INFO;
typedef IEnumRfc1766 *LPENUMRFC1766;
EXTERN_C const IID IID_IEnumRfc1766;
    typedef struct IEnumRfc1766Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumRfc1766 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumRfc1766 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumRfc1766 * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumRfc1766 * This,
            _Reserved_ IEnumRfc1766 **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumRfc1766 * This,
                       ULONG celt,
            _Out_ PRFC1766INFO rgelt,
            _Out_opt_ ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumRfc1766 * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumRfc1766 * This,
                       ULONG celt);
        END_INTERFACE
    } IEnumRfc1766Vtbl;
    interface IEnumRfc1766
    {
        CONST_VTBL struct IEnumRfc1766Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
typedef BYTE SCRIPT_ID;
typedef __int64 SCRIPT_IDS;
typedef
enum tagSCRIPTCONTF
    {
        sidDefault = 0,
        sidMerge = ( sidDefault + 1 ) ,
        sidAsciiSym = ( sidMerge + 1 ) ,
        sidAsciiLatin = ( sidAsciiSym + 1 ) ,
        sidLatin = ( sidAsciiLatin + 1 ) ,
        sidGreek = ( sidLatin + 1 ) ,
        sidCyrillic = ( sidGreek + 1 ) ,
        sidArmenian = ( sidCyrillic + 1 ) ,
        sidHebrew = ( sidArmenian + 1 ) ,
        sidArabic = ( sidHebrew + 1 ) ,
        sidDevanagari = ( sidArabic + 1 ) ,
        sidBengali = ( sidDevanagari + 1 ) ,
        sidGurmukhi = ( sidBengali + 1 ) ,
        sidGujarati = ( sidGurmukhi + 1 ) ,
        sidOriya = ( sidGujarati + 1 ) ,
        sidTamil = ( sidOriya + 1 ) ,
        sidTelugu = ( sidTamil + 1 ) ,
        sidKannada = ( sidTelugu + 1 ) ,
        sidMalayalam = ( sidKannada + 1 ) ,
        sidThai = ( sidMalayalam + 1 ) ,
        sidLao = ( sidThai + 1 ) ,
        sidTibetan = ( sidLao + 1 ) ,
        sidGeorgian = ( sidTibetan + 1 ) ,
        sidHangul = ( sidGeorgian + 1 ) ,
        sidKana = ( sidHangul + 1 ) ,
        sidBopomofo = ( sidKana + 1 ) ,
        sidHan = ( sidBopomofo + 1 ) ,
        sidEthiopic = ( sidHan + 1 ) ,
        sidCanSyllabic = ( sidEthiopic + 1 ) ,
        sidCherokee = ( sidCanSyllabic + 1 ) ,
        sidYi = ( sidCherokee + 1 ) ,
        sidBraille = ( sidYi + 1 ) ,
        sidRunic = ( sidBraille + 1 ) ,
        sidOgham = ( sidRunic + 1 ) ,
        sidSinhala = ( sidOgham + 1 ) ,
        sidSyriac = ( sidSinhala + 1 ) ,
        sidBurmese = ( sidSyriac + 1 ) ,
        sidKhmer = ( sidBurmese + 1 ) ,
        sidThaana = ( sidKhmer + 1 ) ,
        sidMongolian = ( sidThaana + 1 ) ,
        sidUserDefined = ( sidMongolian + 1 ) ,
        sidLim = ( sidUserDefined + 1 ) ,
        sidFEFirst = sidHangul,
        sidFELast = sidHan
    } SCRIPTCONTF;
typedef struct tagSCRIPTINFO
    {
    SCRIPT_ID ScriptId;
    UINT uiCodePage;
    WCHAR wszDescription[ 48 ];
    WCHAR wszFixedWidthFont[ 32 ];
    WCHAR wszProportionalFont[ 32 ];
    } SCRIPTINFO;
typedef struct tagSCRIPTINFO *PSCRIPTINFO;
typedef IEnumScript *LPENUMScript;
EXTERN_C const IID IID_IEnumScript;
    typedef struct IEnumScriptVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumScript * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumScript * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumScript * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumScript * This,
            _Reserved_ IEnumScript **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumScript * This,
                       ULONG celt,
            _Out_ PSCRIPTINFO rgelt,
            _Out_opt_ ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumScript * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumScript * This,
                       ULONG celt);
        END_INTERFACE
    } IEnumScriptVtbl;
    interface IEnumScript
    {
        CONST_VTBL struct IEnumScriptVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
typedef
enum tagMLCONVCHARF
    {
        MLCONVCHARF_AUTODETECT = 1,
        MLCONVCHARF_ENTITIZE = 2,
        MLCONVCHARF_NCR_ENTITIZE = 2,
        MLCONVCHARF_NAME_ENTITIZE = 4,
        MLCONVCHARF_USEDEFCHAR = 8,
        MLCONVCHARF_NOBESTFITCHARS = 16,
        MLCONVCHARF_DETECTJPN = 32
    } MLCONVCHAR;
typedef
enum tagMLCPF
    {
        MLDETECTF_MAILNEWS = 0x1,
        MLDETECTF_BROWSER = 0x2,
        MLDETECTF_VALID = 0x4,
        MLDETECTF_VALID_NLS = 0x8,
        MLDETECTF_PRESERVE_ORDER = 0x10,
        MLDETECTF_PREFERRED_ONLY = 0x20,
        MLDETECTF_FILTER_SPECIALCHAR = 0x40,
        MLDETECTF_EURO_UTF8 = 0x80
    } MLCP;
typedef IMLangConvertCharset *LPMLANGCONVERTCHARSET;
EXTERN_C const IID IID_IMLangConvertCharset;
    typedef struct IMLangConvertCharsetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMLangConvertCharset * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMLangConvertCharset * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMLangConvertCharset * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IMLangConvertCharset * This,
                       UINT uiSrcCodePage,
                       UINT uiDstCodePage,
                       DWORD dwProperty);
        HRESULT ( STDMETHODCALLTYPE *GetSourceCodePage )(
            IMLangConvertCharset * This,
            _Out_ UINT *puiSrcCodePage);
        HRESULT ( STDMETHODCALLTYPE *GetDestinationCodePage )(
            IMLangConvertCharset * This,
            _Out_ UINT *puiDstCodePage);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            IMLangConvertCharset * This,
            _Out_ DWORD *pdwProperty);
        HRESULT ( STDMETHODCALLTYPE *DoConversion )(
            IMLangConvertCharset * This,
            _In_reads_bytes_(*pcSrcSize) BYTE *pSrcStr,
            _Inout_opt_ UINT *pcSrcSize,
            _Out_writes_bytes_(*pcDstSize) BYTE *pDstStr,
            _Inout_opt_ UINT *pcDstSize);
        HRESULT ( STDMETHODCALLTYPE *DoConversionToUnicode )(
            IMLangConvertCharset * This,
            _In_reads_bytes_(*pcSrcSize) CHAR *pSrcStr,
            _Inout_opt_ UINT *pcSrcSize,
            _Out_writes_(*pcDstSize) WCHAR *pDstStr,
            _Inout_opt_ UINT *pcDstSize);
        HRESULT ( STDMETHODCALLTYPE *DoConversionFromUnicode )(
            IMLangConvertCharset * This,
            _In_reads_(*pcSrcSize) WCHAR *pSrcStr,
            _Inout_opt_ UINT *pcSrcSize,
            _Out_writes_bytes_(*pcDstSize) CHAR *pDstStr,
            _Inout_opt_ UINT *pcDstSize);
        END_INTERFACE
    } IMLangConvertCharsetVtbl;
    interface IMLangConvertCharset
    {
        CONST_VTBL struct IMLangConvertCharsetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,uiSrcCodePage,uiDstCodePage,dwProperty) )
    ( (This)->lpVtbl -> GetSourceCodePage(This,puiSrcCodePage) )
    ( (This)->lpVtbl -> GetDestinationCodePage(This,puiDstCodePage) )
    ( (This)->lpVtbl -> GetProperty(This,pdwProperty) )
    ( (This)->lpVtbl -> DoConversion(This,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
    ( (This)->lpVtbl -> DoConversionToUnicode(This,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
    ( (This)->lpVtbl -> DoConversionFromUnicode(This,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
typedef IMultiLanguage *LPMULTILANGUAGE;
EXTERN_C const IID IID_IMultiLanguage;
    typedef struct IMultiLanguageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMultiLanguage * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMultiLanguage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMultiLanguage * This);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfCodePageInfo )(
            IMultiLanguage * This,
            _Out_ UINT *pcCodePage);
        HRESULT ( STDMETHODCALLTYPE *GetCodePageInfo )(
            IMultiLanguage * This,
                       UINT uiCodePage,
            _Out_ PMIMECPINFO pCodePageInfo);
        HRESULT ( STDMETHODCALLTYPE *GetFamilyCodePage )(
            IMultiLanguage * This,
                       UINT uiCodePage,
            _Out_ UINT *puiFamilyCodePage);
        HRESULT ( STDMETHODCALLTYPE *EnumCodePages )(
            IMultiLanguage * This,
                       DWORD grfFlags,
            _Outptr_ IEnumCodePage **ppEnumCodePage);
        HRESULT ( STDMETHODCALLTYPE *GetCharsetInfo )(
            IMultiLanguage * This,
                       BSTR Charset,
            _Out_ PMIMECSETINFO pCharsetInfo);
        HRESULT ( STDMETHODCALLTYPE *IsConvertible )(
            IMultiLanguage * This,
                       DWORD dwSrcEncoding,
                       DWORD dwDstEncoding);
        HRESULT ( STDMETHODCALLTYPE *ConvertString )(
            IMultiLanguage * This,
            _Inout_opt_ DWORD *pdwMode,
                       DWORD dwSrcEncoding,
                       DWORD dwDstEncoding,
            _In_reads_bytes_opt_(*pcSrcSize) BYTE *pSrcStr,
            _Inout_opt_ UINT *pcSrcSize,
            _Out_writes_bytes_to_opt_(*pcDstSize, *pcDstSize) BYTE *pDstStr,
            _Inout_opt_ UINT *pcDstSize);
        HRESULT ( STDMETHODCALLTYPE *ConvertStringToUnicode )(
            IMultiLanguage * This,
            _Inout_opt_ DWORD *pdwMode,
                       DWORD dwEncoding,
            _In_reads_bytes_opt_(*pcSrcSize) CHAR *pSrcStr,
            _Inout_opt_ UINT *pcSrcSize,
            _Out_writes_to_opt_(*pcDstSize, *pcDstSize) WCHAR *pDstStr,
            _Inout_opt_ UINT *pcDstSize);
        HRESULT ( STDMETHODCALLTYPE *ConvertStringFromUnicode )(
            IMultiLanguage * This,
            _Inout_opt_ DWORD *pdwMode,
                       DWORD dwEncoding,
            _In_reads_opt_(*pcSrcSize) WCHAR *pSrcStr,
            _Inout_opt_ UINT *pcSrcSize,
            _Out_writes_bytes_to_opt_(*pcDstSize, *pcDstSize) CHAR *pDstStr,
            _Inout_opt_ UINT *pcDstSize);
        HRESULT ( STDMETHODCALLTYPE *ConvertStringReset )(
            IMultiLanguage * This);
        HRESULT ( STDMETHODCALLTYPE *GetRfc1766FromLcid )(
            IMultiLanguage * This,
                       LCID Locale,
            _Outptr_ BSTR *pbstrRfc1766);
        HRESULT ( STDMETHODCALLTYPE *GetLcidFromRfc1766 )(
            IMultiLanguage * This,
            _Out_ LCID *pLocale,
            _In_ BSTR bstrRfc1766);
        HRESULT ( STDMETHODCALLTYPE *EnumRfc1766 )(
            IMultiLanguage * This,
            _Outptr_ IEnumRfc1766 **ppEnumRfc1766);
        HRESULT ( STDMETHODCALLTYPE *GetRfc1766Info )(
            IMultiLanguage * This,
                       LCID Locale,
            _Out_ PRFC1766INFO pRfc1766Info);
        HRESULT ( STDMETHODCALLTYPE *CreateConvertCharset )(
            IMultiLanguage * This,
                       UINT uiSrcCodePage,
                       UINT uiDstCodePage,
                       DWORD dwProperty,
            _Outptr_ IMLangConvertCharset **ppMLangConvertCharset);
        END_INTERFACE
    } IMultiLanguageVtbl;
    interface IMultiLanguage
    {
        CONST_VTBL struct IMultiLanguageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNumberOfCodePageInfo(This,pcCodePage) )
    ( (This)->lpVtbl -> GetCodePageInfo(This,uiCodePage,pCodePageInfo) )
    ( (This)->lpVtbl -> GetFamilyCodePage(This,uiCodePage,puiFamilyCodePage) )
    ( (This)->lpVtbl -> EnumCodePages(This,grfFlags,ppEnumCodePage) )
    ( (This)->lpVtbl -> GetCharsetInfo(This,Charset,pCharsetInfo) )
    ( (This)->lpVtbl -> IsConvertible(This,dwSrcEncoding,dwDstEncoding) )
    ( (This)->lpVtbl -> ConvertString(This,pdwMode,dwSrcEncoding,dwDstEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
    ( (This)->lpVtbl -> ConvertStringToUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
    ( (This)->lpVtbl -> ConvertStringFromUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
    ( (This)->lpVtbl -> ConvertStringReset(This) )
    ( (This)->lpVtbl -> GetRfc1766FromLcid(This,Locale,pbstrRfc1766) )
    ( (This)->lpVtbl -> GetLcidFromRfc1766(This,pLocale,bstrRfc1766) )
    ( (This)->lpVtbl -> EnumRfc1766(This,ppEnumRfc1766) )
    ( (This)->lpVtbl -> GetRfc1766Info(This,Locale,pRfc1766Info) )
    ( (This)->lpVtbl -> CreateConvertCharset(This,uiSrcCodePage,uiDstCodePage,dwProperty,ppMLangConvertCharset) )
extern RPC_IF_HANDLE __MIDL_itf_mlang_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mlang_0000_0011_v0_0_s_ifspec;
typedef IMultiLanguage2 *LPMULTILANGUAGE2;
typedef
enum tagMLDETECTCP
    {
        MLDETECTCP_NONE = 0,
        MLDETECTCP_7BIT = 1,
        MLDETECTCP_8BIT = 2,
        MLDETECTCP_DBCS = 4,
        MLDETECTCP_HTML = 8,
        MLDETECTCP_NUMBER = 16
    } MLDETECTCP;
typedef struct tagDetectEncodingInfo
    {
    UINT nLangID;
    UINT nCodePage;
    INT nDocPercent;
    INT nConfidence;
    } DetectEncodingInfo;
typedef struct tagDetectEncodingInfo *pDetectEncodingInfo;
typedef
enum tagSCRIPTFONTCONTF
    {
        SCRIPTCONTF_FIXED_FONT = 0x1,
        SCRIPTCONTF_PROPORTIONAL_FONT = 0x2,
        SCRIPTCONTF_SCRIPT_USER = 0x10000,
        SCRIPTCONTF_SCRIPT_HIDE = 0x20000,
        SCRIPTCONTF_SCRIPT_SYSTEM = 0x40000
    } SCRIPTFONTCONTF;
typedef struct tagSCRIPFONTINFO
    {
    SCRIPT_IDS scripts;
    WCHAR wszFont[ 32 ];
    } SCRIPTFONTINFO;
typedef struct tagSCRIPFONTINFO *PSCRIPTFONTINFO;
EXTERN_C const IID IID_IMultiLanguage2;
    typedef struct IMultiLanguage2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMultiLanguage2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMultiLanguage2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMultiLanguage2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfCodePageInfo )(
            IMultiLanguage2 * This,
            _Out_ UINT *pcCodePage);
        HRESULT ( STDMETHODCALLTYPE *GetCodePageInfo )(
            IMultiLanguage2 * This,
                       UINT uiCodePage,
                       LANGID LangId,
            _Out_ PMIMECPINFO pCodePageInfo);
        HRESULT ( STDMETHODCALLTYPE *GetFamilyCodePage )(
            IMultiLanguage2 * This,
                       UINT uiCodePage,
            _Out_ UINT *puiFamilyCodePage);
        HRESULT ( STDMETHODCALLTYPE *EnumCodePages )(
            IMultiLanguage2 * This,
                       DWORD grfFlags,
                       LANGID LangId,
            _Outptr_ IEnumCodePage **ppEnumCodePage);
        HRESULT ( STDMETHODCALLTYPE *GetCharsetInfo )(
            IMultiLanguage2 * This,
                       BSTR Charset,
            _Out_ PMIMECSETINFO pCharsetInfo);
        HRESULT ( STDMETHODCALLTYPE *IsConvertible )(
            IMultiLanguage2 * This,
                       DWORD dwSrcEncoding,
                       DWORD dwDstEncoding);
        HRESULT ( STDMETHODCALLTYPE *ConvertString )(
            IMultiLanguage2 * This,
            _Inout_opt_ DWORD *pdwMode,
                       DWORD dwSrcEncoding,
                       DWORD dwDstEncoding,
            _In_reads_bytes_opt_(*pcSrcSize) BYTE *pSrcStr,
            _Inout_opt_ UINT *pcSrcSize,
            _Out_writes_bytes_opt_(*pcDstSize) BYTE *pDstStr,
            _Inout_opt_ UINT *pcDstSize);
        HRESULT ( STDMETHODCALLTYPE *ConvertStringToUnicode )(
            IMultiLanguage2 * This,
            _Inout_opt_ DWORD *pdwMode,
                       DWORD dwEncoding,
            _In_reads_bytes_opt_(*pcSrcSize) CHAR *pSrcStr,
            _Inout_opt_ UINT *pcSrcSize,
            _Out_writes_opt_(*pcDstSize) WCHAR *pDstStr,
            _Inout_opt_ UINT *pcDstSize);
        HRESULT ( STDMETHODCALLTYPE *ConvertStringFromUnicode )(
            IMultiLanguage2 * This,
            _Inout_opt_ DWORD *pdwMode,
                       DWORD dwEncoding,
            _In_reads_opt_(*pcSrcSize) WCHAR *pSrcStr,
            _Inout_opt_ UINT *pcSrcSize,
            _Out_writes_bytes_opt_(*pcDstSize) CHAR *pDstStr,
            _Inout_opt_ UINT *pcDstSize);
        HRESULT ( STDMETHODCALLTYPE *ConvertStringReset )(
            IMultiLanguage2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRfc1766FromLcid )(
            IMultiLanguage2 * This,
                       LCID Locale,
            _Outptr_ BSTR *pbstrRfc1766);
        HRESULT ( STDMETHODCALLTYPE *GetLcidFromRfc1766 )(
            IMultiLanguage2 * This,
            _Out_ LCID *pLocale,
            _In_ BSTR bstrRfc1766);
        HRESULT ( STDMETHODCALLTYPE *EnumRfc1766 )(
            IMultiLanguage2 * This,
                       LANGID LangId,
            _Outptr_ IEnumRfc1766 **ppEnumRfc1766);
        HRESULT ( STDMETHODCALLTYPE *GetRfc1766Info )(
            IMultiLanguage2 * This,
                       LCID Locale,
                       LANGID LangId,
            _Out_ PRFC1766INFO pRfc1766Info);
        HRESULT ( STDMETHODCALLTYPE *CreateConvertCharset )(
            IMultiLanguage2 * This,
                       UINT uiSrcCodePage,
                       UINT uiDstCodePage,
                       DWORD dwProperty,
            _Outptr_ IMLangConvertCharset **ppMLangConvertCharset);
        HRESULT ( STDMETHODCALLTYPE *ConvertStringInIStream )(
            IMultiLanguage2 * This,
            _Inout_opt_ DWORD *pdwMode,
                       DWORD dwFlag,
            _In_opt_ WCHAR *lpFallBack,
                       DWORD dwSrcEncoding,
                       DWORD dwDstEncoding,
            _In_ IStream *pstmIn,
            _In_ IStream *pstmOut);
        HRESULT ( STDMETHODCALLTYPE *ConvertStringToUnicodeEx )(
            IMultiLanguage2 * This,
            _Inout_opt_ DWORD *pdwMode,
                       DWORD dwEncoding,
            _In_reads_bytes_(*pcSrcSize) CHAR *pSrcStr,
            _Inout_opt_ UINT *pcSrcSize,
            _Out_writes_(*pcDstSize) WCHAR *pDstStr,
            _Inout_opt_ UINT *pcDstSize,
                       DWORD dwFlag,
            _In_opt_ WCHAR *lpFallBack);
        HRESULT ( STDMETHODCALLTYPE *ConvertStringFromUnicodeEx )(
            IMultiLanguage2 * This,
            _Inout_opt_ DWORD *pdwMode,
                       DWORD dwEncoding,
            _In_reads_(*pcSrcSize) WCHAR *pSrcStr,
            _Inout_opt_ UINT *pcSrcSize,
            _Out_writes_bytes_(*pcDstSize) CHAR *pDstStr,
            _Inout_opt_ UINT *pcDstSize,
                       DWORD dwFlag,
            _In_opt_ WCHAR *lpFallBack);
        HRESULT ( STDMETHODCALLTYPE *DetectCodepageInIStream )(
            IMultiLanguage2 * This,
                       DWORD dwFlag,
                       DWORD dwPrefWinCodePage,
            _In_ IStream *pstmIn,
            _Out_ DetectEncodingInfo *lpEncoding,
            _Inout_ INT *pnScores);
        HRESULT ( STDMETHODCALLTYPE *DetectInputCodepage )(
            IMultiLanguage2 * This,
                       DWORD dwFlag,
                       DWORD dwPrefWinCodePage,
            _In_reads_bytes_(*pcSrcSize) CHAR *pSrcStr,
            _Inout_ INT *pcSrcSize,
            _Out_ DetectEncodingInfo *lpEncoding,
            _Inout_ INT *pnScores);
        HRESULT ( STDMETHODCALLTYPE *ValidateCodePage )(
            IMultiLanguage2 * This,
                       UINT uiCodePage,
                       HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *GetCodePageDescription )(
            IMultiLanguage2 * This,
                       UINT uiCodePage,
                       LCID lcid,
            _Out_writes_(cchWideChar) LPWSTR lpWideCharStr,
                       int cchWideChar);
        HRESULT ( STDMETHODCALLTYPE *IsCodePageInstallable )(
            IMultiLanguage2 * This,
                       UINT uiCodePage);
        HRESULT ( STDMETHODCALLTYPE *SetMimeDBSource )(
            IMultiLanguage2 * This,
                       MIMECONTF dwSource);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfScripts )(
            IMultiLanguage2 * This,
            _Out_ UINT *pnScripts);
        HRESULT ( STDMETHODCALLTYPE *EnumScripts )(
            IMultiLanguage2 * This,
                       DWORD dwFlags,
                       LANGID LangId,
            _Outptr_ IEnumScript **ppEnumScript);
        HRESULT ( STDMETHODCALLTYPE *ValidateCodePageEx )(
            IMultiLanguage2 * This,
                       UINT uiCodePage,
                       HWND hwnd,
                       DWORD dwfIODControl);
        END_INTERFACE
    } IMultiLanguage2Vtbl;
    interface IMultiLanguage2
    {
        CONST_VTBL struct IMultiLanguage2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNumberOfCodePageInfo(This,pcCodePage) )
    ( (This)->lpVtbl -> GetCodePageInfo(This,uiCodePage,LangId,pCodePageInfo) )
    ( (This)->lpVtbl -> GetFamilyCodePage(This,uiCodePage,puiFamilyCodePage) )
    ( (This)->lpVtbl -> EnumCodePages(This,grfFlags,LangId,ppEnumCodePage) )
    ( (This)->lpVtbl -> GetCharsetInfo(This,Charset,pCharsetInfo) )
    ( (This)->lpVtbl -> IsConvertible(This,dwSrcEncoding,dwDstEncoding) )
    ( (This)->lpVtbl -> ConvertString(This,pdwMode,dwSrcEncoding,dwDstEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
    ( (This)->lpVtbl -> ConvertStringToUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
    ( (This)->lpVtbl -> ConvertStringFromUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
    ( (This)->lpVtbl -> ConvertStringReset(This) )
    ( (This)->lpVtbl -> GetRfc1766FromLcid(This,Locale,pbstrRfc1766) )
    ( (This)->lpVtbl -> GetLcidFromRfc1766(This,pLocale,bstrRfc1766) )
    ( (This)->lpVtbl -> EnumRfc1766(This,LangId,ppEnumRfc1766) )
    ( (This)->lpVtbl -> GetRfc1766Info(This,Locale,LangId,pRfc1766Info) )
    ( (This)->lpVtbl -> CreateConvertCharset(This,uiSrcCodePage,uiDstCodePage,dwProperty,ppMLangConvertCharset) )
    ( (This)->lpVtbl -> ConvertStringInIStream(This,pdwMode,dwFlag,lpFallBack,dwSrcEncoding,dwDstEncoding,pstmIn,pstmOut) )
    ( (This)->lpVtbl -> ConvertStringToUnicodeEx(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize,dwFlag,lpFallBack) )
    ( (This)->lpVtbl -> ConvertStringFromUnicodeEx(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize,dwFlag,lpFallBack) )
    ( (This)->lpVtbl -> DetectCodepageInIStream(This,dwFlag,dwPrefWinCodePage,pstmIn,lpEncoding,pnScores) )
    ( (This)->lpVtbl -> DetectInputCodepage(This,dwFlag,dwPrefWinCodePage,pSrcStr,pcSrcSize,lpEncoding,pnScores) )
    ( (This)->lpVtbl -> ValidateCodePage(This,uiCodePage,hwnd) )
    ( (This)->lpVtbl -> GetCodePageDescription(This,uiCodePage,lcid,lpWideCharStr,cchWideChar) )
    ( (This)->lpVtbl -> IsCodePageInstallable(This,uiCodePage) )
    ( (This)->lpVtbl -> SetMimeDBSource(This,dwSource) )
    ( (This)->lpVtbl -> GetNumberOfScripts(This,pnScripts) )
    ( (This)->lpVtbl -> EnumScripts(This,dwFlags,LangId,ppEnumScript) )
    ( (This)->lpVtbl -> ValidateCodePageEx(This,uiCodePage,hwnd,dwfIODControl) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mlang_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mlang_0000_0012_v0_0_s_ifspec;
typedef IMLangCodePages *PMLANGCODEPAGES;
EXTERN_C const IID IID_IMLangCodePages;
    typedef struct IMLangCodePagesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMLangCodePages * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMLangCodePages * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMLangCodePages * This);
                           HRESULT ( STDMETHODCALLTYPE *GetCharCodePages )(
            IMLangCodePages * This,
                       WCHAR chSrc,
            _Out_ DWORD *pdwCodePages);
                           HRESULT ( STDMETHODCALLTYPE *GetStrCodePages )(
            IMLangCodePages * This,
            _In_reads_(cchSrc) const WCHAR *pszSrc,
                       long cchSrc,
                       DWORD dwPriorityCodePages,
            _Out_opt_ DWORD *pdwCodePages,
            _Out_opt_ long *pcchCodePages);
                           HRESULT ( STDMETHODCALLTYPE *CodePageToCodePages )(
            IMLangCodePages * This,
                       UINT uCodePage,
            _Out_ DWORD *pdwCodePages);
                           HRESULT ( STDMETHODCALLTYPE *CodePagesToCodePage )(
            IMLangCodePages * This,
                       DWORD dwCodePages,
                       UINT uDefaultCodePage,
            _Out_ UINT *puCodePage);
        END_INTERFACE
    } IMLangCodePagesVtbl;
    interface IMLangCodePages
    {
        CONST_VTBL struct IMLangCodePagesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCharCodePages(This,chSrc,pdwCodePages) )
    ( (This)->lpVtbl -> GetStrCodePages(This,pszSrc,cchSrc,dwPriorityCodePages,pdwCodePages,pcchCodePages) )
    ( (This)->lpVtbl -> CodePageToCodePages(This,uCodePage,pdwCodePages) )
    ( (This)->lpVtbl -> CodePagesToCodePage(This,dwCodePages,uDefaultCodePage,puCodePage) )
typedef IMLangFontLink *PMLANGFONTLINK;
EXTERN_C const IID IID_IMLangFontLink;
    typedef struct IMLangFontLinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMLangFontLink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMLangFontLink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMLangFontLink * This);
                           HRESULT ( STDMETHODCALLTYPE *GetCharCodePages )(
            IMLangFontLink * This,
                       WCHAR chSrc,
            _Out_ DWORD *pdwCodePages);
                           HRESULT ( STDMETHODCALLTYPE *GetStrCodePages )(
            IMLangFontLink * This,
            _In_reads_(cchSrc) const WCHAR *pszSrc,
                       long cchSrc,
                       DWORD dwPriorityCodePages,
            _Out_opt_ DWORD *pdwCodePages,
            _Out_opt_ long *pcchCodePages);
                           HRESULT ( STDMETHODCALLTYPE *CodePageToCodePages )(
            IMLangFontLink * This,
                       UINT uCodePage,
            _Out_ DWORD *pdwCodePages);
                           HRESULT ( STDMETHODCALLTYPE *CodePagesToCodePage )(
            IMLangFontLink * This,
                       DWORD dwCodePages,
                       UINT uDefaultCodePage,
            _Out_ UINT *puCodePage);
                           HRESULT ( STDMETHODCALLTYPE *GetFontCodePages )(
            IMLangFontLink * This,
                       HDC hDC,
                       HFONT hFont,
            _Out_opt_ DWORD *pdwCodePages);
                           HRESULT ( STDMETHODCALLTYPE *MapFont )(
            IMLangFontLink * This,
                       HDC hDC,
                       DWORD dwCodePages,
                       HFONT hSrcFont,
            _Out_opt_ HFONT *phDestFont);
                           HRESULT ( STDMETHODCALLTYPE *ReleaseFont )(
            IMLangFontLink * This,
                       HFONT hFont);
                           HRESULT ( STDMETHODCALLTYPE *ResetFontMapping )(
            IMLangFontLink * This);
        END_INTERFACE
    } IMLangFontLinkVtbl;
    interface IMLangFontLink
    {
        CONST_VTBL struct IMLangFontLinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCharCodePages(This,chSrc,pdwCodePages) )
    ( (This)->lpVtbl -> GetStrCodePages(This,pszSrc,cchSrc,dwPriorityCodePages,pdwCodePages,pcchCodePages) )
    ( (This)->lpVtbl -> CodePageToCodePages(This,uCodePage,pdwCodePages) )
    ( (This)->lpVtbl -> CodePagesToCodePage(This,dwCodePages,uDefaultCodePage,puCodePage) )
    ( (This)->lpVtbl -> GetFontCodePages(This,hDC,hFont,pdwCodePages) )
    ( (This)->lpVtbl -> MapFont(This,hDC,dwCodePages,hSrcFont,phDestFont) )
    ( (This)->lpVtbl -> ReleaseFont(This,hFont) )
    ( (This)->lpVtbl -> ResetFontMapping(This) )
typedef struct tagUNICODERANGE
    {
    WCHAR wcFrom;
    WCHAR wcTo;
    } UNICODERANGE;
typedef IMLangFontLink2 *PMLANGFONTLINK2;
EXTERN_C const IID IID_IMLangFontLink2;
    typedef struct IMLangFontLink2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMLangFontLink2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMLangFontLink2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMLangFontLink2 * This);
                           HRESULT ( STDMETHODCALLTYPE *GetCharCodePages )(
            IMLangFontLink2 * This,
                       WCHAR chSrc,
            _Out_ DWORD *pdwCodePages);
                           HRESULT ( STDMETHODCALLTYPE *GetStrCodePages )(
            IMLangFontLink2 * This,
            _In_reads_(cchSrc) const WCHAR *pszSrc,
                       long cchSrc,
                       DWORD dwPriorityCodePages,
            _Out_opt_ DWORD *pdwCodePages,
            _Out_opt_ long *pcchCodePages);
                           HRESULT ( STDMETHODCALLTYPE *CodePageToCodePages )(
            IMLangFontLink2 * This,
                       UINT uCodePage,
            _Out_ DWORD *pdwCodePages);
                           HRESULT ( STDMETHODCALLTYPE *CodePagesToCodePage )(
            IMLangFontLink2 * This,
                       DWORD dwCodePages,
                       UINT uDefaultCodePage,
            _Out_ UINT *puCodePage);
                           HRESULT ( STDMETHODCALLTYPE *GetFontCodePages )(
            IMLangFontLink2 * This,
                       HDC hDC,
                       HFONT hFont,
            _Out_opt_ DWORD *pdwCodePages);
                           HRESULT ( STDMETHODCALLTYPE *ReleaseFont )(
            IMLangFontLink2 * This,
                       HFONT hFont);
                           HRESULT ( STDMETHODCALLTYPE *ResetFontMapping )(
            IMLangFontLink2 * This);
                           HRESULT ( STDMETHODCALLTYPE *MapFont )(
            IMLangFontLink2 * This,
                       HDC hDC,
                       DWORD dwCodePages,
                       WCHAR chSrc,
            _Out_opt_ HFONT *pFont);
                           HRESULT ( STDMETHODCALLTYPE *GetFontUnicodeRanges )(
            IMLangFontLink2 * This,
                       HDC hDC,
            _In_ UINT *puiRanges,
            _Out_opt_ UNICODERANGE *pUranges);
                           HRESULT ( STDMETHODCALLTYPE *GetScriptFontInfo )(
            IMLangFontLink2 * This,
                       SCRIPT_ID sid,
                       DWORD dwFlags,
            _Inout_ UINT *puiFonts,
            _Out_opt_ SCRIPTFONTINFO *pScriptFont);
                           HRESULT ( STDMETHODCALLTYPE *CodePageToScriptID )(
            IMLangFontLink2 * This,
                       UINT uiCodePage,
            _Out_ SCRIPT_ID *pSid);
        END_INTERFACE
    } IMLangFontLink2Vtbl;
    interface IMLangFontLink2
    {
        CONST_VTBL struct IMLangFontLink2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCharCodePages(This,chSrc,pdwCodePages) )
    ( (This)->lpVtbl -> GetStrCodePages(This,pszSrc,cchSrc,dwPriorityCodePages,pdwCodePages,pcchCodePages) )
    ( (This)->lpVtbl -> CodePageToCodePages(This,uCodePage,pdwCodePages) )
    ( (This)->lpVtbl -> CodePagesToCodePage(This,dwCodePages,uDefaultCodePage,puCodePage) )
    ( (This)->lpVtbl -> GetFontCodePages(This,hDC,hFont,pdwCodePages) )
    ( (This)->lpVtbl -> ReleaseFont(This,hFont) )
    ( (This)->lpVtbl -> ResetFontMapping(This) )
    ( (This)->lpVtbl -> MapFont(This,hDC,dwCodePages,chSrc,pFont) )
    ( (This)->lpVtbl -> GetFontUnicodeRanges(This,hDC,puiRanges,pUranges) )
    ( (This)->lpVtbl -> GetScriptFontInfo(This,sid,dwFlags,puiFonts,pScriptFont) )
    ( (This)->lpVtbl -> CodePageToScriptID(This,uiCodePage,pSid) )
typedef IMultiLanguage3 *LPMULTILANGUAGE3;
EXTERN_C const IID IID_IMultiLanguage3;
    typedef struct IMultiLanguage3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMultiLanguage3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMultiLanguage3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMultiLanguage3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfCodePageInfo )(
            IMultiLanguage3 * This,
            _Out_ UINT *pcCodePage);
        HRESULT ( STDMETHODCALLTYPE *GetCodePageInfo )(
            IMultiLanguage3 * This,
                       UINT uiCodePage,
                       LANGID LangId,
            _Out_ PMIMECPINFO pCodePageInfo);
        HRESULT ( STDMETHODCALLTYPE *GetFamilyCodePage )(
            IMultiLanguage3 * This,
                       UINT uiCodePage,
            _Out_ UINT *puiFamilyCodePage);
        HRESULT ( STDMETHODCALLTYPE *EnumCodePages )(
            IMultiLanguage3 * This,
                       DWORD grfFlags,
                       LANGID LangId,
            _Outptr_ IEnumCodePage **ppEnumCodePage);
        HRESULT ( STDMETHODCALLTYPE *GetCharsetInfo )(
            IMultiLanguage3 * This,
                       BSTR Charset,
            _Out_ PMIMECSETINFO pCharsetInfo);
        HRESULT ( STDMETHODCALLTYPE *IsConvertible )(
            IMultiLanguage3 * This,
                       DWORD dwSrcEncoding,
                       DWORD dwDstEncoding);
        HRESULT ( STDMETHODCALLTYPE *ConvertString )(
            IMultiLanguage3 * This,
            _Inout_opt_ DWORD *pdwMode,
                       DWORD dwSrcEncoding,
                       DWORD dwDstEncoding,
            _In_reads_bytes_opt_(*pcSrcSize) BYTE *pSrcStr,
            _Inout_opt_ UINT *pcSrcSize,
            _Out_writes_bytes_opt_(*pcDstSize) BYTE *pDstStr,
            _Inout_opt_ UINT *pcDstSize);
        HRESULT ( STDMETHODCALLTYPE *ConvertStringToUnicode )(
            IMultiLanguage3 * This,
            _Inout_opt_ DWORD *pdwMode,
                       DWORD dwEncoding,
            _In_reads_bytes_opt_(*pcSrcSize) CHAR *pSrcStr,
            _Inout_opt_ UINT *pcSrcSize,
            _Out_writes_opt_(*pcDstSize) WCHAR *pDstStr,
            _Inout_opt_ UINT *pcDstSize);
        HRESULT ( STDMETHODCALLTYPE *ConvertStringFromUnicode )(
            IMultiLanguage3 * This,
            _Inout_opt_ DWORD *pdwMode,
                       DWORD dwEncoding,
            _In_reads_opt_(*pcSrcSize) WCHAR *pSrcStr,
            _Inout_opt_ UINT *pcSrcSize,
            _Out_writes_bytes_opt_(*pcDstSize) CHAR *pDstStr,
            _Inout_opt_ UINT *pcDstSize);
        HRESULT ( STDMETHODCALLTYPE *ConvertStringReset )(
            IMultiLanguage3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRfc1766FromLcid )(
            IMultiLanguage3 * This,
                       LCID Locale,
            _Outptr_ BSTR *pbstrRfc1766);
        HRESULT ( STDMETHODCALLTYPE *GetLcidFromRfc1766 )(
            IMultiLanguage3 * This,
            _Out_ LCID *pLocale,
            _In_ BSTR bstrRfc1766);
        HRESULT ( STDMETHODCALLTYPE *EnumRfc1766 )(
            IMultiLanguage3 * This,
                       LANGID LangId,
            _Outptr_ IEnumRfc1766 **ppEnumRfc1766);
        HRESULT ( STDMETHODCALLTYPE *GetRfc1766Info )(
            IMultiLanguage3 * This,
                       LCID Locale,
                       LANGID LangId,
            _Out_ PRFC1766INFO pRfc1766Info);
        HRESULT ( STDMETHODCALLTYPE *CreateConvertCharset )(
            IMultiLanguage3 * This,
                       UINT uiSrcCodePage,
                       UINT uiDstCodePage,
                       DWORD dwProperty,
            _Outptr_ IMLangConvertCharset **ppMLangConvertCharset);
        HRESULT ( STDMETHODCALLTYPE *ConvertStringInIStream )(
            IMultiLanguage3 * This,
            _Inout_opt_ DWORD *pdwMode,
                       DWORD dwFlag,
            _In_opt_ WCHAR *lpFallBack,
                       DWORD dwSrcEncoding,
                       DWORD dwDstEncoding,
            _In_ IStream *pstmIn,
            _In_ IStream *pstmOut);
        HRESULT ( STDMETHODCALLTYPE *ConvertStringToUnicodeEx )(
            IMultiLanguage3 * This,
            _Inout_opt_ DWORD *pdwMode,
                       DWORD dwEncoding,
            _In_reads_bytes_(*pcSrcSize) CHAR *pSrcStr,
            _Inout_opt_ UINT *pcSrcSize,
            _Out_writes_(*pcDstSize) WCHAR *pDstStr,
            _Inout_opt_ UINT *pcDstSize,
                       DWORD dwFlag,
            _In_opt_ WCHAR *lpFallBack);
        HRESULT ( STDMETHODCALLTYPE *ConvertStringFromUnicodeEx )(
            IMultiLanguage3 * This,
            _Inout_opt_ DWORD *pdwMode,
                       DWORD dwEncoding,
            _In_reads_(*pcSrcSize) WCHAR *pSrcStr,
            _Inout_opt_ UINT *pcSrcSize,
            _Out_writes_bytes_(*pcDstSize) CHAR *pDstStr,
            _Inout_opt_ UINT *pcDstSize,
                       DWORD dwFlag,
            _In_opt_ WCHAR *lpFallBack);
        HRESULT ( STDMETHODCALLTYPE *DetectCodepageInIStream )(
            IMultiLanguage3 * This,
                       DWORD dwFlag,
                       DWORD dwPrefWinCodePage,
            _In_ IStream *pstmIn,
            _Out_ DetectEncodingInfo *lpEncoding,
            _Inout_ INT *pnScores);
        HRESULT ( STDMETHODCALLTYPE *DetectInputCodepage )(
            IMultiLanguage3 * This,
                       DWORD dwFlag,
                       DWORD dwPrefWinCodePage,
            _In_reads_bytes_(*pcSrcSize) CHAR *pSrcStr,
            _Inout_ INT *pcSrcSize,
            _Out_ DetectEncodingInfo *lpEncoding,
            _Inout_ INT *pnScores);
        HRESULT ( STDMETHODCALLTYPE *ValidateCodePage )(
            IMultiLanguage3 * This,
                       UINT uiCodePage,
                       HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *GetCodePageDescription )(
            IMultiLanguage3 * This,
                       UINT uiCodePage,
                       LCID lcid,
            _Out_writes_(cchWideChar) LPWSTR lpWideCharStr,
                       int cchWideChar);
        HRESULT ( STDMETHODCALLTYPE *IsCodePageInstallable )(
            IMultiLanguage3 * This,
                       UINT uiCodePage);
        HRESULT ( STDMETHODCALLTYPE *SetMimeDBSource )(
            IMultiLanguage3 * This,
                       MIMECONTF dwSource);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfScripts )(
            IMultiLanguage3 * This,
            _Out_ UINT *pnScripts);
        HRESULT ( STDMETHODCALLTYPE *EnumScripts )(
            IMultiLanguage3 * This,
                       DWORD dwFlags,
                       LANGID LangId,
            _Outptr_ IEnumScript **ppEnumScript);
        HRESULT ( STDMETHODCALLTYPE *ValidateCodePageEx )(
            IMultiLanguage3 * This,
                       UINT uiCodePage,
                       HWND hwnd,
                       DWORD dwfIODControl);
        HRESULT ( STDMETHODCALLTYPE *DetectOutboundCodePage )(
            IMultiLanguage3 * This,
                       DWORD dwFlags,
            _In_reads_(cchWideChar) LPCWSTR lpWideCharStr,
                       UINT cchWideChar,
            _In_reads_opt_(nPreferredCodePages) const UINT *puiPreferredCodePages,
                       UINT nPreferredCodePages,
            _Out_writes_to_(*pnDetectedCodePages, *pnDetectedCodePages) UINT *puiDetectedCodePages,
            _Inout_ UINT *pnDetectedCodePages,
            _In_opt_ LPCWSTR lpSpecialChar);
        HRESULT ( STDMETHODCALLTYPE *DetectOutboundCodePageInIStream )(
            IMultiLanguage3 * This,
                       DWORD dwFlags,
            _In_ IStream *pStrIn,
            _In_reads_opt_(nPreferredCodePages) const UINT *puiPreferredCodePages,
                       UINT nPreferredCodePages,
            _Out_writes_to_(*pnDetectedCodePages, *pnDetectedCodePages) UINT *puiDetectedCodePages,
            _Inout_ UINT *pnDetectedCodePages,
            _In_opt_ LPCWSTR lpSpecialChar);
        END_INTERFACE
    } IMultiLanguage3Vtbl;
    interface IMultiLanguage3
    {
        CONST_VTBL struct IMultiLanguage3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNumberOfCodePageInfo(This,pcCodePage) )
    ( (This)->lpVtbl -> GetCodePageInfo(This,uiCodePage,LangId,pCodePageInfo) )
    ( (This)->lpVtbl -> GetFamilyCodePage(This,uiCodePage,puiFamilyCodePage) )
    ( (This)->lpVtbl -> EnumCodePages(This,grfFlags,LangId,ppEnumCodePage) )
    ( (This)->lpVtbl -> GetCharsetInfo(This,Charset,pCharsetInfo) )
    ( (This)->lpVtbl -> IsConvertible(This,dwSrcEncoding,dwDstEncoding) )
    ( (This)->lpVtbl -> ConvertString(This,pdwMode,dwSrcEncoding,dwDstEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
    ( (This)->lpVtbl -> ConvertStringToUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
    ( (This)->lpVtbl -> ConvertStringFromUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
    ( (This)->lpVtbl -> ConvertStringReset(This) )
    ( (This)->lpVtbl -> GetRfc1766FromLcid(This,Locale,pbstrRfc1766) )
    ( (This)->lpVtbl -> GetLcidFromRfc1766(This,pLocale,bstrRfc1766) )
    ( (This)->lpVtbl -> EnumRfc1766(This,LangId,ppEnumRfc1766) )
    ( (This)->lpVtbl -> GetRfc1766Info(This,Locale,LangId,pRfc1766Info) )
    ( (This)->lpVtbl -> CreateConvertCharset(This,uiSrcCodePage,uiDstCodePage,dwProperty,ppMLangConvertCharset) )
    ( (This)->lpVtbl -> ConvertStringInIStream(This,pdwMode,dwFlag,lpFallBack,dwSrcEncoding,dwDstEncoding,pstmIn,pstmOut) )
    ( (This)->lpVtbl -> ConvertStringToUnicodeEx(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize,dwFlag,lpFallBack) )
    ( (This)->lpVtbl -> ConvertStringFromUnicodeEx(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize,dwFlag,lpFallBack) )
    ( (This)->lpVtbl -> DetectCodepageInIStream(This,dwFlag,dwPrefWinCodePage,pstmIn,lpEncoding,pnScores) )
    ( (This)->lpVtbl -> DetectInputCodepage(This,dwFlag,dwPrefWinCodePage,pSrcStr,pcSrcSize,lpEncoding,pnScores) )
    ( (This)->lpVtbl -> ValidateCodePage(This,uiCodePage,hwnd) )
    ( (This)->lpVtbl -> GetCodePageDescription(This,uiCodePage,lcid,lpWideCharStr,cchWideChar) )
    ( (This)->lpVtbl -> IsCodePageInstallable(This,uiCodePage) )
    ( (This)->lpVtbl -> SetMimeDBSource(This,dwSource) )
    ( (This)->lpVtbl -> GetNumberOfScripts(This,pnScripts) )
    ( (This)->lpVtbl -> EnumScripts(This,dwFlags,LangId,ppEnumScript) )
    ( (This)->lpVtbl -> ValidateCodePageEx(This,uiCodePage,hwnd,dwfIODControl) )
    ( (This)->lpVtbl -> DetectOutboundCodePage(This,dwFlags,lpWideCharStr,cchWideChar,puiPreferredCodePages,nPreferredCodePages,puiDetectedCodePages,pnDetectedCodePages,lpSpecialChar) )
    ( (This)->lpVtbl -> DetectOutboundCodePageInIStream(This,dwFlags,pStrIn,puiPreferredCodePages,nPreferredCodePages,puiDetectedCodePages,pnDetectedCodePages,lpSpecialChar) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mlang_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mlang_0000_0016_v0_0_s_ifspec;
typedef WORD LANGID;
typedef
enum tagMLSTR_FLAGS
    {
        MLSTR_READ = 1,
        MLSTR_WRITE = 2
    } MLSTR_FLAGS;
EXTERN_C const IID LIBID_MultiLanguage;
EXTERN_C const CLSID CLSID_CMLangString;
class DECLSPEC_UUID("C04D65CF-B70D-11D0-B188-00AA0038C969")
CMLangString;
EXTERN_C const CLSID CLSID_CMLangConvertCharset;
class DECLSPEC_UUID("d66d6f99-cdaa-11d0-b822-00c04fc9b31f")
CMLangConvertCharset;
EXTERN_C const CLSID CLSID_CMultiLanguage;
class DECLSPEC_UUID("275c23e2-3747-11d0-9fea-00aa003f8646")
CMultiLanguage;
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI LcidToRfc1766A(_In_ LCID Locale, _Out_writes_bytes_(iMaxLength) LPSTR pszRfc1766, _In_ int iMaxLength);
STDAPI LcidToRfc1766W(_In_ LCID Locale, _Out_writes_(nChar) LPWSTR pwszRfc1766, _In_ int nChar);
STDAPI Rfc1766ToLcidA(_Out_ LCID *pLocale, _In_ LPCSTR pszRfc1766);
STDAPI Rfc1766ToLcidW(_Out_ LCID *pLocale, _In_ LPCWSTR pszRfc1766);
STDAPI IsConvertINetStringAvailable(DWORD dwSrcEncoding, DWORD dwDstEncoding);
STDAPI ConvertINetString(_Inout_opt_ LPDWORD lpdwMode, _In_ DWORD dwSrcEncoding, _In_ DWORD dwDstEncoding, _In_reads_bytes_opt_(*lpnSrcSize) LPCSTR lpSrcStr, _Inout_opt_ LPINT lpnSrcSize, _Out_writes_bytes_to_opt_(*lpnDstSize, *lpnDstSize) LPSTR lpDstStr, _Inout_opt_ LPINT lpnDstSize);
STDAPI ConvertINetMultiByteToUnicode(_Inout_opt_ LPDWORD lpdwMode, _In_ DWORD dwEncoding, _In_reads_bytes_opt_(*lpnMultiCharCount) LPCSTR lpSrcStr, _Inout_opt_ LPINT lpnMultiCharCount, _Out_writes_to_opt_(*lpnWideCharCount, *lpnWideCharCount) LPWSTR lpDstStr, _Inout_opt_ LPINT lpnWideCharCount);
STDAPI ConvertINetUnicodeToMultiByte(_Inout_opt_ LPDWORD lpdwMode, _In_ DWORD dwEncoding, _In_reads_opt_(*lpnWideCharCount) LPCWSTR lpSrcStr, _Inout_opt_ LPINT lpnWideCharCount, _Out_writes_bytes_to_opt_(*lpnMultiCharCount, *lpnMultiCharCount) LPSTR lpDstStr, _Inout_opt_ LPINT lpnMultiCharCount);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mlang_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mlang_0000_0017_v0_0_s_ifspec;
}
