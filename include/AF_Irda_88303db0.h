#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
enum
{
  LM_HB_Extension = 128,
  LM_HB1_PnP = 1,
  LM_HB1_PDA_Palmtop = 2,
  LM_HB1_Computer = 4,
  LM_HB1_Printer = 8,
  LM_HB1_Modem = 16,
  LM_HB1_Fax = 32,
  LM_HB1_LANAccess = 64,
  LM_HB2_Telephony = 1,
  LM_HB2_FileServer = 2,
};
typedef u_long LM_BAUD_RATE;
typedef struct
{
    u_long nTXDataBytes;
    u_long nRXDataBytes;
    LM_BAUD_RATE nBaudRate;
    u_long thresholdTime;
    u_long discTime;
    u_short nMSLinkTurn;
    u_char nTXPackets;
    u_char nRXPackets;
} LM_IRPARMS,*PLM_IRPARMS;
typedef struct _SOCKADDR_IRDA
{
 u_short irdaAddressFamily;
 u_char irdaDeviceID[4];
 char irdaServiceName[25];
} SOCKADDR_IRDA, *PSOCKADDR_IRDA, FAR *LPSOCKADDR_IRDA;
typedef struct _WINDOWS_IRDA_DEVICE_INFO
{
 u_char irdaDeviceID[4];
 char irdaDeviceName[22];
 u_char irdaDeviceHints1;
 u_char irdaDeviceHints2;
 u_char irdaCharSet;
} WINDOWS_IRDA_DEVICE_INFO, *PWINDOWS_IRDA_DEVICE_INFO, FAR *LPWINDOWS_IRDA_DEVICE_INFO;
typedef struct _WCE_IRDA_DEVICE_INFO
{
 u_char irdaDeviceID[4];
 char irdaDeviceName[22];
    u_char Reserved[2];
} WCE_IRDA_DEVICE_INFO, *PWCE_IRDA_DEVICE_INFO;
typedef WINDOWS_IRDA_DEVICE_INFO IRDA_DEVICE_INFO, *PIRDA_DEVICE_INFO, FAR *LPIRDA_DEVICE_INFO;
typedef struct _WINDOWS_DEVICELIST
{
 ULONG numDevice;
 WINDOWS_IRDA_DEVICE_INFO Device[1];
} WINDOWS_DEVICELIST, *PWINDOWS_DEVICELIST, FAR *LPWINDOWS_DEVICELIST;
typedef struct _WCE_DEVICELIST
{
 ULONG numDevice;
 WCE_IRDA_DEVICE_INFO Device[1];
} WCE_DEVICELIST, *PWCE_DEVICELIST;
typedef WINDOWS_DEVICELIST DEVICELIST, *PDEVICELIST, FAR *LPDEVICELIST;
typedef struct _WINDOWS_IAS_SET
{
    char irdaClassName[IAS_MAX_CLASSNAME];
    char irdaAttribName[IAS_MAX_ATTRIBNAME];
    u_long irdaAttribType;
    union
    {
        LONG irdaAttribInt;
        struct
        {
            u_short Len;
            u_char OctetSeq[IAS_MAX_OCTET_STRING];
        } irdaAttribOctetSeq;
        struct
        {
            u_char Len;
            u_char CharSet;
            u_char UsrStr[IAS_MAX_USER_STRING];
  } irdaAttribUsrStr;
    } irdaAttribute;
} WINDOWS_IAS_SET, *PWINDOWS_IAS_SET, FAR *LPWINDOWS_IAS_SET;
typedef struct _WINDOWS_IAS_QUERY
{
 u_char irdaDeviceID[4];
    char irdaClassName[IAS_MAX_CLASSNAME];
    char irdaAttribName[IAS_MAX_ATTRIBNAME];
    u_long irdaAttribType;
    union
    {
        LONG irdaAttribInt;
        struct
        {
            u_long Len;
            u_char OctetSeq[IAS_MAX_OCTET_STRING];
        } irdaAttribOctetSeq;
        struct
        {
            u_long Len;
            u_long CharSet;
            u_char UsrStr[IAS_MAX_USER_STRING];
        } irdaAttribUsrStr;
    } irdaAttribute;
} WINDOWS_IAS_QUERY, *PWINDOWS_IAS_QUERY, FAR *LPWINDOWS_IAS_QUERY;
typedef WINDOWS_IAS_SET IAS_SET, *PIAS_SET, FAR *LPIASSET;
typedef WINDOWS_IAS_QUERY IAS_QUERY, *PIAS_QUERY, FAR *LPIASQUERY;
#endif
#pragma endregion
