       
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Perception.Automation.Core.0.h"
WINRT_EXPORT namespace winrt::Windows::Perception::Automation::Core {
struct WINRT_EBO ICorePerceptionAutomationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICorePerceptionAutomationStatics>
{
    ICorePerceptionAutomationStatics(std::nullptr_t = nullptr) noexcept {}
};
}
