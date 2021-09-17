#include "punknown.h"
#pragma warning(push)
#pragma warning(disable:4595)
DECLARE_INTERFACE(INonDelegatingUnknown)
{
    STDMETHOD_(NTSTATUS,NonDelegatingQueryInterface)
    ( THIS_
        _In_ REFIID,
        _COM_Outptr_ PVOID *
    ) PURE;
    STDMETHOD_(ULONG,NonDelegatingAddRef)
    ( THIS
    ) PURE;
    STDMETHOD_(ULONG,NonDelegatingRelease)
    ( THIS
    ) PURE;
};
typedef INonDelegatingUnknown *PNONDELEGATINGUNKNOWN;
class CUnknown : public INonDelegatingUnknown
{
private:
    LONG m_lRefCount;
    PUNKNOWN m_pUnknownOuter;
public:
    CUnknown(PUNKNOWN pUnknownOuter);
        virtual ~CUnknown(void);
    PUNKNOWN GetOuterUnknown(void)
    {
        return m_pUnknownOuter;
    }
        STDMETHODIMP_(ULONG) NonDelegatingAddRef
    ( void
    );
        STDMETHODIMP_(ULONG) NonDelegatingRelease
    ( void
    );
    STDMETHODIMP_(NTSTATUS) NonDelegatingQueryInterface
        (
                _In_ REFIID rIID,
                _COM_Outptr_ PVOID * ppVoid
        );
};
    STDMETHODIMP_(NTSTATUS) NonDelegatingQueryInterface \
        ( \
                _In_ REFIID iid, \
                _COM_Outptr_ PVOID * ppvObject \
        ); \
    STDMETHODIMP_(NTSTATUS) QueryInterface(_In_ REFIID riid, _COM_Outptr_ void **ppv) \
    { \
        return GetOuterUnknown()->QueryInterface(riid,ppv); \
    }; \
    STDMETHODIMP_(ULONG) AddRef() \
    { \
        return GetOuterUnknown()->AddRef(); \
    }; \
    STDMETHODIMP_(ULONG) Release() \
    { \
        return GetOuterUnknown()->Release(); \
    };
    Class(PUNKNOWN pUnknownOuter) \
    : CUnknown(pUnknownOuter) \
    { \
    }
    PVOID((Type)(this))
    PVOID(PUNKNOWN((Type)(this)))
    NTSTATUS ntStatus; \
    Class *p = new(poolType,tag) Class(pUnknownOuter); \
    if (p) \
    { \
        *ppUnknown = PUNKNOWN((base)(p)); \
        (*ppUnknown)->AddRef(); \
        ntStatus = STATUS_SUCCESS; \
    } \
    else \
    { \
        ntStatus = STATUS_INSUFFICIENT_RESOURCES; \
    } \
    return ntStatus
    STD_CREATE_BODY_WITH_TAG_(Class,ppUnknown,pUnknownOuter,poolType,tag,PUNKNOWN)
    STD_CREATE_BODY_WITH_TAG_(Class,ppUnknown,pUnknownOuter,poolType,'rCcP',base)
    STD_CREATE_BODY_(Class,ppUnknown,pUnknownOuter,poolType,PUNKNOWN)
        
#pragma message(__FILE__ " WARNING: operator new and operator delete will be removed soon")
inline PVOID operator new
(
    size_t iSize,
    _When_((poolType & NonPagedPoolMustSucceed) != 0,
       __drv_reportError("Must succeed pool allocations are forbidden. "
    "Allocation failures cause a system crash"))
    POOL_TYPE poolType
)
{
    PVOID result = ExAllocatePoolWithTag(poolType,iSize,'wNcP');
    if (result)
    {
        RtlZeroMemory(result,iSize);
    }
    return result;
}
inline PVOID operator new
(
    size_t iSize,
    _When_((poolType & NonPagedPoolMustSucceed) != 0,
       __drv_reportError("Must succeed pool allocations are forbidden. "
    "Allocation failures cause a system crash"))
    POOL_TYPE poolType,
    ULONG tag
)
{
    PVOID result = ExAllocatePoolWithTag(poolType,iSize,tag);
    if (result)
    {
        RtlZeroMemory(result,iSize);
    }
    return result;
}
inline void __cdecl operator delete
(
    PVOID pVoid
)
{
    if (pVoid)
    {
        ExFreePool(pVoid);
    }
}
inline void __cdecl operator delete
(
    PVOID pVoid,
    ULONG tag
)
{
    if (pVoid)
    {
        ExFreePoolWithTag(pVoid,tag);
    }
}
inline void __cdecl operator delete
(
    _Pre_maybenull_ __drv_freesMem(Mem) PVOID pVoid,
    _In_ size_t cbSize
)
{
    UNREFERENCED_PARAMETER(cbSize);
    if (pVoid)
    {
        ExFreePool(pVoid);
    }
}
inline void __cdecl operator delete[]
(
    _Pre_maybenull_ __drv_freesMem(Mem) PVOID pVoid
)
{
    if (pVoid)
    {
        ExFreePool(pVoid);
    }
}
inline void __cdecl operator delete[]
(
    _Pre_maybenull_ __drv_freesMem(Mem) PVOID pVoid,
    _In_ size_t cbSize
)
{
    UNREFERENCED_PARAMETER(cbSize);
    if (pVoid)
    {
        ExFreePool(pVoid);
    }
}
#pragma warning(pop)
