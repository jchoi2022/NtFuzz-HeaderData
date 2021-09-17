       
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Security.Cryptography.DataProtection.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::DataProtection {
}
namespace winrt::impl {
}
WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::DataProtection {
struct WINRT_EBO DataProtectionProvider :
    Windows::Security::Cryptography::DataProtection::IDataProtectionProvider
{
    DataProtectionProvider(std::nullptr_t) noexcept {}
    DataProtectionProvider();
    DataProtectionProvider(param::hstring const& protectionDescriptor);
};
}
