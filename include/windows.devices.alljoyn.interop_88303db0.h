#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWindowsDevicesAllJoynBusAttachmentInterop IWindowsDevicesAllJoynBusAttachmentInterop;
typedef interface IWindowsDevicesAllJoynBusAttachmentFactoryInterop IWindowsDevicesAllJoynBusAttachmentFactoryInterop;
typedef interface IWindowsDevicesAllJoynBusObjectInterop IWindowsDevicesAllJoynBusObjectInterop;
typedef interface IWindowsDevicesAllJoynBusObjectFactoryInterop IWindowsDevicesAllJoynBusObjectFactoryInterop;
#include "Inspectable.h"
extern "C"{
#if 0
typedef void *alljoyn_msgarg;
typedef const CHAR *PCSTR;
#endif
#include <alljoyn_c\BusAttachment.h>
#include <alljoyn_c\BusObject.h>
#include <alljoyn_c\MsgArg.h>
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ealljoyn2Einterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ealljoyn2Einterop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWindowsDevicesAllJoynBusAttachmentInterop;
    typedef struct IWindowsDevicesAllJoynBusAttachmentInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWindowsDevicesAllJoynBusAttachmentInterop * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWindowsDevicesAllJoynBusAttachmentInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWindowsDevicesAllJoynBusAttachmentInterop * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IWindowsDevicesAllJoynBusAttachmentInterop * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IWindowsDevicesAllJoynBusAttachmentInterop * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IWindowsDevicesAllJoynBusAttachmentInterop * This,
                        TrustLevel *trustLevel);
                        HRESULT ( STDMETHODCALLTYPE *get_Win32Handle )(
            IWindowsDevicesAllJoynBusAttachmentInterop * This,
                                UINT64 *value);
        END_INTERFACE
    } IWindowsDevicesAllJoynBusAttachmentInteropVtbl;
    interface IWindowsDevicesAllJoynBusAttachmentInterop
    {
        CONST_VTBL struct IWindowsDevicesAllJoynBusAttachmentInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Win32Handle(This,value) )
EXTERN_C const IID IID_IWindowsDevicesAllJoynBusAttachmentFactoryInterop;
    typedef struct IWindowsDevicesAllJoynBusAttachmentFactoryInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWindowsDevicesAllJoynBusAttachmentFactoryInterop * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWindowsDevicesAllJoynBusAttachmentFactoryInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWindowsDevicesAllJoynBusAttachmentFactoryInterop * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IWindowsDevicesAllJoynBusAttachmentFactoryInterop * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IWindowsDevicesAllJoynBusAttachmentFactoryInterop * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IWindowsDevicesAllJoynBusAttachmentFactoryInterop * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *CreateFromWin32Handle )(
            IWindowsDevicesAllJoynBusAttachmentFactoryInterop * This,
                       UINT64 win32handle,
                       boolean enableAboutData,
                       REFIID riid,
                                void **ppv);
        END_INTERFACE
    } IWindowsDevicesAllJoynBusAttachmentFactoryInteropVtbl;
    interface IWindowsDevicesAllJoynBusAttachmentFactoryInterop
    {
        CONST_VTBL struct IWindowsDevicesAllJoynBusAttachmentFactoryInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> CreateFromWin32Handle(This,win32handle,enableAboutData,riid,ppv) )
EXTERN_C const IID IID_IWindowsDevicesAllJoynBusObjectInterop;
    typedef struct IWindowsDevicesAllJoynBusObjectInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWindowsDevicesAllJoynBusObjectInterop * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWindowsDevicesAllJoynBusObjectInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWindowsDevicesAllJoynBusObjectInterop * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IWindowsDevicesAllJoynBusObjectInterop * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IWindowsDevicesAllJoynBusObjectInterop * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IWindowsDevicesAllJoynBusObjectInterop * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyGetHandler )(
            IWindowsDevicesAllJoynBusObjectInterop * This,
                       PVOID context,
                       HSTRING interfaceName,
                       INT32 ( STDMETHODCALLTYPE *callback )(
                PVOID context,
                HSTRING interfaceName,
                HSTRING propertyName,
                alljoyn_msgarg value));
        HRESULT ( STDMETHODCALLTYPE *AddPropertySetHandler )(
            IWindowsDevicesAllJoynBusObjectInterop * This,
                       PVOID context,
                       HSTRING interfaceName,
                       INT32 ( STDMETHODCALLTYPE *callback )(
                PVOID context,
                HSTRING interfaceName,
                HSTRING propertyName,
                alljoyn_msgarg value));
                        HRESULT ( STDMETHODCALLTYPE *get_Win32Handle )(
            IWindowsDevicesAllJoynBusObjectInterop * This,
                                UINT64 *value);
        END_INTERFACE
    } IWindowsDevicesAllJoynBusObjectInteropVtbl;
    interface IWindowsDevicesAllJoynBusObjectInterop
    {
        CONST_VTBL struct IWindowsDevicesAllJoynBusObjectInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> AddPropertyGetHandler(This,context,interfaceName,callback) )
    ( (This)->lpVtbl -> AddPropertySetHandler(This,context,interfaceName,callback) )
    ( (This)->lpVtbl -> get_Win32Handle(This,value) )
EXTERN_C const IID IID_IWindowsDevicesAllJoynBusObjectFactoryInterop;
    typedef struct IWindowsDevicesAllJoynBusObjectFactoryInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWindowsDevicesAllJoynBusObjectFactoryInterop * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWindowsDevicesAllJoynBusObjectFactoryInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWindowsDevicesAllJoynBusObjectFactoryInterop * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IWindowsDevicesAllJoynBusObjectFactoryInterop * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IWindowsDevicesAllJoynBusObjectFactoryInterop * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IWindowsDevicesAllJoynBusObjectFactoryInterop * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *CreateFromWin32Handle )(
            IWindowsDevicesAllJoynBusObjectFactoryInterop * This,
                       UINT64 win32handle,
                       REFIID riid,
                                void **ppv);
        END_INTERFACE
    } IWindowsDevicesAllJoynBusObjectFactoryInteropVtbl;
    interface IWindowsDevicesAllJoynBusObjectFactoryInterop
    {
        CONST_VTBL struct IWindowsDevicesAllJoynBusObjectFactoryInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> CreateFromWin32Handle(This,win32handle,riid,ppv) )
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ealljoyn2Einterop_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ealljoyn2Einterop_0000_0004_v0_0_s_ifspec;
}
