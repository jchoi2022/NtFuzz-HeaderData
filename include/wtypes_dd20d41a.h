#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "wtypesbase.h"
extern "C"{
extern RPC_IF_HANDLE __MIDL_itf_wtypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wtypes_0000_0000_v0_0_s_ifspec;
typedef struct tagRemHGLOBAL
    {
    LONG fNullHGlobal;
    ULONG cbData;
                    byte data[ 1 ];
    } RemHGLOBAL;
typedef struct tagRemHMETAFILEPICT
    {
    LONG mm;
    LONG xExt;
    LONG yExt;
    ULONG cbData;
                    byte data[ 1 ];
    } RemHMETAFILEPICT;
typedef struct tagRemHENHMETAFILE
    {
    ULONG cbData;
                    byte data[ 1 ];
    } RemHENHMETAFILE;
typedef struct tagRemHBITMAP
    {
    ULONG cbData;
                    byte data[ 1 ];
    } RemHBITMAP;
typedef struct tagRemHPALETTE
    {
    ULONG cbData;
                    byte data[ 1 ];
    } RemHPALETTE;
typedef struct tagRemBRUSH
    {
    ULONG cbData;
                    byte data[ 1 ];
    } RemHBRUSH;
typedef byte BYTE;
typedef unsigned short WORD;
typedef unsigned int UINT;
typedef int INT;
typedef long BOOL;
typedef long LONG;
typedef UINT_PTR WPARAM;
typedef unsigned long DWORD;
typedef LONG_PTR LPARAM;
typedef LONG_PTR LRESULT;
typedef void * HANDLE;
typedef void *HMODULE;
typedef void *HINSTANCE;
typedef void *HTASK;
typedef void *HKEY;
typedef void *HDESK;
typedef void *HMF;
typedef void *HEMF;
typedef void *HPEN;
typedef void *HRSRC;
typedef void *HSTR;
typedef void *HWINSTA;
typedef void *HKL;
typedef void *HGDIOBJ;
typedef HANDLE HDWP;
typedef INT HFILE;
typedef WORD *LPWORD;
typedef DWORD *LPDWORD;
typedef char CHAR;
typedef CHAR *LPSTR;
typedef const CHAR *LPCSTR;
typedef wchar_t WCHAR;
typedef WCHAR TCHAR;
typedef WCHAR *LPWSTR;
typedef TCHAR *LPTSTR;
typedef const WCHAR *LPCWSTR;
typedef const TCHAR *LPCTSTR;
typedef DWORD COLORREF;
typedef DWORD *LPCOLORREF;
typedef HANDLE *LPHANDLE;
typedef struct _RECTL
    {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
    } RECTL;
typedef struct _RECTL *PRECTL;
typedef struct _RECTL *LPRECTL;
typedef struct tagPOINT
    {
    LONG x;
    LONG y;
    } POINT;
typedef struct tagPOINT *PPOINT;
typedef struct tagPOINT *LPPOINT;
typedef struct _POINTL
    {
    LONG x;
    LONG y;
    } POINTL;
typedef struct _POINTL *PPOINTL;
typedef struct tagSIZE
    {
    LONG cx;
    LONG cy;
    } SIZE;
typedef struct tagSIZE *PSIZE;
typedef struct tagSIZE *LPSIZE;
typedef struct tagSIZEL
    {
    LONG cx;
    LONG cy;
    } SIZEL;
typedef struct tagSIZEL *PSIZEL;
typedef struct tagSIZEL *LPSIZEL;
typedef struct tagPALETTEENTRY
    {
    BYTE peRed;
    BYTE peGreen;
    BYTE peBlue;
    BYTE peFlags;
    } PALETTEENTRY;
typedef struct tagPALETTEENTRY *PPALETTEENTRY;
typedef struct tagPALETTEENTRY *LPPALETTEENTRY;
typedef struct tagLOGPALETTE
    {
    WORD palVersion;
    WORD palNumEntries;
                    PALETTEENTRY palPalEntry[ 1 ];
    } LOGPALETTE;
typedef struct tagLOGPALETTE *PLOGPALETTE;
typedef struct tagLOGPALETTE *LPLOGPALETTE;
typedef const RECTL *LPCRECTL;
typedef struct tagRECT
    {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
    } RECT;
typedef struct tagRECT *PRECT;
typedef struct tagRECT *LPRECT;
typedef const RECT *LPCRECT;
#if 0
typedef FMTID *REFFMTID;
#endif
typedef
enum tagDVASPECT
    {
        DVASPECT_CONTENT = 1,
        DVASPECT_THUMBNAIL = 2,
        DVASPECT_ICON = 4,
        DVASPECT_DOCPRINT = 8
    } DVASPECT;
typedef
enum tagSTGC
    {
        STGC_DEFAULT = 0,
        STGC_OVERWRITE = 1,
        STGC_ONLYIFCURRENT = 2,
        STGC_DANGEROUSLYCOMMITMERELYTODISKCACHE = 4,
        STGC_CONSOLIDATE = 8
    } STGC;
typedef
enum tagSTGMOVE
    {
        STGMOVE_MOVE = 0,
        STGMOVE_COPY = 1,
        STGMOVE_SHALLOWCOPY = 2
    } STGMOVE;
typedef
enum tagSTATFLAG
    {
        STATFLAG_DEFAULT = 0,
        STATFLAG_NONAME = 1,
        STATFLAG_NOOPEN = 2
    } STATFLAG;
typedef void *HCONTEXT;
typedef DWORD LCID;
typedef USHORT LANGID;
typedef struct _userCLIPFORMAT
    {
    LONG fContext;
                                          union __MIDL_IWinTypes_0001
        {
                       DWORD dwValue;
                               wchar_t *pwszName;
        } u;
    } userCLIPFORMAT;
typedef __RPC_unique_pointer userCLIPFORMAT *wireCLIPFORMAT;
typedef WORD CLIPFORMAT;
typedef struct _GDI_NONREMOTE
    {
    LONG fContext;
                                          union __MIDL_IWinTypes_0002
        {
                       LONG hInproc;
                       DWORD_BLOB *hRemote;
        } u;
    } GDI_NONREMOTE;
typedef struct _userHGLOBAL
    {
    LONG fContext;
                                          union __MIDL_IWinTypes_0003
        {
                       LONG hInproc;
                       FLAGGED_BYTE_BLOB *hRemote;
                       __int64 hInproc64;
        } u;
    } userHGLOBAL;
typedef __RPC_unique_pointer userHGLOBAL *wireHGLOBAL;
typedef struct _userHMETAFILE
    {
    LONG fContext;
                                          union __MIDL_IWinTypes_0004
        {
                       LONG hInproc;
                       BYTE_BLOB *hRemote;
                       __int64 hInproc64;
        } u;
    } userHMETAFILE;
typedef struct _remoteMETAFILEPICT
    {
    LONG mm;
    LONG xExt;
    LONG yExt;
    userHMETAFILE *hMF;
    } remoteMETAFILEPICT;
typedef struct _userHMETAFILEPICT
    {
    LONG fContext;
                                          union __MIDL_IWinTypes_0005
        {
                       LONG hInproc;
                       remoteMETAFILEPICT *hRemote;
                       __int64 hInproc64;
        } u;
    } userHMETAFILEPICT;
typedef struct _userHENHMETAFILE
    {
    LONG fContext;
                                          union __MIDL_IWinTypes_0006
        {
                       LONG hInproc;
                       BYTE_BLOB *hRemote;
                       __int64 hInproc64;
        } u;
    } userHENHMETAFILE;
typedef struct _userBITMAP
    {
    LONG bmType;
    LONG bmWidth;
    LONG bmHeight;
    LONG bmWidthBytes;
    WORD bmPlanes;
    WORD bmBitsPixel;
    ULONG cbSize;
                    byte pBuffer[ 1 ];
    } userBITMAP;
typedef struct _userHBITMAP
    {
    LONG fContext;
                                          union __MIDL_IWinTypes_0007
        {
                       LONG hInproc;
                       userBITMAP *hRemote;
                       __int64 hInproc64;
        } u;
    } userHBITMAP;
typedef struct _userHPALETTE
    {
    LONG fContext;
                                          union __MIDL_IWinTypes_0008
        {
                       LONG hInproc;
                       LOGPALETTE *hRemote;
                       __int64 hInproc64;
        } u;
    } userHPALETTE;
typedef struct _RemotableHandle
    {
    LONG fContext;
                                          union __MIDL_IWinTypes_0009
        {
                       LONG hInproc;
                       LONG hRemote;
        } u;
    } RemotableHandle;
typedef __RPC_unique_pointer RemotableHandle *wireHWND;
typedef __RPC_unique_pointer RemotableHandle *wireHMENU;
typedef __RPC_unique_pointer RemotableHandle *wireHACCEL;
typedef __RPC_unique_pointer RemotableHandle *wireHBRUSH;
typedef __RPC_unique_pointer RemotableHandle *wireHFONT;
typedef __RPC_unique_pointer RemotableHandle *wireHDC;
typedef __RPC_unique_pointer RemotableHandle *wireHICON;
typedef __RPC_unique_pointer RemotableHandle *wireHRGN;
typedef __RPC_unique_pointer RemotableHandle *wireHMONITOR;
#if 0
typedef void *HWND;
typedef void *HMENU;
typedef void *HACCEL;
typedef void *HBRUSH;
typedef void *HFONT;
typedef void *HDC;
typedef void *HICON;
typedef void *HRGN;
typedef void *HMONITOR;
typedef HICON HCURSOR;
#endif
typedef struct tagTEXTMETRICW
    {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    WCHAR tmFirstChar;
    WCHAR tmLastChar;
    WCHAR tmDefaultChar;
    WCHAR tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
    } TEXTMETRICW;
typedef struct tagTEXTMETRICW *PTEXTMETRICW;
typedef struct tagTEXTMETRICW *LPTEXTMETRICW;
typedef __RPC_unique_pointer userHBITMAP *wireHBITMAP;
typedef __RPC_unique_pointer userHPALETTE *wireHPALETTE;
typedef __RPC_unique_pointer userHENHMETAFILE *wireHENHMETAFILE;
typedef __RPC_unique_pointer userHMETAFILE *wireHMETAFILE;
typedef __RPC_unique_pointer userHMETAFILEPICT *wireHMETAFILEPICT;
#if 0
typedef void *HGLOBAL;
typedef HGLOBAL HLOCAL;
typedef void *HBITMAP;
typedef void *HPALETTE;
typedef void *HENHMETAFILE;
typedef void *HMETAFILE;
#endif
typedef void *HMETAFILEPICT;
extern RPC_IF_HANDLE IWinTypes_v0_1_c_ifspec;
extern RPC_IF_HANDLE IWinTypes_v0_1_s_ifspec;
typedef double DATE;
#if 0
typedef struct tagCY
    {
    LONGLONG int64;
    } CY;
#else
typedef union tagCY {
    struct {
        ULONG Lo;
        LONG Hi;
    } DUMMYSTRUCTNAME;
    LONGLONG int64;
} CY;
#endif
typedef CY *LPCY;
#if 0
typedef struct tagDEC
    {
    USHORT wReserved;
    BYTE scale;
    BYTE sign;
    ULONG Hi32;
    ULONGLONG Lo64;
    } DECIMAL;
#else
typedef struct tagDEC {
    USHORT wReserved;
    union {
        struct {
            BYTE scale;
            BYTE sign;
        } DUMMYSTRUCTNAME;
        USHORT signscale;
    } DUMMYUNIONNAME;
    ULONG Hi32;
    union {
        struct {
            ULONG Lo32;
            ULONG Mid32;
        } DUMMYSTRUCTNAME2;
        ULONGLONG Lo64;
    } DUMMYUNIONNAME2;
} DECIMAL;
        {(dec).Lo64 = 0; (dec).Hi32 = 0; (dec).signscale = 0;}
#endif
typedef DECIMAL *LPDECIMAL;
typedef __RPC_unique_pointer FLAGGED_WORD_BLOB *wireBSTR;
typedef OLECHAR *BSTR;
typedef BSTR *LPBSTR;
typedef short VARIANT_BOOL;
typedef struct tagBSTRBLOB
    {
    ULONG cbSize;
                    BYTE *pData;
    } BSTRBLOB;
typedef struct tagBSTRBLOB *LPBSTRBLOB;
typedef struct tagCLIPDATA
    {
    ULONG cbSize;
    LONG ulClipFmt;
                    BYTE *pClipData;
    } CLIPDATA;
typedef unsigned short VARTYPE;
enum VARENUM
    {
        VT_EMPTY = 0,
        VT_NULL = 1,
        VT_I2 = 2,
        VT_I4 = 3,
        VT_R4 = 4,
        VT_R8 = 5,
        VT_CY = 6,
        VT_DATE = 7,
        VT_BSTR = 8,
        VT_DISPATCH = 9,
        VT_ERROR = 10,
        VT_BOOL = 11,
        VT_VARIANT = 12,
        VT_UNKNOWN = 13,
        VT_DECIMAL = 14,
        VT_I1 = 16,
        VT_UI1 = 17,
        VT_UI2 = 18,
        VT_UI4 = 19,
        VT_I8 = 20,
        VT_UI8 = 21,
        VT_INT = 22,
        VT_UINT = 23,
        VT_VOID = 24,
        VT_HRESULT = 25,
        VT_PTR = 26,
        VT_SAFEARRAY = 27,
        VT_CARRAY = 28,
        VT_USERDEFINED = 29,
        VT_LPSTR = 30,
        VT_LPWSTR = 31,
        VT_RECORD = 36,
        VT_INT_PTR = 37,
        VT_UINT_PTR = 38,
        VT_FILETIME = 64,
        VT_BLOB = 65,
        VT_STREAM = 66,
        VT_STORAGE = 67,
        VT_STREAMED_OBJECT = 68,
        VT_STORED_OBJECT = 69,
        VT_BLOB_OBJECT = 70,
        VT_CF = 71,
        VT_CLSID = 72,
        VT_VERSIONED_STREAM = 73,
        VT_BSTR_BLOB = 0xfff,
        VT_VECTOR = 0x1000,
        VT_ARRAY = 0x2000,
        VT_BYREF = 0x4000,
        VT_RESERVED = 0x8000,
        VT_ILLEGAL = 0xffff,
        VT_ILLEGALMASKED = 0xfff,
        VT_TYPEMASK = 0xfff
    } ;
typedef ULONG PROPID;
typedef struct _tagpropertykey
    {
    GUID fmtid;
    DWORD pid;
    } PROPERTYKEY;
typedef struct tagCSPLATFORM
    {
    DWORD dwPlatformId;
    DWORD dwVersionHi;
    DWORD dwVersionLo;
    DWORD dwProcessorArch;
    } CSPLATFORM;
typedef struct tagQUERYCONTEXT
    {
    DWORD dwContext;
    CSPLATFORM Platform;
    LCID Locale;
    DWORD dwVersionHi;
    DWORD dwVersionLo;
    } QUERYCONTEXT;
typedef
enum tagTYSPEC
    {
        TYSPEC_CLSID = 0,
        TYSPEC_FILEEXT = ( TYSPEC_CLSID + 1 ) ,
        TYSPEC_MIMETYPE = ( TYSPEC_FILEEXT + 1 ) ,
        TYSPEC_FILENAME = ( TYSPEC_MIMETYPE + 1 ) ,
        TYSPEC_PROGID = ( TYSPEC_FILENAME + 1 ) ,
        TYSPEC_PACKAGENAME = ( TYSPEC_PROGID + 1 ) ,
        TYSPEC_OBJECTID = ( TYSPEC_PACKAGENAME + 1 )
    } TYSPEC;
typedef struct __MIDL___MIDL_itf_wtypes_0000_0001_0001
    {
    DWORD tyspec;
                                          union __MIDL___MIDL_itf_wtypes_0000_0001_0005
        {
                       CLSID clsid;
                       LPOLESTR pFileExt;
                       LPOLESTR pMimeType;
                       LPOLESTR pProgId;
                       LPOLESTR pFileName;
                       struct
            {
            LPOLESTR pPackageName;
            GUID PolicyId;
            } ByName;
                       struct
            {
            GUID ObjectId;
            GUID PolicyId;
            } ByObjectId;
        } tagged_union;
    } uCLSSPEC;
extern RPC_IF_HANDLE __MIDL_itf_wtypes_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wtypes_0000_0001_v0_0_s_ifspec;
}
