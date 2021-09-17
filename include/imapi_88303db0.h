#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDiscRecorder IDiscRecorder;
typedef interface IEnumDiscRecorders IEnumDiscRecorders;
typedef interface IEnumDiscMasterFormats IEnumDiscMasterFormats;
typedef interface IRedbookDiscMaster IRedbookDiscMaster;
typedef interface IJolietDiscMaster IJolietDiscMaster;
typedef interface IDiscMasterProgressEvents IDiscMasterProgressEvents;
typedef interface IDiscMaster IDiscMaster;
typedef class MSDiscRecorderObj MSDiscRecorderObj;
typedef class MSDiscMasterObj MSDiscMasterObj;
typedef class MSEnumDiscRecordersObj MSEnumDiscRecordersObj;
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
C_ASSERT(sizeof(boolean) == 1);
extern RPC_IF_HANDLE __MIDL_itf_imapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi_0000_0000_v0_0_s_ifspec;
enum MEDIA_TYPES
    {
        MEDIA_CDDA_CDROM = 1,
        MEDIA_CD_ROM_XA = ( MEDIA_CDDA_CDROM + 1 ) ,
        MEDIA_CD_I = ( MEDIA_CD_ROM_XA + 1 ) ,
        MEDIA_CD_EXTRA = ( MEDIA_CD_I + 1 ) ,
        MEDIA_CD_OTHER = ( MEDIA_CD_EXTRA + 1 ) ,
        MEDIA_SPECIAL = ( MEDIA_CD_OTHER + 1 )
    } ;
enum MEDIA_FLAGS
    {
        MEDIA_BLANK = 0x1,
        MEDIA_RW = 0x2,
        MEDIA_WRITABLE = 0x4,
        MEDIA_FORMAT_UNUSABLE_BY_IMAPI = 0x8
    } ;
enum RECORDER_TYPES
    {
        RECORDER_CDR = 0x1,
        RECORDER_CDRW = 0x2
    } ;
EXTERN_C const IID IID_IDiscRecorder;
    typedef struct IDiscRecorderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDiscRecorder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDiscRecorder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDiscRecorder * This);
                           HRESULT ( STDMETHODCALLTYPE *Init )(
            __RPC__in IDiscRecorder * This,
                                __RPC__in_ecount_full(nulIDSize) byte *pbyUniqueID,
                       ULONG nulIDSize,
                       ULONG nulDriveNumber);
                           HRESULT ( STDMETHODCALLTYPE *GetRecorderGUID )(
            __RPC__in IDiscRecorder * This,
                                             __RPC__inout_ecount_full_opt(ulBufferSize) byte *pbyUniqueID,
                       ULONG ulBufferSize,
                        __RPC__out ULONG *pulReturnSizeRequired);
                           HRESULT ( STDMETHODCALLTYPE *GetRecorderType )(
            __RPC__in IDiscRecorder * This,
                        __RPC__out long *fTypeCode);
                           HRESULT ( STDMETHODCALLTYPE *GetDisplayNames )(
            __RPC__in IDiscRecorder * This,
                                    __RPC__deref_opt_inout_opt BSTR *pbstrVendorID,
                                    __RPC__deref_opt_inout_opt BSTR *pbstrProductID,
                                    __RPC__deref_opt_inout_opt BSTR *pbstrRevision);
                           HRESULT ( STDMETHODCALLTYPE *GetBasePnPID )(
            __RPC__in IDiscRecorder * This,
                        __RPC__deref_out_opt BSTR *pbstrBasePnPID);
                           HRESULT ( STDMETHODCALLTYPE *GetPath )(
            __RPC__in IDiscRecorder * This,
                        __RPC__deref_out_opt BSTR *pbstrPath);
                           HRESULT ( STDMETHODCALLTYPE *GetRecorderProperties )(
            __RPC__in IDiscRecorder * This,
                        __RPC__deref_out_opt IPropertyStorage **ppPropStg);
                           HRESULT ( STDMETHODCALLTYPE *SetRecorderProperties )(
            __RPC__in IDiscRecorder * This,
                       __RPC__in_opt IPropertyStorage *pPropStg);
                           HRESULT ( STDMETHODCALLTYPE *GetRecorderState )(
            __RPC__in IDiscRecorder * This,
                        __RPC__out ULONG *pulDevStateFlags);
                           HRESULT ( STDMETHODCALLTYPE *OpenExclusive )(
            __RPC__in IDiscRecorder * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryMediaType )(
            __RPC__in IDiscRecorder * This,
                        __RPC__out long *fMediaType,
                        __RPC__out long *fMediaFlags);
                           HRESULT ( STDMETHODCALLTYPE *QueryMediaInfo )(
            __RPC__in IDiscRecorder * This,
                        __RPC__out byte *pbSessions,
                        __RPC__out byte *pbLastTrack,
                        __RPC__out ULONG *ulStartAddress,
                        __RPC__out ULONG *ulNextWritable,
                        __RPC__out ULONG *ulFreeBlocks);
                           HRESULT ( STDMETHODCALLTYPE *Eject )(
            __RPC__in IDiscRecorder * This);
                           HRESULT ( STDMETHODCALLTYPE *Erase )(
            __RPC__in IDiscRecorder * This,
                       boolean bFullErase);
                           HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IDiscRecorder * This);
        END_INTERFACE
    } IDiscRecorderVtbl;
    interface IDiscRecorder
    {
        CONST_VTBL struct IDiscRecorderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,pbyUniqueID,nulIDSize,nulDriveNumber) )
    ( (This)->lpVtbl -> GetRecorderGUID(This,pbyUniqueID,ulBufferSize,pulReturnSizeRequired) )
    ( (This)->lpVtbl -> GetRecorderType(This,fTypeCode) )
    ( (This)->lpVtbl -> GetDisplayNames(This,pbstrVendorID,pbstrProductID,pbstrRevision) )
    ( (This)->lpVtbl -> GetBasePnPID(This,pbstrBasePnPID) )
    ( (This)->lpVtbl -> GetPath(This,pbstrPath) )
    ( (This)->lpVtbl -> GetRecorderProperties(This,ppPropStg) )
    ( (This)->lpVtbl -> SetRecorderProperties(This,pPropStg) )
    ( (This)->lpVtbl -> GetRecorderState(This,pulDevStateFlags) )
    ( (This)->lpVtbl -> OpenExclusive(This) )
    ( (This)->lpVtbl -> QueryMediaType(This,fMediaType,fMediaFlags) )
    ( (This)->lpVtbl -> QueryMediaInfo(This,pbSessions,pbLastTrack,ulStartAddress,ulNextWritable,ulFreeBlocks) )
    ( (This)->lpVtbl -> Eject(This) )
    ( (This)->lpVtbl -> Erase(This,bFullErase) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IEnumDiscRecorders;
    typedef struct IEnumDiscRecordersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumDiscRecorders * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumDiscRecorders * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumDiscRecorders * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumDiscRecorders * This,
                       ULONG cRecorders,
                                            __RPC__out_ecount_part(cRecorders, *pcFetched) IDiscRecorder **ppRecorder,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumDiscRecorders * This,
                       ULONG cRecorders);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumDiscRecorders * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumDiscRecorders * This,
                        __RPC__deref_out_opt IEnumDiscRecorders **ppEnum);
        END_INTERFACE
    } IEnumDiscRecordersVtbl;
    interface IEnumDiscRecorders
    {
        CONST_VTBL struct IEnumDiscRecordersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cRecorders,ppRecorder,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cRecorders) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IEnumDiscMasterFormats;
    typedef struct IEnumDiscMasterFormatsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumDiscMasterFormats * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumDiscMasterFormats * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumDiscMasterFormats * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumDiscMasterFormats * This,
                       ULONG cFormats,
                                            __RPC__out_ecount_part(cFormats, *pcFetched) LPIID lpiidFormatID,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumDiscMasterFormats * This,
                       ULONG cFormats);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumDiscMasterFormats * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumDiscMasterFormats * This,
                        __RPC__deref_out_opt IEnumDiscMasterFormats **ppEnum);
        END_INTERFACE
    } IEnumDiscMasterFormatsVtbl;
    interface IEnumDiscMasterFormats
    {
        CONST_VTBL struct IEnumDiscMasterFormatsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cFormats,lpiidFormatID,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cFormats) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IRedbookDiscMaster;
    typedef struct IRedbookDiscMasterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRedbookDiscMaster * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRedbookDiscMaster * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRedbookDiscMaster * This);
                           HRESULT ( STDMETHODCALLTYPE *GetTotalAudioTracks )(
            __RPC__in IRedbookDiscMaster * This,
                                __RPC__out long *pnTracks);
                           HRESULT ( STDMETHODCALLTYPE *GetTotalAudioBlocks )(
            __RPC__in IRedbookDiscMaster * This,
                                __RPC__out long *pnBlocks);
                           HRESULT ( STDMETHODCALLTYPE *GetUsedAudioBlocks )(
            __RPC__in IRedbookDiscMaster * This,
                                __RPC__out long *pnBlocks);
                           HRESULT ( STDMETHODCALLTYPE *GetAvailableAudioTrackBlocks )(
            __RPC__in IRedbookDiscMaster * This,
                                __RPC__out long *pnBlocks);
                           HRESULT ( STDMETHODCALLTYPE *GetAudioBlockSize )(
            __RPC__in IRedbookDiscMaster * This,
                                __RPC__out long *pnBlockBytes);
                           HRESULT ( STDMETHODCALLTYPE *CreateAudioTrack )(
            __RPC__in IRedbookDiscMaster * This,
                       long nBlocks);
                           HRESULT ( STDMETHODCALLTYPE *AddAudioTrackBlocks )(
            __RPC__in IRedbookDiscMaster * This,
                                __RPC__in_ecount_full(cb) byte *pby,
                       long cb);
                           HRESULT ( STDMETHODCALLTYPE *CloseAudioTrack )(
            __RPC__in IRedbookDiscMaster * This);
        END_INTERFACE
    } IRedbookDiscMasterVtbl;
    interface IRedbookDiscMaster
    {
        CONST_VTBL struct IRedbookDiscMasterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTotalAudioTracks(This,pnTracks) )
    ( (This)->lpVtbl -> GetTotalAudioBlocks(This,pnBlocks) )
    ( (This)->lpVtbl -> GetUsedAudioBlocks(This,pnBlocks) )
    ( (This)->lpVtbl -> GetAvailableAudioTrackBlocks(This,pnBlocks) )
    ( (This)->lpVtbl -> GetAudioBlockSize(This,pnBlockBytes) )
    ( (This)->lpVtbl -> CreateAudioTrack(This,nBlocks) )
    ( (This)->lpVtbl -> AddAudioTrackBlocks(This,pby,cb) )
    ( (This)->lpVtbl -> CloseAudioTrack(This) )
EXTERN_C const IID IID_IJolietDiscMaster;
    typedef struct IJolietDiscMasterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IJolietDiscMaster * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IJolietDiscMaster * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IJolietDiscMaster * This);
                           HRESULT ( STDMETHODCALLTYPE *GetTotalDataBlocks )(
            __RPC__in IJolietDiscMaster * This,
                                __RPC__out long *pnBlocks);
                           HRESULT ( STDMETHODCALLTYPE *GetUsedDataBlocks )(
            __RPC__in IJolietDiscMaster * This,
                                __RPC__out long *pnBlocks);
                           HRESULT ( STDMETHODCALLTYPE *GetDataBlockSize )(
            __RPC__in IJolietDiscMaster * This,
                                __RPC__out long *pnBlockBytes);
                           HRESULT ( STDMETHODCALLTYPE *AddData )(
            __RPC__in IJolietDiscMaster * This,
                       __RPC__in_opt IStorage *pStorage,
            long lFileOverwrite);
                           HRESULT ( STDMETHODCALLTYPE *GetJolietProperties )(
            __RPC__in IJolietDiscMaster * This,
                        __RPC__deref_out_opt IPropertyStorage **ppPropStg);
                           HRESULT ( STDMETHODCALLTYPE *SetJolietProperties )(
            __RPC__in IJolietDiscMaster * This,
                       __RPC__in_opt IPropertyStorage *pPropStg);
        END_INTERFACE
    } IJolietDiscMasterVtbl;
    interface IJolietDiscMaster
    {
        CONST_VTBL struct IJolietDiscMasterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTotalDataBlocks(This,pnBlocks) )
    ( (This)->lpVtbl -> GetUsedDataBlocks(This,pnBlocks) )
    ( (This)->lpVtbl -> GetDataBlockSize(This,pnBlockBytes) )
    ( (This)->lpVtbl -> AddData(This,pStorage,lFileOverwrite) )
    ( (This)->lpVtbl -> GetJolietProperties(This,ppPropStg) )
    ( (This)->lpVtbl -> SetJolietProperties(This,pPropStg) )
EXTERN_C const IID IID_IDiscMasterProgressEvents;
    typedef struct IDiscMasterProgressEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDiscMasterProgressEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDiscMasterProgressEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDiscMasterProgressEvents * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryCancel )(
            __RPC__in IDiscMasterProgressEvents * This,
                                __RPC__out boolean *pbCancel);
                           HRESULT ( STDMETHODCALLTYPE *NotifyPnPActivity )(
            __RPC__in IDiscMasterProgressEvents * This);
                           HRESULT ( STDMETHODCALLTYPE *NotifyAddProgress )(
            __RPC__in IDiscMasterProgressEvents * This,
                       long nCompletedSteps,
                       long nTotalSteps);
                           HRESULT ( STDMETHODCALLTYPE *NotifyBlockProgress )(
            __RPC__in IDiscMasterProgressEvents * This,
                       long nCompleted,
                       long nTotal);
                           HRESULT ( STDMETHODCALLTYPE *NotifyTrackProgress )(
            __RPC__in IDiscMasterProgressEvents * This,
                       long nCurrentTrack,
                       long nTotalTracks);
                           HRESULT ( STDMETHODCALLTYPE *NotifyPreparingBurn )(
            __RPC__in IDiscMasterProgressEvents * This,
                       long nEstimatedSeconds);
                           HRESULT ( STDMETHODCALLTYPE *NotifyClosingDisc )(
            __RPC__in IDiscMasterProgressEvents * This,
                       long nEstimatedSeconds);
                           HRESULT ( STDMETHODCALLTYPE *NotifyBurnComplete )(
            __RPC__in IDiscMasterProgressEvents * This,
                       HRESULT status);
                           HRESULT ( STDMETHODCALLTYPE *NotifyEraseComplete )(
            __RPC__in IDiscMasterProgressEvents * This,
                       HRESULT status);
        END_INTERFACE
    } IDiscMasterProgressEventsVtbl;
    interface IDiscMasterProgressEvents
    {
        CONST_VTBL struct IDiscMasterProgressEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryCancel(This,pbCancel) )
    ( (This)->lpVtbl -> NotifyPnPActivity(This) )
    ( (This)->lpVtbl -> NotifyAddProgress(This,nCompletedSteps,nTotalSteps) )
    ( (This)->lpVtbl -> NotifyBlockProgress(This,nCompleted,nTotal) )
    ( (This)->lpVtbl -> NotifyTrackProgress(This,nCurrentTrack,nTotalTracks) )
    ( (This)->lpVtbl -> NotifyPreparingBurn(This,nEstimatedSeconds) )
    ( (This)->lpVtbl -> NotifyClosingDisc(This,nEstimatedSeconds) )
    ( (This)->lpVtbl -> NotifyBurnComplete(This,status) )
    ( (This)->lpVtbl -> NotifyEraseComplete(This,status) )
EXTERN_C const IID IID_IDiscMaster;
    typedef struct IDiscMasterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDiscMaster * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDiscMaster * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDiscMaster * This);
                           HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IDiscMaster * This);
                           HRESULT ( STDMETHODCALLTYPE *EnumDiscMasterFormats )(
            __RPC__in IDiscMaster * This,
                        __RPC__deref_out_opt IEnumDiscMasterFormats **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *GetActiveDiscMasterFormat )(
            __RPC__in IDiscMaster * This,
                        __RPC__out LPIID lpiid);
                           HRESULT ( STDMETHODCALLTYPE *SetActiveDiscMasterFormat )(
            __RPC__in IDiscMaster * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppUnk);
                           HRESULT ( STDMETHODCALLTYPE *EnumDiscRecorders )(
            __RPC__in IDiscMaster * This,
                        __RPC__deref_out_opt IEnumDiscRecorders **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *GetActiveDiscRecorder )(
            __RPC__in IDiscMaster * This,
                        __RPC__deref_out_opt IDiscRecorder **ppRecorder);
                           HRESULT ( STDMETHODCALLTYPE *SetActiveDiscRecorder )(
            __RPC__in IDiscMaster * This,
                       __RPC__in_opt IDiscRecorder *pRecorder);
                           HRESULT ( STDMETHODCALLTYPE *ClearFormatContent )(
            __RPC__in IDiscMaster * This);
                           HRESULT ( STDMETHODCALLTYPE *ProgressAdvise )(
            __RPC__in IDiscMaster * This,
                       __RPC__in_opt IDiscMasterProgressEvents *pEvents,
                                __RPC__out UINT_PTR *pvCookie);
                           HRESULT ( STDMETHODCALLTYPE *ProgressUnadvise )(
            __RPC__in IDiscMaster * This,
                       UINT_PTR vCookie);
                           HRESULT ( STDMETHODCALLTYPE *RecordDisc )(
            __RPC__in IDiscMaster * This,
                       boolean bSimulate,
                       boolean bEjectAfterBurn);
                           HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IDiscMaster * This);
        END_INTERFACE
    } IDiscMasterVtbl;
    interface IDiscMaster
    {
        CONST_VTBL struct IDiscMasterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Open(This) )
    ( (This)->lpVtbl -> EnumDiscMasterFormats(This,ppEnum) )
    ( (This)->lpVtbl -> GetActiveDiscMasterFormat(This,lpiid) )
    ( (This)->lpVtbl -> SetActiveDiscMasterFormat(This,riid,ppUnk) )
    ( (This)->lpVtbl -> EnumDiscRecorders(This,ppEnum) )
    ( (This)->lpVtbl -> GetActiveDiscRecorder(This,ppRecorder) )
    ( (This)->lpVtbl -> SetActiveDiscRecorder(This,pRecorder) )
    ( (This)->lpVtbl -> ClearFormatContent(This) )
    ( (This)->lpVtbl -> ProgressAdvise(This,pEvents,pvCookie) )
    ( (This)->lpVtbl -> ProgressUnadvise(This,vCookie) )
    ( (This)->lpVtbl -> RecordDisc(This,bSimulate,bEjectAfterBurn) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID LIBID_IMAPILib;
EXTERN_C const CLSID CLSID_MSDiscRecorderObj;
class DECLSPEC_UUID("520CCA61-51A5-11D3-9144-00104BA11C5E")
MSDiscRecorderObj;
EXTERN_C const CLSID CLSID_MSDiscMasterObj;
class DECLSPEC_UUID("520CCA63-51A5-11D3-9144-00104BA11C5E")
MSDiscMasterObj;
EXTERN_C const CLSID CLSID_MSEnumDiscRecordersObj;
class DECLSPEC_UUID("8A03567A-63CB-4BA8-BAF6-52119816D1EF")
MSEnumDiscRecordersObj;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_imapi_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi_0000_0008_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
