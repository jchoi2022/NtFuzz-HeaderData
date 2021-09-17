       
#include "winrt/impl/Windows.UI.WindowManagement.0.h"
#include "winrt/impl/Windows.UI.WindowManagement.Preview.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::WindowManagement::Preview {
struct WINRT_EBO IWindowManagementPreview :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWindowManagementPreview>
{
    IWindowManagementPreview(std::nullptr_t = nullptr) noexcept {}
};
struct WINRT_EBO IWindowManagementPreviewStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWindowManagementPreviewStatics>
{
    IWindowManagementPreviewStatics(std::nullptr_t = nullptr) noexcept {}
};
}
