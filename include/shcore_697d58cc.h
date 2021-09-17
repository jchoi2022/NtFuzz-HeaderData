       
#include <objidl.h>
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STDAPI CreateRandomAccessStreamOnFile(_In_ PCWSTR filePath, _In_ DWORD accessMode, _In_ REFIID riid, _COM_Outptr_ void **ppv);
typedef enum
{
    BSOS_DEFAULT = 0,
    BSOS_PREFERDESTINATIONSTREAM
} BSOS_OPTIONS;
STDAPI CreateRandomAccessStreamOverStream(_In_ IStream *stream, _In_ BSOS_OPTIONS options, _In_ REFIID riid, _COM_Outptr_ void **ppv);
STDAPI CreateStreamOverRandomAccessStream(_In_ IUnknown *randomAccessStream, _In_ REFIID riid, _COM_Outptr_ void **ppv);
namespace Windows {
    namespace Storage {
        namespace Streams {
            interface class IRandomAccessStream;
        }
    }
}
__inline HRESULT CreateStreamOverRandomAccessStream(_In_ ::Windows::Storage::Streams::IRandomAccessStream ^randomAccessStream, _In_ REFIID riid, _COM_Outptr_ void **ppv)
{
    return CreateStreamOverRandomAccessStream(reinterpret_cast<IUnknown *>(randomAccessStream), riid, ppv);
}
#endif
#pragma endregion
