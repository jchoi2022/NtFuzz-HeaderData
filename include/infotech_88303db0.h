#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <comdef.h>
#include <ocidl.h>
DEFINE_GUID(IID_IITPropList,
0x1f403bb1, 0x9997, 0x11d0, 0xa8, 0x50, 0x0, 0xaa, 0x0, 0x6c, 0x7d, 0x1);
DEFINE_GUID(CLSID_IITPropList,
0x4662daae, 0xd393, 0x11d0, 0x9a, 0x56, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
typedef DWORD PROPID;
class CProperty
{
public:
    PROPID dwPropID;
    DWORD cbData;
    DWORD dwType;
    union
    {
        LPWSTR lpszwData;
        LPVOID lpvData;
        DWORD dwValue;
    };
    BOOL fPersist;
};
typedef CProperty* LPPROP;
DECLARE_INTERFACE_(IITPropList, IPersistStreamInit)
{
    STDMETHOD(Set)(PROPID PropID, DWORD dwData, DWORD dwOperation) PURE;
    STDMETHOD(Set)(PROPID PropID, LPVOID lpvData, DWORD cbData, DWORD dwOperation) PURE;
    STDMETHOD(Set)(PROPID PropID, LPCWSTR lpszwString, DWORD dwOperation) PURE;
    STDMETHOD(Add)(CProperty& Prop) PURE;
    STDMETHOD(Get)(PROPID PropID, CProperty& Property) PURE;
    STDMETHOD(Clear)() PURE;
    STDMETHOD(SetPersist)(PROPID PropID, BOOL fPersist) PURE;
    STDMETHOD(SetPersist)(BOOL fPersist) PURE;
    STDMETHOD(GetFirst)(CProperty& Property) PURE;
    STDMETHOD(GetNext)(CProperty& Property) PURE;
    STDMETHOD(GetPropCount)(LONG &cProp) PURE;
    STDMETHOD(SaveHeader)(LPVOID lpvData, DWORD dwHdrSize) PURE;
    STDMETHOD(SaveData)(LPVOID lpvHeader, DWORD dwHdrSize, LPVOID lpvData, DWORD dwBufSize) PURE;
    STDMETHOD(GetHeaderSize)(DWORD& dwHdrSize) PURE;
    STDMETHOD(GetDataSize)(LPVOID lpvHeader, DWORD dwHdrSize, DWORD& dwDataSize) PURE;
    STDMETHOD(SaveDataToStream)(LPVOID lpvHeader, DWORD dwHdrSize, IStream* pStream) PURE;
    STDMETHOD(LoadFromMem)(LPVOID lpvData, DWORD dwBufSize) PURE;
    STDMETHOD(SaveToMem)(LPVOID lpvData, DWORD dwBufSize) PURE;
};
typedef IITPropList* LPITPROPLIST;
DEFINE_GUID(IID_IITDatabase,
0x8fa0d5a2, 0xdedf, 0x11d0, 0x9a, 0x61, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(CLSID_IITDatabase,
0x66673452, 0x8c23, 0x11d0, 0xa8, 0x4e, 0x0, 0xaa, 0x0, 0x6c, 0x7d, 0x1);
DECLARE_INTERFACE_(IITDatabase, IUnknown)
{
 STDMETHOD(Open)(LPCWSTR lpszHost, LPCWSTR lpszMoniker, DWORD dwFlags) PURE;
 STDMETHOD(Close)(void) PURE;
 STDMETHOD(CreateObject)(REFCLSID rclsid, DWORD *pdwObjInstance) PURE;
 STDMETHOD(GetObject)(DWORD dwObjInstance, REFIID riid, LPVOID *ppvObj) PURE;
 STDMETHOD(GetObjectPersistence)(LPCWSTR lpwszObject, DWORD dwObjInstance,
                                        LPVOID *ppvPersistence, BOOL fStream) PURE;
};
typedef IITDatabase* LPITDB;
DEFINE_GUID(CLSID_IITCmdInt,
0x4662daa2, 0xd393, 0x11d0, 0x9a, 0x56, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(CLSID_IITSvMgr,
0x4662daa3, 0xd393, 0x11d0, 0x9a, 0x56, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(IID_IITCmdInt,
0x4cf34c30, 0x9bf9, 0x11d0, 0x87, 0x64, 0x0, 0xa0, 0xc9, 0x13, 0xf7, 0x64);
DEFINE_GUID(IID_IITSvMgr,
0x4e7da031, 0x9c11, 0x11d0, 0x87, 0x64, 0x0, 0xa0, 0xc9, 0x13, 0xf7, 0x64);
DEFINE_GUID(CLSID_IITWordWheelUpdate,
0x4662daa5, 0xd393, 0x11d0, 0x9a, 0x56, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(IID_IITBuildCollect,
0x8fa0d5a5, 0xdedf, 0x11d0, 0x9a, 0x61, 0x0, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(CLSID_IITGroupUpdate,
0x4662daa4, 0xd393, 0x11d0, 0x9a, 0x56, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(CLSID_IITIndexBuild,
0x8fa0d5aa, 0xdedf, 0x11d0, 0x9a, 0x61, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(CLSID_IITWWFilterBuild,
0x8fa0d5ab, 0xdedf, 0x11d0, 0x9a, 0x61, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(IID_IITWordWheel,
0x8fa0d5a4, 0xdedf, 0x11d0, 0x9a, 0x61, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(CLSID_IITWordWheel,
0xd73725c2, 0x8c12, 0x11d0, 0xa8, 0x4e, 0x0, 0xaa, 0x0, 0x6c, 0x7d, 0x1);
interface IITDatabase;
interface IITResultSet;
interface IITGroup;
interface IITPropList;
interface IITQuery;
DECLARE_INTERFACE_(IITWordWheel, IUnknown)
{
 STDMETHOD(Open)(IITDatabase* lpITDB, LPCWSTR lpszMoniker, DWORD dwFlags=0) PURE;
 STDMETHOD(Close)(void) PURE;
 STDMETHOD(GetLocaleInfo)(DWORD *pdwCodePageID, LCID *plcid) PURE;
 STDMETHOD(GetSorterInstance)(DWORD *pdwObjInstance) PURE;
 STDMETHOD(Count)(LONG *pcEntries) PURE;
 STDMETHOD(Lookup)(LONG lEntry, LPVOID lpvKeyBuf, DWORD cbKeyBuf) PURE;
 STDMETHOD(Lookup)(LONG lEntry, IITResultSet* lpITResult, LONG cEntries) PURE;
 STDMETHOD(Lookup)(LPCVOID lpcvPrefix, BOOL fExactMatch, LONG *plEntry) PURE;
 STDMETHOD(SetGroup)(IITGroup* piitGroup) PURE;
 STDMETHOD(GetGroup)(IITGroup** ppiitGroup) PURE;
 STDMETHOD(GetDataCount)(LONG lEntry, DWORD *pdwCount) PURE;
 STDMETHOD(GetData)(LONG lEntry, IITResultSet* lpITResult) PURE;
 STDMETHOD(GetDataColumns)(IITResultSet* pRS) PURE;
};
typedef IITWordWheel* LPITWORDWHEEL;
typedef interface IStemSink IStemSink;
typedef interface IStemmer IStemmer;
typedef interface IStemmerConfig IStemmerConfig;
DECLARE_INTERFACE_(IStemmer, IUnknown)
{
    STDMETHOD(Init)(ULONG ulMaxTokenSize, BOOL *pfLicense) PURE;
    STDMETHOD(GetLicenseToUse)(WCHAR const **ppwcsLicense) PURE;
    STDMETHOD(StemWord)(WCHAR const *pwcInBuf, ULONG cwc,
         IStemSink *pStemSink) PURE;
};
typedef IStemmer *PISTEM;
DECLARE_INTERFACE_(IStemSink, IUnknown)
{
    STDMETHOD(PutAltWord)(WCHAR const *pwcInBuf, ULONG cwc) PURE;
    STDMETHOD(PutWord)(WCHAR const *pwcInBuf, ULONG cwc) PURE;
};
typedef IStemSink *PISTEMSNK;
DECLARE_INTERFACE_(IStemmerConfig, IUnknown)
{
 STDMETHOD(SetLocaleInfo)(DWORD dwCodePageID, LCID lcid) PURE;
 STDMETHOD(GetLocaleInfo)(DWORD *pdwCodePageID, LCID *plcid) PURE;
 STDMETHOD(SetControlInfo)(DWORD grfStemFlags, DWORD dwReserved) PURE;
 STDMETHOD(GetControlInfo)(DWORD *pgrfStemFlags, DWORD *pdwReserved) PURE;
 STDMETHOD(LoadExternalStemmerData)(IStream *pStream,
                                           DWORD dwExtDataType) PURE;
};
typedef IStemmerConfig *PISTEMC;
typedef interface IPhraseSink IPhraseSink;
typedef interface IWordSink IWordSink;
typedef interface IWordBreaker IWordBreaker;
typedef interface IWordBreakerConfig IWordBreakerConfig;
typedef interface IITStopWordList IITStopWordList;
typedef struct tagTEXT_SOURCE TEXT_SOURCE;
typedef SCODE (__stdcall *PFNFILLTEXTBUFFER)(TEXT_SOURCE *pTextSource);
typedef struct tagTEXT_SOURCE
{
    PFNFILLTEXTBUFFER pfnFillTextBuffer;
    WCHAR *awcBuffer;
    ULONG iEnd;
    ULONG iCur;
} TEXT_SOURCE;
DECLARE_INTERFACE_(IWordBreaker, IUnknown)
{
    STDMETHOD(Init)(BOOL fQuery, ULONG ulMaxTokenSize, BOOL *pfLicense) PURE;
    STDMETHOD(BreakText)(TEXT_SOURCE *pTextSource, IWordSink *pWordSink,
                         IPhraseSink *pPhraseSink) PURE;
    STDMETHOD(ComposePhrase)(WCHAR const *pwcNoun, ULONG cwcNoun,
                             WCHAR const *pwcModifier, ULONG cwcModifier,
                             ULONG ulAttachmentType, WCHAR *pwcPhrase,
                             ULONG *pcwcPhrase) PURE;
    STDMETHOD(GetLicenseToUse)(WCHAR const **ppwcsLicense) PURE;
};
typedef IWordBreaker *PIWBRK;
DECLARE_INTERFACE_(IWordBreakerConfig, IUnknown)
{
 STDMETHOD(SetLocaleInfo)(DWORD dwCodePageID, LCID lcid) PURE;
 STDMETHOD(GetLocaleInfo)(DWORD *pdwCodePageID, LCID *plcid) PURE;
 STDMETHOD(SetBreakWordType)(DWORD dwBreakWordType) PURE;
 STDMETHOD(GetBreakWordType)(DWORD *pdwBreakWordType) PURE;
 STDMETHOD(SetControlInfo)(DWORD grfBreakFlags, DWORD dwReserved) PURE;
 STDMETHOD(GetControlInfo)(DWORD *pgrfBreakFlags, DWORD *pdwReserved) PURE;
 STDMETHOD(LoadExternalBreakerData)(IStream *pStream,
                                           DWORD dwExtDataType) PURE;
 STDMETHOD(SetWordStemmer)(REFCLSID rclsid, IStemmer *pStemmer) PURE;
 STDMETHOD(GetWordStemmer)(IStemmer **ppStemmer) PURE;
};
DEFINE_GUID(IID_IITResultSet,
0x3bb91d41, 0x998b, 0x11d0, 0xa8, 0x50, 0x0, 0xaa, 0x0, 0x6c, 0x7d, 0x1);
DEFINE_GUID(CLSID_IITResultSet,
0x4662daa7, 0xd393, 0x11d0, 0x9a, 0x56, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
typedef enum
{
    PRIORITY_LOW = 0,
    PRIORITY_NORMAL = 1,
    PRIORITY_HIGH = 2,
} PRIORITY;
class CProperty;
typedef struct tagROWSTATUS
{
    LONG lRowFirst;
    LONG cRows;
    LONG cProperties;
    LONG cRowsTotal;
} ROWSTATUS, *LPROWSTATUS;
typedef struct tagCOLUMNSTATUS
{
    LONG cPropCount;
    LONG cPropsLoaded;
} COLUMNSTATUS, *LPCOLUMNSTATUS;
typedef SCODE (__stdcall *PFNCOLHEAPFREE)(LPVOID);
DECLARE_INTERFACE_(IITResultSet, IUnknown)
{
    STDMETHOD(SetColumnPriority)(LONG lColumnIndex, PRIORITY ColumnPriority) PURE;
    STDMETHOD(SetColumnHeap)(LONG lColumnIndex, LPVOID lpvHeap,
                             PFNCOLHEAPFREE pfnColHeapFree) PURE;
    STDMETHOD(SetKeyProp)(PROPID PropID) PURE;
    STDMETHOD(Add)(LPVOID lpvHdr) PURE;
    STDMETHOD(Add)(PROPID PropID, LPVOID lpvDefaultData, DWORD cbData, PRIORITY Priority) PURE;
    STDMETHOD(Add)(PROPID PropID, LPCWSTR lpszwDefault, PRIORITY Priority) PURE;
    STDMETHOD(Add)(PROPID PropID, DWORD dwDefaultData, PRIORITY Priority) PURE;
    STDMETHOD(Append)(LPVOID lpvHdr, LPVOID lpvData) PURE;
    STDMETHOD(Set)(LONG lRowIndex, LPVOID lpvHdr, LPVOID lpvData) PURE;
    STDMETHOD(Set)(LONG lRowIndex, LONG lColumnIndex, DWORD_PTR dwData) PURE;
    STDMETHOD(Set)(LONG lRowIndex, LONG lColumnIndex, LPCWSTR lpwStr) PURE;
    STDMETHOD(Set)(LONG lRowIndex, LONG lColumnIndex, LPVOID lpvData, DWORD cbData) PURE;
    STDMETHOD(Copy)(IITResultSet* pRSCopy) PURE;
    STDMETHOD(AppendRows)(IITResultSet* pResSrc, LONG lRowSrcFirst, LONG cSrcRows,
                          LONG& lRowFirstDest) PURE;
    STDMETHOD(Get)(LONG lRowIndex, LONG lColumnIndex, CProperty& Prop) PURE;
    STDMETHOD(GetKeyProp)(PROPID& KeyPropID) PURE;
    STDMETHOD(GetColumnPriority)(LONG lColumnIndex, PRIORITY& ColumnPriority) PURE;
    STDMETHOD(GetRowCount)(LONG& lNumberOfRows) PURE;
    STDMETHOD(GetColumnCount)(LONG& lNumberOfColumns) PURE;
    STDMETHOD(GetColumn)(LONG lColumnIndex, PROPID& PropID) PURE;
    STDMETHOD(GetColumn)(LONG lColumnIndex, PROPID& PropID, DWORD& dwType, LPVOID& lpvDefaultValue,
                         DWORD& cbSize, PRIORITY& ColumnPriority) PURE;
    STDMETHOD(GetColumnFromPropID)(PROPID PropID, LONG& lColumnIndex) PURE;
    STDMETHOD(Clear)() PURE;
    STDMETHOD(ClearRows)() PURE;
    STDMETHOD(Free)() PURE;
    STDMETHOD(IsCompleted)() PURE;
    STDMETHOD(Cancel)() PURE;
    STDMETHOD(Pause)(BOOL fPause) PURE;
    STDMETHOD(GetRowStatus)(LONG lRowFirst, LONG cRows, LPROWSTATUS lpRowStatus) PURE;
    STDMETHOD(GetColumnStatus)(LPCOLUMNSTATUS lpColStatus) PURE;
};
typedef IITResultSet* LPITRS;
DEFINE_GUID(IID_IWordBreaker,
0xD53552C8, 0x77E3, 0x101A, 0xB5, 0x52, 0x08, 0x00, 0x2B, 0x33, 0xB0, 0xE6);
DEFINE_GUID(IID_IWordSink,
0xCC907054, 0xC058, 0x101A, 0xB5, 0x54, 0x08, 0x00, 0x2B, 0x33, 0xB0, 0xE6);
DEFINE_GUID(IID_IPhraseSink,
0xCC906FF0, 0xC058, 0x101A, 0xB5, 0x54, 0x08, 0x00, 0x2B, 0x33, 0xB0, 0xE6);
DEFINE_GUID(IID_IWordBreakerConfig,
0x8fa0d5a6, 0xdedf, 0x11d0, 0x9a, 0x61, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(CLSID_ITStdBreaker,
0x4662daaf, 0xd393, 0x11d0, 0x9a, 0x56, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(IID_IITStopWordList,
0x8fa0d5ad, 0xdedf, 0x11d0, 0x9a, 0x61, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(IID_IStemmer,
0xefbaf140, 0x7f42, 0x11ce, 0xbe, 0x57, 0x00, 0xaa, 0x00, 0x51, 0xfe, 0x20);
DEFINE_GUID(IID_IStemSink,
0xfe77c330, 0x7f42, 0x11ce, 0xbe, 0x57, 0x00, 0xaa, 0x00, 0x51, 0xfe, 0x20);
DEFINE_GUID(IID_IStemmerConfig,
0x8fa0d5a7, 0xdedf, 0x11d0, 0x9a, 0x61, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(CLSID_ITEngStemmer,
0x8fa0d5a8, 0xdedf, 0x11d0, 0x9a, 0x61, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
#endif
#pragma endregion
