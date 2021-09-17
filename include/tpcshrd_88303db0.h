#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "wtypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef DWORD CURSOR_ID;
typedef USHORT SYSTEM_EVENT;
typedef DWORD TABLET_CONTEXT_ID;
typedef
enum _PROPERTY_UNITS
    {
        PROPERTY_UNITS_DEFAULT = 0,
        PROPERTY_UNITS_INCHES = 1,
        PROPERTY_UNITS_CENTIMETERS = 2,
        PROPERTY_UNITS_DEGREES = 3,
        PROPERTY_UNITS_RADIANS = 4,
        PROPERTY_UNITS_SECONDS = 5,
        PROPERTY_UNITS_POUNDS = 6,
        PROPERTY_UNITS_GRAMS = 7,
        PROPERTY_UNITS_SILINEAR = 8,
        PROPERTY_UNITS_SIROTATION = 9,
        PROPERTY_UNITS_ENGLINEAR = 10,
        PROPERTY_UNITS_ENGROTATION = 11,
        PROPERTY_UNITS_SLUGS = 12,
        PROPERTY_UNITS_KELVIN = 13,
        PROPERTY_UNITS_FAHRENHEIT = 14,
        PROPERTY_UNITS_AMPERE = 15,
        PROPERTY_UNITS_CANDELA = 16
    } PROPERTY_UNITS;
typedef enum _PROPERTY_UNITS *PPROPERTY_UNITS;
typedef struct tagXFORM
    {
    float eM11;
    float eM12;
    float eM21;
    float eM22;
    float eDx;
    float eDy;
    } XFORM;
typedef struct tagSYSTEM_EVENT_DATA
    {
    BYTE bModifier;
    WCHAR wKey;
    LONG xPos;
    LONG yPos;
    BYTE bCursorMode;
    DWORD dwButtonState;
    } SYSTEM_EVENT_DATA;
typedef struct tagSTROKE_RANGE
    {
    ULONG iStrokeBegin;
    ULONG iStrokeEnd;
    } STROKE_RANGE;
typedef struct _PROPERTY_METRICS
    {
    LONG nLogicalMin;
    LONG nLogicalMax;
    PROPERTY_UNITS Units;
    FLOAT fResolution;
    } PROPERTY_METRICS;
typedef struct _PROPERTY_METRICS *PPROPERTY_METRICS;
typedef struct _PACKET_PROPERTY
    {
    GUID guid;
    PROPERTY_METRICS PropertyMetrics;
    } PACKET_PROPERTY;
typedef struct _PACKET_PROPERTY *PPACKET_PROPERTY;
typedef struct _PACKET_DESCRIPTION
    {
    ULONG cbPacketSize;
                  ULONG cPacketProperties;
                            PACKET_PROPERTY *pPacketProperties;
                  ULONG cButtons;
                            GUID *pguidButtons;
    } PACKET_DESCRIPTION;
typedef struct _PACKET_DESCRIPTION *PPACKET_DESCRIPTION;
#endif
#pragma endregion
#pragma region APP Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tpcshrd_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tpcshrd_0000_0000_v0_0_s_ifspec;
}
