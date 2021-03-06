#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICallFrame ICallFrame;
typedef interface ICallIndirect ICallIndirect;
typedef interface ICallInterceptor ICallInterceptor;
typedef interface ICallFrameEvents ICallFrameEvents;
typedef interface ICallUnmarshal ICallUnmarshal;
typedef interface ICallFrameWalker ICallFrameWalker;
typedef interface IInterfaceRelated IInterfaceRelated;
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_callobj_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_callobj_0000_0000_v0_0_s_ifspec;
typedef struct __MIDL_ICallFrame_0001
    {
    ULONG iMethod;
    BOOL fHasInValues;
    BOOL fHasInOutValues;
    BOOL fHasOutValues;
    BOOL fDerivesFromIDispatch;
    LONG cInInterfacesMax;
    LONG cInOutInterfacesMax;
    LONG cOutInterfacesMax;
    LONG cTopLevelInInterfaces;
    IID iid;
    ULONG cMethod;
    ULONG cParams;
    } CALLFRAMEINFO;
typedef struct __MIDL_ICallFrame_0002
    {
    BOOLEAN fIn;
    BOOLEAN fOut;
    ULONG stackOffset;
    ULONG cbParam;
    } CALLFRAMEPARAMINFO;
typedef
enum __MIDL_ICallFrame_0003
    {
        CALLFRAME_COPY_NESTED = 1,
        CALLFRAME_COPY_INDEPENDENT = 2
    } CALLFRAME_COPY;
enum CALLFRAME_FREE
    {
        CALLFRAME_FREE_NONE = 0,
        CALLFRAME_FREE_IN = 1,
        CALLFRAME_FREE_INOUT = 2,
        CALLFRAME_FREE_OUT = 4,
        CALLFRAME_FREE_TOP_INOUT = 8,
        CALLFRAME_FREE_TOP_OUT = 16,
        CALLFRAME_FREE_ALL = 31
    } ;
enum CALLFRAME_NULL
    {
        CALLFRAME_NULL_NONE = 0,
        CALLFRAME_NULL_INOUT = 2,
        CALLFRAME_NULL_OUT = 4,
        CALLFRAME_NULL_ALL = 6
    } ;
enum CALLFRAME_WALK
    {
        CALLFRAME_WALK_IN = 1,
        CALLFRAME_WALK_INOUT = 2,
        CALLFRAME_WALK_OUT = 4
    } ;
typedef struct __MIDL_ICallFrame_0004
    {
    BOOLEAN fIn;
    DWORD dwDestContext;
    LPVOID pvDestContext;
    IUnknown *punkReserved;
    GUID guidTransferSyntax;
    } CALLFRAME_MARSHALCONTEXT;
EXTERN_C const IID IID_ICallFrame;
    typedef struct ICallFrameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICallFrame * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICallFrame * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICallFrame * This);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            ICallFrame * This,
                        CALLFRAMEINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIIDAndMethod )(
            ICallFrame * This,
                        IID *pIID,
                        ULONG *piMethod);
        HRESULT ( STDMETHODCALLTYPE *GetNames )(
            ICallFrame * This,
            _Outptr_result_maybenull_ LPWSTR *pwszInterface,
            _Outptr_result_maybenull_ LPWSTR *pwszMethod);
        PVOID ( STDMETHODCALLTYPE *GetStackLocation )(
            ICallFrame * This);
        void ( STDMETHODCALLTYPE *SetStackLocation )(
            ICallFrame * This,
                       PVOID pvStack);
        void ( STDMETHODCALLTYPE *SetReturnValue )(
            ICallFrame * This,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *GetReturnValue )(
            ICallFrame * This);
        HRESULT ( STDMETHODCALLTYPE *GetParamInfo )(
            ICallFrame * This,
                       ULONG iparam,
                        CALLFRAMEPARAMINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *SetParam )(
            ICallFrame * This,
                       ULONG iparam,
                       VARIANT *pvar);
        HRESULT ( STDMETHODCALLTYPE *GetParam )(
            ICallFrame * This,
                       ULONG iparam,
                        VARIANT *pvar);
        HRESULT ( STDMETHODCALLTYPE *Copy )(
            ICallFrame * This,
                       CALLFRAME_COPY copyControl,
                       ICallFrameWalker *pWalker,
                        ICallFrame **ppFrame);
        HRESULT ( STDMETHODCALLTYPE *Free )(
            ICallFrame * This,
                       ICallFrame *pframeArgsDest,
                       ICallFrameWalker *pWalkerDestFree,
                       ICallFrameWalker *pWalkerCopy,
                       DWORD freeFlags,
                       ICallFrameWalker *pWalkerFree,
                       DWORD nullFlags);
        HRESULT ( STDMETHODCALLTYPE *FreeParam )(
            ICallFrame * This,
                       ULONG iparam,
                       DWORD freeFlags,
                       ICallFrameWalker *pWalkerFree,
                       DWORD nullFlags);
        HRESULT ( STDMETHODCALLTYPE *WalkFrame )(
            ICallFrame * This,
                       DWORD walkWhat,
                       ICallFrameWalker *pWalker);
        HRESULT ( STDMETHODCALLTYPE *GetMarshalSizeMax )(
            ICallFrame * This,
                       CALLFRAME_MARSHALCONTEXT *pmshlContext,
                       MSHLFLAGS mshlflags,
                        ULONG *pcbBufferNeeded);
        HRESULT ( STDMETHODCALLTYPE *Marshal )(
            ICallFrame * This,
                       CALLFRAME_MARSHALCONTEXT *pmshlContext,
                       MSHLFLAGS mshlflags,
                                PVOID pBuffer,
                       ULONG cbBuffer,
                        ULONG *pcbBufferUsed,
                        RPCOLEDATAREP *pdataRep,
                        ULONG *prpcFlags);
        HRESULT ( STDMETHODCALLTYPE *Unmarshal )(
            ICallFrame * This,
                                PVOID pBuffer,
                       ULONG cbBuffer,
                       RPCOLEDATAREP dataRep,
                       CALLFRAME_MARSHALCONTEXT *pcontext,
                        ULONG *pcbUnmarshalled);
        HRESULT ( STDMETHODCALLTYPE *ReleaseMarshalData )(
            ICallFrame * This,
                                PVOID pBuffer,
                       ULONG cbBuffer,
                       ULONG ibFirstRelease,
                       RPCOLEDATAREP dataRep,
                       CALLFRAME_MARSHALCONTEXT *pcontext);
        HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICallFrame * This,
                       void *pvReceiver,
            ...);
        END_INTERFACE
    } ICallFrameVtbl;
    interface ICallFrame
    {
        CONST_VTBL struct ICallFrameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInfo(This,pInfo) )
    ( (This)->lpVtbl -> GetIIDAndMethod(This,pIID,piMethod) )
    ( (This)->lpVtbl -> GetNames(This,pwszInterface,pwszMethod) )
    ( (This)->lpVtbl -> GetStackLocation(This) )
    ( (This)->lpVtbl -> SetStackLocation(This,pvStack) )
    ( (This)->lpVtbl -> SetReturnValue(This,hr) )
    ( (This)->lpVtbl -> GetReturnValue(This) )
    ( (This)->lpVtbl -> GetParamInfo(This,iparam,pInfo) )
    ( (This)->lpVtbl -> SetParam(This,iparam,pvar) )
    ( (This)->lpVtbl -> GetParam(This,iparam,pvar) )
    ( (This)->lpVtbl -> Copy(This,copyControl,pWalker,ppFrame) )
    ( (This)->lpVtbl -> Free(This,pframeArgsDest,pWalkerDestFree,pWalkerCopy,freeFlags,pWalkerFree,nullFlags) )
    ( (This)->lpVtbl -> FreeParam(This,iparam,freeFlags,pWalkerFree,nullFlags) )
    ( (This)->lpVtbl -> WalkFrame(This,walkWhat,pWalker) )
    ( (This)->lpVtbl -> GetMarshalSizeMax(This,pmshlContext,mshlflags,pcbBufferNeeded) )
    ( (This)->lpVtbl -> Marshal(This,pmshlContext,mshlflags,pBuffer,cbBuffer,pcbBufferUsed,pdataRep,prpcFlags) )
    ( (This)->lpVtbl -> Unmarshal(This,pBuffer,cbBuffer,dataRep,pcontext,pcbUnmarshalled) )
    ( (This)->lpVtbl -> ReleaseMarshalData(This,pBuffer,cbBuffer,ibFirstRelease,dataRep,pcontext) )
    ( (This)->lpVtbl -> Invoke(This,pvReceiver,...) )
EXTERN_C const IID IID_ICallIndirect;
    typedef struct ICallIndirectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICallIndirect * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICallIndirect * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICallIndirect * This);
        HRESULT ( STDMETHODCALLTYPE *CallIndirect )(
            ICallIndirect * This,
                        HRESULT *phrReturn,
                       ULONG iMethod,
                       void *pvArgs,
                        ULONG *cbArgs);
        HRESULT ( STDMETHODCALLTYPE *GetMethodInfo )(
            ICallIndirect * This,
                       ULONG iMethod,
                        CALLFRAMEINFO *pInfo,
            _Outptr_result_maybenull_ LPWSTR *pwszMethod);
        HRESULT ( STDMETHODCALLTYPE *GetStackSize )(
            ICallIndirect * This,
                       ULONG iMethod,
                        ULONG *cbArgs);
        HRESULT ( STDMETHODCALLTYPE *GetIID )(
            ICallIndirect * This,
            _Out_opt_ IID *piid,
            _Out_opt_ BOOL *pfDerivesFromIDispatch,
            _Out_opt_ ULONG *pcMethod,
            _Outptr_result_maybenull_ LPWSTR *pwszInterface);
        END_INTERFACE
    } ICallIndirectVtbl;
    interface ICallIndirect
    {
        CONST_VTBL struct ICallIndirectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CallIndirect(This,phrReturn,iMethod,pvArgs,cbArgs) )
    ( (This)->lpVtbl -> GetMethodInfo(This,iMethod,pInfo,pwszMethod) )
    ( (This)->lpVtbl -> GetStackSize(This,iMethod,cbArgs) )
    ( (This)->lpVtbl -> GetIID(This,piid,pfDerivesFromIDispatch,pcMethod,pwszInterface) )
EXTERN_C const IID IID_ICallInterceptor;
    typedef struct ICallInterceptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICallInterceptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICallInterceptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICallInterceptor * This);
        HRESULT ( STDMETHODCALLTYPE *CallIndirect )(
            ICallInterceptor * This,
                        HRESULT *phrReturn,
                       ULONG iMethod,
                       void *pvArgs,
                        ULONG *cbArgs);
        HRESULT ( STDMETHODCALLTYPE *GetMethodInfo )(
            ICallInterceptor * This,
                       ULONG iMethod,
                        CALLFRAMEINFO *pInfo,
            _Outptr_result_maybenull_ LPWSTR *pwszMethod);
        HRESULT ( STDMETHODCALLTYPE *GetStackSize )(
            ICallInterceptor * This,
                       ULONG iMethod,
                        ULONG *cbArgs);
        HRESULT ( STDMETHODCALLTYPE *GetIID )(
            ICallInterceptor * This,
            _Out_opt_ IID *piid,
            _Out_opt_ BOOL *pfDerivesFromIDispatch,
            _Out_opt_ ULONG *pcMethod,
            _Outptr_result_maybenull_ LPWSTR *pwszInterface);
        HRESULT ( STDMETHODCALLTYPE *RegisterSink )(
            ICallInterceptor * This,
                       ICallFrameEvents *psink);
        HRESULT ( STDMETHODCALLTYPE *GetRegisteredSink )(
            ICallInterceptor * This,
                        ICallFrameEvents **ppsink);
        END_INTERFACE
    } ICallInterceptorVtbl;
    interface ICallInterceptor
    {
        CONST_VTBL struct ICallInterceptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CallIndirect(This,phrReturn,iMethod,pvArgs,cbArgs) )
    ( (This)->lpVtbl -> GetMethodInfo(This,iMethod,pInfo,pwszMethod) )
    ( (This)->lpVtbl -> GetStackSize(This,iMethod,cbArgs) )
    ( (This)->lpVtbl -> GetIID(This,piid,pfDerivesFromIDispatch,pcMethod,pwszInterface) )
    ( (This)->lpVtbl -> RegisterSink(This,psink) )
    ( (This)->lpVtbl -> GetRegisteredSink(This,ppsink) )
EXTERN_C const IID IID_ICallFrameEvents;
    typedef struct ICallFrameEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICallFrameEvents * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICallFrameEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICallFrameEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnCall )(
            ICallFrameEvents * This,
                       ICallFrame *pFrame);
        END_INTERFACE
    } ICallFrameEventsVtbl;
    interface ICallFrameEvents
    {
        CONST_VTBL struct ICallFrameEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnCall(This,pFrame) )
EXTERN_C const IID IID_ICallUnmarshal;
    typedef struct ICallUnmarshalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICallUnmarshal * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICallUnmarshal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICallUnmarshal * This);
        HRESULT ( STDMETHODCALLTYPE *Unmarshal )(
            ICallUnmarshal * This,
                       ULONG iMethod,
                                PVOID pBuffer,
                       ULONG cbBuffer,
                       BOOL fForceBufferCopy,
                       RPCOLEDATAREP dataRep,
                       CALLFRAME_MARSHALCONTEXT *pcontext,
                        ULONG *pcbUnmarshalled,
                        ICallFrame **ppFrame);
        HRESULT ( STDMETHODCALLTYPE *ReleaseMarshalData )(
            ICallUnmarshal * This,
                       ULONG iMethod,
                                PVOID pBuffer,
                       ULONG cbBuffer,
                       ULONG ibFirstRelease,
                       RPCOLEDATAREP dataRep,
                       CALLFRAME_MARSHALCONTEXT *pcontext);
        END_INTERFACE
    } ICallUnmarshalVtbl;
    interface ICallUnmarshal
    {
        CONST_VTBL struct ICallUnmarshalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Unmarshal(This,iMethod,pBuffer,cbBuffer,fForceBufferCopy,dataRep,pcontext,pcbUnmarshalled,ppFrame) )
    ( (This)->lpVtbl -> ReleaseMarshalData(This,iMethod,pBuffer,cbBuffer,ibFirstRelease,dataRep,pcontext) )
EXTERN_C const IID IID_ICallFrameWalker;
    typedef struct ICallFrameWalkerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICallFrameWalker * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICallFrameWalker * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICallFrameWalker * This);
        HRESULT ( STDMETHODCALLTYPE *OnWalkInterface )(
            ICallFrameWalker * This,
                       REFIID iid,
                       PVOID *ppvInterface,
                       BOOL fIn,
                       BOOL fOut);
        END_INTERFACE
    } ICallFrameWalkerVtbl;
    interface ICallFrameWalker
    {
        CONST_VTBL struct ICallFrameWalkerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnWalkInterface(This,iid,ppvInterface,fIn,fOut) )
EXTERN_C const IID IID_IInterfaceRelated;
    typedef struct IInterfaceRelatedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInterfaceRelated * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInterfaceRelated * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInterfaceRelated * This);
        HRESULT ( STDMETHODCALLTYPE *SetIID )(
            IInterfaceRelated * This,
                       REFIID iid);
        HRESULT ( STDMETHODCALLTYPE *GetIID )(
            IInterfaceRelated * This,
                        IID *piid);
        END_INTERFACE
    } IInterfaceRelatedVtbl;
    interface IInterfaceRelated
    {
        CONST_VTBL struct IInterfaceRelatedVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetIID(This,iid) )
    ( (This)->lpVtbl -> GetIID(This,piid) )
extern RPC_IF_HANDLE __MIDL_itf_callobj_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_callobj_0000_0007_v0_0_s_ifspec;
HRESULT __stdcall CoGetInterceptor(
               REFIID iidIntercepted,
               IUnknown *punkOuter,
               REFIID iid,
                void **ppv);
HRESULT __stdcall CoGetInterceptorFromTypeInfo(
               REFIID iidIntercepted,
               IUnknown *punkOuter,
               ITypeInfo *typeInfo,
               REFIID iid,
                void **ppv);
extern RPC_IF_HANDLE ICallFrameAPIs_v0_0_c_ifspec;
extern RPC_IF_HANDLE ICallFrameAPIs_v0_0_s_ifspec;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_callobj_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_callobj_0000_0008_v0_0_s_ifspec;
}
