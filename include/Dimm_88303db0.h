#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IEnumRegisterWordA IEnumRegisterWordA;
typedef interface IEnumRegisterWordW IEnumRegisterWordW;
typedef interface IEnumInputContext IEnumInputContext;
typedef interface IActiveIMMRegistrar IActiveIMMRegistrar;
typedef interface IActiveIMMMessagePumpOwner IActiveIMMMessagePumpOwner;
typedef interface IActiveIMMApp IActiveIMMApp;
typedef interface IActiveIMMIME IActiveIMMIME;
typedef interface IActiveIME IActiveIME;
typedef interface IActiveIME2 IActiveIME2;
typedef class CActiveIMM CActiveIMM;
#include "unknwn.h"
extern "C"{
#pragma comment(lib,"uuid.lib")
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_dimm_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dimm_0000_0000_v0_0_s_ifspec;
#include <imm.h>
#if 0
typedef WORD LANGID;
typedef struct __MIDL___MIDL_itf_dimm_0000_0000_0001
    {
    LPSTR lpReading;
    LPSTR lpWord;
    } REGISTERWORDA;
typedef struct __MIDL___MIDL_itf_dimm_0000_0000_0002
    {
    LPWSTR lpReading;
    LPWSTR lpWord;
    } REGISTERWORDW;
typedef struct __MIDL___MIDL_itf_dimm_0000_0000_0003
    {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[ 32 ];
    } LOGFONTA;
typedef struct __MIDL___MIDL_itf_dimm_0000_0000_0004
    {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    WCHAR lfFaceName[ 32 ];
    } LOGFONTW;
typedef DWORD HIMC;
typedef DWORD HIMCC;
typedef struct __MIDL___MIDL_itf_dimm_0000_0000_0005
    {
    DWORD dwIndex;
    DWORD dwStyle;
    POINT ptCurrentPos;
    RECT rcArea;
    } CANDIDATEFORM;
typedef struct __MIDL___MIDL_itf_dimm_0000_0000_0006
    {
    DWORD dwStyle;
    POINT ptCurrentPos;
    RECT rcArea;
    } COMPOSITIONFORM;
typedef struct __MIDL___MIDL_itf_dimm_0000_0000_0007
    {
    DWORD dwSize;
    DWORD dwStyle;
    DWORD dwCount;
    DWORD dwSelection;
    DWORD dwPageStart;
    DWORD dwPageSize;
    DWORD dwOffset[ 1 ];
    } CANDIDATELIST;
typedef struct __MIDL___MIDL_itf_dimm_0000_0000_0008
    {
    DWORD dwStyle;
    CHAR szDescription[ 32 ];
    } STYLEBUFA;
typedef struct __MIDL___MIDL_itf_dimm_0000_0000_0009
    {
    DWORD dwStyle;
    WCHAR szDescription[ 32 ];
    } STYLEBUFW;
typedef WORD ATOM;
#endif
typedef struct __MIDL___MIDL_itf_dimm_0000_0000_0012
    {
    HWND hWnd;
    BOOL fOpen;
    POINT ptStatusWndPos;
    POINT ptSoftKbdPos;
    DWORD fdwConversion;
    DWORD fdwSentence;
    union
        {
        LOGFONTA A;
        LOGFONTW W;
        } lfFont;
    COMPOSITIONFORM cfCompForm;
    CANDIDATEFORM cfCandForm[ 4 ];
    HIMCC hCompStr;
    HIMCC hCandInfo;
    HIMCC hGuideLine;
    HIMCC hPrivate;
    DWORD dwNumMsgBuf;
    HIMCC hMsgBuf;
    DWORD fdwInit;
    DWORD dwReserve[ 3 ];
    } INPUTCONTEXT;
typedef struct __MIDL___MIDL_itf_dimm_0000_0000_0014
    {
    DWORD dwPrivateDataSize;
    DWORD fdwProperty;
    DWORD fdwConversionCaps;
    DWORD fdwSentenceCaps;
    DWORD fdwUICaps;
    DWORD fdwSCSCaps;
    DWORD fdwSelectCaps;
    } IMEINFO;
EXTERN_C const IID LIBID_ActiveIMM;
EXTERN_C const IID IID_IEnumRegisterWordA;
    typedef struct IEnumRegisterWordAVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumRegisterWordA * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumRegisterWordA * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumRegisterWordA * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumRegisterWordA * This,
                        __RPC__deref_out_opt IEnumRegisterWordA **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumRegisterWordA * This,
                       ULONG ulCount,
                        __RPC__out REGISTERWORDA *rgRegisterWord,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumRegisterWordA * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumRegisterWordA * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumRegisterWordAVtbl;
    interface IEnumRegisterWordA
    {
        CONST_VTBL struct IEnumRegisterWordAVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,rgRegisterWord,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
EXTERN_C const IID IID_IEnumRegisterWordW;
    typedef struct IEnumRegisterWordWVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumRegisterWordW * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumRegisterWordW * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumRegisterWordW * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumRegisterWordW * This,
                        __RPC__deref_out_opt IEnumRegisterWordW **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumRegisterWordW * This,
                       ULONG ulCount,
                        __RPC__out REGISTERWORDW *rgRegisterWord,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumRegisterWordW * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumRegisterWordW * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumRegisterWordWVtbl;
    interface IEnumRegisterWordW
    {
        CONST_VTBL struct IEnumRegisterWordWVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,rgRegisterWord,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
EXTERN_C const IID IID_IEnumInputContext;
    typedef struct IEnumInputContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumInputContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumInputContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumInputContext * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumInputContext * This,
                        __RPC__deref_out_opt IEnumInputContext **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumInputContext * This,
                       ULONG ulCount,
                        __RPC__out HIMC *rgInputContext,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumInputContext * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumInputContext * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumInputContextVtbl;
    interface IEnumInputContext
    {
        CONST_VTBL struct IEnumInputContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,rgInputContext,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
EXTERN_C const IID IID_IActiveIMMRegistrar;
    typedef struct IActiveIMMRegistrarVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveIMMRegistrar * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveIMMRegistrar * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveIMMRegistrar * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterIME )(
            __RPC__in IActiveIMMRegistrar * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID lgid,
                       __RPC__in LPCWSTR pszIconFile,
                       __RPC__in LPCWSTR pszDesc);
        HRESULT ( STDMETHODCALLTYPE *UnregisterIME )(
            __RPC__in IActiveIMMRegistrar * This,
                       __RPC__in REFCLSID rclsid);
        END_INTERFACE
    } IActiveIMMRegistrarVtbl;
    interface IActiveIMMRegistrar
    {
        CONST_VTBL struct IActiveIMMRegistrarVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterIME(This,rclsid,lgid,pszIconFile,pszDesc) )
    ( (This)->lpVtbl -> UnregisterIME(This,rclsid) )
EXTERN_C const IID IID_IActiveIMMMessagePumpOwner;
    typedef struct IActiveIMMMessagePumpOwnerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveIMMMessagePumpOwner * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveIMMMessagePumpOwner * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveIMMMessagePumpOwner * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IActiveIMMMessagePumpOwner * This);
        HRESULT ( STDMETHODCALLTYPE *End )(
            __RPC__in IActiveIMMMessagePumpOwner * This);
        HRESULT ( STDMETHODCALLTYPE *OnTranslateMessage )(
            __RPC__in IActiveIMMMessagePumpOwner * This,
                       __RPC__in const MSG *pMsg);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IActiveIMMMessagePumpOwner * This,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IActiveIMMMessagePumpOwner * This,
                       DWORD dwCookie);
        END_INTERFACE
    } IActiveIMMMessagePumpOwnerVtbl;
    interface IActiveIMMMessagePumpOwner
    {
        CONST_VTBL struct IActiveIMMMessagePumpOwnerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> End(This) )
    ( (This)->lpVtbl -> OnTranslateMessage(This,pMsg) )
    ( (This)->lpVtbl -> Pause(This,pdwCookie) )
    ( (This)->lpVtbl -> Resume(This,dwCookie) )
EXTERN_C const IID IID_IActiveIMMApp;
    typedef struct IActiveIMMAppVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveIMMApp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveIMMApp * This);
        HRESULT ( STDMETHODCALLTYPE *AssociateContext )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HWND hWnd,
                       HIMC hIME,
                        __RPC__out HIMC *phPrev);
        HRESULT ( STDMETHODCALLTYPE *ConfigureIMEA )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       __RPC__in HWND hWnd,
                       DWORD dwMode,
                       __RPC__in REGISTERWORDA *pData);
        HRESULT ( STDMETHODCALLTYPE *ConfigureIMEW )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       __RPC__in HWND hWnd,
                       DWORD dwMode,
                       __RPC__in REGISTERWORDW *pData);
        HRESULT ( STDMETHODCALLTYPE *CreateContext )(
            __RPC__in IActiveIMMApp * This,
                        __RPC__out HIMC *phIMC);
        HRESULT ( STDMETHODCALLTYPE *DestroyContext )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIME);
        HRESULT ( STDMETHODCALLTYPE *EnumRegisterWordA )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       __RPC__in LPSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPSTR szRegister,
                       __RPC__in LPVOID pData,
                        __RPC__deref_out_opt IEnumRegisterWordA **pEnum);
        HRESULT ( STDMETHODCALLTYPE *EnumRegisterWordW )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       __RPC__in LPWSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPWSTR szRegister,
                       __RPC__in LPVOID pData,
                        __RPC__deref_out_opt IEnumRegisterWordW **pEnum);
        HRESULT ( STDMETHODCALLTYPE *EscapeA )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       HIMC hIMC,
                       UINT uEscape,
                            __RPC__inout LPVOID pData,
                        __RPC__out LRESULT *plResult);
        HRESULT ( STDMETHODCALLTYPE *EscapeW )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       HIMC hIMC,
                       UINT uEscape,
                            __RPC__inout LPVOID pData,
                        __RPC__out LRESULT *plResult);
        HRESULT ( STDMETHODCALLTYPE *GetCandidateListA )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       UINT uBufLen,
                        __RPC__out CANDIDATELIST *pCandList,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetCandidateListW )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       UINT uBufLen,
                        __RPC__out CANDIDATELIST *pCandList,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetCandidateListCountA )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                        __RPC__out DWORD *pdwListSize,
                        __RPC__out DWORD *pdwBufLen);
        HRESULT ( STDMETHODCALLTYPE *GetCandidateListCountW )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                        __RPC__out DWORD *pdwListSize,
                        __RPC__out DWORD *pdwBufLen);
        HRESULT ( STDMETHODCALLTYPE *GetCandidateWindow )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                        __RPC__out CANDIDATEFORM *pCandidate);
        HRESULT ( STDMETHODCALLTYPE *GetCompositionFontA )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                        __RPC__out LOGFONTA *plf);
        HRESULT ( STDMETHODCALLTYPE *GetCompositionFontW )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                        __RPC__out LOGFONTW *plf);
        HRESULT ( STDMETHODCALLTYPE *GetCompositionStringA )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       DWORD dwBufLen,
                        __RPC__out LONG *plCopied,
                        __RPC__out LPVOID pBuf);
        HRESULT ( STDMETHODCALLTYPE *GetCompositionStringW )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       DWORD dwBufLen,
                        __RPC__out LONG *plCopied,
                        __RPC__out LPVOID pBuf);
        HRESULT ( STDMETHODCALLTYPE *GetCompositionWindow )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                        __RPC__out COMPOSITIONFORM *pCompForm);
        HRESULT ( STDMETHODCALLTYPE *GetContext )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HWND hWnd,
                        __RPC__out HIMC *phIMC);
        HRESULT ( STDMETHODCALLTYPE *GetConversionListA )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       HIMC hIMC,
                       __RPC__in LPSTR pSrc,
                       UINT uBufLen,
                       UINT uFlag,
                        __RPC__out CANDIDATELIST *pDst,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetConversionListW )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       HIMC hIMC,
                       __RPC__in LPWSTR pSrc,
                       UINT uBufLen,
                       UINT uFlag,
                        __RPC__out CANDIDATELIST *pDst,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetConversionStatus )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                        __RPC__out DWORD *pfdwConversion,
                        __RPC__out DWORD *pfdwSentence);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultIMEWnd )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HWND hWnd,
                        __RPC__deref_out_opt HWND *phDefWnd);
        HRESULT ( STDMETHODCALLTYPE *GetDescriptionA )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       UINT uBufLen,
                        __RPC__out LPSTR szDescription,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetDescriptionW )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       UINT uBufLen,
                        __RPC__out LPWSTR szDescription,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetGuideLineA )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       DWORD dwBufLen,
                        __RPC__out LPSTR pBuf,
                        __RPC__out DWORD *pdwResult);
        HRESULT ( STDMETHODCALLTYPE *GetGuideLineW )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       DWORD dwBufLen,
                        __RPC__out LPWSTR pBuf,
                        __RPC__out DWORD *pdwResult);
        HRESULT ( STDMETHODCALLTYPE *GetIMEFileNameA )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       UINT uBufLen,
                        __RPC__out LPSTR szFileName,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetIMEFileNameW )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       UINT uBufLen,
                        __RPC__out LPWSTR szFileName,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetOpenStatus )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       DWORD fdwIndex,
                        __RPC__out DWORD *pdwProperty);
        HRESULT ( STDMETHODCALLTYPE *GetRegisterWordStyleA )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       UINT nItem,
                        __RPC__out STYLEBUFA *pStyleBuf,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetRegisterWordStyleW )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       UINT nItem,
                        __RPC__out STYLEBUFW *pStyleBuf,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetStatusWindowPos )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                        __RPC__out POINT *pptPos);
        HRESULT ( STDMETHODCALLTYPE *GetVirtualKey )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HWND hWnd,
                        __RPC__out UINT *puVirtualKey);
        HRESULT ( STDMETHODCALLTYPE *InstallIMEA )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in LPSTR szIMEFileName,
                       __RPC__in LPSTR szLayoutText,
                        __RPC__deref_out_opt HKL *phKL);
        HRESULT ( STDMETHODCALLTYPE *InstallIMEW )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in LPWSTR szIMEFileName,
                       __RPC__in LPWSTR szLayoutText,
                        __RPC__deref_out_opt HKL *phKL);
        HRESULT ( STDMETHODCALLTYPE *IsIME )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL);
        HRESULT ( STDMETHODCALLTYPE *IsUIMessageA )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HWND hWndIME,
                       UINT msg,
                       WPARAM wParam,
                       LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *IsUIMessageW )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HWND hWndIME,
                       UINT msg,
                       WPARAM wParam,
                       LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *NotifyIME )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       DWORD dwAction,
                       DWORD dwIndex,
                       DWORD dwValue);
        HRESULT ( STDMETHODCALLTYPE *RegisterWordA )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       __RPC__in LPSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPSTR szRegister);
        HRESULT ( STDMETHODCALLTYPE *RegisterWordW )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       __RPC__in LPWSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPWSTR szRegister);
        HRESULT ( STDMETHODCALLTYPE *ReleaseContext )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HWND hWnd,
                       HIMC hIMC);
        HRESULT ( STDMETHODCALLTYPE *SetCandidateWindow )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       __RPC__in CANDIDATEFORM *pCandidate);
        HRESULT ( STDMETHODCALLTYPE *SetCompositionFontA )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       __RPC__in LOGFONTA *plf);
        HRESULT ( STDMETHODCALLTYPE *SetCompositionFontW )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       __RPC__in LOGFONTW *plf);
        HRESULT ( STDMETHODCALLTYPE *SetCompositionStringA )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       __RPC__in LPVOID pComp,
                       DWORD dwCompLen,
                       __RPC__in LPVOID pRead,
                       DWORD dwReadLen);
        HRESULT ( STDMETHODCALLTYPE *SetCompositionStringW )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       __RPC__in LPVOID pComp,
                       DWORD dwCompLen,
                       __RPC__in LPVOID pRead,
                       DWORD dwReadLen);
        HRESULT ( STDMETHODCALLTYPE *SetCompositionWindow )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       __RPC__in COMPOSITIONFORM *pCompForm);
        HRESULT ( STDMETHODCALLTYPE *SetConversionStatus )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       DWORD fdwConversion,
                       DWORD fdwSentence);
        HRESULT ( STDMETHODCALLTYPE *SetOpenStatus )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       BOOL fOpen);
        HRESULT ( STDMETHODCALLTYPE *SetStatusWindowPos )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       __RPC__in POINT *pptPos);
        HRESULT ( STDMETHODCALLTYPE *SimulateHotKey )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HWND hWnd,
                       DWORD dwHotKeyID);
        HRESULT ( STDMETHODCALLTYPE *UnregisterWordA )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       __RPC__in LPSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPSTR szUnregister);
        HRESULT ( STDMETHODCALLTYPE *UnregisterWordW )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                       __RPC__in LPWSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPWSTR szUnregister);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            __RPC__in IActiveIMMApp * This,
                       BOOL fRestoreLayout);
        HRESULT ( STDMETHODCALLTYPE *Deactivate )(
            __RPC__in IActiveIMMApp * This);
        HRESULT ( STDMETHODCALLTYPE *OnDefWindowProc )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HWND hWnd,
                       UINT Msg,
                       WPARAM wParam,
                       LPARAM lParam,
                        __RPC__out LRESULT *plResult);
        HRESULT ( STDMETHODCALLTYPE *FilterClientWindows )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in ATOM *aaClassList,
                       UINT uSize);
        HRESULT ( STDMETHODCALLTYPE *GetCodePageA )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                        __RPC__out UINT *uCodePage);
        HRESULT ( STDMETHODCALLTYPE *GetLangId )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HKL hKL,
                        __RPC__out LANGID *plid);
        HRESULT ( STDMETHODCALLTYPE *AssociateContextEx )(
            __RPC__in IActiveIMMApp * This,
                       __RPC__in HWND hWnd,
                       HIMC hIMC,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *DisableIME )(
            __RPC__in IActiveIMMApp * This,
                       DWORD idThread);
        HRESULT ( STDMETHODCALLTYPE *GetImeMenuItemsA )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       DWORD dwFlags,
                       DWORD dwType,
                       __RPC__in IMEMENUITEMINFOA *pImeParentMenu,
                        __RPC__out IMEMENUITEMINFOA *pImeMenu,
                       DWORD dwSize,
                        __RPC__out DWORD *pdwResult);
        HRESULT ( STDMETHODCALLTYPE *GetImeMenuItemsW )(
            __RPC__in IActiveIMMApp * This,
                       HIMC hIMC,
                       DWORD dwFlags,
                       DWORD dwType,
                       __RPC__in IMEMENUITEMINFOW *pImeParentMenu,
                        __RPC__out IMEMENUITEMINFOW *pImeMenu,
                       DWORD dwSize,
                        __RPC__out DWORD *pdwResult);
        HRESULT ( STDMETHODCALLTYPE *EnumInputContext )(
            __RPC__in IActiveIMMApp * This,
                       DWORD idThread,
                        __RPC__deref_out_opt IEnumInputContext **ppEnum);
        END_INTERFACE
    } IActiveIMMAppVtbl;
    interface IActiveIMMApp
    {
        CONST_VTBL struct IActiveIMMAppVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AssociateContext(This,hWnd,hIME,phPrev) )
    ( (This)->lpVtbl -> ConfigureIMEA(This,hKL,hWnd,dwMode,pData) )
    ( (This)->lpVtbl -> ConfigureIMEW(This,hKL,hWnd,dwMode,pData) )
    ( (This)->lpVtbl -> CreateContext(This,phIMC) )
    ( (This)->lpVtbl -> DestroyContext(This,hIME) )
    ( (This)->lpVtbl -> EnumRegisterWordA(This,hKL,szReading,dwStyle,szRegister,pData,pEnum) )
    ( (This)->lpVtbl -> EnumRegisterWordW(This,hKL,szReading,dwStyle,szRegister,pData,pEnum) )
    ( (This)->lpVtbl -> EscapeA(This,hKL,hIMC,uEscape,pData,plResult) )
    ( (This)->lpVtbl -> EscapeW(This,hKL,hIMC,uEscape,pData,plResult) )
    ( (This)->lpVtbl -> GetCandidateListA(This,hIMC,dwIndex,uBufLen,pCandList,puCopied) )
    ( (This)->lpVtbl -> GetCandidateListW(This,hIMC,dwIndex,uBufLen,pCandList,puCopied) )
    ( (This)->lpVtbl -> GetCandidateListCountA(This,hIMC,pdwListSize,pdwBufLen) )
    ( (This)->lpVtbl -> GetCandidateListCountW(This,hIMC,pdwListSize,pdwBufLen) )
    ( (This)->lpVtbl -> GetCandidateWindow(This,hIMC,dwIndex,pCandidate) )
    ( (This)->lpVtbl -> GetCompositionFontA(This,hIMC,plf) )
    ( (This)->lpVtbl -> GetCompositionFontW(This,hIMC,plf) )
    ( (This)->lpVtbl -> GetCompositionStringA(This,hIMC,dwIndex,dwBufLen,plCopied,pBuf) )
    ( (This)->lpVtbl -> GetCompositionStringW(This,hIMC,dwIndex,dwBufLen,plCopied,pBuf) )
    ( (This)->lpVtbl -> GetCompositionWindow(This,hIMC,pCompForm) )
    ( (This)->lpVtbl -> GetContext(This,hWnd,phIMC) )
    ( (This)->lpVtbl -> GetConversionListA(This,hKL,hIMC,pSrc,uBufLen,uFlag,pDst,puCopied) )
    ( (This)->lpVtbl -> GetConversionListW(This,hKL,hIMC,pSrc,uBufLen,uFlag,pDst,puCopied) )
    ( (This)->lpVtbl -> GetConversionStatus(This,hIMC,pfdwConversion,pfdwSentence) )
    ( (This)->lpVtbl -> GetDefaultIMEWnd(This,hWnd,phDefWnd) )
    ( (This)->lpVtbl -> GetDescriptionA(This,hKL,uBufLen,szDescription,puCopied) )
    ( (This)->lpVtbl -> GetDescriptionW(This,hKL,uBufLen,szDescription,puCopied) )
    ( (This)->lpVtbl -> GetGuideLineA(This,hIMC,dwIndex,dwBufLen,pBuf,pdwResult) )
    ( (This)->lpVtbl -> GetGuideLineW(This,hIMC,dwIndex,dwBufLen,pBuf,pdwResult) )
    ( (This)->lpVtbl -> GetIMEFileNameA(This,hKL,uBufLen,szFileName,puCopied) )
    ( (This)->lpVtbl -> GetIMEFileNameW(This,hKL,uBufLen,szFileName,puCopied) )
    ( (This)->lpVtbl -> GetOpenStatus(This,hIMC) )
    ( (This)->lpVtbl -> GetProperty(This,hKL,fdwIndex,pdwProperty) )
    ( (This)->lpVtbl -> GetRegisterWordStyleA(This,hKL,nItem,pStyleBuf,puCopied) )
    ( (This)->lpVtbl -> GetRegisterWordStyleW(This,hKL,nItem,pStyleBuf,puCopied) )
    ( (This)->lpVtbl -> GetStatusWindowPos(This,hIMC,pptPos) )
    ( (This)->lpVtbl -> GetVirtualKey(This,hWnd,puVirtualKey) )
    ( (This)->lpVtbl -> InstallIMEA(This,szIMEFileName,szLayoutText,phKL) )
    ( (This)->lpVtbl -> InstallIMEW(This,szIMEFileName,szLayoutText,phKL) )
    ( (This)->lpVtbl -> IsIME(This,hKL) )
    ( (This)->lpVtbl -> IsUIMessageA(This,hWndIME,msg,wParam,lParam) )
    ( (This)->lpVtbl -> IsUIMessageW(This,hWndIME,msg,wParam,lParam) )
    ( (This)->lpVtbl -> NotifyIME(This,hIMC,dwAction,dwIndex,dwValue) )
    ( (This)->lpVtbl -> RegisterWordA(This,hKL,szReading,dwStyle,szRegister) )
    ( (This)->lpVtbl -> RegisterWordW(This,hKL,szReading,dwStyle,szRegister) )
    ( (This)->lpVtbl -> ReleaseContext(This,hWnd,hIMC) )
    ( (This)->lpVtbl -> SetCandidateWindow(This,hIMC,pCandidate) )
    ( (This)->lpVtbl -> SetCompositionFontA(This,hIMC,plf) )
    ( (This)->lpVtbl -> SetCompositionFontW(This,hIMC,plf) )
    ( (This)->lpVtbl -> SetCompositionStringA(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen) )
    ( (This)->lpVtbl -> SetCompositionStringW(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen) )
    ( (This)->lpVtbl -> SetCompositionWindow(This,hIMC,pCompForm) )
    ( (This)->lpVtbl -> SetConversionStatus(This,hIMC,fdwConversion,fdwSentence) )
    ( (This)->lpVtbl -> SetOpenStatus(This,hIMC,fOpen) )
    ( (This)->lpVtbl -> SetStatusWindowPos(This,hIMC,pptPos) )
    ( (This)->lpVtbl -> SimulateHotKey(This,hWnd,dwHotKeyID) )
    ( (This)->lpVtbl -> UnregisterWordA(This,hKL,szReading,dwStyle,szUnregister) )
    ( (This)->lpVtbl -> UnregisterWordW(This,hKL,szReading,dwStyle,szUnregister) )
    ( (This)->lpVtbl -> Activate(This,fRestoreLayout) )
    ( (This)->lpVtbl -> Deactivate(This) )
    ( (This)->lpVtbl -> OnDefWindowProc(This,hWnd,Msg,wParam,lParam,plResult) )
    ( (This)->lpVtbl -> FilterClientWindows(This,aaClassList,uSize) )
    ( (This)->lpVtbl -> GetCodePageA(This,hKL,uCodePage) )
    ( (This)->lpVtbl -> GetLangId(This,hKL,plid) )
    ( (This)->lpVtbl -> AssociateContextEx(This,hWnd,hIMC,dwFlags) )
    ( (This)->lpVtbl -> DisableIME(This,idThread) )
    ( (This)->lpVtbl -> GetImeMenuItemsA(This,hIMC,dwFlags,dwType,pImeParentMenu,pImeMenu,dwSize,pdwResult) )
    ( (This)->lpVtbl -> GetImeMenuItemsW(This,hIMC,dwFlags,dwType,pImeParentMenu,pImeMenu,dwSize,pdwResult) )
    ( (This)->lpVtbl -> EnumInputContext(This,idThread,ppEnum) )
EXTERN_C const IID IID_IActiveIMMIME;
    typedef struct IActiveIMMIMEVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveIMMIME * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveIMMIME * This);
        HRESULT ( STDMETHODCALLTYPE *AssociateContext )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HWND hWnd,
                       HIMC hIME,
                        __RPC__out HIMC *phPrev);
        HRESULT ( STDMETHODCALLTYPE *ConfigureIMEA )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       __RPC__in HWND hWnd,
                       DWORD dwMode,
                       __RPC__in REGISTERWORDA *pData);
        HRESULT ( STDMETHODCALLTYPE *ConfigureIMEW )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       __RPC__in HWND hWnd,
                       DWORD dwMode,
                       __RPC__in REGISTERWORDW *pData);
        HRESULT ( STDMETHODCALLTYPE *CreateContext )(
            __RPC__in IActiveIMMIME * This,
                        __RPC__out HIMC *phIMC);
        HRESULT ( STDMETHODCALLTYPE *DestroyContext )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIME);
        HRESULT ( STDMETHODCALLTYPE *EnumRegisterWordA )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       __RPC__in LPSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPSTR szRegister,
                       __RPC__in LPVOID pData,
                        __RPC__deref_out_opt IEnumRegisterWordA **pEnum);
        HRESULT ( STDMETHODCALLTYPE *EnumRegisterWordW )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       __RPC__in LPWSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPWSTR szRegister,
                       __RPC__in LPVOID pData,
                        __RPC__deref_out_opt IEnumRegisterWordW **pEnum);
        HRESULT ( STDMETHODCALLTYPE *EscapeA )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       HIMC hIMC,
                       UINT uEscape,
                            __RPC__inout LPVOID pData,
                        __RPC__out LRESULT *plResult);
        HRESULT ( STDMETHODCALLTYPE *EscapeW )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       HIMC hIMC,
                       UINT uEscape,
                            __RPC__inout LPVOID pData,
                        __RPC__out LRESULT *plResult);
        HRESULT ( STDMETHODCALLTYPE *GetCandidateListA )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       UINT uBufLen,
                        __RPC__out CANDIDATELIST *pCandList,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetCandidateListW )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       UINT uBufLen,
                        __RPC__out CANDIDATELIST *pCandList,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetCandidateListCountA )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                        __RPC__out DWORD *pdwListSize,
                        __RPC__out DWORD *pdwBufLen);
        HRESULT ( STDMETHODCALLTYPE *GetCandidateListCountW )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                        __RPC__out DWORD *pdwListSize,
                        __RPC__out DWORD *pdwBufLen);
        HRESULT ( STDMETHODCALLTYPE *GetCandidateWindow )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                        __RPC__out CANDIDATEFORM *pCandidate);
        HRESULT ( STDMETHODCALLTYPE *GetCompositionFontA )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                        __RPC__out LOGFONTA *plf);
        HRESULT ( STDMETHODCALLTYPE *GetCompositionFontW )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                        __RPC__out LOGFONTW *plf);
        HRESULT ( STDMETHODCALLTYPE *GetCompositionStringA )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       DWORD dwBufLen,
                        __RPC__out LONG *plCopied,
                        __RPC__out LPVOID pBuf);
        HRESULT ( STDMETHODCALLTYPE *GetCompositionStringW )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       DWORD dwBufLen,
                        __RPC__out LONG *plCopied,
                        __RPC__out LPVOID pBuf);
        HRESULT ( STDMETHODCALLTYPE *GetCompositionWindow )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                        __RPC__out COMPOSITIONFORM *pCompForm);
        HRESULT ( STDMETHODCALLTYPE *GetContext )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HWND hWnd,
                        __RPC__out HIMC *phIMC);
        HRESULT ( STDMETHODCALLTYPE *GetConversionListA )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       HIMC hIMC,
                       __RPC__in LPSTR pSrc,
                       UINT uBufLen,
                       UINT uFlag,
                        __RPC__out CANDIDATELIST *pDst,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetConversionListW )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       HIMC hIMC,
                       __RPC__in LPWSTR pSrc,
                       UINT uBufLen,
                       UINT uFlag,
                        __RPC__out CANDIDATELIST *pDst,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetConversionStatus )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                        __RPC__out DWORD *pfdwConversion,
                        __RPC__out DWORD *pfdwSentence);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultIMEWnd )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HWND hWnd,
                        __RPC__deref_out_opt HWND *phDefWnd);
        HRESULT ( STDMETHODCALLTYPE *GetDescriptionA )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       UINT uBufLen,
                        __RPC__out LPSTR szDescription,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetDescriptionW )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       UINT uBufLen,
                        __RPC__out LPWSTR szDescription,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetGuideLineA )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       DWORD dwBufLen,
                        __RPC__out LPSTR pBuf,
                        __RPC__out DWORD *pdwResult);
        HRESULT ( STDMETHODCALLTYPE *GetGuideLineW )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       DWORD dwBufLen,
                        __RPC__out LPWSTR pBuf,
                        __RPC__out DWORD *pdwResult);
        HRESULT ( STDMETHODCALLTYPE *GetIMEFileNameA )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       UINT uBufLen,
                        __RPC__out LPSTR szFileName,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetIMEFileNameW )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       UINT uBufLen,
                        __RPC__out LPWSTR szFileName,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetOpenStatus )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       DWORD fdwIndex,
                        __RPC__out DWORD *pdwProperty);
        HRESULT ( STDMETHODCALLTYPE *GetRegisterWordStyleA )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       UINT nItem,
                        __RPC__out STYLEBUFA *pStyleBuf,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetRegisterWordStyleW )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       UINT nItem,
                        __RPC__out STYLEBUFW *pStyleBuf,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *GetStatusWindowPos )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                        __RPC__out POINT *pptPos);
        HRESULT ( STDMETHODCALLTYPE *GetVirtualKey )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HWND hWnd,
                        __RPC__out UINT *puVirtualKey);
        HRESULT ( STDMETHODCALLTYPE *InstallIMEA )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in LPSTR szIMEFileName,
                       __RPC__in LPSTR szLayoutText,
                        __RPC__deref_out_opt HKL *phKL);
        HRESULT ( STDMETHODCALLTYPE *InstallIMEW )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in LPWSTR szIMEFileName,
                       __RPC__in LPWSTR szLayoutText,
                        __RPC__deref_out_opt HKL *phKL);
        HRESULT ( STDMETHODCALLTYPE *IsIME )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL);
        HRESULT ( STDMETHODCALLTYPE *IsUIMessageA )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HWND hWndIME,
                       UINT msg,
                       WPARAM wParam,
                       LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *IsUIMessageW )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HWND hWndIME,
                       UINT msg,
                       WPARAM wParam,
                       LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *NotifyIME )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       DWORD dwAction,
                       DWORD dwIndex,
                       DWORD dwValue);
        HRESULT ( STDMETHODCALLTYPE *RegisterWordA )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       __RPC__in LPSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPSTR szRegister);
        HRESULT ( STDMETHODCALLTYPE *RegisterWordW )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       __RPC__in LPWSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPWSTR szRegister);
        HRESULT ( STDMETHODCALLTYPE *ReleaseContext )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HWND hWnd,
                       HIMC hIMC);
        HRESULT ( STDMETHODCALLTYPE *SetCandidateWindow )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       __RPC__in CANDIDATEFORM *pCandidate);
        HRESULT ( STDMETHODCALLTYPE *SetCompositionFontA )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       __RPC__in LOGFONTA *plf);
        HRESULT ( STDMETHODCALLTYPE *SetCompositionFontW )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       __RPC__in LOGFONTW *plf);
        HRESULT ( STDMETHODCALLTYPE *SetCompositionStringA )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       __RPC__in LPVOID pComp,
                       DWORD dwCompLen,
                       __RPC__in LPVOID pRead,
                       DWORD dwReadLen);
        HRESULT ( STDMETHODCALLTYPE *SetCompositionStringW )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       __RPC__in LPVOID pComp,
                       DWORD dwCompLen,
                       __RPC__in LPVOID pRead,
                       DWORD dwReadLen);
        HRESULT ( STDMETHODCALLTYPE *SetCompositionWindow )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       __RPC__in COMPOSITIONFORM *pCompForm);
        HRESULT ( STDMETHODCALLTYPE *SetConversionStatus )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       DWORD fdwConversion,
                       DWORD fdwSentence);
        HRESULT ( STDMETHODCALLTYPE *SetOpenStatus )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       BOOL fOpen);
        HRESULT ( STDMETHODCALLTYPE *SetStatusWindowPos )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       __RPC__in POINT *pptPos);
        HRESULT ( STDMETHODCALLTYPE *SimulateHotKey )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HWND hWnd,
                       DWORD dwHotKeyID);
        HRESULT ( STDMETHODCALLTYPE *UnregisterWordA )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       __RPC__in LPSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPSTR szUnregister);
        HRESULT ( STDMETHODCALLTYPE *UnregisterWordW )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                       __RPC__in LPWSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPWSTR szUnregister);
        HRESULT ( STDMETHODCALLTYPE *GenerateMessage )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC);
        HRESULT ( STDMETHODCALLTYPE *LockIMC )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                        __RPC__deref_out_opt INPUTCONTEXT **ppIMC);
        HRESULT ( STDMETHODCALLTYPE *UnlockIMC )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC);
        HRESULT ( STDMETHODCALLTYPE *GetIMCLockCount )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                        __RPC__out DWORD *pdwLockCount);
        HRESULT ( STDMETHODCALLTYPE *CreateIMCC )(
            __RPC__in IActiveIMMIME * This,
                       DWORD dwSize,
                        __RPC__out HIMCC *phIMCC);
        HRESULT ( STDMETHODCALLTYPE *DestroyIMCC )(
            __RPC__in IActiveIMMIME * This,
                       HIMCC hIMCC);
        HRESULT ( STDMETHODCALLTYPE *LockIMCC )(
            __RPC__in IActiveIMMIME * This,
                       HIMCC hIMCC,
                        __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *UnlockIMCC )(
            __RPC__in IActiveIMMIME * This,
                       HIMCC hIMCC);
        HRESULT ( STDMETHODCALLTYPE *ReSizeIMCC )(
            __RPC__in IActiveIMMIME * This,
                       HIMCC hIMCC,
                       DWORD dwSize,
                        __RPC__out HIMCC *phIMCC);
        HRESULT ( STDMETHODCALLTYPE *GetIMCCSize )(
            __RPC__in IActiveIMMIME * This,
                       HIMCC hIMCC,
                        __RPC__out DWORD *pdwSize);
        HRESULT ( STDMETHODCALLTYPE *GetIMCCLockCount )(
            __RPC__in IActiveIMMIME * This,
                       HIMCC hIMCC,
                        __RPC__out DWORD *pdwLockCount);
        HRESULT ( STDMETHODCALLTYPE *GetHotKey )(
            __RPC__in IActiveIMMIME * This,
                       DWORD dwHotKeyID,
                        __RPC__out UINT *puModifiers,
                        __RPC__out UINT *puVKey,
                        __RPC__deref_out_opt HKL *phKL);
        HRESULT ( STDMETHODCALLTYPE *SetHotKey )(
            __RPC__in IActiveIMMIME * This,
                       DWORD dwHotKeyID,
                       UINT uModifiers,
                       UINT uVKey,
                       __RPC__in HKL hKL);
        HRESULT ( STDMETHODCALLTYPE *CreateSoftKeyboard )(
            __RPC__in IActiveIMMIME * This,
                       UINT uType,
                       __RPC__in HWND hOwner,
                       int x,
                       int y,
                        __RPC__deref_out_opt HWND *phSoftKbdWnd);
        HRESULT ( STDMETHODCALLTYPE *DestroySoftKeyboard )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HWND hSoftKbdWnd);
        HRESULT ( STDMETHODCALLTYPE *ShowSoftKeyboard )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HWND hSoftKbdWnd,
                       int nCmdShow);
        HRESULT ( STDMETHODCALLTYPE *GetCodePageA )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                        __RPC__out UINT *uCodePage);
        HRESULT ( STDMETHODCALLTYPE *GetLangId )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HKL hKL,
                        __RPC__out LANGID *plid);
        HRESULT ( STDMETHODCALLTYPE *KeybdEvent )(
            __RPC__in IActiveIMMIME * This,
                       LANGID lgidIME,
                       BYTE bVk,
                       BYTE bScan,
                       DWORD dwFlags,
                       DWORD dwExtraInfo);
        HRESULT ( STDMETHODCALLTYPE *LockModal )(
            __RPC__in IActiveIMMIME * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockModal )(
            __RPC__in IActiveIMMIME * This);
        HRESULT ( STDMETHODCALLTYPE *AssociateContextEx )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HWND hWnd,
                       HIMC hIMC,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *DisableIME )(
            __RPC__in IActiveIMMIME * This,
                       DWORD idThread);
        HRESULT ( STDMETHODCALLTYPE *GetImeMenuItemsA )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       DWORD dwFlags,
                       DWORD dwType,
                       __RPC__in IMEMENUITEMINFOA *pImeParentMenu,
                        __RPC__out IMEMENUITEMINFOA *pImeMenu,
                       DWORD dwSize,
                        __RPC__out DWORD *pdwResult);
        HRESULT ( STDMETHODCALLTYPE *GetImeMenuItemsW )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       DWORD dwFlags,
                       DWORD dwType,
                       __RPC__in IMEMENUITEMINFOW *pImeParentMenu,
                        __RPC__out IMEMENUITEMINFOW *pImeMenu,
                       DWORD dwSize,
                        __RPC__out DWORD *pdwResult);
        HRESULT ( STDMETHODCALLTYPE *EnumInputContext )(
            __RPC__in IActiveIMMIME * This,
                       DWORD idThread,
                        __RPC__deref_out_opt IEnumInputContext **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *RequestMessageA )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       WPARAM wParam,
                       LPARAM lParam,
                        __RPC__out LRESULT *plResult);
        HRESULT ( STDMETHODCALLTYPE *RequestMessageW )(
            __RPC__in IActiveIMMIME * This,
                       HIMC hIMC,
                       WPARAM wParam,
                       LPARAM lParam,
                        __RPC__out LRESULT *plResult);
        HRESULT ( STDMETHODCALLTYPE *SendIMCA )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HWND hWnd,
                       UINT uMsg,
                       WPARAM wParam,
                       LPARAM lParam,
                        __RPC__out LRESULT *plResult);
        HRESULT ( STDMETHODCALLTYPE *SendIMCW )(
            __RPC__in IActiveIMMIME * This,
                       __RPC__in HWND hWnd,
                       UINT uMsg,
                       WPARAM wParam,
                       LPARAM lParam,
                        __RPC__out LRESULT *plResult);
        HRESULT ( STDMETHODCALLTYPE *IsSleeping )(
            __RPC__in IActiveIMMIME * This);
        END_INTERFACE
    } IActiveIMMIMEVtbl;
    interface IActiveIMMIME
    {
        CONST_VTBL struct IActiveIMMIMEVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AssociateContext(This,hWnd,hIME,phPrev) )
    ( (This)->lpVtbl -> ConfigureIMEA(This,hKL,hWnd,dwMode,pData) )
    ( (This)->lpVtbl -> ConfigureIMEW(This,hKL,hWnd,dwMode,pData) )
    ( (This)->lpVtbl -> CreateContext(This,phIMC) )
    ( (This)->lpVtbl -> DestroyContext(This,hIME) )
    ( (This)->lpVtbl -> EnumRegisterWordA(This,hKL,szReading,dwStyle,szRegister,pData,pEnum) )
    ( (This)->lpVtbl -> EnumRegisterWordW(This,hKL,szReading,dwStyle,szRegister,pData,pEnum) )
    ( (This)->lpVtbl -> EscapeA(This,hKL,hIMC,uEscape,pData,plResult) )
    ( (This)->lpVtbl -> EscapeW(This,hKL,hIMC,uEscape,pData,plResult) )
    ( (This)->lpVtbl -> GetCandidateListA(This,hIMC,dwIndex,uBufLen,pCandList,puCopied) )
    ( (This)->lpVtbl -> GetCandidateListW(This,hIMC,dwIndex,uBufLen,pCandList,puCopied) )
    ( (This)->lpVtbl -> GetCandidateListCountA(This,hIMC,pdwListSize,pdwBufLen) )
    ( (This)->lpVtbl -> GetCandidateListCountW(This,hIMC,pdwListSize,pdwBufLen) )
    ( (This)->lpVtbl -> GetCandidateWindow(This,hIMC,dwIndex,pCandidate) )
    ( (This)->lpVtbl -> GetCompositionFontA(This,hIMC,plf) )
    ( (This)->lpVtbl -> GetCompositionFontW(This,hIMC,plf) )
    ( (This)->lpVtbl -> GetCompositionStringA(This,hIMC,dwIndex,dwBufLen,plCopied,pBuf) )
    ( (This)->lpVtbl -> GetCompositionStringW(This,hIMC,dwIndex,dwBufLen,plCopied,pBuf) )
    ( (This)->lpVtbl -> GetCompositionWindow(This,hIMC,pCompForm) )
    ( (This)->lpVtbl -> GetContext(This,hWnd,phIMC) )
    ( (This)->lpVtbl -> GetConversionListA(This,hKL,hIMC,pSrc,uBufLen,uFlag,pDst,puCopied) )
    ( (This)->lpVtbl -> GetConversionListW(This,hKL,hIMC,pSrc,uBufLen,uFlag,pDst,puCopied) )
    ( (This)->lpVtbl -> GetConversionStatus(This,hIMC,pfdwConversion,pfdwSentence) )
    ( (This)->lpVtbl -> GetDefaultIMEWnd(This,hWnd,phDefWnd) )
    ( (This)->lpVtbl -> GetDescriptionA(This,hKL,uBufLen,szDescription,puCopied) )
    ( (This)->lpVtbl -> GetDescriptionW(This,hKL,uBufLen,szDescription,puCopied) )
    ( (This)->lpVtbl -> GetGuideLineA(This,hIMC,dwIndex,dwBufLen,pBuf,pdwResult) )
    ( (This)->lpVtbl -> GetGuideLineW(This,hIMC,dwIndex,dwBufLen,pBuf,pdwResult) )
    ( (This)->lpVtbl -> GetIMEFileNameA(This,hKL,uBufLen,szFileName,puCopied) )
    ( (This)->lpVtbl -> GetIMEFileNameW(This,hKL,uBufLen,szFileName,puCopied) )
    ( (This)->lpVtbl -> GetOpenStatus(This,hIMC) )
    ( (This)->lpVtbl -> GetProperty(This,hKL,fdwIndex,pdwProperty) )
    ( (This)->lpVtbl -> GetRegisterWordStyleA(This,hKL,nItem,pStyleBuf,puCopied) )
    ( (This)->lpVtbl -> GetRegisterWordStyleW(This,hKL,nItem,pStyleBuf,puCopied) )
    ( (This)->lpVtbl -> GetStatusWindowPos(This,hIMC,pptPos) )
    ( (This)->lpVtbl -> GetVirtualKey(This,hWnd,puVirtualKey) )
    ( (This)->lpVtbl -> InstallIMEA(This,szIMEFileName,szLayoutText,phKL) )
    ( (This)->lpVtbl -> InstallIMEW(This,szIMEFileName,szLayoutText,phKL) )
    ( (This)->lpVtbl -> IsIME(This,hKL) )
    ( (This)->lpVtbl -> IsUIMessageA(This,hWndIME,msg,wParam,lParam) )
    ( (This)->lpVtbl -> IsUIMessageW(This,hWndIME,msg,wParam,lParam) )
    ( (This)->lpVtbl -> NotifyIME(This,hIMC,dwAction,dwIndex,dwValue) )
    ( (This)->lpVtbl -> RegisterWordA(This,hKL,szReading,dwStyle,szRegister) )
    ( (This)->lpVtbl -> RegisterWordW(This,hKL,szReading,dwStyle,szRegister) )
    ( (This)->lpVtbl -> ReleaseContext(This,hWnd,hIMC) )
    ( (This)->lpVtbl -> SetCandidateWindow(This,hIMC,pCandidate) )
    ( (This)->lpVtbl -> SetCompositionFontA(This,hIMC,plf) )
    ( (This)->lpVtbl -> SetCompositionFontW(This,hIMC,plf) )
    ( (This)->lpVtbl -> SetCompositionStringA(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen) )
    ( (This)->lpVtbl -> SetCompositionStringW(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen) )
    ( (This)->lpVtbl -> SetCompositionWindow(This,hIMC,pCompForm) )
    ( (This)->lpVtbl -> SetConversionStatus(This,hIMC,fdwConversion,fdwSentence) )
    ( (This)->lpVtbl -> SetOpenStatus(This,hIMC,fOpen) )
    ( (This)->lpVtbl -> SetStatusWindowPos(This,hIMC,pptPos) )
    ( (This)->lpVtbl -> SimulateHotKey(This,hWnd,dwHotKeyID) )
    ( (This)->lpVtbl -> UnregisterWordA(This,hKL,szReading,dwStyle,szUnregister) )
    ( (This)->lpVtbl -> UnregisterWordW(This,hKL,szReading,dwStyle,szUnregister) )
    ( (This)->lpVtbl -> GenerateMessage(This,hIMC) )
    ( (This)->lpVtbl -> LockIMC(This,hIMC,ppIMC) )
    ( (This)->lpVtbl -> UnlockIMC(This,hIMC) )
    ( (This)->lpVtbl -> GetIMCLockCount(This,hIMC,pdwLockCount) )
    ( (This)->lpVtbl -> CreateIMCC(This,dwSize,phIMCC) )
    ( (This)->lpVtbl -> DestroyIMCC(This,hIMCC) )
    ( (This)->lpVtbl -> LockIMCC(This,hIMCC,ppv) )
    ( (This)->lpVtbl -> UnlockIMCC(This,hIMCC) )
    ( (This)->lpVtbl -> ReSizeIMCC(This,hIMCC,dwSize,phIMCC) )
    ( (This)->lpVtbl -> GetIMCCSize(This,hIMCC,pdwSize) )
    ( (This)->lpVtbl -> GetIMCCLockCount(This,hIMCC,pdwLockCount) )
    ( (This)->lpVtbl -> GetHotKey(This,dwHotKeyID,puModifiers,puVKey,phKL) )
    ( (This)->lpVtbl -> SetHotKey(This,dwHotKeyID,uModifiers,uVKey,hKL) )
    ( (This)->lpVtbl -> CreateSoftKeyboard(This,uType,hOwner,x,y,phSoftKbdWnd) )
    ( (This)->lpVtbl -> DestroySoftKeyboard(This,hSoftKbdWnd) )
    ( (This)->lpVtbl -> ShowSoftKeyboard(This,hSoftKbdWnd,nCmdShow) )
    ( (This)->lpVtbl -> GetCodePageA(This,hKL,uCodePage) )
    ( (This)->lpVtbl -> GetLangId(This,hKL,plid) )
    ( (This)->lpVtbl -> KeybdEvent(This,lgidIME,bVk,bScan,dwFlags,dwExtraInfo) )
    ( (This)->lpVtbl -> LockModal(This) )
    ( (This)->lpVtbl -> UnlockModal(This) )
    ( (This)->lpVtbl -> AssociateContextEx(This,hWnd,hIMC,dwFlags) )
    ( (This)->lpVtbl -> DisableIME(This,idThread) )
    ( (This)->lpVtbl -> GetImeMenuItemsA(This,hIMC,dwFlags,dwType,pImeParentMenu,pImeMenu,dwSize,pdwResult) )
    ( (This)->lpVtbl -> GetImeMenuItemsW(This,hIMC,dwFlags,dwType,pImeParentMenu,pImeMenu,dwSize,pdwResult) )
    ( (This)->lpVtbl -> EnumInputContext(This,idThread,ppEnum) )
    ( (This)->lpVtbl -> RequestMessageA(This,hIMC,wParam,lParam,plResult) )
    ( (This)->lpVtbl -> RequestMessageW(This,hIMC,wParam,lParam,plResult) )
    ( (This)->lpVtbl -> SendIMCA(This,hWnd,uMsg,wParam,lParam,plResult) )
    ( (This)->lpVtbl -> SendIMCW(This,hWnd,uMsg,wParam,lParam,plResult) )
    ( (This)->lpVtbl -> IsSleeping(This) )
EXTERN_C const IID IID_IActiveIME;
    typedef struct IActiveIMEVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveIME * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveIME * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveIME * This);
        HRESULT ( STDMETHODCALLTYPE *Inquire )(
            __RPC__in IActiveIME * This,
                       DWORD dwSystemInfoFlags,
                        __RPC__out IMEINFO *pIMEInfo,
                        __RPC__out LPWSTR szWndClass,
                        __RPC__out DWORD *pdwPrivate);
        HRESULT ( STDMETHODCALLTYPE *ConversionList )(
            __RPC__in IActiveIME * This,
                       HIMC hIMC,
                       __RPC__in LPWSTR szSource,
                       UINT uFlag,
                       UINT uBufLen,
                        __RPC__out CANDIDATELIST *pDest,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *Configure )(
            __RPC__in IActiveIME * This,
                       __RPC__in HKL hKL,
                       __RPC__in HWND hWnd,
                       DWORD dwMode,
                       __RPC__in REGISTERWORDW *pRegisterWord);
        HRESULT ( STDMETHODCALLTYPE *Destroy )(
            __RPC__in IActiveIME * This,
                       UINT uReserved);
        HRESULT ( STDMETHODCALLTYPE *Escape )(
            __RPC__in IActiveIME * This,
                       HIMC hIMC,
                       UINT uEscape,
                            __RPC__inout void *pData,
                        __RPC__out LRESULT *plResult);
        HRESULT ( STDMETHODCALLTYPE *SetActiveContext )(
            __RPC__in IActiveIME * This,
                       HIMC hIMC,
                       BOOL fFlag);
        HRESULT ( STDMETHODCALLTYPE *ProcessKey )(
            __RPC__in IActiveIME * This,
                       HIMC hIMC,
                       UINT uVirKey,
                       DWORD lParam,
                       __RPC__in BYTE *pbKeyState);
        HRESULT ( STDMETHODCALLTYPE *Notify )(
            __RPC__in IActiveIME * This,
                       HIMC hIMC,
                       DWORD dwAction,
                       DWORD dwIndex,
                       DWORD dwValue);
        HRESULT ( STDMETHODCALLTYPE *Select )(
            __RPC__in IActiveIME * This,
                       HIMC hIMC,
                       BOOL fSelect);
        HRESULT ( STDMETHODCALLTYPE *SetCompositionString )(
            __RPC__in IActiveIME * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       __RPC__in void *pComp,
                       DWORD dwCompLen,
                       __RPC__in void *pRead,
                       DWORD dwReadLen);
        HRESULT ( STDMETHODCALLTYPE *ToAsciiEx )(
            __RPC__in IActiveIME * This,
                       UINT uVirKey,
                       UINT uScanCode,
                       __RPC__in BYTE *pbKeyState,
                       UINT fuState,
                       HIMC hIMC,
                        __RPC__out DWORD *pdwTransBuf,
                        __RPC__out UINT *puSize);
        HRESULT ( STDMETHODCALLTYPE *RegisterWord )(
            __RPC__in IActiveIME * This,
                       __RPC__in LPWSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPWSTR szString);
        HRESULT ( STDMETHODCALLTYPE *UnregisterWord )(
            __RPC__in IActiveIME * This,
                       __RPC__in LPWSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPWSTR szString);
        HRESULT ( STDMETHODCALLTYPE *GetRegisterWordStyle )(
            __RPC__in IActiveIME * This,
                       UINT nItem,
                        __RPC__out STYLEBUFW *pStyleBuf,
                        __RPC__out UINT *puBufSize);
        HRESULT ( STDMETHODCALLTYPE *EnumRegisterWord )(
            __RPC__in IActiveIME * This,
                       __RPC__in LPWSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPWSTR szRegister,
                       __RPC__in LPVOID pData,
                        __RPC__deref_out_opt IEnumRegisterWordW **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetCodePageA )(
            __RPC__in IActiveIME * This,
                        __RPC__out UINT *uCodePage);
        HRESULT ( STDMETHODCALLTYPE *GetLangId )(
            __RPC__in IActiveIME * This,
                        __RPC__out LANGID *plid);
        END_INTERFACE
    } IActiveIMEVtbl;
    interface IActiveIME
    {
        CONST_VTBL struct IActiveIMEVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Inquire(This,dwSystemInfoFlags,pIMEInfo,szWndClass,pdwPrivate) )
    ( (This)->lpVtbl -> ConversionList(This,hIMC,szSource,uFlag,uBufLen,pDest,puCopied) )
    ( (This)->lpVtbl -> Configure(This,hKL,hWnd,dwMode,pRegisterWord) )
    ( (This)->lpVtbl -> Destroy(This,uReserved) )
    ( (This)->lpVtbl -> Escape(This,hIMC,uEscape,pData,plResult) )
    ( (This)->lpVtbl -> SetActiveContext(This,hIMC,fFlag) )
    ( (This)->lpVtbl -> ProcessKey(This,hIMC,uVirKey,lParam,pbKeyState) )
    ( (This)->lpVtbl -> Notify(This,hIMC,dwAction,dwIndex,dwValue) )
    ( (This)->lpVtbl -> Select(This,hIMC,fSelect) )
    ( (This)->lpVtbl -> SetCompositionString(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen) )
    ( (This)->lpVtbl -> ToAsciiEx(This,uVirKey,uScanCode,pbKeyState,fuState,hIMC,pdwTransBuf,puSize) )
    ( (This)->lpVtbl -> RegisterWord(This,szReading,dwStyle,szString) )
    ( (This)->lpVtbl -> UnregisterWord(This,szReading,dwStyle,szString) )
    ( (This)->lpVtbl -> GetRegisterWordStyle(This,nItem,pStyleBuf,puBufSize) )
    ( (This)->lpVtbl -> EnumRegisterWord(This,szReading,dwStyle,szRegister,pData,ppEnum) )
    ( (This)->lpVtbl -> GetCodePageA(This,uCodePage) )
    ( (This)->lpVtbl -> GetLangId(This,plid) )
EXTERN_C const IID IID_IActiveIME2;
    typedef struct IActiveIME2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveIME2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveIME2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveIME2 * This);
        HRESULT ( STDMETHODCALLTYPE *Inquire )(
            __RPC__in IActiveIME2 * This,
                       DWORD dwSystemInfoFlags,
                        __RPC__out IMEINFO *pIMEInfo,
                        __RPC__out LPWSTR szWndClass,
                        __RPC__out DWORD *pdwPrivate);
        HRESULT ( STDMETHODCALLTYPE *ConversionList )(
            __RPC__in IActiveIME2 * This,
                       HIMC hIMC,
                       __RPC__in LPWSTR szSource,
                       UINT uFlag,
                       UINT uBufLen,
                        __RPC__out CANDIDATELIST *pDest,
                        __RPC__out UINT *puCopied);
        HRESULT ( STDMETHODCALLTYPE *Configure )(
            __RPC__in IActiveIME2 * This,
                       __RPC__in HKL hKL,
                       __RPC__in HWND hWnd,
                       DWORD dwMode,
                       __RPC__in REGISTERWORDW *pRegisterWord);
        HRESULT ( STDMETHODCALLTYPE *Destroy )(
            __RPC__in IActiveIME2 * This,
                       UINT uReserved);
        HRESULT ( STDMETHODCALLTYPE *Escape )(
            __RPC__in IActiveIME2 * This,
                       HIMC hIMC,
                       UINT uEscape,
                            __RPC__inout void *pData,
                        __RPC__out LRESULT *plResult);
        HRESULT ( STDMETHODCALLTYPE *SetActiveContext )(
            __RPC__in IActiveIME2 * This,
                       HIMC hIMC,
                       BOOL fFlag);
        HRESULT ( STDMETHODCALLTYPE *ProcessKey )(
            __RPC__in IActiveIME2 * This,
                       HIMC hIMC,
                       UINT uVirKey,
                       DWORD lParam,
                       __RPC__in BYTE *pbKeyState);
        HRESULT ( STDMETHODCALLTYPE *Notify )(
            __RPC__in IActiveIME2 * This,
                       HIMC hIMC,
                       DWORD dwAction,
                       DWORD dwIndex,
                       DWORD dwValue);
        HRESULT ( STDMETHODCALLTYPE *Select )(
            __RPC__in IActiveIME2 * This,
                       HIMC hIMC,
                       BOOL fSelect);
        HRESULT ( STDMETHODCALLTYPE *SetCompositionString )(
            __RPC__in IActiveIME2 * This,
                       HIMC hIMC,
                       DWORD dwIndex,
                       __RPC__in void *pComp,
                       DWORD dwCompLen,
                       __RPC__in void *pRead,
                       DWORD dwReadLen);
        HRESULT ( STDMETHODCALLTYPE *ToAsciiEx )(
            __RPC__in IActiveIME2 * This,
                       UINT uVirKey,
                       UINT uScanCode,
                       __RPC__in BYTE *pbKeyState,
                       UINT fuState,
                       HIMC hIMC,
                        __RPC__out DWORD *pdwTransBuf,
                        __RPC__out UINT *puSize);
        HRESULT ( STDMETHODCALLTYPE *RegisterWord )(
            __RPC__in IActiveIME2 * This,
                       __RPC__in LPWSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPWSTR szString);
        HRESULT ( STDMETHODCALLTYPE *UnregisterWord )(
            __RPC__in IActiveIME2 * This,
                       __RPC__in LPWSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPWSTR szString);
        HRESULT ( STDMETHODCALLTYPE *GetRegisterWordStyle )(
            __RPC__in IActiveIME2 * This,
                       UINT nItem,
                        __RPC__out STYLEBUFW *pStyleBuf,
                        __RPC__out UINT *puBufSize);
        HRESULT ( STDMETHODCALLTYPE *EnumRegisterWord )(
            __RPC__in IActiveIME2 * This,
                       __RPC__in LPWSTR szReading,
                       DWORD dwStyle,
                       __RPC__in LPWSTR szRegister,
                       __RPC__in LPVOID pData,
                        __RPC__deref_out_opt IEnumRegisterWordW **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetCodePageA )(
            __RPC__in IActiveIME2 * This,
                        __RPC__out UINT *uCodePage);
        HRESULT ( STDMETHODCALLTYPE *GetLangId )(
            __RPC__in IActiveIME2 * This,
                        __RPC__out LANGID *plid);
        HRESULT ( STDMETHODCALLTYPE *Sleep )(
            __RPC__in IActiveIME2 * This);
        HRESULT ( STDMETHODCALLTYPE *Unsleep )(
            __RPC__in IActiveIME2 * This,
                       BOOL fDead);
        END_INTERFACE
    } IActiveIME2Vtbl;
    interface IActiveIME2
    {
        CONST_VTBL struct IActiveIME2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Inquire(This,dwSystemInfoFlags,pIMEInfo,szWndClass,pdwPrivate) )
    ( (This)->lpVtbl -> ConversionList(This,hIMC,szSource,uFlag,uBufLen,pDest,puCopied) )
    ( (This)->lpVtbl -> Configure(This,hKL,hWnd,dwMode,pRegisterWord) )
    ( (This)->lpVtbl -> Destroy(This,uReserved) )
    ( (This)->lpVtbl -> Escape(This,hIMC,uEscape,pData,plResult) )
    ( (This)->lpVtbl -> SetActiveContext(This,hIMC,fFlag) )
    ( (This)->lpVtbl -> ProcessKey(This,hIMC,uVirKey,lParam,pbKeyState) )
    ( (This)->lpVtbl -> Notify(This,hIMC,dwAction,dwIndex,dwValue) )
    ( (This)->lpVtbl -> Select(This,hIMC,fSelect) )
    ( (This)->lpVtbl -> SetCompositionString(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen) )
    ( (This)->lpVtbl -> ToAsciiEx(This,uVirKey,uScanCode,pbKeyState,fuState,hIMC,pdwTransBuf,puSize) )
    ( (This)->lpVtbl -> RegisterWord(This,szReading,dwStyle,szString) )
    ( (This)->lpVtbl -> UnregisterWord(This,szReading,dwStyle,szString) )
    ( (This)->lpVtbl -> GetRegisterWordStyle(This,nItem,pStyleBuf,puBufSize) )
    ( (This)->lpVtbl -> EnumRegisterWord(This,szReading,dwStyle,szRegister,pData,ppEnum) )
    ( (This)->lpVtbl -> GetCodePageA(This,uCodePage) )
    ( (This)->lpVtbl -> GetLangId(This,plid) )
    ( (This)->lpVtbl -> Sleep(This) )
    ( (This)->lpVtbl -> Unsleep(This,fDead) )
EXTERN_C const CLSID CLSID_CActiveIMM;
class DECLSPEC_UUID("4955DD33-B159-11d0-8FCF-00AA006BCC59")
CActiveIMM;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_dimm_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dimm_0000_0001_v0_0_s_ifspec;
}
