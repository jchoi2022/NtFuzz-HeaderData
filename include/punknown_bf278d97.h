extern "C" {
#include <wdm.h>
}
#include <windef.h>
#include <basetyps.h>
#include <initguid.h>
DEFINE_GUID(IID_IUnknown,
0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x46);
DECLARE_INTERFACE(IUnknown)
{
    STDMETHOD_(NTSTATUS,QueryInterface)
    ( THIS_
        _In_ REFIID,
        _COM_Outptr_ PVOID *
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
    _Out_ PUNKNOWN * Unknown,
    _In_ REFCLSID ClassId,
    _In_ PUNKNOWN OuterUnknown,
    _In_ POOL_TYPE PoolType
);
