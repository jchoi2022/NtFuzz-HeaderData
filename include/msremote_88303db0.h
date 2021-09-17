#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern const MSREMOTEDECLSPEC CLSID CLSID_MSRemote
 = { 0x27016870, 0x8e02, 0x11d1, { 0x92, 0x4e, 0x0, 0xc0, 0x4f, 0xbb, 0xbf, 0xb3 } };
extern const MSREMOTEDECLSPEC CLSID CLSID_MSRemoteSession
 = { 0x27016871, 0x8e02, 0x11d1, { 0x92, 0x4e, 0x0, 0xc0, 0x4f, 0xbb, 0xbf, 0xb3 } };
extern const MSREMOTEDECLSPEC CLSID CLSID_MSRemoteCommand
 = { 0x27016872, 0x8e02, 0x11d1, { 0x92, 0x4e, 0x0, 0xc0, 0x4f, 0xbb, 0xbf, 0xb3 } };
extern const MSREMOTEDECLSPEC char *PROGID_MSRemote = MS_REMOTE_PROGID;
extern const MSREMOTEDECLSPEC WCHAR *PROGID_WMSRemote = MS_REMOTE_WPROGID;
extern const MSREMOTEDECLSPEC char *PROGID_MSRemote_Version = MS_REMOTE_PROGID ".1";
extern const MSREMOTEDECLSPEC WCHAR *PROGID_WMSRemote_Version = MS_REMOTE_WPROGID L".1";
extern const MSREMOTEDECLSPEC GUID DBPROPSET_MSREMOTE_DBINIT
 = { 0x27016873, 0x8e02, 0x11d1, { 0x92, 0x4e, 0x0, 0xc0, 0x4f, 0xbb, 0xbf, 0xb3 } };
extern const MSREMOTEDECLSPEC GUID DBPROPSET_MSREMOTE_DATASOURCE
 = { 0x27016874, 0x8e02, 0x11d1, { 0x92, 0x4e, 0x0, 0xc0, 0x4f, 0xbb, 0xbf, 0xb3 } };
#endif
#pragma endregion
