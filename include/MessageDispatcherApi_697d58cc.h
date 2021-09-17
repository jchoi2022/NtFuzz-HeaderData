#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <IMessageDispatcher.h>
typedef IMessageDispatcher *PMessageDispatcher;
extern "C"
{
WINOLEAPI_(void) CoSetMessageDispatcher(
    _In_opt_ PMessageDispatcher pMessageDispatcher);
WINOLEAPI_(void) CoHandlePriorityEventsFromMessagePump();
}
#endif
#pragma endregion
