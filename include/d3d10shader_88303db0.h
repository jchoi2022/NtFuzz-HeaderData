#include "d3d10.h"
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef D3D_SHADER_MACRO D3D10_SHADER_MACRO;
typedef D3D10_SHADER_MACRO* LPD3D10_SHADER_MACRO;
typedef D3D_SHADER_VARIABLE_CLASS D3D10_SHADER_VARIABLE_CLASS;
typedef D3D10_SHADER_VARIABLE_CLASS* LPD3D10_SHADER_VARIABLE_CLASS;
typedef D3D_SHADER_VARIABLE_FLAGS D3D10_SHADER_VARIABLE_FLAGS;
typedef D3D10_SHADER_VARIABLE_FLAGS* LPD3D10_SHADER_VARIABLE_FLAGS;
typedef D3D_SHADER_VARIABLE_TYPE D3D10_SHADER_VARIABLE_TYPE;
typedef D3D10_SHADER_VARIABLE_TYPE* LPD3D10_SHADER_VARIABLE_TYPE;
typedef D3D_SHADER_INPUT_FLAGS D3D10_SHADER_INPUT_FLAGS;
typedef D3D10_SHADER_INPUT_FLAGS* LPD3D10_SHADER_INPUT_FLAGS;
typedef D3D_SHADER_INPUT_TYPE D3D10_SHADER_INPUT_TYPE;
typedef D3D10_SHADER_INPUT_TYPE* LPD3D10_SHADER_INPUT_TYPE;
typedef D3D_SHADER_CBUFFER_FLAGS D3D10_SHADER_CBUFFER_FLAGS;
typedef D3D10_SHADER_CBUFFER_FLAGS* LPD3D10_SHADER_CBUFFER_FLAGS;
typedef D3D_CBUFFER_TYPE D3D10_CBUFFER_TYPE;
typedef D3D10_CBUFFER_TYPE* LPD3D10_CBUFFER_TYPE;
typedef D3D_NAME D3D10_NAME;
typedef D3D_RESOURCE_RETURN_TYPE D3D10_RESOURCE_RETURN_TYPE;
typedef D3D_REGISTER_COMPONENT_TYPE D3D10_REGISTER_COMPONENT_TYPE;
typedef D3D_INCLUDE_TYPE D3D10_INCLUDE_TYPE;
typedef interface ID3DInclude ID3D10Include;
typedef interface ID3DInclude* LPD3D10INCLUDE;
typedef struct _D3D10_SHADER_DESC
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
    D3D10_PRIMITIVE_TOPOLOGY GSOutputTopology;
    UINT GSMaxOutputVertexCount;
} D3D10_SHADER_DESC;
typedef struct _D3D10_SHADER_BUFFER_DESC
{
    LPCSTR Name;
    D3D10_CBUFFER_TYPE Type;
    UINT Variables;
    UINT Size;
    UINT uFlags;
} D3D10_SHADER_BUFFER_DESC;
typedef struct _D3D10_SHADER_VARIABLE_DESC
{
    LPCSTR Name;
    UINT StartOffset;
    UINT Size;
    UINT uFlags;
    LPVOID DefaultValue;
} D3D10_SHADER_VARIABLE_DESC;
typedef struct _D3D10_SHADER_TYPE_DESC
{
    D3D10_SHADER_VARIABLE_CLASS Class;
    D3D10_SHADER_VARIABLE_TYPE Type;
    UINT Rows;
    UINT Columns;
    UINT Elements;
    UINT Members;
    UINT Offset;
} D3D10_SHADER_TYPE_DESC;
typedef struct _D3D10_SHADER_INPUT_BIND_DESC
{
    LPCSTR Name;
    D3D10_SHADER_INPUT_TYPE Type;
    UINT BindPoint;
    UINT BindCount;
    UINT uFlags;
    D3D10_RESOURCE_RETURN_TYPE ReturnType;
    D3D10_SRV_DIMENSION Dimension;
    UINT NumSamples;
} D3D10_SHADER_INPUT_BIND_DESC;
typedef struct _D3D10_SIGNATURE_PARAMETER_DESC
{
    LPCSTR SemanticName;
    UINT SemanticIndex;
    UINT Register;
    D3D10_NAME SystemValueType;
    D3D10_REGISTER_COMPONENT_TYPE ComponentType;
    BYTE Mask;
    BYTE ReadWriteMask;
} D3D10_SIGNATURE_PARAMETER_DESC;
typedef interface ID3D10ShaderReflectionType ID3D10ShaderReflectionType;
typedef interface ID3D10ShaderReflectionType *LPD3D10SHADERREFLECTIONTYPE;
interface DECLSPEC_UUID("C530AD7D-9B16-4395-A979-BA2ECFF83ADD") ID3D10ShaderReflectionType;
DEFINE_GUID(IID_ID3D10ShaderReflectionType,
0xc530ad7d, 0x9b16, 0x4395, 0xa9, 0x79, 0xba, 0x2e, 0xcf, 0xf8, 0x3a, 0xdd);
DECLARE_INTERFACE(ID3D10ShaderReflectionType)
{
    STDMETHOD(GetDesc)(THIS_ D3D10_SHADER_TYPE_DESC *pDesc) PURE;
    STDMETHOD_(ID3D10ShaderReflectionType*, GetMemberTypeByIndex)(THIS_ UINT Index) PURE;
    STDMETHOD_(ID3D10ShaderReflectionType*, GetMemberTypeByName)(THIS_ LPCSTR Name) PURE;
    STDMETHOD_(LPCSTR, GetMemberTypeName)(THIS_ UINT Index) PURE;
};
typedef interface ID3D10ShaderReflectionVariable ID3D10ShaderReflectionVariable;
typedef interface ID3D10ShaderReflectionVariable *LPD3D10SHADERREFLECTIONVARIABLE;
interface DECLSPEC_UUID("1BF63C95-2650-405d-99C1-3636BD1DA0A1") ID3D10ShaderReflectionVariable;
DEFINE_GUID(IID_ID3D10ShaderReflectionVariable,
0x1bf63c95, 0x2650, 0x405d, 0x99, 0xc1, 0x36, 0x36, 0xbd, 0x1d, 0xa0, 0xa1);
DECLARE_INTERFACE(ID3D10ShaderReflectionVariable)
{
    STDMETHOD(GetDesc)(THIS_ _Out_ D3D10_SHADER_VARIABLE_DESC *pDesc) PURE;
    STDMETHOD_(ID3D10ShaderReflectionType*, GetType)(THIS) PURE;
};
typedef interface ID3D10ShaderReflectionConstantBuffer ID3D10ShaderReflectionConstantBuffer;
typedef interface ID3D10ShaderReflectionConstantBuffer *LPD3D10SHADERREFLECTIONCONSTANTBUFFER;
interface DECLSPEC_UUID("66C66A94-DDDD-4b62-A66A-F0DA33C2B4D0") ID3D10ShaderReflectionConstantBuffer;
DEFINE_GUID(IID_ID3D10ShaderReflectionConstantBuffer,
0x66c66a94, 0xdddd, 0x4b62, 0xa6, 0x6a, 0xf0, 0xda, 0x33, 0xc2, 0xb4, 0xd0);
DECLARE_INTERFACE(ID3D10ShaderReflectionConstantBuffer)
{
    STDMETHOD(GetDesc)(THIS_ _Out_ D3D10_SHADER_BUFFER_DESC *pDesc) PURE;
    STDMETHOD_(ID3D10ShaderReflectionVariable*, GetVariableByIndex)(THIS_ UINT Index) PURE;
    STDMETHOD_(ID3D10ShaderReflectionVariable*, GetVariableByName)(THIS_ LPCSTR Name) PURE;
};
typedef interface ID3D10ShaderReflection ID3D10ShaderReflection;
typedef interface ID3D10ShaderReflection *LPD3D10SHADERREFLECTION;
interface DECLSPEC_UUID("D40E20B6-F8F7-42ad-AB20-4BAF8F15DFAA") ID3D10ShaderReflection;
DEFINE_GUID(IID_ID3D10ShaderReflection,
0xd40e20b6, 0xf8f7, 0x42ad, 0xab, 0x20, 0x4b, 0xaf, 0x8f, 0x15, 0xdf, 0xaa);
DECLARE_INTERFACE_(ID3D10ShaderReflection, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetDesc)(THIS_ _Out_ D3D10_SHADER_DESC *pDesc) PURE;
    STDMETHOD_(ID3D10ShaderReflectionConstantBuffer*, GetConstantBufferByIndex)(THIS_ UINT Index) PURE;
    STDMETHOD_(ID3D10ShaderReflectionConstantBuffer*, GetConstantBufferByName)(THIS_ LPCSTR Name) PURE;
    STDMETHOD(GetResourceBindingDesc)(THIS_ UINT ResourceIndex, _Out_ D3D10_SHADER_INPUT_BIND_DESC *pDesc) PURE;
    STDMETHOD(GetInputParameterDesc)(THIS_ UINT ParameterIndex, _Out_ D3D10_SIGNATURE_PARAMETER_DESC *pDesc) PURE;
    STDMETHOD(GetOutputParameterDesc)(THIS_ UINT ParameterIndex, _Out_ D3D10_SIGNATURE_PARAMETER_DESC *pDesc) PURE;
};
extern "C" {
HRESULT WINAPI D3D10CompileShader(_In_reads_bytes_(SrcDataSize) LPCSTR pSrcData, SIZE_T SrcDataSize, _In_opt_ LPCSTR pFileName, _In_opt_ CONST D3D10_SHADER_MACRO* pDefines, _In_opt_ LPD3D10INCLUDE pInclude,
    LPCSTR pFunctionName, LPCSTR pProfile, UINT Flags, _Out_ ID3D10Blob** ppShader, _Out_opt_ ID3D10Blob** ppErrorMsgs);
HRESULT WINAPI D3D10DisassembleShader(_In_reads_bytes_(BytecodeLength) CONST void *pShader, SIZE_T BytecodeLength, BOOL EnableColorCode, _In_opt_ LPCSTR pComments, _Out_ ID3D10Blob** ppDisassembly);
LPCSTR WINAPI D3D10GetPixelShaderProfile(_In_ ID3D10Device *pDevice);
LPCSTR WINAPI D3D10GetVertexShaderProfile(_In_ ID3D10Device *pDevice);
LPCSTR WINAPI D3D10GetGeometryShaderProfile(_In_ ID3D10Device *pDevice);
HRESULT WINAPI D3D10ReflectShader(_In_reads_bytes_(BytecodeLength) CONST void *pShaderBytecode, SIZE_T BytecodeLength, _Out_ ID3D10ShaderReflection **ppReflector);
HRESULT WINAPI D3D10PreprocessShader(_In_reads_bytes_(SrcDataSize) LPCSTR pSrcData, SIZE_T SrcDataSize, _In_opt_ LPCSTR pFileName, _In_opt_ CONST D3D10_SHADER_MACRO* pDefines,
    _In_opt_ LPD3D10INCLUDE pInclude, _Out_ ID3D10Blob** ppShaderText, _Out_opt_ ID3D10Blob** ppErrorMsgs);
HRESULT WINAPI D3D10GetInputSignatureBlob(_In_reads_bytes_(BytecodeLength) CONST void *pShaderBytecode, SIZE_T BytecodeLength, _Out_ ID3D10Blob **ppSignatureBlob);
HRESULT WINAPI D3D10GetOutputSignatureBlob(_In_reads_bytes_(BytecodeLength) CONST void *pShaderBytecode, SIZE_T BytecodeLength, _Out_ ID3D10Blob **ppSignatureBlob);
HRESULT WINAPI D3D10GetInputAndOutputSignatureBlob(_In_reads_bytes_(BytecodeLength) CONST void *pShaderBytecode, SIZE_T BytecodeLength, _Out_ ID3D10Blob **ppSignatureBlob);
HRESULT WINAPI D3D10GetShaderDebugInfo(_In_reads_bytes_(BytecodeLength) CONST void *pShaderBytecode, SIZE_T BytecodeLength, _Out_ ID3D10Blob** ppDebugInfo);
}
#endif
#pragma endregion
