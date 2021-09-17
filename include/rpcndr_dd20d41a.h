#include <winapifamily.h>
#include <pshpack8.h>
#include <basetsd.h>
#include <rpcnsip.h>
#include <rpcsal.h>
extern "C" {
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef unsigned char byte;
typedef byte cs_byte;
typedef unsigned char boolean;
typedef unsigned short wchar_t;
typedef unsigned int size_t;
_Must_inspect_result_
_Ret_maybenull_ _Post_writable_byte_size_(size)
void * __RPC_USER MIDL_user_allocate( _In_ size_t size);
void __RPC_USER MIDL_user_free( _Pre_maybenull_ _Post_invalid_ void * );
_Ret_maybenull_ _Post_writable_byte_size_(size)
void * __RPC_USER I_RpcDefaultAllocate(
         handle_t bh, size_t size, void * (* RealAlloc)(size_t) );
void __RPC_USER I_RpcDefaultFree(
         handle_t bh, void *, void (*RealFree)(void *) );
typedef void * NDR_CCONTEXT;
typedef struct
    {
    void * pad[2];
    void * userContext;
    } * NDR_SCONTEXT;
typedef void (__RPC_USER * NDR_RUNDOWN)(void * context);
typedef void (__RPC_USER * NDR_NOTIFY_ROUTINE)(void);
typedef void (__RPC_USER * NDR_NOTIFY2_ROUTINE)(boolean flag);
typedef struct _SCONTEXT_QUEUE {
    unsigned long NumberOfObjects;
    NDR_SCONTEXT * ArrayOfObjects;
    } SCONTEXT_QUEUE, * PSCONTEXT_QUEUE;
RPCRTAPI
RPC_BINDING_HANDLE
RPC_ENTRY
NDRCContextBinding (
    _In_ NDR_CCONTEXT CContext
    );
RPCRTAPI
void
RPC_ENTRY
NDRCContextMarshall (
    _In_opt_ NDR_CCONTEXT CContext,
    _Out_ void *pBuff
    );
RPCRTAPI
void
RPC_ENTRY
NDRCContextUnmarshall (
    _Inout_opt_ NDR_CCONTEXT * pCContext,
    _In_ RPC_BINDING_HANDLE hBinding,
    _In_ void * pBuff,
    _In_ unsigned long DataRepresentation
    );
RPCRTAPI
void
RPC_ENTRY
NDRCContextUnmarshall2 (
    _Inout_opt_ NDR_CCONTEXT * pCContext,
    _In_ RPC_BINDING_HANDLE hBinding,
    _In_ void * pBuff,
    _In_ unsigned long DataRepresentation
    );
RPCRTAPI
void
RPC_ENTRY
NDRSContextMarshall (
    _In_ NDR_SCONTEXT CContext,
    _Out_ void * pBuff,
    _In_ NDR_RUNDOWN userRunDownIn
    );
RPCRTAPI
NDR_SCONTEXT
RPC_ENTRY
NDRSContextUnmarshall (
    _In_ void * pBuff,
    _In_ unsigned long DataRepresentation
    );
RPCRTAPI
void
RPC_ENTRY
NDRSContextMarshallEx (
    _In_ RPC_BINDING_HANDLE BindingHandle,
    _In_ NDR_SCONTEXT CContext,
    _Out_ void * pBuff,
    _In_ NDR_RUNDOWN userRunDownIn
    );
RPCRTAPI
void
RPC_ENTRY
NDRSContextMarshall2 (
    _In_ RPC_BINDING_HANDLE BindingHandle,
    _In_ NDR_SCONTEXT CContext,
    _Out_ void * pBuff,
    _In_ NDR_RUNDOWN userRunDownIn,
    _In_opt_ void * CtxGuard,
    _In_ unsigned long Flags
    );
RPCRTAPI
NDR_SCONTEXT
RPC_ENTRY
NDRSContextUnmarshallEx (
    _In_ RPC_BINDING_HANDLE BindingHandle,
    _In_ void * pBuff,
    _In_ unsigned long DataRepresentation
    );
RPCRTAPI
NDR_SCONTEXT
RPC_ENTRY
NDRSContextUnmarshall2(
    _In_ RPC_BINDING_HANDLE BindingHandle,
    _In_opt_ void * pBuff,
    _In_ unsigned long DataRepresentation,
    _In_opt_ void * CtxGuard,
    _In_ unsigned long Flags
    );
RPCRTAPI
void
RPC_ENTRY
RpcSsDestroyClientContext (
    _In_ void * * ContextHandle
    );
    { \
    *(target) = *(*(char * *)&(source)->Buffer)++; \
    }
    { \
    NDRcopy ( \
        (((char *)(Target))+(LowerIndex)), \
        (Source)->Buffer, \
        (unsigned int)((UpperIndex)-(LowerIndex))); \
    *(unsigned long *)&(Source)->Buffer += ((UpperIndex)-(LowerIndex)); \
    }
    { \
    *(target) = *(*(char * *)&(source)->Buffer)++; \
    }
    { \
    NDRcopy ( \
        (((char *)(Target))+(LowerIndex)), \
        (Source)->Buffer, \
        (unsigned int)((UpperIndex)-(LowerIndex))); \
    *(unsigned long *)&(Source)->Buffer += ((UpperIndex)-(LowerIndex)); \
    }
    { \
    *(target) = *(*(char * *)&(source)->Buffer)++; \
    }
    { \
    *(target) = *(*(char * *)(source))++; \
    }
    { \
    NDRcopy ( \
        (((char *)(Target))+(LowerIndex)), \
        (Source)->Buffer, \
        (unsigned int)((UpperIndex)-(LowerIndex))); \
    *(unsigned long *)&(Source)->Buffer += ((UpperIndex)-(LowerIndex)); \
    }
typedef unsigned long error_status_t;
                                            _midl_ma4( p, unsigned long) = 0, \
                                            _midl_ma4( p, unsigned long) = l)
                                            (_midl_addp(p,4)), \
                                            (l=_midl_unma4(p,unsigned long))
        (NDRCContextUnmarshall((NDR_CONTEXT)pc,h,p,drep), p+20)
                        (unsigned char)((s & 0x00ff0000) >> 16), (unsigned char)(s >> 24)
                 ( (RpcExceptionCode() == STATUS_ACCESS_VIOLATION) || \
                   (RpcExceptionCode() == STATUS_DATATYPE_MISALIGNMENT) || \
                   (RpcExceptionCode() == RPC_X_BAD_STUB_DATA) || \
                   (RpcExceptionCode() == RPC_S_INVALID_BOUND) )
struct _MIDL_STUB_MESSAGE;
struct _MIDL_STUB_DESC;
struct _FULL_PTR_XLAT_TABLES;
typedef unsigned char * RPC_BUFPTR;
typedef unsigned long RPC_LENGTH;
typedef void (__RPC_USER * EXPR_EVAL)( struct _MIDL_STUB_MESSAGE * );
typedef const unsigned char * PFORMAT_STRING;
typedef struct
    {
    long Dimension;
    unsigned long * BufferConformanceMark;
    unsigned long * BufferVarianceMark;
    unsigned long * MaxCountArray;
    unsigned long * OffsetArray;
    unsigned long * ActualCountArray;
    } ARRAY_INFO, *PARRAY_INFO;
typedef struct _NDR_ASYNC_MESSAGE * PNDR_ASYNC_MESSAGE;
typedef struct _NDR_CORRELATION_INFO *PNDR_CORRELATION_INFO;
typedef const unsigned char * PFORMAT_STRING;
typedef struct _MIDL_SYNTAX_INFO MIDL_SYNTAX_INFO, *PMIDL_SYNTAX_INFO;
struct NDR_ALLOC_ALL_NODES_CONTEXT;
struct NDR_POINTER_QUEUE_STATE;
struct _NDR_PROC_CONTEXT;
typedef struct _MIDL_STUB_MESSAGE
    {
    PRPC_MESSAGE RpcMsg;
    unsigned char * Buffer;
    unsigned char * BufferStart;
    unsigned char * BufferEnd;
    unsigned char * BufferMark;
    unsigned long BufferLength;
    unsigned long MemorySize;
    unsigned char * Memory;
    unsigned char IsClient;
    unsigned char Pad;
    unsigned short uFlags2;
    int ReuseBuffer;
    struct NDR_ALLOC_ALL_NODES_CONTEXT *pAllocAllNodesContext;
    struct NDR_POINTER_QUEUE_STATE *pPointerQueueState;
    int IgnoreEmbeddedPointers;
    unsigned char * PointerBufferMark;
    unsigned char CorrDespIncrement;
    unsigned char uFlags;
    unsigned short UniquePtrCount;
    ULONG_PTR MaxCount;
    unsigned long Offset;
    unsigned long ActualCount;
    void * ( __RPC_API * pfnAllocate)( size_t );
    void ( __RPC_API * pfnFree)(void *);
    unsigned char * StackTop;
    unsigned char * pPresentedType;
    unsigned char * pTransmitType;
    handle_t SavedHandle;
    const struct _MIDL_STUB_DESC * StubDesc;
    struct _FULL_PTR_XLAT_TABLES * FullPtrXlatTables;
    unsigned long FullPtrRefId;
    unsigned long PointerLength;
    int fInDontFree :1;
    int fDontCallFreeInst :1;
    int fUnused1 :1;
    int fHasReturn :1;
    int fHasExtensions :1;
    int fHasNewCorrDesc :1;
    int fIsIn :1;
    int fIsOut :1;
    int fIsOicf :1;
    int fBufferValid :1;
    int fHasMemoryValidateCallback: 1;
    int fInFree :1;
    int fNeedMCCP :1;
    int fUnused2 :3;
    int fUnused3 :16;
    unsigned long dwDestContext;
    void * pvDestContext;
    NDR_SCONTEXT * SavedContextHandles;
    long ParamNumber;
    struct IRpcChannelBuffer * pRpcChannelBuffer;
    PARRAY_INFO pArrayInfo;
    unsigned long * SizePtrCountArray;
    unsigned long * SizePtrOffsetArray;
    unsigned long * SizePtrLengthArray;
    void * pArgQueue;
    unsigned long dwStubPhase;
    void * LowStackMark;
    PNDR_ASYNC_MESSAGE pAsyncMsg;
    PNDR_CORRELATION_INFO pCorrInfo;
    unsigned char * pCorrMemory;
    void * pMemoryList;
    INT_PTR pCSInfo;
    unsigned char * ConformanceMark;
    unsigned char * VarianceMark;
    INT_PTR Unused;
    struct _NDR_PROC_CONTEXT * pContext;
    void * ContextHandleHash;
    void * pUserMarshalList;
    INT_PTR Reserved51_3;
    INT_PTR Reserved51_4;
    INT_PTR Reserved51_5;
    } MIDL_STUB_MESSAGE, *PMIDL_STUB_MESSAGE;
typedef struct _MIDL_STUB_MESSAGE MIDL_STUB_MESSAGE, *PMIDL_STUB_MESSAGE;
typedef void *
        ( __RPC_API * GENERIC_BINDING_ROUTINE)
        (void *);
typedef void
        ( __RPC_API * GENERIC_UNBIND_ROUTINE)
        (void *, unsigned char *);
typedef struct _GENERIC_BINDING_ROUTINE_PAIR
    {
    GENERIC_BINDING_ROUTINE pfnBind;
    GENERIC_UNBIND_ROUTINE pfnUnbind;
    } GENERIC_BINDING_ROUTINE_PAIR, *PGENERIC_BINDING_ROUTINE_PAIR;
typedef struct __GENERIC_BINDING_INFO
    {
    void * pObj;
    unsigned int Size;
    GENERIC_BINDING_ROUTINE pfnBind;
    GENERIC_UNBIND_ROUTINE pfnUnbind;
    } GENERIC_BINDING_INFO, *PGENERIC_BINDING_INFO;
typedef void ( __RPC_USER * XMIT_HELPER_ROUTINE)
    ( PMIDL_STUB_MESSAGE );
typedef struct _XMIT_ROUTINE_QUINTUPLE
    {
    XMIT_HELPER_ROUTINE pfnTranslateToXmit;
    XMIT_HELPER_ROUTINE pfnTranslateFromXmit;
    XMIT_HELPER_ROUTINE pfnFreeXmit;
    XMIT_HELPER_ROUTINE pfnFreeInst;
    } XMIT_ROUTINE_QUINTUPLE, *PXMIT_ROUTINE_QUINTUPLE;
typedef unsigned long
( __RPC_USER * USER_MARSHAL_SIZING_ROUTINE)
    (unsigned long *,
     unsigned long,
     void * );
typedef unsigned char *
( __RPC_USER * USER_MARSHAL_MARSHALLING_ROUTINE)
    (unsigned long *,
     unsigned char * ,
     void * );
typedef unsigned char *
( __RPC_USER * USER_MARSHAL_UNMARSHALLING_ROUTINE)
    (unsigned long *,
     unsigned char *,
     void * );
typedef void ( __RPC_USER * USER_MARSHAL_FREEING_ROUTINE)
    (unsigned long *,
     void * );
typedef struct _USER_MARSHAL_ROUTINE_QUADRUPLE
    {
    USER_MARSHAL_SIZING_ROUTINE pfnBufferSize;
    USER_MARSHAL_MARSHALLING_ROUTINE pfnMarshall;
    USER_MARSHAL_UNMARSHALLING_ROUTINE pfnUnmarshall;
    USER_MARSHAL_FREEING_ROUTINE pfnFree;
    } USER_MARSHAL_ROUTINE_QUADRUPLE;
typedef enum _USER_MARSHAL_CB_TYPE
{
    USER_MARSHAL_CB_BUFFER_SIZE,
    USER_MARSHAL_CB_MARSHALL,
    USER_MARSHAL_CB_UNMARSHALL,
    USER_MARSHAL_CB_FREE
} USER_MARSHAL_CB_TYPE;
typedef struct _USER_MARSHAL_CB
{
    unsigned long Flags;
    PMIDL_STUB_MESSAGE pStubMsg;
    PFORMAT_STRING pReserve;
    unsigned long Signature;
    USER_MARSHAL_CB_TYPE CBType;
    PFORMAT_STRING pFormat;
    PFORMAT_STRING pTypeFormat;
} USER_MARSHAL_CB;
typedef struct _MALLOC_FREE_STRUCT
    {
    void * ( __RPC_USER * pfnAllocate)(size_t);
    void ( __RPC_USER * pfnFree)(void *);
    } MALLOC_FREE_STRUCT;
typedef struct _COMM_FAULT_OFFSETS
    {
    short CommOffset;
    short FaultOffset;
    } COMM_FAULT_OFFSETS;
typedef enum _IDL_CS_CONVERT
    {
    IDL_CS_NO_CONVERT,
    IDL_CS_IN_PLACE_CONVERT,
    IDL_CS_NEW_BUFFER_CONVERT
    } IDL_CS_CONVERT;
typedef void
( __RPC_USER * CS_TYPE_NET_SIZE_ROUTINE)
    (RPC_BINDING_HANDLE hBinding,
     unsigned long ulNetworkCodeSet,
     unsigned long ulLocalBufferSize,
     IDL_CS_CONVERT * conversionType,
     unsigned long * pulNetworkBufferSize,
     error_status_t * pStatus);
typedef void
( __RPC_USER * CS_TYPE_LOCAL_SIZE_ROUTINE)
    (RPC_BINDING_HANDLE hBinding,
     unsigned long ulNetworkCodeSet,
     unsigned long ulNetworkBufferSize,
     IDL_CS_CONVERT * conversionType,
     unsigned long * pulLocalBufferSize,
     error_status_t * pStatus);
typedef void
( __RPC_USER * CS_TYPE_TO_NETCS_ROUTINE)
    (RPC_BINDING_HANDLE hBinding,
     unsigned long ulNetworkCodeSet,
     void * pLocalData,
     unsigned long ulLocalDataLength,
     byte * pNetworkData,
     unsigned long * pulNetworkDataLength,
     error_status_t * pStatus);
typedef void
( __RPC_USER * CS_TYPE_FROM_NETCS_ROUTINE)
    (RPC_BINDING_HANDLE hBinding,
     unsigned long ulNetworkCodeSet,
     byte * pNetworkData,
     unsigned long ulNetworkDataLength,
     unsigned long ulLocalBufferSize,
     void * pLocalData,
     unsigned long * pulLocalDataLength,
     error_status_t * pStatus);
typedef void
( __RPC_USER * CS_TAG_GETTING_ROUTINE)
    (RPC_BINDING_HANDLE hBinding,
     int fServerSide,
     unsigned long * pulSendingTag,
     unsigned long * pulDesiredReceivingTag,
     unsigned long * pulReceivingTag,
     error_status_t * pStatus);
void __RPC_USER
RpcCsGetTags(
     RPC_BINDING_HANDLE hBinding,
     int fServerSide,
     unsigned long * pulSendingTag,
     unsigned long * pulDesiredReceivingTag,
     unsigned long * pulReceivingTag,
     error_status_t * pStatus);
typedef struct _NDR_CS_SIZE_CONVERT_ROUTINES
    {
    CS_TYPE_NET_SIZE_ROUTINE pfnNetSize;
    CS_TYPE_TO_NETCS_ROUTINE pfnToNetCs;
    CS_TYPE_LOCAL_SIZE_ROUTINE pfnLocalSize;
    CS_TYPE_FROM_NETCS_ROUTINE pfnFromNetCs;
    } NDR_CS_SIZE_CONVERT_ROUTINES;
typedef struct _NDR_CS_ROUTINES
    {
    NDR_CS_SIZE_CONVERT_ROUTINES *pSizeConvertRoutines;
    CS_TAG_GETTING_ROUTINE *pTagGettingRoutines;
    } NDR_CS_ROUTINES;
typedef struct _NDR_EXPR_DESC
{
    const unsigned short * pOffset;
    PFORMAT_STRING pFormatExpr;
} NDR_EXPR_DESC;
typedef struct _MIDL_STUB_DESC
    {
    void * RpcInterfaceInformation;
    void * ( __RPC_API * pfnAllocate)(size_t);
    void ( __RPC_API * pfnFree)(void *);
    union
        {
        handle_t * pAutoHandle;
        handle_t * pPrimitiveHandle;
        PGENERIC_BINDING_INFO pGenericBindingInfo;
        } IMPLICIT_HANDLE_INFO;
    const NDR_RUNDOWN * apfnNdrRundownRoutines;
    const GENERIC_BINDING_ROUTINE_PAIR * aGenericBindingRoutinePairs;
    const EXPR_EVAL * apfnExprEval;
    const XMIT_ROUTINE_QUINTUPLE * aXmitQuintuple;
    const unsigned char * pFormatTypes;
    int fCheckBounds;
    unsigned long Version;
    MALLOC_FREE_STRUCT * pMallocFreeStruct;
    long MIDLVersion;
    const COMM_FAULT_OFFSETS * CommFaultOffsets;
    const USER_MARSHAL_ROUTINE_QUADRUPLE * aUserMarshalQuadruple;
    const NDR_NOTIFY_ROUTINE * NotifyRoutineTable;
    ULONG_PTR mFlags;
    const NDR_CS_ROUTINES * CsRoutineTables;
    void * ProxyServerInfo;
    const NDR_EXPR_DESC * pExprInfo;
    } MIDL_STUB_DESC;
typedef const MIDL_STUB_DESC * PMIDL_STUB_DESC;
typedef void * PMIDL_XMIT_TYPE;
typedef void ( __RPC_API * STUB_THUNK)( PMIDL_STUB_MESSAGE );
typedef long ( __RPC_API * SERVER_ROUTINE)();
typedef struct _MIDL_METHOD_PROPERTY
{
    unsigned long Id;
    ULONG_PTR Value;
} MIDL_METHOD_PROPERTY, *PMIDL_METHOD_PROPERTY;
typedef struct _MIDL_METHOD_PROPERTY_MAP
{
    unsigned long Count;
    const MIDL_METHOD_PROPERTY *Properties;
} MIDL_METHOD_PROPERTY_MAP, *PMIDL_METHOD_PROPERTY_MAP;
typedef struct _MIDL_INTERFACE_METHOD_PROPERTIES
{
    unsigned short MethodCount;
    const MIDL_METHOD_PROPERTY_MAP* const *MethodProperties;
} MIDL_INTERFACE_METHOD_PROPERTIES;
typedef struct _MIDL_SERVER_INFO_
    {
    PMIDL_STUB_DESC pStubDesc;
    const SERVER_ROUTINE * DispatchTable;
    PFORMAT_STRING ProcString;
    const unsigned short * FmtStringOffset;
    const STUB_THUNK * ThunkTable;
    PRPC_SYNTAX_IDENTIFIER pTransferSyntax;
    ULONG_PTR nCount;
    PMIDL_SYNTAX_INFO pSyntaxInfo;
    } MIDL_SERVER_INFO, *PMIDL_SERVER_INFO;
typedef struct _MIDL_STUBLESS_PROXY_INFO
    {
    PMIDL_STUB_DESC pStubDesc;
    PFORMAT_STRING ProcFormatString;
    const unsigned short * FormatStringOffset;
    PRPC_SYNTAX_IDENTIFIER pTransferSyntax;
    ULONG_PTR nCount;
    PMIDL_SYNTAX_INFO pSyntaxInfo;
    } MIDL_STUBLESS_PROXY_INFO;
typedef MIDL_STUBLESS_PROXY_INFO * PMIDL_STUBLESS_PROXY_INFO;
typedef struct _MIDL_SYNTAX_INFO
{
RPC_SYNTAX_IDENTIFIER TransferSyntax;
RPC_DISPATCH_TABLE * DispatchTable;
PFORMAT_STRING ProcString;
const unsigned short * FmtStringOffset;
PFORMAT_STRING TypeString;
const void * aUserMarshalQuadruple;
const MIDL_INTERFACE_METHOD_PROPERTIES *pMethodProperties;
ULONG_PTR pReserved2;
} MIDL_SYNTAX_INFO, *PMIDL_SYNTAX_INFO;
typedef unsigned short * PARAM_OFFSETTABLE, *PPARAM_OFFSETTABLE;
typedef union _CLIENT_CALL_RETURN
    {
    void * Pointer;
    LONG_PTR Simple;
    } CLIENT_CALL_RETURN;
typedef enum
        {
        XLAT_SERVER = 1,
        XLAT_CLIENT
        } XLAT_SIDE;
typedef struct _FULL_PTR_XLAT_TABLES
{
    void * RefIdToPointer;
    void * PointerToRefId;
    unsigned long NextRefId;
    XLAT_SIDE XlatSide;
} FULL_PTR_XLAT_TABLES, *PFULL_PTR_XLAT_TABLES;
typedef enum _system_handle_t
{
    SYSTEM_HANDLE_FILE = 0,
    SYSTEM_HANDLE_SEMAPHORE = 1,
    SYSTEM_HANDLE_EVENT = 2,
    SYSTEM_HANDLE_MUTEX = 3,
    SYSTEM_HANDLE_PROCESS = 4,
    SYSTEM_HANDLE_TOKEN = 5,
    SYSTEM_HANDLE_SECTION = 6,
    SYSTEM_HANDLE_REG_KEY = 7,
    SYSTEM_HANDLE_THREAD = 8,
    SYSTEM_HANDLE_COMPOSITION_OBJECT = 9,
    SYSTEM_HANDLE_SOCKET = 10,
    SYSTEM_HANDLE_JOB = 11,
    SYSTEM_HANDLE_PIPE = 12,
    SYSTEM_HANDLE_MAX = 12,
    SYSTEM_HANDLE_INVALID = 0xFF,
} system_handle_t;
enum {
    MidlInterceptionInfoVersionOne = 1
};
enum {
    MidlWinrtTypeSerializationInfoVersionOne = 1
};
typedef struct _MIDL_INTERCEPTION_INFO
{
    unsigned long Version;
    PFORMAT_STRING ProcString;
    const unsigned short *ProcFormatOffsetTable;
    unsigned long ProcCount;
    PFORMAT_STRING TypeString;
} MIDL_INTERCEPTION_INFO, *PMIDL_INTERCEPTION_INFO;
typedef struct _MIDL_WINRT_TYPE_SERIALIZATION_INFO
{
    unsigned long Version;
    PFORMAT_STRING TypeFormatString;
    unsigned short FormatStringSize;
    unsigned short TypeOffset;
    PMIDL_STUB_DESC StubDesc;
} MIDL_WINRT_TYPE_SERIALIZATION_INFO, *PMIDL_WINRT_TYPE_SERIALIZATION_INFO;
RPC_STATUS RPC_ENTRY
NdrClientGetSupportedSyntaxes(
    _In_ RPC_CLIENT_INTERFACE * pInf,
    _Out_ unsigned long * pCount,
    _Out_ MIDL_SYNTAX_INFO ** pArr );
RPC_STATUS RPC_ENTRY
NdrServerGetSupportedSyntaxes(
    _In_ RPC_SERVER_INTERFACE * pInf,
    _Out_ unsigned long * pCount,
    _Out_ MIDL_SYNTAX_INFO ** pArr,
    _Out_ unsigned long * pPreferSyntaxIndex);
#pragma warning(push)
#pragma warning(disable:28740)
RPCRTAPI
void
RPC_ENTRY
NdrSimpleTypeMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    unsigned char FormatChar
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrPointerMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrCsArrayMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrCsTagMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrSimpleStructMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrConformantStructMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrConformantVaryingStructMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrComplexStructMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrFixedArrayMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrConformantArrayMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrConformantVaryingArrayMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrVaryingArrayMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrComplexArrayMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrNonConformantStringMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrConformantStringMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrEncapsulatedUnionMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrNonEncapsulatedUnionMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrByteCountPointerMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrXmitOrRepAsMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrUserMarshalMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrInterfacePointerMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrClientContextMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    NDR_CCONTEXT ContextHandle,
    int fCheck
    );
RPCRTAPI
void
RPC_ENTRY
NdrServerContextMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    NDR_SCONTEXT ContextHandle,
    NDR_RUNDOWN RundownRoutine
    );
RPCRTAPI
void
RPC_ENTRY
NdrServerContextNewMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    NDR_SCONTEXT ContextHandle,
    NDR_RUNDOWN RundownRoutine,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrSimpleTypeUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    unsigned char FormatChar
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrCsArrayUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char ** ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrCsTagUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char ** ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrRangeUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char ** ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
void
RPC_ENTRY
NdrCorrelationInitialize(
    PMIDL_STUB_MESSAGE pStubMsg,
    void * pMemory,
    unsigned long CacheSize,
    unsigned long flags
    );
RPCRTAPI
void
RPC_ENTRY
NdrCorrelationPass(
    PMIDL_STUB_MESSAGE pStubMsg
    );
RPCRTAPI
void
RPC_ENTRY
NdrCorrelationFree(
    PMIDL_STUB_MESSAGE pStubMsg
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrPointerUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrSimpleStructUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrConformantStructUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrConformantVaryingStructUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrComplexStructUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrFixedArrayUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrConformantArrayUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrConformantVaryingArrayUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrVaryingArrayUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrComplexArrayUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrNonConformantStringUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrConformantStringUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrEncapsulatedUnionUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrNonEncapsulatedUnionUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrByteCountPointerUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrXmitOrRepAsUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrUserMarshalUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrInterfacePointerUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * * ppMemory,
    PFORMAT_STRING pFormat,
    unsigned char fMustAlloc
    );
RPCRTAPI
void
RPC_ENTRY
NdrClientContextUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    NDR_CCONTEXT * pContextHandle,
    RPC_BINDING_HANDLE BindHandle
    );
RPCRTAPI
NDR_SCONTEXT
RPC_ENTRY
NdrServerContextUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg
    );
RPCRTAPI
NDR_SCONTEXT
RPC_ENTRY
NdrContextHandleInitialize(
    _In_ PMIDL_STUB_MESSAGE pStubMsg,
    _In_reads_(_Inexpressible_(2)) PFORMAT_STRING pFormat
    );
RPCRTAPI
NDR_SCONTEXT
RPC_ENTRY
NdrServerContextNewUnmarshall(
    _In_ PMIDL_STUB_MESSAGE pStubMsg,
    _In_reads_(_Inexpressible_(2)) PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrPointerBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrCsArrayBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrCsTagBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrSimpleStructBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrConformantStructBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrConformantVaryingStructBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrComplexStructBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrFixedArrayBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrConformantArrayBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrConformantVaryingArrayBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrVaryingArrayBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrComplexArrayBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrConformantStringBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrNonConformantStringBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrEncapsulatedUnionBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrNonEncapsulatedUnionBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrByteCountPointerBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrXmitOrRepAsBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrUserMarshalBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrInterfacePointerBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrContextHandleSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrPointerMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrContextHandleMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrCsArrayMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrCsTagMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrSimpleStructMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrConformantStructMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrConformantVaryingStructMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrComplexStructMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrFixedArrayMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrConformantArrayMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrConformantVaryingArrayMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrVaryingArrayMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrComplexArrayMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrConformantStringMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrNonConformantStringMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrEncapsulatedUnionMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrNonEncapsulatedUnionMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrXmitOrRepAsMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrUserMarshalMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned long
RPC_ENTRY
NdrInterfacePointerMemorySize(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrPointerFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrCsArrayFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrSimpleStructFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrConformantStructFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrConformantVaryingStructFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrComplexStructFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrFixedArrayFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrConformantArrayFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrConformantVaryingArrayFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrVaryingArrayFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrComplexArrayFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrEncapsulatedUnionFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrNonEncapsulatedUnionFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrByteCountPointerFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrXmitOrRepAsFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrUserMarshalFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrInterfacePointerFree(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pMemory,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
void
RPC_ENTRY
NdrConvert2(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat,
    long NumberParams
    );
RPCRTAPI
void
RPC_ENTRY
NdrConvert(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrUserMarshalSimpleTypeConvert(
    unsigned long * pFlags,
    unsigned char * pBuffer,
    unsigned char FormatChar
    );
RPCRTAPI
void
RPC_ENTRY
NdrClientInitializeNew(
    PRPC_MESSAGE pRpcMsg,
    PMIDL_STUB_MESSAGE pStubMsg,
    PMIDL_STUB_DESC pStubDescriptor,
    unsigned int ProcNum
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrServerInitializeNew(
    PRPC_MESSAGE pRpcMsg,
    PMIDL_STUB_MESSAGE pStubMsg,
    PMIDL_STUB_DESC pStubDescriptor
    );
RPCRTAPI
void
RPC_ENTRY
NdrServerInitializePartial(
    PRPC_MESSAGE pRpcMsg,
    PMIDL_STUB_MESSAGE pStubMsg,
    PMIDL_STUB_DESC pStubDescriptor,
    unsigned long RequestedBufferSize
    );
RPCRTAPI
void
RPC_ENTRY
NdrClientInitialize(
    PRPC_MESSAGE pRpcMsg,
    PMIDL_STUB_MESSAGE pStubMsg,
    PMIDL_STUB_DESC pStubDescriptor,
    unsigned int ProcNum
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrServerInitialize(
    PRPC_MESSAGE pRpcMsg,
    PMIDL_STUB_MESSAGE pStubMsg,
    PMIDL_STUB_DESC pStubDescriptor
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrServerInitializeUnmarshall (
    PMIDL_STUB_MESSAGE pStubMsg,
    PMIDL_STUB_DESC pStubDescriptor,
    PRPC_MESSAGE pRpcMsg
    );
RPCRTAPI
void
RPC_ENTRY
NdrServerInitializeMarshall (
    PRPC_MESSAGE pRpcMsg,
    PMIDL_STUB_MESSAGE pStubMsg
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrGetBuffer(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned long BufferLength,
    RPC_BINDING_HANDLE Handle
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrNsGetBuffer(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned long BufferLength,
    RPC_BINDING_HANDLE Handle
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrSendReceive(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pBufferEnd
    );
RPCRTAPI
unsigned char *
RPC_ENTRY
NdrNsSendReceive(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned char * pBufferEnd,
    RPC_BINDING_HANDLE * pAutoHandle
    );
RPCRTAPI
void
RPC_ENTRY
NdrFreeBuffer(
    PMIDL_STUB_MESSAGE pStubMsg
    );
RPCRTAPI
HRESULT
RPC_ENTRY
NdrGetDcomProtocolVersion(
    PMIDL_STUB_MESSAGE pStubMsg,
    RPC_VERSION * pVersion );
#pragma warning(pop)
CLIENT_CALL_RETURN RPC_VAR_ENTRY
NdrClientCall2(
    PMIDL_STUB_DESC pStubDescriptor,
    PFORMAT_STRING pFormat,
    ...
    );
CLIENT_CALL_RETURN RPC_VAR_ENTRY
NdrClientCall(
    PMIDL_STUB_DESC pStubDescriptor,
    PFORMAT_STRING pFormat,
    ...
    );
CLIENT_CALL_RETURN RPC_VAR_ENTRY
NdrAsyncClientCall(
    PMIDL_STUB_DESC pStubDescriptor,
    PFORMAT_STRING pFormat,
    ...
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CLIENT_CALL_RETURN RPC_VAR_ENTRY
NdrDcomAsyncClientCall(
    PMIDL_STUB_DESC pStubDescriptor,
    PFORMAT_STRING pFormat,
    ...
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef enum {
    STUB_UNMARSHAL,
    STUB_CALL_SERVER,
    STUB_MARSHAL,
    STUB_CALL_SERVER_NO_HRESULT
}STUB_PHASE;
typedef enum {
    PROXY_CALCSIZE,
    PROXY_GETBUFFER,
    PROXY_MARSHAL,
    PROXY_SENDRECEIVE,
    PROXY_UNMARSHAL
}PROXY_PHASE;
struct IRpcStubBuffer;
RPCRTAPI
void
RPC_ENTRY
NdrAsyncServerCall(
    PRPC_MESSAGE pRpcMsg
    );
RPCRTAPI
long
RPC_ENTRY
NdrAsyncStubCall(
    struct IRpcStubBuffer * pThis,
    struct IRpcChannelBuffer * pChannel,
    PRPC_MESSAGE pRpcMsg,
    unsigned long * pdwStubPhase
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
long
RPC_ENTRY
NdrDcomAsyncStubCall(
    struct IRpcStubBuffer * pThis,
    struct IRpcChannelBuffer * pChannel,
    PRPC_MESSAGE pRpcMsg,
    unsigned long * pdwStubPhase
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
RPCRTAPI
long
RPC_ENTRY
NdrStubCall2(
    void * pThis,
    void * pChannel,
    PRPC_MESSAGE pRpcMsg,
    unsigned long * pdwStubPhase
    );
RPCRTAPI
void
RPC_ENTRY
NdrServerCall2(
    PRPC_MESSAGE pRpcMsg
    );
RPCRTAPI
long
RPC_ENTRY
NdrStubCall (
    void * pThis,
    void * pChannel,
    PRPC_MESSAGE pRpcMsg,
    unsigned long * pdwStubPhase
    );
RPCRTAPI
void
RPC_ENTRY
NdrServerCall(
    PRPC_MESSAGE pRpcMsg
    );
RPCRTAPI
int
RPC_ENTRY
NdrServerUnmarshall(
    void * pChannel,
    PRPC_MESSAGE pRpcMsg,
    PMIDL_STUB_MESSAGE pStubMsg,
    PMIDL_STUB_DESC pStubDescriptor,
    PFORMAT_STRING pFormat,
    void * pParamList
    );
RPCRTAPI
void
RPC_ENTRY
NdrServerMarshall(
    void * pThis,
    void * pChannel,
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
NdrMapCommAndFaultStatus(
    PMIDL_STUB_MESSAGE pStubMsg,
    unsigned long * pCommStatus,
    unsigned long * pFaultStatus,
    RPC_STATUS Status
    );
typedef void * RPC_SS_THREAD_HANDLE;
typedef void * __RPC_API
RPC_CLIENT_ALLOC (
    _In_ size_t Size
    );
typedef void __RPC_API
RPC_CLIENT_FREE (
    _In_ void * Ptr
    );
RPCRTAPI
void *
RPC_ENTRY
RpcSsAllocate (
    _In_ size_t Size
    );
RPCRTAPI
void
RPC_ENTRY
RpcSsDisableAllocate (
    void
    );
RPCRTAPI
void
RPC_ENTRY
RpcSsEnableAllocate (
    void
    );
RPCRTAPI
void
RPC_ENTRY
RpcSsFree (
    _In_ void * NodeToFree
    );
RPCRTAPI
RPC_SS_THREAD_HANDLE
RPC_ENTRY
RpcSsGetThreadHandle (
    void
    );
RPCRTAPI
void
RPC_ENTRY
RpcSsSetClientAllocFree (
    _In_ RPC_CLIENT_ALLOC * ClientAlloc,
    _In_ RPC_CLIENT_FREE * ClientFree
    );
RPCRTAPI
void
RPC_ENTRY
RpcSsSetThreadHandle (
    _In_ RPC_SS_THREAD_HANDLE Id
    );
RPCRTAPI
void
RPC_ENTRY
RpcSsSwapClientAllocFree (
    _In_ RPC_CLIENT_ALLOC * ClientAlloc,
    _In_ RPC_CLIENT_FREE * ClientFree,
    _Out_ RPC_CLIENT_ALLOC * * OldClientAlloc,
    _Out_ RPC_CLIENT_FREE * * OldClientFree
    );
RPCRTAPI
void *
RPC_ENTRY
RpcSmAllocate (
    _In_ size_t Size,
    _Out_ RPC_STATUS * pStatus
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcSmClientFree (
    _In_ void * pNodeToFree
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcSmDestroyClientContext (
    _In_ void * * ContextHandle
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcSmDisableAllocate (
    void
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcSmEnableAllocate (
    void
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcSmFree (
    _In_ void * NodeToFree
    );
RPCRTAPI
RPC_SS_THREAD_HANDLE
RPC_ENTRY
RpcSmGetThreadHandle (
    _Out_ RPC_STATUS * pStatus
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcSmSetClientAllocFree (
    _In_ RPC_CLIENT_ALLOC * ClientAlloc,
    _In_ RPC_CLIENT_FREE * ClientFree
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcSmSetThreadHandle (
    _In_ RPC_SS_THREAD_HANDLE Id
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcSmSwapClientAllocFree (
    _In_ RPC_CLIENT_ALLOC * ClientAlloc,
    _In_ RPC_CLIENT_FREE * ClientFree,
    _Out_ RPC_CLIENT_ALLOC * * OldClientAlloc,
    _Out_ RPC_CLIENT_FREE * * OldClientFree
    );
RPCRTAPI
void
RPC_ENTRY
NdrRpcSsEnableAllocate(
    PMIDL_STUB_MESSAGE pMessage );
RPCRTAPI
void
RPC_ENTRY
NdrRpcSsDisableAllocate(
    PMIDL_STUB_MESSAGE pMessage );
RPCRTAPI
void
RPC_ENTRY
NdrRpcSmSetClientToOsf(
    PMIDL_STUB_MESSAGE pMessage );
RPCRTAPI
void *
RPC_ENTRY
NdrRpcSmClientAllocate (
    _In_ size_t Size
    );
RPCRTAPI
void
RPC_ENTRY
NdrRpcSmClientFree (
    _In_ void * NodeToFree
    );
RPCRTAPI
void *
RPC_ENTRY
NdrRpcSsDefaultAllocate (
    _In_ size_t Size
    );
RPCRTAPI
void
RPC_ENTRY
NdrRpcSsDefaultFree (
    _In_ void * NodeToFree
    );
RPCRTAPI
PFULL_PTR_XLAT_TABLES
RPC_ENTRY
NdrFullPointerXlatInit(
    unsigned long NumberOfPointers,
    XLAT_SIDE XlatSide
    );
RPCRTAPI
void
RPC_ENTRY
NdrFullPointerXlatFree(
    PFULL_PTR_XLAT_TABLES pXlatTables
    );
RPCRTAPI
void *
RPC_ENTRY
NdrAllocate(
    PMIDL_STUB_MESSAGE pStubMsg,
    size_t Len
    );
RPCRTAPI
void
RPC_ENTRY
NdrClearOutParameters(
    PMIDL_STUB_MESSAGE pStubMsg,
    PFORMAT_STRING pFormat,
    void * ArgAddr
    );
RPCRTAPI
void *
RPC_ENTRY
NdrOleAllocate (
    _In_ size_t Size
    );
RPCRTAPI
void
RPC_ENTRY
NdrOleFree (
    _In_ void * NodeToFree
    );
typedef struct _NDR_USER_MARSHAL_INFO_LEVEL1
{
    void * Buffer;
    unsigned long BufferSize;
    void *(__RPC_API * pfnAllocate)(size_t);
    void (__RPC_API * pfnFree)(void *);
    struct IRpcChannelBuffer * pRpcChannelBuffer;
    ULONG_PTR Reserved[5];
} NDR_USER_MARSHAL_INFO_LEVEL1;
#pragma warning(disable:4201)
typedef struct _NDR_USER_MARSHAL_INFO
{
    unsigned long InformationLevel;
    union {
        NDR_USER_MARSHAL_INFO_LEVEL1 Level1;
    } DUMMYUNIONNAME;
} NDR_USER_MARSHAL_INFO;
#pragma warning(default:4201)
RPC_STATUS
RPC_ENTRY
NdrGetUserMarshalInfo (
    _In_ unsigned long * pFlags,
    _In_ unsigned long InformationLevel,
    _Out_ NDR_USER_MARSHAL_INFO * pMarshalInfo
    );
RPC_STATUS RPC_ENTRY
NdrCreateServerInterfaceFromStub(
            _In_ struct IRpcStubBuffer* pStub,
            _Inout_ RPC_SERVER_INTERFACE *pServerIf );
CLIENT_CALL_RETURN RPC_VAR_ENTRY
NdrClientCall3(
    MIDL_STUBLESS_PROXY_INFO *pProxyInfo,
    unsigned long nProcNum,
    void * pReturnValue,
    ...
    );
CLIENT_CALL_RETURN RPC_VAR_ENTRY
Ndr64AsyncClientCall(
    MIDL_STUBLESS_PROXY_INFO *pProxyInfo,
    unsigned long nProcNum,
    void * pReturnValue,
    ...
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CLIENT_CALL_RETURN RPC_VAR_ENTRY
Ndr64DcomAsyncClientCall(
    MIDL_STUBLESS_PROXY_INFO *pProxyInfo,
    unsigned long nProcNum,
    void * pReturnValue,
    ...
    );
RPCRTAPI
void
RPC_ENTRY
Ndr64AsyncServerCall(
    PRPC_MESSAGE pRpcMsg
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
struct IRpcStubBuffer;
RPCRTAPI
void
RPC_ENTRY
Ndr64AsyncServerCall64(
    PRPC_MESSAGE pRpcMsg
    );
RPCRTAPI
void
RPC_ENTRY
Ndr64AsyncServerCallAll(
    PRPC_MESSAGE pRpcMsg
    );
RPCRTAPI
long
RPC_ENTRY
Ndr64AsyncStubCall(
    struct IRpcStubBuffer * pThis,
    struct IRpcChannelBuffer * pChannel,
    PRPC_MESSAGE pRpcMsg,
    unsigned long * pdwStubPhase
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
long
RPC_ENTRY
Ndr64DcomAsyncStubCall(
    struct IRpcStubBuffer * pThis,
    struct IRpcChannelBuffer * pChannel,
    PRPC_MESSAGE pRpcMsg,
    unsigned long * pdwStubPhase
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
long
RPC_ENTRY
NdrStubCall3 (
    void * pThis,
    void * pChannel,
    PRPC_MESSAGE pRpcMsg,
    unsigned long * pdwStubPhase
    );
RPCRTAPI
void
RPC_ENTRY
NdrServerCallAll(
    PRPC_MESSAGE pRpcMsg
    );
RPCRTAPI
void
RPC_ENTRY
NdrServerCallNdr64(
    PRPC_MESSAGE pRpcMsg
    );
RPCRTAPI
void
RPC_ENTRY
NdrServerCall3(
    PRPC_MESSAGE pRpcMsg
    );
RPCRTAPI
void
RPC_ENTRY
NdrPartialIgnoreClientMarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    void * pMemory
    );
RPCRTAPI
void
RPC_ENTRY
NdrPartialIgnoreServerUnmarshall(
    PMIDL_STUB_MESSAGE pStubMsg,
    void ** ppMemory
    );
RPCRTAPI
void
RPC_ENTRY
NdrPartialIgnoreClientBufferSize(
    PMIDL_STUB_MESSAGE pStubMsg,
    void * pMemory
    );
RPCRTAPI
void
RPC_ENTRY
NdrPartialIgnoreServerInitialize(
    PMIDL_STUB_MESSAGE pStubMsg,
    void ** ppMemory,
    PFORMAT_STRING pFormat
    );
void RPC_ENTRY
RpcUserFree( handle_t AsyncHandle, void * pBuffer );
#endif
#pragma endregion
}
#include <poppack.h>
