#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "wtypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "RecDefs.h"
typedef struct tagRECO_GUIDE
    {
    int xOrigin;
    int yOrigin;
    int cxBox;
    int cyBox;
    int cxBase;
    int cyBase;
    int cHorzBox;
    int cVertBox;
    int cyMid;
    } RECO_GUIDE;
typedef struct tagRECO_ATTRS
    {
    DWORD dwRecoCapabilityFlags;
    WCHAR awcVendorName[ 32 ];
    WCHAR awcFriendlyName[ 64 ];
    WORD awLanguageId[ 64 ];
    } RECO_ATTRS;
typedef struct tagRECO_RANGE
    {
    ULONG iwcBegin;
    ULONG cCount;
    } RECO_RANGE;
typedef struct tagLINE_SEGMENT
    {
    POINT PtA;
    POINT PtB;
    } LINE_SEGMENT;
typedef struct tagLATTICE_METRICS
    {
    LINE_SEGMENT lsBaseline;
    short iMidlineOffset;
    } LATTICE_METRICS;
typedef
enum enumLINE_METRICS
    {
        LM_BASELINE = 0,
        LM_MIDLINE = 1,
        LM_ASCENDER = 2,
        LM_DESCENDER = 3
    } LINE_METRICS;
typedef
enum enumCONFIDENCE_LEVEL
    {
        CFL_STRONG = 0,
        CFL_INTERMEDIATE = 1,
        CFL_POOR = 2
    } CONFIDENCE_LEVEL;
typedef
enum enumALT_BREAKS
    {
        ALT_BREAKS_SAME = 0,
        ALT_BREAKS_UNIQUE = 1,
        ALT_BREAKS_FULL = 2
    } ALT_BREAKS;
typedef
enum enumRECO_TYPE
    {
        RECO_TYPE_WSTRING = 0,
        RECO_TYPE_WCHAR = 1
    } RECO_TYPE;
typedef struct tagRECO_LATTICE_PROPERTY
    {
    GUID guidProperty;
    USHORT cbPropertyValue;
                            BYTE *pPropertyValue;
    } RECO_LATTICE_PROPERTY;
typedef struct tagRECO_LATTICE_PROPERTIES
    {
    ULONG cProperties;
                                     RECO_LATTICE_PROPERTY **apProps;
    } RECO_LATTICE_PROPERTIES;
typedef int RECO_SCORE;
typedef struct tagRECO_LATTICE_ELEMENT
    {
    RECO_SCORE score;
    WORD type;
    BYTE *pData;
    ULONG ulNextColumn;
    ULONG ulStrokeNumber;
    RECO_LATTICE_PROPERTIES epProp;
    } RECO_LATTICE_ELEMENT;
typedef struct tagRECO_LATTICE_COLUMN
    {
    ULONG key;
    RECO_LATTICE_PROPERTIES cpProp;
    ULONG cStrokes;
    ULONG *pStrokes;
    ULONG cLatticeElements;
    RECO_LATTICE_ELEMENT *pLatticeElements;
    } RECO_LATTICE_COLUMN;
typedef struct tagRECO_LATTICE
    {
    ULONG ulColumnCount;
    RECO_LATTICE_COLUMN *pLatticeColumns;
    ULONG ulPropertyCount;
    GUID *pGuidProperties;
    ULONG ulBestResultColumnCount;
    ULONG *pulBestResultColumns;
    ULONG *pulBestResultIndexes;
    } RECO_LATTICE;
typedef struct tagCHARACTER_RANGE
    {
    WCHAR wcLow;
    USHORT cChars;
    } CHARACTER_RANGE;
typedef struct tagCHARACTER_RANGE *PCHARACTER_RANGE;
#endif
#pragma endregion
#pragma region APP Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#include "RecDefs.h"
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_rectypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rectypes_0000_0000_v0_0_s_ifspec;
}
