#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface DataSourceListener DataSourceListener;
typedef interface DataSource DataSource;
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_msdatsrc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdatsrc_0000_0000_v0_0_s_ifspec;
typedef DECLSPEC_UUID("7c0ffab1-cd84-11d0-949a-00a0c91110ed") BSTR DataMember;
EXTERN_C const IID LIBID_MSDATASRC;
EXTERN_C const IID IID_DataSourceListener;
    typedef struct DataSourceListenerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DataSourceListener * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DataSourceListener * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DataSourceListener * This);
                       HRESULT ( STDMETHODCALLTYPE *dataMemberChanged )(
            __RPC__in DataSourceListener * This,
                       __RPC__in DataMember bstrDM);
                       HRESULT ( STDMETHODCALLTYPE *dataMemberAdded )(
            __RPC__in DataSourceListener * This,
                       __RPC__in DataMember bstrDM);
                       HRESULT ( STDMETHODCALLTYPE *dataMemberRemoved )(
            __RPC__in DataSourceListener * This,
                       __RPC__in DataMember bstrDM);
        END_INTERFACE
    } DataSourceListenerVtbl;
    interface DataSourceListener
    {
        CONST_VTBL struct DataSourceListenerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> dataMemberChanged(This,bstrDM) )
    ( (This)->lpVtbl -> dataMemberAdded(This,bstrDM) )
    ( (This)->lpVtbl -> dataMemberRemoved(This,bstrDM) )
EXTERN_C const IID IID_DataSource;
    typedef struct DataSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DataSource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DataSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DataSource * This);
                                   HRESULT ( STDMETHODCALLTYPE *getDataMember )(
            __RPC__in DataSource * This,
                       __RPC__in DataMember bstrDM,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppunk);
                       HRESULT ( STDMETHODCALLTYPE *getDataMemberName )(
            __RPC__in DataSource * This,
                       long lIndex,
                                __RPC__deref_out_opt DataMember *pbstrDM);
                       HRESULT ( STDMETHODCALLTYPE *getDataMemberCount )(
            __RPC__in DataSource * This,
                                __RPC__out long *plCount);
                       HRESULT ( STDMETHODCALLTYPE *addDataSourceListener )(
            __RPC__in DataSource * This,
                       __RPC__in_opt DataSourceListener *pDSL);
                       HRESULT ( STDMETHODCALLTYPE *removeDataSourceListener )(
            __RPC__in DataSource * This,
                       __RPC__in_opt DataSourceListener *pDSL);
        END_INTERFACE
    } DataSourceVtbl;
    interface DataSource
    {
        CONST_VTBL struct DataSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> getDataMember(This,bstrDM,riid,ppunk) )
    ( (This)->lpVtbl -> getDataMemberName(This,lIndex,pbstrDM) )
    ( (This)->lpVtbl -> getDataMemberCount(This,plCount) )
    ( (This)->lpVtbl -> addDataSourceListener(This,pDSL) )
    ( (This)->lpVtbl -> removeDataSourceListener(This,pDSL) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msdatsrc_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdatsrc_0000_0001_v0_0_s_ifspec;
}
