#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <tchar.h>
#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface _ADOCollection _ADOCollection;
typedef interface _ADODynaCollection _ADODynaCollection;
typedef interface _ADO _ADO;
typedef interface ADOError Error;
typedef interface ADOErrors Errors;
typedef interface Command15 Command15;
typedef interface Command25 Command25;
typedef interface _ADOCommand _Command;
typedef interface ConnectionEventsVt ConnectionEventsVt;
typedef interface RecordsetEventsVt RecordsetEventsVt;
typedef interface ConnectionEvents ConnectionEvents;
typedef interface RecordsetEvents RecordsetEvents;
typedef interface Connection15 Connection15;
typedef interface _ADOConnection _Connection;
typedef interface ADOConnectionConstruction15 ADOConnectionConstruction15;
typedef interface ADOConnectionConstruction ADOConnectionConstruction;
typedef class ADOConnection Connection;
typedef interface _ADORecord _Record;
typedef class ADORecord Record;
typedef interface _ADOStream _Stream;
typedef class ADOStream Stream;
typedef interface ADORecordConstruction ADORecordConstruction;
typedef interface ADOStreamConstruction ADOStreamConstruction;
typedef interface ADOCommandConstruction ADOCommandConstruction;
typedef class ADOCommand Command;
typedef class ADORecordset Recordset;
typedef interface Recordset15 Recordset15;
typedef interface Recordset20 Recordset20;
typedef interface Recordset21 Recordset21;
typedef interface _ADORecordset _Recordset;
typedef interface ADORecordsetConstruction ADORecordsetConstruction;
typedef interface Field15 Field15;
typedef interface Field20 Field20;
typedef interface ADOField Field;
typedef interface Fields15 Fields15;
typedef interface Fields20 Fields20;
typedef interface ADOFields Fields;
typedef interface _ADOParameter _Parameter;
typedef class ADOParameter Parameter;
typedef interface ADOParameters Parameters;
typedef interface ADOProperty Property;
typedef interface ADOProperties Properties;
extern "C"{
#pragma warning(push)
#pragma warning(disable:4091)
#if 0
typedef DECLSPEC_UUID("54D8B4B9-663B-4a9c-95F6-0E749ABD70F1") __int64 ADO_LONGPTR;
typedef DECLSPEC_UUID("54D8B4B9-663B-4a9c-95F6-0E749ABD70F1") long ADO_LONGPTR;
#endif
typedef LONGLONG ADO_LONGPTR;
extern RPC_IF_HANDLE __MIDL_itf_ado10_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ado10_0000_0000_v0_0_s_ifspec;
typedef DECLSPEC_UUID("0000051B-0000-0010-8000-00AA006D2EA4")
enum CursorTypeEnum
    { adOpenUnspecified = -1,
 adOpenForwardOnly = 0,
 adOpenKeyset = 1,
 adOpenDynamic = 2,
 adOpenStatic = 3
    } CursorTypeEnum;
typedef DECLSPEC_UUID("0000051C-0000-0010-8000-00AA006D2EA4")
enum CursorOptionEnum
    { adHoldRecords = 0x100,
 adMovePrevious = 0x200,
 adAddNew = 0x1000400,
 adDelete = 0x1000800,
 adUpdate = 0x1008000,
 adBookmark = 0x2000,
 adApproxPosition = 0x4000,
 adUpdateBatch = 0x10000,
 adResync = 0x20000,
 adNotify = 0x40000,
 adFind = 0x80000,
 adSeek = 0x400000,
 adIndex = 0x800000
    } CursorOptionEnum;
typedef DECLSPEC_UUID("0000051D-0000-0010-8000-00AA006D2EA4")
enum LockTypeEnum
    { adLockUnspecified = -1,
 adLockReadOnly = 1,
 adLockPessimistic = 2,
 adLockOptimistic = 3,
 adLockBatchOptimistic = 4
    } LockTypeEnum;
typedef DECLSPEC_UUID("0000051E-0000-0010-8000-00AA006D2EA4")
enum ExecuteOptionEnum
    { adOptionUnspecified = -1,
 adAsyncExecute = 0x10,
 adAsyncFetch = 0x20,
 adAsyncFetchNonBlocking = 0x40,
 adExecuteNoRecords = 0x80,
 adExecuteStream = 0x400,
 adExecuteRecord = 0x800
    } ExecuteOptionEnum;
typedef DECLSPEC_UUID("00000541-0000-0010-8000-00AA006D2EA4")
enum ConnectOptionEnum
    { adConnectUnspecified = -1,
 adAsyncConnect = 0x10
    } ConnectOptionEnum;
typedef DECLSPEC_UUID("00000532-0000-0010-8000-00AA006D2EA4")
enum ObjectStateEnum
    { adStateClosed = 0,
 adStateOpen = 0x1,
 adStateConnecting = 0x2,
 adStateExecuting = 0x4,
 adStateFetching = 0x8
    } ObjectStateEnum;
typedef DECLSPEC_UUID("0000052F-0000-0010-8000-00AA006D2EA4")
enum CursorLocationEnum
    { adUseNone = 1,
 adUseServer = 2,
 adUseClient = 3,
 adUseClientBatch = 3
    } CursorLocationEnum;
typedef DECLSPEC_UUID("0000051F-0000-0010-8000-00AA006D2EA4")
enum DataTypeEnum
    { adEmpty = 0,
 adTinyInt = 16,
 adSmallInt = 2,
 adInteger = 3,
 adBigInt = 20,
 adUnsignedTinyInt = 17,
 adUnsignedSmallInt = 18,
 adUnsignedInt = 19,
 adUnsignedBigInt = 21,
 adSingle = 4,
 adDouble = 5,
 adCurrency = 6,
 adDecimal = 14,
 adNumeric = 131,
 adBoolean = 11,
 adError = 10,
 adUserDefined = 132,
 adVariant = 12,
 adIDispatch = 9,
 adIUnknown = 13,
 adGUID = 72,
 adDate = 7,
 adDBDate = 133,
 adDBTime = 134,
 adDBTimeStamp = 135,
 adBSTR = 8,
 adChar = 129,
 adVarChar = 200,
 adLongVarChar = 201,
 adWChar = 130,
 adVarWChar = 202,
 adLongVarWChar = 203,
 adBinary = 128,
 adVarBinary = 204,
 adLongVarBinary = 205,
 adChapter = 136,
 adFileTime = 64,
 adPropVariant = 138,
 adVarNumeric = 139,
 adArray = 0x2000
    } DataTypeEnum;
typedef DECLSPEC_UUID("00000525-0000-0010-8000-00AA006D2EA4")
enum FieldAttributeEnum
    { adFldUnspecified = -1,
 adFldMayDefer = 0x2,
 adFldUpdatable = 0x4,
 adFldUnknownUpdatable = 0x8,
 adFldFixed = 0x10,
 adFldIsNullable = 0x20,
 adFldMayBeNull = 0x40,
 adFldLong = 0x80,
 adFldRowID = 0x100,
 adFldRowVersion = 0x200,
 adFldCacheDeferred = 0x1000,
 adFldIsChapter = 0x2000,
 adFldNegativeScale = 0x4000,
 adFldKeyColumn = 0x8000,
 adFldIsRowURL = 0x10000,
 adFldIsDefaultStream = 0x20000,
 adFldIsCollection = 0x40000
    } FieldAttributeEnum;
typedef DECLSPEC_UUID("00000526-0000-0010-8000-00AA006D2EA4")
enum EditModeEnum
    { adEditNone = 0,
 adEditInProgress = 0x1,
 adEditAdd = 0x2,
 adEditDelete = 0x4
    } EditModeEnum;
typedef DECLSPEC_UUID("00000527-0000-0010-8000-00AA006D2EA4")
enum RecordStatusEnum
    { adRecOK = 0,
 adRecNew = 0x1,
 adRecModified = 0x2,
 adRecDeleted = 0x4,
 adRecUnmodified = 0x8,
 adRecInvalid = 0x10,
 adRecMultipleChanges = 0x40,
 adRecPendingChanges = 0x80,
 adRecCanceled = 0x100,
 adRecCantRelease = 0x400,
 adRecConcurrencyViolation = 0x800,
 adRecIntegrityViolation = 0x1000,
 adRecMaxChangesExceeded = 0x2000,
 adRecObjectOpen = 0x4000,
 adRecOutOfMemory = 0x8000,
 adRecPermissionDenied = 0x10000,
 adRecSchemaViolation = 0x20000,
 adRecDBDeleted = 0x40000
    } RecordStatusEnum;
typedef DECLSPEC_UUID("00000542-0000-0010-8000-00AA006D2EA4")
enum GetRowsOptionEnum
    { adGetRowsRest = -1
    } GetRowsOptionEnum;
typedef DECLSPEC_UUID("00000528-0000-0010-8000-00AA006D2EA4")
enum PositionEnum
    { adPosUnknown = -1,
 adPosBOF = -2,
 adPosEOF = -3
    } PositionEnum;
#if 0
typedef DECLSPEC_UUID("A56187C5-D690-4037-AE32-A00EDC376AC3") __int64 PositionEnum_Param;
typedef DECLSPEC_UUID("A56187C5-D690-4037-AE32-A00EDC376AC3") PositionEnum PositionEnum_Param;
#endif
 typedef LONGLONG PositionEnum_Param;
typedef
enum BookmarkEnum
    { adBookmarkCurrent = 0,
 adBookmarkFirst = 1,
 adBookmarkLast = 2
    } BookmarkEnum;
typedef DECLSPEC_UUID("00000540-0000-0010-8000-00AA006D2EA4")
enum MarshalOptionsEnum
    { adMarshalAll = 0,
 adMarshalModifiedOnly = 1
    } MarshalOptionsEnum;
typedef DECLSPEC_UUID("00000543-0000-0010-8000-00AA006D2EA4")
enum AffectEnum
    { adAffectCurrent = 1,
 adAffectGroup = 2,
 adAffectAll = 3,
 adAffectAllChapters = 4
    } AffectEnum;
typedef DECLSPEC_UUID("00000544-0000-0010-8000-00AA006D2EA4")
enum ResyncEnum
    { adResyncUnderlyingValues = 1,
 adResyncAllValues = 2
    } ResyncEnum;
typedef DECLSPEC_UUID("00000545-0000-0010-8000-00AA006D2EA4")
enum CompareEnum
    { adCompareLessThan = 0,
 adCompareEqual = 1,
 adCompareGreaterThan = 2,
 adCompareNotEqual = 3,
 adCompareNotComparable = 4
    } CompareEnum;
typedef DECLSPEC_UUID("00000546-0000-0010-8000-00AA006D2EA4")
enum FilterGroupEnum
    { adFilterNone = 0,
 adFilterPendingRecords = 1,
 adFilterAffectedRecords = 2,
 adFilterFetchedRecords = 3,
 adFilterPredicate = 4,
 adFilterConflictingRecords = 5
    } FilterGroupEnum;
typedef DECLSPEC_UUID("00000547-0000-0010-8000-00AA006D2EA4")
enum SearchDirectionEnum
    { adSearchForward = 1,
 adSearchBackward = -1
    } SearchDirectionEnum;
typedef SearchDirectionEnum SearchDirection;
typedef DECLSPEC_UUID("00000548-0000-0010-8000-00AA006D2EA4")
enum PersistFormatEnum
    { adPersistADTG = 0,
 adPersistXML = 1
    } PersistFormatEnum;
typedef DECLSPEC_UUID("00000549-0000-0010-8000-00AA006D2EA4")
enum StringFormatEnum
    { adClipString = 2
    } StringFormatEnum;
typedef DECLSPEC_UUID("00000520-0000-0010-8000-00AA006D2EA4")
enum ConnectPromptEnum
    { adPromptAlways = 1,
 adPromptComplete = 2,
 adPromptCompleteRequired = 3,
 adPromptNever = 4
    } ConnectPromptEnum;
typedef DECLSPEC_UUID("00000521-0000-0010-8000-00AA006D2EA4")
enum ConnectModeEnum
    { adModeUnknown = 0,
 adModeRead = 1,
 adModeWrite = 2,
 adModeReadWrite = 3,
 adModeShareDenyRead = 4,
 adModeShareDenyWrite = 8,
 adModeShareExclusive = 0xc,
 adModeShareDenyNone = 0x10,
 adModeRecursive = 0x400000
    } ConnectModeEnum;
typedef DECLSPEC_UUID("00000570-0000-0010-8000-00AA006D2EA4")
enum RecordCreateOptionsEnum
    { adCreateCollection = 0x2000,
 adCreateStructDoc = 0x80000000,
 adCreateNonCollection = 0,
 adOpenIfExists = 0x2000000,
 adCreateOverwrite = 0x4000000,
 adFailIfNotExists = -1
    } RecordCreateOptionsEnum;
typedef DECLSPEC_UUID("00000571-0000-0010-8000-00AA006D2EA4")
enum RecordOpenOptionsEnum
    { adOpenRecordUnspecified = -1,
 adOpenSource = 0x800000,
 adOpenOutput = 0x800000,
 adOpenAsync = 0x1000,
 adDelayFetchStream = 0x4000,
 adDelayFetchFields = 0x8000,
 adOpenExecuteCommand = 0x10000
    } RecordOpenOptionsEnum;
typedef DECLSPEC_UUID("00000523-0000-0010-8000-00AA006D2EA4")
enum IsolationLevelEnum
    { adXactUnspecified = 0xffffffff,
 adXactChaos = 0x10,
 adXactReadUncommitted = 0x100,
 adXactBrowse = 0x100,
 adXactCursorStability = 0x1000,
 adXactReadCommitted = 0x1000,
 adXactRepeatableRead = 0x10000,
 adXactSerializable = 0x100000,
 adXactIsolated = 0x100000
    } IsolationLevelEnum;
typedef DECLSPEC_UUID("00000524-0000-0010-8000-00AA006D2EA4")
enum XactAttributeEnum
    { adXactCommitRetaining = 0x20000,
 adXactAbortRetaining = 0x40000,
 adXactAsyncPhaseOne = 0x80000,
 adXactSyncPhaseOne = 0x100000
    } XactAttributeEnum;
typedef DECLSPEC_UUID("00000529-0000-0010-8000-00AA006D2EA4")
enum PropertyAttributesEnum
    { adPropNotSupported = 0,
 adPropRequired = 0x1,
 adPropOptional = 0x2,
 adPropRead = 0x200,
 adPropWrite = 0x400
    } PropertyAttributesEnum;
typedef DECLSPEC_UUID("0000052A-0000-0010-8000-00AA006D2EA4")
enum ErrorValueEnum
    { adErrProviderFailed = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xbb8),
 adErrInvalidArgument = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xbb9),
 adErrOpeningFile = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xbba),
 adErrReadFile = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xbbb),
 adErrWriteFile = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xbbc),
 adErrNoCurrentRecord = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xbcd),
 adErrIllegalOperation = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xc93),
 adErrCantChangeProvider = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xc94),
 adErrInTransaction = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xcae),
 adErrFeatureNotAvailable = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xcb3),
 adErrItemNotFound = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xcc1),
 adErrObjectInCollection = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xd27),
 adErrObjectNotSet = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xd5c),
 adErrDataConversion = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xd5d),
 adErrObjectClosed = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe78),
 adErrObjectOpen = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe79),
 adErrProviderNotFound = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe7a),
 adErrBoundToCommand = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe7b),
 adErrInvalidParamInfo = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe7c),
 adErrInvalidConnection = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe7d),
 adErrNotReentrant = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe7e),
 adErrStillExecuting = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe7f),
 adErrOperationCancelled = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe80),
 adErrStillConnecting = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe81),
 adErrInvalidTransaction = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe82),
 adErrNotExecuting = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe83),
 adErrUnsafeOperation = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe84),
 adwrnSecurityDialog = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe85),
 adwrnSecurityDialogHeader = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe86),
 adErrIntegrityViolation = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe87),
 adErrPermissionDenied = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe88),
 adErrDataOverflow = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe89),
 adErrSchemaViolation = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe8a),
 adErrSignMismatch = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe8b),
 adErrCantConvertvalue = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe8c),
 adErrCantCreate = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe8d),
 adErrColumnNotOnThisRow = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe8e),
 adErrURLDoesNotExist = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe8f),
 adErrTreePermissionDenied = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe90),
 adErrInvalidURL = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe91),
 adErrResourceLocked = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe92),
 adErrResourceExists = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe93),
 adErrCannotComplete = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe94),
 adErrVolumeNotFound = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe95),
 adErrOutOfSpace = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe96),
 adErrResourceOutOfScope = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe97),
 adErrUnavailable = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe98),
 adErrURLNamedRowDoesNotExist = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe99),
 adErrDelResOutOfScope = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe9a),
 adErrPropInvalidColumn = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe9b),
 adErrPropInvalidOption = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe9c),
 adErrPropInvalidValue = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe9d),
 adErrPropConflicting = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe9e),
 adErrPropNotAllSettable = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xe9f),
 adErrPropNotSet = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xea0),
 adErrPropNotSettable = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xea1),
 adErrPropNotSupported = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xea2),
 adErrCatalogNotSet = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xea3),
 adErrCantChangeConnection = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xea4),
 adErrFieldsUpdateFailed = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xea5),
 adErrDenyNotSupported = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xea6),
 adErrDenyTypeNotSupported = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xea7),
 adErrProviderNotSpecified = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xea9),
 adErrConnectionStringTooLong = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_CONTROL, 0xeaa)
    } ErrorValueEnum;
typedef DECLSPEC_UUID("0000052B-0000-0010-8000-00AA006D2EA4")
enum ParameterAttributesEnum
    { adParamSigned = 0x10,
 adParamNullable = 0x40,
 adParamLong = 0x80
    } ParameterAttributesEnum;
typedef DECLSPEC_UUID("0000052C-0000-0010-8000-00AA006D2EA4")
enum ParameterDirectionEnum
    { adParamUnknown = 0,
 adParamInput = 0x1,
 adParamOutput = 0x2,
 adParamInputOutput = 0x3,
 adParamReturnValue = 0x4
    } ParameterDirectionEnum;
typedef DECLSPEC_UUID("0000052E-0000-0010-8000-00AA006D2EA4")
enum CommandTypeEnum
    { adCmdUnspecified = -1,
 adCmdUnknown = 0x8,
 adCmdText = 0x1,
 adCmdTable = 0x2,
 adCmdStoredProc = 0x4,
 adCmdFile = 0x100,
 adCmdTableDirect = 0x200
    } CommandTypeEnum;
typedef DECLSPEC_UUID("00000530-0000-0010-8000-00AA006D2EA4")
enum EventStatusEnum
    { adStatusOK = 0x1,
 adStatusErrorsOccurred = 0x2,
 adStatusCantDeny = 0x3,
 adStatusCancel = 0x4,
 adStatusUnwantedEvent = 0x5
    } EventStatusEnum;
typedef DECLSPEC_UUID("00000531-0000-0010-8000-00AA006D2EA4")
enum EventReasonEnum
    { adRsnAddNew = 1,
 adRsnDelete = 2,
 adRsnUpdate = 3,
 adRsnUndoUpdate = 4,
 adRsnUndoAddNew = 5,
 adRsnUndoDelete = 6,
 adRsnRequery = 7,
 adRsnResynch = 8,
 adRsnClose = 9,
 adRsnMove = 10,
 adRsnFirstChange = 11,
 adRsnMoveFirst = 12,
 adRsnMoveNext = 13,
 adRsnMovePrevious = 14,
 adRsnMoveLast = 15
    } EventReasonEnum;
typedef DECLSPEC_UUID("00000533-0000-0010-8000-00AA006D2EA4")
enum SchemaEnum
    { adSchemaProviderSpecific = -1,
 adSchemaAsserts = 0,
 adSchemaCatalogs = 1,
 adSchemaCharacterSets = 2,
 adSchemaCollations = 3,
 adSchemaColumns = 4,
 adSchemaCheckConstraints = 5,
 adSchemaConstraintColumnUsage = 6,
 adSchemaConstraintTableUsage = 7,
 adSchemaKeyColumnUsage = 8,
 adSchemaReferentialContraints = 9,
 adSchemaReferentialConstraints = 9,
 adSchemaTableConstraints = 10,
 adSchemaColumnsDomainUsage = 11,
 adSchemaIndexes = 12,
 adSchemaColumnPrivileges = 13,
 adSchemaTablePrivileges = 14,
 adSchemaUsagePrivileges = 15,
 adSchemaProcedures = 16,
 adSchemaSchemata = 17,
 adSchemaSQLLanguages = 18,
 adSchemaStatistics = 19,
 adSchemaTables = 20,
 adSchemaTranslations = 21,
 adSchemaProviderTypes = 22,
 adSchemaViews = 23,
 adSchemaViewColumnUsage = 24,
 adSchemaViewTableUsage = 25,
 adSchemaProcedureParameters = 26,
 adSchemaForeignKeys = 27,
 adSchemaPrimaryKeys = 28,
 adSchemaProcedureColumns = 29,
 adSchemaDBInfoKeywords = 30,
 adSchemaDBInfoLiterals = 31,
 adSchemaCubes = 32,
 adSchemaDimensions = 33,
 adSchemaHierarchies = 34,
 adSchemaLevels = 35,
 adSchemaMeasures = 36,
 adSchemaProperties = 37,
 adSchemaMembers = 38,
 adSchemaTrustees = 39,
 adSchemaFunctions = 40,
 adSchemaActions = 41,
 adSchemaCommands = 42,
 adSchemaSets = 43
    } SchemaEnum;
typedef DECLSPEC_UUID("0000057E-0000-0010-8000-00AA006D2EA4")
enum FieldStatusEnum
    { adFieldOK = 0,
 adFieldCantConvertValue = 2,
 adFieldIsNull = 3,
 adFieldTruncated = 4,
 adFieldSignMismatch = 5,
 adFieldDataOverflow = 6,
 adFieldCantCreate = 7,
 adFieldUnavailable = 8,
 adFieldPermissionDenied = 9,
 adFieldIntegrityViolation = 10,
 adFieldSchemaViolation = 11,
 adFieldBadStatus = 12,
 adFieldDefault = 13,
 adFieldIgnore = 15,
 adFieldDoesNotExist = 16,
 adFieldInvalidURL = 17,
 adFieldResourceLocked = 18,
 adFieldResourceExists = 19,
 adFieldCannotComplete = 20,
 adFieldVolumeNotFound = 21,
 adFieldOutOfSpace = 22,
 adFieldCannotDeleteSource = 23,
 adFieldReadOnly = 24,
 adFieldResourceOutOfScope = 25,
 adFieldAlreadyExists = 26,
 adFieldPendingInsert = 0x10000,
 adFieldPendingDelete = 0x20000,
 adFieldPendingChange = 0x40000,
 adFieldPendingUnknown = 0x80000,
 adFieldPendingUnknownDelete = 0x100000
    } FieldStatusEnum;
typedef DECLSPEC_UUID("00000552-0000-0010-8000-00AA006D2EA4")
enum SeekEnum
    { adSeekFirstEQ = 0x1,
 adSeekLastEQ = 0x2,
 adSeekAfterEQ = 0x4,
 adSeekAfter = 0x8,
 adSeekBeforeEQ = 0x10,
 adSeekBefore = 0x20
    } SeekEnum;
typedef DECLSPEC_UUID("0000054A-0000-0010-8000-00AA006D2EA4")
enum ADCPROP_UPDATECRITERIA_ENUM
    { adCriteriaKey = 0,
 adCriteriaAllCols = 1,
 adCriteriaUpdCols = 2,
 adCriteriaTimeStamp = 3
    } ADCPROP_UPDATECRITERIA_ENUM;
typedef DECLSPEC_UUID("0000054B-0000-0010-8000-00AA006D2EA4")
enum ADCPROP_ASYNCTHREADPRIORITY_ENUM
    { adPriorityLowest = 1,
 adPriorityBelowNormal = 2,
 adPriorityNormal = 3,
 adPriorityAboveNormal = 4,
 adPriorityHighest = 5
    } ADCPROP_ASYNCTHREADPRIORITY_ENUM;
typedef DECLSPEC_UUID("00000554-0000-0010-8000-00AA006D2EA4")
enum ADCPROP_AUTORECALC_ENUM
    { adRecalcUpFront = 0,
 adRecalcAlways = 1
    } ADCPROP_AUTORECALC_ENUM;
typedef DECLSPEC_UUID("00000553-0000-0010-8000-00AA006D2EA4")
enum ADCPROP_UPDATERESYNC_ENUM
    { adResyncNone = 0,
 adResyncAutoIncrement = 1,
 adResyncConflicts = 2,
 adResyncUpdates = 4,
 adResyncInserts = 8,
 adResyncAll = 15
    } ADCPROP_UPDATERESYNC_ENUM;
typedef ADCPROP_UPDATERESYNC_ENUM CEResyncEnum;
typedef DECLSPEC_UUID("00000573-0000-0010-8000-00AA006D2EA4")
enum MoveRecordOptionsEnum
    { adMoveUnspecified = -1,
 adMoveOverWrite = 1,
 adMoveDontUpdateLinks = 2,
 adMoveAllowEmulation = 4
    } MoveRecordOptionsEnum;
typedef DECLSPEC_UUID("00000574-0000-0010-8000-00AA006D2EA4")
enum CopyRecordOptionsEnum
    { adCopyUnspecified = -1,
 adCopyOverWrite = 1,
 adCopyAllowEmulation = 4,
 adCopyNonRecursive = 2
    } CopyRecordOptionsEnum;
typedef DECLSPEC_UUID("00000576-0000-0010-8000-00AA006D2EA4")
enum StreamTypeEnum
    { adTypeBinary = 1,
 adTypeText = 2
    } StreamTypeEnum;
typedef DECLSPEC_UUID("00000577-0000-0010-8000-00AA006D2EA4")
enum LineSeparatorEnum
    { adLF = 10,
 adCR = 13,
 adCRLF = -1
    } LineSeparatorEnum;
typedef DECLSPEC_UUID("0000057A-0000-0010-8000-00AA006D2EA4")
enum StreamOpenOptionsEnum
    { adOpenStreamUnspecified = -1,
 adOpenStreamAsync = 1,
 adOpenStreamFromRecord = 4
    } StreamOpenOptionsEnum;
typedef DECLSPEC_UUID("0000057B-0000-0010-8000-00AA006D2EA4")
enum StreamWriteEnum
    { adWriteChar = 0,
 adWriteLine = 1,
 stWriteChar = 0,
 stWriteLine = 1
    } StreamWriteEnum;
typedef DECLSPEC_UUID("0000057C-0000-0010-8000-00AA006D2EA4")
enum SaveOptionsEnum
    { adSaveCreateNotExist = 1,
 adSaveCreateOverWrite = 2
    } SaveOptionsEnum;
typedef
enum FieldEnum
    { adDefaultStream = -1,
 adRecordURL = -2
    } FieldEnum;
typedef
enum StreamReadEnum
    { adReadAll = -1,
 adReadLine = -2
    } StreamReadEnum;
typedef DECLSPEC_UUID("0000057D-0000-0010-8000-00AA006D2EA4")
enum RecordTypeEnum
    { adSimpleRecord = 0,
 adCollectionRecord = 1,
 adStructDoc = 2
    } RecordTypeEnum;
EXTERN_C const IID LIBID_ADODB;
EXTERN_C const IID IID__ADOCollection;
    typedef struct _ADOCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADOCollection * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADOCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADOCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADOCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADOCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADOCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADOCollection * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in _ADOCollection * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in _ADOCollection * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in _ADOCollection * This);
        END_INTERFACE
    } _ADOCollectionVtbl;
    interface _ADOCollection
    {
        CONST_VTBL struct _ADOCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
EXTERN_C const IID IID__ADODynaCollection;
    typedef struct _ADODynaCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADODynaCollection * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADODynaCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADODynaCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADODynaCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADODynaCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADODynaCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADODynaCollection * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in _ADODynaCollection * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in _ADODynaCollection * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in _ADODynaCollection * This);
                            HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in _ADODynaCollection * This,
                       __RPC__in_opt IDispatch *Object);
                            HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in _ADODynaCollection * This,
                       VARIANT Index);
        END_INTERFACE
    } _ADODynaCollectionVtbl;
    interface _ADODynaCollection
    {
        CONST_VTBL struct _ADODynaCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Append(This,Object) )
    ( (This)->lpVtbl -> Delete(This,Index) )
EXTERN_C const IID IID__ADO;
    typedef struct _ADOVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADO * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADO * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADO * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADO * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADO * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADO * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADO * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in _ADO * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
        END_INTERFACE
    } _ADOVtbl;
    interface _ADO
    {
        CONST_VTBL struct _ADOVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
EXTERN_C const IID IID_Error;
    typedef struct ErrorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOError * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOError * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOError * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOError * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOError * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOError * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOError * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Number )(
            __RPC__in ADOError * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_Source )(
            __RPC__in ADOError * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in ADOError * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_HelpFile )(
            __RPC__in ADOError * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_HelpContext )(
            __RPC__in ADOError * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_SQLState )(
            __RPC__in ADOError * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_NativeError )(
            __RPC__in ADOError * This,
                                __RPC__out long *pl);
        END_INTERFACE
    } ErrorVtbl;
    interface Error
    {
        CONST_VTBL struct ErrorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Number(This,pl) )
    ( (This)->lpVtbl -> get_Source(This,pbstr) )
    ( (This)->lpVtbl -> get_Description(This,pbstr) )
    ( (This)->lpVtbl -> get_HelpFile(This,pbstr) )
    ( (This)->lpVtbl -> get_HelpContext(This,pl) )
    ( (This)->lpVtbl -> get_SQLState(This,pbstr) )
    ( (This)->lpVtbl -> get_NativeError(This,pl) )
EXTERN_C const IID IID_Errors;
    typedef struct ErrorsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOErrors * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOErrors * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOErrors * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOErrors * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOErrors * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOErrors * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOErrors * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ADOErrors * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in ADOErrors * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ADOErrors * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ADOErrors * This,
                       VARIANT Index,
                                __RPC__deref_out_opt ADOError **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ADOErrors * This);
        END_INTERFACE
    } ErrorsVtbl;
    interface Errors
    {
        CONST_VTBL struct ErrorsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppvObject) )
    ( (This)->lpVtbl -> Clear(This) )
EXTERN_C const IID IID_Command15;
    typedef struct Command15Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Command15 * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Command15 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Command15 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Command15 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Command15 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Command15 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Command15 * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in Command15 * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_ActiveConnection )(
            __RPC__in Command15 * This,
                                __RPC__deref_out_opt _ADOConnection **ppvObject);
                                            HRESULT ( STDMETHODCALLTYPE *putref_ActiveADOConnection )(
            __RPC__in Command15 * This,
                       __RPC__in_opt _ADOConnection *pCon);
                                         HRESULT ( STDMETHODCALLTYPE *put_ActiveConnection )(
            __RPC__in Command15 * This,
                       VARIANT vConn);
                                         HRESULT ( STDMETHODCALLTYPE *get_CommandText )(
            __RPC__in Command15 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *put_CommandText )(
            __RPC__in Command15 * This,
                       __RPC__in BSTR bstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_CommandTimeout )(
            __RPC__in Command15 * This,
                                __RPC__out LONG *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_CommandTimeout )(
            __RPC__in Command15 * This,
                       LONG Timeout);
                                         HRESULT ( STDMETHODCALLTYPE *get_Prepared )(
            __RPC__in Command15 * This,
                                __RPC__out VARIANT_BOOL *pfPrepared);
                                         HRESULT ( STDMETHODCALLTYPE *put_Prepared )(
            __RPC__in Command15 * This,
                       VARIANT_BOOL fPrepared);
                                HRESULT ( STDMETHODCALLTYPE *Execute )(
            __RPC__in Command15 * This,
                                  __RPC__out VARIANT *RecordsAffected,
                                 __RPC__in VARIANT *Parameters,
                                     long Options,
                                __RPC__deref_out_opt _ADORecordset **ppirs);
                                HRESULT ( STDMETHODCALLTYPE *CreateParameter )(
            __RPC__in Command15 * This,
                                     __RPC__in BSTR Name,
                                     DataTypeEnum Type,
                                     ParameterDirectionEnum Direction,
                                     ADO_LONGPTR Size,
                                 VARIANT Value,
                                __RPC__deref_out_opt _ADOParameter **ppiprm);
                                         HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
            __RPC__in Command15 * This,
                                __RPC__deref_out_opt ADOParameters **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *put_CommandType )(
            __RPC__in Command15 * This,
                       CommandTypeEnum lCmdType);
                                         HRESULT ( STDMETHODCALLTYPE *get_CommandType )(
            __RPC__in Command15 * This,
                                __RPC__out CommandTypeEnum *plCmdType);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in Command15 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                         HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in Command15 * This,
                       __RPC__in BSTR bstrName);
        END_INTERFACE
    } Command15Vtbl;
    interface Command15
    {
        CONST_VTBL struct Command15Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_ActiveConnection(This,ppvObject) )
    ( (This)->lpVtbl -> putref_ActiveConnection(This,pCon) )
    ( (This)->lpVtbl -> put_ActiveConnection(This,vConn) )
    ( (This)->lpVtbl -> get_CommandText(This,pbstr) )
    ( (This)->lpVtbl -> put_CommandText(This,bstr) )
    ( (This)->lpVtbl -> get_CommandTimeout(This,pl) )
    ( (This)->lpVtbl -> put_CommandTimeout(This,Timeout) )
    ( (This)->lpVtbl -> get_Prepared(This,pfPrepared) )
    ( (This)->lpVtbl -> put_Prepared(This,fPrepared) )
    ( (This)->lpVtbl -> Execute(This,RecordsAffected,Parameters,Options,ppirs) )
    ( (This)->lpVtbl -> CreateParameter(This,Name,Type,Direction,Size,Value,ppiprm) )
    ( (This)->lpVtbl -> get_Parameters(This,ppvObject) )
    ( (This)->lpVtbl -> put_CommandType(This,lCmdType) )
    ( (This)->lpVtbl -> get_CommandType(This,plCmdType) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
EXTERN_C const IID IID_Command25;
    typedef struct Command25Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Command25 * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Command25 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Command25 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Command25 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Command25 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Command25 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Command25 * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in Command25 * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_ActiveConnection )(
            __RPC__in Command25 * This,
                                __RPC__deref_out_opt _ADOConnection **ppvObject);
                                            HRESULT ( STDMETHODCALLTYPE *putref_ActiveADOConnection )(
            __RPC__in Command25 * This,
                       __RPC__in_opt _ADOConnection *pCon);
                                         HRESULT ( STDMETHODCALLTYPE *put_ActiveConnection )(
            __RPC__in Command25 * This,
                       VARIANT vConn);
                                         HRESULT ( STDMETHODCALLTYPE *get_CommandText )(
            __RPC__in Command25 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *put_CommandText )(
            __RPC__in Command25 * This,
                       __RPC__in BSTR bstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_CommandTimeout )(
            __RPC__in Command25 * This,
                                __RPC__out LONG *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_CommandTimeout )(
            __RPC__in Command25 * This,
                       LONG Timeout);
                                         HRESULT ( STDMETHODCALLTYPE *get_Prepared )(
            __RPC__in Command25 * This,
                                __RPC__out VARIANT_BOOL *pfPrepared);
                                         HRESULT ( STDMETHODCALLTYPE *put_Prepared )(
            __RPC__in Command25 * This,
                       VARIANT_BOOL fPrepared);
                                HRESULT ( STDMETHODCALLTYPE *Execute )(
            __RPC__in Command25 * This,
                                  __RPC__out VARIANT *RecordsAffected,
                                 __RPC__in VARIANT *Parameters,
                                     long Options,
                                __RPC__deref_out_opt _ADORecordset **ppirs);
                                HRESULT ( STDMETHODCALLTYPE *CreateParameter )(
            __RPC__in Command25 * This,
                                     __RPC__in BSTR Name,
                                     DataTypeEnum Type,
                                     ParameterDirectionEnum Direction,
                                     ADO_LONGPTR Size,
                                 VARIANT Value,
                                __RPC__deref_out_opt _ADOParameter **ppiprm);
                                         HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
            __RPC__in Command25 * This,
                                __RPC__deref_out_opt ADOParameters **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *put_CommandType )(
            __RPC__in Command25 * This,
                       CommandTypeEnum lCmdType);
                                         HRESULT ( STDMETHODCALLTYPE *get_CommandType )(
            __RPC__in Command25 * This,
                                __RPC__out CommandTypeEnum *plCmdType);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in Command25 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                         HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in Command25 * This,
                       __RPC__in BSTR bstrName);
                                         HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in Command25 * This,
                                __RPC__out LONG *plObjState);
                                HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in Command25 * This);
        END_INTERFACE
    } Command25Vtbl;
    interface Command25
    {
        CONST_VTBL struct Command25Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_ActiveConnection(This,ppvObject) )
    ( (This)->lpVtbl -> putref_ActiveConnection(This,pCon) )
    ( (This)->lpVtbl -> put_ActiveConnection(This,vConn) )
    ( (This)->lpVtbl -> get_CommandText(This,pbstr) )
    ( (This)->lpVtbl -> put_CommandText(This,bstr) )
    ( (This)->lpVtbl -> get_CommandTimeout(This,pl) )
    ( (This)->lpVtbl -> put_CommandTimeout(This,Timeout) )
    ( (This)->lpVtbl -> get_Prepared(This,pfPrepared) )
    ( (This)->lpVtbl -> put_Prepared(This,fPrepared) )
    ( (This)->lpVtbl -> Execute(This,RecordsAffected,Parameters,Options,ppirs) )
    ( (This)->lpVtbl -> CreateParameter(This,Name,Type,Direction,Size,Value,ppiprm) )
    ( (This)->lpVtbl -> get_Parameters(This,ppvObject) )
    ( (This)->lpVtbl -> put_CommandType(This,lCmdType) )
    ( (This)->lpVtbl -> get_CommandType(This,plCmdType) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_State(This,plObjState) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID IID__Command;
    typedef struct _CommandVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADOCommand * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADOCommand * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADOCommand * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADOCommand * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADOCommand * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADOCommand * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADOCommand * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in _ADOCommand * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_ActiveConnection )(
            __RPC__in _ADOCommand * This,
                                __RPC__deref_out_opt _ADOConnection **ppvObject);
                                            HRESULT ( STDMETHODCALLTYPE *putref_ActiveADOConnection )(
            __RPC__in _ADOCommand * This,
                       __RPC__in_opt _ADOConnection *pCon);
                                         HRESULT ( STDMETHODCALLTYPE *put_ActiveConnection )(
            __RPC__in _ADOCommand * This,
                       VARIANT vConn);
                                         HRESULT ( STDMETHODCALLTYPE *get_CommandText )(
            __RPC__in _ADOCommand * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *put_CommandText )(
            __RPC__in _ADOCommand * This,
                       __RPC__in BSTR bstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_CommandTimeout )(
            __RPC__in _ADOCommand * This,
                                __RPC__out LONG *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_CommandTimeout )(
            __RPC__in _ADOCommand * This,
                       LONG Timeout);
                                         HRESULT ( STDMETHODCALLTYPE *get_Prepared )(
            __RPC__in _ADOCommand * This,
                                __RPC__out VARIANT_BOOL *pfPrepared);
                                         HRESULT ( STDMETHODCALLTYPE *put_Prepared )(
            __RPC__in _ADOCommand * This,
                       VARIANT_BOOL fPrepared);
                                HRESULT ( STDMETHODCALLTYPE *Execute )(
            __RPC__in _ADOCommand * This,
                                  __RPC__out VARIANT *RecordsAffected,
                                 __RPC__in VARIANT *Parameters,
                                     long Options,
                                __RPC__deref_out_opt _ADORecordset **ppirs);
                                HRESULT ( STDMETHODCALLTYPE *CreateParameter )(
            __RPC__in _ADOCommand * This,
                                     __RPC__in BSTR Name,
                                     DataTypeEnum Type,
                                     ParameterDirectionEnum Direction,
                                     ADO_LONGPTR Size,
                                 VARIANT Value,
                                __RPC__deref_out_opt _ADOParameter **ppiprm);
                                         HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
            __RPC__in _ADOCommand * This,
                                __RPC__deref_out_opt ADOParameters **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *put_CommandType )(
            __RPC__in _ADOCommand * This,
                       CommandTypeEnum lCmdType);
                                         HRESULT ( STDMETHODCALLTYPE *get_CommandType )(
            __RPC__in _ADOCommand * This,
                                __RPC__out CommandTypeEnum *plCmdType);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in _ADOCommand * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                         HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in _ADOCommand * This,
                       __RPC__in BSTR bstrName);
                                         HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in _ADOCommand * This,
                                __RPC__out LONG *plObjState);
                                HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in _ADOCommand * This);
                                            HRESULT ( __stdcall *putref_CommandADOStream )(
            __RPC__in _ADOCommand * This,
                       __RPC__in_opt IUnknown *pStream);
                                         HRESULT ( __stdcall *get_CommandStream )(
            __RPC__in _ADOCommand * This,
                                __RPC__out VARIANT *pvStream);
                                         HRESULT ( __stdcall *put_Dialect )(
            __RPC__in _ADOCommand * This,
                       __RPC__in BSTR bstrDialect);
                                         HRESULT ( __stdcall *get_Dialect )(
            __RPC__in _ADOCommand * This,
                                __RPC__deref_out_opt BSTR *pbstrDialect);
                                         HRESULT ( __stdcall *put_NamedParameters )(
            __RPC__in _ADOCommand * This,
                       VARIANT_BOOL fNamedParameters);
                                         HRESULT ( __stdcall *get_NamedParameters )(
            __RPC__in _ADOCommand * This,
                                __RPC__out VARIANT_BOOL *pfNamedParameters);
        END_INTERFACE
    } _CommandVtbl;
    interface _Command
    {
        CONST_VTBL struct _CommandVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_ActiveConnection(This,ppvObject) )
    ( (This)->lpVtbl -> putref_ActiveConnection(This,pCon) )
    ( (This)->lpVtbl -> put_ActiveConnection(This,vConn) )
    ( (This)->lpVtbl -> get_CommandText(This,pbstr) )
    ( (This)->lpVtbl -> put_CommandText(This,bstr) )
    ( (This)->lpVtbl -> get_CommandTimeout(This,pl) )
    ( (This)->lpVtbl -> put_CommandTimeout(This,Timeout) )
    ( (This)->lpVtbl -> get_Prepared(This,pfPrepared) )
    ( (This)->lpVtbl -> put_Prepared(This,fPrepared) )
    ( (This)->lpVtbl -> Execute(This,RecordsAffected,Parameters,Options,ppirs) )
    ( (This)->lpVtbl -> CreateParameter(This,Name,Type,Direction,Size,Value,ppiprm) )
    ( (This)->lpVtbl -> get_Parameters(This,ppvObject) )
    ( (This)->lpVtbl -> put_CommandType(This,lCmdType) )
    ( (This)->lpVtbl -> get_CommandType(This,plCmdType) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_State(This,plObjState) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> putref_CommandStream(This,pStream) )
    ( (This)->lpVtbl -> get_CommandStream(This,pvStream) )
    ( (This)->lpVtbl -> put_Dialect(This,bstrDialect) )
    ( (This)->lpVtbl -> get_Dialect(This,pbstrDialect) )
    ( (This)->lpVtbl -> put_NamedParameters(This,fNamedParameters) )
    ( (This)->lpVtbl -> get_NamedParameters(This,pfNamedParameters) )
EXTERN_C const IID IID_ConnectionEventsVt;
    typedef struct ConnectionEventsVtVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ConnectionEventsVt * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ConnectionEventsVt * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ConnectionEventsVt * This);
                                HRESULT ( STDMETHODCALLTYPE *InfoMessage )(
            __RPC__in ConnectionEventsVt * This,
                       __RPC__in_opt ADOError *pError,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADOConnection *pConnection);
                                HRESULT ( STDMETHODCALLTYPE *BeginTransComplete )(
            __RPC__in ConnectionEventsVt * This,
                       LONG TransactionLevel,
                       __RPC__in_opt ADOError *pError,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADOConnection *pConnection);
                                HRESULT ( STDMETHODCALLTYPE *CommitTransComplete )(
            __RPC__in ConnectionEventsVt * This,
                       __RPC__in_opt ADOError *pError,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADOConnection *pConnection);
                                HRESULT ( STDMETHODCALLTYPE *RollbackTransComplete )(
            __RPC__in ConnectionEventsVt * This,
                       __RPC__in_opt ADOError *pError,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADOConnection *pConnection);
                                HRESULT ( STDMETHODCALLTYPE *WillExecute )(
            __RPC__in ConnectionEventsVt * This,
                            __RPC__deref_inout_opt BSTR *Source,
                            __RPC__inout CursorTypeEnum *CursorType,
                            __RPC__inout LockTypeEnum *LockType,
                            __RPC__inout long *Options,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADOCommand *pCommand,
                       __RPC__in_opt _ADORecordset *pRecordset,
                       __RPC__in_opt _ADOConnection *pConnection);
                                HRESULT ( STDMETHODCALLTYPE *ExecuteComplete )(
            __RPC__in ConnectionEventsVt * This,
                       LONG RecordsAffected,
                       __RPC__in_opt ADOError *pError,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADOCommand *pCommand,
                       __RPC__in_opt _ADORecordset *pRecordset,
                       __RPC__in_opt _ADOConnection *pConnection);
                                HRESULT ( STDMETHODCALLTYPE *WillConnect )(
            __RPC__in ConnectionEventsVt * This,
                            __RPC__deref_inout_opt BSTR *ConnectionString,
                            __RPC__deref_inout_opt BSTR *UserID,
                            __RPC__deref_inout_opt BSTR *Password,
                            __RPC__inout long *Options,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADOConnection *pConnection);
                                HRESULT ( STDMETHODCALLTYPE *ConnectComplete )(
            __RPC__in ConnectionEventsVt * This,
                       __RPC__in_opt ADOError *pError,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADOConnection *pConnection);
                                HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in ConnectionEventsVt * This,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADOConnection *pConnection);
        END_INTERFACE
    } ConnectionEventsVtVtbl;
    interface ConnectionEventsVt
    {
        CONST_VTBL struct ConnectionEventsVtVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InfoMessage(This,pError,adStatus,pConnection) )
    ( (This)->lpVtbl -> BeginTransComplete(This,TransactionLevel,pError,adStatus,pConnection) )
    ( (This)->lpVtbl -> CommitTransComplete(This,pError,adStatus,pConnection) )
    ( (This)->lpVtbl -> RollbackTransComplete(This,pError,adStatus,pConnection) )
    ( (This)->lpVtbl -> WillExecute(This,Source,CursorType,LockType,Options,adStatus,pCommand,pRecordset,pConnection) )
    ( (This)->lpVtbl -> ExecuteComplete(This,RecordsAffected,pError,adStatus,pCommand,pRecordset,pConnection) )
    ( (This)->lpVtbl -> WillConnect(This,ConnectionString,UserID,Password,Options,adStatus,pConnection) )
    ( (This)->lpVtbl -> ConnectComplete(This,pError,adStatus,pConnection) )
    ( (This)->lpVtbl -> Disconnect(This,adStatus,pConnection) )
EXTERN_C const IID IID_RecordsetEventsVt;
    typedef struct RecordsetEventsVtVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in RecordsetEventsVt * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in RecordsetEventsVt * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in RecordsetEventsVt * This);
                                HRESULT ( STDMETHODCALLTYPE *WillChangeADOField )(
            __RPC__in RecordsetEventsVt * This,
                       LONG cFields,
                       VARIANT Fields,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADORecordset *pRecordset);
                                HRESULT ( STDMETHODCALLTYPE *FieldChangeComplete )(
            __RPC__in RecordsetEventsVt * This,
                       LONG cFields,
                       VARIANT Fields,
                       __RPC__in_opt ADOError *pError,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADORecordset *pRecordset);
                                HRESULT ( STDMETHODCALLTYPE *WillChangeADORecord )(
            __RPC__in RecordsetEventsVt * This,
                       EventReasonEnum adReason,
                       LONG cRecords,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADORecordset *pRecordset);
                                HRESULT ( STDMETHODCALLTYPE *RecordChangeComplete )(
            __RPC__in RecordsetEventsVt * This,
                       EventReasonEnum adReason,
                       LONG cRecords,
                       __RPC__in_opt ADOError *pError,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADORecordset *pRecordset);
                                HRESULT ( STDMETHODCALLTYPE *WillChangeADORecordset )(
            __RPC__in RecordsetEventsVt * This,
                       EventReasonEnum adReason,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADORecordset *pRecordset);
                                HRESULT ( STDMETHODCALLTYPE *RecordsetChangeComplete )(
            __RPC__in RecordsetEventsVt * This,
                       EventReasonEnum adReason,
                       __RPC__in_opt ADOError *pError,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADORecordset *pRecordset);
                                HRESULT ( STDMETHODCALLTYPE *WillMove )(
            __RPC__in RecordsetEventsVt * This,
                       EventReasonEnum adReason,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADORecordset *pRecordset);
                                HRESULT ( STDMETHODCALLTYPE *MoveComplete )(
            __RPC__in RecordsetEventsVt * This,
                       EventReasonEnum adReason,
                       __RPC__in_opt ADOError *pError,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADORecordset *pRecordset);
                                HRESULT ( STDMETHODCALLTYPE *EndOfADORecordset )(
            __RPC__in RecordsetEventsVt * This,
                            __RPC__inout VARIANT_BOOL *fMoreData,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADORecordset *pRecordset);
                                HRESULT ( STDMETHODCALLTYPE *FetchProgress )(
            __RPC__in RecordsetEventsVt * This,
                       long Progress,
                       long MaxProgress,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADORecordset *pRecordset);
                                HRESULT ( STDMETHODCALLTYPE *FetchComplete )(
            __RPC__in RecordsetEventsVt * This,
                       __RPC__in_opt ADOError *pError,
                            __RPC__inout EventStatusEnum *adStatus,
                       __RPC__in_opt _ADORecordset *pRecordset);
        END_INTERFACE
    } RecordsetEventsVtVtbl;
    interface RecordsetEventsVt
    {
        CONST_VTBL struct RecordsetEventsVtVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> WillChangeField(This,cFields,Fields,adStatus,pRecordset) )
    ( (This)->lpVtbl -> FieldChangeComplete(This,cFields,Fields,pError,adStatus,pRecordset) )
    ( (This)->lpVtbl -> WillChangeRecord(This,adReason,cRecords,adStatus,pRecordset) )
    ( (This)->lpVtbl -> RecordChangeComplete(This,adReason,cRecords,pError,adStatus,pRecordset) )
    ( (This)->lpVtbl -> WillChangeRecordset(This,adReason,adStatus,pRecordset) )
    ( (This)->lpVtbl -> RecordsetChangeComplete(This,adReason,pError,adStatus,pRecordset) )
    ( (This)->lpVtbl -> WillMove(This,adReason,adStatus,pRecordset) )
    ( (This)->lpVtbl -> MoveComplete(This,adReason,pError,adStatus,pRecordset) )
    ( (This)->lpVtbl -> EndOfRecordset(This,fMoreData,adStatus,pRecordset) )
    ( (This)->lpVtbl -> FetchProgress(This,Progress,MaxProgress,adStatus,pRecordset) )
    ( (This)->lpVtbl -> FetchComplete(This,pError,adStatus,pRecordset) )
EXTERN_C const IID DIID_ConnectionEvents;
    typedef struct ConnectionEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ConnectionEvents * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ConnectionEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ConnectionEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ConnectionEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ConnectionEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ConnectionEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ConnectionEvents * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
        END_INTERFACE
    } ConnectionEventsVtbl;
    interface ConnectionEvents
    {
        CONST_VTBL struct ConnectionEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID DIID_RecordsetEvents;
    typedef struct RecordsetEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in RecordsetEvents * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in RecordsetEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in RecordsetEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in RecordsetEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in RecordsetEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in RecordsetEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            RecordsetEvents * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
        END_INTERFACE
    } RecordsetEventsVtbl;
    interface RecordsetEvents
    {
        CONST_VTBL struct RecordsetEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_Connection15;
    typedef struct Connection15Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Connection15 * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Connection15 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Connection15 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Connection15 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Connection15 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Connection15 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Connection15 * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in Connection15 * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_ConnectionString )(
            __RPC__in Connection15 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *put_ConnectionString )(
            __RPC__in Connection15 * This,
                       __RPC__in BSTR bstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_CommandTimeout )(
            __RPC__in Connection15 * This,
                                __RPC__out LONG *plTimeout);
                                         HRESULT ( STDMETHODCALLTYPE *put_CommandTimeout )(
            __RPC__in Connection15 * This,
                       LONG lTimeout);
                                         HRESULT ( STDMETHODCALLTYPE *get_ConnectionTimeout )(
            __RPC__in Connection15 * This,
                                __RPC__out LONG *plTimeout);
                                         HRESULT ( STDMETHODCALLTYPE *put_ConnectionTimeout )(
            __RPC__in Connection15 * This,
                       LONG lTimeout);
                                         HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in Connection15 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in Connection15 * This);
                                HRESULT ( STDMETHODCALLTYPE *Execute )(
            __RPC__in Connection15 * This,
                       __RPC__in BSTR CommandText,
                                  __RPC__out VARIANT *RecordsAffected,
                                     long Options,
                                __RPC__deref_out_opt _ADORecordset **ppiRset);
                                HRESULT ( STDMETHODCALLTYPE *BeginTrans )(
            __RPC__in Connection15 * This,
                                __RPC__out long *TransactionLevel);
                                HRESULT ( STDMETHODCALLTYPE *CommitTrans )(
            __RPC__in Connection15 * This);
                                HRESULT ( STDMETHODCALLTYPE *RollbackTrans )(
            __RPC__in Connection15 * This);
                                HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in Connection15 * This,
                                     __RPC__in BSTR ConnectionString,
                                     __RPC__in BSTR UserID,
                                     __RPC__in BSTR Password,
                                     long Options);
                                         HRESULT ( STDMETHODCALLTYPE *get_Errors )(
            __RPC__in Connection15 * This,
                                __RPC__deref_out_opt ADOErrors **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_DefaultDatabase )(
            __RPC__in Connection15 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *put_DefaultDatabase )(
            __RPC__in Connection15 * This,
                       __RPC__in BSTR bstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_IsolationLevel )(
            __RPC__in Connection15 * This,
                                __RPC__out IsolationLevelEnum *Level);
                                         HRESULT ( STDMETHODCALLTYPE *put_IsolationLevel )(
            __RPC__in Connection15 * This,
                       IsolationLevelEnum Level);
                                         HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
            __RPC__in Connection15 * This,
                                __RPC__out long *plAttr);
                                         HRESULT ( STDMETHODCALLTYPE *put_Attributes )(
            __RPC__in Connection15 * This,
                       long lAttr);
                                         HRESULT ( STDMETHODCALLTYPE *get_CursorLocation )(
            __RPC__in Connection15 * This,
                                __RPC__out CursorLocationEnum *plCursorLoc);
                                         HRESULT ( STDMETHODCALLTYPE *put_CursorLocation )(
            __RPC__in Connection15 * This,
                       CursorLocationEnum lCursorLoc);
                                         HRESULT ( STDMETHODCALLTYPE *get_Mode )(
            __RPC__in Connection15 * This,
                                __RPC__out ConnectModeEnum *plMode);
                                         HRESULT ( STDMETHODCALLTYPE *put_Mode )(
            __RPC__in Connection15 * This,
                       ConnectModeEnum lMode);
                                         HRESULT ( STDMETHODCALLTYPE *get_Provider )(
            __RPC__in Connection15 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *put_Provider )(
            __RPC__in Connection15 * This,
                       __RPC__in BSTR Provider);
                                         HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in Connection15 * This,
                                __RPC__out LONG *plObjState);
                                HRESULT ( STDMETHODCALLTYPE *OpenSchema )(
            __RPC__in Connection15 * This,
                       SchemaEnum Schema,
                                 VARIANT Restrictions,
                                 VARIANT SchemaID,
                                __RPC__deref_out_opt _ADORecordset **pprset);
        END_INTERFACE
    } Connection15Vtbl;
    interface Connection15
    {
        CONST_VTBL struct Connection15Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_ConnectionString(This,pbstr) )
    ( (This)->lpVtbl -> put_ConnectionString(This,bstr) )
    ( (This)->lpVtbl -> get_CommandTimeout(This,plTimeout) )
    ( (This)->lpVtbl -> put_CommandTimeout(This,lTimeout) )
    ( (This)->lpVtbl -> get_ConnectionTimeout(This,plTimeout) )
    ( (This)->lpVtbl -> put_ConnectionTimeout(This,lTimeout) )
    ( (This)->lpVtbl -> get_Version(This,pbstr) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Execute(This,CommandText,RecordsAffected,Options,ppiRset) )
    ( (This)->lpVtbl -> BeginTrans(This,TransactionLevel) )
    ( (This)->lpVtbl -> CommitTrans(This) )
    ( (This)->lpVtbl -> RollbackTrans(This) )
    ( (This)->lpVtbl -> Open(This,ConnectionString,UserID,Password,Options) )
    ( (This)->lpVtbl -> get_Errors(This,ppvObject) )
    ( (This)->lpVtbl -> get_DefaultDatabase(This,pbstr) )
    ( (This)->lpVtbl -> put_DefaultDatabase(This,bstr) )
    ( (This)->lpVtbl -> get_IsolationLevel(This,Level) )
    ( (This)->lpVtbl -> put_IsolationLevel(This,Level) )
    ( (This)->lpVtbl -> get_Attributes(This,plAttr) )
    ( (This)->lpVtbl -> put_Attributes(This,lAttr) )
    ( (This)->lpVtbl -> get_CursorLocation(This,plCursorLoc) )
    ( (This)->lpVtbl -> put_CursorLocation(This,lCursorLoc) )
    ( (This)->lpVtbl -> get_Mode(This,plMode) )
    ( (This)->lpVtbl -> put_Mode(This,lMode) )
    ( (This)->lpVtbl -> get_Provider(This,pbstr) )
    ( (This)->lpVtbl -> put_Provider(This,Provider) )
    ( (This)->lpVtbl -> get_State(This,plObjState) )
    ( (This)->lpVtbl -> OpenSchema(This,Schema,Restrictions,SchemaID,pprset) )
EXTERN_C const IID IID__Connection;
    typedef struct _ConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADOConnection * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADOConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADOConnection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADOConnection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADOConnection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADOConnection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADOConnection * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in _ADOConnection * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_ConnectionString )(
            __RPC__in _ADOConnection * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *put_ConnectionString )(
            __RPC__in _ADOConnection * This,
                       __RPC__in BSTR bstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_CommandTimeout )(
            __RPC__in _ADOConnection * This,
                                __RPC__out LONG *plTimeout);
                                         HRESULT ( STDMETHODCALLTYPE *put_CommandTimeout )(
            __RPC__in _ADOConnection * This,
                       LONG lTimeout);
                                         HRESULT ( STDMETHODCALLTYPE *get_ConnectionTimeout )(
            __RPC__in _ADOConnection * This,
                                __RPC__out LONG *plTimeout);
                                         HRESULT ( STDMETHODCALLTYPE *put_ConnectionTimeout )(
            __RPC__in _ADOConnection * This,
                       LONG lTimeout);
                                         HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in _ADOConnection * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in _ADOConnection * This);
                                HRESULT ( STDMETHODCALLTYPE *Execute )(
            __RPC__in _ADOConnection * This,
                       __RPC__in BSTR CommandText,
                                  __RPC__out VARIANT *RecordsAffected,
                                     long Options,
                                __RPC__deref_out_opt _ADORecordset **ppiRset);
                                HRESULT ( STDMETHODCALLTYPE *BeginTrans )(
            __RPC__in _ADOConnection * This,
                                __RPC__out long *TransactionLevel);
                                HRESULT ( STDMETHODCALLTYPE *CommitTrans )(
            __RPC__in _ADOConnection * This);
                                HRESULT ( STDMETHODCALLTYPE *RollbackTrans )(
            __RPC__in _ADOConnection * This);
                                HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in _ADOConnection * This,
                                     __RPC__in BSTR ConnectionString,
                                     __RPC__in BSTR UserID,
                                     __RPC__in BSTR Password,
                                     long Options);
                                         HRESULT ( STDMETHODCALLTYPE *get_Errors )(
            __RPC__in _ADOConnection * This,
                                __RPC__deref_out_opt ADOErrors **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_DefaultDatabase )(
            __RPC__in _ADOConnection * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *put_DefaultDatabase )(
            __RPC__in _ADOConnection * This,
                       __RPC__in BSTR bstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_IsolationLevel )(
            __RPC__in _ADOConnection * This,
                                __RPC__out IsolationLevelEnum *Level);
                                         HRESULT ( STDMETHODCALLTYPE *put_IsolationLevel )(
            __RPC__in _ADOConnection * This,
                       IsolationLevelEnum Level);
                                         HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
            __RPC__in _ADOConnection * This,
                                __RPC__out long *plAttr);
                                         HRESULT ( STDMETHODCALLTYPE *put_Attributes )(
            __RPC__in _ADOConnection * This,
                       long lAttr);
                                         HRESULT ( STDMETHODCALLTYPE *get_CursorLocation )(
            __RPC__in _ADOConnection * This,
                                __RPC__out CursorLocationEnum *plCursorLoc);
                                         HRESULT ( STDMETHODCALLTYPE *put_CursorLocation )(
            __RPC__in _ADOConnection * This,
                       CursorLocationEnum lCursorLoc);
                                         HRESULT ( STDMETHODCALLTYPE *get_Mode )(
            __RPC__in _ADOConnection * This,
                                __RPC__out ConnectModeEnum *plMode);
                                         HRESULT ( STDMETHODCALLTYPE *put_Mode )(
            __RPC__in _ADOConnection * This,
                       ConnectModeEnum lMode);
                                         HRESULT ( STDMETHODCALLTYPE *get_Provider )(
            __RPC__in _ADOConnection * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *put_Provider )(
            __RPC__in _ADOConnection * This,
                       __RPC__in BSTR Provider);
                                         HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in _ADOConnection * This,
                                __RPC__out LONG *plObjState);
                                HRESULT ( STDMETHODCALLTYPE *OpenSchema )(
            __RPC__in _ADOConnection * This,
                       SchemaEnum Schema,
                                 VARIANT Restrictions,
                                 VARIANT SchemaID,
                                __RPC__deref_out_opt _ADORecordset **pprset);
                                HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in _ADOConnection * This);
        END_INTERFACE
    } _ConnectionVtbl;
    interface _Connection
    {
        CONST_VTBL struct _ConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_ConnectionString(This,pbstr) )
    ( (This)->lpVtbl -> put_ConnectionString(This,bstr) )
    ( (This)->lpVtbl -> get_CommandTimeout(This,plTimeout) )
    ( (This)->lpVtbl -> put_CommandTimeout(This,lTimeout) )
    ( (This)->lpVtbl -> get_ConnectionTimeout(This,plTimeout) )
    ( (This)->lpVtbl -> put_ConnectionTimeout(This,lTimeout) )
    ( (This)->lpVtbl -> get_Version(This,pbstr) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Execute(This,CommandText,RecordsAffected,Options,ppiRset) )
    ( (This)->lpVtbl -> BeginTrans(This,TransactionLevel) )
    ( (This)->lpVtbl -> CommitTrans(This) )
    ( (This)->lpVtbl -> RollbackTrans(This) )
    ( (This)->lpVtbl -> Open(This,ConnectionString,UserID,Password,Options) )
    ( (This)->lpVtbl -> get_Errors(This,ppvObject) )
    ( (This)->lpVtbl -> get_DefaultDatabase(This,pbstr) )
    ( (This)->lpVtbl -> put_DefaultDatabase(This,bstr) )
    ( (This)->lpVtbl -> get_IsolationLevel(This,Level) )
    ( (This)->lpVtbl -> put_IsolationLevel(This,Level) )
    ( (This)->lpVtbl -> get_Attributes(This,plAttr) )
    ( (This)->lpVtbl -> put_Attributes(This,lAttr) )
    ( (This)->lpVtbl -> get_CursorLocation(This,plCursorLoc) )
    ( (This)->lpVtbl -> put_CursorLocation(This,lCursorLoc) )
    ( (This)->lpVtbl -> get_Mode(This,plMode) )
    ( (This)->lpVtbl -> put_Mode(This,lMode) )
    ( (This)->lpVtbl -> get_Provider(This,pbstr) )
    ( (This)->lpVtbl -> put_Provider(This,Provider) )
    ( (This)->lpVtbl -> get_State(This,plObjState) )
    ( (This)->lpVtbl -> OpenSchema(This,Schema,Restrictions,SchemaID,pprset) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID IID_ADOConnectionConstruction15;
    typedef struct ADOConnectionConstruction15Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOConnectionConstruction15 * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOConnectionConstruction15 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOConnectionConstruction15 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_DSO )(
            __RPC__in ADOConnectionConstruction15 * This,
                                __RPC__deref_out_opt IUnknown **ppDSO);
                        HRESULT ( STDMETHODCALLTYPE *get_Session )(
            __RPC__in ADOConnectionConstruction15 * This,
                                __RPC__deref_out_opt IUnknown **ppSession);
        HRESULT ( STDMETHODCALLTYPE *WrapDSOandSession )(
            __RPC__in ADOConnectionConstruction15 * This,
                       __RPC__in_opt IUnknown *pDSO,
                       __RPC__in_opt IUnknown *pSession);
        END_INTERFACE
    } ADOConnectionConstruction15Vtbl;
    interface ADOConnectionConstruction15
    {
        CONST_VTBL struct ADOConnectionConstruction15Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_DSO(This,ppDSO) )
    ( (This)->lpVtbl -> get_Session(This,ppSession) )
    ( (This)->lpVtbl -> WrapDSOandSession(This,pDSO,pSession) )
EXTERN_C const IID IID_ADOConnectionConstruction;
    typedef struct ADOConnectionConstructionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOConnectionConstruction * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOConnectionConstruction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOConnectionConstruction * This);
                        HRESULT ( STDMETHODCALLTYPE *get_DSO )(
            __RPC__in ADOConnectionConstruction * This,
                                __RPC__deref_out_opt IUnknown **ppDSO);
                        HRESULT ( STDMETHODCALLTYPE *get_Session )(
            __RPC__in ADOConnectionConstruction * This,
                                __RPC__deref_out_opt IUnknown **ppSession);
        HRESULT ( STDMETHODCALLTYPE *WrapDSOandSession )(
            __RPC__in ADOConnectionConstruction * This,
                       __RPC__in_opt IUnknown *pDSO,
                       __RPC__in_opt IUnknown *pSession);
        END_INTERFACE
    } ADOConnectionConstructionVtbl;
    interface ADOConnectionConstruction
    {
        CONST_VTBL struct ADOConnectionConstructionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_DSO(This,ppDSO) )
    ( (This)->lpVtbl -> get_Session(This,ppSession) )
    ( (This)->lpVtbl -> WrapDSOandSession(This,pDSO,pSession) )
EXTERN_C const CLSID CLSID_Connection;
Connection;
EXTERN_C const IID IID__Record;
    typedef struct _RecordVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADORecord * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADORecord * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADORecord * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADORecord * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADORecord * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADORecord * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADORecord * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in _ADORecord * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_ActiveConnection )(
            __RPC__in _ADORecord * This,
                                __RPC__out VARIANT *pvar);
                                         HRESULT ( STDMETHODCALLTYPE *put_ActiveConnection )(
            __RPC__in _ADORecord * This,
                       __RPC__in BSTR bstrConn);
                                            HRESULT ( STDMETHODCALLTYPE *putref_ActiveADOConnection )(
            __RPC__in _ADORecord * This,
                       __RPC__in_opt _ADOConnection *Con);
                                         HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in _ADORecord * This,
                                __RPC__out ObjectStateEnum *pState);
                                         HRESULT ( STDMETHODCALLTYPE *get_Source )(
            __RPC__in _ADORecord * This,
                                __RPC__out VARIANT *pvar);
                                         HRESULT ( STDMETHODCALLTYPE *put_Source )(
            __RPC__in _ADORecord * This,
                       __RPC__in BSTR Source);
                                            HRESULT ( STDMETHODCALLTYPE *putref_Source )(
            __RPC__in _ADORecord * This,
                       __RPC__in_opt IDispatch *Source);
                                         HRESULT ( STDMETHODCALLTYPE *get_Mode )(
            __RPC__in _ADORecord * This,
                                __RPC__out ConnectModeEnum *pMode);
                                         HRESULT ( STDMETHODCALLTYPE *put_Mode )(
            __RPC__in _ADORecord * This,
                       ConnectModeEnum Mode);
                                         HRESULT ( STDMETHODCALLTYPE *get_ParentURL )(
            __RPC__in _ADORecord * This,
                                __RPC__deref_out_opt BSTR *pbstrParentURL);
                                HRESULT ( STDMETHODCALLTYPE *MoveADORecord )(
            __RPC__in _ADORecord * This,
                                     __RPC__in BSTR Source,
                                     __RPC__in BSTR Destination,
                                     __RPC__in BSTR UserName,
                                     __RPC__in BSTR Password,
                                     MoveRecordOptionsEnum Options,
                                     VARIANT_BOOL Async,
                                __RPC__deref_out_opt BSTR *pbstrNewURL);
                                HRESULT ( STDMETHODCALLTYPE *CopyADORecord )(
            __RPC__in _ADORecord * This,
                                     __RPC__in BSTR Source,
                                     __RPC__in BSTR Destination,
                                     __RPC__in BSTR UserName,
                                     __RPC__in BSTR Password,
                                     CopyRecordOptionsEnum Options,
                                     VARIANT_BOOL Async,
                                __RPC__deref_out_opt BSTR *pbstrNewURL);
                                HRESULT ( STDMETHODCALLTYPE *DeleteADORecord )(
            __RPC__in _ADORecord * This,
                                     __RPC__in BSTR Source,
                                     VARIANT_BOOL Async);
                                HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in _ADORecord * This,
                                 VARIANT Source,
                                 VARIANT ActiveConnection,
                                     ConnectModeEnum Mode,
                                     RecordCreateOptionsEnum CreateOptions,
                                     RecordOpenOptionsEnum Options,
                                     __RPC__in BSTR UserName,
                                     __RPC__in BSTR Password);
                                HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in _ADORecord * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_Fields )(
            __RPC__in _ADORecord * This,
                                __RPC__deref_out_opt ADOFields **ppFlds);
                                         HRESULT ( STDMETHODCALLTYPE *get_RecordType )(
            __RPC__in _ADORecord * This,
                                __RPC__out RecordTypeEnum *pType);
                                HRESULT ( STDMETHODCALLTYPE *GetChildren )(
            __RPC__in _ADORecord * This,
                                __RPC__deref_out_opt _ADORecordset **ppRSet);
                                HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in _ADORecord * This);
        END_INTERFACE
    } _RecordVtbl;
    interface _Record
    {
        CONST_VTBL struct _RecordVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_ActiveConnection(This,pvar) )
    ( (This)->lpVtbl -> put_ActiveConnection(This,bstrConn) )
    ( (This)->lpVtbl -> putref_ActiveConnection(This,Con) )
    ( (This)->lpVtbl -> get_State(This,pState) )
    ( (This)->lpVtbl -> get_Source(This,pvar) )
    ( (This)->lpVtbl -> put_Source(This,Source) )
    ( (This)->lpVtbl -> putref_Source(This,Source) )
    ( (This)->lpVtbl -> get_Mode(This,pMode) )
    ( (This)->lpVtbl -> put_Mode(This,Mode) )
    ( (This)->lpVtbl -> get_ParentURL(This,pbstrParentURL) )
    ( (This)->lpVtbl -> MoveRecord(This,Source,Destination,UserName,Password,Options,Async,pbstrNewURL) )
    ( (This)->lpVtbl -> CopyRecord(This,Source,Destination,UserName,Password,Options,Async,pbstrNewURL) )
    ( (This)->lpVtbl -> DeleteRecord(This,Source,Async) )
    ( (This)->lpVtbl -> Open(This,Source,ActiveConnection,Mode,CreateOptions,Options,UserName,Password) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> get_Fields(This,ppFlds) )
    ( (This)->lpVtbl -> get_RecordType(This,pType) )
    ( (This)->lpVtbl -> GetChildren(This,ppRSet) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const CLSID CLSID_Record;
Record;
EXTERN_C const IID IID__Stream;
    typedef struct _StreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADOStream * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADOStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADOStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADOStream * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADOStream * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADOStream * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADOStream * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in _ADOStream * This,
                                __RPC__out ADO_LONGPTR *pSize);
                                         HRESULT ( STDMETHODCALLTYPE *get_EOS )(
            __RPC__in _ADOStream * This,
                                __RPC__out VARIANT_BOOL *pEOS);
                                         HRESULT ( STDMETHODCALLTYPE *get_Position )(
            __RPC__in _ADOStream * This,
                                __RPC__out ADO_LONGPTR *pPos);
                                         HRESULT ( STDMETHODCALLTYPE *put_Position )(
            __RPC__in _ADOStream * This,
                       ADO_LONGPTR Position);
                                         HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in _ADOStream * This,
                                __RPC__out StreamTypeEnum *pType);
                                         HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in _ADOStream * This,
                       StreamTypeEnum Type);
                                         HRESULT ( STDMETHODCALLTYPE *get_LineSeparator )(
            __RPC__in _ADOStream * This,
                                __RPC__out LineSeparatorEnum *pLS);
                                         HRESULT ( STDMETHODCALLTYPE *put_LineSeparator )(
            __RPC__in _ADOStream * This,
                       LineSeparatorEnum LineSeparator);
                                         HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in _ADOStream * This,
                                __RPC__out ObjectStateEnum *pState);
                                         HRESULT ( STDMETHODCALLTYPE *get_Mode )(
            __RPC__in _ADOStream * This,
                                __RPC__out ConnectModeEnum *pMode);
                                         HRESULT ( STDMETHODCALLTYPE *put_Mode )(
            __RPC__in _ADOStream * This,
                       ConnectModeEnum Mode);
                                         HRESULT ( STDMETHODCALLTYPE *get_Charset )(
            __RPC__in _ADOStream * This,
                                __RPC__deref_out_opt BSTR *pbstrCharset);
                                         HRESULT ( STDMETHODCALLTYPE *put_Charset )(
            __RPC__in _ADOStream * This,
                       __RPC__in BSTR Charset);
                                HRESULT ( STDMETHODCALLTYPE *Read )(
            __RPC__in _ADOStream * This,
                                     long NumBytes,
                                __RPC__out VARIANT *pVal);
                                HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in _ADOStream * This,
                                 VARIANT Source,
                                     ConnectModeEnum Mode,
                                     StreamOpenOptionsEnum Options,
                                     __RPC__in BSTR UserName,
                                     __RPC__in BSTR Password);
                                HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in _ADOStream * This);
                                HRESULT ( STDMETHODCALLTYPE *SkipLine )(
            __RPC__in _ADOStream * This);
                                HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in _ADOStream * This,
                       VARIANT Buffer);
                                HRESULT ( STDMETHODCALLTYPE *SetEOS )(
            __RPC__in _ADOStream * This);
                                HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            __RPC__in _ADOStream * This,
                       __RPC__in_opt _ADOStream *DestStream,
                                     ADO_LONGPTR CharNumber);
                                HRESULT ( STDMETHODCALLTYPE *Flush )(
            __RPC__in _ADOStream * This);
                                HRESULT ( STDMETHODCALLTYPE *SaveToFile )(
            __RPC__in _ADOStream * This,
                       __RPC__in BSTR FileName,
                                     SaveOptionsEnum Options);
                                HRESULT ( STDMETHODCALLTYPE *LoadFromFile )(
            __RPC__in _ADOStream * This,
                       __RPC__in BSTR FileName);
                                HRESULT ( STDMETHODCALLTYPE *ReadText )(
            __RPC__in _ADOStream * This,
                                     long NumChars,
                                __RPC__deref_out_opt BSTR *pbstr);
                                HRESULT ( STDMETHODCALLTYPE *WriteText )(
            __RPC__in _ADOStream * This,
                       __RPC__in BSTR Data,
                                     StreamWriteEnum Options);
                                HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in _ADOStream * This);
        END_INTERFACE
    } _StreamVtbl;
    interface _Stream
    {
        CONST_VTBL struct _StreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Size(This,pSize) )
    ( (This)->lpVtbl -> get_EOS(This,pEOS) )
    ( (This)->lpVtbl -> get_Position(This,pPos) )
    ( (This)->lpVtbl -> put_Position(This,Position) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> put_Type(This,Type) )
    ( (This)->lpVtbl -> get_LineSeparator(This,pLS) )
    ( (This)->lpVtbl -> put_LineSeparator(This,LineSeparator) )
    ( (This)->lpVtbl -> get_State(This,pState) )
    ( (This)->lpVtbl -> get_Mode(This,pMode) )
    ( (This)->lpVtbl -> put_Mode(This,Mode) )
    ( (This)->lpVtbl -> get_Charset(This,pbstrCharset) )
    ( (This)->lpVtbl -> put_Charset(This,Charset) )
    ( (This)->lpVtbl -> Read(This,NumBytes,pVal) )
    ( (This)->lpVtbl -> Open(This,Source,Mode,Options,UserName,Password) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> SkipLine(This) )
    ( (This)->lpVtbl -> Write(This,Buffer) )
    ( (This)->lpVtbl -> SetEOS(This) )
    ( (This)->lpVtbl -> CopyTo(This,DestStream,CharNumber) )
    ( (This)->lpVtbl -> Flush(This) )
    ( (This)->lpVtbl -> SaveToFile(This,FileName,Options) )
    ( (This)->lpVtbl -> LoadFromFile(This,FileName) )
    ( (This)->lpVtbl -> ReadText(This,NumChars,pbstr) )
    ( (This)->lpVtbl -> WriteText(This,Data,Options) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const CLSID CLSID_Stream;
Stream;
EXTERN_C const IID IID_ADORecordConstruction;
    typedef struct ADORecordConstructionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADORecordConstruction * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADORecordConstruction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADORecordConstruction * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADORecordConstruction * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADORecordConstruction * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADORecordConstruction * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADORecordConstruction * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Row )(
            __RPC__in ADORecordConstruction * This,
                                __RPC__deref_out_opt IUnknown **ppRow);
                        HRESULT ( STDMETHODCALLTYPE *put_Row )(
            __RPC__in ADORecordConstruction * This,
                       __RPC__in_opt IUnknown *pRow);
                        HRESULT ( STDMETHODCALLTYPE *put_ParentRow )(
            __RPC__in ADORecordConstruction * This,
                       __RPC__in_opt IUnknown *pRow);
        END_INTERFACE
    } ADORecordConstructionVtbl;
    interface ADORecordConstruction
    {
        CONST_VTBL struct ADORecordConstructionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Row(This,ppRow) )
    ( (This)->lpVtbl -> put_Row(This,pRow) )
    ( (This)->lpVtbl -> put_ParentRow(This,pRow) )
EXTERN_C const IID IID_ADOStreamConstruction;
    typedef struct ADOStreamConstructionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOStreamConstruction * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOStreamConstruction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOStreamConstruction * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOStreamConstruction * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOStreamConstruction * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOStreamConstruction * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOStreamConstruction * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Stream )(
            __RPC__in ADOStreamConstruction * This,
                                __RPC__deref_out_opt IUnknown **ppStm);
                        HRESULT ( STDMETHODCALLTYPE *put_Stream )(
            __RPC__in ADOStreamConstruction * This,
                       __RPC__in_opt IUnknown *pStm);
        END_INTERFACE
    } ADOStreamConstructionVtbl;
    interface ADOStreamConstruction
    {
        CONST_VTBL struct ADOStreamConstructionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Stream(This,ppStm) )
    ( (This)->lpVtbl -> put_Stream(This,pStm) )
EXTERN_C const IID IID_ADOCommandConstruction;
    typedef struct ADOCommandConstructionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOCommandConstruction * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOCommandConstruction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOCommandConstruction * This);
                        HRESULT ( STDMETHODCALLTYPE *get_OLEDBCommand )(
            __RPC__in ADOCommandConstruction * This,
                                __RPC__deref_out_opt IUnknown **ppOLEDBCommand);
                        HRESULT ( STDMETHODCALLTYPE *put_OLEDBCommand )(
            __RPC__in ADOCommandConstruction * This,
                       __RPC__in_opt IUnknown *pOLEDBCommand);
        END_INTERFACE
    } ADOCommandConstructionVtbl;
    interface ADOCommandConstruction
    {
        CONST_VTBL struct ADOCommandConstructionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_OLEDBCommand(This,ppOLEDBCommand) )
    ( (This)->lpVtbl -> put_OLEDBCommand(This,pOLEDBCommand) )
EXTERN_C const CLSID CLSID_Command;
Command;
EXTERN_C const CLSID CLSID_Recordset;
Recordset;
EXTERN_C const IID IID_Recordset15;
    typedef struct Recordset15Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Recordset15 * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Recordset15 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Recordset15 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Recordset15 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Recordset15 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Recordset15 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Recordset15 * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in Recordset15 * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_AbsolutePosition )(
            __RPC__in Recordset15 * This,
                                __RPC__out PositionEnum_Param *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_AbsolutePosition )(
            __RPC__in Recordset15 * This,
                       PositionEnum_Param Position);
                                            HRESULT ( STDMETHODCALLTYPE *putref_ActiveADOConnection )(
            __RPC__in Recordset15 * This,
                       __RPC__in_opt IDispatch *pconn);
                                         HRESULT ( STDMETHODCALLTYPE *put_ActiveConnection )(
            __RPC__in Recordset15 * This,
                       VARIANT vConn);
                                         HRESULT ( STDMETHODCALLTYPE *get_ActiveConnection )(
            __RPC__in Recordset15 * This,
                                __RPC__out VARIANT *pvar);
                                         HRESULT ( STDMETHODCALLTYPE *get_BOF )(
            __RPC__in Recordset15 * This,
                                __RPC__out VARIANT_BOOL *pb);
                                         HRESULT ( STDMETHODCALLTYPE *get_Bookmark )(
            __RPC__in Recordset15 * This,
                                __RPC__out VARIANT *pvBookmark);
                                         HRESULT ( STDMETHODCALLTYPE *put_Bookmark )(
            __RPC__in Recordset15 * This,
                       VARIANT vBookmark);
                                         HRESULT ( STDMETHODCALLTYPE *get_CacheSize )(
            __RPC__in Recordset15 * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_CacheSize )(
            __RPC__in Recordset15 * This,
                       long CacheSize);
                                         HRESULT ( STDMETHODCALLTYPE *get_CursorType )(
            __RPC__in Recordset15 * This,
                                __RPC__out CursorTypeEnum *plCursorType);
                                         HRESULT ( STDMETHODCALLTYPE *put_CursorType )(
            __RPC__in Recordset15 * This,
                       CursorTypeEnum lCursorType);
                                         HRESULT ( STDMETHODCALLTYPE *get_EOF )(
            __RPC__in Recordset15 * This,
                                __RPC__out VARIANT_BOOL *pb);
                                         HRESULT ( STDMETHODCALLTYPE *get_Fields )(
            __RPC__in Recordset15 * This,
                                __RPC__deref_out_opt ADOFields **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_LockType )(
            __RPC__in Recordset15 * This,
                                __RPC__out LockTypeEnum *plLockType);
                                         HRESULT ( STDMETHODCALLTYPE *put_LockType )(
            __RPC__in Recordset15 * This,
                       LockTypeEnum lLockType);
                                         HRESULT ( STDMETHODCALLTYPE *get_MaxRecords )(
            __RPC__in Recordset15 * This,
                                __RPC__out ADO_LONGPTR *plMaxRecords);
                                         HRESULT ( STDMETHODCALLTYPE *put_MaxRecords )(
            __RPC__in Recordset15 * This,
                       ADO_LONGPTR lMaxRecords);
                                         HRESULT ( STDMETHODCALLTYPE *get_RecordCount )(
            __RPC__in Recordset15 * This,
                                __RPC__out ADO_LONGPTR *pl);
                                            HRESULT ( STDMETHODCALLTYPE *putref_Source )(
            __RPC__in Recordset15 * This,
                       __RPC__in_opt IDispatch *pcmd);
                                         HRESULT ( STDMETHODCALLTYPE *put_Source )(
            __RPC__in Recordset15 * This,
                       __RPC__in BSTR bstrConn);
                                         HRESULT ( STDMETHODCALLTYPE *get_Source )(
            __RPC__in Recordset15 * This,
                                __RPC__out VARIANT *pvSource);
                                HRESULT ( STDMETHODCALLTYPE *AddNew )(
            __RPC__in Recordset15 * This,
                                 VARIANT FieldList,
                                 VARIANT Values);
                                HRESULT ( STDMETHODCALLTYPE *CancelUpdate )(
            __RPC__in Recordset15 * This);
                                HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in Recordset15 * This);
                                HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in Recordset15 * This,
                                     AffectEnum AffectRecords);
                                HRESULT ( STDMETHODCALLTYPE *GetRows )(
            __RPC__in Recordset15 * This,
                                     long Rows,
                                 VARIANT Start,
                                 VARIANT Fields,
                                __RPC__out VARIANT *pvar);
                                HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in Recordset15 * This,
                       ADO_LONGPTR NumRecords,
                                 VARIANT Start);
                                HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in Recordset15 * This);
                                HRESULT ( STDMETHODCALLTYPE *MovePrevious )(
            __RPC__in Recordset15 * This);
                                HRESULT ( STDMETHODCALLTYPE *MoveFirst )(
            __RPC__in Recordset15 * This);
                                HRESULT ( STDMETHODCALLTYPE *MoveLast )(
            __RPC__in Recordset15 * This);
                                HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in Recordset15 * This,
                                 VARIANT Source,
                                 VARIANT ActiveConnection,
                                     CursorTypeEnum CursorType,
                                     LockTypeEnum LockType,
                                     LONG Options);
                                HRESULT ( STDMETHODCALLTYPE *Requery )(
            __RPC__in Recordset15 * This,
                                     LONG Options);
                       HRESULT ( STDMETHODCALLTYPE *_xResync )(
            __RPC__in Recordset15 * This,
                                     AffectEnum AffectRecords);
                                HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in Recordset15 * This,
                                 VARIANT Fields,
                                 VARIANT Values);
                                         HRESULT ( STDMETHODCALLTYPE *get_AbsolutePage )(
            __RPC__in Recordset15 * This,
                                __RPC__out PositionEnum_Param *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_AbsolutePage )(
            __RPC__in Recordset15 * This,
                       PositionEnum_Param Page);
                                         HRESULT ( STDMETHODCALLTYPE *get_EditMode )(
            __RPC__in Recordset15 * This,
                                __RPC__out EditModeEnum *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_Filter )(
            __RPC__in Recordset15 * This,
                                __RPC__out VARIANT *Criteria);
                                         HRESULT ( STDMETHODCALLTYPE *put_Filter )(
            __RPC__in Recordset15 * This,
                       VARIANT Criteria);
                                         HRESULT ( STDMETHODCALLTYPE *get_PageCount )(
            __RPC__in Recordset15 * This,
                                __RPC__out ADO_LONGPTR *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_PageSize )(
            __RPC__in Recordset15 * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_PageSize )(
            __RPC__in Recordset15 * This,
                       long PageSize);
                                         HRESULT ( STDMETHODCALLTYPE *get_Sort )(
            __RPC__in Recordset15 * This,
                                __RPC__deref_out_opt BSTR *Criteria);
                                         HRESULT ( STDMETHODCALLTYPE *put_Sort )(
            __RPC__in Recordset15 * This,
                       __RPC__in BSTR Criteria);
                                         HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in Recordset15 * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in Recordset15 * This,
                                __RPC__out LONG *plObjState);
                       HRESULT ( STDMETHODCALLTYPE *_xClone )(
            __RPC__in Recordset15 * This,
                                __RPC__deref_out_opt _ADORecordset **ppvObject);
                                HRESULT ( STDMETHODCALLTYPE *UpdateBatch )(
            __RPC__in Recordset15 * This,
                                     AffectEnum AffectRecords);
                                HRESULT ( STDMETHODCALLTYPE *CancelBatch )(
            __RPC__in Recordset15 * This,
                                     AffectEnum AffectRecords);
                                         HRESULT ( STDMETHODCALLTYPE *get_CursorLocation )(
            __RPC__in Recordset15 * This,
                                __RPC__out CursorLocationEnum *plCursorLoc);
                                         HRESULT ( STDMETHODCALLTYPE *put_CursorLocation )(
            __RPC__in Recordset15 * This,
                       CursorLocationEnum lCursorLoc);
                                HRESULT ( STDMETHODCALLTYPE *NextADORecordset )(
            __RPC__in Recordset15 * This,
                                  __RPC__out VARIANT *RecordsAffected,
                                __RPC__deref_out_opt _ADORecordset **ppiRs);
                                HRESULT ( STDMETHODCALLTYPE *Supports )(
            __RPC__in Recordset15 * This,
                       CursorOptionEnum CursorOptions,
                                __RPC__out VARIANT_BOOL *pb);
                                    HRESULT ( STDMETHODCALLTYPE *get_Collect )(
            __RPC__in Recordset15 * This,
                       VARIANT Index,
                                __RPC__out VARIANT *pvar);
                                    HRESULT ( STDMETHODCALLTYPE *put_Collect )(
            __RPC__in Recordset15 * This,
                       VARIANT Index,
                       VARIANT value);
                                         HRESULT ( STDMETHODCALLTYPE *get_MarshalOptions )(
            __RPC__in Recordset15 * This,
                                __RPC__out MarshalOptionsEnum *peMarshal);
                                         HRESULT ( STDMETHODCALLTYPE *put_MarshalOptions )(
            __RPC__in Recordset15 * This,
                       MarshalOptionsEnum eMarshal);
                                HRESULT ( STDMETHODCALLTYPE *Find )(
            __RPC__in Recordset15 * This,
                       __RPC__in BSTR Criteria,
                                     ADO_LONGPTR SkipRecords,
                                     SearchDirectionEnum SearchDirection,
                                 VARIANT Start);
        END_INTERFACE
    } Recordset15Vtbl;
    interface Recordset15
    {
        CONST_VTBL struct Recordset15Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_AbsolutePosition(This,pl) )
    ( (This)->lpVtbl -> put_AbsolutePosition(This,Position) )
    ( (This)->lpVtbl -> putref_ActiveConnection(This,pconn) )
    ( (This)->lpVtbl -> put_ActiveConnection(This,vConn) )
    ( (This)->lpVtbl -> get_ActiveConnection(This,pvar) )
    ( (This)->lpVtbl -> get_BOF(This,pb) )
    ( (This)->lpVtbl -> get_Bookmark(This,pvBookmark) )
    ( (This)->lpVtbl -> put_Bookmark(This,vBookmark) )
    ( (This)->lpVtbl -> get_CacheSize(This,pl) )
    ( (This)->lpVtbl -> put_CacheSize(This,CacheSize) )
    ( (This)->lpVtbl -> get_CursorType(This,plCursorType) )
    ( (This)->lpVtbl -> put_CursorType(This,lCursorType) )
    ( (This)->lpVtbl -> get_EOF(This,pb) )
    ( (This)->lpVtbl -> get_Fields(This,ppvObject) )
    ( (This)->lpVtbl -> get_LockType(This,plLockType) )
    ( (This)->lpVtbl -> put_LockType(This,lLockType) )
    ( (This)->lpVtbl -> get_MaxRecords(This,plMaxRecords) )
    ( (This)->lpVtbl -> put_MaxRecords(This,lMaxRecords) )
    ( (This)->lpVtbl -> get_RecordCount(This,pl) )
    ( (This)->lpVtbl -> putref_Source(This,pcmd) )
    ( (This)->lpVtbl -> put_Source(This,bstrConn) )
    ( (This)->lpVtbl -> get_Source(This,pvSource) )
    ( (This)->lpVtbl -> AddNew(This,FieldList,Values) )
    ( (This)->lpVtbl -> CancelUpdate(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Delete(This,AffectRecords) )
    ( (This)->lpVtbl -> GetRows(This,Rows,Start,Fields,pvar) )
    ( (This)->lpVtbl -> Move(This,NumRecords,Start) )
    ( (This)->lpVtbl -> MoveNext(This) )
    ( (This)->lpVtbl -> MovePrevious(This) )
    ( (This)->lpVtbl -> MoveFirst(This) )
    ( (This)->lpVtbl -> MoveLast(This) )
    ( (This)->lpVtbl -> Open(This,Source,ActiveConnection,CursorType,LockType,Options) )
    ( (This)->lpVtbl -> Requery(This,Options) )
    ( (This)->lpVtbl -> _xResync(This,AffectRecords) )
    ( (This)->lpVtbl -> Update(This,Fields,Values) )
    ( (This)->lpVtbl -> get_AbsolutePage(This,pl) )
    ( (This)->lpVtbl -> put_AbsolutePage(This,Page) )
    ( (This)->lpVtbl -> get_EditMode(This,pl) )
    ( (This)->lpVtbl -> get_Filter(This,Criteria) )
    ( (This)->lpVtbl -> put_Filter(This,Criteria) )
    ( (This)->lpVtbl -> get_PageCount(This,pl) )
    ( (This)->lpVtbl -> get_PageSize(This,pl) )
    ( (This)->lpVtbl -> put_PageSize(This,PageSize) )
    ( (This)->lpVtbl -> get_Sort(This,Criteria) )
    ( (This)->lpVtbl -> put_Sort(This,Criteria) )
    ( (This)->lpVtbl -> get_Status(This,pl) )
    ( (This)->lpVtbl -> get_State(This,plObjState) )
    ( (This)->lpVtbl -> _xClone(This,ppvObject) )
    ( (This)->lpVtbl -> UpdateBatch(This,AffectRecords) )
    ( (This)->lpVtbl -> CancelBatch(This,AffectRecords) )
    ( (This)->lpVtbl -> get_CursorLocation(This,plCursorLoc) )
    ( (This)->lpVtbl -> put_CursorLocation(This,lCursorLoc) )
    ( (This)->lpVtbl -> NextRecordset(This,RecordsAffected,ppiRs) )
    ( (This)->lpVtbl -> Supports(This,CursorOptions,pb) )
    ( (This)->lpVtbl -> get_Collect(This,Index,pvar) )
    ( (This)->lpVtbl -> put_Collect(This,Index,value) )
    ( (This)->lpVtbl -> get_MarshalOptions(This,peMarshal) )
    ( (This)->lpVtbl -> put_MarshalOptions(This,eMarshal) )
    ( (This)->lpVtbl -> Find(This,Criteria,SkipRecords,SearchDirection,Start) )
EXTERN_C const IID IID_Recordset20;
    typedef struct Recordset20Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Recordset20 * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Recordset20 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Recordset20 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Recordset20 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Recordset20 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Recordset20 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Recordset20 * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in Recordset20 * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_AbsolutePosition )(
            __RPC__in Recordset20 * This,
                                __RPC__out PositionEnum_Param *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_AbsolutePosition )(
            __RPC__in Recordset20 * This,
                       PositionEnum_Param Position);
                                            HRESULT ( STDMETHODCALLTYPE *putref_ActiveADOConnection )(
            __RPC__in Recordset20 * This,
                       __RPC__in_opt IDispatch *pconn);
                                         HRESULT ( STDMETHODCALLTYPE *put_ActiveConnection )(
            __RPC__in Recordset20 * This,
                       VARIANT vConn);
                                         HRESULT ( STDMETHODCALLTYPE *get_ActiveConnection )(
            __RPC__in Recordset20 * This,
                                __RPC__out VARIANT *pvar);
                                         HRESULT ( STDMETHODCALLTYPE *get_BOF )(
            __RPC__in Recordset20 * This,
                                __RPC__out VARIANT_BOOL *pb);
                                         HRESULT ( STDMETHODCALLTYPE *get_Bookmark )(
            __RPC__in Recordset20 * This,
                                __RPC__out VARIANT *pvBookmark);
                                         HRESULT ( STDMETHODCALLTYPE *put_Bookmark )(
            __RPC__in Recordset20 * This,
                       VARIANT vBookmark);
                                         HRESULT ( STDMETHODCALLTYPE *get_CacheSize )(
            __RPC__in Recordset20 * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_CacheSize )(
            __RPC__in Recordset20 * This,
                       long CacheSize);
                                         HRESULT ( STDMETHODCALLTYPE *get_CursorType )(
            __RPC__in Recordset20 * This,
                                __RPC__out CursorTypeEnum *plCursorType);
                                         HRESULT ( STDMETHODCALLTYPE *put_CursorType )(
            __RPC__in Recordset20 * This,
                       CursorTypeEnum lCursorType);
                                         HRESULT ( STDMETHODCALLTYPE *get_EOF )(
            __RPC__in Recordset20 * This,
                                __RPC__out VARIANT_BOOL *pb);
                                         HRESULT ( STDMETHODCALLTYPE *get_Fields )(
            __RPC__in Recordset20 * This,
                                __RPC__deref_out_opt ADOFields **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_LockType )(
            __RPC__in Recordset20 * This,
                                __RPC__out LockTypeEnum *plLockType);
                                         HRESULT ( STDMETHODCALLTYPE *put_LockType )(
            __RPC__in Recordset20 * This,
                       LockTypeEnum lLockType);
                                         HRESULT ( STDMETHODCALLTYPE *get_MaxRecords )(
            __RPC__in Recordset20 * This,
                                __RPC__out ADO_LONGPTR *plMaxRecords);
                                         HRESULT ( STDMETHODCALLTYPE *put_MaxRecords )(
            __RPC__in Recordset20 * This,
                       ADO_LONGPTR lMaxRecords);
                                         HRESULT ( STDMETHODCALLTYPE *get_RecordCount )(
            __RPC__in Recordset20 * This,
                                __RPC__out ADO_LONGPTR *pl);
                                            HRESULT ( STDMETHODCALLTYPE *putref_Source )(
            __RPC__in Recordset20 * This,
                       __RPC__in_opt IDispatch *pcmd);
                                         HRESULT ( STDMETHODCALLTYPE *put_Source )(
            __RPC__in Recordset20 * This,
                       __RPC__in BSTR bstrConn);
                                         HRESULT ( STDMETHODCALLTYPE *get_Source )(
            __RPC__in Recordset20 * This,
                                __RPC__out VARIANT *pvSource);
                                HRESULT ( STDMETHODCALLTYPE *AddNew )(
            __RPC__in Recordset20 * This,
                                 VARIANT FieldList,
                                 VARIANT Values);
                                HRESULT ( STDMETHODCALLTYPE *CancelUpdate )(
            __RPC__in Recordset20 * This);
                                HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in Recordset20 * This);
                                HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in Recordset20 * This,
                                     AffectEnum AffectRecords);
                                HRESULT ( STDMETHODCALLTYPE *GetRows )(
            __RPC__in Recordset20 * This,
                                     long Rows,
                                 VARIANT Start,
                                 VARIANT Fields,
                                __RPC__out VARIANT *pvar);
                                HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in Recordset20 * This,
                       ADO_LONGPTR NumRecords,
                                 VARIANT Start);
                                HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in Recordset20 * This);
                                HRESULT ( STDMETHODCALLTYPE *MovePrevious )(
            __RPC__in Recordset20 * This);
                                HRESULT ( STDMETHODCALLTYPE *MoveFirst )(
            __RPC__in Recordset20 * This);
                                HRESULT ( STDMETHODCALLTYPE *MoveLast )(
            __RPC__in Recordset20 * This);
                                HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in Recordset20 * This,
                                 VARIANT Source,
                                 VARIANT ActiveConnection,
                                     CursorTypeEnum CursorType,
                                     LockTypeEnum LockType,
                                     LONG Options);
                                HRESULT ( STDMETHODCALLTYPE *Requery )(
            __RPC__in Recordset20 * This,
                                     LONG Options);
                       HRESULT ( STDMETHODCALLTYPE *_xResync )(
            __RPC__in Recordset20 * This,
                                     AffectEnum AffectRecords);
                                HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in Recordset20 * This,
                                 VARIANT Fields,
                                 VARIANT Values);
                                         HRESULT ( STDMETHODCALLTYPE *get_AbsolutePage )(
            __RPC__in Recordset20 * This,
                                __RPC__out PositionEnum_Param *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_AbsolutePage )(
            __RPC__in Recordset20 * This,
                       PositionEnum_Param Page);
                                         HRESULT ( STDMETHODCALLTYPE *get_EditMode )(
            __RPC__in Recordset20 * This,
                                __RPC__out EditModeEnum *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_Filter )(
            __RPC__in Recordset20 * This,
                                __RPC__out VARIANT *Criteria);
                                         HRESULT ( STDMETHODCALLTYPE *put_Filter )(
            __RPC__in Recordset20 * This,
                       VARIANT Criteria);
                                         HRESULT ( STDMETHODCALLTYPE *get_PageCount )(
            __RPC__in Recordset20 * This,
                                __RPC__out ADO_LONGPTR *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_PageSize )(
            __RPC__in Recordset20 * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_PageSize )(
            __RPC__in Recordset20 * This,
                       long PageSize);
                                         HRESULT ( STDMETHODCALLTYPE *get_Sort )(
            __RPC__in Recordset20 * This,
                                __RPC__deref_out_opt BSTR *Criteria);
                                         HRESULT ( STDMETHODCALLTYPE *put_Sort )(
            __RPC__in Recordset20 * This,
                       __RPC__in BSTR Criteria);
                                         HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in Recordset20 * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in Recordset20 * This,
                                __RPC__out LONG *plObjState);
                       HRESULT ( STDMETHODCALLTYPE *_xClone )(
            __RPC__in Recordset20 * This,
                                __RPC__deref_out_opt _ADORecordset **ppvObject);
                                HRESULT ( STDMETHODCALLTYPE *UpdateBatch )(
            __RPC__in Recordset20 * This,
                                     AffectEnum AffectRecords);
                                HRESULT ( STDMETHODCALLTYPE *CancelBatch )(
            __RPC__in Recordset20 * This,
                                     AffectEnum AffectRecords);
                                         HRESULT ( STDMETHODCALLTYPE *get_CursorLocation )(
            __RPC__in Recordset20 * This,
                                __RPC__out CursorLocationEnum *plCursorLoc);
                                         HRESULT ( STDMETHODCALLTYPE *put_CursorLocation )(
            __RPC__in Recordset20 * This,
                       CursorLocationEnum lCursorLoc);
                                HRESULT ( STDMETHODCALLTYPE *NextADORecordset )(
            __RPC__in Recordset20 * This,
                                  __RPC__out VARIANT *RecordsAffected,
                                __RPC__deref_out_opt _ADORecordset **ppiRs);
                                HRESULT ( STDMETHODCALLTYPE *Supports )(
            __RPC__in Recordset20 * This,
                       CursorOptionEnum CursorOptions,
                                __RPC__out VARIANT_BOOL *pb);
                                    HRESULT ( STDMETHODCALLTYPE *get_Collect )(
            __RPC__in Recordset20 * This,
                       VARIANT Index,
                                __RPC__out VARIANT *pvar);
                                    HRESULT ( STDMETHODCALLTYPE *put_Collect )(
            __RPC__in Recordset20 * This,
                       VARIANT Index,
                       VARIANT value);
                                         HRESULT ( STDMETHODCALLTYPE *get_MarshalOptions )(
            __RPC__in Recordset20 * This,
                                __RPC__out MarshalOptionsEnum *peMarshal);
                                         HRESULT ( STDMETHODCALLTYPE *put_MarshalOptions )(
            __RPC__in Recordset20 * This,
                       MarshalOptionsEnum eMarshal);
                                HRESULT ( STDMETHODCALLTYPE *Find )(
            __RPC__in Recordset20 * This,
                       __RPC__in BSTR Criteria,
                                     ADO_LONGPTR SkipRecords,
                                     SearchDirectionEnum SearchDirection,
                                 VARIANT Start);
                                HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in Recordset20 * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_DataSource )(
            __RPC__in Recordset20 * This,
                                __RPC__deref_out_opt IUnknown **ppunkDataSource);
                                            HRESULT ( STDMETHODCALLTYPE *putref_DataSource )(
            __RPC__in Recordset20 * This,
                       __RPC__in_opt IUnknown *punkDataSource);
                       HRESULT ( STDMETHODCALLTYPE *_xSave )(
            __RPC__in Recordset20 * This,
                                     __RPC__in BSTR FileName,
                                     PersistFormatEnum PersistFormat);
                                         HRESULT ( STDMETHODCALLTYPE *get_ActiveCommand )(
            __RPC__in Recordset20 * This,
                                __RPC__deref_out_opt IDispatch **ppCmd);
                                         HRESULT ( STDMETHODCALLTYPE *put_StayInSync )(
            __RPC__in Recordset20 * This,
                       VARIANT_BOOL bStayInSync);
                                         HRESULT ( STDMETHODCALLTYPE *get_StayInSync )(
            __RPC__in Recordset20 * This,
                                __RPC__out VARIANT_BOOL *pbStayInSync);
                                HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in Recordset20 * This,
                                     StringFormatEnum StringFormat,
                                     long NumRows,
                                     __RPC__in BSTR ColumnDelimeter,
                                     __RPC__in BSTR RowDelimeter,
                                     __RPC__in BSTR NullExpr,
                                __RPC__deref_out_opt BSTR *pRetString);
                                         HRESULT ( STDMETHODCALLTYPE *get_DataMember )(
            __RPC__in Recordset20 * This,
                                __RPC__deref_out_opt BSTR *pbstrDataMember);
                                         HRESULT ( STDMETHODCALLTYPE *put_DataMember )(
            __RPC__in Recordset20 * This,
                       __RPC__in BSTR bstrDataMember);
                                HRESULT ( STDMETHODCALLTYPE *CompareBookmarks )(
            __RPC__in Recordset20 * This,
                       VARIANT Bookmark1,
                       VARIANT Bookmark2,
                                __RPC__out CompareEnum *pCompare);
                                HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in Recordset20 * This,
                                     LockTypeEnum LockType,
                                __RPC__deref_out_opt _ADORecordset **ppvObject);
                                HRESULT ( STDMETHODCALLTYPE *Resync )(
            __RPC__in Recordset20 * This,
                                     AffectEnum AffectRecords,
                                     ResyncEnum ResyncValues);
        END_INTERFACE
    } Recordset20Vtbl;
    interface Recordset20
    {
        CONST_VTBL struct Recordset20Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_AbsolutePosition(This,pl) )
    ( (This)->lpVtbl -> put_AbsolutePosition(This,Position) )
    ( (This)->lpVtbl -> putref_ActiveConnection(This,pconn) )
    ( (This)->lpVtbl -> put_ActiveConnection(This,vConn) )
    ( (This)->lpVtbl -> get_ActiveConnection(This,pvar) )
    ( (This)->lpVtbl -> get_BOF(This,pb) )
    ( (This)->lpVtbl -> get_Bookmark(This,pvBookmark) )
    ( (This)->lpVtbl -> put_Bookmark(This,vBookmark) )
    ( (This)->lpVtbl -> get_CacheSize(This,pl) )
    ( (This)->lpVtbl -> put_CacheSize(This,CacheSize) )
    ( (This)->lpVtbl -> get_CursorType(This,plCursorType) )
    ( (This)->lpVtbl -> put_CursorType(This,lCursorType) )
    ( (This)->lpVtbl -> get_EOF(This,pb) )
    ( (This)->lpVtbl -> get_Fields(This,ppvObject) )
    ( (This)->lpVtbl -> get_LockType(This,plLockType) )
    ( (This)->lpVtbl -> put_LockType(This,lLockType) )
    ( (This)->lpVtbl -> get_MaxRecords(This,plMaxRecords) )
    ( (This)->lpVtbl -> put_MaxRecords(This,lMaxRecords) )
    ( (This)->lpVtbl -> get_RecordCount(This,pl) )
    ( (This)->lpVtbl -> putref_Source(This,pcmd) )
    ( (This)->lpVtbl -> put_Source(This,bstrConn) )
    ( (This)->lpVtbl -> get_Source(This,pvSource) )
    ( (This)->lpVtbl -> AddNew(This,FieldList,Values) )
    ( (This)->lpVtbl -> CancelUpdate(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Delete(This,AffectRecords) )
    ( (This)->lpVtbl -> GetRows(This,Rows,Start,Fields,pvar) )
    ( (This)->lpVtbl -> Move(This,NumRecords,Start) )
    ( (This)->lpVtbl -> MoveNext(This) )
    ( (This)->lpVtbl -> MovePrevious(This) )
    ( (This)->lpVtbl -> MoveFirst(This) )
    ( (This)->lpVtbl -> MoveLast(This) )
    ( (This)->lpVtbl -> Open(This,Source,ActiveConnection,CursorType,LockType,Options) )
    ( (This)->lpVtbl -> Requery(This,Options) )
    ( (This)->lpVtbl -> _xResync(This,AffectRecords) )
    ( (This)->lpVtbl -> Update(This,Fields,Values) )
    ( (This)->lpVtbl -> get_AbsolutePage(This,pl) )
    ( (This)->lpVtbl -> put_AbsolutePage(This,Page) )
    ( (This)->lpVtbl -> get_EditMode(This,pl) )
    ( (This)->lpVtbl -> get_Filter(This,Criteria) )
    ( (This)->lpVtbl -> put_Filter(This,Criteria) )
    ( (This)->lpVtbl -> get_PageCount(This,pl) )
    ( (This)->lpVtbl -> get_PageSize(This,pl) )
    ( (This)->lpVtbl -> put_PageSize(This,PageSize) )
    ( (This)->lpVtbl -> get_Sort(This,Criteria) )
    ( (This)->lpVtbl -> put_Sort(This,Criteria) )
    ( (This)->lpVtbl -> get_Status(This,pl) )
    ( (This)->lpVtbl -> get_State(This,plObjState) )
    ( (This)->lpVtbl -> _xClone(This,ppvObject) )
    ( (This)->lpVtbl -> UpdateBatch(This,AffectRecords) )
    ( (This)->lpVtbl -> CancelBatch(This,AffectRecords) )
    ( (This)->lpVtbl -> get_CursorLocation(This,plCursorLoc) )
    ( (This)->lpVtbl -> put_CursorLocation(This,lCursorLoc) )
    ( (This)->lpVtbl -> NextRecordset(This,RecordsAffected,ppiRs) )
    ( (This)->lpVtbl -> Supports(This,CursorOptions,pb) )
    ( (This)->lpVtbl -> get_Collect(This,Index,pvar) )
    ( (This)->lpVtbl -> put_Collect(This,Index,value) )
    ( (This)->lpVtbl -> get_MarshalOptions(This,peMarshal) )
    ( (This)->lpVtbl -> put_MarshalOptions(This,eMarshal) )
    ( (This)->lpVtbl -> Find(This,Criteria,SkipRecords,SearchDirection,Start) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> get_DataSource(This,ppunkDataSource) )
    ( (This)->lpVtbl -> putref_DataSource(This,punkDataSource) )
    ( (This)->lpVtbl -> _xSave(This,FileName,PersistFormat) )
    ( (This)->lpVtbl -> get_ActiveCommand(This,ppCmd) )
    ( (This)->lpVtbl -> put_StayInSync(This,bStayInSync) )
    ( (This)->lpVtbl -> get_StayInSync(This,pbStayInSync) )
    ( (This)->lpVtbl -> GetString(This,StringFormat,NumRows,ColumnDelimeter,RowDelimeter,NullExpr,pRetString) )
    ( (This)->lpVtbl -> get_DataMember(This,pbstrDataMember) )
    ( (This)->lpVtbl -> put_DataMember(This,bstrDataMember) )
    ( (This)->lpVtbl -> CompareBookmarks(This,Bookmark1,Bookmark2,pCompare) )
    ( (This)->lpVtbl -> Clone(This,LockType,ppvObject) )
    ( (This)->lpVtbl -> Resync(This,AffectRecords,ResyncValues) )
EXTERN_C const IID IID_Recordset21;
    typedef struct Recordset21Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Recordset21 * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Recordset21 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Recordset21 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Recordset21 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Recordset21 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Recordset21 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Recordset21 * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in Recordset21 * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_AbsolutePosition )(
            __RPC__in Recordset21 * This,
                                __RPC__out PositionEnum_Param *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_AbsolutePosition )(
            __RPC__in Recordset21 * This,
                       PositionEnum_Param Position);
                                            HRESULT ( STDMETHODCALLTYPE *putref_ActiveADOConnection )(
            __RPC__in Recordset21 * This,
                       __RPC__in_opt IDispatch *pconn);
                                         HRESULT ( STDMETHODCALLTYPE *put_ActiveConnection )(
            __RPC__in Recordset21 * This,
                       VARIANT vConn);
                                         HRESULT ( STDMETHODCALLTYPE *get_ActiveConnection )(
            __RPC__in Recordset21 * This,
                                __RPC__out VARIANT *pvar);
                                         HRESULT ( STDMETHODCALLTYPE *get_BOF )(
            __RPC__in Recordset21 * This,
                                __RPC__out VARIANT_BOOL *pb);
                                         HRESULT ( STDMETHODCALLTYPE *get_Bookmark )(
            __RPC__in Recordset21 * This,
                                __RPC__out VARIANT *pvBookmark);
                                         HRESULT ( STDMETHODCALLTYPE *put_Bookmark )(
            __RPC__in Recordset21 * This,
                       VARIANT vBookmark);
                                         HRESULT ( STDMETHODCALLTYPE *get_CacheSize )(
            __RPC__in Recordset21 * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_CacheSize )(
            __RPC__in Recordset21 * This,
                       long CacheSize);
                                         HRESULT ( STDMETHODCALLTYPE *get_CursorType )(
            __RPC__in Recordset21 * This,
                                __RPC__out CursorTypeEnum *plCursorType);
                                         HRESULT ( STDMETHODCALLTYPE *put_CursorType )(
            __RPC__in Recordset21 * This,
                       CursorTypeEnum lCursorType);
                                         HRESULT ( STDMETHODCALLTYPE *get_EOF )(
            __RPC__in Recordset21 * This,
                                __RPC__out VARIANT_BOOL *pb);
                                         HRESULT ( STDMETHODCALLTYPE *get_Fields )(
            __RPC__in Recordset21 * This,
                                __RPC__deref_out_opt ADOFields **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_LockType )(
            __RPC__in Recordset21 * This,
                                __RPC__out LockTypeEnum *plLockType);
                                         HRESULT ( STDMETHODCALLTYPE *put_LockType )(
            __RPC__in Recordset21 * This,
                       LockTypeEnum lLockType);
                                         HRESULT ( STDMETHODCALLTYPE *get_MaxRecords )(
            __RPC__in Recordset21 * This,
                                __RPC__out ADO_LONGPTR *plMaxRecords);
                                         HRESULT ( STDMETHODCALLTYPE *put_MaxRecords )(
            __RPC__in Recordset21 * This,
                       ADO_LONGPTR lMaxRecords);
                                         HRESULT ( STDMETHODCALLTYPE *get_RecordCount )(
            __RPC__in Recordset21 * This,
                                __RPC__out ADO_LONGPTR *pl);
                                            HRESULT ( STDMETHODCALLTYPE *putref_Source )(
            __RPC__in Recordset21 * This,
                       __RPC__in_opt IDispatch *pcmd);
                                         HRESULT ( STDMETHODCALLTYPE *put_Source )(
            __RPC__in Recordset21 * This,
                       __RPC__in BSTR bstrConn);
                                         HRESULT ( STDMETHODCALLTYPE *get_Source )(
            __RPC__in Recordset21 * This,
                                __RPC__out VARIANT *pvSource);
                                HRESULT ( STDMETHODCALLTYPE *AddNew )(
            __RPC__in Recordset21 * This,
                                 VARIANT FieldList,
                                 VARIANT Values);
                                HRESULT ( STDMETHODCALLTYPE *CancelUpdate )(
            __RPC__in Recordset21 * This);
                                HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in Recordset21 * This);
                                HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in Recordset21 * This,
                                     AffectEnum AffectRecords);
                                HRESULT ( STDMETHODCALLTYPE *GetRows )(
            __RPC__in Recordset21 * This,
                                     long Rows,
                                 VARIANT Start,
                                 VARIANT Fields,
                                __RPC__out VARIANT *pvar);
                                HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in Recordset21 * This,
                       ADO_LONGPTR NumRecords,
                                 VARIANT Start);
                                HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in Recordset21 * This);
                                HRESULT ( STDMETHODCALLTYPE *MovePrevious )(
            __RPC__in Recordset21 * This);
                                HRESULT ( STDMETHODCALLTYPE *MoveFirst )(
            __RPC__in Recordset21 * This);
                                HRESULT ( STDMETHODCALLTYPE *MoveLast )(
            __RPC__in Recordset21 * This);
                                HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in Recordset21 * This,
                                 VARIANT Source,
                                 VARIANT ActiveConnection,
                                     CursorTypeEnum CursorType,
                                     LockTypeEnum LockType,
                                     LONG Options);
                                HRESULT ( STDMETHODCALLTYPE *Requery )(
            __RPC__in Recordset21 * This,
                                     LONG Options);
                       HRESULT ( STDMETHODCALLTYPE *_xResync )(
            __RPC__in Recordset21 * This,
                                     AffectEnum AffectRecords);
                                HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in Recordset21 * This,
                                 VARIANT Fields,
                                 VARIANT Values);
                                         HRESULT ( STDMETHODCALLTYPE *get_AbsolutePage )(
            __RPC__in Recordset21 * This,
                                __RPC__out PositionEnum_Param *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_AbsolutePage )(
            __RPC__in Recordset21 * This,
                       PositionEnum_Param Page);
                                         HRESULT ( STDMETHODCALLTYPE *get_EditMode )(
            __RPC__in Recordset21 * This,
                                __RPC__out EditModeEnum *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_Filter )(
            __RPC__in Recordset21 * This,
                                __RPC__out VARIANT *Criteria);
                                         HRESULT ( STDMETHODCALLTYPE *put_Filter )(
            __RPC__in Recordset21 * This,
                       VARIANT Criteria);
                                         HRESULT ( STDMETHODCALLTYPE *get_PageCount )(
            __RPC__in Recordset21 * This,
                                __RPC__out ADO_LONGPTR *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_PageSize )(
            __RPC__in Recordset21 * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_PageSize )(
            __RPC__in Recordset21 * This,
                       long PageSize);
                                         HRESULT ( STDMETHODCALLTYPE *get_Sort )(
            __RPC__in Recordset21 * This,
                                __RPC__deref_out_opt BSTR *Criteria);
                                         HRESULT ( STDMETHODCALLTYPE *put_Sort )(
            __RPC__in Recordset21 * This,
                       __RPC__in BSTR Criteria);
                                         HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in Recordset21 * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in Recordset21 * This,
                                __RPC__out LONG *plObjState);
                       HRESULT ( STDMETHODCALLTYPE *_xClone )(
            __RPC__in Recordset21 * This,
                                __RPC__deref_out_opt _ADORecordset **ppvObject);
                                HRESULT ( STDMETHODCALLTYPE *UpdateBatch )(
            __RPC__in Recordset21 * This,
                                     AffectEnum AffectRecords);
                                HRESULT ( STDMETHODCALLTYPE *CancelBatch )(
            __RPC__in Recordset21 * This,
                                     AffectEnum AffectRecords);
                                         HRESULT ( STDMETHODCALLTYPE *get_CursorLocation )(
            __RPC__in Recordset21 * This,
                                __RPC__out CursorLocationEnum *plCursorLoc);
                                         HRESULT ( STDMETHODCALLTYPE *put_CursorLocation )(
            __RPC__in Recordset21 * This,
                       CursorLocationEnum lCursorLoc);
                                HRESULT ( STDMETHODCALLTYPE *NextADORecordset )(
            __RPC__in Recordset21 * This,
                                  __RPC__out VARIANT *RecordsAffected,
                                __RPC__deref_out_opt _ADORecordset **ppiRs);
                                HRESULT ( STDMETHODCALLTYPE *Supports )(
            __RPC__in Recordset21 * This,
                       CursorOptionEnum CursorOptions,
                                __RPC__out VARIANT_BOOL *pb);
                                    HRESULT ( STDMETHODCALLTYPE *get_Collect )(
            __RPC__in Recordset21 * This,
                       VARIANT Index,
                                __RPC__out VARIANT *pvar);
                                    HRESULT ( STDMETHODCALLTYPE *put_Collect )(
            __RPC__in Recordset21 * This,
                       VARIANT Index,
                       VARIANT value);
                                         HRESULT ( STDMETHODCALLTYPE *get_MarshalOptions )(
            __RPC__in Recordset21 * This,
                                __RPC__out MarshalOptionsEnum *peMarshal);
                                         HRESULT ( STDMETHODCALLTYPE *put_MarshalOptions )(
            __RPC__in Recordset21 * This,
                       MarshalOptionsEnum eMarshal);
                                HRESULT ( STDMETHODCALLTYPE *Find )(
            __RPC__in Recordset21 * This,
                       __RPC__in BSTR Criteria,
                                     ADO_LONGPTR SkipRecords,
                                     SearchDirectionEnum SearchDirection,
                                 VARIANT Start);
                                HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in Recordset21 * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_DataSource )(
            __RPC__in Recordset21 * This,
                                __RPC__deref_out_opt IUnknown **ppunkDataSource);
                                            HRESULT ( STDMETHODCALLTYPE *putref_DataSource )(
            __RPC__in Recordset21 * This,
                       __RPC__in_opt IUnknown *punkDataSource);
                       HRESULT ( STDMETHODCALLTYPE *_xSave )(
            __RPC__in Recordset21 * This,
                                     __RPC__in BSTR FileName,
                                     PersistFormatEnum PersistFormat);
                                         HRESULT ( STDMETHODCALLTYPE *get_ActiveCommand )(
            __RPC__in Recordset21 * This,
                                __RPC__deref_out_opt IDispatch **ppCmd);
                                         HRESULT ( STDMETHODCALLTYPE *put_StayInSync )(
            __RPC__in Recordset21 * This,
                       VARIANT_BOOL bStayInSync);
                                         HRESULT ( STDMETHODCALLTYPE *get_StayInSync )(
            __RPC__in Recordset21 * This,
                                __RPC__out VARIANT_BOOL *pbStayInSync);
                                HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in Recordset21 * This,
                                     StringFormatEnum StringFormat,
                                     long NumRows,
                                     __RPC__in BSTR ColumnDelimeter,
                                     __RPC__in BSTR RowDelimeter,
                                     __RPC__in BSTR NullExpr,
                                __RPC__deref_out_opt BSTR *pRetString);
                                         HRESULT ( STDMETHODCALLTYPE *get_DataMember )(
            __RPC__in Recordset21 * This,
                                __RPC__deref_out_opt BSTR *pbstrDataMember);
                                         HRESULT ( STDMETHODCALLTYPE *put_DataMember )(
            __RPC__in Recordset21 * This,
                       __RPC__in BSTR bstrDataMember);
                                HRESULT ( STDMETHODCALLTYPE *CompareBookmarks )(
            __RPC__in Recordset21 * This,
                       VARIANT Bookmark1,
                       VARIANT Bookmark2,
                                __RPC__out CompareEnum *pCompare);
                                HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in Recordset21 * This,
                                     LockTypeEnum LockType,
                                __RPC__deref_out_opt _ADORecordset **ppvObject);
                                HRESULT ( STDMETHODCALLTYPE *Resync )(
            __RPC__in Recordset21 * This,
                                     AffectEnum AffectRecords,
                                     ResyncEnum ResyncValues);
                                HRESULT ( STDMETHODCALLTYPE *Seek )(
            __RPC__in Recordset21 * This,
                       VARIANT KeyValues,
                                     SeekEnum SeekOption);
                                         HRESULT ( STDMETHODCALLTYPE *put_Index )(
            __RPC__in Recordset21 * This,
                       __RPC__in BSTR Index);
                                         HRESULT ( STDMETHODCALLTYPE *get_Index )(
            __RPC__in Recordset21 * This,
                                __RPC__deref_out_opt BSTR *pbstrIndex);
        END_INTERFACE
    } Recordset21Vtbl;
    interface Recordset21
    {
        CONST_VTBL struct Recordset21Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_AbsolutePosition(This,pl) )
    ( (This)->lpVtbl -> put_AbsolutePosition(This,Position) )
    ( (This)->lpVtbl -> putref_ActiveConnection(This,pconn) )
    ( (This)->lpVtbl -> put_ActiveConnection(This,vConn) )
    ( (This)->lpVtbl -> get_ActiveConnection(This,pvar) )
    ( (This)->lpVtbl -> get_BOF(This,pb) )
    ( (This)->lpVtbl -> get_Bookmark(This,pvBookmark) )
    ( (This)->lpVtbl -> put_Bookmark(This,vBookmark) )
    ( (This)->lpVtbl -> get_CacheSize(This,pl) )
    ( (This)->lpVtbl -> put_CacheSize(This,CacheSize) )
    ( (This)->lpVtbl -> get_CursorType(This,plCursorType) )
    ( (This)->lpVtbl -> put_CursorType(This,lCursorType) )
    ( (This)->lpVtbl -> get_EOF(This,pb) )
    ( (This)->lpVtbl -> get_Fields(This,ppvObject) )
    ( (This)->lpVtbl -> get_LockType(This,plLockType) )
    ( (This)->lpVtbl -> put_LockType(This,lLockType) )
    ( (This)->lpVtbl -> get_MaxRecords(This,plMaxRecords) )
    ( (This)->lpVtbl -> put_MaxRecords(This,lMaxRecords) )
    ( (This)->lpVtbl -> get_RecordCount(This,pl) )
    ( (This)->lpVtbl -> putref_Source(This,pcmd) )
    ( (This)->lpVtbl -> put_Source(This,bstrConn) )
    ( (This)->lpVtbl -> get_Source(This,pvSource) )
    ( (This)->lpVtbl -> AddNew(This,FieldList,Values) )
    ( (This)->lpVtbl -> CancelUpdate(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Delete(This,AffectRecords) )
    ( (This)->lpVtbl -> GetRows(This,Rows,Start,Fields,pvar) )
    ( (This)->lpVtbl -> Move(This,NumRecords,Start) )
    ( (This)->lpVtbl -> MoveNext(This) )
    ( (This)->lpVtbl -> MovePrevious(This) )
    ( (This)->lpVtbl -> MoveFirst(This) )
    ( (This)->lpVtbl -> MoveLast(This) )
    ( (This)->lpVtbl -> Open(This,Source,ActiveConnection,CursorType,LockType,Options) )
    ( (This)->lpVtbl -> Requery(This,Options) )
    ( (This)->lpVtbl -> _xResync(This,AffectRecords) )
    ( (This)->lpVtbl -> Update(This,Fields,Values) )
    ( (This)->lpVtbl -> get_AbsolutePage(This,pl) )
    ( (This)->lpVtbl -> put_AbsolutePage(This,Page) )
    ( (This)->lpVtbl -> get_EditMode(This,pl) )
    ( (This)->lpVtbl -> get_Filter(This,Criteria) )
    ( (This)->lpVtbl -> put_Filter(This,Criteria) )
    ( (This)->lpVtbl -> get_PageCount(This,pl) )
    ( (This)->lpVtbl -> get_PageSize(This,pl) )
    ( (This)->lpVtbl -> put_PageSize(This,PageSize) )
    ( (This)->lpVtbl -> get_Sort(This,Criteria) )
    ( (This)->lpVtbl -> put_Sort(This,Criteria) )
    ( (This)->lpVtbl -> get_Status(This,pl) )
    ( (This)->lpVtbl -> get_State(This,plObjState) )
    ( (This)->lpVtbl -> _xClone(This,ppvObject) )
    ( (This)->lpVtbl -> UpdateBatch(This,AffectRecords) )
    ( (This)->lpVtbl -> CancelBatch(This,AffectRecords) )
    ( (This)->lpVtbl -> get_CursorLocation(This,plCursorLoc) )
    ( (This)->lpVtbl -> put_CursorLocation(This,lCursorLoc) )
    ( (This)->lpVtbl -> NextRecordset(This,RecordsAffected,ppiRs) )
    ( (This)->lpVtbl -> Supports(This,CursorOptions,pb) )
    ( (This)->lpVtbl -> get_Collect(This,Index,pvar) )
    ( (This)->lpVtbl -> put_Collect(This,Index,value) )
    ( (This)->lpVtbl -> get_MarshalOptions(This,peMarshal) )
    ( (This)->lpVtbl -> put_MarshalOptions(This,eMarshal) )
    ( (This)->lpVtbl -> Find(This,Criteria,SkipRecords,SearchDirection,Start) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> get_DataSource(This,ppunkDataSource) )
    ( (This)->lpVtbl -> putref_DataSource(This,punkDataSource) )
    ( (This)->lpVtbl -> _xSave(This,FileName,PersistFormat) )
    ( (This)->lpVtbl -> get_ActiveCommand(This,ppCmd) )
    ( (This)->lpVtbl -> put_StayInSync(This,bStayInSync) )
    ( (This)->lpVtbl -> get_StayInSync(This,pbStayInSync) )
    ( (This)->lpVtbl -> GetString(This,StringFormat,NumRows,ColumnDelimeter,RowDelimeter,NullExpr,pRetString) )
    ( (This)->lpVtbl -> get_DataMember(This,pbstrDataMember) )
    ( (This)->lpVtbl -> put_DataMember(This,bstrDataMember) )
    ( (This)->lpVtbl -> CompareBookmarks(This,Bookmark1,Bookmark2,pCompare) )
    ( (This)->lpVtbl -> Clone(This,LockType,ppvObject) )
    ( (This)->lpVtbl -> Resync(This,AffectRecords,ResyncValues) )
    ( (This)->lpVtbl -> Seek(This,KeyValues,SeekOption) )
    ( (This)->lpVtbl -> put_Index(This,Index) )
    ( (This)->lpVtbl -> get_Index(This,pbstrIndex) )
EXTERN_C const IID IID__Recordset;
    typedef struct _RecordsetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADORecordset * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADORecordset * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADORecordset * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADORecordset * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADORecordset * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADORecordset * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADORecordset * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in _ADORecordset * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_AbsolutePosition )(
            __RPC__in _ADORecordset * This,
                                __RPC__out PositionEnum_Param *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_AbsolutePosition )(
            __RPC__in _ADORecordset * This,
                       PositionEnum_Param Position);
                                            HRESULT ( STDMETHODCALLTYPE *putref_ActiveADOConnection )(
            __RPC__in _ADORecordset * This,
                       __RPC__in_opt IDispatch *pconn);
                                         HRESULT ( STDMETHODCALLTYPE *put_ActiveConnection )(
            __RPC__in _ADORecordset * This,
                       VARIANT vConn);
                                         HRESULT ( STDMETHODCALLTYPE *get_ActiveConnection )(
            __RPC__in _ADORecordset * This,
                                __RPC__out VARIANT *pvar);
                                         HRESULT ( STDMETHODCALLTYPE *get_BOF )(
            __RPC__in _ADORecordset * This,
                                __RPC__out VARIANT_BOOL *pb);
                                         HRESULT ( STDMETHODCALLTYPE *get_Bookmark )(
            __RPC__in _ADORecordset * This,
                                __RPC__out VARIANT *pvBookmark);
                                         HRESULT ( STDMETHODCALLTYPE *put_Bookmark )(
            __RPC__in _ADORecordset * This,
                       VARIANT vBookmark);
                                         HRESULT ( STDMETHODCALLTYPE *get_CacheSize )(
            __RPC__in _ADORecordset * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_CacheSize )(
            __RPC__in _ADORecordset * This,
                       long CacheSize);
                                         HRESULT ( STDMETHODCALLTYPE *get_CursorType )(
            __RPC__in _ADORecordset * This,
                                __RPC__out CursorTypeEnum *plCursorType);
                                         HRESULT ( STDMETHODCALLTYPE *put_CursorType )(
            __RPC__in _ADORecordset * This,
                       CursorTypeEnum lCursorType);
                                         HRESULT ( STDMETHODCALLTYPE *get_EOF )(
            __RPC__in _ADORecordset * This,
                                __RPC__out VARIANT_BOOL *pb);
                                         HRESULT ( STDMETHODCALLTYPE *get_Fields )(
            __RPC__in _ADORecordset * This,
                                __RPC__deref_out_opt ADOFields **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_LockType )(
            __RPC__in _ADORecordset * This,
                                __RPC__out LockTypeEnum *plLockType);
                                         HRESULT ( STDMETHODCALLTYPE *put_LockType )(
            __RPC__in _ADORecordset * This,
                       LockTypeEnum lLockType);
                                         HRESULT ( STDMETHODCALLTYPE *get_MaxRecords )(
            __RPC__in _ADORecordset * This,
                                __RPC__out ADO_LONGPTR *plMaxRecords);
                                         HRESULT ( STDMETHODCALLTYPE *put_MaxRecords )(
            __RPC__in _ADORecordset * This,
                       ADO_LONGPTR lMaxRecords);
                                         HRESULT ( STDMETHODCALLTYPE *get_RecordCount )(
            __RPC__in _ADORecordset * This,
                                __RPC__out ADO_LONGPTR *pl);
                                            HRESULT ( STDMETHODCALLTYPE *putref_Source )(
            __RPC__in _ADORecordset * This,
                       __RPC__in_opt IDispatch *pcmd);
                                         HRESULT ( STDMETHODCALLTYPE *put_Source )(
            __RPC__in _ADORecordset * This,
                       __RPC__in BSTR bstrConn);
                                         HRESULT ( STDMETHODCALLTYPE *get_Source )(
            __RPC__in _ADORecordset * This,
                                __RPC__out VARIANT *pvSource);
                                HRESULT ( STDMETHODCALLTYPE *AddNew )(
            __RPC__in _ADORecordset * This,
                                 VARIANT FieldList,
                                 VARIANT Values);
                                HRESULT ( STDMETHODCALLTYPE *CancelUpdate )(
            __RPC__in _ADORecordset * This);
                                HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in _ADORecordset * This);
                                HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in _ADORecordset * This,
                                     AffectEnum AffectRecords);
                                HRESULT ( STDMETHODCALLTYPE *GetRows )(
            __RPC__in _ADORecordset * This,
                                     long Rows,
                                 VARIANT Start,
                                 VARIANT Fields,
                                __RPC__out VARIANT *pvar);
                                HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in _ADORecordset * This,
                       ADO_LONGPTR NumRecords,
                                 VARIANT Start);
                                HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in _ADORecordset * This);
                                HRESULT ( STDMETHODCALLTYPE *MovePrevious )(
            __RPC__in _ADORecordset * This);
                                HRESULT ( STDMETHODCALLTYPE *MoveFirst )(
            __RPC__in _ADORecordset * This);
                                HRESULT ( STDMETHODCALLTYPE *MoveLast )(
            __RPC__in _ADORecordset * This);
                                HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in _ADORecordset * This,
                                 VARIANT Source,
                                 VARIANT ActiveConnection,
                                     CursorTypeEnum CursorType,
                                     LockTypeEnum LockType,
                                     LONG Options);
                                HRESULT ( STDMETHODCALLTYPE *Requery )(
            __RPC__in _ADORecordset * This,
                                     LONG Options);
                       HRESULT ( STDMETHODCALLTYPE *_xResync )(
            __RPC__in _ADORecordset * This,
                                     AffectEnum AffectRecords);
                                HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in _ADORecordset * This,
                                 VARIANT Fields,
                                 VARIANT Values);
                                         HRESULT ( STDMETHODCALLTYPE *get_AbsolutePage )(
            __RPC__in _ADORecordset * This,
                                __RPC__out PositionEnum_Param *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_AbsolutePage )(
            __RPC__in _ADORecordset * This,
                       PositionEnum_Param Page);
                                         HRESULT ( STDMETHODCALLTYPE *get_EditMode )(
            __RPC__in _ADORecordset * This,
                                __RPC__out EditModeEnum *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_Filter )(
            __RPC__in _ADORecordset * This,
                                __RPC__out VARIANT *Criteria);
                                         HRESULT ( STDMETHODCALLTYPE *put_Filter )(
            __RPC__in _ADORecordset * This,
                       VARIANT Criteria);
                                         HRESULT ( STDMETHODCALLTYPE *get_PageCount )(
            __RPC__in _ADORecordset * This,
                                __RPC__out ADO_LONGPTR *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_PageSize )(
            __RPC__in _ADORecordset * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *put_PageSize )(
            __RPC__in _ADORecordset * This,
                       long PageSize);
                                         HRESULT ( STDMETHODCALLTYPE *get_Sort )(
            __RPC__in _ADORecordset * This,
                                __RPC__deref_out_opt BSTR *Criteria);
                                         HRESULT ( STDMETHODCALLTYPE *put_Sort )(
            __RPC__in _ADORecordset * This,
                       __RPC__in BSTR Criteria);
                                         HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in _ADORecordset * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in _ADORecordset * This,
                                __RPC__out LONG *plObjState);
                       HRESULT ( STDMETHODCALLTYPE *_xClone )(
            __RPC__in _ADORecordset * This,
                                __RPC__deref_out_opt _ADORecordset **ppvObject);
                                HRESULT ( STDMETHODCALLTYPE *UpdateBatch )(
            __RPC__in _ADORecordset * This,
                                     AffectEnum AffectRecords);
                                HRESULT ( STDMETHODCALLTYPE *CancelBatch )(
            __RPC__in _ADORecordset * This,
                                     AffectEnum AffectRecords);
                                         HRESULT ( STDMETHODCALLTYPE *get_CursorLocation )(
            __RPC__in _ADORecordset * This,
                                __RPC__out CursorLocationEnum *plCursorLoc);
                                         HRESULT ( STDMETHODCALLTYPE *put_CursorLocation )(
            __RPC__in _ADORecordset * This,
                       CursorLocationEnum lCursorLoc);
                                HRESULT ( STDMETHODCALLTYPE *NextADORecordset )(
            __RPC__in _ADORecordset * This,
                                  __RPC__out VARIANT *RecordsAffected,
                                __RPC__deref_out_opt _ADORecordset **ppiRs);
                                HRESULT ( STDMETHODCALLTYPE *Supports )(
            __RPC__in _ADORecordset * This,
                       CursorOptionEnum CursorOptions,
                                __RPC__out VARIANT_BOOL *pb);
                                    HRESULT ( STDMETHODCALLTYPE *get_Collect )(
            __RPC__in _ADORecordset * This,
                       VARIANT Index,
                                __RPC__out VARIANT *pvar);
                                    HRESULT ( STDMETHODCALLTYPE *put_Collect )(
            __RPC__in _ADORecordset * This,
                       VARIANT Index,
                       VARIANT value);
                                         HRESULT ( STDMETHODCALLTYPE *get_MarshalOptions )(
            __RPC__in _ADORecordset * This,
                                __RPC__out MarshalOptionsEnum *peMarshal);
                                         HRESULT ( STDMETHODCALLTYPE *put_MarshalOptions )(
            __RPC__in _ADORecordset * This,
                       MarshalOptionsEnum eMarshal);
                                HRESULT ( STDMETHODCALLTYPE *Find )(
            __RPC__in _ADORecordset * This,
                       __RPC__in BSTR Criteria,
                                     ADO_LONGPTR SkipRecords,
                                     SearchDirectionEnum SearchDirection,
                                 VARIANT Start);
                                HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in _ADORecordset * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_DataSource )(
            __RPC__in _ADORecordset * This,
                                __RPC__deref_out_opt IUnknown **ppunkDataSource);
                                            HRESULT ( STDMETHODCALLTYPE *putref_DataSource )(
            __RPC__in _ADORecordset * This,
                       __RPC__in_opt IUnknown *punkDataSource);
                       HRESULT ( STDMETHODCALLTYPE *_xSave )(
            __RPC__in _ADORecordset * This,
                                     __RPC__in BSTR FileName,
                                     PersistFormatEnum PersistFormat);
                                         HRESULT ( STDMETHODCALLTYPE *get_ActiveCommand )(
            __RPC__in _ADORecordset * This,
                                __RPC__deref_out_opt IDispatch **ppCmd);
                                         HRESULT ( STDMETHODCALLTYPE *put_StayInSync )(
            __RPC__in _ADORecordset * This,
                       VARIANT_BOOL bStayInSync);
                                         HRESULT ( STDMETHODCALLTYPE *get_StayInSync )(
            __RPC__in _ADORecordset * This,
                                __RPC__out VARIANT_BOOL *pbStayInSync);
                                HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in _ADORecordset * This,
                                     StringFormatEnum StringFormat,
                                     long NumRows,
                                     __RPC__in BSTR ColumnDelimeter,
                                     __RPC__in BSTR RowDelimeter,
                                     __RPC__in BSTR NullExpr,
                                __RPC__deref_out_opt BSTR *pRetString);
                                         HRESULT ( STDMETHODCALLTYPE *get_DataMember )(
            __RPC__in _ADORecordset * This,
                                __RPC__deref_out_opt BSTR *pbstrDataMember);
                                         HRESULT ( STDMETHODCALLTYPE *put_DataMember )(
            __RPC__in _ADORecordset * This,
                       __RPC__in BSTR bstrDataMember);
                                HRESULT ( STDMETHODCALLTYPE *CompareBookmarks )(
            __RPC__in _ADORecordset * This,
                       VARIANT Bookmark1,
                       VARIANT Bookmark2,
                                __RPC__out CompareEnum *pCompare);
                                HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in _ADORecordset * This,
                                     LockTypeEnum LockType,
                                __RPC__deref_out_opt _ADORecordset **ppvObject);
                                HRESULT ( STDMETHODCALLTYPE *Resync )(
            __RPC__in _ADORecordset * This,
                                     AffectEnum AffectRecords,
                                     ResyncEnum ResyncValues);
                                HRESULT ( STDMETHODCALLTYPE *Seek )(
            __RPC__in _ADORecordset * This,
                       VARIANT KeyValues,
                                     SeekEnum SeekOption);
                                         HRESULT ( STDMETHODCALLTYPE *put_Index )(
            __RPC__in _ADORecordset * This,
                       __RPC__in BSTR Index);
                                         HRESULT ( STDMETHODCALLTYPE *get_Index )(
            __RPC__in _ADORecordset * This,
                                __RPC__deref_out_opt BSTR *pbstrIndex);
                                HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in _ADORecordset * This,
                                 VARIANT Destination,
                                     PersistFormatEnum PersistFormat);
        END_INTERFACE
    } _RecordsetVtbl;
    interface _Recordset
    {
        CONST_VTBL struct _RecordsetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_AbsolutePosition(This,pl) )
    ( (This)->lpVtbl -> put_AbsolutePosition(This,Position) )
    ( (This)->lpVtbl -> putref_ActiveConnection(This,pconn) )
    ( (This)->lpVtbl -> put_ActiveConnection(This,vConn) )
    ( (This)->lpVtbl -> get_ActiveConnection(This,pvar) )
    ( (This)->lpVtbl -> get_BOF(This,pb) )
    ( (This)->lpVtbl -> get_Bookmark(This,pvBookmark) )
    ( (This)->lpVtbl -> put_Bookmark(This,vBookmark) )
    ( (This)->lpVtbl -> get_CacheSize(This,pl) )
    ( (This)->lpVtbl -> put_CacheSize(This,CacheSize) )
    ( (This)->lpVtbl -> get_CursorType(This,plCursorType) )
    ( (This)->lpVtbl -> put_CursorType(This,lCursorType) )
    ( (This)->lpVtbl -> get_EOF(This,pb) )
    ( (This)->lpVtbl -> get_Fields(This,ppvObject) )
    ( (This)->lpVtbl -> get_LockType(This,plLockType) )
    ( (This)->lpVtbl -> put_LockType(This,lLockType) )
    ( (This)->lpVtbl -> get_MaxRecords(This,plMaxRecords) )
    ( (This)->lpVtbl -> put_MaxRecords(This,lMaxRecords) )
    ( (This)->lpVtbl -> get_RecordCount(This,pl) )
    ( (This)->lpVtbl -> putref_Source(This,pcmd) )
    ( (This)->lpVtbl -> put_Source(This,bstrConn) )
    ( (This)->lpVtbl -> get_Source(This,pvSource) )
    ( (This)->lpVtbl -> AddNew(This,FieldList,Values) )
    ( (This)->lpVtbl -> CancelUpdate(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Delete(This,AffectRecords) )
    ( (This)->lpVtbl -> GetRows(This,Rows,Start,Fields,pvar) )
    ( (This)->lpVtbl -> Move(This,NumRecords,Start) )
    ( (This)->lpVtbl -> MoveNext(This) )
    ( (This)->lpVtbl -> MovePrevious(This) )
    ( (This)->lpVtbl -> MoveFirst(This) )
    ( (This)->lpVtbl -> MoveLast(This) )
    ( (This)->lpVtbl -> Open(This,Source,ActiveConnection,CursorType,LockType,Options) )
    ( (This)->lpVtbl -> Requery(This,Options) )
    ( (This)->lpVtbl -> _xResync(This,AffectRecords) )
    ( (This)->lpVtbl -> Update(This,Fields,Values) )
    ( (This)->lpVtbl -> get_AbsolutePage(This,pl) )
    ( (This)->lpVtbl -> put_AbsolutePage(This,Page) )
    ( (This)->lpVtbl -> get_EditMode(This,pl) )
    ( (This)->lpVtbl -> get_Filter(This,Criteria) )
    ( (This)->lpVtbl -> put_Filter(This,Criteria) )
    ( (This)->lpVtbl -> get_PageCount(This,pl) )
    ( (This)->lpVtbl -> get_PageSize(This,pl) )
    ( (This)->lpVtbl -> put_PageSize(This,PageSize) )
    ( (This)->lpVtbl -> get_Sort(This,Criteria) )
    ( (This)->lpVtbl -> put_Sort(This,Criteria) )
    ( (This)->lpVtbl -> get_Status(This,pl) )
    ( (This)->lpVtbl -> get_State(This,plObjState) )
    ( (This)->lpVtbl -> _xClone(This,ppvObject) )
    ( (This)->lpVtbl -> UpdateBatch(This,AffectRecords) )
    ( (This)->lpVtbl -> CancelBatch(This,AffectRecords) )
    ( (This)->lpVtbl -> get_CursorLocation(This,plCursorLoc) )
    ( (This)->lpVtbl -> put_CursorLocation(This,lCursorLoc) )
    ( (This)->lpVtbl -> NextRecordset(This,RecordsAffected,ppiRs) )
    ( (This)->lpVtbl -> Supports(This,CursorOptions,pb) )
    ( (This)->lpVtbl -> get_Collect(This,Index,pvar) )
    ( (This)->lpVtbl -> put_Collect(This,Index,value) )
    ( (This)->lpVtbl -> get_MarshalOptions(This,peMarshal) )
    ( (This)->lpVtbl -> put_MarshalOptions(This,eMarshal) )
    ( (This)->lpVtbl -> Find(This,Criteria,SkipRecords,SearchDirection,Start) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> get_DataSource(This,ppunkDataSource) )
    ( (This)->lpVtbl -> putref_DataSource(This,punkDataSource) )
    ( (This)->lpVtbl -> _xSave(This,FileName,PersistFormat) )
    ( (This)->lpVtbl -> get_ActiveCommand(This,ppCmd) )
    ( (This)->lpVtbl -> put_StayInSync(This,bStayInSync) )
    ( (This)->lpVtbl -> get_StayInSync(This,pbStayInSync) )
    ( (This)->lpVtbl -> GetString(This,StringFormat,NumRows,ColumnDelimeter,RowDelimeter,NullExpr,pRetString) )
    ( (This)->lpVtbl -> get_DataMember(This,pbstrDataMember) )
    ( (This)->lpVtbl -> put_DataMember(This,bstrDataMember) )
    ( (This)->lpVtbl -> CompareBookmarks(This,Bookmark1,Bookmark2,pCompare) )
    ( (This)->lpVtbl -> Clone(This,LockType,ppvObject) )
    ( (This)->lpVtbl -> Resync(This,AffectRecords,ResyncValues) )
    ( (This)->lpVtbl -> Seek(This,KeyValues,SeekOption) )
    ( (This)->lpVtbl -> put_Index(This,Index) )
    ( (This)->lpVtbl -> get_Index(This,pbstrIndex) )
    ( (This)->lpVtbl -> Save(This,Destination,PersistFormat) )
EXTERN_C const IID IID_ADORecordsetConstruction;
    typedef struct ADORecordsetConstructionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADORecordsetConstruction * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADORecordsetConstruction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADORecordsetConstruction * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADORecordsetConstruction * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADORecordsetConstruction * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADORecordsetConstruction * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADORecordsetConstruction * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Rowset )(
            __RPC__in ADORecordsetConstruction * This,
                                __RPC__deref_out_opt IUnknown **ppRowset);
                        HRESULT ( STDMETHODCALLTYPE *put_Rowset )(
            __RPC__in ADORecordsetConstruction * This,
                       __RPC__in_opt IUnknown *pRowset);
                        HRESULT ( STDMETHODCALLTYPE *get_Chapter )(
            __RPC__in ADORecordsetConstruction * This,
                                __RPC__out ADO_LONGPTR *plChapter);
                        HRESULT ( STDMETHODCALLTYPE *put_Chapter )(
            __RPC__in ADORecordsetConstruction * This,
                       ADO_LONGPTR lChapter);
                        HRESULT ( STDMETHODCALLTYPE *get_RowPosition )(
            __RPC__in ADORecordsetConstruction * This,
                                __RPC__deref_out_opt IUnknown **ppRowPos);
                        HRESULT ( STDMETHODCALLTYPE *put_RowPosition )(
            __RPC__in ADORecordsetConstruction * This,
                       __RPC__in_opt IUnknown *pRowPos);
        END_INTERFACE
    } ADORecordsetConstructionVtbl;
    interface ADORecordsetConstruction
    {
        CONST_VTBL struct ADORecordsetConstructionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Rowset(This,ppRowset) )
    ( (This)->lpVtbl -> put_Rowset(This,pRowset) )
    ( (This)->lpVtbl -> get_Chapter(This,plChapter) )
    ( (This)->lpVtbl -> put_Chapter(This,lChapter) )
    ( (This)->lpVtbl -> get_RowPosition(This,ppRowPos) )
    ( (This)->lpVtbl -> put_RowPosition(This,pRowPos) )
EXTERN_C const IID IID_Field15;
    typedef struct Field15Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Field15 * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Field15 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Field15 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Field15 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Field15 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Field15 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Field15 * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in Field15 * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_ActualSize )(
            __RPC__in Field15 * This,
                                __RPC__out ADO_LONGPTR *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
            __RPC__in Field15 * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_DefinedSize )(
            __RPC__in Field15 * This,
                                __RPC__out ADO_LONGPTR *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in Field15 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in Field15 * This,
                                __RPC__out DataTypeEnum *pDataType);
                                         HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in Field15 * This,
                                __RPC__out VARIANT *pvar);
                                         HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in Field15 * This,
                       VARIANT Val);
                                         HRESULT ( STDMETHODCALLTYPE *get_Precision )(
            __RPC__in Field15 * This,
                                __RPC__out BYTE *pbPrecision);
                                         HRESULT ( STDMETHODCALLTYPE *get_NumericScale )(
            __RPC__in Field15 * This,
                                __RPC__out BYTE *pbNumericScale);
                                HRESULT ( STDMETHODCALLTYPE *AppendChunk )(
            __RPC__in Field15 * This,
                       VARIANT Data);
                                HRESULT ( STDMETHODCALLTYPE *GetChunk )(
            __RPC__in Field15 * This,
                       long Length,
                                __RPC__out VARIANT *pvar);
                                         HRESULT ( STDMETHODCALLTYPE *get_OriginalValue )(
            __RPC__in Field15 * This,
                                __RPC__out VARIANT *pvar);
                                         HRESULT ( STDMETHODCALLTYPE *get_UnderlyingValue )(
            __RPC__in Field15 * This,
                                __RPC__out VARIANT *pvar);
        END_INTERFACE
    } Field15Vtbl;
    interface Field15
    {
        CONST_VTBL struct Field15Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_ActualSize(This,pl) )
    ( (This)->lpVtbl -> get_Attributes(This,pl) )
    ( (This)->lpVtbl -> get_DefinedSize(This,pl) )
    ( (This)->lpVtbl -> get_Name(This,pbstr) )
    ( (This)->lpVtbl -> get_Type(This,pDataType) )
    ( (This)->lpVtbl -> get_Value(This,pvar) )
    ( (This)->lpVtbl -> put_Value(This,Val) )
    ( (This)->lpVtbl -> get_Precision(This,pbPrecision) )
    ( (This)->lpVtbl -> get_NumericScale(This,pbNumericScale) )
    ( (This)->lpVtbl -> AppendChunk(This,Data) )
    ( (This)->lpVtbl -> GetChunk(This,Length,pvar) )
    ( (This)->lpVtbl -> get_OriginalValue(This,pvar) )
    ( (This)->lpVtbl -> get_UnderlyingValue(This,pvar) )
EXTERN_C const IID IID_Field20;
    typedef struct Field20Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Field20 * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Field20 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Field20 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Field20 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Field20 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Field20 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Field20 * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in Field20 * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_ActualSize )(
            __RPC__in Field20 * This,
                                __RPC__out ADO_LONGPTR *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
            __RPC__in Field20 * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_DefinedSize )(
            __RPC__in Field20 * This,
                                __RPC__out ADO_LONGPTR *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in Field20 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in Field20 * This,
                                __RPC__out DataTypeEnum *pDataType);
                                         HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in Field20 * This,
                                __RPC__out VARIANT *pvar);
                                         HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in Field20 * This,
                       VARIANT Val);
                                         HRESULT ( STDMETHODCALLTYPE *get_Precision )(
            __RPC__in Field20 * This,
                                __RPC__out BYTE *pbPrecision);
                                         HRESULT ( STDMETHODCALLTYPE *get_NumericScale )(
            __RPC__in Field20 * This,
                                __RPC__out BYTE *pbNumericScale);
                                HRESULT ( STDMETHODCALLTYPE *AppendChunk )(
            __RPC__in Field20 * This,
                       VARIANT Data);
                                HRESULT ( STDMETHODCALLTYPE *GetChunk )(
            __RPC__in Field20 * This,
                       long Length,
                                __RPC__out VARIANT *pvar);
                                         HRESULT ( STDMETHODCALLTYPE *get_OriginalValue )(
            __RPC__in Field20 * This,
                                __RPC__out VARIANT *pvar);
                                         HRESULT ( STDMETHODCALLTYPE *get_UnderlyingValue )(
            __RPC__in Field20 * This,
                                __RPC__out VARIANT *pvar);
                            HRESULT ( STDMETHODCALLTYPE *get_DataFormat )(
            __RPC__in Field20 * This,
                                __RPC__deref_out_opt IUnknown **ppiDF);
                               HRESULT ( STDMETHODCALLTYPE *putref_DataFormat )(
            __RPC__in Field20 * This,
                       __RPC__in_opt IUnknown *piDF);
                                         HRESULT ( STDMETHODCALLTYPE *put_Precision )(
            __RPC__in Field20 * This,
                       BYTE bPrecision);
                                         HRESULT ( STDMETHODCALLTYPE *put_NumericScale )(
            __RPC__in Field20 * This,
                       BYTE bScale);
                                         HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in Field20 * This,
                       DataTypeEnum DataType);
                                         HRESULT ( STDMETHODCALLTYPE *put_DefinedSize )(
            __RPC__in Field20 * This,
                       ADO_LONGPTR lSize);
                                         HRESULT ( STDMETHODCALLTYPE *put_Attributes )(
            __RPC__in Field20 * This,
                       long lAttributes);
        END_INTERFACE
    } Field20Vtbl;
    interface Field20
    {
        CONST_VTBL struct Field20Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_ActualSize(This,pl) )
    ( (This)->lpVtbl -> get_Attributes(This,pl) )
    ( (This)->lpVtbl -> get_DefinedSize(This,pl) )
    ( (This)->lpVtbl -> get_Name(This,pbstr) )
    ( (This)->lpVtbl -> get_Type(This,pDataType) )
    ( (This)->lpVtbl -> get_Value(This,pvar) )
    ( (This)->lpVtbl -> put_Value(This,Val) )
    ( (This)->lpVtbl -> get_Precision(This,pbPrecision) )
    ( (This)->lpVtbl -> get_NumericScale(This,pbNumericScale) )
    ( (This)->lpVtbl -> AppendChunk(This,Data) )
    ( (This)->lpVtbl -> GetChunk(This,Length,pvar) )
    ( (This)->lpVtbl -> get_OriginalValue(This,pvar) )
    ( (This)->lpVtbl -> get_UnderlyingValue(This,pvar) )
    ( (This)->lpVtbl -> get_DataFormat(This,ppiDF) )
    ( (This)->lpVtbl -> putref_DataFormat(This,piDF) )
    ( (This)->lpVtbl -> put_Precision(This,bPrecision) )
    ( (This)->lpVtbl -> put_NumericScale(This,bScale) )
    ( (This)->lpVtbl -> put_Type(This,DataType) )
    ( (This)->lpVtbl -> put_DefinedSize(This,lSize) )
    ( (This)->lpVtbl -> put_Attributes(This,lAttributes) )
EXTERN_C const IID IID_Field;
    typedef struct FieldVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOField * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOField * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOField * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOField * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOField * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOField * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOField * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in ADOField * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_ActualSize )(
            __RPC__in ADOField * This,
                                __RPC__out ADO_LONGPTR *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
            __RPC__in ADOField * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_DefinedSize )(
            __RPC__in ADOField * This,
                                __RPC__out ADO_LONGPTR *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ADOField * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in ADOField * This,
                                __RPC__out DataTypeEnum *pDataType);
                                         HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in ADOField * This,
                                __RPC__out VARIANT *pvar);
                                         HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in ADOField * This,
                       VARIANT Val);
                                         HRESULT ( STDMETHODCALLTYPE *get_Precision )(
            __RPC__in ADOField * This,
                                __RPC__out BYTE *pbPrecision);
                                         HRESULT ( STDMETHODCALLTYPE *get_NumericScale )(
            __RPC__in ADOField * This,
                                __RPC__out BYTE *pbNumericScale);
                                HRESULT ( STDMETHODCALLTYPE *AppendChunk )(
            __RPC__in ADOField * This,
                       VARIANT Data);
                                HRESULT ( STDMETHODCALLTYPE *GetChunk )(
            __RPC__in ADOField * This,
                       long Length,
                                __RPC__out VARIANT *pvar);
                                         HRESULT ( STDMETHODCALLTYPE *get_OriginalValue )(
            __RPC__in ADOField * This,
                                __RPC__out VARIANT *pvar);
                                         HRESULT ( STDMETHODCALLTYPE *get_UnderlyingValue )(
            __RPC__in ADOField * This,
                                __RPC__out VARIANT *pvar);
                            HRESULT ( STDMETHODCALLTYPE *get_DataFormat )(
            __RPC__in ADOField * This,
                                __RPC__deref_out_opt IUnknown **ppiDF);
                               HRESULT ( STDMETHODCALLTYPE *putref_DataFormat )(
            __RPC__in ADOField * This,
                       __RPC__in_opt IUnknown *piDF);
                                         HRESULT ( STDMETHODCALLTYPE *put_Precision )(
            __RPC__in ADOField * This,
                       BYTE bPrecision);
                                         HRESULT ( STDMETHODCALLTYPE *put_NumericScale )(
            __RPC__in ADOField * This,
                       BYTE bScale);
                                         HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in ADOField * This,
                       DataTypeEnum DataType);
                                         HRESULT ( STDMETHODCALLTYPE *put_DefinedSize )(
            __RPC__in ADOField * This,
                       ADO_LONGPTR lSize);
                                         HRESULT ( STDMETHODCALLTYPE *put_Attributes )(
            __RPC__in ADOField * This,
                       long lAttributes);
                                         HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in ADOField * This,
                                __RPC__out long *pFStatus);
        END_INTERFACE
    } FieldVtbl;
    interface Field
    {
        CONST_VTBL struct FieldVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_ActualSize(This,pl) )
    ( (This)->lpVtbl -> get_Attributes(This,pl) )
    ( (This)->lpVtbl -> get_DefinedSize(This,pl) )
    ( (This)->lpVtbl -> get_Name(This,pbstr) )
    ( (This)->lpVtbl -> get_Type(This,pDataType) )
    ( (This)->lpVtbl -> get_Value(This,pvar) )
    ( (This)->lpVtbl -> put_Value(This,Val) )
    ( (This)->lpVtbl -> get_Precision(This,pbPrecision) )
    ( (This)->lpVtbl -> get_NumericScale(This,pbNumericScale) )
    ( (This)->lpVtbl -> AppendChunk(This,Data) )
    ( (This)->lpVtbl -> GetChunk(This,Length,pvar) )
    ( (This)->lpVtbl -> get_OriginalValue(This,pvar) )
    ( (This)->lpVtbl -> get_UnderlyingValue(This,pvar) )
    ( (This)->lpVtbl -> get_DataFormat(This,ppiDF) )
    ( (This)->lpVtbl -> putref_DataFormat(This,piDF) )
    ( (This)->lpVtbl -> put_Precision(This,bPrecision) )
    ( (This)->lpVtbl -> put_NumericScale(This,bScale) )
    ( (This)->lpVtbl -> put_Type(This,DataType) )
    ( (This)->lpVtbl -> put_DefinedSize(This,lSize) )
    ( (This)->lpVtbl -> put_Attributes(This,lAttributes) )
    ( (This)->lpVtbl -> get_Status(This,pFStatus) )
EXTERN_C const IID IID_Fields15;
    typedef struct Fields15Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Fields15 * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Fields15 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Fields15 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Fields15 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Fields15 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Fields15 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Fields15 * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in Fields15 * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in Fields15 * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in Fields15 * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in Fields15 * This,
                       VARIANT Index,
                                __RPC__deref_out_opt ADOField **ppvObject);
        END_INTERFACE
    } Fields15Vtbl;
    interface Fields15
    {
        CONST_VTBL struct Fields15Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppvObject) )
EXTERN_C const IID IID_Fields20;
    typedef struct Fields20Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Fields20 * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Fields20 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Fields20 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Fields20 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Fields20 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Fields20 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Fields20 * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in Fields20 * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in Fields20 * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in Fields20 * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in Fields20 * This,
                       VARIANT Index,
                                __RPC__deref_out_opt ADOField **ppvObject);
                       HRESULT ( STDMETHODCALLTYPE *_Append )(
            __RPC__in Fields20 * This,
                       __RPC__in BSTR Name,
                       DataTypeEnum Type,
                                     ADO_LONGPTR DefinedSize,
                                     FieldAttributeEnum Attrib);
                                HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in Fields20 * This,
                       VARIANT Index);
        END_INTERFACE
    } Fields20Vtbl;
    interface Fields20
    {
        CONST_VTBL struct Fields20Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppvObject) )
    ( (This)->lpVtbl -> _Append(This,Name,Type,DefinedSize,Attrib) )
    ( (This)->lpVtbl -> Delete(This,Index) )
EXTERN_C const IID IID_Fields;
    typedef struct FieldsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOFields * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOFields * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOFields * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOFields * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOFields * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOFields * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOFields * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ADOFields * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in ADOFields * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ADOFields * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ADOFields * This,
                       VARIANT Index,
                                __RPC__deref_out_opt ADOField **ppvObject);
                       HRESULT ( STDMETHODCALLTYPE *_Append )(
            __RPC__in ADOFields * This,
                       __RPC__in BSTR Name,
                       DataTypeEnum Type,
                                     ADO_LONGPTR DefinedSize,
                                     FieldAttributeEnum Attrib);
                                HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ADOFields * This,
                       VARIANT Index);
                                HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in ADOFields * This,
                       __RPC__in BSTR Name,
                       DataTypeEnum Type,
                                     ADO_LONGPTR DefinedSize,
                                     FieldAttributeEnum Attrib,
                                 VARIANT FieldValue);
                                HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in ADOFields * This);
                                HRESULT ( STDMETHODCALLTYPE *Resync )(
            __RPC__in ADOFields * This,
                                     ResyncEnum ResyncValues);
                                HRESULT ( STDMETHODCALLTYPE *CancelUpdate )(
            __RPC__in ADOFields * This);
        END_INTERFACE
    } FieldsVtbl;
    interface Fields
    {
        CONST_VTBL struct FieldsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppvObject) )
    ( (This)->lpVtbl -> _Append(This,Name,Type,DefinedSize,Attrib) )
    ( (This)->lpVtbl -> Delete(This,Index) )
    ( (This)->lpVtbl -> Append(This,Name,Type,DefinedSize,Attrib,FieldValue) )
    ( (This)->lpVtbl -> Update(This) )
    ( (This)->lpVtbl -> Resync(This,ResyncValues) )
    ( (This)->lpVtbl -> CancelUpdate(This) )
EXTERN_C const IID IID__Parameter;
    typedef struct _ParameterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADOParameter * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADOParameter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADOParameter * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADOParameter * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADOParameter * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADOParameter * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADOParameter * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in _ADOParameter * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in _ADOParameter * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in _ADOParameter * This,
                       __RPC__in BSTR bstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in _ADOParameter * This,
                                __RPC__out VARIANT *pvar);
                                         HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in _ADOParameter * This,
                       VARIANT val);
                                         HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in _ADOParameter * This,
                                __RPC__out DataTypeEnum *psDataType);
                                         HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in _ADOParameter * This,
                       DataTypeEnum sDataType);
                                         HRESULT ( STDMETHODCALLTYPE *put_Direction )(
            __RPC__in _ADOParameter * This,
                       ParameterDirectionEnum lParmDirection);
                                         HRESULT ( STDMETHODCALLTYPE *get_Direction )(
            __RPC__in _ADOParameter * This,
                                __RPC__out ParameterDirectionEnum *plParmDirection);
                                         HRESULT ( STDMETHODCALLTYPE *put_Precision )(
            __RPC__in _ADOParameter * This,
                       BYTE bPrecision);
                                         HRESULT ( STDMETHODCALLTYPE *get_Precision )(
            __RPC__in _ADOParameter * This,
                                __RPC__out BYTE *pbPrecision);
                                         HRESULT ( STDMETHODCALLTYPE *put_NumericScale )(
            __RPC__in _ADOParameter * This,
                       BYTE bScale);
                                         HRESULT ( STDMETHODCALLTYPE *get_NumericScale )(
            __RPC__in _ADOParameter * This,
                                __RPC__out BYTE *pbScale);
                                         HRESULT ( STDMETHODCALLTYPE *put_Size )(
            __RPC__in _ADOParameter * This,
                       ADO_LONGPTR l);
                                         HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in _ADOParameter * This,
                                __RPC__out ADO_LONGPTR *pl);
                                HRESULT ( STDMETHODCALLTYPE *AppendChunk )(
            __RPC__in _ADOParameter * This,
                       VARIANT Val);
                                         HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
            __RPC__in _ADOParameter * This,
                                __RPC__out LONG *plParmAttribs);
                                         HRESULT ( STDMETHODCALLTYPE *put_Attributes )(
            __RPC__in _ADOParameter * This,
                       LONG lParmAttribs);
        END_INTERFACE
    } _ParameterVtbl;
    interface _Parameter
    {
        CONST_VTBL struct _ParameterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_Name(This,pbstr) )
    ( (This)->lpVtbl -> put_Name(This,bstr) )
    ( (This)->lpVtbl -> get_Value(This,pvar) )
    ( (This)->lpVtbl -> put_Value(This,val) )
    ( (This)->lpVtbl -> get_Type(This,psDataType) )
    ( (This)->lpVtbl -> put_Type(This,sDataType) )
    ( (This)->lpVtbl -> put_Direction(This,lParmDirection) )
    ( (This)->lpVtbl -> get_Direction(This,plParmDirection) )
    ( (This)->lpVtbl -> put_Precision(This,bPrecision) )
    ( (This)->lpVtbl -> get_Precision(This,pbPrecision) )
    ( (This)->lpVtbl -> put_NumericScale(This,bScale) )
    ( (This)->lpVtbl -> get_NumericScale(This,pbScale) )
    ( (This)->lpVtbl -> put_Size(This,l) )
    ( (This)->lpVtbl -> get_Size(This,pl) )
    ( (This)->lpVtbl -> AppendChunk(This,Val) )
    ( (This)->lpVtbl -> get_Attributes(This,plParmAttribs) )
    ( (This)->lpVtbl -> put_Attributes(This,lParmAttribs) )
EXTERN_C const CLSID CLSID_Parameter;
Parameter;
EXTERN_C const IID IID_Parameters;
    typedef struct ParametersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOParameters * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOParameters * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOParameters * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOParameters * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOParameters * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOParameters * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOParameters * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ADOParameters * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in ADOParameters * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ADOParameters * This);
                            HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in ADOParameters * This,
                       __RPC__in_opt IDispatch *Object);
                            HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ADOParameters * This,
                       VARIANT Index);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ADOParameters * This,
                       VARIANT Index,
                                __RPC__deref_out_opt _ADOParameter **ppvObject);
        END_INTERFACE
    } ParametersVtbl;
    interface Parameters
    {
        CONST_VTBL struct ParametersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Append(This,Object) )
    ( (This)->lpVtbl -> Delete(This,Index) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppvObject) )
EXTERN_C const IID IID_Property;
    typedef struct PropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOProperty * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOProperty * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOProperty * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOProperty * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOProperty * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in ADOProperty * This,
                                __RPC__out VARIANT *pval);
                                         HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in ADOProperty * This,
                       VARIANT val);
                                     HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ADOProperty * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in ADOProperty * This,
                                __RPC__out DataTypeEnum *ptype);
                                     HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
            __RPC__in ADOProperty * This,
                                __RPC__out long *plAttributes);
                                     HRESULT ( STDMETHODCALLTYPE *put_Attributes )(
            __RPC__in ADOProperty * This,
                       long lAttributes);
        END_INTERFACE
    } PropertyVtbl;
    interface Property
    {
        CONST_VTBL struct PropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Value(This,pval) )
    ( (This)->lpVtbl -> put_Value(This,val) )
    ( (This)->lpVtbl -> get_Name(This,pbstr) )
    ( (This)->lpVtbl -> get_Type(This,ptype) )
    ( (This)->lpVtbl -> get_Attributes(This,plAttributes) )
    ( (This)->lpVtbl -> put_Attributes(This,lAttributes) )
EXTERN_C const IID IID_Properties;
    typedef struct PropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOProperties * This,
                       __RPC__in REFIID riid,
            __RPC__deref_out void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOProperties * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOProperties * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOProperties * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOProperties * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOProperties * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ADOProperties * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in ADOProperties * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ADOProperties * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ADOProperties * This,
                       VARIANT Index,
                                __RPC__deref_out_opt ADOProperty **ppvObject);
        END_INTERFACE
    } PropertiesVtbl;
    interface Properties
    {
        CONST_VTBL struct PropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppvObject) )
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_ado10_0001_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ado10_0001_0035_v0_0_s_ifspec;
}
#endif
#pragma endregion
