#include <tchar.h>
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
interface _DAODBEngine;
interface DAOError;
interface _DAOCollection;
interface DAOErrors;
interface DAOProperty;
interface _DAODynaCollection;
interface DAOProperties;
interface DAOWorkspace;
interface DAOWorkspaces;
interface DAOConnection;
interface DAOConnections;
interface DAODatabase;
interface DAODatabases;
interface _DAOTableDef;
interface DAOTableDefs;
interface _DAOQueryDef;
interface DAOQueryDefs;
interface DAORecordset;
interface DAORecordsets;
interface _DAOField;
interface DAOFields;
interface _DAOIndex;
interface DAOIndexes;
interface DAOParameter;
interface DAOParameters;
interface _DAOUser;
interface DAOUsers;
interface _DAOGroup;
interface DAOGroups;
interface _DAORelation;
interface DAORelations;
interface DAOContainer;
interface DAOContainers;
interface DAODocument;
interface DAODocuments;
interface DAOIndexFields;
typedef enum RecordsetTypeEnum
    { dbOpenTable = 1,
 dbOpenDynaset = 2,
 dbOpenSnapshot = 4,
 dbOpenForwardOnly = 8,
 dbOpenDynamic = 16
    } RecordsetTypeEnum;
typedef enum EditModeEnum
    { dbEditNone = 0,
 dbEditInProgress = 1,
 dbEditAdd = 2,
 dbEditChanged = 4,
 dbEditDeleted = 8,
 dbEditNew = 16
    } EditModeEnum;
typedef enum RecordsetOptionEnum
    { dbDenyWrite = 0x1,
 dbDenyRead = 0x2,
 dbReadOnly = 0x4,
 dbAppendOnly = 0x8,
 dbInconsistent = 0x10,
 dbConsistent = 0x20,
 dbSQLPassThrough = 0x40,
 dbFailOnError = 0x80,
 dbForwardOnly = 0x100,
 dbSeeChanges = 0x200,
 dbRunAsync = 0x400,
 dbExecDirect = 0x800
    } RecordsetOptionEnum;
typedef enum LockTypeEnum
    { dbPessimistic = 0x2,
 dbOptimistic = 0x3,
 dbOptimisticValue = 0x1,
 dbOptimisticBatch = 0x5
    } LockTypeEnum;
typedef enum UpdateCriteriaEnum
    { dbCriteriaKey = 0x1,
 dbCriteriaModValues = 0x2,
 dbCriteriaAllCols = 0x4,
 dbCriteriaTimestamp = 0x8,
 dbCriteriaDeleteInsert = 0x10,
 dbCriteriaUpdate = 0x20
    } UpdateCriteriaEnum;
typedef enum FieldAttributeEnum
    { dbFixedField = 0x1,
 dbVariableField = 0x2,
 dbAutoIncrField = 0x10,
 dbUpdatableField = 0x20,
 dbSystemField = 0x2000,
 dbHyperlinkField = 0x8000,
 dbDescending = 0x1
    } FieldAttributeEnum;
typedef enum DataTypeEnum
    { dbBoolean = 1,
 dbByte = 2,
 dbInteger = 3,
 dbLong = 4,
 dbCurrency = 5,
 dbSingle = 6,
 dbDouble = 7,
 dbDate = 8,
 dbBinary = 9,
 dbText = 10,
 dbLongBinary = 11,
 dbMemo = 12,
 dbGUID = 15,
 dbBigInt = 16,
 dbVarBinary = 17,
 dbChar = 18,
 dbNumeric = 19,
 dbDecimal = 20,
 dbFloat = 21,
 dbTime = 22,
 dbTimeStamp = 23
    } DataTypeEnum;
typedef enum RelationAttributeEnum
    { dbRelationUnique = 0x1,
 dbRelationDontEnforce = 0x2,
 dbRelationInherited = 0x4,
 dbRelationUpdateCascade = 0x100,
 dbRelationDeleteCascade = 0x1000,
 dbRelationLeft = 0x1000000,
 dbRelationRight = 0x2000000
    } RelationAttributeEnum;
typedef enum TableDefAttributeEnum
    { dbAttachExclusive = 0x10000,
 dbAttachSavePWD = 0x20000,
 dbSystemObject = 0x80000002,
 dbAttachedTable = 0x40000000,
 dbAttachedODBC = 0x20000000,
 dbHiddenObject = 0x1
    } TableDefAttributeEnum;
typedef enum QueryDefTypeEnum
    { dbQSelect = 0,
 dbQProcedure = 0xe0,
 dbQAction = 0xf0,
 dbQCrosstab = 0x10,
 dbQDelete = 0x20,
 dbQUpdate = 0x30,
 dbQAppend = 0x40,
 dbQMakeTable = 0x50,
 dbQDDL = 0x60,
 dbQSQLPassThrough = 0x70,
 dbQSetOperation = 0x80,
 dbQSPTBulk = 0x90,
 dbQCompound = 0xa0
    } QueryDefTypeEnum;
typedef enum QueryDefStateEnum
    { dbQPrepare = 1,
 dbQUnprepare = 2
    } QueryDefStateEnum;
typedef enum DatabaseTypeEnum
    { dbVersion10 = 1,
 dbEncrypt = 2,
 dbDecrypt = 4,
 dbVersion11 = 8,
 dbVersion20 = 16,
 dbVersion30 = 32,
 dbVersion40 = 64
    } DatabaseTypeEnum;
typedef enum CollatingOrderEnum
    { dbSortNeutral = 0x400,
 dbSortArabic = 0x401,
 dbSortCyrillic = 0x419,
 dbSortCzech = 0x405,
 dbSortDutch = 0x413,
 dbSortGeneral = 0x409,
 dbSortGreek = 0x408,
 dbSortHebrew = 0x40d,
 dbSortHungarian = 0x40e,
 dbSortIcelandic = 0x40f,
 dbSortNorwdan = 0x406,
 dbSortPDXIntl = 0x409,
 dbSortPDXNor = 0x406,
 dbSortPDXSwe = 0x41d,
 dbSortPolish = 0x415,
 dbSortSpanish = 0x40a,
 dbSortSwedFin = 0x41d,
 dbSortTurkish = 0x41f,
 dbSortJapanese = 0x411,
 dbSortChineseSimplified = 0x804,
 dbSortChineseTraditional = 0x404,
 dbSortKorean = 0x412,
 dbSortThai = 0x41e,
 dbSortSlovenian = 0x424,
 dbSortUndefined = -1
    } CollatingOrderEnum;
typedef enum IdleEnum
    { dbFreeLocks = 1,
 dbRefreshCache = 8
    } IdleEnum;
typedef enum PermissionEnum
    { dbSecNoAccess = 0,
 dbSecFullAccess = 0xfffff,
 dbSecDelete = 0x10000,
 dbSecReadSec = 0x20000,
 dbSecWriteSec = 0x40000,
 dbSecWriteOwner = 0x80000,
 dbSecDBCreate = 0x1,
 dbSecDBOpen = 0x2,
 dbSecDBExclusive = 0x4,
 dbSecDBAdmin = 0x8,
 dbSecCreate = 0x1,
 dbSecReadDef = 0x4,
 dbSecWriteDef = 0x1000c,
 dbSecRetrieveData = 0x14,
 dbSecInsertData = 0x20,
 dbSecReplaceData = 0x40,
 dbSecDeleteData = 0x80
    } PermissionEnum;
typedef enum SynchronizeTypeEnum
    { dbRepExportChanges = 0x1,
 dbRepImportChanges = 0x2,
 dbRepImpExpChanges = 0x4,
 dbRepSyncInternet = 0x10
    } SynchronizeTypeEnum;
typedef enum ReplicaTypeEnum
    { dbRepMakeReadOnly = 0x2,
 dbRepMakePartial = 0x1
    } ReplicaTypeEnum;
typedef enum WorkspaceTypeEnum
    { dbUseODBC = 1,
 dbUseJet = 2
    } WorkspaceTypeEnum;
typedef enum CursorDriverEnum
    { dbUseDefaultCursor = -1,
 dbUseODBCCursor = 1,
 dbUseServerCursor = 2,
 dbUseClientBatchCursor = 3,
 dbUseNoCursor = 4
    } CursorDriverEnum;
typedef enum DriverPromptEnum
    { dbDriverPrompt = 2,
 dbDriverNoPrompt = 1,
 dbDriverComplete = 0,
 dbDriverCompleteRequired = 3
    } DriverPromptEnum;
typedef enum SetOptionEnum
    { dbPageTimeout = 6,
 dbLockRetry = 57,
 dbMaxBufferSize = 8,
 dbUserCommitSync = 58,
 dbImplicitCommitSync = 59,
 dbExclusiveAsyncDelay = 60,
 dbSharedAsyncDelay = 61,
 dbMaxLocksPerFile = 62,
 dbLockDelay = 63,
 dbRecycleLVs = 65,
 dbFlushTransactionTimeout = 66
    } SetOptionEnum;
typedef enum ParameterDirectionEnum
    { dbParamInput = 1,
 dbParamOutput = 2,
 dbParamInputOutput = 3,
 dbParamReturnValue = 4
    } ParameterDirectionEnum;
typedef enum UpdateTypeEnum
    { dbUpdateBatch = 4,
 dbUpdateRegular = 1,
 dbUpdateCurrentRecord = 2
    } UpdateTypeEnum;
typedef enum RecordStatusEnum
    { dbRecordUnmodified = 0,
 dbRecordModified = 1,
 dbRecordNew = 2,
 dbRecordDeleted = 3,
 dbRecordDBDeleted = 4
    } RecordStatusEnum;
typedef enum CommitTransOptionsEnum
    { dbForceOSFlush = 1
    } CommitTransOptionsEnum;
typedef enum _DAOSuppHelp
    { LogMessages = 0,
 KeepLocal = 0,
 Replicable = 0,
 ReplicableBool = 0,
 V1xNullBehavior = 0
    } _DAOSuppHelp;
DECLARE_INTERFACE_(_DAOCollection, IDispatch)
 {
 STDMETHOD(get_Count) (THIS_ short FAR* c) PURE;
 STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR* ppunk) PURE;
 STDMETHOD(Refresh) (THIS) PURE;
 };
DECLARE_INTERFACE_(_DAODynaCollection, _DAOCollection)
 {
 STDMETHOD(Append) (THIS_ IDispatch * Object) PURE;
 STDMETHOD(Delete) (THIS_ BSTR Name) PURE;
 };
DECLARE_INTERFACE_(_DAO, IDispatch)
 {
 STDMETHOD(get_Properties) (THIS_ DAOProperties FAR* FAR* ppprops) PURE;
 };
DECLARE_INTERFACE_(_DAODBEngine, _DAO)
{
 STDMETHOD( get_Properties ) (
                       DAOProperties __RPC_FAR *__RPC_FAR *ppprops );
 STDMETHOD( get_Version ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_IniPath ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_IniPath ) (
            BSTR path ) PURE;
 STDMETHOD( put_DefaultUser ) (
            BSTR user ) PURE;
 STDMETHOD( put_DefaultPassword ) (
            BSTR pw ) PURE;
 STDMETHOD( get_LoginTimeout ) (
                     short __RPC_FAR *ps ) PURE;
 STDMETHOD( put_LoginTimeout ) (
            short Timeout ) PURE;
 STDMETHOD( get_Workspaces ) (
                     DAOWorkspaces __RPC_FAR *__RPC_FAR *ppworks ) PURE;
 STDMETHOD( get_Errors ) (
                     DAOErrors __RPC_FAR *__RPC_FAR *pperrs ) PURE;
 STDMETHOD( Idle ) (
                      VARIANT Action ) PURE;
 STDMETHOD( CompactDatabase ) (
            BSTR SrcName,
            BSTR DstName,
                      VARIANT DstLocale,
                      VARIANT Options,
                      VARIANT SrcLocale ) PURE;
 STDMETHOD( RepairDatabase ) (
            BSTR Name ) PURE;
 STDMETHOD( RegisterDatabase ) (
            BSTR Dsn,
            BSTR Driver,
            VARIANT_BOOL Silent,
            BSTR Attributes ) PURE;
 STDMETHOD( _30_CreateWorkspace ) (
            BSTR Name,
            BSTR UserName,
            BSTR Password,
                     DAOWorkspace __RPC_FAR *__RPC_FAR *ppwrk ) PURE;
 STDMETHOD( OpenDatabase ) (
            BSTR Name,
                      VARIANT Options,
                      VARIANT ReadOnly,
                      VARIANT Connect,
                     DAODatabase __RPC_FAR *__RPC_FAR *ppdb ) PURE;
 STDMETHOD( CreateDatabase ) (
            BSTR Name,
            BSTR Locale,
                      VARIANT Option,
                     DAODatabase __RPC_FAR *__RPC_FAR *ppdb ) PURE;
 STDMETHOD( FreeLocks ) (
      VOID ) PURE;
 STDMETHOD( BeginTrans ) (
      VOID ) PURE;
 STDMETHOD( CommitTrans ) (
                          long Option ) PURE;
 STDMETHOD( Rollback ) (
      VOID ) PURE;
 STDMETHOD( SetDefaultWorkspace ) (
            BSTR Name,
            BSTR Password ) PURE;
 STDMETHOD( SetDataAccessOption ) (
            short Option,
            VARIANT Value ) PURE;
 STDMETHOD( ISAMStats ) (
            long StatNum,
                      VARIANT Reset,
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( get_SystemDB ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_SystemDB ) (
            BSTR SystemDBPath ) PURE;
 STDMETHOD( CreateWorkspace ) (
            BSTR Name,
            BSTR UserName,
            BSTR Password,
                      VARIANT UseType,
                     DAOWorkspace __RPC_FAR *__RPC_FAR *ppwrk ) PURE;
 STDMETHOD( OpenConnection ) (
            BSTR Name,
                      VARIANT Options,
                      VARIANT ReadOnly,
                      VARIANT Connect,
                     DAOConnection __RPC_FAR *__RPC_FAR *ppconn ) PURE;
 STDMETHOD( get_DefaultType ) (
                     long __RPC_FAR *Option ) PURE;
 STDMETHOD( put_DefaultType ) (
            long Option ) PURE;
 STDMETHOD( SetOption ) (
            LONG Option,
            VARIANT Value ) PURE;
 STDMETHOD( DumpObjects ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( DebugPrint ) (
            BSTR bstr ) PURE;
 };
DECLARE_INTERFACE_(DAOError, IDispatch)
{
 STDMETHOD( get_Number ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( get_Source ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_Description ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_HelpFile ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_HelpContext ) (
                     long __RPC_FAR *pl ) PURE;
 };
DECLARE_INTERFACE_(DAOErrors, _DAOCollection)
{
 STDMETHOD( get_Item ) (
            VARIANT Item,
                     DAOError __RPC_FAR *__RPC_FAR *pperr ) PURE;
 };
DECLARE_INTERFACE_(DAOProperty, _DAO)
{
 STDMETHOD( get_Value ) (
                     VARIANT __RPC_FAR *pval ) PURE;
 STDMETHOD( put_Value ) (
            VARIANT val ) PURE;
 STDMETHOD( get_Name ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Name ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_Type ) (
                     short __RPC_FAR *ptype ) PURE;
 STDMETHOD( put_Type ) (
            short type ) PURE;
 STDMETHOD( get_Inherited ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 };
DECLARE_INTERFACE_(DAOProperties, _DAODynaCollection)
{
 STDMETHOD( get_Item ) (
            VARIANT Item,
                     DAOProperty __RPC_FAR *__RPC_FAR *ppprop ) PURE;
 };
DECLARE_INTERFACE_(DAOWorkspace, _DAO)
{
 STDMETHOD( get_Name ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Name ) (
            BSTR Name ) PURE;
 STDMETHOD( get_UserName ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put__30_UserName ) (
            BSTR UserName ) PURE;
 STDMETHOD( put__30_Password ) (
            BSTR Password ) PURE;
 STDMETHOD( get_IsolateODBCTrans ) (
                     short __RPC_FAR *ps ) PURE;
 STDMETHOD( put_IsolateODBCTrans ) (
            short s ) PURE;
 STDMETHOD( get_Databases ) (
                     DAODatabases __RPC_FAR *__RPC_FAR *ppdbs ) PURE;
 STDMETHOD( get_Users ) (
                     DAOUsers __RPC_FAR *__RPC_FAR *ppusrs ) PURE;
 STDMETHOD( get_Groups ) (
                     DAOGroups __RPC_FAR *__RPC_FAR *ppgrps ) PURE;
 STDMETHOD( BeginTrans ) (
      VOID ) PURE;
 STDMETHOD( CommitTrans ) (
                          long Options ) PURE;
 STDMETHOD( Close ) (
      VOID ) PURE;
 STDMETHOD( Rollback ) (
      VOID ) PURE;
 STDMETHOD( OpenDatabase ) (
            BSTR Name,
                      VARIANT Options,
                      VARIANT ReadOnly,
                      VARIANT Connect,
                     DAODatabase __RPC_FAR *__RPC_FAR *ppdb ) PURE;
 STDMETHOD( CreateDatabase ) (
            BSTR Name,
            BSTR Connect,
                      VARIANT Option,
                     DAODatabase __RPC_FAR *__RPC_FAR *ppdb ) PURE;
 STDMETHOD( CreateUser ) (
                      VARIANT Name,
                      VARIANT PID,
                      VARIANT Password,
                     DAOUser __RPC_FAR *__RPC_FAR *ppusr ) PURE;
 STDMETHOD( CreateGroup ) (
                      VARIANT Name,
                      VARIANT PID,
                     DAOGroup __RPC_FAR *__RPC_FAR *ppgrp ) PURE;
 STDMETHOD( OpenConnection ) (
            BSTR Name,
                      VARIANT Options,
                      VARIANT ReadOnly,
                      VARIANT Connect,
                     DAOConnection __RPC_FAR *__RPC_FAR *ppconn ) PURE;
 STDMETHOD( get_LoginTimeout ) (
                     long __RPC_FAR *pTimeout ) PURE;
 STDMETHOD( put_LoginTimeout ) (
            long Timeout ) PURE;
 STDMETHOD( get_DefaultCursorDriver ) (
                     long __RPC_FAR *pCursorType ) PURE;
 STDMETHOD( put_DefaultCursorDriver ) (
            long CursorType ) PURE;
 STDMETHOD( get_hEnv ) (
                     LONG __RPC_FAR *phEnv ) PURE;
 STDMETHOD( get_Type ) (
                     LONG __RPC_FAR *ptype ) PURE;
 STDMETHOD( get_Connections ) (
                     DAOConnections __RPC_FAR *__RPC_FAR *ppcns ) PURE;
 };
DECLARE_INTERFACE_(DAOWorkspaces, _DAODynaCollection)
{
 STDMETHOD( get_Item ) (
            VARIANT Item,
                     DAOWorkspace __RPC_FAR *__RPC_FAR *ppwrk ) PURE;
 };
DECLARE_INTERFACE_(DAOConnection, IDispatch)
{
 STDMETHOD( QueryInterface ) ( REFIID riid, LPVOID FAR* ppvObj );
 STDMETHOD( get_Name ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_Connect ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_Database ) (
                     DAODatabase __RPC_FAR *__RPC_FAR *ppDb ) PURE;
 STDMETHOD( get_hDbc ) (
                     LONG __RPC_FAR *phDbc ) PURE;
 STDMETHOD( get_QueryTimeout ) (
                     SHORT __RPC_FAR *pSeconds ) PURE;
 STDMETHOD( put_QueryTimeout ) (
            SHORT Seconds ) PURE;
 STDMETHOD( get_Transactions ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( get_RecordsAffected ) (
                     LONG __RPC_FAR *pRecords ) PURE;
 STDMETHOD( get_StillExecuting ) (
                     VARIANT_BOOL __RPC_FAR *pStillExec ) PURE;
 STDMETHOD( get_Updatable ) (
                     VARIANT_BOOL __RPC_FAR *pStillExec ) PURE;
 STDMETHOD( get_QueryDefs ) (
                     DAOQueryDefs __RPC_FAR *__RPC_FAR *ppqdfs ) PURE;
 STDMETHOD( get_Recordsets ) (
                     DAORecordsets __RPC_FAR *__RPC_FAR *pprsts ) PURE;
 STDMETHOD( Cancel ) (
      VOID ) PURE;
 STDMETHOD( Close ) (
      VOID ) PURE;
 STDMETHOD( CreateQueryDef ) (
                      VARIANT Name,
                      VARIANT SQLText,
                     DAOQueryDef __RPC_FAR *__RPC_FAR *ppqdf ) PURE;
 STDMETHOD( Execute ) (
            BSTR Query,
                      VARIANT Options ) PURE;
 STDMETHOD( OpenRecordset ) (
            BSTR Name,
                      VARIANT Type,
                      VARIANT Options,
                      VARIANT LockEdit,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 };
DECLARE_INTERFACE_(DAOConnections, _DAOCollection)
{
 STDMETHOD( get_Item ) (
            VARIANT Item,
                     DAOConnection __RPC_FAR *__RPC_FAR *ppconn ) PURE;
 };
DECLARE_INTERFACE_(DAODatabase, _DAO)
{
 STDMETHOD( get_CollatingOrder ) (
                     LONG __RPC_FAR *pl ) PURE;
 STDMETHOD( get_Connect ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_Name ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_QueryTimeout ) (
                     short __RPC_FAR *ps ) PURE;
 STDMETHOD( put_QueryTimeout ) (
            short Timeout ) PURE;
 STDMETHOD( get_Transactions ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( get_Updatable ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( get_Version ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_RecordsAffected ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( get_TableDefs ) (
                     DAOTableDefs __RPC_FAR *__RPC_FAR *pptdfs ) PURE;
 STDMETHOD( get_QueryDefs ) (
                     DAOQueryDefs __RPC_FAR *__RPC_FAR *ppqdfs ) PURE;
 STDMETHOD( get_Relations ) (
                     DAORelations __RPC_FAR *__RPC_FAR *pprls ) PURE;
 STDMETHOD( get_Containers ) (
                     DAOContainers __RPC_FAR *__RPC_FAR *ppctns ) PURE;
 STDMETHOD( get_Recordsets ) (
                     DAORecordsets __RPC_FAR *__RPC_FAR *pprsts ) PURE;
 STDMETHOD( Close ) (
      VOID ) PURE;
 STDMETHOD( Execute ) (
            BSTR Query,
                      VARIANT Options ) PURE;
 STDMETHOD( _30_OpenRecordset ) (
            BSTR Name,
                      VARIANT Type,
                      VARIANT Options,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( CreateProperty ) (
                      VARIANT Name,
                      VARIANT Type,
                      VARIANT Value,
                      VARIANT DDL,
                     DAOProperty __RPC_FAR *__RPC_FAR *pprp ) PURE;
 STDMETHOD( CreateRelation ) (
                      VARIANT Name,
                      VARIANT Table,
                      VARIANT ForeignTable,
                      VARIANT Attributes,
                     DAORelation __RPC_FAR *__RPC_FAR *pprel ) PURE;
 STDMETHOD( CreateTableDef ) (
                      VARIANT Name,
                      VARIANT Attributes,
                      VARIANT SourceTablename,
                      VARIANT Connect,
                     DAOTableDef __RPC_FAR *__RPC_FAR *pptdf ) PURE;
 STDMETHOD( BeginTrans ) (
      VOID ) PURE;
 STDMETHOD( CommitTrans ) (
                          long Options ) PURE;
 STDMETHOD( Rollback ) (
      VOID ) PURE;
 STDMETHOD( CreateDynaset ) (
            BSTR Name,
                      VARIANT Options,
                      VARIANT Inconsistent,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( CreateQueryDef ) (
                      VARIANT Name,
                      VARIANT SQLText,
                     DAOQueryDef __RPC_FAR *__RPC_FAR *ppqdf ) PURE;
 STDMETHOD( CreateSnapshot ) (
            BSTR Source,
                      VARIANT Options,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( DeleteQueryDef ) (
            BSTR Name ) PURE;
 STDMETHOD( ExecuteSQL ) (
            BSTR SQL,
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( ListFields ) (
            BSTR Name,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( ListTables ) (
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( OpenQueryDef ) (
            BSTR Name,
                     DAOQueryDef __RPC_FAR *__RPC_FAR *ppqdf ) PURE;
 STDMETHOD( OpenTable ) (
            BSTR Name,
                      VARIANT Options,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( get_ReplicaID ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_DesignMasterID ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_DesignMasterID ) (
            BSTR MasterID ) PURE;
 STDMETHOD( Synchronize ) (
            BSTR DbPathName,
                      VARIANT ExchangeType ) PURE;
 STDMETHOD( MakeReplica ) (
            BSTR PathName,
            BSTR Description,
                      VARIANT Options ) PURE;
 STDMETHOD( put_Connect ) (
            BSTR ODBCConnnect ) PURE;
 STDMETHOD( NewPassword ) (
            BSTR bstrOld,
            BSTR bstrNew ) PURE;
 STDMETHOD( OpenRecordset ) (
            BSTR Name,
                      VARIANT Type,
                      VARIANT Options,
                      VARIANT LockEdit,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( get_Connection ) (
                     DAOConnection __RPC_FAR *__RPC_FAR *ppCn ) PURE;
 STDMETHOD( PopulatePartial ) (
            BSTR DbPathName ) PURE;
 };
DECLARE_INTERFACE_(DAODatabases, _DAOCollection)
{
 STDMETHOD( get_Item ) (
            VARIANT Item,
                     DAODatabase __RPC_FAR *__RPC_FAR *ppdb ) PURE;
 };
DECLARE_INTERFACE_(_DAOTableDef, _DAO)
{
 STDMETHOD( get_Attributes ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( put_Attributes ) (
            long Attributes ) PURE;
 STDMETHOD( get_Connect ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Connect ) (
            BSTR Connection ) PURE;
 STDMETHOD( get_DateCreated ) (
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( get_LastUpdated ) (
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( get_Name ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Name ) (
            BSTR Name ) PURE;
 STDMETHOD( get_SourceTableName ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_SourceTableName ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_Updatable ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( get_ValidationText ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_ValidationText ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_ValidationRule ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_ValidationRule ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_RecordCount ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( get_Fields ) (
                     DAOFields __RPC_FAR *__RPC_FAR *ppflds ) PURE;
 STDMETHOD( get_Indexes ) (
                     DAOIndexes __RPC_FAR *__RPC_FAR *ppidxs ) PURE;
 STDMETHOD( OpenRecordset ) (
                      VARIANT Type,
                      VARIANT Options,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( RefreshLink ) (
      VOID ) PURE;
 STDMETHOD( CreateField ) (
                      VARIANT Name,
                      VARIANT Type,
                      VARIANT Size,
                     DAOField __RPC_FAR *__RPC_FAR *ppfld ) PURE;
 STDMETHOD( CreateIndex ) (
                      VARIANT Name,
                     DAOIndex __RPC_FAR *__RPC_FAR *ppidx ) PURE;
 STDMETHOD( CreateProperty ) (
                      VARIANT Name,
                      VARIANT Type,
                      VARIANT Value,
                      VARIANT DDL,
                     DAOProperty __RPC_FAR *__RPC_FAR *pprp ) PURE;
 STDMETHOD( get_ConflictTable ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_ReplicaFilter ) (
                     VARIANT __RPC_FAR *pFilter ) PURE;
 STDMETHOD( put_ReplicaFilter ) (
            VARIANT Filter ) PURE;
 };
DECLARE_INTERFACE_(DAOTableDefs, _DAODynaCollection)
{
 STDMETHOD( get_Item ) (
            VARIANT Item,
                     DAOTableDef __RPC_FAR *__RPC_FAR *pptdf ) PURE;
 };
DECLARE_INTERFACE_(_DAOQueryDef, _DAO)
{
 STDMETHOD( get_DateCreated ) (
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( get_LastUpdated ) (
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( get_Name ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Name ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_ODBCTimeout ) (
                     short __RPC_FAR *ps ) PURE;
 STDMETHOD( put_ODBCTimeout ) (
            short timeout ) PURE;
 STDMETHOD( get_Type ) (
                     short __RPC_FAR *pi ) PURE;
 STDMETHOD( get_SQL ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_SQL ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_Updatable ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( get_Connect ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Connect ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_ReturnsRecords ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( put_ReturnsRecords ) (
            VARIANT_BOOL f ) PURE;
 STDMETHOD( get_RecordsAffected ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( get_Fields ) (
                     DAOFields __RPC_FAR *__RPC_FAR *ppflds ) PURE;
 STDMETHOD( get_Parameters ) (
                     DAOParameters __RPC_FAR *__RPC_FAR *ppprms ) PURE;
 STDMETHOD( Close ) (
      VOID ) PURE;
 STDMETHOD( _30_OpenRecordset ) (
                      VARIANT Type,
                      VARIANT Options,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( _30__OpenRecordset ) (
                      VARIANT Type,
                      VARIANT Options,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( _Copy ) (
                     DAOQueryDef __RPC_FAR *__RPC_FAR *ppqdf ) PURE;
 STDMETHOD( Execute ) (
                      VARIANT Options ) PURE;
 STDMETHOD( Compare ) (
            DAOQueryDef __RPC_FAR *pQdef,
            SHORT __RPC_FAR *lps ) PURE;
 STDMETHOD( CreateDynaset ) (
                      VARIANT Options,
                      VARIANT Inconsistent,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( CreateSnapshot ) (
                      VARIANT Options,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( ListParameters ) (
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( CreateProperty ) (
                      VARIANT Name,
                      VARIANT Type,
                      VARIANT Value,
                      VARIANT DDL,
                     DAOProperty __RPC_FAR *__RPC_FAR *pprp ) PURE;
 STDMETHOD( OpenRecordset ) (
                      VARIANT Type,
                      VARIANT Options,
                      VARIANT LockEdit,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( _OpenRecordset ) (
                      VARIANT Type,
                      VARIANT Options,
                      VARIANT LockEdit,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( Cancel ) (
      VOID ) PURE;
 STDMETHOD( get_hStmt ) (
                     LONG __RPC_FAR *phStmt ) PURE;
 STDMETHOD( get_MaxRecords ) (
                     LONG __RPC_FAR *pMxRecs ) PURE;
 STDMETHOD( put_MaxRecords ) (
            LONG MxRecs ) PURE;
 STDMETHOD( get_StillExecuting ) (
                     VARIANT_BOOL __RPC_FAR *pStillExec ) PURE;
 STDMETHOD( get_CacheSize ) (
                     long __RPC_FAR *lCacheSize ) PURE;
 STDMETHOD( put_CacheSize ) (
            long lCacheSize ) PURE;
 STDMETHOD( get_Prepare ) (
                     VARIANT __RPC_FAR *pb ) PURE;
 STDMETHOD( put_Prepare ) (
            VARIANT f ) PURE;
 };
DECLARE_INTERFACE_(DAOQueryDefs, _DAODynaCollection)
{
 STDMETHOD( get_Item ) (
            VARIANT Item,
                     DAOQueryDef __RPC_FAR *__RPC_FAR *ppqdef ) PURE;
 };
DECLARE_INTERFACE_(DAORecordset, _DAO)
{
 STDMETHOD( GetIDsOfNames ) ( REFIID riid, OLECHAR FAR* FAR* rgszNames, UINT cNames, LCID lcid, DISPID FAR* rgdispid );
 STDMETHOD( Invoke ) ( DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS FAR* pdispparams, VARIANT FAR* pvarResult, EXCEPINFO FAR* pexcepinfo, UINT FAR* puArgErr );
 STDMETHOD( get_BOF ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( get_Bookmark ) (
                     SAFEARRAY __RPC_FAR * __RPC_FAR *ppsach ) PURE;
 STDMETHOD( put_Bookmark ) (
            SAFEARRAY __RPC_FAR * __RPC_FAR *psach ) PURE;
 STDMETHOD( get_Bookmarkable ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( get_DateCreated ) (
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( get_EOF ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( get_Filter ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Filter ) (
            BSTR Filter ) PURE;
 STDMETHOD( get_Index ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Index ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_LastModified ) (
                     SAFEARRAY __RPC_FAR * __RPC_FAR *ppsa ) PURE;
 STDMETHOD( get_LastUpdated ) (
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( get_LockEdits ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( put_LockEdits ) (
            VARIANT_BOOL Lock ) PURE;
 STDMETHOD( get_Name ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_NoMatch ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( get_Sort ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Sort ) (
            BSTR Sort ) PURE;
 STDMETHOD( get_Transactions ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( get_Type ) (
                     short __RPC_FAR *ps ) PURE;
 STDMETHOD( get_RecordCount ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( get_Updatable ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( get_Restartable ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( get_ValidationText ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_ValidationRule ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_CacheStart ) (
                     SAFEARRAY __RPC_FAR * __RPC_FAR *ppsa ) PURE;
 STDMETHOD( put_CacheStart ) (
            SAFEARRAY __RPC_FAR * __RPC_FAR *psa ) PURE;
 STDMETHOD( get_CacheSize ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( put_CacheSize ) (
            long CacheSize ) PURE;
 STDMETHOD( get_PercentPosition ) (
                     float __RPC_FAR *pd ) PURE;
 STDMETHOD( put_PercentPosition ) (
            float Position ) PURE;
 STDMETHOD( get_AbsolutePosition ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( put_AbsolutePosition ) (
            long Position ) PURE;
 STDMETHOD( get_EditMode ) (
                     short __RPC_FAR *pi ) PURE;
 STDMETHOD( get_ODBCFetchCount ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( get_ODBCFetchDelay ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( get_Parent ) (
                     DAODatabase __RPC_FAR *__RPC_FAR *pdb ) PURE;
 STDMETHOD( get_Fields ) (
                     DAOFields __RPC_FAR *__RPC_FAR *ppflds ) PURE;
 STDMETHOD( get_Indexes ) (
                     DAOIndexes __RPC_FAR *__RPC_FAR *ppidxs ) PURE;
 STDMETHOD( _30_CancelUpdate ) (
      VOID ) PURE;
 STDMETHOD( AddNew ) (
      VOID ) PURE;
 STDMETHOD( Close ) (
      VOID ) PURE;
 STDMETHOD( OpenRecordset ) (
                      VARIANT Type,
                      VARIANT Options,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( Delete ) (
      VOID ) PURE;
 STDMETHOD( Edit ) (
      VOID ) PURE;
 STDMETHOD( FindFirst ) (
            BSTR Criteria ) PURE;
 STDMETHOD( FindLast ) (
            BSTR Criteria ) PURE;
 STDMETHOD( FindNext ) (
            BSTR Criteria ) PURE;
 STDMETHOD( FindPrevious ) (
            BSTR Criteria ) PURE;
 STDMETHOD( MoveFirst ) (
      VOID ) PURE;
 STDMETHOD( _30_MoveLast ) (
      VOID ) PURE;
 STDMETHOD( MoveNext ) (
      VOID ) PURE;
 STDMETHOD( MovePrevious ) (
      VOID ) PURE;
 STDMETHOD( Seek ) (
            BSTR Comparison,
            VARIANT Key1,
                      VARIANT Key2,
                      VARIANT Key3,
                      VARIANT Key4,
                      VARIANT Key5,
                      VARIANT Key6,
                      VARIANT Key7,
                      VARIANT Key8,
                      VARIANT Key9,
                      VARIANT Key10,
                      VARIANT Key11,
                      VARIANT Key12,
                      VARIANT Key13 ) PURE;
 STDMETHOD( _30_Update ) (
      VOID ) PURE;
 STDMETHOD( Clone ) (
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( Requery ) (
                      VARIANT NewQueryDef ) PURE;
 STDMETHOD( Move ) (
            long Rows,
                      VARIANT StartBookmark ) PURE;
 STDMETHOD( FillCache ) (
                      VARIANT Rows,
                      VARIANT StartBookmark ) PURE;
 STDMETHOD( CreateDynaset ) (
                      VARIANT Options,
                      VARIANT Inconsistent,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( CreateSnapshot ) (
                      VARIANT Options,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( CopyQueryDef ) (
                     DAOQueryDef __RPC_FAR *__RPC_FAR *ppqdf ) PURE;
 STDMETHOD( ListFields ) (
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( ListIndexes ) (
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 STDMETHOD( GetRows ) (
                      VARIANT NumRows,
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( get_Collect ) (
            VARIANT Item,
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( put_Collect ) (
            VARIANT Item,
            VARIANT value ) PURE;
 STDMETHOD( Cancel ) (
      VOID ) PURE;
 STDMETHOD( NextRecordset ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( get_hStmt ) (
                     LONG __RPC_FAR *phStmt ) PURE;
 STDMETHOD( get_StillExecuting ) (
                     VARIANT_BOOL __RPC_FAR *pStillExec ) PURE;
 STDMETHOD( get_BatchSize ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( put_BatchSize ) (
            long BatchSize ) PURE;
 STDMETHOD( get_BatchCollisionCount ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( get_BatchCollisions ) (
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( get_Connection ) (
                     DAOConnection __RPC_FAR *__RPC_FAR *ppCn ) PURE;
 STDMETHOD( putref_Connection ) (
            DAOConnection __RPC_FAR *pNewCn ) PURE;
 STDMETHOD( get_RecordStatus ) (
                     short __RPC_FAR *pi ) PURE;
 STDMETHOD( get_UpdateOptions ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( put_UpdateOptions ) (
            long l ) PURE;
 STDMETHOD( CancelUpdate ) (
                          long UpdateType ) PURE;
 STDMETHOD( Update ) (
                          long UpdateType,
                          VARIANT_BOOL Force ) PURE;
 STDMETHOD( MoveLast ) (
                          long Options ) PURE;
 };
DECLARE_INTERFACE_(DAORecordsets, _DAOCollection)
{
 STDMETHOD( get_Item ) (
            VARIANT Item,
                     DAORecordset __RPC_FAR *__RPC_FAR *pprst ) PURE;
 };
DECLARE_INTERFACE_(_DAOField, _DAO)
{
 STDMETHOD( get_CollatingOrder ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( get_Type ) (
                     short __RPC_FAR *ps ) PURE;
 STDMETHOD( put_Type ) (
            short Type ) PURE;
 STDMETHOD( get_Name ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Name ) (
            BSTR Name ) PURE;
 STDMETHOD( get_Size ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( put_Size ) (
            long Size ) PURE;
 STDMETHOD( get_SourceField ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_SourceTable ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_Value ) (
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( put_Value ) (
            VARIANT Val ) PURE;
 STDMETHOD( get_Attributes ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( put_Attributes ) (
            long Attr ) PURE;
 STDMETHOD( get_OrdinalPosition ) (
                     short __RPC_FAR *ps ) PURE;
 STDMETHOD( put_OrdinalPosition ) (
            short Pos ) PURE;
 STDMETHOD( get_ValidationText ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_ValidationText ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_ValidateOnSet ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( put_ValidateOnSet ) (
            VARIANT_BOOL Validate ) PURE;
 STDMETHOD( get_ValidationRule ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_ValidationRule ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_DefaultValue ) (
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( put_DefaultValue ) (
            VARIANT var ) PURE;
 STDMETHOD( get_Required ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( put_Required ) (
            VARIANT_BOOL fReq ) PURE;
 STDMETHOD( get_AllowZeroLength ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( put_AllowZeroLength ) (
            VARIANT_BOOL fAllow ) PURE;
 STDMETHOD( get_DataUpdatable ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( get_ForeignName ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_ForeignName ) (
            BSTR bstr ) PURE;
 STDMETHOD( AppendChunk ) (
            VARIANT Val ) PURE;
 STDMETHOD( GetChunk ) (
            long Offset,
            long Bytes,
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( _30_FieldSize ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( CreateProperty ) (
                      VARIANT Name,
                      VARIANT Type,
                      VARIANT Value,
                      VARIANT DDL,
                     DAOProperty __RPC_FAR *__RPC_FAR *pprp ) PURE;
 STDMETHOD( get_CollectionIndex ) (
                     short __RPC_FAR *i ) PURE;
 STDMETHOD( get_OriginalValue ) (
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( get_VisibleValue ) (
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( get_FieldSize ) (
                     long __RPC_FAR *pl ) PURE;
 };
DECLARE_INTERFACE_(DAOFields, _DAODynaCollection)
{
 STDMETHOD( get_Item ) (
            VARIANT Item,
                     DAOField __RPC_FAR *__RPC_FAR *ppfld ) PURE;
 };
DECLARE_INTERFACE_(_DAOIndex, _DAO)
{
 STDMETHOD( get_Name ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Name ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_Foreign ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( get_Unique ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( put_Unique ) (
            VARIANT_BOOL fUnique ) PURE;
 STDMETHOD( get_Clustered ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( put_Clustered ) (
            VARIANT_BOOL fClustered ) PURE;
 STDMETHOD( get_Required ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( put_Required ) (
            VARIANT_BOOL fRequired ) PURE;
 STDMETHOD( get_IgnoreNulls ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( put_IgnoreNulls ) (
            VARIANT_BOOL fIgnoreNulls ) PURE;
 STDMETHOD( get_Primary ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( put_Primary ) (
            VARIANT_BOOL fPrimary ) PURE;
 STDMETHOD( get_DistinctCount ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( get_Fields ) (
                     VARIANT __RPC_FAR *pv ) PURE;
 STDMETHOD( put_Fields ) (
            VARIANT v ) PURE;
 STDMETHOD( CreateField ) (
                      VARIANT Name,
                      VARIANT Type,
                      VARIANT Size,
                     DAOField __RPC_FAR *__RPC_FAR *ppfld ) PURE;
 STDMETHOD( CreateProperty ) (
                      VARIANT Name,
                      VARIANT Type,
                      VARIANT Value,
                      VARIANT DDL,
                     DAOProperty __RPC_FAR *__RPC_FAR *pprp ) PURE;
 };
DECLARE_INTERFACE_(DAOIndexes, _DAODynaCollection)
{
 STDMETHOD( get_Item ) (
            VARIANT Item,
                     DAOIndex __RPC_FAR *__RPC_FAR *ppidx ) PURE;
 };
DECLARE_INTERFACE_(DAOParameter, _DAO)
{
 STDMETHOD( get_Name ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_Value ) (
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( put_Value ) (
            VARIANT val ) PURE;
 STDMETHOD( get_Type ) (
                     short __RPC_FAR *ps ) PURE;
 STDMETHOD( put_Type ) (
            short s ) PURE;
 STDMETHOD( get_Direction ) (
                     short __RPC_FAR *pOption ) PURE;
 STDMETHOD( put_Direction ) (
            short Option ) PURE;
 };
DECLARE_INTERFACE_(DAOParameters, _DAOCollection)
{
 STDMETHOD( get_Item ) (
            VARIANT Item,
                     DAOParameter __RPC_FAR *__RPC_FAR *ppprm ) PURE;
 };
DECLARE_INTERFACE_(_DAOUser, _DAO)
{
 STDMETHOD( get_Name ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Name ) (
            BSTR bstr ) PURE;
 STDMETHOD( put_PID ) (
            BSTR bstr ) PURE;
 STDMETHOD( put_Password ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_Groups ) (
                     DAOGroups __RPC_FAR *__RPC_FAR *ppgrps ) PURE;
 STDMETHOD( NewPassword ) (
            BSTR bstrOld,
            BSTR bstrNew ) PURE;
 STDMETHOD( CreateGroup ) (
                      VARIANT Name,
                      VARIANT PID,
                     DAOGroup __RPC_FAR *__RPC_FAR *ppgrp ) PURE;
 };
DECLARE_INTERFACE_(DAOUsers, _DAODynaCollection)
{
 STDMETHOD( get_Item ) (
            VARIANT Item,
                     DAOUser __RPC_FAR *__RPC_FAR *ppusr ) PURE;
 };
DECLARE_INTERFACE_(_DAOGroup, _DAO)
{
 STDMETHOD( get_Name ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Name ) (
            BSTR bstr ) PURE;
 STDMETHOD( put_PID ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_Users ) (
                     DAOUsers __RPC_FAR *__RPC_FAR *ppusrs ) PURE;
 STDMETHOD( CreateUser ) (
                      VARIANT Name,
                      VARIANT PID,
                      VARIANT Password,
                     DAOUser __RPC_FAR *__RPC_FAR *ppusr ) PURE;
 };
DECLARE_INTERFACE_(DAOGroups, _DAODynaCollection)
{
 STDMETHOD( get_Item ) (
            VARIANT Item,
                     DAOGroup __RPC_FAR *__RPC_FAR *ppgrp ) PURE;
 };
DECLARE_INTERFACE_(_DAORelation, _DAO)
{
 STDMETHOD( get_Name ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Name ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_Table ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Table ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_ForeignTable ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_ForeignTable ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_Attributes ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( put_Attributes ) (
            long attr ) PURE;
 STDMETHOD( get_Fields ) (
                     DAOFields __RPC_FAR *__RPC_FAR *ppflds ) PURE;
 STDMETHOD( CreateField ) (
                      VARIANT Name,
                      VARIANT Type,
                      VARIANT Size,
                     DAOField __RPC_FAR *__RPC_FAR *ppfld ) PURE;
 STDMETHOD( get_PartialReplica ) (
                     VARIANT_BOOL __RPC_FAR *pfPartialReplica ) PURE;
 STDMETHOD( put_PartialReplica ) (
            VARIANT_BOOL fPartialReplica ) PURE;
 };
DECLARE_INTERFACE_(DAORelations, _DAODynaCollection)
{
 STDMETHOD( get_Item ) (
            VARIANT Item,
                     DAORelation __RPC_FAR *__RPC_FAR *pprel ) PURE;
 };
DECLARE_INTERFACE_(DAOContainer, _DAO)
{
 STDMETHOD( get_Name ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_Owner ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Owner ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_UserName ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_UserName ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_Permissions ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( put_Permissions ) (
            long permissions ) PURE;
 STDMETHOD( get_Inherit ) (
                     VARIANT_BOOL __RPC_FAR *pb ) PURE;
 STDMETHOD( put_Inherit ) (
            VARIANT_BOOL fInherit ) PURE;
 STDMETHOD( get_Documents ) (
                     DAODocuments __RPC_FAR *__RPC_FAR *ppdocs ) PURE;
 STDMETHOD( get_AllPermissions ) (
                     long __RPC_FAR *pl ) PURE;
 };
DECLARE_INTERFACE_(DAOContainers, _DAOCollection)
{
 STDMETHOD( get_Item ) (
            VARIANT Item,
                     DAOContainer __RPC_FAR *__RPC_FAR *ppctn ) PURE;
 };
DECLARE_INTERFACE_(DAODocument, _DAO)
{
 STDMETHOD( get_Name ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_Owner ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_Owner ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_Container ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( get_UserName ) (
                     BSTR __RPC_FAR *pbstr ) PURE;
 STDMETHOD( put_UserName ) (
            BSTR bstr ) PURE;
 STDMETHOD( get_Permissions ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( put_Permissions ) (
            long permissions ) PURE;
 STDMETHOD( get_DateCreated ) (
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( get_LastUpdated ) (
                     VARIANT __RPC_FAR *pvar ) PURE;
 STDMETHOD( get_AllPermissions ) (
                     long __RPC_FAR *pl ) PURE;
 STDMETHOD( CreateProperty ) (
                      VARIANT Name,
                      VARIANT Type,
                      VARIANT Value,
                      VARIANT DDL,
                     DAOProperty __RPC_FAR *__RPC_FAR *pprp ) PURE;
 };
DECLARE_INTERFACE_(DAODocuments, _DAOCollection)
{
 STDMETHOD( get_Item ) (
            VARIANT Item,
                     DAODocument __RPC_FAR *__RPC_FAR *ppdoc ) PURE;
 };
DECLARE_INTERFACE_(DAOIndexFields, _DAODynaCollection)
{
 STDMETHOD( get_Item ) (
                      VARIANT Item,
                     VARIANT __RPC_FAR *pvar ) PURE;
 };
#endif
#pragma endregion
