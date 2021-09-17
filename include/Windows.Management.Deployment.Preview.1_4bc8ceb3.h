       
#include "winrt/impl/Windows.Management.Deployment.Preview.0.h"
WINRT_EXPORT namespace winrt::Windows::Management::Deployment::Preview {
struct WINRT_EBO IClassicAppManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClassicAppManagerStatics>
{
    IClassicAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
};
struct WINRT_EBO IInstalledClassicAppInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInstalledClassicAppInfo>
{
    IInstalledClassicAppInfo(std::nullptr_t = nullptr) noexcept {}
};
}
