#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDataConvert IDataConvert;
typedef interface IDCInfo IDCInfo;
#include "oaidl.h"
#include "ocidl.h"
#include "oledb.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <pshpack8.h>
extern RPC_IF_HANDLE __MIDL_itf_msdadc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdadc_0000_0000_v0_0_s_ifspec;
typedef DWORD DBDATACONVERT;
enum DBDATACONVERTENUM
    {
        DBDATACONVERT_DEFAULT = 0,
        DBDATACONVERT_SETDATABEHAVIOR = 0x1,
        DBDATACONVERT_LENGTHFROMNTS = 0x2,
        DBDATACONVERT_DSTISFIXEDLENGTH = 0x4,
        DBDATACONVERT_DECIMALSCALE = 0x8
    } ;
EXTERN_C const IID IID_IDataConvert;
    typedef struct IDataConvertVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDataConvert * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDataConvert * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDataConvert * This);
                      HRESULT ( STDMETHODCALLTYPE *DataConvert )(
            IDataConvert * This,
                       DBTYPE wSrcType,
                       DBTYPE wDstType,
                       DBLENGTH cbSrcLength,
            _Out_opt_ DBLENGTH *pcbDstLength,
            _In_reads_bytes_(cbSrcLength) void *pSrc,
            _Out_writes_bytes_(_Inexpressible_(cbDstMaxLength)) void *pDst,
                       DBLENGTH cbDstMaxLength,
                       DBSTATUS dbsSrcStatus,
            _Out_opt_ DBSTATUS *pdbsStatus,
                       BYTE bPrecision,
                       BYTE bScale,
                       DBDATACONVERT dwFlags);
        HRESULT ( STDMETHODCALLTYPE *CanConvert )(
            __RPC__in IDataConvert * This,
                       DBTYPE wSrcType,
                       DBTYPE wDstType);
                      HRESULT ( STDMETHODCALLTYPE *GetConversionSize )(
            IDataConvert * This,
                       DBTYPE wSrcType,
                       DBTYPE wDstType,
            _In_opt_ DBLENGTH *pcbSrcLength,
            _Out_opt_ DBLENGTH *pcbDstLength,
            _In_reads_bytes_opt_(*pcbSrcLength) void *pSrc);
        END_INTERFACE
    } IDataConvertVtbl;
    interface IDataConvert
    {
        CONST_VTBL struct IDataConvertVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DataConvert(This,wSrcType,wDstType,cbSrcLength,pcbDstLength,pSrc,pDst,cbDstMaxLength,dbsSrcStatus,pdbsStatus,bPrecision,bScale,dwFlags) )
    ( (This)->lpVtbl -> CanConvert(This,wSrcType,wDstType) )
    ( (This)->lpVtbl -> GetConversionSize(This,wSrcType,wDstType,pcbSrcLength,pcbDstLength,pSrc) )
typedef DWORD DCINFOTYPE;
enum DCINFOTYPEENUM
    {
        DCINFOTYPE_VERSION = 1
    } ;
typedef struct tagDCINFO
    {
    DCINFOTYPE eInfoType;
    VARIANT vData;
    } DCINFO;
EXTERN_C const IID IID_IDCInfo;
    typedef struct IDCInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDCInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDCInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDCInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IDCInfo * This,
                       ULONG cInfo,
                                __RPC__in_ecount_full(cInfo) DCINFOTYPE rgeInfoType[ ],
                                 __RPC__out_ecount_full(cInfo) DCINFO **prgInfo);
        HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            __RPC__in IDCInfo * This,
                       ULONG cInfo,
                                __RPC__in_ecount_full(cInfo) DCINFO rgInfo[ ]);
        END_INTERFACE
    } IDCInfoVtbl;
    interface IDCInfo
    {
        CONST_VTBL struct IDCInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInfo(This,cInfo,rgeInfoType,prgInfo) )
    ( (This)->lpVtbl -> SetInfo(This,cInfo,rgInfo) )
extern const GUID OLEDBDECLSPEC IID_IDataConvert = { 0x0c733a8dL,0x2a1c,0x11ce, { 0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d } };
extern const GUID OLEDBDECLSPEC IID_IDCInfo = { 0x0c733a9cL,0x2a1c,0x11ce, { 0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d } };
#include <poppack.h>
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msdadc_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdadc_0000_0002_v0_0_s_ifspec;
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
