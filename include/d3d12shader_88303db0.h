#include "d3dcommon.h"
typedef enum D3D12_SHADER_VERSION_TYPE
{
    D3D12_SHVER_PIXEL_SHADER = 0,
    D3D12_SHVER_VERTEX_SHADER = 1,
    D3D12_SHVER_GEOMETRY_SHADER = 2,
    D3D12_SHVER_HULL_SHADER = 3,
    D3D12_SHVER_DOMAIN_SHADER = 4,
    D3D12_SHVER_COMPUTE_SHADER = 5,
    D3D12_SHVER_RESERVED0 = 0xFFF0,
} D3D12_SHADER_VERSION_TYPE;
    (((_Version) >> 16) & 0xffff)
    (((_Version) >> 4) & 0xf)
    (((_Version) >> 0) & 0xf)
typedef D3D_RESOURCE_RETURN_TYPE D3D12_RESOURCE_RETURN_TYPE;
typedef D3D_CBUFFER_TYPE D3D12_CBUFFER_TYPE;
typedef struct _D3D12_SIGNATURE_PARAMETER_DESC
{
    LPCSTR SemanticName;
    UINT SemanticIndex;
    UINT Register;
    D3D_NAME SystemValueType;
    D3D_REGISTER_COMPONENT_TYPE ComponentType;
    BYTE Mask;
    BYTE ReadWriteMask;
    UINT Stream;
    D3D_MIN_PRECISION MinPrecision;
} D3D12_SIGNATURE_PARAMETER_DESC;
typedef struct _D3D12_SHADER_BUFFER_DESC
{
    LPCSTR Name;
    D3D_CBUFFER_TYPE Type;
    UINT Variables;
    UINT Size;
    UINT uFlags;
} D3D12_SHADER_BUFFER_DESC;
typedef struct _D3D12_SHADER_VARIABLE_DESC
{
    LPCSTR Name;
    UINT StartOffset;
    UINT Size;
    UINT uFlags;
    LPVOID DefaultValue;
    UINT StartTexture;
    UINT TextureSize;
    UINT StartSampler;
    UINT SamplerSize;
} D3D12_SHADER_VARIABLE_DESC;
typedef struct _D3D12_SHADER_TYPE_DESC
{
    D3D_SHADER_VARIABLE_CLASS Class;
    D3D_SHADER_VARIABLE_TYPE Type;
    UINT Rows;
    UINT Columns;
    UINT Elements;
    UINT Members;
    UINT Offset;
    LPCSTR Name;
} D3D12_SHADER_TYPE_DESC;
typedef D3D_TESSELLATOR_DOMAIN D3D12_TESSELLATOR_DOMAIN;
typedef D3D_TESSELLATOR_PARTITIONING D3D12_TESSELLATOR_PARTITIONING;
typedef D3D_TESSELLATOR_OUTPUT_PRIMITIVE D3D12_TESSELLATOR_OUTPUT_PRIMITIVE;
typedef struct _D3D12_SHADER_DESC
{
    UINT Version;
    LPCSTR Creator;
    UINT Flags;
    UINT ConstantBuffers;
    UINT BoundResources;
    UINT InputParameters;
    UINT OutputParameters;
    UINT InstructionCount;
    UINT TempRegisterCount;
    UINT TempArrayCount;
    UINT DefCount;
    UINT DclCount;
    UINT TextureNormalInstructions;
    UINT TextureLoadInstructions;
    UINT TextureCompInstructions;
    UINT TextureBiasInstructions;
    UINT TextureGradientInstructions;
    UINT FloatInstructionCount;
    UINT IntInstructionCount;
    UINT UintInstructionCount;
    UINT StaticFlowControlCount;
    UINT DynamicFlowControlCount;
    UINT MacroInstructionCount;
    UINT ArrayInstructionCount;
    UINT CutInstructionCount;
    UINT EmitInstructionCount;
    D3D_PRIMITIVE_TOPOLOGY GSOutputTopology;
    UINT GSMaxOutputVertexCount;
    D3D_PRIMITIVE InputPrimitive;
    UINT PatchConstantParameters;
    UINT cGSInstanceCount;
    UINT cControlPoints;
    D3D_TESSELLATOR_OUTPUT_PRIMITIVE HSOutputPrimitive;
    D3D_TESSELLATOR_PARTITIONING HSPartitioning;
    D3D_TESSELLATOR_DOMAIN TessellatorDomain;
    UINT cBarrierInstructions;
    UINT cInterlockedInstructions;
    UINT cTextureStoreInstructions;
} D3D12_SHADER_DESC;
typedef struct _D3D12_SHADER_INPUT_BIND_DESC
{
    LPCSTR Name;
    D3D_SHADER_INPUT_TYPE Type;
    UINT BindPoint;
    UINT BindCount;
    UINT uFlags;
    D3D_RESOURCE_RETURN_TYPE ReturnType;
    D3D_SRV_DIMENSION Dimension;
    UINT NumSamples;
    UINT Space;
    UINT uID;
} D3D12_SHADER_INPUT_BIND_DESC;
typedef struct _D3D12_LIBRARY_DESC
{
    LPCSTR Creator;
    UINT Flags;
    UINT FunctionCount;
} D3D12_LIBRARY_DESC;
typedef struct _D3D12_FUNCTION_DESC
{
    UINT Version;
    LPCSTR Creator;
    UINT Flags;
    UINT ConstantBuffers;
    UINT BoundResources;
    UINT InstructionCount;
    UINT TempRegisterCount;
    UINT TempArrayCount;
    UINT DefCount;
    UINT DclCount;
    UINT TextureNormalInstructions;
    UINT TextureLoadInstructions;
    UINT TextureCompInstructions;
    UINT TextureBiasInstructions;
    UINT TextureGradientInstructions;
    UINT FloatInstructionCount;
    UINT IntInstructionCount;
    UINT UintInstructionCount;
    UINT StaticFlowControlCount;
    UINT DynamicFlowControlCount;
    UINT MacroInstructionCount;
    UINT ArrayInstructionCount;
    UINT MovInstructionCount;
    UINT MovcInstructionCount;
    UINT ConversionInstructionCount;
    UINT BitwiseInstructionCount;
    D3D_FEATURE_LEVEL MinFeatureLevel;
    UINT64 RequiredFeatureFlags;
    LPCSTR Name;
    INT FunctionParameterCount;
    BOOL HasReturn;
    BOOL Has10Level9VertexShader;
    BOOL Has10Level9PixelShader;
} D3D12_FUNCTION_DESC;
typedef struct _D3D12_PARAMETER_DESC
{
    LPCSTR Name;
    LPCSTR SemanticName;
    D3D_SHADER_VARIABLE_TYPE Type;
    D3D_SHADER_VARIABLE_CLASS Class;
    UINT Rows;
    UINT Columns;
    D3D_INTERPOLATION_MODE InterpolationMode;
    D3D_PARAMETER_FLAGS Flags;
    UINT FirstInRegister;
    UINT FirstInComponent;
    UINT FirstOutRegister;
    UINT FirstOutComponent;
} D3D12_PARAMETER_DESC;
typedef interface ID3D12ShaderReflectionType ID3D12ShaderReflectionType;
typedef interface ID3D12ShaderReflectionType *LPD3D12SHADERREFLECTIONTYPE;
typedef interface ID3D12ShaderReflectionVariable ID3D12ShaderReflectionVariable;
typedef interface ID3D12ShaderReflectionVariable *LPD3D12SHADERREFLECTIONVARIABLE;
typedef interface ID3D12ShaderReflectionConstantBuffer ID3D12ShaderReflectionConstantBuffer;
typedef interface ID3D12ShaderReflectionConstantBuffer *LPD3D12SHADERREFLECTIONCONSTANTBUFFER;
typedef interface ID3D12ShaderReflection ID3D12ShaderReflection;
typedef interface ID3D12ShaderReflection *LPD3D12SHADERREFLECTION;
typedef interface ID3D12LibraryReflection ID3D12LibraryReflection;
typedef interface ID3D12LibraryReflection *LPD3D12LIBRARYREFLECTION;
typedef interface ID3D12FunctionReflection ID3D12FunctionReflection;
typedef interface ID3D12FunctionReflection *LPD3D12FUNCTIONREFLECTION;
typedef interface ID3D12FunctionParameterReflection ID3D12FunctionParameterReflection;
typedef interface ID3D12FunctionParameterReflection *LPD3D12FUNCTIONPARAMETERREFLECTION;
interface DECLSPEC_UUID("E913C351-783D-48CA-A1D1-4F306284AD56") ID3D12ShaderReflectionType;
DEFINE_GUID(IID_ID3D12ShaderReflectionType,
0xe913c351, 0x783d, 0x48ca, 0xa1, 0xd1, 0x4f, 0x30, 0x62, 0x84, 0xad, 0x56);
DECLARE_INTERFACE(ID3D12ShaderReflectionType)
{
    STDMETHOD(GetDesc)(THIS_ _Out_ D3D12_SHADER_TYPE_DESC *pDesc) PURE;
    STDMETHOD_(ID3D12ShaderReflectionType*, GetMemberTypeByIndex)(THIS_ _In_ UINT Index) PURE;
    STDMETHOD_(ID3D12ShaderReflectionType*, GetMemberTypeByName)(THIS_ _In_ LPCSTR Name) PURE;
    STDMETHOD_(LPCSTR, GetMemberTypeName)(THIS_ _In_ UINT Index) PURE;
    STDMETHOD(IsEqual)(THIS_ _In_ ID3D12ShaderReflectionType* pType) PURE;
    STDMETHOD_(ID3D12ShaderReflectionType*, GetSubType)(THIS) PURE;
    STDMETHOD_(ID3D12ShaderReflectionType*, GetBaseClass)(THIS) PURE;
    STDMETHOD_(UINT, GetNumInterfaces)(THIS) PURE;
    STDMETHOD_(ID3D12ShaderReflectionType*, GetInterfaceByIndex)(THIS_ _In_ UINT uIndex) PURE;
    STDMETHOD(IsOfType)(THIS_ _In_ ID3D12ShaderReflectionType* pType) PURE;
    STDMETHOD(ImplementsInterface)(THIS_ _In_ ID3D12ShaderReflectionType* pBase) PURE;
};
interface DECLSPEC_UUID("8337A8A6-A216-444A-B2F4-314733A73AEA") ID3D12ShaderReflectionVariable;
DEFINE_GUID(IID_ID3D12ShaderReflectionVariable,
0x8337a8a6, 0xa216, 0x444a, 0xb2, 0xf4, 0x31, 0x47, 0x33, 0xa7, 0x3a, 0xea);
DECLARE_INTERFACE(ID3D12ShaderReflectionVariable)
{
    STDMETHOD(GetDesc)(THIS_ _Out_ D3D12_SHADER_VARIABLE_DESC *pDesc) PURE;
    STDMETHOD_(ID3D12ShaderReflectionType*, GetType)(THIS) PURE;
    STDMETHOD_(ID3D12ShaderReflectionConstantBuffer*, GetBuffer)(THIS) PURE;
    STDMETHOD_(UINT, GetInterfaceSlot)(THIS_ _In_ UINT uArrayIndex) PURE;
};
interface DECLSPEC_UUID("C59598B4-48B3-4869-B9B1-B1618B14A8B7") ID3D12ShaderReflectionConstantBuffer;
DEFINE_GUID(IID_ID3D12ShaderReflectionConstantBuffer,
0xc59598b4, 0x48b3, 0x4869, 0xb9, 0xb1, 0xb1, 0x61, 0x8b, 0x14, 0xa8, 0xb7);
DECLARE_INTERFACE(ID3D12ShaderReflectionConstantBuffer)
{
    STDMETHOD(GetDesc)(THIS_ D3D12_SHADER_BUFFER_DESC *pDesc) PURE;
    STDMETHOD_(ID3D12ShaderReflectionVariable*, GetVariableByIndex)(THIS_ _In_ UINT Index) PURE;
    STDMETHOD_(ID3D12ShaderReflectionVariable*, GetVariableByName)(THIS_ _In_ LPCSTR Name) PURE;
};
interface DECLSPEC_UUID("5A58797D-A72C-478D-8BA2-EFC6B0EFE88E") ID3D12ShaderReflection;
DEFINE_GUID(IID_ID3D12ShaderReflection,
0x5a58797d, 0xa72c, 0x478d, 0x8b, 0xa2, 0xef, 0xc6, 0xb0, 0xef, 0xe8, 0x8e);
DECLARE_INTERFACE_(ID3D12ShaderReflection, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ _In_ REFIID iid,
                              _Out_ LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetDesc)(THIS_ _Out_ D3D12_SHADER_DESC *pDesc) PURE;
    STDMETHOD_(ID3D12ShaderReflectionConstantBuffer*, GetConstantBufferByIndex)(THIS_ _In_ UINT Index) PURE;
    STDMETHOD_(ID3D12ShaderReflectionConstantBuffer*, GetConstantBufferByName)(THIS_ _In_ LPCSTR Name) PURE;
    STDMETHOD(GetResourceBindingDesc)(THIS_ _In_ UINT ResourceIndex,
                                      _Out_ D3D12_SHADER_INPUT_BIND_DESC *pDesc) PURE;
    STDMETHOD(GetInputParameterDesc)(THIS_ _In_ UINT ParameterIndex,
                                     _Out_ D3D12_SIGNATURE_PARAMETER_DESC *pDesc) PURE;
    STDMETHOD(GetOutputParameterDesc)(THIS_ _In_ UINT ParameterIndex,
                                      _Out_ D3D12_SIGNATURE_PARAMETER_DESC *pDesc) PURE;
    STDMETHOD(GetPatchConstantParameterDesc)(THIS_ _In_ UINT ParameterIndex,
                                             _Out_ D3D12_SIGNATURE_PARAMETER_DESC *pDesc) PURE;
    STDMETHOD_(ID3D12ShaderReflectionVariable*, GetVariableByName)(THIS_ _In_ LPCSTR Name) PURE;
    STDMETHOD(GetResourceBindingDescByName)(THIS_ _In_ LPCSTR Name,
                                            _Out_ D3D12_SHADER_INPUT_BIND_DESC *pDesc) PURE;
    STDMETHOD_(UINT, GetMovInstructionCount)(THIS) PURE;
    STDMETHOD_(UINT, GetMovcInstructionCount)(THIS) PURE;
    STDMETHOD_(UINT, GetConversionInstructionCount)(THIS) PURE;
    STDMETHOD_(UINT, GetBitwiseInstructionCount)(THIS) PURE;
    STDMETHOD_(D3D_PRIMITIVE, GetGSInputPrimitive)(THIS) PURE;
    STDMETHOD_(BOOL, IsSampleFrequencyShader)(THIS) PURE;
    STDMETHOD_(UINT, GetNumInterfaceSlots)(THIS) PURE;
    STDMETHOD(GetMinFeatureLevel)(THIS_ _Out_ enum D3D_FEATURE_LEVEL* pLevel) PURE;
    STDMETHOD_(UINT, GetThreadGroupSize)(THIS_
                                         _Out_opt_ UINT* pSizeX,
                                         _Out_opt_ UINT* pSizeY,
                                         _Out_opt_ UINT* pSizeZ) PURE;
    STDMETHOD_(UINT64, GetRequiresFlags)(THIS) PURE;
};
interface DECLSPEC_UUID("8E349D19-54DB-4A56-9DC9-119D87BDB804") ID3D12LibraryReflection;
DEFINE_GUID(IID_ID3D12LibraryReflection,
0x8e349d19, 0x54db, 0x4a56, 0x9d, 0xc9, 0x11, 0x9d, 0x87, 0xbd, 0xb8, 0x4);
DECLARE_INTERFACE_(ID3D12LibraryReflection, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ _In_ REFIID iid, _Out_ LPVOID * ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetDesc)(THIS_ _Out_ D3D12_LIBRARY_DESC * pDesc) PURE;
    STDMETHOD_(ID3D12FunctionReflection *, GetFunctionByIndex)(THIS_ _In_ INT FunctionIndex) PURE;
};
interface DECLSPEC_UUID("1108795C-2772-4BA9-B2A8-D464DC7E2799") ID3D12FunctionReflection;
DEFINE_GUID(IID_ID3D12FunctionReflection,
0x1108795c, 0x2772, 0x4ba9, 0xb2, 0xa8, 0xd4, 0x64, 0xdc, 0x7e, 0x27, 0x99);
DECLARE_INTERFACE(ID3D12FunctionReflection)
{
    STDMETHOD(GetDesc)(THIS_ _Out_ D3D12_FUNCTION_DESC * pDesc) PURE;
    STDMETHOD_(ID3D12ShaderReflectionConstantBuffer *, GetConstantBufferByIndex)(THIS_ _In_ UINT BufferIndex) PURE;
    STDMETHOD_(ID3D12ShaderReflectionConstantBuffer *, GetConstantBufferByName)(THIS_ _In_ LPCSTR Name) PURE;
    STDMETHOD(GetResourceBindingDesc)(THIS_ _In_ UINT ResourceIndex,
                                      _Out_ D3D12_SHADER_INPUT_BIND_DESC * pDesc) PURE;
    STDMETHOD_(ID3D12ShaderReflectionVariable *, GetVariableByName)(THIS_ _In_ LPCSTR Name) PURE;
    STDMETHOD(GetResourceBindingDescByName)(THIS_ _In_ LPCSTR Name,
                                            _Out_ D3D12_SHADER_INPUT_BIND_DESC * pDesc) PURE;
    STDMETHOD_(ID3D12FunctionParameterReflection *, GetFunctionParameter)(THIS_ _In_ INT ParameterIndex) PURE;
};
interface DECLSPEC_UUID("EC25F42D-7006-4F2B-B33E-02CC3375733F") ID3D12FunctionParameterReflection;
DEFINE_GUID(IID_ID3D12FunctionParameterReflection,
0xec25f42d, 0x7006, 0x4f2b, 0xb3, 0x3e, 0x2, 0xcc, 0x33, 0x75, 0x73, 0x3f);
DECLARE_INTERFACE(ID3D12FunctionParameterReflection)
{
    STDMETHOD(GetDesc)(THIS_ _Out_ D3D12_PARAMETER_DESC * pDesc) PURE;
};
extern "C" {
}
