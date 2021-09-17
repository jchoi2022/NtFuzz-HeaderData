#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <pshpack4.h>
#pragma warning(disable:4214)
#pragma warning(disable:4121)
                      VDMCONTEXT_SEGMENTS)
typedef struct _CONTEXT VDMCONTEXT;
typedef struct _LDT_ENTRY VDMLDT_ENTRY;
typedef struct _VDMCONTEXT_WITHOUT_XSAVE {
    ULONG ContextFlags;
    ULONG Dr0;
    ULONG Dr1;
    ULONG Dr2;
    ULONG Dr3;
    ULONG Dr6;
    ULONG Dr7;
    FLOATING_SAVE_AREA FloatSave;
    ULONG SegGs;
    ULONG SegFs;
    ULONG SegEs;
    ULONG SegDs;
    ULONG Edi;
    ULONG Esi;
    ULONG Ebx;
    ULONG Edx;
    ULONG Ecx;
    ULONG Eax;
    ULONG Ebp;
    ULONG Eip;
    ULONG SegCs;
    ULONG EFlags;
    ULONG Esp;
    ULONG SegSs;
} VDMCONTEXT_WITHOUT_XSAVE;
typedef VDMCONTEXT *LPVDMCONTEXT;
typedef VDMLDT_ENTRY *LPVDMLDT_ENTRY;
typedef VDMLDT_ENTRY *PVDMLDT_ENTRY;
typedef PVDMLDT_ENTRY *PPVDMLDT_ENTRY;
#include <poppack.h>
#endif
#pragma endregion
}
