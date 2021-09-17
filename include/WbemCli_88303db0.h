#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWbemClassObject IWbemClassObject;
typedef interface IWbemObjectAccess IWbemObjectAccess;
typedef interface IWbemQualifierSet IWbemQualifierSet;
typedef interface IWbemServices IWbemServices;
typedef interface IWbemLocator IWbemLocator;
typedef interface IWbemObjectSink IWbemObjectSink;
typedef interface IEnumWbemClassObject IEnumWbemClassObject;
typedef interface IWbemCallResult IWbemCallResult;
typedef interface IWbemContext IWbemContext;
typedef interface IUnsecuredApartment IUnsecuredApartment;
typedef interface IWbemUnsecuredApartment IWbemUnsecuredApartment;
typedef interface IWbemStatusCodeText IWbemStatusCodeText;
typedef interface IWbemBackupRestore IWbemBackupRestore;
typedef interface IWbemBackupRestoreEx IWbemBackupRestoreEx;
typedef interface IWbemRefresher IWbemRefresher;
typedef interface IWbemHiPerfEnum IWbemHiPerfEnum;
typedef interface IWbemConfigureRefresher IWbemConfigureRefresher;
typedef class WbemLocator WbemLocator;
typedef class WbemContext WbemContext;
typedef class UnsecuredApartment UnsecuredApartment;
typedef class WbemClassObject WbemClassObject;
typedef class MofCompiler MofCompiler;
typedef class WbemStatusCodeText WbemStatusCodeText;
typedef class WbemBackupRestore WbemBackupRestore;
typedef class WbemRefresher WbemRefresher;
typedef class WbemObjectTextSrc WbemObjectTextSrc;
typedef interface IWbemObjectSinkEx IWbemObjectSinkEx;
typedef interface IWbemShutdown IWbemShutdown;
typedef interface IWbemObjectTextSrc IWbemObjectTextSrc;
typedef interface IMofCompiler IMofCompiler;
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family or WinMgmt Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT)
extern RPC_IF_HANDLE __MIDL_itf_wbemcli_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemcli_0000_0000_v0_0_s_ifspec;
typedef
enum tag_WBEM_GENUS_TYPE
    {
        WBEM_GENUS_CLASS = 1,
        WBEM_GENUS_INSTANCE = 2
    } WBEM_GENUS_TYPE;
typedef
enum tag_WBEM_CHANGE_FLAG_TYPE
    {
        WBEM_FLAG_CREATE_OR_UPDATE = 0,
        WBEM_FLAG_UPDATE_ONLY = 0x1,
        WBEM_FLAG_CREATE_ONLY = 0x2,
        WBEM_FLAG_UPDATE_COMPATIBLE = 0,
        WBEM_FLAG_UPDATE_SAFE_MODE = 0x20,
        WBEM_FLAG_UPDATE_FORCE_MODE = 0x40,
        WBEM_MASK_UPDATE_MODE = 0x60,
        WBEM_FLAG_ADVISORY = 0x10000
    } WBEM_CHANGE_FLAG_TYPE;
typedef
enum tag_WBEM_GENERIC_FLAG_TYPE
    {
        WBEM_FLAG_RETURN_IMMEDIATELY = 0x10,
        WBEM_FLAG_RETURN_WBEM_COMPLETE = 0,
        WBEM_FLAG_BIDIRECTIONAL = 0,
        WBEM_FLAG_FORWARD_ONLY = 0x20,
        WBEM_FLAG_NO_ERROR_OBJECT = 0x40,
        WBEM_FLAG_RETURN_ERROR_OBJECT = 0,
        WBEM_FLAG_SEND_STATUS = 0x80,
        WBEM_FLAG_DONT_SEND_STATUS = 0,
        WBEM_FLAG_ENSURE_LOCATABLE = 0x100,
        WBEM_FLAG_DIRECT_READ = 0x200,
        WBEM_FLAG_SEND_ONLY_SELECTED = 0,
        WBEM_RETURN_WHEN_COMPLETE = 0,
        WBEM_RETURN_IMMEDIATELY = 0x10,
        WBEM_MASK_RESERVED_FLAGS = 0x1f000,
        WBEM_FLAG_USE_AMENDED_QUALIFIERS = 0x20000,
        WBEM_FLAG_STRONG_VALIDATION = 0x100000
    } WBEM_GENERIC_FLAG_TYPE;
typedef
enum tag_WBEM_STATUS_TYPE
    {
        WBEM_STATUS_COMPLETE = 0,
        WBEM_STATUS_REQUIREMENTS = 1,
        WBEM_STATUS_PROGRESS = 2,
        WBEM_STATUS_LOGGING_INFORMATION = 0x100,
        WBEM_STATUS_LOGGING_INFORMATION_PROVIDER = 0x200,
        WBEM_STATUS_LOGGING_INFORMATION_HOST = 0x400,
        WBEM_STATUS_LOGGING_INFORMATION_REPOSITORY = 0x800,
        WBEM_STATUS_LOGGING_INFORMATION_ESS = 0x1000
    } WBEM_STATUS_TYPE;
typedef
enum tag_WBEM_TIMEOUT_TYPE
    {
        WBEM_NO_WAIT = 0,
        WBEM_INFINITE = 0xffffffff
    } WBEM_TIMEOUT_TYPE;
typedef
enum tag_WBEM_CONDITION_FLAG_TYPE
    {
        WBEM_FLAG_ALWAYS = 0,
        WBEM_FLAG_ONLY_IF_TRUE = 0x1,
        WBEM_FLAG_ONLY_IF_FALSE = 0x2,
        WBEM_FLAG_ONLY_IF_IDENTICAL = 0x3,
        WBEM_MASK_PRIMARY_CONDITION = 0x3,
        WBEM_FLAG_KEYS_ONLY = 0x4,
        WBEM_FLAG_REFS_ONLY = 0x8,
        WBEM_FLAG_LOCAL_ONLY = 0x10,
        WBEM_FLAG_PROPAGATED_ONLY = 0x20,
        WBEM_FLAG_SYSTEM_ONLY = 0x30,
        WBEM_FLAG_NONSYSTEM_ONLY = 0x40,
        WBEM_MASK_CONDITION_ORIGIN = 0x70,
        WBEM_FLAG_CLASS_OVERRIDES_ONLY = 0x100,
        WBEM_FLAG_CLASS_LOCAL_AND_OVERRIDES = 0x200,
        WBEM_MASK_CLASS_CONDITION = 0x300
    } WBEM_CONDITION_FLAG_TYPE;
typedef
enum tag_WBEM_FLAVOR_TYPE
    {
        WBEM_FLAVOR_DONT_PROPAGATE = 0,
        WBEM_FLAVOR_FLAG_PROPAGATE_TO_INSTANCE = 0x1,
        WBEM_FLAVOR_FLAG_PROPAGATE_TO_DERIVED_CLASS = 0x2,
        WBEM_FLAVOR_MASK_PROPAGATION = 0xf,
        WBEM_FLAVOR_OVERRIDABLE = 0,
        WBEM_FLAVOR_NOT_OVERRIDABLE = 0x10,
        WBEM_FLAVOR_MASK_PERMISSIONS = 0x10,
        WBEM_FLAVOR_ORIGIN_LOCAL = 0,
        WBEM_FLAVOR_ORIGIN_PROPAGATED = 0x20,
        WBEM_FLAVOR_ORIGIN_SYSTEM = 0x40,
        WBEM_FLAVOR_MASK_ORIGIN = 0x60,
        WBEM_FLAVOR_NOT_AMENDED = 0,
        WBEM_FLAVOR_AMENDED = 0x80,
        WBEM_FLAVOR_MASK_AMENDED = 0x80
    } WBEM_FLAVOR_TYPE;
typedef
enum tag_WBEM_QUERY_FLAG_TYPE
    {
        WBEM_FLAG_DEEP = 0,
        WBEM_FLAG_SHALLOW = 1,
        WBEM_FLAG_PROTOTYPE = 2
    } WBEM_QUERY_FLAG_TYPE;
typedef
enum tag_WBEM_SECURITY_FLAGS
    {
        WBEM_ENABLE = 1,
        WBEM_METHOD_EXECUTE = 2,
        WBEM_FULL_WRITE_REP = 4,
        WBEM_PARTIAL_WRITE_REP = 8,
        WBEM_WRITE_PROVIDER = 0x10,
        WBEM_REMOTE_ACCESS = 0x20,
        WBEM_RIGHT_SUBSCRIBE = 0x40,
        WBEM_RIGHT_PUBLISH = 0x80
    } WBEM_SECURITY_FLAGS;
typedef
enum tag_WBEM_LIMITATION_FLAG_TYPE
    {
        WBEM_FLAG_EXCLUDE_OBJECT_QUALIFIERS = 0x10,
        WBEM_FLAG_EXCLUDE_PROPERTY_QUALIFIERS = 0x20
    } WBEM_LIMITATION_FLAG_TYPE;
typedef
enum tag_WBEM_TEXT_FLAG_TYPE
    {
        WBEM_FLAG_NO_FLAVORS = 0x1
    } WBEM_TEXT_FLAG_TYPE;
typedef
enum tag_WBEM_COMPARISON_FLAG
    {
        WBEM_COMPARISON_INCLUDE_ALL = 0,
        WBEM_FLAG_IGNORE_QUALIFIERS = 0x1,
        WBEM_FLAG_IGNORE_OBJECT_SOURCE = 0x2,
        WBEM_FLAG_IGNORE_DEFAULT_VALUES = 0x4,
        WBEM_FLAG_IGNORE_CLASS = 0x8,
        WBEM_FLAG_IGNORE_CASE = 0x10,
        WBEM_FLAG_IGNORE_FLAVOR = 0x20
    } WBEM_COMPARISON_FLAG;
typedef
enum tag_WBEM_LOCKING
    {
        WBEM_FLAG_ALLOW_READ = 0x1
    } WBEM_LOCKING_FLAG_TYPE;
typedef
enum tag_CIMTYPE_ENUMERATION
    {
        CIM_ILLEGAL = 0xfff,
        CIM_EMPTY = 0,
        CIM_SINT8 = 16,
        CIM_UINT8 = 17,
        CIM_SINT16 = 2,
        CIM_UINT16 = 18,
        CIM_SINT32 = 3,
        CIM_UINT32 = 19,
        CIM_SINT64 = 20,
        CIM_UINT64 = 21,
        CIM_REAL32 = 4,
        CIM_REAL64 = 5,
        CIM_BOOLEAN = 11,
        CIM_STRING = 8,
        CIM_DATETIME = 101,
        CIM_REFERENCE = 102,
        CIM_CHAR16 = 103,
        CIM_OBJECT = 13,
        CIM_FLAG_ARRAY = 0x2000
    } CIMTYPE_ENUMERATION;
typedef
enum tag_WBEM_BACKUP_RESTORE_FLAGS
    {
        WBEM_FLAG_BACKUP_RESTORE_DEFAULT = 0,
        WBEM_FLAG_BACKUP_RESTORE_FORCE_SHUTDOWN = 1
    } WBEM_BACKUP_RESTORE_FLAGS;
typedef
enum tag_WBEM_REFRESHER_FLAGS
    {
        WBEM_FLAG_REFRESH_AUTO_RECONNECT = 0,
        WBEM_FLAG_REFRESH_NO_AUTO_RECONNECT = 1
    } WBEM_REFRESHER_FLAGS;
typedef
enum tag_WBEM_SHUTDOWN_FLAGS
    {
        WBEM_SHUTDOWN_UNLOAD_COMPONENT = 1,
        WBEM_SHUTDOWN_WMI = 2,
        WBEM_SHUTDOWN_OS = 3
    } WBEM_SHUTDOWN_FLAGS;
typedef long CIMTYPE;
typedef
enum tag_WBEMSTATUS_FORMAT
    {
        WBEMSTATUS_FORMAT_NEWLINE = 0,
        WBEMSTATUS_FORMAT_NO_NEWLINE = 1
    } WBEMSTATUS_FORMAT;
typedef
enum tag_WBEM_LIMITS
    {
        WBEM_MAX_IDENTIFIER = 0x1000,
        WBEM_MAX_QUERY = 0x4000,
        WBEM_MAX_PATH = 0x2000,
        WBEM_MAX_OBJECT_NESTING = 64,
        WBEM_MAX_USER_PROPERTIES = 1024
    } WBEM_LIMITS;
typedef
enum tag_WBEMSTATUS
    {
        WBEM_NO_ERROR = 0,
        WBEM_S_NO_ERROR = 0,
        WBEM_S_SAME = 0,
        WBEM_S_FALSE = 1,
        WBEM_S_ALREADY_EXISTS = 0x40001,
        WBEM_S_RESET_TO_DEFAULT = 0x40002,
        WBEM_S_DIFFERENT = 0x40003,
        WBEM_S_TIMEDOUT = 0x40004,
        WBEM_S_NO_MORE_DATA = 0x40005,
        WBEM_S_OPERATION_CANCELLED = 0x40006,
        WBEM_S_PENDING = 0x40007,
        WBEM_S_DUPLICATE_OBJECTS = 0x40008,
        WBEM_S_ACCESS_DENIED = 0x40009,
        WBEM_S_PARTIAL_RESULTS = 0x40010,
        WBEM_S_SOURCE_NOT_AVAILABLE = 0x40017,
        WBEM_E_FAILED = 0x80041001,
        WBEM_E_NOT_FOUND = 0x80041002,
        WBEM_E_ACCESS_DENIED = 0x80041003,
        WBEM_E_PROVIDER_FAILURE = 0x80041004,
        WBEM_E_TYPE_MISMATCH = 0x80041005,
        WBEM_E_OUT_OF_MEMORY = 0x80041006,
        WBEM_E_INVALID_CONTEXT = 0x80041007,
        WBEM_E_INVALID_PARAMETER = 0x80041008,
        WBEM_E_NOT_AVAILABLE = 0x80041009,
        WBEM_E_CRITICAL_ERROR = 0x8004100a,
        WBEM_E_INVALID_STREAM = 0x8004100b,
        WBEM_E_NOT_SUPPORTED = 0x8004100c,
        WBEM_E_INVALID_SUPERCLASS = 0x8004100d,
        WBEM_E_INVALID_NAMESPACE = 0x8004100e,
        WBEM_E_INVALID_OBJECT = 0x8004100f,
        WBEM_E_INVALID_CLASS = 0x80041010,
        WBEM_E_PROVIDER_NOT_FOUND = 0x80041011,
        WBEM_E_INVALID_PROVIDER_REGISTRATION = 0x80041012,
        WBEM_E_PROVIDER_LOAD_FAILURE = 0x80041013,
        WBEM_E_INITIALIZATION_FAILURE = 0x80041014,
        WBEM_E_TRANSPORT_FAILURE = 0x80041015,
        WBEM_E_INVALID_OPERATION = 0x80041016,
        WBEM_E_INVALID_QUERY = 0x80041017,
        WBEM_E_INVALID_QUERY_TYPE = 0x80041018,
        WBEM_E_ALREADY_EXISTS = 0x80041019,
        WBEM_E_OVERRIDE_NOT_ALLOWED = 0x8004101a,
        WBEM_E_PROPAGATED_QUALIFIER = 0x8004101b,
        WBEM_E_PROPAGATED_PROPERTY = 0x8004101c,
        WBEM_E_UNEXPECTED = 0x8004101d,
        WBEM_E_ILLEGAL_OPERATION = 0x8004101e,
        WBEM_E_CANNOT_BE_KEY = 0x8004101f,
        WBEM_E_INCOMPLETE_CLASS = 0x80041020,
        WBEM_E_INVALID_SYNTAX = 0x80041021,
        WBEM_E_NONDECORATED_OBJECT = 0x80041022,
        WBEM_E_READ_ONLY = 0x80041023,
        WBEM_E_PROVIDER_NOT_CAPABLE = 0x80041024,
        WBEM_E_CLASS_HAS_CHILDREN = 0x80041025,
        WBEM_E_CLASS_HAS_INSTANCES = 0x80041026,
        WBEM_E_QUERY_NOT_IMPLEMENTED = 0x80041027,
        WBEM_E_ILLEGAL_NULL = 0x80041028,
        WBEM_E_INVALID_QUALIFIER_TYPE = 0x80041029,
        WBEM_E_INVALID_PROPERTY_TYPE = 0x8004102a,
        WBEM_E_VALUE_OUT_OF_RANGE = 0x8004102b,
        WBEM_E_CANNOT_BE_SINGLETON = 0x8004102c,
        WBEM_E_INVALID_CIM_TYPE = 0x8004102d,
        WBEM_E_INVALID_METHOD = 0x8004102e,
        WBEM_E_INVALID_METHOD_PARAMETERS = 0x8004102f,
        WBEM_E_SYSTEM_PROPERTY = 0x80041030,
        WBEM_E_INVALID_PROPERTY = 0x80041031,
        WBEM_E_CALL_CANCELLED = 0x80041032,
        WBEM_E_SHUTTING_DOWN = 0x80041033,
        WBEM_E_PROPAGATED_METHOD = 0x80041034,
        WBEM_E_UNSUPPORTED_PARAMETER = 0x80041035,
        WBEM_E_MISSING_PARAMETER_ID = 0x80041036,
        WBEM_E_INVALID_PARAMETER_ID = 0x80041037,
        WBEM_E_NONCONSECUTIVE_PARAMETER_IDS = 0x80041038,
        WBEM_E_PARAMETER_ID_ON_RETVAL = 0x80041039,
        WBEM_E_INVALID_OBJECT_PATH = 0x8004103a,
        WBEM_E_OUT_OF_DISK_SPACE = 0x8004103b,
        WBEM_E_BUFFER_TOO_SMALL = 0x8004103c,
        WBEM_E_UNSUPPORTED_PUT_EXTENSION = 0x8004103d,
        WBEM_E_UNKNOWN_OBJECT_TYPE = 0x8004103e,
        WBEM_E_UNKNOWN_PACKET_TYPE = 0x8004103f,
        WBEM_E_MARSHAL_VERSION_MISMATCH = 0x80041040,
        WBEM_E_MARSHAL_INVALID_SIGNATURE = 0x80041041,
        WBEM_E_INVALID_QUALIFIER = 0x80041042,
        WBEM_E_INVALID_DUPLICATE_PARAMETER = 0x80041043,
        WBEM_E_TOO_MUCH_DATA = 0x80041044,
        WBEM_E_SERVER_TOO_BUSY = 0x80041045,
        WBEM_E_INVALID_FLAVOR = 0x80041046,
        WBEM_E_CIRCULAR_REFERENCE = 0x80041047,
        WBEM_E_UNSUPPORTED_CLASS_UPDATE = 0x80041048,
        WBEM_E_CANNOT_CHANGE_KEY_INHERITANCE = 0x80041049,
        WBEM_E_CANNOT_CHANGE_INDEX_INHERITANCE = 0x80041050,
        WBEM_E_TOO_MANY_PROPERTIES = 0x80041051,
        WBEM_E_UPDATE_TYPE_MISMATCH = 0x80041052,
        WBEM_E_UPDATE_OVERRIDE_NOT_ALLOWED = 0x80041053,
        WBEM_E_UPDATE_PROPAGATED_METHOD = 0x80041054,
        WBEM_E_METHOD_NOT_IMPLEMENTED = 0x80041055,
        WBEM_E_METHOD_DISABLED = 0x80041056,
        WBEM_E_REFRESHER_BUSY = 0x80041057,
        WBEM_E_UNPARSABLE_QUERY = 0x80041058,
        WBEM_E_NOT_EVENT_CLASS = 0x80041059,
        WBEM_E_MISSING_GROUP_WITHIN = 0x8004105a,
        WBEM_E_MISSING_AGGREGATION_LIST = 0x8004105b,
        WBEM_E_PROPERTY_NOT_AN_OBJECT = 0x8004105c,
        WBEM_E_AGGREGATING_BY_OBJECT = 0x8004105d,
        WBEM_E_UNINTERPRETABLE_PROVIDER_QUERY = 0x8004105f,
        WBEM_E_BACKUP_RESTORE_WINMGMT_RUNNING = 0x80041060,
        WBEM_E_QUEUE_OVERFLOW = 0x80041061,
        WBEM_E_PRIVILEGE_NOT_HELD = 0x80041062,
        WBEM_E_INVALID_OPERATOR = 0x80041063,
        WBEM_E_LOCAL_CREDENTIALS = 0x80041064,
        WBEM_E_CANNOT_BE_ABSTRACT = 0x80041065,
        WBEM_E_AMENDED_OBJECT = 0x80041066,
        WBEM_E_CLIENT_TOO_SLOW = 0x80041067,
        WBEM_E_NULL_SECURITY_DESCRIPTOR = 0x80041068,
        WBEM_E_TIMED_OUT = 0x80041069,
        WBEM_E_INVALID_ASSOCIATION = 0x8004106a,
        WBEM_E_AMBIGUOUS_OPERATION = 0x8004106b,
        WBEM_E_QUOTA_VIOLATION = 0x8004106c,
        WBEM_E_RESERVED_001 = 0x8004106d,
        WBEM_E_RESERVED_002 = 0x8004106e,
        WBEM_E_UNSUPPORTED_LOCALE = 0x8004106f,
        WBEM_E_HANDLE_OUT_OF_DATE = 0x80041070,
        WBEM_E_CONNECTION_FAILED = 0x80041071,
        WBEM_E_INVALID_HANDLE_REQUEST = 0x80041072,
        WBEM_E_PROPERTY_NAME_TOO_WIDE = 0x80041073,
        WBEM_E_CLASS_NAME_TOO_WIDE = 0x80041074,
        WBEM_E_METHOD_NAME_TOO_WIDE = 0x80041075,
        WBEM_E_QUALIFIER_NAME_TOO_WIDE = 0x80041076,
        WBEM_E_RERUN_COMMAND = 0x80041077,
        WBEM_E_DATABASE_VER_MISMATCH = 0x80041078,
        WBEM_E_VETO_DELETE = 0x80041079,
        WBEM_E_VETO_PUT = 0x8004107a,
        WBEM_E_INVALID_LOCALE = 0x80041080,
        WBEM_E_PROVIDER_SUSPENDED = 0x80041081,
        WBEM_E_SYNCHRONIZATION_REQUIRED = 0x80041082,
        WBEM_E_NO_SCHEMA = 0x80041083,
        WBEM_E_PROVIDER_ALREADY_REGISTERED = 0x80041084,
        WBEM_E_PROVIDER_NOT_REGISTERED = 0x80041085,
        WBEM_E_FATAL_TRANSPORT_ERROR = 0x80041086,
        WBEM_E_ENCRYPTED_CONNECTION_REQUIRED = 0x80041087,
        WBEM_E_PROVIDER_TIMED_OUT = 0x80041088,
        WBEM_E_NO_KEY = 0x80041089,
        WBEM_E_PROVIDER_DISABLED = 0x8004108a,
        WBEMESS_E_REGISTRATION_TOO_BROAD = 0x80042001,
        WBEMESS_E_REGISTRATION_TOO_PRECISE = 0x80042002,
        WBEMESS_E_AUTHZ_NOT_PRIVILEGED = 0x80042003,
        WBEMMOF_E_EXPECTED_QUALIFIER_NAME = 0x80044001,
        WBEMMOF_E_EXPECTED_SEMI = 0x80044002,
        WBEMMOF_E_EXPECTED_OPEN_BRACE = 0x80044003,
        WBEMMOF_E_EXPECTED_CLOSE_BRACE = 0x80044004,
        WBEMMOF_E_EXPECTED_CLOSE_BRACKET = 0x80044005,
        WBEMMOF_E_EXPECTED_CLOSE_PAREN = 0x80044006,
        WBEMMOF_E_ILLEGAL_CONSTANT_VALUE = 0x80044007,
        WBEMMOF_E_EXPECTED_TYPE_IDENTIFIER = 0x80044008,
        WBEMMOF_E_EXPECTED_OPEN_PAREN = 0x80044009,
        WBEMMOF_E_UNRECOGNIZED_TOKEN = 0x8004400a,
        WBEMMOF_E_UNRECOGNIZED_TYPE = 0x8004400b,
        WBEMMOF_E_EXPECTED_PROPERTY_NAME = 0x8004400c,
        WBEMMOF_E_TYPEDEF_NOT_SUPPORTED = 0x8004400d,
        WBEMMOF_E_UNEXPECTED_ALIAS = 0x8004400e,
        WBEMMOF_E_UNEXPECTED_ARRAY_INIT = 0x8004400f,
        WBEMMOF_E_INVALID_AMENDMENT_SYNTAX = 0x80044010,
        WBEMMOF_E_INVALID_DUPLICATE_AMENDMENT = 0x80044011,
        WBEMMOF_E_INVALID_PRAGMA = 0x80044012,
        WBEMMOF_E_INVALID_NAMESPACE_SYNTAX = 0x80044013,
        WBEMMOF_E_EXPECTED_CLASS_NAME = 0x80044014,
        WBEMMOF_E_TYPE_MISMATCH = 0x80044015,
        WBEMMOF_E_EXPECTED_ALIAS_NAME = 0x80044016,
        WBEMMOF_E_INVALID_CLASS_DECLARATION = 0x80044017,
        WBEMMOF_E_INVALID_INSTANCE_DECLARATION = 0x80044018,
        WBEMMOF_E_EXPECTED_DOLLAR = 0x80044019,
        WBEMMOF_E_CIMTYPE_QUALIFIER = 0x8004401a,
        WBEMMOF_E_DUPLICATE_PROPERTY = 0x8004401b,
        WBEMMOF_E_INVALID_NAMESPACE_SPECIFICATION = 0x8004401c,
        WBEMMOF_E_OUT_OF_RANGE = 0x8004401d,
        WBEMMOF_E_INVALID_FILE = 0x8004401e,
        WBEMMOF_E_ALIASES_IN_EMBEDDED = 0x8004401f,
        WBEMMOF_E_NULL_ARRAY_ELEM = 0x80044020,
        WBEMMOF_E_DUPLICATE_QUALIFIER = 0x80044021,
        WBEMMOF_E_EXPECTED_FLAVOR_TYPE = 0x80044022,
        WBEMMOF_E_INCOMPATIBLE_FLAVOR_TYPES = 0x80044023,
        WBEMMOF_E_MULTIPLE_ALIASES = 0x80044024,
        WBEMMOF_E_INCOMPATIBLE_FLAVOR_TYPES2 = 0x80044025,
        WBEMMOF_E_NO_ARRAYS_RETURNED = 0x80044026,
        WBEMMOF_E_MUST_BE_IN_OR_OUT = 0x80044027,
        WBEMMOF_E_INVALID_FLAGS_SYNTAX = 0x80044028,
        WBEMMOF_E_EXPECTED_BRACE_OR_BAD_TYPE = 0x80044029,
        WBEMMOF_E_UNSUPPORTED_CIMV22_QUAL_VALUE = 0x8004402a,
        WBEMMOF_E_UNSUPPORTED_CIMV22_DATA_TYPE = 0x8004402b,
        WBEMMOF_E_INVALID_DELETEINSTANCE_SYNTAX = 0x8004402c,
        WBEMMOF_E_INVALID_QUALIFIER_SYNTAX = 0x8004402d,
        WBEMMOF_E_QUALIFIER_USED_OUTSIDE_SCOPE = 0x8004402e,
        WBEMMOF_E_ERROR_CREATING_TEMP_FILE = 0x8004402f,
        WBEMMOF_E_ERROR_INVALID_INCLUDE_FILE = 0x80044030,
        WBEMMOF_E_INVALID_DELETECLASS_SYNTAX = 0x80044031
    } WBEMSTATUS;
EXTERN_C const IID LIBID_WbemClient_v1;
EXTERN_C const IID IID_IWbemClassObject;
    typedef struct IWbemClassObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemClassObject * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemClassObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemClassObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetQualifierSet )(
            IWbemClassObject * This,
                        IWbemQualifierSet **ppQualSet);
        HRESULT ( STDMETHODCALLTYPE *Get )(
            IWbemClassObject * This,
                               LPCWSTR wszName,
                       long lFlags,
                                    VARIANT *pVal,
                                    CIMTYPE *pType,
                                    long *plFlavor);
        HRESULT ( STDMETHODCALLTYPE *Put )(
            IWbemClassObject * This,
                               LPCWSTR wszName,
                       long lFlags,
                       VARIANT *pVal,
                       CIMTYPE Type);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            IWbemClassObject * This,
                               LPCWSTR wszName);
        HRESULT ( STDMETHODCALLTYPE *GetNames )(
            IWbemClassObject * This,
                               LPCWSTR wszQualifierName,
                       long lFlags,
                       VARIANT *pQualifierVal,
                        SAFEARRAY * *pNames);
        HRESULT ( STDMETHODCALLTYPE *BeginEnumeration )(
            IWbemClassObject * This,
                       long lEnumFlags);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IWbemClassObject * This,
                       long lFlags,
                                    BSTR *strName,
                                    VARIANT *pVal,
                                    CIMTYPE *pType,
                                    long *plFlavor);
        HRESULT ( STDMETHODCALLTYPE *EndEnumeration )(
            IWbemClassObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyQualifierSet )(
            IWbemClassObject * This,
                               LPCWSTR wszProperty,
                        IWbemQualifierSet **ppQualSet);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IWbemClassObject * This,
                        IWbemClassObject **ppCopy);
        HRESULT ( STDMETHODCALLTYPE *GetObjectText )(
            IWbemClassObject * This,
                       long lFlags,
                        BSTR *pstrObjectText);
        HRESULT ( STDMETHODCALLTYPE *SpawnDerivedClass )(
            IWbemClassObject * This,
                       long lFlags,
                        IWbemClassObject **ppNewClass);
        HRESULT ( STDMETHODCALLTYPE *SpawnInstance )(
            IWbemClassObject * This,
                       long lFlags,
                        IWbemClassObject **ppNewInstance);
        HRESULT ( STDMETHODCALLTYPE *CompareTo )(
            IWbemClassObject * This,
                       long lFlags,
                       IWbemClassObject *pCompareTo);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyOrigin )(
            IWbemClassObject * This,
                               LPCWSTR wszName,
                        BSTR *pstrClassName);
        HRESULT ( STDMETHODCALLTYPE *InheritsFrom )(
            IWbemClassObject * This,
                       LPCWSTR strAncestor);
        HRESULT ( STDMETHODCALLTYPE *GetMethod )(
            IWbemClassObject * This,
                               LPCWSTR wszName,
                       long lFlags,
                        IWbemClassObject **ppInSignature,
                        IWbemClassObject **ppOutSignature);
        HRESULT ( STDMETHODCALLTYPE *PutMethod )(
            IWbemClassObject * This,
                               LPCWSTR wszName,
                       long lFlags,
                       IWbemClassObject *pInSignature,
                       IWbemClassObject *pOutSignature);
        HRESULT ( STDMETHODCALLTYPE *DeleteMethod )(
            IWbemClassObject * This,
                               LPCWSTR wszName);
        HRESULT ( STDMETHODCALLTYPE *BeginMethodEnumeration )(
            IWbemClassObject * This,
                       long lEnumFlags);
        HRESULT ( STDMETHODCALLTYPE *NextMethod )(
            IWbemClassObject * This,
                       long lFlags,
                                    BSTR *pstrName,
                                    IWbemClassObject **ppInSignature,
                                    IWbemClassObject **ppOutSignature);
        HRESULT ( STDMETHODCALLTYPE *EndMethodEnumeration )(
            IWbemClassObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetMethodQualifierSet )(
            IWbemClassObject * This,
                               LPCWSTR wszMethod,
                        IWbemQualifierSet **ppQualSet);
        HRESULT ( STDMETHODCALLTYPE *GetMethodOrigin )(
            IWbemClassObject * This,
                               LPCWSTR wszMethodName,
                        BSTR *pstrClassName);
        END_INTERFACE
    } IWbemClassObjectVtbl;
    interface IWbemClassObject
    {
        CONST_VTBL struct IWbemClassObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetQualifierSet(This,ppQualSet) )
    ( (This)->lpVtbl -> Get(This,wszName,lFlags,pVal,pType,plFlavor) )
    ( (This)->lpVtbl -> Put(This,wszName,lFlags,pVal,Type) )
    ( (This)->lpVtbl -> Delete(This,wszName) )
    ( (This)->lpVtbl -> GetNames(This,wszQualifierName,lFlags,pQualifierVal,pNames) )
    ( (This)->lpVtbl -> BeginEnumeration(This,lEnumFlags) )
    ( (This)->lpVtbl -> Next(This,lFlags,strName,pVal,pType,plFlavor) )
    ( (This)->lpVtbl -> EndEnumeration(This) )
    ( (This)->lpVtbl -> GetPropertyQualifierSet(This,wszProperty,ppQualSet) )
    ( (This)->lpVtbl -> Clone(This,ppCopy) )
    ( (This)->lpVtbl -> GetObjectText(This,lFlags,pstrObjectText) )
    ( (This)->lpVtbl -> SpawnDerivedClass(This,lFlags,ppNewClass) )
    ( (This)->lpVtbl -> SpawnInstance(This,lFlags,ppNewInstance) )
    ( (This)->lpVtbl -> CompareTo(This,lFlags,pCompareTo) )
    ( (This)->lpVtbl -> GetPropertyOrigin(This,wszName,pstrClassName) )
    ( (This)->lpVtbl -> InheritsFrom(This,strAncestor) )
    ( (This)->lpVtbl -> GetMethod(This,wszName,lFlags,ppInSignature,ppOutSignature) )
    ( (This)->lpVtbl -> PutMethod(This,wszName,lFlags,pInSignature,pOutSignature) )
    ( (This)->lpVtbl -> DeleteMethod(This,wszName) )
    ( (This)->lpVtbl -> BeginMethodEnumeration(This,lEnumFlags) )
    ( (This)->lpVtbl -> NextMethod(This,lFlags,pstrName,ppInSignature,ppOutSignature) )
    ( (This)->lpVtbl -> EndMethodEnumeration(This) )
    ( (This)->lpVtbl -> GetMethodQualifierSet(This,wszMethod,ppQualSet) )
    ( (This)->lpVtbl -> GetMethodOrigin(This,wszMethodName,pstrClassName) )
EXTERN_C const IID IID_IWbemObjectAccess;
    typedef struct IWbemObjectAccessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemObjectAccess * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemObjectAccess * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemObjectAccess * This);
        HRESULT ( STDMETHODCALLTYPE *GetQualifierSet )(
            IWbemObjectAccess * This,
                        IWbemQualifierSet **ppQualSet);
        HRESULT ( STDMETHODCALLTYPE *Get )(
            IWbemObjectAccess * This,
                               LPCWSTR wszName,
                       long lFlags,
                                    VARIANT *pVal,
                                    CIMTYPE *pType,
                                    long *plFlavor);
        HRESULT ( STDMETHODCALLTYPE *Put )(
            IWbemObjectAccess * This,
                               LPCWSTR wszName,
                       long lFlags,
                       VARIANT *pVal,
                       CIMTYPE Type);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            IWbemObjectAccess * This,
                               LPCWSTR wszName);
        HRESULT ( STDMETHODCALLTYPE *GetNames )(
            IWbemObjectAccess * This,
                               LPCWSTR wszQualifierName,
                       long lFlags,
                       VARIANT *pQualifierVal,
                        SAFEARRAY * *pNames);
        HRESULT ( STDMETHODCALLTYPE *BeginEnumeration )(
            IWbemObjectAccess * This,
                       long lEnumFlags);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IWbemObjectAccess * This,
                       long lFlags,
                                    BSTR *strName,
                                    VARIANT *pVal,
                                    CIMTYPE *pType,
                                    long *plFlavor);
        HRESULT ( STDMETHODCALLTYPE *EndEnumeration )(
            IWbemObjectAccess * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyQualifierSet )(
            IWbemObjectAccess * This,
                               LPCWSTR wszProperty,
                        IWbemQualifierSet **ppQualSet);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IWbemObjectAccess * This,
                        IWbemClassObject **ppCopy);
        HRESULT ( STDMETHODCALLTYPE *GetObjectText )(
            IWbemObjectAccess * This,
                       long lFlags,
                        BSTR *pstrObjectText);
        HRESULT ( STDMETHODCALLTYPE *SpawnDerivedClass )(
            IWbemObjectAccess * This,
                       long lFlags,
                        IWbemClassObject **ppNewClass);
        HRESULT ( STDMETHODCALLTYPE *SpawnInstance )(
            IWbemObjectAccess * This,
                       long lFlags,
                        IWbemClassObject **ppNewInstance);
        HRESULT ( STDMETHODCALLTYPE *CompareTo )(
            IWbemObjectAccess * This,
                       long lFlags,
                       IWbemClassObject *pCompareTo);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyOrigin )(
            IWbemObjectAccess * This,
                               LPCWSTR wszName,
                        BSTR *pstrClassName);
        HRESULT ( STDMETHODCALLTYPE *InheritsFrom )(
            IWbemObjectAccess * This,
                       LPCWSTR strAncestor);
        HRESULT ( STDMETHODCALLTYPE *GetMethod )(
            IWbemObjectAccess * This,
                               LPCWSTR wszName,
                       long lFlags,
                        IWbemClassObject **ppInSignature,
                        IWbemClassObject **ppOutSignature);
        HRESULT ( STDMETHODCALLTYPE *PutMethod )(
            IWbemObjectAccess * This,
                               LPCWSTR wszName,
                       long lFlags,
                       IWbemClassObject *pInSignature,
                       IWbemClassObject *pOutSignature);
        HRESULT ( STDMETHODCALLTYPE *DeleteMethod )(
            IWbemObjectAccess * This,
                               LPCWSTR wszName);
        HRESULT ( STDMETHODCALLTYPE *BeginMethodEnumeration )(
            IWbemObjectAccess * This,
                       long lEnumFlags);
        HRESULT ( STDMETHODCALLTYPE *NextMethod )(
            IWbemObjectAccess * This,
                       long lFlags,
                                    BSTR *pstrName,
                                    IWbemClassObject **ppInSignature,
                                    IWbemClassObject **ppOutSignature);
        HRESULT ( STDMETHODCALLTYPE *EndMethodEnumeration )(
            IWbemObjectAccess * This);
        HRESULT ( STDMETHODCALLTYPE *GetMethodQualifierSet )(
            IWbemObjectAccess * This,
                               LPCWSTR wszMethod,
                        IWbemQualifierSet **ppQualSet);
        HRESULT ( STDMETHODCALLTYPE *GetMethodOrigin )(
            IWbemObjectAccess * This,
                               LPCWSTR wszMethodName,
                        BSTR *pstrClassName);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyHandle )(
            IWbemObjectAccess * This,
                               LPCWSTR wszPropertyName,
                        CIMTYPE *pType,
                        long *plHandle);
        HRESULT ( STDMETHODCALLTYPE *WritePropertyValue )(
            IWbemObjectAccess * This,
                       long lHandle,
                       long lNumBytes,
                                const byte *aData);
        HRESULT ( STDMETHODCALLTYPE *ReadPropertyValue )(
            IWbemObjectAccess * This,
                       long lHandle,
                       long lBufferSize,
                        long *plNumBytes,
                                            byte *aData);
        HRESULT ( STDMETHODCALLTYPE *ReadDWORD )(
            IWbemObjectAccess * This,
                       long lHandle,
                        DWORD *pdw);
        HRESULT ( STDMETHODCALLTYPE *WriteDWORD )(
            IWbemObjectAccess * This,
                       long lHandle,
                       DWORD dw);
        HRESULT ( STDMETHODCALLTYPE *ReadQWORD )(
            IWbemObjectAccess * This,
                       long lHandle,
                        unsigned __int64 *pqw);
        HRESULT ( STDMETHODCALLTYPE *WriteQWORD )(
            IWbemObjectAccess * This,
                       long lHandle,
                       unsigned __int64 pw);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyInfoByHandle )(
            IWbemObjectAccess * This,
                       long lHandle,
                        BSTR *pstrName,
                        CIMTYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *Lock )(
            IWbemObjectAccess * This,
                       long lFlags);
        HRESULT ( STDMETHODCALLTYPE *Unlock )(
            IWbemObjectAccess * This,
                       long lFlags);
        END_INTERFACE
    } IWbemObjectAccessVtbl;
    interface IWbemObjectAccess
    {
        CONST_VTBL struct IWbemObjectAccessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetQualifierSet(This,ppQualSet) )
    ( (This)->lpVtbl -> Get(This,wszName,lFlags,pVal,pType,plFlavor) )
    ( (This)->lpVtbl -> Put(This,wszName,lFlags,pVal,Type) )
    ( (This)->lpVtbl -> Delete(This,wszName) )
    ( (This)->lpVtbl -> GetNames(This,wszQualifierName,lFlags,pQualifierVal,pNames) )
    ( (This)->lpVtbl -> BeginEnumeration(This,lEnumFlags) )
    ( (This)->lpVtbl -> Next(This,lFlags,strName,pVal,pType,plFlavor) )
    ( (This)->lpVtbl -> EndEnumeration(This) )
    ( (This)->lpVtbl -> GetPropertyQualifierSet(This,wszProperty,ppQualSet) )
    ( (This)->lpVtbl -> Clone(This,ppCopy) )
    ( (This)->lpVtbl -> GetObjectText(This,lFlags,pstrObjectText) )
    ( (This)->lpVtbl -> SpawnDerivedClass(This,lFlags,ppNewClass) )
    ( (This)->lpVtbl -> SpawnInstance(This,lFlags,ppNewInstance) )
    ( (This)->lpVtbl -> CompareTo(This,lFlags,pCompareTo) )
    ( (This)->lpVtbl -> GetPropertyOrigin(This,wszName,pstrClassName) )
    ( (This)->lpVtbl -> InheritsFrom(This,strAncestor) )
    ( (This)->lpVtbl -> GetMethod(This,wszName,lFlags,ppInSignature,ppOutSignature) )
    ( (This)->lpVtbl -> PutMethod(This,wszName,lFlags,pInSignature,pOutSignature) )
    ( (This)->lpVtbl -> DeleteMethod(This,wszName) )
    ( (This)->lpVtbl -> BeginMethodEnumeration(This,lEnumFlags) )
    ( (This)->lpVtbl -> NextMethod(This,lFlags,pstrName,ppInSignature,ppOutSignature) )
    ( (This)->lpVtbl -> EndMethodEnumeration(This) )
    ( (This)->lpVtbl -> GetMethodQualifierSet(This,wszMethod,ppQualSet) )
    ( (This)->lpVtbl -> GetMethodOrigin(This,wszMethodName,pstrClassName) )
    ( (This)->lpVtbl -> GetPropertyHandle(This,wszPropertyName,pType,plHandle) )
    ( (This)->lpVtbl -> WritePropertyValue(This,lHandle,lNumBytes,aData) )
    ( (This)->lpVtbl -> ReadPropertyValue(This,lHandle,lBufferSize,plNumBytes,aData) )
    ( (This)->lpVtbl -> ReadDWORD(This,lHandle,pdw) )
    ( (This)->lpVtbl -> WriteDWORD(This,lHandle,dw) )
    ( (This)->lpVtbl -> ReadQWORD(This,lHandle,pqw) )
    ( (This)->lpVtbl -> WriteQWORD(This,lHandle,pw) )
    ( (This)->lpVtbl -> GetPropertyInfoByHandle(This,lHandle,pstrName,pType) )
    ( (This)->lpVtbl -> Lock(This,lFlags) )
    ( (This)->lpVtbl -> Unlock(This,lFlags) )
EXTERN_C const IID IID_IWbemQualifierSet;
    typedef struct IWbemQualifierSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemQualifierSet * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemQualifierSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemQualifierSet * This);
        HRESULT ( STDMETHODCALLTYPE *Get )(
            IWbemQualifierSet * This,
                               LPCWSTR wszName,
                       long lFlags,
                                    VARIANT *pVal,
                                    long *plFlavor);
        HRESULT ( STDMETHODCALLTYPE *Put )(
            IWbemQualifierSet * This,
                               LPCWSTR wszName,
                       VARIANT *pVal,
                       long lFlavor);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            IWbemQualifierSet * This,
                               LPCWSTR wszName);
        HRESULT ( STDMETHODCALLTYPE *GetNames )(
            IWbemQualifierSet * This,
                       long lFlags,
                        SAFEARRAY * *pNames);
        HRESULT ( STDMETHODCALLTYPE *BeginEnumeration )(
            IWbemQualifierSet * This,
                       long lFlags);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IWbemQualifierSet * This,
                       long lFlags,
                                    BSTR *pstrName,
                                    VARIANT *pVal,
                                    long *plFlavor);
        HRESULT ( STDMETHODCALLTYPE *EndEnumeration )(
            IWbemQualifierSet * This);
        END_INTERFACE
    } IWbemQualifierSetVtbl;
    interface IWbemQualifierSet
    {
        CONST_VTBL struct IWbemQualifierSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Get(This,wszName,lFlags,pVal,plFlavor) )
    ( (This)->lpVtbl -> Put(This,wszName,pVal,lFlavor) )
    ( (This)->lpVtbl -> Delete(This,wszName) )
    ( (This)->lpVtbl -> GetNames(This,lFlags,pNames) )
    ( (This)->lpVtbl -> BeginEnumeration(This,lFlags) )
    ( (This)->lpVtbl -> Next(This,lFlags,pstrName,pVal,plFlavor) )
    ( (This)->lpVtbl -> EndEnumeration(This) )
EXTERN_C const IID IID_IWbemServices;
    typedef struct IWbemServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemServices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemServices * This);
        HRESULT ( STDMETHODCALLTYPE *OpenNamespace )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strNamespace,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                                    __RPC__deref_opt_inout_opt IWbemServices **ppWorkingNamespace,
                                    __RPC__deref_opt_inout_opt IWbemCallResult **ppResult);
        HRESULT ( STDMETHODCALLTYPE *CancelAsyncCall )(
            __RPC__in IWbemServices * This,
                       __RPC__in_opt IWbemObjectSink *pSink);
        HRESULT ( STDMETHODCALLTYPE *QueryObjectSink )(
            __RPC__in IWbemServices * This,
                       long lFlags,
                        __RPC__deref_out_opt IWbemObjectSink **ppResponseHandler);
        HRESULT ( STDMETHODCALLTYPE *GetObject )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strObjectPath,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                                    __RPC__deref_opt_inout_opt IWbemClassObject **ppObject,
                                    __RPC__deref_opt_inout_opt IWbemCallResult **ppCallResult);
        HRESULT ( STDMETHODCALLTYPE *GetObjectAsync )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strObjectPath,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                       __RPC__in_opt IWbemObjectSink *pResponseHandler);
        HRESULT ( STDMETHODCALLTYPE *PutClass )(
            __RPC__in IWbemServices * This,
                       __RPC__in_opt IWbemClassObject *pObject,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                                    __RPC__deref_opt_inout_opt IWbemCallResult **ppCallResult);
        HRESULT ( STDMETHODCALLTYPE *PutClassAsync )(
            __RPC__in IWbemServices * This,
                       __RPC__in_opt IWbemClassObject *pObject,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                       __RPC__in_opt IWbemObjectSink *pResponseHandler);
        HRESULT ( STDMETHODCALLTYPE *DeleteClass )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strClass,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                                    __RPC__deref_opt_inout_opt IWbemCallResult **ppCallResult);
        HRESULT ( STDMETHODCALLTYPE *DeleteClassAsync )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strClass,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                       __RPC__in_opt IWbemObjectSink *pResponseHandler);
        HRESULT ( STDMETHODCALLTYPE *CreateClassEnum )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strSuperclass,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                        __RPC__deref_out_opt IEnumWbemClassObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *CreateClassEnumAsync )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strSuperclass,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                       __RPC__in_opt IWbemObjectSink *pResponseHandler);
        HRESULT ( STDMETHODCALLTYPE *PutInstance )(
            __RPC__in IWbemServices * This,
                       __RPC__in_opt IWbemClassObject *pInst,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                                    __RPC__deref_opt_inout_opt IWbemCallResult **ppCallResult);
        HRESULT ( STDMETHODCALLTYPE *PutInstanceAsync )(
            __RPC__in IWbemServices * This,
                       __RPC__in_opt IWbemClassObject *pInst,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                       __RPC__in_opt IWbemObjectSink *pResponseHandler);
        HRESULT ( STDMETHODCALLTYPE *DeleteInstance )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strObjectPath,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                                    __RPC__deref_opt_inout_opt IWbemCallResult **ppCallResult);
        HRESULT ( STDMETHODCALLTYPE *DeleteInstanceAsync )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strObjectPath,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                       __RPC__in_opt IWbemObjectSink *pResponseHandler);
        HRESULT ( STDMETHODCALLTYPE *CreateInstanceEnum )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strFilter,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                        __RPC__deref_out_opt IEnumWbemClassObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *CreateInstanceEnumAsync )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strFilter,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                       __RPC__in_opt IWbemObjectSink *pResponseHandler);
        HRESULT ( STDMETHODCALLTYPE *ExecQuery )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strQueryLanguage,
                       __RPC__in const BSTR strQuery,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                        __RPC__deref_out_opt IEnumWbemClassObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *ExecQueryAsync )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strQueryLanguage,
                       __RPC__in const BSTR strQuery,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                       __RPC__in_opt IWbemObjectSink *pResponseHandler);
        HRESULT ( STDMETHODCALLTYPE *ExecNotificationQuery )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strQueryLanguage,
                       __RPC__in const BSTR strQuery,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                        __RPC__deref_out_opt IEnumWbemClassObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *ExecNotificationQueryAsync )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strQueryLanguage,
                       __RPC__in const BSTR strQuery,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                       __RPC__in_opt IWbemObjectSink *pResponseHandler);
        HRESULT ( STDMETHODCALLTYPE *ExecMethod )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strObjectPath,
                       __RPC__in const BSTR strMethodName,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                       __RPC__in_opt IWbemClassObject *pInParams,
                                    __RPC__deref_opt_inout_opt IWbemClassObject **ppOutParams,
                                    __RPC__deref_opt_inout_opt IWbemCallResult **ppCallResult);
        HRESULT ( STDMETHODCALLTYPE *ExecMethodAsync )(
            __RPC__in IWbemServices * This,
                       __RPC__in const BSTR strObjectPath,
                       __RPC__in const BSTR strMethodName,
                       long lFlags,
                       __RPC__in_opt IWbemContext *pCtx,
                       __RPC__in_opt IWbemClassObject *pInParams,
                       __RPC__in_opt IWbemObjectSink *pResponseHandler);
        END_INTERFACE
    } IWbemServicesVtbl;
    interface IWbemServices
    {
        CONST_VTBL struct IWbemServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OpenNamespace(This,strNamespace,lFlags,pCtx,ppWorkingNamespace,ppResult) )
    ( (This)->lpVtbl -> CancelAsyncCall(This,pSink) )
    ( (This)->lpVtbl -> QueryObjectSink(This,lFlags,ppResponseHandler) )
    ( (This)->lpVtbl -> GetObject(This,strObjectPath,lFlags,pCtx,ppObject,ppCallResult) )
    ( (This)->lpVtbl -> GetObjectAsync(This,strObjectPath,lFlags,pCtx,pResponseHandler) )
    ( (This)->lpVtbl -> PutClass(This,pObject,lFlags,pCtx,ppCallResult) )
    ( (This)->lpVtbl -> PutClassAsync(This,pObject,lFlags,pCtx,pResponseHandler) )
    ( (This)->lpVtbl -> DeleteClass(This,strClass,lFlags,pCtx,ppCallResult) )
    ( (This)->lpVtbl -> DeleteClassAsync(This,strClass,lFlags,pCtx,pResponseHandler) )
    ( (This)->lpVtbl -> CreateClassEnum(This,strSuperclass,lFlags,pCtx,ppEnum) )
    ( (This)->lpVtbl -> CreateClassEnumAsync(This,strSuperclass,lFlags,pCtx,pResponseHandler) )
    ( (This)->lpVtbl -> PutInstance(This,pInst,lFlags,pCtx,ppCallResult) )
    ( (This)->lpVtbl -> PutInstanceAsync(This,pInst,lFlags,pCtx,pResponseHandler) )
    ( (This)->lpVtbl -> DeleteInstance(This,strObjectPath,lFlags,pCtx,ppCallResult) )
    ( (This)->lpVtbl -> DeleteInstanceAsync(This,strObjectPath,lFlags,pCtx,pResponseHandler) )
    ( (This)->lpVtbl -> CreateInstanceEnum(This,strFilter,lFlags,pCtx,ppEnum) )
    ( (This)->lpVtbl -> CreateInstanceEnumAsync(This,strFilter,lFlags,pCtx,pResponseHandler) )
    ( (This)->lpVtbl -> ExecQuery(This,strQueryLanguage,strQuery,lFlags,pCtx,ppEnum) )
    ( (This)->lpVtbl -> ExecQueryAsync(This,strQueryLanguage,strQuery,lFlags,pCtx,pResponseHandler) )
    ( (This)->lpVtbl -> ExecNotificationQuery(This,strQueryLanguage,strQuery,lFlags,pCtx,ppEnum) )
    ( (This)->lpVtbl -> ExecNotificationQueryAsync(This,strQueryLanguage,strQuery,lFlags,pCtx,pResponseHandler) )
    ( (This)->lpVtbl -> ExecMethod(This,strObjectPath,strMethodName,lFlags,pCtx,pInParams,ppOutParams,ppCallResult) )
    ( (This)->lpVtbl -> ExecMethodAsync(This,strObjectPath,strMethodName,lFlags,pCtx,pInParams,pResponseHandler) )
EXTERN_C const IID IID_IWbemLocator;
    typedef struct IWbemLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemLocator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemLocator * This);
        HRESULT ( STDMETHODCALLTYPE *ConnectServer )(
            IWbemLocator * This,
                       const BSTR strNetworkResource,
                       const BSTR strUser,
                       const BSTR strPassword,
                       const BSTR strLocale,
                       long lSecurityFlags,
                       const BSTR strAuthority,
                       IWbemContext *pCtx,
                        IWbemServices **ppNamespace);
        END_INTERFACE
    } IWbemLocatorVtbl;
    interface IWbemLocator
    {
        CONST_VTBL struct IWbemLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConnectServer(This,strNetworkResource,strUser,strPassword,strLocale,lSecurityFlags,strAuthority,pCtx,ppNamespace) )
EXTERN_C const IID IID_IWbemObjectSink;
    typedef struct IWbemObjectSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemObjectSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemObjectSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemObjectSink * This);
        HRESULT ( STDMETHODCALLTYPE *Indicate )(
            __RPC__in IWbemObjectSink * This,
                       long lObjectCount,
                                __RPC__in_ecount_full(lObjectCount) IWbemClassObject **apObjArray);
        HRESULT ( STDMETHODCALLTYPE *SetStatus )(
            __RPC__in IWbemObjectSink * This,
                       long lFlags,
                       HRESULT hResult,
                               __RPC__in_opt BSTR strParam,
                               __RPC__in_opt IWbemClassObject *pObjParam);
        END_INTERFACE
    } IWbemObjectSinkVtbl;
    interface IWbemObjectSink
    {
        CONST_VTBL struct IWbemObjectSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Indicate(This,lObjectCount,apObjArray) )
    ( (This)->lpVtbl -> SetStatus(This,lFlags,hResult,strParam,pObjParam) )
EXTERN_C const IID IID_IEnumWbemClassObject;
    typedef struct IEnumWbemClassObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumWbemClassObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumWbemClassObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumWbemClassObject * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumWbemClassObject * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumWbemClassObject * This,
                       long lTimeout,
                       ULONG uCount,
                                            __RPC__out_ecount_part(uCount, *puReturned) IWbemClassObject **apObjects,
                        __RPC__out ULONG *puReturned);
        HRESULT ( STDMETHODCALLTYPE *NextAsync )(
            __RPC__in IEnumWbemClassObject * This,
                       ULONG uCount,
                       __RPC__in_opt IWbemObjectSink *pSink);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumWbemClassObject * This,
                        __RPC__deref_out_opt IEnumWbemClassObject **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumWbemClassObject * This,
                       long lTimeout,
                       ULONG nCount);
        END_INTERFACE
    } IEnumWbemClassObjectVtbl;
    interface IEnumWbemClassObject
    {
        CONST_VTBL struct IEnumWbemClassObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Next(This,lTimeout,uCount,apObjects,puReturned) )
    ( (This)->lpVtbl -> NextAsync(This,uCount,pSink) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Skip(This,lTimeout,nCount) )
EXTERN_C const IID IID_IWbemCallResult;
    typedef struct IWbemCallResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemCallResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemCallResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemCallResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetResultObject )(
            __RPC__in IWbemCallResult * This,
                       long lTimeout,
                        __RPC__deref_out_opt IWbemClassObject **ppResultObject);
        HRESULT ( STDMETHODCALLTYPE *GetResultString )(
            __RPC__in IWbemCallResult * This,
                       long lTimeout,
                        __RPC__deref_out_opt BSTR *pstrResultString);
        HRESULT ( STDMETHODCALLTYPE *GetResultServices )(
            __RPC__in IWbemCallResult * This,
                       long lTimeout,
                        __RPC__deref_out_opt IWbemServices **ppServices);
        HRESULT ( STDMETHODCALLTYPE *GetCallStatus )(
            __RPC__in IWbemCallResult * This,
                       long lTimeout,
                        __RPC__out long *plStatus);
        END_INTERFACE
    } IWbemCallResultVtbl;
    interface IWbemCallResult
    {
        CONST_VTBL struct IWbemCallResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetResultObject(This,lTimeout,ppResultObject) )
    ( (This)->lpVtbl -> GetResultString(This,lTimeout,pstrResultString) )
    ( (This)->lpVtbl -> GetResultServices(This,lTimeout,ppServices) )
    ( (This)->lpVtbl -> GetCallStatus(This,lTimeout,plStatus) )
EXTERN_C const IID IID_IWbemContext;
    typedef struct IWbemContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemContext * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemContext * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IWbemContext * This,
                        IWbemContext **ppNewCopy);
        HRESULT ( STDMETHODCALLTYPE *GetNames )(
            IWbemContext * This,
                       long lFlags,
                        SAFEARRAY * *pNames);
        HRESULT ( STDMETHODCALLTYPE *BeginEnumeration )(
            IWbemContext * This,
                       long lFlags);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IWbemContext * This,
                       long lFlags,
                        BSTR *pstrName,
                        VARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *EndEnumeration )(
            IWbemContext * This);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            IWbemContext * This,
                               LPCWSTR wszName,
                       long lFlags,
                       VARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            IWbemContext * This,
                               LPCWSTR wszName,
                       long lFlags,
                        VARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *DeleteValue )(
            IWbemContext * This,
                               LPCWSTR wszName,
                       long lFlags);
        HRESULT ( STDMETHODCALLTYPE *DeleteAll )(
            IWbemContext * This);
        END_INTERFACE
    } IWbemContextVtbl;
    interface IWbemContext
    {
        CONST_VTBL struct IWbemContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppNewCopy) )
    ( (This)->lpVtbl -> GetNames(This,lFlags,pNames) )
    ( (This)->lpVtbl -> BeginEnumeration(This,lFlags) )
    ( (This)->lpVtbl -> Next(This,lFlags,pstrName,pValue) )
    ( (This)->lpVtbl -> EndEnumeration(This) )
    ( (This)->lpVtbl -> SetValue(This,wszName,lFlags,pValue) )
    ( (This)->lpVtbl -> GetValue(This,wszName,lFlags,pValue) )
    ( (This)->lpVtbl -> DeleteValue(This,wszName,lFlags) )
    ( (This)->lpVtbl -> DeleteAll(This) )
EXTERN_C const IID IID_IUnsecuredApartment;
    typedef struct IUnsecuredApartmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUnsecuredApartment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUnsecuredApartment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUnsecuredApartment * This);
        HRESULT ( STDMETHODCALLTYPE *CreateObjectStub )(
            __RPC__in IUnsecuredApartment * This,
                       __RPC__in_opt IUnknown *pObject,
                        __RPC__deref_out_opt IUnknown **ppStub);
        END_INTERFACE
    } IUnsecuredApartmentVtbl;
    interface IUnsecuredApartment
    {
        CONST_VTBL struct IUnsecuredApartmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateObjectStub(This,pObject,ppStub) )
EXTERN_C const IID IID_IWbemUnsecuredApartment;
    typedef struct IWbemUnsecuredApartmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemUnsecuredApartment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemUnsecuredApartment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemUnsecuredApartment * This);
        HRESULT ( STDMETHODCALLTYPE *CreateObjectStub )(
            __RPC__in IWbemUnsecuredApartment * This,
                       __RPC__in_opt IUnknown *pObject,
                        __RPC__deref_out_opt IUnknown **ppStub);
        HRESULT ( STDMETHODCALLTYPE *CreateSinkStub )(
            __RPC__in IWbemUnsecuredApartment * This,
                       __RPC__in_opt IWbemObjectSink *pSink,
                       DWORD dwFlags,
                               __RPC__in_opt LPCWSTR wszReserved,
                        __RPC__deref_out_opt IWbemObjectSink **ppStub);
        END_INTERFACE
    } IWbemUnsecuredApartmentVtbl;
    interface IWbemUnsecuredApartment
    {
        CONST_VTBL struct IWbemUnsecuredApartmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateObjectStub(This,pObject,ppStub) )
    ( (This)->lpVtbl -> CreateSinkStub(This,pSink,dwFlags,wszReserved,ppStub) )
EXTERN_C const IID IID_IWbemStatusCodeText;
    typedef struct IWbemStatusCodeTextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemStatusCodeText * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemStatusCodeText * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemStatusCodeText * This);
        HRESULT ( STDMETHODCALLTYPE *GetErrorCodeText )(
            IWbemStatusCodeText * This,
                       HRESULT hRes,
                       LCID LocaleId,
                       long lFlags,
                        BSTR *MessageText);
        HRESULT ( STDMETHODCALLTYPE *GetFacilityCodeText )(
            IWbemStatusCodeText * This,
                       HRESULT hRes,
                       LCID LocaleId,
                       long lFlags,
                        BSTR *MessageText);
        END_INTERFACE
    } IWbemStatusCodeTextVtbl;
    interface IWbemStatusCodeText
    {
        CONST_VTBL struct IWbemStatusCodeTextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetErrorCodeText(This,hRes,LocaleId,lFlags,MessageText) )
    ( (This)->lpVtbl -> GetFacilityCodeText(This,hRes,LocaleId,lFlags,MessageText) )
EXTERN_C const IID IID_IWbemBackupRestore;
    typedef struct IWbemBackupRestoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemBackupRestore * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemBackupRestore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemBackupRestore * This);
        HRESULT ( STDMETHODCALLTYPE *Backup )(
            __RPC__in IWbemBackupRestore * This,
                               __RPC__in_string LPCWSTR strBackupToFile,
                       long lFlags);
        HRESULT ( STDMETHODCALLTYPE *Restore )(
            __RPC__in IWbemBackupRestore * This,
                               __RPC__in_string LPCWSTR strRestoreFromFile,
                       long lFlags);
        END_INTERFACE
    } IWbemBackupRestoreVtbl;
    interface IWbemBackupRestore
    {
        CONST_VTBL struct IWbemBackupRestoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Backup(This,strBackupToFile,lFlags) )
    ( (This)->lpVtbl -> Restore(This,strRestoreFromFile,lFlags) )
EXTERN_C const IID IID_IWbemBackupRestoreEx;
    typedef struct IWbemBackupRestoreExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemBackupRestoreEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemBackupRestoreEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemBackupRestoreEx * This);
        HRESULT ( STDMETHODCALLTYPE *Backup )(
            __RPC__in IWbemBackupRestoreEx * This,
                               __RPC__in_string LPCWSTR strBackupToFile,
                       long lFlags);
        HRESULT ( STDMETHODCALLTYPE *Restore )(
            __RPC__in IWbemBackupRestoreEx * This,
                               __RPC__in_string LPCWSTR strRestoreFromFile,
                       long lFlags);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IWbemBackupRestoreEx * This);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IWbemBackupRestoreEx * This);
        END_INTERFACE
    } IWbemBackupRestoreExVtbl;
    interface IWbemBackupRestoreEx
    {
        CONST_VTBL struct IWbemBackupRestoreExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Backup(This,strBackupToFile,lFlags) )
    ( (This)->lpVtbl -> Restore(This,strRestoreFromFile,lFlags) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
EXTERN_C const IID IID_IWbemRefresher;
    typedef struct IWbemRefresherVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemRefresher * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemRefresher * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemRefresher * This);
        HRESULT ( STDMETHODCALLTYPE *Refresh )(
            IWbemRefresher * This,
                       long lFlags);
        END_INTERFACE
    } IWbemRefresherVtbl;
    interface IWbemRefresher
    {
        CONST_VTBL struct IWbemRefresherVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Refresh(This,lFlags) )
EXTERN_C const IID IID_IWbemHiPerfEnum;
    typedef struct IWbemHiPerfEnumVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemHiPerfEnum * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemHiPerfEnum * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemHiPerfEnum * This);
        HRESULT ( STDMETHODCALLTYPE *AddObjects )(
            IWbemHiPerfEnum * This,
                       long lFlags,
                       ULONG uNumObjects,
                                long *apIds,
                                IWbemObjectAccess **apObj);
        HRESULT ( STDMETHODCALLTYPE *RemoveObjects )(
            IWbemHiPerfEnum * This,
                       long lFlags,
                       ULONG uNumObjects,
                                long *apIds);
        HRESULT ( STDMETHODCALLTYPE *GetObjects )(
            IWbemHiPerfEnum * This,
                       long lFlags,
                       ULONG uNumObjects,
                                            IWbemObjectAccess **apObj,
                        ULONG *puReturned);
        HRESULT ( STDMETHODCALLTYPE *RemoveAll )(
            IWbemHiPerfEnum * This,
                       long lFlags);
        END_INTERFACE
    } IWbemHiPerfEnumVtbl;
    interface IWbemHiPerfEnum
    {
        CONST_VTBL struct IWbemHiPerfEnumVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddObjects(This,lFlags,uNumObjects,apIds,apObj) )
    ( (This)->lpVtbl -> RemoveObjects(This,lFlags,uNumObjects,apIds) )
    ( (This)->lpVtbl -> GetObjects(This,lFlags,uNumObjects,apObj,puReturned) )
    ( (This)->lpVtbl -> RemoveAll(This,lFlags) )
EXTERN_C const IID IID_IWbemConfigureRefresher;
    typedef struct IWbemConfigureRefresherVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemConfigureRefresher * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemConfigureRefresher * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemConfigureRefresher * This);
        HRESULT ( STDMETHODCALLTYPE *AddObjectByPath )(
            IWbemConfigureRefresher * This,
                       IWbemServices *pNamespace,
                               LPCWSTR wszPath,
                       long lFlags,
                       IWbemContext *pContext,
                        IWbemClassObject **ppRefreshable,
                                    long *plId);
        HRESULT ( STDMETHODCALLTYPE *AddObjectByTemplate )(
            IWbemConfigureRefresher * This,
                       IWbemServices *pNamespace,
                       IWbemClassObject *pTemplate,
                       long lFlags,
                       IWbemContext *pContext,
                        IWbemClassObject **ppRefreshable,
                                    long *plId);
        HRESULT ( STDMETHODCALLTYPE *AddRefresher )(
            IWbemConfigureRefresher * This,
                       IWbemRefresher *pRefresher,
                       long lFlags,
                                    long *plId);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            IWbemConfigureRefresher * This,
                       long lId,
                       long lFlags);
        HRESULT ( STDMETHODCALLTYPE *AddEnum )(
            IWbemConfigureRefresher * This,
                       IWbemServices *pNamespace,
                               LPCWSTR wszClassName,
                       long lFlags,
                       IWbemContext *pContext,
                        IWbemHiPerfEnum **ppEnum,
                                    long *plId);
        END_INTERFACE
    } IWbemConfigureRefresherVtbl;
    interface IWbemConfigureRefresher
    {
        CONST_VTBL struct IWbemConfigureRefresherVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddObjectByPath(This,pNamespace,wszPath,lFlags,pContext,ppRefreshable,plId) )
    ( (This)->lpVtbl -> AddObjectByTemplate(This,pNamespace,pTemplate,lFlags,pContext,ppRefreshable,plId) )
    ( (This)->lpVtbl -> AddRefresher(This,pRefresher,lFlags,plId) )
    ( (This)->lpVtbl -> Remove(This,lId,lFlags) )
    ( (This)->lpVtbl -> AddEnum(This,pNamespace,wszClassName,lFlags,pContext,ppEnum,plId) )
EXTERN_C const CLSID CLSID_WbemLocator;
class DECLSPEC_UUID("4590f811-1d3a-11d0-891f-00aa004b2e24")
WbemLocator;
EXTERN_C const CLSID CLSID_WbemContext;
class DECLSPEC_UUID("674B6698-EE92-11d0-AD71-00C04FD8FDFF")
WbemContext;
EXTERN_C const CLSID CLSID_UnsecuredApartment;
class DECLSPEC_UUID("49bd2028-1523-11d1-ad79-00c04fd8fdff")
UnsecuredApartment;
EXTERN_C const CLSID CLSID_WbemClassObject;
class DECLSPEC_UUID("9A653086-174F-11d2-B5F9-00104B703EFD")
WbemClassObject;
EXTERN_C const CLSID CLSID_MofCompiler;
class DECLSPEC_UUID("6daf9757-2e37-11d2-aec9-00c04fb68820")
MofCompiler;
EXTERN_C const CLSID CLSID_WbemStatusCodeText;
class DECLSPEC_UUID("eb87e1bd-3233-11d2-aec9-00c04fb68820")
WbemStatusCodeText;
EXTERN_C const CLSID CLSID_WbemBackupRestore;
class DECLSPEC_UUID("C49E32C6-BC8B-11d2-85D4-00105A1F8304")
WbemBackupRestore;
EXTERN_C const CLSID CLSID_WbemRefresher;
class DECLSPEC_UUID("c71566f2-561e-11d1-ad87-00c04fd8fdff")
WbemRefresher;
EXTERN_C const CLSID CLSID_WbemObjectTextSrc;
class DECLSPEC_UUID("8D1C559D-84F0-4bb3-A7D5-56A7435A9BA6")
WbemObjectTextSrc;
extern RPC_IF_HANDLE __MIDL_itf_wbemcli_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemcli_0000_0001_v0_0_s_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemcli_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemcli_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IWbemObjectSinkEx;
    typedef struct IWbemObjectSinkExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemObjectSinkEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemObjectSinkEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemObjectSinkEx * This);
        HRESULT ( STDMETHODCALLTYPE *Indicate )(
            __RPC__in IWbemObjectSinkEx * This,
                       long lObjectCount,
                                __RPC__in_ecount_full(lObjectCount) IWbemClassObject **apObjArray);
        HRESULT ( STDMETHODCALLTYPE *SetStatus )(
            __RPC__in IWbemObjectSinkEx * This,
                       long lFlags,
                       HRESULT hResult,
                               __RPC__in_opt BSTR strParam,
                               __RPC__in_opt IWbemClassObject *pObjParam);
        HRESULT ( STDMETHODCALLTYPE *WriteMessage )(
            __RPC__in IWbemObjectSinkEx * This,
                       ULONG uChannel,
                       __RPC__in const BSTR strMessage);
        HRESULT ( STDMETHODCALLTYPE *WriteError )(
            __RPC__in IWbemObjectSinkEx * This,
                               __RPC__in_opt IWbemClassObject *pObjError,
                        __RPC__out unsigned char *puReturned);
        HRESULT ( STDMETHODCALLTYPE *PromptUser )(
            __RPC__in IWbemObjectSinkEx * This,
                       __RPC__in const BSTR strMessage,
                       unsigned char uPromptType,
                        __RPC__out unsigned char *puReturned);
        HRESULT ( STDMETHODCALLTYPE *WriteProgress )(
            __RPC__in IWbemObjectSinkEx * This,
                       __RPC__in const BSTR strActivity,
                       __RPC__in const BSTR strCurrentOperation,
                       __RPC__in const BSTR strStatusDescription,
                       ULONG uPercentComplete,
                       ULONG uSecondsRemaining);
        HRESULT ( STDMETHODCALLTYPE *WriteStreamParameter )(
            __RPC__in IWbemObjectSinkEx * This,
                       __RPC__in const BSTR strName,
                       __RPC__in VARIANT *vtValue,
                       ULONG ulType,
                       ULONG ulFlags);
        END_INTERFACE
    } IWbemObjectSinkExVtbl;
    interface IWbemObjectSinkEx
    {
        CONST_VTBL struct IWbemObjectSinkExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Indicate(This,lObjectCount,apObjArray) )
    ( (This)->lpVtbl -> SetStatus(This,lFlags,hResult,strParam,pObjParam) )
    ( (This)->lpVtbl -> WriteMessage(This,uChannel,strMessage) )
    ( (This)->lpVtbl -> WriteError(This,pObjError,puReturned) )
    ( (This)->lpVtbl -> PromptUser(This,strMessage,uPromptType,puReturned) )
    ( (This)->lpVtbl -> WriteProgress(This,strActivity,strCurrentOperation,strStatusDescription,uPercentComplete,uSecondsRemaining) )
    ( (This)->lpVtbl -> WriteStreamParameter(This,strName,vtValue,ulType,ulFlags) )
EXTERN_C const IID IID_IWbemShutdown;
    typedef struct IWbemShutdownVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemShutdown * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemShutdown * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemShutdown * This);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in IWbemShutdown * This,
                       LONG uReason,
                       ULONG uMaxMilliseconds,
                       __RPC__in_opt IWbemContext *pCtx);
        END_INTERFACE
    } IWbemShutdownVtbl;
    interface IWbemShutdown
    {
        CONST_VTBL struct IWbemShutdownVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Shutdown(This,uReason,uMaxMilliseconds,pCtx) )
typedef
enum tag_WMI_OBJ_TEXT
    {
        WMI_OBJ_TEXT_CIM_DTD_2_0 = 1,
        WMI_OBJ_TEXT_WMI_DTD_2_0 = 2,
        WMI_OBJ_TEXT_WMI_EXT1 = 3,
        WMI_OBJ_TEXT_WMI_EXT2 = 4,
        WMI_OBJ_TEXT_WMI_EXT3 = 5,
        WMI_OBJ_TEXT_WMI_EXT4 = 6,
        WMI_OBJ_TEXT_WMI_EXT5 = 7,
        WMI_OBJ_TEXT_WMI_EXT6 = 8,
        WMI_OBJ_TEXT_WMI_EXT7 = 9,
        WMI_OBJ_TEXT_WMI_EXT8 = 10,
        WMI_OBJ_TEXT_WMI_EXT9 = 11,
        WMI_OBJ_TEXT_WMI_EXT10 = 12,
        WMI_OBJ_TEXT_LAST = 13
    } WMI_OBJ_TEXT;
extern RPC_IF_HANDLE __MIDL_itf_wbemcli_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemcli_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_IWbemObjectTextSrc;
    typedef struct IWbemObjectTextSrcVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemObjectTextSrc * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemObjectTextSrc * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemObjectTextSrc * This);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            IWbemObjectTextSrc * This,
                       long lFlags,
                       IWbemClassObject *pObj,
                       ULONG uObjTextFormat,
                       IWbemContext *pCtx,
                        BSTR *strText);
        HRESULT ( STDMETHODCALLTYPE *CreateFromText )(
            IWbemObjectTextSrc * This,
                       long lFlags,
                       BSTR strText,
                       ULONG uObjTextFormat,
                       IWbemContext *pCtx,
                        IWbemClassObject **pNewObj);
        END_INTERFACE
    } IWbemObjectTextSrcVtbl;
    interface IWbemObjectTextSrc
    {
        CONST_VTBL struct IWbemObjectTextSrcVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetText(This,lFlags,pObj,uObjTextFormat,pCtx,strText) )
    ( (This)->lpVtbl -> CreateFromText(This,lFlags,strText,uObjTextFormat,pCtx,pNewObj) )
typedef struct tag_CompileStatusInfo
    {
    long lPhaseError;
    HRESULT hRes;
    long ObjectNum;
    long FirstLine;
    long LastLine;
    DWORD dwOutFlags;
    } WBEM_COMPILE_STATUS_INFO;
typedef
enum tag_WBEM_COMPILER_OPTIONS
    {
        WBEM_FLAG_CHECK_ONLY = 0x1,
        WBEM_FLAG_AUTORECOVER = 0x2,
        WBEM_FLAG_WMI_CHECK = 0x4,
        WBEM_FLAG_CONSOLE_PRINT = 0x8,
        WBEM_FLAG_DONT_ADD_TO_LIST = 0x10,
        WBEM_FLAG_SPLIT_FILES = 0x20,
        WBEM_FLAG_STORE_FILE = 0x100
    } WBEM_COMPILER_OPTIONS;
typedef
enum tag_WBEM_CONNECT_OPTIONS
    {
        WBEM_FLAG_CONNECT_REPOSITORY_ONLY = 0x40,
        WBEM_FLAG_CONNECT_USE_MAX_WAIT = 0x80,
        WBEM_FLAG_CONNECT_PROVIDERS = 0x100
    } WBEM_CONNECT_OPTIONS;
extern RPC_IF_HANDLE __MIDL_itf_wbemcli_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemcli_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_IMofCompiler;
    typedef struct IMofCompilerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMofCompiler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMofCompiler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMofCompiler * This);
        HRESULT ( STDMETHODCALLTYPE *CompileFile )(
            IMofCompiler * This,
            _In_ LPWSTR FileName,
            _In_ LPWSTR ServerAndNamespace,
            _In_ LPWSTR User,
            _In_ LPWSTR Authority,
            _In_ LPWSTR Password,
            _In_ LONG lOptionFlags,
            _In_ LONG lClassFlags,
            _In_ LONG lInstanceFlags,
            _Inout_ WBEM_COMPILE_STATUS_INFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *CompileBuffer )(
            IMofCompiler * This,
            _In_ long BuffSize,
            _In_reads_bytes_(BuffSize) BYTE *pBuffer,
            _In_ LPWSTR ServerAndNamespace,
            _In_ LPWSTR User,
            _In_ LPWSTR Authority,
            _In_ LPWSTR Password,
            _In_ LONG lOptionFlags,
            _In_ LONG lClassFlags,
            _In_ LONG lInstanceFlags,
            _Inout_ WBEM_COMPILE_STATUS_INFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *CreateBMOF )(
            IMofCompiler * This,
            _In_ LPWSTR TextFileName,
            _In_ LPWSTR BMOFFileName,
            _In_ LPWSTR ServerAndNamespace,
            _In_ LONG lOptionFlags,
            _In_ LONG lClassFlags,
            _In_ LONG lInstanceFlags,
            _Inout_ WBEM_COMPILE_STATUS_INFO *pInfo);
        END_INTERFACE
    } IMofCompilerVtbl;
    interface IMofCompiler
    {
        CONST_VTBL struct IMofCompilerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CompileFile(This,FileName,ServerAndNamespace,User,Authority,Password,lOptionFlags,lClassFlags,lInstanceFlags,pInfo) )
    ( (This)->lpVtbl -> CompileBuffer(This,BuffSize,pBuffer,ServerAndNamespace,User,Authority,Password,lOptionFlags,lClassFlags,lInstanceFlags,pInfo) )
    ( (This)->lpVtbl -> CreateBMOF(This,TextFileName,BMOFFileName,ServerAndNamespace,lOptionFlags,lClassFlags,lInstanceFlags,pInfo) )
typedef
enum tag_WBEM_UNSECAPP_FLAG_TYPE
    {
        WBEM_FLAG_UNSECAPP_DEFAULT_CHECK_ACCESS = 0,
        WBEM_FLAG_UNSECAPP_CHECK_ACCESS = 1,
        WBEM_FLAG_UNSECAPP_DONT_CHECK_ACCESS = 2
    } WBEM_UNSECAPP_FLAG_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_wbemcli_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemcli_0000_0015_v0_0_s_ifspec;
typedef
enum tag_WBEM_INFORMATION_FLAG_TYPE
    {
        WBEM_FLAG_SHORT_NAME = 0x1,
        WBEM_FLAG_LONG_NAME = 0x2
    } WBEM_INFORMATION_FLAG_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_wbemcli_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemcli_0000_0016_v0_0_s_ifspec;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wbemcli_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemcli_0000_0022_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
