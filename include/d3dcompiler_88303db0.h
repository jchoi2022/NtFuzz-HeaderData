#include <winapifamily.h>
    #define D3DCOMPILER_DLL D3DCOMPILER_DLL_W
#include "d3d11shader.h"
#include "d3d12shader.h"
extern "C" {
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
HRESULT WINAPI
D3DReadFileToBlob(_In_ LPCWSTR pFileName,
                  _Out_ ID3DBlob** ppContents);
HRESULT WINAPI
D3DWriteBlobToFile(_In_ ID3DBlob* pBlob,
                   _In_ LPCWSTR pFileName,
                   _In_ BOOL bOverwrite);
HRESULT WINAPI
D3DCompile(_In_reads_bytes_(SrcDataSize) LPCVOID pSrcData,
           _In_ SIZE_T SrcDataSize,
           _In_opt_ LPCSTR pSourceName,
           _In_reads_opt_(_Inexpressible_(pDefines->Name != NULL)) CONST D3D_SHADER_MACRO* pDefines,
           _In_opt_ ID3DInclude* pInclude,
           _In_opt_ LPCSTR pEntrypoint,
           _In_ LPCSTR pTarget,
           _In_ UINT Flags1,
           _In_ UINT Flags2,
           _Out_ ID3DBlob** ppCode,
           _Always_(_Outptr_opt_result_maybenull_) ID3DBlob** ppErrorMsgs);
typedef HRESULT (WINAPI *pD3DCompile)
    (LPCVOID pSrcData,
     SIZE_T SrcDataSize,
     LPCSTR pFileName,
     CONST D3D_SHADER_MACRO* pDefines,
     ID3DInclude* pInclude,
     LPCSTR pEntrypoint,
     LPCSTR pTarget,
     UINT Flags1,
     UINT Flags2,
     ID3DBlob** ppCode,
     ID3DBlob** ppErrorMsgs);
HRESULT WINAPI
D3DCompile2(_In_reads_bytes_(SrcDataSize) LPCVOID pSrcData,
            _In_ SIZE_T SrcDataSize,
            _In_opt_ LPCSTR pSourceName,
            _In_reads_opt_(_Inexpressible_(pDefines->Name != NULL)) CONST D3D_SHADER_MACRO* pDefines,
            _In_opt_ ID3DInclude* pInclude,
            _In_ LPCSTR pEntrypoint,
            _In_ LPCSTR pTarget,
            _In_ UINT Flags1,
            _In_ UINT Flags2,
            _In_ UINT SecondaryDataFlags,
            _In_reads_bytes_opt_(SecondaryDataSize) LPCVOID pSecondaryData,
            _In_ SIZE_T SecondaryDataSize,
            _Out_ ID3DBlob** ppCode,
            _Always_(_Outptr_opt_result_maybenull_) ID3DBlob** ppErrorMsgs);
HRESULT WINAPI
D3DCompileFromFile(_In_ LPCWSTR pFileName,
                   _In_reads_opt_(_Inexpressible_(pDefines->Name != NULL)) CONST D3D_SHADER_MACRO* pDefines,
                   _In_opt_ ID3DInclude* pInclude,
                   _In_ LPCSTR pEntrypoint,
                   _In_ LPCSTR pTarget,
                   _In_ UINT Flags1,
                   _In_ UINT Flags2,
                   _Out_ ID3DBlob** ppCode,
                   _Always_(_Outptr_opt_result_maybenull_) ID3DBlob** ppErrorMsgs);
HRESULT WINAPI
D3DPreprocess(_In_reads_bytes_(SrcDataSize) LPCVOID pSrcData,
              _In_ SIZE_T SrcDataSize,
              _In_opt_ LPCSTR pSourceName,
              _In_opt_ CONST D3D_SHADER_MACRO* pDefines,
              _In_opt_ ID3DInclude* pInclude,
              _Out_ ID3DBlob** ppCodeText,
              _Always_(_Outptr_opt_result_maybenull_) ID3DBlob** ppErrorMsgs);
typedef HRESULT (WINAPI *pD3DPreprocess)
    (LPCVOID pSrcData,
     SIZE_T SrcDataSize,
     LPCSTR pFileName,
     CONST D3D_SHADER_MACRO* pDefines,
     ID3DInclude* pInclude,
     ID3DBlob** ppCodeText,
     ID3DBlob** ppErrorMsgs);
HRESULT WINAPI
D3DGetDebugInfo(_In_reads_bytes_(SrcDataSize) LPCVOID pSrcData,
                _In_ SIZE_T SrcDataSize,
                _Out_ ID3DBlob** ppDebugInfo);
HRESULT WINAPI
D3DReflect(_In_reads_bytes_(SrcDataSize) LPCVOID pSrcData,
           _In_ SIZE_T SrcDataSize,
           _In_ REFIID pInterface,
           _Out_ void** ppReflector);
HRESULT WINAPI
D3DReflectLibrary(__in_bcount(SrcDataSize) LPCVOID pSrcData,
                  __in SIZE_T SrcDataSize,
               __in REFIID riid,
                  __out LPVOID * ppReflector);
HRESULT WINAPI
D3DDisassemble(_In_reads_bytes_(SrcDataSize) LPCVOID pSrcData,
               _In_ SIZE_T SrcDataSize,
               _In_ UINT Flags,
               _In_opt_ LPCSTR szComments,
               _Out_ ID3DBlob** ppDisassembly);
typedef HRESULT (WINAPI *pD3DDisassemble)
    (_In_reads_bytes_(SrcDataSize) LPCVOID pSrcData,
     _In_ SIZE_T SrcDataSize,
     _In_ UINT Flags,
     _In_opt_ LPCSTR szComments,
     _Out_ ID3DBlob** ppDisassembly);
HRESULT WINAPI
D3DDisassembleRegion(_In_reads_bytes_(SrcDataSize) LPCVOID pSrcData,
                     _In_ SIZE_T SrcDataSize,
                     _In_ UINT Flags,
                     _In_opt_ LPCSTR szComments,
                     _In_ SIZE_T StartByteOffset,
                     _In_ SIZE_T NumInsts,
                     _Out_opt_ SIZE_T* pFinishByteOffset,
                     _Out_ ID3DBlob** ppDisassembly);
HRESULT WINAPI
D3DCreateLinker(__out interface ID3D11Linker ** ppLinker);
HRESULT WINAPI
D3DLoadModule(_In_ LPCVOID pSrcData,
              _In_ SIZE_T cbSrcDataSize,
              _Out_ interface ID3D11Module ** ppModule);
HRESULT WINAPI
D3DCreateFunctionLinkingGraph(_In_ UINT uFlags,
                              _Out_ interface ID3D11FunctionLinkingGraph ** ppFunctionLinkingGraph);
HRESULT WINAPI
D3DGetTraceInstructionOffsets(_In_reads_bytes_(SrcDataSize) LPCVOID pSrcData,
                              _In_ SIZE_T SrcDataSize,
                              _In_ UINT Flags,
                              _In_ SIZE_T StartInstIndex,
                              _In_ SIZE_T NumInsts,
                              _Out_writes_to_opt_(NumInsts, min(NumInsts, *pTotalInsts)) SIZE_T* pOffsets,
                              _Out_opt_ SIZE_T* pTotalInsts);
HRESULT WINAPI
D3DGetInputSignatureBlob(_In_reads_bytes_(SrcDataSize) LPCVOID pSrcData,
                         _In_ SIZE_T SrcDataSize,
                         _Out_ ID3DBlob** ppSignatureBlob);
HRESULT WINAPI
D3DGetOutputSignatureBlob(_In_reads_bytes_(SrcDataSize) LPCVOID pSrcData,
                          _In_ SIZE_T SrcDataSize,
                          _Out_ ID3DBlob** ppSignatureBlob);
HRESULT WINAPI
D3DGetInputAndOutputSignatureBlob(_In_reads_bytes_(SrcDataSize) LPCVOID pSrcData,
                                  _In_ SIZE_T SrcDataSize,
                                  _Out_ ID3DBlob** ppSignatureBlob);
typedef enum D3DCOMPILER_STRIP_FLAGS
{
    D3DCOMPILER_STRIP_REFLECTION_DATA = 0x00000001,
    D3DCOMPILER_STRIP_DEBUG_INFO = 0x00000002,
    D3DCOMPILER_STRIP_TEST_BLOBS = 0x00000004,
    D3DCOMPILER_STRIP_PRIVATE_DATA = 0x00000008,
    D3DCOMPILER_STRIP_ROOT_SIGNATURE = 0x00000010,
    D3DCOMPILER_STRIP_FORCE_DWORD = 0x7fffffff,
} D3DCOMPILER_STRIP_FLAGS;
HRESULT WINAPI
D3DStripShader(_In_reads_bytes_(BytecodeLength) LPCVOID pShaderBytecode,
               _In_ SIZE_T BytecodeLength,
               _In_ UINT uStripFlags,
               _Out_ ID3DBlob** ppStrippedBlob);
typedef enum D3D_BLOB_PART
{
    D3D_BLOB_INPUT_SIGNATURE_BLOB,
    D3D_BLOB_OUTPUT_SIGNATURE_BLOB,
    D3D_BLOB_INPUT_AND_OUTPUT_SIGNATURE_BLOB,
    D3D_BLOB_PATCH_CONSTANT_SIGNATURE_BLOB,
    D3D_BLOB_ALL_SIGNATURE_BLOB,
    D3D_BLOB_DEBUG_INFO,
    D3D_BLOB_LEGACY_SHADER,
    D3D_BLOB_XNA_PREPASS_SHADER,
    D3D_BLOB_XNA_SHADER,
    D3D_BLOB_PDB,
    D3D_BLOB_PRIVATE_DATA,
    D3D_BLOB_ROOT_SIGNATURE,
    D3D_BLOB_DEBUG_NAME,
    D3D_BLOB_TEST_ALTERNATE_SHADER = 0x8000,
    D3D_BLOB_TEST_COMPILE_DETAILS,
    D3D_BLOB_TEST_COMPILE_PERF,
    D3D_BLOB_TEST_COMPILE_REPORT,
} D3D_BLOB_PART;
HRESULT WINAPI
D3DGetBlobPart(_In_reads_bytes_(SrcDataSize) LPCVOID pSrcData,
               _In_ SIZE_T SrcDataSize,
               _In_ D3D_BLOB_PART Part,
               _In_ UINT Flags,
               _Out_ ID3DBlob** ppPart);
HRESULT WINAPI
D3DSetBlobPart(_In_reads_bytes_(SrcDataSize) LPCVOID pSrcData,
               _In_ SIZE_T SrcDataSize,
               _In_ D3D_BLOB_PART Part,
               _In_ UINT Flags,
               _In_reads_bytes_(PartSize) LPCVOID pPart,
               _In_ SIZE_T PartSize,
               _Out_ ID3DBlob** ppNewShader);
HRESULT WINAPI
D3DCreateBlob(_In_ SIZE_T Size,
              _Out_ ID3DBlob** ppBlob);
typedef struct _D3D_SHADER_DATA
{
    LPCVOID pBytecode;
    SIZE_T BytecodeLength;
} D3D_SHADER_DATA;
HRESULT WINAPI
D3DCompressShaders(_In_ UINT uNumShaders,
                   _In_reads_(uNumShaders) D3D_SHADER_DATA* pShaderData,
                   _In_ UINT uFlags,
                   _Out_ ID3DBlob** ppCompressedData);
HRESULT WINAPI
D3DDecompressShaders(_In_reads_bytes_(SrcDataSize) LPCVOID pSrcData,
                     _In_ SIZE_T SrcDataSize,
                     _In_ UINT uNumShaders,
                     _In_ UINT uStartIndex,
                     _In_reads_opt_(uNumShaders) UINT* pIndices,
                     _In_ UINT uFlags,
                     _Out_writes_(uNumShaders) ID3DBlob** ppShaders,
                     _Out_opt_ UINT* pTotalShaders);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
HRESULT WINAPI
D3DDisassemble10Effect(_In_ interface ID3D10Effect *pEffect,
                       _In_ UINT Flags,
                       _Out_ ID3DBlob** ppDisassembly);
#endif
#pragma endregion
}
