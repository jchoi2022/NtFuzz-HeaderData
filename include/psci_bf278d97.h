       
typedef union _PSCI_CPU_SUSPEND_POWER_STATE {
    ULONG AsUlong;
    struct {
        ULONG StateId : 16;
        ULONG StateType : 1;
        ULONG Reserved0 : 7;
        ULONG AffinityLevel : 2;
        ULONG Reserved1 : 6;
    };
} PSCI_CPU_SUSPEND_POWER_STATE, *PPSCI_CPU_SUSPEND_POWER_STATE;
typedef union _PSCI_CPU_SUSPEND_POWER_STATE_EXTENDED {
    ULONG AsUlong;
    struct {
        ULONG StateId : 28;
        ULONG Reserved0 : 2;
        ULONG StateType : 1;
        ULONG Reserved1 : 1;
    };
} PSCI_CPU_SUSPEND_POWER_STATE_EXTENDED, *PPSCI_CPU_SUSPEND_POWER_STATE_EXTENDED;
