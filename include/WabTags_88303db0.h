#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
    ((PROP_ID (ulPropTag) < (ULONG)0x0E00) || \
    (PROP_ID (ulPropTag) >= (ULONG)0x8000) || \
    ((PROP_ID (ulPropTag) >= (ULONG)0x1000) && (PROP_ID (ulPropTag) < (ULONG)0x6000)) || \
    ((PROP_ID (ulPropTag) >= (ULONG)0x6800) && (PROP_ID (ulPropTag) < (ULONG)0x7C00)))
enum Gender {
 genderUnspecified = 0,
 genderFemale,
 genderMale
};
#endif
#pragma endregion
