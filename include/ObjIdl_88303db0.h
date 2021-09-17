#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMarshal IMarshal;
typedef interface INoMarshal INoMarshal;
typedef interface IAgileObject IAgileObject;
typedef interface IActivationFilter IActivationFilter;
typedef interface IMarshal2 IMarshal2;
typedef interface IMalloc IMalloc;
typedef interface IStdMarshalInfo IStdMarshalInfo;
typedef interface IExternalConnection IExternalConnection;
typedef interface IMultiQI IMultiQI;
typedef interface AsyncIMultiQI AsyncIMultiQI;
typedef interface IInternalUnknown IInternalUnknown;
typedef interface IEnumUnknown IEnumUnknown;
typedef interface IEnumString IEnumString;
typedef interface ISequentialStream ISequentialStream;
typedef interface IStream IStream;
typedef interface IRpcChannelBuffer IRpcChannelBuffer;
typedef interface IRpcChannelBuffer2 IRpcChannelBuffer2;
typedef interface IAsyncRpcChannelBuffer IAsyncRpcChannelBuffer;
typedef interface IRpcChannelBuffer3 IRpcChannelBuffer3;
typedef interface IRpcSyntaxNegotiate IRpcSyntaxNegotiate;
typedef interface IRpcProxyBuffer IRpcProxyBuffer;
typedef interface IRpcStubBuffer IRpcStubBuffer;
typedef interface IPSFactoryBuffer IPSFactoryBuffer;
typedef interface IChannelHook IChannelHook;
typedef interface IClientSecurity IClientSecurity;
typedef interface IServerSecurity IServerSecurity;
typedef interface IRpcOptions IRpcOptions;
typedef interface IGlobalOptions IGlobalOptions;
typedef interface ISurrogate ISurrogate;
typedef interface IGlobalInterfaceTable IGlobalInterfaceTable;
typedef interface ISynchronize ISynchronize;
typedef interface ISynchronizeHandle ISynchronizeHandle;
typedef interface ISynchronizeEvent ISynchronizeEvent;
typedef interface ISynchronizeContainer ISynchronizeContainer;
typedef interface ISynchronizeMutex ISynchronizeMutex;
typedef interface ICancelMethodCalls ICancelMethodCalls;
typedef interface IAsyncManager IAsyncManager;
typedef interface ICallFactory ICallFactory;
typedef interface IRpcHelper IRpcHelper;
typedef interface IReleaseMarshalBuffers IReleaseMarshalBuffers;
typedef interface IWaitMultiple IWaitMultiple;
typedef interface IAddrTrackingControl IAddrTrackingControl;
typedef interface IAddrExclusionControl IAddrExclusionControl;
typedef interface IPipeByte IPipeByte;
typedef interface AsyncIPipeByte AsyncIPipeByte;
typedef interface IPipeLong IPipeLong;
typedef interface AsyncIPipeLong AsyncIPipeLong;
typedef interface IPipeDouble IPipeDouble;
typedef interface AsyncIPipeDouble AsyncIPipeDouble;
typedef interface IEnumContextProps IEnumContextProps;
typedef interface IContext IContext;
typedef interface IObjContext IObjContext;
typedef interface IComThreadingInfo IComThreadingInfo;
typedef interface IProcessInitControl IProcessInitControl;
typedef interface IFastRundown IFastRundown;
typedef interface IMarshalingStream IMarshalingStream;
typedef interface IAgileReference IAgileReference;
typedef interface IMallocSpy IMallocSpy;
typedef interface IBindCtx IBindCtx;
typedef interface IEnumMoniker IEnumMoniker;
typedef interface IRunnableObject IRunnableObject;
typedef interface IRunningObjectTable IRunningObjectTable;
typedef interface IPersist IPersist;
typedef interface IPersistStream IPersistStream;
typedef interface IMoniker IMoniker;
typedef interface IROTData IROTData;
typedef interface IEnumSTATSTG IEnumSTATSTG;
typedef interface IStorage IStorage;
typedef interface IPersistFile IPersistFile;
typedef interface IPersistStorage IPersistStorage;
typedef interface ILockBytes ILockBytes;
typedef interface IEnumFORMATETC IEnumFORMATETC;
typedef interface IEnumSTATDATA IEnumSTATDATA;
typedef interface IRootStorage IRootStorage;
typedef interface IAdviseSink IAdviseSink;
typedef interface AsyncIAdviseSink AsyncIAdviseSink;
typedef interface IAdviseSink2 IAdviseSink2;
typedef interface AsyncIAdviseSink2 AsyncIAdviseSink2;
typedef interface IDataObject IDataObject;
typedef interface IDataAdviseHolder IDataAdviseHolder;
typedef interface IMessageFilter IMessageFilter;
typedef interface IClassActivator IClassActivator;
typedef interface IFillLockBytes IFillLockBytes;
typedef interface IProgressNotify IProgressNotify;
typedef interface ILayoutStorage ILayoutStorage;
typedef interface IBlockingLock IBlockingLock;
typedef interface ITimeAndNoticeControl ITimeAndNoticeControl;
typedef interface IOplockStorage IOplockStorage;
typedef interface IDirectWriterLock IDirectWriterLock;
typedef interface IUrlMon IUrlMon;
typedef interface IForegroundTransfer IForegroundTransfer;
typedef interface IThumbnailExtractor IThumbnailExtractor;
typedef interface IDummyHICONIncluder IDummyHICONIncluder;
typedef interface IProcessLock IProcessLock;
typedef interface ISurrogateService ISurrogateService;
typedef interface IInitializeSpy IInitializeSpy;
typedef interface IApartmentShutdown IApartmentShutdown;
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#include <winapifamily.h>
#include <limits.h>
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct _COSERVERINFO
    {
    DWORD dwReserved1;
    LPWSTR pwszName;
    COAUTHINFO *pAuthInfo;
    DWORD dwReserved2;
    } COSERVERINFO;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0000_v0_0_s_ifspec;
typedef IMarshal *LPMARSHAL;
EXTERN_C const IID IID_IMarshal;
    typedef struct IMarshalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMarshal * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMarshal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMarshal * This);
        HRESULT ( STDMETHODCALLTYPE *GetUnmarshalClass )(
            IMarshal * This,
            _In_ REFIID riid,
            _In_opt_ void *pv,
            _In_ DWORD dwDestContext,
            _Reserved_ void *pvDestContext,
            _In_ DWORD mshlflags,
            _Out_ CLSID *pCid);
        HRESULT ( STDMETHODCALLTYPE *GetMarshalSizeMax )(
            IMarshal * This,
            _In_ REFIID riid,
            _In_opt_ void *pv,
            _In_ DWORD dwDestContext,
            _Reserved_ void *pvDestContext,
            _In_ DWORD mshlflags,
            _Out_ DWORD *pSize);
        HRESULT ( STDMETHODCALLTYPE *MarshalInterface )(
            IMarshal * This,
            _In_ IStream *pStm,
            _In_ REFIID riid,
            _In_opt_ void *pv,
            _In_ DWORD dwDestContext,
            _Reserved_ void *pvDestContext,
            _In_ DWORD mshlflags);
        HRESULT ( STDMETHODCALLTYPE *UnmarshalInterface )(
            IMarshal * This,
            _In_ IStream *pStm,
            _In_ REFIID riid,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *ReleaseMarshalData )(
            IMarshal * This,
            _In_ IStream *pStm);
        HRESULT ( STDMETHODCALLTYPE *DisconnectObject )(
            IMarshal * This,
            _In_ DWORD dwReserved);
        END_INTERFACE
    } IMarshalVtbl;
    interface IMarshal
    {
        CONST_VTBL struct IMarshalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUnmarshalClass(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pCid) )
    ( (This)->lpVtbl -> GetMarshalSizeMax(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pSize) )
    ( (This)->lpVtbl -> MarshalInterface(This,pStm,riid,pv,dwDestContext,pvDestContext,mshlflags) )
    ( (This)->lpVtbl -> UnmarshalInterface(This,pStm,riid,ppv) )
    ( (This)->lpVtbl -> ReleaseMarshalData(This,pStm) )
    ( (This)->lpVtbl -> DisconnectObject(This,dwReserved) )
EXTERN_C const IID IID_INoMarshal;
    typedef struct INoMarshalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INoMarshal * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INoMarshal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INoMarshal * This);
        END_INTERFACE
    } INoMarshalVtbl;
    interface INoMarshal
    {
        CONST_VTBL struct INoMarshalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
EXTERN_C const IID IID_IAgileObject;
    typedef struct IAgileObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAgileObject * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAgileObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAgileObject * This);
        END_INTERFACE
    } IAgileObjectVtbl;
    interface IAgileObject
    {
        CONST_VTBL struct IAgileObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0003_v0_0_s_ifspec;
typedef
enum tagACTIVATIONTYPE
    {
        ACTIVATIONTYPE_UNCATEGORIZED = 0,
        ACTIVATIONTYPE_FROM_MONIKER = 0x1,
        ACTIVATIONTYPE_FROM_DATA = 0x2,
        ACTIVATIONTYPE_FROM_STORAGE = 0x4,
        ACTIVATIONTYPE_FROM_STREAM = 0x8,
        ACTIVATIONTYPE_FROM_FILE = 0x10
    } ACTIVATIONTYPE;
EXTERN_C const IID IID_IActivationFilter;
    typedef struct IActivationFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IActivationFilter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IActivationFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IActivationFilter * This);
        HRESULT ( STDMETHODCALLTYPE *HandleActivation )(
            IActivationFilter * This,
                       DWORD dwActivationType,
                       REFCLSID rclsid,
                        CLSID *pReplacementClsId);
        END_INTERFACE
    } IActivationFilterVtbl;
    interface IActivationFilter
    {
        CONST_VTBL struct IActivationFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HandleActivation(This,dwActivationType,rclsid,pReplacementClsId) )
typedef IMarshal2 *LPMARSHAL2;
EXTERN_C const IID IID_IMarshal2;
    typedef struct IMarshal2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMarshal2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMarshal2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMarshal2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetUnmarshalClass )(
            IMarshal2 * This,
            _In_ REFIID riid,
            _In_opt_ void *pv,
            _In_ DWORD dwDestContext,
            _Reserved_ void *pvDestContext,
            _In_ DWORD mshlflags,
            _Out_ CLSID *pCid);
        HRESULT ( STDMETHODCALLTYPE *GetMarshalSizeMax )(
            IMarshal2 * This,
            _In_ REFIID riid,
            _In_opt_ void *pv,
            _In_ DWORD dwDestContext,
            _Reserved_ void *pvDestContext,
            _In_ DWORD mshlflags,
            _Out_ DWORD *pSize);
        HRESULT ( STDMETHODCALLTYPE *MarshalInterface )(
            IMarshal2 * This,
            _In_ IStream *pStm,
            _In_ REFIID riid,
            _In_opt_ void *pv,
            _In_ DWORD dwDestContext,
            _Reserved_ void *pvDestContext,
            _In_ DWORD mshlflags);
        HRESULT ( STDMETHODCALLTYPE *UnmarshalInterface )(
            IMarshal2 * This,
            _In_ IStream *pStm,
            _In_ REFIID riid,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *ReleaseMarshalData )(
            IMarshal2 * This,
            _In_ IStream *pStm);
        HRESULT ( STDMETHODCALLTYPE *DisconnectObject )(
            IMarshal2 * This,
            _In_ DWORD dwReserved);
        END_INTERFACE
    } IMarshal2Vtbl;
    interface IMarshal2
    {
        CONST_VTBL struct IMarshal2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUnmarshalClass(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pCid) )
    ( (This)->lpVtbl -> GetMarshalSizeMax(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pSize) )
    ( (This)->lpVtbl -> MarshalInterface(This,pStm,riid,pv,dwDestContext,pvDestContext,mshlflags) )
    ( (This)->lpVtbl -> UnmarshalInterface(This,pStm,riid,ppv) )
    ( (This)->lpVtbl -> ReleaseMarshalData(This,pStm) )
    ( (This)->lpVtbl -> DisconnectObject(This,dwReserved) )
typedef IMalloc *LPMALLOC;
EXTERN_C const IID IID_IMalloc;
    typedef struct IMallocVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMalloc * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMalloc * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMalloc * This);
        void *( STDMETHODCALLTYPE *Alloc )(
            IMalloc * This,
            _In_ SIZE_T cb);
        void *( STDMETHODCALLTYPE *Realloc )(
            IMalloc * This,
            _In_opt_ void *pv,
            _In_ SIZE_T cb);
        void ( STDMETHODCALLTYPE *Free )(
            IMalloc * This,
            _In_opt_ void *pv);
        SIZE_T ( STDMETHODCALLTYPE *GetSize )(
            IMalloc * This,
            _In_opt_ _Post_writable_byte_size_(return) void *pv);
        int ( STDMETHODCALLTYPE *DidAlloc )(
            IMalloc * This,
            _In_opt_ void *pv);
        void ( STDMETHODCALLTYPE *HeapMinimize )(
            IMalloc * This);
        END_INTERFACE
    } IMallocVtbl;
    interface IMalloc
    {
        CONST_VTBL struct IMallocVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Alloc(This,cb) )
    ( (This)->lpVtbl -> Realloc(This,pv,cb) )
    ( (This)->lpVtbl -> Free(This,pv) )
    ( (This)->lpVtbl -> GetSize(This,pv) )
    ( (This)->lpVtbl -> DidAlloc(This,pv) )
    ( (This)->lpVtbl -> HeapMinimize(This) )
typedef IStdMarshalInfo *LPSTDMARSHALINFO;
EXTERN_C const IID IID_IStdMarshalInfo;
    typedef struct IStdMarshalInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IStdMarshalInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IStdMarshalInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IStdMarshalInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassForHandler )(
            IStdMarshalInfo * This,
            _In_ DWORD dwDestContext,
            _Reserved_ void *pvDestContext,
            _Out_ CLSID *pClsid);
        END_INTERFACE
    } IStdMarshalInfoVtbl;
    interface IStdMarshalInfo
    {
        CONST_VTBL struct IStdMarshalInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassForHandler(This,dwDestContext,pvDestContext,pClsid) )
typedef IExternalConnection *LPEXTERNALCONNECTION;
typedef
enum tagEXTCONN
    {
        EXTCONN_STRONG = 0x1,
        EXTCONN_WEAK = 0x2,
        EXTCONN_CALLABLE = 0x4
    } EXTCONN;
EXTERN_C const IID IID_IExternalConnection;
    typedef struct IExternalConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IExternalConnection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IExternalConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IExternalConnection * This);
        DWORD ( STDMETHODCALLTYPE *AddConnection )(
            IExternalConnection * This,
            _In_ DWORD extconn,
            _In_ DWORD reserved);
        DWORD ( STDMETHODCALLTYPE *ReleaseConnection )(
            IExternalConnection * This,
            _In_ DWORD extconn,
            _In_ DWORD reserved,
            _In_ BOOL fLastReleaseCloses);
        END_INTERFACE
    } IExternalConnectionVtbl;
    interface IExternalConnection
    {
        CONST_VTBL struct IExternalConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddConnection(This,extconn,reserved) )
    ( (This)->lpVtbl -> ReleaseConnection(This,extconn,reserved,fLastReleaseCloses) )
typedef __RPC_unique_pointer IMultiQI *LPMULTIQI;
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct tagMULTI_QI
    {
    const IID *pIID;
    IUnknown *pItf;
    HRESULT hr;
    } MULTI_QI;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IMultiQI;
    typedef struct IMultiQIVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMultiQI * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMultiQI * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMultiQI * This);
        HRESULT ( STDMETHODCALLTYPE *QueryMultipleInterfaces )(
            IMultiQI * This,
            _In_ ULONG cMQIs,
            _Inout_updates_(cMQIs) MULTI_QI *pMQIs);
        END_INTERFACE
    } IMultiQIVtbl;
    interface IMultiQI
    {
        CONST_VTBL struct IMultiQIVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryMultipleInterfaces(This,cMQIs,pMQIs) )
EXTERN_C const IID IID_AsyncIMultiQI;
    typedef struct AsyncIMultiQIVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            AsyncIMultiQI * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            AsyncIMultiQI * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            AsyncIMultiQI * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_QueryMultipleInterfaces )(
            AsyncIMultiQI * This,
            _In_ ULONG cMQIs,
            _Inout_updates_(cMQIs) MULTI_QI *pMQIs);
        HRESULT ( STDMETHODCALLTYPE *Finish_QueryMultipleInterfaces )(
            AsyncIMultiQI * This,
            _Inout_updates_(cMQIs) MULTI_QI *pMQIs);
        END_INTERFACE
    } AsyncIMultiQIVtbl;
    interface AsyncIMultiQI
    {
        CONST_VTBL struct AsyncIMultiQIVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_QueryMultipleInterfaces(This,cMQIs,pMQIs) )
    ( (This)->lpVtbl -> Finish_QueryMultipleInterfaces(This,pMQIs) )
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IInternalUnknown;
    typedef struct IInternalUnknownVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternalUnknown * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternalUnknown * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternalUnknown * This);
        HRESULT ( STDMETHODCALLTYPE *QueryInternalInterface )(
            IInternalUnknown * This,
            _In_ REFIID riid,
            _Outptr_ void **ppv);
        END_INTERFACE
    } IInternalUnknownVtbl;
    interface IInternalUnknown
    {
        CONST_VTBL struct IInternalUnknownVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryInternalInterface(This,riid,ppv) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0010_v0_0_s_ifspec;
typedef __RPC_unique_pointer IEnumUnknown *LPENUMUNKNOWN;
EXTERN_C const IID IID_IEnumUnknown;
    typedef struct IEnumUnknownVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumUnknown * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumUnknown * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumUnknown * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumUnknown * This,
            _In_ ULONG celt,
            _Out_writes_to_(celt,*pceltFetched) IUnknown **rgelt,
            _Out_opt_ ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumUnknown * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumUnknown * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumUnknown * This,
                        __RPC__deref_out_opt IEnumUnknown **ppenum);
        END_INTERFACE
    } IEnumUnknownVtbl;
    interface IEnumUnknown
    {
        CONST_VTBL struct IEnumUnknownVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
                HRESULT STDMETHODCALLTYPE IEnumUnknown_RemoteNext_Proxy(
    __RPC__in IEnumUnknown * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IUnknown **rgelt,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumUnknown_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef __RPC_unique_pointer IEnumString *LPENUMSTRING;
EXTERN_C const IID IID_IEnumString;
    typedef struct IEnumStringVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumString * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumString * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumString * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumString * This,
                       ULONG celt,
            _Out_writes_to_(celt,*pceltFetched) LPOLESTR *rgelt,
            _Out_opt_ ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumString * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumString * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumString * This,
                        __RPC__deref_out_opt IEnumString **ppenum);
        END_INTERFACE
    } IEnumStringVtbl;
    interface IEnumString
    {
        CONST_VTBL struct IEnumStringVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
                HRESULT STDMETHODCALLTYPE IEnumString_RemoteNext_Proxy(
    __RPC__in IEnumString * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) LPOLESTR *rgelt,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumString_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_ISequentialStream;
    typedef struct ISequentialStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISequentialStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISequentialStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISequentialStream * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            ISequentialStream * This,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *Write )(
            ISequentialStream * This,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbWritten);
        END_INTERFACE
    } ISequentialStreamVtbl;
    interface ISequentialStream
    {
        CONST_VTBL struct ISequentialStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
                HRESULT STDMETHODCALLTYPE ISequentialStream_RemoteRead_Proxy(
    __RPC__in ISequentialStream * This,
                                    __RPC__out_ecount_part(cb, *pcbRead) byte *pv,
               ULONG cb,
                __RPC__out ULONG *pcbRead);
void __RPC_STUB ISequentialStream_RemoteRead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ISequentialStream_RemoteWrite_Proxy(
    __RPC__in ISequentialStream * This,
                        __RPC__in_ecount_full(cb) const byte *pv,
               ULONG cb,
                __RPC__out ULONG *pcbWritten);
void __RPC_STUB ISequentialStream_RemoteWrite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef __RPC_unique_pointer IStream *LPSTREAM;
typedef struct tagSTATSTG
    {
    LPOLESTR pwcsName;
    DWORD type;
    ULARGE_INTEGER cbSize;
    FILETIME mtime;
    FILETIME ctime;
    FILETIME atime;
    DWORD grfMode;
    DWORD grfLocksSupported;
    CLSID clsid;
    DWORD grfStateBits;
    DWORD reserved;
    } STATSTG;
typedef
enum tagSTGTY
    {
        STGTY_STORAGE = 1,
        STGTY_STREAM = 2,
        STGTY_LOCKBYTES = 3,
        STGTY_PROPERTY = 4
    } STGTY;
typedef
enum tagSTREAM_SEEK
    {
        STREAM_SEEK_SET = 0,
        STREAM_SEEK_CUR = 1,
        STREAM_SEEK_END = 2
    } STREAM_SEEK;
typedef
enum tagLOCKTYPE
    {
        LOCK_WRITE = 1,
        LOCK_EXCLUSIVE = 2,
        LOCK_ONLYONCE = 4
    } LOCKTYPE;
EXTERN_C const IID IID_IStream;
    typedef struct IStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStream * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            IStream * This,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *Write )(
            IStream * This,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbWritten);
                      HRESULT ( STDMETHODCALLTYPE *Seek )(
            IStream * This,
                       LARGE_INTEGER dlibMove,
                       DWORD dwOrigin,
            _Out_opt_ ULARGE_INTEGER *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *SetSize )(
            __RPC__in IStream * This,
                       ULARGE_INTEGER libNewSize);
                      HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            IStream * This,
            _In_ IStream *pstm,
                       ULARGE_INTEGER cb,
            _Out_opt_ ULARGE_INTEGER *pcbRead,
            _Out_opt_ ULARGE_INTEGER *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IStream * This,
                       DWORD grfCommitFlags);
        HRESULT ( STDMETHODCALLTYPE *Revert )(
            __RPC__in IStream * This);
        HRESULT ( STDMETHODCALLTYPE *LockRegion )(
            __RPC__in IStream * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )(
            __RPC__in IStream * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            __RPC__in IStream * This,
                        __RPC__out STATSTG *pstatstg,
                       DWORD grfStatFlag);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IStream * This,
                        __RPC__deref_out_opt IStream **ppstm);
        END_INTERFACE
    } IStreamVtbl;
    interface IStream
    {
        CONST_VTBL struct IStreamVtbl *lpVtbl;
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
                HRESULT STDMETHODCALLTYPE IStream_RemoteSeek_Proxy(
    __RPC__in IStream * This,
               LARGE_INTEGER dlibMove,
               DWORD dwOrigin,
                __RPC__out ULARGE_INTEGER *plibNewPosition);
void __RPC_STUB IStream_RemoteSeek_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IStream_RemoteCopyTo_Proxy(
    __RPC__in IStream * This,
                       __RPC__in_opt IStream *pstm,
               ULARGE_INTEGER cb,
                __RPC__out ULARGE_INTEGER *pcbRead,
                __RPC__out ULARGE_INTEGER *pcbWritten);
void __RPC_STUB IStream_RemoteCopyTo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef ULONG RPCOLEDATAREP;
typedef struct tagRPCOLEMESSAGE
    {
    void *reserved1;
    RPCOLEDATAREP dataRepresentation;
    void *Buffer;
    ULONG cbBuffer;
    ULONG iMethod;
    void *reserved2[ 5 ];
    ULONG rpcFlags;
    } RPCOLEMESSAGE;
typedef RPCOLEMESSAGE *PRPCOLEMESSAGE;
EXTERN_C const IID IID_IRpcChannelBuffer;
    typedef struct IRpcChannelBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRpcChannelBuffer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRpcChannelBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRpcChannelBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            IRpcChannelBuffer * This,
            _Inout_ RPCOLEMESSAGE *pMessage,
            _In_ REFIID riid);
        HRESULT ( STDMETHODCALLTYPE *SendReceive )(
            IRpcChannelBuffer * This,
            _Inout_ RPCOLEMESSAGE *pMessage,
            _Out_opt_ ULONG *pStatus);
        HRESULT ( STDMETHODCALLTYPE *FreeBuffer )(
            IRpcChannelBuffer * This,
            _Inout_ RPCOLEMESSAGE *pMessage);
        HRESULT ( STDMETHODCALLTYPE *GetDestCtx )(
            IRpcChannelBuffer * This,
            _Out_ DWORD *pdwDestContext,
            _Outptr_result_maybenull_ void **ppvDestContext);
        HRESULT ( STDMETHODCALLTYPE *IsConnected )(
            IRpcChannelBuffer * This);
        END_INTERFACE
    } IRpcChannelBufferVtbl;
    interface IRpcChannelBuffer
    {
        CONST_VTBL struct IRpcChannelBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBuffer(This,pMessage,riid) )
    ( (This)->lpVtbl -> SendReceive(This,pMessage,pStatus) )
    ( (This)->lpVtbl -> FreeBuffer(This,pMessage) )
    ( (This)->lpVtbl -> GetDestCtx(This,pdwDestContext,ppvDestContext) )
    ( (This)->lpVtbl -> IsConnected(This) )
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0015_v0_0_s_ifspec;
EXTERN_C const IID IID_IRpcChannelBuffer2;
    typedef struct IRpcChannelBuffer2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRpcChannelBuffer2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRpcChannelBuffer2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRpcChannelBuffer2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            IRpcChannelBuffer2 * This,
            _Inout_ RPCOLEMESSAGE *pMessage,
            _In_ REFIID riid);
        HRESULT ( STDMETHODCALLTYPE *SendReceive )(
            IRpcChannelBuffer2 * This,
            _Inout_ RPCOLEMESSAGE *pMessage,
            _Out_opt_ ULONG *pStatus);
        HRESULT ( STDMETHODCALLTYPE *FreeBuffer )(
            IRpcChannelBuffer2 * This,
            _Inout_ RPCOLEMESSAGE *pMessage);
        HRESULT ( STDMETHODCALLTYPE *GetDestCtx )(
            IRpcChannelBuffer2 * This,
            _Out_ DWORD *pdwDestContext,
            _Outptr_result_maybenull_ void **ppvDestContext);
        HRESULT ( STDMETHODCALLTYPE *IsConnected )(
            IRpcChannelBuffer2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolVersion )(
            IRpcChannelBuffer2 * This,
            _Out_ DWORD *pdwVersion);
        END_INTERFACE
    } IRpcChannelBuffer2Vtbl;
    interface IRpcChannelBuffer2
    {
        CONST_VTBL struct IRpcChannelBuffer2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBuffer(This,pMessage,riid) )
    ( (This)->lpVtbl -> SendReceive(This,pMessage,pStatus) )
    ( (This)->lpVtbl -> FreeBuffer(This,pMessage) )
    ( (This)->lpVtbl -> GetDestCtx(This,pdwDestContext,ppvDestContext) )
    ( (This)->lpVtbl -> IsConnected(This) )
    ( (This)->lpVtbl -> GetProtocolVersion(This,pdwVersion) )
EXTERN_C const IID IID_IAsyncRpcChannelBuffer;
    typedef struct IAsyncRpcChannelBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAsyncRpcChannelBuffer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAsyncRpcChannelBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAsyncRpcChannelBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            IAsyncRpcChannelBuffer * This,
            _Inout_ RPCOLEMESSAGE *pMessage,
            _In_ REFIID riid);
        HRESULT ( STDMETHODCALLTYPE *SendReceive )(
            IAsyncRpcChannelBuffer * This,
            _Inout_ RPCOLEMESSAGE *pMessage,
            _Out_opt_ ULONG *pStatus);
        HRESULT ( STDMETHODCALLTYPE *FreeBuffer )(
            IAsyncRpcChannelBuffer * This,
            _Inout_ RPCOLEMESSAGE *pMessage);
        HRESULT ( STDMETHODCALLTYPE *GetDestCtx )(
            IAsyncRpcChannelBuffer * This,
            _Out_ DWORD *pdwDestContext,
            _Outptr_result_maybenull_ void **ppvDestContext);
        HRESULT ( STDMETHODCALLTYPE *IsConnected )(
            IAsyncRpcChannelBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolVersion )(
            IAsyncRpcChannelBuffer * This,
            _Out_ DWORD *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *Send )(
            IAsyncRpcChannelBuffer * This,
            _Inout_ RPCOLEMESSAGE *pMsg,
            _In_ ISynchronize *pSync,
            _Out_ ULONG *pulStatus);
        HRESULT ( STDMETHODCALLTYPE *Receive )(
            IAsyncRpcChannelBuffer * This,
            _Inout_ RPCOLEMESSAGE *pMsg,
            _Out_ ULONG *pulStatus);
        HRESULT ( STDMETHODCALLTYPE *GetDestCtxEx )(
            IAsyncRpcChannelBuffer * This,
            _In_ RPCOLEMESSAGE *pMsg,
            _Out_ DWORD *pdwDestContext,
            _Outptr_opt_result_maybenull_ void **ppvDestContext);
        END_INTERFACE
    } IAsyncRpcChannelBufferVtbl;
    interface IAsyncRpcChannelBuffer
    {
        CONST_VTBL struct IAsyncRpcChannelBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBuffer(This,pMessage,riid) )
    ( (This)->lpVtbl -> SendReceive(This,pMessage,pStatus) )
    ( (This)->lpVtbl -> FreeBuffer(This,pMessage) )
    ( (This)->lpVtbl -> GetDestCtx(This,pdwDestContext,ppvDestContext) )
    ( (This)->lpVtbl -> IsConnected(This) )
    ( (This)->lpVtbl -> GetProtocolVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> Send(This,pMsg,pSync,pulStatus) )
    ( (This)->lpVtbl -> Receive(This,pMsg,pulStatus) )
    ( (This)->lpVtbl -> GetDestCtxEx(This,pMsg,pdwDestContext,ppvDestContext) )
EXTERN_C const IID IID_IRpcChannelBuffer3;
    typedef struct IRpcChannelBuffer3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRpcChannelBuffer3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRpcChannelBuffer3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRpcChannelBuffer3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            IRpcChannelBuffer3 * This,
            _Inout_ RPCOLEMESSAGE *pMessage,
            _In_ REFIID riid);
        HRESULT ( STDMETHODCALLTYPE *SendReceive )(
            IRpcChannelBuffer3 * This,
            _Inout_ RPCOLEMESSAGE *pMessage,
            _Out_opt_ ULONG *pStatus);
        HRESULT ( STDMETHODCALLTYPE *FreeBuffer )(
            IRpcChannelBuffer3 * This,
            _Inout_ RPCOLEMESSAGE *pMessage);
        HRESULT ( STDMETHODCALLTYPE *GetDestCtx )(
            IRpcChannelBuffer3 * This,
            _Out_ DWORD *pdwDestContext,
            _Outptr_result_maybenull_ void **ppvDestContext);
        HRESULT ( STDMETHODCALLTYPE *IsConnected )(
            IRpcChannelBuffer3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolVersion )(
            IRpcChannelBuffer3 * This,
            _Out_ DWORD *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *Send )(
            IRpcChannelBuffer3 * This,
            _Inout_ RPCOLEMESSAGE *pMsg,
            _Out_ ULONG *pulStatus);
        HRESULT ( STDMETHODCALLTYPE *Receive )(
            IRpcChannelBuffer3 * This,
            _Inout_ RPCOLEMESSAGE *pMsg,
            _In_ ULONG ulSize,
            _Out_ ULONG *pulStatus);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            IRpcChannelBuffer3 * This,
            _Inout_ RPCOLEMESSAGE *pMsg);
        HRESULT ( STDMETHODCALLTYPE *GetCallContext )(
            IRpcChannelBuffer3 * This,
            _In_ RPCOLEMESSAGE *pMsg,
            _In_ REFIID riid,
            _Outptr_ void **pInterface);
        HRESULT ( STDMETHODCALLTYPE *GetDestCtxEx )(
            IRpcChannelBuffer3 * This,
            _In_ RPCOLEMESSAGE *pMsg,
            _Out_ DWORD *pdwDestContext,
            _Outptr_opt_result_maybenull_ void **ppvDestContext);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            IRpcChannelBuffer3 * This,
            _In_ RPCOLEMESSAGE *pMsg,
            _Out_ DWORD *pState);
        HRESULT ( STDMETHODCALLTYPE *RegisterAsync )(
            IRpcChannelBuffer3 * This,
            _Inout_ RPCOLEMESSAGE *pMsg,
            _In_ IAsyncManager *pAsyncMgr);
        END_INTERFACE
    } IRpcChannelBuffer3Vtbl;
    interface IRpcChannelBuffer3
    {
        CONST_VTBL struct IRpcChannelBuffer3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBuffer(This,pMessage,riid) )
    ( (This)->lpVtbl -> SendReceive(This,pMessage,pStatus) )
    ( (This)->lpVtbl -> FreeBuffer(This,pMessage) )
    ( (This)->lpVtbl -> GetDestCtx(This,pdwDestContext,ppvDestContext) )
    ( (This)->lpVtbl -> IsConnected(This) )
    ( (This)->lpVtbl -> GetProtocolVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> Send(This,pMsg,pulStatus) )
    ( (This)->lpVtbl -> Receive(This,pMsg,ulSize,pulStatus) )
    ( (This)->lpVtbl -> Cancel(This,pMsg) )
    ( (This)->lpVtbl -> GetCallContext(This,pMsg,riid,pInterface) )
    ( (This)->lpVtbl -> GetDestCtxEx(This,pMsg,pdwDestContext,ppvDestContext) )
    ( (This)->lpVtbl -> GetState(This,pMsg,pState) )
    ( (This)->lpVtbl -> RegisterAsync(This,pMsg,pAsyncMgr) )
EXTERN_C const IID IID_IRpcSyntaxNegotiate;
    typedef struct IRpcSyntaxNegotiateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRpcSyntaxNegotiate * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRpcSyntaxNegotiate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRpcSyntaxNegotiate * This);
        HRESULT ( STDMETHODCALLTYPE *NegotiateSyntax )(
            IRpcSyntaxNegotiate * This,
            _Inout_ RPCOLEMESSAGE *pMsg);
        END_INTERFACE
    } IRpcSyntaxNegotiateVtbl;
    interface IRpcSyntaxNegotiate
    {
        CONST_VTBL struct IRpcSyntaxNegotiateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NegotiateSyntax(This,pMsg) )
EXTERN_C const IID IID_IRpcProxyBuffer;
    typedef struct IRpcProxyBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRpcProxyBuffer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRpcProxyBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRpcProxyBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            IRpcProxyBuffer * This,
            _In_ IRpcChannelBuffer *pRpcChannelBuffer);
        void ( STDMETHODCALLTYPE *Disconnect )(
            IRpcProxyBuffer * This);
        END_INTERFACE
    } IRpcProxyBufferVtbl;
    interface IRpcProxyBuffer
    {
        CONST_VTBL struct IRpcProxyBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Connect(This,pRpcChannelBuffer) )
    ( (This)->lpVtbl -> Disconnect(This) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0020_v0_0_s_ifspec;
EXTERN_C const IID IID_IRpcStubBuffer;
    typedef struct IRpcStubBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRpcStubBuffer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRpcStubBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRpcStubBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            IRpcStubBuffer * This,
            _In_ IUnknown *pUnkServer);
        void ( STDMETHODCALLTYPE *Disconnect )(
            IRpcStubBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRpcStubBuffer * This,
            _Inout_ RPCOLEMESSAGE *_prpcmsg,
            _In_ IRpcChannelBuffer *_pRpcChannelBuffer);
        IRpcStubBuffer *( STDMETHODCALLTYPE *IsIIDSupported )(
            IRpcStubBuffer * This,
            _In_ REFIID riid);
        ULONG ( STDMETHODCALLTYPE *CountRefs )(
            IRpcStubBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *DebugServerQueryInterface )(
            IRpcStubBuffer * This,
            _Outptr_ void **ppv);
        void ( STDMETHODCALLTYPE *DebugServerRelease )(
            IRpcStubBuffer * This,
            _In_ void *pv);
        END_INTERFACE
    } IRpcStubBufferVtbl;
    interface IRpcStubBuffer
    {
        CONST_VTBL struct IRpcStubBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Connect(This,pUnkServer) )
    ( (This)->lpVtbl -> Disconnect(This) )
    ( (This)->lpVtbl -> Invoke(This,_prpcmsg,_pRpcChannelBuffer) )
    ( (This)->lpVtbl -> IsIIDSupported(This,riid) )
    ( (This)->lpVtbl -> CountRefs(This) )
    ( (This)->lpVtbl -> DebugServerQueryInterface(This,ppv) )
    ( (This)->lpVtbl -> DebugServerRelease(This,pv) )
EXTERN_C const IID IID_IPSFactoryBuffer;
    typedef struct IPSFactoryBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPSFactoryBuffer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPSFactoryBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPSFactoryBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *CreateProxy )(
            IPSFactoryBuffer * This,
            _In_ IUnknown *pUnkOuter,
            _In_ REFIID riid,
            _Outptr_ IRpcProxyBuffer **ppProxy,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *CreateStub )(
            IPSFactoryBuffer * This,
            _In_ REFIID riid,
            _In_opt_ IUnknown *pUnkServer,
            _Outptr_ IRpcStubBuffer **ppStub);
        END_INTERFACE
    } IPSFactoryBufferVtbl;
    interface IPSFactoryBuffer
    {
        CONST_VTBL struct IPSFactoryBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateProxy(This,pUnkOuter,riid,ppProxy,ppv) )
    ( (This)->lpVtbl -> CreateStub(This,riid,pUnkServer,ppStub) )
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct SChannelHookCallInfo
    {
    IID iid;
    DWORD cbSize;
    GUID uCausality;
    DWORD dwServerPid;
    DWORD iMethod;
    void *pObject;
    } SChannelHookCallInfo;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0022_v0_0_s_ifspec;
EXTERN_C const IID IID_IChannelHook;
    typedef struct IChannelHookVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IChannelHook * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IChannelHook * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IChannelHook * This);
        void ( STDMETHODCALLTYPE *ClientGetSize )(
            IChannelHook * This,
            _In_ REFGUID uExtent,
            _In_ REFIID riid,
            _Out_ ULONG *pDataSize);
        void ( STDMETHODCALLTYPE *ClientFillBuffer )(
            IChannelHook * This,
            _In_ REFGUID uExtent,
            _In_ REFIID riid,
            _Inout_ ULONG *pDataSize,
            _In_ void *pDataBuffer);
        void ( STDMETHODCALLTYPE *ClientNotify )(
            IChannelHook * This,
            _In_ REFGUID uExtent,
            _In_ REFIID riid,
            _In_ ULONG cbDataSize,
            _In_ void *pDataBuffer,
            _In_ DWORD lDataRep,
            _In_ HRESULT hrFault);
        void ( STDMETHODCALLTYPE *ServerNotify )(
            IChannelHook * This,
            _In_ REFGUID uExtent,
            _In_ REFIID riid,
            _In_ ULONG cbDataSize,
            _In_ void *pDataBuffer,
            _In_ DWORD lDataRep);
        void ( STDMETHODCALLTYPE *ServerGetSize )(
            IChannelHook * This,
            _In_ REFGUID uExtent,
            _In_ REFIID riid,
            _In_ HRESULT hrFault,
            _Out_ ULONG *pDataSize);
        void ( STDMETHODCALLTYPE *ServerFillBuffer )(
            IChannelHook * This,
            _In_ REFGUID uExtent,
            _In_ REFIID riid,
            _Inout_ ULONG *pDataSize,
            _In_ void *pDataBuffer,
            _In_ HRESULT hrFault);
        END_INTERFACE
    } IChannelHookVtbl;
    interface IChannelHook
    {
        CONST_VTBL struct IChannelHookVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ClientGetSize(This,uExtent,riid,pDataSize) )
    ( (This)->lpVtbl -> ClientFillBuffer(This,uExtent,riid,pDataSize,pDataBuffer) )
    ( (This)->lpVtbl -> ClientNotify(This,uExtent,riid,cbDataSize,pDataBuffer,lDataRep,hrFault) )
    ( (This)->lpVtbl -> ServerNotify(This,uExtent,riid,cbDataSize,pDataBuffer,lDataRep) )
    ( (This)->lpVtbl -> ServerGetSize(This,uExtent,riid,hrFault,pDataSize) )
    ( (This)->lpVtbl -> ServerFillBuffer(This,uExtent,riid,pDataSize,pDataBuffer,hrFault) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0023_v0_0_s_ifspec;
typedef struct tagSOLE_AUTHENTICATION_SERVICE
    {
    DWORD dwAuthnSvc;
    DWORD dwAuthzSvc;
    OLECHAR *pPrincipalName;
    HRESULT hr;
    } SOLE_AUTHENTICATION_SERVICE;
typedef SOLE_AUTHENTICATION_SERVICE *PSOLE_AUTHENTICATION_SERVICE;
typedef
enum tagEOLE_AUTHENTICATION_CAPABILITIES
    {
        EOAC_NONE = 0,
        EOAC_MUTUAL_AUTH = 0x1,
        EOAC_STATIC_CLOAKING = 0x20,
        EOAC_DYNAMIC_CLOAKING = 0x40,
        EOAC_ANY_AUTHORITY = 0x80,
        EOAC_MAKE_FULLSIC = 0x100,
        EOAC_DEFAULT = 0x800,
        EOAC_SECURE_REFS = 0x2,
        EOAC_ACCESS_CONTROL = 0x4,
        EOAC_APPID = 0x8,
        EOAC_DYNAMIC = 0x10,
        EOAC_REQUIRE_FULLSIC = 0x200,
        EOAC_AUTO_IMPERSONATE = 0x400,
        EOAC_DISABLE_AAA = 0x1000,
        EOAC_NO_CUSTOM_MARSHAL = 0x2000,
        EOAC_RESERVED1 = 0x4000
    } EOLE_AUTHENTICATION_CAPABILITIES;
typedef struct tagSOLE_AUTHENTICATION_INFO
    {
    DWORD dwAuthnSvc;
    DWORD dwAuthzSvc;
    void *pAuthInfo;
    } SOLE_AUTHENTICATION_INFO;
typedef struct tagSOLE_AUTHENTICATION_INFO *PSOLE_AUTHENTICATION_INFO;
typedef struct tagSOLE_AUTHENTICATION_LIST
    {
    DWORD cAuthInfo;
    SOLE_AUTHENTICATION_INFO *aAuthInfo;
    } SOLE_AUTHENTICATION_LIST;
typedef struct tagSOLE_AUTHENTICATION_LIST *PSOLE_AUTHENTICATION_LIST;
EXTERN_C const IID IID_IClientSecurity;
    typedef struct IClientSecurityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IClientSecurity * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IClientSecurity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IClientSecurity * This);
        HRESULT ( STDMETHODCALLTYPE *QueryBlanket )(
            IClientSecurity * This,
            _In_ IUnknown *pProxy,
            _Out_ DWORD *pAuthnSvc,
            _Out_opt_ DWORD *pAuthzSvc,
            __RPC__deref_out_opt OLECHAR **pServerPrincName,
            _Out_opt_ DWORD *pAuthnLevel,
            _Out_opt_ DWORD *pImpLevel,
            _Outptr_result_maybenull_ void **pAuthInfo,
            _Out_opt_ DWORD *pCapabilites);
        HRESULT ( STDMETHODCALLTYPE *SetBlanket )(
            IClientSecurity * This,
            _In_ IUnknown *pProxy,
            _In_ DWORD dwAuthnSvc,
            _In_ DWORD dwAuthzSvc,
            __RPC__in_opt OLECHAR *pServerPrincName,
            _In_ DWORD dwAuthnLevel,
            _In_ DWORD dwImpLevel,
            _In_opt_ void *pAuthInfo,
            _In_ DWORD dwCapabilities);
        HRESULT ( STDMETHODCALLTYPE *CopyProxy )(
            IClientSecurity * This,
            _In_ IUnknown *pProxy,
            _Outptr_ IUnknown **ppCopy);
        END_INTERFACE
    } IClientSecurityVtbl;
    interface IClientSecurity
    {
        CONST_VTBL struct IClientSecurityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryBlanket(This,pProxy,pAuthnSvc,pAuthzSvc,pServerPrincName,pAuthnLevel,pImpLevel,pAuthInfo,pCapabilites) )
    ( (This)->lpVtbl -> SetBlanket(This,pProxy,dwAuthnSvc,dwAuthzSvc,pServerPrincName,dwAuthnLevel,dwImpLevel,pAuthInfo,dwCapabilities) )
    ( (This)->lpVtbl -> CopyProxy(This,pProxy,ppCopy) )
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0024_v0_0_s_ifspec;
EXTERN_C const IID IID_IServerSecurity;
    typedef struct IServerSecurityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IServerSecurity * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IServerSecurity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IServerSecurity * This);
        HRESULT ( STDMETHODCALLTYPE *QueryBlanket )(
            IServerSecurity * This,
            _Out_opt_ DWORD *pAuthnSvc,
            _Out_opt_ DWORD *pAuthzSvc,
            __RPC__deref_out_opt OLECHAR **pServerPrincName,
            _Out_opt_ DWORD *pAuthnLevel,
            _Out_opt_ DWORD *pImpLevel,
            _Outptr_result_maybenull_ void **pPrivs,
            _Inout_opt_ DWORD *pCapabilities);
        HRESULT ( STDMETHODCALLTYPE *ImpersonateClient )(
            IServerSecurity * This);
        HRESULT ( STDMETHODCALLTYPE *RevertToSelf )(
            IServerSecurity * This);
        BOOL ( STDMETHODCALLTYPE *IsImpersonating )(
            IServerSecurity * This);
        END_INTERFACE
    } IServerSecurityVtbl;
    interface IServerSecurity
    {
        CONST_VTBL struct IServerSecurityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryBlanket(This,pAuthnSvc,pAuthzSvc,pServerPrincName,pAuthnLevel,pImpLevel,pPrivs,pCapabilities) )
    ( (This)->lpVtbl -> ImpersonateClient(This) )
    ( (This)->lpVtbl -> RevertToSelf(This) )
    ( (This)->lpVtbl -> IsImpersonating(This) )
typedef
enum tagRPCOPT_PROPERTIES
    {
        COMBND_RPCTIMEOUT = 0x1,
        COMBND_SERVER_LOCALITY = 0x2,
        COMBND_RESERVED1 = 0x4,
        COMBND_RESERVED2 = 0x5,
        COMBND_RESERVED3 = 0x8,
        COMBND_RESERVED4 = 0x10
    } RPCOPT_PROPERTIES;
typedef
enum tagRPCOPT_SERVER_LOCALITY_VALUES
    {
        SERVER_LOCALITY_PROCESS_LOCAL = 0,
        SERVER_LOCALITY_MACHINE_LOCAL = 1,
        SERVER_LOCALITY_REMOTE = 2
    } RPCOPT_SERVER_LOCALITY_VALUES;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0025_v0_0_s_ifspec;
EXTERN_C const IID IID_IRpcOptions;
    typedef struct IRpcOptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRpcOptions * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRpcOptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRpcOptions * This);
        HRESULT ( STDMETHODCALLTYPE *Set )(
            IRpcOptions * This,
            _In_ IUnknown *pPrx,
            _In_ RPCOPT_PROPERTIES dwProperty,
            _In_ ULONG_PTR dwValue);
        HRESULT ( STDMETHODCALLTYPE *Query )(
            IRpcOptions * This,
            _In_ IUnknown *pPrx,
            _In_ RPCOPT_PROPERTIES dwProperty,
            _Out_ ULONG_PTR *pdwValue);
        END_INTERFACE
    } IRpcOptionsVtbl;
    interface IRpcOptions
    {
        CONST_VTBL struct IRpcOptionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Set(This,pPrx,dwProperty,dwValue) )
    ( (This)->lpVtbl -> Query(This,pPrx,dwProperty,pdwValue) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef
enum tagGLOBALOPT_PROPERTIES
    {
        COMGLB_EXCEPTION_HANDLING = 1,
        COMGLB_APPID = 2,
        COMGLB_RPC_THREADPOOL_SETTING = 3,
        COMGLB_RO_SETTINGS = 4,
        COMGLB_UNMARSHALING_POLICY = 5,
        COMGLB_PROPERTIES_RESERVED1 = 6,
        COMGLB_PROPERTIES_RESERVED2 = 7,
        COMGLB_PROPERTIES_RESERVED3 = 8
    } GLOBALOPT_PROPERTIES;
typedef
enum tagGLOBALOPT_EH_VALUES
    {
        COMGLB_EXCEPTION_HANDLE = 0,
        COMGLB_EXCEPTION_DONOT_HANDLE_FATAL = 1,
        COMGLB_EXCEPTION_DONOT_HANDLE = COMGLB_EXCEPTION_DONOT_HANDLE_FATAL,
        COMGLB_EXCEPTION_DONOT_HANDLE_ANY = 2
    } GLOBALOPT_EH_VALUES;
typedef
enum tagGLOBALOPT_RPCTP_VALUES
    {
        COMGLB_RPC_THREADPOOL_SETTING_DEFAULT_POOL = 0,
        COMGLB_RPC_THREADPOOL_SETTING_PRIVATE_POOL = 1
    } GLOBALOPT_RPCTP_VALUES;
typedef
enum tagGLOBALOPT_RO_FLAGS
    {
        COMGLB_STA_MODALLOOP_REMOVE_TOUCH_MESSAGES = 0x1,
        COMGLB_STA_MODALLOOP_SHARED_QUEUE_REMOVE_INPUT_MESSAGES = 0x2,
        COMGLB_STA_MODALLOOP_SHARED_QUEUE_DONOT_REMOVE_INPUT_MESSAGES = 0x4,
        COMGLB_FAST_RUNDOWN = 0x8,
        COMGLB_RESERVED1 = 0x10,
        COMGLB_RESERVED2 = 0x20,
        COMGLB_RESERVED3 = 0x40,
        COMGLB_STA_MODALLOOP_SHARED_QUEUE_REORDER_POINTER_MESSAGES = 0x80,
        COMGLB_RESERVED4 = 0x100,
        COMGLB_RESERVED5 = 0x200,
        COMGLB_RESERVED6 = 0x400
    } GLOBALOPT_RO_FLAGS;
typedef
enum tagGLOBALOPT_UNMARSHALING_POLICY_VALUES
    {
        COMGLB_UNMARSHALING_POLICY_NORMAL = 0,
        COMGLB_UNMARSHALING_POLICY_STRONG = 1,
        COMGLB_UNMARSHALING_POLICY_HYBRID = 2
    } GLOBALOPT_UNMARSHALING_POLICY_VALUES;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0026_v0_0_s_ifspec;
EXTERN_C const IID IID_IGlobalOptions;
    typedef struct IGlobalOptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IGlobalOptions * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IGlobalOptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IGlobalOptions * This);
        HRESULT ( STDMETHODCALLTYPE *Set )(
            IGlobalOptions * This,
            _In_ GLOBALOPT_PROPERTIES dwProperty,
            _In_ ULONG_PTR dwValue);
        HRESULT ( STDMETHODCALLTYPE *Query )(
            IGlobalOptions * This,
            _In_ GLOBALOPT_PROPERTIES dwProperty,
            _Out_ ULONG_PTR *pdwValue);
        END_INTERFACE
    } IGlobalOptionsVtbl;
    interface IGlobalOptions
    {
        CONST_VTBL struct IGlobalOptionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Set(This,dwProperty,dwValue) )
    ( (This)->lpVtbl -> Query(This,dwProperty,pdwValue) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0027_v0_0_s_ifspec;
typedef __RPC_unique_pointer ISurrogate *LPSURROGATE;
EXTERN_C const IID IID_ISurrogate;
    typedef struct ISurrogateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISurrogate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISurrogate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISurrogate * This);
        HRESULT ( STDMETHODCALLTYPE *LoadDllServer )(
            __RPC__in ISurrogate * This,
                       __RPC__in REFCLSID Clsid);
        HRESULT ( STDMETHODCALLTYPE *FreeSurrogate )(
            __RPC__in ISurrogate * This);
        END_INTERFACE
    } ISurrogateVtbl;
    interface ISurrogate
    {
        CONST_VTBL struct ISurrogateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LoadDllServer(This,Clsid) )
    ( (This)->lpVtbl -> FreeSurrogate(This) )
typedef IGlobalInterfaceTable *LPGLOBALINTERFACETABLE;
EXTERN_C const IID IID_IGlobalInterfaceTable;
    typedef struct IGlobalInterfaceTableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IGlobalInterfaceTable * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IGlobalInterfaceTable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IGlobalInterfaceTable * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterInterfaceInGlobal )(
            IGlobalInterfaceTable * This,
            _In_ IUnknown *pUnk,
            _In_ REFIID riid,
            _Out_ DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RevokeInterfaceFromGlobal )(
            IGlobalInterfaceTable * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *GetInterfaceFromGlobal )(
            IGlobalInterfaceTable * This,
            _In_ DWORD dwCookie,
            _In_ REFIID riid,
            _Outptr_ void **ppv);
        END_INTERFACE
    } IGlobalInterfaceTableVtbl;
    interface IGlobalInterfaceTable
    {
        CONST_VTBL struct IGlobalInterfaceTableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterInterfaceInGlobal(This,pUnk,riid,pdwCookie) )
    ( (This)->lpVtbl -> RevokeInterfaceFromGlobal(This,dwCookie) )
    ( (This)->lpVtbl -> GetInterfaceFromGlobal(This,dwCookie,riid,ppv) )
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0029_v0_0_s_ifspec;
EXTERN_C const IID IID_ISynchronize;
    typedef struct ISynchronizeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISynchronize * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISynchronize * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISynchronize * This);
        HRESULT ( STDMETHODCALLTYPE *Wait )(
            __RPC__in ISynchronize * This,
                       DWORD dwFlags,
                       DWORD dwMilliseconds);
        HRESULT ( STDMETHODCALLTYPE *Signal )(
            __RPC__in ISynchronize * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ISynchronize * This);
        END_INTERFACE
    } ISynchronizeVtbl;
    interface ISynchronize
    {
        CONST_VTBL struct ISynchronizeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Wait(This,dwFlags,dwMilliseconds) )
    ( (This)->lpVtbl -> Signal(This) )
    ( (This)->lpVtbl -> Reset(This) )
EXTERN_C const IID IID_ISynchronizeHandle;
    typedef struct ISynchronizeHandleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISynchronizeHandle * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISynchronizeHandle * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISynchronizeHandle * This);
        HRESULT ( STDMETHODCALLTYPE *GetHandle )(
            ISynchronizeHandle * This,
            _Out_ HANDLE *ph);
        END_INTERFACE
    } ISynchronizeHandleVtbl;
    interface ISynchronizeHandle
    {
        CONST_VTBL struct ISynchronizeHandleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetHandle(This,ph) )
EXTERN_C const IID IID_ISynchronizeEvent;
    typedef struct ISynchronizeEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISynchronizeEvent * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISynchronizeEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISynchronizeEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetHandle )(
            ISynchronizeEvent * This,
            _Out_ HANDLE *ph);
        HRESULT ( STDMETHODCALLTYPE *SetEventHandle )(
            ISynchronizeEvent * This,
            _In_ HANDLE *ph);
        END_INTERFACE
    } ISynchronizeEventVtbl;
    interface ISynchronizeEvent
    {
        CONST_VTBL struct ISynchronizeEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetHandle(This,ph) )
    ( (This)->lpVtbl -> SetEventHandle(This,ph) )
EXTERN_C const IID IID_ISynchronizeContainer;
    typedef struct ISynchronizeContainerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISynchronizeContainer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISynchronizeContainer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISynchronizeContainer * This);
        HRESULT ( STDMETHODCALLTYPE *AddSynchronize )(
            ISynchronizeContainer * This,
            _In_ ISynchronize *pSync);
        HRESULT ( STDMETHODCALLTYPE *WaitMultiple )(
            ISynchronizeContainer * This,
            _In_ DWORD dwFlags,
            _In_ DWORD dwTimeOut,
            _Outptr_ ISynchronize **ppSync);
        END_INTERFACE
    } ISynchronizeContainerVtbl;
    interface ISynchronizeContainer
    {
        CONST_VTBL struct ISynchronizeContainerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddSynchronize(This,pSync) )
    ( (This)->lpVtbl -> WaitMultiple(This,dwFlags,dwTimeOut,ppSync) )
EXTERN_C const IID IID_ISynchronizeMutex;
    typedef struct ISynchronizeMutexVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISynchronizeMutex * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISynchronizeMutex * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISynchronizeMutex * This);
        HRESULT ( STDMETHODCALLTYPE *Wait )(
            ISynchronizeMutex * This,
                       DWORD dwFlags,
                       DWORD dwMilliseconds);
        HRESULT ( STDMETHODCALLTYPE *Signal )(
            ISynchronizeMutex * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            ISynchronizeMutex * This);
        HRESULT ( STDMETHODCALLTYPE *ReleaseMutex )(
            ISynchronizeMutex * This);
        END_INTERFACE
    } ISynchronizeMutexVtbl;
    interface ISynchronizeMutex
    {
        CONST_VTBL struct ISynchronizeMutexVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Wait(This,dwFlags,dwMilliseconds) )
    ( (This)->lpVtbl -> Signal(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> ReleaseMutex(This) )
typedef ICancelMethodCalls *LPCANCELMETHODCALLS;
EXTERN_C const IID IID_ICancelMethodCalls;
    typedef struct ICancelMethodCallsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICancelMethodCalls * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICancelMethodCalls * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICancelMethodCalls * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            ICancelMethodCalls * This,
            _In_ ULONG ulSeconds);
        HRESULT ( STDMETHODCALLTYPE *TestCancel )(
            ICancelMethodCalls * This);
        END_INTERFACE
    } ICancelMethodCallsVtbl;
    interface ICancelMethodCalls
    {
        CONST_VTBL struct ICancelMethodCallsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Cancel(This,ulSeconds) )
    ( (This)->lpVtbl -> TestCancel(This) )
typedef
enum tagDCOM_CALL_STATE
    {
        DCOM_NONE = 0,
        DCOM_CALL_COMPLETE = 0x1,
        DCOM_CALL_CANCELED = 0x2
    } DCOM_CALL_STATE;
EXTERN_C const IID IID_IAsyncManager;
    typedef struct IAsyncManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAsyncManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAsyncManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAsyncManager * This);
        HRESULT ( STDMETHODCALLTYPE *CompleteCall )(
            IAsyncManager * This,
            _In_ HRESULT Result);
        HRESULT ( STDMETHODCALLTYPE *GetCallContext )(
            IAsyncManager * This,
            _In_ REFIID riid,
            _Outptr_ void **pInterface);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            IAsyncManager * This,
            _Out_ ULONG *pulStateFlags);
        END_INTERFACE
    } IAsyncManagerVtbl;
    interface IAsyncManager
    {
        CONST_VTBL struct IAsyncManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CompleteCall(This,Result) )
    ( (This)->lpVtbl -> GetCallContext(This,riid,pInterface) )
    ( (This)->lpVtbl -> GetState(This,pulStateFlags) )
EXTERN_C const IID IID_ICallFactory;
    typedef struct ICallFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICallFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICallFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICallFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateCall )(
            ICallFactory * This,
            _In_ REFIID riid,
            _In_opt_ IUnknown *pCtrlUnk,
            _In_ REFIID riid2,
            _Outptr_ IUnknown **ppv);
        END_INTERFACE
    } ICallFactoryVtbl;
    interface ICallFactory
    {
        CONST_VTBL struct ICallFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateCall(This,riid,pCtrlUnk,riid2,ppv) )
EXTERN_C const IID IID_IRpcHelper;
    typedef struct IRpcHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRpcHelper * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRpcHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRpcHelper * This);
        HRESULT ( STDMETHODCALLTYPE *GetDCOMProtocolVersion )(
            IRpcHelper * This,
            _Out_ DWORD *pComVersion);
        HRESULT ( STDMETHODCALLTYPE *GetIIDFromOBJREF )(
            IRpcHelper * This,
            _In_ void *pObjRef,
            _Outptr_ IID **piid);
        END_INTERFACE
    } IRpcHelperVtbl;
    interface IRpcHelper
    {
        CONST_VTBL struct IRpcHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDCOMProtocolVersion(This,pComVersion) )
    ( (This)->lpVtbl -> GetIIDFromOBJREF(This,pObjRef,piid) )
EXTERN_C const IID IID_IReleaseMarshalBuffers;
    typedef struct IReleaseMarshalBuffersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IReleaseMarshalBuffers * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IReleaseMarshalBuffers * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IReleaseMarshalBuffers * This);
        HRESULT ( STDMETHODCALLTYPE *ReleaseMarshalBuffer )(
            IReleaseMarshalBuffers * This,
            _Inout_ RPCOLEMESSAGE *pMsg,
            _In_ DWORD dwFlags,
            _In_opt_ IUnknown *pChnl);
        END_INTERFACE
    } IReleaseMarshalBuffersVtbl;
    interface IReleaseMarshalBuffers
    {
        CONST_VTBL struct IReleaseMarshalBuffersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReleaseMarshalBuffer(This,pMsg,dwFlags,pChnl) )
EXTERN_C const IID IID_IWaitMultiple;
    typedef struct IWaitMultipleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWaitMultiple * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWaitMultiple * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWaitMultiple * This);
        HRESULT ( STDMETHODCALLTYPE *WaitMultiple )(
            IWaitMultiple * This,
            _In_ DWORD timeout,
            _Outptr_ ISynchronize **pSync);
        HRESULT ( STDMETHODCALLTYPE *AddSynchronize )(
            IWaitMultiple * This,
            _In_ ISynchronize *pSync);
        END_INTERFACE
    } IWaitMultipleVtbl;
    interface IWaitMultiple
    {
        CONST_VTBL struct IWaitMultipleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> WaitMultiple(This,timeout,pSync) )
    ( (This)->lpVtbl -> AddSynchronize(This,pSync) )
typedef IAddrTrackingControl *LPADDRTRACKINGCONTROL;
EXTERN_C const IID IID_IAddrTrackingControl;
    typedef struct IAddrTrackingControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAddrTrackingControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAddrTrackingControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAddrTrackingControl * This);
        HRESULT ( STDMETHODCALLTYPE *EnableCOMDynamicAddrTracking )(
            IAddrTrackingControl * This);
        HRESULT ( STDMETHODCALLTYPE *DisableCOMDynamicAddrTracking )(
            IAddrTrackingControl * This);
        END_INTERFACE
    } IAddrTrackingControlVtbl;
    interface IAddrTrackingControl
    {
        CONST_VTBL struct IAddrTrackingControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnableCOMDynamicAddrTracking(This) )
    ( (This)->lpVtbl -> DisableCOMDynamicAddrTracking(This) )
typedef IAddrExclusionControl *LPADDREXCLUSIONCONTROL;
EXTERN_C const IID IID_IAddrExclusionControl;
    typedef struct IAddrExclusionControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAddrExclusionControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAddrExclusionControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAddrExclusionControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentAddrExclusionList )(
            IAddrExclusionControl * This,
            _In_ REFIID riid,
            _Outptr_ void **ppEnumerator);
        HRESULT ( STDMETHODCALLTYPE *UpdateAddrExclusionList )(
            IAddrExclusionControl * This,
            _In_ IUnknown *pEnumerator);
        END_INTERFACE
    } IAddrExclusionControlVtbl;
    interface IAddrExclusionControl
    {
        CONST_VTBL struct IAddrExclusionControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrentAddrExclusionList(This,riid,ppEnumerator) )
    ( (This)->lpVtbl -> UpdateAddrExclusionList(This,pEnumerator) )
EXTERN_C const IID IID_IPipeByte;
    typedef struct IPipeByteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPipeByte * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPipeByte * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPipeByte * This);
        HRESULT ( STDMETHODCALLTYPE *Pull )(
            __RPC__in IPipeByte * This,
                                            __RPC__out_ecount_part(cRequest, *pcReturned) BYTE *buf,
                       ULONG cRequest,
                        __RPC__out ULONG *pcReturned);
        HRESULT ( STDMETHODCALLTYPE *Push )(
            __RPC__in IPipeByte * This,
                                __RPC__in_ecount_full(cSent) BYTE *buf,
                       ULONG cSent);
        END_INTERFACE
    } IPipeByteVtbl;
    interface IPipeByte
    {
        CONST_VTBL struct IPipeByteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Pull(This,buf,cRequest,pcReturned) )
    ( (This)->lpVtbl -> Push(This,buf,cSent) )
EXTERN_C const IID IID_AsyncIPipeByte;
    typedef struct AsyncIPipeByteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIPipeByte * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIPipeByte * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIPipeByte * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_Pull )(
            __RPC__in AsyncIPipeByte * This,
                       ULONG cRequest);
        HRESULT ( STDMETHODCALLTYPE *Finish_Pull )(
            __RPC__in AsyncIPipeByte * This,
                                            __RPC__out_xcount_part(cRequest, *pcReturned) BYTE *buf,
                        __RPC__out ULONG *pcReturned);
        HRESULT ( STDMETHODCALLTYPE *Begin_Push )(
            __RPC__in AsyncIPipeByte * This,
                                __RPC__in_xcount_full(cSent) BYTE *buf,
                       ULONG cSent);
        HRESULT ( STDMETHODCALLTYPE *Finish_Push )(
            __RPC__in AsyncIPipeByte * This);
        END_INTERFACE
    } AsyncIPipeByteVtbl;
    interface AsyncIPipeByte
    {
        CONST_VTBL struct AsyncIPipeByteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_Pull(This,cRequest) )
    ( (This)->lpVtbl -> Finish_Pull(This,buf,pcReturned) )
    ( (This)->lpVtbl -> Begin_Push(This,buf,cSent) )
    ( (This)->lpVtbl -> Finish_Push(This) )
EXTERN_C const IID IID_IPipeLong;
    typedef struct IPipeLongVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPipeLong * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPipeLong * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPipeLong * This);
        HRESULT ( STDMETHODCALLTYPE *Pull )(
            __RPC__in IPipeLong * This,
                                            __RPC__out_ecount_part(cRequest, *pcReturned) LONG *buf,
                       ULONG cRequest,
                        __RPC__out ULONG *pcReturned);
        HRESULT ( STDMETHODCALLTYPE *Push )(
            __RPC__in IPipeLong * This,
                                __RPC__in_ecount_full(cSent) LONG *buf,
                       ULONG cSent);
        END_INTERFACE
    } IPipeLongVtbl;
    interface IPipeLong
    {
        CONST_VTBL struct IPipeLongVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Pull(This,buf,cRequest,pcReturned) )
    ( (This)->lpVtbl -> Push(This,buf,cSent) )
EXTERN_C const IID IID_AsyncIPipeLong;
    typedef struct AsyncIPipeLongVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIPipeLong * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIPipeLong * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIPipeLong * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_Pull )(
            __RPC__in AsyncIPipeLong * This,
                       ULONG cRequest);
        HRESULT ( STDMETHODCALLTYPE *Finish_Pull )(
            __RPC__in AsyncIPipeLong * This,
                                            __RPC__out_xcount_part(cRequest, *pcReturned) LONG *buf,
                        __RPC__out ULONG *pcReturned);
        HRESULT ( STDMETHODCALLTYPE *Begin_Push )(
            __RPC__in AsyncIPipeLong * This,
                                __RPC__in_xcount_full(cSent) LONG *buf,
                       ULONG cSent);
        HRESULT ( STDMETHODCALLTYPE *Finish_Push )(
            __RPC__in AsyncIPipeLong * This);
        END_INTERFACE
    } AsyncIPipeLongVtbl;
    interface AsyncIPipeLong
    {
        CONST_VTBL struct AsyncIPipeLongVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_Pull(This,cRequest) )
    ( (This)->lpVtbl -> Finish_Pull(This,buf,pcReturned) )
    ( (This)->lpVtbl -> Begin_Push(This,buf,cSent) )
    ( (This)->lpVtbl -> Finish_Push(This) )
EXTERN_C const IID IID_IPipeDouble;
    typedef struct IPipeDoubleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPipeDouble * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPipeDouble * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPipeDouble * This);
        HRESULT ( STDMETHODCALLTYPE *Pull )(
            __RPC__in IPipeDouble * This,
                                            __RPC__out_ecount_part(cRequest, *pcReturned) DOUBLE *buf,
                       ULONG cRequest,
                        __RPC__out ULONG *pcReturned);
        HRESULT ( STDMETHODCALLTYPE *Push )(
            __RPC__in IPipeDouble * This,
                                __RPC__in_ecount_full(cSent) DOUBLE *buf,
                       ULONG cSent);
        END_INTERFACE
    } IPipeDoubleVtbl;
    interface IPipeDouble
    {
        CONST_VTBL struct IPipeDoubleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Pull(This,buf,cRequest,pcReturned) )
    ( (This)->lpVtbl -> Push(This,buf,cSent) )
EXTERN_C const IID IID_AsyncIPipeDouble;
    typedef struct AsyncIPipeDoubleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIPipeDouble * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIPipeDouble * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIPipeDouble * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_Pull )(
            __RPC__in AsyncIPipeDouble * This,
                       ULONG cRequest);
        HRESULT ( STDMETHODCALLTYPE *Finish_Pull )(
            __RPC__in AsyncIPipeDouble * This,
                                            __RPC__out_xcount_part(cRequest, *pcReturned) DOUBLE *buf,
                        __RPC__out ULONG *pcReturned);
        HRESULT ( STDMETHODCALLTYPE *Begin_Push )(
            __RPC__in AsyncIPipeDouble * This,
                                __RPC__in_xcount_full(cSent) DOUBLE *buf,
                       ULONG cSent);
        HRESULT ( STDMETHODCALLTYPE *Finish_Push )(
            __RPC__in AsyncIPipeDouble * This);
        END_INTERFACE
    } AsyncIPipeDoubleVtbl;
    interface AsyncIPipeDouble
    {
        CONST_VTBL struct AsyncIPipeDoubleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_Pull(This,cRequest) )
    ( (This)->lpVtbl -> Finish_Pull(This,buf,pcReturned) )
    ( (This)->lpVtbl -> Begin_Push(This,buf,cSent) )
    ( (This)->lpVtbl -> Finish_Push(This) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef
enum _APTTYPEQUALIFIER
    {
        APTTYPEQUALIFIER_NONE = 0,
        APTTYPEQUALIFIER_IMPLICIT_MTA = 1,
        APTTYPEQUALIFIER_NA_ON_MTA = 2,
        APTTYPEQUALIFIER_NA_ON_STA = 3,
        APTTYPEQUALIFIER_NA_ON_IMPLICIT_MTA = 4,
        APTTYPEQUALIFIER_NA_ON_MAINSTA = 5,
        APTTYPEQUALIFIER_APPLICATION_STA = 6,
        APTTYPEQUALIFIER_RESERVED_1 = 7
    } APTTYPEQUALIFIER;
typedef
enum _APTTYPE
    {
        APTTYPE_CURRENT = -1,
        APTTYPE_STA = 0,
        APTTYPE_MTA = 1,
        APTTYPE_NA = 2,
        APTTYPE_MAINSTA = 3
    } APTTYPE;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef
enum _THDTYPE
    {
        THDTYPE_BLOCKMESSAGES = 0,
        THDTYPE_PROCESSMESSAGES = 1
    } THDTYPE;
typedef DWORD APARTMENTID;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0048_v0_0_s_ifspec;
EXTERN_C const IID IID_IComThreadingInfo;
    typedef struct IComThreadingInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IComThreadingInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IComThreadingInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IComThreadingInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentApartmentType )(
            IComThreadingInfo * This,
            _Out_ APTTYPE *pAptType);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentThreadType )(
            IComThreadingInfo * This,
            _Out_ THDTYPE *pThreadType);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentLogicalThreadId )(
            IComThreadingInfo * This,
            _Out_ GUID *pguidLogicalThreadId);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentLogicalThreadId )(
            IComThreadingInfo * This,
            _In_ REFGUID rguid);
        END_INTERFACE
    } IComThreadingInfoVtbl;
    interface IComThreadingInfo
    {
        CONST_VTBL struct IComThreadingInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrentApartmentType(This,pAptType) )
    ( (This)->lpVtbl -> GetCurrentThreadType(This,pThreadType) )
    ( (This)->lpVtbl -> GetCurrentLogicalThreadId(This,pguidLogicalThreadId) )
    ( (This)->lpVtbl -> SetCurrentLogicalThreadId(This,rguid) )
EXTERN_C const IID IID_IProcessInitControl;
    typedef struct IProcessInitControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProcessInitControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProcessInitControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProcessInitControl * This);
        HRESULT ( STDMETHODCALLTYPE *ResetInitializerTimeout )(
            __RPC__in IProcessInitControl * This,
                       DWORD dwSecondsRemaining);
        END_INTERFACE
    } IProcessInitControlVtbl;
    interface IProcessInitControl
    {
        CONST_VTBL struct IProcessInitControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ResetInitializerTimeout(This,dwSecondsRemaining) )
EXTERN_C const IID IID_IFastRundown;
    typedef struct IFastRundownVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFastRundown * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFastRundown * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFastRundown * This);
        END_INTERFACE
    } IFastRundownVtbl;
    interface IFastRundown
    {
        CONST_VTBL struct IFastRundownVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
typedef
enum CO_MARSHALING_CONTEXT_ATTRIBUTES
    {
        CO_MARSHALING_SOURCE_IS_APP_CONTAINER = 0,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_1 = 0x80000000,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_2 = 0x80000001,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_3 = 0x80000002,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_4 = 0x80000003,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_5 = 0x80000004,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_6 = 0x80000005,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_7 = 0x80000006,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_8 = 0x80000007,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_9 = 0x80000008,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_10 = 0x80000009,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_11 = 0x8000000a,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_12 = 0x8000000b,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_13 = 0x8000000c,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_14 = 0x8000000d,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_15 = 0x8000000e,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_16 = 0x8000000f,
        CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_17 = 0x80000010
    } CO_MARSHALING_CONTEXT_ATTRIBUTES;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0051_v0_0_s_ifspec;
EXTERN_C const IID IID_IMarshalingStream;
    typedef struct IMarshalingStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMarshalingStream * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMarshalingStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMarshalingStream * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            IMarshalingStream * This,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *Write )(
            IMarshalingStream * This,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbWritten);
                      HRESULT ( STDMETHODCALLTYPE *Seek )(
            IMarshalingStream * This,
                       LARGE_INTEGER dlibMove,
                       DWORD dwOrigin,
            _Out_opt_ ULARGE_INTEGER *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *SetSize )(
            IMarshalingStream * This,
                       ULARGE_INTEGER libNewSize);
                      HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            IMarshalingStream * This,
            _In_ IStream *pstm,
                       ULARGE_INTEGER cb,
            _Out_opt_ ULARGE_INTEGER *pcbRead,
            _Out_opt_ ULARGE_INTEGER *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            IMarshalingStream * This,
                       DWORD grfCommitFlags);
        HRESULT ( STDMETHODCALLTYPE *Revert )(
            IMarshalingStream * This);
        HRESULT ( STDMETHODCALLTYPE *LockRegion )(
            IMarshalingStream * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )(
            IMarshalingStream * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            IMarshalingStream * This,
                        STATSTG *pstatstg,
                       DWORD grfStatFlag);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IMarshalingStream * This,
                        IStream **ppstm);
        HRESULT ( STDMETHODCALLTYPE *GetMarshalingContextAttribute )(
            IMarshalingStream * This,
                       CO_MARSHALING_CONTEXT_ATTRIBUTES attribute,
                        ULONG_PTR *pAttributeValue);
        END_INTERFACE
    } IMarshalingStreamVtbl;
    interface IMarshalingStream
    {
        CONST_VTBL struct IMarshalingStreamVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetMarshalingContextAttribute(This,attribute,pAttributeValue) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0052_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0052_v0_0_s_ifspec;
EXTERN_C const IID IID_IAgileReference;
    typedef struct IAgileReferenceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAgileReference * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAgileReference * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAgileReference * This);
        HRESULT ( STDMETHODCALLTYPE *Resolve )(
            IAgileReference * This,
                       REFIID riid,
                                        void **ppvObjectReference);
        END_INTERFACE
    } IAgileReferenceVtbl;
    interface IAgileReference
    {
        CONST_VTBL struct IAgileReferenceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Resolve(This,riid,ppvObjectReference) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
EXTERN_C const GUID IID_ICallbackWithNoReentrancyToApplicationSTA;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0053_v0_0_s_ifspec;
typedef IMallocSpy *LPMALLOCSPY;
EXTERN_C const IID IID_IMallocSpy;
    typedef struct IMallocSpyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMallocSpy * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMallocSpy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMallocSpy * This);
        SIZE_T ( STDMETHODCALLTYPE *PreAlloc )(
            IMallocSpy * This,
            _In_ SIZE_T cbRequest);
        void *( STDMETHODCALLTYPE *PostAlloc )(
            IMallocSpy * This,
            _In_ void *pActual);
        void *( STDMETHODCALLTYPE *PreFree )(
            IMallocSpy * This,
            _In_ void *pRequest,
            _In_ BOOL fSpyed);
        void ( STDMETHODCALLTYPE *PostFree )(
            IMallocSpy * This,
            _In_ BOOL fSpyed);
        SIZE_T ( STDMETHODCALLTYPE *PreRealloc )(
            IMallocSpy * This,
            _In_ void *pRequest,
            _In_ SIZE_T cbRequest,
            _Outptr_ void **ppNewRequest,
            _In_ BOOL fSpyed);
        void *( STDMETHODCALLTYPE *PostRealloc )(
            IMallocSpy * This,
            _In_ void *pActual,
            _In_ BOOL fSpyed);
        void *( STDMETHODCALLTYPE *PreGetSize )(
            IMallocSpy * This,
            _In_ void *pRequest,
            _In_ BOOL fSpyed);
        SIZE_T ( STDMETHODCALLTYPE *PostGetSize )(
            IMallocSpy * This,
            _In_ SIZE_T cbActual,
            _In_ BOOL fSpyed);
        void *( STDMETHODCALLTYPE *PreDidAlloc )(
            IMallocSpy * This,
            _In_ void *pRequest,
            _In_ BOOL fSpyed);
        int ( STDMETHODCALLTYPE *PostDidAlloc )(
            IMallocSpy * This,
            _In_ void *pRequest,
            _In_ BOOL fSpyed,
            _In_ int fActual);
        void ( STDMETHODCALLTYPE *PreHeapMinimize )(
            IMallocSpy * This);
        void ( STDMETHODCALLTYPE *PostHeapMinimize )(
            IMallocSpy * This);
        END_INTERFACE
    } IMallocSpyVtbl;
    interface IMallocSpy
    {
        CONST_VTBL struct IMallocSpyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PreAlloc(This,cbRequest) )
    ( (This)->lpVtbl -> PostAlloc(This,pActual) )
    ( (This)->lpVtbl -> PreFree(This,pRequest,fSpyed) )
    ( (This)->lpVtbl -> PostFree(This,fSpyed) )
    ( (This)->lpVtbl -> PreRealloc(This,pRequest,cbRequest,ppNewRequest,fSpyed) )
    ( (This)->lpVtbl -> PostRealloc(This,pActual,fSpyed) )
    ( (This)->lpVtbl -> PreGetSize(This,pRequest,fSpyed) )
    ( (This)->lpVtbl -> PostGetSize(This,cbActual,fSpyed) )
    ( (This)->lpVtbl -> PreDidAlloc(This,pRequest,fSpyed) )
    ( (This)->lpVtbl -> PostDidAlloc(This,pRequest,fSpyed,fActual) )
    ( (This)->lpVtbl -> PreHeapMinimize(This) )
    ( (This)->lpVtbl -> PostHeapMinimize(This) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0054_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0054_v0_0_s_ifspec;
typedef __RPC_unique_pointer IBindCtx *LPBC;
typedef __RPC_unique_pointer IBindCtx *LPBINDCTX;
typedef struct tagBIND_OPTS
    {
    DWORD cbStruct;
    DWORD grfFlags;
    DWORD grfMode;
    DWORD dwTickCountDeadline;
    } BIND_OPTS;
typedef struct tagBIND_OPTS *LPBIND_OPTS;
typedef struct tagBIND_OPTS2
    {
    DWORD cbStruct;
    DWORD grfFlags;
    DWORD grfMode;
    DWORD dwTickCountDeadline;
    DWORD dwTrackFlags;
    DWORD dwClassContext;
    LCID locale;
    COSERVERINFO *pServerInfo;
    } BIND_OPTS2;
typedef struct tagBIND_OPTS2 *LPBIND_OPTS2;
typedef struct tagBIND_OPTS3
    {
    DWORD cbStruct;
    DWORD grfFlags;
    DWORD grfMode;
    DWORD dwTickCountDeadline;
    DWORD dwTrackFlags;
    DWORD dwClassContext;
    LCID locale;
    COSERVERINFO *pServerInfo;
    HWND hwnd;
    } BIND_OPTS3;
typedef struct tagBIND_OPTS3 *LPBIND_OPTS3;
typedef
enum tagBIND_FLAGS
    {
        BIND_MAYBOTHERUSER = 1,
        BIND_JUSTTESTEXISTENCE = 2
    } BIND_FLAGS;
EXTERN_C const IID IID_IBindCtx;
    typedef struct IBindCtxVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBindCtx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBindCtx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBindCtx * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterObjectBound )(
            __RPC__in IBindCtx * This,
                               __RPC__in_opt IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *RevokeObjectBound )(
            __RPC__in IBindCtx * This,
                               __RPC__in_opt IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *ReleaseBoundObjects )(
            __RPC__in IBindCtx * This);
                      HRESULT ( STDMETHODCALLTYPE *SetBindOptions )(
            IBindCtx * This,
            _In_ BIND_OPTS *pbindopts);
                      HRESULT ( STDMETHODCALLTYPE *GetBindOptions )(
            IBindCtx * This,
            _Inout_ BIND_OPTS *pbindopts);
        HRESULT ( STDMETHODCALLTYPE *GetRunningObjectTable )(
            __RPC__in IBindCtx * This,
                        __RPC__deref_out_opt IRunningObjectTable **pprot);
        HRESULT ( STDMETHODCALLTYPE *RegisterObjectParam )(
            __RPC__in IBindCtx * This,
                       __RPC__in LPOLESTR pszKey,
                               __RPC__in_opt IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *GetObjectParam )(
            __RPC__in IBindCtx * This,
                       __RPC__in LPOLESTR pszKey,
                        __RPC__deref_out_opt IUnknown **ppunk);
        HRESULT ( STDMETHODCALLTYPE *EnumObjectParam )(
            __RPC__in IBindCtx * This,
                        __RPC__deref_out_opt IEnumString **ppenum);
        HRESULT ( STDMETHODCALLTYPE *RevokeObjectParam )(
            __RPC__in IBindCtx * This,
                       __RPC__in LPOLESTR pszKey);
        END_INTERFACE
    } IBindCtxVtbl;
    interface IBindCtx
    {
        CONST_VTBL struct IBindCtxVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterObjectBound(This,punk) )
    ( (This)->lpVtbl -> RevokeObjectBound(This,punk) )
    ( (This)->lpVtbl -> ReleaseBoundObjects(This) )
    ( (This)->lpVtbl -> SetBindOptions(This,pbindopts) )
    ( (This)->lpVtbl -> GetBindOptions(This,pbindopts) )
    ( (This)->lpVtbl -> GetRunningObjectTable(This,pprot) )
    ( (This)->lpVtbl -> RegisterObjectParam(This,pszKey,punk) )
    ( (This)->lpVtbl -> GetObjectParam(This,pszKey,ppunk) )
    ( (This)->lpVtbl -> EnumObjectParam(This,ppenum) )
    ( (This)->lpVtbl -> RevokeObjectParam(This,pszKey) )
                HRESULT STDMETHODCALLTYPE IBindCtx_RemoteSetBindOptions_Proxy(
    __RPC__in IBindCtx * This,
               __RPC__in BIND_OPTS2 *pbindopts);
void __RPC_STUB IBindCtx_RemoteSetBindOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IBindCtx_RemoteGetBindOptions_Proxy(
    __RPC__in IBindCtx * This,
                    __RPC__inout BIND_OPTS2 *pbindopts);
void __RPC_STUB IBindCtx_RemoteGetBindOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef __RPC_unique_pointer IEnumMoniker *LPENUMMONIKER;
EXTERN_C const IID IID_IEnumMoniker;
    typedef struct IEnumMonikerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumMoniker * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumMoniker * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumMoniker * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumMoniker * This,
                       ULONG celt,
            _Out_writes_to_(celt,*pceltFetched) IMoniker **rgelt,
            _Out_opt_ ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumMoniker * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumMoniker * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumMoniker * This,
                        __RPC__deref_out_opt IEnumMoniker **ppenum);
        END_INTERFACE
    } IEnumMonikerVtbl;
    interface IEnumMoniker
    {
        CONST_VTBL struct IEnumMonikerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
                HRESULT STDMETHODCALLTYPE IEnumMoniker_RemoteNext_Proxy(
    __RPC__in IEnumMoniker * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IMoniker **rgelt,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumMoniker_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0056_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0056_v0_0_s_ifspec;
typedef __RPC_unique_pointer IRunnableObject *LPRUNNABLEOBJECT;
EXTERN_C const IID IID_IRunnableObject;
    typedef struct IRunnableObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRunnableObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRunnableObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRunnableObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetRunningClass )(
            __RPC__in IRunnableObject * This,
                        __RPC__out LPCLSID lpClsid);
        HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in IRunnableObject * This,
                       __RPC__in_opt LPBINDCTX pbc);
                      BOOL ( STDMETHODCALLTYPE *IsRunning )(
            IRunnableObject * This);
        HRESULT ( STDMETHODCALLTYPE *LockRunning )(
            __RPC__in IRunnableObject * This,
                       BOOL fLock,
                       BOOL fLastUnlockCloses);
        HRESULT ( STDMETHODCALLTYPE *SetContainedObject )(
            __RPC__in IRunnableObject * This,
                       BOOL fContained);
        END_INTERFACE
    } IRunnableObjectVtbl;
    interface IRunnableObject
    {
        CONST_VTBL struct IRunnableObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRunningClass(This,lpClsid) )
    ( (This)->lpVtbl -> Run(This,pbc) )
    ( (This)->lpVtbl -> IsRunning(This) )
    ( (This)->lpVtbl -> LockRunning(This,fLock,fLastUnlockCloses) )
    ( (This)->lpVtbl -> SetContainedObject(This,fContained) )
                HRESULT STDMETHODCALLTYPE IRunnableObject_RemoteIsRunning_Proxy(
    __RPC__in IRunnableObject * This);
void __RPC_STUB IRunnableObject_RemoteIsRunning_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef __RPC_unique_pointer IRunningObjectTable *LPRUNNINGOBJECTTABLE;
EXTERN_C const IID IID_IRunningObjectTable;
    typedef struct IRunningObjectTableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRunningObjectTable * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRunningObjectTable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRunningObjectTable * This);
        HRESULT ( STDMETHODCALLTYPE *Register )(
            __RPC__in IRunningObjectTable * This,
                       DWORD grfFlags,
                               __RPC__in_opt IUnknown *punkObject,
                               __RPC__in_opt IMoniker *pmkObjectName,
                        __RPC__out DWORD *pdwRegister);
        HRESULT ( STDMETHODCALLTYPE *Revoke )(
            __RPC__in IRunningObjectTable * This,
                       DWORD dwRegister);
        HRESULT ( STDMETHODCALLTYPE *IsRunning )(
            __RPC__in IRunningObjectTable * This,
                               __RPC__in_opt IMoniker *pmkObjectName);
        HRESULT ( STDMETHODCALLTYPE *GetObject )(
            __RPC__in IRunningObjectTable * This,
                               __RPC__in_opt IMoniker *pmkObjectName,
                        __RPC__deref_out_opt IUnknown **ppunkObject);
        HRESULT ( STDMETHODCALLTYPE *NoteChangeTime )(
            __RPC__in IRunningObjectTable * This,
                       DWORD dwRegister,
                       __RPC__in FILETIME *pfiletime);
        HRESULT ( STDMETHODCALLTYPE *GetTimeOfLastChange )(
            __RPC__in IRunningObjectTable * This,
                               __RPC__in_opt IMoniker *pmkObjectName,
                        __RPC__out FILETIME *pfiletime);
        HRESULT ( STDMETHODCALLTYPE *EnumRunning )(
            __RPC__in IRunningObjectTable * This,
                        __RPC__deref_out_opt IEnumMoniker **ppenumMoniker);
        END_INTERFACE
    } IRunningObjectTableVtbl;
    interface IRunningObjectTable
    {
        CONST_VTBL struct IRunningObjectTableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Register(This,grfFlags,punkObject,pmkObjectName,pdwRegister) )
    ( (This)->lpVtbl -> Revoke(This,dwRegister) )
    ( (This)->lpVtbl -> IsRunning(This,pmkObjectName) )
    ( (This)->lpVtbl -> GetObject(This,pmkObjectName,ppunkObject) )
    ( (This)->lpVtbl -> NoteChangeTime(This,dwRegister,pfiletime) )
    ( (This)->lpVtbl -> GetTimeOfLastChange(This,pmkObjectName,pfiletime) )
    ( (This)->lpVtbl -> EnumRunning(This,ppenumMoniker) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0058_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0058_v0_0_s_ifspec;
typedef __RPC_unique_pointer IPersist *LPPERSIST;
EXTERN_C const IID IID_IPersist;
    typedef struct IPersistVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPersist * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPersist * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPersist * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in IPersist * This,
                        __RPC__out CLSID *pClassID);
        END_INTERFACE
    } IPersistVtbl;
    interface IPersist
    {
        CONST_VTBL struct IPersistVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
typedef __RPC_unique_pointer IPersistStream *LPPERSISTSTREAM;
EXTERN_C const IID IID_IPersistStream;
    typedef struct IPersistStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPersistStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPersistStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPersistStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in IPersistStream * This,
                        __RPC__out CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *IsDirty )(
            __RPC__in IPersistStream * This);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in IPersistStream * This,
                               __RPC__in_opt IStream *pStm);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IPersistStream * This,
                               __RPC__in_opt IStream *pStm,
                       BOOL fClearDirty);
        HRESULT ( STDMETHODCALLTYPE *GetSizeMax )(
            __RPC__in IPersistStream * This,
                        __RPC__out ULARGE_INTEGER *pcbSize);
        END_INTERFACE
    } IPersistStreamVtbl;
    interface IPersistStream
    {
        CONST_VTBL struct IPersistStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> IsDirty(This) )
    ( (This)->lpVtbl -> Load(This,pStm) )
    ( (This)->lpVtbl -> Save(This,pStm,fClearDirty) )
    ( (This)->lpVtbl -> GetSizeMax(This,pcbSize) )
typedef __RPC_unique_pointer IMoniker *LPMONIKER;
typedef
enum tagMKSYS
    {
        MKSYS_NONE = 0,
        MKSYS_GENERICCOMPOSITE = 1,
        MKSYS_FILEMONIKER = 2,
        MKSYS_ANTIMONIKER = 3,
        MKSYS_ITEMMONIKER = 4,
        MKSYS_POINTERMONIKER = 5,
        MKSYS_CLASSMONIKER = 7,
        MKSYS_OBJREFMONIKER = 8,
        MKSYS_SESSIONMONIKER = 9,
        MKSYS_LUAMONIKER = 10
    } MKSYS;
typedef
enum tagMKREDUCE
    {
        MKRREDUCE_ONE = ( 3 << 16 ) ,
        MKRREDUCE_TOUSER = ( 2 << 16 ) ,
        MKRREDUCE_THROUGHUSER = ( 1 << 16 ) ,
        MKRREDUCE_ALL = 0
    } MKRREDUCE;
EXTERN_C const IID IID_IMoniker;
    typedef struct IMonikerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMoniker * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMoniker * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMoniker * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in IMoniker * This,
                        __RPC__out CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *IsDirty )(
            __RPC__in IMoniker * This);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in IMoniker * This,
                               __RPC__in_opt IStream *pStm);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IMoniker * This,
                               __RPC__in_opt IStream *pStm,
                       BOOL fClearDirty);
        HRESULT ( STDMETHODCALLTYPE *GetSizeMax )(
            __RPC__in IMoniker * This,
                        __RPC__out ULARGE_INTEGER *pcbSize);
                      HRESULT ( STDMETHODCALLTYPE *BindToObject )(
            IMoniker * This,
            _In_ IBindCtx *pbc,
            _In_opt_ IMoniker *pmkToLeft,
            _In_ REFIID riidResult,
            _Outptr_ void **ppvResult);
                      HRESULT ( STDMETHODCALLTYPE *BindToStorage )(
            IMoniker * This,
            _In_ IBindCtx *pbc,
            _In_opt_ IMoniker *pmkToLeft,
            _In_ REFIID riid,
            _Outptr_ void **ppvObj);
        HRESULT ( STDMETHODCALLTYPE *Reduce )(
            __RPC__in IMoniker * This,
                               __RPC__in_opt IBindCtx *pbc,
                       DWORD dwReduceHowFar,
                                    __RPC__deref_opt_inout_opt IMoniker **ppmkToLeft,
                        __RPC__deref_out_opt IMoniker **ppmkReduced);
        HRESULT ( STDMETHODCALLTYPE *ComposeWith )(
            __RPC__in IMoniker * This,
                               __RPC__in_opt IMoniker *pmkRight,
                       BOOL fOnlyIfNotGeneric,
                        __RPC__deref_out_opt IMoniker **ppmkComposite);
        HRESULT ( STDMETHODCALLTYPE *Enum )(
            __RPC__in IMoniker * This,
                       BOOL fForward,
                        __RPC__deref_out_opt IEnumMoniker **ppenumMoniker);
        HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            __RPC__in IMoniker * This,
                               __RPC__in_opt IMoniker *pmkOtherMoniker);
        HRESULT ( STDMETHODCALLTYPE *Hash )(
            __RPC__in IMoniker * This,
                        __RPC__out DWORD *pdwHash);
        HRESULT ( STDMETHODCALLTYPE *IsRunning )(
            __RPC__in IMoniker * This,
                               __RPC__in_opt IBindCtx *pbc,
                               __RPC__in_opt IMoniker *pmkToLeft,
                               __RPC__in_opt IMoniker *pmkNewlyRunning);
        HRESULT ( STDMETHODCALLTYPE *GetTimeOfLastChange )(
            __RPC__in IMoniker * This,
                               __RPC__in_opt IBindCtx *pbc,
                               __RPC__in_opt IMoniker *pmkToLeft,
                        __RPC__out FILETIME *pFileTime);
        HRESULT ( STDMETHODCALLTYPE *Inverse )(
            __RPC__in IMoniker * This,
                        __RPC__deref_out_opt IMoniker **ppmk);
        HRESULT ( STDMETHODCALLTYPE *CommonPrefixWith )(
            __RPC__in IMoniker * This,
                               __RPC__in_opt IMoniker *pmkOther,
                        __RPC__deref_out_opt IMoniker **ppmkPrefix);
        HRESULT ( STDMETHODCALLTYPE *RelativePathTo )(
            __RPC__in IMoniker * This,
                               __RPC__in_opt IMoniker *pmkOther,
                        __RPC__deref_out_opt IMoniker **ppmkRelPath);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in IMoniker * This,
                               __RPC__in_opt IBindCtx *pbc,
                               __RPC__in_opt IMoniker *pmkToLeft,
                        __RPC__deref_out_opt LPOLESTR *ppszDisplayName);
        HRESULT ( STDMETHODCALLTYPE *ParseDisplayName )(
            __RPC__in IMoniker * This,
                               __RPC__in_opt IBindCtx *pbc,
                               __RPC__in_opt IMoniker *pmkToLeft,
                       __RPC__in LPOLESTR pszDisplayName,
                        __RPC__out ULONG *pchEaten,
                        __RPC__deref_out_opt IMoniker **ppmkOut);
        HRESULT ( STDMETHODCALLTYPE *IsSystemMoniker )(
            __RPC__in IMoniker * This,
                        __RPC__out DWORD *pdwMksys);
        END_INTERFACE
    } IMonikerVtbl;
    interface IMoniker
    {
        CONST_VTBL struct IMonikerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> IsDirty(This) )
    ( (This)->lpVtbl -> Load(This,pStm) )
    ( (This)->lpVtbl -> Save(This,pStm,fClearDirty) )
    ( (This)->lpVtbl -> GetSizeMax(This,pcbSize) )
    ( (This)->lpVtbl -> BindToObject(This,pbc,pmkToLeft,riidResult,ppvResult) )
    ( (This)->lpVtbl -> BindToStorage(This,pbc,pmkToLeft,riid,ppvObj) )
    ( (This)->lpVtbl -> Reduce(This,pbc,dwReduceHowFar,ppmkToLeft,ppmkReduced) )
    ( (This)->lpVtbl -> ComposeWith(This,pmkRight,fOnlyIfNotGeneric,ppmkComposite) )
    ( (This)->lpVtbl -> Enum(This,fForward,ppenumMoniker) )
    ( (This)->lpVtbl -> IsEqual(This,pmkOtherMoniker) )
    ( (This)->lpVtbl -> Hash(This,pdwHash) )
    ( (This)->lpVtbl -> IsRunning(This,pbc,pmkToLeft,pmkNewlyRunning) )
    ( (This)->lpVtbl -> GetTimeOfLastChange(This,pbc,pmkToLeft,pFileTime) )
    ( (This)->lpVtbl -> Inverse(This,ppmk) )
    ( (This)->lpVtbl -> CommonPrefixWith(This,pmkOther,ppmkPrefix) )
    ( (This)->lpVtbl -> RelativePathTo(This,pmkOther,ppmkRelPath) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbc,pmkToLeft,ppszDisplayName) )
    ( (This)->lpVtbl -> ParseDisplayName(This,pbc,pmkToLeft,pszDisplayName,pchEaten,ppmkOut) )
    ( (This)->lpVtbl -> IsSystemMoniker(This,pdwMksys) )
                HRESULT STDMETHODCALLTYPE IMoniker_RemoteBindToObject_Proxy(
    __RPC__in IMoniker * This,
                       __RPC__in_opt IBindCtx *pbc,
                       __RPC__in_opt IMoniker *pmkToLeft,
               __RPC__in REFIID riidResult,
                        __RPC__deref_out_opt IUnknown **ppvResult);
void __RPC_STUB IMoniker_RemoteBindToObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMoniker_RemoteBindToStorage_Proxy(
    __RPC__in IMoniker * This,
                       __RPC__in_opt IBindCtx *pbc,
                       __RPC__in_opt IMoniker *pmkToLeft,
               __RPC__in REFIID riid,
                        __RPC__deref_out_opt IUnknown **ppvObj);
void __RPC_STUB IMoniker_RemoteBindToStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0061_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0061_v0_0_s_ifspec;
EXTERN_C const IID IID_IROTData;
    typedef struct IROTDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IROTData * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IROTData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IROTData * This);
        HRESULT ( STDMETHODCALLTYPE *GetComparisonData )(
            __RPC__in IROTData * This,
                                 __RPC__out_ecount_full(cbMax) byte *pbData,
                       ULONG cbMax,
                        __RPC__out ULONG *pcbData);
        END_INTERFACE
    } IROTDataVtbl;
    interface IROTData
    {
        CONST_VTBL struct IROTDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetComparisonData(This,pbData,cbMax,pcbData) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0062_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0062_v0_0_s_ifspec;
typedef __RPC_unique_pointer IEnumSTATSTG *LPENUMSTATSTG;
EXTERN_C const IID IID_IEnumSTATSTG;
    typedef struct IEnumSTATSTGVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumSTATSTG * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumSTATSTG * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumSTATSTG * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumSTATSTG * This,
                       ULONG celt,
            _Out_writes_to_(celt,*pceltFetched) STATSTG *rgelt,
            _Out_opt_ ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumSTATSTG * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumSTATSTG * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumSTATSTG * This,
                        __RPC__deref_out_opt IEnumSTATSTG **ppenum);
        END_INTERFACE
    } IEnumSTATSTGVtbl;
    interface IEnumSTATSTG
    {
        CONST_VTBL struct IEnumSTATSTGVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
                HRESULT STDMETHODCALLTYPE IEnumSTATSTG_RemoteNext_Proxy(
    __RPC__in IEnumSTATSTG * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) STATSTG *rgelt,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumSTATSTG_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef __RPC_unique_pointer IStorage *LPSTORAGE;
typedef struct tagRemSNB
    {
    ULONG ulCntStr;
    ULONG ulCntChar;
                    OLECHAR rgString[ 1 ];
    } RemSNB;
typedef __RPC_unique_pointer RemSNB *wireSNB;
typedef _Null_terminated_ LPOLESTR *SNB;
EXTERN_C const IID IID_IStorage;
    typedef struct IStorageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStorage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStorage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStorage * This);
        HRESULT ( STDMETHODCALLTYPE *CreateStream )(
            __RPC__in IStorage * This,
                               __RPC__in_string const OLECHAR *pwcsName,
                       DWORD grfMode,
                       DWORD reserved1,
                       DWORD reserved2,
                        __RPC__deref_out_opt IStream **ppstm);
                      HRESULT ( STDMETHODCALLTYPE *OpenStream )(
            IStorage * This,
            _In_z_ const OLECHAR *pwcsName,
            _Reserved_ void *reserved1,
                       DWORD grfMode,
                       DWORD reserved2,
            _Outptr_ IStream **ppstm);
        HRESULT ( STDMETHODCALLTYPE *CreateStorage )(
            __RPC__in IStorage * This,
                               __RPC__in_string const OLECHAR *pwcsName,
                       DWORD grfMode,
                       DWORD reserved1,
                       DWORD reserved2,
                        __RPC__deref_out_opt IStorage **ppstg);
        HRESULT ( STDMETHODCALLTYPE *OpenStorage )(
            __RPC__in IStorage * This,
                                       __RPC__in_opt_string const OLECHAR *pwcsName,
                               __RPC__in_opt IStorage *pstgPriority,
                       DWORD grfMode,
                               __RPC__deref_opt_in_opt SNB snbExclude,
                       DWORD reserved,
                        __RPC__deref_out_opt IStorage **ppstg);
                      HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            IStorage * This,
                       DWORD ciidExclude,
            _In_reads_opt_(ciidExclude) const IID *rgiidExclude,
            _In_opt_ SNB snbExclude,
            _In_ IStorage *pstgDest);
        HRESULT ( STDMETHODCALLTYPE *MoveElementTo )(
            __RPC__in IStorage * This,
                               __RPC__in_string const OLECHAR *pwcsName,
                               __RPC__in_opt IStorage *pstgDest,
                               __RPC__in_string const OLECHAR *pwcsNewName,
                       DWORD grfFlags);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IStorage * This,
                       DWORD grfCommitFlags);
        HRESULT ( STDMETHODCALLTYPE *Revert )(
            __RPC__in IStorage * This);
                      HRESULT ( STDMETHODCALLTYPE *EnumElements )(
            IStorage * This,
            _Reserved_ DWORD reserved1,
            _Reserved_ void *reserved2,
            _Reserved_ DWORD reserved3,
            _Outptr_ IEnumSTATSTG **ppenum);
        HRESULT ( STDMETHODCALLTYPE *DestroyElement )(
            __RPC__in IStorage * This,
                               __RPC__in_string const OLECHAR *pwcsName);
        HRESULT ( STDMETHODCALLTYPE *RenameElement )(
            __RPC__in IStorage * This,
                               __RPC__in_string const OLECHAR *pwcsOldName,
                               __RPC__in_string const OLECHAR *pwcsNewName);
        HRESULT ( STDMETHODCALLTYPE *SetElementTimes )(
            __RPC__in IStorage * This,
                                       __RPC__in_opt_string const OLECHAR *pwcsName,
                               __RPC__in_opt const FILETIME *pctime,
                               __RPC__in_opt const FILETIME *patime,
                               __RPC__in_opt const FILETIME *pmtime);
        HRESULT ( STDMETHODCALLTYPE *SetClass )(
            __RPC__in IStorage * This,
                       __RPC__in REFCLSID clsid);
        HRESULT ( STDMETHODCALLTYPE *SetStateBits )(
            __RPC__in IStorage * This,
                       DWORD grfStateBits,
                       DWORD grfMask);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            __RPC__in IStorage * This,
                        __RPC__out STATSTG *pstatstg,
                       DWORD grfStatFlag);
        END_INTERFACE
    } IStorageVtbl;
    interface IStorage
    {
        CONST_VTBL struct IStorageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateStream(This,pwcsName,grfMode,reserved1,reserved2,ppstm) )
    ( (This)->lpVtbl -> OpenStream(This,pwcsName,reserved1,grfMode,reserved2,ppstm) )
    ( (This)->lpVtbl -> CreateStorage(This,pwcsName,grfMode,reserved1,reserved2,ppstg) )
    ( (This)->lpVtbl -> OpenStorage(This,pwcsName,pstgPriority,grfMode,snbExclude,reserved,ppstg) )
    ( (This)->lpVtbl -> CopyTo(This,ciidExclude,rgiidExclude,snbExclude,pstgDest) )
    ( (This)->lpVtbl -> MoveElementTo(This,pwcsName,pstgDest,pwcsNewName,grfFlags) )
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
    ( (This)->lpVtbl -> Revert(This) )
    ( (This)->lpVtbl -> EnumElements(This,reserved1,reserved2,reserved3,ppenum) )
    ( (This)->lpVtbl -> DestroyElement(This,pwcsName) )
    ( (This)->lpVtbl -> RenameElement(This,pwcsOldName,pwcsNewName) )
    ( (This)->lpVtbl -> SetElementTimes(This,pwcsName,pctime,patime,pmtime) )
    ( (This)->lpVtbl -> SetClass(This,clsid) )
    ( (This)->lpVtbl -> SetStateBits(This,grfStateBits,grfMask) )
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
                HRESULT STDMETHODCALLTYPE IStorage_RemoteOpenStream_Proxy(
    __RPC__in IStorage * This,
                       __RPC__in_string const OLECHAR *pwcsName,
               ULONG cbReserved1,
                                __RPC__in_ecount_full_opt(cbReserved1) byte *reserved1,
               DWORD grfMode,
               DWORD reserved2,
                __RPC__deref_out_opt IStream **ppstm);
void __RPC_STUB IStorage_RemoteOpenStream_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IStorage_RemoteCopyTo_Proxy(
    __RPC__in IStorage * This,
               DWORD ciidExclude,
                                __RPC__in_ecount_full_opt(ciidExclude) const IID *rgiidExclude,
                       __RPC__deref_opt_in_opt SNB snbExclude,
                       __RPC__in_opt IStorage *pstgDest);
void __RPC_STUB IStorage_RemoteCopyTo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IStorage_RemoteEnumElements_Proxy(
    __RPC__in IStorage * This,
               DWORD reserved1,
               ULONG cbReserved2,
                                __RPC__in_ecount_full_opt(cbReserved2) byte *reserved2,
               DWORD reserved3,
                __RPC__deref_out_opt IEnumSTATSTG **ppenum);
void __RPC_STUB IStorage_RemoteEnumElements_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0064_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0064_v0_0_s_ifspec;
typedef __RPC_unique_pointer IPersistFile *LPPERSISTFILE;
EXTERN_C const IID IID_IPersistFile;
    typedef struct IPersistFileVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPersistFile * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPersistFile * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPersistFile * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in IPersistFile * This,
                        __RPC__out CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *IsDirty )(
            __RPC__in IPersistFile * This);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in IPersistFile * This,
                       __RPC__in LPCOLESTR pszFileName,
                       DWORD dwMode);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IPersistFile * This,
                               __RPC__in_opt LPCOLESTR pszFileName,
                       BOOL fRemember);
        HRESULT ( STDMETHODCALLTYPE *SaveCompleted )(
            __RPC__in IPersistFile * This,
                               __RPC__in_opt LPCOLESTR pszFileName);
        HRESULT ( STDMETHODCALLTYPE *GetCurFile )(
            __RPC__in IPersistFile * This,
                        __RPC__deref_out_opt LPOLESTR *ppszFileName);
        END_INTERFACE
    } IPersistFileVtbl;
    interface IPersistFile
    {
        CONST_VTBL struct IPersistFileVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> IsDirty(This) )
    ( (This)->lpVtbl -> Load(This,pszFileName,dwMode) )
    ( (This)->lpVtbl -> Save(This,pszFileName,fRemember) )
    ( (This)->lpVtbl -> SaveCompleted(This,pszFileName) )
    ( (This)->lpVtbl -> GetCurFile(This,ppszFileName) )
typedef __RPC_unique_pointer IPersistStorage *LPPERSISTSTORAGE;
EXTERN_C const IID IID_IPersistStorage;
    typedef struct IPersistStorageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPersistStorage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPersistStorage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPersistStorage * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in IPersistStorage * This,
                        __RPC__out CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *IsDirty )(
            __RPC__in IPersistStorage * This);
        HRESULT ( STDMETHODCALLTYPE *InitNew )(
            __RPC__in IPersistStorage * This,
                               __RPC__in_opt IStorage *pStg);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in IPersistStorage * This,
                               __RPC__in_opt IStorage *pStg);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IPersistStorage * This,
                               __RPC__in_opt IStorage *pStgSave,
                       BOOL fSameAsLoad);
        HRESULT ( STDMETHODCALLTYPE *SaveCompleted )(
            __RPC__in IPersistStorage * This,
                               __RPC__in_opt IStorage *pStgNew);
        HRESULT ( STDMETHODCALLTYPE *HandsOffStorage )(
            __RPC__in IPersistStorage * This);
        END_INTERFACE
    } IPersistStorageVtbl;
    interface IPersistStorage
    {
        CONST_VTBL struct IPersistStorageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> IsDirty(This) )
    ( (This)->lpVtbl -> InitNew(This,pStg) )
    ( (This)->lpVtbl -> Load(This,pStg) )
    ( (This)->lpVtbl -> Save(This,pStgSave,fSameAsLoad) )
    ( (This)->lpVtbl -> SaveCompleted(This,pStgNew) )
    ( (This)->lpVtbl -> HandsOffStorage(This) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0066_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0066_v0_0_s_ifspec;
typedef __RPC_unique_pointer ILockBytes *LPLOCKBYTES;
EXTERN_C const IID IID_ILockBytes;
    typedef struct ILockBytesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILockBytes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILockBytes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILockBytes * This);
                      HRESULT ( STDMETHODCALLTYPE *ReadAt )(
            ILockBytes * This,
                       ULARGE_INTEGER ulOffset,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
                       ULONG cb,
            _Out_opt_ ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *WriteAt )(
            ILockBytes * This,
                       ULARGE_INTEGER ulOffset,
            _In_reads_bytes_(cb) const void *pv,
                       ULONG cb,
            _Out_opt_ ULONG *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            __RPC__in ILockBytes * This);
        HRESULT ( STDMETHODCALLTYPE *SetSize )(
            __RPC__in ILockBytes * This,
                       ULARGE_INTEGER cb);
        HRESULT ( STDMETHODCALLTYPE *LockRegion )(
            __RPC__in ILockBytes * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )(
            __RPC__in ILockBytes * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            __RPC__in ILockBytes * This,
                        __RPC__out STATSTG *pstatstg,
                       DWORD grfStatFlag);
        END_INTERFACE
    } ILockBytesVtbl;
    interface ILockBytes
    {
        CONST_VTBL struct ILockBytesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReadAt(This,ulOffset,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> WriteAt(This,ulOffset,pv,cb,pcbWritten) )
    ( (This)->lpVtbl -> Flush(This) )
    ( (This)->lpVtbl -> SetSize(This,cb) )
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
                HRESULT __stdcall ILockBytes_RemoteReadAt_Proxy(
    __RPC__in ILockBytes * This,
               ULARGE_INTEGER ulOffset,
                                    __RPC__out_ecount_part(cb, *pcbRead) byte *pv,
               ULONG cb,
                __RPC__out ULONG *pcbRead);
void __RPC_STUB ILockBytes_RemoteReadAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ILockBytes_RemoteWriteAt_Proxy(
    __RPC__in ILockBytes * This,
               ULARGE_INTEGER ulOffset,
                        __RPC__in_ecount_full(cb) const byte *pv,
               ULONG cb,
                __RPC__out ULONG *pcbWritten);
void __RPC_STUB ILockBytes_RemoteWriteAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef __RPC_unique_pointer IEnumFORMATETC *LPENUMFORMATETC;
typedef struct tagDVTARGETDEVICE
    {
    DWORD tdSize;
    WORD tdDriverNameOffset;
    WORD tdDeviceNameOffset;
    WORD tdPortNameOffset;
    WORD tdExtDevmodeOffset;
                    BYTE tdData[ 1 ];
    } DVTARGETDEVICE;
typedef CLIPFORMAT *LPCLIPFORMAT;
typedef struct tagFORMATETC
    {
    CLIPFORMAT cfFormat;
                   DVTARGETDEVICE *ptd;
    DWORD dwAspect;
    LONG lindex;
    DWORD tymed;
    } FORMATETC;
typedef struct tagFORMATETC *LPFORMATETC;
EXTERN_C const IID IID_IEnumFORMATETC;
    typedef struct IEnumFORMATETCVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumFORMATETC * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumFORMATETC * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumFORMATETC * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumFORMATETC * This,
                       ULONG celt,
            _Out_writes_to_(celt,*pceltFetched) FORMATETC *rgelt,
            _Out_opt_ ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumFORMATETC * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumFORMATETC * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumFORMATETC * This,
                        __RPC__deref_out_opt IEnumFORMATETC **ppenum);
        END_INTERFACE
    } IEnumFORMATETCVtbl;
    interface IEnumFORMATETC
    {
        CONST_VTBL struct IEnumFORMATETCVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
                HRESULT STDMETHODCALLTYPE IEnumFORMATETC_RemoteNext_Proxy(
    __RPC__in IEnumFORMATETC * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) FORMATETC *rgelt,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumFORMATETC_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef __RPC_unique_pointer IEnumSTATDATA *LPENUMSTATDATA;
typedef
enum tagADVF
    {
        ADVF_NODATA = 1,
        ADVF_PRIMEFIRST = 2,
        ADVF_ONLYONCE = 4,
        ADVF_DATAONSTOP = 64,
        ADVFCACHE_NOHANDLER = 8,
        ADVFCACHE_FORCEBUILTIN = 16,
        ADVFCACHE_ONSAVE = 32
    } ADVF;
typedef struct tagSTATDATA
    {
    FORMATETC formatetc;
    DWORD advf;
                   IAdviseSink *pAdvSink;
    DWORD dwConnection;
    } STATDATA;
typedef STATDATA *LPSTATDATA;
EXTERN_C const IID IID_IEnumSTATDATA;
    typedef struct IEnumSTATDATAVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumSTATDATA * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumSTATDATA * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumSTATDATA * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumSTATDATA * This,
                       ULONG celt,
            _Out_writes_to_(celt,*pceltFetched) STATDATA *rgelt,
            _Out_opt_ ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumSTATDATA * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumSTATDATA * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumSTATDATA * This,
                        __RPC__deref_out_opt IEnumSTATDATA **ppenum);
        END_INTERFACE
    } IEnumSTATDATAVtbl;
    interface IEnumSTATDATA
    {
        CONST_VTBL struct IEnumSTATDATAVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
                HRESULT STDMETHODCALLTYPE IEnumSTATDATA_RemoteNext_Proxy(
    __RPC__in IEnumSTATDATA * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) STATDATA *rgelt,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumSTATDATA_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef __RPC_unique_pointer IRootStorage *LPROOTSTORAGE;
EXTERN_C const IID IID_IRootStorage;
    typedef struct IRootStorageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRootStorage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRootStorage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRootStorage * This);
        HRESULT ( STDMETHODCALLTYPE *SwitchToFile )(
            __RPC__in IRootStorage * This,
                       __RPC__in LPOLESTR pszFile);
        END_INTERFACE
    } IRootStorageVtbl;
    interface IRootStorage
    {
        CONST_VTBL struct IRootStorageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SwitchToFile(This,pszFile) )
typedef IAdviseSink *LPADVISESINK;
typedef
enum tagTYMED
    {
        TYMED_HGLOBAL = 1,
        TYMED_FILE = 2,
        TYMED_ISTREAM = 4,
        TYMED_ISTORAGE = 8,
        TYMED_GDI = 16,
        TYMED_MFPICT = 32,
        TYMED_ENHMF = 64,
        TYMED_NULL = 0
    } TYMED;
#pragma warning(disable:4200)
typedef struct tagRemSTGMEDIUM
    {
    DWORD tymed;
    DWORD dwHandleType;
    ULONG pData;
    ULONG pUnkForRelease;
    ULONG cbData;
                    byte data[ 1 ];
    } RemSTGMEDIUM;
#pragma warning(default:4200)
typedef struct tagSTGMEDIUM {
    DWORD tymed;
    union {
        HBITMAP hBitmap;
        HMETAFILEPICT hMetaFilePict;
        HENHMETAFILE hEnhMetaFile;
        HGLOBAL hGlobal;
        LPOLESTR lpszFileName;
        IStream *pstm;
        IStorage *pstg;
        } u;
    IUnknown *pUnkForRelease;
}uSTGMEDIUM;
typedef struct _GDI_OBJECT
    {
    DWORD ObjectType;
                                          union __MIDL_IAdviseSink_0002
        {
                       wireHBITMAP hBitmap;
                       wireHPALETTE hPalette;
                        wireHGLOBAL hGeneric;
        } u;
    } GDI_OBJECT;
typedef struct _userSTGMEDIUM
    {
    struct _STGMEDIUM_UNION
        {
        DWORD tymed;
                                              union __MIDL_IAdviseSink_0003
            {
                           wireHMETAFILEPICT hMetaFilePict;
                           wireHENHMETAFILE hHEnhMetaFile;
                           GDI_OBJECT *hGdiHandle;
                           wireHGLOBAL hGlobal;
                           LPOLESTR lpszFileName;
                           BYTE_BLOB *pstm;
                           BYTE_BLOB *pstg;
            } u;
        } DUMMYUNIONNAME;
    IUnknown *pUnkForRelease;
    } userSTGMEDIUM;
typedef __RPC_unique_pointer userSTGMEDIUM *wireSTGMEDIUM;
typedef uSTGMEDIUM STGMEDIUM;
typedef __RPC_unique_pointer userSTGMEDIUM *wireASYNC_STGMEDIUM;
typedef STGMEDIUM ASYNC_STGMEDIUM;
typedef STGMEDIUM *LPSTGMEDIUM;
typedef struct _userFLAG_STGMEDIUM
    {
    LONG ContextFlags;
    LONG fPassOwnership;
    userSTGMEDIUM Stgmed;
    } userFLAG_STGMEDIUM;
typedef __RPC_unique_pointer userFLAG_STGMEDIUM *wireFLAG_STGMEDIUM;
typedef struct _FLAG_STGMEDIUM
    {
    LONG ContextFlags;
    LONG fPassOwnership;
    STGMEDIUM Stgmed;
    } FLAG_STGMEDIUM;
EXTERN_C const IID IID_IAdviseSink;
    typedef struct IAdviseSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAdviseSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAdviseSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAdviseSink * This);
                      void ( STDMETHODCALLTYPE *OnDataChange )(
            IAdviseSink * This,
            _In_ FORMATETC *pFormatetc,
            _In_ STGMEDIUM *pStgmed);
                      void ( STDMETHODCALLTYPE *OnViewChange )(
            IAdviseSink * This,
                       DWORD dwAspect,
                       LONG lindex);
                      void ( STDMETHODCALLTYPE *OnRename )(
            IAdviseSink * This,
            _In_ IMoniker *pmk);
                      void ( STDMETHODCALLTYPE *OnSave )(
            IAdviseSink * This);
                      void ( STDMETHODCALLTYPE *OnClose )(
            IAdviseSink * This);
        END_INTERFACE
    } IAdviseSinkVtbl;
    interface IAdviseSink
    {
        CONST_VTBL struct IAdviseSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnDataChange(This,pFormatetc,pStgmed) )
    ( (This)->lpVtbl -> OnViewChange(This,dwAspect,lindex) )
    ( (This)->lpVtbl -> OnRename(This,pmk) )
    ( (This)->lpVtbl -> OnSave(This) )
    ( (This)->lpVtbl -> OnClose(This) )
                HRESULT STDMETHODCALLTYPE IAdviseSink_RemoteOnDataChange_Proxy(
    __RPC__in IAdviseSink * This,
                       __RPC__in_opt FORMATETC *pFormatetc,
                       __RPC__in_opt ASYNC_STGMEDIUM *pStgmed);
void __RPC_STUB IAdviseSink_RemoteOnDataChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IAdviseSink_RemoteOnViewChange_Proxy(
    __RPC__in IAdviseSink * This,
               DWORD dwAspect,
               LONG lindex);
void __RPC_STUB IAdviseSink_RemoteOnViewChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IAdviseSink_RemoteOnRename_Proxy(
    __RPC__in IAdviseSink * This,
               __RPC__in_opt IMoniker *pmk);
void __RPC_STUB IAdviseSink_RemoteOnRename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IAdviseSink_RemoteOnSave_Proxy(
    __RPC__in IAdviseSink * This);
void __RPC_STUB IAdviseSink_RemoteOnSave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IAdviseSink_RemoteOnClose_Proxy(
    __RPC__in IAdviseSink * This);
void __RPC_STUB IAdviseSink_RemoteOnClose_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_AsyncIAdviseSink;
    typedef struct AsyncIAdviseSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIAdviseSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIAdviseSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIAdviseSink * This);
                      void ( STDMETHODCALLTYPE *Begin_OnDataChange )(
            AsyncIAdviseSink * This,
            _In_ FORMATETC *pFormatetc,
            _In_ STGMEDIUM *pStgmed);
                      void ( STDMETHODCALLTYPE *Finish_OnDataChange )(
            AsyncIAdviseSink * This);
                      void ( STDMETHODCALLTYPE *Begin_OnViewChange )(
            AsyncIAdviseSink * This,
                       DWORD dwAspect,
                       LONG lindex);
                      void ( STDMETHODCALLTYPE *Finish_OnViewChange )(
            AsyncIAdviseSink * This);
                      void ( STDMETHODCALLTYPE *Begin_OnRename )(
            AsyncIAdviseSink * This,
            _In_ IMoniker *pmk);
                      void ( STDMETHODCALLTYPE *Finish_OnRename )(
            AsyncIAdviseSink * This);
                      void ( STDMETHODCALLTYPE *Begin_OnSave )(
            AsyncIAdviseSink * This);
                      void ( STDMETHODCALLTYPE *Finish_OnSave )(
            AsyncIAdviseSink * This);
                      void ( STDMETHODCALLTYPE *Begin_OnClose )(
            AsyncIAdviseSink * This);
                      void ( STDMETHODCALLTYPE *Finish_OnClose )(
            AsyncIAdviseSink * This);
        END_INTERFACE
    } AsyncIAdviseSinkVtbl;
    interface AsyncIAdviseSink
    {
        CONST_VTBL struct AsyncIAdviseSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_OnDataChange(This,pFormatetc,pStgmed) )
    ( (This)->lpVtbl -> Finish_OnDataChange(This) )
    ( (This)->lpVtbl -> Begin_OnViewChange(This,dwAspect,lindex) )
    ( (This)->lpVtbl -> Finish_OnViewChange(This) )
    ( (This)->lpVtbl -> Begin_OnRename(This,pmk) )
    ( (This)->lpVtbl -> Finish_OnRename(This) )
    ( (This)->lpVtbl -> Begin_OnSave(This) )
    ( (This)->lpVtbl -> Finish_OnSave(This) )
    ( (This)->lpVtbl -> Begin_OnClose(This) )
    ( (This)->lpVtbl -> Finish_OnClose(This) )
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_RemoteOnDataChange_Proxy(
    __RPC__in AsyncIAdviseSink * This,
                       __RPC__in_opt FORMATETC *pFormatetc,
                       __RPC__in_opt ASYNC_STGMEDIUM *pStgmed);
void __RPC_STUB AsyncIAdviseSink_Begin_RemoteOnDataChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_RemoteOnDataChange_Proxy(
    __RPC__in AsyncIAdviseSink * This);
void __RPC_STUB AsyncIAdviseSink_Finish_RemoteOnDataChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_RemoteOnViewChange_Proxy(
    __RPC__in AsyncIAdviseSink * This,
               DWORD dwAspect,
               LONG lindex);
void __RPC_STUB AsyncIAdviseSink_Begin_RemoteOnViewChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_RemoteOnViewChange_Proxy(
    __RPC__in AsyncIAdviseSink * This);
void __RPC_STUB AsyncIAdviseSink_Finish_RemoteOnViewChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_RemoteOnRename_Proxy(
    __RPC__in AsyncIAdviseSink * This,
               __RPC__in_opt IMoniker *pmk);
void __RPC_STUB AsyncIAdviseSink_Begin_RemoteOnRename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_RemoteOnRename_Proxy(
    __RPC__in AsyncIAdviseSink * This);
void __RPC_STUB AsyncIAdviseSink_Finish_RemoteOnRename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_RemoteOnSave_Proxy(
    __RPC__in AsyncIAdviseSink * This);
void __RPC_STUB AsyncIAdviseSink_Begin_RemoteOnSave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_RemoteOnSave_Proxy(
    __RPC__in AsyncIAdviseSink * This);
void __RPC_STUB AsyncIAdviseSink_Finish_RemoteOnSave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_RemoteOnClose_Proxy(
    __RPC__in AsyncIAdviseSink * This);
void __RPC_STUB AsyncIAdviseSink_Begin_RemoteOnClose_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_RemoteOnClose_Proxy(
    __RPC__in AsyncIAdviseSink * This);
void __RPC_STUB AsyncIAdviseSink_Finish_RemoteOnClose_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0071_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0071_v0_0_s_ifspec;
typedef __RPC_unique_pointer IAdviseSink2 *LPADVISESINK2;
EXTERN_C const IID IID_IAdviseSink2;
    typedef struct IAdviseSink2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAdviseSink2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAdviseSink2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAdviseSink2 * This);
                      void ( STDMETHODCALLTYPE *OnDataChange )(
            IAdviseSink2 * This,
            _In_ FORMATETC *pFormatetc,
            _In_ STGMEDIUM *pStgmed);
                      void ( STDMETHODCALLTYPE *OnViewChange )(
            IAdviseSink2 * This,
                       DWORD dwAspect,
                       LONG lindex);
                      void ( STDMETHODCALLTYPE *OnRename )(
            IAdviseSink2 * This,
            _In_ IMoniker *pmk);
                      void ( STDMETHODCALLTYPE *OnSave )(
            IAdviseSink2 * This);
                      void ( STDMETHODCALLTYPE *OnClose )(
            IAdviseSink2 * This);
                      void ( STDMETHODCALLTYPE *OnLinkSrcChange )(
            IAdviseSink2 * This,
            _In_ IMoniker *pmk);
        END_INTERFACE
    } IAdviseSink2Vtbl;
    interface IAdviseSink2
    {
        CONST_VTBL struct IAdviseSink2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnDataChange(This,pFormatetc,pStgmed) )
    ( (This)->lpVtbl -> OnViewChange(This,dwAspect,lindex) )
    ( (This)->lpVtbl -> OnRename(This,pmk) )
    ( (This)->lpVtbl -> OnSave(This) )
    ( (This)->lpVtbl -> OnClose(This) )
    ( (This)->lpVtbl -> OnLinkSrcChange(This,pmk) )
                HRESULT STDMETHODCALLTYPE IAdviseSink2_RemoteOnLinkSrcChange_Proxy(
    __RPC__in IAdviseSink2 * This,
                       __RPC__in_opt IMoniker *pmk);
void __RPC_STUB IAdviseSink2_RemoteOnLinkSrcChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_AsyncIAdviseSink2;
    typedef struct AsyncIAdviseSink2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIAdviseSink2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIAdviseSink2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIAdviseSink2 * This);
                      void ( STDMETHODCALLTYPE *Begin_OnDataChange )(
            AsyncIAdviseSink2 * This,
            _In_ FORMATETC *pFormatetc,
            _In_ STGMEDIUM *pStgmed);
                      void ( STDMETHODCALLTYPE *Finish_OnDataChange )(
            AsyncIAdviseSink2 * This);
                      void ( STDMETHODCALLTYPE *Begin_OnViewChange )(
            AsyncIAdviseSink2 * This,
                       DWORD dwAspect,
                       LONG lindex);
                      void ( STDMETHODCALLTYPE *Finish_OnViewChange )(
            AsyncIAdviseSink2 * This);
                      void ( STDMETHODCALLTYPE *Begin_OnRename )(
            AsyncIAdviseSink2 * This,
            _In_ IMoniker *pmk);
                      void ( STDMETHODCALLTYPE *Finish_OnRename )(
            AsyncIAdviseSink2 * This);
                      void ( STDMETHODCALLTYPE *Begin_OnSave )(
            AsyncIAdviseSink2 * This);
                      void ( STDMETHODCALLTYPE *Finish_OnSave )(
            AsyncIAdviseSink2 * This);
                      void ( STDMETHODCALLTYPE *Begin_OnClose )(
            AsyncIAdviseSink2 * This);
                      void ( STDMETHODCALLTYPE *Finish_OnClose )(
            AsyncIAdviseSink2 * This);
                      void ( STDMETHODCALLTYPE *Begin_OnLinkSrcChange )(
            AsyncIAdviseSink2 * This,
            _In_ IMoniker *pmk);
                      void ( STDMETHODCALLTYPE *Finish_OnLinkSrcChange )(
            AsyncIAdviseSink2 * This);
        END_INTERFACE
    } AsyncIAdviseSink2Vtbl;
    interface AsyncIAdviseSink2
    {
        CONST_VTBL struct AsyncIAdviseSink2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_OnDataChange(This,pFormatetc,pStgmed) )
    ( (This)->lpVtbl -> Finish_OnDataChange(This) )
    ( (This)->lpVtbl -> Begin_OnViewChange(This,dwAspect,lindex) )
    ( (This)->lpVtbl -> Finish_OnViewChange(This) )
    ( (This)->lpVtbl -> Begin_OnRename(This,pmk) )
    ( (This)->lpVtbl -> Finish_OnRename(This) )
    ( (This)->lpVtbl -> Begin_OnSave(This) )
    ( (This)->lpVtbl -> Finish_OnSave(This) )
    ( (This)->lpVtbl -> Begin_OnClose(This) )
    ( (This)->lpVtbl -> Finish_OnClose(This) )
    ( (This)->lpVtbl -> Begin_OnLinkSrcChange(This,pmk) )
    ( (This)->lpVtbl -> Finish_OnLinkSrcChange(This) )
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink2_Begin_RemoteOnLinkSrcChange_Proxy(
    __RPC__in AsyncIAdviseSink2 * This,
                       __RPC__in_opt IMoniker *pmk);
void __RPC_STUB AsyncIAdviseSink2_Begin_RemoteOnLinkSrcChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink2_Finish_RemoteOnLinkSrcChange_Proxy(
    __RPC__in AsyncIAdviseSink2 * This);
void __RPC_STUB AsyncIAdviseSink2_Finish_RemoteOnLinkSrcChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0072_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0072_v0_0_s_ifspec;
typedef __RPC_unique_pointer IDataObject *LPDATAOBJECT;
typedef
enum tagDATADIR
    {
        DATADIR_GET = 1,
        DATADIR_SET = 2
    } DATADIR;
EXTERN_C const IID IID_IDataObject;
    typedef struct IDataObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDataObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDataObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDataObject * This);
                      HRESULT ( STDMETHODCALLTYPE *GetData )(
            IDataObject * This,
            _In_ FORMATETC *pformatetcIn,
            _Out_ STGMEDIUM *pmedium);
                      HRESULT ( STDMETHODCALLTYPE *GetDataHere )(
            IDataObject * This,
            _In_ FORMATETC *pformatetc,
            _Inout_ STGMEDIUM *pmedium);
        HRESULT ( STDMETHODCALLTYPE *QueryGetData )(
            __RPC__in IDataObject * This,
                               __RPC__in_opt FORMATETC *pformatetc);
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalFormatEtc )(
            __RPC__in IDataObject * This,
                               __RPC__in_opt FORMATETC *pformatectIn,
                        __RPC__out FORMATETC *pformatetcOut);
                      HRESULT ( STDMETHODCALLTYPE *SetData )(
            IDataObject * This,
            _In_ FORMATETC *pformatetc,
            _In_ STGMEDIUM *pmedium,
                       BOOL fRelease);
        HRESULT ( STDMETHODCALLTYPE *EnumFormatEtc )(
            __RPC__in IDataObject * This,
                       DWORD dwDirection,
                        __RPC__deref_out_opt IEnumFORMATETC **ppenumFormatEtc);
        HRESULT ( STDMETHODCALLTYPE *DAdvise )(
            __RPC__in IDataObject * This,
                       __RPC__in FORMATETC *pformatetc,
                       DWORD advf,
                               __RPC__in_opt IAdviseSink *pAdvSink,
                        __RPC__out DWORD *pdwConnection);
        HRESULT ( STDMETHODCALLTYPE *DUnadvise )(
            __RPC__in IDataObject * This,
                       DWORD dwConnection);
        HRESULT ( STDMETHODCALLTYPE *EnumDAdvise )(
            __RPC__in IDataObject * This,
                        __RPC__deref_out_opt IEnumSTATDATA **ppenumAdvise);
        END_INTERFACE
    } IDataObjectVtbl;
    interface IDataObject
    {
        CONST_VTBL struct IDataObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetData(This,pformatetcIn,pmedium) )
    ( (This)->lpVtbl -> GetDataHere(This,pformatetc,pmedium) )
    ( (This)->lpVtbl -> QueryGetData(This,pformatetc) )
    ( (This)->lpVtbl -> GetCanonicalFormatEtc(This,pformatectIn,pformatetcOut) )
    ( (This)->lpVtbl -> SetData(This,pformatetc,pmedium,fRelease) )
    ( (This)->lpVtbl -> EnumFormatEtc(This,dwDirection,ppenumFormatEtc) )
    ( (This)->lpVtbl -> DAdvise(This,pformatetc,advf,pAdvSink,pdwConnection) )
    ( (This)->lpVtbl -> DUnadvise(This,dwConnection) )
    ( (This)->lpVtbl -> EnumDAdvise(This,ppenumAdvise) )
                HRESULT STDMETHODCALLTYPE IDataObject_RemoteGetData_Proxy(
    __RPC__in IDataObject * This,
                       __RPC__in_opt FORMATETC *pformatetcIn,
                __RPC__out STGMEDIUM *pRemoteMedium);
void __RPC_STUB IDataObject_RemoteGetData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IDataObject_RemoteGetDataHere_Proxy(
    __RPC__in IDataObject * This,
                       __RPC__in_opt FORMATETC *pformatetc,
                    __RPC__inout STGMEDIUM *pRemoteMedium);
void __RPC_STUB IDataObject_RemoteGetDataHere_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IDataObject_RemoteSetData_Proxy(
    __RPC__in IDataObject * This,
                       __RPC__in_opt FORMATETC *pformatetc,
                       __RPC__in_opt FLAG_STGMEDIUM *pmedium,
               BOOL fRelease);
void __RPC_STUB IDataObject_RemoteSetData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0073_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0073_v0_0_s_ifspec;
typedef IDataAdviseHolder *LPDATAADVISEHOLDER;
EXTERN_C const IID IID_IDataAdviseHolder;
    typedef struct IDataAdviseHolderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDataAdviseHolder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDataAdviseHolder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDataAdviseHolder * This);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            IDataAdviseHolder * This,
            _In_opt_ IDataObject *pDataObject,
            _In_ FORMATETC *pFetc,
            _In_ DWORD advf,
            _In_ IAdviseSink *pAdvise,
            _Out_ DWORD *pdwConnection);
        HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            IDataAdviseHolder * This,
            _In_ DWORD dwConnection);
        HRESULT ( STDMETHODCALLTYPE *EnumAdvise )(
            IDataAdviseHolder * This,
            _Outptr_ IEnumSTATDATA **ppenumAdvise);
        HRESULT ( STDMETHODCALLTYPE *SendOnDataChange )(
            IDataAdviseHolder * This,
            _In_ IDataObject *pDataObject,
            _Reserved_ DWORD dwReserved,
            _In_ DWORD advf);
        END_INTERFACE
    } IDataAdviseHolderVtbl;
    interface IDataAdviseHolder
    {
        CONST_VTBL struct IDataAdviseHolderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Advise(This,pDataObject,pFetc,advf,pAdvise,pdwConnection) )
    ( (This)->lpVtbl -> Unadvise(This,dwConnection) )
    ( (This)->lpVtbl -> EnumAdvise(This,ppenumAdvise) )
    ( (This)->lpVtbl -> SendOnDataChange(This,pDataObject,dwReserved,advf) )
typedef IMessageFilter *LPMESSAGEFILTER;
typedef
enum tagCALLTYPE
    {
        CALLTYPE_TOPLEVEL = 1,
        CALLTYPE_NESTED = 2,
        CALLTYPE_ASYNC = 3,
        CALLTYPE_TOPLEVEL_CALLPENDING = 4,
        CALLTYPE_ASYNC_CALLPENDING = 5
    } CALLTYPE;
typedef
enum tagSERVERCALL
    {
        SERVERCALL_ISHANDLED = 0,
        SERVERCALL_REJECTED = 1,
        SERVERCALL_RETRYLATER = 2
    } SERVERCALL;
typedef
enum tagPENDINGTYPE
    {
        PENDINGTYPE_TOPLEVEL = 1,
        PENDINGTYPE_NESTED = 2
    } PENDINGTYPE;
typedef
enum tagPENDINGMSG
    {
        PENDINGMSG_CANCELCALL = 0,
        PENDINGMSG_WAITNOPROCESS = 1,
        PENDINGMSG_WAITDEFPROCESS = 2
    } PENDINGMSG;
typedef struct tagINTERFACEINFO
    {
    IUnknown *pUnk;
    IID iid;
    WORD wMethod;
    } INTERFACEINFO;
typedef struct tagINTERFACEINFO *LPINTERFACEINFO;
EXTERN_C const IID IID_IMessageFilter;
    typedef struct IMessageFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMessageFilter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMessageFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMessageFilter * This);
        DWORD ( STDMETHODCALLTYPE *HandleInComingCall )(
            IMessageFilter * This,
            _In_ DWORD dwCallType,
            _In_ HTASK htaskCaller,
            _In_ DWORD dwTickCount,
            _In_opt_ LPINTERFACEINFO lpInterfaceInfo);
        DWORD ( STDMETHODCALLTYPE *RetryRejectedCall )(
            IMessageFilter * This,
            _In_ HTASK htaskCallee,
            _In_ DWORD dwTickCount,
            _In_ DWORD dwRejectType);
        DWORD ( STDMETHODCALLTYPE *MessagePending )(
            IMessageFilter * This,
            _In_ HTASK htaskCallee,
            _In_ DWORD dwTickCount,
            _In_ DWORD dwPendingType);
        END_INTERFACE
    } IMessageFilterVtbl;
    interface IMessageFilter
    {
        CONST_VTBL struct IMessageFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HandleInComingCall(This,dwCallType,htaskCaller,dwTickCount,lpInterfaceInfo) )
    ( (This)->lpVtbl -> RetryRejectedCall(This,htaskCallee,dwTickCount,dwRejectType) )
    ( (This)->lpVtbl -> MessagePending(This,htaskCallee,dwTickCount,dwPendingType) )
extern const FMTID FMTID_SummaryInformation;
extern const FMTID FMTID_DocSummaryInformation;
extern const FMTID FMTID_UserDefinedProperties;
extern const FMTID FMTID_DiscardableInformation;
extern const FMTID FMTID_ImageSummaryInformation;
extern const FMTID FMTID_AudioSummaryInformation;
extern const FMTID FMTID_VideoSummaryInformation;
extern const FMTID FMTID_MediaFileSummaryInformation;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0075_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0075_v0_0_s_ifspec;
EXTERN_C const IID IID_IClassActivator;
    typedef struct IClassActivatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IClassActivator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IClassActivator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IClassActivator * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassObject )(
            __RPC__in IClassActivator * This,
                       __RPC__in REFCLSID rclsid,
                       DWORD dwClassContext,
                       LCID locale,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IClassActivatorVtbl;
    interface IClassActivator
    {
        CONST_VTBL struct IClassActivatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassObject(This,rclsid,dwClassContext,locale,riid,ppv) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0076_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0076_v0_0_s_ifspec;
EXTERN_C const IID IID_IFillLockBytes;
    typedef struct IFillLockBytesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFillLockBytes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFillLockBytes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFillLockBytes * This);
                      HRESULT ( STDMETHODCALLTYPE *FillAppend )(
            IFillLockBytes * This,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_ ULONG *pcbWritten);
                      HRESULT ( STDMETHODCALLTYPE *FillAt )(
            IFillLockBytes * This,
            _In_ ULARGE_INTEGER ulOffset,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_ ULONG *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *SetFillSize )(
            __RPC__in IFillLockBytes * This,
                       ULARGE_INTEGER ulSize);
        HRESULT ( STDMETHODCALLTYPE *Terminate )(
            __RPC__in IFillLockBytes * This,
                       BOOL bCanceled);
        END_INTERFACE
    } IFillLockBytesVtbl;
    interface IFillLockBytes
    {
        CONST_VTBL struct IFillLockBytesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FillAppend(This,pv,cb,pcbWritten) )
    ( (This)->lpVtbl -> FillAt(This,ulOffset,pv,cb,pcbWritten) )
    ( (This)->lpVtbl -> SetFillSize(This,ulSize) )
    ( (This)->lpVtbl -> Terminate(This,bCanceled) )
                HRESULT __stdcall IFillLockBytes_RemoteFillAppend_Proxy(
    __RPC__in IFillLockBytes * This,
                        __RPC__in_ecount_full(cb) const byte *pv,
               ULONG cb,
                __RPC__out ULONG *pcbWritten);
void __RPC_STUB IFillLockBytes_RemoteFillAppend_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT __stdcall IFillLockBytes_RemoteFillAt_Proxy(
    __RPC__in IFillLockBytes * This,
               ULARGE_INTEGER ulOffset,
                        __RPC__in_ecount_full(cb) const byte *pv,
               ULONG cb,
                __RPC__out ULONG *pcbWritten);
void __RPC_STUB IFillLockBytes_RemoteFillAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0077_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0077_v0_0_s_ifspec;
EXTERN_C const IID IID_IProgressNotify;
    typedef struct IProgressNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProgressNotify * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProgressNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProgressNotify * This);
        HRESULT ( STDMETHODCALLTYPE *OnProgress )(
            __RPC__in IProgressNotify * This,
                       DWORD dwProgressCurrent,
                       DWORD dwProgressMaximum,
                       BOOL fAccurate,
                       BOOL fOwner);
        END_INTERFACE
    } IProgressNotifyVtbl;
    interface IProgressNotify
    {
        CONST_VTBL struct IProgressNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnProgress(This,dwProgressCurrent,dwProgressMaximum,fAccurate,fOwner) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0078_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0078_v0_0_s_ifspec;
typedef struct tagStorageLayout
    {
    DWORD LayoutType;
    OLECHAR *pwcsElementName;
    LARGE_INTEGER cOffset;
    LARGE_INTEGER cBytes;
    } StorageLayout;
EXTERN_C const IID IID_ILayoutStorage;
    typedef struct ILayoutStorageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ILayoutStorage * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ILayoutStorage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ILayoutStorage * This);
        HRESULT ( __stdcall *LayoutScript )(
            ILayoutStorage * This,
            _In_reads_(nEntries) StorageLayout *pStorageLayout,
            _In_ DWORD nEntries,
            _Reserved_ DWORD glfInterleavedFlag);
        HRESULT ( __stdcall *BeginMonitor )(
            ILayoutStorage * This);
        HRESULT ( __stdcall *EndMonitor )(
            ILayoutStorage * This);
        HRESULT ( __stdcall *ReLayoutDocfile )(
            ILayoutStorage * This,
            __RPC__in OLECHAR *pwcsNewDfName);
        HRESULT ( __stdcall *ReLayoutDocfileOnILockBytes )(
            ILayoutStorage * This,
            _In_ ILockBytes *pILockBytes);
        END_INTERFACE
    } ILayoutStorageVtbl;
    interface ILayoutStorage
    {
        CONST_VTBL struct ILayoutStorageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LayoutScript(This,pStorageLayout,nEntries,glfInterleavedFlag) )
    ( (This)->lpVtbl -> BeginMonitor(This) )
    ( (This)->lpVtbl -> EndMonitor(This) )
    ( (This)->lpVtbl -> ReLayoutDocfile(This,pwcsNewDfName) )
    ( (This)->lpVtbl -> ReLayoutDocfileOnILockBytes(This,pILockBytes) )
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0079_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0079_v0_0_s_ifspec;
EXTERN_C const IID IID_IBlockingLock;
    typedef struct IBlockingLockVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBlockingLock * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBlockingLock * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBlockingLock * This);
        HRESULT ( STDMETHODCALLTYPE *Lock )(
            __RPC__in IBlockingLock * This,
                       DWORD dwTimeout);
        HRESULT ( STDMETHODCALLTYPE *Unlock )(
            __RPC__in IBlockingLock * This);
        END_INTERFACE
    } IBlockingLockVtbl;
    interface IBlockingLock
    {
        CONST_VTBL struct IBlockingLockVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Lock(This,dwTimeout) )
    ( (This)->lpVtbl -> Unlock(This) )
EXTERN_C const IID IID_ITimeAndNoticeControl;
    typedef struct ITimeAndNoticeControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITimeAndNoticeControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITimeAndNoticeControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITimeAndNoticeControl * This);
        HRESULT ( STDMETHODCALLTYPE *SuppressChanges )(
            __RPC__in ITimeAndNoticeControl * This,
                       DWORD res1,
                       DWORD res2);
        END_INTERFACE
    } ITimeAndNoticeControlVtbl;
    interface ITimeAndNoticeControl
    {
        CONST_VTBL struct ITimeAndNoticeControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SuppressChanges(This,res1,res2) )
EXTERN_C const IID IID_IOplockStorage;
    typedef struct IOplockStorageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOplockStorage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOplockStorage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOplockStorage * This);
        HRESULT ( STDMETHODCALLTYPE *CreateStorageEx )(
            __RPC__in IOplockStorage * This,
                       __RPC__in LPCWSTR pwcsName,
                       DWORD grfMode,
                       DWORD stgfmt,
                       DWORD grfAttrs,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppstgOpen);
        HRESULT ( STDMETHODCALLTYPE *OpenStorageEx )(
            __RPC__in IOplockStorage * This,
                       __RPC__in LPCWSTR pwcsName,
                       DWORD grfMode,
                       DWORD stgfmt,
                       DWORD grfAttrs,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppstgOpen);
        END_INTERFACE
    } IOplockStorageVtbl;
    interface IOplockStorage
    {
        CONST_VTBL struct IOplockStorageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateStorageEx(This,pwcsName,grfMode,stgfmt,grfAttrs,riid,ppstgOpen) )
    ( (This)->lpVtbl -> OpenStorageEx(This,pwcsName,grfMode,stgfmt,grfAttrs,riid,ppstgOpen) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0082_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0082_v0_0_s_ifspec;
EXTERN_C const IID IID_IDirectWriterLock;
    typedef struct IDirectWriterLockVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDirectWriterLock * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDirectWriterLock * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDirectWriterLock * This);
        HRESULT ( STDMETHODCALLTYPE *WaitForWriteAccess )(
            __RPC__in IDirectWriterLock * This,
                       DWORD dwTimeout);
        HRESULT ( STDMETHODCALLTYPE *ReleaseWriteAccess )(
            __RPC__in IDirectWriterLock * This);
        HRESULT ( STDMETHODCALLTYPE *HaveWriteAccess )(
            __RPC__in IDirectWriterLock * This);
        END_INTERFACE
    } IDirectWriterLockVtbl;
    interface IDirectWriterLock
    {
        CONST_VTBL struct IDirectWriterLockVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> WaitForWriteAccess(This,dwTimeout) )
    ( (This)->lpVtbl -> ReleaseWriteAccess(This) )
    ( (This)->lpVtbl -> HaveWriteAccess(This) )
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0083_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0083_v0_0_s_ifspec;
EXTERN_C const IID IID_IUrlMon;
    typedef struct IUrlMonVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUrlMon * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUrlMon * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUrlMon * This);
        HRESULT ( STDMETHODCALLTYPE *AsyncGetClassBits )(
            __RPC__in IUrlMon * This,
                       __RPC__in REFCLSID rclsid,
                               __RPC__in_opt LPCWSTR pszTYPE,
                               __RPC__in_opt LPCWSTR pszExt,
                       DWORD dwFileVersionMS,
                       DWORD dwFileVersionLS,
                               __RPC__in_opt LPCWSTR pszCodeBase,
                       __RPC__in_opt IBindCtx *pbc,
                       DWORD dwClassContext,
                       __RPC__in REFIID riid,
                       DWORD flags);
        END_INTERFACE
    } IUrlMonVtbl;
    interface IUrlMon
    {
        CONST_VTBL struct IUrlMonVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AsyncGetClassBits(This,rclsid,pszTYPE,pszExt,dwFileVersionMS,dwFileVersionLS,pszCodeBase,pbc,dwClassContext,riid,flags) )
EXTERN_C const IID IID_IForegroundTransfer;
    typedef struct IForegroundTransferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IForegroundTransfer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IForegroundTransfer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IForegroundTransfer * This);
        HRESULT ( STDMETHODCALLTYPE *AllowForegroundTransfer )(
            IForegroundTransfer * This,
            _Reserved_ void *lpvReserved);
        END_INTERFACE
    } IForegroundTransferVtbl;
    interface IForegroundTransfer
    {
        CONST_VTBL struct IForegroundTransferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AllowForegroundTransfer(This,lpvReserved) )
EXTERN_C const IID IID_IThumbnailExtractor;
    typedef struct IThumbnailExtractorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IThumbnailExtractor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IThumbnailExtractor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IThumbnailExtractor * This);
        HRESULT ( STDMETHODCALLTYPE *ExtractThumbnail )(
            __RPC__in IThumbnailExtractor * This,
                       __RPC__in_opt IStorage *pStg,
                       ULONG ulLength,
                       ULONG ulHeight,
                        __RPC__out ULONG *pulOutputLength,
                        __RPC__out ULONG *pulOutputHeight,
                        __RPC__deref_out_opt HBITMAP *phOutputBitmap);
        HRESULT ( STDMETHODCALLTYPE *OnFileUpdated )(
            __RPC__in IThumbnailExtractor * This,
                       __RPC__in_opt IStorage *pStg);
        END_INTERFACE
    } IThumbnailExtractorVtbl;
    interface IThumbnailExtractor
    {
        CONST_VTBL struct IThumbnailExtractorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ExtractThumbnail(This,pStg,ulLength,ulHeight,pulOutputLength,pulOutputHeight,phOutputBitmap) )
    ( (This)->lpVtbl -> OnFileUpdated(This,pStg) )
EXTERN_C const IID IID_IDummyHICONIncluder;
    typedef struct IDummyHICONIncluderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDummyHICONIncluder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDummyHICONIncluder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDummyHICONIncluder * This);
        HRESULT ( STDMETHODCALLTYPE *Dummy )(
            __RPC__in IDummyHICONIncluder * This,
                       __RPC__in HICON h1,
                       __RPC__in HDC h2);
        END_INTERFACE
    } IDummyHICONIncluderVtbl;
    interface IDummyHICONIncluder
    {
        CONST_VTBL struct IDummyHICONIncluderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Dummy(This,h1,h2) )
typedef
enum tagApplicationType
    {
        ServerApplication = 0,
        LibraryApplication = ( ServerApplication + 1 )
    } ApplicationType;
typedef
enum tagShutdownType
    {
        IdleShutdown = 0,
        ForcedShutdown = ( IdleShutdown + 1 )
    } ShutdownType;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0087_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0087_v0_0_s_ifspec;
EXTERN_C const IID IID_IProcessLock;
    typedef struct IProcessLockVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IProcessLock * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IProcessLock * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IProcessLock * This);
        ULONG ( STDMETHODCALLTYPE *AddRefOnProcess )(
            IProcessLock * This);
        ULONG ( STDMETHODCALLTYPE *ReleaseRefOnProcess )(
            IProcessLock * This);
        END_INTERFACE
    } IProcessLockVtbl;
    interface IProcessLock
    {
        CONST_VTBL struct IProcessLockVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddRefOnProcess(This) )
    ( (This)->lpVtbl -> ReleaseRefOnProcess(This) )
EXTERN_C const IID IID_ISurrogateService;
    typedef struct ISurrogateServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISurrogateService * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISurrogateService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISurrogateService * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            ISurrogateService * This,
            _In_ REFGUID rguidProcessID,
            _In_ IProcessLock *pProcessLock,
            _Out_ BOOL *pfApplicationAware);
        HRESULT ( STDMETHODCALLTYPE *ApplicationLaunch )(
            ISurrogateService * This,
            _In_ REFGUID rguidApplID,
            _In_ ApplicationType appType);
        HRESULT ( STDMETHODCALLTYPE *ApplicationFree )(
            ISurrogateService * This,
            _In_ REFGUID rguidApplID);
        HRESULT ( STDMETHODCALLTYPE *CatalogRefresh )(
            ISurrogateService * This,
            _Reserved_ ULONG ulReserved);
        HRESULT ( STDMETHODCALLTYPE *ProcessShutdown )(
            ISurrogateService * This,
            _In_ ShutdownType shutdownType);
        END_INTERFACE
    } ISurrogateServiceVtbl;
    interface ISurrogateService
    {
        CONST_VTBL struct ISurrogateServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,rguidProcessID,pProcessLock,pfApplicationAware) )
    ( (This)->lpVtbl -> ApplicationLaunch(This,rguidApplID,appType) )
    ( (This)->lpVtbl -> ApplicationFree(This,rguidApplID) )
    ( (This)->lpVtbl -> CatalogRefresh(This,ulReserved) )
    ( (This)->lpVtbl -> ProcessShutdown(This,shutdownType) )
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0089_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0089_v0_0_s_ifspec;
typedef IInitializeSpy *LPINITIALIZESPY;
EXTERN_C const IID IID_IInitializeSpy;
    typedef struct IInitializeSpyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInitializeSpy * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInitializeSpy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInitializeSpy * This);
        HRESULT ( STDMETHODCALLTYPE *PreInitialize )(
            IInitializeSpy * This,
            _In_ DWORD dwCoInit,
            _In_ DWORD dwCurThreadAptRefs);
        HRESULT ( STDMETHODCALLTYPE *PostInitialize )(
            IInitializeSpy * This,
            _In_ HRESULT hrCoInit,
            _In_ DWORD dwCoInit,
            _In_ DWORD dwNewThreadAptRefs);
        HRESULT ( STDMETHODCALLTYPE *PreUninitialize )(
            IInitializeSpy * This,
            _In_ DWORD dwCurThreadAptRefs);
        HRESULT ( STDMETHODCALLTYPE *PostUninitialize )(
            IInitializeSpy * This,
            _In_ DWORD dwNewThreadAptRefs);
        END_INTERFACE
    } IInitializeSpyVtbl;
    interface IInitializeSpy
    {
        CONST_VTBL struct IInitializeSpyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PreInitialize(This,dwCoInit,dwCurThreadAptRefs) )
    ( (This)->lpVtbl -> PostInitialize(This,hrCoInit,dwCoInit,dwNewThreadAptRefs) )
    ( (This)->lpVtbl -> PreUninitialize(This,dwCurThreadAptRefs) )
    ( (This)->lpVtbl -> PostUninitialize(This,dwNewThreadAptRefs) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0090_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0090_v0_0_s_ifspec;
EXTERN_C const IID IID_IApartmentShutdown;
    typedef struct IApartmentShutdownVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IApartmentShutdown * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IApartmentShutdown * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IApartmentShutdown * This);
        void ( STDMETHODCALLTYPE *OnUninitialize )(
            IApartmentShutdown * This,
            _In_ UINT64 ui64ApartmentIdentifier);
        END_INTERFACE
    } IApartmentShutdownVtbl;
    interface IApartmentShutdown
    {
        CONST_VTBL struct IApartmentShutdownVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnUninitialize(This,ui64ApartmentIdentifier) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0091_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0091_v0_0_s_ifspec;
unsigned long __RPC_USER ASYNC_STGMEDIUM_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in ASYNC_STGMEDIUM * );
unsigned char * __RPC_USER ASYNC_STGMEDIUM_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in ASYNC_STGMEDIUM * );
unsigned char * __RPC_USER ASYNC_STGMEDIUM_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out ASYNC_STGMEDIUM * );
void __RPC_USER ASYNC_STGMEDIUM_UserFree( __RPC__in unsigned long *, __RPC__in ASYNC_STGMEDIUM * );
unsigned long __RPC_USER CLIPFORMAT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out CLIPFORMAT * );
void __RPC_USER CLIPFORMAT_UserFree( __RPC__in unsigned long *, __RPC__in CLIPFORMAT * );
unsigned long __RPC_USER FLAG_STGMEDIUM_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in FLAG_STGMEDIUM * );
unsigned char * __RPC_USER FLAG_STGMEDIUM_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in FLAG_STGMEDIUM * );
unsigned char * __RPC_USER FLAG_STGMEDIUM_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out FLAG_STGMEDIUM * );
void __RPC_USER FLAG_STGMEDIUM_UserFree( __RPC__in unsigned long *, __RPC__in FLAG_STGMEDIUM * );
unsigned long __RPC_USER HBITMAP_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HDC_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HDC * );
void __RPC_USER HDC_UserFree( __RPC__in unsigned long *, __RPC__in HDC * );
unsigned long __RPC_USER HICON_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER SNB_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in SNB * );
unsigned char * __RPC_USER SNB_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in SNB * );
unsigned char * __RPC_USER SNB_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out SNB * );
void __RPC_USER SNB_UserFree( __RPC__in unsigned long *, __RPC__in SNB * );
unsigned long __RPC_USER STGMEDIUM_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in STGMEDIUM * );
unsigned char * __RPC_USER STGMEDIUM_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in STGMEDIUM * );
unsigned char * __RPC_USER STGMEDIUM_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out STGMEDIUM * );
void __RPC_USER STGMEDIUM_UserFree( __RPC__in unsigned long *, __RPC__in STGMEDIUM * );
unsigned long __RPC_USER ASYNC_STGMEDIUM_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in ASYNC_STGMEDIUM * );
unsigned char * __RPC_USER ASYNC_STGMEDIUM_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in ASYNC_STGMEDIUM * );
unsigned char * __RPC_USER ASYNC_STGMEDIUM_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out ASYNC_STGMEDIUM * );
void __RPC_USER ASYNC_STGMEDIUM_UserFree64( __RPC__in unsigned long *, __RPC__in ASYNC_STGMEDIUM * );
unsigned long __RPC_USER CLIPFORMAT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out CLIPFORMAT * );
void __RPC_USER CLIPFORMAT_UserFree64( __RPC__in unsigned long *, __RPC__in CLIPFORMAT * );
unsigned long __RPC_USER FLAG_STGMEDIUM_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in FLAG_STGMEDIUM * );
unsigned char * __RPC_USER FLAG_STGMEDIUM_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in FLAG_STGMEDIUM * );
unsigned char * __RPC_USER FLAG_STGMEDIUM_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out FLAG_STGMEDIUM * );
void __RPC_USER FLAG_STGMEDIUM_UserFree64( __RPC__in unsigned long *, __RPC__in FLAG_STGMEDIUM * );
unsigned long __RPC_USER HBITMAP_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree64( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HDC_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HDC * );
void __RPC_USER HDC_UserFree64( __RPC__in unsigned long *, __RPC__in HDC * );
unsigned long __RPC_USER HICON_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree64( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER SNB_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in SNB * );
unsigned char * __RPC_USER SNB_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in SNB * );
unsigned char * __RPC_USER SNB_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out SNB * );
void __RPC_USER SNB_UserFree64( __RPC__in unsigned long *, __RPC__in SNB * );
unsigned long __RPC_USER STGMEDIUM_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in STGMEDIUM * );
unsigned char * __RPC_USER STGMEDIUM_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in STGMEDIUM * );
unsigned char * __RPC_USER STGMEDIUM_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out STGMEDIUM * );
void __RPC_USER STGMEDIUM_UserFree64( __RPC__in unsigned long *, __RPC__in STGMEDIUM * );
              HRESULT STDMETHODCALLTYPE IEnumUnknown_Next_Proxy(
    IEnumUnknown * This,
    _In_ ULONG celt,
    _Out_writes_to_(celt,*pceltFetched) IUnknown **rgelt,
    _Out_opt_ ULONG *pceltFetched);
                HRESULT STDMETHODCALLTYPE IEnumUnknown_Next_Stub(
    __RPC__in IEnumUnknown * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IUnknown **rgelt,
                __RPC__out ULONG *pceltFetched);
              HRESULT STDMETHODCALLTYPE IEnumString_Next_Proxy(
    IEnumString * This,
               ULONG celt,
    _Out_writes_to_(celt,*pceltFetched) LPOLESTR *rgelt,
    _Out_opt_ ULONG *pceltFetched);
                HRESULT STDMETHODCALLTYPE IEnumString_Next_Stub(
    __RPC__in IEnumString * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) LPOLESTR *rgelt,
                __RPC__out ULONG *pceltFetched);
              HRESULT STDMETHODCALLTYPE ISequentialStream_Read_Proxy(
    ISequentialStream * This,
    _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
    _In_ ULONG cb,
    _Out_opt_ ULONG *pcbRead);
                HRESULT STDMETHODCALLTYPE ISequentialStream_Read_Stub(
    __RPC__in ISequentialStream * This,
                                    __RPC__out_ecount_part(cb, *pcbRead) byte *pv,
               ULONG cb,
                __RPC__out ULONG *pcbRead);
              HRESULT STDMETHODCALLTYPE ISequentialStream_Write_Proxy(
    ISequentialStream * This,
    _In_reads_bytes_(cb) const void *pv,
    _In_ ULONG cb,
    _Out_opt_ ULONG *pcbWritten);
                HRESULT STDMETHODCALLTYPE ISequentialStream_Write_Stub(
    __RPC__in ISequentialStream * This,
                        __RPC__in_ecount_full(cb) const byte *pv,
               ULONG cb,
                __RPC__out ULONG *pcbWritten);
              HRESULT STDMETHODCALLTYPE IStream_Seek_Proxy(
    IStream * This,
               LARGE_INTEGER dlibMove,
               DWORD dwOrigin,
    _Out_opt_ ULARGE_INTEGER *plibNewPosition);
                HRESULT STDMETHODCALLTYPE IStream_Seek_Stub(
    __RPC__in IStream * This,
               LARGE_INTEGER dlibMove,
               DWORD dwOrigin,
                __RPC__out ULARGE_INTEGER *plibNewPosition);
              HRESULT STDMETHODCALLTYPE IStream_CopyTo_Proxy(
    IStream * This,
    _In_ IStream *pstm,
               ULARGE_INTEGER cb,
    _Out_opt_ ULARGE_INTEGER *pcbRead,
    _Out_opt_ ULARGE_INTEGER *pcbWritten);
                HRESULT STDMETHODCALLTYPE IStream_CopyTo_Stub(
    __RPC__in IStream * This,
                       __RPC__in_opt IStream *pstm,
               ULARGE_INTEGER cb,
                __RPC__out ULARGE_INTEGER *pcbRead,
                __RPC__out ULARGE_INTEGER *pcbWritten);
              HRESULT STDMETHODCALLTYPE IBindCtx_SetBindOptions_Proxy(
    IBindCtx * This,
    _In_ BIND_OPTS *pbindopts);
                HRESULT STDMETHODCALLTYPE IBindCtx_SetBindOptions_Stub(
    __RPC__in IBindCtx * This,
               __RPC__in BIND_OPTS2 *pbindopts);
              HRESULT STDMETHODCALLTYPE IBindCtx_GetBindOptions_Proxy(
    IBindCtx * This,
    _Inout_ BIND_OPTS *pbindopts);
                HRESULT STDMETHODCALLTYPE IBindCtx_GetBindOptions_Stub(
    __RPC__in IBindCtx * This,
                    __RPC__inout BIND_OPTS2 *pbindopts);
              HRESULT STDMETHODCALLTYPE IEnumMoniker_Next_Proxy(
    IEnumMoniker * This,
               ULONG celt,
    _Out_writes_to_(celt,*pceltFetched) IMoniker **rgelt,
    _Out_opt_ ULONG *pceltFetched);
                HRESULT STDMETHODCALLTYPE IEnumMoniker_Next_Stub(
    __RPC__in IEnumMoniker * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IMoniker **rgelt,
                __RPC__out ULONG *pceltFetched);
              BOOL STDMETHODCALLTYPE IRunnableObject_IsRunning_Proxy(
    IRunnableObject * This);
                HRESULT STDMETHODCALLTYPE IRunnableObject_IsRunning_Stub(
    __RPC__in IRunnableObject * This);
              HRESULT STDMETHODCALLTYPE IMoniker_BindToObject_Proxy(
    IMoniker * This,
    _In_ IBindCtx *pbc,
    _In_opt_ IMoniker *pmkToLeft,
    _In_ REFIID riidResult,
    _Outptr_ void **ppvResult);
                HRESULT STDMETHODCALLTYPE IMoniker_BindToObject_Stub(
    __RPC__in IMoniker * This,
                       __RPC__in_opt IBindCtx *pbc,
                       __RPC__in_opt IMoniker *pmkToLeft,
               __RPC__in REFIID riidResult,
                        __RPC__deref_out_opt IUnknown **ppvResult);
              HRESULT STDMETHODCALLTYPE IMoniker_BindToStorage_Proxy(
    IMoniker * This,
    _In_ IBindCtx *pbc,
    _In_opt_ IMoniker *pmkToLeft,
    _In_ REFIID riid,
    _Outptr_ void **ppvObj);
                HRESULT STDMETHODCALLTYPE IMoniker_BindToStorage_Stub(
    __RPC__in IMoniker * This,
                       __RPC__in_opt IBindCtx *pbc,
                       __RPC__in_opt IMoniker *pmkToLeft,
               __RPC__in REFIID riid,
                        __RPC__deref_out_opt IUnknown **ppvObj);
              HRESULT STDMETHODCALLTYPE IEnumSTATSTG_Next_Proxy(
    IEnumSTATSTG * This,
               ULONG celt,
    _Out_writes_to_(celt,*pceltFetched) STATSTG *rgelt,
    _Out_opt_ ULONG *pceltFetched);
                HRESULT STDMETHODCALLTYPE IEnumSTATSTG_Next_Stub(
    __RPC__in IEnumSTATSTG * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) STATSTG *rgelt,
                __RPC__out ULONG *pceltFetched);
              HRESULT STDMETHODCALLTYPE IStorage_OpenStream_Proxy(
    IStorage * This,
    _In_z_ const OLECHAR *pwcsName,
    _Reserved_ void *reserved1,
               DWORD grfMode,
               DWORD reserved2,
    _Outptr_ IStream **ppstm);
                HRESULT STDMETHODCALLTYPE IStorage_OpenStream_Stub(
    __RPC__in IStorage * This,
                       __RPC__in_string const OLECHAR *pwcsName,
               ULONG cbReserved1,
                                __RPC__in_ecount_full_opt(cbReserved1) byte *reserved1,
               DWORD grfMode,
               DWORD reserved2,
                __RPC__deref_out_opt IStream **ppstm);
              HRESULT STDMETHODCALLTYPE IStorage_CopyTo_Proxy(
    IStorage * This,
               DWORD ciidExclude,
    _In_reads_opt_(ciidExclude) const IID *rgiidExclude,
    _In_opt_ SNB snbExclude,
    _In_ IStorage *pstgDest);
                HRESULT STDMETHODCALLTYPE IStorage_CopyTo_Stub(
    __RPC__in IStorage * This,
               DWORD ciidExclude,
                                __RPC__in_ecount_full_opt(ciidExclude) const IID *rgiidExclude,
                       __RPC__deref_opt_in_opt SNB snbExclude,
                       __RPC__in_opt IStorage *pstgDest);
              HRESULT STDMETHODCALLTYPE IStorage_EnumElements_Proxy(
    IStorage * This,
    _Reserved_ DWORD reserved1,
    _Reserved_ void *reserved2,
    _Reserved_ DWORD reserved3,
    _Outptr_ IEnumSTATSTG **ppenum);
                HRESULT STDMETHODCALLTYPE IStorage_EnumElements_Stub(
    __RPC__in IStorage * This,
               DWORD reserved1,
               ULONG cbReserved2,
                                __RPC__in_ecount_full_opt(cbReserved2) byte *reserved2,
               DWORD reserved3,
                __RPC__deref_out_opt IEnumSTATSTG **ppenum);
              HRESULT STDMETHODCALLTYPE ILockBytes_ReadAt_Proxy(
    ILockBytes * This,
               ULARGE_INTEGER ulOffset,
    _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
               ULONG cb,
    _Out_opt_ ULONG *pcbRead);
                HRESULT __stdcall ILockBytes_ReadAt_Stub(
    __RPC__in ILockBytes * This,
               ULARGE_INTEGER ulOffset,
                                    __RPC__out_ecount_part(cb, *pcbRead) byte *pv,
               ULONG cb,
                __RPC__out ULONG *pcbRead);
              HRESULT STDMETHODCALLTYPE ILockBytes_WriteAt_Proxy(
    ILockBytes * This,
               ULARGE_INTEGER ulOffset,
    _In_reads_bytes_(cb) const void *pv,
               ULONG cb,
    _Out_opt_ ULONG *pcbWritten);
                HRESULT STDMETHODCALLTYPE ILockBytes_WriteAt_Stub(
    __RPC__in ILockBytes * This,
               ULARGE_INTEGER ulOffset,
                        __RPC__in_ecount_full(cb) const byte *pv,
               ULONG cb,
                __RPC__out ULONG *pcbWritten);
              HRESULT STDMETHODCALLTYPE IEnumFORMATETC_Next_Proxy(
    IEnumFORMATETC * This,
               ULONG celt,
    _Out_writes_to_(celt,*pceltFetched) FORMATETC *rgelt,
    _Out_opt_ ULONG *pceltFetched);
                HRESULT STDMETHODCALLTYPE IEnumFORMATETC_Next_Stub(
    __RPC__in IEnumFORMATETC * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) FORMATETC *rgelt,
                __RPC__out ULONG *pceltFetched);
              HRESULT STDMETHODCALLTYPE IEnumSTATDATA_Next_Proxy(
    IEnumSTATDATA * This,
               ULONG celt,
    _Out_writes_to_(celt,*pceltFetched) STATDATA *rgelt,
    _Out_opt_ ULONG *pceltFetched);
                HRESULT STDMETHODCALLTYPE IEnumSTATDATA_Next_Stub(
    __RPC__in IEnumSTATDATA * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) STATDATA *rgelt,
                __RPC__out ULONG *pceltFetched);
              void STDMETHODCALLTYPE IAdviseSink_OnDataChange_Proxy(
    IAdviseSink * This,
    _In_ FORMATETC *pFormatetc,
    _In_ STGMEDIUM *pStgmed);
                HRESULT STDMETHODCALLTYPE IAdviseSink_OnDataChange_Stub(
    __RPC__in IAdviseSink * This,
                       __RPC__in_opt FORMATETC *pFormatetc,
                       __RPC__in_opt ASYNC_STGMEDIUM *pStgmed);
              void STDMETHODCALLTYPE IAdviseSink_OnViewChange_Proxy(
    IAdviseSink * This,
               DWORD dwAspect,
               LONG lindex);
                HRESULT STDMETHODCALLTYPE IAdviseSink_OnViewChange_Stub(
    __RPC__in IAdviseSink * This,
               DWORD dwAspect,
               LONG lindex);
              void STDMETHODCALLTYPE IAdviseSink_OnRename_Proxy(
    IAdviseSink * This,
    _In_ IMoniker *pmk);
                HRESULT STDMETHODCALLTYPE IAdviseSink_OnRename_Stub(
    __RPC__in IAdviseSink * This,
               __RPC__in_opt IMoniker *pmk);
              void STDMETHODCALLTYPE IAdviseSink_OnSave_Proxy(
    IAdviseSink * This);
                HRESULT STDMETHODCALLTYPE IAdviseSink_OnSave_Stub(
    __RPC__in IAdviseSink * This);
              void STDMETHODCALLTYPE IAdviseSink_OnClose_Proxy(
    IAdviseSink * This);
                HRESULT STDMETHODCALLTYPE IAdviseSink_OnClose_Stub(
    __RPC__in IAdviseSink * This);
              void STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnDataChange_Proxy(
    AsyncIAdviseSink * This,
    _In_ FORMATETC *pFormatetc,
    _In_ STGMEDIUM *pStgmed);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnDataChange_Stub(
    __RPC__in AsyncIAdviseSink * This,
                       __RPC__in_opt FORMATETC *pFormatetc,
                       __RPC__in_opt ASYNC_STGMEDIUM *pStgmed);
              void STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnDataChange_Proxy(
    AsyncIAdviseSink * This);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnDataChange_Stub(
    __RPC__in AsyncIAdviseSink * This);
              void STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnViewChange_Proxy(
    AsyncIAdviseSink * This,
               DWORD dwAspect,
               LONG lindex);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnViewChange_Stub(
    __RPC__in AsyncIAdviseSink * This,
               DWORD dwAspect,
               LONG lindex);
              void STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnViewChange_Proxy(
    AsyncIAdviseSink * This);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnViewChange_Stub(
    __RPC__in AsyncIAdviseSink * This);
              void STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnRename_Proxy(
    AsyncIAdviseSink * This,
    _In_ IMoniker *pmk);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnRename_Stub(
    __RPC__in AsyncIAdviseSink * This,
               __RPC__in_opt IMoniker *pmk);
              void STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnRename_Proxy(
    AsyncIAdviseSink * This);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnRename_Stub(
    __RPC__in AsyncIAdviseSink * This);
              void STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnSave_Proxy(
    AsyncIAdviseSink * This);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnSave_Stub(
    __RPC__in AsyncIAdviseSink * This);
              void STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnSave_Proxy(
    AsyncIAdviseSink * This);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnSave_Stub(
    __RPC__in AsyncIAdviseSink * This);
              void STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnClose_Proxy(
    AsyncIAdviseSink * This);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnClose_Stub(
    __RPC__in AsyncIAdviseSink * This);
              void STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnClose_Proxy(
    AsyncIAdviseSink * This);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnClose_Stub(
    __RPC__in AsyncIAdviseSink * This);
              void STDMETHODCALLTYPE IAdviseSink2_OnLinkSrcChange_Proxy(
    IAdviseSink2 * This,
    _In_ IMoniker *pmk);
                HRESULT STDMETHODCALLTYPE IAdviseSink2_OnLinkSrcChange_Stub(
    __RPC__in IAdviseSink2 * This,
                       __RPC__in_opt IMoniker *pmk);
              void STDMETHODCALLTYPE AsyncIAdviseSink2_Begin_OnLinkSrcChange_Proxy(
    AsyncIAdviseSink2 * This,
    _In_ IMoniker *pmk);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink2_Begin_OnLinkSrcChange_Stub(
    __RPC__in AsyncIAdviseSink2 * This,
                       __RPC__in_opt IMoniker *pmk);
              void STDMETHODCALLTYPE AsyncIAdviseSink2_Finish_OnLinkSrcChange_Proxy(
    AsyncIAdviseSink2 * This);
                HRESULT STDMETHODCALLTYPE AsyncIAdviseSink2_Finish_OnLinkSrcChange_Stub(
    __RPC__in AsyncIAdviseSink2 * This);
              HRESULT STDMETHODCALLTYPE IDataObject_GetData_Proxy(
    IDataObject * This,
    _In_ FORMATETC *pformatetcIn,
    _Out_ STGMEDIUM *pmedium);
                HRESULT STDMETHODCALLTYPE IDataObject_GetData_Stub(
    __RPC__in IDataObject * This,
                       __RPC__in_opt FORMATETC *pformatetcIn,
                __RPC__out STGMEDIUM *pRemoteMedium);
              HRESULT STDMETHODCALLTYPE IDataObject_GetDataHere_Proxy(
    IDataObject * This,
    _In_ FORMATETC *pformatetc,
    _Inout_ STGMEDIUM *pmedium);
                HRESULT STDMETHODCALLTYPE IDataObject_GetDataHere_Stub(
    __RPC__in IDataObject * This,
                       __RPC__in_opt FORMATETC *pformatetc,
                    __RPC__inout STGMEDIUM *pRemoteMedium);
              HRESULT STDMETHODCALLTYPE IDataObject_SetData_Proxy(
    IDataObject * This,
    _In_ FORMATETC *pformatetc,
    _In_ STGMEDIUM *pmedium,
               BOOL fRelease);
                HRESULT STDMETHODCALLTYPE IDataObject_SetData_Stub(
    __RPC__in IDataObject * This,
                       __RPC__in_opt FORMATETC *pformatetc,
                       __RPC__in_opt FLAG_STGMEDIUM *pmedium,
               BOOL fRelease);
              HRESULT STDMETHODCALLTYPE IFillLockBytes_FillAppend_Proxy(
    IFillLockBytes * This,
    _In_reads_bytes_(cb) const void *pv,
    _In_ ULONG cb,
    _Out_ ULONG *pcbWritten);
                HRESULT __stdcall IFillLockBytes_FillAppend_Stub(
    __RPC__in IFillLockBytes * This,
                        __RPC__in_ecount_full(cb) const byte *pv,
               ULONG cb,
                __RPC__out ULONG *pcbWritten);
              HRESULT STDMETHODCALLTYPE IFillLockBytes_FillAt_Proxy(
    IFillLockBytes * This,
    _In_ ULARGE_INTEGER ulOffset,
    _In_reads_bytes_(cb) const void *pv,
    _In_ ULONG cb,
    _Out_ ULONG *pcbWritten);
                HRESULT __stdcall IFillLockBytes_FillAt_Stub(
    __RPC__in IFillLockBytes * This,
               ULARGE_INTEGER ulOffset,
                        __RPC__in_ecount_full(cb) const byte *pv,
               ULONG cb,
                __RPC__out ULONG *pcbWritten);
}
