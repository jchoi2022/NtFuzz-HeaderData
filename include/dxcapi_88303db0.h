struct IMalloc;
struct IDxcIncludeHandler;
typedef HRESULT (__stdcall *DxcCreateInstanceProc)(
    _In_ REFCLSID rclsid,
    _In_ REFIID riid,
    _Out_ LPVOID* ppv
);
typedef HRESULT(__stdcall *DxcCreateInstance2Proc)(
  _In_ IMalloc *pMalloc,
  _In_ REFCLSID rclsid,
  _In_ REFIID riid,
  _Out_ LPVOID* ppv
  );
extern "C"
DXC_API_IMPORT HRESULT __stdcall DxcCreateInstance(
  _In_ REFCLSID rclsid,
  _In_ REFIID riid,
  _Out_ LPVOID* ppv
  );
extern "C"
DXC_API_IMPORT HRESULT __stdcall DxcCreateInstance2(
  _In_ IMalloc *pMalloc,
  _In_ REFCLSID rclsid,
  _In_ REFIID riid,
  _Out_ LPVOID* ppv
);
struct __declspec(uuid("8BA5FB08-5195-40e2-AC58-0D989C3A0102"))
IDxcBlob : public IUnknown {
public:
  virtual LPVOID STDMETHODCALLTYPE GetBufferPointer(void) = 0;
  virtual SIZE_T STDMETHODCALLTYPE GetBufferSize(void) = 0;
  DECLARE_CROSS_PLATFORM_UUIDOF(IDxcBlob)
};
struct __declspec(uuid("7241d424-2646-4191-97c0-98e96e42fc68"))
IDxcBlobEncoding : public IDxcBlob {
public:
  virtual HRESULT STDMETHODCALLTYPE GetEncoding(_Out_ BOOL *pKnown,
                                                _Out_ UINT32 *pCodePage) = 0;
  DECLARE_CROSS_PLATFORM_UUIDOF(IDxcBlobEncoding)
};
struct __declspec(uuid("e5204dc7-d18c-4c3c-bdfb-851673980fe7"))
IDxcLibrary : public IUnknown {
  virtual HRESULT STDMETHODCALLTYPE SetMalloc(_In_opt_ IMalloc *pMalloc) = 0;
  virtual HRESULT STDMETHODCALLTYPE CreateBlobFromBlob(
    _In_ IDxcBlob *pBlob, UINT32 offset, UINT32 length, _COM_Outptr_ IDxcBlob **ppResult) = 0;
  virtual HRESULT STDMETHODCALLTYPE CreateBlobFromFile(
    LPCWSTR pFileName, _In_opt_ UINT32* codePage,
    _COM_Outptr_ IDxcBlobEncoding **pBlobEncoding) = 0;
  virtual HRESULT STDMETHODCALLTYPE CreateBlobWithEncodingFromPinned(
    _In_bytecount_(size) LPCVOID pText, UINT32 size, UINT32 codePage,
    _COM_Outptr_ IDxcBlobEncoding **pBlobEncoding) = 0;
  virtual HRESULT STDMETHODCALLTYPE CreateBlobWithEncodingOnHeapCopy(
       _In_bytecount_(size) LPCVOID pText, UINT32 size, UINT32 codePage,
      _COM_Outptr_ IDxcBlobEncoding **pBlobEncoding) = 0;
  virtual HRESULT STDMETHODCALLTYPE CreateBlobWithEncodingOnMalloc(
    _In_bytecount_(size) LPCVOID pText, IMalloc *pIMalloc, UINT32 size, UINT32 codePage,
    _COM_Outptr_ IDxcBlobEncoding **pBlobEncoding) = 0;
  virtual HRESULT STDMETHODCALLTYPE CreateIncludeHandler(
      _COM_Outptr_ IDxcIncludeHandler **ppResult) = 0;
  virtual HRESULT STDMETHODCALLTYPE CreateStreamFromBlobReadOnly(
      _In_ IDxcBlob *pBlob, _COM_Outptr_ IStream **ppStream) = 0;
  virtual HRESULT STDMETHODCALLTYPE GetBlobAsUtf8(
      _In_ IDxcBlob *pBlob, _COM_Outptr_ IDxcBlobEncoding **pBlobEncoding) = 0;
  virtual HRESULT STDMETHODCALLTYPE GetBlobAsUtf16(
      _In_ IDxcBlob *pBlob, _COM_Outptr_ IDxcBlobEncoding **pBlobEncoding) = 0;
  DECLARE_CROSS_PLATFORM_UUIDOF(IDxcLibrary)
};
struct __declspec(uuid("CEDB484A-D4E9-445A-B991-CA21CA157DC2"))
IDxcOperationResult : public IUnknown {
  virtual HRESULT STDMETHODCALLTYPE GetStatus(_Out_ HRESULT *pStatus) = 0;
  virtual HRESULT STDMETHODCALLTYPE GetResult(_COM_Outptr_result_maybenull_ IDxcBlob **pResult) = 0;
  virtual HRESULT STDMETHODCALLTYPE GetErrorBuffer(_COM_Outptr_result_maybenull_ IDxcBlobEncoding **pErrors) = 0;
  DECLARE_CROSS_PLATFORM_UUIDOF(IDxcOperationResult)
};
struct __declspec(uuid("7f61fc7d-950d-467f-b3e3-3c02fb49187c"))
IDxcIncludeHandler : public IUnknown {
  virtual HRESULT STDMETHODCALLTYPE LoadSource(
    _In_ LPCWSTR pFilename,
    _COM_Outptr_result_maybenull_ IDxcBlob **ppIncludeSource
    ) = 0;
  DECLARE_CROSS_PLATFORM_UUIDOF(IDxcIncludeHandler)
};
struct DxcDefine {
  LPCWSTR Name;
  _Maybenull_ LPCWSTR Value;
};
struct __declspec(uuid("8c210bf3-011f-4422-8d70-6f9acb8db617"))
IDxcCompiler : public IUnknown {
  virtual HRESULT STDMETHODCALLTYPE Compile(
    _In_ IDxcBlob *pSource,
    _In_opt_ LPCWSTR pSourceName,
    _In_ LPCWSTR pEntryPoint,
    _In_ LPCWSTR pTargetProfile,
    _In_count_(argCount) LPCWSTR *pArguments,
    _In_ UINT32 argCount,
    _In_count_(defineCount) const DxcDefine *pDefines,
    _In_ UINT32 defineCount,
    _In_opt_ IDxcIncludeHandler *pIncludeHandler,
    _COM_Outptr_ IDxcOperationResult **ppResult
  ) = 0;
  virtual HRESULT STDMETHODCALLTYPE Preprocess(
    _In_ IDxcBlob *pSource,
    _In_opt_ LPCWSTR pSourceName,
    _In_count_(argCount) LPCWSTR *pArguments,
    _In_ UINT32 argCount,
    _In_count_(defineCount) const DxcDefine *pDefines,
    _In_ UINT32 defineCount,
    _In_opt_ IDxcIncludeHandler *pIncludeHandler,
    _COM_Outptr_ IDxcOperationResult **ppResult
  ) = 0;
  virtual HRESULT STDMETHODCALLTYPE Disassemble(
    _In_ IDxcBlob *pSource,
    _COM_Outptr_ IDxcBlobEncoding **ppDisassembly
    ) = 0;
  DECLARE_CROSS_PLATFORM_UUIDOF(IDxcCompiler)
};
struct __declspec(uuid("A005A9D9-B8BB-4594-B5C9-0E633BEC4D37"))
IDxcCompiler2 : public IDxcCompiler {
  virtual HRESULT STDMETHODCALLTYPE CompileWithDebug(
    _In_ IDxcBlob *pSource,
    _In_opt_ LPCWSTR pSourceName,
    _In_ LPCWSTR pEntryPoint,
    _In_ LPCWSTR pTargetProfile,
    _In_count_(argCount) LPCWSTR *pArguments,
    _In_ UINT32 argCount,
    _In_count_(defineCount) const DxcDefine *pDefines,
    _In_ UINT32 defineCount,
    _In_opt_ IDxcIncludeHandler *pIncludeHandler,
    _COM_Outptr_ IDxcOperationResult **ppResult,
    _Outptr_opt_result_z_ LPWSTR *ppDebugBlobName,
    _COM_Outptr_opt_ IDxcBlob **ppDebugBlob
  ) = 0;
  DECLARE_CROSS_PLATFORM_UUIDOF(IDxcCompiler2)
};
struct __declspec(uuid("F1B5BE2A-62DD-4327-A1C2-42AC1E1E78E6"))
IDxcLinker : public IUnknown {
public:
  virtual HRESULT RegisterLibrary(
      _In_opt_ LPCWSTR pLibName,
      _In_ IDxcBlob *pLib
  ) = 0;
  virtual HRESULT STDMETHODCALLTYPE Link(
      _In_opt_ LPCWSTR pEntryName,
      _In_ LPCWSTR pTargetProfile,
      _In_count_(libCount)
          const LPCWSTR *pLibNames,
      UINT32 libCount,
      _In_count_(argCount)
          const LPCWSTR *pArguments,
      _In_ UINT32 argCount,
      _COM_Outptr_ IDxcOperationResult *
          *ppResult
  ) = 0;
  DECLARE_CROSS_PLATFORM_UUIDOF(IDxcLinker)
};
static const UINT32 DxcValidatorFlags_Default = 0;
static const UINT32 DxcValidatorFlags_InPlaceEdit = 1;
static const UINT32 DxcValidatorFlags_RootSignatureOnly = 2;
static const UINT32 DxcValidatorFlags_ModuleOnly = 4;
static const UINT32 DxcValidatorFlags_ValidMask = 0x7;
struct __declspec(uuid("A6E82BD2-1FD7-4826-9811-2857E797F49A"))
IDxcValidator : public IUnknown {
  virtual HRESULT STDMETHODCALLTYPE Validate(
    _In_ IDxcBlob *pShader,
    _In_ UINT32 Flags,
    _COM_Outptr_ IDxcOperationResult **ppResult
    ) = 0;
  DECLARE_CROSS_PLATFORM_UUIDOF(IDxcValidator)
};
struct __declspec(uuid("334b1f50-2292-4b35-99a1-25588d8c17fe"))
IDxcContainerBuilder : public IUnknown {
  virtual HRESULT STDMETHODCALLTYPE Load(_In_ IDxcBlob *pDxilContainerHeader) = 0;
  virtual HRESULT STDMETHODCALLTYPE AddPart(_In_ UINT32 fourCC, _In_ IDxcBlob *pSource) = 0;
  virtual HRESULT STDMETHODCALLTYPE RemovePart(_In_ UINT32 fourCC) = 0;
  virtual HRESULT STDMETHODCALLTYPE SerializeContainer(_Out_ IDxcOperationResult **ppResult) = 0;
  DECLARE_CROSS_PLATFORM_UUIDOF(IDxcContainerBuilder)
};
struct __declspec(uuid("091f7a26-1c1f-4948-904b-e6e3a8a771d5"))
IDxcAssembler : public IUnknown {
  virtual HRESULT STDMETHODCALLTYPE AssembleToContainer(
    _In_ IDxcBlob *pShader,
    _COM_Outptr_ IDxcOperationResult **ppResult
    ) = 0;
  DECLARE_CROSS_PLATFORM_UUIDOF(IDxcAssembler)
};
static const UINT32 D3D_SIT_RTACCELERATIONSTRUCTURE = 12;
struct __declspec(uuid("d2c21b26-8350-4bdc-976a-331ce6f4c54c"))
IDxcContainerReflection : public IUnknown {
  virtual HRESULT STDMETHODCALLTYPE Load(_In_ IDxcBlob *pContainer) = 0;
  virtual HRESULT STDMETHODCALLTYPE GetPartCount(_Out_ UINT32 *pResult) = 0;
  virtual HRESULT STDMETHODCALLTYPE GetPartKind(UINT32 idx, _Out_ UINT32 *pResult) = 0;
  virtual HRESULT STDMETHODCALLTYPE GetPartContent(UINT32 idx, _COM_Outptr_ IDxcBlob **ppResult) = 0;
  virtual HRESULT STDMETHODCALLTYPE FindFirstPartKind(UINT32 kind, _Out_ UINT32 *pResult) = 0;
  virtual HRESULT STDMETHODCALLTYPE GetPartReflection(UINT32 idx, REFIID iid, void **ppvObject) = 0;
  DECLARE_CROSS_PLATFORM_UUIDOF(IDxcContainerReflection)
};
struct __declspec(uuid("AE2CD79F-CC22-453F-9B6B-B124E7A5204C"))
IDxcOptimizerPass : public IUnknown {
  virtual HRESULT STDMETHODCALLTYPE GetOptionName(_COM_Outptr_ LPWSTR *ppResult) = 0;
  virtual HRESULT STDMETHODCALLTYPE GetDescription(_COM_Outptr_ LPWSTR *ppResult) = 0;
  virtual HRESULT STDMETHODCALLTYPE GetOptionArgCount(_Out_ UINT32 *pCount) = 0;
  virtual HRESULT STDMETHODCALLTYPE GetOptionArgName(UINT32 argIndex, _COM_Outptr_ LPWSTR *ppResult) = 0;
  virtual HRESULT STDMETHODCALLTYPE GetOptionArgDescription(UINT32 argIndex, _COM_Outptr_ LPWSTR *ppResult) = 0;
  DECLARE_CROSS_PLATFORM_UUIDOF(IDxcOptimizerPass)
};
struct __declspec(uuid("25740E2E-9CBA-401B-9119-4FB42F39F270"))
IDxcOptimizer : public IUnknown {
  virtual HRESULT STDMETHODCALLTYPE GetAvailablePassCount(_Out_ UINT32 *pCount) = 0;
  virtual HRESULT STDMETHODCALLTYPE GetAvailablePass(UINT32 index, _COM_Outptr_ IDxcOptimizerPass** ppResult) = 0;
  virtual HRESULT STDMETHODCALLTYPE RunOptimizer(IDxcBlob *pBlob,
    _In_count_(optionCount) LPCWSTR *ppOptions, UINT32 optionCount,
    _COM_Outptr_ IDxcBlob **pOutputModule,
    _COM_Outptr_opt_ IDxcBlobEncoding **ppOutputText) = 0;
  DECLARE_CROSS_PLATFORM_UUIDOF(IDxcOptimizer)
};
static const UINT32 DxcVersionInfoFlags_None = 0;
static const UINT32 DxcVersionInfoFlags_Debug = 1;
static const UINT32 DxcVersionInfoFlags_Internal = 2;
struct __declspec(uuid("b04f5b50-2059-4f12-a8ff-a1e0cde1cc7e"))
IDxcVersionInfo : public IUnknown {
  virtual HRESULT STDMETHODCALLTYPE GetVersion(_Out_ UINT32 *pMajor, _Out_ UINT32 *pMinor) = 0;
  virtual HRESULT STDMETHODCALLTYPE GetFlags(_Out_ UINT32 *pFlags) = 0;
  DECLARE_CROSS_PLATFORM_UUIDOF(IDxcVersionInfo)
};
struct __declspec(uuid("fb6904c4-42f0-4b62-9c46-983af7da7c83"))
IDxcVersionInfo2 : public IDxcVersionInfo {
  virtual HRESULT STDMETHODCALLTYPE GetCommitInfo(_Out_ UINT32 *pCommitCount, _Out_ char **pCommitHash) = 0;
  DECLARE_CROSS_PLATFORM_UUIDOF(IDxcVersionInfo2)
};
__declspec(selectany) EXTERN const CLSID CLSID_DxcCompiler = {
  0x73e22d93,
  0xe6ce,
  0x47f3,
  { 0xb5, 0xbf, 0xf0, 0x66, 0x4f, 0x39, 0xc1, 0xb0 }
};
__declspec(selectany) EXTERN const GUID CLSID_DxcLinker = {
    0xef6a8087,
    0xb0ea,
    0x4d56,
    {0x9e, 0x45, 0xd0, 0x7e, 0x1a, 0x8b, 0x78, 0x6}
};
__declspec(selectany) EXTERN const CLSID CLSID_DxcDiaDataSource = {
  0xcd1f6b73,
  0x2ab0,
  0x484d,
  { 0x8e, 0xdc, 0xeb, 0xe7, 0xa4, 0x3c, 0xa0, 0x9f }
};
__declspec(selectany) EXTERN const GUID CLSID_DxcLibrary = {
  0x6245d6af,
  0x66e0,
  0x48fd,
  { 0x80, 0xb4, 0x4d, 0x27, 0x17, 0x96, 0x74, 0x8c }
};
__declspec(selectany) EXTERN const GUID CLSID_DxcValidator = {
  0x8ca3e215,
  0xf728,
  0x4cf3,
  { 0x8c, 0xdd, 0x88, 0xaf, 0x91, 0x75, 0x87, 0xa1 }
};
__declspec(selectany) EXTERN const GUID CLSID_DxcAssembler = {
  0xd728db68,
  0xf903,
  0x4f80,
  { 0x94, 0xcd, 0xdc, 0xcf, 0x76, 0xec, 0x71, 0x51 }
};
__declspec(selectany) EXTERN const GUID CLSID_DxcContainerReflection = {
  0xb9f54489,
  0x55b8,
  0x400c,
  { 0xba, 0x3a, 0x16, 0x75, 0xe4, 0x72, 0x8b, 0x91 }
};
__declspec(selectany) EXTERN const GUID CLSID_DxcOptimizer = {
    0xae2cd79f,
    0xcc22,
    0x453f,
    {0x9b, 0x6b, 0xb1, 0x24, 0xe7, 0xa5, 0x20, 0x4c}
};
__declspec(selectany) EXTERN const GUID CLSID_DxcContainerBuilder = {
  0x94134294,
  0x411f,
  0x4574,
  { 0xb4, 0xd0, 0x87, 0x41, 0xe2, 0x52, 0x40, 0xd2 }
};
