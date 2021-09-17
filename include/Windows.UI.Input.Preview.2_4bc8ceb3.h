       
#include "winrt/impl/Windows.UI.Input.1.h"
#include "winrt/impl/Windows.UI.WindowManagement.1.h"
#include "winrt/impl/Windows.UI.Input.Preview.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview {
}
namespace winrt::impl {
}
WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview {
struct InputActivationListenerPreview
{
    InputActivationListenerPreview() = delete;
    static Windows::UI::Input::InputActivationListener CreateForApplicationWindow(Windows::UI::WindowManagement::AppWindow const& window);
};
}
