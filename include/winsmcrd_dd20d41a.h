extern "C" {
typedef DWORD ULONG;
typedef WORD UWORD;
typedef BYTE UCHAR;
DEFINE_GUID(GUID_DEVINTERFACE_SMARTCARD_READER,
            0x50DD5230, 0xBA8A, 0x11D1, 0xBF, 0x5D, 0x00, 0x00, 0xF8, 0x05, 0xF5, 0x30);
                                            (code), \
                                            METHOD_BUFFERED, \
                                            FILE_ANY_ACCESS)
typedef struct _SCARD_IO_REQUEST{
    DWORD dwProtocol;
    DWORD cbPciLength;
} SCARD_IO_REQUEST, *PSCARD_IO_REQUEST, *LPSCARD_IO_REQUEST;
typedef const SCARD_IO_REQUEST *LPCSCARD_IO_REQUEST;
typedef struct _SCARD_T0_COMMAND {
    BYTE
        bCla,
        bIns,
        bP1,
        bP2,
        bP3;
} SCARD_T0_COMMAND, *LPSCARD_T0_COMMAND;
typedef struct _SCARD_T0_REQUEST {
    SCARD_IO_REQUEST ioRequest;
    BYTE
        bSw1,
        bSw2;
#pragma warning(push)
#pragma warning(disable:4201)
    union
    {
        SCARD_T0_COMMAND CmdBytes;
        BYTE rgbHeader[5];
    } DUMMYUNIONNAME;
#pragma warning(pop)
} SCARD_T0_REQUEST;
typedef SCARD_T0_REQUEST *PSCARD_T0_REQUEST, *LPSCARD_T0_REQUEST;
typedef struct _SCARD_T1_REQUEST {
    SCARD_IO_REQUEST ioRequest;
} SCARD_T1_REQUEST;
typedef SCARD_T1_REQUEST *PSCARD_T1_REQUEST, *LPSCARD_T1_REQUEST;
}
