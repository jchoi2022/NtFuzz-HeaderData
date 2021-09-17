#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef _Return_type_success_(return >= 0) long HRESULT;
extern "C" {
typedef int (CALLBACK *PFNDAENUMCALLBACK)(_In_opt_ void *p, _In_opt_ void *pData);
typedef int (CALLBACK *PFNDAENUMCALLBACKCONST)(_In_opt_ const void *p, _In_opt_ void *pData);
typedef int (CALLBACK *PFNDACOMPARE)(_In_opt_ void *p1, _In_opt_ void *p2, _In_ LPARAM lParam);
typedef int (CALLBACK *PFNDACOMPARECONST)(_In_opt_ const void *p1, _In_opt_ const void *p2, _In_ LPARAM lParam);
struct _DSA;
typedef struct _DSA *HDSA;
WINCOMMCTRLAPI HDSA WINAPI DSA_Create(int cbItem, int cItemGrow);
WINCOMMCTRLAPI BOOL WINAPI DSA_Destroy(_Inout_opt_ HDSA hdsa);
WINCOMMCTRLAPI void WINAPI DSA_DestroyCallback(_Inout_opt_ HDSA hdsa, _In_ PFNDAENUMCALLBACK pfnCB, _In_opt_ void *pData);
extern "C++" __inline void DSA_DestroyCallback(_Inout_opt_ HDSA hdsa, _In_ PFNDAENUMCALLBACKCONST pfnCB, _In_opt_ void *pData)
{
    DSA_DestroyCallback(hdsa, (PFNDAENUMCALLBACK)pfnCB, pData);
}
WINCOMMCTRLAPI BOOL WINAPI DSA_DeleteItem(_Inout_ HDSA hdsa, _In_ int i);
WINCOMMCTRLAPI BOOL WINAPI DSA_DeleteAllItems(_Inout_ HDSA hdsa);
WINCOMMCTRLAPI void WINAPI DSA_EnumCallback(_In_ HDSA hdsa, _In_ PFNDAENUMCALLBACK pfnCB, _In_opt_ void *pData);
extern "C++" __inline void DSA_EnumCallback(_In_ HDSA hdsa, _In_ PFNDAENUMCALLBACKCONST pfnCB, _In_opt_ void *pData)
{
    DSA_EnumCallback(hdsa, (PFNDAENUMCALLBACK)pfnCB, pData);
}
WINCOMMCTRLAPI int WINAPI DSA_InsertItem(_Inout_ HDSA hdsa, _In_ int i, _In_ const void *pitem);
WINCOMMCTRLAPI PVOID WINAPI DSA_GetItemPtr(_In_ HDSA hdsa, _In_ int i);
_Success_(return) WINCOMMCTRLAPI BOOL WINAPI DSA_GetItem(_In_ HDSA hdsa, _In_ int i, _Out_writes_(_Inexpressible_(pdsa->cbItem)) void *pitem);
_Success_(return) WINCOMMCTRLAPI BOOL WINAPI DSA_SetItem(_Inout_ HDSA hdsa, _In_ int i, _In_ const void *pitem);
WINCOMMCTRLAPI HDSA WINAPI DSA_Clone(_In_ HDSA hdsa);
WINCOMMCTRLAPI ULONGLONG WINAPI DSA_GetSize(_In_opt_ HDSA hdsa);
WINCOMMCTRLAPI BOOL WINAPI DSA_Sort(_Inout_ HDSA pdsa, _In_ PFNDACOMPARE pfnCompare, _In_ LPARAM lParam);
extern "C++" __inline BOOL DSA_Sort(_Inout_ HDSA hdsa, _In_ PFNDACOMPARECONST pfnCompare, _In_ LPARAM lParam)
{
    return DSA_Sort(hdsa, (PFNDACOMPARE)(pfnCompare), lParam);
}
struct _DPA;
typedef struct _DPA *HDPA;
WINCOMMCTRLAPI HDPA WINAPI DPA_Create(int cItemGrow);
WINCOMMCTRLAPI HDPA WINAPI DPA_CreateEx(_In_ int cpGrow, _In_opt_ HANDLE hheap);
WINCOMMCTRLAPI HDPA WINAPI DPA_Clone(_In_ const HDPA hdpa, _Inout_opt_ HDPA hdpaNew);
WINCOMMCTRLAPI BOOL WINAPI DPA_Destroy(_Inout_opt_ HDPA hdpa);
WINCOMMCTRLAPI void WINAPI DPA_DestroyCallback(_Inout_opt_ HDPA hdpa, _In_ PFNDAENUMCALLBACK pfnCB, _In_opt_ void *pData);
extern "C++" __inline void DPA_DestroyCallback(_In_ HDPA hdpa, _In_ PFNDAENUMCALLBACKCONST pfnCB, _In_opt_ void *pData)
{
    DPA_DestroyCallback(hdpa, (PFNDAENUMCALLBACK)pfnCB, pData);
}
WINCOMMCTRLAPI PVOID WINAPI DPA_DeletePtr(_Inout_ HDPA hdpa, _In_ int i);
WINCOMMCTRLAPI BOOL WINAPI DPA_DeleteAllPtrs(_Inout_ HDPA hdpa);
WINCOMMCTRLAPI void WINAPI DPA_EnumCallback(_In_opt_ HDPA hdpa, _In_opt_ PFNDAENUMCALLBACK pfnCB, _In_opt_ void *pData);
extern "C++" __inline void DPA_EnumCallback(_In_ HDPA hdpa, _In_ PFNDAENUMCALLBACKCONST pfnCB, _In_opt_ void *pData)
{
    DPA_EnumCallback(hdpa, (PFNDAENUMCALLBACK)pfnCB, pData);
}
WINCOMMCTRLAPI BOOL WINAPI DPA_Grow(_Inout_ HDPA pdpa, _In_ int cp);
WINCOMMCTRLAPI int WINAPI DPA_InsertPtr(_Inout_ HDPA hdpa, _In_ int i, _In_opt_ void *p);
WINCOMMCTRLAPI BOOL WINAPI DPA_SetPtr(_Inout_ HDPA hdpa, _In_ int i, _In_opt_ void *p);
WINCOMMCTRLAPI PVOID WINAPI DPA_GetPtr(_In_ HDPA hdpa, _In_ INT_PTR i);
WINCOMMCTRLAPI int WINAPI DPA_GetPtrIndex(_In_ HDPA hdpa, _In_opt_ const void *p);
WINCOMMCTRLAPI ULONGLONG WINAPI DPA_GetSize(_In_opt_ HDPA hdpa);
WINCOMMCTRLAPI BOOL WINAPI DPA_Sort(_Inout_ HDPA hdpa, _In_ PFNDACOMPARE pfnCompare, _In_ LPARAM lParam);
extern "C++" __inline BOOL DPA_Sort(_Inout_ HDPA hdpa, _In_ PFNDACOMPARECONST pfnCompare, _In_ LPARAM lParam)
{
    return DPA_Sort(hdpa, (PFNDACOMPARE)(pfnCompare), lParam);
}
typedef struct _DPASTREAMINFO
{
    int iPos;
    void *pvItem;
} DPASTREAMINFO;
struct IStream;
typedef HRESULT (CALLBACK *PFNDPASTREAM)(_In_ DPASTREAMINFO * pinfo, _In_ struct IStream * pstream, _In_opt_ void *pvInstData);
WINCOMMCTRLAPI HRESULT WINAPI DPA_LoadStream(_Outptr_ HDPA * phdpa, _In_ PFNDPASTREAM pfn, _In_ struct IStream * pstream, _In_opt_ void *pvInstData);
WINCOMMCTRLAPI HRESULT WINAPI DPA_SaveStream(_In_ HDPA hdpa, _In_ PFNDPASTREAM pfn, _In_ struct IStream * pstream, _In_opt_ void *pvInstData);
typedef void* (CALLBACK *PFNDPAMERGE)(_In_ UINT uMsg, _In_ void *pvDest, _In_ void *pvSrc, _In_ LPARAM lParam);
typedef const void* (CALLBACK *PFNDPAMERGECONST)(_In_ UINT uMsg, _In_ const void *pvDest, _In_ const void *pvSrc, _In_ LPARAM lParam);
WINCOMMCTRLAPI BOOL WINAPI DPA_Merge(_Inout_ HDPA hdpaDest, _In_ HDPA hdpaSrc, _In_ DWORD dwFlags, _In_ PFNDACOMPARE pfnCompare, _In_ PFNDPAMERGE pfnMerge, _In_ LPARAM lParam);
extern "C++" __inline BOOL DPA_Merge(_Inout_ HDPA hdpaDest, _In_ HDPA hdpaSrc, _In_ DWORD dwFlags, _In_ PFNDACOMPARECONST pfnCompare, _In_ PFNDPAMERGECONST pfnMerge, _In_ LPARAM lParam)
{
    return DPA_Merge(hdpaDest, hdpaSrc, dwFlags, (PFNDACOMPARE)pfnCompare, (PFNDPAMERGE)pfnMerge, lParam);
}
WINCOMMCTRLAPI int WINAPI DPA_Search(_In_ HDPA hdpa, _In_opt_ void *pFind, _In_ int iStart, _In_ PFNDACOMPARE pfnCompare, _In_ LPARAM lParam, _In_ UINT options);
extern "C++" __inline int DPA_Search(_In_ HDPA hdpa, _In_opt_ const void *pFind, _In_ int iStart, _In_ PFNDACOMPARECONST pfnCompare, _In_ LPARAM lParam, _In_ UINT options)
{
    return DPA_Search(hdpa, const_cast<void *>(pFind), iStart, (PFNDACOMPARE)pfnCompare, lParam, options);
}
            DPA_InsertPtr(hdpa, DPA_Search(hdpa, pFind, iStart, pfnCompare, lParam, (DPAS_SORTED | (options))), (pitem))
WINCOMMCTRLAPI BOOL WINAPI Str_SetPtrW(_Inout_ LPWSTR * ppsz, _In_opt_ LPCWSTR psz);
}
#endif
#pragma endregion
