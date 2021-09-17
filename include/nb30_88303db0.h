#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _NCB {
    UCHAR ncb_command;
    UCHAR ncb_retcode;
    UCHAR ncb_lsn;
    UCHAR ncb_num;
    PUCHAR ncb_buffer;
    WORD ncb_length;
    UCHAR ncb_callname[NCBNAMSZ];
    UCHAR ncb_name[NCBNAMSZ];
    UCHAR ncb_rto;
    UCHAR ncb_sto;
    void (CALLBACK *ncb_post)( struct _NCB * );
    UCHAR ncb_lana_num;
    UCHAR ncb_cmd_cplt;
    UCHAR ncb_reserve[18];
    HANDLE ncb_event;
} NCB, *PNCB;
typedef struct _ADAPTER_STATUS {
    UCHAR adapter_address[6];
    UCHAR rev_major;
    UCHAR reserved0;
    UCHAR adapter_type;
    UCHAR rev_minor;
    WORD duration;
    WORD frmr_recv;
    WORD frmr_xmit;
    WORD iframe_recv_err;
    WORD xmit_aborts;
    DWORD xmit_success;
    DWORD recv_success;
    WORD iframe_xmit_err;
    WORD recv_buff_unavail;
    WORD t1_timeouts;
    WORD ti_timeouts;
    DWORD reserved1;
    WORD free_ncbs;
    WORD max_cfg_ncbs;
    WORD max_ncbs;
    WORD xmit_buf_unavail;
    WORD max_dgram_size;
    WORD pending_sess;
    WORD max_cfg_sess;
    WORD max_sess;
    WORD max_sess_pkt_size;
    WORD name_count;
} ADAPTER_STATUS, *PADAPTER_STATUS;
typedef struct _NAME_BUFFER {
    UCHAR name[NCBNAMSZ];
    UCHAR name_num;
    UCHAR name_flags;
} NAME_BUFFER, *PNAME_BUFFER;
typedef struct _SESSION_HEADER {
    UCHAR sess_name;
    UCHAR num_sess;
    UCHAR rcv_dg_outstanding;
    UCHAR rcv_any_outstanding;
} SESSION_HEADER, *PSESSION_HEADER;
typedef struct _SESSION_BUFFER {
    UCHAR lsn;
    UCHAR state;
    UCHAR local_name[NCBNAMSZ];
    UCHAR remote_name[NCBNAMSZ];
    UCHAR rcvs_outstanding;
    UCHAR sends_outstanding;
} SESSION_BUFFER, *PSESSION_BUFFER;
typedef struct _LANA_ENUM {
    UCHAR length;
    UCHAR lana[MAX_LANA+1];
} LANA_ENUM, *PLANA_ENUM;
typedef struct _FIND_NAME_HEADER {
    WORD node_count;
    UCHAR reserved;
    UCHAR unique_group;
} FIND_NAME_HEADER, *PFIND_NAME_HEADER;
typedef struct _FIND_NAME_BUFFER {
    UCHAR length;
    UCHAR access_control;
    UCHAR frame_control;
    UCHAR destination_addr[6];
    UCHAR source_addr[6];
    UCHAR routing_info[18];
} FIND_NAME_BUFFER, *PFIND_NAME_BUFFER;
typedef struct _ACTION_HEADER {
    ULONG transport_id;
    USHORT action_code;
    USHORT reserved;
} ACTION_HEADER, *PACTION_HEADER;
UCHAR
APIENTRY
Netbios(
    PNCB pncb
    );
#endif
#pragma endregion
}
