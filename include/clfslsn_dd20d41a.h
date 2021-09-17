#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef UINT32 CLFS_RECORD_INDEX;
typedef union _CLS_LSN
{
    struct
    {
       CLFS_RECORD_INDEX idxRecord;
       CLFS_CONTAINER_ID cidContainer;
    } offset;
    __volatile ULONGLONG ullOffset;
} CLS_LSN, *PCLS_LSN, **PPCLS_LSN;
typedef CLS_LSN CLFS_LSN;
typedef CLFS_LSN *PCLFS_LSN, **PPCLFS_LSN;
#endif
#pragma endregion
