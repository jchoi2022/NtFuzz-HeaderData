#include <winapifamily.h>
#include <pshpack8.h>
EXTERN_C const IID IID_StdOle;
typedef DWORD LCID;
#include <oaidl.h>
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINOLEAUTAPI_(BSTR) SysAllocString(_In_opt_z_ const OLECHAR * psz);
WINOLEAUTAPI_(INT) SysReAllocString(_Inout_ _At_(*pbstr, _Pre_z_ _Post_z_ _Post_readable_size_(_String_length_(psz)+1)) BSTR* pbstr, _In_opt_z_ const OLECHAR* psz);
WINOLEAUTAPI_(_Ret_writes_maybenull_z_(ui+1) BSTR) SysAllocStringLen(_In_reads_opt_(ui) const OLECHAR * strIn, UINT ui);
_Check_return_ WINOLEAUTAPI_(INT) SysReAllocStringLen(_Inout_ _At_(*pbstr, _Pre_z_ _Post_z_ _Post_readable_size_(len+1)) BSTR* pbstr, _In_opt_z_ const OLECHAR* psz, _In_ unsigned int len);
WINOLEAUTAPI SysAddRefString(_In_ BSTR bstrString);
WINOLEAUTAPI_(void) SysReleaseString(_In_ BSTR bstrString);
WINOLEAUTAPI_(void) SysFreeString(_In_opt_ BSTR bstrString);
WINOLEAUTAPI_(_Post_equal_to_(pbstr == NULL ? 0 : _String_length_(pbstr)) UINT) SysStringLen(_In_opt_ BSTR pbstr);
WINOLEAUTAPI_(_Post_equal_to_(_String_length_(bstr) * sizeof(OLECHAR)) UINT) SysStringByteLen(_In_opt_ BSTR bstr);
WINOLEAUTAPI_(BSTR) SysAllocStringByteLen(_In_opt_z_ LPCSTR psz, _In_ UINT len);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINOLEAUTAPI_(INT) DosDateTimeToVariantTime(_In_ USHORT wDosDate, _In_ USHORT wDosTime, _Out_ DOUBLE * pvtime);
WINOLEAUTAPI_(INT) VariantTimeToDosDateTime(_In_ DOUBLE vtime, _Out_ USHORT * pwDosDate, _Out_ USHORT * pwDosTime);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINOLEAUTAPI_(INT) SystemTimeToVariantTime(_In_ LPSYSTEMTIME lpSystemTime, _Out_ DOUBLE *pvtime);
WINOLEAUTAPI_(INT) VariantTimeToSystemTime(_In_ DOUBLE vtime, _Out_ LPSYSTEMTIME lpSystemTime);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINOLEAUTAPI SafeArrayAllocDescriptor(_In_ UINT cDims, _Outptr_ SAFEARRAY ** ppsaOut);
WINOLEAUTAPI SafeArrayAllocDescriptorEx(_In_ VARTYPE vt, _In_ UINT cDims, _Outptr_ SAFEARRAY ** ppsaOut);
WINOLEAUTAPI SafeArrayAllocData(_In_ SAFEARRAY * psa);
WINOLEAUTAPI_(SAFEARRAY *) SafeArrayCreate(_In_ VARTYPE vt, _In_ UINT cDims, _In_ SAFEARRAYBOUND * rgsabound);
WINOLEAUTAPI_(SAFEARRAY *) SafeArrayCreateEx(_In_ VARTYPE vt, _In_ UINT cDims, _In_ SAFEARRAYBOUND * rgsabound, _In_ PVOID pvExtra);
_Check_return_
WINOLEAUTAPI SafeArrayCopyData(_In_ SAFEARRAY *psaSource, _In_ SAFEARRAY *psaTarget);
WINOLEAUTAPI_(void) SafeArrayReleaseDescriptor(_In_ SAFEARRAY * psa);
WINOLEAUTAPI SafeArrayDestroyDescriptor(_In_ SAFEARRAY * psa);
WINOLEAUTAPI_(void) SafeArrayReleaseData(_In_ PVOID pData);
WINOLEAUTAPI SafeArrayDestroyData(_In_ SAFEARRAY * psa);
WINOLEAUTAPI SafeArrayAddRef(_In_ SAFEARRAY * psa, _Out_ PVOID *ppDataToRelease);
WINOLEAUTAPI SafeArrayDestroy(_In_ SAFEARRAY * psa);
WINOLEAUTAPI SafeArrayRedim(_Inout_ SAFEARRAY * psa, _In_ SAFEARRAYBOUND * psaboundNew);
WINOLEAUTAPI_(UINT) SafeArrayGetDim(_In_ SAFEARRAY * psa);
WINOLEAUTAPI_(UINT) SafeArrayGetElemsize(_In_ SAFEARRAY * psa);
WINOLEAUTAPI SafeArrayGetUBound(_In_ SAFEARRAY * psa, _In_ UINT nDim, _Out_ LONG * plUbound);
WINOLEAUTAPI SafeArrayGetLBound(_In_ SAFEARRAY * psa, _In_ UINT nDim, _Out_ LONG * plLbound);
WINOLEAUTAPI SafeArrayLock(_In_ SAFEARRAY * psa);
WINOLEAUTAPI SafeArrayUnlock(_In_ SAFEARRAY * psa);
WINOLEAUTAPI SafeArrayAccessData(_In_ SAFEARRAY * psa, _Outptr_result_buffer_(_Inexpressible_(psa->cbElements * product(psa->rgsabound[0..psa->cDims-1]->cElements))) void HUGEP** ppvData);
WINOLEAUTAPI SafeArrayUnaccessData(_In_ SAFEARRAY * psa);
WINOLEAUTAPI SafeArrayGetElement(_In_ SAFEARRAY * psa, _In_reads_(_Inexpressible_(psa->cDims)) LONG * rgIndices, _Out_ void * pv);
_Check_return_
WINOLEAUTAPI SafeArrayPutElement(_In_ SAFEARRAY * psa, _In_reads_(_Inexpressible_(psa->cDims)) LONG * rgIndices, _In_ void * pv);
_Check_return_
WINOLEAUTAPI SafeArrayCopy(_In_ SAFEARRAY * psa, _Outptr_ SAFEARRAY ** ppsaOut);
WINOLEAUTAPI SafeArrayPtrOfIndex(_In_ SAFEARRAY * psa, _In_reads_(psa->cDims) LONG * rgIndices, _Outptr_result_bytebuffer_(psa->cbElements) void ** ppvData);
WINOLEAUTAPI SafeArraySetRecordInfo(_In_ SAFEARRAY * psa, _In_ IRecordInfo * prinfo);
WINOLEAUTAPI SafeArrayGetRecordInfo(_In_ SAFEARRAY * psa, _Outptr_ IRecordInfo ** prinfo);
WINOLEAUTAPI SafeArraySetIID(_In_ SAFEARRAY * psa, _In_ REFGUID guid);
WINOLEAUTAPI SafeArrayGetIID(_In_ SAFEARRAY * psa, _Out_ GUID * pguid);
WINOLEAUTAPI SafeArrayGetVartype(_In_ SAFEARRAY * psa, _Out_ VARTYPE * pvt);
WINOLEAUTAPI_(SAFEARRAY *) SafeArrayCreateVector(_In_ VARTYPE vt, _In_ LONG lLbound, _In_ ULONG cElements);
WINOLEAUTAPI_(SAFEARRAY *) SafeArrayCreateVectorEx(_In_ VARTYPE vt, _In_ LONG lLbound, _In_ ULONG cElements, _In_ PVOID pvExtra);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINOLEAUTAPI_(void) VariantInit(_Out_ VARIANTARG * pvarg);
WINOLEAUTAPI VariantClear(_Inout_ VARIANTARG * pvarg);
_Check_return_
WINOLEAUTAPI VariantCopy(_Inout_ VARIANTARG * pvargDest, _In_ const VARIANTARG * pvargSrc);
_Check_return_
WINOLEAUTAPI VariantCopyInd(_Inout_ VARIANT * pvarDest, _In_ const VARIANTARG * pvargSrc);
_Check_return_
WINOLEAUTAPI VariantChangeType(_Inout_ VARIANTARG * pvargDest,
               _In_ const VARIANTARG * pvarSrc, _In_ USHORT wFlags, _In_ VARTYPE vt);
_Check_return_
WINOLEAUTAPI VariantChangeTypeEx(_Inout_ VARIANTARG * pvargDest,
               _In_ const VARIANTARG * pvarSrc, _In_ LCID lcid, _In_ USHORT wFlags, _In_ VARTYPE vt);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_
WINOLEAUTAPI VectorFromBstr (_In_ BSTR bstr, _Outptr_ SAFEARRAY ** ppsa);
_Check_return_
WINOLEAUTAPI BstrFromVector (_In_ SAFEARRAY *psa, _Out_ BSTR *pbstr);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINOLEAUTAPI VarUI1FromI2(SHORT sIn, _Out_ BYTE * pbOut);
WINOLEAUTAPI VarUI1FromI4(LONG lIn, _Out_ BYTE * pbOut);
WINOLEAUTAPI VarUI1FromI8(LONG64 i64In, _Out_ BYTE FAR* pbOut);
WINOLEAUTAPI VarUI1FromR4(FLOAT fltIn, _Out_ BYTE * pbOut);
WINOLEAUTAPI VarUI1FromR8(DOUBLE dblIn, _Out_ BYTE * pbOut);
WINOLEAUTAPI VarUI1FromCy(CY cyIn, _Out_ BYTE * pbOut);
WINOLEAUTAPI VarUI1FromDate(DATE dateIn, _Out_ BYTE * pbOut);
WINOLEAUTAPI VarUI1FromStr(_In_ LPCOLESTR strIn, LCID lcid, ULONG dwFlags, _Out_ BYTE * pbOut);
WINOLEAUTAPI VarUI1FromDisp(IDispatch * pdispIn, LCID lcid, _Out_ BYTE * pbOut);
WINOLEAUTAPI VarUI1FromBool(VARIANT_BOOL boolIn, _Out_ BYTE * pbOut);
WINOLEAUTAPI VarUI1FromI1(CHAR cIn, _Out_ BYTE *pbOut);
WINOLEAUTAPI VarUI1FromUI2(USHORT uiIn, _Out_ BYTE *pbOut);
WINOLEAUTAPI VarUI1FromUI4(ULONG ulIn, _Out_ BYTE *pbOut);
WINOLEAUTAPI VarUI1FromUI8(ULONG64 ui64In, _Out_ BYTE FAR* pbOut);
WINOLEAUTAPI VarUI1FromDec(_In_ const DECIMAL *pdecIn, _Out_ BYTE *pbOut);
WINOLEAUTAPI VarI2FromUI1(BYTE bIn, _Out_ SHORT * psOut);
WINOLEAUTAPI VarI2FromI4(LONG lIn, _Out_ SHORT * psOut);
WINOLEAUTAPI VarI2FromI8(LONG64 i64In, _Out_ SHORT FAR* psOut);
WINOLEAUTAPI VarI2FromR4(FLOAT fltIn, _Out_ SHORT * psOut);
WINOLEAUTAPI VarI2FromR8(DOUBLE dblIn, _Out_ SHORT * psOut);
WINOLEAUTAPI VarI2FromCy(CY cyIn, SHORT * psOut);
WINOLEAUTAPI VarI2FromDate(DATE dateIn, _Out_ SHORT * psOut);
WINOLEAUTAPI VarI2FromStr(_In_ LPCOLESTR strIn, LCID lcid, ULONG dwFlags, _Out_ SHORT * psOut);
WINOLEAUTAPI VarI2FromDisp(IDispatch * pdispIn, LCID lcid, _Out_ SHORT * psOut);
WINOLEAUTAPI VarI2FromBool(VARIANT_BOOL boolIn, _Out_ SHORT * psOut);
WINOLEAUTAPI VarI2FromI1(CHAR cIn, _Out_ SHORT *psOut);
WINOLEAUTAPI VarI2FromUI2(USHORT uiIn, _Out_ SHORT *psOut);
WINOLEAUTAPI VarI2FromUI4(ULONG ulIn, _Out_ SHORT *psOut);
WINOLEAUTAPI VarI2FromUI8(ULONG64 ui64In, _Out_ SHORT FAR* psOut);
WINOLEAUTAPI VarI2FromDec(_In_ const DECIMAL *pdecIn, _Out_ SHORT *psOut);
WINOLEAUTAPI VarI4FromUI1(BYTE bIn, _Out_ LONG * plOut);
WINOLEAUTAPI VarI4FromI2(SHORT sIn, _Out_ LONG * plOut);
WINOLEAUTAPI VarI4FromI8(LONG64 i64In, _Out_ LONG FAR* plOut);
WINOLEAUTAPI VarI4FromR4(FLOAT fltIn, _Out_ LONG * plOut);
WINOLEAUTAPI VarI4FromR8(DOUBLE dblIn, _Out_ LONG * plOut);
WINOLEAUTAPI VarI4FromCy(CY cyIn, _Out_ LONG * plOut);
WINOLEAUTAPI VarI4FromDate(DATE dateIn, _Out_ LONG * plOut);
WINOLEAUTAPI VarI4FromStr(_In_ LPCOLESTR strIn, LCID lcid, ULONG dwFlags, _Out_ LONG * plOut);
WINOLEAUTAPI VarI4FromDisp(IDispatch * pdispIn, _In_ LCID lcid, _Out_ LONG * plOut);
WINOLEAUTAPI VarI4FromBool(VARIANT_BOOL boolIn, _Out_ LONG * plOut);
WINOLEAUTAPI VarI4FromI1(CHAR cIn, _Out_ LONG *plOut);
WINOLEAUTAPI VarI4FromUI2(USHORT uiIn, _Out_ LONG *plOut);
WINOLEAUTAPI VarI4FromUI4(ULONG ulIn, _Out_ LONG *plOut);
WINOLEAUTAPI VarI4FromUI8(ULONG64 ui64In, _Out_ LONG FAR* plOut);
WINOLEAUTAPI VarI4FromDec(_In_ const DECIMAL *pdecIn, _Out_ LONG *plOut);
WINOLEAUTAPI VarI8FromUI1(BYTE bIn, _Out_ LONG64 FAR* pi64Out);
WINOLEAUTAPI VarI8FromI2(SHORT sIn, _Out_ LONG64 FAR* pi64Out);
WINOLEAUTAPI VarI8FromR4(FLOAT fltIn, _Out_ LONG64 FAR* pi64Out);
WINOLEAUTAPI VarI8FromR8(DOUBLE dblIn, _Out_ LONG64 FAR* pi64Out);
WINOLEAUTAPI VarI8FromCy(_In_ CY cyIn, _Out_ LONG64 FAR* pi64Out);
WINOLEAUTAPI VarI8FromDate(DATE dateIn, _Out_ LONG64 FAR* pi64Out);
WINOLEAUTAPI VarI8FromStr(_In_ LPCOLESTR strIn, _In_ LCID lcid, _In_ ULONG dwFlags, _Out_ LONG64 FAR* pi64Out);
WINOLEAUTAPI VarI8FromDisp(IDispatch FAR* pdispIn, _In_ LCID lcid, _Out_ LONG64 FAR* pi64Out);
WINOLEAUTAPI VarI8FromBool(VARIANT_BOOL boolIn, _Out_ LONG64 FAR* pi64Out);
WINOLEAUTAPI VarI8FromI1(CHAR cIn, _Out_ LONG64 FAR* pi64Out);
WINOLEAUTAPI VarI8FromUI2(USHORT uiIn, _Out_ LONG64 FAR* pi64Out);
WINOLEAUTAPI VarI8FromUI4(ULONG ulIn, _Out_ LONG64 FAR* pi64Out);
WINOLEAUTAPI VarI8FromUI8(ULONG64 ui64In, _Out_ LONG64 FAR* pi64Out);
WINOLEAUTAPI VarI8FromDec(_In_ const DECIMAL *pdecIn, _Out_ LONG64 FAR* pi64Out);
WINOLEAUTAPI VarR4FromUI1(BYTE bIn, _Out_ FLOAT * pfltOut);
WINOLEAUTAPI VarR4FromI2(SHORT sIn, _Out_ FLOAT * pfltOut);
WINOLEAUTAPI VarR4FromI4(LONG lIn, _Out_ FLOAT * pfltOut);
WINOLEAUTAPI VarR4FromI8(LONG64 i64In, _Out_ FLOAT FAR* pfltOut);
WINOLEAUTAPI VarR4FromR8(DOUBLE dblIn, _Out_ FLOAT * pfltOut);
WINOLEAUTAPI VarR4FromCy(CY cyIn, FLOAT * pfltOut);
WINOLEAUTAPI VarR4FromDate(DATE dateIn, _Out_ FLOAT * pfltOut);
WINOLEAUTAPI VarR4FromStr(_In_ LPCOLESTR strIn, LCID lcid, ULONG dwFlags, _Out_ FLOAT *pfltOut);
WINOLEAUTAPI VarR4FromDisp(IDispatch * pdispIn, LCID lcid, _Out_ FLOAT * pfltOut);
WINOLEAUTAPI VarR4FromBool(VARIANT_BOOL boolIn, _Out_ FLOAT * pfltOut);
WINOLEAUTAPI VarR4FromI1(CHAR cIn, _Out_ FLOAT *pfltOut);
WINOLEAUTAPI VarR4FromUI2(USHORT uiIn, _Out_ FLOAT *pfltOut);
WINOLEAUTAPI VarR4FromUI4(ULONG ulIn, _Out_ FLOAT *pfltOut);
WINOLEAUTAPI VarR4FromUI8(ULONG64 ui64In, _Out_ FLOAT FAR* pfltOut);
WINOLEAUTAPI VarR4FromDec(_In_ const DECIMAL *pdecIn, _Out_ FLOAT *pfltOut);
WINOLEAUTAPI VarR8FromUI1(BYTE bIn, _Out_ DOUBLE * pdblOut);
WINOLEAUTAPI VarR8FromI2(SHORT sIn, _Out_ DOUBLE * pdblOut);
WINOLEAUTAPI VarR8FromI4(LONG lIn, _Out_ DOUBLE * pdblOut);
WINOLEAUTAPI VarR8FromI8(LONG64 i64In, _Out_ DOUBLE FAR* pdblOut);
WINOLEAUTAPI VarR8FromR4(FLOAT fltIn, _Out_ DOUBLE * pdblOut);
WINOLEAUTAPI VarR8FromCy(CY cyIn, DOUBLE * pdblOut);
WINOLEAUTAPI VarR8FromDate(DATE dateIn, _Out_ DOUBLE * pdblOut);
WINOLEAUTAPI VarR8FromStr(_In_ LPCOLESTR strIn, LCID lcid, ULONG dwFlags, _Out_ DOUBLE *pdblOut);
WINOLEAUTAPI VarR8FromDisp(IDispatch * pdispIn, LCID lcid, _Out_ DOUBLE * pdblOut);
WINOLEAUTAPI VarR8FromBool(VARIANT_BOOL boolIn, _Out_ DOUBLE * pdblOut);
WINOLEAUTAPI VarR8FromI1(CHAR cIn, DOUBLE *pdblOut);
WINOLEAUTAPI VarR8FromUI2(USHORT uiIn, _Out_ DOUBLE *pdblOut);
WINOLEAUTAPI VarR8FromUI4(ULONG ulIn, _Out_ DOUBLE *pdblOut);
WINOLEAUTAPI VarR8FromUI8(ULONG64 ui64In, _Out_ DOUBLE FAR* pdblOut);
WINOLEAUTAPI VarR8FromDec(_In_ const DECIMAL *pdecIn, _Out_ DOUBLE *pdblOut);
WINOLEAUTAPI VarDateFromUI1(BYTE bIn, _Out_ DATE * pdateOut);
WINOLEAUTAPI VarDateFromI2(SHORT sIn, _Out_ DATE * pdateOut);
WINOLEAUTAPI VarDateFromI4(LONG lIn, _Out_ DATE * pdateOut);
WINOLEAUTAPI VarDateFromI8(LONG64 i64In, _Out_ DATE FAR* pdateOut);
WINOLEAUTAPI VarDateFromR4(FLOAT fltIn, _Out_ DATE * pdateOut);
WINOLEAUTAPI VarDateFromR8(DOUBLE dblIn, _Out_ DATE * pdateOut);
WINOLEAUTAPI VarDateFromCy(CY cyIn, _Out_ DATE * pdateOut);
WINOLEAUTAPI VarDateFromStr(_In_ LPCOLESTR strIn, _In_ LCID lcid, _In_ ULONG dwFlags, _Out_ DATE *pdateOut);
WINOLEAUTAPI VarDateFromDisp(IDispatch * pdispIn, LCID lcid, _Out_ DATE * pdateOut);
WINOLEAUTAPI VarDateFromBool(VARIANT_BOOL boolIn, _Out_ DATE * pdateOut);
WINOLEAUTAPI VarDateFromI1(CHAR cIn, _Out_ DATE *pdateOut);
WINOLEAUTAPI VarDateFromUI2(USHORT uiIn, _Out_ DATE *pdateOut);
WINOLEAUTAPI VarDateFromUI4(ULONG ulIn, _Out_ DATE *pdateOut);
WINOLEAUTAPI VarDateFromUI8(ULONG64 ui64In, _Out_ DATE FAR* pdateOut);
WINOLEAUTAPI VarDateFromDec(_In_ const DECIMAL *pdecIn, _Out_ DATE *pdateOut);
WINOLEAUTAPI VarCyFromUI1(BYTE bIn, _Out_ CY * pcyOut);
WINOLEAUTAPI VarCyFromI2(SHORT sIn, _Out_ CY * pcyOut);
WINOLEAUTAPI VarCyFromI4(LONG lIn, _Out_ CY * pcyOut);
WINOLEAUTAPI VarCyFromI8(LONG64 i64In, _Out_ CY FAR* pcyOut);
WINOLEAUTAPI VarCyFromR4(FLOAT fltIn, _Out_ CY * pcyOut);
WINOLEAUTAPI VarCyFromR8(DOUBLE dblIn, _Out_ CY * pcyOut);
WINOLEAUTAPI VarCyFromDate(DATE dateIn, _Out_ CY * pcyOut);
WINOLEAUTAPI VarCyFromStr(_In_ LPCOLESTR strIn, _In_ LCID lcid, _In_ ULONG dwFlags, _Out_ CY * pcyOut);
WINOLEAUTAPI VarCyFromDisp(_In_ IDispatch * pdispIn, LCID lcid, _Out_ CY * pcyOut);
WINOLEAUTAPI VarCyFromBool(VARIANT_BOOL boolIn, _Out_ CY * pcyOut);
WINOLEAUTAPI VarCyFromI1(CHAR cIn, _Out_ CY *pcyOut);
WINOLEAUTAPI VarCyFromUI2(USHORT uiIn, _Out_ CY *pcyOut);
WINOLEAUTAPI VarCyFromUI4(ULONG ulIn, _Out_ CY *pcyOut);
WINOLEAUTAPI VarCyFromUI8(ULONG64 ui64In, _Out_ CY FAR* pcyOut);
WINOLEAUTAPI VarCyFromDec(_In_ const DECIMAL *pdecIn, _Out_ CY *pcyOut);
WINOLEAUTAPI VarBstrFromUI1(BYTE bVal, LCID lcid, ULONG dwFlags, _Out_ BSTR * pbstrOut);
WINOLEAUTAPI VarBstrFromI2(SHORT iVal, LCID lcid, ULONG dwFlags, _Out_ BSTR * pbstrOut);
WINOLEAUTAPI VarBstrFromI4(LONG lIn, LCID lcid, ULONG dwFlags, _Out_ BSTR * pbstrOut);
WINOLEAUTAPI VarBstrFromI8(LONG64 i64In, LCID lcid, ULONG dwFlags, _Out_ BSTR FAR* pbstrOut);
WINOLEAUTAPI VarBstrFromR4(FLOAT fltIn, LCID lcid, ULONG dwFlags, _Out_ BSTR * pbstrOut);
WINOLEAUTAPI VarBstrFromR8(DOUBLE dblIn, LCID lcid, ULONG dwFlags, _Out_ BSTR * pbstrOut);
WINOLEAUTAPI VarBstrFromCy(CY cyIn, LCID lcid, ULONG dwFlags, _Out_ BSTR * pbstrOut);
WINOLEAUTAPI VarBstrFromDate(_In_ DATE dateIn, _In_ LCID lcid, _In_ ULONG dwFlags, _Out_ BSTR * pbstrOut);
WINOLEAUTAPI VarBstrFromDisp(IDispatch * pdispIn, LCID lcid, ULONG dwFlags, _Out_ BSTR * pbstrOut);
WINOLEAUTAPI VarBstrFromBool(VARIANT_BOOL boolIn, LCID lcid, ULONG dwFlags, _Out_ BSTR * pbstrOut);
WINOLEAUTAPI VarBstrFromI1(CHAR cIn, LCID lcid, ULONG dwFlags, _Out_ BSTR *pbstrOut);
WINOLEAUTAPI VarBstrFromUI2(USHORT uiIn, LCID lcid, ULONG dwFlags, _Out_ BSTR *pbstrOut);
WINOLEAUTAPI VarBstrFromUI4(ULONG ulIn, LCID lcid, ULONG dwFlags, _Out_ BSTR *pbstrOut);
WINOLEAUTAPI VarBstrFromUI8(ULONG64 ui64In, LCID lcid, ULONG dwFlags, _Out_ BSTR FAR* pbstrOut);
WINOLEAUTAPI VarBstrFromDec(_In_ const DECIMAL *pdecIn, _In_ LCID lcid, _In_ ULONG dwFlags, _Out_ BSTR *pbstrOut);
WINOLEAUTAPI VarBoolFromUI1(BYTE bIn, _Out_ VARIANT_BOOL * pboolOut);
_Check_return_ WINOLEAUTAPI VarBoolFromI2(_In_ SHORT sIn, _Out_ VARIANT_BOOL * pboolOut);
WINOLEAUTAPI VarBoolFromI4(LONG lIn, _Out_ VARIANT_BOOL * pboolOut);
WINOLEAUTAPI VarBoolFromI8(LONG64 i64In, _Out_ VARIANT_BOOL FAR* pboolOut);
WINOLEAUTAPI VarBoolFromR4(FLOAT fltIn, _Out_ VARIANT_BOOL * pboolOut);
WINOLEAUTAPI VarBoolFromR8(DOUBLE dblIn, _Out_ VARIANT_BOOL * pboolOut);
WINOLEAUTAPI VarBoolFromDate(DATE dateIn, _Out_ VARIANT_BOOL * pboolOut);
WINOLEAUTAPI VarBoolFromCy(CY cyIn, _Out_ VARIANT_BOOL * pboolOut);
WINOLEAUTAPI VarBoolFromStr(_In_ LPCOLESTR strIn, LCID lcid, ULONG dwFlags, _Out_ VARIANT_BOOL * pboolOut);
WINOLEAUTAPI VarBoolFromDisp(IDispatch * pdispIn, LCID lcid, _Out_ VARIANT_BOOL * pboolOut);
WINOLEAUTAPI VarBoolFromI1(CHAR cIn, _Out_ VARIANT_BOOL *pboolOut);
WINOLEAUTAPI VarBoolFromUI2(USHORT uiIn, _Out_ VARIANT_BOOL *pboolOut);
WINOLEAUTAPI VarBoolFromUI4(ULONG ulIn, _Out_ VARIANT_BOOL *pboolOut);
WINOLEAUTAPI VarBoolFromUI8(ULONG64 i64In, _Out_ VARIANT_BOOL FAR* pboolOut);
WINOLEAUTAPI VarBoolFromDec(_In_ const DECIMAL *pdecIn, _Out_ VARIANT_BOOL *pboolOut);
WINOLEAUTAPI
VarI1FromUI1(
    _In_ BYTE bIn,
    _Out_ CHAR *pcOut
    );
WINOLEAUTAPI
VarI1FromI2(
    _In_ SHORT uiIn,
    _Out_ CHAR *pcOut
    );
WINOLEAUTAPI
VarI1FromI4(
    _In_ LONG lIn,
    _Out_ CHAR *pcOut
    );
WINOLEAUTAPI
VarI1FromI8(
    _In_ LONG64 i64In,
    _Out_ CHAR *pcOut
    );
WINOLEAUTAPI
VarI1FromR4(
    _In_ FLOAT fltIn,
    _Out_ CHAR *pcOut
    );
WINOLEAUTAPI
VarI1FromR8(
    _In_ DOUBLE dblIn,
    _Out_ CHAR *pcOut
    );
WINOLEAUTAPI
VarI1FromDate(
    _In_ DATE dateIn,
    _Out_ CHAR *pcOut
    );
WINOLEAUTAPI
VarI1FromCy(
    _In_ CY cyIn,
    _Out_ CHAR *pcOut
    );
WINOLEAUTAPI
VarI1FromStr(
    _In_ LPCOLESTR strIn,
    _In_ LCID lcid,
    _In_ ULONG dwFlags,
    _Out_ CHAR *pcOut
    );
WINOLEAUTAPI
VarI1FromDisp(
    _In_ IDispatch *pdispIn,
    _In_ LCID lcid,
    _Out_ CHAR *pcOut
    );
WINOLEAUTAPI
VarI1FromBool(
    _In_ VARIANT_BOOL boolIn,
    _Out_ CHAR *pcOut
    );
WINOLEAUTAPI
VarI1FromUI2(
    _In_ USHORT uiIn,
    _Out_ CHAR *pcOut
    );
WINOLEAUTAPI
VarI1FromUI4(
    _In_ ULONG ulIn,
    _Out_ CHAR *pcOut
    );
WINOLEAUTAPI
VarI1FromUI8(
    _In_ ULONG64 i64In,
    _Out_ CHAR *pcOut
    );
WINOLEAUTAPI
VarI1FromDec(
    _In_ const DECIMAL *pdecIn,
    _Out_ CHAR *pcOut
    );
WINOLEAUTAPI VarUI2FromUI1(BYTE bIn, _Out_ USHORT *puiOut);
WINOLEAUTAPI VarUI2FromI2(SHORT uiIn, _Out_ USHORT *puiOut);
WINOLEAUTAPI VarUI2FromI4(LONG lIn, _Out_ USHORT *puiOut);
WINOLEAUTAPI VarUI2FromI8(LONG64 i64In, _Out_ USHORT *puiOut);
WINOLEAUTAPI VarUI2FromR4(FLOAT fltIn, _Out_ USHORT *puiOut);
WINOLEAUTAPI VarUI2FromR8(DOUBLE dblIn, USHORT *puiOut);
WINOLEAUTAPI VarUI2FromDate(DATE dateIn, _Out_ USHORT *puiOut);
WINOLEAUTAPI VarUI2FromCy(CY cyIn, _Out_ USHORT *puiOut);
WINOLEAUTAPI VarUI2FromStr(_In_ LPCOLESTR strIn, _In_ LCID lcid, _In_ ULONG dwFlags, _Out_ USHORT *puiOut);
WINOLEAUTAPI VarUI2FromDisp(_In_ IDispatch *pdispIn, LCID lcid, _Out_ USHORT *puiOut);
WINOLEAUTAPI VarUI2FromBool(VARIANT_BOOL boolIn, _Out_ USHORT *puiOut);
WINOLEAUTAPI VarUI2FromI1(CHAR cIn, _Out_ USHORT *puiOut);
WINOLEAUTAPI VarUI2FromUI4(ULONG ulIn, _Out_ USHORT *puiOut);
WINOLEAUTAPI VarUI2FromUI8(ULONG64 i64In, _Out_ USHORT *puiOut);
WINOLEAUTAPI VarUI2FromDec(_In_ const DECIMAL *pdecIn, _Out_ USHORT *puiOut);
WINOLEAUTAPI VarUI4FromUI1(BYTE bIn, _Out_ ULONG *pulOut);
WINOLEAUTAPI VarUI4FromI2(_In_ SHORT uiIn, _Out_ ULONG *pulOut);
WINOLEAUTAPI VarUI4FromI4(LONG lIn, _Out_ ULONG *pulOut);
WINOLEAUTAPI VarUI4FromI8(LONG64 i64In, _Out_ ULONG *plOut);
WINOLEAUTAPI VarUI4FromR4(FLOAT fltIn, _Out_ ULONG *pulOut);
WINOLEAUTAPI VarUI4FromR8(DOUBLE dblIn, _Out_ ULONG *pulOut);
WINOLEAUTAPI VarUI4FromDate(DATE dateIn, _Out_ ULONG *pulOut);
WINOLEAUTAPI VarUI4FromCy(CY cyIn, _Out_ ULONG *pulOut);
WINOLEAUTAPI VarUI4FromStr(_In_ LPCOLESTR strIn, _In_ LCID lcid, _In_ ULONG dwFlags, _Out_ ULONG *pulOut);
WINOLEAUTAPI VarUI4FromDisp(_In_ IDispatch *pdispIn, LCID lcid, _Out_ ULONG *pulOut);
WINOLEAUTAPI VarUI4FromBool(VARIANT_BOOL boolIn, _Out_ ULONG *pulOut);
WINOLEAUTAPI VarUI4FromI1(CHAR cIn, _Out_ ULONG *pulOut);
WINOLEAUTAPI VarUI4FromUI2(USHORT uiIn, _Out_ ULONG *pulOut);
WINOLEAUTAPI VarUI4FromUI8(ULONG64 ui64In, _Out_ ULONG *plOut);
WINOLEAUTAPI VarUI4FromDec(_In_ const DECIMAL *pdecIn, _Out_ ULONG *pulOut);
WINOLEAUTAPI VarUI8FromUI1(BYTE bIn, _Out_ ULONG64 FAR* pi64Out);
WINOLEAUTAPI VarUI8FromI2(SHORT sIn, _Out_ ULONG64 FAR* pi64Out);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINOLEAUTAPI VarUI8FromI4(LONG lIn, _Out_ ULONG64 FAR* pi64Out);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINOLEAUTAPI VarUI8FromI8(LONG64 ui64In, _Out_ ULONG64 FAR* pi64Out);
WINOLEAUTAPI VarUI8FromR4(FLOAT fltIn, _Out_ ULONG64 FAR* pi64Out);
WINOLEAUTAPI VarUI8FromR8(DOUBLE dblIn, _Out_ ULONG64 FAR* pi64Out);
WINOLEAUTAPI VarUI8FromCy(CY cyIn, _Out_ ULONG64 FAR* pi64Out);
WINOLEAUTAPI VarUI8FromDate(DATE dateIn, _Out_ ULONG64 FAR* pi64Out);
WINOLEAUTAPI VarUI8FromStr(_In_ LPCOLESTR strIn, _In_ LCID lcid, _In_ ULONG dwFlags, _Out_ ULONG64 FAR* pi64Out);
WINOLEAUTAPI VarUI8FromDisp(_In_ IDispatch FAR* pdispIn, LCID lcid, _Out_ ULONG64 FAR* pi64Out);
WINOLEAUTAPI VarUI8FromBool(VARIANT_BOOL boolIn, _Out_ ULONG64 FAR* pi64Out);
WINOLEAUTAPI VarUI8FromI1(CHAR cIn, _Out_ ULONG64 FAR* pi64Out);
WINOLEAUTAPI VarUI8FromUI2(USHORT uiIn, _Out_ ULONG64 FAR* pi64Out);
WINOLEAUTAPI VarUI8FromUI4(ULONG ulIn, _Out_ ULONG64 FAR* pi64Out);
WINOLEAUTAPI VarUI8FromDec(_In_ const DECIMAL *pdecIn, _Out_ ULONG64 FAR* pi64Out);
WINOLEAUTAPI VarDecFromUI1(_In_ BYTE bIn, _Out_ DECIMAL *pdecOut);
WINOLEAUTAPI VarDecFromI2(_In_ SHORT uiIn, _Out_ DECIMAL *pdecOut);
WINOLEAUTAPI VarDecFromI4(_In_ LONG lIn, _Out_ DECIMAL *pdecOut);
WINOLEAUTAPI VarDecFromI8(LONG64 i64In, _Out_ DECIMAL *pdecOut);
WINOLEAUTAPI VarDecFromR4(_In_ FLOAT fltIn, _Out_ DECIMAL *pdecOut);
WINOLEAUTAPI VarDecFromR8(_In_ DOUBLE dblIn, _Out_ DECIMAL *pdecOut);
WINOLEAUTAPI VarDecFromDate(_In_ DATE dateIn, _Out_ DECIMAL *pdecOut);
WINOLEAUTAPI VarDecFromCy(_In_ CY cyIn, _Out_ DECIMAL *pdecOut);
WINOLEAUTAPI VarDecFromStr(_In_ LPCOLESTR strIn, _In_ LCID lcid, _In_ ULONG dwFlags, _Out_ DECIMAL *pdecOut);
WINOLEAUTAPI VarDecFromDisp(_In_ IDispatch *pdispIn, _In_ LCID lcid, _Out_ DECIMAL *pdecOut);
WINOLEAUTAPI VarDecFromBool(_In_ VARIANT_BOOL boolIn, _Out_ DECIMAL *pdecOut);
WINOLEAUTAPI VarDecFromI1(_In_ CHAR cIn, _Out_ DECIMAL *pdecOut);
WINOLEAUTAPI VarDecFromUI2(_In_ USHORT uiIn, _Out_ DECIMAL *pdecOut);
WINOLEAUTAPI VarDecFromUI4(_In_ ULONG ulIn, _Out_ DECIMAL *pdecOut);
WINOLEAUTAPI VarDecFromUI8(ULONG64 ui64In, _Out_ DECIMAL *pdecOut);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINOLEAUTAPI VarI4FromI8(LONG64 i64In, _Out_ LONG *plOut);
WINOLEAUTAPI VarI4FromUI8(ULONG64 ui64In, _Out_ LONG *plOut);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
typedef struct {
    INT cDig;
    ULONG dwInFlags;
    ULONG dwOutFlags;
    INT cchUsed;
    INT nBaseShift;
    INT nPwr10;
} NUMPARSE;
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Check_return_
WINOLEAUTAPI VarParseNumFromStr(_In_ LPCOLESTR strIn, _In_ LCID lcid, _In_ ULONG dwFlags,
            _Inout_ NUMPARSE * pnumprs, _Out_writes_(pnumprs->cDig) BYTE * rgbDig);
_Check_return_
WINOLEAUTAPI VarNumFromParseNum(_In_ NUMPARSE * pnumprs, _In_reads_(pnumprs->cDig) BYTE * rgbDig,
            _In_ ULONG dwVtBits, _Out_ VARIANT * pvar);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STDAPI VarAdd(_In_ LPVARIANT pvarLeft, _In_ LPVARIANT pvarRight, _Out_ LPVARIANT pvarResult);
STDAPI VarAnd(_In_ LPVARIANT pvarLeft, _In_ LPVARIANT pvarRight, _Out_ LPVARIANT pvarResult);
STDAPI VarCat(_In_ LPVARIANT pvarLeft, _In_ LPVARIANT pvarRight, _Out_ LPVARIANT pvarResult);
STDAPI VarDiv(_In_ LPVARIANT pvarLeft, _In_ LPVARIANT pvarRight, _Out_ LPVARIANT pvarResult);
STDAPI VarEqv(_In_ LPVARIANT pvarLeft, _In_ LPVARIANT pvarRight, _Out_ LPVARIANT pvarResult);
STDAPI VarIdiv(_In_ LPVARIANT pvarLeft, _In_ LPVARIANT pvarRight, _Out_ LPVARIANT pvarResult);
STDAPI VarImp(_In_ LPVARIANT pvarLeft, _In_ LPVARIANT pvarRight, _Out_ LPVARIANT pvarResult);
STDAPI VarMod(_In_ LPVARIANT pvarLeft, _In_ LPVARIANT pvarRight, _Out_ LPVARIANT pvarResult);
STDAPI VarMul(_In_ LPVARIANT pvarLeft, _In_ LPVARIANT pvarRight, _Out_ LPVARIANT pvarResult);
STDAPI VarOr(_In_ LPVARIANT pvarLeft, _In_ LPVARIANT pvarRight, _Out_ LPVARIANT pvarResult);
STDAPI VarPow(_In_ LPVARIANT pvarLeft, _In_ LPVARIANT pvarRight, _Out_ LPVARIANT pvarResult);
STDAPI VarSub(_In_ LPVARIANT pvarLeft, _In_ LPVARIANT pvarRight, _Out_ LPVARIANT pvarResult);
STDAPI VarXor(_In_ LPVARIANT pvarLeft, _In_ LPVARIANT pvarRight, _Out_ LPVARIANT pvarResult);
STDAPI VarAbs(_In_ LPVARIANT pvarIn, _Out_ LPVARIANT pvarResult);
STDAPI VarFix(_In_ LPVARIANT pvarIn, _Out_ LPVARIANT pvarResult);
STDAPI VarInt(_In_ LPVARIANT pvarIn, _Out_ LPVARIANT pvarResult);
STDAPI VarNeg(_In_ LPVARIANT pvarIn, _Out_ LPVARIANT pvarResult);
STDAPI VarNot(_In_ LPVARIANT pvarIn, _Out_ LPVARIANT pvarResult);
STDAPI VarRound(_In_ LPVARIANT pvarIn, _In_ int cDecimals, _Out_ LPVARIANT pvarResult);
STDAPI VarCmp(_In_ LPVARIANT pvarLeft, _In_ LPVARIANT pvarRight, _In_ LCID lcid, _In_ ULONG dwFlags);
#endif
#pragma endregion
extern "C++" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
__inline
HRESULT
STDAPICALLTYPE
VarCmp(LPVARIANT pvarLeft, LPVARIANT pvarRight, LCID lcid) {
    return VarCmp(pvarLeft, pvarRight, lcid, 0);
}
#endif
#pragma endregion
}
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STDAPI VarDecAdd(_In_ LPDECIMAL pdecLeft, _In_ LPDECIMAL pdecRight, _Out_ LPDECIMAL pdecResult);
STDAPI VarDecDiv(_In_ LPDECIMAL pdecLeft, _In_ LPDECIMAL pdecRight, _Out_ LPDECIMAL pdecResult);
STDAPI VarDecMul(_In_ LPDECIMAL pdecLeft, _In_ LPDECIMAL pdecRight, _Out_ LPDECIMAL pdecResult);
STDAPI VarDecSub(_In_ LPDECIMAL pdecLeft, _In_ LPDECIMAL pdecRight, _Out_ LPDECIMAL pdecResult);
STDAPI VarDecAbs(_In_ LPDECIMAL pdecIn, _Out_ LPDECIMAL pdecResult);
STDAPI VarDecFix(_In_ LPDECIMAL pdecIn, _Out_ LPDECIMAL pdecResult);
STDAPI VarDecInt(_In_ LPDECIMAL pdecIn, _Out_ LPDECIMAL pdecResult);
STDAPI VarDecNeg(_In_ LPDECIMAL pdecIn, _Out_ LPDECIMAL pdecResult);
STDAPI VarDecRound(_In_ LPDECIMAL pdecIn, int cDecimals, _Out_ LPDECIMAL pdecResult);
STDAPI VarDecCmp(_In_ LPDECIMAL pdecLeft, _In_ LPDECIMAL pdecRight);
STDAPI VarDecCmpR8(_In_ LPDECIMAL pdecLeft, _In_ double dblRight);
STDAPI VarCyAdd(_In_ CY cyLeft, _In_ CY cyRight, _Out_ LPCY pcyResult);
STDAPI VarCyMul(_In_ CY cyLeft, _In_ CY cyRight, _Out_ LPCY pcyResult);
STDAPI VarCyMulI4(_In_ CY cyLeft, _In_ LONG lRight, _Out_ LPCY pcyResult);
STDAPI VarCyMulI8(_In_ CY cyLeft, _In_ LONG64 lRight, _Out_ LPCY pcyResult);
STDAPI VarCySub(_In_ CY cyLeft, _In_ CY cyRight, _Out_ LPCY pcyResult);
STDAPI VarCyAbs(_In_ CY cyIn, _Out_ LPCY pcyResult);
STDAPI VarCyFix(_In_ CY cyIn, _Out_ LPCY pcyResult);
STDAPI VarCyInt(_In_ CY cyIn, _Out_ LPCY pcyResult);
STDAPI VarCyNeg(_In_ CY cyIn, _Out_ LPCY pcyResult);
STDAPI VarCyRound(_In_ CY cyIn, _In_ int cDecimals, _Out_ LPCY pcyResult);
STDAPI VarCyCmp(_In_ CY cyLeft, _In_ CY cyRight);
STDAPI VarCyCmpR8(_In_ CY cyLeft, _In_ double dblRight);
STDAPI VarBstrCat(_In_ BSTR bstrLeft, _In_ BSTR bstrRight, _Out_ LPBSTR pbstrResult);
STDAPI VarBstrCmp(_In_ BSTR bstrLeft, _In_ BSTR bstrRight, _In_ LCID lcid, _In_ ULONG dwFlags);
STDAPI VarR8Pow(_In_ double dblLeft, _In_ double dblRight, _Out_ double *pdblResult);
STDAPI VarR4CmpR8(_In_ float fltLeft, _In_ double dblRight);
STDAPI VarR8Round(_In_ double dblIn, _In_ int cDecimals, _Out_ double *pdblResult);
#endif
#pragma endregion
typedef struct {
    SYSTEMTIME st;
    USHORT wDayOfYear;
} UDATE;
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Check_return_
WINOLEAUTAPI VarDateFromUdate(_In_ UDATE *pudateIn, _In_ ULONG dwFlags, _Out_ DATE *pdateOut);
WINOLEAUTAPI VarDateFromUdateEx(_In_ UDATE *pudateIn, _In_ LCID lcid, _In_ ULONG dwFlags, _Out_ DATE *pdateOut);
_Check_return_
WINOLEAUTAPI VarUdateFromDate(_In_ DATE dateIn, _In_ ULONG dwFlags, _Out_ UDATE *pudateOut);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_
WINOLEAUTAPI GetAltMonthNames(LCID lcid, _Outptr_result_buffer_maybenull_(13) LPOLESTR * * prgp);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINOLEAUTAPI VarFormat(
 _In_ LPVARIANT pvarIn,
 _In_opt_ LPOLESTR pstrFormat,
 int iFirstDay,
 int iFirstWeek,
 ULONG dwFlags,
 _Out_ BSTR *pbstrOut
 );
WINOLEAUTAPI VarFormatDateTime(
 _In_ LPVARIANT pvarIn,
 int iNamedFormat,
 ULONG dwFlags,
 _Out_ BSTR *pbstrOut
 );
WINOLEAUTAPI VarFormatNumber(
 _In_ LPVARIANT pvarIn,
 int iNumDig,
 int iIncLead,
 int iUseParens,
 int iGroup,
 ULONG dwFlags,
 _Out_ BSTR *pbstrOut
 );
WINOLEAUTAPI VarFormatPercent(
 _In_ LPVARIANT pvarIn,
 int iNumDig,
 int iIncLead,
 int iUseParens,
 int iGroup,
 ULONG dwFlags,
 _Out_ BSTR *pbstrOut
 );
WINOLEAUTAPI VarFormatCurrency(
 _In_ LPVARIANT pvarIn,
 int iNumDig,
 int iIncLead,
 int iUseParens,
 int iGroup,
 ULONG dwFlags,
 _Out_ BSTR *pbstrOut
 );
WINOLEAUTAPI VarWeekdayName(
 int iWeekday,
 int fAbbrev,
 int iFirstDay,
 ULONG dwFlags,
 _Out_ BSTR *pbstrOut
 );
WINOLEAUTAPI VarMonthName(
 int iMonth,
 int fAbbrev,
 ULONG dwFlags,
 _Out_ BSTR *pbstrOut
 );
WINOLEAUTAPI VarFormatFromTokens(
 _In_ LPVARIANT pvarIn,
 _In_opt_ LPOLESTR pstrFormat,
 _In_reads_(_Inexpressible_("from VarTokenizeFormatString")) LPBYTE pbTokCur,
 ULONG dwFlags,
 _Out_ BSTR *pbstrOut,
 LCID lcid
 );
WINOLEAUTAPI VarTokenizeFormatString(
 _In_opt_ LPOLESTR pstrFormat,
 _Inout_updates_(cbTok) LPBYTE rgbTok,
 int cbTok,
 int iFirstDay,
 int iFirstWeek,
 LCID lcid,
 _In_opt_ int *pcbActual
 );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef __RPC_unique_pointer ITypeLib *LPTYPELIB;
typedef LONG DISPID;
typedef DISPID MEMBERID;
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef __RPC_unique_pointer ITypeInfo *LPTYPEINFO;
typedef __RPC_unique_pointer ITypeComp *LPTYPECOMP;
typedef ICreateTypeLib * LPCREATETYPELIB;
typedef ICreateTypeInfo * LPCREATETYPEINFO;
_Check_return_
WINOLEAUTAPI_(ULONG) LHashValOfNameSysA(SYSKIND syskind, LCID lcid,
            LPCSTR szName);
_Check_return_
WINOLEAUTAPI_(ULONG)
LHashValOfNameSys(SYSKIND syskind, LCID lcid, const OLECHAR * szName);
            LHashValOfNameSys(SYS_WIN32, lcid, szName)
            ((USHORT) (0x0000ffff & (lhashval)))
            ((BOOL) ((0x00ff0000 & (lhashval1)) == (0x00ff0000 & (lhashval2))))
WINOLEAUTAPI LoadTypeLib(_In_z_ LPCOLESTR szFile, ITypeLib ** pptlib);
typedef enum tagREGKIND
{
    REGKIND_DEFAULT,
    REGKIND_REGISTER,
    REGKIND_NONE
} REGKIND;
_Check_return_
WINOLEAUTAPI LoadTypeLibEx(LPCOLESTR szFile, REGKIND regkind,
            ITypeLib ** pptlib);
_Check_return_
WINOLEAUTAPI LoadRegTypeLib(REFGUID rguid, WORD wVerMajor, WORD wVerMinor,
            LCID lcid, ITypeLib ** pptlib);
WINOLEAUTAPI QueryPathOfRegTypeLib(REFGUID guid, USHORT wMaj, USHORT wMin,
            LCID lcid, _Out_ LPBSTR lpbstrPathName);
_Check_return_
WINOLEAUTAPI RegisterTypeLib(ITypeLib * ptlib, _In_ LPCOLESTR szFullPath,
            _In_opt_ LPCOLESTR szHelpDir);
_Check_return_
WINOLEAUTAPI UnRegisterTypeLib(REFGUID libID, WORD wVerMajor,
            WORD wVerMinor, LCID lcid, SYSKIND syskind);
WINOLEAUTAPI RegisterTypeLibForUser(ITypeLib *ptlib,_In_ OLECHAR *szFullPath,
   _In_opt_ OLECHAR *szHelpDir);
WINOLEAUTAPI UnRegisterTypeLibForUser(
    REFGUID libID,
    WORD wMajorVerNum,
    WORD wMinorVerNum,
    LCID lcid,
    SYSKIND syskind);
_Check_return_
WINOLEAUTAPI CreateTypeLib(SYSKIND syskind, LPCOLESTR szFile,
            ICreateTypeLib ** ppctlib);
_Check_return_
WINOLEAUTAPI CreateTypeLib2(SYSKIND syskind, LPCOLESTR szFile,
            ICreateTypeLib2 **ppctlib);
typedef __RPC_unique_pointer IDispatch *LPDISPATCH;
typedef struct tagPARAMDATA {
    OLECHAR * szName;
    VARTYPE vt;
} PARAMDATA, * LPPARAMDATA;
typedef struct tagMETHODDATA {
    OLECHAR * szName;
    PARAMDATA * ppdata;
    DISPID dispid;
    UINT iMeth;
    CALLCONV cc;
    UINT cArgs;
    WORD wFlags;
    VARTYPE vtReturn;
} METHODDATA, * LPMETHODDATA;
typedef struct tagINTERFACEDATA {
    METHODDATA * pmethdata;
    UINT cMembers;
} INTERFACEDATA, * LPINTERFACEDATA;
_Check_return_
WINOLEAUTAPI DispGetParam(
 _In_ DISPPARAMS * pdispparams,
 UINT position,
 VARTYPE vtTarg,
 _Out_ VARIANT * pvarResult,
 _Out_opt_ UINT * puArgErr
 );
_Check_return_ WINOLEAUTAPI DispGetIDsOfNames(ITypeInfo * ptinfo, _In_reads_(cNames) LPOLESTR* rgszNames,
            UINT cNames, _Out_writes_(cNames) DISPID * rgdispid);
_Check_return_
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINOLEAUTAPI DispInvoke(void * _this, ITypeInfo * ptinfo, DISPID dispidMember,
            WORD wFlags, DISPPARAMS * pparams, VARIANT * pvarResult,
            EXCEPINFO * pexcepinfo, UINT * puArgErr);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_
WINOLEAUTAPI CreateDispTypeInfo(INTERFACEDATA * pidata, LCID lcid,
            ITypeInfo ** pptinfo);
_Check_return_
WINOLEAUTAPI CreateStdDispatch(IUnknown * punkOuter, void * pvThis,
            ITypeInfo * ptinfo, IUnknown ** ppunkStdDisp);
WINOLEAUTAPI DispCallFunc(_In_opt_ void * pvInstance, ULONG_PTR oVft, CALLCONV cc,
            VARTYPE vtReturn, UINT cActuals, _In_reads_(cActuals) VARTYPE * prgvt,
            _In_reads_(cActuals) VARIANTARG ** prgpvarg, _Out_ VARIANT * pvargResult);
_Check_return_
WINOLEAUTAPI RegisterActiveObject(IUnknown * punk, REFCLSID rclsid,
            DWORD dwFlags, DWORD * pdwRegister);
WINOLEAUTAPI RevokeActiveObject(DWORD dwRegister, void * pvReserved);
WINOLEAUTAPI GetActiveObject(REFCLSID rclsid, void * pvReserved,
            IUnknown ** ppunk);
WINOLEAUTAPI SetErrorInfo(_In_ ULONG dwReserved, _In_opt_ IErrorInfo * perrinfo);
_Check_return_
WINOLEAUTAPI GetErrorInfo(_In_ ULONG dwReserved, _Outptr_ IErrorInfo ** pperrinfo);
_Check_return_
WINOLEAUTAPI CreateErrorInfo(_Outptr_ ICreateErrorInfo ** pperrinfo);
WINOLEAUTAPI GetRecordInfoFromTypeInfo(ITypeInfo * pTypeInfo,
            IRecordInfo ** ppRecInfo);
WINOLEAUTAPI GetRecordInfoFromGuids(REFGUID rGuidTypeLib,
            ULONG uVerMajor, ULONG uVerMinor, LCID lcid,
            REFGUID rGuidTypeInfo, IRecordInfo ** ppRecInfo);
WINOLEAUTAPI_(ULONG) OaBuildVersion(void);
WINOLEAUTAPI_(void) ClearCustData(LPCUSTDATA pCustData);
WINOLEAUTAPI_(void) OaEnablePerUserTLibRegistration(void);
#endif
#pragma endregion
#include <poppack.h>
