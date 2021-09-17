       
extern "C" {
VOID
WdmlibProcgrpInitialize (
    VOID
    );
ULONG
WdmlibKeGetCurrentProcessorNumberEx (
    _Out_opt_ PPROCESSOR_NUMBER ProcNumber
    );
ULONG
WdmlibKeQueryActiveProcessorCountEx (
    _In_ USHORT GroupNumber
    );
ULONG
WdmlibKeQueryMaximumProcessorCountEx (
    _In_ USHORT GroupNumber
    );
ULONG
WdmlibKeQueryMaximumProcessorCount (
    VOID
    );
KAFFINITY
WdmlibKeQueryGroupAffinity (
    _In_ USHORT GroupNumber
    );
USHORT
WdmlibKeQueryActiveGroupCount (
    VOID
    );
USHORT
WdmlibKeQueryMaximumGroupCount (
    VOID
    );
NTSTATUS
WdmlibKeGetProcessorNumberFromIndex (
    _In_ ULONG ProcIndex,
    _Out_ PPROCESSOR_NUMBER ProcNumber
    );
ULONG
WdmlibKeGetProcessorIndexFromNumber (
    _In_ PPROCESSOR_NUMBER ProcNumber
    );
KAFFINITY
WdmlibKeSetSystemAffinityThreadEx (
    _In_ KAFFINITY Affinity
    );
VOID
WdmlibKeSetSystemGroupAffinityThread (
    _In_ PGROUP_AFFINITY NewAffinity,
    _Out_opt_ PGROUP_AFFINITY PreviousAffinity
    );
VOID
WdmlibKeRevertToUserAffinityThreadEx (
    _In_ KAFFINITY Affinity
    );
            WdmlibKeRevertToUserGroupAffinityThread
VOID
WdmlibKeRevertToUserGroupAffinityThread (
    _In_ PGROUP_AFFINITY PreviousAffinity
    );
NTSTATUS
WdmlibKeSetTargetProcessorDpcEx (
    _Inout_ PKDPC Dpc,
    _In_ PPROCESSOR_NUMBER ProcNumber
    );
}
