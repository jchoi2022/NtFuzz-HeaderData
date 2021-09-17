       
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <apiset.h>
#include <apisetcconv.h>
#include <wtypesbase.h>
#include <hstring.h>
#include <activationregistration.h>
#include <sdkddkver.h>
typedef Windows::Foundation::IActivatableClassRegistration *PActivatableClassRegistration;
extern "C" {
ROAPI
_Check_return_
HRESULT
WINAPI
RoGetActivatableClassRegistration(
    _In_ HSTRING activatableClassId,
    _COM_Outptr_ PActivatableClassRegistration* activatableClassRegistration
    );
ROAPI
_On_failure_(_At_(*activatableClassIds, _Post_ _Null_))
_Check_return_
HRESULT
WINAPI
RoGetServerActivatableClasses(
    _In_ HSTRING serverName,
    _When_(return >= 0, _Outptr_result_buffer_(*count)) HSTRING** activatableClassIds,
    _Out_ DWORD* count
    );
}
namespace ABI
{
    namespace Windows
    {
        namespace Foundation
        {
            _Check_return_
            inline HRESULT GetActivatableClassRegistration(
                _In_ HSTRING activatableClassId,
                _COM_Outptr_ PActivatableClassRegistration *activatableClassRegistration
                )
            {
                return RoGetActivatableClassRegistration(activatableClassId, activatableClassRegistration);
            }
            _On_failure_(_At_(*activatableClassIds, _Post_ _Null_))
            _Check_return_
            inline HRESULT GetServerActivatableClasses(
                       _In_ HSTRING serverName,
                       _When_(return >= 0, _Outptr_result_buffer_(*count)) HSTRING **activatableClassIds,
                       _Out_ DWORD *count)
            {
                return RoGetServerActivatableClasses(serverName, activatableClassIds, count);
            }
        }
    }
}
