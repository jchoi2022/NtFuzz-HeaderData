       
#include "winrt/impl/Windows.Devices.Pwm.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Pwm::Provider {
struct WINRT_EBO IPwmControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPwmControllerProvider>
{
    IPwmControllerProvider(std::nullptr_t = nullptr) noexcept {}
};
struct WINRT_EBO IPwmProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPwmProvider>
{
    IPwmProvider(std::nullptr_t = nullptr) noexcept {}
};
}
