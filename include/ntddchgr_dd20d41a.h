#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <ntddstor.h>
extern "C" {
typedef enum _ELEMENT_TYPE {
    AllElements,
    ChangerTransport,
    ChangerSlot,
    ChangerIEPort,
    ChangerDrive,
    ChangerDoor,
    ChangerKeypad,
    ChangerMaxElement
} ELEMENT_TYPE, *PELEMENT_TYPE;
typedef struct _CHANGER_ELEMENT {
    ELEMENT_TYPE ElementType;
    ULONG ElementAddress;
} CHANGER_ELEMENT, *PCHANGER_ELEMENT;
typedef struct _CHANGER_ELEMENT_LIST {
    CHANGER_ELEMENT Element;
    ULONG NumberOfElements;
} CHANGER_ELEMENT_LIST , *PCHANGER_ELEMENT_LIST;
typedef struct _GET_CHANGER_PARAMETERS {
    ULONG Size;
    USHORT NumberTransportElements;
    USHORT NumberStorageElements;
    USHORT NumberCleanerSlots;
    USHORT NumberIEElements;
    USHORT NumberDataTransferElements;
    USHORT NumberOfDoors;
    USHORT FirstSlotNumber;
    USHORT FirstDriveNumber;
    USHORT FirstTransportNumber;
    USHORT FirstIEPortNumber;
    USHORT FirstCleanerSlotAddress;
    USHORT MagazineSize;
    ULONG DriveCleanTimeout;
    ULONG Features0;
    ULONG Features1;
    UCHAR MoveFromTransport;
    UCHAR MoveFromSlot;
    UCHAR MoveFromIePort;
    UCHAR MoveFromDrive;
    UCHAR ExchangeFromTransport;
    UCHAR ExchangeFromSlot;
    UCHAR ExchangeFromIePort;
    UCHAR ExchangeFromDrive;
    UCHAR LockUnlockCapabilities;
    UCHAR PositionCapabilities;
    UCHAR Reserved1[2];
    ULONG Reserved2[2];
} GET_CHANGER_PARAMETERS, * PGET_CHANGER_PARAMETERS;
typedef struct _CHANGER_PRODUCT_DATA {
    UCHAR VendorId[VENDOR_ID_LENGTH];
    UCHAR ProductId[PRODUCT_ID_LENGTH];
    UCHAR Revision[REVISION_LENGTH];
    UCHAR SerialNumber[SERIAL_NUMBER_LENGTH];
    UCHAR DeviceType;
} CHANGER_PRODUCT_DATA, *PCHANGER_PRODUCT_DATA;
typedef struct _CHANGER_SET_ACCESS {
    CHANGER_ELEMENT Element;
    ULONG Control;
} CHANGER_SET_ACCESS, *PCHANGER_SET_ACCESS;
typedef struct _CHANGER_READ_ELEMENT_STATUS {
    CHANGER_ELEMENT_LIST ElementList;
    BOOLEAN VolumeTagInfo;
} CHANGER_READ_ELEMENT_STATUS, *PCHANGER_READ_ELEMENT_STATUS;
typedef struct _CHANGER_ELEMENT_STATUS {
    CHANGER_ELEMENT Element;
    CHANGER_ELEMENT SrcElementAddress;
    ULONG Flags;
    ULONG ExceptionCode;
    UCHAR TargetId;
    UCHAR Lun;
    USHORT Reserved;
    UCHAR PrimaryVolumeID[MAX_VOLUME_ID_SIZE];
    UCHAR AlternateVolumeID[MAX_VOLUME_ID_SIZE];
} CHANGER_ELEMENT_STATUS, *PCHANGER_ELEMENT_STATUS;
typedef struct _CHANGER_ELEMENT_STATUS_EX {
    CHANGER_ELEMENT Element;
    CHANGER_ELEMENT SrcElementAddress;
    ULONG Flags;
    ULONG ExceptionCode;
    UCHAR TargetId;
    UCHAR Lun;
    USHORT Reserved;
    UCHAR PrimaryVolumeID[MAX_VOLUME_ID_SIZE];
    UCHAR AlternateVolumeID[MAX_VOLUME_ID_SIZE];
    UCHAR VendorIdentification[VENDOR_ID_LENGTH];
    UCHAR ProductIdentification[PRODUCT_ID_LENGTH];
    UCHAR SerialNumber[SERIAL_NUMBER_LENGTH];
} CHANGER_ELEMENT_STATUS_EX, *PCHANGER_ELEMENT_STATUS_EX;
typedef struct _CHANGER_INITIALIZE_ELEMENT_STATUS {
    CHANGER_ELEMENT_LIST ElementList;
    BOOLEAN BarCodeScan;
} CHANGER_INITIALIZE_ELEMENT_STATUS, *PCHANGER_INITIALIZE_ELEMENT_STATUS;
typedef struct _CHANGER_SET_POSITION {
    CHANGER_ELEMENT Transport;
    CHANGER_ELEMENT Destination;
    BOOLEAN Flip;
} CHANGER_SET_POSITION, *PCHANGER_SET_POSITION;
typedef struct _CHANGER_EXCHANGE_MEDIUM {
    CHANGER_ELEMENT Transport;
    CHANGER_ELEMENT Source;
    CHANGER_ELEMENT Destination1;
    CHANGER_ELEMENT Destination2;
    BOOLEAN Flip1;
    BOOLEAN Flip2;
} CHANGER_EXCHANGE_MEDIUM, *PCHANGER_EXCHANGE_MEDIUM;
typedef struct _CHANGER_MOVE_MEDIUM {
    CHANGER_ELEMENT Transport;
    CHANGER_ELEMENT Source;
    CHANGER_ELEMENT Destination;
    BOOLEAN Flip;
} CHANGER_MOVE_MEDIUM, *PCHANGER_MOVE_MEDIUM;
typedef struct _CHANGER_SEND_VOLUME_TAG_INFORMATION {
    CHANGER_ELEMENT StartingElement;
    ULONG ActionCode;
    UCHAR VolumeIDTemplate[MAX_VOLUME_TEMPLATE_SIZE];
} CHANGER_SEND_VOLUME_TAG_INFORMATION, *PCHANGER_SEND_VOLUME_TAG_INFORMATION;
typedef struct _READ_ELEMENT_ADDRESS_INFO {
    ULONG NumberOfElements;
    CHANGER_ELEMENT_STATUS ElementStatus[1];
} READ_ELEMENT_ADDRESS_INFO, *PREAD_ELEMENT_ADDRESS_INFO;
typedef enum _CHANGER_DEVICE_PROBLEM_TYPE {
   DeviceProblemNone,
   DeviceProblemHardware,
   DeviceProblemCHMError,
   DeviceProblemDoorOpen,
   DeviceProblemCalibrationError,
   DeviceProblemTargetFailure,
   DeviceProblemCHMMoveError,
   DeviceProblemCHMZeroError,
   DeviceProblemCartridgeInsertError,
   DeviceProblemPositionError,
   DeviceProblemSensorError,
   DeviceProblemCartridgeEjectError,
   DeviceProblemGripperError,
   DeviceProblemDriveError
} CHANGER_DEVICE_PROBLEM_TYPE, *PCHANGER_DEVICE_PROBLEM_TYPE;
}
#endif
#pragma endregion
