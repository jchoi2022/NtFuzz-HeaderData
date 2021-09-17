#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDiscMaster2 IDiscMaster2;
typedef interface DDiscMaster2Events DDiscMaster2Events;
typedef interface IDiscRecorder2Ex IDiscRecorder2Ex;
typedef interface IDiscRecorder2 IDiscRecorder2;
typedef interface IWriteEngine2 IWriteEngine2;
typedef interface IWriteEngine2EventArgs IWriteEngine2EventArgs;
typedef interface DWriteEngine2Events DWriteEngine2Events;
typedef interface IDiscFormat2 IDiscFormat2;
typedef interface IDiscFormat2Erase IDiscFormat2Erase;
typedef interface DDiscFormat2EraseEvents DDiscFormat2EraseEvents;
typedef interface IDiscFormat2Data IDiscFormat2Data;
typedef interface DDiscFormat2DataEvents DDiscFormat2DataEvents;
typedef interface IDiscFormat2DataEventArgs IDiscFormat2DataEventArgs;
typedef interface IDiscFormat2TrackAtOnce IDiscFormat2TrackAtOnce;
typedef interface DDiscFormat2TrackAtOnceEvents DDiscFormat2TrackAtOnceEvents;
typedef interface IDiscFormat2TrackAtOnceEventArgs IDiscFormat2TrackAtOnceEventArgs;
typedef interface IDiscFormat2RawCD IDiscFormat2RawCD;
typedef interface DDiscFormat2RawCDEvents DDiscFormat2RawCDEvents;
typedef interface IDiscFormat2RawCDEventArgs IDiscFormat2RawCDEventArgs;
typedef interface IBurnVerification IBurnVerification;
typedef interface IWriteSpeedDescriptor IWriteSpeedDescriptor;
typedef interface IMultisession IMultisession;
typedef interface IMultisessionSequential IMultisessionSequential;
typedef interface IMultisessionSequential2 IMultisessionSequential2;
typedef interface IMultisessionRandomWrite IMultisessionRandomWrite;
typedef interface IStreamPseudoRandomBased IStreamPseudoRandomBased;
typedef interface IStreamConcatenate IStreamConcatenate;
typedef interface IStreamInterleave IStreamInterleave;
typedef interface IRawCDImageCreator IRawCDImageCreator;
typedef interface IRawCDImageTrackInfo IRawCDImageTrackInfo;
typedef interface IBlockRange IBlockRange;
typedef interface IBlockRangeList IBlockRangeList;
typedef class MsftDiscMaster2 MsftDiscMaster2;
typedef class MsftDiscRecorder2 MsftDiscRecorder2;
typedef class MsftWriteEngine2 MsftWriteEngine2;
typedef class MsftDiscFormat2Erase MsftDiscFormat2Erase;
typedef class MsftDiscFormat2Data MsftDiscFormat2Data;
typedef class MsftDiscFormat2TrackAtOnce MsftDiscFormat2TrackAtOnce;
typedef class MsftDiscFormat2RawCD MsftDiscFormat2RawCD;
typedef class MsftStreamZero MsftStreamZero;
typedef class MsftStreamPrng001 MsftStreamPrng001;
typedef class MsftStreamConcatenate MsftStreamConcatenate;
typedef class MsftStreamInterleave MsftStreamInterleave;
typedef class MsftWriteSpeedDescriptor MsftWriteSpeedDescriptor;
typedef class MsftMultisessionSequential MsftMultisessionSequential;
typedef class MsftMultisessionRandomWrite MsftMultisessionRandomWrite;
typedef class MsftRawCDImageCreator MsftRawCDImageCreator;
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _IMAPI_MEDIA_PHYSICAL_TYPE
    {
        IMAPI_MEDIA_TYPE_UNKNOWN = 0,
        IMAPI_MEDIA_TYPE_CDROM = 0x1,
        IMAPI_MEDIA_TYPE_CDR = 0x2,
        IMAPI_MEDIA_TYPE_CDRW = 0x3,
        IMAPI_MEDIA_TYPE_DVDROM = 0x4,
        IMAPI_MEDIA_TYPE_DVDRAM = 0x5,
        IMAPI_MEDIA_TYPE_DVDPLUSR = 0x6,
        IMAPI_MEDIA_TYPE_DVDPLUSRW = 0x7,
        IMAPI_MEDIA_TYPE_DVDPLUSR_DUALLAYER = 0x8,
        IMAPI_MEDIA_TYPE_DVDDASHR = 0x9,
        IMAPI_MEDIA_TYPE_DVDDASHRW = 0xa,
        IMAPI_MEDIA_TYPE_DVDDASHR_DUALLAYER = 0xb,
        IMAPI_MEDIA_TYPE_DISK = 0xc,
        IMAPI_MEDIA_TYPE_DVDPLUSRW_DUALLAYER = 0xd,
        IMAPI_MEDIA_TYPE_HDDVDROM = 0xe,
        IMAPI_MEDIA_TYPE_HDDVDR = 0xf,
        IMAPI_MEDIA_TYPE_HDDVDRAM = 0x10,
        IMAPI_MEDIA_TYPE_BDROM = 0x11,
        IMAPI_MEDIA_TYPE_BDR = 0x12,
        IMAPI_MEDIA_TYPE_BDRE = 0x13,
        IMAPI_MEDIA_TYPE_MAX = 0x13
    } IMAPI_MEDIA_PHYSICAL_TYPE;
typedef enum _IMAPI_MEDIA_PHYSICAL_TYPE *PIMAPI_MEDIA_PHYSICAL_TYPE;
typedef
enum _IMAPI_MEDIA_WRITE_PROTECT_STATE
    {
        IMAPI_WRITEPROTECTED_UNTIL_POWERDOWN = 0x1,
        IMAPI_WRITEPROTECTED_BY_CARTRIDGE = 0x2,
        IMAPI_WRITEPROTECTED_BY_MEDIA_SPECIFIC_REASON = 0x4,
        IMAPI_WRITEPROTECTED_BY_SOFTWARE_WRITE_PROTECT = 0x8,
        IMAPI_WRITEPROTECTED_BY_DISC_CONTROL_BLOCK = 0x10,
        IMAPI_WRITEPROTECTED_READ_ONLY_MEDIA = 0x4000
    } IMAPI_MEDIA_WRITE_PROTECT_STATE;
typedef enum _IMAPI_MEDIA_WRITE_PROTECT_STATE *PIMAPI_MEDIA_WRITE_PROTECT_STATE;
typedef
enum _IMAPI_READ_TRACK_ADDRESS_TYPE
    {
        IMAPI_READ_TRACK_ADDRESS_TYPE_LBA = 0,
        IMAPI_READ_TRACK_ADDRESS_TYPE_TRACK = 1,
        IMAPI_READ_TRACK_ADDRESS_TYPE_SESSION = 2
    } IMAPI_READ_TRACK_ADDRESS_TYPE;
typedef enum _IMAPI_READ_TRACK_ADDRESS_TYPE *PIMAPI_READ_TRACK_ADDRESS_TYPE;
typedef
enum _IMAPI_MODE_PAGE_REQUEST_TYPE
    {
        IMAPI_MODE_PAGE_REQUEST_TYPE_CURRENT_VALUES = 0,
        IMAPI_MODE_PAGE_REQUEST_TYPE_CHANGEABLE_VALUES = 1,
        IMAPI_MODE_PAGE_REQUEST_TYPE_DEFAULT_VALUES = 2,
        IMAPI_MODE_PAGE_REQUEST_TYPE_SAVED_VALUES = 3
    } IMAPI_MODE_PAGE_REQUEST_TYPE;
typedef enum _IMAPI_MODE_PAGE_REQUEST_TYPE *PIMAPI_MODE_PAGE_REQUEST_TYPE;
typedef
enum _IMAPI_MODE_PAGE_TYPE
    {
        IMAPI_MODE_PAGE_TYPE_READ_WRITE_ERROR_RECOVERY = 0x1,
        IMAPI_MODE_PAGE_TYPE_MRW = 0x3,
        IMAPI_MODE_PAGE_TYPE_WRITE_PARAMETERS = 0x5,
        IMAPI_MODE_PAGE_TYPE_CACHING = 0x8,
        IMAPI_MODE_PAGE_TYPE_INFORMATIONAL_EXCEPTIONS = 0x1c,
        IMAPI_MODE_PAGE_TYPE_TIMEOUT_AND_PROTECT = 0x1d,
        IMAPI_MODE_PAGE_TYPE_POWER_CONDITION = 0x1a,
        IMAPI_MODE_PAGE_TYPE_LEGACY_CAPABILITIES = 0x2a
    } IMAPI_MODE_PAGE_TYPE;
typedef enum _IMAPI_MODE_PAGE_TYPE *PIMAPI_MODE_PAGE_TYPE;
typedef
enum _IMAPI_FEATURE_PAGE_TYPE
    {
        IMAPI_FEATURE_PAGE_TYPE_PROFILE_LIST = 0,
        IMAPI_FEATURE_PAGE_TYPE_CORE = 0x1,
        IMAPI_FEATURE_PAGE_TYPE_MORPHING = 0x2,
        IMAPI_FEATURE_PAGE_TYPE_REMOVABLE_MEDIUM = 0x3,
        IMAPI_FEATURE_PAGE_TYPE_WRITE_PROTECT = 0x4,
        IMAPI_FEATURE_PAGE_TYPE_RANDOMLY_READABLE = 0x10,
        IMAPI_FEATURE_PAGE_TYPE_CD_MULTIREAD = 0x1d,
        IMAPI_FEATURE_PAGE_TYPE_CD_READ = 0x1e,
        IMAPI_FEATURE_PAGE_TYPE_DVD_READ = 0x1f,
        IMAPI_FEATURE_PAGE_TYPE_RANDOMLY_WRITABLE = 0x20,
        IMAPI_FEATURE_PAGE_TYPE_INCREMENTAL_STREAMING_WRITABLE = 0x21,
        IMAPI_FEATURE_PAGE_TYPE_SECTOR_ERASABLE = 0x22,
        IMAPI_FEATURE_PAGE_TYPE_FORMATTABLE = 0x23,
        IMAPI_FEATURE_PAGE_TYPE_HARDWARE_DEFECT_MANAGEMENT = 0x24,
        IMAPI_FEATURE_PAGE_TYPE_WRITE_ONCE = 0x25,
        IMAPI_FEATURE_PAGE_TYPE_RESTRICTED_OVERWRITE = 0x26,
        IMAPI_FEATURE_PAGE_TYPE_CDRW_CAV_WRITE = 0x27,
        IMAPI_FEATURE_PAGE_TYPE_MRW = 0x28,
        IMAPI_FEATURE_PAGE_TYPE_ENHANCED_DEFECT_REPORTING = 0x29,
        IMAPI_FEATURE_PAGE_TYPE_DVD_PLUS_RW = 0x2a,
        IMAPI_FEATURE_PAGE_TYPE_DVD_PLUS_R = 0x2b,
        IMAPI_FEATURE_PAGE_TYPE_RIGID_RESTRICTED_OVERWRITE = 0x2c,
        IMAPI_FEATURE_PAGE_TYPE_CD_TRACK_AT_ONCE = 0x2d,
        IMAPI_FEATURE_PAGE_TYPE_CD_MASTERING = 0x2e,
        IMAPI_FEATURE_PAGE_TYPE_DVD_DASH_WRITE = 0x2f,
        IMAPI_FEATURE_PAGE_TYPE_DOUBLE_DENSITY_CD_READ = 0x30,
        IMAPI_FEATURE_PAGE_TYPE_DOUBLE_DENSITY_CD_R_WRITE = 0x31,
        IMAPI_FEATURE_PAGE_TYPE_DOUBLE_DENSITY_CD_RW_WRITE = 0x32,
        IMAPI_FEATURE_PAGE_TYPE_LAYER_JUMP_RECORDING = 0x33,
        IMAPI_FEATURE_PAGE_TYPE_CD_RW_MEDIA_WRITE_SUPPORT = 0x37,
        IMAPI_FEATURE_PAGE_TYPE_BD_PSEUDO_OVERWRITE = 0x38,
        IMAPI_FEATURE_PAGE_TYPE_DVD_PLUS_R_DUAL_LAYER = 0x3b,
        IMAPI_FEATURE_PAGE_TYPE_BD_READ = 0x40,
        IMAPI_FEATURE_PAGE_TYPE_BD_WRITE = 0x41,
        IMAPI_FEATURE_PAGE_TYPE_HD_DVD_READ = 0x50,
        IMAPI_FEATURE_PAGE_TYPE_HD_DVD_WRITE = 0x51,
        IMAPI_FEATURE_PAGE_TYPE_POWER_MANAGEMENT = 0x100,
        IMAPI_FEATURE_PAGE_TYPE_SMART = 0x101,
        IMAPI_FEATURE_PAGE_TYPE_EMBEDDED_CHANGER = 0x102,
        IMAPI_FEATURE_PAGE_TYPE_CD_ANALOG_PLAY = 0x103,
        IMAPI_FEATURE_PAGE_TYPE_MICROCODE_UPDATE = 0x104,
        IMAPI_FEATURE_PAGE_TYPE_TIMEOUT = 0x105,
        IMAPI_FEATURE_PAGE_TYPE_DVD_CSS = 0x106,
        IMAPI_FEATURE_PAGE_TYPE_REAL_TIME_STREAMING = 0x107,
        IMAPI_FEATURE_PAGE_TYPE_LOGICAL_UNIT_SERIAL_NUMBER = 0x108,
        IMAPI_FEATURE_PAGE_TYPE_MEDIA_SERIAL_NUMBER = 0x109,
        IMAPI_FEATURE_PAGE_TYPE_DISC_CONTROL_BLOCKS = 0x10a,
        IMAPI_FEATURE_PAGE_TYPE_DVD_CPRM = 0x10b,
        IMAPI_FEATURE_PAGE_TYPE_FIRMWARE_INFORMATION = 0x10c,
        IMAPI_FEATURE_PAGE_TYPE_AACS = 0x10d,
        IMAPI_FEATURE_PAGE_TYPE_VCPS = 0x110
    } IMAPI_FEATURE_PAGE_TYPE;
typedef enum _IMAPI_FEATURE_PAGE_TYPE *PIMAPI_FEATURE_PAGE_TYPE;
typedef
enum _IMAPI_PROFILE_TYPE
    {
        IMAPI_PROFILE_TYPE_INVALID = 0,
        IMAPI_PROFILE_TYPE_NON_REMOVABLE_DISK = 0x1,
        IMAPI_PROFILE_TYPE_REMOVABLE_DISK = 0x2,
        IMAPI_PROFILE_TYPE_MO_ERASABLE = 0x3,
        IMAPI_PROFILE_TYPE_MO_WRITE_ONCE = 0x4,
        IMAPI_PROFILE_TYPE_AS_MO = 0x5,
        IMAPI_PROFILE_TYPE_CDROM = 0x8,
        IMAPI_PROFILE_TYPE_CD_RECORDABLE = 0x9,
        IMAPI_PROFILE_TYPE_CD_REWRITABLE = 0xa,
        IMAPI_PROFILE_TYPE_DVDROM = 0x10,
        IMAPI_PROFILE_TYPE_DVD_DASH_RECORDABLE = 0x11,
        IMAPI_PROFILE_TYPE_DVD_RAM = 0x12,
        IMAPI_PROFILE_TYPE_DVD_DASH_REWRITABLE = 0x13,
        IMAPI_PROFILE_TYPE_DVD_DASH_RW_SEQUENTIAL = 0x14,
        IMAPI_PROFILE_TYPE_DVD_DASH_R_DUAL_SEQUENTIAL = 0x15,
        IMAPI_PROFILE_TYPE_DVD_DASH_R_DUAL_LAYER_JUMP = 0x16,
        IMAPI_PROFILE_TYPE_DVD_PLUS_RW = 0x1a,
        IMAPI_PROFILE_TYPE_DVD_PLUS_R = 0x1b,
        IMAPI_PROFILE_TYPE_DDCDROM = 0x20,
        IMAPI_PROFILE_TYPE_DDCD_RECORDABLE = 0x21,
        IMAPI_PROFILE_TYPE_DDCD_REWRITABLE = 0x22,
        IMAPI_PROFILE_TYPE_DVD_PLUS_RW_DUAL = 0x2a,
        IMAPI_PROFILE_TYPE_DVD_PLUS_R_DUAL = 0x2b,
        IMAPI_PROFILE_TYPE_BD_ROM = 0x40,
        IMAPI_PROFILE_TYPE_BD_R_SEQUENTIAL = 0x41,
        IMAPI_PROFILE_TYPE_BD_R_RANDOM_RECORDING = 0x42,
        IMAPI_PROFILE_TYPE_BD_REWRITABLE = 0x43,
        IMAPI_PROFILE_TYPE_HD_DVD_ROM = 0x50,
        IMAPI_PROFILE_TYPE_HD_DVD_RECORDABLE = 0x51,
        IMAPI_PROFILE_TYPE_HD_DVD_RAM = 0x52,
        IMAPI_PROFILE_TYPE_NON_STANDARD = 0xffff
    } IMAPI_PROFILE_TYPE;
typedef enum _IMAPI_PROFILE_TYPE *PIMAPI_PROFILE_TYPE;
typedef
enum _IMAPI_FORMAT2_DATA_WRITE_ACTION
    {
        IMAPI_FORMAT2_DATA_WRITE_ACTION_VALIDATING_MEDIA = 0,
        IMAPI_FORMAT2_DATA_WRITE_ACTION_FORMATTING_MEDIA = 0x1,
        IMAPI_FORMAT2_DATA_WRITE_ACTION_INITIALIZING_HARDWARE = 0x2,
        IMAPI_FORMAT2_DATA_WRITE_ACTION_CALIBRATING_POWER = 0x3,
        IMAPI_FORMAT2_DATA_WRITE_ACTION_WRITING_DATA = 0x4,
        IMAPI_FORMAT2_DATA_WRITE_ACTION_FINALIZATION = 0x5,
        IMAPI_FORMAT2_DATA_WRITE_ACTION_COMPLETED = 0x6,
        IMAPI_FORMAT2_DATA_WRITE_ACTION_VERIFYING = 0x7
    } IMAPI_FORMAT2_DATA_WRITE_ACTION;
typedef enum _IMAPI_FORMAT2_DATA_WRITE_ACTION *PIMAPI_FORMAT2_DATA_WRITE_ACTION;
typedef
enum _IMAPI_FORMAT2_DATA_MEDIA_STATE
    {
        IMAPI_FORMAT2_DATA_MEDIA_STATE_UNKNOWN = 0,
        IMAPI_FORMAT2_DATA_MEDIA_STATE_INFORMATIONAL_MASK = 0xf,
        IMAPI_FORMAT2_DATA_MEDIA_STATE_UNSUPPORTED_MASK = 0xfc00,
        IMAPI_FORMAT2_DATA_MEDIA_STATE_OVERWRITE_ONLY = 0x1,
        IMAPI_FORMAT2_DATA_MEDIA_STATE_RANDOMLY_WRITABLE = 0x1,
        IMAPI_FORMAT2_DATA_MEDIA_STATE_BLANK = 0x2,
        IMAPI_FORMAT2_DATA_MEDIA_STATE_APPENDABLE = 0x4,
        IMAPI_FORMAT2_DATA_MEDIA_STATE_FINAL_SESSION = 0x8,
        IMAPI_FORMAT2_DATA_MEDIA_STATE_DAMAGED = 0x400,
        IMAPI_FORMAT2_DATA_MEDIA_STATE_ERASE_REQUIRED = 0x800,
        IMAPI_FORMAT2_DATA_MEDIA_STATE_NON_EMPTY_SESSION = 0x1000,
        IMAPI_FORMAT2_DATA_MEDIA_STATE_WRITE_PROTECTED = 0x2000,
        IMAPI_FORMAT2_DATA_MEDIA_STATE_FINALIZED = 0x4000,
        IMAPI_FORMAT2_DATA_MEDIA_STATE_UNSUPPORTED_MEDIA = 0x8000
    } IMAPI_FORMAT2_DATA_MEDIA_STATE;
typedef enum _IMAPI_FORMAT2_DATA_MEDIA_STATE *PIMAPI_FORMAT2_DATA_MEDIA_STATE;
typedef
enum _IMAPI_FORMAT2_TAO_WRITE_ACTION
    {
        IMAPI_FORMAT2_TAO_WRITE_ACTION_UNKNOWN = 0,
        IMAPI_FORMAT2_TAO_WRITE_ACTION_PREPARING = 0x1,
        IMAPI_FORMAT2_TAO_WRITE_ACTION_WRITING = 0x2,
        IMAPI_FORMAT2_TAO_WRITE_ACTION_FINISHING = 0x3,
        IMAPI_FORMAT2_TAO_WRITE_ACTION_VERIFYING = 0x4
    } IMAPI_FORMAT2_TAO_WRITE_ACTION;
typedef enum _IMAPI_FORMAT2_TAO_WRITE_ACTION *PIMAPI_FORMAT2_TAO_WRITE_ACTION;
typedef
enum _IMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE
    {
        IMAPI_FORMAT2_RAW_CD_SUBCODE_PQ_ONLY = 0x1,
        IMAPI_FORMAT2_RAW_CD_SUBCODE_IS_COOKED = 0x2,
        IMAPI_FORMAT2_RAW_CD_SUBCODE_IS_RAW = 0x3
    } IMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE;
typedef enum _IMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE *PIMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE;
typedef
enum _IMAPI_FORMAT2_RAW_CD_WRITE_ACTION
    {
        IMAPI_FORMAT2_RAW_CD_WRITE_ACTION_UNKNOWN = 0,
        IMAPI_FORMAT2_RAW_CD_WRITE_ACTION_PREPARING = 0x1,
        IMAPI_FORMAT2_RAW_CD_WRITE_ACTION_WRITING = 0x2,
        IMAPI_FORMAT2_RAW_CD_WRITE_ACTION_FINISHING = 0x3
    } IMAPI_FORMAT2_RAW_CD_WRITE_ACTION;
typedef enum _IMAPI_FORMAT2_RAW_CD_WRITE_ACTION *PIMAPI_FORMAT2_RAW_CD_WRITE_ACTION;
typedef
enum _IMAPI_CD_SECTOR_TYPE
    {
        IMAPI_CD_SECTOR_AUDIO = 0,
        IMAPI_CD_SECTOR_MODE_ZERO = 0x1,
        IMAPI_CD_SECTOR_MODE1 = 0x2,
        IMAPI_CD_SECTOR_MODE2FORM0 = 0x3,
        IMAPI_CD_SECTOR_MODE2FORM1 = 0x4,
        IMAPI_CD_SECTOR_MODE2FORM2 = 0x5,
        IMAPI_CD_SECTOR_MODE1RAW = 0x6,
        IMAPI_CD_SECTOR_MODE2FORM0RAW = 0x7,
        IMAPI_CD_SECTOR_MODE2FORM1RAW = 0x8,
        IMAPI_CD_SECTOR_MODE2FORM2RAW = 0x9
    } IMAPI_CD_SECTOR_TYPE;
typedef enum _IMAPI_CD_SECTOR_TYPE *PIMAPI_CD_SECTOR_TYPE;
typedef
enum _IMAPI_CD_TRACK_DIGITAL_COPY_SETTING
    {
        IMAPI_CD_TRACK_DIGITAL_COPY_PERMITTED = 0,
        IMAPI_CD_TRACK_DIGITAL_COPY_PROHIBITED = 0x1,
        IMAPI_CD_TRACK_DIGITAL_COPY_SCMS = 0x2
    } IMAPI_CD_TRACK_DIGITAL_COPY_SETTING;
typedef enum _IMAPI_CD_TRACK_DIGITAL_COPY_SETTING *PIMAPI_CD_TRACK_DIGITAL_COPY_SETTING;
typedef
enum _IMAPI_BURN_VERIFICATION_LEVEL
    {
        IMAPI_BURN_VERIFICATION_NONE = 0,
        IMAPI_BURN_VERIFICATION_QUICK = 1,
        IMAPI_BURN_VERIFICATION_FULL = 2
    } IMAPI_BURN_VERIFICATION_LEVEL;
typedef enum _IMAPI_BURN_VERIFICATION_LEVEL *PIMAPI_BURN_VERIFICATION_LEVEL;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDiscMaster2;
    typedef struct IDiscMaster2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDiscMaster2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDiscMaster2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDiscMaster2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDiscMaster2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDiscMaster2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDiscMaster2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDiscMaster2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IDiscMaster2 * This,
                                     __RPC__deref_out_opt IEnumVARIANT **ppunk);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IDiscMaster2 * This,
                       LONG index,
                                     __RPC__deref_out_opt BSTR *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IDiscMaster2 * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsSupportedEnvironment )(
            __RPC__in IDiscMaster2 * This,
                                     __RPC__out VARIANT_BOOL *value);
        END_INTERFACE
    } IDiscMaster2Vtbl;
    interface IDiscMaster2
    {
        CONST_VTBL struct IDiscMaster2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppunk) )
    ( (This)->lpVtbl -> get_Item(This,index,value) )
    ( (This)->lpVtbl -> get_Count(This,value) )
    ( (This)->lpVtbl -> get_IsSupportedEnvironment(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_DDiscMaster2Events;
    typedef struct DDiscMaster2EventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DDiscMaster2Events * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DDiscMaster2Events * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DDiscMaster2Events * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DDiscMaster2Events * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DDiscMaster2Events * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DDiscMaster2Events * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DDiscMaster2Events * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *NotifyDeviceAdded )(
            __RPC__in DDiscMaster2Events * This,
                       __RPC__in_opt IDispatch *object,
                       __RPC__in BSTR uniqueId);
                               HRESULT ( STDMETHODCALLTYPE *NotifyDeviceRemoved )(
            __RPC__in DDiscMaster2Events * This,
                       __RPC__in_opt IDispatch *object,
                       __RPC__in BSTR uniqueId);
        END_INTERFACE
    } DDiscMaster2EventsVtbl;
    interface DDiscMaster2Events
    {
        CONST_VTBL struct DDiscMaster2EventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> NotifyDeviceAdded(This,object,uniqueId) )
    ( (This)->lpVtbl -> NotifyDeviceRemoved(This,object,uniqueId) )
typedef __RPC__range(0,0xffff) ULONG ULONG_IMAPI2_DVD_STRUCTURE;
typedef __RPC__range(0,0xfffffff) ULONG ULONG_IMAPI2_ADAPTER_DESCRIPTOR;
typedef __RPC__range(0,0xfffffff) ULONG ULONG_IMAPI2_DEVICE_DESCRIPTOR;
typedef __RPC__range(0,0x10002) ULONG ULONG_IMAPI2_DISC_INFORMATION;
typedef __RPC__range(0,0x10002) ULONG ULONG_IMAPI2_TRACK_INFORMATION;
typedef __RPC__range(0,0x100) ULONG ULONG_IMAPI2_FEATURE_PAGE;
typedef __RPC__range(0,0x101) ULONG ULONG_IMAPI2_MODE_PAGE;
typedef __RPC__range(0,0x10000) ULONG ULONG_IMAPI2_ALL_FEATURE_PAGES;
typedef __RPC__range(0,0x3f) ULONG ULONG_IMAPI2_ALL_PROFILES;
typedef __RPC__range(0,0x7ffb) ULONG ULONG_IMAPI2_ALL_MODE_PAGES;
typedef __RPC__range(1,0x7fffffff) ULONG ULONG_IMAPI2_NONZERO;
typedef __RPC__range(0,0x7fffffff) ULONG ULONG_IMAPI2_NOT_NEGATIVE;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IDiscRecorder2Ex;
    typedef struct IDiscRecorder2ExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDiscRecorder2Ex * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDiscRecorder2Ex * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDiscRecorder2Ex * This);
                           HRESULT ( STDMETHODCALLTYPE *SendCommandNoData )(
            __RPC__in IDiscRecorder2Ex * This,
                                     __RPC__in_ecount_full(CdbSize) BYTE *Cdb,
                              __RPC__in_range(6,16) ULONG CdbSize,
                             __RPC__out_ecount_full(18) BYTE SenseBuffer[ 18 ],
                       ULONG Timeout);
                           HRESULT ( STDMETHODCALLTYPE *SendCommandSendDataToDevice )(
            __RPC__in IDiscRecorder2Ex * This,
                                     __RPC__in_ecount_full(CdbSize) BYTE *Cdb,
                              __RPC__in_range(6,16) ULONG CdbSize,
                             __RPC__out_ecount_full(18) BYTE SenseBuffer[ 18 ],
                       ULONG Timeout,
                                     __RPC__in_ecount_full(BufferSize) BYTE *Buffer,
                       ULONG_IMAPI2_NONZERO BufferSize);
                           HRESULT ( STDMETHODCALLTYPE *SendCommandGetDataFromDevice )(
            __RPC__in IDiscRecorder2Ex * This,
                                     __RPC__in_ecount_full(CdbSize) BYTE *Cdb,
                              __RPC__in_range(6,16) ULONG CdbSize,
                             __RPC__out_ecount_full(18) BYTE SenseBuffer[ 18 ],
                       ULONG Timeout,
                                                 __RPC__out_ecount_part(BufferSize, *BufferFetched) BYTE *Buffer,
                       ULONG_IMAPI2_NONZERO BufferSize,
                             __RPC__out ULONG_IMAPI2_NOT_NEGATIVE *BufferFetched);
                           HRESULT ( STDMETHODCALLTYPE *ReadDvdStructure )(
            __RPC__in IDiscRecorder2Ex * This,
                              __RPC__in_range(0,0xff) ULONG format,
                       ULONG address,
                              __RPC__in_range(0,0xff) ULONG layer,
                              __RPC__in_range(0,0x3) ULONG agid,
                                               __RPC__deref_out_ecount_full_opt(*count) BYTE **data,
                             __RPC__out ULONG_IMAPI2_DVD_STRUCTURE *count);
                           HRESULT ( STDMETHODCALLTYPE *SendDvdStructure )(
            __RPC__in IDiscRecorder2Ex * This,
                              __RPC__in_range(0,0xff) ULONG format,
                                     __RPC__in_ecount_full(count) BYTE *data,
                       ULONG_IMAPI2_DVD_STRUCTURE count);
                           HRESULT ( STDMETHODCALLTYPE *GetAdapterDescriptor )(
            __RPC__in IDiscRecorder2Ex * This,
                                               __RPC__deref_out_ecount_full_opt(*byteSize) BYTE **data,
                             __RPC__out ULONG_IMAPI2_ADAPTER_DESCRIPTOR *byteSize);
                           HRESULT ( STDMETHODCALLTYPE *GetDeviceDescriptor )(
            __RPC__in IDiscRecorder2Ex * This,
                                               __RPC__deref_out_ecount_full_opt(*byteSize) BYTE **data,
                             __RPC__out ULONG_IMAPI2_DEVICE_DESCRIPTOR *byteSize);
                           HRESULT ( STDMETHODCALLTYPE *GetDiscInformation )(
            __RPC__in IDiscRecorder2Ex * This,
                                               __RPC__deref_out_ecount_full_opt(*byteSize) BYTE **discInformation,
                             __RPC__out ULONG_IMAPI2_DISC_INFORMATION *byteSize);
                           HRESULT ( STDMETHODCALLTYPE *GetTrackInformation )(
            __RPC__in IDiscRecorder2Ex * This,
                       ULONG address,
                       IMAPI_READ_TRACK_ADDRESS_TYPE addressType,
                                               __RPC__deref_out_ecount_full_opt(*byteSize) BYTE **trackInformation,
                             __RPC__out ULONG_IMAPI2_TRACK_INFORMATION *byteSize);
                           HRESULT ( STDMETHODCALLTYPE *GetFeaturePage )(
            __RPC__in IDiscRecorder2Ex * This,
                       IMAPI_FEATURE_PAGE_TYPE requestedFeature,
                       BOOLEAN currentFeatureOnly,
                                               __RPC__deref_out_ecount_full_opt(*byteSize) BYTE **featureData,
                             __RPC__out ULONG_IMAPI2_FEATURE_PAGE *byteSize);
                           HRESULT ( STDMETHODCALLTYPE *GetModePage )(
            __RPC__in IDiscRecorder2Ex * This,
                       IMAPI_MODE_PAGE_TYPE requestedModePage,
                       IMAPI_MODE_PAGE_REQUEST_TYPE requestType,
                                               __RPC__deref_out_ecount_full_opt(*byteSize) BYTE **modePageData,
                             __RPC__out ULONG_IMAPI2_MODE_PAGE *byteSize);
                           HRESULT ( STDMETHODCALLTYPE *SetModePage )(
            __RPC__in IDiscRecorder2Ex * This,
                       IMAPI_MODE_PAGE_REQUEST_TYPE requestType,
                                     __RPC__in_ecount_full(byteSize) BYTE *data,
                       ULONG_IMAPI2_MODE_PAGE byteSize);
                           HRESULT ( STDMETHODCALLTYPE *GetSupportedFeaturePages )(
            __RPC__in IDiscRecorder2Ex * This,
                       BOOLEAN currentFeatureOnly,
                                               __RPC__deref_out_ecount_full_opt(*byteSize) IMAPI_FEATURE_PAGE_TYPE **featureData,
                             __RPC__out ULONG_IMAPI2_ALL_FEATURE_PAGES *byteSize);
                           HRESULT ( STDMETHODCALLTYPE *GetSupportedProfiles )(
            __RPC__in IDiscRecorder2Ex * This,
                       BOOLEAN currentOnly,
                                               __RPC__deref_out_ecount_full_opt(*validProfiles) IMAPI_PROFILE_TYPE **profileTypes,
                             __RPC__out ULONG_IMAPI2_ALL_PROFILES *validProfiles);
                           HRESULT ( STDMETHODCALLTYPE *GetSupportedModePages )(
            __RPC__in IDiscRecorder2Ex * This,
                       IMAPI_MODE_PAGE_REQUEST_TYPE requestType,
                                               __RPC__deref_out_ecount_full_opt(*validPages) IMAPI_MODE_PAGE_TYPE **modePageTypes,
                             __RPC__out ULONG_IMAPI2_ALL_MODE_PAGES *validPages);
                           HRESULT ( STDMETHODCALLTYPE *GetByteAlignmentMask )(
            __RPC__in IDiscRecorder2Ex * This,
                                     __RPC__out ULONG *value);
                           HRESULT ( STDMETHODCALLTYPE *GetMaximumNonPageAlignedTransferSize )(
            __RPC__in IDiscRecorder2Ex * This,
                                     __RPC__out ULONG *value);
                           HRESULT ( STDMETHODCALLTYPE *GetMaximumPageAlignedTransferSize )(
            __RPC__in IDiscRecorder2Ex * This,
                                     __RPC__out ULONG *value);
        END_INTERFACE
    } IDiscRecorder2ExVtbl;
    interface IDiscRecorder2Ex
    {
        CONST_VTBL struct IDiscRecorder2ExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SendCommandNoData(This,Cdb,CdbSize,SenseBuffer,Timeout) )
    ( (This)->lpVtbl -> SendCommandSendDataToDevice(This,Cdb,CdbSize,SenseBuffer,Timeout,Buffer,BufferSize) )
    ( (This)->lpVtbl -> SendCommandGetDataFromDevice(This,Cdb,CdbSize,SenseBuffer,Timeout,Buffer,BufferSize,BufferFetched) )
    ( (This)->lpVtbl -> ReadDvdStructure(This,format,address,layer,agid,data,count) )
    ( (This)->lpVtbl -> SendDvdStructure(This,format,data,count) )
    ( (This)->lpVtbl -> GetAdapterDescriptor(This,data,byteSize) )
    ( (This)->lpVtbl -> GetDeviceDescriptor(This,data,byteSize) )
    ( (This)->lpVtbl -> GetDiscInformation(This,discInformation,byteSize) )
    ( (This)->lpVtbl -> GetTrackInformation(This,address,addressType,trackInformation,byteSize) )
    ( (This)->lpVtbl -> GetFeaturePage(This,requestedFeature,currentFeatureOnly,featureData,byteSize) )
    ( (This)->lpVtbl -> GetModePage(This,requestedModePage,requestType,modePageData,byteSize) )
    ( (This)->lpVtbl -> SetModePage(This,requestType,data,byteSize) )
    ( (This)->lpVtbl -> GetSupportedFeaturePages(This,currentFeatureOnly,featureData,byteSize) )
    ( (This)->lpVtbl -> GetSupportedProfiles(This,currentOnly,profileTypes,validProfiles) )
    ( (This)->lpVtbl -> GetSupportedModePages(This,requestType,modePageTypes,validPages) )
    ( (This)->lpVtbl -> GetByteAlignmentMask(This,value) )
    ( (This)->lpVtbl -> GetMaximumNonPageAlignedTransferSize(This,value) )
    ( (This)->lpVtbl -> GetMaximumPageAlignedTransferSize(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IDiscRecorder2;
    typedef struct IDiscRecorder2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDiscRecorder2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDiscRecorder2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDiscRecorder2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDiscRecorder2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDiscRecorder2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDiscRecorder2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDiscRecorder2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *EjectMedia )(
            __RPC__in IDiscRecorder2 * This);
                               HRESULT ( STDMETHODCALLTYPE *CloseTray )(
            __RPC__in IDiscRecorder2 * This);
                               HRESULT ( STDMETHODCALLTYPE *AcquireExclusiveAccess )(
            __RPC__in IDiscRecorder2 * This,
                       VARIANT_BOOL force,
                       __RPC__in BSTR __MIDL__IDiscRecorder20000);
                               HRESULT ( STDMETHODCALLTYPE *ReleaseExclusiveAccess )(
            __RPC__in IDiscRecorder2 * This);
                               HRESULT ( STDMETHODCALLTYPE *DisableMcn )(
            __RPC__in IDiscRecorder2 * This);
                               HRESULT ( STDMETHODCALLTYPE *EnableMcn )(
            __RPC__in IDiscRecorder2 * This);
                               HRESULT ( STDMETHODCALLTYPE *InitializeDiscRecorder )(
            __RPC__in IDiscRecorder2 * This,
                       __RPC__in BSTR recorderUniqueId);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActiveDiscRecorder )(
            __RPC__in IDiscRecorder2 * This,
                                     __RPC__deref_out_opt BSTR *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_VendorId )(
            __RPC__in IDiscRecorder2 * This,
                                     __RPC__deref_out_opt BSTR *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
            __RPC__in IDiscRecorder2 * This,
                                     __RPC__deref_out_opt BSTR *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductRevision )(
            __RPC__in IDiscRecorder2 * This,
                                     __RPC__deref_out_opt BSTR *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeName )(
            __RPC__in IDiscRecorder2 * This,
                                     __RPC__deref_out_opt BSTR *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumePathNames )(
            __RPC__in IDiscRecorder2 * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceCanLoadMedia )(
            __RPC__in IDiscRecorder2 * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_LegacyDeviceNumber )(
            __RPC__in IDiscRecorder2 * This,
                                     __RPC__out LONG *legacyDeviceNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedFeaturePages )(
            __RPC__in IDiscRecorder2 * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFeaturePages )(
            __RPC__in IDiscRecorder2 * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedProfiles )(
            __RPC__in IDiscRecorder2 * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProfiles )(
            __RPC__in IDiscRecorder2 * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedModePages )(
            __RPC__in IDiscRecorder2 * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExclusiveAccessOwner )(
            __RPC__in IDiscRecorder2 * This,
                                     __RPC__deref_out_opt BSTR *value);
        END_INTERFACE
    } IDiscRecorder2Vtbl;
    interface IDiscRecorder2
    {
        CONST_VTBL struct IDiscRecorder2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> EjectMedia(This) )
    ( (This)->lpVtbl -> CloseTray(This) )
    ( (This)->lpVtbl -> AcquireExclusiveAccess(This,force,__MIDL__IDiscRecorder20000) )
    ( (This)->lpVtbl -> ReleaseExclusiveAccess(This) )
    ( (This)->lpVtbl -> DisableMcn(This) )
    ( (This)->lpVtbl -> EnableMcn(This) )
    ( (This)->lpVtbl -> InitializeDiscRecorder(This,recorderUniqueId) )
    ( (This)->lpVtbl -> get_ActiveDiscRecorder(This,value) )
    ( (This)->lpVtbl -> get_VendorId(This,value) )
    ( (This)->lpVtbl -> get_ProductId(This,value) )
    ( (This)->lpVtbl -> get_ProductRevision(This,value) )
    ( (This)->lpVtbl -> get_VolumeName(This,value) )
    ( (This)->lpVtbl -> get_VolumePathNames(This,value) )
    ( (This)->lpVtbl -> get_DeviceCanLoadMedia(This,value) )
    ( (This)->lpVtbl -> get_LegacyDeviceNumber(This,legacyDeviceNumber) )
    ( (This)->lpVtbl -> get_SupportedFeaturePages(This,value) )
    ( (This)->lpVtbl -> get_CurrentFeaturePages(This,value) )
    ( (This)->lpVtbl -> get_SupportedProfiles(This,value) )
    ( (This)->lpVtbl -> get_CurrentProfiles(This,value) )
    ( (This)->lpVtbl -> get_SupportedModePages(This,value) )
    ( (This)->lpVtbl -> get_ExclusiveAccessOwner(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IWriteEngine2;
    typedef struct IWriteEngine2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWriteEngine2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWriteEngine2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWriteEngine2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWriteEngine2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWriteEngine2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWriteEngine2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWriteEngine2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *WriteSection )(
            __RPC__in IWriteEngine2 * This,
                       __RPC__in_opt IStream *data,
                       LONG startingBlockAddress,
                       LONG numberOfBlocks);
                               HRESULT ( STDMETHODCALLTYPE *CancelWrite )(
            __RPC__in IWriteEngine2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *put_Recorder )(
            __RPC__in IWriteEngine2 * This,
                       __RPC__in_opt IDiscRecorder2Ex *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_Recorder )(
            __RPC__in IWriteEngine2 * This,
                                     __RPC__deref_out_opt IDiscRecorder2Ex **value);
                                        HRESULT ( STDMETHODCALLTYPE *put_UseStreamingWrite12 )(
            __RPC__in IWriteEngine2 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_UseStreamingWrite12 )(
            __RPC__in IWriteEngine2 * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartingSectorsPerSecond )(
            __RPC__in IWriteEngine2 * This,
                       LONG value);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartingSectorsPerSecond )(
            __RPC__in IWriteEngine2 * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndingSectorsPerSecond )(
            __RPC__in IWriteEngine2 * This,
                       LONG value);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndingSectorsPerSecond )(
            __RPC__in IWriteEngine2 * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_BytesPerSector )(
            __RPC__in IWriteEngine2 * This,
                       LONG value);
                                        HRESULT ( STDMETHODCALLTYPE *get_BytesPerSector )(
            __RPC__in IWriteEngine2 * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_WriteInProgress )(
            __RPC__in IWriteEngine2 * This,
                                     __RPC__out VARIANT_BOOL *value);
        END_INTERFACE
    } IWriteEngine2Vtbl;
    interface IWriteEngine2
    {
        CONST_VTBL struct IWriteEngine2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> WriteSection(This,data,startingBlockAddress,numberOfBlocks) )
    ( (This)->lpVtbl -> CancelWrite(This) )
    ( (This)->lpVtbl -> put_Recorder(This,value) )
    ( (This)->lpVtbl -> get_Recorder(This,value) )
    ( (This)->lpVtbl -> put_UseStreamingWrite12(This,value) )
    ( (This)->lpVtbl -> get_UseStreamingWrite12(This,value) )
    ( (This)->lpVtbl -> put_StartingSectorsPerSecond(This,value) )
    ( (This)->lpVtbl -> get_StartingSectorsPerSecond(This,value) )
    ( (This)->lpVtbl -> put_EndingSectorsPerSecond(This,value) )
    ( (This)->lpVtbl -> get_EndingSectorsPerSecond(This,value) )
    ( (This)->lpVtbl -> put_BytesPerSector(This,value) )
    ( (This)->lpVtbl -> get_BytesPerSector(This,value) )
    ( (This)->lpVtbl -> get_WriteInProgress(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IWriteEngine2EventArgs;
    typedef struct IWriteEngine2EventArgsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWriteEngine2EventArgs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWriteEngine2EventArgs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWriteEngine2EventArgs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWriteEngine2EventArgs * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWriteEngine2EventArgs * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWriteEngine2EventArgs * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWriteEngine2EventArgs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartLba )(
            __RPC__in IWriteEngine2EventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SectorCount )(
            __RPC__in IWriteEngine2EventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastReadLba )(
            __RPC__in IWriteEngine2EventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastWrittenLba )(
            __RPC__in IWriteEngine2EventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalSystemBuffer )(
            __RPC__in IWriteEngine2EventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_UsedSystemBuffer )(
            __RPC__in IWriteEngine2EventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_FreeSystemBuffer )(
            __RPC__in IWriteEngine2EventArgs * This,
                                     __RPC__out LONG *value);
        END_INTERFACE
    } IWriteEngine2EventArgsVtbl;
    interface IWriteEngine2EventArgs
    {
        CONST_VTBL struct IWriteEngine2EventArgsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_StartLba(This,value) )
    ( (This)->lpVtbl -> get_SectorCount(This,value) )
    ( (This)->lpVtbl -> get_LastReadLba(This,value) )
    ( (This)->lpVtbl -> get_LastWrittenLba(This,value) )
    ( (This)->lpVtbl -> get_TotalSystemBuffer(This,value) )
    ( (This)->lpVtbl -> get_UsedSystemBuffer(This,value) )
    ( (This)->lpVtbl -> get_FreeSystemBuffer(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_DWriteEngine2Events;
    typedef struct DWriteEngine2EventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DWriteEngine2Events * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DWriteEngine2Events * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DWriteEngine2Events * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DWriteEngine2Events * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DWriteEngine2Events * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DWriteEngine2Events * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DWriteEngine2Events * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in DWriteEngine2Events * This,
                       __RPC__in_opt IDispatch *object,
                       __RPC__in_opt IDispatch *progress);
        END_INTERFACE
    } DWriteEngine2EventsVtbl;
    interface DWriteEngine2Events
    {
        CONST_VTBL struct DWriteEngine2EventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Update(This,object,progress) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IDiscFormat2;
    typedef struct IDiscFormat2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDiscFormat2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDiscFormat2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDiscFormat2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDiscFormat2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDiscFormat2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDiscFormat2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDiscFormat2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *IsRecorderSupported )(
            __RPC__in IDiscFormat2 * This,
                       __RPC__in_opt IDiscRecorder2 *recorder,
                                     __RPC__out VARIANT_BOOL *value);
                               HRESULT ( STDMETHODCALLTYPE *IsCurrentMediaSupported )(
            __RPC__in IDiscFormat2 * This,
                       __RPC__in_opt IDiscRecorder2 *recorder,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaPhysicallyBlank )(
            __RPC__in IDiscFormat2 * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaHeuristicallyBlank )(
            __RPC__in IDiscFormat2 * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedMediaTypes )(
            __RPC__in IDiscFormat2 * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
        END_INTERFACE
    } IDiscFormat2Vtbl;
    interface IDiscFormat2
    {
        CONST_VTBL struct IDiscFormat2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> IsRecorderSupported(This,recorder,value) )
    ( (This)->lpVtbl -> IsCurrentMediaSupported(This,recorder,value) )
    ( (This)->lpVtbl -> get_MediaPhysicallyBlank(This,value) )
    ( (This)->lpVtbl -> get_MediaHeuristicallyBlank(This,value) )
    ( (This)->lpVtbl -> get_SupportedMediaTypes(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IDiscFormat2Erase;
    typedef struct IDiscFormat2EraseVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDiscFormat2Erase * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDiscFormat2Erase * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDiscFormat2Erase * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDiscFormat2Erase * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDiscFormat2Erase * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDiscFormat2Erase * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDiscFormat2Erase * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *IsRecorderSupported )(
            __RPC__in IDiscFormat2Erase * This,
                       __RPC__in_opt IDiscRecorder2 *recorder,
                                     __RPC__out VARIANT_BOOL *value);
                               HRESULT ( STDMETHODCALLTYPE *IsCurrentMediaSupported )(
            __RPC__in IDiscFormat2Erase * This,
                       __RPC__in_opt IDiscRecorder2 *recorder,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaPhysicallyBlank )(
            __RPC__in IDiscFormat2Erase * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaHeuristicallyBlank )(
            __RPC__in IDiscFormat2Erase * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedMediaTypes )(
            __RPC__in IDiscFormat2Erase * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_Recorder )(
            __RPC__in IDiscFormat2Erase * This,
                       __RPC__in_opt IDiscRecorder2 *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_Recorder )(
            __RPC__in IDiscFormat2Erase * This,
                                     __RPC__deref_out_opt IDiscRecorder2 **value);
                                        HRESULT ( STDMETHODCALLTYPE *put_FullErase )(
            __RPC__in IDiscFormat2Erase * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_FullErase )(
            __RPC__in IDiscFormat2Erase * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPhysicalMediaType )(
            __RPC__in IDiscFormat2Erase * This,
                                     __RPC__out IMAPI_MEDIA_PHYSICAL_TYPE *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientName )(
            __RPC__in IDiscFormat2Erase * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientName )(
            __RPC__in IDiscFormat2Erase * This,
                                     __RPC__deref_out_opt BSTR *value);
                               HRESULT ( STDMETHODCALLTYPE *EraseMedia )(
            __RPC__in IDiscFormat2Erase * This);
        END_INTERFACE
    } IDiscFormat2EraseVtbl;
    interface IDiscFormat2Erase
    {
        CONST_VTBL struct IDiscFormat2EraseVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> IsRecorderSupported(This,recorder,value) )
    ( (This)->lpVtbl -> IsCurrentMediaSupported(This,recorder,value) )
    ( (This)->lpVtbl -> get_MediaPhysicallyBlank(This,value) )
    ( (This)->lpVtbl -> get_MediaHeuristicallyBlank(This,value) )
    ( (This)->lpVtbl -> get_SupportedMediaTypes(This,value) )
    ( (This)->lpVtbl -> put_Recorder(This,value) )
    ( (This)->lpVtbl -> get_Recorder(This,value) )
    ( (This)->lpVtbl -> put_FullErase(This,value) )
    ( (This)->lpVtbl -> get_FullErase(This,value) )
    ( (This)->lpVtbl -> get_CurrentPhysicalMediaType(This,value) )
    ( (This)->lpVtbl -> put_ClientName(This,value) )
    ( (This)->lpVtbl -> get_ClientName(This,value) )
    ( (This)->lpVtbl -> EraseMedia(This) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_DDiscFormat2EraseEvents;
    typedef struct DDiscFormat2EraseEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DDiscFormat2EraseEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DDiscFormat2EraseEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DDiscFormat2EraseEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DDiscFormat2EraseEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DDiscFormat2EraseEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DDiscFormat2EraseEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DDiscFormat2EraseEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in DDiscFormat2EraseEvents * This,
                       __RPC__in_opt IDispatch *object,
                       LONG elapsedSeconds,
                       LONG estimatedTotalSeconds);
        END_INTERFACE
    } DDiscFormat2EraseEventsVtbl;
    interface DDiscFormat2EraseEvents
    {
        CONST_VTBL struct DDiscFormat2EraseEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Update(This,object,elapsedSeconds,estimatedTotalSeconds) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_IDiscFormat2Data;
    typedef struct IDiscFormat2DataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDiscFormat2Data * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDiscFormat2Data * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDiscFormat2Data * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDiscFormat2Data * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDiscFormat2Data * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDiscFormat2Data * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDiscFormat2Data * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *IsRecorderSupported )(
            __RPC__in IDiscFormat2Data * This,
                       __RPC__in_opt IDiscRecorder2 *recorder,
                                     __RPC__out VARIANT_BOOL *value);
                               HRESULT ( STDMETHODCALLTYPE *IsCurrentMediaSupported )(
            __RPC__in IDiscFormat2Data * This,
                       __RPC__in_opt IDiscRecorder2 *recorder,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaPhysicallyBlank )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaHeuristicallyBlank )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedMediaTypes )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_Recorder )(
            __RPC__in IDiscFormat2Data * This,
                       __RPC__in_opt IDiscRecorder2 *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_Recorder )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__deref_out_opt IDiscRecorder2 **value);
                                        HRESULT ( STDMETHODCALLTYPE *put_BufferUnderrunFreeDisabled )(
            __RPC__in IDiscFormat2Data * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_BufferUnderrunFreeDisabled )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_PostgapAlreadyInImage )(
            __RPC__in IDiscFormat2Data * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_PostgapAlreadyInImage )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentMediaStatus )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out IMAPI_FORMAT2_DATA_MEDIA_STATE *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_WriteProtectStatus )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out IMAPI_MEDIA_WRITE_PROTECT_STATE *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalSectorsOnMedia )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_FreeSectorsOnMedia )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_NextWritableAddress )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartAddressOfPreviousSession )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastWrittenAddressOfPreviousSession )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_ForceMediaToBeClosed )(
            __RPC__in IDiscFormat2Data * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ForceMediaToBeClosed )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisableConsumerDvdCompatibilityMode )(
            __RPC__in IDiscFormat2Data * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisableConsumerDvdCompatibilityMode )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPhysicalMediaType )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out IMAPI_MEDIA_PHYSICAL_TYPE *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientName )(
            __RPC__in IDiscFormat2Data * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientName )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__deref_out_opt BSTR *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_RequestedWriteSpeed )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_RequestedRotationTypeIsPureCAV )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentWriteSpeed )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentRotationTypeIsPureCAV )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedWriteSpeeds )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__deref_out_opt SAFEARRAY * *supportedSpeeds);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedWriteSpeedDescriptors )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__deref_out_opt SAFEARRAY * *supportedSpeedDescriptors);
                                        HRESULT ( STDMETHODCALLTYPE *put_ForceOverwrite )(
            __RPC__in IDiscFormat2Data * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ForceOverwrite )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_MultisessionInterfaces )(
            __RPC__in IDiscFormat2Data * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
                               HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in IDiscFormat2Data * This,
                       __RPC__in_opt IStream *data);
                               HRESULT ( STDMETHODCALLTYPE *CancelWrite )(
            __RPC__in IDiscFormat2Data * This);
                               HRESULT ( STDMETHODCALLTYPE *SetWriteSpeed )(
            __RPC__in IDiscFormat2Data * This,
                       LONG RequestedSectorsPerSecond,
                       VARIANT_BOOL RotationTypeIsPureCAV);
        END_INTERFACE
    } IDiscFormat2DataVtbl;
    interface IDiscFormat2Data
    {
        CONST_VTBL struct IDiscFormat2DataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> IsRecorderSupported(This,recorder,value) )
    ( (This)->lpVtbl -> IsCurrentMediaSupported(This,recorder,value) )
    ( (This)->lpVtbl -> get_MediaPhysicallyBlank(This,value) )
    ( (This)->lpVtbl -> get_MediaHeuristicallyBlank(This,value) )
    ( (This)->lpVtbl -> get_SupportedMediaTypes(This,value) )
    ( (This)->lpVtbl -> put_Recorder(This,value) )
    ( (This)->lpVtbl -> get_Recorder(This,value) )
    ( (This)->lpVtbl -> put_BufferUnderrunFreeDisabled(This,value) )
    ( (This)->lpVtbl -> get_BufferUnderrunFreeDisabled(This,value) )
    ( (This)->lpVtbl -> put_PostgapAlreadyInImage(This,value) )
    ( (This)->lpVtbl -> get_PostgapAlreadyInImage(This,value) )
    ( (This)->lpVtbl -> get_CurrentMediaStatus(This,value) )
    ( (This)->lpVtbl -> get_WriteProtectStatus(This,value) )
    ( (This)->lpVtbl -> get_TotalSectorsOnMedia(This,value) )
    ( (This)->lpVtbl -> get_FreeSectorsOnMedia(This,value) )
    ( (This)->lpVtbl -> get_NextWritableAddress(This,value) )
    ( (This)->lpVtbl -> get_StartAddressOfPreviousSession(This,value) )
    ( (This)->lpVtbl -> get_LastWrittenAddressOfPreviousSession(This,value) )
    ( (This)->lpVtbl -> put_ForceMediaToBeClosed(This,value) )
    ( (This)->lpVtbl -> get_ForceMediaToBeClosed(This,value) )
    ( (This)->lpVtbl -> put_DisableConsumerDvdCompatibilityMode(This,value) )
    ( (This)->lpVtbl -> get_DisableConsumerDvdCompatibilityMode(This,value) )
    ( (This)->lpVtbl -> get_CurrentPhysicalMediaType(This,value) )
    ( (This)->lpVtbl -> put_ClientName(This,value) )
    ( (This)->lpVtbl -> get_ClientName(This,value) )
    ( (This)->lpVtbl -> get_RequestedWriteSpeed(This,value) )
    ( (This)->lpVtbl -> get_RequestedRotationTypeIsPureCAV(This,value) )
    ( (This)->lpVtbl -> get_CurrentWriteSpeed(This,value) )
    ( (This)->lpVtbl -> get_CurrentRotationTypeIsPureCAV(This,value) )
    ( (This)->lpVtbl -> get_SupportedWriteSpeeds(This,supportedSpeeds) )
    ( (This)->lpVtbl -> get_SupportedWriteSpeedDescriptors(This,supportedSpeedDescriptors) )
    ( (This)->lpVtbl -> put_ForceOverwrite(This,value) )
    ( (This)->lpVtbl -> get_ForceOverwrite(This,value) )
    ( (This)->lpVtbl -> get_MultisessionInterfaces(This,value) )
    ( (This)->lpVtbl -> Write(This,data) )
    ( (This)->lpVtbl -> CancelWrite(This) )
    ( (This)->lpVtbl -> SetWriteSpeed(This,RequestedSectorsPerSecond,RotationTypeIsPureCAV) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_DDiscFormat2DataEvents;
    typedef struct DDiscFormat2DataEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DDiscFormat2DataEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DDiscFormat2DataEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DDiscFormat2DataEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DDiscFormat2DataEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DDiscFormat2DataEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DDiscFormat2DataEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DDiscFormat2DataEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in DDiscFormat2DataEvents * This,
                       __RPC__in_opt IDispatch *object,
                       __RPC__in_opt IDispatch *progress);
        END_INTERFACE
    } DDiscFormat2DataEventsVtbl;
    interface DDiscFormat2DataEvents
    {
        CONST_VTBL struct DDiscFormat2DataEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Update(This,object,progress) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0012_v0_0_s_ifspec;
EXTERN_C const IID IID_IDiscFormat2DataEventArgs;
    typedef struct IDiscFormat2DataEventArgsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDiscFormat2DataEventArgs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDiscFormat2DataEventArgs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDiscFormat2DataEventArgs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDiscFormat2DataEventArgs * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDiscFormat2DataEventArgs * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDiscFormat2DataEventArgs * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDiscFormat2DataEventArgs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartLba )(
            __RPC__in IDiscFormat2DataEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SectorCount )(
            __RPC__in IDiscFormat2DataEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastReadLba )(
            __RPC__in IDiscFormat2DataEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastWrittenLba )(
            __RPC__in IDiscFormat2DataEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalSystemBuffer )(
            __RPC__in IDiscFormat2DataEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_UsedSystemBuffer )(
            __RPC__in IDiscFormat2DataEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_FreeSystemBuffer )(
            __RPC__in IDiscFormat2DataEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ElapsedTime )(
            __RPC__in IDiscFormat2DataEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_RemainingTime )(
            __RPC__in IDiscFormat2DataEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalTime )(
            __RPC__in IDiscFormat2DataEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAction )(
            __RPC__in IDiscFormat2DataEventArgs * This,
                                     __RPC__out IMAPI_FORMAT2_DATA_WRITE_ACTION *value);
        END_INTERFACE
    } IDiscFormat2DataEventArgsVtbl;
    interface IDiscFormat2DataEventArgs
    {
        CONST_VTBL struct IDiscFormat2DataEventArgsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_StartLba(This,value) )
    ( (This)->lpVtbl -> get_SectorCount(This,value) )
    ( (This)->lpVtbl -> get_LastReadLba(This,value) )
    ( (This)->lpVtbl -> get_LastWrittenLba(This,value) )
    ( (This)->lpVtbl -> get_TotalSystemBuffer(This,value) )
    ( (This)->lpVtbl -> get_UsedSystemBuffer(This,value) )
    ( (This)->lpVtbl -> get_FreeSystemBuffer(This,value) )
    ( (This)->lpVtbl -> get_ElapsedTime(This,value) )
    ( (This)->lpVtbl -> get_RemainingTime(This,value) )
    ( (This)->lpVtbl -> get_TotalTime(This,value) )
    ( (This)->lpVtbl -> get_CurrentAction(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_IDiscFormat2TrackAtOnce;
    typedef struct IDiscFormat2TrackAtOnceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDiscFormat2TrackAtOnce * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDiscFormat2TrackAtOnce * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDiscFormat2TrackAtOnce * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *IsRecorderSupported )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                       __RPC__in_opt IDiscRecorder2 *recorder,
                                     __RPC__out VARIANT_BOOL *value);
                               HRESULT ( STDMETHODCALLTYPE *IsCurrentMediaSupported )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                       __RPC__in_opt IDiscRecorder2 *recorder,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaPhysicallyBlank )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaHeuristicallyBlank )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedMediaTypes )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
                               HRESULT ( STDMETHODCALLTYPE *PrepareMedia )(
            __RPC__in IDiscFormat2TrackAtOnce * This);
                               HRESULT ( STDMETHODCALLTYPE *AddAudioTrack )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                       __RPC__in_opt IStream *data);
                               HRESULT ( STDMETHODCALLTYPE *CancelAddTrack )(
            __RPC__in IDiscFormat2TrackAtOnce * This);
                               HRESULT ( STDMETHODCALLTYPE *ReleaseMedia )(
            __RPC__in IDiscFormat2TrackAtOnce * This);
                               HRESULT ( STDMETHODCALLTYPE *SetWriteSpeed )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                       LONG RequestedSectorsPerSecond,
                       VARIANT_BOOL RotationTypeIsPureCAV);
                                        HRESULT ( STDMETHODCALLTYPE *put_Recorder )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                       __RPC__in_opt IDiscRecorder2 *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_Recorder )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__deref_out_opt IDiscRecorder2 **value);
                                        HRESULT ( STDMETHODCALLTYPE *put_BufferUnderrunFreeDisabled )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_BufferUnderrunFreeDisabled )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumberOfExistingTracks )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalSectorsOnMedia )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_FreeSectorsOnMedia )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_UsedSectorsOnMedia )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_DoNotFinalizeMedia )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_DoNotFinalizeMedia )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExpectedTableOfContents )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPhysicalMediaType )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__out IMAPI_MEDIA_PHYSICAL_TYPE *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientName )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientName )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__deref_out_opt BSTR *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_RequestedWriteSpeed )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_RequestedRotationTypeIsPureCAV )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentWriteSpeed )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentRotationTypeIsPureCAV )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedWriteSpeeds )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__deref_out_opt SAFEARRAY * *supportedSpeeds);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedWriteSpeedDescriptors )(
            __RPC__in IDiscFormat2TrackAtOnce * This,
                                     __RPC__deref_out_opt SAFEARRAY * *supportedSpeedDescriptors);
        END_INTERFACE
    } IDiscFormat2TrackAtOnceVtbl;
    interface IDiscFormat2TrackAtOnce
    {
        CONST_VTBL struct IDiscFormat2TrackAtOnceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> IsRecorderSupported(This,recorder,value) )
    ( (This)->lpVtbl -> IsCurrentMediaSupported(This,recorder,value) )
    ( (This)->lpVtbl -> get_MediaPhysicallyBlank(This,value) )
    ( (This)->lpVtbl -> get_MediaHeuristicallyBlank(This,value) )
    ( (This)->lpVtbl -> get_SupportedMediaTypes(This,value) )
    ( (This)->lpVtbl -> PrepareMedia(This) )
    ( (This)->lpVtbl -> AddAudioTrack(This,data) )
    ( (This)->lpVtbl -> CancelAddTrack(This) )
    ( (This)->lpVtbl -> ReleaseMedia(This) )
    ( (This)->lpVtbl -> SetWriteSpeed(This,RequestedSectorsPerSecond,RotationTypeIsPureCAV) )
    ( (This)->lpVtbl -> put_Recorder(This,value) )
    ( (This)->lpVtbl -> get_Recorder(This,value) )
    ( (This)->lpVtbl -> put_BufferUnderrunFreeDisabled(This,value) )
    ( (This)->lpVtbl -> get_BufferUnderrunFreeDisabled(This,value) )
    ( (This)->lpVtbl -> get_NumberOfExistingTracks(This,value) )
    ( (This)->lpVtbl -> get_TotalSectorsOnMedia(This,value) )
    ( (This)->lpVtbl -> get_FreeSectorsOnMedia(This,value) )
    ( (This)->lpVtbl -> get_UsedSectorsOnMedia(This,value) )
    ( (This)->lpVtbl -> put_DoNotFinalizeMedia(This,value) )
    ( (This)->lpVtbl -> get_DoNotFinalizeMedia(This,value) )
    ( (This)->lpVtbl -> get_ExpectedTableOfContents(This,value) )
    ( (This)->lpVtbl -> get_CurrentPhysicalMediaType(This,value) )
    ( (This)->lpVtbl -> put_ClientName(This,value) )
    ( (This)->lpVtbl -> get_ClientName(This,value) )
    ( (This)->lpVtbl -> get_RequestedWriteSpeed(This,value) )
    ( (This)->lpVtbl -> get_RequestedRotationTypeIsPureCAV(This,value) )
    ( (This)->lpVtbl -> get_CurrentWriteSpeed(This,value) )
    ( (This)->lpVtbl -> get_CurrentRotationTypeIsPureCAV(This,value) )
    ( (This)->lpVtbl -> get_SupportedWriteSpeeds(This,supportedSpeeds) )
    ( (This)->lpVtbl -> get_SupportedWriteSpeedDescriptors(This,supportedSpeedDescriptors) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0014_v0_0_s_ifspec;
EXTERN_C const IID IID_DDiscFormat2TrackAtOnceEvents;
    typedef struct DDiscFormat2TrackAtOnceEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DDiscFormat2TrackAtOnceEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DDiscFormat2TrackAtOnceEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DDiscFormat2TrackAtOnceEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DDiscFormat2TrackAtOnceEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DDiscFormat2TrackAtOnceEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DDiscFormat2TrackAtOnceEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DDiscFormat2TrackAtOnceEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in DDiscFormat2TrackAtOnceEvents * This,
                       __RPC__in_opt IDispatch *object,
                       __RPC__in_opt IDispatch *progress);
        END_INTERFACE
    } DDiscFormat2TrackAtOnceEventsVtbl;
    interface DDiscFormat2TrackAtOnceEvents
    {
        CONST_VTBL struct DDiscFormat2TrackAtOnceEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Update(This,object,progress) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0015_v0_0_s_ifspec;
EXTERN_C const IID IID_IDiscFormat2TrackAtOnceEventArgs;
    typedef struct IDiscFormat2TrackAtOnceEventArgsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDiscFormat2TrackAtOnceEventArgs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartLba )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SectorCount )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastReadLba )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastWrittenLba )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalSystemBuffer )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_UsedSystemBuffer )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_FreeSystemBuffer )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentTrackNumber )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAction )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This,
                                     __RPC__out IMAPI_FORMAT2_TAO_WRITE_ACTION *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ElapsedTime )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_RemainingTime )(
            __RPC__in IDiscFormat2TrackAtOnceEventArgs * This,
                                     __RPC__out LONG *value);
        END_INTERFACE
    } IDiscFormat2TrackAtOnceEventArgsVtbl;
    interface IDiscFormat2TrackAtOnceEventArgs
    {
        CONST_VTBL struct IDiscFormat2TrackAtOnceEventArgsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_StartLba(This,value) )
    ( (This)->lpVtbl -> get_SectorCount(This,value) )
    ( (This)->lpVtbl -> get_LastReadLba(This,value) )
    ( (This)->lpVtbl -> get_LastWrittenLba(This,value) )
    ( (This)->lpVtbl -> get_TotalSystemBuffer(This,value) )
    ( (This)->lpVtbl -> get_UsedSystemBuffer(This,value) )
    ( (This)->lpVtbl -> get_FreeSystemBuffer(This,value) )
    ( (This)->lpVtbl -> get_CurrentTrackNumber(This,value) )
    ( (This)->lpVtbl -> get_CurrentAction(This,value) )
    ( (This)->lpVtbl -> get_ElapsedTime(This,value) )
    ( (This)->lpVtbl -> get_RemainingTime(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0016_v0_0_s_ifspec;
EXTERN_C const IID IID_IDiscFormat2RawCD;
    typedef struct IDiscFormat2RawCDVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDiscFormat2RawCD * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDiscFormat2RawCD * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDiscFormat2RawCD * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDiscFormat2RawCD * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDiscFormat2RawCD * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDiscFormat2RawCD * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDiscFormat2RawCD * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *IsRecorderSupported )(
            __RPC__in IDiscFormat2RawCD * This,
                       __RPC__in_opt IDiscRecorder2 *recorder,
                                     __RPC__out VARIANT_BOOL *value);
                               HRESULT ( STDMETHODCALLTYPE *IsCurrentMediaSupported )(
            __RPC__in IDiscFormat2RawCD * This,
                       __RPC__in_opt IDiscRecorder2 *recorder,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaPhysicallyBlank )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaHeuristicallyBlank )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedMediaTypes )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
                               HRESULT ( STDMETHODCALLTYPE *PrepareMedia )(
            __RPC__in IDiscFormat2RawCD * This);
                               HRESULT ( STDMETHODCALLTYPE *WriteMedia )(
            __RPC__in IDiscFormat2RawCD * This,
                       __RPC__in_opt IStream *data);
                               HRESULT ( STDMETHODCALLTYPE *WriteMedia2 )(
            __RPC__in IDiscFormat2RawCD * This,
                       __RPC__in_opt IStream *data,
                       LONG streamLeadInSectors);
                               HRESULT ( STDMETHODCALLTYPE *CancelWrite )(
            __RPC__in IDiscFormat2RawCD * This);
                               HRESULT ( STDMETHODCALLTYPE *ReleaseMedia )(
            __RPC__in IDiscFormat2RawCD * This);
                               HRESULT ( STDMETHODCALLTYPE *SetWriteSpeed )(
            __RPC__in IDiscFormat2RawCD * This,
                       LONG RequestedSectorsPerSecond,
                       VARIANT_BOOL RotationTypeIsPureCAV);
                                        HRESULT ( STDMETHODCALLTYPE *put_Recorder )(
            __RPC__in IDiscFormat2RawCD * This,
                       __RPC__in_opt IDiscRecorder2 *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_Recorder )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__deref_out_opt IDiscRecorder2 **value);
                                        HRESULT ( STDMETHODCALLTYPE *put_BufferUnderrunFreeDisabled )(
            __RPC__in IDiscFormat2RawCD * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_BufferUnderrunFreeDisabled )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartOfNextSession )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastPossibleStartOfLeadout )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPhysicalMediaType )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__out IMAPI_MEDIA_PHYSICAL_TYPE *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedSectorTypes )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_RequestedSectorType )(
            __RPC__in IDiscFormat2RawCD * This,
                       IMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE value);
                                        HRESULT ( STDMETHODCALLTYPE *get_RequestedSectorType )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__out IMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientName )(
            __RPC__in IDiscFormat2RawCD * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientName )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__deref_out_opt BSTR *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_RequestedWriteSpeed )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_RequestedRotationTypeIsPureCAV )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentWriteSpeed )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentRotationTypeIsPureCAV )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedWriteSpeeds )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__deref_out_opt SAFEARRAY * *supportedSpeeds);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedWriteSpeedDescriptors )(
            __RPC__in IDiscFormat2RawCD * This,
                                     __RPC__deref_out_opt SAFEARRAY * *supportedSpeedDescriptors);
        END_INTERFACE
    } IDiscFormat2RawCDVtbl;
    interface IDiscFormat2RawCD
    {
        CONST_VTBL struct IDiscFormat2RawCDVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> IsRecorderSupported(This,recorder,value) )
    ( (This)->lpVtbl -> IsCurrentMediaSupported(This,recorder,value) )
    ( (This)->lpVtbl -> get_MediaPhysicallyBlank(This,value) )
    ( (This)->lpVtbl -> get_MediaHeuristicallyBlank(This,value) )
    ( (This)->lpVtbl -> get_SupportedMediaTypes(This,value) )
    ( (This)->lpVtbl -> PrepareMedia(This) )
    ( (This)->lpVtbl -> WriteMedia(This,data) )
    ( (This)->lpVtbl -> WriteMedia2(This,data,streamLeadInSectors) )
    ( (This)->lpVtbl -> CancelWrite(This) )
    ( (This)->lpVtbl -> ReleaseMedia(This) )
    ( (This)->lpVtbl -> SetWriteSpeed(This,RequestedSectorsPerSecond,RotationTypeIsPureCAV) )
    ( (This)->lpVtbl -> put_Recorder(This,value) )
    ( (This)->lpVtbl -> get_Recorder(This,value) )
    ( (This)->lpVtbl -> put_BufferUnderrunFreeDisabled(This,value) )
    ( (This)->lpVtbl -> get_BufferUnderrunFreeDisabled(This,value) )
    ( (This)->lpVtbl -> get_StartOfNextSession(This,value) )
    ( (This)->lpVtbl -> get_LastPossibleStartOfLeadout(This,value) )
    ( (This)->lpVtbl -> get_CurrentPhysicalMediaType(This,value) )
    ( (This)->lpVtbl -> get_SupportedSectorTypes(This,value) )
    ( (This)->lpVtbl -> put_RequestedSectorType(This,value) )
    ( (This)->lpVtbl -> get_RequestedSectorType(This,value) )
    ( (This)->lpVtbl -> put_ClientName(This,value) )
    ( (This)->lpVtbl -> get_ClientName(This,value) )
    ( (This)->lpVtbl -> get_RequestedWriteSpeed(This,value) )
    ( (This)->lpVtbl -> get_RequestedRotationTypeIsPureCAV(This,value) )
    ( (This)->lpVtbl -> get_CurrentWriteSpeed(This,value) )
    ( (This)->lpVtbl -> get_CurrentRotationTypeIsPureCAV(This,value) )
    ( (This)->lpVtbl -> get_SupportedWriteSpeeds(This,supportedSpeeds) )
    ( (This)->lpVtbl -> get_SupportedWriteSpeedDescriptors(This,supportedSpeedDescriptors) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0017_v0_0_s_ifspec;
EXTERN_C const IID IID_DDiscFormat2RawCDEvents;
    typedef struct DDiscFormat2RawCDEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DDiscFormat2RawCDEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DDiscFormat2RawCDEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DDiscFormat2RawCDEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DDiscFormat2RawCDEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DDiscFormat2RawCDEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DDiscFormat2RawCDEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DDiscFormat2RawCDEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in DDiscFormat2RawCDEvents * This,
                       __RPC__in_opt IDispatch *object,
                       __RPC__in_opt IDispatch *progress);
        END_INTERFACE
    } DDiscFormat2RawCDEventsVtbl;
    interface DDiscFormat2RawCDEvents
    {
        CONST_VTBL struct DDiscFormat2RawCDEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Update(This,object,progress) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0018_v0_0_s_ifspec;
EXTERN_C const IID IID_IDiscFormat2RawCDEventArgs;
    typedef struct IDiscFormat2RawCDEventArgsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDiscFormat2RawCDEventArgs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDiscFormat2RawCDEventArgs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDiscFormat2RawCDEventArgs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDiscFormat2RawCDEventArgs * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDiscFormat2RawCDEventArgs * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDiscFormat2RawCDEventArgs * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDiscFormat2RawCDEventArgs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartLba )(
            __RPC__in IDiscFormat2RawCDEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SectorCount )(
            __RPC__in IDiscFormat2RawCDEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastReadLba )(
            __RPC__in IDiscFormat2RawCDEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastWrittenLba )(
            __RPC__in IDiscFormat2RawCDEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalSystemBuffer )(
            __RPC__in IDiscFormat2RawCDEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_UsedSystemBuffer )(
            __RPC__in IDiscFormat2RawCDEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_FreeSystemBuffer )(
            __RPC__in IDiscFormat2RawCDEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAction )(
            __RPC__in IDiscFormat2RawCDEventArgs * This,
                                     __RPC__out IMAPI_FORMAT2_RAW_CD_WRITE_ACTION *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ElapsedTime )(
            __RPC__in IDiscFormat2RawCDEventArgs * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_RemainingTime )(
            __RPC__in IDiscFormat2RawCDEventArgs * This,
                                     __RPC__out LONG *value);
        END_INTERFACE
    } IDiscFormat2RawCDEventArgsVtbl;
    interface IDiscFormat2RawCDEventArgs
    {
        CONST_VTBL struct IDiscFormat2RawCDEventArgsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_StartLba(This,value) )
    ( (This)->lpVtbl -> get_SectorCount(This,value) )
    ( (This)->lpVtbl -> get_LastReadLba(This,value) )
    ( (This)->lpVtbl -> get_LastWrittenLba(This,value) )
    ( (This)->lpVtbl -> get_TotalSystemBuffer(This,value) )
    ( (This)->lpVtbl -> get_UsedSystemBuffer(This,value) )
    ( (This)->lpVtbl -> get_FreeSystemBuffer(This,value) )
    ( (This)->lpVtbl -> get_CurrentAction(This,value) )
    ( (This)->lpVtbl -> get_ElapsedTime(This,value) )
    ( (This)->lpVtbl -> get_RemainingTime(This,value) )
EXTERN_C const IID IID_IBurnVerification;
    typedef struct IBurnVerificationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBurnVerification * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBurnVerification * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBurnVerification * This);
                                        HRESULT ( STDMETHODCALLTYPE *put_BurnVerificationLevel )(
            __RPC__in IBurnVerification * This,
                       IMAPI_BURN_VERIFICATION_LEVEL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_BurnVerificationLevel )(
            __RPC__in IBurnVerification * This,
                                     __RPC__out IMAPI_BURN_VERIFICATION_LEVEL *value);
        END_INTERFACE
    } IBurnVerificationVtbl;
    interface IBurnVerification
    {
        CONST_VTBL struct IBurnVerificationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_BurnVerificationLevel(This,value) )
    ( (This)->lpVtbl -> get_BurnVerificationLevel(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0020_v0_0_s_ifspec;
EXTERN_C const IID IID_IWriteSpeedDescriptor;
    typedef struct IWriteSpeedDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWriteSpeedDescriptor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWriteSpeedDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWriteSpeedDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWriteSpeedDescriptor * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWriteSpeedDescriptor * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWriteSpeedDescriptor * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWriteSpeedDescriptor * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
            __RPC__in IWriteSpeedDescriptor * This,
                                     __RPC__out IMAPI_MEDIA_PHYSICAL_TYPE *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_RotationTypeIsPureCAV )(
            __RPC__in IWriteSpeedDescriptor * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_WriteSpeed )(
            __RPC__in IWriteSpeedDescriptor * This,
                                     __RPC__out LONG *value);
        END_INTERFACE
    } IWriteSpeedDescriptorVtbl;
    interface IWriteSpeedDescriptor
    {
        CONST_VTBL struct IWriteSpeedDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_MediaType(This,value) )
    ( (This)->lpVtbl -> get_RotationTypeIsPureCAV(This,value) )
    ( (This)->lpVtbl -> get_WriteSpeed(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0021_v0_0_s_ifspec;
EXTERN_C const IID IID_IMultisession;
    typedef struct IMultisessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMultisession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMultisession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMultisession * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMultisession * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMultisession * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMultisession * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMultisession * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsSupportedOnCurrentMediaState )(
            __RPC__in IMultisession * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_InUse )(
            __RPC__in IMultisession * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_InUse )(
            __RPC__in IMultisession * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ImportRecorder )(
            __RPC__in IMultisession * This,
                                     __RPC__deref_out_opt IDiscRecorder2 **value);
        END_INTERFACE
    } IMultisessionVtbl;
    interface IMultisession
    {
        CONST_VTBL struct IMultisessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_IsSupportedOnCurrentMediaState(This,value) )
    ( (This)->lpVtbl -> put_InUse(This,value) )
    ( (This)->lpVtbl -> get_InUse(This,value) )
    ( (This)->lpVtbl -> get_ImportRecorder(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0022_v0_0_s_ifspec;
EXTERN_C const IID IID_IMultisessionSequential;
    typedef struct IMultisessionSequentialVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMultisessionSequential * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMultisessionSequential * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMultisessionSequential * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMultisessionSequential * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMultisessionSequential * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMultisessionSequential * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMultisessionSequential * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsSupportedOnCurrentMediaState )(
            __RPC__in IMultisessionSequential * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_InUse )(
            __RPC__in IMultisessionSequential * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_InUse )(
            __RPC__in IMultisessionSequential * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ImportRecorder )(
            __RPC__in IMultisessionSequential * This,
                                     __RPC__deref_out_opt IDiscRecorder2 **value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsFirstDataSession )(
            __RPC__in IMultisessionSequential * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartAddressOfPreviousSession )(
            __RPC__in IMultisessionSequential * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastWrittenAddressOfPreviousSession )(
            __RPC__in IMultisessionSequential * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_NextWritableAddress )(
            __RPC__in IMultisessionSequential * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_FreeSectorsOnMedia )(
            __RPC__in IMultisessionSequential * This,
                                     __RPC__out LONG *value);
        END_INTERFACE
    } IMultisessionSequentialVtbl;
    interface IMultisessionSequential
    {
        CONST_VTBL struct IMultisessionSequentialVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_IsSupportedOnCurrentMediaState(This,value) )
    ( (This)->lpVtbl -> put_InUse(This,value) )
    ( (This)->lpVtbl -> get_InUse(This,value) )
    ( (This)->lpVtbl -> get_ImportRecorder(This,value) )
    ( (This)->lpVtbl -> get_IsFirstDataSession(This,value) )
    ( (This)->lpVtbl -> get_StartAddressOfPreviousSession(This,value) )
    ( (This)->lpVtbl -> get_LastWrittenAddressOfPreviousSession(This,value) )
    ( (This)->lpVtbl -> get_NextWritableAddress(This,value) )
    ( (This)->lpVtbl -> get_FreeSectorsOnMedia(This,value) )
EXTERN_C const IID IID_IMultisessionSequential2;
    typedef struct IMultisessionSequential2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMultisessionSequential2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMultisessionSequential2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMultisessionSequential2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMultisessionSequential2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMultisessionSequential2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMultisessionSequential2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMultisessionSequential2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsSupportedOnCurrentMediaState )(
            __RPC__in IMultisessionSequential2 * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_InUse )(
            __RPC__in IMultisessionSequential2 * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_InUse )(
            __RPC__in IMultisessionSequential2 * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ImportRecorder )(
            __RPC__in IMultisessionSequential2 * This,
                                     __RPC__deref_out_opt IDiscRecorder2 **value);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsFirstDataSession )(
            __RPC__in IMultisessionSequential2 * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartAddressOfPreviousSession )(
            __RPC__in IMultisessionSequential2 * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastWrittenAddressOfPreviousSession )(
            __RPC__in IMultisessionSequential2 * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_NextWritableAddress )(
            __RPC__in IMultisessionSequential2 * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_FreeSectorsOnMedia )(
            __RPC__in IMultisessionSequential2 * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_WriteUnitSize )(
            __RPC__in IMultisessionSequential2 * This,
                                     __RPC__out LONG *value);
        END_INTERFACE
    } IMultisessionSequential2Vtbl;
    interface IMultisessionSequential2
    {
        CONST_VTBL struct IMultisessionSequential2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_IsSupportedOnCurrentMediaState(This,value) )
    ( (This)->lpVtbl -> put_InUse(This,value) )
    ( (This)->lpVtbl -> get_InUse(This,value) )
    ( (This)->lpVtbl -> get_ImportRecorder(This,value) )
    ( (This)->lpVtbl -> get_IsFirstDataSession(This,value) )
    ( (This)->lpVtbl -> get_StartAddressOfPreviousSession(This,value) )
    ( (This)->lpVtbl -> get_LastWrittenAddressOfPreviousSession(This,value) )
    ( (This)->lpVtbl -> get_NextWritableAddress(This,value) )
    ( (This)->lpVtbl -> get_FreeSectorsOnMedia(This,value) )
    ( (This)->lpVtbl -> get_WriteUnitSize(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0024_v0_0_s_ifspec;
EXTERN_C const IID IID_IMultisessionRandomWrite;
    typedef struct IMultisessionRandomWriteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMultisessionRandomWrite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMultisessionRandomWrite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMultisessionRandomWrite * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMultisessionRandomWrite * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMultisessionRandomWrite * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMultisessionRandomWrite * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMultisessionRandomWrite * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsSupportedOnCurrentMediaState )(
            __RPC__in IMultisessionRandomWrite * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_InUse )(
            __RPC__in IMultisessionRandomWrite * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_InUse )(
            __RPC__in IMultisessionRandomWrite * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ImportRecorder )(
            __RPC__in IMultisessionRandomWrite * This,
                                     __RPC__deref_out_opt IDiscRecorder2 **value);
                                        HRESULT ( STDMETHODCALLTYPE *get_WriteUnitSize )(
            __RPC__in IMultisessionRandomWrite * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastWrittenAddress )(
            __RPC__in IMultisessionRandomWrite * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalSectorsOnMedia )(
            __RPC__in IMultisessionRandomWrite * This,
                                     __RPC__out LONG *value);
        END_INTERFACE
    } IMultisessionRandomWriteVtbl;
    interface IMultisessionRandomWrite
    {
        CONST_VTBL struct IMultisessionRandomWriteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_IsSupportedOnCurrentMediaState(This,value) )
    ( (This)->lpVtbl -> put_InUse(This,value) )
    ( (This)->lpVtbl -> get_InUse(This,value) )
    ( (This)->lpVtbl -> get_ImportRecorder(This,value) )
    ( (This)->lpVtbl -> get_WriteUnitSize(This,value) )
    ( (This)->lpVtbl -> get_LastWrittenAddress(This,value) )
    ( (This)->lpVtbl -> get_TotalSectorsOnMedia(This,value) )
EXTERN_C const IID IID_IStreamPseudoRandomBased;
    typedef struct IStreamPseudoRandomBasedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStreamPseudoRandomBased * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStreamPseudoRandomBased * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStreamPseudoRandomBased * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            IStreamPseudoRandomBased * This,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *Write )(
            IStreamPseudoRandomBased * This,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbWritten);
                      HRESULT ( STDMETHODCALLTYPE *Seek )(
            IStreamPseudoRandomBased * This,
                       LARGE_INTEGER dlibMove,
                       DWORD dwOrigin,
            _Out_opt_ ULARGE_INTEGER *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *SetSize )(
            __RPC__in IStreamPseudoRandomBased * This,
                       ULARGE_INTEGER libNewSize);
                      HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            IStreamPseudoRandomBased * This,
            _In_ IStream *pstm,
                       ULARGE_INTEGER cb,
            _Out_opt_ ULARGE_INTEGER *pcbRead,
            _Out_opt_ ULARGE_INTEGER *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IStreamPseudoRandomBased * This,
                       DWORD grfCommitFlags);
        HRESULT ( STDMETHODCALLTYPE *Revert )(
            __RPC__in IStreamPseudoRandomBased * This);
        HRESULT ( STDMETHODCALLTYPE *LockRegion )(
            __RPC__in IStreamPseudoRandomBased * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )(
            __RPC__in IStreamPseudoRandomBased * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            __RPC__in IStreamPseudoRandomBased * This,
                        __RPC__out STATSTG *pstatstg,
                       DWORD grfStatFlag);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IStreamPseudoRandomBased * This,
                        __RPC__deref_out_opt IStream **ppstm);
                           HRESULT ( STDMETHODCALLTYPE *put_Seed )(
            __RPC__in IStreamPseudoRandomBased * This,
                       ULONG value);
                           HRESULT ( STDMETHODCALLTYPE *get_Seed )(
            __RPC__in IStreamPseudoRandomBased * This,
                        __RPC__out ULONG *value);
                           HRESULT ( STDMETHODCALLTYPE *put_ExtendedSeed )(
            __RPC__in IStreamPseudoRandomBased * This,
                                __RPC__in_ecount_full(eCount) ULONG *values,
                       ULONG eCount);
                           HRESULT ( STDMETHODCALLTYPE *get_ExtendedSeed )(
            __RPC__in IStreamPseudoRandomBased * This,
                                          __RPC__deref_out_ecount_full_opt(*eCount) ULONG **values,
                        __RPC__out ULONG *eCount);
        END_INTERFACE
    } IStreamPseudoRandomBasedVtbl;
    interface IStreamPseudoRandomBased
    {
        CONST_VTBL struct IStreamPseudoRandomBasedVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
    ( (This)->lpVtbl -> SetSize(This,libNewSize) )
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) )
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
    ( (This)->lpVtbl -> Revert(This) )
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
    ( (This)->lpVtbl -> Clone(This,ppstm) )
    ( (This)->lpVtbl -> put_Seed(This,value) )
    ( (This)->lpVtbl -> get_Seed(This,value) )
    ( (This)->lpVtbl -> put_ExtendedSeed(This,values,eCount) )
    ( (This)->lpVtbl -> get_ExtendedSeed(This,values,eCount) )
EXTERN_C const IID IID_IStreamConcatenate;
    typedef struct IStreamConcatenateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStreamConcatenate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStreamConcatenate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStreamConcatenate * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            IStreamConcatenate * This,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *Write )(
            IStreamConcatenate * This,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbWritten);
                      HRESULT ( STDMETHODCALLTYPE *Seek )(
            IStreamConcatenate * This,
                       LARGE_INTEGER dlibMove,
                       DWORD dwOrigin,
            _Out_opt_ ULARGE_INTEGER *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *SetSize )(
            __RPC__in IStreamConcatenate * This,
                       ULARGE_INTEGER libNewSize);
                      HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            IStreamConcatenate * This,
            _In_ IStream *pstm,
                       ULARGE_INTEGER cb,
            _Out_opt_ ULARGE_INTEGER *pcbRead,
            _Out_opt_ ULARGE_INTEGER *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IStreamConcatenate * This,
                       DWORD grfCommitFlags);
        HRESULT ( STDMETHODCALLTYPE *Revert )(
            __RPC__in IStreamConcatenate * This);
        HRESULT ( STDMETHODCALLTYPE *LockRegion )(
            __RPC__in IStreamConcatenate * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )(
            __RPC__in IStreamConcatenate * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            __RPC__in IStreamConcatenate * This,
                        __RPC__out STATSTG *pstatstg,
                       DWORD grfStatFlag);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IStreamConcatenate * This,
                        __RPC__deref_out_opt IStream **ppstm);
                           HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IStreamConcatenate * This,
                       __RPC__in_opt IStream *stream1,
                       __RPC__in_opt IStream *stream2);
                           HRESULT ( STDMETHODCALLTYPE *Initialize2 )(
            __RPC__in IStreamConcatenate * This,
                                __RPC__in_ecount_full(streamCount) IStream **streams,
                       ULONG streamCount);
                           HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in IStreamConcatenate * This,
                       __RPC__in_opt IStream *stream);
                           HRESULT ( STDMETHODCALLTYPE *Append2 )(
            __RPC__in IStreamConcatenate * This,
                                __RPC__in_ecount_full(streamCount) IStream **streams,
                       ULONG streamCount);
        END_INTERFACE
    } IStreamConcatenateVtbl;
    interface IStreamConcatenate
    {
        CONST_VTBL struct IStreamConcatenateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
    ( (This)->lpVtbl -> SetSize(This,libNewSize) )
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) )
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
    ( (This)->lpVtbl -> Revert(This) )
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
    ( (This)->lpVtbl -> Clone(This,ppstm) )
    ( (This)->lpVtbl -> Initialize(This,stream1,stream2) )
    ( (This)->lpVtbl -> Initialize2(This,streams,streamCount) )
    ( (This)->lpVtbl -> Append(This,stream) )
    ( (This)->lpVtbl -> Append2(This,streams,streamCount) )
EXTERN_C const IID IID_IStreamInterleave;
    typedef struct IStreamInterleaveVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStreamInterleave * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStreamInterleave * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStreamInterleave * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            IStreamInterleave * This,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *Write )(
            IStreamInterleave * This,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbWritten);
                      HRESULT ( STDMETHODCALLTYPE *Seek )(
            IStreamInterleave * This,
                       LARGE_INTEGER dlibMove,
                       DWORD dwOrigin,
            _Out_opt_ ULARGE_INTEGER *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *SetSize )(
            __RPC__in IStreamInterleave * This,
                       ULARGE_INTEGER libNewSize);
                      HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            IStreamInterleave * This,
            _In_ IStream *pstm,
                       ULARGE_INTEGER cb,
            _Out_opt_ ULARGE_INTEGER *pcbRead,
            _Out_opt_ ULARGE_INTEGER *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IStreamInterleave * This,
                       DWORD grfCommitFlags);
        HRESULT ( STDMETHODCALLTYPE *Revert )(
            __RPC__in IStreamInterleave * This);
        HRESULT ( STDMETHODCALLTYPE *LockRegion )(
            __RPC__in IStreamInterleave * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )(
            __RPC__in IStreamInterleave * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            __RPC__in IStreamInterleave * This,
                        __RPC__out STATSTG *pstatstg,
                       DWORD grfStatFlag);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IStreamInterleave * This,
                        __RPC__deref_out_opt IStream **ppstm);
                           HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IStreamInterleave * This,
                                __RPC__in_ecount_full(streamCount) IStream **streams,
                                __RPC__in_ecount_full(streamCount) ULONG *interleaveSizes,
                              __RPC__in_range(1,0x7fffffff) ULONG streamCount);
        END_INTERFACE
    } IStreamInterleaveVtbl;
    interface IStreamInterleave
    {
        CONST_VTBL struct IStreamInterleaveVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
    ( (This)->lpVtbl -> SetSize(This,libNewSize) )
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) )
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
    ( (This)->lpVtbl -> Revert(This) )
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
    ( (This)->lpVtbl -> Clone(This,ppstm) )
    ( (This)->lpVtbl -> Initialize(This,streams,interleaveSizes,streamCount) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0028_v0_0_s_ifspec;
EXTERN_C const IID IID_IRawCDImageCreator;
    typedef struct IRawCDImageCreatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRawCDImageCreator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRawCDImageCreator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRawCDImageCreator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRawCDImageCreator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRawCDImageCreator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRawCDImageCreator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRawCDImageCreator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *CreateResultImage )(
            __RPC__in IRawCDImageCreator * This,
                                __RPC__deref_out_opt IStream **resultStream);
                               HRESULT ( STDMETHODCALLTYPE *AddTrack )(
            __RPC__in IRawCDImageCreator * This,
                       IMAPI_CD_SECTOR_TYPE dataType,
                       __RPC__in_opt IStream *data,
                                __RPC__out LONG *trackIndex);
                               HRESULT ( STDMETHODCALLTYPE *AddSpecialPregap )(
            __RPC__in IRawCDImageCreator * This,
                       __RPC__in_opt IStream *data);
                               HRESULT ( STDMETHODCALLTYPE *AddSubcodeRWGenerator )(
            __RPC__in IRawCDImageCreator * This,
                       __RPC__in_opt IStream *subcode);
                                        HRESULT ( STDMETHODCALLTYPE *put_ResultingImageType )(
            __RPC__in IRawCDImageCreator * This,
                       IMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ResultingImageType )(
            __RPC__in IRawCDImageCreator * This,
                                     __RPC__out IMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartOfLeadout )(
            __RPC__in IRawCDImageCreator * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartOfLeadoutLimit )(
            __RPC__in IRawCDImageCreator * This,
                       LONG value);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartOfLeadoutLimit )(
            __RPC__in IRawCDImageCreator * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisableGaplessAudio )(
            __RPC__in IRawCDImageCreator * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisableGaplessAudio )(
            __RPC__in IRawCDImageCreator * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaCatalogNumber )(
            __RPC__in IRawCDImageCreator * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaCatalogNumber )(
            __RPC__in IRawCDImageCreator * This,
                                     __RPC__deref_out_opt BSTR *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartingTrackNumber )(
            __RPC__in IRawCDImageCreator * This,
                              __RPC__in_range(1,99) LONG value);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartingTrackNumber )(
            __RPC__in IRawCDImageCreator * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_TrackInfo )(
            __RPC__in IRawCDImageCreator * This,
                       LONG trackIndex,
                                     __RPC__deref_out_opt IRawCDImageTrackInfo **value);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumberOfExistingTracks )(
            __RPC__in IRawCDImageCreator * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastUsedUserSectorInImage )(
            __RPC__in IRawCDImageCreator * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExpectedTableOfContents )(
            __RPC__in IRawCDImageCreator * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
        END_INTERFACE
    } IRawCDImageCreatorVtbl;
    interface IRawCDImageCreator
    {
        CONST_VTBL struct IRawCDImageCreatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreateResultImage(This,resultStream) )
    ( (This)->lpVtbl -> AddTrack(This,dataType,data,trackIndex) )
    ( (This)->lpVtbl -> AddSpecialPregap(This,data) )
    ( (This)->lpVtbl -> AddSubcodeRWGenerator(This,subcode) )
    ( (This)->lpVtbl -> put_ResultingImageType(This,value) )
    ( (This)->lpVtbl -> get_ResultingImageType(This,value) )
    ( (This)->lpVtbl -> get_StartOfLeadout(This,value) )
    ( (This)->lpVtbl -> put_StartOfLeadoutLimit(This,value) )
    ( (This)->lpVtbl -> get_StartOfLeadoutLimit(This,value) )
    ( (This)->lpVtbl -> put_DisableGaplessAudio(This,value) )
    ( (This)->lpVtbl -> get_DisableGaplessAudio(This,value) )
    ( (This)->lpVtbl -> put_MediaCatalogNumber(This,value) )
    ( (This)->lpVtbl -> get_MediaCatalogNumber(This,value) )
    ( (This)->lpVtbl -> put_StartingTrackNumber(This,value) )
    ( (This)->lpVtbl -> get_StartingTrackNumber(This,value) )
    ( (This)->lpVtbl -> get_TrackInfo(This,trackIndex,value) )
    ( (This)->lpVtbl -> get_NumberOfExistingTracks(This,value) )
    ( (This)->lpVtbl -> get_LastUsedUserSectorInImage(This,value) )
    ( (This)->lpVtbl -> get_ExpectedTableOfContents(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0029_v0_0_s_ifspec;
EXTERN_C const IID IID_IRawCDImageTrackInfo;
    typedef struct IRawCDImageTrackInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRawCDImageTrackInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRawCDImageTrackInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRawCDImageTrackInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRawCDImageTrackInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRawCDImageTrackInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRawCDImageTrackInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRawCDImageTrackInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartingLba )(
            __RPC__in IRawCDImageTrackInfo * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SectorCount )(
            __RPC__in IRawCDImageTrackInfo * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_TrackNumber )(
            __RPC__in IRawCDImageTrackInfo * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_SectorType )(
            __RPC__in IRawCDImageTrackInfo * This,
                                     __RPC__out IMAPI_CD_SECTOR_TYPE *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_ISRC )(
            __RPC__in IRawCDImageTrackInfo * This,
                                     __RPC__deref_out_opt BSTR *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_ISRC )(
            __RPC__in IRawCDImageTrackInfo * This,
                       __RPC__in BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_DigitalAudioCopySetting )(
            __RPC__in IRawCDImageTrackInfo * This,
                                     __RPC__out IMAPI_CD_TRACK_DIGITAL_COPY_SETTING *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_DigitalAudioCopySetting )(
            __RPC__in IRawCDImageTrackInfo * This,
                       IMAPI_CD_TRACK_DIGITAL_COPY_SETTING value);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioHasPreemphasis )(
            __RPC__in IRawCDImageTrackInfo * This,
                                     __RPC__out VARIANT_BOOL *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_AudioHasPreemphasis )(
            __RPC__in IRawCDImageTrackInfo * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_TrackIndexes )(
            __RPC__in IRawCDImageTrackInfo * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
                               HRESULT ( STDMETHODCALLTYPE *AddTrackIndex )(
            __RPC__in IRawCDImageTrackInfo * This,
                              __RPC__in_range(0,0x7fffffff) LONG lbaOffset);
                               HRESULT ( STDMETHODCALLTYPE *ClearTrackIndex )(
            __RPC__in IRawCDImageTrackInfo * This,
                              __RPC__in_range(0,0x7fffffff) LONG lbaOffset);
        END_INTERFACE
    } IRawCDImageTrackInfoVtbl;
    interface IRawCDImageTrackInfo
    {
        CONST_VTBL struct IRawCDImageTrackInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_StartingLba(This,value) )
    ( (This)->lpVtbl -> get_SectorCount(This,value) )
    ( (This)->lpVtbl -> get_TrackNumber(This,value) )
    ( (This)->lpVtbl -> get_SectorType(This,value) )
    ( (This)->lpVtbl -> get_ISRC(This,value) )
    ( (This)->lpVtbl -> put_ISRC(This,value) )
    ( (This)->lpVtbl -> get_DigitalAudioCopySetting(This,value) )
    ( (This)->lpVtbl -> put_DigitalAudioCopySetting(This,value) )
    ( (This)->lpVtbl -> get_AudioHasPreemphasis(This,value) )
    ( (This)->lpVtbl -> put_AudioHasPreemphasis(This,value) )
    ( (This)->lpVtbl -> get_TrackIndexes(This,value) )
    ( (This)->lpVtbl -> AddTrackIndex(This,lbaOffset) )
    ( (This)->lpVtbl -> ClearTrackIndex(This,lbaOffset) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0030_v0_0_s_ifspec;
EXTERN_C const IID IID_IBlockRange;
    typedef struct IBlockRangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBlockRange * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBlockRange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBlockRange * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IBlockRange * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IBlockRange * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IBlockRange * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IBlockRange * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartLba )(
            __RPC__in IBlockRange * This,
                                     __RPC__out LONG *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndLba )(
            __RPC__in IBlockRange * This,
                                     __RPC__out LONG *value);
        END_INTERFACE
    } IBlockRangeVtbl;
    interface IBlockRange
    {
        CONST_VTBL struct IBlockRangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_StartLba(This,value) )
    ( (This)->lpVtbl -> get_EndLba(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0031_v0_0_s_ifspec;
EXTERN_C const IID IID_IBlockRangeList;
    typedef struct IBlockRangeListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBlockRangeList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBlockRangeList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBlockRangeList * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IBlockRangeList * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IBlockRangeList * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IBlockRangeList * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IBlockRangeList * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockRanges )(
            __RPC__in IBlockRangeList * This,
                                     __RPC__deref_out_opt SAFEARRAY * *value);
        END_INTERFACE
    } IBlockRangeListVtbl;
    interface IBlockRangeList
    {
        CONST_VTBL struct IBlockRangeListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_BlockRanges(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0032_v0_0_s_ifspec;
EXTERN_C const IID LIBID_IMAPI2;
EXTERN_C const CLSID CLSID_MsftDiscMaster2;
class DECLSPEC_UUID("2735412E-7F64-5B0F-8F00-5D77AFBE261E")
MsftDiscMaster2;
EXTERN_C const CLSID CLSID_MsftDiscRecorder2;
class DECLSPEC_UUID("2735412D-7F64-5B0F-8F00-5D77AFBE261E")
MsftDiscRecorder2;
EXTERN_C const CLSID CLSID_MsftWriteEngine2;
class DECLSPEC_UUID("2735412C-7F64-5B0F-8F00-5D77AFBE261E")
MsftWriteEngine2;
EXTERN_C const CLSID CLSID_MsftDiscFormat2Erase;
class DECLSPEC_UUID("2735412B-7F64-5B0F-8F00-5D77AFBE261E")
MsftDiscFormat2Erase;
EXTERN_C const CLSID CLSID_MsftDiscFormat2Data;
class DECLSPEC_UUID("2735412A-7F64-5B0F-8F00-5D77AFBE261E")
MsftDiscFormat2Data;
EXTERN_C const CLSID CLSID_MsftDiscFormat2TrackAtOnce;
class DECLSPEC_UUID("27354129-7F64-5B0F-8F00-5D77AFBE261E")
MsftDiscFormat2TrackAtOnce;
EXTERN_C const CLSID CLSID_MsftDiscFormat2RawCD;
class DECLSPEC_UUID("27354128-7F64-5B0F-8F00-5D77AFBE261E")
MsftDiscFormat2RawCD;
EXTERN_C const CLSID CLSID_MsftStreamZero;
class DECLSPEC_UUID("27354127-7F64-5B0F-8F00-5D77AFBE261E")
MsftStreamZero;
EXTERN_C const CLSID CLSID_MsftStreamPrng001;
class DECLSPEC_UUID("27354126-7F64-5B0F-8F00-5D77AFBE261E")
MsftStreamPrng001;
EXTERN_C const CLSID CLSID_MsftStreamConcatenate;
class DECLSPEC_UUID("27354125-7F64-5B0F-8F00-5D77AFBE261E")
MsftStreamConcatenate;
EXTERN_C const CLSID CLSID_MsftStreamInterleave;
class DECLSPEC_UUID("27354124-7F64-5B0F-8F00-5D77AFBE261E")
MsftStreamInterleave;
EXTERN_C const CLSID CLSID_MsftWriteSpeedDescriptor;
class DECLSPEC_UUID("27354123-7F64-5B0F-8F00-5D77AFBE261E")
MsftWriteSpeedDescriptor;
EXTERN_C const CLSID CLSID_MsftMultisessionSequential;
class DECLSPEC_UUID("27354122-7F64-5B0F-8F00-5D77AFBE261E")
MsftMultisessionSequential;
EXTERN_C const CLSID CLSID_MsftMultisessionRandomWrite;
class DECLSPEC_UUID("B507CA24-2204-11DD-966A-001AA01BBC58")
MsftMultisessionRandomWrite;
EXTERN_C const CLSID CLSID_MsftRawCDImageCreator;
class DECLSPEC_UUID("25983561-9D65-49CE-B335-40630D901227")
MsftRawCDImageCreator;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0033_v0_0_s_ifspec;
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
