#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ID3D11ShaderTrace ID3D11ShaderTrace;
typedef interface ID3D11ShaderTraceFactory ID3D11ShaderTraceFactory;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
typedef
enum D3D11_SHADER_TYPE
    {
        D3D11_VERTEX_SHADER = 1,
        D3D11_HULL_SHADER = 2,
        D3D11_DOMAIN_SHADER = 3,
        D3D11_GEOMETRY_SHADER = 4,
        D3D11_PIXEL_SHADER = 5,
        D3D11_COMPUTE_SHADER = 6
    } D3D11_SHADER_TYPE;
typedef UINT8 D3D11_TRACE_COMPONENT_MASK;
typedef struct D3D11_VERTEX_SHADER_TRACE_DESC
    {
    UINT64 Invocation;
    } D3D11_VERTEX_SHADER_TRACE_DESC;
typedef struct D3D11_HULL_SHADER_TRACE_DESC
    {
    UINT64 Invocation;
    } D3D11_HULL_SHADER_TRACE_DESC;
typedef struct D3D11_DOMAIN_SHADER_TRACE_DESC
    {
    UINT64 Invocation;
    } D3D11_DOMAIN_SHADER_TRACE_DESC;
typedef struct D3D11_GEOMETRY_SHADER_TRACE_DESC
    {
    UINT64 Invocation;
    } D3D11_GEOMETRY_SHADER_TRACE_DESC;
typedef struct D3D11_PIXEL_SHADER_TRACE_DESC
    {
    UINT64 Invocation;
    INT X;
    INT Y;
    UINT64 SampleMask;
    } D3D11_PIXEL_SHADER_TRACE_DESC;
typedef struct D3D11_COMPUTE_SHADER_TRACE_DESC
    {
    UINT64 Invocation;
    UINT ThreadIDInGroup[ 3 ];
    UINT ThreadGroupID[ 3 ];
    } D3D11_COMPUTE_SHADER_TRACE_DESC;
typedef struct D3D11_SHADER_TRACE_DESC
    {
    D3D11_SHADER_TYPE Type;
    UINT Flags;
    union
        {
        D3D11_VERTEX_SHADER_TRACE_DESC VertexShaderTraceDesc;
        D3D11_HULL_SHADER_TRACE_DESC HullShaderTraceDesc;
        D3D11_DOMAIN_SHADER_TRACE_DESC DomainShaderTraceDesc;
        D3D11_GEOMETRY_SHADER_TRACE_DESC GeometryShaderTraceDesc;
        D3D11_PIXEL_SHADER_TRACE_DESC PixelShaderTraceDesc;
        D3D11_COMPUTE_SHADER_TRACE_DESC ComputeShaderTraceDesc;
        } ;
    } D3D11_SHADER_TRACE_DESC;
typedef
enum D3D11_TRACE_GS_INPUT_PRIMITIVE
    {
        D3D11_TRACE_GS_INPUT_PRIMITIVE_UNDEFINED = 0,
        D3D11_TRACE_GS_INPUT_PRIMITIVE_POINT = 1,
        D3D11_TRACE_GS_INPUT_PRIMITIVE_LINE = 2,
        D3D11_TRACE_GS_INPUT_PRIMITIVE_TRIANGLE = 3,
        D3D11_TRACE_GS_INPUT_PRIMITIVE_LINE_ADJ = 6,
        D3D11_TRACE_GS_INPUT_PRIMITIVE_TRIANGLE_ADJ = 7
    } D3D11_TRACE_GS_INPUT_PRIMITIVE;
typedef struct D3D11_TRACE_STATS
    {
    D3D11_SHADER_TRACE_DESC TraceDesc;
    UINT8 NumInvocationsInStamp;
    UINT8 TargetStampIndex;
    UINT NumTraceSteps;
    D3D11_TRACE_COMPONENT_MASK InputMask[ 32 ];
    D3D11_TRACE_COMPONENT_MASK OutputMask[ 32 ];
    UINT16 NumTemps;
    UINT16 MaxIndexableTempIndex;
    UINT16 IndexableTempSize[ 4096 ];
    UINT16 ImmediateConstantBufferSize;
    UINT PixelPosition[ 4 ][ 2 ];
    UINT64 PixelCoverageMask[ 4 ];
    UINT64 PixelDiscardedMask[ 4 ];
    UINT64 PixelCoverageMaskAfterShader[ 4 ];
    UINT64 PixelCoverageMaskAfterA2CSampleMask[ 4 ];
    UINT64 PixelCoverageMaskAfterA2CSampleMaskDepth[ 4 ];
    UINT64 PixelCoverageMaskAfterA2CSampleMaskDepthStencil[ 4 ];
    BOOL PSOutputsDepth;
    BOOL PSOutputsMask;
    D3D11_TRACE_GS_INPUT_PRIMITIVE GSInputPrimitive;
    BOOL GSInputsPrimitiveID;
    D3D11_TRACE_COMPONENT_MASK HSOutputPatchConstantMask[ 32 ];
    D3D11_TRACE_COMPONENT_MASK DSInputPatchConstantMask[ 32 ];
    } D3D11_TRACE_STATS;
typedef struct D3D11_TRACE_VALUE
    {
    UINT Bits[ 4 ];
    D3D11_TRACE_COMPONENT_MASK ValidMask;
    } D3D11_TRACE_VALUE;
typedef
enum D3D11_TRACE_REGISTER_TYPE
    {
        D3D11_TRACE_OUTPUT_NULL_REGISTER = 0,
        D3D11_TRACE_INPUT_REGISTER = ( D3D11_TRACE_OUTPUT_NULL_REGISTER + 1 ) ,
        D3D11_TRACE_INPUT_PRIMITIVE_ID_REGISTER = ( D3D11_TRACE_INPUT_REGISTER + 1 ) ,
        D3D11_TRACE_IMMEDIATE_CONSTANT_BUFFER = ( D3D11_TRACE_INPUT_PRIMITIVE_ID_REGISTER + 1 ) ,
        D3D11_TRACE_TEMP_REGISTER = ( D3D11_TRACE_IMMEDIATE_CONSTANT_BUFFER + 1 ) ,
        D3D11_TRACE_INDEXABLE_TEMP_REGISTER = ( D3D11_TRACE_TEMP_REGISTER + 1 ) ,
        D3D11_TRACE_OUTPUT_REGISTER = ( D3D11_TRACE_INDEXABLE_TEMP_REGISTER + 1 ) ,
        D3D11_TRACE_OUTPUT_DEPTH_REGISTER = ( D3D11_TRACE_OUTPUT_REGISTER + 1 ) ,
        D3D11_TRACE_CONSTANT_BUFFER = ( D3D11_TRACE_OUTPUT_DEPTH_REGISTER + 1 ) ,
        D3D11_TRACE_IMMEDIATE32 = ( D3D11_TRACE_CONSTANT_BUFFER + 1 ) ,
        D3D11_TRACE_SAMPLER = ( D3D11_TRACE_IMMEDIATE32 + 1 ) ,
        D3D11_TRACE_RESOURCE = ( D3D11_TRACE_SAMPLER + 1 ) ,
        D3D11_TRACE_RASTERIZER = ( D3D11_TRACE_RESOURCE + 1 ) ,
        D3D11_TRACE_OUTPUT_COVERAGE_MASK = ( D3D11_TRACE_RASTERIZER + 1 ) ,
        D3D11_TRACE_STREAM = ( D3D11_TRACE_OUTPUT_COVERAGE_MASK + 1 ) ,
        D3D11_TRACE_THIS_POINTER = ( D3D11_TRACE_STREAM + 1 ) ,
        D3D11_TRACE_OUTPUT_CONTROL_POINT_ID_REGISTER = ( D3D11_TRACE_THIS_POINTER + 1 ) ,
        D3D11_TRACE_INPUT_FORK_INSTANCE_ID_REGISTER = ( D3D11_TRACE_OUTPUT_CONTROL_POINT_ID_REGISTER + 1 ) ,
        D3D11_TRACE_INPUT_JOIN_INSTANCE_ID_REGISTER = ( D3D11_TRACE_INPUT_FORK_INSTANCE_ID_REGISTER + 1 ) ,
        D3D11_TRACE_INPUT_CONTROL_POINT_REGISTER = ( D3D11_TRACE_INPUT_JOIN_INSTANCE_ID_REGISTER + 1 ) ,
        D3D11_TRACE_OUTPUT_CONTROL_POINT_REGISTER = ( D3D11_TRACE_INPUT_CONTROL_POINT_REGISTER + 1 ) ,
        D3D11_TRACE_INPUT_PATCH_CONSTANT_REGISTER = ( D3D11_TRACE_OUTPUT_CONTROL_POINT_REGISTER + 1 ) ,
        D3D11_TRACE_INPUT_DOMAIN_POINT_REGISTER = ( D3D11_TRACE_INPUT_PATCH_CONSTANT_REGISTER + 1 ) ,
        D3D11_TRACE_UNORDERED_ACCESS_VIEW = ( D3D11_TRACE_INPUT_DOMAIN_POINT_REGISTER + 1 ) ,
        D3D11_TRACE_THREAD_GROUP_SHARED_MEMORY = ( D3D11_TRACE_UNORDERED_ACCESS_VIEW + 1 ) ,
        D3D11_TRACE_INPUT_THREAD_ID_REGISTER = ( D3D11_TRACE_THREAD_GROUP_SHARED_MEMORY + 1 ) ,
        D3D11_TRACE_INPUT_THREAD_GROUP_ID_REGISTER = ( D3D11_TRACE_INPUT_THREAD_ID_REGISTER + 1 ) ,
        D3D11_TRACE_INPUT_THREAD_ID_IN_GROUP_REGISTER = ( D3D11_TRACE_INPUT_THREAD_GROUP_ID_REGISTER + 1 ) ,
        D3D11_TRACE_INPUT_COVERAGE_MASK_REGISTER = ( D3D11_TRACE_INPUT_THREAD_ID_IN_GROUP_REGISTER + 1 ) ,
        D3D11_TRACE_INPUT_THREAD_ID_IN_GROUP_FLATTENED_REGISTER = ( D3D11_TRACE_INPUT_COVERAGE_MASK_REGISTER + 1 ) ,
        D3D11_TRACE_INPUT_GS_INSTANCE_ID_REGISTER = ( D3D11_TRACE_INPUT_THREAD_ID_IN_GROUP_FLATTENED_REGISTER + 1 ) ,
        D3D11_TRACE_OUTPUT_DEPTH_GREATER_EQUAL_REGISTER = ( D3D11_TRACE_INPUT_GS_INSTANCE_ID_REGISTER + 1 ) ,
        D3D11_TRACE_OUTPUT_DEPTH_LESS_EQUAL_REGISTER = ( D3D11_TRACE_OUTPUT_DEPTH_GREATER_EQUAL_REGISTER + 1 ) ,
        D3D11_TRACE_IMMEDIATE64 = ( D3D11_TRACE_OUTPUT_DEPTH_LESS_EQUAL_REGISTER + 1 ) ,
        D3D11_TRACE_INPUT_CYCLE_COUNTER_REGISTER = ( D3D11_TRACE_IMMEDIATE64 + 1 ) ,
        D3D11_TRACE_INTERFACE_POINTER = ( D3D11_TRACE_INPUT_CYCLE_COUNTER_REGISTER + 1 )
    } D3D11_TRACE_REGISTER_TYPE;
typedef struct D3D11_TRACE_REGISTER
    {
    D3D11_TRACE_REGISTER_TYPE RegType;
    union
        {
        UINT16 Index1D;
        UINT16 Index2D[ 2 ];
        } ;
    UINT8 OperandIndex;
    UINT8 Flags;
    } D3D11_TRACE_REGISTER;
typedef UINT16 D3D11_TRACE_MISC_OPERATIONS_MASK;
typedef struct D3D11_TRACE_STEP
    {
    UINT ID;
    BOOL InstructionActive;
    UINT8 NumRegistersWritten;
    UINT8 NumRegistersRead;
    D3D11_TRACE_MISC_OPERATIONS_MASK MiscOperations;
    UINT OpcodeType;
    UINT64 CurrentGlobalCycle;
    } D3D11_TRACE_STEP;
extern RPC_IF_HANDLE __MIDL_itf_d3d11ShaderTracing_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11ShaderTracing_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11ShaderTrace;
    typedef struct ID3D11ShaderTraceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11ShaderTrace * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11ShaderTrace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11ShaderTrace * This);
        HRESULT ( STDMETHODCALLTYPE *TraceReady )(
            ID3D11ShaderTrace * This,
            _Out_opt_ UINT64 *pTestCount);
        void ( STDMETHODCALLTYPE *ResetTrace )(
            ID3D11ShaderTrace * This);
        HRESULT ( STDMETHODCALLTYPE *GetTraceStats )(
            ID3D11ShaderTrace * This,
            _Out_ D3D11_TRACE_STATS *pTraceStats);
        HRESULT ( STDMETHODCALLTYPE *PSSelectStamp )(
            ID3D11ShaderTrace * This,
            _In_ UINT stampIndex);
        HRESULT ( STDMETHODCALLTYPE *GetInitialRegisterContents )(
            ID3D11ShaderTrace * This,
            _In_ D3D11_TRACE_REGISTER *pRegister,
            _Out_ D3D11_TRACE_VALUE *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetStep )(
            ID3D11ShaderTrace * This,
            _In_ UINT stepIndex,
            _Out_ D3D11_TRACE_STEP *pTraceStep);
        HRESULT ( STDMETHODCALLTYPE *GetWrittenRegister )(
            ID3D11ShaderTrace * This,
            _In_ UINT stepIndex,
            _In_ UINT writtenRegisterIndex,
            _Out_ D3D11_TRACE_REGISTER *pRegister,
            _Out_ D3D11_TRACE_VALUE *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetReadRegister )(
            ID3D11ShaderTrace * This,
            _In_ UINT stepIndex,
            _In_ UINT readRegisterIndex,
            _Out_ D3D11_TRACE_REGISTER *pRegister,
            _Out_ D3D11_TRACE_VALUE *pValue);
        END_INTERFACE
    } ID3D11ShaderTraceVtbl;
    interface ID3D11ShaderTrace
    {
        CONST_VTBL struct ID3D11ShaderTraceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> TraceReady(This,pTestCount) )
    ( (This)->lpVtbl -> ResetTrace(This) )
    ( (This)->lpVtbl -> GetTraceStats(This,pTraceStats) )
    ( (This)->lpVtbl -> PSSelectStamp(This,stampIndex) )
    ( (This)->lpVtbl -> GetInitialRegisterContents(This,pRegister,pValue) )
    ( (This)->lpVtbl -> GetStep(This,stepIndex,pTraceStep) )
    ( (This)->lpVtbl -> GetWrittenRegister(This,stepIndex,writtenRegisterIndex,pRegister,pValue) )
    ( (This)->lpVtbl -> GetReadRegister(This,stepIndex,readRegisterIndex,pRegister,pValue) )
EXTERN_C const IID IID_ID3D11ShaderTraceFactory;
    typedef struct ID3D11ShaderTraceFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11ShaderTraceFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11ShaderTraceFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11ShaderTraceFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateShaderTrace )(
            ID3D11ShaderTraceFactory * This,
            _In_ IUnknown *pShader,
            _In_ D3D11_SHADER_TRACE_DESC *pTraceDesc,
            _COM_Outptr_ ID3D11ShaderTrace **ppShaderTrace);
        END_INTERFACE
    } ID3D11ShaderTraceFactoryVtbl;
    interface ID3D11ShaderTraceFactory
    {
        CONST_VTBL struct ID3D11ShaderTraceFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateShaderTrace(This,pShader,pTraceDesc,ppShaderTrace) )
HRESULT WINAPI
D3DDisassemble11Trace(_In_reads_bytes_(SrcDataSize) LPCVOID pSrcData,
                      _In_ SIZE_T SrcDataSize,
                      _In_ ID3D11ShaderTrace* pTrace,
                      _In_ UINT StartStep,
                      _In_ UINT NumSteps,
                      _In_ UINT Flags,
                      _COM_Outptr_ interface ID3D10Blob** ppDisassembly);
extern RPC_IF_HANDLE __MIDL_itf_d3d11ShaderTracing_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11ShaderTracing_0000_0002_v0_0_s_ifspec;
}
