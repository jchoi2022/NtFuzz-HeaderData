#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPMApplicationInfo IPMApplicationInfo;
typedef interface IPMTilePropertyInfo IPMTilePropertyInfo;
typedef interface IPMTilePropertyEnumerator IPMTilePropertyEnumerator;
typedef interface IPMTileInfo IPMTileInfo;
typedef interface IPMTileInfoEnumerator IPMTileInfoEnumerator;
typedef interface IPMApplicationInfoEnumerator IPMApplicationInfoEnumerator;
typedef interface IPMLiveTileJobInfo IPMLiveTileJobInfo;
typedef interface IPMLiveTileJobInfoEnumerator IPMLiveTileJobInfoEnumerator;
typedef interface IPMDeploymentManager IPMDeploymentManager;
typedef interface IPMEnumerationManager IPMEnumerationManager;
typedef interface IPMTaskInfo IPMTaskInfo;
typedef interface IPMTaskInfoEnumerator IPMTaskInfoEnumerator;
typedef interface IPMExtensionInfo IPMExtensionInfo;
typedef interface IPMExtensionFileExtensionInfo IPMExtensionFileExtensionInfo;
typedef interface IPMExtensionProtocolInfo IPMExtensionProtocolInfo;
typedef interface IPMExtensionShareTargetInfo IPMExtensionShareTargetInfo;
typedef interface IPMExtensionContractInfo IPMExtensionContractInfo;
typedef interface IPMExtensionFileOpenPickerInfo IPMExtensionFileOpenPickerInfo;
typedef interface IPMExtensionFileSavePickerInfo IPMExtensionFileSavePickerInfo;
typedef interface IPMExtensionCachedFileUpdaterInfo IPMExtensionCachedFileUpdaterInfo;
typedef interface IPMExtensionInfoEnumerator IPMExtensionInfoEnumerator;
typedef interface IPMBackgroundServiceAgentInfo IPMBackgroundServiceAgentInfo;
typedef interface IPMBackgroundWorkerInfo IPMBackgroundWorkerInfo;
typedef interface IPMBackgroundServiceAgentInfoEnumerator IPMBackgroundServiceAgentInfoEnumerator;
typedef interface IPMBackgroundWorkerInfoEnumerator IPMBackgroundWorkerInfoEnumerator;
typedef class PMSvc PMSvc;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
       
typedef GUID PRODUCTID;
typedef
enum _tagTILE_TEMPLATE_TYPE
    {
        TILE_TEMPLATE_INVALID = 0,
        TILE_TEMPLATE_FLIP = 0x5,
        TILE_TEMPLATE_DEEPLINK = 0xd,
        TILE_TEMPLATE_CYCLE = 0xe,
        TILE_TEMPLATE_METROCOUNT = 0x1,
        TILE_TEMPLATE_AGILESTORE = 0x2,
        TILE_TEMPLATE_GAMES = 0x3,
        TILE_TEMPLATE_CALENDAR = 0x4,
        TILE_TEMPLATE_MUSICVIDEO = 0x7,
        TILE_TEMPLATE_PEOPLE = 0xa,
        TILE_TEMPLATE_CONTACT = 0xb,
        TILE_TEMPLATE_GROUP = 0xc,
        TILE_TEMPLATE_DEFAULT = 0xf,
        TILE_TEMPLATE_BADGE = 0x10,
        TILE_TEMPLATE_BLOCK = 0x11,
        TILE_TEMPLATE_TEXT01 = 0x12,
        TILE_TEMPLATE_TEXT02 = 0x13,
        TILE_TEMPLATE_TEXT03 = 0x14,
        TILE_TEMPLATE_TEXT04 = 0x15,
        TILE_TEMPLATE_TEXT05 = 0x16,
        TILE_TEMPLATE_TEXT06 = 0x17,
        TILE_TEMPLATE_TEXT07 = 0x18,
        TILE_TEMPLATE_TEXT08 = 0x19,
        TILE_TEMPLATE_TEXT09 = 0x1a,
        TILE_TEMPLATE_TEXT10 = 0x1b,
        TILE_TEMPLATE_TEXT11 = 0x1c,
        TILE_TEMPLATE_IMAGE = 0x1d,
        TILE_TEMPLATE_IMAGECOLLECTION = 0x1e,
        TILE_TEMPLATE_IMAGEANDTEXT01 = 0x1f,
        TILE_TEMPLATE_IMAGEANDTEXT02 = 0x20,
        TILE_TEMPLATE_BLOCKANDTEXT01 = 0x21,
        TILE_TEMPLATE_BLOCKANDTEXT02 = 0x22,
        TILE_TEMPLATE_PEEKIMAGEANDTEXT01 = 0x23,
        TILE_TEMPLATE_PEEKIMAGEANDTEXT02 = 0x24,
        TILE_TEMPLATE_PEEKIMAGEANDTEXT03 = 0x25,
        TILE_TEMPLATE_PEEKIMAGEANDTEXT04 = 0x26,
        TILE_TEMPLATE_PEEKIMAGE01 = 0x27,
        TILE_TEMPLATE_PEEKIMAGE02 = 0x28,
        TILE_TEMPLATE_PEEKIMAGE03 = 0x29,
        TILE_TEMPLATE_PEEKIMAGE04 = 0x2a,
        TILE_TEMPLATE_PEEKIMAGE05 = 0x2b,
        TILE_TEMPLATE_PEEKIMAGE06 = 0x2c,
        TILE_TEMPLATE_PEEKIMAGECOLLECTION01 = 0x2d,
        TILE_TEMPLATE_PEEKIMAGECOLLECTION02 = 0x2e,
        TILE_TEMPLATE_PEEKIMAGECOLLECTION03 = 0x2f,
        TILE_TEMPLATE_PEEKIMAGECOLLECTION04 = 0x30,
        TILE_TEMPLATE_PEEKIMAGECOLLECTION05 = 0x31,
        TILE_TEMPLATE_PEEKIMAGECOLLECTION06 = 0x32,
        TILE_TEMPLATE_SMALLIMAGEANDTEXT01 = 0x33,
        TILE_TEMPLATE_SMALLIMAGEANDTEXT02 = 0x34,
        TILE_TEMPLATE_SMALLIMAGEANDTEXT03 = 0x35,
        TILE_TEMPLATE_SMALLIMAGEANDTEXT04 = 0x36,
        TILE_TEMPLATE_SMALLIMAGEANDTEXT05 = 0x37,
        TILE_TEMPLATE_METROCOUNTQUEUE = 0x38,
        TILE_TEMPLATE_SEARCH = 0x39,
        TILE_TEMPLATE_TILEFLYOUT01 = 0x3a,
        TILE_TEMPLATE_FOLDER = 0x3b,
        TILE_TEMPLATE_ALL = 0x64
    } TILE_TEMPLATE_TYPE;
typedef
enum PM_APP_GENRE
    {
        PM_APP_GENRE_GAMES = 0,
        PM_APP_GENRE_OTHER = 0x1,
        PM_APP_GENRE_INVALID = ( PM_APP_GENRE_OTHER + 1 )
    } PM_APP_GENRE;
typedef
enum _PM_APPLICATION_INSTALL_TYPE
    {
        PM_APPLICATION_INSTALL_NORMAL = 0,
        PM_APPLICATION_INSTALL_IN_ROM = 0x1,
        PM_APPLICATION_INSTALL_PA = 0x2,
        PM_APPLICATION_INSTALL_DEBUG = 0x3,
        PM_APPLICATION_INSTALL_ENTERPRISE = 0x4,
        PM_APPLICATION_INSTALL_INVALID = ( PM_APPLICATION_INSTALL_ENTERPRISE + 1 )
    } PM_APPLICATION_INSTALL_TYPE;
typedef
enum _PM_APPLICATION_STATE
    {
        PM_APPLICATION_STATE_MIN = 0,
        PM_APPLICATION_STATE_INSTALLED = ( PM_APPLICATION_STATE_MIN + 1 ) ,
        PM_APPLICATION_STATE_INSTALLING = ( PM_APPLICATION_STATE_INSTALLED + 1 ) ,
        PM_APPLICATION_STATE_UPDATING = ( PM_APPLICATION_STATE_INSTALLING + 1 ) ,
        PM_APPLICATION_STATE_UNINSTALLING = ( PM_APPLICATION_STATE_UPDATING + 1 ) ,
        PM_APPLICATION_STATE_LICENSE_UPDATING = ( PM_APPLICATION_STATE_UNINSTALLING + 1 ) ,
        PM_APPLICATION_STATE_MOVING = ( PM_APPLICATION_STATE_LICENSE_UPDATING + 1 ) ,
        PM_APPLICATION_STATE_DISABLED_SD_CARD = ( PM_APPLICATION_STATE_MOVING + 1 ) ,
        PM_APPLICATION_STATE_DISABLED_ENTERPRISE = ( PM_APPLICATION_STATE_DISABLED_SD_CARD + 1 ) ,
        PM_APPLICATION_STATE_DISABLED_BACKING_UP = ( PM_APPLICATION_STATE_DISABLED_ENTERPRISE + 1 ) ,
        PM_APPLICATION_STATE_DISABLED_MDIL_BINDING = ( PM_APPLICATION_STATE_DISABLED_BACKING_UP + 1 ) ,
        PM_APPLICATION_STATE_MAX = PM_APPLICATION_STATE_DISABLED_MDIL_BINDING,
        PM_APPLICATION_STATE_INVALID = ( PM_APPLICATION_STATE_MAX + 1 )
    } PM_APPLICATION_STATE;
typedef
enum _PM_APPLICATION_HUBTYPE
    {
        PM_APPLICATION_HUBTYPE_NONMUSIC = 0,
        PM_APPLICATION_HUBTYPE_MUSIC = 0x1,
        PM_APPLICATION_HUBTYPE_INVALID = ( PM_APPLICATION_HUBTYPE_MUSIC + 1 )
    } PM_APPLICATION_HUBTYPE;
typedef
enum _PM_TILE_HUBTYPE
    {
        PM_TILE_HUBTYPE_MUSIC = 0x1,
        PM_TILE_HUBTYPE_MOSETTINGS = 0x10000000,
        PM_TILE_HUBTYPE_GAMES = 0x20000000,
        PM_TILE_HUBTYPE_APPLIST = 0x40000000,
        PM_TILE_HUBTYPE_STARTMENU = 0x80000000,
        PM_TILE_HUBTYPE_LOCKSCREEN = 0x1000000,
        PM_TILE_HUBTYPE_KIDZONE = 0x2000000,
        PM_TILE_HUBTYPE_CACHED = 0x4000000,
        PM_TILE_HUBTYPE_INVALID = ( PM_TILE_HUBTYPE_CACHED + 1 )
    } PM_TILE_HUBTYPE;
typedef
enum _PM_STARTTILE_TYPE
    {
        PM_STARTTILE_TYPE_PRIMARY = 0x1,
        PM_STARTTILE_TYPE_SECONDARY = 0x2,
        PM_STARTTILE_TYPE_APPLIST = 0x3,
        PM_STARTTILE_TYPE_APPLISTPRIMARY = 0x4,
        PM_STARTTILE_TYPE_INVALID = ( PM_STARTTILE_TYPE_APPLISTPRIMARY + 1 )
    } PM_STARTTILE_TYPE;
typedef
enum _tagPM_TASK_TYPE
    {
        PM_TASK_TYPE_NORMAL = 0,
        PM_TASK_TYPE_DEFAULT = ( PM_TASK_TYPE_NORMAL + 1 ) ,
        PM_TASK_TYPE_SETTINGS = ( PM_TASK_TYPE_DEFAULT + 1 ) ,
        PM_TASK_TYPE_BACKGROUNDSERVICEAGENT = ( PM_TASK_TYPE_SETTINGS + 1 ) ,
        PM_TASK_TYPE_BACKGROUNDWORKER = ( PM_TASK_TYPE_BACKGROUNDSERVICEAGENT + 1 ) ,
        PM_TASK_TYPE_INVALID = ( PM_TASK_TYPE_BACKGROUNDWORKER + 1 )
    } PM_TASK_TYPE;
typedef
enum _PACKMAN_RUNTIME
    {
        PACKMAN_RUNTIME_NATIVE = 1,
        PACKMAN_RUNTIME_SILVERLIGHTMOBILE = 2,
        PACKMAN_RUNTIME_XNA = 3,
        PACKMAN_RUNTIME_MODERN_NATIVE = 4,
        PACKMAN_RUNTIME_JUPITER = 5,
        PACKMAN_RUNTIME_INVALID = ( PACKMAN_RUNTIME_JUPITER + 1 )
    } PACKMAN_RUNTIME;
typedef
enum _PM_ACTIVATION_POLICY
    {
        PM_ACTIVATION_POLICY_RESUME = 0,
        PM_ACTIVATION_POLICY_RESUMESAMEPARAMS = 1,
        PM_ACTIVATION_POLICY_REPLACE = 2,
        PM_ACTIVATION_POLICY_REPLACESAMEPARAMS = 3,
        PM_ACTIVATION_POLICY_MULTISESSION = 4,
        PM_ACTIVATION_POLICY_REPLACE_IGNOREFOREGROUND = 5,
        PM_ACTIVATION_POLICY_UNKNOWN = 6,
        PM_ACTIVATION_POLICY_INVALID = ( PM_ACTIVATION_POLICY_UNKNOWN + 1 )
    } PM_ACTIVATION_POLICY;
typedef
enum _PM_TASK_TRANSITION
    {
        PM_TASK_TRANSITION_DEFAULT = 0,
        PM_TASK_TRANSITION_NONE = 1,
        PM_TASK_TRANSITION_TURNSTILE = 2,
        PM_TASK_TRANSITION_SLIDE = 3,
        PM_TASK_TRANSITION_SWIVEL = 4,
        PM_TASK_TRANSITION_READERBOARD = 5,
        PM_TASK_TRANSITION_CUSTOM = 6,
        PM_TASK_TRANSITION_INVALID = ( PM_TASK_TRANSITION_CUSTOM + 1 )
    } PM_TASK_TRANSITION;
typedef
enum _tagPM_ENUM_APP_FILTER
    {
        PM_APP_FILTER_ALL = 0,
        PM_APP_FILTER_VISIBLE = ( PM_APP_FILTER_ALL + 1 ) ,
        PM_APP_FILTER_GENRE = ( PM_APP_FILTER_VISIBLE + 1 ) ,
        PM_APP_FILTER_NONGAMES = ( PM_APP_FILTER_GENRE + 1 ) ,
        PM_APP_FILTER_HUBTYPE = ( PM_APP_FILTER_NONGAMES + 1 ) ,
        PM_APP_FILTER_PINABLEONKIDZONE = ( PM_APP_FILTER_HUBTYPE + 1 ) ,
        PM_APP_FILTER_ALL_INCLUDE_MODERN = ( PM_APP_FILTER_PINABLEONKIDZONE + 1 ) ,
        PM_APP_FILTER_FRAMEWORK = ( PM_APP_FILTER_ALL_INCLUDE_MODERN + 1 ) ,
        PM_APP_FILTER_MAX = ( PM_APP_FILTER_FRAMEWORK + 1 )
    } PM_ENUM_APP_FILTER;
typedef
enum _tagPM_ENUM_TILE_FILTER
    {
        PM_TILE_FILTER_APPLIST = PM_APP_FILTER_MAX,
        PM_TILE_FILTER_PINNED = ( PM_TILE_FILTER_APPLIST + 1 ) ,
        PM_TILE_FILTER_HUBTYPE = ( PM_TILE_FILTER_PINNED + 1 ) ,
        PM_TILE_FILTER_APP_ALL = ( PM_TILE_FILTER_HUBTYPE + 1 ) ,
        PM_TILE_FILTER_MAX = ( PM_TILE_FILTER_APP_ALL + 1 )
    } PM_ENUM_TILE_FILTER;
typedef
enum _tagPM_ENUM_TASK_FILTER
    {
        PM_TASK_FILTER_APP_ALL = PM_TILE_FILTER_MAX,
        PM_TASK_FILTER_TASK_TYPE = ( PM_TASK_FILTER_APP_ALL + 1 ) ,
        PM_TASK_FILTER_DEHYD_SUPRESSING = ( PM_TASK_FILTER_TASK_TYPE + 1 ) ,
        PM_TASK_FILTER_APP_TASK_TYPE = ( PM_TASK_FILTER_DEHYD_SUPRESSING + 1 ) ,
        PM_TASK_FILTER_BGEXECUTION = ( PM_TASK_FILTER_APP_TASK_TYPE + 1 ) ,
        PM_TASK_FILTER_MAX = ( PM_TASK_FILTER_BGEXECUTION + 1 )
    } PM_ENUM_TASK_FILTER;
typedef
enum _tagPM_ENUM_EXTENSION_FILTER
    {
        PM_ENUM_EXTENSION_FILTER_BY_CONSUMER = PM_TASK_FILTER_MAX,
        PM_ENUM_EXTENSION_FILTER_APPCONNECT = PM_ENUM_EXTENSION_FILTER_BY_CONSUMER,
        PM_ENUM_EXTENSION_FILTER_PROTOCOL_ALL = ( PM_ENUM_EXTENSION_FILTER_APPCONNECT + 1 ) ,
        PM_ENUM_EXTENSION_FILTER_FTASSOC_FILETYPE_ALL = ( PM_ENUM_EXTENSION_FILTER_PROTOCOL_ALL + 1 ) ,
        PM_ENUM_EXTENSION_FILTER_FTASSOC_CONTENTTYPE_ALL = ( PM_ENUM_EXTENSION_FILTER_FTASSOC_FILETYPE_ALL + 1 ) ,
        PM_ENUM_EXTENSION_FILTER_FTASSOC_APPLICATION_ALL = ( PM_ENUM_EXTENSION_FILTER_FTASSOC_CONTENTTYPE_ALL + 1 ) ,
        PM_ENUM_EXTENSION_FILTER_SHARETARGET_ALL = ( PM_ENUM_EXTENSION_FILTER_FTASSOC_APPLICATION_ALL + 1 ) ,
        PM_ENUM_EXTENSION_FILTER_FILEOPENPICKER_ALL = ( PM_ENUM_EXTENSION_FILTER_SHARETARGET_ALL + 1 ) ,
        PM_ENUM_EXTENSION_FILTER_FILESAVEPICKER_ALL = ( PM_ENUM_EXTENSION_FILTER_FILEOPENPICKER_ALL + 1 ) ,
        PM_ENUM_EXTENSION_FILTER_CACHEDFILEUPDATER_ALL = ( PM_ENUM_EXTENSION_FILTER_FILESAVEPICKER_ALL + 1 ) ,
        PM_ENUM_EXTENSION_FILTER_MAX = ( PM_ENUM_EXTENSION_FILTER_CACHEDFILEUPDATER_ALL + 1 )
    } PM_ENUM_EXTENSION_FILTER;
typedef
enum _tagPM_ENUM_BSA_FILTER
    {
        PM_ENUM_BSA_FILTER_ALL = PM_ENUM_EXTENSION_FILTER_MAX,
        PM_ENUM_BSA_FILTER_BY_TASKID = ( PM_ENUM_BSA_FILTER_ALL + 1 ) ,
        PM_ENUM_BSA_FILTER_BY_PRODUCTID = ( PM_ENUM_BSA_FILTER_BY_TASKID + 1 ) ,
        PM_ENUM_BSA_FILTER_BY_PERIODIC = ( PM_ENUM_BSA_FILTER_BY_PRODUCTID + 1 ) ,
        PM_ENUM_BSA_FILTER_BY_ALL_LAUNCHONBOOT = ( PM_ENUM_BSA_FILTER_BY_PERIODIC + 1 ) ,
        PM_ENUM_BSA_FILTER_MAX = ( PM_ENUM_BSA_FILTER_BY_ALL_LAUNCHONBOOT + 1 )
    } PM_ENUM_BSA_FILTER;
typedef
enum _tagPM_ENUM_BW_FILTER
    {
        PM_ENUM_BW_FILTER_BOOTWORKER_ALL = PM_ENUM_BSA_FILTER_MAX,
        PM_ENUM_BW_FILTER_BY_TASKID = ( PM_ENUM_BW_FILTER_BOOTWORKER_ALL + 1 ) ,
        PM_ENUM_BW_FILTER_MAX = ( PM_ENUM_BW_FILTER_BY_TASKID + 1 )
    } PM_ENUM_BW_FILTER;
typedef struct _tagAPPTASKTYPE
    {
    PRODUCTID ProductID;
    PM_TASK_TYPE TaskType;
    } PM_APPTASKTYPE;
typedef struct _tagPM_EXTENSIONCONSUMER
    {
    PRODUCTID ConsumerPID;
                   BSTR ExtensionID;
    } PM_EXTENSIONCONSUMER;
typedef struct _tagPM_BSATASKID
    {
    PRODUCTID ProductID;
                   BSTR TaskID;
    } PM_BSATASKID;
typedef struct _tagPM_BWTASKID
    {
    PRODUCTID ProductID;
                   BSTR TaskID;
    } PM_BWTASKID;
typedef struct _PM_ENUM_FILTER
    {
    int FilterType;
                                   union
        {
                        int Dummy;
                       PM_APP_GENRE Genre;
                       PM_APPLICATION_HUBTYPE AppHubType;
                       PM_TILE_HUBTYPE HubType;
                       PM_TASK_TYPE Tasktype;
                       PRODUCTID TaskProductID;
                       PRODUCTID TileProductID;
                       PM_APPTASKTYPE AppTaskType;
                       PM_EXTENSIONCONSUMER Consumer;
                       PM_BSATASKID BSATask;
                       PRODUCTID BSAProductID;
                       PM_BWTASKID BWTask;
                               BSTR ProtocolName;
                               BSTR FileType;
                               BSTR ContentType;
                       PRODUCTID AppSupportedFileExtPID;
                               BSTR ShareTargetFileType;
        } FilterParameter;
    } PM_ENUM_FILTER;
typedef
enum _tagPM_LIVETILE_RECURRENCE_TYPE
    {
        PM_LIVETILE_RECURRENCE_TYPE_INSTANT = 0,
        PM_LIVETILE_RECURRENCE_TYPE_ONETIME = ( PM_LIVETILE_RECURRENCE_TYPE_INSTANT + 1 ) ,
        PM_LIVETILE_RECURRENCE_TYPE_INTERVAL = ( PM_LIVETILE_RECURRENCE_TYPE_ONETIME + 1 ) ,
        PM_LIVETILE_RECURRENCE_TYPE_MAX = PM_LIVETILE_RECURRENCE_TYPE_INTERVAL
    } PM_LIVETILE_RECURRENCE_TYPE;
typedef
enum _tagPM_TILE_SIZE
    {
        PM_TILE_SIZE_SMALL = 0,
        PM_TILE_SIZE_MEDIUM = ( PM_TILE_SIZE_SMALL + 1 ) ,
        PM_TILE_SIZE_LARGE = ( PM_TILE_SIZE_MEDIUM + 1 ) ,
        PM_TILE_SIZE_SQUARE310X310 = ( PM_TILE_SIZE_LARGE + 1 ) ,
        PM_TILE_SIZE_TALL150X310 = ( PM_TILE_SIZE_SQUARE310X310 + 1 ) ,
        PM_TILE_SIZE_INVALID = ( PM_TILE_SIZE_TALL150X310 + 1 )
    } PM_TILE_SIZE;
typedef
enum _tagPM_LOGO_SIZE
    {
        PM_LOGO_SIZE_SMALL = 0,
        PM_LOGO_SIZE_MEDIUM = ( PM_LOGO_SIZE_SMALL + 1 ) ,
        PM_LOGO_SIZE_LARGE = ( PM_LOGO_SIZE_MEDIUM + 1 ) ,
        PM_LOGO_SIZE_INVALID = ( PM_LOGO_SIZE_LARGE + 1 )
    } PM_LOGO_SIZE;
typedef struct _tagPM_STARTAPPBLOB
    {
    ULONG cbSize;
    GUID ProductID;
                   BSTR AppTitle;
                   BSTR IconPath;
    BOOL IsUninstallable;
    PM_APPLICATION_INSTALL_TYPE AppInstallType;
    GUID InstanceID;
    PM_APPLICATION_STATE State;
    BOOL IsModern;
    BOOL IsModernLightUp;
    USHORT LightUpSupportMask;
    } PM_STARTAPPBLOB;
typedef struct _tagPM_INVOCATIONINFO
    {
                   BSTR URIBaseOrAUMID;
                   BSTR URIFragmentOrArgs;
    } PM_INVOCATIONINFO;
typedef struct _tagPM_STARTTILEBLOB
    {
    ULONG cbSize;
    PRODUCTID ProductID;
                   BSTR TileID;
    TILE_TEMPLATE_TYPE TemplateType;
    ULONG HubPosition[ 32 ];
    ULONG HubVisibilityBitmask;
    BOOL IsDefault;
    PM_STARTTILE_TYPE TileType;
                            BYTE *pbPropBlob;
    DWORD cbPropBlob;
    BOOL IsRestoring;
    BOOL IsModern;
    PM_INVOCATIONINFO InvocationInfo;
    } PM_STARTTILEBLOB;
typedef struct _tagPM_INSTALLINFO
    {
    PRODUCTID ProductID;
                   BSTR PackagePath;
    GUID InstanceID;
                            BYTE *pbLicense;
    DWORD cbLicense;
    BOOL IsUninstallDisabled;
    DWORD DeploymentOptions;
    GUID OfferID;
                           BSTR MarketplaceAppVersion;
    } PM_INSTALLINFO;
typedef struct _tagPM_UPDATEINFO_LEGACY
    {
    PRODUCTID ProductID;
                   BSTR PackagePath;
    GUID InstanceID;
                            BYTE *pbLicense;
    DWORD cbLicense;
                           BSTR MarketplaceAppVersion;
    } PM_UPDATEINFO_LEGACY;
typedef struct _tagPM_UPDATEINFO
    {
    PRODUCTID ProductID;
                   BSTR PackagePath;
    GUID InstanceID;
                            BYTE *pbLicense;
    DWORD cbLicense;
                           BSTR MarketplaceAppVersion;
    DWORD DeploymentOptions;
    } PM_UPDATEINFO;
extern RPC_IF_HANDLE __MIDL_itf_pacmanclientapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pacmanclientapi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IPMApplicationInfo;
    typedef struct IPMApplicationInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMApplicationInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMApplicationInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMApplicationInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_ProductID )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out PRODUCTID *pProductID);
        HRESULT ( STDMETHODCALLTYPE *get_InstanceID )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out GUID *pInstanceID);
        HRESULT ( STDMETHODCALLTYPE *get_OfferID )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out GUID *pOfferID);
        HRESULT ( STDMETHODCALLTYPE *get_DefaultTask )(
            __RPC__in IPMApplicationInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pDefaultTask);
        HRESULT ( STDMETHODCALLTYPE *get_AppTitle )(
            __RPC__in IPMApplicationInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pAppTitle);
        HRESULT ( STDMETHODCALLTYPE *get_IconPath )(
            __RPC__in IPMApplicationInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pAppIconPath);
        HRESULT ( STDMETHODCALLTYPE *get_NotificationState )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pIsNotified);
        HRESULT ( STDMETHODCALLTYPE *get_AppInstallType )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out PM_APPLICATION_INSTALL_TYPE *pAppInstallType);
        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out PM_APPLICATION_STATE *pState);
        HRESULT ( STDMETHODCALLTYPE *get_IsRevoked )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pIsRevoked);
        HRESULT ( STDMETHODCALLTYPE *get_UpdateAvailable )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pIsUpdateAvailable);
        HRESULT ( STDMETHODCALLTYPE *get_InstallDate )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out FILETIME *pInstallDate);
        HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pIsUninstallable);
        HRESULT ( STDMETHODCALLTYPE *get_IsThemable )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pIsThemable);
        HRESULT ( STDMETHODCALLTYPE *get_IsTrial )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pIsTrial);
        HRESULT ( STDMETHODCALLTYPE *get_InstallPath )(
            __RPC__in IPMApplicationInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pInstallPath);
        HRESULT ( STDMETHODCALLTYPE *get_DataRoot )(
            __RPC__in IPMApplicationInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pDataRoot);
        HRESULT ( STDMETHODCALLTYPE *get_Genre )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out PM_APP_GENRE *pGenre);
        HRESULT ( STDMETHODCALLTYPE *get_Publisher )(
            __RPC__in IPMApplicationInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pPublisher);
        HRESULT ( STDMETHODCALLTYPE *get_Author )(
            __RPC__in IPMApplicationInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pAuthor);
        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IPMApplicationInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pDescription);
        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in IPMApplicationInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pVersion);
        HRESULT ( STDMETHODCALLTYPE *get_InvocationInfo )(
            __RPC__in IPMApplicationInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pImageUrn,
                                    __RPC__deref_inout_opt_string BSTR *pParameters);
        HRESULT ( STDMETHODCALLTYPE *get_AppPlatMajorVersion )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BYTE *pMajorVer);
        HRESULT ( STDMETHODCALLTYPE *get_AppPlatMinorVersion )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BYTE *pMinorVer);
        HRESULT ( STDMETHODCALLTYPE *get_PublisherID )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out GUID *pPublisherID);
        HRESULT ( STDMETHODCALLTYPE *get_IsMultiCore )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pIsMultiCore);
        HRESULT ( STDMETHODCALLTYPE *get_SID )(
            __RPC__in IPMApplicationInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pSID);
        HRESULT ( STDMETHODCALLTYPE *get_AppPlatMajorVersionLightUp )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BYTE *pMajorVer);
        HRESULT ( STDMETHODCALLTYPE *get_AppPlatMinorVersionLightUp )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BYTE *pMinorVer);
        HRESULT ( STDMETHODCALLTYPE *set_UpdateAvailable )(
            __RPC__in IPMApplicationInfo * This,
                       BOOL IsUpdateAvailable);
        HRESULT ( STDMETHODCALLTYPE *set_NotificationState )(
            __RPC__in IPMApplicationInfo * This,
                       BOOL IsNotified);
        HRESULT ( STDMETHODCALLTYPE *set_IconPath )(
            __RPC__in IPMApplicationInfo * This,
                               __RPC__in_string BSTR AppIconPath);
        HRESULT ( STDMETHODCALLTYPE *set_UninstallableState )(
            __RPC__in IPMApplicationInfo * This,
                       BOOL IsUninstallable);
        HRESULT ( STDMETHODCALLTYPE *get_IsPinableOnKidZone )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pIsPinable);
        HRESULT ( STDMETHODCALLTYPE *get_IsOriginallyPreInstalled )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pIsPreinstalled);
        HRESULT ( STDMETHODCALLTYPE *get_IsInstallOnSD )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pIsInstallOnSD);
        HRESULT ( STDMETHODCALLTYPE *get_IsOptoutOnSD )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pIsOptoutOnSD);
        HRESULT ( STDMETHODCALLTYPE *get_IsOptoutBackupRestore )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pIsOptoutBackupRestore);
        HRESULT ( STDMETHODCALLTYPE *set_EnterpriseDisabled )(
            __RPC__in IPMApplicationInfo * This,
                       BOOL IsDisabled);
        HRESULT ( STDMETHODCALLTYPE *set_EnterpriseUninstallable )(
            __RPC__in IPMApplicationInfo * This,
                       BOOL IsUninstallable);
        HRESULT ( STDMETHODCALLTYPE *get_EnterpriseDisabled )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *IsDisabled);
        HRESULT ( STDMETHODCALLTYPE *get_EnterpriseUninstallable )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *IsUninstallable);
        HRESULT ( STDMETHODCALLTYPE *get_IsVisibleOnAppList )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pIsVisible);
        HRESULT ( STDMETHODCALLTYPE *get_IsInboxApp )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pIsInboxApp);
        HRESULT ( STDMETHODCALLTYPE *get_StorageID )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out GUID *pStorageID);
        HRESULT ( STDMETHODCALLTYPE *get_StartAppBlob )(
            __RPC__in IPMApplicationInfo * This,
                            __RPC__inout PM_STARTAPPBLOB *pBlob);
        HRESULT ( STDMETHODCALLTYPE *get_IsMovable )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pIsMovable);
        HRESULT ( STDMETHODCALLTYPE *get_DeploymentAppEnumerationHubFilter )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out PM_TILE_HUBTYPE *HubType);
        HRESULT ( STDMETHODCALLTYPE *get_ModifiedDate )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out FILETIME *pModifiedDate);
        HRESULT ( STDMETHODCALLTYPE *get_IsOriginallyRestored )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pIsRestored);
        HRESULT ( STDMETHODCALLTYPE *get_ShouldDeferMdilBind )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pfDeferMdilBind);
        HRESULT ( STDMETHODCALLTYPE *get_IsFullyPreInstall )(
            __RPC__in IPMApplicationInfo * This,
                        __RPC__out BOOL *pfIsFullyPreInstall);
        HRESULT ( STDMETHODCALLTYPE *set_IsMdilMaintenanceNeeded )(
            __RPC__in IPMApplicationInfo * This,
                       BOOL fIsMdilMaintenanceNeeded);
        HRESULT ( STDMETHODCALLTYPE *set_Title )(
            __RPC__in IPMApplicationInfo * This,
                               __RPC__in_string BSTR AppTitle);
        END_INTERFACE
    } IPMApplicationInfoVtbl;
    interface IPMApplicationInfo
    {
        CONST_VTBL struct IPMApplicationInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ProductID(This,pProductID) )
    ( (This)->lpVtbl -> get_InstanceID(This,pInstanceID) )
    ( (This)->lpVtbl -> get_OfferID(This,pOfferID) )
    ( (This)->lpVtbl -> get_DefaultTask(This,pDefaultTask) )
    ( (This)->lpVtbl -> get_AppTitle(This,pAppTitle) )
    ( (This)->lpVtbl -> get_IconPath(This,pAppIconPath) )
    ( (This)->lpVtbl -> get_NotificationState(This,pIsNotified) )
    ( (This)->lpVtbl -> get_AppInstallType(This,pAppInstallType) )
    ( (This)->lpVtbl -> get_State(This,pState) )
    ( (This)->lpVtbl -> get_IsRevoked(This,pIsRevoked) )
    ( (This)->lpVtbl -> get_UpdateAvailable(This,pIsUpdateAvailable) )
    ( (This)->lpVtbl -> get_InstallDate(This,pInstallDate) )
    ( (This)->lpVtbl -> get_IsUninstallable(This,pIsUninstallable) )
    ( (This)->lpVtbl -> get_IsThemable(This,pIsThemable) )
    ( (This)->lpVtbl -> get_IsTrial(This,pIsTrial) )
    ( (This)->lpVtbl -> get_InstallPath(This,pInstallPath) )
    ( (This)->lpVtbl -> get_DataRoot(This,pDataRoot) )
    ( (This)->lpVtbl -> get_Genre(This,pGenre) )
    ( (This)->lpVtbl -> get_Publisher(This,pPublisher) )
    ( (This)->lpVtbl -> get_Author(This,pAuthor) )
    ( (This)->lpVtbl -> get_Description(This,pDescription) )
    ( (This)->lpVtbl -> get_Version(This,pVersion) )
    ( (This)->lpVtbl -> get_InvocationInfo(This,pImageUrn,pParameters) )
    ( (This)->lpVtbl -> get_AppPlatMajorVersion(This,pMajorVer) )
    ( (This)->lpVtbl -> get_AppPlatMinorVersion(This,pMinorVer) )
    ( (This)->lpVtbl -> get_PublisherID(This,pPublisherID) )
    ( (This)->lpVtbl -> get_IsMultiCore(This,pIsMultiCore) )
    ( (This)->lpVtbl -> get_SID(This,pSID) )
    ( (This)->lpVtbl -> get_AppPlatMajorVersionLightUp(This,pMajorVer) )
    ( (This)->lpVtbl -> get_AppPlatMinorVersionLightUp(This,pMinorVer) )
    ( (This)->lpVtbl -> set_UpdateAvailable(This,IsUpdateAvailable) )
    ( (This)->lpVtbl -> set_NotificationState(This,IsNotified) )
    ( (This)->lpVtbl -> set_IconPath(This,AppIconPath) )
    ( (This)->lpVtbl -> set_UninstallableState(This,IsUninstallable) )
    ( (This)->lpVtbl -> get_IsPinableOnKidZone(This,pIsPinable) )
    ( (This)->lpVtbl -> get_IsOriginallyPreInstalled(This,pIsPreinstalled) )
    ( (This)->lpVtbl -> get_IsInstallOnSD(This,pIsInstallOnSD) )
    ( (This)->lpVtbl -> get_IsOptoutOnSD(This,pIsOptoutOnSD) )
    ( (This)->lpVtbl -> get_IsOptoutBackupRestore(This,pIsOptoutBackupRestore) )
    ( (This)->lpVtbl -> set_EnterpriseDisabled(This,IsDisabled) )
    ( (This)->lpVtbl -> set_EnterpriseUninstallable(This,IsUninstallable) )
    ( (This)->lpVtbl -> get_EnterpriseDisabled(This,IsDisabled) )
    ( (This)->lpVtbl -> get_EnterpriseUninstallable(This,IsUninstallable) )
    ( (This)->lpVtbl -> get_IsVisibleOnAppList(This,pIsVisible) )
    ( (This)->lpVtbl -> get_IsInboxApp(This,pIsInboxApp) )
    ( (This)->lpVtbl -> get_StorageID(This,pStorageID) )
    ( (This)->lpVtbl -> get_StartAppBlob(This,pBlob) )
    ( (This)->lpVtbl -> get_IsMovable(This,pIsMovable) )
    ( (This)->lpVtbl -> get_DeploymentAppEnumerationHubFilter(This,HubType) )
    ( (This)->lpVtbl -> get_ModifiedDate(This,pModifiedDate) )
    ( (This)->lpVtbl -> get_IsOriginallyRestored(This,pIsRestored) )
    ( (This)->lpVtbl -> get_ShouldDeferMdilBind(This,pfDeferMdilBind) )
    ( (This)->lpVtbl -> get_IsFullyPreInstall(This,pfIsFullyPreInstall) )
    ( (This)->lpVtbl -> set_IsMdilMaintenanceNeeded(This,fIsMdilMaintenanceNeeded) )
    ( (This)->lpVtbl -> set_Title(This,AppTitle) )
EXTERN_C const IID IID_IPMTilePropertyInfo;
    typedef struct IPMTilePropertyInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMTilePropertyInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMTilePropertyInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMTilePropertyInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_PropertyID )(
            __RPC__in IPMTilePropertyInfo * This,
                        __RPC__out ULONG *pPropID);
        HRESULT ( STDMETHODCALLTYPE *get_PropertyValue )(
            __RPC__in IPMTilePropertyInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pPropValue);
        HRESULT ( STDMETHODCALLTYPE *set_Property )(
            __RPC__in IPMTilePropertyInfo * This,
                               __RPC__in_string BSTR PropValue);
        END_INTERFACE
    } IPMTilePropertyInfoVtbl;
    interface IPMTilePropertyInfo
    {
        CONST_VTBL struct IPMTilePropertyInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_PropertyID(This,pPropID) )
    ( (This)->lpVtbl -> get_PropertyValue(This,pPropValue) )
    ( (This)->lpVtbl -> set_Property(This,PropValue) )
EXTERN_C const IID IID_IPMTilePropertyEnumerator;
    typedef struct IPMTilePropertyEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMTilePropertyEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMTilePropertyEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMTilePropertyEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *get_Next )(
            __RPC__in IPMTilePropertyEnumerator * This,
                        __RPC__deref_out_opt IPMTilePropertyInfo **ppPropInfo);
        END_INTERFACE
    } IPMTilePropertyEnumeratorVtbl;
    interface IPMTilePropertyEnumerator
    {
        CONST_VTBL struct IPMTilePropertyEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Next(This,ppPropInfo) )
EXTERN_C const IID IID_IPMTileInfo;
    typedef struct IPMTileInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMTileInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMTileInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMTileInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_ProductID )(
            __RPC__in IPMTileInfo * This,
                        __RPC__out PRODUCTID *pProductID);
        HRESULT ( STDMETHODCALLTYPE *get_TileID )(
            __RPC__in IPMTileInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pTileID);
        HRESULT ( STDMETHODCALLTYPE *get_TemplateType )(
            __RPC__in IPMTileInfo * This,
                        __RPC__out TILE_TEMPLATE_TYPE *pTemplateType);
        HRESULT ( STDMETHODCALLTYPE *get_HubPinnedState )(
            __RPC__in IPMTileInfo * This,
                       PM_TILE_HUBTYPE HubType,
                        __RPC__out BOOL *pPinned);
        HRESULT ( STDMETHODCALLTYPE *get_HubPosition )(
            __RPC__in IPMTileInfo * This,
                       PM_TILE_HUBTYPE HubType,
                        __RPC__out ULONG *pPosition);
        HRESULT ( STDMETHODCALLTYPE *get_IsNotified )(
            __RPC__in IPMTileInfo * This,
                        __RPC__out BOOL *pIsNotified);
        HRESULT ( STDMETHODCALLTYPE *get_IsDefault )(
            __RPC__in IPMTileInfo * This,
                        __RPC__out BOOL *pIsDefault);
        HRESULT ( STDMETHODCALLTYPE *get_TaskID )(
            __RPC__in IPMTileInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pTaskID);
        HRESULT ( STDMETHODCALLTYPE *get_TileType )(
            __RPC__in IPMTileInfo * This,
                        __RPC__out PM_STARTTILE_TYPE *pStartTileType);
        HRESULT ( STDMETHODCALLTYPE *get_IsThemable )(
            __RPC__in IPMTileInfo * This,
                        __RPC__out BOOL *pIsThemable);
        HRESULT ( STDMETHODCALLTYPE *get_PropertyById )(
            __RPC__in IPMTileInfo * This,
                       ULONG PropID,
                        __RPC__deref_out_opt IPMTilePropertyInfo **ppPropInfo);
        HRESULT ( STDMETHODCALLTYPE *get_InvocationInfo )(
            __RPC__in IPMTileInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pImageUrn,
                                    __RPC__deref_inout_opt_string BSTR *pParameters);
        HRESULT ( STDMETHODCALLTYPE *get_PropertyEnum )(
            __RPC__in IPMTileInfo * This,
                        __RPC__deref_out_opt IPMTilePropertyEnumerator **ppTilePropEnum);
        HRESULT ( STDMETHODCALLTYPE *get_HubTileSize )(
            __RPC__in IPMTileInfo * This,
                       PM_TILE_HUBTYPE HubType,
                        __RPC__out PM_TILE_SIZE *pSize);
        HRESULT ( STDMETHODCALLTYPE *set_HubPosition )(
            __RPC__in IPMTileInfo * This,
                       PM_TILE_HUBTYPE HubType,
                       ULONG Position);
        HRESULT ( STDMETHODCALLTYPE *set_NotifiedState )(
            __RPC__in IPMTileInfo * This,
                       BOOL Notified);
        HRESULT ( STDMETHODCALLTYPE *set_HubPinnedState )(
            __RPC__in IPMTileInfo * This,
                       PM_TILE_HUBTYPE HubType,
                       BOOL Pinned);
        HRESULT ( STDMETHODCALLTYPE *set_HubTileSize )(
            __RPC__in IPMTileInfo * This,
                       PM_TILE_HUBTYPE HubType,
                       PM_TILE_SIZE Size);
        HRESULT ( STDMETHODCALLTYPE *set_InvocationInfo )(
            __RPC__in IPMTileInfo * This,
                               __RPC__in_string BSTR TaskName,
                               __RPC__in_string BSTR TaskParameters);
        HRESULT ( STDMETHODCALLTYPE *get_StartTileBlob )(
            __RPC__in IPMTileInfo * This,
                            __RPC__inout PM_STARTTILEBLOB *pBlob);
        HRESULT ( STDMETHODCALLTYPE *get_IsRestoring )(
            __RPC__in IPMTileInfo * This,
                        __RPC__out BOOL *pIsRestoring);
        HRESULT ( STDMETHODCALLTYPE *get_IsAutoRestoreDisabled )(
            __RPC__in IPMTileInfo * This,
                        __RPC__out BOOL *pIsAutoRestoreDisabled);
        HRESULT ( STDMETHODCALLTYPE *set_IsRestoring )(
            __RPC__in IPMTileInfo * This,
                       BOOL Restoring);
        HRESULT ( STDMETHODCALLTYPE *set_IsAutoRestoreDisabled )(
            __RPC__in IPMTileInfo * This,
                       BOOL AutoRestoreDisabled);
        END_INTERFACE
    } IPMTileInfoVtbl;
    interface IPMTileInfo
    {
        CONST_VTBL struct IPMTileInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ProductID(This,pProductID) )
    ( (This)->lpVtbl -> get_TileID(This,pTileID) )
    ( (This)->lpVtbl -> get_TemplateType(This,pTemplateType) )
    ( (This)->lpVtbl -> get_HubPinnedState(This,HubType,pPinned) )
    ( (This)->lpVtbl -> get_HubPosition(This,HubType,pPosition) )
    ( (This)->lpVtbl -> get_IsNotified(This,pIsNotified) )
    ( (This)->lpVtbl -> get_IsDefault(This,pIsDefault) )
    ( (This)->lpVtbl -> get_TaskID(This,pTaskID) )
    ( (This)->lpVtbl -> get_TileType(This,pStartTileType) )
    ( (This)->lpVtbl -> get_IsThemable(This,pIsThemable) )
    ( (This)->lpVtbl -> get_PropertyById(This,PropID,ppPropInfo) )
    ( (This)->lpVtbl -> get_InvocationInfo(This,pImageUrn,pParameters) )
    ( (This)->lpVtbl -> get_PropertyEnum(This,ppTilePropEnum) )
    ( (This)->lpVtbl -> get_HubTileSize(This,HubType,pSize) )
    ( (This)->lpVtbl -> set_HubPosition(This,HubType,Position) )
    ( (This)->lpVtbl -> set_NotifiedState(This,Notified) )
    ( (This)->lpVtbl -> set_HubPinnedState(This,HubType,Pinned) )
    ( (This)->lpVtbl -> set_HubTileSize(This,HubType,Size) )
    ( (This)->lpVtbl -> set_InvocationInfo(This,TaskName,TaskParameters) )
    ( (This)->lpVtbl -> get_StartTileBlob(This,pBlob) )
    ( (This)->lpVtbl -> get_IsRestoring(This,pIsRestoring) )
    ( (This)->lpVtbl -> get_IsAutoRestoreDisabled(This,pIsAutoRestoreDisabled) )
    ( (This)->lpVtbl -> set_IsRestoring(This,Restoring) )
    ( (This)->lpVtbl -> set_IsAutoRestoreDisabled(This,AutoRestoreDisabled) )
EXTERN_C const IID IID_IPMTileInfoEnumerator;
    typedef struct IPMTileInfoEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMTileInfoEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMTileInfoEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMTileInfoEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *get_Next )(
            __RPC__in IPMTileInfoEnumerator * This,
                        __RPC__deref_out_opt IPMTileInfo **ppTileInfo);
        END_INTERFACE
    } IPMTileInfoEnumeratorVtbl;
    interface IPMTileInfoEnumerator
    {
        CONST_VTBL struct IPMTileInfoEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Next(This,ppTileInfo) )
EXTERN_C const IID IID_IPMApplicationInfoEnumerator;
    typedef struct IPMApplicationInfoEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMApplicationInfoEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMApplicationInfoEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMApplicationInfoEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *get_Next )(
            __RPC__in IPMApplicationInfoEnumerator * This,
                        __RPC__deref_out_opt IPMApplicationInfo **ppAppInfo);
        END_INTERFACE
    } IPMApplicationInfoEnumeratorVtbl;
    interface IPMApplicationInfoEnumerator
    {
        CONST_VTBL struct IPMApplicationInfoEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Next(This,ppAppInfo) )
EXTERN_C const IID IID_IPMLiveTileJobInfo;
    typedef struct IPMLiveTileJobInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMLiveTileJobInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMLiveTileJobInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMLiveTileJobInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_ProductID )(
            __RPC__in IPMLiveTileJobInfo * This,
                        __RPC__out PRODUCTID *pProductID);
        HRESULT ( STDMETHODCALLTYPE *get_TileID )(
            __RPC__in IPMLiveTileJobInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pTileID);
        HRESULT ( STDMETHODCALLTYPE *get_NextSchedule )(
            __RPC__in IPMLiveTileJobInfo * This,
                        __RPC__out FILETIME *pNextSchedule);
        HRESULT ( STDMETHODCALLTYPE *set_NextSchedule )(
            __RPC__in IPMLiveTileJobInfo * This,
                       FILETIME ftNextSchedule);
        HRESULT ( STDMETHODCALLTYPE *get_StartSchedule )(
            __RPC__in IPMLiveTileJobInfo * This,
                        __RPC__out FILETIME *pStartSchedule);
        HRESULT ( STDMETHODCALLTYPE *set_StartSchedule )(
            __RPC__in IPMLiveTileJobInfo * This,
                       FILETIME ftStartSchedule);
        HRESULT ( STDMETHODCALLTYPE *get_IntervalDuration )(
            __RPC__in IPMLiveTileJobInfo * This,
                        __RPC__out ULONG *pIntervalDuration);
        HRESULT ( STDMETHODCALLTYPE *set_IntervalDuration )(
            __RPC__in IPMLiveTileJobInfo * This,
                       ULONG ulIntervalDuration);
        HRESULT ( STDMETHODCALLTYPE *get_RunForever )(
            __RPC__in IPMLiveTileJobInfo * This,
                        __RPC__out BOOL *IsRunForever);
        HRESULT ( STDMETHODCALLTYPE *set_RunForever )(
            __RPC__in IPMLiveTileJobInfo * This,
                       BOOL fRunForever);
        HRESULT ( STDMETHODCALLTYPE *get_MaxRunCount )(
            __RPC__in IPMLiveTileJobInfo * This,
                        __RPC__out ULONG *pMaxRunCount);
        HRESULT ( STDMETHODCALLTYPE *set_MaxRunCount )(
            __RPC__in IPMLiveTileJobInfo * This,
                       ULONG ulMaxRunCount);
        HRESULT ( STDMETHODCALLTYPE *get_RunCount )(
            __RPC__in IPMLiveTileJobInfo * This,
                        __RPC__out ULONG *pRunCount);
        HRESULT ( STDMETHODCALLTYPE *set_RunCount )(
            __RPC__in IPMLiveTileJobInfo * This,
                       ULONG ulRunCount);
        HRESULT ( STDMETHODCALLTYPE *get_RecurrenceType )(
            __RPC__in IPMLiveTileJobInfo * This,
                        __RPC__out ULONG *pRecurrenceType);
        HRESULT ( STDMETHODCALLTYPE *set_RecurrenceType )(
            __RPC__in IPMLiveTileJobInfo * This,
                       ULONG ulRecurrenceType);
        HRESULT ( STDMETHODCALLTYPE *get_TileXML )(
            __RPC__in IPMLiveTileJobInfo * This,
                                          __RPC__deref_out_ecount_full_opt(*pcbTileXml) BYTE **pTileXml,
                        __RPC__out ULONG *pcbTileXml);
        HRESULT ( STDMETHODCALLTYPE *set_TileXML )(
            __RPC__in IPMLiveTileJobInfo * This,
                                __RPC__in_ecount_full(cbTileXml) BYTE *pTileXml,
                       ULONG cbTileXml);
        HRESULT ( STDMETHODCALLTYPE *get_UrlXML )(
            __RPC__in IPMLiveTileJobInfo * This,
                                          __RPC__deref_out_ecount_full_opt(*pcbUrlXML) BYTE **pUrlXML,
                        __RPC__out ULONG *pcbUrlXML);
        HRESULT ( STDMETHODCALLTYPE *set_UrlXML )(
            __RPC__in IPMLiveTileJobInfo * This,
                                __RPC__in_ecount_full(cbUrlXML) BYTE *pUrlXML,
                       ULONG cbUrlXML);
        HRESULT ( STDMETHODCALLTYPE *get_AttemptCount )(
            __RPC__in IPMLiveTileJobInfo * This,
                        __RPC__out ULONG *pAttemptCount);
        HRESULT ( STDMETHODCALLTYPE *set_AttemptCount )(
            __RPC__in IPMLiveTileJobInfo * This,
                       ULONG ulAttemptCount);
        HRESULT ( STDMETHODCALLTYPE *get_DownloadState )(
            __RPC__in IPMLiveTileJobInfo * This,
                        __RPC__out ULONG *pDownloadState);
        HRESULT ( STDMETHODCALLTYPE *set_DownloadState )(
            __RPC__in IPMLiveTileJobInfo * This,
                       ULONG ulDownloadState);
        END_INTERFACE
    } IPMLiveTileJobInfoVtbl;
    interface IPMLiveTileJobInfo
    {
        CONST_VTBL struct IPMLiveTileJobInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ProductID(This,pProductID) )
    ( (This)->lpVtbl -> get_TileID(This,pTileID) )
    ( (This)->lpVtbl -> get_NextSchedule(This,pNextSchedule) )
    ( (This)->lpVtbl -> set_NextSchedule(This,ftNextSchedule) )
    ( (This)->lpVtbl -> get_StartSchedule(This,pStartSchedule) )
    ( (This)->lpVtbl -> set_StartSchedule(This,ftStartSchedule) )
    ( (This)->lpVtbl -> get_IntervalDuration(This,pIntervalDuration) )
    ( (This)->lpVtbl -> set_IntervalDuration(This,ulIntervalDuration) )
    ( (This)->lpVtbl -> get_RunForever(This,IsRunForever) )
    ( (This)->lpVtbl -> set_RunForever(This,fRunForever) )
    ( (This)->lpVtbl -> get_MaxRunCount(This,pMaxRunCount) )
    ( (This)->lpVtbl -> set_MaxRunCount(This,ulMaxRunCount) )
    ( (This)->lpVtbl -> get_RunCount(This,pRunCount) )
    ( (This)->lpVtbl -> set_RunCount(This,ulRunCount) )
    ( (This)->lpVtbl -> get_RecurrenceType(This,pRecurrenceType) )
    ( (This)->lpVtbl -> set_RecurrenceType(This,ulRecurrenceType) )
    ( (This)->lpVtbl -> get_TileXML(This,pTileXml,pcbTileXml) )
    ( (This)->lpVtbl -> set_TileXML(This,pTileXml,cbTileXml) )
    ( (This)->lpVtbl -> get_UrlXML(This,pUrlXML,pcbUrlXML) )
    ( (This)->lpVtbl -> set_UrlXML(This,pUrlXML,cbUrlXML) )
    ( (This)->lpVtbl -> get_AttemptCount(This,pAttemptCount) )
    ( (This)->lpVtbl -> set_AttemptCount(This,ulAttemptCount) )
    ( (This)->lpVtbl -> get_DownloadState(This,pDownloadState) )
    ( (This)->lpVtbl -> set_DownloadState(This,ulDownloadState) )
EXTERN_C const IID IID_IPMLiveTileJobInfoEnumerator;
    typedef struct IPMLiveTileJobInfoEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMLiveTileJobInfoEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMLiveTileJobInfoEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMLiveTileJobInfoEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *get_Next )(
            __RPC__in IPMLiveTileJobInfoEnumerator * This,
                        __RPC__deref_out_opt IPMLiveTileJobInfo **ppLiveTileJobInfo);
        END_INTERFACE
    } IPMLiveTileJobInfoEnumeratorVtbl;
    interface IPMLiveTileJobInfoEnumerator
    {
        CONST_VTBL struct IPMLiveTileJobInfoEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Next(This,ppLiveTileJobInfo) )
EXTERN_C const IID IID_IPMDeploymentManager;
    typedef struct IPMDeploymentManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMDeploymentManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMDeploymentManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMDeploymentManager * This);
        HRESULT ( STDMETHODCALLTYPE *ReportDownloadBegin )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID productID);
        HRESULT ( STDMETHODCALLTYPE *ReportDownloadProgress )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID productID,
                       USHORT usProgress);
        HRESULT ( STDMETHODCALLTYPE *ReportDownloadComplete )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID productID,
                       HRESULT hrResult);
        HRESULT ( STDMETHODCALLTYPE *BeginInstall )(
            __RPC__in IPMDeploymentManager * This,
                       __RPC__in PM_INSTALLINFO *pInstallInfo);
        HRESULT ( STDMETHODCALLTYPE *BeginUpdate )(
            __RPC__in IPMDeploymentManager * This,
                       __RPC__in PM_UPDATEINFO *pUpdateInfo);
        HRESULT ( STDMETHODCALLTYPE *BeginDeployPackage )(
            __RPC__in IPMDeploymentManager * This,
                       __RPC__in PM_INSTALLINFO *pInstallInfo);
        HRESULT ( STDMETHODCALLTYPE *BeginUpdateDeployedPackageLegacy )(
            __RPC__in IPMDeploymentManager * This,
                       __RPC__in PM_UPDATEINFO_LEGACY *pUpdateInfo);
        HRESULT ( STDMETHODCALLTYPE *BeginUninstall )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID productID);
        HRESULT ( STDMETHODCALLTYPE *BeginEnterpriseAppInstall )(
            __RPC__in IPMDeploymentManager * This,
                       __RPC__in PM_INSTALLINFO *pInstallInfo);
        HRESULT ( STDMETHODCALLTYPE *BeginEnterpriseAppUpdate )(
            __RPC__in IPMDeploymentManager * This,
                       __RPC__in PM_UPDATEINFO *pUpdateInfo);
        HRESULT ( STDMETHODCALLTYPE *BeginUpdateLicense )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID productID,
                       GUID offerID,
                                __RPC__in_ecount_full(cbLicense) BYTE *pbLicense,
                       DWORD cbLicense);
        HRESULT ( STDMETHODCALLTYPE *GetLicenseChallenge )(
            __RPC__in IPMDeploymentManager * This,
                               __RPC__in_string BSTR PackagePath,
                                          __RPC__deref_out_ecount_full_opt(*pcbChallenge) BYTE **ppbChallenge,
                        __RPC__out DWORD *pcbChallenge,
                                                      __RPC__deref_opt_inout_ecount_full_opt(*pcbKID) BYTE **ppbKID,
                                    __RPC__inout_opt DWORD *pcbKID,
                                                      __RPC__deref_opt_inout_ecount_full_opt(*pcbDeviceID) BYTE **ppbDeviceID,
                                    __RPC__inout_opt DWORD *pcbDeviceID,
                                                      __RPC__deref_opt_inout_ecount_full_opt(*pcbSaltValue) BYTE **ppbSaltValue,
                                    __RPC__inout_opt DWORD *pcbSaltValue,
                                                      __RPC__deref_opt_inout_ecount_full_opt(*pcbKGVValue) BYTE **ppbKGVValue,
                                    __RPC__inout_opt DWORD *pcbKGVValue);
        HRESULT ( STDMETHODCALLTYPE *GetLicenseChallengeByProductID )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID ProductID,
                                          __RPC__deref_out_ecount_full_opt(*pcbLicense) BYTE **ppbChallenge,
                        __RPC__out DWORD *pcbLicense);
        HRESULT ( STDMETHODCALLTYPE *GetLicenseChallengeByProductID2 )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID ProductID,
                                          __RPC__deref_out_ecount_full_opt(*pcbLicense) BYTE **ppbChallenge,
                        __RPC__out DWORD *pcbLicense,
                                                      __RPC__deref_opt_inout_ecount_full_opt(*pcbKID) BYTE **ppbKID,
                                    __RPC__inout_opt DWORD *pcbKID,
                                                      __RPC__deref_opt_inout_ecount_full_opt(*pcbDeviceID) BYTE **ppbDeviceID,
                                    __RPC__inout_opt DWORD *pcbDeviceID,
                                                      __RPC__deref_opt_inout_ecount_full_opt(*pcbSaltValue) BYTE **ppbSaltValue,
                                    __RPC__inout_opt DWORD *pcbSaltValue,
                                                      __RPC__deref_opt_inout_ecount_full_opt(*pcbKGVValue) BYTE **ppbKGVValue,
                                    __RPC__inout_opt DWORD *pcbKGVValue);
        HRESULT ( STDMETHODCALLTYPE *RevokeLicense )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID productID);
        HRESULT ( STDMETHODCALLTYPE *RebindMdilBinaries )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID ProductID,
                       __RPC__in SAFEARRAY * FileNames);
        HRESULT ( STDMETHODCALLTYPE *RebindAllMdilBinaries )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID ProductID,
                       GUID InstanceID);
        HRESULT ( STDMETHODCALLTYPE *RegenerateXbf )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID ProductID,
                       __RPC__in SAFEARRAY * AssemblyPaths);
        HRESULT ( STDMETHODCALLTYPE *GenerateXbfForCurrentLocale )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID ProductID);
        HRESULT ( STDMETHODCALLTYPE *BeginProvision )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID ProductID,
                               __RPC__in_string BSTR XMLpath);
        HRESULT ( STDMETHODCALLTYPE *BeginDeprovision )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID ProductID);
        HRESULT ( STDMETHODCALLTYPE *ReindexSQLCEDatabases )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID ProductID);
        HRESULT ( STDMETHODCALLTYPE *SetApplicationsNeedMaintenance )(
            __RPC__in IPMDeploymentManager * This,
                       DWORD RequiredMaintenanceOperations,
                        __RPC__out DWORD *pcApplications);
        HRESULT ( STDMETHODCALLTYPE *UpdateChamberProfile )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID ProductID);
        HRESULT ( STDMETHODCALLTYPE *EnterprisePolicyIsApplicationAllowed )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID productId,
                       __RPC__in LPCWSTR publisherName,
                        __RPC__out BOOL *pIsAllowed);
        HRESULT ( STDMETHODCALLTYPE *BeginUpdateDeployedPackage )(
            __RPC__in IPMDeploymentManager * This,
                       __RPC__in PM_UPDATEINFO *pUpdateInfo);
        HRESULT ( STDMETHODCALLTYPE *ReportRestoreCancelled )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID productID);
        HRESULT ( STDMETHODCALLTYPE *ResolveResourceString )(
            __RPC__in IPMDeploymentManager * This,
                       __RPC__in LPCWSTR resourceString,
                                    __RPC__deref_inout_opt_string BSTR *pResolvedResourceString);
        HRESULT ( STDMETHODCALLTYPE *UpdateCapabilitiesForModernApps )(
            __RPC__in IPMDeploymentManager * This);
        HRESULT ( STDMETHODCALLTYPE *ReportDownloadStatusUpdate )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID productId);
        HRESULT ( STDMETHODCALLTYPE *BeginUninstallWithOptions )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID productID,
                       DWORD removalOptions);
        HRESULT ( STDMETHODCALLTYPE *BindDeferredMdilBinaries )(
            __RPC__in IPMDeploymentManager * This);
        HRESULT ( STDMETHODCALLTYPE *GenerateXamlLightupXbfForCurrentLocale )(
            __RPC__in IPMDeploymentManager * This,
                               __RPC__in_string BSTR PackageFamilyName);
        HRESULT ( STDMETHODCALLTYPE *AddLicenseForAppx )(
            __RPC__in IPMDeploymentManager * This,
                       PRODUCTID productID,
                                __RPC__in_ecount_full(cbLicense) BYTE *pbLicense,
                       DWORD cbLicense,
                                        __RPC__in_ecount_full_opt(cbPlayReadyHeader) BYTE *pbPlayReadyHeader,
                       DWORD cbPlayReadyHeader);
        HRESULT ( STDMETHODCALLTYPE *FixJunctionsForAppsOnSDCard )(
            __RPC__in IPMDeploymentManager * This);
        END_INTERFACE
    } IPMDeploymentManagerVtbl;
    interface IPMDeploymentManager
    {
        CONST_VTBL struct IPMDeploymentManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReportDownloadBegin(This,productID) )
    ( (This)->lpVtbl -> ReportDownloadProgress(This,productID,usProgress) )
    ( (This)->lpVtbl -> ReportDownloadComplete(This,productID,hrResult) )
    ( (This)->lpVtbl -> BeginInstall(This,pInstallInfo) )
    ( (This)->lpVtbl -> BeginUpdate(This,pUpdateInfo) )
    ( (This)->lpVtbl -> BeginDeployPackage(This,pInstallInfo) )
    ( (This)->lpVtbl -> BeginUpdateDeployedPackageLegacy(This,pUpdateInfo) )
    ( (This)->lpVtbl -> BeginUninstall(This,productID) )
    ( (This)->lpVtbl -> BeginEnterpriseAppInstall(This,pInstallInfo) )
    ( (This)->lpVtbl -> BeginEnterpriseAppUpdate(This,pUpdateInfo) )
    ( (This)->lpVtbl -> BeginUpdateLicense(This,productID,offerID,pbLicense,cbLicense) )
    ( (This)->lpVtbl -> GetLicenseChallenge(This,PackagePath,ppbChallenge,pcbChallenge,ppbKID,pcbKID,ppbDeviceID,pcbDeviceID,ppbSaltValue,pcbSaltValue,ppbKGVValue,pcbKGVValue) )
    ( (This)->lpVtbl -> GetLicenseChallengeByProductID(This,ProductID,ppbChallenge,pcbLicense) )
    ( (This)->lpVtbl -> GetLicenseChallengeByProductID2(This,ProductID,ppbChallenge,pcbLicense,ppbKID,pcbKID,ppbDeviceID,pcbDeviceID,ppbSaltValue,pcbSaltValue,ppbKGVValue,pcbKGVValue) )
    ( (This)->lpVtbl -> RevokeLicense(This,productID) )
    ( (This)->lpVtbl -> RebindMdilBinaries(This,ProductID,FileNames) )
    ( (This)->lpVtbl -> RebindAllMdilBinaries(This,ProductID,InstanceID) )
    ( (This)->lpVtbl -> RegenerateXbf(This,ProductID,AssemblyPaths) )
    ( (This)->lpVtbl -> GenerateXbfForCurrentLocale(This,ProductID) )
    ( (This)->lpVtbl -> BeginProvision(This,ProductID,XMLpath) )
    ( (This)->lpVtbl -> BeginDeprovision(This,ProductID) )
    ( (This)->lpVtbl -> ReindexSQLCEDatabases(This,ProductID) )
    ( (This)->lpVtbl -> SetApplicationsNeedMaintenance(This,RequiredMaintenanceOperations,pcApplications) )
    ( (This)->lpVtbl -> UpdateChamberProfile(This,ProductID) )
    ( (This)->lpVtbl -> EnterprisePolicyIsApplicationAllowed(This,productId,publisherName,pIsAllowed) )
    ( (This)->lpVtbl -> BeginUpdateDeployedPackage(This,pUpdateInfo) )
    ( (This)->lpVtbl -> ReportRestoreCancelled(This,productID) )
    ( (This)->lpVtbl -> ResolveResourceString(This,resourceString,pResolvedResourceString) )
    ( (This)->lpVtbl -> UpdateCapabilitiesForModernApps(This) )
    ( (This)->lpVtbl -> ReportDownloadStatusUpdate(This,productId) )
    ( (This)->lpVtbl -> BeginUninstallWithOptions(This,productID,removalOptions) )
    ( (This)->lpVtbl -> BindDeferredMdilBinaries(This) )
    ( (This)->lpVtbl -> GenerateXamlLightupXbfForCurrentLocale(This,PackageFamilyName) )
    ( (This)->lpVtbl -> AddLicenseForAppx(This,productID,pbLicense,cbLicense,pbPlayReadyHeader,cbPlayReadyHeader) )
    ( (This)->lpVtbl -> FixJunctionsForAppsOnSDCard(This) )
EXTERN_C const IID IID_IPMEnumerationManager;
    typedef struct IPMEnumerationManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMEnumerationManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMEnumerationManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMEnumerationManager * This);
        HRESULT ( STDMETHODCALLTYPE *get_AllApplications )(
            __RPC__in IPMEnumerationManager * This,
                        __RPC__deref_out_opt IPMApplicationInfoEnumerator **ppAppEnum,
                       PM_ENUM_FILTER Filter);
        HRESULT ( STDMETHODCALLTYPE *get_AllTiles )(
            __RPC__in IPMEnumerationManager * This,
                        __RPC__deref_out_opt IPMTileInfoEnumerator **ppTileEnum,
                       PM_ENUM_FILTER Filter);
        HRESULT ( STDMETHODCALLTYPE *get_AllTasks )(
            __RPC__in IPMEnumerationManager * This,
                        __RPC__deref_out_opt IPMTaskInfoEnumerator **ppTaskEnum,
                       PM_ENUM_FILTER Filter);
        HRESULT ( STDMETHODCALLTYPE *get_AllExtensions )(
            __RPC__in IPMEnumerationManager * This,
                        __RPC__deref_out_opt IPMExtensionInfoEnumerator **ppExtensionEnum,
                       PM_ENUM_FILTER Filter);
        HRESULT ( STDMETHODCALLTYPE *get_AllBackgroundServiceAgents )(
            __RPC__in IPMEnumerationManager * This,
                        __RPC__deref_out_opt IPMBackgroundServiceAgentInfoEnumerator **ppBSAEnum,
                       PM_ENUM_FILTER Filter);
        HRESULT ( STDMETHODCALLTYPE *get_AllBackgroundWorkers )(
            __RPC__in IPMEnumerationManager * This,
                        __RPC__deref_out_opt IPMBackgroundWorkerInfoEnumerator **ppBSWEnum,
                       PM_ENUM_FILTER Filter);
        HRESULT ( STDMETHODCALLTYPE *get_ApplicationInfo )(
            __RPC__in IPMEnumerationManager * This,
                       PRODUCTID ProductID,
                        __RPC__deref_out_opt IPMApplicationInfo **ppAppInfo);
        HRESULT ( STDMETHODCALLTYPE *get_TileInfo )(
            __RPC__in IPMEnumerationManager * This,
                       PRODUCTID ProductID,
                               __RPC__in_string BSTR TileID,
                        __RPC__deref_out_opt IPMTileInfo **ppTileInfo);
        HRESULT ( STDMETHODCALLTYPE *get_TaskInfo )(
            __RPC__in IPMEnumerationManager * This,
                       PRODUCTID ProductID,
                               __RPC__in_string BSTR TaskID,
                        __RPC__deref_out_opt IPMTaskInfo **ppTaskInfo);
        HRESULT ( STDMETHODCALLTYPE *get_TaskInfoEx )(
            __RPC__in IPMEnumerationManager * This,
                       PRODUCTID ProductID,
                               __RPC__in_string LPCWSTR TaskID,
                        __RPC__deref_out_opt IPMTaskInfo **ppTaskInfo);
        HRESULT ( STDMETHODCALLTYPE *get_BackgroundServiceAgentInfo )(
            __RPC__in IPMEnumerationManager * This,
                       DWORD BSAID,
                        __RPC__deref_out_opt IPMBackgroundServiceAgentInfo **ppTaskInfo);
        HRESULT ( STDMETHODCALLTYPE *get_AllLiveTileJobs )(
            __RPC__in IPMEnumerationManager * This,
                        __RPC__deref_out_opt IPMLiveTileJobInfoEnumerator **ppLiveTileJobEnum);
        HRESULT ( STDMETHODCALLTYPE *get_LiveTileJob )(
            __RPC__in IPMEnumerationManager * This,
                       PRODUCTID ProductID,
                               __RPC__in_string BSTR TileID,
                       PM_LIVETILE_RECURRENCE_TYPE RecurrenceType,
                        __RPC__deref_out_opt IPMLiveTileJobInfo **ppLiveTileJobInfo);
        HRESULT ( STDMETHODCALLTYPE *get_ApplicationInfoExternal )(
            __RPC__in IPMEnumerationManager * This,
                       PRODUCTID ProductID,
                        __RPC__deref_out_opt IPMApplicationInfo **ppAppInfo);
        HRESULT ( STDMETHODCALLTYPE *get_FileHandlerGenericLogo )(
            __RPC__in IPMEnumerationManager * This,
                               __RPC__in_string BSTR FileType,
                       PM_LOGO_SIZE LogoSize,
                                    __RPC__deref_inout_opt_string BSTR *pLogo);
        HRESULT ( STDMETHODCALLTYPE *get_ApplicationInfoFromAccessClaims )(
            __RPC__in IPMEnumerationManager * This,
                               __RPC__in_string BSTR SysAppID0,
                               __RPC__in_string BSTR SysAppID1,
                        __RPC__deref_out_opt IPMApplicationInfo **ppAppInfo);
        HRESULT ( STDMETHODCALLTYPE *get_StartTileEnumeratorBlob )(
            __RPC__in IPMEnumerationManager * This,
                       PM_ENUM_FILTER Filter,
                        __RPC__out DWORD *pcTiles,
                                          __RPC__deref_out_ecount_full_opt(*pcTiles) PM_STARTTILEBLOB **ppTileBlobs);
        HRESULT ( STDMETHODCALLTYPE *get_StartAppEnumeratorBlob )(
            __RPC__in IPMEnumerationManager * This,
                       PM_ENUM_FILTER Filter,
                        __RPC__out DWORD *pcApps,
                                          __RPC__deref_out_ecount_full_opt(*pcApps) PM_STARTAPPBLOB **ppAppBlobs);
        END_INTERFACE
    } IPMEnumerationManagerVtbl;
    interface IPMEnumerationManager
    {
        CONST_VTBL struct IPMEnumerationManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_AllApplications(This,ppAppEnum,Filter) )
    ( (This)->lpVtbl -> get_AllTiles(This,ppTileEnum,Filter) )
    ( (This)->lpVtbl -> get_AllTasks(This,ppTaskEnum,Filter) )
    ( (This)->lpVtbl -> get_AllExtensions(This,ppExtensionEnum,Filter) )
    ( (This)->lpVtbl -> get_AllBackgroundServiceAgents(This,ppBSAEnum,Filter) )
    ( (This)->lpVtbl -> get_AllBackgroundWorkers(This,ppBSWEnum,Filter) )
    ( (This)->lpVtbl -> get_ApplicationInfo(This,ProductID,ppAppInfo) )
    ( (This)->lpVtbl -> get_TileInfo(This,ProductID,TileID,ppTileInfo) )
    ( (This)->lpVtbl -> get_TaskInfo(This,ProductID,TaskID,ppTaskInfo) )
    ( (This)->lpVtbl -> get_TaskInfoEx(This,ProductID,TaskID,ppTaskInfo) )
    ( (This)->lpVtbl -> get_BackgroundServiceAgentInfo(This,BSAID,ppTaskInfo) )
    ( (This)->lpVtbl -> get_AllLiveTileJobs(This,ppLiveTileJobEnum) )
    ( (This)->lpVtbl -> get_LiveTileJob(This,ProductID,TileID,RecurrenceType,ppLiveTileJobInfo) )
    ( (This)->lpVtbl -> get_ApplicationInfoExternal(This,ProductID,ppAppInfo) )
    ( (This)->lpVtbl -> get_FileHandlerGenericLogo(This,FileType,LogoSize,pLogo) )
    ( (This)->lpVtbl -> get_ApplicationInfoFromAccessClaims(This,SysAppID0,SysAppID1,ppAppInfo) )
    ( (This)->lpVtbl -> get_StartTileEnumeratorBlob(This,Filter,pcTiles,ppTileBlobs) )
    ( (This)->lpVtbl -> get_StartAppEnumeratorBlob(This,Filter,pcApps,ppAppBlobs) )
EXTERN_C const IID IID_IPMTaskInfo;
    typedef struct IPMTaskInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMTaskInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMTaskInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMTaskInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_ProductID )(
            __RPC__in IPMTaskInfo * This,
                        __RPC__out PRODUCTID *pProductID);
        HRESULT ( STDMETHODCALLTYPE *get_TaskID )(
            __RPC__in IPMTaskInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pTaskID);
        HRESULT ( STDMETHODCALLTYPE *get_NavigationPage )(
            __RPC__in IPMTaskInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pNavigationPage);
        HRESULT ( STDMETHODCALLTYPE *get_TaskTransition )(
            __RPC__in IPMTaskInfo * This,
                        __RPC__out PM_TASK_TRANSITION *pTaskTransition);
        HRESULT ( STDMETHODCALLTYPE *get_RuntimeType )(
            __RPC__in IPMTaskInfo * This,
                        __RPC__out PACKMAN_RUNTIME *pRuntimetype);
        HRESULT ( STDMETHODCALLTYPE *get_ActivationPolicy )(
            __RPC__in IPMTaskInfo * This,
                        __RPC__out PM_ACTIVATION_POLICY *pActivationPolicy);
        HRESULT ( STDMETHODCALLTYPE *get_TaskType )(
            __RPC__in IPMTaskInfo * This,
                        __RPC__out PM_TASK_TYPE *pTaskType);
        HRESULT ( STDMETHODCALLTYPE *get_InvocationInfo )(
            __RPC__in IPMTaskInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pImageUrn,
                                    __RPC__deref_inout_opt_string BSTR *pParameters);
        HRESULT ( STDMETHODCALLTYPE *get_ImagePath )(
            __RPC__in IPMTaskInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pImagePath);
        HRESULT ( STDMETHODCALLTYPE *get_ImageParams )(
            __RPC__in IPMTaskInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pImageParams);
        HRESULT ( STDMETHODCALLTYPE *get_InstallRootFolder )(
            __RPC__in IPMTaskInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pInstallRootFolder);
        HRESULT ( STDMETHODCALLTYPE *get_DataRootFolder )(
            __RPC__in IPMTaskInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pDataRootFolder);
        HRESULT ( STDMETHODCALLTYPE *get_IsSingleInstanceHost )(
            __RPC__in IPMTaskInfo * This,
                        __RPC__out BOOL *pIsSingleInstanceHost);
        HRESULT ( STDMETHODCALLTYPE *get_IsInteropEnabled )(
            __RPC__in IPMTaskInfo * This,
                        __RPC__out BOOL *pIsInteropEnabled);
        HRESULT ( STDMETHODCALLTYPE *get_ApplicationState )(
            __RPC__in IPMTaskInfo * This,
                        __RPC__out PM_APPLICATION_STATE *pApplicationState);
        HRESULT ( STDMETHODCALLTYPE *get_InstallType )(
            __RPC__in IPMTaskInfo * This,
                        __RPC__out PM_APPLICATION_INSTALL_TYPE *pInstallType);
        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in IPMTaskInfo * This,
                        __RPC__out BYTE *pTargetMajorVersion,
                        __RPC__out BYTE *pTargetMinorVersion);
        HRESULT ( STDMETHODCALLTYPE *get_BitsPerPixel )(
            __RPC__in IPMTaskInfo * This,
                        __RPC__out USHORT *pBitsPerPixel);
        HRESULT ( STDMETHODCALLTYPE *get_SuppressesDehydration )(
            __RPC__in IPMTaskInfo * This,
                        __RPC__out BOOL *pSuppressesDehydration);
        HRESULT ( STDMETHODCALLTYPE *get_BackgroundExecutionAbilities )(
            __RPC__in IPMTaskInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pBackgroundExecutionAbilities);
        HRESULT ( STDMETHODCALLTYPE *get_IsOptedForExtendedMem )(
            __RPC__in IPMTaskInfo * This,
                        __RPC__out BOOL *pIsOptedIn);
        END_INTERFACE
    } IPMTaskInfoVtbl;
    interface IPMTaskInfo
    {
        CONST_VTBL struct IPMTaskInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ProductID(This,pProductID) )
    ( (This)->lpVtbl -> get_TaskID(This,pTaskID) )
    ( (This)->lpVtbl -> get_NavigationPage(This,pNavigationPage) )
    ( (This)->lpVtbl -> get_TaskTransition(This,pTaskTransition) )
    ( (This)->lpVtbl -> get_RuntimeType(This,pRuntimetype) )
    ( (This)->lpVtbl -> get_ActivationPolicy(This,pActivationPolicy) )
    ( (This)->lpVtbl -> get_TaskType(This,pTaskType) )
    ( (This)->lpVtbl -> get_InvocationInfo(This,pImageUrn,pParameters) )
    ( (This)->lpVtbl -> get_ImagePath(This,pImagePath) )
    ( (This)->lpVtbl -> get_ImageParams(This,pImageParams) )
    ( (This)->lpVtbl -> get_InstallRootFolder(This,pInstallRootFolder) )
    ( (This)->lpVtbl -> get_DataRootFolder(This,pDataRootFolder) )
    ( (This)->lpVtbl -> get_IsSingleInstanceHost(This,pIsSingleInstanceHost) )
    ( (This)->lpVtbl -> get_IsInteropEnabled(This,pIsInteropEnabled) )
    ( (This)->lpVtbl -> get_ApplicationState(This,pApplicationState) )
    ( (This)->lpVtbl -> get_InstallType(This,pInstallType) )
    ( (This)->lpVtbl -> get_Version(This,pTargetMajorVersion,pTargetMinorVersion) )
    ( (This)->lpVtbl -> get_BitsPerPixel(This,pBitsPerPixel) )
    ( (This)->lpVtbl -> get_SuppressesDehydration(This,pSuppressesDehydration) )
    ( (This)->lpVtbl -> get_BackgroundExecutionAbilities(This,pBackgroundExecutionAbilities) )
    ( (This)->lpVtbl -> get_IsOptedForExtendedMem(This,pIsOptedIn) )
EXTERN_C const IID IID_IPMTaskInfoEnumerator;
    typedef struct IPMTaskInfoEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMTaskInfoEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMTaskInfoEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMTaskInfoEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *get_Next )(
            __RPC__in IPMTaskInfoEnumerator * This,
                        __RPC__deref_out_opt IPMTaskInfo **ppTaskInfo);
        END_INTERFACE
    } IPMTaskInfoEnumeratorVtbl;
    interface IPMTaskInfoEnumerator
    {
        CONST_VTBL struct IPMTaskInfoEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Next(This,ppTaskInfo) )
EXTERN_C const IID IID_IPMExtensionInfo;
    typedef struct IPMExtensionInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMExtensionInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMExtensionInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMExtensionInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_SupplierPID )(
            __RPC__in IPMExtensionInfo * This,
                        __RPC__out PRODUCTID *pSupplierPID);
        HRESULT ( STDMETHODCALLTYPE *get_SupplierTaskID )(
            __RPC__in IPMExtensionInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pSupplierTID);
        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IPMExtensionInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pTitle);
        HRESULT ( STDMETHODCALLTYPE *get_IconPath )(
            __RPC__in IPMExtensionInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pIconPath);
        HRESULT ( STDMETHODCALLTYPE *get_ExtraFile )(
            __RPC__in IPMExtensionInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pFilePath);
        HRESULT ( STDMETHODCALLTYPE *get_InvocationInfo )(
            __RPC__in IPMExtensionInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pImageUrn,
                                    __RPC__deref_inout_opt_string BSTR *pParameters);
        END_INTERFACE
    } IPMExtensionInfoVtbl;
    interface IPMExtensionInfo
    {
        CONST_VTBL struct IPMExtensionInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_SupplierPID(This,pSupplierPID) )
    ( (This)->lpVtbl -> get_SupplierTaskID(This,pSupplierTID) )
    ( (This)->lpVtbl -> get_Title(This,pTitle) )
    ( (This)->lpVtbl -> get_IconPath(This,pIconPath) )
    ( (This)->lpVtbl -> get_ExtraFile(This,pFilePath) )
    ( (This)->lpVtbl -> get_InvocationInfo(This,pImageUrn,pParameters) )
EXTERN_C const IID IID_IPMExtensionFileExtensionInfo;
    typedef struct IPMExtensionFileExtensionInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMExtensionFileExtensionInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMExtensionFileExtensionInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMExtensionFileExtensionInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IPMExtensionFileExtensionInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pName);
        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IPMExtensionFileExtensionInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pDisplayName);
        HRESULT ( STDMETHODCALLTYPE *get_Logo )(
            __RPC__in IPMExtensionFileExtensionInfo * This,
                       PM_LOGO_SIZE LogoSize,
                                    __RPC__deref_inout_opt_string BSTR *pLogo);
        HRESULT ( STDMETHODCALLTYPE *get_ContentType )(
            __RPC__in IPMExtensionFileExtensionInfo * This,
                                    __RPC__in_string BSTR FileType,
                                    __RPC__deref_inout_opt_string BSTR *pContentType);
        HRESULT ( STDMETHODCALLTYPE *get_FileType )(
            __RPC__in IPMExtensionFileExtensionInfo * This,
                               __RPC__in_string BSTR ContentType,
                                    __RPC__deref_inout_opt_string BSTR *pFileType);
        HRESULT ( STDMETHODCALLTYPE *get_InvocationInfo )(
            __RPC__in IPMExtensionFileExtensionInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pImageUrn,
                                    __RPC__deref_inout_opt_string BSTR *pParameters);
        HRESULT ( STDMETHODCALLTYPE *get_AllFileTypes )(
            __RPC__in IPMExtensionFileExtensionInfo * This,
                        __RPC__out DWORD *pcbTypes,
                                          __RPC__deref_out_ecount_full_opt(*pcbTypes) BSTR **ppTypes);
        END_INTERFACE
    } IPMExtensionFileExtensionInfoVtbl;
    interface IPMExtensionFileExtensionInfo
    {
        CONST_VTBL struct IPMExtensionFileExtensionInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Name(This,pName) )
    ( (This)->lpVtbl -> get_DisplayName(This,pDisplayName) )
    ( (This)->lpVtbl -> get_Logo(This,LogoSize,pLogo) )
    ( (This)->lpVtbl -> get_ContentType(This,FileType,pContentType) )
    ( (This)->lpVtbl -> get_FileType(This,ContentType,pFileType) )
    ( (This)->lpVtbl -> get_InvocationInfo(This,pImageUrn,pParameters) )
    ( (This)->lpVtbl -> get_AllFileTypes(This,pcbTypes,ppTypes) )
EXTERN_C const IID IID_IPMExtensionProtocolInfo;
    typedef struct IPMExtensionProtocolInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMExtensionProtocolInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMExtensionProtocolInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMExtensionProtocolInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_Protocol )(
            __RPC__in IPMExtensionProtocolInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pProtocol);
        HRESULT ( STDMETHODCALLTYPE *get_InvocationInfo )(
            __RPC__in IPMExtensionProtocolInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pImageUrn,
                                    __RPC__deref_inout_opt_string BSTR *pParameters);
        END_INTERFACE
    } IPMExtensionProtocolInfoVtbl;
    interface IPMExtensionProtocolInfo
    {
        CONST_VTBL struct IPMExtensionProtocolInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Protocol(This,pProtocol) )
    ( (This)->lpVtbl -> get_InvocationInfo(This,pImageUrn,pParameters) )
EXTERN_C const IID IID_IPMExtensionShareTargetInfo;
    typedef struct IPMExtensionShareTargetInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMExtensionShareTargetInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMExtensionShareTargetInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMExtensionShareTargetInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_AllFileTypes )(
            __RPC__in IPMExtensionShareTargetInfo * This,
                        __RPC__out DWORD *pcTypes,
                                          __RPC__deref_out_ecount_full_opt(*pcTypes) BSTR **ppTypes);
        HRESULT ( STDMETHODCALLTYPE *get_AllDataFormats )(
            __RPC__in IPMExtensionShareTargetInfo * This,
                        __RPC__out DWORD *pcDataFormats,
                                          __RPC__deref_out_ecount_full_opt(*pcDataFormats) BSTR **ppDataFormats);
        HRESULT ( STDMETHODCALLTYPE *get_SupportsAllFileTypes )(
            __RPC__in IPMExtensionShareTargetInfo * This,
                        __RPC__out BOOL *pSupportsAllTypes);
        END_INTERFACE
    } IPMExtensionShareTargetInfoVtbl;
    interface IPMExtensionShareTargetInfo
    {
        CONST_VTBL struct IPMExtensionShareTargetInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_AllFileTypes(This,pcTypes,ppTypes) )
    ( (This)->lpVtbl -> get_AllDataFormats(This,pcDataFormats,ppDataFormats) )
    ( (This)->lpVtbl -> get_SupportsAllFileTypes(This,pSupportsAllTypes) )
EXTERN_C const IID IID_IPMExtensionContractInfo;
    typedef struct IPMExtensionContractInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMExtensionContractInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMExtensionContractInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMExtensionContractInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_InvocationInfo )(
            __RPC__in IPMExtensionContractInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pAUMID,
                                    __RPC__deref_inout_opt_string BSTR *pArgs);
        END_INTERFACE
    } IPMExtensionContractInfoVtbl;
    interface IPMExtensionContractInfo
    {
        CONST_VTBL struct IPMExtensionContractInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_InvocationInfo(This,pAUMID,pArgs) )
EXTERN_C const IID IID_IPMExtensionFileOpenPickerInfo;
    typedef struct IPMExtensionFileOpenPickerInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMExtensionFileOpenPickerInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMExtensionFileOpenPickerInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMExtensionFileOpenPickerInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_AllFileTypes )(
            __RPC__in IPMExtensionFileOpenPickerInfo * This,
                        __RPC__out DWORD *pcTypes,
                                          __RPC__deref_out_ecount_full_opt(*pcTypes) BSTR **ppTypes);
        HRESULT ( STDMETHODCALLTYPE *get_SupportsAllFileTypes )(
            __RPC__in IPMExtensionFileOpenPickerInfo * This,
                        __RPC__out BOOL *pSupportsAllTypes);
        END_INTERFACE
    } IPMExtensionFileOpenPickerInfoVtbl;
    interface IPMExtensionFileOpenPickerInfo
    {
        CONST_VTBL struct IPMExtensionFileOpenPickerInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_AllFileTypes(This,pcTypes,ppTypes) )
    ( (This)->lpVtbl -> get_SupportsAllFileTypes(This,pSupportsAllTypes) )
EXTERN_C const IID IID_IPMExtensionFileSavePickerInfo;
    typedef struct IPMExtensionFileSavePickerInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMExtensionFileSavePickerInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMExtensionFileSavePickerInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMExtensionFileSavePickerInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_AllFileTypes )(
            __RPC__in IPMExtensionFileSavePickerInfo * This,
                        __RPC__out DWORD *pcTypes,
                                          __RPC__deref_out_ecount_full_opt(*pcTypes) BSTR **ppTypes);
        HRESULT ( STDMETHODCALLTYPE *get_SupportsAllFileTypes )(
            __RPC__in IPMExtensionFileSavePickerInfo * This,
                        __RPC__out BOOL *pSupportsAllTypes);
        END_INTERFACE
    } IPMExtensionFileSavePickerInfoVtbl;
    interface IPMExtensionFileSavePickerInfo
    {
        CONST_VTBL struct IPMExtensionFileSavePickerInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_AllFileTypes(This,pcTypes,ppTypes) )
    ( (This)->lpVtbl -> get_SupportsAllFileTypes(This,pSupportsAllTypes) )
EXTERN_C const IID IID_IPMExtensionCachedFileUpdaterInfo;
    typedef struct IPMExtensionCachedFileUpdaterInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMExtensionCachedFileUpdaterInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMExtensionCachedFileUpdaterInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMExtensionCachedFileUpdaterInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_SupportsUpdates )(
            __RPC__in IPMExtensionCachedFileUpdaterInfo * This,
                        __RPC__out BOOL *pSupportsUpdates);
        END_INTERFACE
    } IPMExtensionCachedFileUpdaterInfoVtbl;
    interface IPMExtensionCachedFileUpdaterInfo
    {
        CONST_VTBL struct IPMExtensionCachedFileUpdaterInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_SupportsUpdates(This,pSupportsUpdates) )
EXTERN_C const IID IID_IPMExtensionInfoEnumerator;
    typedef struct IPMExtensionInfoEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMExtensionInfoEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMExtensionInfoEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMExtensionInfoEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *get_Next )(
            __RPC__in IPMExtensionInfoEnumerator * This,
                        __RPC__deref_out_opt IPMExtensionInfo **ppExtensionInfo);
        END_INTERFACE
    } IPMExtensionInfoEnumeratorVtbl;
    interface IPMExtensionInfoEnumerator
    {
        CONST_VTBL struct IPMExtensionInfoEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Next(This,ppExtensionInfo) )
EXTERN_C const IID IID_IPMBackgroundServiceAgentInfo;
    typedef struct IPMBackgroundServiceAgentInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMBackgroundServiceAgentInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMBackgroundServiceAgentInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMBackgroundServiceAgentInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_ProductID )(
            __RPC__in IPMBackgroundServiceAgentInfo * This,
                        __RPC__out PRODUCTID *pProductID);
        HRESULT ( STDMETHODCALLTYPE *get_TaskID )(
            __RPC__in IPMBackgroundServiceAgentInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pTaskID);
        HRESULT ( STDMETHODCALLTYPE *get_BSAID )(
            __RPC__in IPMBackgroundServiceAgentInfo * This,
                        __RPC__out DWORD *pBSAID);
        HRESULT ( STDMETHODCALLTYPE *get_BGSpecifier )(
            __RPC__in IPMBackgroundServiceAgentInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pBGSpecifier);
        HRESULT ( STDMETHODCALLTYPE *get_BGName )(
            __RPC__in IPMBackgroundServiceAgentInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pBGName);
        HRESULT ( STDMETHODCALLTYPE *get_BGSource )(
            __RPC__in IPMBackgroundServiceAgentInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pBGSource);
        HRESULT ( STDMETHODCALLTYPE *get_BGType )(
            __RPC__in IPMBackgroundServiceAgentInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pBGType);
        HRESULT ( STDMETHODCALLTYPE *get_IsPeriodic )(
            __RPC__in IPMBackgroundServiceAgentInfo * This,
                        __RPC__out BOOL *pIsPeriodic);
        HRESULT ( STDMETHODCALLTYPE *get_IsScheduled )(
            __RPC__in IPMBackgroundServiceAgentInfo * This,
                        __RPC__out BOOL *pIsScheduled);
        HRESULT ( STDMETHODCALLTYPE *get_IsScheduleAllowed )(
            __RPC__in IPMBackgroundServiceAgentInfo * This,
                        __RPC__out BOOL *pIsScheduleAllowed);
        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IPMBackgroundServiceAgentInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pDescription);
        HRESULT ( STDMETHODCALLTYPE *get_IsLaunchOnBoot )(
            __RPC__in IPMBackgroundServiceAgentInfo * This,
                        __RPC__out BOOL *pLaunchOnBoot);
        HRESULT ( STDMETHODCALLTYPE *set_IsScheduled )(
            __RPC__in IPMBackgroundServiceAgentInfo * This,
                       BOOL IsScheduled);
        HRESULT ( STDMETHODCALLTYPE *set_IsScheduleAllowed )(
            __RPC__in IPMBackgroundServiceAgentInfo * This,
                       BOOL IsScheduleAllowed);
        END_INTERFACE
    } IPMBackgroundServiceAgentInfoVtbl;
    interface IPMBackgroundServiceAgentInfo
    {
        CONST_VTBL struct IPMBackgroundServiceAgentInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ProductID(This,pProductID) )
    ( (This)->lpVtbl -> get_TaskID(This,pTaskID) )
    ( (This)->lpVtbl -> get_BSAID(This,pBSAID) )
    ( (This)->lpVtbl -> get_BGSpecifier(This,pBGSpecifier) )
    ( (This)->lpVtbl -> get_BGName(This,pBGName) )
    ( (This)->lpVtbl -> get_BGSource(This,pBGSource) )
    ( (This)->lpVtbl -> get_BGType(This,pBGType) )
    ( (This)->lpVtbl -> get_IsPeriodic(This,pIsPeriodic) )
    ( (This)->lpVtbl -> get_IsScheduled(This,pIsScheduled) )
    ( (This)->lpVtbl -> get_IsScheduleAllowed(This,pIsScheduleAllowed) )
    ( (This)->lpVtbl -> get_Description(This,pDescription) )
    ( (This)->lpVtbl -> get_IsLaunchOnBoot(This,pLaunchOnBoot) )
    ( (This)->lpVtbl -> set_IsScheduled(This,IsScheduled) )
    ( (This)->lpVtbl -> set_IsScheduleAllowed(This,IsScheduleAllowed) )
EXTERN_C const IID IID_IPMBackgroundWorkerInfo;
    typedef struct IPMBackgroundWorkerInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMBackgroundWorkerInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMBackgroundWorkerInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMBackgroundWorkerInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_ProductID )(
            __RPC__in IPMBackgroundWorkerInfo * This,
                        __RPC__out PRODUCTID *pProductID);
        HRESULT ( STDMETHODCALLTYPE *get_TaskID )(
            __RPC__in IPMBackgroundWorkerInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pTaskID);
        HRESULT ( STDMETHODCALLTYPE *get_BGName )(
            __RPC__in IPMBackgroundWorkerInfo * This,
                                    __RPC__deref_inout_opt_string BSTR *pBGName);
        HRESULT ( STDMETHODCALLTYPE *get_MaxStartupLatency )(
            __RPC__in IPMBackgroundWorkerInfo * This,
                        __RPC__out DWORD *pMaxStartupLatency);
        HRESULT ( STDMETHODCALLTYPE *get_ExpectedRuntime )(
            __RPC__in IPMBackgroundWorkerInfo * This,
                        __RPC__out DWORD *pExpectedRuntime);
        HRESULT ( STDMETHODCALLTYPE *get_IsBootWorker )(
            __RPC__in IPMBackgroundWorkerInfo * This,
                        __RPC__out BOOL *pIsBootWorker);
        END_INTERFACE
    } IPMBackgroundWorkerInfoVtbl;
    interface IPMBackgroundWorkerInfo
    {
        CONST_VTBL struct IPMBackgroundWorkerInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ProductID(This,pProductID) )
    ( (This)->lpVtbl -> get_TaskID(This,pTaskID) )
    ( (This)->lpVtbl -> get_BGName(This,pBGName) )
    ( (This)->lpVtbl -> get_MaxStartupLatency(This,pMaxStartupLatency) )
    ( (This)->lpVtbl -> get_ExpectedRuntime(This,pExpectedRuntime) )
    ( (This)->lpVtbl -> get_IsBootWorker(This,pIsBootWorker) )
EXTERN_C const IID IID_IPMBackgroundServiceAgentInfoEnumerator;
    typedef struct IPMBackgroundServiceAgentInfoEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMBackgroundServiceAgentInfoEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMBackgroundServiceAgentInfoEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMBackgroundServiceAgentInfoEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *get_Next )(
            __RPC__in IPMBackgroundServiceAgentInfoEnumerator * This,
                        __RPC__deref_out_opt IPMBackgroundServiceAgentInfo **ppBSAInfo);
        END_INTERFACE
    } IPMBackgroundServiceAgentInfoEnumeratorVtbl;
    interface IPMBackgroundServiceAgentInfoEnumerator
    {
        CONST_VTBL struct IPMBackgroundServiceAgentInfoEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Next(This,ppBSAInfo) )
EXTERN_C const IID IID_IPMBackgroundWorkerInfoEnumerator;
    typedef struct IPMBackgroundWorkerInfoEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPMBackgroundWorkerInfoEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPMBackgroundWorkerInfoEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPMBackgroundWorkerInfoEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *get_Next )(
            __RPC__in IPMBackgroundWorkerInfoEnumerator * This,
                        __RPC__deref_out_opt IPMBackgroundWorkerInfo **ppBWInfo);
        END_INTERFACE
    } IPMBackgroundWorkerInfoEnumeratorVtbl;
    interface IPMBackgroundWorkerInfoEnumerator
    {
        CONST_VTBL struct IPMBackgroundWorkerInfoEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Next(This,ppBWInfo) )
EXTERN_C const IID LIBID_pacmanservicelib;
EXTERN_C const CLSID CLSID_PMSvc;
class DECLSPEC_UUID("B9E511FC-E364-497A-A121-B7B3612CEDCE")
PMSvc;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
}
