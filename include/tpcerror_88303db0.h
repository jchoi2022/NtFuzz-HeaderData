#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <winerror.h>
            AtlReportError( CLSID_##ID , IDS_##hr, \
                            helpid, helpfile, \
                            IID_I##ID, hr, \
                            _Module.GetModuleInstance())
            AtlReportError( GUID_NULL , IDS_##hr, \
                            helpid, helpfile, \
                            IID_I##ID, hr, \
                            _Module.GetModuleInstance())
#endif
#pragma endregion
