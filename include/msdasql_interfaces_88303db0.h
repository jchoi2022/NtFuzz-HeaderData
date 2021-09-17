#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IRowsetChangeExtInfo IRowsetChangeExtInfo;
typedef interface ISQLRequestDiagFields ISQLRequestDiagFields;
typedef interface ISQLGetDiagField ISQLGetDiagField;
#include "unknwn.h"
#include "oaidl.h"
#include "oledb.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
enum KAGREQDIAGFLAGSENUM
    {
        KAGREQDIAGFLAGS_HEADER = 0x1,
        KAGREQDIAGFLAGS_RECORD = 0x2
    } ;
extern RPC_IF_HANDLE __MIDL_itf_msdasql_interfaces_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdasql_interfaces_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IRowsetChangeExtInfo;
    typedef struct IRowsetChangeExtInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRowsetChangeExtInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRowsetChangeExtInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRowsetChangeExtInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalRow )(
            IRowsetChangeExtInfo * This,
                       HCHAPTER hReserved,
                       HROW hRow,
                        HROW *phRowOriginal);
        HRESULT ( STDMETHODCALLTYPE *GetPendingColumns )(
            IRowsetChangeExtInfo * This,
                       HCHAPTER hReserved,
                       HROW hRow,
                       ULONG cColumnOrdinals,
                                const ULONG rgiOrdinals[ ],
                                 DBPENDINGSTATUS rgColumnStatus[ ]);
        END_INTERFACE
    } IRowsetChangeExtInfoVtbl;
    interface IRowsetChangeExtInfo
    {
        CONST_VTBL struct IRowsetChangeExtInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOriginalRow(This,hReserved,hRow,phRowOriginal) )
    ( (This)->lpVtbl -> GetPendingColumns(This,hReserved,hRow,cColumnOrdinals,rgiOrdinals,rgColumnStatus) )
typedef struct tagKAGREQDIAG
    {
    ULONG ulDiagFlags;
    VARTYPE vt;
    SHORT sDiagField;
    } KAGREQDIAG;
typedef struct tagKAGGETDIAG
    {
    ULONG ulSize;
    VARIANTARG vDiagInfo;
    SHORT sDiagField;
    } KAGGETDIAG;
extern RPC_IF_HANDLE __MIDL_itf_msdasql_interfaces_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdasql_interfaces_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_ISQLRequestDiagFields;
    typedef struct ISQLRequestDiagFieldsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISQLRequestDiagFields * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISQLRequestDiagFields * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISQLRequestDiagFields * This);
        HRESULT ( STDMETHODCALLTYPE *RequestDiagFields )(
            __RPC__in ISQLRequestDiagFields * This,
                       ULONG cDiagFields,
                                __RPC__in_ecount_full(cDiagFields) KAGREQDIAG rgDiagFields[ ]);
        END_INTERFACE
    } ISQLRequestDiagFieldsVtbl;
    interface ISQLRequestDiagFields
    {
        CONST_VTBL struct ISQLRequestDiagFieldsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RequestDiagFields(This,cDiagFields,rgDiagFields) )
EXTERN_C const IID IID_ISQLGetDiagField;
    typedef struct ISQLGetDiagFieldVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISQLGetDiagField * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISQLGetDiagField * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISQLGetDiagField * This);
        HRESULT ( STDMETHODCALLTYPE *GetDiagField )(
            __RPC__in ISQLGetDiagField * This,
                                    __RPC__inout_opt KAGGETDIAG *pDiagInfo);
        END_INTERFACE
    } ISQLGetDiagFieldVtbl;
    interface ISQLGetDiagField
    {
        CONST_VTBL struct ISQLGetDiagFieldVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDiagField(This,pDiagInfo) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msdasql_interfaces_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdasql_interfaces_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
