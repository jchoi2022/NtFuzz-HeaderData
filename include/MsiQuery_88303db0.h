#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "msi.h"
typedef enum tagMSIDBSTATE
{
 MSIDBSTATE_ERROR =-1,
 MSIDBSTATE_READ = 0,
 MSIDBSTATE_WRITE = 1,
} MSIDBSTATE;
typedef enum tagMSIMODIFY
{
 MSIMODIFY_SEEK =-1,
 MSIMODIFY_REFRESH = 0,
 MSIMODIFY_INSERT = 1,
 MSIMODIFY_UPDATE = 2,
 MSIMODIFY_ASSIGN = 3,
 MSIMODIFY_REPLACE = 4,
 MSIMODIFY_MERGE = 5,
 MSIMODIFY_DELETE = 6,
 MSIMODIFY_INSERT_TEMPORARY = 7,
 MSIMODIFY_VALIDATE = 8,
 MSIMODIFY_VALIDATE_NEW = 9,
 MSIMODIFY_VALIDATE_FIELD = 10,
 MSIMODIFY_VALIDATE_DELETE = 11,
} MSIMODIFY;
typedef enum tagMSICOLINFO
{
 MSICOLINFO_NAMES = 0,
 MSICOLINFO_TYPES = 1,
} MSICOLINFO;
typedef enum tagMSICONDITION
{
 MSICONDITION_FALSE = 0,
 MSICONDITION_TRUE = 1,
 MSICONDITION_NONE = 2,
 MSICONDITION_ERROR = 3,
} MSICONDITION;
typedef enum tagMSICOSTTREE
{
 MSICOSTTREE_SELFONLY = 0,
 MSICOSTTREE_CHILDREN = 1,
 MSICOSTTREE_PARENTS = 2,
 MSICOSTTREE_RESERVED = 3,
} MSICOSTTREE;
typedef enum tagMSIDBERROR
{
 MSIDBERROR_INVALIDARG = -3,
 MSIDBERROR_MOREDATA = -2,
 MSIDBERROR_FUNCTIONERROR = -1,
 MSIDBERROR_NOERROR = 0,
 MSIDBERROR_DUPLICATEKEY = 1,
 MSIDBERROR_REQUIRED = 2,
 MSIDBERROR_BADLINK = 3,
 MSIDBERROR_OVERFLOW = 4,
 MSIDBERROR_UNDERFLOW = 5,
 MSIDBERROR_NOTINSET = 6,
 MSIDBERROR_BADVERSION = 7,
 MSIDBERROR_BADCASE = 8,
 MSIDBERROR_BADGUID = 9,
 MSIDBERROR_BADWILDCARD = 10,
 MSIDBERROR_BADIDENTIFIER = 11,
 MSIDBERROR_BADLANGUAGE = 12,
 MSIDBERROR_BADFILENAME = 13,
 MSIDBERROR_BADPATH = 14,
 MSIDBERROR_BADCONDITION = 15,
 MSIDBERROR_BADFORMATTED = 16,
 MSIDBERROR_BADTEMPLATE = 17,
 MSIDBERROR_BADDEFAULTDIR = 18,
 MSIDBERROR_BADREGPATH = 19,
 MSIDBERROR_BADCUSTOMSOURCE = 20,
 MSIDBERROR_BADPROPERTY = 21,
 MSIDBERROR_MISSINGDATA = 22,
 MSIDBERROR_BADCATEGORY = 23,
 MSIDBERROR_BADKEYTABLE = 24,
 MSIDBERROR_BADMAXMINVALUES = 25,
 MSIDBERROR_BADCABINET = 26,
 MSIDBERROR_BADSHORTCUT = 27,
 MSIDBERROR_STRINGOVERFLOW = 28,
 MSIDBERROR_BADLOCALIZEATTRIB = 29
} MSIDBERROR;
typedef enum tagMSIRUNMODE
{
 MSIRUNMODE_ADMIN = 0,
 MSIRUNMODE_ADVERTISE = 1,
 MSIRUNMODE_MAINTENANCE = 2,
 MSIRUNMODE_ROLLBACKENABLED = 3,
 MSIRUNMODE_LOGENABLED = 4,
 MSIRUNMODE_OPERATIONS = 5,
 MSIRUNMODE_REBOOTATEND = 6,
 MSIRUNMODE_REBOOTNOW = 7,
 MSIRUNMODE_CABINET = 8,
 MSIRUNMODE_SOURCESHORTNAMES= 9,
 MSIRUNMODE_TARGETSHORTNAMES= 10,
 MSIRUNMODE_RESERVED11 = 11,
 MSIRUNMODE_WINDOWS9X = 12,
 MSIRUNMODE_ZAWENABLED = 13,
 MSIRUNMODE_RESERVED14 = 14,
 MSIRUNMODE_RESERVED15 = 15,
 MSIRUNMODE_SCHEDULED = 16,
 MSIRUNMODE_ROLLBACK = 17,
 MSIRUNMODE_COMMIT = 18,
} MSIRUNMODE;
typedef enum tagMSITRANSFORM_ERROR
{
 MSITRANSFORM_ERROR_ADDEXISTINGROW = 0x00000001,
 MSITRANSFORM_ERROR_DELMISSINGROW = 0x00000002,
 MSITRANSFORM_ERROR_ADDEXISTINGTABLE = 0x00000004,
 MSITRANSFORM_ERROR_DELMISSINGTABLE = 0x00000008,
 MSITRANSFORM_ERROR_UPDATEMISSINGROW = 0x00000010,
 MSITRANSFORM_ERROR_CHANGECODEPAGE = 0x00000020,
 MSITRANSFORM_ERROR_VIEWTRANSFORM = 0x00000100,
} MSITRANSFORM_ERROR;
typedef enum tagMSITRANSFORM_VALIDATE
{
 MSITRANSFORM_VALIDATE_LANGUAGE = 0x00000001,
 MSITRANSFORM_VALIDATE_PRODUCT = 0x00000002,
 MSITRANSFORM_VALIDATE_PLATFORM = 0x00000004,
 MSITRANSFORM_VALIDATE_MAJORVERSION = 0x00000008,
 MSITRANSFORM_VALIDATE_MINORVERSION = 0x00000010,
 MSITRANSFORM_VALIDATE_UPDATEVERSION = 0x00000020,
 MSITRANSFORM_VALIDATE_NEWLESSBASEVERSION = 0x00000040,
 MSITRANSFORM_VALIDATE_NEWLESSEQUALBASEVERSION = 0x00000080,
 MSITRANSFORM_VALIDATE_NEWEQUALBASEVERSION = 0x00000100,
 MSITRANSFORM_VALIDATE_NEWGREATEREQUALBASEVERSION = 0x00000200,
 MSITRANSFORM_VALIDATE_NEWGREATERBASEVERSION = 0x00000400,
 MSITRANSFORM_VALIDATE_UPGRADECODE = 0x00000800,
} MSITRANSFORM_VALIDATE;
extern "C" {
UINT WINAPI MsiDatabaseOpenViewA(MSIHANDLE hDatabase,
 LPCSTR szQuery,
 MSIHANDLE* phView);
UINT WINAPI MsiDatabaseOpenViewW(MSIHANDLE hDatabase,
 LPCWSTR szQuery,
 MSIHANDLE* phView);
MSIDBERROR WINAPI MsiViewGetErrorA(MSIHANDLE hView,
 _Out_writes_opt_(*pcchBuf) LPSTR szColumnNameBuffer,
 _Inout_opt_ LPDWORD pcchBuf);
MSIDBERROR WINAPI MsiViewGetErrorW(MSIHANDLE hView,
 _Out_writes_opt_(*pcchBuf) LPWSTR szColumnNameBuffer,
 _Inout_opt_ LPDWORD pcchBuf);
UINT WINAPI MsiViewExecute(MSIHANDLE hView,
 MSIHANDLE hRecord);
UINT WINAPI MsiViewFetch(MSIHANDLE hView,
 MSIHANDLE *phRecord);
UINT WINAPI MsiViewModify(MSIHANDLE hView,
 MSIMODIFY eModifyMode,
 MSIHANDLE hRecord);
UINT WINAPI MsiViewGetColumnInfo(MSIHANDLE hView,
 MSICOLINFO eColumnInfo,
 MSIHANDLE *phRecord);
UINT WINAPI MsiViewClose(MSIHANDLE hView);
UINT WINAPI MsiDatabaseGetPrimaryKeysA(MSIHANDLE hDatabase,
 LPCSTR szTableName,
 MSIHANDLE *phRecord);
UINT WINAPI MsiDatabaseGetPrimaryKeysW(MSIHANDLE hDatabase,
 LPCWSTR szTableName,
 MSIHANDLE *phRecord);
MSICONDITION WINAPI MsiDatabaseIsTablePersistentA(MSIHANDLE hDatabase,
 LPCSTR szTableName);
MSICONDITION WINAPI MsiDatabaseIsTablePersistentW(MSIHANDLE hDatabase,
 LPCWSTR szTableName);
UINT WINAPI MsiGetSummaryInformationA(MSIHANDLE hDatabase,
 LPCSTR szDatabasePath,
 UINT uiUpdateCount,
 MSIHANDLE *phSummaryInfo);
UINT WINAPI MsiGetSummaryInformationW(MSIHANDLE hDatabase,
 LPCWSTR szDatabasePath,
 UINT uiUpdateCount,
 MSIHANDLE *phSummaryInfo);
UINT WINAPI MsiSummaryInfoGetPropertyCount(MSIHANDLE hSummaryInfo,
 PUINT puiPropertyCount);
UINT WINAPI MsiSummaryInfoSetPropertyA(MSIHANDLE hSummaryInfo,
 UINT uiProperty,
 UINT uiDataType,
 INT iValue,
 FILETIME *pftValue,
 LPCSTR szValue);
UINT WINAPI MsiSummaryInfoSetPropertyW(MSIHANDLE hSummaryInfo,
 UINT uiProperty,
 UINT uiDataType,
 INT iValue,
 FILETIME *pftValue,
 LPCWSTR szValue);
UINT WINAPI MsiSummaryInfoGetPropertyA(MSIHANDLE hSummaryInfo,
 UINT uiProperty,
 _Out_ PUINT puiDataType,
 _Out_ LPINT piValue,
 _Out_opt_ FILETIME *pftValue,
 _Out_writes_opt_(*pcchValueBuf) LPSTR szValueBuf,
 _Inout_opt_ LPDWORD pcchValueBuf);
UINT WINAPI MsiSummaryInfoGetPropertyW(MSIHANDLE hSummaryInfo,
 UINT uiProperty,
 _Out_ PUINT puiDataType,
 _Out_ LPINT piValue,
 _Out_opt_ FILETIME *pftValue,
 _Out_writes_opt_(*pcchValueBuf) LPWSTR szValueBuf,
 _Inout_opt_ LPDWORD pcchValueBuf);
UINT WINAPI MsiSummaryInfoPersist(MSIHANDLE hSummaryInfo);
UINT WINAPI MsiOpenDatabaseA(
 LPCSTR szDatabasePath,
 LPCSTR szPersist,
 MSIHANDLE* phDatabase);
UINT WINAPI MsiOpenDatabaseW(
 LPCWSTR szDatabasePath,
 LPCWSTR szPersist,
 MSIHANDLE* phDatabase);
UINT WINAPI MsiDatabaseImportA(MSIHANDLE hDatabase,
 LPCSTR szFolderPath,
 LPCSTR szFileName);
UINT WINAPI MsiDatabaseImportW(MSIHANDLE hDatabase,
 LPCWSTR szFolderPath,
 LPCWSTR szFileName);
UINT WINAPI MsiDatabaseExportA(MSIHANDLE hDatabase,
 LPCSTR szTableName,
 LPCSTR szFolderPath,
 LPCSTR szFileName);
UINT WINAPI MsiDatabaseExportW(MSIHANDLE hDatabase,
 LPCWSTR szTableName,
 LPCWSTR szFolderPath,
 LPCWSTR szFileName);
UINT WINAPI MsiDatabaseMergeA(MSIHANDLE hDatabase,
 MSIHANDLE hDatabaseMerge,
 LPCSTR szTableName);
UINT WINAPI MsiDatabaseMergeW(MSIHANDLE hDatabase,
 MSIHANDLE hDatabaseMerge,
 LPCWSTR szTableName);
UINT WINAPI MsiDatabaseGenerateTransformA(MSIHANDLE hDatabase,
 MSIHANDLE hDatabaseReference,
 LPCSTR szTransformFile,
 int iReserved1,
 int iReserved2);
UINT WINAPI MsiDatabaseGenerateTransformW(MSIHANDLE hDatabase,
 MSIHANDLE hDatabaseReference,
 LPCWSTR szTransformFile,
 int iReserved1,
 int iReserved2);
UINT WINAPI MsiDatabaseApplyTransformA(MSIHANDLE hDatabase,
 LPCSTR szTransformFile,
 int iErrorConditions);
UINT WINAPI MsiDatabaseApplyTransformW(MSIHANDLE hDatabase,
 LPCWSTR szTransformFile,
 int iErrorConditions);
UINT WINAPI MsiCreateTransformSummaryInfoA(MSIHANDLE hDatabase,
 MSIHANDLE hDatabaseReference,
 LPCSTR szTransformFile,
 int iErrorConditions,
 int iValidation);
UINT WINAPI MsiCreateTransformSummaryInfoW(MSIHANDLE hDatabase,
 MSIHANDLE hDatabaseReference,
 LPCWSTR szTransformFile,
 int iErrorConditions,
 int iValidation);
UINT WINAPI MsiDatabaseCommit(MSIHANDLE hDatabase);
MSIDBSTATE WINAPI MsiGetDatabaseState(MSIHANDLE hDatabase);
MSIHANDLE WINAPI MsiCreateRecord(
 UINT cParams);
BOOL WINAPI MsiRecordIsNull(MSIHANDLE hRecord,
 UINT iField);
UINT WINAPI MsiRecordDataSize(MSIHANDLE hRecord,
 UINT iField);
UINT WINAPI MsiRecordSetInteger(MSIHANDLE hRecord,
 UINT iField,
 int iValue);
UINT WINAPI MsiRecordSetStringA(MSIHANDLE hRecord,
 UINT iField,
 LPCSTR szValue);
UINT WINAPI MsiRecordSetStringW(MSIHANDLE hRecord,
 UINT iField,
 LPCWSTR szValue);
int WINAPI MsiRecordGetInteger(MSIHANDLE hRecord,
 UINT iField);
UINT WINAPI MsiRecordGetStringA(MSIHANDLE hRecord,
                                 UINT iField,
 _Out_writes_opt_(*pcchValueBuf) LPSTR szValueBuf,
 _Inout_opt_ LPDWORD pcchValueBuf);
UINT WINAPI MsiRecordGetStringW(MSIHANDLE hRecord,
                                 UINT iField,
 _Out_writes_opt_(*pcchValueBuf) LPWSTR szValueBuf,
 _Inout_opt_ LPDWORD pcchValueBuf);
UINT WINAPI MsiRecordGetFieldCount(MSIHANDLE hRecord);
UINT WINAPI MsiRecordSetStreamA(MSIHANDLE hRecord,
 UINT iField,
 LPCSTR szFilePath);
UINT WINAPI MsiRecordSetStreamW(MSIHANDLE hRecord,
 UINT iField,
 LPCWSTR szFilePath);
UINT WINAPI MsiRecordReadStream(MSIHANDLE hRecord,
                                UINT iField,
 _Out_writes_bytes_opt_(*pcbDataBuf) char *szDataBuf,
 _Inout_ LPDWORD pcbDataBuf);
UINT WINAPI MsiRecordClearData(MSIHANDLE hRecord);
MSIHANDLE WINAPI MsiGetActiveDatabase(MSIHANDLE hInstall);
UINT WINAPI MsiSetPropertyA(MSIHANDLE hInstall,
 LPCSTR szName,
 LPCSTR szValue);
UINT WINAPI MsiSetPropertyW(MSIHANDLE hInstall,
 LPCWSTR szName,
 LPCWSTR szValue);
UINT WINAPI MsiGetPropertyA(MSIHANDLE hInstall,
                                  LPCSTR szName,
 _Out_writes_opt_(*pcchValueBuf) LPSTR szValueBuf,
 _Inout_opt_ LPDWORD pcchValueBuf);
UINT WINAPI MsiGetPropertyW(MSIHANDLE hInstall,
                                  LPCWSTR szName,
 _Out_writes_opt_(*pcchValueBuf) LPWSTR szValueBuf,
 _Inout_opt_ LPDWORD pcchValueBuf);
LANGID WINAPI MsiGetLanguage(MSIHANDLE hInstall);
BOOL WINAPI MsiGetMode(MSIHANDLE hInstall,
 MSIRUNMODE eRunMode);
UINT WINAPI MsiSetMode(MSIHANDLE hInstall,
 MSIRUNMODE eRunMode,
 BOOL fState);
UINT WINAPI MsiFormatRecordA(MSIHANDLE hInstall,
                                   MSIHANDLE hRecord,
 _Out_writes_opt_(*pcchResultBuf) LPSTR szResultBuf,
 _Inout_opt_ LPDWORD pcchResultBuf);
UINT WINAPI MsiFormatRecordW(MSIHANDLE hInstall,
                                   MSIHANDLE hRecord,
 _Out_writes_opt_(*pcchResultBuf) LPWSTR szResultBuf,
 _Inout_opt_ LPDWORD pcchResultBuf);
UINT WINAPI MsiDoActionA(MSIHANDLE hInstall,
 LPCSTR szAction);
UINT WINAPI MsiDoActionW(MSIHANDLE hInstall,
 LPCWSTR szAction);
UINT WINAPI MsiSequenceA(MSIHANDLE hInstall,
 LPCSTR szTable,
 INT iSequenceMode);
UINT WINAPI MsiSequenceW(MSIHANDLE hInstall,
 LPCWSTR szTable,
 INT iSequenceMode);
int WINAPI MsiProcessMessage(MSIHANDLE hInstall,
 INSTALLMESSAGE eMessageType,
 MSIHANDLE hRecord);
MSICONDITION WINAPI MsiEvaluateConditionA(MSIHANDLE hInstall,
 LPCSTR szCondition);
MSICONDITION WINAPI MsiEvaluateConditionW(MSIHANDLE hInstall,
 LPCWSTR szCondition);
UINT WINAPI MsiGetFeatureStateA(MSIHANDLE hInstall,
 LPCSTR szFeature,
 INSTALLSTATE *piInstalled,
 INSTALLSTATE *piAction);
UINT WINAPI MsiGetFeatureStateW(MSIHANDLE hInstall,
 LPCWSTR szFeature,
 INSTALLSTATE *piInstalled,
 INSTALLSTATE *piAction);
UINT WINAPI MsiSetFeatureStateA(MSIHANDLE hInstall,
 LPCSTR szFeature,
 INSTALLSTATE iState);
UINT WINAPI MsiSetFeatureStateW(MSIHANDLE hInstall,
 LPCWSTR szFeature,
 INSTALLSTATE iState);
UINT WINAPI MsiGetComponentStateA(MSIHANDLE hInstall,
 LPCSTR szComponent,
 INSTALLSTATE *piInstalled,
 INSTALLSTATE *piAction);
UINT WINAPI MsiGetComponentStateW(MSIHANDLE hInstall,
 LPCWSTR szComponent,
 INSTALLSTATE *piInstalled,
 INSTALLSTATE *piAction);
UINT WINAPI MsiSetComponentStateA(MSIHANDLE hInstall,
 LPCSTR szComponent,
 INSTALLSTATE iState);
UINT WINAPI MsiSetComponentStateW(MSIHANDLE hInstall,
 LPCWSTR szComponent,
 INSTALLSTATE iState);
UINT WINAPI MsiGetFeatureCostA(MSIHANDLE hInstall,
 LPCSTR szFeature,
 MSICOSTTREE iCostTree,
 INSTALLSTATE iState,
 LPINT piCost);
UINT WINAPI MsiGetFeatureCostW(MSIHANDLE hInstall,
 LPCWSTR szFeature,
 MSICOSTTREE iCostTree,
 INSTALLSTATE iState,
 LPINT piCost);
UINT WINAPI MsiSetInstallLevel(MSIHANDLE hInstall,
 int iInstallLevel);
UINT WINAPI MsiGetFeatureValidStatesA(MSIHANDLE hInstall,
 LPCSTR szFeature,
 LPDWORD lpInstallStates);
UINT WINAPI MsiGetFeatureValidStatesW(MSIHANDLE hInstall,
 LPCWSTR szFeature,
 LPDWORD lpInstallStates);
UINT WINAPI MsiGetSourcePathA(MSIHANDLE hInstall,
                                 LPCSTR szFolder,
 _Out_writes_opt_(*pcchPathBuf) LPSTR szPathBuf,
 _Inout_opt_ LPDWORD pcchPathBuf);
UINT WINAPI MsiGetSourcePathW(MSIHANDLE hInstall,
                                 LPCWSTR szFolder,
 _Out_writes_opt_(*pcchPathBuf) LPWSTR szPathBuf,
 _Inout_opt_ LPDWORD pcchPathBuf);
UINT WINAPI MsiGetTargetPathA(MSIHANDLE hInstall,
                                 LPCSTR szFolder,
 _Out_writes_opt_(*pcchPathBuf) LPSTR szPathBuf,
 _Inout_opt_ LPDWORD pcchPathBuf);
UINT WINAPI MsiGetTargetPathW(MSIHANDLE hInstall,
                                 LPCWSTR szFolder,
 _Out_writes_opt_(*pcchPathBuf) LPWSTR szPathBuf,
 _Inout_opt_ LPDWORD pcchPathBuf);
UINT WINAPI MsiSetTargetPathA(MSIHANDLE hInstall,
 LPCSTR szFolder,
 LPCSTR szFolderPath);
UINT WINAPI MsiSetTargetPathW(MSIHANDLE hInstall,
 LPCWSTR szFolder,
 LPCWSTR szFolderPath);
UINT WINAPI MsiVerifyDiskSpace(MSIHANDLE hInstall);
UINT WINAPI MsiEnableUIPreview(MSIHANDLE hDatabase,
 MSIHANDLE* phPreview);
UINT WINAPI MsiPreviewDialogA(MSIHANDLE hPreview,
 LPCSTR szDialogName);
UINT WINAPI MsiPreviewDialogW(MSIHANDLE hPreview,
 LPCWSTR szDialogName);
UINT WINAPI MsiPreviewBillboardA(MSIHANDLE hPreview,
 LPCSTR szControlName,
 LPCSTR szBillboard);
UINT WINAPI MsiPreviewBillboardW(MSIHANDLE hPreview,
 LPCWSTR szControlName,
 LPCWSTR szBillboard);
MSIHANDLE WINAPI MsiGetLastErrorRecord();
}
#endif
#pragma endregion
