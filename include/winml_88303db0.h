#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWinMLModel IWinMLModel;
typedef interface IWinMLEvaluationContext IWinMLEvaluationContext;
typedef interface IWinMLRuntime IWinMLRuntime;
typedef interface IWinMLRuntimeFactory IWinMLRuntimeFactory;
#include "oaidl.h"
#include "ocidl.h"
#include "d3d12.h"
extern "C"{
typedef
enum WINML_TENSOR_DATA_TYPE
    {
        WINML_TENSOR_UNDEFINED = 0,
        WINML_TENSOR_FLOAT = ( WINML_TENSOR_UNDEFINED + 1 ) ,
        WINML_TENSOR_UINT8 = ( WINML_TENSOR_FLOAT + 1 ) ,
        WINML_TENSOR_INT8 = ( WINML_TENSOR_UINT8 + 1 ) ,
        WINML_TENSOR_UINT16 = ( WINML_TENSOR_INT8 + 1 ) ,
        WINML_TENSOR_INT16 = ( WINML_TENSOR_UINT16 + 1 ) ,
        WINML_TENSOR_INT32 = ( WINML_TENSOR_INT16 + 1 ) ,
        WINML_TENSOR_INT64 = ( WINML_TENSOR_INT32 + 1 ) ,
        WINML_TENSOR_STRING = ( WINML_TENSOR_INT64 + 1 ) ,
        WINML_TENSOR_BOOLEAN = ( WINML_TENSOR_STRING + 1 ) ,
        WINML_TENSOR_FLOAT16 = ( WINML_TENSOR_BOOLEAN + 1 ) ,
        WINML_TENSOR_DOUBLE = ( WINML_TENSOR_FLOAT16 + 1 ) ,
        WINML_TENSOR_UINT32 = ( WINML_TENSOR_DOUBLE + 1 ) ,
        WINML_TENSOR_UINT64 = ( WINML_TENSOR_UINT32 + 1 ) ,
        WINML_TENSOR_COMPLEX64 = ( WINML_TENSOR_UINT64 + 1 ) ,
        WINML_TENSOR_COMPLEX128 = ( WINML_TENSOR_COMPLEX64 + 1 )
    } WINML_TENSOR_DATA_TYPE;
typedef
enum WINML_FEATURE_TYPE
    {
        WINML_FEATURE_UNDEFINED = 0,
        WINML_FEATURE_TENSOR = ( WINML_FEATURE_UNDEFINED + 1 ) ,
        WINML_FEATURE_SEQUENCE = ( WINML_FEATURE_TENSOR + 1 ) ,
        WINML_FEATURE_MAP = ( WINML_FEATURE_SEQUENCE + 1 ) ,
        WINML_FEATURE_IMAGE = ( WINML_FEATURE_MAP + 1 )
    } WINML_FEATURE_TYPE;
typedef
enum WINML_BINDING_TYPE
    {
        WINML_BINDING_UNDEFINED = 0,
        WINML_BINDING_TENSOR = ( WINML_BINDING_UNDEFINED + 1 ) ,
        WINML_BINDING_SEQUENCE = ( WINML_BINDING_TENSOR + 1 ) ,
        WINML_BINDING_MAP = ( WINML_BINDING_SEQUENCE + 1 ) ,
        WINML_BINDING_IMAGE = ( WINML_BINDING_MAP + 1 ) ,
        WINML_BINDING_RESOURCE = ( WINML_BINDING_IMAGE + 1 )
    } WINML_BINDING_TYPE;
typedef struct WINML_TENSOR_BINDING_DESC
    {
    WINML_TENSOR_DATA_TYPE DataType;
    _In_range_(1, WINML_TENSOR_DIMENSION_COUNT_MAX) UINT NumDimensions;
    _Field_size_full_(NumDimensions) INT64 *pShape;
    UINT DataSize;
    _Field_size_bytes_full_(DataSize) void *pData;
    } WINML_TENSOR_BINDING_DESC;
typedef struct WINML_SEQUENCE_BINDING_DESC
    {
    UINT ElementCount;
    WINML_TENSOR_DATA_TYPE ElementType;
    union
        {
        _Field_size_full_(ElementCount) LPWSTR *pStrings;
        _Field_size_full_(ElementCount) INT64 *pInts;
        _Field_size_full_(ElementCount) FLOAT *pFloats;
        _Field_size_full_(ElementCount) DOUBLE *pDoubles;
        } ;
    } WINML_SEQUENCE_BINDING_DESC;
typedef struct WINML_MAP_BINDING_DESC
    {
    UINT ElementCount;
    WINML_TENSOR_DATA_TYPE KeyType;
    union
        {
        _Field_size_full_(ElementCount) LPWSTR *pStringKeys;
        _Field_size_full_(ElementCount) INT64 *pIntKeys;
        } ;
    WINML_TENSOR_DATA_TYPE Fields;
    union
        {
        _Field_size_full_(ElementCount) LPWSTR *pStringFields;
        _Field_size_full_(ElementCount) INT64 *pIntFields;
        _Field_size_full_(ElementCount) FLOAT *pFloatFields;
        _Field_size_full_(ElementCount) DOUBLE *pDoubleFields;
        } ;
    } WINML_MAP_BINDING_DESC;
typedef struct WINML_IMAGE_BINDING_DESC
    {
    WINML_TENSOR_DATA_TYPE ElementType;
    _In_range_(1, WINML_TENSOR_DIMENSION_COUNT_MAX) UINT NumDimensions;
    _Field_size_full_(NumDimensions) INT64 *pShape;
    UINT DataSize;
    _Field_size_bytes_full_(DataSize) void *pData;
    } WINML_IMAGE_BINDING_DESC;
typedef struct WINML_RESOURCE_BINDING_DESC
    {
    WINML_TENSOR_DATA_TYPE ElementType;
    _In_range_(1, WINML_TENSOR_DIMENSION_COUNT_MAX) UINT NumDimensions;
    _Field_size_full_(NumDimensions) INT64 *pShape;
    _In_ ID3D12Resource *pResource;
    } WINML_RESOURCE_BINDING_DESC;
typedef struct WINML_BINDING_DESC
    {
    LPCWSTR Name;
    WINML_BINDING_TYPE BindType;
    union
        {
        WINML_TENSOR_BINDING_DESC Tensor;
        WINML_SEQUENCE_BINDING_DESC Sequence;
        WINML_MAP_BINDING_DESC Map;
        WINML_IMAGE_BINDING_DESC Image;
        WINML_RESOURCE_BINDING_DESC Resource;
        } ;
    } WINML_BINDING_DESC;
typedef struct WINML_TENSOR_VARIABLE_DESC
    {
    WINML_TENSOR_DATA_TYPE ElementType;
    _In_range_(1, WINML_TENSOR_DIMENSION_COUNT_MAX) UINT NumDimensions;
    _Field_size_full_(NumDimensions) INT64 *pShape;
    } WINML_TENSOR_VARIABLE_DESC;
typedef struct WINML_SEQUENCE_VARIABLE_DESC
    {
    WINML_TENSOR_DATA_TYPE ElementType;
    } WINML_SEQUENCE_VARIABLE_DESC;
typedef struct WINML_MAP_VARIABLE_DESC
    {
    WINML_TENSOR_DATA_TYPE KeyType;
    WINML_TENSOR_DATA_TYPE Fields;
    } WINML_MAP_VARIABLE_DESC;
typedef struct WINML_IMAGE_VARIABLE_DESC
    {
    WINML_TENSOR_DATA_TYPE ElementType;
    UINT NumDimensions;
    _Field_size_full_(NumDimensions) INT64 *pShape;
    } WINML_IMAGE_VARIABLE_DESC;
typedef struct WINML_VARIABLE_DESC
    {
    LPWSTR Name;
    LPWSTR Description;
    WINML_FEATURE_TYPE FeatureType;
    BOOL Required;
    union
        {
        WINML_TENSOR_VARIABLE_DESC Tensor;
        WINML_SEQUENCE_VARIABLE_DESC Sequence;
        WINML_MAP_VARIABLE_DESC Map;
        WINML_IMAGE_VARIABLE_DESC Image;
        } ;
    } WINML_VARIABLE_DESC;
typedef struct WINML_MODEL_DESC
    {
    LPWSTR Author;
    LPWSTR Name;
    LPWSTR Domain;
    LPWSTR Description;
    SIZE_T Version;
    } WINML_MODEL_DESC;
extern RPC_IF_HANDLE __MIDL_itf_winml_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winml_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWinMLModel;
    typedef struct IWinMLModelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWinMLModel * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWinMLModel * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWinMLModel * This);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            IWinMLModel * This,
            _Out_ WINML_MODEL_DESC **ppDescription);
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadata )(
            IWinMLModel * This,
            _In_ UINT Index,
            _Outptr_ LPCWSTR *pKey,
            _Outptr_ LPCWSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *EnumerateModelInputs )(
            IWinMLModel * This,
            _In_ UINT Index,
            _Out_ WINML_VARIABLE_DESC **ppInputDescriptor);
        HRESULT ( STDMETHODCALLTYPE *EnumerateModelOutputs )(
            IWinMLModel * This,
            _In_ UINT Index,
            _Out_ WINML_VARIABLE_DESC **ppOutputDescriptor);
        END_INTERFACE
    } IWinMLModelVtbl;
    interface IWinMLModel
    {
        CONST_VTBL struct IWinMLModelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDescription(This,ppDescription) )
    ( (This)->lpVtbl -> EnumerateMetadata(This,Index,pKey,pValue) )
    ( (This)->lpVtbl -> EnumerateModelInputs(This,Index,ppInputDescriptor) )
    ( (This)->lpVtbl -> EnumerateModelOutputs(This,Index,ppOutputDescriptor) )
#pragma deprecated(IWinMLModel)
extern RPC_IF_HANDLE __MIDL_itf_winml_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winml_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IWinMLEvaluationContext;
    typedef struct IWinMLEvaluationContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWinMLEvaluationContext * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWinMLEvaluationContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWinMLEvaluationContext * This);
        HRESULT ( STDMETHODCALLTYPE *BindValue )(
            IWinMLEvaluationContext * This,
            _In_ WINML_BINDING_DESC *pDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetValueByName )(
            IWinMLEvaluationContext * This,
            _In_z_ LPCWSTR Name,
            _Out_ WINML_BINDING_DESC **pDescriptor);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            IWinMLEvaluationContext * This);
        END_INTERFACE
    } IWinMLEvaluationContextVtbl;
    interface IWinMLEvaluationContext
    {
        CONST_VTBL struct IWinMLEvaluationContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BindValue(This,pDescriptor) )
    ( (This)->lpVtbl -> GetValueByName(This,Name,pDescriptor) )
    ( (This)->lpVtbl -> Clear(This) )
#pragma deprecated(IWinMLEvaluationContext)
extern RPC_IF_HANDLE __MIDL_itf_winml_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winml_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IWinMLRuntime;
    typedef struct IWinMLRuntimeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWinMLRuntime * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWinMLRuntime * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWinMLRuntime * This);
        HRESULT ( STDMETHODCALLTYPE *LoadModel )(
            IWinMLRuntime * This,
            _In_z_ LPCWSTR Path,
            _COM_Outptr_ IWinMLModel **ppModel);
        HRESULT ( STDMETHODCALLTYPE *CreateEvaluationContext )(
            IWinMLRuntime * This,
            _In_opt_ ID3D12Device *device,
            _COM_Outptr_ IWinMLEvaluationContext **ppContext);
        HRESULT ( STDMETHODCALLTYPE *EvaluateModel )(
            IWinMLRuntime * This,
            _In_ IWinMLEvaluationContext *pContext);
        END_INTERFACE
    } IWinMLRuntimeVtbl;
    interface IWinMLRuntime
    {
        CONST_VTBL struct IWinMLRuntimeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LoadModel(This,Path,ppModel) )
    ( (This)->lpVtbl -> CreateEvaluationContext(This,device,ppContext) )
    ( (This)->lpVtbl -> EvaluateModel(This,pContext) )
#pragma deprecated(IWinMLRuntime)
typedef
enum WINML_RUNTIME_TYPE
    {
        WINML_RUNTIME_CNTK = 0
    } WINML_RUNTIME_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_winml_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winml_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IWinMLRuntimeFactory;
    typedef struct IWinMLRuntimeFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWinMLRuntimeFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWinMLRuntimeFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWinMLRuntimeFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateRuntime )(
            IWinMLRuntimeFactory * This,
            _In_ WINML_RUNTIME_TYPE RuntimeType,
            _COM_Outptr_ IWinMLRuntime **ppRuntime);
        END_INTERFACE
    } IWinMLRuntimeFactoryVtbl;
    interface IWinMLRuntimeFactory
    {
        CONST_VTBL struct IWinMLRuntimeFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateRuntime(This,RuntimeType,ppRuntime) )
#pragma deprecated(IWinMLRuntimeFactory)
HRESULT WINAPI WinMLCreateRuntime(
    _COM_Outptr_ IWinMLRuntime **runtime
    );
#pragma deprecated(WinMLCreateRuntime)
extern RPC_IF_HANDLE __MIDL_itf_winml_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winml_0000_0004_v0_0_s_ifspec;
}
