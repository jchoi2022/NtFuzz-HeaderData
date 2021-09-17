#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C"
{
typedef struct {
    USHORT obj_length;
    UCHAR obj_class;
    UCHAR obj_ctype;
} RsvpObjHdr;
typedef struct {
    IN_ADDR sess_destaddr;
    UCHAR sess_protid;
    UCHAR sess_flags;
    USHORT sess_destport;
} Session_IPv4;
typedef struct {
    RsvpObjHdr sess_header;
    union {
        Session_IPv4 sess_ipv4;
    } sess_u;
} RSVP_SESSION;
typedef struct {
    IN_ADDR hop_ipaddr;
    ULONG hop_LIH;
} Rsvp_Hop_IPv4;
typedef struct {
    RsvpObjHdr hop_header;
    union {
        Rsvp_Hop_IPv4 hop_ipv4;
    } hop_u;
} RSVP_HOP;
typedef struct {
    RsvpObjHdr style_header;
    ULONG style_word;
} RESV_STYLE;
typedef struct {
    IN_ADDR filt_ipaddr;
    USHORT filt_unused;
    USHORT filt_port;
} Filter_Spec_IPv4;
typedef struct {
    IN_ADDR filt_ipaddr;
    ULONG filt_gpi;
} Filter_Spec_IPv4GPI;
typedef struct {
    RsvpObjHdr filt_header;
    union {
        Filter_Spec_IPv4 filt_ipv4;
        Filter_Spec_IPv4GPI filt_ipv4gpi;
    } filt_u;
} FILTER_SPEC;
typedef FILTER_SPEC SENDER_TEMPLATE;
typedef struct {
    IN_ADDR scopl_ipaddr[1];
} Scope_list_ipv4;
typedef struct {
    RsvpObjHdr scopl_header;
    union {
        Scope_list_ipv4 scopl_ipv4;
    } scope_u;
} RSVP_SCOPE;
typedef struct {
    struct in_addr errs_errnode;
    u_char errs_flags;
    UCHAR errs_code;
    USHORT errs_value;
} Error_Spec_IPv4;
typedef struct {
    RsvpObjHdr errs_header;
    union {
        Error_Spec_IPv4 errs_ipv4;
    } errs_u;
} ERROR_SPEC;
typedef struct {
    RsvpObjHdr PolicyObjHdr;
    USHORT usPeOffset;
    USHORT usReserved;
} POLICY_DATA;
typedef struct {
    USHORT usPeLength;
    USHORT usPeType;
    UCHAR ucPeData[4];
} POLICY_ELEMENT;
enum int_serv_wkp {
    IS_WKP_HOP_CNT = 4,
    IS_WKP_PATH_BW = 6,
    IS_WKP_MIN_LATENCY = 8,
    IS_WKP_COMPOSED_MTU = 10,
    IS_WKP_TB_TSPEC = 127,
    IS_WKP_Q_TSPEC = 128
};
typedef struct {
    UCHAR ismh_version;
    UCHAR ismh_unused;
    USHORT ismh_len32b;
} IntServMainHdr;
                                INTSERV_VERSION0)
                            sizeof(IntServMainHdr) + sizeof(RsvpObjHdr))
typedef struct {
    UCHAR issh_service;
    UCHAR issh_flags;
    USHORT issh_len32b;
} IntServServiceHdr;
typedef struct {
    UCHAR isph_parm_num;
    UCHAR isph_flags;
    USHORT isph_len32b;
} IntServParmHdr;
typedef struct {
    FLOAT TB_Tspec_r;
    FLOAT TB_Tspec_b;
    FLOAT TB_Tspec_p;
    ULONG TB_Tspec_m;
    ULONG TB_Tspec_M;
} GenTspecParms;
typedef struct {
    IntServServiceHdr gen_Tspec_serv_hdr;
    IntServParmHdr gen_Tspec_parm_hdr;
    GenTspecParms gen_Tspec_parms;
} GenTspec;
typedef struct {
    ULONG TB_Tspec_M;
} QualTspecParms;
typedef struct {
    IntServServiceHdr qual_Tspec_serv_hdr;
    IntServParmHdr qual_Tspec_parm_hdr;
    QualTspecParms qual_Tspec_parms;
} QualTspec;
typedef struct {
    IntServServiceHdr Q_spec_serv_hdr;
    IntServParmHdr Q_spec_parm_hdr;
    QualTspecParms Q_spec_parms;
} QualAppFlowSpec;
typedef struct {
    IntServMainHdr st_mh;
    union {
        GenTspec gen_stspec;
        QualTspec qual_stspec;
    } tspec_u;
} IntServTspecBody;
typedef struct {
    RsvpObjHdr stspec_header;
    IntServTspecBody stspec_body;
} SENDER_TSPEC;
typedef struct {
    IntServServiceHdr CL_spec_serv_hdr;
    IntServParmHdr CL_spec_parm_hdr;
    GenTspecParms CL_spec_parms;
} CtrlLoadFlowspec;
enum {
    IS_GUAR_RSPEC = 130,
    GUAR_ADSPARM_C = 131,
    GUAR_ADSPARM_D = 132,
    GUAR_ADSPARM_Ctot = 133,
    GUAR_ADSPARM_Dtot = 134,
    GUAR_ADSPARM_Csum = 135,
    GUAR_ADSPARM_Dsum = 136
};
typedef struct {
    FLOAT Guar_R;
    ULONG Guar_S;
} GuarRspec;
typedef struct {
    IntServServiceHdr Guar_serv_hdr;
    IntServParmHdr Guar_Tspec_hdr;
    GenTspecParms Guar_Tspec_parms;
    IntServParmHdr Guar_Rspec_hdr;
    GuarRspec Guar_Rspec;
} GuarFlowSpec;
typedef struct {
    IntServMainHdr spec_mh;
    union {
        CtrlLoadFlowspec CL_spec;
        GuarFlowSpec G_spec;
        QualAppFlowSpec Q_spec;
    } spec_u;
} IntServFlowSpec;
typedef struct {
    RsvpObjHdr flow_header;
    IntServFlowSpec flow_body;
}IS_FLOWSPEC;
typedef struct flow_desc {
    union {
        SENDER_TSPEC *stspec;
        IS_FLOWSPEC *isflow;
    } u1;
    union {
       SENDER_TEMPLATE *stemp;
       FILTER_SPEC *fspec;
    } u2;
} FLOW_DESC;
typedef struct {
    IntServServiceHdr Gads_serv_hdr;
    IntServParmHdr Gads_Ctot_hdr;
    ULONG Gads_Ctot;
    IntServParmHdr Gads_Dtot_hdr;
    ULONG Gads_Dtot;
    IntServParmHdr Gads_Csum_hdr;
    ULONG Gads_Csum;
    IntServParmHdr Gads_Dsum_hdr;
    ULONG Gads_Dsum;
} Gads_parms_t;
typedef struct {
    IntServServiceHdr gen_parm_hdr;
    IntServParmHdr gen_parm_hopcnt_hdr;
    ULONG gen_parm_hopcnt;
    IntServParmHdr gen_parm_pathbw_hdr;
    FLOAT gen_parm_path_bw;
    IntServParmHdr gen_parm_minlat_hdr;
    ULONG gen_parm_min_latency;
    IntServParmHdr gen_parm_compmtu_hdr;
    ULONG gen_parm_composed_MTU;
} GenAdspecParams;
typedef struct {
    IntServMainHdr adspec_mh;
    GenAdspecParams adspec_genparms;
} IS_ADSPEC_BODY;
typedef struct {
    RsvpObjHdr adspec_header;
    IS_ADSPEC_BODY adspec_body;
} ADSPEC;
typedef struct {
    USHORT usIdErrLength;
    UCHAR ucAType;
    UCHAR ucSubType;
    USHORT usReserved;
    USHORT usIdErrorValue;
    UCHAR ucIdErrData[4];
} ID_ERROR_OBJECT;
DECLARE_HANDLE(LPM_HANDLE);
DECLARE_HANDLE(RHANDLE);
typedef ULONG LPV;
typedef USHORT PETYPE;
typedef int MSG_TYPE;
typedef struct rsvpmsgobjs {
    MSG_TYPE RsvpMsgType;
    RSVP_SESSION *pRsvpSession;
    RSVP_HOP *pRsvpFromHop;
    RSVP_HOP *pRsvpToHop;
    RESV_STYLE *pResvStyle;
    RSVP_SCOPE *pRsvpScope;
    int FlowDescCount;
    FLOW_DESC *pFlowDescs;
    int PdObjectCount;
    POLICY_DATA **ppPdObjects;
    ERROR_SPEC *pErrorSpec;
    ADSPEC *pAdspec;
} RSVP_MSG_OBJS;
typedef void *
(APIENTRY * PALLOCMEM) ( DWORD Size );
typedef void
(APIENTRY * PFREEMEM) ( void *pv );
typedef struct policy_decision
{
    LPV lpvResult;
    WORD wPolicyErrCode;
    WORD wPolicyErrValue;
} POLICY_DECISION;
typedef
ULONG *
(CALLBACK * CBADMITRESULT) (
        LPM_HANDLE LpmHandle,
        RHANDLE RequestHandle,
        ULONG ulPcmActionFlags,
        int LpmError,
        int PolicyDecisionsCount,
        POLICY_DECISION *pPolicyDecisions );
typedef
ULONG *
(CALLBACK * CBGETRSVPOBJECTS) (
        LPM_HANDLE LpmHandle,
        RHANDLE RequestHandle,
        int LpmError,
        int RsvpObjectsCount,
        RsvpObjHdr **ppRsvpObjects );
typedef struct lpminitinfo {
    DWORD PcmVersionNumber;
    DWORD ResultTimeLimit;
    int ConfiguredLpmCount;
    PALLOCMEM AllocMemory;
    PFREEMEM FreeMemory;
    CBADMITRESULT PcmAdmitResultCallback;
    CBGETRSVPOBJECTS GetRsvpObjectsCallback;
} LPM_INIT_INFO;
ULONG
APIENTRY
LPM_Initialize (
    IN LPM_HANDLE LpmHandle,
    IN LPM_INIT_INFO *pLpmInitInfo,
    OUT DWORD *pLpmVersionNumber,
    OUT PETYPE *pSupportedPeType,
    OUT VOID *Reserved );
ULONG
APIENTRY
LPM_Deinitialize (
    IN LPM_HANDLE LpmHandle );
ULONG
APIENTRY
LPM_AdmitRsvpMsg (
    IN RHANDLE PcmReqHandle,
    IN RSVP_HOP *pRecvdIntf,
    IN RSVP_MSG_OBJS *pRsvpMsgObjs,
    IN int RcvdRsvpMsgLength,
    IN UCHAR *RcvdRsvpMsg,
    OUT ULONG *pulPcmActionFlags,
    OUT POLICY_DECISION *pPolicyDecisions,
    OUT void *Reserved );
ULONG
APIENTRY
LPM_GetRsvpObjects (
    IN RHANDLE PcmReqHandle,
    IN ULONG MaxPdSize,
    IN RSVP_HOP *SendingIntfAddr,
    IN RSVP_MSG_OBJS *pRsvpMsgObjs,
    OUT int *pRsvpObjectsCount,
    OUT RsvpObjHdr ***pppRsvpObjects,
    OUT void *Reserved );
VOID
APIENTRY
LPM_DeleteState(
    IN RSVP_HOP *pRcvdIfAddr,
    IN MSG_TYPE RsvpMsgType,
    IN RSVP_SESSION *pRsvpSession,
    IN RSVP_HOP *pRsvpFromHop,
    IN RESV_STYLE *pResvStyle,
    IN int FilterSpecCount,
    IN FILTER_SPEC **ppFilterSpecList,
    IN int TearDownReason );
typedef struct lpmiptable {
    ULONG ulIfIndex;
    ULONG MediaType;
    IN_ADDR IfIpAddr;
    IN_ADDR IfNetMask;
} LPMIPTABLE;
BOOL
APIENTRY
LPM_IpAddressTable (
    IN ULONG cIpAddrTable,
    IN LPMIPTABLE *pIpAddrTable );
VOID
APIENTRY
LPM_CommitResv (
    IN RSVP_SESSION *RsvpSession,
    IN RSVP_HOP *FlowInstalledIntf,
    IN RESV_STYLE *RsvpStyle,
    IN int FilterSpecCount,
    IN FILTER_SPEC **ppFilterSpecList,
    IN IS_FLOWSPEC *pMergedFlowSpec,
    IN ULONG CommitDecision );
}
#endif
#pragma endregion
