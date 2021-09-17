#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
#include <wdm.h>
}
#include <windef.h>
#include <basetyps.h>
#include <initguid.h>
DEFINE_GUID(IID_IUnknown,
0x00000000, 0x0000, 0x0000, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DECLARE_INTERFACE(IUnknown)
{
    STDMETHOD(QueryInterface)
    ( THIS_
        IN REFIID,
        OUT PVOID *
    ) PURE;
    STDMETHOD_(ULONG,AddRef)
    ( THIS
    ) PURE;
    STDMETHOD_(ULONG,Release)
    ( THIS
    ) PURE;
};
typedef IUnknown *PUNKNOWN;
typedef
HRESULT
(*PFNCREATEINSTANCE)
(
    OUT PUNKNOWN * Unknown,
    IN REFCLSID ClassId,
    IN PUNKNOWN OuterUnknown,
    IN POOL_TYPE PoolType
);
#endif
#pragma endregion
