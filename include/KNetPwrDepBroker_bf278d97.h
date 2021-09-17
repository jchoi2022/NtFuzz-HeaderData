       
extern "C" {
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
NpdBrokerInitialize(
ULONG ulClientID,
OUT PHANDLE phBroker
);
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
NpdBrokerUninitialize(
IN HANDLE hBroker
);
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
NpdBrokerAcquireWithTimeout(
IN HANDLE hBroker,
LONG lTimeoutMS
);
}
