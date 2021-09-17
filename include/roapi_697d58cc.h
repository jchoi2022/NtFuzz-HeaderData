       
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <apiset.h>
#include <apisetcconv.h>
#include <wtypesbase.h>
#include <inspectable.h>
#include <combaseapi.h>
#include <activation.h>
#include <hstring.h>
extern "C" {
typedef enum RO_INIT_TYPE
{
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
    RO_INIT_SINGLETHREADED = 0,
#endif
    RO_INIT_MULTITHREADED = 1,
} RO_INIT_TYPE;
typedef struct {} *RO_REGISTRATION_COOKIE;
typedef HRESULT (STDAPICALLTYPE * PFNGETACTIVATIONFACTORY)(HSTRING, IActivationFactory **);
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
ROAPI
_Check_return_
HRESULT
WINAPI
RoInitialize(
    _In_ RO_INIT_TYPE initType
    );
ROAPI
void
WINAPI
RoUninitialize(
    );
ROAPI
_Check_return_
HRESULT
WINAPI
RoActivateInstance(
    _In_ HSTRING activatableClassId,
    _COM_Outptr_ IInspectable** instance
    );
ROAPI
_Check_return_
HRESULT
WINAPI
RoRegisterActivationFactories(
    _In_reads_(count) HSTRING* activatableClassIds,
    _In_reads_(count) PFNGETACTIVATIONFACTORY* activationFactoryCallbacks,
    _In_ UINT32 count,
    _Out_ RO_REGISTRATION_COOKIE* cookie
    );
ROAPI
void
WINAPI
RoRevokeActivationFactories(
    _In_ RO_REGISTRATION_COOKIE cookie
    );
ROAPI
_Check_return_
HRESULT
WINAPI
RoGetActivationFactory(
    _In_ HSTRING activatableClassId,
    _In_ REFIID iid,
    _COM_Outptr_ void** factory
    );
typedef interface IApartmentShutdown IApartmentShutdown;
DECLARE_HANDLE(APARTMENT_SHUTDOWN_REGISTRATION_COOKIE);
ROAPI
_Check_return_
HRESULT
WINAPI
RoRegisterForApartmentShutdown(
    _In_ IApartmentShutdown* callbackObject,
    _Out_ UINT64* apartmentIdentifier,
    _Out_ APARTMENT_SHUTDOWN_REGISTRATION_COOKIE* regCookie
    );
ROAPI
_Check_return_
HRESULT
WINAPI
RoUnregisterForApartmentShutdown(
    _In_ APARTMENT_SHUTDOWN_REGISTRATION_COOKIE regCookie
    );
ROAPI
_Check_return_
HRESULT
WINAPI
RoGetApartmentIdentifier(
    _Out_ UINT64* apartmentIdentifier
    );
#endif
#pragma endregion
}
namespace Windows
{
    namespace Foundation
    {
        _Check_return_
        __inline HRESULT Initialize(_In_ RO_INIT_TYPE initType
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
             = RO_INIT_SINGLETHREADED
#endif
            )
        {
            return RoInitialize(initType);
        }
        __inline void Uninitialize()
        {
            RoUninitialize();
        }
        template<class T>
        _Check_return_
        __inline HRESULT ActivateInstance(_In_ HSTRING activatableClassId,_COM_Outptr_ T** instance)
        {
            *instance = nullptr;
            IInspectable* pInspectable;
            HRESULT hr = RoActivateInstance(activatableClassId, &pInspectable);
            if (SUCCEEDED(hr))
            {
                if (__uuidof(T) == __uuidof(IInspectable))
                {
                    *instance = static_cast<T*>(pInspectable);
                }
                else
                {
                    hr = pInspectable->QueryInterface(IID_INS_ARGS(instance));
                    pInspectable->Release();
                }
            }
            return hr;
        }
        _Check_return_
        __inline HRESULT RegisterActivationFactories(
                _In_reads_(count) HSTRING* activatableClassIds,
                _In_reads_(count) PFNGETACTIVATIONFACTORY* activationFactoryCallbacks,
                _In_ UINT32 count,
                _Out_ RO_REGISTRATION_COOKIE* cookie)
        {
            return RoRegisterActivationFactories(activatableClassIds, activationFactoryCallbacks, count, cookie);
        }
        __inline void RevokeActivationFactories(_In_ RO_REGISTRATION_COOKIE cookie)
        {
            RoRevokeActivationFactories(cookie);
        }
        template<class T>
        _Check_return_
        __inline HRESULT GetActivationFactory(
            _In_ HSTRING activatableClassId,
            _COM_Outptr_ T** factory)
        {
            return RoGetActivationFactory(activatableClassId, IID_INS_ARGS(factory));
        }
    }
}
namespace ABI
{
    namespace Windows
    {
        namespace Foundation
        {
            _Check_return_
            __inline HRESULT Initialize(_In_ RO_INIT_TYPE initType
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
                 = RO_INIT_SINGLETHREADED
#endif
                )
            {
                return RoInitialize(initType);
            }
            __inline void Uninitialize()
            {
                RoUninitialize();
            }
            template<class T>
            _Check_return_
            __inline HRESULT ActivateInstance(_In_ HSTRING activatableClassId,_COM_Outptr_ T** instance)
            {
                return ::Windows::Foundation::ActivateInstance(activatableClassId, instance);
            }
            _Check_return_
            __inline HRESULT RegisterActivationFactories(
                    _In_reads_(count) HSTRING* activatableClassIds,
                    _In_reads_(count) PFNGETACTIVATIONFACTORY* activationFactoryCallbacks,
                    _In_ UINT32 count,
                    _Out_ RO_REGISTRATION_COOKIE* cookie)
            {
                return RoRegisterActivationFactories(activatableClassIds, activationFactoryCallbacks, count, cookie);
            }
            __inline void RevokeActivationFactories(_In_ RO_REGISTRATION_COOKIE cookie)
            {
                RoRevokeActivationFactories(cookie);
            }
            template<class T>
            _Check_return_
            __inline HRESULT GetActivationFactory(
                _In_ HSTRING activatableClassId,
                _COM_Outptr_ T** factory)
            {
                return RoGetActivationFactory(activatableClassId, IID_INS_ARGS(factory));
            }
        }
    }
}
