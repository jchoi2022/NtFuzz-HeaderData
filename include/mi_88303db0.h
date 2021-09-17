#include <winapifamily.h>
#pragma region Desktop Family or WinMgmt Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT)
#include <sal.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
 #pragma prefast(push)
 #pragma prefast(disable:6001)
 #pragma prefast(disable:6101)
 #pragma prefast(disable:28922)
#pragma pack(push,8)
typedef struct _MI_Server MI_Server;
typedef struct _MI_Context MI_Context;
typedef struct _MI_ClassDecl MI_ClassDecl;
typedef struct _MI_Instance MI_Instance;
typedef struct _MI_Filter MI_Filter;
typedef struct _MI_PropertySet MI_PropertySet;
typedef struct _MI_Qualifier MI_Qualifier;
typedef struct _MI_Session MI_Session;
typedef struct _MI_ServerFT MI_ServerFT;
typedef struct _MI_ProviderFT MI_ProviderFT;
typedef struct _MI_PropertySetFT MI_PropertySetFT;
typedef struct _MI_InstanceFT MI_InstanceFT;
typedef struct _MI_ContextFT MI_ContextFT;
typedef struct _MI_FilterFT MI_FilterFT;
typedef struct _MI_Class MI_Class;
typedef struct _MI_InstanceExFT MI_InstanceExFT;
typedef _Return_type_success_(return == MI_RESULT_OK) enum _MI_Result
{
    MI_RESULT_OK = 0,
    MI_RESULT_FAILED = 1,
    MI_RESULT_ACCESS_DENIED = 2,
    MI_RESULT_INVALID_NAMESPACE = 3,
    MI_RESULT_INVALID_PARAMETER = 4,
    MI_RESULT_INVALID_CLASS = 5,
    MI_RESULT_NOT_FOUND = 6,
    MI_RESULT_NOT_SUPPORTED = 7,
    MI_RESULT_CLASS_HAS_CHILDREN = 8,
    MI_RESULT_CLASS_HAS_INSTANCES = 9,
    MI_RESULT_INVALID_SUPERCLASS = 10,
    MI_RESULT_ALREADY_EXISTS = 11,
    MI_RESULT_NO_SUCH_PROPERTY = 12,
    MI_RESULT_TYPE_MISMATCH = 13,
    MI_RESULT_QUERY_LANGUAGE_NOT_SUPPORTED = 14,
    MI_RESULT_INVALID_QUERY = 15,
    MI_RESULT_METHOD_NOT_AVAILABLE = 16,
    MI_RESULT_METHOD_NOT_FOUND = 17,
    MI_RESULT_NAMESPACE_NOT_EMPTY = 20,
    MI_RESULT_INVALID_ENUMERATION_CONTEXT = 21,
    MI_RESULT_INVALID_OPERATION_TIMEOUT = 22,
    MI_RESULT_PULL_HAS_BEEN_ABANDONED = 23,
    MI_RESULT_PULL_CANNOT_BE_ABANDONED = 24,
    MI_RESULT_FILTERED_ENUMERATION_NOT_SUPPORTED = 25,
    MI_RESULT_CONTINUATION_ON_ERROR_NOT_SUPPORTED = 26,
    MI_RESULT_SERVER_LIMITS_EXCEEDED = 27,
    MI_RESULT_SERVER_IS_SHUTTING_DOWN = 28
}
MI_Result;
typedef enum _MI_ErrorCategory
{
    MI_ERRORCATEGORY_NOT_SPECIFIED = 0,
    MI_ERRORCATEGORY_OPEN_ERROR = 1,
    MI_ERRORCATEGORY_CLOS_EERROR = 2,
    MI_ERRORCATEGORY_DEVICE_ERROR = 3,
    MI_ERRORCATEGORY_DEADLOCK_DETECTED = 4,
    MI_ERRORCATEGORY_INVALID_ARGUMENT = 5,
    MI_ERRORCATEGORY_INVALID_DATA = 6,
    MI_ERRORCATEGORY_INVALID_OPERATION = 7,
    MI_ERRORCATEGORY_INVALID_RESULT = 8,
    MI_ERRORCATEGORY_INVALID_TYPE = 9,
    MI_ERRORCATEGORY_METADATA_ERROR = 10,
    MI_ERRORCATEGORY_NOT_IMPLEMENTED = 11,
    MI_ERRORCATEGORY_NOT_INSTALLED = 12,
    MI_ERRORCATEGORY_OBJECT_NOT_FOUND = 13,
    MI_ERRORCATEGORY_OPERATION_STOPPED = 14,
    MI_ERRORCATEGORY_OPERATION_TIMEOUT = 15,
    MI_ERRORCATEGORY_SYNTAX_ERROR = 16,
    MI_ERRORCATEGORY_PARSER_ERROR = 17,
    MI_ERRORCATEGORY_ACCESS_DENIED = 18,
    MI_ERRORCATEGORY_RESOURCE_BUSY = 19,
    MI_ERRORCATEGORY_RESOURCE_EXISTS = 20,
    MI_ERRORCATEGORY_RESOURCE_UNAVAILABLE = 21,
    MI_ERRORCATEGORY_READ_ERROR = 22,
    MI_ERRORCATEGORY_WRITE_ERROR = 23,
    MI_ERRORCATEGORY_FROM_STDERR = 24,
    MI_ERRORCATEGORY_SECURITY_ERROR = 25,
    MI_ERRORCATEGORY_PROTOCOL_ERROR = 26,
    MI_ERRORCATEGORY_CONNECTION_ERROR = 27,
    MI_ERRORCATEGORY_AUTHENTICATION_ERROR = 28,
    MI_ERRORCATEGORY_LIMITS_EXCEEDED = 29,
    MI_ERRORCATEGORY_QUOTA_EXCEEDED = 30,
    MI_ERRORCATEGORY_NOT_ENABLED = 31
}
MI_ErrorCategory;
typedef enum _MI_PromptType
{
    MI_PROMPTTYPE_NORMAL,
    MI_PROMPTTYPE_CRITICAL
}
MI_PromptType;
typedef enum _MI_CallbackMode
{
    MI_CALLBACKMODE_REPORT,
    MI_CALLBACKMODE_INQUIRE,
    MI_CALLBACKMODE_IGNORE
}
MI_CallbackMode;
typedef enum _MI_ProviderArchitecture
{
    MI_PROVIDER_ARCHITECTURE_32BIT,
    MI_PROVIDER_ARCHITECTURE_64BIT,
}
MI_ProviderArchitecture;
typedef enum _MI_Type
{
    MI_BOOLEAN = 0,
    MI_UINT8 = 1,
    MI_SINT8 = 2,
    MI_UINT16 = 3,
    MI_SINT16 = 4,
    MI_UINT32 = 5,
    MI_SINT32 = 6,
    MI_UINT64 = 7,
    MI_SINT64 = 8,
    MI_REAL32 = 9,
    MI_REAL64 = 10,
    MI_CHAR16 = 11,
    MI_DATETIME = 12,
    MI_STRING = 13,
    MI_REFERENCE = 14,
    MI_INSTANCE = 15,
    MI_BOOLEANA = 16,
    MI_UINT8A = 17,
    MI_SINT8A = 18,
    MI_UINT16A = 19,
    MI_SINT16A = 20,
    MI_UINT32A = 21,
    MI_SINT32A = 22,
    MI_UINT64A = 23,
    MI_SINT64A = 24,
    MI_REAL32A = 25,
    MI_REAL64A = 26,
    MI_CHAR16A = 27,
    MI_DATETIMEA = 28,
    MI_STRINGA = 29,
    MI_REFERENCEA = 30,
    MI_INSTANCEA = 31,
    MI_ARRAY = 16
}
MI_Type;
typedef unsigned char MI_Boolean;
typedef unsigned char MI_Uint8;
typedef signed char MI_Sint8;
typedef unsigned short MI_Uint16;
typedef signed short MI_Sint16;
typedef unsigned int MI_Uint32;
typedef signed int MI_Sint32;
typedef unsigned __int64 MI_Uint64;
typedef signed __int64 MI_Sint64;
typedef float MI_Real32;
typedef double MI_Real64;
typedef unsigned short MI_Char16;
typedef wchar_t MI_Char;
typedef _Null_terminated_ MI_Char* MI_StringPtr;
typedef _Null_terminated_ _Const_ const MI_Char* MI_ConstStringPtr;
typedef struct _MI_Timestamp
{
    MI_Uint32 year;
    MI_Uint32 month;
    MI_Uint32 day;
    MI_Uint32 hour;
    MI_Uint32 minute;
    MI_Uint32 second;
    MI_Uint32 microseconds;
    MI_Sint32 utc;
}
MI_Timestamp;
typedef struct _MI_Interval
{
    MI_Uint32 days;
    MI_Uint32 hours;
    MI_Uint32 minutes;
    MI_Uint32 seconds;
    MI_Uint32 microseconds;
    MI_Uint32 __padding1;
    MI_Uint32 __padding2;
    MI_Uint32 __padding3;
}
MI_Interval;
typedef struct _MI_Datetime
{
    MI_Uint32 isTimestamp;
    union
    {
        MI_Timestamp timestamp;
        MI_Interval interval;
    }
    u;
}
MI_Datetime;
typedef struct _MI_BooleanA
{
    MI_Boolean* data;
    MI_Uint32 size;
}
MI_BooleanA;
typedef struct _MI_Uint8A
{
    MI_Uint8* data;
    MI_Uint32 size;
}
MI_Uint8A;
typedef struct _MI_Sint8A
{
    MI_Sint8* data;
    MI_Uint32 size;
}
MI_Sint8A;
typedef struct _MI_Uint16A
{
    MI_Uint16* data;
    MI_Uint32 size;
}
MI_Uint16A;
typedef struct _MI_Sint16A
{
    MI_Sint16* data;
    MI_Uint32 size;
}
MI_Sint16A;
typedef struct _MI_Uint32A
{
    MI_Uint32* data;
    MI_Uint32 size;
}
MI_Uint32A;
typedef struct _MI_Sint32A
{
    MI_Sint32* data;
    MI_Uint32 size;
}
MI_Sint32A;
typedef struct _MI_Uint64A
{
    MI_Uint64* data;
    MI_Uint32 size;
}
MI_Uint64A;
typedef struct _MI_Sint64A
{
    MI_Sint64* data;
    MI_Uint32 size;
}
MI_Sint64A;
typedef struct _MI_Real32A
{
    MI_Real32* data;
    MI_Uint32 size;
}
MI_Real32A;
typedef struct _MI_Real64A
{
    MI_Real64* data;
    MI_Uint32 size;
}
MI_Real64A;
typedef struct _MI_Char16A
{
    MI_Char16* data;
    MI_Uint32 size;
}
MI_Char16A;
typedef struct _MI_DatetimeA
{
    MI_Datetime* data;
    MI_Uint32 size;
}
MI_DatetimeA;
typedef struct _MI_StringA
{
    MI_Char** data;
    MI_Uint32 size;
}
MI_StringA;
typedef struct _MI_ReferenceA
{
    struct _MI_Instance** data;
    MI_Uint32 size;
}
MI_ReferenceA;
typedef struct _MI_InstanceA
{
    MI_Instance** data;
    MI_Uint32 size;
}
MI_InstanceA;
typedef struct _MI_Array
{
    void* data;
    MI_Uint32 size;
}
MI_Array;
typedef struct _MI_ConstBooleanA
{
    MI_CONST MI_Boolean* data;
    MI_Uint32 size;
}
MI_ConstBooleanA;
typedef struct _MI_ConstUint8A
{
    MI_CONST MI_Uint8* data;
    MI_Uint32 size;
}
MI_ConstUint8A;
typedef struct _MI_ConstSint8A
{
    MI_CONST MI_Sint8* data;
    MI_Uint32 size;
}
MI_ConstSint8A;
typedef struct _MI_ConstUint16A
{
    MI_CONST MI_Uint16* data;
    MI_Uint32 size;
}
MI_ConstUint16A;
typedef struct _MI_ConstSint16A
{
    MI_CONST MI_Sint16* data;
    MI_Uint32 size;
}
MI_ConstSint16A;
typedef struct _MI_ConstUint32A
{
    MI_CONST MI_Uint32* data;
    MI_Uint32 size;
}
MI_ConstUint32A;
typedef struct _MI_ConstSint32A
{
    MI_CONST MI_Sint32* data;
    MI_Uint32 size;
}
MI_ConstSint32A;
typedef struct _MI_ConstUint64A
{
    MI_CONST MI_Uint64* data;
    MI_Uint32 size;
}
MI_ConstUint64A;
typedef struct _MI_ConstSint64A
{
    MI_CONST MI_Sint64* data;
    MI_Uint32 size;
}
MI_ConstSint64A;
typedef struct _MI_ConstReal32A
{
    MI_CONST MI_Real32* data;
    MI_Uint32 size;
}
MI_ConstReal32A;
typedef struct _MI_ConstReal64A
{
    MI_CONST MI_Real64* data;
    MI_Uint32 size;
}
MI_ConstReal64A;
typedef struct _MI_ConstChar16A
{
    MI_CONST MI_Char16* data;
    MI_Uint32 size;
}
MI_ConstChar16A;
typedef struct _MI_ConstDatetimeA
{
    MI_CONST MI_Datetime* data;
    MI_Uint32 size;
}
MI_ConstDatetimeA;
typedef struct _MI_ConstStringA
{
    MI_CONST MI_Char* MI_CONST* data;
    MI_Uint32 size;
}
MI_ConstStringA;
typedef struct _MI_ConstReferenceA
{
    MI_CONST MI_Instance* MI_CONST* data;
    MI_Uint32 size;
}
MI_ConstReferenceA;
typedef struct _MI_ConstInstanceA
{
    MI_CONST MI_Instance* MI_CONST* data;
    MI_Uint32 size;
}
MI_ConstInstanceA;
typedef union _MI_Value
{
    MI_Boolean boolean;
    MI_Uint8 uint8;
    MI_Sint8 sint8;
    MI_Uint16 uint16;
    MI_Sint16 sint16;
    MI_Uint32 uint32;
    MI_Sint32 sint32;
    MI_Uint64 uint64;
    MI_Sint64 sint64;
    MI_Real32 real32;
    MI_Real64 real64;
    MI_Char16 char16;
    MI_Datetime datetime;
    MI_Char* string;
    MI_Instance* instance;
    MI_Instance* reference;
    MI_BooleanA booleana;
    MI_Uint8A uint8a;
    MI_Sint8A sint8a;
    MI_Uint16A uint16a;
    MI_Sint16A sint16a;
    MI_Uint32A uint32a;
    MI_Sint32A sint32a;
    MI_Uint64A uint64a;
    MI_Sint64A sint64a;
    MI_Real32A real32a;
    MI_Real64A real64a;
    MI_Char16A char16a;
    MI_DatetimeA datetimea;
    MI_StringA stringa;
    MI_ReferenceA referencea;
    MI_InstanceA instancea;
    MI_Array array;
}
MI_Value;
typedef struct _MI_BooleanField
{
    MI_Boolean value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_BooleanField;
typedef struct _MI_Sint8Field
{
    MI_Sint8 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Sint8Field;
typedef struct _MI_Uint8Field
{
    MI_Uint8 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Uint8Field;
typedef struct _MI_Sint16Field
{
    MI_Sint16 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Sint16Field;
typedef struct _MI_Uint16Field
{
    MI_Uint16 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Uint16Field;
typedef struct _MI_Sint32Field
{
    MI_Sint32 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Sint32Field;
typedef struct _MI_Uint32Field
{
    MI_Uint32 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Uint32Field;
typedef struct _MI_Sint64Field
{
    MI_Sint64 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Sint64Field;
typedef struct _MI_Uint64Field
{
    MI_Uint64 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Uint64Field;
typedef struct _MI_Real32Field
{
    MI_Real32 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Real32Field;
typedef struct _MI_Real64Field
{
    MI_Real64 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Real64Field;
typedef struct _MI_Char16Field
{
    MI_Char16 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Char16Field;
typedef struct _MI_DatetimeField
{
    MI_Datetime value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_DatetimeField;
typedef struct _MI_StringField
{
    MI_Char* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_StringField;
typedef struct _MI_ReferenceField
{
    MI_Instance* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ReferenceField;
typedef struct _MI_InstanceField
{
    MI_Instance* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_InstanceField;
typedef struct _MI_BooleanAField
{
    MI_BooleanA value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_BooleanAField;
typedef struct _MI_Uint8AField
{
    MI_Uint8A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Uint8AField;
typedef struct _MI_Sint8AField
{
    MI_Sint8A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Sint8AField;
typedef struct _MI_Uint16AField
{
    MI_Uint16A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Uint16AField;
typedef struct _MI_Sint16AField
{
    MI_Sint16A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Sint16AField;
typedef struct _MI_Uint32AField
{
    MI_Uint32A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Uint32AField;
typedef struct _MI_Sint32AField
{
    MI_Sint32A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Sint32AField;
typedef struct _MI_Uint64AField
{
    MI_Uint64A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Uint64AField;
typedef struct _MI_Sint64AField
{
    MI_Sint64A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Sint64AField;
typedef struct _MI_Real32AField
{
    MI_Real32A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Real32AField;
typedef struct _MI_Real64AField
{
    MI_Real64A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Real64AField;
typedef struct _MI_Char16AField
{
    MI_Char16A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_Char16AField;
typedef struct _MI_DatetimeAField
{
    MI_DatetimeA value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_DatetimeAField;
typedef struct _MI_StringAField
{
    MI_StringA value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_StringAField;
typedef struct _MI_ReferenceAField
{
    MI_ReferenceA value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ReferenceAField;
typedef struct _MI_InstanceAField
{
    MI_InstanceA value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_InstanceAField;
typedef struct _MI_ArrayField
{
    MI_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ArrayField;
typedef struct _MI_ConstBooleanField
{
    MI_Boolean value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstBooleanField;
typedef struct _MI_ConstSint8Field
{
    MI_Sint8 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstSint8Field;
typedef struct _MI_ConstUint8Field
{
    MI_Uint8 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstUint8Field;
typedef struct _MI_ConstSint16Field
{
    MI_Sint16 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstSint16Field;
typedef struct _MI_ConstUint16Field
{
    MI_Uint16 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstUint16Field;
typedef struct _MI_ConstSint32Field
{
    MI_Sint32 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstSint32Field;
typedef struct _MI_ConstUint32Field
{
    MI_Uint32 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstUint32Field;
typedef struct _MI_ConstSint64Field
{
    MI_Sint64 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstSint64Field;
typedef struct _MI_ConstUint64Field
{
    MI_Uint64 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstUint64Field;
typedef struct _MI_ConstReal32Field
{
    MI_Real32 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstReal32Field;
typedef struct _MI_ConstReal64Field
{
    MI_Real64 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstReal64Field;
typedef struct _MI_ConstChar16Field
{
    MI_Char16 value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstChar16Field;
typedef struct _MI_ConstDatetimeField
{
    MI_Datetime value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstDatetimeField;
typedef struct _MI_ConstStringField
{
    MI_CONST MI_Char* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstStringField;
typedef struct _MI_ConstReferenceField
{
    MI_CONST MI_Instance* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstReferenceField;
typedef struct _MI_ConstInstanceField
{
    MI_CONST MI_Instance* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstInstanceField;
typedef struct _MI_ConstBooleanAField
{
    MI_ConstBooleanA value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstBooleanAField;
typedef struct _MI_ConstUint8AField
{
    MI_ConstUint8A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstUint8AField;
typedef struct _MI_ConstSint8AField
{
    MI_ConstSint8A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstSint8AField;
typedef struct _MI_ConstUint16AField
{
    MI_ConstUint16A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstUint16AField;
typedef struct _MI_ConstSint16AField
{
    MI_ConstSint16A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstSint16AField;
typedef struct _MI_ConstUint32AField
{
    MI_ConstUint32A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstUint32AField;
typedef struct _MI_ConstSint32AField
{
    MI_ConstSint32A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstSint32AField;
typedef struct _MI_ConstUint64AField
{
    MI_ConstUint64A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstUint64AField;
typedef struct _MI_ConstSint64AField
{
    MI_ConstSint64A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstSint64AField;
typedef struct _MI_ConstReal32AField
{
    MI_ConstReal32A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstReal32AField;
typedef struct _MI_ConstReal64AField
{
    MI_ConstReal64A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstReal64AField;
typedef struct _MI_ConstChar16AField
{
    MI_ConstChar16A value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstChar16AField;
typedef struct _MI_ConstDatetimeAField
{
    MI_ConstDatetimeA value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstDatetimeAField;
typedef struct _MI_ConstStringAField
{
    MI_ConstStringA value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstStringAField;
typedef struct _MI_ConstReferenceAField
{
    MI_ConstReferenceA value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstReferenceAField;
typedef struct _MI_ConstInstanceAField
{
    MI_ConstInstanceA value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MI_ConstInstanceAField;
struct _MI_ServerFT
{
    MI_Result (MI_CALL *GetVersion)(
        MI_Uint32* version);
    MI_Result (MI_CALL *GetSystemName)(
        const MI_Char** systemName);
};
struct _MI_Server
{
    const MI_ServerFT* serverFT;
    const MI_ContextFT* contextFT;
    const MI_InstanceFT* instanceFT;
    const MI_PropertySetFT* propertySetFT;
    const MI_FilterFT* filterFT;
};
MI_Result MI_CALL MI_Server_GetVersion(MI_Uint32* version);
MI_Result MI_CALL MI_Server_GetSystemName(const MI_Char** systemName);
struct _MI_FilterFT
{
    MI_Result (MI_CALL *Evaluate)(
        _In_ const MI_Filter* self,
        _In_ const MI_Instance* instance,
        _Out_ MI_Boolean* result);
    MI_Result (MI_CALL *GetExpression)(
        _In_ const MI_Filter* self,
        _Outptr_result_maybenull_z_ const MI_Char** queryLang,
        _Outptr_result_maybenull_z_ const MI_Char** queryExpr);
};
struct _MI_Filter
{
    const MI_FilterFT* ft;
    ptrdiff_t reserved[3];
};
MI_INLINE MI_Result MI_INLINE_CALL MI_Filter_Evaluate(
        _In_ const MI_Filter* self,
        _In_ const MI_Instance* instance,
        _Out_ MI_Boolean* result)
{
    if (self && self->ft)
    {
        return self->ft->Evaluate(self, instance, result);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Filter_GetExpression(
        _In_ const MI_Filter* self,
        _Outptr_result_maybenull_z_ const MI_Char** queryLang,
        _Outptr_result_maybenull_z_ const MI_Char** queryExpr)
{
    if (self && self->ft)
    {
        return self->ft->GetExpression(self, queryLang, queryExpr);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
struct _MI_PropertySetFT
{
    MI_Result (MI_CALL *GetElementCount)(
        _In_ const MI_PropertySet* self,
        _Out_ MI_Uint32* count);
    MI_Result (MI_CALL *ContainsElement)(
        _In_ const MI_PropertySet* self,
        _In_z_ const MI_Char* name,
        _Out_ MI_Boolean* flag);
    MI_Result (MI_CALL *AddElement)(
        _Inout_ MI_PropertySet* self,
        _In_z_ const MI_Char* name);
    MI_Result (MI_CALL *GetElementAt)(
        _In_ const MI_PropertySet* self,
        MI_Uint32 index,
        _Outptr_result_z_ const MI_Char** name);
    MI_Result (MI_CALL *Clear)(
        _Inout_ MI_PropertySet* self);
    MI_Result (MI_CALL *Destruct)(
        _Inout_ MI_PropertySet* self);
    MI_Result (MI_CALL *Delete)(
        _Inout_ MI_PropertySet* self);
    MI_Result (MI_CALL *Clone)(
        _In_ const MI_PropertySet* self,
        _Outptr_ MI_PropertySet** newPropertySet);
};
struct _MI_PropertySet
{
    const MI_PropertySetFT* ft;
    ptrdiff_t reserved[3];
};
MI_INLINE MI_Result MI_INLINE_CALL MI_PropertySet_GetElementCount(
    _In_ const MI_PropertySet* self,
    _Out_ MI_Uint32* count)
{
    if (self && self->ft)
    {
        return self->ft->GetElementCount(self, count);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_PropertySet_ContainsElement(
    _In_ const MI_PropertySet* self,
    _In_z_ const MI_Char* name,
    _Out_ MI_Boolean* flag)
{
    if (self && self->ft)
    {
        return self->ft->ContainsElement(self, name, flag);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_PropertySet_AddElement(
    _Inout_ MI_PropertySet* self,
    _In_z_ const MI_Char* name)
{
    if (self && self->ft)
    {
        return self->ft->AddElement(self, name);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_PropertySet_GetElementAt(
    _In_ const MI_PropertySet* self,
    MI_Uint32 index,
    _Outptr_result_z_ const MI_Char** name)
{
    if (self && self->ft)
    {
        return self->ft->GetElementAt(self, index, name);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_PropertySet_Clear(
    _Inout_ MI_PropertySet* self)
{
    if (self && self->ft)
    {
        return self->ft->Clear(self);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_PropertySet_Destruct(
    _Inout_ MI_PropertySet* self)
{
    if (self && self->ft)
    {
        return self->ft->Destruct(self);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_PropertySet_Delete(
    _Inout_ MI_PropertySet* self)
{
    if (self && self->ft)
    {
        return self->ft->Delete(self);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_PropertySet_Clone(
    _In_ const MI_PropertySet* self,
    _Outptr_ MI_PropertySet** newPropertySet)
{
    if (self && self->ft)
    {
        return self->ft->Clone(self, newPropertySet);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
typedef struct _MI_ObjectDecl
{
    MI_Uint32 flags;
    MI_Uint32 code;
    MI_CONST MI_Char* name;
    MI_Qualifier MI_CONST* MI_CONST* qualifiers;
    MI_Uint32 numQualifiers;
    struct _MI_PropertyDecl MI_CONST* MI_CONST* properties;
    MI_Uint32 numProperties;
    MI_Uint32 size;
}
MI_ObjectDecl;
struct _MI_ClassDecl
{
    MI_Uint32 flags;
    MI_Uint32 code;
    MI_CONST MI_Char* name;
    struct _MI_Qualifier MI_CONST* MI_CONST* qualifiers;
    MI_Uint32 numQualifiers;
    struct _MI_PropertyDecl MI_CONST* MI_CONST* properties;
    MI_Uint32 numProperties;
    MI_Uint32 size;
    MI_CONST MI_Char* superClass;
    MI_ClassDecl MI_CONST* superClassDecl;
    struct _MI_MethodDecl MI_CONST* MI_CONST* methods;
    MI_Uint32 numMethods;
    struct _MI_SchemaDecl MI_CONST* schema;
    MI_CONST MI_ProviderFT* providerFT;
    MI_Class *owningClass;
};
typedef struct _MI_FeatureDecl
{
    MI_Uint32 flags;
    MI_Uint32 code;
    MI_CONST MI_Char* name;
    MI_Qualifier MI_CONST* MI_CONST * qualifiers;
    MI_Uint32 numQualifiers;
}
MI_FeatureDecl;
typedef struct _MI_ParameterDecl
{
    MI_Uint32 flags;
    MI_Uint32 code;
    MI_CONST MI_Char* name;
    MI_Qualifier MI_CONST* MI_CONST* qualifiers;
    MI_Uint32 numQualifiers;
    MI_Uint32 type;
    MI_CONST MI_Char* className;
    MI_Uint32 subscript;
    MI_Uint32 offset;
}
MI_ParameterDecl;
typedef struct _MI_PropertyDecl
{
    MI_Uint32 flags;
    MI_Uint32 code;
    MI_CONST MI_Char* name;
    MI_Qualifier MI_CONST* MI_CONST* qualifiers;
    MI_Uint32 numQualifiers;
    MI_Uint32 type;
    MI_CONST MI_Char* className;
    MI_Uint32 subscript;
    MI_Uint32 offset;
    MI_CONST MI_Char* origin;
    MI_CONST MI_Char* propagator;
    MI_CONST void* value;
}
MI_PropertyDecl;
typedef void (MI_CALL *MI_MethodDecl_Invoke)(
    _In_opt_ void* self,
    _In_ MI_Context* context,
    _In_z_ const MI_Char* nameSpace,
    _In_z_ const MI_Char* className,
    _In_z_ const MI_Char* methodName,
    _In_ const MI_Instance* instanceName,
    _In_ const MI_Instance* parameters);
typedef struct _MI_MethodDecl
{
    MI_Uint32 flags;
    MI_Uint32 code;
    MI_CONST MI_Char* name;
    struct _MI_Qualifier MI_CONST* MI_CONST* qualifiers;
    MI_Uint32 numQualifiers;
    struct _MI_ParameterDecl MI_CONST* MI_CONST* parameters;
    MI_Uint32 numParameters;
    MI_Uint32 size;
    MI_Uint32 returnType;
    MI_CONST MI_Char* origin;
    MI_CONST MI_Char* propagator;
    struct _MI_SchemaDecl MI_CONST* schema;
    MI_MethodDecl_Invoke function;
}
MI_MethodDecl;
typedef struct _MI_QualifierDecl
{
    MI_CONST MI_Char* name;
    MI_Uint32 type;
    MI_Uint32 scope;
    MI_Uint32 flavor;
    MI_Uint32 subscript;
    MI_CONST void* value;
}
MI_QualifierDecl;
struct _MI_Qualifier
{
    MI_CONST MI_Char* name;
    MI_Uint32 type;
    MI_Uint32 flavor;
    MI_CONST void* value;
};
typedef struct _MI_SchemaDecl
{
    MI_QualifierDecl MI_CONST* MI_CONST* qualifierDecls;
    MI_Uint32 numQualifierDecls;
    MI_ClassDecl MI_CONST* MI_CONST* classDecls;
    MI_Uint32 numClassDecls;
}
MI_SchemaDecl;
typedef struct _MI_Module_Self MI_Module_Self;
typedef void (MI_CALL *MI_ProviderFT_Load)(
    _Outptr_ void** self,
    _In_opt_ MI_Module_Self* selfModule,
    _In_ MI_Context* context);
typedef void (MI_CALL *MI_ProviderFT_Unload)(
    _In_opt_ void* self,
    _In_ MI_Context* context);
typedef void (MI_CALL *MI_ProviderFT_GetInstance)(
    _In_opt_ void* self,
    _In_ MI_Context* context,
    _In_z_ const MI_Char* nameSpace,
    _In_z_ const MI_Char* className,
    _In_ const MI_Instance* instanceName,
    _In_opt_ const MI_PropertySet* propertySet);
typedef void (MI_CALL *MI_ProviderFT_EnumerateInstances)(
    _In_opt_ void* self,
    _In_ MI_Context* context,
    _In_z_ const MI_Char* nameSpace,
    _In_z_ const MI_Char* className,
    _In_opt_ const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    _In_opt_ const MI_Filter* filter);
typedef void (MI_CALL *MI_ProviderFT_CreateInstance)(
    _In_opt_ void* self,
    _In_ MI_Context* context,
    _In_z_ const MI_Char* nameSpace,
    _In_z_ const MI_Char* className,
    _In_ const MI_Instance* newInstance);
typedef void (MI_CALL *MI_ProviderFT_ModifyInstance)(
    void* self,
    MI_Context* context,
    _In_z_ const MI_Char* nameSpace,
    _In_z_ const MI_Char* className,
    const MI_Instance* modifiedInstance,
    const MI_PropertySet* propertySet);
typedef void (MI_CALL *MI_ProviderFT_DeleteInstance)(
    _In_opt_ void* self,
    _In_ MI_Context* context,
    _In_z_ const MI_Char* nameSpace,
    _In_z_ const MI_Char* className,
    _In_ const MI_Instance* instanceName);
typedef void (MI_CALL *MI_ProviderFT_AssociatorInstances)(
    _In_opt_ void* self,
    _In_ MI_Context* context,
    _In_z_ const MI_Char* nameSpace,
    _In_z_ const MI_Char* className,
    _In_ const MI_Instance* instanceName,
    _In_opt_z_ const MI_Char* resultClass,
    _In_opt_z_ const MI_Char* role,
    _In_opt_z_ const MI_Char* resultRole,
    _In_opt_ const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    _In_opt_ const MI_Filter* filter);
typedef void (MI_CALL *MI_ProviderFT_ReferenceInstances)(
    _In_opt_ void* self,
    _In_ MI_Context* context,
    _In_z_ const MI_Char* nameSpace,
    _In_z_ const MI_Char* className,
    _In_ const MI_Instance* instanceName,
    _In_opt_z_ const MI_Char* role,
    _In_opt_ const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    _In_opt_ const MI_Filter* filter);
typedef void (MI_CALL *MI_ProviderFT_EnableIndications)(
    _In_opt_ void* self,
    _In_ MI_Context* indicationsContext,
    _In_z_ const MI_Char* nameSpace,
    _In_z_ const MI_Char* className);
typedef void (MI_CALL *MI_ProviderFT_DisableIndications)(
    _In_opt_ void* self,
    _In_ MI_Context* indicationsContext,
    _In_z_ const MI_Char* nameSpace,
    _In_z_ const MI_Char* className);
typedef void (MI_CALL *MI_ProviderFT_Subscribe)(
    _In_opt_ void* self,
    _In_ MI_Context* context,
    _In_z_ const MI_Char* nameSpace,
    _In_z_ const MI_Char* className,
    _In_opt_ const MI_Filter* filter,
    _In_opt_z_ const MI_Char* bookmark,
    MI_Uint64 subscriptionID,
    _Outptr_result_maybenull_ void** subscriptionSelf);
typedef void (MI_CALL *MI_ProviderFT_Unsubscribe)(
    _In_opt_ void* self,
    _In_ MI_Context* context,
    _In_z_ const MI_Char* nameSpace,
    _In_z_ const MI_Char* className,
    MI_Uint64 subscriptionID,
    _In_opt_ void* subscriptionSelf);
typedef void (MI_CALL *MI_ProviderFT_Invoke)(
    _In_opt_ void* self,
    _In_ MI_Context* context,
    _In_z_ const MI_Char* nameSpace,
    _In_z_ const MI_Char* className,
    _In_z_ const MI_Char* methodName,
    _In_ const MI_Instance* instanceName,
    _In_ const MI_Instance* inputParameters);
struct _MI_ProviderFT
{
    MI_ProviderFT_Load Load;
    MI_ProviderFT_Unload Unload;
    MI_ProviderFT_GetInstance GetInstance;
    MI_ProviderFT_EnumerateInstances EnumerateInstances;
    MI_ProviderFT_CreateInstance CreateInstance;
    MI_ProviderFT_ModifyInstance ModifyInstance;
    MI_ProviderFT_DeleteInstance DeleteInstance;
    MI_ProviderFT_AssociatorInstances AssociatorInstances;
    MI_ProviderFT_ReferenceInstances ReferenceInstances;
    MI_ProviderFT_EnableIndications EnableIndications;
    MI_ProviderFT_DisableIndications DisableIndications;
    MI_ProviderFT_Subscribe Subscribe;
    MI_ProviderFT_Unsubscribe Unsubscribe;
    MI_ProviderFT_Invoke Invoke;
};
typedef void (MI_CALL *MI_Module_Load)(
    _Out_ MI_Module_Self** self,
    _In_ MI_Context* context);
typedef void (MI_CALL *MI_Module_Unload)(
    _In_opt_ MI_Module_Self* self,
    _In_ MI_Context* context);
typedef struct _MI_Module
{
    MI_Uint32 version;
    MI_Uint32 generatorVersion;
    MI_Uint32 flags;
    MI_Uint32 charSize;
    MI_SchemaDecl* schemaDecl;
    MI_Module_Load Load;
    MI_Module_Unload Unload;
    const MI_ProviderFT* dynamicProviderFT;
}
MI_Module;
struct _MI_InstanceFT
{
    MI_Result (MI_CALL *Clone)(
        _In_ const MI_Instance* self,
        _Outptr_ MI_Instance** newInstance);
    MI_Result (MI_CALL *Destruct)(
        _Inout_ MI_Instance* self);
    MI_Result (MI_CALL *Delete)(
        _Inout_ MI_Instance* self);
    MI_Result (MI_CALL *IsA)(
        _In_ const MI_Instance* self,
        _In_ const MI_ClassDecl* classDecl,
        _Out_ MI_Boolean* flag);
    MI_Result (MI_CALL *GetClassName)(
        _In_ const MI_Instance* self,
        _Outptr_result_maybenull_z_ const MI_Char** className);
    MI_Result (MI_CALL *SetNameSpace)(
        _Inout_ MI_Instance* self,
        _In_z_ const MI_Char* nameSpace);
    MI_Result (MI_CALL *GetNameSpace)(
        _In_ const MI_Instance* self,
        _Outptr_result_maybenull_z_ const MI_Char** nameSpace);
    MI_Result (MI_CALL *GetElementCount)(
        _In_ const MI_Instance* self,
        _Out_ MI_Uint32* count);
    MI_Result (MI_CALL *AddElement)(
        _Inout_ MI_Instance* self,
        _In_z_ const MI_Char* name,
        _In_opt_ const MI_Value* value,
        MI_Type type,
        MI_Uint32 flags);
    MI_Result (MI_CALL *SetElement)(
        _Inout_ MI_Instance* self,
        _In_z_ const MI_Char* name,
        _In_opt_ const MI_Value* value,
        MI_Type type,
        MI_Uint32 flags);
    MI_Result (MI_CALL *SetElementAt)(
        _Inout_ MI_Instance* self,
        MI_Uint32 index,
        _In_reads_opt_(_Inexpressible_("varies depending on type")) const MI_Value* value,
        MI_Type type,
        MI_Uint32 flags);
    MI_Result (MI_CALL *GetElement)(
        _In_ const MI_Instance* self,
        _In_z_ const MI_Char* name,
        _Out_opt_ MI_Value* value,
        _Out_opt_ MI_Type* type,
        _Out_opt_ MI_Uint32* flags,
        _Out_opt_ MI_Uint32* index);
    MI_Result (MI_CALL *GetElementAt)(
        _In_ const MI_Instance* self,
        MI_Uint32 index,
        _Outptr_result_maybenull_z_ const MI_Char** name,
        _Out_opt_ MI_Value* value,
        _Out_opt_ MI_Type* type,
        _Out_opt_ MI_Uint32* flags);
    MI_Result (MI_CALL *ClearElement)(
        _Inout_ MI_Instance* self,
        _In_z_ const MI_Char* name);
    MI_Result (MI_CALL *ClearElementAt)(
        _Inout_ MI_Instance* self,
        MI_Uint32 index);
    MI_Result (MI_CALL *GetServerName)(
        _In_ const MI_Instance* self,
        _Outptr_result_maybenull_z_ const MI_Char** name);
    MI_Result (MI_CALL *SetServerName)(
        _Inout_ MI_Instance* self,
        _In_z_ const MI_Char* name);
    MI_Result (MI_CALL *GetClass)(
        _In_ const MI_Instance* self,
        _Outptr_ MI_Class** instanceClass);
};
struct _MI_InstanceExFT
{
    MI_InstanceFT parent;
    MI_Result (MI_CALL *Normalize)(
        _Inout_ MI_Instance** self);
};
struct _MI_Instance
{
    const MI_InstanceFT* ft;
    const MI_ClassDecl* classDecl;
    const MI_Char* serverName;
    const MI_Char* nameSpace;
    ptrdiff_t reserved[4];
};
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_Clone(
    _In_ const MI_Instance* self,
    _Outptr_ MI_Instance** newInstance)
{
    if (self && self->ft)
    {
        return self->ft->Clone(self, newInstance);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_Destruct(
    _Inout_ MI_Instance* self)
{
    if (self && self->ft)
    {
        return self->ft->Destruct(self);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_Delete(
    _Inout_ MI_Instance* self)
{
    if (self && self->ft)
    {
        return self->ft->Delete(self);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_IsA(
    _In_ const MI_Instance* self,
    _In_ const MI_ClassDecl* classDecl,
    _Out_ MI_Boolean* flag)
{
    if (self && self->ft)
    {
        return self->ft->IsA(self, classDecl, flag);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_GetClassName(
    _In_ const MI_Instance* self,
    _Outptr_result_maybenull_z_ const MI_Char** className)
{
    if (self && self->ft)
    {
        return self->ft->GetClassName(self, className);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_SetNameSpace(
    _Inout_ MI_Instance* self,
    _In_z_ const MI_Char* nameSpace)
{
    if (self && self->ft)
    {
        return self->ft->SetNameSpace(self, nameSpace);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_GetNameSpace(
    _In_ const MI_Instance* self,
    _Outptr_result_maybenull_z_ const MI_Char** nameSpace)
{
    if (self && self->ft)
    {
        return self->ft->GetNameSpace(self, nameSpace);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_GetElementCount(
    _In_ const MI_Instance* self,
    _Out_ MI_Uint32* count)
{
    if (self && self->ft)
    {
        return self->ft->GetElementCount(self, count);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_AddElement(
    _Inout_ MI_Instance* self,
    _In_z_ const MI_Char* name,
    _In_opt_ const MI_Value* value,
    MI_Type type,
    MI_Uint32 flags)
{
    if (self && self->ft)
    {
        return self->ft->AddElement(self, name, value, type, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_SetElementAt(
    _Inout_ MI_Instance* self,
    MI_Uint32 index,
    _In_reads_opt_(_Inexpressible_("varies depending on type")) const MI_Value* value,
    MI_Type type,
    MI_Uint32 flags)
{
    if (self && self->ft)
    {
        return self->ft->SetElementAt(self, index, value, type, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_SetElement(
    _Inout_ MI_Instance* self,
    _In_z_ const MI_Char* name,
    _In_opt_ const MI_Value* value,
    MI_Type type,
    MI_Uint32 flags)
{
    if (self && self->ft)
    {
        return self->ft->SetElement(self, name, value, type, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_GetElement(
    _In_ const MI_Instance* self,
    _In_z_ const MI_Char* name,
    _Out_opt_ MI_Value* value,
    _Out_opt_ MI_Type* type,
    _Out_opt_ MI_Uint32* flags,
    _Out_opt_ MI_Uint32* index)
{
    if (self && self->ft)
    {
        return self->ft->GetElement(self, name, value, type, flags, index);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_GetElementAt(
    _In_ const MI_Instance* self,
    MI_Uint32 index,
    _Outptr_result_maybenull_z_ const MI_Char** name,
    _Out_opt_ MI_Value* value,
    _Out_opt_ MI_Type* type,
    _Out_opt_ MI_Uint32* flags)
{
    if (self && self->ft)
    {
        return self->ft->GetElementAt(self, index, name, value, type, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_ClearElement(
    _Inout_ MI_Instance* self,
    _In_z_ const MI_Char* name)
{
    if (self && self->ft)
    {
        return self->ft->ClearElement(self, name);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_ClearElementAt(
    _Inout_ MI_Instance* self,
    MI_Uint32 index)
{
    if (self && self->ft)
    {
        return self->ft->ClearElementAt(self, index);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_GetServerName(
    _In_ const MI_Instance* self,
    _Outptr_result_maybenull_z_ const MI_Char** name)
{
    if (self && self->ft)
    {
        return self->ft->GetServerName(self, name);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_SetServerName(
    _Inout_ MI_Instance* self,
    _In_z_ const MI_Char* name)
{
    if (self && self->ft)
    {
        return self->ft->SetServerName(self, name);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_GetClass(
    _In_ const MI_Instance* self,
    _Outptr_ MI_Class** instanceClass)
{
    if (self && self->ft)
    {
        return self->ft->GetClass(self, instanceClass);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Instance_Normalize(
    _Inout_ MI_Instance** self)
{
    MI_Instance* inst = *self;
    if (inst && inst->ft)
    {
        if (inst->classDecl->flags & MI_FLAG_EXTENDED)
        {
            MI_InstanceExFT* ft = (MI_InstanceExFT*)inst->ft;
            return ft->Normalize(self);
        }
        else
        {
            return MI_RESULT_OK;
        }
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
typedef enum _MI_LocaleType
{
    MI_LOCALE_TYPE_REQUESTED_UI,
    MI_LOCALE_TYPE_REQUESTED_DATA,
    MI_LOCALE_TYPE_CLOSEST_UI,
    MI_LOCALE_TYPE_CLOSEST_DATA
}
MI_LocaleType;
typedef enum _MI_CancellationReason
{
    MI_REASON_NONE,
    MI_REASON_TIMEOUT,
    MI_REASON_SHUTDOWN,
    MI_REASON_SERVICESTOP
}
MI_CancellationReason;
typedef void (MI_CALL *MI_CancelCallback)(
    MI_CancellationReason reason,
    _In_opt_ void* callbackData);
struct _MI_ContextFT
{
    MI_Result (MI_CALL *PostResult)(
        _In_ MI_Context* context,
        MI_Result result);
    MI_Result (MI_CALL *PostInstance)(
        _In_ MI_Context* context,
        _In_ const MI_Instance* instance);
    MI_Result (MI_CALL *PostIndication)(
        _In_ MI_Context* context,
        _In_ const MI_Instance* indication,
        MI_Uint32 subscriptionIDCount,
        _In_opt_z_ const MI_Char* bookmark);
    MI_Result (MI_CALL *ConstructInstance)(
        _In_ MI_Context* context,
        _In_ const MI_ClassDecl* classDecl,
        _Out_ MI_Instance* instance);
    MI_Result (MI_CALL *ConstructParameters)(
        _In_ MI_Context* context,
        _In_ const MI_MethodDecl* methodDecl,
        _Out_ MI_Instance* instance);
    MI_Result (MI_CALL *NewInstance)(
        _In_ MI_Context* context,
        _In_ const MI_ClassDecl* classDecl,
        _Outptr_ MI_Instance** instance);
    MI_Result (MI_CALL *NewDynamicInstance)(
        _In_ MI_Context* context,
        _In_ const MI_Char* className,
        MI_Uint32 flags,
        _Outptr_ MI_Instance** instance);
    MI_Result (MI_CALL *NewParameters)(
        _In_ MI_Context* context,
        _In_ const MI_MethodDecl* methodDecl,
        _Outptr_ MI_Instance** instance);
    MI_Result (MI_CALL *Canceled)(
        _In_ const MI_Context* context,
        _Out_ MI_Boolean* flag);
    MI_Result (MI_CALL *GetLocale)(
        _In_ const MI_Context* context,
        MI_LocaleType localeType,
        _Out_writes_z_(MI_MAX_LOCALE_SIZE) MI_Char locale[MI_MAX_LOCALE_SIZE]);
    MI_Result (MI_CALL *RegisterCancel)(
        _In_ MI_Context* context,
        _In_ MI_CancelCallback callback,
        _In_opt_ void* callbackData);
    MI_Result (MI_CALL *RequestUnload)(
        _In_ MI_Context* context);
    MI_Result (MI_CALL *RefuseUnload)(
        _In_ MI_Context* context);
    MI_Result (MI_CALL *GetLocalSession)(
        _In_ const MI_Context* context,
        _Out_ MI_Session* session);
    MI_Result (MI_CALL *SetStringOption)(
        _In_ MI_Context* context,
        _In_z_ const MI_Char* name,
        _In_z_ const MI_Char* value);
    MI_Result (MI_CALL *GetStringOption)(
        _In_ MI_Context* context,
        _In_z_ const MI_Char* name,
        _Outptr_result_z_ const MI_Char** value);
    MI_Result (MI_CALL *GetNumberOption)(
        _In_ MI_Context* context,
        _In_z_ const MI_Char *name,
        _Out_opt_ MI_Uint32* value);
    MI_Result (MI_CALL *GetCustomOption)(
        _In_ MI_Context* context,
        _In_z_ const MI_Char* name,
        _Out_opt_ MI_Type* valueType,
        _Out_opt_ MI_Value* value);
    MI_Result (MI_CALL *GetCustomOptionCount)(
        _In_ MI_Context* context,
        _Out_opt_ MI_Uint32* count);
    MI_Result (MI_CALL *GetCustomOptionAt)(
        _In_ MI_Context* context,
        _In_ MI_Uint32 index,
        _Outptr_opt_result_maybenull_z_ const MI_Char** name,
        _Out_opt_ MI_Type* valueType,
        _Out_opt_ MI_Value* value);
    MI_Result (MI_CALL *WriteMessage)(
        _In_ MI_Context* context,
        MI_Uint32 channel,
        _In_z_ const MI_Char* message);
    MI_Result (MI_CALL *WriteProgress)(
        _In_ MI_Context* context,
        _In_z_ const MI_Char* activity,
        _In_z_ const MI_Char* currentOperation,
        _In_z_ const MI_Char* statusDescription,
        MI_Uint32 percentComplete,
        MI_Uint32 secondsRemaining);
    MI_Result (MI_CALL *WriteStreamParameter)(
        _In_ MI_Context* context,
        _In_z_ const MI_Char* name,
        _In_ const MI_Value* value,
        _In_ MI_Type type,
        _In_ MI_Uint32 flags);
    MI_Result (MI_CALL *WriteCimError)(
        _In_ MI_Context* context,
        _In_ const MI_Instance *error,
        _Out_ MI_Boolean *flag);
    MI_Result (MI_CALL *PromptUser)(
        _In_ MI_Context* context,
        _In_z_ const MI_Char* message,
        MI_PromptType promptType,
        _Out_ MI_Boolean* result );
    MI_Result (MI_CALL *ShouldProcess)(
        _In_ MI_Context* context,
        _In_z_ const MI_Char* target,
        _In_z_ const MI_Char* action,
        _Out_ MI_Boolean* result);
    MI_Result (MI_CALL *ShouldContinue)(
        _In_ MI_Context* context,
        _In_z_ const MI_Char* message,
        _Out_ MI_Boolean* result);
    MI_Result (MI_CALL *PostError)(
        _In_ MI_Context* context,
        MI_Uint32 resultCode,
        _In_z_ const MI_Char* resultType,
        _In_z_ const MI_Char* errorMessage);
    MI_Result (MI_CALL *PostCimError)(
        _In_ MI_Context* context,
        _In_ const MI_Instance *error);
    MI_Result (MI_CALL *WriteError)(
        _In_ MI_Context* context,
        MI_Uint32 resultCode,
        _In_z_ const MI_Char* resultType,
        _In_z_ const MI_Char* errorMessage,
        _Out_ MI_Boolean *flag);
};
struct _MI_Context
{
    const MI_ContextFT* ft;
    ptrdiff_t reserved[3];
};
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_PostResult(
    _In_ MI_Context* context,
    MI_Result result)
{
    if (context && context->ft)
    {
        return context->ft->PostResult(context, result);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_PostCimError(
    _In_ MI_Context* context,
    _In_ const MI_Instance *error)
{
    if (context && context->ft)
    {
        return context->ft->PostCimError(context, error);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_PostError(
    _In_ MI_Context* context,
    MI_Uint32 resultCode,
    _In_z_ const MI_Char* resultType,
    _In_z_ const MI_Char* errorMessage)
{
    if (context && context->ft)
    {
        return context->ft->PostError(context, resultCode, resultType, errorMessage);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_PostInstance(
    _In_ MI_Context* context,
    _In_ const MI_Instance* instance)
{
    if (context && context->ft)
    {
        return context->ft->PostInstance(context, instance);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_PostIndication(
    _In_ MI_Context* context,
    _In_ const MI_Instance* indication,
    MI_Uint32 subscriptionIDCount,
    _In_opt_z_ const MI_Char* bookmark)
{
    if (context && context->ft)
    {
        return context->ft->PostIndication(
            context, indication, subscriptionIDCount, bookmark);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_ConstructInstance(
    _In_ MI_Context* context,
    _In_ const MI_ClassDecl* classDecl,
    _Out_ MI_Instance* instance)
{
    if (context && context->ft)
    {
        return context->ft->ConstructInstance(context, classDecl, instance);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_ConstructParameters(
    _In_ MI_Context* context,
    _In_ const MI_MethodDecl* methodDecl,
    _Out_ MI_Instance* instance)
{
    if (context && context->ft)
    {
        return context->ft->ConstructParameters(context, methodDecl, instance);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_NewInstance(
    _In_ MI_Context* context,
    _In_ const MI_ClassDecl* classDecl,
    _Outptr_ MI_Instance** instance)
{
    if (context && context->ft)
    {
        return context->ft->NewInstance(context, classDecl, instance);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_NewDynamicInstance(
    _In_ MI_Context* context,
    _In_ const MI_Char* className,
    MI_Uint32 flags,
    _Outptr_ MI_Instance** instance)
{
    if (context && context->ft)
    {
        return context->ft->NewDynamicInstance(context, className, flags, instance);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_NewParameters(
    _In_ MI_Context* context,
    _In_ const MI_MethodDecl* methodDecl,
    _Outptr_ MI_Instance** instance)
{
    if (context && context->ft)
    {
        return context->ft->NewParameters(context, methodDecl, instance);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_Canceled(
    _In_ const MI_Context* context,
    _Out_ MI_Boolean* flag)
{
    if (context && context->ft)
    {
        return context->ft->Canceled(context, flag);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_GetLocale(
    _In_ const MI_Context* context,
    MI_LocaleType localeType,
    _Out_writes_z_(MI_MAX_LOCALE_SIZE) MI_Char locale[MI_MAX_LOCALE_SIZE])
{
    if (locale)
    {
        locale[0] = L'\0';
    }
    if (context && context->ft)
    {
        return context->ft->GetLocale(context, localeType, locale);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_RegisterCancel(
    _In_ MI_Context* context,
    _In_ MI_CancelCallback callback,
    _In_opt_ void* callbackData)
{
    if (context && context->ft)
    {
        return context->ft->RegisterCancel(context, callback, callbackData);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_RequestUnload(
    _In_ MI_Context* context)
{
    if (context && context->ft)
    {
        return context->ft->RequestUnload(context);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_RefuseUnload(
    _In_ MI_Context* context)
{
    if (context && context->ft)
    {
        return context->ft->RefuseUnload(context);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
};
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_GetLocalSession(
    _In_ const MI_Context* context,
    _Out_ MI_Session* session)
{
    if (context && context->ft)
    {
        return context->ft->GetLocalSession(context, session);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_SetStringOption(
    _In_ MI_Context* context,
    _In_z_ const MI_Char* name,
    _In_z_ const MI_Char* value)
{
    if (context && context->ft)
    {
        return context->ft->SetStringOption(context, name, value);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_GetStringOption(
    _In_ MI_Context* context,
    _In_z_ const MI_Char* name,
    _Outptr_result_z_ const MI_Char** value)
{
    if (context && context->ft)
    {
        return context->ft->GetStringOption(context, name, value);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_GetNumberOption(
    _In_ MI_Context* context,
    _In_z_ const MI_Char* name,
    _Out_opt_ MI_Uint32* value)
{
    if (context && context->ft)
    {
        return context->ft->GetNumberOption(context, name, value);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_GetCustomOption(
    _In_ MI_Context* context,
    _In_z_ const MI_Char* name,
    _Out_opt_ MI_Type* valueType,
    _Out_opt_ MI_Value* value)
{
    if (context && context->ft)
    {
        return context->ft->GetCustomOption(context, name, valueType,value);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_GetCustomOptionCount(
    _In_ MI_Context* context,
    _Out_opt_ MI_Uint32* count)
{
    if (context && context->ft)
    {
        return context->ft->GetCustomOptionCount(context, count);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_GetCustomOptionAt(
    _In_ MI_Context* context,
    _In_ MI_Uint32 index,
    _Outptr_opt_result_maybenull_z_ const MI_Char** name,
    _Out_opt_ MI_Type* valueType,
    _Out_opt_ MI_Value* value)
{
    if (context && context->ft)
    {
        return context->ft->GetCustomOptionAt(context, index, name, valueType,value);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_ShouldProcess(
    _In_ MI_Context* context,
    _In_z_ const MI_Char *target,
    _In_z_ const MI_Char* action,
    _Out_ MI_Boolean* flag)
{
    if (context && context->ft)
    {
        return context->ft->ShouldProcess(context, target, action , flag);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_ShouldContinue(
    _In_ MI_Context* context,
    _In_z_ const MI_Char* message,
    _Out_ MI_Boolean* flag)
{
    if (context && context->ft)
    {
        return context->ft->ShouldContinue(context, message, flag);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_PromptUser(
    _In_ MI_Context* context,
    _In_z_ const MI_Char* message,
    MI_PromptType promptType,
    _Out_ MI_Boolean*flag )
{
    if (context && context->ft)
    {
        return context->ft->PromptUser(context, message, promptType, flag);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_WriteError(
    _In_ MI_Context* context,
    MI_Uint32 resultCode,
    _In_z_ const MI_Char* resultType,
    _In_z_ const MI_Char* errorMessage,
    _Out_ MI_Boolean *flag)
{
    if (context && context->ft)
    {
        return context->ft->WriteError(context, resultCode, resultType, errorMessage, flag);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_WriteCimError(
    _In_ MI_Context* context,
    _In_ const MI_Instance *error,
    _Out_ MI_Boolean *flag)
{
    if (context && context->ft)
    {
        return context->ft->WriteCimError(context, error, flag);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_WriteMessage(
    _In_ MI_Context* context,
    MI_Uint32 channel,
    _In_z_ const MI_Char* message)
{
    if (context && context->ft)
    {
        return context->ft->WriteMessage(context, channel, message);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_WriteProgress(
    _In_ MI_Context* context,
    _In_z_ const MI_Char* activity,
    _In_z_ const MI_Char* currentOperation,
    _In_z_ const MI_Char* statusDescription,
    MI_Uint32 percentComplete,
    MI_Uint32 secondsRemaining)
{
    if (context && context->ft)
    {
        return context->ft->WriteProgress(context, activity, currentOperation,
            statusDescription, percentComplete, secondsRemaining);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_WriteStreamParameter(
    _In_ MI_Context* self,
    _In_z_ const MI_Char* name,
    _In_ const MI_Value* value,
    _In_ MI_Type type,
    _In_ MI_Uint32 flags)
{
    if (self && self->ft)
    {
        return self->ft->WriteStreamParameter(self, name, value, type, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_WriteWarning(
    _In_ MI_Context* context,
    _In_z_ const MI_Char* message)
{
    if (context && context->ft)
    {
        return context->ft->WriteMessage(context, MI_WRITEMESSAGE_CHANNEL_WARNING, message);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_WriteVerbose(
    _In_ MI_Context* context,
    _In_z_ const MI_Char* message)
{
    if (context && context->ft)
    {
        return context->ft->WriteMessage(context, MI_WRITEMESSAGE_CHANNEL_VERBOSE, message);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Context_WriteDebug(
    _In_ MI_Context* context,
    _In_z_ const MI_Char* message)
{
    if (context && context->ft)
    {
        return context->ft->WriteMessage(context, MI_WRITEMESSAGE_CHANNEL_DEBUG, message);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
#pragma pack(pop)
extern "C" {
typedef MI_Module* (MI_MAIN_CALL *MI_MainFunction)(MI_Server* server);
typedef struct _MI_QualifierSet MI_QualifierSet;
typedef struct _MI_QualifierSetFT
{
    MI_Result (MI_CALL *GetQualifierCount)(
        _In_ const MI_QualifierSet *self,
        _Out_ MI_Uint32 *count);
    MI_Result (MI_CALL *GetQualifierAt)(
        _In_ const MI_QualifierSet *self,
        MI_Uint32 index,
        _Outptr_result_z_ const MI_Char **name,
        _Out_ MI_Type *qualifierType,
        _Out_ MI_Uint32 *qualifierFlags,
        _Out_ MI_Value *qualifierValue
        );
    MI_Result (MI_CALL *GetQualifier)(
        _In_ const MI_QualifierSet *self,
        _In_z_ const MI_Char *name,
        _Out_ MI_Type *qualifierType,
        _Out_ MI_Uint32 *qualifierFlags,
        _Out_ MI_Value *qualifierValue,
        _Out_ MI_Uint32 *index
        );
} MI_QualifierSetFT;
struct _MI_QualifierSet
{
    MI_Uint64 reserved1;
    ptrdiff_t reserved2;
    const MI_QualifierSetFT *ft;
};
typedef struct _MI_ParameterSet MI_ParameterSet;
typedef struct _MI_ParameterSetFT
{
    MI_Result (MI_CALL *GetMethodReturnType)(
        _In_ const MI_ParameterSet *self,
        _Out_ MI_Type *returnType,
        _Out_ MI_QualifierSet *qualifierSet);
    MI_Result (MI_CALL *GetParameterCount)(
        _In_ const MI_ParameterSet *self,
        _Out_ MI_Uint32 *count);
    MI_Result (MI_CALL *GetParameterAt)(
        _In_ const MI_ParameterSet *self,
        MI_Uint32 index,
        _Outptr_result_z_ const MI_Char **name,
        MI_Type *parameterType,
        _Outptr_opt_result_maybenull_z_ MI_Char **referenceClass,
        _Out_ MI_QualifierSet *qualifierSet);
    MI_Result (MI_CALL *GetParameter)(
        _In_ const MI_ParameterSet *self,
        _In_z_ const MI_Char *name,
        _Out_ MI_Type *parameterType,
        _Outptr_opt_result_maybenull_z_ MI_Char **referenceClass,
        _Out_ MI_QualifierSet *qualifierSet,
        _Out_ MI_Uint32 *index);
} MI_ParameterSetFT;
struct _MI_ParameterSet
{
    MI_Uint64 reserved1;
    ptrdiff_t reserved2;
    const MI_ParameterSetFT * ft;
};
typedef struct _MI_ClassFT
{
    MI_Result (MI_CALL *GetClassName)(
        _In_ const MI_Class* self,
        _Outptr_result_maybenull_z_ const MI_Char** className);
    MI_Result (MI_CALL *GetNameSpace)(
        _In_ const MI_Class* self,
        _Outptr_result_maybenull_z_ const MI_Char** nameSpace);
    MI_Result (MI_CALL *GetServerName)(
        _In_ const MI_Class* self,
        _Outptr_result_maybenull_z_ const MI_Char** serverName);
    MI_Result (MI_CALL *GetElementCount)(
        _In_ const MI_Class* self,
        _Out_ MI_Uint32* count);
    MI_Result (MI_CALL *GetElement)(
        _In_ const MI_Class* self,
        _In_z_ const MI_Char* name,
        _Out_opt_ MI_Value* value,
        _Out_opt_ MI_Boolean* valueExists,
        _Out_opt_ MI_Type* type,
        _Outptr_opt_result_maybenull_z_ MI_Char **referenceClass,
        _Out_opt_ MI_QualifierSet *qualifierSet,
        _Out_opt_ MI_Uint32* flags,
        _Out_opt_ MI_Uint32* index);
    MI_Result (MI_CALL *GetElementAt)(
        _In_ const MI_Class* self,
        MI_Uint32 index,
        _Outptr_opt_result_maybenull_z_ const MI_Char** name,
        _Out_opt_ MI_Value* value,
        _Out_opt_ MI_Boolean* valueExists,
        _Out_opt_ MI_Type* type,
        _Outptr_opt_result_maybenull_z_ MI_Char **referenceClass,
        _Out_opt_ MI_QualifierSet *qualifierSet,
        _Out_opt_ MI_Uint32* flags);
    MI_Result (MI_CALL *GetClassQualifierSet)(
        _In_ const MI_Class* self,
        _Out_opt_ MI_QualifierSet *qualifierSet
        );
    MI_Result (MI_CALL *GetMethodCount)(
        _In_ const MI_Class* self,
        _Out_ MI_Uint32* count);
    MI_Result (MI_CALL *GetMethodAt)(
        _In_ const MI_Class *self,
        MI_Uint32 index,
        _Outptr_result_z_ const MI_Char **name,
        _Out_opt_ MI_QualifierSet *qualifierSet,
        _Out_opt_ MI_ParameterSet *parameterSet
        );
    MI_Result (MI_CALL *GetMethod)(
        _In_ const MI_Class *self,
        _In_z_ const MI_Char *name,
        _Out_opt_ MI_QualifierSet *qualifierSet,
        _Out_opt_ MI_ParameterSet *parameterSet,
        _Out_opt_ MI_Uint32 *index
        );
    MI_Result (MI_CALL *GetParentClassName)(
        _In_ const MI_Class *self,
        _Outptr_result_maybenull_z_ const MI_Char **name);
    MI_Result (MI_CALL *GetParentClass)(
        _In_ const MI_Class *self,
        _Outptr_ MI_Class **parentClass);
    MI_Result (MI_CALL *Delete)(
        _Inout_ MI_Class* self);
    MI_Result (MI_CALL *Clone)(
        _In_ const MI_Class* self,
        _Outptr_ MI_Class** newClass);
} MI_ClassFT;
struct _MI_Class
{
    const MI_ClassFT *ft;
    MI_CONST MI_ClassDecl *classDecl;
    MI_CONST MI_Char *namespaceName;
    MI_CONST MI_Char *serverName;
    ptrdiff_t reserved[4];
};
typedef struct _MI_Application MI_Application;
typedef struct _MI_Session MI_Session;
typedef struct _MI_Operation MI_Operation;
typedef struct _MI_HostedProvider MI_HostedProvider;
typedef struct _MI_DestinationOptions MI_DestinationOptions;
typedef struct _MI_OperationOptions MI_OperationOptions;
typedef enum _MI_OperationCallback_ResponseType
{
    MI_OperationCallback_ResponseType_No,
    MI_OperationCallback_ResponseType_Yes,
    MI_OperationCallback_ResponseType_NoToAll,
    MI_OperationCallback_ResponseType_YesToAll
} MI_OperationCallback_ResponseType;
typedef void (MI_CALL *MI_OperationCallback_PromptUser)(
    _In_ MI_Operation *operation,
    _In_opt_ void *callbackContext,
    _In_z_ const MI_Char *message,
             MI_PromptType promptType,
    _In_opt_ MI_Result (MI_CALL * promptUserResult)(_In_ MI_Operation *operation,
                                                      MI_OperationCallback_ResponseType response));
typedef void (MI_CALL *MI_OperationCallback_WriteError)(
    _In_ MI_Operation *operation,
    _In_opt_ void *callbackContext,
    _In_ MI_Instance*instance,
    _In_opt_ MI_Result (MI_CALL * writeErrorResult)(_In_ MI_Operation *operation,
                                                    MI_OperationCallback_ResponseType response));
typedef void (MI_CALL *MI_OperationCallback_WriteMessage)(
    _In_ MI_Operation *operation,
    _In_opt_ void *callbackContext,
             MI_Uint32 channel,
    _In_z_ const MI_Char *message);
typedef void (MI_CALL *MI_OperationCallback_WriteProgress)(
    _In_ MI_Operation *operation,
    _In_opt_ void *callbackContext,
    _In_z_ const MI_Char *activity,
    _In_z_ const MI_Char *currentOperation,
    _In_z_ const MI_Char *statusDescription,
             MI_Uint32 percentageComplete,
             MI_Uint32 secondsRemaining);
typedef void (MI_CALL *MI_OperationCallback_Instance)(
    _In_opt_ MI_Operation *operation,
    _In_ void *callbackContext,
    _In_opt_ const MI_Instance *instance,
             MI_Boolean moreResults,
    _In_ MI_Result resultCode,
    _In_opt_z_ const MI_Char *errorString,
    _In_opt_ const MI_Instance *errorDetails,
    _In_opt_ MI_Result (MI_CALL * resultAcknowledgement)(_In_ MI_Operation *operation));
typedef void (MI_CALL *MI_OperationCallback_StreamedParameter)(
    _In_ MI_Operation *operation,
    _In_ void *callbackContext,
    _In_z_ const MI_Char *parameterName,
    _In_ MI_Type resultType,
    _In_ const MI_Value *result,
    _In_opt_ MI_Result (MI_CALL * resultAcknowledgement)(_In_ MI_Operation *operation));
typedef void (MI_CALL *MI_OperationCallback_Indication)(
    _In_opt_ MI_Operation *operation,
    _In_ void *callbackContext,
    _In_opt_ const MI_Instance *instance,
    _In_opt_z_ const MI_Char *bookmark,
    _In_opt_z_ const MI_Char *machineID,
             MI_Boolean moreResults,
    _In_ MI_Result resultCode,
    _In_opt_z_ const MI_Char *errorString,
    _In_opt_ const MI_Instance *errorDetails,
    _In_opt_ MI_Result (MI_CALL * resultAcknowledgement)(_In_ MI_Operation *operation));
typedef void (MI_CALL *MI_OperationCallback_Class)(
    _In_opt_ MI_Operation *operation,
    _In_ void *callbackContext,
    _In_opt_ const MI_Class *classResult,
             MI_Boolean moreResults,
    _In_ MI_Result resultCode,
    _In_opt_z_ const MI_Char *errorString,
    _In_opt_ const MI_Instance *errorDetails,
    _In_opt_ MI_Result (MI_CALL * resultAcknowledgement)(_In_ MI_Operation *operation));
typedef struct _MI_OperationCallbacks
{
    void *callbackContext;
    MI_OperationCallback_PromptUser promptUser;
    MI_OperationCallback_WriteError writeError;
    MI_OperationCallback_WriteMessage writeMessage;
    MI_OperationCallback_WriteProgress writeProgress;
    MI_OperationCallback_Instance instanceResult;
    MI_OperationCallback_Indication indicationResult;
    MI_OperationCallback_Class classResult;
    MI_OperationCallback_StreamedParameter streamedParameterResult;
}
MI_OperationCallbacks;
typedef struct _MI_SessionCallbacks
{
    void *callbackContext;
    void (MI_CALL *writeMessage)(
        _In_ MI_Application *application,
        _In_opt_ void *callbackContext,
                 MI_Uint32 channel,
        _In_z_ const MI_Char * message);
    void (MI_CALL *writeError)(
        _In_ MI_Application *application,
        _In_opt_ void *callbackContext,
        _In_ MI_Instance *instance);
}
MI_SessionCallbacks;
typedef struct _MI_UsernamePasswordCreds
{
    const MI_Char *domain;
    const MI_Char *username;
    const MI_Char *password;
}
MI_UsernamePasswordCreds;
typedef struct _MI_UserCredentials
{
    const MI_Char *authenticationType;
    union
    {
        MI_UsernamePasswordCreds usernamePassword;
        const MI_Char *certificateThumbprint;
    } credentials;
}
MI_UserCredentials;
typedef enum _MI_SubscriptionDeliveryType
{
    MI_SubscriptionDeliveryType_Pull = 1,
    MI_SubscriptionDeliveryType_Push = 2,
}
MI_SubscriptionDeliveryType;
typedef struct _MI_SubscriptionDeliveryOptions MI_SubscriptionDeliveryOptions;
typedef struct _MI_SubscriptionDeliveryOptionsFT
{
    MI_Result (MI_CALL *SetString)(
        _Inout_ MI_SubscriptionDeliveryOptions *options,
        _In_z_ const MI_Char *optionName,
        _In_z_ const MI_Char *value,
               MI_Uint32 flags);
    MI_Result (MI_CALL *SetNumber)(
        _Inout_ MI_SubscriptionDeliveryOptions *options,
        _In_z_ const MI_Char *optionName,
        _In_ MI_Uint32 value,
               MI_Uint32 flags);
    MI_Result (MI_CALL *SetDateTime)(
        _Inout_ MI_SubscriptionDeliveryOptions *options,
        _In_z_ const MI_Char *optionName,
        _In_ const MI_Datetime *value,
               MI_Uint32 flags);
    MI_Result (MI_CALL *SetInterval)(
        _Inout_ MI_SubscriptionDeliveryOptions *options,
        _In_z_ const MI_Char *optionName,
        _In_ const MI_Interval *value,
               MI_Uint32 flags);
    MI_Result (MI_CALL *AddCredentials)(
        _Inout_ MI_SubscriptionDeliveryOptions *options,
        _In_z_ const MI_Char *optionName,
        _In_ const MI_UserCredentials *credentials,
               MI_Uint32 flags);
    MI_Result (MI_CALL *Delete)(
        _Inout_ MI_SubscriptionDeliveryOptions* self);
    MI_Result (MI_CALL *GetString)(
        _In_ MI_SubscriptionDeliveryOptions *options,
        _In_z_ const MI_Char *optionName,
        _Outptr_result_z_ const MI_Char **value,
        _Out_opt_ MI_Uint32 *index,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *GetNumber)(
        _In_ MI_SubscriptionDeliveryOptions *options,
        _In_z_ const MI_Char *optionName,
        _Out_ MI_Uint32 *value,
        _Out_opt_ MI_Uint32 *index,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *GetDateTime)(
        _In_ MI_SubscriptionDeliveryOptions *options,
        _In_z_ const MI_Char *optionName,
        _Out_ MI_Datetime *value,
        _Out_opt_ MI_Uint32 *index,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *GetInterval)(
        _In_ MI_SubscriptionDeliveryOptions *options,
        _In_z_ const MI_Char *optionName,
        _Out_ MI_Interval *value,
        _Out_opt_ MI_Uint32 *index,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *GetOptionCount)(
        _In_ MI_SubscriptionDeliveryOptions *options,
        _Out_opt_ MI_Uint32 *count);
    MI_Result (MI_CALL *GetOptionAt)(
        _In_ MI_SubscriptionDeliveryOptions *options,
        MI_Uint32 index,
        _Outptr_result_z_ const MI_Char **optionName,
        _Out_ MI_Value *value,
        _Out_ MI_Type *type,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *GetOption)(
        _In_ MI_SubscriptionDeliveryOptions *options,
        _In_z_ const MI_Char *optionName,
        _Out_ MI_Value *value,
        _Out_ MI_Type *type,
        _Out_opt_ MI_Uint32 *index,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *GetCredentialsCount)(
        _In_ MI_SubscriptionDeliveryOptions *options,
        _Out_ MI_Uint32 *count);
    MI_Result (MI_CALL *GetCredentialsAt)(
        _In_ MI_SubscriptionDeliveryOptions *options,
        MI_Uint32 index,
        _Outptr_result_z_ const MI_Char **optionName,
        _Out_ MI_UserCredentials *credentials,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *GetCredentialsPasswordAt)(
        _In_ MI_SubscriptionDeliveryOptions *options,
        MI_Uint32 index,
        _Outptr_result_z_ const MI_Char **optionName,
        _Out_writes_to_opt_(bufferLength, *passwordLength) MI_Char *password,
        _In_ MI_Uint32 bufferLength,
        _Out_ MI_Uint32 *passwordLength,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *Clone)(
        _In_ const MI_SubscriptionDeliveryOptions* self,
        _Out_ MI_SubscriptionDeliveryOptions* newSubscriptionDeliveryOptions);
} MI_SubscriptionDeliveryOptionsFT;
typedef struct _MI_SubscriptionDeliveryOptions
{
    MI_Uint64 reserved1;
    ptrdiff_t reserved2;
    const MI_SubscriptionDeliveryOptionsFT * ft;
}
MI_SubscriptionDeliveryOptions;
typedef struct _MI_Serializer MI_Serializer;
typedef struct _MI_SerializerFT MI_SerializerFT;
typedef struct _MI_Deserializer MI_Deserializer;
typedef struct _MI_DeserializerFT MI_DeserializerFT;
struct _MI_Serializer
{
    MI_Uint64 reserved1;
    ptrdiff_t reserved2;
} ;
struct _MI_Deserializer
{
    MI_Uint64 reserved1;
    ptrdiff_t reserved2;
} ;
struct _MI_SerializerFT
{
    MI_Result (MI_CALL *Close)(
        _Inout_ MI_Serializer *serializer);
    MI_Result (MI_CALL *SerializeClass)(
        _Inout_ MI_Serializer *serializer,
        MI_Uint32 flags,
        _In_ const MI_Class *classObject,
        _Out_writes_bytes_(clientBufferLength) MI_Uint8 *clientBuffer,
        MI_Uint32 clientBufferLength,
        _Inout_ MI_Uint32 *clientBufferNeeded);
    MI_Result (MI_CALL *SerializeInstance)(
        _Inout_ MI_Serializer *serializer,
        MI_Uint32 flags,
        _In_ const MI_Instance *instanceObject,
        _Out_writes_bytes_(clientBufferLength) MI_Uint8 *clientBuffer,
        MI_Uint32 clientBufferLength,
        _Inout_ MI_Uint32 *clientBufferNeeded);
};
typedef MI_Result (MI_CALL *MI_Deserializer_ClassObjectNeeded)(
                _In_opt_ void *context,
                _In_opt_z_ const MI_Char *serverName,
                _In_opt_z_ const MI_Char *namespaceName,
                _In_z_ const MI_Char *className,
                _Outptr_ MI_Class **requestedClassObject);
struct _MI_DeserializerFT
{
    MI_Result (MI_CALL *Close)(
        _Inout_ MI_Deserializer *deserializer);
    MI_Result (MI_CALL *DeserializeClass)(
        _Inout_ MI_Deserializer *deserializer,
        MI_Uint32 flags,
        _In_reads_(serializedBufferLength) MI_Uint8 *serializedBuffer,
        MI_Uint32 serializedBufferLength,
        _In_opt_ MI_Class *parentClass,
        _In_opt_z_ const MI_Char *serverName,
        _In_opt_z_ const MI_Char *namespaceName,
        _In_opt_ MI_Deserializer_ClassObjectNeeded classObjectNeeded,
        _In_opt_ void *classObjectNeededContext,
        _Out_opt_ MI_Uint32 *serializedBufferRead,
        _Outptr_opt_result_maybenull_ MI_Class **classObject,
        _Outptr_opt_result_maybenull_ MI_Instance **cimErrorDetails);
    MI_Result (MI_CALL *Class_GetClassName)(
        _Inout_ MI_Deserializer *deserializer,
        _In_reads_(serializedBufferLength) MI_Uint8 *serializedBuffer,
        MI_Uint32 serializedBufferLength,
        _Out_writes_opt_(*classNameLength) MI_Char *className,
        _Inout_ MI_Uint32 *classNameLength,
        _Outptr_opt_result_maybenull_ MI_Instance **cimErrorDetails);
    MI_Result (MI_CALL *Class_GetParentClassName)(
        _Inout_ MI_Deserializer *deserializer,
        _In_reads_(serializedBufferLength) MI_Uint8 *serializedBuffer,
        MI_Uint32 serializedBufferLength,
        _Out_writes_opt_(*parentClassNameLength) MI_Char *parentClassName,
        _Inout_ MI_Uint32 *parentClassNameLength,
        _Outptr_opt_result_maybenull_ MI_Instance **cimErrorDetails);
    MI_Result (MI_CALL *DeserializeInstance)(
        _Inout_ MI_Deserializer *deserializer,
        MI_Uint32 flags,
        _In_reads_(serializedBufferLength) MI_Uint8 *serializedBuffer,
        MI_Uint32 serializedBufferLength,
        _In_reads_opt_(numberClassObjects) MI_Class **classObjects,
        MI_Uint32 numberClassObjects,
        _In_opt_ MI_Deserializer_ClassObjectNeeded classObjectNeeded,
        _In_opt_ void *classObjectNeededContext,
        _Out_opt_ MI_Uint32 *serializedBufferRead,
        _Outptr_opt_result_maybenull_ MI_Instance **instanceObject,
        _Outptr_opt_result_maybenull_ MI_Instance **cimErrorDetails);
    MI_Result (MI_CALL *Instance_GetClassName)(
        _Inout_ MI_Deserializer *deserializer,
        _In_reads_(serializedBufferLength) MI_Uint8 *serializedBuffer,
        MI_Uint32 serializedBufferLength,
        _Out_writes_opt_(*classNameLength) MI_Char *className,
        _Inout_ MI_Uint32 *classNameLength,
        _Outptr_opt_result_maybenull_ MI_Instance **cimErrorDetails);
};
typedef struct _MI_ApplicationFT
{
    MI_Result (MI_CALL *Close)(
        _Inout_ MI_Application *application);
    MI_Result (MI_CALL *NewSession)(
        _In_ MI_Application *application,
        _In_opt_z_ const MI_Char *protocol,
        _In_opt_z_ const MI_Char *destination,
        _In_opt_ MI_DestinationOptions *options,
        _In_opt_ MI_SessionCallbacks *callbacks,
        _Outptr_opt_result_maybenull_ MI_Instance **extendedError,
        _Out_ MI_Session *session);
    MI_Result (MI_CALL *NewHostedProvider)(
        _In_ MI_Application *application,
        _In_z_ const MI_Char *namespaceName,
        _In_z_ const MI_Char *providerName,
        _In_ MI_MainFunction mi_Main,
        _Outptr_opt_result_maybenull_ MI_Instance **extendedError,
        _Out_ MI_HostedProvider *provider
        );
    MI_Result (MI_CALL *NewInstance)(
        _In_ MI_Application *application,
        _In_z_ const MI_Char *className,
        _In_opt_ const MI_ClassDecl *classRTTI,
        _Outptr_ MI_Instance **instance);
    MI_Result (MI_CALL *NewDestinationOptions)(
        _In_ MI_Application *application,
        _Out_ MI_DestinationOptions *options);
    MI_Result (MI_CALL *NewOperationOptions)(
        _In_ MI_Application *application,
        _In_ MI_Boolean customOptionsMustUnderstand,
        _Out_ MI_OperationOptions *options);
    MI_Result (MI_CALL *NewSubscriptionDeliveryOptions)(
        _In_ MI_Application *application,
        _In_ MI_SubscriptionDeliveryType deliveryType,
        _Out_ MI_SubscriptionDeliveryOptions *deliveryOptions);
    MI_Result (MI_CALL *NewSerializer)(
        _Inout_ MI_Application *application,
        MI_Uint32 flags,
        _In_z_ MI_Char *format,
        _Out_ MI_Serializer *serializer);
    MI_Result (MI_CALL *NewDeserializer)(
        _Inout_ MI_Application *application,
        MI_Uint32 flags,
        _In_z_ MI_Char *format,
        _Out_ MI_Deserializer *deserializer);
    MI_Result (MI_CALL *NewInstanceFromClass)(
        _In_ MI_Application *application,
        _In_z_ const MI_Char *className,
        _In_opt_ const MI_Class *classObject,
        _Outptr_ MI_Instance **instance);
    MI_Result (MI_CALL *NewClass) (
        _In_ MI_Application *application,
        _In_ const MI_ClassDecl* classDecl,
        __in_z_opt const MI_Char *namespaceName,
        __in_z_opt const MI_Char *serverName,
        _Outptr_ MI_Class** classObject);
}
MI_ApplicationFT;
typedef struct _MI_HostedProviderFT
{
    MI_Result (MI_CALL *Close)(
        _Inout_ MI_HostedProvider *hostedProvider);
    MI_Result (MI_CALL *GetApplication)(
        _In_ MI_HostedProvider *hostedProvider,
        _Out_ MI_Application *application);
}
MI_HostedProviderFT;
typedef struct _MI_SessionFT
{
    MI_Result (MI_CALL *Close)(
        _Inout_ MI_Session *session,
        _In_opt_ void *completionContext,
        _In_opt_ void (MI_CALL *completionCallback)(_In_opt_ void *completionContext));
    MI_Result (MI_CALL *GetApplication)(
        _In_ MI_Session *session,
        _Out_ MI_Application *application);
    void (MI_CALL *GetInstance)(
        _In_ MI_Session *session,
                 MI_Uint32 flags,
        _In_opt_ MI_OperationOptions *options,
        _In_opt_z_ const MI_Char *namespaceName,
        _In_ const MI_Instance *inboundInstance,
        _In_opt_ MI_OperationCallbacks *callbacks,
        _Out_ MI_Operation *operation);
    void (MI_CALL *ModifyInstance)(
        _In_ MI_Session *session,
                 MI_Uint32 flags,
        _In_opt_ MI_OperationOptions *options,
        _In_opt_z_ const MI_Char *namespaceName,
        _In_ const MI_Instance *inboundInstance,
        _In_opt_ MI_OperationCallbacks *callbacks,
        _Out_ MI_Operation *operation);
    void (MI_CALL *CreateInstance)(
        _In_ MI_Session *session,
                 MI_Uint32 flags,
        _In_opt_ MI_OperationOptions *options,
        _In_opt_z_ const MI_Char *namespaceName,
        _In_ const MI_Instance *inboundInstance,
        _In_opt_ MI_OperationCallbacks *callbacks,
        _Out_ MI_Operation *operation);
    void (MI_CALL *DeleteInstance)(
        _In_ MI_Session *session,
                 MI_Uint32 flags,
        _In_opt_ MI_OperationOptions *options,
        _In_opt_z_ const MI_Char *namespaceName,
        _In_ const MI_Instance *inboundInstance,
        _In_opt_ MI_OperationCallbacks *callbacks,
        _Out_ MI_Operation *operation);
    void (MI_CALL *Invoke)(
        _In_ MI_Session *session,
                 MI_Uint32 flags,
        _In_opt_ MI_OperationOptions *options,
        _In_opt_z_ const MI_Char *namespaceName,
        _In_opt_z_ const MI_Char *className,
        _In_z_ const MI_Char *methodName,
        _In_opt_ const MI_Instance *inboundInstance,
        _In_opt_ const MI_Instance *inboundProperties,
        _In_opt_ MI_OperationCallbacks *callbacks,
        _Out_ MI_Operation *operation);
    void (MI_CALL *EnumerateInstances)(
        _In_ MI_Session *session,
                 MI_Uint32 flags,
        _In_opt_ MI_OperationOptions *options,
        _In_opt_z_ const MI_Char *namespaceName,
        _In_opt_z_ const MI_Char *className,
                 MI_Boolean keysOnly,
        _In_opt_ MI_OperationCallbacks *callbacks,
        _Out_ MI_Operation *operation);
    void (MI_CALL *QueryInstances)(
        _In_ MI_Session *session,
                 MI_Uint32 flags,
        _In_opt_ MI_OperationOptions *options,
        _In_opt_z_ const MI_Char *namespaceName,
        _In_opt_z_ const MI_Char *queryDialect,
        _In_opt_z_ const MI_Char *queryExpression,
        _In_opt_ MI_OperationCallbacks *callbacks,
        _Out_ MI_Operation *operation);
    void (MI_CALL *AssociatorInstances)(
        _In_ MI_Session *session,
                 MI_Uint32 flags,
        _In_opt_ MI_OperationOptions *options,
        _In_opt_z_ const MI_Char *namespaceName,
        _In_ const MI_Instance *instanceKeys,
        _In_opt_z_ const MI_Char *assocClass,
        _In_opt_z_ const MI_Char *resultClass,
        _In_opt_z_ const MI_Char *role,
        _In_opt_z_ const MI_Char *resultRole,
                 MI_Boolean keysOnly,
        _In_opt_ MI_OperationCallbacks *callbacks,
        _Out_ MI_Operation *operation);
    void (MI_CALL *ReferenceInstances)(
        _In_ MI_Session *session,
                 MI_Uint32 flags,
        _In_opt_ MI_OperationOptions *options,
        _In_opt_z_ const MI_Char *namespaceName,
        _In_ const MI_Instance *instanceKeys,
        _In_opt_z_ const MI_Char *resultClass,
        _In_opt_z_ const MI_Char *role,
                 MI_Boolean keysOnly,
        _In_opt_ MI_OperationCallbacks *callbacks,
        _Out_ MI_Operation *operation);
    void (MI_CALL *Subscribe)(
        _In_ MI_Session *session,
                 MI_Uint32 flags,
        _In_opt_ MI_OperationOptions *options,
        _In_opt_z_ const MI_Char *namespaceName,
        _In_opt_z_ const MI_Char *queryDialect,
        _In_opt_z_ const MI_Char *queryExpression,
        _In_opt_ const MI_SubscriptionDeliveryOptions *deliverOptions,
        _In_opt_ MI_OperationCallbacks *callbacks,
        _Out_ MI_Operation *operation);
    void (MI_CALL *GetClass)(
        _In_ MI_Session *session,
                 MI_Uint32 flags,
        _In_opt_ MI_OperationOptions *options,
        _In_opt_z_ const MI_Char *namespaceName,
        _In_opt_z_ const MI_Char *className,
        _In_opt_ MI_OperationCallbacks *callbacks,
        _Out_ MI_Operation *operation);
    void (MI_CALL *EnumerateClasses)(
        _In_ MI_Session *session,
                 MI_Uint32 flags,
        _In_opt_ MI_OperationOptions *options,
        _In_opt_z_ const MI_Char *namespaceName,
        _In_opt_z_ const MI_Char *className,
                 MI_Boolean classNamesOnly,
        _In_opt_ MI_OperationCallbacks *callbacks,
        _Out_ MI_Operation *operation);
    void (MI_CALL *TestConnection)(
        _In_ MI_Session *session,
                 MI_Uint32 flags,
        _In_opt_ MI_OperationCallbacks *callbacks,
        _Out_ MI_Operation *operation
        );
}
MI_SessionFT;
typedef struct _MI_OperationFT
{
    MI_Result (MI_CALL *Close)(
        _Inout_ MI_Operation *operation);
    MI_Result (MI_CALL *Cancel)(
        _Inout_ MI_Operation *operation,
                  MI_CancellationReason reason);
    MI_Result (MI_CALL *GetSession)(
        _In_ MI_Operation *operation,
        _Out_ MI_Session *session);
    MI_Result (MI_CALL *GetInstance)(
        _In_ MI_Operation *operation,
        _Outptr_result_maybenull_ const MI_Instance **instance,
        _Out_opt_ MI_Boolean *moreResults,
        _Out_opt_ MI_Result *result,
        _Outptr_opt_result_maybenull_z_ const MI_Char **errorMessage,
        _Outptr_opt_result_maybenull_ const MI_Instance **completionDetails);
    MI_Result (MI_CALL *GetIndication)(
        _In_ MI_Operation *operation,
        _Outptr_result_maybenull_ const MI_Instance **instance,
        _Outptr_opt_result_maybenull_z_ const MI_Char **bookmark,
        _Outptr_opt_result_maybenull_z_ const MI_Char **machineID,
        _Out_opt_ MI_Boolean *moreResults,
        _Out_opt_ MI_Result *result,
        _Outptr_opt_result_maybenull_z_ const MI_Char **errorMessage,
        _Outptr_opt_result_maybenull_ const MI_Instance **completionDetails);
    MI_Result (MI_CALL *GetClass)(
        _In_ MI_Operation *operation,
        _Outptr_result_maybenull_ const MI_Class **classResult,
        _Out_opt_ MI_Boolean *moreResults,
        _Out_opt_ MI_Result *result,
        _Outptr_opt_result_maybenull_z_ const MI_Char **errorMessage,
        _Outptr_opt_result_maybenull_ const MI_Instance **completionDetails);
}
MI_OperationFT;
typedef struct _MI_DestinationOptionsFT
{
    void (MI_CALL *Delete)(
        _Inout_ MI_DestinationOptions *options);
    MI_Result (MI_CALL *SetString)(
        _Inout_ MI_DestinationOptions *options,
        _In_z_ const MI_Char *optionName,
        _In_z_ const MI_Char *value,
               MI_Uint32 flags);
    MI_Result (MI_CALL *SetNumber)(
        _Inout_ MI_DestinationOptions *options,
        _In_z_ const MI_Char *optionName,
        _In_ MI_Uint32 value,
               MI_Uint32 flags);
    MI_Result (MI_CALL *AddCredentials)(
        _Inout_ MI_DestinationOptions *options,
        _In_z_ const MI_Char *optionName,
        _In_ const MI_UserCredentials *credentials,
               MI_Uint32 flags);
    MI_Result (MI_CALL *GetString)(
        _In_ MI_DestinationOptions *options,
        _In_z_ const MI_Char *optionName,
        _Outptr_result_z_ const MI_Char **value,
        _Out_opt_ MI_Uint32 *index,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *GetNumber)(
        _In_ MI_DestinationOptions *options,
        _In_z_ const MI_Char *optionName,
        _Out_ MI_Uint32 *value,
        _Out_opt_ MI_Uint32 *index,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *GetOptionCount)(
        _In_ MI_DestinationOptions *options,
        _Out_ MI_Uint32 *count);
    MI_Result (MI_CALL *GetOptionAt)(
        _In_ MI_DestinationOptions *options,
        MI_Uint32 index,
        _Outptr_result_z_ const MI_Char **optionName,
        _Out_ MI_Value *value,
        _Out_ MI_Type *type,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *GetOption)(
        _In_ MI_DestinationOptions *options,
        _In_z_ const MI_Char *optionName,
        _Out_ MI_Value *value,
        _Out_ MI_Type *type,
        _Out_opt_ MI_Uint32 *index,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *GetCredentialsCount)(
        _In_ MI_DestinationOptions *options,
        _Out_ MI_Uint32 *count);
    MI_Result (MI_CALL *GetCredentialsAt)(
        _In_ MI_DestinationOptions *options,
        MI_Uint32 index,
        _Outptr_result_z_ const MI_Char **optionName,
        _Out_ MI_UserCredentials *credentials,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *GetCredentialsPasswordAt)(
        _In_ MI_DestinationOptions *options,
        MI_Uint32 index,
        _Outptr_result_z_ const MI_Char **optionName,
        _Out_writes_to_opt_(bufferLength, *passwordLength) MI_Char *password,
        _In_ MI_Uint32 bufferLength,
        _Out_ MI_Uint32 *passwordLength,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *Clone)(
        _In_ const MI_DestinationOptions* self,
        _Out_ MI_DestinationOptions* newDestinationOptions);
    MI_Result (MI_CALL *SetInterval)(
        _Inout_ MI_DestinationOptions *options,
        _In_z_ const MI_Char *optionName,
        _In_ const MI_Interval *value,
               MI_Uint32 flags);
    MI_Result (MI_CALL *GetInterval)(
        _In_ MI_DestinationOptions *options,
        _In_z_ const MI_Char *optionName,
        _Out_ MI_Interval *value,
        _Out_opt_ MI_Uint32 *index,
        _Out_opt_ MI_Uint32 *flags);
}
MI_DestinationOptionsFT;
typedef struct _MI_OperationOptionsFT
{
    void (MI_CALL *Delete)(
        _Inout_ MI_OperationOptions *options);
    MI_Result (MI_CALL *SetString)(
        _Inout_ MI_OperationOptions *options,
        _In_z_ const MI_Char *optionName,
        _In_z_ const MI_Char *value,
               MI_Uint32 flags);
    MI_Result (MI_CALL *SetNumber)(
        _Inout_ MI_OperationOptions *options,
        _In_z_ const MI_Char *optionName,
        _In_ MI_Uint32 value,
               MI_Uint32 flags);
    MI_Result (MI_CALL *SetCustomOption)(
        _Inout_ MI_OperationOptions *options,
        _In_z_ const MI_Char *optionName,
        _In_ MI_Type valueType,
        _In_ const MI_Value *value,
               MI_Boolean mustComply,
               MI_Uint32 flags);
    MI_Result (MI_CALL *GetString)(
        _In_ MI_OperationOptions *options,
        _In_z_ const MI_Char *optionName,
        _Outptr_result_z_ const MI_Char **value,
        _Out_opt_ MI_Uint32 *index,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *GetNumber)(
        _In_ MI_OperationOptions *options,
        _In_z_ const MI_Char *optionName,
        _Out_ MI_Uint32 *value,
        _Out_opt_ MI_Uint32 *index,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *GetOptionCount)(
        _In_ MI_OperationOptions *options,
        _Out_ MI_Uint32 *count);
    MI_Result (MI_CALL *GetOptionAt)(
        _In_ MI_OperationOptions *options,
        MI_Uint32 index,
        _Outptr_result_z_ const MI_Char **optionName,
        _Out_ MI_Value *value,
        _Out_ MI_Type *type,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *GetOption)(
        _In_ MI_OperationOptions *options,
        _In_z_ const MI_Char *optionName,
        _Out_ MI_Value *value,
        _Out_ MI_Type *type,
        _Out_opt_ MI_Uint32 *index,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *GetEnabledChannels)(
        _In_ MI_OperationOptions *options,
        _In_z_ const MI_Char *optionName,
        _Out_writes_to_opt_(bufferLength, *channelCount) MI_Uint32 *channels,
        _In_ MI_Uint32 bufferLength,
        _Out_ MI_Uint32 *channelCount,
        _Out_opt_ MI_Uint32 *flags);
    MI_Result (MI_CALL *Clone)(
        _In_ const MI_OperationOptions* self,
        _Out_ MI_OperationOptions* newOperationOptions);
    MI_Result (MI_CALL *SetInterval)(
        _Inout_ MI_OperationOptions *options,
        _In_z_ const MI_Char *optionName,
        _In_ const MI_Interval *value,
               MI_Uint32 flags);
    MI_Result (MI_CALL *GetInterval)(
        _In_ MI_OperationOptions *options,
        _In_z_ const MI_Char *optionName,
        _Out_ MI_Interval *value,
        _Out_opt_ MI_Uint32 *index,
        _Out_opt_ MI_Uint32 *flags);
}
MI_OperationOptionsFT;
struct _MI_Application
{
    MI_Uint64 reserved1;
    ptrdiff_t reserved2;
    const MI_ApplicationFT * ft;
} ;
struct _MI_Session
{
    MI_Uint64 reserved1;
    ptrdiff_t reserved2;
    const MI_SessionFT * ft;
} ;
struct _MI_Operation
{
    MI_Uint64 reserved1;
    ptrdiff_t reserved2;
    const MI_OperationFT * ft;
};
struct _MI_HostedProvider
{
    MI_Uint64 reserved1;
    ptrdiff_t reserved2;
    const MI_HostedProviderFT * ft;
} ;
struct _MI_DestinationOptions
{
    MI_Uint64 reserved1;
    ptrdiff_t reserved2;
    const MI_DestinationOptionsFT * ft;
} ;
struct _MI_OperationOptions
{
    MI_Uint64 reserved1;
    ptrdiff_t reserved2;
    const MI_OperationOptionsFT * ft;
} ;
typedef struct _MI_UtilitiesFT
{
    MI_ErrorCategory (MI_CALL *MapErrorToMiErrorCategory)(
        _In_z_ MI_Char *errorType,
        MI_Uint32 error);
    MI_Result (MI_CALL *CimErrorFromErrorCode)(
        MI_Uint32 error,
        _In_z_ const MI_Char *errorType,
        _In_z_ const MI_Char* errorMessage,
        _Outptr_ MI_Instance **cimError);
} MI_UtilitiesFT;
typedef struct _MI_ClientFT_V1
{
    const MI_ApplicationFT *applicationFT;
    const MI_SessionFT *sessionFT;
    const MI_OperationFT *operationFT;
    const MI_HostedProviderFT *hostedProviderFT;
    const MI_SerializerFT *serializerFT;
    const MI_DeserializerFT *deserializerFT;
    const MI_SubscriptionDeliveryOptionsFT *subscribeDeliveryOptionsFT;
    const MI_DestinationOptionsFT *destinationOptionsFT;
    const MI_OperationOptionsFT *operationOptionsFT;
    const MI_UtilitiesFT *utilitiesFT;
} MI_ClientFT_V1;
__declspec(dllimport) const MI_ClientFT_V1 *mi_clientFT_V1;
MI_Result MI_MAIN_CALL MI_Application_InitializeV1(
             MI_Uint32 flags,
    _In_opt_z_ const MI_Char *applicationID,
    _Outptr_opt_result_maybenull_ MI_Instance **extendedError,
    _Out_ MI_Application *application);
MI_INLINE MI_Result MI_Application_Close(
    _Inout_ MI_Application *application)
{
    if (application && application->ft)
    {
        return application->ft->Close(application);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Application_NewInstance(
    _In_ MI_Application *application,
    _In_z_ const MI_Char *className,
    _In_opt_ const MI_ClassDecl *classRTTI,
    _Outptr_ MI_Instance **instance)
{
    if (application && application->ft)
    {
        return application->ft->NewInstance(application, className, classRTTI, instance);
    }
    else
    {
        if (instance)
        {
            *instance = NULL;
        }
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Application_NewInstanceFromClass(
    _In_ MI_Application *application,
    _In_z_ const MI_Char *className,
    _In_opt_ const MI_Class *classObject,
    _Outptr_ MI_Instance **instance)
{
    if (application && application->ft)
    {
        return application->ft->NewInstanceFromClass(application, className, classObject, instance);
    }
    else
    {
        if (instance)
        {
            *instance = NULL;
        }
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Application_NewClass(
        _In_ MI_Application *application,
        _In_ const MI_ClassDecl* classDecl,
        __in_z_opt const MI_Char *namespaceName,
        __in_z_opt const MI_Char *serverName,
        _Outptr_ MI_Class** classObject)
{
    if (application && application->ft)
    {
        return application->ft->NewClass(application, classDecl, namespaceName, serverName, classObject);
    }
    else
    {
        if (classObject)
        {
            *classObject = NULL;
        }
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Application_NewParameterSet(
    _In_ MI_Application *application,
    _In_opt_ const MI_ClassDecl *classRTTI,
    _Outptr_ MI_Instance **instance)
{
    if (application && application->ft)
    {
        return application->ft->NewInstance(application, MI_T("Parameters"), classRTTI, instance);
    }
    else
    {
        if (instance)
        {
            *instance = NULL;
        }
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Application_NewDestinationOptions(
    _In_ MI_Application *application,
    _Out_ MI_DestinationOptions *options)
{
    if (application && application->ft)
    {
        return application->ft->NewDestinationOptions(application, options);
    }
    else
    {
        if (options)
        {
            memset(options, 0, sizeof(MI_DestinationOptions));
        }
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Application_NewOperationOptions(
    _In_ MI_Application *application,
          MI_Boolean mustUnderstand,
    _Out_ MI_OperationOptions *options)
{
    if (application && application->ft)
    {
        return application->ft->NewOperationOptions(application, mustUnderstand, options);
    }
    else
    {
        if (options)
        {
            memset(options, 0, sizeof(MI_OperationOptions));
        }
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Application_NewSubscriptionDeliveryOptions(
    _In_ MI_Application *application,
    _In_ MI_SubscriptionDeliveryType deliveryType,
    _Out_ MI_SubscriptionDeliveryOptions *deliveryOptions)
{
    if (application && application->ft)
    {
        return application->ft->NewSubscriptionDeliveryOptions(application, deliveryType, deliveryOptions);
    }
    else
    {
        if (deliveryOptions)
        {
            memset(deliveryOptions, 0, sizeof(MI_SubscriptionDeliveryOptions));
        }
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Application_NewSession(
    _In_ MI_Application *application,
    _In_opt_z_ const MI_Char *protocol,
    _In_opt_z_ const MI_Char *destination,
    _In_opt_ MI_DestinationOptions *options,
    _In_opt_ MI_SessionCallbacks *callbacks,
    _Outptr_opt_result_maybenull_ MI_Instance **extendedError,
    _Out_ MI_Session *session)
{
    if (application && application->ft)
    {
        return application->ft->NewSession(application, protocol, destination, options, callbacks, extendedError, session);
    }
    else
    {
        if (session)
        {
            memset(session, 0, sizeof(MI_Session));
        }
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Application_NewHostedProvider(
    _In_ MI_Application *application,
    _In_z_ const MI_Char *namespaceName,
    _In_z_ const MI_Char *providerName,
    _In_ MI_MainFunction mi_Main,
    _Outptr_opt_result_maybenull_ MI_Instance **extendedError,
    _Out_ MI_HostedProvider *hostedProvider)
{
    if (application && application->ft)
    {
        return application->ft->NewHostedProvider(application, namespaceName, providerName, mi_Main, extendedError, hostedProvider);
    }
    else
    {
        if (hostedProvider)
        {
            memset(hostedProvider, 0, sizeof(MI_HostedProvider));
        }
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Application_NewSerializer(
    _Inout_ MI_Application *application,
    MI_Uint32 flags,
    _In_z_ MI_Char *format,
    _Out_ MI_Serializer *serializer)
{
    if (application && application->ft)
    {
        return application->ft->NewSerializer(application, flags, format, serializer);
    }
    else
    {
        if (serializer)
        {
            memset(serializer, 0, sizeof(MI_Serializer));
        }
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Application_NewDeserializer(
    _Inout_ MI_Application *application,
    MI_Uint32 flags,
    _In_z_ MI_Char *format,
    _Out_ MI_Deserializer *deserializer)
{
    if (application && application->ft)
    {
        return application->ft->NewDeserializer(application, flags, format, deserializer);
    }
    else
    {
        if (deserializer)
        {
            memset(deserializer, 0, sizeof(MI_Deserializer));
        }
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_HostedProvider_Close(
    _Inout_ MI_HostedProvider *hostedProvider)
{
    if (hostedProvider && hostedProvider->ft)
    {
        return hostedProvider->ft->Close(hostedProvider);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_HostedProvider_GetApplication(
    _In_ MI_HostedProvider *hostedProvider,
    _Out_ MI_Application *application)
{
    if (hostedProvider && hostedProvider->ft)
    {
        return hostedProvider->ft->GetApplication(hostedProvider, application);
    }
    else if (application)
    {
        memset(application, 0, sizeof(MI_Application));
    }
    return MI_RESULT_INVALID_PARAMETER;
}
MI_INLINE MI_Result MI_Session_Close(
    _Inout_ MI_Session *session,
    _In_opt_ void *completionContext,
    _In_opt_ void (MI_CALL *completionCallback)(_In_opt_ void *completionContext))
{
    if (session && session->ft)
    {
        return session->ft->Close(session, completionContext, completionCallback);
    }
    else if (completionCallback)
    {
        completionCallback(completionContext);
        return MI_RESULT_OK;
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Session_GetApplication(
    _In_ MI_Session *session,
    _Out_ MI_Application *application)
{
    if (session && session->ft)
    {
        return session->ft->GetApplication(session, application);
    }
    if (application)
    {
        memset(application, 0, sizeof(MI_Application));
    }
    return MI_RESULT_INVALID_PARAMETER;
}
MI_INLINE void MI_Session_GetInstance(
    _In_ MI_Session *session,
             MI_Uint32 flags,
    _In_opt_ MI_OperationOptions *options,
    _In_opt_z_ const MI_Char *namespaceName,
    _In_ const MI_Instance *inboundInstance,
    _In_opt_ MI_OperationCallbacks *callbacks,
    _Out_ MI_Operation *operation)
{
    if (session && session->ft)
    {
        session->ft->GetInstance(session, flags, options, namespaceName, inboundInstance, callbacks, operation);
    }
    else
    {
        if (operation)
        {
            memset(operation, 0, sizeof(*operation));
        }
        if (callbacks && callbacks->instanceResult)
        {
            callbacks->instanceResult(NULL, callbacks->callbackContext, NULL, MI_FALSE, MI_RESULT_INVALID_PARAMETER, NULL, NULL, NULL);
        }
    }
}
MI_INLINE void MI_Session_ModifyInstance(
    _In_ MI_Session *session,
             MI_Uint32 flags,
    _In_opt_ MI_OperationOptions *options,
    _In_opt_z_ const MI_Char *namespaceName,
    _In_ const MI_Instance *inboundInstance,
    _In_opt_ MI_OperationCallbacks *callbacks,
    _Out_ MI_Operation *operation)
{
    if (session && session->ft)
    {
        session->ft->ModifyInstance(session, flags, options, namespaceName, inboundInstance, callbacks, operation);
    }
    else
    {
        if (operation)
        {
            memset(operation, 0, sizeof(*operation));
        }
        if (callbacks && callbacks->instanceResult)
        {
            callbacks->instanceResult(NULL, callbacks->callbackContext, NULL, MI_FALSE, MI_RESULT_INVALID_PARAMETER, NULL, NULL, NULL);
        }
    }
}
MI_INLINE void MI_Session_CreateInstance(
    _In_ MI_Session *session,
             MI_Uint32 flags,
    _In_opt_ MI_OperationOptions *options,
    _In_opt_z_ const MI_Char *namespaceName,
    _In_ const MI_Instance *inboundInstance,
    _In_opt_ MI_OperationCallbacks *callbacks,
    _Out_ MI_Operation *operation)
{
    if (session && session->ft)
    {
        session->ft->CreateInstance(session, flags, options, namespaceName, inboundInstance, callbacks, operation);
    }
    else
    {
        if (operation)
        {
            memset(operation, 0, sizeof(*operation));
        }
        if (callbacks && callbacks->instanceResult)
        {
            callbacks->instanceResult(NULL, callbacks->callbackContext, NULL, MI_FALSE, MI_RESULT_INVALID_PARAMETER, NULL, NULL, NULL);
        }
    }
}
MI_INLINE void MI_Session_DeleteInstance(
    _In_ MI_Session *session,
             MI_Uint32 flags,
    _In_opt_ MI_OperationOptions *options,
    _In_opt_z_ const MI_Char *namespaceName,
    _In_ const MI_Instance *inboundInstance,
    _In_opt_ MI_OperationCallbacks *callbacks,
    _Out_ MI_Operation *operation)
{
    if (session && session->ft)
    {
        session->ft->DeleteInstance(session, flags, options, namespaceName, inboundInstance, callbacks, operation);
    }
    else
    {
        if (operation)
        {
            memset(operation, 0, sizeof(*operation));
        }
        if (callbacks && callbacks->instanceResult)
        {
            callbacks->instanceResult(NULL, callbacks->callbackContext, NULL, MI_FALSE, MI_RESULT_INVALID_PARAMETER, NULL, NULL, NULL);
        }
    }
}
MI_INLINE void MI_Session_Invoke(
    _In_ MI_Session *session,
               MI_Uint32 flags,
    _In_opt_ MI_OperationOptions *options,
    _In_opt_z_ const MI_Char *namespaceName,
    _In_opt_z_ const MI_Char *className,
    _In_z_ const MI_Char *methodName,
    _In_opt_ const MI_Instance *inboundInstance,
    _In_opt_ const MI_Instance *inboundProperties,
    _In_opt_ MI_OperationCallbacks *callbacks,
    _Out_ MI_Operation *operation)
{
    if (session && session->ft)
    {
        session->ft->Invoke(session, flags, options, namespaceName, className, methodName, inboundInstance, inboundProperties, callbacks, operation);
    }
    else
    {
        if (operation)
        {
            memset(operation, 0, sizeof(*operation));
        }
        if (callbacks && callbacks->instanceResult)
        {
            callbacks->instanceResult(NULL, callbacks->callbackContext, NULL, MI_FALSE, MI_RESULT_INVALID_PARAMETER, NULL, NULL, NULL);
        }
    }
}
MI_INLINE void MI_Session_EnumerateInstances(
    _In_ MI_Session *session,
             MI_Uint32 flags,
    _In_opt_ MI_OperationOptions *options,
    _In_opt_z_ const MI_Char *namespaceName,
    _In_opt_z_ const MI_Char *className,
             MI_Boolean keysOnly,
    _In_opt_ MI_OperationCallbacks *callbacks,
    _Out_ MI_Operation *operation)
{
    if (session && session->ft)
    {
        session->ft->EnumerateInstances(session, flags, options, namespaceName, className, keysOnly, callbacks, operation);
    }
    else
    {
        if (operation)
        {
            memset(operation, 0, sizeof(*operation));
        }
        if (callbacks && callbacks->instanceResult)
        {
            callbacks->instanceResult(NULL, callbacks->callbackContext, NULL, MI_FALSE, MI_RESULT_INVALID_PARAMETER, NULL, NULL, NULL);
        }
    }
}
MI_INLINE void MI_Session_QueryInstances(
    _In_ MI_Session *session,
             MI_Uint32 flags,
    _In_opt_ MI_OperationOptions *options,
    _In_opt_z_ const MI_Char *namespaceName,
    _In_opt_z_ const MI_Char *queryDialect,
    _In_opt_z_ const MI_Char *queryExpression,
    _In_opt_ MI_OperationCallbacks *callbacks,
    _Out_ MI_Operation *operation)
{
    if (session && session->ft)
    {
        session->ft->QueryInstances(session, flags, options, namespaceName, queryDialect, queryExpression, callbacks, operation);
    }
    else
    {
        if (operation)
        {
            memset(operation, 0, sizeof(*operation));
        }
        if (callbacks && callbacks->instanceResult)
        {
            callbacks->instanceResult(NULL, callbacks->callbackContext, NULL, MI_FALSE, MI_RESULT_INVALID_PARAMETER, NULL, NULL, NULL);
        }
    }
}
MI_INLINE void MI_Session_AssociatorInstances(
    _In_ MI_Session *session,
               MI_Uint32 flags,
    _In_opt_ MI_OperationOptions *options,
    _In_opt_z_ const MI_Char *namespaceName,
    _In_ const MI_Instance *instanceKey,
    _In_opt_z_ const MI_Char *assocClass,
    _In_opt_z_ const MI_Char *resultClass,
    _In_opt_z_ const MI_Char *role,
    _In_opt_z_ const MI_Char *resultRole,
               MI_Boolean keysOnly,
    _In_opt_ MI_OperationCallbacks *callbacks,
    _Out_ MI_Operation *operation)
{
    if (session && session->ft)
    {
        session->ft->AssociatorInstances(session, flags, options, namespaceName, instanceKey, assocClass, resultClass, role, resultRole, keysOnly, callbacks, operation);
    }
    else
    {
        if (operation)
        {
            memset(operation, 0, sizeof(*operation));
        }
        if (callbacks && callbacks->instanceResult)
        {
            callbacks->instanceResult(NULL, callbacks->callbackContext, NULL, MI_FALSE, MI_RESULT_INVALID_PARAMETER, NULL, NULL, NULL);
        }
    }
}
MI_INLINE void MI_Session_ReferenceInstances(
    _In_ MI_Session *session,
             MI_Uint32 flags,
    _In_opt_ MI_OperationOptions *options,
    _In_opt_z_ const MI_Char *namespaceName,
    _In_ const MI_Instance *instanceKey,
    _In_opt_z_ const MI_Char *resultClass,
    _In_opt_z_ const MI_Char *role,
             MI_Boolean keysOnly,
    _In_opt_ MI_OperationCallbacks *callbacks,
    _Out_ MI_Operation *operation)
{
    if (session && session->ft)
    {
        session->ft->ReferenceInstances(session, flags, options, namespaceName, instanceKey, resultClass, role, keysOnly, callbacks, operation);
    }
    else
    {
        if (operation)
        {
            memset(operation, 0, sizeof(*operation));
        }
        if (callbacks && callbacks->instanceResult)
        {
            callbacks->instanceResult(NULL, callbacks->callbackContext, NULL, MI_FALSE, MI_RESULT_INVALID_PARAMETER, NULL, NULL, NULL);
        }
    }
}
MI_INLINE void MI_Session_Subscribe(
    _In_ MI_Session *session,
               MI_Uint32 flags,
    _In_opt_ MI_OperationOptions *options,
    _In_opt_z_ const MI_Char *namespaceName,
    _In_opt_z_ const MI_Char *queryDialect,
    _In_opt_z_ const MI_Char *queryExpression,
    _In_opt_ const MI_SubscriptionDeliveryOptions *deliverOptions,
    _In_opt_ MI_OperationCallbacks *callbacks,
    _Out_ MI_Operation *operation)
{
    if (session && session->ft)
    {
        session->ft->Subscribe(session, flags, options, namespaceName, queryDialect, queryExpression, deliverOptions, callbacks, operation);
    }
    else
    {
        if (operation)
        {
            memset(operation, 0, sizeof(*operation));
        }
        if (callbacks && callbacks->indicationResult)
        {
            callbacks->indicationResult(NULL, callbacks->callbackContext, NULL, NULL, NULL, MI_FALSE, MI_RESULT_INVALID_PARAMETER, NULL, NULL, NULL);
        }
    }
}
MI_INLINE void MI_Session_GetClass(
    _In_ MI_Session *session,
               MI_Uint32 flags,
    _In_opt_ MI_OperationOptions *options,
    _In_opt_z_ const MI_Char *namespaceName,
    _In_opt_z_ const MI_Char *className,
    _In_opt_ MI_OperationCallbacks *callbacks,
    _Out_ MI_Operation *operation)
{
    if (session && session->ft)
    {
        session->ft->GetClass(session, flags, options, namespaceName, className, callbacks, operation);
    }
    else
    {
        if (operation)
        {
            memset(operation, 0, sizeof(*operation));
        }
        if (callbacks && callbacks->classResult)
        {
            callbacks->classResult(NULL, callbacks->callbackContext, NULL, MI_FALSE, MI_RESULT_INVALID_PARAMETER, NULL, NULL, NULL);
        }
    }
}
MI_INLINE void MI_Session_EnumerateClasses(
    _In_ MI_Session *session,
               MI_Uint32 flags,
    _In_opt_ MI_OperationOptions *options,
    _In_opt_z_ const MI_Char *namespaceName,
    _In_opt_z_ const MI_Char *className,
               MI_Boolean classNamesOnly,
    _In_opt_ MI_OperationCallbacks *callbacks,
    _Out_ MI_Operation *operation)
{
    if (session && session->ft)
    {
        session->ft->EnumerateClasses(session, flags, options, namespaceName, className, classNamesOnly, callbacks, operation);
    }
    else
    {
        if (operation)
        {
            memset(operation, 0, sizeof(*operation));
        }
        if (callbacks && callbacks->classResult)
        {
            callbacks->classResult(NULL, callbacks->callbackContext, NULL, MI_FALSE, MI_RESULT_INVALID_PARAMETER, NULL, NULL, NULL);
        }
    }
}
MI_INLINE void MI_Session_TestConnection(
        _In_ MI_Session *session,
                 MI_Uint32 flags,
        _In_opt_ MI_OperationCallbacks *callbacks,
        _Out_ MI_Operation *operation)
{
    if (session && session->ft)
    {
        session->ft->TestConnection(session, flags, callbacks, operation);
    }
    else
    {
        if (operation)
        {
            memset(operation, 0, sizeof(*operation));
        }
        if (callbacks && callbacks->instanceResult)
        {
            callbacks->instanceResult(NULL, callbacks->callbackContext, NULL, MI_FALSE, MI_RESULT_INVALID_PARAMETER, NULL, NULL, NULL);
        }
    }
}
MI_INLINE MI_Result MI_Operation_GetInstance(
    _In_ MI_Operation *operation,
    _Outptr_result_maybenull_ const MI_Instance **instance,
    _Out_opt_ MI_Boolean *moreResults,
    _Out_opt_ MI_Result *result,
    _Outptr_opt_result_maybenull_z_ const MI_Char **errorMessage,
    _Outptr_opt_result_maybenull_ const MI_Instance **completionDetails)
{
    if (operation && operation->ft)
    {
        return operation->ft->GetInstance(operation, instance, moreResults, result, errorMessage, completionDetails);
    }
    if (result) *result = MI_RESULT_INVALID_PARAMETER;
    if (moreResults) *moreResults = MI_FALSE;
    return MI_RESULT_INVALID_PARAMETER;
}
MI_INLINE MI_Result MI_Operation_GetIndication(
    _In_ MI_Operation *operation,
    _Outptr_result_maybenull_ const MI_Instance **instance,
    _Outptr_opt_result_maybenull_z_ const MI_Char **bookmark,
    _Outptr_opt_result_maybenull_z_ const MI_Char **machineID,
    _Out_opt_ MI_Boolean *moreResults,
    _Out_opt_ MI_Result *result,
    _Outptr_opt_result_maybenull_z_ const MI_Char **errorMessage,
    _Outptr_opt_result_maybenull_ const MI_Instance **completionDetails)
{
    if (operation && operation->ft)
    {
        return operation->ft->GetIndication(operation, instance, bookmark, machineID, moreResults, result, errorMessage, completionDetails);
    }
    if (result) *result = MI_RESULT_INVALID_PARAMETER;
    if (moreResults) *moreResults = MI_FALSE;
    return MI_RESULT_INVALID_PARAMETER;
}
MI_INLINE MI_Result MI_Operation_GetClass(
    _In_ MI_Operation *operation,
    _Outptr_result_maybenull_ const MI_Class **classResult,
    _Out_opt_ MI_Boolean *moreResults,
    _Out_opt_ MI_Result *result,
    _Outptr_opt_result_maybenull_z_ const MI_Char **errorMessage,
    _Outptr_opt_result_maybenull_ const MI_Instance **completionDetails)
{
    if (operation && operation->ft)
    {
        return operation->ft->GetClass(operation, classResult, moreResults, result, errorMessage, completionDetails);
    }
    if (result) *result = MI_RESULT_INVALID_PARAMETER;
    if (moreResults) *moreResults = MI_FALSE;
    return MI_RESULT_INVALID_PARAMETER;
}
MI_INLINE MI_Result MI_Operation_Close(
    _Inout_ MI_Operation *operation)
{
    if (operation && operation->ft)
    {
        return operation->ft->Close(operation);
    }
    return MI_RESULT_INVALID_PARAMETER;
}
MI_INLINE MI_Result MI_Operation_Cancel(
    _Inout_ MI_Operation *operation,
         MI_CancellationReason reason)
{
    if (operation && operation->ft)
    {
        return operation->ft->Cancel(operation, reason);
    }
    return MI_RESULT_INVALID_PARAMETER;
}
MI_INLINE MI_Result MI_Operation_GetSession(
    _In_ MI_Operation *operation,
    _Out_ MI_Session *session)
{
    if (session)
    {
        memset(session, 0, sizeof(MI_Session));
    }
    if (operation && operation->ft)
    {
        return operation->ft->GetSession(operation, session);
    }
    return MI_RESULT_INVALID_PARAMETER;
}
MI_INLINE void MI_DestinationOptions_Delete(
    _Inout_ MI_DestinationOptions *options)
{
    if (options && options->ft)
    {
        options->ft->Delete(options);
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetTimeout(
    _Inout_ MI_DestinationOptions *options,
    _In_ const MI_Interval *timeout)
{
    if (options && options->ft)
    {
        return options->ft->SetInterval(options, MI_T("__MI_DESTINATIONOPTIONS_TIMEOUT"), timeout, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetTimeout(
    _In_ MI_DestinationOptions *options,
    _Out_ MI_Interval *timeout)
{
    if (options && options->ft)
    {
        return options->ft->GetInterval(options, MI_T("__MI_DESTINATIONOPTIONS_TIMEOUT"), timeout, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetCertCACheck(
    _Inout_ MI_DestinationOptions *options,
         MI_Boolean check)
{
    if (options && options->ft)
    {
        return options->ft->SetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_CERT_CA_CHECK"), check, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetCertCACheck(
    _In_ MI_DestinationOptions *options,
    _Out_ MI_Boolean *check)
{
    if (options && options->ft)
    {
        MI_Uint32 value;
        MI_Result result = options->ft->GetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_CERT_CA_CHECK"), &value, 0, 0);
        if (result == MI_RESULT_OK)
            *check = (MI_Boolean) value;
        return result;
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetCertCNCheck(
    _Inout_ MI_DestinationOptions *options,
         MI_Boolean check)
{
    if (options && options->ft)
    {
        return options->ft->SetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_CERT_CN_CHECK"), check, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetCertCNCheck(
    _In_ MI_DestinationOptions *options,
    _Out_ MI_Boolean *check)
{
    if (options && options->ft)
    {
        MI_Uint32 value;
        MI_Result result = options->ft->GetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_CERT_CN_CHECK"), &value, 0, 0);
        if (result == MI_RESULT_OK)
            *check = (MI_Boolean) value;
        return result;
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetCertRevocationCheck(
    _Inout_ MI_DestinationOptions *options,
         MI_Boolean check)
{
    if (options && options->ft)
    {
        return options->ft->SetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_CERT_REVOCATION_CHECK"), check, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetCertRevocationCheck(
    _In_ MI_DestinationOptions *options,
    _Out_ MI_Boolean *check)
{
    if (options && options->ft)
    {
        MI_Uint32 value;
        MI_Result result = options->ft->GetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_CERT_REVOCATION_CHECK"), &value, 0, 0);
        if (result == MI_RESULT_OK)
            *check = (MI_Boolean) value;
        return result;
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetPacketPrivacy(
    _Inout_ MI_DestinationOptions *options,
         MI_Boolean privacy)
{
    if (options && options->ft)
    {
        return options->ft->SetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_PACKET_PRIVACY"), privacy, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetPacketPrivacy(
    _In_ MI_DestinationOptions *options,
    _Out_ MI_Boolean *privacy)
{
    if (options && options->ft)
    {
        MI_Uint32 value;
        MI_Result result = options->ft->GetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_PACKET_PRIVACY"), &value, 0, 0);
        if (result == MI_RESULT_OK)
            *privacy = (MI_Boolean) value;
        return result;
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetPacketIntegrity(
    _Inout_ MI_DestinationOptions *options,
         MI_Boolean integrity)
{
    if (options && options->ft)
    {
        return options->ft->SetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_PACKET_INTEGRITY"), integrity, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetPacketIntegrity(
    _In_ MI_DestinationOptions *options,
    _Out_ MI_Boolean *integrity)
{
    if (options && options->ft)
    {
        MI_Uint32 value;
        MI_Result result = options->ft->GetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_PACKET_INTEGRITY"), &value, 0, 0);
        if (result == MI_RESULT_OK)
            *integrity = (MI_Boolean) value;
        return result;
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetPacketEncoding(
    _Inout_ MI_DestinationOptions *options,
    _In_z_ const MI_Char *encoding)
{
    if (options && options->ft)
    {
        return options->ft->SetString(options, MI_T("__MI_DESTINATIONOPTIONS_PACKET_ENCODING"), encoding, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetPacketEncoding(
    _In_ MI_DestinationOptions *options,
    _Outptr_result_z_ const MI_Char **encoding)
{
    if (options && options->ft)
    {
        return options->ft->GetString(options, MI_T("__MI_DESTINATIONOPTIONS_PACKET_ENCODING"), encoding, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetDataLocale(
    _Inout_ MI_DestinationOptions *options,
    _In_z_ const MI_Char *locale)
{
    if (options && options->ft)
    {
        return options->ft->SetString(options, MI_T("__MI_DESTINATIONOPTIONS_DATA_LOCALE"), locale, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetDataLocale(
    _In_ MI_DestinationOptions *options,
    _Outptr_result_z_ const MI_Char **locale)
{
    if (options && options->ft)
    {
        return options->ft->GetString(options, MI_T("__MI_DESTINATIONOPTIONS_DATA_LOCALE"), locale, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetUILocale(
    _Inout_ MI_DestinationOptions *options,
    _In_z_ const MI_Char *locale)
{
    if (options && options->ft)
    {
        return options->ft->SetString(options, MI_T("__MI_DESTINATIONOPTIONS_UI_LOCALE"), locale, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetUILocale(
    _In_ MI_DestinationOptions *options,
    _Outptr_result_z_ const MI_Char **locale)
{
    if (options && options->ft)
    {
        return options->ft->GetString(options, MI_T("__MI_DESTINATIONOPTIONS_UI_LOCALE"), locale, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetMaxEnvelopeSize(
    _Inout_ MI_DestinationOptions *options,
         MI_Uint32 sizeInKB)
{
    if (options && options->ft)
    {
        return options->ft->SetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_MAX_ENVELOPE_SIZE"), sizeInKB, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetMaxEnvelopeSize(
    _In_ MI_DestinationOptions *options,
    _Out_ MI_Uint32 *sizeInKB)
{
    if (options && options->ft)
    {
        return options->ft->GetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_MAX_ENVELOPE_SIZE"), sizeInKB, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetEncodePortInSPN(
    _Inout_ MI_DestinationOptions *options,
         MI_Boolean encodePort)
{
    if (options && options->ft)
    {
        return options->ft->SetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_ENCODE_PORT_IN_SPN"), encodePort, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetEncodePortInSPN(
    _In_ MI_DestinationOptions *options,
    _Out_ MI_Boolean *encodePort)
{
    if (options && options->ft)
    {
        MI_Uint32 value;
        MI_Result result = options->ft->GetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_ENCODE_PORT_IN_SPN"), &value, 0, 0);
        if (result == MI_RESULT_OK)
            *encodePort = (MI_Boolean) value;
        return result;
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetHttpUrlPrefix(
    _Inout_ MI_DestinationOptions *options,
    _In_z_ const MI_Char *prefix)
{
    if (options && options->ft)
    {
        return options->ft->SetString(options, MI_T("__MI_DESTINATIONOPTIONS_HTTP_URL_PREFIX"), prefix, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetHttpUrlPrefix(
    _In_ MI_DestinationOptions *options,
    _Outptr_result_z_ const MI_Char **prefix)
{
    if (options && options->ft)
    {
        return options->ft->GetString(options, MI_T("__MI_DESTINATIONOPTIONS_HTTP_URL_PREFIX"), prefix, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetDestinationPort(
    _Inout_ MI_DestinationOptions *options,
         MI_Uint32 port)
{
    if (options && options->ft)
    {
        return options->ft->SetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_DESTINATION_PORT"), port, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetDestinationPort(
    _In_ MI_DestinationOptions *options,
    _Out_ MI_Uint32 *port)
{
    if (options && options->ft)
    {
        return options->ft->GetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_DESTINATION_PORT"), port, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetTransport(
    _Inout_ MI_DestinationOptions *options,
    _In_z_ const MI_Char *transport)
{
    if (options && options->ft)
    {
        return options->ft->SetString(options, MI_T("__MI_DESTINATIONOPTIONS_TRANSPORT"), transport, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetTransport(
    _In_ MI_DestinationOptions *options,
    _Outptr_result_z_ const MI_Char **transport)
{
    if (options && options->ft)
    {
        return options->ft->GetString(options, MI_T("__MI_DESTINATIONOPTIONS_TRANSPORT"), transport, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetProxyType(
    _Inout_ MI_DestinationOptions *options,
    _In_z_ const MI_Char *proxyType)
{
    if (options && options->ft)
    {
        return options->ft->SetString(options, MI_T("__MI_DESTINATIONOPTIONS_PROXY_TYPE"), proxyType, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetProxyType(
    _In_ MI_DestinationOptions *options,
    _Outptr_result_z_ const MI_Char **proxyType)
{
    if (options && options->ft)
    {
        return options->ft->GetString(options, MI_T("__MI_DESTINATIONOPTIONS_PROXY_TYPE"), proxyType, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_AddProxyCredentials(
    _Inout_ MI_DestinationOptions *options,
    _In_ const MI_UserCredentials *credentials)
{
    if (options && options->ft)
    {
        return options->ft->AddCredentials(options, MI_T("__MI_DESTINATIONOPTIONS_PROXY_CREDENTIALS"), credentials, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_AddDestinationCredentials(
    _Inout_ MI_DestinationOptions *options,
    _In_ const MI_UserCredentials *credentials)
{
    if (options && options->ft)
    {
        return options->ft->AddCredentials(options, MI_T("__MI_DESTINATIONOPTIONS_DESTINATION_CREDENTIALS"), credentials, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
typedef enum _MI_DestinationOptions_ImpersonationType
{
    MI_DestinationOptions_ImpersonationType_Default = 0,
    MI_DestinationOptions_ImpersonationType_None = 1,
    MI_DestinationOptions_ImpersonationType_Identify = 2,
    MI_DestinationOptions_ImpersonationType_Impersonate = 3,
    MI_DestinationOptions_ImpersonationType_Delegate = 4
} MI_DestinationOptions_ImpersonationType;
MI_INLINE MI_Result MI_DestinationOptions_SetImpersonationType(
    _Inout_ MI_DestinationOptions *options,
    _In_ MI_DestinationOptions_ImpersonationType impersonationType)
{
    if (options && options->ft)
    {
        return options->ft->SetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_IMPERSONATION_TYPE"), impersonationType, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetImpersonationType(
    _Inout_ MI_DestinationOptions *options,
    _Out_ MI_DestinationOptions_ImpersonationType * impersonationType)
{
    if (options && options->ft)
    {
        MI_Uint32 value;
        MI_Result result = options->ft->GetNumber(options, MI_T("__MI_DESTINATIONOPTIONS_IMPERSONATION_TYPE"), &value, 0, 0);
        if (result == MI_RESULT_OK)
            *impersonationType = (MI_DestinationOptions_ImpersonationType) value;
        return result;
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetString(
    _Inout_ MI_DestinationOptions *options,
    _In_z_ const MI_Char *optionName,
    _In_z_ const MI_Char *optionValue)
{
    if (options && options->ft)
    {
        return options->ft->SetString(options, optionName, optionValue, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetString(
    _In_ MI_DestinationOptions *options,
    _In_z_ const MI_Char *optionName,
    _Outptr_result_z_ const MI_Char **optionValue,
    _Out_opt_ MI_Uint32 *index)
{
    if (options && options->ft)
    {
        return options->ft->GetString(options, optionName, optionValue, index, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_SetNumber(
    _Inout_ MI_DestinationOptions *options,
    _In_z_ const MI_Char *optionName,
    _In_ MI_Uint32 optionValue)
{
    if (options && options->ft)
    {
        return options->ft->SetNumber(options, optionName, optionValue, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetNumber(
    _In_ MI_DestinationOptions *options,
    _In_z_ const MI_Char *optionName,
    _Out_ MI_Uint32 *optionValue,
    _Out_opt_ MI_Uint32 *index)
{
    if (options && options->ft)
    {
        return options->ft->GetNumber(options, optionName, optionValue, index, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetOptionCount(
    _In_ MI_DestinationOptions *options,
    _Out_ MI_Uint32 *count)
{
    if (options && options->ft)
    {
        return options->ft->GetOptionCount(options, count);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetOptionAt(
    _In_ MI_DestinationOptions *options,
    MI_Uint32 index,
    _Outptr_result_z_ const MI_Char **optionName,
    _Out_ MI_Value *value,
    _Out_ MI_Type *type,
    _Out_opt_ MI_Uint32 *flags)
{
    if (options && options->ft)
    {
        return options->ft->GetOptionAt(options, index, optionName, value, type, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetOption(
    _In_ MI_DestinationOptions *options,
    _In_z_ const MI_Char *optionName,
    _Out_ MI_Value *value,
    _Out_ MI_Type *type,
    _Out_opt_ MI_Uint32 *index,
    _Out_opt_ MI_Uint32 *flags)
{
    if (options && options->ft)
    {
        return options->ft->GetOption(options, optionName, value, type, index, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetCredentialsCount(
    _In_ MI_DestinationOptions *options,
    _Out_ MI_Uint32 *count)
{
    if (options && options->ft)
    {
        return options->ft->GetCredentialsCount(options, count);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetCredentialsAt(
    _In_ MI_DestinationOptions *options,
    MI_Uint32 index,
    _Outptr_result_z_ const MI_Char **optionName,
    _Out_ MI_UserCredentials *credentials,
    _Out_opt_ MI_Uint32 *flags)
{
    if (options && options->ft)
    {
        return options->ft->GetCredentialsAt(options, index, optionName, credentials, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_DestinationOptions_GetCredentialsPasswordAt(
    _In_ MI_DestinationOptions *options,
    MI_Uint32 index,
    _Outptr_result_z_ const MI_Char **optionName,
    _Out_writes_to_opt_(bufferLength, *passwordLength) MI_Char *password,
    _In_ MI_Uint32 bufferLength,
    _Out_ MI_Uint32 *passwordLength,
    _Out_opt_ MI_Uint32 *flags)
{
    if (options && options->ft)
    {
        return options->ft->GetCredentialsPasswordAt(options, index, optionName, password, bufferLength, passwordLength, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_DestinationOptions_Clone(
    _In_ const MI_DestinationOptions* self,
    _Out_ MI_DestinationOptions* newDestinationOptions)
{
    if (self && self->ft)
    {
        return self->ft->Clone(self, newDestinationOptions);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE void MI_OperationOptions_Delete(
    _Inout_ MI_OperationOptions *options)
{
    if (options && options->ft)
    {
        options->ft->Delete(options);
    }
}
MI_INLINE MI_Result MI_OperationOptions_SetWriteErrorMode(
    _Inout_ MI_OperationOptions *options,
    _In_ MI_CallbackMode mode)
{
    if (options && options->ft)
    {
        return options->ft->SetNumber(options, MI_T("__MI_OPERATIONOPTIONS_WRITEERRORMODE"), mode, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_GetWriteErrorMode(
    _In_ MI_OperationOptions *options,
    _Out_ MI_CallbackMode *mode)
{
    if (options && options->ft)
    {
        MI_Uint32 value;
        MI_Result result = options->ft->GetNumber(options, MI_T("__MI_OPERATIONOPTIONS_WRITEERRORMODE"), &value, 0, 0);
        if (result == MI_RESULT_OK)
            *mode = (MI_CallbackMode) value;
        return result;
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_SetPromptUserMode(
    _Inout_ MI_OperationOptions *options,
    _In_ MI_CallbackMode mode)
{
    if (options && options->ft)
    {
        return options->ft->SetNumber(options, MI_T("__MI_OPERATIONOPTIONS_PROMPTUSERMODE"), mode, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_GetPromptUserMode(
    _In_ MI_OperationOptions *options,
    _Out_ MI_CallbackMode *mode)
{
    if (options && options->ft)
    {
        MI_Uint32 value;
        MI_Result result = options->ft->GetNumber(options, MI_T("__MI_OPERATIONOPTIONS_PROMPTUSERMODE"), &value, 0, 0);
        if (result == MI_RESULT_OK)
            *mode = (MI_CallbackMode) value;
        return result;
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_SetPromptUserRegularMode(
    _Inout_ MI_OperationOptions *options,
    _In_ MI_CallbackMode mode,
    _In_ MI_Boolean ackValue)
{
    if (options && options->ft)
    {
        MI_Result result = options->ft->SetNumber(options, MI_T("__MI_OPERATIONOPTIONS_PROMPTUSERMODE"), mode, 0);
        if( result == MI_RESULT_OK)
            return options->ft->SetNumber(options, MI_T("__MI_OPERATIONOPTIONS_PROMPTUSERMODEREGULAR_ACKVALUE"), ackValue, 0);
        else
            return result;
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_GetPromptUserRegularMode(
    _Inout_ MI_OperationOptions *options,
    _Out_ MI_CallbackMode *mode,
    _Out_ MI_Boolean *ackValue)
{
    if (options && options->ft)
    {
        MI_Uint32 _mode;
        MI_Result result = options->ft->GetNumber(options, MI_T("__MI_OPERATIONOPTIONS_PROMPTUSERMODE"), &_mode, 0, 0);
        if( result == MI_RESULT_OK)
        {
            MI_Uint32 _ackValue;
            result = options->ft->GetNumber(options, MI_T("__MI_OPERATIONOPTIONS_PROMPTUSERMODEREGULAR_ACKVALUE"), &_ackValue, 0, 0);
            if( result == MI_RESULT_OK)
            {
                *mode = (MI_CallbackMode)_mode;
                *ackValue = (MI_Boolean) _ackValue;
            }
        }
        return result;
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_SetProviderArchitecture(
    _Inout_ MI_OperationOptions *options,
    _In_ MI_ProviderArchitecture architecture,
    _In_ MI_Boolean mustComply)
{
    if (options && options->ft)
    {
        MI_Result result = options->ft->SetNumber(options, MI_T("__MI_OPERATIONOPTIONS_PROVIDER_ARCHITECTURE"), architecture, 0);
        if(result == MI_RESULT_OK)
               return options->ft->SetNumber(options, MI_T("__MI_OPERATIONOPTIONS_REQUIRED_ARCHITECTURE"), mustComply, 0);
       else
              return result;
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_GetProviderArchitecture(
    _In_ MI_OperationOptions *options,
    _Out_ MI_ProviderArchitecture *architecture,
    _Out_ MI_Boolean *mustComply)
{
    if (options && options->ft)
    {
        MI_Uint32 _architecture;
        MI_Result result = options->ft->GetNumber(options, MI_T("__MI_OPERATIONOPTIONS_PROVIDER_ARCHITECTURE"), &_architecture, 0, 0);
        if(result == MI_RESULT_OK)
        {
            MI_Uint32 _mustComply;
            result = options->ft->GetNumber(options, MI_T("__MI_OPERATIONOPTIONS_REQUIRED_ARCHITECTURE"), &_mustComply, 0, 0);
            if(result == MI_RESULT_OK)
            {
                *architecture = (MI_ProviderArchitecture)_architecture;
                *mustComply = (MI_Boolean)_mustComply;
            }
        }
        return result;
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_EnableChannel(
    _Inout_ MI_OperationOptions *options,
    _In_ MI_Uint32 channel)
{
    if (options && options->ft)
    {
        return options->ft->SetNumber(options, MI_T("__MI_OPERATIONOPTIONS_CHANNEL"), channel, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_DisableChannel(
    _Inout_ MI_OperationOptions *options,
    _In_ MI_Uint32 channel)
{
    if (options && options->ft)
    {
        return options->ft->SetNumber(options, MI_T("__MI_OPERATIONOPTIONS_CHANNEL"), channel, 1);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_GetEnabledChannels(
    _In_ MI_OperationOptions *options,
    _Out_writes_to_opt_(bufferLength, *channelCount) MI_Uint32 *channels,
    _In_ MI_Uint32 bufferLength,
    _Out_ MI_Uint32 *channelCount,
    _Out_opt_ MI_Uint32 *flags)
{
    if (options && options->ft)
    {
        return options->ft->GetEnabledChannels(options, MI_T("__MI_OPERATIONOPTIONS_CHANNEL"), channels, bufferLength, channelCount, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_SetTimeout(
    _Inout_ MI_OperationOptions *options,
    _In_ const MI_Interval *timeout)
{
    if (options && options->ft)
    {
        return options->ft->SetInterval(options, MI_T("__MI_OPERATIONOPTIONS_TIMEOUT"), timeout, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_GetTimeout(
    _In_ MI_OperationOptions *options,
    _Out_ MI_Interval *timeout)
{
    if (options && options->ft)
    {
        return options->ft->GetInterval(options, MI_T("__MI_OPERATIONOPTIONS_TIMEOUT"), timeout, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_SetResourceUriPrefix(
    _Inout_ MI_OperationOptions *options,
    _In_z_ const MI_Char *ruriPrefix)
{
    if (options && options->ft)
    {
        return options->ft->SetString(options, MI_T("__MI_OPERATIONOPTIONS_RESOURCE_URI_PREFIX"), ruriPrefix, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_GetResourceUriPrefix(
    _In_ MI_OperationOptions *options,
    _Outptr_result_z_ const MI_Char **ruriPrefix)
{
    if (options && options->ft)
    {
        return options->ft->GetString(options, MI_T("__MI_OPERATIONOPTIONS_RESOURCE_URI_PREFIX"), ruriPrefix, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_SetResourceUri(
    _Inout_ MI_OperationOptions *options,
    _In_z_ const MI_Char *rUri)
{
    if (options && options->ft)
    {
        return options->ft->SetString(options, MI_T("__MI_OPERATIONOPTIONS_RESOURCE_URI"), rUri, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_GetResourceUri(
    _In_ MI_OperationOptions *options,
    _Outptr_result_z_ const MI_Char **rUri)
{
    if (options && options->ft)
    {
        return options->ft->GetString(options, MI_T("__MI_OPERATIONOPTIONS_RESOURCE_URI"), rUri, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_SetUseMachineID(
    _Inout_ MI_OperationOptions *options,
    _In_ MI_Boolean machineID)
{
    if (options && options->ft)
    {
        return options->ft->SetNumber(options, MI_T("__MI_OPERATIONOPTIONS_USE_MACHINE_ID"), machineID, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_GetUseMachineID(
    _In_ MI_OperationOptions *options,
    _Out_ MI_Boolean *machineID)
{
    if (options && options->ft)
    {
        MI_Uint32 value;
        MI_Result result = options->ft->GetNumber(options, MI_T("__MI_OPERATIONOPTIONS_USE_MACHINE_ID"), &value, 0, 0);
        if (result == MI_RESULT_OK)
            *machineID = (MI_Boolean) value;
        return result;
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_SetCustomOption(
    _Inout_ MI_OperationOptions *options,
    _In_z_ const MI_Char *optionName,
    _In_ MI_Type optionValueType,
    _In_ const MI_Value *optionValue,
           MI_Boolean mustComply)
{
    if (options && options->ft)
    {
        return options->ft->SetCustomOption(options, optionName, optionValueType, optionValue, mustComply, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_GetOptionCount(
    _In_ MI_OperationOptions *options,
    _Out_ MI_Uint32 *count)
{
    if (options && options->ft)
    {
        return options->ft->GetOptionCount(options, count);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_GetOptionAt(
    _In_ MI_OperationOptions *options,
    MI_Uint32 index,
    _Outptr_result_z_ const MI_Char **optionName,
    _Out_ MI_Value *value,
    _Out_ MI_Type *type,
    _Out_opt_ MI_Uint32 *flags)
{
    if (options && options->ft)
    {
        return options->ft->GetOptionAt(options, index, optionName, value, type, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_SetString(
    _Inout_ MI_OperationOptions *options,
    _In_z_ const MI_Char *optionName,
    _In_z_ const MI_Char *value,
    MI_Uint32 flags)
{
    if (options && options->ft)
    {
        return options->ft->SetString(options, optionName, value, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_GetString(
    _In_ MI_OperationOptions *options,
    _In_z_ const MI_Char *optionName,
    _Outptr_result_z_ const MI_Char **value,
    _Out_opt_ MI_Uint32 *index,
    _Out_opt_ MI_Uint32 *flags)
{
    if (options && options->ft)
    {
        return options->ft->GetString(options, optionName, value, index, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_SetNumber(
    _Inout_ MI_OperationOptions *options,
    _In_z_ const MI_Char *optionName,
    _In_ MI_Uint32 value,
    MI_Uint32 flags)
{
    if (options && options->ft)
    {
        return options->ft->SetNumber(options, optionName, value, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_GetNumber(
    _In_ MI_OperationOptions *options,
    _In_z_ const MI_Char *optionName,
    _Out_ MI_Uint32 *value,
    _Out_opt_ MI_Uint32 *index,
    _Out_opt_ MI_Uint32 *flags)
{
    if (options && options->ft)
    {
        return options->ft->GetNumber(options, optionName, value, index, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_OperationOptions_GetOption(
    _In_ MI_OperationOptions *options,
    _In_z_ const MI_Char *optionName,
    _Out_ MI_Value *value,
    _Out_ MI_Type *type,
    _Out_opt_ MI_Uint32 *index,
    _Out_opt_ MI_Uint32 *flags)
{
    if (options && options->ft)
    {
        return options->ft->GetOption(options, optionName, value, type, index, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_OperationOptions_Clone(
    _In_ const MI_OperationOptions* self,
    _Out_ MI_OperationOptions* newOperationOptions)
{
    if (self && self->ft)
    {
        return self->ft->Clone(self, newOperationOptions);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Class_GetClassName(
        _In_ const MI_Class* self,
        _Outptr_result_maybenull_z_ const MI_Char** className)
{
    if (self && self->ft)
    {
        return self->ft->GetClassName(self, className);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Class_GetNameSpace(
        _In_ const MI_Class* self,
        _Outptr_result_maybenull_z_ const MI_Char** nameSpace)
{
    if (self && self->ft)
    {
        return self->ft->GetNameSpace(self, nameSpace);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Class_GetServerName(
        _In_ const MI_Class* self,
        _Outptr_result_maybenull_z_ const MI_Char** serverName)
{
    if (self && self->ft)
    {
        return self->ft->GetServerName(self, serverName);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Class_GetElementCount(
        _In_ const MI_Class* self,
        _Out_ MI_Uint32* count)
{
    if (self && self->ft)
    {
        return self->ft->GetElementCount(self, count);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Class_GetElement(
        _In_ const MI_Class* self,
        _In_z_ const MI_Char* name,
        _Out_opt_ MI_Value* value,
        _Out_opt_ MI_Boolean* valueExists,
        _Out_opt_ MI_Type* type,
        _Outptr_opt_result_maybenull_z_ MI_Char **referenceClass,
        _Out_opt_ MI_QualifierSet *qualifierSet,
        _Out_opt_ MI_Uint32* flags,
        _Out_opt_ MI_Uint32* index)
{
    if (self && self->ft)
    {
        return self->ft->GetElement(self, name, value, valueExists, type, referenceClass, qualifierSet, flags, index);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Class_GetElementAt(
        _In_ const MI_Class* self,
                          MI_Uint32 index,
        _Outptr_opt_result_maybenull_z_ const MI_Char** name,
        _Out_opt_ MI_Value* value,
        _Out_opt_ MI_Boolean* valueExists,
        _Out_opt_ MI_Type* type,
        _Outptr_opt_result_maybenull_z_ MI_Char **referenceClass,
        _Out_opt_ MI_QualifierSet *qualifierSet,
        _Out_opt_ MI_Uint32* flags)
{
    if (self && self->ft)
    {
        return self->ft->GetElementAt(self, index, name, value, valueExists, type, referenceClass, qualifierSet, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Class_GetClassQualifierSet(
        _In_ const MI_Class* self,
        _Out_opt_ MI_QualifierSet *qualifierSet
        )
{
    if (self && self->ft)
    {
        return self->ft->GetClassQualifierSet(self, qualifierSet);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Class_GetMethodCount(
        _In_ const MI_Class* self,
        _Out_ MI_Uint32* count)
{
    if (self && self->ft)
    {
        return self->ft->GetMethodCount(self, count);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Class_GetMethodAt(
        _In_ const MI_Class *self,
        MI_Uint32 index,
        _Outptr_result_z_ const MI_Char **name,
        _Out_opt_ MI_QualifierSet *qualifierSet,
        _Out_opt_ MI_ParameterSet *parameterSet)
{
    if (self && self->ft)
    {
        return self->ft->GetMethodAt(self, index, name, qualifierSet, parameterSet);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Class_GetMethod(
        _In_ const MI_Class *self,
        _In_z_ const MI_Char *name,
        _Out_opt_ MI_QualifierSet *qualifierSet,
        _Out_opt_ MI_ParameterSet *parameterSet,
        _Out_opt_ MI_Uint32 *index)
{
    if (self && self->ft)
    {
        return self->ft->GetMethod(self, name, qualifierSet, parameterSet, index);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Class_GetParentClassName(
        _In_ const MI_Class *self,
        _Outptr_result_maybenull_z_ const MI_Char **name)
{
    if (self && self->ft)
    {
        return self->ft->GetParentClassName(self, name);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Class_GetParentClass(
        _In_ const MI_Class *self,
        _Outptr_ MI_Class **parentClass)
{
    if (self && self->ft)
    {
        return self->ft->GetParentClass(self, parentClass);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Class_Delete(
        _Inout_ MI_Class* self)
{
    if (self && self->ft)
    {
        return self->ft->Delete(self);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_Class_Clone(
    _In_ const MI_Class* self,
    _Outptr_ MI_Class** newClass)
{
    if (self && self->ft)
    {
        return self->ft->Clone(self, newClass);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_ParameterSet_GetMethodReturnType(
    _In_ const MI_ParameterSet *self,
    _Out_ MI_Type *returnType,
    _Out_ MI_QualifierSet *qualifierSet)
{
    if (self && self->ft)
    {
        return self->ft->GetMethodReturnType(self, returnType, qualifierSet);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_ParameterSet_GetParameterCount(
    _In_ const MI_ParameterSet *self,
    _Out_ MI_Uint32 *count)
{
    if (self && self->ft)
    {
        return self->ft->GetParameterCount(self, count);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_ParameterSet_GetParameterAt(
    _In_ const MI_ParameterSet *self,
    MI_Uint32 index,
    _Outptr_result_z_ const MI_Char **name,
    _Out_ MI_Type *parameterType,
    _Outptr_opt_result_maybenull_z_ MI_Char **referenceClass,
    _Out_ MI_QualifierSet *qualifierSet)
{
    if (self && self->ft)
    {
        return self->ft->GetParameterAt(self, index, name, parameterType, referenceClass, qualifierSet);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_ParameterSet_GetParameter(
    _In_ const MI_ParameterSet *self,
    _In_z_ const MI_Char *name,
    _Out_ MI_Type *parameterType,
    _Outptr_opt_result_maybenull_z_ MI_Char **referenceClass,
    _Out_ MI_QualifierSet *qualifierSet,
    _Out_ MI_Uint32 *index)
{
    if (self && self->ft)
    {
        return self->ft->GetParameter(self, name, parameterType, referenceClass, qualifierSet, index);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_QualifierSet_GetQualifierCount(
    _In_ const MI_QualifierSet *self,
    _Out_ MI_Uint32 *count)
{
    if (self && self->ft)
    {
        return self->ft->GetQualifierCount(self, count);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_QualifierSet_GetQualifierAt(
    _In_ const MI_QualifierSet *self,
    MI_Uint32 index,
    _Outptr_result_z_ const MI_Char **name,
    _Out_ MI_Type *qualifierType,
    _Out_ MI_Uint32 *qualifierFlags,
    _Out_ MI_Value *qualifierValue)
{
    if (self && self->ft)
    {
        return self->ft->GetQualifierAt(self, index, name, qualifierType, qualifierFlags, qualifierValue);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_QualifierSet_GetQualifier(
    _In_ const MI_QualifierSet *self,
    _In_z_ const MI_Char *name,
    _Out_ MI_Type *qualifierType,
    _Out_ MI_Uint32 *qualifierFlags,
    _Out_ MI_Value *qualifierValue,
    _Out_ MI_Uint32 *index)
{
    if (self && self->ft)
    {
        return self->ft->GetQualifier(self, name, qualifierType, qualifierFlags, qualifierValue, index);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_SetMaximumLatency(
    _Inout_ MI_SubscriptionDeliveryOptions *self,
    _In_ MI_Interval *value)
{
    if (self && self->ft)
    {
        return self->ft->SetInterval(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_SET_MAXIMUM_LATENCY"), value, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetMaximumLatency(
    _In_ MI_SubscriptionDeliveryOptions *self,
    _Out_ MI_Interval *value)
{
    if (self && self->ft)
    {
        return self->ft->GetInterval(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_SET_MAXIMUM_LATENCY"), value, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_SetHeartbeatInterval(
    _Inout_ MI_SubscriptionDeliveryOptions *self,
    _In_ MI_Interval *value)
{
    if (self && self->ft)
    {
        return self->ft->SetInterval(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_SET_HEARTBEAT_INTERVAL"), value, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetHeartbeatInterval(
    _In_ MI_SubscriptionDeliveryOptions *self,
    _Out_ MI_Interval *value)
{
    if (self && self->ft)
    {
        return self->ft->GetInterval(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_SET_HEARTBEAT_INTERVAL"), value, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_SetExpirationTime(
    _Inout_ MI_SubscriptionDeliveryOptions *self,
    _In_ MI_Datetime *value)
{
    if (self && self->ft)
    {
        return self->ft->SetDateTime(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_SET_EXPIRATION_TIME"), value, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetExpirationTime(
    _Inout_ MI_SubscriptionDeliveryOptions *self,
    _Out_ MI_Datetime *value)
{
    if (self && self->ft)
    {
        return self->ft->GetDateTime(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_SET_EXPIRATION_TIME"), value, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_SetBookmark(
    _Inout_ MI_SubscriptionDeliveryOptions *self,
    _In_z_ const MI_Char *value)
{
    if (self && self->ft)
    {
        return self->ft->SetString(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_SET_BOOKMARK"), value, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetBookmark(
    _In_ MI_SubscriptionDeliveryOptions *self,
    _Outptr_result_z_ const MI_Char **value)
{
    if (self && self->ft)
    {
        return self->ft->GetString(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_SET_BOOKMARK"), value, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_SetDeliveryDestination(
    _Inout_ MI_SubscriptionDeliveryOptions *self,
    _In_z_ const MI_Char *value)
{
    if (self && self->ft)
    {
        return self->ft->SetString(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_SET_DELIVERY_DESTINATION"), value, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetDeliveryDestination(
    _In_ MI_SubscriptionDeliveryOptions *self,
    _Outptr_result_z_ const MI_Char **value)
{
    if (self && self->ft)
    {
        return self->ft->GetString(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_SET_DELIVERY_DESTINATION"), value, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_SetDeliveryPortNumber(
    _Inout_ MI_SubscriptionDeliveryOptions *self,
    _In_ MI_Uint32 value)
{
    if (self && self->ft)
    {
        return self->ft->SetNumber(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_SET_DELIVERY_PORT_NUMBER"), value, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetDeliveryPortNumber(
    _In_ MI_SubscriptionDeliveryOptions *self,
    _Out_ MI_Uint32 *value)
{
    if (self && self->ft)
    {
        return self->ft->GetNumber(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_SET_DELIVERY_PORT_NUMBER"), value, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_AddDeliveryCredentials(
    _Inout_ MI_SubscriptionDeliveryOptions *self,
    _In_ const MI_UserCredentials *value)
{
    if (self && self->ft)
    {
        return self->ft->AddCredentials(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_ADD_DELIVERY_CREDENTIALS"), value, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_SetDeliveryRetryInterval(
    _Inout_ MI_SubscriptionDeliveryOptions *self,
    _In_ const MI_Interval *value)
{
    if (self && self->ft)
    {
        return self->ft->SetInterval(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_SET_DELIVERY_RETRY_INTERVAL"), value, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetDeliveryRetryInterval(
    _In_ MI_SubscriptionDeliveryOptions *self,
    _Out_ MI_Interval *value)
{
    if (self && self->ft)
    {
        return self->ft->GetInterval(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_SET_DELIVERY_RETRY_INTERVAL"), value, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_SetDeliveryRetryAttempts(
    _Inout_ MI_SubscriptionDeliveryOptions *self,
    _In_ MI_Uint32 value)
{
    if (self && self->ft)
    {
        return self->ft->SetNumber(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_SET_DELIVERY_RETRY_ATTEMPTS"), value, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetDeliveryRetryAttempts(
    _In_ MI_SubscriptionDeliveryOptions *self,
    _Out_ MI_Uint32 *value)
{
    if (self && self->ft)
    {
        return self->ft->GetNumber(self, MI_T("__MI_SUBSCRIPTIONDELIVERYOPTIONS_SET_DELIVERY_RETRY_ATTEMPTS"), value, 0, 0);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_Delete(
        _Inout_ MI_SubscriptionDeliveryOptions* self)
{
    if (self && self->ft)
    {
        return self->ft->Delete(self);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_SetString(
    _Inout_ MI_SubscriptionDeliveryOptions *self,
    _In_z_ const MI_Char *optionName,
    _In_z_ const MI_Char *value,
            MI_Uint32 flags)
{
    if (self && self->ft)
    {
        return self->ft->SetString(self, optionName, value, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_SetNumber(
    _Inout_ MI_SubscriptionDeliveryOptions *self,
    _In_z_ const MI_Char *optionName,
    _In_ MI_Uint32 value,
            MI_Uint32 flags)
{
    if (self && self->ft)
    {
        return self->ft->SetNumber(self, optionName, value, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_SetDateTime(
    _Inout_ MI_SubscriptionDeliveryOptions *self,
    _In_z_ const MI_Char *optionName,
    _In_ const MI_Datetime *value,
            MI_Uint32 flags)
{
    if (self && self->ft)
    {
        return self->ft->SetDateTime(self, optionName, value, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_SetInterval(
    _Inout_ MI_SubscriptionDeliveryOptions *self,
    _In_z_ const MI_Char *optionName,
    _In_ const MI_Interval *value,
            MI_Uint32 flags)
{
    if (self && self->ft)
    {
        return self->ft->SetInterval(self, optionName, value, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetString(
    _In_ MI_SubscriptionDeliveryOptions *self,
    _In_z_ const MI_Char *optionName,
    _Outptr_result_z_ const MI_Char **value,
    _Out_opt_ MI_Uint32 *index,
    _Out_opt_ MI_Uint32 *flags)
{
    if (self && self->ft)
    {
        return self->ft->GetString(self, optionName, value, index, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetNumber(
    _Inout_ MI_SubscriptionDeliveryOptions *self,
    _In_z_ const MI_Char *optionName,
    _Out_ MI_Uint32 *value,
    _Out_opt_ MI_Uint32 *index,
    _Out_opt_ MI_Uint32 *flags)
{
    if (self && self->ft)
    {
        return self->ft->GetNumber(self, optionName, value, index, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetDateTime(
    _In_ MI_SubscriptionDeliveryOptions *self,
    _In_z_ const MI_Char *optionName,
    _Out_ MI_Datetime *value,
    _Out_opt_ MI_Uint32 *index,
    _Out_opt_ MI_Uint32 *flags)
{
    if (self && self->ft)
    {
        return self->ft->GetDateTime(self, optionName, value, index, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetInterval(
    _In_ MI_SubscriptionDeliveryOptions *self,
    _In_z_ const MI_Char *optionName,
    _Out_ MI_Interval *value,
    _Out_opt_ MI_Uint32 *index,
    _Out_opt_ MI_Uint32 *flags)
{
    if (self && self->ft)
    {
        return self->ft->GetInterval(self, optionName, value, index, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetOptionCount(
    _In_ MI_SubscriptionDeliveryOptions *self,
    _Out_opt_ MI_Uint32 *count)
{
    if (self && self->ft)
    {
        return self->ft->GetOptionCount(self, count);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetOptionAt(
    _In_ MI_SubscriptionDeliveryOptions *self,
    MI_Uint32 index,
    _Outptr_result_z_ const MI_Char **optionName,
    _Out_ MI_Value *value,
    _Out_ MI_Type *type,
    _Out_opt_ MI_Uint32 *flags)
{
    if (self && self->ft)
    {
        return self->ft->GetOptionAt(self, index, optionName, value, type, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetOption(
    _In_ MI_SubscriptionDeliveryOptions *self,
    _In_z_ const MI_Char *optionName,
    _Out_ MI_Value *value,
    _Out_ MI_Type *type,
    _Out_opt_ MI_Uint32 *index,
    _Out_opt_ MI_Uint32 *flags)
{
    if (self && self->ft)
    {
        return self->ft->GetOption(self, optionName, value, type, index, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetCredentialsCount(
    _In_ MI_SubscriptionDeliveryOptions *self,
    _Out_ MI_Uint32 *count)
{
    if (self && self->ft)
    {
        return self->ft->GetCredentialsCount(self, count);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetCredentialsAt(
    _In_ MI_SubscriptionDeliveryOptions *self,
    MI_Uint32 index,
    _Outptr_result_z_ const MI_Char **optionName,
    _Out_ MI_UserCredentials *credentials,
    _Out_opt_ MI_Uint32 *flags)
{
    if (self && self->ft)
    {
        return self->ft->GetCredentialsAt(self, index, optionName, credentials, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_SubscriptionDeliveryOptions_GetCredentialsPasswordAt(
    _In_ MI_SubscriptionDeliveryOptions *self,
    MI_Uint32 index,
    _Outptr_result_z_ const MI_Char **optionName,
    _Out_writes_to_opt_(bufferLength, *passwordLength) MI_Char *password,
    _In_ MI_Uint32 bufferLength,
    _Out_ MI_Uint32 *passwordLength,
    _Out_opt_ MI_Uint32 *flags)
{
    if (self && self->ft)
    {
        return self->ft->GetCredentialsPasswordAt(self, index, optionName, password, bufferLength, passwordLength, flags);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_INLINE_CALL MI_SubscriptionDeliveryOptions_Clone(
    _In_ const MI_SubscriptionDeliveryOptions* self,
    _Out_ MI_SubscriptionDeliveryOptions* newSubscriptionDeliveryOptions)
{
    if (self && self->ft)
    {
        return self->ft->Clone(self, newSubscriptionDeliveryOptions);
    }
    else
    {
        return MI_RESULT_INVALID_PARAMETER;
    }
}
MI_INLINE MI_Result MI_Serializer_Close(
    _Inout_ MI_Serializer *serializer)
{
    return mi_clientFT->serializerFT->Close(serializer);
}
MI_INLINE MI_Result MI_Serializer_SerializeClass(
    _Inout_ MI_Serializer *serializer,
    MI_Uint32 flags,
    _In_ const MI_Class *classObject,
   _Out_writes_bytes_(clientBufferLength) MI_Uint8 *clientBuffer,
    MI_Uint32 clientBufferLength,
   _Inout_ MI_Uint32 *clientBufferNeeded)
{
    return mi_clientFT->serializerFT->SerializeClass(serializer, flags, classObject, clientBuffer, clientBufferLength, clientBufferNeeded);
}
MI_INLINE MI_Result MI_Serializer_SerializeInstance(
   _Inout_ MI_Serializer *serializer,
   MI_Uint32 flags,
   _In_ const MI_Instance *instanceObject,
   _Out_writes_bytes_(clientBufferLength) MI_Uint8 *clientBuffer,
    MI_Uint32 clientBufferLength,
   _Inout_ MI_Uint32 *clientBufferNeeded)
{
    return mi_clientFT->serializerFT->SerializeInstance(serializer, flags, instanceObject, clientBuffer, clientBufferLength, clientBufferNeeded);
}
MI_INLINE MI_Result MI_Deserializer_Close(
    _Inout_ MI_Deserializer *deserializer)
{
    const MI_ClientFT_V1 *clientFT = mi_clientFT;
    const MI_DeserializerFT *deserializerFT = clientFT->deserializerFT;
    return deserializerFT->Close(deserializer);
}
MI_INLINE MI_Result MI_Deserializer_DeserializeClass(
    _Inout_ MI_Deserializer *deserializer,
    MI_Uint32 flags,
    _In_reads_(serializedBufferLength) MI_Uint8 *serializedBuffer,
    MI_Uint32 serializedBufferLength,
    _In_opt_ MI_Class *parentClass,
    _In_opt_z_ const MI_Char *serverName,
    _In_opt_z_ const MI_Char *namespaceName,
    _In_opt_ MI_Deserializer_ClassObjectNeeded classObjectNeeded,
    _In_opt_ void *classObjectNeededContext,
    _Out_opt_ MI_Uint32 *serializedBufferRead,
    _Outptr_opt_result_maybenull_ MI_Class **classObject,
    _Outptr_opt_result_maybenull_ MI_Instance **cimErrorDetails)
{
    return mi_clientFT->deserializerFT->DeserializeClass(deserializer, flags, serializedBuffer, serializedBufferLength, parentClass, serverName, namespaceName, classObjectNeeded, classObjectNeededContext, serializedBufferRead, classObject, cimErrorDetails);
}
MI_INLINE MI_Result MI_Deserializer_Class_GetClassName(
    _Inout_ MI_Deserializer *deserializer,
    _In_reads_(serializedBufferLength) MI_Uint8 *serializedBuffer,
    MI_Uint32 serializedBufferLength,
    _Out_writes_opt_(*classNameLength) MI_Char *className,
    _Inout_ MI_Uint32 *classNameLength,
    _Outptr_opt_result_maybenull_ MI_Instance **cimErrorDetails)
{
    return mi_clientFT->deserializerFT->Class_GetClassName(deserializer, serializedBuffer, serializedBufferLength, className, classNameLength, cimErrorDetails);
}
MI_INLINE MI_Result MI_Deserializer_Class_GetParentClassName(
    _Inout_ MI_Deserializer *deserializer,
    _In_reads_(serializedBufferLength) MI_Uint8 *serializedBuffer,
    MI_Uint32 serializedBufferLength,
    _Out_writes_opt_(*parentClassNameLength) MI_Char *parentClassName,
    _Inout_ MI_Uint32 *parentClassNameLength,
    _Outptr_opt_result_maybenull_ MI_Instance **cimErrorDetails)
{
    return mi_clientFT->deserializerFT->Class_GetParentClassName(deserializer, serializedBuffer, serializedBufferLength, parentClassName, parentClassNameLength, cimErrorDetails);
}
MI_INLINE MI_Result MI_Deserializer_DeserializeInstance(
    _Inout_ MI_Deserializer *deserializer,
    MI_Uint32 flags,
    _In_reads_(serializedBufferLength) MI_Uint8 *serializedBuffer,
    MI_Uint32 serializedBufferLength,
    _In_reads_opt_(numberClassObjects) MI_Class **classObjects,
    MI_Uint32 numberClassObjects,
    _In_opt_ MI_Deserializer_ClassObjectNeeded classObjectNeeded,
    _In_opt_ void *classObjectNeededContext,
    _Out_opt_ MI_Uint32 *serializedBufferRead,
    _Outptr_opt_result_maybenull_ MI_Instance **instanceObject,
    _Outptr_opt_result_maybenull_ MI_Instance **cimErrorDetails)
{
    return mi_clientFT->deserializerFT->DeserializeInstance(deserializer, flags, serializedBuffer, serializedBufferLength, classObjects, numberClassObjects, classObjectNeeded, classObjectNeededContext, serializedBufferRead, instanceObject, cimErrorDetails);
}
MI_INLINE MI_Result MI_Deserializer_Instance_GetClassName(
    _Inout_ MI_Deserializer *deserializer,
    _In_reads_(serializedBufferLength) MI_Uint8 *serializedBuffer,
    MI_Uint32 serializedBufferLength,
    _Out_writes_opt_(*classNameLength) MI_Char *className,
    _Inout_ MI_Uint32 *classNameLength,
    _Outptr_opt_result_maybenull_ MI_Instance **cimErrorDetails)
{
    return mi_clientFT->deserializerFT->Instance_GetClassName(deserializer, serializedBuffer, serializedBufferLength, className, classNameLength, cimErrorDetails);
}
MI_INLINE MI_ErrorCategory MI_Utilities_MapErrorToMiErrorCategory(
        _In_z_ MI_Char *errorType,
        MI_Uint32 error)
{
    return mi_clientFT->utilitiesFT->MapErrorToMiErrorCategory(errorType, error);
}
MI_INLINE MI_Result MI_Utilities_CimErrorFromErrorCode(
    MI_Uint32 error,
    _In_z_ const MI_Char *errorType,
    _In_z_ const MI_Char* errorMessage,
    _Outptr_ MI_Instance **cimError)
{
    return mi_clientFT->utilitiesFT->CimErrorFromErrorCode(error, errorType, errorMessage, cimError);
}
}
 #pragma prefast(pop)
#endif
#pragma endregion
