#include <ntddk.h>
typedef enum _FILTER_DUMP_TYPE {
    DumpTypeUndefined,
    DumpTypeCrashdump,
    DumpTypeHibernation
} FILTER_DUMP_TYPE, *PFILTER_DUMP_TYPE;
typedef enum _FILTER_CALLBACK {
    CallbackDumpInit,
    CallbackDumpStart,
    CallbackDumpWrite,
    CallbackDumpFinish,
    CallbackDumpRead,
    CallbackMaxCallback
} FILTER_CALLBACK, *PFILTER_CALLBACK;
typedef struct _FILTER_EXTENSION {
    FILTER_DUMP_TYPE DumpType;
    PDEVICE_OBJECT DeviceObject;
    DISK_GEOMETRY Geometry;
    LARGE_INTEGER DiskSize;
    DISK_PARTITION_INFO PartitionInfo;
    PVOID DumpData;
    ULONG Size;
    ULONG Flags;
} FILTER_EXTENSION, *PFILTER_EXTENSION;
typedef
NTSTATUS
DUMP_START (
    _In_ PFILTER_EXTENSION FilterExtension
    );
typedef DUMP_START *PDUMP_START;
typedef
NTSTATUS
DUMP_WRITE (
    _In_ PFILTER_EXTENSION FilterExtension,
    _Inout_ PLARGE_INTEGER DiskByteOffset,
    _Inout_ PMDL Mdl
    );
typedef DUMP_WRITE *PDUMP_WRITE;
typedef
NTSTATUS
DUMP_FINISH (
    _In_ PFILTER_EXTENSION FilterExtension
    );
typedef DUMP_FINISH *PDUMP_FINISH;
typedef
NTSTATUS
DUMP_UNLOAD (
    _In_ PFILTER_EXTENSION FilterExtension
    );
typedef DUMP_UNLOAD *PDUMP_UNLOAD;
typedef
NTSTATUS
DUMP_READ (
    _In_ PFILTER_EXTENSION FilterExtension,
    _In_ PLARGE_INTEGER DiskByteOffset,
    _In_ PMDL Mdl
    );
typedef DUMP_READ *PDUMP_READ;
typedef struct _FILTER_INITIALIZATION_DATA {
    ULONG MajorVersion;
    ULONG MinorVersion;
    PDUMP_START DumpStart;
    PDUMP_WRITE DumpWrite;
    PDUMP_FINISH DumpFinish;
    PDUMP_UNLOAD DumpUnload;
    PVOID DumpData;
    ULONG MaxPagesPerWrite;
    ULONG Flags;
    PDUMP_READ DumpRead;
} FILTER_INITIALIZATION_DATA, *PFILTER_INITIALIZATION_DATA;
