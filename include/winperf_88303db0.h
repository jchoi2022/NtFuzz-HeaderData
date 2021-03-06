#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <pshpack8.h>
typedef struct _PERF_DATA_BLOCK {
    WCHAR Signature[4];
    DWORD LittleEndian;
    DWORD Version;
    DWORD Revision;
    DWORD TotalByteLength;
    DWORD HeaderLength;
    DWORD NumObjectTypes;
    LONG DefaultObject;
    SYSTEMTIME SystemTime;
    LARGE_INTEGER PerfTime;
    LARGE_INTEGER PerfFreq;
    LARGE_INTEGER PerfTime100nSec;
    DWORD SystemNameLength;
    DWORD SystemNameOffset;
} PERF_DATA_BLOCK, *PPERF_DATA_BLOCK;
typedef struct _PERF_OBJECT_TYPE {
    DWORD TotalByteLength;
    DWORD DefinitionLength;
    DWORD HeaderLength;
    DWORD ObjectNameTitleIndex;
    DWORD ObjectNameTitle;
    DWORD ObjectHelpTitleIndex;
    DWORD ObjectHelpTitle;
    DWORD DetailLevel;
    DWORD NumCounters;
    LONG DefaultCounter;
    LONG NumInstances;
    DWORD CodePage;
    LARGE_INTEGER PerfTime;
    LARGE_INTEGER PerfFreq;
} PERF_OBJECT_TYPE, *PPERF_OBJECT_TYPE;
            (PERF_SIZE_DWORD | PERF_TYPE_COUNTER | PERF_COUNTER_RATE |\
            PERF_TIMER_TICK | PERF_DELTA_COUNTER | PERF_DISPLAY_PER_SEC)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_RATE |\
            PERF_TIMER_TICK | PERF_DELTA_COUNTER | PERF_DISPLAY_PERCENT)
            (PERF_SIZE_DWORD | PERF_TYPE_COUNTER | PERF_COUNTER_QUEUELEN |\
            PERF_TIMER_TICK | PERF_DELTA_COUNTER | PERF_DISPLAY_NO_SUFFIX)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_QUEUELEN |\
            PERF_TIMER_TICK | PERF_DELTA_COUNTER | PERF_DISPLAY_NO_SUFFIX)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_QUEUELEN |\
            PERF_TIMER_100NS | PERF_DELTA_COUNTER | PERF_DISPLAY_NO_SUFFIX)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_QUEUELEN |\
            PERF_OBJECT_TIMER | PERF_DELTA_COUNTER | PERF_DISPLAY_NO_SUFFIX)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_RATE |\
            PERF_TIMER_TICK | PERF_DELTA_COUNTER | PERF_DISPLAY_PER_SEC)
            (PERF_SIZE_VARIABLE_LEN | PERF_TYPE_TEXT | PERF_TEXT_UNICODE |\
            PERF_DISPLAY_NO_SUFFIX)
            (PERF_SIZE_DWORD | PERF_TYPE_NUMBER | PERF_NUMBER_DECIMAL |\
            PERF_DISPLAY_NO_SUFFIX)
            (PERF_SIZE_LARGE | PERF_TYPE_NUMBER | PERF_NUMBER_DECIMAL |\
            PERF_DISPLAY_NO_SUFFIX)
            (PERF_SIZE_DWORD | PERF_TYPE_NUMBER | PERF_NUMBER_HEX |\
            PERF_DISPLAY_NO_SUFFIX)
            (PERF_SIZE_LARGE | PERF_TYPE_NUMBER | PERF_NUMBER_HEX |\
            PERF_DISPLAY_NO_SUFFIX)
            (PERF_SIZE_DWORD | PERF_TYPE_COUNTER | PERF_COUNTER_FRACTION |\
            PERF_DELTA_COUNTER | PERF_DELTA_BASE | PERF_DISPLAY_PERCENT)
            (PERF_SIZE_DWORD | PERF_TYPE_COUNTER | PERF_COUNTER_RATE |\
            PERF_TIMER_TICK | PERF_DELTA_COUNTER | PERF_DISPLAY_NO_SUFFIX)
            (PERF_SIZE_ZERO | PERF_DISPLAY_NOSHOW)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_RATE |\
            PERF_TIMER_TICK | PERF_DELTA_COUNTER | PERF_INVERSE_COUNTER | \
            PERF_DISPLAY_PERCENT)
            (PERF_SIZE_DWORD | PERF_TYPE_COUNTER | PERF_COUNTER_BASE |\
            PERF_DISPLAY_NOSHOW |\
            0x00000001)
            (PERF_SIZE_DWORD | PERF_TYPE_COUNTER | PERF_COUNTER_FRACTION |\
            PERF_DISPLAY_SECONDS)
            (PERF_SIZE_DWORD | PERF_TYPE_COUNTER | PERF_COUNTER_BASE |\
            PERF_DISPLAY_NOSHOW |\
            0x00000002)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_FRACTION |\
            PERF_DISPLAY_NOSHOW)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_RATE |\
             PERF_OBJECT_TIMER | PERF_DELTA_COUNTER | PERF_DISPLAY_PERCENT)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_RATE |\
            PERF_TIMER_100NS | PERF_DELTA_COUNTER | PERF_DISPLAY_PERCENT)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_RATE |\
            PERF_TIMER_100NS | PERF_DELTA_COUNTER | PERF_INVERSE_COUNTER |\
            PERF_DISPLAY_PERCENT)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_RATE |\
            PERF_DELTA_COUNTER | PERF_TIMER_TICK | PERF_MULTI_COUNTER |\
            PERF_DISPLAY_PERCENT)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_RATE |\
            PERF_DELTA_COUNTER | PERF_MULTI_COUNTER | PERF_TIMER_TICK |\
            PERF_INVERSE_COUNTER | PERF_DISPLAY_PERCENT)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_BASE |\
            PERF_MULTI_COUNTER | PERF_DISPLAY_NOSHOW)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_DELTA_COUNTER |\
            PERF_COUNTER_RATE | PERF_TIMER_100NS | PERF_MULTI_COUNTER |\
            PERF_DISPLAY_PERCENT)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_DELTA_COUNTER |\
            PERF_COUNTER_RATE | PERF_TIMER_100NS | PERF_MULTI_COUNTER |\
            PERF_INVERSE_COUNTER | PERF_DISPLAY_PERCENT)
            (PERF_SIZE_DWORD | PERF_TYPE_COUNTER | PERF_COUNTER_FRACTION |\
            PERF_DISPLAY_PERCENT)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_FRACTION |\
            PERF_DISPLAY_PERCENT)
            (PERF_SIZE_DWORD | PERF_TYPE_COUNTER | PERF_COUNTER_BASE |\
            PERF_DISPLAY_NOSHOW |\
            0x00000003)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_BASE |\
            PERF_DISPLAY_NOSHOW )
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_ELAPSED |\
            PERF_OBJECT_TIMER | PERF_DISPLAY_SECONDS)
            (PERF_SIZE_DWORD | PERF_TYPE_COUNTER | PERF_COUNTER_VALUE |\
            PERF_DELTA_COUNTER | PERF_DISPLAY_NO_SUFFIX)
            (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_VALUE |\
            PERF_DELTA_COUNTER | PERF_DISPLAY_NO_SUFFIX)
        (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_PRECISION | \
         PERF_TIMER_TICK | PERF_DELTA_COUNTER | PERF_DISPLAY_PERCENT )
        (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_PRECISION | \
         PERF_TIMER_100NS | PERF_DELTA_COUNTER | PERF_DISPLAY_PERCENT )
        (PERF_SIZE_LARGE | PERF_TYPE_COUNTER | PERF_COUNTER_PRECISION | \
         PERF_OBJECT_TIMER | PERF_DELTA_COUNTER | PERF_DISPLAY_PERCENT )
typedef struct _PERF_COUNTER_DEFINITION {
    DWORD ByteLength;
    DWORD CounterNameTitleIndex;
    DWORD CounterNameTitle;
    DWORD CounterHelpTitleIndex;
    DWORD CounterHelpTitle;
    LONG DefaultScale;
    DWORD DetailLevel;
    DWORD CounterType;
    DWORD CounterSize;
    DWORD CounterOffset;
} PERF_COUNTER_DEFINITION, *PPERF_COUNTER_DEFINITION;
typedef struct _PERF_INSTANCE_DEFINITION {
    DWORD ByteLength;
    DWORD ParentObjectTitleIndex;
    DWORD ParentObjectInstance;
    LONG UniqueID;
    DWORD NameOffset;
    DWORD NameLength;
} PERF_INSTANCE_DEFINITION, *PPERF_INSTANCE_DEFINITION;
typedef struct _PERF_COUNTER_BLOCK {
    DWORD ByteLength;
} PERF_COUNTER_BLOCK, *PPERF_COUNTER_BLOCK;
typedef DWORD (APIENTRY PM_OPEN_PROC) (_In_opt_ LPWSTR);
typedef DWORD (APIENTRY PM_COLLECT_PROC) (_In_opt_ LPWSTR lpValueName,
                                          _Inout_
                                            _At_(*lppData, _Pre_writable_byte_size_(*lpcbTotalBytes) _Post_writable_byte_size_(*lpcbTotalBytes))
                                            _At_(_Old_(*lppData), _Post_writable_byte_size_(*lpcbTotalBytes))
                                                  LPVOID *lppData,
                                          _Inout_ LPDWORD lpcbTotalBytes,
                                          _Inout_ LPDWORD lpNumObjectTypes);
typedef DWORD (APIENTRY PM_CLOSE_PROC) (void);
typedef DWORD (APIENTRY PM_QUERY_PROC) (LPDWORD, LPVOID *, LPDWORD, LPDWORD);
#include <poppack.h>
#endif
#pragma endregion
