       
#include "winrt/impl/Windows.System.Display.0.h"
WINRT_EXPORT namespace winrt::Windows::System::Display {
struct WINRT_EBO IDisplayRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDisplayRequest>
{
    IDisplayRequest(std::nullptr_t = nullptr) noexcept {}
};
}
