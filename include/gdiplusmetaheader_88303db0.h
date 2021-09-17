#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct
{
    DWORD iType;
    DWORD nSize;
    RECTL rclBounds;
    RECTL rclFrame;
    DWORD dSignature;
    DWORD nVersion;
    DWORD nBytes;
    DWORD nRecords;
    WORD nHandles;
    WORD sReserved;
    DWORD nDescription;
    DWORD offDescription;
    DWORD nPalEntries;
    SIZEL szlDevice;
    SIZEL szlMillimeters;
} ENHMETAHEADER3;
#include <pshpack2.h>
typedef struct
{
    INT16 Left;
    INT16 Top;
    INT16 Right;
    INT16 Bottom;
} PWMFRect16;
typedef struct
{
    UINT32 Key;
    INT16 Hmf;
    PWMFRect16 BoundingBox;
    INT16 Inch;
    UINT32 Reserved;
    INT16 Checksum;
} WmfPlaceableFileHeader;
#include <poppack.h>
class MetafileHeader
{
public:
    MetafileType Type;
    UINT Size;
    UINT Version;
    UINT EmfPlusFlags;
    REAL DpiX;
    REAL DpiY;
    INT X;
    INT Y;
    INT Width;
    INT Height;
    union
    {
        METAHEADER WmfHeader;
        ENHMETAHEADER3 EmfHeader;
    };
    INT EmfPlusHeaderSize;
    INT LogicalDpiX;
    INT LogicalDpiY;
public:
    MetafileType GetType() const { return Type; }
    UINT GetMetafileSize() const { return Size; }
    UINT GetVersion() const { return Version; }
    UINT GetEmfPlusFlags() const { return EmfPlusFlags; }
    REAL GetDpiX() const { return DpiX; }
    REAL GetDpiY() const { return DpiY; }
    VOID GetBounds (OUT Rect *rect) const
    {
        rect->X = X;
        rect->Y = Y;
        rect->Width = Width;
        rect->Height = Height;
    }
    BOOL IsWmf() const
    {
       return ((Type == MetafileTypeWmf) || (Type == MetafileTypeWmfPlaceable));
    }
    BOOL IsWmfPlaceable() const { return (Type == MetafileTypeWmfPlaceable); }
    BOOL IsEmf() const { return (Type == MetafileTypeEmf); }
    BOOL IsEmfOrEmfPlus() const { return (Type >= MetafileTypeEmf); }
    BOOL IsEmfPlus() const { return (Type >= MetafileTypeEmfPlusOnly); }
    BOOL IsEmfPlusDual() const { return (Type == MetafileTypeEmfPlusDual); }
    BOOL IsEmfPlusOnly() const { return (Type == MetafileTypeEmfPlusOnly); }
    BOOL IsDisplay() const
    {
        return (IsEmfPlus() &&
                ((EmfPlusFlags & GDIP_EMFPLUSFLAGS_DISPLAY) != 0));
    }
    const METAHEADER * GetWmfHeader() const
    {
        if (IsWmf())
        {
            return &WmfHeader;
        }
        return NULL;
    }
    const ENHMETAHEADER3 * GetEmfHeader() const
    {
        if (IsEmfOrEmfPlus())
        {
            return &EmfHeader;
        }
        return NULL;
    }
};
#endif
#pragma endregion
