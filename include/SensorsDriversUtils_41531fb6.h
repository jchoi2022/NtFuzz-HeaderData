#include <windows.h>
#include <wdf.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <Acpiioct.h>
#include <spb.h>
#include <SensorsStructures.h>
#pragma warning(disable:__WARNING_CYCLOMATIC_COMPLEXITY)
extern "C" {
__forceinline
static
NTSTATUS
ParseRotationMatrixEntry(
    _In_reads_bytes_(Length) PUCHAR RotationEntry,
    _In_ USHORT Length,
    _Out_ PVEC3D Data)
{
    NTSTATUS Status = STATUS_UNSUCCESSFUL;
    PCHAR Ptr1 = nullptr;
    PCHAR Ptr2 = nullptr;
    CHAR RotationEntryCopy[ACPI_ROTATION_MATRIX_ENTRY_LEN_MAX] = {0};
    AXIS Axis = AXIS_X;
    float DataBuffer[3] = {0.0F};
    BOOLEAN End = TRUE;
    if ((RotationEntry == nullptr ) ||
        (Data == nullptr) ||
        (Length > ACPI_ROTATION_MATRIX_ENTRY_LEN_MAX))
    {
        Status = STATUS_INVALID_PARAMETER;
        goto Exit;
    }
    RtlCopyMemory(RotationEntryCopy,
                  RotationEntry,
                  Length);
    Axis = AXIS_X;
    Ptr1 = RotationEntryCopy;
    Ptr2 = Ptr1;
    End = FALSE;
    do
    {
        if (*Ptr2 == 0)
        {
            End = TRUE;
        }
        if ((*Ptr2 == ACPI_ROTATION_MATRIX_SEPARATOR) || (*Ptr2 == 0))
        {
            *Ptr2 = 0;
            sscanf_s(Ptr1, "%f", &(DataBuffer[Axis]));
            Ptr1 = Ptr2 + 1;
            Axis = (AXIS)((INT)Axis + 1);
        }
        Ptr2++;
    } while (End == FALSE);
    Data->X = DataBuffer[AXIS_X];
    Data->Y = DataBuffer[AXIS_Y];
    Data->Z = DataBuffer[AXIS_Z];
    Status = STATUS_SUCCESS;
Exit:
    return Status;
}
__forceinline
NTSTATUS
GetRotationMatrixFromAcpi(
    _In_ WDFDEVICE Device,
    _In_reads_bytes_(MethodNameLength) PSZ MethodName,
    _In_ UCHAR MethodNameLength,
    _Out_writes_to_(RotationMatrixEntries, 0) PVEC3D RotationMatrix,
    _In_ ULONG RotationMatrixEntries
    )
{
    NTSTATUS Status = STATUS_UNSUCCESSFUL;
    ACPI_EVAL_INPUT_BUFFER_EX AcpiEvalInputBuffer;
    PACPI_EVAL_OUTPUT_BUFFER AcpiEvalOutputBuffer;
    ULONG_PTR BytesReturned = 0;
    UCHAR *DeviceInfoBuffer = nullptr;
    WDF_MEMORY_DESCRIPTOR InputMemoryDescriptor;
    WDFIOTARGET IoTarget;
    WDF_MEMORY_DESCRIPTOR OutputMemoryDescriptor;
    ULONG OutBufferSize = 0;
    PACPI_METHOD_ARGUMENT Argument = nullptr;
    ULONG Axis;
    if ((Device == NULL) || (MethodName == nullptr) || (MethodNameLength == 0 ) ||
        (RotationMatrix == nullptr) || (RotationMatrixEntries != AXIS_MAX))
    {
        Status = STATUS_INVALID_PARAMETER;
        goto FunctionEnd;
    }
    IoTarget = WdfDeviceGetIoTarget(Device);
    RtlZeroMemory(&AcpiEvalInputBuffer, ACPI_EVAL_INPUT_BUFFER_LENGTH);
    AcpiEvalInputBuffer.Signature = ACPI_EVAL_INPUT_BUFFER_SIGNATURE_EX;
    RtlCopyMemory(AcpiEvalInputBuffer.MethodName,
                  MethodName,
                  MethodNameLength);
    WDF_MEMORY_DESCRIPTOR_INIT_BUFFER(&InputMemoryDescriptor,
                                      (PVOID)&AcpiEvalInputBuffer,
                                      ACPI_EVAL_INPUT_BUFFER_LENGTH);
    OutBufferSize = sizeof(ACPI_EVAL_OUTPUT_BUFFER)
                    + (ACPI_ROTATION_MATRIX_ENTRY_LEN_MAX * AXIS_MAX);
    DeviceInfoBuffer = (UCHAR *)HeapAlloc(GetProcessHeap(),HEAP_ZERO_MEMORY, OutBufferSize);
    if (DeviceInfoBuffer == nullptr)
    {
        Status = STATUS_INSUFFICIENT_RESOURCES;
        goto FunctionEnd;
    }
    RtlZeroMemory(DeviceInfoBuffer, OutBufferSize);
    WDF_MEMORY_DESCRIPTOR_INIT_BUFFER(&OutputMemoryDescriptor,
                                      (PVOID)DeviceInfoBuffer,
                                      OutBufferSize);
    Status = WdfIoTargetSendIoctlSynchronously(IoTarget,
                                               NULL,
                                               IOCTL_ACPI_EVAL_METHOD_EX,
                                               &InputMemoryDescriptor,
                                               &OutputMemoryDescriptor,
                                               nullptr,
                                               &BytesReturned);
    if (!NT_SUCCESS(Status))
    {
        goto FunctionEnd;
    }
    AcpiEvalOutputBuffer = (PACPI_EVAL_OUTPUT_BUFFER)DeviceInfoBuffer;
    if ((AcpiEvalOutputBuffer->Signature == ACPI_EVAL_OUTPUT_BUFFER_SIGNATURE)
        && (AcpiEvalOutputBuffer->Count == AXIS_MAX))
    {
        Argument = AcpiEvalOutputBuffer->Argument;
        for (Axis = AXIS_X; Axis < AXIS_MAX; Axis++)
        {
            if (Argument->Type == ACPI_METHOD_ARGUMENT_STRING &&
                Argument->DataLength < ACPI_ROTATION_MATRIX_ENTRY_LEN_MAX &&
                Argument->DataLength >= ACPI_ROTATION_MATRIX_ENTRY_LEN_MIN)
            {
                Status = ParseRotationMatrixEntry(Argument->Data,
                                                  Argument->DataLength,
                                                  &(RotationMatrix[Axis]));
                if (!NT_SUCCESS(Status))
                {
                    goto FunctionEnd;
                }
            }
            Argument = ACPI_METHOD_NEXT_ARGUMENT(Argument);
        }
    }
    else
    {
        Status = STATUS_ACPI_INVALID_DATA;
        goto FunctionEnd;
    }
    Status = STATUS_SUCCESS;
FunctionEnd:
    if (DeviceInfoBuffer)
    {
        HeapFree(GetProcessHeap(), 0, DeviceInfoBuffer);
    }
    return Status;
}
__forceinline
NTSTATUS
GetMethodArgumentFromAcpi(
    _In_ WDFDEVICE Device,
    _In_reads_bytes_(MethodNameLength) PSZ MethodName,
    _In_ UCHAR MethodNameLength,
    _Out_writes_bytes_(MethodArgumentLength) BYTE *MethodArgument,
    _In_ ULONG MethodArgumentLength
    )
{
    NTSTATUS Status = STATUS_UNSUCCESSFUL;
    ACPI_EVAL_INPUT_BUFFER_EX AcpiEvalInputBuffer;
    PACPI_EVAL_OUTPUT_BUFFER AcpiEvalOutputBuffer;
    ULONG_PTR BytesReturned = 0;
    UCHAR *DeviceInfoBuffer = nullptr;
    WDF_MEMORY_DESCRIPTOR InputMemoryDescriptor;
    WDFIOTARGET IoTarget;
    WDF_MEMORY_DESCRIPTOR OutputMemoryDescriptor;
    ULONG OutBufferSize = 0;
    if ((Device == NULL) || (MethodName == nullptr) || (MethodNameLength == 0) ||
        (MethodArgument == nullptr) || (MethodArgumentLength == 0))
    {
        Status = STATUS_INVALID_PARAMETER;
        goto FunctionEnd;
    }
    IoTarget = WdfDeviceGetIoTarget(Device);
    RtlZeroMemory(&AcpiEvalInputBuffer, ACPI_EVAL_INPUT_BUFFER_LENGTH);
    AcpiEvalInputBuffer.Signature = ACPI_EVAL_INPUT_BUFFER_SIGNATURE_EX;
    RtlCopyMemory(AcpiEvalInputBuffer.MethodName,
                  MethodName,
                  MethodNameLength);
    WDF_MEMORY_DESCRIPTOR_INIT_BUFFER(&InputMemoryDescriptor,
                                      (PVOID)&AcpiEvalInputBuffer,
                                      ACPI_EVAL_INPUT_BUFFER_LENGTH);
    OutBufferSize = sizeof(ACPI_EVAL_OUTPUT_BUFFER) + MethodArgumentLength;
    DeviceInfoBuffer = (UCHAR *)HeapAlloc(GetProcessHeap(),HEAP_ZERO_MEMORY, OutBufferSize);
    if (DeviceInfoBuffer == nullptr)
    {
        Status = STATUS_INSUFFICIENT_RESOURCES;
        goto FunctionEnd;
    }
    RtlZeroMemory(DeviceInfoBuffer, OutBufferSize);
    WDF_MEMORY_DESCRIPTOR_INIT_BUFFER(&OutputMemoryDescriptor,
                                      (PVOID)DeviceInfoBuffer,
                                      OutBufferSize);
    Status = WdfIoTargetSendIoctlSynchronously(IoTarget,
                                               NULL,
                                               IOCTL_ACPI_EVAL_METHOD_EX,
                                               &InputMemoryDescriptor,
                                               &OutputMemoryDescriptor,
                                               nullptr,
                                               &BytesReturned);
    if (!NT_SUCCESS(Status))
    {
        goto FunctionEnd;
    }
    AcpiEvalOutputBuffer = (PACPI_EVAL_OUTPUT_BUFFER)DeviceInfoBuffer;
    if ((AcpiEvalOutputBuffer->Signature == ACPI_EVAL_OUTPUT_BUFFER_SIGNATURE) &&
        (AcpiEvalOutputBuffer->Count == 1) &&
        (AcpiEvalOutputBuffer->Argument->Type == ACPI_METHOD_ARGUMENT_BUFFER) &&
        (AcpiEvalOutputBuffer->Argument->DataLength <= MethodArgumentLength))
    {
        RtlCopyMemory(MethodArgument,
                      AcpiEvalOutputBuffer->Argument->Data,
                      AcpiEvalOutputBuffer->Argument->DataLength);
    }
    else
    {
        Status = STATUS_ACPI_INVALID_DATA;
        goto FunctionEnd;
    }
    Status = STATUS_SUCCESS;
FunctionEnd:
    if (DeviceInfoBuffer)
    {
        HeapFree(GetProcessHeap(), 0, DeviceInfoBuffer);
    }
    return Status;
}
__forceinline
NTSTATUS
InitTransformationMatrix(
    _In_ WDFDEVICE Device,
    _Out_writes_(RotationMatrixEntryCount) PVEC3D RotationMatrix,
    _In_ ULONG RotationMatrixEntryCount
    )
{
    NTSTATUS Status;
    if ((RotationMatrix == nullptr) || (RotationMatrixEntryCount != AXIS_MAX))
    {
        Status = STATUS_INVALID_PARAMETER;
        goto FunctionEnd;
    }
 memset(RotationMatrix, 0, sizeof(VEC3D));
    Status = GetRotationMatrixFromAcpi(Device,
                                       ACPI_ROTATION_MATRIX_METHOD_NAME,
                                       sizeof(ACPI_ROTATION_MATRIX_METHOD_NAME),
                                       RotationMatrix,
                                       RotationMatrixEntryCount);
    if (!NT_SUCCESS(Status))
    {
        goto FunctionEnd;
    }
    Status = STATUS_SUCCESS;
FunctionEnd:
    return Status;
}
__forceinline
VOID
TranslateAxes(
    _In_reads_(RotationMatrixEntryCount) VEC3D *RotationMatrix,
    _In_ ULONG RotationMatrixEntryCount,
    _Inout_ VEC3D *Data,
    _In_ ULONG DataCount
    )
{
    VEC3D vOutput;
    VEC3D* pvCur = nullptr;
    NTSTATUS Status = STATUS_SUCCESS;
    if ((RotationMatrix == nullptr) || (RotationMatrixEntryCount != AXIS_MAX) ||
        (Data == nullptr) || (DataCount != 1))
    {
        Status = STATUS_INVALID_PARAMETER;
        goto FunctionEnd;
    }
    pvCur = &RotationMatrix[AXIS_X];
    vOutput.X = (pvCur->X * Data->X) +
                (pvCur->Y * Data->Y) +
                (pvCur->Z * Data->Z);
    pvCur = &RotationMatrix[AXIS_Y];
    vOutput.Y = (pvCur->X * Data->X) +
                (pvCur->Y * Data->Y) +
                (pvCur->Z * Data->Z);
    pvCur = &RotationMatrix[AXIS_Z];
    vOutput.Z = (pvCur->X * Data->X) +
                (pvCur->Y * Data->Y) +
                (pvCur->Z * Data->Z);
    *Data = vOutput;
FunctionEnd:
    return;
}
__forceinline
_Check_return_
NTSTATUS
I2CSensorReadRegister(
    _In_ WDFIOTARGET I2CIoTarget,
    _In_ UCHAR RegAddress,
    _Out_writes_bytes_(BufferCb) BYTE* Buffer,
    _In_ ULONG BufferCb)
{
    NTSTATUS Status = STATUS_SUCCESS;
    WDFREQUEST IoRequest = NULL;
    WDF_MEMORY_DESCRIPTOR IOBuffer;
    WDF_OBJECT_ATTRIBUTES RequestAttributes = {0};
    WDF_REQUEST_SEND_OPTIONS SendOptions = {0};
    ULONG_PTR BytesReturned = 0;
    SPB_TRANSFER_LIST_AND_ENTRIES(NUM_TRANSFER_PER_SEQUENCE) I2CCmd;
    if (I2CIoTarget == NULL || Buffer == nullptr)
    {
        Status = STATUS_INVALID_PARAMETER;
        goto Exit;
    }
    RtlZeroMemory(&IOBuffer, sizeof(WDF_MEMORY_DESCRIPTOR));
    WDF_OBJECT_ATTRIBUTES_INIT(&RequestAttributes);
    Status = WdfRequestCreate(&RequestAttributes, I2CIoTarget, &IoRequest);
    if (!NT_SUCCESS(Status))
    {
        goto Exit;
    }
    SPB_TRANSFER_LIST_INIT(&(I2CCmd.List), NUM_TRANSFER_PER_SEQUENCE);
    I2CCmd.List.Transfers[0] =
        SPB_TRANSFER_LIST_ENTRY_INIT_SIMPLE(SpbTransferDirectionToDevice,
                                            0,
                                            (PVOID)&RegAddress,
                                            sizeof(RegAddress));
    I2CCmd.ExtraTransfers[0] =
        SPB_TRANSFER_LIST_ENTRY_INIT_SIMPLE(SpbTransferDirectionFromDevice, 0, (PVOID)Buffer, BufferCb);
    WDF_MEMORY_DESCRIPTOR_INIT_BUFFER(&IOBuffer, (PVOID)&I2CCmd, sizeof(I2CCmd));
    WDF_REQUEST_SEND_OPTIONS_INIT(&SendOptions, 0);
    WDF_REQUEST_SEND_OPTIONS_SET_TIMEOUT(&SendOptions, WDF_REL_TIMEOUT_IN_MS(250));
    Status = WdfIoTargetSendIoctlSynchronously(I2CIoTarget,
                                               IoRequest,
                                               IOCTL_SPB_EXECUTE_SEQUENCE,
                                               &IOBuffer,
                                               nullptr,
                                               &SendOptions,
                                               &BytesReturned);
    if (!NT_SUCCESS(Status))
    {
        goto Exit;
    }
Exit:
    if (IoRequest != NULL)
    {
        WdfObjectDelete(IoRequest);
    }
    return Status;
}
typedef struct _I2C_REQUEST {
    UCHAR RegAddress;
    UCHAR Value[I2C_MAX_DATA_LENGTH];
} I2C_REQUEST, *PI2C_REQUEST;
__forceinline
_Check_return_
NTSTATUS
I2CSensorWriteRegister(
    _In_ WDFIOTARGET I2CIoTarget,
    _In_ UCHAR RegAddress,
    _In_reads_bytes_(RegLength) BYTE* RegValue,
    _In_ size_t RegLength)
{
    NTSTATUS Status = STATUS_SUCCESS;
    WDFREQUEST IoRequest = NULL;
    WDF_MEMORY_DESCRIPTOR IOBuffer;
    WDF_OBJECT_ATTRIBUTES RequestAttributes = {0};
    WDF_REQUEST_SEND_OPTIONS SendOptions = {0};
    ULONG_PTR BytesReturned = 0;
    I2C_REQUEST Request = {0};
    if (I2CIoTarget == NULL)
    {
        Status = STATUS_INVALID_PARAMETER;
        goto Exit;
    }
    RtlZeroMemory(&IOBuffer, sizeof(WDF_MEMORY_DESCRIPTOR));
    IoRequest = NULL;
    if (I2C_MAX_DATA_LENGTH < RegLength)
    {
        Status = STATUS_INSUFFICIENT_RESOURCES;
        goto Exit;
    }
    Request.RegAddress = RegAddress;
    if (RegValue != nullptr && RegLength > 0)
    {
        memcpy(&Request.Value, RegValue, RegLength);
    }
    WDF_OBJECT_ATTRIBUTES_INIT(&RequestAttributes);
    Status = WdfRequestCreate(&RequestAttributes,
                              I2CIoTarget,
                              &IoRequest);
    if (!NT_SUCCESS(Status))
    {
        goto Exit;
    }
    WDF_MEMORY_DESCRIPTOR_INIT_BUFFER(&IOBuffer,
                                      (PVOID)&Request,
                                      I2C_REQUEST_SIZE(static_cast<ULONG>(RegLength)));
    WDF_REQUEST_SEND_OPTIONS_INIT(&SendOptions, 0);
    WDF_REQUEST_SEND_OPTIONS_SET_TIMEOUT(&SendOptions, WDF_REL_TIMEOUT_IN_MS(250));
    Status = WdfIoTargetSendWriteSynchronously(I2CIoTarget,
                                                IoRequest,
                                                &IOBuffer,
                                                nullptr,
                                                &SendOptions,
                                                &BytesReturned);
    if (!NT_SUCCESS(Status))
    {
        goto Exit;
    }
Exit:
    if (IoRequest != NULL) {
        WdfObjectDelete(IoRequest);
    }
    return Status;
}
}
