#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct _SCHEDULE_HEADER {
    ULONG Type;
    ULONG Offset;
} SCHEDULE_HEADER, *PSCHEDULE_HEADER;
typedef struct _SCHEDULE {
    ULONG Size;
    ULONG Bandwidth;
    ULONG NumberOfSchedules;
    SCHEDULE_HEADER Schedules[1];
} SCHEDULE, *PSCHEDULE;
}
#endif
#pragma endregion
