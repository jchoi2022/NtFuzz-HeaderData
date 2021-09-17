       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
    #include <windows.h>
    #include <wtypes.h>
typedef ULONG DRMHANDLE;
typedef ULONG DRMQUERYHANDLE;
typedef ULONG DRMENVHANDLE;
typedef ULONG DRMHSESSION;
typedef ULONG DRMPUBHANDLE;
    #define IN
    #define OUT
const UINT DRMIDVERSION = 0;
typedef struct _DRMID {
    UINT uVersion;
    PWSTR wszIDType;
    PWSTR wszID;
    _DRMID() : uVersion(DRMIDVERSION),
               wszIDType(NULL),
               wszID(NULL)
    {
    }
    _DRMID(_In_opt_ PWSTR wszTypein,
           _In_opt_ PWSTR wszIDin) : uVersion(DRMIDVERSION),
                            wszIDType(wszTypein),
                            wszID(wszIDin)
    {
    }
} DRMID;
typedef enum _DRMTIMETYPE { DRMTIMETYPE_SYSTEMUTC,
                            DRMTIMETYPE_SYSTEMLOCAL }
              DRMTIMETYPE;
typedef enum _DRMENCODINGTYPE { DRMENCODINGTYPE_BASE64,
                                DRMENCODINGTYPE_STRING,
                                DRMENCODINGTYPE_LONG,
                                DRMENCODINGTYPE_TIME,
                                DRMENCODINGTYPE_UINT,
                                DRMENCODINGTYPE_RAW }
              DRMENCODINGTYPE;
typedef enum _DRMATTESTTYPE { DRMATTESTTYPE_FULLENVIRONMENT,
                              DRMATTESTTYPE_HASHONLY }
              DRMATTESTTYPE;
typedef enum _DRMSPECTYPE { DRMSPECTYPE_UNKNOWN,
                            DRMSPECTYPE_FILENAME }
              DRMSPECTYPE;
typedef enum _DRMSECURITYPROVIDERTYPE { DRMSECURITYPROVIDERTYPE_SOFTWARESECREP }
              DRMSECURITYPROVIDERTYPE;
typedef enum _DRMGLOBALOPTIONS { DRMGLOBALOPTIONS_USE_WINHTTP,
                                  DRMGLOBALOPTIONS_USE_SERVERSECURITYPROCESSOR }
              DRMGLOBALOPTIONS;
const UINT DRMBOUNDLICENSEPARAMSVERSION = 1;
typedef struct _DRMBOUNDLICENSEPARAMS {
    UINT uVersion;
    DRMHANDLE hEnablingPrincipal;
    DRMHANDLE hSecureStore;
    PWSTR wszRightsRequested;
    PWSTR wszRightsGroup;
    DRMID idResource;
    UINT cAuthenticatorCount;
    DRMHANDLE* rghAuthenticators;
    PWSTR wszDefaultEnablingPrincipalCredentials;
    DWORD dwFlags;
    _DRMBOUNDLICENSEPARAMS() : uVersion(DRMBOUNDLICENSEPARAMSVERSION),
                               hEnablingPrincipal(NULL),
                               hSecureStore(NULL),
                               wszRightsRequested(NULL),
                               wszRightsGroup(NULL),
                               cAuthenticatorCount(0),
                               rghAuthenticators(NULL),
                               wszDefaultEnablingPrincipalCredentials(NULL),
                               idResource(NULL,NULL),
                               dwFlags(0)
    {
    }
} DRMBOUNDLICENSEPARAMS;
const DWORD DRMBINDINGFLAGS_IGNORE_VALIDITY_INTERVALS = 0x1;
const UINT DRMLICENSEACQDATAVERSION = 0;
typedef struct _DRM_LICENSE_ACQ_DATA
{
    UINT uVersion;
    PWSTR wszURL;
    PWSTR wszLocalFilename;
    BYTE* pbPostData;
    DWORD dwPostDataSize;
    PWSTR wszFriendlyName;
    _DRM_LICENSE_ACQ_DATA() : uVersion(DRMLICENSEACQDATAVERSION),
                              wszURL(NULL),
                              wszLocalFilename(NULL),
                              pbPostData(NULL),
                              dwPostDataSize(NULL),
                              wszFriendlyName(NULL)
    {
    }
} DRM_LICENSE_ACQ_DATA;
const UINT DRMACTSERVINFOVERSION = 0;
typedef struct _DRM_ACTSERV_INFO
{
    UINT uVersion;
    PWSTR wszPubKey;
    PWSTR wszURL;
    _DRM_ACTSERV_INFO() : uVersion(DRMACTSERVINFOVERSION),
                          wszPubKey(NULL),
                          wszURL(NULL)
    {
    }
} DRM_ACTSERV_INFO;
const UINT DRMCLIENTSTRUCTVERSION = 1;
typedef struct _DRM_CLIENT_VERSION_INFO {
    UINT uStructVersion;
    DWORD dwVersion[4];
    WCHAR wszHierarchy[256];
    WCHAR wszProductId[256];
    WCHAR wszProductDescription[256];
    _DRM_CLIENT_VERSION_INFO() : uStructVersion(DRMCLIENTSTRUCTVERSION)
    {
        dwVersion[0] = 0;
        dwVersion[1] = 0;
        dwVersion[2] = 0;
        dwVersion[3] = 0;
        wszHierarchy[0] = 0;
        wszProductId[0] = 0;
        wszProductDescription[0] = 0;
    }
} DRM_CLIENT_VERSION_INFO;
typedef enum _DRM_STATUS_MSG
{
    DRM_MSG_ACTIVATE_MACHINE,
    DRM_MSG_ACTIVATE_GROUPIDENTITY,
    DRM_MSG_ACQUIRE_LICENSE,
    DRM_MSG_ACQUIRE_ADVISORY,
    DRM_MSG_SIGN_ISSUANCE_LICENSE,
    DRM_MSG_ACQUIRE_CLIENTLICENSOR,
    DRM_MSG_ACQUIRE_ISSUANCE_LICENSE_TEMPLATE
}DRM_STATUS_MSG;
typedef enum _DRM_USAGEPOLICY_TYPE
{
    DRM_USAGEPOLICY_TYPE_BYNAME,
    DRM_USAGEPOLICY_TYPE_BYPUBLICKEY,
    DRM_USAGEPOLICY_TYPE_BYDIGEST,
    DRM_USAGEPOLICY_TYPE_OSEXCLUSION
}DRM_USAGEPOLICY_TYPE;
typedef enum _DRM_DISTRIBUTION_POINT_INFO
{
    DRM_DISTRIBUTION_POINT_LICENSE_ACQUISITION,
    DRM_DISTRIBUTION_POINT_PUBLISHING,
    DRM_DISTRIBUTION_POINT_REFERRAL_INFO
}DRM_DISTRIBUTION_POINT_INFO;
const UINT DRMCALLBACKVERSION = 1;
typedef HRESULT (__stdcall *DRMCALLBACK)(DRM_STATUS_MSG,HRESULT,void*,void*);
#endif
#pragma endregion
