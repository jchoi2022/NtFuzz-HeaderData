       
DEFINE_GUID(GUID_TREE_TPM_SERVICE,
    0x36deaa79, 0xc5dd, 0x447c, 0x95, 0xe6, 0xb3, 0x85, 0x95, 0x89, 0x29, 0x1a);
typedef struct _TPM_INVOKE_GENERIC_IN {
    ULONG64 Flags;
} TPM_INVOKE_GENERIC_IN, *PTPM_INVOKE_GENERIC_IN;
typedef struct _TPM_INVOKE_GENERIC_OUT {
    NTSTATUS Status;
} TPM_INVOKE_GENERIC_OUT, *PTPM_INVOKE_GENERIC_OUT;
