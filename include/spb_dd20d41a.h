#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
       
#pragma warning(push)
#pragma warning(disable:4480)
typedef enum SpbIoctl
{
    IOCTL_SPB_LOCK_CONTROLLER = CTL_CODE(FILE_DEVICE_CONTROLLER,
                                            0x600,
                                            METHOD_BUFFERED,
                                            FILE_ANY_ACCESS),
    IOCTL_SPB_UNLOCK_CONTROLLER = CTL_CODE(FILE_DEVICE_CONTROLLER,
                                            0x601,
                                            METHOD_BUFFERED,
                                            FILE_ANY_ACCESS),
    IOCTL_SPB_EXECUTE_SEQUENCE = CTL_CODE(FILE_DEVICE_CONTROLLER,
                                            0x602,
                                            METHOD_BUFFERED,
                                            FILE_ANY_ACCESS),
    IOCTL_SPB_LOCK_CONNECTION = CTL_CODE(FILE_DEVICE_CONTROLLER,
                                            0x603,
                                            METHOD_BUFFERED,
                                            FILE_ANY_ACCESS),
    IOCTL_SPB_UNLOCK_CONNECTION = CTL_CODE(FILE_DEVICE_CONTROLLER,
                                            0x604,
                                            METHOD_BUFFERED,
                                            FILE_ANY_ACCESS),
    IOCTL_SPB_FULL_DUPLEX = CTL_CODE(FILE_DEVICE_CONTROLLER,
                                            0x605,
                                            METHOD_BUFFERED,
                                            FILE_ANY_ACCESS)
}
SpbIoctl, *PSpbIoctl;
typedef enum SPB_TRANSFER_DIRECTION
{
    SpbTransferDirectionNone,
    SpbTransferDirectionFromDevice,
    SpbTransferDirectionToDevice,
    SpbTransferDirectionMax
}
SPB_TRANSFER_DIRECTION, *PSPB_TRANSFER_DIRECTION;
typedef enum SPB_TRANSFER_BUFFER_FORMAT
{
    SpbTransferBufferFormatInvalid,
    SpbTransferBufferFormatSimple,
    SpbTransferBufferFormatList,
    SpbTransferBufferFormatSimpleNonPaged,
    SpbTransferBufferFormatMdl,
    SpbTransferBufferFormatMax
}
SPB_TRANSFER_BUFFER_FORMAT, *PSPB_TRANSFER_BUFFER_FORMAT;
typedef struct SPB_TRANSFER_BUFFER_LIST_ENTRY
{
    PVOID Buffer;
    ULONG BufferCb;
}
SPB_TRANSFER_BUFFER_LIST_ENTRY, *PSPB_TRANSFER_BUFFER_LIST_ENTRY;
typedef struct SPB_TRANSFER_BUFFER
{
    SPB_TRANSFER_BUFFER_FORMAT Format;
#pragma warning(push)
#pragma warning(disable:4201)
    union
    {
        SPB_TRANSFER_BUFFER_LIST_ENTRY Simple;
        struct
        {
            PSPB_TRANSFER_BUFFER_LIST_ENTRY List;
            ULONG ListCe;
        }
        BufferList;
        PMDL Mdl;
    };
#pragma warning(pop)
}
SPB_TRANSFER_BUFFER, *PSPB_TRANSFER_BUFFER;
typedef struct SPB_TRANSFER_LIST_ENTRY
{
    SPB_TRANSFER_DIRECTION Direction;
    ULONG DelayInUs;
    SPB_TRANSFER_BUFFER Buffer;
}
SPB_TRANSFER_LIST_ENTRY, *PSPB_TRANSFER_LIST_ENTRY;
FORCEINLINE
SPB_TRANSFER_LIST_ENTRY
SPB_TRANSFER_LIST_ENTRY_INIT_SIMPLE(
    _In_ SPB_TRANSFER_DIRECTION Direction,
    _In_ ULONG DelayInUs,
    _Pre_writable_byte_size_(BufferCb) PVOID Buffer,
    _In_ ULONG BufferCb
    )
{
    SPB_TRANSFER_LIST_ENTRY entry;
    entry.Direction = Direction;
    entry.DelayInUs = DelayInUs;
    entry.Buffer.Format = SpbTransferBufferFormatSimple;
    entry.Buffer.Simple.Buffer = Buffer;
    entry.Buffer.Simple.BufferCb = BufferCb;
    return entry;
}
FORCEINLINE
SPB_TRANSFER_LIST_ENTRY
SPB_TRANSFER_LIST_ENTRY_INIT_NON_PAGED(
    _In_ SPB_TRANSFER_DIRECTION Direction,
    _In_ ULONG DelayInUs,
    _Pre_writable_byte_size_(BufferCb) PVOID Buffer,
    _In_ ULONG BufferCb
    )
{
    SPB_TRANSFER_LIST_ENTRY entry;
    entry.Direction = Direction;
    entry.DelayInUs = DelayInUs;
    entry.Buffer.Format = SpbTransferBufferFormatSimpleNonPaged;
    entry.Buffer.Simple.Buffer = Buffer;
    entry.Buffer.Simple.BufferCb = BufferCb;
    return entry;
}
FORCEINLINE
SPB_TRANSFER_LIST_ENTRY
SPB_TRANSFER_LIST_ENTRY_INIT_MDL(
    _In_ SPB_TRANSFER_DIRECTION Direction,
    _In_ ULONG DelayInUs,
    _In_ PMDL Mdl
    )
{
    SPB_TRANSFER_LIST_ENTRY entry;
    entry.Direction = Direction;
    entry.DelayInUs = DelayInUs;
    entry.Buffer.Format = SpbTransferBufferFormatMdl;
    entry.Buffer.Mdl = Mdl;
    return entry;
}
FORCEINLINE
SPB_TRANSFER_LIST_ENTRY
SPB_TRANSFER_LIST_ENTRY_INIT_BUFFER_LIST(
    _In_ SPB_TRANSFER_DIRECTION Direction,
    _In_ ULONG DelayInUs,
    _In_ SPB_TRANSFER_BUFFER_LIST_ENTRY BufferList[],
    _In_ ULONG BufferListCe
    )
{
    SPB_TRANSFER_LIST_ENTRY entry;
    entry.Direction = Direction;
    entry.DelayInUs = DelayInUs;
    entry.Buffer.Format = SpbTransferBufferFormatList;
    entry.Buffer.BufferList.List = BufferList;
    entry.Buffer.BufferList.ListCe = BufferListCe;
    return entry;
}
typedef struct SPB_TRANSFER_LIST
{
    _Field_range_(==, sizeof(SPB_TRANSFER_LIST))
    ULONG Size;
    ULONG Reserved;
    ULONG TransferCount;
    _Field_size_(TransferCount) SPB_TRANSFER_LIST_ENTRY Transfers[1];
}
SPB_TRANSFER_LIST, *PSPB_TRANSFER_LIST;
    SPB_TRANSFER_LIST List; \
    SPB_TRANSFER_LIST_ENTRY ExtraTransfers[n-1]; \
}
VOID
FORCEINLINE
SPB_TRANSFER_LIST_INIT(
    _Out_ SPB_TRANSFER_LIST *TransferList,
    _In_ ULONG TransferCount
    )
{
    memset(TransferList,
           0,
           (sizeof(SPB_TRANSFER_LIST) +
            (sizeof(SPB_TRANSFER_LIST_ENTRY) * (TransferCount - 1))));
    TransferList->Size = sizeof(SPB_TRANSFER_LIST);
    TransferList->TransferCount = TransferCount;
}
#endif
