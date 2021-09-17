       
#error "You should include <jsrt.h> instead of <jsrt9.h> or <chakrart.h>."
#include <activdbg.h>
#include <activprof.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
    typedef _Return_type_success_(return == 0) enum JsErrorCode : unsigned int
    {
        JsNoError = 0,
        JsErrorCategoryUsage = 0x10000,
        JsErrorInvalidArgument,
        JsErrorNullArgument,
        JsErrorNoCurrentContext,
        JsErrorInExceptionState,
        JsErrorNotImplemented,
        JsErrorWrongThread,
        JsErrorRuntimeInUse,
        JsErrorBadSerializedScript,
        JsErrorInDisabledState,
        JsErrorCannotDisableExecution,
        JsErrorHeapEnumInProgress,
        JsErrorArgumentNotObject,
        JsErrorInProfileCallback,
        JsErrorInThreadServiceCallback,
        JsErrorCannotSerializeDebugScript,
        JsErrorAlreadyDebuggingContext,
        JsErrorAlreadyProfilingContext,
        JsErrorIdleNotEnabled,
        JsErrorCategoryEngine = 0x20000,
        JsErrorOutOfMemory,
        JsErrorCategoryScript = 0x30000,
        JsErrorScriptException,
        JsErrorScriptCompile,
        JsErrorScriptTerminated,
        JsErrorScriptEvalDisabled,
        JsErrorCategoryFatal = 0x40000,
        JsErrorFatal,
    }JsErrorCode;
    typedef void *JsRuntimeHandle;
    const JsRuntimeHandle JS_INVALID_RUNTIME_HANDLE = NULL;
    typedef void *JsRef;
    const JsRef JS_INVALID_REFERENCE = NULL;
    typedef JsRef JsContextRef;
    typedef JsRef JsValueRef;
    typedef DWORD_PTR JsSourceContext;
    const JsSourceContext JS_SOURCE_CONTEXT_NONE = (JsSourceContext)-1;
    typedef JsRef JsPropertyIdRef;
    typedef enum JsRuntimeAttributes
    {
        JsRuntimeAttributeNone = 0x00000000,
        JsRuntimeAttributeDisableBackgroundWork = 0x00000001,
        JsRuntimeAttributeAllowScriptInterrupt = 0x00000002,
        JsRuntimeAttributeEnableIdleProcessing = 0x00000004,
        JsRuntimeAttributeDisableNativeCodeGeneration = 0x00000008,
        JsRuntimeAttributeDisableEval = 0x00000010,
    }JsRuntimeAttributes;
    typedef enum JsMemoryEventType
    {
        JsMemoryAllocate = 0,
        JsMemoryFree = 1,
        JsMemoryFailure = 2
    }JsMemoryEventType;
    typedef bool (CALLBACK * JsMemoryAllocationCallback)(_In_opt_ void *callbackState, _In_ JsMemoryEventType allocationEvent, _In_ size_t allocationSize);
    typedef void (CALLBACK *JsBeforeCollectCallback)(_In_opt_ void *callbackState);
    typedef void (CALLBACK *JsBackgroundWorkItemCallback)(_In_opt_ void *callbackState);
    typedef bool (CALLBACK *JsThreadServiceCallback)(_In_ JsBackgroundWorkItemCallback callback, _In_opt_ void *callbackState);
    typedef enum JsRuntimeVersion
    {
        JsRuntimeVersion10 = 0,
        JsRuntimeVersion11 = 1,
    }JsRuntimeVersion;
    __declspec(deprecated("JsRuntimeVersionEdge is frozen at runtime version 11 when including the jscript9-mode JavaScript Runtime header.  To opt into true edge-mode, define USE_EDGEMODE_JSRT before including jsrt.h.  For more information, go to https://go.microsoft.com/fwlink/?LinkId=522493")) const JsRuntimeVersion JsRuntimeVersionEdge = (JsRuntimeVersion)-1;
    STDAPI_(JsErrorCode)
        JsCreateRuntime(
        _In_ JsRuntimeAttributes attributes,
        _In_ JsRuntimeVersion runtimeVersion,
        _In_opt_ JsThreadServiceCallback threadService,
        _Out_ JsRuntimeHandle *runtime);
    STDAPI_(JsErrorCode)
        JsCollectGarbage(
        _In_ JsRuntimeHandle runtime);
    STDAPI_(JsErrorCode)
        JsDisposeRuntime(
        _In_ JsRuntimeHandle runtime);
    STDAPI_(JsErrorCode)
        JsGetRuntimeMemoryUsage(
        _In_ JsRuntimeHandle runtime,
        _Out_ size_t *memoryUsage);
    STDAPI_(JsErrorCode)
        JsGetRuntimeMemoryLimit(
        _In_ JsRuntimeHandle runtime,
        _Out_ size_t *memoryLimit);
    STDAPI_(JsErrorCode)
        JsSetRuntimeMemoryLimit(
        _In_ JsRuntimeHandle runtime,
        _In_ size_t memoryLimit);
    STDAPI_(JsErrorCode)
        JsSetRuntimeMemoryAllocationCallback(
        _In_ JsRuntimeHandle runtime,
        _In_opt_ void *callbackState,
        _In_ JsMemoryAllocationCallback allocationCallback);
    STDAPI_(JsErrorCode)
        JsSetRuntimeBeforeCollectCallback(
        _In_ JsRuntimeHandle runtime,
        _In_opt_ void *callbackState,
        _In_ JsBeforeCollectCallback beforeCollectCallback);
    STDAPI_(JsErrorCode)
        JsAddRef(
        _In_ JsRef ref,
        _Out_opt_ unsigned int *count);
    STDAPI_(JsErrorCode)
        JsRelease(
        _In_ JsRef ref,
        _Out_opt_ unsigned int *count);
    STDAPI_(JsErrorCode)
        JsCreateContext(
        _In_ JsRuntimeHandle runtime,
        _In_ IDebugApplication *debugApplication,
        _Out_ JsContextRef *newContext);
    STDAPI_(JsErrorCode)
        JsGetCurrentContext(
        _Out_ JsContextRef *currentContext);
    STDAPI_(JsErrorCode)
        JsSetCurrentContext(
        _In_ JsContextRef context);
    STDAPI_(JsErrorCode)
        JsGetRuntime(
        _In_ JsContextRef context,
        _Out_ JsRuntimeHandle *runtime);
    STDAPI_(JsErrorCode)
        JsStartDebugging(
        _In_ IDebugApplication *debugApplication);
    STDAPI_(JsErrorCode)
        JsIdle(
        _Out_opt_ unsigned int *nextIdleTick);
    STDAPI_(JsErrorCode)
        JsParseScript(
        _In_z_ const wchar_t *script,
        _In_ JsSourceContext sourceContext,
        _In_z_ const wchar_t *sourceUrl,
        _Out_ JsValueRef *result);
    STDAPI_(JsErrorCode)
        JsRunScript(
        _In_z_ const wchar_t *script,
        _In_ JsSourceContext sourceContext,
        _In_z_ const wchar_t *sourceUrl,
        _Out_ JsValueRef *result);
    STDAPI_(JsErrorCode)
        JsSerializeScript(
        _In_z_ const wchar_t *script,
        _Out_writes_to_opt_(*bufferSize, *bufferSize) BYTE *buffer,
        _Inout_ unsigned long *bufferSize);
    STDAPI_(JsErrorCode)
        JsParseSerializedScript(
        _In_z_ const wchar_t *script,
        _In_ BYTE *buffer,
        _In_ JsSourceContext sourceContext,
        _In_z_ const wchar_t *sourceUrl,
        _Out_ JsValueRef *result);
    STDAPI_(JsErrorCode)
        JsRunSerializedScript(
        _In_z_ const wchar_t *script,
        _In_ BYTE *buffer,
        _In_ JsSourceContext sourceContext,
        _In_z_ const wchar_t *sourceUrl,
        _Out_ JsValueRef *result);
    STDAPI_(JsErrorCode)
        JsGetPropertyIdFromName(
        _In_z_ const wchar_t *name,
        _Out_ JsPropertyIdRef *propertyId);
    STDAPI_(JsErrorCode)
        JsGetPropertyNameFromId(
        _In_ JsPropertyIdRef propertyId,
        _Outptr_result_z_ const wchar_t **name);
    STDAPI_(JsErrorCode)
        JsGetUndefinedValue(
        _Out_ JsValueRef *undefinedValue);
    STDAPI_(JsErrorCode)
        JsGetNullValue(
        _Out_ JsValueRef *nullValue);
    STDAPI_(JsErrorCode)
        JsGetTrueValue(
        _Out_ JsValueRef *trueValue);
    STDAPI_(JsErrorCode)
        JsGetFalseValue(
        _Out_ JsValueRef *falseValue);
    STDAPI_(JsErrorCode)
        JsBoolToBoolean(
        _In_ bool value,
        _Out_ JsValueRef *booleanValue);
    STDAPI_(JsErrorCode)
        JsBooleanToBool(
        _In_ JsValueRef value,
        _Out_ bool *boolValue);
    STDAPI_(JsErrorCode)
        JsConvertValueToBoolean(
        _In_ JsValueRef value,
        _Out_ JsValueRef *booleanValue);
    typedef enum JsValueType
    {
        JsUndefined = 0,
        JsNull = 1,
        JsNumber = 2,
        JsString = 3,
        JsBoolean = 4,
        JsObject = 5,
        JsFunction = 6,
        JsError = 7,
        JsArray = 8,
    }JsValueType;
    STDAPI_(JsErrorCode)
        JsGetValueType(
        _In_ JsValueRef value,
        _Out_ JsValueType *type);
    STDAPI_(JsErrorCode)
        JsDoubleToNumber(
        _In_ double doubleValue,
        _Out_ JsValueRef *value);
    STDAPI_(JsErrorCode)
        JsIntToNumber(
        _In_ int intValue,
        _Out_ JsValueRef *value);
    STDAPI_(JsErrorCode)
        JsNumberToDouble(
        _In_ JsValueRef value,
        _Out_ double *doubleValue);
    STDAPI_(JsErrorCode)
        JsConvertValueToNumber(
        _In_ JsValueRef value,
        _Out_ JsValueRef *numberValue);
    STDAPI_(JsErrorCode)
        JsGetStringLength(
        _In_ JsValueRef stringValue,
        _Out_ int *length);
    STDAPI_(JsErrorCode)
        JsPointerToString(
        _In_reads_(stringLength) const wchar_t *stringValue,
        _In_ size_t stringLength,
        _Out_ JsValueRef *value);
    STDAPI_(JsErrorCode)
        JsStringToPointer(
        _In_ JsValueRef value,
        _Outptr_result_buffer_(*stringLength) const wchar_t **stringValue,
        _Out_ size_t *stringLength);
    STDAPI_(JsErrorCode)
        JsConvertValueToString(
        _In_ JsValueRef value,
        _Out_ JsValueRef *stringValue);
    STDAPI_(JsErrorCode)
        JsVariantToValue(
        _In_ VARIANT *variant,
        _Out_ JsValueRef *value);
    STDAPI_(JsErrorCode)
        JsValueToVariant(
        _In_ JsValueRef object,
        _Out_ VARIANT *variant);
    STDAPI_(JsErrorCode)
        JsGetGlobalObject(
        _Out_ JsValueRef *globalObject);
    STDAPI_(JsErrorCode)
        JsCreateObject(
        _Out_ JsValueRef *object);
    typedef void (CALLBACK *JsFinalizeCallback)(_In_opt_ void *data);
    STDAPI_(JsErrorCode)
        JsCreateExternalObject(
        _In_opt_ void *data,
        _In_opt_ JsFinalizeCallback finalizeCallback,
        _Out_ JsValueRef *object);
    STDAPI_(JsErrorCode)
        JsConvertValueToObject(
        _In_ JsValueRef value,
        _Out_ JsValueRef *object);
    STDAPI_(JsErrorCode)
        JsGetPrototype(
        _In_ JsValueRef object,
        _Out_ JsValueRef *prototypeObject);
    STDAPI_(JsErrorCode)
        JsSetPrototype(
        _In_ JsValueRef object,
        _In_ JsValueRef prototypeObject);
    STDAPI_(JsErrorCode)
        JsGetExtensionAllowed(
        _In_ JsValueRef object,
        _Out_ bool *value);
    STDAPI_(JsErrorCode)
        JsPreventExtension(
        _In_ JsValueRef object);
    STDAPI_(JsErrorCode)
        JsGetProperty(
        _In_ JsValueRef object,
        _In_ JsPropertyIdRef propertyId,
        _Out_ JsValueRef *value);
    STDAPI_(JsErrorCode)
        JsGetOwnPropertyDescriptor(
        _In_ JsValueRef object,
        _In_ JsPropertyIdRef propertyId,
        _Out_ JsValueRef *propertyDescriptor);
    STDAPI_(JsErrorCode)
        JsGetOwnPropertyNames(
        _In_ JsValueRef object,
        _Out_ JsValueRef *propertyNames);
    STDAPI_(JsErrorCode)
        JsSetProperty(
        _In_ JsValueRef object,
        _In_ JsPropertyIdRef propertyId,
        _In_ JsValueRef value,
        _In_ bool useStrictRules);
    STDAPI_(JsErrorCode)
        JsHasProperty(
        _In_ JsValueRef object,
        _In_ JsPropertyIdRef propertyId,
        _Out_ bool *hasProperty);
    STDAPI_(JsErrorCode)
        JsDeleteProperty(
        _In_ JsValueRef object,
        _In_ JsPropertyIdRef propertyId,
        _In_ bool useStrictRules,
        _Out_ JsValueRef *result);
    STDAPI_(JsErrorCode)
        JsDefineProperty(
        _In_ JsValueRef object,
        _In_ JsPropertyIdRef propertyId,
        _In_ JsValueRef propertyDescriptor,
        _Out_ bool *result);
    STDAPI_(JsErrorCode)
        JsHasIndexedProperty(
        _In_ JsValueRef object,
        _In_ JsValueRef index,
        _Out_ bool *result);
    STDAPI_(JsErrorCode)
        JsGetIndexedProperty(
        _In_ JsValueRef object,
        _In_ JsValueRef index,
        _Out_ JsValueRef *result);
    STDAPI_(JsErrorCode)
        JsSetIndexedProperty(
        _In_ JsValueRef object,
        _In_ JsValueRef index,
        _In_ JsValueRef value);
    STDAPI_(JsErrorCode)
        JsDeleteIndexedProperty(
        _In_ JsValueRef object,
        _In_ JsValueRef index);
    STDAPI_(JsErrorCode)
        JsEquals(
        _In_ JsValueRef object1,
        _In_ JsValueRef object2,
        _Out_ bool *result);
    STDAPI_(JsErrorCode)
        JsStrictEquals(
        _In_ JsValueRef object1,
        _In_ JsValueRef object2,
        _Out_ bool *result);
    STDAPI_(JsErrorCode)
        JsHasExternalData(
        _In_ JsValueRef object,
        _Out_ bool *value);
    STDAPI_(JsErrorCode)
        JsGetExternalData(
        _In_ JsValueRef object,
        _Out_ void **externalData);
    STDAPI_(JsErrorCode)
        JsSetExternalData(
        _In_ JsValueRef object,
        _In_opt_ void *externalData);
    STDAPI_(JsErrorCode)
        JsCreateArray(
        _In_ unsigned int length,
        _Out_ JsValueRef *result);
    STDAPI_(JsErrorCode)
        JsCallFunction(
        _In_ JsValueRef function,
        _In_reads_(argumentCount) JsValueRef *arguments,
        _In_ unsigned short argumentCount,
        _Out_opt_ JsValueRef *result);
    STDAPI_(JsErrorCode)
        JsConstructObject(
        _In_ JsValueRef function,
        _In_reads_(argumentCount) JsValueRef *arguments,
        _In_ unsigned short argumentCount,
        _Out_ JsValueRef *result);
    typedef _Ret_maybenull_ JsValueRef(CALLBACK * JsNativeFunction)(_In_ JsValueRef callee, _In_ bool isConstructCall, _In_ JsValueRef *arguments, _In_ unsigned short argumentCount, _In_opt_ void *callbackState);
    STDAPI_(JsErrorCode)
        JsCreateFunction(
        _In_ JsNativeFunction nativeFunction,
        _In_opt_ void *callbackState,
        _Out_ JsValueRef *function);
    STDAPI_(JsErrorCode)
        JsCreateError(
        _In_ JsValueRef message,
        _Out_ JsValueRef *error);
    STDAPI_(JsErrorCode)
        JsCreateRangeError(
        _In_ JsValueRef message,
        _Out_ JsValueRef *error);
    STDAPI_(JsErrorCode)
        JsCreateReferenceError(
        _In_ JsValueRef message,
        _Out_ JsValueRef *error);
    STDAPI_(JsErrorCode)
        JsCreateSyntaxError(
        _In_ JsValueRef message,
        _Out_ JsValueRef *error);
    STDAPI_(JsErrorCode)
        JsCreateTypeError(
        _In_ JsValueRef message,
        _Out_ JsValueRef *error);
    STDAPI_(JsErrorCode)
        JsCreateURIError(
        _In_ JsValueRef message,
        _Out_ JsValueRef *error);
    STDAPI_(JsErrorCode)
        JsHasException(
        _Out_ bool *hasException);
    STDAPI_(JsErrorCode)
        JsGetAndClearException(
        _Out_ JsValueRef *exception);
    STDAPI_(JsErrorCode)
        JsSetException(
        _In_ JsValueRef exception);
    STDAPI_(JsErrorCode)
        JsDisableRuntimeExecution(
        _In_ JsRuntimeHandle runtime);
    STDAPI_(JsErrorCode)
        JsEnableRuntimeExecution(
        _In_ JsRuntimeHandle runtime);
    STDAPI_(JsErrorCode)
        JsIsRuntimeExecutionDisabled(
        _In_ JsRuntimeHandle runtime,
        _Out_ bool *isDisabled);
    STDAPI_(JsErrorCode)
        JsStartProfiling(
        _In_ IActiveScriptProfilerCallback *callback,
        _In_ PROFILER_EVENT_MASK eventMask,
        _In_ unsigned long context);
    STDAPI_(JsErrorCode)
        JsStopProfiling(
        _In_ HRESULT reason);
    STDAPI_(JsErrorCode)
        JsEnumerateHeap(
        _Out_ IActiveScriptProfilerHeapEnum **enumerator);
    STDAPI_(JsErrorCode)
        JsIsEnumeratingHeap(
        _Out_ bool *isEnumeratingHeap);
#endif
#pragma endregion
