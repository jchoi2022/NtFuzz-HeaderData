#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <apiset.h>
#include <apisetcconv.h>
#include <rpc.h>
#include <basetyps.h>
DECLARE_HANDLE(ROPARAMIIDHANDLE);
struct IRoSimpleMetaDataBuilder
{
    STDMETHOD(SetWinRtInterface)(
        GUID iid) = 0;
    STDMETHOD(SetDelegate)(
        GUID iid) = 0;
    STDMETHOD(SetInterfaceGroupSimpleDefault)(
        PCWSTR name,
        PCWSTR defaultInterfaceName,
        _In_opt_ const GUID* defaultInterfaceIID) = 0;
    STDMETHOD(SetInterfaceGroupParameterizedDefault)(
        PCWSTR name,
        UINT32 elementCount,
        _In_reads_(elementCount) PCWSTR* defaultInterfaceNameElements) = 0;
    STDMETHOD(SetRuntimeClassSimpleDefault)(
        PCWSTR name,
        PCWSTR defaultInterfaceName,
        _In_opt_ const GUID* defaultInterfaceIID) = 0;
    STDMETHOD(SetRuntimeClassParameterizedDefault)(
        PCWSTR name,
        UINT32 elementCount,
        _In_reads_(elementCount) const PCWSTR* defaultInterfaceNameElements) = 0;
    STDMETHOD(SetStruct)(
        PCWSTR name,
        UINT32 numFields,
        _In_reads_(numFields) const PCWSTR* fieldTypeNames) = 0;
    STDMETHOD(SetEnum)(
        PCWSTR name,
        PCWSTR baseType) = 0;
    STDMETHOD(SetParameterizedInterface)(
        GUID piid,
        UINT32 numArgs) = 0;
    STDMETHOD(SetParameterizedDelegate)(
        GUID piid,
        UINT32 numArgs) = 0;
};
struct IRoMetaDataLocator
{
    STDMETHOD(Locate)(
        PCWSTR nameElement,
        _In_ IRoSimpleMetaDataBuilder& metaDataDestination
    ) const = 0;
};
STDAPI
RoGetParameterizedTypeInstanceIID(
    UINT32 nameElementCount,
    _In_reads_(nameElementCount) PCWSTR* nameElements,
    _In_ const IRoMetaDataLocator& metaDataLocator,
    _Out_ GUID* iid,
    _Outptr_opt_ ROPARAMIIDHANDLE* pExtra
    );
STDAPI_(void)
RoFreeParameterizedTypeExtra(
    _In_ ROPARAMIIDHANDLE extra
    );
STDAPI_(PCSTR)
RoParameterizedTypeExtraGetTypeSignature(
    _In_ ROPARAMIIDHANDLE extra
    );
namespace Ro { namespace detail
{
    template <typename Fn>
    struct _Locator;
}}
namespace Ro
{
    template <typename Fn>
    Ro::detail::_Locator<Fn> Locator(const Fn& fn);
}
namespace Ro { namespace detail
{
    template <typename Fn>
    struct _Locator : IRoMetaDataLocator
    {
        Fn _fn;
        _Locator(const Fn& fn)
        : _fn(fn)
        {
        }
        IFACEMETHOD(Locate)(
            PCWSTR name,
            IRoSimpleMetaDataBuilder& pushMetaData) const
        {
            return _fn(name, pushMetaData);
        }
    };
}}
namespace Ro
{
    template <typename Fn>
    Ro::detail::_Locator<Fn> Locator(const Fn& fn)
    {
        return Ro::detail::_Locator<Fn>(fn);
    }
}
