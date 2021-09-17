#include <winapifamily.h>
       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef VOID* NTPROP;
#include <propidl.h>
EXTERN_C
_Success_(TRUE)
ULONG __stdcall
StgPropertyLengthAsVariant(
            _In_reads_bytes_(cbProp) const SERIALIZEDPROPERTYVALUE* pProp,
            _In_ ULONG cbProp,
            _In_ USHORT CodePage,
            _Reserved_ BYTE bReserved);
}
#endif
#pragma endregion
