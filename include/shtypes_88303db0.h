#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "wtypes.h"
#include "unknwn.h"
extern "C"{
#include <pshpack1.h>
typedef struct _SHITEMID
    {
    USHORT cb;
    BYTE abID[ 1 ];
    } SHITEMID;
#include <poppack.h>
typedef SHITEMID __unaligned *LPSHITEMID;
typedef const SHITEMID __unaligned *LPCSHITEMID;
#include <pshpack1.h>
typedef struct _ITEMIDLIST
    {
    SHITEMID mkid;
    } ITEMIDLIST;
typedef ITEMIDLIST ITEMIDLIST_RELATIVE;
typedef ITEMIDLIST ITEMID_CHILD;
typedef ITEMIDLIST ITEMIDLIST_ABSOLUTE;
#include <poppack.h>
typedef __RPC_unique_pointer BYTE_BLOB *wirePIDL;
typedef ITEMIDLIST __unaligned *LPITEMIDLIST;
typedef const ITEMIDLIST __unaligned *LPCITEMIDLIST;
typedef struct _WIN32_FIND_DATAA
    {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[ 260 ];
    CHAR cAlternateFileName[ 14 ];
    } WIN32_FIND_DATAA;
typedef struct _WIN32_FIND_DATAA *PWIN32_FIND_DATAA;
typedef struct _WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;
typedef struct _WIN32_FIND_DATAW
    {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[ 260 ];
    WCHAR cAlternateFileName[ 14 ];
    } WIN32_FIND_DATAW;
typedef struct _WIN32_FIND_DATAW *PWIN32_FIND_DATAW;
typedef struct _WIN32_FIND_DATAW *LPWIN32_FIND_DATAW;
typedef
enum tagSTRRET_TYPE
    {
        STRRET_WSTR = 0,
        STRRET_OFFSET = 0x1,
        STRRET_CSTR = 0x2
    } STRRET_TYPE;
#include <pshpack8.h>
typedef struct _STRRET
    {
    UINT uType;
                                   union
        {
                               LPWSTR pOleStr;
                       UINT uOffset;
                       char cStr[ 260 ];
        } DUMMYUNIONNAME;
    } STRRET;
#include <poppack.h>
typedef STRRET *LPSTRRET;
#include <pshpack1.h>
typedef struct _SHELLDETAILS
    {
    int fmt;
    int cxChar;
    STRRET str;
    } SHELLDETAILS;
typedef struct _SHELLDETAILS *LPSHELLDETAILS;
#include <poppack.h>
typedef
enum tagPERCEIVED
    {
        PERCEIVED_TYPE_FIRST = -3,
        PERCEIVED_TYPE_CUSTOM = -3,
        PERCEIVED_TYPE_UNSPECIFIED = -2,
        PERCEIVED_TYPE_FOLDER = -1,
        PERCEIVED_TYPE_UNKNOWN = 0,
        PERCEIVED_TYPE_TEXT = 1,
        PERCEIVED_TYPE_IMAGE = 2,
        PERCEIVED_TYPE_AUDIO = 3,
        PERCEIVED_TYPE_VIDEO = 4,
        PERCEIVED_TYPE_COMPRESSED = 5,
        PERCEIVED_TYPE_DOCUMENT = 6,
        PERCEIVED_TYPE_SYSTEM = 7,
        PERCEIVED_TYPE_APPLICATION = 8,
        PERCEIVED_TYPE_GAMEMEDIA = 9,
        PERCEIVED_TYPE_CONTACTS = 10,
        PERCEIVED_TYPE_LAST = 10
    } PERCEIVED;
typedef DWORD PERCEIVEDFLAG;
typedef struct _COMDLG_FILTERSPEC
    {
                   LPCWSTR pszName;
                   LPCWSTR pszSpec;
    } COMDLG_FILTERSPEC;
typedef GUID KNOWNFOLDERID;
#if 0
typedef KNOWNFOLDERID *REFKNOWNFOLDERID;
#endif
typedef DWORD KF_REDIRECT_FLAGS;
typedef GUID FOLDERTYPEID;
#if 0
typedef FOLDERTYPEID *REFFOLDERTYPEID;
#endif
typedef GUID TASKOWNERID;
#if 0
typedef TASKOWNERID *REFTASKOWNERID;
#endif
typedef GUID ELEMENTID;
#if 0
typedef ELEMENTID *REFELEMENTID;
#endif
typedef struct tagLOGFONTA
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
typedef struct tagLOGFONTW
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
typedef LOGFONTW LOGFONT;
typedef
enum tagSHCOLSTATE
    {
        SHCOLSTATE_DEFAULT = 0,
        SHCOLSTATE_TYPE_STR = 0x1,
        SHCOLSTATE_TYPE_INT = 0x2,
        SHCOLSTATE_TYPE_DATE = 0x3,
        SHCOLSTATE_TYPEMASK = 0xf,
        SHCOLSTATE_ONBYDEFAULT = 0x10,
        SHCOLSTATE_SLOW = 0x20,
        SHCOLSTATE_EXTENDED = 0x40,
        SHCOLSTATE_SECONDARYUI = 0x80,
        SHCOLSTATE_HIDDEN = 0x100,
        SHCOLSTATE_PREFER_VARCMP = 0x200,
        SHCOLSTATE_PREFER_FMTCMP = 0x400,
        SHCOLSTATE_NOSORTBYFOLDERNESS = 0x800,
        SHCOLSTATE_VIEWONLY = 0x10000,
        SHCOLSTATE_BATCHREAD = 0x20000,
        SHCOLSTATE_NO_GROUPBY = 0x40000,
        SHCOLSTATE_FIXED_WIDTH = 0x1000,
        SHCOLSTATE_NODPISCALE = 0x2000,
        SHCOLSTATE_FIXED_RATIO = 0x4000,
        SHCOLSTATE_DISPLAYMASK = 0xf000
    } SHCOLSTATE;
typedef DWORD SHCOLSTATEF;
typedef PROPERTYKEY SHCOLUMNID;
typedef const SHCOLUMNID *LPCSHCOLUMNID;
typedef
enum DEVICE_SCALE_FACTOR
    {
        DEVICE_SCALE_FACTOR_INVALID = 0,
        SCALE_100_PERCENT = 100,
        SCALE_120_PERCENT = 120,
        SCALE_125_PERCENT = 125,
        SCALE_140_PERCENT = 140,
        SCALE_150_PERCENT = 150,
        SCALE_160_PERCENT = 160,
        SCALE_175_PERCENT = 175,
        SCALE_180_PERCENT = 180,
        SCALE_200_PERCENT = 200,
        SCALE_225_PERCENT = 225,
        SCALE_250_PERCENT = 250,
        SCALE_300_PERCENT = 300,
        SCALE_350_PERCENT = 350,
        SCALE_400_PERCENT = 400,
        SCALE_450_PERCENT = 450,
        SCALE_500_PERCENT = 500
    } DEVICE_SCALE_FACTOR;
extern RPC_IF_HANDLE __MIDL_itf_shtypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shtypes_0000_0000_v0_0_s_ifspec;
}
