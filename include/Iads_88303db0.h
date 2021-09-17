#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IADs IADs;
typedef interface IADsContainer IADsContainer;
typedef interface IADsCollection IADsCollection;
typedef interface IADsMembers IADsMembers;
typedef interface IADsPropertyList IADsPropertyList;
typedef interface IADsPropertyEntry IADsPropertyEntry;
typedef class PropertyEntry PropertyEntry;
typedef interface IADsPropertyValue IADsPropertyValue;
typedef interface IADsPropertyValue2 IADsPropertyValue2;
typedef class PropertyValue PropertyValue;
typedef interface IPrivateDispatch IPrivateDispatch;
typedef interface IPrivateUnknown IPrivateUnknown;
typedef interface IADsExtension IADsExtension;
typedef interface IADsDeleteOps IADsDeleteOps;
typedef interface IADsNamespaces IADsNamespaces;
typedef interface IADsClass IADsClass;
typedef interface IADsProperty IADsProperty;
typedef interface IADsSyntax IADsSyntax;
typedef interface IADsLocality IADsLocality;
typedef interface IADsO IADsO;
typedef interface IADsOU IADsOU;
typedef interface IADsDomain IADsDomain;
typedef interface IADsComputer IADsComputer;
typedef interface IADsComputerOperations IADsComputerOperations;
typedef interface IADsGroup IADsGroup;
typedef interface IADsUser IADsUser;
typedef interface IADsPrintQueue IADsPrintQueue;
typedef interface IADsPrintQueueOperations IADsPrintQueueOperations;
typedef interface IADsPrintJob IADsPrintJob;
typedef interface IADsPrintJobOperations IADsPrintJobOperations;
typedef interface IADsService IADsService;
typedef interface IADsServiceOperations IADsServiceOperations;
typedef interface IADsFileService IADsFileService;
typedef interface IADsFileServiceOperations IADsFileServiceOperations;
typedef interface IADsFileShare IADsFileShare;
typedef interface IADsSession IADsSession;
typedef interface IADsResource IADsResource;
typedef interface IADsOpenDSObject IADsOpenDSObject;
typedef interface IDirectoryObject IDirectoryObject;
typedef interface IDirectorySearch IDirectorySearch;
typedef interface IDirectorySchemaMgmt IDirectorySchemaMgmt;
typedef interface IADsAggregatee IADsAggregatee;
typedef interface IADsAggregator IADsAggregator;
typedef interface IADsAccessControlEntry IADsAccessControlEntry;
typedef class AccessControlEntry AccessControlEntry;
typedef interface IADsAccessControlList IADsAccessControlList;
typedef class AccessControlList AccessControlList;
typedef interface IADsSecurityDescriptor IADsSecurityDescriptor;
typedef class SecurityDescriptor SecurityDescriptor;
typedef interface IADsLargeInteger IADsLargeInteger;
typedef class LargeInteger LargeInteger;
typedef interface IADsNameTranslate IADsNameTranslate;
typedef class NameTranslate NameTranslate;
typedef interface IADsCaseIgnoreList IADsCaseIgnoreList;
typedef class CaseIgnoreList CaseIgnoreList;
typedef interface IADsFaxNumber IADsFaxNumber;
typedef class FaxNumber FaxNumber;
typedef interface IADsNetAddress IADsNetAddress;
typedef class NetAddress NetAddress;
typedef interface IADsOctetList IADsOctetList;
typedef class OctetList OctetList;
typedef interface IADsEmail IADsEmail;
typedef class Email Email;
typedef interface IADsPath IADsPath;
typedef class Path Path;
typedef interface IADsReplicaPointer IADsReplicaPointer;
typedef class ReplicaPointer ReplicaPointer;
typedef interface IADsAcl IADsAcl;
typedef interface IADsTimestamp IADsTimestamp;
typedef class Timestamp Timestamp;
typedef interface IADsPostalAddress IADsPostalAddress;
typedef class PostalAddress PostalAddress;
typedef interface IADsBackLink IADsBackLink;
typedef class BackLink BackLink;
typedef interface IADsTypedName IADsTypedName;
typedef class TypedName TypedName;
typedef interface IADsHold IADsHold;
typedef class Hold Hold;
typedef interface IADsObjectOptions IADsObjectOptions;
typedef interface IADsPathname IADsPathname;
typedef class Pathname Pathname;
typedef interface IADsADSystemInfo IADsADSystemInfo;
typedef class ADSystemInfo ADSystemInfo;
typedef interface IADsWinNTSystemInfo IADsWinNTSystemInfo;
typedef class WinNTSystemInfo WinNTSystemInfo;
typedef interface IADsDNWithBinary IADsDNWithBinary;
typedef class DNWithBinary DNWithBinary;
typedef interface IADsDNWithString IADsDNWithString;
typedef class DNWithString DNWithString;
typedef interface IADsSecurityUtility IADsSecurityUtility;
typedef class ADsSecurityUtility ADsSecurityUtility;
extern "C"{
       
#pragma warning(push)
#pragma warning(disable:4668)
       
#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
       
       
#pragma warning(pop)
typedef
enum __MIDL___MIDL_itf_ads_0000_0000_0001
    {
        ADSTYPE_INVALID = 0,
        ADSTYPE_DN_STRING = ( ADSTYPE_INVALID + 1 ) ,
        ADSTYPE_CASE_EXACT_STRING = ( ADSTYPE_DN_STRING + 1 ) ,
        ADSTYPE_CASE_IGNORE_STRING = ( ADSTYPE_CASE_EXACT_STRING + 1 ) ,
        ADSTYPE_PRINTABLE_STRING = ( ADSTYPE_CASE_IGNORE_STRING + 1 ) ,
        ADSTYPE_NUMERIC_STRING = ( ADSTYPE_PRINTABLE_STRING + 1 ) ,
        ADSTYPE_BOOLEAN = ( ADSTYPE_NUMERIC_STRING + 1 ) ,
        ADSTYPE_INTEGER = ( ADSTYPE_BOOLEAN + 1 ) ,
        ADSTYPE_OCTET_STRING = ( ADSTYPE_INTEGER + 1 ) ,
        ADSTYPE_UTC_TIME = ( ADSTYPE_OCTET_STRING + 1 ) ,
        ADSTYPE_LARGE_INTEGER = ( ADSTYPE_UTC_TIME + 1 ) ,
        ADSTYPE_PROV_SPECIFIC = ( ADSTYPE_LARGE_INTEGER + 1 ) ,
        ADSTYPE_OBJECT_CLASS = ( ADSTYPE_PROV_SPECIFIC + 1 ) ,
        ADSTYPE_CASEIGNORE_LIST = ( ADSTYPE_OBJECT_CLASS + 1 ) ,
        ADSTYPE_OCTET_LIST = ( ADSTYPE_CASEIGNORE_LIST + 1 ) ,
        ADSTYPE_PATH = ( ADSTYPE_OCTET_LIST + 1 ) ,
        ADSTYPE_POSTALADDRESS = ( ADSTYPE_PATH + 1 ) ,
        ADSTYPE_TIMESTAMP = ( ADSTYPE_POSTALADDRESS + 1 ) ,
        ADSTYPE_BACKLINK = ( ADSTYPE_TIMESTAMP + 1 ) ,
        ADSTYPE_TYPEDNAME = ( ADSTYPE_BACKLINK + 1 ) ,
        ADSTYPE_HOLD = ( ADSTYPE_TYPEDNAME + 1 ) ,
        ADSTYPE_NETADDRESS = ( ADSTYPE_HOLD + 1 ) ,
        ADSTYPE_REPLICAPOINTER = ( ADSTYPE_NETADDRESS + 1 ) ,
        ADSTYPE_FAXNUMBER = ( ADSTYPE_REPLICAPOINTER + 1 ) ,
        ADSTYPE_EMAIL = ( ADSTYPE_FAXNUMBER + 1 ) ,
        ADSTYPE_NT_SECURITY_DESCRIPTOR = ( ADSTYPE_EMAIL + 1 ) ,
        ADSTYPE_UNKNOWN = ( ADSTYPE_NT_SECURITY_DESCRIPTOR + 1 ) ,
        ADSTYPE_DN_WITH_BINARY = ( ADSTYPE_UNKNOWN + 1 ) ,
        ADSTYPE_DN_WITH_STRING = ( ADSTYPE_DN_WITH_BINARY + 1 )
    } ADSTYPEENUM;
typedef ADSTYPEENUM ADSTYPE;
typedef unsigned char BYTE;
typedef unsigned char *LPBYTE;
typedef unsigned char *PBYTE;
typedef LPWSTR ADS_DN_STRING;
typedef LPWSTR *PADS_DN_STRING;
typedef LPWSTR ADS_CASE_EXACT_STRING;
typedef LPWSTR *PADS_CASE_EXACT_STRING;
typedef LPWSTR ADS_CASE_IGNORE_STRING;
typedef LPWSTR *PADS_CASE_IGNORE_STRING;
typedef LPWSTR ADS_PRINTABLE_STRING;
typedef LPWSTR *PADS_PRINTABLE_STRING;
typedef LPWSTR ADS_NUMERIC_STRING;
typedef LPWSTR *PADS_NUMERIC_STRING;
typedef DWORD ADS_BOOLEAN;
typedef DWORD *LPNDS_BOOLEAN;
typedef DWORD ADS_INTEGER;
typedef DWORD *PADS_INTEGER;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0002
    {
    DWORD dwLength;
    LPBYTE lpValue;
    } ADS_OCTET_STRING;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0002 *PADS_OCTET_STRING;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0003
    {
    DWORD dwLength;
    LPBYTE lpValue;
    } ADS_NT_SECURITY_DESCRIPTOR;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0003 *PADS_NT_SECURITY_DESCRIPTOR;
typedef SYSTEMTIME ADS_UTC_TIME;
typedef SYSTEMTIME *PADS_UTC_TIME;
typedef LARGE_INTEGER ADS_LARGE_INTEGER;
typedef LARGE_INTEGER *PADS_LARGE_INTEGER;
typedef LPWSTR ADS_OBJECT_CLASS;
typedef LPWSTR *PADS_OBJECT_CLASS;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0004
    {
    DWORD dwLength;
    LPBYTE lpValue;
    } ADS_PROV_SPECIFIC;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0004 *PADS_PROV_SPECIFIC;
typedef struct _ADS_CASEIGNORE_LIST
    {
    struct _ADS_CASEIGNORE_LIST *Next;
    LPWSTR String;
    } ADS_CASEIGNORE_LIST;
typedef struct _ADS_CASEIGNORE_LIST *PADS_CASEIGNORE_LIST;
typedef struct _ADS_OCTET_LIST
    {
    struct _ADS_OCTET_LIST *Next;
    DWORD Length;
    BYTE *Data;
    } ADS_OCTET_LIST;
typedef struct _ADS_OCTET_LIST *PADS_OCTET_LIST;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0005
    {
    DWORD Type;
    LPWSTR VolumeName;
    LPWSTR Path;
    } ADS_PATH;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0005 *PADS_PATH;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0006
    {
    LPWSTR PostalAddress[ 6 ];
    } ADS_POSTALADDRESS;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0006 *PADS_POSTALADDRESS;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0007
    {
    DWORD WholeSeconds;
    DWORD EventID;
    } ADS_TIMESTAMP;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0007 *PADS_TIMESTAMP;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0008
    {
    DWORD RemoteID;
    LPWSTR ObjectName;
    } ADS_BACKLINK;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0008 *PADS_BACKLINK;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0009
    {
    LPWSTR ObjectName;
    DWORD Level;
    DWORD Interval;
    } ADS_TYPEDNAME;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0009 *PADS_TYPEDNAME;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0010
    {
    LPWSTR ObjectName;
    DWORD Amount;
    } ADS_HOLD;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0010 *PADS_HOLD;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0011
    {
    DWORD AddressType;
    DWORD AddressLength;
    BYTE *Address;
    } ADS_NETADDRESS;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0011 *PADS_NETADDRESS;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0012
    {
    LPWSTR ServerName;
    DWORD ReplicaType;
    DWORD ReplicaNumber;
    DWORD Count;
    PADS_NETADDRESS ReplicaAddressHints;
    } ADS_REPLICAPOINTER;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0012 *PADS_REPLICAPOINTER;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0013
    {
    LPWSTR TelephoneNumber;
    DWORD NumberOfBits;
    LPBYTE Parameters;
    } ADS_FAXNUMBER;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0013 *PADS_FAXNUMBER;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0014
    {
    LPWSTR Address;
    DWORD Type;
    } ADS_EMAIL;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0014 *PADS_EMAIL;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0015
    {
    DWORD dwLength;
    LPBYTE lpBinaryValue;
    LPWSTR pszDNString;
    } ADS_DN_WITH_BINARY;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0015 *PADS_DN_WITH_BINARY;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0016
    {
    LPWSTR pszStringValue;
    LPWSTR pszDNString;
    } ADS_DN_WITH_STRING;
typedef struct __MIDL___MIDL_itf_ads_0000_0000_0016 *PADS_DN_WITH_STRING;
typedef struct _adsvalue
    {
    ADSTYPE dwType;
    union
        {
        ADS_DN_STRING DNString;
        ADS_CASE_EXACT_STRING CaseExactString;
        ADS_CASE_IGNORE_STRING CaseIgnoreString;
        ADS_PRINTABLE_STRING PrintableString;
        ADS_NUMERIC_STRING NumericString;
        ADS_BOOLEAN Boolean;
        ADS_INTEGER Integer;
        ADS_OCTET_STRING OctetString;
        ADS_UTC_TIME UTCTime;
        ADS_LARGE_INTEGER LargeInteger;
        ADS_OBJECT_CLASS ClassName;
        ADS_PROV_SPECIFIC ProviderSpecific;
        PADS_CASEIGNORE_LIST pCaseIgnoreList;
        PADS_OCTET_LIST pOctetList;
        PADS_PATH pPath;
        PADS_POSTALADDRESS pPostalAddress;
        ADS_TIMESTAMP Timestamp;
        ADS_BACKLINK BackLink;
        PADS_TYPEDNAME pTypedName;
        ADS_HOLD Hold;
        PADS_NETADDRESS pNetAddress;
        PADS_REPLICAPOINTER pReplicaPointer;
        PADS_FAXNUMBER pFaxNumber;
        ADS_EMAIL Email;
        ADS_NT_SECURITY_DESCRIPTOR SecurityDescriptor;
        PADS_DN_WITH_BINARY pDNWithBinary;
        PADS_DN_WITH_STRING pDNWithString;
        } ;
    } ADSVALUE;
typedef struct _adsvalue *PADSVALUE;
typedef struct _adsvalue *LPADSVALUE;
typedef struct _ads_attr_info
    {
    LPWSTR pszAttrName;
    DWORD dwControlCode;
    ADSTYPE dwADsType;
    PADSVALUE pADsValues;
    DWORD dwNumValues;
    } ADS_ATTR_INFO;
typedef struct _ads_attr_info *PADS_ATTR_INFO;
typedef
enum __MIDL___MIDL_itf_ads_0000_0000_0018
    {
        ADS_SECURE_AUTHENTICATION = 0x1,
        ADS_USE_ENCRYPTION = 0x2,
        ADS_USE_SSL = 0x2,
        ADS_READONLY_SERVER = 0x4,
        ADS_PROMPT_CREDENTIALS = 0x8,
        ADS_NO_AUTHENTICATION = 0x10,
        ADS_FAST_BIND = 0x20,
        ADS_USE_SIGNING = 0x40,
        ADS_USE_SEALING = 0x80,
        ADS_USE_DELEGATION = 0x100,
        ADS_SERVER_BIND = 0x200,
        ADS_NO_REFERRAL_CHASING = 0x400,
        ADS_AUTH_RESERVED = 0x80000000
    } ADS_AUTHENTICATION_ENUM;
typedef struct _ads_object_info
    {
    LPWSTR pszRDN;
    LPWSTR pszObjectDN;
    LPWSTR pszParentDN;
    LPWSTR pszSchemaDN;
    LPWSTR pszClassName;
    } ADS_OBJECT_INFO;
typedef struct _ads_object_info *PADS_OBJECT_INFO;
typedef
enum __MIDL___MIDL_itf_ads_0000_0000_0019
    {
        ADS_STATUS_S_OK = 0,
        ADS_STATUS_INVALID_SEARCHPREF = ( ADS_STATUS_S_OK + 1 ) ,
        ADS_STATUS_INVALID_SEARCHPREFVALUE = ( ADS_STATUS_INVALID_SEARCHPREF + 1 )
    } ADS_STATUSENUM;
typedef ADS_STATUSENUM ADS_STATUS;
typedef ADS_STATUSENUM *PADS_STATUS;
typedef
enum __MIDL___MIDL_itf_ads_0000_0000_0020
    {
        ADS_DEREF_NEVER = 0,
        ADS_DEREF_SEARCHING = 1,
        ADS_DEREF_FINDING = 2,
        ADS_DEREF_ALWAYS = 3
    } ADS_DEREFENUM;
typedef
enum __MIDL___MIDL_itf_ads_0000_0000_0021
    {
        ADS_SCOPE_BASE = 0,
        ADS_SCOPE_ONELEVEL = 1,
        ADS_SCOPE_SUBTREE = 2
    } ADS_SCOPEENUM;
typedef
enum __MIDL___MIDL_itf_ads_0000_0000_0022
    {
        ADSIPROP_ASYNCHRONOUS = 0,
        ADSIPROP_DEREF_ALIASES = 0x1,
        ADSIPROP_SIZE_LIMIT = 0x2,
        ADSIPROP_TIME_LIMIT = 0x3,
        ADSIPROP_ATTRIBTYPES_ONLY = 0x4,
        ADSIPROP_SEARCH_SCOPE = 0x5,
        ADSIPROP_TIMEOUT = 0x6,
        ADSIPROP_PAGESIZE = 0x7,
        ADSIPROP_PAGED_TIME_LIMIT = 0x8,
        ADSIPROP_CHASE_REFERRALS = 0x9,
        ADSIPROP_SORT_ON = 0xa,
        ADSIPROP_CACHE_RESULTS = 0xb,
        ADSIPROP_ADSIFLAG = 0xc
    } ADS_PREFERENCES_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0000_0000_0023
    {
        ADSI_DIALECT_LDAP = 0,
        ADSI_DIALECT_SQL = 0x1
    } ADSI_DIALECT_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0000_0000_0024
    {
        ADS_CHASE_REFERRALS_NEVER = 0,
        ADS_CHASE_REFERRALS_SUBORDINATE = 0x20,
        ADS_CHASE_REFERRALS_EXTERNAL = 0x40,
        ADS_CHASE_REFERRALS_ALWAYS = ( ADS_CHASE_REFERRALS_SUBORDINATE | ADS_CHASE_REFERRALS_EXTERNAL )
    } ADS_CHASE_REFERRALS_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0000_0000_0025
    {
        ADS_SEARCHPREF_ASYNCHRONOUS = 0,
        ADS_SEARCHPREF_DEREF_ALIASES = ( ADS_SEARCHPREF_ASYNCHRONOUS + 1 ) ,
        ADS_SEARCHPREF_SIZE_LIMIT = ( ADS_SEARCHPREF_DEREF_ALIASES + 1 ) ,
        ADS_SEARCHPREF_TIME_LIMIT = ( ADS_SEARCHPREF_SIZE_LIMIT + 1 ) ,
        ADS_SEARCHPREF_ATTRIBTYPES_ONLY = ( ADS_SEARCHPREF_TIME_LIMIT + 1 ) ,
        ADS_SEARCHPREF_SEARCH_SCOPE = ( ADS_SEARCHPREF_ATTRIBTYPES_ONLY + 1 ) ,
        ADS_SEARCHPREF_TIMEOUT = ( ADS_SEARCHPREF_SEARCH_SCOPE + 1 ) ,
        ADS_SEARCHPREF_PAGESIZE = ( ADS_SEARCHPREF_TIMEOUT + 1 ) ,
        ADS_SEARCHPREF_PAGED_TIME_LIMIT = ( ADS_SEARCHPREF_PAGESIZE + 1 ) ,
        ADS_SEARCHPREF_CHASE_REFERRALS = ( ADS_SEARCHPREF_PAGED_TIME_LIMIT + 1 ) ,
        ADS_SEARCHPREF_SORT_ON = ( ADS_SEARCHPREF_CHASE_REFERRALS + 1 ) ,
        ADS_SEARCHPREF_CACHE_RESULTS = ( ADS_SEARCHPREF_SORT_ON + 1 ) ,
        ADS_SEARCHPREF_DIRSYNC = ( ADS_SEARCHPREF_CACHE_RESULTS + 1 ) ,
        ADS_SEARCHPREF_TOMBSTONE = ( ADS_SEARCHPREF_DIRSYNC + 1 ) ,
        ADS_SEARCHPREF_VLV = ( ADS_SEARCHPREF_TOMBSTONE + 1 ) ,
        ADS_SEARCHPREF_ATTRIBUTE_QUERY = ( ADS_SEARCHPREF_VLV + 1 ) ,
        ADS_SEARCHPREF_SECURITY_MASK = ( ADS_SEARCHPREF_ATTRIBUTE_QUERY + 1 ) ,
        ADS_SEARCHPREF_DIRSYNC_FLAG = ( ADS_SEARCHPREF_SECURITY_MASK + 1 ) ,
        ADS_SEARCHPREF_EXTENDED_DN = ( ADS_SEARCHPREF_DIRSYNC_FLAG + 1 )
    } ADS_SEARCHPREF_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0000_0000_0026
    {
        ADS_PASSWORD_ENCODE_REQUIRE_SSL = 0,
        ADS_PASSWORD_ENCODE_CLEAR = 1
    } ADS_PASSWORD_ENCODING_ENUM;
typedef ADS_SEARCHPREF_ENUM ADS_SEARCHPREF;
typedef struct ads_searchpref_info
    {
    ADS_SEARCHPREF dwSearchPref;
    ADSVALUE vValue;
    ADS_STATUS dwStatus;
    } ADS_SEARCHPREF_INFO;
typedef struct ads_searchpref_info *PADS_SEARCHPREF_INFO;
typedef struct ads_searchpref_info *LPADS_SEARCHPREF_INFO;
typedef HANDLE ADS_SEARCH_HANDLE;
typedef HANDLE *PADS_SEARCH_HANDLE;
typedef struct ads_search_column
    {
    LPWSTR pszAttrName;
    ADSTYPE dwADsType;
    PADSVALUE pADsValues;
    DWORD dwNumValues;
    HANDLE hReserved;
    } ADS_SEARCH_COLUMN;
typedef struct ads_search_column *PADS_SEARCH_COLUMN;
typedef struct _ads_attr_def
    {
    LPWSTR pszAttrName;
    ADSTYPE dwADsType;
    DWORD dwMinRange;
    DWORD dwMaxRange;
    BOOL fMultiValued;
    } ADS_ATTR_DEF;
typedef struct _ads_attr_def *PADS_ATTR_DEF;
typedef struct _ads_class_def
    {
    LPWSTR pszClassName;
    DWORD dwMandatoryAttrs;
    LPWSTR *ppszMandatoryAttrs;
    DWORD optionalAttrs;
    LPWSTR **ppszOptionalAttrs;
    DWORD dwNamingAttrs;
    LPWSTR **ppszNamingAttrs;
    DWORD dwSuperClasses;
    LPWSTR **ppszSuperClasses;
    BOOL fIsContainer;
    } ADS_CLASS_DEF;
typedef struct _ads_class_def *PADS_CLASS_DEF;
typedef struct _ads_sortkey
    {
    LPWSTR pszAttrType;
    LPWSTR pszReserved;
    BOOLEAN fReverseorder;
    } ADS_SORTKEY;
typedef struct _ads_sortkey *PADS_SORTKEY;
typedef struct _ads_vlv
    {
    DWORD dwBeforeCount;
    DWORD dwAfterCount;
    DWORD dwOffset;
    DWORD dwContentCount;
    LPWSTR pszTarget;
    DWORD dwContextIDLength;
    LPBYTE lpContextID;
    } ADS_VLV;
typedef struct _ads_vlv *PADS_VLV;
typedef
enum __MIDL___MIDL_itf_ads_0000_0000_0027
    {
        ADS_PROPERTY_CLEAR = 1,
        ADS_PROPERTY_UPDATE = 2,
        ADS_PROPERTY_APPEND = 3,
        ADS_PROPERTY_DELETE = 4
    } ADS_PROPERTY_OPERATION_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0017_0001
    {
        ADS_SYSTEMFLAG_DISALLOW_DELETE = 0x80000000,
        ADS_SYSTEMFLAG_CONFIG_ALLOW_RENAME = 0x40000000,
        ADS_SYSTEMFLAG_CONFIG_ALLOW_MOVE = 0x20000000,
        ADS_SYSTEMFLAG_CONFIG_ALLOW_LIMITED_MOVE = 0x10000000,
        ADS_SYSTEMFLAG_DOMAIN_DISALLOW_RENAME = 0x8000000,
        ADS_SYSTEMFLAG_DOMAIN_DISALLOW_MOVE = 0x4000000,
        ADS_SYSTEMFLAG_CR_NTDS_NC = 0x1,
        ADS_SYSTEMFLAG_CR_NTDS_DOMAIN = 0x2,
        ADS_SYSTEMFLAG_ATTR_NOT_REPLICATED = 0x1,
        ADS_SYSTEMFLAG_ATTR_IS_CONSTRUCTED = 0x4
    } ADS_SYSTEMFLAG_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0023_0001
    {
        ADS_GROUP_TYPE_GLOBAL_GROUP = 0x2,
        ADS_GROUP_TYPE_DOMAIN_LOCAL_GROUP = 0x4,
        ADS_GROUP_TYPE_LOCAL_GROUP = 0x4,
        ADS_GROUP_TYPE_UNIVERSAL_GROUP = 0x8,
        ADS_GROUP_TYPE_SECURITY_ENABLED = 0x80000000
    } ADS_GROUP_TYPE_ENUM;
typedef
enum ADS_USER_FLAG
    {
        ADS_UF_SCRIPT = 0x1,
        ADS_UF_ACCOUNTDISABLE = 0x2,
        ADS_UF_HOMEDIR_REQUIRED = 0x8,
        ADS_UF_LOCKOUT = 0x10,
        ADS_UF_PASSWD_NOTREQD = 0x20,
        ADS_UF_PASSWD_CANT_CHANGE = 0x40,
        ADS_UF_ENCRYPTED_TEXT_PASSWORD_ALLOWED = 0x80,
        ADS_UF_TEMP_DUPLICATE_ACCOUNT = 0x100,
        ADS_UF_NORMAL_ACCOUNT = 0x200,
        ADS_UF_INTERDOMAIN_TRUST_ACCOUNT = 0x800,
        ADS_UF_WORKSTATION_TRUST_ACCOUNT = 0x1000,
        ADS_UF_SERVER_TRUST_ACCOUNT = 0x2000,
        ADS_UF_DONT_EXPIRE_PASSWD = 0x10000,
        ADS_UF_MNS_LOGON_ACCOUNT = 0x20000,
        ADS_UF_SMARTCARD_REQUIRED = 0x40000,
        ADS_UF_TRUSTED_FOR_DELEGATION = 0x80000,
        ADS_UF_NOT_DELEGATED = 0x100000,
        ADS_UF_USE_DES_KEY_ONLY = 0x200000,
        ADS_UF_DONT_REQUIRE_PREAUTH = 0x400000,
        ADS_UF_PASSWORD_EXPIRED = 0x800000,
        ADS_UF_TRUSTED_TO_AUTHENTICATE_FOR_DELEGATION = 0x1000000
    } ADS_USER_FLAG_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0048_0001
    {
        ADS_RIGHT_DELETE = 0x10000,
        ADS_RIGHT_READ_CONTROL = 0x20000,
        ADS_RIGHT_WRITE_DAC = 0x40000,
        ADS_RIGHT_WRITE_OWNER = 0x80000,
        ADS_RIGHT_SYNCHRONIZE = 0x100000,
        ADS_RIGHT_ACCESS_SYSTEM_SECURITY = 0x1000000,
        ADS_RIGHT_GENERIC_READ = 0x80000000,
        ADS_RIGHT_GENERIC_WRITE = 0x40000000,
        ADS_RIGHT_GENERIC_EXECUTE = 0x20000000,
        ADS_RIGHT_GENERIC_ALL = 0x10000000,
        ADS_RIGHT_DS_CREATE_CHILD = 0x1,
        ADS_RIGHT_DS_DELETE_CHILD = 0x2,
        ADS_RIGHT_ACTRL_DS_LIST = 0x4,
        ADS_RIGHT_DS_SELF = 0x8,
        ADS_RIGHT_DS_READ_PROP = 0x10,
        ADS_RIGHT_DS_WRITE_PROP = 0x20,
        ADS_RIGHT_DS_DELETE_TREE = 0x40,
        ADS_RIGHT_DS_LIST_OBJECT = 0x80,
        ADS_RIGHT_DS_CONTROL_ACCESS = 0x100
    } ADS_RIGHTS_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0048_0002
    {
        ADS_ACETYPE_ACCESS_ALLOWED = 0,
        ADS_ACETYPE_ACCESS_DENIED = 0x1,
        ADS_ACETYPE_SYSTEM_AUDIT = 0x2,
        ADS_ACETYPE_ACCESS_ALLOWED_OBJECT = 0x5,
        ADS_ACETYPE_ACCESS_DENIED_OBJECT = 0x6,
        ADS_ACETYPE_SYSTEM_AUDIT_OBJECT = 0x7,
        ADS_ACETYPE_SYSTEM_ALARM_OBJECT = 0x8,
        ADS_ACETYPE_ACCESS_ALLOWED_CALLBACK = 0x9,
        ADS_ACETYPE_ACCESS_DENIED_CALLBACK = 0xa,
        ADS_ACETYPE_ACCESS_ALLOWED_CALLBACK_OBJECT = 0xb,
        ADS_ACETYPE_ACCESS_DENIED_CALLBACK_OBJECT = 0xc,
        ADS_ACETYPE_SYSTEM_AUDIT_CALLBACK = 0xd,
        ADS_ACETYPE_SYSTEM_ALARM_CALLBACK = 0xe,
        ADS_ACETYPE_SYSTEM_AUDIT_CALLBACK_OBJECT = 0xf,
        ADS_ACETYPE_SYSTEM_ALARM_CALLBACK_OBJECT = 0x10
    } ADS_ACETYPE_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0048_0003
    {
        ADS_ACEFLAG_INHERIT_ACE = 0x2,
        ADS_ACEFLAG_NO_PROPAGATE_INHERIT_ACE = 0x4,
        ADS_ACEFLAG_INHERIT_ONLY_ACE = 0x8,
        ADS_ACEFLAG_INHERITED_ACE = 0x10,
        ADS_ACEFLAG_VALID_INHERIT_FLAGS = 0x1f,
        ADS_ACEFLAG_SUCCESSFUL_ACCESS = 0x40,
        ADS_ACEFLAG_FAILED_ACCESS = 0x80
    } ADS_ACEFLAG_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0048_0004
    {
        ADS_FLAG_OBJECT_TYPE_PRESENT = 0x1,
        ADS_FLAG_INHERITED_OBJECT_TYPE_PRESENT = 0x2
    } ADS_FLAGTYPE_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0048_0005
    {
        ADS_SD_CONTROL_SE_OWNER_DEFAULTED = 0x1,
        ADS_SD_CONTROL_SE_GROUP_DEFAULTED = 0x2,
        ADS_SD_CONTROL_SE_DACL_PRESENT = 0x4,
        ADS_SD_CONTROL_SE_DACL_DEFAULTED = 0x8,
        ADS_SD_CONTROL_SE_SACL_PRESENT = 0x10,
        ADS_SD_CONTROL_SE_SACL_DEFAULTED = 0x20,
        ADS_SD_CONTROL_SE_DACL_AUTO_INHERIT_REQ = 0x100,
        ADS_SD_CONTROL_SE_SACL_AUTO_INHERIT_REQ = 0x200,
        ADS_SD_CONTROL_SE_DACL_AUTO_INHERITED = 0x400,
        ADS_SD_CONTROL_SE_SACL_AUTO_INHERITED = 0x800,
        ADS_SD_CONTROL_SE_DACL_PROTECTED = 0x1000,
        ADS_SD_CONTROL_SE_SACL_PROTECTED = 0x2000,
        ADS_SD_CONTROL_SE_SELF_RELATIVE = 0x8000
    } ADS_SD_CONTROL_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0048_0006
    {
        ADS_SD_REVISION_DS = 4
    } ADS_SD_REVISION_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0050_0001
    {
        ADS_NAME_TYPE_1779 = 1,
        ADS_NAME_TYPE_CANONICAL = 2,
        ADS_NAME_TYPE_NT4 = 3,
        ADS_NAME_TYPE_DISPLAY = 4,
        ADS_NAME_TYPE_DOMAIN_SIMPLE = 5,
        ADS_NAME_TYPE_ENTERPRISE_SIMPLE = 6,
        ADS_NAME_TYPE_GUID = 7,
        ADS_NAME_TYPE_UNKNOWN = 8,
        ADS_NAME_TYPE_USER_PRINCIPAL_NAME = 9,
        ADS_NAME_TYPE_CANONICAL_EX = 10,
        ADS_NAME_TYPE_SERVICE_PRINCIPAL_NAME = 11,
        ADS_NAME_TYPE_SID_OR_SID_HISTORY_NAME = 12
    } ADS_NAME_TYPE_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0050_0002
    {
        ADS_NAME_INITTYPE_DOMAIN = 1,
        ADS_NAME_INITTYPE_SERVER = 2,
        ADS_NAME_INITTYPE_GC = 3
    } ADS_NAME_INITTYPE_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0077_0001
    {
        ADS_OPTION_SERVERNAME = 0,
        ADS_OPTION_REFERRALS = ( ADS_OPTION_SERVERNAME + 1 ) ,
        ADS_OPTION_PAGE_SIZE = ( ADS_OPTION_REFERRALS + 1 ) ,
        ADS_OPTION_SECURITY_MASK = ( ADS_OPTION_PAGE_SIZE + 1 ) ,
        ADS_OPTION_MUTUAL_AUTH_STATUS = ( ADS_OPTION_SECURITY_MASK + 1 ) ,
        ADS_OPTION_QUOTA = ( ADS_OPTION_MUTUAL_AUTH_STATUS + 1 ) ,
        ADS_OPTION_PASSWORD_PORTNUMBER = ( ADS_OPTION_QUOTA + 1 ) ,
        ADS_OPTION_PASSWORD_METHOD = ( ADS_OPTION_PASSWORD_PORTNUMBER + 1 ) ,
        ADS_OPTION_ACCUMULATIVE_MODIFICATION = ( ADS_OPTION_PASSWORD_METHOD + 1 ) ,
        ADS_OPTION_SKIP_SID_LOOKUP = ( ADS_OPTION_ACCUMULATIVE_MODIFICATION + 1 )
    } ADS_OPTION_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0077_0002
    {
        ADS_SECURITY_INFO_OWNER = 0x1,
        ADS_SECURITY_INFO_GROUP = 0x2,
        ADS_SECURITY_INFO_DACL = 0x4,
        ADS_SECURITY_INFO_SACL = 0x8
    } ADS_SECURITY_INFO_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0078_0001
    {
        ADS_SETTYPE_FULL = 1,
        ADS_SETTYPE_PROVIDER = 2,
        ADS_SETTYPE_SERVER = 3,
        ADS_SETTYPE_DN = 4
    } ADS_SETTYPE_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0078_0002
    {
        ADS_FORMAT_WINDOWS = 1,
        ADS_FORMAT_WINDOWS_NO_SERVER = 2,
        ADS_FORMAT_WINDOWS_DN = 3,
        ADS_FORMAT_WINDOWS_PARENT = 4,
        ADS_FORMAT_X500 = 5,
        ADS_FORMAT_X500_NO_SERVER = 6,
        ADS_FORMAT_X500_DN = 7,
        ADS_FORMAT_X500_PARENT = 8,
        ADS_FORMAT_SERVER = 9,
        ADS_FORMAT_PROVIDER = 10,
        ADS_FORMAT_LEAF = 11
    } ADS_FORMAT_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0078_0003
    {
        ADS_DISPLAY_FULL = 1,
        ADS_DISPLAY_VALUE_ONLY = 2
    } ADS_DISPLAY_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0078_0004
    {
        ADS_ESCAPEDMODE_DEFAULT = 1,
        ADS_ESCAPEDMODE_ON = 2,
        ADS_ESCAPEDMODE_OFF = 3,
        ADS_ESCAPEDMODE_OFF_EX = 4
    } ADS_ESCAPE_MODE_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0088_0001
    {
        ADS_PATH_FILE = 1,
        ADS_PATH_FILESHARE = 2,
        ADS_PATH_REGISTRY = 3
    } ADS_PATHTYPE_ENUM;
typedef
enum __MIDL___MIDL_itf_ads_0001_0088_0002
    {
        ADS_SD_FORMAT_IID = 1,
        ADS_SD_FORMAT_RAW = 2,
        ADS_SD_FORMAT_HEXSTRING = 3
    } ADS_SD_FORMAT_ENUM;
EXTERN_C const IID LIBID_ActiveDs;
EXTERN_C const IID IID_IADs;
    typedef struct IADsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADs * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADs * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADs * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADs * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADs * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADs * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADs * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADs * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADs * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADs * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADs * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADs * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADs * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADs * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADs * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADs * This,
                       VARIANT vProperties,
                       long lnReserved);
        END_INTERFACE
    } IADsVtbl;
    interface IADs
    {
        CONST_VTBL struct IADsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
EXTERN_C const IID IID_IADsContainer;
    typedef struct IADsContainerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsContainer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsContainer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsContainer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsContainer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsContainer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsContainer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsContainer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IADsContainer * This,
                                __RPC__out long *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IADsContainer * This,
                                __RPC__deref_out_opt IUnknown **retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Filter )(
            __RPC__in IADsContainer * This,
                                __RPC__out VARIANT *pVar);
                            HRESULT ( STDMETHODCALLTYPE *put_Filter )(
            __RPC__in IADsContainer * This,
                       VARIANT Var);
                            HRESULT ( STDMETHODCALLTYPE *get_Hints )(
            __RPC__in IADsContainer * This,
                                __RPC__out VARIANT *pvFilter);
                            HRESULT ( STDMETHODCALLTYPE *put_Hints )(
            __RPC__in IADsContainer * This,
                       VARIANT vHints);
                   HRESULT ( STDMETHODCALLTYPE *GetObject )(
            __RPC__in IADsContainer * This,
                       __RPC__in BSTR ClassName,
                       __RPC__in BSTR RelativeName,
                                __RPC__deref_out_opt IDispatch **ppObject);
                   HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IADsContainer * This,
                       __RPC__in BSTR ClassName,
                       __RPC__in BSTR RelativeName,
                                __RPC__deref_out_opt IDispatch **ppObject);
                   HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IADsContainer * This,
                       __RPC__in BSTR bstrClassName,
                       __RPC__in BSTR bstrRelativeName);
                   HRESULT ( STDMETHODCALLTYPE *CopyHere )(
            __RPC__in IADsContainer * This,
                       __RPC__in BSTR SourceName,
                       __RPC__in BSTR NewName,
                                __RPC__deref_out_opt IDispatch **ppObject);
                   HRESULT ( STDMETHODCALLTYPE *MoveHere )(
            __RPC__in IADsContainer * This,
                       __RPC__in BSTR SourceName,
                       __RPC__in BSTR NewName,
                                __RPC__deref_out_opt IDispatch **ppObject);
        END_INTERFACE
    } IADsContainerVtbl;
    interface IADsContainer
    {
        CONST_VTBL struct IADsContainerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,retval) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Filter(This,pVar) )
    ( (This)->lpVtbl -> put_Filter(This,Var) )
    ( (This)->lpVtbl -> get_Hints(This,pvFilter) )
    ( (This)->lpVtbl -> put_Hints(This,vHints) )
    ( (This)->lpVtbl -> GetObject(This,ClassName,RelativeName,ppObject) )
    ( (This)->lpVtbl -> Create(This,ClassName,RelativeName,ppObject) )
    ( (This)->lpVtbl -> Delete(This,bstrClassName,bstrRelativeName) )
    ( (This)->lpVtbl -> CopyHere(This,SourceName,NewName,ppObject) )
    ( (This)->lpVtbl -> MoveHere(This,SourceName,NewName,ppObject) )
EXTERN_C const IID IID_IADsCollection;
    typedef struct IADsCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IADsCollection * This,
                                __RPC__deref_out_opt IUnknown **ppEnumerator);
                   HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IADsCollection * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vItem);
                   HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IADsCollection * This,
                       __RPC__in BSTR bstrItemToBeRemoved);
                   HRESULT ( STDMETHODCALLTYPE *GetObject )(
            __RPC__in IADsCollection * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvItem);
        END_INTERFACE
    } IADsCollectionVtbl;
    interface IADsCollection
    {
        CONST_VTBL struct IADsCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumerator) )
    ( (This)->lpVtbl -> Add(This,bstrName,vItem) )
    ( (This)->lpVtbl -> Remove(This,bstrItemToBeRemoved) )
    ( (This)->lpVtbl -> GetObject(This,bstrName,pvItem) )
EXTERN_C const IID IID_IADsMembers;
    typedef struct IADsMembersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsMembers * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsMembers * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsMembers * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsMembers * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsMembers * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsMembers * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsMembers * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IADsMembers * This,
                                __RPC__out long *plCount);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IADsMembers * This,
                                __RPC__deref_out_opt IUnknown **ppEnumerator);
                            HRESULT ( STDMETHODCALLTYPE *get_Filter )(
            __RPC__in IADsMembers * This,
                                __RPC__out VARIANT *pvFilter);
                            HRESULT ( STDMETHODCALLTYPE *put_Filter )(
            __RPC__in IADsMembers * This,
                       VARIANT pvFilter);
        END_INTERFACE
    } IADsMembersVtbl;
    interface IADsMembers
    {
        CONST_VTBL struct IADsMembersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumerator) )
    ( (This)->lpVtbl -> get_Filter(This,pvFilter) )
    ( (This)->lpVtbl -> put_Filter(This,pvFilter) )
EXTERN_C const IID IID_IADsPropertyList;
    typedef struct IADsPropertyListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsPropertyList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsPropertyList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsPropertyList * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsPropertyList * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsPropertyList * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsPropertyList * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsPropertyList * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_PropertyCount )(
            __RPC__in IADsPropertyList * This,
                                __RPC__out long *plCount);
                   HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IADsPropertyList * This,
                                __RPC__out VARIANT *pVariant);
                   HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IADsPropertyList * This,
                       long cElements);
                   HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IADsPropertyList * This);
                   HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IADsPropertyList * This,
                       VARIANT varIndex,
                                __RPC__out VARIANT *pVariant);
                   HRESULT ( STDMETHODCALLTYPE *GetPropertyItem )(
            __RPC__in IADsPropertyList * This,
                       __RPC__in BSTR bstrName,
                       LONG lnADsType,
                                __RPC__out VARIANT *pVariant);
                   HRESULT ( STDMETHODCALLTYPE *PutPropertyItem )(
            __RPC__in IADsPropertyList * This,
                       VARIANT varData);
                   HRESULT ( STDMETHODCALLTYPE *ResetPropertyItem )(
            __RPC__in IADsPropertyList * This,
                       VARIANT varEntry);
                   HRESULT ( STDMETHODCALLTYPE *PurgePropertyList )(
            __RPC__in IADsPropertyList * This);
        END_INTERFACE
    } IADsPropertyListVtbl;
    interface IADsPropertyList
    {
        CONST_VTBL struct IADsPropertyListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_PropertyCount(This,plCount) )
    ( (This)->lpVtbl -> Next(This,pVariant) )
    ( (This)->lpVtbl -> Skip(This,cElements) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Item(This,varIndex,pVariant) )
    ( (This)->lpVtbl -> GetPropertyItem(This,bstrName,lnADsType,pVariant) )
    ( (This)->lpVtbl -> PutPropertyItem(This,varData) )
    ( (This)->lpVtbl -> ResetPropertyItem(This,varEntry) )
    ( (This)->lpVtbl -> PurgePropertyList(This) )
EXTERN_C const IID IID_IADsPropertyEntry;
    typedef struct IADsPropertyEntryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsPropertyEntry * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsPropertyEntry * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsPropertyEntry * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsPropertyEntry * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsPropertyEntry * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsPropertyEntry * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsPropertyEntry * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IADsPropertyEntry * This);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsPropertyEntry * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IADsPropertyEntry * This,
                       __RPC__in BSTR bstrName);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsType )(
            __RPC__in IADsPropertyEntry * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ADsType )(
            __RPC__in IADsPropertyEntry * This,
                       long lnADsType);
                            HRESULT ( STDMETHODCALLTYPE *get_ControlCode )(
            __RPC__in IADsPropertyEntry * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ControlCode )(
            __RPC__in IADsPropertyEntry * This,
                       long lnControlCode);
                            HRESULT ( STDMETHODCALLTYPE *get_Values )(
            __RPC__in IADsPropertyEntry * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Values )(
            __RPC__in IADsPropertyEntry * This,
                       VARIANT vValues);
        END_INTERFACE
    } IADsPropertyEntryVtbl;
    interface IADsPropertyEntry
    {
        CONST_VTBL struct IADsPropertyEntryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_ADsType(This,retval) )
    ( (This)->lpVtbl -> put_ADsType(This,lnADsType) )
    ( (This)->lpVtbl -> get_ControlCode(This,retval) )
    ( (This)->lpVtbl -> put_ControlCode(This,lnControlCode) )
    ( (This)->lpVtbl -> get_Values(This,retval) )
    ( (This)->lpVtbl -> put_Values(This,vValues) )
EXTERN_C const CLSID CLSID_PropertyEntry;
class DECLSPEC_UUID("72d3edc2-a4c4-11d0-8533-00c04fd8d503")
PropertyEntry;
EXTERN_C const IID IID_IADsPropertyValue;
    typedef struct IADsPropertyValueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsPropertyValue * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsPropertyValue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsPropertyValue * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsPropertyValue * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsPropertyValue * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsPropertyValue * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsPropertyValue * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IADsPropertyValue * This);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsType )(
            __RPC__in IADsPropertyValue * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ADsType )(
            __RPC__in IADsPropertyValue * This,
                       long lnADsType);
                            HRESULT ( STDMETHODCALLTYPE *get_DNString )(
            __RPC__in IADsPropertyValue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_DNString )(
            __RPC__in IADsPropertyValue * This,
                       __RPC__in BSTR bstrDNString);
                            HRESULT ( STDMETHODCALLTYPE *get_CaseExactString )(
            __RPC__in IADsPropertyValue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_CaseExactString )(
            __RPC__in IADsPropertyValue * This,
                       __RPC__in BSTR bstrCaseExactString);
                            HRESULT ( STDMETHODCALLTYPE *get_CaseIgnoreString )(
            __RPC__in IADsPropertyValue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_CaseIgnoreString )(
            __RPC__in IADsPropertyValue * This,
                       __RPC__in BSTR bstrCaseIgnoreString);
                            HRESULT ( STDMETHODCALLTYPE *get_PrintableString )(
            __RPC__in IADsPropertyValue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PrintableString )(
            __RPC__in IADsPropertyValue * This,
                       __RPC__in BSTR bstrPrintableString);
                            HRESULT ( STDMETHODCALLTYPE *get_NumericString )(
            __RPC__in IADsPropertyValue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_NumericString )(
            __RPC__in IADsPropertyValue * This,
                       __RPC__in BSTR bstrNumericString);
                            HRESULT ( STDMETHODCALLTYPE *get_Boolean )(
            __RPC__in IADsPropertyValue * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Boolean )(
            __RPC__in IADsPropertyValue * This,
                       long lnBoolean);
                            HRESULT ( STDMETHODCALLTYPE *get_Integer )(
            __RPC__in IADsPropertyValue * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Integer )(
            __RPC__in IADsPropertyValue * This,
                       long lnInteger);
                            HRESULT ( STDMETHODCALLTYPE *get_OctetString )(
            __RPC__in IADsPropertyValue * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_OctetString )(
            __RPC__in IADsPropertyValue * This,
                       VARIANT vOctetString);
                            HRESULT ( STDMETHODCALLTYPE *get_SecurityDescriptor )(
            __RPC__in IADsPropertyValue * This,
                                __RPC__deref_out_opt IDispatch **retval);
                            HRESULT ( STDMETHODCALLTYPE *put_SecurityDescriptor )(
            __RPC__in IADsPropertyValue * This,
                       __RPC__in_opt IDispatch *pSecurityDescriptor);
                            HRESULT ( STDMETHODCALLTYPE *get_LargeInteger )(
            __RPC__in IADsPropertyValue * This,
                                __RPC__deref_out_opt IDispatch **retval);
                            HRESULT ( STDMETHODCALLTYPE *put_LargeInteger )(
            __RPC__in IADsPropertyValue * This,
                       __RPC__in_opt IDispatch *pLargeInteger);
                            HRESULT ( STDMETHODCALLTYPE *get_UTCTime )(
            __RPC__in IADsPropertyValue * This,
                                __RPC__out DATE *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_UTCTime )(
            __RPC__in IADsPropertyValue * This,
                       DATE daUTCTime);
        END_INTERFACE
    } IADsPropertyValueVtbl;
    interface IADsPropertyValue
    {
        CONST_VTBL struct IADsPropertyValueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> get_ADsType(This,retval) )
    ( (This)->lpVtbl -> put_ADsType(This,lnADsType) )
    ( (This)->lpVtbl -> get_DNString(This,retval) )
    ( (This)->lpVtbl -> put_DNString(This,bstrDNString) )
    ( (This)->lpVtbl -> get_CaseExactString(This,retval) )
    ( (This)->lpVtbl -> put_CaseExactString(This,bstrCaseExactString) )
    ( (This)->lpVtbl -> get_CaseIgnoreString(This,retval) )
    ( (This)->lpVtbl -> put_CaseIgnoreString(This,bstrCaseIgnoreString) )
    ( (This)->lpVtbl -> get_PrintableString(This,retval) )
    ( (This)->lpVtbl -> put_PrintableString(This,bstrPrintableString) )
    ( (This)->lpVtbl -> get_NumericString(This,retval) )
    ( (This)->lpVtbl -> put_NumericString(This,bstrNumericString) )
    ( (This)->lpVtbl -> get_Boolean(This,retval) )
    ( (This)->lpVtbl -> put_Boolean(This,lnBoolean) )
    ( (This)->lpVtbl -> get_Integer(This,retval) )
    ( (This)->lpVtbl -> put_Integer(This,lnInteger) )
    ( (This)->lpVtbl -> get_OctetString(This,retval) )
    ( (This)->lpVtbl -> put_OctetString(This,vOctetString) )
    ( (This)->lpVtbl -> get_SecurityDescriptor(This,retval) )
    ( (This)->lpVtbl -> put_SecurityDescriptor(This,pSecurityDescriptor) )
    ( (This)->lpVtbl -> get_LargeInteger(This,retval) )
    ( (This)->lpVtbl -> put_LargeInteger(This,pLargeInteger) )
    ( (This)->lpVtbl -> get_UTCTime(This,retval) )
    ( (This)->lpVtbl -> put_UTCTime(This,daUTCTime) )
EXTERN_C const IID IID_IADsPropertyValue2;
    typedef struct IADsPropertyValue2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsPropertyValue2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsPropertyValue2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsPropertyValue2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsPropertyValue2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsPropertyValue2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsPropertyValue2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsPropertyValue2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *GetObjectProperty )(
            __RPC__in IADsPropertyValue2 * This,
                            __RPC__inout long *lnADsType,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutObjectProperty )(
            __RPC__in IADsPropertyValue2 * This,
                       long lnADsType,
                       VARIANT vProp);
        END_INTERFACE
    } IADsPropertyValue2Vtbl;
    interface IADsPropertyValue2
    {
        CONST_VTBL struct IADsPropertyValue2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetObjectProperty(This,lnADsType,pvProp) )
    ( (This)->lpVtbl -> PutObjectProperty(This,lnADsType,vProp) )
EXTERN_C const CLSID CLSID_PropertyValue;
class DECLSPEC_UUID("7b9e38b0-a97c-11d0-8534-00c04fd8d503")
PropertyValue;
EXTERN_C const IID IID_IPrivateDispatch;
    typedef struct IPrivateDispatchVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrivateDispatch * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrivateDispatch * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrivateDispatch * This);
        HRESULT ( STDMETHODCALLTYPE *ADSIInitializeDispatchManager )(
            __RPC__in IPrivateDispatch * This,
                       long dwExtensionId);
        HRESULT ( STDMETHODCALLTYPE *ADSIGetTypeInfoCount )(
            __RPC__in IPrivateDispatch * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *ADSIGetTypeInfo )(
            __RPC__in IPrivateDispatch * This,
                       UINT itinfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **pptinfo);
        HRESULT ( STDMETHODCALLTYPE *ADSIGetIDsOfNames )(
            __RPC__in IPrivateDispatch * This,
                       __RPC__in REFIID riid,
                       __RPC__deref_in_opt OLECHAR **rgszNames,
                       UINT cNames,
                       LCID lcid,
                        __RPC__out DISPID *rgdispid);
        HRESULT ( STDMETHODCALLTYPE *ADSIInvoke )(
            __RPC__in IPrivateDispatch * This,
                       DISPID dispidMember,
                       __RPC__in REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                       __RPC__in DISPPARAMS *pdispparams,
                        __RPC__out VARIANT *pvarResult,
                        __RPC__out EXCEPINFO *pexcepinfo,
                        __RPC__out UINT *puArgErr);
        END_INTERFACE
    } IPrivateDispatchVtbl;
    interface IPrivateDispatch
    {
        CONST_VTBL struct IPrivateDispatchVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ADSIInitializeDispatchManager(This,dwExtensionId) )
    ( (This)->lpVtbl -> ADSIGetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> ADSIGetTypeInfo(This,itinfo,lcid,pptinfo) )
    ( (This)->lpVtbl -> ADSIGetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid) )
    ( (This)->lpVtbl -> ADSIInvoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr) )
EXTERN_C const IID IID_IPrivateUnknown;
    typedef struct IPrivateUnknownVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrivateUnknown * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrivateUnknown * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrivateUnknown * This);
        HRESULT ( STDMETHODCALLTYPE *ADSIInitializeObject )(
            __RPC__in IPrivateUnknown * This,
                       __RPC__in BSTR lpszUserName,
                       __RPC__in BSTR lpszPassword,
                       long lnReserved);
        HRESULT ( STDMETHODCALLTYPE *ADSIReleaseObject )(
            __RPC__in IPrivateUnknown * This);
        END_INTERFACE
    } IPrivateUnknownVtbl;
    interface IPrivateUnknown
    {
        CONST_VTBL struct IPrivateUnknownVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ADSIInitializeObject(This,lpszUserName,lpszPassword,lnReserved) )
    ( (This)->lpVtbl -> ADSIReleaseObject(This) )
EXTERN_C const IID IID_IADsExtension;
    typedef struct IADsExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsExtension * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsExtension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsExtension * This);
        HRESULT ( STDMETHODCALLTYPE *Operate )(
            __RPC__in IADsExtension * This,
                       DWORD dwCode,
                       VARIANT varData1,
                       VARIANT varData2,
                       VARIANT varData3);
        HRESULT ( STDMETHODCALLTYPE *PrivateGetIDsOfNames )(
            __RPC__in IADsExtension * This,
                       __RPC__in REFIID riid,
                       __RPC__deref_in_opt OLECHAR **rgszNames,
                       unsigned int cNames,
                       LCID lcid,
                        __RPC__out DISPID *rgDispid);
        HRESULT ( STDMETHODCALLTYPE *PrivateInvoke )(
            __RPC__in IADsExtension * This,
                       DISPID dispidMember,
                       __RPC__in REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                       __RPC__in DISPPARAMS *pdispparams,
                        __RPC__out VARIANT *pvarResult,
                        __RPC__out EXCEPINFO *pexcepinfo,
                        __RPC__out unsigned int *puArgErr);
        END_INTERFACE
    } IADsExtensionVtbl;
    interface IADsExtension
    {
        CONST_VTBL struct IADsExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Operate(This,dwCode,varData1,varData2,varData3) )
    ( (This)->lpVtbl -> PrivateGetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispid) )
    ( (This)->lpVtbl -> PrivateInvoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr) )
EXTERN_C const IID IID_IADsDeleteOps;
    typedef struct IADsDeleteOpsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsDeleteOps * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsDeleteOps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsDeleteOps * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsDeleteOps * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsDeleteOps * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsDeleteOps * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsDeleteOps * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *DeleteObject )(
            __RPC__in IADsDeleteOps * This,
                       long lnFlags);
        END_INTERFACE
    } IADsDeleteOpsVtbl;
    interface IADsDeleteOps
    {
        CONST_VTBL struct IADsDeleteOpsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> DeleteObject(This,lnFlags) )
EXTERN_C const IID IID_IADsNamespaces;
    typedef struct IADsNamespacesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsNamespaces * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsNamespaces * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsNamespaces * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsNamespaces * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsNamespaces * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsNamespaces * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsNamespaces * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsNamespaces * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsNamespaces * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsNamespaces * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsNamespaces * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsNamespaces * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsNamespaces * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsNamespaces * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsNamespaces * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsNamespaces * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsNamespaces * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsNamespaces * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsNamespaces * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsNamespaces * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultContainer )(
            __RPC__in IADsNamespaces * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultContainer )(
            __RPC__in IADsNamespaces * This,
                       __RPC__in BSTR bstrDefaultContainer);
        END_INTERFACE
    } IADsNamespacesVtbl;
    interface IADsNamespaces
    {
        CONST_VTBL struct IADsNamespacesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_DefaultContainer(This,retval) )
    ( (This)->lpVtbl -> put_DefaultContainer(This,bstrDefaultContainer) )
EXTERN_C const IID IID_IADsClass;
    typedef struct IADsClassVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsClass * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsClass * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsClass * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsClass * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsClass * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsClass * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsClass * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsClass * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsClass * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsClass * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsClass * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsClass * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsClass * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsClass * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsClass * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsClass * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsClass * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsClass * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsClass * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsClass * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_PrimaryInterface )(
            __RPC__in IADsClass * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_CLSID )(
            __RPC__in IADsClass * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_CLSID )(
            __RPC__in IADsClass * This,
                       __RPC__in BSTR bstrCLSID);
                            HRESULT ( STDMETHODCALLTYPE *get_OID )(
            __RPC__in IADsClass * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_OID )(
            __RPC__in IADsClass * This,
                       __RPC__in BSTR bstrOID);
                            HRESULT ( STDMETHODCALLTYPE *get_Abstract )(
            __RPC__in IADsClass * This,
                                __RPC__out VARIANT_BOOL *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Abstract )(
            __RPC__in IADsClass * This,
                       VARIANT_BOOL fAbstract);
                            HRESULT ( STDMETHODCALLTYPE *get_Auxiliary )(
            __RPC__in IADsClass * This,
                                __RPC__out VARIANT_BOOL *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Auxiliary )(
            __RPC__in IADsClass * This,
                       VARIANT_BOOL fAuxiliary);
                            HRESULT ( STDMETHODCALLTYPE *get_MandatoryProperties )(
            __RPC__in IADsClass * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_MandatoryProperties )(
            __RPC__in IADsClass * This,
                       VARIANT vMandatoryProperties);
                            HRESULT ( STDMETHODCALLTYPE *get_OptionalProperties )(
            __RPC__in IADsClass * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_OptionalProperties )(
            __RPC__in IADsClass * This,
                       VARIANT vOptionalProperties);
                            HRESULT ( STDMETHODCALLTYPE *get_NamingProperties )(
            __RPC__in IADsClass * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_NamingProperties )(
            __RPC__in IADsClass * This,
                       VARIANT vNamingProperties);
                            HRESULT ( STDMETHODCALLTYPE *get_DerivedFrom )(
            __RPC__in IADsClass * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_DerivedFrom )(
            __RPC__in IADsClass * This,
                       VARIANT vDerivedFrom);
                            HRESULT ( STDMETHODCALLTYPE *get_AuxDerivedFrom )(
            __RPC__in IADsClass * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_AuxDerivedFrom )(
            __RPC__in IADsClass * This,
                       VARIANT vAuxDerivedFrom);
                            HRESULT ( STDMETHODCALLTYPE *get_PossibleSuperiors )(
            __RPC__in IADsClass * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PossibleSuperiors )(
            __RPC__in IADsClass * This,
                       VARIANT vPossibleSuperiors);
                            HRESULT ( STDMETHODCALLTYPE *get_Containment )(
            __RPC__in IADsClass * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Containment )(
            __RPC__in IADsClass * This,
                       VARIANT vContainment);
                            HRESULT ( STDMETHODCALLTYPE *get_Container )(
            __RPC__in IADsClass * This,
                                __RPC__out VARIANT_BOOL *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Container )(
            __RPC__in IADsClass * This,
                       VARIANT_BOOL fContainer);
                            HRESULT ( STDMETHODCALLTYPE *get_HelpFileName )(
            __RPC__in IADsClass * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_HelpFileName )(
            __RPC__in IADsClass * This,
                       __RPC__in BSTR bstrHelpFileName);
                            HRESULT ( STDMETHODCALLTYPE *get_HelpFileContext )(
            __RPC__in IADsClass * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_HelpFileContext )(
            __RPC__in IADsClass * This,
                       long lnHelpFileContext);
                   HRESULT ( STDMETHODCALLTYPE *Qualifiers )(
            __RPC__in IADsClass * This,
                                __RPC__deref_out_opt IADsCollection **ppQualifiers);
        END_INTERFACE
    } IADsClassVtbl;
    interface IADsClass
    {
        CONST_VTBL struct IADsClassVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_PrimaryInterface(This,retval) )
    ( (This)->lpVtbl -> get_CLSID(This,retval) )
    ( (This)->lpVtbl -> put_CLSID(This,bstrCLSID) )
    ( (This)->lpVtbl -> get_OID(This,retval) )
    ( (This)->lpVtbl -> put_OID(This,bstrOID) )
    ( (This)->lpVtbl -> get_Abstract(This,retval) )
    ( (This)->lpVtbl -> put_Abstract(This,fAbstract) )
    ( (This)->lpVtbl -> get_Auxiliary(This,retval) )
    ( (This)->lpVtbl -> put_Auxiliary(This,fAuxiliary) )
    ( (This)->lpVtbl -> get_MandatoryProperties(This,retval) )
    ( (This)->lpVtbl -> put_MandatoryProperties(This,vMandatoryProperties) )
    ( (This)->lpVtbl -> get_OptionalProperties(This,retval) )
    ( (This)->lpVtbl -> put_OptionalProperties(This,vOptionalProperties) )
    ( (This)->lpVtbl -> get_NamingProperties(This,retval) )
    ( (This)->lpVtbl -> put_NamingProperties(This,vNamingProperties) )
    ( (This)->lpVtbl -> get_DerivedFrom(This,retval) )
    ( (This)->lpVtbl -> put_DerivedFrom(This,vDerivedFrom) )
    ( (This)->lpVtbl -> get_AuxDerivedFrom(This,retval) )
    ( (This)->lpVtbl -> put_AuxDerivedFrom(This,vAuxDerivedFrom) )
    ( (This)->lpVtbl -> get_PossibleSuperiors(This,retval) )
    ( (This)->lpVtbl -> put_PossibleSuperiors(This,vPossibleSuperiors) )
    ( (This)->lpVtbl -> get_Containment(This,retval) )
    ( (This)->lpVtbl -> put_Containment(This,vContainment) )
    ( (This)->lpVtbl -> get_Container(This,retval) )
    ( (This)->lpVtbl -> put_Container(This,fContainer) )
    ( (This)->lpVtbl -> get_HelpFileName(This,retval) )
    ( (This)->lpVtbl -> put_HelpFileName(This,bstrHelpFileName) )
    ( (This)->lpVtbl -> get_HelpFileContext(This,retval) )
    ( (This)->lpVtbl -> put_HelpFileContext(This,lnHelpFileContext) )
    ( (This)->lpVtbl -> Qualifiers(This,ppQualifiers) )
EXTERN_C const IID IID_IADsProperty;
    typedef struct IADsPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsProperty * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsProperty * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsProperty * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsProperty * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsProperty * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsProperty * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsProperty * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsProperty * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsProperty * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsProperty * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsProperty * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsProperty * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsProperty * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsProperty * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsProperty * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsProperty * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsProperty * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_OID )(
            __RPC__in IADsProperty * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_OID )(
            __RPC__in IADsProperty * This,
                       __RPC__in BSTR bstrOID);
                            HRESULT ( STDMETHODCALLTYPE *get_Syntax )(
            __RPC__in IADsProperty * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Syntax )(
            __RPC__in IADsProperty * This,
                       __RPC__in BSTR bstrSyntax);
                            HRESULT ( STDMETHODCALLTYPE *get_MaxRange )(
            __RPC__in IADsProperty * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_MaxRange )(
            __RPC__in IADsProperty * This,
                       long lnMaxRange);
                            HRESULT ( STDMETHODCALLTYPE *get_MinRange )(
            __RPC__in IADsProperty * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_MinRange )(
            __RPC__in IADsProperty * This,
                       long lnMinRange);
                            HRESULT ( STDMETHODCALLTYPE *get_MultiValued )(
            __RPC__in IADsProperty * This,
                                __RPC__out VARIANT_BOOL *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_MultiValued )(
            __RPC__in IADsProperty * This,
                       VARIANT_BOOL fMultiValued);
                   HRESULT ( STDMETHODCALLTYPE *Qualifiers )(
            __RPC__in IADsProperty * This,
                                __RPC__deref_out_opt IADsCollection **ppQualifiers);
        END_INTERFACE
    } IADsPropertyVtbl;
    interface IADsProperty
    {
        CONST_VTBL struct IADsPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_OID(This,retval) )
    ( (This)->lpVtbl -> put_OID(This,bstrOID) )
    ( (This)->lpVtbl -> get_Syntax(This,retval) )
    ( (This)->lpVtbl -> put_Syntax(This,bstrSyntax) )
    ( (This)->lpVtbl -> get_MaxRange(This,retval) )
    ( (This)->lpVtbl -> put_MaxRange(This,lnMaxRange) )
    ( (This)->lpVtbl -> get_MinRange(This,retval) )
    ( (This)->lpVtbl -> put_MinRange(This,lnMinRange) )
    ( (This)->lpVtbl -> get_MultiValued(This,retval) )
    ( (This)->lpVtbl -> put_MultiValued(This,fMultiValued) )
    ( (This)->lpVtbl -> Qualifiers(This,ppQualifiers) )
EXTERN_C const IID IID_IADsSyntax;
    typedef struct IADsSyntaxVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsSyntax * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsSyntax * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsSyntax * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsSyntax * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsSyntax * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsSyntax * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsSyntax * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsSyntax * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsSyntax * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsSyntax * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsSyntax * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsSyntax * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsSyntax * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsSyntax * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsSyntax * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsSyntax * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsSyntax * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsSyntax * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsSyntax * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsSyntax * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_OleAutoDataType )(
            __RPC__in IADsSyntax * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_OleAutoDataType )(
            __RPC__in IADsSyntax * This,
                       long lnOleAutoDataType);
        END_INTERFACE
    } IADsSyntaxVtbl;
    interface IADsSyntax
    {
        CONST_VTBL struct IADsSyntaxVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_OleAutoDataType(This,retval) )
    ( (This)->lpVtbl -> put_OleAutoDataType(This,lnOleAutoDataType) )
EXTERN_C const IID IID_IADsLocality;
    typedef struct IADsLocalityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsLocality * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsLocality * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsLocality * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsLocality * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsLocality * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsLocality * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsLocality * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsLocality * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsLocality * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsLocality * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsLocality * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsLocality * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsLocality * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsLocality * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsLocality * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsLocality * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsLocality * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsLocality * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsLocality * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsLocality * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IADsLocality * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IADsLocality * This,
                       __RPC__in BSTR bstrDescription);
                            HRESULT ( STDMETHODCALLTYPE *get_LocalityName )(
            __RPC__in IADsLocality * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_LocalityName )(
            __RPC__in IADsLocality * This,
                       __RPC__in BSTR bstrLocalityName);
                            HRESULT ( STDMETHODCALLTYPE *get_PostalAddress )(
            __RPC__in IADsLocality * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PostalAddress )(
            __RPC__in IADsLocality * This,
                       __RPC__in BSTR bstrPostalAddress);
                            HRESULT ( STDMETHODCALLTYPE *get_SeeAlso )(
            __RPC__in IADsLocality * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_SeeAlso )(
            __RPC__in IADsLocality * This,
                       VARIANT vSeeAlso);
        END_INTERFACE
    } IADsLocalityVtbl;
    interface IADsLocality
    {
        CONST_VTBL struct IADsLocalityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_LocalityName(This,retval) )
    ( (This)->lpVtbl -> put_LocalityName(This,bstrLocalityName) )
    ( (This)->lpVtbl -> get_PostalAddress(This,retval) )
    ( (This)->lpVtbl -> put_PostalAddress(This,bstrPostalAddress) )
    ( (This)->lpVtbl -> get_SeeAlso(This,retval) )
    ( (This)->lpVtbl -> put_SeeAlso(This,vSeeAlso) )
EXTERN_C const IID IID_IADsO;
    typedef struct IADsOVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsO * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsO * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsO * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsO * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsO * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsO * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsO * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsO * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsO * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsO * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsO * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsO * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsO * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsO * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsO * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsO * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsO * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsO * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsO * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsO * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IADsO * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IADsO * This,
                       __RPC__in BSTR bstrDescription);
                            HRESULT ( STDMETHODCALLTYPE *get_LocalityName )(
            __RPC__in IADsO * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_LocalityName )(
            __RPC__in IADsO * This,
                       __RPC__in BSTR bstrLocalityName);
                            HRESULT ( STDMETHODCALLTYPE *get_PostalAddress )(
            __RPC__in IADsO * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PostalAddress )(
            __RPC__in IADsO * This,
                       __RPC__in BSTR bstrPostalAddress);
                            HRESULT ( STDMETHODCALLTYPE *get_TelephoneNumber )(
            __RPC__in IADsO * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_TelephoneNumber )(
            __RPC__in IADsO * This,
                       __RPC__in BSTR bstrTelephoneNumber);
                            HRESULT ( STDMETHODCALLTYPE *get_FaxNumber )(
            __RPC__in IADsO * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_FaxNumber )(
            __RPC__in IADsO * This,
                       __RPC__in BSTR bstrFaxNumber);
                            HRESULT ( STDMETHODCALLTYPE *get_SeeAlso )(
            __RPC__in IADsO * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_SeeAlso )(
            __RPC__in IADsO * This,
                       VARIANT vSeeAlso);
        END_INTERFACE
    } IADsOVtbl;
    interface IADsO
    {
        CONST_VTBL struct IADsOVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_LocalityName(This,retval) )
    ( (This)->lpVtbl -> put_LocalityName(This,bstrLocalityName) )
    ( (This)->lpVtbl -> get_PostalAddress(This,retval) )
    ( (This)->lpVtbl -> put_PostalAddress(This,bstrPostalAddress) )
    ( (This)->lpVtbl -> get_TelephoneNumber(This,retval) )
    ( (This)->lpVtbl -> put_TelephoneNumber(This,bstrTelephoneNumber) )
    ( (This)->lpVtbl -> get_FaxNumber(This,retval) )
    ( (This)->lpVtbl -> put_FaxNumber(This,bstrFaxNumber) )
    ( (This)->lpVtbl -> get_SeeAlso(This,retval) )
    ( (This)->lpVtbl -> put_SeeAlso(This,vSeeAlso) )
EXTERN_C const IID IID_IADsOU;
    typedef struct IADsOUVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsOU * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsOU * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsOU * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsOU * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsOU * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsOU * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsOU * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsOU * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsOU * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsOU * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsOU * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsOU * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsOU * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsOU * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsOU * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsOU * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsOU * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsOU * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsOU * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsOU * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IADsOU * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IADsOU * This,
                       __RPC__in BSTR bstrDescription);
                            HRESULT ( STDMETHODCALLTYPE *get_LocalityName )(
            __RPC__in IADsOU * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_LocalityName )(
            __RPC__in IADsOU * This,
                       __RPC__in BSTR bstrLocalityName);
                            HRESULT ( STDMETHODCALLTYPE *get_PostalAddress )(
            __RPC__in IADsOU * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PostalAddress )(
            __RPC__in IADsOU * This,
                       __RPC__in BSTR bstrPostalAddress);
                            HRESULT ( STDMETHODCALLTYPE *get_TelephoneNumber )(
            __RPC__in IADsOU * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_TelephoneNumber )(
            __RPC__in IADsOU * This,
                       __RPC__in BSTR bstrTelephoneNumber);
                            HRESULT ( STDMETHODCALLTYPE *get_FaxNumber )(
            __RPC__in IADsOU * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_FaxNumber )(
            __RPC__in IADsOU * This,
                       __RPC__in BSTR bstrFaxNumber);
                            HRESULT ( STDMETHODCALLTYPE *get_SeeAlso )(
            __RPC__in IADsOU * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_SeeAlso )(
            __RPC__in IADsOU * This,
                       VARIANT vSeeAlso);
                            HRESULT ( STDMETHODCALLTYPE *get_BusinessCategory )(
            __RPC__in IADsOU * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_BusinessCategory )(
            __RPC__in IADsOU * This,
                       __RPC__in BSTR bstrBusinessCategory);
        END_INTERFACE
    } IADsOUVtbl;
    interface IADsOU
    {
        CONST_VTBL struct IADsOUVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_LocalityName(This,retval) )
    ( (This)->lpVtbl -> put_LocalityName(This,bstrLocalityName) )
    ( (This)->lpVtbl -> get_PostalAddress(This,retval) )
    ( (This)->lpVtbl -> put_PostalAddress(This,bstrPostalAddress) )
    ( (This)->lpVtbl -> get_TelephoneNumber(This,retval) )
    ( (This)->lpVtbl -> put_TelephoneNumber(This,bstrTelephoneNumber) )
    ( (This)->lpVtbl -> get_FaxNumber(This,retval) )
    ( (This)->lpVtbl -> put_FaxNumber(This,bstrFaxNumber) )
    ( (This)->lpVtbl -> get_SeeAlso(This,retval) )
    ( (This)->lpVtbl -> put_SeeAlso(This,vSeeAlso) )
    ( (This)->lpVtbl -> get_BusinessCategory(This,retval) )
    ( (This)->lpVtbl -> put_BusinessCategory(This,bstrBusinessCategory) )
EXTERN_C const IID IID_IADsDomain;
    typedef struct IADsDomainVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsDomain * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsDomain * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsDomain * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsDomain * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsDomain * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsDomain * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsDomain * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsDomain * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsDomain * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsDomain * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsDomain * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsDomain * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsDomain * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsDomain * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsDomain * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsDomain * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsDomain * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsDomain * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsDomain * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsDomain * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_IsWorkgroup )(
            __RPC__in IADsDomain * This,
                                __RPC__out VARIANT_BOOL *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_MinPasswordLength )(
            __RPC__in IADsDomain * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_MinPasswordLength )(
            __RPC__in IADsDomain * This,
                       long lnMinPasswordLength);
                            HRESULT ( STDMETHODCALLTYPE *get_MinPasswordAge )(
            __RPC__in IADsDomain * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_MinPasswordAge )(
            __RPC__in IADsDomain * This,
                       long lnMinPasswordAge);
                            HRESULT ( STDMETHODCALLTYPE *get_MaxPasswordAge )(
            __RPC__in IADsDomain * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_MaxPasswordAge )(
            __RPC__in IADsDomain * This,
                       long lnMaxPasswordAge);
                            HRESULT ( STDMETHODCALLTYPE *get_MaxBadPasswordsAllowed )(
            __RPC__in IADsDomain * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_MaxBadPasswordsAllowed )(
            __RPC__in IADsDomain * This,
                       long lnMaxBadPasswordsAllowed);
                            HRESULT ( STDMETHODCALLTYPE *get_PasswordHistoryLength )(
            __RPC__in IADsDomain * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PasswordHistoryLength )(
            __RPC__in IADsDomain * This,
                       long lnPasswordHistoryLength);
                            HRESULT ( STDMETHODCALLTYPE *get_PasswordAttributes )(
            __RPC__in IADsDomain * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PasswordAttributes )(
            __RPC__in IADsDomain * This,
                       long lnPasswordAttributes);
                            HRESULT ( STDMETHODCALLTYPE *get_AutoUnlockInterval )(
            __RPC__in IADsDomain * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_AutoUnlockInterval )(
            __RPC__in IADsDomain * This,
                       long lnAutoUnlockInterval);
                            HRESULT ( STDMETHODCALLTYPE *get_LockoutObservationInterval )(
            __RPC__in IADsDomain * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_LockoutObservationInterval )(
            __RPC__in IADsDomain * This,
                       long lnLockoutObservationInterval);
        END_INTERFACE
    } IADsDomainVtbl;
    interface IADsDomain
    {
        CONST_VTBL struct IADsDomainVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_IsWorkgroup(This,retval) )
    ( (This)->lpVtbl -> get_MinPasswordLength(This,retval) )
    ( (This)->lpVtbl -> put_MinPasswordLength(This,lnMinPasswordLength) )
    ( (This)->lpVtbl -> get_MinPasswordAge(This,retval) )
    ( (This)->lpVtbl -> put_MinPasswordAge(This,lnMinPasswordAge) )
    ( (This)->lpVtbl -> get_MaxPasswordAge(This,retval) )
    ( (This)->lpVtbl -> put_MaxPasswordAge(This,lnMaxPasswordAge) )
    ( (This)->lpVtbl -> get_MaxBadPasswordsAllowed(This,retval) )
    ( (This)->lpVtbl -> put_MaxBadPasswordsAllowed(This,lnMaxBadPasswordsAllowed) )
    ( (This)->lpVtbl -> get_PasswordHistoryLength(This,retval) )
    ( (This)->lpVtbl -> put_PasswordHistoryLength(This,lnPasswordHistoryLength) )
    ( (This)->lpVtbl -> get_PasswordAttributes(This,retval) )
    ( (This)->lpVtbl -> put_PasswordAttributes(This,lnPasswordAttributes) )
    ( (This)->lpVtbl -> get_AutoUnlockInterval(This,retval) )
    ( (This)->lpVtbl -> put_AutoUnlockInterval(This,lnAutoUnlockInterval) )
    ( (This)->lpVtbl -> get_LockoutObservationInterval(This,retval) )
    ( (This)->lpVtbl -> put_LockoutObservationInterval(This,lnLockoutObservationInterval) )
EXTERN_C const IID IID_IADsComputer;
    typedef struct IADsComputerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsComputer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsComputer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsComputer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsComputer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsComputer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsComputer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsComputer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsComputer * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsComputer * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsComputer * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsComputer * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_ComputerID )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Site )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrDescription);
                            HRESULT ( STDMETHODCALLTYPE *get_Location )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Location )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrLocation);
                            HRESULT ( STDMETHODCALLTYPE *get_PrimaryUser )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PrimaryUser )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrPrimaryUser);
                            HRESULT ( STDMETHODCALLTYPE *get_Owner )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Owner )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrOwner);
                            HRESULT ( STDMETHODCALLTYPE *get_Division )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Division )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrDivision);
                            HRESULT ( STDMETHODCALLTYPE *get_Department )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Department )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrDepartment);
                            HRESULT ( STDMETHODCALLTYPE *get_Role )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Role )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrRole);
                            HRESULT ( STDMETHODCALLTYPE *get_OperatingSystem )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_OperatingSystem )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrOperatingSystem);
                            HRESULT ( STDMETHODCALLTYPE *get_OperatingSystemVersion )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_OperatingSystemVersion )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrOperatingSystemVersion);
                            HRESULT ( STDMETHODCALLTYPE *get_Model )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Model )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrModel);
                            HRESULT ( STDMETHODCALLTYPE *get_Processor )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Processor )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrProcessor);
                            HRESULT ( STDMETHODCALLTYPE *get_ProcessorCount )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ProcessorCount )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrProcessorCount);
                            HRESULT ( STDMETHODCALLTYPE *get_MemorySize )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_MemorySize )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrMemorySize);
                            HRESULT ( STDMETHODCALLTYPE *get_StorageCapacity )(
            __RPC__in IADsComputer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_StorageCapacity )(
            __RPC__in IADsComputer * This,
                       __RPC__in BSTR bstrStorageCapacity);
                            HRESULT ( STDMETHODCALLTYPE *get_NetAddresses )(
            __RPC__in IADsComputer * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_NetAddresses )(
            __RPC__in IADsComputer * This,
                       VARIANT vNetAddresses);
        END_INTERFACE
    } IADsComputerVtbl;
    interface IADsComputer
    {
        CONST_VTBL struct IADsComputerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_ComputerID(This,retval) )
    ( (This)->lpVtbl -> get_Site(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_Location(This,retval) )
    ( (This)->lpVtbl -> put_Location(This,bstrLocation) )
    ( (This)->lpVtbl -> get_PrimaryUser(This,retval) )
    ( (This)->lpVtbl -> put_PrimaryUser(This,bstrPrimaryUser) )
    ( (This)->lpVtbl -> get_Owner(This,retval) )
    ( (This)->lpVtbl -> put_Owner(This,bstrOwner) )
    ( (This)->lpVtbl -> get_Division(This,retval) )
    ( (This)->lpVtbl -> put_Division(This,bstrDivision) )
    ( (This)->lpVtbl -> get_Department(This,retval) )
    ( (This)->lpVtbl -> put_Department(This,bstrDepartment) )
    ( (This)->lpVtbl -> get_Role(This,retval) )
    ( (This)->lpVtbl -> put_Role(This,bstrRole) )
    ( (This)->lpVtbl -> get_OperatingSystem(This,retval) )
    ( (This)->lpVtbl -> put_OperatingSystem(This,bstrOperatingSystem) )
    ( (This)->lpVtbl -> get_OperatingSystemVersion(This,retval) )
    ( (This)->lpVtbl -> put_OperatingSystemVersion(This,bstrOperatingSystemVersion) )
    ( (This)->lpVtbl -> get_Model(This,retval) )
    ( (This)->lpVtbl -> put_Model(This,bstrModel) )
    ( (This)->lpVtbl -> get_Processor(This,retval) )
    ( (This)->lpVtbl -> put_Processor(This,bstrProcessor) )
    ( (This)->lpVtbl -> get_ProcessorCount(This,retval) )
    ( (This)->lpVtbl -> put_ProcessorCount(This,bstrProcessorCount) )
    ( (This)->lpVtbl -> get_MemorySize(This,retval) )
    ( (This)->lpVtbl -> put_MemorySize(This,bstrMemorySize) )
    ( (This)->lpVtbl -> get_StorageCapacity(This,retval) )
    ( (This)->lpVtbl -> put_StorageCapacity(This,bstrStorageCapacity) )
    ( (This)->lpVtbl -> get_NetAddresses(This,retval) )
    ( (This)->lpVtbl -> put_NetAddresses(This,vNetAddresses) )
EXTERN_C const IID IID_IADsComputerOperations;
    typedef struct IADsComputerOperationsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsComputerOperations * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsComputerOperations * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsComputerOperations * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsComputerOperations * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsComputerOperations * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsComputerOperations * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsComputerOperations * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsComputerOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsComputerOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsComputerOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsComputerOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsComputerOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsComputerOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsComputerOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsComputerOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsComputerOperations * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsComputerOperations * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsComputerOperations * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsComputerOperations * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsComputerOperations * This,
                       VARIANT vProperties,
                       long lnReserved);
                   HRESULT ( STDMETHODCALLTYPE *Status )(
            __RPC__in IADsComputerOperations * This,
                                __RPC__deref_out_opt IDispatch **ppObject);
                   HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in IADsComputerOperations * This,
                       VARIANT_BOOL bReboot);
        END_INTERFACE
    } IADsComputerOperationsVtbl;
    interface IADsComputerOperations
    {
        CONST_VTBL struct IADsComputerOperationsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> Status(This,ppObject) )
    ( (This)->lpVtbl -> Shutdown(This,bReboot) )
EXTERN_C const IID IID_IADsGroup;
    typedef struct IADsGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsGroup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsGroup * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsGroup * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsGroup * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsGroup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsGroup * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsGroup * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsGroup * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsGroup * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsGroup * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsGroup * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsGroup * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsGroup * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsGroup * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsGroup * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsGroup * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsGroup * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsGroup * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IADsGroup * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IADsGroup * This,
                       __RPC__in BSTR bstrDescription);
                   HRESULT ( STDMETHODCALLTYPE *Members )(
            __RPC__in IADsGroup * This,
                                __RPC__deref_out_opt IADsMembers **ppMembers);
                   HRESULT ( STDMETHODCALLTYPE *IsMember )(
            __RPC__in IADsGroup * This,
                       __RPC__in BSTR bstrMember,
                                __RPC__out VARIANT_BOOL *bMember);
                   HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IADsGroup * This,
                       __RPC__in BSTR bstrNewItem);
                   HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IADsGroup * This,
                       __RPC__in BSTR bstrItemToBeRemoved);
        END_INTERFACE
    } IADsGroupVtbl;
    interface IADsGroup
    {
        CONST_VTBL struct IADsGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> Members(This,ppMembers) )
    ( (This)->lpVtbl -> IsMember(This,bstrMember,bMember) )
    ( (This)->lpVtbl -> Add(This,bstrNewItem) )
    ( (This)->lpVtbl -> Remove(This,bstrItemToBeRemoved) )
EXTERN_C const IID IID_IADsUser;
    typedef struct IADsUserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsUser * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsUser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsUser * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsUser * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsUser * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsUser * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsUser * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsUser * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsUser * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsUser * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsUser * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_BadLoginAddress )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_BadLoginCount )(
            __RPC__in IADsUser * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_LastLogin )(
            __RPC__in IADsUser * This,
                                __RPC__out DATE *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_LastLogoff )(
            __RPC__in IADsUser * This,
                                __RPC__out DATE *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_LastFailedLogin )(
            __RPC__in IADsUser * This,
                                __RPC__out DATE *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_PasswordLastChanged )(
            __RPC__in IADsUser * This,
                                __RPC__out DATE *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrDescription);
                            HRESULT ( STDMETHODCALLTYPE *get_Division )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Division )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrDivision);
                            HRESULT ( STDMETHODCALLTYPE *get_Department )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Department )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrDepartment);
                            HRESULT ( STDMETHODCALLTYPE *get_EmployeeID )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_EmployeeID )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrEmployeeID);
                            HRESULT ( STDMETHODCALLTYPE *get_FullName )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_FullName )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrFullName);
                            HRESULT ( STDMETHODCALLTYPE *get_FirstName )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_FirstName )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrFirstName);
                            HRESULT ( STDMETHODCALLTYPE *get_LastName )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_LastName )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrLastName);
                            HRESULT ( STDMETHODCALLTYPE *get_OtherName )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_OtherName )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrOtherName);
                            HRESULT ( STDMETHODCALLTYPE *get_NamePrefix )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_NamePrefix )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrNamePrefix);
                            HRESULT ( STDMETHODCALLTYPE *get_NameSuffix )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_NameSuffix )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrNameSuffix);
                            HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Title )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrTitle);
                            HRESULT ( STDMETHODCALLTYPE *get_Manager )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Manager )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrManager);
                            HRESULT ( STDMETHODCALLTYPE *get_TelephoneHome )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_TelephoneHome )(
            __RPC__in IADsUser * This,
                       VARIANT vTelephoneHome);
                            HRESULT ( STDMETHODCALLTYPE *get_TelephoneMobile )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_TelephoneMobile )(
            __RPC__in IADsUser * This,
                       VARIANT vTelephoneMobile);
                            HRESULT ( STDMETHODCALLTYPE *get_TelephoneNumber )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_TelephoneNumber )(
            __RPC__in IADsUser * This,
                       VARIANT vTelephoneNumber);
                            HRESULT ( STDMETHODCALLTYPE *get_TelephonePager )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_TelephonePager )(
            __RPC__in IADsUser * This,
                       VARIANT vTelephonePager);
                            HRESULT ( STDMETHODCALLTYPE *get_FaxNumber )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_FaxNumber )(
            __RPC__in IADsUser * This,
                       VARIANT vFaxNumber);
                            HRESULT ( STDMETHODCALLTYPE *get_OfficeLocations )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_OfficeLocations )(
            __RPC__in IADsUser * This,
                       VARIANT vOfficeLocations);
                            HRESULT ( STDMETHODCALLTYPE *get_PostalAddresses )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PostalAddresses )(
            __RPC__in IADsUser * This,
                       VARIANT vPostalAddresses);
                            HRESULT ( STDMETHODCALLTYPE *get_PostalCodes )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PostalCodes )(
            __RPC__in IADsUser * This,
                       VARIANT vPostalCodes);
                            HRESULT ( STDMETHODCALLTYPE *get_SeeAlso )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_SeeAlso )(
            __RPC__in IADsUser * This,
                       VARIANT vSeeAlso);
                            HRESULT ( STDMETHODCALLTYPE *get_AccountDisabled )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT_BOOL *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_AccountDisabled )(
            __RPC__in IADsUser * This,
                       VARIANT_BOOL fAccountDisabled);
                            HRESULT ( STDMETHODCALLTYPE *get_AccountExpirationDate )(
            __RPC__in IADsUser * This,
                                __RPC__out DATE *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_AccountExpirationDate )(
            __RPC__in IADsUser * This,
                       DATE daAccountExpirationDate);
                            HRESULT ( STDMETHODCALLTYPE *get_GraceLoginsAllowed )(
            __RPC__in IADsUser * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_GraceLoginsAllowed )(
            __RPC__in IADsUser * This,
                       long lnGraceLoginsAllowed);
                            HRESULT ( STDMETHODCALLTYPE *get_GraceLoginsRemaining )(
            __RPC__in IADsUser * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_GraceLoginsRemaining )(
            __RPC__in IADsUser * This,
                       long lnGraceLoginsRemaining);
                            HRESULT ( STDMETHODCALLTYPE *get_IsAccountLocked )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT_BOOL *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_IsAccountLocked )(
            __RPC__in IADsUser * This,
                       VARIANT_BOOL fIsAccountLocked);
                            HRESULT ( STDMETHODCALLTYPE *get_LoginHours )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_LoginHours )(
            __RPC__in IADsUser * This,
                       VARIANT vLoginHours);
                            HRESULT ( STDMETHODCALLTYPE *get_LoginWorkstations )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_LoginWorkstations )(
            __RPC__in IADsUser * This,
                       VARIANT vLoginWorkstations);
                            HRESULT ( STDMETHODCALLTYPE *get_MaxLogins )(
            __RPC__in IADsUser * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_MaxLogins )(
            __RPC__in IADsUser * This,
                       long lnMaxLogins);
                            HRESULT ( STDMETHODCALLTYPE *get_MaxStorage )(
            __RPC__in IADsUser * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_MaxStorage )(
            __RPC__in IADsUser * This,
                       long lnMaxStorage);
                            HRESULT ( STDMETHODCALLTYPE *get_PasswordExpirationDate )(
            __RPC__in IADsUser * This,
                                __RPC__out DATE *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PasswordExpirationDate )(
            __RPC__in IADsUser * This,
                       DATE daPasswordExpirationDate);
                            HRESULT ( STDMETHODCALLTYPE *get_PasswordMinimumLength )(
            __RPC__in IADsUser * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PasswordMinimumLength )(
            __RPC__in IADsUser * This,
                       long lnPasswordMinimumLength);
                            HRESULT ( STDMETHODCALLTYPE *get_PasswordRequired )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT_BOOL *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PasswordRequired )(
            __RPC__in IADsUser * This,
                       VARIANT_BOOL fPasswordRequired);
                            HRESULT ( STDMETHODCALLTYPE *get_RequireUniquePassword )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT_BOOL *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_RequireUniquePassword )(
            __RPC__in IADsUser * This,
                       VARIANT_BOOL fRequireUniquePassword);
                            HRESULT ( STDMETHODCALLTYPE *get_EmailAddress )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_EmailAddress )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrEmailAddress);
                            HRESULT ( STDMETHODCALLTYPE *get_HomeDirectory )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_HomeDirectory )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrHomeDirectory);
                            HRESULT ( STDMETHODCALLTYPE *get_Languages )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Languages )(
            __RPC__in IADsUser * This,
                       VARIANT vLanguages);
                            HRESULT ( STDMETHODCALLTYPE *get_Profile )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Profile )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrProfile);
                            HRESULT ( STDMETHODCALLTYPE *get_LoginScript )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_LoginScript )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrLoginScript);
                            HRESULT ( STDMETHODCALLTYPE *get_Picture )(
            __RPC__in IADsUser * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Picture )(
            __RPC__in IADsUser * This,
                       VARIANT vPicture);
                            HRESULT ( STDMETHODCALLTYPE *get_HomePage )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_HomePage )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrHomePage);
                   HRESULT ( STDMETHODCALLTYPE *Groups )(
            __RPC__in IADsUser * This,
                                __RPC__deref_out_opt IADsMembers **ppGroups);
                   HRESULT ( STDMETHODCALLTYPE *SetPassword )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR NewPassword);
                   HRESULT ( STDMETHODCALLTYPE *ChangePassword )(
            __RPC__in IADsUser * This,
                       __RPC__in BSTR bstrOldPassword,
                       __RPC__in BSTR bstrNewPassword);
        END_INTERFACE
    } IADsUserVtbl;
    interface IADsUser
    {
        CONST_VTBL struct IADsUserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_BadLoginAddress(This,retval) )
    ( (This)->lpVtbl -> get_BadLoginCount(This,retval) )
    ( (This)->lpVtbl -> get_LastLogin(This,retval) )
    ( (This)->lpVtbl -> get_LastLogoff(This,retval) )
    ( (This)->lpVtbl -> get_LastFailedLogin(This,retval) )
    ( (This)->lpVtbl -> get_PasswordLastChanged(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_Division(This,retval) )
    ( (This)->lpVtbl -> put_Division(This,bstrDivision) )
    ( (This)->lpVtbl -> get_Department(This,retval) )
    ( (This)->lpVtbl -> put_Department(This,bstrDepartment) )
    ( (This)->lpVtbl -> get_EmployeeID(This,retval) )
    ( (This)->lpVtbl -> put_EmployeeID(This,bstrEmployeeID) )
    ( (This)->lpVtbl -> get_FullName(This,retval) )
    ( (This)->lpVtbl -> put_FullName(This,bstrFullName) )
    ( (This)->lpVtbl -> get_FirstName(This,retval) )
    ( (This)->lpVtbl -> put_FirstName(This,bstrFirstName) )
    ( (This)->lpVtbl -> get_LastName(This,retval) )
    ( (This)->lpVtbl -> put_LastName(This,bstrLastName) )
    ( (This)->lpVtbl -> get_OtherName(This,retval) )
    ( (This)->lpVtbl -> put_OtherName(This,bstrOtherName) )
    ( (This)->lpVtbl -> get_NamePrefix(This,retval) )
    ( (This)->lpVtbl -> put_NamePrefix(This,bstrNamePrefix) )
    ( (This)->lpVtbl -> get_NameSuffix(This,retval) )
    ( (This)->lpVtbl -> put_NameSuffix(This,bstrNameSuffix) )
    ( (This)->lpVtbl -> get_Title(This,retval) )
    ( (This)->lpVtbl -> put_Title(This,bstrTitle) )
    ( (This)->lpVtbl -> get_Manager(This,retval) )
    ( (This)->lpVtbl -> put_Manager(This,bstrManager) )
    ( (This)->lpVtbl -> get_TelephoneHome(This,retval) )
    ( (This)->lpVtbl -> put_TelephoneHome(This,vTelephoneHome) )
    ( (This)->lpVtbl -> get_TelephoneMobile(This,retval) )
    ( (This)->lpVtbl -> put_TelephoneMobile(This,vTelephoneMobile) )
    ( (This)->lpVtbl -> get_TelephoneNumber(This,retval) )
    ( (This)->lpVtbl -> put_TelephoneNumber(This,vTelephoneNumber) )
    ( (This)->lpVtbl -> get_TelephonePager(This,retval) )
    ( (This)->lpVtbl -> put_TelephonePager(This,vTelephonePager) )
    ( (This)->lpVtbl -> get_FaxNumber(This,retval) )
    ( (This)->lpVtbl -> put_FaxNumber(This,vFaxNumber) )
    ( (This)->lpVtbl -> get_OfficeLocations(This,retval) )
    ( (This)->lpVtbl -> put_OfficeLocations(This,vOfficeLocations) )
    ( (This)->lpVtbl -> get_PostalAddresses(This,retval) )
    ( (This)->lpVtbl -> put_PostalAddresses(This,vPostalAddresses) )
    ( (This)->lpVtbl -> get_PostalCodes(This,retval) )
    ( (This)->lpVtbl -> put_PostalCodes(This,vPostalCodes) )
    ( (This)->lpVtbl -> get_SeeAlso(This,retval) )
    ( (This)->lpVtbl -> put_SeeAlso(This,vSeeAlso) )
    ( (This)->lpVtbl -> get_AccountDisabled(This,retval) )
    ( (This)->lpVtbl -> put_AccountDisabled(This,fAccountDisabled) )
    ( (This)->lpVtbl -> get_AccountExpirationDate(This,retval) )
    ( (This)->lpVtbl -> put_AccountExpirationDate(This,daAccountExpirationDate) )
    ( (This)->lpVtbl -> get_GraceLoginsAllowed(This,retval) )
    ( (This)->lpVtbl -> put_GraceLoginsAllowed(This,lnGraceLoginsAllowed) )
    ( (This)->lpVtbl -> get_GraceLoginsRemaining(This,retval) )
    ( (This)->lpVtbl -> put_GraceLoginsRemaining(This,lnGraceLoginsRemaining) )
    ( (This)->lpVtbl -> get_IsAccountLocked(This,retval) )
    ( (This)->lpVtbl -> put_IsAccountLocked(This,fIsAccountLocked) )
    ( (This)->lpVtbl -> get_LoginHours(This,retval) )
    ( (This)->lpVtbl -> put_LoginHours(This,vLoginHours) )
    ( (This)->lpVtbl -> get_LoginWorkstations(This,retval) )
    ( (This)->lpVtbl -> put_LoginWorkstations(This,vLoginWorkstations) )
    ( (This)->lpVtbl -> get_MaxLogins(This,retval) )
    ( (This)->lpVtbl -> put_MaxLogins(This,lnMaxLogins) )
    ( (This)->lpVtbl -> get_MaxStorage(This,retval) )
    ( (This)->lpVtbl -> put_MaxStorage(This,lnMaxStorage) )
    ( (This)->lpVtbl -> get_PasswordExpirationDate(This,retval) )
    ( (This)->lpVtbl -> put_PasswordExpirationDate(This,daPasswordExpirationDate) )
    ( (This)->lpVtbl -> get_PasswordMinimumLength(This,retval) )
    ( (This)->lpVtbl -> put_PasswordMinimumLength(This,lnPasswordMinimumLength) )
    ( (This)->lpVtbl -> get_PasswordRequired(This,retval) )
    ( (This)->lpVtbl -> put_PasswordRequired(This,fPasswordRequired) )
    ( (This)->lpVtbl -> get_RequireUniquePassword(This,retval) )
    ( (This)->lpVtbl -> put_RequireUniquePassword(This,fRequireUniquePassword) )
    ( (This)->lpVtbl -> get_EmailAddress(This,retval) )
    ( (This)->lpVtbl -> put_EmailAddress(This,bstrEmailAddress) )
    ( (This)->lpVtbl -> get_HomeDirectory(This,retval) )
    ( (This)->lpVtbl -> put_HomeDirectory(This,bstrHomeDirectory) )
    ( (This)->lpVtbl -> get_Languages(This,retval) )
    ( (This)->lpVtbl -> put_Languages(This,vLanguages) )
    ( (This)->lpVtbl -> get_Profile(This,retval) )
    ( (This)->lpVtbl -> put_Profile(This,bstrProfile) )
    ( (This)->lpVtbl -> get_LoginScript(This,retval) )
    ( (This)->lpVtbl -> put_LoginScript(This,bstrLoginScript) )
    ( (This)->lpVtbl -> get_Picture(This,retval) )
    ( (This)->lpVtbl -> put_Picture(This,vPicture) )
    ( (This)->lpVtbl -> get_HomePage(This,retval) )
    ( (This)->lpVtbl -> put_HomePage(This,bstrHomePage) )
    ( (This)->lpVtbl -> Groups(This,ppGroups) )
    ( (This)->lpVtbl -> SetPassword(This,NewPassword) )
    ( (This)->lpVtbl -> ChangePassword(This,bstrOldPassword,bstrNewPassword) )
EXTERN_C const IID IID_IADsPrintQueue;
    typedef struct IADsPrintQueueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsPrintQueue * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsPrintQueue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsPrintQueue * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsPrintQueue * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsPrintQueue * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsPrintQueue * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsPrintQueue * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsPrintQueue * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsPrintQueue * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsPrintQueue * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsPrintQueue * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsPrintQueue * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsPrintQueue * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsPrintQueue * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_PrinterPath )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PrinterPath )(
            __RPC__in IADsPrintQueue * This,
                       __RPC__in BSTR bstrPrinterPath);
                            HRESULT ( STDMETHODCALLTYPE *get_Model )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Model )(
            __RPC__in IADsPrintQueue * This,
                       __RPC__in BSTR bstrModel);
                            HRESULT ( STDMETHODCALLTYPE *get_Datatype )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Datatype )(
            __RPC__in IADsPrintQueue * This,
                       __RPC__in BSTR bstrDatatype);
                            HRESULT ( STDMETHODCALLTYPE *get_PrintProcessor )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PrintProcessor )(
            __RPC__in IADsPrintQueue * This,
                       __RPC__in BSTR bstrPrintProcessor);
                            HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IADsPrintQueue * This,
                       __RPC__in BSTR bstrDescription);
                            HRESULT ( STDMETHODCALLTYPE *get_Location )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Location )(
            __RPC__in IADsPrintQueue * This,
                       __RPC__in BSTR bstrLocation);
                            HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__out DATE *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
            __RPC__in IADsPrintQueue * This,
                       DATE daStartTime);
                            HRESULT ( STDMETHODCALLTYPE *get_UntilTime )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__out DATE *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_UntilTime )(
            __RPC__in IADsPrintQueue * This,
                       DATE daUntilTime);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultJobPriority )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultJobPriority )(
            __RPC__in IADsPrintQueue * This,
                       long lnDefaultJobPriority);
                            HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Priority )(
            __RPC__in IADsPrintQueue * This,
                       long lnPriority);
                            HRESULT ( STDMETHODCALLTYPE *get_BannerPage )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_BannerPage )(
            __RPC__in IADsPrintQueue * This,
                       __RPC__in BSTR bstrBannerPage);
                            HRESULT ( STDMETHODCALLTYPE *get_PrintDevices )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PrintDevices )(
            __RPC__in IADsPrintQueue * This,
                       VARIANT vPrintDevices);
                            HRESULT ( STDMETHODCALLTYPE *get_NetAddresses )(
            __RPC__in IADsPrintQueue * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_NetAddresses )(
            __RPC__in IADsPrintQueue * This,
                       VARIANT vNetAddresses);
        END_INTERFACE
    } IADsPrintQueueVtbl;
    interface IADsPrintQueue
    {
        CONST_VTBL struct IADsPrintQueueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_PrinterPath(This,retval) )
    ( (This)->lpVtbl -> put_PrinterPath(This,bstrPrinterPath) )
    ( (This)->lpVtbl -> get_Model(This,retval) )
    ( (This)->lpVtbl -> put_Model(This,bstrModel) )
    ( (This)->lpVtbl -> get_Datatype(This,retval) )
    ( (This)->lpVtbl -> put_Datatype(This,bstrDatatype) )
    ( (This)->lpVtbl -> get_PrintProcessor(This,retval) )
    ( (This)->lpVtbl -> put_PrintProcessor(This,bstrPrintProcessor) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_Location(This,retval) )
    ( (This)->lpVtbl -> put_Location(This,bstrLocation) )
    ( (This)->lpVtbl -> get_StartTime(This,retval) )
    ( (This)->lpVtbl -> put_StartTime(This,daStartTime) )
    ( (This)->lpVtbl -> get_UntilTime(This,retval) )
    ( (This)->lpVtbl -> put_UntilTime(This,daUntilTime) )
    ( (This)->lpVtbl -> get_DefaultJobPriority(This,retval) )
    ( (This)->lpVtbl -> put_DefaultJobPriority(This,lnDefaultJobPriority) )
    ( (This)->lpVtbl -> get_Priority(This,retval) )
    ( (This)->lpVtbl -> put_Priority(This,lnPriority) )
    ( (This)->lpVtbl -> get_BannerPage(This,retval) )
    ( (This)->lpVtbl -> put_BannerPage(This,bstrBannerPage) )
    ( (This)->lpVtbl -> get_PrintDevices(This,retval) )
    ( (This)->lpVtbl -> put_PrintDevices(This,vPrintDevices) )
    ( (This)->lpVtbl -> get_NetAddresses(This,retval) )
    ( (This)->lpVtbl -> put_NetAddresses(This,vNetAddresses) )
EXTERN_C const IID IID_IADsPrintQueueOperations;
    typedef struct IADsPrintQueueOperationsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsPrintQueueOperations * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsPrintQueueOperations * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsPrintQueueOperations * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsPrintQueueOperations * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsPrintQueueOperations * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsPrintQueueOperations * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsPrintQueueOperations * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsPrintQueueOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsPrintQueueOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsPrintQueueOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsPrintQueueOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsPrintQueueOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsPrintQueueOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsPrintQueueOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsPrintQueueOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsPrintQueueOperations * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsPrintQueueOperations * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsPrintQueueOperations * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsPrintQueueOperations * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsPrintQueueOperations * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IADsPrintQueueOperations * This,
                                __RPC__out long *retval);
                   HRESULT ( STDMETHODCALLTYPE *PrintJobs )(
            __RPC__in IADsPrintQueueOperations * This,
                                __RPC__deref_out_opt IADsCollection **pObject);
                   HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IADsPrintQueueOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IADsPrintQueueOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *Purge )(
            __RPC__in IADsPrintQueueOperations * This);
        END_INTERFACE
    } IADsPrintQueueOperationsVtbl;
    interface IADsPrintQueueOperations
    {
        CONST_VTBL struct IADsPrintQueueOperationsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_Status(This,retval) )
    ( (This)->lpVtbl -> PrintJobs(This,pObject) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> Purge(This) )
EXTERN_C const IID IID_IADsPrintJob;
    typedef struct IADsPrintJobVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsPrintJob * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsPrintJob * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsPrintJob * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsPrintJob * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsPrintJob * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsPrintJob * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsPrintJob * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsPrintJob * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsPrintJob * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsPrintJob * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsPrintJob * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsPrintJob * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsPrintJob * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsPrintJob * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsPrintJob * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsPrintJob * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsPrintJob * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsPrintJob * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsPrintJob * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsPrintJob * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_HostPrintQueue )(
            __RPC__in IADsPrintJob * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_User )(
            __RPC__in IADsPrintJob * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_UserPath )(
            __RPC__in IADsPrintJob * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_TimeSubmitted )(
            __RPC__in IADsPrintJob * This,
                                __RPC__out DATE *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_TotalPages )(
            __RPC__in IADsPrintJob * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in IADsPrintJob * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IADsPrintJob * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IADsPrintJob * This,
                       __RPC__in BSTR bstrDescription);
                            HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IADsPrintJob * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Priority )(
            __RPC__in IADsPrintJob * This,
                       long lnPriority);
                            HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
            __RPC__in IADsPrintJob * This,
                                __RPC__out DATE *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
            __RPC__in IADsPrintJob * This,
                       DATE daStartTime);
                            HRESULT ( STDMETHODCALLTYPE *get_UntilTime )(
            __RPC__in IADsPrintJob * This,
                                __RPC__out DATE *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_UntilTime )(
            __RPC__in IADsPrintJob * This,
                       DATE daUntilTime);
                            HRESULT ( STDMETHODCALLTYPE *get_Notify )(
            __RPC__in IADsPrintJob * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Notify )(
            __RPC__in IADsPrintJob * This,
                       __RPC__in BSTR bstrNotify);
                            HRESULT ( STDMETHODCALLTYPE *get_NotifyPath )(
            __RPC__in IADsPrintJob * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_NotifyPath )(
            __RPC__in IADsPrintJob * This,
                       __RPC__in BSTR bstrNotifyPath);
        END_INTERFACE
    } IADsPrintJobVtbl;
    interface IADsPrintJob
    {
        CONST_VTBL struct IADsPrintJobVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_HostPrintQueue(This,retval) )
    ( (This)->lpVtbl -> get_User(This,retval) )
    ( (This)->lpVtbl -> get_UserPath(This,retval) )
    ( (This)->lpVtbl -> get_TimeSubmitted(This,retval) )
    ( (This)->lpVtbl -> get_TotalPages(This,retval) )
    ( (This)->lpVtbl -> get_Size(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_Priority(This,retval) )
    ( (This)->lpVtbl -> put_Priority(This,lnPriority) )
    ( (This)->lpVtbl -> get_StartTime(This,retval) )
    ( (This)->lpVtbl -> put_StartTime(This,daStartTime) )
    ( (This)->lpVtbl -> get_UntilTime(This,retval) )
    ( (This)->lpVtbl -> put_UntilTime(This,daUntilTime) )
    ( (This)->lpVtbl -> get_Notify(This,retval) )
    ( (This)->lpVtbl -> put_Notify(This,bstrNotify) )
    ( (This)->lpVtbl -> get_NotifyPath(This,retval) )
    ( (This)->lpVtbl -> put_NotifyPath(This,bstrNotifyPath) )
EXTERN_C const IID IID_IADsPrintJobOperations;
    typedef struct IADsPrintJobOperationsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsPrintJobOperations * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsPrintJobOperations * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsPrintJobOperations * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsPrintJobOperations * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsPrintJobOperations * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsPrintJobOperations * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsPrintJobOperations * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsPrintJobOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsPrintJobOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsPrintJobOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsPrintJobOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsPrintJobOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsPrintJobOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsPrintJobOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsPrintJobOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsPrintJobOperations * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsPrintJobOperations * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsPrintJobOperations * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsPrintJobOperations * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsPrintJobOperations * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IADsPrintJobOperations * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_TimeElapsed )(
            __RPC__in IADsPrintJobOperations * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_PagesPrinted )(
            __RPC__in IADsPrintJobOperations * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Position )(
            __RPC__in IADsPrintJobOperations * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Position )(
            __RPC__in IADsPrintJobOperations * This,
                       long lnPosition);
                   HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IADsPrintJobOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IADsPrintJobOperations * This);
        END_INTERFACE
    } IADsPrintJobOperationsVtbl;
    interface IADsPrintJobOperations
    {
        CONST_VTBL struct IADsPrintJobOperationsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_Status(This,retval) )
    ( (This)->lpVtbl -> get_TimeElapsed(This,retval) )
    ( (This)->lpVtbl -> get_PagesPrinted(This,retval) )
    ( (This)->lpVtbl -> get_Position(This,retval) )
    ( (This)->lpVtbl -> put_Position(This,lnPosition) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
EXTERN_C const IID IID_IADsService;
    typedef struct IADsServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsService * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsService * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsService * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsService * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsService * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsService * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsService * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsService * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsService * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsService * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsService * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsService * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsService * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_HostComputer )(
            __RPC__in IADsService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_HostComputer )(
            __RPC__in IADsService * This,
                       __RPC__in BSTR bstrHostComputer);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IADsService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
            __RPC__in IADsService * This,
                       __RPC__in BSTR bstrDisplayName);
                            HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in IADsService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Version )(
            __RPC__in IADsService * This,
                       __RPC__in BSTR bstrVersion);
                            HRESULT ( STDMETHODCALLTYPE *get_ServiceType )(
            __RPC__in IADsService * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ServiceType )(
            __RPC__in IADsService * This,
                       long lnServiceType);
                            HRESULT ( STDMETHODCALLTYPE *get_StartType )(
            __RPC__in IADsService * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_StartType )(
            __RPC__in IADsService * This,
                       long lnStartType);
                            HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IADsService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Path )(
            __RPC__in IADsService * This,
                       __RPC__in BSTR bstrPath);
                            HRESULT ( STDMETHODCALLTYPE *get_StartupParameters )(
            __RPC__in IADsService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_StartupParameters )(
            __RPC__in IADsService * This,
                       __RPC__in BSTR bstrStartupParameters);
                            HRESULT ( STDMETHODCALLTYPE *get_ErrorControl )(
            __RPC__in IADsService * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ErrorControl )(
            __RPC__in IADsService * This,
                       long lnErrorControl);
                            HRESULT ( STDMETHODCALLTYPE *get_LoadOrderGroup )(
            __RPC__in IADsService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_LoadOrderGroup )(
            __RPC__in IADsService * This,
                       __RPC__in BSTR bstrLoadOrderGroup);
                            HRESULT ( STDMETHODCALLTYPE *get_ServiceAccountName )(
            __RPC__in IADsService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ServiceAccountName )(
            __RPC__in IADsService * This,
                       __RPC__in BSTR bstrServiceAccountName);
                            HRESULT ( STDMETHODCALLTYPE *get_ServiceAccountPath )(
            __RPC__in IADsService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ServiceAccountPath )(
            __RPC__in IADsService * This,
                       __RPC__in BSTR bstrServiceAccountPath);
                            HRESULT ( STDMETHODCALLTYPE *get_Dependencies )(
            __RPC__in IADsService * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Dependencies )(
            __RPC__in IADsService * This,
                       VARIANT vDependencies);
        END_INTERFACE
    } IADsServiceVtbl;
    interface IADsService
    {
        CONST_VTBL struct IADsServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_HostComputer(This,retval) )
    ( (This)->lpVtbl -> put_HostComputer(This,bstrHostComputer) )
    ( (This)->lpVtbl -> get_DisplayName(This,retval) )
    ( (This)->lpVtbl -> put_DisplayName(This,bstrDisplayName) )
    ( (This)->lpVtbl -> get_Version(This,retval) )
    ( (This)->lpVtbl -> put_Version(This,bstrVersion) )
    ( (This)->lpVtbl -> get_ServiceType(This,retval) )
    ( (This)->lpVtbl -> put_ServiceType(This,lnServiceType) )
    ( (This)->lpVtbl -> get_StartType(This,retval) )
    ( (This)->lpVtbl -> put_StartType(This,lnStartType) )
    ( (This)->lpVtbl -> get_Path(This,retval) )
    ( (This)->lpVtbl -> put_Path(This,bstrPath) )
    ( (This)->lpVtbl -> get_StartupParameters(This,retval) )
    ( (This)->lpVtbl -> put_StartupParameters(This,bstrStartupParameters) )
    ( (This)->lpVtbl -> get_ErrorControl(This,retval) )
    ( (This)->lpVtbl -> put_ErrorControl(This,lnErrorControl) )
    ( (This)->lpVtbl -> get_LoadOrderGroup(This,retval) )
    ( (This)->lpVtbl -> put_LoadOrderGroup(This,bstrLoadOrderGroup) )
    ( (This)->lpVtbl -> get_ServiceAccountName(This,retval) )
    ( (This)->lpVtbl -> put_ServiceAccountName(This,bstrServiceAccountName) )
    ( (This)->lpVtbl -> get_ServiceAccountPath(This,retval) )
    ( (This)->lpVtbl -> put_ServiceAccountPath(This,bstrServiceAccountPath) )
    ( (This)->lpVtbl -> get_Dependencies(This,retval) )
    ( (This)->lpVtbl -> put_Dependencies(This,vDependencies) )
EXTERN_C const IID IID_IADsServiceOperations;
    typedef struct IADsServiceOperationsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsServiceOperations * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsServiceOperations * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsServiceOperations * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsServiceOperations * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsServiceOperations * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsServiceOperations * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsServiceOperations * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsServiceOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsServiceOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsServiceOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsServiceOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsServiceOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsServiceOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsServiceOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsServiceOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsServiceOperations * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsServiceOperations * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsServiceOperations * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsServiceOperations * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsServiceOperations * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IADsServiceOperations * This,
                                __RPC__out long *retval);
                   HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IADsServiceOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IADsServiceOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IADsServiceOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *Continue )(
            __RPC__in IADsServiceOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *SetPassword )(
            __RPC__in IADsServiceOperations * This,
                       __RPC__in BSTR bstrNewPassword);
        END_INTERFACE
    } IADsServiceOperationsVtbl;
    interface IADsServiceOperations
    {
        CONST_VTBL struct IADsServiceOperationsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_Status(This,retval) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Continue(This) )
    ( (This)->lpVtbl -> SetPassword(This,bstrNewPassword) )
EXTERN_C const IID IID_IADsFileService;
    typedef struct IADsFileServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsFileService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsFileService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsFileService * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsFileService * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsFileService * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsFileService * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsFileService * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsFileService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsFileService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsFileService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsFileService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsFileService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsFileService * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsFileService * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsFileService * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsFileService * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsFileService * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsFileService * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsFileService * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsFileService * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_HostComputer )(
            __RPC__in IADsFileService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_HostComputer )(
            __RPC__in IADsFileService * This,
                       __RPC__in BSTR bstrHostComputer);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IADsFileService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
            __RPC__in IADsFileService * This,
                       __RPC__in BSTR bstrDisplayName);
                            HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in IADsFileService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Version )(
            __RPC__in IADsFileService * This,
                       __RPC__in BSTR bstrVersion);
                            HRESULT ( STDMETHODCALLTYPE *get_ServiceType )(
            __RPC__in IADsFileService * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ServiceType )(
            __RPC__in IADsFileService * This,
                       long lnServiceType);
                            HRESULT ( STDMETHODCALLTYPE *get_StartType )(
            __RPC__in IADsFileService * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_StartType )(
            __RPC__in IADsFileService * This,
                       long lnStartType);
                            HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IADsFileService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Path )(
            __RPC__in IADsFileService * This,
                       __RPC__in BSTR bstrPath);
                            HRESULT ( STDMETHODCALLTYPE *get_StartupParameters )(
            __RPC__in IADsFileService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_StartupParameters )(
            __RPC__in IADsFileService * This,
                       __RPC__in BSTR bstrStartupParameters);
                            HRESULT ( STDMETHODCALLTYPE *get_ErrorControl )(
            __RPC__in IADsFileService * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ErrorControl )(
            __RPC__in IADsFileService * This,
                       long lnErrorControl);
                            HRESULT ( STDMETHODCALLTYPE *get_LoadOrderGroup )(
            __RPC__in IADsFileService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_LoadOrderGroup )(
            __RPC__in IADsFileService * This,
                       __RPC__in BSTR bstrLoadOrderGroup);
                            HRESULT ( STDMETHODCALLTYPE *get_ServiceAccountName )(
            __RPC__in IADsFileService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ServiceAccountName )(
            __RPC__in IADsFileService * This,
                       __RPC__in BSTR bstrServiceAccountName);
                            HRESULT ( STDMETHODCALLTYPE *get_ServiceAccountPath )(
            __RPC__in IADsFileService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ServiceAccountPath )(
            __RPC__in IADsFileService * This,
                       __RPC__in BSTR bstrServiceAccountPath);
                            HRESULT ( STDMETHODCALLTYPE *get_Dependencies )(
            __RPC__in IADsFileService * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Dependencies )(
            __RPC__in IADsFileService * This,
                       VARIANT vDependencies);
                            HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IADsFileService * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IADsFileService * This,
                       __RPC__in BSTR bstrDescription);
                            HRESULT ( STDMETHODCALLTYPE *get_MaxUserCount )(
            __RPC__in IADsFileService * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_MaxUserCount )(
            __RPC__in IADsFileService * This,
                       long lnMaxUserCount);
        END_INTERFACE
    } IADsFileServiceVtbl;
    interface IADsFileService
    {
        CONST_VTBL struct IADsFileServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_HostComputer(This,retval) )
    ( (This)->lpVtbl -> put_HostComputer(This,bstrHostComputer) )
    ( (This)->lpVtbl -> get_DisplayName(This,retval) )
    ( (This)->lpVtbl -> put_DisplayName(This,bstrDisplayName) )
    ( (This)->lpVtbl -> get_Version(This,retval) )
    ( (This)->lpVtbl -> put_Version(This,bstrVersion) )
    ( (This)->lpVtbl -> get_ServiceType(This,retval) )
    ( (This)->lpVtbl -> put_ServiceType(This,lnServiceType) )
    ( (This)->lpVtbl -> get_StartType(This,retval) )
    ( (This)->lpVtbl -> put_StartType(This,lnStartType) )
    ( (This)->lpVtbl -> get_Path(This,retval) )
    ( (This)->lpVtbl -> put_Path(This,bstrPath) )
    ( (This)->lpVtbl -> get_StartupParameters(This,retval) )
    ( (This)->lpVtbl -> put_StartupParameters(This,bstrStartupParameters) )
    ( (This)->lpVtbl -> get_ErrorControl(This,retval) )
    ( (This)->lpVtbl -> put_ErrorControl(This,lnErrorControl) )
    ( (This)->lpVtbl -> get_LoadOrderGroup(This,retval) )
    ( (This)->lpVtbl -> put_LoadOrderGroup(This,bstrLoadOrderGroup) )
    ( (This)->lpVtbl -> get_ServiceAccountName(This,retval) )
    ( (This)->lpVtbl -> put_ServiceAccountName(This,bstrServiceAccountName) )
    ( (This)->lpVtbl -> get_ServiceAccountPath(This,retval) )
    ( (This)->lpVtbl -> put_ServiceAccountPath(This,bstrServiceAccountPath) )
    ( (This)->lpVtbl -> get_Dependencies(This,retval) )
    ( (This)->lpVtbl -> put_Dependencies(This,vDependencies) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_MaxUserCount(This,retval) )
    ( (This)->lpVtbl -> put_MaxUserCount(This,lnMaxUserCount) )
EXTERN_C const IID IID_IADsFileServiceOperations;
    typedef struct IADsFileServiceOperationsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsFileServiceOperations * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsFileServiceOperations * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsFileServiceOperations * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsFileServiceOperations * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsFileServiceOperations * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsFileServiceOperations * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsFileServiceOperations * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsFileServiceOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsFileServiceOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsFileServiceOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsFileServiceOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsFileServiceOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsFileServiceOperations * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsFileServiceOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsFileServiceOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsFileServiceOperations * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsFileServiceOperations * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsFileServiceOperations * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsFileServiceOperations * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsFileServiceOperations * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IADsFileServiceOperations * This,
                                __RPC__out long *retval);
                   HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IADsFileServiceOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IADsFileServiceOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IADsFileServiceOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *Continue )(
            __RPC__in IADsFileServiceOperations * This);
                   HRESULT ( STDMETHODCALLTYPE *SetPassword )(
            __RPC__in IADsFileServiceOperations * This,
                       __RPC__in BSTR bstrNewPassword);
                   HRESULT ( STDMETHODCALLTYPE *Sessions )(
            __RPC__in IADsFileServiceOperations * This,
                                __RPC__deref_out_opt IADsCollection **ppSessions);
                   HRESULT ( STDMETHODCALLTYPE *Resources )(
            __RPC__in IADsFileServiceOperations * This,
                                __RPC__deref_out_opt IADsCollection **ppResources);
        END_INTERFACE
    } IADsFileServiceOperationsVtbl;
    interface IADsFileServiceOperations
    {
        CONST_VTBL struct IADsFileServiceOperationsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_Status(This,retval) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Continue(This) )
    ( (This)->lpVtbl -> SetPassword(This,bstrNewPassword) )
    ( (This)->lpVtbl -> Sessions(This,ppSessions) )
    ( (This)->lpVtbl -> Resources(This,ppResources) )
EXTERN_C const IID IID_IADsFileShare;
    typedef struct IADsFileShareVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsFileShare * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsFileShare * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsFileShare * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsFileShare * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsFileShare * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsFileShare * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsFileShare * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsFileShare * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsFileShare * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsFileShare * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsFileShare * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsFileShare * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsFileShare * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsFileShare * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsFileShare * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsFileShare * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsFileShare * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsFileShare * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsFileShare * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsFileShare * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_CurrentUserCount )(
            __RPC__in IADsFileShare * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IADsFileShare * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IADsFileShare * This,
                       __RPC__in BSTR bstrDescription);
                            HRESULT ( STDMETHODCALLTYPE *get_HostComputer )(
            __RPC__in IADsFileShare * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_HostComputer )(
            __RPC__in IADsFileShare * This,
                       __RPC__in BSTR bstrHostComputer);
                            HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IADsFileShare * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Path )(
            __RPC__in IADsFileShare * This,
                       __RPC__in BSTR bstrPath);
                            HRESULT ( STDMETHODCALLTYPE *get_MaxUserCount )(
            __RPC__in IADsFileShare * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_MaxUserCount )(
            __RPC__in IADsFileShare * This,
                       long lnMaxUserCount);
        END_INTERFACE
    } IADsFileShareVtbl;
    interface IADsFileShare
    {
        CONST_VTBL struct IADsFileShareVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_CurrentUserCount(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_HostComputer(This,retval) )
    ( (This)->lpVtbl -> put_HostComputer(This,bstrHostComputer) )
    ( (This)->lpVtbl -> get_Path(This,retval) )
    ( (This)->lpVtbl -> put_Path(This,bstrPath) )
    ( (This)->lpVtbl -> get_MaxUserCount(This,retval) )
    ( (This)->lpVtbl -> put_MaxUserCount(This,lnMaxUserCount) )
EXTERN_C const IID IID_IADsSession;
    typedef struct IADsSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsSession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsSession * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsSession * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsSession * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsSession * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsSession * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsSession * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsSession * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsSession * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsSession * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsSession * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsSession * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsSession * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsSession * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsSession * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsSession * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsSession * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsSession * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsSession * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_User )(
            __RPC__in IADsSession * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_UserPath )(
            __RPC__in IADsSession * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Computer )(
            __RPC__in IADsSession * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ComputerPath )(
            __RPC__in IADsSession * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ConnectTime )(
            __RPC__in IADsSession * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_IdleTime )(
            __RPC__in IADsSession * This,
                                __RPC__out long *retval);
        END_INTERFACE
    } IADsSessionVtbl;
    interface IADsSession
    {
        CONST_VTBL struct IADsSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_User(This,retval) )
    ( (This)->lpVtbl -> get_UserPath(This,retval) )
    ( (This)->lpVtbl -> get_Computer(This,retval) )
    ( (This)->lpVtbl -> get_ComputerPath(This,retval) )
    ( (This)->lpVtbl -> get_ConnectTime(This,retval) )
    ( (This)->lpVtbl -> get_IdleTime(This,retval) )
EXTERN_C const IID IID_IADsResource;
    typedef struct IADsResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsResource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsResource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsResource * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsResource * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsResource * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsResource * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsResource * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IADsResource * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Class )(
            __RPC__in IADsResource * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IADsResource * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            __RPC__in IADsResource * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IADsResource * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IADsResource * This,
                                __RPC__deref_out_opt BSTR *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IADsResource * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IADsResource * This);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsResource * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            __RPC__in IADsResource * This,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsResource * This,
                       __RPC__in BSTR bstrName,
                                __RPC__out VARIANT *pvProp);
                   HRESULT ( STDMETHODCALLTYPE *PutEx )(
            __RPC__in IADsResource * This,
                       long lnControlCode,
                       __RPC__in BSTR bstrName,
                       VARIANT vProp);
                   HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            __RPC__in IADsResource * This,
                       VARIANT vProperties,
                       long lnReserved);
                            HRESULT ( STDMETHODCALLTYPE *get_User )(
            __RPC__in IADsResource * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_UserPath )(
            __RPC__in IADsResource * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IADsResource * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_LockCount )(
            __RPC__in IADsResource * This,
                                __RPC__out long *retval);
        END_INTERFACE
    } IADsResourceVtbl;
    interface IADsResource
    {
        CONST_VTBL struct IADsResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_Class(This,retval) )
    ( (This)->lpVtbl -> get_GUID(This,retval) )
    ( (This)->lpVtbl -> get_ADsPath(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Schema(This,retval) )
    ( (This)->lpVtbl -> GetInfo(This) )
    ( (This)->lpVtbl -> SetInfo(This) )
    ( (This)->lpVtbl -> Get(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> Put(This,bstrName,vProp) )
    ( (This)->lpVtbl -> GetEx(This,bstrName,pvProp) )
    ( (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp) )
    ( (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved) )
    ( (This)->lpVtbl -> get_User(This,retval) )
    ( (This)->lpVtbl -> get_UserPath(This,retval) )
    ( (This)->lpVtbl -> get_Path(This,retval) )
    ( (This)->lpVtbl -> get_LockCount(This,retval) )
EXTERN_C const IID IID_IADsOpenDSObject;
    typedef struct IADsOpenDSObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsOpenDSObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsOpenDSObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsOpenDSObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsOpenDSObject * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsOpenDSObject * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsOpenDSObject * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsOpenDSObject * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *OpenDSObject )(
            __RPC__in IADsOpenDSObject * This,
                       __RPC__in BSTR lpszDNName,
                       __RPC__in BSTR lpszUserName,
                       __RPC__in BSTR lpszPassword,
                       long lnReserved,
                                __RPC__deref_out_opt IDispatch **ppOleDsObj);
        END_INTERFACE
    } IADsOpenDSObjectVtbl;
    interface IADsOpenDSObject
    {
        CONST_VTBL struct IADsOpenDSObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OpenDSObject(This,lpszDNName,lpszUserName,lpszPassword,lnReserved,ppOleDsObj) )
EXTERN_C const IID IID_IDirectoryObject;
    typedef struct IDirectoryObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDirectoryObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDirectoryObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDirectoryObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetObjectInformation )(
            __RPC__in IDirectoryObject * This,
                        __RPC__deref_out_opt PADS_OBJECT_INFO *ppObjInfo);
        HRESULT ( STDMETHODCALLTYPE *GetObjectAttributes )(
            __RPC__in IDirectoryObject * This,
                       __RPC__deref_in_opt LPWSTR *pAttributeNames,
                       DWORD dwNumberAttributes,
                        __RPC__deref_out_opt PADS_ATTR_INFO *ppAttributeEntries,
                        __RPC__out DWORD *pdwNumAttributesReturned);
        HRESULT ( STDMETHODCALLTYPE *SetObjectAttributes )(
            __RPC__in IDirectoryObject * This,
                       __RPC__in PADS_ATTR_INFO pAttributeEntries,
                       DWORD dwNumAttributes,
                        __RPC__out DWORD *pdwNumAttributesModified);
        HRESULT ( STDMETHODCALLTYPE *CreateDSObject )(
            __RPC__in IDirectoryObject * This,
                       __RPC__in LPWSTR pszRDNName,
                       __RPC__in PADS_ATTR_INFO pAttributeEntries,
                       DWORD dwNumAttributes,
                        __RPC__deref_out_opt IDispatch **ppObject);
        HRESULT ( STDMETHODCALLTYPE *DeleteDSObject )(
            __RPC__in IDirectoryObject * This,
                       __RPC__in LPWSTR pszRDNName);
        END_INTERFACE
    } IDirectoryObjectVtbl;
    interface IDirectoryObject
    {
        CONST_VTBL struct IDirectoryObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetObjectInformation(This,ppObjInfo) )
    ( (This)->lpVtbl -> GetObjectAttributes(This,pAttributeNames,dwNumberAttributes,ppAttributeEntries,pdwNumAttributesReturned) )
    ( (This)->lpVtbl -> SetObjectAttributes(This,pAttributeEntries,dwNumAttributes,pdwNumAttributesModified) )
    ( (This)->lpVtbl -> CreateDSObject(This,pszRDNName,pAttributeEntries,dwNumAttributes,ppObject) )
    ( (This)->lpVtbl -> DeleteDSObject(This,pszRDNName) )
EXTERN_C const IID IID_IDirectorySearch;
    typedef struct IDirectorySearchVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDirectorySearch * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDirectorySearch * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDirectorySearch * This);
        HRESULT ( STDMETHODCALLTYPE *SetSearchPreference )(
            __RPC__in IDirectorySearch * This,
                       __RPC__in PADS_SEARCHPREF_INFO pSearchPrefs,
                       DWORD dwNumPrefs);
        HRESULT ( STDMETHODCALLTYPE *ExecuteSearch )(
            __RPC__in IDirectorySearch * This,
                       __RPC__in LPWSTR pszSearchFilter,
                       __RPC__deref_in_opt LPWSTR *pAttributeNames,
                       DWORD dwNumberAttributes,
                        __RPC__deref_out_opt PADS_SEARCH_HANDLE phSearchResult);
        HRESULT ( STDMETHODCALLTYPE *AbandonSearch )(
            __RPC__in IDirectorySearch * This,
                       __RPC__in ADS_SEARCH_HANDLE phSearchResult);
        HRESULT ( STDMETHODCALLTYPE *GetFirstRow )(
            __RPC__in IDirectorySearch * This,
                       __RPC__in ADS_SEARCH_HANDLE hSearchResult);
        HRESULT ( STDMETHODCALLTYPE *GetNextRow )(
            __RPC__in IDirectorySearch * This,
                       __RPC__in ADS_SEARCH_HANDLE hSearchResult);
        HRESULT ( STDMETHODCALLTYPE *GetPreviousRow )(
            __RPC__in IDirectorySearch * This,
                       __RPC__in ADS_SEARCH_HANDLE hSearchResult);
        HRESULT ( STDMETHODCALLTYPE *GetNextColumnName )(
            __RPC__in IDirectorySearch * This,
                       __RPC__in ADS_SEARCH_HANDLE hSearchHandle,
                        __RPC__deref_out_opt LPWSTR *ppszColumnName);
        HRESULT ( STDMETHODCALLTYPE *GetColumn )(
            __RPC__in IDirectorySearch * This,
                       __RPC__in ADS_SEARCH_HANDLE hSearchResult,
                       __RPC__in LPWSTR szColumnName,
                        __RPC__out PADS_SEARCH_COLUMN pSearchColumn);
        HRESULT ( STDMETHODCALLTYPE *FreeColumn )(
            __RPC__in IDirectorySearch * This,
                       __RPC__in PADS_SEARCH_COLUMN pSearchColumn);
        HRESULT ( STDMETHODCALLTYPE *CloseSearchHandle )(
            __RPC__in IDirectorySearch * This,
                       __RPC__in ADS_SEARCH_HANDLE hSearchResult);
        END_INTERFACE
    } IDirectorySearchVtbl;
    interface IDirectorySearch
    {
        CONST_VTBL struct IDirectorySearchVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSearchPreference(This,pSearchPrefs,dwNumPrefs) )
    ( (This)->lpVtbl -> ExecuteSearch(This,pszSearchFilter,pAttributeNames,dwNumberAttributes,phSearchResult) )
    ( (This)->lpVtbl -> AbandonSearch(This,phSearchResult) )
    ( (This)->lpVtbl -> GetFirstRow(This,hSearchResult) )
    ( (This)->lpVtbl -> GetNextRow(This,hSearchResult) )
    ( (This)->lpVtbl -> GetPreviousRow(This,hSearchResult) )
    ( (This)->lpVtbl -> GetNextColumnName(This,hSearchHandle,ppszColumnName) )
    ( (This)->lpVtbl -> GetColumn(This,hSearchResult,szColumnName,pSearchColumn) )
    ( (This)->lpVtbl -> FreeColumn(This,pSearchColumn) )
    ( (This)->lpVtbl -> CloseSearchHandle(This,hSearchResult) )
EXTERN_C const IID IID_IDirectorySchemaMgmt;
    typedef struct IDirectorySchemaMgmtVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDirectorySchemaMgmt * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDirectorySchemaMgmt * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDirectorySchemaMgmt * This);
        HRESULT ( STDMETHODCALLTYPE *EnumAttributes )(
            __RPC__in IDirectorySchemaMgmt * This,
            __RPC__deref_in_opt LPWSTR *ppszAttrNames,
            DWORD dwNumAttributes,
            __RPC__deref_in_opt PADS_ATTR_DEF *ppAttrDefinition,
            __RPC__in DWORD *pdwNumAttributes);
        HRESULT ( STDMETHODCALLTYPE *CreateAttributeDefinition )(
            __RPC__in IDirectorySchemaMgmt * This,
            __RPC__in LPWSTR pszAttributeName,
            __RPC__in PADS_ATTR_DEF pAttributeDefinition);
        HRESULT ( STDMETHODCALLTYPE *WriteAttributeDefinition )(
            __RPC__in IDirectorySchemaMgmt * This,
            __RPC__in LPWSTR pszAttributeName,
            __RPC__in PADS_ATTR_DEF pAttributeDefinition);
        HRESULT ( STDMETHODCALLTYPE *DeleteAttributeDefinition )(
            __RPC__in IDirectorySchemaMgmt * This,
            __RPC__in LPWSTR pszAttributeName);
        HRESULT ( STDMETHODCALLTYPE *EnumClasses )(
            __RPC__in IDirectorySchemaMgmt * This,
            __RPC__deref_in_opt LPWSTR *ppszClassNames,
            DWORD dwNumClasses,
            __RPC__deref_in_opt PADS_CLASS_DEF *ppClassDefinition,
            __RPC__in DWORD *pdwNumClasses);
        HRESULT ( STDMETHODCALLTYPE *WriteClassDefinition )(
            __RPC__in IDirectorySchemaMgmt * This,
            __RPC__in LPWSTR pszClassName,
            __RPC__in PADS_CLASS_DEF pClassDefinition);
        HRESULT ( STDMETHODCALLTYPE *CreateClassDefinition )(
            __RPC__in IDirectorySchemaMgmt * This,
            __RPC__in LPWSTR pszClassName,
            __RPC__in PADS_CLASS_DEF pClassDefinition);
        HRESULT ( STDMETHODCALLTYPE *DeleteClassDefinition )(
            __RPC__in IDirectorySchemaMgmt * This,
            __RPC__in LPWSTR pszClassName);
        END_INTERFACE
    } IDirectorySchemaMgmtVtbl;
    interface IDirectorySchemaMgmt
    {
        CONST_VTBL struct IDirectorySchemaMgmtVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumAttributes(This,ppszAttrNames,dwNumAttributes,ppAttrDefinition,pdwNumAttributes) )
    ( (This)->lpVtbl -> CreateAttributeDefinition(This,pszAttributeName,pAttributeDefinition) )
    ( (This)->lpVtbl -> WriteAttributeDefinition(This,pszAttributeName,pAttributeDefinition) )
    ( (This)->lpVtbl -> DeleteAttributeDefinition(This,pszAttributeName) )
    ( (This)->lpVtbl -> EnumClasses(This,ppszClassNames,dwNumClasses,ppClassDefinition,pdwNumClasses) )
    ( (This)->lpVtbl -> WriteClassDefinition(This,pszClassName,pClassDefinition) )
    ( (This)->lpVtbl -> CreateClassDefinition(This,pszClassName,pClassDefinition) )
    ( (This)->lpVtbl -> DeleteClassDefinition(This,pszClassName) )
EXTERN_C const IID IID_IADsAggregatee;
    typedef struct IADsAggregateeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsAggregatee * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsAggregatee * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsAggregatee * This);
        HRESULT ( STDMETHODCALLTYPE *ConnectAsAggregatee )(
            __RPC__in IADsAggregatee * This,
            __RPC__in_opt IUnknown *pOuterUnknown);
        HRESULT ( STDMETHODCALLTYPE *DisconnectAsAggregatee )(
            __RPC__in IADsAggregatee * This);
        HRESULT ( STDMETHODCALLTYPE *RelinquishInterface )(
            __RPC__in IADsAggregatee * This,
            __RPC__in REFIID riid);
        HRESULT ( STDMETHODCALLTYPE *RestoreInterface )(
            __RPC__in IADsAggregatee * This,
            __RPC__in REFIID riid);
        END_INTERFACE
    } IADsAggregateeVtbl;
    interface IADsAggregatee
    {
        CONST_VTBL struct IADsAggregateeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConnectAsAggregatee(This,pOuterUnknown) )
    ( (This)->lpVtbl -> DisconnectAsAggregatee(This) )
    ( (This)->lpVtbl -> RelinquishInterface(This,riid) )
    ( (This)->lpVtbl -> RestoreInterface(This,riid) )
EXTERN_C const IID IID_IADsAggregator;
    typedef struct IADsAggregatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsAggregator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsAggregator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsAggregator * This);
        HRESULT ( STDMETHODCALLTYPE *ConnectAsAggregator )(
            __RPC__in IADsAggregator * This,
            __RPC__in_opt IUnknown *pAggregatee);
        HRESULT ( STDMETHODCALLTYPE *DisconnectAsAggregator )(
            __RPC__in IADsAggregator * This);
        END_INTERFACE
    } IADsAggregatorVtbl;
    interface IADsAggregator
    {
        CONST_VTBL struct IADsAggregatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConnectAsAggregator(This,pAggregatee) )
    ( (This)->lpVtbl -> DisconnectAsAggregator(This) )
EXTERN_C const IID IID_IADsAccessControlEntry;
    typedef struct IADsAccessControlEntryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsAccessControlEntry * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsAccessControlEntry * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsAccessControlEntry * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsAccessControlEntry * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsAccessControlEntry * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsAccessControlEntry * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsAccessControlEntry * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_AccessMask )(
            __RPC__in IADsAccessControlEntry * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_AccessMask )(
            __RPC__in IADsAccessControlEntry * This,
                       long lnAccessMask);
                            HRESULT ( STDMETHODCALLTYPE *get_AceType )(
            __RPC__in IADsAccessControlEntry * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_AceType )(
            __RPC__in IADsAccessControlEntry * This,
                       long lnAceType);
                            HRESULT ( STDMETHODCALLTYPE *get_AceFlags )(
            __RPC__in IADsAccessControlEntry * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_AceFlags )(
            __RPC__in IADsAccessControlEntry * This,
                       long lnAceFlags);
                            HRESULT ( STDMETHODCALLTYPE *get_Flags )(
            __RPC__in IADsAccessControlEntry * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Flags )(
            __RPC__in IADsAccessControlEntry * This,
                       long lnFlags);
                            HRESULT ( STDMETHODCALLTYPE *get_ObjectType )(
            __RPC__in IADsAccessControlEntry * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ObjectType )(
            __RPC__in IADsAccessControlEntry * This,
                       __RPC__in BSTR bstrObjectType);
                            HRESULT ( STDMETHODCALLTYPE *get_InheritedObjectType )(
            __RPC__in IADsAccessControlEntry * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_InheritedObjectType )(
            __RPC__in IADsAccessControlEntry * This,
                       __RPC__in BSTR bstrInheritedObjectType);
                            HRESULT ( STDMETHODCALLTYPE *get_Trustee )(
            __RPC__in IADsAccessControlEntry * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Trustee )(
            __RPC__in IADsAccessControlEntry * This,
                       __RPC__in BSTR bstrTrustee);
        END_INTERFACE
    } IADsAccessControlEntryVtbl;
    interface IADsAccessControlEntry
    {
        CONST_VTBL struct IADsAccessControlEntryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AccessMask(This,retval) )
    ( (This)->lpVtbl -> put_AccessMask(This,lnAccessMask) )
    ( (This)->lpVtbl -> get_AceType(This,retval) )
    ( (This)->lpVtbl -> put_AceType(This,lnAceType) )
    ( (This)->lpVtbl -> get_AceFlags(This,retval) )
    ( (This)->lpVtbl -> put_AceFlags(This,lnAceFlags) )
    ( (This)->lpVtbl -> get_Flags(This,retval) )
    ( (This)->lpVtbl -> put_Flags(This,lnFlags) )
    ( (This)->lpVtbl -> get_ObjectType(This,retval) )
    ( (This)->lpVtbl -> put_ObjectType(This,bstrObjectType) )
    ( (This)->lpVtbl -> get_InheritedObjectType(This,retval) )
    ( (This)->lpVtbl -> put_InheritedObjectType(This,bstrInheritedObjectType) )
    ( (This)->lpVtbl -> get_Trustee(This,retval) )
    ( (This)->lpVtbl -> put_Trustee(This,bstrTrustee) )
EXTERN_C const CLSID CLSID_AccessControlEntry;
class DECLSPEC_UUID("b75ac000-9bdd-11d0-852c-00c04fd8d503")
AccessControlEntry;
EXTERN_C const IID IID_IADsAccessControlList;
    typedef struct IADsAccessControlListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsAccessControlList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsAccessControlList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsAccessControlList * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsAccessControlList * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsAccessControlList * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsAccessControlList * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsAccessControlList * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_AclRevision )(
            __RPC__in IADsAccessControlList * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_AclRevision )(
            __RPC__in IADsAccessControlList * This,
                       long lnAclRevision);
                            HRESULT ( STDMETHODCALLTYPE *get_AceCount )(
            __RPC__in IADsAccessControlList * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_AceCount )(
            __RPC__in IADsAccessControlList * This,
                       long lnAceCount);
                   HRESULT ( STDMETHODCALLTYPE *AddAce )(
            __RPC__in IADsAccessControlList * This,
                       __RPC__in_opt IDispatch *pAccessControlEntry);
                   HRESULT ( STDMETHODCALLTYPE *RemoveAce )(
            __RPC__in IADsAccessControlList * This,
                       __RPC__in_opt IDispatch *pAccessControlEntry);
                   HRESULT ( STDMETHODCALLTYPE *CopyAccessList )(
            __RPC__in IADsAccessControlList * This,
                                __RPC__deref_out_opt IDispatch **ppAccessControlList);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IADsAccessControlList * This,
                                __RPC__deref_out_opt IUnknown **retval);
        END_INTERFACE
    } IADsAccessControlListVtbl;
    interface IADsAccessControlList
    {
        CONST_VTBL struct IADsAccessControlListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AclRevision(This,retval) )
    ( (This)->lpVtbl -> put_AclRevision(This,lnAclRevision) )
    ( (This)->lpVtbl -> get_AceCount(This,retval) )
    ( (This)->lpVtbl -> put_AceCount(This,lnAceCount) )
    ( (This)->lpVtbl -> AddAce(This,pAccessControlEntry) )
    ( (This)->lpVtbl -> RemoveAce(This,pAccessControlEntry) )
    ( (This)->lpVtbl -> CopyAccessList(This,ppAccessControlList) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
EXTERN_C const CLSID CLSID_AccessControlList;
class DECLSPEC_UUID("b85ea052-9bdd-11d0-852c-00c04fd8d503")
AccessControlList;
EXTERN_C const IID IID_IADsSecurityDescriptor;
    typedef struct IADsSecurityDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsSecurityDescriptor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsSecurityDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsSecurityDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsSecurityDescriptor * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsSecurityDescriptor * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsSecurityDescriptor * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsSecurityDescriptor * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Revision )(
            __RPC__in IADsSecurityDescriptor * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Revision )(
            __RPC__in IADsSecurityDescriptor * This,
                       long lnRevision);
                            HRESULT ( STDMETHODCALLTYPE *get_Control )(
            __RPC__in IADsSecurityDescriptor * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Control )(
            __RPC__in IADsSecurityDescriptor * This,
                       long lnControl);
                            HRESULT ( STDMETHODCALLTYPE *get_Owner )(
            __RPC__in IADsSecurityDescriptor * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Owner )(
            __RPC__in IADsSecurityDescriptor * This,
                       __RPC__in BSTR bstrOwner);
                            HRESULT ( STDMETHODCALLTYPE *get_OwnerDefaulted )(
            __RPC__in IADsSecurityDescriptor * This,
                                __RPC__out VARIANT_BOOL *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_OwnerDefaulted )(
            __RPC__in IADsSecurityDescriptor * This,
                       VARIANT_BOOL fOwnerDefaulted);
                            HRESULT ( STDMETHODCALLTYPE *get_Group )(
            __RPC__in IADsSecurityDescriptor * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Group )(
            __RPC__in IADsSecurityDescriptor * This,
                       __RPC__in BSTR bstrGroup);
                            HRESULT ( STDMETHODCALLTYPE *get_GroupDefaulted )(
            __RPC__in IADsSecurityDescriptor * This,
                                __RPC__out VARIANT_BOOL *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_GroupDefaulted )(
            __RPC__in IADsSecurityDescriptor * This,
                       VARIANT_BOOL fGroupDefaulted);
                            HRESULT ( STDMETHODCALLTYPE *get_DiscretionaryAcl )(
            __RPC__in IADsSecurityDescriptor * This,
                                __RPC__deref_out_opt IDispatch **retval);
                            HRESULT ( STDMETHODCALLTYPE *put_DiscretionaryAcl )(
            __RPC__in IADsSecurityDescriptor * This,
                       __RPC__in_opt IDispatch *pDiscretionaryAcl);
                            HRESULT ( STDMETHODCALLTYPE *get_DaclDefaulted )(
            __RPC__in IADsSecurityDescriptor * This,
                                __RPC__out VARIANT_BOOL *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_DaclDefaulted )(
            __RPC__in IADsSecurityDescriptor * This,
                       VARIANT_BOOL fDaclDefaulted);
                            HRESULT ( STDMETHODCALLTYPE *get_SystemAcl )(
            __RPC__in IADsSecurityDescriptor * This,
                                __RPC__deref_out_opt IDispatch **retval);
                            HRESULT ( STDMETHODCALLTYPE *put_SystemAcl )(
            __RPC__in IADsSecurityDescriptor * This,
                       __RPC__in_opt IDispatch *pSystemAcl);
                            HRESULT ( STDMETHODCALLTYPE *get_SaclDefaulted )(
            __RPC__in IADsSecurityDescriptor * This,
                                __RPC__out VARIANT_BOOL *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_SaclDefaulted )(
            __RPC__in IADsSecurityDescriptor * This,
                       VARIANT_BOOL fSaclDefaulted);
                   HRESULT ( STDMETHODCALLTYPE *CopySecurityDescriptor )(
            __RPC__in IADsSecurityDescriptor * This,
                                __RPC__deref_out_opt IDispatch **ppSecurityDescriptor);
        END_INTERFACE
    } IADsSecurityDescriptorVtbl;
    interface IADsSecurityDescriptor
    {
        CONST_VTBL struct IADsSecurityDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Revision(This,retval) )
    ( (This)->lpVtbl -> put_Revision(This,lnRevision) )
    ( (This)->lpVtbl -> get_Control(This,retval) )
    ( (This)->lpVtbl -> put_Control(This,lnControl) )
    ( (This)->lpVtbl -> get_Owner(This,retval) )
    ( (This)->lpVtbl -> put_Owner(This,bstrOwner) )
    ( (This)->lpVtbl -> get_OwnerDefaulted(This,retval) )
    ( (This)->lpVtbl -> put_OwnerDefaulted(This,fOwnerDefaulted) )
    ( (This)->lpVtbl -> get_Group(This,retval) )
    ( (This)->lpVtbl -> put_Group(This,bstrGroup) )
    ( (This)->lpVtbl -> get_GroupDefaulted(This,retval) )
    ( (This)->lpVtbl -> put_GroupDefaulted(This,fGroupDefaulted) )
    ( (This)->lpVtbl -> get_DiscretionaryAcl(This,retval) )
    ( (This)->lpVtbl -> put_DiscretionaryAcl(This,pDiscretionaryAcl) )
    ( (This)->lpVtbl -> get_DaclDefaulted(This,retval) )
    ( (This)->lpVtbl -> put_DaclDefaulted(This,fDaclDefaulted) )
    ( (This)->lpVtbl -> get_SystemAcl(This,retval) )
    ( (This)->lpVtbl -> put_SystemAcl(This,pSystemAcl) )
    ( (This)->lpVtbl -> get_SaclDefaulted(This,retval) )
    ( (This)->lpVtbl -> put_SaclDefaulted(This,fSaclDefaulted) )
    ( (This)->lpVtbl -> CopySecurityDescriptor(This,ppSecurityDescriptor) )
EXTERN_C const CLSID CLSID_SecurityDescriptor;
class DECLSPEC_UUID("b958f73c-9bdd-11d0-852c-00c04fd8d503")
SecurityDescriptor;
EXTERN_C const IID IID_IADsLargeInteger;
    typedef struct IADsLargeIntegerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsLargeInteger * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsLargeInteger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsLargeInteger * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsLargeInteger * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsLargeInteger * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsLargeInteger * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsLargeInteger * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_HighPart )(
            __RPC__in IADsLargeInteger * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_HighPart )(
            __RPC__in IADsLargeInteger * This,
                       long lnHighPart);
                            HRESULT ( STDMETHODCALLTYPE *get_LowPart )(
            __RPC__in IADsLargeInteger * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_LowPart )(
            __RPC__in IADsLargeInteger * This,
                       long lnLowPart);
        END_INTERFACE
    } IADsLargeIntegerVtbl;
    interface IADsLargeInteger
    {
        CONST_VTBL struct IADsLargeIntegerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_HighPart(This,retval) )
    ( (This)->lpVtbl -> put_HighPart(This,lnHighPart) )
    ( (This)->lpVtbl -> get_LowPart(This,retval) )
    ( (This)->lpVtbl -> put_LowPart(This,lnLowPart) )
EXTERN_C const CLSID CLSID_LargeInteger;
class DECLSPEC_UUID("927971f5-0939-11d1-8be1-00c04fd8d503")
LargeInteger;
EXTERN_C const IID IID_IADsNameTranslate;
    typedef struct IADsNameTranslateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsNameTranslate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsNameTranslate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsNameTranslate * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsNameTranslate * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsNameTranslate * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsNameTranslate * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsNameTranslate * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *put_ChaseReferral )(
            __RPC__in IADsNameTranslate * This,
                       long lnChaseReferral);
                   HRESULT ( STDMETHODCALLTYPE *Init )(
            __RPC__in IADsNameTranslate * This,
                       long lnSetType,
                       __RPC__in BSTR bstrADsPath);
                   HRESULT ( STDMETHODCALLTYPE *InitEx )(
            __RPC__in IADsNameTranslate * This,
                       long lnSetType,
                       __RPC__in BSTR bstrADsPath,
                       __RPC__in BSTR bstrUserID,
                       __RPC__in BSTR bstrDomain,
                       __RPC__in BSTR bstrPassword);
                   HRESULT ( STDMETHODCALLTYPE *Set )(
            __RPC__in IADsNameTranslate * This,
                       long lnSetType,
                       __RPC__in BSTR bstrADsPath);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IADsNameTranslate * This,
                       long lnFormatType,
                                __RPC__deref_out_opt BSTR *pbstrADsPath);
                   HRESULT ( STDMETHODCALLTYPE *SetEx )(
            __RPC__in IADsNameTranslate * This,
                       long lnFormatType,
                       VARIANT pvar);
                   HRESULT ( STDMETHODCALLTYPE *GetEx )(
            __RPC__in IADsNameTranslate * This,
                       long lnFormatType,
                                __RPC__out VARIANT *pvar);
        END_INTERFACE
    } IADsNameTranslateVtbl;
    interface IADsNameTranslate
    {
        CONST_VTBL struct IADsNameTranslateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_ChaseReferral(This,lnChaseReferral) )
    ( (This)->lpVtbl -> Init(This,lnSetType,bstrADsPath) )
    ( (This)->lpVtbl -> InitEx(This,lnSetType,bstrADsPath,bstrUserID,bstrDomain,bstrPassword) )
    ( (This)->lpVtbl -> Set(This,lnSetType,bstrADsPath) )
    ( (This)->lpVtbl -> Get(This,lnFormatType,pbstrADsPath) )
    ( (This)->lpVtbl -> SetEx(This,lnFormatType,pvar) )
    ( (This)->lpVtbl -> GetEx(This,lnFormatType,pvar) )
EXTERN_C const CLSID CLSID_NameTranslate;
class DECLSPEC_UUID("274fae1f-3626-11d1-a3a4-00c04fb950dc")
NameTranslate;
EXTERN_C const IID IID_IADsCaseIgnoreList;
    typedef struct IADsCaseIgnoreListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsCaseIgnoreList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsCaseIgnoreList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsCaseIgnoreList * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsCaseIgnoreList * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsCaseIgnoreList * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsCaseIgnoreList * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsCaseIgnoreList * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_CaseIgnoreList )(
            __RPC__in IADsCaseIgnoreList * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_CaseIgnoreList )(
            __RPC__in IADsCaseIgnoreList * This,
                       VARIANT vCaseIgnoreList);
        END_INTERFACE
    } IADsCaseIgnoreListVtbl;
    interface IADsCaseIgnoreList
    {
        CONST_VTBL struct IADsCaseIgnoreListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CaseIgnoreList(This,retval) )
    ( (This)->lpVtbl -> put_CaseIgnoreList(This,vCaseIgnoreList) )
EXTERN_C const CLSID CLSID_CaseIgnoreList;
class DECLSPEC_UUID("15f88a55-4680-11d1-a3b4-00c04fb950dc")
CaseIgnoreList;
EXTERN_C const IID IID_IADsFaxNumber;
    typedef struct IADsFaxNumberVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsFaxNumber * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsFaxNumber * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsFaxNumber * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsFaxNumber * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsFaxNumber * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsFaxNumber * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsFaxNumber * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_TelephoneNumber )(
            __RPC__in IADsFaxNumber * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_TelephoneNumber )(
            __RPC__in IADsFaxNumber * This,
                       __RPC__in BSTR bstrTelephoneNumber);
                            HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
            __RPC__in IADsFaxNumber * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Parameters )(
            __RPC__in IADsFaxNumber * This,
                       VARIANT vParameters);
        END_INTERFACE
    } IADsFaxNumberVtbl;
    interface IADsFaxNumber
    {
        CONST_VTBL struct IADsFaxNumberVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_TelephoneNumber(This,retval) )
    ( (This)->lpVtbl -> put_TelephoneNumber(This,bstrTelephoneNumber) )
    ( (This)->lpVtbl -> get_Parameters(This,retval) )
    ( (This)->lpVtbl -> put_Parameters(This,vParameters) )
EXTERN_C const CLSID CLSID_FaxNumber;
class DECLSPEC_UUID("a5062215-4681-11d1-a3b4-00c04fb950dc")
FaxNumber;
EXTERN_C const IID IID_IADsNetAddress;
    typedef struct IADsNetAddressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsNetAddress * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsNetAddress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsNetAddress * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsNetAddress * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsNetAddress * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsNetAddress * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsNetAddress * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_AddressType )(
            __RPC__in IADsNetAddress * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_AddressType )(
            __RPC__in IADsNetAddress * This,
                       long lnAddressType);
                            HRESULT ( STDMETHODCALLTYPE *get_Address )(
            __RPC__in IADsNetAddress * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Address )(
            __RPC__in IADsNetAddress * This,
                       VARIANT vAddress);
        END_INTERFACE
    } IADsNetAddressVtbl;
    interface IADsNetAddress
    {
        CONST_VTBL struct IADsNetAddressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AddressType(This,retval) )
    ( (This)->lpVtbl -> put_AddressType(This,lnAddressType) )
    ( (This)->lpVtbl -> get_Address(This,retval) )
    ( (This)->lpVtbl -> put_Address(This,vAddress) )
EXTERN_C const CLSID CLSID_NetAddress;
class DECLSPEC_UUID("b0b71247-4080-11d1-a3ac-00c04fb950dc")
NetAddress;
EXTERN_C const IID IID_IADsOctetList;
    typedef struct IADsOctetListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsOctetList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsOctetList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsOctetList * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsOctetList * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsOctetList * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsOctetList * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsOctetList * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_OctetList )(
            __RPC__in IADsOctetList * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_OctetList )(
            __RPC__in IADsOctetList * This,
                       VARIANT vOctetList);
        END_INTERFACE
    } IADsOctetListVtbl;
    interface IADsOctetList
    {
        CONST_VTBL struct IADsOctetListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_OctetList(This,retval) )
    ( (This)->lpVtbl -> put_OctetList(This,vOctetList) )
EXTERN_C const CLSID CLSID_OctetList;
class DECLSPEC_UUID("1241400f-4680-11d1-a3b4-00c04fb950dc")
OctetList;
EXTERN_C const IID IID_IADsEmail;
    typedef struct IADsEmailVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsEmail * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsEmail * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsEmail * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsEmail * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsEmail * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsEmail * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsEmail * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IADsEmail * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in IADsEmail * This,
                       long lnType);
                            HRESULT ( STDMETHODCALLTYPE *get_Address )(
            __RPC__in IADsEmail * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Address )(
            __RPC__in IADsEmail * This,
                       __RPC__in BSTR bstrAddress);
        END_INTERFACE
    } IADsEmailVtbl;
    interface IADsEmail
    {
        CONST_VTBL struct IADsEmailVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,retval) )
    ( (This)->lpVtbl -> put_Type(This,lnType) )
    ( (This)->lpVtbl -> get_Address(This,retval) )
    ( (This)->lpVtbl -> put_Address(This,bstrAddress) )
EXTERN_C const CLSID CLSID_Email;
class DECLSPEC_UUID("8f92a857-478e-11d1-a3b4-00c04fb950dc")
Email;
EXTERN_C const IID IID_IADsPath;
    typedef struct IADsPathVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsPath * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsPath * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsPath * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsPath * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsPath * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsPath * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsPath * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IADsPath * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in IADsPath * This,
                       long lnType);
                            HRESULT ( STDMETHODCALLTYPE *get_VolumeName )(
            __RPC__in IADsPath * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_VolumeName )(
            __RPC__in IADsPath * This,
                       __RPC__in BSTR bstrVolumeName);
                            HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IADsPath * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Path )(
            __RPC__in IADsPath * This,
                       __RPC__in BSTR bstrPath);
        END_INTERFACE
    } IADsPathVtbl;
    interface IADsPath
    {
        CONST_VTBL struct IADsPathVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,retval) )
    ( (This)->lpVtbl -> put_Type(This,lnType) )
    ( (This)->lpVtbl -> get_VolumeName(This,retval) )
    ( (This)->lpVtbl -> put_VolumeName(This,bstrVolumeName) )
    ( (This)->lpVtbl -> get_Path(This,retval) )
    ( (This)->lpVtbl -> put_Path(This,bstrPath) )
EXTERN_C const CLSID CLSID_Path;
class DECLSPEC_UUID("b2538919-4080-11d1-a3ac-00c04fb950dc")
Path;
EXTERN_C const IID IID_IADsReplicaPointer;
    typedef struct IADsReplicaPointerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsReplicaPointer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsReplicaPointer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsReplicaPointer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsReplicaPointer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsReplicaPointer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsReplicaPointer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsReplicaPointer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_ServerName )(
            __RPC__in IADsReplicaPointer * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ServerName )(
            __RPC__in IADsReplicaPointer * This,
                       __RPC__in BSTR bstrServerName);
                            HRESULT ( STDMETHODCALLTYPE *get_ReplicaType )(
            __RPC__in IADsReplicaPointer * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ReplicaType )(
            __RPC__in IADsReplicaPointer * This,
                       long lnReplicaType);
                            HRESULT ( STDMETHODCALLTYPE *get_ReplicaNumber )(
            __RPC__in IADsReplicaPointer * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ReplicaNumber )(
            __RPC__in IADsReplicaPointer * This,
                       long lnReplicaNumber);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IADsReplicaPointer * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Count )(
            __RPC__in IADsReplicaPointer * This,
                       long lnCount);
                            HRESULT ( STDMETHODCALLTYPE *get_ReplicaAddressHints )(
            __RPC__in IADsReplicaPointer * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ReplicaAddressHints )(
            __RPC__in IADsReplicaPointer * This,
                       VARIANT vReplicaAddressHints);
        END_INTERFACE
    } IADsReplicaPointerVtbl;
    interface IADsReplicaPointer
    {
        CONST_VTBL struct IADsReplicaPointerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ServerName(This,retval) )
    ( (This)->lpVtbl -> put_ServerName(This,bstrServerName) )
    ( (This)->lpVtbl -> get_ReplicaType(This,retval) )
    ( (This)->lpVtbl -> put_ReplicaType(This,lnReplicaType) )
    ( (This)->lpVtbl -> get_ReplicaNumber(This,retval) )
    ( (This)->lpVtbl -> put_ReplicaNumber(This,lnReplicaNumber) )
    ( (This)->lpVtbl -> get_Count(This,retval) )
    ( (This)->lpVtbl -> put_Count(This,lnCount) )
    ( (This)->lpVtbl -> get_ReplicaAddressHints(This,retval) )
    ( (This)->lpVtbl -> put_ReplicaAddressHints(This,vReplicaAddressHints) )
EXTERN_C const CLSID CLSID_ReplicaPointer;
class DECLSPEC_UUID("f5d1badf-4080-11d1-a3ac-00c04fb950dc")
ReplicaPointer;
EXTERN_C const IID IID_IADsAcl;
    typedef struct IADsAclVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsAcl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsAcl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsAcl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsAcl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsAcl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsAcl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsAcl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_ProtectedAttrName )(
            __RPC__in IADsAcl * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ProtectedAttrName )(
            __RPC__in IADsAcl * This,
                       __RPC__in BSTR bstrProtectedAttrName);
                            HRESULT ( STDMETHODCALLTYPE *get_SubjectName )(
            __RPC__in IADsAcl * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_SubjectName )(
            __RPC__in IADsAcl * This,
                       __RPC__in BSTR bstrSubjectName);
                            HRESULT ( STDMETHODCALLTYPE *get_Privileges )(
            __RPC__in IADsAcl * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Privileges )(
            __RPC__in IADsAcl * This,
                       long lnPrivileges);
                   HRESULT ( STDMETHODCALLTYPE *CopyAcl )(
            __RPC__in IADsAcl * This,
                                __RPC__deref_out_opt IDispatch **ppAcl);
        END_INTERFACE
    } IADsAclVtbl;
    interface IADsAcl
    {
        CONST_VTBL struct IADsAclVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ProtectedAttrName(This,retval) )
    ( (This)->lpVtbl -> put_ProtectedAttrName(This,bstrProtectedAttrName) )
    ( (This)->lpVtbl -> get_SubjectName(This,retval) )
    ( (This)->lpVtbl -> put_SubjectName(This,bstrSubjectName) )
    ( (This)->lpVtbl -> get_Privileges(This,retval) )
    ( (This)->lpVtbl -> put_Privileges(This,lnPrivileges) )
    ( (This)->lpVtbl -> CopyAcl(This,ppAcl) )
EXTERN_C const IID IID_IADsTimestamp;
    typedef struct IADsTimestampVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsTimestamp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsTimestamp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsTimestamp * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsTimestamp * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsTimestamp * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsTimestamp * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsTimestamp * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_WholeSeconds )(
            __RPC__in IADsTimestamp * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_WholeSeconds )(
            __RPC__in IADsTimestamp * This,
                       long lnWholeSeconds);
                            HRESULT ( STDMETHODCALLTYPE *get_EventID )(
            __RPC__in IADsTimestamp * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_EventID )(
            __RPC__in IADsTimestamp * This,
                       long lnEventID);
        END_INTERFACE
    } IADsTimestampVtbl;
    interface IADsTimestamp
    {
        CONST_VTBL struct IADsTimestampVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_WholeSeconds(This,retval) )
    ( (This)->lpVtbl -> put_WholeSeconds(This,lnWholeSeconds) )
    ( (This)->lpVtbl -> get_EventID(This,retval) )
    ( (This)->lpVtbl -> put_EventID(This,lnEventID) )
EXTERN_C const CLSID CLSID_Timestamp;
class DECLSPEC_UUID("b2bed2eb-4080-11d1-a3ac-00c04fb950dc")
Timestamp;
EXTERN_C const IID IID_IADsPostalAddress;
    typedef struct IADsPostalAddressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsPostalAddress * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsPostalAddress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsPostalAddress * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsPostalAddress * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsPostalAddress * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsPostalAddress * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsPostalAddress * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_PostalAddress )(
            __RPC__in IADsPostalAddress * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_PostalAddress )(
            __RPC__in IADsPostalAddress * This,
                       VARIANT vPostalAddress);
        END_INTERFACE
    } IADsPostalAddressVtbl;
    interface IADsPostalAddress
    {
        CONST_VTBL struct IADsPostalAddressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_PostalAddress(This,retval) )
    ( (This)->lpVtbl -> put_PostalAddress(This,vPostalAddress) )
EXTERN_C const CLSID CLSID_PostalAddress;
class DECLSPEC_UUID("0a75afcd-4680-11d1-a3b4-00c04fb950dc")
PostalAddress;
EXTERN_C const IID IID_IADsBackLink;
    typedef struct IADsBackLinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsBackLink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsBackLink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsBackLink * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsBackLink * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsBackLink * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsBackLink * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsBackLink * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_RemoteID )(
            __RPC__in IADsBackLink * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_RemoteID )(
            __RPC__in IADsBackLink * This,
                       long lnRemoteID);
                            HRESULT ( STDMETHODCALLTYPE *get_ObjectName )(
            __RPC__in IADsBackLink * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ObjectName )(
            __RPC__in IADsBackLink * This,
                       __RPC__in BSTR bstrObjectName);
        END_INTERFACE
    } IADsBackLinkVtbl;
    interface IADsBackLink
    {
        CONST_VTBL struct IADsBackLinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_RemoteID(This,retval) )
    ( (This)->lpVtbl -> put_RemoteID(This,lnRemoteID) )
    ( (This)->lpVtbl -> get_ObjectName(This,retval) )
    ( (This)->lpVtbl -> put_ObjectName(This,bstrObjectName) )
EXTERN_C const CLSID CLSID_BackLink;
class DECLSPEC_UUID("fcbf906f-4080-11d1-a3ac-00c04fb950dc")
BackLink;
EXTERN_C const IID IID_IADsTypedName;
    typedef struct IADsTypedNameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsTypedName * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsTypedName * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsTypedName * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsTypedName * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsTypedName * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsTypedName * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsTypedName * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_ObjectName )(
            __RPC__in IADsTypedName * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ObjectName )(
            __RPC__in IADsTypedName * This,
                       __RPC__in BSTR bstrObjectName);
                            HRESULT ( STDMETHODCALLTYPE *get_Level )(
            __RPC__in IADsTypedName * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Level )(
            __RPC__in IADsTypedName * This,
                       long lnLevel);
                            HRESULT ( STDMETHODCALLTYPE *get_Interval )(
            __RPC__in IADsTypedName * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Interval )(
            __RPC__in IADsTypedName * This,
                       long lnInterval);
        END_INTERFACE
    } IADsTypedNameVtbl;
    interface IADsTypedName
    {
        CONST_VTBL struct IADsTypedNameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ObjectName(This,retval) )
    ( (This)->lpVtbl -> put_ObjectName(This,bstrObjectName) )
    ( (This)->lpVtbl -> get_Level(This,retval) )
    ( (This)->lpVtbl -> put_Level(This,lnLevel) )
    ( (This)->lpVtbl -> get_Interval(This,retval) )
    ( (This)->lpVtbl -> put_Interval(This,lnInterval) )
EXTERN_C const CLSID CLSID_TypedName;
class DECLSPEC_UUID("b33143cb-4080-11d1-a3ac-00c04fb950dc")
TypedName;
EXTERN_C const IID IID_IADsHold;
    typedef struct IADsHoldVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsHold * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsHold * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsHold * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsHold * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsHold * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsHold * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsHold * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_ObjectName )(
            __RPC__in IADsHold * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_ObjectName )(
            __RPC__in IADsHold * This,
                       __RPC__in BSTR bstrObjectName);
                            HRESULT ( STDMETHODCALLTYPE *get_Amount )(
            __RPC__in IADsHold * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_Amount )(
            __RPC__in IADsHold * This,
                       long lnAmount);
        END_INTERFACE
    } IADsHoldVtbl;
    interface IADsHold
    {
        CONST_VTBL struct IADsHoldVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ObjectName(This,retval) )
    ( (This)->lpVtbl -> put_ObjectName(This,bstrObjectName) )
    ( (This)->lpVtbl -> get_Amount(This,retval) )
    ( (This)->lpVtbl -> put_Amount(This,lnAmount) )
EXTERN_C const CLSID CLSID_Hold;
class DECLSPEC_UUID("b3ad3e13-4080-11d1-a3ac-00c04fb950dc")
Hold;
EXTERN_C const IID IID_IADsObjectOptions;
    typedef struct IADsObjectOptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsObjectOptions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsObjectOptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsObjectOptions * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsObjectOptions * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsObjectOptions * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsObjectOptions * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsObjectOptions * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *GetOption )(
            __RPC__in IADsObjectOptions * This,
                       long lnOption,
                                __RPC__out VARIANT *pvValue);
                   HRESULT ( STDMETHODCALLTYPE *SetOption )(
            __RPC__in IADsObjectOptions * This,
                       long lnOption,
                       VARIANT vValue);
        END_INTERFACE
    } IADsObjectOptionsVtbl;
    interface IADsObjectOptions
    {
        CONST_VTBL struct IADsObjectOptionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetOption(This,lnOption,pvValue) )
    ( (This)->lpVtbl -> SetOption(This,lnOption,vValue) )
EXTERN_C const IID IID_IADsPathname;
    typedef struct IADsPathnameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsPathname * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsPathname * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsPathname * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsPathname * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsPathname * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsPathname * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsPathname * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Set )(
            __RPC__in IADsPathname * This,
                       __RPC__in BSTR bstrADsPath,
                       long lnSetType);
                   HRESULT ( STDMETHODCALLTYPE *SetDisplayType )(
            __RPC__in IADsPathname * This,
                       long lnDisplayType);
                   HRESULT ( STDMETHODCALLTYPE *Retrieve )(
            __RPC__in IADsPathname * This,
                       long lnFormatType,
                                __RPC__deref_out_opt BSTR *pbstrADsPath);
                   HRESULT ( STDMETHODCALLTYPE *GetNumElements )(
            __RPC__in IADsPathname * This,
                                __RPC__out long *plnNumPathElements);
                   HRESULT ( STDMETHODCALLTYPE *GetElement )(
            __RPC__in IADsPathname * This,
                       long lnElementIndex,
                                __RPC__deref_out_opt BSTR *pbstrElement);
                   HRESULT ( STDMETHODCALLTYPE *AddLeafElement )(
            __RPC__in IADsPathname * This,
                       __RPC__in BSTR bstrLeafElement);
                   HRESULT ( STDMETHODCALLTYPE *RemoveLeafElement )(
            __RPC__in IADsPathname * This);
                   HRESULT ( STDMETHODCALLTYPE *CopyPath )(
            __RPC__in IADsPathname * This,
                                __RPC__deref_out_opt IDispatch **ppAdsPath);
                   HRESULT ( STDMETHODCALLTYPE *GetEscapedElement )(
            __RPC__in IADsPathname * This,
                       long lnReserved,
                       __RPC__in BSTR bstrInStr,
                                __RPC__deref_out_opt BSTR *pbstrOutStr);
                            HRESULT ( STDMETHODCALLTYPE *get_EscapedMode )(
            __RPC__in IADsPathname * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_EscapedMode )(
            __RPC__in IADsPathname * This,
                       long lnEscapedMode);
        END_INTERFACE
    } IADsPathnameVtbl;
    interface IADsPathname
    {
        CONST_VTBL struct IADsPathnameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Set(This,bstrADsPath,lnSetType) )
    ( (This)->lpVtbl -> SetDisplayType(This,lnDisplayType) )
    ( (This)->lpVtbl -> Retrieve(This,lnFormatType,pbstrADsPath) )
    ( (This)->lpVtbl -> GetNumElements(This,plnNumPathElements) )
    ( (This)->lpVtbl -> GetElement(This,lnElementIndex,pbstrElement) )
    ( (This)->lpVtbl -> AddLeafElement(This,bstrLeafElement) )
    ( (This)->lpVtbl -> RemoveLeafElement(This) )
    ( (This)->lpVtbl -> CopyPath(This,ppAdsPath) )
    ( (This)->lpVtbl -> GetEscapedElement(This,lnReserved,bstrInStr,pbstrOutStr) )
    ( (This)->lpVtbl -> get_EscapedMode(This,retval) )
    ( (This)->lpVtbl -> put_EscapedMode(This,lnEscapedMode) )
EXTERN_C const CLSID CLSID_Pathname;
class DECLSPEC_UUID("080d0d78-f421-11d0-a36e-00c04fb950dc")
Pathname;
EXTERN_C const IID IID_IADsADSystemInfo;
    typedef struct IADsADSystemInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsADSystemInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsADSystemInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsADSystemInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsADSystemInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsADSystemInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsADSystemInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsADSystemInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_UserName )(
            __RPC__in IADsADSystemInfo * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ComputerName )(
            __RPC__in IADsADSystemInfo * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_SiteName )(
            __RPC__in IADsADSystemInfo * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_DomainShortName )(
            __RPC__in IADsADSystemInfo * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_DomainDNSName )(
            __RPC__in IADsADSystemInfo * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ForestDNSName )(
            __RPC__in IADsADSystemInfo * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_PDCRoleOwner )(
            __RPC__in IADsADSystemInfo * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_SchemaRoleOwner )(
            __RPC__in IADsADSystemInfo * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_IsNativeMode )(
            __RPC__in IADsADSystemInfo * This,
                                __RPC__out VARIANT_BOOL *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetAnyDCName )(
            __RPC__in IADsADSystemInfo * This,
                                __RPC__deref_out_opt BSTR *pszDCName);
                   HRESULT ( STDMETHODCALLTYPE *GetDCSiteName )(
            __RPC__in IADsADSystemInfo * This,
                       __RPC__in BSTR szServer,
                                __RPC__deref_out_opt BSTR *pszSiteName);
                   HRESULT ( STDMETHODCALLTYPE *RefreshSchemaCache )(
            __RPC__in IADsADSystemInfo * This);
                   HRESULT ( STDMETHODCALLTYPE *GetTrees )(
            __RPC__in IADsADSystemInfo * This,
                                __RPC__out VARIANT *pvTrees);
        END_INTERFACE
    } IADsADSystemInfoVtbl;
    interface IADsADSystemInfo
    {
        CONST_VTBL struct IADsADSystemInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UserName(This,retval) )
    ( (This)->lpVtbl -> get_ComputerName(This,retval) )
    ( (This)->lpVtbl -> get_SiteName(This,retval) )
    ( (This)->lpVtbl -> get_DomainShortName(This,retval) )
    ( (This)->lpVtbl -> get_DomainDNSName(This,retval) )
    ( (This)->lpVtbl -> get_ForestDNSName(This,retval) )
    ( (This)->lpVtbl -> get_PDCRoleOwner(This,retval) )
    ( (This)->lpVtbl -> get_SchemaRoleOwner(This,retval) )
    ( (This)->lpVtbl -> get_IsNativeMode(This,retval) )
    ( (This)->lpVtbl -> GetAnyDCName(This,pszDCName) )
    ( (This)->lpVtbl -> GetDCSiteName(This,szServer,pszSiteName) )
    ( (This)->lpVtbl -> RefreshSchemaCache(This) )
    ( (This)->lpVtbl -> GetTrees(This,pvTrees) )
EXTERN_C const CLSID CLSID_ADSystemInfo;
class DECLSPEC_UUID("50B6327F-AFD1-11d2-9CB9-0000F87A369E")
ADSystemInfo;
EXTERN_C const IID IID_IADsWinNTSystemInfo;
    typedef struct IADsWinNTSystemInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsWinNTSystemInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsWinNTSystemInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsWinNTSystemInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsWinNTSystemInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsWinNTSystemInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsWinNTSystemInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsWinNTSystemInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_UserName )(
            __RPC__in IADsWinNTSystemInfo * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_ComputerName )(
            __RPC__in IADsWinNTSystemInfo * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_DomainName )(
            __RPC__in IADsWinNTSystemInfo * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *get_PDC )(
            __RPC__in IADsWinNTSystemInfo * This,
                                __RPC__deref_out_opt BSTR *retval);
        END_INTERFACE
    } IADsWinNTSystemInfoVtbl;
    interface IADsWinNTSystemInfo
    {
        CONST_VTBL struct IADsWinNTSystemInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UserName(This,retval) )
    ( (This)->lpVtbl -> get_ComputerName(This,retval) )
    ( (This)->lpVtbl -> get_DomainName(This,retval) )
    ( (This)->lpVtbl -> get_PDC(This,retval) )
EXTERN_C const CLSID CLSID_WinNTSystemInfo;
class DECLSPEC_UUID("66182EC4-AFD1-11d2-9CB9-0000F87A369E")
WinNTSystemInfo;
EXTERN_C const IID IID_IADsDNWithBinary;
    typedef struct IADsDNWithBinaryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsDNWithBinary * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsDNWithBinary * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsDNWithBinary * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsDNWithBinary * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsDNWithBinary * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsDNWithBinary * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsDNWithBinary * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_BinaryValue )(
            __RPC__in IADsDNWithBinary * This,
                                __RPC__out VARIANT *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_BinaryValue )(
            __RPC__in IADsDNWithBinary * This,
                       VARIANT vBinaryValue);
                            HRESULT ( STDMETHODCALLTYPE *get_DNString )(
            __RPC__in IADsDNWithBinary * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_DNString )(
            __RPC__in IADsDNWithBinary * This,
                       __RPC__in BSTR bstrDNString);
        END_INTERFACE
    } IADsDNWithBinaryVtbl;
    interface IADsDNWithBinary
    {
        CONST_VTBL struct IADsDNWithBinaryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_BinaryValue(This,retval) )
    ( (This)->lpVtbl -> put_BinaryValue(This,vBinaryValue) )
    ( (This)->lpVtbl -> get_DNString(This,retval) )
    ( (This)->lpVtbl -> put_DNString(This,bstrDNString) )
EXTERN_C const CLSID CLSID_DNWithBinary;
class DECLSPEC_UUID("7e99c0a3-f935-11d2-ba96-00c04fb6d0d1")
DNWithBinary;
EXTERN_C const IID IID_IADsDNWithString;
    typedef struct IADsDNWithStringVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsDNWithString * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsDNWithString * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsDNWithString * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsDNWithString * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsDNWithString * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsDNWithString * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsDNWithString * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_StringValue )(
            __RPC__in IADsDNWithString * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_StringValue )(
            __RPC__in IADsDNWithString * This,
                       __RPC__in BSTR bstrStringValue);
                            HRESULT ( STDMETHODCALLTYPE *get_DNString )(
            __RPC__in IADsDNWithString * This,
                                __RPC__deref_out_opt BSTR *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_DNString )(
            __RPC__in IADsDNWithString * This,
                       __RPC__in BSTR bstrDNString);
        END_INTERFACE
    } IADsDNWithStringVtbl;
    interface IADsDNWithString
    {
        CONST_VTBL struct IADsDNWithStringVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_StringValue(This,retval) )
    ( (This)->lpVtbl -> put_StringValue(This,bstrStringValue) )
    ( (This)->lpVtbl -> get_DNString(This,retval) )
    ( (This)->lpVtbl -> put_DNString(This,bstrDNString) )
EXTERN_C const CLSID CLSID_DNWithString;
class DECLSPEC_UUID("334857cc-f934-11d2-ba96-00c04fb6d0d1")
DNWithString;
EXTERN_C const IID IID_IADsSecurityUtility;
    typedef struct IADsSecurityUtilityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IADsSecurityUtility * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IADsSecurityUtility * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IADsSecurityUtility * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IADsSecurityUtility * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IADsSecurityUtility * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IADsSecurityUtility * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IADsSecurityUtility * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *GetSecurityDescriptor )(
            __RPC__in IADsSecurityUtility * This,
                       VARIANT varPath,
                       long lPathFormat,
                       long lFormat,
                                __RPC__out VARIANT *pVariant);
                   HRESULT ( STDMETHODCALLTYPE *SetSecurityDescriptor )(
            __RPC__in IADsSecurityUtility * This,
                       VARIANT varPath,
                       long lPathFormat,
                       VARIANT varData,
                       long lDataFormat);
                   HRESULT ( STDMETHODCALLTYPE *ConvertSecurityDescriptor )(
            __RPC__in IADsSecurityUtility * This,
                       VARIANT varSD,
                       long lDataFormat,
                       long lOutFormat,
                                __RPC__out VARIANT *pResult);
                            HRESULT ( STDMETHODCALLTYPE *get_SecurityMask )(
            __RPC__in IADsSecurityUtility * This,
                                __RPC__out long *retval);
                            HRESULT ( STDMETHODCALLTYPE *put_SecurityMask )(
            __RPC__in IADsSecurityUtility * This,
                       long lnSecurityMask);
        END_INTERFACE
    } IADsSecurityUtilityVtbl;
    interface IADsSecurityUtility
    {
        CONST_VTBL struct IADsSecurityUtilityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetSecurityDescriptor(This,varPath,lPathFormat,lFormat,pVariant) )
    ( (This)->lpVtbl -> SetSecurityDescriptor(This,varPath,lPathFormat,varData,lDataFormat) )
    ( (This)->lpVtbl -> ConvertSecurityDescriptor(This,varSD,lDataFormat,lOutFormat,pResult) )
    ( (This)->lpVtbl -> get_SecurityMask(This,retval) )
    ( (This)->lpVtbl -> put_SecurityMask(This,lnSecurityMask) )
EXTERN_C const CLSID CLSID_ADsSecurityUtility;
class DECLSPEC_UUID("f270c64a-ffb8-4ae4-85fe-3a75e5347966")
ADsSecurityUtility;
}
