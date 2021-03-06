#include "d3d10shader.h"
#include <winapifamily.h>
typedef enum _D3D10_SHADER_DEBUG_REGTYPE
{
    D3D10_SHADER_DEBUG_REG_INPUT,
    D3D10_SHADER_DEBUG_REG_OUTPUT,
    D3D10_SHADER_DEBUG_REG_CBUFFER,
    D3D10_SHADER_DEBUG_REG_TBUFFER,
    D3D10_SHADER_DEBUG_REG_TEMP,
    D3D10_SHADER_DEBUG_REG_TEMPARRAY,
    D3D10_SHADER_DEBUG_REG_TEXTURE,
    D3D10_SHADER_DEBUG_REG_SAMPLER,
    D3D10_SHADER_DEBUG_REG_IMMEDIATECBUFFER,
    D3D10_SHADER_DEBUG_REG_LITERAL,
    D3D10_SHADER_DEBUG_REG_UNUSED,
    D3D11_SHADER_DEBUG_REG_INTERFACE_POINTERS,
    D3D11_SHADER_DEBUG_REG_UAV,
    D3D10_SHADER_DEBUG_REG_FORCE_DWORD = 0x7fffffff,
} D3D10_SHADER_DEBUG_REGTYPE;
typedef enum _D3D10_SHADER_DEBUG_SCOPETYPE
{
    D3D10_SHADER_DEBUG_SCOPE_GLOBAL,
    D3D10_SHADER_DEBUG_SCOPE_BLOCK,
    D3D10_SHADER_DEBUG_SCOPE_FORLOOP,
    D3D10_SHADER_DEBUG_SCOPE_STRUCT,
    D3D10_SHADER_DEBUG_SCOPE_FUNC_PARAMS,
    D3D10_SHADER_DEBUG_SCOPE_STATEBLOCK,
    D3D10_SHADER_DEBUG_SCOPE_NAMESPACE,
    D3D10_SHADER_DEBUG_SCOPE_ANNOTATION,
    D3D10_SHADER_DEBUG_SCOPE_FORCE_DWORD = 0x7fffffff,
} D3D10_SHADER_DEBUG_SCOPETYPE;
typedef enum _D3D10_SHADER_DEBUG_VARTYPE
{
    D3D10_SHADER_DEBUG_VAR_VARIABLE,
    D3D10_SHADER_DEBUG_VAR_FUNCTION,
    D3D10_SHADER_DEBUG_VAR_FORCE_DWORD = 0x7fffffff,
} D3D10_SHADER_DEBUG_VARTYPE;
typedef struct _D3D10_SHADER_DEBUG_TOKEN_INFO
{
    UINT File;
    UINT Line;
    UINT Column;
    UINT TokenLength;
    UINT TokenId;
} D3D10_SHADER_DEBUG_TOKEN_INFO;
typedef struct _D3D10_SHADER_DEBUG_VAR_INFO
{
    UINT TokenId;
    D3D10_SHADER_VARIABLE_TYPE Type;
    UINT Register;
    UINT Component;
    UINT ScopeVar;
    UINT ScopeVarOffset;
} D3D10_SHADER_DEBUG_VAR_INFO;
typedef struct _D3D10_SHADER_DEBUG_INPUT_INFO
{
    UINT Var;
    D3D10_SHADER_DEBUG_REGTYPE InitialRegisterSet;
    UINT InitialBank;
    UINT InitialRegister;
    UINT InitialComponent;
    UINT InitialValue;
} D3D10_SHADER_DEBUG_INPUT_INFO;
typedef struct _D3D10_SHADER_DEBUG_SCOPEVAR_INFO
{
    UINT TokenId;
    D3D10_SHADER_DEBUG_VARTYPE VarType;
    D3D10_SHADER_VARIABLE_CLASS Class;
    UINT Rows;
    UINT Columns;
    UINT StructMemberScope;
    UINT uArrayIndices;
    UINT ArrayElements;
    UINT ArrayStrides;
    UINT uVariables;
    UINT uFirstVariable;
} D3D10_SHADER_DEBUG_SCOPEVAR_INFO;
typedef struct _D3D10_SHADER_DEBUG_SCOPE_INFO
{
    D3D10_SHADER_DEBUG_SCOPETYPE ScopeType;
    UINT Name;
    UINT uNameLen;
    UINT uVariables;
    UINT VariableData;
} D3D10_SHADER_DEBUG_SCOPE_INFO;
typedef struct _D3D10_SHADER_DEBUG_OUTPUTVAR
{
    UINT Var;
    UINT uValueMin, uValueMax;
    INT iValueMin, iValueMax;
    FLOAT fValueMin, fValueMax;
    BOOL bNaNPossible, bInfPossible;
} D3D10_SHADER_DEBUG_OUTPUTVAR;
typedef struct _D3D10_SHADER_DEBUG_OUTPUTREG_INFO
{
    D3D10_SHADER_DEBUG_REGTYPE OutputRegisterSet;
    UINT OutputReg;
    UINT TempArrayReg;
    UINT OutputComponents[4];
    D3D10_SHADER_DEBUG_OUTPUTVAR OutputVars[4];
    UINT IndexReg;
    UINT IndexComp;
} D3D10_SHADER_DEBUG_OUTPUTREG_INFO;
typedef struct _D3D10_SHADER_DEBUG_INST_INFO
{
    UINT Id;
    UINT Opcode;
    UINT uOutputs;
    D3D10_SHADER_DEBUG_OUTPUTREG_INFO pOutputs[2];
    UINT TokenId;
    UINT NestingLevel;
    UINT Scopes;
    UINT ScopeInfo;
    UINT AccessedVars;
    UINT AccessedVarsInfo;
} D3D10_SHADER_DEBUG_INST_INFO;
typedef struct _D3D10_SHADER_DEBUG_FILE_INFO
{
    UINT FileName;
    UINT FileNameLen;
    UINT FileData;
    UINT FileLen;
} D3D10_SHADER_DEBUG_FILE_INFO;
typedef struct _D3D10_SHADER_DEBUG_INFO
{
    UINT Size;
    UINT Creator;
    UINT EntrypointName;
    UINT ShaderTarget;
    UINT CompileFlags;
    UINT Files;
    UINT FileInfo;
    UINT Instructions;
    UINT InstructionInfo;
    UINT Variables;
    UINT VariableInfo;
    UINT InputVariables;
    UINT InputVariableInfo;
    UINT Tokens;
    UINT TokenInfo;
    UINT Scopes;
    UINT ScopeInfo;
    UINT ScopeVariables;
    UINT ScopeVariableInfo;
    UINT UintOffset;
    UINT StringOffset;
} D3D10_SHADER_DEBUG_INFO;
typedef interface ID3D10ShaderReflection1 ID3D10ShaderReflection1;
typedef interface ID3D10ShaderReflection1 *LPD3D10SHADERREFLECTION1;
DEFINE_GUID(IID_ID3D10ShaderReflection1,
0xc3457783, 0xa846, 0x47ce, 0x95, 0x20, 0xce, 0xa6, 0xf6, 0x6e, 0x74, 0x47);
DECLARE_INTERFACE_(ID3D10ShaderReflection1, IUnknown)
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
    STDMETHOD_(ID3D10ShaderReflectionVariable*, GetVariableByName)(THIS_ LPCSTR Name) PURE;
    STDMETHOD(GetResourceBindingDescByName)(THIS_ LPCSTR Name, _Out_ D3D10_SHADER_INPUT_BIND_DESC *pDesc) PURE;
    STDMETHOD(GetMovInstructionCount)(THIS_ _Out_ UINT* pCount) PURE;
    STDMETHOD(GetMovcInstructionCount)(THIS_ _Out_ UINT* pCount) PURE;
    STDMETHOD(GetConversionInstructionCount)(THIS_ _Out_ UINT* pCount) PURE;
    STDMETHOD(GetBitwiseInstructionCount)(THIS_ _Out_ UINT* pCount) PURE;
    STDMETHOD(GetGSInputPrimitive)(THIS_ _Out_ D3D10_PRIMITIVE* pPrim) PURE;
    STDMETHOD(IsLevel9Shader)(THIS_ _Out_ BOOL* pbLevel9Shader) PURE;
    STDMETHOD(IsSampleFrequencyShader)(THIS_ _Out_ BOOL* pbSampleFrequency) PURE;
};
extern "C" {
}
