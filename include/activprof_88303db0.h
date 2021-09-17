#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IActiveScriptProfilerControl IActiveScriptProfilerControl;
typedef interface IActiveScriptProfilerControl2 IActiveScriptProfilerControl2;
typedef interface IActiveScriptProfilerHeapEnum IActiveScriptProfilerHeapEnum;
typedef interface IActiveScriptProfilerControl3 IActiveScriptProfilerControl3;
typedef interface IActiveScriptProfilerControl4 IActiveScriptProfilerControl4;
typedef interface IActiveScriptProfilerControl5 IActiveScriptProfilerControl5;
typedef interface IActiveScriptProfilerCallback IActiveScriptProfilerCallback;
typedef interface IActiveScriptProfilerCallback2 IActiveScriptProfilerCallback2;
typedef interface IActiveScriptProfilerCallback3 IActiveScriptProfilerCallback3;
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4201)
#pragma comment(lib,"uuid.lib")
const HRESULT ACTIVPROF_E_PROFILER_PRESENT = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0200);
const HRESULT ACTIVPROF_E_PROFILER_ABSENT = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0201);
const HRESULT ACTIVPROF_E_UNABLE_TO_APPLY_ACTION = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0202);
const ULONG PROFILER_HEAP_OBJECT_NAME_ID_UNAVAILABLE=(ULONG)-1;
DEFINE_GUID(IID_IActiveScriptProfilerHeapEnum, 0x32e4694e, 0xd37, 0x419b, 0xb9, 0x3d, 0xfa, 0x20, 0xde, 0xd6, 0xe8, 0xea);
DEFINE_GUID(IID_IActiveScriptProfilerControl3, 0xb403015, 0xf381, 0x4023, 0xa5, 0xd0, 0x6f, 0xed, 0x7, 0x6d, 0xe7, 0x16);
typedef
enum __MIDL___MIDL_itf_activprof_0000_0000_0001
    {
        PROFILER_SCRIPT_TYPE_USER = 0,
        PROFILER_SCRIPT_TYPE_DYNAMIC = ( PROFILER_SCRIPT_TYPE_USER + 1 ) ,
        PROFILER_SCRIPT_TYPE_NATIVE = ( PROFILER_SCRIPT_TYPE_DYNAMIC + 1 ) ,
        PROFILER_SCRIPT_TYPE_DOM = ( PROFILER_SCRIPT_TYPE_NATIVE + 1 )
    } PROFILER_SCRIPT_TYPE;
typedef
enum __MIDL___MIDL_itf_activprof_0000_0000_0002
    {
        PROFILER_EVENT_MASK_TRACE_SCRIPT_FUNCTION_CALL = 0x1,
        PROFILER_EVENT_MASK_TRACE_NATIVE_FUNCTION_CALL = 0x2,
        PROFILER_EVENT_MASK_TRACE_DOM_FUNCTION_CALL = 0x4,
        PROFILER_EVENT_MASK_TRACE_ALL = ( PROFILER_EVENT_MASK_TRACE_SCRIPT_FUNCTION_CALL | PROFILER_EVENT_MASK_TRACE_NATIVE_FUNCTION_CALL ) ,
        PROFILER_EVENT_MASK_TRACE_ALL_WITH_DOM = ( PROFILER_EVENT_MASK_TRACE_ALL | PROFILER_EVENT_MASK_TRACE_DOM_FUNCTION_CALL )
    } PROFILER_EVENT_MASK;
typedef LONG PROFILER_TOKEN;
extern RPC_IF_HANDLE __MIDL_itf_activprof_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activprof_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IActiveScriptProfilerControl;
    typedef struct IActiveScriptProfilerControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptProfilerControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptProfilerControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptProfilerControl * This);
        HRESULT ( STDMETHODCALLTYPE *StartProfiling )(
            __RPC__in IActiveScriptProfilerControl * This,
                       __RPC__in REFCLSID clsidProfilerObject,
                       DWORD dwEventMask,
                       DWORD dwContext);
        HRESULT ( STDMETHODCALLTYPE *SetProfilerEventMask )(
            __RPC__in IActiveScriptProfilerControl * This,
                       DWORD dwEventMask);
        HRESULT ( STDMETHODCALLTYPE *StopProfiling )(
            __RPC__in IActiveScriptProfilerControl * This,
                       HRESULT hrShutdownReason);
        END_INTERFACE
    } IActiveScriptProfilerControlVtbl;
    interface IActiveScriptProfilerControl
    {
        CONST_VTBL struct IActiveScriptProfilerControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartProfiling(This,clsidProfilerObject,dwEventMask,dwContext) )
    ( (This)->lpVtbl -> SetProfilerEventMask(This,dwEventMask) )
    ( (This)->lpVtbl -> StopProfiling(This,hrShutdownReason) )
EXTERN_C const IID IID_IActiveScriptProfilerControl2;
    typedef struct IActiveScriptProfilerControl2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptProfilerControl2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptProfilerControl2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptProfilerControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *StartProfiling )(
            __RPC__in IActiveScriptProfilerControl2 * This,
                       __RPC__in REFCLSID clsidProfilerObject,
                       DWORD dwEventMask,
                       DWORD dwContext);
        HRESULT ( STDMETHODCALLTYPE *SetProfilerEventMask )(
            __RPC__in IActiveScriptProfilerControl2 * This,
                       DWORD dwEventMask);
        HRESULT ( STDMETHODCALLTYPE *StopProfiling )(
            __RPC__in IActiveScriptProfilerControl2 * This,
                       HRESULT hrShutdownReason);
        HRESULT ( STDMETHODCALLTYPE *CompleteProfilerStart )(
            __RPC__in IActiveScriptProfilerControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *PrepareProfilerStop )(
            __RPC__in IActiveScriptProfilerControl2 * This);
        END_INTERFACE
    } IActiveScriptProfilerControl2Vtbl;
    interface IActiveScriptProfilerControl2
    {
        CONST_VTBL struct IActiveScriptProfilerControl2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartProfiling(This,clsidProfilerObject,dwEventMask,dwContext) )
    ( (This)->lpVtbl -> SetProfilerEventMask(This,dwEventMask) )
    ( (This)->lpVtbl -> StopProfiling(This,hrShutdownReason) )
    ( (This)->lpVtbl -> CompleteProfilerStart(This) )
    ( (This)->lpVtbl -> PrepareProfilerStop(This) )
typedef DWORD_PTR PROFILER_HEAP_OBJECT_ID;
typedef UINT PROFILER_HEAP_OBJECT_NAME_ID;
typedef void *PROFILER_EXTERNAL_OBJECT_ADDRESS;
typedef
enum __MIDL___MIDL_itf_activprof_0000_0002_0001
    {
        PROFILER_HEAP_OBJECT_FLAGS_NEW_OBJECT = 0x1,
        PROFILER_HEAP_OBJECT_FLAGS_IS_ROOT = 0x2,
        PROFILER_HEAP_OBJECT_FLAGS_SITE_CLOSED = 0x4,
        PROFILER_HEAP_OBJECT_FLAGS_EXTERNAL = 0x8,
        PROFILER_HEAP_OBJECT_FLAGS_EXTERNAL_UNKNOWN = 0x10,
        PROFILER_HEAP_OBJECT_FLAGS_EXTERNAL_DISPATCH = 0x20,
        PROFILER_HEAP_OBJECT_FLAGS_SIZE_APPROXIMATE = 0x40,
        PROFILER_HEAP_OBJECT_FLAGS_SIZE_UNAVAILABLE = 0x80,
        PROFILER_HEAP_OBJECT_FLAGS_NEW_STATE_UNAVAILABLE = 0x100,
        PROFILER_HEAP_OBJECT_FLAGS_WINRT_INSTANCE = 0x200,
        PROFILER_HEAP_OBJECT_FLAGS_WINRT_RUNTIMECLASS = 0x400,
        PROFILER_HEAP_OBJECT_FLAGS_WINRT_DELEGATE = 0x800,
        PROFILER_HEAP_OBJECT_FLAGS_WINRT_NAMESPACE = 0x1000
    } PROFILER_HEAP_OBJECT_FLAGS;
typedef
enum __MIDL___MIDL_itf_activprof_0000_0002_0002
    {
        PROFILER_HEAP_OBJECT_OPTIONAL_INFO_PROTOTYPE = 0x1,
        PROFILER_HEAP_OBJECT_OPTIONAL_INFO_FUNCTION_NAME = 0x2,
        PROFILER_HEAP_OBJECT_OPTIONAL_INFO_SCOPE_LIST = 0x3,
        PROFILER_HEAP_OBJECT_OPTIONAL_INFO_INTERNAL_PROPERTY = 0x4,
        PROFILER_HEAP_OBJECT_OPTIONAL_INFO_NAME_PROPERTIES = 0x5,
        PROFILER_HEAP_OBJECT_OPTIONAL_INFO_INDEX_PROPERTIES = 0x6,
        PROFILER_HEAP_OBJECT_OPTIONAL_INFO_ELEMENT_ATTRIBUTES_SIZE = 0x7,
        PROFILER_HEAP_OBJECT_OPTIONAL_INFO_ELEMENT_TEXT_CHILDREN_SIZE = 0x8,
        PROFILER_HEAP_OBJECT_OPTIONAL_INFO_RELATIONSHIPS = 0x9,
        PROFILER_HEAP_OBJECT_OPTIONAL_INFO_WINRTEVENTS = 0xa,
        PROFILER_HEAP_OBJECT_OPTIONAL_INFO_WEAKMAP_COLLECTION_LIST = 0xb,
        PROFILER_HEAP_OBJECT_OPTIONAL_INFO_MAP_COLLECTION_LIST = 0xc,
        PROFILER_HEAP_OBJECT_OPTIONAL_INFO_SET_COLLECTION_LIST = 0xd,
        PROFILER_HEAP_OBJECT_OPTIONAL_INFO_MAX_VALUE = PROFILER_HEAP_OBJECT_OPTIONAL_INFO_SET_COLLECTION_LIST
    } PROFILER_HEAP_OBJECT_OPTIONAL_INFO_TYPE;
typedef
enum __MIDL___MIDL_itf_activprof_0000_0002_0003
    {
        PROFILER_HEAP_OBJECT_RELATIONSHIP_FLAGS_NONE = 0,
        PROFILER_HEAP_OBJECT_RELATIONSHIP_FLAGS_IS_GET_ACCESSOR = 0x10000,
        PROFILER_HEAP_OBJECT_RELATIONSHIP_FLAGS_IS_SET_ACCESSOR = 0x20000,
        PROFILER_HEAP_OBJECT_RELATIONSHIP_FLAGS_LET_VARIABLE = 0x40000,
        PROFILER_HEAP_OBJECT_RELATIONSHIP_FLAGS_CONST_VARIABLE = 0x80000
    } PROFILER_HEAP_OBJECT_RELATIONSHIP_FLAGS;
typedef
enum __MIDL___MIDL_itf_activprof_0000_0002_0004
    {
        PROFILER_HEAP_ENUM_FLAGS_NONE = 0,
        PROFILER_HEAP_ENUM_FLAGS_STORE_RELATIONSHIP_FLAGS = 0x1,
        PROFILER_HEAP_ENUM_FLAGS_SUBSTRINGS = 0x2,
        PROFILER_HEAP_ENUM_FLAGS_RELATIONSHIP_SUBSTRINGS = ( PROFILER_HEAP_ENUM_FLAGS_STORE_RELATIONSHIP_FLAGS | PROFILER_HEAP_ENUM_FLAGS_SUBSTRINGS )
    } PROFILER_HEAP_ENUM_FLAGS;
typedef struct _PROFILER_HEAP_OBJECT_SCOPE_LIST
    {
    UINT count;
                    PROFILER_HEAP_OBJECT_ID scopes[ 1 ];
    } PROFILER_HEAP_OBJECT_SCOPE_LIST;
typedef
enum __MIDL___MIDL_itf_activprof_0000_0002_0005
    {
        PROFILER_PROPERTY_TYPE_NUMBER = 0x1,
        PROFILER_PROPERTY_TYPE_STRING = 0x2,
        PROFILER_PROPERTY_TYPE_HEAP_OBJECT = 0x3,
        PROFILER_PROPERTY_TYPE_EXTERNAL_OBJECT = 0x4,
        PROFILER_PROPERTY_TYPE_BSTR = 0x5,
        PROFILER_PROPERTY_TYPE_SUBSTRING = 0x6
    } PROFILER_RELATIONSHIP_INFO;
typedef struct _PROFILER_PROPERTY_TYPE_SUBSTRING_INFO
    {
    UINT length;
    LPCWSTR value;
    } PROFILER_PROPERTY_TYPE_SUBSTRING_INFO;
typedef struct _PROFILER_HEAP_OBJECT_RELATIONSHIP
    {
    PROFILER_HEAP_OBJECT_NAME_ID relationshipId;
    PROFILER_RELATIONSHIP_INFO relationshipInfo;
                                   union
        {
                       double numberValue;
                       LPCWSTR stringValue;
                       BSTR bstrValue;
                       PROFILER_HEAP_OBJECT_ID objectId;
                       PROFILER_EXTERNAL_OBJECT_ADDRESS externalObjectAddress;
                       PROFILER_PROPERTY_TYPE_SUBSTRING_INFO *subString;
        } ;
    } PROFILER_HEAP_OBJECT_RELATIONSHIP;
typedef struct _PROFILER_HEAP_OBJECT_RELATIONSHIP_LIST
    {
    UINT count;
                    PROFILER_HEAP_OBJECT_RELATIONSHIP elements[ 1 ];
    } PROFILER_HEAP_OBJECT_RELATIONSHIP_LIST;
typedef struct _PROFILER_HEAP_OBJECT_OPTIONAL_INFO
    {
    PROFILER_HEAP_OBJECT_OPTIONAL_INFO_TYPE infoType;
                                   union
        {
                       PROFILER_HEAP_OBJECT_ID prototype;
                       LPCWSTR functionName;
                       UINT elementAttributesSize;
                       UINT elementTextChildrenSize;
                       PROFILER_HEAP_OBJECT_SCOPE_LIST *scopeList;
                       PROFILER_HEAP_OBJECT_RELATIONSHIP *internalProperty;
                       PROFILER_HEAP_OBJECT_RELATIONSHIP_LIST *namePropertyList;
                       PROFILER_HEAP_OBJECT_RELATIONSHIP_LIST *indexPropertyList;
                       PROFILER_HEAP_OBJECT_RELATIONSHIP_LIST *relationshipList;
                       PROFILER_HEAP_OBJECT_RELATIONSHIP_LIST *eventList;
                       PROFILER_HEAP_OBJECT_RELATIONSHIP_LIST *weakMapCollectionList;
                       PROFILER_HEAP_OBJECT_RELATIONSHIP_LIST *mapCollectionList;
                       PROFILER_HEAP_OBJECT_RELATIONSHIP_LIST *setCollectionList;
        } ;
    } PROFILER_HEAP_OBJECT_OPTIONAL_INFO;
typedef struct _PROFILER_HEAP_OBJECT
    {
    UINT size;
    union
        {
        PROFILER_HEAP_OBJECT_ID objectId;
        PROFILER_EXTERNAL_OBJECT_ADDRESS externalObjectAddress;
        } ;
    PROFILER_HEAP_OBJECT_NAME_ID typeNameId;
    ULONG flags;
    USHORT unused;
    USHORT optionalInfoCount;
    } PROFILER_HEAP_OBJECT;
extern RPC_IF_HANDLE __MIDL_itf_activprof_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activprof_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IActiveScriptProfilerHeapEnum;
    typedef struct IActiveScriptProfilerHeapEnumVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IActiveScriptProfilerHeapEnum * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IActiveScriptProfilerHeapEnum * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IActiveScriptProfilerHeapEnum * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IActiveScriptProfilerHeapEnum * This,
                       ULONG celt,
                                            PROFILER_HEAP_OBJECT **heapObjects,
                        ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *GetOptionalInfo )(
            IActiveScriptProfilerHeapEnum * This,
                       PROFILER_HEAP_OBJECT *heapObject,
                       ULONG celt,
                                 PROFILER_HEAP_OBJECT_OPTIONAL_INFO *optionalInfo);
        HRESULT ( STDMETHODCALLTYPE *FreeObjectAndOptionalInfo )(
            IActiveScriptProfilerHeapEnum * This,
                       ULONG celt,
                                PROFILER_HEAP_OBJECT **heapObjects);
        HRESULT ( STDMETHODCALLTYPE *GetNameIdMap )(
            IActiveScriptProfilerHeapEnum * This,
                                          LPCWSTR *pNameList[ ],
                        UINT *pcelt);
        END_INTERFACE
    } IActiveScriptProfilerHeapEnumVtbl;
    interface IActiveScriptProfilerHeapEnum
    {
        CONST_VTBL struct IActiveScriptProfilerHeapEnumVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,heapObjects,pceltFetched) )
    ( (This)->lpVtbl -> GetOptionalInfo(This,heapObject,celt,optionalInfo) )
    ( (This)->lpVtbl -> FreeObjectAndOptionalInfo(This,celt,heapObjects) )
    ( (This)->lpVtbl -> GetNameIdMap(This,pNameList,pcelt) )
EXTERN_C const IID IID_IActiveScriptProfilerControl3;
    typedef struct IActiveScriptProfilerControl3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptProfilerControl3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptProfilerControl3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptProfilerControl3 * This);
        HRESULT ( STDMETHODCALLTYPE *StartProfiling )(
            __RPC__in IActiveScriptProfilerControl3 * This,
                       __RPC__in REFCLSID clsidProfilerObject,
                       DWORD dwEventMask,
                       DWORD dwContext);
        HRESULT ( STDMETHODCALLTYPE *SetProfilerEventMask )(
            __RPC__in IActiveScriptProfilerControl3 * This,
                       DWORD dwEventMask);
        HRESULT ( STDMETHODCALLTYPE *StopProfiling )(
            __RPC__in IActiveScriptProfilerControl3 * This,
                       HRESULT hrShutdownReason);
        HRESULT ( STDMETHODCALLTYPE *CompleteProfilerStart )(
            __RPC__in IActiveScriptProfilerControl3 * This);
        HRESULT ( STDMETHODCALLTYPE *PrepareProfilerStop )(
            __RPC__in IActiveScriptProfilerControl3 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumHeap )(
            __RPC__in IActiveScriptProfilerControl3 * This,
                        __RPC__deref_out_opt IActiveScriptProfilerHeapEnum **ppEnum);
        END_INTERFACE
    } IActiveScriptProfilerControl3Vtbl;
    interface IActiveScriptProfilerControl3
    {
        CONST_VTBL struct IActiveScriptProfilerControl3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartProfiling(This,clsidProfilerObject,dwEventMask,dwContext) )
    ( (This)->lpVtbl -> SetProfilerEventMask(This,dwEventMask) )
    ( (This)->lpVtbl -> StopProfiling(This,hrShutdownReason) )
    ( (This)->lpVtbl -> CompleteProfilerStart(This) )
    ( (This)->lpVtbl -> PrepareProfilerStop(This) )
    ( (This)->lpVtbl -> EnumHeap(This,ppEnum) )
typedef
enum __MIDL___MIDL_itf_activprof_0000_0004_0001
    {
        PROFILER_HEAP_SUMMARY_VERSION_1 = 0x1
    } PROFILER_HEAP_SUMMARY_VERSION;
typedef struct _PROFILER_HEAP_SUMMARY
    {
    PROFILER_HEAP_SUMMARY_VERSION version;
    UINT totalHeapSize;
    } PROFILER_HEAP_SUMMARY;
extern RPC_IF_HANDLE __MIDL_itf_activprof_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activprof_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IActiveScriptProfilerControl4;
    typedef struct IActiveScriptProfilerControl4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptProfilerControl4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptProfilerControl4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptProfilerControl4 * This);
        HRESULT ( STDMETHODCALLTYPE *StartProfiling )(
            __RPC__in IActiveScriptProfilerControl4 * This,
                       __RPC__in REFCLSID clsidProfilerObject,
                       DWORD dwEventMask,
                       DWORD dwContext);
        HRESULT ( STDMETHODCALLTYPE *SetProfilerEventMask )(
            __RPC__in IActiveScriptProfilerControl4 * This,
                       DWORD dwEventMask);
        HRESULT ( STDMETHODCALLTYPE *StopProfiling )(
            __RPC__in IActiveScriptProfilerControl4 * This,
                       HRESULT hrShutdownReason);
        HRESULT ( STDMETHODCALLTYPE *CompleteProfilerStart )(
            __RPC__in IActiveScriptProfilerControl4 * This);
        HRESULT ( STDMETHODCALLTYPE *PrepareProfilerStop )(
            __RPC__in IActiveScriptProfilerControl4 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumHeap )(
            __RPC__in IActiveScriptProfilerControl4 * This,
                        __RPC__deref_out_opt IActiveScriptProfilerHeapEnum **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *SummarizeHeap )(
            __RPC__in IActiveScriptProfilerControl4 * This,
                            __RPC__inout PROFILER_HEAP_SUMMARY *heapSummary);
        END_INTERFACE
    } IActiveScriptProfilerControl4Vtbl;
    interface IActiveScriptProfilerControl4
    {
        CONST_VTBL struct IActiveScriptProfilerControl4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartProfiling(This,clsidProfilerObject,dwEventMask,dwContext) )
    ( (This)->lpVtbl -> SetProfilerEventMask(This,dwEventMask) )
    ( (This)->lpVtbl -> StopProfiling(This,hrShutdownReason) )
    ( (This)->lpVtbl -> CompleteProfilerStart(This) )
    ( (This)->lpVtbl -> PrepareProfilerStop(This) )
    ( (This)->lpVtbl -> EnumHeap(This,ppEnum) )
    ( (This)->lpVtbl -> SummarizeHeap(This,heapSummary) )
EXTERN_C const IID IID_IActiveScriptProfilerControl5;
    typedef struct IActiveScriptProfilerControl5Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptProfilerControl5 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptProfilerControl5 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptProfilerControl5 * This);
        HRESULT ( STDMETHODCALLTYPE *StartProfiling )(
            __RPC__in IActiveScriptProfilerControl5 * This,
                       __RPC__in REFCLSID clsidProfilerObject,
                       DWORD dwEventMask,
                       DWORD dwContext);
        HRESULT ( STDMETHODCALLTYPE *SetProfilerEventMask )(
            __RPC__in IActiveScriptProfilerControl5 * This,
                       DWORD dwEventMask);
        HRESULT ( STDMETHODCALLTYPE *StopProfiling )(
            __RPC__in IActiveScriptProfilerControl5 * This,
                       HRESULT hrShutdownReason);
        HRESULT ( STDMETHODCALLTYPE *CompleteProfilerStart )(
            __RPC__in IActiveScriptProfilerControl5 * This);
        HRESULT ( STDMETHODCALLTYPE *PrepareProfilerStop )(
            __RPC__in IActiveScriptProfilerControl5 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumHeap )(
            __RPC__in IActiveScriptProfilerControl5 * This,
                        __RPC__deref_out_opt IActiveScriptProfilerHeapEnum **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *SummarizeHeap )(
            __RPC__in IActiveScriptProfilerControl5 * This,
                            __RPC__inout PROFILER_HEAP_SUMMARY *heapSummary);
        HRESULT ( STDMETHODCALLTYPE *EnumHeap2 )(
            __RPC__in IActiveScriptProfilerControl5 * This,
                       PROFILER_HEAP_ENUM_FLAGS enumFlags,
                        __RPC__deref_out_opt IActiveScriptProfilerHeapEnum **ppEnum);
        END_INTERFACE
    } IActiveScriptProfilerControl5Vtbl;
    interface IActiveScriptProfilerControl5
    {
        CONST_VTBL struct IActiveScriptProfilerControl5Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartProfiling(This,clsidProfilerObject,dwEventMask,dwContext) )
    ( (This)->lpVtbl -> SetProfilerEventMask(This,dwEventMask) )
    ( (This)->lpVtbl -> StopProfiling(This,hrShutdownReason) )
    ( (This)->lpVtbl -> CompleteProfilerStart(This) )
    ( (This)->lpVtbl -> PrepareProfilerStop(This) )
    ( (This)->lpVtbl -> EnumHeap(This,ppEnum) )
    ( (This)->lpVtbl -> SummarizeHeap(This,heapSummary) )
    ( (This)->lpVtbl -> EnumHeap2(This,enumFlags,ppEnum) )
EXTERN_C const IID IID_IActiveScriptProfilerCallback;
    typedef struct IActiveScriptProfilerCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptProfilerCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptProfilerCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptProfilerCallback * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IActiveScriptProfilerCallback * This,
                       DWORD dwContext);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in IActiveScriptProfilerCallback * This,
                       HRESULT hrReason);
        HRESULT ( STDMETHODCALLTYPE *ScriptCompiled )(
            __RPC__in IActiveScriptProfilerCallback * This,
                       PROFILER_TOKEN scriptId,
                       PROFILER_SCRIPT_TYPE type,
                       __RPC__in_opt IUnknown *pIDebugDocumentContext);
        HRESULT ( STDMETHODCALLTYPE *FunctionCompiled )(
            __RPC__in IActiveScriptProfilerCallback * This,
                       PROFILER_TOKEN functionId,
                       PROFILER_TOKEN scriptId,
                               __RPC__in_string const WCHAR *pwszFunctionName,
                               __RPC__in_string const WCHAR *pwszFunctionNameHint,
                       __RPC__in_opt IUnknown *pIDebugDocumentContext);
        HRESULT ( STDMETHODCALLTYPE *OnFunctionEnter )(
            __RPC__in IActiveScriptProfilerCallback * This,
                       PROFILER_TOKEN scriptId,
                       PROFILER_TOKEN functionId);
        HRESULT ( STDMETHODCALLTYPE *OnFunctionExit )(
            __RPC__in IActiveScriptProfilerCallback * This,
                       PROFILER_TOKEN scriptId,
                       PROFILER_TOKEN functionId);
        END_INTERFACE
    } IActiveScriptProfilerCallbackVtbl;
    interface IActiveScriptProfilerCallback
    {
        CONST_VTBL struct IActiveScriptProfilerCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,dwContext) )
    ( (This)->lpVtbl -> Shutdown(This,hrReason) )
    ( (This)->lpVtbl -> ScriptCompiled(This,scriptId,type,pIDebugDocumentContext) )
    ( (This)->lpVtbl -> FunctionCompiled(This,functionId,scriptId,pwszFunctionName,pwszFunctionNameHint,pIDebugDocumentContext) )
    ( (This)->lpVtbl -> OnFunctionEnter(This,scriptId,functionId) )
    ( (This)->lpVtbl -> OnFunctionExit(This,scriptId,functionId) )
EXTERN_C const IID IID_IActiveScriptProfilerCallback2;
    typedef struct IActiveScriptProfilerCallback2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptProfilerCallback2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptProfilerCallback2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptProfilerCallback2 * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IActiveScriptProfilerCallback2 * This,
                       DWORD dwContext);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in IActiveScriptProfilerCallback2 * This,
                       HRESULT hrReason);
        HRESULT ( STDMETHODCALLTYPE *ScriptCompiled )(
            __RPC__in IActiveScriptProfilerCallback2 * This,
                       PROFILER_TOKEN scriptId,
                       PROFILER_SCRIPT_TYPE type,
                       __RPC__in_opt IUnknown *pIDebugDocumentContext);
        HRESULT ( STDMETHODCALLTYPE *FunctionCompiled )(
            __RPC__in IActiveScriptProfilerCallback2 * This,
                       PROFILER_TOKEN functionId,
                       PROFILER_TOKEN scriptId,
                               __RPC__in_string const WCHAR *pwszFunctionName,
                               __RPC__in_string const WCHAR *pwszFunctionNameHint,
                       __RPC__in_opt IUnknown *pIDebugDocumentContext);
        HRESULT ( STDMETHODCALLTYPE *OnFunctionEnter )(
            __RPC__in IActiveScriptProfilerCallback2 * This,
                       PROFILER_TOKEN scriptId,
                       PROFILER_TOKEN functionId);
        HRESULT ( STDMETHODCALLTYPE *OnFunctionExit )(
            __RPC__in IActiveScriptProfilerCallback2 * This,
                       PROFILER_TOKEN scriptId,
                       PROFILER_TOKEN functionId);
        HRESULT ( STDMETHODCALLTYPE *OnFunctionEnterByName )(
            __RPC__in IActiveScriptProfilerCallback2 * This,
                               __RPC__in_string const WCHAR *pwszFunctionName,
                       PROFILER_SCRIPT_TYPE type);
        HRESULT ( STDMETHODCALLTYPE *OnFunctionExitByName )(
            __RPC__in IActiveScriptProfilerCallback2 * This,
                               __RPC__in_string const WCHAR *pwszFunctionName,
                       PROFILER_SCRIPT_TYPE type);
        END_INTERFACE
    } IActiveScriptProfilerCallback2Vtbl;
    interface IActiveScriptProfilerCallback2
    {
        CONST_VTBL struct IActiveScriptProfilerCallback2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,dwContext) )
    ( (This)->lpVtbl -> Shutdown(This,hrReason) )
    ( (This)->lpVtbl -> ScriptCompiled(This,scriptId,type,pIDebugDocumentContext) )
    ( (This)->lpVtbl -> FunctionCompiled(This,functionId,scriptId,pwszFunctionName,pwszFunctionNameHint,pIDebugDocumentContext) )
    ( (This)->lpVtbl -> OnFunctionEnter(This,scriptId,functionId) )
    ( (This)->lpVtbl -> OnFunctionExit(This,scriptId,functionId) )
    ( (This)->lpVtbl -> OnFunctionEnterByName(This,pwszFunctionName,type) )
    ( (This)->lpVtbl -> OnFunctionExitByName(This,pwszFunctionName,type) )
EXTERN_C const IID IID_IActiveScriptProfilerCallback3;
    typedef struct IActiveScriptProfilerCallback3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptProfilerCallback3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptProfilerCallback3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptProfilerCallback3 * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IActiveScriptProfilerCallback3 * This,
                       DWORD dwContext);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in IActiveScriptProfilerCallback3 * This,
                       HRESULT hrReason);
        HRESULT ( STDMETHODCALLTYPE *ScriptCompiled )(
            __RPC__in IActiveScriptProfilerCallback3 * This,
                       PROFILER_TOKEN scriptId,
                       PROFILER_SCRIPT_TYPE type,
                       __RPC__in_opt IUnknown *pIDebugDocumentContext);
        HRESULT ( STDMETHODCALLTYPE *FunctionCompiled )(
            __RPC__in IActiveScriptProfilerCallback3 * This,
                       PROFILER_TOKEN functionId,
                       PROFILER_TOKEN scriptId,
                               __RPC__in_string const WCHAR *pwszFunctionName,
                               __RPC__in_string const WCHAR *pwszFunctionNameHint,
                       __RPC__in_opt IUnknown *pIDebugDocumentContext);
        HRESULT ( STDMETHODCALLTYPE *OnFunctionEnter )(
            __RPC__in IActiveScriptProfilerCallback3 * This,
                       PROFILER_TOKEN scriptId,
                       PROFILER_TOKEN functionId);
        HRESULT ( STDMETHODCALLTYPE *OnFunctionExit )(
            __RPC__in IActiveScriptProfilerCallback3 * This,
                       PROFILER_TOKEN scriptId,
                       PROFILER_TOKEN functionId);
        HRESULT ( STDMETHODCALLTYPE *OnFunctionEnterByName )(
            __RPC__in IActiveScriptProfilerCallback3 * This,
                               __RPC__in_string const WCHAR *pwszFunctionName,
                       PROFILER_SCRIPT_TYPE type);
        HRESULT ( STDMETHODCALLTYPE *OnFunctionExitByName )(
            __RPC__in IActiveScriptProfilerCallback3 * This,
                               __RPC__in_string const WCHAR *pwszFunctionName,
                       PROFILER_SCRIPT_TYPE type);
        HRESULT ( STDMETHODCALLTYPE *SetWebWorkerId )(
            __RPC__in IActiveScriptProfilerCallback3 * This,
                       DWORD webWorkerId);
        END_INTERFACE
    } IActiveScriptProfilerCallback3Vtbl;
    interface IActiveScriptProfilerCallback3
    {
        CONST_VTBL struct IActiveScriptProfilerCallback3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,dwContext) )
    ( (This)->lpVtbl -> Shutdown(This,hrReason) )
    ( (This)->lpVtbl -> ScriptCompiled(This,scriptId,type,pIDebugDocumentContext) )
    ( (This)->lpVtbl -> FunctionCompiled(This,functionId,scriptId,pwszFunctionName,pwszFunctionNameHint,pIDebugDocumentContext) )
    ( (This)->lpVtbl -> OnFunctionEnter(This,scriptId,functionId) )
    ( (This)->lpVtbl -> OnFunctionExit(This,scriptId,functionId) )
    ( (This)->lpVtbl -> OnFunctionEnterByName(This,pwszFunctionName,type) )
    ( (This)->lpVtbl -> OnFunctionExitByName(This,pwszFunctionName,type) )
    ( (This)->lpVtbl -> SetWebWorkerId(This,webWorkerId) )
#pragma warning(pop)
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_activprof_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activprof_0000_0009_v0_0_s_ifspec;
}
