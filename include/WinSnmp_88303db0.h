#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
#include <limits.h>
extern "C" {
typedef HANDLE HSNMP_SESSION, FAR *LPHSNMP_SESSION;
typedef HANDLE HSNMP_ENTITY, FAR *LPHSNMP_ENTITY;
typedef HANDLE HSNMP_CONTEXT, FAR *LPHSNMP_CONTEXT;
typedef HANDLE HSNMP_PDU, FAR *LPHSNMP_PDU;
typedef HANDLE HSNMP_VBL, FAR *LPHSNMP_VBL;
typedef unsigned char smiBYTE, FAR *smiLPBYTE;
#error can not define smiINT and smiUINT
typedef struct {
     smiUINT32 len;
     smiLPBYTE ptr;} smiOCTETS, FAR *smiLPOCTETS;
typedef const smiOCTETS FAR *smiLPCOCTETS;
typedef smiOCTETS smiBITS, FAR *smiLPBITS;
typedef struct {
     smiUINT32 len;
     smiLPUINT32 ptr;} smiOID, FAR *smiLPOID;
typedef const smiOID FAR *smiLPCOID;
typedef smiOCTETS smiIPADDR, FAR *smiLPIPADDR;
typedef smiUINT32 smiCNTR32, FAR *smiLPCNTR32;
typedef smiUINT32 smiGAUGE32, FAR *smiLPGAUGE32;
typedef smiUINT32 smiTIMETICKS, FAR *smiLPTIMETICKS;
typedef smiOCTETS smiOPAQUE, FAR *smiLPOPAQUE;
typedef smiOCTETS smiNSAPADDR, FAR *smiLPNSAPADDR;
typedef struct {
     smiUINT32 hipart;
     smiUINT32 lopart;} smiCNTR64, FAR *smiLPCNTR64;
typedef struct {
     smiUINT32 syntax;
     union {
     smiINT sNumber;
     smiUINT32 uNumber;
     smiCNTR64 hNumber;
     smiOCTETS string;
     smiOID oid;
     smiBYTE empty;
         } value;
     } smiVALUE, FAR *smiLPVALUE;
typedef const smiVALUE FAR *smiLPCVALUE;
typedef smiUINT32 SNMPAPI_STATUS;
typedef struct
    {
    char vendorName[MAXVENDORINFO*2];
    char vendorContact[MAXVENDORINFO*2];
    char vendorVersionId[MAXVENDORINFO];
    char vendorVersionDate[MAXVENDORINFO];
    smiUINT32 vendorEnterprise;
    } smiVENDORINFO, FAR *smiLPVENDORINFO;
typedef SNMPAPI_STATUS (CALLBACK *SNMPAPI_CALLBACK)
                        (IN HSNMP_SESSION hSession,
                         IN HWND hWnd,
                         IN UINT wMsg,
                         IN WPARAM wParam,
                         IN LPARAM lParam,
                         IN LPVOID lpClientData);
SNMPAPI_STATUS SNMPAPI_CALL SnmpGetTranslateMode
                              (OUT smiLPUINT32 nTranslateMode);
SNMPAPI_STATUS SNMPAPI_CALL SnmpSetTranslateMode
                              (IN smiUINT32 nTranslateMode);
SNMPAPI_STATUS SNMPAPI_CALL SnmpGetRetransmitMode
                              (OUT smiLPUINT32 nRetransmitMode);
SNMPAPI_STATUS SNMPAPI_CALL SnmpSetRetransmitMode
                              (IN smiUINT32 nRetransmitMode);
SNMPAPI_STATUS SNMPAPI_CALL SnmpGetTimeout
                              (IN HSNMP_ENTITY hEntity,
                              OUT smiLPTIMETICKS nPolicyTimeout,
                              OUT smiLPTIMETICKS nActualTimeout);
SNMPAPI_STATUS SNMPAPI_CALL SnmpSetTimeout
                              (IN HSNMP_ENTITY hEntity,
                              IN smiTIMETICKS nPolicyTimeout);
SNMPAPI_STATUS SNMPAPI_CALL SnmpGetRetry
                              (IN HSNMP_ENTITY hEntity,
                              OUT smiLPUINT32 nPolicyRetry,
                              OUT smiLPUINT32 nActualRetry);
SNMPAPI_STATUS SNMPAPI_CALL SnmpSetRetry
                              (IN HSNMP_ENTITY hEntity,
                              IN smiUINT32 nPolicyRetry);
SNMPAPI_STATUS SNMPAPI_CALL SnmpGetVendorInfo
                              (OUT smiLPVENDORINFO vendorInfo);
SNMPAPI_STATUS SNMPAPI_CALL SnmpStartup
                              (OUT smiLPUINT32 nMajorVersion,
                              OUT smiLPUINT32 nMinorVersion,
                              OUT smiLPUINT32 nLevel,
                              OUT smiLPUINT32 nTranslateMode,
                              OUT smiLPUINT32 nRetransmitMode);
SNMPAPI_STATUS SNMPAPI_CALL SnmpCleanup
                              (void);
HSNMP_SESSION SNMPAPI_CALL SnmpOpen
                              (IN HWND hWnd,
                              IN UINT wMsg);
SNMPAPI_STATUS SNMPAPI_CALL SnmpClose
                              (IN HSNMP_SESSION session);
SNMPAPI_STATUS SNMPAPI_CALL SnmpSendMsg
                              (IN HSNMP_SESSION session,
                              IN HSNMP_ENTITY srcEntity,
                              IN HSNMP_ENTITY dstEntity,
                              IN HSNMP_CONTEXT context,
                              IN HSNMP_PDU PDU);
SNMPAPI_STATUS SNMPAPI_CALL SnmpRecvMsg
                              (IN HSNMP_SESSION session,
                              OUT LPHSNMP_ENTITY srcEntity,
                              OUT LPHSNMP_ENTITY dstEntity,
                              OUT LPHSNMP_CONTEXT context,
                              OUT LPHSNMP_PDU PDU);
SNMPAPI_STATUS SNMPAPI_CALL SnmpRegister
                              (IN HSNMP_SESSION session,
                              IN HSNMP_ENTITY srcEntity,
                              IN HSNMP_ENTITY dstEntity,
                              IN HSNMP_CONTEXT context,
                              IN smiLPCOID notification,
                              IN smiUINT32 state);
HSNMP_SESSION SNMPAPI_CALL SnmpCreateSession
                              (IN HWND hWnd,
                              IN UINT wMsg,
                              IN SNMPAPI_CALLBACK fCallBack,
                              IN LPVOID lpClientData);
SNMPAPI_STATUS SNMPAPI_CALL SnmpListen
                              (IN HSNMP_ENTITY hEntity,
                              IN SNMPAPI_STATUS lStatus);
SNMPAPI_STATUS SNMPAPI_CALL SnmpListenEx
                              (IN HSNMP_ENTITY hEntity,
                              IN SNMPAPI_STATUS lStatus,
                              IN smiUINT32 nUseEntityAddr);
SNMPAPI_STATUS SNMPAPI_CALL SnmpCancelMsg
                              (IN HSNMP_SESSION session,
                              IN smiINT32 reqId);
SNMPAPI_STATUS SNMPAPI_CALL SnmpStartupEx
                            (OUT smiLPUINT32 nMajorVersion,
                             OUT smiLPUINT32 nMinorVersion,
                             OUT smiLPUINT32 nLevel,
                             OUT smiLPUINT32 nTranslateMode,
                             OUT smiLPUINT32 nRetransmitMode);
typedef SNMPAPI_STATUS (SNMPAPI_CALL * PFNSNMPSTARTUPEX)( smiLPUINT32,
                                                        smiLPUINT32,
                                                        smiLPUINT32,
                                                        smiLPUINT32,
                                                        smiLPUINT32);
SNMPAPI_STATUS SNMPAPI_CALL SnmpCleanupEx
                            (void);
typedef SNMPAPI_STATUS (SNMPAPI_CALL * PFNSNMPCLEANUPEX)(void);
HSNMP_ENTITY SNMPAPI_CALL SnmpStrToEntity
                              (IN HSNMP_SESSION session,
                              IN LPCSTR string);
SNMPAPI_STATUS SNMPAPI_CALL SnmpEntityToStr
                              (_In_ HSNMP_ENTITY entity,
                              _In_ smiUINT32 size,
                              _Out_writes_(size) LPSTR string);
SNMPAPI_STATUS SNMPAPI_CALL SnmpFreeEntity
                              (IN HSNMP_ENTITY entity);
HSNMP_CONTEXT SNMPAPI_CALL SnmpStrToContext
                              (IN HSNMP_SESSION session,
                              IN smiLPCOCTETS string);
SNMPAPI_STATUS SNMPAPI_CALL SnmpContextToStr
                              (IN HSNMP_CONTEXT context,
                              OUT smiLPOCTETS string);
SNMPAPI_STATUS SNMPAPI_CALL SnmpFreeContext
                              (IN HSNMP_CONTEXT context);
SNMPAPI_STATUS SNMPAPI_CALL SnmpSetPort
                              (IN HSNMP_ENTITY hEntity,
                              IN UINT nPort);
HSNMP_PDU SNMPAPI_CALL SnmpCreatePdu
                              (IN HSNMP_SESSION session,
                              IN smiINT PDU_type,
                              IN smiINT32 request_id,
                              IN smiINT error_status,
                              IN smiINT error_index,
                              IN HSNMP_VBL varbindlist);
SNMPAPI_STATUS SNMPAPI_CALL SnmpGetPduData
                              (IN HSNMP_PDU PDU,
                              OUT smiLPINT PDU_type,
                              OUT smiLPINT32 request_id,
                              OUT smiLPINT error_status,
                              OUT smiLPINT error_index,
                              OUT LPHSNMP_VBL varbindlist);
SNMPAPI_STATUS SNMPAPI_CALL SnmpSetPduData
                              (IN HSNMP_PDU PDU,
                              IN const smiINT FAR *PDU_type,
                              IN const smiINT32 FAR *request_id,
                              IN const smiINT FAR *non_repeaters,
                              IN const smiINT FAR *max_repetitions,
                              IN const HSNMP_VBL FAR *varbindlist);
HSNMP_PDU SNMPAPI_CALL SnmpDuplicatePdu
                              (IN HSNMP_SESSION session,
                              IN HSNMP_PDU PDU);
SNMPAPI_STATUS SNMPAPI_CALL SnmpFreePdu
                              (IN HSNMP_PDU PDU);
HSNMP_VBL SNMPAPI_CALL SnmpCreateVbl
                              (IN HSNMP_SESSION session,
                              IN smiLPCOID name,
                              IN smiLPCVALUE value);
HSNMP_VBL SNMPAPI_CALL SnmpDuplicateVbl
                              (IN HSNMP_SESSION session,
                              IN HSNMP_VBL vbl);
SNMPAPI_STATUS SNMPAPI_CALL SnmpFreeVbl
                              (IN HSNMP_VBL vbl);
SNMPAPI_STATUS SNMPAPI_CALL SnmpCountVbl
                              (IN HSNMP_VBL vbl);
SNMPAPI_STATUS SNMPAPI_CALL SnmpGetVb
                              (IN HSNMP_VBL vbl,
                              IN smiUINT32 index,
                              OUT smiLPOID name,
                              OUT smiLPVALUE value);
SNMPAPI_STATUS SNMPAPI_CALL SnmpSetVb
                              (IN HSNMP_VBL vbl,
                              IN smiUINT32 index,
                              IN smiLPCOID name,
                              IN smiLPCVALUE value);
SNMPAPI_STATUS SNMPAPI_CALL SnmpDeleteVb
                              (IN HSNMP_VBL vbl,
                              IN smiUINT32 index);
SNMPAPI_STATUS SNMPAPI_CALL SnmpGetLastError
                              (IN HSNMP_SESSION session);
SNMPAPI_STATUS SNMPAPI_CALL SnmpStrToOid
                              (IN LPCSTR string,
                              OUT smiLPOID dstOID);
SNMPAPI_STATUS SNMPAPI_CALL SnmpOidToStr
                              (_In_ smiLPCOID srcOID,
                              _In_ smiUINT32 size,
                              _Out_writes_(size) LPSTR string);
SNMPAPI_STATUS SNMPAPI_CALL SnmpOidCopy
                              (IN smiLPCOID srcOID,
                              OUT smiLPOID dstOID);
SNMPAPI_STATUS SNMPAPI_CALL SnmpOidCompare
                              (IN smiLPCOID xOID,
                              IN smiLPCOID yOID,
                              IN smiUINT32 maxlen,
                              OUT smiLPINT result);
SNMPAPI_STATUS SNMPAPI_CALL SnmpEncodeMsg
                              (IN HSNMP_SESSION session,
                              IN HSNMP_ENTITY srcEntity,
                              IN HSNMP_ENTITY dstEntity,
                              IN HSNMP_CONTEXT context,
                              IN HSNMP_PDU pdu,
                              OUT smiLPOCTETS msgBufDesc);
SNMPAPI_STATUS SNMPAPI_CALL SnmpDecodeMsg
                              (IN HSNMP_SESSION session,
                              OUT LPHSNMP_ENTITY srcEntity,
                              OUT LPHSNMP_ENTITY dstEntity,
                              OUT LPHSNMP_CONTEXT context,
                              OUT LPHSNMP_PDU pdu,
                              IN smiLPCOCTETS msgBufDesc);
SNMPAPI_STATUS SNMPAPI_CALL SnmpFreeDescriptor
                              (IN smiUINT32 syntax,
                              IN smiLPOPAQUE descriptor);
}
#endif
#pragma endregion
