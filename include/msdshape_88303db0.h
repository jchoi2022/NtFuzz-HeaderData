#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern const DSDECLSPEC CLSID CLSID_DataShapeProvider = { 0x3449a1c8, 0xc56c, 0x11d0, { 0xad, 0x72, 0, 0xc0, 0x4f, 0xc2, 0x98, 0x63}};
extern const DSDECLSPEC CLSID DBPROPSET_MSDSDBINIT = { 0x55cb91a8, 0x5c7a, 0x11d1, { 0xad, 0xad, 0, 0xc0, 0x4f, 0xc2, 0x98, 0x63}};
extern const DSDECLSPEC CLSID DBPROPSET_MSDSSESSION = { 0xedf17536, 0xafbf, 0x11d1, { 0x88, 0x47, 0, 0, 0xf8, 0x79, 0xf9, 0x8c}};
extern const DSDECLSPEC char* PROGID_DataShapeProvider = "MSDataShape";
extern const DSDECLSPEC char* PROGID_DataShapeProvider_Version = "MSDataShape.1";
enum MSDSDBINITPROPENUM
    { DBPROP_MSDS_DBINIT_DATAPROVIDER = 2,
    };
enum MSDSSESSIONPROPENUM
    { DBPROP_MSDS_SESS_UNIQUENAMES = 2,
    };
#endif
#pragma endregion
