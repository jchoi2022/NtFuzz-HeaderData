       
#include "winrt/impl/Windows.ApplicationModel.UserActivities.1.h"
#include "winrt/impl/Windows.ApplicationModel.UserActivities.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities::Core {
}
namespace winrt::impl {
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities::Core {
struct CoreUserActivityManager
{
    CoreUserActivityManager() = delete;
    static Windows::ApplicationModel::UserActivities::UserActivitySession CreateUserActivitySessionInBackground(Windows::ApplicationModel::UserActivities::UserActivity const& activity);
    static Windows::Foundation::IAsyncAction DeleteUserActivitySessionsInTimeRangeAsync(Windows::ApplicationModel::UserActivities::UserActivityChannel const& channel, Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime);
};
}
