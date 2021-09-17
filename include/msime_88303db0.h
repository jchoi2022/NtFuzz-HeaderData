#include <ole2.h>
#include <objbase.h>
#include <imm.h>
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma pack(1)
DEFINE_GUID(CLSID_VERSION_DEPENDENT_MSIME_JAPANESE,
0x6a91029e, 0xaa49, 0x471b, 0xae, 0xe7, 0x7d, 0x33, 0x27, 0x85, 0x66, 0x0d);
DEFINE_GUID(IID_IFECommon,
0x19f7151, 0xe6db, 0x11d0, 0x83, 0xc3, 0x0, 0xc0, 0x4f, 0xdd, 0xb8, 0x2e);
DEFINE_GUID(IID_IFELanguage,
0x19f7152, 0xe6db, 0x11d0, 0x83, 0xc3, 0x0, 0xc0, 0x4f, 0xdd, 0xb8, 0x2e);
DEFINE_GUID(IID_IFELanguage2,
0x21164102, 0xc24a, 0x11d1, 0x85, 0x1a, 0x0, 0xc0, 0x4f, 0xcc, 0x6b, 0x14);
DEFINE_GUID(IID_IFEDictionary,
0x19f7153, 0xe6db, 0x11d0, 0x83, 0xc3, 0x0, 0xc0, 0x4f, 0xdd, 0xb8, 0x2e);
DECLARE_INTERFACE_(IFEClassFactory, IClassFactory)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID refiid, VOID **ppv) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(CreateInstance) (THIS_ LPUNKNOWN, REFIID, void **) PURE;
    STDMETHOD(LockServer) (THIS_ BOOL) PURE;
};
typedef struct _IMEDLG
{
    int cbIMEDLG;
    HWND hwnd;
    LPWSTR lpwstrWord;
    int nTabId;
} IMEDLG;
DECLARE_INTERFACE_(IFECommon, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID refiid, VOID **ppv) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(IsDefaultIME) (THIS_
                            _In_reads_(cszName) const CHAR *szName,
                            _In_ INT cszName
                            ) PURE;
    STDMETHOD(SetDefaultIME) (THIS) PURE;
    STDMETHOD(InvokeWordRegDialog) (THIS_
                            IMEDLG *pimedlg
                            ) PURE;
    STDMETHOD(InvokeDictToolDialog) (THIS_
                            IMEDLG *pimedlg
                            ) PURE;
};
typedef struct tagWDD{
    WORD wDispPos;
    union {
        WORD wReadPos;
        WORD wCompPos;
    };
    WORD cchDisp;
    union {
        WORD cchRead;
        WORD cchComp;
    };
    DWORD WDD_nReserve1;
    WORD nPos;
    WORD fPhrase : 1;
    WORD fAutoCorrect: 1;
    WORD fNumericPrefix: 1;
    WORD fUserRegistered: 1;
    WORD fUnknown: 1;
    WORD fRecentUsed: 1;
    WORD :10;
    VOID *pReserved;
} WDD;
typedef struct tagMORRSLT {
    DWORD dwSize;
    WCHAR *pwchOutput;
    WORD cchOutput;
    union {
        WCHAR *pwchRead;
        WCHAR *pwchComp;
    };
    union {
        WORD cchRead;
        WORD cchComp;
    };
    WORD *pchInputPos;
    WORD *pchOutputIdxWDD;
    union {
        WORD *pchReadIdxWDD;
        WORD *pchCompIdxWDD;
    };
    WORD *paMonoRubyPos;
    WDD *pWDD;
    INT cWDD;
    VOID *pPrivate;
    WCHAR BLKBuff[];
}MORRSLT;
DECLARE_INTERFACE_(IFELanguage, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID refiid, VOID **ppv) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(Open)(THIS) PURE;
    STDMETHOD(Close)(THIS) PURE;
    STDMETHOD(GetJMorphResult)(THIS_
                        DWORD dwRequest,
                        DWORD dwCMode,
                        INT cwchInput,
                        const WCHAR *pwchInput,
                        DWORD *pfCInfo,
                        MORRSLT **ppResult ) PURE;
    STDMETHOD(GetConversionModeCaps)(THIS_ DWORD *pdwCaps) PURE;
    STDMETHOD(GetPhonetic)(THIS_
                        BSTR string,
                        LONG start,
                        LONG length,
                        BSTR * phonetic ) PURE;
    STDMETHOD(GetConversion)(THIS_
                        BSTR string,
                        LONG start,
                        LONG length,
                        BSTR * result ) PURE;
};
typedef enum
{
    IFED_REG_HEAD,
    IFED_REG_TAIL,
    IFED_REG_DEL,
} IMEREG;
typedef enum
{
    IFED_UNKNOWN,
    IFED_MSIME2_BIN_SYSTEM,
    IFED_MSIME2_BIN_USER,
    IFED_MSIME2_TEXT_USER,
    IFED_MSIME95_BIN_SYSTEM,
    IFED_MSIME95_BIN_USER,
    IFED_MSIME95_TEXT_USER,
    IFED_MSIME97_BIN_SYSTEM,
    IFED_MSIME97_BIN_USER,
    IFED_MSIME97_TEXT_USER,
    IFED_MSIME98_BIN_SYSTEM,
    IFED_MSIME98_BIN_USER,
    IFED_MSIME98_TEXT_USER,
    IFED_ACTIVE_DICT,
    IFED_ATOK9,
    IFED_ATOK10,
    IFED_NEC_AI_,
    IFED_WX_II,
    IFED_WX_III,
    IFED_VJE_20,
    IFED_MSIME98_SYSTEM_CE,
    IFED_MSIME_BIN_SYSTEM,
    IFED_MSIME_BIN_USER,
    IFED_MSIME_TEXT_USER,
    IFED_PIME2_BIN_USER,
    IFED_PIME2_BIN_SYSTEM,
    IFED_PIME2_BIN_STANDARD_SYSTEM,
} IMEFMT;
typedef enum
{
    IFED_UCT_NONE,
    IFED_UCT_STRING_SJIS,
    IFED_UCT_STRING_UNICODE,
    IFED_UCT_USER_DEFINED,
    IFED_UCT_MAX,
} IMEUCT;
typedef struct _IMEWRD
{
    WCHAR *pwchReading;
    WCHAR *pwchDisplay;
    union {
        ULONG ulPos;
        struct {
            WORD nPos1;
            WORD nPos2;
        } ;
    };
    ULONG rgulAttrs[2];
    INT cbComment;
    IMEUCT uct;
    VOID *pvComment;
} IMEWRD, *PIMEWRD;
typedef const IMEWRD *PCIMEWRD;
typedef struct _IMESHF
{
    WORD cbShf;
    WORD verDic;
    CHAR szTitle[48];
    CHAR szDescription[256];
    CHAR szCopyright[128];
} IMESHF;
typedef struct _POSTBL
{
    WORD nPos;
    BYTE *szName;
} POSTBL;
typedef enum
{
    IFED_REL_NONE,
    IFED_REL_NO,
    IFED_REL_GA,
    IFED_REL_WO,
    IFED_REL_NI,
    IFED_REL_DE,
    IFED_REL_YORI,
    IFED_REL_KARA,
    IFED_REL_MADE,
    IFED_REL_HE,
    IFED_REL_TO,
    IFED_REL_IDEOM,
    IFED_REL_FUKU_YOUGEN,
    IFED_REL_KEIYOU_YOUGEN,
    IFED_REL_KEIDOU1_YOUGEN,
    IFED_REL_KEIDOU2_YOUGEN,
    IFED_REL_TAIGEN,
    IFED_REL_YOUGEN,
    IFED_REL_RENTAI_MEI,
    IFED_REL_RENSOU,
    IFED_REL_KEIYOU_TO_YOUGEN,
    IFED_REL_KEIYOU_TARU_YOUGEN,
    IFED_REL_UNKNOWN1,
    IFED_REL_UNKNOWN2,
    IFED_REL_ALL,
} IMEREL;
typedef struct _IMEDP
{
    IMEWRD wrdModifier;
    IMEWRD wrdModifiee;
    IMEREL relID;
} IMEDP, *PIMEDP;
typedef BOOL (WINAPI *PFNLOG)(IMEDP *, HRESULT);
DECLARE_INTERFACE_(IFEDictionary, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID refiid, VOID **ppv) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(Open) (THIS_
                            _Inout_updates_opt_(MAX_PATH) CHAR *pchDictPath,
                            IMESHF *pshf
                            ) PURE;
    STDMETHOD(Close) (THIS) PURE;
    STDMETHOD(GetHeader) (THIS_
                            _Inout_updates_opt_(MAX_PATH) CHAR *pchDictPath,
                            IMESHF *pshf,
                            IMEFMT *pjfmt,
                            ULONG *pulType
                            ) PURE;
    STDMETHOD(DisplayProperty) (THIS_
                            HWND hwnd
                            ) PURE;
    STDMETHOD(GetPosTable) (THIS_
                            POSTBL **prgPosTbl,
                            int *pcPosTbl
                            ) PURE;
    STDMETHOD(GetWords) (THIS_
                            const WCHAR *pwchFirst,
                            const WCHAR *pwchLast,
                            const WCHAR *pwchDisplay,
                            ULONG ulPos,
                            ULONG ulSelect,
                            ULONG ulWordSrc,
                            UCHAR *pchBuffer,
                            ULONG cbBuffer,
                            ULONG *pcWrd
                            ) PURE;
    STDMETHOD(NextWords) (THIS_
                            UCHAR *pchBuffer,
                            ULONG cbBuffer,
                            ULONG *pcWrd
                            ) PURE;
    STDMETHOD(Create) (THIS_
                            const CHAR *pchDictPath,
                            IMESHF *pshf
                            ) PURE;
    STDMETHOD(SetHeader) (THIS_
                            IMESHF *pshf
                            ) PURE;
    STDMETHOD(ExistWord) (THIS_
                            IMEWRD *pwrd
                            ) PURE;
    STDMETHOD(ExistDependency) (THIS_
                            IMEDP *pdp
                            ) PURE;
    STDMETHOD(RegisterWord) (THIS_
                            IMEREG reg,
                            IMEWRD *pwrd
                            ) PURE;
    STDMETHOD(RegisterDependency) (THIS_
                            IMEREG reg,
                            IMEDP *pdp
                            ) PURE;
    STDMETHOD(GetDependencies) (THIS_
                            const WCHAR *pwchKakariReading,
                            const WCHAR *pwchKakariDisplay,
                            ULONG ulKakariPos,
                            const WCHAR *pwchUkeReading,
                            const WCHAR *pwchUkeDisplay,
                            ULONG ulUkePos,
                            IMEREL jrel,
                            ULONG ulWordSrc,
                            UCHAR *pchBuffer,
                            ULONG cbBuffer,
                            ULONG *pcdp
                            ) PURE;
    STDMETHOD(NextDependencies) (THIS_
                            UCHAR *pchBuffer,
                            ULONG cbBuffer,
                            ULONG *pcDp
                            ) PURE;
    STDMETHOD(ConvertFromOldMSIME) (THIS_
                            const CHAR *pchDic,
                            PFNLOG pfnLog,
                            IMEREG reg
                            ) PURE;
    STDMETHOD(ConvertFromUserToSys) (THIS) PURE;
};
typedef struct tagIMEKMSINIT {
    INT cbSize;
    HWND hWnd;
} IMEKMSINIT;
typedef struct tagIMEKMSKEY {
    DWORD dwStatus;
    DWORD dwCompStatus;
    DWORD dwVKEY;
    union {
        DWORD dwControl;
        DWORD dwNotUsed;
    };
    union {
        WCHAR pwszDscr[31];
        WCHAR pwszNoUse[31];
    };
} IMEKMSKEY;
typedef struct tagIMEKMS {
    INT cbSize;
    HIMC hIMC;
    DWORD cKeyList;
    IMEKMSKEY *pKeyList;
} IMEKMS;
typedef struct tagIMEKMSNTFY {
    INT cbSize;
    HIMC hIMC;
    BOOL fSelect;
} IMEKMSNTFY;
typedef struct tagIMEKMSKMP {
    INT cbSize;
    HIMC hIMC;
    LANGID idLang;
    WORD wVKStart;
    WORD wVKEnd;
    INT cKeyList;
    IMEKMSKEY *pKeyList;
} IMEKMSKMP;
typedef struct tagIMEKMSINVK {
    INT cbSize;
    HIMC hIMC;
    DWORD dwControl;
} IMEKMSINVK;
typedef struct tagIMEKMSFUNCDESC {
    INT cbSize;
    LANGID idLang;
    DWORD dwControl;
    WCHAR pwszDescription[128];
} IMEKMSFUNCDESC;
#pragma pack()
#endif
#pragma endregion
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
HRESULT WINAPI CreateIFECommonInstance(VOID **ppvObj);
typedef HRESULT (WINAPI *fpCreateIFECommonInstanceType)(VOID **ppvObj);
HRESULT WINAPI CreateIFELanguageInstance(REFCLSID clsid, VOID **ppvObj);
typedef HRESULT (WINAPI *fpCreateIFELanguageInstanceType)(REFCLSID clsid, VOID **ppvObj);
HRESULT WINAPI CreateIFEDictionaryInstance(VOID **ppvObj);
typedef HRESULT (WINAPI *fpCreateIFEDictionaryInstanceType)(VOID **ppvObj);
#endif
#pragma endregion
}
