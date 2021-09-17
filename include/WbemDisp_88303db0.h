#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISWbemServices ISWbemServices;
typedef interface ISWbemLocator ISWbemLocator;
typedef interface ISWbemObject ISWbemObject;
typedef interface ISWbemObjectSet ISWbemObjectSet;
typedef interface ISWbemNamedValue ISWbemNamedValue;
typedef interface ISWbemNamedValueSet ISWbemNamedValueSet;
typedef interface ISWbemQualifier ISWbemQualifier;
typedef interface ISWbemQualifierSet ISWbemQualifierSet;
typedef interface ISWbemProperty ISWbemProperty;
typedef interface ISWbemPropertySet ISWbemPropertySet;
typedef interface ISWbemMethod ISWbemMethod;
typedef interface ISWbemMethodSet ISWbemMethodSet;
typedef interface ISWbemEventSource ISWbemEventSource;
typedef interface ISWbemObjectPath ISWbemObjectPath;
typedef interface ISWbemLastError ISWbemLastError;
typedef interface ISWbemSinkEvents ISWbemSinkEvents;
typedef interface ISWbemSink ISWbemSink;
typedef interface ISWbemSecurity ISWbemSecurity;
typedef interface ISWbemPrivilege ISWbemPrivilege;
typedef interface ISWbemPrivilegeSet ISWbemPrivilegeSet;
typedef interface ISWbemServicesEx ISWbemServicesEx;
typedef interface ISWbemObjectEx ISWbemObjectEx;
typedef interface ISWbemDateTime ISWbemDateTime;
typedef interface ISWbemRefresher ISWbemRefresher;
typedef interface ISWbemRefreshableItem ISWbemRefreshableItem;
typedef class SWbemLocator SWbemLocator;
typedef class SWbemNamedValueSet SWbemNamedValueSet;
typedef class SWbemObjectPath SWbemObjectPath;
typedef class SWbemLastError SWbemLastError;
typedef class SWbemSink SWbemSink;
typedef class SWbemDateTime SWbemDateTime;
typedef class SWbemRefresher SWbemRefresher;
typedef class SWbemServices SWbemServices;
typedef class SWbemServicesEx SWbemServicesEx;
typedef class SWbemObject SWbemObject;
typedef class SWbemObjectEx SWbemObjectEx;
typedef class SWbemObjectSet SWbemObjectSet;
typedef class SWbemNamedValue SWbemNamedValue;
typedef class SWbemQualifier SWbemQualifier;
typedef class SWbemQualifierSet SWbemQualifierSet;
typedef class SWbemProperty SWbemProperty;
typedef class SWbemPropertySet SWbemPropertySet;
typedef class SWbemMethod SWbemMethod;
typedef class SWbemMethodSet SWbemMethodSet;
typedef class SWbemEventSource SWbemEventSource;
typedef class SWbemSecurity SWbemSecurity;
typedef class SWbemPrivilege SWbemPrivilege;
typedef class SWbemPrivilegeSet SWbemPrivilegeSet;
typedef class SWbemRefreshableItem SWbemRefreshableItem;
#include "dispex.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family or WinMgmt Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT)
extern RPC_IF_HANDLE __MIDL_itf_wbemdisp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemdisp_0000_0000_v0_0_s_ifspec;
typedef DECLSPEC_UUID("4A249B72-FC9A-11d1-8B1E-00600806D9B6")
enum WbemChangeFlagEnum
    {
        wbemChangeFlagCreateOrUpdate = 0,
        wbemChangeFlagUpdateOnly = 0x1,
        wbemChangeFlagCreateOnly = 0x2,
        wbemChangeFlagUpdateCompatible = 0,
        wbemChangeFlagUpdateSafeMode = 0x20,
        wbemChangeFlagUpdateForceMode = 0x40,
        wbemChangeFlagStrongValidation = 0x80,
        wbemChangeFlagAdvisory = 0x10000
    } WbemChangeFlagEnum;
typedef DECLSPEC_UUID("4A249B73-FC9A-11d1-8B1E-00600806D9B6")
enum WbemFlagEnum
    {
        wbemFlagReturnImmediately = 0x10,
        wbemFlagReturnWhenComplete = 0,
        wbemFlagBidirectional = 0,
        wbemFlagForwardOnly = 0x20,
        wbemFlagNoErrorObject = 0x40,
        wbemFlagReturnErrorObject = 0,
        wbemFlagSendStatus = 0x80,
        wbemFlagDontSendStatus = 0,
        wbemFlagEnsureLocatable = 0x100,
        wbemFlagDirectRead = 0x200,
        wbemFlagSendOnlySelected = 0,
        wbemFlagUseAmendedQualifiers = 0x20000,
        wbemFlagGetDefault = 0,
        wbemFlagSpawnInstance = 0x1,
        wbemFlagUseCurrentTime = 0x1
    } WbemFlagEnum;
typedef DECLSPEC_UUID("4A249B76-FC9A-11d1-8B1E-00600806D9B6")
enum WbemQueryFlagEnum
    {
        wbemQueryFlagDeep = 0,
        wbemQueryFlagShallow = 1,
        wbemQueryFlagPrototype = 2
    } WbemQueryFlagEnum;
typedef DECLSPEC_UUID("4A249B78-FC9A-11d1-8B1E-00600806D9B6")
enum WbemTextFlagEnum
    {
        wbemTextFlagNoFlavors = 0x1
    } WbemTextFlagEnum;
typedef DECLSPEC_UUID("BF078C2A-07D9-11d2-8B21-00600806D9B6")
enum WbemTimeout
    {
        wbemTimeoutInfinite = 0xffffffff
    } WbemTimeout;
typedef DECLSPEC_UUID("4A249B79-FC9A-11d1-8B1E-00600806D9B6")
enum WbemComparisonFlagEnum
    {
        wbemComparisonFlagIncludeAll = 0,
        wbemComparisonFlagIgnoreQualifiers = 0x1,
        wbemComparisonFlagIgnoreObjectSource = 0x2,
        wbemComparisonFlagIgnoreDefaultValues = 0x4,
        wbemComparisonFlagIgnoreClass = 0x8,
        wbemComparisonFlagIgnoreCase = 0x10,
        wbemComparisonFlagIgnoreFlavor = 0x20
    } WbemComparisonFlagEnum;
typedef DECLSPEC_UUID("4A249B7B-FC9A-11d1-8B1E-00600806D9B6")
enum WbemCimtypeEnum
    {
        wbemCimtypeSint8 = 16,
        wbemCimtypeUint8 = 17,
        wbemCimtypeSint16 = 2,
        wbemCimtypeUint16 = 18,
        wbemCimtypeSint32 = 3,
        wbemCimtypeUint32 = 19,
        wbemCimtypeSint64 = 20,
        wbemCimtypeUint64 = 21,
        wbemCimtypeReal32 = 4,
        wbemCimtypeReal64 = 5,
        wbemCimtypeBoolean = 11,
        wbemCimtypeString = 8,
        wbemCimtypeDatetime = 101,
        wbemCimtypeReference = 102,
        wbemCimtypeChar16 = 103,
        wbemCimtypeObject = 13
    } WbemCimtypeEnum;
typedef DECLSPEC_UUID("4A249B7C-FC9A-11d1-8B1E-00600806D9B6")
enum WbemErrorEnum
    {
        wbemNoErr = 0,
        wbemErrFailed = 0x80041001,
        wbemErrNotFound = 0x80041002,
        wbemErrAccessDenied = 0x80041003,
        wbemErrProviderFailure = 0x80041004,
        wbemErrTypeMismatch = 0x80041005,
        wbemErrOutOfMemory = 0x80041006,
        wbemErrInvalidContext = 0x80041007,
        wbemErrInvalidParameter = 0x80041008,
        wbemErrNotAvailable = 0x80041009,
        wbemErrCriticalError = 0x8004100a,
        wbemErrInvalidStream = 0x8004100b,
        wbemErrNotSupported = 0x8004100c,
        wbemErrInvalidSuperclass = 0x8004100d,
        wbemErrInvalidNamespace = 0x8004100e,
        wbemErrInvalidObject = 0x8004100f,
        wbemErrInvalidClass = 0x80041010,
        wbemErrProviderNotFound = 0x80041011,
        wbemErrInvalidProviderRegistration = 0x80041012,
        wbemErrProviderLoadFailure = 0x80041013,
        wbemErrInitializationFailure = 0x80041014,
        wbemErrTransportFailure = 0x80041015,
        wbemErrInvalidOperation = 0x80041016,
        wbemErrInvalidQuery = 0x80041017,
        wbemErrInvalidQueryType = 0x80041018,
        wbemErrAlreadyExists = 0x80041019,
        wbemErrOverrideNotAllowed = 0x8004101a,
        wbemErrPropagatedQualifier = 0x8004101b,
        wbemErrPropagatedProperty = 0x8004101c,
        wbemErrUnexpected = 0x8004101d,
        wbemErrIllegalOperation = 0x8004101e,
        wbemErrCannotBeKey = 0x8004101f,
        wbemErrIncompleteClass = 0x80041020,
        wbemErrInvalidSyntax = 0x80041021,
        wbemErrNondecoratedObject = 0x80041022,
        wbemErrReadOnly = 0x80041023,
        wbemErrProviderNotCapable = 0x80041024,
        wbemErrClassHasChildren = 0x80041025,
        wbemErrClassHasInstances = 0x80041026,
        wbemErrQueryNotImplemented = 0x80041027,
        wbemErrIllegalNull = 0x80041028,
        wbemErrInvalidQualifierType = 0x80041029,
        wbemErrInvalidPropertyType = 0x8004102a,
        wbemErrValueOutOfRange = 0x8004102b,
        wbemErrCannotBeSingleton = 0x8004102c,
        wbemErrInvalidCimType = 0x8004102d,
        wbemErrInvalidMethod = 0x8004102e,
        wbemErrInvalidMethodParameters = 0x8004102f,
        wbemErrSystemProperty = 0x80041030,
        wbemErrInvalidProperty = 0x80041031,
        wbemErrCallCancelled = 0x80041032,
        wbemErrShuttingDown = 0x80041033,
        wbemErrPropagatedMethod = 0x80041034,
        wbemErrUnsupportedParameter = 0x80041035,
        wbemErrMissingParameter = 0x80041036,
        wbemErrInvalidParameterId = 0x80041037,
        wbemErrNonConsecutiveParameterIds = 0x80041038,
        wbemErrParameterIdOnRetval = 0x80041039,
        wbemErrInvalidObjectPath = 0x8004103a,
        wbemErrOutOfDiskSpace = 0x8004103b,
        wbemErrBufferTooSmall = 0x8004103c,
        wbemErrUnsupportedPutExtension = 0x8004103d,
        wbemErrUnknownObjectType = 0x8004103e,
        wbemErrUnknownPacketType = 0x8004103f,
        wbemErrMarshalVersionMismatch = 0x80041040,
        wbemErrMarshalInvalidSignature = 0x80041041,
        wbemErrInvalidQualifier = 0x80041042,
        wbemErrInvalidDuplicateParameter = 0x80041043,
        wbemErrTooMuchData = 0x80041044,
        wbemErrServerTooBusy = 0x80041045,
        wbemErrInvalidFlavor = 0x80041046,
        wbemErrCircularReference = 0x80041047,
        wbemErrUnsupportedClassUpdate = 0x80041048,
        wbemErrCannotChangeKeyInheritance = 0x80041049,
        wbemErrCannotChangeIndexInheritance = 0x80041050,
        wbemErrTooManyProperties = 0x80041051,
        wbemErrUpdateTypeMismatch = 0x80041052,
        wbemErrUpdateOverrideNotAllowed = 0x80041053,
        wbemErrUpdatePropagatedMethod = 0x80041054,
        wbemErrMethodNotImplemented = 0x80041055,
        wbemErrMethodDisabled = 0x80041056,
        wbemErrRefresherBusy = 0x80041057,
        wbemErrUnparsableQuery = 0x80041058,
        wbemErrNotEventClass = 0x80041059,
        wbemErrMissingGroupWithin = 0x8004105a,
        wbemErrMissingAggregationList = 0x8004105b,
        wbemErrPropertyNotAnObject = 0x8004105c,
        wbemErrAggregatingByObject = 0x8004105d,
        wbemErrUninterpretableProviderQuery = 0x8004105f,
        wbemErrBackupRestoreWinmgmtRunning = 0x80041060,
        wbemErrQueueOverflow = 0x80041061,
        wbemErrPrivilegeNotHeld = 0x80041062,
        wbemErrInvalidOperator = 0x80041063,
        wbemErrLocalCredentials = 0x80041064,
        wbemErrCannotBeAbstract = 0x80041065,
        wbemErrAmendedObject = 0x80041066,
        wbemErrClientTooSlow = 0x80041067,
        wbemErrNullSecurityDescriptor = 0x80041068,
        wbemErrTimeout = 0x80041069,
        wbemErrInvalidAssociation = 0x8004106a,
        wbemErrAmbiguousOperation = 0x8004106b,
        wbemErrQuotaViolation = 0x8004106c,
        wbemErrTransactionConflict = 0x8004106d,
        wbemErrForcedRollback = 0x8004106e,
        wbemErrUnsupportedLocale = 0x8004106f,
        wbemErrHandleOutOfDate = 0x80041070,
        wbemErrConnectionFailed = 0x80041071,
        wbemErrInvalidHandleRequest = 0x80041072,
        wbemErrPropertyNameTooWide = 0x80041073,
        wbemErrClassNameTooWide = 0x80041074,
        wbemErrMethodNameTooWide = 0x80041075,
        wbemErrQualifierNameTooWide = 0x80041076,
        wbemErrRerunCommand = 0x80041077,
        wbemErrDatabaseVerMismatch = 0x80041078,
        wbemErrVetoPut = 0x80041079,
        wbemErrVetoDelete = 0x8004107a,
        wbemErrInvalidLocale = 0x80041080,
        wbemErrProviderSuspended = 0x80041081,
        wbemErrSynchronizationRequired = 0x80041082,
        wbemErrNoSchema = 0x80041083,
        wbemErrProviderAlreadyRegistered = 0x80041084,
        wbemErrProviderNotRegistered = 0x80041085,
        wbemErrFatalTransportError = 0x80041086,
        wbemErrEncryptedConnectionRequired = 0x80041087,
        wbemErrRegistrationTooBroad = 0x80042001,
        wbemErrRegistrationTooPrecise = 0x80042002,
        wbemErrTimedout = 0x80043001,
        wbemErrResetToDefault = 0x80043002
    } WbemErrorEnum;
typedef DECLSPEC_UUID("B54D66E7-2287-11d2-8B33-00600806D9B6")
enum WbemAuthenticationLevelEnum
    {
        wbemAuthenticationLevelDefault = 0,
        wbemAuthenticationLevelNone = 1,
        wbemAuthenticationLevelConnect = 2,
        wbemAuthenticationLevelCall = 3,
        wbemAuthenticationLevelPkt = 4,
        wbemAuthenticationLevelPktIntegrity = 5,
        wbemAuthenticationLevelPktPrivacy = 6
    } WbemAuthenticationLevelEnum;
typedef DECLSPEC_UUID("B54D66E8-2287-11d2-8B33-00600806D9B6")
enum WbemImpersonationLevelEnum
    {
        wbemImpersonationLevelAnonymous = 1,
        wbemImpersonationLevelIdentify = 2,
        wbemImpersonationLevelImpersonate = 3,
        wbemImpersonationLevelDelegate = 4
    } WbemImpersonationLevelEnum;
typedef DECLSPEC_UUID("176D2F70-5AF3-11d2-8B4A-00600806D9B6")
enum WbemPrivilegeEnum
    {
        wbemPrivilegeCreateToken = 1,
        wbemPrivilegePrimaryToken = 2,
        wbemPrivilegeLockMemory = 3,
        wbemPrivilegeIncreaseQuota = 4,
        wbemPrivilegeMachineAccount = 5,
        wbemPrivilegeTcb = 6,
        wbemPrivilegeSecurity = 7,
        wbemPrivilegeTakeOwnership = 8,
        wbemPrivilegeLoadDriver = 9,
        wbemPrivilegeSystemProfile = 10,
        wbemPrivilegeSystemtime = 11,
        wbemPrivilegeProfileSingleProcess = 12,
        wbemPrivilegeIncreaseBasePriority = 13,
        wbemPrivilegeCreatePagefile = 14,
        wbemPrivilegeCreatePermanent = 15,
        wbemPrivilegeBackup = 16,
        wbemPrivilegeRestore = 17,
        wbemPrivilegeShutdown = 18,
        wbemPrivilegeDebug = 19,
        wbemPrivilegeAudit = 20,
        wbemPrivilegeSystemEnvironment = 21,
        wbemPrivilegeChangeNotify = 22,
        wbemPrivilegeRemoteShutdown = 23,
        wbemPrivilegeUndock = 24,
        wbemPrivilegeSyncAgent = 25,
        wbemPrivilegeEnableDelegation = 26,
        wbemPrivilegeManageVolume = 27
    } WbemPrivilegeEnum;
typedef DECLSPEC_UUID("09FF1992-EA0E-11d3-B391-00105A1F473A")
enum WbemObjectTextFormatEnum
    {
        wbemObjectTextFormatCIMDTD20 = 1,
        wbemObjectTextFormatWMIDTD20 = 2
    } WbemObjectTextFormatEnum;
typedef
enum WbemConnectOptionsEnum
    {
        wbemConnectFlagUseMaxWait = 0x80
    } WbemConnectOptionsEnum;
EXTERN_C const IID LIBID_WbemScripting;
EXTERN_C const IID IID_ISWbemServices;
    typedef struct ISWbemServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemServices * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemServices * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemServices * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemServices * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemServices * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemServices * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Get )(
            ISWbemServices * This,
                                     BSTR strObjectPath,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObject **objWbemObject);
                               HRESULT ( STDMETHODCALLTYPE *GetAsync )(
            ISWbemServices * This,
                       IDispatch *objWbemSink,
                                     BSTR strObjectPath,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            ISWbemServices * This,
                       BSTR strObjectPath,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet);
                               HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
            ISWbemServices * This,
                       IDispatch *objWbemSink,
                       BSTR strObjectPath,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *InstancesOf )(
            ISWbemServices * This,
                       BSTR strClass,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *InstancesOfAsync )(
            ISWbemServices * This,
                       IDispatch *objWbemSink,
                       BSTR strClass,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *SubclassesOf )(
            ISWbemServices * This,
                                     BSTR strSuperclass,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *SubclassesOfAsync )(
            ISWbemServices * This,
                       IDispatch *objWbemSink,
                                     BSTR strSuperclass,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *ExecQuery )(
            ISWbemServices * This,
                       BSTR strQuery,
                                     BSTR strQueryLanguage,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *ExecQueryAsync )(
            ISWbemServices * This,
                       IDispatch *objWbemSink,
                       BSTR strQuery,
                                     BSTR strQueryLanguage,
                                     long lFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *AssociatorsOf )(
            ISWbemServices * This,
                       BSTR strObjectPath,
                                     BSTR strAssocClass,
                                     BSTR strResultClass,
                                     BSTR strResultRole,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredAssocQualifier,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *AssociatorsOfAsync )(
            ISWbemServices * This,
                       IDispatch *objWbemSink,
                       BSTR strObjectPath,
                                     BSTR strAssocClass,
                                     BSTR strResultClass,
                                     BSTR strResultRole,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredAssocQualifier,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *ReferencesTo )(
            ISWbemServices * This,
                       BSTR strObjectPath,
                                     BSTR strResultClass,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *ReferencesToAsync )(
            ISWbemServices * This,
                       IDispatch *objWbemSink,
                       BSTR strObjectPath,
                                     BSTR strResultClass,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *ExecNotificationQuery )(
            ISWbemServices * This,
                       BSTR strQuery,
                                     BSTR strQueryLanguage,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemEventSource **objWbemEventSource);
                               HRESULT ( STDMETHODCALLTYPE *ExecNotificationQueryAsync )(
            ISWbemServices * This,
                       IDispatch *objWbemSink,
                       BSTR strQuery,
                                     BSTR strQueryLanguage,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *ExecMethod )(
            ISWbemServices * This,
                       BSTR strObjectPath,
                       BSTR strMethodName,
                                     IDispatch *objWbemInParameters,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObject **objWbemOutParameters);
                               HRESULT ( STDMETHODCALLTYPE *ExecMethodAsync )(
            ISWbemServices * This,
                       IDispatch *objWbemSink,
                       BSTR strObjectPath,
                       BSTR strMethodName,
                                     IDispatch *objWbemInParameters,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                                        HRESULT ( STDMETHODCALLTYPE *get_Security_ )(
            ISWbemServices * This,
                                ISWbemSecurity **objWbemSecurity);
        END_INTERFACE
    } ISWbemServicesVtbl;
    interface ISWbemServices
    {
        CONST_VTBL struct ISWbemServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Get(This,strObjectPath,iFlags,objWbemNamedValueSet,objWbemObject) )
    ( (This)->lpVtbl -> GetAsync(This,objWbemSink,strObjectPath,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Delete(This,strObjectPath,iFlags,objWbemNamedValueSet) )
    ( (This)->lpVtbl -> DeleteAsync(This,objWbemSink,strObjectPath,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> InstancesOf(This,strClass,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> InstancesOfAsync(This,objWbemSink,strClass,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> SubclassesOf(This,strSuperclass,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> SubclassesOfAsync(This,objWbemSink,strSuperclass,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> ExecQuery(This,strQuery,strQueryLanguage,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> ExecQueryAsync(This,objWbemSink,strQuery,strQueryLanguage,lFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> AssociatorsOf(This,strObjectPath,strAssocClass,strResultClass,strResultRole,strRole,bClassesOnly,bSchemaOnly,strRequiredAssocQualifier,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> AssociatorsOfAsync(This,objWbemSink,strObjectPath,strAssocClass,strResultClass,strResultRole,strRole,bClassesOnly,bSchemaOnly,strRequiredAssocQualifier,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> ReferencesTo(This,strObjectPath,strResultClass,strRole,bClassesOnly,bSchemaOnly,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> ReferencesToAsync(This,objWbemSink,strObjectPath,strResultClass,strRole,bClassesOnly,bSchemaOnly,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> ExecNotificationQuery(This,strQuery,strQueryLanguage,iFlags,objWbemNamedValueSet,objWbemEventSource) )
    ( (This)->lpVtbl -> ExecNotificationQueryAsync(This,objWbemSink,strQuery,strQueryLanguage,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> ExecMethod(This,strObjectPath,strMethodName,objWbemInParameters,iFlags,objWbemNamedValueSet,objWbemOutParameters) )
    ( (This)->lpVtbl -> ExecMethodAsync(This,objWbemSink,strObjectPath,strMethodName,objWbemInParameters,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> get_Security_(This,objWbemSecurity) )
EXTERN_C const IID IID_ISWbemLocator;
    typedef struct ISWbemLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemLocator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemLocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemLocator * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemLocator * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemLocator * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemLocator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *ConnectServer )(
            ISWbemLocator * This,
                                     BSTR strServer,
                                     BSTR strNamespace,
                                     BSTR strUser,
                                     BSTR strPassword,
                                     BSTR strLocale,
                                     BSTR strAuthority,
                                     long iSecurityFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemServices **objWbemServices);
                                        HRESULT ( STDMETHODCALLTYPE *get_Security_ )(
            ISWbemLocator * This,
                                ISWbemSecurity **objWbemSecurity);
        END_INTERFACE
    } ISWbemLocatorVtbl;
    interface ISWbemLocator
    {
        CONST_VTBL struct ISWbemLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ConnectServer(This,strServer,strNamespace,strUser,strPassword,strLocale,strAuthority,iSecurityFlags,objWbemNamedValueSet,objWbemServices) )
    ( (This)->lpVtbl -> get_Security_(This,objWbemSecurity) )
EXTERN_C const IID IID_ISWbemObject;
    typedef struct ISWbemObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemObject * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemObject * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemObject * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemObject * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemObject * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Put_ )(
            ISWbemObject * This,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectPath **objWbemObjectPath);
                               HRESULT ( STDMETHODCALLTYPE *PutAsync_ )(
            ISWbemObject * This,
                       IDispatch *objWbemSink,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Delete_ )(
            ISWbemObject * This,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet);
                               HRESULT ( STDMETHODCALLTYPE *DeleteAsync_ )(
            ISWbemObject * This,
                       IDispatch *objWbemSink,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Instances_ )(
            ISWbemObject * This,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *InstancesAsync_ )(
            ISWbemObject * This,
                       IDispatch *objWbemSink,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Subclasses_ )(
            ISWbemObject * This,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *SubclassesAsync_ )(
            ISWbemObject * This,
                       IDispatch *objWbemSink,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Associators_ )(
            ISWbemObject * This,
                                     BSTR strAssocClass,
                                     BSTR strResultClass,
                                     BSTR strResultRole,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredAssocQualifier,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *AssociatorsAsync_ )(
            ISWbemObject * This,
                       IDispatch *objWbemSink,
                                     BSTR strAssocClass,
                                     BSTR strResultClass,
                                     BSTR strResultRole,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredAssocQualifier,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *References_ )(
            ISWbemObject * This,
                                     BSTR strResultClass,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *ReferencesAsync_ )(
            ISWbemObject * This,
                       IDispatch *objWbemSink,
                                     BSTR strResultClass,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *ExecMethod_ )(
            ISWbemObject * This,
                       BSTR strMethodName,
                                     IDispatch *objWbemInParameters,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObject **objWbemOutParameters);
                               HRESULT ( STDMETHODCALLTYPE *ExecMethodAsync_ )(
            ISWbemObject * This,
                       IDispatch *objWbemSink,
                       BSTR strMethodName,
                                     IDispatch *objWbemInParameters,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Clone_ )(
            ISWbemObject * This,
                                ISWbemObject **objWbemObject);
                               HRESULT ( STDMETHODCALLTYPE *GetObjectText_ )(
            ISWbemObject * This,
                                     long iFlags,
                                BSTR *strObjectText);
                               HRESULT ( STDMETHODCALLTYPE *SpawnDerivedClass_ )(
            ISWbemObject * This,
                                     long iFlags,
                                ISWbemObject **objWbemObject);
                               HRESULT ( STDMETHODCALLTYPE *SpawnInstance_ )(
            ISWbemObject * This,
                                     long iFlags,
                                ISWbemObject **objWbemObject);
                               HRESULT ( STDMETHODCALLTYPE *CompareTo_ )(
            ISWbemObject * This,
                       IDispatch *objWbemObject,
                                     long iFlags,
                                VARIANT_BOOL *bResult);
                                        HRESULT ( STDMETHODCALLTYPE *get_Qualifiers_ )(
            ISWbemObject * This,
                                ISWbemQualifierSet **objWbemQualifierSet);
                                        HRESULT ( STDMETHODCALLTYPE *get_Properties_ )(
            ISWbemObject * This,
                                ISWbemPropertySet **objWbemPropertySet);
                                        HRESULT ( STDMETHODCALLTYPE *get_Methods_ )(
            ISWbemObject * This,
                                ISWbemMethodSet **objWbemMethodSet);
                                        HRESULT ( STDMETHODCALLTYPE *get_Derivation_ )(
            ISWbemObject * This,
                                VARIANT *strClassNameArray);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path_ )(
            ISWbemObject * This,
                                ISWbemObjectPath **objWbemObjectPath);
                                        HRESULT ( STDMETHODCALLTYPE *get_Security_ )(
            ISWbemObject * This,
                                ISWbemSecurity **objWbemSecurity);
        END_INTERFACE
    } ISWbemObjectVtbl;
    interface ISWbemObject
    {
        CONST_VTBL struct ISWbemObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Put_(This,iFlags,objWbemNamedValueSet,objWbemObjectPath) )
    ( (This)->lpVtbl -> PutAsync_(This,objWbemSink,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Delete_(This,iFlags,objWbemNamedValueSet) )
    ( (This)->lpVtbl -> DeleteAsync_(This,objWbemSink,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Instances_(This,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> InstancesAsync_(This,objWbemSink,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Subclasses_(This,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> SubclassesAsync_(This,objWbemSink,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Associators_(This,strAssocClass,strResultClass,strResultRole,strRole,bClassesOnly,bSchemaOnly,strRequiredAssocQualifier,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> AssociatorsAsync_(This,objWbemSink,strAssocClass,strResultClass,strResultRole,strRole,bClassesOnly,bSchemaOnly,strRequiredAssocQualifier,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> References_(This,strResultClass,strRole,bClassesOnly,bSchemaOnly,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> ReferencesAsync_(This,objWbemSink,strResultClass,strRole,bClassesOnly,bSchemaOnly,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> ExecMethod_(This,strMethodName,objWbemInParameters,iFlags,objWbemNamedValueSet,objWbemOutParameters) )
    ( (This)->lpVtbl -> ExecMethodAsync_(This,objWbemSink,strMethodName,objWbemInParameters,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Clone_(This,objWbemObject) )
    ( (This)->lpVtbl -> GetObjectText_(This,iFlags,strObjectText) )
    ( (This)->lpVtbl -> SpawnDerivedClass_(This,iFlags,objWbemObject) )
    ( (This)->lpVtbl -> SpawnInstance_(This,iFlags,objWbemObject) )
    ( (This)->lpVtbl -> CompareTo_(This,objWbemObject,iFlags,bResult) )
    ( (This)->lpVtbl -> get_Qualifiers_(This,objWbemQualifierSet) )
    ( (This)->lpVtbl -> get_Properties_(This,objWbemPropertySet) )
    ( (This)->lpVtbl -> get_Methods_(This,objWbemMethodSet) )
    ( (This)->lpVtbl -> get_Derivation_(This,strClassNameArray) )
    ( (This)->lpVtbl -> get_Path_(This,objWbemObjectPath) )
    ( (This)->lpVtbl -> get_Security_(This,objWbemSecurity) )
EXTERN_C const IID IID_ISWbemObjectSet;
    typedef struct ISWbemObjectSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemObjectSet * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemObjectSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemObjectSet * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemObjectSet * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemObjectSet * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemObjectSet * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemObjectSet * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            ISWbemObjectSet * This,
                                IUnknown **pUnk);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            ISWbemObjectSet * This,
                       BSTR strObjectPath,
                                     long iFlags,
                                ISWbemObject **objWbemObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            ISWbemObjectSet * This,
                                long *iCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_Security_ )(
            ISWbemObjectSet * This,
                                ISWbemSecurity **objWbemSecurity);
                               HRESULT ( STDMETHODCALLTYPE *ItemIndex )(
            ISWbemObjectSet * This,
                       long lIndex,
                                ISWbemObject **objWbemObject);
        END_INTERFACE
    } ISWbemObjectSetVtbl;
    interface ISWbemObjectSet
    {
        CONST_VTBL struct ISWbemObjectSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,pUnk) )
    ( (This)->lpVtbl -> Item(This,strObjectPath,iFlags,objWbemObject) )
    ( (This)->lpVtbl -> get_Count(This,iCount) )
    ( (This)->lpVtbl -> get_Security_(This,objWbemSecurity) )
    ( (This)->lpVtbl -> ItemIndex(This,lIndex,objWbemObject) )
EXTERN_C const IID IID_ISWbemNamedValue;
    typedef struct ISWbemNamedValueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemNamedValue * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemNamedValue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemNamedValue * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemNamedValue * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemNamedValue * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemNamedValue * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemNamedValue * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            ISWbemNamedValue * This,
                                VARIANT *varValue);
                            HRESULT ( STDMETHODCALLTYPE *put_Value )(
            ISWbemNamedValue * This,
                       VARIANT *varValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            ISWbemNamedValue * This,
                                BSTR *strName);
        END_INTERFACE
    } ISWbemNamedValueVtbl;
    interface ISWbemNamedValue
    {
        CONST_VTBL struct ISWbemNamedValueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Value(This,varValue) )
    ( (This)->lpVtbl -> put_Value(This,varValue) )
    ( (This)->lpVtbl -> get_Name(This,strName) )
EXTERN_C const IID IID_ISWbemNamedValueSet;
    typedef struct ISWbemNamedValueSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemNamedValueSet * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemNamedValueSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemNamedValueSet * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemNamedValueSet * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemNamedValueSet * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemNamedValueSet * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemNamedValueSet * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            ISWbemNamedValueSet * This,
                                IUnknown **pUnk);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            ISWbemNamedValueSet * This,
                       BSTR strName,
                                     long iFlags,
                                ISWbemNamedValue **objWbemNamedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            ISWbemNamedValueSet * This,
                                long *iCount);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            ISWbemNamedValueSet * This,
                       BSTR strName,
                       VARIANT *varValue,
                                     long iFlags,
                                ISWbemNamedValue **objWbemNamedValue);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            ISWbemNamedValueSet * This,
                       BSTR strName,
                                     long iFlags);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            ISWbemNamedValueSet * This,
                                ISWbemNamedValueSet **objWbemNamedValueSet);
                               HRESULT ( STDMETHODCALLTYPE *DeleteAll )(
            ISWbemNamedValueSet * This);
        END_INTERFACE
    } ISWbemNamedValueSetVtbl;
    interface ISWbemNamedValueSet
    {
        CONST_VTBL struct ISWbemNamedValueSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,pUnk) )
    ( (This)->lpVtbl -> Item(This,strName,iFlags,objWbemNamedValue) )
    ( (This)->lpVtbl -> get_Count(This,iCount) )
    ( (This)->lpVtbl -> Add(This,strName,varValue,iFlags,objWbemNamedValue) )
    ( (This)->lpVtbl -> Remove(This,strName,iFlags) )
    ( (This)->lpVtbl -> Clone(This,objWbemNamedValueSet) )
    ( (This)->lpVtbl -> DeleteAll(This) )
EXTERN_C const IID IID_ISWbemQualifier;
    typedef struct ISWbemQualifierVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemQualifier * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemQualifier * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemQualifier * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemQualifier * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemQualifier * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemQualifier * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemQualifier * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            ISWbemQualifier * This,
                                VARIANT *varValue);
                            HRESULT ( STDMETHODCALLTYPE *put_Value )(
            ISWbemQualifier * This,
                       VARIANT *varValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            ISWbemQualifier * This,
                                BSTR *strName);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsLocal )(
            ISWbemQualifier * This,
                                VARIANT_BOOL *bIsLocal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PropagatesToSubclass )(
            ISWbemQualifier * This,
                                VARIANT_BOOL *bPropagatesToSubclass);
                            HRESULT ( STDMETHODCALLTYPE *put_PropagatesToSubclass )(
            ISWbemQualifier * This,
                       VARIANT_BOOL bPropagatesToSubclass);
                                        HRESULT ( STDMETHODCALLTYPE *get_PropagatesToInstance )(
            ISWbemQualifier * This,
                                VARIANT_BOOL *bPropagatesToInstance);
                            HRESULT ( STDMETHODCALLTYPE *put_PropagatesToInstance )(
            ISWbemQualifier * This,
                       VARIANT_BOOL bPropagatesToInstance);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsOverridable )(
            ISWbemQualifier * This,
                                VARIANT_BOOL *bIsOverridable);
                            HRESULT ( STDMETHODCALLTYPE *put_IsOverridable )(
            ISWbemQualifier * This,
                       VARIANT_BOOL bIsOverridable);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsAmended )(
            ISWbemQualifier * This,
                                VARIANT_BOOL *bIsAmended);
        END_INTERFACE
    } ISWbemQualifierVtbl;
    interface ISWbemQualifier
    {
        CONST_VTBL struct ISWbemQualifierVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Value(This,varValue) )
    ( (This)->lpVtbl -> put_Value(This,varValue) )
    ( (This)->lpVtbl -> get_Name(This,strName) )
    ( (This)->lpVtbl -> get_IsLocal(This,bIsLocal) )
    ( (This)->lpVtbl -> get_PropagatesToSubclass(This,bPropagatesToSubclass) )
    ( (This)->lpVtbl -> put_PropagatesToSubclass(This,bPropagatesToSubclass) )
    ( (This)->lpVtbl -> get_PropagatesToInstance(This,bPropagatesToInstance) )
    ( (This)->lpVtbl -> put_PropagatesToInstance(This,bPropagatesToInstance) )
    ( (This)->lpVtbl -> get_IsOverridable(This,bIsOverridable) )
    ( (This)->lpVtbl -> put_IsOverridable(This,bIsOverridable) )
    ( (This)->lpVtbl -> get_IsAmended(This,bIsAmended) )
EXTERN_C const IID IID_ISWbemQualifierSet;
    typedef struct ISWbemQualifierSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemQualifierSet * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemQualifierSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemQualifierSet * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemQualifierSet * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemQualifierSet * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemQualifierSet * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemQualifierSet * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            ISWbemQualifierSet * This,
                                IUnknown **pUnk);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            ISWbemQualifierSet * This,
                       BSTR name,
                                     long iFlags,
                                ISWbemQualifier **objWbemQualifier);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            ISWbemQualifierSet * This,
                                long *iCount);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            ISWbemQualifierSet * This,
                       BSTR strName,
                       VARIANT *varVal,
                                     VARIANT_BOOL bPropagatesToSubclass,
                                     VARIANT_BOOL bPropagatesToInstance,
                                     VARIANT_BOOL bIsOverridable,
                                     long iFlags,
                                ISWbemQualifier **objWbemQualifier);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            ISWbemQualifierSet * This,
                       BSTR strName,
                                     long iFlags);
        END_INTERFACE
    } ISWbemQualifierSetVtbl;
    interface ISWbemQualifierSet
    {
        CONST_VTBL struct ISWbemQualifierSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,pUnk) )
    ( (This)->lpVtbl -> Item(This,name,iFlags,objWbemQualifier) )
    ( (This)->lpVtbl -> get_Count(This,iCount) )
    ( (This)->lpVtbl -> Add(This,strName,varVal,bPropagatesToSubclass,bPropagatesToInstance,bIsOverridable,iFlags,objWbemQualifier) )
    ( (This)->lpVtbl -> Remove(This,strName,iFlags) )
EXTERN_C const IID IID_ISWbemProperty;
    typedef struct ISWbemPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemProperty * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemProperty * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemProperty * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemProperty * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemProperty * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            ISWbemProperty * This,
                                VARIANT *varValue);
                            HRESULT ( STDMETHODCALLTYPE *put_Value )(
            ISWbemProperty * This,
                       VARIANT *varValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            ISWbemProperty * This,
                                BSTR *strName);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsLocal )(
            ISWbemProperty * This,
                                VARIANT_BOOL *bIsLocal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Origin )(
            ISWbemProperty * This,
                                BSTR *strOrigin);
                                        HRESULT ( STDMETHODCALLTYPE *get_CIMType )(
            ISWbemProperty * This,
                                WbemCimtypeEnum *iCimType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Qualifiers_ )(
            ISWbemProperty * This,
                                ISWbemQualifierSet **objWbemQualifierSet);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsArray )(
            ISWbemProperty * This,
                                VARIANT_BOOL *bIsArray);
        END_INTERFACE
    } ISWbemPropertyVtbl;
    interface ISWbemProperty
    {
        CONST_VTBL struct ISWbemPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Value(This,varValue) )
    ( (This)->lpVtbl -> put_Value(This,varValue) )
    ( (This)->lpVtbl -> get_Name(This,strName) )
    ( (This)->lpVtbl -> get_IsLocal(This,bIsLocal) )
    ( (This)->lpVtbl -> get_Origin(This,strOrigin) )
    ( (This)->lpVtbl -> get_CIMType(This,iCimType) )
    ( (This)->lpVtbl -> get_Qualifiers_(This,objWbemQualifierSet) )
    ( (This)->lpVtbl -> get_IsArray(This,bIsArray) )
EXTERN_C const IID IID_ISWbemPropertySet;
    typedef struct ISWbemPropertySetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemPropertySet * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemPropertySet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemPropertySet * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemPropertySet * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemPropertySet * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemPropertySet * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemPropertySet * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            ISWbemPropertySet * This,
                                IUnknown **pUnk);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            ISWbemPropertySet * This,
                       BSTR strName,
                                     long iFlags,
                                ISWbemProperty **objWbemProperty);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            ISWbemPropertySet * This,
                                long *iCount);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            ISWbemPropertySet * This,
                       BSTR strName,
                       WbemCimtypeEnum iCIMType,
                                     VARIANT_BOOL bIsArray,
                                     long iFlags,
                                ISWbemProperty **objWbemProperty);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            ISWbemPropertySet * This,
                       BSTR strName,
                                     long iFlags);
        END_INTERFACE
    } ISWbemPropertySetVtbl;
    interface ISWbemPropertySet
    {
        CONST_VTBL struct ISWbemPropertySetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,pUnk) )
    ( (This)->lpVtbl -> Item(This,strName,iFlags,objWbemProperty) )
    ( (This)->lpVtbl -> get_Count(This,iCount) )
    ( (This)->lpVtbl -> Add(This,strName,iCIMType,bIsArray,iFlags,objWbemProperty) )
    ( (This)->lpVtbl -> Remove(This,strName,iFlags) )
EXTERN_C const IID IID_ISWbemMethod;
    typedef struct ISWbemMethodVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemMethod * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemMethod * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemMethod * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemMethod * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemMethod * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemMethod * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemMethod * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            ISWbemMethod * This,
                                BSTR *strName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Origin )(
            ISWbemMethod * This,
                                BSTR *strOrigin);
                                        HRESULT ( STDMETHODCALLTYPE *get_InParameters )(
            ISWbemMethod * This,
                                ISWbemObject **objWbemInParameters);
                                        HRESULT ( STDMETHODCALLTYPE *get_OutParameters )(
            ISWbemMethod * This,
                                ISWbemObject **objWbemOutParameters);
                                        HRESULT ( STDMETHODCALLTYPE *get_Qualifiers_ )(
            ISWbemMethod * This,
                                ISWbemQualifierSet **objWbemQualifierSet);
        END_INTERFACE
    } ISWbemMethodVtbl;
    interface ISWbemMethod
    {
        CONST_VTBL struct ISWbemMethodVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,strName) )
    ( (This)->lpVtbl -> get_Origin(This,strOrigin) )
    ( (This)->lpVtbl -> get_InParameters(This,objWbemInParameters) )
    ( (This)->lpVtbl -> get_OutParameters(This,objWbemOutParameters) )
    ( (This)->lpVtbl -> get_Qualifiers_(This,objWbemQualifierSet) )
EXTERN_C const IID IID_ISWbemMethodSet;
    typedef struct ISWbemMethodSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemMethodSet * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemMethodSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemMethodSet * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemMethodSet * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemMethodSet * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemMethodSet * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemMethodSet * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            ISWbemMethodSet * This,
                                IUnknown **pUnk);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            ISWbemMethodSet * This,
                       BSTR strName,
                                     long iFlags,
                                ISWbemMethod **objWbemMethod);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            ISWbemMethodSet * This,
                                long *iCount);
        END_INTERFACE
    } ISWbemMethodSetVtbl;
    interface ISWbemMethodSet
    {
        CONST_VTBL struct ISWbemMethodSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,pUnk) )
    ( (This)->lpVtbl -> Item(This,strName,iFlags,objWbemMethod) )
    ( (This)->lpVtbl -> get_Count(This,iCount) )
EXTERN_C const IID IID_ISWbemEventSource;
    typedef struct ISWbemEventSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemEventSource * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemEventSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemEventSource * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemEventSource * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemEventSource * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemEventSource * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemEventSource * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *NextEvent )(
            ISWbemEventSource * This,
                                     long iTimeoutMs,
                                ISWbemObject **objWbemObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_Security_ )(
            ISWbemEventSource * This,
                                ISWbemSecurity **objWbemSecurity);
        END_INTERFACE
    } ISWbemEventSourceVtbl;
    interface ISWbemEventSource
    {
        CONST_VTBL struct ISWbemEventSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> NextEvent(This,iTimeoutMs,objWbemObject) )
    ( (This)->lpVtbl -> get_Security_(This,objWbemSecurity) )
EXTERN_C const IID IID_ISWbemObjectPath;
    typedef struct ISWbemObjectPathVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemObjectPath * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemObjectPath * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemObjectPath * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemObjectPath * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemObjectPath * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemObjectPath * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemObjectPath * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            ISWbemObjectPath * This,
                                BSTR *strPath);
                            HRESULT ( STDMETHODCALLTYPE *put_Path )(
            ISWbemObjectPath * This,
                       BSTR strPath);
                                        HRESULT ( STDMETHODCALLTYPE *get_RelPath )(
            ISWbemObjectPath * This,
                                BSTR *strRelPath);
                            HRESULT ( STDMETHODCALLTYPE *put_RelPath )(
            ISWbemObjectPath * This,
                       BSTR strRelPath);
                                        HRESULT ( STDMETHODCALLTYPE *get_Server )(
            ISWbemObjectPath * This,
                                BSTR *strServer);
                            HRESULT ( STDMETHODCALLTYPE *put_Server )(
            ISWbemObjectPath * This,
                       BSTR strServer);
                                        HRESULT ( STDMETHODCALLTYPE *get_Namespace )(
            ISWbemObjectPath * This,
                                BSTR *strNamespace);
                            HRESULT ( STDMETHODCALLTYPE *put_Namespace )(
            ISWbemObjectPath * This,
                       BSTR strNamespace);
                                        HRESULT ( STDMETHODCALLTYPE *get_ParentNamespace )(
            ISWbemObjectPath * This,
                                BSTR *strParentNamespace);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            ISWbemObjectPath * This,
                                BSTR *strDisplayName);
                            HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
            ISWbemObjectPath * This,
                       BSTR strDisplayName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Class )(
            ISWbemObjectPath * This,
                                BSTR *strClass);
                            HRESULT ( STDMETHODCALLTYPE *put_Class )(
            ISWbemObjectPath * This,
                       BSTR strClass);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsClass )(
            ISWbemObjectPath * This,
                                VARIANT_BOOL *bIsClass);
                               HRESULT ( STDMETHODCALLTYPE *SetAsClass )(
            ISWbemObjectPath * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsSingleton )(
            ISWbemObjectPath * This,
                                VARIANT_BOOL *bIsSingleton);
                               HRESULT ( STDMETHODCALLTYPE *SetAsSingleton )(
            ISWbemObjectPath * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Keys )(
            ISWbemObjectPath * This,
                                ISWbemNamedValueSet **objWbemNamedValueSet);
                                        HRESULT ( STDMETHODCALLTYPE *get_Security_ )(
            ISWbemObjectPath * This,
                                ISWbemSecurity **objWbemSecurity);
                                        HRESULT ( STDMETHODCALLTYPE *get_Locale )(
            ISWbemObjectPath * This,
                                BSTR *strLocale);
                            HRESULT ( STDMETHODCALLTYPE *put_Locale )(
            ISWbemObjectPath * This,
                       BSTR strLocale);
                                        HRESULT ( STDMETHODCALLTYPE *get_Authority )(
            ISWbemObjectPath * This,
                                BSTR *strAuthority);
                            HRESULT ( STDMETHODCALLTYPE *put_Authority )(
            ISWbemObjectPath * This,
                       BSTR strAuthority);
        END_INTERFACE
    } ISWbemObjectPathVtbl;
    interface ISWbemObjectPath
    {
        CONST_VTBL struct ISWbemObjectPathVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Path(This,strPath) )
    ( (This)->lpVtbl -> put_Path(This,strPath) )
    ( (This)->lpVtbl -> get_RelPath(This,strRelPath) )
    ( (This)->lpVtbl -> put_RelPath(This,strRelPath) )
    ( (This)->lpVtbl -> get_Server(This,strServer) )
    ( (This)->lpVtbl -> put_Server(This,strServer) )
    ( (This)->lpVtbl -> get_Namespace(This,strNamespace) )
    ( (This)->lpVtbl -> put_Namespace(This,strNamespace) )
    ( (This)->lpVtbl -> get_ParentNamespace(This,strParentNamespace) )
    ( (This)->lpVtbl -> get_DisplayName(This,strDisplayName) )
    ( (This)->lpVtbl -> put_DisplayName(This,strDisplayName) )
    ( (This)->lpVtbl -> get_Class(This,strClass) )
    ( (This)->lpVtbl -> put_Class(This,strClass) )
    ( (This)->lpVtbl -> get_IsClass(This,bIsClass) )
    ( (This)->lpVtbl -> SetAsClass(This) )
    ( (This)->lpVtbl -> get_IsSingleton(This,bIsSingleton) )
    ( (This)->lpVtbl -> SetAsSingleton(This) )
    ( (This)->lpVtbl -> get_Keys(This,objWbemNamedValueSet) )
    ( (This)->lpVtbl -> get_Security_(This,objWbemSecurity) )
    ( (This)->lpVtbl -> get_Locale(This,strLocale) )
    ( (This)->lpVtbl -> put_Locale(This,strLocale) )
    ( (This)->lpVtbl -> get_Authority(This,strAuthority) )
    ( (This)->lpVtbl -> put_Authority(This,strAuthority) )
EXTERN_C const IID IID_ISWbemLastError;
    typedef struct ISWbemLastErrorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemLastError * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemLastError * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemLastError * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemLastError * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemLastError * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemLastError * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemLastError * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Put_ )(
            ISWbemLastError * This,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectPath **objWbemObjectPath);
                               HRESULT ( STDMETHODCALLTYPE *PutAsync_ )(
            ISWbemLastError * This,
                       IDispatch *objWbemSink,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Delete_ )(
            ISWbemLastError * This,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet);
                               HRESULT ( STDMETHODCALLTYPE *DeleteAsync_ )(
            ISWbemLastError * This,
                       IDispatch *objWbemSink,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Instances_ )(
            ISWbemLastError * This,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *InstancesAsync_ )(
            ISWbemLastError * This,
                       IDispatch *objWbemSink,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Subclasses_ )(
            ISWbemLastError * This,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *SubclassesAsync_ )(
            ISWbemLastError * This,
                       IDispatch *objWbemSink,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Associators_ )(
            ISWbemLastError * This,
                                     BSTR strAssocClass,
                                     BSTR strResultClass,
                                     BSTR strResultRole,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredAssocQualifier,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *AssociatorsAsync_ )(
            ISWbemLastError * This,
                       IDispatch *objWbemSink,
                                     BSTR strAssocClass,
                                     BSTR strResultClass,
                                     BSTR strResultRole,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredAssocQualifier,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *References_ )(
            ISWbemLastError * This,
                                     BSTR strResultClass,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *ReferencesAsync_ )(
            ISWbemLastError * This,
                       IDispatch *objWbemSink,
                                     BSTR strResultClass,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *ExecMethod_ )(
            ISWbemLastError * This,
                       BSTR strMethodName,
                                     IDispatch *objWbemInParameters,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObject **objWbemOutParameters);
                               HRESULT ( STDMETHODCALLTYPE *ExecMethodAsync_ )(
            ISWbemLastError * This,
                       IDispatch *objWbemSink,
                       BSTR strMethodName,
                                     IDispatch *objWbemInParameters,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Clone_ )(
            ISWbemLastError * This,
                                ISWbemObject **objWbemObject);
                               HRESULT ( STDMETHODCALLTYPE *GetObjectText_ )(
            ISWbemLastError * This,
                                     long iFlags,
                                BSTR *strObjectText);
                               HRESULT ( STDMETHODCALLTYPE *SpawnDerivedClass_ )(
            ISWbemLastError * This,
                                     long iFlags,
                                ISWbemObject **objWbemObject);
                               HRESULT ( STDMETHODCALLTYPE *SpawnInstance_ )(
            ISWbemLastError * This,
                                     long iFlags,
                                ISWbemObject **objWbemObject);
                               HRESULT ( STDMETHODCALLTYPE *CompareTo_ )(
            ISWbemLastError * This,
                       IDispatch *objWbemObject,
                                     long iFlags,
                                VARIANT_BOOL *bResult);
                                        HRESULT ( STDMETHODCALLTYPE *get_Qualifiers_ )(
            ISWbemLastError * This,
                                ISWbemQualifierSet **objWbemQualifierSet);
                                        HRESULT ( STDMETHODCALLTYPE *get_Properties_ )(
            ISWbemLastError * This,
                                ISWbemPropertySet **objWbemPropertySet);
                                        HRESULT ( STDMETHODCALLTYPE *get_Methods_ )(
            ISWbemLastError * This,
                                ISWbemMethodSet **objWbemMethodSet);
                                        HRESULT ( STDMETHODCALLTYPE *get_Derivation_ )(
            ISWbemLastError * This,
                                VARIANT *strClassNameArray);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path_ )(
            ISWbemLastError * This,
                                ISWbemObjectPath **objWbemObjectPath);
                                        HRESULT ( STDMETHODCALLTYPE *get_Security_ )(
            ISWbemLastError * This,
                                ISWbemSecurity **objWbemSecurity);
        END_INTERFACE
    } ISWbemLastErrorVtbl;
    interface ISWbemLastError
    {
        CONST_VTBL struct ISWbemLastErrorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Put_(This,iFlags,objWbemNamedValueSet,objWbemObjectPath) )
    ( (This)->lpVtbl -> PutAsync_(This,objWbemSink,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Delete_(This,iFlags,objWbemNamedValueSet) )
    ( (This)->lpVtbl -> DeleteAsync_(This,objWbemSink,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Instances_(This,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> InstancesAsync_(This,objWbemSink,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Subclasses_(This,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> SubclassesAsync_(This,objWbemSink,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Associators_(This,strAssocClass,strResultClass,strResultRole,strRole,bClassesOnly,bSchemaOnly,strRequiredAssocQualifier,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> AssociatorsAsync_(This,objWbemSink,strAssocClass,strResultClass,strResultRole,strRole,bClassesOnly,bSchemaOnly,strRequiredAssocQualifier,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> References_(This,strResultClass,strRole,bClassesOnly,bSchemaOnly,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> ReferencesAsync_(This,objWbemSink,strResultClass,strRole,bClassesOnly,bSchemaOnly,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> ExecMethod_(This,strMethodName,objWbemInParameters,iFlags,objWbemNamedValueSet,objWbemOutParameters) )
    ( (This)->lpVtbl -> ExecMethodAsync_(This,objWbemSink,strMethodName,objWbemInParameters,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Clone_(This,objWbemObject) )
    ( (This)->lpVtbl -> GetObjectText_(This,iFlags,strObjectText) )
    ( (This)->lpVtbl -> SpawnDerivedClass_(This,iFlags,objWbemObject) )
    ( (This)->lpVtbl -> SpawnInstance_(This,iFlags,objWbemObject) )
    ( (This)->lpVtbl -> CompareTo_(This,objWbemObject,iFlags,bResult) )
    ( (This)->lpVtbl -> get_Qualifiers_(This,objWbemQualifierSet) )
    ( (This)->lpVtbl -> get_Properties_(This,objWbemPropertySet) )
    ( (This)->lpVtbl -> get_Methods_(This,objWbemMethodSet) )
    ( (This)->lpVtbl -> get_Derivation_(This,strClassNameArray) )
    ( (This)->lpVtbl -> get_Path_(This,objWbemObjectPath) )
    ( (This)->lpVtbl -> get_Security_(This,objWbemSecurity) )
EXTERN_C const IID DIID_ISWbemSinkEvents;
    typedef struct ISWbemSinkEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISWbemSinkEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISWbemSinkEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISWbemSinkEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISWbemSinkEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISWbemSinkEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISWbemSinkEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemSinkEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } ISWbemSinkEventsVtbl;
    interface ISWbemSinkEvents
    {
        CONST_VTBL struct ISWbemSinkEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_ISWbemSink;
    typedef struct ISWbemSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISWbemSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISWbemSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISWbemSink * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISWbemSink * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISWbemSink * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISWbemSink * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemSink * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in ISWbemSink * This);
        END_INTERFACE
    } ISWbemSinkVtbl;
    interface ISWbemSink
    {
        CONST_VTBL struct ISWbemSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID IID_ISWbemSecurity;
    typedef struct ISWbemSecurityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemSecurity * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemSecurity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemSecurity * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemSecurity * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemSecurity * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemSecurity * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemSecurity * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ImpersonationLevel )(
            ISWbemSecurity * This,
                                WbemImpersonationLevelEnum *iImpersonationLevel);
                            HRESULT ( STDMETHODCALLTYPE *put_ImpersonationLevel )(
            ISWbemSecurity * This,
                       WbemImpersonationLevelEnum iImpersonationLevel);
                                        HRESULT ( STDMETHODCALLTYPE *get_AuthenticationLevel )(
            ISWbemSecurity * This,
                                WbemAuthenticationLevelEnum *iAuthenticationLevel);
                            HRESULT ( STDMETHODCALLTYPE *put_AuthenticationLevel )(
            ISWbemSecurity * This,
                       WbemAuthenticationLevelEnum iAuthenticationLevel);
                                        HRESULT ( STDMETHODCALLTYPE *get_Privileges )(
            ISWbemSecurity * This,
                                ISWbemPrivilegeSet **objWbemPrivilegeSet);
        END_INTERFACE
    } ISWbemSecurityVtbl;
    interface ISWbemSecurity
    {
        CONST_VTBL struct ISWbemSecurityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ImpersonationLevel(This,iImpersonationLevel) )
    ( (This)->lpVtbl -> put_ImpersonationLevel(This,iImpersonationLevel) )
    ( (This)->lpVtbl -> get_AuthenticationLevel(This,iAuthenticationLevel) )
    ( (This)->lpVtbl -> put_AuthenticationLevel(This,iAuthenticationLevel) )
    ( (This)->lpVtbl -> get_Privileges(This,objWbemPrivilegeSet) )
EXTERN_C const IID IID_ISWbemPrivilege;
    typedef struct ISWbemPrivilegeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemPrivilege * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemPrivilege * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemPrivilege * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemPrivilege * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemPrivilege * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemPrivilege * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemPrivilege * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
            ISWbemPrivilege * This,
                                VARIANT_BOOL *bIsEnabled);
                            HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
            ISWbemPrivilege * This,
                       VARIANT_BOOL bIsEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            ISWbemPrivilege * This,
                                BSTR *strDisplayName);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            ISWbemPrivilege * This,
                                BSTR *strDisplayName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Identifier )(
            ISWbemPrivilege * This,
                                WbemPrivilegeEnum *iPrivilege);
        END_INTERFACE
    } ISWbemPrivilegeVtbl;
    interface ISWbemPrivilege
    {
        CONST_VTBL struct ISWbemPrivilegeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_IsEnabled(This,bIsEnabled) )
    ( (This)->lpVtbl -> put_IsEnabled(This,bIsEnabled) )
    ( (This)->lpVtbl -> get_Name(This,strDisplayName) )
    ( (This)->lpVtbl -> get_DisplayName(This,strDisplayName) )
    ( (This)->lpVtbl -> get_Identifier(This,iPrivilege) )
EXTERN_C const IID IID_ISWbemPrivilegeSet;
    typedef struct ISWbemPrivilegeSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemPrivilegeSet * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemPrivilegeSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemPrivilegeSet * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemPrivilegeSet * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemPrivilegeSet * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemPrivilegeSet * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemPrivilegeSet * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            ISWbemPrivilegeSet * This,
                                IUnknown **pUnk);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            ISWbemPrivilegeSet * This,
                       WbemPrivilegeEnum iPrivilege,
                                ISWbemPrivilege **objWbemPrivilege);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            ISWbemPrivilegeSet * This,
                                long *iCount);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            ISWbemPrivilegeSet * This,
                       WbemPrivilegeEnum iPrivilege,
                                     VARIANT_BOOL bIsEnabled,
                                ISWbemPrivilege **objWbemPrivilege);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            ISWbemPrivilegeSet * This,
                       WbemPrivilegeEnum iPrivilege);
                               HRESULT ( STDMETHODCALLTYPE *DeleteAll )(
            ISWbemPrivilegeSet * This);
                               HRESULT ( STDMETHODCALLTYPE *AddAsString )(
            ISWbemPrivilegeSet * This,
                       BSTR strPrivilege,
                                     VARIANT_BOOL bIsEnabled,
                                ISWbemPrivilege **objWbemPrivilege);
        END_INTERFACE
    } ISWbemPrivilegeSetVtbl;
    interface ISWbemPrivilegeSet
    {
        CONST_VTBL struct ISWbemPrivilegeSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,pUnk) )
    ( (This)->lpVtbl -> Item(This,iPrivilege,objWbemPrivilege) )
    ( (This)->lpVtbl -> get_Count(This,iCount) )
    ( (This)->lpVtbl -> Add(This,iPrivilege,bIsEnabled,objWbemPrivilege) )
    ( (This)->lpVtbl -> Remove(This,iPrivilege) )
    ( (This)->lpVtbl -> DeleteAll(This) )
    ( (This)->lpVtbl -> AddAsString(This,strPrivilege,bIsEnabled,objWbemPrivilege) )
EXTERN_C const IID IID_ISWbemServicesEx;
    typedef struct ISWbemServicesExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemServicesEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemServicesEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemServicesEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemServicesEx * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemServicesEx * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemServicesEx * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemServicesEx * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Get )(
            ISWbemServicesEx * This,
                                     BSTR strObjectPath,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObject **objWbemObject);
                               HRESULT ( STDMETHODCALLTYPE *GetAsync )(
            ISWbemServicesEx * This,
                       IDispatch *objWbemSink,
                                     BSTR strObjectPath,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            ISWbemServicesEx * This,
                       BSTR strObjectPath,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet);
                               HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
            ISWbemServicesEx * This,
                       IDispatch *objWbemSink,
                       BSTR strObjectPath,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *InstancesOf )(
            ISWbemServicesEx * This,
                       BSTR strClass,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *InstancesOfAsync )(
            ISWbemServicesEx * This,
                       IDispatch *objWbemSink,
                       BSTR strClass,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *SubclassesOf )(
            ISWbemServicesEx * This,
                                     BSTR strSuperclass,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *SubclassesOfAsync )(
            ISWbemServicesEx * This,
                       IDispatch *objWbemSink,
                                     BSTR strSuperclass,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *ExecQuery )(
            ISWbemServicesEx * This,
                       BSTR strQuery,
                                     BSTR strQueryLanguage,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *ExecQueryAsync )(
            ISWbemServicesEx * This,
                       IDispatch *objWbemSink,
                       BSTR strQuery,
                                     BSTR strQueryLanguage,
                                     long lFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *AssociatorsOf )(
            ISWbemServicesEx * This,
                       BSTR strObjectPath,
                                     BSTR strAssocClass,
                                     BSTR strResultClass,
                                     BSTR strResultRole,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredAssocQualifier,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *AssociatorsOfAsync )(
            ISWbemServicesEx * This,
                       IDispatch *objWbemSink,
                       BSTR strObjectPath,
                                     BSTR strAssocClass,
                                     BSTR strResultClass,
                                     BSTR strResultRole,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredAssocQualifier,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *ReferencesTo )(
            ISWbemServicesEx * This,
                       BSTR strObjectPath,
                                     BSTR strResultClass,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *ReferencesToAsync )(
            ISWbemServicesEx * This,
                       IDispatch *objWbemSink,
                       BSTR strObjectPath,
                                     BSTR strResultClass,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *ExecNotificationQuery )(
            ISWbemServicesEx * This,
                       BSTR strQuery,
                                     BSTR strQueryLanguage,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemEventSource **objWbemEventSource);
                               HRESULT ( STDMETHODCALLTYPE *ExecNotificationQueryAsync )(
            ISWbemServicesEx * This,
                       IDispatch *objWbemSink,
                       BSTR strQuery,
                                     BSTR strQueryLanguage,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *ExecMethod )(
            ISWbemServicesEx * This,
                       BSTR strObjectPath,
                       BSTR strMethodName,
                                     IDispatch *objWbemInParameters,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObject **objWbemOutParameters);
                               HRESULT ( STDMETHODCALLTYPE *ExecMethodAsync )(
            ISWbemServicesEx * This,
                       IDispatch *objWbemSink,
                       BSTR strObjectPath,
                       BSTR strMethodName,
                                     IDispatch *objWbemInParameters,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                                        HRESULT ( STDMETHODCALLTYPE *get_Security_ )(
            ISWbemServicesEx * This,
                                ISWbemSecurity **objWbemSecurity);
                               HRESULT ( STDMETHODCALLTYPE *Put )(
            ISWbemServicesEx * This,
                       ISWbemObjectEx *objWbemObject,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectPath **objWbemObjectPath);
                               HRESULT ( STDMETHODCALLTYPE *PutAsync )(
            ISWbemServicesEx * This,
                       ISWbemSink *objWbemSink,
                       ISWbemObjectEx *objWbemObject,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
        END_INTERFACE
    } ISWbemServicesExVtbl;
    interface ISWbemServicesEx
    {
        CONST_VTBL struct ISWbemServicesExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Get(This,strObjectPath,iFlags,objWbemNamedValueSet,objWbemObject) )
    ( (This)->lpVtbl -> GetAsync(This,objWbemSink,strObjectPath,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Delete(This,strObjectPath,iFlags,objWbemNamedValueSet) )
    ( (This)->lpVtbl -> DeleteAsync(This,objWbemSink,strObjectPath,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> InstancesOf(This,strClass,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> InstancesOfAsync(This,objWbemSink,strClass,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> SubclassesOf(This,strSuperclass,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> SubclassesOfAsync(This,objWbemSink,strSuperclass,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> ExecQuery(This,strQuery,strQueryLanguage,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> ExecQueryAsync(This,objWbemSink,strQuery,strQueryLanguage,lFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> AssociatorsOf(This,strObjectPath,strAssocClass,strResultClass,strResultRole,strRole,bClassesOnly,bSchemaOnly,strRequiredAssocQualifier,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> AssociatorsOfAsync(This,objWbemSink,strObjectPath,strAssocClass,strResultClass,strResultRole,strRole,bClassesOnly,bSchemaOnly,strRequiredAssocQualifier,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> ReferencesTo(This,strObjectPath,strResultClass,strRole,bClassesOnly,bSchemaOnly,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> ReferencesToAsync(This,objWbemSink,strObjectPath,strResultClass,strRole,bClassesOnly,bSchemaOnly,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> ExecNotificationQuery(This,strQuery,strQueryLanguage,iFlags,objWbemNamedValueSet,objWbemEventSource) )
    ( (This)->lpVtbl -> ExecNotificationQueryAsync(This,objWbemSink,strQuery,strQueryLanguage,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> ExecMethod(This,strObjectPath,strMethodName,objWbemInParameters,iFlags,objWbemNamedValueSet,objWbemOutParameters) )
    ( (This)->lpVtbl -> ExecMethodAsync(This,objWbemSink,strObjectPath,strMethodName,objWbemInParameters,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> get_Security_(This,objWbemSecurity) )
    ( (This)->lpVtbl -> Put(This,objWbemObject,iFlags,objWbemNamedValueSet,objWbemObjectPath) )
    ( (This)->lpVtbl -> PutAsync(This,objWbemSink,objWbemObject,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
EXTERN_C const IID IID_ISWbemObjectEx;
    typedef struct ISWbemObjectExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemObjectEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemObjectEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemObjectEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemObjectEx * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemObjectEx * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemObjectEx * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemObjectEx * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Put_ )(
            ISWbemObjectEx * This,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectPath **objWbemObjectPath);
                               HRESULT ( STDMETHODCALLTYPE *PutAsync_ )(
            ISWbemObjectEx * This,
                       IDispatch *objWbemSink,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Delete_ )(
            ISWbemObjectEx * This,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet);
                               HRESULT ( STDMETHODCALLTYPE *DeleteAsync_ )(
            ISWbemObjectEx * This,
                       IDispatch *objWbemSink,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Instances_ )(
            ISWbemObjectEx * This,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *InstancesAsync_ )(
            ISWbemObjectEx * This,
                       IDispatch *objWbemSink,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Subclasses_ )(
            ISWbemObjectEx * This,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *SubclassesAsync_ )(
            ISWbemObjectEx * This,
                       IDispatch *objWbemSink,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Associators_ )(
            ISWbemObjectEx * This,
                                     BSTR strAssocClass,
                                     BSTR strResultClass,
                                     BSTR strResultRole,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredAssocQualifier,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *AssociatorsAsync_ )(
            ISWbemObjectEx * This,
                       IDispatch *objWbemSink,
                                     BSTR strAssocClass,
                                     BSTR strResultClass,
                                     BSTR strResultRole,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredAssocQualifier,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *References_ )(
            ISWbemObjectEx * This,
                                     BSTR strResultClass,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *ReferencesAsync_ )(
            ISWbemObjectEx * This,
                       IDispatch *objWbemSink,
                                     BSTR strResultClass,
                                     BSTR strRole,
                                     VARIANT_BOOL bClassesOnly,
                                     VARIANT_BOOL bSchemaOnly,
                                     BSTR strRequiredQualifier,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *ExecMethod_ )(
            ISWbemObjectEx * This,
                       BSTR strMethodName,
                                     IDispatch *objWbemInParameters,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemObject **objWbemOutParameters);
                               HRESULT ( STDMETHODCALLTYPE *ExecMethodAsync_ )(
            ISWbemObjectEx * This,
                       IDispatch *objWbemSink,
                       BSTR strMethodName,
                                     IDispatch *objWbemInParameters,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                     IDispatch *objWbemAsyncContext);
                               HRESULT ( STDMETHODCALLTYPE *Clone_ )(
            ISWbemObjectEx * This,
                                ISWbemObject **objWbemObject);
                               HRESULT ( STDMETHODCALLTYPE *GetObjectText_ )(
            ISWbemObjectEx * This,
                                     long iFlags,
                                BSTR *strObjectText);
                               HRESULT ( STDMETHODCALLTYPE *SpawnDerivedClass_ )(
            ISWbemObjectEx * This,
                                     long iFlags,
                                ISWbemObject **objWbemObject);
                               HRESULT ( STDMETHODCALLTYPE *SpawnInstance_ )(
            ISWbemObjectEx * This,
                                     long iFlags,
                                ISWbemObject **objWbemObject);
                               HRESULT ( STDMETHODCALLTYPE *CompareTo_ )(
            ISWbemObjectEx * This,
                       IDispatch *objWbemObject,
                                     long iFlags,
                                VARIANT_BOOL *bResult);
                                        HRESULT ( STDMETHODCALLTYPE *get_Qualifiers_ )(
            ISWbemObjectEx * This,
                                ISWbemQualifierSet **objWbemQualifierSet);
                                        HRESULT ( STDMETHODCALLTYPE *get_Properties_ )(
            ISWbemObjectEx * This,
                                ISWbemPropertySet **objWbemPropertySet);
                                        HRESULT ( STDMETHODCALLTYPE *get_Methods_ )(
            ISWbemObjectEx * This,
                                ISWbemMethodSet **objWbemMethodSet);
                                        HRESULT ( STDMETHODCALLTYPE *get_Derivation_ )(
            ISWbemObjectEx * This,
                                VARIANT *strClassNameArray);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path_ )(
            ISWbemObjectEx * This,
                                ISWbemObjectPath **objWbemObjectPath);
                                        HRESULT ( STDMETHODCALLTYPE *get_Security_ )(
            ISWbemObjectEx * This,
                                ISWbemSecurity **objWbemSecurity);
                               HRESULT ( STDMETHODCALLTYPE *Refresh_ )(
            ISWbemObjectEx * This,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet);
                                        HRESULT ( STDMETHODCALLTYPE *get_SystemProperties_ )(
            ISWbemObjectEx * This,
                                ISWbemPropertySet **objWbemPropertySet);
                               HRESULT ( STDMETHODCALLTYPE *GetText_ )(
            ISWbemObjectEx * This,
                       WbemObjectTextFormatEnum iObjectTextFormat,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                BSTR *bsText);
                               HRESULT ( STDMETHODCALLTYPE *SetFromText_ )(
            ISWbemObjectEx * This,
                       BSTR bsText,
                       WbemObjectTextFormatEnum iObjectTextFormat,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet);
        END_INTERFACE
    } ISWbemObjectExVtbl;
    interface ISWbemObjectEx
    {
        CONST_VTBL struct ISWbemObjectExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Put_(This,iFlags,objWbemNamedValueSet,objWbemObjectPath) )
    ( (This)->lpVtbl -> PutAsync_(This,objWbemSink,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Delete_(This,iFlags,objWbemNamedValueSet) )
    ( (This)->lpVtbl -> DeleteAsync_(This,objWbemSink,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Instances_(This,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> InstancesAsync_(This,objWbemSink,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Subclasses_(This,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> SubclassesAsync_(This,objWbemSink,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Associators_(This,strAssocClass,strResultClass,strResultRole,strRole,bClassesOnly,bSchemaOnly,strRequiredAssocQualifier,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> AssociatorsAsync_(This,objWbemSink,strAssocClass,strResultClass,strResultRole,strRole,bClassesOnly,bSchemaOnly,strRequiredAssocQualifier,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> References_(This,strResultClass,strRole,bClassesOnly,bSchemaOnly,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemObjectSet) )
    ( (This)->lpVtbl -> ReferencesAsync_(This,objWbemSink,strResultClass,strRole,bClassesOnly,bSchemaOnly,strRequiredQualifier,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> ExecMethod_(This,strMethodName,objWbemInParameters,iFlags,objWbemNamedValueSet,objWbemOutParameters) )
    ( (This)->lpVtbl -> ExecMethodAsync_(This,objWbemSink,strMethodName,objWbemInParameters,iFlags,objWbemNamedValueSet,objWbemAsyncContext) )
    ( (This)->lpVtbl -> Clone_(This,objWbemObject) )
    ( (This)->lpVtbl -> GetObjectText_(This,iFlags,strObjectText) )
    ( (This)->lpVtbl -> SpawnDerivedClass_(This,iFlags,objWbemObject) )
    ( (This)->lpVtbl -> SpawnInstance_(This,iFlags,objWbemObject) )
    ( (This)->lpVtbl -> CompareTo_(This,objWbemObject,iFlags,bResult) )
    ( (This)->lpVtbl -> get_Qualifiers_(This,objWbemQualifierSet) )
    ( (This)->lpVtbl -> get_Properties_(This,objWbemPropertySet) )
    ( (This)->lpVtbl -> get_Methods_(This,objWbemMethodSet) )
    ( (This)->lpVtbl -> get_Derivation_(This,strClassNameArray) )
    ( (This)->lpVtbl -> get_Path_(This,objWbemObjectPath) )
    ( (This)->lpVtbl -> get_Security_(This,objWbemSecurity) )
    ( (This)->lpVtbl -> Refresh_(This,iFlags,objWbemNamedValueSet) )
    ( (This)->lpVtbl -> get_SystemProperties_(This,objWbemPropertySet) )
    ( (This)->lpVtbl -> GetText_(This,iObjectTextFormat,iFlags,objWbemNamedValueSet,bsText) )
    ( (This)->lpVtbl -> SetFromText_(This,bsText,iObjectTextFormat,iFlags,objWbemNamedValueSet) )
EXTERN_C const IID IID_ISWbemDateTime;
    typedef struct ISWbemDateTimeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemDateTime * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemDateTime * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemDateTime * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemDateTime * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemDateTime * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemDateTime * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemDateTime * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            ISWbemDateTime * This,
                                BSTR *strValue);
                            HRESULT ( STDMETHODCALLTYPE *put_Value )(
            ISWbemDateTime * This,
                       BSTR strValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_Year )(
            ISWbemDateTime * This,
                                long *iYear);
                            HRESULT ( STDMETHODCALLTYPE *put_Year )(
            ISWbemDateTime * This,
                       long iYear);
                                        HRESULT ( STDMETHODCALLTYPE *get_YearSpecified )(
            ISWbemDateTime * This,
                                VARIANT_BOOL *bYearSpecified);
                            HRESULT ( STDMETHODCALLTYPE *put_YearSpecified )(
            ISWbemDateTime * This,
                       VARIANT_BOOL bYearSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_Month )(
            ISWbemDateTime * This,
                                long *iMonth);
                            HRESULT ( STDMETHODCALLTYPE *put_Month )(
            ISWbemDateTime * This,
                       long iMonth);
                                        HRESULT ( STDMETHODCALLTYPE *get_MonthSpecified )(
            ISWbemDateTime * This,
                                VARIANT_BOOL *bMonthSpecified);
                            HRESULT ( STDMETHODCALLTYPE *put_MonthSpecified )(
            ISWbemDateTime * This,
                       VARIANT_BOOL bMonthSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_Day )(
            ISWbemDateTime * This,
                                long *iDay);
                            HRESULT ( STDMETHODCALLTYPE *put_Day )(
            ISWbemDateTime * This,
                       long iDay);
                                        HRESULT ( STDMETHODCALLTYPE *get_DaySpecified )(
            ISWbemDateTime * This,
                                VARIANT_BOOL *bDaySpecified);
                            HRESULT ( STDMETHODCALLTYPE *put_DaySpecified )(
            ISWbemDateTime * This,
                       VARIANT_BOOL bDaySpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_Hours )(
            ISWbemDateTime * This,
                                long *iHours);
                            HRESULT ( STDMETHODCALLTYPE *put_Hours )(
            ISWbemDateTime * This,
                       long iHours);
                                        HRESULT ( STDMETHODCALLTYPE *get_HoursSpecified )(
            ISWbemDateTime * This,
                                VARIANT_BOOL *bHoursSpecified);
                            HRESULT ( STDMETHODCALLTYPE *put_HoursSpecified )(
            ISWbemDateTime * This,
                       VARIANT_BOOL bHoursSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_Minutes )(
            ISWbemDateTime * This,
                                long *iMinutes);
                            HRESULT ( STDMETHODCALLTYPE *put_Minutes )(
            ISWbemDateTime * This,
                       long iMinutes);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinutesSpecified )(
            ISWbemDateTime * This,
                                VARIANT_BOOL *bMinutesSpecified);
                            HRESULT ( STDMETHODCALLTYPE *put_MinutesSpecified )(
            ISWbemDateTime * This,
                       VARIANT_BOOL bMinutesSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_Seconds )(
            ISWbemDateTime * This,
                                long *iSeconds);
                            HRESULT ( STDMETHODCALLTYPE *put_Seconds )(
            ISWbemDateTime * This,
                       long iSeconds);
                                        HRESULT ( STDMETHODCALLTYPE *get_SecondsSpecified )(
            ISWbemDateTime * This,
                                VARIANT_BOOL *bSecondsSpecified);
                            HRESULT ( STDMETHODCALLTYPE *put_SecondsSpecified )(
            ISWbemDateTime * This,
                       VARIANT_BOOL bSecondsSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_Microseconds )(
            ISWbemDateTime * This,
                                long *iMicroseconds);
                            HRESULT ( STDMETHODCALLTYPE *put_Microseconds )(
            ISWbemDateTime * This,
                       long iMicroseconds);
                                        HRESULT ( STDMETHODCALLTYPE *get_MicrosecondsSpecified )(
            ISWbemDateTime * This,
                                VARIANT_BOOL *bMicrosecondsSpecified);
                            HRESULT ( STDMETHODCALLTYPE *put_MicrosecondsSpecified )(
            ISWbemDateTime * This,
                       VARIANT_BOOL bMicrosecondsSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_UTC )(
            ISWbemDateTime * This,
                                long *iUTC);
                            HRESULT ( STDMETHODCALLTYPE *put_UTC )(
            ISWbemDateTime * This,
                       long iUTC);
                                        HRESULT ( STDMETHODCALLTYPE *get_UTCSpecified )(
            ISWbemDateTime * This,
                                VARIANT_BOOL *bUTCSpecified);
                            HRESULT ( STDMETHODCALLTYPE *put_UTCSpecified )(
            ISWbemDateTime * This,
                       VARIANT_BOOL bUTCSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsInterval )(
            ISWbemDateTime * This,
                                VARIANT_BOOL *bIsInterval);
                            HRESULT ( STDMETHODCALLTYPE *put_IsInterval )(
            ISWbemDateTime * This,
                       VARIANT_BOOL bIsInterval);
                               HRESULT ( STDMETHODCALLTYPE *GetVarDate )(
            ISWbemDateTime * This,
                                     VARIANT_BOOL bIsLocal,
                                DATE *dVarDate);
                               HRESULT ( STDMETHODCALLTYPE *SetVarDate )(
            ISWbemDateTime * This,
                       DATE dVarDate,
                                     VARIANT_BOOL bIsLocal);
                               HRESULT ( STDMETHODCALLTYPE *GetFileTime )(
            ISWbemDateTime * This,
                                     VARIANT_BOOL bIsLocal,
                                BSTR *strFileTime);
                               HRESULT ( STDMETHODCALLTYPE *SetFileTime )(
            ISWbemDateTime * This,
                       BSTR strFileTime,
                                     VARIANT_BOOL bIsLocal);
        END_INTERFACE
    } ISWbemDateTimeVtbl;
    interface ISWbemDateTime
    {
        CONST_VTBL struct ISWbemDateTimeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Value(This,strValue) )
    ( (This)->lpVtbl -> put_Value(This,strValue) )
    ( (This)->lpVtbl -> get_Year(This,iYear) )
    ( (This)->lpVtbl -> put_Year(This,iYear) )
    ( (This)->lpVtbl -> get_YearSpecified(This,bYearSpecified) )
    ( (This)->lpVtbl -> put_YearSpecified(This,bYearSpecified) )
    ( (This)->lpVtbl -> get_Month(This,iMonth) )
    ( (This)->lpVtbl -> put_Month(This,iMonth) )
    ( (This)->lpVtbl -> get_MonthSpecified(This,bMonthSpecified) )
    ( (This)->lpVtbl -> put_MonthSpecified(This,bMonthSpecified) )
    ( (This)->lpVtbl -> get_Day(This,iDay) )
    ( (This)->lpVtbl -> put_Day(This,iDay) )
    ( (This)->lpVtbl -> get_DaySpecified(This,bDaySpecified) )
    ( (This)->lpVtbl -> put_DaySpecified(This,bDaySpecified) )
    ( (This)->lpVtbl -> get_Hours(This,iHours) )
    ( (This)->lpVtbl -> put_Hours(This,iHours) )
    ( (This)->lpVtbl -> get_HoursSpecified(This,bHoursSpecified) )
    ( (This)->lpVtbl -> put_HoursSpecified(This,bHoursSpecified) )
    ( (This)->lpVtbl -> get_Minutes(This,iMinutes) )
    ( (This)->lpVtbl -> put_Minutes(This,iMinutes) )
    ( (This)->lpVtbl -> get_MinutesSpecified(This,bMinutesSpecified) )
    ( (This)->lpVtbl -> put_MinutesSpecified(This,bMinutesSpecified) )
    ( (This)->lpVtbl -> get_Seconds(This,iSeconds) )
    ( (This)->lpVtbl -> put_Seconds(This,iSeconds) )
    ( (This)->lpVtbl -> get_SecondsSpecified(This,bSecondsSpecified) )
    ( (This)->lpVtbl -> put_SecondsSpecified(This,bSecondsSpecified) )
    ( (This)->lpVtbl -> get_Microseconds(This,iMicroseconds) )
    ( (This)->lpVtbl -> put_Microseconds(This,iMicroseconds) )
    ( (This)->lpVtbl -> get_MicrosecondsSpecified(This,bMicrosecondsSpecified) )
    ( (This)->lpVtbl -> put_MicrosecondsSpecified(This,bMicrosecondsSpecified) )
    ( (This)->lpVtbl -> get_UTC(This,iUTC) )
    ( (This)->lpVtbl -> put_UTC(This,iUTC) )
    ( (This)->lpVtbl -> get_UTCSpecified(This,bUTCSpecified) )
    ( (This)->lpVtbl -> put_UTCSpecified(This,bUTCSpecified) )
    ( (This)->lpVtbl -> get_IsInterval(This,bIsInterval) )
    ( (This)->lpVtbl -> put_IsInterval(This,bIsInterval) )
    ( (This)->lpVtbl -> GetVarDate(This,bIsLocal,dVarDate) )
    ( (This)->lpVtbl -> SetVarDate(This,dVarDate,bIsLocal) )
    ( (This)->lpVtbl -> GetFileTime(This,bIsLocal,strFileTime) )
    ( (This)->lpVtbl -> SetFileTime(This,strFileTime,bIsLocal) )
EXTERN_C const IID IID_ISWbemRefresher;
    typedef struct ISWbemRefresherVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemRefresher * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemRefresher * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemRefresher * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemRefresher * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemRefresher * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemRefresher * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemRefresher * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            ISWbemRefresher * This,
                                IUnknown **pUnk);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            ISWbemRefresher * This,
                       long iIndex,
                                ISWbemRefreshableItem **objWbemRefreshableItem);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            ISWbemRefresher * This,
                                long *iCount);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            ISWbemRefresher * This,
                       ISWbemServicesEx *objWbemServices,
                       BSTR bsInstancePath,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemRefreshableItem **objWbemRefreshableItem);
                               HRESULT ( STDMETHODCALLTYPE *AddEnum )(
            ISWbemRefresher * This,
                       ISWbemServicesEx *objWbemServices,
                       BSTR bsClassName,
                                     long iFlags,
                                     IDispatch *objWbemNamedValueSet,
                                ISWbemRefreshableItem **objWbemRefreshableItem);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            ISWbemRefresher * This,
                       long iIndex,
                                     long iFlags);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            ISWbemRefresher * This,
                                     long iFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoReconnect )(
            ISWbemRefresher * This,
                                VARIANT_BOOL *bCount);
                            HRESULT ( STDMETHODCALLTYPE *put_AutoReconnect )(
            ISWbemRefresher * This,
                       VARIANT_BOOL bCount);
                               HRESULT ( STDMETHODCALLTYPE *DeleteAll )(
            ISWbemRefresher * This);
        END_INTERFACE
    } ISWbemRefresherVtbl;
    interface ISWbemRefresher
    {
        CONST_VTBL struct ISWbemRefresherVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,pUnk) )
    ( (This)->lpVtbl -> Item(This,iIndex,objWbemRefreshableItem) )
    ( (This)->lpVtbl -> get_Count(This,iCount) )
    ( (This)->lpVtbl -> Add(This,objWbemServices,bsInstancePath,iFlags,objWbemNamedValueSet,objWbemRefreshableItem) )
    ( (This)->lpVtbl -> AddEnum(This,objWbemServices,bsClassName,iFlags,objWbemNamedValueSet,objWbemRefreshableItem) )
    ( (This)->lpVtbl -> Remove(This,iIndex,iFlags) )
    ( (This)->lpVtbl -> Refresh(This,iFlags) )
    ( (This)->lpVtbl -> get_AutoReconnect(This,bCount) )
    ( (This)->lpVtbl -> put_AutoReconnect(This,bCount) )
    ( (This)->lpVtbl -> DeleteAll(This) )
EXTERN_C const IID IID_ISWbemRefreshableItem;
    typedef struct ISWbemRefreshableItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISWbemRefreshableItem * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISWbemRefreshableItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISWbemRefreshableItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISWbemRefreshableItem * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISWbemRefreshableItem * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISWbemRefreshableItem * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISWbemRefreshableItem * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Index )(
            ISWbemRefreshableItem * This,
                                long *iIndex);
                                        HRESULT ( STDMETHODCALLTYPE *get_Refresher )(
            ISWbemRefreshableItem * This,
                                ISWbemRefresher **objWbemRefresher);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsSet )(
            ISWbemRefreshableItem * This,
                                VARIANT_BOOL *bIsSet);
                                        HRESULT ( STDMETHODCALLTYPE *get_Object )(
            ISWbemRefreshableItem * This,
                                ISWbemObjectEx **objWbemObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_ObjectSet )(
            ISWbemRefreshableItem * This,
                                ISWbemObjectSet **objWbemObjectSet);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            ISWbemRefreshableItem * This,
                                     long iFlags);
        END_INTERFACE
    } ISWbemRefreshableItemVtbl;
    interface ISWbemRefreshableItem
    {
        CONST_VTBL struct ISWbemRefreshableItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Index(This,iIndex) )
    ( (This)->lpVtbl -> get_Refresher(This,objWbemRefresher) )
    ( (This)->lpVtbl -> get_IsSet(This,bIsSet) )
    ( (This)->lpVtbl -> get_Object(This,objWbemObject) )
    ( (This)->lpVtbl -> get_ObjectSet(This,objWbemObjectSet) )
    ( (This)->lpVtbl -> Remove(This,iFlags) )
EXTERN_C const CLSID CLSID_SWbemLocator;
class DECLSPEC_UUID("76A64158-CB41-11d1-8B02-00600806D9B6")
SWbemLocator;
EXTERN_C const CLSID CLSID_SWbemNamedValueSet;
class DECLSPEC_UUID("9AED384E-CE8B-11d1-8B05-00600806D9B6")
SWbemNamedValueSet;
EXTERN_C const CLSID CLSID_SWbemObjectPath;
class DECLSPEC_UUID("5791BC26-CE9C-11d1-97BF-0000F81E849C")
SWbemObjectPath;
EXTERN_C const CLSID CLSID_SWbemLastError;
class DECLSPEC_UUID("C2FEEEAC-CFCD-11d1-8B05-00600806D9B6")
SWbemLastError;
EXTERN_C const CLSID CLSID_SWbemSink;
class DECLSPEC_UUID("75718C9A-F029-11d1-A1AC-00C04FB6C223")
SWbemSink;
EXTERN_C const CLSID CLSID_SWbemDateTime;
class DECLSPEC_UUID("47DFBE54-CF76-11d3-B38F-00105A1F473A")
SWbemDateTime;
EXTERN_C const CLSID CLSID_SWbemRefresher;
class DECLSPEC_UUID("D269BF5C-D9C1-11d3-B38F-00105A1F473A")
SWbemRefresher;
EXTERN_C const CLSID CLSID_SWbemServices;
class DECLSPEC_UUID("04B83D63-21AE-11d2-8B33-00600806D9B6")
SWbemServices;
EXTERN_C const CLSID CLSID_SWbemServicesEx;
class DECLSPEC_UUID("62E522DC-8CF3-40a8-8B2E-37D595651E40")
SWbemServicesEx;
EXTERN_C const CLSID CLSID_SWbemObject;
class DECLSPEC_UUID("04B83D62-21AE-11d2-8B33-00600806D9B6")
SWbemObject;
EXTERN_C const CLSID CLSID_SWbemObjectEx;
class DECLSPEC_UUID("D6BDAFB2-9435-491f-BB87-6AA0F0BC31A2")
SWbemObjectEx;
EXTERN_C const CLSID CLSID_SWbemObjectSet;
class DECLSPEC_UUID("04B83D61-21AE-11d2-8B33-00600806D9B6")
SWbemObjectSet;
EXTERN_C const CLSID CLSID_SWbemNamedValue;
class DECLSPEC_UUID("04B83D60-21AE-11d2-8B33-00600806D9B6")
SWbemNamedValue;
EXTERN_C const CLSID CLSID_SWbemQualifier;
class DECLSPEC_UUID("04B83D5F-21AE-11d2-8B33-00600806D9B6")
SWbemQualifier;
EXTERN_C const CLSID CLSID_SWbemQualifierSet;
class DECLSPEC_UUID("04B83D5E-21AE-11d2-8B33-00600806D9B6")
SWbemQualifierSet;
EXTERN_C const CLSID CLSID_SWbemProperty;
class DECLSPEC_UUID("04B83D5D-21AE-11d2-8B33-00600806D9B6")
SWbemProperty;
EXTERN_C const CLSID CLSID_SWbemPropertySet;
class DECLSPEC_UUID("04B83D5C-21AE-11d2-8B33-00600806D9B6")
SWbemPropertySet;
EXTERN_C const CLSID CLSID_SWbemMethod;
class DECLSPEC_UUID("04B83D5B-21AE-11d2-8B33-00600806D9B6")
SWbemMethod;
EXTERN_C const CLSID CLSID_SWbemMethodSet;
class DECLSPEC_UUID("04B83D5A-21AE-11d2-8B33-00600806D9B6")
SWbemMethodSet;
EXTERN_C const CLSID CLSID_SWbemEventSource;
class DECLSPEC_UUID("04B83D58-21AE-11d2-8B33-00600806D9B6")
SWbemEventSource;
EXTERN_C const CLSID CLSID_SWbemSecurity;
class DECLSPEC_UUID("B54D66E9-2287-11d2-8B33-00600806D9B6")
SWbemSecurity;
EXTERN_C const CLSID CLSID_SWbemPrivilege;
class DECLSPEC_UUID("26EE67BC-5804-11d2-8B4A-00600806D9B6")
SWbemPrivilege;
EXTERN_C const CLSID CLSID_SWbemPrivilegeSet;
class DECLSPEC_UUID("26EE67BE-5804-11d2-8B4A-00600806D9B6")
SWbemPrivilegeSet;
EXTERN_C const CLSID CLSID_SWbemRefreshableItem;
class DECLSPEC_UUID("8C6854BC-DE4B-11d3-B390-00105A1F473A")
SWbemRefreshableItem;
extern RPC_IF_HANDLE __MIDL_itf_wbemdisp_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemdisp_0000_0018_v0_0_s_ifspec;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wbemdisp_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemdisp_0000_0026_v0_0_s_ifspec;
}
