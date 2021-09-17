       
DEFINE_GUID(GUID_EFI_VARIABLE_SERVICE,
    0x699aa2f1, 0xa42e, 0x40df, 0xba, 0xbe, 0x3a, 0xaa, 0xd2, 0xbb, 0x6a, 0x47);
typedef ULONG_PTR EFI_VARIABLE_STATUS, *PEFI_VARIABLE_STATUS;
typedef struct _EFI_GET_VARIABLE_IN {
    GUID VendorGuid;
    CHAR16 VariableName[ANYSIZE_ARRAY];
} EFI_GET_VARIABLE_IN, *PEFI_GET_VARIABLE_IN;
typedef struct _EFI_GET_VARIABLE_OUT {
    EFI_VARIABLE_STATUS EfiStatus;
    ULONG Attributes;
    SIZE_T DataSize;
    BYTE Data[ANYSIZE_ARRAY];
} EFI_GET_VARIABLE_OUT, *PEFI_GET_VARIABLE_OUT;
typedef struct _EFI_GET_NEXT_VARIABLE_NAME_IN {
    GUID VendorGuid;
    CHAR16 VariableName[ANYSIZE_ARRAY];
} EFI_GET_NEXT_VARIABLE_NAME_IN, *PEFI_GET_NEXT_VARIABLE_NAME_IN;
typedef struct _EFI_GET_NEXT_VARIABLE_NAME_OUT {
    EFI_VARIABLE_STATUS EfiStatus;
    GUID VendorGuid;
    ULONG NameLength;
    CHAR16 VariableName[ANYSIZE_ARRAY];
} EFI_GET_NEXT_VARIABLE_NAME_OUT, *PEFI_GET_NEXT_VARIABLE_NAME_OUT;
typedef struct _EFI_SET_VARIABLE_IN {
    ULONG VariableNameOffset;
    GUID VendorGuid;
    ULONG Attributes;
    SIZE_T DataSize;
    ULONG DataOffset;
    BYTE Buffer[ANYSIZE_ARRAY];
} EFI_SET_VARIABLE_IN, *PEFI_SET_VARIABLE_IN;
            ((CHAR16*)(((ULONG_PTR)(_SetVariable)) + \
                       (_SetVariable)->VariableNameOffset))
            ((VOID*)(((ULONG_PTR)(_SetVariable)) + \
                     (_SetVariable)->DataOffset))
typedef struct _EFI_SET_VARIABLE_OUT {
    EFI_VARIABLE_STATUS EfiStatus;
} EFI_SET_VARIABLE_OUT, *PEFI_SET_VARIABLE_OUT;
typedef struct _EFI_QUERY_VARIABLE_INFO_IN {
    ULONG Attributes;
} EFI_QUERY_VARIABLE_INFO_IN, *PEFI_QUERY_VARIABLE_INFO_IN;
typedef struct _EFI_QUERY_VARIABLE_INFO_OUT {
    EFI_VARIABLE_STATUS EfiStatus;
    ULONGLONG MaximumVariableStorageSize;
    ULONGLONG RemainingVariableStorageSize;
    ULONGLONG MaximumVariableSize;
} EFI_QUERY_VARIABLE_INFO_OUT, *PEFI_QUERY_VARIABLE_INFO_OUT;
