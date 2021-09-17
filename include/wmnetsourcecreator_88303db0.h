#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface INSNetSourceCreator INSNetSourceCreator;
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID( CLSID_ClientNetManager, 0xCD12A3CE,0x9C42,0x11D2,0xBE,0xED,0x00,0x60,0x08,0x2F,0x20,0x54 );
EXTERN_GUID( IID_INSNetSourceCreator, 0x0C0E4080,0x9081,0x11d2,0xBE,0xEC,0x00,0x60,0x08,0x2F,0x20,0x54 );
typedef unsigned __int64 QWORD;
extern RPC_IF_HANDLE __MIDL_itf_wmnetsourcecreator_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmnetsourcecreator_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_INSNetSourceCreator;
    typedef struct INSNetSourceCreatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INSNetSourceCreator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INSNetSourceCreator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INSNetSourceCreator * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in INSNetSourceCreator * This);
        HRESULT ( STDMETHODCALLTYPE *CreateNetSource )(
            __RPC__in INSNetSourceCreator * This,
                       __RPC__in LPCWSTR pszStreamName,
                       __RPC__in_opt IUnknown *pMonitor,
                       __RPC__in BYTE *pData,
                       __RPC__in_opt IUnknown *pUserContext,
                       __RPC__in_opt IUnknown *pCallback,
                       QWORD qwContext);
        HRESULT ( STDMETHODCALLTYPE *GetNetSourceProperties )(
            __RPC__in INSNetSourceCreator * This,
                       __RPC__in LPCWSTR pszStreamName,
                        __RPC__deref_out_opt IUnknown **ppPropertiesNode);
        HRESULT ( STDMETHODCALLTYPE *GetNetSourceSharedNamespace )(
            __RPC__in INSNetSourceCreator * This,
                        __RPC__deref_out_opt IUnknown **ppSharedNamespace);
        HRESULT ( STDMETHODCALLTYPE *GetNetSourceAdminInterface )(
            __RPC__in INSNetSourceCreator * This,
                       __RPC__in LPCWSTR pszStreamName,
                        __RPC__out VARIANT *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetNumProtocolsSupported )(
            __RPC__in INSNetSourceCreator * This,
                        __RPC__out DWORD *pcProtocols);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolName )(
            __RPC__in INSNetSourceCreator * This,
                       DWORD dwProtocolNum,
                        __RPC__out WCHAR *pwszProtocolName,
                            __RPC__inout WORD *pcchProtocolName);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in INSNetSourceCreator * This);
        END_INTERFACE
    } INSNetSourceCreatorVtbl;
    interface INSNetSourceCreator
    {
        CONST_VTBL struct INSNetSourceCreatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This) )
    ( (This)->lpVtbl -> CreateNetSource(This,pszStreamName,pMonitor,pData,pUserContext,pCallback,qwContext) )
    ( (This)->lpVtbl -> GetNetSourceProperties(This,pszStreamName,ppPropertiesNode) )
    ( (This)->lpVtbl -> GetNetSourceSharedNamespace(This,ppSharedNamespace) )
    ( (This)->lpVtbl -> GetNetSourceAdminInterface(This,pszStreamName,pVal) )
    ( (This)->lpVtbl -> GetNumProtocolsSupported(This,pcProtocols) )
    ( (This)->lpVtbl -> GetProtocolName(This,dwProtocolNum,pwszProtocolName,pcchProtocolName) )
    ( (This)->lpVtbl -> Shutdown(This) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wmnetsourcecreator_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmnetsourcecreator_0000_0001_v0_0_s_ifspec;
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
