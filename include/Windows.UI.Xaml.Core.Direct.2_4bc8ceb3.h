       
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Media3D.1.h"
#include "winrt/impl/Windows.UI.Xaml.Core.Direct.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Core::Direct {
}
namespace winrt::impl {
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Core::Direct {
struct WINRT_EBO XamlDirect :
    Windows::UI::Xaml::Core::Direct::IXamlDirect
{
    XamlDirect(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Core::Direct::XamlDirect GetDefault();
};
}
