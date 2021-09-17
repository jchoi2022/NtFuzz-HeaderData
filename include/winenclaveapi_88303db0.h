extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI
EnclaveGetAttestationReport(
    _In_opt_ const UINT8 EnclaveData[ENCLAVE_REPORT_DATA_LENGTH],
    _Out_writes_bytes_to_opt_(BufferSize, *OutputSize) PVOID Report,
    _In_ UINT32 BufferSize,
    _Out_ UINT32 *OutputSize
    );
STDAPI
EnclaveVerifyAttestationReport(
    _In_ UINT32 EnclaveType,
    _In_reads_bytes_(ReportSize) const VOID *Report,
    _In_ UINT32 ReportSize
    );
STDAPI
EnclaveSealData(
    _In_reads_bytes_(DataToEncryptSize) const VOID *DataToEncrypt,
    _In_ UINT32 DataToEncryptSize,
    _In_ ENCLAVE_SEALING_IDENTITY_POLICY IdentityPolicy,
    _In_ UINT32 RuntimePolicy,
    _Out_writes_bytes_to_opt_(BufferSize, ProtectedBlobSize) PVOID ProtectedBlob,
    _In_ UINT32 BufferSize,
    _Out_ UINT32 *ProtectedBlobSize
    );
STDAPI
EnclaveUnsealData(
    _In_reads_bytes_(ProtectedBlobSize) const VOID *ProtectedBlob,
    _In_ UINT32 ProtectedBlobSize,
    _Out_writes_bytes_to_opt_(BufferSize, DecryptedDataSize) PVOID DecryptedData,
    _In_ UINT32 BufferSize,
    _Out_ UINT32 *DecryptedDataSize,
    _Out_opt_ ENCLAVE_IDENTITY *SealingIdentity,
    _Out_opt_ UINT32 *UnsealingFlags
    );
STDAPI
EnclaveGetEnclaveInformation(
    _In_ UINT32 InformationSize,
    _Out_writes_bytes_(InformationSize) ENCLAVE_INFORMATION *EnclaveInformation
    );
#endif
#pragma endregion
}
