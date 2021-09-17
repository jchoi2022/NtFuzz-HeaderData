       
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.Media.ClosedCaptioning.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::ClosedCaptioning {
struct WINRT_EBO IClosedCaptionPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClosedCaptionPropertiesStatics>
{
    IClosedCaptionPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};
}
