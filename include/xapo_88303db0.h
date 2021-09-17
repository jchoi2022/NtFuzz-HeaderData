       
#include <sdkddkver.h>
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_TV_APP | WINAPI_PARTITION_TV_TITLE | WINAPI_PARTITION_GAMES)
#include <basetyps.h>
interface __declspec(uuid("A410B984-9839-4819-A0BE-2856AE6B3ADB")) IXAPO;
EXTERN_C const GUID DECLSPEC_SELECTANY IID_IXAPO = __uuidof(IXAPO);
interface __declspec(uuid("26D95C66-80F2-499A-AD54-5AE7F01C6D98")) IXAPOParameters;
EXTERN_C const GUID DECLSPEC_SELECTANY IID_IXAPOParameters = __uuidof(IXAPOParameters);
    #include <windows.h>
    #include <objbase.h>
    #include <mmreg.h>
    #define FACILITY_XAPO 0x897
    #define XAPO_E_FORMAT_UNSUPPORTED MAKE_HRESULT(SEVERITY_ERROR, FACILITY_XAPO, 0x01)
    #define XAPO_MIN_CHANNELS 1
    #define XAPO_MAX_CHANNELS 64
    #define XAPO_MIN_FRAMERATE 1000
    #define XAPO_MAX_FRAMERATE 200000
    #define XAPO_REGISTRATION_STRING_LENGTH 256
    #define XAPO_FLAG_CHANNELS_MUST_MATCH 0x00000001
    #define XAPO_FLAG_FRAMERATE_MUST_MATCH 0x00000002
    #define XAPO_FLAG_BITSPERSAMPLE_MUST_MATCH 0x00000004
    #define XAPO_FLAG_BUFFERCOUNT_MUST_MATCH 0x00000008
    #define XAPO_FLAG_INPLACE_REQUIRED 0x00000020
    #define XAPO_FLAG_INPLACE_SUPPORTED 0x00000010
    #pragma pack(push, 1)
    typedef struct XAPO_REGISTRATION_PROPERTIES {
        CLSID clsid;
        WCHAR FriendlyName[XAPO_REGISTRATION_STRING_LENGTH];
        WCHAR CopyrightInfo[XAPO_REGISTRATION_STRING_LENGTH];
        UINT32 MajorVersion;
        UINT32 MinorVersion;
        UINT32 Flags;
        UINT32 MinInputBufferCount;
        UINT32 MaxInputBufferCount;
        UINT32 MinOutputBufferCount;
        UINT32 MaxOutputBufferCount;
    } XAPO_REGISTRATION_PROPERTIES;
    typedef struct XAPO_LOCKFORPROCESS_BUFFER_PARAMETERS {
        const WAVEFORMATEX* pFormat;
        UINT32 MaxFrameCount;
    } XAPO_LOCKFORPROCESS_PARAMETERS;
    typedef enum XAPO_BUFFER_FLAGS {
        XAPO_BUFFER_SILENT,
        XAPO_BUFFER_VALID,
    } XAPO_BUFFER_FLAGS;
    typedef struct XAPO_PROCESS_BUFFER_PARAMETERS {
        void* pBuffer;
        XAPO_BUFFER_FLAGS BufferFlags;
        UINT32 ValidFrameCount;
    } XAPO_PROCESS_BUFFER_PARAMETERS;
    #define XAPOAlloc(size) CoTaskMemAlloc(size)
    #define XAPOFree(p) CoTaskMemFree(p)
    #undef INTERFACE
    #define INTERFACE IXAPO
    DECLARE_INTERFACE_(IXAPO, IUnknown) {
        STDMETHOD(GetRegistrationProperties) (THIS_ _Outptr_ XAPO_REGISTRATION_PROPERTIES** ppRegistrationProperties) PURE;
        STDMETHOD(IsInputFormatSupported) (THIS_ const WAVEFORMATEX* pOutputFormat, const WAVEFORMATEX* pRequestedInputFormat, _Outptr_opt_ WAVEFORMATEX** ppSupportedInputFormat) PURE;
        STDMETHOD(IsOutputFormatSupported) (THIS_ const WAVEFORMATEX* pInputFormat, const WAVEFORMATEX* pRequestedOutputFormat, _Outptr_opt_ WAVEFORMATEX** ppSupportedOutputFormat) PURE;
        STDMETHOD(Initialize) (THIS_ _In_reads_bytes_opt_(DataByteSize) const void* pData, UINT32 DataByteSize) PURE;
        STDMETHOD_(void, Reset) (THIS) PURE;
        STDMETHOD(LockForProcess) (THIS_ UINT32 InputLockedParameterCount, _In_reads_opt_(InputLockedParameterCount) const XAPO_LOCKFORPROCESS_PARAMETERS* pInputLockedParameters, UINT32 OutputLockedParameterCount, _In_reads_opt_(OutputLockedParameterCount) const XAPO_LOCKFORPROCESS_PARAMETERS* pOutputLockedParameters) PURE;
        STDMETHOD_(void, UnlockForProcess) (THIS) PURE;
        STDMETHOD_(void, Process) (THIS_ UINT32 InputProcessParameterCount, _In_reads_opt_(InputProcessParameterCount) const XAPO_PROCESS_BUFFER_PARAMETERS* pInputProcessParameters, UINT32 OutputProcessParameterCount, _Inout_updates_opt_(OutputProcessParameterCount) XAPO_PROCESS_BUFFER_PARAMETERS* pOutputProcessParameters, BOOL IsEnabled) PURE;
        STDMETHOD_(UINT32, CalcInputFrames) (THIS_ UINT32 OutputFrameCount) PURE;
        STDMETHOD_(UINT32, CalcOutputFrames) (THIS_ UINT32 InputFrameCount) PURE;
    };
    #undef INTERFACE
    #define INTERFACE IXAPOParameters
    DECLARE_INTERFACE_(IXAPOParameters, IUnknown) {
        STDMETHOD_(void, SetParameters) (THIS_ _In_reads_bytes_(ParameterByteSize) const void* pParameters, UINT32 ParameterByteSize) PURE;
        STDMETHOD_(void, GetParameters) (THIS_ _Out_writes_bytes_(ParameterByteSize) void* pParameters, UINT32 ParameterByteSize) PURE;
    };
        #define IXAPO_QueryInterface(This, riid, ppInterface) \
            ( (This)->lpVtbl->QueryInterface(This, riid, ppInterface) )
        #define IXAPO_AddRef(This) \
            ( (This)->lpVtbl->AddRef(This) )
        #define IXAPO_Release(This) \
            ( (This)->lpVtbl->Release(This) )
        #define IXAPO_GetRegistrationProperties(This, ppRegistrationProperties) \
            ( (This)->lpVtbl->GetRegistrationProperties(This, ppRegistrationProperties) )
        #define IXAPO_IsInputFormatSupported(This, pOutputFormat, pRequestedInputFormat, ppSupportedInputFormat) \
            ( (This)->lpVtbl->IsInputFormatSupported(This, pOutputFormat, pRequestedInputFormat, ppSupportedInputFormat) )
        #define IXAPO_IsOutputFormatSupported(This, pInputFormat, pRequestedOutputFormat, ppSupportedOutputFormat) \
            ( (This)->lpVtbl->IsOutputFormatSupported(This, pInputFormat, pRequestedOutputFormat, ppSupportedOutputFormat) )
        #define IXAPO_Initialize(This, pData, DataByteSize) \
            ( (This)->lpVtbl->Initialize(This, pData, DataByteSize) )
        #define IXAPO_Reset(This) \
            ( (This)->lpVtbl->Reset(This) )
        #define IXAPO_LockForProcess(This, InputLockedParameterCount, pInputLockedParameters, OutputLockedParameterCount, pOutputLockedParameters) \
            ( (This)->lpVtbl->LockForProcess(This, InputLockedParameterCount, pInputLockedParameters, OutputLockedParameterCount, pOutputLockedParameters) )
        #define IXAPO_UnlockForProcess(This) \
            ( (This)->lpVtbl->UnlockForProcess(This) )
        #define IXAPO_Process(This, InputProcessParameterCount, pInputProcessParameters, OutputProcessParameterCount, pOutputProcessParameters, IsEnabled) \
            ( (This)->lpVtbl->Process(This, InputProcessParameterCount, pInputProcessParameters, OutputProcessParameterCount, pOutputProcessParameters, IsEnabled) )
        #define IXAPO_CalcInputFrames(This, OutputFrameCount) \
            ( (This)->lpVtbl->CalcInputFrames(This, OutputFrameCount) )
        #define IXAPO_CalcOutputFrames(This, InputFrameCount) \
            ( (This)->lpVtbl->CalcOutputFrames(This, InputFrameCount) )
        #define IXAPOParameters_QueryInterface(This, riid, ppInterface) \
            ( (This)->lpVtbl->QueryInterface(This, riid, ppInterface) )
        #define IXAPOParameters_AddRef(This) \
            ( (This)->lpVtbl->AddRef(This) )
        #define IXAPOParameters_Release(This) \
            ( (This)->lpVtbl->Release(This) )
        #define IXAPOParameters_SetParameters(This, pParameters, ParameterByteSize) \
            ( (This)->lpVtbl->SetParameters(This, pParameters, ParameterByteSize) )
        #define IXAPOParameters_GetParameters(This, pParameters, ParameterByteSize) \
            ( (This)->lpVtbl->GetParameters(This, pParameters, ParameterByteSize) )
    #pragma pack(pop)
#endif
#pragma endregion
