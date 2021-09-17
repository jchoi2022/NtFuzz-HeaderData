#pragma warning( disable : 4275 )
#error The DAOSDK 3.5 libraries will not operate correctly if built with MFC older than 4.2
#include <dbdaoint.h>
#include <daogetrw.h>
#include <dbdaoid.h>
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <_dbdao.h>
typedef struct
 {
 DWORD dwBindIndexType;
 union
  {
  LONG i;
  LPCTSTR pstr;
  };
 DWORD dwType;
 DWORD dwOffset;
 DWORD cb;
 } DAORSETBINDING, *LPDAORSETBINDING;
class COleVariant;
class CdbBookmark;
class CdbException;
class CdbOleObject;
class CdbObject;
class CdbError;
class CdbProperty;
class CdbDBEngine;
class CdbWorkspace;
class CdbDatabase;
class CdbConnection;
class CdbRecordset;
class CdbGetRowsEx;
class CdbQueryDef;
class CdbTableDef;
class CdbField;
class CdbRelation;
class CdbIndex;
class CdbUser;
class CdbGroup;
class CdbDocument;
class CdbContainer;
class CdbParameter;
class CdbCollection;
class CdbErrors;
class CdbProperties;
class CdbWorkspaces;
class CdbDatabases;
class CdbConnections;
class CdbRecordsets;
class CdbQueryDefs;
class CdbTableDefs;
class CdbFields;
class CdbRelations;
class CdbIndexes;
class CdbUsers;
class CdbGroups;
class CdbDocuments;
class CdbContainers;
class CdbParameters;
class DLLEXPORT CdbException
 {
public:
 CONSTRUCTOR CdbException (HRESULT hr);
 HRESULT m_hr;
 };
class DLLEXPORT CdbBookmark : public COleVariant
 {
 public:
 CONSTRUCTOR CdbBookmark (LPSAFEARRAY psa);
 CONSTRUCTOR CdbBookmark ();
 CONSTRUCTOR CdbBookmark (const CdbBookmark &);
 CdbBookmark & operator = (const CdbBookmark &);
 operator LPSAFEARRAY (VOID);
 };
class DLLEXPORT CdbIndexFields : public CdbFields
 {
 public:
 CdbField Item (LPCTSTR pstr);
 CdbField Item (LONG i);
 CdbObject ObItem (LPCTSTR pstr);
 CdbObject ObItem (LONG i);
 };
class DLLEXPORT CdbLastOLEError : public CdbOleObject
 {
 public:
 CONSTRUCTOR CdbLastOLEError (VOID);
 CString GetSource (VOID);
 CString GetDescription (VOID);
 CString GetHelpFile (VOID);
 DWORD GetHelpContext (VOID);
 };
class DLLEXPORT CdbDBEngine : public CdbObject
 {
 public:
 CONSTRUCTOR CdbDBEngine (DAODBEngine *peng, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbDBEngine (BOOL bPrivate=FALSE, BOOL bStart=TRUE, LPCTSTR pstrIniPath=NULL, LPCTSTR pstrDefUser=NULL, LPCTSTR pstrDefPW=NULL, LONG lType=dbUseJet);
 CONSTRUCTOR CdbDBEngine (const CdbDBEngine &);
 CdbDBEngine & operator = (const CdbDBEngine &);
 inline CdbWorkspace operator [] (LONG lIndex);
 inline CdbWorkspace operator [] (LPCTSTR pstrIndex);
 VOID OnInterfaceChange (VOID);
 VOID SetDefaultPassword (LPCTSTR pstr);
 VOID SetDefaultUser (LPCTSTR pstr);
 VOID SetIniPath (LPCTSTR pstr);
 CString GetIniPath (VOID);
 VOID SetDefaultType (LONG l);
 LONG GetDefaultType (VOID);
 VOID SetLoginTimeout (SHORT s);
 SHORT GetLoginTimeout (VOID);
 CString GetVersion (VOID);
 CString GetSystemDB (VOID);
 VOID SetSystemDB (LPCTSTR pstr);
 CdbWorkspace CreateWorkspace (LPCTSTR pstrName, LPCTSTR pstrUser, LPCTSTR pstrPassword, LONG lType=-1);
 CdbDatabase OpenDatabase (LPCTSTR pstrName, BOOL bExclusive, BOOL bReadOnly=FALSE, LPCTSTR pstrConnect=NULL);
 CdbDatabase OpenDatabase (LPCTSTR pstrName, LONG lOption=0L, BOOL bReadOnly=FALSE, LPCTSTR pstrConnect=NULL);
 CdbConnection OpenConnection (LPCTSTR pstrName, LONG lOption=-1L, BOOL bReadOnly=FALSE, LPCTSTR pstrConnect=NULL);
 VOID CompactDatabase (LPCTSTR pstrOldDatabase, LPCTSTR pstrNewDatabase, LPCTSTR pstrDstConnect = NULL, LONG lOptions=-1, LPCTSTR pstrSrcConnect = NULL);
 VOID RepairDatabase (LPCTSTR pstrDatabase);
 VOID RegisterDatabase (LPCTSTR pstrDatabase, LPCTSTR pstrDriver, BOOL bSilent, LPCTSTR pstrAttributes);
 VOID Idle (LONG lOptions=-1);
 VOID Start (VOID);
 VOID SetOption (long lOption, LPVARIANT pvValue);
 CdbWorkspaces Workspaces;
 CdbErrors Errors;
 private:
 BOOL m_bStarted;
 };
class DLLEXPORT CdbWorkspace : public CdbObject
 {
 public:
 CONSTRUCTOR CdbWorkspace (VOID);
 CONSTRUCTOR CdbWorkspace (DAOWorkspace *pwrk, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbWorkspace (const CdbWorkspace &);
 CdbWorkspace & operator = (const CdbWorkspace &);
 inline CdbDatabase operator [] (LONG lIndex);
 inline CdbDatabase operator [] (LPCTSTR pstrIndex);
 VOID OnInterfaceChange (VOID);
 CString GetName (VOID);
 VOID SetName (LPCTSTR pstr);
 CString GetUserName (VOID);
 BOOL GetIsolateODBCTrans (VOID);
 VOID SetIsolateODBCTrans (BOOL b);
 LONG GetType (VOID);
 LONG GetDefaultCursorDriver (VOID);
 VOID SetDefaultCursorDriver (LONG l);
 LONG GetLoginTimeout (VOID);
 VOID SetLoginTimeout (LONG l);
 VOID BeginTrans (VOID);
 VOID CommitTrans (LONG lOptions=-1);
 VOID Close (VOID);
 VOID Rollback (VOID);
 CdbDatabase OpenDatabase (LPCTSTR pstrName, BOOL bExclusive, BOOL bReadOnly=FALSE, LPCTSTR pstrConnect=NULL);
 CdbDatabase OpenDatabase (LPCTSTR pstrName, LONG lOption=0L, BOOL bReadOnly=FALSE, LPCTSTR pstrConnect=NULL);
 CdbConnection OpenConnection (LPCTSTR pstrName, LONG lOption=-1L, BOOL bReadOnly=FALSE, LPCTSTR pstrConnect=NULL);
 CdbDatabase CreateDatabase (LPCTSTR pstrName, LPCTSTR pstrConnect, LONG lOption=-1);
 CdbUser CreateUser (LPCTSTR pstrName=NULL, LPCTSTR pstrPID=NULL, LPCTSTR pstrPassword=NULL);
 CdbGroup CreateGroup (LPCTSTR pstrName=NULL, LPCTSTR pstrPID=NULL);
 CdbDatabases Databases;
 CdbConnections Connections;
 CdbUsers Users;
 CdbGroups Groups;
 };
class DLLEXPORT CdbDatabase : public CdbObject
 {
 public:
 CONSTRUCTOR CdbDatabase (VOID);
 CONSTRUCTOR CdbDatabase (DAODatabase *pdb, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbDatabase (const CdbDatabase &);
 CdbDatabase & operator = (const CdbDatabase &);
 inline CdbTableDef operator [] (LONG lIndex);
 inline CdbTableDef operator [] (LPCTSTR pstrIndex);
 VOID OnInterfaceChange (VOID);
 LONG GetCollatingOrder (VOID);
 CString GetConnect (VOID);
 VOID SetConnect (LPCTSTR pstrConnect);
 CString GetName (VOID);
 SHORT GetQueryTimeout (VOID);
 VOID SetQueryTimeout (SHORT s);
 BOOL GetTransactions (VOID);
 BOOL GetUpdatable (VOID);
 CString GetVersion (VOID);
 LONG GetRecordsAffected (VOID);
 CdbConnection GetConnection (VOID);
 CString GetReplicaID (VOID);
 CString GetDesignMasterID (VOID);
 VOID SetDesignMasterID (LPCTSTR pstrMasterID);
 VOID Close (VOID);
 VOID Execute (LPCTSTR pstrQuery, LONG lOption=-1);
 CdbRecordset OpenRecordset (LPCTSTR pstrName, LONG lType=-1, LONG lOptions=-1, LONG lLockEdit=-1);
 CdbProperty CreateProperty (LPCTSTR pstrName=NULL, LONG lType=-1, LPVARIANT pvValue=NULL, BOOL bDDL=FALSE);
 CdbRelation CreateRelation (LPCTSTR pstrName=NULL, LPCTSTR pstrTable=NULL, LPCTSTR pstrForiegn=NULL, LONG lAttributes=-1);
 CdbTableDef CreateTableDef (LPCTSTR pstrName=NULL, LONG lAttributes=-1, LPCTSTR pstrSource=NULL, LPCTSTR pstrConnect=NULL);
 CdbQueryDef CreateQueryDef (LPCTSTR pstrName=NULL, LPCTSTR pstrSQL=NULL);
 VOID NewPassword (LPCTSTR pstrOld, LPCTSTR pstrNew);
 VOID Synchronize (LPCTSTR pstrReplica, LONG lType=-1);
 VOID MakeReplica (LPCTSTR pstrPath, LPCTSTR pstrDescription, LONG lOptions=-1);
 VOID PopulatePartial (LPCTSTR pstrDbPathName);
 CdbTableDefs TableDefs;
 CdbQueryDefs QueryDefs;
 CdbRelations Relations;
 CdbContainers Containers;
 CdbRecordsets Recordsets;
 };
class DLLEXPORT CdbConnection : public CdbObject
 {
 public:
 CONSTRUCTOR CdbConnection (VOID);
 CONSTRUCTOR CdbConnection (DAOConnection *pconn, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbConnection (const CdbConnection &);
 CdbConnection & operator = (const CdbConnection &);
 inline CdbQueryDef operator [] (LONG lIndex);
 inline CdbQueryDef operator [] (LPCTSTR pstrIndex);
 VOID OnInterfaceChange (VOID);
 CString GetConnect (VOID);
 CString GetName (VOID);
 CdbDatabase GetDatabase (VOID);
 SHORT GetQueryTimeout (VOID);
 VOID SetQueryTimeout (SHORT s);
 LONG GetRecordsAffected (VOID);
 BOOL GetStillExecuting (VOID);
 BOOL GetTransactions (VOID);
 BOOL GetUpdatable (VOID);
 VOID Cancel (VOID);
 VOID Close (VOID);
 CdbQueryDef CreateQueryDef (LPCTSTR pstrName=NULL, LPCTSTR pstrSQL=NULL);
 VOID Execute (LPCTSTR pstrQuery, LONG lOption=-1);
 CdbRecordset OpenRecordset (LPCTSTR pstrName, LONG lType=-1, LONG lOptions=-1, LONG lLockEdit=-1);
 CdbQueryDefs QueryDefs;
 CdbRecordsets Recordsets;
 };
class DLLEXPORT CdbRecordset : public CdbObject
 {
 public:
 CONSTRUCTOR CdbRecordset (VOID);
 CONSTRUCTOR CdbRecordset (DAORecordset *prs, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbRecordset (const CdbRecordset &);
 CdbRecordset & operator = (const CdbRecordset &);
 inline CdbField operator [] (LONG lIndex);
 inline CdbField operator [] (LPCTSTR pstrIndex);
 VOID OnInterfaceChange (VOID);
 VOID SetGetRowsExInt (VOID);
 BOOL GetBOF (VOID);
 CdbBookmark GetBookmark (VOID);
 VOID SetBookmark (class CdbBookmark);
 BOOL GetBookmarkable (VOID);
 COleDateTime GetDateCreated (VOID);
 COleDateTime GetLastUpdated (VOID);
 BOOL GetEOF (VOID);
 CString GetFilter (VOID);
 VOID SetFilter (LPCTSTR pstr);
 CString GetIndex (VOID);
 VOID SetIndex (LPCTSTR pstr);
 CdbBookmark GetLastModified (VOID);
 BOOL GetLockEdits (VOID);
 VOID SetLockEdits (BOOL b);
 CString GetName (VOID);
 BOOL GetNoMatch (VOID);
 CString GetSort (VOID);
 VOID SetSort (LPCTSTR pstr);
 BOOL GetTransactions (VOID);
 SHORT GetType (VOID);
 LONG GetRecordCount (VOID);
 BOOL GetUpdatable (VOID);
 BOOL GetRestartable (VOID);
 CString GetValidationText (VOID);
 CString GetValidationRule (VOID);
 CdbBookmark GetCacheStart (VOID);
 VOID SetCacheStart (CdbBookmark &pbm);
 LONG GetCacheSize (VOID);
 VOID SetCacheSize (LONG l);
 FLOAT GetPercentPosition (VOID);
 VOID SetPercentPosition (FLOAT f);
 LONG GetAbsolutePosition (VOID);
 VOID SetAbsolutePosition (LONG l);
 SHORT GetEditMode (VOID);
 LONG GetUpdateOptions (VOID);
 VOID SetUpdateOptions (LONG l);
 SHORT GetRecordStatus (VOID);
 BOOL GetStillExecuting (VOID);
 LONG GetBatchSize (VOID);
 VOID SetBatchSize (LONG l);
 LONG GetBatchCollisionCount (VOID);
 COleVariant GetBatchCollisions (VOID);
 CdbConnection GetConnection (VOID);
 VOID CancelUpdate (short sType = dbUpdateRegular);
 VOID AddNew (VOID);
 VOID Close (VOID);
 CdbRecordset OpenRecordset (LONG lType=-1, LONG lOption=-1);
 VOID Delete (VOID);
 VOID Edit (VOID);
 VOID FindFirst (LPCTSTR pstrCriteria);
 VOID FindLast (LPCTSTR pstrCriteria);
 VOID FindNext (LPCTSTR pstrCriteria);
 VOID FindPrevious (LPCTSTR pstrCriteria);
 VOID MoveFirst (VOID);
 VOID MoveLast (LONG lOptions=-1);
 VOID MoveNext (VOID);
 VOID MovePrevious (VOID);
 VOID Seek (LPCTSTR pstrComparison, LONG lNumFields, COleVariant cKey, ...);
 VOID Update (short sType = dbUpdateRegular, VARIANT_BOOL bForce = FALSE);
 CdbRecordset Clone (VOID);
 VOID Requery (CdbQueryDef *pq = NULL);
 VOID Move (LONG lRows, CdbBookmark *bm=NULL);
 VOID FillCache (LONG lRows=-1, CdbBookmark *pbm=NULL);
 CdbQueryDef CopyQueryDef (VOID);
 COleVariant GetRows (LONG lRows=-1);
 LONG GetRowsEx (LPVOID pvBuffer, LONG cbRow, LPDAORSETBINDING prb, LONG cBinding, LPVOID pvVarBuffer = NULL, LONG cbVarBuffer = 0, LONG lRows = -1);
 VOID Cancel (VOID);
 BOOL NextRecordset (VOID);
 inline VOID GetFieldV (COleVariant &vIndex, COleVariant &vValue);
 inline VOID SetFieldV (COleVariant &vIndex, LPVARIANT pv);
 COleVariant GetField (LPCTSTR pstrIndex);
 COleVariant GetField (LONG lIndex);
 COleVariant GetField (COleVariant &vIndex);
 COleVariant GetField (CString &str){return GetField((LPCTSTR)str);}
 VOID SetField (LPCTSTR pstrIndex, LPVARIANT pv);
 VOID SetField (LONG lIndex, LPVARIANT pv);
 VOID SetField (COleVariant &vIndex, LPVARIANT pv);
 VOID SetField (CString &str, LPVARIANT pv){SetField((LPCTSTR)str, pv);}
 CdbFields Fields;
protected:
 CdbGetRowsEx m_GetRowsInt;
 };
class DLLEXPORT CdbField : public CdbObject
 {
 public:
 CONSTRUCTOR CdbField (VOID);
 CONSTRUCTOR CdbField (DAOField *pfld, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbField (const CdbField &);
 CdbField & operator = (const CdbField &);
 VOID OnInterfaceChange (VOID);
 LONG GetCollatingOrder (VOID);
 SHORT GetType (VOID);
 VOID SetType (SHORT s);
 CString GetName (VOID);
 VOID SetName (LPCTSTR pstr);
 LONG GetSize (VOID);
 VOID SetSize (LONG l);
 CString GetSourceField (VOID);
 CString GetSourceTable (VOID);
 COleVariant GetValue (VOID);
 VOID SetValue (LPVARIANT pv);
 LONG GetAttributes (VOID);
 VOID SetAttributes (LONG l);
 SHORT GetOrdinalPosition (VOID);
 VOID SetOrdinalPosition (SHORT s);
 CString GetValidationText (VOID);
 VOID SetValidationText (LPCTSTR pstr);
 BOOL GetValidateOnSet (VOID);
 VOID SetValidateOnSet (BOOL b);
 CString GetValidationRule (VOID);
 VOID SetValidationRule (LPCTSTR pstr);
 CString GetDefaultValue (VOID);
 VOID SetDefaultValue (LPCTSTR pstr);
 VOID SetDefaultValue (LPVARIANT pv);
 BOOL GetRequired (VOID);
 VOID SetRequired (BOOL b);
 BOOL GetAllowZeroLength (VOID);
 VOID SetAllowZeroLength (BOOL b);
 BOOL GetDataUpdatable (VOID);
 CString GetForeignName (VOID);
 VOID SetForeignName (LPCTSTR pstr);
 COleVariant GetOriginalValue (VOID);
 COleVariant GetVisibleValue (VOID);
 VOID AppendChunk (LPVARIANT pv);
 COleVariant GetChunk (LONG lOffset, LONG lBytes);
 LONG FieldSize (VOID);
 CdbProperty CreateProperty (LPCTSTR pstrName=NULL, LONG lType=-1, LPVARIANT pvValue=NULL, BOOL bDDL=FALSE);
 };
class DLLEXPORT CdbQueryDef : public CdbObject
 {
 public:
 CONSTRUCTOR CdbQueryDef (VOID);
 CONSTRUCTOR CdbQueryDef (DAOQueryDef *pqd, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbQueryDef (const CdbQueryDef &);
 CdbQueryDef & operator = (const CdbQueryDef &);
 inline CdbField operator [] (LONG lIndex);
 inline CdbField operator [] (LPCTSTR pstrIndex);
 VOID OnInterfaceChange (VOID);
 COleDateTime GetDateCreated (VOID);
 COleDateTime GetLastUpdated (VOID);
 CString GetName (VOID);
 VOID SetName (LPCTSTR pstr);
 SHORT GetODBCTimeout (VOID);
 VOID SetODBCTimeout (SHORT s);
 SHORT GetType (VOID);
 CString GetSQL (VOID);
 VOID SetSQL (LPCTSTR pstr);
 BOOL GetUpdatable (VOID);
 CString GetConnect (VOID);
 VOID SetConnect (LPCTSTR pstr);
 BOOL GetReturnsRecords (VOID);
 VOID SetReturnsRecords (BOOL b);
 LONG GetRecordsAffected (VOID);
 LONG GetMaxRecords (VOID);
 VOID SetMaxRecords (LONG l);
 BOOL GetStillExecuting (VOID);
 LONG GetCacheSize (VOID);
 VOID SetCacheSize (LONG l);
 COleVariant GetPrepare (VOID);
 VOID SetPrepare (LPVARIANT pv);
 CdbRecordset OpenRecordset (LONG lType=-1, LONG lOption=-1, LONG lLockEdit=-1);
 VOID Execute (LONG lOption=-1);
 CdbProperty CreateProperty (LPCTSTR pstrName=NULL, LONG lType=-1, LPVARIANT pvValue=NULL, BOOL bDDL=FALSE);
 VOID Close (VOID);
 VOID Cancel (VOID);
 CdbFields Fields;
 CdbParameters Parameters;
 };
class DLLEXPORT CdbTableDef : public CdbObject
 {
 public:
 CONSTRUCTOR CdbTableDef (VOID);
 CONSTRUCTOR CdbTableDef (DAOTableDef *ptd, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbTableDef (const CdbTableDef &);
 CdbTableDef & operator = (const CdbTableDef &);
 inline CdbField operator [] (LONG lIndex);
 inline CdbField operator [] (LPCTSTR pstrIndex);
 VOID OnInterfaceChange (VOID);
 LONG GetAttributes (VOID);
 VOID SetAttributes (LONG l);
 CString GetConnect (VOID);
 VOID SetConnect (LPCTSTR pstr);
 COleDateTime GetDateCreated (VOID);
 COleDateTime GetLastUpdated (VOID);
 CString GetName (VOID);
 VOID SetName (LPCTSTR pstr);
 CString GetSourceTableName (VOID);
 VOID SetSourceTableName (LPCTSTR pstr);
 BOOL GetUpdatable (VOID);
 CString GetValidationText (VOID);
 VOID SetValidationText (LPCTSTR pstr);
 CString GetValidationRule (VOID);
 VOID SetValidationRule (LPCTSTR pstr);
 LONG GetRecordCount (VOID);
 CString GetConflictTable (VOID);
 COleVariant GetReplicaFilter (VOID);
 VOID SetReplicaFilter (LPVARIANT pv);
 CdbRecordset OpenRecordset (LONG lType=-1, LONG lOption=-1);
 VOID RefreshLink (VOID);
 CdbField CreateField (LPCTSTR pstrName=NULL, LONG lType=-1, LONG lSize=-1);
 CdbIndex CreateIndex (LPCTSTR pstrName=NULL);
 CdbProperty CreateProperty (LPCTSTR pstrName=NULL, LONG lType=-1, LPVARIANT pvValue=NULL, BOOL bDDL=FALSE);
 CdbFields Fields;
 CdbIndexes Indexes;
 };
class DLLEXPORT CdbIndex : public CdbObject
 {
 public:
 CONSTRUCTOR CdbIndex (VOID);
 CONSTRUCTOR CdbIndex (DAOIndex *pidx, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbIndex (const CdbIndex &);
 CdbIndex & operator = (const CdbIndex &);
 inline CdbField operator [] (LONG lIndex);
 inline CdbField operator [] (LPCTSTR pstrIndex);
 VOID OnInterfaceChange (VOID);
 CString GetName (VOID);
 VOID SetName (LPCTSTR pstr);
 BOOL GetForeign (VOID);
 BOOL GetUnique (VOID);
 VOID SetUnique (BOOL b);
 BOOL GetClustered (VOID);
 VOID SetClustered (BOOL b);
 BOOL GetRequired (VOID);
 VOID SetRequired (BOOL b);
 BOOL GetIgnoreNulls (VOID);
 VOID SetIgnoreNulls (BOOL b);
 BOOL GetPrimary (VOID);
 VOID SetPrimary (BOOL b);
 LONG GetDistinctCount (VOID);
 CdbField CreateField (LPCTSTR pstrName=NULL, LONG lType=-1, LONG lSize=-1);
 CdbProperty CreateProperty (LPCTSTR pstrName=NULL, LONG lType=-1, LPVARIANT pvValue=NULL, BOOL bDDL=FALSE);
 CdbIndexFields Fields;
 };
class DLLEXPORT CdbParameter : public CdbObject
 {
 public:
 CONSTRUCTOR CdbParameter (VOID);
 CONSTRUCTOR CdbParameter (DAOParameter *pprm, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbParameter (const CdbParameter &);
 CdbParameter & operator = (const CdbParameter &);
 VOID OnInterfaceChange (VOID);
 CString GetName (VOID);
 COleVariant GetValue (VOID);
 VOID SetValue (LPVARIANT pv);
 SHORT GetType (VOID);
 VOID SetType (SHORT i);
 SHORT GetDirection (VOID);
 VOID SetDirection (SHORT i);
 };
class DLLEXPORT CdbRelation : public CdbObject
 {
 public:
 CONSTRUCTOR CdbRelation (VOID);
 CONSTRUCTOR CdbRelation (DAORelation *prl, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbRelation (const CdbRelation &);
 CdbRelation & operator = (const CdbRelation &);
 inline CdbField operator [] (LONG lIndex);
 inline CdbField operator [] (LPCTSTR pstrIndex);
 VOID OnInterfaceChange (VOID);
 CString GetName (VOID);
 VOID SetName (LPCTSTR pstr);
 CString GetTable (VOID);
 VOID SetTable (LPCTSTR pstr);
 CString GetForeignTable (VOID);
 VOID SetForeignTable (LPCTSTR pstr);
 LONG GetAttributes (VOID);
 VOID SetAttributes (LONG);
 BOOL GetPartialReplica (VOID);
 VOID SetPartialReplica (BOOL b);
 CdbField CreateField (LPCTSTR pstrName=NULL, LONG lType=-1, LONG lSize=-1);
 CdbFields Fields;
 };
class DLLEXPORT CdbUser : public CdbObject
 {
 public:
 CONSTRUCTOR CdbUser (VOID);
 CONSTRUCTOR CdbUser (DAOUser *pusr, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbUser (const CdbUser &);
 CdbUser & operator = (const CdbUser &);
 inline CdbGroup operator [] (LONG lIndex);
 inline CdbGroup operator [] (LPCTSTR pstrIndex);
 VOID OnInterfaceChange (VOID);
 CString GetName (VOID);
 VOID SetName (LPCTSTR pstr);
 VOID SetPID (LPCTSTR pstr);
 VOID SetPassword (LPCTSTR pstr);
 VOID NewPassword (LPCTSTR pstrOld, LPCTSTR pstrNew);
 CdbGroup CreateGroup (LPCTSTR pstrName=NULL, LPCTSTR pstrPID=NULL);
 CdbGroups Groups;
 };
class DLLEXPORT CdbGroup : public CdbObject
 {
 public:
 CONSTRUCTOR CdbGroup (VOID);
 CONSTRUCTOR CdbGroup (DAOGroup *pgrp, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbGroup (const CdbGroup &);
 CdbGroup & operator = (const CdbGroup &);
 inline CdbUser operator [] (LONG lIndex);
 inline CdbUser operator [] (LPCTSTR pstrIndex);
 VOID OnInterfaceChange (VOID);
 CString GetName (VOID);
 VOID SetName (LPCTSTR pstr);
 VOID SetPID (LPCTSTR pstr);
 CdbUser CreateUser (LPCTSTR pstrName=NULL, LPCTSTR pstrPID=NULL, LPCTSTR pstrPassword=NULL);
 CdbUsers Users;
 };
class DLLEXPORT CdbDocument : public CdbObject
 {
 public:
 CONSTRUCTOR CdbDocument (VOID);
 CONSTRUCTOR CdbDocument (DAODocument *pdoc, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbDocument (const CdbDocument &);
 CdbDocument & operator = (const CdbDocument &);
 VOID OnInterfaceChange (VOID);
 CString GetName (VOID);
 CString GetOwner (VOID);
 VOID SetOwner (LPCTSTR pstr);
 CString GetContainer (VOID);
 CString GetUserName (VOID);
 VOID SetUserName (LPCTSTR pstr);
 LONG GetPermissions (VOID);
 VOID SetPermissions (LONG l);
 COleDateTime GetDateCreated (VOID);
 COleDateTime GetLastUpdated (VOID);
 LONG GetAllPermissions (VOID);
 CdbProperty CreateProperty (LPCTSTR pstrName=NULL, LONG lType=-1, LPVARIANT pvValue=NULL, BOOL bDDL=FALSE);
 };
class DLLEXPORT CdbContainer : public CdbObject
 {
 public:
 CONSTRUCTOR CdbContainer (VOID);
 CONSTRUCTOR CdbContainer (DAOContainer *pctn, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbContainer (const CdbContainer &);
 CdbContainer & operator = (const CdbContainer &);
 inline CdbDocument operator [] (LONG lIndex);
 inline CdbDocument operator [] (LPCTSTR pstrIndex);
 VOID OnInterfaceChange (VOID);
 CString GetName (VOID);
 CString GetOwner (VOID);
 VOID SetOwner (LPCTSTR pstr);
 CString GetUserName (VOID);
 VOID SetUserName (LPCTSTR pstr);
 LONG GetPermissions (VOID);
 VOID SetPermissions (LONG l);
 BOOL GetInherit (VOID);
 VOID SetInherit (BOOL b);
 LONG GetAllPermissions (VOID);
 CdbDocuments Documents;
 };
class DLLEXPORT CdbError : public CdbObject
 {
 public:
 CONSTRUCTOR CdbError (VOID);
 CONSTRUCTOR CdbError (DAOError *perr, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbError (const CdbError &);
 CdbError & operator = (const CdbError &);
 VOID OnInterfaceChange (VOID);
 LONG GetNumber (VOID);
 CString GetSource (VOID);
 CString GetDescription (VOID);
 CString GetHelpFile (VOID);
 LONG GetHelpContext (VOID);
 };
class DLLEXPORT CdbProperty : public CdbObject
 {
 public:
 CONSTRUCTOR CdbProperty (VOID);
 CONSTRUCTOR CdbProperty (DAOProperty *pprp, BOOL bAddRef=FALSE);
 CONSTRUCTOR CdbProperty (const CdbProperty &);
 CdbProperty & operator = (const CdbProperty &);
 COleVariant GetValue (VOID);
 VOID SetValue (LPVARIANT pv);
 CString GetName (VOID);
 VOID SetName (LPCTSTR pstrName);
 SHORT GetType (VOID);
 VOID SetType (SHORT sType);
 BOOL GetInherited (VOID);
 };
inline BOOL CdbOleObject::Exists(void)
 {
 return (m_punkInterface ? TRUE : FALSE);
 }
inline VOID CdbRecordset::GetFieldV(
 COleVariant &vIndex,
 COleVariant &vValue)
{
 DAORecordset * prs = (DAORecordset *)GetInterface();
 if (!prs)
  {
  DAOVINIT(vValue);
  return;
  }
 DAOMFC_CALL(prs->get_Collect(vIndex, &vValue));
 return;
}
inline VOID CdbRecordset::SetFieldV(
 COleVariant &vIndex,
 LPVARIANT pv)
{
 DAORecordset * prs = (DAORecordset *)GetInterface();
 if (!prs)
  return;
 DAOMFC_CALL(prs->put_Collect(vIndex, *pv));
}
inline CdbWorkspace CdbDBEngine::operator []
 (LONG lIndex)
{
return Workspaces[lIndex];
}
inline CdbWorkspace CdbDBEngine::operator []
 (LPCTSTR pstrIndex)
{
return Workspaces[pstrIndex];
}
inline CdbDatabase CdbWorkspace::operator []
 (LONG lIndex)
{
return Databases[lIndex];
}
inline CdbDatabase CdbWorkspace::operator []
 (LPCTSTR pstrIndex)
{
return Databases[pstrIndex];
}
inline CdbTableDef CdbDatabase::operator []
 (LONG lIndex)
{
return TableDefs[lIndex];
}
inline CdbTableDef CdbDatabase::operator []
 (LPCTSTR pstrIndex)
{
return TableDefs[pstrIndex];
}
inline CdbQueryDef CdbConnection::operator []
 (LONG lIndex)
{
return QueryDefs[lIndex];
}
inline CdbQueryDef CdbConnection::operator []
 (LPCTSTR pstrIndex)
{
return QueryDefs[pstrIndex];
}
inline CdbField CdbRecordset::operator []
 (LONG lIndex)
{
return Fields[lIndex];
}
inline CdbField CdbRecordset::operator []
 (LPCTSTR pstrIndex)
{
return Fields[pstrIndex];
}
inline CdbField CdbTableDef::operator []
 (LONG lIndex)
{
return Fields[lIndex];
}
inline CdbField CdbTableDef::operator []
 (LPCTSTR pstrIndex)
{
return Fields[pstrIndex];
}
inline CdbField CdbQueryDef::operator []
 (LONG lIndex)
{
return Fields[lIndex];
}
inline CdbField CdbQueryDef::operator []
 (LPCTSTR pstrIndex)
{
return Fields[pstrIndex];
}
inline CdbField CdbIndex::operator []
 (LONG lIndex)
{
return Fields[lIndex];
}
inline CdbField CdbIndex::operator []
 (LPCTSTR pstrIndex)
{
return Fields[pstrIndex];
}
inline CdbField CdbRelation::operator []
 (LONG lIndex)
{
return Fields[lIndex];
}
inline CdbField CdbRelation::operator []
 (LPCTSTR pstrIndex)
{
return Fields[pstrIndex];
}
inline CdbGroup CdbUser::operator []
 (LONG lIndex)
{
return Groups[lIndex];
}
inline CdbGroup CdbUser::operator []
 (LPCTSTR pstrIndex)
{
return Groups[pstrIndex];
}
inline CdbUser CdbGroup::operator []
 (LONG lIndex)
{
return Users[lIndex];
}
inline CdbUser CdbGroup::operator []
 (LPCTSTR pstrIndex)
{
return Users[pstrIndex];
}
inline CdbDocument CdbContainer::operator []
 (LONG lIndex)
{
return Documents[lIndex];
}
inline CdbDocument CdbContainer::operator []
 (LPCTSTR pstrIndex)
{
return Documents[pstrIndex];
}
#endif
#pragma endregion
