       
#include "winrt/impl/Windows.System.Update.0.h"
WINRT_EXPORT namespace winrt::Windows::System::Update {
struct WINRT_EBO ISystemUpdateItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemUpdateItem>
{
    ISystemUpdateItem(std::nullptr_t = nullptr) noexcept {}
};
struct WINRT_EBO ISystemUpdateLastErrorInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemUpdateLastErrorInfo>
{
    ISystemUpdateLastErrorInfo(std::nullptr_t = nullptr) noexcept {}
};
struct WINRT_EBO ISystemUpdateManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemUpdateManagerStatics>
{
    ISystemUpdateManagerStatics(std::nullptr_t = nullptr) noexcept {}
};
}
