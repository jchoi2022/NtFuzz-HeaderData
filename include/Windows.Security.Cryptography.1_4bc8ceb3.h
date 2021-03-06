       
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Security.Cryptography.0.h"
WINRT_EXPORT namespace winrt::Windows::Security::Cryptography {
struct WINRT_EBO ICryptographicBufferStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICryptographicBufferStatics>
{
    ICryptographicBufferStatics(std::nullptr_t = nullptr) noexcept {}
};
}
