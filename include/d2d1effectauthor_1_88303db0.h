       
#include <d2d1_3.h>
#include <d2d1effectauthor.h>
EXTERN_C CONST IID IID_ID2D1EffectContext1;
EXTERN_C CONST IID IID_ID2D1EffectContext2;
interface DX_DECLARE_INTERFACE("84ab595a-fc81-4546-bacd-e8ef4d8abe7a") ID2D1EffectContext1 : public ID2D1EffectContext
{
    STDMETHOD(CreateLookupTable3D)(
        D2D1_BUFFER_PRECISION precision,
        _In_reads_(3) CONST UINT32 *extents,
        _In_reads_(dataCount) CONST BYTE *data,
        UINT32 dataCount,
        _In_reads_(2) CONST UINT32 *strides,
        _COM_Outptr_ ID2D1LookupTable3D **lookupTable
        ) PURE;
};
interface DX_DECLARE_INTERFACE("577ad2a0-9fc7-4dda-8b18-dab810140052") ID2D1EffectContext2 : public ID2D1EffectContext1
{
    STDMETHOD(CreateColorContextFromDxgiColorSpace)(
        DXGI_COLOR_SPACE_TYPE colorSpace,
        _COM_Outptr_ ID2D1ColorContext1 **colorContext
        ) PURE;
    STDMETHOD(CreateColorContextFromSimpleColorProfile)(
        _In_ CONST D2D1_SIMPLE_COLOR_PROFILE *simpleProfile,
        _COM_Outptr_ ID2D1ColorContext1 **colorContext
        ) PURE;
};
typedef interface ID2D1EffectContext1 ID2D1EffectContext1;
typedef interface ID2D1EffectContext2 ID2D1EffectContext2;
