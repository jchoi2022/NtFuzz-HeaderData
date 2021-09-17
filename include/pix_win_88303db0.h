       
#include <utility>
namespace DirectX
{
    namespace Detail
    {
        static const UINT PIX_EVENT_UNICODE_VERSION = 0;
        static const UINT PIX_EVENT_ANSI_VERSION = 1;
        static const size_t PIX_STRING_BUFFER_COUNT = 1024;
    }
}
inline void PIXSetMarker(UINT64 , PCWSTR , ...)
{
}
inline void PIXSetMarker(UINT64 , PCSTR , ...)
{
}
inline void PIXBeginEvent(UINT64 , PCWSTR , ...)
{
}
inline void PIXBeginEvent(UINT64 , PCSTR , ...)
{
}
inline void PIXEndEvent()
{
}
