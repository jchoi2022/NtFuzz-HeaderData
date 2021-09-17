#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum { NLOPT_SET_ENCRYPT,
      NLOPT_SET_PACKET_SIZE } OPT_REQUEST;
typedef struct _OPTSTRUCT
{
 int iSize;
 BOOL fEncrypt;
 OPT_REQUEST iRequest;
 DWORD dwPacketSize;
}
OPTSTRUCT;
IOINT ConnectionObjectSize( void );
IOINT ConnectionRead( void *,
                                  BYTE *,
                                  IOINT,
                                  IOINT,
                                  TIMEINT,
                                  NETERR UNALIGNED * );
IOINT ConnectionWrite( void *,
                                   BYTE *,
                                   IOINT,
                                   NETERR UNALIGNED * );
IOINT ConnectionTransact( void *,
                                      BYTE *,
                                      BYTE *,
                                      IOINT,
                                      IOINT,
                                      IOINT,
                                      TIMEINT,
                                      NETERR UNALIGNED * );
IOINT ConnectionWriteOOB( void *,
                                      BYTE *,
                                      IOINT,
                                      NETERR UNALIGNED * );
RETCODE ConnectionOpen( void *,
                                    CHAR *,
                                    NETERR * );
RETCODE ConnectionOpenW( void *,
                                     WCHAR *,
                                     NETERR * );
RETCODE ConnectionClose( void *,
                                     NETERR UNALIGNED * );
RETCODE ConnectionCheckForData( void *,
                                            LONG *,
                                            NETERR UNALIGNED * );
BOOL ConnectionError( void *,
                                  NETERR *,
                                  CHAR **,
                                  NETERR * );
BOOL ConnectionErrorW( void *,
                                   NETERR *,
                                   WCHAR **,
                                   NETERR * );
ULONG ConnectionVer(void);
ULONG ConnectionSqlVer( void * );
RETCODE ConnectionServerEnum( CHAR *,
            IOINT,
            IOINT UNALIGNED * );
RETCODE ConnectionServerEnumW( WCHAR *,
             ULONG,
             IOINT UNALIGNED * );
BOOL ConnectionOption( void * ,
                                   OPTSTRUCT * );
void ConnectionGetSvrUser( void * ,
                           char * );
HANDLE InitEnumServers( LPWSTR ,
                        LPWSTR );
BOOL GetNextEnumeration( HANDLE ,
                         BYTE * ,
                         int * );
void CloseEnumServers( HANDLE );
BOOL InitSSPIPackage (DWORD *pcbMaxMessage);
BOOL TermSSPIPackage (void);
BOOL GenClientContext (DWORD dwKey, BYTE *pIn, DWORD cbIn, BYTE *pOut, DWORD *pcbOut, BOOL *pfDone, CHAR *szUserName);
BOOL InitSession (DWORD dwKey);
BOOL TermSession (DWORD dwKey);
#endif
#pragma endregion
