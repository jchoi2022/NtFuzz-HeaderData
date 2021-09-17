#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWMDMMetaData IWMDMMetaData;
typedef interface IWMDeviceManager IWMDeviceManager;
typedef interface IWMDeviceManager2 IWMDeviceManager2;
typedef interface IWMDeviceManager3 IWMDeviceManager3;
typedef interface IWMDMStorageGlobals IWMDMStorageGlobals;
typedef interface IWMDMStorage IWMDMStorage;
typedef interface IWMDMStorage2 IWMDMStorage2;
typedef interface IWMDMStorage3 IWMDMStorage3;
typedef interface IWMDMStorage4 IWMDMStorage4;
typedef interface IWMDMOperation IWMDMOperation;
typedef interface IWMDMOperation2 IWMDMOperation2;
typedef interface IWMDMOperation3 IWMDMOperation3;
typedef interface IWMDMProgress IWMDMProgress;
typedef interface IWMDMProgress2 IWMDMProgress2;
typedef interface IWMDMProgress3 IWMDMProgress3;
typedef interface IWMDMDevice IWMDMDevice;
typedef interface IWMDMDevice2 IWMDMDevice2;
typedef interface IWMDMDevice3 IWMDMDevice3;
typedef interface IWMDMDeviceSession IWMDMDeviceSession;
typedef interface IWMDMEnumDevice IWMDMEnumDevice;
typedef interface IWMDMDeviceControl IWMDMDeviceControl;
typedef interface IWMDMEnumStorage IWMDMEnumStorage;
typedef interface IWMDMStorageControl IWMDMStorageControl;
typedef interface IWMDMStorageControl2 IWMDMStorageControl2;
typedef interface IWMDMStorageControl3 IWMDMStorageControl3;
typedef interface IWMDMObjectInfo IWMDMObjectInfo;
typedef interface IWMDMRevoked IWMDMRevoked;
typedef interface IWMDMNotification IWMDMNotification;
typedef interface IMDServiceProvider IMDServiceProvider;
typedef interface IMDServiceProvider2 IMDServiceProvider2;
typedef interface IMDServiceProvider3 IMDServiceProvider3;
typedef interface IMDSPEnumDevice IMDSPEnumDevice;
typedef interface IMDSPDevice IMDSPDevice;
typedef interface IMDSPDevice2 IMDSPDevice2;
typedef interface IMDSPDevice3 IMDSPDevice3;
typedef interface IMDSPDeviceControl IMDSPDeviceControl;
typedef interface IMDSPEnumStorage IMDSPEnumStorage;
typedef interface IMDSPStorage IMDSPStorage;
typedef interface IMDSPStorage2 IMDSPStorage2;
typedef interface IMDSPStorage3 IMDSPStorage3;
typedef interface IMDSPStorage4 IMDSPStorage4;
typedef interface IMDSPStorageGlobals IMDSPStorageGlobals;
typedef interface IMDSPObjectInfo IMDSPObjectInfo;
typedef interface IMDSPObject IMDSPObject;
typedef interface IMDSPObject2 IMDSPObject2;
typedef interface IMDSPDirectTransfer IMDSPDirectTransfer;
typedef interface IMDSPRevoked IMDSPRevoked;
typedef interface ISCPSecureAuthenticate ISCPSecureAuthenticate;
typedef interface ISCPSecureAuthenticate2 ISCPSecureAuthenticate2;
typedef interface ISCPSecureQuery ISCPSecureQuery;
typedef interface ISCPSecureQuery2 ISCPSecureQuery2;
typedef interface ISCPSecureExchange ISCPSecureExchange;
typedef interface ISCPSecureExchange2 ISCPSecureExchange2;
typedef interface ISCPSecureExchange3 ISCPSecureExchange3;
typedef interface ISCPSession ISCPSession;
typedef interface ISCPSecureQuery3 ISCPSecureQuery3;
typedef interface IComponentAuthenticate IComponentAuthenticate;
typedef class MediaDevMgrClassFactory MediaDevMgrClassFactory;
typedef class MediaDevMgr MediaDevMgr;
typedef class WMDMDevice WMDMDevice;
typedef class WMDMStorage WMDMStorage;
typedef class WMDMStorageGlobal WMDMStorageGlobal;
typedef class WMDMDeviceEnum WMDMDeviceEnum;
typedef class WMDMStorageEnum WMDMStorageEnum;
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(WMDM_DEVICE_PROTOCOL_MTP,
0x979e54e5, 0xafc, 0x4604, 0x8d, 0x93, 0xdc, 0x79, 0x8a, 0x4b, 0xcf, 0x45);
DEFINE_GUID(WMDM_DEVICE_PROTOCOL_RAPI,
0x2a11ed91, 0x8c8f, 0x41e4, 0x82, 0xd1, 0x83, 0x86, 0xe0, 0x3, 0x56, 0x1c);
DEFINE_GUID(WMDM_DEVICE_PROTOCOL_MSC,
0xa4d2c26c, 0xa881, 0x44bb, 0xbd, 0x5d, 0x1f, 0x70, 0x3c, 0x71, 0xf7, 0xa9);
DEFINE_GUID(WMDM_SERVICE_PROVIDER_VENDOR_MICROSOFT,
0x7de8686d, 0x78ee, 0x43ea, 0xa4, 0x96, 0xc6, 0x25, 0xac, 0x91, 0xcc, 0x5d);
typedef
enum tagWMDM_TAG_DATATYPE
    {
        WMDM_TYPE_DWORD = 0,
        WMDM_TYPE_STRING = 1,
        WMDM_TYPE_BINARY = 2,
        WMDM_TYPE_BOOL = 3,
        WMDM_TYPE_QWORD = 4,
        WMDM_TYPE_WORD = 5,
        WMDM_TYPE_GUID = 6,
        WMDM_TYPE_DATE = 7
    } WMDM_TAG_DATATYPE;
typedef
enum tagWMDM_SESSION_TYPE
    {
        WMDM_SESSION_NONE = 0,
        WMDM_SESSION_TRANSFER_TO_DEVICE = 0x1,
        WMDM_SESSION_TRANSFER_FROM_DEVICE = 0x10,
        WMDM_SESSION_DELETE = 0x100,
        WMDM_SESSION_CUSTOM = 0x1000
    } WMDM_SESSION_TYPE;
typedef struct _tWAVEFORMATEX
    {
    WORD wFormatTag;
    WORD nChannels;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD nBlockAlign;
    WORD wBitsPerSample;
    WORD cbSize;
    } _WAVEFORMATEX;
typedef struct _tagBITMAPINFOHEADER
    {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
    } _BITMAPINFOHEADER;
typedef struct _tagVIDEOINFOHEADER
    {
    RECT rcSource;
    RECT rcTarget;
    DWORD dwBitRate;
    DWORD dwBitErrorRate;
    LONGLONG AvgTimePerFrame;
    _BITMAPINFOHEADER bmiHeader;
    } _VIDEOINFOHEADER;
typedef struct _tagWMFILECAPABILITIES
    {
    LPWSTR pwszMimeType;
    DWORD dwReserved;
    } WMFILECAPABILITIES;
typedef struct __OPAQUECOMMAND
    {
    GUID guidCommand;
    DWORD dwDataLen;
                    BYTE *pData;
    BYTE abMAC[ 20 ];
    } OPAQUECOMMAND;
typedef struct __WMDMID
    {
    UINT cbSize;
    DWORD dwVendorID;
    BYTE pID[ 128 ];
    UINT SerialNumberLength;
    } WMDMID;
typedef struct __WMDMID *PWMDMID;
typedef struct _WMDMDATETIME
    {
    WORD wYear;
    WORD wMonth;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    } WMDMDATETIME;
typedef struct _WMDMDATETIME *PWMDMDATETIME;
typedef struct __WMDMRIGHTS
    {
    UINT cbSize;
    DWORD dwContentType;
    DWORD fuFlags;
    DWORD fuRights;
    DWORD dwAppSec;
    DWORD dwPlaybackCount;
    WMDMDATETIME ExpirationDate;
    } WMDMRIGHTS;
typedef struct __WMDMRIGHTS *PWMDMRIGHTS;
typedef struct __WMDMMetadataView
    {
                   WCHAR *pwszViewName;
    UINT nDepth;
                            WCHAR **ppwszTags;
    } WMDMMetadataView;
typedef
enum tagWMDM_STORAGE_ENUM_MODE
    {
        ENUM_MODE_RAW = 0,
        ENUM_MODE_USE_DEVICE_PREF = ( ENUM_MODE_RAW + 1 ) ,
        ENUM_MODE_METADATA_VIEWS = ( ENUM_MODE_USE_DEVICE_PREF + 1 )
    } WMDM_STORAGE_ENUM_MODE;
typedef
enum tagWMDM_FORMATCODE
    {
        WMDM_FORMATCODE_NOTUSED = 0,
        WMDM_FORMATCODE_ALLIMAGES = 0xffffffff,
        WMDM_FORMATCODE_UNDEFINED = 0x3000,
        WMDM_FORMATCODE_ASSOCIATION = 0x3001,
        WMDM_FORMATCODE_SCRIPT = 0x3002,
        WMDM_FORMATCODE_EXECUTABLE = 0x3003,
        WMDM_FORMATCODE_TEXT = 0x3004,
        WMDM_FORMATCODE_HTML = 0x3005,
        WMDM_FORMATCODE_DPOF = 0x3006,
        WMDM_FORMATCODE_AIFF = 0x3007,
        WMDM_FORMATCODE_WAVE = 0x3008,
        WMDM_FORMATCODE_MP3 = 0x3009,
        WMDM_FORMATCODE_AVI = 0x300a,
        WMDM_FORMATCODE_MPEG = 0x300b,
        WMDM_FORMATCODE_ASF = 0x300c,
        WMDM_FORMATCODE_RESERVED_FIRST = 0x300d,
        WMDM_FORMATCODE_RESERVED_LAST = 0x37ff,
        WMDM_FORMATCODE_IMAGE_UNDEFINED = 0x3800,
        WMDM_FORMATCODE_IMAGE_EXIF = 0x3801,
        WMDM_FORMATCODE_IMAGE_TIFFEP = 0x3802,
        WMDM_FORMATCODE_IMAGE_FLASHPIX = 0x3803,
        WMDM_FORMATCODE_IMAGE_BMP = 0x3804,
        WMDM_FORMATCODE_IMAGE_CIFF = 0x3805,
        WMDM_FORMATCODE_IMAGE_GIF = 0x3807,
        WMDM_FORMATCODE_IMAGE_JFIF = 0x3808,
        WMDM_FORMATCODE_IMAGE_PCD = 0x3809,
        WMDM_FORMATCODE_IMAGE_PICT = 0x380a,
        WMDM_FORMATCODE_IMAGE_PNG = 0x380b,
        WMDM_FORMATCODE_IMAGE_TIFF = 0x380d,
        WMDM_FORMATCODE_IMAGE_TIFFIT = 0x380e,
        WMDM_FORMATCODE_IMAGE_JP2 = 0x380f,
        WMDM_FORMATCODE_IMAGE_JPX = 0x3810,
        WMDM_FORMATCODE_IMAGE_RESERVED_FIRST = 0x3811,
        WMDM_FORMATCODE_IMAGE_RESERVED_LAST = 0x3fff,
        WMDM_FORMATCODE_UNDEFINEDFIRMWARE = 0xb802,
        WMDM_FORMATCODE_WBMP = 0xb803,
        WMDM_FORMATCODE_JPEGXR = 0xb804,
        WMDM_FORMATCODE_WINDOWSIMAGEFORMAT = 0xb881,
        WMDM_FORMATCODE_UNDEFINEDAUDIO = 0xb900,
        WMDM_FORMATCODE_WMA = 0xb901,
        WMDM_FORMATCODE_OGG = 0xb902,
        WMDM_FORMATCODE_AAC = 0xb903,
        WMDM_FORMATCODE_AUDIBLE = 0xb904,
        WMDM_FORMATCODE_FLAC = 0xb906,
        WMDM_FORMATCODE_QCELP = 0xb907,
        WMDM_FORMATCODE_AMR = 0xb908,
        WMDM_FORMATCODE_UNDEFINEDVIDEO = 0xb980,
        WMDM_FORMATCODE_WMV = 0xb981,
        WMDM_FORMATCODE_MP4 = 0xb982,
        WMDM_FORMATCODE_MP2 = 0xb983,
        WMDM_FORMATCODE_3GP = 0xb984,
        WMDM_FORMATCODE_3G2 = 0xb985,
        WMDM_FORMATCODE_AVCHD = 0xb986,
        WMDM_FORMATCODE_ATSCTS = 0xb987,
        WMDM_FORMATCODE_DVBTS = 0xb988,
        WMDM_FORMATCODE_MKV = 0xb989,
        WMDM_FORMATCODE_MKA = 0xb98a,
        WMDM_FORMATCODE_MK3D = 0xb98b,
        WMDM_FORMATCODE_UNDEFINEDCOLLECTION = 0xba00,
        WMDM_FORMATCODE_ABSTRACTMULTIMEDIAALBUM = 0xba01,
        WMDM_FORMATCODE_ABSTRACTIMAGEALBUM = 0xba02,
        WMDM_FORMATCODE_ABSTRACTAUDIOALBUM = 0xba03,
        WMDM_FORMATCODE_ABSTRACTVIDEOALBUM = 0xba04,
        WMDM_FORMATCODE_ABSTRACTAUDIOVIDEOPLAYLIST = 0xba05,
        WMDM_FORMATCODE_ABSTRACTCONTACTGROUP = 0xba06,
        WMDM_FORMATCODE_ABSTRACTMESSAGEFOLDER = 0xba07,
        WMDM_FORMATCODE_ABSTRACTCHAPTEREDPRODUCTION = 0xba08,
        WMDM_FORMATCODE_MEDIA_CAST = 0xba0b,
        WMDM_FORMATCODE_WPLPLAYLIST = 0xba10,
        WMDM_FORMATCODE_M3UPLAYLIST = 0xba11,
        WMDM_FORMATCODE_MPLPLAYLIST = 0xba12,
        WMDM_FORMATCODE_ASXPLAYLIST = 0xba13,
        WMDM_FORMATCODE_PLSPLAYLIST = 0xba14,
        WMDM_FORMATCODE_UNDEFINEDDOCUMENT = 0xba80,
        WMDM_FORMATCODE_ABSTRACTDOCUMENT = 0xba81,
        WMDM_FORMATCODE_XMLDOCUMENT = 0xba82,
        WMDM_FORMATCODE_MICROSOFTWORDDOCUMENT = 0xba83,
        WMDM_FORMATCODE_MHTCOMPILEDHTMLDOCUMENT = 0xba84,
        WMDM_FORMATCODE_MICROSOFTEXCELSPREADSHEET = 0xba85,
        WMDM_FORMATCODE_MICROSOFTPOWERPOINTDOCUMENT = 0xba86,
        WMDM_FORMATCODE_UNDEFINEDMESSAGE = 0xbb00,
        WMDM_FORMATCODE_ABSTRACTMESSAGE = 0xbb01,
        WMDM_FORMATCODE_UNDEFINEDCONTACT = 0xbb80,
        WMDM_FORMATCODE_ABSTRACTCONTACT = 0xbb81,
        WMDM_FORMATCODE_VCARD2 = 0xbb82,
        WMDM_FORMATCODE_VCARD3 = 0xbb83,
        WMDM_FORMATCODE_UNDEFINEDCALENDARITEM = 0xbe00,
        WMDM_FORMATCODE_ABSTRACTCALENDARITEM = 0xbe01,
        WMDM_FORMATCODE_VCALENDAR1 = 0xbe02,
        WMDM_FORMATCODE_VCALENDAR2 = 0xbe03,
        WMDM_FORMATCODE_UNDEFINEDWINDOWSEXECUTABLE = 0xbe80,
        WMDM_FORMATCODE_M4A = 0x4d503441,
        WMDM_FORMATCODE_3GPA = 0x33475041,
        WMDM_FORMATCODE_3G2A = 0x33473241,
        WMDM_FORMATCODE_SECTION = 0xbe82
    } WMDM_FORMATCODE;
typedef
enum _WMDM_ENUM_PROP_VALID_VALUES_FORM
    {
        WMDM_ENUM_PROP_VALID_VALUES_ANY = 0,
        WMDM_ENUM_PROP_VALID_VALUES_RANGE = ( WMDM_ENUM_PROP_VALID_VALUES_ANY + 1 ) ,
        WMDM_ENUM_PROP_VALID_VALUES_ENUM = ( WMDM_ENUM_PROP_VALID_VALUES_RANGE + 1 )
    } WMDM_ENUM_PROP_VALID_VALUES_FORM;
typedef struct _WMDM_PROP_VALUES_RANGE
    {
    PROPVARIANT rangeMin;
    PROPVARIANT rangeMax;
    PROPVARIANT rangeStep;
    } WMDM_PROP_VALUES_RANGE;
typedef struct _WMDM_PROP_VALUES_ENUM
    {
    UINT cEnumValues;
                    PROPVARIANT *pValues;
    } WMDM_PROP_VALUES_ENUM;
typedef struct _WMDM_PROP_DESC
    {
    LPWSTR pwszPropName;
    WMDM_ENUM_PROP_VALID_VALUES_FORM ValidValuesForm;
                                   union
        {
                       WMDM_PROP_VALUES_RANGE ValidValuesRange;
                       WMDM_PROP_VALUES_ENUM EnumeratedValidValues;
        } ValidValues;
    } WMDM_PROP_DESC;
typedef struct _WMDM_PROP_CONFIG
    {
    UINT nPreference;
    UINT nPropDesc;
                    WMDM_PROP_DESC *pPropDesc;
    } WMDM_PROP_CONFIG;
typedef struct _WMDM_FORMAT_CAPABILITY
    {
    UINT nPropConfig;
                    WMDM_PROP_CONFIG *pConfigs;
    } WMDM_FORMAT_CAPABILITY;
typedef
enum tagWMDM_FIND_SCOPE
    {
        WMDM_FIND_SCOPE_GLOBAL = 0,
        WMDM_FIND_SCOPE_IMMEDIATE_CHILDREN = ( WMDM_FIND_SCOPE_GLOBAL + 1 )
    } WMDM_FIND_SCOPE;
enum WMDMMessage
    {
        WMDM_MSG_DEVICE_ARRIVAL = 0,
        WMDM_MSG_DEVICE_REMOVAL = ( WMDM_MSG_DEVICE_ARRIVAL + 1 ) ,
        WMDM_MSG_MEDIA_ARRIVAL = ( WMDM_MSG_DEVICE_REMOVAL + 1 ) ,
        WMDM_MSG_MEDIA_REMOVAL = ( WMDM_MSG_MEDIA_ARRIVAL + 1 )
    } ;
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMDMMetaData;
    typedef struct IWMDMMetaDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMMetaData * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMMetaData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMMetaData * This);
        HRESULT ( STDMETHODCALLTYPE *AddItem )(
            __RPC__in IWMDMMetaData * This,
                       WMDM_TAG_DATATYPE Type,
                               __RPC__in_string LPCWSTR pwszTagName,
                                        __RPC__in_ecount_full_opt(iLength) BYTE *pValue,
                       UINT iLength);
        HRESULT ( STDMETHODCALLTYPE *QueryByName )(
            __RPC__in IWMDMMetaData * This,
                               __RPC__in_string LPCWSTR pwszTagName,
                        __RPC__out WMDM_TAG_DATATYPE *pType,
                                          __RPC__deref_out_ecount_full_opt(*pcbLength) BYTE **pValue,
                        __RPC__out UINT *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *QueryByIndex )(
            __RPC__in IWMDMMetaData * This,
                       UINT iIndex,
                                __RPC__deref_out_opt_string WCHAR **ppwszName,
                        __RPC__out WMDM_TAG_DATATYPE *pType,
                                          __RPC__deref_out_ecount_full_opt(*pcbLength) BYTE **ppValue,
                        __RPC__out UINT *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *GetItemCount )(
            __RPC__in IWMDMMetaData * This,
                        __RPC__out UINT *iCount);
        END_INTERFACE
    } IWMDMMetaDataVtbl;
    interface IWMDMMetaData
    {
        CONST_VTBL struct IWMDMMetaDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddItem(This,Type,pwszTagName,pValue,iLength) )
    ( (This)->lpVtbl -> QueryByName(This,pwszTagName,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> QueryByIndex(This,iIndex,ppwszName,pType,ppValue,pcbLength) )
    ( (This)->lpVtbl -> GetItemCount(This,iCount) )
EXTERN_C const IID IID_IWMDeviceManager;
    typedef struct IWMDeviceManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDeviceManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDeviceManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDeviceManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetRevision )(
            __RPC__in IWMDeviceManager * This,
                        __RPC__out DWORD *pdwRevision);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCount )(
            __RPC__in IWMDeviceManager * This,
                        __RPC__out DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *EnumDevices )(
            __RPC__in IWMDeviceManager * This,
                        __RPC__deref_out_opt IWMDMEnumDevice **ppEnumDevice);
        END_INTERFACE
    } IWMDeviceManagerVtbl;
    interface IWMDeviceManager
    {
        CONST_VTBL struct IWMDeviceManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRevision(This,pdwRevision) )
    ( (This)->lpVtbl -> GetDeviceCount(This,pdwCount) )
    ( (This)->lpVtbl -> EnumDevices(This,ppEnumDevice) )
EXTERN_C const IID IID_IWMDeviceManager2;
    typedef struct IWMDeviceManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDeviceManager2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDeviceManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDeviceManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRevision )(
            __RPC__in IWMDeviceManager2 * This,
                        __RPC__out DWORD *pdwRevision);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCount )(
            __RPC__in IWMDeviceManager2 * This,
                        __RPC__out DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *EnumDevices )(
            __RPC__in IWMDeviceManager2 * This,
                        __RPC__deref_out_opt IWMDMEnumDevice **ppEnumDevice);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceFromCanonicalName )(
            __RPC__in IWMDeviceManager2 * This,
                               __RPC__in_string LPCWSTR pwszCanonicalName,
                        __RPC__deref_out_opt IWMDMDevice **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *EnumDevices2 )(
            __RPC__in IWMDeviceManager2 * This,
                        __RPC__deref_out_opt IWMDMEnumDevice **ppEnumDevice);
        HRESULT ( STDMETHODCALLTYPE *Reinitialize )(
            __RPC__in IWMDeviceManager2 * This);
        END_INTERFACE
    } IWMDeviceManager2Vtbl;
    interface IWMDeviceManager2
    {
        CONST_VTBL struct IWMDeviceManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRevision(This,pdwRevision) )
    ( (This)->lpVtbl -> GetDeviceCount(This,pdwCount) )
    ( (This)->lpVtbl -> EnumDevices(This,ppEnumDevice) )
    ( (This)->lpVtbl -> GetDeviceFromCanonicalName(This,pwszCanonicalName,ppDevice) )
    ( (This)->lpVtbl -> EnumDevices2(This,ppEnumDevice) )
    ( (This)->lpVtbl -> Reinitialize(This) )
EXTERN_C const IID IID_IWMDeviceManager3;
    typedef struct IWMDeviceManager3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDeviceManager3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDeviceManager3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDeviceManager3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRevision )(
            __RPC__in IWMDeviceManager3 * This,
                        __RPC__out DWORD *pdwRevision);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCount )(
            __RPC__in IWMDeviceManager3 * This,
                        __RPC__out DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *EnumDevices )(
            __RPC__in IWMDeviceManager3 * This,
                        __RPC__deref_out_opt IWMDMEnumDevice **ppEnumDevice);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceFromCanonicalName )(
            __RPC__in IWMDeviceManager3 * This,
                               __RPC__in_string LPCWSTR pwszCanonicalName,
                        __RPC__deref_out_opt IWMDMDevice **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *EnumDevices2 )(
            __RPC__in IWMDeviceManager3 * This,
                        __RPC__deref_out_opt IWMDMEnumDevice **ppEnumDevice);
        HRESULT ( STDMETHODCALLTYPE *Reinitialize )(
            __RPC__in IWMDeviceManager3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetDeviceEnumPreference )(
            __RPC__in IWMDeviceManager3 * This,
                       DWORD dwEnumPref);
        END_INTERFACE
    } IWMDeviceManager3Vtbl;
    interface IWMDeviceManager3
    {
        CONST_VTBL struct IWMDeviceManager3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRevision(This,pdwRevision) )
    ( (This)->lpVtbl -> GetDeviceCount(This,pdwCount) )
    ( (This)->lpVtbl -> EnumDevices(This,ppEnumDevice) )
    ( (This)->lpVtbl -> GetDeviceFromCanonicalName(This,pwszCanonicalName,ppDevice) )
    ( (This)->lpVtbl -> EnumDevices2(This,ppEnumDevice) )
    ( (This)->lpVtbl -> Reinitialize(This) )
    ( (This)->lpVtbl -> SetDeviceEnumPreference(This,dwEnumPref) )
EXTERN_C const IID IID_IWMDMStorageGlobals;
    typedef struct IWMDMStorageGlobalsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMStorageGlobals * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMStorageGlobals * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMStorageGlobals * This);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in IWMDMStorageGlobals * This,
                        __RPC__out DWORD *pdwCapabilities);
        HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )(
            __RPC__in IWMDMStorageGlobals * This,
                        __RPC__out PWMDMID pSerialNum,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *GetTotalSize )(
            __RPC__in IWMDMStorageGlobals * This,
                        __RPC__out DWORD *pdwTotalSizeLow,
                        __RPC__out DWORD *pdwTotalSizeHigh);
        HRESULT ( STDMETHODCALLTYPE *GetTotalFree )(
            __RPC__in IWMDMStorageGlobals * This,
                        __RPC__out DWORD *pdwFreeLow,
                        __RPC__out DWORD *pdwFreeHigh);
        HRESULT ( STDMETHODCALLTYPE *GetTotalBad )(
            __RPC__in IWMDMStorageGlobals * This,
                        __RPC__out DWORD *pdwBadLow,
                        __RPC__out DWORD *pdwBadHigh);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IWMDMStorageGlobals * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IWMDMStorageGlobals * This,
                       UINT fuMode,
                       __RPC__in_opt IWMDMProgress *pProgress);
        END_INTERFACE
    } IWMDMStorageGlobalsVtbl;
    interface IWMDMStorageGlobals
    {
        CONST_VTBL struct IWMDMStorageGlobalsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCapabilities(This,pdwCapabilities) )
    ( (This)->lpVtbl -> GetSerialNumber(This,pSerialNum,abMac) )
    ( (This)->lpVtbl -> GetTotalSize(This,pdwTotalSizeLow,pdwTotalSizeHigh) )
    ( (This)->lpVtbl -> GetTotalFree(This,pdwFreeLow,pdwFreeHigh) )
    ( (This)->lpVtbl -> GetTotalBad(This,pdwBadLow,pdwBadHigh) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> Initialize(This,fuMode,pProgress) )
EXTERN_C const IID IID_IWMDMStorage;
    typedef struct IWMDMStorageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMStorage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMStorage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMStorage * This);
        HRESULT ( STDMETHODCALLTYPE *SetAttributes )(
            __RPC__in IWMDMStorage * This,
                       DWORD dwAttributes,
                               __RPC__in_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetStorageGlobals )(
            __RPC__in IWMDMStorage * This,
                        __RPC__deref_out_opt IWMDMStorageGlobals **ppStorageGlobals);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )(
            __RPC__in IWMDMStorage * This,
                        __RPC__out DWORD *pdwAttributes,
                                    __RPC__inout_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IWMDMStorage * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetDate )(
            __RPC__in IWMDMStorage * This,
                        __RPC__out PWMDMDATETIME pDateTimeUTC);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IWMDMStorage * This,
                        __RPC__out DWORD *pdwSizeLow,
                        __RPC__out DWORD *pdwSizeHigh);
        HRESULT ( STDMETHODCALLTYPE *GetRights )(
            __RPC__in IWMDMStorage * This,
                                          __RPC__deref_out_ecount_full_opt(*pnRightsCount) PWMDMRIGHTS *ppRights,
                        __RPC__out UINT *pnRightsCount,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )(
            __RPC__in IWMDMStorage * This,
                        __RPC__deref_out_opt IWMDMEnumStorage **pEnumStorage);
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )(
            __RPC__in IWMDMStorage * This,
                            __RPC__inout OPAQUECOMMAND *pCommand);
        END_INTERFACE
    } IWMDMStorageVtbl;
    interface IWMDMStorage
    {
        CONST_VTBL struct IWMDMStorageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals) )
    ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetDate(This,pDateTimeUTC) )
    ( (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh) )
    ( (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac) )
    ( (This)->lpVtbl -> EnumStorage(This,pEnumStorage) )
    ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
EXTERN_C const IID IID_IWMDMStorage2;
    typedef struct IWMDMStorage2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMStorage2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMStorage2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMStorage2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetAttributes )(
            __RPC__in IWMDMStorage2 * This,
                       DWORD dwAttributes,
                               __RPC__in_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetStorageGlobals )(
            __RPC__in IWMDMStorage2 * This,
                        __RPC__deref_out_opt IWMDMStorageGlobals **ppStorageGlobals);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )(
            __RPC__in IWMDMStorage2 * This,
                        __RPC__out DWORD *pdwAttributes,
                                    __RPC__inout_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IWMDMStorage2 * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetDate )(
            __RPC__in IWMDMStorage2 * This,
                        __RPC__out PWMDMDATETIME pDateTimeUTC);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IWMDMStorage2 * This,
                        __RPC__out DWORD *pdwSizeLow,
                        __RPC__out DWORD *pdwSizeHigh);
        HRESULT ( STDMETHODCALLTYPE *GetRights )(
            __RPC__in IWMDMStorage2 * This,
                                          __RPC__deref_out_ecount_full_opt(*pnRightsCount) PWMDMRIGHTS *ppRights,
                        __RPC__out UINT *pnRightsCount,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )(
            __RPC__in IWMDMStorage2 * This,
                        __RPC__deref_out_opt IWMDMEnumStorage **pEnumStorage);
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )(
            __RPC__in IWMDMStorage2 * This,
                            __RPC__inout OPAQUECOMMAND *pCommand);
        HRESULT ( STDMETHODCALLTYPE *GetStorage )(
            __RPC__in IWMDMStorage2 * This,
                               __RPC__in_string LPCWSTR pszStorageName,
                        __RPC__deref_out_opt IWMDMStorage **ppStorage);
        HRESULT ( STDMETHODCALLTYPE *SetAttributes2 )(
            __RPC__in IWMDMStorage2 * This,
                       DWORD dwAttributes,
                       DWORD dwAttributesEx,
                               __RPC__in_opt _WAVEFORMATEX *pFormat,
                               __RPC__in_opt _VIDEOINFOHEADER *pVideoFormat);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes2 )(
            __RPC__in IWMDMStorage2 * This,
                        __RPC__out DWORD *pdwAttributes,
                        __RPC__out DWORD *pdwAttributesEx,
                                    __RPC__inout_opt _WAVEFORMATEX *pAudioFormat,
                                    __RPC__inout_opt _VIDEOINFOHEADER *pVideoFormat);
        END_INTERFACE
    } IWMDMStorage2Vtbl;
    interface IWMDMStorage2
    {
        CONST_VTBL struct IWMDMStorage2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals) )
    ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetDate(This,pDateTimeUTC) )
    ( (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh) )
    ( (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac) )
    ( (This)->lpVtbl -> EnumStorage(This,pEnumStorage) )
    ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
    ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
    ( (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat) )
    ( (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) )
EXTERN_C const IID IID_IWMDMStorage3;
    typedef struct IWMDMStorage3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMStorage3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMStorage3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMStorage3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetAttributes )(
            __RPC__in IWMDMStorage3 * This,
                       DWORD dwAttributes,
                               __RPC__in_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetStorageGlobals )(
            __RPC__in IWMDMStorage3 * This,
                        __RPC__deref_out_opt IWMDMStorageGlobals **ppStorageGlobals);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )(
            __RPC__in IWMDMStorage3 * This,
                        __RPC__out DWORD *pdwAttributes,
                                    __RPC__inout_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IWMDMStorage3 * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetDate )(
            __RPC__in IWMDMStorage3 * This,
                        __RPC__out PWMDMDATETIME pDateTimeUTC);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IWMDMStorage3 * This,
                        __RPC__out DWORD *pdwSizeLow,
                        __RPC__out DWORD *pdwSizeHigh);
        HRESULT ( STDMETHODCALLTYPE *GetRights )(
            __RPC__in IWMDMStorage3 * This,
                                          __RPC__deref_out_ecount_full_opt(*pnRightsCount) PWMDMRIGHTS *ppRights,
                        __RPC__out UINT *pnRightsCount,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )(
            __RPC__in IWMDMStorage3 * This,
                        __RPC__deref_out_opt IWMDMEnumStorage **pEnumStorage);
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )(
            __RPC__in IWMDMStorage3 * This,
                            __RPC__inout OPAQUECOMMAND *pCommand);
        HRESULT ( STDMETHODCALLTYPE *GetStorage )(
            __RPC__in IWMDMStorage3 * This,
                               __RPC__in_string LPCWSTR pszStorageName,
                        __RPC__deref_out_opt IWMDMStorage **ppStorage);
        HRESULT ( STDMETHODCALLTYPE *SetAttributes2 )(
            __RPC__in IWMDMStorage3 * This,
                       DWORD dwAttributes,
                       DWORD dwAttributesEx,
                               __RPC__in_opt _WAVEFORMATEX *pFormat,
                               __RPC__in_opt _VIDEOINFOHEADER *pVideoFormat);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes2 )(
            __RPC__in IWMDMStorage3 * This,
                        __RPC__out DWORD *pdwAttributes,
                        __RPC__out DWORD *pdwAttributesEx,
                                    __RPC__inout_opt _WAVEFORMATEX *pAudioFormat,
                                    __RPC__inout_opt _VIDEOINFOHEADER *pVideoFormat);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            __RPC__in IWMDMStorage3 * This,
                        __RPC__deref_out_opt IWMDMMetaData **ppMetadata);
        HRESULT ( STDMETHODCALLTYPE *SetMetadata )(
            __RPC__in IWMDMStorage3 * This,
                       __RPC__in_opt IWMDMMetaData *pMetadata);
        HRESULT ( STDMETHODCALLTYPE *CreateEmptyMetadataObject )(
            __RPC__in IWMDMStorage3 * This,
                        __RPC__deref_out_opt IWMDMMetaData **ppMetadata);
        HRESULT ( STDMETHODCALLTYPE *SetEnumPreference )(
            __RPC__in IWMDMStorage3 * This,
                            __RPC__inout WMDM_STORAGE_ENUM_MODE *pMode,
                       DWORD nViews,
                                        __RPC__in_ecount_full_opt(nViews) WMDMMetadataView *pViews);
        END_INTERFACE
    } IWMDMStorage3Vtbl;
    interface IWMDMStorage3
    {
        CONST_VTBL struct IWMDMStorage3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals) )
    ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetDate(This,pDateTimeUTC) )
    ( (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh) )
    ( (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac) )
    ( (This)->lpVtbl -> EnumStorage(This,pEnumStorage) )
    ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
    ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
    ( (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat) )
    ( (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) )
    ( (This)->lpVtbl -> GetMetadata(This,ppMetadata) )
    ( (This)->lpVtbl -> SetMetadata(This,pMetadata) )
    ( (This)->lpVtbl -> CreateEmptyMetadataObject(This,ppMetadata) )
    ( (This)->lpVtbl -> SetEnumPreference(This,pMode,nViews,pViews) )
EXTERN_C const IID IID_IWMDMStorage4;
    typedef struct IWMDMStorage4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMStorage4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMStorage4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMStorage4 * This);
        HRESULT ( STDMETHODCALLTYPE *SetAttributes )(
            __RPC__in IWMDMStorage4 * This,
                       DWORD dwAttributes,
                               __RPC__in_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetStorageGlobals )(
            __RPC__in IWMDMStorage4 * This,
                        __RPC__deref_out_opt IWMDMStorageGlobals **ppStorageGlobals);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )(
            __RPC__in IWMDMStorage4 * This,
                        __RPC__out DWORD *pdwAttributes,
                                    __RPC__inout_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IWMDMStorage4 * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetDate )(
            __RPC__in IWMDMStorage4 * This,
                        __RPC__out PWMDMDATETIME pDateTimeUTC);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IWMDMStorage4 * This,
                        __RPC__out DWORD *pdwSizeLow,
                        __RPC__out DWORD *pdwSizeHigh);
        HRESULT ( STDMETHODCALLTYPE *GetRights )(
            __RPC__in IWMDMStorage4 * This,
                                          __RPC__deref_out_ecount_full_opt(*pnRightsCount) PWMDMRIGHTS *ppRights,
                        __RPC__out UINT *pnRightsCount,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )(
            __RPC__in IWMDMStorage4 * This,
                        __RPC__deref_out_opt IWMDMEnumStorage **pEnumStorage);
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )(
            __RPC__in IWMDMStorage4 * This,
                            __RPC__inout OPAQUECOMMAND *pCommand);
        HRESULT ( STDMETHODCALLTYPE *GetStorage )(
            __RPC__in IWMDMStorage4 * This,
                               __RPC__in_string LPCWSTR pszStorageName,
                        __RPC__deref_out_opt IWMDMStorage **ppStorage);
        HRESULT ( STDMETHODCALLTYPE *SetAttributes2 )(
            __RPC__in IWMDMStorage4 * This,
                       DWORD dwAttributes,
                       DWORD dwAttributesEx,
                               __RPC__in_opt _WAVEFORMATEX *pFormat,
                               __RPC__in_opt _VIDEOINFOHEADER *pVideoFormat);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes2 )(
            __RPC__in IWMDMStorage4 * This,
                        __RPC__out DWORD *pdwAttributes,
                        __RPC__out DWORD *pdwAttributesEx,
                                    __RPC__inout_opt _WAVEFORMATEX *pAudioFormat,
                                    __RPC__inout_opt _VIDEOINFOHEADER *pVideoFormat);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            __RPC__in IWMDMStorage4 * This,
                        __RPC__deref_out_opt IWMDMMetaData **ppMetadata);
        HRESULT ( STDMETHODCALLTYPE *SetMetadata )(
            __RPC__in IWMDMStorage4 * This,
                       __RPC__in_opt IWMDMMetaData *pMetadata);
        HRESULT ( STDMETHODCALLTYPE *CreateEmptyMetadataObject )(
            __RPC__in IWMDMStorage4 * This,
                        __RPC__deref_out_opt IWMDMMetaData **ppMetadata);
        HRESULT ( STDMETHODCALLTYPE *SetEnumPreference )(
            __RPC__in IWMDMStorage4 * This,
                            __RPC__inout WMDM_STORAGE_ENUM_MODE *pMode,
                       DWORD nViews,
                                        __RPC__in_ecount_full_opt(nViews) WMDMMetadataView *pViews);
        HRESULT ( STDMETHODCALLTYPE *SetReferences )(
            __RPC__in IWMDMStorage4 * This,
                       DWORD dwRefs,
                                        __RPC__in_ecount_full_opt(dwRefs) IWMDMStorage **ppIWMDMStorage);
        HRESULT ( STDMETHODCALLTYPE *GetReferences )(
            __RPC__in IWMDMStorage4 * This,
                        __RPC__out DWORD *pdwRefs,
                                          __RPC__deref_out_ecount_full_opt(*pdwRefs) IWMDMStorage ***pppIWMDMStorage);
        HRESULT ( STDMETHODCALLTYPE *GetRightsWithProgress )(
            __RPC__in IWMDMStorage4 * This,
                       __RPC__in_opt IWMDMProgress3 *pIProgressCallback,
                                          __RPC__deref_out_ecount_full_opt(*pnRightsCount) PWMDMRIGHTS *ppRights,
                        __RPC__out UINT *pnRightsCount);
        HRESULT ( STDMETHODCALLTYPE *GetSpecifiedMetadata )(
            __RPC__in IWMDMStorage4 * This,
                       DWORD cProperties,
                                __RPC__in_ecount_full(cProperties) LPCWSTR *ppwszPropNames,
                        __RPC__deref_out_opt IWMDMMetaData **ppMetadata);
        HRESULT ( STDMETHODCALLTYPE *FindStorage )(
            __RPC__in IWMDMStorage4 * This,
                       WMDM_FIND_SCOPE findScope,
                       __RPC__in LPCWSTR pwszUniqueID,
                        __RPC__deref_out_opt IWMDMStorage **ppStorage);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            __RPC__in IWMDMStorage4 * This,
                        __RPC__deref_out_opt IWMDMStorage **ppStorage);
        END_INTERFACE
    } IWMDMStorage4Vtbl;
    interface IWMDMStorage4
    {
        CONST_VTBL struct IWMDMStorage4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals) )
    ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetDate(This,pDateTimeUTC) )
    ( (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh) )
    ( (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac) )
    ( (This)->lpVtbl -> EnumStorage(This,pEnumStorage) )
    ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
    ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
    ( (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat) )
    ( (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) )
    ( (This)->lpVtbl -> GetMetadata(This,ppMetadata) )
    ( (This)->lpVtbl -> SetMetadata(This,pMetadata) )
    ( (This)->lpVtbl -> CreateEmptyMetadataObject(This,ppMetadata) )
    ( (This)->lpVtbl -> SetEnumPreference(This,pMode,nViews,pViews) )
    ( (This)->lpVtbl -> SetReferences(This,dwRefs,ppIWMDMStorage) )
    ( (This)->lpVtbl -> GetReferences(This,pdwRefs,pppIWMDMStorage) )
    ( (This)->lpVtbl -> GetRightsWithProgress(This,pIProgressCallback,ppRights,pnRightsCount) )
    ( (This)->lpVtbl -> GetSpecifiedMetadata(This,cProperties,ppwszPropNames,ppMetadata) )
    ( (This)->lpVtbl -> FindStorage(This,findScope,pwszUniqueID,ppStorage) )
    ( (This)->lpVtbl -> GetParent(This,ppStorage) )
EXTERN_C const IID IID_IWMDMOperation;
    typedef struct IWMDMOperationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMOperation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMOperation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMOperation * This);
        HRESULT ( STDMETHODCALLTYPE *BeginRead )(
            __RPC__in IWMDMOperation * This);
        HRESULT ( STDMETHODCALLTYPE *BeginWrite )(
            __RPC__in IWMDMOperation * This);
        HRESULT ( STDMETHODCALLTYPE *GetObjectName )(
            __RPC__in IWMDMOperation * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *SetObjectName )(
            __RPC__in IWMDMOperation * This,
                                        __RPC__in_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetObjectAttributes )(
            __RPC__in IWMDMOperation * This,
                        __RPC__out DWORD *pdwAttributes,
                                    __RPC__inout_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *SetObjectAttributes )(
            __RPC__in IWMDMOperation * This,
                       DWORD dwAttributes,
                               __RPC__in_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetObjectTotalSize )(
            __RPC__in IWMDMOperation * This,
                        __RPC__out DWORD *pdwSize,
                        __RPC__out DWORD *pdwSizeHigh);
        HRESULT ( STDMETHODCALLTYPE *SetObjectTotalSize )(
            __RPC__in IWMDMOperation * This,
                       DWORD dwSize,
                       DWORD dwSizeHigh);
        HRESULT ( STDMETHODCALLTYPE *TransferObjectData )(
            __RPC__in IWMDMOperation * This,
                                     __RPC__inout_ecount_full(*pdwSize) BYTE *pData,
                            __RPC__inout DWORD *pdwSize,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *End )(
            __RPC__in IWMDMOperation * This,
                       __RPC__in HRESULT *phCompletionCode,
                       __RPC__in_opt IUnknown *pNewObject);
        END_INTERFACE
    } IWMDMOperationVtbl;
    interface IWMDMOperation
    {
        CONST_VTBL struct IWMDMOperationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginRead(This) )
    ( (This)->lpVtbl -> BeginWrite(This) )
    ( (This)->lpVtbl -> GetObjectName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> SetObjectName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetObjectAttributes(This,pdwAttributes,pFormat) )
    ( (This)->lpVtbl -> SetObjectAttributes(This,dwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetObjectTotalSize(This,pdwSize,pdwSizeHigh) )
    ( (This)->lpVtbl -> SetObjectTotalSize(This,dwSize,dwSizeHigh) )
    ( (This)->lpVtbl -> TransferObjectData(This,pData,pdwSize,abMac) )
    ( (This)->lpVtbl -> End(This,phCompletionCode,pNewObject) )
EXTERN_C const IID IID_IWMDMOperation2;
    typedef struct IWMDMOperation2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMOperation2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMOperation2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMOperation2 * This);
        HRESULT ( STDMETHODCALLTYPE *BeginRead )(
            __RPC__in IWMDMOperation2 * This);
        HRESULT ( STDMETHODCALLTYPE *BeginWrite )(
            __RPC__in IWMDMOperation2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetObjectName )(
            __RPC__in IWMDMOperation2 * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *SetObjectName )(
            __RPC__in IWMDMOperation2 * This,
                                        __RPC__in_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetObjectAttributes )(
            __RPC__in IWMDMOperation2 * This,
                        __RPC__out DWORD *pdwAttributes,
                                    __RPC__inout_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *SetObjectAttributes )(
            __RPC__in IWMDMOperation2 * This,
                       DWORD dwAttributes,
                               __RPC__in_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetObjectTotalSize )(
            __RPC__in IWMDMOperation2 * This,
                        __RPC__out DWORD *pdwSize,
                        __RPC__out DWORD *pdwSizeHigh);
        HRESULT ( STDMETHODCALLTYPE *SetObjectTotalSize )(
            __RPC__in IWMDMOperation2 * This,
                       DWORD dwSize,
                       DWORD dwSizeHigh);
        HRESULT ( STDMETHODCALLTYPE *TransferObjectData )(
            __RPC__in IWMDMOperation2 * This,
                                     __RPC__inout_ecount_full(*pdwSize) BYTE *pData,
                            __RPC__inout DWORD *pdwSize,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *End )(
            __RPC__in IWMDMOperation2 * This,
                       __RPC__in HRESULT *phCompletionCode,
                       __RPC__in_opt IUnknown *pNewObject);
        HRESULT ( STDMETHODCALLTYPE *SetObjectAttributes2 )(
            __RPC__in IWMDMOperation2 * This,
                       DWORD dwAttributes,
                       DWORD dwAttributesEx,
                               __RPC__in_opt _WAVEFORMATEX *pFormat,
                               __RPC__in_opt _VIDEOINFOHEADER *pVideoFormat);
        HRESULT ( STDMETHODCALLTYPE *GetObjectAttributes2 )(
            __RPC__in IWMDMOperation2 * This,
                        __RPC__out DWORD *pdwAttributes,
                        __RPC__out DWORD *pdwAttributesEx,
                                    __RPC__inout_opt _WAVEFORMATEX *pAudioFormat,
                                    __RPC__inout_opt _VIDEOINFOHEADER *pVideoFormat);
        END_INTERFACE
    } IWMDMOperation2Vtbl;
    interface IWMDMOperation2
    {
        CONST_VTBL struct IWMDMOperation2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginRead(This) )
    ( (This)->lpVtbl -> BeginWrite(This) )
    ( (This)->lpVtbl -> GetObjectName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> SetObjectName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetObjectAttributes(This,pdwAttributes,pFormat) )
    ( (This)->lpVtbl -> SetObjectAttributes(This,dwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetObjectTotalSize(This,pdwSize,pdwSizeHigh) )
    ( (This)->lpVtbl -> SetObjectTotalSize(This,dwSize,dwSizeHigh) )
    ( (This)->lpVtbl -> TransferObjectData(This,pData,pdwSize,abMac) )
    ( (This)->lpVtbl -> End(This,phCompletionCode,pNewObject) )
    ( (This)->lpVtbl -> SetObjectAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat) )
    ( (This)->lpVtbl -> GetObjectAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) )
EXTERN_C const IID IID_IWMDMOperation3;
    typedef struct IWMDMOperation3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMOperation3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMOperation3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMOperation3 * This);
        HRESULT ( STDMETHODCALLTYPE *BeginRead )(
            __RPC__in IWMDMOperation3 * This);
        HRESULT ( STDMETHODCALLTYPE *BeginWrite )(
            __RPC__in IWMDMOperation3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetObjectName )(
            __RPC__in IWMDMOperation3 * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *SetObjectName )(
            __RPC__in IWMDMOperation3 * This,
                                        __RPC__in_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetObjectAttributes )(
            __RPC__in IWMDMOperation3 * This,
                        __RPC__out DWORD *pdwAttributes,
                                    __RPC__inout_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *SetObjectAttributes )(
            __RPC__in IWMDMOperation3 * This,
                       DWORD dwAttributes,
                               __RPC__in_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetObjectTotalSize )(
            __RPC__in IWMDMOperation3 * This,
                        __RPC__out DWORD *pdwSize,
                        __RPC__out DWORD *pdwSizeHigh);
        HRESULT ( STDMETHODCALLTYPE *SetObjectTotalSize )(
            __RPC__in IWMDMOperation3 * This,
                       DWORD dwSize,
                       DWORD dwSizeHigh);
        HRESULT ( STDMETHODCALLTYPE *TransferObjectData )(
            __RPC__in IWMDMOperation3 * This,
                                     __RPC__inout_ecount_full(*pdwSize) BYTE *pData,
                            __RPC__inout DWORD *pdwSize,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *End )(
            __RPC__in IWMDMOperation3 * This,
                       __RPC__in HRESULT *phCompletionCode,
                       __RPC__in_opt IUnknown *pNewObject);
        HRESULT ( STDMETHODCALLTYPE *TransferObjectDataOnClearChannel )(
            __RPC__in IWMDMOperation3 * This,
                                     __RPC__inout_ecount_full(*pdwSize) BYTE *pData,
                            __RPC__inout DWORD *pdwSize);
        END_INTERFACE
    } IWMDMOperation3Vtbl;
    interface IWMDMOperation3
    {
        CONST_VTBL struct IWMDMOperation3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginRead(This) )
    ( (This)->lpVtbl -> BeginWrite(This) )
    ( (This)->lpVtbl -> GetObjectName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> SetObjectName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetObjectAttributes(This,pdwAttributes,pFormat) )
    ( (This)->lpVtbl -> SetObjectAttributes(This,dwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetObjectTotalSize(This,pdwSize,pdwSizeHigh) )
    ( (This)->lpVtbl -> SetObjectTotalSize(This,dwSize,dwSizeHigh) )
    ( (This)->lpVtbl -> TransferObjectData(This,pData,pdwSize,abMac) )
    ( (This)->lpVtbl -> End(This,phCompletionCode,pNewObject) )
    ( (This)->lpVtbl -> TransferObjectDataOnClearChannel(This,pData,pdwSize) )
EXTERN_C const IID IID_IWMDMProgress;
    typedef struct IWMDMProgressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMProgress * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMProgress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMProgress * This);
        HRESULT ( STDMETHODCALLTYPE *Begin )(
            __RPC__in IWMDMProgress * This,
                       DWORD dwEstimatedTicks);
        HRESULT ( STDMETHODCALLTYPE *Progress )(
            __RPC__in IWMDMProgress * This,
                       DWORD dwTranspiredTicks);
        HRESULT ( STDMETHODCALLTYPE *End )(
            __RPC__in IWMDMProgress * This);
        END_INTERFACE
    } IWMDMProgressVtbl;
    interface IWMDMProgress
    {
        CONST_VTBL struct IWMDMProgressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin(This,dwEstimatedTicks) )
    ( (This)->lpVtbl -> Progress(This,dwTranspiredTicks) )
    ( (This)->lpVtbl -> End(This) )
EXTERN_C const IID IID_IWMDMProgress2;
    typedef struct IWMDMProgress2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMProgress2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMProgress2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMProgress2 * This);
        HRESULT ( STDMETHODCALLTYPE *Begin )(
            __RPC__in IWMDMProgress2 * This,
                       DWORD dwEstimatedTicks);
        HRESULT ( STDMETHODCALLTYPE *Progress )(
            __RPC__in IWMDMProgress2 * This,
                       DWORD dwTranspiredTicks);
        HRESULT ( STDMETHODCALLTYPE *End )(
            __RPC__in IWMDMProgress2 * This);
        HRESULT ( STDMETHODCALLTYPE *End2 )(
            __RPC__in IWMDMProgress2 * This,
                       HRESULT hrCompletionCode);
        END_INTERFACE
    } IWMDMProgress2Vtbl;
    interface IWMDMProgress2
    {
        CONST_VTBL struct IWMDMProgress2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin(This,dwEstimatedTicks) )
    ( (This)->lpVtbl -> Progress(This,dwTranspiredTicks) )
    ( (This)->lpVtbl -> End(This) )
    ( (This)->lpVtbl -> End2(This,hrCompletionCode) )
EXTERN_C const IID IID_IWMDMProgress3;
    typedef struct IWMDMProgress3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMProgress3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMProgress3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMProgress3 * This);
        HRESULT ( STDMETHODCALLTYPE *Begin )(
            __RPC__in IWMDMProgress3 * This,
                       DWORD dwEstimatedTicks);
        HRESULT ( STDMETHODCALLTYPE *Progress )(
            __RPC__in IWMDMProgress3 * This,
                       DWORD dwTranspiredTicks);
        HRESULT ( STDMETHODCALLTYPE *End )(
            __RPC__in IWMDMProgress3 * This);
        HRESULT ( STDMETHODCALLTYPE *End2 )(
            __RPC__in IWMDMProgress3 * This,
                       HRESULT hrCompletionCode);
        HRESULT ( STDMETHODCALLTYPE *Begin3 )(
            __RPC__in IWMDMProgress3 * This,
                       GUID EventId,
                       DWORD dwEstimatedTicks,
                                    __RPC__inout_opt OPAQUECOMMAND *pContext);
        HRESULT ( STDMETHODCALLTYPE *Progress3 )(
            __RPC__in IWMDMProgress3 * This,
                       GUID EventId,
                       DWORD dwTranspiredTicks,
                                    __RPC__inout_opt OPAQUECOMMAND *pContext);
        HRESULT ( STDMETHODCALLTYPE *End3 )(
            __RPC__in IWMDMProgress3 * This,
                       GUID EventId,
                       HRESULT hrCompletionCode,
                                    __RPC__inout_opt OPAQUECOMMAND *pContext);
        END_INTERFACE
    } IWMDMProgress3Vtbl;
    interface IWMDMProgress3
    {
        CONST_VTBL struct IWMDMProgress3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin(This,dwEstimatedTicks) )
    ( (This)->lpVtbl -> Progress(This,dwTranspiredTicks) )
    ( (This)->lpVtbl -> End(This) )
    ( (This)->lpVtbl -> End2(This,hrCompletionCode) )
    ( (This)->lpVtbl -> Begin3(This,EventId,dwEstimatedTicks,pContext) )
    ( (This)->lpVtbl -> Progress3(This,EventId,dwTranspiredTicks,pContext) )
    ( (This)->lpVtbl -> End3(This,EventId,hrCompletionCode,pContext) )
EXTERN_C const IID IID_IWMDMDevice;
    typedef struct IWMDMDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMDevice * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMDevice * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IWMDMDevice * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetManufacturer )(
            __RPC__in IWMDMDevice * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IWMDMDevice * This,
                        __RPC__out DWORD *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IWMDMDevice * This,
                        __RPC__out DWORD *pdwType);
        HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )(
            __RPC__in IWMDMDevice * This,
                        __RPC__out PWMDMID pSerialNumber,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *GetPowerSource )(
            __RPC__in IWMDMDevice * This,
                        __RPC__out DWORD *pdwPowerSource,
                        __RPC__out DWORD *pdwPercentRemaining);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IWMDMDevice * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceIcon )(
            __RPC__in IWMDMDevice * This,
                        __RPC__out ULONG *hIcon);
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )(
            __RPC__in IWMDMDevice * This,
                        __RPC__deref_out_opt IWMDMEnumStorage **ppEnumStorage);
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport )(
            __RPC__in IWMDMDevice * This,
                                          __RPC__deref_out_ecount_full_opt(*pnFormatCount) _WAVEFORMATEX **ppFormatEx,
                        __RPC__out UINT *pnFormatCount,
                                          __RPC__deref_out_ecount_full_opt(*pnMimeTypeCount) LPWSTR **pppwszMimeType,
                        __RPC__out UINT *pnMimeTypeCount);
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )(
            __RPC__in IWMDMDevice * This,
                            __RPC__inout OPAQUECOMMAND *pCommand);
        END_INTERFACE
    } IWMDMDeviceVtbl;
    interface IWMDMDevice
    {
        CONST_VTBL struct IWMDMDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> GetType(This,pdwType) )
    ( (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac) )
    ( (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> GetDeviceIcon(This,hIcon) )
    ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
    ( (This)->lpVtbl -> GetFormatSupport(This,ppFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) )
    ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
EXTERN_C const IID IID_IWMDMDevice2;
    typedef struct IWMDMDevice2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMDevice2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMDevice2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMDevice2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IWMDMDevice2 * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetManufacturer )(
            __RPC__in IWMDMDevice2 * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IWMDMDevice2 * This,
                        __RPC__out DWORD *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IWMDMDevice2 * This,
                        __RPC__out DWORD *pdwType);
        HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )(
            __RPC__in IWMDMDevice2 * This,
                        __RPC__out PWMDMID pSerialNumber,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *GetPowerSource )(
            __RPC__in IWMDMDevice2 * This,
                        __RPC__out DWORD *pdwPowerSource,
                        __RPC__out DWORD *pdwPercentRemaining);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IWMDMDevice2 * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceIcon )(
            __RPC__in IWMDMDevice2 * This,
                        __RPC__out ULONG *hIcon);
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )(
            __RPC__in IWMDMDevice2 * This,
                        __RPC__deref_out_opt IWMDMEnumStorage **ppEnumStorage);
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport )(
            __RPC__in IWMDMDevice2 * This,
                                          __RPC__deref_out_ecount_full_opt(*pnFormatCount) _WAVEFORMATEX **ppFormatEx,
                        __RPC__out UINT *pnFormatCount,
                                          __RPC__deref_out_ecount_full_opt(*pnMimeTypeCount) LPWSTR **pppwszMimeType,
                        __RPC__out UINT *pnMimeTypeCount);
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )(
            __RPC__in IWMDMDevice2 * This,
                            __RPC__inout OPAQUECOMMAND *pCommand);
        HRESULT ( STDMETHODCALLTYPE *GetStorage )(
            __RPC__in IWMDMDevice2 * This,
                               __RPC__in_string LPCWSTR pszStorageName,
                        __RPC__deref_out_opt IWMDMStorage **ppStorage);
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport2 )(
            __RPC__in IWMDMDevice2 * This,
                       DWORD dwFlags,
                                          __RPC__deref_out_ecount_full_opt(*pnAudioFormatCount) _WAVEFORMATEX **ppAudioFormatEx,
                             __RPC__out UINT *pnAudioFormatCount,
                                          __RPC__deref_out_ecount_full_opt(*pnVideoFormatCount) _VIDEOINFOHEADER **ppVideoFormatEx,
                             __RPC__out UINT *pnVideoFormatCount,
                                          __RPC__deref_out_ecount_full_opt(*pnFileTypeCount) WMFILECAPABILITIES **ppFileType,
                             __RPC__out UINT *pnFileTypeCount);
        HRESULT ( STDMETHODCALLTYPE *GetSpecifyPropertyPages )(
            __RPC__in IWMDMDevice2 * This,
                             __RPC__deref_out_opt ISpecifyPropertyPages **ppSpecifyPropPages,
                                               __RPC__deref_out_ecount_full_opt(*pcUnks) IUnknown ***pppUnknowns,
                             __RPC__out ULONG *pcUnks);
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalName )(
            __RPC__in IWMDMDevice2 * This,
                                 __RPC__out_ecount_full(nMaxChars) LPWSTR pwszPnPName,
                       UINT nMaxChars);
        END_INTERFACE
    } IWMDMDevice2Vtbl;
    interface IWMDMDevice2
    {
        CONST_VTBL struct IWMDMDevice2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> GetType(This,pdwType) )
    ( (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac) )
    ( (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> GetDeviceIcon(This,hIcon) )
    ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
    ( (This)->lpVtbl -> GetFormatSupport(This,ppFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) )
    ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
    ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
    ( (This)->lpVtbl -> GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount) )
    ( (This)->lpVtbl -> GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks) )
    ( (This)->lpVtbl -> GetCanonicalName(This,pwszPnPName,nMaxChars) )
EXTERN_C const IID IID_IWMDMDevice3;
    typedef struct IWMDMDevice3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMDevice3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMDevice3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMDevice3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IWMDMDevice3 * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetManufacturer )(
            __RPC__in IWMDMDevice3 * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IWMDMDevice3 * This,
                        __RPC__out DWORD *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IWMDMDevice3 * This,
                        __RPC__out DWORD *pdwType);
        HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )(
            __RPC__in IWMDMDevice3 * This,
                        __RPC__out PWMDMID pSerialNumber,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *GetPowerSource )(
            __RPC__in IWMDMDevice3 * This,
                        __RPC__out DWORD *pdwPowerSource,
                        __RPC__out DWORD *pdwPercentRemaining);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IWMDMDevice3 * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceIcon )(
            __RPC__in IWMDMDevice3 * This,
                        __RPC__out ULONG *hIcon);
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )(
            __RPC__in IWMDMDevice3 * This,
                        __RPC__deref_out_opt IWMDMEnumStorage **ppEnumStorage);
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport )(
            __RPC__in IWMDMDevice3 * This,
                                          __RPC__deref_out_ecount_full_opt(*pnFormatCount) _WAVEFORMATEX **ppFormatEx,
                        __RPC__out UINT *pnFormatCount,
                                          __RPC__deref_out_ecount_full_opt(*pnMimeTypeCount) LPWSTR **pppwszMimeType,
                        __RPC__out UINT *pnMimeTypeCount);
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )(
            __RPC__in IWMDMDevice3 * This,
                            __RPC__inout OPAQUECOMMAND *pCommand);
        HRESULT ( STDMETHODCALLTYPE *GetStorage )(
            __RPC__in IWMDMDevice3 * This,
                               __RPC__in_string LPCWSTR pszStorageName,
                        __RPC__deref_out_opt IWMDMStorage **ppStorage);
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport2 )(
            __RPC__in IWMDMDevice3 * This,
                       DWORD dwFlags,
                                          __RPC__deref_out_ecount_full_opt(*pnAudioFormatCount) _WAVEFORMATEX **ppAudioFormatEx,
                             __RPC__out UINT *pnAudioFormatCount,
                                          __RPC__deref_out_ecount_full_opt(*pnVideoFormatCount) _VIDEOINFOHEADER **ppVideoFormatEx,
                             __RPC__out UINT *pnVideoFormatCount,
                                          __RPC__deref_out_ecount_full_opt(*pnFileTypeCount) WMFILECAPABILITIES **ppFileType,
                             __RPC__out UINT *pnFileTypeCount);
        HRESULT ( STDMETHODCALLTYPE *GetSpecifyPropertyPages )(
            __RPC__in IWMDMDevice3 * This,
                             __RPC__deref_out_opt ISpecifyPropertyPages **ppSpecifyPropPages,
                                               __RPC__deref_out_ecount_full_opt(*pcUnks) IUnknown ***pppUnknowns,
                             __RPC__out ULONG *pcUnks);
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalName )(
            __RPC__in IWMDMDevice3 * This,
                                 __RPC__out_ecount_full(nMaxChars) LPWSTR pwszPnPName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IWMDMDevice3 * This,
                       __RPC__in LPCWSTR pwszPropName,
                        __RPC__out PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IWMDMDevice3 * This,
                       __RPC__in LPCWSTR pwszPropName,
                       __RPC__in const PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetFormatCapability )(
            __RPC__in IWMDMDevice3 * This,
                       WMDM_FORMATCODE format,
                        __RPC__out WMDM_FORMAT_CAPABILITY *pFormatSupport);
        HRESULT ( STDMETHODCALLTYPE *DeviceIoControl )(
            __RPC__in IWMDMDevice3 * This,
                       DWORD dwIoControlCode,
                                __RPC__in_ecount_full(nInBufferSize) BYTE *lpInBuffer,
                       DWORD nInBufferSize,
                                 __RPC__out_ecount_full(*pnOutBufferSize) BYTE *lpOutBuffer,
                            __RPC__inout LPDWORD pnOutBufferSize);
        HRESULT ( STDMETHODCALLTYPE *FindStorage )(
            __RPC__in IWMDMDevice3 * This,
                       WMDM_FIND_SCOPE findScope,
                       __RPC__in LPCWSTR pwszUniqueID,
                        __RPC__deref_out_opt IWMDMStorage **ppStorage);
        END_INTERFACE
    } IWMDMDevice3Vtbl;
    interface IWMDMDevice3
    {
        CONST_VTBL struct IWMDMDevice3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> GetType(This,pdwType) )
    ( (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac) )
    ( (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> GetDeviceIcon(This,hIcon) )
    ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
    ( (This)->lpVtbl -> GetFormatSupport(This,ppFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) )
    ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
    ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
    ( (This)->lpVtbl -> GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount) )
    ( (This)->lpVtbl -> GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks) )
    ( (This)->lpVtbl -> GetCanonicalName(This,pwszPnPName,nMaxChars) )
    ( (This)->lpVtbl -> GetProperty(This,pwszPropName,pValue) )
    ( (This)->lpVtbl -> SetProperty(This,pwszPropName,pValue) )
    ( (This)->lpVtbl -> GetFormatCapability(This,format,pFormatSupport) )
    ( (This)->lpVtbl -> DeviceIoControl(This,dwIoControlCode,lpInBuffer,nInBufferSize,lpOutBuffer,pnOutBufferSize) )
    ( (This)->lpVtbl -> FindStorage(This,findScope,pwszUniqueID,ppStorage) )
EXTERN_C const IID IID_IWMDMDeviceSession;
    typedef struct IWMDMDeviceSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMDeviceSession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMDeviceSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMDeviceSession * This);
        HRESULT ( STDMETHODCALLTYPE *BeginSession )(
            __RPC__in IWMDMDeviceSession * This,
                       WMDM_SESSION_TYPE type,
                                        __RPC__in_ecount_full_opt(dwSizeCtx) BYTE *pCtx,
                       DWORD dwSizeCtx);
        HRESULT ( STDMETHODCALLTYPE *EndSession )(
            __RPC__in IWMDMDeviceSession * This,
                       WMDM_SESSION_TYPE type,
                                        __RPC__in_ecount_full_opt(dwSizeCtx) BYTE *pCtx,
                       DWORD dwSizeCtx);
        END_INTERFACE
    } IWMDMDeviceSessionVtbl;
    interface IWMDMDeviceSession
    {
        CONST_VTBL struct IWMDMDeviceSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginSession(This,type,pCtx,dwSizeCtx) )
    ( (This)->lpVtbl -> EndSession(This,type,pCtx,dwSizeCtx) )
EXTERN_C const IID IID_IWMDMEnumDevice;
    typedef struct IWMDMEnumDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMEnumDevice * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMEnumDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMEnumDevice * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IWMDMEnumDevice * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) IWMDMDevice **ppDevice,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IWMDMEnumDevice * This,
                       ULONG celt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IWMDMEnumDevice * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IWMDMEnumDevice * This,
                        __RPC__deref_out_opt IWMDMEnumDevice **ppEnumDevice);
        END_INTERFACE
    } IWMDMEnumDeviceVtbl;
    interface IWMDMEnumDevice
    {
        CONST_VTBL struct IWMDMEnumDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppDevice,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnumDevice) )
EXTERN_C const IID IID_IWMDMDeviceControl;
    typedef struct IWMDMDeviceControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMDeviceControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMDeviceControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMDeviceControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IWMDMDeviceControl * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in IWMDMDeviceControl * This,
                        __RPC__out DWORD *pdwCapabilitiesMask);
        HRESULT ( STDMETHODCALLTYPE *Play )(
            __RPC__in IWMDMDeviceControl * This);
        HRESULT ( STDMETHODCALLTYPE *Record )(
            __RPC__in IWMDMDeviceControl * This,
                       __RPC__in _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IWMDMDeviceControl * This);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IWMDMDeviceControl * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IWMDMDeviceControl * This);
        HRESULT ( STDMETHODCALLTYPE *Seek )(
            __RPC__in IWMDMDeviceControl * This,
                       UINT fuMode,
                       int nOffset);
        END_INTERFACE
    } IWMDMDeviceControlVtbl;
    interface IWMDMDeviceControl
    {
        CONST_VTBL struct IWMDMDeviceControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> GetCapabilities(This,pdwCapabilitiesMask) )
    ( (This)->lpVtbl -> Play(This) )
    ( (This)->lpVtbl -> Record(This,pFormat) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Seek(This,fuMode,nOffset) )
EXTERN_C const IID IID_IWMDMEnumStorage;
    typedef struct IWMDMEnumStorageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMEnumStorage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMEnumStorage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMEnumStorage * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IWMDMEnumStorage * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) IWMDMStorage **ppStorage,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IWMDMEnumStorage * This,
                       ULONG celt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IWMDMEnumStorage * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IWMDMEnumStorage * This,
                        __RPC__deref_out_opt IWMDMEnumStorage **ppEnumStorage);
        END_INTERFACE
    } IWMDMEnumStorageVtbl;
    interface IWMDMEnumStorage
    {
        CONST_VTBL struct IWMDMEnumStorageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppStorage,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnumStorage) )
EXTERN_C const IID IID_IWMDMStorageControl;
    typedef struct IWMDMStorageControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMStorageControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMStorageControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMStorageControl * This);
        HRESULT ( STDMETHODCALLTYPE *Insert )(
            __RPC__in IWMDMStorageControl * This,
                       UINT fuMode,
                               __RPC__in_opt LPWSTR pwszFile,
                               __RPC__in_opt IWMDMOperation *pOperation,
                               __RPC__in_opt IWMDMProgress *pProgress,
                        __RPC__deref_out_opt IWMDMStorage **ppNewObject);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IWMDMStorageControl * This,
                       UINT fuMode,
                       __RPC__in_opt IWMDMProgress *pProgress);
        HRESULT ( STDMETHODCALLTYPE *Rename )(
            __RPC__in IWMDMStorageControl * This,
                       UINT fuMode,
                       __RPC__in LPWSTR pwszNewName,
                       __RPC__in_opt IWMDMProgress *pProgress);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            __RPC__in IWMDMStorageControl * This,
                       UINT fuMode,
                               __RPC__in_opt LPWSTR pwszFile,
                       __RPC__in_opt IWMDMProgress *pProgress,
                       __RPC__in_opt IWMDMOperation *pOperation);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IWMDMStorageControl * This,
                       UINT fuMode,
                       __RPC__in_opt IWMDMStorage *pTargetObject,
                       __RPC__in_opt IWMDMProgress *pProgress);
        END_INTERFACE
    } IWMDMStorageControlVtbl;
    interface IWMDMStorageControl
    {
        CONST_VTBL struct IWMDMStorageControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Insert(This,fuMode,pwszFile,pOperation,pProgress,ppNewObject) )
    ( (This)->lpVtbl -> Delete(This,fuMode,pProgress) )
    ( (This)->lpVtbl -> Rename(This,fuMode,pwszNewName,pProgress) )
    ( (This)->lpVtbl -> Read(This,fuMode,pwszFile,pProgress,pOperation) )
    ( (This)->lpVtbl -> Move(This,fuMode,pTargetObject,pProgress) )
EXTERN_C const IID IID_IWMDMStorageControl2;
    typedef struct IWMDMStorageControl2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMStorageControl2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMStorageControl2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMStorageControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *Insert )(
            __RPC__in IWMDMStorageControl2 * This,
                       UINT fuMode,
                               __RPC__in_opt LPWSTR pwszFile,
                               __RPC__in_opt IWMDMOperation *pOperation,
                               __RPC__in_opt IWMDMProgress *pProgress,
                        __RPC__deref_out_opt IWMDMStorage **ppNewObject);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IWMDMStorageControl2 * This,
                       UINT fuMode,
                       __RPC__in_opt IWMDMProgress *pProgress);
        HRESULT ( STDMETHODCALLTYPE *Rename )(
            __RPC__in IWMDMStorageControl2 * This,
                       UINT fuMode,
                       __RPC__in LPWSTR pwszNewName,
                       __RPC__in_opt IWMDMProgress *pProgress);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            __RPC__in IWMDMStorageControl2 * This,
                       UINT fuMode,
                               __RPC__in_opt LPWSTR pwszFile,
                       __RPC__in_opt IWMDMProgress *pProgress,
                       __RPC__in_opt IWMDMOperation *pOperation);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IWMDMStorageControl2 * This,
                       UINT fuMode,
                       __RPC__in_opt IWMDMStorage *pTargetObject,
                       __RPC__in_opt IWMDMProgress *pProgress);
        HRESULT ( STDMETHODCALLTYPE *Insert2 )(
            __RPC__in IWMDMStorageControl2 * This,
                       UINT fuMode,
                                       __RPC__in_opt_string LPWSTR pwszFileSource,
                                       __RPC__in_opt_string LPWSTR pwszFileDest,
                               __RPC__in_opt IWMDMOperation *pOperation,
                               __RPC__in_opt IWMDMProgress *pProgress,
                       __RPC__in_opt IUnknown *pUnknown,
                                    __RPC__deref_opt_inout_opt IWMDMStorage **ppNewObject);
        END_INTERFACE
    } IWMDMStorageControl2Vtbl;
    interface IWMDMStorageControl2
    {
        CONST_VTBL struct IWMDMStorageControl2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Insert(This,fuMode,pwszFile,pOperation,pProgress,ppNewObject) )
    ( (This)->lpVtbl -> Delete(This,fuMode,pProgress) )
    ( (This)->lpVtbl -> Rename(This,fuMode,pwszNewName,pProgress) )
    ( (This)->lpVtbl -> Read(This,fuMode,pwszFile,pProgress,pOperation) )
    ( (This)->lpVtbl -> Move(This,fuMode,pTargetObject,pProgress) )
    ( (This)->lpVtbl -> Insert2(This,fuMode,pwszFileSource,pwszFileDest,pOperation,pProgress,pUnknown,ppNewObject) )
EXTERN_C const IID IID_IWMDMStorageControl3;
    typedef struct IWMDMStorageControl3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMStorageControl3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMStorageControl3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMStorageControl3 * This);
        HRESULT ( STDMETHODCALLTYPE *Insert )(
            __RPC__in IWMDMStorageControl3 * This,
                       UINT fuMode,
                               __RPC__in_opt LPWSTR pwszFile,
                               __RPC__in_opt IWMDMOperation *pOperation,
                               __RPC__in_opt IWMDMProgress *pProgress,
                        __RPC__deref_out_opt IWMDMStorage **ppNewObject);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IWMDMStorageControl3 * This,
                       UINT fuMode,
                       __RPC__in_opt IWMDMProgress *pProgress);
        HRESULT ( STDMETHODCALLTYPE *Rename )(
            __RPC__in IWMDMStorageControl3 * This,
                       UINT fuMode,
                       __RPC__in LPWSTR pwszNewName,
                       __RPC__in_opt IWMDMProgress *pProgress);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            __RPC__in IWMDMStorageControl3 * This,
                       UINT fuMode,
                               __RPC__in_opt LPWSTR pwszFile,
                       __RPC__in_opt IWMDMProgress *pProgress,
                       __RPC__in_opt IWMDMOperation *pOperation);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IWMDMStorageControl3 * This,
                       UINT fuMode,
                       __RPC__in_opt IWMDMStorage *pTargetObject,
                       __RPC__in_opt IWMDMProgress *pProgress);
        HRESULT ( STDMETHODCALLTYPE *Insert2 )(
            __RPC__in IWMDMStorageControl3 * This,
                       UINT fuMode,
                                       __RPC__in_opt_string LPWSTR pwszFileSource,
                                       __RPC__in_opt_string LPWSTR pwszFileDest,
                               __RPC__in_opt IWMDMOperation *pOperation,
                               __RPC__in_opt IWMDMProgress *pProgress,
                       __RPC__in_opt IUnknown *pUnknown,
                                    __RPC__deref_opt_inout_opt IWMDMStorage **ppNewObject);
        HRESULT ( STDMETHODCALLTYPE *Insert3 )(
            __RPC__in IWMDMStorageControl3 * This,
                       UINT fuMode,
                       UINT fuType,
                                       __RPC__in_opt_string LPWSTR pwszFileSource,
                                       __RPC__in_opt_string LPWSTR pwszFileDest,
                               __RPC__in_opt IWMDMOperation *pOperation,
                               __RPC__in_opt IWMDMProgress *pProgress,
                               __RPC__in_opt IWMDMMetaData *pMetaData,
                       __RPC__in_opt IUnknown *pUnknown,
                                    __RPC__deref_opt_inout_opt IWMDMStorage **ppNewObject);
        END_INTERFACE
    } IWMDMStorageControl3Vtbl;
    interface IWMDMStorageControl3
    {
        CONST_VTBL struct IWMDMStorageControl3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Insert(This,fuMode,pwszFile,pOperation,pProgress,ppNewObject) )
    ( (This)->lpVtbl -> Delete(This,fuMode,pProgress) )
    ( (This)->lpVtbl -> Rename(This,fuMode,pwszNewName,pProgress) )
    ( (This)->lpVtbl -> Read(This,fuMode,pwszFile,pProgress,pOperation) )
    ( (This)->lpVtbl -> Move(This,fuMode,pTargetObject,pProgress) )
    ( (This)->lpVtbl -> Insert2(This,fuMode,pwszFileSource,pwszFileDest,pOperation,pProgress,pUnknown,ppNewObject) )
    ( (This)->lpVtbl -> Insert3(This,fuMode,fuType,pwszFileSource,pwszFileDest,pOperation,pProgress,pMetaData,pUnknown,ppNewObject) )
EXTERN_C const IID IID_IWMDMObjectInfo;
    typedef struct IWMDMObjectInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMObjectInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMObjectInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMObjectInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetPlayLength )(
            __RPC__in IWMDMObjectInfo * This,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *SetPlayLength )(
            __RPC__in IWMDMObjectInfo * This,
                       DWORD dwLength);
        HRESULT ( STDMETHODCALLTYPE *GetPlayOffset )(
            __RPC__in IWMDMObjectInfo * This,
                        __RPC__out DWORD *pdwOffset);
        HRESULT ( STDMETHODCALLTYPE *SetPlayOffset )(
            __RPC__in IWMDMObjectInfo * This,
                       DWORD dwOffset);
        HRESULT ( STDMETHODCALLTYPE *GetTotalLength )(
            __RPC__in IWMDMObjectInfo * This,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetLastPlayPosition )(
            __RPC__in IWMDMObjectInfo * This,
                        __RPC__out DWORD *pdwLastPos);
        HRESULT ( STDMETHODCALLTYPE *GetLongestPlayPosition )(
            __RPC__in IWMDMObjectInfo * This,
                        __RPC__out DWORD *pdwLongestPos);
        END_INTERFACE
    } IWMDMObjectInfoVtbl;
    interface IWMDMObjectInfo
    {
        CONST_VTBL struct IWMDMObjectInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPlayLength(This,pdwLength) )
    ( (This)->lpVtbl -> SetPlayLength(This,dwLength) )
    ( (This)->lpVtbl -> GetPlayOffset(This,pdwOffset) )
    ( (This)->lpVtbl -> SetPlayOffset(This,dwOffset) )
    ( (This)->lpVtbl -> GetTotalLength(This,pdwLength) )
    ( (This)->lpVtbl -> GetLastPlayPosition(This,pdwLastPos) )
    ( (This)->lpVtbl -> GetLongestPlayPosition(This,pdwLongestPos) )
EXTERN_C const IID IID_IWMDMRevoked;
    typedef struct IWMDMRevokedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMRevoked * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMRevoked * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMRevoked * This);
        HRESULT ( STDMETHODCALLTYPE *GetRevocationURL )(
            __RPC__in IWMDMRevoked * This,
                                                      __RPC__deref_inout_ecount_full_opt_string(*pdwBufferLen) LPWSTR *ppwszRevocationURL,
                            __RPC__inout DWORD *pdwBufferLen,
                        __RPC__out DWORD *pdwRevokedBitFlag);
        END_INTERFACE
    } IWMDMRevokedVtbl;
    interface IWMDMRevoked
    {
        CONST_VTBL struct IWMDMRevokedVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRevocationURL(This,ppwszRevocationURL,pdwBufferLen,pdwRevokedBitFlag) )
EXTERN_C const IID IID_IWMDMNotification;
    typedef struct IWMDMNotificationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMNotification * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMNotification * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMNotification * This);
        HRESULT ( STDMETHODCALLTYPE *WMDMMessage )(
            __RPC__in IWMDMNotification * This,
                       DWORD dwMessageType,
                               __RPC__in_string LPCWSTR pwszCanonicalName);
        END_INTERFACE
    } IWMDMNotificationVtbl;
    interface IWMDMNotification
    {
        CONST_VTBL struct IWMDMNotificationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> WMDMMessage(This,dwMessageType,pwszCanonicalName) )
static const WCHAR *g_wszWMDMFileName = L"WMDM/FileName";
static const WCHAR *g_wszWMDMFormatCode = L"WMDM/FormatCode";
static const WCHAR *g_wszWMDMLastModifiedDate = L"WMDM/LastModifiedDate";
static const WCHAR *g_wszWMDMFileCreationDate = L"WMDM/FileCreationDate";
static const WCHAR *g_wszWMDMFileSize = L"WMDM/FileSize";
static const WCHAR *g_wszWMDMFileAttributes = L"WMDM/FileAttributes";
static const WCHAR *g_wszAudioWAVECodec = L"WMDM/AudioWAVECodec";
static const WCHAR *g_wszVideoFourCCCodec = L"WMDM/VideoFourCCCodec";
static const WCHAR *g_wszWMDMTitle = L"WMDM/Title";
static const WCHAR *g_wszWMDMAuthor = L"WMDM/Author";
static const WCHAR *g_wszWMDMDescription = L"WMDM/Description";
static const WCHAR *g_wszWMDMIsProtected = L"WMDM/IsProtected";
static const WCHAR *g_wszWMDMAlbumTitle = L"WMDM/AlbumTitle";
static const WCHAR *g_wszWMDMAlbumArtist = L"WMDM/AlbumArtist";
static const WCHAR *g_wszWMDMTrack = L"WMDM/Track";
static const WCHAR *g_wszWMDMGenre = L"WMDM/Genre";
static const WCHAR *g_wszWMDMTrackMood = L"WMDM/TrackMood";
static const WCHAR *g_wszWMDMAlbumCoverFormat = L"WMDM/AlbumCoverFormat";
static const WCHAR *g_wszWMDMAlbumCoverSize = L"WMDM/AlbumCoverSize";
static const WCHAR *g_wszWMDMAlbumCoverHeight = L"WMDM/AlbumCoverHeight";
static const WCHAR *g_wszWMDMAlbumCoverWidth = L"WMDM/AlbumCoverWidth";
static const WCHAR *g_wszWMDMAlbumCoverDuration = L"WMDM/AlbumCoverDuration";
static const WCHAR *g_wszWMDMAlbumCoverData = L"WMDM/AlbumCoverData";
static const WCHAR *g_wszWMDMYear = L"WMDM/Year";
static const WCHAR *g_wszWMDMComposer = L"WMDM/Composer";
static const WCHAR *g_wszWMDMCodec = L"WMDM/Codec";
static const WCHAR *g_wszWMDMDRMId = L"WMDM/DRMId";
static const WCHAR *g_wszWMDMBitrate = L"WMDM/Bitrate";
static const WCHAR *g_wszWMDMBitRateType = L"WMDM/BitRateType";
static const WCHAR *g_wszWMDMSampleRate = L"WMDM/SampleRate";
static const WCHAR *g_wszWMDMNumChannels = L"WMDM/NumChannels";
static const WCHAR *g_wszWMDMBlockAlignment = L"WMDM/BlockAlignment";
static const WCHAR *g_wszWMDMAudioBitDepth = L"WMDM/AudioBitDepth";
static const WCHAR *g_wszWMDMTotalBitrate = L"WMDM/TotalBitrate";
static const WCHAR *g_wszWMDMVideoBitrate = L"WMDM/VideoBitrate";
static const WCHAR *g_wszWMDMFrameRate = L"WMDM/FrameRate";
static const WCHAR *g_wszWMDMScanType = L"WMDM/ScanType";
static const WCHAR *g_wszWMDMKeyFrameDistance = L"WMDM/KeyFrameDistance";
static const WCHAR *g_wszWMDMBufferSize = L"WMDM/BufferSize";
static const WCHAR *g_wszWMDMQualitySetting = L"WMDM/QualitySetting";
static const WCHAR *g_wszWMDMEncodingProfile = L"WMDM/EncodingProfile";
static const WCHAR *g_wszWMDMDuration = L"WMDM/Duration";
static const WCHAR *g_wszWMDMAlbumArt = L"WMDM/AlbumArt";
static const WCHAR *g_wszWMDMBuyNow = L"WMDM/BuyNow";
static const WCHAR *g_wszWMDMNonConsumable = L"WMDM/NonConsumable";
static const WCHAR *g_wszWMDMediaClassPrimaryID = L"WMDM/MediaClassPrimaryID";
static const WCHAR *g_wszWMDMMediaClassSecondaryID = L"WMDM/MediaClassSecondaryID";
static const WCHAR *g_wszWMDMUserEffectiveRating = L"WMDM/UserEffectiveRating";
static const WCHAR *g_wszWMDMUserRating = L"WMDM/UserRating";
static const WCHAR *g_wszWMDMUserRatingOnDevice = L"WMDM/UserRatingOnDevice";
static const WCHAR *g_wszWMDMPlayCount = L"WMDM/PlayCount";
static const WCHAR *g_wszWMDMDevicePlayCount = L"WMDM/DevicePlayCount";
static const WCHAR *g_wszWMDMAuthorDate = L"WMDM/AuthorDate";
static const WCHAR *g_wszWMDMUserLastPlayTime = L"WMDM/UserLastPlayTime";
static const WCHAR *g_wszWMDMSubTitle = L"WMDM/SubTitle";
static const WCHAR *g_wszWMDMSubTitleDescription = L"WMDM/SubTitleDescription";
static const WCHAR *g_wszWMDMMediaCredits = L"WMDM/MediaCredits";
static const WCHAR *g_wszWMDMMediaStationName = L"WMDM/MediaStationName";
static const WCHAR *g_wszWMDMMediaOriginalChannel = L"WMDM/MediaOriginalChannel";
static const WCHAR *g_wszWMDMMediaOriginalBroadcastDateTime = L"WMDM/MediaOriginalBroadcastDateTime";
static const WCHAR *g_wszWMDMProviderCopyright = L"WMDM/ProviderCopyright";
static const WCHAR *g_wszWMDMSyncID = L"WMDM/SyncID";
static const WCHAR *g_wszWMDMPersistentUniqueID = L"WMDM/PersistentUniqueID";
static const WCHAR *g_wszWMDMWidth = L"WMDM/Width";
static const WCHAR *g_wszWMDMHeight = L"WMDM/Height";
static const WCHAR *g_wszWMDMSyncTime = L"WMDM/SyncTime";
static const WCHAR *g_wszWMDMParentalRating = L"WMDM/ParentalRating";
static const WCHAR *g_wszWMDMMetaGenre = L"WMDM/MetaGenre";
static const WCHAR *g_wszWMDMIsRepeat = L"WMDM/IsRepeat";
static const WCHAR *g_wszWMDMSupportedDeviceProperties = L"WMDM/SupportedDeviceProperties";
static const WCHAR *g_wszWMDMDeviceFriendlyName = L"WMDM/DeviceFriendlyName";
static const WCHAR *g_wszWMDMFormatsSupported = L"WMDM/FormatsSupported";
static const WCHAR *g_wszWMDMFormatsSupportedAreOrdered = L"WMDM/FormatsSupportedAreOrdered";
static const WCHAR *g_wszWMDMSyncRelationshipID = L"WMDM/SyncRelationshipID";
static const WCHAR *g_wszWMDMDeviceModelName = L"WMDM/DeviceModelName";
static const WCHAR *g_wszWMDMDeviceFirmwareVersion = L"WMDM/DeviceFirmwareVersion";
static const WCHAR *g_wszWMDMDeviceVendorExtension = L"WMDM/DeviceVendorExtension";
static const WCHAR *g_wszWMDMDeviceProtocol = L"WMDM/DeviceProtocol";
static const WCHAR *g_wszWMDMDeviceServiceProviderVendor = L"WMDM/DeviceServiceProviderVendor";
static const WCHAR *g_wszWMDMDeviceRevocationInfo = L"WMDM/DeviceRevocationInfo";
static const WCHAR *g_wszWMDMCollectionID = L"WMDM/CollectionID";
static const WCHAR *g_wszWMDMOwner = L"WMDM/Owner";
static const WCHAR *g_wszWMDMEditor = L"WMDM/Editor";
static const WCHAR *g_wszWMDMWebmaster = L"WMDM/Webmaster";
static const WCHAR *g_wszWMDMSourceURL = L"WMDM/SourceURL";
static const WCHAR *g_wszWMDMDestinationURL = L"WMDM/DestinationURL";
static const WCHAR *g_wszWMDMCategory = L"WMDM/Category";
static const WCHAR *g_wszWMDMTimeBookmark = L"WMDM/TimeBookmark";
static const WCHAR *g_wszWMDMObjectBookmark = L"WMDM/ObjectBookmark";
static const WCHAR *g_wszWMDMByteBookmark = L"WMDM/ByteBookmark";
static const WCHAR *g_wszWMDMDataOffset = L"WMDM/DataOffset";
static const WCHAR *g_wszWMDMDataLength = L"WMDM/DataLength";
static const WCHAR *g_wszWMDMDataUnits = L"WMDM/DataUnits";
static const WCHAR *g_wszWMDMTimeToLive = L"WMDM/TimeToLive";
static const WCHAR *g_wszWMDMMediaGuid = L"WMDM/MediaGuid";
static const WCHAR *g_wszWPDPassthroughPropertyValues = L"WPD/PassthroughPropertyValues";
union WMDMDetermineMaxPropStringLen {
WCHAR sz001[CCH_WMDM_PROPNAME(L"WMDM/DeviceFirmwareVersion")];
WCHAR sz002[CCH_WMDM_PROPNAME(L"WMDM/SupportedDeviceProperties")];
WCHAR sz003[CCH_WMDM_PROPNAME(L"WMDM/FileName")];
WCHAR sz004[CCH_WMDM_PROPNAME(L"WMDM/FormatCode")];
WCHAR sz005[CCH_WMDM_PROPNAME(L"WMDM/LastModifiedDate")];
WCHAR sz006[CCH_WMDM_PROPNAME(L"WMDM/FileSize")];
WCHAR sz007[CCH_WMDM_PROPNAME(L"WMDM/FileAttributes")];
WCHAR sz008[CCH_WMDM_PROPNAME(L"WMDM/AudioWAVECodec")];
WCHAR sz009[CCH_WMDM_PROPNAME(L"WMDM/VideoFourCCCodec")];
WCHAR sz010[CCH_WMDM_PROPNAME(L"WMDM/Title")];
WCHAR sz011[CCH_WMDM_PROPNAME(L"WMDM/Author")];
WCHAR sz012[CCH_WMDM_PROPNAME(L"WMDM/Description")];
WCHAR sz013[CCH_WMDM_PROPNAME(L"WMDM/IsProtected")];
WCHAR sz014[CCH_WMDM_PROPNAME(L"WMDM/AlbumTitle")];
WCHAR sz015[CCH_WMDM_PROPNAME(L"WMDM/AlbumArtist")];
WCHAR sz016[CCH_WMDM_PROPNAME(L"WMDM/Track")];
WCHAR sz017[CCH_WMDM_PROPNAME(L"WMDM/Genre")];
WCHAR sz018[CCH_WMDM_PROPNAME(L"WMDM/TrackMood")];
WCHAR sz019[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverFormat")];
WCHAR sz020[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverSize")];
WCHAR sz021[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverHeight")];
WCHAR sz022[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverWidth")];
WCHAR sz023[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverDuration")];
WCHAR sz024[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverData")];
WCHAR sz025[CCH_WMDM_PROPNAME(L"WMDM/Year")];
WCHAR sz026[CCH_WMDM_PROPNAME(L"WMDM/Composer")];
WCHAR sz027[CCH_WMDM_PROPNAME(L"WMDM/Codec")];
WCHAR sz028[CCH_WMDM_PROPNAME(L"WMDM/DRMId")];
WCHAR sz029[CCH_WMDM_PROPNAME(L"WMDM/Bitrate")];
WCHAR sz030[CCH_WMDM_PROPNAME(L"WMDM/BitRateType")];
WCHAR sz031[CCH_WMDM_PROPNAME(L"WMDM/SampleRate")];
WCHAR sz032[CCH_WMDM_PROPNAME(L"WMDM/NumChannels")];
WCHAR sz033[CCH_WMDM_PROPNAME(L"WMDM/BlockAlignment")];
WCHAR sz034[CCH_WMDM_PROPNAME(L"WMDM/AudioBitDepth")];
WCHAR sz035[CCH_WMDM_PROPNAME(L"WMDM/TotalBitrate")];
WCHAR sz036[CCH_WMDM_PROPNAME(L"WMDM/VideoBitrate")];
WCHAR sz037[CCH_WMDM_PROPNAME(L"WMDM/FrameRate")];
WCHAR sz041[CCH_WMDM_PROPNAME(L"WMDM/ScanType")];
WCHAR sz043[CCH_WMDM_PROPNAME(L"WMDM/KeyFrameDistance")];
WCHAR sz044[CCH_WMDM_PROPNAME(L"WMDM/BufferSize")];
WCHAR sz045[CCH_WMDM_PROPNAME(L"WMDM/QualitySetting")];
WCHAR sz046[CCH_WMDM_PROPNAME(L"WMDM/Duration")];
WCHAR sz047[CCH_WMDM_PROPNAME(L"WMDM/AlbumArt")];
WCHAR sz048[CCH_WMDM_PROPNAME(L"WMDM/BuyNow")];
WCHAR sz049[CCH_WMDM_PROPNAME(L"WMDM/MediaClassPrimaryID")];
WCHAR sz050[CCH_WMDM_PROPNAME(L"WMDM/MediaClassSecondayID")];
WCHAR sz051[CCH_WMDM_PROPNAME(L"WMDM/UserEffectiveRating")];
WCHAR sz052[CCH_WMDM_PROPNAME(L"WMDM/UserRating")];
WCHAR sz053[CCH_WMDM_PROPNAME(L"WMDM/UserRatingOnDevice")];
WCHAR sz054[CCH_WMDM_PROPNAME(L"WMDM/PlayCount")];
WCHAR sz055[CCH_WMDM_PROPNAME(L"WMDM/DevicePlayCount")];
WCHAR sz056[CCH_WMDM_PROPNAME(L"WMDM/AuthorDate")];
WCHAR sz057[CCH_WMDM_PROPNAME(L"WMDM/UserLastPlayTime")];
WCHAR sz058[CCH_WMDM_PROPNAME(L"WMDM/SubTitle")];
WCHAR sz059[CCH_WMDM_PROPNAME(L"WMDM/SubTitleDescription")];
WCHAR sz060[CCH_WMDM_PROPNAME(L"WMDM/MediaCredits")];
WCHAR sz061[CCH_WMDM_PROPNAME(L"WMDM/MediaStationName")];
WCHAR sz062[CCH_WMDM_PROPNAME(L"WMDM/MediaOriginalChannel")];
WCHAR sz063[CCH_WMDM_PROPNAME(L"WMDM/MediaOriginalBroadcastDateTime")];
WCHAR sz064[CCH_WMDM_PROPNAME(L"WMDM/ProviderCopyright")];
WCHAR sz065[CCH_WMDM_PROPNAME(L"WMDM/SyncID")];
WCHAR sz066[CCH_WMDM_PROPNAME(L"WMDM/PersistentUniqueID")];
WCHAR sz067[CCH_WMDM_PROPNAME(L"WMDM/Width")];
WCHAR sz068[CCH_WMDM_PROPNAME(L"WMDM/Height")];
WCHAR sz069[CCH_WMDM_PROPNAME(L"WMDM/SyncTime")];
WCHAR sz070[CCH_WMDM_PROPNAME(L"WMDM/ParentalRating")];
WCHAR sz071[CCH_WMDM_PROPNAME(L"WMDM/MetaGenre")];
WCHAR sz072[CCH_WMDM_PROPNAME(L"WMDM/IsRepeat")];
WCHAR sz073[CCH_WMDM_PROPNAME(L"WMDM/SupportedDeviceProperties")];
WCHAR sz074[CCH_WMDM_PROPNAME(L"WMDM/DeviceFriendlyName")];
WCHAR sz075[CCH_WMDM_PROPNAME(L"WMDM/FormatsSupported")];
WCHAR sz076[CCH_WMDM_PROPNAME(L"WMDM/SyncRelationshipID")];
WCHAR sz077[CCH_WMDM_PROPNAME(L"WMDM/DeviceModelName")];
WCHAR sz078[CCH_WMDM_PROPNAME(L"WMDM/DeviceFirmwareVersion")];
WCHAR sz079[CCH_WMDM_PROPNAME(L"WMDM/DeviceVendorExtension")];
WCHAR sz080[CCH_WMDM_PROPNAME(L"WMDM/DeviceProtocol")];
WCHAR sz081[CCH_WMDM_PROPNAME(L"WMDM/DeviceServiceProviderVendor")];
WCHAR sz082[CCH_WMDM_PROPNAME(L"WMDM/EncodingProfile")];
WCHAR sz083[CCH_WMDM_PROPNAME(L"WMDM/FormatsSupportedAreOrdered")];
WCHAR sz084[CCH_WMDM_PROPNAME(L"WMDM/DeviceRevocationInfo")];
WCHAR sz085[CCH_WMDM_PROPNAME(L"WMDM/CollectionID")];
WCHAR sz086[CCH_WMDM_PROPNAME(L"WPD/PassthroughPropertyValues")];
};
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0028_v0_0_s_ifspec;
EXTERN_C const IID IID_IMDServiceProvider;
    typedef struct IMDServiceProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDServiceProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDServiceProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDServiceProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCount )(
            __RPC__in IMDServiceProvider * This,
                        __RPC__out DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *EnumDevices )(
            __RPC__in IMDServiceProvider * This,
                        __RPC__deref_out_opt IMDSPEnumDevice **ppEnumDevice);
        END_INTERFACE
    } IMDServiceProviderVtbl;
    interface IMDServiceProvider
    {
        CONST_VTBL struct IMDServiceProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDeviceCount(This,pdwCount) )
    ( (This)->lpVtbl -> EnumDevices(This,ppEnumDevice) )
EXTERN_C const IID IID_IMDServiceProvider2;
    typedef struct IMDServiceProvider2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDServiceProvider2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDServiceProvider2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDServiceProvider2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCount )(
            __RPC__in IMDServiceProvider2 * This,
                        __RPC__out DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *EnumDevices )(
            __RPC__in IMDServiceProvider2 * This,
                        __RPC__deref_out_opt IMDSPEnumDevice **ppEnumDevice);
        HRESULT ( STDMETHODCALLTYPE *CreateDevice )(
            __RPC__in IMDServiceProvider2 * This,
                               __RPC__in_string LPCWSTR pwszDevicePath,
                        __RPC__out DWORD *pdwCount,
                                          __RPC__deref_out_ecount_full_opt(*pdwCount) IMDSPDevice ***pppDeviceArray);
        END_INTERFACE
    } IMDServiceProvider2Vtbl;
    interface IMDServiceProvider2
    {
        CONST_VTBL struct IMDServiceProvider2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDeviceCount(This,pdwCount) )
    ( (This)->lpVtbl -> EnumDevices(This,ppEnumDevice) )
    ( (This)->lpVtbl -> CreateDevice(This,pwszDevicePath,pdwCount,pppDeviceArray) )
EXTERN_C const IID IID_IMDServiceProvider3;
    typedef struct IMDServiceProvider3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDServiceProvider3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDServiceProvider3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDServiceProvider3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCount )(
            __RPC__in IMDServiceProvider3 * This,
                        __RPC__out DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *EnumDevices )(
            __RPC__in IMDServiceProvider3 * This,
                        __RPC__deref_out_opt IMDSPEnumDevice **ppEnumDevice);
        HRESULT ( STDMETHODCALLTYPE *CreateDevice )(
            __RPC__in IMDServiceProvider3 * This,
                               __RPC__in_string LPCWSTR pwszDevicePath,
                        __RPC__out DWORD *pdwCount,
                                          __RPC__deref_out_ecount_full_opt(*pdwCount) IMDSPDevice ***pppDeviceArray);
        HRESULT ( STDMETHODCALLTYPE *SetDeviceEnumPreference )(
            __RPC__in IMDServiceProvider3 * This,
                       DWORD dwEnumPref);
        END_INTERFACE
    } IMDServiceProvider3Vtbl;
    interface IMDServiceProvider3
    {
        CONST_VTBL struct IMDServiceProvider3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDeviceCount(This,pdwCount) )
    ( (This)->lpVtbl -> EnumDevices(This,ppEnumDevice) )
    ( (This)->lpVtbl -> CreateDevice(This,pwszDevicePath,pdwCount,pppDeviceArray) )
    ( (This)->lpVtbl -> SetDeviceEnumPreference(This,dwEnumPref) )
EXTERN_C const IID IID_IMDSPEnumDevice;
    typedef struct IMDSPEnumDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDSPEnumDevice * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDSPEnumDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDSPEnumDevice * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IMDSPEnumDevice * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) IMDSPDevice **ppDevice,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IMDSPEnumDevice * This,
                       ULONG celt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IMDSPEnumDevice * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IMDSPEnumDevice * This,
                        __RPC__deref_out_opt IMDSPEnumDevice **ppEnumDevice);
        END_INTERFACE
    } IMDSPEnumDeviceVtbl;
    interface IMDSPEnumDevice
    {
        CONST_VTBL struct IMDSPEnumDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppDevice,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnumDevice) )
EXTERN_C const IID IID_IMDSPDevice;
    typedef struct IMDSPDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDSPDevice * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDSPDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDSPDevice * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IMDSPDevice * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetManufacturer )(
            __RPC__in IMDSPDevice * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IMDSPDevice * This,
                        __RPC__out DWORD *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IMDSPDevice * This,
                        __RPC__out DWORD *pdwType);
        HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )(
            __RPC__in IMDSPDevice * This,
                        __RPC__out PWMDMID pSerialNumber,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *GetPowerSource )(
            __RPC__in IMDSPDevice * This,
                        __RPC__out DWORD *pdwPowerSource,
                        __RPC__out DWORD *pdwPercentRemaining);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IMDSPDevice * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceIcon )(
            __RPC__in IMDSPDevice * This,
                        __RPC__out ULONG *hIcon);
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )(
            __RPC__in IMDSPDevice * This,
                        __RPC__deref_out_opt IMDSPEnumStorage **ppEnumStorage);
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport )(
            __RPC__in IMDSPDevice * This,
                                          __RPC__deref_out_ecount_full_opt(*pnFormatCount) _WAVEFORMATEX **pFormatEx,
                        __RPC__out UINT *pnFormatCount,
                                          __RPC__deref_out_ecount_full_opt(*pnMimeTypeCount) LPWSTR **pppwszMimeType,
                        __RPC__out UINT *pnMimeTypeCount);
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )(
            __RPC__in IMDSPDevice * This,
                            __RPC__inout OPAQUECOMMAND *pCommand);
        END_INTERFACE
    } IMDSPDeviceVtbl;
    interface IMDSPDevice
    {
        CONST_VTBL struct IMDSPDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> GetType(This,pdwType) )
    ( (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac) )
    ( (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> GetDeviceIcon(This,hIcon) )
    ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
    ( (This)->lpVtbl -> GetFormatSupport(This,pFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) )
    ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
EXTERN_C const IID IID_IMDSPDevice2;
    typedef struct IMDSPDevice2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDSPDevice2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDSPDevice2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDSPDevice2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IMDSPDevice2 * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetManufacturer )(
            __RPC__in IMDSPDevice2 * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IMDSPDevice2 * This,
                        __RPC__out DWORD *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IMDSPDevice2 * This,
                        __RPC__out DWORD *pdwType);
        HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )(
            __RPC__in IMDSPDevice2 * This,
                        __RPC__out PWMDMID pSerialNumber,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *GetPowerSource )(
            __RPC__in IMDSPDevice2 * This,
                        __RPC__out DWORD *pdwPowerSource,
                        __RPC__out DWORD *pdwPercentRemaining);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IMDSPDevice2 * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceIcon )(
            __RPC__in IMDSPDevice2 * This,
                        __RPC__out ULONG *hIcon);
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )(
            __RPC__in IMDSPDevice2 * This,
                        __RPC__deref_out_opt IMDSPEnumStorage **ppEnumStorage);
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport )(
            __RPC__in IMDSPDevice2 * This,
                                          __RPC__deref_out_ecount_full_opt(*pnFormatCount) _WAVEFORMATEX **pFormatEx,
                        __RPC__out UINT *pnFormatCount,
                                          __RPC__deref_out_ecount_full_opt(*pnMimeTypeCount) LPWSTR **pppwszMimeType,
                        __RPC__out UINT *pnMimeTypeCount);
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )(
            __RPC__in IMDSPDevice2 * This,
                            __RPC__inout OPAQUECOMMAND *pCommand);
        HRESULT ( STDMETHODCALLTYPE *GetStorage )(
            __RPC__in IMDSPDevice2 * This,
                               __RPC__in_string LPCWSTR pszStorageName,
                        __RPC__deref_out_opt IMDSPStorage **ppStorage);
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport2 )(
            __RPC__in IMDSPDevice2 * This,
                       DWORD dwFlags,
                                          __RPC__deref_out_ecount_full_opt(*pnAudioFormatCount) _WAVEFORMATEX **ppAudioFormatEx,
                             __RPC__out UINT *pnAudioFormatCount,
                                          __RPC__deref_out_ecount_full_opt(*pnVideoFormatCount) _VIDEOINFOHEADER **ppVideoFormatEx,
                             __RPC__out UINT *pnVideoFormatCount,
                                          __RPC__deref_out_ecount_full_opt(*pnFileTypeCount) WMFILECAPABILITIES **ppFileType,
                             __RPC__out UINT *pnFileTypeCount);
        HRESULT ( STDMETHODCALLTYPE *GetSpecifyPropertyPages )(
            __RPC__in IMDSPDevice2 * This,
                             __RPC__deref_out_opt ISpecifyPropertyPages **ppSpecifyPropPages,
                                               __RPC__deref_out_ecount_full_opt(*pcUnks) IUnknown ***pppUnknowns,
                             __RPC__out ULONG *pcUnks);
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalName )(
            __RPC__in IMDSPDevice2 * This,
                                 __RPC__out_ecount_full(nMaxChars) LPWSTR pwszPnPName,
                       UINT nMaxChars);
        END_INTERFACE
    } IMDSPDevice2Vtbl;
    interface IMDSPDevice2
    {
        CONST_VTBL struct IMDSPDevice2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> GetType(This,pdwType) )
    ( (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac) )
    ( (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> GetDeviceIcon(This,hIcon) )
    ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
    ( (This)->lpVtbl -> GetFormatSupport(This,pFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) )
    ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
    ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
    ( (This)->lpVtbl -> GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount) )
    ( (This)->lpVtbl -> GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks) )
    ( (This)->lpVtbl -> GetCanonicalName(This,pwszPnPName,nMaxChars) )
EXTERN_C const IID IID_IMDSPDevice3;
    typedef struct IMDSPDevice3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDSPDevice3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDSPDevice3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDSPDevice3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IMDSPDevice3 * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetManufacturer )(
            __RPC__in IMDSPDevice3 * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IMDSPDevice3 * This,
                        __RPC__out DWORD *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IMDSPDevice3 * This,
                        __RPC__out DWORD *pdwType);
        HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )(
            __RPC__in IMDSPDevice3 * This,
                        __RPC__out PWMDMID pSerialNumber,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *GetPowerSource )(
            __RPC__in IMDSPDevice3 * This,
                        __RPC__out DWORD *pdwPowerSource,
                        __RPC__out DWORD *pdwPercentRemaining);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IMDSPDevice3 * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceIcon )(
            __RPC__in IMDSPDevice3 * This,
                        __RPC__out ULONG *hIcon);
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )(
            __RPC__in IMDSPDevice3 * This,
                        __RPC__deref_out_opt IMDSPEnumStorage **ppEnumStorage);
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport )(
            __RPC__in IMDSPDevice3 * This,
                                          __RPC__deref_out_ecount_full_opt(*pnFormatCount) _WAVEFORMATEX **pFormatEx,
                        __RPC__out UINT *pnFormatCount,
                                          __RPC__deref_out_ecount_full_opt(*pnMimeTypeCount) LPWSTR **pppwszMimeType,
                        __RPC__out UINT *pnMimeTypeCount);
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )(
            __RPC__in IMDSPDevice3 * This,
                            __RPC__inout OPAQUECOMMAND *pCommand);
        HRESULT ( STDMETHODCALLTYPE *GetStorage )(
            __RPC__in IMDSPDevice3 * This,
                               __RPC__in_string LPCWSTR pszStorageName,
                        __RPC__deref_out_opt IMDSPStorage **ppStorage);
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport2 )(
            __RPC__in IMDSPDevice3 * This,
                       DWORD dwFlags,
                                          __RPC__deref_out_ecount_full_opt(*pnAudioFormatCount) _WAVEFORMATEX **ppAudioFormatEx,
                             __RPC__out UINT *pnAudioFormatCount,
                                          __RPC__deref_out_ecount_full_opt(*pnVideoFormatCount) _VIDEOINFOHEADER **ppVideoFormatEx,
                             __RPC__out UINT *pnVideoFormatCount,
                                          __RPC__deref_out_ecount_full_opt(*pnFileTypeCount) WMFILECAPABILITIES **ppFileType,
                             __RPC__out UINT *pnFileTypeCount);
        HRESULT ( STDMETHODCALLTYPE *GetSpecifyPropertyPages )(
            __RPC__in IMDSPDevice3 * This,
                             __RPC__deref_out_opt ISpecifyPropertyPages **ppSpecifyPropPages,
                                               __RPC__deref_out_ecount_full_opt(*pcUnks) IUnknown ***pppUnknowns,
                             __RPC__out ULONG *pcUnks);
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalName )(
            __RPC__in IMDSPDevice3 * This,
                                 __RPC__out_ecount_full(nMaxChars) LPWSTR pwszPnPName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IMDSPDevice3 * This,
                       __RPC__in LPCWSTR pwszPropName,
                        __RPC__out PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IMDSPDevice3 * This,
                       __RPC__in LPCWSTR pwszPropName,
                       __RPC__in const PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetFormatCapability )(
            __RPC__in IMDSPDevice3 * This,
                       WMDM_FORMATCODE format,
                        __RPC__out WMDM_FORMAT_CAPABILITY *pFormatSupport);
        HRESULT ( STDMETHODCALLTYPE *DeviceIoControl )(
            __RPC__in IMDSPDevice3 * This,
                       DWORD dwIoControlCode,
                                __RPC__in_ecount_full(nInBufferSize) BYTE *lpInBuffer,
                       DWORD nInBufferSize,
                                 __RPC__out_ecount_full(*pnOutBufferSize) BYTE *lpOutBuffer,
                            __RPC__inout LPDWORD pnOutBufferSize);
        HRESULT ( STDMETHODCALLTYPE *FindStorage )(
            __RPC__in IMDSPDevice3 * This,
                       WMDM_FIND_SCOPE findScope,
                       __RPC__in LPCWSTR pwszUniqueID,
                        __RPC__deref_out_opt IMDSPStorage **ppStorage);
        END_INTERFACE
    } IMDSPDevice3Vtbl;
    interface IMDSPDevice3
    {
        CONST_VTBL struct IMDSPDevice3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> GetType(This,pdwType) )
    ( (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac) )
    ( (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> GetDeviceIcon(This,hIcon) )
    ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
    ( (This)->lpVtbl -> GetFormatSupport(This,pFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) )
    ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
    ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
    ( (This)->lpVtbl -> GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount) )
    ( (This)->lpVtbl -> GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks) )
    ( (This)->lpVtbl -> GetCanonicalName(This,pwszPnPName,nMaxChars) )
    ( (This)->lpVtbl -> GetProperty(This,pwszPropName,pValue) )
    ( (This)->lpVtbl -> SetProperty(This,pwszPropName,pValue) )
    ( (This)->lpVtbl -> GetFormatCapability(This,format,pFormatSupport) )
    ( (This)->lpVtbl -> DeviceIoControl(This,dwIoControlCode,lpInBuffer,nInBufferSize,lpOutBuffer,pnOutBufferSize) )
    ( (This)->lpVtbl -> FindStorage(This,findScope,pwszUniqueID,ppStorage) )
EXTERN_C const IID IID_IMDSPDeviceControl;
    typedef struct IMDSPDeviceControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDSPDeviceControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDSPDeviceControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDSPDeviceControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetDCStatus )(
            __RPC__in IMDSPDeviceControl * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in IMDSPDeviceControl * This,
                        __RPC__out DWORD *pdwCapabilitiesMask);
        HRESULT ( STDMETHODCALLTYPE *Play )(
            __RPC__in IMDSPDeviceControl * This);
        HRESULT ( STDMETHODCALLTYPE *Record )(
            __RPC__in IMDSPDeviceControl * This,
                       __RPC__in _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IMDSPDeviceControl * This);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IMDSPDeviceControl * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IMDSPDeviceControl * This);
        HRESULT ( STDMETHODCALLTYPE *Seek )(
            __RPC__in IMDSPDeviceControl * This,
                       UINT fuMode,
                       int nOffset);
        END_INTERFACE
    } IMDSPDeviceControlVtbl;
    interface IMDSPDeviceControl
    {
        CONST_VTBL struct IMDSPDeviceControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDCStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> GetCapabilities(This,pdwCapabilitiesMask) )
    ( (This)->lpVtbl -> Play(This) )
    ( (This)->lpVtbl -> Record(This,pFormat) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Seek(This,fuMode,nOffset) )
EXTERN_C const IID IID_IMDSPEnumStorage;
    typedef struct IMDSPEnumStorageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDSPEnumStorage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDSPEnumStorage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDSPEnumStorage * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IMDSPEnumStorage * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) IMDSPStorage **ppStorage,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IMDSPEnumStorage * This,
                       ULONG celt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IMDSPEnumStorage * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IMDSPEnumStorage * This,
                        __RPC__deref_out_opt IMDSPEnumStorage **ppEnumStorage);
        END_INTERFACE
    } IMDSPEnumStorageVtbl;
    interface IMDSPEnumStorage
    {
        CONST_VTBL struct IMDSPEnumStorageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppStorage,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnumStorage) )
EXTERN_C const IID IID_IMDSPStorage;
    typedef struct IMDSPStorageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDSPStorage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDSPStorage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDSPStorage * This);
        HRESULT ( STDMETHODCALLTYPE *SetAttributes )(
            __RPC__in IMDSPStorage * This,
                       DWORD dwAttributes,
                               __RPC__in_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetStorageGlobals )(
            __RPC__in IMDSPStorage * This,
                        __RPC__deref_out_opt IMDSPStorageGlobals **ppStorageGlobals);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )(
            __RPC__in IMDSPStorage * This,
                        __RPC__out DWORD *pdwAttributes,
                                    __RPC__inout_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IMDSPStorage * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetDate )(
            __RPC__in IMDSPStorage * This,
                        __RPC__out PWMDMDATETIME pDateTimeUTC);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IMDSPStorage * This,
                        __RPC__out DWORD *pdwSizeLow,
                        __RPC__out DWORD *pdwSizeHigh);
        HRESULT ( STDMETHODCALLTYPE *GetRights )(
            __RPC__in IMDSPStorage * This,
                                          __RPC__deref_out_ecount_full_opt(*pnRightsCount) PWMDMRIGHTS *ppRights,
                        __RPC__out UINT *pnRightsCount,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *CreateStorage )(
            __RPC__in IMDSPStorage * This,
                       DWORD dwAttributes,
                               __RPC__in_opt _WAVEFORMATEX *pFormat,
                       __RPC__in LPWSTR pwszName,
                        __RPC__deref_out_opt IMDSPStorage **ppNewStorage);
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )(
            __RPC__in IMDSPStorage * This,
                        __RPC__deref_out_opt IMDSPEnumStorage **ppEnumStorage);
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )(
            __RPC__in IMDSPStorage * This,
                            __RPC__inout OPAQUECOMMAND *pCommand);
        END_INTERFACE
    } IMDSPStorageVtbl;
    interface IMDSPStorage
    {
        CONST_VTBL struct IMDSPStorageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals) )
    ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetDate(This,pDateTimeUTC) )
    ( (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh) )
    ( (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac) )
    ( (This)->lpVtbl -> CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage) )
    ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
    ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
EXTERN_C const IID IID_IMDSPStorage2;
    typedef struct IMDSPStorage2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDSPStorage2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDSPStorage2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDSPStorage2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetAttributes )(
            __RPC__in IMDSPStorage2 * This,
                       DWORD dwAttributes,
                               __RPC__in_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetStorageGlobals )(
            __RPC__in IMDSPStorage2 * This,
                        __RPC__deref_out_opt IMDSPStorageGlobals **ppStorageGlobals);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )(
            __RPC__in IMDSPStorage2 * This,
                        __RPC__out DWORD *pdwAttributes,
                                    __RPC__inout_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IMDSPStorage2 * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetDate )(
            __RPC__in IMDSPStorage2 * This,
                        __RPC__out PWMDMDATETIME pDateTimeUTC);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IMDSPStorage2 * This,
                        __RPC__out DWORD *pdwSizeLow,
                        __RPC__out DWORD *pdwSizeHigh);
        HRESULT ( STDMETHODCALLTYPE *GetRights )(
            __RPC__in IMDSPStorage2 * This,
                                          __RPC__deref_out_ecount_full_opt(*pnRightsCount) PWMDMRIGHTS *ppRights,
                        __RPC__out UINT *pnRightsCount,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *CreateStorage )(
            __RPC__in IMDSPStorage2 * This,
                       DWORD dwAttributes,
                               __RPC__in_opt _WAVEFORMATEX *pFormat,
                       __RPC__in LPWSTR pwszName,
                        __RPC__deref_out_opt IMDSPStorage **ppNewStorage);
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )(
            __RPC__in IMDSPStorage2 * This,
                        __RPC__deref_out_opt IMDSPEnumStorage **ppEnumStorage);
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )(
            __RPC__in IMDSPStorage2 * This,
                            __RPC__inout OPAQUECOMMAND *pCommand);
        HRESULT ( STDMETHODCALLTYPE *GetStorage )(
            __RPC__in IMDSPStorage2 * This,
                               __RPC__in_string LPCWSTR pszStorageName,
                        __RPC__deref_out_opt IMDSPStorage **ppStorage);
        HRESULT ( STDMETHODCALLTYPE *CreateStorage2 )(
            __RPC__in IMDSPStorage2 * This,
                       DWORD dwAttributes,
                       DWORD dwAttributesEx,
                               __RPC__in_opt _WAVEFORMATEX *pAudioFormat,
                               __RPC__in_opt _VIDEOINFOHEADER *pVideoFormat,
                       __RPC__in LPWSTR pwszName,
                       ULONGLONG qwFileSize,
                        __RPC__deref_out_opt IMDSPStorage **ppNewStorage);
        HRESULT ( STDMETHODCALLTYPE *SetAttributes2 )(
            __RPC__in IMDSPStorage2 * This,
                       DWORD dwAttributes,
                       DWORD dwAttributesEx,
                               __RPC__in_opt _WAVEFORMATEX *pAudioFormat,
                               __RPC__in_opt _VIDEOINFOHEADER *pVideoFormat);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes2 )(
            __RPC__in IMDSPStorage2 * This,
                        __RPC__out DWORD *pdwAttributes,
                        __RPC__out DWORD *pdwAttributesEx,
                                    __RPC__inout_opt _WAVEFORMATEX *pAudioFormat,
                                    __RPC__inout_opt _VIDEOINFOHEADER *pVideoFormat);
        END_INTERFACE
    } IMDSPStorage2Vtbl;
    interface IMDSPStorage2
    {
        CONST_VTBL struct IMDSPStorage2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals) )
    ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetDate(This,pDateTimeUTC) )
    ( (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh) )
    ( (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac) )
    ( (This)->lpVtbl -> CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage) )
    ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
    ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
    ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
    ( (This)->lpVtbl -> CreateStorage2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat,pwszName,qwFileSize,ppNewStorage) )
    ( (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat) )
    ( (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) )
EXTERN_C const IID IID_IMDSPStorage3;
    typedef struct IMDSPStorage3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDSPStorage3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDSPStorage3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDSPStorage3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetAttributes )(
            __RPC__in IMDSPStorage3 * This,
                       DWORD dwAttributes,
                               __RPC__in_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetStorageGlobals )(
            __RPC__in IMDSPStorage3 * This,
                        __RPC__deref_out_opt IMDSPStorageGlobals **ppStorageGlobals);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )(
            __RPC__in IMDSPStorage3 * This,
                        __RPC__out DWORD *pdwAttributes,
                                    __RPC__inout_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IMDSPStorage3 * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetDate )(
            __RPC__in IMDSPStorage3 * This,
                        __RPC__out PWMDMDATETIME pDateTimeUTC);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IMDSPStorage3 * This,
                        __RPC__out DWORD *pdwSizeLow,
                        __RPC__out DWORD *pdwSizeHigh);
        HRESULT ( STDMETHODCALLTYPE *GetRights )(
            __RPC__in IMDSPStorage3 * This,
                                          __RPC__deref_out_ecount_full_opt(*pnRightsCount) PWMDMRIGHTS *ppRights,
                        __RPC__out UINT *pnRightsCount,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *CreateStorage )(
            __RPC__in IMDSPStorage3 * This,
                       DWORD dwAttributes,
                               __RPC__in_opt _WAVEFORMATEX *pFormat,
                       __RPC__in LPWSTR pwszName,
                        __RPC__deref_out_opt IMDSPStorage **ppNewStorage);
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )(
            __RPC__in IMDSPStorage3 * This,
                        __RPC__deref_out_opt IMDSPEnumStorage **ppEnumStorage);
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )(
            __RPC__in IMDSPStorage3 * This,
                            __RPC__inout OPAQUECOMMAND *pCommand);
        HRESULT ( STDMETHODCALLTYPE *GetStorage )(
            __RPC__in IMDSPStorage3 * This,
                               __RPC__in_string LPCWSTR pszStorageName,
                        __RPC__deref_out_opt IMDSPStorage **ppStorage);
        HRESULT ( STDMETHODCALLTYPE *CreateStorage2 )(
            __RPC__in IMDSPStorage3 * This,
                       DWORD dwAttributes,
                       DWORD dwAttributesEx,
                               __RPC__in_opt _WAVEFORMATEX *pAudioFormat,
                               __RPC__in_opt _VIDEOINFOHEADER *pVideoFormat,
                       __RPC__in LPWSTR pwszName,
                       ULONGLONG qwFileSize,
                        __RPC__deref_out_opt IMDSPStorage **ppNewStorage);
        HRESULT ( STDMETHODCALLTYPE *SetAttributes2 )(
            __RPC__in IMDSPStorage3 * This,
                       DWORD dwAttributes,
                       DWORD dwAttributesEx,
                               __RPC__in_opt _WAVEFORMATEX *pAudioFormat,
                               __RPC__in_opt _VIDEOINFOHEADER *pVideoFormat);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes2 )(
            __RPC__in IMDSPStorage3 * This,
                        __RPC__out DWORD *pdwAttributes,
                        __RPC__out DWORD *pdwAttributesEx,
                                    __RPC__inout_opt _WAVEFORMATEX *pAudioFormat,
                                    __RPC__inout_opt _VIDEOINFOHEADER *pVideoFormat);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            __RPC__in IMDSPStorage3 * This,
                       __RPC__in_opt IWMDMMetaData *pMetadata);
        HRESULT ( STDMETHODCALLTYPE *SetMetadata )(
            __RPC__in IMDSPStorage3 * This,
                       __RPC__in_opt IWMDMMetaData *pMetadata);
        END_INTERFACE
    } IMDSPStorage3Vtbl;
    interface IMDSPStorage3
    {
        CONST_VTBL struct IMDSPStorage3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals) )
    ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetDate(This,pDateTimeUTC) )
    ( (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh) )
    ( (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac) )
    ( (This)->lpVtbl -> CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage) )
    ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
    ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
    ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
    ( (This)->lpVtbl -> CreateStorage2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat,pwszName,qwFileSize,ppNewStorage) )
    ( (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat) )
    ( (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) )
    ( (This)->lpVtbl -> GetMetadata(This,pMetadata) )
    ( (This)->lpVtbl -> SetMetadata(This,pMetadata) )
EXTERN_C const IID IID_IMDSPStorage4;
    typedef struct IMDSPStorage4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDSPStorage4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDSPStorage4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDSPStorage4 * This);
        HRESULT ( STDMETHODCALLTYPE *SetAttributes )(
            __RPC__in IMDSPStorage4 * This,
                       DWORD dwAttributes,
                               __RPC__in_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetStorageGlobals )(
            __RPC__in IMDSPStorage4 * This,
                        __RPC__deref_out_opt IMDSPStorageGlobals **ppStorageGlobals);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )(
            __RPC__in IMDSPStorage4 * This,
                        __RPC__out DWORD *pdwAttributes,
                                    __RPC__inout_opt _WAVEFORMATEX *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IMDSPStorage4 * This,
                                         __RPC__out_ecount_full_string(nMaxChars) LPWSTR pwszName,
                       UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *GetDate )(
            __RPC__in IMDSPStorage4 * This,
                        __RPC__out PWMDMDATETIME pDateTimeUTC);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IMDSPStorage4 * This,
                        __RPC__out DWORD *pdwSizeLow,
                        __RPC__out DWORD *pdwSizeHigh);
        HRESULT ( STDMETHODCALLTYPE *GetRights )(
            __RPC__in IMDSPStorage4 * This,
                                          __RPC__deref_out_ecount_full_opt(*pnRightsCount) PWMDMRIGHTS *ppRights,
                        __RPC__out UINT *pnRightsCount,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *CreateStorage )(
            __RPC__in IMDSPStorage4 * This,
                       DWORD dwAttributes,
                               __RPC__in_opt _WAVEFORMATEX *pFormat,
                       __RPC__in LPWSTR pwszName,
                        __RPC__deref_out_opt IMDSPStorage **ppNewStorage);
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )(
            __RPC__in IMDSPStorage4 * This,
                        __RPC__deref_out_opt IMDSPEnumStorage **ppEnumStorage);
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )(
            __RPC__in IMDSPStorage4 * This,
                            __RPC__inout OPAQUECOMMAND *pCommand);
        HRESULT ( STDMETHODCALLTYPE *GetStorage )(
            __RPC__in IMDSPStorage4 * This,
                               __RPC__in_string LPCWSTR pszStorageName,
                        __RPC__deref_out_opt IMDSPStorage **ppStorage);
        HRESULT ( STDMETHODCALLTYPE *CreateStorage2 )(
            __RPC__in IMDSPStorage4 * This,
                       DWORD dwAttributes,
                       DWORD dwAttributesEx,
                               __RPC__in_opt _WAVEFORMATEX *pAudioFormat,
                               __RPC__in_opt _VIDEOINFOHEADER *pVideoFormat,
                       __RPC__in LPWSTR pwszName,
                       ULONGLONG qwFileSize,
                        __RPC__deref_out_opt IMDSPStorage **ppNewStorage);
        HRESULT ( STDMETHODCALLTYPE *SetAttributes2 )(
            __RPC__in IMDSPStorage4 * This,
                       DWORD dwAttributes,
                       DWORD dwAttributesEx,
                               __RPC__in_opt _WAVEFORMATEX *pAudioFormat,
                               __RPC__in_opt _VIDEOINFOHEADER *pVideoFormat);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes2 )(
            __RPC__in IMDSPStorage4 * This,
                        __RPC__out DWORD *pdwAttributes,
                        __RPC__out DWORD *pdwAttributesEx,
                                    __RPC__inout_opt _WAVEFORMATEX *pAudioFormat,
                                    __RPC__inout_opt _VIDEOINFOHEADER *pVideoFormat);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            __RPC__in IMDSPStorage4 * This,
                       __RPC__in_opt IWMDMMetaData *pMetadata);
        HRESULT ( STDMETHODCALLTYPE *SetMetadata )(
            __RPC__in IMDSPStorage4 * This,
                       __RPC__in_opt IWMDMMetaData *pMetadata);
        HRESULT ( STDMETHODCALLTYPE *SetReferences )(
            __RPC__in IMDSPStorage4 * This,
                       DWORD dwRefs,
                                        __RPC__in_ecount_full_opt(dwRefs) IMDSPStorage **ppISPStorage);
        HRESULT ( STDMETHODCALLTYPE *GetReferences )(
            __RPC__in IMDSPStorage4 * This,
                        __RPC__out DWORD *pdwRefs,
                                          __RPC__deref_out_ecount_full_opt(*pdwRefs) IMDSPStorage ***pppISPStorage);
        HRESULT ( STDMETHODCALLTYPE *CreateStorageWithMetadata )(
            __RPC__in IMDSPStorage4 * This,
                       DWORD dwAttributes,
                       __RPC__in LPCWSTR pwszName,
                       __RPC__in_opt IWMDMMetaData *pMetadata,
                       ULONGLONG qwFileSize,
                        __RPC__deref_out_opt IMDSPStorage **ppNewStorage);
        HRESULT ( STDMETHODCALLTYPE *GetSpecifiedMetadata )(
            __RPC__in IMDSPStorage4 * This,
                       DWORD cProperties,
                                __RPC__in_ecount_full(cProperties) LPCWSTR *ppwszPropNames,
                       __RPC__in_opt IWMDMMetaData *pMetadata);
        HRESULT ( STDMETHODCALLTYPE *FindStorage )(
            __RPC__in IMDSPStorage4 * This,
                       WMDM_FIND_SCOPE findScope,
                       __RPC__in LPCWSTR pwszUniqueID,
                        __RPC__deref_out_opt IMDSPStorage **ppStorage);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            __RPC__in IMDSPStorage4 * This,
                        __RPC__deref_out_opt IMDSPStorage **ppStorage);
        END_INTERFACE
    } IMDSPStorage4Vtbl;
    interface IMDSPStorage4
    {
        CONST_VTBL struct IMDSPStorage4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals) )
    ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat) )
    ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
    ( (This)->lpVtbl -> GetDate(This,pDateTimeUTC) )
    ( (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh) )
    ( (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac) )
    ( (This)->lpVtbl -> CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage) )
    ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
    ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
    ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
    ( (This)->lpVtbl -> CreateStorage2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat,pwszName,qwFileSize,ppNewStorage) )
    ( (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat) )
    ( (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) )
    ( (This)->lpVtbl -> GetMetadata(This,pMetadata) )
    ( (This)->lpVtbl -> SetMetadata(This,pMetadata) )
    ( (This)->lpVtbl -> SetReferences(This,dwRefs,ppISPStorage) )
    ( (This)->lpVtbl -> GetReferences(This,pdwRefs,pppISPStorage) )
    ( (This)->lpVtbl -> CreateStorageWithMetadata(This,dwAttributes,pwszName,pMetadata,qwFileSize,ppNewStorage) )
    ( (This)->lpVtbl -> GetSpecifiedMetadata(This,cProperties,ppwszPropNames,pMetadata) )
    ( (This)->lpVtbl -> FindStorage(This,findScope,pwszUniqueID,ppStorage) )
    ( (This)->lpVtbl -> GetParent(This,ppStorage) )
EXTERN_C const IID IID_IMDSPStorageGlobals;
    typedef struct IMDSPStorageGlobalsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDSPStorageGlobals * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDSPStorageGlobals * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDSPStorageGlobals * This);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in IMDSPStorageGlobals * This,
                        __RPC__out DWORD *pdwCapabilities);
        HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )(
            __RPC__in IMDSPStorageGlobals * This,
                        __RPC__out PWMDMID pSerialNum,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *GetTotalSize )(
            __RPC__in IMDSPStorageGlobals * This,
                        __RPC__out DWORD *pdwTotalSizeLow,
                        __RPC__out DWORD *pdwTotalSizeHigh);
        HRESULT ( STDMETHODCALLTYPE *GetTotalFree )(
            __RPC__in IMDSPStorageGlobals * This,
                        __RPC__out DWORD *pdwFreeLow,
                        __RPC__out DWORD *pdwFreeHigh);
        HRESULT ( STDMETHODCALLTYPE *GetTotalBad )(
            __RPC__in IMDSPStorageGlobals * This,
                        __RPC__out DWORD *pdwBadLow,
                        __RPC__out DWORD *pdwBadHigh);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IMDSPStorageGlobals * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IMDSPStorageGlobals * This,
                       UINT fuMode,
                       __RPC__in_opt IWMDMProgress *pProgress);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            __RPC__in IMDSPStorageGlobals * This,
                        __RPC__deref_out_opt IMDSPDevice **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetRootStorage )(
            __RPC__in IMDSPStorageGlobals * This,
                        __RPC__deref_out_opt IMDSPStorage **ppRoot);
        END_INTERFACE
    } IMDSPStorageGlobalsVtbl;
    interface IMDSPStorageGlobals
    {
        CONST_VTBL struct IMDSPStorageGlobalsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCapabilities(This,pdwCapabilities) )
    ( (This)->lpVtbl -> GetSerialNumber(This,pSerialNum,abMac) )
    ( (This)->lpVtbl -> GetTotalSize(This,pdwTotalSizeLow,pdwTotalSizeHigh) )
    ( (This)->lpVtbl -> GetTotalFree(This,pdwFreeLow,pdwFreeHigh) )
    ( (This)->lpVtbl -> GetTotalBad(This,pdwBadLow,pdwBadHigh) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> Initialize(This,fuMode,pProgress) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetRootStorage(This,ppRoot) )
EXTERN_C const IID IID_IMDSPObjectInfo;
    typedef struct IMDSPObjectInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDSPObjectInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDSPObjectInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDSPObjectInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetPlayLength )(
            __RPC__in IMDSPObjectInfo * This,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *SetPlayLength )(
            __RPC__in IMDSPObjectInfo * This,
                       DWORD dwLength);
        HRESULT ( STDMETHODCALLTYPE *GetPlayOffset )(
            __RPC__in IMDSPObjectInfo * This,
                        __RPC__out DWORD *pdwOffset);
        HRESULT ( STDMETHODCALLTYPE *SetPlayOffset )(
            __RPC__in IMDSPObjectInfo * This,
                       DWORD dwOffset);
        HRESULT ( STDMETHODCALLTYPE *GetTotalLength )(
            __RPC__in IMDSPObjectInfo * This,
                        __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetLastPlayPosition )(
            __RPC__in IMDSPObjectInfo * This,
                        __RPC__out DWORD *pdwLastPos);
        HRESULT ( STDMETHODCALLTYPE *GetLongestPlayPosition )(
            __RPC__in IMDSPObjectInfo * This,
                        __RPC__out DWORD *pdwLongestPos);
        END_INTERFACE
    } IMDSPObjectInfoVtbl;
    interface IMDSPObjectInfo
    {
        CONST_VTBL struct IMDSPObjectInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPlayLength(This,pdwLength) )
    ( (This)->lpVtbl -> SetPlayLength(This,dwLength) )
    ( (This)->lpVtbl -> GetPlayOffset(This,pdwOffset) )
    ( (This)->lpVtbl -> SetPlayOffset(This,dwOffset) )
    ( (This)->lpVtbl -> GetTotalLength(This,pdwLength) )
    ( (This)->lpVtbl -> GetLastPlayPosition(This,pdwLastPos) )
    ( (This)->lpVtbl -> GetLongestPlayPosition(This,pdwLongestPos) )
EXTERN_C const IID IID_IMDSPObject;
    typedef struct IMDSPObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDSPObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDSPObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDSPObject * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IMDSPObject * This,
                       UINT fuMode);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            __RPC__in IMDSPObject * This,
                                 __RPC__out_ecount_full(*pdwSize) BYTE *pData,
                            __RPC__inout DWORD *pdwSize,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in IMDSPObject * This,
                                __RPC__in_ecount_full(*pdwSize) BYTE *pData,
                            __RPC__inout DWORD *pdwSize,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IMDSPObject * This,
                       UINT fuMode,
                       __RPC__in_opt IWMDMProgress *pProgress);
        HRESULT ( STDMETHODCALLTYPE *Seek )(
            __RPC__in IMDSPObject * This,
                       UINT fuFlags,
                       DWORD dwOffset);
        HRESULT ( STDMETHODCALLTYPE *Rename )(
            __RPC__in IMDSPObject * This,
                       __RPC__in LPWSTR pwszNewName,
                       __RPC__in_opt IWMDMProgress *pProgress);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IMDSPObject * This,
                       UINT fuMode,
                       __RPC__in_opt IWMDMProgress *pProgress,
                       __RPC__in_opt IMDSPStorage *pTarget);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IMDSPObject * This);
        END_INTERFACE
    } IMDSPObjectVtbl;
    interface IMDSPObject
    {
        CONST_VTBL struct IMDSPObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Open(This,fuMode) )
    ( (This)->lpVtbl -> Read(This,pData,pdwSize,abMac) )
    ( (This)->lpVtbl -> Write(This,pData,pdwSize,abMac) )
    ( (This)->lpVtbl -> Delete(This,fuMode,pProgress) )
    ( (This)->lpVtbl -> Seek(This,fuFlags,dwOffset) )
    ( (This)->lpVtbl -> Rename(This,pwszNewName,pProgress) )
    ( (This)->lpVtbl -> Move(This,fuMode,pProgress,pTarget) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IMDSPObject2;
    typedef struct IMDSPObject2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDSPObject2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDSPObject2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDSPObject2 * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IMDSPObject2 * This,
                       UINT fuMode);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            __RPC__in IMDSPObject2 * This,
                                 __RPC__out_ecount_full(*pdwSize) BYTE *pData,
                            __RPC__inout DWORD *pdwSize,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in IMDSPObject2 * This,
                                __RPC__in_ecount_full(*pdwSize) BYTE *pData,
                            __RPC__inout DWORD *pdwSize,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IMDSPObject2 * This,
                       UINT fuMode,
                       __RPC__in_opt IWMDMProgress *pProgress);
        HRESULT ( STDMETHODCALLTYPE *Seek )(
            __RPC__in IMDSPObject2 * This,
                       UINT fuFlags,
                       DWORD dwOffset);
        HRESULT ( STDMETHODCALLTYPE *Rename )(
            __RPC__in IMDSPObject2 * This,
                       __RPC__in LPWSTR pwszNewName,
                       __RPC__in_opt IWMDMProgress *pProgress);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IMDSPObject2 * This,
                       UINT fuMode,
                       __RPC__in_opt IWMDMProgress *pProgress,
                       __RPC__in_opt IMDSPStorage *pTarget);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IMDSPObject2 * This);
        HRESULT ( STDMETHODCALLTYPE *ReadOnClearChannel )(
            __RPC__in IMDSPObject2 * This,
                                 __RPC__out_ecount_full(*pdwSize) BYTE *pData,
                            __RPC__inout DWORD *pdwSize);
        HRESULT ( STDMETHODCALLTYPE *WriteOnClearChannel )(
            __RPC__in IMDSPObject2 * This,
                                __RPC__in_ecount_full(*pdwSize) BYTE *pData,
                            __RPC__inout DWORD *pdwSize);
        END_INTERFACE
    } IMDSPObject2Vtbl;
    interface IMDSPObject2
    {
        CONST_VTBL struct IMDSPObject2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Open(This,fuMode) )
    ( (This)->lpVtbl -> Read(This,pData,pdwSize,abMac) )
    ( (This)->lpVtbl -> Write(This,pData,pdwSize,abMac) )
    ( (This)->lpVtbl -> Delete(This,fuMode,pProgress) )
    ( (This)->lpVtbl -> Seek(This,fuFlags,dwOffset) )
    ( (This)->lpVtbl -> Rename(This,pwszNewName,pProgress) )
    ( (This)->lpVtbl -> Move(This,fuMode,pProgress,pTarget) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> ReadOnClearChannel(This,pData,pdwSize) )
    ( (This)->lpVtbl -> WriteOnClearChannel(This,pData,pdwSize) )
EXTERN_C const IID IID_IMDSPDirectTransfer;
    typedef struct IMDSPDirectTransferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDSPDirectTransfer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDSPDirectTransfer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDSPDirectTransfer * This);
        HRESULT ( STDMETHODCALLTYPE *TransferToDevice )(
            __RPC__in IMDSPDirectTransfer * This,
                                       __RPC__in_opt_string LPCWSTR pwszSourceFilePath,
                       __RPC__in_opt IWMDMOperation *pSourceOperation,
                       UINT fuFlags,
                                       __RPC__in_opt_string LPWSTR pwszDestinationName,
                       __RPC__in_opt IWMDMMetaData *pSourceMetaData,
                       __RPC__in_opt IWMDMProgress *pTransferProgress,
                        __RPC__deref_out_opt IMDSPStorage **ppNewObject);
        END_INTERFACE
    } IMDSPDirectTransferVtbl;
    interface IMDSPDirectTransfer
    {
        CONST_VTBL struct IMDSPDirectTransferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> TransferToDevice(This,pwszSourceFilePath,pSourceOperation,fuFlags,pwszDestinationName,pSourceMetaData,pTransferProgress,ppNewObject) )
EXTERN_C const IID IID_IMDSPRevoked;
    typedef struct IMDSPRevokedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMDSPRevoked * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMDSPRevoked * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMDSPRevoked * This);
        HRESULT ( STDMETHODCALLTYPE *GetRevocationURL )(
            __RPC__in IMDSPRevoked * This,
                                                      __RPC__deref_inout_ecount_full_opt_string(*pdwBufferLen) LPWSTR *ppwszRevocationURL,
                            __RPC__inout DWORD *pdwBufferLen);
        END_INTERFACE
    } IMDSPRevokedVtbl;
    interface IMDSPRevoked
    {
        CONST_VTBL struct IMDSPRevokedVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRevocationURL(This,ppwszRevocationURL,pdwBufferLen) )
DEFINE_GUID(SCP_EVENTID_ACQSECURECLOCK,
0x86248cc9, 0x4a59, 0x43e2, 0x91, 0x46, 0x48, 0xa7, 0xf3, 0xf4, 0x14, 0xc);
DEFINE_GUID(SCP_EVENTID_NEEDTOINDIV,
0x87a507c7, 0xb469, 0x4386, 0xb9, 0x76, 0xd5, 0xd1, 0xce, 0x53, 0x8a, 0x6f);
DEFINE_GUID(SCP_EVENTID_DRMINFO,
0x213dd287, 0x41d2, 0x432b, 0x9e, 0x3f, 0x3b, 0x4f, 0x7b, 0x35, 0x81, 0xdd);
DEFINE_GUID(SCP_PARAMID_DRMVERSION,
0x41d0155d, 0x7cc7, 0x4217, 0xad, 0xa9, 0x00, 0x50, 0x74, 0x62, 0x4d, 0xa4);
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0047_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0047_v0_0_s_ifspec;
EXTERN_C const IID IID_ISCPSecureAuthenticate;
    typedef struct ISCPSecureAuthenticateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISCPSecureAuthenticate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISCPSecureAuthenticate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISCPSecureAuthenticate * This);
        HRESULT ( STDMETHODCALLTYPE *GetSecureQuery )(
            __RPC__in ISCPSecureAuthenticate * This,
                        __RPC__deref_out_opt ISCPSecureQuery **ppSecureQuery);
        END_INTERFACE
    } ISCPSecureAuthenticateVtbl;
    interface ISCPSecureAuthenticate
    {
        CONST_VTBL struct ISCPSecureAuthenticateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSecureQuery(This,ppSecureQuery) )
EXTERN_C const IID IID_ISCPSecureAuthenticate2;
    typedef struct ISCPSecureAuthenticate2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISCPSecureAuthenticate2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISCPSecureAuthenticate2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISCPSecureAuthenticate2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSecureQuery )(
            __RPC__in ISCPSecureAuthenticate2 * This,
                        __RPC__deref_out_opt ISCPSecureQuery **ppSecureQuery);
        HRESULT ( STDMETHODCALLTYPE *GetSCPSession )(
            __RPC__in ISCPSecureAuthenticate2 * This,
                        __RPC__deref_out_opt ISCPSession **ppSCPSession);
        END_INTERFACE
    } ISCPSecureAuthenticate2Vtbl;
    interface ISCPSecureAuthenticate2
    {
        CONST_VTBL struct ISCPSecureAuthenticate2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSecureQuery(This,ppSecureQuery) )
    ( (This)->lpVtbl -> GetSCPSession(This,ppSCPSession) )
EXTERN_C const IID IID_ISCPSecureQuery;
    typedef struct ISCPSecureQueryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISCPSecureQuery * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISCPSecureQuery * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISCPSecureQuery * This);
        HRESULT ( STDMETHODCALLTYPE *GetDataDemands )(
            __RPC__in ISCPSecureQuery * This,
                        __RPC__out UINT *pfuFlags,
                        __RPC__out DWORD *pdwMinRightsData,
                        __RPC__out DWORD *pdwMinExamineData,
                        __RPC__out DWORD *pdwMinDecideData,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *ExamineData )(
            __RPC__in ISCPSecureQuery * This,
                       UINT fuFlags,
                                       __RPC__in_opt_string LPWSTR pwszExtension,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *MakeDecision )(
            __RPC__in ISCPSecureQuery * This,
                       UINT fuFlags,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                       DWORD dwAppSec,
                                __RPC__in_ecount_full(dwSessionKeyLen) BYTE *pbSPSessionKey,
                       DWORD dwSessionKeyLen,
                       __RPC__in_opt IMDSPStorageGlobals *pStorageGlobals,
                        __RPC__deref_out_opt ISCPSecureExchange **ppExchange,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *GetRights )(
            __RPC__in ISCPSecureQuery * This,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                                __RPC__in_ecount_full(dwSessionKeyLen) BYTE *pbSPSessionKey,
                       DWORD dwSessionKeyLen,
                       __RPC__in_opt IMDSPStorageGlobals *pStgGlobals,
                                          __RPC__deref_out_ecount_full_opt(*pnRightsCount) PWMDMRIGHTS *ppRights,
                        __RPC__out UINT *pnRightsCount,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        END_INTERFACE
    } ISCPSecureQueryVtbl;
    interface ISCPSecureQuery
    {
        CONST_VTBL struct ISCPSecureQueryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDataDemands(This,pfuFlags,pdwMinRightsData,pdwMinExamineData,pdwMinDecideData,abMac) )
    ( (This)->lpVtbl -> ExamineData(This,fuFlags,pwszExtension,pData,dwSize,abMac) )
    ( (This)->lpVtbl -> MakeDecision(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,ppExchange,abMac) )
    ( (This)->lpVtbl -> GetRights(This,pData,dwSize,pbSPSessionKey,dwSessionKeyLen,pStgGlobals,ppRights,pnRightsCount,abMac) )
EXTERN_C const IID IID_ISCPSecureQuery2;
    typedef struct ISCPSecureQuery2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISCPSecureQuery2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISCPSecureQuery2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISCPSecureQuery2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDataDemands )(
            __RPC__in ISCPSecureQuery2 * This,
                        __RPC__out UINT *pfuFlags,
                        __RPC__out DWORD *pdwMinRightsData,
                        __RPC__out DWORD *pdwMinExamineData,
                        __RPC__out DWORD *pdwMinDecideData,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *ExamineData )(
            __RPC__in ISCPSecureQuery2 * This,
                       UINT fuFlags,
                                       __RPC__in_opt_string LPWSTR pwszExtension,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *MakeDecision )(
            __RPC__in ISCPSecureQuery2 * This,
                       UINT fuFlags,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                       DWORD dwAppSec,
                                __RPC__in_ecount_full(dwSessionKeyLen) BYTE *pbSPSessionKey,
                       DWORD dwSessionKeyLen,
                       __RPC__in_opt IMDSPStorageGlobals *pStorageGlobals,
                        __RPC__deref_out_opt ISCPSecureExchange **ppExchange,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *GetRights )(
            __RPC__in ISCPSecureQuery2 * This,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                                __RPC__in_ecount_full(dwSessionKeyLen) BYTE *pbSPSessionKey,
                       DWORD dwSessionKeyLen,
                       __RPC__in_opt IMDSPStorageGlobals *pStgGlobals,
                                          __RPC__deref_out_ecount_full_opt(*pnRightsCount) PWMDMRIGHTS *ppRights,
                        __RPC__out UINT *pnRightsCount,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *MakeDecision2 )(
            __RPC__in ISCPSecureQuery2 * This,
                       UINT fuFlags,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                       DWORD dwAppSec,
                                __RPC__in_ecount_full(dwSessionKeyLen) BYTE *pbSPSessionKey,
                       DWORD dwSessionKeyLen,
                       __RPC__in_opt IMDSPStorageGlobals *pStorageGlobals,
                                __RPC__in_ecount_full(dwAppCertAppLen) BYTE *pAppCertApp,
                       DWORD dwAppCertAppLen,
                                __RPC__in_ecount_full(dwAppCertSPLen) BYTE *pAppCertSP,
                       DWORD dwAppCertSPLen,
                                                      __RPC__deref_inout_ecount_full_opt_string(*pdwRevocationURLLen) LPWSTR *pszRevocationURL,
                                 __RPC__inout DWORD *pdwRevocationURLLen,
                        __RPC__out DWORD *pdwRevocationBitFlag,
                                    __RPC__inout_opt ULONGLONG *pqwFileSize,
                       __RPC__in_opt IUnknown *pUnknown,
                        __RPC__deref_out_opt ISCPSecureExchange **ppExchange,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        END_INTERFACE
    } ISCPSecureQuery2Vtbl;
    interface ISCPSecureQuery2
    {
        CONST_VTBL struct ISCPSecureQuery2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDataDemands(This,pfuFlags,pdwMinRightsData,pdwMinExamineData,pdwMinDecideData,abMac) )
    ( (This)->lpVtbl -> ExamineData(This,fuFlags,pwszExtension,pData,dwSize,abMac) )
    ( (This)->lpVtbl -> MakeDecision(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,ppExchange,abMac) )
    ( (This)->lpVtbl -> GetRights(This,pData,dwSize,pbSPSessionKey,dwSessionKeyLen,pStgGlobals,ppRights,pnRightsCount,abMac) )
    ( (This)->lpVtbl -> MakeDecision2(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,pAppCertApp,dwAppCertAppLen,pAppCertSP,dwAppCertSPLen,pszRevocationURL,pdwRevocationURLLen,pdwRevocationBitFlag,pqwFileSize,pUnknown,ppExchange,abMac) )
EXTERN_C const IID IID_ISCPSecureExchange;
    typedef struct ISCPSecureExchangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISCPSecureExchange * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISCPSecureExchange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISCPSecureExchange * This);
        HRESULT ( STDMETHODCALLTYPE *TransferContainerData )(
            __RPC__in ISCPSecureExchange * This,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                        __RPC__out UINT *pfuReadyFlags,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *ObjectData )(
            __RPC__in ISCPSecureExchange * This,
                                 __RPC__out_ecount_full(*pdwSize) BYTE *pData,
                            __RPC__inout DWORD *pdwSize,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *TransferComplete )(
            __RPC__in ISCPSecureExchange * This);
        END_INTERFACE
    } ISCPSecureExchangeVtbl;
    interface ISCPSecureExchange
    {
        CONST_VTBL struct ISCPSecureExchangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> TransferContainerData(This,pData,dwSize,pfuReadyFlags,abMac) )
    ( (This)->lpVtbl -> ObjectData(This,pData,pdwSize,abMac) )
    ( (This)->lpVtbl -> TransferComplete(This) )
EXTERN_C const IID IID_ISCPSecureExchange2;
    typedef struct ISCPSecureExchange2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISCPSecureExchange2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISCPSecureExchange2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISCPSecureExchange2 * This);
        HRESULT ( STDMETHODCALLTYPE *TransferContainerData )(
            __RPC__in ISCPSecureExchange2 * This,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                        __RPC__out UINT *pfuReadyFlags,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *ObjectData )(
            __RPC__in ISCPSecureExchange2 * This,
                                 __RPC__out_ecount_full(*pdwSize) BYTE *pData,
                            __RPC__inout DWORD *pdwSize,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *TransferComplete )(
            __RPC__in ISCPSecureExchange2 * This);
        HRESULT ( STDMETHODCALLTYPE *TransferContainerData2 )(
            __RPC__in ISCPSecureExchange2 * This,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                       __RPC__in_opt IWMDMProgress3 *pProgressCallback,
                        __RPC__out UINT *pfuReadyFlags,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        END_INTERFACE
    } ISCPSecureExchange2Vtbl;
    interface ISCPSecureExchange2
    {
        CONST_VTBL struct ISCPSecureExchange2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> TransferContainerData(This,pData,dwSize,pfuReadyFlags,abMac) )
    ( (This)->lpVtbl -> ObjectData(This,pData,pdwSize,abMac) )
    ( (This)->lpVtbl -> TransferComplete(This) )
    ( (This)->lpVtbl -> TransferContainerData2(This,pData,dwSize,pProgressCallback,pfuReadyFlags,abMac) )
EXTERN_C const IID IID_ISCPSecureExchange3;
    typedef struct ISCPSecureExchange3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISCPSecureExchange3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISCPSecureExchange3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISCPSecureExchange3 * This);
        HRESULT ( STDMETHODCALLTYPE *TransferContainerData )(
            __RPC__in ISCPSecureExchange3 * This,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                        __RPC__out UINT *pfuReadyFlags,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *ObjectData )(
            __RPC__in ISCPSecureExchange3 * This,
                                 __RPC__out_ecount_full(*pdwSize) BYTE *pData,
                            __RPC__inout DWORD *pdwSize,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *TransferComplete )(
            __RPC__in ISCPSecureExchange3 * This);
        HRESULT ( STDMETHODCALLTYPE *TransferContainerData2 )(
            __RPC__in ISCPSecureExchange3 * This,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                       __RPC__in_opt IWMDMProgress3 *pProgressCallback,
                        __RPC__out UINT *pfuReadyFlags,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *TransferContainerDataOnClearChannel )(
            __RPC__in ISCPSecureExchange3 * This,
                       __RPC__in_opt IMDSPDevice *pDevice,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                       __RPC__in_opt IWMDMProgress3 *pProgressCallback,
                        __RPC__out UINT *pfuReadyFlags);
        HRESULT ( STDMETHODCALLTYPE *GetObjectDataOnClearChannel )(
            __RPC__in ISCPSecureExchange3 * This,
                       __RPC__in_opt IMDSPDevice *pDevice,
                                 __RPC__out_ecount_full(*pdwSize) BYTE *pData,
                            __RPC__inout DWORD *pdwSize);
        HRESULT ( STDMETHODCALLTYPE *TransferCompleteForDevice )(
            __RPC__in ISCPSecureExchange3 * This,
                       __RPC__in_opt IMDSPDevice *pDevice);
        END_INTERFACE
    } ISCPSecureExchange3Vtbl;
    interface ISCPSecureExchange3
    {
        CONST_VTBL struct ISCPSecureExchange3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> TransferContainerData(This,pData,dwSize,pfuReadyFlags,abMac) )
    ( (This)->lpVtbl -> ObjectData(This,pData,pdwSize,abMac) )
    ( (This)->lpVtbl -> TransferComplete(This) )
    ( (This)->lpVtbl -> TransferContainerData2(This,pData,dwSize,pProgressCallback,pfuReadyFlags,abMac) )
    ( (This)->lpVtbl -> TransferContainerDataOnClearChannel(This,pDevice,pData,dwSize,pProgressCallback,pfuReadyFlags) )
    ( (This)->lpVtbl -> GetObjectDataOnClearChannel(This,pDevice,pData,pdwSize) )
    ( (This)->lpVtbl -> TransferCompleteForDevice(This,pDevice) )
EXTERN_C const IID IID_ISCPSession;
    typedef struct ISCPSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISCPSession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISCPSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISCPSession * This);
        HRESULT ( STDMETHODCALLTYPE *BeginSession )(
            __RPC__in ISCPSession * This,
                       __RPC__in_opt IMDSPDevice *pIDevice,
                                __RPC__in_ecount_full(dwSizeCtx) BYTE *pCtx,
                       DWORD dwSizeCtx);
        HRESULT ( STDMETHODCALLTYPE *EndSession )(
            __RPC__in ISCPSession * This,
                                __RPC__in_ecount_full(dwSizeCtx) BYTE *pCtx,
                       DWORD dwSizeCtx);
        HRESULT ( STDMETHODCALLTYPE *GetSecureQuery )(
            __RPC__in ISCPSession * This,
                        __RPC__deref_out_opt ISCPSecureQuery **ppSecureQuery);
        END_INTERFACE
    } ISCPSessionVtbl;
    interface ISCPSession
    {
        CONST_VTBL struct ISCPSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginSession(This,pIDevice,pCtx,dwSizeCtx) )
    ( (This)->lpVtbl -> EndSession(This,pCtx,dwSizeCtx) )
    ( (This)->lpVtbl -> GetSecureQuery(This,ppSecureQuery) )
EXTERN_C const IID IID_ISCPSecureQuery3;
    typedef struct ISCPSecureQuery3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISCPSecureQuery3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISCPSecureQuery3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISCPSecureQuery3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDataDemands )(
            __RPC__in ISCPSecureQuery3 * This,
                        __RPC__out UINT *pfuFlags,
                        __RPC__out DWORD *pdwMinRightsData,
                        __RPC__out DWORD *pdwMinExamineData,
                        __RPC__out DWORD *pdwMinDecideData,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *ExamineData )(
            __RPC__in ISCPSecureQuery3 * This,
                       UINT fuFlags,
                                       __RPC__in_opt_string LPWSTR pwszExtension,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *MakeDecision )(
            __RPC__in ISCPSecureQuery3 * This,
                       UINT fuFlags,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                       DWORD dwAppSec,
                                __RPC__in_ecount_full(dwSessionKeyLen) BYTE *pbSPSessionKey,
                       DWORD dwSessionKeyLen,
                       __RPC__in_opt IMDSPStorageGlobals *pStorageGlobals,
                        __RPC__deref_out_opt ISCPSecureExchange **ppExchange,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *GetRights )(
            __RPC__in ISCPSecureQuery3 * This,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                                __RPC__in_ecount_full(dwSessionKeyLen) BYTE *pbSPSessionKey,
                       DWORD dwSessionKeyLen,
                       __RPC__in_opt IMDSPStorageGlobals *pStgGlobals,
                                          __RPC__deref_out_ecount_full_opt(*pnRightsCount) PWMDMRIGHTS *ppRights,
                        __RPC__out UINT *pnRightsCount,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *MakeDecision2 )(
            __RPC__in ISCPSecureQuery3 * This,
                       UINT fuFlags,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                       DWORD dwAppSec,
                                __RPC__in_ecount_full(dwSessionKeyLen) BYTE *pbSPSessionKey,
                       DWORD dwSessionKeyLen,
                       __RPC__in_opt IMDSPStorageGlobals *pStorageGlobals,
                                __RPC__in_ecount_full(dwAppCertAppLen) BYTE *pAppCertApp,
                       DWORD dwAppCertAppLen,
                                __RPC__in_ecount_full(dwAppCertSPLen) BYTE *pAppCertSP,
                       DWORD dwAppCertSPLen,
                                                      __RPC__deref_inout_ecount_full_opt_string(*pdwRevocationURLLen) LPWSTR *pszRevocationURL,
                                 __RPC__inout DWORD *pdwRevocationURLLen,
                        __RPC__out DWORD *pdwRevocationBitFlag,
                                    __RPC__inout_opt ULONGLONG *pqwFileSize,
                       __RPC__in_opt IUnknown *pUnknown,
                        __RPC__deref_out_opt ISCPSecureExchange **ppExchange,
                            __RPC__inout_ecount_full(WMDM_MAC_LENGTH) BYTE abMac[ 8 ]);
        HRESULT ( STDMETHODCALLTYPE *GetRightsOnClearChannel )(
            __RPC__in ISCPSecureQuery3 * This,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                                __RPC__in_ecount_full(dwSessionKeyLen) BYTE *pbSPSessionKey,
                       DWORD dwSessionKeyLen,
                       __RPC__in_opt IMDSPStorageGlobals *pStgGlobals,
                       __RPC__in_opt IWMDMProgress3 *pProgressCallback,
                                          __RPC__deref_out_ecount_full_opt(*pnRightsCount) PWMDMRIGHTS *ppRights,
                        __RPC__out UINT *pnRightsCount);
        HRESULT ( STDMETHODCALLTYPE *MakeDecisionOnClearChannel )(
            __RPC__in ISCPSecureQuery3 * This,
                       UINT fuFlags,
                                __RPC__in_ecount_full(dwSize) BYTE *pData,
                       DWORD dwSize,
                       DWORD dwAppSec,
                                __RPC__in_ecount_full(dwSessionKeyLen) BYTE *pbSPSessionKey,
                       DWORD dwSessionKeyLen,
                       __RPC__in_opt IMDSPStorageGlobals *pStorageGlobals,
                       __RPC__in_opt IWMDMProgress3 *pProgressCallback,
                                __RPC__in_ecount_full(dwAppCertAppLen) BYTE *pAppCertApp,
                       DWORD dwAppCertAppLen,
                                __RPC__in_ecount_full(dwAppCertSPLen) BYTE *pAppCertSP,
                       DWORD dwAppCertSPLen,
                                                      __RPC__deref_inout_ecount_full_opt_string(*pdwRevocationURLLen) LPWSTR *pszRevocationURL,
                                 __RPC__inout DWORD *pdwRevocationURLLen,
                        __RPC__out DWORD *pdwRevocationBitFlag,
                                    __RPC__inout_opt ULONGLONG *pqwFileSize,
                       __RPC__in_opt IUnknown *pUnknown,
                        __RPC__deref_out_opt ISCPSecureExchange **ppExchange);
        END_INTERFACE
    } ISCPSecureQuery3Vtbl;
    interface ISCPSecureQuery3
    {
        CONST_VTBL struct ISCPSecureQuery3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDataDemands(This,pfuFlags,pdwMinRightsData,pdwMinExamineData,pdwMinDecideData,abMac) )
    ( (This)->lpVtbl -> ExamineData(This,fuFlags,pwszExtension,pData,dwSize,abMac) )
    ( (This)->lpVtbl -> MakeDecision(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,ppExchange,abMac) )
    ( (This)->lpVtbl -> GetRights(This,pData,dwSize,pbSPSessionKey,dwSessionKeyLen,pStgGlobals,ppRights,pnRightsCount,abMac) )
    ( (This)->lpVtbl -> MakeDecision2(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,pAppCertApp,dwAppCertAppLen,pAppCertSP,dwAppCertSPLen,pszRevocationURL,pdwRevocationURLLen,pdwRevocationBitFlag,pqwFileSize,pUnknown,ppExchange,abMac) )
    ( (This)->lpVtbl -> GetRightsOnClearChannel(This,pData,dwSize,pbSPSessionKey,dwSessionKeyLen,pStgGlobals,pProgressCallback,ppRights,pnRightsCount) )
    ( (This)->lpVtbl -> MakeDecisionOnClearChannel(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,pProgressCallback,pAppCertApp,dwAppCertAppLen,pAppCertSP,dwAppCertSPLen,pszRevocationURL,pdwRevocationURLLen,pdwRevocationBitFlag,pqwFileSize,pUnknown,ppExchange) )
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0056_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0056_v0_0_s_ifspec;
EXTERN_C const IID IID_IComponentAuthenticate;
    typedef struct IComponentAuthenticateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComponentAuthenticate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComponentAuthenticate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComponentAuthenticate * This);
        HRESULT ( STDMETHODCALLTYPE *SACAuth )(
            __RPC__in IComponentAuthenticate * This,
                       DWORD dwProtocolID,
                       DWORD dwPass,
                                __RPC__in_ecount_full(dwDataInLen) BYTE *pbDataIn,
                       DWORD dwDataInLen,
                                          __RPC__deref_out_ecount_full_opt(*pdwDataOutLen) BYTE **ppbDataOut,
                        __RPC__out DWORD *pdwDataOutLen);
        HRESULT ( STDMETHODCALLTYPE *SACGetProtocols )(
            __RPC__in IComponentAuthenticate * This,
                                          __RPC__deref_out_ecount_full_opt(*pdwProtocolCount) DWORD **ppdwProtocols,
                        __RPC__out DWORD *pdwProtocolCount);
        END_INTERFACE
    } IComponentAuthenticateVtbl;
    interface IComponentAuthenticate
    {
        CONST_VTBL struct IComponentAuthenticateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SACAuth(This,dwProtocolID,dwPass,pbDataIn,dwDataInLen,ppbDataOut,pdwDataOutLen) )
    ( (This)->lpVtbl -> SACGetProtocols(This,ppdwProtocols,pdwProtocolCount) )
const GUID EVENT_WMDM_CONTENT_TRANSFER = { 0x339C9BF4, 0xBCFE, 0x4ED8, { 0x94, 0xDF, 0xEA, 0xF8, 0xC2, 0x6A, 0xB6, 0x1B } };
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0057_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0057_v0_0_s_ifspec;
EXTERN_C const IID LIBID_MSWMDMLib;
EXTERN_C const CLSID CLSID_MediaDevMgrClassFactory;
class DECLSPEC_UUID("50040C1D-BDBF-4924-B873-F14D6C5BFD66")
MediaDevMgrClassFactory;
EXTERN_C const CLSID CLSID_MediaDevMgr;
class DECLSPEC_UUID("25BAAD81-3560-11D3-8471-00C04F79DBC0")
MediaDevMgr;
EXTERN_C const CLSID CLSID_WMDMDevice;
class DECLSPEC_UUID("807B3CDF-357A-11d3-8471-00C04F79DBC0")
WMDMDevice;
EXTERN_C const CLSID CLSID_WMDMStorage;
class DECLSPEC_UUID("807B3CE0-357A-11d3-8471-00C04F79DBC0")
WMDMStorage;
EXTERN_C const CLSID CLSID_WMDMStorageGlobal;
class DECLSPEC_UUID("807B3CE1-357A-11d3-8471-00C04F79DBC0")
WMDMStorageGlobal;
EXTERN_C const CLSID CLSID_WMDMDeviceEnum;
class DECLSPEC_UUID("430E35AF-3971-11D3-8474-00C04F79DBC0")
WMDMDeviceEnum;
EXTERN_C const CLSID CLSID_WMDMStorageEnum;
class DECLSPEC_UUID("EB401A3B-3AF7-11d3-8474-00C04F79DBC0")
WMDMStorageEnum;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0058_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0058_v0_0_s_ifspec;
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
