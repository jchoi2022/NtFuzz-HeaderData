#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
#include <lmcons.h>
NET_API_STATUS NET_API_FUNCTION
NetStatisticsGet (
    _In_ LPTSTR ServerName,
    _In_ LPTSTR Service,
    _In_ DWORD Level,
    _In_ DWORD Options,
    _Outptr_ LPBYTE *Buffer
    );
typedef struct _STAT_WORKSTATION_0 {
     DWORD stw0_start;
     DWORD stw0_numNCB_r;
     DWORD stw0_numNCB_s;
     DWORD stw0_numNCB_a;
     DWORD stw0_fiNCB_r;
     DWORD stw0_fiNCB_s;
     DWORD stw0_fiNCB_a;
     DWORD stw0_fcNCB_r;
     DWORD stw0_fcNCB_s;
     DWORD stw0_fcNCB_a;
     DWORD stw0_sesstart;
     DWORD stw0_sessfailcon;
     DWORD stw0_sessbroke;
     DWORD stw0_uses;
     DWORD stw0_usefail;
     DWORD stw0_autorec;
     DWORD stw0_bytessent_r_lo;
     DWORD stw0_bytessent_r_hi;
     DWORD stw0_bytesrcvd_r_lo;
     DWORD stw0_bytesrcvd_r_hi;
     DWORD stw0_bytessent_s_lo;
     DWORD stw0_bytessent_s_hi;
     DWORD stw0_bytesrcvd_s_lo;
     DWORD stw0_bytesrcvd_s_hi;
     DWORD stw0_bytessent_a_lo;
     DWORD stw0_bytessent_a_hi;
     DWORD stw0_bytesrcvd_a_lo;
     DWORD stw0_bytesrcvd_a_hi;
     DWORD stw0_reqbufneed;
     DWORD stw0_bigbufneed;
} STAT_WORKSTATION_0, *PSTAT_WORKSTATION_0, *LPSTAT_WORKSTATION_0;
typedef struct _STAT_SERVER_0 {
     DWORD sts0_start;
     DWORD sts0_fopens;
     DWORD sts0_devopens;
     DWORD sts0_jobsqueued;
     DWORD sts0_sopens;
     DWORD sts0_stimedout;
     DWORD sts0_serrorout;
     DWORD sts0_pwerrors;
     DWORD sts0_permerrors;
     DWORD sts0_syserrors;
     DWORD sts0_bytessent_low;
     DWORD sts0_bytessent_high;
     DWORD sts0_bytesrcvd_low;
     DWORD sts0_bytesrcvd_high;
     DWORD sts0_avresponse;
     DWORD sts0_reqbufneed;
     DWORD sts0_bigbufneed;
} STAT_SERVER_0, *PSTAT_SERVER_0, *LPSTAT_SERVER_0;
}
#endif
#pragma endregion
