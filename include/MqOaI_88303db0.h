#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IMSMQQuery IMSMQQuery;
typedef interface IMSMQQueueInfo IMSMQQueueInfo;
typedef interface IMSMQQueueInfo2 IMSMQQueueInfo2;
typedef interface IMSMQQueueInfo3 IMSMQQueueInfo3;
typedef interface IMSMQQueueInfo4 IMSMQQueueInfo4;
typedef interface IMSMQQueue IMSMQQueue;
typedef interface IMSMQQueue2 IMSMQQueue2;
typedef interface IMSMQQueue3 IMSMQQueue3;
typedef interface IMSMQQueue4 IMSMQQueue4;
typedef interface IMSMQMessage IMSMQMessage;
typedef interface IMSMQQueueInfos IMSMQQueueInfos;
typedef interface IMSMQQueueInfos2 IMSMQQueueInfos2;
typedef interface IMSMQQueueInfos3 IMSMQQueueInfos3;
typedef interface IMSMQQueueInfos4 IMSMQQueueInfos4;
typedef interface IMSMQEvent IMSMQEvent;
typedef interface IMSMQEvent2 IMSMQEvent2;
typedef interface IMSMQEvent3 IMSMQEvent3;
typedef interface IMSMQTransaction IMSMQTransaction;
typedef interface IMSMQCoordinatedTransactionDispenser IMSMQCoordinatedTransactionDispenser;
typedef interface IMSMQTransactionDispenser IMSMQTransactionDispenser;
typedef interface IMSMQQuery2 IMSMQQuery2;
typedef interface IMSMQQuery3 IMSMQQuery3;
typedef interface IMSMQQuery4 IMSMQQuery4;
typedef class MSMQQuery MSMQQuery;
typedef interface IMSMQMessage2 IMSMQMessage2;
typedef interface IMSMQMessage3 IMSMQMessage3;
typedef interface IMSMQMessage4 IMSMQMessage4;
typedef class MSMQMessage MSMQMessage;
typedef class MSMQQueue MSMQQueue;
typedef interface IMSMQPrivateEvent IMSMQPrivateEvent;
typedef interface _DMSMQEventEvents _DMSMQEventEvents;
typedef class MSMQEvent MSMQEvent;
typedef class MSMQQueueInfo MSMQQueueInfo;
typedef class MSMQQueueInfos MSMQQueueInfos;
typedef interface IMSMQTransaction2 IMSMQTransaction2;
typedef interface IMSMQTransaction3 IMSMQTransaction3;
typedef class MSMQTransaction MSMQTransaction;
typedef interface IMSMQCoordinatedTransactionDispenser2 IMSMQCoordinatedTransactionDispenser2;
typedef interface IMSMQCoordinatedTransactionDispenser3 IMSMQCoordinatedTransactionDispenser3;
typedef class MSMQCoordinatedTransactionDispenser MSMQCoordinatedTransactionDispenser;
typedef interface IMSMQTransactionDispenser2 IMSMQTransactionDispenser2;
typedef interface IMSMQTransactionDispenser3 IMSMQTransactionDispenser3;
typedef class MSMQTransactionDispenser MSMQTransactionDispenser;
typedef interface IMSMQApplication IMSMQApplication;
typedef interface IMSMQApplication2 IMSMQApplication2;
typedef interface IMSMQApplication3 IMSMQApplication3;
typedef class MSMQApplication MSMQApplication;
typedef interface IMSMQDestination IMSMQDestination;
typedef interface IMSMQPrivateDestination IMSMQPrivateDestination;
typedef class MSMQDestination MSMQDestination;
typedef interface IMSMQCollection IMSMQCollection;
typedef class MSMQCollection MSMQCollection;
typedef interface IMSMQManagement IMSMQManagement;
typedef class MSMQManagement MSMQManagement;
typedef interface IMSMQOutgoingQueueManagement IMSMQOutgoingQueueManagement;
typedef class MSMQOutgoingQueueManagement MSMQOutgoingQueueManagement;
typedef interface IMSMQQueueManagement IMSMQQueueManagement;
typedef class MSMQQueueManagement MSMQQueueManagement;
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mqoai_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mqoai_0000_0000_v0_0_s_ifspec;
typedef short Boolean;
typedef unsigned char BYTE;
typedef unsigned long ULONG;
typedef unsigned long DWORD;
typedef int BOOL;
enum MQCALG
    {
        MQMSG_CALG_MD2 = ( ( 0x8000 + 0 ) + 1 ) ,
        MQMSG_CALG_MD4 = ( ( 0x8000 + 0 ) + 2 ) ,
        MQMSG_CALG_MD5 = ( ( 0x8000 + 0 ) + 3 ) ,
        MQMSG_CALG_SHA = ( ( 0x8000 + 0 ) + 4 ) ,
        MQMSG_CALG_SHA1 = ( ( 0x8000 + 0 ) + 4 ) ,
        MQMSG_CALG_MAC = ( ( 0x8000 + 0 ) + 5 ) ,
        MQMSG_CALG_RSA_SIGN = ( ( 0x2000 + 0x400 ) + 0 ) ,
        MQMSG_CALG_DSS_SIGN = ( ( 0x2000 + 0x200 ) + 0 ) ,
        MQMSG_CALG_RSA_KEYX = ( ( 0xa000 + 0x400 ) + 0 ) ,
        MQMSG_CALG_DES = ( ( 0x6000 + 0x600 ) + 1 ) ,
        MQMSG_CALG_RC2 = ( ( 0x6000 + 0x600 ) + 2 ) ,
        MQMSG_CALG_RC4 = ( ( 0x6000 + 0x800 ) + 1 ) ,
        MQMSG_CALG_SEAL = ( ( 0x6000 + 0x800 ) + 2 )
    } ;
enum MQTRANSACTION
    {
        MQ_NO_TRANSACTION = 0,
        MQ_MTS_TRANSACTION = 1,
        MQ_XA_TRANSACTION = 2,
        MQ_SINGLE_MESSAGE = 3
    } ;
enum RELOPS
    {
        REL_NOP = 0,
        REL_EQ = ( REL_NOP + 1 ) ,
        REL_NEQ = ( REL_EQ + 1 ) ,
        REL_LT = ( REL_NEQ + 1 ) ,
        REL_GT = ( REL_LT + 1 ) ,
        REL_LE = ( REL_GT + 1 ) ,
        REL_GE = ( REL_LE + 1 )
    } ;
enum MQCERT_REGISTER
    {
        MQCERT_REGISTER_ALWAYS = 1,
        MQCERT_REGISTER_IF_NOT_EXIST = 2
    } ;
enum MQMSGCURSOR
    {
        MQMSG_FIRST = 0,
        MQMSG_CURRENT = 1,
        MQMSG_NEXT = 2
    } ;
enum MQMSGCLASS
    {
        MQMSG_CLASS_NORMAL = ( ( 0 + 0 ) + 0 ) ,
        MQMSG_CLASS_REPORT = ( ( 0 + 0 ) + 0x1 ) ,
        MQMSG_CLASS_ACK_REACH_QUEUE = ( ( 0 + 0 ) + 0x2 ) ,
        MQMSG_CLASS_ACK_RECEIVE = ( ( 0 + 0x4000 ) + 0 ) ,
        MQMSG_CLASS_NACK_BAD_DST_Q = ( ( 0x8000 + 0 ) + 0 ) ,
        MQMSG_CLASS_NACK_PURGED = ( ( 0x8000 + 0 ) + 0x1 ) ,
        MQMSG_CLASS_NACK_REACH_QUEUE_TIMEOUT = ( ( 0x8000 + 0 ) + 0x2 ) ,
        MQMSG_CLASS_NACK_Q_EXCEED_QUOTA = ( ( 0x8000 + 0 ) + 0x3 ) ,
        MQMSG_CLASS_NACK_ACCESS_DENIED = ( ( 0x8000 + 0 ) + 0x4 ) ,
        MQMSG_CLASS_NACK_HOP_COUNT_EXCEEDED = ( ( 0x8000 + 0 ) + 0x5 ) ,
        MQMSG_CLASS_NACK_BAD_SIGNATURE = ( ( 0x8000 + 0 ) + 0x6 ) ,
        MQMSG_CLASS_NACK_BAD_ENCRYPTION = ( ( 0x8000 + 0 ) + 0x7 ) ,
        MQMSG_CLASS_NACK_COULD_NOT_ENCRYPT = ( ( 0x8000 + 0 ) + 0x8 ) ,
        MQMSG_CLASS_NACK_NOT_TRANSACTIONAL_Q = ( ( 0x8000 + 0 ) + 0x9 ) ,
        MQMSG_CLASS_NACK_NOT_TRANSACTIONAL_MSG = ( ( 0x8000 + 0 ) + 0xa ) ,
        MQMSG_CLASS_NACK_UNSUPPORTED_CRYPTO_PROVIDER = ( ( 0x8000 + 0 ) + 0xb ) ,
        MQMSG_CLASS_NACK_SOURCE_COMPUTER_GUID_CHANGED = ( ( 0x8000 + 0 ) + 0xc ) ,
        MQMSG_CLASS_NACK_Q_DELETED = ( ( 0x8000 + 0x4000 ) + 0 ) ,
        MQMSG_CLASS_NACK_Q_PURGED = ( ( 0x8000 + 0x4000 ) + 0x1 ) ,
        MQMSG_CLASS_NACK_RECEIVE_TIMEOUT = ( ( 0x8000 + 0x4000 ) + 0x2 ) ,
        MQMSG_CLASS_NACK_RECEIVE_TIMEOUT_AT_SENDER = ( ( 0x8000 + 0x4000 ) + 0x3 )
    } ;
enum MQMSGDELIVERY
    {
        MQMSG_DELIVERY_EXPRESS = 0,
        MQMSG_DELIVERY_RECOVERABLE = 1
    } ;
enum MQMSGACKNOWLEDGEMENT
    {
        MQMSG_ACKNOWLEDGMENT_NONE = 0,
        MQMSG_ACKNOWLEDGMENT_POS_ARRIVAL = 0x1,
        MQMSG_ACKNOWLEDGMENT_POS_RECEIVE = 0x2,
        MQMSG_ACKNOWLEDGMENT_NEG_ARRIVAL = 0x4,
        MQMSG_ACKNOWLEDGMENT_NEG_RECEIVE = 0x8,
        MQMSG_ACKNOWLEDGMENT_NACK_REACH_QUEUE = 0x4,
        MQMSG_ACKNOWLEDGMENT_FULL_REACH_QUEUE = ( 0x4 + 0x1 ) ,
        MQMSG_ACKNOWLEDGMENT_NACK_RECEIVE = ( 0x4 + 0x8 ) ,
        MQMSG_ACKNOWLEDGMENT_FULL_RECEIVE = ( ( 0x4 + 0x8 ) + 0x2 )
    } ;
enum MQMSGJOURNAL
    {
        MQMSG_JOURNAL_NONE = 0,
        MQMSG_DEADLETTER = 1,
        MQMSG_JOURNAL = 2
    } ;
enum MQMSGTRACE
    {
        MQMSG_TRACE_NONE = 0,
        MQMSG_SEND_ROUTE_TO_REPORT_QUEUE = 1
    } ;
enum MQMSGSENDERIDTYPE
    {
        MQMSG_SENDERID_TYPE_NONE = 0,
        MQMSG_SENDERID_TYPE_SID = 1
    } ;
enum MQMSGPRIVLEVEL
    {
        MQMSG_PRIV_LEVEL_NONE = 0,
        MQMSG_PRIV_LEVEL_BODY_BASE = 1,
        MQMSG_PRIV_LEVEL_BODY_ENHANCED = 3
    } ;
enum MQMSGAUTHLEVEL
    {
        MQMSG_AUTH_LEVEL_NONE = 0,
        MQMSG_AUTH_LEVEL_ALWAYS = 1,
        MQMSG_AUTH_LEVEL_MSMQ10 = 2,
        MQMSG_AUTH_LEVEL_SIG10 = 2,
        MQMSG_AUTH_LEVEL_MSMQ20 = 4,
        MQMSG_AUTH_LEVEL_SIG20 = 4,
        MQMSG_AUTH_LEVEL_SIG30 = 8
    } ;
enum MQMSGIDSIZE
    {
        MQMSG_MSGID_SIZE = 20,
        MQMSG_CORRELATIONID_SIZE = 20,
        MQMSG_XACTID_SIZE = 20
    } ;
enum MQMSGMAX
    {
        MQ_MAX_MSG_LABEL_LEN = 249
    } ;
enum MQMSGAUTHENTICATION
    {
        MQMSG_AUTHENTICATION_NOT_REQUESTED = 0,
        MQMSG_AUTHENTICATION_REQUESTED = 1,
        MQMSG_AUTHENTICATED_SIG10 = 1,
        MQMSG_AUTHENTICATION_REQUESTED_EX = 3,
        MQMSG_AUTHENTICATED_SIG20 = 3,
        MQMSG_AUTHENTICATED_SIG30 = 5,
        MQMSG_AUTHENTICATED_SIGXML = 9
    } ;
enum MQSHARE
    {
        MQ_DENY_NONE = 0,
        MQ_DENY_RECEIVE_SHARE = 1
    } ;
enum MQACCESS
    {
        MQ_RECEIVE_ACCESS = 1,
        MQ_SEND_ACCESS = 2,
        MQ_PEEK_ACCESS = 0x20,
        MQ_ADMIN_ACCESS = 0x80
    } ;
enum MQJOURNAL
    {
        MQ_JOURNAL_NONE = 0,
        MQ_JOURNAL = 1
    } ;
enum MQTRANSACTIONAL
    {
        MQ_TRANSACTIONAL_NONE = 0,
        MQ_TRANSACTIONAL = 1
    } ;
enum MQAUTHENTICATE
    {
        MQ_AUTHENTICATE_NONE = 0,
        MQ_AUTHENTICATE = 1
    } ;
enum MQPRIVLEVEL
    {
        MQ_PRIV_LEVEL_NONE = 0,
        MQ_PRIV_LEVEL_OPTIONAL = 1,
        MQ_PRIV_LEVEL_BODY = 2
    } ;
enum MQPRIORITY
    {
        MQ_MIN_PRIORITY = 0,
        MQ_MAX_PRIORITY = 7
    } ;
enum MQMAX
    {
        MQ_MAX_Q_NAME_LEN = 124,
        MQ_MAX_Q_LABEL_LEN = 124
    } ;
enum QUEUE_TYPE
    {
        MQ_TYPE_PUBLIC = 0,
        MQ_TYPE_PRIVATE = ( MQ_TYPE_PUBLIC + 1 ) ,
        MQ_TYPE_MACHINE = ( MQ_TYPE_PRIVATE + 1 ) ,
        MQ_TYPE_CONNECTOR = ( MQ_TYPE_MACHINE + 1 ) ,
        MQ_TYPE_MULTICAST = ( MQ_TYPE_CONNECTOR + 1 )
    } ;
enum FOREIGN_STATUS
    {
        MQ_STATUS_FOREIGN = 0,
        MQ_STATUS_NOT_FOREIGN = ( MQ_STATUS_FOREIGN + 1 ) ,
        MQ_STATUS_UNKNOWN = ( MQ_STATUS_NOT_FOREIGN + 1 )
    } ;
enum XACT_STATUS
    {
        MQ_XACT_STATUS_XACT = 0,
        MQ_XACT_STATUS_NOT_XACT = ( MQ_XACT_STATUS_XACT + 1 ) ,
        MQ_XACT_STATUS_UNKNOWN = ( MQ_XACT_STATUS_NOT_XACT + 1 )
    } ;
enum QUEUE_STATE
    {
        MQ_QUEUE_STATE_LOCAL_CONNECTION = 0,
        MQ_QUEUE_STATE_DISCONNECTED = ( MQ_QUEUE_STATE_LOCAL_CONNECTION + 1 ) ,
        MQ_QUEUE_STATE_WAITING = ( MQ_QUEUE_STATE_DISCONNECTED + 1 ) ,
        MQ_QUEUE_STATE_NEEDVALIDATE = ( MQ_QUEUE_STATE_WAITING + 1 ) ,
        MQ_QUEUE_STATE_ONHOLD = ( MQ_QUEUE_STATE_NEEDVALIDATE + 1 ) ,
        MQ_QUEUE_STATE_NONACTIVE = ( MQ_QUEUE_STATE_ONHOLD + 1 ) ,
        MQ_QUEUE_STATE_CONNECTED = ( MQ_QUEUE_STATE_NONACTIVE + 1 ) ,
        MQ_QUEUE_STATE_DISCONNECTING = ( MQ_QUEUE_STATE_CONNECTED + 1 ) ,
        MQ_QUEUE_STATE_LOCKED = ( MQ_QUEUE_STATE_DISCONNECTING + 1 )
    } ;
enum MQDEFAULT
    {
        DEFAULT_M_PRIORITY = 3,
        DEFAULT_M_DELIVERY = 0,
        DEFAULT_M_ACKNOWLEDGE = 0,
        DEFAULT_M_JOURNAL = 0,
        DEFAULT_M_APPSPECIFIC = 0,
        DEFAULT_M_PRIV_LEVEL = 0,
        DEFAULT_M_AUTH_LEVEL = 0,
        DEFAULT_M_SENDERID_TYPE = 1,
        DEFAULT_Q_JOURNAL = 0,
        DEFAULT_Q_BASEPRIORITY = 0,
        DEFAULT_Q_QUOTA = 0xffffffff,
        DEFAULT_Q_JOURNAL_QUOTA = 0xffffffff,
        DEFAULT_Q_TRANSACTION = 0,
        DEFAULT_Q_AUTHENTICATE = 0,
        DEFAULT_Q_PRIV_LEVEL = 1,
        DEFAULT_M_LOOKUPID = 0
    } ;
enum MQERROR
    {
        MQ_ERROR = 0xc00e0001,
        MQ_ERROR_PROPERTY = 0xc00e0002,
        MQ_ERROR_QUEUE_NOT_FOUND = 0xc00e0003,
        MQ_ERROR_QUEUE_NOT_ACTIVE = 0xc00e0004,
        MQ_ERROR_QUEUE_EXISTS = 0xc00e0005,
        MQ_ERROR_INVALID_PARAMETER = 0xc00e0006,
        MQ_ERROR_INVALID_HANDLE = 0xc00e0007,
        MQ_ERROR_OPERATION_CANCELLED = 0xc00e0008,
        MQ_ERROR_SHARING_VIOLATION = 0xc00e0009,
        MQ_ERROR_SERVICE_NOT_AVAILABLE = 0xc00e000b,
        MQ_ERROR_MACHINE_NOT_FOUND = 0xc00e000d,
        MQ_ERROR_ILLEGAL_SORT = 0xc00e0010,
        MQ_ERROR_ILLEGAL_USER = 0xc00e0011,
        MQ_ERROR_NO_DS = 0xc00e0013,
        MQ_ERROR_ILLEGAL_QUEUE_PATHNAME = 0xc00e0014,
        MQ_ERROR_ILLEGAL_PROPERTY_VALUE = 0xc00e0018,
        MQ_ERROR_ILLEGAL_PROPERTY_VT = 0xc00e0019,
        MQ_ERROR_BUFFER_OVERFLOW = 0xc00e001a,
        MQ_ERROR_IO_TIMEOUT = 0xc00e001b,
        MQ_ERROR_ILLEGAL_CURSOR_ACTION = 0xc00e001c,
        MQ_ERROR_MESSAGE_ALREADY_RECEIVED = 0xc00e001d,
        MQ_ERROR_ILLEGAL_FORMATNAME = 0xc00e001e,
        MQ_ERROR_FORMATNAME_BUFFER_TOO_SMALL = 0xc00e001f,
        MQ_ERROR_UNSUPPORTED_FORMATNAME_OPERATION = 0xc00e0020,
        MQ_ERROR_ILLEGAL_SECURITY_DESCRIPTOR = 0xc00e0021,
        MQ_ERROR_SENDERID_BUFFER_TOO_SMALL = 0xc00e0022,
        MQ_ERROR_SECURITY_DESCRIPTOR_TOO_SMALL = 0xc00e0023,
        MQ_ERROR_CANNOT_IMPERSONATE_CLIENT = 0xc00e0024,
        MQ_ERROR_ACCESS_DENIED = 0xc00e0025,
        MQ_ERROR_PRIVILEGE_NOT_HELD = 0xc00e0026,
        MQ_ERROR_INSUFFICIENT_RESOURCES = 0xc00e0027,
        MQ_ERROR_USER_BUFFER_TOO_SMALL = 0xc00e0028,
        MQ_ERROR_MESSAGE_STORAGE_FAILED = 0xc00e002a,
        MQ_ERROR_SENDER_CERT_BUFFER_TOO_SMALL = 0xc00e002b,
        MQ_ERROR_INVALID_CERTIFICATE = 0xc00e002c,
        MQ_ERROR_CORRUPTED_INTERNAL_CERTIFICATE = 0xc00e002d,
        MQ_ERROR_INTERNAL_USER_CERT_EXIST = 0xc00e002e,
        MQ_ERROR_NO_INTERNAL_USER_CERT = 0xc00e002f,
        MQ_ERROR_CORRUPTED_SECURITY_DATA = 0xc00e0030,
        MQ_ERROR_CORRUPTED_PERSONAL_CERT_STORE = 0xc00e0031,
        MQ_ERROR_COMPUTER_DOES_NOT_SUPPORT_ENCRYPTION = 0xc00e0033,
        MQ_ERROR_BAD_SECURITY_CONTEXT = 0xc00e0035,
        MQ_ERROR_COULD_NOT_GET_USER_SID = 0xc00e0036,
        MQ_ERROR_COULD_NOT_GET_ACCOUNT_INFO = 0xc00e0037,
        MQ_ERROR_ILLEGAL_MQCOLUMNS = 0xc00e0038,
        MQ_ERROR_ILLEGAL_PROPID = 0xc00e0039,
        MQ_ERROR_ILLEGAL_RELATION = 0xc00e003a,
        MQ_ERROR_ILLEGAL_PROPERTY_SIZE = 0xc00e003b,
        MQ_ERROR_ILLEGAL_RESTRICTION_PROPID = 0xc00e003c,
        MQ_ERROR_ILLEGAL_MQQUEUEPROPS = 0xc00e003d,
        MQ_ERROR_PROPERTY_NOTALLOWED = 0xc00e003e,
        MQ_ERROR_INSUFFICIENT_PROPERTIES = 0xc00e003f,
        MQ_ERROR_MACHINE_EXISTS = 0xc00e0040,
        MQ_ERROR_ILLEGAL_MQQMPROPS = 0xc00e0041,
        MQ_ERROR_DS_IS_FULL = 0xc00e0042L,
        MQ_ERROR_DS_ERROR = 0xc00e0043,
        MQ_ERROR_INVALID_OWNER = 0xc00e0044,
        MQ_ERROR_UNSUPPORTED_ACCESS_MODE = 0xc00e0045,
        MQ_ERROR_RESULT_BUFFER_TOO_SMALL = 0xc00e0046,
        MQ_ERROR_DELETE_CN_IN_USE = 0xc00e0048L,
        MQ_ERROR_NO_RESPONSE_FROM_OBJECT_SERVER = 0xc00e0049,
        MQ_ERROR_OBJECT_SERVER_NOT_AVAILABLE = 0xc00e004a,
        MQ_ERROR_QUEUE_NOT_AVAILABLE = 0xc00e004b,
        MQ_ERROR_DTC_CONNECT = 0xc00e004c,
        MQ_ERROR_TRANSACTION_IMPORT = 0xc00e004e,
        MQ_ERROR_TRANSACTION_USAGE = 0xc00e0050,
        MQ_ERROR_TRANSACTION_SEQUENCE = 0xc00e0051,
        MQ_ERROR_MISSING_CONNECTOR_TYPE = 0xc00e0055,
        MQ_ERROR_STALE_HANDLE = 0xc00e0056,
        MQ_ERROR_TRANSACTION_ENLIST = 0xc00e0058,
        MQ_ERROR_QUEUE_DELETED = 0xc00e005a,
        MQ_ERROR_ILLEGAL_CONTEXT = 0xc00e005b,
        MQ_ERROR_ILLEGAL_SORT_PROPID = 0xc00e005c,
        MQ_ERROR_LABEL_TOO_LONG = 0xc00e005d,
        MQ_ERROR_LABEL_BUFFER_TOO_SMALL = 0xc00e005e,
        MQ_ERROR_MQIS_SERVER_EMPTY = 0xc00e005fL,
        MQ_ERROR_MQIS_READONLY_MODE = 0xc00e0060L,
        MQ_ERROR_SYMM_KEY_BUFFER_TOO_SMALL = 0xc00e0061,
        MQ_ERROR_SIGNATURE_BUFFER_TOO_SMALL = 0xc00e0062,
        MQ_ERROR_PROV_NAME_BUFFER_TOO_SMALL = 0xc00e0063,
        MQ_ERROR_ILLEGAL_OPERATION = 0xc00e0064,
        MQ_ERROR_WRITE_NOT_ALLOWED = 0xc00e0065L,
        MQ_ERROR_WKS_CANT_SERVE_CLIENT = 0xc00e0066L,
        MQ_ERROR_DEPEND_WKS_LICENSE_OVERFLOW = 0xc00e0067L,
        MQ_CORRUPTED_QUEUE_WAS_DELETED = 0xc00e0068L,
        MQ_ERROR_REMOTE_MACHINE_NOT_AVAILABLE = 0xc00e0069L,
        MQ_ERROR_UNSUPPORTED_OPERATION = 0xc00e006aL,
        MQ_ERROR_ENCRYPTION_PROVIDER_NOT_SUPPORTED = 0xc00e006bL,
        MQ_ERROR_CANNOT_SET_CRYPTO_SEC_DESCR = 0xc00e006cL,
        MQ_ERROR_CERTIFICATE_NOT_PROVIDED = 0xc00e006dL,
        MQ_ERROR_Q_DNS_PROPERTY_NOT_SUPPORTED = 0xc00e006eL,
        MQ_ERROR_CANT_CREATE_CERT_STORE = 0xc00e006fL,
        MQ_ERROR_CANNOT_CREATE_CERT_STORE = 0xc00e006fL,
        MQ_ERROR_CANT_OPEN_CERT_STORE = 0xc00e0070L,
        MQ_ERROR_CANNOT_OPEN_CERT_STORE = 0xc00e0070L,
        MQ_ERROR_ILLEGAL_ENTERPRISE_OPERATION = 0xc00e0071L,
        MQ_ERROR_CANNOT_GRANT_ADD_GUID = 0xc00e0072L,
        MQ_ERROR_CANNOT_LOAD_MSMQOCM = 0xc00e0073L,
        MQ_ERROR_NO_ENTRY_POINT_MSMQOCM = 0xc00e0074L,
        MQ_ERROR_NO_MSMQ_SERVERS_ON_DC = 0xc00e0075L,
        MQ_ERROR_CANNOT_JOIN_DOMAIN = 0xc00e0076L,
        MQ_ERROR_CANNOT_CREATE_ON_GC = 0xc00e0077L,
        MQ_ERROR_GUID_NOT_MATCHING = 0xc00e0078L,
        MQ_ERROR_PUBLIC_KEY_NOT_FOUND = 0xc00e0079L,
        MQ_ERROR_PUBLIC_KEY_DOES_NOT_EXIST = 0xc00e007aL,
        MQ_ERROR_ILLEGAL_MQPRIVATEPROPS = 0xc00e007bL,
        MQ_ERROR_NO_GC_IN_DOMAIN = 0xc00e007cL,
        MQ_ERROR_NO_MSMQ_SERVERS_ON_GC = 0xc00e007dL,
        MQ_ERROR_CANNOT_GET_DN = 0xc00e007eL,
        MQ_ERROR_CANNOT_HASH_DATA_EX = 0xc00e007fL,
        MQ_ERROR_CANNOT_SIGN_DATA_EX = 0xc00e0080L,
        MQ_ERROR_CANNOT_CREATE_HASH_EX = 0xc00e0081L,
        MQ_ERROR_FAIL_VERIFY_SIGNATURE_EX = 0xc00e0082L,
        MQ_ERROR_CANNOT_DELETE_PSC_OBJECTS = 0xc00e0083L,
        MQ_ERROR_NO_MQUSER_OU = 0xc00e0084L,
        MQ_ERROR_CANNOT_LOAD_MQAD = 0xc00e0085L,
        MQ_ERROR_CANNOT_LOAD_MQDSSRV = 0xc00e0086L,
        MQ_ERROR_PROPERTIES_CONFLICT = 0xc00e0087L,
        MQ_ERROR_MESSAGE_NOT_FOUND = 0xc00e0088L,
        MQ_ERROR_CANT_RESOLVE_SITES = 0xc00e0089L,
        MQ_ERROR_NOT_SUPPORTED_BY_DEPENDENT_CLIENTS = 0xc00e008aL,
        MQ_ERROR_OPERATION_NOT_SUPPORTED_BY_REMOTE_COMPUTER = 0xc00e008bL,
        MQ_ERROR_NOT_A_CORRECT_OBJECT_CLASS = 0xc00e008cL,
        MQ_ERROR_MULTI_SORT_KEYS = 0xc00e008dL,
        MQ_ERROR_GC_NEEDED = 0xc00e008eL,
        MQ_ERROR_DS_BIND_ROOT_FOREST = 0xc00e008fL,
        MQ_ERROR_DS_LOCAL_USER = 0xc00e0090L,
        MQ_ERROR_Q_ADS_PROPERTY_NOT_SUPPORTED = 0xc00e0091L,
        MQ_ERROR_BAD_XML_FORMAT = 0xc00e0092L,
        MQ_ERROR_UNSUPPORTED_CLASS = 0xc00e0093,
        MQ_ERROR_UNINITIALIZED_OBJECT = 0xc00e0094,
        MQ_ERROR_CANNOT_CREATE_PSC_OBJECTS = 0xc00e0095,
        MQ_ERROR_CANNOT_UPDATE_PSC_OBJECTS = 0xc00e0096
    } ;
enum MQWARNING
    {
        MQ_INFORMATION_PROPERTY = 0x400e0001,
        MQ_INFORMATION_ILLEGAL_PROPERTY = 0x400e0002,
        MQ_INFORMATION_PROPERTY_IGNORED = 0x400e0003,
        MQ_INFORMATION_UNSUPPORTED_PROPERTY = 0x400e0004,
        MQ_INFORMATION_DUPLICATE_PROPERTY = 0x400e0005,
        MQ_INFORMATION_OPERATION_PENDING = 0x400e0006,
        MQ_INFORMATION_FORMATNAME_BUFFER_TOO_SMALL = 0x400e0009,
        MQ_INFORMATION_INTERNAL_USER_CERT_EXIST = 0x400e000aL,
        MQ_INFORMATION_OWNER_IGNORED = 0x400e000bL
    } ;
EXTERN_C const IID LIBID_MSMQ;
EXTERN_C const IID IID_IMSMQQuery;
    typedef struct IMSMQQueryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQuery * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQuery * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQuery * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQuery * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQuery * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQuery * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQuery * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                  HRESULT ( STDMETHODCALLTYPE *LookupQueue )(
            __RPC__in IMSMQQuery * This,
                                 __RPC__in VARIANT *QueueGuid,
                                 __RPC__in VARIANT *ServiceTypeGuid,
                                 __RPC__in VARIANT *Label,
                                 __RPC__in VARIANT *CreateTime,
                                 __RPC__in VARIANT *ModifyTime,
                                 __RPC__in VARIANT *RelServiceType,
                                 __RPC__in VARIANT *RelLabel,
                                 __RPC__in VARIANT *RelCreateTime,
                                 __RPC__in VARIANT *RelModifyTime,
                                __RPC__deref_out_opt IMSMQQueueInfos **ppqinfos);
        END_INTERFACE
    } IMSMQQueryVtbl;
    interface IMSMQQuery
    {
        CONST_VTBL struct IMSMQQueryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> LookupQueue(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,ppqinfos) )
EXTERN_C const IID IID_IMSMQQueueInfo;
    typedef struct IMSMQQueueInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQueueInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQueueInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQueueInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQueueInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQueueInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQueueInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQueueInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                               HRESULT ( STDMETHODCALLTYPE *get_QueueGuid )(
            __RPC__in IMSMQQueueInfo * This,
                                __RPC__deref_out_opt BSTR *pbstrGuidQueue);
                                               HRESULT ( STDMETHODCALLTYPE *get_ServiceTypeGuid )(
            __RPC__in IMSMQQueueInfo * This,
                                __RPC__deref_out_opt BSTR *pbstrGuidServiceType);
                                               HRESULT ( STDMETHODCALLTYPE *put_ServiceTypeGuid )(
            __RPC__in IMSMQQueueInfo * This,
                       __RPC__in BSTR bstrGuidServiceType);
                                               HRESULT ( STDMETHODCALLTYPE *get_Label )(
            __RPC__in IMSMQQueueInfo * This,
                                __RPC__deref_out_opt BSTR *pbstrLabel);
                                               HRESULT ( STDMETHODCALLTYPE *put_Label )(
            __RPC__in IMSMQQueueInfo * This,
                       __RPC__in BSTR bstrLabel);
                                               HRESULT ( STDMETHODCALLTYPE *get_PathName )(
            __RPC__in IMSMQQueueInfo * This,
                                __RPC__deref_out_opt BSTR *pbstrPathName);
                                               HRESULT ( STDMETHODCALLTYPE *put_PathName )(
            __RPC__in IMSMQQueueInfo * This,
                       __RPC__in BSTR bstrPathName);
                                               HRESULT ( STDMETHODCALLTYPE *get_FormatName )(
            __RPC__in IMSMQQueueInfo * This,
                                __RPC__deref_out_opt BSTR *pbstrFormatName);
                                               HRESULT ( STDMETHODCALLTYPE *put_FormatName )(
            __RPC__in IMSMQQueueInfo * This,
                       __RPC__in BSTR bstrFormatName);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsTransactional )(
            __RPC__in IMSMQQueueInfo * This,
                                __RPC__out Boolean *pisTransactional);
                                               HRESULT ( STDMETHODCALLTYPE *get_PrivLevel )(
            __RPC__in IMSMQQueueInfo * This,
                                __RPC__out long *plPrivLevel);
                                               HRESULT ( STDMETHODCALLTYPE *put_PrivLevel )(
            __RPC__in IMSMQQueueInfo * This,
                       long lPrivLevel);
                                               HRESULT ( STDMETHODCALLTYPE *get_Journal )(
            __RPC__in IMSMQQueueInfo * This,
                                __RPC__out long *plJournal);
                                               HRESULT ( STDMETHODCALLTYPE *put_Journal )(
            __RPC__in IMSMQQueueInfo * This,
                       long lJournal);
                                               HRESULT ( STDMETHODCALLTYPE *get_Quota )(
            __RPC__in IMSMQQueueInfo * This,
                                __RPC__out long *plQuota);
                                               HRESULT ( STDMETHODCALLTYPE *put_Quota )(
            __RPC__in IMSMQQueueInfo * This,
                       long lQuota);
                                               HRESULT ( STDMETHODCALLTYPE *get_BasePriority )(
            __RPC__in IMSMQQueueInfo * This,
                                __RPC__out long *plBasePriority);
                                               HRESULT ( STDMETHODCALLTYPE *put_BasePriority )(
            __RPC__in IMSMQQueueInfo * This,
                       long lBasePriority);
                                               HRESULT ( STDMETHODCALLTYPE *get_CreateTime )(
            __RPC__in IMSMQQueueInfo * This,
                                __RPC__out VARIANT *pvarCreateTime);
                                               HRESULT ( STDMETHODCALLTYPE *get_ModifyTime )(
            __RPC__in IMSMQQueueInfo * This,
                                __RPC__out VARIANT *pvarModifyTime);
                                               HRESULT ( STDMETHODCALLTYPE *get_Authenticate )(
            __RPC__in IMSMQQueueInfo * This,
                                __RPC__out long *plAuthenticate);
                                               HRESULT ( STDMETHODCALLTYPE *put_Authenticate )(
            __RPC__in IMSMQQueueInfo * This,
                       long lAuthenticate);
                                               HRESULT ( STDMETHODCALLTYPE *get_JournalQuota )(
            __RPC__in IMSMQQueueInfo * This,
                                __RPC__out long *plJournalQuota);
                                               HRESULT ( STDMETHODCALLTYPE *put_JournalQuota )(
            __RPC__in IMSMQQueueInfo * This,
                       long lJournalQuota);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsWorldReadable )(
            __RPC__in IMSMQQueueInfo * This,
                                __RPC__out Boolean *pisWorldReadable);
                                  HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IMSMQQueueInfo * This,
                                 __RPC__in VARIANT *IsTransactional,
                                 __RPC__in VARIANT *IsWorldReadable);
                                  HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IMSMQQueueInfo * This);
                                  HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IMSMQQueueInfo * This,
                       long Access,
                       long ShareMode,
                                __RPC__deref_out_opt IMSMQQueue **ppq);
                                  HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IMSMQQueueInfo * This);
                                  HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in IMSMQQueueInfo * This);
        END_INTERFACE
    } IMSMQQueueInfoVtbl;
    interface IMSMQQueueInfo
    {
        CONST_VTBL struct IMSMQQueueInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_QueueGuid(This,pbstrGuidQueue) )
    ( (This)->lpVtbl -> get_ServiceTypeGuid(This,pbstrGuidServiceType) )
    ( (This)->lpVtbl -> put_ServiceTypeGuid(This,bstrGuidServiceType) )
    ( (This)->lpVtbl -> get_Label(This,pbstrLabel) )
    ( (This)->lpVtbl -> put_Label(This,bstrLabel) )
    ( (This)->lpVtbl -> get_PathName(This,pbstrPathName) )
    ( (This)->lpVtbl -> put_PathName(This,bstrPathName) )
    ( (This)->lpVtbl -> get_FormatName(This,pbstrFormatName) )
    ( (This)->lpVtbl -> put_FormatName(This,bstrFormatName) )
    ( (This)->lpVtbl -> get_IsTransactional(This,pisTransactional) )
    ( (This)->lpVtbl -> get_PrivLevel(This,plPrivLevel) )
    ( (This)->lpVtbl -> put_PrivLevel(This,lPrivLevel) )
    ( (This)->lpVtbl -> get_Journal(This,plJournal) )
    ( (This)->lpVtbl -> put_Journal(This,lJournal) )
    ( (This)->lpVtbl -> get_Quota(This,plQuota) )
    ( (This)->lpVtbl -> put_Quota(This,lQuota) )
    ( (This)->lpVtbl -> get_BasePriority(This,plBasePriority) )
    ( (This)->lpVtbl -> put_BasePriority(This,lBasePriority) )
    ( (This)->lpVtbl -> get_CreateTime(This,pvarCreateTime) )
    ( (This)->lpVtbl -> get_ModifyTime(This,pvarModifyTime) )
    ( (This)->lpVtbl -> get_Authenticate(This,plAuthenticate) )
    ( (This)->lpVtbl -> put_Authenticate(This,lAuthenticate) )
    ( (This)->lpVtbl -> get_JournalQuota(This,plJournalQuota) )
    ( (This)->lpVtbl -> put_JournalQuota(This,lJournalQuota) )
    ( (This)->lpVtbl -> get_IsWorldReadable(This,pisWorldReadable) )
    ( (This)->lpVtbl -> Create(This,IsTransactional,IsWorldReadable) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Open(This,Access,ShareMode,ppq) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Update(This) )
EXTERN_C const IID IID_IMSMQQueueInfo2;
    typedef struct IMSMQQueueInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQueueInfo2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQueueInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQueueInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQueueInfo2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQueueInfo2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQueueInfo2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQueueInfo2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                               HRESULT ( STDMETHODCALLTYPE *get_QueueGuid )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__deref_out_opt BSTR *pbstrGuidQueue);
                                               HRESULT ( STDMETHODCALLTYPE *get_ServiceTypeGuid )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__deref_out_opt BSTR *pbstrGuidServiceType);
                                               HRESULT ( STDMETHODCALLTYPE *put_ServiceTypeGuid )(
            __RPC__in IMSMQQueueInfo2 * This,
                       __RPC__in BSTR bstrGuidServiceType);
                                               HRESULT ( STDMETHODCALLTYPE *get_Label )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__deref_out_opt BSTR *pbstrLabel);
                                               HRESULT ( STDMETHODCALLTYPE *put_Label )(
            __RPC__in IMSMQQueueInfo2 * This,
                       __RPC__in BSTR bstrLabel);
                                               HRESULT ( STDMETHODCALLTYPE *get_PathName )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__deref_out_opt BSTR *pbstrPathName);
                                               HRESULT ( STDMETHODCALLTYPE *put_PathName )(
            __RPC__in IMSMQQueueInfo2 * This,
                       __RPC__in BSTR bstrPathName);
                                               HRESULT ( STDMETHODCALLTYPE *get_FormatName )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__deref_out_opt BSTR *pbstrFormatName);
                                               HRESULT ( STDMETHODCALLTYPE *put_FormatName )(
            __RPC__in IMSMQQueueInfo2 * This,
                       __RPC__in BSTR bstrFormatName);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsTransactional )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__out Boolean *pisTransactional);
                                               HRESULT ( STDMETHODCALLTYPE *get_PrivLevel )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__out long *plPrivLevel);
                                               HRESULT ( STDMETHODCALLTYPE *put_PrivLevel )(
            __RPC__in IMSMQQueueInfo2 * This,
                       long lPrivLevel);
                                               HRESULT ( STDMETHODCALLTYPE *get_Journal )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__out long *plJournal);
                                               HRESULT ( STDMETHODCALLTYPE *put_Journal )(
            __RPC__in IMSMQQueueInfo2 * This,
                       long lJournal);
                                               HRESULT ( STDMETHODCALLTYPE *get_Quota )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__out long *plQuota);
                                               HRESULT ( STDMETHODCALLTYPE *put_Quota )(
            __RPC__in IMSMQQueueInfo2 * This,
                       long lQuota);
                                               HRESULT ( STDMETHODCALLTYPE *get_BasePriority )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__out long *plBasePriority);
                                               HRESULT ( STDMETHODCALLTYPE *put_BasePriority )(
            __RPC__in IMSMQQueueInfo2 * This,
                       long lBasePriority);
                                               HRESULT ( STDMETHODCALLTYPE *get_CreateTime )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__out VARIANT *pvarCreateTime);
                                               HRESULT ( STDMETHODCALLTYPE *get_ModifyTime )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__out VARIANT *pvarModifyTime);
                                               HRESULT ( STDMETHODCALLTYPE *get_Authenticate )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__out long *plAuthenticate);
                                               HRESULT ( STDMETHODCALLTYPE *put_Authenticate )(
            __RPC__in IMSMQQueueInfo2 * This,
                       long lAuthenticate);
                                               HRESULT ( STDMETHODCALLTYPE *get_JournalQuota )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__out long *plJournalQuota);
                                               HRESULT ( STDMETHODCALLTYPE *put_JournalQuota )(
            __RPC__in IMSMQQueueInfo2 * This,
                       long lJournalQuota);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsWorldReadable )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__out Boolean *pisWorldReadable);
                                  HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IMSMQQueueInfo2 * This,
                                 __RPC__in VARIANT *IsTransactional,
                                 __RPC__in VARIANT *IsWorldReadable);
                                  HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IMSMQQueueInfo2 * This);
                                  HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IMSMQQueueInfo2 * This,
                       long Access,
                       long ShareMode,
                                __RPC__deref_out_opt IMSMQQueue2 **ppq);
                                  HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IMSMQQueueInfo2 * This);
                                  HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in IMSMQQueueInfo2 * This);
                                               HRESULT ( STDMETHODCALLTYPE *get_PathNameDNS )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__deref_out_opt BSTR *pbstrPathNameDNS);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
                                    HRESULT ( STDMETHODCALLTYPE *get_Security )(
            __RPC__in IMSMQQueueInfo2 * This,
                                __RPC__out VARIANT *pvarSecurity);
                                    HRESULT ( STDMETHODCALLTYPE *put_Security )(
            __RPC__in IMSMQQueueInfo2 * This,
                       VARIANT varSecurity);
        END_INTERFACE
    } IMSMQQueueInfo2Vtbl;
    interface IMSMQQueueInfo2
    {
        CONST_VTBL struct IMSMQQueueInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_QueueGuid(This,pbstrGuidQueue) )
    ( (This)->lpVtbl -> get_ServiceTypeGuid(This,pbstrGuidServiceType) )
    ( (This)->lpVtbl -> put_ServiceTypeGuid(This,bstrGuidServiceType) )
    ( (This)->lpVtbl -> get_Label(This,pbstrLabel) )
    ( (This)->lpVtbl -> put_Label(This,bstrLabel) )
    ( (This)->lpVtbl -> get_PathName(This,pbstrPathName) )
    ( (This)->lpVtbl -> put_PathName(This,bstrPathName) )
    ( (This)->lpVtbl -> get_FormatName(This,pbstrFormatName) )
    ( (This)->lpVtbl -> put_FormatName(This,bstrFormatName) )
    ( (This)->lpVtbl -> get_IsTransactional(This,pisTransactional) )
    ( (This)->lpVtbl -> get_PrivLevel(This,plPrivLevel) )
    ( (This)->lpVtbl -> put_PrivLevel(This,lPrivLevel) )
    ( (This)->lpVtbl -> get_Journal(This,plJournal) )
    ( (This)->lpVtbl -> put_Journal(This,lJournal) )
    ( (This)->lpVtbl -> get_Quota(This,plQuota) )
    ( (This)->lpVtbl -> put_Quota(This,lQuota) )
    ( (This)->lpVtbl -> get_BasePriority(This,plBasePriority) )
    ( (This)->lpVtbl -> put_BasePriority(This,lBasePriority) )
    ( (This)->lpVtbl -> get_CreateTime(This,pvarCreateTime) )
    ( (This)->lpVtbl -> get_ModifyTime(This,pvarModifyTime) )
    ( (This)->lpVtbl -> get_Authenticate(This,plAuthenticate) )
    ( (This)->lpVtbl -> put_Authenticate(This,lAuthenticate) )
    ( (This)->lpVtbl -> get_JournalQuota(This,plJournalQuota) )
    ( (This)->lpVtbl -> put_JournalQuota(This,lJournalQuota) )
    ( (This)->lpVtbl -> get_IsWorldReadable(This,pisWorldReadable) )
    ( (This)->lpVtbl -> Create(This,IsTransactional,IsWorldReadable) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Open(This,Access,ShareMode,ppq) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Update(This) )
    ( (This)->lpVtbl -> get_PathNameDNS(This,pbstrPathNameDNS) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
    ( (This)->lpVtbl -> get_Security(This,pvarSecurity) )
    ( (This)->lpVtbl -> put_Security(This,varSecurity) )
EXTERN_C const IID IID_IMSMQQueueInfo3;
    typedef struct IMSMQQueueInfo3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQueueInfo3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQueueInfo3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQueueInfo3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQueueInfo3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQueueInfo3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQueueInfo3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQueueInfo3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                               HRESULT ( STDMETHODCALLTYPE *get_QueueGuid )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__deref_out_opt BSTR *pbstrGuidQueue);
                                               HRESULT ( STDMETHODCALLTYPE *get_ServiceTypeGuid )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__deref_out_opt BSTR *pbstrGuidServiceType);
                                               HRESULT ( STDMETHODCALLTYPE *put_ServiceTypeGuid )(
            __RPC__in IMSMQQueueInfo3 * This,
                       __RPC__in BSTR bstrGuidServiceType);
                                               HRESULT ( STDMETHODCALLTYPE *get_Label )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__deref_out_opt BSTR *pbstrLabel);
                                               HRESULT ( STDMETHODCALLTYPE *put_Label )(
            __RPC__in IMSMQQueueInfo3 * This,
                       __RPC__in BSTR bstrLabel);
                                               HRESULT ( STDMETHODCALLTYPE *get_PathName )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__deref_out_opt BSTR *pbstrPathName);
                                               HRESULT ( STDMETHODCALLTYPE *put_PathName )(
            __RPC__in IMSMQQueueInfo3 * This,
                       __RPC__in BSTR bstrPathName);
                                               HRESULT ( STDMETHODCALLTYPE *get_FormatName )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__deref_out_opt BSTR *pbstrFormatName);
                                               HRESULT ( STDMETHODCALLTYPE *put_FormatName )(
            __RPC__in IMSMQQueueInfo3 * This,
                       __RPC__in BSTR bstrFormatName);
                                                       HRESULT ( STDMETHODCALLTYPE *get_IsTransactional )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__out Boolean *pisTransactional);
                                               HRESULT ( STDMETHODCALLTYPE *get_PrivLevel )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__out long *plPrivLevel);
                                               HRESULT ( STDMETHODCALLTYPE *put_PrivLevel )(
            __RPC__in IMSMQQueueInfo3 * This,
                       long lPrivLevel);
                                               HRESULT ( STDMETHODCALLTYPE *get_Journal )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__out long *plJournal);
                                               HRESULT ( STDMETHODCALLTYPE *put_Journal )(
            __RPC__in IMSMQQueueInfo3 * This,
                       long lJournal);
                                               HRESULT ( STDMETHODCALLTYPE *get_Quota )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__out long *plQuota);
                                               HRESULT ( STDMETHODCALLTYPE *put_Quota )(
            __RPC__in IMSMQQueueInfo3 * This,
                       long lQuota);
                                               HRESULT ( STDMETHODCALLTYPE *get_BasePriority )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__out long *plBasePriority);
                                               HRESULT ( STDMETHODCALLTYPE *put_BasePriority )(
            __RPC__in IMSMQQueueInfo3 * This,
                       long lBasePriority);
                                               HRESULT ( STDMETHODCALLTYPE *get_CreateTime )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__out VARIANT *pvarCreateTime);
                                               HRESULT ( STDMETHODCALLTYPE *get_ModifyTime )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__out VARIANT *pvarModifyTime);
                                               HRESULT ( STDMETHODCALLTYPE *get_Authenticate )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__out long *plAuthenticate);
                                               HRESULT ( STDMETHODCALLTYPE *put_Authenticate )(
            __RPC__in IMSMQQueueInfo3 * This,
                       long lAuthenticate);
                                               HRESULT ( STDMETHODCALLTYPE *get_JournalQuota )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__out long *plJournalQuota);
                                               HRESULT ( STDMETHODCALLTYPE *put_JournalQuota )(
            __RPC__in IMSMQQueueInfo3 * This,
                       long lJournalQuota);
                                                       HRESULT ( STDMETHODCALLTYPE *get_IsWorldReadable )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__out Boolean *pisWorldReadable);
                                  HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IMSMQQueueInfo3 * This,
                                 __RPC__in VARIANT *IsTransactional,
                                 __RPC__in VARIANT *IsWorldReadable);
                                  HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IMSMQQueueInfo3 * This);
                                  HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IMSMQQueueInfo3 * This,
                       long Access,
                       long ShareMode,
                                __RPC__deref_out_opt IMSMQQueue3 **ppq);
                                  HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IMSMQQueueInfo3 * This);
                                  HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in IMSMQQueueInfo3 * This);
                                               HRESULT ( STDMETHODCALLTYPE *get_PathNameDNS )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__deref_out_opt BSTR *pbstrPathNameDNS);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
                                    HRESULT ( STDMETHODCALLTYPE *get_Security )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__out VARIANT *pvarSecurity);
                                    HRESULT ( STDMETHODCALLTYPE *put_Security )(
            __RPC__in IMSMQQueueInfo3 * This,
                       VARIANT varSecurity);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsTransactional2 )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__out VARIANT_BOOL *pisTransactional);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsWorldReadable2 )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__out VARIANT_BOOL *pisWorldReadable);
                                               HRESULT ( STDMETHODCALLTYPE *get_MulticastAddress )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__deref_out_opt BSTR *pbstrMulticastAddress);
                                               HRESULT ( STDMETHODCALLTYPE *put_MulticastAddress )(
            __RPC__in IMSMQQueueInfo3 * This,
                       __RPC__in BSTR bstrMulticastAddress);
                                               HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IMSMQQueueInfo3 * This,
                                __RPC__deref_out_opt BSTR *pbstrADsPath);
        END_INTERFACE
    } IMSMQQueueInfo3Vtbl;
    interface IMSMQQueueInfo3
    {
        CONST_VTBL struct IMSMQQueueInfo3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_QueueGuid(This,pbstrGuidQueue) )
    ( (This)->lpVtbl -> get_ServiceTypeGuid(This,pbstrGuidServiceType) )
    ( (This)->lpVtbl -> put_ServiceTypeGuid(This,bstrGuidServiceType) )
    ( (This)->lpVtbl -> get_Label(This,pbstrLabel) )
    ( (This)->lpVtbl -> put_Label(This,bstrLabel) )
    ( (This)->lpVtbl -> get_PathName(This,pbstrPathName) )
    ( (This)->lpVtbl -> put_PathName(This,bstrPathName) )
    ( (This)->lpVtbl -> get_FormatName(This,pbstrFormatName) )
    ( (This)->lpVtbl -> put_FormatName(This,bstrFormatName) )
    ( (This)->lpVtbl -> get_IsTransactional(This,pisTransactional) )
    ( (This)->lpVtbl -> get_PrivLevel(This,plPrivLevel) )
    ( (This)->lpVtbl -> put_PrivLevel(This,lPrivLevel) )
    ( (This)->lpVtbl -> get_Journal(This,plJournal) )
    ( (This)->lpVtbl -> put_Journal(This,lJournal) )
    ( (This)->lpVtbl -> get_Quota(This,plQuota) )
    ( (This)->lpVtbl -> put_Quota(This,lQuota) )
    ( (This)->lpVtbl -> get_BasePriority(This,plBasePriority) )
    ( (This)->lpVtbl -> put_BasePriority(This,lBasePriority) )
    ( (This)->lpVtbl -> get_CreateTime(This,pvarCreateTime) )
    ( (This)->lpVtbl -> get_ModifyTime(This,pvarModifyTime) )
    ( (This)->lpVtbl -> get_Authenticate(This,plAuthenticate) )
    ( (This)->lpVtbl -> put_Authenticate(This,lAuthenticate) )
    ( (This)->lpVtbl -> get_JournalQuota(This,plJournalQuota) )
    ( (This)->lpVtbl -> put_JournalQuota(This,lJournalQuota) )
    ( (This)->lpVtbl -> get_IsWorldReadable(This,pisWorldReadable) )
    ( (This)->lpVtbl -> Create(This,IsTransactional,IsWorldReadable) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Open(This,Access,ShareMode,ppq) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Update(This) )
    ( (This)->lpVtbl -> get_PathNameDNS(This,pbstrPathNameDNS) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
    ( (This)->lpVtbl -> get_Security(This,pvarSecurity) )
    ( (This)->lpVtbl -> put_Security(This,varSecurity) )
    ( (This)->lpVtbl -> get_IsTransactional2(This,pisTransactional) )
    ( (This)->lpVtbl -> get_IsWorldReadable2(This,pisWorldReadable) )
    ( (This)->lpVtbl -> get_MulticastAddress(This,pbstrMulticastAddress) )
    ( (This)->lpVtbl -> put_MulticastAddress(This,bstrMulticastAddress) )
    ( (This)->lpVtbl -> get_ADsPath(This,pbstrADsPath) )
EXTERN_C const IID IID_IMSMQQueueInfo4;
    typedef struct IMSMQQueueInfo4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQueueInfo4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQueueInfo4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQueueInfo4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQueueInfo4 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQueueInfo4 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQueueInfo4 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQueueInfo4 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                               HRESULT ( STDMETHODCALLTYPE *get_QueueGuid )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__deref_out_opt BSTR *pbstrGuidQueue);
                                               HRESULT ( STDMETHODCALLTYPE *get_ServiceTypeGuid )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__deref_out_opt BSTR *pbstrGuidServiceType);
                                               HRESULT ( STDMETHODCALLTYPE *put_ServiceTypeGuid )(
            __RPC__in IMSMQQueueInfo4 * This,
                       __RPC__in BSTR bstrGuidServiceType);
                                               HRESULT ( STDMETHODCALLTYPE *get_Label )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__deref_out_opt BSTR *pbstrLabel);
                                               HRESULT ( STDMETHODCALLTYPE *put_Label )(
            __RPC__in IMSMQQueueInfo4 * This,
                       __RPC__in BSTR bstrLabel);
                                               HRESULT ( STDMETHODCALLTYPE *get_PathName )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__deref_out_opt BSTR *pbstrPathName);
                                               HRESULT ( STDMETHODCALLTYPE *put_PathName )(
            __RPC__in IMSMQQueueInfo4 * This,
                       __RPC__in BSTR bstrPathName);
                                               HRESULT ( STDMETHODCALLTYPE *get_FormatName )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__deref_out_opt BSTR *pbstrFormatName);
                                               HRESULT ( STDMETHODCALLTYPE *put_FormatName )(
            __RPC__in IMSMQQueueInfo4 * This,
                       __RPC__in BSTR bstrFormatName);
                                                       HRESULT ( STDMETHODCALLTYPE *get_IsTransactional )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__out Boolean *pisTransactional);
                                               HRESULT ( STDMETHODCALLTYPE *get_PrivLevel )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__out long *plPrivLevel);
                                               HRESULT ( STDMETHODCALLTYPE *put_PrivLevel )(
            __RPC__in IMSMQQueueInfo4 * This,
                       long lPrivLevel);
                                               HRESULT ( STDMETHODCALLTYPE *get_Journal )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__out long *plJournal);
                                               HRESULT ( STDMETHODCALLTYPE *put_Journal )(
            __RPC__in IMSMQQueueInfo4 * This,
                       long lJournal);
                                               HRESULT ( STDMETHODCALLTYPE *get_Quota )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__out long *plQuota);
                                               HRESULT ( STDMETHODCALLTYPE *put_Quota )(
            __RPC__in IMSMQQueueInfo4 * This,
                       long lQuota);
                                               HRESULT ( STDMETHODCALLTYPE *get_BasePriority )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__out long *plBasePriority);
                                               HRESULT ( STDMETHODCALLTYPE *put_BasePriority )(
            __RPC__in IMSMQQueueInfo4 * This,
                       long lBasePriority);
                                               HRESULT ( STDMETHODCALLTYPE *get_CreateTime )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__out VARIANT *pvarCreateTime);
                                               HRESULT ( STDMETHODCALLTYPE *get_ModifyTime )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__out VARIANT *pvarModifyTime);
                                               HRESULT ( STDMETHODCALLTYPE *get_Authenticate )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__out long *plAuthenticate);
                                               HRESULT ( STDMETHODCALLTYPE *put_Authenticate )(
            __RPC__in IMSMQQueueInfo4 * This,
                       long lAuthenticate);
                                               HRESULT ( STDMETHODCALLTYPE *get_JournalQuota )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__out long *plJournalQuota);
                                               HRESULT ( STDMETHODCALLTYPE *put_JournalQuota )(
            __RPC__in IMSMQQueueInfo4 * This,
                       long lJournalQuota);
                                                       HRESULT ( STDMETHODCALLTYPE *get_IsWorldReadable )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__out Boolean *pisWorldReadable);
                                  HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IMSMQQueueInfo4 * This,
                                 __RPC__in VARIANT *IsTransactional,
                                 __RPC__in VARIANT *IsWorldReadable);
                                  HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IMSMQQueueInfo4 * This);
                                  HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IMSMQQueueInfo4 * This,
                       long Access,
                       long ShareMode,
                                __RPC__deref_out_opt IMSMQQueue4 **ppq);
                                  HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IMSMQQueueInfo4 * This);
                                  HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in IMSMQQueueInfo4 * This);
                                               HRESULT ( STDMETHODCALLTYPE *get_PathNameDNS )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__deref_out_opt BSTR *pbstrPathNameDNS);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
                                    HRESULT ( STDMETHODCALLTYPE *get_Security )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__out VARIANT *pvarSecurity);
                                    HRESULT ( STDMETHODCALLTYPE *put_Security )(
            __RPC__in IMSMQQueueInfo4 * This,
                       VARIANT varSecurity);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsTransactional2 )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__out VARIANT_BOOL *pisTransactional);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsWorldReadable2 )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__out VARIANT_BOOL *pisWorldReadable);
                                               HRESULT ( STDMETHODCALLTYPE *get_MulticastAddress )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__deref_out_opt BSTR *pbstrMulticastAddress);
                                               HRESULT ( STDMETHODCALLTYPE *put_MulticastAddress )(
            __RPC__in IMSMQQueueInfo4 * This,
                       __RPC__in BSTR bstrMulticastAddress);
                                               HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IMSMQQueueInfo4 * This,
                                __RPC__deref_out_opt BSTR *pbstrADsPath);
        END_INTERFACE
    } IMSMQQueueInfo4Vtbl;
    interface IMSMQQueueInfo4
    {
        CONST_VTBL struct IMSMQQueueInfo4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_QueueGuid(This,pbstrGuidQueue) )
    ( (This)->lpVtbl -> get_ServiceTypeGuid(This,pbstrGuidServiceType) )
    ( (This)->lpVtbl -> put_ServiceTypeGuid(This,bstrGuidServiceType) )
    ( (This)->lpVtbl -> get_Label(This,pbstrLabel) )
    ( (This)->lpVtbl -> put_Label(This,bstrLabel) )
    ( (This)->lpVtbl -> get_PathName(This,pbstrPathName) )
    ( (This)->lpVtbl -> put_PathName(This,bstrPathName) )
    ( (This)->lpVtbl -> get_FormatName(This,pbstrFormatName) )
    ( (This)->lpVtbl -> put_FormatName(This,bstrFormatName) )
    ( (This)->lpVtbl -> get_IsTransactional(This,pisTransactional) )
    ( (This)->lpVtbl -> get_PrivLevel(This,plPrivLevel) )
    ( (This)->lpVtbl -> put_PrivLevel(This,lPrivLevel) )
    ( (This)->lpVtbl -> get_Journal(This,plJournal) )
    ( (This)->lpVtbl -> put_Journal(This,lJournal) )
    ( (This)->lpVtbl -> get_Quota(This,plQuota) )
    ( (This)->lpVtbl -> put_Quota(This,lQuota) )
    ( (This)->lpVtbl -> get_BasePriority(This,plBasePriority) )
    ( (This)->lpVtbl -> put_BasePriority(This,lBasePriority) )
    ( (This)->lpVtbl -> get_CreateTime(This,pvarCreateTime) )
    ( (This)->lpVtbl -> get_ModifyTime(This,pvarModifyTime) )
    ( (This)->lpVtbl -> get_Authenticate(This,plAuthenticate) )
    ( (This)->lpVtbl -> put_Authenticate(This,lAuthenticate) )
    ( (This)->lpVtbl -> get_JournalQuota(This,plJournalQuota) )
    ( (This)->lpVtbl -> put_JournalQuota(This,lJournalQuota) )
    ( (This)->lpVtbl -> get_IsWorldReadable(This,pisWorldReadable) )
    ( (This)->lpVtbl -> Create(This,IsTransactional,IsWorldReadable) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Open(This,Access,ShareMode,ppq) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Update(This) )
    ( (This)->lpVtbl -> get_PathNameDNS(This,pbstrPathNameDNS) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
    ( (This)->lpVtbl -> get_Security(This,pvarSecurity) )
    ( (This)->lpVtbl -> put_Security(This,varSecurity) )
    ( (This)->lpVtbl -> get_IsTransactional2(This,pisTransactional) )
    ( (This)->lpVtbl -> get_IsWorldReadable2(This,pisWorldReadable) )
    ( (This)->lpVtbl -> get_MulticastAddress(This,pbstrMulticastAddress) )
    ( (This)->lpVtbl -> put_MulticastAddress(This,bstrMulticastAddress) )
    ( (This)->lpVtbl -> get_ADsPath(This,pbstrADsPath) )
EXTERN_C const IID IID_IMSMQQueue;
    typedef struct IMSMQQueueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQueue * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQueue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQueue * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQueue * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQueue * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQueue * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQueue * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                               HRESULT ( STDMETHODCALLTYPE *get_Access )(
            __RPC__in IMSMQQueue * This,
                                __RPC__out long *plAccess);
                                               HRESULT ( STDMETHODCALLTYPE *get_ShareMode )(
            __RPC__in IMSMQQueue * This,
                                __RPC__out long *plShareMode);
                                               HRESULT ( STDMETHODCALLTYPE *get_QueueInfo )(
            __RPC__in IMSMQQueue * This,
                                __RPC__deref_out_opt IMSMQQueueInfo **ppqinfo);
                                               HRESULT ( STDMETHODCALLTYPE *get_Handle )(
            __RPC__in IMSMQQueue * This,
                                __RPC__out long *plHandle);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsOpen )(
            __RPC__in IMSMQQueue * This,
                                __RPC__out Boolean *pisOpen);
                                  HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IMSMQQueue * This);
                                  HRESULT ( STDMETHODCALLTYPE *Receive )(
            __RPC__in IMSMQQueue * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *Peek )(
            __RPC__in IMSMQQueue * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *EnableNotification )(
            __RPC__in IMSMQQueue * This,
                       __RPC__in_opt IMSMQEvent *Event,
                                 __RPC__in VARIANT *Cursor,
                                 __RPC__in VARIANT *ReceiveTimeout);
                                  HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IMSMQQueue * This);
                                  HRESULT ( STDMETHODCALLTYPE *ReceiveCurrent )(
            __RPC__in IMSMQQueue * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekNext )(
            __RPC__in IMSMQQueue * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekCurrent )(
            __RPC__in IMSMQQueue * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
        END_INTERFACE
    } IMSMQQueueVtbl;
    interface IMSMQQueue
    {
        CONST_VTBL struct IMSMQQueueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Access(This,plAccess) )
    ( (This)->lpVtbl -> get_ShareMode(This,plShareMode) )
    ( (This)->lpVtbl -> get_QueueInfo(This,ppqinfo) )
    ( (This)->lpVtbl -> get_Handle(This,plHandle) )
    ( (This)->lpVtbl -> get_IsOpen(This,pisOpen) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Receive(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> Peek(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> EnableNotification(This,Event,Cursor,ReceiveTimeout) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> ReceiveCurrent(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> PeekNext(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> PeekCurrent(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
EXTERN_C const IID IID_IMSMQQueue2;
    typedef struct IMSMQQueue2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQueue2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQueue2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQueue2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQueue2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQueue2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQueue2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQueue2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                               HRESULT ( STDMETHODCALLTYPE *get_Access )(
            __RPC__in IMSMQQueue2 * This,
                                __RPC__out long *plAccess);
                                               HRESULT ( STDMETHODCALLTYPE *get_ShareMode )(
            __RPC__in IMSMQQueue2 * This,
                                __RPC__out long *plShareMode);
                                               HRESULT ( STDMETHODCALLTYPE *get_QueueInfo )(
            __RPC__in IMSMQQueue2 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo2 **ppqinfo);
                                               HRESULT ( STDMETHODCALLTYPE *get_Handle )(
            __RPC__in IMSMQQueue2 * This,
                                __RPC__out long *plHandle);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsOpen )(
            __RPC__in IMSMQQueue2 * This,
                                __RPC__out Boolean *pisOpen);
                                  HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IMSMQQueue2 * This);
                                          HRESULT ( STDMETHODCALLTYPE *Receive_v1 )(
            __RPC__in IMSMQQueue2 * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                          HRESULT ( STDMETHODCALLTYPE *Peek_v1 )(
            __RPC__in IMSMQQueue2 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *EnableNotification )(
            __RPC__in IMSMQQueue2 * This,
                       __RPC__in_opt IMSMQEvent2 *Event,
                                 __RPC__in VARIANT *Cursor,
                                 __RPC__in VARIANT *ReceiveTimeout);
                                  HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IMSMQQueue2 * This);
                                          HRESULT ( STDMETHODCALLTYPE *ReceiveCurrent_v1 )(
            __RPC__in IMSMQQueue2 * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                          HRESULT ( STDMETHODCALLTYPE *PeekNext_v1 )(
            __RPC__in IMSMQQueue2 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                          HRESULT ( STDMETHODCALLTYPE *PeekCurrent_v1 )(
            __RPC__in IMSMQQueue2 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *Receive )(
            __RPC__in IMSMQQueue2 * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage2 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *Peek )(
            __RPC__in IMSMQQueue2 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage2 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *ReceiveCurrent )(
            __RPC__in IMSMQQueue2 * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage2 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekNext )(
            __RPC__in IMSMQQueue2 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage2 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekCurrent )(
            __RPC__in IMSMQQueue2 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage2 **ppmsg);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQQueue2 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
        END_INTERFACE
    } IMSMQQueue2Vtbl;
    interface IMSMQQueue2
    {
        CONST_VTBL struct IMSMQQueue2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Access(This,plAccess) )
    ( (This)->lpVtbl -> get_ShareMode(This,plShareMode) )
    ( (This)->lpVtbl -> get_QueueInfo(This,ppqinfo) )
    ( (This)->lpVtbl -> get_Handle(This,plHandle) )
    ( (This)->lpVtbl -> get_IsOpen(This,pisOpen) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Receive_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> Peek_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> EnableNotification(This,Event,Cursor,ReceiveTimeout) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> ReceiveCurrent_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> PeekNext_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> PeekCurrent_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> Receive(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> Peek(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> ReceiveCurrent(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> PeekNext(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> PeekCurrent(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
EXTERN_C const IID IID_IMSMQQueue3;
    typedef struct IMSMQQueue3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQueue3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQueue3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQueue3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQueue3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQueue3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQueue3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQueue3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                               HRESULT ( STDMETHODCALLTYPE *get_Access )(
            __RPC__in IMSMQQueue3 * This,
                                __RPC__out long *plAccess);
                                               HRESULT ( STDMETHODCALLTYPE *get_ShareMode )(
            __RPC__in IMSMQQueue3 * This,
                                __RPC__out long *plShareMode);
                                               HRESULT ( STDMETHODCALLTYPE *get_QueueInfo )(
            __RPC__in IMSMQQueue3 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo3 **ppqinfo);
                                               HRESULT ( STDMETHODCALLTYPE *get_Handle )(
            __RPC__in IMSMQQueue3 * This,
                                __RPC__out long *plHandle);
                                                       HRESULT ( STDMETHODCALLTYPE *get_IsOpen )(
            __RPC__in IMSMQQueue3 * This,
                                __RPC__out Boolean *pisOpen);
                                  HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IMSMQQueue3 * This);
                                          HRESULT ( STDMETHODCALLTYPE *Receive_v1 )(
            __RPC__in IMSMQQueue3 * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                          HRESULT ( STDMETHODCALLTYPE *Peek_v1 )(
            __RPC__in IMSMQQueue3 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *EnableNotification )(
            __RPC__in IMSMQQueue3 * This,
                       __RPC__in_opt IMSMQEvent3 *Event,
                                 __RPC__in VARIANT *Cursor,
                                 __RPC__in VARIANT *ReceiveTimeout);
                                  HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IMSMQQueue3 * This);
                                          HRESULT ( STDMETHODCALLTYPE *ReceiveCurrent_v1 )(
            __RPC__in IMSMQQueue3 * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                          HRESULT ( STDMETHODCALLTYPE *PeekNext_v1 )(
            __RPC__in IMSMQQueue3 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                          HRESULT ( STDMETHODCALLTYPE *PeekCurrent_v1 )(
            __RPC__in IMSMQQueue3 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *Receive )(
            __RPC__in IMSMQQueue3 * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage3 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *Peek )(
            __RPC__in IMSMQQueue3 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage3 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *ReceiveCurrent )(
            __RPC__in IMSMQQueue3 * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage3 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekNext )(
            __RPC__in IMSMQQueue3 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage3 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekCurrent )(
            __RPC__in IMSMQQueue3 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage3 **ppmsg);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQQueue3 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
                                                       HRESULT ( STDMETHODCALLTYPE *get_Handle2 )(
            __RPC__in IMSMQQueue3 * This,
                                __RPC__out VARIANT *pvarHandle);
                                  HRESULT ( STDMETHODCALLTYPE *ReceiveByLookupId )(
            __RPC__in IMSMQQueue3 * This,
                       VARIANT LookupId,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage3 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *ReceiveNextByLookupId )(
            __RPC__in IMSMQQueue3 * This,
                       VARIANT LookupId,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage3 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *ReceivePreviousByLookupId )(
            __RPC__in IMSMQQueue3 * This,
                       VARIANT LookupId,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage3 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *ReceiveFirstByLookupId )(
            __RPC__in IMSMQQueue3 * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage3 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *ReceiveLastByLookupId )(
            __RPC__in IMSMQQueue3 * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage3 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekByLookupId )(
            __RPC__in IMSMQQueue3 * This,
                       VARIANT LookupId,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage3 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekNextByLookupId )(
            __RPC__in IMSMQQueue3 * This,
                       VARIANT LookupId,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage3 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekPreviousByLookupId )(
            __RPC__in IMSMQQueue3 * This,
                       VARIANT LookupId,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage3 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekFirstByLookupId )(
            __RPC__in IMSMQQueue3 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage3 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekLastByLookupId )(
            __RPC__in IMSMQQueue3 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage3 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *Purge )(
            __RPC__in IMSMQQueue3 * This);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsOpen2 )(
            __RPC__in IMSMQQueue3 * This,
                                __RPC__out VARIANT_BOOL *pisOpen);
        END_INTERFACE
    } IMSMQQueue3Vtbl;
    interface IMSMQQueue3
    {
        CONST_VTBL struct IMSMQQueue3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Access(This,plAccess) )
    ( (This)->lpVtbl -> get_ShareMode(This,plShareMode) )
    ( (This)->lpVtbl -> get_QueueInfo(This,ppqinfo) )
    ( (This)->lpVtbl -> get_Handle(This,plHandle) )
    ( (This)->lpVtbl -> get_IsOpen(This,pisOpen) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Receive_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> Peek_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> EnableNotification(This,Event,Cursor,ReceiveTimeout) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> ReceiveCurrent_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> PeekNext_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> PeekCurrent_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> Receive(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> Peek(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> ReceiveCurrent(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> PeekNext(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> PeekCurrent(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
    ( (This)->lpVtbl -> get_Handle2(This,pvarHandle) )
    ( (This)->lpVtbl -> ReceiveByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> ReceiveNextByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> ReceivePreviousByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> ReceiveFirstByLookupId(This,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> ReceiveLastByLookupId(This,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> PeekByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> PeekNextByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> PeekPreviousByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> PeekFirstByLookupId(This,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> PeekLastByLookupId(This,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> Purge(This) )
    ( (This)->lpVtbl -> get_IsOpen2(This,pisOpen) )
EXTERN_C const IID IID_IMSMQQueue4;
    typedef struct IMSMQQueue4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQueue4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQueue4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQueue4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQueue4 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQueue4 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQueue4 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQueue4 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                               HRESULT ( STDMETHODCALLTYPE *get_Access )(
            __RPC__in IMSMQQueue4 * This,
                                __RPC__out long *plAccess);
                                               HRESULT ( STDMETHODCALLTYPE *get_ShareMode )(
            __RPC__in IMSMQQueue4 * This,
                                __RPC__out long *plShareMode);
                                               HRESULT ( STDMETHODCALLTYPE *get_QueueInfo )(
            __RPC__in IMSMQQueue4 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo4 **ppqinfo);
                                               HRESULT ( STDMETHODCALLTYPE *get_Handle )(
            __RPC__in IMSMQQueue4 * This,
                                __RPC__out long *plHandle);
                                                       HRESULT ( STDMETHODCALLTYPE *get_IsOpen )(
            __RPC__in IMSMQQueue4 * This,
                                __RPC__out Boolean *pisOpen);
                                  HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IMSMQQueue4 * This);
                                          HRESULT ( STDMETHODCALLTYPE *Receive_v1 )(
            __RPC__in IMSMQQueue4 * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                          HRESULT ( STDMETHODCALLTYPE *Peek_v1 )(
            __RPC__in IMSMQQueue4 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *EnableNotification )(
            __RPC__in IMSMQQueue4 * This,
                       __RPC__in_opt IMSMQEvent3 *Event,
                                 __RPC__in VARIANT *Cursor,
                                 __RPC__in VARIANT *ReceiveTimeout);
                                  HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IMSMQQueue4 * This);
                                          HRESULT ( STDMETHODCALLTYPE *ReceiveCurrent_v1 )(
            __RPC__in IMSMQQueue4 * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                          HRESULT ( STDMETHODCALLTYPE *PeekNext_v1 )(
            __RPC__in IMSMQQueue4 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                          HRESULT ( STDMETHODCALLTYPE *PeekCurrent_v1 )(
            __RPC__in IMSMQQueue4 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                __RPC__deref_out_opt IMSMQMessage **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *Receive )(
            __RPC__in IMSMQQueue4 * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage4 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *Peek )(
            __RPC__in IMSMQQueue4 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage4 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *ReceiveCurrent )(
            __RPC__in IMSMQQueue4 * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage4 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekNext )(
            __RPC__in IMSMQQueue4 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage4 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekCurrent )(
            __RPC__in IMSMQQueue4 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *ReceiveTimeout,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage4 **ppmsg);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQQueue4 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
                                                       HRESULT ( STDMETHODCALLTYPE *get_Handle2 )(
            __RPC__in IMSMQQueue4 * This,
                                __RPC__out VARIANT *pvarHandle);
                                  HRESULT ( STDMETHODCALLTYPE *ReceiveByLookupId )(
            __RPC__in IMSMQQueue4 * This,
                       VARIANT LookupId,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage4 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *ReceiveNextByLookupId )(
            __RPC__in IMSMQQueue4 * This,
                       VARIANT LookupId,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage4 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *ReceivePreviousByLookupId )(
            __RPC__in IMSMQQueue4 * This,
                       VARIANT LookupId,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage4 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *ReceiveFirstByLookupId )(
            __RPC__in IMSMQQueue4 * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage4 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *ReceiveLastByLookupId )(
            __RPC__in IMSMQQueue4 * This,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage4 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekByLookupId )(
            __RPC__in IMSMQQueue4 * This,
                       VARIANT LookupId,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage4 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekNextByLookupId )(
            __RPC__in IMSMQQueue4 * This,
                       VARIANT LookupId,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage4 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekPreviousByLookupId )(
            __RPC__in IMSMQQueue4 * This,
                       VARIANT LookupId,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage4 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekFirstByLookupId )(
            __RPC__in IMSMQQueue4 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage4 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *PeekLastByLookupId )(
            __RPC__in IMSMQQueue4 * This,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage4 **ppmsg);
                                  HRESULT ( STDMETHODCALLTYPE *Purge )(
            __RPC__in IMSMQQueue4 * This);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsOpen2 )(
            __RPC__in IMSMQQueue4 * This,
                                __RPC__out VARIANT_BOOL *pisOpen);
                                  HRESULT ( STDMETHODCALLTYPE *ReceiveByLookupIdAllowPeek )(
            __RPC__in IMSMQQueue4 * This,
                       VARIANT LookupId,
                                 __RPC__in VARIANT *Transaction,
                                 __RPC__in VARIANT *WantDestinationQueue,
                                 __RPC__in VARIANT *WantBody,
                                 __RPC__in VARIANT *WantConnectorType,
                                __RPC__deref_out_opt IMSMQMessage4 **ppmsg);
        END_INTERFACE
    } IMSMQQueue4Vtbl;
    interface IMSMQQueue4
    {
        CONST_VTBL struct IMSMQQueue4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Access(This,plAccess) )
    ( (This)->lpVtbl -> get_ShareMode(This,plShareMode) )
    ( (This)->lpVtbl -> get_QueueInfo(This,ppqinfo) )
    ( (This)->lpVtbl -> get_Handle(This,plHandle) )
    ( (This)->lpVtbl -> get_IsOpen(This,pisOpen) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Receive_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> Peek_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> EnableNotification(This,Event,Cursor,ReceiveTimeout) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> ReceiveCurrent_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> PeekNext_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> PeekCurrent_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
    ( (This)->lpVtbl -> Receive(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> Peek(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> ReceiveCurrent(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> PeekNext(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> PeekCurrent(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
    ( (This)->lpVtbl -> get_Handle2(This,pvarHandle) )
    ( (This)->lpVtbl -> ReceiveByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> ReceiveNextByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> ReceivePreviousByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> ReceiveFirstByLookupId(This,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> ReceiveLastByLookupId(This,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> PeekByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> PeekNextByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> PeekPreviousByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> PeekFirstByLookupId(This,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> PeekLastByLookupId(This,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
    ( (This)->lpVtbl -> Purge(This) )
    ( (This)->lpVtbl -> get_IsOpen2(This,pisOpen) )
    ( (This)->lpVtbl -> ReceiveByLookupIdAllowPeek(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
EXTERN_C const IID IID_IMSMQMessage;
    typedef struct IMSMQMessageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQMessage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQMessage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQMessage * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQMessage * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQMessage * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQMessage * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQMessage * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                               HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out long *plClass);
                                               HRESULT ( STDMETHODCALLTYPE *get_PrivLevel )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out long *plPrivLevel);
                                               HRESULT ( STDMETHODCALLTYPE *put_PrivLevel )(
            __RPC__in IMSMQMessage * This,
                       long lPrivLevel);
                                               HRESULT ( STDMETHODCALLTYPE *get_AuthLevel )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out long *plAuthLevel);
                                               HRESULT ( STDMETHODCALLTYPE *put_AuthLevel )(
            __RPC__in IMSMQMessage * This,
                       long lAuthLevel);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsAuthenticated )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out Boolean *pisAuthenticated);
                                               HRESULT ( STDMETHODCALLTYPE *get_Delivery )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out long *plDelivery);
                                               HRESULT ( STDMETHODCALLTYPE *put_Delivery )(
            __RPC__in IMSMQMessage * This,
                       long lDelivery);
                                               HRESULT ( STDMETHODCALLTYPE *get_Trace )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out long *plTrace);
                                               HRESULT ( STDMETHODCALLTYPE *put_Trace )(
            __RPC__in IMSMQMessage * This,
                       long lTrace);
                                               HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out long *plPriority);
                                               HRESULT ( STDMETHODCALLTYPE *put_Priority )(
            __RPC__in IMSMQMessage * This,
                       long lPriority);
                                               HRESULT ( STDMETHODCALLTYPE *get_Journal )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out long *plJournal);
                                               HRESULT ( STDMETHODCALLTYPE *put_Journal )(
            __RPC__in IMSMQMessage * This,
                       long lJournal);
                                               HRESULT ( STDMETHODCALLTYPE *get_ResponseQueueInfo )(
            __RPC__in IMSMQMessage * This,
                                __RPC__deref_out_opt IMSMQQueueInfo **ppqinfoResponse);
                                                  HRESULT ( STDMETHODCALLTYPE *putref_ResponseQueueInfo )(
            __RPC__in IMSMQMessage * This,
                       __RPC__in_opt IMSMQQueueInfo *pqinfoResponse);
                                               HRESULT ( STDMETHODCALLTYPE *get_AppSpecific )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out long *plAppSpecific);
                                               HRESULT ( STDMETHODCALLTYPE *put_AppSpecific )(
            __RPC__in IMSMQMessage * This,
                       long lAppSpecific);
                                               HRESULT ( STDMETHODCALLTYPE *get_SourceMachineGuid )(
            __RPC__in IMSMQMessage * This,
                                __RPC__deref_out_opt BSTR *pbstrGuidSrcMachine);
                                               HRESULT ( STDMETHODCALLTYPE *get_BodyLength )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out long *pcbBody);
                                               HRESULT ( STDMETHODCALLTYPE *get_Body )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out VARIANT *pvarBody);
                                               HRESULT ( STDMETHODCALLTYPE *put_Body )(
            __RPC__in IMSMQMessage * This,
                       VARIANT varBody);
                                               HRESULT ( STDMETHODCALLTYPE *get_AdminQueueInfo )(
            __RPC__in IMSMQMessage * This,
                                __RPC__deref_out_opt IMSMQQueueInfo **ppqinfoAdmin);
                                                  HRESULT ( STDMETHODCALLTYPE *putref_AdminQueueInfo )(
            __RPC__in IMSMQMessage * This,
                       __RPC__in_opt IMSMQQueueInfo *pqinfoAdmin);
                                               HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out VARIANT *pvarMsgId);
                                               HRESULT ( STDMETHODCALLTYPE *get_CorrelationId )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out VARIANT *pvarMsgId);
                                               HRESULT ( STDMETHODCALLTYPE *put_CorrelationId )(
            __RPC__in IMSMQMessage * This,
                       VARIANT varMsgId);
                                               HRESULT ( STDMETHODCALLTYPE *get_Ack )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out long *plAck);
                                               HRESULT ( STDMETHODCALLTYPE *put_Ack )(
            __RPC__in IMSMQMessage * This,
                       long lAck);
                                               HRESULT ( STDMETHODCALLTYPE *get_Label )(
            __RPC__in IMSMQMessage * This,
                                __RPC__deref_out_opt BSTR *pbstrLabel);
                                               HRESULT ( STDMETHODCALLTYPE *put_Label )(
            __RPC__in IMSMQMessage * This,
                       __RPC__in BSTR bstrLabel);
                                               HRESULT ( STDMETHODCALLTYPE *get_MaxTimeToReachQueue )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out long *plMaxTimeToReachQueue);
                                               HRESULT ( STDMETHODCALLTYPE *put_MaxTimeToReachQueue )(
            __RPC__in IMSMQMessage * This,
                       long lMaxTimeToReachQueue);
                                               HRESULT ( STDMETHODCALLTYPE *get_MaxTimeToReceive )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out long *plMaxTimeToReceive);
                                               HRESULT ( STDMETHODCALLTYPE *put_MaxTimeToReceive )(
            __RPC__in IMSMQMessage * This,
                       long lMaxTimeToReceive);
                                               HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out long *plHashAlg);
                                               HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IMSMQMessage * This,
                       long lHashAlg);
                                               HRESULT ( STDMETHODCALLTYPE *get_EncryptAlgorithm )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out long *plEncryptAlg);
                                               HRESULT ( STDMETHODCALLTYPE *put_EncryptAlgorithm )(
            __RPC__in IMSMQMessage * This,
                       long lEncryptAlg);
                                               HRESULT ( STDMETHODCALLTYPE *get_SentTime )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out VARIANT *pvarSentTime);
                                               HRESULT ( STDMETHODCALLTYPE *get_ArrivedTime )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out VARIANT *plArrivedTime);
                                               HRESULT ( STDMETHODCALLTYPE *get_DestinationQueueInfo )(
            __RPC__in IMSMQMessage * This,
                                __RPC__deref_out_opt IMSMQQueueInfo **ppqinfoDest);
                                               HRESULT ( STDMETHODCALLTYPE *get_SenderCertificate )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out VARIANT *pvarSenderCert);
                                               HRESULT ( STDMETHODCALLTYPE *put_SenderCertificate )(
            __RPC__in IMSMQMessage * This,
                       VARIANT varSenderCert);
                                               HRESULT ( STDMETHODCALLTYPE *get_SenderId )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out VARIANT *pvarSenderId);
                                               HRESULT ( STDMETHODCALLTYPE *get_SenderIdType )(
            __RPC__in IMSMQMessage * This,
                                __RPC__out long *plSenderIdType);
                                               HRESULT ( STDMETHODCALLTYPE *put_SenderIdType )(
            __RPC__in IMSMQMessage * This,
                       long lSenderIdType);
                                  HRESULT ( STDMETHODCALLTYPE *Send )(
            __RPC__in IMSMQMessage * This,
                       __RPC__in_opt IMSMQQueue *DestinationQueue,
                                 __RPC__in VARIANT *Transaction);
                                  HRESULT ( STDMETHODCALLTYPE *AttachCurrentSecurityContext )(
            __RPC__in IMSMQMessage * This);
        END_INTERFACE
    } IMSMQMessageVtbl;
    interface IMSMQMessage
    {
        CONST_VTBL struct IMSMQMessageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Class(This,plClass) )
    ( (This)->lpVtbl -> get_PrivLevel(This,plPrivLevel) )
    ( (This)->lpVtbl -> put_PrivLevel(This,lPrivLevel) )
    ( (This)->lpVtbl -> get_AuthLevel(This,plAuthLevel) )
    ( (This)->lpVtbl -> put_AuthLevel(This,lAuthLevel) )
    ( (This)->lpVtbl -> get_IsAuthenticated(This,pisAuthenticated) )
    ( (This)->lpVtbl -> get_Delivery(This,plDelivery) )
    ( (This)->lpVtbl -> put_Delivery(This,lDelivery) )
    ( (This)->lpVtbl -> get_Trace(This,plTrace) )
    ( (This)->lpVtbl -> put_Trace(This,lTrace) )
    ( (This)->lpVtbl -> get_Priority(This,plPriority) )
    ( (This)->lpVtbl -> put_Priority(This,lPriority) )
    ( (This)->lpVtbl -> get_Journal(This,plJournal) )
    ( (This)->lpVtbl -> put_Journal(This,lJournal) )
    ( (This)->lpVtbl -> get_ResponseQueueInfo(This,ppqinfoResponse) )
    ( (This)->lpVtbl -> putref_ResponseQueueInfo(This,pqinfoResponse) )
    ( (This)->lpVtbl -> get_AppSpecific(This,plAppSpecific) )
    ( (This)->lpVtbl -> put_AppSpecific(This,lAppSpecific) )
    ( (This)->lpVtbl -> get_SourceMachineGuid(This,pbstrGuidSrcMachine) )
    ( (This)->lpVtbl -> get_BodyLength(This,pcbBody) )
    ( (This)->lpVtbl -> get_Body(This,pvarBody) )
    ( (This)->lpVtbl -> put_Body(This,varBody) )
    ( (This)->lpVtbl -> get_AdminQueueInfo(This,ppqinfoAdmin) )
    ( (This)->lpVtbl -> putref_AdminQueueInfo(This,pqinfoAdmin) )
    ( (This)->lpVtbl -> get_Id(This,pvarMsgId) )
    ( (This)->lpVtbl -> get_CorrelationId(This,pvarMsgId) )
    ( (This)->lpVtbl -> put_CorrelationId(This,varMsgId) )
    ( (This)->lpVtbl -> get_Ack(This,plAck) )
    ( (This)->lpVtbl -> put_Ack(This,lAck) )
    ( (This)->lpVtbl -> get_Label(This,pbstrLabel) )
    ( (This)->lpVtbl -> put_Label(This,bstrLabel) )
    ( (This)->lpVtbl -> get_MaxTimeToReachQueue(This,plMaxTimeToReachQueue) )
    ( (This)->lpVtbl -> put_MaxTimeToReachQueue(This,lMaxTimeToReachQueue) )
    ( (This)->lpVtbl -> get_MaxTimeToReceive(This,plMaxTimeToReceive) )
    ( (This)->lpVtbl -> put_MaxTimeToReceive(This,lMaxTimeToReceive) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,plHashAlg) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,lHashAlg) )
    ( (This)->lpVtbl -> get_EncryptAlgorithm(This,plEncryptAlg) )
    ( (This)->lpVtbl -> put_EncryptAlgorithm(This,lEncryptAlg) )
    ( (This)->lpVtbl -> get_SentTime(This,pvarSentTime) )
    ( (This)->lpVtbl -> get_ArrivedTime(This,plArrivedTime) )
    ( (This)->lpVtbl -> get_DestinationQueueInfo(This,ppqinfoDest) )
    ( (This)->lpVtbl -> get_SenderCertificate(This,pvarSenderCert) )
    ( (This)->lpVtbl -> put_SenderCertificate(This,varSenderCert) )
    ( (This)->lpVtbl -> get_SenderId(This,pvarSenderId) )
    ( (This)->lpVtbl -> get_SenderIdType(This,plSenderIdType) )
    ( (This)->lpVtbl -> put_SenderIdType(This,lSenderIdType) )
    ( (This)->lpVtbl -> Send(This,DestinationQueue,Transaction) )
    ( (This)->lpVtbl -> AttachCurrentSecurityContext(This) )
EXTERN_C const IID IID_IMSMQQueueInfos;
    typedef struct IMSMQQueueInfosVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQueueInfos * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQueueInfos * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQueueInfos * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQueueInfos * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQueueInfos * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQueueInfos * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQueueInfos * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                  HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IMSMQQueueInfos * This);
                                  HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IMSMQQueueInfos * This,
                                __RPC__deref_out_opt IMSMQQueueInfo **ppqinfoNext);
        END_INTERFACE
    } IMSMQQueueInfosVtbl;
    interface IMSMQQueueInfos
    {
        CONST_VTBL struct IMSMQQueueInfosVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Next(This,ppqinfoNext) )
EXTERN_C const IID IID_IMSMQQueueInfos2;
    typedef struct IMSMQQueueInfos2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQueueInfos2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQueueInfos2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQueueInfos2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQueueInfos2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQueueInfos2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQueueInfos2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQueueInfos2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                  HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IMSMQQueueInfos2 * This);
                                  HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IMSMQQueueInfos2 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo2 **ppqinfoNext);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQQueueInfos2 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
        END_INTERFACE
    } IMSMQQueueInfos2Vtbl;
    interface IMSMQQueueInfos2
    {
        CONST_VTBL struct IMSMQQueueInfos2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Next(This,ppqinfoNext) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
EXTERN_C const IID IID_IMSMQQueueInfos3;
    typedef struct IMSMQQueueInfos3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQueueInfos3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQueueInfos3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQueueInfos3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQueueInfos3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQueueInfos3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQueueInfos3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQueueInfos3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                  HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IMSMQQueueInfos3 * This);
                                  HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IMSMQQueueInfos3 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo3 **ppqinfoNext);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQQueueInfos3 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
        END_INTERFACE
    } IMSMQQueueInfos3Vtbl;
    interface IMSMQQueueInfos3
    {
        CONST_VTBL struct IMSMQQueueInfos3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Next(This,ppqinfoNext) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
EXTERN_C const IID IID_IMSMQQueueInfos4;
    typedef struct IMSMQQueueInfos4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQueueInfos4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQueueInfos4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQueueInfos4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQueueInfos4 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQueueInfos4 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQueueInfos4 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQueueInfos4 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                  HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IMSMQQueueInfos4 * This);
                                  HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IMSMQQueueInfos4 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo4 **ppqinfoNext);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQQueueInfos4 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
        END_INTERFACE
    } IMSMQQueueInfos4Vtbl;
    interface IMSMQQueueInfos4
    {
        CONST_VTBL struct IMSMQQueueInfos4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Next(This,ppqinfoNext) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
EXTERN_C const IID IID_IMSMQEvent;
    typedef struct IMSMQEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IMSMQEventVtbl;
    interface IMSMQEvent
    {
        CONST_VTBL struct IMSMQEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IMSMQEvent2;
    typedef struct IMSMQEvent2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQEvent2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQEvent2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQEvent2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQEvent2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQEvent2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQEvent2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQEvent2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQEvent2 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
        END_INTERFACE
    } IMSMQEvent2Vtbl;
    interface IMSMQEvent2
    {
        CONST_VTBL struct IMSMQEvent2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
EXTERN_C const IID IID_IMSMQEvent3;
    typedef struct IMSMQEvent3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQEvent3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQEvent3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQEvent3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQEvent3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQEvent3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQEvent3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQEvent3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQEvent3 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
        END_INTERFACE
    } IMSMQEvent3Vtbl;
    interface IMSMQEvent3
    {
        CONST_VTBL struct IMSMQEvent3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
EXTERN_C const IID IID_IMSMQTransaction;
    typedef struct IMSMQTransactionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQTransaction * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQTransaction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQTransaction * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQTransaction * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQTransaction * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQTransaction * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQTransaction * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                               HRESULT ( STDMETHODCALLTYPE *get_Transaction )(
            __RPC__in IMSMQTransaction * This,
                                __RPC__out long *plTransaction);
                                  HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IMSMQTransaction * This,
                                 __RPC__in VARIANT *fRetaining,
                                 __RPC__in VARIANT *grfTC,
                                 __RPC__in VARIANT *grfRM);
                                  HRESULT ( STDMETHODCALLTYPE *Abort )(
            __RPC__in IMSMQTransaction * This,
                                 __RPC__in VARIANT *fRetaining,
                                 __RPC__in VARIANT *fAsync);
        END_INTERFACE
    } IMSMQTransactionVtbl;
    interface IMSMQTransaction
    {
        CONST_VTBL struct IMSMQTransactionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Transaction(This,plTransaction) )
    ( (This)->lpVtbl -> Commit(This,fRetaining,grfTC,grfRM) )
    ( (This)->lpVtbl -> Abort(This,fRetaining,fAsync) )
EXTERN_C const IID IID_IMSMQCoordinatedTransactionDispenser;
    typedef struct IMSMQCoordinatedTransactionDispenserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQCoordinatedTransactionDispenser * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQCoordinatedTransactionDispenser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQCoordinatedTransactionDispenser * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQCoordinatedTransactionDispenser * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQCoordinatedTransactionDispenser * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQCoordinatedTransactionDispenser * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQCoordinatedTransactionDispenser * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                  HRESULT ( STDMETHODCALLTYPE *BeginTransaction )(
            __RPC__in IMSMQCoordinatedTransactionDispenser * This,
                                __RPC__deref_out_opt IMSMQTransaction **ptransaction);
        END_INTERFACE
    } IMSMQCoordinatedTransactionDispenserVtbl;
    interface IMSMQCoordinatedTransactionDispenser
    {
        CONST_VTBL struct IMSMQCoordinatedTransactionDispenserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> BeginTransaction(This,ptransaction) )
EXTERN_C const IID IID_IMSMQTransactionDispenser;
    typedef struct IMSMQTransactionDispenserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQTransactionDispenser * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQTransactionDispenser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQTransactionDispenser * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQTransactionDispenser * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQTransactionDispenser * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQTransactionDispenser * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQTransactionDispenser * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                  HRESULT ( STDMETHODCALLTYPE *BeginTransaction )(
            __RPC__in IMSMQTransactionDispenser * This,
                                __RPC__deref_out_opt IMSMQTransaction **ptransaction);
        END_INTERFACE
    } IMSMQTransactionDispenserVtbl;
    interface IMSMQTransactionDispenser
    {
        CONST_VTBL struct IMSMQTransactionDispenserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> BeginTransaction(This,ptransaction) )
EXTERN_C const IID IID_IMSMQQuery2;
    typedef struct IMSMQQuery2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQuery2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQuery2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQuery2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQuery2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQuery2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQuery2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQuery2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                  HRESULT ( STDMETHODCALLTYPE *LookupQueue )(
            __RPC__in IMSMQQuery2 * This,
                                 __RPC__in VARIANT *QueueGuid,
                                 __RPC__in VARIANT *ServiceTypeGuid,
                                 __RPC__in VARIANT *Label,
                                 __RPC__in VARIANT *CreateTime,
                                 __RPC__in VARIANT *ModifyTime,
                                 __RPC__in VARIANT *RelServiceType,
                                 __RPC__in VARIANT *RelLabel,
                                 __RPC__in VARIANT *RelCreateTime,
                                 __RPC__in VARIANT *RelModifyTime,
                                __RPC__deref_out_opt IMSMQQueueInfos2 **ppqinfos);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQQuery2 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
        END_INTERFACE
    } IMSMQQuery2Vtbl;
    interface IMSMQQuery2
    {
        CONST_VTBL struct IMSMQQuery2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> LookupQueue(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,ppqinfos) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
EXTERN_C const IID IID_IMSMQQuery3;
    typedef struct IMSMQQuery3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQuery3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQuery3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQuery3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQuery3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQuery3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQuery3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQuery3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                          HRESULT ( STDMETHODCALLTYPE *LookupQueue_v2 )(
            __RPC__in IMSMQQuery3 * This,
                                 __RPC__in VARIANT *QueueGuid,
                                 __RPC__in VARIANT *ServiceTypeGuid,
                                 __RPC__in VARIANT *Label,
                                 __RPC__in VARIANT *CreateTime,
                                 __RPC__in VARIANT *ModifyTime,
                                 __RPC__in VARIANT *RelServiceType,
                                 __RPC__in VARIANT *RelLabel,
                                 __RPC__in VARIANT *RelCreateTime,
                                 __RPC__in VARIANT *RelModifyTime,
                                __RPC__deref_out_opt IMSMQQueueInfos3 **ppqinfos);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQQuery3 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
                                  HRESULT ( STDMETHODCALLTYPE *LookupQueue )(
            __RPC__in IMSMQQuery3 * This,
                                 __RPC__in VARIANT *QueueGuid,
                                 __RPC__in VARIANT *ServiceTypeGuid,
                                 __RPC__in VARIANT *Label,
                                 __RPC__in VARIANT *CreateTime,
                                 __RPC__in VARIANT *ModifyTime,
                                 __RPC__in VARIANT *RelServiceType,
                                 __RPC__in VARIANT *RelLabel,
                                 __RPC__in VARIANT *RelCreateTime,
                                 __RPC__in VARIANT *RelModifyTime,
                                 __RPC__in VARIANT *MulticastAddress,
                                 __RPC__in VARIANT *RelMulticastAddress,
                                __RPC__deref_out_opt IMSMQQueueInfos3 **ppqinfos);
        END_INTERFACE
    } IMSMQQuery3Vtbl;
    interface IMSMQQuery3
    {
        CONST_VTBL struct IMSMQQuery3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> LookupQueue_v2(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,ppqinfos) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
    ( (This)->lpVtbl -> LookupQueue(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,MulticastAddress,RelMulticastAddress,ppqinfos) )
EXTERN_C const IID IID_IMSMQQuery4;
    typedef struct IMSMQQuery4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQuery4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQuery4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQuery4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQuery4 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQuery4 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQuery4 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQuery4 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                          HRESULT ( STDMETHODCALLTYPE *LookupQueue_v2 )(
            __RPC__in IMSMQQuery4 * This,
                                 __RPC__in VARIANT *QueueGuid,
                                 __RPC__in VARIANT *ServiceTypeGuid,
                                 __RPC__in VARIANT *Label,
                                 __RPC__in VARIANT *CreateTime,
                                 __RPC__in VARIANT *ModifyTime,
                                 __RPC__in VARIANT *RelServiceType,
                                 __RPC__in VARIANT *RelLabel,
                                 __RPC__in VARIANT *RelCreateTime,
                                 __RPC__in VARIANT *RelModifyTime,
                                __RPC__deref_out_opt IMSMQQueueInfos4 **ppqinfos);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQQuery4 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
                                  HRESULT ( STDMETHODCALLTYPE *LookupQueue )(
            __RPC__in IMSMQQuery4 * This,
                                 __RPC__in VARIANT *QueueGuid,
                                 __RPC__in VARIANT *ServiceTypeGuid,
                                 __RPC__in VARIANT *Label,
                                 __RPC__in VARIANT *CreateTime,
                                 __RPC__in VARIANT *ModifyTime,
                                 __RPC__in VARIANT *RelServiceType,
                                 __RPC__in VARIANT *RelLabel,
                                 __RPC__in VARIANT *RelCreateTime,
                                 __RPC__in VARIANT *RelModifyTime,
                                 __RPC__in VARIANT *MulticastAddress,
                                 __RPC__in VARIANT *RelMulticastAddress,
                                __RPC__deref_out_opt IMSMQQueueInfos4 **ppqinfos);
        END_INTERFACE
    } IMSMQQuery4Vtbl;
    interface IMSMQQuery4
    {
        CONST_VTBL struct IMSMQQuery4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> LookupQueue_v2(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,ppqinfos) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
    ( (This)->lpVtbl -> LookupQueue(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,MulticastAddress,RelMulticastAddress,ppqinfos) )
EXTERN_C const CLSID CLSID_MSMQQuery;
class DECLSPEC_UUID("D7D6E073-DCCD-11d0-AA4B-0060970DEBAE")
MSMQQuery;
EXTERN_C const IID IID_IMSMQMessage2;
    typedef struct IMSMQMessage2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQMessage2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQMessage2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQMessage2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQMessage2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQMessage2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQMessage2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQMessage2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                       HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plClass);
                                               HRESULT ( STDMETHODCALLTYPE *get_PrivLevel )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plPrivLevel);
                                               HRESULT ( STDMETHODCALLTYPE *put_PrivLevel )(
            __RPC__in IMSMQMessage2 * This,
                       long lPrivLevel);
                                               HRESULT ( STDMETHODCALLTYPE *get_AuthLevel )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plAuthLevel);
                                               HRESULT ( STDMETHODCALLTYPE *put_AuthLevel )(
            __RPC__in IMSMQMessage2 * This,
                       long lAuthLevel);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsAuthenticated )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out Boolean *pisAuthenticated);
                                               HRESULT ( STDMETHODCALLTYPE *get_Delivery )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plDelivery);
                                               HRESULT ( STDMETHODCALLTYPE *put_Delivery )(
            __RPC__in IMSMQMessage2 * This,
                       long lDelivery);
                                               HRESULT ( STDMETHODCALLTYPE *get_Trace )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plTrace);
                                               HRESULT ( STDMETHODCALLTYPE *put_Trace )(
            __RPC__in IMSMQMessage2 * This,
                       long lTrace);
                                               HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plPriority);
                                               HRESULT ( STDMETHODCALLTYPE *put_Priority )(
            __RPC__in IMSMQMessage2 * This,
                       long lPriority);
                                               HRESULT ( STDMETHODCALLTYPE *get_Journal )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plJournal);
                                               HRESULT ( STDMETHODCALLTYPE *put_Journal )(
            __RPC__in IMSMQMessage2 * This,
                       long lJournal);
                                                       HRESULT ( STDMETHODCALLTYPE *get_ResponseQueueInfo_v1 )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo **ppqinfoResponse);
                                                          HRESULT ( STDMETHODCALLTYPE *putref_ResponseQueueInfo_v1 )(
            __RPC__in IMSMQMessage2 * This,
                       __RPC__in_opt IMSMQQueueInfo *pqinfoResponse);
                                               HRESULT ( STDMETHODCALLTYPE *get_AppSpecific )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plAppSpecific);
                                               HRESULT ( STDMETHODCALLTYPE *put_AppSpecific )(
            __RPC__in IMSMQMessage2 * This,
                       long lAppSpecific);
                                               HRESULT ( STDMETHODCALLTYPE *get_SourceMachineGuid )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrGuidSrcMachine);
                                               HRESULT ( STDMETHODCALLTYPE *get_BodyLength )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *pcbBody);
                                               HRESULT ( STDMETHODCALLTYPE *get_Body )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out VARIANT *pvarBody);
                                               HRESULT ( STDMETHODCALLTYPE *put_Body )(
            __RPC__in IMSMQMessage2 * This,
                       VARIANT varBody);
                                                       HRESULT ( STDMETHODCALLTYPE *get_AdminQueueInfo_v1 )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo **ppqinfoAdmin);
                                                          HRESULT ( STDMETHODCALLTYPE *putref_AdminQueueInfo_v1 )(
            __RPC__in IMSMQMessage2 * This,
                       __RPC__in_opt IMSMQQueueInfo *pqinfoAdmin);
                                               HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out VARIANT *pvarMsgId);
                                               HRESULT ( STDMETHODCALLTYPE *get_CorrelationId )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out VARIANT *pvarMsgId);
                                               HRESULT ( STDMETHODCALLTYPE *put_CorrelationId )(
            __RPC__in IMSMQMessage2 * This,
                       VARIANT varMsgId);
                                               HRESULT ( STDMETHODCALLTYPE *get_Ack )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plAck);
                                               HRESULT ( STDMETHODCALLTYPE *put_Ack )(
            __RPC__in IMSMQMessage2 * This,
                       long lAck);
                                               HRESULT ( STDMETHODCALLTYPE *get_Label )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrLabel);
                                               HRESULT ( STDMETHODCALLTYPE *put_Label )(
            __RPC__in IMSMQMessage2 * This,
                       __RPC__in BSTR bstrLabel);
                                               HRESULT ( STDMETHODCALLTYPE *get_MaxTimeToReachQueue )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plMaxTimeToReachQueue);
                                               HRESULT ( STDMETHODCALLTYPE *put_MaxTimeToReachQueue )(
            __RPC__in IMSMQMessage2 * This,
                       long lMaxTimeToReachQueue);
                                               HRESULT ( STDMETHODCALLTYPE *get_MaxTimeToReceive )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plMaxTimeToReceive);
                                               HRESULT ( STDMETHODCALLTYPE *put_MaxTimeToReceive )(
            __RPC__in IMSMQMessage2 * This,
                       long lMaxTimeToReceive);
                                               HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plHashAlg);
                                               HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IMSMQMessage2 * This,
                       long lHashAlg);
                                               HRESULT ( STDMETHODCALLTYPE *get_EncryptAlgorithm )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plEncryptAlg);
                                               HRESULT ( STDMETHODCALLTYPE *put_EncryptAlgorithm )(
            __RPC__in IMSMQMessage2 * This,
                       long lEncryptAlg);
                                               HRESULT ( STDMETHODCALLTYPE *get_SentTime )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out VARIANT *pvarSentTime);
                                               HRESULT ( STDMETHODCALLTYPE *get_ArrivedTime )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out VARIANT *plArrivedTime);
                                               HRESULT ( STDMETHODCALLTYPE *get_DestinationQueueInfo )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo2 **ppqinfoDest);
                                               HRESULT ( STDMETHODCALLTYPE *get_SenderCertificate )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out VARIANT *pvarSenderCert);
                                               HRESULT ( STDMETHODCALLTYPE *put_SenderCertificate )(
            __RPC__in IMSMQMessage2 * This,
                       VARIANT varSenderCert);
                                               HRESULT ( STDMETHODCALLTYPE *get_SenderId )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out VARIANT *pvarSenderId);
                                               HRESULT ( STDMETHODCALLTYPE *get_SenderIdType )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plSenderIdType);
                                               HRESULT ( STDMETHODCALLTYPE *put_SenderIdType )(
            __RPC__in IMSMQMessage2 * This,
                       long lSenderIdType);
                                  HRESULT ( STDMETHODCALLTYPE *Send )(
            __RPC__in IMSMQMessage2 * This,
                       __RPC__in_opt IMSMQQueue2 *DestinationQueue,
                                 __RPC__in VARIANT *Transaction);
                                  HRESULT ( STDMETHODCALLTYPE *AttachCurrentSecurityContext )(
            __RPC__in IMSMQMessage2 * This);
                                               HRESULT ( STDMETHODCALLTYPE *get_SenderVersion )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plSenderVersion);
                                               HRESULT ( STDMETHODCALLTYPE *get_Extension )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out VARIANT *pvarExtension);
                                               HRESULT ( STDMETHODCALLTYPE *put_Extension )(
            __RPC__in IMSMQMessage2 * This,
                       VARIANT varExtension);
                                               HRESULT ( STDMETHODCALLTYPE *get_ConnectorTypeGuid )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrGuidConnectorType);
                                               HRESULT ( STDMETHODCALLTYPE *put_ConnectorTypeGuid )(
            __RPC__in IMSMQMessage2 * This,
                       __RPC__in BSTR bstrGuidConnectorType);
                                               HRESULT ( STDMETHODCALLTYPE *get_TransactionStatusQueueInfo )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo2 **ppqinfoXactStatus);
                                               HRESULT ( STDMETHODCALLTYPE *get_DestinationSymmetricKey )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out VARIANT *pvarDestSymmKey);
                                               HRESULT ( STDMETHODCALLTYPE *put_DestinationSymmetricKey )(
            __RPC__in IMSMQMessage2 * This,
                       VARIANT varDestSymmKey);
                                               HRESULT ( STDMETHODCALLTYPE *get_Signature )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out VARIANT *pvarSignature);
                                               HRESULT ( STDMETHODCALLTYPE *put_Signature )(
            __RPC__in IMSMQMessage2 * This,
                       VARIANT varSignature);
                                               HRESULT ( STDMETHODCALLTYPE *get_AuthenticationProviderType )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plAuthProvType);
                                               HRESULT ( STDMETHODCALLTYPE *put_AuthenticationProviderType )(
            __RPC__in IMSMQMessage2 * This,
                       long lAuthProvType);
                                               HRESULT ( STDMETHODCALLTYPE *get_AuthenticationProviderName )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrAuthProvName);
                                               HRESULT ( STDMETHODCALLTYPE *put_AuthenticationProviderName )(
            __RPC__in IMSMQMessage2 * This,
                       __RPC__in BSTR bstrAuthProvName);
                                               HRESULT ( STDMETHODCALLTYPE *put_SenderId )(
            __RPC__in IMSMQMessage2 * This,
                       VARIANT varSenderId);
                                               HRESULT ( STDMETHODCALLTYPE *get_MsgClass )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out long *plMsgClass);
                                               HRESULT ( STDMETHODCALLTYPE *put_MsgClass )(
            __RPC__in IMSMQMessage2 * This,
                       long lMsgClass);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
                                               HRESULT ( STDMETHODCALLTYPE *get_TransactionId )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out VARIANT *pvarXactId);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsFirstInTransaction )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out Boolean *pisFirstInXact);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsLastInTransaction )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out Boolean *pisLastInXact);
                                               HRESULT ( STDMETHODCALLTYPE *get_ResponseQueueInfo )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo2 **ppqinfoResponse);
                                                  HRESULT ( STDMETHODCALLTYPE *putref_ResponseQueueInfo )(
            __RPC__in IMSMQMessage2 * This,
                       __RPC__in_opt IMSMQQueueInfo2 *pqinfoResponse);
                                               HRESULT ( STDMETHODCALLTYPE *get_AdminQueueInfo )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo2 **ppqinfoAdmin);
                                                  HRESULT ( STDMETHODCALLTYPE *putref_AdminQueueInfo )(
            __RPC__in IMSMQMessage2 * This,
                       __RPC__in_opt IMSMQQueueInfo2 *pqinfoAdmin);
                                               HRESULT ( STDMETHODCALLTYPE *get_ReceivedAuthenticationLevel )(
            __RPC__in IMSMQMessage2 * This,
                                __RPC__out short *psReceivedAuthenticationLevel);
        END_INTERFACE
    } IMSMQMessage2Vtbl;
    interface IMSMQMessage2
    {
        CONST_VTBL struct IMSMQMessage2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Class(This,plClass) )
    ( (This)->lpVtbl -> get_PrivLevel(This,plPrivLevel) )
    ( (This)->lpVtbl -> put_PrivLevel(This,lPrivLevel) )
    ( (This)->lpVtbl -> get_AuthLevel(This,plAuthLevel) )
    ( (This)->lpVtbl -> put_AuthLevel(This,lAuthLevel) )
    ( (This)->lpVtbl -> get_IsAuthenticated(This,pisAuthenticated) )
    ( (This)->lpVtbl -> get_Delivery(This,plDelivery) )
    ( (This)->lpVtbl -> put_Delivery(This,lDelivery) )
    ( (This)->lpVtbl -> get_Trace(This,plTrace) )
    ( (This)->lpVtbl -> put_Trace(This,lTrace) )
    ( (This)->lpVtbl -> get_Priority(This,plPriority) )
    ( (This)->lpVtbl -> put_Priority(This,lPriority) )
    ( (This)->lpVtbl -> get_Journal(This,plJournal) )
    ( (This)->lpVtbl -> put_Journal(This,lJournal) )
    ( (This)->lpVtbl -> get_ResponseQueueInfo_v1(This,ppqinfoResponse) )
    ( (This)->lpVtbl -> putref_ResponseQueueInfo_v1(This,pqinfoResponse) )
    ( (This)->lpVtbl -> get_AppSpecific(This,plAppSpecific) )
    ( (This)->lpVtbl -> put_AppSpecific(This,lAppSpecific) )
    ( (This)->lpVtbl -> get_SourceMachineGuid(This,pbstrGuidSrcMachine) )
    ( (This)->lpVtbl -> get_BodyLength(This,pcbBody) )
    ( (This)->lpVtbl -> get_Body(This,pvarBody) )
    ( (This)->lpVtbl -> put_Body(This,varBody) )
    ( (This)->lpVtbl -> get_AdminQueueInfo_v1(This,ppqinfoAdmin) )
    ( (This)->lpVtbl -> putref_AdminQueueInfo_v1(This,pqinfoAdmin) )
    ( (This)->lpVtbl -> get_Id(This,pvarMsgId) )
    ( (This)->lpVtbl -> get_CorrelationId(This,pvarMsgId) )
    ( (This)->lpVtbl -> put_CorrelationId(This,varMsgId) )
    ( (This)->lpVtbl -> get_Ack(This,plAck) )
    ( (This)->lpVtbl -> put_Ack(This,lAck) )
    ( (This)->lpVtbl -> get_Label(This,pbstrLabel) )
    ( (This)->lpVtbl -> put_Label(This,bstrLabel) )
    ( (This)->lpVtbl -> get_MaxTimeToReachQueue(This,plMaxTimeToReachQueue) )
    ( (This)->lpVtbl -> put_MaxTimeToReachQueue(This,lMaxTimeToReachQueue) )
    ( (This)->lpVtbl -> get_MaxTimeToReceive(This,plMaxTimeToReceive) )
    ( (This)->lpVtbl -> put_MaxTimeToReceive(This,lMaxTimeToReceive) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,plHashAlg) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,lHashAlg) )
    ( (This)->lpVtbl -> get_EncryptAlgorithm(This,plEncryptAlg) )
    ( (This)->lpVtbl -> put_EncryptAlgorithm(This,lEncryptAlg) )
    ( (This)->lpVtbl -> get_SentTime(This,pvarSentTime) )
    ( (This)->lpVtbl -> get_ArrivedTime(This,plArrivedTime) )
    ( (This)->lpVtbl -> get_DestinationQueueInfo(This,ppqinfoDest) )
    ( (This)->lpVtbl -> get_SenderCertificate(This,pvarSenderCert) )
    ( (This)->lpVtbl -> put_SenderCertificate(This,varSenderCert) )
    ( (This)->lpVtbl -> get_SenderId(This,pvarSenderId) )
    ( (This)->lpVtbl -> get_SenderIdType(This,plSenderIdType) )
    ( (This)->lpVtbl -> put_SenderIdType(This,lSenderIdType) )
    ( (This)->lpVtbl -> Send(This,DestinationQueue,Transaction) )
    ( (This)->lpVtbl -> AttachCurrentSecurityContext(This) )
    ( (This)->lpVtbl -> get_SenderVersion(This,plSenderVersion) )
    ( (This)->lpVtbl -> get_Extension(This,pvarExtension) )
    ( (This)->lpVtbl -> put_Extension(This,varExtension) )
    ( (This)->lpVtbl -> get_ConnectorTypeGuid(This,pbstrGuidConnectorType) )
    ( (This)->lpVtbl -> put_ConnectorTypeGuid(This,bstrGuidConnectorType) )
    ( (This)->lpVtbl -> get_TransactionStatusQueueInfo(This,ppqinfoXactStatus) )
    ( (This)->lpVtbl -> get_DestinationSymmetricKey(This,pvarDestSymmKey) )
    ( (This)->lpVtbl -> put_DestinationSymmetricKey(This,varDestSymmKey) )
    ( (This)->lpVtbl -> get_Signature(This,pvarSignature) )
    ( (This)->lpVtbl -> put_Signature(This,varSignature) )
    ( (This)->lpVtbl -> get_AuthenticationProviderType(This,plAuthProvType) )
    ( (This)->lpVtbl -> put_AuthenticationProviderType(This,lAuthProvType) )
    ( (This)->lpVtbl -> get_AuthenticationProviderName(This,pbstrAuthProvName) )
    ( (This)->lpVtbl -> put_AuthenticationProviderName(This,bstrAuthProvName) )
    ( (This)->lpVtbl -> put_SenderId(This,varSenderId) )
    ( (This)->lpVtbl -> get_MsgClass(This,plMsgClass) )
    ( (This)->lpVtbl -> put_MsgClass(This,lMsgClass) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
    ( (This)->lpVtbl -> get_TransactionId(This,pvarXactId) )
    ( (This)->lpVtbl -> get_IsFirstInTransaction(This,pisFirstInXact) )
    ( (This)->lpVtbl -> get_IsLastInTransaction(This,pisLastInXact) )
    ( (This)->lpVtbl -> get_ResponseQueueInfo(This,ppqinfoResponse) )
    ( (This)->lpVtbl -> putref_ResponseQueueInfo(This,pqinfoResponse) )
    ( (This)->lpVtbl -> get_AdminQueueInfo(This,ppqinfoAdmin) )
    ( (This)->lpVtbl -> putref_AdminQueueInfo(This,pqinfoAdmin) )
    ( (This)->lpVtbl -> get_ReceivedAuthenticationLevel(This,psReceivedAuthenticationLevel) )
EXTERN_C const IID IID_IMSMQMessage3;
    typedef struct IMSMQMessage3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQMessage3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQMessage3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQMessage3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQMessage3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQMessage3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQMessage3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQMessage3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                       HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plClass);
                                               HRESULT ( STDMETHODCALLTYPE *get_PrivLevel )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plPrivLevel);
                                               HRESULT ( STDMETHODCALLTYPE *put_PrivLevel )(
            __RPC__in IMSMQMessage3 * This,
                       long lPrivLevel);
                                               HRESULT ( STDMETHODCALLTYPE *get_AuthLevel )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plAuthLevel);
                                               HRESULT ( STDMETHODCALLTYPE *put_AuthLevel )(
            __RPC__in IMSMQMessage3 * This,
                       long lAuthLevel);
                                                       HRESULT ( STDMETHODCALLTYPE *get_IsAuthenticated )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out Boolean *pisAuthenticated);
                                               HRESULT ( STDMETHODCALLTYPE *get_Delivery )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plDelivery);
                                               HRESULT ( STDMETHODCALLTYPE *put_Delivery )(
            __RPC__in IMSMQMessage3 * This,
                       long lDelivery);
                                               HRESULT ( STDMETHODCALLTYPE *get_Trace )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plTrace);
                                               HRESULT ( STDMETHODCALLTYPE *put_Trace )(
            __RPC__in IMSMQMessage3 * This,
                       long lTrace);
                                               HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plPriority);
                                               HRESULT ( STDMETHODCALLTYPE *put_Priority )(
            __RPC__in IMSMQMessage3 * This,
                       long lPriority);
                                               HRESULT ( STDMETHODCALLTYPE *get_Journal )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plJournal);
                                               HRESULT ( STDMETHODCALLTYPE *put_Journal )(
            __RPC__in IMSMQMessage3 * This,
                       long lJournal);
                                                       HRESULT ( STDMETHODCALLTYPE *get_ResponseQueueInfo_v1 )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo **ppqinfoResponse);
                                                          HRESULT ( STDMETHODCALLTYPE *putref_ResponseQueueInfo_v1 )(
            __RPC__in IMSMQMessage3 * This,
                       __RPC__in_opt IMSMQQueueInfo *pqinfoResponse);
                                               HRESULT ( STDMETHODCALLTYPE *get_AppSpecific )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plAppSpecific);
                                               HRESULT ( STDMETHODCALLTYPE *put_AppSpecific )(
            __RPC__in IMSMQMessage3 * This,
                       long lAppSpecific);
                                               HRESULT ( STDMETHODCALLTYPE *get_SourceMachineGuid )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__deref_out_opt BSTR *pbstrGuidSrcMachine);
                                               HRESULT ( STDMETHODCALLTYPE *get_BodyLength )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *pcbBody);
                                               HRESULT ( STDMETHODCALLTYPE *get_Body )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out VARIANT *pvarBody);
                                               HRESULT ( STDMETHODCALLTYPE *put_Body )(
            __RPC__in IMSMQMessage3 * This,
                       VARIANT varBody);
                                                       HRESULT ( STDMETHODCALLTYPE *get_AdminQueueInfo_v1 )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo **ppqinfoAdmin);
                                                          HRESULT ( STDMETHODCALLTYPE *putref_AdminQueueInfo_v1 )(
            __RPC__in IMSMQMessage3 * This,
                       __RPC__in_opt IMSMQQueueInfo *pqinfoAdmin);
                                               HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out VARIANT *pvarMsgId);
                                               HRESULT ( STDMETHODCALLTYPE *get_CorrelationId )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out VARIANT *pvarMsgId);
                                               HRESULT ( STDMETHODCALLTYPE *put_CorrelationId )(
            __RPC__in IMSMQMessage3 * This,
                       VARIANT varMsgId);
                                               HRESULT ( STDMETHODCALLTYPE *get_Ack )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plAck);
                                               HRESULT ( STDMETHODCALLTYPE *put_Ack )(
            __RPC__in IMSMQMessage3 * This,
                       long lAck);
                                               HRESULT ( STDMETHODCALLTYPE *get_Label )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__deref_out_opt BSTR *pbstrLabel);
                                               HRESULT ( STDMETHODCALLTYPE *put_Label )(
            __RPC__in IMSMQMessage3 * This,
                       __RPC__in BSTR bstrLabel);
                                               HRESULT ( STDMETHODCALLTYPE *get_MaxTimeToReachQueue )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plMaxTimeToReachQueue);
                                               HRESULT ( STDMETHODCALLTYPE *put_MaxTimeToReachQueue )(
            __RPC__in IMSMQMessage3 * This,
                       long lMaxTimeToReachQueue);
                                               HRESULT ( STDMETHODCALLTYPE *get_MaxTimeToReceive )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plMaxTimeToReceive);
                                               HRESULT ( STDMETHODCALLTYPE *put_MaxTimeToReceive )(
            __RPC__in IMSMQMessage3 * This,
                       long lMaxTimeToReceive);
                                               HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plHashAlg);
                                               HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IMSMQMessage3 * This,
                       long lHashAlg);
                                               HRESULT ( STDMETHODCALLTYPE *get_EncryptAlgorithm )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plEncryptAlg);
                                               HRESULT ( STDMETHODCALLTYPE *put_EncryptAlgorithm )(
            __RPC__in IMSMQMessage3 * This,
                       long lEncryptAlg);
                                               HRESULT ( STDMETHODCALLTYPE *get_SentTime )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out VARIANT *pvarSentTime);
                                               HRESULT ( STDMETHODCALLTYPE *get_ArrivedTime )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out VARIANT *plArrivedTime);
                                               HRESULT ( STDMETHODCALLTYPE *get_DestinationQueueInfo )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo3 **ppqinfoDest);
                                               HRESULT ( STDMETHODCALLTYPE *get_SenderCertificate )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out VARIANT *pvarSenderCert);
                                               HRESULT ( STDMETHODCALLTYPE *put_SenderCertificate )(
            __RPC__in IMSMQMessage3 * This,
                       VARIANT varSenderCert);
                                               HRESULT ( STDMETHODCALLTYPE *get_SenderId )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out VARIANT *pvarSenderId);
                                               HRESULT ( STDMETHODCALLTYPE *get_SenderIdType )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plSenderIdType);
                                               HRESULT ( STDMETHODCALLTYPE *put_SenderIdType )(
            __RPC__in IMSMQMessage3 * This,
                       long lSenderIdType);
                                  HRESULT ( STDMETHODCALLTYPE *Send )(
            __RPC__in IMSMQMessage3 * This,
                       __RPC__in_opt IDispatch *DestinationQueue,
                                 __RPC__in VARIANT *Transaction);
                                          HRESULT ( STDMETHODCALLTYPE *AttachCurrentSecurityContext )(
            __RPC__in IMSMQMessage3 * This);
                                               HRESULT ( STDMETHODCALLTYPE *get_SenderVersion )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plSenderVersion);
                                               HRESULT ( STDMETHODCALLTYPE *get_Extension )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out VARIANT *pvarExtension);
                                               HRESULT ( STDMETHODCALLTYPE *put_Extension )(
            __RPC__in IMSMQMessage3 * This,
                       VARIANT varExtension);
                                               HRESULT ( STDMETHODCALLTYPE *get_ConnectorTypeGuid )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__deref_out_opt BSTR *pbstrGuidConnectorType);
                                               HRESULT ( STDMETHODCALLTYPE *put_ConnectorTypeGuid )(
            __RPC__in IMSMQMessage3 * This,
                       __RPC__in BSTR bstrGuidConnectorType);
                                               HRESULT ( STDMETHODCALLTYPE *get_TransactionStatusQueueInfo )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo3 **ppqinfoXactStatus);
                                               HRESULT ( STDMETHODCALLTYPE *get_DestinationSymmetricKey )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out VARIANT *pvarDestSymmKey);
                                               HRESULT ( STDMETHODCALLTYPE *put_DestinationSymmetricKey )(
            __RPC__in IMSMQMessage3 * This,
                       VARIANT varDestSymmKey);
                                               HRESULT ( STDMETHODCALLTYPE *get_Signature )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out VARIANT *pvarSignature);
                                               HRESULT ( STDMETHODCALLTYPE *put_Signature )(
            __RPC__in IMSMQMessage3 * This,
                       VARIANT varSignature);
                                               HRESULT ( STDMETHODCALLTYPE *get_AuthenticationProviderType )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plAuthProvType);
                                               HRESULT ( STDMETHODCALLTYPE *put_AuthenticationProviderType )(
            __RPC__in IMSMQMessage3 * This,
                       long lAuthProvType);
                                               HRESULT ( STDMETHODCALLTYPE *get_AuthenticationProviderName )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__deref_out_opt BSTR *pbstrAuthProvName);
                                               HRESULT ( STDMETHODCALLTYPE *put_AuthenticationProviderName )(
            __RPC__in IMSMQMessage3 * This,
                       __RPC__in BSTR bstrAuthProvName);
                                               HRESULT ( STDMETHODCALLTYPE *put_SenderId )(
            __RPC__in IMSMQMessage3 * This,
                       VARIANT varSenderId);
                                               HRESULT ( STDMETHODCALLTYPE *get_MsgClass )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out long *plMsgClass);
                                               HRESULT ( STDMETHODCALLTYPE *put_MsgClass )(
            __RPC__in IMSMQMessage3 * This,
                       long lMsgClass);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
                                               HRESULT ( STDMETHODCALLTYPE *get_TransactionId )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out VARIANT *pvarXactId);
                                                       HRESULT ( STDMETHODCALLTYPE *get_IsFirstInTransaction )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out Boolean *pisFirstInXact);
                                                       HRESULT ( STDMETHODCALLTYPE *get_IsLastInTransaction )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out Boolean *pisLastInXact);
                                                       HRESULT ( STDMETHODCALLTYPE *get_ResponseQueueInfo_v2 )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo2 **ppqinfoResponse);
                                                          HRESULT ( STDMETHODCALLTYPE *putref_ResponseQueueInfo_v2 )(
            __RPC__in IMSMQMessage3 * This,
                       __RPC__in_opt IMSMQQueueInfo2 *pqinfoResponse);
                                                       HRESULT ( STDMETHODCALLTYPE *get_AdminQueueInfo_v2 )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo2 **ppqinfoAdmin);
                                                          HRESULT ( STDMETHODCALLTYPE *putref_AdminQueueInfo_v2 )(
            __RPC__in IMSMQMessage3 * This,
                       __RPC__in_opt IMSMQQueueInfo2 *pqinfoAdmin);
                                               HRESULT ( STDMETHODCALLTYPE *get_ReceivedAuthenticationLevel )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out short *psReceivedAuthenticationLevel);
                                               HRESULT ( STDMETHODCALLTYPE *get_ResponseQueueInfo )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo3 **ppqinfoResponse);
                                                  HRESULT ( STDMETHODCALLTYPE *putref_ResponseQueueInfo )(
            __RPC__in IMSMQMessage3 * This,
                       __RPC__in_opt IMSMQQueueInfo3 *pqinfoResponse);
                                               HRESULT ( STDMETHODCALLTYPE *get_AdminQueueInfo )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo3 **ppqinfoAdmin);
                                                  HRESULT ( STDMETHODCALLTYPE *putref_AdminQueueInfo )(
            __RPC__in IMSMQMessage3 * This,
                       __RPC__in_opt IMSMQQueueInfo3 *pqinfoAdmin);
                                               HRESULT ( STDMETHODCALLTYPE *get_ResponseDestination )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__deref_out_opt IDispatch **ppdestResponse);
                                                  HRESULT ( STDMETHODCALLTYPE *putref_ResponseDestination )(
            __RPC__in IMSMQMessage3 * This,
                       __RPC__in_opt IDispatch *pdestResponse);
                                               HRESULT ( STDMETHODCALLTYPE *get_Destination )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__deref_out_opt IDispatch **ppdestDestination);
                                               HRESULT ( STDMETHODCALLTYPE *get_LookupId )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out VARIANT *pvarLookupId);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsAuthenticated2 )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out VARIANT_BOOL *pisAuthenticated);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsFirstInTransaction2 )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out VARIANT_BOOL *pisFirstInXact);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsLastInTransaction2 )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out VARIANT_BOOL *pisLastInXact);
                                  HRESULT ( STDMETHODCALLTYPE *AttachCurrentSecurityContext2 )(
            __RPC__in IMSMQMessage3 * This);
                                               HRESULT ( STDMETHODCALLTYPE *get_SoapEnvelope )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__deref_out_opt BSTR *pbstrSoapEnvelope);
                                               HRESULT ( STDMETHODCALLTYPE *get_CompoundMessage )(
            __RPC__in IMSMQMessage3 * This,
                                __RPC__out VARIANT *pvarCompoundMessage);
                                               HRESULT ( STDMETHODCALLTYPE *put_SoapHeader )(
            __RPC__in IMSMQMessage3 * This,
                       __RPC__in BSTR bstrSoapHeader);
                                               HRESULT ( STDMETHODCALLTYPE *put_SoapBody )(
            __RPC__in IMSMQMessage3 * This,
                       __RPC__in BSTR bstrSoapBody);
        END_INTERFACE
    } IMSMQMessage3Vtbl;
    interface IMSMQMessage3
    {
        CONST_VTBL struct IMSMQMessage3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Class(This,plClass) )
    ( (This)->lpVtbl -> get_PrivLevel(This,plPrivLevel) )
    ( (This)->lpVtbl -> put_PrivLevel(This,lPrivLevel) )
    ( (This)->lpVtbl -> get_AuthLevel(This,plAuthLevel) )
    ( (This)->lpVtbl -> put_AuthLevel(This,lAuthLevel) )
    ( (This)->lpVtbl -> get_IsAuthenticated(This,pisAuthenticated) )
    ( (This)->lpVtbl -> get_Delivery(This,plDelivery) )
    ( (This)->lpVtbl -> put_Delivery(This,lDelivery) )
    ( (This)->lpVtbl -> get_Trace(This,plTrace) )
    ( (This)->lpVtbl -> put_Trace(This,lTrace) )
    ( (This)->lpVtbl -> get_Priority(This,plPriority) )
    ( (This)->lpVtbl -> put_Priority(This,lPriority) )
    ( (This)->lpVtbl -> get_Journal(This,plJournal) )
    ( (This)->lpVtbl -> put_Journal(This,lJournal) )
    ( (This)->lpVtbl -> get_ResponseQueueInfo_v1(This,ppqinfoResponse) )
    ( (This)->lpVtbl -> putref_ResponseQueueInfo_v1(This,pqinfoResponse) )
    ( (This)->lpVtbl -> get_AppSpecific(This,plAppSpecific) )
    ( (This)->lpVtbl -> put_AppSpecific(This,lAppSpecific) )
    ( (This)->lpVtbl -> get_SourceMachineGuid(This,pbstrGuidSrcMachine) )
    ( (This)->lpVtbl -> get_BodyLength(This,pcbBody) )
    ( (This)->lpVtbl -> get_Body(This,pvarBody) )
    ( (This)->lpVtbl -> put_Body(This,varBody) )
    ( (This)->lpVtbl -> get_AdminQueueInfo_v1(This,ppqinfoAdmin) )
    ( (This)->lpVtbl -> putref_AdminQueueInfo_v1(This,pqinfoAdmin) )
    ( (This)->lpVtbl -> get_Id(This,pvarMsgId) )
    ( (This)->lpVtbl -> get_CorrelationId(This,pvarMsgId) )
    ( (This)->lpVtbl -> put_CorrelationId(This,varMsgId) )
    ( (This)->lpVtbl -> get_Ack(This,plAck) )
    ( (This)->lpVtbl -> put_Ack(This,lAck) )
    ( (This)->lpVtbl -> get_Label(This,pbstrLabel) )
    ( (This)->lpVtbl -> put_Label(This,bstrLabel) )
    ( (This)->lpVtbl -> get_MaxTimeToReachQueue(This,plMaxTimeToReachQueue) )
    ( (This)->lpVtbl -> put_MaxTimeToReachQueue(This,lMaxTimeToReachQueue) )
    ( (This)->lpVtbl -> get_MaxTimeToReceive(This,plMaxTimeToReceive) )
    ( (This)->lpVtbl -> put_MaxTimeToReceive(This,lMaxTimeToReceive) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,plHashAlg) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,lHashAlg) )
    ( (This)->lpVtbl -> get_EncryptAlgorithm(This,plEncryptAlg) )
    ( (This)->lpVtbl -> put_EncryptAlgorithm(This,lEncryptAlg) )
    ( (This)->lpVtbl -> get_SentTime(This,pvarSentTime) )
    ( (This)->lpVtbl -> get_ArrivedTime(This,plArrivedTime) )
    ( (This)->lpVtbl -> get_DestinationQueueInfo(This,ppqinfoDest) )
    ( (This)->lpVtbl -> get_SenderCertificate(This,pvarSenderCert) )
    ( (This)->lpVtbl -> put_SenderCertificate(This,varSenderCert) )
    ( (This)->lpVtbl -> get_SenderId(This,pvarSenderId) )
    ( (This)->lpVtbl -> get_SenderIdType(This,plSenderIdType) )
    ( (This)->lpVtbl -> put_SenderIdType(This,lSenderIdType) )
    ( (This)->lpVtbl -> Send(This,DestinationQueue,Transaction) )
    ( (This)->lpVtbl -> AttachCurrentSecurityContext(This) )
    ( (This)->lpVtbl -> get_SenderVersion(This,plSenderVersion) )
    ( (This)->lpVtbl -> get_Extension(This,pvarExtension) )
    ( (This)->lpVtbl -> put_Extension(This,varExtension) )
    ( (This)->lpVtbl -> get_ConnectorTypeGuid(This,pbstrGuidConnectorType) )
    ( (This)->lpVtbl -> put_ConnectorTypeGuid(This,bstrGuidConnectorType) )
    ( (This)->lpVtbl -> get_TransactionStatusQueueInfo(This,ppqinfoXactStatus) )
    ( (This)->lpVtbl -> get_DestinationSymmetricKey(This,pvarDestSymmKey) )
    ( (This)->lpVtbl -> put_DestinationSymmetricKey(This,varDestSymmKey) )
    ( (This)->lpVtbl -> get_Signature(This,pvarSignature) )
    ( (This)->lpVtbl -> put_Signature(This,varSignature) )
    ( (This)->lpVtbl -> get_AuthenticationProviderType(This,plAuthProvType) )
    ( (This)->lpVtbl -> put_AuthenticationProviderType(This,lAuthProvType) )
    ( (This)->lpVtbl -> get_AuthenticationProviderName(This,pbstrAuthProvName) )
    ( (This)->lpVtbl -> put_AuthenticationProviderName(This,bstrAuthProvName) )
    ( (This)->lpVtbl -> put_SenderId(This,varSenderId) )
    ( (This)->lpVtbl -> get_MsgClass(This,plMsgClass) )
    ( (This)->lpVtbl -> put_MsgClass(This,lMsgClass) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
    ( (This)->lpVtbl -> get_TransactionId(This,pvarXactId) )
    ( (This)->lpVtbl -> get_IsFirstInTransaction(This,pisFirstInXact) )
    ( (This)->lpVtbl -> get_IsLastInTransaction(This,pisLastInXact) )
    ( (This)->lpVtbl -> get_ResponseQueueInfo_v2(This,ppqinfoResponse) )
    ( (This)->lpVtbl -> putref_ResponseQueueInfo_v2(This,pqinfoResponse) )
    ( (This)->lpVtbl -> get_AdminQueueInfo_v2(This,ppqinfoAdmin) )
    ( (This)->lpVtbl -> putref_AdminQueueInfo_v2(This,pqinfoAdmin) )
    ( (This)->lpVtbl -> get_ReceivedAuthenticationLevel(This,psReceivedAuthenticationLevel) )
    ( (This)->lpVtbl -> get_ResponseQueueInfo(This,ppqinfoResponse) )
    ( (This)->lpVtbl -> putref_ResponseQueueInfo(This,pqinfoResponse) )
    ( (This)->lpVtbl -> get_AdminQueueInfo(This,ppqinfoAdmin) )
    ( (This)->lpVtbl -> putref_AdminQueueInfo(This,pqinfoAdmin) )
    ( (This)->lpVtbl -> get_ResponseDestination(This,ppdestResponse) )
    ( (This)->lpVtbl -> putref_ResponseDestination(This,pdestResponse) )
    ( (This)->lpVtbl -> get_Destination(This,ppdestDestination) )
    ( (This)->lpVtbl -> get_LookupId(This,pvarLookupId) )
    ( (This)->lpVtbl -> get_IsAuthenticated2(This,pisAuthenticated) )
    ( (This)->lpVtbl -> get_IsFirstInTransaction2(This,pisFirstInXact) )
    ( (This)->lpVtbl -> get_IsLastInTransaction2(This,pisLastInXact) )
    ( (This)->lpVtbl -> AttachCurrentSecurityContext2(This) )
    ( (This)->lpVtbl -> get_SoapEnvelope(This,pbstrSoapEnvelope) )
    ( (This)->lpVtbl -> get_CompoundMessage(This,pvarCompoundMessage) )
    ( (This)->lpVtbl -> put_SoapHeader(This,bstrSoapHeader) )
    ( (This)->lpVtbl -> put_SoapBody(This,bstrSoapBody) )
EXTERN_C const IID IID_IMSMQMessage4;
    typedef struct IMSMQMessage4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQMessage4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQMessage4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQMessage4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQMessage4 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQMessage4 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQMessage4 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQMessage4 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                       HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plClass);
                                               HRESULT ( STDMETHODCALLTYPE *get_PrivLevel )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plPrivLevel);
                                               HRESULT ( STDMETHODCALLTYPE *put_PrivLevel )(
            __RPC__in IMSMQMessage4 * This,
                       long lPrivLevel);
                                               HRESULT ( STDMETHODCALLTYPE *get_AuthLevel )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plAuthLevel);
                                               HRESULT ( STDMETHODCALLTYPE *put_AuthLevel )(
            __RPC__in IMSMQMessage4 * This,
                       long lAuthLevel);
                                                       HRESULT ( STDMETHODCALLTYPE *get_IsAuthenticated )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out Boolean *pisAuthenticated);
                                               HRESULT ( STDMETHODCALLTYPE *get_Delivery )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plDelivery);
                                               HRESULT ( STDMETHODCALLTYPE *put_Delivery )(
            __RPC__in IMSMQMessage4 * This,
                       long lDelivery);
                                               HRESULT ( STDMETHODCALLTYPE *get_Trace )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plTrace);
                                               HRESULT ( STDMETHODCALLTYPE *put_Trace )(
            __RPC__in IMSMQMessage4 * This,
                       long lTrace);
                                               HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plPriority);
                                               HRESULT ( STDMETHODCALLTYPE *put_Priority )(
            __RPC__in IMSMQMessage4 * This,
                       long lPriority);
                                               HRESULT ( STDMETHODCALLTYPE *get_Journal )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plJournal);
                                               HRESULT ( STDMETHODCALLTYPE *put_Journal )(
            __RPC__in IMSMQMessage4 * This,
                       long lJournal);
                                                       HRESULT ( STDMETHODCALLTYPE *get_ResponseQueueInfo_v1 )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo **ppqinfoResponse);
                                                          HRESULT ( STDMETHODCALLTYPE *putref_ResponseQueueInfo_v1 )(
            __RPC__in IMSMQMessage4 * This,
                       __RPC__in_opt IMSMQQueueInfo *pqinfoResponse);
                                               HRESULT ( STDMETHODCALLTYPE *get_AppSpecific )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plAppSpecific);
                                               HRESULT ( STDMETHODCALLTYPE *put_AppSpecific )(
            __RPC__in IMSMQMessage4 * This,
                       long lAppSpecific);
                                               HRESULT ( STDMETHODCALLTYPE *get_SourceMachineGuid )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__deref_out_opt BSTR *pbstrGuidSrcMachine);
                                               HRESULT ( STDMETHODCALLTYPE *get_BodyLength )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *pcbBody);
                                               HRESULT ( STDMETHODCALLTYPE *get_Body )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out VARIANT *pvarBody);
                                               HRESULT ( STDMETHODCALLTYPE *put_Body )(
            __RPC__in IMSMQMessage4 * This,
                       VARIANT varBody);
                                                       HRESULT ( STDMETHODCALLTYPE *get_AdminQueueInfo_v1 )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo **ppqinfoAdmin);
                                                          HRESULT ( STDMETHODCALLTYPE *putref_AdminQueueInfo_v1 )(
            __RPC__in IMSMQMessage4 * This,
                       __RPC__in_opt IMSMQQueueInfo *pqinfoAdmin);
                                               HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out VARIANT *pvarMsgId);
                                               HRESULT ( STDMETHODCALLTYPE *get_CorrelationId )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out VARIANT *pvarMsgId);
                                               HRESULT ( STDMETHODCALLTYPE *put_CorrelationId )(
            __RPC__in IMSMQMessage4 * This,
                       VARIANT varMsgId);
                                               HRESULT ( STDMETHODCALLTYPE *get_Ack )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plAck);
                                               HRESULT ( STDMETHODCALLTYPE *put_Ack )(
            __RPC__in IMSMQMessage4 * This,
                       long lAck);
                                               HRESULT ( STDMETHODCALLTYPE *get_Label )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__deref_out_opt BSTR *pbstrLabel);
                                               HRESULT ( STDMETHODCALLTYPE *put_Label )(
            __RPC__in IMSMQMessage4 * This,
                       __RPC__in BSTR bstrLabel);
                                               HRESULT ( STDMETHODCALLTYPE *get_MaxTimeToReachQueue )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plMaxTimeToReachQueue);
                                               HRESULT ( STDMETHODCALLTYPE *put_MaxTimeToReachQueue )(
            __RPC__in IMSMQMessage4 * This,
                       long lMaxTimeToReachQueue);
                                               HRESULT ( STDMETHODCALLTYPE *get_MaxTimeToReceive )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plMaxTimeToReceive);
                                               HRESULT ( STDMETHODCALLTYPE *put_MaxTimeToReceive )(
            __RPC__in IMSMQMessage4 * This,
                       long lMaxTimeToReceive);
                                               HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plHashAlg);
                                               HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IMSMQMessage4 * This,
                       long lHashAlg);
                                               HRESULT ( STDMETHODCALLTYPE *get_EncryptAlgorithm )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plEncryptAlg);
                                               HRESULT ( STDMETHODCALLTYPE *put_EncryptAlgorithm )(
            __RPC__in IMSMQMessage4 * This,
                       long lEncryptAlg);
                                               HRESULT ( STDMETHODCALLTYPE *get_SentTime )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out VARIANT *pvarSentTime);
                                               HRESULT ( STDMETHODCALLTYPE *get_ArrivedTime )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out VARIANT *plArrivedTime);
                                               HRESULT ( STDMETHODCALLTYPE *get_DestinationQueueInfo )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo4 **ppqinfoDest);
                                               HRESULT ( STDMETHODCALLTYPE *get_SenderCertificate )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out VARIANT *pvarSenderCert);
                                               HRESULT ( STDMETHODCALLTYPE *put_SenderCertificate )(
            __RPC__in IMSMQMessage4 * This,
                       VARIANT varSenderCert);
                                               HRESULT ( STDMETHODCALLTYPE *get_SenderId )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out VARIANT *pvarSenderId);
                                               HRESULT ( STDMETHODCALLTYPE *get_SenderIdType )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plSenderIdType);
                                               HRESULT ( STDMETHODCALLTYPE *put_SenderIdType )(
            __RPC__in IMSMQMessage4 * This,
                       long lSenderIdType);
                                  HRESULT ( STDMETHODCALLTYPE *Send )(
            __RPC__in IMSMQMessage4 * This,
                       __RPC__in_opt IDispatch *DestinationQueue,
                                 __RPC__in VARIANT *Transaction);
                                          HRESULT ( STDMETHODCALLTYPE *AttachCurrentSecurityContext )(
            __RPC__in IMSMQMessage4 * This);
                                               HRESULT ( STDMETHODCALLTYPE *get_SenderVersion )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plSenderVersion);
                                               HRESULT ( STDMETHODCALLTYPE *get_Extension )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out VARIANT *pvarExtension);
                                               HRESULT ( STDMETHODCALLTYPE *put_Extension )(
            __RPC__in IMSMQMessage4 * This,
                       VARIANT varExtension);
                                               HRESULT ( STDMETHODCALLTYPE *get_ConnectorTypeGuid )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__deref_out_opt BSTR *pbstrGuidConnectorType);
                                               HRESULT ( STDMETHODCALLTYPE *put_ConnectorTypeGuid )(
            __RPC__in IMSMQMessage4 * This,
                       __RPC__in BSTR bstrGuidConnectorType);
                                               HRESULT ( STDMETHODCALLTYPE *get_TransactionStatusQueueInfo )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo4 **ppqinfoXactStatus);
                                               HRESULT ( STDMETHODCALLTYPE *get_DestinationSymmetricKey )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out VARIANT *pvarDestSymmKey);
                                               HRESULT ( STDMETHODCALLTYPE *put_DestinationSymmetricKey )(
            __RPC__in IMSMQMessage4 * This,
                       VARIANT varDestSymmKey);
                                               HRESULT ( STDMETHODCALLTYPE *get_Signature )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out VARIANT *pvarSignature);
                                               HRESULT ( STDMETHODCALLTYPE *put_Signature )(
            __RPC__in IMSMQMessage4 * This,
                       VARIANT varSignature);
                                               HRESULT ( STDMETHODCALLTYPE *get_AuthenticationProviderType )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plAuthProvType);
                                               HRESULT ( STDMETHODCALLTYPE *put_AuthenticationProviderType )(
            __RPC__in IMSMQMessage4 * This,
                       long lAuthProvType);
                                               HRESULT ( STDMETHODCALLTYPE *get_AuthenticationProviderName )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__deref_out_opt BSTR *pbstrAuthProvName);
                                               HRESULT ( STDMETHODCALLTYPE *put_AuthenticationProviderName )(
            __RPC__in IMSMQMessage4 * This,
                       __RPC__in BSTR bstrAuthProvName);
                                               HRESULT ( STDMETHODCALLTYPE *put_SenderId )(
            __RPC__in IMSMQMessage4 * This,
                       VARIANT varSenderId);
                                               HRESULT ( STDMETHODCALLTYPE *get_MsgClass )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out long *plMsgClass);
                                               HRESULT ( STDMETHODCALLTYPE *put_MsgClass )(
            __RPC__in IMSMQMessage4 * This,
                       long lMsgClass);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
                                               HRESULT ( STDMETHODCALLTYPE *get_TransactionId )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out VARIANT *pvarXactId);
                                                       HRESULT ( STDMETHODCALLTYPE *get_IsFirstInTransaction )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out Boolean *pisFirstInXact);
                                                       HRESULT ( STDMETHODCALLTYPE *get_IsLastInTransaction )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out Boolean *pisLastInXact);
                                                       HRESULT ( STDMETHODCALLTYPE *get_ResponseQueueInfo_v2 )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo2 **ppqinfoResponse);
                                                          HRESULT ( STDMETHODCALLTYPE *putref_ResponseQueueInfo_v2 )(
            __RPC__in IMSMQMessage4 * This,
                       __RPC__in_opt IMSMQQueueInfo2 *pqinfoResponse);
                                                       HRESULT ( STDMETHODCALLTYPE *get_AdminQueueInfo_v2 )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo2 **ppqinfoAdmin);
                                                          HRESULT ( STDMETHODCALLTYPE *putref_AdminQueueInfo_v2 )(
            __RPC__in IMSMQMessage4 * This,
                       __RPC__in_opt IMSMQQueueInfo2 *pqinfoAdmin);
                                               HRESULT ( STDMETHODCALLTYPE *get_ReceivedAuthenticationLevel )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out short *psReceivedAuthenticationLevel);
                                               HRESULT ( STDMETHODCALLTYPE *get_ResponseQueueInfo )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo4 **ppqinfoResponse);
                                                  HRESULT ( STDMETHODCALLTYPE *putref_ResponseQueueInfo )(
            __RPC__in IMSMQMessage4 * This,
                       __RPC__in_opt IMSMQQueueInfo4 *pqinfoResponse);
                                               HRESULT ( STDMETHODCALLTYPE *get_AdminQueueInfo )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__deref_out_opt IMSMQQueueInfo4 **ppqinfoAdmin);
                                                  HRESULT ( STDMETHODCALLTYPE *putref_AdminQueueInfo )(
            __RPC__in IMSMQMessage4 * This,
                       __RPC__in_opt IMSMQQueueInfo4 *pqinfoAdmin);
                                               HRESULT ( STDMETHODCALLTYPE *get_ResponseDestination )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__deref_out_opt IDispatch **ppdestResponse);
                                                  HRESULT ( STDMETHODCALLTYPE *putref_ResponseDestination )(
            __RPC__in IMSMQMessage4 * This,
                       __RPC__in_opt IDispatch *pdestResponse);
                                               HRESULT ( STDMETHODCALLTYPE *get_Destination )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__deref_out_opt IDispatch **ppdestDestination);
                                               HRESULT ( STDMETHODCALLTYPE *get_LookupId )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out VARIANT *pvarLookupId);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsAuthenticated2 )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out VARIANT_BOOL *pisAuthenticated);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsFirstInTransaction2 )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out VARIANT_BOOL *pisFirstInXact);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsLastInTransaction2 )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out VARIANT_BOOL *pisLastInXact);
                                  HRESULT ( STDMETHODCALLTYPE *AttachCurrentSecurityContext2 )(
            __RPC__in IMSMQMessage4 * This);
                                               HRESULT ( STDMETHODCALLTYPE *get_SoapEnvelope )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__deref_out_opt BSTR *pbstrSoapEnvelope);
                                               HRESULT ( STDMETHODCALLTYPE *get_CompoundMessage )(
            __RPC__in IMSMQMessage4 * This,
                                __RPC__out VARIANT *pvarCompoundMessage);
                                               HRESULT ( STDMETHODCALLTYPE *put_SoapHeader )(
            __RPC__in IMSMQMessage4 * This,
                       __RPC__in BSTR bstrSoapHeader);
                                               HRESULT ( STDMETHODCALLTYPE *put_SoapBody )(
            __RPC__in IMSMQMessage4 * This,
                       __RPC__in BSTR bstrSoapBody);
        END_INTERFACE
    } IMSMQMessage4Vtbl;
    interface IMSMQMessage4
    {
        CONST_VTBL struct IMSMQMessage4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Class(This,plClass) )
    ( (This)->lpVtbl -> get_PrivLevel(This,plPrivLevel) )
    ( (This)->lpVtbl -> put_PrivLevel(This,lPrivLevel) )
    ( (This)->lpVtbl -> get_AuthLevel(This,plAuthLevel) )
    ( (This)->lpVtbl -> put_AuthLevel(This,lAuthLevel) )
    ( (This)->lpVtbl -> get_IsAuthenticated(This,pisAuthenticated) )
    ( (This)->lpVtbl -> get_Delivery(This,plDelivery) )
    ( (This)->lpVtbl -> put_Delivery(This,lDelivery) )
    ( (This)->lpVtbl -> get_Trace(This,plTrace) )
    ( (This)->lpVtbl -> put_Trace(This,lTrace) )
    ( (This)->lpVtbl -> get_Priority(This,plPriority) )
    ( (This)->lpVtbl -> put_Priority(This,lPriority) )
    ( (This)->lpVtbl -> get_Journal(This,plJournal) )
    ( (This)->lpVtbl -> put_Journal(This,lJournal) )
    ( (This)->lpVtbl -> get_ResponseQueueInfo_v1(This,ppqinfoResponse) )
    ( (This)->lpVtbl -> putref_ResponseQueueInfo_v1(This,pqinfoResponse) )
    ( (This)->lpVtbl -> get_AppSpecific(This,plAppSpecific) )
    ( (This)->lpVtbl -> put_AppSpecific(This,lAppSpecific) )
    ( (This)->lpVtbl -> get_SourceMachineGuid(This,pbstrGuidSrcMachine) )
    ( (This)->lpVtbl -> get_BodyLength(This,pcbBody) )
    ( (This)->lpVtbl -> get_Body(This,pvarBody) )
    ( (This)->lpVtbl -> put_Body(This,varBody) )
    ( (This)->lpVtbl -> get_AdminQueueInfo_v1(This,ppqinfoAdmin) )
    ( (This)->lpVtbl -> putref_AdminQueueInfo_v1(This,pqinfoAdmin) )
    ( (This)->lpVtbl -> get_Id(This,pvarMsgId) )
    ( (This)->lpVtbl -> get_CorrelationId(This,pvarMsgId) )
    ( (This)->lpVtbl -> put_CorrelationId(This,varMsgId) )
    ( (This)->lpVtbl -> get_Ack(This,plAck) )
    ( (This)->lpVtbl -> put_Ack(This,lAck) )
    ( (This)->lpVtbl -> get_Label(This,pbstrLabel) )
    ( (This)->lpVtbl -> put_Label(This,bstrLabel) )
    ( (This)->lpVtbl -> get_MaxTimeToReachQueue(This,plMaxTimeToReachQueue) )
    ( (This)->lpVtbl -> put_MaxTimeToReachQueue(This,lMaxTimeToReachQueue) )
    ( (This)->lpVtbl -> get_MaxTimeToReceive(This,plMaxTimeToReceive) )
    ( (This)->lpVtbl -> put_MaxTimeToReceive(This,lMaxTimeToReceive) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,plHashAlg) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,lHashAlg) )
    ( (This)->lpVtbl -> get_EncryptAlgorithm(This,plEncryptAlg) )
    ( (This)->lpVtbl -> put_EncryptAlgorithm(This,lEncryptAlg) )
    ( (This)->lpVtbl -> get_SentTime(This,pvarSentTime) )
    ( (This)->lpVtbl -> get_ArrivedTime(This,plArrivedTime) )
    ( (This)->lpVtbl -> get_DestinationQueueInfo(This,ppqinfoDest) )
    ( (This)->lpVtbl -> get_SenderCertificate(This,pvarSenderCert) )
    ( (This)->lpVtbl -> put_SenderCertificate(This,varSenderCert) )
    ( (This)->lpVtbl -> get_SenderId(This,pvarSenderId) )
    ( (This)->lpVtbl -> get_SenderIdType(This,plSenderIdType) )
    ( (This)->lpVtbl -> put_SenderIdType(This,lSenderIdType) )
    ( (This)->lpVtbl -> Send(This,DestinationQueue,Transaction) )
    ( (This)->lpVtbl -> AttachCurrentSecurityContext(This) )
    ( (This)->lpVtbl -> get_SenderVersion(This,plSenderVersion) )
    ( (This)->lpVtbl -> get_Extension(This,pvarExtension) )
    ( (This)->lpVtbl -> put_Extension(This,varExtension) )
    ( (This)->lpVtbl -> get_ConnectorTypeGuid(This,pbstrGuidConnectorType) )
    ( (This)->lpVtbl -> put_ConnectorTypeGuid(This,bstrGuidConnectorType) )
    ( (This)->lpVtbl -> get_TransactionStatusQueueInfo(This,ppqinfoXactStatus) )
    ( (This)->lpVtbl -> get_DestinationSymmetricKey(This,pvarDestSymmKey) )
    ( (This)->lpVtbl -> put_DestinationSymmetricKey(This,varDestSymmKey) )
    ( (This)->lpVtbl -> get_Signature(This,pvarSignature) )
    ( (This)->lpVtbl -> put_Signature(This,varSignature) )
    ( (This)->lpVtbl -> get_AuthenticationProviderType(This,plAuthProvType) )
    ( (This)->lpVtbl -> put_AuthenticationProviderType(This,lAuthProvType) )
    ( (This)->lpVtbl -> get_AuthenticationProviderName(This,pbstrAuthProvName) )
    ( (This)->lpVtbl -> put_AuthenticationProviderName(This,bstrAuthProvName) )
    ( (This)->lpVtbl -> put_SenderId(This,varSenderId) )
    ( (This)->lpVtbl -> get_MsgClass(This,plMsgClass) )
    ( (This)->lpVtbl -> put_MsgClass(This,lMsgClass) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
    ( (This)->lpVtbl -> get_TransactionId(This,pvarXactId) )
    ( (This)->lpVtbl -> get_IsFirstInTransaction(This,pisFirstInXact) )
    ( (This)->lpVtbl -> get_IsLastInTransaction(This,pisLastInXact) )
    ( (This)->lpVtbl -> get_ResponseQueueInfo_v2(This,ppqinfoResponse) )
    ( (This)->lpVtbl -> putref_ResponseQueueInfo_v2(This,pqinfoResponse) )
    ( (This)->lpVtbl -> get_AdminQueueInfo_v2(This,ppqinfoAdmin) )
    ( (This)->lpVtbl -> putref_AdminQueueInfo_v2(This,pqinfoAdmin) )
    ( (This)->lpVtbl -> get_ReceivedAuthenticationLevel(This,psReceivedAuthenticationLevel) )
    ( (This)->lpVtbl -> get_ResponseQueueInfo(This,ppqinfoResponse) )
    ( (This)->lpVtbl -> putref_ResponseQueueInfo(This,pqinfoResponse) )
    ( (This)->lpVtbl -> get_AdminQueueInfo(This,ppqinfoAdmin) )
    ( (This)->lpVtbl -> putref_AdminQueueInfo(This,pqinfoAdmin) )
    ( (This)->lpVtbl -> get_ResponseDestination(This,ppdestResponse) )
    ( (This)->lpVtbl -> putref_ResponseDestination(This,pdestResponse) )
    ( (This)->lpVtbl -> get_Destination(This,ppdestDestination) )
    ( (This)->lpVtbl -> get_LookupId(This,pvarLookupId) )
    ( (This)->lpVtbl -> get_IsAuthenticated2(This,pisAuthenticated) )
    ( (This)->lpVtbl -> get_IsFirstInTransaction2(This,pisFirstInXact) )
    ( (This)->lpVtbl -> get_IsLastInTransaction2(This,pisLastInXact) )
    ( (This)->lpVtbl -> AttachCurrentSecurityContext2(This) )
    ( (This)->lpVtbl -> get_SoapEnvelope(This,pbstrSoapEnvelope) )
    ( (This)->lpVtbl -> get_CompoundMessage(This,pvarCompoundMessage) )
    ( (This)->lpVtbl -> put_SoapHeader(This,bstrSoapHeader) )
    ( (This)->lpVtbl -> put_SoapBody(This,bstrSoapBody) )
EXTERN_C const CLSID CLSID_MSMQMessage;
class DECLSPEC_UUID("D7D6E075-DCCD-11d0-AA4B-0060970DEBAE")
MSMQMessage;
EXTERN_C const CLSID CLSID_MSMQQueue;
class DECLSPEC_UUID("D7D6E079-DCCD-11d0-AA4B-0060970DEBAE")
MSMQQueue;
EXTERN_C const IID IID_IMSMQPrivateEvent;
    typedef struct IMSMQPrivateEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQPrivateEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQPrivateEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQPrivateEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQPrivateEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQPrivateEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQPrivateEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQPrivateEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Hwnd )(
            __RPC__in IMSMQPrivateEvent * This,
                                __RPC__out long *phwnd);
        HRESULT ( STDMETHODCALLTYPE *FireArrivedEvent )(
            __RPC__in IMSMQPrivateEvent * This,
                       __RPC__in_opt IMSMQQueue *pq,
                       long msgcursor);
        HRESULT ( STDMETHODCALLTYPE *FireArrivedErrorEvent )(
            __RPC__in IMSMQPrivateEvent * This,
                       __RPC__in_opt IMSMQQueue *pq,
                       HRESULT hrStatus,
                       long msgcursor);
        END_INTERFACE
    } IMSMQPrivateEventVtbl;
    interface IMSMQPrivateEvent
    {
        CONST_VTBL struct IMSMQPrivateEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Hwnd(This,phwnd) )
    ( (This)->lpVtbl -> FireArrivedEvent(This,pq,msgcursor) )
    ( (This)->lpVtbl -> FireArrivedErrorEvent(This,pq,hrStatus,msgcursor) )
EXTERN_C const IID DIID__DMSMQEventEvents;
    typedef struct _DMSMQEventEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _DMSMQEventEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _DMSMQEventEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _DMSMQEventEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _DMSMQEventEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _DMSMQEventEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _DMSMQEventEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _DMSMQEventEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _DMSMQEventEventsVtbl;
    interface _DMSMQEventEvents
    {
        CONST_VTBL struct _DMSMQEventEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_MSMQEvent;
class DECLSPEC_UUID("D7D6E07A-DCCD-11d0-AA4B-0060970DEBAE")
MSMQEvent;
EXTERN_C const CLSID CLSID_MSMQQueueInfo;
class DECLSPEC_UUID("D7D6E07C-DCCD-11d0-AA4B-0060970DEBAE")
MSMQQueueInfo;
EXTERN_C const CLSID CLSID_MSMQQueueInfos;
class DECLSPEC_UUID("D7D6E07E-DCCD-11d0-AA4B-0060970DEBAE")
MSMQQueueInfos;
EXTERN_C const IID IID_IMSMQTransaction2;
    typedef struct IMSMQTransaction2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQTransaction2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQTransaction2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQTransaction2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQTransaction2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQTransaction2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQTransaction2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQTransaction2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                               HRESULT ( STDMETHODCALLTYPE *get_Transaction )(
            __RPC__in IMSMQTransaction2 * This,
                                __RPC__out long *plTransaction);
                                  HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IMSMQTransaction2 * This,
                                 __RPC__in VARIANT *fRetaining,
                                 __RPC__in VARIANT *grfTC,
                                 __RPC__in VARIANT *grfRM);
                                  HRESULT ( STDMETHODCALLTYPE *Abort )(
            __RPC__in IMSMQTransaction2 * This,
                                 __RPC__in VARIANT *fRetaining,
                                 __RPC__in VARIANT *fAsync);
                                  HRESULT ( STDMETHODCALLTYPE *InitNew )(
            __RPC__in IMSMQTransaction2 * This,
                       VARIANT varTransaction);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQTransaction2 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
        END_INTERFACE
    } IMSMQTransaction2Vtbl;
    interface IMSMQTransaction2
    {
        CONST_VTBL struct IMSMQTransaction2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Transaction(This,plTransaction) )
    ( (This)->lpVtbl -> Commit(This,fRetaining,grfTC,grfRM) )
    ( (This)->lpVtbl -> Abort(This,fRetaining,fAsync) )
    ( (This)->lpVtbl -> InitNew(This,varTransaction) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
EXTERN_C const IID IID_IMSMQTransaction3;
    typedef struct IMSMQTransaction3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQTransaction3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQTransaction3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQTransaction3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQTransaction3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQTransaction3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQTransaction3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQTransaction3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                               HRESULT ( STDMETHODCALLTYPE *get_Transaction )(
            __RPC__in IMSMQTransaction3 * This,
                                __RPC__out long *plTransaction);
                                  HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IMSMQTransaction3 * This,
                                 __RPC__in VARIANT *fRetaining,
                                 __RPC__in VARIANT *grfTC,
                                 __RPC__in VARIANT *grfRM);
                                  HRESULT ( STDMETHODCALLTYPE *Abort )(
            __RPC__in IMSMQTransaction3 * This,
                                 __RPC__in VARIANT *fRetaining,
                                 __RPC__in VARIANT *fAsync);
                                  HRESULT ( STDMETHODCALLTYPE *InitNew )(
            __RPC__in IMSMQTransaction3 * This,
                       VARIANT varTransaction);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQTransaction3 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
                                               HRESULT ( STDMETHODCALLTYPE *get_ITransaction )(
            __RPC__in IMSMQTransaction3 * This,
                                __RPC__out VARIANT *pvarITransaction);
        END_INTERFACE
    } IMSMQTransaction3Vtbl;
    interface IMSMQTransaction3
    {
        CONST_VTBL struct IMSMQTransaction3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Transaction(This,plTransaction) )
    ( (This)->lpVtbl -> Commit(This,fRetaining,grfTC,grfRM) )
    ( (This)->lpVtbl -> Abort(This,fRetaining,fAsync) )
    ( (This)->lpVtbl -> InitNew(This,varTransaction) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
    ( (This)->lpVtbl -> get_ITransaction(This,pvarITransaction) )
EXTERN_C const CLSID CLSID_MSMQTransaction;
class DECLSPEC_UUID("D7D6E080-DCCD-11d0-AA4B-0060970DEBAE")
MSMQTransaction;
EXTERN_C const IID IID_IMSMQCoordinatedTransactionDispenser2;
    typedef struct IMSMQCoordinatedTransactionDispenser2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQCoordinatedTransactionDispenser2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQCoordinatedTransactionDispenser2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQCoordinatedTransactionDispenser2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQCoordinatedTransactionDispenser2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQCoordinatedTransactionDispenser2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQCoordinatedTransactionDispenser2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQCoordinatedTransactionDispenser2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                  HRESULT ( STDMETHODCALLTYPE *BeginTransaction )(
            __RPC__in IMSMQCoordinatedTransactionDispenser2 * This,
                                __RPC__deref_out_opt IMSMQTransaction2 **ptransaction);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQCoordinatedTransactionDispenser2 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
        END_INTERFACE
    } IMSMQCoordinatedTransactionDispenser2Vtbl;
    interface IMSMQCoordinatedTransactionDispenser2
    {
        CONST_VTBL struct IMSMQCoordinatedTransactionDispenser2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> BeginTransaction(This,ptransaction) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
EXTERN_C const IID IID_IMSMQCoordinatedTransactionDispenser3;
    typedef struct IMSMQCoordinatedTransactionDispenser3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQCoordinatedTransactionDispenser3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQCoordinatedTransactionDispenser3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQCoordinatedTransactionDispenser3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQCoordinatedTransactionDispenser3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQCoordinatedTransactionDispenser3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQCoordinatedTransactionDispenser3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQCoordinatedTransactionDispenser3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                  HRESULT ( STDMETHODCALLTYPE *BeginTransaction )(
            __RPC__in IMSMQCoordinatedTransactionDispenser3 * This,
                                __RPC__deref_out_opt IMSMQTransaction3 **ptransaction);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQCoordinatedTransactionDispenser3 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
        END_INTERFACE
    } IMSMQCoordinatedTransactionDispenser3Vtbl;
    interface IMSMQCoordinatedTransactionDispenser3
    {
        CONST_VTBL struct IMSMQCoordinatedTransactionDispenser3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> BeginTransaction(This,ptransaction) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
EXTERN_C const CLSID CLSID_MSMQCoordinatedTransactionDispenser;
class DECLSPEC_UUID("D7D6E082-DCCD-11d0-AA4B-0060970DEBAE")
MSMQCoordinatedTransactionDispenser;
EXTERN_C const IID IID_IMSMQTransactionDispenser2;
    typedef struct IMSMQTransactionDispenser2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQTransactionDispenser2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQTransactionDispenser2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQTransactionDispenser2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQTransactionDispenser2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQTransactionDispenser2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQTransactionDispenser2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQTransactionDispenser2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                  HRESULT ( STDMETHODCALLTYPE *BeginTransaction )(
            __RPC__in IMSMQTransactionDispenser2 * This,
                                __RPC__deref_out_opt IMSMQTransaction2 **ptransaction);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQTransactionDispenser2 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
        END_INTERFACE
    } IMSMQTransactionDispenser2Vtbl;
    interface IMSMQTransactionDispenser2
    {
        CONST_VTBL struct IMSMQTransactionDispenser2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> BeginTransaction(This,ptransaction) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
EXTERN_C const IID IID_IMSMQTransactionDispenser3;
    typedef struct IMSMQTransactionDispenser3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQTransactionDispenser3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQTransactionDispenser3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQTransactionDispenser3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQTransactionDispenser3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQTransactionDispenser3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQTransactionDispenser3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQTransactionDispenser3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                  HRESULT ( STDMETHODCALLTYPE *BeginTransaction )(
            __RPC__in IMSMQTransactionDispenser3 * This,
                                __RPC__deref_out_opt IMSMQTransaction3 **ptransaction);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQTransactionDispenser3 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
        END_INTERFACE
    } IMSMQTransactionDispenser3Vtbl;
    interface IMSMQTransactionDispenser3
    {
        CONST_VTBL struct IMSMQTransactionDispenser3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> BeginTransaction(This,ptransaction) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
EXTERN_C const CLSID CLSID_MSMQTransactionDispenser;
class DECLSPEC_UUID("D7D6E084-DCCD-11d0-AA4B-0060970DEBAE")
MSMQTransactionDispenser;
EXTERN_C const IID IID_IMSMQApplication;
    typedef struct IMSMQApplicationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQApplication * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQApplication * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQApplication * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQApplication * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQApplication * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQApplication * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQApplication * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                  HRESULT ( STDMETHODCALLTYPE *MachineIdOfMachineName )(
            __RPC__in IMSMQApplication * This,
                       __RPC__in BSTR MachineName,
                                __RPC__deref_out_opt BSTR *pbstrGuid);
        END_INTERFACE
    } IMSMQApplicationVtbl;
    interface IMSMQApplication
    {
        CONST_VTBL struct IMSMQApplicationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> MachineIdOfMachineName(This,MachineName,pbstrGuid) )
EXTERN_C const IID IID_IMSMQApplication2;
    typedef struct IMSMQApplication2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQApplication2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQApplication2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQApplication2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQApplication2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQApplication2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQApplication2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQApplication2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                  HRESULT ( STDMETHODCALLTYPE *MachineIdOfMachineName )(
            __RPC__in IMSMQApplication2 * This,
                       __RPC__in BSTR MachineName,
                                __RPC__deref_out_opt BSTR *pbstrGuid);
                                  HRESULT ( STDMETHODCALLTYPE *RegisterCertificate )(
            __RPC__in IMSMQApplication2 * This,
                                 __RPC__in VARIANT *Flags,
                                 __RPC__in VARIANT *ExternalCertificate);
                                  HRESULT ( STDMETHODCALLTYPE *MachineNameOfMachineId )(
            __RPC__in IMSMQApplication2 * This,
                       __RPC__in BSTR bstrGuid,
                                __RPC__deref_out_opt BSTR *pbstrMachineName);
                                               HRESULT ( STDMETHODCALLTYPE *get_MSMQVersionMajor )(
            __RPC__in IMSMQApplication2 * This,
                                __RPC__out short *psMSMQVersionMajor);
                                               HRESULT ( STDMETHODCALLTYPE *get_MSMQVersionMinor )(
            __RPC__in IMSMQApplication2 * This,
                                __RPC__out short *psMSMQVersionMinor);
                                               HRESULT ( STDMETHODCALLTYPE *get_MSMQVersionBuild )(
            __RPC__in IMSMQApplication2 * This,
                                __RPC__out short *psMSMQVersionBuild);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsDsEnabled )(
            __RPC__in IMSMQApplication2 * This,
                                __RPC__out VARIANT_BOOL *pfIsDsEnabled);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQApplication2 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
        END_INTERFACE
    } IMSMQApplication2Vtbl;
    interface IMSMQApplication2
    {
        CONST_VTBL struct IMSMQApplication2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> MachineIdOfMachineName(This,MachineName,pbstrGuid) )
    ( (This)->lpVtbl -> RegisterCertificate(This,Flags,ExternalCertificate) )
    ( (This)->lpVtbl -> MachineNameOfMachineId(This,bstrGuid,pbstrMachineName) )
    ( (This)->lpVtbl -> get_MSMQVersionMajor(This,psMSMQVersionMajor) )
    ( (This)->lpVtbl -> get_MSMQVersionMinor(This,psMSMQVersionMinor) )
    ( (This)->lpVtbl -> get_MSMQVersionBuild(This,psMSMQVersionBuild) )
    ( (This)->lpVtbl -> get_IsDsEnabled(This,pfIsDsEnabled) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
EXTERN_C const IID IID_IMSMQApplication3;
    typedef struct IMSMQApplication3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQApplication3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQApplication3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQApplication3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQApplication3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQApplication3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQApplication3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQApplication3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                  HRESULT ( STDMETHODCALLTYPE *MachineIdOfMachineName )(
            __RPC__in IMSMQApplication3 * This,
                       __RPC__in BSTR MachineName,
                                __RPC__deref_out_opt BSTR *pbstrGuid);
                                  HRESULT ( STDMETHODCALLTYPE *RegisterCertificate )(
            __RPC__in IMSMQApplication3 * This,
                                 __RPC__in VARIANT *Flags,
                                 __RPC__in VARIANT *ExternalCertificate);
                                  HRESULT ( STDMETHODCALLTYPE *MachineNameOfMachineId )(
            __RPC__in IMSMQApplication3 * This,
                       __RPC__in BSTR bstrGuid,
                                __RPC__deref_out_opt BSTR *pbstrMachineName);
                                               HRESULT ( STDMETHODCALLTYPE *get_MSMQVersionMajor )(
            __RPC__in IMSMQApplication3 * This,
                                __RPC__out short *psMSMQVersionMajor);
                                               HRESULT ( STDMETHODCALLTYPE *get_MSMQVersionMinor )(
            __RPC__in IMSMQApplication3 * This,
                                __RPC__out short *psMSMQVersionMinor);
                                               HRESULT ( STDMETHODCALLTYPE *get_MSMQVersionBuild )(
            __RPC__in IMSMQApplication3 * This,
                                __RPC__out short *psMSMQVersionBuild);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsDsEnabled )(
            __RPC__in IMSMQApplication3 * This,
                                __RPC__out VARIANT_BOOL *pfIsDsEnabled);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQApplication3 * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
                                               HRESULT ( STDMETHODCALLTYPE *get_ActiveQueues )(
            __RPC__in IMSMQApplication3 * This,
                                __RPC__out VARIANT *pvActiveQueues);
                                               HRESULT ( STDMETHODCALLTYPE *get_PrivateQueues )(
            __RPC__in IMSMQApplication3 * This,
                                __RPC__out VARIANT *pvPrivateQueues);
                                               HRESULT ( STDMETHODCALLTYPE *get_DirectoryServiceServer )(
            __RPC__in IMSMQApplication3 * This,
                                __RPC__deref_out_opt BSTR *pbstrDirectoryServiceServer);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsConnected )(
            __RPC__in IMSMQApplication3 * This,
                                __RPC__out VARIANT_BOOL *pfIsConnected);
                                               HRESULT ( STDMETHODCALLTYPE *get_BytesInAllQueues )(
            __RPC__in IMSMQApplication3 * This,
                                __RPC__out VARIANT *pvBytesInAllQueues);
                                               HRESULT ( STDMETHODCALLTYPE *put_Machine )(
            __RPC__in IMSMQApplication3 * This,
                       __RPC__in BSTR bstrMachine);
                                               HRESULT ( STDMETHODCALLTYPE *get_Machine )(
            __RPC__in IMSMQApplication3 * This,
                                __RPC__deref_out_opt BSTR *pbstrMachine);
                                  HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in IMSMQApplication3 * This);
                                  HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in IMSMQApplication3 * This);
                                  HRESULT ( STDMETHODCALLTYPE *Tidy )(
            __RPC__in IMSMQApplication3 * This);
        END_INTERFACE
    } IMSMQApplication3Vtbl;
    interface IMSMQApplication3
    {
        CONST_VTBL struct IMSMQApplication3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> MachineIdOfMachineName(This,MachineName,pbstrGuid) )
    ( (This)->lpVtbl -> RegisterCertificate(This,Flags,ExternalCertificate) )
    ( (This)->lpVtbl -> MachineNameOfMachineId(This,bstrGuid,pbstrMachineName) )
    ( (This)->lpVtbl -> get_MSMQVersionMajor(This,psMSMQVersionMajor) )
    ( (This)->lpVtbl -> get_MSMQVersionMinor(This,psMSMQVersionMinor) )
    ( (This)->lpVtbl -> get_MSMQVersionBuild(This,psMSMQVersionBuild) )
    ( (This)->lpVtbl -> get_IsDsEnabled(This,pfIsDsEnabled) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
    ( (This)->lpVtbl -> get_ActiveQueues(This,pvActiveQueues) )
    ( (This)->lpVtbl -> get_PrivateQueues(This,pvPrivateQueues) )
    ( (This)->lpVtbl -> get_DirectoryServiceServer(This,pbstrDirectoryServiceServer) )
    ( (This)->lpVtbl -> get_IsConnected(This,pfIsConnected) )
    ( (This)->lpVtbl -> get_BytesInAllQueues(This,pvBytesInAllQueues) )
    ( (This)->lpVtbl -> put_Machine(This,bstrMachine) )
    ( (This)->lpVtbl -> get_Machine(This,pbstrMachine) )
    ( (This)->lpVtbl -> Connect(This) )
    ( (This)->lpVtbl -> Disconnect(This) )
    ( (This)->lpVtbl -> Tidy(This) )
EXTERN_C const CLSID CLSID_MSMQApplication;
class DECLSPEC_UUID("D7D6E086-DCCD-11d0-AA4B-0060970DEBAE")
MSMQApplication;
EXTERN_C const IID IID_IMSMQDestination;
    typedef struct IMSMQDestinationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQDestination * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQDestination * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQDestination * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQDestination * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQDestination * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQDestination * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQDestination * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                  HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IMSMQDestination * This);
                                  HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IMSMQDestination * This);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsOpen )(
            __RPC__in IMSMQDestination * This,
                                __RPC__out VARIANT_BOOL *pfIsOpen);
                                    HRESULT ( STDMETHODCALLTYPE *get_IADs )(
            __RPC__in IMSMQDestination * This,
                                __RPC__deref_out_opt IDispatch **ppIADs);
                                       HRESULT ( STDMETHODCALLTYPE *putref_IADs )(
            __RPC__in IMSMQDestination * This,
                       __RPC__in_opt IDispatch *pIADs);
                                               HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IMSMQDestination * This,
                                __RPC__deref_out_opt BSTR *pbstrADsPath);
                                               HRESULT ( STDMETHODCALLTYPE *put_ADsPath )(
            __RPC__in IMSMQDestination * This,
                       __RPC__in BSTR bstrADsPath);
                                               HRESULT ( STDMETHODCALLTYPE *get_PathName )(
            __RPC__in IMSMQDestination * This,
                                __RPC__deref_out_opt BSTR *pbstrPathName);
                                               HRESULT ( STDMETHODCALLTYPE *put_PathName )(
            __RPC__in IMSMQDestination * This,
                       __RPC__in BSTR bstrPathName);
                                               HRESULT ( STDMETHODCALLTYPE *get_FormatName )(
            __RPC__in IMSMQDestination * This,
                                __RPC__deref_out_opt BSTR *pbstrFormatName);
                                               HRESULT ( STDMETHODCALLTYPE *put_FormatName )(
            __RPC__in IMSMQDestination * This,
                       __RPC__in BSTR bstrFormatName);
                                    HRESULT ( STDMETHODCALLTYPE *get_Destinations )(
            __RPC__in IMSMQDestination * This,
                                __RPC__deref_out_opt IDispatch **ppDestinations);
                                       HRESULT ( STDMETHODCALLTYPE *putref_Destinations )(
            __RPC__in IMSMQDestination * This,
                       __RPC__in_opt IDispatch *pDestinations);
                                    HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IMSMQDestination * This,
                                __RPC__deref_out_opt IDispatch **ppcolProperties);
        END_INTERFACE
    } IMSMQDestinationVtbl;
    interface IMSMQDestination
    {
        CONST_VTBL struct IMSMQDestinationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Open(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> get_IsOpen(This,pfIsOpen) )
    ( (This)->lpVtbl -> get_IADs(This,ppIADs) )
    ( (This)->lpVtbl -> putref_IADs(This,pIADs) )
    ( (This)->lpVtbl -> get_ADsPath(This,pbstrADsPath) )
    ( (This)->lpVtbl -> put_ADsPath(This,bstrADsPath) )
    ( (This)->lpVtbl -> get_PathName(This,pbstrPathName) )
    ( (This)->lpVtbl -> put_PathName(This,bstrPathName) )
    ( (This)->lpVtbl -> get_FormatName(This,pbstrFormatName) )
    ( (This)->lpVtbl -> put_FormatName(This,bstrFormatName) )
    ( (This)->lpVtbl -> get_Destinations(This,ppDestinations) )
    ( (This)->lpVtbl -> putref_Destinations(This,pDestinations) )
    ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
EXTERN_C const IID IID_IMSMQPrivateDestination;
    typedef struct IMSMQPrivateDestinationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQPrivateDestination * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQPrivateDestination * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQPrivateDestination * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQPrivateDestination * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQPrivateDestination * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQPrivateDestination * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQPrivateDestination * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Handle )(
            __RPC__in IMSMQPrivateDestination * This,
                                __RPC__out VARIANT *pvarHandle);
                                    HRESULT ( STDMETHODCALLTYPE *put_Handle )(
            __RPC__in IMSMQPrivateDestination * This,
                       VARIANT varHandle);
        END_INTERFACE
    } IMSMQPrivateDestinationVtbl;
    interface IMSMQPrivateDestination
    {
        CONST_VTBL struct IMSMQPrivateDestinationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Handle(This,pvarHandle) )
    ( (This)->lpVtbl -> put_Handle(This,varHandle) )
EXTERN_C const CLSID CLSID_MSMQDestination;
class DECLSPEC_UUID("eba96b18-2168-11d3-898c-00e02c074f6b")
MSMQDestination;
EXTERN_C const IID IID_IMSMQCollection;
    typedef struct IMSMQCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                      HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IMSMQCollection * This,
                       __RPC__in VARIANT *Index,
                                __RPC__out VARIANT *pvarRet);
                                               HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IMSMQCollection * This,
                                __RPC__out long *pCount);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in IMSMQCollection * This,
                                __RPC__deref_out_opt IUnknown **ppunk);
        END_INTERFACE
    } IMSMQCollectionVtbl;
    interface IMSMQCollection
    {
        CONST_VTBL struct IMSMQCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Item(This,Index,pvarRet) )
    ( (This)->lpVtbl -> get_Count(This,pCount) )
    ( (This)->lpVtbl -> _NewEnum(This,ppunk) )
EXTERN_C const CLSID CLSID_MSMQCollection;
class DECLSPEC_UUID("f72b9031-2f0c-43e8-924e-e6052cdc493f")
MSMQCollection;
EXTERN_C const IID IID_IMSMQManagement;
    typedef struct IMSMQManagementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQManagement * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQManagement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQManagement * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQManagement * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQManagement * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQManagement * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQManagement * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                      HRESULT ( STDMETHODCALLTYPE *Init )(
            __RPC__in IMSMQManagement * This,
                                 __RPC__in VARIANT *Machine,
                                 __RPC__in VARIANT *Pathname,
                                 __RPC__in VARIANT *FormatName);
                                               HRESULT ( STDMETHODCALLTYPE *get_FormatName )(
            __RPC__in IMSMQManagement * This,
                                __RPC__deref_out_opt BSTR *pbstrFormatName);
                                               HRESULT ( STDMETHODCALLTYPE *get_Machine )(
            __RPC__in IMSMQManagement * This,
                                __RPC__deref_out_opt BSTR *pbstrMachine);
                                               HRESULT ( STDMETHODCALLTYPE *get_MessageCount )(
            __RPC__in IMSMQManagement * This,
                                __RPC__out long *plMessageCount);
                                               HRESULT ( STDMETHODCALLTYPE *get_ForeignStatus )(
            __RPC__in IMSMQManagement * This,
                                __RPC__out long *plForeignStatus);
                                               HRESULT ( STDMETHODCALLTYPE *get_QueueType )(
            __RPC__in IMSMQManagement * This,
                                __RPC__out long *plQueueType);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsLocal )(
            __RPC__in IMSMQManagement * This,
                                __RPC__out VARIANT_BOOL *pfIsLocal);
                                               HRESULT ( STDMETHODCALLTYPE *get_TransactionalStatus )(
            __RPC__in IMSMQManagement * This,
                                __RPC__out long *plTransactionalStatus);
                                               HRESULT ( STDMETHODCALLTYPE *get_BytesInQueue )(
            __RPC__in IMSMQManagement * This,
                                __RPC__out VARIANT *pvBytesInQueue);
        END_INTERFACE
    } IMSMQManagementVtbl;
    interface IMSMQManagement
    {
        CONST_VTBL struct IMSMQManagementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Init(This,Machine,Pathname,FormatName) )
    ( (This)->lpVtbl -> get_FormatName(This,pbstrFormatName) )
    ( (This)->lpVtbl -> get_Machine(This,pbstrMachine) )
    ( (This)->lpVtbl -> get_MessageCount(This,plMessageCount) )
    ( (This)->lpVtbl -> get_ForeignStatus(This,plForeignStatus) )
    ( (This)->lpVtbl -> get_QueueType(This,plQueueType) )
    ( (This)->lpVtbl -> get_IsLocal(This,pfIsLocal) )
    ( (This)->lpVtbl -> get_TransactionalStatus(This,plTransactionalStatus) )
    ( (This)->lpVtbl -> get_BytesInQueue(This,pvBytesInQueue) )
EXTERN_C const CLSID CLSID_MSMQManagement;
class DECLSPEC_UUID("39CE96FE-F4C5-4484-A143-4C2D5D324229")
MSMQManagement;
EXTERN_C const IID IID_IMSMQOutgoingQueueManagement;
    typedef struct IMSMQOutgoingQueueManagementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQOutgoingQueueManagement * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQOutgoingQueueManagement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQOutgoingQueueManagement * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQOutgoingQueueManagement * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQOutgoingQueueManagement * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQOutgoingQueueManagement * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQOutgoingQueueManagement * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                      HRESULT ( STDMETHODCALLTYPE *Init )(
            __RPC__in IMSMQOutgoingQueueManagement * This,
                                 __RPC__in VARIANT *Machine,
                                 __RPC__in VARIANT *Pathname,
                                 __RPC__in VARIANT *FormatName);
                                               HRESULT ( STDMETHODCALLTYPE *get_FormatName )(
            __RPC__in IMSMQOutgoingQueueManagement * This,
                                __RPC__deref_out_opt BSTR *pbstrFormatName);
                                               HRESULT ( STDMETHODCALLTYPE *get_Machine )(
            __RPC__in IMSMQOutgoingQueueManagement * This,
                                __RPC__deref_out_opt BSTR *pbstrMachine);
                                               HRESULT ( STDMETHODCALLTYPE *get_MessageCount )(
            __RPC__in IMSMQOutgoingQueueManagement * This,
                                __RPC__out long *plMessageCount);
                                               HRESULT ( STDMETHODCALLTYPE *get_ForeignStatus )(
            __RPC__in IMSMQOutgoingQueueManagement * This,
                                __RPC__out long *plForeignStatus);
                                               HRESULT ( STDMETHODCALLTYPE *get_QueueType )(
            __RPC__in IMSMQOutgoingQueueManagement * This,
                                __RPC__out long *plQueueType);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsLocal )(
            __RPC__in IMSMQOutgoingQueueManagement * This,
                                __RPC__out VARIANT_BOOL *pfIsLocal);
                                               HRESULT ( STDMETHODCALLTYPE *get_TransactionalStatus )(
            __RPC__in IMSMQOutgoingQueueManagement * This,
                                __RPC__out long *plTransactionalStatus);
                                               HRESULT ( STDMETHODCALLTYPE *get_BytesInQueue )(
            __RPC__in IMSMQOutgoingQueueManagement * This,
                                __RPC__out VARIANT *pvBytesInQueue);
                                           HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IMSMQOutgoingQueueManagement * This,
                                __RPC__out long *plState);
                                           HRESULT ( STDMETHODCALLTYPE *get_NextHops )(
            __RPC__in IMSMQOutgoingQueueManagement * This,
                                __RPC__out VARIANT *pvNextHops);
                                  HRESULT ( STDMETHODCALLTYPE *EodGetSendInfo )(
            __RPC__in IMSMQOutgoingQueueManagement * This,
                                __RPC__deref_out_opt IMSMQCollection **ppCollection);
                                  HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IMSMQOutgoingQueueManagement * This);
                                  HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IMSMQOutgoingQueueManagement * This);
                                  HRESULT ( STDMETHODCALLTYPE *EodResend )(
            __RPC__in IMSMQOutgoingQueueManagement * This);
        END_INTERFACE
    } IMSMQOutgoingQueueManagementVtbl;
    interface IMSMQOutgoingQueueManagement
    {
        CONST_VTBL struct IMSMQOutgoingQueueManagementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Init(This,Machine,Pathname,FormatName) )
    ( (This)->lpVtbl -> get_FormatName(This,pbstrFormatName) )
    ( (This)->lpVtbl -> get_Machine(This,pbstrMachine) )
    ( (This)->lpVtbl -> get_MessageCount(This,plMessageCount) )
    ( (This)->lpVtbl -> get_ForeignStatus(This,plForeignStatus) )
    ( (This)->lpVtbl -> get_QueueType(This,plQueueType) )
    ( (This)->lpVtbl -> get_IsLocal(This,pfIsLocal) )
    ( (This)->lpVtbl -> get_TransactionalStatus(This,plTransactionalStatus) )
    ( (This)->lpVtbl -> get_BytesInQueue(This,pvBytesInQueue) )
    ( (This)->lpVtbl -> get_State(This,plState) )
    ( (This)->lpVtbl -> get_NextHops(This,pvNextHops) )
    ( (This)->lpVtbl -> EodGetSendInfo(This,ppCollection) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> EodResend(This) )
EXTERN_C const CLSID CLSID_MSMQOutgoingQueueManagement;
class DECLSPEC_UUID("0188401c-247a-4fed-99c6-bf14119d7055")
MSMQOutgoingQueueManagement;
EXTERN_C const IID IID_IMSMQQueueManagement;
    typedef struct IMSMQQueueManagementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSMQQueueManagement * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSMQQueueManagement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSMQQueueManagement * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSMQQueueManagement * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSMQQueueManagement * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSMQQueueManagement * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSMQQueueManagement * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                      HRESULT ( STDMETHODCALLTYPE *Init )(
            __RPC__in IMSMQQueueManagement * This,
                                 __RPC__in VARIANT *Machine,
                                 __RPC__in VARIANT *Pathname,
                                 __RPC__in VARIANT *FormatName);
                                               HRESULT ( STDMETHODCALLTYPE *get_FormatName )(
            __RPC__in IMSMQQueueManagement * This,
                                __RPC__deref_out_opt BSTR *pbstrFormatName);
                                               HRESULT ( STDMETHODCALLTYPE *get_Machine )(
            __RPC__in IMSMQQueueManagement * This,
                                __RPC__deref_out_opt BSTR *pbstrMachine);
                                               HRESULT ( STDMETHODCALLTYPE *get_MessageCount )(
            __RPC__in IMSMQQueueManagement * This,
                                __RPC__out long *plMessageCount);
                                               HRESULT ( STDMETHODCALLTYPE *get_ForeignStatus )(
            __RPC__in IMSMQQueueManagement * This,
                                __RPC__out long *plForeignStatus);
                                               HRESULT ( STDMETHODCALLTYPE *get_QueueType )(
            __RPC__in IMSMQQueueManagement * This,
                                __RPC__out long *plQueueType);
                                               HRESULT ( STDMETHODCALLTYPE *get_IsLocal )(
            __RPC__in IMSMQQueueManagement * This,
                                __RPC__out VARIANT_BOOL *pfIsLocal);
                                               HRESULT ( STDMETHODCALLTYPE *get_TransactionalStatus )(
            __RPC__in IMSMQQueueManagement * This,
                                __RPC__out long *plTransactionalStatus);
                                               HRESULT ( STDMETHODCALLTYPE *get_BytesInQueue )(
            __RPC__in IMSMQQueueManagement * This,
                                __RPC__out VARIANT *pvBytesInQueue);
                                           HRESULT ( STDMETHODCALLTYPE *get_JournalMessageCount )(
            __RPC__in IMSMQQueueManagement * This,
                                __RPC__out long *plJournalMessageCount);
                                           HRESULT ( STDMETHODCALLTYPE *get_BytesInJournal )(
            __RPC__in IMSMQQueueManagement * This,
                                __RPC__out VARIANT *pvBytesInJournal);
                                  HRESULT ( STDMETHODCALLTYPE *EodGetReceiveInfo )(
            __RPC__in IMSMQQueueManagement * This,
                                __RPC__out VARIANT *pvCollection);
        END_INTERFACE
    } IMSMQQueueManagementVtbl;
    interface IMSMQQueueManagement
    {
        CONST_VTBL struct IMSMQQueueManagementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Init(This,Machine,Pathname,FormatName) )
    ( (This)->lpVtbl -> get_FormatName(This,pbstrFormatName) )
    ( (This)->lpVtbl -> get_Machine(This,pbstrMachine) )
    ( (This)->lpVtbl -> get_MessageCount(This,plMessageCount) )
    ( (This)->lpVtbl -> get_ForeignStatus(This,plForeignStatus) )
    ( (This)->lpVtbl -> get_QueueType(This,plQueueType) )
    ( (This)->lpVtbl -> get_IsLocal(This,pfIsLocal) )
    ( (This)->lpVtbl -> get_TransactionalStatus(This,plTransactionalStatus) )
    ( (This)->lpVtbl -> get_BytesInQueue(This,pvBytesInQueue) )
    ( (This)->lpVtbl -> get_JournalMessageCount(This,plJournalMessageCount) )
    ( (This)->lpVtbl -> get_BytesInJournal(This,pvBytesInJournal) )
    ( (This)->lpVtbl -> EodGetReceiveInfo(This,pvCollection) )
EXTERN_C const CLSID CLSID_MSMQQueueManagement;
class DECLSPEC_UUID("33b6d07e-f27d-42fa-b2d7-bf82e11e9374")
MSMQQueueManagement;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mqoai_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mqoai_0000_0001_v0_0_s_ifspec;
}
