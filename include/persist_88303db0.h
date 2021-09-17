#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern const PERSISTDECLSPEC CLSID CLSID_MSPersist
 = { 0x7c07e0d0, 0x4418, 0x11d2, { 0x92, 0x12, 0x0, 0xc0, 0x4f, 0xbb, 0xbf, 0xb3 } };
extern const PERSISTDECLSPEC GUID DBPROPSET_PERSIST
 = { 0x4d7839a0, 0x5b8e, 0x11d1, { 0xa6, 0xb3, 0x0, 0xa0, 0xc9, 0x13, 0x8c, 0x66 } };
extern const PERSISTDECLSPEC char *PROGID_MSPersist = MS_PERSIST_PROGID;
extern const PERSISTDECLSPEC WCHAR *PROGID_MSPersist_W = L"MSPersist";
extern const PERSISTDECLSPEC char *PROGID_MSPersist_Version = MS_PERSIST_PROGID ".1";
extern const PERSISTDECLSPEC WCHAR *PROGID_MSPersist_Version_W = L"MSPersist.1";
#endif
#pragma endregion
