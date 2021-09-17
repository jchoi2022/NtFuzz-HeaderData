#include <windows.h>
#include <objbase.h>
#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(CATID_MSIME_IImePadApplet_VER7,
0x4a0f8e31, 0xc3ee, 0x11d1, 0xaf, 0xef, 0x0, 0x80, 0x5f, 0xc, 0x8b, 0x6d);
DEFINE_GUID(CATID_MSIME_IImePadApplet_VER80,
0x56f7a792, 0xfef1, 0x11d3, 0x84, 0x63, 0x0, 0xc0, 0x4f, 0x7a, 0x6, 0xe5);
DEFINE_GUID(CATID_MSIME_IImePadApplet_VER81,
0x656520b0, 0xbb88, 0x11d4, 0x84, 0xc0, 0x0, 0xc0, 0x4f, 0x7a, 0x6, 0xe5);
DEFINE_GUID(CATID_MSIME_IImePadApplet900,
0xfaae51bf, 0x5e5b, 0x4a1d, 0x8d, 0xe1, 0x17, 0xc1, 0xd9, 0xe1, 0x72, 0x8d);
DEFINE_GUID(CATID_MSIME_IImePadApplet1000,
0xe081e1d6, 0x2389, 0x43cb, 0xb6, 0x6f, 0x60, 0x9f, 0x82, 0x3d, 0x9f, 0x9c);
DEFINE_GUID(CATID_MSIME_IImePadApplet1200,
0xa47fb5fc, 0x7d15, 0x4223, 0xa7, 0x89, 0xb7, 0x81, 0xbf, 0x9a, 0xe6, 0x67);
DEFINE_GUID(CATID_MSIME_IImePadApplet,
0x7566cad1, 0x4ec9, 0x4478, 0x9f, 0xe9, 0x8e, 0xd7, 0x66, 0x61, 0x9e, 0xdf);
DEFINE_GUID(IID_IImePad,
0x5d8e643a, 0xc3a9, 0x11d1, 0xaf, 0xef, 0x0, 0x80, 0x5f, 0xc, 0x8b, 0x6d);
DEFINE_GUID(IID_IImePadApplet,
0x5d8e643b, 0xc3a9, 0x11d1, 0xaf, 0xef, 0x0, 0x80, 0x5f, 0xc, 0x8b, 0x6d);
DEFINE_GUID(IID_IImeSpecifyApplets,
0x5d8e643c, 0xc3a9, 0x11d1, 0xaf, 0xef, 0x0, 0x80, 0x5f, 0xc, 0x8b, 0x6d);
#pragma pack(8)
typedef struct tagAPPLETIDLIST {
    INT count;
    IID *pIIDList;
}APPLETIDLIST, *LPAPPLETIDLIST;
typedef struct tagIMESTRINGCANDIDATE {
    UINT uCount;
    LPWSTR lpwstr[1];
}IMESTRINGCANDIDATE, *LPIMESTRINGCANDIDATE;
typedef struct tagIMEITEM {
    INT cbSize;
    INT iType;
    LPVOID lpItemData;
}IMEITEM, *LPIMEITEM;
typedef struct tagIMEITEMCANDIDATE {
    UINT uCount;
    IMEITEM imeItem[1];
}IMEITEMCANDIDATE, *LPIMEITEMCANDIDATE;
typedef struct tabIMESTRINGINFO {
    DWORD dwFarEastId;
    LPWSTR lpwstr;
}IMESTRINGINFO, *LPIMESTRINGINFO;
typedef const IMESTRINGINFO *LPCIMESTRINGINFO;
typedef struct tabIMEFAREASTINFO {
    DWORD dwSize;
    DWORD dwType;
    DWORD dwData[1];
}IMEFAREASTINFO, *LPIMEFAREASTINFO;
typedef struct tagIMESTRINGCANDIDATEINFO {
    DWORD dwFarEastId;
    LPIMEFAREASTINFO lpFarEastInfo;
    DWORD fInfoMask;
    INT iSelIndex;
    UINT uCount;
    LPWSTR lpwstr[1];
}IMESTRINGCANDIDATEINFO, *LPIMESTRINGCANDIDATEINFO;
typedef struct tagIMECOMPOSITIONSTRINGINFO {
    INT iCompStrLen;
    INT iCaretPos;
    INT iEditStart;
    INT iEditLen;
    INT iTargetStart;
    INT iTargetLen;
}IMECOMPOSITIONSTRINGINFO, *LPIMECOMPOSITIONSTRINGINFO;
typedef struct tagIMECHARINFO {
    WCHAR wch;
    DWORD dwCharInfo;
}IMECHARINFO, *LPIMECHARINFO;
typedef struct tagAPPLETCFG {
    DWORD dwConfig;
    WCHAR wchTitle[MAX_APPLETTITLE];
    WCHAR wchTitleFontFace[MAX_FONTFACE];
    DWORD dwCharSet;
    INT iCategory;
    HICON hIcon;
    LANGID langID;
    WORD dummy;
    LPARAM lReserved1;
}IMEAPPLETCFG, *LPIMEAPPLETCFG;
typedef struct tagIMEAPPLETUI {
    HWND hwnd;
    DWORD dwStyle;
    INT width;
    INT height;
    INT minWidth;
    INT minHeight;
    INT maxWidth;
    INT maxHeight;
    LPARAM lReserved1;
    LPARAM lReserved2;
}IMEAPPLETUI, *LPIMEAPPLETUI;
#pragma pack()
typedef struct tagAPPLYCANDEXPARAM
{
    DWORD dwSize;
    LPWSTR lpwstrDisplay;
    LPWSTR lpwstrReading;
    DWORD dwReserved;
} APPLYCANDEXPARAM, *LPAPPLYCANDEXPARAM;
DECLARE_INTERFACE_(IImeSpecifyApplets, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetAppletIIDList)(THIS_
                                REFIID refiid,
                                LPAPPLETIDLIST lpIIDList) PURE;
};
DECLARE_INTERFACE_(IImePadApplet, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release) (THIS) PURE;
    STDMETHOD(Initialize)(THIS_ IUnknown *lpIImePad) PURE;
    STDMETHOD(Terminate) (THIS) PURE;
    STDMETHOD(GetAppletConfig)(THIS_ LPIMEAPPLETCFG lpAppletCfg) PURE;
    STDMETHOD(CreateUI)(THIS_
                        HWND hwndParent,
                        LPIMEAPPLETUI lpImeAppletUI) PURE;
    STDMETHOD(Notify)(THIS_
                      IUnknown *lpImePad,
                      INT notify,
                      WPARAM wParam,
                      LPARAM lParam) PURE;
};
DECLARE_INTERFACE_(IImePad, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(Request)(THIS_
                       IImePadApplet *pIImePadApplet,
                       INT reqId,
                       WPARAM wParam,
                       LPARAM lParam) PURE;
};
#endif
#pragma endregion
};
