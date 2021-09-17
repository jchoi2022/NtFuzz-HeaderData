#include "d3dcommon.h"
typedef enum D3D11_SHADER_VERSION_TYPE
{
    D3D11_SHVER_PIXEL_SHADER = 0,
    D3D11_SHVER_VERTEX_SHADER = 1,
    D3D11_SHVER_GEOMETRY_SHADER = 2,
    D3D11_SHVER_HULL_SHADER = 3,
    D3D11_SHVER_DOMAIN_SHADER = 4,
    D3D11_SHVER_COMPUTE_SHADER = 5,
    D3D11_SHVER_RESERVED0 = 0xFFF0,
} D3D11_SHADER_VERSION_TYPE;
    (((_Version) >> 16) & 0xffff)
    (((_Version) >> 4) & 0xf)
    (((_Version) >> 0) & 0xf)
typedef D3D_RESOURCE_RETURN_TYPE D3D11_RESOURCE_RETURN_TYPE;
typedef D3D_CBUFFER_TYPE D3D11_CBUFFER_TYPE;
typedef struct _D3D11_SIGNATURE_PARAMETER_DESC
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
} D3D11_SIGNATURE_PARAMETER_DESC;
typedef struct _D3D11_SHADER_BUFFER_DESC
{
    LPCSTR Name;
    D3D_CBUFFER_TYPE Type;
    UINT Variables;
    UINT Size;
    UINT uFlags;
} D3D11_SHADER_BUFFER_DESC;
typedef struct _D3D11_SHADER_VARIABLE_DESC
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
} D3D11_SHADER_VARIABLE_DESC;
typedef struct _D3D11_SHADER_TYPE_DESC
{
    D3D_SHADER_VARIABLE_CLASS Class;
    D3D_SHADER_VARIABLE_TYPE Type;
    UINT Rows;
    UINT Columns;
    UINT Elements;
    UINT Members;
    UINT Offset;
    LPCSTR Name;
} D3D11_SHADER_TYPE_DESC;
typedef D3D_TESSELLATOR_DOMAIN D3D11_TESSELLATOR_DOMAIN;
typedef D3D_TESSELLATOR_PARTITIONING D3D11_TESSELLATOR_PARTITIONING;
typedef D3D_TESSELLATOR_OUTPUT_PRIMITIVE D3D11_TESSELLATOR_OUTPUT_PRIMITIVE;
typedef struct _D3D11_SHADER_DESC
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
} D3D11_SHADER_DESC;
typedef struct _D3D11_SHADER_INPUT_BIND_DESC
{
    LPCSTR Name;
    D3D_SHADER_INPUT_TYPE Type;
    UINT BindPoint;
    UINT BindCount;
    UINT uFlags;
    D3D_RESOURCE_RETURN_TYPE ReturnType;
    D3D_SRV_DIMENSION Dimension;
    UINT NumSamples;
} D3D11_SHADER_INPUT_BIND_DESC;
typedef struct _D3D11_LIBRARY_DESC
{
    LPCSTR Creator;
    UINT Flags;
    UINT FunctionCount;
} D3D11_LIBRARY_DESC;
typedef struct _D3D11_FUNCTION_DESC
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
} D3D11_FUNCTION_DESC;
typedef struct _D3D11_PARAMETER_DESC
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
} D3D11_PARAMETER_DESC;
typedef interface ID3D11ShaderReflectionType ID3D11ShaderReflectionType;
typedef interface ID3D11ShaderReflectionType *LPD3D11SHADERREFLECTIONTYPE;
typedef interface ID3D11ShaderReflectionVariable ID3D11ShaderReflectionVariable;
typedef interface ID3D11ShaderReflectionVariable *LPD3D11SHADERREFLECTIONVARIABLE;
typedef interface ID3D11ShaderReflectionConstantBuffer ID3D11ShaderReflectionConstantBuffer;
typedef interface ID3D11ShaderReflectionConstantBuffer *LPD3D11SHADERREFLECTIONCONSTANTBUFFER;
typedef interface ID3D11ShaderReflection ID3D11ShaderReflection;
typedef interface ID3D11ShaderReflection *LPD3D11SHADERREFLECTION;
typedef interface ID3D11LibraryReflection ID3D11LibraryReflection;
typedef interface ID3D11LibraryReflection *LPD3D11LIBRARYREFLECTION;
typedef interface ID3D11FunctionReflection ID3D11FunctionReflection;
typedef interface ID3D11FunctionReflection *LPD3D11FUNCTIONREFLECTION;
typedef interface ID3D11FunctionParameterReflection ID3D11FunctionParameterReflection;
typedef interface ID3D11FunctionParameterReflection *LPD3D11FUNCTIONPARAMETERREFLECTION;
interface DECLSPEC_UUID("6E6FFA6A-9BAE-4613-A51E-91652D508C21") ID3D11ShaderReflectionType;
DEFINE_GUID(IID_ID3D11ShaderReflectionType,
0x6e6ffa6a, 0x9bae, 0x4613, 0xa5, 0x1e, 0x91, 0x65, 0x2d, 0x50, 0x8c, 0x21);
DECLARE_INTERFACE(ID3D11ShaderReflectionType)
{
    STDMETHOD(GetDesc)(THIS_ _Out_ D3D11_SHADER_TYPE_DESC *pDesc) PURE;
    STDMETHOD_(ID3D11ShaderReflectionType*, GetMemberTypeByIndex)(THIS_ _In_ UINT Index) PURE;
    STDMETHOD_(ID3D11ShaderReflectionType*, GetMemberTypeByName)(THIS_ _In_ LPCSTR Name) PURE;
    STDMETHOD_(LPCSTR, GetMemberTypeName)(THIS_ _In_ UINT Index) PURE;
    STDMETHOD(IsEqual)(THIS_ _In_ ID3D11ShaderReflectionType* pType) PURE;
    STDMETHOD_(ID3D11ShaderReflectionType*, GetSubType)(THIS) PURE;
    STDMETHOD_(ID3D11ShaderReflectionType*, GetBaseClass)(THIS) PURE;
    STDMETHOD_(UINT, GetNumInterfaces)(THIS) PURE;
    STDMETHOD_(ID3D11ShaderReflectionType*, GetInterfaceByIndex)(THIS_ _In_ UINT uIndex) PURE;
    STDMETHOD(IsOfType)(THIS_ _In_ ID3D11ShaderReflectionType* pType) PURE;
    STDMETHOD(ImplementsInterface)(THIS_ _In_ ID3D11ShaderReflectionType* pBase) PURE;
};
interface DECLSPEC_UUID("51F23923-F3E5-4BD1-91CB-606177D8DB4C") ID3D11ShaderReflectionVariable;
DEFINE_GUID(IID_ID3D11ShaderReflectionVariable,
0x51f23923, 0xf3e5, 0x4bd1, 0x91, 0xcb, 0x60, 0x61, 0x77, 0xd8, 0xdb, 0x4c);
DECLARE_INTERFACE(ID3D11ShaderReflectionVariable)
{
    STDMETHOD(GetDesc)(THIS_ _Out_ D3D11_SHADER_VARIABLE_DESC *pDesc) PURE;
    STDMETHOD_(ID3D11ShaderReflectionType*, GetType)(THIS) PURE;
    STDMETHOD_(ID3D11ShaderReflectionConstantBuffer*, GetBuffer)(THIS) PURE;
    STDMETHOD_(UINT, GetInterfaceSlot)(THIS_ _In_ UINT uArrayIndex) PURE;
};
interface DECLSPEC_UUID("EB62D63D-93DD-4318-8AE8-C6F83AD371B8") ID3D11ShaderReflectionConstantBuffer;
DEFINE_GUID(IID_ID3D11ShaderReflectionConstantBuffer,
0xeb62d63d, 0x93dd, 0x4318, 0x8a, 0xe8, 0xc6, 0xf8, 0x3a, 0xd3, 0x71, 0xb8);
DECLARE_INTERFACE(ID3D11ShaderReflectionConstantBuffer)
{
    STDMETHOD(GetDesc)(THIS_ D3D11_SHADER_BUFFER_DESC *pDesc) PURE;
    STDMETHOD_(ID3D11ShaderReflectionVariable*, GetVariableByIndex)(THIS_ _In_ UINT Index) PURE;
    STDMETHOD_(ID3D11ShaderReflectionVariable*, GetVariableByName)(THIS_ _In_ LPCSTR Name) PURE;
};
interface DECLSPEC_UUID("8d536ca1-0cca-4956-a837-786963755584") ID3D11ShaderReflection;
DEFINE_GUID(IID_ID3D11ShaderReflection,
0x8d536ca1, 0x0cca, 0x4956, 0xa8, 0x37, 0x78, 0x69, 0x63, 0x75, 0x55, 0x84);
DECLARE_INTERFACE_(ID3D11ShaderReflection, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ _In_ REFIID iid,
                              _Out_ LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetDesc)(THIS_ _Out_ D3D11_SHADER_DESC *pDesc) PURE;
    STDMETHOD_(ID3D11ShaderReflectionConstantBuffer*, GetConstantBufferByIndex)(THIS_ _In_ UINT Index) PURE;
    STDMETHOD_(ID3D11ShaderReflectionConstantBuffer*, GetConstantBufferByName)(THIS_ _In_ LPCSTR Name) PURE;
    STDMETHOD(GetResourceBindingDesc)(THIS_ _In_ UINT ResourceIndex,
                                      _Out_ D3D11_SHADER_INPUT_BIND_DESC *pDesc) PURE;
    STDMETHOD(GetInputParameterDesc)(THIS_ _In_ UINT ParameterIndex,
                                     _Out_ D3D11_SIGNATURE_PARAMETER_DESC *pDesc) PURE;
    STDMETHOD(GetOutputParameterDesc)(THIS_ _In_ UINT ParameterIndex,
                                      _Out_ D3D11_SIGNATURE_PARAMETER_DESC *pDesc) PURE;
    STDMETHOD(GetPatchConstantParameterDesc)(THIS_ _In_ UINT ParameterIndex,
                                             _Out_ D3D11_SIGNATURE_PARAMETER_DESC *pDesc) PURE;
    STDMETHOD_(ID3D11ShaderReflectionVariable*, GetVariableByName)(THIS_ _In_ LPCSTR Name) PURE;
    STDMETHOD(GetResourceBindingDescByName)(THIS_ _In_ LPCSTR Name,
                                            _Out_ D3D11_SHADER_INPUT_BIND_DESC *pDesc) PURE;
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
interface DECLSPEC_UUID("54384F1B-5B3E-4BB7-AE01-60BA3097CBB6") ID3D11LibraryReflection;
DEFINE_GUID(IID_ID3D11LibraryReflection,
0x54384f1b, 0x5b3e, 0x4bb7, 0xae, 0x1, 0x60, 0xba, 0x30, 0x97, 0xcb, 0xb6);
DECLARE_INTERFACE_(ID3D11LibraryReflection, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ _In_ REFIID iid, _Out_ LPVOID * ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetDesc)(THIS_ _Out_ D3D11_LIBRARY_DESC * pDesc) PURE;
    STDMETHOD_(ID3D11FunctionReflection *, GetFunctionByIndex)(THIS_ _In_ INT FunctionIndex) PURE;
};
interface DECLSPEC_UUID("207BCECB-D683-4A06-A8A3-9B149B9F73A4") ID3D11FunctionReflection;
DEFINE_GUID(IID_ID3D11FunctionReflection,
0x207bcecb, 0xd683, 0x4a06, 0xa8, 0xa3, 0x9b, 0x14, 0x9b, 0x9f, 0x73, 0xa4);
DECLARE_INTERFACE(ID3D11FunctionReflection)
{
    STDMETHOD(GetDesc)(THIS_ _Out_ D3D11_FUNCTION_DESC * pDesc) PURE;
    STDMETHOD_(ID3D11ShaderReflectionConstantBuffer *, GetConstantBufferByIndex)(THIS_ _In_ UINT BufferIndex) PURE;
    STDMETHOD_(ID3D11ShaderReflectionConstantBuffer *, GetConstantBufferByName)(THIS_ _In_ LPCSTR Name) PURE;
    STDMETHOD(GetResourceBindingDesc)(THIS_ _In_ UINT ResourceIndex,
                                      _Out_ D3D11_SHADER_INPUT_BIND_DESC * pDesc) PURE;
    STDMETHOD_(ID3D11ShaderReflectionVariable *, GetVariableByName)(THIS_ _In_ LPCSTR Name) PURE;
    STDMETHOD(GetResourceBindingDescByName)(THIS_ _In_ LPCSTR Name,
                                            _Out_ D3D11_SHADER_INPUT_BIND_DESC * pDesc) PURE;
    STDMETHOD_(ID3D11FunctionParameterReflection *, GetFunctionParameter)(THIS_ _In_ INT ParameterIndex) PURE;
};
interface DECLSPEC_UUID("42757488-334F-47FE-982E-1A65D08CC462") ID3D11FunctionParameterReflection;
DEFINE_GUID(IID_ID3D11FunctionParameterReflection,
0x42757488, 0x334f, 0x47fe, 0x98, 0x2e, 0x1a, 0x65, 0xd0, 0x8c, 0xc4, 0x62);
DECLARE_INTERFACE(ID3D11FunctionParameterReflection)
{
    STDMETHOD(GetDesc)(THIS_ _Out_ D3D11_PARAMETER_DESC * pDesc) PURE;
};
interface DECLSPEC_UUID("CAC701EE-80FC-4122-8242-10B39C8CEC34") ID3D11Module;
DEFINE_GUID(IID_ID3D11Module,
0xcac701ee, 0x80fc, 0x4122, 0x82, 0x42, 0x10, 0xb3, 0x9c, 0x8c, 0xec, 0x34);
DECLARE_INTERFACE_(ID3D11Module, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ _In_ REFIID iid, _Out_ LPVOID * ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(CreateInstance)(THIS_ _In_opt_ LPCSTR pNamespace,
                                    _COM_Outptr_ interface ID3D11ModuleInstance ** ppModuleInstance) PURE;
};
interface DECLSPEC_UUID("469E07F7-045A-48D5-AA12-68A478CDF75D") ID3D11ModuleInstance;
DEFINE_GUID(IID_ID3D11ModuleInstance,
0x469e07f7, 0x45a, 0x48d5, 0xaa, 0x12, 0x68, 0xa4, 0x78, 0xcd, 0xf7, 0x5d);
DECLARE_INTERFACE_(ID3D11ModuleInstance, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ _In_ REFIID iid, _Out_ LPVOID * ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(BindConstantBuffer)(THIS_ _In_ UINT uSrcSlot, _In_ UINT uDstSlot, _In_ UINT cbDstOffset) PURE;
    STDMETHOD(BindConstantBufferByName)(THIS_ _In_ LPCSTR pName, _In_ UINT uDstSlot, _In_ UINT cbDstOffset) PURE;
    STDMETHOD(BindResource)(THIS_ _In_ UINT uSrcSlot, _In_ UINT uDstSlot, _In_ UINT uCount) PURE;
    STDMETHOD(BindResourceByName)(THIS_ _In_ LPCSTR pName, _In_ UINT uDstSlot, _In_ UINT uCount) PURE;
    STDMETHOD(BindSampler)(THIS_ _In_ UINT uSrcSlot, _In_ UINT uDstSlot, _In_ UINT uCount) PURE;
    STDMETHOD(BindSamplerByName)(THIS_ _In_ LPCSTR pName, _In_ UINT uDstSlot, _In_ UINT uCount) PURE;
    STDMETHOD(BindUnorderedAccessView)(THIS_ _In_ UINT uSrcSlot, _In_ UINT uDstSlot, _In_ UINT uCount) PURE;
    STDMETHOD(BindUnorderedAccessViewByName)(THIS_ _In_ LPCSTR pName, _In_ UINT uDstSlot, _In_ UINT uCount) PURE;
    STDMETHOD(BindResourceAsUnorderedAccessView)(THIS_ _In_ UINT uSrcSrvSlot, _In_ UINT uDstUavSlot, _In_ UINT uCount) PURE;
    STDMETHOD(BindResourceAsUnorderedAccessViewByName)(THIS_ _In_ LPCSTR pSrvName, _In_ UINT uDstUavSlot, _In_ UINT uCount) PURE;
};
interface DECLSPEC_UUID("59A6CD0E-E10D-4C1F-88C0-63ABA1DAF30E") ID3D11Linker;
DEFINE_GUID(IID_ID3D11Linker,
0x59a6cd0e, 0xe10d, 0x4c1f, 0x88, 0xc0, 0x63, 0xab, 0xa1, 0xda, 0xf3, 0xe);
DECLARE_INTERFACE_(ID3D11Linker, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ _In_ REFIID iid, _Out_ LPVOID * ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(Link)(THIS_ _In_ interface ID3D11ModuleInstance * pEntry,
                          _In_ LPCSTR pEntryName,
                          _In_ LPCSTR pTargetName,
                          _In_ UINT uFlags,
                          _COM_Outptr_ ID3DBlob ** ppShaderBlob,
                          _Always_(_Outptr_opt_result_maybenull_) ID3DBlob ** ppErrorBuffer) PURE;
    STDMETHOD(UseLibrary)(THIS_ _In_ interface ID3D11ModuleInstance * pLibraryMI) PURE;
    STDMETHOD(AddClipPlaneFromCBuffer)(THIS_ _In_ UINT uCBufferSlot, _In_ UINT uCBufferEntry) PURE;
};
interface DECLSPEC_UUID("D80DD70C-8D2F-4751-94A1-03C79B3556DB") ID3D11LinkingNode;
DEFINE_GUID(IID_ID3D11LinkingNode,
0xd80dd70c, 0x8d2f, 0x4751, 0x94, 0xa1, 0x3, 0xc7, 0x9b, 0x35, 0x56, 0xdb);
DECLARE_INTERFACE_(ID3D11LinkingNode, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ _In_ REFIID iid, _Out_ LPVOID * ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
};
interface DECLSPEC_UUID("54133220-1CE8-43D3-8236-9855C5CEECFF") ID3D11FunctionLinkingGraph;
DEFINE_GUID(IID_ID3D11FunctionLinkingGraph,
0x54133220, 0x1ce8, 0x43d3, 0x82, 0x36, 0x98, 0x55, 0xc5, 0xce, 0xec, 0xff);
DECLARE_INTERFACE_(ID3D11FunctionLinkingGraph, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ _In_ REFIID iid, _Out_ LPVOID * ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(CreateModuleInstance)(THIS_ _COM_Outptr_ interface ID3D11ModuleInstance ** ppModuleInstance,
                                          _Always_(_Outptr_opt_result_maybenull_) ID3DBlob ** ppErrorBuffer) PURE;
    STDMETHOD(SetInputSignature)(THIS_ __in_ecount(cInputParameters) const D3D11_PARAMETER_DESC * pInputParameters,
                                       _In_ UINT cInputParameters,
                                       _COM_Outptr_ interface ID3D11LinkingNode ** ppInputNode) PURE;
    STDMETHOD(SetOutputSignature)(THIS_ __in_ecount(cOutputParameters) const D3D11_PARAMETER_DESC * pOutputParameters,
                                        _In_ UINT cOutputParameters,
                                        _COM_Outptr_ interface ID3D11LinkingNode ** ppOutputNode) PURE;
    STDMETHOD(CallFunction)(THIS_ _In_opt_ LPCSTR pModuleInstanceNamespace,
                                  _In_ interface ID3D11Module * pModuleWithFunctionPrototype,
                                  _In_ LPCSTR pFunctionName,
                                  _COM_Outptr_ interface ID3D11LinkingNode ** ppCallNode) PURE;
    STDMETHOD(PassValue)(THIS_ _In_ interface ID3D11LinkingNode * pSrcNode,
                               _In_ INT SrcParameterIndex,
                               _In_ interface ID3D11LinkingNode * pDstNode,
                               _In_ INT DstParameterIndex) PURE;
    STDMETHOD(PassValueWithSwizzle)(THIS_ _In_ interface ID3D11LinkingNode * pSrcNode,
                                          _In_ INT SrcParameterIndex,
                                          _In_ LPCSTR pSrcSwizzle,
                                          _In_ interface ID3D11LinkingNode * pDstNode,
                                          _In_ INT DstParameterIndex,
                                          _In_ LPCSTR pDstSwizzle) PURE;
    STDMETHOD(GetLastError)(THIS_ _Always_(_Outptr_opt_result_maybenull_) ID3DBlob ** ppErrorBuffer) PURE;
    STDMETHOD(GenerateHlsl)(THIS_ _In_ UINT uFlags,
                                  _COM_Outptr_ ID3DBlob ** ppBuffer) PURE;
};
extern "C" {
}
