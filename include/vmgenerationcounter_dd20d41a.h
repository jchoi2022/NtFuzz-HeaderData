       
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(GUID_DEVINTERFACE_VM_GENCOUNTER,
0x3ff2c92b, 0x6598, 0x4e60, 0x8e, 0x1c, 0x0c, 0xcf, 0x49, 0x27, 0xe3, 0x19);
typedef struct _VM_GENCOUNTER
{
    ULONGLONG GenerationCount;
    ULONGLONG GenerationCountHigh;
} VM_GENCOUNTER, *PVM_GENCOUNTER;
#endif
#pragma endregion
