#pragma warning(disable:4201)
                                                 1, \
                                                 METHOD_BUFFERED, \
                                                 FILE_READ_ACCESS)
typedef struct _IR_DEV_CAPS {
              ULONG_PTR ProtocolVersion;
              ULONG_PTR NumTransmitPorts;
              ULONG_PTR NumReceivePorts;
              ULONG_PTR LearningReceiverMask;
              ULONG_PTR DevCapsFlags;
}IR_DEV_CAPS, *PIR_DEV_CAPS;
typedef IR_DEV_CAPS IR_DEV_CAPS_V1, *PIR_DEV_CAPS_V1;
typedef struct _IR_DEV_CAPS_V2 :
    public IR_DEV_CAPS_V1 {
              ULONG_PTR WakeProtocols;
              WCHAR TunerPnpId[MAXIMUM_FILENAME_LENGTH] ;
} IR_DEV_CAPS_V2, *PIR_DEV_CAPS_V2;
                                                 2, \
                                                 METHOD_BUFFERED, \
                                                 FILE_READ_ACCESS)
                                                 3, \
                                                 METHOD_BUFFERED, \
                                                 FILE_WRITE_ACCESS)
                                                 4, \
                                                 METHOD_BUFFERED, \
                                                 FILE_WRITE_ACCESS)
                                                 5, \
                                                 METHOD_IN_DIRECT, \
                                                 FILE_WRITE_ACCESS)
typedef struct _IR_TRANSMIT_PARAMS {
             ULONG_PTR TransmitPortMask;
             ULONG_PTR CarrierPeriod;
             ULONG_PTR Flags;
             ULONG_PTR PulseSize;
} IR_TRANSMIT_PARAMS, *PIR_TRANSMIT_PARAMS;
typedef struct _IR_TRANSMIT_CHUNK {
    ULONG_PTR OffsetToNextChunk;
    ULONG_PTR RepeatCount;
    ULONG_PTR ByteCount;
    LONG Data[1];
} IR_TRANSMIT_CHUNK, *PIR_TRANSMIT_CHUNK;
                                                 6, \
                                                 METHOD_OUT_DIRECT, \
                                                 FILE_READ_ACCESS)
typedef struct _IR_RECEIVE_PARAMS {
              ULONG_PTR DataEnd;
              ULONG_PTR ByteCount;
              LONG Data[1];
}IR_RECEIVE_PARAMS, *PIR_RECEIVE_PARAMS;
                                                 8, \
                                                 METHOD_OUT_DIRECT, \
                                                 FILE_READ_ACCESS)
typedef struct _IR_PRIORITY_RECEIVE_PARAMS {
              ULONG_PTR DataEnd;
              ULONG_PTR ByteCount;
              ULONG_PTR CarrierFrequency;
              LONG Data[1];
}IR_PRIORITY_RECEIVE_PARAMS, *PIR_PRIORITY_RECEIVE_PARAMS;
                                                 9, \
                                                 METHOD_BUFFERED, \
                                                 FILE_ANY_ACCESS)
                                                 10, \
                                                 METHOD_BUFFERED, \
                                                 FILE_WRITE_ACCESS)
typedef struct _IOCTL_IR_ENTER_PRIORITY_RECEIVE_PARAMS {
             ULONG_PTR Receiver;
             ULONG_PTR TimeOut;
}IOCTL_IR_ENTER_PRIORITY_RECEIVE_PARAMS, *PIOCTL_IR_ENTER_PRIORITY_RECEIVE_PARAMS;
                                                 11, \
                                                 METHOD_BUFFERED, \
                                                 FILE_WRITE_ACCESS)
                                                 12, \
                                                 METHOD_BUFFERED, \
                                                 FILE_WRITE_ACCESS)
                                                 13, \
                                                 METHOD_BUFFERED, \
                                                 FILE_WRITE_ACCESS)
                                                 14, \
                                                 METHOD_BUFFERED, \
                                                 FILE_WRITE_ACCESS)
typedef struct _IOCTL_IR_SET_WAKE_PATTERN_PARAMS {
             ULONG Protocol;
             ULONG Payload;
             ULONG Address;
} IR_SET_WAKE_PATTERN_PARAMS, *PIR_SET_WAKE_PATTERN_PARAMS;
#pragma warning(default:4201)
