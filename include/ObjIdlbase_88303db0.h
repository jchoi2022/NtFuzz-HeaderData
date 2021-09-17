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
#include "unknwnbase.h"
extern "C"{
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0000_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0003_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0008_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0009_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0010_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0015_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0020_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0022_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0023_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0024_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0025_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0026_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0027_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0029_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0048_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0051_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0052_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0052_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidlbase_0000_0053_v0_0_s_ifspec;
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
}
