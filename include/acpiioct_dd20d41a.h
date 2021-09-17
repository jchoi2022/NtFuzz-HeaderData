#pragma warning(disable:4201)
typedef struct _ACPI_EVAL_INPUT_BUFFER_V1 {
    ULONG Signature;
    union {
        UCHAR MethodName[4];
        ULONG MethodNameAsUlong;
    } DUMMYUNIONNAME;
} ACPI_EVAL_INPUT_BUFFER_V1, *PACPI_EVAL_INPUT_BUFFER_V1;
typedef struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V1 {
    ULONG Signature;
    union {
        UCHAR MethodName[4];
        ULONG MethodNameAsUlong;
    } DUMMYUNIONNAME;
    ULONG IntegerArgument;
} ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V1, *PACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V1;
typedef struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1 {
    ULONG Signature;
    union {
        UCHAR MethodName[4];
        ULONG MethodNameAsUlong;
    } DUMMYUNIONNAME;
    ULONG StringLength;
    _Field_size_bytes_(StringLength)
    _Null_terminated_
    UCHAR String[ANYSIZE_ARRAY];
} ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1, *PACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1;
typedef struct _ACPI_METHOD_ARGUMENT_V1 {
    USHORT Type;
    USHORT DataLength;
    union {
        ULONG Argument;
        _Field_size_bytes_(DataLength)
        UCHAR Data[ANYSIZE_ARRAY];
    } DUMMYUNIONNAME;
} ACPI_METHOD_ARGUMENT_V1;
typedef ACPI_METHOD_ARGUMENT_V1 UNALIGNED *PACPI_METHOD_ARGUMENT_V1;
typedef struct _ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1 {
    ULONG Signature;
    union {
        UCHAR MethodName[4];
        ULONG MethodNameAsUlong;
    } DUMMYUNIONNAME;
    ULONG Size;
    ULONG ArgumentCount;
    ACPI_METHOD_ARGUMENT_V1 Argument[ANYSIZE_ARRAY];
} ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1, *PACPI_EVAL_INPUT_BUFFER_COMPLEX_V1;
typedef struct _ACPI_EVAL_OUTPUT_BUFFER_V1 {
    ULONG Signature;
    ULONG Length;
    ULONG Count;
    _Field_size_bytes_(Length - FIELD_OFFSET(struct _ACPI_EVAL_OUTPUT_BUFFER_V1, Argument))
    ACPI_METHOD_ARGUMENT_V1 Argument[ANYSIZE_ARRAY];
} ACPI_EVAL_OUTPUT_BUFFER_V1;
typedef ACPI_EVAL_OUTPUT_BUFFER_V1 UNALIGNED *PACPI_EVAL_OUTPUT_BUFFER_V1;
typedef struct _ACPI_EVAL_INPUT_BUFFER_V1_EX {
    ULONG Signature;
    _Null_terminated_
    CHAR MethodName[256];
} ACPI_EVAL_INPUT_BUFFER_V1_EX, *PACPI_EVAL_INPUT_BUFFER_V1_EX;
typedef struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V1_EX {
    ULONG Signature;
    _Null_terminated_
    CHAR MethodName[256];
    ULONG64 IntegerArgument;
} ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V1_EX, *PACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V1_EX;
typedef struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1_EX {
    ULONG Signature;
    CHAR MethodName[256];
    ULONG StringLength;
    _Field_size_(StringLength)
    _Null_terminated_
    UCHAR String[ANYSIZE_ARRAY];
} ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1_EX, *PACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1_EX;
typedef struct _ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1_EX {
    ULONG Signature;
    CHAR MethodName[256];
    ULONG Size;
    ULONG ArgumentCount;
    _Field_size_(ArgumentCount)
    ACPI_METHOD_ARGUMENT_V1 Argument[ANYSIZE_ARRAY];
} ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1_EX, *PACPI_EVAL_INPUT_BUFFER_COMPLEX_V1_EX;
typedef struct _ACPI_METHOD_ARGUMENT_V1 ACPI_METHOD_ARGUMENT;
typedef ACPI_METHOD_ARGUMENT_V1 UNALIGNED *PACPI_METHOD_ARGUMENT;
typedef struct _ACPI_EVAL_INPUT_BUFFER_V1 ACPI_EVAL_INPUT_BUFFER, *PACPI_EVAL_INPUT_BUFFER;
typedef struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V1
    ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER, *PACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER;
typedef struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1
     ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING, *PACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING;
typedef struct _ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1
     ACPI_EVAL_INPUT_BUFFER_COMPLEX, *PACPI_EVAL_INPUT_BUFFER_COMPLEX;
typedef struct _ACPI_EVAL_INPUT_BUFFER_V1_EX ACPI_EVAL_INPUT_BUFFER_EX, *PACPI_EVAL_INPUT_BUFFER_EX;
typedef struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V1_EX
    ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_EX, *PACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_EX;
typedef struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1_EX
     ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_EX, *PACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_EX;
typedef struct _ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1_EX
     ACPI_EVAL_INPUT_BUFFER_COMPLEX_EX, *PACPI_EVAL_INPUT_BUFFER_COMPLEX_EX;
typedef struct _ACPI_EVAL_OUTPUT_BUFFER_V1 ACPI_EVAL_OUTPUT_BUFFER;
typedef struct _ACPI_EVAL_OUTPUT_BUFFER_V1 UNALIGNED *PACPI_EVAL_OUTPUT_BUFFER;
    (FIELD_OFFSET(ACPI_METHOD_ARGUMENT, Data) + max(sizeof(ULONG), DataLength))
    (ACPI_METHOD_ARGUMENT_LENGTH(((PACPI_METHOD_ARGUMENT)Argument)->DataLength))
    (PACPI_METHOD_ARGUMENT) ( (PUCHAR) Argument + \
    ACPI_METHOD_ARGUMENT_LENGTH_FROM_ARGUMENT( Argument ) )
    { MethodArgument->Type = ACPI_METHOD_ARGUMENT_INTEGER; \
      MethodArgument->DataLength = sizeof(ULONG); \
      MethodArgument->Argument = IntData; }
    { Argument->Type = ACPI_METHOD_ARGUMENT_STRING; \
      Argument->DataLength = strlen((PUCHAR)StrData) + sizeof(UCHAR); \
      memcpy_s(&Argument->Data[0], \
               Argument->DataLength, \
               (PUCHAR)StrData, \
               Argument->DataLength); }
    { Argument->Type = ACPI_METHOD_ARGUMENT_BUFFER; \
      Argument->DataLength = BuffLength; \
      memcpy_s(&Argument->Data[0], \
               Argument->DataLength, \
               (PUCHAR)BuffData, \
               BuffLength); }
    (EvalOutputBuffer->Length - FIELD_OFFSET(ACPI_EVAL_OUTPUT_BUFFER, Argument))
    ((PACPI_METHOD_ARGUMENT)EvalOutputBuffer->Argument)
    (PACPI_METHOD_ARGUMENT)((PUCHAR)EvalOutputBuffer->Argument + \
        ACPI_EVAL_OUTPUT_BUFFER_ARGUMENT_LENGTH(EvalOutputBuffer))
                                       MethodArgumentsBegin, \
                                       MethodArgumentsEnd ) \
    for (PACPI_METHOD_ARGUMENT MethodArgument = (MethodArgumentsBegin); \
            MethodArgument < (MethodArgumentsEnd); \
            MethodArgument = ACPI_METHOD_NEXT_ARGUMENT(MethodArgument))
typedef struct _ACPI_EVAL_INPUT_BUFFER_V2 {
    ULONG Signature;
    union {
        UCHAR MethodName[4];
        ULONG MethodNameAsUlong;
    } DUMMYUNIONNAME;
} ACPI_EVAL_INPUT_BUFFER_V2, *PACPI_EVAL_INPUT_BUFFER_V2;
typedef struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V2 {
    ULONG Signature;
    union {
        UCHAR MethodName[4];
        ULONG MethodNameAsUlong;
    } DUMMYUNIONNAME;
    ULONG IntegerArgument;
} ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V2, *PACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V2;
typedef struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2 {
    ULONG Signature;
    union {
        UCHAR MethodName[4];
        ULONG MethodNameAsUlong;
    } DUMMYUNIONNAME;
    ULONG StringLength;
    _Field_size_bytes_(StringLength)
    _Null_terminated_
    UCHAR String[ANYSIZE_ARRAY];
} ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2, *PACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2;
typedef struct _ACPI_METHOD_ARGUMENT_V2 {
    USHORT Type;
    ULONG DataLength;
    union {
        ULONG Argument;
        _Field_size_bytes_(DataLength)
        UCHAR Data[ANYSIZE_ARRAY];
    } DUMMYUNIONNAME;
} ACPI_METHOD_ARGUMENT_V2;
typedef ACPI_METHOD_ARGUMENT_V2 UNALIGNED *PACPI_METHOD_ARGUMENT_V2;
typedef struct _ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2 {
    ULONG Signature;
    union {
        UCHAR MethodName[4];
        ULONG MethodNameAsUlong;
    } DUMMYUNIONNAME;
    ULONG Size;
    ULONG ArgumentCount;
    ACPI_METHOD_ARGUMENT_V2 Argument[ANYSIZE_ARRAY];
} ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2, *PACPI_EVAL_INPUT_BUFFER_COMPLEX_V2;
typedef struct _ACPI_EVAL_OUTPUT_BUFFER_V2 {
    ULONG Signature;
    ULONG Length;
    ULONG Count;
    _Field_size_bytes_(Length - FIELD_OFFSET(struct _ACPI_EVAL_OUTPUT_BUFFER_V2, Argument))
    ACPI_METHOD_ARGUMENT_V2 Argument[ANYSIZE_ARRAY];
} ACPI_EVAL_OUTPUT_BUFFER_V2;
typedef ACPI_EVAL_OUTPUT_BUFFER_V2 UNALIGNED *PACPI_EVAL_OUTPUT_BUFFER_V2;
typedef struct _ACPI_EVAL_INPUT_BUFFER_V2_EX {
    ULONG Signature;
    _Null_terminated_
    CHAR MethodName[256];
} ACPI_EVAL_INPUT_BUFFER_V2_EX, *PACPI_EVAL_INPUT_BUFFER_V2_EX;
typedef struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V2_EX {
    ULONG Signature;
    _Null_terminated_
    CHAR MethodName[256];
    ULONG64 IntegerArgument;
} ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V2_EX, *PACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V2_EX;
typedef struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2_EX {
    ULONG Signature;
    CHAR MethodName[256];
    ULONG StringLength;
    _Field_size_(StringLength)
    _Null_terminated_
    UCHAR String[ANYSIZE_ARRAY];
} ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2_EX, *PACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2_EX;
typedef struct _ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2_EX {
    ULONG Signature;
    CHAR MethodName[256];
    ULONG Size;
    ULONG ArgumentCount;
    _Field_size_(ArgumentCount)
    ACPI_METHOD_ARGUMENT_V2 Argument[ANYSIZE_ARRAY];
} ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2_EX, *PACPI_EVAL_INPUT_BUFFER_COMPLEX_V2_EX;
        (FIELD_OFFSET(ACPI_METHOD_ARGUMENT_V2, Data) + max(sizeof(ULONG), DataLength))
        (ACPI_METHOD_ARGUMENT_V2_LENGTH(((PACPI_METHOD_ARGUMENT_V2)Argument)->DataLength))
        (PACPI_METHOD_ARGUMENT_V2) ( (PUCHAR) Argument + \
        ACPI_METHOD_ARGUMENT_V2_LENGTH_FROM_ARGUMENT( Argument ) )
        { MethodArgument->Type = ACPI_METHOD_ARGUMENT_INTEGER; \
          MethodArgument->DataLength = sizeof(ULONG); \
          MethodArgument->Argument = IntData; }
        { Argument->Type = ACPI_METHOD_ARGUMENT_STRING; \
          Argument->DataLength = strlen((PUCHAR)StrData) + sizeof(UCHAR); \
          memcpy_s(&Argument->Data[0], \
                   Argument->DataLength, \
                   (PUCHAR)StrData, \
                   Argument->DataLength); }
        { Argument->Type = ACPI_METHOD_ARGUMENT_BUFFER; \
          Argument->DataLength = BuffLength; \
          memcpy_s(&Argument->Data[0], \
                   Argument->DataLength, \
                   (PUCHAR)BuffData, \
                   BuffLength); }
        (EvalOutputBuffer->Length - FIELD_OFFSET(ACPI_EVAL_OUTPUT_BUFFER_V2, Argument))
        ((PACPI_METHOD_ARGUMENT_V2)EvalOutputBuffer->Argument)
        (PACPI_METHOD_ARGUMENT_V2)((PUCHAR)EvalOutputBuffer->Argument + \
            ACPI_EVAL_OUTPUT_BUFFER_V2_ARGUMENT_LENGTH(EvalOutputBuffer))
                                             MethodArgumentsBegin, \
                                             MethodArgumentsEnd ) \
        for (PACPI_METHOD_ARGUMENT_V2 MethodArgument = (MethodArgumentsBegin); \
                MethodArgument < (MethodArgumentsEnd); \
                MethodArgument = ACPI_METHOD_NEXT_ARGUMENT_V2(MethodArgument))
typedef struct _ACPI_MANIPULATE_GLOBAL_LOCK_BUFFER {
    ULONG Signature;
    PVOID LockObject;
} ACPI_MANIPULATE_GLOBAL_LOCK_BUFFER, *PACPI_MANIPULATE_GLOBAL_LOCK_BUFFER;
typedef struct _ACPI_ENUM_CHILDREN_INPUT_BUFFER {
    ULONG Signature;
    ULONG Flags;
    ULONG NameLength;
    _Field_size_bytes_(NameLength)
    _Null_terminated_
    CHAR Name[ANYSIZE_ARRAY];
} ACPI_ENUM_CHILDREN_INPUT_BUFFER, *PACPI_ENUM_CHILDREN_INPUT_BUFFER;
typedef struct _ACPI_ENUM_CHILD {
    ULONG Flags;
    ULONG NameLength;
    _Field_size_bytes_(NameLength)
    _Null_terminated_
    CHAR Name[ANYSIZE_ARRAY];
} ACPI_ENUM_CHILD;
typedef ACPI_ENUM_CHILD UNALIGNED *PACPI_ENUM_CHILD;
typedef struct _ACPI_ENUM_CHILDREN_OUTPUT_BUFFER {
    ULONG Signature;
    ULONG NumberOfChildren;
    ACPI_ENUM_CHILD Children[ANYSIZE_ARRAY];
} ACPI_ENUM_CHILDREN_OUTPUT_BUFFER;
typedef ACPI_ENUM_CHILDREN_OUTPUT_BUFFER UNALIGNED *PACPI_ENUM_CHILDREN_OUTPUT_BUFFER;
    ( (2* sizeof (ULONG)) + Child->NameLength )
    (PACPI_ENUM_CHILD) ( (PUCHAR) Child + \
    ACPI_ENUM_CHILD_LENGTH_FROM_CHILD( Child ) )
typedef struct _ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER {
    ULONG Signature;
    USHORT Size;
    UCHAR Revision;
    UCHAR Reserved0;
    USHORT VendorIdStringOffset;
    USHORT VendorStringLength;
    USHORT DeviceIdStringOffset;
    USHORT SubSystemIdStringOffset;
    USHORT SubSystemStringLength;
    USHORT SubDeviceIdStringOffset;
    USHORT InstanceIdLength;
    USHORT InstanceIdOffset;
    USHORT BaseClassCode;
    USHORT HardwareRevision;
    UCHAR ProgrammingInterface;
    UCHAR Reserved1;
    USHORT SubClassCode;
} ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER, *PACPI_DEVICE_INFORMATION_OUTPUT_BUFFER;
typedef struct _ACPI_GET_DEVICE_SPECIFIC_DATA {
    ULONG Signature;
    GUID Section;
    ULONG PropertyNameLength;
    _Field_size_bytes_(PropertyNameLength)
    _Null_terminated_
    UCHAR PropertyName[ANYSIZE_ARRAY];
} ACPI_GET_DEVICE_SPECIFIC_DATA, *PACPI_GET_DEVICE_SPECIFIC_DATA;
