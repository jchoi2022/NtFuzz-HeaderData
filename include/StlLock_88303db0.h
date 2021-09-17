#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma prefast (push)
#pragma prefast (disable: 26135)
class CCritSec : public CRITICAL_SECTION
{
public:
    CCritSec()
    {
        InitializeCriticalSection(this);
    }
    ~CCritSec()
    {
        DeleteCriticalSection(this);
    }
    void Enter()
    {
        EnterCriticalSection(this);
    }
    void Leave()
    {
        LeaveCriticalSection(this);
    }
};
#pragma prefast (pop)
#endif
#pragma endregion
