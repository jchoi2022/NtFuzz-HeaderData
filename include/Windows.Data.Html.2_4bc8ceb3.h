       
#include "winrt/impl/Windows.Data.Html.1.h"
WINRT_EXPORT namespace winrt::Windows::Data::Html {
}
namespace winrt::impl {
}
WINRT_EXPORT namespace winrt::Windows::Data::Html {
struct HtmlUtilities
{
    HtmlUtilities() = delete;
    static hstring ConvertToText(param::hstring const& html);
};
}
