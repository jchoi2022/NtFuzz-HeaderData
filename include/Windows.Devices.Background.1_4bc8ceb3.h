       
#include "winrt/impl/Windows.Devices.Background.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Background {
struct WINRT_EBO IDeviceServicingDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceServicingDetails>
{
    IDeviceServicingDetails(std::nullptr_t = nullptr) noexcept {}
};
struct WINRT_EBO IDeviceUseDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceUseDetails>
{
    IDeviceUseDetails(std::nullptr_t = nullptr) noexcept {}
};
}
