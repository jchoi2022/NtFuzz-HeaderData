#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum
 {
 DAOCOLKIND_IND = 0,
 DAOCOLKIND_STR,
 DAOCOLKIND_WSTR
 } DAOCOLKIND;
typedef enum
 {
 DAO_I2 = 0,
 DAO_I4,
 DAO_R4,
 DAO_R8,
 DAO_CURRENCY,
 DAO_DATE,
 DAO_BOOL,
 DAO_BSTR,
 DAO_LPSTR,
 DAO_LPWSTR,
 DAO_BLOB,
 DAO_BYTES,
 DAO_CHAR,
 DAO_WCHAR,
 DAO_ANYVARIANT,
 DAO_BOOKMARK,
 DAO_BYTE,
 DAO_GUID,
 DAO_DATATYPEMAX
 } DAODATATYPE;
typedef struct
 {
 DWORD dwKind;
 union
  {
  LONG ind;
  LPCSTR lpstr;
  LPCWSTR lpwstr;
  };
 } DAOCOLUMNID;
typedef DAOCOLUMNID *LPDAOCOLUMNID;
EXTERN_C typedef HRESULT (STDAPICALLTYPE *LPDAOBINDFUNC)(ULONG cb, DWORD dwUser, LPVOID *ppData);
typedef struct
 {
 DAOCOLUMNID columnID;
 ULONG cbDataOffset;
 ULONG cbMaxLen;
 ULONG cbInfoOffset;
 DWORD dwBinding;
 DWORD dwDataType;
 DWORD dwUser;
 } DAOCOLUMNBINDING;
typedef DAOCOLUMNBINDING *LPDAOCOLUMNBINDING;
typedef struct
 {
 ULONG cRowsRequested;
 DWORD dwFlags;
 LPVOID pData;
 LPVOID pVarData;
 ULONG cbVarData;
 ULONG cRowsReturned;
 } DAOFETCHROWS;
typedef DAOFETCHROWS *LPDAOFETCHROWS;
DECLARE_INTERFACE_(ICDAORecordset, IDispatch)
 {
 STDMETHOD(GetRows) (THIS_ LONG cRowsToSkip, LONG cCol, LPDAOCOLUMNBINDING prgBndCol, ULONG cbRowLen, LPDAOFETCHROWS pFetchRows) PURE;
 STDMETHOD(SetNotify) (THIS_ REFIID riid, BOOL fNotify);
 STDMETHOD(GetNotify) (THIS_ REFIID riid, BOOL *fNotify);
 STDMETHOD(OnBeforeNotify) (THIS_ REFIID riid, DWORD cat, DWORD rsn, VARIANT v1, VARIANT v2);
 STDMETHOD(OnAfterNotify) (THIS_ REFIID riid, DWORD cat, DWORD rsn, VARIANT v1, VARIANT v2, HRESULT hr);
 STDMETHOD(PutLock) (THIS_ BOOL f);
 STDMETHOD(GetLock) (THIS_ BOOL *f);
 STDMETHOD(AddGetRowsErr) (THIS_ HRESULT hr) PURE;
 };
#endif
#pragma endregion
