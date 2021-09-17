       
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#include <D2D1EffectAuthor.h>
template<class C, typename P, typename I>
HRESULT DeducingValueSetter(
    _In_ HRESULT (C::*callback)(P),
    _In_ I *effect,
    _In_reads_(dataSize) const BYTE *data,
    UINT32 dataSize
    )
{
    if (dataSize != sizeof(P))
    {
        return E_INVALIDARG;
    }
    return (static_cast<C *>(effect)->*callback)(*reinterpret_cast<const P *>(data));
}
template<typename T, T P, typename I>
HRESULT CALLBACK ValueSetter(
    _In_ IUnknown *effect,
    _In_reads_(dataSize) const BYTE *data,
    UINT32 dataSize
    )
{
    return DeducingValueSetter(P, static_cast<I *>(effect), data, dataSize);
}
template<class C, typename P, typename I>
HRESULT DeducingValueGetter(
    _In_ P (C::*callback)() const,
    _In_ const I *effect,
    _Out_writes_opt_(dataSize) BYTE *data,
    UINT32 dataSize,
    _Out_opt_ UINT32 *actualSize
    )
{
    if (actualSize)
    {
        *actualSize = sizeof(P);
    }
    if (dataSize > 0 && data)
    {
        if (dataSize < sizeof(P))
        {
            return E_NOT_SUFFICIENT_BUFFER;
        }
        *reinterpret_cast<P *>(data) = (static_cast<const C *>(effect)->*callback)();
    }
    return S_OK;
}
template<typename T, T P, typename I>
HRESULT CALLBACK ValueGetter(
    _In_ const IUnknown *effect,
    _Out_writes_opt_(dataSize) BYTE *data,
    UINT32 dataSize,
    _Out_opt_ UINT32 *actualSize
    )
{
    return DeducingValueGetter(P, static_cast<const I *>(effect), data, dataSize, actualSize);
}
template<class C, typename I>
HRESULT DeducingBlobSetter(
    _In_ HRESULT (C::*callback)(const BYTE *, UINT32),
    _In_ I *effect,
    _In_reads_(dataSize) const BYTE *data,
    UINT32 dataSize
    )
{
    return (static_cast<C *>(effect)->*callback)(data, dataSize);
}
template<typename T, T P, typename I>
HRESULT CALLBACK BlobSetter(
    _In_ IUnknown *effect,
    _In_reads_(dataSize) const BYTE *data,
    UINT32 dataSize
    )
{
    return DeducingBlobSetter(P, static_cast<I *>(effect), data, dataSize);
}
template<class C, typename I>
HRESULT DeducingBlobGetter(
    _In_ HRESULT (C::*callback)(BYTE *, UINT32, UINT32*) const,
    _In_ const I *effect,
    _Out_writes_opt_(dataSize) BYTE *data,
    UINT32 dataSize,
    _Out_opt_ UINT32 *actualSize
    )
{
    return (static_cast<const C *>(effect)->*callback)(data, dataSize, actualSize);
}
template<typename T, T P, typename I>
HRESULT CALLBACK BlobGetter(
    _In_ const IUnknown *effect,
    _Out_writes_opt_(dataSize) BYTE *data,
    UINT32 dataSize,
    _Out_opt_ UINT32 *actualSize
    )
{
    return DeducingBlobGetter(P, static_cast<const I *>(effect), data, dataSize, actualSize);
}
template<class C, typename I>
HRESULT DeducingStringSetter(
    _In_ HRESULT (C::*callback)(PCWSTR string),
    _In_ I *effect,
    _In_reads_(dataSize) const BYTE *data,
    UINT32 dataSize
    )
{
    dataSize;
    return (static_cast<C *>(effect)->*callback)(reinterpret_cast<PCWSTR>(data));
}
template<typename T, T P, typename I>
HRESULT CALLBACK StringSetter(
    _In_ IUnknown *effect,
    _In_reads_(dataSize) const BYTE *data,
    UINT32 dataSize
    )
{
    return DeducingStringSetter(P, static_cast<I *>(effect), data, dataSize);
}
template<class C, typename I>
HRESULT DeducingStringGetter(
    _In_ HRESULT (C::*callback)(PWSTR, UINT32, UINT32*) const,
    _In_ const I *effect,
    _Out_writes_opt_(dataSize) BYTE *data,
    UINT32 dataSize,
    _Out_opt_ UINT32 *actualSize
    )
{
    UINT32 cchString = 0;
    HRESULT hr = (static_cast<const C *>(effect)->*callback)(reinterpret_cast<PWSTR>(data), dataSize / sizeof(WCHAR), &cchString);
    if ((SUCCEEDED(hr) || hr == E_NOT_SUFFICIENT_BUFFER) && actualSize)
    {
        *actualSize = cchString * sizeof(WCHAR);
    }
    return hr;
}
template<typename T, T P, typename I>
HRESULT CALLBACK StringGetter(
    _In_ const IUnknown *effect,
    _Out_writes_opt_(dataSize) BYTE *data,
    UINT32 dataSize,
    _Out_opt_ UINT32 *actualSize
    )
{
    return DeducingStringGetter(P, static_cast<const I *>(effect), data, dataSize, actualSize);
}
template<typename T>
T GetType(T t) { return t; };
    { NAME, &ValueSetter<decltype(GetType(SETTER)), SETTER, ID2D1EffectImpl>, &ValueGetter<decltype(GetType(GETTER)), GETTER, ID2D1EffectImpl> }
    { NAME, &BlobSetter<decltype(GetType(SETTER)), SETTER, ID2D1EffectImpl>, &BlobGetter<decltype(GetType(GETTER)), GETTER, ID2D1EffectImpl> }
    { NAME, &StringSetter<decltype(GetType(SETTER)), SETTER, ID2D1EffectImpl>, &StringGetter<decltype(GetType(GETTER)), GETTER, ID2D1EffectImpl> }
    { NAME, NULL, &ValueGetter<decltype(GetType(GETTER)), GETTER, ID2D1EffectImpl> }
    { NAME, NULL, &BlobGetter<decltype(GetType(GETTER)), GETTER, ID2D1EffectImpl> }
    { NAME, NULL, &StringGetter<decltype(GetType(GETTER)), GETTER, ID2D1EffectImpl> }
#endif
#pragma endregion
