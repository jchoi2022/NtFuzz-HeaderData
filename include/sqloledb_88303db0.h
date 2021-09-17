#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "oledb.h"
extern const GUID OLEDBDECLSPEC CLSID_SQLOLEDB = {0xc7ff16cL,0x38e3,0x11d0,0x97,0xab,0x0,0xc0,0x4f,0xc2,0xad,0x98};
extern const GUID OLEDBDECLSPEC CLSID_SQLOLEDB_ERROR = {0xc0932c62L,0x38e5,0x11d0,0x97,0xab,0x0,0xc0,0x4f,0xc2,0xad,0x98};
extern const GUID OLEDBDECLSPEC CLSID_SQLOLEDB_ENUMERATOR = {0xdfa22b8eL,0xe68d,0x11d0,0x97,0xe4,0x0,0xc0,0x4f,0xc2,0xad,0x98};
extern const GUID OLEDBDECLSPEC IID_ISQLServerErrorInfo = {0x5cf4ca12,0xef21,0x11d0,0x97,0xe7,0x0,0xc0,0x4f,0xc2,0xad,0x98};
extern const GUID OLEDBDECLSPEC IID_IRowsetFastLoad = {0x5cf4ca13,0xef21,0x11d0,0x97,0xe7,0x0,0xc0,0x4f,0xc2,0xad,0x98};
extern const GUID OLEDBDECLSPEC IID_IUMSInitialize = {0x5cf4ca14,0xef21,0x11d0,0x97,0xe7,0x0,0xc0,0x4f,0xc2,0xad,0x98};
extern const GUID OLEDBDECLSPEC IID_ISchemaLock = {0x4c2389fb,0x2511,0x11d4,0xb2,0x58,0x0,0xc0,0x4f,0x79,0x71,0xce};
extern const GUID OLEDBDECLSPEC DBGUID_MSSQLXML = {0x5d531cb2L,0xe6ed,0x11d2,0xb2,0x52,0x00,0xc0,0x4f,0x68,0x1b,0x71};
extern const GUID OLEDBDECLSPEC DBGUID_XPATH = {0xec2a4293L,0xe898,0x11d2,0xb1,0xb7,0x00,0xc0,0x4f,0x68,0x0c,0x56};
extern const GUID OLEDBDECLSPEC IID_ICommandStream = {0x0c733abfL,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d};
extern const GUID OLEDBDECLSPEC IID_ISQLXMLHelper = {0xd22a7678L,0xf860,0x40cd,0xa5,0x67,0x15,0x63,0xde,0xb4,0x6d,0x49};
extern const GUID OLEDBDECLSPEC DBSCHEMA_LINKEDSERVERS = {0x9093caf4,0x2eac,0x11d1,0x98,0x9,0x0,0xc0,0x4f,0xc2,0xad,0x98};
extern const GUID OLEDBDECLSPEC DBPROPSET_SQLSERVERDATASOURCE = {0x28efaee4,0x2d2c,0x11d1,0x98,0x7,0x0,0xc0,0x4f,0xc2,0xad,0x98};
extern const GUID OLEDBDECLSPEC DBPROPSET_SQLSERVERDATASOURCEINFO = {0xdf10cb94,0x35f6,0x11d2,0x9c,0x54,0x0,0xc0,0x4f,0x79,0x71,0xd3};
extern const GUID OLEDBDECLSPEC DBPROPSET_SQLSERVERDBINIT = {0x5cf4ca10,0xef21,0x11d0,0x97,0xe7,0x0,0xc0,0x4f,0xc2,0xad,0x98};
extern const GUID OLEDBDECLSPEC DBPROPSET_SQLSERVERROWSET = {0x5cf4ca11,0xef21,0x11d0,0x97,0xe7,0x0,0xc0,0x4f,0xc2,0xad,0x98};
extern const GUID OLEDBDECLSPEC DBPROPSET_SQLSERVERSESSION = {0x28efaee5,0x2d2c,0x11d1,0x98,0x7,0x0,0xc0,0x4f,0xc2,0xad,0x98};
extern const GUID OLEDBDECLSPEC DBPROPSET_SQLSERVERCOLUMN = {0x3b63fb5e,0x3fbb,0x11d3,0x9f,0x29,0x0,0xc0,0x4f,0x8e,0xe9,0xdc};
extern const GUID OLEDBDECLSPEC DBPROPSET_SQLSERVERSTREAM = {0x9f79c073,0x8a6d,0x4bca,0xa8,0xa8,0xc9,0xb7,0x9a,0x9b,0x96,0x2d};
extern const DBID OLEDBDECLSPEC DBCOLUMN_SS_COMPFLAGS = {0x627bd890,0xed54,0x11d2,0xb9,0x94,0x0,0xc0,0x4f,0x8c,0xa8,0x2c, DBKIND_GUID_PROPID, (LPOLESTR)100};
extern const DBID OLEDBDECLSPEC DBCOLUMN_SS_SORTID = {0x627bd890,0xed54,0x11d2,0xb9,0x94,0x0,0xc0,0x4f,0x8c,0xa8,0x2c, DBKIND_GUID_PROPID, (LPOLESTR)101};
extern const DBID OLEDBDECLSPEC DBCOLUMN_BASETABLEINSTANCE = {0x627bd890,0xed54,0x11d2,0xb9,0x94,0x0,0xc0,0x4f,0x8c,0xa8,0x2c, DBKIND_GUID_PROPID, (LPOLESTR)102};
extern const DBID OLEDBDECLSPEC DBCOLUMN_SS_TDSCOLLATION = {0x627bd890,0xed54,0x11d2,0xb9,0x94,0x0,0xc0,0x4f,0x8c,0xa8,0x2c, DBKIND_GUID_PROPID, (LPOLESTR)103};
enum SQLVARENUM
    {
 VT_SS_EMPTY = DBTYPE_EMPTY,
 VT_SS_NULL = DBTYPE_NULL,
 VT_SS_UI1 = DBTYPE_UI1,
 VT_SS_I2 = DBTYPE_I2,
 VT_SS_I4 = DBTYPE_I4,
 VT_SS_I8 = DBTYPE_I8,
 VT_SS_R4 = DBTYPE_R4,
 VT_SS_R8 = DBTYPE_R8,
 VT_SS_MONEY = DBTYPE_CY,
 VT_SS_SMALLMONEY = 200,
 VT_SS_WSTRING = 201,
 VT_SS_WVARSTRING = 202,
 VT_SS_STRING =203,
 VT_SS_VARSTRING =204,
 VT_SS_BIT =DBTYPE_BOOL,
 VT_SS_GUID =DBTYPE_GUID,
 VT_SS_NUMERIC =DBTYPE_NUMERIC,
 VT_SS_DECIMAL =205,
 VT_SS_DATETIME = DBTYPE_DBTIMESTAMP,
 VT_SS_SMALLDATETIME =206,
 VT_SS_BINARY =207,
 VT_SS_VARBINARY =208,
 VT_SS_UNKNOWN = 209,
    };
typedef unsigned short SSVARTYPE;
struct SSVARIANT
 {
  SSVARTYPE vt;
  DWORD dwReserved1;
  DWORD dwReserved2;
        union
            {
   BYTE bTinyIntVal;
   SHORT sShortIntVal;
            LONG lIntVal;
            LONGLONG llBigIntVal;
            FLOAT fltRealVal;
            DOUBLE dblFloatVal;
   CY cyMoneyVal;
   struct _NCharVal
    {
    SHORT sActualLength;
    SHORT sMaxLength;
    WCHAR * pwchNCharVal;
    BYTE rgbReserved[5];
    DWORD dwReserved;
    WCHAR * pwchReserved;
    } NCharVal;
   struct _CharVal
    {
    SHORT sActualLength;
    SHORT sMaxLength;
    CHAR * pchCharVal;
    BYTE rgbReserved[5];
    DWORD dwReserved;
    WCHAR * pwchReserved;
    } CharVal;
   VARIANT_BOOL fBitVal;
   BYTE rgbGuidVal [16];
   DB_NUMERIC numNumericVal;
   struct _BinaryVal
    {
    SHORT sActualLength;
    SHORT sMaxLength;
    BYTE * prgbBinaryVal;
    DWORD dwReserved;
    } BinaryVal;
   DBTIMESTAMP tsDateTimeVal;
   struct _UnknownType
    {
    DWORD dwActualLength;
    BYTE rgMetadata [16];
    BYTE * pUnknownData;
    } UnknownType;
   struct _BLOBType
    {
    DBOBJECT dbobj;
    IUnknown * pUnk;
    } BLOBType;
   };
    };
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
extern "C"{
typedef interface ISQLServerErrorInfo ISQLServerErrorInfo;
typedef interface IRowsetFastLoad IRowsetFastLoad;
typedef interface ISchemaLock ISchemaLock;
#include "unknwn.h"
typedef struct tagSSErrorInfo
    {
    LPOLESTR pwszMessage;
    LPOLESTR pwszServer;
    LPOLESTR pwszProcedure;
    LONG lNative;
    BYTE bState;
    BYTE bClass;
    WORD wLineNumber;
    } SSERRORINFO;
extern RPC_IF_HANDLE __MIDL_itf_sqloledb_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sqloledb_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISQLServerErrorInfo;
    typedef struct ISQLServerErrorInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            ISQLServerErrorInfo __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            ISQLServerErrorInfo __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            ISQLServerErrorInfo __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetErrorInfo )(
            ISQLServerErrorInfo __RPC_FAR * This,
                        SSERRORINFO __RPC_FAR *__RPC_FAR *ppErrorInfo,
            _Outptr_
                        OLECHAR __RPC_FAR *__RPC_FAR *ppStringsBuffer);
        END_INTERFACE
    } ISQLServerErrorInfoVtbl;
    interface ISQLServerErrorInfo
    {
        CONST_VTBL struct ISQLServerErrorInfoVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetErrorInfo(This,ppErrorInfo,ppStringsBuffer)
HRESULT STDMETHODCALLTYPE ISQLServerErrorInfo_GetErrorInfo_Proxy(
    ISQLServerErrorInfo __RPC_FAR * This,
                SSERRORINFO __RPC_FAR *__RPC_FAR *ppErrorInfo,
    _Outptr_
                OLECHAR __RPC_FAR *__RPC_FAR *ppStringsBuffer);
void __RPC_STUB ISQLServerErrorInfo_GetErrorInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef ULONG_PTR HACCESSOR;
extern RPC_IF_HANDLE __MIDL_itf_sqloledb_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sqloledb_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IRowsetFastLoad;
    typedef struct IRowsetFastLoadVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IRowsetFastLoad __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IRowsetFastLoad __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IRowsetFastLoad __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InsertRow )(
            IRowsetFastLoad __RPC_FAR * This,
                       HACCESSOR hAccessor,
                       void __RPC_FAR *pData);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Commit )(
            IRowsetFastLoad __RPC_FAR * This,
                       BOOL fDone);
        END_INTERFACE
    } IRowsetFastLoadVtbl;
    interface IRowsetFastLoad
    {
        CONST_VTBL struct IRowsetFastLoadVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> InsertRow(This,hAccessor,pData)
    (This)->lpVtbl -> Commit(This,fDone)
HRESULT STDMETHODCALLTYPE IRowsetFastLoad_InsertRow_Proxy(
    IRowsetFastLoad __RPC_FAR * This,
               HACCESSOR hAccessor,
               void __RPC_FAR *pData);
void __RPC_STUB IRowsetFastLoad_InsertRow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IRowsetFastLoad_Commit_Proxy(
    IRowsetFastLoad __RPC_FAR * This,
               BOOL fDone);
void __RPC_STUB IRowsetFastLoad_Commit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef DWORD LOCKMODE;
enum LOCKMODEENUM
    { LOCKMODE_INVALID = 0,
 LOCKMODE_EXCLUSIVE = LOCKMODE_INVALID + 1,
 LOCKMODE_SHARED = LOCKMODE_EXCLUSIVE + 1
    };
extern RPC_IF_HANDLE __MIDL_itf_sqloledb_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sqloledb_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_ISchemaLock;
    typedef struct ISchemaLockVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            ISchemaLock __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            ISchemaLock __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            ISchemaLock __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSchemaLock )(
            ISchemaLock __RPC_FAR * This,
                       DBID __RPC_FAR *pTableID,
                       LOCKMODE lmMode,
                        HANDLE __RPC_FAR *phLockHandle,
                        ULONGLONG __RPC_FAR *pTableVersion);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ReleaseSchemaLock )(
            ISchemaLock __RPC_FAR * This,
                       HANDLE hLockHandle);
        END_INTERFACE
    } ISchemaLockVtbl;
    interface ISchemaLock
    {
        CONST_VTBL struct ISchemaLockVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetSchemaLock(This,pTableID,lmMode,phLockHandle,pTableVersion)
    (This)->lpVtbl -> ReleaseSchemaLock(This,hLockHandle)
HRESULT STDMETHODCALLTYPE ISchemaLock_GetSchemaLock_Proxy(
    ISchemaLock __RPC_FAR * This,
               DBID __RPC_FAR *pTableID,
               LOCKMODE lmMode,
                HANDLE __RPC_FAR *phLockHandle,
                ULONGLONG __RPC_FAR *pTableVersion);
void __RPC_STUB ISchemaLock_GetSchemaLock_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISchemaLock_ReleaseSchemaLock_Proxy(
    ISchemaLock __RPC_FAR * This,
               HANDLE hLockHandle);
void __RPC_STUB ISchemaLock_ReleaseSchemaLock_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
}
#endif
#pragma endregion
