       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <winsock2.h>
#include <ws2tcpip.h>
extern "C" {
typedef enum _HTTP_SERVER_PROPERTY
{
    HttpServerAuthenticationProperty = 0,
    HttpServerLoggingProperty = 1,
    HttpServerQosProperty = 2,
    HttpServerTimeoutsProperty = 3,
    HttpServerQueueLengthProperty = 4,
    HttpServerStateProperty = 5,
    HttpServer503VerbosityProperty = 6,
    HttpServerBindingProperty = 7,
    HttpServerExtendedAuthenticationProperty = 8,
    HttpServerListenEndpointProperty = 9,
    HttpServerChannelBindProperty = 10,
    HttpServerProtectionLevelProperty = 11,
} HTTP_SERVER_PROPERTY, *PHTTP_SERVER_PROPERTY;
typedef struct _HTTP_PROPERTY_FLAGS
{
    ULONG Present:1;
} HTTP_PROPERTY_FLAGS, *PHTTP_PROPERTY_FLAGS;
typedef enum _HTTP_ENABLED_STATE
{
    HttpEnabledStateActive,
    HttpEnabledStateInactive,
} HTTP_ENABLED_STATE, *PHTTP_ENABLED_STATE;
typedef struct _HTTP_STATE_INFO
{
    HTTP_PROPERTY_FLAGS Flags;
    HTTP_ENABLED_STATE State;
} HTTP_STATE_INFO, *PHTTP_STATE_INFO;
typedef enum _HTTP_503_RESPONSE_VERBOSITY
{
    Http503ResponseVerbosityBasic,
    Http503ResponseVerbosityLimited,
    Http503ResponseVerbosityFull
} HTTP_503_RESPONSE_VERBOSITY, *PHTTP_503_RESPONSE_VERBOSITY;
typedef enum _HTTP_QOS_SETTING_TYPE
{
    HttpQosSettingTypeBandwidth,
    HttpQosSettingTypeConnectionLimit,
    HttpQosSettingTypeFlowRate
} HTTP_QOS_SETTING_TYPE, *PHTTP_QOS_SETTING_TYPE;
typedef struct _HTTP_QOS_SETTING_INFO
{
    HTTP_QOS_SETTING_TYPE QosType;
    PVOID QosSetting;
} HTTP_QOS_SETTING_INFO, *PHTTP_QOS_SETTING_INFO;
typedef struct _HTTP_CONNECTION_LIMIT_INFO
{
    HTTP_PROPERTY_FLAGS Flags;
    ULONG MaxConnections;
} HTTP_CONNECTION_LIMIT_INFO, *PHTTP_CONNECTION_LIMIT_INFO;
typedef struct _HTTP_BANDWIDTH_LIMIT_INFO
{
    HTTP_PROPERTY_FLAGS Flags;
    ULONG MaxBandwidth;
} HTTP_BANDWIDTH_LIMIT_INFO, *PHTTP_BANDWIDTH_LIMIT_INFO;
typedef struct _HTTP_FLOWRATE_INFO
{
    HTTP_PROPERTY_FLAGS Flags;
    ULONG MaxBandwidth;
    ULONG MaxPeakBandwidth;
    ULONG BurstSize;
} HTTP_FLOWRATE_INFO, *PHTTP_FLOWRATE_INFO;
typedef enum _HTTP_SERVICE_CONFIG_TIMEOUT_KEY
{
    IdleConnectionTimeout = 0,
    HeaderWaitTimeout
} HTTP_SERVICE_CONFIG_TIMEOUT_KEY, *PHTTP_SERVICE_CONFIG_TIMEOUT_KEY;
typedef USHORT HTTP_SERVICE_CONFIG_TIMEOUT_PARAM,
               *PHTTP_SERVICE_CONFIG_TIMEOUT_PARAM;
typedef struct _HTTP_SERVICE_CONFIG_TIMEOUT_SET
{
    HTTP_SERVICE_CONFIG_TIMEOUT_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_TIMEOUT_PARAM ParamDesc;
} HTTP_SERVICE_CONFIG_TIMEOUT_SET, *PHTTP_SERVICE_CONFIG_TIMEOUT_SET;
typedef struct _HTTP_TIMEOUT_LIMIT_INFO
{
    HTTP_PROPERTY_FLAGS Flags;
    USHORT EntityBody;
    USHORT DrainEntityBody;
    USHORT RequestQueue;
    USHORT IdleConnection;
    USHORT HeaderWait;
    ULONG MinSendRate;
} HTTP_TIMEOUT_LIMIT_INFO, *PHTTP_TIMEOUT_LIMIT_INFO;
typedef enum _HTTP_SERVICE_CONFIG_SETTING_KEY
{
    HttpNone = 0,
    HttpTlsThrottle
} HTTP_SERVICE_CONFIG_SETTING_KEY, *PHTTP_SERVICE_CONFIG_SETTING_KEY;
typedef ULONG HTTP_SERVICE_CONFIG_SETTING_PARAM,
               *PHTTP_SERVICE_CONFIG_SETTING_PARAM;
typedef struct _HTTP_SERVICE_CONFIG_SETTING_SET
{
    HTTP_SERVICE_CONFIG_SETTING_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_SETTING_PARAM ParamDesc;
} HTTP_SERVICE_CONFIG_SETTING_SET, *PHTTP_SERVICE_CONFIG_SETTING_SET;
typedef struct _HTTP_LISTEN_ENDPOINT_INFO
{
    HTTP_PROPERTY_FLAGS Flags;
    BOOLEAN EnableSharing;
} HTTP_LISTEN_ENDPOINT_INFO, *PHTTP_LISTEN_ENDPOINT_INFO;
typedef struct _HTTP_SERVER_AUTHENTICATION_DIGEST_PARAMS
{
    USHORT DomainNameLength;
    PWSTR DomainName;
    USHORT RealmLength;
    PWSTR Realm;
} HTTP_SERVER_AUTHENTICATION_DIGEST_PARAMS,
  *PHTTP_SERVER_AUTHENTICATION_DIGEST_PARAMS;
typedef struct _HTTP_SERVER_AUTHENTICATION_BASIC_PARAMS
{
    USHORT RealmLength;
    PWSTR Realm;
} HTTP_SERVER_AUTHENTICATION_BASIC_PARAMS,
  *PHTTP_SERVER_AUTHENTICATION_BASIC_PARAMS;
            (HTTP_AUTH_ENABLE_BASIC |\
             HTTP_AUTH_ENABLE_DIGEST |\
             HTTP_AUTH_ENABLE_NTLM |\
             HTTP_AUTH_ENABLE_NEGOTIATE |\
             HTTP_AUTH_ENABLE_KERBEROS)
C_ASSERT(HTTP_AUTH_ENABLE_NEGOTIATE > HTTP_AUTH_ENABLE_NTLM);
C_ASSERT(HTTP_AUTH_ENABLE_NTLM > HTTP_AUTH_ENABLE_DIGEST);
C_ASSERT(HTTP_AUTH_ENABLE_DIGEST > HTTP_AUTH_ENABLE_BASIC);
typedef struct _HTTP_SERVER_AUTHENTICATION_INFO
{
    HTTP_PROPERTY_FLAGS Flags;
    ULONG AuthSchemes;
    BOOLEAN ReceiveMutualAuth;
    BOOLEAN ReceiveContextHandle;
    BOOLEAN DisableNTLMCredentialCaching;
    UCHAR ExFlags;
    HTTP_SERVER_AUTHENTICATION_DIGEST_PARAMS DigestParams;
    HTTP_SERVER_AUTHENTICATION_BASIC_PARAMS BasicParams;
} HTTP_SERVER_AUTHENTICATION_INFO, *PHTTP_SERVER_AUTHENTICATION_INFO;
typedef enum _HTTP_SERVICE_BINDING_TYPE
{
    HttpServiceBindingTypeNone = 0,
    HttpServiceBindingTypeW,
    HttpServiceBindingTypeA
} HTTP_SERVICE_BINDING_TYPE;
typedef struct _HTTP_SERVICE_BINDING_BASE
{
    HTTP_SERVICE_BINDING_TYPE Type;
} HTTP_SERVICE_BINDING_BASE, *PHTTP_SERVICE_BINDING_BASE;
typedef struct _HTTP_SERVICE_BINDING_A
{
    HTTP_SERVICE_BINDING_BASE Base;
    PCHAR Buffer;
    ULONG BufferSize;
} HTTP_SERVICE_BINDING_A, *PHTTP_SERVICE_BINDING_A;
typedef struct _HTTP_SERVICE_BINDING_W
{
    HTTP_SERVICE_BINDING_BASE Base;
    PWCHAR Buffer;
    ULONG BufferSize;
} HTTP_SERVICE_BINDING_W, *PHTTP_SERVICE_BINDING_W;
typedef enum _HTTP_AUTHENTICATION_HARDENING_LEVELS
{
    HttpAuthenticationHardeningLegacy = 0,
    HttpAuthenticationHardeningMedium,
    HttpAuthenticationHardeningStrict
} HTTP_AUTHENTICATION_HARDENING_LEVELS;
typedef struct _HTTP_CHANNEL_BIND_INFO
{
    HTTP_AUTHENTICATION_HARDENING_LEVELS Hardening;
    ULONG Flags;
    PHTTP_SERVICE_BINDING_BASE * ServiceNames;
    ULONG NumberOfServiceNames;
} HTTP_CHANNEL_BIND_INFO, *PHTTP_CHANNEL_BIND_INFO;
typedef struct _HTTP_REQUEST_CHANNEL_BIND_STATUS
{
    PHTTP_SERVICE_BINDING_BASE ServiceName;
    PUCHAR ChannelToken;
    ULONG ChannelTokenSize;
    ULONG Flags;
} HTTP_REQUEST_CHANNEL_BIND_STATUS, *PHTTP_REQUEST_CHANNEL_BIND_STATUS;
typedef struct _HTTP_REQUEST_TOKEN_BINDING_INFO
{
    PUCHAR TokenBinding;
    ULONG TokenBindingSize;
    PUCHAR EKM;
    ULONG EKMSize;
    UCHAR KeyType;
} HTTP_REQUEST_TOKEN_BINDING_INFO, *PHTTP_REQUEST_TOKEN_BINDING_INFO;
typedef enum _HTTP_LOGGING_TYPE
{
    HttpLoggingTypeW3C,
    HttpLoggingTypeIIS,
    HttpLoggingTypeNCSA,
    HttpLoggingTypeRaw
} HTTP_LOGGING_TYPE, *PHTTP_LOGGING_TYPE;
typedef enum _HTTP_LOGGING_ROLLOVER_TYPE
{
    HttpLoggingRolloverSize,
    HttpLoggingRolloverDaily,
    HttpLoggingRolloverWeekly,
    HttpLoggingRolloverMonthly,
    HttpLoggingRolloverHourly
} HTTP_LOGGING_ROLLOVER_TYPE, *PHTTP_LOGGING_ROLLOVER_TYPE;
typedef struct _HTTP_LOGGING_INFO
{
    HTTP_PROPERTY_FLAGS Flags;
    ULONG LoggingFlags;
    PCWSTR SoftwareName;
    USHORT SoftwareNameLength;
    USHORT DirectoryNameLength;
    PCWSTR DirectoryName;
    HTTP_LOGGING_TYPE Format;
    ULONG Fields;
    PVOID pExtFields;
    USHORT NumOfExtFields;
    USHORT MaxRecordSize;
    HTTP_LOGGING_ROLLOVER_TYPE RolloverType;
    ULONG RolloverSize;
    PSECURITY_DESCRIPTOR pSecurityDescriptor;
} HTTP_LOGGING_INFO, *PHTTP_LOGGING_INFO;
typedef struct _HTTP_BINDING_INFO
{
    HTTP_PROPERTY_FLAGS Flags;
    HANDLE RequestQueueHandle;
} HTTP_BINDING_INFO, *PHTTP_BINDING_INFO;
typedef enum _HTTP_PROTECTION_LEVEL_TYPE
{
    HttpProtectionLevelUnrestricted,
    HttpProtectionLevelEdgeRestricted,
    HttpProtectionLevelRestricted
} HTTP_PROTECTION_LEVEL_TYPE, *PHTTP_PROTECTION_LEVEL_TYPE;
typedef struct _HTTP_PROTECTION_LEVEL_INFO
{
    HTTP_PROPERTY_FLAGS Flags;
    HTTP_PROTECTION_LEVEL_TYPE Level;
} HTTP_PROTECTION_LEVEL_INFO, *PHTTP_PROTECTION_LEVEL_INFO;
typedef ULONGLONG HTTP_OPAQUE_ID, *PHTTP_OPAQUE_ID;
typedef HTTP_OPAQUE_ID HTTP_REQUEST_ID, *PHTTP_REQUEST_ID;
typedef HTTP_OPAQUE_ID HTTP_CONNECTION_ID, *PHTTP_CONNECTION_ID;
typedef HTTP_OPAQUE_ID HTTP_RAW_CONNECTION_ID, *PHTTP_RAW_CONNECTION_ID;
typedef HTTP_OPAQUE_ID HTTP_URL_GROUP_ID, *PHTTP_URL_GROUP_ID;
typedef HTTP_OPAQUE_ID HTTP_SERVER_SESSION_ID, *PHTTP_SERVER_SESSION_ID;
typedef HTTP_OPAQUE_ID HTTP_CLIENT_REQUEST_ID, *PHTTP_CLIENT_REQUEST_ID;
typedef struct _HTTP_BYTE_RANGE
{
    ULARGE_INTEGER StartingOffset;
    ULARGE_INTEGER Length;
} HTTP_BYTE_RANGE, *PHTTP_BYTE_RANGE;
typedef struct _HTTP_VERSION
{
    USHORT MajorVersion;
    USHORT MinorVersion;
} HTTP_VERSION, *PHTTP_VERSION;
do { \
    (version).MajorVersion = (major); \
    (version).MinorVersion = (minor); \
} while (0, 0)
    ((version).MajorVersion == (major) && \
     (version).MinorVersion == (minor))
    ((version).MajorVersion > (major) || \
     ((version).MajorVersion == (major) && \
      (version).MinorVersion > (minor)))
    ((version).MajorVersion < (major) || \
     ((version).MajorVersion == (major) && \
      (version).MinorVersion < (minor)))
    (!HTTP_EQUAL_VERSION(version, major, minor))
    (!HTTP_LESS_VERSION(version, major, minor))
    (!HTTP_GREATER_VERSION(version, major, minor))
typedef enum _HTTP_URI_SCHEME
{
    HttpSchemeHttp,
    HttpSchemeHttps,
    HttpSchemeMaximum
} HTTP_SCHEME, *PHTTP_URI_SCHEME;
typedef enum _HTTP_VERB
{
    HttpVerbUnparsed,
    HttpVerbUnknown,
    HttpVerbInvalid,
    HttpVerbOPTIONS,
    HttpVerbGET,
    HttpVerbHEAD,
    HttpVerbPOST,
    HttpVerbPUT,
    HttpVerbDELETE,
    HttpVerbTRACE,
    HttpVerbCONNECT,
    HttpVerbTRACK,
    HttpVerbMOVE,
    HttpVerbCOPY,
    HttpVerbPROPFIND,
    HttpVerbPROPPATCH,
    HttpVerbMKCOL,
    HttpVerbLOCK,
    HttpVerbUNLOCK,
    HttpVerbSEARCH,
    HttpVerbMaximum
} HTTP_VERB, *PHTTP_VERB;
typedef enum _HTTP_HEADER_ID
{
    HttpHeaderCacheControl = 0,
    HttpHeaderConnection = 1,
    HttpHeaderDate = 2,
    HttpHeaderKeepAlive = 3,
    HttpHeaderPragma = 4,
    HttpHeaderTrailer = 5,
    HttpHeaderTransferEncoding = 6,
    HttpHeaderUpgrade = 7,
    HttpHeaderVia = 8,
    HttpHeaderWarning = 9,
    HttpHeaderAllow = 10,
    HttpHeaderContentLength = 11,
    HttpHeaderContentType = 12,
    HttpHeaderContentEncoding = 13,
    HttpHeaderContentLanguage = 14,
    HttpHeaderContentLocation = 15,
    HttpHeaderContentMd5 = 16,
    HttpHeaderContentRange = 17,
    HttpHeaderExpires = 18,
    HttpHeaderLastModified = 19,
    HttpHeaderAccept = 20,
    HttpHeaderAcceptCharset = 21,
    HttpHeaderAcceptEncoding = 22,
    HttpHeaderAcceptLanguage = 23,
    HttpHeaderAuthorization = 24,
    HttpHeaderCookie = 25,
    HttpHeaderExpect = 26,
    HttpHeaderFrom = 27,
    HttpHeaderHost = 28,
    HttpHeaderIfMatch = 29,
    HttpHeaderIfModifiedSince = 30,
    HttpHeaderIfNoneMatch = 31,
    HttpHeaderIfRange = 32,
    HttpHeaderIfUnmodifiedSince = 33,
    HttpHeaderMaxForwards = 34,
    HttpHeaderProxyAuthorization = 35,
    HttpHeaderReferer = 36,
    HttpHeaderRange = 37,
    HttpHeaderTe = 38,
    HttpHeaderTranslate = 39,
    HttpHeaderUserAgent = 40,
    HttpHeaderRequestMaximum = 41,
    HttpHeaderAcceptRanges = 20,
    HttpHeaderAge = 21,
    HttpHeaderEtag = 22,
    HttpHeaderLocation = 23,
    HttpHeaderProxyAuthenticate = 24,
    HttpHeaderRetryAfter = 25,
    HttpHeaderServer = 26,
    HttpHeaderSetCookie = 27,
    HttpHeaderVary = 28,
    HttpHeaderWwwAuthenticate = 29,
    HttpHeaderResponseMaximum = 30,
    HttpHeaderMaximum = 41
} HTTP_HEADER_ID, *PHTTP_HEADER_ID;
typedef struct _HTTP_KNOWN_HEADER
{
    USHORT RawValueLength;
    PCSTR pRawValue;
} HTTP_KNOWN_HEADER, *PHTTP_KNOWN_HEADER;
typedef struct _HTTP_UNKNOWN_HEADER
{
    USHORT NameLength;
    USHORT RawValueLength;
    PCSTR pName;
    PCSTR pRawValue;
} HTTP_UNKNOWN_HEADER, *PHTTP_UNKNOWN_HEADER;
typedef enum _HTTP_LOG_DATA_TYPE
{
    HttpLogDataTypeFields = 0
} HTTP_LOG_DATA_TYPE, *PHTTP_LOG_DATA_TYPE;
typedef struct _HTTP_LOG_DATA
{
    HTTP_LOG_DATA_TYPE Type;
} HTTP_LOG_DATA, *PHTTP_LOG_DATA;
typedef struct _HTTP_LOG_FIELDS_DATA
{
    HTTP_LOG_DATA Base;
    USHORT UserNameLength;
    USHORT UriStemLength;
    USHORT ClientIpLength;
    USHORT ServerNameLength;
    USHORT ServiceNameLength;
    USHORT ServerIpLength;
    USHORT MethodLength;
    USHORT UriQueryLength;
    USHORT HostLength;
    USHORT UserAgentLength;
    USHORT CookieLength;
    USHORT ReferrerLength;
    PWCHAR UserName;
    PWCHAR UriStem;
    PCHAR ClientIp;
    PCHAR ServerName;
    PCHAR ServiceName;
    PCHAR ServerIp;
    PCHAR Method;
    PCHAR UriQuery;
    PCHAR Host;
    PCHAR UserAgent;
    PCHAR Cookie;
    PCHAR Referrer;
    USHORT ServerPort;
    USHORT ProtocolStatus;
    ULONG Win32Status;
    HTTP_VERB MethodNum;
    USHORT SubStatus;
} HTTP_LOG_FIELDS_DATA, *PHTTP_LOG_FIELDS_DATA;
typedef enum _HTTP_DATA_CHUNK_TYPE
{
    HttpDataChunkFromMemory,
    HttpDataChunkFromFileHandle,
    HttpDataChunkFromFragmentCache,
    HttpDataChunkFromFragmentCacheEx,
    HttpDataChunkMaximum
} HTTP_DATA_CHUNK_TYPE, *PHTTP_DATA_CHUNK_TYPE;
typedef struct _HTTP_DATA_CHUNK
{
    HTTP_DATA_CHUNK_TYPE DataChunkType;
    union
    {
        struct
        {
            PVOID pBuffer;
            ULONG BufferLength;
        } FromMemory;
        struct
        {
            HTTP_BYTE_RANGE ByteRange;
            HANDLE FileHandle;
        } FromFileHandle;
        struct
        {
            USHORT FragmentNameLength;
            PCWSTR pFragmentName;
        } FromFragmentCache;
        struct
        {
            HTTP_BYTE_RANGE ByteRange;
            PCWSTR pFragmentName;
        } FromFragmentCacheEx;
    };
} HTTP_DATA_CHUNK, *PHTTP_DATA_CHUNK;
C_ASSERT(TYPE_ALIGNMENT(HTTP_DATA_CHUNK) == sizeof(ULONGLONG));
typedef struct _HTTP_REQUEST_HEADERS
{
    USHORT UnknownHeaderCount;
    PHTTP_UNKNOWN_HEADER pUnknownHeaders;
    USHORT TrailerCount;
    PHTTP_UNKNOWN_HEADER pTrailers;
    HTTP_KNOWN_HEADER KnownHeaders[HttpHeaderRequestMaximum];
} HTTP_REQUEST_HEADERS, *PHTTP_REQUEST_HEADERS;
typedef struct _HTTP_RESPONSE_HEADERS
{
    USHORT UnknownHeaderCount;
    PHTTP_UNKNOWN_HEADER pUnknownHeaders;
    USHORT TrailerCount;
    PHTTP_UNKNOWN_HEADER pTrailers;
    HTTP_KNOWN_HEADER KnownHeaders[HttpHeaderResponseMaximum];
} HTTP_RESPONSE_HEADERS, *PHTTP_RESPONSE_HEADERS;
typedef enum _HTTP_DELEGATE_REQUEST_PROPERTY_ID
{
    DelegateRequestReservedProperty,
} HTTP_DELEGATE_REQUEST_PROPERTY_ID, *PHTTP_DELEGATE_REQUEST_PROPERTY_ID;
typedef struct _HTTP_DELEGATE_REQUEST_PROPERTY_INFO
{
    HTTP_DELEGATE_REQUEST_PROPERTY_ID ProperyId;
    ULONG PropertyInfoLength;
    PVOID PropertyInfo;
} HTTP_DELEGATE_REQUEST_PROPERTY_INFO, *PHTTP_DELEGATE_REQUEST_PROPERTY_INFO;
typedef struct _HTTP_TRANSPORT_ADDRESS
{
    PSOCKADDR pRemoteAddress;
    PSOCKADDR pLocalAddress;
} HTTP_TRANSPORT_ADDRESS, *PHTTP_TRANSPORT_ADDRESS;
typedef struct _HTTP_COOKED_URL
{
    USHORT FullUrlLength;
    USHORT HostLength;
    USHORT AbsPathLength;
    USHORT QueryStringLength;
    PCWSTR pFullUrl;
    PCWSTR pHost;
    PCWSTR pAbsPath;
    PCWSTR pQueryString;
} HTTP_COOKED_URL, *PHTTP_COOKED_URL;
typedef ULONGLONG HTTP_URL_CONTEXT;
typedef enum _HTTP_AUTH_STATUS
{
    HttpAuthStatusSuccess,
    HttpAuthStatusNotAuthenticated,
    HttpAuthStatusFailure
} HTTP_AUTH_STATUS, *PHTTP_AUTH_STATUS;
typedef enum _HTTP_REQUEST_AUTH_TYPE
{
    HttpRequestAuthTypeNone = 0,
    HttpRequestAuthTypeBasic,
    HttpRequestAuthTypeDigest,
    HttpRequestAuthTypeNTLM,
    HttpRequestAuthTypeNegotiate,
    HttpRequestAuthTypeKerberos
} HTTP_REQUEST_AUTH_TYPE, *PHTTP_REQUEST_AUTH_TYPE;
typedef struct _HTTP_SSL_CLIENT_CERT_INFO
{
    ULONG CertFlags;
    ULONG CertEncodedSize;
    PUCHAR pCertEncoded;
    HANDLE Token;
    BOOLEAN CertDeniedByMapper;
} HTTP_SSL_CLIENT_CERT_INFO, *PHTTP_SSL_CLIENT_CERT_INFO;
typedef struct _HTTP_SSL_INFO
{
    USHORT ServerCertKeySize;
    USHORT ConnectionKeySize;
    ULONG ServerCertIssuerSize;
    ULONG ServerCertSubjectSize;
    PCSTR pServerCertIssuer;
    PCSTR pServerCertSubject;
    PHTTP_SSL_CLIENT_CERT_INFO pClientCertInfo;
    ULONG SslClientCertNegotiated;
} HTTP_SSL_INFO, *PHTTP_SSL_INFO;
typedef struct _HTTP_SSL_PROTOCOL_INFO
{
    ULONG Protocol;
    ULONG CipherType;
    ULONG CipherStrength;
    ULONG HashType;
    ULONG HashStrength;
    ULONG KeyExchangeType;
    ULONG KeyExchangeStrength;
} HTTP_SSL_PROTOCOL_INFO, *PHTTP_SSL_PROTOCOL_INFO;
typedef enum _HTTP_REQUEST_SIZING_TYPE
{
    HttpRequestSizingTypeTlsHandshakeLeg1ClientData,
    HttpRequestSizingTypeTlsHandshakeLeg1ServerData,
    HttpRequestSizingTypeTlsHandshakeLeg2ClientData,
    HttpRequestSizingTypeTlsHandshakeLeg2ServerData,
    HttpRequestSizingTypeHeaders,
    HttpRequestSizingTypeMax
} HTTP_REQUEST_SIZING_TYPE, *PHTTP_REQUEST_SIZING_TYPE;
typedef struct _HTTP_REQUEST_SIZING_INFO
{
    ULONGLONG Flags;
    ULONG RequestIndex;
    ULONG RequestSizingCount;
    ULONGLONG RequestSizing[HttpRequestSizingTypeMax];
} HTTP_REQUEST_SIZING_INFO, *PHTTP_REQUEST_SIZING_INFO;
typedef enum _HTTP_REQUEST_TIMING_TYPE
{
    HttpRequestTimingTypeConnectionStart,
    HttpRequestTimingTypeDataStart,
    HttpRequestTimingTypeTlsCertificateLoadStart,
    HttpRequestTimingTypeTlsCertificateLoadEnd,
    HttpRequestTimingTypeTlsHandshakeLeg1Start,
    HttpRequestTimingTypeTlsHandshakeLeg1End,
    HttpRequestTimingTypeTlsHandshakeLeg2Start,
    HttpRequestTimingTypeTlsHandshakeLeg2End,
    HttpRequestTimingTypeTlsAttributesQueryStart,
    HttpRequestTimingTypeTlsAttributesQueryEnd,
    HttpRequestTimingTypeTlsClientCertQueryStart,
    HttpRequestTimingTypeTlsClientCertQueryEnd,
    HttpRequestTimingTypeHttp2StreamStart,
    HttpRequestTimingTypeHttp2HeaderDecodeStart,
    HttpRequestTimingTypeHttp2HeaderDecodeEnd,
    HttpRequestTimingTypeRequestHeaderParseStart,
    HttpRequestTimingTypeRequestHeaderParseEnd,
    HttpRequestTimingTypeRequestRoutingStart,
    HttpRequestTimingTypeRequestRoutingEnd,
    HttpRequestTimingTypeRequestQueuedForInspection,
    HttpRequestTimingTypeRequestDeliveredForInspection,
    HttpRequestTimingTypeRequestReturnedAfterInspection,
    HttpRequestTimingTypeRequestQueuedForDelegation,
    HttpRequestTimingTypeRequestDeliveredForDelegation,
    HttpRequestTimingTypeRequestReturnedAfterDelegation,
    HttpRequestTimingTypeRequestQueuedForIO,
    HttpRequestTimingTypeRequestDeliveredForIO,
    HttpRequestTimingTypeMax
} HTTP_REQUEST_TIMING_TYPE, *PHTTP_REQUEST_TIMING_TYPE;
typedef struct _HTTP_REQUEST_TIMING_INFO
{
    ULONG RequestTimingCount;
    ULONGLONG RequestTiming[HttpRequestTimingTypeMax];
} HTTP_REQUEST_TIMING_INFO, *PHTTP_REQUEST_TIMING_INFO;
typedef enum _HTTP_REQUEST_INFO_TYPE
{
    HttpRequestInfoTypeAuth,
    HttpRequestInfoTypeChannelBind,
    HttpRequestInfoTypeSslProtocol,
    HttpRequestInfoTypeSslTokenBindingDraft,
    HttpRequestInfoTypeSslTokenBinding,
    HttpRequestInfoTypeRequestTiming,
    HttpRequestInfoTypeTcpInfoV0,
    HttpRequestInfoTypeRequestSizing
} HTTP_REQUEST_INFO_TYPE, *PHTTP_REQUEST_INFO_TYPE;
typedef struct _HTTP_REQUEST_INFO
{
    HTTP_REQUEST_INFO_TYPE InfoType;
    ULONG InfoLength;
    PVOID pInfo;
} HTTP_REQUEST_INFO, *PHTTP_REQUEST_INFO;
typedef LONG SECURITY_STATUS;
typedef struct _HTTP_REQUEST_AUTH_INFO
{
    HTTP_AUTH_STATUS AuthStatus;
    SECURITY_STATUS SecStatus;
    ULONG Flags;
    HTTP_REQUEST_AUTH_TYPE AuthType;
    HANDLE AccessToken;
    ULONG ContextAttributes;
    ULONG PackedContextLength;
    ULONG PackedContextType;
    PVOID PackedContext;
    ULONG MutualAuthDataLength;
    PCHAR pMutualAuthData;
    USHORT PackageNameLength;
    PWSTR pPackageName;
} HTTP_REQUEST_AUTH_INFO, *PHTTP_REQUEST_AUTH_INFO;
typedef struct _HTTP_REQUEST_V1
{
    ULONG Flags;
    HTTP_CONNECTION_ID ConnectionId;
    HTTP_REQUEST_ID RequestId;
    HTTP_URL_CONTEXT UrlContext;
    HTTP_VERSION Version;
    HTTP_VERB Verb;
    USHORT UnknownVerbLength;
    USHORT RawUrlLength;
    PCSTR pUnknownVerb;
    PCSTR pRawUrl;
    HTTP_COOKED_URL CookedUrl;
    HTTP_TRANSPORT_ADDRESS Address;
    HTTP_REQUEST_HEADERS Headers;
    ULONGLONG BytesReceived;
    USHORT EntityChunkCount;
    PHTTP_DATA_CHUNK pEntityChunks;
    HTTP_RAW_CONNECTION_ID RawConnectionId;
    PHTTP_SSL_INFO pSslInfo;
} HTTP_REQUEST_V1, *PHTTP_REQUEST_V1;
typedef struct _HTTP_REQUEST_V2 : _HTTP_REQUEST_V1
{
    USHORT RequestInfoCount;
    PHTTP_REQUEST_INFO pRequestInfo;
} HTTP_REQUEST_V2, *PHTTP_REQUEST_V2;
typedef HTTP_REQUEST_V2 HTTP_REQUEST;
typedef HTTP_REQUEST * PHTTP_REQUEST;
typedef struct _HTTP_RESPONSE_V1
{
    ULONG Flags;
    HTTP_VERSION Version;
    USHORT StatusCode;
    USHORT ReasonLength;
    PCSTR pReason;
    HTTP_RESPONSE_HEADERS Headers;
    USHORT EntityChunkCount;
    PHTTP_DATA_CHUNK pEntityChunks;
} HTTP_RESPONSE_V1, *PHTTP_RESPONSE_V1;
typedef enum _HTTP_RESPONSE_INFO_TYPE
{
    HttpResponseInfoTypeMultipleKnownHeaders,
    HttpResponseInfoTypeAuthenticationProperty,
    HttpResponseInfoTypeQoSProperty,
    HttpResponseInfoTypeChannelBind
} HTTP_RESPONSE_INFO_TYPE, PHTTP_RESPONSE_INFO_TYPE;
typedef struct _HTTP_RESPONSE_INFO
{
    HTTP_RESPONSE_INFO_TYPE Type;
    ULONG Length;
    PVOID pInfo;
} HTTP_RESPONSE_INFO, *PHTTP_RESPONSE_INFO;
typedef struct _HTTP_MULTIPLE_KNOWN_HEADERS
{
    HTTP_HEADER_ID HeaderId;
    ULONG Flags;
    USHORT KnownHeaderCount;
    PHTTP_KNOWN_HEADER KnownHeaders;
} HTTP_MULTIPLE_KNOWN_HEADERS, *PHTTP_MULTIPLE_KNOWN_HEADERS;
typedef struct _HTTP_RESPONSE_V2 : _HTTP_RESPONSE_V1
{
    USHORT ResponseInfoCount;
    PHTTP_RESPONSE_INFO pResponseInfo;
} HTTP_RESPONSE_V2, *PHTTP_RESPONSE_V2;
typedef HTTP_RESPONSE_V2 HTTP_RESPONSE;
typedef HTTP_RESPONSE *PHTTP_RESPONSE;
typedef struct _HTTPAPI_VERSION
{
    USHORT HttpApiMajorVersion;
    USHORT HttpApiMinorVersion;
} HTTPAPI_VERSION, *PHTTPAPI_VERSION;
    ((version).HttpApiMajorVersion == (major) && \
     (version).HttpApiMinorVersion == (minor))
    ((version).HttpApiMajorVersion > (major) || \
     ((version).HttpApiMajorVersion == (major) && \
      (version).HttpApiMinorVersion > (minor)))
    ((version).HttpApiMajorVersion < (major) || \
     ((version).HttpApiMajorVersion == (major) && \
      (version).HttpApiMinorVersion < (minor)))
    (!HTTPAPI_LESS_VERSION(version, major, minor))
typedef enum _HTTP_CACHE_POLICY_TYPE
{
    HttpCachePolicyNocache,
    HttpCachePolicyUserInvalidates,
    HttpCachePolicyTimeToLive,
    HttpCachePolicyMaximum
} HTTP_CACHE_POLICY_TYPE, *PHTTP_CACHE_POLICY_TYPE;
typedef struct _HTTP_CACHE_POLICY
{
    HTTP_CACHE_POLICY_TYPE Policy;
    ULONG SecondsToLive;
} HTTP_CACHE_POLICY, *PHTTP_CACHE_POLICY;
typedef enum _HTTP_SERVICE_CONFIG_ID
{
    HttpServiceConfigIPListenList,
    HttpServiceConfigSSLCertInfo,
    HttpServiceConfigUrlAclInfo,
    HttpServiceConfigTimeout,
    HttpServiceConfigCache,
    HttpServiceConfigSslSniCertInfo,
    HttpServiceConfigSslCcsCertInfo,
    HttpServiceConfigSetting,
    HttpServiceConfigSslCertInfoEx,
    HttpServiceConfigSslSniCertInfoEx,
    HttpServiceConfigSslCcsCertInfoEx,
    HttpServiceConfigSslScopedCcsCertInfo,
    HttpServiceConfigSslScopedCcsCertInfoEx,
    HttpServiceConfigMax
} HTTP_SERVICE_CONFIG_ID, *PHTTP_SERVICE_CONFIG_ID;
typedef enum _HTTP_SERVICE_CONFIG_QUERY_TYPE
{
    HttpServiceConfigQueryExact,
    HttpServiceConfigQueryNext,
    HttpServiceConfigQueryMax
} HTTP_SERVICE_CONFIG_QUERY_TYPE, *PHTTP_SERVICE_CONFIG_QUERY_TYPE;
typedef struct _HTTP_SERVICE_CONFIG_SSL_KEY
{
    PSOCKADDR pIpPort;
} HTTP_SERVICE_CONFIG_SSL_KEY, *PHTTP_SERVICE_CONFIG_SSL_KEY;
typedef struct _HTTP_SERVICE_CONFIG_SSL_KEY_EX
{
    SOCKADDR_STORAGE IpPort;
} HTTP_SERVICE_CONFIG_SSL_KEY_EX, *PHTTP_SERVICE_CONFIG_SSL_KEY_EX;
typedef struct _HTTP_SERVICE_CONFIG_SSL_SNI_KEY
{
    SOCKADDR_STORAGE IpPort;
    PWSTR Host;
} HTTP_SERVICE_CONFIG_SSL_SNI_KEY, *PHTTP_SERVICE_CONFIG_SSL_SNI_KEY;
typedef struct _HTTP_SERVICE_CONFIG_SSL_CCS_KEY
{
    SOCKADDR_STORAGE LocalAddress;
} HTTP_SERVICE_CONFIG_SSL_CCS_KEY, *PHTTP_SERVICE_CONFIG_SSL_CCS_KEY;
typedef struct _HTTP_SERVICE_CONFIG_SSL_PARAM
{
    ULONG SslHashLength;
    PVOID pSslHash;
    GUID AppId;
    PWSTR pSslCertStoreName;
    DWORD DefaultCertCheckMode;
    DWORD DefaultRevocationFreshnessTime;
    DWORD DefaultRevocationUrlRetrievalTimeout;
    PWSTR pDefaultSslCtlIdentifier;
    PWSTR pDefaultSslCtlStoreName;
    DWORD DefaultFlags;
} HTTP_SERVICE_CONFIG_SSL_PARAM, *PHTTP_SERVICE_CONFIG_SSL_PARAM;
typedef enum _HTTP_SSL_SERVICE_CONFIG_EX_PARAM_TYPE
{
    ExParamTypeHttp2Window,
    ExParamTypeHttp2SettingsLimits,
    ExParamTypeMax
} HTTP_SSL_SERVICE_CONFIG_EX_PARAM_TYPE, *PHTTP_SSL_SERVICE_CONFIG_EX_PARAM_TYPE;
typedef struct _HTTP2_WINDOW_SIZE_PARAM
{
    DWORD Http2ReceiveWindowSize;
} HTTP2_WINDOW_SIZE_PARAM, *PHTTP2_WINDOW_SIZE_PARAM;
typedef struct _HTTP2_SETTINGS_LIMITS_PARAM
{
    DWORD Http2MaxSettingsPerFrame;
    DWORD Http2MaxSettingsPerMinute;
} HTTP2_SETTINGS_LIMITS_PARAM, *PHTTP2_SETTINGS_LIMITS_PARAM;
typedef struct _HTTP_SERVICE_CONFIG_SSL_PARAM_EX
{
    HTTP_SSL_SERVICE_CONFIG_EX_PARAM_TYPE ParamType;
    ULONGLONG Flags;
    union
    {
        HTTP2_WINDOW_SIZE_PARAM Http2WindowSizeParam;
        HTTP2_SETTINGS_LIMITS_PARAM Http2SettingsLimitsParam;
    };
} HTTP_SERVICE_CONFIG_SSL_PARAM_EX, *PHTTP_SERVICE_CONFIG_SSL_PARAM_EX;
typedef struct _HTTP_SERVICE_CONFIG_SSL_SET
{
    HTTP_SERVICE_CONFIG_SSL_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_SSL_PARAM ParamDesc;
} HTTP_SERVICE_CONFIG_SSL_SET, *PHTTP_SERVICE_CONFIG_SSL_SET;
typedef struct _HTTP_SERVICE_CONFIG_SSL_SNI_SET
{
    HTTP_SERVICE_CONFIG_SSL_SNI_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_SSL_PARAM ParamDesc;
} HTTP_SERVICE_CONFIG_SSL_SNI_SET, *PHTTP_SERVICE_CONFIG_SSL_SNI_SET;
typedef struct _HTTP_SERVICE_CONFIG_SSL_CCS_SET
{
    HTTP_SERVICE_CONFIG_SSL_CCS_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_SSL_PARAM ParamDesc;
} HTTP_SERVICE_CONFIG_SSL_CCS_SET, *PHTTP_SERVICE_CONFIG_SSL_CCS_SET;
typedef struct _HTTP_SERVICE_CONFIG_SSL_SET_EX
{
    HTTP_SERVICE_CONFIG_SSL_KEY_EX KeyDesc;
    HTTP_SERVICE_CONFIG_SSL_PARAM_EX ParamDesc;
} HTTP_SERVICE_CONFIG_SSL_SET_EX, *PHTTP_SERVICE_CONFIG_SSL_SET_EX;
typedef struct _HTTP_SERVICE_CONFIG_SSL_SNI_SET_EX
{
    HTTP_SERVICE_CONFIG_SSL_SNI_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_SSL_PARAM_EX ParamDesc;
} HTTP_SERVICE_CONFIG_SSL_SNI_SET_EX, *PHTTP_SERVICE_CONFIG_SSL_SNI_SET_EX;
typedef struct _HTTP_SERVICE_CONFIG_SSL_CCS_SET_EX
{
    HTTP_SERVICE_CONFIG_SSL_CCS_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_SSL_PARAM_EX ParamDesc;
} HTTP_SERVICE_CONFIG_SSL_CCS_SET_EX, *PHTTP_SERVICE_CONFIG_SSL_CCS_SET_EX;
typedef struct _HTTP_SERVICE_CONFIG_SSL_QUERY
{
    HTTP_SERVICE_CONFIG_QUERY_TYPE QueryDesc;
    HTTP_SERVICE_CONFIG_SSL_KEY KeyDesc;
    DWORD dwToken;
} HTTP_SERVICE_CONFIG_SSL_QUERY, *PHTTP_SERVICE_CONFIG_SSL_QUERY;
typedef struct _HTTP_SERVICE_CONFIG_SSL_SNI_QUERY
{
    HTTP_SERVICE_CONFIG_QUERY_TYPE QueryDesc;
    HTTP_SERVICE_CONFIG_SSL_SNI_KEY KeyDesc;
    DWORD dwToken;
} HTTP_SERVICE_CONFIG_SSL_SNI_QUERY, *PHTTP_SERVICE_CONFIG_SSL_SNI_QUERY;
typedef struct _HTTP_SERVICE_CONFIG_SSL_CCS_QUERY
{
    HTTP_SERVICE_CONFIG_QUERY_TYPE QueryDesc;
    HTTP_SERVICE_CONFIG_SSL_CCS_KEY KeyDesc;
    DWORD dwToken;
} HTTP_SERVICE_CONFIG_SSL_CCS_QUERY, *PHTTP_SERVICE_CONFIG_SSL_CCS_QUERY;
typedef struct _HTTP_SERVICE_CONFIG_SSL_QUERY_EX
{
    HTTP_SERVICE_CONFIG_QUERY_TYPE QueryDesc;
    HTTP_SERVICE_CONFIG_SSL_KEY_EX KeyDesc;
    DWORD dwToken;
    HTTP_SSL_SERVICE_CONFIG_EX_PARAM_TYPE ParamType;
} HTTP_SERVICE_CONFIG_SSL_QUERY_EX, *PHTTP_SERVICE_CONFIG_SSL_QUERY_EX;
typedef struct _HTTP_SERVICE_CONFIG_SSL_SNI_QUERY_EX
{
    HTTP_SERVICE_CONFIG_QUERY_TYPE QueryDesc;
    HTTP_SERVICE_CONFIG_SSL_SNI_KEY KeyDesc;
    DWORD dwToken;
    HTTP_SSL_SERVICE_CONFIG_EX_PARAM_TYPE ParamType;
} HTTP_SERVICE_CONFIG_SSL_SNI_QUERY_EX, *PHTTP_SERVICE_CONFIG_SSL_SNI_QUERY_EX;
typedef struct _HTTP_SERVICE_CONFIG_SSL_CCS_QUERY_EX
{
    HTTP_SERVICE_CONFIG_QUERY_TYPE QueryDesc;
    HTTP_SERVICE_CONFIG_SSL_CCS_KEY KeyDesc;
    DWORD dwToken;
    HTTP_SSL_SERVICE_CONFIG_EX_PARAM_TYPE ParamType;
} HTTP_SERVICE_CONFIG_SSL_CCS_QUERY_EX, *PHTTP_SERVICE_CONFIG_SSL_CCS_QUERY_EX;
typedef struct _HTTP_SERVICE_CONFIG_IP_LISTEN_PARAM
{
    USHORT AddrLength;
    PSOCKADDR pAddress;
} HTTP_SERVICE_CONFIG_IP_LISTEN_PARAM, *PHTTP_SERVICE_CONFIG_IP_LISTEN_PARAM;
typedef struct _HTTP_SERVICE_CONFIG_IP_LISTEN_QUERY
{
    ULONG AddrCount;
    SOCKADDR_STORAGE AddrList[ANYSIZE_ARRAY];
} HTTP_SERVICE_CONFIG_IP_LISTEN_QUERY, *PHTTP_SERVICE_CONFIG_IP_LISTEN_QUERY;
typedef struct _HTTP_SERVICE_CONFIG_URLACL_KEY
{
    PWSTR pUrlPrefix;
} HTTP_SERVICE_CONFIG_URLACL_KEY, *PHTTP_SERVICE_CONFIG_URLACL_KEY;
typedef struct _HTTP_SERVICE_CONFIG_URLACL_PARAM
{
    PWSTR pStringSecurityDescriptor;
} HTTP_SERVICE_CONFIG_URLACL_PARAM, *PHTTP_SERVICE_CONFIG_URLACL_PARAM;
typedef struct _HTTP_SERVICE_CONFIG_URLACL_SET
{
    HTTP_SERVICE_CONFIG_URLACL_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_URLACL_PARAM ParamDesc;
} HTTP_SERVICE_CONFIG_URLACL_SET, *PHTTP_SERVICE_CONFIG_URLACL_SET;
typedef struct _HTTP_SERVICE_CONFIG_URLACL_QUERY
{
    HTTP_SERVICE_CONFIG_QUERY_TYPE QueryDesc;
    HTTP_SERVICE_CONFIG_URLACL_KEY KeyDesc;
    DWORD dwToken;
} HTTP_SERVICE_CONFIG_URLACL_QUERY, *PHTTP_SERVICE_CONFIG_URLACL_QUERY;
typedef enum _HTTP_SERVICE_CONFIG_CACHE_KEY
{
    MaxCacheResponseSize = 0,
    CacheRangeChunkSize
} HTTP_SERVICE_CONFIG_CACHE_KEY, *PHTTP_SERVICE_CONFIG_CACHE_KEY;
typedef ULONG HTTP_SERVICE_CONFIG_CACHE_PARAM,
    *PHTTP_SERVICE_CONFIG_CACHE_PARAM;
typedef struct {
    HTTP_SERVICE_CONFIG_CACHE_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_CACHE_PARAM ParamDesc;
} HTTP_SERVICE_CONFIG_CACHE_SET, *PHTTP_SERVICE_CONFIG_CACHE_SET;
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpInitialize(
    IN HTTPAPI_VERSION Version,
    IN ULONG Flags,
    _Reserved_ IN OUT PVOID pReserved
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpTerminate(
    IN ULONG Flags,
    _Reserved_ IN OUT PVOID pReserved
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpCreateHttpHandle(
    OUT PHANDLE RequestQueueHandle,
    _Reserved_ ULONG Reserved
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpCreateRequestQueue(
    IN HTTPAPI_VERSION Version,
    IN PCWSTR Name OPTIONAL,
    IN PSECURITY_ATTRIBUTES SecurityAttributes OPTIONAL,
    IN ULONG Flags OPTIONAL,
    OUT PHANDLE RequestQueueHandle
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpCloseRequestQueue(
    IN HANDLE RequestQueueHandle
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpSetRequestQueueProperty(
    _In_ HANDLE RequestQueueHandle,
    _In_ HTTP_SERVER_PROPERTY Property,
    _In_reads_bytes_(PropertyInformationLength) PVOID PropertyInformation,
    _In_ ULONG PropertyInformationLength,
    _Reserved_ ULONG Reserved1,
    _Reserved_ PVOID Reserved2
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpQueryRequestQueueProperty(
    _In_ HANDLE RequestQueueHandle,
    _In_ HTTP_SERVER_PROPERTY Property,
    _Out_writes_bytes_to_opt_(PropertyInformationLength, *ReturnLength) PVOID PropertyInformation,
    _In_ ULONG PropertyInformationLength,
    _Reserved_ ULONG Reserved1,
    _Out_opt_ PULONG ReturnLength,
    _Reserved_ PVOID Reserved2
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpShutdownRequestQueue(
    IN HANDLE RequestQueueHandle
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpReceiveClientCertificate(
    IN HANDLE RequestQueueHandle,
    IN HTTP_CONNECTION_ID ConnectionId,
    IN ULONG Flags,
    _Out_writes_bytes_to_(SslClientCertInfoSize, *BytesReceived) PHTTP_SSL_CLIENT_CERT_INFO SslClientCertInfo,
    IN ULONG SslClientCertInfoSize,
    _Out_opt_ PULONG BytesReceived,
    IN LPOVERLAPPED Overlapped OPTIONAL
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpCreateServerSession(
    IN HTTPAPI_VERSION Version,
    OUT PHTTP_SERVER_SESSION_ID ServerSessionId,
    _Reserved_ IN ULONG Reserved
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpCloseServerSession(
    IN HTTP_SERVER_SESSION_ID ServerSessionId
    );
HTTPAPI_LINKAGE
_Success_(return == NO_ERROR)
ULONG
WINAPI
HttpQueryServerSessionProperty(
    IN HTTP_SERVER_SESSION_ID ServerSessionId,
    IN HTTP_SERVER_PROPERTY Property,
    _Out_writes_bytes_to_opt_(PropertyInformationLength, *ReturnLength) PVOID PropertyInformation,
    IN ULONG PropertyInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpSetServerSessionProperty(
    IN HTTP_SERVER_SESSION_ID ServerSessionId,
    IN HTTP_SERVER_PROPERTY Property,
    _In_reads_bytes_(PropertyInformationLength) PVOID PropertyInformation,
    IN ULONG PropertyInformationLength
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpAddUrl(
    IN HANDLE RequestQueueHandle,
    IN PCWSTR FullyQualifiedUrl,
    _Reserved_ PVOID Reserved
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpRemoveUrl(
    IN HANDLE RequestQueueHandle,
    IN PCWSTR FullyQualifiedUrl
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpCreateUrlGroup(
    IN HTTP_SERVER_SESSION_ID ServerSessionId,
    OUT PHTTP_URL_GROUP_ID pUrlGroupId,
    _Reserved_ IN ULONG Reserved
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpCloseUrlGroup(
    IN HTTP_URL_GROUP_ID UrlGroupId
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpAddUrlToUrlGroup(
    IN HTTP_URL_GROUP_ID UrlGroupId,
    IN PCWSTR pFullyQualifiedUrl,
    IN HTTP_URL_CONTEXT UrlContext OPTIONAL,
    _Reserved_ IN ULONG Reserved
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpRemoveUrlFromUrlGroup(
    IN HTTP_URL_GROUP_ID UrlGroupId,
    IN PCWSTR pFullyQualifiedUrl,
    IN ULONG Flags
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpSetUrlGroupProperty(
    IN HTTP_URL_GROUP_ID UrlGroupId,
    IN HTTP_SERVER_PROPERTY Property,
    _In_reads_bytes_(PropertyInformationLength) PVOID PropertyInformation,
    IN ULONG PropertyInformationLength
    );
HTTPAPI_LINKAGE
_Success_(return == NO_ERROR)
ULONG
WINAPI
HttpQueryUrlGroupProperty(
    IN HTTP_URL_GROUP_ID UrlGroupId,
    IN HTTP_SERVER_PROPERTY Property,
    _Out_writes_bytes_to_opt_(PropertyInformationLength, *ReturnLength) PVOID PropertyInformation,
    IN ULONG PropertyInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpPrepareUrl(
    _Reserved_ PVOID Reserved,
    _Reserved_ ULONG Flags,
    _In_ PCWSTR Url,
    _Outptr_ PWSTR *PreparedUrl
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpReceiveHttpRequest(
    IN HANDLE RequestQueueHandle,
    IN HTTP_REQUEST_ID RequestId,
    IN ULONG Flags,
    _Out_writes_bytes_to_(RequestBufferLength, *BytesReturned) PHTTP_REQUEST RequestBuffer,
    IN ULONG RequestBufferLength,
    _Out_opt_ PULONG BytesReturned,
    IN LPOVERLAPPED Overlapped OPTIONAL
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpReceiveRequestEntityBody(
    IN HANDLE RequestQueueHandle,
    IN HTTP_REQUEST_ID RequestId,
    IN ULONG Flags,
    _Out_writes_bytes_to_(EntityBufferLength, *BytesReturned) PVOID EntityBuffer,
    IN ULONG EntityBufferLength,
    _Out_opt_ PULONG BytesReturned,
    IN LPOVERLAPPED Overlapped OPTIONAL
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpSendHttpResponse(
    IN HANDLE RequestQueueHandle,
    IN HTTP_REQUEST_ID RequestId,
    IN ULONG Flags,
    IN PHTTP_RESPONSE HttpResponse,
    IN PHTTP_CACHE_POLICY CachePolicy OPTIONAL,
    OUT PULONG BytesSent OPTIONAL,
    _Reserved_ PVOID Reserved1,
    _Reserved_ ULONG Reserved2,
    IN LPOVERLAPPED Overlapped OPTIONAL,
    IN PHTTP_LOG_DATA LogData OPTIONAL
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpSendResponseEntityBody(
    IN HANDLE RequestQueueHandle,
    IN HTTP_REQUEST_ID RequestId,
    IN ULONG Flags,
    IN USHORT EntityChunkCount OPTIONAL,
    _In_reads_opt_(EntityChunkCount) PHTTP_DATA_CHUNK EntityChunks,
    OUT PULONG BytesSent OPTIONAL,
    _Reserved_ PVOID Reserved1 OPTIONAL,
    _Reserved_ ULONG Reserved2 OPTIONAL,
    IN LPOVERLAPPED Overlapped OPTIONAL,
    IN PHTTP_LOG_DATA LogData OPTIONAL
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpDeclarePush(
    _In_ HANDLE RequestQueueHandle,
    _In_ HTTP_REQUEST_ID RequestId,
    _In_ HTTP_VERB Verb,
    _In_ PCWSTR Path,
    _In_opt_ PCSTR Query,
    _In_opt_ PHTTP_REQUEST_HEADERS Headers
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpWaitForDisconnect(
    IN HANDLE RequestQueueHandle,
    IN HTTP_CONNECTION_ID ConnectionId,
    IN LPOVERLAPPED Overlapped OPTIONAL
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpWaitForDisconnectEx(
    IN HANDLE RequestQueueHandle,
    IN HTTP_CONNECTION_ID ConnectionId,
    _Reserved_ IN ULONG Reserved OPTIONAL,
    IN LPOVERLAPPED Overlapped OPTIONAL
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpCancelHttpRequest(
    IN HANDLE RequestQueueHandle,
    IN HTTP_REQUEST_ID RequestId,
    IN LPOVERLAPPED Overlapped OPTIONAL
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpWaitForDemandStart(
    IN HANDLE RequestQueueHandle,
    IN LPOVERLAPPED Overlapped OPTIONAL
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpFlushResponseCache(
    IN HANDLE RequestQueueHandle,
    IN PCWSTR UrlPrefix,
    IN ULONG Flags,
    IN LPOVERLAPPED Overlapped OPTIONAL
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpAddFragmentToCache(
    IN HANDLE RequestQueueHandle,
    IN PCWSTR UrlPrefix,
    IN PHTTP_DATA_CHUNK DataChunk,
    IN PHTTP_CACHE_POLICY CachePolicy,
    IN LPOVERLAPPED Overlapped OPTIONAL
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpReadFragmentFromCache(
    IN HANDLE RequestQueueHandle,
    IN PCWSTR UrlPrefix,
    IN PHTTP_BYTE_RANGE ByteRange OPTIONAL,
    _Out_writes_bytes_to_(BufferLength, *BytesRead) PVOID Buffer,
    IN ULONG BufferLength,
    _Out_opt_ PULONG BytesRead,
    IN LPOVERLAPPED Overlapped OPTIONAL
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpSetServiceConfiguration(
    _Reserved_ HANDLE ServiceHandle,
    _In_ HTTP_SERVICE_CONFIG_ID ConfigId,
    _In_reads_bytes_(ConfigInformationLength) PVOID pConfigInformation,
    _In_ ULONG ConfigInformationLength,
    _Reserved_ LPOVERLAPPED pOverlapped
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpUpdateServiceConfiguration(
    _Reserved_ HANDLE Handle,
    _In_ HTTP_SERVICE_CONFIG_ID ConfigId,
    _In_reads_bytes_(ConfigInfoLength) PVOID ConfigInfo,
    _In_ ULONG ConfigInfoLength,
    _Reserved_ LPOVERLAPPED Overlapped
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpDeleteServiceConfiguration(
    _Reserved_ HANDLE ServiceHandle,
    _In_ HTTP_SERVICE_CONFIG_ID ConfigId,
    _In_reads_bytes_(ConfigInformationLength) PVOID pConfigInformation,
    _In_ ULONG ConfigInformationLength,
    _Reserved_ LPOVERLAPPED pOverlapped
    );
HTTPAPI_LINKAGE
ULONG
WINAPI
HttpQueryServiceConfiguration(
    _Reserved_ HANDLE ServiceHandle,
    _In_ HTTP_SERVICE_CONFIG_ID ConfigId,
    _In_reads_bytes_opt_(InputLength) PVOID pInput,
    _In_ ULONG InputLength,
    _Out_writes_bytes_to_opt_(OutputLength, *pReturnLength) PVOID pOutput,
    _In_ ULONG OutputLength,
    _Out_opt_ PULONG pReturnLength,
    _Reserved_ LPOVERLAPPED pOverlapped
    );
ULONG
WINAPI
HttpGetExtension(
    __in HTTPAPI_VERSION Version,
    __in ULONG Extension,
    __out PVOID __bcount(BufferSize) Buffer,
    __in ULONG BufferSize
    );
}
#endif
#pragma endregion
