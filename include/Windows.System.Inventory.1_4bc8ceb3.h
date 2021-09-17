       
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.System.Inventory.0.h"
WINRT_EXPORT namespace winrt::Windows::System::Inventory {
struct WINRT_EBO IInstalledDesktopApp :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInstalledDesktopApp>
{
    IInstalledDesktopApp(std::nullptr_t = nullptr) noexcept {}
};
struct WINRT_EBO IInstalledDesktopAppStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInstalledDesktopAppStatics>
{
    IInstalledDesktopAppStatics(std::nullptr_t = nullptr) noexcept {}
};
}
