#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IUpdateLockdown IUpdateLockdown;
typedef interface IStringCollection IStringCollection;
typedef interface IWebProxy IWebProxy;
typedef interface ISystemInformation ISystemInformation;
typedef interface IWindowsUpdateAgentInfo IWindowsUpdateAgentInfo;
typedef interface IAutomaticUpdatesResults IAutomaticUpdatesResults;
typedef interface IAutomaticUpdatesSettings IAutomaticUpdatesSettings;
typedef interface IAutomaticUpdatesSettings2 IAutomaticUpdatesSettings2;
typedef interface IAutomaticUpdatesSettings3 IAutomaticUpdatesSettings3;
typedef interface IAutomaticUpdates IAutomaticUpdates;
typedef interface IAutomaticUpdates2 IAutomaticUpdates2;
typedef interface IUpdateIdentity IUpdateIdentity;
typedef interface IImageInformation IImageInformation;
typedef interface ICategory ICategory;
typedef interface ICategoryCollection ICategoryCollection;
typedef interface IInstallationBehavior IInstallationBehavior;
typedef interface IUpdateDownloadContent IUpdateDownloadContent;
typedef interface IUpdateDownloadContent2 IUpdateDownloadContent2;
typedef interface IUpdateDownloadContentCollection IUpdateDownloadContentCollection;
typedef interface IUpdate IUpdate;
typedef interface IWindowsDriverUpdate IWindowsDriverUpdate;
typedef interface IUpdate2 IUpdate2;
typedef interface IUpdate3 IUpdate3;
typedef interface IUpdate4 IUpdate4;
typedef interface IUpdate5 IUpdate5;
typedef interface IWindowsDriverUpdate2 IWindowsDriverUpdate2;
typedef interface IWindowsDriverUpdate3 IWindowsDriverUpdate3;
typedef interface IWindowsDriverUpdateEntry IWindowsDriverUpdateEntry;
typedef interface IWindowsDriverUpdateEntryCollection IWindowsDriverUpdateEntryCollection;
typedef interface IWindowsDriverUpdate4 IWindowsDriverUpdate4;
typedef interface IWindowsDriverUpdate5 IWindowsDriverUpdate5;
typedef interface IUpdateCollection IUpdateCollection;
typedef interface IUpdateException IUpdateException;
typedef interface IInvalidProductLicenseException IInvalidProductLicenseException;
typedef interface IUpdateExceptionCollection IUpdateExceptionCollection;
typedef interface ISearchResult ISearchResult;
typedef interface ISearchJob ISearchJob;
typedef interface ISearchCompletedCallbackArgs ISearchCompletedCallbackArgs;
typedef interface ISearchCompletedCallback ISearchCompletedCallback;
typedef interface IUpdateHistoryEntry IUpdateHistoryEntry;
typedef interface IUpdateHistoryEntry2 IUpdateHistoryEntry2;
typedef interface IUpdateHistoryEntryCollection IUpdateHistoryEntryCollection;
typedef interface IUpdateSearcher IUpdateSearcher;
typedef interface IUpdateSearcher2 IUpdateSearcher2;
typedef interface IUpdateSearcher3 IUpdateSearcher3;
typedef interface IUpdateDownloadResult IUpdateDownloadResult;
typedef interface IDownloadResult IDownloadResult;
typedef interface IDownloadProgress IDownloadProgress;
typedef interface IDownloadJob IDownloadJob;
typedef interface IDownloadCompletedCallbackArgs IDownloadCompletedCallbackArgs;
typedef interface IDownloadCompletedCallback IDownloadCompletedCallback;
typedef interface IDownloadProgressChangedCallbackArgs IDownloadProgressChangedCallbackArgs;
typedef interface IDownloadProgressChangedCallback IDownloadProgressChangedCallback;
typedef interface IUpdateDownloader IUpdateDownloader;
typedef interface IUpdateInstallationResult IUpdateInstallationResult;
typedef interface IInstallationResult IInstallationResult;
typedef interface IInstallationProgress IInstallationProgress;
typedef interface IInstallationJob IInstallationJob;
typedef interface IInstallationCompletedCallbackArgs IInstallationCompletedCallbackArgs;
typedef interface IInstallationCompletedCallback IInstallationCompletedCallback;
typedef interface IInstallationProgressChangedCallbackArgs IInstallationProgressChangedCallbackArgs;
typedef interface IInstallationProgressChangedCallback IInstallationProgressChangedCallback;
typedef interface IUpdateInstaller IUpdateInstaller;
typedef interface IUpdateInstaller2 IUpdateInstaller2;
typedef interface IUpdateInstaller3 IUpdateInstaller3;
typedef interface IUpdateInstaller4 IUpdateInstaller4;
typedef interface IUpdateSession IUpdateSession;
typedef interface IUpdateSession2 IUpdateSession2;
typedef interface IUpdateSession3 IUpdateSession3;
typedef interface IUpdateService IUpdateService;
typedef interface IUpdateService2 IUpdateService2;
typedef interface IUpdateServiceCollection IUpdateServiceCollection;
typedef interface IUpdateServiceRegistration IUpdateServiceRegistration;
typedef interface IUpdateServiceManager IUpdateServiceManager;
typedef interface IUpdateServiceManager2 IUpdateServiceManager2;
typedef interface IInstallationAgent IInstallationAgent;
typedef class StringCollection StringCollection;
typedef class UpdateSearcher UpdateSearcher;
typedef class WebProxy WebProxy;
typedef class SystemInformation SystemInformation;
typedef class WindowsUpdateAgentInfo WindowsUpdateAgentInfo;
typedef class AutomaticUpdates AutomaticUpdates;
typedef class UpdateCollection UpdateCollection;
typedef class UpdateDownloader UpdateDownloader;
typedef class UpdateInstaller UpdateInstaller;
typedef class UpdateSession UpdateSession;
typedef class UpdateServiceManager UpdateServiceManager;
typedef class InstallationAgent InstallationAgent;
#include "oaidl.h"
#include "wuapicommon.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib, "wuguid.lib")
DEFINE_GUID(LIBID_WUApiLib,0xB596CC9F,0x56E5,0x419E,0xA6,0x22,0xE0,0x1B,0xB4,0x57,0x43,0x1E);
DEFINE_GUID(IID_IUpdateLockdown,0xa976c28d,0x75a1,0x42aa,0x94,0xae,0x8a,0xf8,0xb8,0x72,0x08,0x9a);
DEFINE_GUID(IID_IStringCollection,0xeff90582,0x2ddc,0x480f,0xa0,0x6d,0x60,0xf3,0xfb,0xc3,0x62,0xc3);
DEFINE_GUID(IID_IWebProxy,0x174c81fe,0xaecd,0x4dae,0xb8,0xa0,0x2c,0x63,0x18,0xdd,0x86,0xa8);
DEFINE_GUID(IID_ISystemInformation,0xade87bf7,0x7b56,0x4275,0x8f,0xab,0xb9,0xb0,0xe5,0x91,0x84,0x4b);
DEFINE_GUID(IID_IWindowsUpdateAgentInfo,0x85713FA1,0x7796,0x4FA2,0xBE,0x3B,0xE2,0xD6,0x12,0x4D,0xD3,0x73);
DEFINE_GUID(IID_IAutomaticUpdatesResults,0xe7a4d634,0x7942,0x4DD9,0xA1,0x11,0x82,0x22,0x8b,0xa3,0x39,0x1);
DEFINE_GUID(IID_IAutomaticUpdatesSettings,0x2ee48f22,0xaf3c,0x405f,0x89,0x70,0xf7,0x1b,0xe1,0x2e,0xe9,0xa2);
DEFINE_GUID(IID_IAutomaticUpdatesSettings2,0x6abc136a,0xc3ca,0x4384,0x81,0x71,0xcb,0x2b,0x1e,0x59,0xb8,0xdc);
DEFINE_GUID(IID_IAutomaticUpdatesSettings3,0xb587f5c3,0xf57e,0x485f,0xbb,0xf5,0x0d,0x18,0x1c,0x5c,0xd0,0xdc);
DEFINE_GUID(IID_IAutomaticUpdates,0x673425bf,0xc082,0x4c7c,0xbd,0xfd,0x56,0x94,0x64,0xb8,0xe0,0xce);
DEFINE_GUID(IID_IAutomaticUpdates2,0x4A2f5C31,0xCFD9,0x410E,0xB7,0xFB,0x29,0xA6,0x53,0x97,0x3A,0xF);
DEFINE_GUID(IID_IUpdateIdentity,0x46297823,0x9940,0x4c09,0xae,0xd9,0xcd,0x3e,0xa6,0xd0,0x59,0x68);
DEFINE_GUID(IID_IImageInformation,0x7c907864,0x346c,0x4aeb,0x8f,0x3f,0x57,0xda,0x28,0x9f,0x96,0x9f);
DEFINE_GUID(IID_ICategory,0x81ddc1b8,0x9d35,0x47a6,0xb4,0x71,0x5b,0x80,0xf5,0x19,0x22,0x3b);
DEFINE_GUID(IID_ICategoryCollection,0x3a56bfb8,0x576c,0x43f7,0x93,0x35,0xfe,0x48,0x38,0xfd,0x7e,0x37);
DEFINE_GUID(IID_IInstallationBehavior,0xd9a59339,0xe245,0x4dbd,0x96,0x86,0x4d,0x57,0x63,0xe3,0x96,0x24);
DEFINE_GUID(IID_IUpdateDownloadContent,0x54a2cb2d,0x9a0c,0x48b6,0x8a,0x50,0x9a,0xbb,0x69,0xee,0x2d,0x02);
DEFINE_GUID(IID_IUpdateDownloadContent2,0xc97ad11b,0xf257,0x420b,0x9d,0x9f,0x37,0x7f,0x73,0x3f,0x6f,0x68);
DEFINE_GUID(IID_IUpdateDownloadContentCollection,0xbc5513c8,0xb3b8,0x4bf7,0xa4,0xd4,0x36,0x1c,0x0d,0x8c,0x88,0xba);
DEFINE_GUID(IID_IUpdate,0x6a92b07a,0xd821,0x4682,0xb4,0x23,0x5c,0x80,0x50,0x22,0xcc,0x4d);
DEFINE_GUID(IID_IUpdate2,0x144fe9b0,0xd23d,0x4a8b,0x86,0x34,0xfb,0x44,0x57,0x53,0x3b,0x7a);
DEFINE_GUID(IID_IUpdate3,0x112EDA6B,0x95B3,0x476F,0x9D,0x90,0xAE,0xE8,0x2C,0x6B,0x81,0x81);
DEFINE_GUID(IID_IUpdate4,0x27e94b0d,0x5139,0x49a2,0x9a, 0x61, 0x93, 0x52, 0x2d, 0xc5, 0x46, 0x52);
DEFINE_GUID(IID_IUpdate5,0xc1c2f21a,0xd2f4,0x4902,0xb5, 0xc6, 0x8a, 0x08, 0x1c, 0x19, 0xa8, 0x90);
DEFINE_GUID(IID_IWindowsDriverUpdate,0xb383cd1a,0x5ce9,0x4504,0x9f,0x63,0x76,0x4b,0x12,0x36,0xf1,0x91);
DEFINE_GUID(IID_IWindowsDriverUpdate2,0x615c4269,0x7a48,0x43bd,0x96,0xb7,0xbf,0x6c,0xa2,0x7d,0x6c,0x3e);
DEFINE_GUID(IID_IWindowsDriverUpdate3,0x49EBD502,0x4A96,0x41BD,0x9E,0x3E,0x4C,0x50,0x57,0xF4,0x25,0x0C);
DEFINE_GUID(IID_IWindowsDriverUpdate4,0x004C6A2B,0x0C19,0x4c69,0x9F,0x5C,0xA2,0x69,0xB2,0x56,0x0D,0xB9);
DEFINE_GUID(IID_IWindowsDriverUpdate5,0x70CF5C82,0x8642,0x42bb,0x9d,0xbc,0x0c,0xfd,0x26,0x3c,0x6c,0x4f);
DEFINE_GUID(IID_IWindowsDriverUpdateEntryCollection,0x0D521700,0xA372,0x4bef,0x82,0x8B,0x3D,0x00,0xC1,0x0A,0xDE,0xBD);
DEFINE_GUID(IID_IWindowsDriverUpdateEntry,0xED8BFE40,0xA60B,0x42ea,0x96,0x52,0x81,0x7D,0xFC,0xFA,0x23,0xEC);
DEFINE_GUID(IID_IUpdateCollection,0x07f7438c,0x7709,0x4ca5,0xb5,0x18,0x91,0x27,0x92,0x88,0x13,0x4e);
DEFINE_GUID(IID_IUpdateException,0xa376dd5e,0x09d4,0x427f,0xaf,0x7c,0xfe,0xd5,0xb6,0xe1,0xc1,0xd6);
DEFINE_GUID(IID_IInvalidProductLicenseException,0xa37d00f5,0x7bb0,0x4953,0xb4,0x14,0xf9,0xe9,0x83,0x26,0xf2,0xe8);
DEFINE_GUID(IID_IUpdateExceptionCollection,0x503626a3,0x8e14,0x4729,0x93,0x55,0x0f,0xe6,0x64,0xbd,0x23,0x21);
DEFINE_GUID(IID_ISearchResult,0xd40cff62,0xe08c,0x4498,0x94,0x1a,0x01,0xe2,0x5f,0x0f,0xd3,0x3c);
DEFINE_GUID(IID_ISearchJob,0x7366ea16,0x7a1a,0x4ea2,0xb0,0x42,0x97,0x3d,0x3e,0x9c,0xd9,0x9b);
DEFINE_GUID(IID_ISearchCompletedCallbackArgs,0xa700a634,0x2850,0x4c47,0x93,0x8a,0x9e,0x4b,0x6e,0x5a,0xf9,0xa6);
DEFINE_GUID(IID_ISearchCompletedCallback,0x88aee058,0xd4b0,0x4725,0xa2,0xf1,0x81,0x4a,0x67,0xae,0x96,0x4c);
DEFINE_GUID(IID_IUpdateHistoryEntry,0xbe56a644,0xaf0e,0x4e0e,0xa3,0x11,0xc1,0xd8,0xe6,0x95,0xcb,0xff);
DEFINE_GUID(IID_IUpdateHistoryEntry2,0xc2bfb780,0x4539,0x4132,0xab,0x8c,0x0a,0x87,0x72,0x01,0x3a,0xb6);
DEFINE_GUID(IID_IUpdateHistoryEntryCollection,0xa7f04f3c,0xa290,0x435b,0xaa,0xdf,0xa1,0x16,0xc3,0x35,0x7a,0x5c);
DEFINE_GUID(IID_IUpdateSearcher,0x8f45abf1,0xf9ae,0x4b95,0xa9,0x33,0xf0,0xf6,0x6e,0x50,0x56,0xea);
DEFINE_GUID(IID_IUpdateSearcher2,0x4cbdcb2d,0x1589,0x4beb,0xbd,0x1c,0x3e,0x58,0x2f,0xf0,0xad,0xd0);
DEFINE_GUID(IID_IUpdateSearcher3,0x4c6895d,0xeaf2,0x4034,0x97,0xf3,0x31,0x1d,0xe9,0xbe,0x41,0x3a);
DEFINE_GUID(IID_IUpdateDownloadResult,0xbf99af76,0xb575,0x42ad,0x8a,0xa4,0x33,0xcb,0xb5,0x47,0x7a,0xf1);
DEFINE_GUID(IID_IDownloadResult,0xdaa4fdd0,0x4727,0x4dbe,0xa1,0xe7,0x74,0x5d,0xca,0x31,0x71,0x44);
DEFINE_GUID(IID_IDownloadProgress,0xd31a5bac,0xf719,0x4178,0x9d,0xbb,0x5e,0x2c,0xb4,0x7f,0xd1,0x8a);
DEFINE_GUID(IID_IDownloadJob,0xc574de85,0x7358,0x43f6,0xaa,0xe8,0x86,0x97,0xe6,0x2d,0x8b,0xa7);
DEFINE_GUID(IID_IDownloadCompletedCallbackArgs,0xfa565b23,0x498c,0x47a0,0x97,0x9d,0xe7,0xd5,0xb1,0x81,0x33,0x60);
DEFINE_GUID(IID_IDownloadCompletedCallback,0x77254866,0x9f5b,0x4c8e,0xb9,0xe2,0xc7,0x7a,0x85,0x30,0xd6,0x4b);
DEFINE_GUID(IID_IDownloadProgressChangedCallbackArgs,0x324ff2c6,0x4981,0x4b04,0x94,0x12,0x57,0x48,0x17,0x45,0xab,0x24);
DEFINE_GUID(IID_IDownloadProgressChangedCallback,0x8c3f1cdd,0x6173,0x4591,0xae,0xbd,0xa5,0x6a,0x53,0xca,0x77,0xc1);
DEFINE_GUID(IID_IUpdateDownloader,0x68f1c6f9,0x7ecc,0x4666,0xa4,0x64,0x24,0x7f,0xe1,0x24,0x96,0xc3);
DEFINE_GUID(IID_IUpdateInstallationResult,0xd940f0f8,0x3cbb,0x4fd0,0x99,0x3f,0x47,0x1e,0x7f,0x23,0x28,0xad);
DEFINE_GUID(IID_IInstallationResult,0xa43c56d6,0x7451,0x48d4,0xaf,0x96,0xb6,0xcd,0x2d,0x0d,0x9b,0x7a);
DEFINE_GUID(IID_IInstallationProgress,0x345c8244,0x43a3,0x4e32,0xa3,0x68,0x65,0xf0,0x73,0xb7,0x6f,0x36);
DEFINE_GUID(IID_IInstallationJob,0x5c209f0b,0xbad5,0x432a,0x95,0x56,0x46,0x99,0xbe,0xd2,0x63,0x8a);
DEFINE_GUID(IID_IInstallationCompletedCallbackArgs,0x250e2106,0x8efb,0x4705,0x96,0x53,0xef,0x13,0xc5,0x81,0xb6,0xa1);
DEFINE_GUID(IID_IInstallationCompletedCallback,0x45f4f6f3,0xd602,0x4f98,0x9a,0x8a,0x3e,0xfa,0x15,0x2a,0xd2,0xd3);
DEFINE_GUID(IID_IInstallationProgressChangedCallbackArgs,0xe4f14e1e,0x689d,0x4218,0xa0,0xb9,0xbc,0x18,0x9c,0x48,0x4a,0x01);
DEFINE_GUID(IID_IInstallationProgressChangedCallback,0xe01402d5,0xf8da,0x43ba,0xa0,0x12,0x38,0x89,0x4b,0xd0,0x48,0xf1);
DEFINE_GUID(IID_IUpdateInstaller,0x7b929c68,0xccdc,0x4226,0x96,0xb1,0x87,0x24,0x60,0x0b,0x54,0xc2);
DEFINE_GUID(IID_IUpdateInstaller2,0x3442d4fe,0x224d,0x4cee,0x98,0xcf,0x30,0xe0,0xc4,0xd2,0x29,0xe6);
DEFINE_GUID(IID_IUpdateInstaller3,0x16d11c35,0x099a,0x48d0,0x83,0x38,0x5f,0xae,0x64,0x04,0x7f,0x8e);
DEFINE_GUID(IID_IUpdateInstaller4, 0xef8208ea, 0x2304, 0x492d, 0x91, 0x9, 0x23, 0x81, 0x3b, 0x9, 0x58, 0xe1);
DEFINE_GUID(IID_IUpdateSession,0x816858a4,0x260d,0x4260,0x93,0x3a,0x25,0x85,0xf1,0xab,0xc7,0x6b);
DEFINE_GUID(IID_IUpdateSession2,0x91caf7b0,0xeb23,0x49ed,0x99,0x37,0xc5,0x2d,0x81,0x7f,0x46,0xf7);
DEFINE_GUID(IID_IUpdateSession3,0x918efd1e,0xb5d8,0x4c90,0x85,0x40,0xae,0xb9,0xbd,0xc5,0x6f,0x9d);
DEFINE_GUID(IID_IUpdateService,0x76b3b17e,0xaed6,0x4da5,0x85,0xf0,0x83,0x58,0x7f,0x81,0xab,0xe3);
DEFINE_GUID(IID_IUpdateService2,0x1518b460,0x6518,0x4172,0x94,0x0f,0xc7,0x58,0x83,0xb2,0x4c,0xeb);
DEFINE_GUID(IID_IUpdateServiceCollection,0x9b0353aa,0x0e52,0x44ff,0xb8,0xb0,0x1f,0x7f,0xa0,0x43,0x7f,0x88);
DEFINE_GUID(IID_IUpdateServiceRegistration,0xdde02280,0x12b3,0x4e0b,0x93,0x7b,0x67,0x47,0xf6,0xac,0xb2,0x86);
DEFINE_GUID(IID_IUpdateServiceManager,0x23857E3C,0x02BA,0x44A3,0x94,0x23,0xB1,0xC9,0x00,0x80,0x5F,0x37);
DEFINE_GUID(IID_IUpdateServiceManager2,0x0BB8531D,0x7E8D,0x424F,0x98,0x6C,0xA0,0xB8,0xF6,0x0A,0x3E,0x7B);
DEFINE_GUID(IID_IInstallationAgent,0x925CBC18,0xA2EA,0x4648,0xBF,0x1C,0xEC,0x8B,0xAD,0xCF,0xE2,0x0A);
DEFINE_GUID(CLSID_StringCollection,0x72C97D74,0x7C3B,0x40AE,0xB7,0x7D,0xAB,0xDB,0x22,0xEB,0xA6,0xFB);
DEFINE_GUID(CLSID_UpdateSearcher,0xB699E5E8,0x67FF,0x4177,0x88,0xB0,0x36,0x84,0xA3,0x38,0x8B,0xFB);
DEFINE_GUID(CLSID_WebProxy,0x650503cf,0x9108,0x4ddc,0xa2,0xce,0x6c,0x23,0x41,0xe1,0xc5,0x82);
DEFINE_GUID(CLSID_SystemInformation,0xC01B9BA0,0xBEA7,0x41BA,0xB6,0x04,0xD0,0xA3,0x6F,0x46,0x91,0x33);
DEFINE_GUID(CLSID_WindowsUpdateAgentInfo,0xC2E88C2F,0x6F5B,0x4AAA,0x89,0x4B,0x55,0xC8,0x47,0xAD,0x3A,0x2D);
DEFINE_GUID(CLSID_AutomaticUpdates,0xBFE18E9C,0x6D87,0x4450,0xB3,0x7C,0xE0,0x2F,0x0B,0x37,0x38,0x03);
DEFINE_GUID(CLSID_UpdateCollection,0x13639463,0x00DB,0x4646,0x80,0x3D,0x52,0x80,0x26,0x14,0x0D,0x88);
DEFINE_GUID(CLSID_UpdateDownloader,0x5BAF654A,0x5A07,0x4264,0xA2,0x55,0x9F,0xF5,0x4C,0x71,0x51,0xE7);
DEFINE_GUID(CLSID_UpdateInstaller,0xD2E0FE7F,0xD23E,0x48E1,0x93,0xC0,0x6F,0xA8,0xCC,0x34,0x64,0x74);
DEFINE_GUID(CLSID_UpdateSession,0x4CB43D7F,0x7EEE,0x4906,0x86,0x98,0x60,0xDA,0x1C,0x38,0xF2,0xFE);
DEFINE_GUID(CLSID_UpdateServiceManager,0xF8D253D9,0x89A4,0x4DAA,0x87,0xB6,0x11,0x68,0x36,0x9F,0x0B,0x21);
DEFINE_GUID(CLSID_InstallationAgent,0x317E92FC,0x1679,0x46FD,0xA0,0xB5,0xF0,0x89,0x14,0xDD,0x86,0x23);
typedef
enum tagAutomaticUpdatesNotificationLevel
    {
        aunlNotConfigured = 0,
        aunlDisabled = 1,
        aunlNotifyBeforeDownload = 2,
        aunlNotifyBeforeInstallation = 3,
        aunlScheduledInstallation = 4
    } AutomaticUpdatesNotificationLevel;
typedef
enum tagAutomaticUpdatesScheduledInstallationDay
    {
        ausidEveryDay = 0,
        ausidEverySunday = 1,
        ausidEveryMonday = 2,
        ausidEveryTuesday = 3,
        ausidEveryWednesday = 4,
        ausidEveryThursday = 5,
        ausidEveryFriday = 6,
        ausidEverySaturday = 7
    } AutomaticUpdatesScheduledInstallationDay;
typedef
enum tagDownloadPhase
    {
        dphInitializing = 1,
        dphDownloading = 2,
        dphVerifying = 3
    } DownloadPhase;
typedef
enum tagDownloadPriority
    {
        dpLow = 1,
        dpNormal = 2,
        dpHigh = 3,
        dpExtraHigh = 4
    } DownloadPriority;
typedef
enum tagAutoSelectionMode
    {
        asLetWindowsUpdateDecide = 0,
        asAutoSelectIfDownloaded = 1,
        asNeverAutoSelect = 2,
        asAlwaysAutoSelect = 3
    } AutoSelectionMode;
typedef
enum tagAutoDownloadMode
    {
        adLetWindowsUpdateDecide = 0,
        adNeverAutoDownload = 1,
        adAlwaysAutoDownload = 2
    } AutoDownloadMode;
typedef
enum tagInstallationImpact
    {
        iiNormal = 0,
        iiMinor = 1,
        iiRequiresExclusiveHandling = 2
    } InstallationImpact;
typedef
enum tagInstallationRebootBehavior
    {
        irbNeverReboots = 0,
        irbAlwaysRequiresReboot = 1,
        irbCanRequestReboot = 2
    } InstallationRebootBehavior;
typedef
enum tagOperationResultCode
    {
        orcNotStarted = 0,
        orcInProgress = 1,
        orcSucceeded = 2,
        orcSucceededWithErrors = 3,
        orcFailed = 4,
        orcAborted = 5
    } OperationResultCode;
typedef
enum tagUpdateType
    {
        utSoftware = 1,
        utDriver = 2
    } UpdateType;
typedef
enum tagUpdateOperation
    {
        uoInstallation = 1,
        uoUninstallation = 2
    } UpdateOperation;
typedef
enum tagDeploymentAction
    {
        daNone = 0,
        daInstallation = 1,
        daUninstallation = 2,
        daDetection = 3,
        daOptionalInstallation = 4
    } DeploymentAction;
typedef
enum tagUpdateExceptionContext
    {
        uecGeneral = 1,
        uecWindowsDriver = 2,
        uecWindowsInstaller = 3,
        uecSearchIncomplete = 4
    } UpdateExceptionContext;
typedef
enum tagAutomaticUpdatesUserType
    {
        auutCurrentUser = 1,
        auutLocalAdministrator = 2
    } AutomaticUpdatesUserType;
typedef
enum tagAutomaticUpdatesPermissionType
    {
        auptSetNotificationLevel = 1,
        auptDisableAutomaticUpdates = 2,
        auptSetIncludeRecommendedUpdates = 3,
        auptSetFeaturedUpdatesEnabled = 4,
        auptSetNonAdministratorsElevated = 5
    } AutomaticUpdatesPermissionType;
typedef
enum tagUpdateServiceRegistrationState
    {
        usrsNotRegistered = 1,
        usrsRegistrationPending = 2,
        usrsRegistered = 3
    } UpdateServiceRegistrationState;
typedef
enum tagSearchScope
    {
        searchScopeDefault = 0,
        searchScopeMachineOnly = 1,
        searchScopeCurrentUserOnly = 2,
        searchScopeMachineAndCurrentUser = 3,
        searchScopeMachineAndAllUsers = 4,
        searchScopeAllUsers = 5
    } SearchScope;
extern RPC_IF_HANDLE __MIDL_itf_wuapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wuapi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IUpdateLockdown;
    typedef struct IUpdateLockdownVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateLockdown * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateLockdown * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateLockdown * This);
                               HRESULT ( STDMETHODCALLTYPE *LockDown )(
            __RPC__in IUpdateLockdown * This,
                       LONG flags);
        END_INTERFACE
    } IUpdateLockdownVtbl;
    interface IUpdateLockdown
    {
        CONST_VTBL struct IUpdateLockdownVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LockDown(This,flags) )
EXTERN_C const IID IID_IStringCollection;
    typedef struct IStringCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStringCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStringCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStringCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IStringCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IStringCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IStringCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IStringCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IStringCollection * This,
                       LONG index,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_Item )(
            __RPC__in IStringCollection * This,
                       LONG index,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IStringCollection * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IStringCollection * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )(
            __RPC__in IStringCollection * This,
                                __RPC__out VARIANT_BOOL *retval);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IStringCollection * This,
                       __RPC__in BSTR value,
                                __RPC__out LONG *retval);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IStringCollection * This);
                               HRESULT ( STDMETHODCALLTYPE *Copy )(
            __RPC__in IStringCollection * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *Insert )(
            __RPC__in IStringCollection * This,
                       LONG index,
                       __RPC__in BSTR value);
                               HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IStringCollection * This,
                       LONG index);
        END_INTERFACE
    } IStringCollectionVtbl;
    interface IStringCollection
    {
        CONST_VTBL struct IStringCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,index,retval) )
    ( (This)->lpVtbl -> put_Item(This,index,value) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Count(This,retval) )
    ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
    ( (This)->lpVtbl -> Add(This,value,retval) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> Copy(This,retval) )
    ( (This)->lpVtbl -> Insert(This,index,value) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
EXTERN_C const IID IID_IWebProxy;
    typedef struct IWebProxyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWebProxy * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWebProxy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWebProxy * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWebProxy * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWebProxy * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWebProxy * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWebProxy * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Address )(
            __RPC__in IWebProxy * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_Address )(
            __RPC__in IWebProxy * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_BypassList )(
            __RPC__in IWebProxy * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_BypassList )(
            __RPC__in IWebProxy * This,
                       __RPC__in_opt IStringCollection *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_BypassProxyOnLocal )(
            __RPC__in IWebProxy * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_BypassProxyOnLocal )(
            __RPC__in IWebProxy * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )(
            __RPC__in IWebProxy * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserName )(
            __RPC__in IWebProxy * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_UserName )(
            __RPC__in IWebProxy * This,
                       __RPC__in BSTR value);
                               HRESULT ( STDMETHODCALLTYPE *SetPassword )(
            __RPC__in IWebProxy * This,
                       __RPC__in BSTR value);
                               HRESULT ( STDMETHODCALLTYPE *PromptForCredentials )(
            __RPC__in IWebProxy * This,
                               __RPC__in_opt IUnknown *parentWindow,
                       __RPC__in BSTR title);
                                           HRESULT ( STDMETHODCALLTYPE *PromptForCredentialsFromHwnd )(
            __RPC__in IWebProxy * This,
                               __RPC__in_opt HWND parentWindow,
                       __RPC__in BSTR title);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoDetect )(
            __RPC__in IWebProxy * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_AutoDetect )(
            __RPC__in IWebProxy * This,
                       VARIANT_BOOL value);
        END_INTERFACE
    } IWebProxyVtbl;
    interface IWebProxy
    {
        CONST_VTBL struct IWebProxyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Address(This,retval) )
    ( (This)->lpVtbl -> put_Address(This,value) )
    ( (This)->lpVtbl -> get_BypassList(This,retval) )
    ( (This)->lpVtbl -> put_BypassList(This,value) )
    ( (This)->lpVtbl -> get_BypassProxyOnLocal(This,retval) )
    ( (This)->lpVtbl -> put_BypassProxyOnLocal(This,value) )
    ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
    ( (This)->lpVtbl -> get_UserName(This,retval) )
    ( (This)->lpVtbl -> put_UserName(This,value) )
    ( (This)->lpVtbl -> SetPassword(This,value) )
    ( (This)->lpVtbl -> PromptForCredentials(This,parentWindow,title) )
    ( (This)->lpVtbl -> PromptForCredentialsFromHwnd(This,parentWindow,title) )
    ( (This)->lpVtbl -> get_AutoDetect(This,retval) )
    ( (This)->lpVtbl -> put_AutoDetect(This,value) )
EXTERN_C const IID IID_ISystemInformation;
    typedef struct ISystemInformationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISystemInformation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISystemInformation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISystemInformation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISystemInformation * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISystemInformation * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISystemInformation * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISystemInformation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_OemHardwareSupportLink )(
            __RPC__in ISystemInformation * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )(
            __RPC__in ISystemInformation * This,
                                __RPC__out VARIANT_BOOL *retval);
        END_INTERFACE
    } ISystemInformationVtbl;
    interface ISystemInformation
    {
        CONST_VTBL struct ISystemInformationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_OemHardwareSupportLink(This,retval) )
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
EXTERN_C const IID IID_IWindowsUpdateAgentInfo;
    typedef struct IWindowsUpdateAgentInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWindowsUpdateAgentInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWindowsUpdateAgentInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWindowsUpdateAgentInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWindowsUpdateAgentInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWindowsUpdateAgentInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWindowsUpdateAgentInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWindowsUpdateAgentInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IWindowsUpdateAgentInfo * This,
                       VARIANT varInfoIdentifier,
                                __RPC__out VARIANT *retval);
        END_INTERFACE
    } IWindowsUpdateAgentInfoVtbl;
    interface IWindowsUpdateAgentInfo
    {
        CONST_VTBL struct IWindowsUpdateAgentInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetInfo(This,varInfoIdentifier,retval) )
EXTERN_C const IID IID_IAutomaticUpdatesResults;
    typedef struct IAutomaticUpdatesResultsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAutomaticUpdatesResults * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAutomaticUpdatesResults * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAutomaticUpdatesResults * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAutomaticUpdatesResults * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAutomaticUpdatesResults * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAutomaticUpdatesResults * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAutomaticUpdatesResults * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastSearchSuccessDate )(
            __RPC__in IAutomaticUpdatesResults * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastInstallationSuccessDate )(
            __RPC__in IAutomaticUpdatesResults * This,
                                __RPC__out VARIANT *retval);
        END_INTERFACE
    } IAutomaticUpdatesResultsVtbl;
    interface IAutomaticUpdatesResults
    {
        CONST_VTBL struct IAutomaticUpdatesResultsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_LastSearchSuccessDate(This,retval) )
    ( (This)->lpVtbl -> get_LastInstallationSuccessDate(This,retval) )
EXTERN_C const IID IID_IAutomaticUpdatesSettings;
    typedef struct IAutomaticUpdatesSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAutomaticUpdatesSettings * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAutomaticUpdatesSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAutomaticUpdatesSettings * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAutomaticUpdatesSettings * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAutomaticUpdatesSettings * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAutomaticUpdatesSettings * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAutomaticUpdatesSettings * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_NotificationLevel )(
            __RPC__in IAutomaticUpdatesSettings * This,
                                __RPC__out AutomaticUpdatesNotificationLevel *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_NotificationLevel )(
            __RPC__in IAutomaticUpdatesSettings * This,
                       AutomaticUpdatesNotificationLevel value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )(
            __RPC__in IAutomaticUpdatesSettings * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Required )(
            __RPC__in IAutomaticUpdatesSettings * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScheduledInstallationDay )(
            __RPC__in IAutomaticUpdatesSettings * This,
                                __RPC__out AutomaticUpdatesScheduledInstallationDay *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ScheduledInstallationDay )(
            __RPC__in IAutomaticUpdatesSettings * This,
                       AutomaticUpdatesScheduledInstallationDay value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScheduledInstallationTime )(
            __RPC__in IAutomaticUpdatesSettings * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ScheduledInstallationTime )(
            __RPC__in IAutomaticUpdatesSettings * This,
                       LONG value);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IAutomaticUpdatesSettings * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IAutomaticUpdatesSettings * This);
        END_INTERFACE
    } IAutomaticUpdatesSettingsVtbl;
    interface IAutomaticUpdatesSettings
    {
        CONST_VTBL struct IAutomaticUpdatesSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_NotificationLevel(This,retval) )
    ( (This)->lpVtbl -> put_NotificationLevel(This,value) )
    ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
    ( (This)->lpVtbl -> get_Required(This,retval) )
    ( (This)->lpVtbl -> get_ScheduledInstallationDay(This,retval) )
    ( (This)->lpVtbl -> put_ScheduledInstallationDay(This,value) )
    ( (This)->lpVtbl -> get_ScheduledInstallationTime(This,retval) )
    ( (This)->lpVtbl -> put_ScheduledInstallationTime(This,value) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Save(This) )
EXTERN_C const IID IID_IAutomaticUpdatesSettings2;
    typedef struct IAutomaticUpdatesSettings2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAutomaticUpdatesSettings2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAutomaticUpdatesSettings2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAutomaticUpdatesSettings2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAutomaticUpdatesSettings2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAutomaticUpdatesSettings2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAutomaticUpdatesSettings2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAutomaticUpdatesSettings2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_NotificationLevel )(
            __RPC__in IAutomaticUpdatesSettings2 * This,
                                __RPC__out AutomaticUpdatesNotificationLevel *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_NotificationLevel )(
            __RPC__in IAutomaticUpdatesSettings2 * This,
                       AutomaticUpdatesNotificationLevel value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )(
            __RPC__in IAutomaticUpdatesSettings2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Required )(
            __RPC__in IAutomaticUpdatesSettings2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScheduledInstallationDay )(
            __RPC__in IAutomaticUpdatesSettings2 * This,
                                __RPC__out AutomaticUpdatesScheduledInstallationDay *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ScheduledInstallationDay )(
            __RPC__in IAutomaticUpdatesSettings2 * This,
                       AutomaticUpdatesScheduledInstallationDay value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScheduledInstallationTime )(
            __RPC__in IAutomaticUpdatesSettings2 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ScheduledInstallationTime )(
            __RPC__in IAutomaticUpdatesSettings2 * This,
                       LONG value);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IAutomaticUpdatesSettings2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IAutomaticUpdatesSettings2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_IncludeRecommendedUpdates )(
            __RPC__in IAutomaticUpdatesSettings2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IncludeRecommendedUpdates )(
            __RPC__in IAutomaticUpdatesSettings2 * This,
                       VARIANT_BOOL value);
                               HRESULT ( STDMETHODCALLTYPE *CheckPermission )(
            __RPC__in IAutomaticUpdatesSettings2 * This,
                       AutomaticUpdatesUserType userType,
                       AutomaticUpdatesPermissionType permissionType,
                                __RPC__out VARIANT_BOOL *userHasPermission);
        END_INTERFACE
    } IAutomaticUpdatesSettings2Vtbl;
    interface IAutomaticUpdatesSettings2
    {
        CONST_VTBL struct IAutomaticUpdatesSettings2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_NotificationLevel(This,retval) )
    ( (This)->lpVtbl -> put_NotificationLevel(This,value) )
    ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
    ( (This)->lpVtbl -> get_Required(This,retval) )
    ( (This)->lpVtbl -> get_ScheduledInstallationDay(This,retval) )
    ( (This)->lpVtbl -> put_ScheduledInstallationDay(This,value) )
    ( (This)->lpVtbl -> get_ScheduledInstallationTime(This,retval) )
    ( (This)->lpVtbl -> put_ScheduledInstallationTime(This,value) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> get_IncludeRecommendedUpdates(This,retval) )
    ( (This)->lpVtbl -> put_IncludeRecommendedUpdates(This,value) )
    ( (This)->lpVtbl -> CheckPermission(This,userType,permissionType,userHasPermission) )
EXTERN_C const IID IID_IAutomaticUpdatesSettings3;
    typedef struct IAutomaticUpdatesSettings3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAutomaticUpdatesSettings3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAutomaticUpdatesSettings3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAutomaticUpdatesSettings3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_NotificationLevel )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                                __RPC__out AutomaticUpdatesNotificationLevel *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_NotificationLevel )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                       AutomaticUpdatesNotificationLevel value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Required )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScheduledInstallationDay )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                                __RPC__out AutomaticUpdatesScheduledInstallationDay *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ScheduledInstallationDay )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                       AutomaticUpdatesScheduledInstallationDay value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScheduledInstallationTime )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ScheduledInstallationTime )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                       LONG value);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IAutomaticUpdatesSettings3 * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IAutomaticUpdatesSettings3 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_IncludeRecommendedUpdates )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IncludeRecommendedUpdates )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                       VARIANT_BOOL value);
                               HRESULT ( STDMETHODCALLTYPE *CheckPermission )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                       AutomaticUpdatesUserType userType,
                       AutomaticUpdatesPermissionType permissionType,
                                __RPC__out VARIANT_BOOL *userHasPermission);
                                        HRESULT ( STDMETHODCALLTYPE *get_NonAdministratorsElevated )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_NonAdministratorsElevated )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_FeaturedUpdatesEnabled )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_FeaturedUpdatesEnabled )(
            __RPC__in IAutomaticUpdatesSettings3 * This,
                       VARIANT_BOOL value);
        END_INTERFACE
    } IAutomaticUpdatesSettings3Vtbl;
    interface IAutomaticUpdatesSettings3
    {
        CONST_VTBL struct IAutomaticUpdatesSettings3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_NotificationLevel(This,retval) )
    ( (This)->lpVtbl -> put_NotificationLevel(This,value) )
    ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
    ( (This)->lpVtbl -> get_Required(This,retval) )
    ( (This)->lpVtbl -> get_ScheduledInstallationDay(This,retval) )
    ( (This)->lpVtbl -> put_ScheduledInstallationDay(This,value) )
    ( (This)->lpVtbl -> get_ScheduledInstallationTime(This,retval) )
    ( (This)->lpVtbl -> put_ScheduledInstallationTime(This,value) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> get_IncludeRecommendedUpdates(This,retval) )
    ( (This)->lpVtbl -> put_IncludeRecommendedUpdates(This,value) )
    ( (This)->lpVtbl -> CheckPermission(This,userType,permissionType,userHasPermission) )
    ( (This)->lpVtbl -> get_NonAdministratorsElevated(This,retval) )
    ( (This)->lpVtbl -> put_NonAdministratorsElevated(This,value) )
    ( (This)->lpVtbl -> get_FeaturedUpdatesEnabled(This,retval) )
    ( (This)->lpVtbl -> put_FeaturedUpdatesEnabled(This,value) )
EXTERN_C const IID IID_IAutomaticUpdates;
    typedef struct IAutomaticUpdatesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAutomaticUpdates * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAutomaticUpdates * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAutomaticUpdates * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAutomaticUpdates * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAutomaticUpdates * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAutomaticUpdates * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAutomaticUpdates * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *DetectNow )(
            __RPC__in IAutomaticUpdates * This);
                               HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IAutomaticUpdates * This);
                               HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IAutomaticUpdates * This);
                               HRESULT ( STDMETHODCALLTYPE *ShowSettingsDialog )(
            __RPC__in IAutomaticUpdates * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Settings )(
            __RPC__in IAutomaticUpdates * This,
                                __RPC__deref_out_opt IAutomaticUpdatesSettings **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServiceEnabled )(
            __RPC__in IAutomaticUpdates * This,
                                __RPC__out VARIANT_BOOL *retval);
                               HRESULT ( STDMETHODCALLTYPE *EnableService )(
            __RPC__in IAutomaticUpdates * This);
        END_INTERFACE
    } IAutomaticUpdatesVtbl;
    interface IAutomaticUpdates
    {
        CONST_VTBL struct IAutomaticUpdatesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> DetectNow(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> ShowSettingsDialog(This) )
    ( (This)->lpVtbl -> get_Settings(This,retval) )
    ( (This)->lpVtbl -> get_ServiceEnabled(This,retval) )
    ( (This)->lpVtbl -> EnableService(This) )
EXTERN_C const IID IID_IAutomaticUpdates2;
    typedef struct IAutomaticUpdates2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAutomaticUpdates2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAutomaticUpdates2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAutomaticUpdates2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAutomaticUpdates2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAutomaticUpdates2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAutomaticUpdates2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAutomaticUpdates2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *DetectNow )(
            __RPC__in IAutomaticUpdates2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IAutomaticUpdates2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IAutomaticUpdates2 * This);
                               HRESULT ( STDMETHODCALLTYPE *ShowSettingsDialog )(
            __RPC__in IAutomaticUpdates2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Settings )(
            __RPC__in IAutomaticUpdates2 * This,
                                __RPC__deref_out_opt IAutomaticUpdatesSettings **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServiceEnabled )(
            __RPC__in IAutomaticUpdates2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                               HRESULT ( STDMETHODCALLTYPE *EnableService )(
            __RPC__in IAutomaticUpdates2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Results )(
            __RPC__in IAutomaticUpdates2 * This,
                                __RPC__deref_out_opt IAutomaticUpdatesResults **retval);
        END_INTERFACE
    } IAutomaticUpdates2Vtbl;
    interface IAutomaticUpdates2
    {
        CONST_VTBL struct IAutomaticUpdates2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> DetectNow(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> ShowSettingsDialog(This) )
    ( (This)->lpVtbl -> get_Settings(This,retval) )
    ( (This)->lpVtbl -> get_ServiceEnabled(This,retval) )
    ( (This)->lpVtbl -> EnableService(This) )
    ( (This)->lpVtbl -> get_Results(This,retval) )
EXTERN_C const IID IID_IUpdateIdentity;
    typedef struct IUpdateIdentityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateIdentity * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateIdentity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateIdentity * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateIdentity * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateIdentity * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateIdentity * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateIdentity * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_RevisionNumber )(
            __RPC__in IUpdateIdentity * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UpdateID )(
            __RPC__in IUpdateIdentity * This,
                                __RPC__deref_out_opt BSTR *retval);
        END_INTERFACE
    } IUpdateIdentityVtbl;
    interface IUpdateIdentity
    {
        CONST_VTBL struct IUpdateIdentityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_RevisionNumber(This,retval) )
    ( (This)->lpVtbl -> get_UpdateID(This,retval) )
EXTERN_C const IID IID_IImageInformation;
    typedef struct IImageInformationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IImageInformation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IImageInformation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IImageInformation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IImageInformation * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IImageInformation * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IImageInformation * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IImageInformation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_AltText )(
            __RPC__in IImageInformation * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Height )(
            __RPC__in IImageInformation * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Source )(
            __RPC__in IImageInformation * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Width )(
            __RPC__in IImageInformation * This,
                                __RPC__out LONG *retval);
        END_INTERFACE
    } IImageInformationVtbl;
    interface IImageInformation
    {
        CONST_VTBL struct IImageInformationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AltText(This,retval) )
    ( (This)->lpVtbl -> get_Height(This,retval) )
    ( (This)->lpVtbl -> get_Source(This,retval) )
    ( (This)->lpVtbl -> get_Width(This,retval) )
EXTERN_C const IID IID_ICategory;
    typedef struct ICategoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICategory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICategory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICategory * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICategory * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICategory * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICategory * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICategory * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ICategory * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CategoryID )(
            __RPC__in ICategory * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Children )(
            __RPC__in ICategory * This,
                                __RPC__deref_out_opt ICategoryCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in ICategory * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Image )(
            __RPC__in ICategory * This,
                                __RPC__deref_out_opt IImageInformation **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Order )(
            __RPC__in ICategory * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in ICategory * This,
                                __RPC__deref_out_opt ICategory **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in ICategory * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Updates )(
            __RPC__in ICategory * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
        END_INTERFACE
    } ICategoryVtbl;
    interface ICategory
    {
        CONST_VTBL struct ICategoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_CategoryID(This,retval) )
    ( (This)->lpVtbl -> get_Children(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> get_Image(This,retval) )
    ( (This)->lpVtbl -> get_Order(This,retval) )
    ( (This)->lpVtbl -> get_Parent(This,retval) )
    ( (This)->lpVtbl -> get_Type(This,retval) )
    ( (This)->lpVtbl -> get_Updates(This,retval) )
EXTERN_C const IID IID_ICategoryCollection;
    typedef struct ICategoryCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICategoryCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICategoryCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICategoryCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICategoryCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICategoryCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICategoryCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICategoryCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ICategoryCollection * This,
                       LONG index,
                                __RPC__deref_out_opt ICategory **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ICategoryCollection * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ICategoryCollection * This,
                                __RPC__out LONG *retval);
        END_INTERFACE
    } ICategoryCollectionVtbl;
    interface ICategoryCollection
    {
        CONST_VTBL struct ICategoryCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,index,retval) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Count(This,retval) )
EXTERN_C const IID IID_IInstallationBehavior;
    typedef struct IInstallationBehaviorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInstallationBehavior * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInstallationBehavior * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInstallationBehavior * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInstallationBehavior * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInstallationBehavior * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInstallationBehavior * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInstallationBehavior * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanRequestUserInput )(
            __RPC__in IInstallationBehavior * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Impact )(
            __RPC__in IInstallationBehavior * This,
                                __RPC__out InstallationImpact *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RebootBehavior )(
            __RPC__in IInstallationBehavior * This,
                                __RPC__out InstallationRebootBehavior *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RequiresNetworkConnectivity )(
            __RPC__in IInstallationBehavior * This,
                                __RPC__out VARIANT_BOOL *retval);
        END_INTERFACE
    } IInstallationBehaviorVtbl;
    interface IInstallationBehavior
    {
        CONST_VTBL struct IInstallationBehaviorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CanRequestUserInput(This,retval) )
    ( (This)->lpVtbl -> get_Impact(This,retval) )
    ( (This)->lpVtbl -> get_RebootBehavior(This,retval) )
    ( (This)->lpVtbl -> get_RequiresNetworkConnectivity(This,retval) )
EXTERN_C const IID IID_IUpdateDownloadContent;
    typedef struct IUpdateDownloadContentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateDownloadContent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateDownloadContent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateDownloadContent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateDownloadContent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateDownloadContent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateDownloadContent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateDownloadContent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadUrl )(
            __RPC__in IUpdateDownloadContent * This,
                                __RPC__deref_out_opt BSTR *retval);
        END_INTERFACE
    } IUpdateDownloadContentVtbl;
    interface IUpdateDownloadContent
    {
        CONST_VTBL struct IUpdateDownloadContentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DownloadUrl(This,retval) )
EXTERN_C const IID IID_IUpdateDownloadContent2;
    typedef struct IUpdateDownloadContent2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateDownloadContent2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateDownloadContent2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateDownloadContent2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateDownloadContent2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateDownloadContent2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateDownloadContent2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateDownloadContent2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadUrl )(
            __RPC__in IUpdateDownloadContent2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsDeltaCompressedContent )(
            __RPC__in IUpdateDownloadContent2 * This,
                                __RPC__out VARIANT_BOOL *retval);
        END_INTERFACE
    } IUpdateDownloadContent2Vtbl;
    interface IUpdateDownloadContent2
    {
        CONST_VTBL struct IUpdateDownloadContent2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DownloadUrl(This,retval) )
    ( (This)->lpVtbl -> get_IsDeltaCompressedContent(This,retval) )
EXTERN_C const IID IID_IUpdateDownloadContentCollection;
    typedef struct IUpdateDownloadContentCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateDownloadContentCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateDownloadContentCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateDownloadContentCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateDownloadContentCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateDownloadContentCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateDownloadContentCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateDownloadContentCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IUpdateDownloadContentCollection * This,
                       LONG index,
                                __RPC__deref_out_opt IUpdateDownloadContent **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IUpdateDownloadContentCollection * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IUpdateDownloadContentCollection * This,
                                __RPC__out LONG *retval);
        END_INTERFACE
    } IUpdateDownloadContentCollectionVtbl;
    interface IUpdateDownloadContentCollection
    {
        CONST_VTBL struct IUpdateDownloadContentCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,index,retval) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Count(This,retval) )
EXTERN_C const IID IID_IUpdate;
    typedef struct IUpdateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdate * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdate * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdate * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdate * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdate * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoSelectOnWebSites )(
            __RPC__in IUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_BundledUpdates )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanRequireSource )(
            __RPC__in IUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Categories )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt ICategoryCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
            __RPC__in IUpdate * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentAvailable )(
            __RPC__in IUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentPreferred )(
            __RPC__in IUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaAccepted )(
            __RPC__in IUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaText )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_HandlerID )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Identity )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt IUpdateIdentity **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Image )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt IImageInformation **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_InstallationBehavior )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsBeta )(
            __RPC__in IUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsDownloaded )(
            __RPC__in IUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
            __RPC__in IUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
            __RPC__in IUpdate * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsInstalled )(
            __RPC__in IUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsMandatory )(
            __RPC__in IUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )(
            __RPC__in IUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Languages )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDeploymentChangeTime )(
            __RPC__in IUpdate * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxDownloadSize )(
            __RPC__in IUpdate * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinDownloadSize )(
            __RPC__in IUpdate * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUrls )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MsrcSeverity )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedCpuSpeed )(
            __RPC__in IUpdate * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedHardDiskSpace )(
            __RPC__in IUpdate * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedMemory )(
            __RPC__in IUpdate * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReleaseNotes )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SecurityBulletinIDs )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupersededUpdateIDs )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IUpdate * This,
                                __RPC__out UpdateType *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationBehavior )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_KBArticleIDs )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *AcceptEula )(
            __RPC__in IUpdate * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeploymentAction )(
            __RPC__in IUpdate * This,
                                __RPC__out DeploymentAction *retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyFromCache )(
            __RPC__in IUpdate * This,
                            __RPC__in BSTR path,
                       VARIANT_BOOL toExtractCabFiles);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadPriority )(
            __RPC__in IUpdate * This,
                                __RPC__out DownloadPriority *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadContents )(
            __RPC__in IUpdate * This,
                                __RPC__deref_out_opt IUpdateDownloadContentCollection **retval);
        END_INTERFACE
    } IUpdateVtbl;
    interface IUpdate
    {
        CONST_VTBL struct IUpdateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Title(This,retval) )
    ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
    ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
    ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
    ( (This)->lpVtbl -> get_Categories(This,retval) )
    ( (This)->lpVtbl -> get_Deadline(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
    ( (This)->lpVtbl -> get_EulaText(This,retval) )
    ( (This)->lpVtbl -> get_HandlerID(This,retval) )
    ( (This)->lpVtbl -> get_Identity(This,retval) )
    ( (This)->lpVtbl -> get_Image(This,retval) )
    ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_IsBeta(This,retval) )
    ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
    ( (This)->lpVtbl -> get_IsHidden(This,retval) )
    ( (This)->lpVtbl -> put_IsHidden(This,value) )
    ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
    ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
    ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
    ( (This)->lpVtbl -> get_Languages(This,retval) )
    ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
    ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
    ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
    ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
    ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
    ( (This)->lpVtbl -> get_Type(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
    ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
    ( (This)->lpVtbl -> AcceptEula(This) )
    ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
    ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
    ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
    ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
EXTERN_C const IID IID_IWindowsDriverUpdate;
    typedef struct IWindowsDriverUpdateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWindowsDriverUpdate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWindowsDriverUpdate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWindowsDriverUpdate * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWindowsDriverUpdate * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWindowsDriverUpdate * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWindowsDriverUpdate * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWindowsDriverUpdate * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoSelectOnWebSites )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_BundledUpdates )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanRequireSource )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Categories )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt ICategoryCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentAvailable )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentPreferred )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaAccepted )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaText )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_HandlerID )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Identity )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt IUpdateIdentity **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Image )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt IImageInformation **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_InstallationBehavior )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsBeta )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsDownloaded )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
            __RPC__in IWindowsDriverUpdate * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsInstalled )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsMandatory )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Languages )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDeploymentChangeTime )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxDownloadSize )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinDownloadSize )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUrls )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MsrcSeverity )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedCpuSpeed )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedHardDiskSpace )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedMemory )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReleaseNotes )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SecurityBulletinIDs )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupersededUpdateIDs )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out UpdateType *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationBehavior )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_KBArticleIDs )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *AcceptEula )(
            __RPC__in IWindowsDriverUpdate * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeploymentAction )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out DeploymentAction *retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyFromCache )(
            __RPC__in IWindowsDriverUpdate * This,
                            __RPC__in BSTR path,
                       VARIANT_BOOL toExtractCabFiles);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadPriority )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out DownloadPriority *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadContents )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt IUpdateDownloadContentCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverClass )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverHardwareID )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverManufacturer )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverModel )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverProvider )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverVerDate )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceProblemNumber )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceStatus )(
            __RPC__in IWindowsDriverUpdate * This,
                                __RPC__out LONG *retval);
        END_INTERFACE
    } IWindowsDriverUpdateVtbl;
    interface IWindowsDriverUpdate
    {
        CONST_VTBL struct IWindowsDriverUpdateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Title(This,retval) )
    ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
    ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
    ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
    ( (This)->lpVtbl -> get_Categories(This,retval) )
    ( (This)->lpVtbl -> get_Deadline(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
    ( (This)->lpVtbl -> get_EulaText(This,retval) )
    ( (This)->lpVtbl -> get_HandlerID(This,retval) )
    ( (This)->lpVtbl -> get_Identity(This,retval) )
    ( (This)->lpVtbl -> get_Image(This,retval) )
    ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_IsBeta(This,retval) )
    ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
    ( (This)->lpVtbl -> get_IsHidden(This,retval) )
    ( (This)->lpVtbl -> put_IsHidden(This,value) )
    ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
    ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
    ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
    ( (This)->lpVtbl -> get_Languages(This,retval) )
    ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
    ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
    ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
    ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
    ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
    ( (This)->lpVtbl -> get_Type(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
    ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
    ( (This)->lpVtbl -> AcceptEula(This) )
    ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
    ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
    ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
    ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
    ( (This)->lpVtbl -> get_DriverClass(This,retval) )
    ( (This)->lpVtbl -> get_DriverHardwareID(This,retval) )
    ( (This)->lpVtbl -> get_DriverManufacturer(This,retval) )
    ( (This)->lpVtbl -> get_DriverModel(This,retval) )
    ( (This)->lpVtbl -> get_DriverProvider(This,retval) )
    ( (This)->lpVtbl -> get_DriverVerDate(This,retval) )
    ( (This)->lpVtbl -> get_DeviceProblemNumber(This,retval) )
    ( (This)->lpVtbl -> get_DeviceStatus(This,retval) )
EXTERN_C const IID IID_IUpdate2;
    typedef struct IUpdate2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdate2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdate2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdate2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdate2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdate2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdate2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdate2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoSelectOnWebSites )(
            __RPC__in IUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_BundledUpdates )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanRequireSource )(
            __RPC__in IUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Categories )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt ICategoryCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
            __RPC__in IUpdate2 * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentAvailable )(
            __RPC__in IUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentPreferred )(
            __RPC__in IUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaAccepted )(
            __RPC__in IUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaText )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_HandlerID )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Identity )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt IUpdateIdentity **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Image )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt IImageInformation **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_InstallationBehavior )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsBeta )(
            __RPC__in IUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsDownloaded )(
            __RPC__in IUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
            __RPC__in IUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
            __RPC__in IUpdate2 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsInstalled )(
            __RPC__in IUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsMandatory )(
            __RPC__in IUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )(
            __RPC__in IUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Languages )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDeploymentChangeTime )(
            __RPC__in IUpdate2 * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxDownloadSize )(
            __RPC__in IUpdate2 * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinDownloadSize )(
            __RPC__in IUpdate2 * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUrls )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MsrcSeverity )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedCpuSpeed )(
            __RPC__in IUpdate2 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedHardDiskSpace )(
            __RPC__in IUpdate2 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedMemory )(
            __RPC__in IUpdate2 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReleaseNotes )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SecurityBulletinIDs )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupersededUpdateIDs )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IUpdate2 * This,
                                __RPC__out UpdateType *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationBehavior )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_KBArticleIDs )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *AcceptEula )(
            __RPC__in IUpdate2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeploymentAction )(
            __RPC__in IUpdate2 * This,
                                __RPC__out DeploymentAction *retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyFromCache )(
            __RPC__in IUpdate2 * This,
                            __RPC__in BSTR path,
                       VARIANT_BOOL toExtractCabFiles);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadPriority )(
            __RPC__in IUpdate2 * This,
                                __RPC__out DownloadPriority *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadContents )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt IUpdateDownloadContentCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )(
            __RPC__in IUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsPresent )(
            __RPC__in IUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CveIDs )(
            __RPC__in IUpdate2 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyToCache )(
            __RPC__in IUpdate2 * This,
                       __RPC__in_opt IStringCollection *pFiles);
        END_INTERFACE
    } IUpdate2Vtbl;
    interface IUpdate2
    {
        CONST_VTBL struct IUpdate2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Title(This,retval) )
    ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
    ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
    ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
    ( (This)->lpVtbl -> get_Categories(This,retval) )
    ( (This)->lpVtbl -> get_Deadline(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
    ( (This)->lpVtbl -> get_EulaText(This,retval) )
    ( (This)->lpVtbl -> get_HandlerID(This,retval) )
    ( (This)->lpVtbl -> get_Identity(This,retval) )
    ( (This)->lpVtbl -> get_Image(This,retval) )
    ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_IsBeta(This,retval) )
    ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
    ( (This)->lpVtbl -> get_IsHidden(This,retval) )
    ( (This)->lpVtbl -> put_IsHidden(This,value) )
    ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
    ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
    ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
    ( (This)->lpVtbl -> get_Languages(This,retval) )
    ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
    ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
    ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
    ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
    ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
    ( (This)->lpVtbl -> get_Type(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
    ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
    ( (This)->lpVtbl -> AcceptEula(This) )
    ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
    ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
    ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
    ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
    ( (This)->lpVtbl -> get_IsPresent(This,retval) )
    ( (This)->lpVtbl -> get_CveIDs(This,retval) )
    ( (This)->lpVtbl -> CopyToCache(This,pFiles) )
EXTERN_C const IID IID_IUpdate3;
    typedef struct IUpdate3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdate3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdate3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdate3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdate3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdate3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdate3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdate3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoSelectOnWebSites )(
            __RPC__in IUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_BundledUpdates )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanRequireSource )(
            __RPC__in IUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Categories )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt ICategoryCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
            __RPC__in IUpdate3 * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentAvailable )(
            __RPC__in IUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentPreferred )(
            __RPC__in IUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaAccepted )(
            __RPC__in IUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaText )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_HandlerID )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Identity )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt IUpdateIdentity **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Image )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt IImageInformation **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_InstallationBehavior )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsBeta )(
            __RPC__in IUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsDownloaded )(
            __RPC__in IUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
            __RPC__in IUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
            __RPC__in IUpdate3 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsInstalled )(
            __RPC__in IUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsMandatory )(
            __RPC__in IUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )(
            __RPC__in IUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Languages )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDeploymentChangeTime )(
            __RPC__in IUpdate3 * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxDownloadSize )(
            __RPC__in IUpdate3 * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinDownloadSize )(
            __RPC__in IUpdate3 * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUrls )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MsrcSeverity )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedCpuSpeed )(
            __RPC__in IUpdate3 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedHardDiskSpace )(
            __RPC__in IUpdate3 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedMemory )(
            __RPC__in IUpdate3 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReleaseNotes )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SecurityBulletinIDs )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupersededUpdateIDs )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IUpdate3 * This,
                                __RPC__out UpdateType *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationBehavior )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_KBArticleIDs )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *AcceptEula )(
            __RPC__in IUpdate3 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeploymentAction )(
            __RPC__in IUpdate3 * This,
                                __RPC__out DeploymentAction *retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyFromCache )(
            __RPC__in IUpdate3 * This,
                            __RPC__in BSTR path,
                       VARIANT_BOOL toExtractCabFiles);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadPriority )(
            __RPC__in IUpdate3 * This,
                                __RPC__out DownloadPriority *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadContents )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt IUpdateDownloadContentCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )(
            __RPC__in IUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsPresent )(
            __RPC__in IUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CveIDs )(
            __RPC__in IUpdate3 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyToCache )(
            __RPC__in IUpdate3 * This,
                       __RPC__in_opt IStringCollection *pFiles);
                                        HRESULT ( STDMETHODCALLTYPE *get_BrowseOnly )(
            __RPC__in IUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
        END_INTERFACE
    } IUpdate3Vtbl;
    interface IUpdate3
    {
        CONST_VTBL struct IUpdate3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Title(This,retval) )
    ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
    ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
    ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
    ( (This)->lpVtbl -> get_Categories(This,retval) )
    ( (This)->lpVtbl -> get_Deadline(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
    ( (This)->lpVtbl -> get_EulaText(This,retval) )
    ( (This)->lpVtbl -> get_HandlerID(This,retval) )
    ( (This)->lpVtbl -> get_Identity(This,retval) )
    ( (This)->lpVtbl -> get_Image(This,retval) )
    ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_IsBeta(This,retval) )
    ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
    ( (This)->lpVtbl -> get_IsHidden(This,retval) )
    ( (This)->lpVtbl -> put_IsHidden(This,value) )
    ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
    ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
    ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
    ( (This)->lpVtbl -> get_Languages(This,retval) )
    ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
    ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
    ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
    ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
    ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
    ( (This)->lpVtbl -> get_Type(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
    ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
    ( (This)->lpVtbl -> AcceptEula(This) )
    ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
    ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
    ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
    ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
    ( (This)->lpVtbl -> get_IsPresent(This,retval) )
    ( (This)->lpVtbl -> get_CveIDs(This,retval) )
    ( (This)->lpVtbl -> CopyToCache(This,pFiles) )
    ( (This)->lpVtbl -> get_BrowseOnly(This,retval) )
EXTERN_C const IID IID_IUpdate4;
    typedef struct IUpdate4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdate4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdate4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdate4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdate4 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdate4 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdate4 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdate4 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoSelectOnWebSites )(
            __RPC__in IUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_BundledUpdates )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanRequireSource )(
            __RPC__in IUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Categories )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt ICategoryCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
            __RPC__in IUpdate4 * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentAvailable )(
            __RPC__in IUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentPreferred )(
            __RPC__in IUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaAccepted )(
            __RPC__in IUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaText )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_HandlerID )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Identity )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt IUpdateIdentity **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Image )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt IImageInformation **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_InstallationBehavior )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsBeta )(
            __RPC__in IUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsDownloaded )(
            __RPC__in IUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
            __RPC__in IUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
            __RPC__in IUpdate4 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsInstalled )(
            __RPC__in IUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsMandatory )(
            __RPC__in IUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )(
            __RPC__in IUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Languages )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDeploymentChangeTime )(
            __RPC__in IUpdate4 * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxDownloadSize )(
            __RPC__in IUpdate4 * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinDownloadSize )(
            __RPC__in IUpdate4 * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUrls )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MsrcSeverity )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedCpuSpeed )(
            __RPC__in IUpdate4 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedHardDiskSpace )(
            __RPC__in IUpdate4 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedMemory )(
            __RPC__in IUpdate4 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReleaseNotes )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SecurityBulletinIDs )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupersededUpdateIDs )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IUpdate4 * This,
                                __RPC__out UpdateType *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationBehavior )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_KBArticleIDs )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *AcceptEula )(
            __RPC__in IUpdate4 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeploymentAction )(
            __RPC__in IUpdate4 * This,
                                __RPC__out DeploymentAction *retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyFromCache )(
            __RPC__in IUpdate4 * This,
                            __RPC__in BSTR path,
                       VARIANT_BOOL toExtractCabFiles);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadPriority )(
            __RPC__in IUpdate4 * This,
                                __RPC__out DownloadPriority *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadContents )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt IUpdateDownloadContentCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )(
            __RPC__in IUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsPresent )(
            __RPC__in IUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CveIDs )(
            __RPC__in IUpdate4 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyToCache )(
            __RPC__in IUpdate4 * This,
                       __RPC__in_opt IStringCollection *pFiles);
                                        HRESULT ( STDMETHODCALLTYPE *get_BrowseOnly )(
            __RPC__in IUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_PerUser )(
            __RPC__in IUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
        END_INTERFACE
    } IUpdate4Vtbl;
    interface IUpdate4
    {
        CONST_VTBL struct IUpdate4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Title(This,retval) )
    ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
    ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
    ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
    ( (This)->lpVtbl -> get_Categories(This,retval) )
    ( (This)->lpVtbl -> get_Deadline(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
    ( (This)->lpVtbl -> get_EulaText(This,retval) )
    ( (This)->lpVtbl -> get_HandlerID(This,retval) )
    ( (This)->lpVtbl -> get_Identity(This,retval) )
    ( (This)->lpVtbl -> get_Image(This,retval) )
    ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_IsBeta(This,retval) )
    ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
    ( (This)->lpVtbl -> get_IsHidden(This,retval) )
    ( (This)->lpVtbl -> put_IsHidden(This,value) )
    ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
    ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
    ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
    ( (This)->lpVtbl -> get_Languages(This,retval) )
    ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
    ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
    ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
    ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
    ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
    ( (This)->lpVtbl -> get_Type(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
    ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
    ( (This)->lpVtbl -> AcceptEula(This) )
    ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
    ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
    ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
    ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
    ( (This)->lpVtbl -> get_IsPresent(This,retval) )
    ( (This)->lpVtbl -> get_CveIDs(This,retval) )
    ( (This)->lpVtbl -> CopyToCache(This,pFiles) )
    ( (This)->lpVtbl -> get_BrowseOnly(This,retval) )
    ( (This)->lpVtbl -> get_PerUser(This,retval) )
EXTERN_C const IID IID_IUpdate5;
    typedef struct IUpdate5Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdate5 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdate5 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdate5 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdate5 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdate5 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdate5 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdate5 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoSelectOnWebSites )(
            __RPC__in IUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_BundledUpdates )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanRequireSource )(
            __RPC__in IUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Categories )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt ICategoryCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
            __RPC__in IUpdate5 * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentAvailable )(
            __RPC__in IUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentPreferred )(
            __RPC__in IUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaAccepted )(
            __RPC__in IUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaText )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_HandlerID )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Identity )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt IUpdateIdentity **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Image )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt IImageInformation **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_InstallationBehavior )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsBeta )(
            __RPC__in IUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsDownloaded )(
            __RPC__in IUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
            __RPC__in IUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
            __RPC__in IUpdate5 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsInstalled )(
            __RPC__in IUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsMandatory )(
            __RPC__in IUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )(
            __RPC__in IUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Languages )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDeploymentChangeTime )(
            __RPC__in IUpdate5 * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxDownloadSize )(
            __RPC__in IUpdate5 * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinDownloadSize )(
            __RPC__in IUpdate5 * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUrls )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MsrcSeverity )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedCpuSpeed )(
            __RPC__in IUpdate5 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedHardDiskSpace )(
            __RPC__in IUpdate5 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedMemory )(
            __RPC__in IUpdate5 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReleaseNotes )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SecurityBulletinIDs )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupersededUpdateIDs )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IUpdate5 * This,
                                __RPC__out UpdateType *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationBehavior )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_KBArticleIDs )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *AcceptEula )(
            __RPC__in IUpdate5 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeploymentAction )(
            __RPC__in IUpdate5 * This,
                                __RPC__out DeploymentAction *retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyFromCache )(
            __RPC__in IUpdate5 * This,
                            __RPC__in BSTR path,
                       VARIANT_BOOL toExtractCabFiles);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadPriority )(
            __RPC__in IUpdate5 * This,
                                __RPC__out DownloadPriority *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadContents )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt IUpdateDownloadContentCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )(
            __RPC__in IUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsPresent )(
            __RPC__in IUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CveIDs )(
            __RPC__in IUpdate5 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyToCache )(
            __RPC__in IUpdate5 * This,
                       __RPC__in_opt IStringCollection *pFiles);
                                        HRESULT ( STDMETHODCALLTYPE *get_BrowseOnly )(
            __RPC__in IUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_PerUser )(
            __RPC__in IUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoSelection )(
            __RPC__in IUpdate5 * This,
                                __RPC__out AutoSelectionMode *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoDownload )(
            __RPC__in IUpdate5 * This,
                                __RPC__out AutoDownloadMode *retval);
        END_INTERFACE
    } IUpdate5Vtbl;
    interface IUpdate5
    {
        CONST_VTBL struct IUpdate5Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Title(This,retval) )
    ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
    ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
    ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
    ( (This)->lpVtbl -> get_Categories(This,retval) )
    ( (This)->lpVtbl -> get_Deadline(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
    ( (This)->lpVtbl -> get_EulaText(This,retval) )
    ( (This)->lpVtbl -> get_HandlerID(This,retval) )
    ( (This)->lpVtbl -> get_Identity(This,retval) )
    ( (This)->lpVtbl -> get_Image(This,retval) )
    ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_IsBeta(This,retval) )
    ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
    ( (This)->lpVtbl -> get_IsHidden(This,retval) )
    ( (This)->lpVtbl -> put_IsHidden(This,value) )
    ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
    ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
    ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
    ( (This)->lpVtbl -> get_Languages(This,retval) )
    ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
    ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
    ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
    ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
    ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
    ( (This)->lpVtbl -> get_Type(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
    ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
    ( (This)->lpVtbl -> AcceptEula(This) )
    ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
    ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
    ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
    ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
    ( (This)->lpVtbl -> get_IsPresent(This,retval) )
    ( (This)->lpVtbl -> get_CveIDs(This,retval) )
    ( (This)->lpVtbl -> CopyToCache(This,pFiles) )
    ( (This)->lpVtbl -> get_BrowseOnly(This,retval) )
    ( (This)->lpVtbl -> get_PerUser(This,retval) )
    ( (This)->lpVtbl -> get_AutoSelection(This,retval) )
    ( (This)->lpVtbl -> get_AutoDownload(This,retval) )
EXTERN_C const IID IID_IWindowsDriverUpdate2;
    typedef struct IWindowsDriverUpdate2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWindowsDriverUpdate2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWindowsDriverUpdate2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWindowsDriverUpdate2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWindowsDriverUpdate2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWindowsDriverUpdate2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWindowsDriverUpdate2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWindowsDriverUpdate2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoSelectOnWebSites )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_BundledUpdates )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanRequireSource )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Categories )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt ICategoryCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentAvailable )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentPreferred )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaAccepted )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaText )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_HandlerID )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Identity )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt IUpdateIdentity **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Image )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt IImageInformation **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_InstallationBehavior )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsBeta )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsDownloaded )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
            __RPC__in IWindowsDriverUpdate2 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsInstalled )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsMandatory )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Languages )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDeploymentChangeTime )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxDownloadSize )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinDownloadSize )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUrls )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MsrcSeverity )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedCpuSpeed )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedHardDiskSpace )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedMemory )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReleaseNotes )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SecurityBulletinIDs )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupersededUpdateIDs )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out UpdateType *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationBehavior )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_KBArticleIDs )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *AcceptEula )(
            __RPC__in IWindowsDriverUpdate2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeploymentAction )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out DeploymentAction *retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyFromCache )(
            __RPC__in IWindowsDriverUpdate2 * This,
                            __RPC__in BSTR path,
                       VARIANT_BOOL toExtractCabFiles);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadPriority )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out DownloadPriority *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadContents )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt IUpdateDownloadContentCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverClass )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverHardwareID )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverManufacturer )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverModel )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverProvider )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverVerDate )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceProblemNumber )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceStatus )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsPresent )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CveIDs )(
            __RPC__in IWindowsDriverUpdate2 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyToCache )(
            __RPC__in IWindowsDriverUpdate2 * This,
                       __RPC__in_opt IStringCollection *pFiles);
        END_INTERFACE
    } IWindowsDriverUpdate2Vtbl;
    interface IWindowsDriverUpdate2
    {
        CONST_VTBL struct IWindowsDriverUpdate2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Title(This,retval) )
    ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
    ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
    ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
    ( (This)->lpVtbl -> get_Categories(This,retval) )
    ( (This)->lpVtbl -> get_Deadline(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
    ( (This)->lpVtbl -> get_EulaText(This,retval) )
    ( (This)->lpVtbl -> get_HandlerID(This,retval) )
    ( (This)->lpVtbl -> get_Identity(This,retval) )
    ( (This)->lpVtbl -> get_Image(This,retval) )
    ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_IsBeta(This,retval) )
    ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
    ( (This)->lpVtbl -> get_IsHidden(This,retval) )
    ( (This)->lpVtbl -> put_IsHidden(This,value) )
    ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
    ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
    ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
    ( (This)->lpVtbl -> get_Languages(This,retval) )
    ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
    ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
    ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
    ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
    ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
    ( (This)->lpVtbl -> get_Type(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
    ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
    ( (This)->lpVtbl -> AcceptEula(This) )
    ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
    ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
    ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
    ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
    ( (This)->lpVtbl -> get_DriverClass(This,retval) )
    ( (This)->lpVtbl -> get_DriverHardwareID(This,retval) )
    ( (This)->lpVtbl -> get_DriverManufacturer(This,retval) )
    ( (This)->lpVtbl -> get_DriverModel(This,retval) )
    ( (This)->lpVtbl -> get_DriverProvider(This,retval) )
    ( (This)->lpVtbl -> get_DriverVerDate(This,retval) )
    ( (This)->lpVtbl -> get_DeviceProblemNumber(This,retval) )
    ( (This)->lpVtbl -> get_DeviceStatus(This,retval) )
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
    ( (This)->lpVtbl -> get_IsPresent(This,retval) )
    ( (This)->lpVtbl -> get_CveIDs(This,retval) )
    ( (This)->lpVtbl -> CopyToCache(This,pFiles) )
EXTERN_C const IID IID_IWindowsDriverUpdate3;
    typedef struct IWindowsDriverUpdate3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWindowsDriverUpdate3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWindowsDriverUpdate3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWindowsDriverUpdate3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWindowsDriverUpdate3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWindowsDriverUpdate3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWindowsDriverUpdate3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWindowsDriverUpdate3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoSelectOnWebSites )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_BundledUpdates )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanRequireSource )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Categories )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt ICategoryCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentAvailable )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentPreferred )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaAccepted )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaText )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_HandlerID )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Identity )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt IUpdateIdentity **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Image )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt IImageInformation **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_InstallationBehavior )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsBeta )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsDownloaded )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
            __RPC__in IWindowsDriverUpdate3 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsInstalled )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsMandatory )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Languages )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDeploymentChangeTime )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxDownloadSize )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinDownloadSize )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUrls )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MsrcSeverity )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedCpuSpeed )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedHardDiskSpace )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedMemory )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReleaseNotes )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SecurityBulletinIDs )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupersededUpdateIDs )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out UpdateType *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationBehavior )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_KBArticleIDs )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *AcceptEula )(
            __RPC__in IWindowsDriverUpdate3 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeploymentAction )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out DeploymentAction *retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyFromCache )(
            __RPC__in IWindowsDriverUpdate3 * This,
                            __RPC__in BSTR path,
                       VARIANT_BOOL toExtractCabFiles);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadPriority )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out DownloadPriority *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadContents )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt IUpdateDownloadContentCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverClass )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverHardwareID )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverManufacturer )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverModel )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverProvider )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverVerDate )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceProblemNumber )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceStatus )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsPresent )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CveIDs )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyToCache )(
            __RPC__in IWindowsDriverUpdate3 * This,
                       __RPC__in_opt IStringCollection *pFiles);
                                        HRESULT ( STDMETHODCALLTYPE *get_BrowseOnly )(
            __RPC__in IWindowsDriverUpdate3 * This,
                                __RPC__out VARIANT_BOOL *retval);
        END_INTERFACE
    } IWindowsDriverUpdate3Vtbl;
    interface IWindowsDriverUpdate3
    {
        CONST_VTBL struct IWindowsDriverUpdate3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Title(This,retval) )
    ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
    ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
    ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
    ( (This)->lpVtbl -> get_Categories(This,retval) )
    ( (This)->lpVtbl -> get_Deadline(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
    ( (This)->lpVtbl -> get_EulaText(This,retval) )
    ( (This)->lpVtbl -> get_HandlerID(This,retval) )
    ( (This)->lpVtbl -> get_Identity(This,retval) )
    ( (This)->lpVtbl -> get_Image(This,retval) )
    ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_IsBeta(This,retval) )
    ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
    ( (This)->lpVtbl -> get_IsHidden(This,retval) )
    ( (This)->lpVtbl -> put_IsHidden(This,value) )
    ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
    ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
    ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
    ( (This)->lpVtbl -> get_Languages(This,retval) )
    ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
    ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
    ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
    ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
    ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
    ( (This)->lpVtbl -> get_Type(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
    ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
    ( (This)->lpVtbl -> AcceptEula(This) )
    ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
    ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
    ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
    ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
    ( (This)->lpVtbl -> get_DriverClass(This,retval) )
    ( (This)->lpVtbl -> get_DriverHardwareID(This,retval) )
    ( (This)->lpVtbl -> get_DriverManufacturer(This,retval) )
    ( (This)->lpVtbl -> get_DriverModel(This,retval) )
    ( (This)->lpVtbl -> get_DriverProvider(This,retval) )
    ( (This)->lpVtbl -> get_DriverVerDate(This,retval) )
    ( (This)->lpVtbl -> get_DeviceProblemNumber(This,retval) )
    ( (This)->lpVtbl -> get_DeviceStatus(This,retval) )
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
    ( (This)->lpVtbl -> get_IsPresent(This,retval) )
    ( (This)->lpVtbl -> get_CveIDs(This,retval) )
    ( (This)->lpVtbl -> CopyToCache(This,pFiles) )
    ( (This)->lpVtbl -> get_BrowseOnly(This,retval) )
EXTERN_C const IID IID_IWindowsDriverUpdateEntry;
    typedef struct IWindowsDriverUpdateEntryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWindowsDriverUpdateEntry * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWindowsDriverUpdateEntry * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWindowsDriverUpdateEntry * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWindowsDriverUpdateEntry * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWindowsDriverUpdateEntry * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWindowsDriverUpdateEntry * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWindowsDriverUpdateEntry * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverClass )(
            __RPC__in IWindowsDriverUpdateEntry * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverHardwareID )(
            __RPC__in IWindowsDriverUpdateEntry * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverManufacturer )(
            __RPC__in IWindowsDriverUpdateEntry * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverModel )(
            __RPC__in IWindowsDriverUpdateEntry * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverProvider )(
            __RPC__in IWindowsDriverUpdateEntry * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverVerDate )(
            __RPC__in IWindowsDriverUpdateEntry * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceProblemNumber )(
            __RPC__in IWindowsDriverUpdateEntry * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceStatus )(
            __RPC__in IWindowsDriverUpdateEntry * This,
                                __RPC__out LONG *retval);
        END_INTERFACE
    } IWindowsDriverUpdateEntryVtbl;
    interface IWindowsDriverUpdateEntry
    {
        CONST_VTBL struct IWindowsDriverUpdateEntryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DriverClass(This,retval) )
    ( (This)->lpVtbl -> get_DriverHardwareID(This,retval) )
    ( (This)->lpVtbl -> get_DriverManufacturer(This,retval) )
    ( (This)->lpVtbl -> get_DriverModel(This,retval) )
    ( (This)->lpVtbl -> get_DriverProvider(This,retval) )
    ( (This)->lpVtbl -> get_DriverVerDate(This,retval) )
    ( (This)->lpVtbl -> get_DeviceProblemNumber(This,retval) )
    ( (This)->lpVtbl -> get_DeviceStatus(This,retval) )
EXTERN_C const IID IID_IWindowsDriverUpdateEntryCollection;
    typedef struct IWindowsDriverUpdateEntryCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWindowsDriverUpdateEntryCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWindowsDriverUpdateEntryCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWindowsDriverUpdateEntryCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWindowsDriverUpdateEntryCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWindowsDriverUpdateEntryCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWindowsDriverUpdateEntryCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWindowsDriverUpdateEntryCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IWindowsDriverUpdateEntryCollection * This,
                       LONG index,
                                __RPC__deref_out_opt IWindowsDriverUpdateEntry **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IWindowsDriverUpdateEntryCollection * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IWindowsDriverUpdateEntryCollection * This,
                                __RPC__out LONG *retval);
        END_INTERFACE
    } IWindowsDriverUpdateEntryCollectionVtbl;
    interface IWindowsDriverUpdateEntryCollection
    {
        CONST_VTBL struct IWindowsDriverUpdateEntryCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,index,retval) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Count(This,retval) )
EXTERN_C const IID IID_IWindowsDriverUpdate4;
    typedef struct IWindowsDriverUpdate4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWindowsDriverUpdate4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWindowsDriverUpdate4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWindowsDriverUpdate4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWindowsDriverUpdate4 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWindowsDriverUpdate4 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWindowsDriverUpdate4 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWindowsDriverUpdate4 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoSelectOnWebSites )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_BundledUpdates )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanRequireSource )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Categories )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt ICategoryCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentAvailable )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentPreferred )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaAccepted )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaText )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_HandlerID )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Identity )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt IUpdateIdentity **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Image )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt IImageInformation **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_InstallationBehavior )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsBeta )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsDownloaded )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
            __RPC__in IWindowsDriverUpdate4 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsInstalled )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsMandatory )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Languages )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDeploymentChangeTime )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxDownloadSize )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinDownloadSize )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUrls )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MsrcSeverity )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedCpuSpeed )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedHardDiskSpace )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedMemory )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReleaseNotes )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SecurityBulletinIDs )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupersededUpdateIDs )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out UpdateType *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationBehavior )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_KBArticleIDs )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *AcceptEula )(
            __RPC__in IWindowsDriverUpdate4 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeploymentAction )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out DeploymentAction *retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyFromCache )(
            __RPC__in IWindowsDriverUpdate4 * This,
                            __RPC__in BSTR path,
                       VARIANT_BOOL toExtractCabFiles);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadPriority )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out DownloadPriority *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadContents )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt IUpdateDownloadContentCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverClass )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverHardwareID )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverManufacturer )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverModel )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverProvider )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverVerDate )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceProblemNumber )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceStatus )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsPresent )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CveIDs )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyToCache )(
            __RPC__in IWindowsDriverUpdate4 * This,
                       __RPC__in_opt IStringCollection *pFiles);
                                        HRESULT ( STDMETHODCALLTYPE *get_BrowseOnly )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_WindowsDriverUpdateEntries )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__deref_out_opt IWindowsDriverUpdateEntryCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_PerUser )(
            __RPC__in IWindowsDriverUpdate4 * This,
                                __RPC__out VARIANT_BOOL *retval);
        END_INTERFACE
    } IWindowsDriverUpdate4Vtbl;
    interface IWindowsDriverUpdate4
    {
        CONST_VTBL struct IWindowsDriverUpdate4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Title(This,retval) )
    ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
    ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
    ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
    ( (This)->lpVtbl -> get_Categories(This,retval) )
    ( (This)->lpVtbl -> get_Deadline(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
    ( (This)->lpVtbl -> get_EulaText(This,retval) )
    ( (This)->lpVtbl -> get_HandlerID(This,retval) )
    ( (This)->lpVtbl -> get_Identity(This,retval) )
    ( (This)->lpVtbl -> get_Image(This,retval) )
    ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_IsBeta(This,retval) )
    ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
    ( (This)->lpVtbl -> get_IsHidden(This,retval) )
    ( (This)->lpVtbl -> put_IsHidden(This,value) )
    ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
    ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
    ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
    ( (This)->lpVtbl -> get_Languages(This,retval) )
    ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
    ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
    ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
    ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
    ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
    ( (This)->lpVtbl -> get_Type(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
    ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
    ( (This)->lpVtbl -> AcceptEula(This) )
    ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
    ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
    ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
    ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
    ( (This)->lpVtbl -> get_DriverClass(This,retval) )
    ( (This)->lpVtbl -> get_DriverHardwareID(This,retval) )
    ( (This)->lpVtbl -> get_DriverManufacturer(This,retval) )
    ( (This)->lpVtbl -> get_DriverModel(This,retval) )
    ( (This)->lpVtbl -> get_DriverProvider(This,retval) )
    ( (This)->lpVtbl -> get_DriverVerDate(This,retval) )
    ( (This)->lpVtbl -> get_DeviceProblemNumber(This,retval) )
    ( (This)->lpVtbl -> get_DeviceStatus(This,retval) )
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
    ( (This)->lpVtbl -> get_IsPresent(This,retval) )
    ( (This)->lpVtbl -> get_CveIDs(This,retval) )
    ( (This)->lpVtbl -> CopyToCache(This,pFiles) )
    ( (This)->lpVtbl -> get_BrowseOnly(This,retval) )
    ( (This)->lpVtbl -> get_WindowsDriverUpdateEntries(This,retval) )
    ( (This)->lpVtbl -> get_PerUser(This,retval) )
EXTERN_C const IID IID_IWindowsDriverUpdate5;
    typedef struct IWindowsDriverUpdate5Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWindowsDriverUpdate5 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWindowsDriverUpdate5 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWindowsDriverUpdate5 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWindowsDriverUpdate5 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWindowsDriverUpdate5 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWindowsDriverUpdate5 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWindowsDriverUpdate5 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoSelectOnWebSites )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_BundledUpdates )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanRequireSource )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Categories )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt ICategoryCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentAvailable )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentPreferred )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaAccepted )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_EulaText )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_HandlerID )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Identity )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt IUpdateIdentity **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Image )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt IImageInformation **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_InstallationBehavior )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsBeta )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsDownloaded )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
            __RPC__in IWindowsDriverUpdate5 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsInstalled )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsMandatory )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Languages )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastDeploymentChangeTime )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxDownloadSize )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinDownloadSize )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUrls )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_MsrcSeverity )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedCpuSpeed )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedHardDiskSpace )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecommendedMemory )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReleaseNotes )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SecurityBulletinIDs )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupersededUpdateIDs )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out UpdateType *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationBehavior )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt IInstallationBehavior **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_KBArticleIDs )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *AcceptEula )(
            __RPC__in IWindowsDriverUpdate5 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeploymentAction )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out DeploymentAction *retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyFromCache )(
            __RPC__in IWindowsDriverUpdate5 * This,
                            __RPC__in BSTR path,
                       VARIANT_BOOL toExtractCabFiles);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadPriority )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out DownloadPriority *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DownloadContents )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt IUpdateDownloadContentCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverClass )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverHardwareID )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverManufacturer )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverModel )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverProvider )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DriverVerDate )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceProblemNumber )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceStatus )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsPresent )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CveIDs )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *CopyToCache )(
            __RPC__in IWindowsDriverUpdate5 * This,
                       __RPC__in_opt IStringCollection *pFiles);
                                        HRESULT ( STDMETHODCALLTYPE *get_BrowseOnly )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_WindowsDriverUpdateEntries )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__deref_out_opt IWindowsDriverUpdateEntryCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_PerUser )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoSelection )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out AutoSelectionMode *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoDownload )(
            __RPC__in IWindowsDriverUpdate5 * This,
                                __RPC__out AutoDownloadMode *retval);
        END_INTERFACE
    } IWindowsDriverUpdate5Vtbl;
    interface IWindowsDriverUpdate5
    {
        CONST_VTBL struct IWindowsDriverUpdate5Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Title(This,retval) )
    ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
    ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
    ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
    ( (This)->lpVtbl -> get_Categories(This,retval) )
    ( (This)->lpVtbl -> get_Deadline(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
    ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
    ( (This)->lpVtbl -> get_EulaText(This,retval) )
    ( (This)->lpVtbl -> get_HandlerID(This,retval) )
    ( (This)->lpVtbl -> get_Identity(This,retval) )
    ( (This)->lpVtbl -> get_Image(This,retval) )
    ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_IsBeta(This,retval) )
    ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
    ( (This)->lpVtbl -> get_IsHidden(This,retval) )
    ( (This)->lpVtbl -> put_IsHidden(This,value) )
    ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
    ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
    ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
    ( (This)->lpVtbl -> get_Languages(This,retval) )
    ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
    ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
    ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
    ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
    ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
    ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
    ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
    ( (This)->lpVtbl -> get_Type(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
    ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
    ( (This)->lpVtbl -> AcceptEula(This) )
    ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
    ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
    ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
    ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
    ( (This)->lpVtbl -> get_DriverClass(This,retval) )
    ( (This)->lpVtbl -> get_DriverHardwareID(This,retval) )
    ( (This)->lpVtbl -> get_DriverManufacturer(This,retval) )
    ( (This)->lpVtbl -> get_DriverModel(This,retval) )
    ( (This)->lpVtbl -> get_DriverProvider(This,retval) )
    ( (This)->lpVtbl -> get_DriverVerDate(This,retval) )
    ( (This)->lpVtbl -> get_DeviceProblemNumber(This,retval) )
    ( (This)->lpVtbl -> get_DeviceStatus(This,retval) )
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
    ( (This)->lpVtbl -> get_IsPresent(This,retval) )
    ( (This)->lpVtbl -> get_CveIDs(This,retval) )
    ( (This)->lpVtbl -> CopyToCache(This,pFiles) )
    ( (This)->lpVtbl -> get_BrowseOnly(This,retval) )
    ( (This)->lpVtbl -> get_WindowsDriverUpdateEntries(This,retval) )
    ( (This)->lpVtbl -> get_PerUser(This,retval) )
    ( (This)->lpVtbl -> get_AutoSelection(This,retval) )
    ( (This)->lpVtbl -> get_AutoDownload(This,retval) )
EXTERN_C const IID IID_IUpdateCollection;
    typedef struct IUpdateCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IUpdateCollection * This,
                       LONG index,
                                __RPC__deref_out_opt IUpdate **retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_Item )(
            __RPC__in IUpdateCollection * This,
                       LONG index,
                       __RPC__in_opt IUpdate *value);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IUpdateCollection * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IUpdateCollection * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )(
            __RPC__in IUpdateCollection * This,
                                __RPC__out VARIANT_BOOL *retval);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IUpdateCollection * This,
                       __RPC__in_opt IUpdate *value,
                                __RPC__out LONG *retval);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IUpdateCollection * This);
                               HRESULT ( STDMETHODCALLTYPE *Copy )(
            __RPC__in IUpdateCollection * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *Insert )(
            __RPC__in IUpdateCollection * This,
                       LONG index,
                       __RPC__in_opt IUpdate *value);
                               HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IUpdateCollection * This,
                       LONG index);
        END_INTERFACE
    } IUpdateCollectionVtbl;
    interface IUpdateCollection
    {
        CONST_VTBL struct IUpdateCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,index,retval) )
    ( (This)->lpVtbl -> put_Item(This,index,value) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Count(This,retval) )
    ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
    ( (This)->lpVtbl -> Add(This,value,retval) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> Copy(This,retval) )
    ( (This)->lpVtbl -> Insert(This,index,value) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
EXTERN_C const IID IID_IUpdateException;
    typedef struct IUpdateExceptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateException * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateException * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateException * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateException * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateException * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateException * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateException * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Message )(
            __RPC__in IUpdateException * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_HResult )(
            __RPC__in IUpdateException * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Context )(
            __RPC__in IUpdateException * This,
                                __RPC__out UpdateExceptionContext *retval);
        END_INTERFACE
    } IUpdateExceptionVtbl;
    interface IUpdateException
    {
        CONST_VTBL struct IUpdateExceptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Message(This,retval) )
    ( (This)->lpVtbl -> get_HResult(This,retval) )
    ( (This)->lpVtbl -> get_Context(This,retval) )
EXTERN_C const IID IID_IInvalidProductLicenseException;
    typedef struct IInvalidProductLicenseExceptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInvalidProductLicenseException * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInvalidProductLicenseException * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInvalidProductLicenseException * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInvalidProductLicenseException * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInvalidProductLicenseException * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInvalidProductLicenseException * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInvalidProductLicenseException * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Message )(
            __RPC__in IInvalidProductLicenseException * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_HResult )(
            __RPC__in IInvalidProductLicenseException * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Context )(
            __RPC__in IInvalidProductLicenseException * This,
                                __RPC__out UpdateExceptionContext *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Product )(
            __RPC__in IInvalidProductLicenseException * This,
                                __RPC__deref_out_opt BSTR *retval);
        END_INTERFACE
    } IInvalidProductLicenseExceptionVtbl;
    interface IInvalidProductLicenseException
    {
        CONST_VTBL struct IInvalidProductLicenseExceptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Message(This,retval) )
    ( (This)->lpVtbl -> get_HResult(This,retval) )
    ( (This)->lpVtbl -> get_Context(This,retval) )
    ( (This)->lpVtbl -> get_Product(This,retval) )
EXTERN_C const IID IID_IUpdateExceptionCollection;
    typedef struct IUpdateExceptionCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateExceptionCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateExceptionCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateExceptionCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateExceptionCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateExceptionCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateExceptionCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateExceptionCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IUpdateExceptionCollection * This,
                       LONG index,
                                __RPC__deref_out_opt IUpdateException **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IUpdateExceptionCollection * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IUpdateExceptionCollection * This,
                                __RPC__out LONG *retval);
        END_INTERFACE
    } IUpdateExceptionCollectionVtbl;
    interface IUpdateExceptionCollection
    {
        CONST_VTBL struct IUpdateExceptionCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,index,retval) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Count(This,retval) )
EXTERN_C const IID IID_ISearchResult;
    typedef struct ISearchResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISearchResult * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISearchResult * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISearchResult * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISearchResult * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ResultCode )(
            __RPC__in ISearchResult * This,
                                __RPC__out OperationResultCode *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RootCategories )(
            __RPC__in ISearchResult * This,
                                __RPC__deref_out_opt ICategoryCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Updates )(
            __RPC__in ISearchResult * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Warnings )(
            __RPC__in ISearchResult * This,
                                __RPC__deref_out_opt IUpdateExceptionCollection **retval);
        END_INTERFACE
    } ISearchResultVtbl;
    interface ISearchResult
    {
        CONST_VTBL struct ISearchResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ResultCode(This,retval) )
    ( (This)->lpVtbl -> get_RootCategories(This,retval) )
    ( (This)->lpVtbl -> get_Updates(This,retval) )
    ( (This)->lpVtbl -> get_Warnings(This,retval) )
EXTERN_C const IID IID_ISearchJob;
    typedef struct ISearchJobVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchJob * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchJob * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchJob * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISearchJob * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISearchJob * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISearchJob * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISearchJob * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_AsyncState )(
            __RPC__in ISearchJob * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsCompleted )(
            __RPC__in ISearchJob * This,
                                __RPC__out VARIANT_BOOL *retval);
                               HRESULT ( STDMETHODCALLTYPE *CleanUp )(
            __RPC__in ISearchJob * This);
                               HRESULT ( STDMETHODCALLTYPE *RequestAbort )(
            __RPC__in ISearchJob * This);
        END_INTERFACE
    } ISearchJobVtbl;
    interface ISearchJob
    {
        CONST_VTBL struct ISearchJobVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AsyncState(This,retval) )
    ( (This)->lpVtbl -> get_IsCompleted(This,retval) )
    ( (This)->lpVtbl -> CleanUp(This) )
    ( (This)->lpVtbl -> RequestAbort(This) )
EXTERN_C const IID IID_ISearchCompletedCallbackArgs;
    typedef struct ISearchCompletedCallbackArgsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchCompletedCallbackArgs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchCompletedCallbackArgs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchCompletedCallbackArgs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISearchCompletedCallbackArgs * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISearchCompletedCallbackArgs * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISearchCompletedCallbackArgs * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISearchCompletedCallbackArgs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } ISearchCompletedCallbackArgsVtbl;
    interface ISearchCompletedCallbackArgs
    {
        CONST_VTBL struct ISearchCompletedCallbackArgsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_ISearchCompletedCallback;
    typedef struct ISearchCompletedCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchCompletedCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchCompletedCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchCompletedCallback * This);
                               HRESULT ( STDMETHODCALLTYPE *Invoke )(
            __RPC__in ISearchCompletedCallback * This,
                       __RPC__in_opt ISearchJob *searchJob,
                       __RPC__in_opt ISearchCompletedCallbackArgs *callbackArgs);
        END_INTERFACE
    } ISearchCompletedCallbackVtbl;
    interface ISearchCompletedCallback
    {
        CONST_VTBL struct ISearchCompletedCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,searchJob,callbackArgs) )
EXTERN_C const IID IID_IUpdateHistoryEntry;
    typedef struct IUpdateHistoryEntryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateHistoryEntry * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateHistoryEntry * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateHistoryEntry * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateHistoryEntry * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateHistoryEntry * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateHistoryEntry * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateHistoryEntry * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Operation )(
            __RPC__in IUpdateHistoryEntry * This,
                                __RPC__out UpdateOperation *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ResultCode )(
            __RPC__in IUpdateHistoryEntry * This,
                                __RPC__out OperationResultCode *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_HResult )(
            __RPC__in IUpdateHistoryEntry * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Date )(
            __RPC__in IUpdateHistoryEntry * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UpdateIdentity )(
            __RPC__in IUpdateHistoryEntry * This,
                                __RPC__deref_out_opt IUpdateIdentity **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IUpdateHistoryEntry * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IUpdateHistoryEntry * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UnmappedResultCode )(
            __RPC__in IUpdateHistoryEntry * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )(
            __RPC__in IUpdateHistoryEntry * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServerSelection )(
            __RPC__in IUpdateHistoryEntry * This,
                                __RPC__out ServerSelection *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServiceID )(
            __RPC__in IUpdateHistoryEntry * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )(
            __RPC__in IUpdateHistoryEntry * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )(
            __RPC__in IUpdateHistoryEntry * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )(
            __RPC__in IUpdateHistoryEntry * This,
                                __RPC__deref_out_opt BSTR *retval);
        END_INTERFACE
    } IUpdateHistoryEntryVtbl;
    interface IUpdateHistoryEntry
    {
        CONST_VTBL struct IUpdateHistoryEntryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Operation(This,retval) )
    ( (This)->lpVtbl -> get_ResultCode(This,retval) )
    ( (This)->lpVtbl -> get_HResult(This,retval) )
    ( (This)->lpVtbl -> get_Date(This,retval) )
    ( (This)->lpVtbl -> get_UpdateIdentity(This,retval) )
    ( (This)->lpVtbl -> get_Title(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> get_UnmappedResultCode(This,retval) )
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
    ( (This)->lpVtbl -> get_ServerSelection(This,retval) )
    ( (This)->lpVtbl -> get_ServiceID(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
EXTERN_C const IID IID_IUpdateHistoryEntry2;
    typedef struct IUpdateHistoryEntry2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateHistoryEntry2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateHistoryEntry2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateHistoryEntry2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateHistoryEntry2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateHistoryEntry2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateHistoryEntry2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateHistoryEntry2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Operation )(
            __RPC__in IUpdateHistoryEntry2 * This,
                                __RPC__out UpdateOperation *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ResultCode )(
            __RPC__in IUpdateHistoryEntry2 * This,
                                __RPC__out OperationResultCode *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_HResult )(
            __RPC__in IUpdateHistoryEntry2 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Date )(
            __RPC__in IUpdateHistoryEntry2 * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UpdateIdentity )(
            __RPC__in IUpdateHistoryEntry2 * This,
                                __RPC__deref_out_opt IUpdateIdentity **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IUpdateHistoryEntry2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IUpdateHistoryEntry2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UnmappedResultCode )(
            __RPC__in IUpdateHistoryEntry2 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )(
            __RPC__in IUpdateHistoryEntry2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServerSelection )(
            __RPC__in IUpdateHistoryEntry2 * This,
                                __RPC__out ServerSelection *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServiceID )(
            __RPC__in IUpdateHistoryEntry2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )(
            __RPC__in IUpdateHistoryEntry2 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )(
            __RPC__in IUpdateHistoryEntry2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )(
            __RPC__in IUpdateHistoryEntry2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Categories )(
            __RPC__in IUpdateHistoryEntry2 * This,
                                __RPC__deref_out_opt ICategoryCollection **retval);
        END_INTERFACE
    } IUpdateHistoryEntry2Vtbl;
    interface IUpdateHistoryEntry2
    {
        CONST_VTBL struct IUpdateHistoryEntry2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Operation(This,retval) )
    ( (This)->lpVtbl -> get_ResultCode(This,retval) )
    ( (This)->lpVtbl -> get_HResult(This,retval) )
    ( (This)->lpVtbl -> get_Date(This,retval) )
    ( (This)->lpVtbl -> get_UpdateIdentity(This,retval) )
    ( (This)->lpVtbl -> get_Title(This,retval) )
    ( (This)->lpVtbl -> get_Description(This,retval) )
    ( (This)->lpVtbl -> get_UnmappedResultCode(This,retval) )
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
    ( (This)->lpVtbl -> get_ServerSelection(This,retval) )
    ( (This)->lpVtbl -> get_ServiceID(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
    ( (This)->lpVtbl -> get_Categories(This,retval) )
EXTERN_C const IID IID_IUpdateHistoryEntryCollection;
    typedef struct IUpdateHistoryEntryCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateHistoryEntryCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateHistoryEntryCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateHistoryEntryCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateHistoryEntryCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateHistoryEntryCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateHistoryEntryCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateHistoryEntryCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IUpdateHistoryEntryCollection * This,
                       LONG index,
                                __RPC__deref_out_opt IUpdateHistoryEntry **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IUpdateHistoryEntryCollection * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IUpdateHistoryEntryCollection * This,
                                __RPC__out LONG *retval);
        END_INTERFACE
    } IUpdateHistoryEntryCollectionVtbl;
    interface IUpdateHistoryEntryCollection
    {
        CONST_VTBL struct IUpdateHistoryEntryCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,index,retval) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Count(This,retval) )
EXTERN_C const IID IID_IUpdateSearcher;
    typedef struct IUpdateSearcherVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateSearcher * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateSearcher * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateSearcher * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateSearcher * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateSearcher * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateSearcher * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateSearcher * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanAutomaticallyUpgradeService )(
            __RPC__in IUpdateSearcher * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_CanAutomaticallyUpgradeService )(
            __RPC__in IUpdateSearcher * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )(
            __RPC__in IUpdateSearcher * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )(
            __RPC__in IUpdateSearcher * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IncludePotentiallySupersededUpdates )(
            __RPC__in IUpdateSearcher * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IncludePotentiallySupersededUpdates )(
            __RPC__in IUpdateSearcher * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServerSelection )(
            __RPC__in IUpdateSearcher * This,
                                __RPC__out ServerSelection *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ServerSelection )(
            __RPC__in IUpdateSearcher * This,
                       ServerSelection value);
                               HRESULT ( STDMETHODCALLTYPE *BeginSearch )(
            __RPC__in IUpdateSearcher * This,
                       __RPC__in BSTR criteria,
                       __RPC__in_opt IUnknown *onCompleted,
                       VARIANT state,
                                __RPC__deref_out_opt ISearchJob **retval);
                               HRESULT ( STDMETHODCALLTYPE *EndSearch )(
            __RPC__in IUpdateSearcher * This,
                       __RPC__in_opt ISearchJob *searchJob,
                                __RPC__deref_out_opt ISearchResult **retval);
                               HRESULT ( STDMETHODCALLTYPE *EscapeString )(
            __RPC__in IUpdateSearcher * This,
                       __RPC__in BSTR unescaped,
                                __RPC__deref_out_opt BSTR *retval);
                               HRESULT ( STDMETHODCALLTYPE *QueryHistory )(
            __RPC__in IUpdateSearcher * This,
                       LONG startIndex,
                       LONG count,
                                __RPC__deref_out_opt IUpdateHistoryEntryCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *Search )(
            __RPC__in IUpdateSearcher * This,
                       __RPC__in BSTR criteria,
                                __RPC__deref_out_opt ISearchResult **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Online )(
            __RPC__in IUpdateSearcher * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_Online )(
            __RPC__in IUpdateSearcher * This,
                       VARIANT_BOOL value);
                               HRESULT ( STDMETHODCALLTYPE *GetTotalHistoryCount )(
            __RPC__in IUpdateSearcher * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServiceID )(
            __RPC__in IUpdateSearcher * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ServiceID )(
            __RPC__in IUpdateSearcher * This,
                       __RPC__in BSTR value);
        END_INTERFACE
    } IUpdateSearcherVtbl;
    interface IUpdateSearcher
    {
        CONST_VTBL struct IUpdateSearcherVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CanAutomaticallyUpgradeService(This,retval) )
    ( (This)->lpVtbl -> put_CanAutomaticallyUpgradeService(This,value) )
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
    ( (This)->lpVtbl -> get_IncludePotentiallySupersededUpdates(This,retval) )
    ( (This)->lpVtbl -> put_IncludePotentiallySupersededUpdates(This,value) )
    ( (This)->lpVtbl -> get_ServerSelection(This,retval) )
    ( (This)->lpVtbl -> put_ServerSelection(This,value) )
    ( (This)->lpVtbl -> BeginSearch(This,criteria,onCompleted,state,retval) )
    ( (This)->lpVtbl -> EndSearch(This,searchJob,retval) )
    ( (This)->lpVtbl -> EscapeString(This,unescaped,retval) )
    ( (This)->lpVtbl -> QueryHistory(This,startIndex,count,retval) )
    ( (This)->lpVtbl -> Search(This,criteria,retval) )
    ( (This)->lpVtbl -> get_Online(This,retval) )
    ( (This)->lpVtbl -> put_Online(This,value) )
    ( (This)->lpVtbl -> GetTotalHistoryCount(This,retval) )
    ( (This)->lpVtbl -> get_ServiceID(This,retval) )
    ( (This)->lpVtbl -> put_ServiceID(This,value) )
EXTERN_C const IID IID_IUpdateSearcher2;
    typedef struct IUpdateSearcher2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateSearcher2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateSearcher2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateSearcher2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateSearcher2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateSearcher2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateSearcher2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateSearcher2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanAutomaticallyUpgradeService )(
            __RPC__in IUpdateSearcher2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_CanAutomaticallyUpgradeService )(
            __RPC__in IUpdateSearcher2 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )(
            __RPC__in IUpdateSearcher2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )(
            __RPC__in IUpdateSearcher2 * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IncludePotentiallySupersededUpdates )(
            __RPC__in IUpdateSearcher2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IncludePotentiallySupersededUpdates )(
            __RPC__in IUpdateSearcher2 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServerSelection )(
            __RPC__in IUpdateSearcher2 * This,
                                __RPC__out ServerSelection *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ServerSelection )(
            __RPC__in IUpdateSearcher2 * This,
                       ServerSelection value);
                               HRESULT ( STDMETHODCALLTYPE *BeginSearch )(
            __RPC__in IUpdateSearcher2 * This,
                       __RPC__in BSTR criteria,
                       __RPC__in_opt IUnknown *onCompleted,
                       VARIANT state,
                                __RPC__deref_out_opt ISearchJob **retval);
                               HRESULT ( STDMETHODCALLTYPE *EndSearch )(
            __RPC__in IUpdateSearcher2 * This,
                       __RPC__in_opt ISearchJob *searchJob,
                                __RPC__deref_out_opt ISearchResult **retval);
                               HRESULT ( STDMETHODCALLTYPE *EscapeString )(
            __RPC__in IUpdateSearcher2 * This,
                       __RPC__in BSTR unescaped,
                                __RPC__deref_out_opt BSTR *retval);
                               HRESULT ( STDMETHODCALLTYPE *QueryHistory )(
            __RPC__in IUpdateSearcher2 * This,
                       LONG startIndex,
                       LONG count,
                                __RPC__deref_out_opt IUpdateHistoryEntryCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *Search )(
            __RPC__in IUpdateSearcher2 * This,
                       __RPC__in BSTR criteria,
                                __RPC__deref_out_opt ISearchResult **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Online )(
            __RPC__in IUpdateSearcher2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_Online )(
            __RPC__in IUpdateSearcher2 * This,
                       VARIANT_BOOL value);
                               HRESULT ( STDMETHODCALLTYPE *GetTotalHistoryCount )(
            __RPC__in IUpdateSearcher2 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServiceID )(
            __RPC__in IUpdateSearcher2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ServiceID )(
            __RPC__in IUpdateSearcher2 * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IgnoreDownloadPriority )(
            __RPC__in IUpdateSearcher2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IgnoreDownloadPriority )(
            __RPC__in IUpdateSearcher2 * This,
                       VARIANT_BOOL value);
        END_INTERFACE
    } IUpdateSearcher2Vtbl;
    interface IUpdateSearcher2
    {
        CONST_VTBL struct IUpdateSearcher2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CanAutomaticallyUpgradeService(This,retval) )
    ( (This)->lpVtbl -> put_CanAutomaticallyUpgradeService(This,value) )
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
    ( (This)->lpVtbl -> get_IncludePotentiallySupersededUpdates(This,retval) )
    ( (This)->lpVtbl -> put_IncludePotentiallySupersededUpdates(This,value) )
    ( (This)->lpVtbl -> get_ServerSelection(This,retval) )
    ( (This)->lpVtbl -> put_ServerSelection(This,value) )
    ( (This)->lpVtbl -> BeginSearch(This,criteria,onCompleted,state,retval) )
    ( (This)->lpVtbl -> EndSearch(This,searchJob,retval) )
    ( (This)->lpVtbl -> EscapeString(This,unescaped,retval) )
    ( (This)->lpVtbl -> QueryHistory(This,startIndex,count,retval) )
    ( (This)->lpVtbl -> Search(This,criteria,retval) )
    ( (This)->lpVtbl -> get_Online(This,retval) )
    ( (This)->lpVtbl -> put_Online(This,value) )
    ( (This)->lpVtbl -> GetTotalHistoryCount(This,retval) )
    ( (This)->lpVtbl -> get_ServiceID(This,retval) )
    ( (This)->lpVtbl -> put_ServiceID(This,value) )
    ( (This)->lpVtbl -> get_IgnoreDownloadPriority(This,retval) )
    ( (This)->lpVtbl -> put_IgnoreDownloadPriority(This,value) )
EXTERN_C const IID IID_IUpdateSearcher3;
    typedef struct IUpdateSearcher3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateSearcher3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateSearcher3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateSearcher3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateSearcher3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateSearcher3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateSearcher3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateSearcher3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanAutomaticallyUpgradeService )(
            __RPC__in IUpdateSearcher3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_CanAutomaticallyUpgradeService )(
            __RPC__in IUpdateSearcher3 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )(
            __RPC__in IUpdateSearcher3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )(
            __RPC__in IUpdateSearcher3 * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IncludePotentiallySupersededUpdates )(
            __RPC__in IUpdateSearcher3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IncludePotentiallySupersededUpdates )(
            __RPC__in IUpdateSearcher3 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServerSelection )(
            __RPC__in IUpdateSearcher3 * This,
                                __RPC__out ServerSelection *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ServerSelection )(
            __RPC__in IUpdateSearcher3 * This,
                       ServerSelection value);
                               HRESULT ( STDMETHODCALLTYPE *BeginSearch )(
            __RPC__in IUpdateSearcher3 * This,
                       __RPC__in BSTR criteria,
                       __RPC__in_opt IUnknown *onCompleted,
                       VARIANT state,
                                __RPC__deref_out_opt ISearchJob **retval);
                               HRESULT ( STDMETHODCALLTYPE *EndSearch )(
            __RPC__in IUpdateSearcher3 * This,
                       __RPC__in_opt ISearchJob *searchJob,
                                __RPC__deref_out_opt ISearchResult **retval);
                               HRESULT ( STDMETHODCALLTYPE *EscapeString )(
            __RPC__in IUpdateSearcher3 * This,
                       __RPC__in BSTR unescaped,
                                __RPC__deref_out_opt BSTR *retval);
                               HRESULT ( STDMETHODCALLTYPE *QueryHistory )(
            __RPC__in IUpdateSearcher3 * This,
                       LONG startIndex,
                       LONG count,
                                __RPC__deref_out_opt IUpdateHistoryEntryCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *Search )(
            __RPC__in IUpdateSearcher3 * This,
                       __RPC__in BSTR criteria,
                                __RPC__deref_out_opt ISearchResult **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Online )(
            __RPC__in IUpdateSearcher3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_Online )(
            __RPC__in IUpdateSearcher3 * This,
                       VARIANT_BOOL value);
                               HRESULT ( STDMETHODCALLTYPE *GetTotalHistoryCount )(
            __RPC__in IUpdateSearcher3 * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServiceID )(
            __RPC__in IUpdateSearcher3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ServiceID )(
            __RPC__in IUpdateSearcher3 * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IgnoreDownloadPriority )(
            __RPC__in IUpdateSearcher3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IgnoreDownloadPriority )(
            __RPC__in IUpdateSearcher3 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchScope )(
            __RPC__in IUpdateSearcher3 * This,
                                __RPC__out SearchScope *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_SearchScope )(
            __RPC__in IUpdateSearcher3 * This,
                       SearchScope value);
        END_INTERFACE
    } IUpdateSearcher3Vtbl;
    interface IUpdateSearcher3
    {
        CONST_VTBL struct IUpdateSearcher3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CanAutomaticallyUpgradeService(This,retval) )
    ( (This)->lpVtbl -> put_CanAutomaticallyUpgradeService(This,value) )
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
    ( (This)->lpVtbl -> get_IncludePotentiallySupersededUpdates(This,retval) )
    ( (This)->lpVtbl -> put_IncludePotentiallySupersededUpdates(This,value) )
    ( (This)->lpVtbl -> get_ServerSelection(This,retval) )
    ( (This)->lpVtbl -> put_ServerSelection(This,value) )
    ( (This)->lpVtbl -> BeginSearch(This,criteria,onCompleted,state,retval) )
    ( (This)->lpVtbl -> EndSearch(This,searchJob,retval) )
    ( (This)->lpVtbl -> EscapeString(This,unescaped,retval) )
    ( (This)->lpVtbl -> QueryHistory(This,startIndex,count,retval) )
    ( (This)->lpVtbl -> Search(This,criteria,retval) )
    ( (This)->lpVtbl -> get_Online(This,retval) )
    ( (This)->lpVtbl -> put_Online(This,value) )
    ( (This)->lpVtbl -> GetTotalHistoryCount(This,retval) )
    ( (This)->lpVtbl -> get_ServiceID(This,retval) )
    ( (This)->lpVtbl -> put_ServiceID(This,value) )
    ( (This)->lpVtbl -> get_IgnoreDownloadPriority(This,retval) )
    ( (This)->lpVtbl -> put_IgnoreDownloadPriority(This,value) )
    ( (This)->lpVtbl -> get_SearchScope(This,retval) )
    ( (This)->lpVtbl -> put_SearchScope(This,value) )
EXTERN_C const IID IID_IUpdateDownloadResult;
    typedef struct IUpdateDownloadResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateDownloadResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateDownloadResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateDownloadResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateDownloadResult * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateDownloadResult * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateDownloadResult * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateDownloadResult * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_HResult )(
            __RPC__in IUpdateDownloadResult * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ResultCode )(
            __RPC__in IUpdateDownloadResult * This,
                                __RPC__out OperationResultCode *retval);
        END_INTERFACE
    } IUpdateDownloadResultVtbl;
    interface IUpdateDownloadResult
    {
        CONST_VTBL struct IUpdateDownloadResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_HResult(This,retval) )
    ( (This)->lpVtbl -> get_ResultCode(This,retval) )
EXTERN_C const IID IID_IDownloadResult;
    typedef struct IDownloadResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDownloadResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDownloadResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDownloadResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDownloadResult * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDownloadResult * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDownloadResult * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDownloadResult * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_HResult )(
            __RPC__in IDownloadResult * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ResultCode )(
            __RPC__in IDownloadResult * This,
                                __RPC__out OperationResultCode *retval);
                               HRESULT ( STDMETHODCALLTYPE *GetUpdateResult )(
            __RPC__in IDownloadResult * This,
                       LONG updateIndex,
                                __RPC__deref_out_opt IUpdateDownloadResult **retval);
        END_INTERFACE
    } IDownloadResultVtbl;
    interface IDownloadResult
    {
        CONST_VTBL struct IDownloadResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_HResult(This,retval) )
    ( (This)->lpVtbl -> get_ResultCode(This,retval) )
    ( (This)->lpVtbl -> GetUpdateResult(This,updateIndex,retval) )
EXTERN_C const IID IID_IDownloadProgress;
    typedef struct IDownloadProgressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDownloadProgress * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDownloadProgress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDownloadProgress * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDownloadProgress * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDownloadProgress * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDownloadProgress * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDownloadProgress * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentUpdateBytesDownloaded )(
            __RPC__in IDownloadProgress * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentUpdateBytesToDownload )(
            __RPC__in IDownloadProgress * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentUpdateIndex )(
            __RPC__in IDownloadProgress * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_PercentComplete )(
            __RPC__in IDownloadProgress * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalBytesDownloaded )(
            __RPC__in IDownloadProgress * This,
                                __RPC__out DECIMAL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalBytesToDownload )(
            __RPC__in IDownloadProgress * This,
                                __RPC__out DECIMAL *retval);
                               HRESULT ( STDMETHODCALLTYPE *GetUpdateResult )(
            __RPC__in IDownloadProgress * This,
                       LONG updateIndex,
                                __RPC__deref_out_opt IUpdateDownloadResult **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentUpdateDownloadPhase )(
            __RPC__in IDownloadProgress * This,
                                __RPC__out DownloadPhase *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentUpdatePercentComplete )(
            __RPC__in IDownloadProgress * This,
                                __RPC__out LONG *retval);
        END_INTERFACE
    } IDownloadProgressVtbl;
    interface IDownloadProgress
    {
        CONST_VTBL struct IDownloadProgressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CurrentUpdateBytesDownloaded(This,retval) )
    ( (This)->lpVtbl -> get_CurrentUpdateBytesToDownload(This,retval) )
    ( (This)->lpVtbl -> get_CurrentUpdateIndex(This,retval) )
    ( (This)->lpVtbl -> get_PercentComplete(This,retval) )
    ( (This)->lpVtbl -> get_TotalBytesDownloaded(This,retval) )
    ( (This)->lpVtbl -> get_TotalBytesToDownload(This,retval) )
    ( (This)->lpVtbl -> GetUpdateResult(This,updateIndex,retval) )
    ( (This)->lpVtbl -> get_CurrentUpdateDownloadPhase(This,retval) )
    ( (This)->lpVtbl -> get_CurrentUpdatePercentComplete(This,retval) )
EXTERN_C const IID IID_IDownloadJob;
    typedef struct IDownloadJobVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDownloadJob * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDownloadJob * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDownloadJob * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDownloadJob * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDownloadJob * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDownloadJob * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDownloadJob * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_AsyncState )(
            __RPC__in IDownloadJob * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsCompleted )(
            __RPC__in IDownloadJob * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Updates )(
            __RPC__in IDownloadJob * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *CleanUp )(
            __RPC__in IDownloadJob * This);
                               HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IDownloadJob * This,
                                __RPC__deref_out_opt IDownloadProgress **retval);
                               HRESULT ( STDMETHODCALLTYPE *RequestAbort )(
            __RPC__in IDownloadJob * This);
        END_INTERFACE
    } IDownloadJobVtbl;
    interface IDownloadJob
    {
        CONST_VTBL struct IDownloadJobVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AsyncState(This,retval) )
    ( (This)->lpVtbl -> get_IsCompleted(This,retval) )
    ( (This)->lpVtbl -> get_Updates(This,retval) )
    ( (This)->lpVtbl -> CleanUp(This) )
    ( (This)->lpVtbl -> GetProgress(This,retval) )
    ( (This)->lpVtbl -> RequestAbort(This) )
EXTERN_C const IID IID_IDownloadCompletedCallbackArgs;
    typedef struct IDownloadCompletedCallbackArgsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDownloadCompletedCallbackArgs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDownloadCompletedCallbackArgs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDownloadCompletedCallbackArgs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDownloadCompletedCallbackArgs * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDownloadCompletedCallbackArgs * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDownloadCompletedCallbackArgs * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDownloadCompletedCallbackArgs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IDownloadCompletedCallbackArgsVtbl;
    interface IDownloadCompletedCallbackArgs
    {
        CONST_VTBL struct IDownloadCompletedCallbackArgsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IDownloadCompletedCallback;
    typedef struct IDownloadCompletedCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDownloadCompletedCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDownloadCompletedCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDownloadCompletedCallback * This);
                               HRESULT ( STDMETHODCALLTYPE *Invoke )(
            __RPC__in IDownloadCompletedCallback * This,
                       __RPC__in_opt IDownloadJob *downloadJob,
                       __RPC__in_opt IDownloadCompletedCallbackArgs *callbackArgs);
        END_INTERFACE
    } IDownloadCompletedCallbackVtbl;
    interface IDownloadCompletedCallback
    {
        CONST_VTBL struct IDownloadCompletedCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,downloadJob,callbackArgs) )
EXTERN_C const IID IID_IDownloadProgressChangedCallbackArgs;
    typedef struct IDownloadProgressChangedCallbackArgsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDownloadProgressChangedCallbackArgs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDownloadProgressChangedCallbackArgs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDownloadProgressChangedCallbackArgs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDownloadProgressChangedCallbackArgs * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDownloadProgressChangedCallbackArgs * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDownloadProgressChangedCallbackArgs * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDownloadProgressChangedCallbackArgs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Progress )(
            __RPC__in IDownloadProgressChangedCallbackArgs * This,
                                __RPC__deref_out_opt IDownloadProgress **retval);
        END_INTERFACE
    } IDownloadProgressChangedCallbackArgsVtbl;
    interface IDownloadProgressChangedCallbackArgs
    {
        CONST_VTBL struct IDownloadProgressChangedCallbackArgsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Progress(This,retval) )
EXTERN_C const IID IID_IDownloadProgressChangedCallback;
    typedef struct IDownloadProgressChangedCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDownloadProgressChangedCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDownloadProgressChangedCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDownloadProgressChangedCallback * This);
                               HRESULT ( STDMETHODCALLTYPE *Invoke )(
            __RPC__in IDownloadProgressChangedCallback * This,
                       __RPC__in_opt IDownloadJob *downloadJob,
                       __RPC__in_opt IDownloadProgressChangedCallbackArgs *callbackArgs);
        END_INTERFACE
    } IDownloadProgressChangedCallbackVtbl;
    interface IDownloadProgressChangedCallback
    {
        CONST_VTBL struct IDownloadProgressChangedCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,downloadJob,callbackArgs) )
EXTERN_C const IID IID_IUpdateDownloader;
    typedef struct IUpdateDownloaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateDownloader * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateDownloader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateDownloader * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateDownloader * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateDownloader * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateDownloader * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateDownloader * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )(
            __RPC__in IUpdateDownloader * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )(
            __RPC__in IUpdateDownloader * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsForced )(
            __RPC__in IUpdateDownloader * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsForced )(
            __RPC__in IUpdateDownloader * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IUpdateDownloader * This,
                                __RPC__out DownloadPriority *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_Priority )(
            __RPC__in IUpdateDownloader * This,
                       DownloadPriority value);
                                        HRESULT ( STDMETHODCALLTYPE *get_Updates )(
            __RPC__in IUpdateDownloader * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_Updates )(
            __RPC__in IUpdateDownloader * This,
                       __RPC__in_opt IUpdateCollection *value);
                               HRESULT ( STDMETHODCALLTYPE *BeginDownload )(
            __RPC__in IUpdateDownloader * This,
                       __RPC__in_opt IUnknown *onProgressChanged,
                       __RPC__in_opt IUnknown *onCompleted,
                       VARIANT state,
                                __RPC__deref_out_opt IDownloadJob **retval);
                               HRESULT ( STDMETHODCALLTYPE *Download )(
            __RPC__in IUpdateDownloader * This,
                                __RPC__deref_out_opt IDownloadResult **retval);
                               HRESULT ( STDMETHODCALLTYPE *EndDownload )(
            __RPC__in IUpdateDownloader * This,
                       __RPC__in_opt IDownloadJob *value,
                                __RPC__deref_out_opt IDownloadResult **retval);
        END_INTERFACE
    } IUpdateDownloaderVtbl;
    interface IUpdateDownloader
    {
        CONST_VTBL struct IUpdateDownloaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
    ( (This)->lpVtbl -> get_IsForced(This,retval) )
    ( (This)->lpVtbl -> put_IsForced(This,value) )
    ( (This)->lpVtbl -> get_Priority(This,retval) )
    ( (This)->lpVtbl -> put_Priority(This,value) )
    ( (This)->lpVtbl -> get_Updates(This,retval) )
    ( (This)->lpVtbl -> put_Updates(This,value) )
    ( (This)->lpVtbl -> BeginDownload(This,onProgressChanged,onCompleted,state,retval) )
    ( (This)->lpVtbl -> Download(This,retval) )
    ( (This)->lpVtbl -> EndDownload(This,value,retval) )
EXTERN_C const IID IID_IUpdateInstallationResult;
    typedef struct IUpdateInstallationResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateInstallationResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateInstallationResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateInstallationResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateInstallationResult * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateInstallationResult * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateInstallationResult * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateInstallationResult * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_HResult )(
            __RPC__in IUpdateInstallationResult * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )(
            __RPC__in IUpdateInstallationResult * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ResultCode )(
            __RPC__in IUpdateInstallationResult * This,
                                __RPC__out OperationResultCode *retval);
        END_INTERFACE
    } IUpdateInstallationResultVtbl;
    interface IUpdateInstallationResult
    {
        CONST_VTBL struct IUpdateInstallationResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_HResult(This,retval) )
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
    ( (This)->lpVtbl -> get_ResultCode(This,retval) )
EXTERN_C const IID IID_IInstallationResult;
    typedef struct IInstallationResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInstallationResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInstallationResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInstallationResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInstallationResult * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInstallationResult * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInstallationResult * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInstallationResult * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_HResult )(
            __RPC__in IInstallationResult * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )(
            __RPC__in IInstallationResult * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ResultCode )(
            __RPC__in IInstallationResult * This,
                                __RPC__out OperationResultCode *retval);
                               HRESULT ( STDMETHODCALLTYPE *GetUpdateResult )(
            __RPC__in IInstallationResult * This,
                       LONG updateIndex,
                                __RPC__deref_out_opt IUpdateInstallationResult **retval);
        END_INTERFACE
    } IInstallationResultVtbl;
    interface IInstallationResult
    {
        CONST_VTBL struct IInstallationResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_HResult(This,retval) )
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
    ( (This)->lpVtbl -> get_ResultCode(This,retval) )
    ( (This)->lpVtbl -> GetUpdateResult(This,updateIndex,retval) )
EXTERN_C const IID IID_IInstallationProgress;
    typedef struct IInstallationProgressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInstallationProgress * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInstallationProgress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInstallationProgress * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInstallationProgress * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInstallationProgress * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInstallationProgress * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInstallationProgress * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentUpdateIndex )(
            __RPC__in IInstallationProgress * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentUpdatePercentComplete )(
            __RPC__in IInstallationProgress * This,
                                __RPC__out LONG *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_PercentComplete )(
            __RPC__in IInstallationProgress * This,
                                __RPC__out LONG *retval);
                               HRESULT ( STDMETHODCALLTYPE *GetUpdateResult )(
            __RPC__in IInstallationProgress * This,
                       LONG updateIndex,
                                __RPC__deref_out_opt IUpdateInstallationResult **retval);
        END_INTERFACE
    } IInstallationProgressVtbl;
    interface IInstallationProgress
    {
        CONST_VTBL struct IInstallationProgressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CurrentUpdateIndex(This,retval) )
    ( (This)->lpVtbl -> get_CurrentUpdatePercentComplete(This,retval) )
    ( (This)->lpVtbl -> get_PercentComplete(This,retval) )
    ( (This)->lpVtbl -> GetUpdateResult(This,updateIndex,retval) )
EXTERN_C const IID IID_IInstallationJob;
    typedef struct IInstallationJobVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInstallationJob * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInstallationJob * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInstallationJob * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInstallationJob * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInstallationJob * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInstallationJob * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInstallationJob * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_AsyncState )(
            __RPC__in IInstallationJob * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsCompleted )(
            __RPC__in IInstallationJob * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Updates )(
            __RPC__in IInstallationJob * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *CleanUp )(
            __RPC__in IInstallationJob * This);
                               HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IInstallationJob * This,
                                __RPC__deref_out_opt IInstallationProgress **retval);
                               HRESULT ( STDMETHODCALLTYPE *RequestAbort )(
            __RPC__in IInstallationJob * This);
        END_INTERFACE
    } IInstallationJobVtbl;
    interface IInstallationJob
    {
        CONST_VTBL struct IInstallationJobVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AsyncState(This,retval) )
    ( (This)->lpVtbl -> get_IsCompleted(This,retval) )
    ( (This)->lpVtbl -> get_Updates(This,retval) )
    ( (This)->lpVtbl -> CleanUp(This) )
    ( (This)->lpVtbl -> GetProgress(This,retval) )
    ( (This)->lpVtbl -> RequestAbort(This) )
EXTERN_C const IID IID_IInstallationCompletedCallbackArgs;
    typedef struct IInstallationCompletedCallbackArgsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInstallationCompletedCallbackArgs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInstallationCompletedCallbackArgs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInstallationCompletedCallbackArgs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInstallationCompletedCallbackArgs * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInstallationCompletedCallbackArgs * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInstallationCompletedCallbackArgs * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInstallationCompletedCallbackArgs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IInstallationCompletedCallbackArgsVtbl;
    interface IInstallationCompletedCallbackArgs
    {
        CONST_VTBL struct IInstallationCompletedCallbackArgsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IInstallationCompletedCallback;
    typedef struct IInstallationCompletedCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInstallationCompletedCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInstallationCompletedCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInstallationCompletedCallback * This);
                               HRESULT ( STDMETHODCALLTYPE *Invoke )(
            __RPC__in IInstallationCompletedCallback * This,
                       __RPC__in_opt IInstallationJob *installationJob,
                       __RPC__in_opt IInstallationCompletedCallbackArgs *callbackArgs);
        END_INTERFACE
    } IInstallationCompletedCallbackVtbl;
    interface IInstallationCompletedCallback
    {
        CONST_VTBL struct IInstallationCompletedCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,installationJob,callbackArgs) )
EXTERN_C const IID IID_IInstallationProgressChangedCallbackArgs;
    typedef struct IInstallationProgressChangedCallbackArgsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInstallationProgressChangedCallbackArgs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInstallationProgressChangedCallbackArgs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInstallationProgressChangedCallbackArgs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInstallationProgressChangedCallbackArgs * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInstallationProgressChangedCallbackArgs * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInstallationProgressChangedCallbackArgs * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInstallationProgressChangedCallbackArgs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Progress )(
            __RPC__in IInstallationProgressChangedCallbackArgs * This,
                                __RPC__deref_out_opt IInstallationProgress **retval);
        END_INTERFACE
    } IInstallationProgressChangedCallbackArgsVtbl;
    interface IInstallationProgressChangedCallbackArgs
    {
        CONST_VTBL struct IInstallationProgressChangedCallbackArgsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Progress(This,retval) )
EXTERN_C const IID IID_IInstallationProgressChangedCallback;
    typedef struct IInstallationProgressChangedCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInstallationProgressChangedCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInstallationProgressChangedCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInstallationProgressChangedCallback * This);
                               HRESULT ( STDMETHODCALLTYPE *Invoke )(
            __RPC__in IInstallationProgressChangedCallback * This,
                       __RPC__in_opt IInstallationJob *installationJob,
                       __RPC__in_opt IInstallationProgressChangedCallbackArgs *callbackArgs);
        END_INTERFACE
    } IInstallationProgressChangedCallbackVtbl;
    interface IInstallationProgressChangedCallback
    {
        CONST_VTBL struct IInstallationProgressChangedCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,installationJob,callbackArgs) )
EXTERN_C const IID IID_IUpdateInstaller;
    typedef struct IUpdateInstallerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateInstaller * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateInstaller * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateInstaller * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateInstaller * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateInstaller * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateInstaller * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateInstaller * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )(
            __RPC__in IUpdateInstaller * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )(
            __RPC__in IUpdateInstaller * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsForced )(
            __RPC__in IUpdateInstaller * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsForced )(
            __RPC__in IUpdateInstaller * This,
                       VARIANT_BOOL value);
                                                    HRESULT ( STDMETHODCALLTYPE *get_ParentHwnd )(
            __RPC__in IUpdateInstaller * This,
                                __RPC__deref_out_opt HWND *retval);
                                                    HRESULT ( STDMETHODCALLTYPE *put_ParentHwnd )(
            __RPC__in IUpdateInstaller * This,
                               __RPC__in_opt HWND value);
                                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IUpdateInstaller * This,
                               __RPC__in_opt IUnknown *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IUpdateInstaller * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Updates )(
            __RPC__in IUpdateInstaller * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_Updates )(
            __RPC__in IUpdateInstaller * This,
                       __RPC__in_opt IUpdateCollection *value);
                               HRESULT ( STDMETHODCALLTYPE *BeginInstall )(
            __RPC__in IUpdateInstaller * This,
                       __RPC__in_opt IUnknown *onProgressChanged,
                       __RPC__in_opt IUnknown *onCompleted,
                       VARIANT state,
                                __RPC__deref_out_opt IInstallationJob **retval);
                               HRESULT ( STDMETHODCALLTYPE *BeginUninstall )(
            __RPC__in IUpdateInstaller * This,
                       __RPC__in_opt IUnknown *onProgressChanged,
                       __RPC__in_opt IUnknown *onCompleted,
                       VARIANT state,
                                __RPC__deref_out_opt IInstallationJob **retval);
                               HRESULT ( STDMETHODCALLTYPE *EndInstall )(
            __RPC__in IUpdateInstaller * This,
                       __RPC__in_opt IInstallationJob *value,
                                __RPC__deref_out_opt IInstallationResult **retval);
                               HRESULT ( STDMETHODCALLTYPE *EndUninstall )(
            __RPC__in IUpdateInstaller * This,
                       __RPC__in_opt IInstallationJob *value,
                                __RPC__deref_out_opt IInstallationResult **retval);
                               HRESULT ( STDMETHODCALLTYPE *Install )(
            __RPC__in IUpdateInstaller * This,
                                __RPC__deref_out_opt IInstallationResult **retval);
                               HRESULT ( STDMETHODCALLTYPE *RunWizard )(
            __RPC__in IUpdateInstaller * This,
                                             __RPC__in_opt BSTR dialogTitle,
                                __RPC__deref_out_opt IInstallationResult **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsBusy )(
            __RPC__in IUpdateInstaller * This,
                                __RPC__out VARIANT_BOOL *retval);
                               HRESULT ( STDMETHODCALLTYPE *Uninstall )(
            __RPC__in IUpdateInstaller * This,
                                __RPC__deref_out_opt IInstallationResult **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AllowSourcePrompts )(
            __RPC__in IUpdateInstaller * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_AllowSourcePrompts )(
            __RPC__in IUpdateInstaller * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_RebootRequiredBeforeInstallation )(
            __RPC__in IUpdateInstaller * This,
                                __RPC__out VARIANT_BOOL *retval);
        END_INTERFACE
    } IUpdateInstallerVtbl;
    interface IUpdateInstaller
    {
        CONST_VTBL struct IUpdateInstallerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
    ( (This)->lpVtbl -> get_IsForced(This,retval) )
    ( (This)->lpVtbl -> put_IsForced(This,value) )
    ( (This)->lpVtbl -> get_ParentHwnd(This,retval) )
    ( (This)->lpVtbl -> put_ParentHwnd(This,value) )
    ( (This)->lpVtbl -> put_ParentWindow(This,value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,retval) )
    ( (This)->lpVtbl -> get_Updates(This,retval) )
    ( (This)->lpVtbl -> put_Updates(This,value) )
    ( (This)->lpVtbl -> BeginInstall(This,onProgressChanged,onCompleted,state,retval) )
    ( (This)->lpVtbl -> BeginUninstall(This,onProgressChanged,onCompleted,state,retval) )
    ( (This)->lpVtbl -> EndInstall(This,value,retval) )
    ( (This)->lpVtbl -> EndUninstall(This,value,retval) )
    ( (This)->lpVtbl -> Install(This,retval) )
    ( (This)->lpVtbl -> RunWizard(This,dialogTitle,retval) )
    ( (This)->lpVtbl -> get_IsBusy(This,retval) )
    ( (This)->lpVtbl -> Uninstall(This,retval) )
    ( (This)->lpVtbl -> get_AllowSourcePrompts(This,retval) )
    ( (This)->lpVtbl -> put_AllowSourcePrompts(This,value) )
    ( (This)->lpVtbl -> get_RebootRequiredBeforeInstallation(This,retval) )
EXTERN_C const IID IID_IUpdateInstaller2;
    typedef struct IUpdateInstaller2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateInstaller2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateInstaller2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateInstaller2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateInstaller2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateInstaller2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateInstaller2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateInstaller2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )(
            __RPC__in IUpdateInstaller2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )(
            __RPC__in IUpdateInstaller2 * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsForced )(
            __RPC__in IUpdateInstaller2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsForced )(
            __RPC__in IUpdateInstaller2 * This,
                       VARIANT_BOOL value);
                                                    HRESULT ( STDMETHODCALLTYPE *get_ParentHwnd )(
            __RPC__in IUpdateInstaller2 * This,
                                __RPC__deref_out_opt HWND *retval);
                                                    HRESULT ( STDMETHODCALLTYPE *put_ParentHwnd )(
            __RPC__in IUpdateInstaller2 * This,
                               __RPC__in_opt HWND value);
                                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IUpdateInstaller2 * This,
                               __RPC__in_opt IUnknown *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IUpdateInstaller2 * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Updates )(
            __RPC__in IUpdateInstaller2 * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_Updates )(
            __RPC__in IUpdateInstaller2 * This,
                       __RPC__in_opt IUpdateCollection *value);
                               HRESULT ( STDMETHODCALLTYPE *BeginInstall )(
            __RPC__in IUpdateInstaller2 * This,
                       __RPC__in_opt IUnknown *onProgressChanged,
                       __RPC__in_opt IUnknown *onCompleted,
                       VARIANT state,
                                __RPC__deref_out_opt IInstallationJob **retval);
                               HRESULT ( STDMETHODCALLTYPE *BeginUninstall )(
            __RPC__in IUpdateInstaller2 * This,
                       __RPC__in_opt IUnknown *onProgressChanged,
                       __RPC__in_opt IUnknown *onCompleted,
                       VARIANT state,
                                __RPC__deref_out_opt IInstallationJob **retval);
                               HRESULT ( STDMETHODCALLTYPE *EndInstall )(
            __RPC__in IUpdateInstaller2 * This,
                       __RPC__in_opt IInstallationJob *value,
                                __RPC__deref_out_opt IInstallationResult **retval);
                               HRESULT ( STDMETHODCALLTYPE *EndUninstall )(
            __RPC__in IUpdateInstaller2 * This,
                       __RPC__in_opt IInstallationJob *value,
                                __RPC__deref_out_opt IInstallationResult **retval);
                               HRESULT ( STDMETHODCALLTYPE *Install )(
            __RPC__in IUpdateInstaller2 * This,
                                __RPC__deref_out_opt IInstallationResult **retval);
                               HRESULT ( STDMETHODCALLTYPE *RunWizard )(
            __RPC__in IUpdateInstaller2 * This,
                                             __RPC__in_opt BSTR dialogTitle,
                                __RPC__deref_out_opt IInstallationResult **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsBusy )(
            __RPC__in IUpdateInstaller2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                               HRESULT ( STDMETHODCALLTYPE *Uninstall )(
            __RPC__in IUpdateInstaller2 * This,
                                __RPC__deref_out_opt IInstallationResult **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AllowSourcePrompts )(
            __RPC__in IUpdateInstaller2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_AllowSourcePrompts )(
            __RPC__in IUpdateInstaller2 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_RebootRequiredBeforeInstallation )(
            __RPC__in IUpdateInstaller2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ForceQuiet )(
            __RPC__in IUpdateInstaller2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ForceQuiet )(
            __RPC__in IUpdateInstaller2 * This,
                       VARIANT_BOOL value);
        END_INTERFACE
    } IUpdateInstaller2Vtbl;
    interface IUpdateInstaller2
    {
        CONST_VTBL struct IUpdateInstaller2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
    ( (This)->lpVtbl -> get_IsForced(This,retval) )
    ( (This)->lpVtbl -> put_IsForced(This,value) )
    ( (This)->lpVtbl -> get_ParentHwnd(This,retval) )
    ( (This)->lpVtbl -> put_ParentHwnd(This,value) )
    ( (This)->lpVtbl -> put_ParentWindow(This,value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,retval) )
    ( (This)->lpVtbl -> get_Updates(This,retval) )
    ( (This)->lpVtbl -> put_Updates(This,value) )
    ( (This)->lpVtbl -> BeginInstall(This,onProgressChanged,onCompleted,state,retval) )
    ( (This)->lpVtbl -> BeginUninstall(This,onProgressChanged,onCompleted,state,retval) )
    ( (This)->lpVtbl -> EndInstall(This,value,retval) )
    ( (This)->lpVtbl -> EndUninstall(This,value,retval) )
    ( (This)->lpVtbl -> Install(This,retval) )
    ( (This)->lpVtbl -> RunWizard(This,dialogTitle,retval) )
    ( (This)->lpVtbl -> get_IsBusy(This,retval) )
    ( (This)->lpVtbl -> Uninstall(This,retval) )
    ( (This)->lpVtbl -> get_AllowSourcePrompts(This,retval) )
    ( (This)->lpVtbl -> put_AllowSourcePrompts(This,value) )
    ( (This)->lpVtbl -> get_RebootRequiredBeforeInstallation(This,retval) )
    ( (This)->lpVtbl -> get_ForceQuiet(This,retval) )
    ( (This)->lpVtbl -> put_ForceQuiet(This,value) )
EXTERN_C const IID IID_IUpdateInstaller3;
    typedef struct IUpdateInstaller3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateInstaller3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateInstaller3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateInstaller3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateInstaller3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateInstaller3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateInstaller3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateInstaller3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )(
            __RPC__in IUpdateInstaller3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )(
            __RPC__in IUpdateInstaller3 * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsForced )(
            __RPC__in IUpdateInstaller3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsForced )(
            __RPC__in IUpdateInstaller3 * This,
                       VARIANT_BOOL value);
                                                    HRESULT ( STDMETHODCALLTYPE *get_ParentHwnd )(
            __RPC__in IUpdateInstaller3 * This,
                                __RPC__deref_out_opt HWND *retval);
                                                    HRESULT ( STDMETHODCALLTYPE *put_ParentHwnd )(
            __RPC__in IUpdateInstaller3 * This,
                               __RPC__in_opt HWND value);
                                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IUpdateInstaller3 * This,
                               __RPC__in_opt IUnknown *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IUpdateInstaller3 * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Updates )(
            __RPC__in IUpdateInstaller3 * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_Updates )(
            __RPC__in IUpdateInstaller3 * This,
                       __RPC__in_opt IUpdateCollection *value);
                               HRESULT ( STDMETHODCALLTYPE *BeginInstall )(
            __RPC__in IUpdateInstaller3 * This,
                       __RPC__in_opt IUnknown *onProgressChanged,
                       __RPC__in_opt IUnknown *onCompleted,
                       VARIANT state,
                                __RPC__deref_out_opt IInstallationJob **retval);
                               HRESULT ( STDMETHODCALLTYPE *BeginUninstall )(
            __RPC__in IUpdateInstaller3 * This,
                       __RPC__in_opt IUnknown *onProgressChanged,
                       __RPC__in_opt IUnknown *onCompleted,
                       VARIANT state,
                                __RPC__deref_out_opt IInstallationJob **retval);
                               HRESULT ( STDMETHODCALLTYPE *EndInstall )(
            __RPC__in IUpdateInstaller3 * This,
                       __RPC__in_opt IInstallationJob *value,
                                __RPC__deref_out_opt IInstallationResult **retval);
                               HRESULT ( STDMETHODCALLTYPE *EndUninstall )(
            __RPC__in IUpdateInstaller3 * This,
                       __RPC__in_opt IInstallationJob *value,
                                __RPC__deref_out_opt IInstallationResult **retval);
                               HRESULT ( STDMETHODCALLTYPE *Install )(
            __RPC__in IUpdateInstaller3 * This,
                                __RPC__deref_out_opt IInstallationResult **retval);
                               HRESULT ( STDMETHODCALLTYPE *RunWizard )(
            __RPC__in IUpdateInstaller3 * This,
                                             __RPC__in_opt BSTR dialogTitle,
                                __RPC__deref_out_opt IInstallationResult **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsBusy )(
            __RPC__in IUpdateInstaller3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                               HRESULT ( STDMETHODCALLTYPE *Uninstall )(
            __RPC__in IUpdateInstaller3 * This,
                                __RPC__deref_out_opt IInstallationResult **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AllowSourcePrompts )(
            __RPC__in IUpdateInstaller3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_AllowSourcePrompts )(
            __RPC__in IUpdateInstaller3 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_RebootRequiredBeforeInstallation )(
            __RPC__in IUpdateInstaller3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ForceQuiet )(
            __RPC__in IUpdateInstaller3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ForceQuiet )(
            __RPC__in IUpdateInstaller3 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_AttemptCloseAppsIfNecessary )(
            __RPC__in IUpdateInstaller3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_AttemptCloseAppsIfNecessary )(
            __RPC__in IUpdateInstaller3 * This,
                       VARIANT_BOOL value);
        END_INTERFACE
    } IUpdateInstaller3Vtbl;
    interface IUpdateInstaller3
    {
        CONST_VTBL struct IUpdateInstaller3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
    ( (This)->lpVtbl -> get_IsForced(This,retval) )
    ( (This)->lpVtbl -> put_IsForced(This,value) )
    ( (This)->lpVtbl -> get_ParentHwnd(This,retval) )
    ( (This)->lpVtbl -> put_ParentHwnd(This,value) )
    ( (This)->lpVtbl -> put_ParentWindow(This,value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,retval) )
    ( (This)->lpVtbl -> get_Updates(This,retval) )
    ( (This)->lpVtbl -> put_Updates(This,value) )
    ( (This)->lpVtbl -> BeginInstall(This,onProgressChanged,onCompleted,state,retval) )
    ( (This)->lpVtbl -> BeginUninstall(This,onProgressChanged,onCompleted,state,retval) )
    ( (This)->lpVtbl -> EndInstall(This,value,retval) )
    ( (This)->lpVtbl -> EndUninstall(This,value,retval) )
    ( (This)->lpVtbl -> Install(This,retval) )
    ( (This)->lpVtbl -> RunWizard(This,dialogTitle,retval) )
    ( (This)->lpVtbl -> get_IsBusy(This,retval) )
    ( (This)->lpVtbl -> Uninstall(This,retval) )
    ( (This)->lpVtbl -> get_AllowSourcePrompts(This,retval) )
    ( (This)->lpVtbl -> put_AllowSourcePrompts(This,value) )
    ( (This)->lpVtbl -> get_RebootRequiredBeforeInstallation(This,retval) )
    ( (This)->lpVtbl -> get_ForceQuiet(This,retval) )
    ( (This)->lpVtbl -> put_ForceQuiet(This,value) )
    ( (This)->lpVtbl -> get_AttemptCloseAppsIfNecessary(This,retval) )
    ( (This)->lpVtbl -> put_AttemptCloseAppsIfNecessary(This,value) )
EXTERN_C const IID IID_IUpdateInstaller4;
    typedef struct IUpdateInstaller4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateInstaller4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateInstaller4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateInstaller4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateInstaller4 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateInstaller4 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateInstaller4 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateInstaller4 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )(
            __RPC__in IUpdateInstaller4 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )(
            __RPC__in IUpdateInstaller4 * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsForced )(
            __RPC__in IUpdateInstaller4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsForced )(
            __RPC__in IUpdateInstaller4 * This,
                       VARIANT_BOOL value);
                                                    HRESULT ( STDMETHODCALLTYPE *get_ParentHwnd )(
            __RPC__in IUpdateInstaller4 * This,
                                __RPC__deref_out_opt HWND *retval);
                                                    HRESULT ( STDMETHODCALLTYPE *put_ParentHwnd )(
            __RPC__in IUpdateInstaller4 * This,
                               __RPC__in_opt HWND value);
                                        HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
            __RPC__in IUpdateInstaller4 * This,
                               __RPC__in_opt IUnknown *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
            __RPC__in IUpdateInstaller4 * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Updates )(
            __RPC__in IUpdateInstaller4 * This,
                                __RPC__deref_out_opt IUpdateCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_Updates )(
            __RPC__in IUpdateInstaller4 * This,
                       __RPC__in_opt IUpdateCollection *value);
                               HRESULT ( STDMETHODCALLTYPE *BeginInstall )(
            __RPC__in IUpdateInstaller4 * This,
                       __RPC__in_opt IUnknown *onProgressChanged,
                       __RPC__in_opt IUnknown *onCompleted,
                       VARIANT state,
                                __RPC__deref_out_opt IInstallationJob **retval);
                               HRESULT ( STDMETHODCALLTYPE *BeginUninstall )(
            __RPC__in IUpdateInstaller4 * This,
                       __RPC__in_opt IUnknown *onProgressChanged,
                       __RPC__in_opt IUnknown *onCompleted,
                       VARIANT state,
                                __RPC__deref_out_opt IInstallationJob **retval);
                               HRESULT ( STDMETHODCALLTYPE *EndInstall )(
            __RPC__in IUpdateInstaller4 * This,
                       __RPC__in_opt IInstallationJob *value,
                                __RPC__deref_out_opt IInstallationResult **retval);
                               HRESULT ( STDMETHODCALLTYPE *EndUninstall )(
            __RPC__in IUpdateInstaller4 * This,
                       __RPC__in_opt IInstallationJob *value,
                                __RPC__deref_out_opt IInstallationResult **retval);
                               HRESULT ( STDMETHODCALLTYPE *Install )(
            __RPC__in IUpdateInstaller4 * This,
                                __RPC__deref_out_opt IInstallationResult **retval);
                               HRESULT ( STDMETHODCALLTYPE *RunWizard )(
            __RPC__in IUpdateInstaller4 * This,
                                             __RPC__in_opt BSTR dialogTitle,
                                __RPC__deref_out_opt IInstallationResult **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsBusy )(
            __RPC__in IUpdateInstaller4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                               HRESULT ( STDMETHODCALLTYPE *Uninstall )(
            __RPC__in IUpdateInstaller4 * This,
                                __RPC__deref_out_opt IInstallationResult **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_AllowSourcePrompts )(
            __RPC__in IUpdateInstaller4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_AllowSourcePrompts )(
            __RPC__in IUpdateInstaller4 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_RebootRequiredBeforeInstallation )(
            __RPC__in IUpdateInstaller4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ForceQuiet )(
            __RPC__in IUpdateInstaller4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ForceQuiet )(
            __RPC__in IUpdateInstaller4 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_AttemptCloseAppsIfNecessary )(
            __RPC__in IUpdateInstaller4 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_AttemptCloseAppsIfNecessary )(
            __RPC__in IUpdateInstaller4 * This,
                       VARIANT_BOOL value);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IUpdateInstaller4 * This,
                       DWORD dwFlags);
        END_INTERFACE
    } IUpdateInstaller4Vtbl;
    interface IUpdateInstaller4
    {
        CONST_VTBL struct IUpdateInstaller4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
    ( (This)->lpVtbl -> get_IsForced(This,retval) )
    ( (This)->lpVtbl -> put_IsForced(This,value) )
    ( (This)->lpVtbl -> get_ParentHwnd(This,retval) )
    ( (This)->lpVtbl -> put_ParentHwnd(This,value) )
    ( (This)->lpVtbl -> put_ParentWindow(This,value) )
    ( (This)->lpVtbl -> get_ParentWindow(This,retval) )
    ( (This)->lpVtbl -> get_Updates(This,retval) )
    ( (This)->lpVtbl -> put_Updates(This,value) )
    ( (This)->lpVtbl -> BeginInstall(This,onProgressChanged,onCompleted,state,retval) )
    ( (This)->lpVtbl -> BeginUninstall(This,onProgressChanged,onCompleted,state,retval) )
    ( (This)->lpVtbl -> EndInstall(This,value,retval) )
    ( (This)->lpVtbl -> EndUninstall(This,value,retval) )
    ( (This)->lpVtbl -> Install(This,retval) )
    ( (This)->lpVtbl -> RunWizard(This,dialogTitle,retval) )
    ( (This)->lpVtbl -> get_IsBusy(This,retval) )
    ( (This)->lpVtbl -> Uninstall(This,retval) )
    ( (This)->lpVtbl -> get_AllowSourcePrompts(This,retval) )
    ( (This)->lpVtbl -> put_AllowSourcePrompts(This,value) )
    ( (This)->lpVtbl -> get_RebootRequiredBeforeInstallation(This,retval) )
    ( (This)->lpVtbl -> get_ForceQuiet(This,retval) )
    ( (This)->lpVtbl -> put_ForceQuiet(This,value) )
    ( (This)->lpVtbl -> get_AttemptCloseAppsIfNecessary(This,retval) )
    ( (This)->lpVtbl -> put_AttemptCloseAppsIfNecessary(This,value) )
    ( (This)->lpVtbl -> Commit(This,dwFlags) )
EXTERN_C const IID IID_IUpdateSession;
    typedef struct IUpdateSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateSession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateSession * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateSession * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateSession * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateSession * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateSession * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )(
            __RPC__in IUpdateSession * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )(
            __RPC__in IUpdateSession * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )(
            __RPC__in IUpdateSession * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_WebProxy )(
            __RPC__in IUpdateSession * This,
                                __RPC__deref_out_opt IWebProxy **retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_WebProxy )(
            __RPC__in IUpdateSession * This,
                               __RPC__in_opt IWebProxy *value);
                               HRESULT ( STDMETHODCALLTYPE *CreateUpdateSearcher )(
            __RPC__in IUpdateSession * This,
                                __RPC__deref_out_opt IUpdateSearcher **retval);
                               HRESULT ( STDMETHODCALLTYPE *CreateUpdateDownloader )(
            __RPC__in IUpdateSession * This,
                                __RPC__deref_out_opt IUpdateDownloader **retval);
                               HRESULT ( STDMETHODCALLTYPE *CreateUpdateInstaller )(
            __RPC__in IUpdateSession * This,
                                __RPC__deref_out_opt IUpdateInstaller **retval);
        END_INTERFACE
    } IUpdateSessionVtbl;
    interface IUpdateSession
    {
        CONST_VTBL struct IUpdateSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
    ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
    ( (This)->lpVtbl -> get_WebProxy(This,retval) )
    ( (This)->lpVtbl -> put_WebProxy(This,value) )
    ( (This)->lpVtbl -> CreateUpdateSearcher(This,retval) )
    ( (This)->lpVtbl -> CreateUpdateDownloader(This,retval) )
    ( (This)->lpVtbl -> CreateUpdateInstaller(This,retval) )
EXTERN_C const IID IID_IUpdateSession2;
    typedef struct IUpdateSession2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateSession2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateSession2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateSession2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateSession2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateSession2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateSession2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateSession2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )(
            __RPC__in IUpdateSession2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )(
            __RPC__in IUpdateSession2 * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )(
            __RPC__in IUpdateSession2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_WebProxy )(
            __RPC__in IUpdateSession2 * This,
                                __RPC__deref_out_opt IWebProxy **retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_WebProxy )(
            __RPC__in IUpdateSession2 * This,
                               __RPC__in_opt IWebProxy *value);
                               HRESULT ( STDMETHODCALLTYPE *CreateUpdateSearcher )(
            __RPC__in IUpdateSession2 * This,
                                __RPC__deref_out_opt IUpdateSearcher **retval);
                               HRESULT ( STDMETHODCALLTYPE *CreateUpdateDownloader )(
            __RPC__in IUpdateSession2 * This,
                                __RPC__deref_out_opt IUpdateDownloader **retval);
                               HRESULT ( STDMETHODCALLTYPE *CreateUpdateInstaller )(
            __RPC__in IUpdateSession2 * This,
                                __RPC__deref_out_opt IUpdateInstaller **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserLocale )(
            __RPC__in IUpdateSession2 * This,
                                __RPC__out LCID *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_UserLocale )(
            __RPC__in IUpdateSession2 * This,
                       LCID lcid);
        END_INTERFACE
    } IUpdateSession2Vtbl;
    interface IUpdateSession2
    {
        CONST_VTBL struct IUpdateSession2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
    ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
    ( (This)->lpVtbl -> get_WebProxy(This,retval) )
    ( (This)->lpVtbl -> put_WebProxy(This,value) )
    ( (This)->lpVtbl -> CreateUpdateSearcher(This,retval) )
    ( (This)->lpVtbl -> CreateUpdateDownloader(This,retval) )
    ( (This)->lpVtbl -> CreateUpdateInstaller(This,retval) )
    ( (This)->lpVtbl -> get_UserLocale(This,retval) )
    ( (This)->lpVtbl -> put_UserLocale(This,lcid) )
EXTERN_C const IID IID_IUpdateSession3;
    typedef struct IUpdateSession3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateSession3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateSession3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateSession3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateSession3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateSession3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateSession3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateSession3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )(
            __RPC__in IUpdateSession3 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )(
            __RPC__in IUpdateSession3 * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )(
            __RPC__in IUpdateSession3 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_WebProxy )(
            __RPC__in IUpdateSession3 * This,
                                __RPC__deref_out_opt IWebProxy **retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_WebProxy )(
            __RPC__in IUpdateSession3 * This,
                               __RPC__in_opt IWebProxy *value);
                               HRESULT ( STDMETHODCALLTYPE *CreateUpdateSearcher )(
            __RPC__in IUpdateSession3 * This,
                                __RPC__deref_out_opt IUpdateSearcher **retval);
                               HRESULT ( STDMETHODCALLTYPE *CreateUpdateDownloader )(
            __RPC__in IUpdateSession3 * This,
                                __RPC__deref_out_opt IUpdateDownloader **retval);
                               HRESULT ( STDMETHODCALLTYPE *CreateUpdateInstaller )(
            __RPC__in IUpdateSession3 * This,
                                __RPC__deref_out_opt IUpdateInstaller **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserLocale )(
            __RPC__in IUpdateSession3 * This,
                                __RPC__out LCID *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_UserLocale )(
            __RPC__in IUpdateSession3 * This,
                       LCID lcid);
                               HRESULT ( STDMETHODCALLTYPE *CreateUpdateServiceManager )(
            __RPC__in IUpdateSession3 * This,
                                __RPC__deref_out_opt IUpdateServiceManager2 **retval);
                               HRESULT ( STDMETHODCALLTYPE *QueryHistory )(
            __RPC__in IUpdateSession3 * This,
                       __RPC__in BSTR criteria,
                       LONG startIndex,
                       LONG count,
                                __RPC__deref_out_opt IUpdateHistoryEntryCollection **retval);
        END_INTERFACE
    } IUpdateSession3Vtbl;
    interface IUpdateSession3
    {
        CONST_VTBL struct IUpdateSession3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
    ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
    ( (This)->lpVtbl -> get_WebProxy(This,retval) )
    ( (This)->lpVtbl -> put_WebProxy(This,value) )
    ( (This)->lpVtbl -> CreateUpdateSearcher(This,retval) )
    ( (This)->lpVtbl -> CreateUpdateDownloader(This,retval) )
    ( (This)->lpVtbl -> CreateUpdateInstaller(This,retval) )
    ( (This)->lpVtbl -> get_UserLocale(This,retval) )
    ( (This)->lpVtbl -> put_UserLocale(This,lcid) )
    ( (This)->lpVtbl -> CreateUpdateServiceManager(This,retval) )
    ( (This)->lpVtbl -> QueryHistory(This,criteria,startIndex,count,retval) )
EXTERN_C const IID IID_IUpdateService;
    typedef struct IUpdateServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateService * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateService * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateService * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateService * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateService * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IUpdateService * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ContentValidationCert )(
            __RPC__in IUpdateService * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )(
            __RPC__in IUpdateService * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsManaged )(
            __RPC__in IUpdateService * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsRegisteredWithAU )(
            __RPC__in IUpdateService * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IssueDate )(
            __RPC__in IUpdateService * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_OffersWindowsUpdates )(
            __RPC__in IUpdateService * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RedirectUrls )(
            __RPC__in IUpdateService * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServiceID )(
            __RPC__in IUpdateService * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsScanPackageService )(
            __RPC__in IUpdateService * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanRegisterWithAU )(
            __RPC__in IUpdateService * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServiceUrl )(
            __RPC__in IUpdateService * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SetupPrefix )(
            __RPC__in IUpdateService * This,
                                __RPC__deref_out_opt BSTR *retval);
        END_INTERFACE
    } IUpdateServiceVtbl;
    interface IUpdateService
    {
        CONST_VTBL struct IUpdateServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_ContentValidationCert(This,retval) )
    ( (This)->lpVtbl -> get_ExpirationDate(This,retval) )
    ( (This)->lpVtbl -> get_IsManaged(This,retval) )
    ( (This)->lpVtbl -> get_IsRegisteredWithAU(This,retval) )
    ( (This)->lpVtbl -> get_IssueDate(This,retval) )
    ( (This)->lpVtbl -> get_OffersWindowsUpdates(This,retval) )
    ( (This)->lpVtbl -> get_RedirectUrls(This,retval) )
    ( (This)->lpVtbl -> get_ServiceID(This,retval) )
    ( (This)->lpVtbl -> get_IsScanPackageService(This,retval) )
    ( (This)->lpVtbl -> get_CanRegisterWithAU(This,retval) )
    ( (This)->lpVtbl -> get_ServiceUrl(This,retval) )
    ( (This)->lpVtbl -> get_SetupPrefix(This,retval) )
EXTERN_C const IID IID_IUpdateService2;
    typedef struct IUpdateService2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateService2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateService2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateService2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateService2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateService2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateService2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateService2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IUpdateService2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ContentValidationCert )(
            __RPC__in IUpdateService2 * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )(
            __RPC__in IUpdateService2 * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsManaged )(
            __RPC__in IUpdateService2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsRegisteredWithAU )(
            __RPC__in IUpdateService2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IssueDate )(
            __RPC__in IUpdateService2 * This,
                                __RPC__out DATE *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_OffersWindowsUpdates )(
            __RPC__in IUpdateService2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RedirectUrls )(
            __RPC__in IUpdateService2 * This,
                                __RPC__deref_out_opt IStringCollection **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServiceID )(
            __RPC__in IUpdateService2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsScanPackageService )(
            __RPC__in IUpdateService2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanRegisterWithAU )(
            __RPC__in IUpdateService2 * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServiceUrl )(
            __RPC__in IUpdateService2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_SetupPrefix )(
            __RPC__in IUpdateService2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsDefaultAUService )(
            __RPC__in IUpdateService2 * This,
                                __RPC__out VARIANT_BOOL *retval);
        END_INTERFACE
    } IUpdateService2Vtbl;
    interface IUpdateService2
    {
        CONST_VTBL struct IUpdateService2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,retval) )
    ( (This)->lpVtbl -> get_ContentValidationCert(This,retval) )
    ( (This)->lpVtbl -> get_ExpirationDate(This,retval) )
    ( (This)->lpVtbl -> get_IsManaged(This,retval) )
    ( (This)->lpVtbl -> get_IsRegisteredWithAU(This,retval) )
    ( (This)->lpVtbl -> get_IssueDate(This,retval) )
    ( (This)->lpVtbl -> get_OffersWindowsUpdates(This,retval) )
    ( (This)->lpVtbl -> get_RedirectUrls(This,retval) )
    ( (This)->lpVtbl -> get_ServiceID(This,retval) )
    ( (This)->lpVtbl -> get_IsScanPackageService(This,retval) )
    ( (This)->lpVtbl -> get_CanRegisterWithAU(This,retval) )
    ( (This)->lpVtbl -> get_ServiceUrl(This,retval) )
    ( (This)->lpVtbl -> get_SetupPrefix(This,retval) )
    ( (This)->lpVtbl -> get_IsDefaultAUService(This,retval) )
EXTERN_C const IID IID_IUpdateServiceCollection;
    typedef struct IUpdateServiceCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateServiceCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateServiceCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateServiceCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateServiceCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateServiceCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateServiceCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateServiceCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IUpdateServiceCollection * This,
                       LONG index,
                                __RPC__deref_out_opt IUpdateService **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IUpdateServiceCollection * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IUpdateServiceCollection * This,
                                __RPC__out LONG *retval);
        END_INTERFACE
    } IUpdateServiceCollectionVtbl;
    interface IUpdateServiceCollection
    {
        CONST_VTBL struct IUpdateServiceCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,index,retval) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Count(This,retval) )
EXTERN_C const IID IID_IUpdateServiceRegistration;
    typedef struct IUpdateServiceRegistrationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateServiceRegistration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateServiceRegistration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateServiceRegistration * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateServiceRegistration * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateServiceRegistration * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateServiceRegistration * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateServiceRegistration * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_RegistrationState )(
            __RPC__in IUpdateServiceRegistration * This,
                                __RPC__out UpdateServiceRegistrationState *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServiceID )(
            __RPC__in IUpdateServiceRegistration * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsPendingRegistrationWithAU )(
            __RPC__in IUpdateServiceRegistration * This,
                                __RPC__out VARIANT_BOOL *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Service )(
            __RPC__in IUpdateServiceRegistration * This,
                                __RPC__deref_out_opt IUpdateService2 **retval);
        END_INTERFACE
    } IUpdateServiceRegistrationVtbl;
    interface IUpdateServiceRegistration
    {
        CONST_VTBL struct IUpdateServiceRegistrationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_RegistrationState(This,retval) )
    ( (This)->lpVtbl -> get_ServiceID(This,retval) )
    ( (This)->lpVtbl -> get_IsPendingRegistrationWithAU(This,retval) )
    ( (This)->lpVtbl -> get_Service(This,retval) )
EXTERN_C const IID IID_IUpdateServiceManager;
    typedef struct IUpdateServiceManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateServiceManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateServiceManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateServiceManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateServiceManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateServiceManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateServiceManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateServiceManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Services )(
            __RPC__in IUpdateServiceManager * This,
                                __RPC__deref_out_opt IUpdateServiceCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *AddService )(
            __RPC__in IUpdateServiceManager * This,
                       __RPC__in BSTR serviceID,
                       __RPC__in BSTR authorizationCabPath,
                                __RPC__deref_out_opt IUpdateService **retval);
                               HRESULT ( STDMETHODCALLTYPE *RegisterServiceWithAU )(
            __RPC__in IUpdateServiceManager * This,
                       __RPC__in BSTR serviceID);
                               HRESULT ( STDMETHODCALLTYPE *RemoveService )(
            __RPC__in IUpdateServiceManager * This,
                       __RPC__in BSTR serviceID);
                               HRESULT ( STDMETHODCALLTYPE *UnregisterServiceWithAU )(
            __RPC__in IUpdateServiceManager * This,
                       __RPC__in BSTR serviceID);
                               HRESULT ( STDMETHODCALLTYPE *AddScanPackageService )(
            __RPC__in IUpdateServiceManager * This,
                       __RPC__in BSTR serviceName,
                       __RPC__in BSTR scanFileLocation,
                                     LONG flags,
                                __RPC__deref_out_opt IUpdateService **ppService);
                               HRESULT ( STDMETHODCALLTYPE *SetOption )(
            __RPC__in IUpdateServiceManager * This,
                       __RPC__in BSTR optionName,
                       VARIANT optionValue);
        END_INTERFACE
    } IUpdateServiceManagerVtbl;
    interface IUpdateServiceManager
    {
        CONST_VTBL struct IUpdateServiceManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Services(This,retval) )
    ( (This)->lpVtbl -> AddService(This,serviceID,authorizationCabPath,retval) )
    ( (This)->lpVtbl -> RegisterServiceWithAU(This,serviceID) )
    ( (This)->lpVtbl -> RemoveService(This,serviceID) )
    ( (This)->lpVtbl -> UnregisterServiceWithAU(This,serviceID) )
    ( (This)->lpVtbl -> AddScanPackageService(This,serviceName,scanFileLocation,flags,ppService) )
    ( (This)->lpVtbl -> SetOption(This,optionName,optionValue) )
EXTERN_C const IID IID_IUpdateServiceManager2;
    typedef struct IUpdateServiceManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUpdateServiceManager2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUpdateServiceManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUpdateServiceManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUpdateServiceManager2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUpdateServiceManager2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUpdateServiceManager2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUpdateServiceManager2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Services )(
            __RPC__in IUpdateServiceManager2 * This,
                                __RPC__deref_out_opt IUpdateServiceCollection **retval);
                               HRESULT ( STDMETHODCALLTYPE *AddService )(
            __RPC__in IUpdateServiceManager2 * This,
                       __RPC__in BSTR serviceID,
                       __RPC__in BSTR authorizationCabPath,
                                __RPC__deref_out_opt IUpdateService **retval);
                               HRESULT ( STDMETHODCALLTYPE *RegisterServiceWithAU )(
            __RPC__in IUpdateServiceManager2 * This,
                       __RPC__in BSTR serviceID);
                               HRESULT ( STDMETHODCALLTYPE *RemoveService )(
            __RPC__in IUpdateServiceManager2 * This,
                       __RPC__in BSTR serviceID);
                               HRESULT ( STDMETHODCALLTYPE *UnregisterServiceWithAU )(
            __RPC__in IUpdateServiceManager2 * This,
                       __RPC__in BSTR serviceID);
                               HRESULT ( STDMETHODCALLTYPE *AddScanPackageService )(
            __RPC__in IUpdateServiceManager2 * This,
                       __RPC__in BSTR serviceName,
                       __RPC__in BSTR scanFileLocation,
                                     LONG flags,
                                __RPC__deref_out_opt IUpdateService **ppService);
                               HRESULT ( STDMETHODCALLTYPE *SetOption )(
            __RPC__in IUpdateServiceManager2 * This,
                       __RPC__in BSTR optionName,
                       VARIANT optionValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )(
            __RPC__in IUpdateServiceManager2 * This,
                                __RPC__deref_out_opt BSTR *retval);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )(
            __RPC__in IUpdateServiceManager2 * This,
                       __RPC__in BSTR value);
                               HRESULT ( STDMETHODCALLTYPE *QueryServiceRegistration )(
            __RPC__in IUpdateServiceManager2 * This,
                       __RPC__in BSTR serviceID,
                                __RPC__deref_out_opt IUpdateServiceRegistration **retval);
                               HRESULT ( STDMETHODCALLTYPE *AddService2 )(
            __RPC__in IUpdateServiceManager2 * This,
                       __RPC__in BSTR serviceID,
                       LONG flags,
                       __RPC__in BSTR authorizationCabPath,
                                __RPC__deref_out_opt IUpdateServiceRegistration **retval);
        END_INTERFACE
    } IUpdateServiceManager2Vtbl;
    interface IUpdateServiceManager2
    {
        CONST_VTBL struct IUpdateServiceManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Services(This,retval) )
    ( (This)->lpVtbl -> AddService(This,serviceID,authorizationCabPath,retval) )
    ( (This)->lpVtbl -> RegisterServiceWithAU(This,serviceID) )
    ( (This)->lpVtbl -> RemoveService(This,serviceID) )
    ( (This)->lpVtbl -> UnregisterServiceWithAU(This,serviceID) )
    ( (This)->lpVtbl -> AddScanPackageService(This,serviceName,scanFileLocation,flags,ppService) )
    ( (This)->lpVtbl -> SetOption(This,optionName,optionValue) )
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
    ( (This)->lpVtbl -> QueryServiceRegistration(This,serviceID,retval) )
    ( (This)->lpVtbl -> AddService2(This,serviceID,flags,authorizationCabPath,retval) )
EXTERN_C const IID IID_IInstallationAgent;
    typedef struct IInstallationAgentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInstallationAgent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInstallationAgent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInstallationAgent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInstallationAgent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInstallationAgent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInstallationAgent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInstallationAgent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *RecordInstallationResult )(
            __RPC__in IInstallationAgent * This,
                       __RPC__in BSTR installationResultCookie,
                       LONG hresult,
                       __RPC__in_opt IStringCollection *extendedReportingData);
        END_INTERFACE
    } IInstallationAgentVtbl;
    interface IInstallationAgent
    {
        CONST_VTBL struct IInstallationAgentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> RecordInstallationResult(This,installationResultCookie,hresult,extendedReportingData) )
typedef
enum tagUpdateLockdownOption
    {
        uloForWebsiteAccess = 0x1
    } UpdateLockdownOption;
typedef
enum tagAddServiceFlag
    {
        asfAllowPendingRegistration = 0x1,
        asfAllowOnlineRegistration = 0x2,
        asfRegisterServiceWithAU = 0x4
    } AddServiceFlag;
typedef
enum tagUpdateServiceOption
    {
        usoNonVolatileService = 0x1
    } UpdateServiceOption;
EXTERN_C const IID LIBID_WUApiLib;
EXTERN_C const CLSID CLSID_StringCollection;
class DECLSPEC_UUID("72C97D74-7C3B-40AE-B77D-ABDB22EBA6FB")
StringCollection;
EXTERN_C const CLSID CLSID_UpdateSearcher;
class DECLSPEC_UUID("B699E5E8-67FF-4177-88B0-3684A3388BFB")
UpdateSearcher;
EXTERN_C const CLSID CLSID_WebProxy;
class DECLSPEC_UUID("650503cf-9108-4ddc-a2ce-6c2341e1c582")
WebProxy;
EXTERN_C const CLSID CLSID_SystemInformation;
class DECLSPEC_UUID("C01B9BA0-BEA7-41BA-B604-D0A36F469133")
SystemInformation;
EXTERN_C const CLSID CLSID_WindowsUpdateAgentInfo;
class DECLSPEC_UUID("C2E88C2F-6F5B-4AAA-894B-55C847AD3A2D")
WindowsUpdateAgentInfo;
EXTERN_C const CLSID CLSID_AutomaticUpdates;
class DECLSPEC_UUID("BFE18E9C-6D87-4450-B37C-E02F0B373803")
AutomaticUpdates;
EXTERN_C const CLSID CLSID_UpdateCollection;
class DECLSPEC_UUID("13639463-00DB-4646-803D-528026140D88")
UpdateCollection;
EXTERN_C const CLSID CLSID_UpdateDownloader;
class DECLSPEC_UUID("5BAF654A-5A07-4264-A255-9FF54C7151E7")
UpdateDownloader;
EXTERN_C const CLSID CLSID_UpdateInstaller;
class DECLSPEC_UUID("D2E0FE7F-D23E-48E1-93C0-6FA8CC346474")
UpdateInstaller;
EXTERN_C const CLSID CLSID_UpdateSession;
class DECLSPEC_UUID("4CB43D7F-7EEE-4906-8698-60DA1C38F2FE")
UpdateSession;
EXTERN_C const CLSID CLSID_UpdateServiceManager;
class DECLSPEC_UUID("F8D253D9-89A4-4DAA-87B6-1168369F0B21")
UpdateServiceManager;
EXTERN_C const CLSID CLSID_InstallationAgent;
class DECLSPEC_UUID("317E92FC-1679-46FD-A0B5-F08914DD8623")
InstallationAgent;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wuapi_0000_0077_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wuapi_0000_0077_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
