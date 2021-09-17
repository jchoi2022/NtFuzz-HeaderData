#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
       
extern "C" {
FORCEINLINE
NTSTATUS
PwmParsePinPath (
    _In_ UNICODE_STRING* PinPath,
    _Out_opt_ ULONG* PinNumber
    )
{
    NTSTATUS status;
    ULONG pinNumber;
    ULONG nChars;
    const WCHAR* currentChar;
    const WCHAR* strEnd;
    if (PinPath == NULL) {
        return STATUS_INVALID_PARAMETER;
    }
    status = RtlUnicodeStringValidate(PinPath);
    if (!NT_SUCCESS(status)) {
        return status;
    }
    nChars = PinPath->Length / sizeof(WCHAR);
    if ((nChars < 2) || (*PinPath->Buffer != L'\\')) {
        return STATUS_NO_SUCH_FILE;
    }
    currentChar = PinPath->Buffer + 1;
    strEnd = PinPath->Buffer + nChars;
    pinNumber = 0;
    while (currentChar < strEnd) {
        if ((*currentChar < L'0') || (*currentChar > L'9')) {
            return STATUS_NO_SUCH_FILE;
        }
        pinNumber *= 10;
        pinNumber += (*currentChar - L'0');
        ++currentChar;
    }
    if (PinNumber != NULL) {
        *PinNumber = pinNumber;
    }
    return STATUS_SUCCESS;
}
}
#endif
