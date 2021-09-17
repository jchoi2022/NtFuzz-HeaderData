       
extern "C" {
typedef const BYTE * PCBYTE;
struct _ENTROPY_SOURCE_STATE;
typedef struct _ENTROPY_SOURCE_STATE * ENTROPY_SOURCE_HANDLE;
typedef enum{
    ENTROPY_SOURCE_TYPE_HIGH_PUSH = 1,
    ENTROPY_SOURCE_TYPE_LOW_PUSH = 2,
    ENTROPY_SOURCE_TYPE_HIGH_PULL = 3,
} ENTROPY_SOURCE_TYPE;
typedef NTSTATUS (*PENTROPY_SOURCE_CALLBACK_FUNCTION) (
    _In_ ENTROPY_SOURCE_HANDLE hEntropySource,
    _In_ PVOID context );
NTSTATUS
EntropyRegisterSource(
    _Out_ ENTROPY_SOURCE_HANDLE * phEntropySource,
            ENTROPY_SOURCE_TYPE entropySourceType,
    _In_ PCWSTR entropySourceName );
NTSTATUS
EntropyUnregisterSource( ENTROPY_SOURCE_HANDLE hEntropySource );
NTSTATUS
EntropyProvideData(
                            ENTROPY_SOURCE_HANDLE hEntropySource,
    _In_reads_bytes_( cbData ) PCBYTE pbData,
                            SIZE_T cbData,
                            ULONG entropyEstimateInMilliBits );
NTSTATUS
EntropyRegisterCallback(
            ENTROPY_SOURCE_HANDLE hEntropySource,
    _In_ PENTROPY_SOURCE_CALLBACK_FUNCTION pCallbackFunction,
            PVOID context );
VOID
EntropyPoolTriggerReseedForIum(BOOLEAN fPerformCallbacks);
}
