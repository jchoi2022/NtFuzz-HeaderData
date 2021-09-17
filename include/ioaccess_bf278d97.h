UCHAR
__inbyte (
    _In_ USHORT Port
    );
USHORT
__inword (
    _In_ USHORT Port
    );
ULONG
__indword (
    _In_ USHORT Port
    );
VOID
__outbyte (
    _In_ USHORT Port,
    _In_ UCHAR Data
    );
VOID
__outword (
    _In_ USHORT Port,
    _In_ USHORT Data
    );
VOID
__outdword (
    _In_ USHORT Port,
    _In_ ULONG Data
    );
#pragma intrinsic(__inbyte)
#pragma intrinsic(__inword)
#pragma intrinsic(__indword)
#pragma intrinsic(__outbyte)
#pragma intrinsic(__outword)
#pragma intrinsic(__outdword)
LONG
_InterlockedOr (
    _Inout_ LONG volatile *Target,
    _In_ LONG Set
    );
#pragma intrinsic(_InterlockedOr)
__inline
UCHAR
READ_REGISTER_UCHAR (
    _In_ PVOID Register
    )
{
    return *(UCHAR volatile *)Register;
}
__inline
USHORT
READ_REGISTER_USHORT (
    _In_ PVOID Register
    )
{
    return *(USHORT volatile *)Register;
}
__inline
ULONG
READ_REGISTER_ULONG (
    _In_ PVOID Register
    )
{
    return *(ULONG volatile *)Register;
}
__inline
VOID
WRITE_REGISTER_UCHAR (
    _In_ PVOID Register,
    _In_ UCHAR Value
    )
{
    LONG Synch;
    *(UCHAR volatile *)Register = Value;
    _InterlockedOr(&Synch, 1);
    return;
}
__inline
VOID
WRITE_REGISTER_USHORT (
    _In_ PVOID Register,
    _In_ USHORT Value
    )
{
    LONG Synch;
    *(USHORT volatile *)Register = Value;
    _InterlockedOr(&Synch, 1);
    return;
}
__inline
VOID
WRITE_REGISTER_ULONG (
    _In_ PVOID Register,
    _In_ ULONG Value
    )
{
    LONG Synch;
    *(ULONG volatile *)Register = Value;
    _InterlockedOr(&Synch, 1);
    return;
}
__inline
UCHAR
READ_PORT_UCHAR (
    _In_ PVOID Port
    )
{
    return __inbyte((USHORT)((ULONG64)Port));
}
__inline
USHORT
READ_PORT_USHORT (
    _In_ PVOID Port
    )
{
    return __inword((USHORT)((ULONG64)Port));
}
__inline
ULONG
READ_PORT_ULONG (
    _In_ PVOID Port
    )
{
    return __indword((USHORT)((ULONG64)Port));
}
__inline
VOID
WRITE_PORT_UCHAR (
    _In_ PVOID Port,
    _In_ UCHAR Value
    )
{
    __outbyte((USHORT)((ULONG64)Port), Value);
    return;
}
__inline
VOID
WRITE_PORT_USHORT (
    _In_ PVOID Port,
    _In_ USHORT Value
    )
{
    __outword((USHORT)((ULONG64)Port), Value);
    return;
}
__inline
VOID
WRITE_PORT_ULONG (
    _In_ PVOID Port,
    _In_ ULONG Value
    )
{
    __outdword((USHORT)((ULONG64)Port), Value);
    return;
}
