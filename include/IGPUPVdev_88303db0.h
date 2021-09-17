#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IGPUPVDev IGPUPVDev;
typedef interface IGPUPMitigationDevice IGPUPMitigationDevice;
typedef interface IVmGPUPGuestMemoryAccess IVmGPUPGuestMemoryAccess;
typedef interface IVmGPUPGuestMsiAccess IVmGPUPGuestMsiAccess;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
typedef struct _LUID
    {
    DWORD LowPart;
    LONG HighPart;
    } LUID;
typedef LUID *PLUID;
typedef UINT64 GUEST_PHYSICAL_ADDRESS;
extern RPC_IF_HANDLE __MIDL_itf_igpupvdev_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_igpupvdev_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IGPUPVDev;
    typedef struct IGPUPVDevVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGPUPVDev * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGPUPVDev * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGPUPVDev * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceLuid )(
            __RPC__in IGPUPVDev * This,
                        __RPC__out PLUID DeviceLUID);
        END_INTERFACE
    } IGPUPVDevVtbl;
    interface IGPUPVDev
    {
        CONST_VTBL struct IGPUPVDevVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDeviceLuid(This,DeviceLUID) )
typedef
enum __MIDL_IGPUPMitigationDevice_0001
    {
        BAR0 = 0,
        BAR1 = ( BAR0 + 1 ) ,
        BAR2 = ( BAR1 + 1 ) ,
        BAR3 = ( BAR2 + 1 ) ,
        BAR4 = ( BAR3 + 1 ) ,
        BAR5 = ( BAR4 + 1 ) ,
        ROMBAR = ( BAR5 + 1 ) ,
        CONFIG = ( ROMBAR + 1 )
    } VGPU_BAR_SELECTOR;
typedef
enum __MIDL_IGPUPMitigationDevice_0002
    {
        GpupPowerDeviceInvalid = 0,
        GpupPowerDeviceD0 = ( GpupPowerDeviceInvalid + 1 ) ,
        GpupPowerDeviceD1 = ( GpupPowerDeviceD0 + 1 ) ,
        GpupPowerDeviceD2 = ( GpupPowerDeviceD1 + 1 ) ,
        GpupPowerDeviceD3 = ( GpupPowerDeviceD2 + 1 ) ,
        GpupPowerDeviceD3Final = ( GpupPowerDeviceD3 + 1 ) ,
        GpupPowerDevicePrepareForHibernation = ( GpupPowerDeviceD3Final + 1 ) ,
        GpupPowerDeviceMaximum = ( GpupPowerDevicePrepareForHibernation + 1 )
    } GPUP_POWER_DEVICE_STATE;
typedef
enum __MIDL_IGPUPMitigationDevice_0003
    {
        GpupSaveInvalid = 0,
        GpupSavePartitionPersist = ( GpupSaveInvalid + 1 ) ,
        GpupSaveMaximum = ( GpupSavePartitionPersist + 1 )
    } GPUP_SAVE_RESTORE_PAUSE_STATE;
EXTERN_C const IID IID_IGPUPMitigationDevice;
    typedef struct IGPUPMitigationDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IGPUPMitigationDevice * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IGPUPMitigationDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IGPUPMitigationDevice * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IGPUPMitigationDevice * This,
                       GUID *VmGuid,
                       PLUID DeviceLuid,
                       HANDLE DeviceHandle,
                       HANDLE VmBusHandle,
                       IUnknown *GpupServices);
        HRESULT ( STDMETHODCALLTYPE *PowerTransitionComplete )(
            IGPUPMitigationDevice * This,
                       PLUID DeviceLuid,
                       GPUP_POWER_DEVICE_STATE GpupPowerState);
        HRESULT ( STDMETHODCALLTYPE *ReadInterceptedGpup )(
            IGPUPMitigationDevice * This,
                       PLUID DeviceLuid,
                       VGPU_BAR_SELECTOR BarIndex,
                       ULONG64 Offset,
                       ULONG64 Length,
                        BYTE *ValueRead);
        HRESULT ( STDMETHODCALLTYPE *WriteInterceptedGpup )(
            IGPUPMitigationDevice * This,
                       PLUID DeviceLuid,
                       VGPU_BAR_SELECTOR BarIndex,
                       ULONG64 Offset,
                       ULONG64 Length,
                       const BYTE WriteValue[ ]);
        HRESULT ( STDMETHODCALLTYPE *PauseGpup )(
            IGPUPMitigationDevice * This,
                       PLUID DeviceLuid,
                       GPUP_SAVE_RESTORE_PAUSE_STATE Flags);
        HRESULT ( STDMETHODCALLTYPE *ResumeGpup )(
            IGPUPMitigationDevice * This,
                       PLUID DeviceLuid,
                       GPUP_SAVE_RESTORE_PAUSE_STATE Flags);
        HRESULT ( STDMETHODCALLTYPE *SaveGpupBegin )(
            IGPUPMitigationDevice * This,
                       PLUID DeviceLuid,
                       GPUP_SAVE_RESTORE_PAUSE_STATE Flags,
                            ULONG *Length,
                        BYTE SaveBuffer[ ]);
        HRESULT ( STDMETHODCALLTYPE *SaveGpupContinue )(
            IGPUPMitigationDevice * This,
                       PLUID DeviceLuid,
                       GPUP_SAVE_RESTORE_PAUSE_STATE Flags,
                            ULONG *Length,
                        ULONG *RequestedLength,
                        BYTE SaveBuffer[ ]);
        HRESULT ( STDMETHODCALLTYPE *RestoreGpup )(
            IGPUPMitigationDevice * This,
                       PLUID DeviceLuid,
                       GPUP_SAVE_RESTORE_PAUSE_STATE Flags,
                       ULONG Length,
                       ULONG64 Offset,
                       ULONG64 TotalLength,
                       BYTE RestoreBuffer[ ]);
        END_INTERFACE
    } IGPUPMitigationDeviceVtbl;
    interface IGPUPMitigationDevice
    {
        CONST_VTBL struct IGPUPMitigationDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,VmGuid,DeviceLuid,DeviceHandle,VmBusHandle,GpupServices) )
    ( (This)->lpVtbl -> PowerTransitionComplete(This,DeviceLuid,GpupPowerState) )
    ( (This)->lpVtbl -> ReadInterceptedGpup(This,DeviceLuid,BarIndex,Offset,Length,ValueRead) )
    ( (This)->lpVtbl -> WriteInterceptedGpup(This,DeviceLuid,BarIndex,Offset,Length,WriteValue) )
    ( (This)->lpVtbl -> PauseGpup(This,DeviceLuid,Flags) )
    ( (This)->lpVtbl -> ResumeGpup(This,DeviceLuid,Flags) )
    ( (This)->lpVtbl -> SaveGpupBegin(This,DeviceLuid,Flags,Length,SaveBuffer) )
    ( (This)->lpVtbl -> SaveGpupContinue(This,DeviceLuid,Flags,Length,RequestedLength,SaveBuffer) )
    ( (This)->lpVtbl -> RestoreGpup(This,DeviceLuid,Flags,Length,Offset,TotalLength,RestoreBuffer) )
EXTERN_C const IID IID_IVmGPUPGuestMemoryAccess;
    typedef struct IVmGPUPGuestMemoryAccessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVmGPUPGuestMemoryAccess * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVmGPUPGuestMemoryAccess * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVmGPUPGuestMemoryAccess * This);
        HRESULT ( STDMETHODCALLTYPE *CreateRamApertureFromByteRange )(
            IVmGPUPGuestMemoryAccess * This,
                       UINT64 StartGpaAddress,
                       UINT64 ByteCount,
                       BOOL WriteProtected,
                        PVOID *MapAddress,
                        IUnknown **Aperture);
        HRESULT ( STDMETHODCALLTYPE *ReadRamBytes )(
            IVmGPUPGuestMemoryAccess * This,
                       GUEST_PHYSICAL_ADDRESS StartAddress,
                       UINT64 ByteCount,
                                 BYTE ClientBuffer[ ]);
        HRESULT ( STDMETHODCALLTYPE *WriteRamBytes )(
            IVmGPUPGuestMemoryAccess * This,
                       GUEST_PHYSICAL_ADDRESS StartAddress,
                       UINT64 ByteCount,
                                const BYTE ClientBuffer[ ]);
        END_INTERFACE
    } IVmGPUPGuestMemoryAccessVtbl;
    interface IVmGPUPGuestMemoryAccess
    {
        CONST_VTBL struct IVmGPUPGuestMemoryAccessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateRamApertureFromByteRange(This,StartGpaAddress,ByteCount,WriteProtected,MapAddress,Aperture) )
    ( (This)->lpVtbl -> ReadRamBytes(This,StartAddress,ByteCount,ClientBuffer) )
    ( (This)->lpVtbl -> WriteRamBytes(This,StartAddress,ByteCount,ClientBuffer) )
EXTERN_C const IID IID_IVmGPUPGuestMsiAccess;
    typedef struct IVmGPUPGuestMsiAccessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVmGPUPGuestMsiAccess * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVmGPUPGuestMsiAccess * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVmGPUPGuestMsiAccess * This);
        HRESULT ( STDMETHODCALLTYPE *DeliverInterrupt )(
            IVmGPUPGuestMsiAccess * This,
                       UINT64 DestAddr,
                       UINT32 Data);
        END_INTERFACE
    } IVmGPUPGuestMsiAccessVtbl;
    interface IVmGPUPGuestMsiAccess
    {
        CONST_VTBL struct IVmGPUPGuestMsiAccessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DeliverInterrupt(This,DestAddr,Data) )
}
