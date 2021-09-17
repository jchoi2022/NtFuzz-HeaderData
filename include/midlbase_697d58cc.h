#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IUnknown IUnknown;
typedef interface IInspectable IInspectable;
typedef interface IAsyncInfo IAsyncInfo;
extern "C"{
#if 0
typedef unsigned long HRESULT;
typedef struct __MIDL___MIDL_itf_midlbase_0000_0000_0001
    {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    byte Data4[ 8 ];
    } GUID;
typedef wchar_t WCHAR;
typedef byte BYTE;
typedef short INT16;
typedef unsigned short UINT16;
typedef unsigned long ULONG;
typedef unsigned int UINT32;
typedef int INT32;
typedef __int64 INT64;
typedef unsigned __int64 UINT64;
typedef float FLOAT;
typedef double DOUBLE;
extern RPC_IF_HANDLE __MIDL_itf_midlbase_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_midlbase_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IUnknown;
    typedef struct IUnknownVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUnknown * This,
                       const GUID *riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUnknown * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUnknown * This);
        END_INTERFACE
    } IUnknownVtbl;
    interface IUnknown
    {
        CONST_VTBL struct IUnknownVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
HRESULT STDMETHODCALLTYPE IUnknown_QueryInterface_Proxy(
    IUnknown * This,
               const GUID *riid,
    __RPC__deref_out void **ppvObject);
void __RPC_STUB IUnknown_QueryInterface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
ULONG STDMETHODCALLTYPE IUnknown_AddRef_Proxy(
    IUnknown * This);
void __RPC_STUB IUnknown_AddRef_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
ULONG STDMETHODCALLTYPE IUnknown_Release_Proxy(
    IUnknown * This);
void __RPC_STUB IUnknown_Release_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef struct HSTRING__
    {
    int unused;
    } HSTRING__;
typedef struct _FLAGGED_WORD_BLOB
    {
    ULONG fFlags;
    ULONG clSize;
                    unsigned short asData[ 1 ];
    } FLAGGED_WORD_BLOB;
typedef __RPC_unique_pointer FLAGGED_WORD_BLOB *wireBSTR;
typedef __RPC_unique_pointer HSTRING__ *HSTRING;
typedef struct EventRegistrationToken
    {
    __int64 value;
    } EventRegistrationToken;
typedef
enum TrustLevel
    {
        BaseTrust = 0,
        PartialTrust = ( BaseTrust + 1 ) ,
        FullTrust = ( PartialTrust + 1 )
    } TrustLevel;
extern RPC_IF_HANDLE __MIDL_itf_midlbase_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_midlbase_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IInspectable;
    typedef struct IInspectableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInspectable * This,
                       __RPC__in const GUID *riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInspectable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInspectable * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            __RPC__in IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) GUID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            __RPC__in IInspectable * This,
                        __RPC__deref_out_opt HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            __RPC__in IInspectable * This,
                        __RPC__out TrustLevel *trustLevel);
        END_INTERFACE
    } IInspectableVtbl;
    interface IInspectable
    {
        CONST_VTBL struct IInspectableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
typedef
enum AsyncStatus
    {
        Started = 0,
        Completed = ( Started + 1 ) ,
        Canceled = ( Completed + 1 ) ,
        Error = ( Canceled + 1 )
    } AsyncStatus;
extern RPC_IF_HANDLE __MIDL_itf_midlbase_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_midlbase_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IAsyncInfo;
    typedef struct IAsyncInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAsyncInfo * This,
                       __RPC__in const GUID *riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAsyncInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAsyncInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            __RPC__in IAsyncInfo * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) GUID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            __RPC__in IAsyncInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            __RPC__in IAsyncInfo * This,
                        __RPC__out TrustLevel *trustLevel);
                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IAsyncInfo * This,
                                __RPC__out unsigned __int32 *id);
                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IAsyncInfo * This,
                                __RPC__out AsyncStatus *status);
                        HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
            __RPC__in IAsyncInfo * This,
                                __RPC__out HRESULT *errorCode);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IAsyncInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IAsyncInfo * This);
        END_INTERFACE
    } IAsyncInfoVtbl;
    interface IAsyncInfo
    {
        CONST_VTBL struct IAsyncInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Status(This,status) )
    ( (This)->lpVtbl -> get_ErrorCode(This,errorCode) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> Close(This) )
#else
#include <oaidl.h>
#include <hstring.h>
#include <inspectable.h>
#include <asyncinfo.h>
#include <eventtoken.h>
#include <ivectorchangedeventargs.h>
#endif
extern RPC_IF_HANDLE __MIDL_itf_midlbase_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_midlbase_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER HSTRING_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HSTRING * );
unsigned char * __RPC_USER HSTRING_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * );
unsigned char * __RPC_USER HSTRING_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * );
void __RPC_USER HSTRING_UserFree( __RPC__in unsigned long *, __RPC__in HSTRING * );
unsigned long __RPC_USER HSTRING_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HSTRING * );
unsigned char * __RPC_USER HSTRING_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * );
unsigned char * __RPC_USER HSTRING_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * );
void __RPC_USER HSTRING_UserFree64( __RPC__in unsigned long *, __RPC__in HSTRING * );
}
