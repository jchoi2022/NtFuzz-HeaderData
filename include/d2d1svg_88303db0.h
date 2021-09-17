       
#include <d2d1_2.h>
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef interface ID2D1SvgDocument ID2D1SvgDocument;
typedef interface ID2D1SvgElement ID2D1SvgElement;
typedef enum D2D1_SVG_PAINT_TYPE
{
    D2D1_SVG_PAINT_TYPE_NONE = 0,
    D2D1_SVG_PAINT_TYPE_COLOR = 1,
    D2D1_SVG_PAINT_TYPE_CURRENT_COLOR = 2,
    D2D1_SVG_PAINT_TYPE_URI = 3,
    D2D1_SVG_PAINT_TYPE_URI_NONE = 4,
    D2D1_SVG_PAINT_TYPE_URI_COLOR = 5,
    D2D1_SVG_PAINT_TYPE_URI_CURRENT_COLOR = 6,
    D2D1_SVG_PAINT_TYPE_FORCE_DWORD = 0xffffffff
} D2D1_SVG_PAINT_TYPE;
typedef enum D2D1_SVG_LENGTH_UNITS
{
    D2D1_SVG_LENGTH_UNITS_NUMBER = 0,
    D2D1_SVG_LENGTH_UNITS_PERCENTAGE = 1,
    D2D1_SVG_LENGTH_UNITS_FORCE_DWORD = 0xffffffff
} D2D1_SVG_LENGTH_UNITS;
typedef enum D2D1_SVG_DISPLAY
{
    D2D1_SVG_DISPLAY_INLINE = 0,
    D2D1_SVG_DISPLAY_NONE = 1,
    D2D1_SVG_DISPLAY_FORCE_DWORD = 0xffffffff
} D2D1_SVG_DISPLAY;
typedef enum D2D1_SVG_VISIBILITY
{
    D2D1_SVG_VISIBILITY_VISIBLE = 0,
    D2D1_SVG_VISIBILITY_HIDDEN = 1,
    D2D1_SVG_VISIBILITY_FORCE_DWORD = 0xffffffff
} D2D1_SVG_VISIBILITY;
typedef enum D2D1_SVG_OVERFLOW
{
    D2D1_SVG_OVERFLOW_VISIBLE = 0,
    D2D1_SVG_OVERFLOW_HIDDEN = 1,
    D2D1_SVG_OVERFLOW_FORCE_DWORD = 0xffffffff
} D2D1_SVG_OVERFLOW;
typedef enum D2D1_SVG_LINE_CAP
{
    D2D1_SVG_LINE_CAP_BUTT = D2D1_CAP_STYLE_FLAT,
    D2D1_SVG_LINE_CAP_SQUARE = D2D1_CAP_STYLE_SQUARE,
    D2D1_SVG_LINE_CAP_ROUND = D2D1_CAP_STYLE_ROUND,
    D2D1_SVG_LINE_CAP_FORCE_DWORD = 0xffffffff
} D2D1_SVG_LINE_CAP;
typedef enum D2D1_SVG_LINE_JOIN
{
    D2D1_SVG_LINE_JOIN_BEVEL = D2D1_LINE_JOIN_BEVEL,
    D2D1_SVG_LINE_JOIN_MITER = D2D1_LINE_JOIN_MITER_OR_BEVEL,
    D2D1_SVG_LINE_JOIN_ROUND = D2D1_LINE_JOIN_ROUND,
    D2D1_SVG_LINE_JOIN_FORCE_DWORD = 0xffffffff
} D2D1_SVG_LINE_JOIN;
typedef enum D2D1_SVG_ASPECT_ALIGN
{
    D2D1_SVG_ASPECT_ALIGN_NONE = 0,
    D2D1_SVG_ASPECT_ALIGN_X_MIN_Y_MIN = 1,
    D2D1_SVG_ASPECT_ALIGN_X_MID_Y_MIN = 2,
    D2D1_SVG_ASPECT_ALIGN_X_MAX_Y_MIN = 3,
    D2D1_SVG_ASPECT_ALIGN_X_MIN_Y_MID = 4,
    D2D1_SVG_ASPECT_ALIGN_X_MID_Y_MID = 5,
    D2D1_SVG_ASPECT_ALIGN_X_MAX_Y_MID = 6,
    D2D1_SVG_ASPECT_ALIGN_X_MIN_Y_MAX = 7,
    D2D1_SVG_ASPECT_ALIGN_X_MID_Y_MAX = 8,
    D2D1_SVG_ASPECT_ALIGN_X_MAX_Y_MAX = 9,
    D2D1_SVG_ASPECT_ALIGN_FORCE_DWORD = 0xffffffff
} D2D1_SVG_ASPECT_ALIGN;
typedef enum D2D1_SVG_ASPECT_SCALING
{
    D2D1_SVG_ASPECT_SCALING_MEET = 0,
    D2D1_SVG_ASPECT_SCALING_SLICE = 1,
    D2D1_SVG_ASPECT_SCALING_FORCE_DWORD = 0xffffffff
} D2D1_SVG_ASPECT_SCALING;
typedef enum D2D1_SVG_PATH_COMMAND
{
    D2D1_SVG_PATH_COMMAND_CLOSE_PATH = 0,
    D2D1_SVG_PATH_COMMAND_MOVE_ABSOLUTE = 1,
    D2D1_SVG_PATH_COMMAND_MOVE_RELATIVE = 2,
    D2D1_SVG_PATH_COMMAND_LINE_ABSOLUTE = 3,
    D2D1_SVG_PATH_COMMAND_LINE_RELATIVE = 4,
    D2D1_SVG_PATH_COMMAND_CUBIC_ABSOLUTE = 5,
    D2D1_SVG_PATH_COMMAND_CUBIC_RELATIVE = 6,
    D2D1_SVG_PATH_COMMAND_QUADRADIC_ABSOLUTE = 7,
    D2D1_SVG_PATH_COMMAND_QUADRADIC_RELATIVE = 8,
    D2D1_SVG_PATH_COMMAND_ARC_ABSOLUTE = 9,
    D2D1_SVG_PATH_COMMAND_ARC_RELATIVE = 10,
    D2D1_SVG_PATH_COMMAND_HORIZONTAL_ABSOLUTE = 11,
    D2D1_SVG_PATH_COMMAND_HORIZONTAL_RELATIVE = 12,
    D2D1_SVG_PATH_COMMAND_VERTICAL_ABSOLUTE = 13,
    D2D1_SVG_PATH_COMMAND_VERTICAL_RELATIVE = 14,
    D2D1_SVG_PATH_COMMAND_CUBIC_SMOOTH_ABSOLUTE = 15,
    D2D1_SVG_PATH_COMMAND_CUBIC_SMOOTH_RELATIVE = 16,
    D2D1_SVG_PATH_COMMAND_QUADRADIC_SMOOTH_ABSOLUTE = 17,
    D2D1_SVG_PATH_COMMAND_QUADRADIC_SMOOTH_RELATIVE = 18,
    D2D1_SVG_PATH_COMMAND_FORCE_DWORD = 0xffffffff
} D2D1_SVG_PATH_COMMAND;
typedef enum D2D1_SVG_UNIT_TYPE
{
    D2D1_SVG_UNIT_TYPE_USER_SPACE_ON_USE = 0,
    D2D1_SVG_UNIT_TYPE_OBJECT_BOUNDING_BOX = 1,
    D2D1_SVG_UNIT_TYPE_FORCE_DWORD = 0xffffffff
} D2D1_SVG_UNIT_TYPE;
typedef enum D2D1_SVG_ATTRIBUTE_STRING_TYPE
{
    D2D1_SVG_ATTRIBUTE_STRING_TYPE_SVG = 0,
    D2D1_SVG_ATTRIBUTE_STRING_TYPE_ID = 1,
    D2D1_SVG_ATTRIBUTE_STRING_TYPE_FORCE_DWORD = 0xffffffff
} D2D1_SVG_ATTRIBUTE_STRING_TYPE;
typedef enum D2D1_SVG_ATTRIBUTE_POD_TYPE
{
    D2D1_SVG_ATTRIBUTE_POD_TYPE_FLOAT = 0,
    D2D1_SVG_ATTRIBUTE_POD_TYPE_COLOR = 1,
    D2D1_SVG_ATTRIBUTE_POD_TYPE_FILL_MODE = 2,
    D2D1_SVG_ATTRIBUTE_POD_TYPE_DISPLAY = 3,
    D2D1_SVG_ATTRIBUTE_POD_TYPE_OVERFLOW = 4,
    D2D1_SVG_ATTRIBUTE_POD_TYPE_LINE_CAP = 5,
    D2D1_SVG_ATTRIBUTE_POD_TYPE_LINE_JOIN = 6,
    D2D1_SVG_ATTRIBUTE_POD_TYPE_VISIBILITY = 7,
    D2D1_SVG_ATTRIBUTE_POD_TYPE_MATRIX = 8,
    D2D1_SVG_ATTRIBUTE_POD_TYPE_UNIT_TYPE = 9,
    D2D1_SVG_ATTRIBUTE_POD_TYPE_EXTEND_MODE = 10,
    D2D1_SVG_ATTRIBUTE_POD_TYPE_PRESERVE_ASPECT_RATIO = 11,
    D2D1_SVG_ATTRIBUTE_POD_TYPE_VIEWBOX = 12,
    D2D1_SVG_ATTRIBUTE_POD_TYPE_LENGTH = 13,
    D2D1_SVG_ATTRIBUTE_POD_TYPE_FORCE_DWORD = 0xffffffff
} D2D1_SVG_ATTRIBUTE_POD_TYPE;
typedef struct D2D1_SVG_LENGTH
{
    FLOAT value;
    D2D1_SVG_LENGTH_UNITS units;
} D2D1_SVG_LENGTH;
typedef struct D2D1_SVG_PRESERVE_ASPECT_RATIO
{
    BOOL defer;
    D2D1_SVG_ASPECT_ALIGN align;
    D2D1_SVG_ASPECT_SCALING meetOrSlice;
} D2D1_SVG_PRESERVE_ASPECT_RATIO;
typedef struct D2D1_SVG_VIEWBOX
{
    FLOAT x;
    FLOAT y;
    FLOAT width;
    FLOAT height;
} D2D1_SVG_VIEWBOX;
EXTERN_C CONST IID IID_ID2D1SvgAttribute;
EXTERN_C CONST IID IID_ID2D1SvgPaint;
EXTERN_C CONST IID IID_ID2D1SvgStrokeDashArray;
EXTERN_C CONST IID IID_ID2D1SvgPointCollection;
EXTERN_C CONST IID IID_ID2D1SvgPathData;
EXTERN_C CONST IID IID_ID2D1SvgElement;
EXTERN_C CONST IID IID_ID2D1SvgDocument;
interface DX_DECLARE_INTERFACE("c9cdb0dd-f8c9-4e70-b7c2-301c80292c5e") ID2D1SvgAttribute : public ID2D1Resource
{
    STDMETHOD_(void, GetElement)(
        _Outptr_result_maybenull_ ID2D1SvgElement **element
        ) PURE;
    STDMETHOD(Clone)(
        _COM_Outptr_ ID2D1SvgAttribute **attribute
        ) PURE;
};
interface DX_DECLARE_INTERFACE("d59bab0a-68a2-455b-a5dc-9eb2854e2490") ID2D1SvgPaint : public ID2D1SvgAttribute
{
    STDMETHOD(SetPaintType)(
        D2D1_SVG_PAINT_TYPE paintType
        ) PURE;
    STDMETHOD_(D2D1_SVG_PAINT_TYPE, GetPaintType)(
        ) PURE;
    STDMETHOD(SetColor)(
        _In_ CONST D2D1_COLOR_F *color
        ) PURE;
    STDMETHOD_(void, GetColor)(
        _Out_ D2D1_COLOR_F *color
        ) PURE;
    STDMETHOD(SetId)(
        _In_ PCWSTR id
        ) PURE;
    STDMETHOD(GetId)(
        _Out_writes_(idCount) PWSTR id,
        UINT32 idCount
        ) PURE;
    STDMETHOD_(UINT32, GetIdLength)(
        ) PURE;
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetColor(
        CONST D2D1_COLOR_F &color
        )
    {
        return SetColor(&color);
    }
};
interface DX_DECLARE_INTERFACE("f1c0ca52-92a3-4f00-b4ce-f35691efd9d9") ID2D1SvgStrokeDashArray : public ID2D1SvgAttribute
{
    STDMETHOD(RemoveDashesAtEnd)(
        UINT32 dashesCount
        ) PURE;
    STDMETHOD(UpdateDashes)(
        _In_reads_(dashesCount) CONST FLOAT *dashes,
        UINT32 dashesCount,
        UINT32 startIndex = 0
        ) PURE;
    STDMETHOD(UpdateDashes)(
        _In_reads_(dashesCount) CONST D2D1_SVG_LENGTH *dashes,
        UINT32 dashesCount,
        UINT32 startIndex = 0
        ) PURE;
    STDMETHOD(GetDashes)(
        _Out_writes_(dashesCount) FLOAT *dashes,
        UINT32 dashesCount,
        UINT32 startIndex = 0
        ) PURE;
    STDMETHOD(GetDashes)(
        _Out_writes_(dashesCount) D2D1_SVG_LENGTH *dashes,
        UINT32 dashesCount,
        UINT32 startIndex = 0
        ) PURE;
    STDMETHOD_(UINT32, GetDashesCount)(
        ) PURE;
};
interface DX_DECLARE_INTERFACE("9dbe4c0d-3572-4dd9-9825-5530813bb712") ID2D1SvgPointCollection : public ID2D1SvgAttribute
{
    STDMETHOD(RemovePointsAtEnd)(
        UINT32 pointsCount
        ) PURE;
    STDMETHOD(UpdatePoints)(
        _In_reads_(pointsCount) CONST D2D1_POINT_2F *points,
        UINT32 pointsCount,
        UINT32 startIndex = 0
        ) PURE;
    STDMETHOD(GetPoints)(
        _Out_writes_(pointsCount) D2D1_POINT_2F *points,
        UINT32 pointsCount,
        UINT32 startIndex = 0
        ) PURE;
    STDMETHOD_(UINT32, GetPointsCount)(
        ) PURE;
};
interface DX_DECLARE_INTERFACE("c095e4f4-bb98-43d6-9745-4d1b84ec9888") ID2D1SvgPathData : public ID2D1SvgAttribute
{
    STDMETHOD(RemoveSegmentDataAtEnd)(
        UINT32 dataCount
        ) PURE;
    STDMETHOD(UpdateSegmentData)(
        _In_reads_(dataCount) CONST FLOAT *data,
        UINT32 dataCount,
        UINT32 startIndex = 0
        ) PURE;
    STDMETHOD(GetSegmentData)(
        _Out_writes_(dataCount) FLOAT *data,
        UINT32 dataCount,
        UINT32 startIndex = 0
        ) PURE;
    STDMETHOD_(UINT32, GetSegmentDataCount)(
        ) PURE;
    STDMETHOD(RemoveCommandsAtEnd)(
        UINT32 commandsCount
        ) PURE;
    STDMETHOD(UpdateCommands)(
        _In_reads_(commandsCount) CONST D2D1_SVG_PATH_COMMAND *commands,
        UINT32 commandsCount,
        UINT32 startIndex = 0
        ) PURE;
    STDMETHOD(GetCommands)(
        _Out_writes_(commandsCount) D2D1_SVG_PATH_COMMAND *commands,
        UINT32 commandsCount,
        UINT32 startIndex = 0
        ) PURE;
    STDMETHOD_(UINT32, GetCommandsCount)(
        ) PURE;
    STDMETHOD(CreatePathGeometry)(
        D2D1_FILL_MODE fillMode,
        _COM_Outptr_ ID2D1PathGeometry1 **pathGeometry
        ) PURE;
};
interface DX_DECLARE_INTERFACE("ac7b67a6-183e-49c1-a823-0ebe40b0db29") ID2D1SvgElement : public ID2D1Resource
{
    STDMETHOD_(void, GetDocument)(
        _Outptr_result_maybenull_ ID2D1SvgDocument **document
        ) PURE;
    STDMETHOD(GetTagName)(
        _Out_writes_(nameCount) PWSTR name,
        UINT32 nameCount
        ) PURE;
    STDMETHOD_(UINT32, GetTagNameLength)(
        ) PURE;
    STDMETHOD_(BOOL, IsTextContent)(
        ) PURE;
    STDMETHOD_(void, GetParent)(
        _Outptr_result_maybenull_ ID2D1SvgElement **parent
        ) PURE;
    STDMETHOD_(BOOL, HasChildren)(
        ) PURE;
    STDMETHOD_(void, GetFirstChild)(
        _Outptr_result_maybenull_ ID2D1SvgElement **child
        ) PURE;
    STDMETHOD_(void, GetLastChild)(
        _Outptr_result_maybenull_ ID2D1SvgElement **child
        ) PURE;
    STDMETHOD(GetPreviousChild)(
        _In_ ID2D1SvgElement *referenceChild,
        _COM_Outptr_result_maybenull_ ID2D1SvgElement **previousChild
        ) PURE;
    STDMETHOD(GetNextChild)(
        _In_ ID2D1SvgElement *referenceChild,
        _COM_Outptr_result_maybenull_ ID2D1SvgElement **nextChild
        ) PURE;
    STDMETHOD(InsertChildBefore)(
        _In_ ID2D1SvgElement *newChild,
        _In_opt_ ID2D1SvgElement *referenceChild = NULL
        ) PURE;
    STDMETHOD(AppendChild)(
        _In_ ID2D1SvgElement *newChild
        ) PURE;
    STDMETHOD(ReplaceChild)(
        _In_ ID2D1SvgElement *newChild,
        _In_ ID2D1SvgElement *oldChild
        ) PURE;
    STDMETHOD(RemoveChild)(
        _In_ ID2D1SvgElement *oldChild
        ) PURE;
    STDMETHOD(CreateChild)(
        _In_ PCWSTR tagName,
        _COM_Outptr_ ID2D1SvgElement **newChild
        ) PURE;
    STDMETHOD_(BOOL, IsAttributeSpecified)(
        _In_ PCWSTR name,
        _Out_opt_ BOOL *inherited = NULL
        ) PURE;
    STDMETHOD_(UINT32, GetSpecifiedAttributeCount)(
        ) PURE;
    STDMETHOD(GetSpecifiedAttributeName)(
        UINT32 index,
        _Out_writes_(nameCount) PWSTR name,
        UINT32 nameCount,
        _Out_opt_ BOOL *inherited = NULL
        ) PURE;
    STDMETHOD(GetSpecifiedAttributeNameLength)(
        UINT32 index,
        _Out_ UINT32 *nameLength,
        _Out_opt_ BOOL *inherited = NULL
        ) PURE;
    STDMETHOD(RemoveAttribute)(
        _In_ PCWSTR name
        ) PURE;
    STDMETHOD(SetTextValue)(
        _In_reads_(nameCount) CONST WCHAR *name,
        UINT32 nameCount
        ) PURE;
    STDMETHOD(GetTextValue)(
        _Out_writes_(nameCount) PWSTR name,
        UINT32 nameCount
        ) PURE;
    STDMETHOD_(UINT32, GetTextValueLength)(
        ) PURE;
    STDMETHOD(SetAttributeValue)(
        _In_ PCWSTR name,
        D2D1_SVG_ATTRIBUTE_STRING_TYPE type,
        _In_ PCWSTR value
        ) PURE;
    STDMETHOD(GetAttributeValue)(
        _In_ PCWSTR name,
        D2D1_SVG_ATTRIBUTE_STRING_TYPE type,
        _Out_writes_(valueCount) PWSTR value,
        UINT32 valueCount
        ) PURE;
    STDMETHOD(GetAttributeValueLength)(
        _In_ PCWSTR name,
        D2D1_SVG_ATTRIBUTE_STRING_TYPE type,
        _Out_ UINT32 *valueLength
        ) PURE;
    STDMETHOD(SetAttributeValue)(
        _In_ PCWSTR name,
        D2D1_SVG_ATTRIBUTE_POD_TYPE type,
        _In_reads_bytes_(valueSizeInBytes) CONST void *value,
        UINT32 valueSizeInBytes
        ) PURE;
    STDMETHOD(GetAttributeValue)(
        _In_ PCWSTR name,
        D2D1_SVG_ATTRIBUTE_POD_TYPE type,
        _Out_writes_bytes_(valueSizeInBytes) void *value,
        UINT32 valueSizeInBytes
        ) PURE;
    STDMETHOD(SetAttributeValue)(
        _In_ PCWSTR name,
        _In_ ID2D1SvgAttribute *value
        ) PURE;
    STDMETHOD(GetAttributeValue)(
        _In_ PCWSTR name,
        _In_ REFIID riid,
        _COM_Outptr_result_maybenull_ void **value
        ) PURE;
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetAttributeValue(
        _In_ PCWSTR name,
        FLOAT value
        )
    {
        return SetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_FLOAT, &value, sizeof(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _Out_ FLOAT *value
        )
    {
        return GetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_FLOAT, value, sizeof(*value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetAttributeValue(
        _In_ PCWSTR name,
        CONST D2D1_COLOR_F &value
        )
    {
        return SetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_COLOR, &value, sizeof(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _Out_ D2D1_COLOR_F *value
        )
    {
        return GetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_COLOR, value, sizeof(*value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetAttributeValue(
        _In_ PCWSTR name,
        D2D1_FILL_MODE value
        )
    {
        return SetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_FILL_MODE, &value, sizeof(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _Out_ D2D1_FILL_MODE *value
        )
    {
        return GetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_FILL_MODE, value, sizeof(*value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetAttributeValue(
        _In_ PCWSTR name,
        D2D1_SVG_DISPLAY value
        )
    {
        return SetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_DISPLAY, &value, sizeof(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _Out_ D2D1_SVG_DISPLAY *value
        )
    {
        return GetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_DISPLAY, value, sizeof(*value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetAttributeValue(
        _In_ PCWSTR name,
        D2D1_SVG_OVERFLOW value
        )
    {
        return SetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_OVERFLOW, &value, sizeof(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _Out_ D2D1_SVG_OVERFLOW *value
        )
    {
        return GetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_OVERFLOW, value, sizeof(*value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetAttributeValue(
        _In_ PCWSTR name,
        D2D1_SVG_LINE_JOIN value
        )
    {
        return SetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_LINE_JOIN, &value, sizeof(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _Out_ D2D1_SVG_LINE_JOIN *value
        )
    {
        return GetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_LINE_JOIN, value, sizeof(*value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetAttributeValue(
        _In_ PCWSTR name,
        D2D1_SVG_LINE_CAP value
        )
    {
        return SetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_LINE_CAP, &value, sizeof(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _Out_ D2D1_SVG_LINE_CAP *value
        )
    {
        return GetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_LINE_CAP, value, sizeof(*value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetAttributeValue(
        _In_ PCWSTR name,
        D2D1_SVG_VISIBILITY value
        )
    {
        return SetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_VISIBILITY, &value, sizeof(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _Out_ D2D1_SVG_VISIBILITY *value
        )
    {
        return GetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_VISIBILITY, value, sizeof(*value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetAttributeValue(
        _In_ PCWSTR name,
        CONST D2D1_MATRIX_3X2_F &value
        )
    {
        return SetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_MATRIX, &value, sizeof(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _Out_ D2D1_MATRIX_3X2_F *value
        )
    {
        return GetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_MATRIX, value, sizeof(*value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetAttributeValue(
        _In_ PCWSTR name,
        D2D1_SVG_UNIT_TYPE value
        )
    {
        return SetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_UNIT_TYPE, &value, sizeof(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _Out_ D2D1_SVG_UNIT_TYPE *value
        )
    {
        return GetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_UNIT_TYPE, value, sizeof(*value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetAttributeValue(
        _In_ PCWSTR name,
        D2D1_EXTEND_MODE value
        )
    {
        return SetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_EXTEND_MODE, &value, sizeof(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _Out_ D2D1_EXTEND_MODE *value
        )
    {
        return GetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_EXTEND_MODE, value, sizeof(*value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetAttributeValue(
        _In_ PCWSTR name,
        CONST D2D1_SVG_PRESERVE_ASPECT_RATIO &value
        )
    {
        return SetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_PRESERVE_ASPECT_RATIO, &value, sizeof(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _Out_ D2D1_SVG_PRESERVE_ASPECT_RATIO *value
        )
    {
        return GetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_PRESERVE_ASPECT_RATIO, value, sizeof(*value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetAttributeValue(
        _In_ PCWSTR name,
        CONST D2D1_SVG_LENGTH &value
        )
    {
        return SetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_LENGTH, &value, sizeof(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _Out_ D2D1_SVG_LENGTH *value
        )
    {
        return GetAttributeValue(name, D2D1_SVG_ATTRIBUTE_POD_TYPE_LENGTH, value, sizeof(*value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _COM_Outptr_result_maybenull_ ID2D1SvgAttribute **value
        )
    {
        return GetAttributeValue(name, IID_ID2D1SvgAttribute, reinterpret_cast<void **>(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _COM_Outptr_result_maybenull_ ID2D1SvgPaint **value
        )
    {
        return GetAttributeValue(name, IID_ID2D1SvgPaint, reinterpret_cast<void **>(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _COM_Outptr_result_maybenull_ ID2D1SvgStrokeDashArray **value
        )
    {
        return GetAttributeValue(name, IID_ID2D1SvgStrokeDashArray, reinterpret_cast<void **>(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _COM_Outptr_result_maybenull_ ID2D1SvgPointCollection **value
        )
    {
        return GetAttributeValue(name, IID_ID2D1SvgPointCollection, reinterpret_cast<void **>(value));
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetAttributeValue(
        _In_ PCWSTR name,
        _COM_Outptr_result_maybenull_ ID2D1SvgPathData **value
        )
    {
        return GetAttributeValue(name, IID_ID2D1SvgPathData, reinterpret_cast<void **>(value));
    }
};
interface DX_DECLARE_INTERFACE("86b88e4d-afa4-4d7b-88e4-68a51c4a0aec") ID2D1SvgDocument : public ID2D1Resource
{
    STDMETHOD(SetViewportSize)(
        D2D1_SIZE_F viewportSize
        ) PURE;
    STDMETHOD_(D2D1_SIZE_F, GetViewportSize)(
        ) CONST PURE;
    STDMETHOD(SetRoot)(
        _In_opt_ ID2D1SvgElement *root
        ) PURE;
    STDMETHOD_(void, GetRoot)(
        _Outptr_result_maybenull_ ID2D1SvgElement **root
        ) PURE;
    STDMETHOD(FindElementById)(
        _In_ PCWSTR id,
        _COM_Outptr_result_maybenull_ ID2D1SvgElement **svgElement
        ) PURE;
    STDMETHOD(Serialize)(
        _In_ IStream *outputXmlStream,
        _In_opt_ ID2D1SvgElement *subtree = NULL
        ) PURE;
    STDMETHOD(Deserialize)(
        _In_ IStream *inputXmlStream,
        _COM_Outptr_ ID2D1SvgElement **subtree
        ) PURE;
    STDMETHOD(CreatePaint)(
        D2D1_SVG_PAINT_TYPE paintType,
        _In_opt_ CONST D2D1_COLOR_F *color,
        _In_opt_ PCWSTR id,
        _COM_Outptr_ ID2D1SvgPaint **paint
        ) PURE;
    STDMETHOD(CreateStrokeDashArray)(
        _In_reads_opt_(dashesCount) CONST D2D1_SVG_LENGTH *dashes,
        UINT32 dashesCount,
        _COM_Outptr_ ID2D1SvgStrokeDashArray **strokeDashArray
        ) PURE;
    STDMETHOD(CreatePointCollection)(
        _In_reads_opt_(pointsCount) CONST D2D1_POINT_2F *points,
        UINT32 pointsCount,
        _COM_Outptr_ ID2D1SvgPointCollection **pointCollection
        ) PURE;
    STDMETHOD(CreatePathData)(
        _In_reads_opt_(segmentDataCount) CONST FLOAT *segmentData,
        UINT32 segmentDataCount,
        _In_reads_opt_(commandsCount) CONST D2D1_SVG_PATH_COMMAND *commands,
        UINT32 commandsCount,
        _COM_Outptr_ ID2D1SvgPathData **pathData
        ) PURE;
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreatePaint(
        D2D1_SVG_PAINT_TYPE paintType,
        CONST D2D1_COLOR_F &color,
        _In_opt_ PCWSTR id,
        _COM_Outptr_ ID2D1SvgPaint **paint
        )
    {
        return CreatePaint(paintType, &color, id, paint);
    }
};
#endif
#pragma endregion
