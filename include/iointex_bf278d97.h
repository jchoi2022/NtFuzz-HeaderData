       
extern "C" {
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
WdmlibIoConnectInterruptEx (
    _Inout_ PIO_CONNECT_INTERRUPT_PARAMETERS Parameters
    );
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
WdmlibIoDisconnectInterruptEx (
    _Inout_ PIO_DISCONNECT_INTERRUPT_PARAMETERS Parameters
    );
NTSTATUS
WdmlibIoGetAffinityInterrupt (
    _In_ PKINTERRUPT InterruptObject,
    _Out_ PGROUP_AFFINITY GroupAffinity
    );
}
