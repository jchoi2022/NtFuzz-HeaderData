#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
#include "tpcshrd.h"
#include "RecTypes.h"
DECLARE_HANDLE(HRECOALT);
DECLARE_HANDLE(HRECOCONTEXT);
DECLARE_HANDLE(HRECOGNIZER);
DECLARE_HANDLE(HRECOLATTICE);
DECLARE_HANDLE(HRECOWORDLIST);
typedef HRESULT (*PfnRecoCallback)(DWORD, LPBYTE, HRECOCONTEXT);
typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char c[8];
} IID;
typedef IID CLSID;
HRESULT WINAPI CreateRecognizer(CLSID *pCLSID, HRECOGNIZER *phrec);
HRESULT WINAPI DestroyRecognizer(HRECOGNIZER hrec);
HRESULT WINAPI GetRecoAttributes(HRECOGNIZER hrec, RECO_ATTRS* pRecoAttrs);
HRESULT WINAPI CreateContext(HRECOGNIZER hrec, HRECOCONTEXT *phrc);
HRESULT WINAPI DestroyContext(HRECOCONTEXT hrc);
HRESULT WINAPI GetResultPropertyList(HRECOGNIZER hrec, ULONG* pPropertyCount, GUID*pPropertyGuid);
HRESULT WINAPI GetPreferredPacketDescription(HRECOGNIZER hrec, PACKET_DESCRIPTION* pPacketDescription);
HRESULT WINAPI GetUnicodeRanges(HRECOGNIZER hrec, ULONG *pcRanges, CHARACTER_RANGE *pcr);
HRESULT WINAPI AddStroke(HRECOCONTEXT hrc, const PACKET_DESCRIPTION* pPacketDesc, ULONG cbPacket, const BYTE *pPacket, const XFORM *pXForm);
HRESULT WINAPI GetBestResultString(HRECOCONTEXT hrc, _Inout_ ULONG *pcSize, _Out_writes_opt_ (*pcSize) WCHAR* pwcBestResult);
HRESULT WINAPI DestroyAlternate(HRECOALT hrcalt);
HRESULT WINAPI SetGuide(HRECOCONTEXT hrc, const RECO_GUIDE* pGuide, ULONG iIndex);
HRESULT WINAPI GetGuide(HRECOCONTEXT hrc, RECO_GUIDE* pGuide, ULONG *piIndex);
HRESULT WINAPI AdviseInkChange(HRECOCONTEXT hrc, BOOL bNewStroke);
HRESULT WINAPI SetCACMode(HRECOCONTEXT hrc, int iMode);
HRESULT WINAPI EndInkInput(HRECOCONTEXT hrc);
HRESULT WINAPI CloneContext(HRECOCONTEXT hrc, HRECOCONTEXT* pCloneHrc);
HRESULT WINAPI ResetContext(HRECOCONTEXT hrc);
HRESULT WINAPI Process(HRECOCONTEXT hrc, BOOL *pbPartialProcessing);
HRESULT WINAPI SetFactoid(HRECOCONTEXT hrc, ULONG cwcFactoid, const WCHAR *pwcFactoid);
HRESULT WINAPI SetFlags(HRECOCONTEXT hrc, DWORD dwFlags);
HRESULT WINAPI GetLatticePtr(HRECOCONTEXT hrc, RECO_LATTICE **ppLattice);
HRESULT WINAPI SetTextContext(HRECOCONTEXT hrc, ULONG cwcBefore, _In_reads_(cwcBefore) const WCHAR *pwcBefore, ULONG cwcAfter, _In_reads_(cwcAfter) const WCHAR *pwcAfter);
HRESULT WINAPI GetEnabledUnicodeRanges(HRECOCONTEXT hrc, ULONG *pcRanges, CHARACTER_RANGE *pcr);
HRESULT WINAPI SetEnabledUnicodeRanges(HRECOCONTEXT hrc, ULONG cRanges, CHARACTER_RANGE *pcr);
HRESULT WINAPI GetContextPropertyList(HRECOCONTEXT hrc, ULONG *pcProperties, GUID *pPropertyGUIDS);
HRESULT WINAPI GetContextPropertyValue(HRECOCONTEXT hrc, GUID *pGuid, ULONG *pcbSize, BYTE *pProperty);
HRESULT WINAPI SetContextPropertyValue(HRECOCONTEXT hrc, GUID *pGuid, ULONG cbSize, BYTE *pProperty);
HRESULT WINAPI IsStringSupported(HRECOCONTEXT hrc, ULONG wcString, const WCHAR *pwcString);
HRESULT WINAPI SetWordList(HRECOCONTEXT hrc, HRECOWORDLIST hwl);
HRESULT WINAPI GetContextPreferenceFlags(HRECOCONTEXT hrc, DWORD *pdwContextPreferenceFlags);
HRESULT WINAPI GetRightSeparator(HRECOCONTEXT hrc, _Inout_ ULONG *pcSize, _Out_writes_(*pcSize) OPTIONAL WCHAR* pwcRightSeparator);
HRESULT WINAPI GetLeftSeparator(HRECOCONTEXT hrc, _Inout_ ULONG *pcSize, _Out_writes_(*pcSize) OPTIONAL WCHAR* pwcLeftSeparator);
HRESULT WINAPI DestroyWordList(HRECOWORDLIST hwl);
HRESULT WINAPI AddWordsToWordList(HRECOWORDLIST hwl, _NullNull_terminated_ WCHAR * pwcWords);
HRESULT WINAPI MakeWordList(HRECOGNIZER hrec, _NullNull_terminated_ WCHAR *pBuffer, HRECOWORDLIST *phwl);
}
#endif
#pragma endregion
#pragma region APP Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern "C" {
#include "tpcshrd.h"
#include "RecTypes.h"
    typedef HRESULT(*PfnRecoCallback)(DWORD, LPBYTE, HRECOCONTEXT);
HRESULT WINAPI CreateRecognizer(CLSID *pCLSID, HRECOGNIZER *phrec);
HRESULT WINAPI DestroyRecognizer(HRECOGNIZER hrec);
HRESULT WINAPI GetRecoAttributes(HRECOGNIZER hrec, RECO_ATTRS* pRecoAttrs);
HRESULT WINAPI CreateContext(HRECOGNIZER hrec, HRECOCONTEXT *phrc);
HRESULT WINAPI DestroyContext(HRECOCONTEXT hrc);
HRESULT WINAPI GetResultPropertyList(HRECOGNIZER hrec, ULONG* pPropertyCount, GUID*pPropertyGuid);
HRESULT WINAPI GetUnicodeRanges(HRECOGNIZER hrec, ULONG *pcRanges, CHARACTER_RANGE *pcr);
HRESULT WINAPI AddStroke(HRECOCONTEXT hrc, const PACKET_DESCRIPTION* pPacketDesc, ULONG cbPacket, const BYTE *pPacket, const XFORM *pXForm);
HRESULT WINAPI GetBestResultString(HRECOCONTEXT hrc, _Inout_ ULONG *pcSize, _Out_writes_opt_(*pcSize) WCHAR* pwcBestResult);
HRESULT WINAPI SetGuide(HRECOCONTEXT hrc, const RECO_GUIDE* pGuide, ULONG iIndex);
HRESULT WINAPI AdviseInkChange(HRECOCONTEXT hrc, BOOL bNewStroke);
HRESULT WINAPI EndInkInput(HRECOCONTEXT hrc);
HRESULT WINAPI Process(HRECOCONTEXT hrc, BOOL *pbPartialProcessing);
HRESULT WINAPI SetFactoid(HRECOCONTEXT hrc, ULONG cwcFactoid, const WCHAR *pwcFactoid);
HRESULT WINAPI SetFlags(HRECOCONTEXT hrc, DWORD dwFlags);
HRESULT WINAPI GetLatticePtr(HRECOCONTEXT hrc, RECO_LATTICE **ppLattice);
HRESULT WINAPI SetTextContext(HRECOCONTEXT hrc, ULONG cwcBefore, _In_reads_(cwcBefore) const WCHAR *pwcBefore, ULONG cwcAfter, _In_reads_(cwcAfter) const WCHAR *pwcAfter);
HRESULT WINAPI SetEnabledUnicodeRanges(HRECOCONTEXT hrc, ULONG cRanges, CHARACTER_RANGE *pcr);
HRESULT WINAPI IsStringSupported(HRECOCONTEXT hrc, ULONG wcString, const WCHAR *pwcString);
HRESULT WINAPI SetWordList(HRECOCONTEXT hrc, HRECOWORDLIST hwl);
HRESULT WINAPI GetRightSeparator(HRECOCONTEXT hrc, _Inout_ ULONG *pcSize, _Out_writes_(*pcSize) OPTIONAL WCHAR* pwcRightSeparator);
HRESULT WINAPI GetLeftSeparator(HRECOCONTEXT hrc, _Inout_ ULONG *pcSize, _Out_writes_(*pcSize) OPTIONAL WCHAR* pwcLeftSeparator);
HRESULT WINAPI DestroyWordList(HRECOWORDLIST hwl);
HRESULT WINAPI AddWordsToWordList(HRECOWORDLIST hwl, _NullNull_terminated_ WCHAR * pwcWords);
HRESULT WINAPI MakeWordList(HRECOGNIZER hrec, _NullNull_terminated_ WCHAR *pBuffer, HRECOWORDLIST *phwl);
HRESULT WINAPI GetAllRecognizers(CLSID** recognizerClsids, ULONG* count);
HRESULT WINAPI LoadCachedAttributes(CLSID clsid, RECO_ATTRS *pRecoAttributes);
}
#endif
#pragma endregion
