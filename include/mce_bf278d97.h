       
typedef enum {
    HAL_MCE_RECORD,
    HAL_MCA_RECORD
} MCA_EXCEPTION_TYPE;
typedef union _MCI_ADDR{
    struct {
        ULONG Address;
        ULONG Reserved;
    } DUMMYSTRUCTNAME;
    ULONGLONG QuadPart;
} MCI_ADDR, *PMCI_ADDR;
typedef union _MCI_STATS {
    struct {
        USHORT McaCod;
        USHORT ModelErrorCode;
        ULONG OtherInfo : 25;
        ULONG Damage : 1;
        ULONG AddressValid : 1;
        ULONG MiscValid : 1;
        ULONG Enabled : 1;
        ULONG Uncorrected : 1;
        ULONG OverFlow : 1;
        ULONG Valid : 1;
    } MciStatus;
    ULONG64 QuadPart;
} MCI_STATS, *PMCI_STATS;
typedef struct _MCA_EXCEPTION {
    ULONG VersionNumber;
    MCA_EXCEPTION_TYPE ExceptionType;
    LARGE_INTEGER TimeStamp;
    ULONG ProcessorNumber;
    ULONG Reserved1;
    union {
        struct {
            UCHAR BankNumber;
            UCHAR Reserved2[7];
            MCI_STATS Status;
            MCI_ADDR Address;
            ULONGLONG Misc;
        } Mca;
        struct {
            ULONGLONG Address;
            ULONGLONG Type;
        } Mce;
    } u;
    ULONG ExtCnt;
    ULONG Reserved3;
    ULONGLONG ExtReg[MCA_EXTREG_V2MAX];
} MCA_EXCEPTION, *PMCA_EXCEPTION;
typedef MCA_EXCEPTION CMC_EXCEPTION, *PCMC_EXCEPTION;
typedef MCA_EXCEPTION CPE_EXCEPTION, *PCPE_EXCEPTION;
typedef UCHAR ERROR_SEVERITY, *PERROR_SEVERITY;
typedef enum _ERROR_SEVERITY_VALUE {
    ErrorRecoverable = 0,
    ErrorFatal = 1,
    ErrorCorrected = 2,
    ErrorOthers = 3,
} ERROR_SEVERITY_VALUE;
