#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface OLEDBSimpleProviderListener OLEDBSimpleProviderListener;
typedef interface OLEDBSimpleProvider OLEDBSimpleProvider;
#include "oaidl.h"
extern "C"{
#pragma comment(lib,"uuid.lib")
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef LONGLONG DBROWCOUNT;
typedef LONGLONG DB_LORDINAL;
extern RPC_IF_HANDLE __MIDL_itf_simpdata_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_simpdata_0000_0000_v0_0_s_ifspec;
typedef
enum OSPFORMAT
    {
        OSPFORMAT_RAW = 0,
        OSPFORMAT_DEFAULT = 0,
        OSPFORMAT_FORMATTED = 1,
        OSPFORMAT_HTML = 2
    } OSPFORMAT;
typedef
enum OSPRW
    {
        OSPRW_DEFAULT = 1,
        OSPRW_READONLY = 0,
        OSPRW_READWRITE = 1,
        OSPRW_MIXED = 2
    } OSPRW;
typedef
enum OSPFIND
    {
        OSPFIND_DEFAULT = 0,
        OSPFIND_UP = 1,
        OSPFIND_CASESENSITIVE = 2,
        OSPFIND_UPCASESENSITIVE = 3
    } OSPFIND;
typedef
enum OSPCOMP
    {
        OSPCOMP_EQ = 1,
        OSPCOMP_DEFAULT = 1,
        OSPCOMP_LT = 2,
        OSPCOMP_LE = 3,
        OSPCOMP_GE = 4,
        OSPCOMP_GT = 5,
        OSPCOMP_NE = 6
    } OSPCOMP;
typedef
enum OSPXFER
    {
        OSPXFER_COMPLETE = 0,
        OSPXFER_ABORT = 1,
        OSPXFER_ERROR = 2
    } OSPXFER;
typedef OLEDBSimpleProvider *LPOLEDBSimpleProvider;
EXTERN_C const IID LIBID_MSDAOSP;
EXTERN_C const IID IID_OLEDBSimpleProviderListener;
    typedef struct OLEDBSimpleProviderListenerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in OLEDBSimpleProviderListener * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in OLEDBSimpleProviderListener * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in OLEDBSimpleProviderListener * This);
        HRESULT ( STDMETHODCALLTYPE *aboutToChangeCell )(
            __RPC__in OLEDBSimpleProviderListener * This,
                       DBROWCOUNT iRow,
                       DB_LORDINAL iColumn);
        HRESULT ( STDMETHODCALLTYPE *cellChanged )(
            __RPC__in OLEDBSimpleProviderListener * This,
                       DBROWCOUNT iRow,
                       DB_LORDINAL iColumn);
        HRESULT ( STDMETHODCALLTYPE *aboutToDeleteRows )(
            __RPC__in OLEDBSimpleProviderListener * This,
                       DBROWCOUNT iRow,
                       DBROWCOUNT cRows);
        HRESULT ( STDMETHODCALLTYPE *deletedRows )(
            __RPC__in OLEDBSimpleProviderListener * This,
                       DBROWCOUNT iRow,
                       DBROWCOUNT cRows);
        HRESULT ( STDMETHODCALLTYPE *aboutToInsertRows )(
            __RPC__in OLEDBSimpleProviderListener * This,
                       DBROWCOUNT iRow,
                       DBROWCOUNT cRows);
        HRESULT ( STDMETHODCALLTYPE *insertedRows )(
            __RPC__in OLEDBSimpleProviderListener * This,
                       DBROWCOUNT iRow,
                       DBROWCOUNT cRows);
        HRESULT ( STDMETHODCALLTYPE *rowsAvailable )(
            __RPC__in OLEDBSimpleProviderListener * This,
                       DBROWCOUNT iRow,
                       DBROWCOUNT cRows);
        HRESULT ( STDMETHODCALLTYPE *transferComplete )(
            __RPC__in OLEDBSimpleProviderListener * This,
                       OSPXFER xfer);
        END_INTERFACE
    } OLEDBSimpleProviderListenerVtbl;
    interface OLEDBSimpleProviderListener
    {
        CONST_VTBL struct OLEDBSimpleProviderListenerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> aboutToChangeCell(This,iRow,iColumn) )
    ( (This)->lpVtbl -> cellChanged(This,iRow,iColumn) )
    ( (This)->lpVtbl -> aboutToDeleteRows(This,iRow,cRows) )
    ( (This)->lpVtbl -> deletedRows(This,iRow,cRows) )
    ( (This)->lpVtbl -> aboutToInsertRows(This,iRow,cRows) )
    ( (This)->lpVtbl -> insertedRows(This,iRow,cRows) )
    ( (This)->lpVtbl -> rowsAvailable(This,iRow,cRows) )
    ( (This)->lpVtbl -> transferComplete(This,xfer) )
EXTERN_C const IID IID_OLEDBSimpleProvider;
    typedef struct OLEDBSimpleProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in OLEDBSimpleProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in OLEDBSimpleProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in OLEDBSimpleProvider * This);
        HRESULT ( STDMETHODCALLTYPE *getRowCount )(
            __RPC__in OLEDBSimpleProvider * This,
                                __RPC__out DBROWCOUNT *pcRows);
        HRESULT ( STDMETHODCALLTYPE *getColumnCount )(
            __RPC__in OLEDBSimpleProvider * This,
                                __RPC__out DB_LORDINAL *pcColumns);
        HRESULT ( STDMETHODCALLTYPE *getRWStatus )(
            __RPC__in OLEDBSimpleProvider * This,
                       DBROWCOUNT iRow,
                       DB_LORDINAL iColumn,
                                __RPC__out OSPRW *prwStatus);
        HRESULT ( STDMETHODCALLTYPE *getVariant )(
            __RPC__in OLEDBSimpleProvider * This,
                       DBROWCOUNT iRow,
                       DB_LORDINAL iColumn,
                       OSPFORMAT format,
                                __RPC__out VARIANT *pVar);
        HRESULT ( STDMETHODCALLTYPE *setVariant )(
            __RPC__in OLEDBSimpleProvider * This,
                       DBROWCOUNT iRow,
                       DB_LORDINAL iColumn,
                       OSPFORMAT format,
                       VARIANT Var);
        HRESULT ( STDMETHODCALLTYPE *getLocale )(
            __RPC__in OLEDBSimpleProvider * This,
                                __RPC__deref_out_opt BSTR *pbstrLocale);
        HRESULT ( STDMETHODCALLTYPE *deleteRows )(
            __RPC__in OLEDBSimpleProvider * This,
                       DBROWCOUNT iRow,
                       DBROWCOUNT cRows,
                                __RPC__out DBROWCOUNT *pcRowsDeleted);
        HRESULT ( STDMETHODCALLTYPE *insertRows )(
            __RPC__in OLEDBSimpleProvider * This,
                       DBROWCOUNT iRow,
                       DBROWCOUNT cRows,
                                __RPC__out DBROWCOUNT *pcRowsInserted);
        HRESULT ( STDMETHODCALLTYPE *find )(
            __RPC__in OLEDBSimpleProvider * This,
                       DBROWCOUNT iRowStart,
                       DB_LORDINAL iColumn,
                       VARIANT val,
                       OSPFIND findFlags,
                       OSPCOMP compType,
                                __RPC__out DBROWCOUNT *piRowFound);
        HRESULT ( STDMETHODCALLTYPE *addOLEDBSimpleProviderListener )(
            __RPC__in OLEDBSimpleProvider * This,
                       __RPC__in_opt OLEDBSimpleProviderListener *pospIListener);
        HRESULT ( STDMETHODCALLTYPE *removeOLEDBSimpleProviderListener )(
            __RPC__in OLEDBSimpleProvider * This,
                       __RPC__in_opt OLEDBSimpleProviderListener *pospIListener);
        HRESULT ( STDMETHODCALLTYPE *isAsync )(
            __RPC__in OLEDBSimpleProvider * This,
                                __RPC__out BOOL *pbAsynch);
        HRESULT ( STDMETHODCALLTYPE *getEstimatedRows )(
            __RPC__in OLEDBSimpleProvider * This,
                                __RPC__out DBROWCOUNT *piRows);
        HRESULT ( STDMETHODCALLTYPE *stopTransfer )(
            __RPC__in OLEDBSimpleProvider * This);
        END_INTERFACE
    } OLEDBSimpleProviderVtbl;
    interface OLEDBSimpleProvider
    {
        CONST_VTBL struct OLEDBSimpleProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> getRowCount(This,pcRows) )
    ( (This)->lpVtbl -> getColumnCount(This,pcColumns) )
    ( (This)->lpVtbl -> getRWStatus(This,iRow,iColumn,prwStatus) )
    ( (This)->lpVtbl -> getVariant(This,iRow,iColumn,format,pVar) )
    ( (This)->lpVtbl -> setVariant(This,iRow,iColumn,format,Var) )
    ( (This)->lpVtbl -> getLocale(This,pbstrLocale) )
    ( (This)->lpVtbl -> deleteRows(This,iRow,cRows,pcRowsDeleted) )
    ( (This)->lpVtbl -> insertRows(This,iRow,cRows,pcRowsInserted) )
    ( (This)->lpVtbl -> find(This,iRowStart,iColumn,val,findFlags,compType,piRowFound) )
    ( (This)->lpVtbl -> addOLEDBSimpleProviderListener(This,pospIListener) )
    ( (This)->lpVtbl -> removeOLEDBSimpleProviderListener(This,pospIListener) )
    ( (This)->lpVtbl -> isAsync(This,pbAsynch) )
    ( (This)->lpVtbl -> getEstimatedRows(This,piRows) )
    ( (This)->lpVtbl -> stopTransfer(This) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_simpdata_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_simpdata_0000_0001_v0_0_s_ifspec;
}
