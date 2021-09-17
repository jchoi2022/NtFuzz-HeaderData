#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IRowsetNextRowset IRowsetNextRowset;
typedef interface IRowsetNewRowAfter IRowsetNewRowAfter;
typedef interface IRowsetWithParameters IRowsetWithParameters;
typedef interface IRowsetAsynch IRowsetAsynch;
typedef interface IRowsetKeys IRowsetKeys;
typedef interface IRowsetWatchAll IRowsetWatchAll;
typedef interface IRowsetWatchNotify IRowsetWatchNotify;
typedef interface IRowsetWatchRegion IRowsetWatchRegion;
typedef interface IRowsetCopyRows IRowsetCopyRows;
typedef interface IReadData IReadData;
typedef interface ICommandCost ICommandCost;
typedef interface ICommandValidate ICommandValidate;
typedef interface ITableRename ITableRename;
typedef interface IDBSchemaCommand IDBSchemaCommand;
typedef interface IProvideMoniker IProvideMoniker;
#include "oledb.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <pshpack8.h>
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0000_v0_0_s_ifspec;
extern const OLEDBDECLSPEC GUID DB_PROPERTY_CHECK_OPTION = {0xc8b5220b,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_CONSTRAINT_CHECK_DEFERRED = {0xc8b521f0,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_DROP_CASCADE = {0xc8b521f3,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_UNIQUE = {0xc8b521f5,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_ON_COMMIT_PRESERVE_ROWS = {0xc8b52230,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_PRIMARY = {0xc8b521fc,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_CLUSTERED = {0xc8b521ff,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_NONCLUSTERED = {0xc8b52200,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_BTREE = {0xc8b52201,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_HASH = {0xc8b52202,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_FILLFACTOR = {0xc8b52203,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_INITIALSIZE = {0xc8b52204,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_DISALLOWNULL = {0xc8b52205,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_IGNORENULL = {0xc8b52206,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_IGNOREANYNULL = {0xc8b52207,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_SORTBOOKMARKS = {0xc8b52208,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_AUTOMATICUPDATE = {0xc8b52209,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_EXPLICITUPDATE = {0xc8b5220a,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
enum DBPROPENUM25_DEPRECATED
    {
        DBPROP_ICommandCost = 0x8dL,
        DBPROP_ICommandTree = 0x8eL,
        DBPROP_ICommandValidate = 0x8fL,
        DBPROP_IDBSchemaCommand = 0x90L,
        DBPROP_IProvideMoniker = 0x7dL,
        DBPROP_IQuery = 0x92L,
        DBPROP_IReadData = 0x93L,
        DBPROP_IRowsetAsynch = 0x94L,
        DBPROP_IRowsetCopyRows = 0x95L,
        DBPROP_IRowsetKeys = 0x97L,
        DBPROP_IRowsetNewRowAfter = 0x98L,
        DBPROP_IRowsetNextRowset = 0x99L,
        DBPROP_IRowsetWatchAll = 0x9bL,
        DBPROP_IRowsetWatchNotify = 0x9cL,
        DBPROP_IRowsetWatchRegion = 0x9dL,
        DBPROP_IRowsetWithParameters = 0x9eL
    } ;
enum DBREASONENUM25
    {
        DBREASON_ROWSET_ROWSADDED = ( DBREASON_ROW_ASYNCHINSERT + 1 ) ,
        DBREASON_ROWSET_POPULATIONCOMPLETE = ( DBREASON_ROWSET_ROWSADDED + 1 ) ,
        DBREASON_ROWSET_POPULATIONSTOPPED = ( DBREASON_ROWSET_POPULATIONCOMPLETE + 1 )
    } ;
extern RPC_IF_HANDLE DBStructureDefinitionsDep_v0_0_c_ifspec;
extern RPC_IF_HANDLE DBStructureDefinitionsDep_v0_0_s_ifspec;
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IRowsetNextRowset;
    typedef struct IRowsetNextRowsetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRowsetNextRowset * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRowsetNextRowset * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRowsetNextRowset * This);
        HRESULT ( STDMETHODCALLTYPE *GetNextRowset )(
            IRowsetNextRowset * This,
                       IUnknown *pUnkOuter,
                       REFIID riid,
                                IUnknown **ppNextRowset);
        END_INTERFACE
    } IRowsetNextRowsetVtbl;
    interface IRowsetNextRowset
    {
        CONST_VTBL struct IRowsetNextRowsetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNextRowset(This,pUnkOuter,riid,ppNextRowset) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IRowsetNewRowAfter;
    typedef struct IRowsetNewRowAfterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRowsetNewRowAfter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRowsetNewRowAfter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRowsetNewRowAfter * This);
        HRESULT ( STDMETHODCALLTYPE *SetNewDataAfter )(
            IRowsetNewRowAfter * This,
                       HCHAPTER hChapter,
                       ULONG cbbmPrevious,
                                const BYTE *pbmPrevious,
                       HACCESSOR hAccessor,
                       BYTE *pData,
                        HROW *phRow);
        END_INTERFACE
    } IRowsetNewRowAfterVtbl;
    interface IRowsetNewRowAfter
    {
        CONST_VTBL struct IRowsetNewRowAfterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetNewDataAfter(This,hChapter,cbbmPrevious,pbmPrevious,hAccessor,pData,phRow) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IRowsetWithParameters;
    typedef struct IRowsetWithParametersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRowsetWithParameters * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRowsetWithParameters * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRowsetWithParameters * This);
        HRESULT ( STDMETHODCALLTYPE *GetParameterInfo )(
            IRowsetWithParameters * This,
                            DB_UPARAMS *pcParams,
                                          DBPARAMINFO **prgParamInfo,
                        OLECHAR **ppNamesBuffer);
        HRESULT ( STDMETHODCALLTYPE *Requery )(
            IRowsetWithParameters * This,
                       DBPARAMS *pParams,
                        ULONG *pulErrorParam,
                        HCHAPTER *phReserved);
        END_INTERFACE
    } IRowsetWithParametersVtbl;
    interface IRowsetWithParameters
    {
        CONST_VTBL struct IRowsetWithParametersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetParameterInfo(This,pcParams,prgParamInfo,ppNamesBuffer) )
    ( (This)->lpVtbl -> Requery(This,pParams,pulErrorParam,phReserved) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IRowsetAsynch;
    typedef struct IRowsetAsynchVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRowsetAsynch * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRowsetAsynch * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRowsetAsynch * This);
        HRESULT ( STDMETHODCALLTYPE *RatioFinished )(
            IRowsetAsynch * This,
                        DBCOUNTITEM *pulDenominator,
                        DBCOUNTITEM *pulNumerator,
                        DBCOUNTITEM *pcRows,
                        BOOL *pfNewRows);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IRowsetAsynch * This);
        END_INTERFACE
    } IRowsetAsynchVtbl;
    interface IRowsetAsynch
    {
        CONST_VTBL struct IRowsetAsynchVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RatioFinished(This,pulDenominator,pulNumerator,pcRows,pfNewRows) )
    ( (This)->lpVtbl -> Stop(This) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IRowsetKeys;
    typedef struct IRowsetKeysVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRowsetKeys * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRowsetKeys * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRowsetKeys * This);
        HRESULT ( STDMETHODCALLTYPE *ListKeys )(
            IRowsetKeys * This,
                            DBORDINAL *pcColumns,
                                          DBORDINAL **prgColumns);
        END_INTERFACE
    } IRowsetKeysVtbl;
    interface IRowsetKeys
    {
        CONST_VTBL struct IRowsetKeysVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ListKeys(This,pcColumns,prgColumns) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IRowsetWatchAll;
    typedef struct IRowsetWatchAllVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRowsetWatchAll * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRowsetWatchAll * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRowsetWatchAll * This);
        HRESULT ( STDMETHODCALLTYPE *Acknowledge )(
            IRowsetWatchAll * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            IRowsetWatchAll * This);
        HRESULT ( STDMETHODCALLTYPE *StopWatching )(
            IRowsetWatchAll * This);
        END_INTERFACE
    } IRowsetWatchAllVtbl;
    interface IRowsetWatchAll
    {
        CONST_VTBL struct IRowsetWatchAllVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Acknowledge(This) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> StopWatching(This) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0007_v0_0_s_ifspec;
typedef DWORD DBWATCHNOTIFY;
enum DBWATCHNOTIFYENUM
    {
        DBWATCHNOTIFY_ROWSCHANGED = 1,
        DBWATCHNOTIFY_QUERYDONE = 2,
        DBWATCHNOTIFY_QUERYREEXECUTED = 3
    } ;
EXTERN_C const IID IID_IRowsetWatchNotify;
    typedef struct IRowsetWatchNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRowsetWatchNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRowsetWatchNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRowsetWatchNotify * This);
        HRESULT ( STDMETHODCALLTYPE *OnChange )(
            IRowsetWatchNotify * This,
                       IRowset *pRowset,
                       DBWATCHNOTIFY eChangeReason);
        END_INTERFACE
    } IRowsetWatchNotifyVtbl;
    interface IRowsetWatchNotify
    {
        CONST_VTBL struct IRowsetWatchNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnChange(This,pRowset,eChangeReason) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0008_v0_0_s_ifspec;
typedef DWORD DBWATCHMODE;
enum DBWATCHMODEENUM
    {
        DBWATCHMODE_ALL = 0x1,
        DBWATCHMODE_EXTEND = 0x2,
        DBWATCHMODE_MOVE = 0x4,
        DBWATCHMODE_COUNT = 0x8
    } ;
typedef DWORD DBROWCHANGEKIND;
enum DBROWCHANGEKINDENUM
    {
        DBROWCHANGEKIND_INSERT = 0,
        DBROWCHANGEKIND_DELETE = ( DBROWCHANGEKIND_INSERT + 1 ) ,
        DBROWCHANGEKIND_UPDATE = ( DBROWCHANGEKIND_DELETE + 1 ) ,
        DBROWCHANGEKIND_COUNT = ( DBROWCHANGEKIND_UPDATE + 1 )
    } ;
typedef struct tagDBROWWATCHRANGE
    {
    HWATCHREGION hRegion;
    DBROWCHANGEKIND eChangeKind;
    HROW hRow;
    DBCOUNTITEM iRow;
    } DBROWWATCHCHANGE;
EXTERN_C const IID IID_IRowsetWatchRegion;
    typedef struct IRowsetWatchRegionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRowsetWatchRegion * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRowsetWatchRegion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRowsetWatchRegion * This);
        HRESULT ( STDMETHODCALLTYPE *Acknowledge )(
            IRowsetWatchRegion * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            IRowsetWatchRegion * This);
        HRESULT ( STDMETHODCALLTYPE *StopWatching )(
            IRowsetWatchRegion * This);
        HRESULT ( STDMETHODCALLTYPE *CreateWatchRegion )(
            IRowsetWatchRegion * This,
                       DBWATCHMODE dwWatchMode,
                        HWATCHREGION *phRegion);
        HRESULT ( STDMETHODCALLTYPE *ChangeWatchMode )(
            IRowsetWatchRegion * This,
                       HWATCHREGION hRegion,
                       DBWATCHMODE dwWatchMode);
        HRESULT ( STDMETHODCALLTYPE *DeleteWatchRegion )(
            IRowsetWatchRegion * This,
                       HWATCHREGION hRegion);
        HRESULT ( STDMETHODCALLTYPE *GetWatchRegionInfo )(
            IRowsetWatchRegion * This,
                       HWATCHREGION hRegion,
                        DBWATCHMODE *pdwWatchMode,
                        HCHAPTER *phChapter,
                            DBBKMARK *pcbBookmark,
                                          BYTE **ppBookmark,
                        DBROWCOUNT *pcRows);
        HRESULT ( STDMETHODCALLTYPE *Refresh )(
            IRowsetWatchRegion * This,
                            DBCOUNTITEM *pcChangesObtained,
                                          DBROWWATCHCHANGE **prgChanges);
        HRESULT ( STDMETHODCALLTYPE *ShrinkWatchRegion )(
            IRowsetWatchRegion * This,
                       HWATCHREGION hRegion,
                       HCHAPTER hChapter,
                       DBBKMARK cbBookmark,
                                BYTE *pBookmark,
                       DBROWCOUNT cRows);
        END_INTERFACE
    } IRowsetWatchRegionVtbl;
    interface IRowsetWatchRegion
    {
        CONST_VTBL struct IRowsetWatchRegionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Acknowledge(This) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> StopWatching(This) )
    ( (This)->lpVtbl -> CreateWatchRegion(This,dwWatchMode,phRegion) )
    ( (This)->lpVtbl -> ChangeWatchMode(This,hRegion,dwWatchMode) )
    ( (This)->lpVtbl -> DeleteWatchRegion(This,hRegion) )
    ( (This)->lpVtbl -> GetWatchRegionInfo(This,hRegion,pdwWatchMode,phChapter,pcbBookmark,ppBookmark,pcRows) )
    ( (This)->lpVtbl -> Refresh(This,pcChangesObtained,prgChanges) )
    ( (This)->lpVtbl -> ShrinkWatchRegion(This,hRegion,hChapter,cbBookmark,pBookmark,cRows) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0009_v0_0_s_ifspec;
typedef WORD HSOURCE;
EXTERN_C const IID IID_IRowsetCopyRows;
    typedef struct IRowsetCopyRowsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRowsetCopyRows * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRowsetCopyRows * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRowsetCopyRows * This);
        HRESULT ( STDMETHODCALLTYPE *CloseSource )(
            IRowsetCopyRows * This,
                       HSOURCE hSourceID);
        HRESULT ( STDMETHODCALLTYPE *CopyByHROWS )(
            IRowsetCopyRows * This,
                       HSOURCE hSourceID,
                       HCHAPTER hReserved,
                       DBROWCOUNT cRows,
                                const HROW rghRows[ ],
                       ULONG bFlags);
        HRESULT ( STDMETHODCALLTYPE *CopyRows )(
            IRowsetCopyRows * This,
                       HSOURCE hSourceID,
                       HCHAPTER hReserved,
                       DBROWCOUNT cRows,
                       ULONG bFlags,
                        DBCOUNTITEM *pcRowsCopied);
        HRESULT ( STDMETHODCALLTYPE *DefineSource )(
            IRowsetCopyRows * This,
                       const IRowset *pRowsetSource,
                       const DBORDINAL cColIds,
                                const DB_LORDINAL rgSourceColumns[ ],
                                const DB_LORDINAL rgTargetColumns[ ],
                        HSOURCE *phSourceID);
        END_INTERFACE
    } IRowsetCopyRowsVtbl;
    interface IRowsetCopyRows
    {
        CONST_VTBL struct IRowsetCopyRowsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CloseSource(This,hSourceID) )
    ( (This)->lpVtbl -> CopyByHROWS(This,hSourceID,hReserved,cRows,rghRows,bFlags) )
    ( (This)->lpVtbl -> CopyRows(This,hSourceID,hReserved,cRows,bFlags,pcRowsCopied) )
    ( (This)->lpVtbl -> DefineSource(This,pRowsetSource,cColIds,rgSourceColumns,rgTargetColumns,phSourceID) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_IReadData;
    typedef struct IReadDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IReadData * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IReadData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IReadData * This);
        HRESULT ( STDMETHODCALLTYPE *ReadData )(
            IReadData * This,
                       HCHAPTER hChapter,
                       DBBKMARK cbBookmark,
                                const BYTE *pBookmark,
                       DBROWOFFSET lRowsOffset,
                       HACCESSOR hAccessor,
                       DBROWCOUNT cRows,
                        DBCOUNTITEM *pcRowsObtained,
                            BYTE **ppFixedData,
                            DBLENGTH *pcbVariableTotal,
                            BYTE **ppVariableData);
        HRESULT ( STDMETHODCALLTYPE *ReleaseChapter )(
            IReadData * This,
                       HCHAPTER hChapter);
        END_INTERFACE
    } IReadDataVtbl;
    interface IReadData
    {
        CONST_VTBL struct IReadDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReadData(This,hChapter,cbBookmark,pBookmark,lRowsOffset,hAccessor,cRows,pcRowsObtained,ppFixedData,pcbVariableTotal,ppVariableData) )
    ( (This)->lpVtbl -> ReleaseChapter(This,hChapter) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0011_v0_0_s_ifspec;
typedef DWORD DBRESOURCEKIND;
enum DBRESOURCEKINDENUM
    {
        DBRESOURCE_INVALID = 0,
        DBRESOURCE_TOTAL = 1,
        DBRESOURCE_CPU = 2,
        DBRESOURCE_MEMORY = 3,
        DBRESOURCE_DISK = 4,
        DBRESOURCE_NETWORK = 5,
        DBRESOURCE_RESPONSE = 6,
        DBRESOURCE_ROWS = 7,
        DBRESOURCE_OTHER = 8
    } ;
typedef DWORD DBCOSTUNIT;
enum DBCOSTUNITENUM
    {
        DBUNIT_INVALID = 0,
        DBUNIT_WEIGHT = 0x1,
        DBUNIT_PERCENT = 0x2,
        DBUNIT_MAXIMUM = 0x4,
        DBUNIT_MINIMUM = 0x8,
        DBUNIT_MICRO_SECOND = 0x10,
        DBUNIT_MILLI_SECOND = 0x20,
        DBUNIT_SECOND = 0x40,
        DBUNIT_MINUTE = 0x80,
        DBUNIT_HOUR = 0x100,
        DBUNIT_BYTE = 0x200,
        DBUNIT_KILO_BYTE = 0x400,
        DBUNIT_MEGA_BYTE = 0x800,
        DBUNIT_GIGA_BYTE = 0x1000,
        DBUNIT_NUM_MSGS = 0x2000,
        DBUNIT_NUM_LOCKS = 0x4000,
        DBUNIT_NUM_ROWS = 0x8000,
        DBUNIT_OTHER = 0x10000
    } ;
typedef struct tagDBCOST
    {
    DBRESOURCEKIND eKind;
    DBCOSTUNIT dwUnits;
    LONG lValue;
    } DBCOST;
typedef DWORD DBEXECLIMITS;
enum DBEXECLIMITSENUM
    {
        DBEXECLIMITS_ABORT = 1,
        DBEXECLIMITS_STOP = 2,
        DBEXECLIMITS_SUSPEND = 3
    } ;
EXTERN_C const IID IID_ICommandCost;
    typedef struct ICommandCostVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICommandCost * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICommandCost * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICommandCost * This);
        HRESULT ( STDMETHODCALLTYPE *GetAccumulatedCost )(
            ICommandCost * This,
                       LPCOLESTR pwszRowsetName,
                            ULONG *pcCostLimits,
                                          DBCOST **prgCostLimits);
        HRESULT ( STDMETHODCALLTYPE *GetCostEstimate )(
            ICommandCost * This,
                       LPCOLESTR pwszRowsetName,
                        ULONG *pcCostEstimates,
                        DBCOST *prgCostEstimates);
        HRESULT ( STDMETHODCALLTYPE *GetCostGoals )(
            ICommandCost * This,
                       LPCOLESTR pwszRowsetName,
                        ULONG *pcCostGoals,
                        DBCOST *prgCostGoals);
        HRESULT ( STDMETHODCALLTYPE *GetCostLimits )(
            ICommandCost * This,
                       LPCOLESTR pwszRowsetName,
                        ULONG *pcCostLimits,
                        DBCOST *prgCostLimits);
        HRESULT ( STDMETHODCALLTYPE *SetCostGoals )(
            ICommandCost * This,
                       LPCOLESTR pwszRowsetName,
                       ULONG cCostGoals,
                                const DBCOST rgCostGoals[ ]);
        HRESULT ( STDMETHODCALLTYPE *SetCostLimits )(
            ICommandCost * This,
                       LPCOLESTR pwszRowsetName,
                       ULONG cCostLimits,
                       DBCOST *prgCostLimits,
                       DBEXECLIMITS dwExecutionFlags);
        END_INTERFACE
    } ICommandCostVtbl;
    interface ICommandCost
    {
        CONST_VTBL struct ICommandCostVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAccumulatedCost(This,pwszRowsetName,pcCostLimits,prgCostLimits) )
    ( (This)->lpVtbl -> GetCostEstimate(This,pwszRowsetName,pcCostEstimates,prgCostEstimates) )
    ( (This)->lpVtbl -> GetCostGoals(This,pwszRowsetName,pcCostGoals,prgCostGoals) )
    ( (This)->lpVtbl -> GetCostLimits(This,pwszRowsetName,pcCostLimits,prgCostLimits) )
    ( (This)->lpVtbl -> SetCostGoals(This,pwszRowsetName,cCostGoals,rgCostGoals) )
    ( (This)->lpVtbl -> SetCostLimits(This,pwszRowsetName,cCostLimits,prgCostLimits,dwExecutionFlags) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0012_v0_0_s_ifspec;
EXTERN_C const IID IID_ICommandValidate;
    typedef struct ICommandValidateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICommandValidate * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICommandValidate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICommandValidate * This);
        HRESULT ( STDMETHODCALLTYPE *ValidateCompletely )(
            ICommandValidate * This);
        HRESULT ( STDMETHODCALLTYPE *ValidateSyntax )(
            ICommandValidate * This);
        END_INTERFACE
    } ICommandValidateVtbl;
    interface ICommandValidate
    {
        CONST_VTBL struct ICommandValidateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ValidateCompletely(This) )
    ( (This)->lpVtbl -> ValidateSyntax(This) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_ITableRename;
    typedef struct ITableRenameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITableRename * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITableRename * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITableRename * This);
        HRESULT ( STDMETHODCALLTYPE *RenameColumn )(
            ITableRename * This,
                       DBID *pTableId,
                       DBID *pOldColumnId,
                       DBID *pNewColumnId);
        HRESULT ( STDMETHODCALLTYPE *RenameTable )(
            ITableRename * This,
                       DBID *pOldTableId,
                       DBID *pOldIndexId,
                       DBID *pNewTableId,
                       DBID *pNewIndexId);
        END_INTERFACE
    } ITableRenameVtbl;
    interface ITableRename
    {
        CONST_VTBL struct ITableRenameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RenameColumn(This,pTableId,pOldColumnId,pNewColumnId) )
    ( (This)->lpVtbl -> RenameTable(This,pOldTableId,pOldIndexId,pNewTableId,pNewIndexId) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0014_v0_0_s_ifspec;
EXTERN_C const IID IID_IDBSchemaCommand;
    typedef struct IDBSchemaCommandVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDBSchemaCommand * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDBSchemaCommand * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDBSchemaCommand * This);
        HRESULT ( STDMETHODCALLTYPE *GetCommand )(
            IDBSchemaCommand * This,
                       IUnknown *pUnkOuter,
                       REFGUID rguidSchema,
                        ICommand **ppCommand);
        HRESULT ( STDMETHODCALLTYPE *GetSchemas )(
            IDBSchemaCommand * This,
                            ULONG *pcSchemas,
                                          GUID **prgSchemas);
        END_INTERFACE
    } IDBSchemaCommandVtbl;
    interface IDBSchemaCommand
    {
        CONST_VTBL struct IDBSchemaCommandVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCommand(This,pUnkOuter,rguidSchema,ppCommand) )
    ( (This)->lpVtbl -> GetSchemas(This,pcSchemas,prgSchemas) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0015_v0_0_s_ifspec;
EXTERN_C const IID IID_IProvideMoniker;
    typedef struct IProvideMonikerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IProvideMoniker * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IProvideMoniker * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IProvideMoniker * This);
        HRESULT ( STDMETHODCALLTYPE *GetMoniker )(
            IProvideMoniker * This,
                        IMoniker **ppIMoniker);
        END_INTERFACE
    } IProvideMonikerVtbl;
    interface IProvideMoniker
    {
        CONST_VTBL struct IProvideMonikerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMoniker(This,ppIMoniker) )
#endif
#pragma endregion
#include <poppack.h>
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0016_v0_0_s_ifspec;
}
