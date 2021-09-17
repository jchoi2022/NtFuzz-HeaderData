#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IObjectId IObjectId;
typedef interface IObjectIds IObjectIds;
typedef interface IBinaryConverter IBinaryConverter;
typedef interface IBinaryConverter2 IBinaryConverter2;
typedef interface IX500DistinguishedName IX500DistinguishedName;
typedef interface IX509EnrollmentStatus IX509EnrollmentStatus;
typedef interface ICspAlgorithm ICspAlgorithm;
typedef interface ICspAlgorithms ICspAlgorithms;
typedef interface ICspInformation ICspInformation;
typedef interface ICspInformations ICspInformations;
typedef interface ICspStatus ICspStatus;
typedef interface ICspStatuses ICspStatuses;
typedef interface IX509PublicKey IX509PublicKey;
typedef interface IX509PrivateKey IX509PrivateKey;
typedef interface IX509PrivateKey2 IX509PrivateKey2;
typedef interface IX509EndorsementKey IX509EndorsementKey;
typedef interface IX509Extension IX509Extension;
typedef interface IX509Extensions IX509Extensions;
typedef interface IX509ExtensionKeyUsage IX509ExtensionKeyUsage;
typedef interface IX509ExtensionEnhancedKeyUsage IX509ExtensionEnhancedKeyUsage;
typedef interface IX509ExtensionTemplateName IX509ExtensionTemplateName;
typedef interface IX509ExtensionTemplate IX509ExtensionTemplate;
typedef interface IAlternativeName IAlternativeName;
typedef interface IAlternativeNames IAlternativeNames;
typedef interface IX509ExtensionAlternativeNames IX509ExtensionAlternativeNames;
typedef interface IX509ExtensionBasicConstraints IX509ExtensionBasicConstraints;
typedef interface IX509ExtensionSubjectKeyIdentifier IX509ExtensionSubjectKeyIdentifier;
typedef interface IX509ExtensionAuthorityKeyIdentifier IX509ExtensionAuthorityKeyIdentifier;
typedef interface ISmimeCapability ISmimeCapability;
typedef interface ISmimeCapabilities ISmimeCapabilities;
typedef interface IX509ExtensionSmimeCapabilities IX509ExtensionSmimeCapabilities;
typedef interface IPolicyQualifier IPolicyQualifier;
typedef interface IPolicyQualifiers IPolicyQualifiers;
typedef interface ICertificatePolicy ICertificatePolicy;
typedef interface ICertificatePolicies ICertificatePolicies;
typedef interface IX509ExtensionCertificatePolicies IX509ExtensionCertificatePolicies;
typedef interface IX509ExtensionMSApplicationPolicies IX509ExtensionMSApplicationPolicies;
typedef interface IX509Attribute IX509Attribute;
typedef interface IX509Attributes IX509Attributes;
typedef interface IX509AttributeExtensions IX509AttributeExtensions;
typedef interface IX509AttributeClientId IX509AttributeClientId;
typedef interface IX509AttributeRenewalCertificate IX509AttributeRenewalCertificate;
typedef interface IX509AttributeArchiveKey IX509AttributeArchiveKey;
typedef interface IX509AttributeArchiveKeyHash IX509AttributeArchiveKeyHash;
typedef interface IX509AttributeOSVersion IX509AttributeOSVersion;
typedef interface IX509AttributeCspProvider IX509AttributeCspProvider;
typedef interface ICryptAttribute ICryptAttribute;
typedef interface ICryptAttributes ICryptAttributes;
typedef interface ICertProperty ICertProperty;
typedef interface ICertProperties ICertProperties;
typedef interface ICertPropertyFriendlyName ICertPropertyFriendlyName;
typedef interface ICertPropertyDescription ICertPropertyDescription;
typedef interface ICertPropertyAutoEnroll ICertPropertyAutoEnroll;
typedef interface ICertPropertyRequestOriginator ICertPropertyRequestOriginator;
typedef interface ICertPropertySHA1Hash ICertPropertySHA1Hash;
typedef interface ICertPropertyKeyProvInfo ICertPropertyKeyProvInfo;
typedef interface ICertPropertyArchived ICertPropertyArchived;
typedef interface ICertPropertyBackedUp ICertPropertyBackedUp;
typedef interface ICertPropertyEnrollment ICertPropertyEnrollment;
typedef interface ICertPropertyRenewal ICertPropertyRenewal;
typedef interface ICertPropertyArchivedKeyHash ICertPropertyArchivedKeyHash;
typedef interface ICertPropertyEnrollmentPolicyServer ICertPropertyEnrollmentPolicyServer;
typedef interface IX509SignatureInformation IX509SignatureInformation;
typedef interface ISignerCertificate ISignerCertificate;
typedef interface ISignerCertificates ISignerCertificates;
typedef interface IX509NameValuePair IX509NameValuePair;
typedef interface IX509NameValuePairs IX509NameValuePairs;
typedef interface IX509CertificateTemplate IX509CertificateTemplate;
typedef interface IX509CertificateTemplates IX509CertificateTemplates;
typedef interface IX509CertificateTemplateWritable IX509CertificateTemplateWritable;
typedef interface ICertificationAuthority ICertificationAuthority;
typedef interface ICertificationAuthorities ICertificationAuthorities;
typedef interface IX509EnrollmentPolicyServer IX509EnrollmentPolicyServer;
typedef interface IX509PolicyServerUrl IX509PolicyServerUrl;
typedef interface IX509PolicyServerListManager IX509PolicyServerListManager;
typedef interface IX509CertificateRequest IX509CertificateRequest;
typedef interface IX509CertificateRequestPkcs10 IX509CertificateRequestPkcs10;
typedef interface IX509CertificateRequestPkcs10V2 IX509CertificateRequestPkcs10V2;
typedef interface IX509CertificateRequestPkcs10V3 IX509CertificateRequestPkcs10V3;
typedef interface IX509CertificateRequestPkcs10V4 IX509CertificateRequestPkcs10V4;
typedef interface IX509CertificateRequestCertificate IX509CertificateRequestCertificate;
typedef interface IX509CertificateRequestCertificate2 IX509CertificateRequestCertificate2;
typedef interface IX509CertificateRequestPkcs7 IX509CertificateRequestPkcs7;
typedef interface IX509CertificateRequestPkcs7V2 IX509CertificateRequestPkcs7V2;
typedef interface IX509CertificateRequestCmc IX509CertificateRequestCmc;
typedef interface IX509CertificateRequestCmc2 IX509CertificateRequestCmc2;
typedef interface IX509Enrollment IX509Enrollment;
typedef interface IX509Enrollment2 IX509Enrollment2;
typedef interface IX509EnrollmentHelper IX509EnrollmentHelper;
typedef interface IX509EnrollmentWebClassFactory IX509EnrollmentWebClassFactory;
typedef interface IX509MachineEnrollmentFactory IX509MachineEnrollmentFactory;
typedef interface IX509CertificateRevocationListEntry IX509CertificateRevocationListEntry;
typedef interface IX509CertificateRevocationListEntries IX509CertificateRevocationListEntries;
typedef interface IX509CertificateRevocationList IX509CertificateRevocationList;
typedef interface ICertificateAttestationChallenge ICertificateAttestationChallenge;
typedef interface ICertificateAttestationChallenge2 ICertificateAttestationChallenge2;
typedef interface IX509SCEPEnrollment IX509SCEPEnrollment;
typedef interface IX509SCEPEnrollment2 IX509SCEPEnrollment2;
typedef interface IX509SCEPEnrollmentHelper IX509SCEPEnrollmentHelper;
typedef class CObjectId CObjectId;
typedef class CObjectIds CObjectIds;
typedef class CBinaryConverter CBinaryConverter;
typedef class CX500DistinguishedName CX500DistinguishedName;
typedef class CCspInformation CCspInformation;
typedef class CCspInformations CCspInformations;
typedef class CCspStatus CCspStatus;
typedef class CX509PublicKey CX509PublicKey;
typedef class CX509PrivateKey CX509PrivateKey;
typedef class CX509EndorsementKey CX509EndorsementKey;
typedef class CX509Extension CX509Extension;
typedef class CX509Extensions CX509Extensions;
typedef class CX509ExtensionKeyUsage CX509ExtensionKeyUsage;
typedef class CX509ExtensionEnhancedKeyUsage CX509ExtensionEnhancedKeyUsage;
typedef class CX509ExtensionTemplateName CX509ExtensionTemplateName;
typedef class CX509ExtensionTemplate CX509ExtensionTemplate;
typedef class CAlternativeName CAlternativeName;
typedef class CAlternativeNames CAlternativeNames;
typedef class CX509ExtensionAlternativeNames CX509ExtensionAlternativeNames;
typedef class CX509ExtensionBasicConstraints CX509ExtensionBasicConstraints;
typedef class CX509ExtensionSubjectKeyIdentifier CX509ExtensionSubjectKeyIdentifier;
typedef class CX509ExtensionAuthorityKeyIdentifier CX509ExtensionAuthorityKeyIdentifier;
typedef class CSmimeCapability CSmimeCapability;
typedef class CSmimeCapabilities CSmimeCapabilities;
typedef class CX509ExtensionSmimeCapabilities CX509ExtensionSmimeCapabilities;
typedef class CPolicyQualifier CPolicyQualifier;
typedef class CPolicyQualifiers CPolicyQualifiers;
typedef class CCertificatePolicy CCertificatePolicy;
typedef class CCertificatePolicies CCertificatePolicies;
typedef class CX509ExtensionCertificatePolicies CX509ExtensionCertificatePolicies;
typedef class CX509ExtensionMSApplicationPolicies CX509ExtensionMSApplicationPolicies;
typedef class CX509Attribute CX509Attribute;
typedef class CX509Attributes CX509Attributes;
typedef class CX509AttributeExtensions CX509AttributeExtensions;
typedef class CX509AttributeClientId CX509AttributeClientId;
typedef class CX509AttributeRenewalCertificate CX509AttributeRenewalCertificate;
typedef class CX509AttributeArchiveKey CX509AttributeArchiveKey;
typedef class CX509AttributeArchiveKeyHash CX509AttributeArchiveKeyHash;
typedef class CX509AttributeOSVersion CX509AttributeOSVersion;
typedef class CX509AttributeCspProvider CX509AttributeCspProvider;
typedef class CCryptAttribute CCryptAttribute;
typedef class CCryptAttributes CCryptAttributes;
typedef class CCertProperty CCertProperty;
typedef class CCertProperties CCertProperties;
typedef class CCertPropertyFriendlyName CCertPropertyFriendlyName;
typedef class CCertPropertyDescription CCertPropertyDescription;
typedef class CCertPropertyAutoEnroll CCertPropertyAutoEnroll;
typedef class CCertPropertyRequestOriginator CCertPropertyRequestOriginator;
typedef class CCertPropertySHA1Hash CCertPropertySHA1Hash;
typedef class CCertPropertyKeyProvInfo CCertPropertyKeyProvInfo;
typedef class CCertPropertyArchived CCertPropertyArchived;
typedef class CCertPropertyBackedUp CCertPropertyBackedUp;
typedef class CCertPropertyEnrollment CCertPropertyEnrollment;
typedef class CCertPropertyRenewal CCertPropertyRenewal;
typedef class CCertPropertyArchivedKeyHash CCertPropertyArchivedKeyHash;
typedef class CCertPropertyEnrollmentPolicyServer CCertPropertyEnrollmentPolicyServer;
typedef class CSignerCertificate CSignerCertificate;
typedef class CX509NameValuePair CX509NameValuePair;
typedef class CCertificateAttestationChallenge CCertificateAttestationChallenge;
typedef class CX509CertificateRequestPkcs10 CX509CertificateRequestPkcs10;
typedef class CX509CertificateRequestCertificate CX509CertificateRequestCertificate;
typedef class CX509CertificateRequestPkcs7 CX509CertificateRequestPkcs7;
typedef class CX509CertificateRequestCmc CX509CertificateRequestCmc;
typedef class CX509Enrollment CX509Enrollment;
typedef class CX509EnrollmentWebClassFactory CX509EnrollmentWebClassFactory;
typedef class CX509EnrollmentHelper CX509EnrollmentHelper;
typedef class CX509MachineEnrollmentFactory CX509MachineEnrollmentFactory;
typedef class CX509EnrollmentPolicyActiveDirectory CX509EnrollmentPolicyActiveDirectory;
typedef class CX509EnrollmentPolicyWebService CX509EnrollmentPolicyWebService;
typedef class CX509PolicyServerListManager CX509PolicyServerListManager;
typedef class CX509PolicyServerUrl CX509PolicyServerUrl;
typedef class CX509CertificateTemplateADWritable CX509CertificateTemplateADWritable;
typedef class CX509CertificateRevocationListEntry CX509CertificateRevocationListEntry;
typedef class CX509CertificateRevocationListEntries CX509CertificateRevocationListEntries;
typedef class CX509CertificateRevocationList CX509CertificateRevocationList;
typedef class CX509SCEPEnrollment CX509SCEPEnrollment;
typedef class CX509SCEPEnrollmentHelper CX509SCEPEnrollmentHelper;
#include "wtypes.h"
#include "oaidl.h"
#include "certcli.h"
#include "certpol.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum CERTENROLL_OBJECTID
    {
        XCN_OID_NONE = 0,
        XCN_OID_RSA = 1,
        XCN_OID_PKCS = 2,
        XCN_OID_RSA_HASH = 3,
        XCN_OID_RSA_ENCRYPT = 4,
        XCN_OID_PKCS_1 = 5,
        XCN_OID_PKCS_2 = 6,
        XCN_OID_PKCS_3 = 7,
        XCN_OID_PKCS_4 = 8,
        XCN_OID_PKCS_5 = 9,
        XCN_OID_PKCS_6 = 10,
        XCN_OID_PKCS_7 = 11,
        XCN_OID_PKCS_8 = 12,
        XCN_OID_PKCS_9 = 13,
        XCN_OID_PKCS_10 = 14,
        XCN_OID_PKCS_12 = 15,
        XCN_OID_RSA_RSA = 16,
        XCN_OID_RSA_MD2RSA = 17,
        XCN_OID_RSA_MD4RSA = 18,
        XCN_OID_RSA_MD5RSA = 19,
        XCN_OID_RSA_SHA1RSA = 20,
        XCN_OID_RSA_SETOAEP_RSA = 21,
        XCN_OID_RSA_DH = 22,
        XCN_OID_RSA_data = 23,
        XCN_OID_RSA_signedData = 24,
        XCN_OID_RSA_envelopedData = 25,
        XCN_OID_RSA_signEnvData = 26,
        XCN_OID_RSA_digestedData = 27,
        XCN_OID_RSA_hashedData = 28,
        XCN_OID_RSA_encryptedData = 29,
        XCN_OID_RSA_emailAddr = 30,
        XCN_OID_RSA_unstructName = 31,
        XCN_OID_RSA_contentType = 32,
        XCN_OID_RSA_messageDigest = 33,
        XCN_OID_RSA_signingTime = 34,
        XCN_OID_RSA_counterSign = 35,
        XCN_OID_RSA_challengePwd = 36,
        XCN_OID_RSA_unstructAddr = 37,
        XCN_OID_RSA_extCertAttrs = 38,
        XCN_OID_RSA_certExtensions = 39,
        XCN_OID_RSA_SMIMECapabilities = 40,
        XCN_OID_RSA_preferSignedData = 41,
        XCN_OID_RSA_SMIMEalg = 42,
        XCN_OID_RSA_SMIMEalgESDH = 43,
        XCN_OID_RSA_SMIMEalgCMS3DESwrap = 44,
        XCN_OID_RSA_SMIMEalgCMSRC2wrap = 45,
        XCN_OID_RSA_MD2 = 46,
        XCN_OID_RSA_MD4 = 47,
        XCN_OID_RSA_MD5 = 48,
        XCN_OID_RSA_RC2CBC = 49,
        XCN_OID_RSA_RC4 = 50,
        XCN_OID_RSA_DES_EDE3_CBC = 51,
        XCN_OID_RSA_RC5_CBCPad = 52,
        XCN_OID_ANSI_X942 = 53,
        XCN_OID_ANSI_X942_DH = 54,
        XCN_OID_X957 = 55,
        XCN_OID_X957_DSA = 56,
        XCN_OID_X957_SHA1DSA = 57,
        XCN_OID_DS = 58,
        XCN_OID_DSALG = 59,
        XCN_OID_DSALG_CRPT = 60,
        XCN_OID_DSALG_HASH = 61,
        XCN_OID_DSALG_SIGN = 62,
        XCN_OID_DSALG_RSA = 63,
        XCN_OID_OIW = 64,
        XCN_OID_OIWSEC = 65,
        XCN_OID_OIWSEC_md4RSA = 66,
        XCN_OID_OIWSEC_md5RSA = 67,
        XCN_OID_OIWSEC_md4RSA2 = 68,
        XCN_OID_OIWSEC_desECB = 69,
        XCN_OID_OIWSEC_desCBC = 70,
        XCN_OID_OIWSEC_desOFB = 71,
        XCN_OID_OIWSEC_desCFB = 72,
        XCN_OID_OIWSEC_desMAC = 73,
        XCN_OID_OIWSEC_rsaSign = 74,
        XCN_OID_OIWSEC_dsa = 75,
        XCN_OID_OIWSEC_shaDSA = 76,
        XCN_OID_OIWSEC_mdc2RSA = 77,
        XCN_OID_OIWSEC_shaRSA = 78,
        XCN_OID_OIWSEC_dhCommMod = 79,
        XCN_OID_OIWSEC_desEDE = 80,
        XCN_OID_OIWSEC_sha = 81,
        XCN_OID_OIWSEC_mdc2 = 82,
        XCN_OID_OIWSEC_dsaComm = 83,
        XCN_OID_OIWSEC_dsaCommSHA = 84,
        XCN_OID_OIWSEC_rsaXchg = 85,
        XCN_OID_OIWSEC_keyHashSeal = 86,
        XCN_OID_OIWSEC_md2RSASign = 87,
        XCN_OID_OIWSEC_md5RSASign = 88,
        XCN_OID_OIWSEC_sha1 = 89,
        XCN_OID_OIWSEC_dsaSHA1 = 90,
        XCN_OID_OIWSEC_dsaCommSHA1 = 91,
        XCN_OID_OIWSEC_sha1RSASign = 92,
        XCN_OID_OIWDIR = 93,
        XCN_OID_OIWDIR_CRPT = 94,
        XCN_OID_OIWDIR_HASH = 95,
        XCN_OID_OIWDIR_SIGN = 96,
        XCN_OID_OIWDIR_md2 = 97,
        XCN_OID_OIWDIR_md2RSA = 98,
        XCN_OID_INFOSEC = 99,
        XCN_OID_INFOSEC_sdnsSignature = 100,
        XCN_OID_INFOSEC_mosaicSignature = 101,
        XCN_OID_INFOSEC_sdnsConfidentiality = 102,
        XCN_OID_INFOSEC_mosaicConfidentiality = 103,
        XCN_OID_INFOSEC_sdnsIntegrity = 104,
        XCN_OID_INFOSEC_mosaicIntegrity = 105,
        XCN_OID_INFOSEC_sdnsTokenProtection = 106,
        XCN_OID_INFOSEC_mosaicTokenProtection = 107,
        XCN_OID_INFOSEC_sdnsKeyManagement = 108,
        XCN_OID_INFOSEC_mosaicKeyManagement = 109,
        XCN_OID_INFOSEC_sdnsKMandSig = 110,
        XCN_OID_INFOSEC_mosaicKMandSig = 111,
        XCN_OID_INFOSEC_SuiteASignature = 112,
        XCN_OID_INFOSEC_SuiteAConfidentiality = 113,
        XCN_OID_INFOSEC_SuiteAIntegrity = 114,
        XCN_OID_INFOSEC_SuiteATokenProtection = 115,
        XCN_OID_INFOSEC_SuiteAKeyManagement = 116,
        XCN_OID_INFOSEC_SuiteAKMandSig = 117,
        XCN_OID_INFOSEC_mosaicUpdatedSig = 118,
        XCN_OID_INFOSEC_mosaicKMandUpdSig = 119,
        XCN_OID_INFOSEC_mosaicUpdatedInteg = 120,
        XCN_OID_COMMON_NAME = 121,
        XCN_OID_SUR_NAME = 122,
        XCN_OID_DEVICE_SERIAL_NUMBER = 123,
        XCN_OID_COUNTRY_NAME = 124,
        XCN_OID_LOCALITY_NAME = 125,
        XCN_OID_STATE_OR_PROVINCE_NAME = 126,
        XCN_OID_STREET_ADDRESS = 127,
        XCN_OID_ORGANIZATION_NAME = 128,
        XCN_OID_ORGANIZATIONAL_UNIT_NAME = 129,
        XCN_OID_TITLE = 130,
        XCN_OID_DESCRIPTION = 131,
        XCN_OID_SEARCH_GUIDE = 132,
        XCN_OID_BUSINESS_CATEGORY = 133,
        XCN_OID_POSTAL_ADDRESS = 134,
        XCN_OID_POSTAL_CODE = 135,
        XCN_OID_POST_OFFICE_BOX = 136,
        XCN_OID_PHYSICAL_DELIVERY_OFFICE_NAME = 137,
        XCN_OID_TELEPHONE_NUMBER = 138,
        XCN_OID_TELEX_NUMBER = 139,
        XCN_OID_TELETEXT_TERMINAL_IDENTIFIER = 140,
        XCN_OID_FACSIMILE_TELEPHONE_NUMBER = 141,
        XCN_OID_X21_ADDRESS = 142,
        XCN_OID_INTERNATIONAL_ISDN_NUMBER = 143,
        XCN_OID_REGISTERED_ADDRESS = 144,
        XCN_OID_DESTINATION_INDICATOR = 145,
        XCN_OID_PREFERRED_DELIVERY_METHOD = 146,
        XCN_OID_PRESENTATION_ADDRESS = 147,
        XCN_OID_SUPPORTED_APPLICATION_CONTEXT = 148,
        XCN_OID_MEMBER = 149,
        XCN_OID_OWNER = 150,
        XCN_OID_ROLE_OCCUPANT = 151,
        XCN_OID_SEE_ALSO = 152,
        XCN_OID_USER_PASSWORD = 153,
        XCN_OID_USER_CERTIFICATE = 154,
        XCN_OID_CA_CERTIFICATE = 155,
        XCN_OID_AUTHORITY_REVOCATION_LIST = 156,
        XCN_OID_CERTIFICATE_REVOCATION_LIST = 157,
        XCN_OID_CROSS_CERTIFICATE_PAIR = 158,
        XCN_OID_GIVEN_NAME = 159,
        XCN_OID_INITIALS = 160,
        XCN_OID_DN_QUALIFIER = 161,
        XCN_OID_DOMAIN_COMPONENT = 162,
        XCN_OID_PKCS_12_FRIENDLY_NAME_ATTR = 163,
        XCN_OID_PKCS_12_LOCAL_KEY_ID = 164,
        XCN_OID_PKCS_12_KEY_PROVIDER_NAME_ATTR = 165,
        XCN_OID_LOCAL_MACHINE_KEYSET = 166,
        XCN_OID_PKCS_12_EXTENDED_ATTRIBUTES = 167,
        XCN_OID_KEYID_RDN = 168,
        XCN_OID_AUTHORITY_KEY_IDENTIFIER = 169,
        XCN_OID_KEY_ATTRIBUTES = 170,
        XCN_OID_CERT_POLICIES_95 = 171,
        XCN_OID_KEY_USAGE_RESTRICTION = 172,
        XCN_OID_SUBJECT_ALT_NAME = 173,
        XCN_OID_ISSUER_ALT_NAME = 174,
        XCN_OID_BASIC_CONSTRAINTS = 175,
        XCN_OID_KEY_USAGE = 176,
        XCN_OID_PRIVATEKEY_USAGE_PERIOD = 177,
        XCN_OID_BASIC_CONSTRAINTS2 = 178,
        XCN_OID_CERT_POLICIES = 179,
        XCN_OID_ANY_CERT_POLICY = 180,
        XCN_OID_AUTHORITY_KEY_IDENTIFIER2 = 181,
        XCN_OID_SUBJECT_KEY_IDENTIFIER = 182,
        XCN_OID_SUBJECT_ALT_NAME2 = 183,
        XCN_OID_ISSUER_ALT_NAME2 = 184,
        XCN_OID_CRL_REASON_CODE = 185,
        XCN_OID_REASON_CODE_HOLD = 186,
        XCN_OID_CRL_DIST_POINTS = 187,
        XCN_OID_ENHANCED_KEY_USAGE = 188,
        XCN_OID_CRL_NUMBER = 189,
        XCN_OID_DELTA_CRL_INDICATOR = 190,
        XCN_OID_ISSUING_DIST_POINT = 191,
        XCN_OID_FRESHEST_CRL = 192,
        XCN_OID_NAME_CONSTRAINTS = 193,
        XCN_OID_POLICY_MAPPINGS = 194,
        XCN_OID_LEGACY_POLICY_MAPPINGS = 195,
        XCN_OID_POLICY_CONSTRAINTS = 196,
        XCN_OID_RENEWAL_CERTIFICATE = 197,
        XCN_OID_ENROLLMENT_NAME_VALUE_PAIR = 198,
        XCN_OID_ENROLLMENT_CSP_PROVIDER = 199,
        XCN_OID_OS_VERSION = 200,
        XCN_OID_ENROLLMENT_AGENT = 201,
        XCN_OID_PKIX = 202,
        XCN_OID_PKIX_PE = 203,
        XCN_OID_AUTHORITY_INFO_ACCESS = 204,
        XCN_OID_BIOMETRIC_EXT = 205,
        XCN_OID_LOGOTYPE_EXT = 206,
        XCN_OID_CERT_EXTENSIONS = 207,
        XCN_OID_NEXT_UPDATE_LOCATION = 208,
        XCN_OID_REMOVE_CERTIFICATE = 209,
        XCN_OID_CROSS_CERT_DIST_POINTS = 210,
        XCN_OID_CTL = 211,
        XCN_OID_SORTED_CTL = 212,
        XCN_OID_SERIALIZED = 213,
        XCN_OID_NT_PRINCIPAL_NAME = 214,
        XCN_OID_PRODUCT_UPDATE = 215,
        XCN_OID_ANY_APPLICATION_POLICY = 216,
        XCN_OID_AUTO_ENROLL_CTL_USAGE = 217,
        XCN_OID_ENROLL_CERTTYPE_EXTENSION = 218,
        XCN_OID_CERT_MANIFOLD = 219,
        XCN_OID_CERTSRV_CA_VERSION = 220,
        XCN_OID_CERTSRV_PREVIOUS_CERT_HASH = 221,
        XCN_OID_CRL_VIRTUAL_BASE = 222,
        XCN_OID_CRL_NEXT_PUBLISH = 223,
        XCN_OID_KP_CA_EXCHANGE = 224,
        XCN_OID_KP_KEY_RECOVERY_AGENT = 225,
        XCN_OID_CERTIFICATE_TEMPLATE = 226,
        XCN_OID_ENTERPRISE_OID_ROOT = 227,
        XCN_OID_RDN_DUMMY_SIGNER = 228,
        XCN_OID_APPLICATION_CERT_POLICIES = 229,
        XCN_OID_APPLICATION_POLICY_MAPPINGS = 230,
        XCN_OID_APPLICATION_POLICY_CONSTRAINTS = 231,
        XCN_OID_ARCHIVED_KEY_ATTR = 232,
        XCN_OID_CRL_SELF_CDP = 233,
        XCN_OID_REQUIRE_CERT_CHAIN_POLICY = 234,
        XCN_OID_ARCHIVED_KEY_CERT_HASH = 235,
        XCN_OID_ISSUED_CERT_HASH = 236,
        XCN_OID_DS_EMAIL_REPLICATION = 237,
        XCN_OID_REQUEST_CLIENT_INFO = 238,
        XCN_OID_ENCRYPTED_KEY_HASH = 239,
        XCN_OID_CERTSRV_CROSSCA_VERSION = 240,
        XCN_OID_NTDS_REPLICATION = 241,
        XCN_OID_SUBJECT_DIR_ATTRS = 242,
        XCN_OID_PKIX_KP = 243,
        XCN_OID_PKIX_KP_SERVER_AUTH = 244,
        XCN_OID_PKIX_KP_CLIENT_AUTH = 245,
        XCN_OID_PKIX_KP_CODE_SIGNING = 246,
        XCN_OID_PKIX_KP_EMAIL_PROTECTION = 247,
        XCN_OID_PKIX_KP_IPSEC_END_SYSTEM = 248,
        XCN_OID_PKIX_KP_IPSEC_TUNNEL = 249,
        XCN_OID_PKIX_KP_IPSEC_USER = 250,
        XCN_OID_PKIX_KP_TIMESTAMP_SIGNING = 251,
        XCN_OID_PKIX_KP_OCSP_SIGNING = 252,
        XCN_OID_PKIX_OCSP_NOCHECK = 253,
        XCN_OID_IPSEC_KP_IKE_INTERMEDIATE = 254,
        XCN_OID_KP_CTL_USAGE_SIGNING = 255,
        XCN_OID_KP_TIME_STAMP_SIGNING = 256,
        XCN_OID_SERVER_GATED_CRYPTO = 257,
        XCN_OID_SGC_NETSCAPE = 258,
        XCN_OID_KP_EFS = 259,
        XCN_OID_EFS_RECOVERY = 260,
        XCN_OID_WHQL_CRYPTO = 261,
        XCN_OID_NT5_CRYPTO = 262,
        XCN_OID_OEM_WHQL_CRYPTO = 263,
        XCN_OID_EMBEDDED_NT_CRYPTO = 264,
        XCN_OID_ROOT_LIST_SIGNER = 265,
        XCN_OID_KP_QUALIFIED_SUBORDINATION = 266,
        XCN_OID_KP_KEY_RECOVERY = 267,
        XCN_OID_KP_DOCUMENT_SIGNING = 268,
        XCN_OID_KP_LIFETIME_SIGNING = 269,
        XCN_OID_KP_MOBILE_DEVICE_SOFTWARE = 270,
        XCN_OID_KP_SMART_DISPLAY = 271,
        XCN_OID_KP_CSP_SIGNATURE = 272,
        XCN_OID_DRM = 273,
        XCN_OID_DRM_INDIVIDUALIZATION = 274,
        XCN_OID_LICENSES = 275,
        XCN_OID_LICENSE_SERVER = 276,
        XCN_OID_KP_SMARTCARD_LOGON = 277,
        XCN_OID_YESNO_TRUST_ATTR = 278,
        XCN_OID_PKIX_POLICY_QUALIFIER_CPS = 279,
        XCN_OID_PKIX_POLICY_QUALIFIER_USERNOTICE = 280,
        XCN_OID_CERT_POLICIES_95_QUALIFIER1 = 281,
        XCN_OID_PKIX_ACC_DESCR = 282,
        XCN_OID_PKIX_OCSP = 283,
        XCN_OID_PKIX_CA_ISSUERS = 284,
        XCN_OID_VERISIGN_PRIVATE_6_9 = 285,
        XCN_OID_VERISIGN_ONSITE_JURISDICTION_HASH = 286,
        XCN_OID_VERISIGN_BITSTRING_6_13 = 287,
        XCN_OID_VERISIGN_ISS_STRONG_CRYPTO = 288,
        XCN_OID_NETSCAPE = 289,
        XCN_OID_NETSCAPE_CERT_EXTENSION = 290,
        XCN_OID_NETSCAPE_CERT_TYPE = 291,
        XCN_OID_NETSCAPE_BASE_URL = 292,
        XCN_OID_NETSCAPE_REVOCATION_URL = 293,
        XCN_OID_NETSCAPE_CA_REVOCATION_URL = 294,
        XCN_OID_NETSCAPE_CERT_RENEWAL_URL = 295,
        XCN_OID_NETSCAPE_CA_POLICY_URL = 296,
        XCN_OID_NETSCAPE_SSL_SERVER_NAME = 297,
        XCN_OID_NETSCAPE_COMMENT = 298,
        XCN_OID_NETSCAPE_DATA_TYPE = 299,
        XCN_OID_NETSCAPE_CERT_SEQUENCE = 300,
        XCN_OID_CT_PKI_DATA = 301,
        XCN_OID_CT_PKI_RESPONSE = 302,
        XCN_OID_PKIX_NO_SIGNATURE = 303,
        XCN_OID_CMC = 304,
        XCN_OID_CMC_STATUS_INFO = 305,
        XCN_OID_CMC_IDENTIFICATION = 306,
        XCN_OID_CMC_IDENTITY_PROOF = 307,
        XCN_OID_CMC_DATA_RETURN = 308,
        XCN_OID_CMC_TRANSACTION_ID = 309,
        XCN_OID_CMC_SENDER_NONCE = 310,
        XCN_OID_CMC_RECIPIENT_NONCE = 311,
        XCN_OID_CMC_ADD_EXTENSIONS = 312,
        XCN_OID_CMC_ENCRYPTED_POP = 313,
        XCN_OID_CMC_DECRYPTED_POP = 314,
        XCN_OID_CMC_LRA_POP_WITNESS = 315,
        XCN_OID_CMC_GET_CERT = 316,
        XCN_OID_CMC_GET_CRL = 317,
        XCN_OID_CMC_REVOKE_REQUEST = 318,
        XCN_OID_CMC_REG_INFO = 319,
        XCN_OID_CMC_RESPONSE_INFO = 320,
        XCN_OID_CMC_QUERY_PENDING = 321,
        XCN_OID_CMC_ID_POP_LINK_RANDOM = 322,
        XCN_OID_CMC_ID_POP_LINK_WITNESS = 323,
        XCN_OID_CMC_ID_CONFIRM_CERT_ACCEPTANCE = 324,
        XCN_OID_CMC_ADD_ATTRIBUTES = 325,
        XCN_OID_LOYALTY_OTHER_LOGOTYPE = 326,
        XCN_OID_BACKGROUND_OTHER_LOGOTYPE = 327,
        XCN_OID_PKIX_OCSP_BASIC_SIGNED_RESPONSE = 328,
        XCN_OID_PKCS_7_DATA = 329,
        XCN_OID_PKCS_7_SIGNED = 330,
        XCN_OID_PKCS_7_ENVELOPED = 331,
        XCN_OID_PKCS_7_SIGNEDANDENVELOPED = 332,
        XCN_OID_PKCS_7_DIGESTED = 333,
        XCN_OID_PKCS_7_ENCRYPTED = 334,
        XCN_OID_PKCS_9_CONTENT_TYPE = 335,
        XCN_OID_PKCS_9_MESSAGE_DIGEST = 336,
        XCN_OID_CERT_PROP_ID_PREFIX = 337,
        XCN_OID_CERT_KEY_IDENTIFIER_PROP_ID = 338,
        XCN_OID_CERT_ISSUER_SERIAL_NUMBER_MD5_HASH_PROP_ID = 339,
        XCN_OID_CERT_SUBJECT_NAME_MD5_HASH_PROP_ID = 340,
        XCN_OID_CERT_MD5_HASH_PROP_ID = 341,
        XCN_OID_RSA_SHA256RSA = 342,
        XCN_OID_RSA_SHA384RSA = 343,
        XCN_OID_RSA_SHA512RSA = 344,
        XCN_OID_NIST_sha256 = 345,
        XCN_OID_NIST_sha384 = 346,
        XCN_OID_NIST_sha512 = 347,
        XCN_OID_RSA_MGF1 = 348,
        XCN_OID_ECC_PUBLIC_KEY = 349,
        XCN_OID_ECDSA_SHA1 = 350,
        XCN_OID_ECDSA_SPECIFIED = 351,
        XCN_OID_ANY_ENHANCED_KEY_USAGE = 352,
        XCN_OID_RSA_SSA_PSS = 353,
        XCN_OID_ATTR_SUPPORTED_ALGORITHMS = 355,
        XCN_OID_ATTR_TPM_SECURITY_ASSERTIONS = 356,
        XCN_OID_ATTR_TPM_SPECIFICATION = 357,
        XCN_OID_CERT_DISALLOWED_FILETIME_PROP_ID = 358,
        XCN_OID_CERT_SIGNATURE_HASH_PROP_ID = 359,
        XCN_OID_CERT_STRONG_KEY_OS_1 = 360,
        XCN_OID_CERT_STRONG_KEY_OS_CURRENT = 361,
        XCN_OID_CERT_STRONG_KEY_OS_PREFIX = 362,
        XCN_OID_CERT_STRONG_SIGN_OS_1 = 363,
        XCN_OID_CERT_STRONG_SIGN_OS_CURRENT = 364,
        XCN_OID_CERT_STRONG_SIGN_OS_PREFIX = 365,
        XCN_OID_DH_SINGLE_PASS_STDDH_SHA1_KDF = 366,
        XCN_OID_DH_SINGLE_PASS_STDDH_SHA256_KDF = 367,
        XCN_OID_DH_SINGLE_PASS_STDDH_SHA384_KDF = 368,
        XCN_OID_DISALLOWED_HASH = 369,
        XCN_OID_DISALLOWED_LIST = 370,
        XCN_OID_ECC_CURVE_P256 = 371,
        XCN_OID_ECC_CURVE_P384 = 372,
        XCN_OID_ECC_CURVE_P521 = 373,
        XCN_OID_ECDSA_SHA256 = 374,
        XCN_OID_ECDSA_SHA384 = 375,
        XCN_OID_ECDSA_SHA512 = 376,
        XCN_OID_ENROLL_CAXCHGCERT_HASH = 377,
        XCN_OID_ENROLL_EK_INFO = 378,
        XCN_OID_ENROLL_EKPUB_CHALLENGE = 379,
        XCN_OID_ENROLL_EKVERIFYCERT = 380,
        XCN_OID_ENROLL_EKVERIFYCREDS = 381,
        XCN_OID_ENROLL_EKVERIFYKEY = 382,
        XCN_OID_EV_RDN_COUNTRY = 383,
        XCN_OID_EV_RDN_LOCALE = 384,
        XCN_OID_EV_RDN_STATE_OR_PROVINCE = 385,
        XCN_OID_INHIBIT_ANY_POLICY = 386,
        XCN_OID_INTERNATIONALIZED_EMAIL_ADDRESS = 387,
        XCN_OID_KP_KERNEL_MODE_CODE_SIGNING = 388,
        XCN_OID_KP_KERNEL_MODE_HAL_EXTENSION_SIGNING = 389,
        XCN_OID_KP_KERNEL_MODE_TRUSTED_BOOT_SIGNING = 390,
        XCN_OID_KP_TPM_AIK_CERTIFICATE = 391,
        XCN_OID_KP_TPM_EK_CERTIFICATE = 392,
        XCN_OID_KP_TPM_PLATFORM_CERTIFICATE = 393,
        XCN_OID_NIST_AES128_CBC = 394,
        XCN_OID_NIST_AES128_WRAP = 395,
        XCN_OID_NIST_AES192_CBC = 396,
        XCN_OID_NIST_AES192_WRAP = 397,
        XCN_OID_NIST_AES256_CBC = 398,
        XCN_OID_NIST_AES256_WRAP = 399,
        XCN_OID_PKCS_12_PbeIds = 400,
        XCN_OID_PKCS_12_pbeWithSHA1And128BitRC2 = 401,
        XCN_OID_PKCS_12_pbeWithSHA1And128BitRC4 = 402,
        XCN_OID_PKCS_12_pbeWithSHA1And2KeyTripleDES = 403,
        XCN_OID_PKCS_12_pbeWithSHA1And3KeyTripleDES = 404,
        XCN_OID_PKCS_12_pbeWithSHA1And40BitRC2 = 405,
        XCN_OID_PKCS_12_pbeWithSHA1And40BitRC4 = 406,
        XCN_OID_PKCS_12_PROTECTED_PASSWORD_SECRET_BAG_TYPE_ID = 407,
        XCN_OID_PKINIT_KP_KDC = 408,
        XCN_OID_PKIX_CA_REPOSITORY = 409,
        XCN_OID_PKIX_OCSP_NONCE = 410,
        XCN_OID_PKIX_TIME_STAMPING = 411,
        XCN_OID_QC_EU_COMPLIANCE = 412,
        XCN_OID_QC_SSCD = 413,
        XCN_OID_QC_STATEMENTS_EXT = 414,
        XCN_OID_RDN_TPM_MANUFACTURER = 415,
        XCN_OID_RDN_TPM_MODEL = 416,
        XCN_OID_RDN_TPM_VERSION = 417,
        XCN_OID_REVOKED_LIST_SIGNER = 418,
        XCN_OID_RFC3161_counterSign = 419,
        XCN_OID_ROOT_PROGRAM_AUTO_UPDATE_CA_REVOCATION = 420,
        XCN_OID_ROOT_PROGRAM_AUTO_UPDATE_END_REVOCATION = 421,
        XCN_OID_ROOT_PROGRAM_FLAGS = 422,
        XCN_OID_ROOT_PROGRAM_NO_OCSP_FAILOVER_TO_CRL = 423,
        XCN_OID_RSA_PSPECIFIED = 424,
        XCN_OID_RSAES_OAEP = 425,
        XCN_OID_SUBJECT_INFO_ACCESS = 426,
        XCN_OID_TIMESTAMP_TOKEN = 427,
        XCN_OID_ENROLL_SCEP_ERROR = 428,
        XCN_OIDVerisign_MessageType = 429,
        XCN_OIDVerisign_PkiStatus = 430,
        XCN_OIDVerisign_FailInfo = 431,
        XCN_OIDVerisign_SenderNonce = 432,
        XCN_OIDVerisign_RecipientNonce = 433,
        XCN_OIDVerisign_TransactionID = 434,
        XCN_OID_ENROLL_ATTESTATION_CHALLENGE = 435,
        XCN_OID_ENROLL_ATTESTATION_STATEMENT = 436,
        XCN_OID_ENROLL_ENCRYPTION_ALGORITHM = 437,
        XCN_OID_ENROLL_KSP_NAME = 438
    } CERTENROLL_OBJECTID;
typedef
enum WebSecurityLevel
    {
        LevelUnsafe = 0,
        LevelSafe = 1
    } WebSecurityLevel;
typedef
enum EncodingType
    {
        XCN_CRYPT_STRING_BASE64HEADER = 0,
        XCN_CRYPT_STRING_BASE64 = 0x1,
        XCN_CRYPT_STRING_BINARY = 0x2,
        XCN_CRYPT_STRING_BASE64REQUESTHEADER = 0x3,
        XCN_CRYPT_STRING_HEX = 0x4,
        XCN_CRYPT_STRING_HEXASCII = 0x5,
        XCN_CRYPT_STRING_BASE64_ANY = 0x6,
        XCN_CRYPT_STRING_ANY = 0x7,
        XCN_CRYPT_STRING_HEX_ANY = 0x8,
        XCN_CRYPT_STRING_BASE64X509CRLHEADER = 0x9,
        XCN_CRYPT_STRING_HEXADDR = 0xa,
        XCN_CRYPT_STRING_HEXASCIIADDR = 0xb,
        XCN_CRYPT_STRING_HEXRAW = 0xc,
        XCN_CRYPT_STRING_BASE64URI = 0xd,
        XCN_CRYPT_STRING_ENCODEMASK = 0xff,
        XCN_CRYPT_STRING_CHAIN = 0x100,
        XCN_CRYPT_STRING_TEXT = 0x200,
        XCN_CRYPT_STRING_PERCENTESCAPE = 0x8000000,
        XCN_CRYPT_STRING_HASHDATA = 0x10000000,
        XCN_CRYPT_STRING_STRICT = 0x20000000,
        XCN_CRYPT_STRING_NOCRLF = 0x40000000,
        XCN_CRYPT_STRING_NOCR = 0x80000000
    } EncodingType;
typedef
enum PFXExportOptions
    {
        PFXExportEEOnly = 0,
        PFXExportChainNoRoot = 1,
        PFXExportChainWithRoot = 2
    } PFXExportOptions;
typedef
enum ObjectIdGroupId
    {
        XCN_CRYPT_ANY_GROUP_ID = 0,
        XCN_CRYPT_HASH_ALG_OID_GROUP_ID = 1,
        XCN_CRYPT_ENCRYPT_ALG_OID_GROUP_ID = 2,
        XCN_CRYPT_PUBKEY_ALG_OID_GROUP_ID = 3,
        XCN_CRYPT_SIGN_ALG_OID_GROUP_ID = 4,
        XCN_CRYPT_RDN_ATTR_OID_GROUP_ID = 5,
        XCN_CRYPT_EXT_OR_ATTR_OID_GROUP_ID = 6,
        XCN_CRYPT_ENHKEY_USAGE_OID_GROUP_ID = 7,
        XCN_CRYPT_POLICY_OID_GROUP_ID = 8,
        XCN_CRYPT_TEMPLATE_OID_GROUP_ID = 9,
        XCN_CRYPT_KDF_OID_GROUP_ID = 10,
        XCN_CRYPT_LAST_OID_GROUP_ID = 10,
        XCN_CRYPT_FIRST_ALG_OID_GROUP_ID = 1,
        XCN_CRYPT_LAST_ALG_OID_GROUP_ID = 4,
        XCN_CRYPT_GROUP_ID_MASK = 0xffff,
        XCN_CRYPT_OID_PREFER_CNG_ALGID_FLAG = 0x40000000,
        XCN_CRYPT_OID_DISABLE_SEARCH_DS_FLAG = 0x80000000,
        XCN_CRYPT_OID_INFO_OID_GROUP_BIT_LEN_MASK = 0xfff0000,
        XCN_CRYPT_OID_INFO_OID_GROUP_BIT_LEN_SHIFT = 16,
        XCN_CRYPT_KEY_LENGTH_MASK = 0xfff0000
    } ObjectIdGroupId;
typedef
enum ObjectIdPublicKeyFlags
    {
        XCN_CRYPT_OID_INFO_PUBKEY_ANY = 0,
        XCN_CRYPT_OID_INFO_PUBKEY_SIGN_KEY_FLAG = 0x80000000,
        XCN_CRYPT_OID_INFO_PUBKEY_ENCRYPT_KEY_FLAG = 0x40000000
    } ObjectIdPublicKeyFlags;
typedef
enum AlgorithmFlags
    {
        AlgorithmFlagsNone = 0,
        AlgorithmFlagsWrap = 0x1
    } AlgorithmFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IObjectId;
    typedef struct IObjectIdVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IObjectId * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IObjectId * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IObjectId * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IObjectId * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IObjectId * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IObjectId * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IObjectId * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *InitializeFromName )(
            __RPC__in IObjectId * This,
                       CERTENROLL_OBJECTID Name);
                       HRESULT ( STDMETHODCALLTYPE *InitializeFromValue )(
            __RPC__in IObjectId * This,
                       __RPC__in BSTR strValue);
                       HRESULT ( STDMETHODCALLTYPE *InitializeFromAlgorithmName )(
            __RPC__in IObjectId * This,
                       ObjectIdGroupId GroupId,
                       ObjectIdPublicKeyFlags KeyFlags,
                       AlgorithmFlags AlgFlags,
                       __RPC__in BSTR strAlgorithmName);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IObjectId * This,
                                __RPC__out CERTENROLL_OBJECTID *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IObjectId * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IObjectId * This,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IObjectId * This,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetAlgorithmName )(
            __RPC__in IObjectId * This,
                       ObjectIdGroupId GroupId,
                       ObjectIdPublicKeyFlags KeyFlags,
                                __RPC__deref_out_opt BSTR *pstrAlgorithmName);
        END_INTERFACE
    } IObjectIdVtbl;
    interface IObjectId
    {
        CONST_VTBL struct IObjectIdVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromName(This,Name) )
    ( (This)->lpVtbl -> InitializeFromValue(This,strValue) )
    ( (This)->lpVtbl -> InitializeFromAlgorithmName(This,GroupId,KeyFlags,AlgFlags,strAlgorithmName) )
    ( (This)->lpVtbl -> get_Name(This,pValue) )
    ( (This)->lpVtbl -> get_FriendlyName(This,pValue) )
    ( (This)->lpVtbl -> put_FriendlyName(This,Value) )
    ( (This)->lpVtbl -> get_Value(This,pValue) )
    ( (This)->lpVtbl -> GetAlgorithmName(This,GroupId,KeyFlags,pstrAlgorithmName) )
EXTERN_C const IID IID_IObjectIds;
    typedef struct IObjectIdsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IObjectIds * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IObjectIds * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IObjectIds * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IObjectIds * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IObjectIds * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IObjectIds * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IObjectIds * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in IObjectIds * This,
                       LONG Index,
                                __RPC__deref_out_opt IObjectId **pVal);
                                                HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IObjectIds * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IObjectIds * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                                       HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IObjectIds * This,
                       __RPC__in_opt IObjectId *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IObjectIds * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IObjectIds * This);
        HRESULT ( STDMETHODCALLTYPE *AddRange )(
            __RPC__in IObjectIds * This,
                       __RPC__in_opt IObjectIds *pValue);
        END_INTERFACE
    } IObjectIdsVtbl;
    interface IObjectIds
    {
        CONST_VTBL struct IObjectIdsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> AddRange(This,pValue) )
EXTERN_C const IID IID_IBinaryConverter;
    typedef struct IBinaryConverterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBinaryConverter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBinaryConverter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBinaryConverter * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IBinaryConverter * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IBinaryConverter * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IBinaryConverter * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IBinaryConverter * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *StringToString )(
            __RPC__in IBinaryConverter * This,
                       __RPC__in BSTR strEncodedIn,
                       EncodingType EncodingIn,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pstrEncoded);
        HRESULT ( STDMETHODCALLTYPE *VariantByteArrayToString )(
            __RPC__in IBinaryConverter * This,
                       __RPC__in VARIANT *pvarByteArray,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pstrEncoded);
        HRESULT ( STDMETHODCALLTYPE *StringToVariantByteArray )(
            __RPC__in IBinaryConverter * This,
                       __RPC__in BSTR strEncoded,
                                     EncodingType Encoding,
                                __RPC__out VARIANT *pvarByteArray);
        END_INTERFACE
    } IBinaryConverterVtbl;
    interface IBinaryConverter
    {
        CONST_VTBL struct IBinaryConverterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StringToString(This,strEncodedIn,EncodingIn,Encoding,pstrEncoded) )
    ( (This)->lpVtbl -> VariantByteArrayToString(This,pvarByteArray,Encoding,pstrEncoded) )
    ( (This)->lpVtbl -> StringToVariantByteArray(This,strEncoded,Encoding,pvarByteArray) )
EXTERN_C const IID IID_IBinaryConverter2;
    typedef struct IBinaryConverter2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBinaryConverter2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBinaryConverter2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBinaryConverter2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IBinaryConverter2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IBinaryConverter2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IBinaryConverter2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IBinaryConverter2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *StringToString )(
            __RPC__in IBinaryConverter2 * This,
                       __RPC__in BSTR strEncodedIn,
                       EncodingType EncodingIn,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pstrEncoded);
        HRESULT ( STDMETHODCALLTYPE *VariantByteArrayToString )(
            __RPC__in IBinaryConverter2 * This,
                       __RPC__in VARIANT *pvarByteArray,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pstrEncoded);
        HRESULT ( STDMETHODCALLTYPE *StringToVariantByteArray )(
            __RPC__in IBinaryConverter2 * This,
                       __RPC__in BSTR strEncoded,
                                     EncodingType Encoding,
                                __RPC__out VARIANT *pvarByteArray);
        HRESULT ( STDMETHODCALLTYPE *StringArrayToVariantArray )(
            __RPC__in IBinaryConverter2 * This,
                       __RPC__in VARIANT *pvarStringArray,
                                __RPC__out VARIANT *pvarVariantArray);
        HRESULT ( STDMETHODCALLTYPE *VariantArrayToStringArray )(
            __RPC__in IBinaryConverter2 * This,
                       __RPC__in VARIANT *pvarVariantArray,
                                __RPC__out VARIANT *pvarStringArray);
        END_INTERFACE
    } IBinaryConverter2Vtbl;
    interface IBinaryConverter2
    {
        CONST_VTBL struct IBinaryConverter2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StringToString(This,strEncodedIn,EncodingIn,Encoding,pstrEncoded) )
    ( (This)->lpVtbl -> VariantByteArrayToString(This,pvarByteArray,Encoding,pstrEncoded) )
    ( (This)->lpVtbl -> StringToVariantByteArray(This,strEncoded,Encoding,pvarByteArray) )
    ( (This)->lpVtbl -> StringArrayToVariantArray(This,pvarStringArray,pvarVariantArray) )
    ( (This)->lpVtbl -> VariantArrayToStringArray(This,pvarVariantArray,pvarStringArray) )
typedef
enum X500NameFlags
    {
        XCN_CERT_NAME_STR_NONE = 0,
        XCN_CERT_SIMPLE_NAME_STR = 1,
        XCN_CERT_OID_NAME_STR = 2,
        XCN_CERT_X500_NAME_STR = 3,
        XCN_CERT_XML_NAME_STR = 4,
        XCN_CERT_NAME_STR_SEMICOLON_FLAG = 0x40000000,
        XCN_CERT_NAME_STR_NO_PLUS_FLAG = 0x20000000,
        XCN_CERT_NAME_STR_NO_QUOTING_FLAG = 0x10000000,
        XCN_CERT_NAME_STR_CRLF_FLAG = 0x8000000,
        XCN_CERT_NAME_STR_COMMA_FLAG = 0x4000000,
        XCN_CERT_NAME_STR_REVERSE_FLAG = 0x2000000,
        XCN_CERT_NAME_STR_FORWARD_FLAG = 0x1000000,
        XCN_CERT_NAME_STR_AMBIGUOUS_SEPARATOR_FLAGS = ( ( 0x40000000 | 0x8000000 ) | 0x4000000 ) ,
        XCN_CERT_NAME_STR_DISABLE_IE4_UTF8_FLAG = 0x10000,
        XCN_CERT_NAME_STR_ENABLE_T61_UNICODE_FLAG = 0x20000,
        XCN_CERT_NAME_STR_ENABLE_UTF8_UNICODE_FLAG = 0x40000,
        XCN_CERT_NAME_STR_FORCE_UTF8_DIR_STR_FLAG = 0x80000,
        XCN_CERT_NAME_STR_DISABLE_UTF8_DIR_STR_FLAG = 0x100000,
        XCN_CERT_NAME_STR_ENABLE_PUNYCODE_FLAG = 0x200000,
        XCN_CERT_NAME_STR_DS_ESCAPED = 0x800000
    } X500NameFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IX500DistinguishedName;
    typedef struct IX500DistinguishedNameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX500DistinguishedName * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX500DistinguishedName * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX500DistinguishedName * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX500DistinguishedName * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX500DistinguishedName * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX500DistinguishedName * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX500DistinguishedName * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Decode )(
            __RPC__in IX500DistinguishedName * This,
                       __RPC__in BSTR strEncodedName,
                                     EncodingType Encoding,
                                     X500NameFlags NameFlags);
                       HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in IX500DistinguishedName * This,
                       __RPC__in BSTR strName,
                                     X500NameFlags NameFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IX500DistinguishedName * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EncodedName )(
            __RPC__in IX500DistinguishedName * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX500DistinguishedNameVtbl;
    interface IX500DistinguishedName
    {
        CONST_VTBL struct IX500DistinguishedNameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Decode(This,strEncodedName,Encoding,NameFlags) )
    ( (This)->lpVtbl -> Encode(This,strName,NameFlags) )
    ( (This)->lpVtbl -> get_Name(This,pValue) )
    ( (This)->lpVtbl -> get_EncodedName(This,Encoding,pValue) )
typedef
enum X509CertificateEnrollmentContext
    {
        ContextNone = 0,
        ContextUser = 0x1,
        ContextMachine = 0x2,
        ContextAdministratorForceMachine = 0x3
    } X509CertificateEnrollmentContext;
typedef
enum EnrollmentEnrollStatus
    {
        Enrolled = 0x1,
        EnrollPended = 0x2,
        EnrollUIDeferredEnrollmentRequired = 0x4,
        EnrollError = 0x10,
        EnrollUnknown = 0x20,
        EnrollSkipped = 0x40,
        EnrollDenied = 0x100
    } EnrollmentEnrollStatus;
typedef
enum EnrollmentSelectionStatus
    {
        SelectedNo = 0,
        SelectedYes = 1
    } EnrollmentSelectionStatus;
typedef
enum EnrollmentDisplayStatus
    {
        DisplayNo = 0,
        DisplayYes = 1
    } EnrollmentDisplayStatus;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IX509EnrollmentStatus;
    typedef struct IX509EnrollmentStatusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509EnrollmentStatus * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509EnrollmentStatus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509EnrollmentStatus * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509EnrollmentStatus * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509EnrollmentStatus * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509EnrollmentStatus * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509EnrollmentStatus * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *AppendText )(
            __RPC__in IX509EnrollmentStatus * This,
                       __RPC__in BSTR strText);
                        HRESULT ( STDMETHODCALLTYPE *get_Text )(
            __RPC__in IX509EnrollmentStatus * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Text )(
            __RPC__in IX509EnrollmentStatus * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_Selected )(
            __RPC__in IX509EnrollmentStatus * This,
                                __RPC__out EnrollmentSelectionStatus *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Selected )(
            __RPC__in IX509EnrollmentStatus * This,
                       EnrollmentSelectionStatus Value);
                        HRESULT ( STDMETHODCALLTYPE *get_Display )(
            __RPC__in IX509EnrollmentStatus * This,
                                __RPC__out EnrollmentDisplayStatus *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Display )(
            __RPC__in IX509EnrollmentStatus * This,
                       EnrollmentDisplayStatus Value);
                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IX509EnrollmentStatus * This,
                                __RPC__out EnrollmentEnrollStatus *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Status )(
            __RPC__in IX509EnrollmentStatus * This,
                       EnrollmentEnrollStatus Value);
                        HRESULT ( STDMETHODCALLTYPE *get_Error )(
            __RPC__in IX509EnrollmentStatus * This,
                                __RPC__out HRESULT *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Error )(
            __RPC__in IX509EnrollmentStatus * This,
                       HRESULT Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ErrorText )(
            __RPC__in IX509EnrollmentStatus * This,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509EnrollmentStatusVtbl;
    interface IX509EnrollmentStatus
    {
        CONST_VTBL struct IX509EnrollmentStatusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> AppendText(This,strText) )
    ( (This)->lpVtbl -> get_Text(This,pValue) )
    ( (This)->lpVtbl -> put_Text(This,Value) )
    ( (This)->lpVtbl -> get_Selected(This,pValue) )
    ( (This)->lpVtbl -> put_Selected(This,Value) )
    ( (This)->lpVtbl -> get_Display(This,pValue) )
    ( (This)->lpVtbl -> put_Display(This,Value) )
    ( (This)->lpVtbl -> get_Status(This,pValue) )
    ( (This)->lpVtbl -> put_Status(This,Value) )
    ( (This)->lpVtbl -> get_Error(This,pValue) )
    ( (This)->lpVtbl -> put_Error(This,Value) )
    ( (This)->lpVtbl -> get_ErrorText(This,pValue) )
typedef
enum X509ProviderType
    {
        XCN_PROV_NONE = 0,
        XCN_PROV_RSA_FULL = 1,
        XCN_PROV_RSA_SIG = 2,
        XCN_PROV_DSS = 3,
        XCN_PROV_FORTEZZA = 4,
        XCN_PROV_MS_EXCHANGE = 5,
        XCN_PROV_SSL = 6,
        XCN_PROV_RSA_SCHANNEL = 12,
        XCN_PROV_DSS_DH = 13,
        XCN_PROV_EC_ECDSA_SIG = 14,
        XCN_PROV_EC_ECNRA_SIG = 15,
        XCN_PROV_EC_ECDSA_FULL = 16,
        XCN_PROV_EC_ECNRA_FULL = 17,
        XCN_PROV_DH_SCHANNEL = 18,
        XCN_PROV_SPYRUS_LYNKS = 20,
        XCN_PROV_RNG = 21,
        XCN_PROV_INTEL_SEC = 22,
        XCN_PROV_REPLACE_OWF = 23,
        XCN_PROV_RSA_AES = 24
    } X509ProviderType;
typedef
enum AlgorithmType
    {
        XCN_BCRYPT_UNKNOWN_INTERFACE = 0,
        XCN_BCRYPT_CIPHER_INTERFACE = 0x1,
        XCN_BCRYPT_HASH_INTERFACE = 0x2,
        XCN_BCRYPT_ASYMMETRIC_ENCRYPTION_INTERFACE = 0x3,
        XCN_BCRYPT_SIGNATURE_INTERFACE = 0x5,
        XCN_BCRYPT_SECRET_AGREEMENT_INTERFACE = 0x4,
        XCN_BCRYPT_RNG_INTERFACE = 0x6,
        XCN_BCRYPT_KEY_DERIVATION_INTERFACE = 0x7
    } AlgorithmType;
typedef
enum AlgorithmOperationFlags
    {
        XCN_NCRYPT_NO_OPERATION = 0,
        XCN_NCRYPT_CIPHER_OPERATION = 0x1,
        XCN_NCRYPT_HASH_OPERATION = 0x2,
        XCN_NCRYPT_ASYMMETRIC_ENCRYPTION_OPERATION = 0x4,
        XCN_NCRYPT_SECRET_AGREEMENT_OPERATION = 0x8,
        XCN_NCRYPT_SIGNATURE_OPERATION = 0x10,
        XCN_NCRYPT_RNG_OPERATION = 0x20,
        XCN_NCRYPT_KEY_DERIVATION_OPERATION = 0x40,
        XCN_NCRYPT_ANY_ASYMMETRIC_OPERATION = ( ( 0x4 | 0x8 ) | 0x10 ) ,
        XCN_NCRYPT_PREFER_SIGNATURE_ONLY_OPERATION = 0x200000,
        XCN_NCRYPT_PREFER_NON_SIGNATURE_OPERATION = 0x400000,
        XCN_NCRYPT_EXACT_MATCH_OPERATION = 0x800000,
        XCN_NCRYPT_PREFERENCE_MASK_OPERATION = 0xe00000
    } AlgorithmOperationFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_ICspAlgorithm;
    typedef struct ICspAlgorithmVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICspAlgorithm * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICspAlgorithm * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICspAlgorithm * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICspAlgorithm * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICspAlgorithm * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICspAlgorithm * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICspAlgorithm * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *GetAlgorithmOid )(
            __RPC__in ICspAlgorithm * This,
                       LONG Length,
                       AlgorithmFlags AlgFlags,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_DefaultLength )(
            __RPC__in ICspAlgorithm * This,
                                __RPC__out LONG *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_IncrementLength )(
            __RPC__in ICspAlgorithm * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_LongName )(
            __RPC__in ICspAlgorithm * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Valid )(
            __RPC__in ICspAlgorithm * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_MaxLength )(
            __RPC__in ICspAlgorithm * This,
                                __RPC__out LONG *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_MinLength )(
            __RPC__in ICspAlgorithm * This,
                                __RPC__out LONG *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ICspAlgorithm * This,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in ICspAlgorithm * This,
                                __RPC__out AlgorithmType *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_Operations )(
            __RPC__in ICspAlgorithm * This,
                                __RPC__out AlgorithmOperationFlags *pValue);
        END_INTERFACE
    } ICspAlgorithmVtbl;
    interface ICspAlgorithm
    {
        CONST_VTBL struct ICspAlgorithmVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetAlgorithmOid(This,Length,AlgFlags,ppValue) )
    ( (This)->lpVtbl -> get_DefaultLength(This,pValue) )
    ( (This)->lpVtbl -> get_IncrementLength(This,pValue) )
    ( (This)->lpVtbl -> get_LongName(This,pValue) )
    ( (This)->lpVtbl -> get_Valid(This,pValue) )
    ( (This)->lpVtbl -> get_MaxLength(This,pValue) )
    ( (This)->lpVtbl -> get_MinLength(This,pValue) )
    ( (This)->lpVtbl -> get_Name(This,pValue) )
    ( (This)->lpVtbl -> get_Type(This,pValue) )
    ( (This)->lpVtbl -> get_Operations(This,pValue) )
EXTERN_C const IID IID_ICspAlgorithms;
    typedef struct ICspAlgorithmsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICspAlgorithms * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICspAlgorithms * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICspAlgorithms * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICspAlgorithms * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICspAlgorithms * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICspAlgorithms * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICspAlgorithms * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in ICspAlgorithms * This,
                       LONG Index,
                                __RPC__deref_out_opt ICspAlgorithm **pVal);
                                                HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ICspAlgorithms * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ICspAlgorithms * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                                       HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ICspAlgorithms * This,
                       __RPC__in_opt ICspAlgorithm *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ICspAlgorithms * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ICspAlgorithms * This);
                                HRESULT ( STDMETHODCALLTYPE *get_ItemByName )(
            __RPC__in ICspAlgorithms * This,
                       __RPC__in BSTR strName,
                                __RPC__deref_out_opt ICspAlgorithm **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_IndexByObjectId )(
            __RPC__in ICspAlgorithms * This,
                       __RPC__in_opt IObjectId *pObjectId,
                                __RPC__out LONG *pIndex);
        END_INTERFACE
    } ICspAlgorithmsVtbl;
    interface ICspAlgorithms
    {
        CONST_VTBL struct ICspAlgorithmsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> get_ItemByName(This,strName,ppValue) )
    ( (This)->lpVtbl -> get_IndexByObjectId(This,pObjectId,pIndex) )
typedef
enum X509KeySpec
    {
        XCN_AT_NONE = 0,
        XCN_AT_KEYEXCHANGE = 1,
        XCN_AT_SIGNATURE = 2
    } X509KeySpec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_ICspInformation;
    typedef struct ICspInformationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICspInformation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICspInformation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICspInformation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICspInformation * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICspInformation * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICspInformation * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICspInformation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *InitializeFromName )(
            __RPC__in ICspInformation * This,
                       __RPC__in BSTR strName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromType )(
            __RPC__in ICspInformation * This,
                       X509ProviderType Type,
                       __RPC__in_opt IObjectId *pAlgorithm,
                       VARIANT_BOOL MachineContext);
                                HRESULT ( STDMETHODCALLTYPE *get_CspAlgorithms )(
            __RPC__in ICspInformation * This,
                                __RPC__deref_out_opt ICspAlgorithms **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_HasHardwareRandomNumberGenerator )(
            __RPC__in ICspInformation * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_IsHardwareDevice )(
            __RPC__in ICspInformation * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_IsRemovable )(
            __RPC__in ICspInformation * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_IsSoftwareDevice )(
            __RPC__in ICspInformation * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Valid )(
            __RPC__in ICspInformation * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_MaxKeyContainerNameLength )(
            __RPC__in ICspInformation * This,
                                __RPC__out LONG *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ICspInformation * This,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in ICspInformation * This,
                                __RPC__out X509ProviderType *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in ICspInformation * This,
                                __RPC__out LONG *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_KeySpec )(
            __RPC__in ICspInformation * This,
                                __RPC__out X509KeySpec *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_IsSmartCard )(
            __RPC__in ICspInformation * This,
                                __RPC__out VARIANT_BOOL *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultSecurityDescriptor )(
            __RPC__in ICspInformation * This,
                       VARIANT_BOOL MachineContext,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_LegacyCsp )(
            __RPC__in ICspInformation * This,
                                __RPC__out VARIANT_BOOL *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetCspStatusFromOperations )(
            __RPC__in ICspInformation * This,
                       __RPC__in_opt IObjectId *pAlgorithm,
                       AlgorithmOperationFlags Operations,
                                __RPC__deref_out_opt ICspStatus **ppValue);
        END_INTERFACE
    } ICspInformationVtbl;
    interface ICspInformation
    {
        CONST_VTBL struct ICspInformationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromName(This,strName) )
    ( (This)->lpVtbl -> InitializeFromType(This,Type,pAlgorithm,MachineContext) )
    ( (This)->lpVtbl -> get_CspAlgorithms(This,ppValue) )
    ( (This)->lpVtbl -> get_HasHardwareRandomNumberGenerator(This,pValue) )
    ( (This)->lpVtbl -> get_IsHardwareDevice(This,pValue) )
    ( (This)->lpVtbl -> get_IsRemovable(This,pValue) )
    ( (This)->lpVtbl -> get_IsSoftwareDevice(This,pValue) )
    ( (This)->lpVtbl -> get_Valid(This,pValue) )
    ( (This)->lpVtbl -> get_MaxKeyContainerNameLength(This,pValue) )
    ( (This)->lpVtbl -> get_Name(This,pValue) )
    ( (This)->lpVtbl -> get_Type(This,pValue) )
    ( (This)->lpVtbl -> get_Version(This,pValue) )
    ( (This)->lpVtbl -> get_KeySpec(This,pValue) )
    ( (This)->lpVtbl -> get_IsSmartCard(This,pValue) )
    ( (This)->lpVtbl -> GetDefaultSecurityDescriptor(This,MachineContext,pValue) )
    ( (This)->lpVtbl -> get_LegacyCsp(This,pValue) )
    ( (This)->lpVtbl -> GetCspStatusFromOperations(This,pAlgorithm,Operations,ppValue) )
EXTERN_C const IID IID_ICspInformations;
    typedef struct ICspInformationsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICspInformations * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICspInformations * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICspInformations * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICspInformations * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICspInformations * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICspInformations * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICspInformations * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in ICspInformations * This,
                       LONG Index,
                                __RPC__deref_out_opt ICspInformation **pVal);
                                                HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ICspInformations * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ICspInformations * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                                       HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ICspInformations * This,
                       __RPC__in_opt ICspInformation *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ICspInformations * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ICspInformations * This);
                       HRESULT ( STDMETHODCALLTYPE *AddAvailableCsps )(
            __RPC__in ICspInformations * This);
                                HRESULT ( STDMETHODCALLTYPE *get_ItemByName )(
            __RPC__in ICspInformations * This,
                       __RPC__in BSTR strName,
                                __RPC__deref_out_opt ICspInformation **ppCspInformation);
                       HRESULT ( STDMETHODCALLTYPE *GetCspStatusFromProviderName )(
            __RPC__in ICspInformations * This,
                       __RPC__in BSTR strProviderName,
                       X509KeySpec LegacyKeySpec,
                                __RPC__deref_out_opt ICspStatus **ppValue);
                       HRESULT ( STDMETHODCALLTYPE *GetCspStatusesFromOperations )(
            __RPC__in ICspInformations * This,
                       AlgorithmOperationFlags Operations,
                       __RPC__in_opt ICspInformation *pCspInformation,
                                __RPC__deref_out_opt ICspStatuses **ppValue);
        HRESULT ( STDMETHODCALLTYPE *GetEncryptionCspAlgorithms )(
            __RPC__in ICspInformations * This,
                       __RPC__in_opt ICspInformation *pCspInformation,
                                __RPC__deref_out_opt ICspAlgorithms **ppValue);
        HRESULT ( STDMETHODCALLTYPE *GetHashAlgorithms )(
            __RPC__in ICspInformations * This,
                       __RPC__in_opt ICspInformation *pCspInformation,
                                __RPC__deref_out_opt IObjectIds **ppValue);
        END_INTERFACE
    } ICspInformationsVtbl;
    interface ICspInformations
    {
        CONST_VTBL struct ICspInformationsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> AddAvailableCsps(This) )
    ( (This)->lpVtbl -> get_ItemByName(This,strName,ppCspInformation) )
    ( (This)->lpVtbl -> GetCspStatusFromProviderName(This,strProviderName,LegacyKeySpec,ppValue) )
    ( (This)->lpVtbl -> GetCspStatusesFromOperations(This,Operations,pCspInformation,ppValue) )
    ( (This)->lpVtbl -> GetEncryptionCspAlgorithms(This,pCspInformation,ppValue) )
    ( (This)->lpVtbl -> GetHashAlgorithms(This,pCspInformation,ppValue) )
EXTERN_C const IID IID_ICspStatus;
    typedef struct ICspStatusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICspStatus * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICspStatus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICspStatus * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICspStatus * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICspStatus * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICspStatus * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICspStatus * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICspStatus * This,
                       __RPC__in_opt ICspInformation *pCsp,
                       __RPC__in_opt ICspAlgorithm *pAlgorithm);
                        HRESULT ( STDMETHODCALLTYPE *get_Ordinal )(
            __RPC__in ICspStatus * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Ordinal )(
            __RPC__in ICspStatus * This,
                       LONG Value);
                                HRESULT ( STDMETHODCALLTYPE *get_CspAlgorithm )(
            __RPC__in ICspStatus * This,
                                __RPC__deref_out_opt ICspAlgorithm **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_CspInformation )(
            __RPC__in ICspStatus * This,
                                __RPC__deref_out_opt ICspInformation **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EnrollmentStatus )(
            __RPC__in ICspStatus * This,
                                __RPC__deref_out_opt IX509EnrollmentStatus **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in ICspStatus * This,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } ICspStatusVtbl;
    interface ICspStatus
    {
        CONST_VTBL struct ICspStatusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pCsp,pAlgorithm) )
    ( (This)->lpVtbl -> get_Ordinal(This,pValue) )
    ( (This)->lpVtbl -> put_Ordinal(This,Value) )
    ( (This)->lpVtbl -> get_CspAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> get_CspInformation(This,ppValue) )
    ( (This)->lpVtbl -> get_EnrollmentStatus(This,ppValue) )
    ( (This)->lpVtbl -> get_DisplayName(This,pValue) )
EXTERN_C const IID IID_ICspStatuses;
    typedef struct ICspStatusesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICspStatuses * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICspStatuses * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICspStatuses * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICspStatuses * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICspStatuses * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICspStatuses * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICspStatuses * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in ICspStatuses * This,
                       LONG Index,
                                __RPC__deref_out_opt ICspStatus **pVal);
                                                HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ICspStatuses * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ICspStatuses * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                                       HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ICspStatuses * This,
                       __RPC__in_opt ICspStatus *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ICspStatuses * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ICspStatuses * This);
                                            HRESULT ( STDMETHODCALLTYPE *get_ItemByName )(
            __RPC__in ICspStatuses * This,
                       __RPC__in BSTR strCspName,
                       __RPC__in BSTR strAlgorithmName,
                                __RPC__deref_out_opt ICspStatus **ppValue);
                                    HRESULT ( STDMETHODCALLTYPE *get_ItemByOrdinal )(
            __RPC__in ICspStatuses * This,
                       LONG Ordinal,
                                __RPC__deref_out_opt ICspStatus **ppValue);
                                    HRESULT ( STDMETHODCALLTYPE *get_ItemByOperations )(
            __RPC__in ICspStatuses * This,
                       __RPC__in BSTR strCspName,
                       __RPC__in BSTR strAlgorithmName,
                       AlgorithmOperationFlags Operations,
                                __RPC__deref_out_opt ICspStatus **ppValue);
                                    HRESULT ( STDMETHODCALLTYPE *get_ItemByProvider )(
            __RPC__in ICspStatuses * This,
                       __RPC__in_opt ICspStatus *pCspStatus,
                                __RPC__deref_out_opt ICspStatus **ppValue);
        END_INTERFACE
    } ICspStatusesVtbl;
    interface ICspStatuses
    {
        CONST_VTBL struct ICspStatusesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> get_ItemByName(This,strCspName,strAlgorithmName,ppValue) )
    ( (This)->lpVtbl -> get_ItemByOrdinal(This,Ordinal,ppValue) )
    ( (This)->lpVtbl -> get_ItemByOperations(This,strCspName,strAlgorithmName,Operations,ppValue) )
    ( (This)->lpVtbl -> get_ItemByProvider(This,pCspStatus,ppValue) )
typedef
enum KeyIdentifierHashAlgorithm
    {
        SKIHashDefault = 0,
        SKIHashSha1 = 1,
        SKIHashCapiSha1 = 2,
        SKIHashSha256 = 3,
        SKIHashHPKP = 5
    } KeyIdentifierHashAlgorithm;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0012_v0_0_s_ifspec;
EXTERN_C const IID IID_IX509PublicKey;
    typedef struct IX509PublicKeyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509PublicKey * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509PublicKey * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509PublicKey * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509PublicKey * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509PublicKey * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509PublicKey * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509PublicKey * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509PublicKey * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       __RPC__in BSTR strEncodedKey,
                       __RPC__in BSTR strEncodedParameters,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromEncodedPublicKeyInfo )(
            __RPC__in IX509PublicKey * This,
                       __RPC__in BSTR strEncodedPublicKeyInfo,
                                     EncodingType Encoding);
                        HRESULT ( STDMETHODCALLTYPE *get_Algorithm )(
            __RPC__in IX509PublicKey * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in IX509PublicKey * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EncodedKey )(
            __RPC__in IX509PublicKey * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EncodedParameters )(
            __RPC__in IX509PublicKey * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *ComputeKeyIdentifier )(
            __RPC__in IX509PublicKey * This,
                       KeyIdentifierHashAlgorithm Algorithm,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509PublicKeyVtbl;
    interface IX509PublicKey
    {
        CONST_VTBL struct IX509PublicKeyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,strEncodedKey,strEncodedParameters,Encoding) )
    ( (This)->lpVtbl -> InitializeFromEncodedPublicKeyInfo(This,strEncodedPublicKeyInfo,Encoding) )
    ( (This)->lpVtbl -> get_Algorithm(This,ppValue) )
    ( (This)->lpVtbl -> get_Length(This,pValue) )
    ( (This)->lpVtbl -> get_EncodedKey(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_EncodedParameters(This,Encoding,pValue) )
    ( (This)->lpVtbl -> ComputeKeyIdentifier(This,Algorithm,Encoding,pValue) )
typedef
enum X509PrivateKeyExportFlags
    {
        XCN_NCRYPT_ALLOW_EXPORT_NONE = 0,
        XCN_NCRYPT_ALLOW_EXPORT_FLAG = 0x1,
        XCN_NCRYPT_ALLOW_PLAINTEXT_EXPORT_FLAG = 0x2,
        XCN_NCRYPT_ALLOW_ARCHIVING_FLAG = 0x4,
        XCN_NCRYPT_ALLOW_PLAINTEXT_ARCHIVING_FLAG = 0x8
    } X509PrivateKeyExportFlags;
typedef
enum X509PrivateKeyUsageFlags
    {
        XCN_NCRYPT_ALLOW_USAGES_NONE = 0,
        XCN_NCRYPT_ALLOW_DECRYPT_FLAG = 0x1,
        XCN_NCRYPT_ALLOW_SIGNING_FLAG = 0x2,
        XCN_NCRYPT_ALLOW_KEY_AGREEMENT_FLAG = 0x4,
        XCN_NCRYPT_ALLOW_KEY_IMPORT_FLAG = 0x8,
        XCN_NCRYPT_ALLOW_ALL_USAGES = 0xffffff
    } X509PrivateKeyUsageFlags;
typedef
enum X509PrivateKeyProtection
    {
        XCN_NCRYPT_UI_NO_PROTECTION_FLAG = 0,
        XCN_NCRYPT_UI_PROTECT_KEY_FLAG = 0x1,
        XCN_NCRYPT_UI_FORCE_HIGH_PROTECTION_FLAG = 0x2,
        XCN_NCRYPT_UI_FINGERPRINT_PROTECTION_FLAG = 0x4,
        XCN_NCRYPT_UI_APPCONTAINER_ACCESS_MEDIUM_FLAG = 0x8
    } X509PrivateKeyProtection;
typedef
enum X509PrivateKeyVerify
    {
        VerifyNone = 0,
        VerifySilent = 1,
        VerifySmartCardNone = 2,
        VerifySmartCardSilent = 3,
        VerifyAllowUI = 4
    } X509PrivateKeyVerify;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_IX509PrivateKey;
    typedef struct IX509PrivateKeyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509PrivateKey * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509PrivateKey * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509PrivateKey * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509PrivateKey * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509PrivateKey * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509PrivateKey * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509PrivateKey * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IX509PrivateKey * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IX509PrivateKey * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IX509PrivateKey * This);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IX509PrivateKey * This);
        HRESULT ( STDMETHODCALLTYPE *Verify )(
            __RPC__in IX509PrivateKey * This,
                       X509PrivateKeyVerify VerifyType);
        HRESULT ( STDMETHODCALLTYPE *Import )(
            __RPC__in IX509PrivateKey * This,
                       __RPC__in BSTR strExportType,
                       __RPC__in BSTR strEncodedKey,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *Export )(
            __RPC__in IX509PrivateKey * This,
                       __RPC__in BSTR strExportType,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pstrEncodedKey);
        HRESULT ( STDMETHODCALLTYPE *ExportPublicKey )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__deref_out_opt IX509PublicKey **ppPublicKey);
                                HRESULT ( STDMETHODCALLTYPE *get_ContainerName )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ContainerName )(
            __RPC__in IX509PrivateKey * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ContainerNamePrefix )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ContainerNamePrefix )(
            __RPC__in IX509PrivateKey * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ReaderName )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ReaderName )(
            __RPC__in IX509PrivateKey * This,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_CspInformations )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__deref_out_opt ICspInformations **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_CspInformations )(
            __RPC__in IX509PrivateKey * This,
                       __RPC__in_opt ICspInformations *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_CspStatus )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__deref_out_opt ICspStatus **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_CspStatus )(
            __RPC__in IX509PrivateKey * This,
                       __RPC__in_opt ICspStatus *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_ProviderName )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ProviderName )(
            __RPC__in IX509PrivateKey * This,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_ProviderType )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__out X509ProviderType *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ProviderType )(
            __RPC__in IX509PrivateKey * This,
                       X509ProviderType Value);
                                HRESULT ( STDMETHODCALLTYPE *get_LegacyCsp )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_LegacyCsp )(
            __RPC__in IX509PrivateKey * This,
                       VARIANT_BOOL Value);
                                HRESULT ( STDMETHODCALLTYPE *get_Algorithm )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Algorithm )(
            __RPC__in IX509PrivateKey * This,
                       __RPC__in_opt IObjectId *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_KeySpec )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__out X509KeySpec *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_KeySpec )(
            __RPC__in IX509PrivateKey * This,
                       X509KeySpec Value);
                                HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__out LONG *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Length )(
            __RPC__in IX509PrivateKey * This,
                       LONG Value);
                                HRESULT ( STDMETHODCALLTYPE *get_ExportPolicy )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__out X509PrivateKeyExportFlags *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ExportPolicy )(
            __RPC__in IX509PrivateKey * This,
                       X509PrivateKeyExportFlags Value);
                                HRESULT ( STDMETHODCALLTYPE *get_KeyUsage )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__out X509PrivateKeyUsageFlags *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_KeyUsage )(
            __RPC__in IX509PrivateKey * This,
                       X509PrivateKeyUsageFlags Value);
                                HRESULT ( STDMETHODCALLTYPE *get_KeyProtection )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__out X509PrivateKeyProtection *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_KeyProtection )(
            __RPC__in IX509PrivateKey * This,
                       X509PrivateKeyProtection Value);
                                HRESULT ( STDMETHODCALLTYPE *get_MachineContext )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_MachineContext )(
            __RPC__in IX509PrivateKey * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SecurityDescriptor )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SecurityDescriptor )(
            __RPC__in IX509PrivateKey * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_Certificate )(
            __RPC__in IX509PrivateKey * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Certificate )(
            __RPC__in IX509PrivateKey * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_UniqueContainerName )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Opened )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_DefaultContainer )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_Existing )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Existing )(
            __RPC__in IX509PrivateKey * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509PrivateKey * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IX509PrivateKey * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )(
            __RPC__in IX509PrivateKey * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *put_Pin )(
            __RPC__in IX509PrivateKey * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IX509PrivateKey * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IX509PrivateKey * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IX509PrivateKey * This,
                       __RPC__in BSTR Value);
        END_INTERFACE
    } IX509PrivateKeyVtbl;
    interface IX509PrivateKey
    {
        CONST_VTBL struct IX509PrivateKeyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Open(This) )
    ( (This)->lpVtbl -> Create(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Verify(This,VerifyType) )
    ( (This)->lpVtbl -> Import(This,strExportType,strEncodedKey,Encoding) )
    ( (This)->lpVtbl -> Export(This,strExportType,Encoding,pstrEncodedKey) )
    ( (This)->lpVtbl -> ExportPublicKey(This,ppPublicKey) )
    ( (This)->lpVtbl -> get_ContainerName(This,pValue) )
    ( (This)->lpVtbl -> put_ContainerName(This,Value) )
    ( (This)->lpVtbl -> get_ContainerNamePrefix(This,pValue) )
    ( (This)->lpVtbl -> put_ContainerNamePrefix(This,Value) )
    ( (This)->lpVtbl -> get_ReaderName(This,pValue) )
    ( (This)->lpVtbl -> put_ReaderName(This,Value) )
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) )
    ( (This)->lpVtbl -> get_CspStatus(This,ppValue) )
    ( (This)->lpVtbl -> put_CspStatus(This,pValue) )
    ( (This)->lpVtbl -> get_ProviderName(This,pValue) )
    ( (This)->lpVtbl -> put_ProviderName(This,Value) )
    ( (This)->lpVtbl -> get_ProviderType(This,pValue) )
    ( (This)->lpVtbl -> put_ProviderType(This,Value) )
    ( (This)->lpVtbl -> get_LegacyCsp(This,pValue) )
    ( (This)->lpVtbl -> put_LegacyCsp(This,Value) )
    ( (This)->lpVtbl -> get_Algorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_Algorithm(This,pValue) )
    ( (This)->lpVtbl -> get_KeySpec(This,pValue) )
    ( (This)->lpVtbl -> put_KeySpec(This,Value) )
    ( (This)->lpVtbl -> get_Length(This,pValue) )
    ( (This)->lpVtbl -> put_Length(This,Value) )
    ( (This)->lpVtbl -> get_ExportPolicy(This,pValue) )
    ( (This)->lpVtbl -> put_ExportPolicy(This,Value) )
    ( (This)->lpVtbl -> get_KeyUsage(This,pValue) )
    ( (This)->lpVtbl -> put_KeyUsage(This,Value) )
    ( (This)->lpVtbl -> get_KeyProtection(This,pValue) )
    ( (This)->lpVtbl -> put_KeyProtection(This,Value) )
    ( (This)->lpVtbl -> get_MachineContext(This,pValue) )
    ( (This)->lpVtbl -> put_MachineContext(This,Value) )
    ( (This)->lpVtbl -> get_SecurityDescriptor(This,pValue) )
    ( (This)->lpVtbl -> put_SecurityDescriptor(This,Value) )
    ( (This)->lpVtbl -> get_Certificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_Certificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_UniqueContainerName(This,pValue) )
    ( (This)->lpVtbl -> get_Opened(This,pValue) )
    ( (This)->lpVtbl -> get_DefaultContainer(This,pValue) )
    ( (This)->lpVtbl -> get_Existing(This,pValue) )
    ( (This)->lpVtbl -> put_Existing(This,Value) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) )
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
    ( (This)->lpVtbl -> put_Pin(This,Value) )
    ( (This)->lpVtbl -> get_FriendlyName(This,pValue) )
    ( (This)->lpVtbl -> put_FriendlyName(This,Value) )
    ( (This)->lpVtbl -> get_Description(This,pValue) )
    ( (This)->lpVtbl -> put_Description(This,Value) )
typedef
enum X509HardwareKeyUsageFlags
    {
        XCN_NCRYPT_PCP_NONE = 0,
        XCN_NCRYPT_TPM12_PROVIDER = 0x10000,
        XCN_NCRYPT_PCP_SIGNATURE_KEY = 0x1,
        XCN_NCRYPT_PCP_ENCRYPTION_KEY = 0x2,
        XCN_NCRYPT_PCP_GENERIC_KEY = ( 0x1 | 0x2 ) ,
        XCN_NCRYPT_PCP_STORAGE_KEY = 0x4,
        XCN_NCRYPT_PCP_IDENTITY_KEY = 0x8
    } X509HardwareKeyUsageFlags;
typedef
enum X509KeyParametersExportType
    {
        XCN_CRYPT_OID_USE_CURVE_NONE = 0,
        XCN_CRYPT_OID_USE_CURVE_NAME_FOR_ENCODE_FLAG = 0x20000000,
        XCN_CRYPT_OID_USE_CURVE_PARAMETERS_FOR_ENCODE_FLAG = 0x10000000
    } X509KeyParametersExportType;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0014_v0_0_s_ifspec;
EXTERN_C const IID IID_IX509PrivateKey2;
    typedef struct IX509PrivateKey2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509PrivateKey2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509PrivateKey2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509PrivateKey2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509PrivateKey2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509PrivateKey2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IX509PrivateKey2 * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IX509PrivateKey2 * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IX509PrivateKey2 * This);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IX509PrivateKey2 * This);
        HRESULT ( STDMETHODCALLTYPE *Verify )(
            __RPC__in IX509PrivateKey2 * This,
                       X509PrivateKeyVerify VerifyType);
        HRESULT ( STDMETHODCALLTYPE *Import )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in BSTR strExportType,
                       __RPC__in BSTR strEncodedKey,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *Export )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in BSTR strExportType,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pstrEncodedKey);
        HRESULT ( STDMETHODCALLTYPE *ExportPublicKey )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__deref_out_opt IX509PublicKey **ppPublicKey);
                                HRESULT ( STDMETHODCALLTYPE *get_ContainerName )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ContainerName )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ContainerNamePrefix )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ContainerNamePrefix )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ReaderName )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ReaderName )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_CspInformations )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__deref_out_opt ICspInformations **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_CspInformations )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in_opt ICspInformations *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_CspStatus )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__deref_out_opt ICspStatus **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_CspStatus )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in_opt ICspStatus *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_ProviderName )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ProviderName )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_ProviderType )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__out X509ProviderType *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ProviderType )(
            __RPC__in IX509PrivateKey2 * This,
                       X509ProviderType Value);
                                HRESULT ( STDMETHODCALLTYPE *get_LegacyCsp )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_LegacyCsp )(
            __RPC__in IX509PrivateKey2 * This,
                       VARIANT_BOOL Value);
                                HRESULT ( STDMETHODCALLTYPE *get_Algorithm )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Algorithm )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in_opt IObjectId *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_KeySpec )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__out X509KeySpec *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_KeySpec )(
            __RPC__in IX509PrivateKey2 * This,
                       X509KeySpec Value);
                                HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__out LONG *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Length )(
            __RPC__in IX509PrivateKey2 * This,
                       LONG Value);
                                HRESULT ( STDMETHODCALLTYPE *get_ExportPolicy )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__out X509PrivateKeyExportFlags *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ExportPolicy )(
            __RPC__in IX509PrivateKey2 * This,
                       X509PrivateKeyExportFlags Value);
                                HRESULT ( STDMETHODCALLTYPE *get_KeyUsage )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__out X509PrivateKeyUsageFlags *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_KeyUsage )(
            __RPC__in IX509PrivateKey2 * This,
                       X509PrivateKeyUsageFlags Value);
                                HRESULT ( STDMETHODCALLTYPE *get_KeyProtection )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__out X509PrivateKeyProtection *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_KeyProtection )(
            __RPC__in IX509PrivateKey2 * This,
                       X509PrivateKeyProtection Value);
                                HRESULT ( STDMETHODCALLTYPE *get_MachineContext )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_MachineContext )(
            __RPC__in IX509PrivateKey2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SecurityDescriptor )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SecurityDescriptor )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_Certificate )(
            __RPC__in IX509PrivateKey2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Certificate )(
            __RPC__in IX509PrivateKey2 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_UniqueContainerName )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Opened )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_DefaultContainer )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_Existing )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Existing )(
            __RPC__in IX509PrivateKey2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509PrivateKey2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IX509PrivateKey2 * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *put_Pin )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_HardwareKeyUsage )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__out X509HardwareKeyUsageFlags *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_HardwareKeyUsage )(
            __RPC__in IX509PrivateKey2 * This,
                       X509HardwareKeyUsageFlags Value);
                        HRESULT ( STDMETHODCALLTYPE *get_AlternateStorageLocation )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_AlternateStorageLocation )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_AlgorithmName )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_AlgorithmName )(
            __RPC__in IX509PrivateKey2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_AlgorithmParameters )(
            __RPC__in IX509PrivateKey2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_AlgorithmParameters )(
            __RPC__in IX509PrivateKey2 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParametersExportType )(
            __RPC__in IX509PrivateKey2 * This,
                                __RPC__out X509KeyParametersExportType *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParametersExportType )(
            __RPC__in IX509PrivateKey2 * This,
                       X509KeyParametersExportType Value);
        END_INTERFACE
    } IX509PrivateKey2Vtbl;
    interface IX509PrivateKey2
    {
        CONST_VTBL struct IX509PrivateKey2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Open(This) )
    ( (This)->lpVtbl -> Create(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Verify(This,VerifyType) )
    ( (This)->lpVtbl -> Import(This,strExportType,strEncodedKey,Encoding) )
    ( (This)->lpVtbl -> Export(This,strExportType,Encoding,pstrEncodedKey) )
    ( (This)->lpVtbl -> ExportPublicKey(This,ppPublicKey) )
    ( (This)->lpVtbl -> get_ContainerName(This,pValue) )
    ( (This)->lpVtbl -> put_ContainerName(This,Value) )
    ( (This)->lpVtbl -> get_ContainerNamePrefix(This,pValue) )
    ( (This)->lpVtbl -> put_ContainerNamePrefix(This,Value) )
    ( (This)->lpVtbl -> get_ReaderName(This,pValue) )
    ( (This)->lpVtbl -> put_ReaderName(This,Value) )
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) )
    ( (This)->lpVtbl -> get_CspStatus(This,ppValue) )
    ( (This)->lpVtbl -> put_CspStatus(This,pValue) )
    ( (This)->lpVtbl -> get_ProviderName(This,pValue) )
    ( (This)->lpVtbl -> put_ProviderName(This,Value) )
    ( (This)->lpVtbl -> get_ProviderType(This,pValue) )
    ( (This)->lpVtbl -> put_ProviderType(This,Value) )
    ( (This)->lpVtbl -> get_LegacyCsp(This,pValue) )
    ( (This)->lpVtbl -> put_LegacyCsp(This,Value) )
    ( (This)->lpVtbl -> get_Algorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_Algorithm(This,pValue) )
    ( (This)->lpVtbl -> get_KeySpec(This,pValue) )
    ( (This)->lpVtbl -> put_KeySpec(This,Value) )
    ( (This)->lpVtbl -> get_Length(This,pValue) )
    ( (This)->lpVtbl -> put_Length(This,Value) )
    ( (This)->lpVtbl -> get_ExportPolicy(This,pValue) )
    ( (This)->lpVtbl -> put_ExportPolicy(This,Value) )
    ( (This)->lpVtbl -> get_KeyUsage(This,pValue) )
    ( (This)->lpVtbl -> put_KeyUsage(This,Value) )
    ( (This)->lpVtbl -> get_KeyProtection(This,pValue) )
    ( (This)->lpVtbl -> put_KeyProtection(This,Value) )
    ( (This)->lpVtbl -> get_MachineContext(This,pValue) )
    ( (This)->lpVtbl -> put_MachineContext(This,Value) )
    ( (This)->lpVtbl -> get_SecurityDescriptor(This,pValue) )
    ( (This)->lpVtbl -> put_SecurityDescriptor(This,Value) )
    ( (This)->lpVtbl -> get_Certificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_Certificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_UniqueContainerName(This,pValue) )
    ( (This)->lpVtbl -> get_Opened(This,pValue) )
    ( (This)->lpVtbl -> get_DefaultContainer(This,pValue) )
    ( (This)->lpVtbl -> get_Existing(This,pValue) )
    ( (This)->lpVtbl -> put_Existing(This,Value) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) )
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
    ( (This)->lpVtbl -> put_Pin(This,Value) )
    ( (This)->lpVtbl -> get_FriendlyName(This,pValue) )
    ( (This)->lpVtbl -> put_FriendlyName(This,Value) )
    ( (This)->lpVtbl -> get_Description(This,pValue) )
    ( (This)->lpVtbl -> put_Description(This,Value) )
    ( (This)->lpVtbl -> get_HardwareKeyUsage(This,pValue) )
    ( (This)->lpVtbl -> put_HardwareKeyUsage(This,Value) )
    ( (This)->lpVtbl -> get_AlternateStorageLocation(This,pValue) )
    ( (This)->lpVtbl -> put_AlternateStorageLocation(This,Value) )
    ( (This)->lpVtbl -> get_AlgorithmName(This,pValue) )
    ( (This)->lpVtbl -> put_AlgorithmName(This,Value) )
    ( (This)->lpVtbl -> get_AlgorithmParameters(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_AlgorithmParameters(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_ParametersExportType(This,pValue) )
    ( (This)->lpVtbl -> put_ParametersExportType(This,Value) )
EXTERN_C const IID IID_IX509EndorsementKey;
    typedef struct IX509EndorsementKeyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509EndorsementKey * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509EndorsementKey * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509EndorsementKey * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509EndorsementKey * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509EndorsementKey * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509EndorsementKey * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509EndorsementKey * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderName )(
            __RPC__in IX509EndorsementKey * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderName )(
            __RPC__in IX509EndorsementKey * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in IX509EndorsementKey * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Opened )(
            __RPC__in IX509EndorsementKey * This,
                                __RPC__out VARIANT_BOOL *pValue);
        HRESULT ( STDMETHODCALLTYPE *AddCertificate )(
            __RPC__in IX509EndorsementKey * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *RemoveCertificate )(
            __RPC__in IX509EndorsementKey * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *GetCertificateByIndex )(
            __RPC__in IX509EndorsementKey * This,
                       VARIANT_BOOL ManufacturerOnly,
                       LONG dwIndex,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetCertificateCount )(
            __RPC__in IX509EndorsementKey * This,
                       VARIANT_BOOL ManufacturerOnly,
                                __RPC__out LONG *pCount);
        HRESULT ( STDMETHODCALLTYPE *ExportPublicKey )(
            __RPC__in IX509EndorsementKey * This,
                                __RPC__deref_out_opt IX509PublicKey **ppPublicKey);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IX509EndorsementKey * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IX509EndorsementKey * This);
        END_INTERFACE
    } IX509EndorsementKeyVtbl;
    interface IX509EndorsementKey
    {
        CONST_VTBL struct IX509EndorsementKeyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ProviderName(This,pValue) )
    ( (This)->lpVtbl -> put_ProviderName(This,Value) )
    ( (This)->lpVtbl -> get_Length(This,pValue) )
    ( (This)->lpVtbl -> get_Opened(This,pValue) )
    ( (This)->lpVtbl -> AddCertificate(This,Encoding,strCertificate) )
    ( (This)->lpVtbl -> RemoveCertificate(This,Encoding,strCertificate) )
    ( (This)->lpVtbl -> GetCertificateByIndex(This,ManufacturerOnly,dwIndex,Encoding,pValue) )
    ( (This)->lpVtbl -> GetCertificateCount(This,ManufacturerOnly,pCount) )
    ( (This)->lpVtbl -> ExportPublicKey(This,ppPublicKey) )
    ( (This)->lpVtbl -> Open(This) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IX509Extension;
    typedef struct IX509ExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509Extension * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509Extension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509Extension * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509Extension * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509Extension * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509Extension * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509Extension * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509Extension * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509Extension * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509Extension * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Critical )(
            __RPC__in IX509Extension * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Critical )(
            __RPC__in IX509Extension * This,
                       VARIANT_BOOL Value);
        END_INTERFACE
    } IX509ExtensionVtbl;
    interface IX509Extension
    {
        CONST_VTBL struct IX509ExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Critical(This,pValue) )
    ( (This)->lpVtbl -> put_Critical(This,Value) )
EXTERN_C const IID IID_IX509Extensions;
    typedef struct IX509ExtensionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509Extensions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509Extensions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509Extensions * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509Extensions * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509Extensions * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509Extensions * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509Extensions * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in IX509Extensions * This,
                       LONG Index,
                                __RPC__deref_out_opt IX509Extension **pVal);
                                                HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IX509Extensions * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IX509Extensions * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                                       HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IX509Extensions * This,
                       __RPC__in_opt IX509Extension *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IX509Extensions * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IX509Extensions * This);
                        HRESULT ( STDMETHODCALLTYPE *get_IndexByObjectId )(
            __RPC__in IX509Extensions * This,
                       __RPC__in_opt IObjectId *pObjectId,
                                __RPC__out LONG *pIndex);
        HRESULT ( STDMETHODCALLTYPE *AddRange )(
            __RPC__in IX509Extensions * This,
                       __RPC__in_opt IX509Extensions *pValue);
        END_INTERFACE
    } IX509ExtensionsVtbl;
    interface IX509Extensions
    {
        CONST_VTBL struct IX509ExtensionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> get_IndexByObjectId(This,pObjectId,pIndex) )
    ( (This)->lpVtbl -> AddRange(This,pValue) )
typedef
enum X509KeyUsageFlags
    {
        XCN_CERT_NO_KEY_USAGE = 0,
        XCN_CERT_DIGITAL_SIGNATURE_KEY_USAGE = 0x80,
        XCN_CERT_NON_REPUDIATION_KEY_USAGE = 0x40,
        XCN_CERT_KEY_ENCIPHERMENT_KEY_USAGE = 0x20,
        XCN_CERT_DATA_ENCIPHERMENT_KEY_USAGE = 0x10,
        XCN_CERT_KEY_AGREEMENT_KEY_USAGE = 0x8,
        XCN_CERT_KEY_CERT_SIGN_KEY_USAGE = 0x4,
        XCN_CERT_OFFLINE_CRL_SIGN_KEY_USAGE = 0x2,
        XCN_CERT_CRL_SIGN_KEY_USAGE = 0x2,
        XCN_CERT_ENCIPHER_ONLY_KEY_USAGE = 0x1,
        XCN_CERT_DECIPHER_ONLY_KEY_USAGE = ( 0x80 << 8 )
    } X509KeyUsageFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0018_v0_0_s_ifspec;
EXTERN_C const IID IID_IX509ExtensionKeyUsage;
    typedef struct IX509ExtensionKeyUsageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509ExtensionKeyUsage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509ExtensionKeyUsage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509ExtensionKeyUsage * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509ExtensionKeyUsage * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509ExtensionKeyUsage * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509ExtensionKeyUsage * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509ExtensionKeyUsage * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509ExtensionKeyUsage * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509ExtensionKeyUsage * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509ExtensionKeyUsage * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Critical )(
            __RPC__in IX509ExtensionKeyUsage * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Critical )(
            __RPC__in IX509ExtensionKeyUsage * This,
                       VARIANT_BOOL Value);
                       HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509ExtensionKeyUsage * This,
                       X509KeyUsageFlags UsageFlags);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509ExtensionKeyUsage * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_KeyUsage )(
            __RPC__in IX509ExtensionKeyUsage * This,
                                __RPC__out X509KeyUsageFlags *pValue);
        END_INTERFACE
    } IX509ExtensionKeyUsageVtbl;
    interface IX509ExtensionKeyUsage
    {
        CONST_VTBL struct IX509ExtensionKeyUsageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Critical(This,pValue) )
    ( (This)->lpVtbl -> put_Critical(This,Value) )
    ( (This)->lpVtbl -> InitializeEncode(This,UsageFlags) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_KeyUsage(This,pValue) )
EXTERN_C const IID IID_IX509ExtensionEnhancedKeyUsage;
    typedef struct IX509ExtensionEnhancedKeyUsageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509ExtensionEnhancedKeyUsage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509ExtensionEnhancedKeyUsage * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509ExtensionEnhancedKeyUsage * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Critical )(
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Critical )(
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
                       VARIANT_BOOL Value);
                       HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
                       __RPC__in_opt IObjectIds *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_EnhancedKeyUsage )(
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
        END_INTERFACE
    } IX509ExtensionEnhancedKeyUsageVtbl;
    interface IX509ExtensionEnhancedKeyUsage
    {
        CONST_VTBL struct IX509ExtensionEnhancedKeyUsageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Critical(This,pValue) )
    ( (This)->lpVtbl -> put_Critical(This,Value) )
    ( (This)->lpVtbl -> InitializeEncode(This,pValue) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_EnhancedKeyUsage(This,ppValue) )
EXTERN_C const IID IID_IX509ExtensionTemplateName;
    typedef struct IX509ExtensionTemplateNameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509ExtensionTemplateName * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509ExtensionTemplateName * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509ExtensionTemplateName * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509ExtensionTemplateName * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509ExtensionTemplateName * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509ExtensionTemplateName * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509ExtensionTemplateName * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509ExtensionTemplateName * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509ExtensionTemplateName * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509ExtensionTemplateName * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Critical )(
            __RPC__in IX509ExtensionTemplateName * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Critical )(
            __RPC__in IX509ExtensionTemplateName * This,
                       VARIANT_BOOL Value);
                       HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509ExtensionTemplateName * This,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509ExtensionTemplateName * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_TemplateName )(
            __RPC__in IX509ExtensionTemplateName * This,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509ExtensionTemplateNameVtbl;
    interface IX509ExtensionTemplateName
    {
        CONST_VTBL struct IX509ExtensionTemplateNameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Critical(This,pValue) )
    ( (This)->lpVtbl -> put_Critical(This,Value) )
    ( (This)->lpVtbl -> InitializeEncode(This,strTemplateName) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_TemplateName(This,pValue) )
EXTERN_C const IID IID_IX509ExtensionTemplate;
    typedef struct IX509ExtensionTemplateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509ExtensionTemplate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509ExtensionTemplate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509ExtensionTemplate * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509ExtensionTemplate * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509ExtensionTemplate * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509ExtensionTemplate * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509ExtensionTemplate * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509ExtensionTemplate * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509ExtensionTemplate * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509ExtensionTemplate * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Critical )(
            __RPC__in IX509ExtensionTemplate * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Critical )(
            __RPC__in IX509ExtensionTemplate * This,
                       VARIANT_BOOL Value);
                       HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509ExtensionTemplate * This,
                       __RPC__in_opt IObjectId *pTemplateOid,
                       LONG MajorVersion,
                       LONG MinorVersion);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509ExtensionTemplate * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_TemplateOid )(
            __RPC__in IX509ExtensionTemplate * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )(
            __RPC__in IX509ExtensionTemplate * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )(
            __RPC__in IX509ExtensionTemplate * This,
                                __RPC__out LONG *pValue);
        END_INTERFACE
    } IX509ExtensionTemplateVtbl;
    interface IX509ExtensionTemplate
    {
        CONST_VTBL struct IX509ExtensionTemplateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Critical(This,pValue) )
    ( (This)->lpVtbl -> put_Critical(This,Value) )
    ( (This)->lpVtbl -> InitializeEncode(This,pTemplateOid,MajorVersion,MinorVersion) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_TemplateOid(This,ppValue) )
    ( (This)->lpVtbl -> get_MajorVersion(This,pValue) )
    ( (This)->lpVtbl -> get_MinorVersion(This,pValue) )
typedef
enum AlternativeNameType
    {
        XCN_CERT_ALT_NAME_UNKNOWN = 0,
        XCN_CERT_ALT_NAME_OTHER_NAME = 1,
        XCN_CERT_ALT_NAME_RFC822_NAME = 2,
        XCN_CERT_ALT_NAME_DNS_NAME = 3,
        XCN_CERT_ALT_NAME_X400_ADDRESS = 4,
        XCN_CERT_ALT_NAME_DIRECTORY_NAME = 5,
        XCN_CERT_ALT_NAME_EDI_PARTY_NAME = 6,
        XCN_CERT_ALT_NAME_URL = 7,
        XCN_CERT_ALT_NAME_IP_ADDRESS = 8,
        XCN_CERT_ALT_NAME_REGISTERED_ID = 9,
        XCN_CERT_ALT_NAME_GUID = 10,
        XCN_CERT_ALT_NAME_USER_PRINCIPLE_NAME = 11
    } AlternativeNameType;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0022_v0_0_s_ifspec;
EXTERN_C const IID IID_IAlternativeName;
    typedef struct IAlternativeNameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAlternativeName * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAlternativeName * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAlternativeName * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAlternativeName * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAlternativeName * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAlternativeName * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAlternativeName * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromString )(
            __RPC__in IAlternativeName * This,
                       AlternativeNameType Type,
                       __RPC__in BSTR strValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromRawData )(
            __RPC__in IAlternativeName * This,
                       AlternativeNameType Type,
                       EncodingType Encoding,
                       __RPC__in BSTR strRawData);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromOtherName )(
            __RPC__in IAlternativeName * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strRawData,
                       VARIANT_BOOL ToBeWrapped);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IAlternativeName * This,
                                __RPC__out AlternativeNameType *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_StrValue )(
            __RPC__in IAlternativeName * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IAlternativeName * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IAlternativeName * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IAlternativeNameVtbl;
    interface IAlternativeName
    {
        CONST_VTBL struct IAlternativeNameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromString(This,Type,strValue) )
    ( (This)->lpVtbl -> InitializeFromRawData(This,Type,Encoding,strRawData) )
    ( (This)->lpVtbl -> InitializeFromOtherName(This,pObjectId,Encoding,strRawData,ToBeWrapped) )
    ( (This)->lpVtbl -> get_Type(This,pValue) )
    ( (This)->lpVtbl -> get_StrValue(This,pValue) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
EXTERN_C const IID IID_IAlternativeNames;
    typedef struct IAlternativeNamesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAlternativeNames * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAlternativeNames * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAlternativeNames * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAlternativeNames * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAlternativeNames * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAlternativeNames * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAlternativeNames * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in IAlternativeNames * This,
                       LONG Index,
                                __RPC__deref_out_opt IAlternativeName **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAlternativeNames * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IAlternativeNames * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IAlternativeNames * This,
                       __RPC__in_opt IAlternativeName *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IAlternativeNames * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IAlternativeNames * This);
        END_INTERFACE
    } IAlternativeNamesVtbl;
    interface IAlternativeNames
    {
        CONST_VTBL struct IAlternativeNamesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
EXTERN_C const IID IID_IX509ExtensionAlternativeNames;
    typedef struct IX509ExtensionAlternativeNamesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509ExtensionAlternativeNames * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509ExtensionAlternativeNames * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509ExtensionAlternativeNames * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509ExtensionAlternativeNames * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509ExtensionAlternativeNames * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509ExtensionAlternativeNames * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509ExtensionAlternativeNames * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509ExtensionAlternativeNames * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509ExtensionAlternativeNames * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509ExtensionAlternativeNames * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Critical )(
            __RPC__in IX509ExtensionAlternativeNames * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Critical )(
            __RPC__in IX509ExtensionAlternativeNames * This,
                       VARIANT_BOOL Value);
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509ExtensionAlternativeNames * This,
                       __RPC__in_opt IAlternativeNames *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509ExtensionAlternativeNames * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_AlternativeNames )(
            __RPC__in IX509ExtensionAlternativeNames * This,
                                __RPC__deref_out_opt IAlternativeNames **ppValue);
        END_INTERFACE
    } IX509ExtensionAlternativeNamesVtbl;
    interface IX509ExtensionAlternativeNames
    {
        CONST_VTBL struct IX509ExtensionAlternativeNamesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Critical(This,pValue) )
    ( (This)->lpVtbl -> put_Critical(This,Value) )
    ( (This)->lpVtbl -> InitializeEncode(This,pValue) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_AlternativeNames(This,ppValue) )
EXTERN_C const IID IID_IX509ExtensionBasicConstraints;
    typedef struct IX509ExtensionBasicConstraintsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509ExtensionBasicConstraints * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509ExtensionBasicConstraints * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509ExtensionBasicConstraints * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509ExtensionBasicConstraints * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509ExtensionBasicConstraints * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509ExtensionBasicConstraints * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509ExtensionBasicConstraints * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509ExtensionBasicConstraints * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509ExtensionBasicConstraints * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509ExtensionBasicConstraints * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Critical )(
            __RPC__in IX509ExtensionBasicConstraints * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Critical )(
            __RPC__in IX509ExtensionBasicConstraints * This,
                       VARIANT_BOOL Value);
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509ExtensionBasicConstraints * This,
                       VARIANT_BOOL IsCA,
                       LONG PathLenConstraint);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509ExtensionBasicConstraints * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_IsCA )(
            __RPC__in IX509ExtensionBasicConstraints * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_PathLenConstraint )(
            __RPC__in IX509ExtensionBasicConstraints * This,
                                __RPC__out LONG *pValue);
        END_INTERFACE
    } IX509ExtensionBasicConstraintsVtbl;
    interface IX509ExtensionBasicConstraints
    {
        CONST_VTBL struct IX509ExtensionBasicConstraintsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Critical(This,pValue) )
    ( (This)->lpVtbl -> put_Critical(This,Value) )
    ( (This)->lpVtbl -> InitializeEncode(This,IsCA,PathLenConstraint) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_IsCA(This,pValue) )
    ( (This)->lpVtbl -> get_PathLenConstraint(This,pValue) )
EXTERN_C const IID IID_IX509ExtensionSubjectKeyIdentifier;
    typedef struct IX509ExtensionSubjectKeyIdentifierVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509ExtensionSubjectKeyIdentifier * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Critical )(
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Critical )(
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
                       VARIANT_BOOL Value);
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strKeyIdentifier);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_SubjectKeyIdentifier )(
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509ExtensionSubjectKeyIdentifierVtbl;
    interface IX509ExtensionSubjectKeyIdentifier
    {
        CONST_VTBL struct IX509ExtensionSubjectKeyIdentifierVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Critical(This,pValue) )
    ( (This)->lpVtbl -> put_Critical(This,Value) )
    ( (This)->lpVtbl -> InitializeEncode(This,Encoding,strKeyIdentifier) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_SubjectKeyIdentifier(This,Encoding,pValue) )
EXTERN_C const IID IID_IX509ExtensionAuthorityKeyIdentifier;
    typedef struct IX509ExtensionAuthorityKeyIdentifierVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509ExtensionAuthorityKeyIdentifier * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Critical )(
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Critical )(
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
                       VARIANT_BOOL Value);
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strKeyIdentifier);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_AuthorityKeyIdentifier )(
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509ExtensionAuthorityKeyIdentifierVtbl;
    interface IX509ExtensionAuthorityKeyIdentifier
    {
        CONST_VTBL struct IX509ExtensionAuthorityKeyIdentifierVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Critical(This,pValue) )
    ( (This)->lpVtbl -> put_Critical(This,Value) )
    ( (This)->lpVtbl -> InitializeEncode(This,Encoding,strKeyIdentifier) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_AuthorityKeyIdentifier(This,Encoding,pValue) )
EXTERN_C const IID IID_ISmimeCapability;
    typedef struct ISmimeCapabilityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISmimeCapability * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISmimeCapability * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISmimeCapability * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISmimeCapability * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISmimeCapability * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISmimeCapability * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISmimeCapability * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ISmimeCapability * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       LONG BitCount);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in ISmimeCapability * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_BitCount )(
            __RPC__in ISmimeCapability * This,
                                __RPC__out LONG *pValue);
        END_INTERFACE
    } ISmimeCapabilityVtbl;
    interface ISmimeCapability
    {
        CONST_VTBL struct ISmimeCapabilityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,BitCount) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_BitCount(This,pValue) )
EXTERN_C const IID IID_ISmimeCapabilities;
    typedef struct ISmimeCapabilitiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISmimeCapabilities * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISmimeCapabilities * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISmimeCapabilities * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISmimeCapabilities * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISmimeCapabilities * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISmimeCapabilities * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISmimeCapabilities * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in ISmimeCapabilities * This,
                       LONG Index,
                                __RPC__deref_out_opt ISmimeCapability **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISmimeCapabilities * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISmimeCapabilities * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ISmimeCapabilities * This,
                       __RPC__in_opt ISmimeCapability *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ISmimeCapabilities * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ISmimeCapabilities * This);
        HRESULT ( STDMETHODCALLTYPE *AddFromCsp )(
            __RPC__in ISmimeCapabilities * This,
                       __RPC__in_opt ICspInformation *pValue);
        HRESULT ( STDMETHODCALLTYPE *AddAvailableSmimeCapabilities )(
            __RPC__in ISmimeCapabilities * This,
                       VARIANT_BOOL MachineContext);
        END_INTERFACE
    } ISmimeCapabilitiesVtbl;
    interface ISmimeCapabilities
    {
        CONST_VTBL struct ISmimeCapabilitiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> AddFromCsp(This,pValue) )
    ( (This)->lpVtbl -> AddAvailableSmimeCapabilities(This,MachineContext) )
EXTERN_C const IID IID_IX509ExtensionSmimeCapabilities;
    typedef struct IX509ExtensionSmimeCapabilitiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509ExtensionSmimeCapabilities * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509ExtensionSmimeCapabilities * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509ExtensionSmimeCapabilities * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509ExtensionSmimeCapabilities * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509ExtensionSmimeCapabilities * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509ExtensionSmimeCapabilities * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509ExtensionSmimeCapabilities * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509ExtensionSmimeCapabilities * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509ExtensionSmimeCapabilities * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509ExtensionSmimeCapabilities * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Critical )(
            __RPC__in IX509ExtensionSmimeCapabilities * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Critical )(
            __RPC__in IX509ExtensionSmimeCapabilities * This,
                       VARIANT_BOOL Value);
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509ExtensionSmimeCapabilities * This,
                       __RPC__in_opt ISmimeCapabilities *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509ExtensionSmimeCapabilities * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_SmimeCapabilities )(
            __RPC__in IX509ExtensionSmimeCapabilities * This,
                                __RPC__deref_out_opt ISmimeCapabilities **ppValue);
        END_INTERFACE
    } IX509ExtensionSmimeCapabilitiesVtbl;
    interface IX509ExtensionSmimeCapabilities
    {
        CONST_VTBL struct IX509ExtensionSmimeCapabilitiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Critical(This,pValue) )
    ( (This)->lpVtbl -> put_Critical(This,Value) )
    ( (This)->lpVtbl -> InitializeEncode(This,pValue) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_SmimeCapabilities(This,ppValue) )
typedef
enum PolicyQualifierType
    {
        PolicyQualifierTypeUnknown = 0,
        PolicyQualifierTypeUrl = 1,
        PolicyQualifierTypeUserNotice = 2,
        PolicyQualifierTypeFlags = 3
    } PolicyQualifierType;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0031_v0_0_s_ifspec;
EXTERN_C const IID IID_IPolicyQualifier;
    typedef struct IPolicyQualifierVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPolicyQualifier * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPolicyQualifier * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPolicyQualifier * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPolicyQualifier * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPolicyQualifier * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPolicyQualifier * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPolicyQualifier * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IPolicyQualifier * This,
                       __RPC__in BSTR strQualifier,
                       PolicyQualifierType Type);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IPolicyQualifier * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Qualifier )(
            __RPC__in IPolicyQualifier * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IPolicyQualifier * This,
                                __RPC__out PolicyQualifierType *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IPolicyQualifier * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IPolicyQualifierVtbl;
    interface IPolicyQualifier
    {
        CONST_VTBL struct IPolicyQualifierVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeEncode(This,strQualifier,Type) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_Qualifier(This,pValue) )
    ( (This)->lpVtbl -> get_Type(This,pValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
EXTERN_C const IID IID_IPolicyQualifiers;
    typedef struct IPolicyQualifiersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPolicyQualifiers * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPolicyQualifiers * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPolicyQualifiers * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPolicyQualifiers * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPolicyQualifiers * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPolicyQualifiers * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPolicyQualifiers * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in IPolicyQualifiers * This,
                       LONG Index,
                                __RPC__deref_out_opt IPolicyQualifier **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IPolicyQualifiers * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IPolicyQualifiers * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IPolicyQualifiers * This,
                       __RPC__in_opt IPolicyQualifier *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IPolicyQualifiers * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IPolicyQualifiers * This);
        END_INTERFACE
    } IPolicyQualifiersVtbl;
    interface IPolicyQualifiers
    {
        CONST_VTBL struct IPolicyQualifiersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
EXTERN_C const IID IID_ICertificatePolicy;
    typedef struct ICertificatePolicyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertificatePolicy * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertificatePolicy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertificatePolicy * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertificatePolicy * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertificatePolicy * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertificatePolicy * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertificatePolicy * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertificatePolicy * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in ICertificatePolicy * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyQualifiers )(
            __RPC__in ICertificatePolicy * This,
                                __RPC__deref_out_opt IPolicyQualifiers **ppValue);
        END_INTERFACE
    } ICertificatePolicyVtbl;
    interface ICertificatePolicy
    {
        CONST_VTBL struct ICertificatePolicyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pValue) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_PolicyQualifiers(This,ppValue) )
EXTERN_C const IID IID_ICertificatePolicies;
    typedef struct ICertificatePoliciesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertificatePolicies * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertificatePolicies * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertificatePolicies * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertificatePolicies * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertificatePolicies * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertificatePolicies * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertificatePolicies * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in ICertificatePolicies * This,
                       LONG Index,
                                __RPC__deref_out_opt ICertificatePolicy **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ICertificatePolicies * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ICertificatePolicies * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ICertificatePolicies * This,
                       __RPC__in_opt ICertificatePolicy *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ICertificatePolicies * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ICertificatePolicies * This);
        END_INTERFACE
    } ICertificatePoliciesVtbl;
    interface ICertificatePolicies
    {
        CONST_VTBL struct ICertificatePoliciesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
EXTERN_C const IID IID_IX509ExtensionCertificatePolicies;
    typedef struct IX509ExtensionCertificatePoliciesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509ExtensionCertificatePolicies * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509ExtensionCertificatePolicies * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509ExtensionCertificatePolicies * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509ExtensionCertificatePolicies * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509ExtensionCertificatePolicies * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509ExtensionCertificatePolicies * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509ExtensionCertificatePolicies * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509ExtensionCertificatePolicies * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509ExtensionCertificatePolicies * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509ExtensionCertificatePolicies * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Critical )(
            __RPC__in IX509ExtensionCertificatePolicies * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Critical )(
            __RPC__in IX509ExtensionCertificatePolicies * This,
                       VARIANT_BOOL Value);
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509ExtensionCertificatePolicies * This,
                       __RPC__in_opt ICertificatePolicies *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509ExtensionCertificatePolicies * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_Policies )(
            __RPC__in IX509ExtensionCertificatePolicies * This,
                                __RPC__deref_out_opt ICertificatePolicies **ppValue);
        END_INTERFACE
    } IX509ExtensionCertificatePoliciesVtbl;
    interface IX509ExtensionCertificatePolicies
    {
        CONST_VTBL struct IX509ExtensionCertificatePoliciesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Critical(This,pValue) )
    ( (This)->lpVtbl -> put_Critical(This,Value) )
    ( (This)->lpVtbl -> InitializeEncode(This,pValue) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_Policies(This,ppValue) )
EXTERN_C const IID IID_IX509ExtensionMSApplicationPolicies;
    typedef struct IX509ExtensionMSApplicationPoliciesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509ExtensionMSApplicationPolicies * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509ExtensionMSApplicationPolicies * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509ExtensionMSApplicationPolicies * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Critical )(
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Critical )(
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
                       VARIANT_BOOL Value);
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
                       __RPC__in_opt ICertificatePolicies *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_Policies )(
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
                                __RPC__deref_out_opt ICertificatePolicies **ppValue);
        END_INTERFACE
    } IX509ExtensionMSApplicationPoliciesVtbl;
    interface IX509ExtensionMSApplicationPolicies
    {
        CONST_VTBL struct IX509ExtensionMSApplicationPoliciesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Critical(This,pValue) )
    ( (This)->lpVtbl -> put_Critical(This,Value) )
    ( (This)->lpVtbl -> InitializeEncode(This,pValue) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_Policies(This,ppValue) )
EXTERN_C const IID IID_IX509Attribute;
    typedef struct IX509AttributeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509Attribute * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509Attribute * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509Attribute * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509Attribute * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509Attribute * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509Attribute * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509Attribute * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509Attribute * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509Attribute * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509Attribute * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509AttributeVtbl;
    interface IX509Attribute
    {
        CONST_VTBL struct IX509AttributeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
EXTERN_C const IID IID_IX509Attributes;
    typedef struct IX509AttributesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509Attributes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509Attributes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509Attributes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509Attributes * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509Attributes * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509Attributes * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509Attributes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in IX509Attributes * This,
                       LONG Index,
                                __RPC__deref_out_opt IX509Attribute **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IX509Attributes * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IX509Attributes * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IX509Attributes * This,
                       __RPC__in_opt IX509Attribute *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IX509Attributes * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IX509Attributes * This);
        END_INTERFACE
    } IX509AttributesVtbl;
    interface IX509Attributes
    {
        CONST_VTBL struct IX509AttributesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
EXTERN_C const IID IID_IX509AttributeExtensions;
    typedef struct IX509AttributeExtensionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509AttributeExtensions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509AttributeExtensions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509AttributeExtensions * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509AttributeExtensions * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509AttributeExtensions * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509AttributeExtensions * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509AttributeExtensions * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509AttributeExtensions * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509AttributeExtensions * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509AttributeExtensions * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509AttributeExtensions * This,
                       __RPC__in_opt IX509Extensions *pExtensions);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509AttributeExtensions * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )(
            __RPC__in IX509AttributeExtensions * This,
                                __RPC__deref_out_opt IX509Extensions **ppValue);
        END_INTERFACE
    } IX509AttributeExtensionsVtbl;
    interface IX509AttributeExtensions
    {
        CONST_VTBL struct IX509AttributeExtensionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeEncode(This,pExtensions) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
typedef
enum RequestClientInfoClientId
    {
        ClientIdNone = 0,
        ClientIdXEnroll2003 = 1,
        ClientIdAutoEnroll2003 = 2,
        ClientIdWizard2003 = 3,
        ClientIdCertReq2003 = 4,
        ClientIdDefaultRequest = 5,
        ClientIdAutoEnroll = 6,
        ClientIdRequestWizard = 7,
        ClientIdEOBO = 8,
        ClientIdCertReq = 9,
        ClientIdTest = 10,
        ClientIdWinRT = 11,
        ClientIdUserStart = 1000
    } RequestClientInfoClientId;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0040_v0_0_s_ifspec;
EXTERN_C const IID IID_IX509AttributeClientId;
    typedef struct IX509AttributeClientIdVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509AttributeClientId * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509AttributeClientId * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509AttributeClientId * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509AttributeClientId * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509AttributeClientId * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509AttributeClientId * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509AttributeClientId * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509AttributeClientId * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509AttributeClientId * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509AttributeClientId * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509AttributeClientId * This,
                       RequestClientInfoClientId ClientId,
                       __RPC__in BSTR strMachineDnsName,
                       __RPC__in BSTR strUserSamName,
                       __RPC__in BSTR strProcessName);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509AttributeClientId * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
            __RPC__in IX509AttributeClientId * This,
                                __RPC__out RequestClientInfoClientId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_MachineDnsName )(
            __RPC__in IX509AttributeClientId * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_UserSamName )(
            __RPC__in IX509AttributeClientId * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ProcessName )(
            __RPC__in IX509AttributeClientId * This,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509AttributeClientIdVtbl;
    interface IX509AttributeClientId
    {
        CONST_VTBL struct IX509AttributeClientIdVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeEncode(This,ClientId,strMachineDnsName,strUserSamName,strProcessName) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ClientId(This,pValue) )
    ( (This)->lpVtbl -> get_MachineDnsName(This,pValue) )
    ( (This)->lpVtbl -> get_UserSamName(This,pValue) )
    ( (This)->lpVtbl -> get_ProcessName(This,pValue) )
EXTERN_C const IID IID_IX509AttributeRenewalCertificate;
    typedef struct IX509AttributeRenewalCertificateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509AttributeRenewalCertificate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509AttributeRenewalCertificate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509AttributeRenewalCertificate * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509AttributeRenewalCertificate * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509AttributeRenewalCertificate * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509AttributeRenewalCertificate * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509AttributeRenewalCertificate * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509AttributeRenewalCertificate * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509AttributeRenewalCertificate * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509AttributeRenewalCertificate * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509AttributeRenewalCertificate * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strCert);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509AttributeRenewalCertificate * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )(
            __RPC__in IX509AttributeRenewalCertificate * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509AttributeRenewalCertificateVtbl;
    interface IX509AttributeRenewalCertificate
    {
        CONST_VTBL struct IX509AttributeRenewalCertificateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeEncode(This,Encoding,strCert) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
EXTERN_C const IID IID_IX509AttributeArchiveKey;
    typedef struct IX509AttributeArchiveKeyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509AttributeArchiveKey * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509AttributeArchiveKey * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509AttributeArchiveKey * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509AttributeArchiveKey * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509AttributeArchiveKey * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509AttributeArchiveKey * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509AttributeArchiveKey * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509AttributeArchiveKey * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509AttributeArchiveKey * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509AttributeArchiveKey * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509AttributeArchiveKey * This,
                       __RPC__in_opt IX509PrivateKey *pKey,
                       EncodingType Encoding,
                       __RPC__in BSTR strCAXCert,
                       __RPC__in_opt IObjectId *pAlgorithm,
                       LONG EncryptionStrength);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509AttributeArchiveKey * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_EncryptedKeyBlob )(
            __RPC__in IX509AttributeArchiveKey * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EncryptionAlgorithm )(
            __RPC__in IX509AttributeArchiveKey * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EncryptionStrength )(
            __RPC__in IX509AttributeArchiveKey * This,
                                __RPC__out LONG *pValue);
        END_INTERFACE
    } IX509AttributeArchiveKeyVtbl;
    interface IX509AttributeArchiveKey
    {
        CONST_VTBL struct IX509AttributeArchiveKeyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeEncode(This,pKey,Encoding,strCAXCert,pAlgorithm,EncryptionStrength) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_EncryptedKeyBlob(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_EncryptionAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> get_EncryptionStrength(This,pValue) )
EXTERN_C const IID IID_IX509AttributeArchiveKeyHash;
    typedef struct IX509AttributeArchiveKeyHashVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509AttributeArchiveKeyHash * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509AttributeArchiveKeyHash * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509AttributeArchiveKeyHash * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509AttributeArchiveKeyHash * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509AttributeArchiveKeyHash * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509AttributeArchiveKeyHash * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509AttributeArchiveKeyHash * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509AttributeArchiveKeyHash * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509AttributeArchiveKeyHash * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509AttributeArchiveKeyHash * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeEncodeFromEncryptedKeyBlob )(
            __RPC__in IX509AttributeArchiveKeyHash * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncryptedKeyBlob);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509AttributeArchiveKeyHash * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_EncryptedKeyHashBlob )(
            __RPC__in IX509AttributeArchiveKeyHash * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509AttributeArchiveKeyHashVtbl;
    interface IX509AttributeArchiveKeyHash
    {
        CONST_VTBL struct IX509AttributeArchiveKeyHashVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeEncodeFromEncryptedKeyBlob(This,Encoding,strEncryptedKeyBlob) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_EncryptedKeyHashBlob(This,Encoding,pValue) )
EXTERN_C const IID IID_IX509AttributeOSVersion;
    typedef struct IX509AttributeOSVersionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509AttributeOSVersion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509AttributeOSVersion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509AttributeOSVersion * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509AttributeOSVersion * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509AttributeOSVersion * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509AttributeOSVersion * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509AttributeOSVersion * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509AttributeOSVersion * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509AttributeOSVersion * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509AttributeOSVersion * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509AttributeOSVersion * This,
                       __RPC__in BSTR strOSVersion);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509AttributeOSVersion * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_OSVersion )(
            __RPC__in IX509AttributeOSVersion * This,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509AttributeOSVersionVtbl;
    interface IX509AttributeOSVersion
    {
        CONST_VTBL struct IX509AttributeOSVersionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeEncode(This,strOSVersion) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_OSVersion(This,pValue) )
EXTERN_C const IID IID_IX509AttributeCspProvider;
    typedef struct IX509AttributeCspProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509AttributeCspProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509AttributeCspProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509AttributeCspProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509AttributeCspProvider * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509AttributeCspProvider * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509AttributeCspProvider * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509AttributeCspProvider * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509AttributeCspProvider * This,
                       __RPC__in_opt IObjectId *pObjectId,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IX509AttributeCspProvider * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509AttributeCspProvider * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )(
            __RPC__in IX509AttributeCspProvider * This,
                       X509KeySpec KeySpec,
                       __RPC__in BSTR strProviderName,
                       EncodingType Encoding,
                       __RPC__in BSTR strSignature);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509AttributeCspProvider * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_KeySpec )(
            __RPC__in IX509AttributeCspProvider * This,
                                __RPC__out X509KeySpec *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderName )(
            __RPC__in IX509AttributeCspProvider * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Signature )(
            __RPC__in IX509AttributeCspProvider * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509AttributeCspProviderVtbl;
    interface IX509AttributeCspProvider
    {
        CONST_VTBL struct IX509AttributeCspProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeEncode(This,KeySpec,strProviderName,Encoding,strSignature) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_KeySpec(This,pValue) )
    ( (This)->lpVtbl -> get_ProviderName(This,pValue) )
    ( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) )
EXTERN_C const IID IID_ICryptAttribute;
    typedef struct ICryptAttributeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICryptAttribute * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICryptAttribute * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICryptAttribute * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICryptAttribute * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICryptAttribute * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICryptAttribute * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICryptAttribute * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromObjectId )(
            __RPC__in ICryptAttribute * This,
                       __RPC__in_opt IObjectId *pObjectId);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromValues )(
            __RPC__in ICryptAttribute * This,
                       __RPC__in_opt IX509Attributes *pAttributes);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in ICryptAttribute * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Values )(
            __RPC__in ICryptAttribute * This,
                                __RPC__deref_out_opt IX509Attributes **ppValue);
        END_INTERFACE
    } ICryptAttributeVtbl;
    interface ICryptAttribute
    {
        CONST_VTBL struct ICryptAttributeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromObjectId(This,pObjectId) )
    ( (This)->lpVtbl -> InitializeFromValues(This,pAttributes) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_Values(This,ppValue) )
EXTERN_C const IID IID_ICryptAttributes;
    typedef struct ICryptAttributesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICryptAttributes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICryptAttributes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICryptAttributes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICryptAttributes * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICryptAttributes * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICryptAttributes * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICryptAttributes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in ICryptAttributes * This,
                       LONG Index,
                                __RPC__deref_out_opt ICryptAttribute **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ICryptAttributes * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ICryptAttributes * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ICryptAttributes * This,
                       __RPC__in_opt ICryptAttribute *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ICryptAttributes * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ICryptAttributes * This);
                        HRESULT ( STDMETHODCALLTYPE *get_IndexByObjectId )(
            __RPC__in ICryptAttributes * This,
                       __RPC__in_opt IObjectId *pObjectId,
                                __RPC__out LONG *pIndex);
        HRESULT ( STDMETHODCALLTYPE *AddRange )(
            __RPC__in ICryptAttributes * This,
                       __RPC__in_opt ICryptAttributes *pValue);
        END_INTERFACE
    } ICryptAttributesVtbl;
    interface ICryptAttributes
    {
        CONST_VTBL struct ICryptAttributesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> get_IndexByObjectId(This,pObjectId,pIndex) )
    ( (This)->lpVtbl -> AddRange(This,pValue) )
typedef
enum CERTENROLL_PROPERTYID
    {
        XCN_PROPERTYID_NONE = 0,
        XCN_CERT_KEY_PROV_HANDLE_PROP_ID = 1,
        XCN_CERT_KEY_PROV_INFO_PROP_ID = 2,
        XCN_CERT_SHA1_HASH_PROP_ID = 3,
        XCN_CERT_MD5_HASH_PROP_ID = 4,
        XCN_CERT_HASH_PROP_ID = 3,
        XCN_CERT_KEY_CONTEXT_PROP_ID = 5,
        XCN_CERT_KEY_SPEC_PROP_ID = 6,
        XCN_CERT_IE30_RESERVED_PROP_ID = 7,
        XCN_CERT_PUBKEY_HASH_RESERVED_PROP_ID = 8,
        XCN_CERT_ENHKEY_USAGE_PROP_ID = 9,
        XCN_CERT_CTL_USAGE_PROP_ID = 9,
        XCN_CERT_NEXT_UPDATE_LOCATION_PROP_ID = 10,
        XCN_CERT_FRIENDLY_NAME_PROP_ID = 11,
        XCN_CERT_PVK_FILE_PROP_ID = 12,
        XCN_CERT_DESCRIPTION_PROP_ID = 13,
        XCN_CERT_ACCESS_STATE_PROP_ID = 14,
        XCN_CERT_SIGNATURE_HASH_PROP_ID = 15,
        XCN_CERT_SMART_CARD_DATA_PROP_ID = 16,
        XCN_CERT_EFS_PROP_ID = 17,
        XCN_CERT_FORTEZZA_DATA_PROP_ID = 18,
        XCN_CERT_ARCHIVED_PROP_ID = 19,
        XCN_CERT_KEY_IDENTIFIER_PROP_ID = 20,
        XCN_CERT_AUTO_ENROLL_PROP_ID = 21,
        XCN_CERT_PUBKEY_ALG_PARA_PROP_ID = 22,
        XCN_CERT_CROSS_CERT_DIST_POINTS_PROP_ID = 23,
        XCN_CERT_ISSUER_PUBLIC_KEY_MD5_HASH_PROP_ID = 24,
        XCN_CERT_SUBJECT_PUBLIC_KEY_MD5_HASH_PROP_ID = 25,
        XCN_CERT_ENROLLMENT_PROP_ID = 26,
        XCN_CERT_DATE_STAMP_PROP_ID = 27,
        XCN_CERT_ISSUER_SERIAL_NUMBER_MD5_HASH_PROP_ID = 28,
        XCN_CERT_SUBJECT_NAME_MD5_HASH_PROP_ID = 29,
        XCN_CERT_EXTENDED_ERROR_INFO_PROP_ID = 30,
        XCN_CERT_RENEWAL_PROP_ID = 64,
        XCN_CERT_ARCHIVED_KEY_HASH_PROP_ID = 65,
        XCN_CERT_AUTO_ENROLL_RETRY_PROP_ID = 66,
        XCN_CERT_AIA_URL_RETRIEVED_PROP_ID = 67,
        XCN_CERT_AUTHORITY_INFO_ACCESS_PROP_ID = 68,
        XCN_CERT_BACKED_UP_PROP_ID = 69,
        XCN_CERT_OCSP_RESPONSE_PROP_ID = 70,
        XCN_CERT_REQUEST_ORIGINATOR_PROP_ID = 71,
        XCN_CERT_SOURCE_LOCATION_PROP_ID = 72,
        XCN_CERT_SOURCE_URL_PROP_ID = 73,
        XCN_CERT_NEW_KEY_PROP_ID = 74,
        XCN_CERT_OCSP_CACHE_PREFIX_PROP_ID = 75,
        XCN_CERT_SMART_CARD_ROOT_INFO_PROP_ID = 76,
        XCN_CERT_NO_AUTO_EXPIRE_CHECK_PROP_ID = 77,
        XCN_CERT_NCRYPT_KEY_HANDLE_PROP_ID = 78,
        XCN_CERT_HCRYPTPROV_OR_NCRYPT_KEY_HANDLE_PROP_ID = 79,
        XCN_CERT_SUBJECT_INFO_ACCESS_PROP_ID = 80,
        XCN_CERT_CA_OCSP_AUTHORITY_INFO_ACCESS_PROP_ID = 81,
        XCN_CERT_CA_DISABLE_CRL_PROP_ID = 82,
        XCN_CERT_ROOT_PROGRAM_CERT_POLICIES_PROP_ID = 83,
        XCN_CERT_ROOT_PROGRAM_NAME_CONSTRAINTS_PROP_ID = 84,
        XCN_CERT_SUBJECT_OCSP_AUTHORITY_INFO_ACCESS_PROP_ID = 85,
        XCN_CERT_SUBJECT_DISABLE_CRL_PROP_ID = 86,
        XCN_CERT_CEP_PROP_ID = 87,
        XCN_CERT_SIGN_HASH_CNG_ALG_PROP_ID = 89,
        XCN_CERT_SCARD_PIN_ID_PROP_ID = 90,
        XCN_CERT_SCARD_PIN_INFO_PROP_ID = 91,
        XCN_CERT_SUBJECT_PUB_KEY_BIT_LENGTH_PROP_ID = 92,
        XCN_CERT_PUB_KEY_CNG_ALG_BIT_LENGTH_PROP_ID = 93,
        XCN_CERT_ISSUER_PUB_KEY_BIT_LENGTH_PROP_ID = 94,
        XCN_CERT_ISSUER_CHAIN_SIGN_HASH_CNG_ALG_PROP_ID = 95,
        XCN_CERT_ISSUER_CHAIN_PUB_KEY_CNG_ALG_BIT_LENGTH_PROP_ID = 96,
        XCN_CERT_NO_EXPIRE_NOTIFICATION_PROP_ID = 97,
        XCN_CERT_AUTH_ROOT_SHA256_HASH_PROP_ID = 98,
        XCN_CERT_NCRYPT_KEY_HANDLE_TRANSFER_PROP_ID = 99,
        XCN_CERT_HCRYPTPROV_TRANSFER_PROP_ID = 100,
        XCN_CERT_SMART_CARD_READER_PROP_ID = 101,
        XCN_CERT_SEND_AS_TRUSTED_ISSUER_PROP_ID = 102,
        XCN_CERT_KEY_REPAIR_ATTEMPTED_PROP_ID = 103,
        XCN_CERT_DISALLOWED_FILETIME_PROP_ID = 104,
        XCN_CERT_ROOT_PROGRAM_CHAIN_POLICIES_PROP_ID = 105,
        XCN_CERT_SMART_CARD_READER_NON_REMOVABLE_PROP_ID = 106,
        XCN_CERT_SHA256_HASH_PROP_ID = 107,
        XCN_CERT_SCEP_SERVER_CERTS_PROP_ID = 108,
        XCN_CERT_SCEP_RA_SIGNATURE_CERT_PROP_ID = 109,
        XCN_CERT_SCEP_RA_ENCRYPTION_CERT_PROP_ID = 110,
        XCN_CERT_SCEP_CA_CERT_PROP_ID = 111,
        XCN_CERT_SCEP_SIGNER_CERT_PROP_ID = 112,
        XCN_CERT_SCEP_NONCE_PROP_ID = 113,
        XCN_CERT_SCEP_ENCRYPT_HASH_CNG_ALG_PROP_ID = 114,
        XCN_CERT_SCEP_FLAGS_PROP_ID = 115,
        XCN_CERT_SCEP_GUID_PROP_ID = 116,
        XCN_CERT_SERIALIZABLE_KEY_CONTEXT_PROP_ID = 117,
        XCN_CERT_ISOLATED_KEY_PROP_ID = 118,
        XCN_CERT_SERIAL_CHAIN_PROP_ID = 119,
        XCN_CERT_KEY_CLASSIFICATION_PROP_ID = 120,
        XCN_CERT_DISALLOWED_ENHKEY_USAGE_PROP_ID = 122,
        XCN_CERT_NONCOMPLIANT_ROOT_URL_PROP_ID = 123,
        XCN_CERT_PIN_SHA256_HASH_PROP_ID = 124,
        XCN_CERT_CLR_DELETE_KEY_PROP_ID = 125,
        XCN_CERT_NOT_BEFORE_FILETIME_PROP_ID = 126,
        XCN_CERT_CERT_NOT_BEFORE_ENHKEY_USAGE_PROP_ID = 127,
        XCN_CERT_FIRST_RESERVED_PROP_ID = 128,
        XCN_CERT_LAST_RESERVED_PROP_ID = 0x7fff,
        XCN_CERT_FIRST_USER_PROP_ID = 0x8000,
        XCN_CERT_LAST_USER_PROP_ID = 0xffff,
        XCN_CERT_STORE_LOCALIZED_NAME_PROP_ID = 0x1000
    } CERTENROLL_PROPERTYID;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0048_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertProperty;
    typedef struct ICertPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertProperty * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertProperty * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertProperty * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertProperty * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in ICertProperty * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in ICertProperty * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertyId )(
            __RPC__in ICertProperty * This,
                                __RPC__out CERTENROLL_PROPERTYID *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_PropertyId )(
            __RPC__in ICertProperty * This,
                       CERTENROLL_PROPERTYID Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in ICertProperty * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )(
            __RPC__in ICertProperty * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )(
            __RPC__in ICertProperty * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        END_INTERFACE
    } ICertPropertyVtbl;
    interface ICertProperty
    {
        CONST_VTBL struct ICertPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) )
    ( (This)->lpVtbl -> put_PropertyId(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
EXTERN_C const IID IID_ICertProperties;
    typedef struct ICertPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertProperties * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertProperties * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertProperties * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertProperties * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertProperties * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in ICertProperties * This,
                       LONG Index,
                                __RPC__deref_out_opt ICertProperty **pVal);
                                                HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ICertProperties * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ICertProperties * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                                       HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ICertProperties * This,
                       __RPC__in_opt ICertProperty *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ICertProperties * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ICertProperties * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in ICertProperties * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        END_INTERFACE
    } ICertPropertiesVtbl;
    interface ICertProperties
    {
        CONST_VTBL struct ICertPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
EXTERN_C const IID IID_ICertPropertyFriendlyName;
    typedef struct ICertPropertyFriendlyNameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertPropertyFriendlyName * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertPropertyFriendlyName * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertPropertyFriendlyName * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertPropertyFriendlyName * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertPropertyFriendlyName * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertPropertyFriendlyName * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertPropertyFriendlyName * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in ICertPropertyFriendlyName * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in ICertPropertyFriendlyName * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertyId )(
            __RPC__in ICertPropertyFriendlyName * This,
                                __RPC__out CERTENROLL_PROPERTYID *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_PropertyId )(
            __RPC__in ICertPropertyFriendlyName * This,
                       CERTENROLL_PROPERTYID Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in ICertPropertyFriendlyName * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )(
            __RPC__in ICertPropertyFriendlyName * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )(
            __RPC__in ICertPropertyFriendlyName * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertPropertyFriendlyName * This,
                       __RPC__in BSTR strFriendlyName);
                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in ICertPropertyFriendlyName * This,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } ICertPropertyFriendlyNameVtbl;
    interface ICertPropertyFriendlyName
    {
        CONST_VTBL struct ICertPropertyFriendlyNameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) )
    ( (This)->lpVtbl -> put_PropertyId(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> Initialize(This,strFriendlyName) )
    ( (This)->lpVtbl -> get_FriendlyName(This,pValue) )
EXTERN_C const IID IID_ICertPropertyDescription;
    typedef struct ICertPropertyDescriptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertPropertyDescription * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertPropertyDescription * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertPropertyDescription * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertPropertyDescription * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertPropertyDescription * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertPropertyDescription * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertPropertyDescription * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in ICertPropertyDescription * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in ICertPropertyDescription * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertyId )(
            __RPC__in ICertPropertyDescription * This,
                                __RPC__out CERTENROLL_PROPERTYID *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_PropertyId )(
            __RPC__in ICertPropertyDescription * This,
                       CERTENROLL_PROPERTYID Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in ICertPropertyDescription * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )(
            __RPC__in ICertPropertyDescription * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )(
            __RPC__in ICertPropertyDescription * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertPropertyDescription * This,
                       __RPC__in BSTR strDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in ICertPropertyDescription * This,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } ICertPropertyDescriptionVtbl;
    interface ICertPropertyDescription
    {
        CONST_VTBL struct ICertPropertyDescriptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) )
    ( (This)->lpVtbl -> put_PropertyId(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> Initialize(This,strDescription) )
    ( (This)->lpVtbl -> get_Description(This,pValue) )
EXTERN_C const IID IID_ICertPropertyAutoEnroll;
    typedef struct ICertPropertyAutoEnrollVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertPropertyAutoEnroll * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertPropertyAutoEnroll * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertPropertyAutoEnroll * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertPropertyAutoEnroll * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertPropertyAutoEnroll * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertPropertyAutoEnroll * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertPropertyAutoEnroll * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in ICertPropertyAutoEnroll * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in ICertPropertyAutoEnroll * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertyId )(
            __RPC__in ICertPropertyAutoEnroll * This,
                                __RPC__out CERTENROLL_PROPERTYID *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_PropertyId )(
            __RPC__in ICertPropertyAutoEnroll * This,
                       CERTENROLL_PROPERTYID Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in ICertPropertyAutoEnroll * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )(
            __RPC__in ICertPropertyAutoEnroll * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )(
            __RPC__in ICertPropertyAutoEnroll * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertPropertyAutoEnroll * This,
                       __RPC__in BSTR strTemplateName);
                        HRESULT ( STDMETHODCALLTYPE *get_TemplateName )(
            __RPC__in ICertPropertyAutoEnroll * This,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } ICertPropertyAutoEnrollVtbl;
    interface ICertPropertyAutoEnroll
    {
        CONST_VTBL struct ICertPropertyAutoEnrollVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) )
    ( (This)->lpVtbl -> put_PropertyId(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> Initialize(This,strTemplateName) )
    ( (This)->lpVtbl -> get_TemplateName(This,pValue) )
EXTERN_C const IID IID_ICertPropertyRequestOriginator;
    typedef struct ICertPropertyRequestOriginatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertPropertyRequestOriginator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertPropertyRequestOriginator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertPropertyRequestOriginator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertPropertyRequestOriginator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertPropertyRequestOriginator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertPropertyRequestOriginator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertPropertyRequestOriginator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in ICertPropertyRequestOriginator * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in ICertPropertyRequestOriginator * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertyId )(
            __RPC__in ICertPropertyRequestOriginator * This,
                                __RPC__out CERTENROLL_PROPERTYID *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_PropertyId )(
            __RPC__in ICertPropertyRequestOriginator * This,
                       CERTENROLL_PROPERTYID Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in ICertPropertyRequestOriginator * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )(
            __RPC__in ICertPropertyRequestOriginator * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )(
            __RPC__in ICertPropertyRequestOriginator * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertPropertyRequestOriginator * This,
                       __RPC__in BSTR strRequestOriginator);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromLocalRequestOriginator )(
            __RPC__in ICertPropertyRequestOriginator * This);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestOriginator )(
            __RPC__in ICertPropertyRequestOriginator * This,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } ICertPropertyRequestOriginatorVtbl;
    interface ICertPropertyRequestOriginator
    {
        CONST_VTBL struct ICertPropertyRequestOriginatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) )
    ( (This)->lpVtbl -> put_PropertyId(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> Initialize(This,strRequestOriginator) )
    ( (This)->lpVtbl -> InitializeFromLocalRequestOriginator(This) )
    ( (This)->lpVtbl -> get_RequestOriginator(This,pValue) )
EXTERN_C const IID IID_ICertPropertySHA1Hash;
    typedef struct ICertPropertySHA1HashVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertPropertySHA1Hash * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertPropertySHA1Hash * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertPropertySHA1Hash * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertPropertySHA1Hash * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertPropertySHA1Hash * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertPropertySHA1Hash * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertPropertySHA1Hash * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in ICertPropertySHA1Hash * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in ICertPropertySHA1Hash * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertyId )(
            __RPC__in ICertPropertySHA1Hash * This,
                                __RPC__out CERTENROLL_PROPERTYID *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_PropertyId )(
            __RPC__in ICertPropertySHA1Hash * This,
                       CERTENROLL_PROPERTYID Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in ICertPropertySHA1Hash * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )(
            __RPC__in ICertPropertySHA1Hash * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )(
            __RPC__in ICertPropertySHA1Hash * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertPropertySHA1Hash * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strRenewalValue);
                        HRESULT ( STDMETHODCALLTYPE *get_SHA1Hash )(
            __RPC__in ICertPropertySHA1Hash * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } ICertPropertySHA1HashVtbl;
    interface ICertPropertySHA1Hash
    {
        CONST_VTBL struct ICertPropertySHA1HashVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) )
    ( (This)->lpVtbl -> put_PropertyId(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> Initialize(This,Encoding,strRenewalValue) )
    ( (This)->lpVtbl -> get_SHA1Hash(This,Encoding,pValue) )
EXTERN_C const IID IID_ICertPropertyKeyProvInfo;
    typedef struct ICertPropertyKeyProvInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertPropertyKeyProvInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertPropertyKeyProvInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertPropertyKeyProvInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertPropertyKeyProvInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertPropertyKeyProvInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertPropertyKeyProvInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertPropertyKeyProvInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in ICertPropertyKeyProvInfo * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in ICertPropertyKeyProvInfo * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertyId )(
            __RPC__in ICertPropertyKeyProvInfo * This,
                                __RPC__out CERTENROLL_PROPERTYID *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_PropertyId )(
            __RPC__in ICertPropertyKeyProvInfo * This,
                       CERTENROLL_PROPERTYID Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in ICertPropertyKeyProvInfo * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )(
            __RPC__in ICertPropertyKeyProvInfo * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )(
            __RPC__in ICertPropertyKeyProvInfo * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertPropertyKeyProvInfo * This,
                       __RPC__in_opt IX509PrivateKey *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )(
            __RPC__in ICertPropertyKeyProvInfo * This,
                                __RPC__deref_out_opt IX509PrivateKey **ppValue);
        END_INTERFACE
    } ICertPropertyKeyProvInfoVtbl;
    interface ICertPropertyKeyProvInfo
    {
        CONST_VTBL struct ICertPropertyKeyProvInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) )
    ( (This)->lpVtbl -> put_PropertyId(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> Initialize(This,pValue) )
    ( (This)->lpVtbl -> get_PrivateKey(This,ppValue) )
EXTERN_C const IID IID_ICertPropertyArchived;
    typedef struct ICertPropertyArchivedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertPropertyArchived * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertPropertyArchived * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertPropertyArchived * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertPropertyArchived * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertPropertyArchived * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertPropertyArchived * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertPropertyArchived * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in ICertPropertyArchived * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in ICertPropertyArchived * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertyId )(
            __RPC__in ICertPropertyArchived * This,
                                __RPC__out CERTENROLL_PROPERTYID *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_PropertyId )(
            __RPC__in ICertPropertyArchived * This,
                       CERTENROLL_PROPERTYID Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in ICertPropertyArchived * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )(
            __RPC__in ICertPropertyArchived * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )(
            __RPC__in ICertPropertyArchived * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertPropertyArchived * This,
                       VARIANT_BOOL ArchivedValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Archived )(
            __RPC__in ICertPropertyArchived * This,
                                __RPC__out VARIANT_BOOL *pValue);
        END_INTERFACE
    } ICertPropertyArchivedVtbl;
    interface ICertPropertyArchived
    {
        CONST_VTBL struct ICertPropertyArchivedVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) )
    ( (This)->lpVtbl -> put_PropertyId(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> Initialize(This,ArchivedValue) )
    ( (This)->lpVtbl -> get_Archived(This,pValue) )
EXTERN_C const IID IID_ICertPropertyBackedUp;
    typedef struct ICertPropertyBackedUpVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertPropertyBackedUp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertPropertyBackedUp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertPropertyBackedUp * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertPropertyBackedUp * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertPropertyBackedUp * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertPropertyBackedUp * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertPropertyBackedUp * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in ICertPropertyBackedUp * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in ICertPropertyBackedUp * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertyId )(
            __RPC__in ICertPropertyBackedUp * This,
                                __RPC__out CERTENROLL_PROPERTYID *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_PropertyId )(
            __RPC__in ICertPropertyBackedUp * This,
                       CERTENROLL_PROPERTYID Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in ICertPropertyBackedUp * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )(
            __RPC__in ICertPropertyBackedUp * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )(
            __RPC__in ICertPropertyBackedUp * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCurrentTime )(
            __RPC__in ICertPropertyBackedUp * This,
                       VARIANT_BOOL BackedUpValue);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertPropertyBackedUp * This,
                       VARIANT_BOOL BackedUpValue,
                       DATE Date);
                        HRESULT ( STDMETHODCALLTYPE *get_BackedUpValue )(
            __RPC__in ICertPropertyBackedUp * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_BackedUpTime )(
            __RPC__in ICertPropertyBackedUp * This,
                                __RPC__out DATE *pDate);
        END_INTERFACE
    } ICertPropertyBackedUpVtbl;
    interface ICertPropertyBackedUp
    {
        CONST_VTBL struct ICertPropertyBackedUpVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) )
    ( (This)->lpVtbl -> put_PropertyId(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> InitializeFromCurrentTime(This,BackedUpValue) )
    ( (This)->lpVtbl -> Initialize(This,BackedUpValue,Date) )
    ( (This)->lpVtbl -> get_BackedUpValue(This,pValue) )
    ( (This)->lpVtbl -> get_BackedUpTime(This,pDate) )
EXTERN_C const IID IID_ICertPropertyEnrollment;
    typedef struct ICertPropertyEnrollmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertPropertyEnrollment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertPropertyEnrollment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertPropertyEnrollment * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertPropertyEnrollment * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertPropertyEnrollment * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertPropertyEnrollment * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertPropertyEnrollment * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in ICertPropertyEnrollment * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in ICertPropertyEnrollment * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertyId )(
            __RPC__in ICertPropertyEnrollment * This,
                                __RPC__out CERTENROLL_PROPERTYID *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_PropertyId )(
            __RPC__in ICertPropertyEnrollment * This,
                       CERTENROLL_PROPERTYID Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in ICertPropertyEnrollment * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )(
            __RPC__in ICertPropertyEnrollment * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )(
            __RPC__in ICertPropertyEnrollment * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertPropertyEnrollment * This,
                       LONG RequestId,
                       __RPC__in BSTR strCADnsName,
                       __RPC__in BSTR strCAName,
                                     __RPC__in BSTR strFriendlyName);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
            __RPC__in ICertPropertyEnrollment * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CADnsName )(
            __RPC__in ICertPropertyEnrollment * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CAName )(
            __RPC__in ICertPropertyEnrollment * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in ICertPropertyEnrollment * This,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } ICertPropertyEnrollmentVtbl;
    interface ICertPropertyEnrollment
    {
        CONST_VTBL struct ICertPropertyEnrollmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) )
    ( (This)->lpVtbl -> put_PropertyId(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> Initialize(This,RequestId,strCADnsName,strCAName,strFriendlyName) )
    ( (This)->lpVtbl -> get_RequestId(This,pValue) )
    ( (This)->lpVtbl -> get_CADnsName(This,pValue) )
    ( (This)->lpVtbl -> get_CAName(This,pValue) )
    ( (This)->lpVtbl -> get_FriendlyName(This,pValue) )
EXTERN_C const IID IID_ICertPropertyRenewal;
    typedef struct ICertPropertyRenewalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertPropertyRenewal * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertPropertyRenewal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertPropertyRenewal * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertPropertyRenewal * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertPropertyRenewal * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertPropertyRenewal * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertPropertyRenewal * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in ICertPropertyRenewal * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in ICertPropertyRenewal * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertyId )(
            __RPC__in ICertPropertyRenewal * This,
                                __RPC__out CERTENROLL_PROPERTYID *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_PropertyId )(
            __RPC__in ICertPropertyRenewal * This,
                       CERTENROLL_PROPERTYID Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in ICertPropertyRenewal * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )(
            __RPC__in ICertPropertyRenewal * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )(
            __RPC__in ICertPropertyRenewal * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertPropertyRenewal * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strRenewalValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificateHash )(
            __RPC__in ICertPropertyRenewal * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
                        HRESULT ( STDMETHODCALLTYPE *get_Renewal )(
            __RPC__in ICertPropertyRenewal * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } ICertPropertyRenewalVtbl;
    interface ICertPropertyRenewal
    {
        CONST_VTBL struct ICertPropertyRenewalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) )
    ( (This)->lpVtbl -> put_PropertyId(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> Initialize(This,Encoding,strRenewalValue) )
    ( (This)->lpVtbl -> InitializeFromCertificateHash(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> get_Renewal(This,Encoding,pValue) )
EXTERN_C const IID IID_ICertPropertyArchivedKeyHash;
    typedef struct ICertPropertyArchivedKeyHashVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertPropertyArchivedKeyHash * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertPropertyArchivedKeyHash * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertPropertyArchivedKeyHash * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertPropertyArchivedKeyHash * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertPropertyArchivedKeyHash * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertPropertyArchivedKeyHash * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertPropertyArchivedKeyHash * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in ICertPropertyArchivedKeyHash * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in ICertPropertyArchivedKeyHash * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertyId )(
            __RPC__in ICertPropertyArchivedKeyHash * This,
                                __RPC__out CERTENROLL_PROPERTYID *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_PropertyId )(
            __RPC__in ICertPropertyArchivedKeyHash * This,
                       CERTENROLL_PROPERTYID Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in ICertPropertyArchivedKeyHash * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )(
            __RPC__in ICertPropertyArchivedKeyHash * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )(
            __RPC__in ICertPropertyArchivedKeyHash * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertPropertyArchivedKeyHash * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strArchivedKeyHashValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ArchivedKeyHash )(
            __RPC__in ICertPropertyArchivedKeyHash * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } ICertPropertyArchivedKeyHashVtbl;
    interface ICertPropertyArchivedKeyHash
    {
        CONST_VTBL struct ICertPropertyArchivedKeyHashVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) )
    ( (This)->lpVtbl -> put_PropertyId(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> Initialize(This,Encoding,strArchivedKeyHashValue) )
    ( (This)->lpVtbl -> get_ArchivedKeyHash(This,Encoding,pValue) )
typedef
enum EnrollmentPolicyServerPropertyFlags
    {
        DefaultNone = 0,
        DefaultPolicyServer = 0x1
    } EnrollmentPolicyServerPropertyFlags;
typedef
enum PolicyServerUrlFlags
    {
        PsfNone = 0,
        PsfLocationGroupPolicy = 1,
        PsfLocationRegistry = 2,
        PsfUseClientId = 4,
        PsfAutoEnrollmentEnabled = 16,
        PsfAllowUnTrustedCA = 32
    } PolicyServerUrlFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0061_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0061_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertPropertyEnrollmentPolicyServer;
    typedef struct ICertPropertyEnrollmentPolicyServerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertPropertyEnrollmentPolicyServer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strEncodedData);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertyId )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                                __RPC__out CERTENROLL_PROPERTYID *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_PropertyId )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                       CERTENROLL_PROPERTYID Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                       VARIANT_BOOL MachineContext,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                       EnrollmentPolicyServerPropertyFlags PropertyFlags,
                       X509EnrollmentAuthFlags AuthFlags,
                       X509EnrollmentAuthFlags EnrollmentServerAuthFlags,
                       PolicyServerUrlFlags UrlFlags,
                       __RPC__in BSTR strRequestId,
                       __RPC__in BSTR strUrl,
                       __RPC__in BSTR strId,
                       __RPC__in BSTR strEnrollmentServerUrl);
        HRESULT ( STDMETHODCALLTYPE *GetPolicyServerUrl )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetPolicyServerId )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetEnrollmentServerUrl )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetRequestIdString )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyFlags )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                                __RPC__out EnrollmentPolicyServerPropertyFlags *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetUrlFlags )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                                __RPC__out PolicyServerUrlFlags *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetAuthentication )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                                __RPC__out X509EnrollmentAuthFlags *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetEnrollmentServerAuthentication )(
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
                                __RPC__out X509EnrollmentAuthFlags *pValue);
        END_INTERFACE
    } ICertPropertyEnrollmentPolicyServerVtbl;
    interface ICertPropertyEnrollmentPolicyServer
    {
        CONST_VTBL struct ICertPropertyEnrollmentPolicyServerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) )
    ( (This)->lpVtbl -> put_PropertyId(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
    ( (This)->lpVtbl -> Initialize(This,PropertyFlags,AuthFlags,EnrollmentServerAuthFlags,UrlFlags,strRequestId,strUrl,strId,strEnrollmentServerUrl) )
    ( (This)->lpVtbl -> GetPolicyServerUrl(This,pValue) )
    ( (This)->lpVtbl -> GetPolicyServerId(This,pValue) )
    ( (This)->lpVtbl -> GetEnrollmentServerUrl(This,pValue) )
    ( (This)->lpVtbl -> GetRequestIdString(This,pValue) )
    ( (This)->lpVtbl -> GetPropertyFlags(This,pValue) )
    ( (This)->lpVtbl -> GetUrlFlags(This,pValue) )
    ( (This)->lpVtbl -> GetAuthentication(This,pValue) )
    ( (This)->lpVtbl -> GetEnrollmentServerAuthentication(This,pValue) )
EXTERN_C const IID IID_IX509SignatureInformation;
    typedef struct IX509SignatureInformationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509SignatureInformation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509SignatureInformation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509SignatureInformation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509SignatureInformation * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509SignatureInformation * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509SignatureInformation * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509SignatureInformation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IX509SignatureInformation * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IX509SignatureInformation * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_PublicKeyAlgorithm )(
            __RPC__in IX509SignatureInformation * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_PublicKeyAlgorithm )(
            __RPC__in IX509SignatureInformation * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
            __RPC__in IX509SignatureInformation * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Parameters )(
            __RPC__in IX509SignatureInformation * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )(
            __RPC__in IX509SignatureInformation * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )(
            __RPC__in IX509SignatureInformation * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithmSet )(
            __RPC__in IX509SignatureInformation * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_NullSigned )(
            __RPC__in IX509SignatureInformation * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_NullSigned )(
            __RPC__in IX509SignatureInformation * This,
                       VARIANT_BOOL Value);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureAlgorithm )(
            __RPC__in IX509SignatureInformation * This,
                       VARIANT_BOOL Pkcs7Signature,
                       VARIANT_BOOL SignatureKey,
                                __RPC__deref_out_opt IObjectId **ppValue);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultValues )(
            __RPC__in IX509SignatureInformation * This);
        END_INTERFACE
    } IX509SignatureInformationVtbl;
    interface IX509SignatureInformation
    {
        CONST_VTBL struct IX509SignatureInformationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_PublicKeyAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_PublicKeyAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_Parameters(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_Parameters(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithmSet(This,pValue) )
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) )
    ( (This)->lpVtbl -> put_NullSigned(This,Value) )
    ( (This)->lpVtbl -> GetSignatureAlgorithm(This,Pkcs7Signature,SignatureKey,ppValue) )
    ( (This)->lpVtbl -> SetDefaultValues(This) )
EXTERN_C const IID IID_ISignerCertificate;
    typedef struct ISignerCertificateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISignerCertificate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISignerCertificate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISignerCertificate * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISignerCertificate * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISignerCertificate * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISignerCertificate * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISignerCertificate * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ISignerCertificate * This,
                       VARIANT_BOOL MachineContext,
                       X509PrivateKeyVerify VerifyType,
                       EncodingType Encoding,
                       __RPC__in BSTR strCertificate);
                        HRESULT ( STDMETHODCALLTYPE *get_Certificate )(
            __RPC__in ISignerCertificate * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )(
            __RPC__in ISignerCertificate * This,
                                __RPC__deref_out_opt IX509PrivateKey **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in ISignerCertificate * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in ISignerCertificate * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in ISignerCertificate * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in ISignerCertificate * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )(
            __RPC__in ISignerCertificate * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )(
            __RPC__in ISignerCertificate * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *put_Pin )(
            __RPC__in ISignerCertificate * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )(
            __RPC__in ISignerCertificate * This,
                                __RPC__deref_out_opt IX509SignatureInformation **ppValue);
        END_INTERFACE
    } ISignerCertificateVtbl;
    interface ISignerCertificate
    {
        CONST_VTBL struct ISignerCertificateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,MachineContext,VerifyType,Encoding,strCertificate) )
    ( (This)->lpVtbl -> get_Certificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_PrivateKey(This,ppValue) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) )
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
    ( (This)->lpVtbl -> put_Pin(This,Value) )
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
EXTERN_C const IID IID_ISignerCertificates;
    typedef struct ISignerCertificatesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISignerCertificates * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISignerCertificates * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISignerCertificates * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISignerCertificates * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISignerCertificates * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISignerCertificates * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISignerCertificates * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in ISignerCertificates * This,
                       LONG Index,
                                __RPC__deref_out_opt ISignerCertificate **pVal);
                                                HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISignerCertificates * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISignerCertificates * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                                       HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ISignerCertificates * This,
                       __RPC__in_opt ISignerCertificate *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ISignerCertificates * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ISignerCertificates * This);
        HRESULT ( STDMETHODCALLTYPE *Find )(
            __RPC__in ISignerCertificates * This,
                       __RPC__in_opt ISignerCertificate *pSignerCert,
                                __RPC__out LONG *piSignerCert);
        END_INTERFACE
    } ISignerCertificatesVtbl;
    interface ISignerCertificates
    {
        CONST_VTBL struct ISignerCertificatesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> Find(This,pSignerCert,piSignerCert) )
EXTERN_C const IID IID_IX509NameValuePair;
    typedef struct IX509NameValuePairVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509NameValuePair * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509NameValuePair * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509NameValuePair * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509NameValuePair * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509NameValuePair * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509NameValuePair * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509NameValuePair * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509NameValuePair * This,
                       __RPC__in BSTR strName,
                       __RPC__in BSTR strValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IX509NameValuePair * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IX509NameValuePair * This,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509NameValuePairVtbl;
    interface IX509NameValuePair
    {
        CONST_VTBL struct IX509NameValuePairVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,strName,strValue) )
    ( (This)->lpVtbl -> get_Value(This,pValue) )
    ( (This)->lpVtbl -> get_Name(This,pValue) )
EXTERN_C const IID IID_IX509NameValuePairs;
    typedef struct IX509NameValuePairsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509NameValuePairs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509NameValuePairs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509NameValuePairs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509NameValuePairs * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509NameValuePairs * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509NameValuePairs * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509NameValuePairs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in IX509NameValuePairs * This,
                       LONG Index,
                                __RPC__deref_out_opt IX509NameValuePair **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IX509NameValuePairs * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IX509NameValuePairs * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IX509NameValuePairs * This,
                       __RPC__in_opt IX509NameValuePair *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IX509NameValuePairs * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IX509NameValuePairs * This);
        END_INTERFACE
    } IX509NameValuePairsVtbl;
    interface IX509NameValuePairs
    {
        CONST_VTBL struct IX509NameValuePairsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
typedef
enum EnrollmentTemplateProperty
    {
        TemplatePropCommonName = 1,
        TemplatePropFriendlyName = 2,
        TemplatePropEKUs = 3,
        TemplatePropCryptoProviders = 4,
        TemplatePropMajorRevision = 5,
        TemplatePropDescription = 6,
        TemplatePropKeySpec = 7,
        TemplatePropSchemaVersion = 8,
        TemplatePropMinorRevision = 9,
        TemplatePropRASignatureCount = 10,
        TemplatePropMinimumKeySize = 11,
        TemplatePropOID = 12,
        TemplatePropSupersede = 13,
        TemplatePropRACertificatePolicies = 14,
        TemplatePropRAEKUs = 15,
        TemplatePropCertificatePolicies = 16,
        TemplatePropV1ApplicationPolicy = 17,
        TemplatePropAsymmetricAlgorithm = 18,
        TemplatePropKeySecurityDescriptor = 19,
        TemplatePropSymmetricAlgorithm = 20,
        TemplatePropSymmetricKeyLength = 21,
        TemplatePropHashAlgorithm = 22,
        TemplatePropKeyUsage = 23,
        TemplatePropEnrollmentFlags = 24,
        TemplatePropSubjectNameFlags = 25,
        TemplatePropPrivateKeyFlags = 26,
        TemplatePropGeneralFlags = 27,
        TemplatePropSecurityDescriptor = 28,
        TemplatePropExtensions = 29,
        TemplatePropValidityPeriod = 30,
        TemplatePropRenewalPeriod = 31
    } EnrollmentTemplateProperty;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0067_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0067_v0_0_s_ifspec;
EXTERN_C const IID IID_IX509CertificateTemplate;
    typedef struct IX509CertificateTemplateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateTemplate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateTemplate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateTemplate * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateTemplate * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateTemplate * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateTemplate * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateTemplate * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Property )(
            __RPC__in IX509CertificateTemplate * This,
                       enum EnrollmentTemplateProperty property,
                                __RPC__out VARIANT *pValue);
        END_INTERFACE
    } IX509CertificateTemplateVtbl;
    interface IX509CertificateTemplate
    {
        CONST_VTBL struct IX509CertificateTemplateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Property(This,property,pValue) )
EXTERN_C const IID IID_IX509CertificateTemplates;
    typedef struct IX509CertificateTemplatesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateTemplates * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateTemplates * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateTemplates * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateTemplates * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateTemplates * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateTemplates * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateTemplates * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in IX509CertificateTemplates * This,
                       LONG Index,
                                __RPC__deref_out_opt IX509CertificateTemplate **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IX509CertificateTemplates * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IX509CertificateTemplates * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IX509CertificateTemplates * This,
                       __RPC__in_opt IX509CertificateTemplate *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IX509CertificateTemplates * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IX509CertificateTemplates * This);
                        HRESULT ( STDMETHODCALLTYPE *get_ItemByName )(
            __RPC__in IX509CertificateTemplates * This,
                       __RPC__in BSTR bstrName,
                                __RPC__deref_out_opt IX509CertificateTemplate **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ItemByOid )(
            __RPC__in IX509CertificateTemplates * This,
                       __RPC__in_opt IObjectId *pOid,
                                __RPC__deref_out_opt IX509CertificateTemplate **ppValue);
        END_INTERFACE
    } IX509CertificateTemplatesVtbl;
    interface IX509CertificateTemplates
    {
        CONST_VTBL struct IX509CertificateTemplatesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> get_ItemByName(This,bstrName,ppValue) )
    ( (This)->lpVtbl -> get_ItemByOid(This,pOid,ppValue) )
typedef
enum CommitTemplateFlags
    {
        CommitFlagSaveTemplateGenerateOID = 1,
        CommitFlagSaveTemplateUseCurrentOID = 2,
        CommitFlagSaveTemplateOverwrite = 3,
        CommitFlagDeleteTemplate = 4
    } CommitTemplateFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0069_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0069_v0_0_s_ifspec;
EXTERN_C const IID IID_IX509CertificateTemplateWritable;
    typedef struct IX509CertificateTemplateWritableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateTemplateWritable * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateTemplateWritable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateTemplateWritable * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateTemplateWritable * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateTemplateWritable * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateTemplateWritable * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateTemplateWritable * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509CertificateTemplateWritable * This,
                       __RPC__in_opt IX509CertificateTemplate *pValue);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IX509CertificateTemplateWritable * This,
                       CommitTemplateFlags commitFlags,
                       __RPC__in BSTR strServerContext);
                        HRESULT ( STDMETHODCALLTYPE *get_Property )(
            __RPC__in IX509CertificateTemplateWritable * This,
                       enum EnrollmentTemplateProperty property,
                                __RPC__out VARIANT *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Property )(
            __RPC__in IX509CertificateTemplateWritable * This,
                       enum EnrollmentTemplateProperty property,
                       VARIANT value);
                        HRESULT ( STDMETHODCALLTYPE *get_Template )(
            __RPC__in IX509CertificateTemplateWritable * This,
                                __RPC__deref_out_opt IX509CertificateTemplate **ppValue);
        END_INTERFACE
    } IX509CertificateTemplateWritableVtbl;
    interface IX509CertificateTemplateWritable
    {
        CONST_VTBL struct IX509CertificateTemplateWritableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pValue) )
    ( (This)->lpVtbl -> Commit(This,commitFlags,strServerContext) )
    ( (This)->lpVtbl -> get_Property(This,property,pValue) )
    ( (This)->lpVtbl -> put_Property(This,property,value) )
    ( (This)->lpVtbl -> get_Template(This,ppValue) )
typedef
enum EnrollmentCAProperty
    {
        CAPropCommonName = 1,
        CAPropDistinguishedName = 2,
        CAPropSanitizedName = 3,
        CAPropSanitizedShortName = 4,
        CAPropDNSName = 5,
        CAPropCertificateTypes = 6,
        CAPropCertificate = 7,
        CAPropDescription = 8,
        CAPropWebServers = 9,
        CAPropSiteName = 10,
        CAPropSecurity = 11,
        CAPropRenewalOnly = 12
    } EnrollmentCAProperty;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0070_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0070_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertificationAuthority;
    typedef struct ICertificationAuthorityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertificationAuthority * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertificationAuthority * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertificationAuthority * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertificationAuthority * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertificationAuthority * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertificationAuthority * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertificationAuthority * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Property )(
            __RPC__in ICertificationAuthority * This,
                       enum EnrollmentCAProperty property,
                                __RPC__out VARIANT *pValue);
        END_INTERFACE
    } ICertificationAuthorityVtbl;
    interface ICertificationAuthority
    {
        CONST_VTBL struct ICertificationAuthorityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Property(This,property,pValue) )
EXTERN_C const IID IID_ICertificationAuthorities;
    typedef struct ICertificationAuthoritiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertificationAuthorities * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertificationAuthorities * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertificationAuthorities * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertificationAuthorities * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertificationAuthorities * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertificationAuthorities * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertificationAuthorities * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in ICertificationAuthorities * This,
                       LONG Index,
                                __RPC__deref_out_opt ICertificationAuthority **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ICertificationAuthorities * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ICertificationAuthorities * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ICertificationAuthorities * This,
                       __RPC__in_opt ICertificationAuthority *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ICertificationAuthorities * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ICertificationAuthorities * This);
        HRESULT ( STDMETHODCALLTYPE *ComputeSiteCosts )(
            __RPC__in ICertificationAuthorities * This);
                        HRESULT ( STDMETHODCALLTYPE *get_ItemByName )(
            __RPC__in ICertificationAuthorities * This,
                       __RPC__in BSTR strName,
                                __RPC__deref_out_opt ICertificationAuthority **ppValue);
        END_INTERFACE
    } ICertificationAuthoritiesVtbl;
    interface ICertificationAuthorities
    {
        CONST_VTBL struct ICertificationAuthoritiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> ComputeSiteCosts(This) )
    ( (This)->lpVtbl -> get_ItemByName(This,strName,ppValue) )
typedef
enum X509EnrollmentPolicyLoadOption
    {
        LoadOptionDefault = 0,
        LoadOptionCacheOnly = 1,
        LoadOptionReload = 2,
        LoadOptionRegisterForADChanges = 4
    } X509EnrollmentPolicyLoadOption;
enum EnrollmentPolicyFlags
    {
        DisableGroupPolicyList = 0x2,
        DisableUserServerList = 0x4
    } ;
typedef
enum PolicyServerUrlPropertyID
    {
        PsPolicyID = 0,
        PsFriendlyName = 1
    } PolicyServerUrlPropertyID;
typedef
enum X509EnrollmentPolicyExportFlags
    {
        ExportTemplates = 0x1,
        ExportOIDs = 0x2,
        ExportCAs = 0x4
    } X509EnrollmentPolicyExportFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0072_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0072_v0_0_s_ifspec;
EXTERN_C const IID IID_IX509EnrollmentPolicyServer;
    typedef struct IX509EnrollmentPolicyServerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509EnrollmentPolicyServer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509EnrollmentPolicyServer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509EnrollmentPolicyServer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                       __RPC__in BSTR bstrPolicyServerUrl,
                       __RPC__in BSTR bstrPolicyServerId,
                       X509EnrollmentAuthFlags authFlags,
                       VARIANT_BOOL fIsUnTrusted,
                       X509CertificateEnrollmentContext context);
        HRESULT ( STDMETHODCALLTYPE *LoadPolicy )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                       X509EnrollmentPolicyLoadOption option);
        HRESULT ( STDMETHODCALLTYPE *GetTemplates )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                                __RPC__deref_out_opt IX509CertificateTemplates **pTemplates);
        HRESULT ( STDMETHODCALLTYPE *GetCAsForTemplate )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                       __RPC__in_opt IX509CertificateTemplate *pTemplate,
                                __RPC__deref_out_opt ICertificationAuthorities **ppCAs);
        HRESULT ( STDMETHODCALLTYPE *GetCAs )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                                __RPC__deref_out_opt ICertificationAuthorities **ppCAs);
        HRESULT ( STDMETHODCALLTYPE *Validate )(
            __RPC__in IX509EnrollmentPolicyServer * This);
        HRESULT ( STDMETHODCALLTYPE *GetCustomOids )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                                __RPC__deref_out_opt IObjectIds **ppObjectIds);
        HRESULT ( STDMETHODCALLTYPE *GetNextUpdateTime )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                                __RPC__out DATE *pDate);
        HRESULT ( STDMETHODCALLTYPE *GetLastUpdateTime )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                                __RPC__out DATE *pDate);
        HRESULT ( STDMETHODCALLTYPE *GetPolicyServerUrl )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetPolicyServerId )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetIsDefaultCEP )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                                __RPC__out VARIANT_BOOL *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetUseClientId )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                                __RPC__out VARIANT_BOOL *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetAllowUnTrustedCA )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                                __RPC__out VARIANT_BOOL *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetCachePath )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetCacheDir )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetAuthFlags )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                                __RPC__out X509EnrollmentAuthFlags *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetCredential )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                       LONG hWndParent,
                       X509EnrollmentAuthFlags flag,
                       __RPC__in BSTR strCredential,
                       __RPC__in BSTR strPassword);
        HRESULT ( STDMETHODCALLTYPE *QueryChanges )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                                __RPC__out VARIANT_BOOL *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeImport )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                       VARIANT val);
        HRESULT ( STDMETHODCALLTYPE *Export )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                       X509EnrollmentPolicyExportFlags exportFlags,
                                __RPC__out VARIANT *pVal);
                        HRESULT ( STDMETHODCALLTYPE *get_Cost )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                                __RPC__out DWORD *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Cost )(
            __RPC__in IX509EnrollmentPolicyServer * This,
                       DWORD value);
        END_INTERFACE
    } IX509EnrollmentPolicyServerVtbl;
    interface IX509EnrollmentPolicyServer
    {
        CONST_VTBL struct IX509EnrollmentPolicyServerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,bstrPolicyServerUrl,bstrPolicyServerId,authFlags,fIsUnTrusted,context) )
    ( (This)->lpVtbl -> LoadPolicy(This,option) )
    ( (This)->lpVtbl -> GetTemplates(This,pTemplates) )
    ( (This)->lpVtbl -> GetCAsForTemplate(This,pTemplate,ppCAs) )
    ( (This)->lpVtbl -> GetCAs(This,ppCAs) )
    ( (This)->lpVtbl -> Validate(This) )
    ( (This)->lpVtbl -> GetCustomOids(This,ppObjectIds) )
    ( (This)->lpVtbl -> GetNextUpdateTime(This,pDate) )
    ( (This)->lpVtbl -> GetLastUpdateTime(This,pDate) )
    ( (This)->lpVtbl -> GetPolicyServerUrl(This,pValue) )
    ( (This)->lpVtbl -> GetPolicyServerId(This,pValue) )
    ( (This)->lpVtbl -> GetFriendlyName(This,pValue) )
    ( (This)->lpVtbl -> GetIsDefaultCEP(This,pValue) )
    ( (This)->lpVtbl -> GetUseClientId(This,pValue) )
    ( (This)->lpVtbl -> GetAllowUnTrustedCA(This,pValue) )
    ( (This)->lpVtbl -> GetCachePath(This,pValue) )
    ( (This)->lpVtbl -> GetCacheDir(This,pValue) )
    ( (This)->lpVtbl -> GetAuthFlags(This,pValue) )
    ( (This)->lpVtbl -> SetCredential(This,hWndParent,flag,strCredential,strPassword) )
    ( (This)->lpVtbl -> QueryChanges(This,pValue) )
    ( (This)->lpVtbl -> InitializeImport(This,val) )
    ( (This)->lpVtbl -> Export(This,exportFlags,pVal) )
    ( (This)->lpVtbl -> get_Cost(This,pValue) )
    ( (This)->lpVtbl -> put_Cost(This,value) )
EXTERN_C const IID IID_IX509PolicyServerUrl;
    typedef struct IX509PolicyServerUrlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509PolicyServerUrl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509PolicyServerUrl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509PolicyServerUrl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509PolicyServerUrl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509PolicyServerUrl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509PolicyServerUrl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509PolicyServerUrl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509PolicyServerUrl * This,
                       X509CertificateEnrollmentContext context);
                        HRESULT ( STDMETHODCALLTYPE *get_Url )(
            __RPC__in IX509PolicyServerUrl * This,
                                __RPC__deref_out_opt BSTR *ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Url )(
            __RPC__in IX509PolicyServerUrl * This,
                       __RPC__in BSTR pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Default )(
            __RPC__in IX509PolicyServerUrl * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Default )(
            __RPC__in IX509PolicyServerUrl * This,
                       VARIANT_BOOL value);
                        HRESULT ( STDMETHODCALLTYPE *get_Flags )(
            __RPC__in IX509PolicyServerUrl * This,
                                __RPC__out PolicyServerUrlFlags *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Flags )(
            __RPC__in IX509PolicyServerUrl * This,
                       PolicyServerUrlFlags Flags);
                        HRESULT ( STDMETHODCALLTYPE *get_AuthFlags )(
            __RPC__in IX509PolicyServerUrl * This,
                                __RPC__out X509EnrollmentAuthFlags *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_AuthFlags )(
            __RPC__in IX509PolicyServerUrl * This,
                       X509EnrollmentAuthFlags Flags);
                        HRESULT ( STDMETHODCALLTYPE *get_Cost )(
            __RPC__in IX509PolicyServerUrl * This,
                                __RPC__out DWORD *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Cost )(
            __RPC__in IX509PolicyServerUrl * This,
                       DWORD value);
        HRESULT ( STDMETHODCALLTYPE *GetStringProperty )(
            __RPC__in IX509PolicyServerUrl * This,
                       PolicyServerUrlPropertyID propertyId,
                                __RPC__deref_out_opt BSTR *ppValue);
        HRESULT ( STDMETHODCALLTYPE *SetStringProperty )(
            __RPC__in IX509PolicyServerUrl * This,
                       PolicyServerUrlPropertyID propertyId,
                       __RPC__in BSTR pValue);
        HRESULT ( STDMETHODCALLTYPE *UpdateRegistry )(
            __RPC__in IX509PolicyServerUrl * This,
                       X509CertificateEnrollmentContext context);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromRegistry )(
            __RPC__in IX509PolicyServerUrl * This,
                       X509CertificateEnrollmentContext context);
        END_INTERFACE
    } IX509PolicyServerUrlVtbl;
    interface IX509PolicyServerUrl
    {
        CONST_VTBL struct IX509PolicyServerUrlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,context) )
    ( (This)->lpVtbl -> get_Url(This,ppValue) )
    ( (This)->lpVtbl -> put_Url(This,pValue) )
    ( (This)->lpVtbl -> get_Default(This,pValue) )
    ( (This)->lpVtbl -> put_Default(This,value) )
    ( (This)->lpVtbl -> get_Flags(This,pValue) )
    ( (This)->lpVtbl -> put_Flags(This,Flags) )
    ( (This)->lpVtbl -> get_AuthFlags(This,pValue) )
    ( (This)->lpVtbl -> put_AuthFlags(This,Flags) )
    ( (This)->lpVtbl -> get_Cost(This,pValue) )
    ( (This)->lpVtbl -> put_Cost(This,value) )
    ( (This)->lpVtbl -> GetStringProperty(This,propertyId,ppValue) )
    ( (This)->lpVtbl -> SetStringProperty(This,propertyId,pValue) )
    ( (This)->lpVtbl -> UpdateRegistry(This,context) )
    ( (This)->lpVtbl -> RemoveFromRegistry(This,context) )
EXTERN_C const IID IID_IX509PolicyServerListManager;
    typedef struct IX509PolicyServerListManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509PolicyServerListManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509PolicyServerListManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509PolicyServerListManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509PolicyServerListManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509PolicyServerListManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509PolicyServerListManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509PolicyServerListManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in IX509PolicyServerListManager * This,
                       LONG Index,
                                __RPC__deref_out_opt IX509PolicyServerUrl **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IX509PolicyServerListManager * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IX509PolicyServerListManager * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IX509PolicyServerListManager * This,
                       __RPC__in_opt IX509PolicyServerUrl *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IX509PolicyServerListManager * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IX509PolicyServerListManager * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509PolicyServerListManager * This,
                       X509CertificateEnrollmentContext context,
                       PolicyServerUrlFlags Flags);
        END_INTERFACE
    } IX509PolicyServerListManagerVtbl;
    interface IX509PolicyServerListManager
    {
        CONST_VTBL struct IX509PolicyServerListManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> Initialize(This,context,Flags) )
typedef
enum X509RequestType
    {
        TypeAny = 0,
        TypePkcs10 = 1,
        TypePkcs7 = 2,
        TypeCmc = 3,
        TypeCertificate = 4
    } X509RequestType;
typedef
enum X509RequestInheritOptions
    {
        InheritDefault = 0,
        InheritNewDefaultKey = 0x1,
        InheritNewSimilarKey = 0x2,
        InheritPrivateKey = 0x3,
        InheritPublicKey = 0x4,
        InheritKeyMask = 0xf,
        InheritNone = 0x10,
        InheritRenewalCertificateFlag = 0x20,
        InheritTemplateFlag = 0x40,
        InheritSubjectFlag = 0x80,
        InheritExtensionsFlag = 0x100,
        InheritSubjectAltNameFlag = 0x200,
        InheritValidityPeriodFlag = 0x400,
        InheritReserved80000000 = 0x80000000
    } X509RequestInheritOptions;
typedef
enum InnerRequestLevel
    {
        LevelInnermost = 0,
        LevelNext = 1
    } InnerRequestLevel;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0075_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0075_v0_0_s_ifspec;
EXTERN_C const IID IID_IX509CertificateRequest;
    typedef struct IX509CertificateRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateRequest * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateRequest * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateRequest * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateRequest * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509CertificateRequest * This,
                       X509CertificateEnrollmentContext Context);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in IX509CertificateRequest * This);
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )(
            __RPC__in IX509CertificateRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )(
            __RPC__in IX509CertificateRequest * This,
                       InnerRequestLevel Level,
                                __RPC__deref_out_opt IX509CertificateRequest **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IX509CertificateRequest * This,
                                __RPC__out X509RequestType *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )(
            __RPC__in IX509CertificateRequest * This,
                                __RPC__out X509CertificateEnrollmentContext *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509CertificateRequest * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509CertificateRequest * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IX509CertificateRequest * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IX509CertificateRequest * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )(
            __RPC__in IX509CertificateRequest * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )(
            __RPC__in IX509CertificateRequest * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )(
            __RPC__in IX509CertificateRequest * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )(
            __RPC__in IX509CertificateRequest * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )(
            __RPC__in IX509CertificateRequest * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )(
            __RPC__in IX509CertificateRequest * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
            __RPC__in IX509CertificateRequest * This,
                                __RPC__out RequestClientInfoClientId *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ClientId )(
            __RPC__in IX509CertificateRequest * This,
                       RequestClientInfoClientId Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CspInformations )(
            __RPC__in IX509CertificateRequest * This,
                                __RPC__deref_out_opt ICspInformations **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_CspInformations )(
            __RPC__in IX509CertificateRequest * This,
                       __RPC__in_opt ICspInformations *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IX509CertificateRequest * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IX509CertificateRequest * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequest * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequest * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509CertificateRequest * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509CertificateRequestVtbl;
    interface IX509CertificateRequest
    {
        CONST_VTBL struct IX509CertificateRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,Context) )
    ( (This)->lpVtbl -> Encode(This) )
    ( (This)->lpVtbl -> ResetForEncode(This) )
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
    ( (This)->lpVtbl -> get_Type(This,pValue) )
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) )
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_ClientId(This,pValue) )
    ( (This)->lpVtbl -> put_ClientId(This,Value) )
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
typedef
enum Pkcs10AllowedSignatureTypes
    {
        AllowedKeySignature = 0x1,
        AllowedNullSignature = 0x2
    } Pkcs10AllowedSignatureTypes;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0076_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0076_v0_0_s_ifspec;
EXTERN_C const IID IID_IX509CertificateRequestPkcs10;
    typedef struct IX509CertificateRequestPkcs10Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateRequestPkcs10 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateRequestPkcs10 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateRequestPkcs10 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       X509CertificateEnrollmentContext Context);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in IX509CertificateRequestPkcs10 * This);
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )(
            __RPC__in IX509CertificateRequestPkcs10 * This);
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       InnerRequestLevel Level,
                                __RPC__deref_out_opt IX509CertificateRequest **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__out X509RequestType *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__out X509CertificateEnrollmentContext *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__out RequestClientInfoClientId *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ClientId )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       RequestClientInfoClientId Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CspInformations )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__deref_out_opt ICspInformations **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_CspInformations )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       __RPC__in_opt ICspInformations *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strTemplateName);
                       HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKey )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PrivateKey *pPrivateKey,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPublicKey )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PublicKey *pPublicKey,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strCertificate,
                                     EncodingType Encoding,
                                     X509RequestInheritOptions InheritOptions);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       __RPC__in BSTR strEncodedData,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *CheckSignature )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                     Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
        HRESULT ( STDMETHODCALLTYPE *IsSmartCard )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_TemplateObjectId )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_PublicKey )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__deref_out_opt IX509PublicKey **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__deref_out_opt IX509PrivateKey **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_NullSigned )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ReuseKey )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_OldCertificate )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_Subject )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__deref_out_opt IX500DistinguishedName **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Subject )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       __RPC__in_opt IX500DistinguishedName *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CspStatuses )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__deref_out_opt ICspStatuses **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_SmimeCapabilities )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_SmimeCapabilities )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__deref_out_opt IX509SignatureInformation **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_KeyContainerNamePrefix )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_KeyContainerNamePrefix )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CryptAttributes )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__deref_out_opt ICryptAttributes **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__deref_out_opt IX509Extensions **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressOids )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawDataToBeSigned )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Signature )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetCspStatuses )(
            __RPC__in IX509CertificateRequestPkcs10 * This,
                       X509KeySpec KeySpec,
                                __RPC__deref_out_opt ICspStatuses **ppCspStatuses);
        END_INTERFACE
    } IX509CertificateRequestPkcs10Vtbl;
    interface IX509CertificateRequestPkcs10
    {
        CONST_VTBL struct IX509CertificateRequestPkcs10Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,Context) )
    ( (This)->lpVtbl -> Encode(This) )
    ( (This)->lpVtbl -> ResetForEncode(This) )
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
    ( (This)->lpVtbl -> get_Type(This,pValue) )
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) )
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_ClientId(This,pValue) )
    ( (This)->lpVtbl -> put_ClientId(This,Value) )
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions) )
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) )
    ( (This)->lpVtbl -> IsSmartCard(This,pValue) )
    ( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_PublicKey(This,ppValue) )
    ( (This)->lpVtbl -> get_PrivateKey(This,ppValue) )
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) )
    ( (This)->lpVtbl -> get_ReuseKey(This,pValue) )
    ( (This)->lpVtbl -> get_OldCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Subject(This,ppValue) )
    ( (This)->lpVtbl -> put_Subject(This,pValue) )
    ( (This)->lpVtbl -> get_CspStatuses(This,ppValue) )
    ( (This)->lpVtbl -> get_SmimeCapabilities(This,pValue) )
    ( (This)->lpVtbl -> put_SmimeCapabilities(This,Value) )
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
    ( (This)->lpVtbl -> get_KeyContainerNamePrefix(This,pValue) )
    ( (This)->lpVtbl -> put_KeyContainerNamePrefix(This,Value) )
    ( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) )
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
    ( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) )
    ( (This)->lpVtbl -> get_SuppressOids(This,ppValue) )
    ( (This)->lpVtbl -> get_RawDataToBeSigned(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) )
    ( (This)->lpVtbl -> GetCspStatuses(This,KeySpec,ppCspStatuses) )
EXTERN_C const IID IID_IX509CertificateRequestPkcs10V2;
    typedef struct IX509CertificateRequestPkcs10V2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateRequestPkcs10V2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       X509CertificateEnrollmentContext Context);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This);
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       InnerRequestLevel Level,
                                __RPC__deref_out_opt IX509CertificateRequest **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__out X509RequestType *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__out X509CertificateEnrollmentContext *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__out RequestClientInfoClientId *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ClientId )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       RequestClientInfoClientId Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CspInformations )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__deref_out_opt ICspInformations **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_CspInformations )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       __RPC__in_opt ICspInformations *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strTemplateName);
                       HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKey )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PrivateKey *pPrivateKey,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPublicKey )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PublicKey *pPublicKey,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strCertificate,
                                     EncodingType Encoding,
                                     X509RequestInheritOptions InheritOptions);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       __RPC__in BSTR strEncodedData,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *CheckSignature )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                     Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
        HRESULT ( STDMETHODCALLTYPE *IsSmartCard )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_TemplateObjectId )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_PublicKey )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__deref_out_opt IX509PublicKey **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__deref_out_opt IX509PrivateKey **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_NullSigned )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ReuseKey )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_OldCertificate )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_Subject )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__deref_out_opt IX500DistinguishedName **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Subject )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       __RPC__in_opt IX500DistinguishedName *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CspStatuses )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__deref_out_opt ICspStatuses **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_SmimeCapabilities )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_SmimeCapabilities )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__deref_out_opt IX509SignatureInformation **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_KeyContainerNamePrefix )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_KeyContainerNamePrefix )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CryptAttributes )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__deref_out_opt ICryptAttributes **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__deref_out_opt IX509Extensions **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressOids )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawDataToBeSigned )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Signature )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetCspStatuses )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       X509KeySpec KeySpec,
                                __RPC__deref_out_opt ICspStatuses **ppCspStatuses);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplate )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       X509CertificateEnrollmentContext context,
                       __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
                       __RPC__in_opt IX509CertificateTemplate *pTemplate);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKeyTemplate )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PrivateKey *pPrivateKey,
                       __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
                       __RPC__in_opt IX509CertificateTemplate *pTemplate);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPublicKeyTemplate )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PublicKey *pPublicKey,
                       __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
                       __RPC__in_opt IX509CertificateTemplate *pTemplate);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyServer )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer);
                        HRESULT ( STDMETHODCALLTYPE *get_Template )(
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
                                __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate);
        END_INTERFACE
    } IX509CertificateRequestPkcs10V2Vtbl;
    interface IX509CertificateRequestPkcs10V2
    {
        CONST_VTBL struct IX509CertificateRequestPkcs10V2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,Context) )
    ( (This)->lpVtbl -> Encode(This) )
    ( (This)->lpVtbl -> ResetForEncode(This) )
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
    ( (This)->lpVtbl -> get_Type(This,pValue) )
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) )
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_ClientId(This,pValue) )
    ( (This)->lpVtbl -> put_ClientId(This,Value) )
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions) )
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) )
    ( (This)->lpVtbl -> IsSmartCard(This,pValue) )
    ( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_PublicKey(This,ppValue) )
    ( (This)->lpVtbl -> get_PrivateKey(This,ppValue) )
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) )
    ( (This)->lpVtbl -> get_ReuseKey(This,pValue) )
    ( (This)->lpVtbl -> get_OldCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Subject(This,ppValue) )
    ( (This)->lpVtbl -> put_Subject(This,pValue) )
    ( (This)->lpVtbl -> get_CspStatuses(This,ppValue) )
    ( (This)->lpVtbl -> get_SmimeCapabilities(This,pValue) )
    ( (This)->lpVtbl -> put_SmimeCapabilities(This,Value) )
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
    ( (This)->lpVtbl -> get_KeyContainerNamePrefix(This,pValue) )
    ( (This)->lpVtbl -> put_KeyContainerNamePrefix(This,Value) )
    ( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) )
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
    ( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) )
    ( (This)->lpVtbl -> get_SuppressOids(This,ppValue) )
    ( (This)->lpVtbl -> get_RawDataToBeSigned(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) )
    ( (This)->lpVtbl -> GetCspStatuses(This,KeySpec,ppCspStatuses) )
    ( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) )
    ( (This)->lpVtbl -> InitializeFromPrivateKeyTemplate(This,Context,pPrivateKey,pPolicyServer,pTemplate) )
    ( (This)->lpVtbl -> InitializeFromPublicKeyTemplate(This,Context,pPublicKey,pPolicyServer,pTemplate) )
    ( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) )
    ( (This)->lpVtbl -> get_Template(This,ppTemplate) )
EXTERN_C const IID IID_IX509CertificateRequestPkcs10V3;
    typedef struct IX509CertificateRequestPkcs10V3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateRequestPkcs10V3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       X509CertificateEnrollmentContext Context);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This);
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       InnerRequestLevel Level,
                                __RPC__deref_out_opt IX509CertificateRequest **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__out X509RequestType *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__out X509CertificateEnrollmentContext *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__out RequestClientInfoClientId *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ClientId )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       RequestClientInfoClientId Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CspInformations )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt ICspInformations **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_CspInformations )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       __RPC__in_opt ICspInformations *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strTemplateName);
                       HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKey )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PrivateKey *pPrivateKey,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPublicKey )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PublicKey *pPublicKey,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strCertificate,
                                     EncodingType Encoding,
                                     X509RequestInheritOptions InheritOptions);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       __RPC__in BSTR strEncodedData,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *CheckSignature )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                     Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
        HRESULT ( STDMETHODCALLTYPE *IsSmartCard )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_TemplateObjectId )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_PublicKey )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt IX509PublicKey **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt IX509PrivateKey **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_NullSigned )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ReuseKey )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_OldCertificate )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_Subject )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt IX500DistinguishedName **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Subject )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       __RPC__in_opt IX500DistinguishedName *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CspStatuses )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt ICspStatuses **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_SmimeCapabilities )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_SmimeCapabilities )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt IX509SignatureInformation **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_KeyContainerNamePrefix )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_KeyContainerNamePrefix )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CryptAttributes )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt ICryptAttributes **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt IX509Extensions **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressOids )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawDataToBeSigned )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Signature )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetCspStatuses )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       X509KeySpec KeySpec,
                                __RPC__deref_out_opt ICspStatuses **ppCspStatuses);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplate )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       X509CertificateEnrollmentContext context,
                       __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
                       __RPC__in_opt IX509CertificateTemplate *pTemplate);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKeyTemplate )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PrivateKey *pPrivateKey,
                       __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
                       __RPC__in_opt IX509CertificateTemplate *pTemplate);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPublicKeyTemplate )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PublicKey *pPublicKey,
                       __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
                       __RPC__in_opt IX509CertificateTemplate *pTemplate);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyServer )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer);
                        HRESULT ( STDMETHODCALLTYPE *get_Template )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate);
                                HRESULT ( STDMETHODCALLTYPE *get_AttestPrivateKey )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_AttestPrivateKey )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       VARIANT_BOOL Value);
                                HRESULT ( STDMETHODCALLTYPE *get_AttestationEncryptionCertificate )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_AttestationEncryptionCertificate )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_EncryptionAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_EncryptionAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       __RPC__in_opt IObjectId *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_EncryptionStrength )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__out LONG *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_EncryptionStrength )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ChallengePassword )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ChallengePassword )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_NameValuePairs )(
            __RPC__in IX509CertificateRequestPkcs10V3 * This,
                                __RPC__deref_out_opt IX509NameValuePairs **ppValue);
        END_INTERFACE
    } IX509CertificateRequestPkcs10V3Vtbl;
    interface IX509CertificateRequestPkcs10V3
    {
        CONST_VTBL struct IX509CertificateRequestPkcs10V3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,Context) )
    ( (This)->lpVtbl -> Encode(This) )
    ( (This)->lpVtbl -> ResetForEncode(This) )
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
    ( (This)->lpVtbl -> get_Type(This,pValue) )
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) )
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_ClientId(This,pValue) )
    ( (This)->lpVtbl -> put_ClientId(This,Value) )
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions) )
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) )
    ( (This)->lpVtbl -> IsSmartCard(This,pValue) )
    ( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_PublicKey(This,ppValue) )
    ( (This)->lpVtbl -> get_PrivateKey(This,ppValue) )
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) )
    ( (This)->lpVtbl -> get_ReuseKey(This,pValue) )
    ( (This)->lpVtbl -> get_OldCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Subject(This,ppValue) )
    ( (This)->lpVtbl -> put_Subject(This,pValue) )
    ( (This)->lpVtbl -> get_CspStatuses(This,ppValue) )
    ( (This)->lpVtbl -> get_SmimeCapabilities(This,pValue) )
    ( (This)->lpVtbl -> put_SmimeCapabilities(This,Value) )
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
    ( (This)->lpVtbl -> get_KeyContainerNamePrefix(This,pValue) )
    ( (This)->lpVtbl -> put_KeyContainerNamePrefix(This,Value) )
    ( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) )
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
    ( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) )
    ( (This)->lpVtbl -> get_SuppressOids(This,ppValue) )
    ( (This)->lpVtbl -> get_RawDataToBeSigned(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) )
    ( (This)->lpVtbl -> GetCspStatuses(This,KeySpec,ppCspStatuses) )
    ( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) )
    ( (This)->lpVtbl -> InitializeFromPrivateKeyTemplate(This,Context,pPrivateKey,pPolicyServer,pTemplate) )
    ( (This)->lpVtbl -> InitializeFromPublicKeyTemplate(This,Context,pPublicKey,pPolicyServer,pTemplate) )
    ( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) )
    ( (This)->lpVtbl -> get_Template(This,ppTemplate) )
    ( (This)->lpVtbl -> get_AttestPrivateKey(This,pValue) )
    ( (This)->lpVtbl -> put_AttestPrivateKey(This,Value) )
    ( (This)->lpVtbl -> get_AttestationEncryptionCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_AttestationEncryptionCertificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_EncryptionAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_EncryptionAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_EncryptionStrength(This,pValue) )
    ( (This)->lpVtbl -> put_EncryptionStrength(This,Value) )
    ( (This)->lpVtbl -> get_ChallengePassword(This,pValue) )
    ( (This)->lpVtbl -> put_ChallengePassword(This,Value) )
    ( (This)->lpVtbl -> get_NameValuePairs(This,ppValue) )
typedef
enum KeyAttestationClaimType
    {
        XCN_NCRYPT_CLAIM_NONE = 0,
        XCN_NCRYPT_CLAIM_AUTHORITY_AND_SUBJECT = 0x3,
        XCN_NCRYPT_CLAIM_AUTHORITY_ONLY = 0x1,
        XCN_NCRYPT_CLAIM_SUBJECT_ONLY = 0x2,
        XCN_NCRYPT_CLAIM_UNKNOWN = 0x1000
    } KeyAttestationClaimType;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0079_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0079_v0_0_s_ifspec;
EXTERN_C const IID IID_IX509CertificateRequestPkcs10V4;
    typedef struct IX509CertificateRequestPkcs10V4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateRequestPkcs10V4 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       X509CertificateEnrollmentContext Context);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This);
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       InnerRequestLevel Level,
                                __RPC__deref_out_opt IX509CertificateRequest **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__out X509RequestType *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__out X509CertificateEnrollmentContext *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__out RequestClientInfoClientId *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ClientId )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       RequestClientInfoClientId Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CspInformations )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt ICspInformations **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_CspInformations )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       __RPC__in_opt ICspInformations *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strTemplateName);
                       HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKey )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PrivateKey *pPrivateKey,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPublicKey )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PublicKey *pPublicKey,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strCertificate,
                                     EncodingType Encoding,
                                     X509RequestInheritOptions InheritOptions);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       __RPC__in BSTR strEncodedData,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *CheckSignature )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                     Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
        HRESULT ( STDMETHODCALLTYPE *IsSmartCard )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_TemplateObjectId )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_PublicKey )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt IX509PublicKey **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt IX509PrivateKey **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_NullSigned )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ReuseKey )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_OldCertificate )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_Subject )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt IX500DistinguishedName **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Subject )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       __RPC__in_opt IX500DistinguishedName *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CspStatuses )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt ICspStatuses **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_SmimeCapabilities )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_SmimeCapabilities )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt IX509SignatureInformation **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_KeyContainerNamePrefix )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_KeyContainerNamePrefix )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CryptAttributes )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt ICryptAttributes **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt IX509Extensions **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressOids )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawDataToBeSigned )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Signature )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetCspStatuses )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       X509KeySpec KeySpec,
                                __RPC__deref_out_opt ICspStatuses **ppCspStatuses);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplate )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       X509CertificateEnrollmentContext context,
                       __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
                       __RPC__in_opt IX509CertificateTemplate *pTemplate);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKeyTemplate )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PrivateKey *pPrivateKey,
                       __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
                       __RPC__in_opt IX509CertificateTemplate *pTemplate);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPublicKeyTemplate )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PublicKey *pPublicKey,
                       __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
                       __RPC__in_opt IX509CertificateTemplate *pTemplate);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyServer )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer);
                        HRESULT ( STDMETHODCALLTYPE *get_Template )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate);
                                HRESULT ( STDMETHODCALLTYPE *get_AttestPrivateKey )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_AttestPrivateKey )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       VARIANT_BOOL Value);
                                HRESULT ( STDMETHODCALLTYPE *get_AttestationEncryptionCertificate )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_AttestationEncryptionCertificate )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_EncryptionAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_EncryptionAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       __RPC__in_opt IObjectId *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_EncryptionStrength )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__out LONG *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_EncryptionStrength )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ChallengePassword )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ChallengePassword )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_NameValuePairs )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__deref_out_opt IX509NameValuePairs **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_ClaimType )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__out KeyAttestationClaimType *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ClaimType )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       KeyAttestationClaimType Value);
                                HRESULT ( STDMETHODCALLTYPE *get_AttestPrivateKeyPreferred )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_AttestPrivateKeyPreferred )(
            __RPC__in IX509CertificateRequestPkcs10V4 * This,
                       VARIANT_BOOL Value);
        END_INTERFACE
    } IX509CertificateRequestPkcs10V4Vtbl;
    interface IX509CertificateRequestPkcs10V4
    {
        CONST_VTBL struct IX509CertificateRequestPkcs10V4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,Context) )
    ( (This)->lpVtbl -> Encode(This) )
    ( (This)->lpVtbl -> ResetForEncode(This) )
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
    ( (This)->lpVtbl -> get_Type(This,pValue) )
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) )
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_ClientId(This,pValue) )
    ( (This)->lpVtbl -> put_ClientId(This,Value) )
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions) )
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) )
    ( (This)->lpVtbl -> IsSmartCard(This,pValue) )
    ( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_PublicKey(This,ppValue) )
    ( (This)->lpVtbl -> get_PrivateKey(This,ppValue) )
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) )
    ( (This)->lpVtbl -> get_ReuseKey(This,pValue) )
    ( (This)->lpVtbl -> get_OldCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Subject(This,ppValue) )
    ( (This)->lpVtbl -> put_Subject(This,pValue) )
    ( (This)->lpVtbl -> get_CspStatuses(This,ppValue) )
    ( (This)->lpVtbl -> get_SmimeCapabilities(This,pValue) )
    ( (This)->lpVtbl -> put_SmimeCapabilities(This,Value) )
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
    ( (This)->lpVtbl -> get_KeyContainerNamePrefix(This,pValue) )
    ( (This)->lpVtbl -> put_KeyContainerNamePrefix(This,Value) )
    ( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) )
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
    ( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) )
    ( (This)->lpVtbl -> get_SuppressOids(This,ppValue) )
    ( (This)->lpVtbl -> get_RawDataToBeSigned(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) )
    ( (This)->lpVtbl -> GetCspStatuses(This,KeySpec,ppCspStatuses) )
    ( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) )
    ( (This)->lpVtbl -> InitializeFromPrivateKeyTemplate(This,Context,pPrivateKey,pPolicyServer,pTemplate) )
    ( (This)->lpVtbl -> InitializeFromPublicKeyTemplate(This,Context,pPublicKey,pPolicyServer,pTemplate) )
    ( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) )
    ( (This)->lpVtbl -> get_Template(This,ppTemplate) )
    ( (This)->lpVtbl -> get_AttestPrivateKey(This,pValue) )
    ( (This)->lpVtbl -> put_AttestPrivateKey(This,Value) )
    ( (This)->lpVtbl -> get_AttestationEncryptionCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_AttestationEncryptionCertificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_EncryptionAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_EncryptionAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_EncryptionStrength(This,pValue) )
    ( (This)->lpVtbl -> put_EncryptionStrength(This,Value) )
    ( (This)->lpVtbl -> get_ChallengePassword(This,pValue) )
    ( (This)->lpVtbl -> put_ChallengePassword(This,Value) )
    ( (This)->lpVtbl -> get_NameValuePairs(This,ppValue) )
    ( (This)->lpVtbl -> get_ClaimType(This,pValue) )
    ( (This)->lpVtbl -> put_ClaimType(This,Value) )
    ( (This)->lpVtbl -> get_AttestPrivateKeyPreferred(This,pValue) )
    ( (This)->lpVtbl -> put_AttestPrivateKeyPreferred(This,Value) )
EXTERN_C const IID IID_IX509CertificateRequestCertificate;
    typedef struct IX509CertificateRequestCertificateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateRequestCertificate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateRequestCertificate * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateRequestCertificate * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateRequestCertificate * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       X509CertificateEnrollmentContext Context);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in IX509CertificateRequestCertificate * This);
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )(
            __RPC__in IX509CertificateRequestCertificate * This);
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       InnerRequestLevel Level,
                                __RPC__deref_out_opt IX509CertificateRequest **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__out X509RequestType *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__out X509CertificateEnrollmentContext *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__out RequestClientInfoClientId *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ClientId )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       RequestClientInfoClientId Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CspInformations )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__deref_out_opt ICspInformations **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_CspInformations )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       __RPC__in_opt ICspInformations *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strTemplateName);
                       HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKey )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PrivateKey *pPrivateKey,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPublicKey )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PublicKey *pPublicKey,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strCertificate,
                                     EncodingType Encoding,
                                     X509RequestInheritOptions InheritOptions);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       __RPC__in BSTR strEncodedData,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *CheckSignature )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                     Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
        HRESULT ( STDMETHODCALLTYPE *IsSmartCard )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_TemplateObjectId )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_PublicKey )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__deref_out_opt IX509PublicKey **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__deref_out_opt IX509PrivateKey **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_NullSigned )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ReuseKey )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_OldCertificate )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_Subject )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__deref_out_opt IX500DistinguishedName **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Subject )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       __RPC__in_opt IX500DistinguishedName *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CspStatuses )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__deref_out_opt ICspStatuses **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_SmimeCapabilities )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_SmimeCapabilities )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__deref_out_opt IX509SignatureInformation **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_KeyContainerNamePrefix )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_KeyContainerNamePrefix )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CryptAttributes )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__deref_out_opt ICryptAttributes **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__deref_out_opt IX509Extensions **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressOids )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawDataToBeSigned )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Signature )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetCspStatuses )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       X509KeySpec KeySpec,
                                __RPC__deref_out_opt ICspStatuses **ppCspStatuses);
        HRESULT ( STDMETHODCALLTYPE *CheckPublicKeySignature )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       __RPC__in_opt IX509PublicKey *pPublicKey);
                        HRESULT ( STDMETHODCALLTYPE *get_Issuer )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__deref_out_opt IX500DistinguishedName **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Issuer )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       __RPC__in_opt IX500DistinguishedName *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_NotBefore )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__out DATE *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_NotBefore )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       DATE Value);
                        HRESULT ( STDMETHODCALLTYPE *get_NotAfter )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__out DATE *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_NotAfter )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       DATE Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SerialNumber )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SignerCertificate )(
            __RPC__in IX509CertificateRequestCertificate * This,
                                __RPC__deref_out_opt ISignerCertificate **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SignerCertificate )(
            __RPC__in IX509CertificateRequestCertificate * This,
                       __RPC__in_opt ISignerCertificate *pValue);
        END_INTERFACE
    } IX509CertificateRequestCertificateVtbl;
    interface IX509CertificateRequestCertificate
    {
        CONST_VTBL struct IX509CertificateRequestCertificateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,Context) )
    ( (This)->lpVtbl -> Encode(This) )
    ( (This)->lpVtbl -> ResetForEncode(This) )
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
    ( (This)->lpVtbl -> get_Type(This,pValue) )
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) )
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_ClientId(This,pValue) )
    ( (This)->lpVtbl -> put_ClientId(This,Value) )
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions) )
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) )
    ( (This)->lpVtbl -> IsSmartCard(This,pValue) )
    ( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_PublicKey(This,ppValue) )
    ( (This)->lpVtbl -> get_PrivateKey(This,ppValue) )
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) )
    ( (This)->lpVtbl -> get_ReuseKey(This,pValue) )
    ( (This)->lpVtbl -> get_OldCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Subject(This,ppValue) )
    ( (This)->lpVtbl -> put_Subject(This,pValue) )
    ( (This)->lpVtbl -> get_CspStatuses(This,ppValue) )
    ( (This)->lpVtbl -> get_SmimeCapabilities(This,pValue) )
    ( (This)->lpVtbl -> put_SmimeCapabilities(This,Value) )
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
    ( (This)->lpVtbl -> get_KeyContainerNamePrefix(This,pValue) )
    ( (This)->lpVtbl -> put_KeyContainerNamePrefix(This,Value) )
    ( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) )
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
    ( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) )
    ( (This)->lpVtbl -> get_SuppressOids(This,ppValue) )
    ( (This)->lpVtbl -> get_RawDataToBeSigned(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) )
    ( (This)->lpVtbl -> GetCspStatuses(This,KeySpec,ppCspStatuses) )
    ( (This)->lpVtbl -> CheckPublicKeySignature(This,pPublicKey) )
    ( (This)->lpVtbl -> get_Issuer(This,ppValue) )
    ( (This)->lpVtbl -> put_Issuer(This,pValue) )
    ( (This)->lpVtbl -> get_NotBefore(This,pValue) )
    ( (This)->lpVtbl -> put_NotBefore(This,Value) )
    ( (This)->lpVtbl -> get_NotAfter(This,pValue) )
    ( (This)->lpVtbl -> put_NotAfter(This,Value) )
    ( (This)->lpVtbl -> get_SerialNumber(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_SerialNumber(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) )
    ( (This)->lpVtbl -> put_SignerCertificate(This,pValue) )
EXTERN_C const IID IID_IX509CertificateRequestCertificate2;
    typedef struct IX509CertificateRequestCertificate2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateRequestCertificate2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateRequestCertificate2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateRequestCertificate2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       X509CertificateEnrollmentContext Context);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in IX509CertificateRequestCertificate2 * This);
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )(
            __RPC__in IX509CertificateRequestCertificate2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       InnerRequestLevel Level,
                                __RPC__deref_out_opt IX509CertificateRequest **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__out X509RequestType *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__out X509CertificateEnrollmentContext *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__out RequestClientInfoClientId *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ClientId )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       RequestClientInfoClientId Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CspInformations )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt ICspInformations **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_CspInformations )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       __RPC__in_opt ICspInformations *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strTemplateName);
                       HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKey )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PrivateKey *pPrivateKey,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPublicKey )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PublicKey *pPublicKey,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strCertificate,
                                     EncodingType Encoding,
                                     X509RequestInheritOptions InheritOptions);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       __RPC__in BSTR strEncodedData,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *CheckSignature )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                     Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
        HRESULT ( STDMETHODCALLTYPE *IsSmartCard )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_TemplateObjectId )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_PublicKey )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt IX509PublicKey **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt IX509PrivateKey **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_NullSigned )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ReuseKey )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_OldCertificate )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_Subject )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt IX500DistinguishedName **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_Subject )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       __RPC__in_opt IX500DistinguishedName *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CspStatuses )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt ICspStatuses **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_SmimeCapabilities )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_SmimeCapabilities )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt IX509SignatureInformation **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_KeyContainerNamePrefix )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_KeyContainerNamePrefix )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CryptAttributes )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt ICryptAttributes **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt IX509Extensions **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressOids )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawDataToBeSigned )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Signature )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetCspStatuses )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       X509KeySpec KeySpec,
                                __RPC__deref_out_opt ICspStatuses **ppCspStatuses);
        HRESULT ( STDMETHODCALLTYPE *CheckPublicKeySignature )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       __RPC__in_opt IX509PublicKey *pPublicKey);
                        HRESULT ( STDMETHODCALLTYPE *get_Issuer )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt IX500DistinguishedName **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Issuer )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       __RPC__in_opt IX500DistinguishedName *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_NotBefore )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__out DATE *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_NotBefore )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       DATE Value);
                        HRESULT ( STDMETHODCALLTYPE *get_NotAfter )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__out DATE *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_NotAfter )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       DATE Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SerialNumber )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SignerCertificate )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt ISignerCertificate **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SignerCertificate )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       __RPC__in_opt ISignerCertificate *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplate )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       X509CertificateEnrollmentContext context,
                       __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
                       __RPC__in_opt IX509CertificateTemplate *pTemplate);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKeyTemplate )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in_opt IX509PrivateKey *pPrivateKey,
                       __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
                       __RPC__in_opt IX509CertificateTemplate *pTemplate);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyServer )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer);
                        HRESULT ( STDMETHODCALLTYPE *get_Template )(
            __RPC__in IX509CertificateRequestCertificate2 * This,
                                __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate);
        END_INTERFACE
    } IX509CertificateRequestCertificate2Vtbl;
    interface IX509CertificateRequestCertificate2
    {
        CONST_VTBL struct IX509CertificateRequestCertificate2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,Context) )
    ( (This)->lpVtbl -> Encode(This) )
    ( (This)->lpVtbl -> ResetForEncode(This) )
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
    ( (This)->lpVtbl -> get_Type(This,pValue) )
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) )
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_ClientId(This,pValue) )
    ( (This)->lpVtbl -> put_ClientId(This,Value) )
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions) )
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) )
    ( (This)->lpVtbl -> IsSmartCard(This,pValue) )
    ( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_PublicKey(This,ppValue) )
    ( (This)->lpVtbl -> get_PrivateKey(This,ppValue) )
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) )
    ( (This)->lpVtbl -> get_ReuseKey(This,pValue) )
    ( (This)->lpVtbl -> get_OldCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Subject(This,ppValue) )
    ( (This)->lpVtbl -> put_Subject(This,pValue) )
    ( (This)->lpVtbl -> get_CspStatuses(This,ppValue) )
    ( (This)->lpVtbl -> get_SmimeCapabilities(This,pValue) )
    ( (This)->lpVtbl -> put_SmimeCapabilities(This,Value) )
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
    ( (This)->lpVtbl -> get_KeyContainerNamePrefix(This,pValue) )
    ( (This)->lpVtbl -> put_KeyContainerNamePrefix(This,Value) )
    ( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) )
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
    ( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) )
    ( (This)->lpVtbl -> get_SuppressOids(This,ppValue) )
    ( (This)->lpVtbl -> get_RawDataToBeSigned(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) )
    ( (This)->lpVtbl -> GetCspStatuses(This,KeySpec,ppCspStatuses) )
    ( (This)->lpVtbl -> CheckPublicKeySignature(This,pPublicKey) )
    ( (This)->lpVtbl -> get_Issuer(This,ppValue) )
    ( (This)->lpVtbl -> put_Issuer(This,pValue) )
    ( (This)->lpVtbl -> get_NotBefore(This,pValue) )
    ( (This)->lpVtbl -> put_NotBefore(This,Value) )
    ( (This)->lpVtbl -> get_NotAfter(This,pValue) )
    ( (This)->lpVtbl -> put_NotAfter(This,Value) )
    ( (This)->lpVtbl -> get_SerialNumber(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_SerialNumber(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) )
    ( (This)->lpVtbl -> put_SignerCertificate(This,pValue) )
    ( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) )
    ( (This)->lpVtbl -> InitializeFromPrivateKeyTemplate(This,Context,pPrivateKey,pPolicyServer,pTemplate) )
    ( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) )
    ( (This)->lpVtbl -> get_Template(This,ppTemplate) )
EXTERN_C const IID IID_IX509CertificateRequestPkcs7;
    typedef struct IX509CertificateRequestPkcs7Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateRequestPkcs7 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateRequestPkcs7 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateRequestPkcs7 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       X509CertificateEnrollmentContext Context);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in IX509CertificateRequestPkcs7 * This);
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )(
            __RPC__in IX509CertificateRequestPkcs7 * This);
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       InnerRequestLevel Level,
                                __RPC__deref_out_opt IX509CertificateRequest **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                                __RPC__out X509RequestType *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                                __RPC__out X509CertificateEnrollmentContext *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                                __RPC__out RequestClientInfoClientId *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ClientId )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       RequestClientInfoClientId Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CspInformations )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                                __RPC__deref_out_opt ICspInformations **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_CspInformations )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       __RPC__in_opt ICspInformations *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       X509CertificateEnrollmentContext Context,
                       VARIANT_BOOL RenewalRequest,
                       __RPC__in BSTR strCertificate,
                                     EncodingType Encoding,
                                     X509RequestInheritOptions InheritOptions);
                       HRESULT ( STDMETHODCALLTYPE *InitializeFromInnerRequest )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       __RPC__in_opt IX509CertificateRequest *pInnerRequest);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       __RPC__in BSTR strEncodedData,
                                     EncodingType Encoding);
                                HRESULT ( STDMETHODCALLTYPE *get_RequesterName )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_RequesterName )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_SignerCertificate )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                                __RPC__deref_out_opt ISignerCertificate **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_SignerCertificate )(
            __RPC__in IX509CertificateRequestPkcs7 * This,
                       __RPC__in_opt ISignerCertificate *pValue);
        END_INTERFACE
    } IX509CertificateRequestPkcs7Vtbl;
    interface IX509CertificateRequestPkcs7
    {
        CONST_VTBL struct IX509CertificateRequestPkcs7Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,Context) )
    ( (This)->lpVtbl -> Encode(This) )
    ( (This)->lpVtbl -> ResetForEncode(This) )
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
    ( (This)->lpVtbl -> get_Type(This,pValue) )
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) )
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_ClientId(This,pValue) )
    ( (This)->lpVtbl -> put_ClientId(This,Value) )
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions) )
    ( (This)->lpVtbl -> InitializeFromInnerRequest(This,pInnerRequest) )
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> get_RequesterName(This,pValue) )
    ( (This)->lpVtbl -> put_RequesterName(This,Value) )
    ( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) )
    ( (This)->lpVtbl -> put_SignerCertificate(This,pValue) )
EXTERN_C const IID IID_IX509CertificateRequestPkcs7V2;
    typedef struct IX509CertificateRequestPkcs7V2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateRequestPkcs7V2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       X509CertificateEnrollmentContext Context);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This);
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       InnerRequestLevel Level,
                                __RPC__deref_out_opt IX509CertificateRequest **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                __RPC__out X509RequestType *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                __RPC__out X509CertificateEnrollmentContext *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                __RPC__out RequestClientInfoClientId *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ClientId )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       RequestClientInfoClientId Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CspInformations )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                __RPC__deref_out_opt ICspInformations **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_CspInformations )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       __RPC__in_opt ICspInformations *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       X509CertificateEnrollmentContext Context,
                       VARIANT_BOOL RenewalRequest,
                       __RPC__in BSTR strCertificate,
                                     EncodingType Encoding,
                                     X509RequestInheritOptions InheritOptions);
                       HRESULT ( STDMETHODCALLTYPE *InitializeFromInnerRequest )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       __RPC__in_opt IX509CertificateRequest *pInnerRequest);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       __RPC__in BSTR strEncodedData,
                                     EncodingType Encoding);
                                HRESULT ( STDMETHODCALLTYPE *get_RequesterName )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_RequesterName )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_SignerCertificate )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                __RPC__deref_out_opt ISignerCertificate **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_SignerCertificate )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       __RPC__in_opt ISignerCertificate *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplate )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       X509CertificateEnrollmentContext context,
                       __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
                       __RPC__in_opt IX509CertificateTemplate *pTemplate);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyServer )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer);
                        HRESULT ( STDMETHODCALLTYPE *get_Template )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                                __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate);
        HRESULT ( STDMETHODCALLTYPE *CheckCertificateSignature )(
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
                       VARIANT_BOOL ValidateCertificateChain);
        END_INTERFACE
    } IX509CertificateRequestPkcs7V2Vtbl;
    interface IX509CertificateRequestPkcs7V2
    {
        CONST_VTBL struct IX509CertificateRequestPkcs7V2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,Context) )
    ( (This)->lpVtbl -> Encode(This) )
    ( (This)->lpVtbl -> ResetForEncode(This) )
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
    ( (This)->lpVtbl -> get_Type(This,pValue) )
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) )
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_ClientId(This,pValue) )
    ( (This)->lpVtbl -> put_ClientId(This,Value) )
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions) )
    ( (This)->lpVtbl -> InitializeFromInnerRequest(This,pInnerRequest) )
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> get_RequesterName(This,pValue) )
    ( (This)->lpVtbl -> put_RequesterName(This,Value) )
    ( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) )
    ( (This)->lpVtbl -> put_SignerCertificate(This,pValue) )
    ( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) )
    ( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) )
    ( (This)->lpVtbl -> get_Template(This,ppTemplate) )
    ( (This)->lpVtbl -> CheckCertificateSignature(This,ValidateCertificateChain) )
EXTERN_C const IID IID_IX509CertificateRequestCmc;
    typedef struct IX509CertificateRequestCmcVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateRequestCmc * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateRequestCmc * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateRequestCmc * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateRequestCmc * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateRequestCmc * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateRequestCmc * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateRequestCmc * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509CertificateRequestCmc * This,
                       X509CertificateEnrollmentContext Context);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in IX509CertificateRequestCmc * This);
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )(
            __RPC__in IX509CertificateRequestCmc * This);
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )(
            __RPC__in IX509CertificateRequestCmc * This,
                       InnerRequestLevel Level,
                                __RPC__deref_out_opt IX509CertificateRequest **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__out X509RequestType *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__out X509CertificateEnrollmentContext *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509CertificateRequestCmc * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IX509CertificateRequestCmc * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )(
            __RPC__in IX509CertificateRequestCmc * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )(
            __RPC__in IX509CertificateRequestCmc * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )(
            __RPC__in IX509CertificateRequestCmc * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )(
            __RPC__in IX509CertificateRequestCmc * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__out RequestClientInfoClientId *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ClientId )(
            __RPC__in IX509CertificateRequestCmc * This,
                       RequestClientInfoClientId Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CspInformations )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__deref_out_opt ICspInformations **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_CspInformations )(
            __RPC__in IX509CertificateRequestCmc * This,
                       __RPC__in_opt ICspInformations *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IX509CertificateRequestCmc * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestCmc * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509CertificateRequestCmc * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )(
            __RPC__in IX509CertificateRequestCmc * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in IX509CertificateRequestCmc * This,
                       X509CertificateEnrollmentContext Context,
                       VARIANT_BOOL RenewalRequest,
                       __RPC__in BSTR strCertificate,
                                     EncodingType Encoding,
                                     X509RequestInheritOptions InheritOptions);
                       HRESULT ( STDMETHODCALLTYPE *InitializeFromInnerRequest )(
            __RPC__in IX509CertificateRequestCmc * This,
                       __RPC__in_opt IX509CertificateRequest *pInnerRequest);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509CertificateRequestCmc * This,
                       __RPC__in BSTR strEncodedData,
                                     EncodingType Encoding);
                                HRESULT ( STDMETHODCALLTYPE *get_RequesterName )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_RequesterName )(
            __RPC__in IX509CertificateRequestCmc * This,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_SignerCertificate )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__deref_out_opt ISignerCertificate **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_SignerCertificate )(
            __RPC__in IX509CertificateRequestCmc * This,
                       __RPC__in_opt ISignerCertificate *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromInnerRequestTemplateName )(
            __RPC__in IX509CertificateRequestCmc * This,
                       __RPC__in_opt IX509CertificateRequest *pInnerRequest,
                       __RPC__in BSTR strTemplateName);
                        HRESULT ( STDMETHODCALLTYPE *get_TemplateObjectId )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_NullSigned )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CryptAttributes )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__deref_out_opt ICryptAttributes **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_NameValuePairs )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__deref_out_opt IX509NameValuePairs **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__deref_out_opt IX509Extensions **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressOids )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_TransactionId )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_TransactionId )(
            __RPC__in IX509CertificateRequestCmc * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SenderNonce )(
            __RPC__in IX509CertificateRequestCmc * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SenderNonce )(
            __RPC__in IX509CertificateRequestCmc * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__deref_out_opt IX509SignatureInformation **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ArchivePrivateKey )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ArchivePrivateKey )(
            __RPC__in IX509CertificateRequestCmc * This,
                       VARIANT_BOOL Value);
                                HRESULT ( STDMETHODCALLTYPE *get_KeyArchivalCertificate )(
            __RPC__in IX509CertificateRequestCmc * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_KeyArchivalCertificate )(
            __RPC__in IX509CertificateRequestCmc * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_EncryptionAlgorithm )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_EncryptionAlgorithm )(
            __RPC__in IX509CertificateRequestCmc * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EncryptionStrength )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_EncryptionStrength )(
            __RPC__in IX509CertificateRequestCmc * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_EncryptedKeyHash )(
            __RPC__in IX509CertificateRequestCmc * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_SignerCertificates )(
            __RPC__in IX509CertificateRequestCmc * This,
                                __RPC__deref_out_opt ISignerCertificates **ppValue);
        END_INTERFACE
    } IX509CertificateRequestCmcVtbl;
    interface IX509CertificateRequestCmc
    {
        CONST_VTBL struct IX509CertificateRequestCmcVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,Context) )
    ( (This)->lpVtbl -> Encode(This) )
    ( (This)->lpVtbl -> ResetForEncode(This) )
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
    ( (This)->lpVtbl -> get_Type(This,pValue) )
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) )
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_ClientId(This,pValue) )
    ( (This)->lpVtbl -> put_ClientId(This,Value) )
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions) )
    ( (This)->lpVtbl -> InitializeFromInnerRequest(This,pInnerRequest) )
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> get_RequesterName(This,pValue) )
    ( (This)->lpVtbl -> put_RequesterName(This,Value) )
    ( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) )
    ( (This)->lpVtbl -> put_SignerCertificate(This,pValue) )
    ( (This)->lpVtbl -> InitializeFromInnerRequestTemplateName(This,pInnerRequest,strTemplateName) )
    ( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) )
    ( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) )
    ( (This)->lpVtbl -> get_NameValuePairs(This,ppValue) )
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
    ( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) )
    ( (This)->lpVtbl -> get_SuppressOids(This,ppValue) )
    ( (This)->lpVtbl -> get_TransactionId(This,pValue) )
    ( (This)->lpVtbl -> put_TransactionId(This,Value) )
    ( (This)->lpVtbl -> get_SenderNonce(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_SenderNonce(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
    ( (This)->lpVtbl -> get_ArchivePrivateKey(This,pValue) )
    ( (This)->lpVtbl -> put_ArchivePrivateKey(This,Value) )
    ( (This)->lpVtbl -> get_KeyArchivalCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_KeyArchivalCertificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_EncryptionAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_EncryptionAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_EncryptionStrength(This,pValue) )
    ( (This)->lpVtbl -> put_EncryptionStrength(This,Value) )
    ( (This)->lpVtbl -> get_EncryptedKeyHash(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_SignerCertificates(This,ppValue) )
EXTERN_C const IID IID_IX509CertificateRequestCmc2;
    typedef struct IX509CertificateRequestCmc2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateRequestCmc2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateRequestCmc2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateRequestCmc2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       X509CertificateEnrollmentContext Context);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in IX509CertificateRequestCmc2 * This);
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )(
            __RPC__in IX509CertificateRequestCmc2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       InnerRequestLevel Level,
                                __RPC__deref_out_opt IX509CertificateRequest **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__out X509RequestType *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__out X509CertificateEnrollmentContext *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__out RequestClientInfoClientId *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_ClientId )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       RequestClientInfoClientId Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CspInformations )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__deref_out_opt ICspInformations **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_CspInformations )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       __RPC__in_opt ICspInformations *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strTemplateName);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       X509CertificateEnrollmentContext Context,
                       VARIANT_BOOL RenewalRequest,
                       __RPC__in BSTR strCertificate,
                                     EncodingType Encoding,
                                     X509RequestInheritOptions InheritOptions);
                       HRESULT ( STDMETHODCALLTYPE *InitializeFromInnerRequest )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       __RPC__in_opt IX509CertificateRequest *pInnerRequest);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       __RPC__in BSTR strEncodedData,
                                     EncodingType Encoding);
                                HRESULT ( STDMETHODCALLTYPE *get_RequesterName )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_RequesterName )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_SignerCertificate )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__deref_out_opt ISignerCertificate **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_SignerCertificate )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       __RPC__in_opt ISignerCertificate *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromInnerRequestTemplateName )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       __RPC__in_opt IX509CertificateRequest *pInnerRequest,
                       __RPC__in BSTR strTemplateName);
                        HRESULT ( STDMETHODCALLTYPE *get_TemplateObjectId )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_NullSigned )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CryptAttributes )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__deref_out_opt ICryptAttributes **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_NameValuePairs )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__deref_out_opt IX509NameValuePairs **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__deref_out_opt IX509Extensions **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_SuppressOids )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_TransactionId )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_TransactionId )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SenderNonce )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SenderNonce )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__deref_out_opt IX509SignatureInformation **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ArchivePrivateKey )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ArchivePrivateKey )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       VARIANT_BOOL Value);
                                HRESULT ( STDMETHODCALLTYPE *get_KeyArchivalCertificate )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_KeyArchivalCertificate )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                                HRESULT ( STDMETHODCALLTYPE *get_EncryptionAlgorithm )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_EncryptionAlgorithm )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EncryptionStrength )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_EncryptionStrength )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_EncryptedKeyHash )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_SignerCertificates )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__deref_out_opt ISignerCertificates **ppValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplate )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       X509CertificateEnrollmentContext context,
                       __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
                       __RPC__in_opt IX509CertificateTemplate *pTemplate);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromInnerRequestTemplate )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       __RPC__in_opt IX509CertificateRequest *pInnerRequest,
                       __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
                       __RPC__in_opt IX509CertificateTemplate *pTemplate);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyServer )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer);
                        HRESULT ( STDMETHODCALLTYPE *get_Template )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate);
        HRESULT ( STDMETHODCALLTYPE *CheckSignature )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                                     Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
        HRESULT ( STDMETHODCALLTYPE *CheckCertificateSignature )(
            __RPC__in IX509CertificateRequestCmc2 * This,
                       __RPC__in_opt ISignerCertificate *pSignerCertificate,
                       VARIANT_BOOL ValidateCertificateChain);
        END_INTERFACE
    } IX509CertificateRequestCmc2Vtbl;
    interface IX509CertificateRequestCmc2
    {
        CONST_VTBL struct IX509CertificateRequestCmc2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,Context) )
    ( (This)->lpVtbl -> Encode(This) )
    ( (This)->lpVtbl -> ResetForEncode(This) )
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
    ( (This)->lpVtbl -> get_Type(This,pValue) )
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) )
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_ClientId(This,pValue) )
    ( (This)->lpVtbl -> put_ClientId(This,Value) )
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions) )
    ( (This)->lpVtbl -> InitializeFromInnerRequest(This,pInnerRequest) )
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> get_RequesterName(This,pValue) )
    ( (This)->lpVtbl -> put_RequesterName(This,Value) )
    ( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) )
    ( (This)->lpVtbl -> put_SignerCertificate(This,pValue) )
    ( (This)->lpVtbl -> InitializeFromInnerRequestTemplateName(This,pInnerRequest,strTemplateName) )
    ( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) )
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) )
    ( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) )
    ( (This)->lpVtbl -> get_NameValuePairs(This,ppValue) )
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
    ( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) )
    ( (This)->lpVtbl -> get_SuppressOids(This,ppValue) )
    ( (This)->lpVtbl -> get_TransactionId(This,pValue) )
    ( (This)->lpVtbl -> put_TransactionId(This,Value) )
    ( (This)->lpVtbl -> get_SenderNonce(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_SenderNonce(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
    ( (This)->lpVtbl -> get_ArchivePrivateKey(This,pValue) )
    ( (This)->lpVtbl -> put_ArchivePrivateKey(This,Value) )
    ( (This)->lpVtbl -> get_KeyArchivalCertificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_KeyArchivalCertificate(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_EncryptionAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_EncryptionAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_EncryptionStrength(This,pValue) )
    ( (This)->lpVtbl -> put_EncryptionStrength(This,Value) )
    ( (This)->lpVtbl -> get_EncryptedKeyHash(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_SignerCertificates(This,ppValue) )
    ( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) )
    ( (This)->lpVtbl -> InitializeFromInnerRequestTemplate(This,pInnerRequest,pPolicyServer,pTemplate) )
    ( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) )
    ( (This)->lpVtbl -> get_Template(This,ppTemplate) )
    ( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) )
    ( (This)->lpVtbl -> CheckCertificateSignature(This,pSignerCertificate,ValidateCertificateChain) )
typedef
enum InstallResponseRestrictionFlags
    {
        AllowNone = 0,
        AllowNoOutstandingRequest = 0x1,
        AllowUntrustedCertificate = 0x2,
        AllowUntrustedRoot = 0x4
    } InstallResponseRestrictionFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0086_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0086_v0_0_s_ifspec;
EXTERN_C const IID IID_IX509Enrollment;
    typedef struct IX509EnrollmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509Enrollment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509Enrollment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509Enrollment * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509Enrollment * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509Enrollment * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509Enrollment * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509Enrollment * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509Enrollment * This,
                       X509CertificateEnrollmentContext Context);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )(
            __RPC__in IX509Enrollment * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strTemplateName);
                       HRESULT ( STDMETHODCALLTYPE *InitializeFromRequest )(
            __RPC__in IX509Enrollment * This,
                       __RPC__in_opt IX509CertificateRequest *pRequest);
                       HRESULT ( STDMETHODCALLTYPE *CreateRequest )(
            __RPC__in IX509Enrollment * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *Enroll )(
            __RPC__in IX509Enrollment * This);
                       HRESULT ( STDMETHODCALLTYPE *InstallResponse )(
            __RPC__in IX509Enrollment * This,
                       InstallResponseRestrictionFlags Restrictions,
                       __RPC__in BSTR strResponse,
                       EncodingType Encoding,
                       __RPC__in BSTR strPassword);
        HRESULT ( STDMETHODCALLTYPE *CreatePFX )(
            __RPC__in IX509Enrollment * This,
                       __RPC__in BSTR strPassword,
                       PFXExportOptions ExportOptions,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Request )(
            __RPC__in IX509Enrollment * This,
                                __RPC__deref_out_opt IX509CertificateRequest **pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509Enrollment * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509Enrollment * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IX509Enrollment * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IX509Enrollment * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_NameValuePairs )(
            __RPC__in IX509Enrollment * This,
                                __RPC__deref_out_opt IX509NameValuePairs **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )(
            __RPC__in IX509Enrollment * This,
                                __RPC__out X509CertificateEnrollmentContext *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IX509Enrollment * This,
                                __RPC__deref_out_opt IX509EnrollmentStatus **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Certificate )(
            __RPC__in IX509Enrollment * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Response )(
            __RPC__in IX509Enrollment * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_CertificateFriendlyName )(
            __RPC__in IX509Enrollment * This,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_CertificateFriendlyName )(
            __RPC__in IX509Enrollment * This,
                       __RPC__in BSTR strValue);
                                HRESULT ( STDMETHODCALLTYPE *get_CertificateDescription )(
            __RPC__in IX509Enrollment * This,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_CertificateDescription )(
            __RPC__in IX509Enrollment * This,
                       __RPC__in BSTR strValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
            __RPC__in IX509Enrollment * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CAConfigString )(
            __RPC__in IX509Enrollment * This,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509EnrollmentVtbl;
    interface IX509Enrollment
    {
        CONST_VTBL struct IX509EnrollmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,Context) )
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromRequest(This,pRequest) )
    ( (This)->lpVtbl -> CreateRequest(This,Encoding,pValue) )
    ( (This)->lpVtbl -> Enroll(This) )
    ( (This)->lpVtbl -> InstallResponse(This,Restrictions,strResponse,Encoding,strPassword) )
    ( (This)->lpVtbl -> CreatePFX(This,strPassword,ExportOptions,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Request(This,pValue) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) )
    ( (This)->lpVtbl -> get_NameValuePairs(This,ppValue) )
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
    ( (This)->lpVtbl -> get_Status(This,ppValue) )
    ( (This)->lpVtbl -> get_Certificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Response(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_CertificateFriendlyName(This,pValue) )
    ( (This)->lpVtbl -> put_CertificateFriendlyName(This,strValue) )
    ( (This)->lpVtbl -> get_CertificateDescription(This,pValue) )
    ( (This)->lpVtbl -> put_CertificateDescription(This,strValue) )
    ( (This)->lpVtbl -> get_RequestId(This,pValue) )
    ( (This)->lpVtbl -> get_CAConfigString(This,pValue) )
EXTERN_C const IID IID_IX509Enrollment2;
    typedef struct IX509Enrollment2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509Enrollment2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509Enrollment2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509Enrollment2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509Enrollment2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509Enrollment2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509Enrollment2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509Enrollment2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509Enrollment2 * This,
                       X509CertificateEnrollmentContext Context);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )(
            __RPC__in IX509Enrollment2 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strTemplateName);
                       HRESULT ( STDMETHODCALLTYPE *InitializeFromRequest )(
            __RPC__in IX509Enrollment2 * This,
                       __RPC__in_opt IX509CertificateRequest *pRequest);
                       HRESULT ( STDMETHODCALLTYPE *CreateRequest )(
            __RPC__in IX509Enrollment2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *Enroll )(
            __RPC__in IX509Enrollment2 * This);
                       HRESULT ( STDMETHODCALLTYPE *InstallResponse )(
            __RPC__in IX509Enrollment2 * This,
                       InstallResponseRestrictionFlags Restrictions,
                       __RPC__in BSTR strResponse,
                       EncodingType Encoding,
                       __RPC__in BSTR strPassword);
        HRESULT ( STDMETHODCALLTYPE *CreatePFX )(
            __RPC__in IX509Enrollment2 * This,
                       __RPC__in BSTR strPassword,
                       PFXExportOptions ExportOptions,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Request )(
            __RPC__in IX509Enrollment2 * This,
                                __RPC__deref_out_opt IX509CertificateRequest **pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509Enrollment2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509Enrollment2 * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IX509Enrollment2 * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IX509Enrollment2 * This,
                       LONG Value);
                        HRESULT ( STDMETHODCALLTYPE *get_NameValuePairs )(
            __RPC__in IX509Enrollment2 * This,
                                __RPC__deref_out_opt IX509NameValuePairs **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )(
            __RPC__in IX509Enrollment2 * This,
                                __RPC__out X509CertificateEnrollmentContext *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IX509Enrollment2 * This,
                                __RPC__deref_out_opt IX509EnrollmentStatus **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Certificate )(
            __RPC__in IX509Enrollment2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Response )(
            __RPC__in IX509Enrollment2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_CertificateFriendlyName )(
            __RPC__in IX509Enrollment2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_CertificateFriendlyName )(
            __RPC__in IX509Enrollment2 * This,
                       __RPC__in BSTR strValue);
                                HRESULT ( STDMETHODCALLTYPE *get_CertificateDescription )(
            __RPC__in IX509Enrollment2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                                HRESULT ( STDMETHODCALLTYPE *put_CertificateDescription )(
            __RPC__in IX509Enrollment2 * This,
                       __RPC__in BSTR strValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
            __RPC__in IX509Enrollment2 * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CAConfigString )(
            __RPC__in IX509Enrollment2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplate )(
            __RPC__in IX509Enrollment2 * This,
                       X509CertificateEnrollmentContext context,
                       __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
                       __RPC__in_opt IX509CertificateTemplate *pTemplate);
                       HRESULT ( STDMETHODCALLTYPE *InstallResponse2 )(
            __RPC__in IX509Enrollment2 * This,
                       InstallResponseRestrictionFlags Restrictions,
                       __RPC__in BSTR strResponse,
                       EncodingType Encoding,
                       __RPC__in BSTR strPassword,
                       __RPC__in BSTR strEnrollmentPolicyServerUrl,
                       __RPC__in BSTR strEnrollmentPolicyServerID,
                       PolicyServerUrlFlags EnrollmentPolicyServerFlags,
                       X509EnrollmentAuthFlags authFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyServer )(
            __RPC__in IX509Enrollment2 * This,
                                __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer);
                        HRESULT ( STDMETHODCALLTYPE *get_Template )(
            __RPC__in IX509Enrollment2 * This,
                                __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestIdString )(
            __RPC__in IX509Enrollment2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509Enrollment2Vtbl;
    interface IX509Enrollment2
    {
        CONST_VTBL struct IX509Enrollment2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,Context) )
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
    ( (This)->lpVtbl -> InitializeFromRequest(This,pRequest) )
    ( (This)->lpVtbl -> CreateRequest(This,Encoding,pValue) )
    ( (This)->lpVtbl -> Enroll(This) )
    ( (This)->lpVtbl -> InstallResponse(This,Restrictions,strResponse,Encoding,strPassword) )
    ( (This)->lpVtbl -> CreatePFX(This,strPassword,ExportOptions,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Request(This,pValue) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) )
    ( (This)->lpVtbl -> get_NameValuePairs(This,ppValue) )
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
    ( (This)->lpVtbl -> get_Status(This,ppValue) )
    ( (This)->lpVtbl -> get_Certificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Response(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_CertificateFriendlyName(This,pValue) )
    ( (This)->lpVtbl -> put_CertificateFriendlyName(This,strValue) )
    ( (This)->lpVtbl -> get_CertificateDescription(This,pValue) )
    ( (This)->lpVtbl -> put_CertificateDescription(This,strValue) )
    ( (This)->lpVtbl -> get_RequestId(This,pValue) )
    ( (This)->lpVtbl -> get_CAConfigString(This,pValue) )
    ( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) )
    ( (This)->lpVtbl -> InstallResponse2(This,Restrictions,strResponse,Encoding,strPassword,strEnrollmentPolicyServerUrl,strEnrollmentPolicyServerID,EnrollmentPolicyServerFlags,authFlags) )
    ( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) )
    ( (This)->lpVtbl -> get_Template(This,ppTemplate) )
    ( (This)->lpVtbl -> get_RequestIdString(This,pValue) )
typedef
enum WebEnrollmentFlags
    {
        EnrollPrompt = 0x1
    } WebEnrollmentFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0088_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0088_v0_0_s_ifspec;
EXTERN_C const IID IID_IX509EnrollmentHelper;
    typedef struct IX509EnrollmentHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509EnrollmentHelper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509EnrollmentHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509EnrollmentHelper * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509EnrollmentHelper * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509EnrollmentHelper * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509EnrollmentHelper * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509EnrollmentHelper * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *AddPolicyServer )(
            __RPC__in IX509EnrollmentHelper * This,
                       __RPC__in BSTR strEnrollmentPolicyServerURI,
                       __RPC__in BSTR strEnrollmentPolicyID,
                       PolicyServerUrlFlags EnrollmentPolicyServerFlags,
                       X509EnrollmentAuthFlags authFlags,
                       __RPC__in BSTR strCredential,
                       __RPC__in BSTR strPassword);
                       HRESULT ( STDMETHODCALLTYPE *AddEnrollmentServer )(
            __RPC__in IX509EnrollmentHelper * This,
                       __RPC__in BSTR strEnrollmentServerURI,
                       X509EnrollmentAuthFlags authFlags,
                       __RPC__in BSTR strCredential,
                       __RPC__in BSTR strPassword);
                       HRESULT ( STDMETHODCALLTYPE *Enroll )(
            __RPC__in IX509EnrollmentHelper * This,
                       __RPC__in BSTR strEnrollmentPolicyServerURI,
                       __RPC__in BSTR strTemplateName,
                       EncodingType Encoding,
                       WebEnrollmentFlags enrollFlags,
                                __RPC__deref_out_opt BSTR *pstrCertificate);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509EnrollmentHelper * This,
                       X509CertificateEnrollmentContext Context);
        END_INTERFACE
    } IX509EnrollmentHelperVtbl;
    interface IX509EnrollmentHelper
    {
        CONST_VTBL struct IX509EnrollmentHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> AddPolicyServer(This,strEnrollmentPolicyServerURI,strEnrollmentPolicyID,EnrollmentPolicyServerFlags,authFlags,strCredential,strPassword) )
    ( (This)->lpVtbl -> AddEnrollmentServer(This,strEnrollmentServerURI,authFlags,strCredential,strPassword) )
    ( (This)->lpVtbl -> Enroll(This,strEnrollmentPolicyServerURI,strTemplateName,Encoding,enrollFlags,pstrCertificate) )
    ( (This)->lpVtbl -> Initialize(This,Context) )
EXTERN_C const IID IID_IX509EnrollmentWebClassFactory;
    typedef struct IX509EnrollmentWebClassFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509EnrollmentWebClassFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509EnrollmentWebClassFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509EnrollmentWebClassFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509EnrollmentWebClassFactory * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509EnrollmentWebClassFactory * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509EnrollmentWebClassFactory * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509EnrollmentWebClassFactory * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *CreateObject )(
            __RPC__in IX509EnrollmentWebClassFactory * This,
                       __RPC__in BSTR strProgID,
                                __RPC__deref_out_opt IUnknown **ppIUnknown);
        END_INTERFACE
    } IX509EnrollmentWebClassFactoryVtbl;
    interface IX509EnrollmentWebClassFactory
    {
        CONST_VTBL struct IX509EnrollmentWebClassFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreateObject(This,strProgID,ppIUnknown) )
EXTERN_C const IID IID_IX509MachineEnrollmentFactory;
    typedef struct IX509MachineEnrollmentFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509MachineEnrollmentFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509MachineEnrollmentFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509MachineEnrollmentFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509MachineEnrollmentFactory * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509MachineEnrollmentFactory * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509MachineEnrollmentFactory * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509MachineEnrollmentFactory * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *CreateObject )(
            __RPC__in IX509MachineEnrollmentFactory * This,
                       __RPC__in BSTR strProgID,
                                __RPC__deref_out_opt IX509EnrollmentHelper **ppIHelper);
        END_INTERFACE
    } IX509MachineEnrollmentFactoryVtbl;
    interface IX509MachineEnrollmentFactory
    {
        CONST_VTBL struct IX509MachineEnrollmentFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreateObject(This,strProgID,ppIHelper) )
typedef
enum CRLRevocationReason
    {
        XCN_CRL_REASON_UNSPECIFIED = 0,
        XCN_CRL_REASON_KEY_COMPROMISE = 1,
        XCN_CRL_REASON_CA_COMPROMISE = 2,
        XCN_CRL_REASON_AFFILIATION_CHANGED = 3,
        XCN_CRL_REASON_SUPERSEDED = 4,
        XCN_CRL_REASON_CESSATION_OF_OPERATION = 5,
        XCN_CRL_REASON_CERTIFICATE_HOLD = 6,
        XCN_CRL_REASON_REMOVE_FROM_CRL = 8,
        XCN_CRL_REASON_PRIVILEGE_WITHDRAWN = 9,
        XCN_CRL_REASON_AA_COMPROMISE = 10
    } CRLRevocationReason;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0091_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0091_v0_0_s_ifspec;
EXTERN_C const IID IID_IX509CertificateRevocationListEntry;
    typedef struct IX509CertificateRevocationListEntryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateRevocationListEntry * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateRevocationListEntry * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateRevocationListEntry * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateRevocationListEntry * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateRevocationListEntry * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateRevocationListEntry * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateRevocationListEntry * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509CertificateRevocationListEntry * This,
                       EncodingType Encoding,
                       __RPC__in BSTR SerialNumber,
                       DATE RevocationDate);
                        HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )(
            __RPC__in IX509CertificateRevocationListEntry * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RevocationDate )(
            __RPC__in IX509CertificateRevocationListEntry * This,
                                __RPC__out DATE *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RevocationReason )(
            __RPC__in IX509CertificateRevocationListEntry * This,
                                __RPC__out CRLRevocationReason *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_RevocationReason )(
            __RPC__in IX509CertificateRevocationListEntry * This,
                       CRLRevocationReason Value);
                        HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )(
            __RPC__in IX509CertificateRevocationListEntry * This,
                                __RPC__deref_out_opt IX509Extensions **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )(
            __RPC__in IX509CertificateRevocationListEntry * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
        END_INTERFACE
    } IX509CertificateRevocationListEntryVtbl;
    interface IX509CertificateRevocationListEntry
    {
        CONST_VTBL struct IX509CertificateRevocationListEntryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,Encoding,SerialNumber,RevocationDate) )
    ( (This)->lpVtbl -> get_SerialNumber(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_RevocationDate(This,pValue) )
    ( (This)->lpVtbl -> get_RevocationReason(This,pValue) )
    ( (This)->lpVtbl -> put_RevocationReason(This,Value) )
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
    ( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) )
EXTERN_C const IID IID_IX509CertificateRevocationListEntries;
    typedef struct IX509CertificateRevocationListEntriesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateRevocationListEntries * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateRevocationListEntries * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateRevocationListEntries * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateRevocationListEntries * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateRevocationListEntries * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateRevocationListEntries * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateRevocationListEntries * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )(
            __RPC__in IX509CertificateRevocationListEntries * This,
                       LONG Index,
                                __RPC__deref_out_opt IX509CertificateRevocationListEntry **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IX509CertificateRevocationListEntries * This,
                                __RPC__out long *pVal);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IX509CertificateRevocationListEntries * This,
                                __RPC__deref_out_opt LPUNKNOWN *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IX509CertificateRevocationListEntries * This,
                       __RPC__in_opt IX509CertificateRevocationListEntry *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IX509CertificateRevocationListEntries * This,
                       LONG Index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IX509CertificateRevocationListEntries * This);
                        HRESULT ( STDMETHODCALLTYPE *get_IndexBySerialNumber )(
            __RPC__in IX509CertificateRevocationListEntries * This,
                       EncodingType Encoding,
                       __RPC__in BSTR SerialNumber,
                                __RPC__out LONG *pIndex);
        HRESULT ( STDMETHODCALLTYPE *AddRange )(
            __RPC__in IX509CertificateRevocationListEntries * This,
                       __RPC__in_opt IX509CertificateRevocationListEntries *pValue);
        END_INTERFACE
    } IX509CertificateRevocationListEntriesVtbl;
    interface IX509CertificateRevocationListEntries
    {
        CONST_VTBL struct IX509CertificateRevocationListEntriesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> get_IndexBySerialNumber(This,Encoding,SerialNumber,pIndex) )
    ( (This)->lpVtbl -> AddRange(This,pValue) )
EXTERN_C const IID IID_IX509CertificateRevocationList;
    typedef struct IX509CertificateRevocationListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509CertificateRevocationList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509CertificateRevocationList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509CertificateRevocationList * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509CertificateRevocationList * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509CertificateRevocationList * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509CertificateRevocationList * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509CertificateRevocationList * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509CertificateRevocationList * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )(
            __RPC__in IX509CertificateRevocationList * This,
                       __RPC__in BSTR strEncodedData,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in IX509CertificateRevocationList * This);
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )(
            __RPC__in IX509CertificateRevocationList * This);
        HRESULT ( STDMETHODCALLTYPE *CheckPublicKeySignature )(
            __RPC__in IX509CertificateRevocationList * This,
                       __RPC__in_opt IX509PublicKey *pPublicKey);
        HRESULT ( STDMETHODCALLTYPE *CheckSignature )(
            __RPC__in IX509CertificateRevocationList * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Issuer )(
            __RPC__in IX509CertificateRevocationList * This,
                                __RPC__deref_out_opt IX500DistinguishedName **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Issuer )(
            __RPC__in IX509CertificateRevocationList * This,
                       __RPC__in_opt IX500DistinguishedName *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ThisUpdate )(
            __RPC__in IX509CertificateRevocationList * This,
                                __RPC__out DATE *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ThisUpdate )(
            __RPC__in IX509CertificateRevocationList * This,
                       DATE Value);
                        HRESULT ( STDMETHODCALLTYPE *get_NextUpdate )(
            __RPC__in IX509CertificateRevocationList * This,
                                __RPC__out DATE *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_NextUpdate )(
            __RPC__in IX509CertificateRevocationList * This,
                       DATE Value);
                        HRESULT ( STDMETHODCALLTYPE *get_X509CRLEntries )(
            __RPC__in IX509CertificateRevocationList * This,
                                __RPC__deref_out_opt IX509CertificateRevocationListEntries **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )(
            __RPC__in IX509CertificateRevocationList * This,
                                __RPC__deref_out_opt IX509Extensions **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )(
            __RPC__in IX509CertificateRevocationList * This,
                                __RPC__deref_out_opt IObjectIds **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_SignerCertificate )(
            __RPC__in IX509CertificateRevocationList * This,
                                __RPC__deref_out_opt ISignerCertificate **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SignerCertificate )(
            __RPC__in IX509CertificateRevocationList * This,
                       __RPC__in_opt ISignerCertificate *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CRLNumber )(
            __RPC__in IX509CertificateRevocationList * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_CRLNumber )(
            __RPC__in IX509CertificateRevocationList * This,
                       EncodingType Encoding,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_CAVersion )(
            __RPC__in IX509CertificateRevocationList * This,
                                __RPC__out LONG *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_CAVersion )(
            __RPC__in IX509CertificateRevocationList * This,
                       LONG pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_BaseCRL )(
            __RPC__in IX509CertificateRevocationList * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_NullSigned )(
            __RPC__in IX509CertificateRevocationList * This,
                                __RPC__out VARIANT_BOOL *pValue);
                                HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IX509CertificateRevocationList * This,
                                __RPC__deref_out_opt IObjectId **ppValue);
                                HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IX509CertificateRevocationList * This,
                       __RPC__in_opt IObjectId *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRevocationList * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )(
            __RPC__in IX509CertificateRevocationList * This,
                       VARIANT_BOOL Value);
                        HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )(
            __RPC__in IX509CertificateRevocationList * This,
                                __RPC__deref_out_opt IX509SignatureInformation **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawData )(
            __RPC__in IX509CertificateRevocationList * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_RawDataToBeSigned )(
            __RPC__in IX509CertificateRevocationList * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Signature )(
            __RPC__in IX509CertificateRevocationList * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509CertificateRevocationListVtbl;
    interface IX509CertificateRevocationList
    {
        CONST_VTBL struct IX509CertificateRevocationListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This) )
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> Encode(This) )
    ( (This)->lpVtbl -> ResetForEncode(This) )
    ( (This)->lpVtbl -> CheckPublicKeySignature(This,pPublicKey) )
    ( (This)->lpVtbl -> CheckSignature(This) )
    ( (This)->lpVtbl -> get_Issuer(This,ppValue) )
    ( (This)->lpVtbl -> put_Issuer(This,pValue) )
    ( (This)->lpVtbl -> get_ThisUpdate(This,pValue) )
    ( (This)->lpVtbl -> put_ThisUpdate(This,Value) )
    ( (This)->lpVtbl -> get_NextUpdate(This,pValue) )
    ( (This)->lpVtbl -> put_NextUpdate(This,Value) )
    ( (This)->lpVtbl -> get_X509CRLEntries(This,ppValue) )
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
    ( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) )
    ( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) )
    ( (This)->lpVtbl -> put_SignerCertificate(This,pValue) )
    ( (This)->lpVtbl -> get_CRLNumber(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_CRLNumber(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_CAVersion(This,pValue) )
    ( (This)->lpVtbl -> put_CAVersion(This,pValue) )
    ( (This)->lpVtbl -> get_BaseCRL(This,pValue) )
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_RawDataToBeSigned(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) )
EXTERN_C const IID IID_ICertificateAttestationChallenge;
    typedef struct ICertificateAttestationChallengeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertificateAttestationChallenge * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertificateAttestationChallenge * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertificateAttestationChallenge * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertificateAttestationChallenge * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertificateAttestationChallenge * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertificateAttestationChallenge * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertificateAttestationChallenge * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertificateAttestationChallenge * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strPendingFullCmcResponseWithChallenge);
                       HRESULT ( STDMETHODCALLTYPE *DecryptChallenge )(
            __RPC__in ICertificateAttestationChallenge * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pstrEnvelopedPkcs7ReencryptedToCA);
                                HRESULT ( STDMETHODCALLTYPE *get_RequestID )(
            __RPC__in ICertificateAttestationChallenge * This,
                                __RPC__deref_out_opt BSTR *pstrRequestID);
        END_INTERFACE
    } ICertificateAttestationChallengeVtbl;
    interface ICertificateAttestationChallenge
    {
        CONST_VTBL struct ICertificateAttestationChallengeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,Encoding,strPendingFullCmcResponseWithChallenge) )
    ( (This)->lpVtbl -> DecryptChallenge(This,Encoding,pstrEnvelopedPkcs7ReencryptedToCA) )
    ( (This)->lpVtbl -> get_RequestID(This,pstrRequestID) )
EXTERN_C const IID IID_ICertificateAttestationChallenge2;
    typedef struct ICertificateAttestationChallenge2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertificateAttestationChallenge2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertificateAttestationChallenge2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertificateAttestationChallenge2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertificateAttestationChallenge2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertificateAttestationChallenge2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertificateAttestationChallenge2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertificateAttestationChallenge2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                       HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertificateAttestationChallenge2 * This,
                       EncodingType Encoding,
                       __RPC__in BSTR strPendingFullCmcResponseWithChallenge);
                       HRESULT ( STDMETHODCALLTYPE *DecryptChallenge )(
            __RPC__in ICertificateAttestationChallenge2 * This,
                       EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pstrEnvelopedPkcs7ReencryptedToCA);
                                HRESULT ( STDMETHODCALLTYPE *get_RequestID )(
            __RPC__in ICertificateAttestationChallenge2 * This,
                                __RPC__deref_out_opt BSTR *pstrRequestID);
                        HRESULT ( STDMETHODCALLTYPE *put_KeyContainerName )(
            __RPC__in ICertificateAttestationChallenge2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *put_KeyBlob )(
            __RPC__in ICertificateAttestationChallenge2 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
        END_INTERFACE
    } ICertificateAttestationChallenge2Vtbl;
    interface ICertificateAttestationChallenge2
    {
        CONST_VTBL struct ICertificateAttestationChallenge2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,Encoding,strPendingFullCmcResponseWithChallenge) )
    ( (This)->lpVtbl -> DecryptChallenge(This,Encoding,pstrEnvelopedPkcs7ReencryptedToCA) )
    ( (This)->lpVtbl -> get_RequestID(This,pstrRequestID) )
    ( (This)->lpVtbl -> put_KeyContainerName(This,Value) )
    ( (This)->lpVtbl -> put_KeyBlob(This,Encoding,Value) )
EXTERN_C const IID IID_IX509SCEPEnrollment;
    typedef struct IX509SCEPEnrollmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509SCEPEnrollment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509SCEPEnrollment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509SCEPEnrollment * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509SCEPEnrollment * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509SCEPEnrollment * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509SCEPEnrollment * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509SCEPEnrollment * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509SCEPEnrollment * This,
                       __RPC__in_opt IX509CertificateRequestPkcs10 *pRequest,
                       __RPC__in BSTR strThumbprint,
                       EncodingType ThumprintEncoding,
                       __RPC__in BSTR strServerCertificates,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *InitializeForPending )(
            __RPC__in IX509SCEPEnrollment * This,
                       X509CertificateEnrollmentContext Context);
        HRESULT ( STDMETHODCALLTYPE *CreateRequestMessage )(
            __RPC__in IX509SCEPEnrollment * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *CreateRetrievePendingMessage )(
            __RPC__in IX509SCEPEnrollment * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *CreateRetrieveCertificateMessage )(
            __RPC__in IX509SCEPEnrollment * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strIssuer,
                       EncodingType IssuerEncoding,
                       __RPC__in BSTR strSerialNumber,
                                     EncodingType SerialNumberEncoding,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *ProcessResponseMessage )(
            __RPC__in IX509SCEPEnrollment * This,
                       __RPC__in BSTR strResponse,
                                     EncodingType Encoding,
                                __RPC__out X509SCEPDisposition *pDisposition);
                        HRESULT ( STDMETHODCALLTYPE *put_ServerCapabilities )(
            __RPC__in IX509SCEPEnrollment * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_FailInfo )(
            __RPC__in IX509SCEPEnrollment * This,
                                __RPC__out X509SCEPFailInfo *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_SignerCertificate )(
            __RPC__in IX509SCEPEnrollment * This,
                                __RPC__deref_out_opt ISignerCertificate **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SignerCertificate )(
            __RPC__in IX509SCEPEnrollment * This,
                       __RPC__in_opt ISignerCertificate *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_OldCertificate )(
            __RPC__in IX509SCEPEnrollment * This,
                                __RPC__deref_out_opt ISignerCertificate **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_OldCertificate )(
            __RPC__in IX509SCEPEnrollment * This,
                       __RPC__in_opt ISignerCertificate *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_TransactionId )(
            __RPC__in IX509SCEPEnrollment * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_TransactionId )(
            __RPC__in IX509SCEPEnrollment * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_Request )(
            __RPC__in IX509SCEPEnrollment * This,
                                __RPC__deref_out_opt IX509CertificateRequestPkcs10 **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CertificateFriendlyName )(
            __RPC__in IX509SCEPEnrollment * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_CertificateFriendlyName )(
            __RPC__in IX509SCEPEnrollment * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IX509SCEPEnrollment * This,
                                __RPC__deref_out_opt IX509EnrollmentStatus **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Certificate )(
            __RPC__in IX509SCEPEnrollment * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509SCEPEnrollment * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509SCEPEnrollment * This,
                       VARIANT_BOOL Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteRequest )(
            __RPC__in IX509SCEPEnrollment * This);
        END_INTERFACE
    } IX509SCEPEnrollmentVtbl;
    interface IX509SCEPEnrollment
    {
        CONST_VTBL struct IX509SCEPEnrollmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pRequest,strThumbprint,ThumprintEncoding,strServerCertificates,Encoding) )
    ( (This)->lpVtbl -> InitializeForPending(This,Context) )
    ( (This)->lpVtbl -> CreateRequestMessage(This,Encoding,pValue) )
    ( (This)->lpVtbl -> CreateRetrievePendingMessage(This,Encoding,pValue) )
    ( (This)->lpVtbl -> CreateRetrieveCertificateMessage(This,Context,strIssuer,IssuerEncoding,strSerialNumber,SerialNumberEncoding,Encoding,pValue) )
    ( (This)->lpVtbl -> ProcessResponseMessage(This,strResponse,Encoding,pDisposition) )
    ( (This)->lpVtbl -> put_ServerCapabilities(This,Value) )
    ( (This)->lpVtbl -> get_FailInfo(This,pValue) )
    ( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) )
    ( (This)->lpVtbl -> put_SignerCertificate(This,pValue) )
    ( (This)->lpVtbl -> get_OldCertificate(This,ppValue) )
    ( (This)->lpVtbl -> put_OldCertificate(This,pValue) )
    ( (This)->lpVtbl -> get_TransactionId(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_TransactionId(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_Request(This,ppValue) )
    ( (This)->lpVtbl -> get_CertificateFriendlyName(This,pValue) )
    ( (This)->lpVtbl -> put_CertificateFriendlyName(This,Value) )
    ( (This)->lpVtbl -> get_Status(This,ppValue) )
    ( (This)->lpVtbl -> get_Certificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> DeleteRequest(This) )
typedef
enum X509SCEPProcessMessageFlags
    {
        SCEPProcessDefault = 0,
        SCEPProcessSkipCertInstall = 0x1
    } X509SCEPProcessMessageFlags;
typedef
enum DelayRetryAction
    {
        DelayRetryUnknown = 0,
        DelayRetryNone = 1,
        DelayRetryShort = 2,
        DelayRetryLong = 3,
        DelayRetrySuccess = 4,
        DelayRetryPastSuccess = 5
    } DelayRetryAction;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0097_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0097_v0_0_s_ifspec;
EXTERN_C const IID IID_IX509SCEPEnrollment2;
    typedef struct IX509SCEPEnrollment2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509SCEPEnrollment2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509SCEPEnrollment2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509SCEPEnrollment2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509SCEPEnrollment2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509SCEPEnrollment2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509SCEPEnrollment2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509SCEPEnrollment2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509SCEPEnrollment2 * This,
                       __RPC__in_opt IX509CertificateRequestPkcs10 *pRequest,
                       __RPC__in BSTR strThumbprint,
                       EncodingType ThumprintEncoding,
                       __RPC__in BSTR strServerCertificates,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *InitializeForPending )(
            __RPC__in IX509SCEPEnrollment2 * This,
                       X509CertificateEnrollmentContext Context);
        HRESULT ( STDMETHODCALLTYPE *CreateRequestMessage )(
            __RPC__in IX509SCEPEnrollment2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *CreateRetrievePendingMessage )(
            __RPC__in IX509SCEPEnrollment2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *CreateRetrieveCertificateMessage )(
            __RPC__in IX509SCEPEnrollment2 * This,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strIssuer,
                       EncodingType IssuerEncoding,
                       __RPC__in BSTR strSerialNumber,
                                     EncodingType SerialNumberEncoding,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *ProcessResponseMessage )(
            __RPC__in IX509SCEPEnrollment2 * This,
                       __RPC__in BSTR strResponse,
                                     EncodingType Encoding,
                                __RPC__out X509SCEPDisposition *pDisposition);
                        HRESULT ( STDMETHODCALLTYPE *put_ServerCapabilities )(
            __RPC__in IX509SCEPEnrollment2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_FailInfo )(
            __RPC__in IX509SCEPEnrollment2 * This,
                                __RPC__out X509SCEPFailInfo *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_SignerCertificate )(
            __RPC__in IX509SCEPEnrollment2 * This,
                                __RPC__deref_out_opt ISignerCertificate **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_SignerCertificate )(
            __RPC__in IX509SCEPEnrollment2 * This,
                       __RPC__in_opt ISignerCertificate *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_OldCertificate )(
            __RPC__in IX509SCEPEnrollment2 * This,
                                __RPC__deref_out_opt ISignerCertificate **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *put_OldCertificate )(
            __RPC__in IX509SCEPEnrollment2 * This,
                       __RPC__in_opt ISignerCertificate *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_TransactionId )(
            __RPC__in IX509SCEPEnrollment2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_TransactionId )(
            __RPC__in IX509SCEPEnrollment2 * This,
                                     EncodingType Encoding,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_Request )(
            __RPC__in IX509SCEPEnrollment2 * This,
                                __RPC__deref_out_opt IX509CertificateRequestPkcs10 **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CertificateFriendlyName )(
            __RPC__in IX509SCEPEnrollment2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_CertificateFriendlyName )(
            __RPC__in IX509SCEPEnrollment2 * This,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IX509SCEPEnrollment2 * This,
                                __RPC__deref_out_opt IX509EnrollmentStatus **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Certificate )(
            __RPC__in IX509SCEPEnrollment2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IX509SCEPEnrollment2 * This,
                                __RPC__out VARIANT_BOOL *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IX509SCEPEnrollment2 * This,
                       VARIANT_BOOL Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteRequest )(
            __RPC__in IX509SCEPEnrollment2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateChallengeAnswerMessage )(
            __RPC__in IX509SCEPEnrollment2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *ProcessResponseMessage2 )(
            __RPC__in IX509SCEPEnrollment2 * This,
                       X509SCEPProcessMessageFlags Flags,
                       __RPC__in BSTR strResponse,
                                     EncodingType Encoding,
                                __RPC__out X509SCEPDisposition *pDisposition);
                        HRESULT ( STDMETHODCALLTYPE *get_ResultMessageText )(
            __RPC__in IX509SCEPEnrollment2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_DelayRetry )(
            __RPC__in IX509SCEPEnrollment2 * This,
                                __RPC__out DelayRetryAction *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
            __RPC__in IX509SCEPEnrollment2 * This,
                                __RPC__deref_out_opt BSTR *pValue);
                        HRESULT ( STDMETHODCALLTYPE *put_ActivityId )(
            __RPC__in IX509SCEPEnrollment2 * This,
                       __RPC__in BSTR Value);
        END_INTERFACE
    } IX509SCEPEnrollment2Vtbl;
    interface IX509SCEPEnrollment2
    {
        CONST_VTBL struct IX509SCEPEnrollment2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,pRequest,strThumbprint,ThumprintEncoding,strServerCertificates,Encoding) )
    ( (This)->lpVtbl -> InitializeForPending(This,Context) )
    ( (This)->lpVtbl -> CreateRequestMessage(This,Encoding,pValue) )
    ( (This)->lpVtbl -> CreateRetrievePendingMessage(This,Encoding,pValue) )
    ( (This)->lpVtbl -> CreateRetrieveCertificateMessage(This,Context,strIssuer,IssuerEncoding,strSerialNumber,SerialNumberEncoding,Encoding,pValue) )
    ( (This)->lpVtbl -> ProcessResponseMessage(This,strResponse,Encoding,pDisposition) )
    ( (This)->lpVtbl -> put_ServerCapabilities(This,Value) )
    ( (This)->lpVtbl -> get_FailInfo(This,pValue) )
    ( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) )
    ( (This)->lpVtbl -> put_SignerCertificate(This,pValue) )
    ( (This)->lpVtbl -> get_OldCertificate(This,ppValue) )
    ( (This)->lpVtbl -> put_OldCertificate(This,pValue) )
    ( (This)->lpVtbl -> get_TransactionId(This,Encoding,pValue) )
    ( (This)->lpVtbl -> put_TransactionId(This,Encoding,Value) )
    ( (This)->lpVtbl -> get_Request(This,ppValue) )
    ( (This)->lpVtbl -> get_CertificateFriendlyName(This,pValue) )
    ( (This)->lpVtbl -> put_CertificateFriendlyName(This,Value) )
    ( (This)->lpVtbl -> get_Status(This,ppValue) )
    ( (This)->lpVtbl -> get_Certificate(This,Encoding,pValue) )
    ( (This)->lpVtbl -> get_Silent(This,pValue) )
    ( (This)->lpVtbl -> put_Silent(This,Value) )
    ( (This)->lpVtbl -> DeleteRequest(This) )
    ( (This)->lpVtbl -> CreateChallengeAnswerMessage(This,Encoding,pValue) )
    ( (This)->lpVtbl -> ProcessResponseMessage2(This,Flags,strResponse,Encoding,pDisposition) )
    ( (This)->lpVtbl -> get_ResultMessageText(This,pValue) )
    ( (This)->lpVtbl -> get_DelayRetry(This,pValue) )
    ( (This)->lpVtbl -> get_ActivityId(This,pValue) )
    ( (This)->lpVtbl -> put_ActivityId(This,Value) )
EXTERN_C const IID IID_IX509SCEPEnrollmentHelper;
    typedef struct IX509SCEPEnrollmentHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IX509SCEPEnrollmentHelper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IX509SCEPEnrollmentHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IX509SCEPEnrollmentHelper * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IX509SCEPEnrollmentHelper * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IX509SCEPEnrollmentHelper * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IX509SCEPEnrollmentHelper * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IX509SCEPEnrollmentHelper * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IX509SCEPEnrollmentHelper * This,
                       __RPC__in BSTR strServerUrl,
                       __RPC__in BSTR strRequestHeaders,
                       __RPC__in_opt IX509CertificateRequestPkcs10 *pRequest,
                       __RPC__in BSTR strCACertificateThumbprint);
        HRESULT ( STDMETHODCALLTYPE *InitializeForPending )(
            __RPC__in IX509SCEPEnrollmentHelper * This,
                       __RPC__in BSTR strServerUrl,
                       __RPC__in BSTR strRequestHeaders,
                       X509CertificateEnrollmentContext Context,
                       __RPC__in BSTR strTransactionId);
        HRESULT ( STDMETHODCALLTYPE *Enroll )(
            __RPC__in IX509SCEPEnrollmentHelper * This,
                       X509SCEPProcessMessageFlags ProcessFlags,
                                __RPC__out X509SCEPDisposition *pDisposition);
        HRESULT ( STDMETHODCALLTYPE *FetchPending )(
            __RPC__in IX509SCEPEnrollmentHelper * This,
                       X509SCEPProcessMessageFlags ProcessFlags,
                                __RPC__out X509SCEPDisposition *pDisposition);
                        HRESULT ( STDMETHODCALLTYPE *get_X509SCEPEnrollment )(
            __RPC__in IX509SCEPEnrollmentHelper * This,
                                __RPC__deref_out_opt IX509SCEPEnrollment **ppValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ResultMessageText )(
            __RPC__in IX509SCEPEnrollmentHelper * This,
                                __RPC__deref_out_opt BSTR *pValue);
        END_INTERFACE
    } IX509SCEPEnrollmentHelperVtbl;
    interface IX509SCEPEnrollmentHelper
    {
        CONST_VTBL struct IX509SCEPEnrollmentHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,strServerUrl,strRequestHeaders,pRequest,strCACertificateThumbprint) )
    ( (This)->lpVtbl -> InitializeForPending(This,strServerUrl,strRequestHeaders,Context,strTransactionId) )
    ( (This)->lpVtbl -> Enroll(This,ProcessFlags,pDisposition) )
    ( (This)->lpVtbl -> FetchPending(This,ProcessFlags,pDisposition) )
    ( (This)->lpVtbl -> get_X509SCEPEnrollment(This,ppValue) )
    ( (This)->lpVtbl -> get_ResultMessageText(This,pValue) )
typedef
enum X509CertificateTemplateGeneralFlag
    {
        GeneralMachineType = 0x40,
        GeneralCA = 0x80,
        GeneralCrossCA = 0x800,
        GeneralDefault = 0x10000,
        GeneralModified = 0x20000,
        GeneralDonotPersist = 0x1000
    } X509CertificateTemplateGeneralFlag;
typedef
enum X509CertificateTemplateEnrollmentFlag
    {
        EnrollmentIncludeSymmetricAlgorithms = 0x1,
        EnrollmentPendAllRequests = 0x2,
        EnrollmentPublishToKRAContainer = 0x4,
        EnrollmentPublishToDS = 0x8,
        EnrollmentAutoEnrollmentCheckUserDSCertificate = 0x10,
        EnrollmentAutoEnrollment = 0x20,
        EnrollmentDomainAuthenticationNotRequired = 0x80,
        EnrollmentPreviousApprovalValidateReenrollment = 0x40,
        EnrollmentUserInteractionRequired = 0x100,
        EnrollmentAddTemplateName = 0x200,
        EnrollmentRemoveInvalidCertificateFromPersonalStore = 0x400,
        EnrollmentAllowEnrollOnBehalfOf = 0x800,
        EnrollmentAddOCSPNoCheck = 0x1000,
        EnrollmentReuseKeyOnFullSmartCard = 0x2000,
        EnrollmentNoRevocationInfoInCerts = 0x4000,
        EnrollmentIncludeBasicConstraintsForEECerts = 0x8000,
        EnrollmentPreviousApprovalKeyBasedValidateReenrollment = 0x10000,
        EnrollmentCertificateIssuancePoliciesFromRequest = 0x20000,
        EnrollmentSkipAutoRenewal = 0x40000
    } X509CertificateTemplateEnrollmentFlag;
typedef
enum X509CertificateTemplateSubjectNameFlag
    {
        SubjectNameEnrolleeSupplies = 0x1,
        SubjectNameRequireDirectoryPath = 0x80000000,
        SubjectNameRequireCommonName = 0x40000000,
        SubjectNameRequireEmail = 0x20000000,
        SubjectNameRequireDNS = 0x10000000,
        SubjectNameAndAlternativeNameOldCertSupplies = 0x8,
        SubjectAlternativeNameEnrolleeSupplies = 0x10000,
        SubjectAlternativeNameRequireDirectoryGUID = 0x1000000,
        SubjectAlternativeNameRequireUPN = 0x2000000,
        SubjectAlternativeNameRequireEmail = 0x4000000,
        SubjectAlternativeNameRequireSPN = 0x800000,
        SubjectAlternativeNameRequireDNS = 0x8000000,
        SubjectAlternativeNameRequireDomainDNS = 0x400000
    } X509CertificateTemplateSubjectNameFlag;
typedef
enum X509CertificateTemplatePrivateKeyFlag
    {
        PrivateKeyRequireArchival = 0x1,
        PrivateKeyExportable = 0x10,
        PrivateKeyRequireStrongKeyProtection = 0x20,
        PrivateKeyRequireAlternateSignatureAlgorithm = 0x40,
        PrivateKeyRequireSameKeyRenewal = 0x80,
        PrivateKeyUseLegacyProvider = 0x100,
        PrivateKeyEKTrustOnUse = 0x200,
        PrivateKeyEKValidateCert = 0x400,
        PrivateKeyEKValidateKey = 0x800,
        PrivateKeyAttestNone = 0,
        PrivateKeyAttestPreferred = 0x1000,
        PrivateKeyAttestRequired = 0x2000,
        PrivateKeyAttestMask = 0x3000,
        PrivateKeyAttestWithoutPolicy = 0x4000,
        PrivateKeyServerVersionMask = 0xf0000,
        PrivateKeyServerVersionShift = 16,
        PrivateKeyHelloKspKey = 0x100000,
        PrivateKeyHelloLogonKey = 0x200000,
        PrivateKeyClientVersionMask = 0xf000000,
        PrivateKeyClientVersionShift = 24
    } X509CertificateTemplatePrivateKeyFlag;
EXTERN_C const IID LIBID_CERTENROLLLib;
EXTERN_C const CLSID CLSID_CObjectId;
class DECLSPEC_UUID("884e2000-217d-11da-b2a4-000e7bbb2b09")
CObjectId;
EXTERN_C const CLSID CLSID_CObjectIds;
class DECLSPEC_UUID("884e2001-217d-11da-b2a4-000e7bbb2b09")
CObjectIds;
EXTERN_C const CLSID CLSID_CBinaryConverter;
class DECLSPEC_UUID("884e2002-217d-11da-b2a4-000e7bbb2b09")
CBinaryConverter;
EXTERN_C const CLSID CLSID_CX500DistinguishedName;
class DECLSPEC_UUID("884e2003-217d-11da-b2a4-000e7bbb2b09")
CX500DistinguishedName;
EXTERN_C const CLSID CLSID_CCspInformation;
class DECLSPEC_UUID("884e2007-217d-11da-b2a4-000e7bbb2b09")
CCspInformation;
EXTERN_C const CLSID CLSID_CCspInformations;
class DECLSPEC_UUID("884e2008-217d-11da-b2a4-000e7bbb2b09")
CCspInformations;
EXTERN_C const CLSID CLSID_CCspStatus;
class DECLSPEC_UUID("884e2009-217d-11da-b2a4-000e7bbb2b09")
CCspStatus;
EXTERN_C const CLSID CLSID_CX509PublicKey;
class DECLSPEC_UUID("884e200b-217d-11da-b2a4-000e7bbb2b09")
CX509PublicKey;
EXTERN_C const CLSID CLSID_CX509PrivateKey;
class DECLSPEC_UUID("884e200c-217d-11da-b2a4-000e7bbb2b09")
CX509PrivateKey;
EXTERN_C const CLSID CLSID_CX509EndorsementKey;
class DECLSPEC_UUID("11A25A1D-B9A3-4EDD-AF83-3B59ADBED361")
CX509EndorsementKey;
EXTERN_C const CLSID CLSID_CX509Extension;
class DECLSPEC_UUID("884e200d-217d-11da-b2a4-000e7bbb2b09")
CX509Extension;
EXTERN_C const CLSID CLSID_CX509Extensions;
class DECLSPEC_UUID("884e200e-217d-11da-b2a4-000e7bbb2b09")
CX509Extensions;
EXTERN_C const CLSID CLSID_CX509ExtensionKeyUsage;
class DECLSPEC_UUID("884e200f-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionKeyUsage;
EXTERN_C const CLSID CLSID_CX509ExtensionEnhancedKeyUsage;
class DECLSPEC_UUID("884e2010-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionEnhancedKeyUsage;
EXTERN_C const CLSID CLSID_CX509ExtensionTemplateName;
class DECLSPEC_UUID("884e2011-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionTemplateName;
EXTERN_C const CLSID CLSID_CX509ExtensionTemplate;
class DECLSPEC_UUID("884e2012-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionTemplate;
EXTERN_C const CLSID CLSID_CAlternativeName;
class DECLSPEC_UUID("884e2013-217d-11da-b2a4-000e7bbb2b09")
CAlternativeName;
EXTERN_C const CLSID CLSID_CAlternativeNames;
class DECLSPEC_UUID("884e2014-217d-11da-b2a4-000e7bbb2b09")
CAlternativeNames;
EXTERN_C const CLSID CLSID_CX509ExtensionAlternativeNames;
class DECLSPEC_UUID("884e2015-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionAlternativeNames;
EXTERN_C const CLSID CLSID_CX509ExtensionBasicConstraints;
class DECLSPEC_UUID("884e2016-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionBasicConstraints;
EXTERN_C const CLSID CLSID_CX509ExtensionSubjectKeyIdentifier;
class DECLSPEC_UUID("884e2017-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionSubjectKeyIdentifier;
EXTERN_C const CLSID CLSID_CX509ExtensionAuthorityKeyIdentifier;
class DECLSPEC_UUID("884e2018-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionAuthorityKeyIdentifier;
EXTERN_C const CLSID CLSID_CSmimeCapability;
class DECLSPEC_UUID("884e2019-217d-11da-b2a4-000e7bbb2b09")
CSmimeCapability;
EXTERN_C const CLSID CLSID_CSmimeCapabilities;
class DECLSPEC_UUID("884e201a-217d-11da-b2a4-000e7bbb2b09")
CSmimeCapabilities;
EXTERN_C const CLSID CLSID_CX509ExtensionSmimeCapabilities;
class DECLSPEC_UUID("884e201b-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionSmimeCapabilities;
EXTERN_C const CLSID CLSID_CPolicyQualifier;
class DECLSPEC_UUID("884e201c-217d-11da-b2a4-000e7bbb2b09")
CPolicyQualifier;
EXTERN_C const CLSID CLSID_CPolicyQualifiers;
class DECLSPEC_UUID("884e201d-217d-11da-b2a4-000e7bbb2b09")
CPolicyQualifiers;
EXTERN_C const CLSID CLSID_CCertificatePolicy;
class DECLSPEC_UUID("884e201e-217d-11da-b2a4-000e7bbb2b09")
CCertificatePolicy;
EXTERN_C const CLSID CLSID_CCertificatePolicies;
class DECLSPEC_UUID("884e201f-217d-11da-b2a4-000e7bbb2b09")
CCertificatePolicies;
EXTERN_C const CLSID CLSID_CX509ExtensionCertificatePolicies;
class DECLSPEC_UUID("884e2020-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionCertificatePolicies;
EXTERN_C const CLSID CLSID_CX509ExtensionMSApplicationPolicies;
class DECLSPEC_UUID("884e2021-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionMSApplicationPolicies;
EXTERN_C const CLSID CLSID_CX509Attribute;
class DECLSPEC_UUID("884e2022-217d-11da-b2a4-000e7bbb2b09")
CX509Attribute;
EXTERN_C const CLSID CLSID_CX509Attributes;
class DECLSPEC_UUID("884e2023-217d-11da-b2a4-000e7bbb2b09")
CX509Attributes;
EXTERN_C const CLSID CLSID_CX509AttributeExtensions;
class DECLSPEC_UUID("884e2024-217d-11da-b2a4-000e7bbb2b09")
CX509AttributeExtensions;
EXTERN_C const CLSID CLSID_CX509AttributeClientId;
class DECLSPEC_UUID("884e2025-217d-11da-b2a4-000e7bbb2b09")
CX509AttributeClientId;
EXTERN_C const CLSID CLSID_CX509AttributeRenewalCertificate;
class DECLSPEC_UUID("884e2026-217d-11da-b2a4-000e7bbb2b09")
CX509AttributeRenewalCertificate;
EXTERN_C const CLSID CLSID_CX509AttributeArchiveKey;
class DECLSPEC_UUID("884e2027-217d-11da-b2a4-000e7bbb2b09")
CX509AttributeArchiveKey;
EXTERN_C const CLSID CLSID_CX509AttributeArchiveKeyHash;
class DECLSPEC_UUID("884e2028-217d-11da-b2a4-000e7bbb2b09")
CX509AttributeArchiveKeyHash;
EXTERN_C const CLSID CLSID_CX509AttributeOSVersion;
class DECLSPEC_UUID("884e202a-217d-11da-b2a4-000e7bbb2b09")
CX509AttributeOSVersion;
EXTERN_C const CLSID CLSID_CX509AttributeCspProvider;
class DECLSPEC_UUID("884e202b-217d-11da-b2a4-000e7bbb2b09")
CX509AttributeCspProvider;
EXTERN_C const CLSID CLSID_CCryptAttribute;
class DECLSPEC_UUID("884e202c-217d-11da-b2a4-000e7bbb2b09")
CCryptAttribute;
EXTERN_C const CLSID CLSID_CCryptAttributes;
class DECLSPEC_UUID("884e202d-217d-11da-b2a4-000e7bbb2b09")
CCryptAttributes;
EXTERN_C const CLSID CLSID_CCertProperty;
class DECLSPEC_UUID("884e202e-217d-11da-b2a4-000e7bbb2b09")
CCertProperty;
EXTERN_C const CLSID CLSID_CCertProperties;
class DECLSPEC_UUID("884e202f-217d-11da-b2a4-000e7bbb2b09")
CCertProperties;
EXTERN_C const CLSID CLSID_CCertPropertyFriendlyName;
class DECLSPEC_UUID("884e2030-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyFriendlyName;
EXTERN_C const CLSID CLSID_CCertPropertyDescription;
class DECLSPEC_UUID("884e2031-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyDescription;
EXTERN_C const CLSID CLSID_CCertPropertyAutoEnroll;
class DECLSPEC_UUID("884e2032-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyAutoEnroll;
EXTERN_C const CLSID CLSID_CCertPropertyRequestOriginator;
class DECLSPEC_UUID("884e2033-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyRequestOriginator;
EXTERN_C const CLSID CLSID_CCertPropertySHA1Hash;
class DECLSPEC_UUID("884e2034-217d-11da-b2a4-000e7bbb2b09")
CCertPropertySHA1Hash;
EXTERN_C const CLSID CLSID_CCertPropertyKeyProvInfo;
class DECLSPEC_UUID("884e2036-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyKeyProvInfo;
EXTERN_C const CLSID CLSID_CCertPropertyArchived;
class DECLSPEC_UUID("884e2037-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyArchived;
EXTERN_C const CLSID CLSID_CCertPropertyBackedUp;
class DECLSPEC_UUID("884e2038-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyBackedUp;
EXTERN_C const CLSID CLSID_CCertPropertyEnrollment;
class DECLSPEC_UUID("884e2039-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyEnrollment;
EXTERN_C const CLSID CLSID_CCertPropertyRenewal;
class DECLSPEC_UUID("884e203a-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyRenewal;
EXTERN_C const CLSID CLSID_CCertPropertyArchivedKeyHash;
class DECLSPEC_UUID("884e203b-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyArchivedKeyHash;
EXTERN_C const CLSID CLSID_CCertPropertyEnrollmentPolicyServer;
class DECLSPEC_UUID("884e204c-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyEnrollmentPolicyServer;
EXTERN_C const CLSID CLSID_CSignerCertificate;
class DECLSPEC_UUID("884e203d-217d-11da-b2a4-000e7bbb2b09")
CSignerCertificate;
EXTERN_C const CLSID CLSID_CX509NameValuePair;
class DECLSPEC_UUID("884e203f-217d-11da-b2a4-000e7bbb2b09")
CX509NameValuePair;
EXTERN_C const CLSID CLSID_CCertificateAttestationChallenge;
class DECLSPEC_UUID("1362ADA1-EB60-456A-B6E1-118050DB741B")
CCertificateAttestationChallenge;
EXTERN_C const CLSID CLSID_CX509CertificateRequestPkcs10;
class DECLSPEC_UUID("884e2042-217d-11da-b2a4-000e7bbb2b09")
CX509CertificateRequestPkcs10;
EXTERN_C const CLSID CLSID_CX509CertificateRequestCertificate;
class DECLSPEC_UUID("884e2043-217d-11da-b2a4-000e7bbb2b09")
CX509CertificateRequestCertificate;
EXTERN_C const CLSID CLSID_CX509CertificateRequestPkcs7;
class DECLSPEC_UUID("884e2044-217d-11da-b2a4-000e7bbb2b09")
CX509CertificateRequestPkcs7;
EXTERN_C const CLSID CLSID_CX509CertificateRequestCmc;
class DECLSPEC_UUID("884e2045-217d-11da-b2a4-000e7bbb2b09")
CX509CertificateRequestCmc;
EXTERN_C const CLSID CLSID_CX509Enrollment;
class DECLSPEC_UUID("884e2046-217d-11da-b2a4-000e7bbb2b09")
CX509Enrollment;
EXTERN_C const CLSID CLSID_CX509EnrollmentWebClassFactory;
class DECLSPEC_UUID("884e2049-217d-11da-b2a4-000e7bbb2b09")
CX509EnrollmentWebClassFactory;
EXTERN_C const CLSID CLSID_CX509EnrollmentHelper;
class DECLSPEC_UUID("884e2050-217d-11da-b2a4-000e7bbb2b09")
CX509EnrollmentHelper;
EXTERN_C const CLSID CLSID_CX509MachineEnrollmentFactory;
class DECLSPEC_UUID("884e2051-217d-11da-b2a4-000e7bbb2b09")
CX509MachineEnrollmentFactory;
EXTERN_C const CLSID CLSID_CX509EnrollmentPolicyActiveDirectory;
class DECLSPEC_UUID("91f39027-217f-11da-b2a4-000e7bbb2b09")
CX509EnrollmentPolicyActiveDirectory;
EXTERN_C const CLSID CLSID_CX509EnrollmentPolicyWebService;
class DECLSPEC_UUID("91f39028-217f-11da-b2a4-000e7bbb2b09")
CX509EnrollmentPolicyWebService;
EXTERN_C const CLSID CLSID_CX509PolicyServerListManager;
class DECLSPEC_UUID("91f39029-217f-11da-b2a4-000e7bbb2b09")
CX509PolicyServerListManager;
EXTERN_C const CLSID CLSID_CX509PolicyServerUrl;
class DECLSPEC_UUID("91f3902a-217f-11da-b2a4-000e7bbb2b09")
CX509PolicyServerUrl;
EXTERN_C const CLSID CLSID_CX509CertificateTemplateADWritable;
class DECLSPEC_UUID("8336E323-2E6A-4a04-937C-548F681839B3")
CX509CertificateTemplateADWritable;
EXTERN_C const CLSID CLSID_CX509CertificateRevocationListEntry;
class DECLSPEC_UUID("884e205e-217d-11da-b2a4-000e7bbb2b09")
CX509CertificateRevocationListEntry;
EXTERN_C const CLSID CLSID_CX509CertificateRevocationListEntries;
class DECLSPEC_UUID("884e205f-217d-11da-b2a4-000e7bbb2b09")
CX509CertificateRevocationListEntries;
EXTERN_C const CLSID CLSID_CX509CertificateRevocationList;
class DECLSPEC_UUID("884e2060-217d-11da-b2a4-000e7bbb2b09")
CX509CertificateRevocationList;
EXTERN_C const CLSID CLSID_CX509SCEPEnrollment;
class DECLSPEC_UUID("884e2061-217d-11da-b2a4-000e7bbb2b09")
CX509SCEPEnrollment;
EXTERN_C const CLSID CLSID_CX509SCEPEnrollmentHelper;
class DECLSPEC_UUID("884e2062-217d-11da-b2a4-000e7bbb2b09")
CX509SCEPEnrollmentHelper;
extern "C" {
typedef
enum ImportPFXFlags
    {
        ImportNone = 0,
        ImportMachineContext = 0x1,
        ImportForceOverwrite = 0x2,
        ImportSilent = 0x4,
        ImportSaveProperties = 0x8,
        ImportExportable = 0x10,
        ImportExportableEncrypted = 0x20,
        ImportNoUserProtected = 0x40,
        ImportUserProtected = 0x80,
        ImportUserProtectedHigh = 0x100,
        ImportInstallCertificate = 0x200,
        ImportInstallChain = 0x400,
        ImportInstallChainAndRoot = 0x800
    } ImportPFXFlags;
typedef HRESULT (FNIMPORTPFXTOPROVIDER)(
            _In_ HWND hWndParent,
            _In_reads_bytes_(cbPFX) BYTE const *pbPFX,
            _In_ DWORD cbPFX,
            _In_ ImportPFXFlags ImportFlags,
            _In_opt_ PCWSTR pwszPassword,
            _In_opt_ PCWSTR pwszProviderName,
            _In_opt_ PCWSTR pwszReaderName,
            _In_opt_ PCWSTR pwszContainerNamePrefix,
            _In_opt_ PCWSTR pwszPin,
            _In_opt_ PCWSTR pwszFriendlyName,
            _Out_opt_ DWORD *pcCertOut,
            _Outptr_opt_result_buffer_(*pcCertOut) PCCERT_CONTEXT **prgpCertOut);
typedef VOID (FNIMPORTPFXTOPROVIDERFREEDATA)(
            _In_ DWORD cCert,
            _In_reads_opt_(cCert) PCCERT_CONTEXT *rgpCert);
FNIMPORTPFXTOPROVIDER ImportPFXToProvider;
FNIMPORTPFXTOPROVIDERFREEDATA ImportPFXToProviderFreeData;
}
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0100_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0100_v0_0_s_ifspec;
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
