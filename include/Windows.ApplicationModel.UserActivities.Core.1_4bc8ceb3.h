       
#include "winrt/impl/Windows.ApplicationModel.UserActivities.0.h"
#include "winrt/impl/Windows.ApplicationModel.UserActivities.Core.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities::Core {
struct WINRT_EBO ICoreUserActivityManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreUserActivityManagerStatics>
{
    ICoreUserActivityManagerStatics(std::nullptr_t = nullptr) noexcept {}
};
}
