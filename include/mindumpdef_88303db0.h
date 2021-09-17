#pragma warning( disable : 4200 )
#pragma warning( disable : 4201 )
#include <minwindef.h>
typedef enum _DUMP_TYPES {
    DUMP_TYPE_INVALID = -1,
    DUMP_TYPE_UNKNOWN = 0,
    DUMP_TYPE_FULL = 1,
    DUMP_TYPE_SUMMARY = 2,
    DUMP_TYPE_HEADER = 3,
    DUMP_TYPE_TRIAGE = 4,
    DUMP_TYPE_BITMAP_FULL = 5,
    DUMP_TYPE_BITMAP_KERNEL = 6,
    DUMP_TYPE_AUTOMATIC = 7
} DUMP_TYPE;
typedef struct _PHYSICAL_MEMORY_RUN32 {
    ULONG BasePage;
    ULONG PageCount;
} PHYSICAL_MEMORY_RUN32, *PPHYSICAL_MEMORY_RUN32;
typedef struct _PHYSICAL_MEMORY_DESCRIPTOR32 {
    ULONG NumberOfRuns;
    ULONG NumberOfPages;
    PHYSICAL_MEMORY_RUN32 Run[1];
} PHYSICAL_MEMORY_DESCRIPTOR32, *PPHYSICAL_MEMORY_DESCRIPTOR32;
typedef struct _PHYSICAL_MEMORY_RUN64 {
    ULONG64 BasePage;
    ULONG64 PageCount;
} PHYSICAL_MEMORY_RUN64, *PPHYSICAL_MEMORY_RUN64;
typedef struct _PHYSICAL_MEMORY_DESCRIPTOR64 {
    ULONG NumberOfRuns;
    ULONG64 NumberOfPages;
    PHYSICAL_MEMORY_RUN64 Run[1];
} PHYSICAL_MEMORY_DESCRIPTOR64, *PPHYSICAL_MEMORY_DESCRIPTOR64;
typedef union _DUMP_FILE_ATTRIBUTES {
    struct {
        ULONG HiberCrash: 1;
        ULONG DumpDevicePowerOff: 1;
        ULONG InsufficientDumpfileSize: 1;
        ULONG KernelGeneratedTriageDump: 1;
        ULONG LiveDumpGeneratedDump: 1;
        ULONG DumpIsGeneratedOffline: 1;
        ULONG FilterDumpFile: 1;
        ULONG EarlyBootCrash: 1;
        ULONG EncryptedDumpData: 1;
        ULONG DecryptedDump: 1;
        ULONG ReservedFlags: 22;
    };
    ULONG Attributes;
} DUMP_FILE_ATTRIBUTES, *PDUMP_FILE_ATTRIBUTES;
typedef struct _DUMP_HEADER32 {
    ULONG Signature;
    ULONG ValidDump;
    ULONG MajorVersion;
    ULONG MinorVersion;
    ULONG DirectoryTableBase;
    ULONG PfnDataBase;
    ULONG PsLoadedModuleList;
    ULONG PsActiveProcessHead;
    ULONG MachineImageType;
    ULONG NumberProcessors;
    ULONG BugCheckCode;
    ULONG BugCheckParameter1;
    ULONG BugCheckParameter2;
    ULONG BugCheckParameter3;
    ULONG BugCheckParameter4;
    CHAR VersionUser[32];
    UCHAR PaeEnabled;
    UCHAR KdSecondaryVersion;
    UCHAR Spare3[2];
    ULONG KdDebuggerDataBlock;
    union {
        PHYSICAL_MEMORY_DESCRIPTOR32 PhysicalMemoryBlock;
        UCHAR PhysicalMemoryBlockBuffer [ DMP_PHYSICAL_MEMORY_BLOCK_SIZE_32 ];
    };
    UCHAR ContextRecord [ DMP_CONTEXT_RECORD_SIZE_32 ];
    EXCEPTION_RECORD32 Exception;
    CHAR Comment [ DMP_HEADER_COMMENT_SIZE ];
    DUMP_FILE_ATTRIBUTES Attributes;
    ULONG BootId;
    UCHAR _reserved0 [ DMP_RESERVED_0_SIZE_32 ];
    ULONG DumpType;
    ULONG MiniDumpFields;
    ULONG SecondaryDataState;
    ULONG ProductType;
    ULONG SuiteMask;
    ULONG WriterStatus;
    LARGE_INTEGER RequiredDumpSpace;
    UCHAR _reserved2 [ DMP_RESERVED_2_SIZE_32 ];
    LARGE_INTEGER SystemUpTime;
    LARGE_INTEGER SystemTime;
    UCHAR _reserved3 [ DMP_RESERVED_3_SIZE_32 ];
} DUMP_HEADER32, *PDUMP_HEADER32;
typedef struct _DUMP_HEADER64 {
    ULONG Signature;
    ULONG ValidDump;
    ULONG MajorVersion;
    ULONG MinorVersion;
    ULONG64 DirectoryTableBase;
    ULONG64 PfnDataBase;
    ULONG64 PsLoadedModuleList;
    ULONG64 PsActiveProcessHead;
    ULONG MachineImageType;
    ULONG NumberProcessors;
    ULONG BugCheckCode;
    ULONG64 BugCheckParameter1;
    ULONG64 BugCheckParameter2;
    ULONG64 BugCheckParameter3;
    ULONG64 BugCheckParameter4;
    CHAR VersionUser[32];
    ULONG64 KdDebuggerDataBlock;
    union {
        PHYSICAL_MEMORY_DESCRIPTOR64 PhysicalMemoryBlock;
        UCHAR PhysicalMemoryBlockBuffer [ DMP_PHYSICAL_MEMORY_BLOCK_SIZE_64 ];
    };
    UCHAR ContextRecord [ DMP_CONTEXT_RECORD_SIZE_64 ];
    EXCEPTION_RECORD64 Exception;
    ULONG DumpType;
    LARGE_INTEGER RequiredDumpSpace;
    LARGE_INTEGER SystemTime;
    CHAR Comment [ DMP_HEADER_COMMENT_SIZE ];
    LARGE_INTEGER SystemUpTime;
    ULONG MiniDumpFields;
    ULONG SecondaryDataState;
    ULONG ProductType;
    ULONG SuiteMask;
    ULONG WriterStatus;
    UCHAR Unused1;
    UCHAR KdSecondaryVersion;
    UCHAR Unused[2];
    DUMP_FILE_ATTRIBUTES Attributes;
    ULONG BootId;
    UCHAR _reserved0[ DMP_RESERVED_0_SIZE_64 ];
} DUMP_HEADER64, *PDUMP_HEADER64;
#pragma warning( default : 4200 )
