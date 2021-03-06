       
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Gaming.UI.1.h"
WINRT_EXPORT namespace winrt::Windows::Gaming::UI {
}
namespace winrt::impl {
}
WINRT_EXPORT namespace winrt::Windows::Gaming::UI {
struct GameBar
{
    GameBar() = delete;
    static winrt::event_token VisibilityChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using VisibilityChanged_revoker = impl::factory_event_revoker<Windows::Gaming::UI::IGameBarStatics, &impl::abi_t<Windows::Gaming::UI::IGameBarStatics>::remove_VisibilityChanged>;
    static VisibilityChanged_revoker VisibilityChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void VisibilityChanged(winrt::event_token const& token);
    static winrt::event_token IsInputRedirectedChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using IsInputRedirectedChanged_revoker = impl::factory_event_revoker<Windows::Gaming::UI::IGameBarStatics, &impl::abi_t<Windows::Gaming::UI::IGameBarStatics>::remove_IsInputRedirectedChanged>;
    static IsInputRedirectedChanged_revoker IsInputRedirectedChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void IsInputRedirectedChanged(winrt::event_token const& token);
    static bool Visible();
    static bool IsInputRedirected();
};
struct WINRT_EBO GameChatMessageReceivedEventArgs :
    Windows::Gaming::UI::IGameChatMessageReceivedEventArgs
{
    GameChatMessageReceivedEventArgs(std::nullptr_t) noexcept {}
};
struct WINRT_EBO GameChatOverlay :
    Windows::Gaming::UI::IGameChatOverlay
{
    GameChatOverlay(std::nullptr_t) noexcept {}
    static Windows::Gaming::UI::GameChatOverlay GetDefault();
};
struct WINRT_EBO GameChatOverlayMessageSource :
    Windows::Gaming::UI::IGameChatOverlayMessageSource
{
    GameChatOverlayMessageSource(std::nullptr_t) noexcept {}
    GameChatOverlayMessageSource();
};
struct WINRT_EBO GameUIProviderActivatedEventArgs :
    Windows::Gaming::UI::IGameUIProviderActivatedEventArgs
{
    GameUIProviderActivatedEventArgs(std::nullptr_t) noexcept {}
};
}
