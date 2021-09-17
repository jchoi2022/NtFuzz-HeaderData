       
#include <winapifamily.h>
#include <wtypes.h>
#include <objbase.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <pshpack4.h>
extern "C" {
typedef enum tagTextMode
{
 TM_PLAINTEXT = 1,
 TM_RICHTEXT = 2,
 TM_SINGLELEVELUNDO = 4,
 TM_MULTILEVELUNDO = 8,
 TM_SINGLECODEPAGE = 16,
 TM_MULTICODEPAGE = 32
} TEXTMODE;
typedef struct _imecomptext {
 LONG cb;
 DWORD flags;
} IMECOMPTEXT;
#pragma warning(push)
#pragma warning(disable:4214)
typedef struct _tableRowParms
{
 BYTE cbRow;
 BYTE cbCell;
 BYTE cCell;
 BYTE cRow;
 LONG dxCellMargin;
 LONG dxIndent;
 LONG dyHeight;
 DWORD nAlignment:3;
 DWORD fRTL:1;
 DWORD fKeep:1;
 DWORD fKeepFollow:1;
 DWORD fWrap:1;
 DWORD fIdentCells:1;
 LONG cpStartRow;
 BYTE bTableLevel;
 BYTE iCell;
} TABLEROWPARMS;
typedef struct _tableCellParms
{
 LONG dxWidth;
 WORD nVertAlign:2;
 WORD fMergeTop:1;
 WORD fMergePrev:1;
 WORD fVertical:1;
 WORD fMergeStart:1;
 WORD fMergeCont:1;
 WORD wShading;
 SHORT dxBrdrLeft;
 SHORT dyBrdrTop;
 SHORT dxBrdrRight;
 SHORT dyBrdrBottom;
 COLORREF crBrdrLeft;
 COLORREF crBrdrTop;
 COLORREF crBrdrRight;
 COLORREF crBrdrBottom;
 COLORREF crBackPat;
 COLORREF crForePat;
} TABLECELLPARMS;
#pragma warning(pop)
typedef int (WINAPI *AutoCorrectProc)(LANGID langid, const WCHAR *pszBefore, WCHAR *pszAfter, LONG cchAfter, LONG *pcchReplaced);
typedef struct tagRICHEDIT_IMAGE_PARAMETERS
{
 LONG xWidth;
 LONG yHeight;
 LONG Ascent;
 LONG Type;
 LPCWSTR pwszAlternateText;
 IStream * pIStream;
} RICHEDIT_IMAGE_PARAMETERS;
typedef struct _endcomposition
{
 NMHDR nmhdr;
 DWORD dwCode;
} ENDCOMPOSITIONNOTIFY;
typedef LONG (*EDITWORDBREAKPROCEX)(char *pchText, LONG cchText, BYTE bCharSet, INT action);
typedef struct _charformat
{
 UINT cbSize;
 DWORD dwMask;
 DWORD dwEffects;
 LONG yHeight;
 LONG yOffset;
 COLORREF crTextColor;
 BYTE bCharSet;
 BYTE bPitchAndFamily;
 char szFaceName[LF_FACESIZE];
} CHARFORMATA;
typedef struct _charformatw
{
 UINT cbSize;
 DWORD dwMask;
 DWORD dwEffects;
 LONG yHeight;
 LONG yOffset;
 COLORREF crTextColor;
 BYTE bCharSet;
 BYTE bPitchAndFamily;
 WCHAR szFaceName[LF_FACESIZE];
} CHARFORMATW;
typedef struct _charformat2w
{
 UINT cbSize;
 DWORD dwMask;
 DWORD dwEffects;
 LONG yHeight;
 LONG yOffset;
 COLORREF crTextColor;
 BYTE bCharSet;
 BYTE bPitchAndFamily;
 WCHAR szFaceName[LF_FACESIZE];
 WORD wWeight;
 SHORT sSpacing;
 COLORREF crBackColor;
 LCID lcid;
 union
 {
  DWORD dwReserved;
  DWORD dwCookie;
 };
 SHORT sStyle;
 WORD wKerning;
 BYTE bUnderlineType;
 BYTE bAnimation;
 BYTE bRevAuthor;
 BYTE bUnderlineColor;
} CHARFORMAT2W;
typedef struct _charformat2a
{
 UINT cbSize;
 DWORD dwMask;
 DWORD dwEffects;
 LONG yHeight;
 LONG yOffset;
 COLORREF crTextColor;
 BYTE bCharSet;
 BYTE bPitchAndFamily;
 char szFaceName[LF_FACESIZE];
 WORD wWeight;
 SHORT sSpacing;
 COLORREF crBackColor;
 LCID lcid;
 union
 {
  DWORD dwReserved;
  DWORD dwCookie;
 };
 SHORT sStyle;
 WORD wKerning;
 BYTE bUnderlineType;
 BYTE bAnimation;
 BYTE bRevAuthor;
 BYTE bUnderlineColor;
} CHARFORMAT2A;
      CFM_STRIKEOUT | CFE_PROTECTED | CFM_LINK)
     | CFM_HIDDEN | CFM_OUTLINE | CFM_SHADOW | CFM_EMBOSS \
     | CFM_IMPRINT | CFM_REVISED \
     | CFM_SUBSCRIPT | CFM_SUPERSCRIPT | CFM_BACKCOLOR)
     | CFM_UNDERLINETYPE | CFM_WEIGHT | CFM_REVAUTHOR \
     | CFM_SPACING | CFM_KERNING | CFM_STYLE | CFM_ANIMATION \
     | CFM_COOKIE)
typedef struct _charrange
{
 LONG cpMin;
 LONG cpMax;
} CHARRANGE;
typedef struct _textrange
{
 CHARRANGE chrg;
 LPSTR lpstrText;
} TEXTRANGEA;
typedef struct _textrangew
{
 CHARRANGE chrg;
 LPWSTR lpstrText;
} TEXTRANGEW;
typedef DWORD (CALLBACK *EDITSTREAMCALLBACK)(DWORD_PTR dwCookie, LPBYTE pbBuff, LONG cb, LONG *pcb);
typedef struct _editstream
{
 DWORD_PTR dwCookie;
 DWORD dwError;
 EDITSTREAMCALLBACK pfnCallback;
} EDITSTREAM;
typedef struct _findtext
{
 CHARRANGE chrg;
 LPCSTR lpstrText;
} FINDTEXTA;
typedef struct _findtextw
{
 CHARRANGE chrg;
 LPCWSTR lpstrText;
} FINDTEXTW;
typedef struct _findtextexa
{
 CHARRANGE chrg;
 LPCSTR lpstrText;
 CHARRANGE chrgText;
} FINDTEXTEXA;
typedef struct _findtextexw
{
 CHARRANGE chrg;
 LPCWSTR lpstrText;
 CHARRANGE chrgText;
} FINDTEXTEXW;
typedef struct _formatrange
{
 HDC hdc;
 HDC hdcTarget;
 RECT rc;
 RECT rcPage;
 CHARRANGE chrg;
} FORMATRANGE;
typedef struct _paraformat
{
 UINT cbSize;
 DWORD dwMask;
 WORD wNumbering;
 union
 {
  WORD wReserved;
  WORD wEffects;
 };
 LONG dxStartIndent;
 LONG dxRightIndent;
 LONG dxOffset;
 WORD wAlignment;
 SHORT cTabCount;
 LONG rgxTabs[MAX_TAB_STOPS];
} PARAFORMAT;
struct PARAFORMAT2 : _paraformat
{
 LONG dySpaceBefore;
 LONG dySpaceAfter;
 LONG dyLineSpacing;
 SHORT sStyle;
 BYTE bLineSpacingRule;
 BYTE bOutlineLevel;
 WORD wShadingWeight;
 WORD wShadingStyle;
 WORD wNumberingStart;
 WORD wNumberingStyle;
 WORD wNumberingTab;
 WORD wBorderSpace;
 WORD wBorderWidth;
 WORD wBorders;
};
     PFM_ALIGNMENT | PFM_TABSTOPS | PFM_NUMBERING | \
     PFM_OFFSETINDENT| PFM_RTLPARA)
     | PFM_PAGEBREAKBEFORE | PFM_NOLINENUMBER \
     | PFM_NOWIDOWCONTROL | PFM_DONOTHYPHEN | PFM_SIDEBYSIDE \
     | PFM_TABLE | PFM_TABLEROWDELIMITER)
     | PFM_LINESPACING | PFM_STYLE | PFM_SHADING | PFM_BORDER \
     | PFM_NUMBERINGTAB | PFM_NUMBERINGSTART | PFM_NUMBERINGSTYLE)
typedef struct _nmhdr
{
 HWND hwndFrom;
 UINT idFrom;
 UINT code;
} NMHDR;
typedef struct _msgfilter
{
 NMHDR nmhdr;
 UINT msg;
 WPARAM wParam;
 LPARAM lParam;
} MSGFILTER;
typedef struct _reqresize
{
 NMHDR nmhdr;
 RECT rc;
} REQRESIZE;
typedef struct _selchange
{
 NMHDR nmhdr;
 CHARRANGE chrg;
 WORD seltyp;
} SELCHANGE;
typedef struct _grouptypingchange
{
 NMHDR nmhdr;
 BOOL fGroupTyping;
} GROUPTYPINGCHANGE;
typedef struct _clipboardformat
{
 NMHDR nmhdr;
 CLIPFORMAT cf;
} CLIPBOARDFORMAT;
typedef struct _getcontextmenuex
{
 CHARRANGE chrg;
 DWORD dwFlags;
 POINT pt;
 void* pvReserved;
} GETCONTEXTMENUEX;
typedef struct _endropfiles
{
 NMHDR nmhdr;
 HANDLE hDrop;
 LONG cp;
 BOOL fProtected;
} ENDROPFILES;
typedef struct _enprotected
{
 NMHDR nmhdr;
 UINT msg;
 WPARAM wParam;
 LPARAM lParam;
 CHARRANGE chrg;
} ENPROTECTED;
typedef struct _ensaveclipboard
{
 NMHDR nmhdr;
 LONG cObjectCount;
 LONG cch;
} ENSAVECLIPBOARD;
typedef struct _enoleopfailed
{
 NMHDR nmhdr;
 LONG iob;
 LONG lOper;
 HRESULT hr;
} ENOLEOPFAILED;
typedef struct _objectpositions
{
 NMHDR nmhdr;
 LONG cObjectCount;
 LONG *pcpPositions;
} OBJECTPOSITIONS;
typedef struct _enlink
{
 NMHDR nmhdr;
 UINT msg;
 WPARAM wParam;
 LPARAM lParam;
 CHARRANGE chrg;
} ENLINK;
typedef struct _enlowfirtf
{
 NMHDR nmhdr;
 char *szControl;
} ENLOWFIRTF;
typedef struct _encorrecttext
{
 NMHDR nmhdr;
 CHARRANGE chrg;
 WORD seltyp;
} ENCORRECTTEXT;
typedef struct _punctuation
{
 UINT iSize;
 LPSTR szPunctuation;
} PUNCTUATION;
typedef struct _compcolor
{
 COLORREF crText;
 COLORREF crBackground;
 DWORD dwEffects;
}COMPCOLOR;
typedef struct _repastespecial
{
 DWORD dwAspect;
 DWORD_PTR dwParam;
} REPASTESPECIAL;
typedef enum _undonameid
{
 UID_UNKNOWN = 0,
 UID_TYPING = 1,
 UID_DELETE = 2,
 UID_DRAGDROP = 3,
 UID_CUT = 4,
 UID_PASTE = 5,
 UID_AUTOTABLE = 6
} UNDONAMEID;
typedef struct _settextex
{
 DWORD flags;
 UINT codepage;
} SETTEXTEX;
typedef struct _gettextex
{
 DWORD cb;
 DWORD flags;
 UINT codepage;
 LPCSTR lpDefaultChar;
 LPBOOL lpUsedDefChar;
} GETTEXTEX;
typedef struct _gettextlengthex
{
 DWORD flags;
 UINT codepage;
} GETTEXTLENGTHEX;
typedef struct _bidioptions
{
 UINT cbSize;
 WORD wMask;
 WORD wEffects;
} BIDIOPTIONS;
typedef enum tagKHYPH
{
 khyphNil,
 khyphNormal,
 khyphAddBefore,
 khyphChangeBefore,
 khyphDeleteBefore,
 khyphChangeAfter,
 khyphDelAndChange
} KHYPH;
typedef struct hyphresult
{
 KHYPH khyph;
 long ichHyph;
 WCHAR chHyph;
} HYPHRESULT;
void WINAPI HyphenateProc(_In_ WCHAR *pszWord, LANGID langid, long ichExceed, HYPHRESULT *phyphresult);
typedef struct tagHyphenateInfo
{
 SHORT cbSize;
 SHORT dxHyphenateZone;
 void (WINAPI* pfnHyphenate)(WCHAR*, LANGID, long, HYPHRESULT*);
} HYPHENATEINFO;
#include <poppack.h>
}
#endif
#pragma endregion
