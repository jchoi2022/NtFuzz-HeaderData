#include <winapifamily.h>
#pragma region Desktop Family or WER Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WER)
#include <stdarg.h>
#include <objbase.h>
typedef struct _WINDBG_EXTENSION_APIS32* PWINDBG_EXTENSION_APIS32;
typedef struct _WINDBG_EXTENSION_APIS64* PWINDBG_EXTENSION_APIS64;
typedef struct _MEMORY_BASIC_INFORMATION64* PMEMORY_BASIC_INFORMATION64;
extern "C" {
DEFINE_GUID(IID_IDebugAdvanced, 0xf2df5f53, 0x071f, 0x47bd,
            0x9d, 0xe6, 0x57, 0x34, 0xc3, 0xfe, 0xd6, 0x89);
DEFINE_GUID(IID_IDebugAdvanced2, 0x716d14c9, 0x119b, 0x4ba5,
            0xaf, 0x1f, 0x08, 0x90, 0xe6, 0x72, 0x41, 0x6a);
DEFINE_GUID(IID_IDebugAdvanced3, 0xcba4abb4, 0x84c4, 0x444d,
            0x87, 0xca, 0xa0, 0x4e, 0x13, 0x28, 0x67, 0x39);
DEFINE_GUID(IID_IDebugAdvanced4, 0xd1069067, 0x2a65, 0x4bf0,
            0xae, 0x97, 0x76, 0x18, 0x4b, 0x67, 0x85, 0x6b);
DEFINE_GUID(IID_IDebugBreakpoint, 0x5bd9d474, 0x5975, 0x423a,
            0xb8, 0x8b, 0x65, 0xa8, 0xe7, 0x11, 0x0e, 0x65);
DEFINE_GUID(IID_IDebugBreakpoint2, 0x1b278d20, 0x79f2, 0x426e,
            0xa3, 0xf9, 0xc1, 0xdd, 0xf3, 0x75, 0xd4, 0x8e);
DEFINE_GUID(IID_IDebugBreakpoint3, 0x38f5c249, 0xb448, 0x43bb,
            0x98, 0x35, 0x57, 0x9d, 0x4e, 0xc0, 0x22, 0x49);
DEFINE_GUID(IID_IDebugClient, 0x27fe5639, 0x8407, 0x4f47,
            0x83, 0x64, 0xee, 0x11, 0x8f, 0xb0, 0x8a, 0xc8);
DEFINE_GUID(IID_IDebugClient2, 0xedbed635, 0x372e, 0x4dab,
        0xbb, 0xfe, 0xed, 0x0d, 0x2f, 0x63, 0xbe, 0x81);
DEFINE_GUID(IID_IDebugClient3, 0xdd492d7f, 0x71b8, 0x4ad6,
            0xa8, 0xdc, 0x1c, 0x88, 0x74, 0x79, 0xff, 0x91);
DEFINE_GUID(IID_IDebugClient4, 0xca83c3de, 0x5089, 0x4cf8,
            0x93, 0xc8, 0xd8, 0x92, 0x38, 0x7f, 0x2a, 0x5e);
DEFINE_GUID(IID_IDebugClient5, 0xe3acb9d7, 0x7ec2, 0x4f0c,
            0xa0, 0xda, 0xe8, 0x1e, 0x0c, 0xbb, 0xe6, 0x28);
DEFINE_GUID(IID_IDebugClient6, 0xfd28b4c5, 0xc498, 0x4686,
            0xa2, 0x8e, 0x62, 0xca, 0xd2, 0x15, 0x4e, 0xb3);
DEFINE_GUID(IID_IDebugClient7, 0x13586be3, 0x542e, 0x481e,
            0xb1, 0xf2, 0x84, 0x97, 0xba, 0x74, 0xf9, 0xa9);
DEFINE_GUID(IID_IDebugPlmClient, 0xa02b66c4, 0xaea3, 0x4234,
            0xa9, 0xf7, 0xfe, 0x4c, 0x38, 0x3d, 0x4e, 0x29);
DEFINE_GUID(IID_IDebugPlmClient2, 0x597c980d, 0xe7bd, 0x4309,
            0x96, 0x2c, 0x9d, 0x9b, 0x69, 0xa7, 0x37, 0x2c);
DEFINE_GUID(IID_IDebugPlmClient3, 0xcdf48669, 0x901f, 0x4791,
            0xb8, 0x68, 0x7d, 0x2c, 0xb3, 0xa2, 0xd7, 0xfc);
DEFINE_GUID(IID_IDebugOutputStream, 0x7782d8f2, 0x2b85, 0x4059,
            0xab, 0x88, 0x28, 0xce, 0xdd, 0xca, 0x1c, 0x80);
DEFINE_GUID(IID_IDebugControl, 0x5182e668, 0x105e, 0x416e,
            0xad, 0x92, 0x24, 0xef, 0x80, 0x04, 0x24, 0xba);
DEFINE_GUID(IID_IDebugControl2, 0xd4366723, 0x44df, 0x4bed,
            0x8c, 0x7e, 0x4c, 0x05, 0x42, 0x4f, 0x45, 0x88);
DEFINE_GUID(IID_IDebugControl3, 0x7df74a86, 0xb03f, 0x407f,
            0x90, 0xab, 0xa2, 0x0d, 0xad, 0xce, 0xad, 0x08);
DEFINE_GUID(IID_IDebugControl4, 0x94e60ce9, 0x9b41, 0x4b19,
            0x9f, 0xc0, 0x6d, 0x9e, 0xb3, 0x52, 0x72, 0xb3);
DEFINE_GUID(IID_IDebugControl5, 0xb2ffe162, 0x2412, 0x429f,
            0x8d, 0x1d, 0x5b, 0xf6, 0xdd, 0x82, 0x46, 0x96);
DEFINE_GUID(IID_IDebugControl6, 0xbc0d583f, 0x126d, 0x43a1,
            0x9c, 0xc4, 0xa8, 0x60, 0xab, 0x1d, 0x53, 0x7b);
DEFINE_GUID(IID_IDebugControl7, 0xb86fb3b1, 0x80d4, 0x475b,
            0xae, 0xa3, 0xcf, 0x06, 0x53, 0x9c, 0xf6, 0x3a);
DEFINE_GUID(IID_IDebugDataSpaces, 0x88f7dfab, 0x3ea7, 0x4c3a,
            0xae, 0xfb, 0xc4, 0xe8, 0x10, 0x61, 0x73, 0xaa);
DEFINE_GUID(IID_IDebugDataSpaces2, 0x7a5e852f, 0x96e9, 0x468f,
            0xac, 0x1b, 0x0b, 0x3a, 0xdd, 0xc4, 0xa0, 0x49);
DEFINE_GUID(IID_IDebugDataSpaces3, 0x23f79d6c, 0x8aaf, 0x4f7c,
            0xa6, 0x07, 0x99, 0x95, 0xf5, 0x40, 0x7e, 0x63);
DEFINE_GUID(IID_IDebugDataSpaces4, 0xd98ada1f, 0x29e9, 0x4ef5,
            0xa6, 0xc0, 0xe5, 0x33, 0x49, 0x88, 0x32, 0x12);
DEFINE_GUID(IID_IDebugEventCallbacks, 0x337be28b, 0x5036, 0x4d72,
            0xb6, 0xbf, 0xc4, 0x5f, 0xbb, 0x9f, 0x2e, 0xaa);
DEFINE_GUID(IID_IDebugEventCallbacksWide, 0x0690e046, 0x9c23, 0x45ac,
            0xa0, 0x4f, 0x98, 0x7a, 0xc2, 0x9a, 0xd0, 0xd3);
DEFINE_GUID(IID_IDebugEventContextCallbacks, 0x61a4905b, 0x23f9, 0x4247,
            0xb3, 0xc5, 0x53, 0xd0, 0x87, 0x52, 0x9a, 0xb7);
DEFINE_GUID(IID_IDebugInputCallbacks, 0x9f50e42c, 0xf136, 0x499e,
            0x9a, 0x97, 0x73, 0x03, 0x6c, 0x94, 0xed, 0x2d);
DEFINE_GUID(IID_IDebugOutputCallbacks, 0x4bf58045, 0xd654, 0x4c40,
            0xb0, 0xaf, 0x68, 0x30, 0x90, 0xf3, 0x56, 0xdc);
DEFINE_GUID(IID_IDebugOutputCallbacksWide, 0x4c7fd663, 0xc394, 0x4e26,
            0x8e, 0xf1, 0x34, 0xad, 0x5e, 0xd3, 0x76, 0x4c);
DEFINE_GUID(IID_IDebugOutputCallbacks2, 0x67721fe9, 0x56d2, 0x4a44,
            0xa3, 0x25, 0x2b, 0x65, 0x51, 0x3c, 0xe6, 0xeb);
DEFINE_GUID(IID_IDebugRegisters, 0xce289126, 0x9e84, 0x45a7,
            0x93, 0x7e, 0x67, 0xbb, 0x18, 0x69, 0x14, 0x93);
DEFINE_GUID(IID_IDebugRegisters2, 0x1656afa9, 0x19c6, 0x4e3a,
            0x97, 0xe7, 0x5d, 0xc9, 0x16, 0x0c, 0xf9, 0xc4);
DEFINE_GUID(IID_IDebugSymbolGroup, 0xf2528316, 0x0f1a, 0x4431,
            0xae, 0xed, 0x11, 0xd0, 0x96, 0xe1, 0xe2, 0xab);
DEFINE_GUID(IID_IDebugSymbolGroup2, 0x6a7ccc5f, 0xfb5e, 0x4dcc,
            0xb4, 0x1c, 0x6c, 0x20, 0x30, 0x7b, 0xcc, 0xc7);
DEFINE_GUID(IID_IDebugSymbols, 0x8c31e98c, 0x983a, 0x48a5,
            0x90, 0x16, 0x6f, 0xe5, 0xd6, 0x67, 0xa9, 0x50);
DEFINE_GUID(IID_IDebugSymbols2, 0x3a707211, 0xafdd, 0x4495,
            0xad, 0x4f, 0x56, 0xfe, 0xcd, 0xf8, 0x16, 0x3f);
DEFINE_GUID(IID_IDebugSymbols3, 0xf02fbecc, 0x50ac, 0x4f36,
            0x9a, 0xd9, 0xc9, 0x75, 0xe8, 0xf3, 0x2f, 0xf8);
DEFINE_GUID(IID_IDebugSymbols4, 0xe391bbd8, 0x9d8c, 0x4418,
            0x84, 0x0b, 0xc0, 0x06, 0x59, 0x2a, 0x17, 0x52);
DEFINE_GUID(IID_IDebugSymbols5, 0xc65fa83e, 0x1e69, 0x475e,
            0x8e, 0x0e, 0xb5, 0xd7, 0x9e, 0x9c, 0xc1, 0x7e);
DEFINE_GUID(IID_IDebugSystemObjects, 0x6b86fe2c, 0x2c4f, 0x4f0c,
            0x9d, 0xa2, 0x17, 0x43, 0x11, 0xac, 0xc3, 0x27);
DEFINE_GUID(IID_IDebugSystemObjects2, 0x0ae9f5ff, 0x1852, 0x4679,
            0xb0, 0x55, 0x49, 0x4b, 0xee, 0x64, 0x07, 0xee);
DEFINE_GUID(IID_IDebugSystemObjects3, 0xe9676e2f, 0xe286, 0x4ea3,
            0xb0, 0xf9, 0xdf, 0xe5, 0xd9, 0xfc, 0x33, 0x0e);
DEFINE_GUID(IID_IDebugSystemObjects4, 0x489468e6, 0x7d0f, 0x4af5,
            0x87, 0xab, 0x25, 0x20, 0x74, 0x54, 0xd5, 0x53);
typedef interface DECLSPEC_UUID("f2df5f53-071f-47bd-9de6-5734c3fed689")
    IDebugAdvanced* PDEBUG_ADVANCED;
typedef interface DECLSPEC_UUID("716d14c9-119b-4ba5-af1f-0890e672416a")
    IDebugAdvanced2* PDEBUG_ADVANCED2;
typedef interface DECLSPEC_UUID("cba4abb4-84c4-444d-87ca-a04e13286739")
    IDebugAdvanced3* PDEBUG_ADVANCED3;
typedef interface DECLSPEC_UUID("d1069067-2a65-4bf0-ae97-76184b67856b")
    IDebugAdvanced4* PDEBUG_ADVANCED4;
typedef interface DECLSPEC_UUID("5bd9d474-5975-423a-b88b-65a8e7110e65")
    IDebugBreakpoint* PDEBUG_BREAKPOINT;
typedef interface DECLSPEC_UUID("1b278d20-79f2-426e-a3f9-c1ddf375d48e")
    IDebugBreakpoint2* PDEBUG_BREAKPOINT2;
typedef interface DECLSPEC_UUID("38f5c249-b448-43bb-9835-579d4ec02249")
    IDebugBreakpoint3* PDEBUG_BREAKPOINT3;
typedef interface DECLSPEC_UUID("27fe5639-8407-4f47-8364-ee118fb08ac8")
    IDebugClient* PDEBUG_CLIENT;
typedef interface DECLSPEC_UUID("edbed635-372e-4dab-bbfe-ed0d2f63be81")
    IDebugClient2* PDEBUG_CLIENT2;
typedef interface DECLSPEC_UUID("dd492d7f-71b8-4ad6-a8dc-1c887479ff91")
    IDebugClient3* PDEBUG_CLIENT3;
typedef interface DECLSPEC_UUID("ca83c3de-5089-4cf8-93c8-d892387f2a5e")
    IDebugClient4* PDEBUG_CLIENT4;
typedef interface DECLSPEC_UUID("e3acb9d7-7ec2-4f0c-a0da-e81e0cbbe628")
    IDebugClient5* PDEBUG_CLIENT5;
typedef interface DECLSPEC_UUID("fd28b4c5-c498-4686-a28e-62cad2154eb3")
    IDebugClient6* PDEBUG_CLIENT6;
typedef interface DECLSPEC_UUID("13586be3-542e-481e-b1f2-8497ba74f9a9")
    IDebugClient7* PDEBUG_CLIENT7;
typedef interface DECLSPEC_UUID("a02b66c4-aea3-4234-a9f7-fe4c383d4e29")
    IDebugPlmClient* PIDEBUG_PLMCLIENT;
typedef interface DECLSPEC_UUID("597c980d-e7bd-4309-962c-9d9b69a7372c")
    IDebugPlmClient2* PIDEBUG_PLMCLIENT2;
typedef interface DECLSPEC_UUID("d4a5dbd1-ca02-4d90-856a-2a92bfd0f20f")
    IDebugPlmClient3* PIDEBUG_PLMCLIENT3;
typedef interface DECLSPEC_UUID("7782d8f2-2b85-4059-ab88-28ceddca1c80")
    IDebugOutputStream* PDEBUG_OUTPUT_STREAM;
typedef interface DECLSPEC_UUID("5182e668-105e-416e-ad92-24ef800424ba")
    IDebugControl* PDEBUG_CONTROL;
typedef interface DECLSPEC_UUID("d4366723-44df-4bed-8c7e-4c05424f4588")
    IDebugControl2* PDEBUG_CONTROL2;
typedef interface DECLSPEC_UUID("7df74a86-b03f-407f-90ab-a20dadcead08")
    IDebugControl3* PDEBUG_CONTROL3;
typedef interface DECLSPEC_UUID("94e60ce9-9b41-4b19-9fc0-6d9eb35272b3")
    IDebugControl4* PDEBUG_CONTROL4;
typedef interface DECLSPEC_UUID("b2ffe162-2412-429f-8d1d-5bf6dd824696")
    IDebugControl5* PDEBUG_CONTROL5;
typedef interface DECLSPEC_UUID("bc0d583f-126d-43a1-9cc4-a860ab1d537b")
    IDebugControl6* PDEBUG_CONTROL6;
typedef interface DECLSPEC_UUID("b86fb3b1-80d4-475b-aea3-cf06539cf63a")
    IDebugControl7* PDEBUG_CONTROL7;
typedef interface DECLSPEC_UUID("88f7dfab-3ea7-4c3a-aefb-c4e8106173aa")
    IDebugDataSpaces* PDEBUG_DATA_SPACES;
typedef interface DECLSPEC_UUID("7a5e852f-96e9-468f-ac1b-0b3addc4a049")
    IDebugDataSpaces2* PDEBUG_DATA_SPACES2;
typedef interface DECLSPEC_UUID("23f79d6c-8aaf-4f7c-a607-9995f5407e63")
    IDebugDataSpaces3* PDEBUG_DATA_SPACES3;
typedef interface DECLSPEC_UUID("d98ada1f-29e9-4ef5-a6c0-e53349883212")
    IDebugDataSpaces4* PDEBUG_DATA_SPACES4;
typedef interface DECLSPEC_UUID("337be28b-5036-4d72-b6bf-c45fbb9f2eaa")
    IDebugEventCallbacks* PDEBUG_EVENT_CALLBACKS;
typedef interface DECLSPEC_UUID("0690e046-9c23-45ac-a04f-987ac29ad0d3")
    IDebugEventCallbacksWide* PDEBUG_EVENT_CALLBACKS_WIDE;
typedef interface DECLSPEC_UUID("61a4905b-23f9-4247-b3c5-53d087529ab7")
    IDebugEventContextCallbacks* PDEBUG_EVENT_CONTEXT_CALLBACKS;
typedef interface DECLSPEC_UUID("9f50e42c-f136-499e-9a97-73036c94ed2d")
    IDebugInputCallbacks* PDEBUG_INPUT_CALLBACKS;
typedef interface DECLSPEC_UUID("4bf58045-d654-4c40-b0af-683090f356dc")
    IDebugOutputCallbacks* PDEBUG_OUTPUT_CALLBACKS;
typedef interface DECLSPEC_UUID("4c7fd663-c394-4e26-8ef1-34ad5ed3764c")
    IDebugOutputCallbacksWide* PDEBUG_OUTPUT_CALLBACKS_WIDE;
typedef interface DECLSPEC_UUID("67721fe9-56d2-4a44-a325-2b65513ce6eb")
    IDebugOutputCallbacks2* PDEBUG_OUTPUT_CALLBACKS2;
typedef interface DECLSPEC_UUID("ce289126-9e84-45a7-937e-67bb18691493")
    IDebugRegisters* PDEBUG_REGISTERS;
typedef interface DECLSPEC_UUID("1656afa9-19c6-4e3a-97e7-5dc9160cf9c4")
    IDebugRegisters2* PDEBUG_REGISTERS2;
typedef interface DECLSPEC_UUID("f2528316-0f1a-4431-aeed-11d096e1e2ab")
    IDebugSymbolGroup* PDEBUG_SYMBOL_GROUP;
typedef interface DECLSPEC_UUID("6a7ccc5f-fb5e-4dcc-b41c-6c20307bccc7")
    IDebugSymbolGroup2* PDEBUG_SYMBOL_GROUP2;
typedef interface DECLSPEC_UUID("8c31e98c-983a-48a5-9016-6fe5d667a950")
    IDebugSymbols* PDEBUG_SYMBOLS;
typedef interface DECLSPEC_UUID("3a707211-afdd-4495-ad4f-56fecdf8163f")
    IDebugSymbols2* PDEBUG_SYMBOLS2;
typedef interface DECLSPEC_UUID("f02fbecc-50ac-4f36-9ad9-c975e8f32ff8")
    IDebugSymbols3* PDEBUG_SYMBOLS3;
typedef interface DECLSPEC_UUID("e391bbd8-9d8c-4418-840b-c006592a1752")
    IDebugSymbols4* PDEBUG_SYMBOLS4;
typedef interface DECLSPEC_UUID("c65fa83e-1e69-475e-8e0e-b5d79e9cc17e")
    IDebugSymbols5* PDEBUG_SYMBOLS5;
typedef interface DECLSPEC_UUID("6b86fe2c-2c4f-4f0c-9da2-174311acc327")
    IDebugSystemObjects* PDEBUG_SYSTEM_OBJECTS;
typedef interface DECLSPEC_UUID("0ae9f5ff-1852-4679-b055-494bee6407ee")
    IDebugSystemObjects2* PDEBUG_SYSTEM_OBJECTS2;
typedef interface DECLSPEC_UUID("e9676e2f-e286-4ea3-b0f9-dfe5d9fc330e")
    IDebugSystemObjects3* PDEBUG_SYSTEM_OBJECTS3;
typedef interface DECLSPEC_UUID("489468e6-7d0f-4af5-87ab-25207454d553")
    IDebugSystemObjects4* PDEBUG_SYSTEM_OBJECTS4;
STDAPI
DebugConnect(
    _In_ PCSTR RemoteOptions,
    _In_ REFIID InterfaceId,
    _Out_ PVOID* Interface
    );
STDAPI
DebugConnectWide(
    _In_ PCWSTR RemoteOptions,
    _In_ REFIID InterfaceId,
    _Out_ PVOID* Interface
    );
STDAPI
DebugCreate(
    _In_ REFIID InterfaceId,
    _Out_ PVOID* Interface
    );
STDAPI
DebugCreateEx(
    _In_ REFIID InterfaceId,
    _In_ DWORD DbgEngOptions,
    _Out_ PVOID* Interface
    );
typedef struct _DEBUG_OFFSET_REGION
{
    ULONG64 Base;
    ULONG64 Size;
} DEBUG_OFFSET_REGION, *PDEBUG_OFFSET_REGION;
DECLARE_INTERFACE_(IDebugAdvanced, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetThreadContext)(
        THIS_
        _Out_writes_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(SetThreadContext)(
        THIS_
        _In_reads_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
};
typedef struct _DEBUG_READ_USER_MINIDUMP_STREAM
{
    IN ULONG StreamType;
    IN ULONG Flags;
    IN ULONG64 Offset;
    OUT PVOID Buffer;
    IN ULONG BufferSize;
    OUT ULONG BufferUsed;
} DEBUG_READ_USER_MINIDUMP_STREAM, *PDEBUG_READ_USER_MINIDUMP_STREAM;
typedef struct _DEBUG_GET_TEXT_COMPLETIONS_IN
{
    ULONG Flags;
    ULONG MatchCountLimit;
    ULONG64 Reserved[3];
} DEBUG_GET_TEXT_COMPLETIONS_IN, *PDEBUG_GET_TEXT_COMPLETIONS_IN;
typedef struct _DEBUG_GET_TEXT_COMPLETIONS_OUT
{
    ULONG Flags;
    ULONG ReplaceIndex;
    ULONG MatchCount;
    ULONG Reserved1;
    ULONG64 Reserved2[2];
} DEBUG_GET_TEXT_COMPLETIONS_OUT, *PDEBUG_GET_TEXT_COMPLETIONS_OUT;
typedef struct _DEBUG_CACHED_SYMBOL_INFO
{
    ULONG64 ModBase;
    ULONG64 Arg1;
    ULONG64 Arg2;
    ULONG Id;
    ULONG Arg3;
} DEBUG_CACHED_SYMBOL_INFO, *PDEBUG_CACHED_SYMBOL_INFO;
typedef struct _DEBUG_THREAD_BASIC_INFORMATION
{
    ULONG Valid;
    ULONG ExitStatus;
    ULONG PriorityClass;
    ULONG Priority;
    ULONG64 CreateTime;
    ULONG64 ExitTime;
    ULONG64 KernelTime;
    ULONG64 UserTime;
    ULONG64 StartOffset;
    ULONG64 Affinity;
} DEBUG_THREAD_BASIC_INFORMATION, *PDEBUG_THREAD_BASIC_INFORMATION;
DECLARE_INTERFACE_(IDebugAdvanced2, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetThreadContext)(
        THIS_
        _Out_writes_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(SetThreadContext)(
        THIS_
        _In_reads_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(Request)(
        THIS_
        _In_ ULONG Request,
        _In_reads_bytes_opt_(InBufferSize) PVOID InBuffer,
        _In_ ULONG InBufferSize,
        _Out_writes_bytes_opt_(OutBufferSize) PVOID OutBuffer,
        _In_ ULONG OutBufferSize,
        _Out_opt_ PULONG OutSize
        ) PURE;
    STDMETHOD(GetSourceFileInformation)(
        THIS_
        _In_ ULONG Which,
        _In_ PSTR SourceFile,
        _In_ ULONG64 Arg64,
        _In_ ULONG Arg32,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InfoSize
        ) PURE;
    STDMETHOD(FindSourceFileAndToken)(
        THIS_
        _In_ ULONG StartElement,
        _In_ ULONG64 ModAddr,
        _In_ PCSTR File,
        _In_ ULONG Flags,
        _In_reads_bytes_opt_(FileTokenSize) PVOID FileToken,
        _In_ ULONG FileTokenSize,
        _Out_opt_ PULONG FoundElement,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FoundSize
        ) PURE;
    STDMETHOD(GetSymbolInformation)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG64 Arg64,
        _In_ ULONG Arg32,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InfoSize,
        _Out_writes_opt_(StringBufferSize) PSTR StringBuffer,
        _In_ ULONG StringBufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSystemObjectInformation)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG64 Arg64,
        _In_ ULONG Arg32,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InfoSize
        ) PURE;
};
DECLARE_INTERFACE_(IDebugAdvanced3, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetThreadContext)(
        THIS_
        _Out_writes_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(SetThreadContext)(
        THIS_
        _In_reads_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(Request)(
        THIS_
        _In_ ULONG Request,
        _In_reads_bytes_opt_(InBufferSize) PVOID InBuffer,
        _In_ ULONG InBufferSize,
        _Out_writes_bytes_opt_(OutBufferSize) PVOID OutBuffer,
        _In_ ULONG OutBufferSize,
        _Out_opt_ PULONG OutSize
        ) PURE;
    STDMETHOD(GetSourceFileInformation)(
        THIS_
        _In_ ULONG Which,
        _In_ PSTR SourceFile,
        _In_ ULONG64 Arg64,
        _In_ ULONG Arg32,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InfoSize
        ) PURE;
    STDMETHOD(FindSourceFileAndToken)(
        THIS_
        _In_ ULONG StartElement,
        _In_ ULONG64 ModAddr,
        _In_ PCSTR File,
        _In_ ULONG Flags,
        _In_reads_bytes_opt_(FileTokenSize) PVOID FileToken,
        _In_ ULONG FileTokenSize,
        _Out_opt_ PULONG FoundElement,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FoundSize
        ) PURE;
    STDMETHOD(GetSymbolInformation)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG64 Arg64,
        _In_ ULONG Arg32,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InfoSize,
        _Out_writes_opt_(StringBufferSize) PSTR StringBuffer,
        _In_ ULONG StringBufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSystemObjectInformation)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG64 Arg64,
        _In_ ULONG Arg32,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InfoSize
        ) PURE;
    STDMETHOD(GetSourceFileInformationWide)(
        THIS_
        _In_ ULONG Which,
        _In_ PWSTR SourceFile,
        _In_ ULONG64 Arg64,
        _In_ ULONG Arg32,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InfoSize
        ) PURE;
    STDMETHOD(FindSourceFileAndTokenWide)(
        THIS_
        _In_ ULONG StartElement,
        _In_ ULONG64 ModAddr,
        _In_ PCWSTR File,
        _In_ ULONG Flags,
        _In_reads_bytes_opt_(FileTokenSize) PVOID FileToken,
        _In_ ULONG FileTokenSize,
        _Out_opt_ PULONG FoundElement,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FoundSize
        ) PURE;
    STDMETHOD(GetSymbolInformationWide)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG64 Arg64,
        _In_ ULONG Arg32,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InfoSize,
        _Out_writes_opt_(StringBufferSize) PWSTR StringBuffer,
        _In_ ULONG StringBufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
};
typedef struct _SYMBOL_INFO_EX
{
    ULONG SizeOfStruct;
    ULONG TypeOfInfo;
    ULONG64 Offset;
    ULONG Line;
    ULONG Displacement;
    ULONG Reserved[4];
} SYMBOL_INFO_EX, *PSYMBOL_INFO_EX;
DECLARE_INTERFACE_(IDebugAdvanced4, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetThreadContext)(
        THIS_
        _Out_writes_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(SetThreadContext)(
        THIS_
        _In_reads_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(Request)(
        THIS_
        _In_ ULONG Request,
        _In_reads_bytes_opt_(InBufferSize) PVOID InBuffer,
        _In_ ULONG InBufferSize,
        _Out_writes_bytes_opt_(OutBufferSize) PVOID OutBuffer,
        _In_ ULONG OutBufferSize,
        _Out_opt_ PULONG OutSize
        ) PURE;
    STDMETHOD(GetSourceFileInformation)(
        THIS_
        _In_ ULONG Which,
        _In_ PSTR SourceFile,
        _In_ ULONG64 Arg64,
        _In_ ULONG Arg32,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InfoSize
        ) PURE;
    STDMETHOD(FindSourceFileAndToken)(
        THIS_
        _In_ ULONG StartElement,
        _In_ ULONG64 ModAddr,
        _In_ PCSTR File,
        _In_ ULONG Flags,
        _In_reads_bytes_opt_(FileTokenSize) PVOID FileToken,
        _In_ ULONG FileTokenSize,
        _Out_opt_ PULONG FoundElement,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FoundSize
        ) PURE;
    STDMETHOD(GetSymbolInformation)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG64 Arg64,
        _In_ ULONG Arg32,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InfoSize,
        _Out_writes_opt_(StringBufferSize) PSTR StringBuffer,
        _In_ ULONG StringBufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSystemObjectInformation)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG64 Arg64,
        _In_ ULONG Arg32,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InfoSize
        ) PURE;
    STDMETHOD(GetSourceFileInformationWide)(
        THIS_
        _In_ ULONG Which,
        _In_ PWSTR SourceFile,
        _In_ ULONG64 Arg64,
        _In_ ULONG Arg32,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InfoSize
        ) PURE;
    STDMETHOD(FindSourceFileAndTokenWide)(
        THIS_
        _In_ ULONG StartElement,
        _In_ ULONG64 ModAddr,
        _In_ PCWSTR File,
        _In_ ULONG Flags,
        _In_reads_bytes_opt_(FileTokenSize) PVOID FileToken,
        _In_ ULONG FileTokenSize,
        _Out_opt_ PULONG FoundElement,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FoundSize
        ) PURE;
    STDMETHOD(GetSymbolInformationWide)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG64 Arg64,
        _In_ ULONG Arg32,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InfoSize,
        _Out_writes_opt_(StringBufferSize) PWSTR StringBuffer,
        _In_ ULONG StringBufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSymbolInformationWideEx)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG64 Arg64,
        _In_ ULONG Arg32,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InfoSize,
        _Out_writes_opt_(StringBufferSize) PWSTR StringBuffer,
        _In_ ULONG StringBufferSize,
        _Out_opt_ PULONG StringSize,
        _Out_opt_ PSYMBOL_INFO_EX pInfoEx
        ) PURE;
};
typedef struct _DEBUG_BREAKPOINT_PARAMETERS
{
    ULONG64 Offset;
    ULONG Id;
    ULONG BreakType;
    ULONG ProcType;
    ULONG Flags;
    ULONG DataSize;
    ULONG DataAccessType;
    ULONG PassCount;
    ULONG CurrentPassCount;
    ULONG MatchThread;
    ULONG CommandSize;
    ULONG OffsetExpressionSize;
} DEBUG_BREAKPOINT_PARAMETERS, *PDEBUG_BREAKPOINT_PARAMETERS;
DECLARE_INTERFACE_(IDebugBreakpoint, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetId)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetType)(
        THIS_
        _Out_ PULONG BreakType,
        _Out_ PULONG ProcType
        ) PURE;
    STDMETHOD(GetAdder)(
        THIS_
        _Out_ PDEBUG_CLIENT* Adder
        ) PURE;
    STDMETHOD(GetFlags)(
        THIS_
        _Out_ PULONG Flags
        ) PURE;
    STDMETHOD(AddFlags)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(RemoveFlags)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(SetFlags)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(SetOffset)(
        THIS_
        _In_ ULONG64 Offset
        ) PURE;
    STDMETHOD(GetDataParameters)(
        THIS_
        _Out_ PULONG Size,
        _Out_ PULONG AccessType
        ) PURE;
    STDMETHOD(SetDataParameters)(
        THIS_
        _In_ ULONG Size,
        _In_ ULONG AccessType
        ) PURE;
    STDMETHOD(GetPassCount)(
        THIS_
        _Out_ PULONG Count
        ) PURE;
    STDMETHOD(SetPassCount)(
        THIS_
        _In_ ULONG Count
        ) PURE;
    STDMETHOD(GetCurrentPassCount)(
        THIS_
        _Out_ PULONG Count
        ) PURE;
    STDMETHOD(GetMatchThreadId)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(SetMatchThreadId)(
        THIS_
        _In_ ULONG Thread
        ) PURE;
    STDMETHOD(GetCommand)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetCommand)(
        THIS_
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(GetOffsetExpression)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ExpressionSize
        ) PURE;
    STDMETHOD(SetOffsetExpression)(
        THIS_
        _In_ PCSTR Expression
        ) PURE;
    STDMETHOD(GetParameters)(
        THIS_
        _Out_ PDEBUG_BREAKPOINT_PARAMETERS Params
        ) PURE;
};
DECLARE_INTERFACE_(IDebugBreakpoint2, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetId)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetType)(
        THIS_
        _Out_ PULONG BreakType,
        _Out_ PULONG ProcType
        ) PURE;
    STDMETHOD(GetAdder)(
        THIS_
        _Out_ PDEBUG_CLIENT* Adder
        ) PURE;
    STDMETHOD(GetFlags)(
        THIS_
        _Out_ PULONG Flags
        ) PURE;
    STDMETHOD(AddFlags)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(RemoveFlags)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(SetFlags)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(SetOffset)(
        THIS_
        _In_ ULONG64 Offset
        ) PURE;
    STDMETHOD(GetDataParameters)(
        THIS_
        _Out_ PULONG Size,
        _Out_ PULONG AccessType
        ) PURE;
    STDMETHOD(SetDataParameters)(
        THIS_
        _In_ ULONG Size,
        _In_ ULONG AccessType
        ) PURE;
    STDMETHOD(GetPassCount)(
        THIS_
        _Out_ PULONG Count
        ) PURE;
    STDMETHOD(SetPassCount)(
        THIS_
        _In_ ULONG Count
        ) PURE;
    STDMETHOD(GetCurrentPassCount)(
        THIS_
        _Out_ PULONG Count
        ) PURE;
    STDMETHOD(GetMatchThreadId)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(SetMatchThreadId)(
        THIS_
        _In_ ULONG Thread
        ) PURE;
    STDMETHOD(GetCommand)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetCommand)(
        THIS_
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(GetOffsetExpression)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ExpressionSize
        ) PURE;
    STDMETHOD(SetOffsetExpression)(
        THIS_
        _In_ PCSTR Expression
        ) PURE;
    STDMETHOD(GetParameters)(
        THIS_
        _Out_ PDEBUG_BREAKPOINT_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetCommandWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetCommandWide)(
        THIS_
        _In_ PCWSTR Command
        ) PURE;
    STDMETHOD(GetOffsetExpressionWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ExpressionSize
        ) PURE;
    STDMETHOD(SetOffsetExpressionWide)(
        THIS_
        _In_ PCWSTR Expression
        ) PURE;
};
DECLARE_INTERFACE_(IDebugBreakpoint3, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetId)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetType)(
        THIS_
        _Out_ PULONG BreakType,
        _Out_ PULONG ProcType
        ) PURE;
    STDMETHOD(GetAdder)(
        THIS_
        _Out_ PDEBUG_CLIENT* Adder
        ) PURE;
    STDMETHOD(GetFlags)(
        THIS_
        _Out_ PULONG Flags
        ) PURE;
    STDMETHOD(AddFlags)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(RemoveFlags)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(SetFlags)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(SetOffset)(
        THIS_
        _In_ ULONG64 Offset
        ) PURE;
    STDMETHOD(GetDataParameters)(
        THIS_
        _Out_ PULONG Size,
        _Out_ PULONG AccessType
        ) PURE;
    STDMETHOD(SetDataParameters)(
        THIS_
        _In_ ULONG Size,
        _In_ ULONG AccessType
        ) PURE;
    STDMETHOD(GetPassCount)(
        THIS_
        _Out_ PULONG Count
        ) PURE;
    STDMETHOD(SetPassCount)(
        THIS_
        _In_ ULONG Count
        ) PURE;
    STDMETHOD(GetCurrentPassCount)(
        THIS_
        _Out_ PULONG Count
        ) PURE;
    STDMETHOD(GetMatchThreadId)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(SetMatchThreadId)(
        THIS_
        _In_ ULONG Thread
        ) PURE;
    STDMETHOD(GetCommand)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetCommand)(
        THIS_
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(GetOffsetExpression)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ExpressionSize
        ) PURE;
    STDMETHOD(SetOffsetExpression)(
        THIS_
        _In_ PCSTR Expression
        ) PURE;
    STDMETHOD(GetParameters)(
        THIS_
        _Out_ PDEBUG_BREAKPOINT_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetCommandWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetCommandWide)(
        THIS_
        _In_ PCWSTR Command
        ) PURE;
    STDMETHOD(GetOffsetExpressionWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ExpressionSize
        ) PURE;
    STDMETHOD(SetOffsetExpressionWide)(
        THIS_
        _In_ PCWSTR Expression
        ) PURE;
    STDMETHOD(GetGuid)(
        THIS_
        _Out_ LPGUID Guid
        ) PURE;
};
typedef struct _DEBUG_CREATE_PROCESS_OPTIONS
{
    ULONG CreateFlags;
    ULONG EngCreateFlags;
    ULONG VerifierFlags;
    ULONG Reserved;
} DEBUG_CREATE_PROCESS_OPTIONS, *PDEBUG_CREATE_PROCESS_OPTIONS;
typedef struct _DEBUG_CLIENT_CONTEXT
{
    UINT cbSize;
    UINT eClient;
} DEBUG_CLIENT_CONTEXT, *PDEBUG_CLIENT_CONTEXT;
DECLARE_INTERFACE_(IDebugClient, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(AttachKernel)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PCSTR ConnectOptions
        ) PURE;
    STDMETHOD(GetKernelConnectionOptions)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG OptionsSize
        ) PURE;
    STDMETHOD(SetKernelConnectionOptions)(
        THIS_
        _In_ PCSTR Options
        ) PURE;
    STDMETHOD(StartProcessServer)(
        THIS_
        _In_ ULONG Flags,
        _In_ PCSTR Options,
        _In_opt_ _Reserved_ PVOID Reserved
        ) PURE;
    STDMETHOD(ConnectProcessServer)(
        THIS_
        _In_ PCSTR RemoteOptions,
        _Out_ PULONG64 Server
        ) PURE;
    STDMETHOD(DisconnectProcessServer)(
        THIS_
        _In_ ULONG64 Server
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIds)(
        THIS_
        _In_ ULONG64 Server,
        _Out_writes_opt_(Count) PULONG Ids,
        _In_ ULONG Count,
        _Out_opt_ PULONG ActualCount
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIdByExecutableName)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCSTR ExeName,
        _In_ ULONG Flags,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetRunningProcessDescription)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG SystemId,
        _In_ ULONG Flags,
        _Out_writes_opt_(ExeNameSize) PSTR ExeName,
        _In_ ULONG ExeNameSize,
        _Out_opt_ PULONG ActualExeNameSize,
        _Out_writes_opt_(DescriptionSize) PSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG ActualDescriptionSize
        ) PURE;
    STDMETHOD(AttachProcess)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(CreateProcess)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PSTR CommandLine,
        _In_ ULONG CreateFlags
        ) PURE;
    STDMETHOD(CreateProcessAndAttach)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PSTR CommandLine,
        _In_ ULONG CreateFlags,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(GetProcessOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(OpenDumpFile)(
        THIS_
        _In_ PCSTR DumpFile
        ) PURE;
    STDMETHOD(WriteDumpFile)(
        THIS_
        _In_ PCSTR DumpFile,
        _In_ ULONG Qualifier
        ) PURE;
    STDMETHOD(ConnectSession)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG HistoryLimit
        ) PURE;
    STDMETHOD(StartServer)(
        THIS_
        _In_ PCSTR Options
        ) PURE;
    STDMETHOD(OutputServers)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR Machine,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(TerminateProcesses)(
        THIS
        ) PURE;
    STDMETHOD(DetachProcesses)(
        THIS
        ) PURE;
    STDMETHOD(EndSession)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetExitCode)(
        THIS_
        _Out_ PULONG Code
        ) PURE;
    STDMETHOD(DispatchCallbacks)(
        THIS_
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(ExitDispatch)(
        THIS_
        _In_ PDEBUG_CLIENT Client
        ) PURE;
    STDMETHOD(CreateClient)(
        THIS_
        _Out_ PDEBUG_CLIENT* Client
        ) PURE;
    STDMETHOD(GetInputCallbacks)(
        THIS_
        _Out_ PDEBUG_INPUT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetInputCallbacks)(
        THIS_
        _In_opt_ PDEBUG_INPUT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(GetOutputCallbacks)(
        THIS_
        _Out_ PDEBUG_OUTPUT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetOutputCallbacks)(
        THIS_
        _In_opt_ PDEBUG_OUTPUT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(GetOutputMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetOutputMask)(
        THIS_
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(GetOtherOutputMask)(
        THIS_
        _In_ PDEBUG_CLIENT Client,
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetOtherOutputMask)(
        THIS_
        _In_ PDEBUG_CLIENT Client,
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(GetOutputWidth)(
        THIS_
        _Out_ PULONG Columns
        ) PURE;
    STDMETHOD(SetOutputWidth)(
        THIS_
        _In_ ULONG Columns
        ) PURE;
    STDMETHOD(GetOutputLinePrefix)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PrefixSize
        ) PURE;
    STDMETHOD(SetOutputLinePrefix)(
        THIS_
        _In_opt_ PCSTR Prefix
        ) PURE;
    STDMETHOD(GetIdentity)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG IdentitySize
        ) PURE;
    STDMETHOD(OutputIdentity)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ PCSTR Format
        ) PURE;
    STDMETHOD(GetEventCallbacks)(
        THIS_
        _Out_ PDEBUG_EVENT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetEventCallbacks)(
        THIS_
        _In_opt_ PDEBUG_EVENT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(FlushCallbacks)(
        THIS
        ) PURE;
};
DECLARE_INTERFACE_(IDebugClient2, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(AttachKernel)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PCSTR ConnectOptions
        ) PURE;
    STDMETHOD(GetKernelConnectionOptions)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG OptionsSize
        ) PURE;
    STDMETHOD(SetKernelConnectionOptions)(
        THIS_
        _In_ PCSTR Options
        ) PURE;
    STDMETHOD(StartProcessServer)(
        THIS_
        _In_ ULONG Flags,
        _In_ PCSTR Options,
        _In_opt_ _Reserved_ PVOID Reserved
        ) PURE;
    STDMETHOD(ConnectProcessServer)(
        THIS_
        _In_ PCSTR RemoteOptions,
        _Out_ PULONG64 Server
        ) PURE;
    STDMETHOD(DisconnectProcessServer)(
        THIS_
        _In_ ULONG64 Server
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIds)(
        THIS_
        _In_ ULONG64 Server,
        _Out_writes_opt_(Count) PULONG Ids,
        _In_ ULONG Count,
        _Out_opt_ PULONG ActualCount
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIdByExecutableName)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCSTR ExeName,
        _In_ ULONG Flags,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetRunningProcessDescription)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG SystemId,
        _In_ ULONG Flags,
        _Out_writes_opt_(ExeNameSize) PSTR ExeName,
        _In_ ULONG ExeNameSize,
        _Out_opt_ PULONG ActualExeNameSize,
        _Out_writes_opt_(DescriptionSize) PSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG ActualDescriptionSize
        ) PURE;
    STDMETHOD(AttachProcess)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(CreateProcess)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PSTR CommandLine,
        _In_ ULONG CreateFlags
        ) PURE;
    STDMETHOD(CreateProcessAndAttach)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PSTR CommandLine,
        _In_ ULONG CreateFlags,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(GetProcessOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(OpenDumpFile)(
        THIS_
        _In_ PCSTR DumpFile
        ) PURE;
    STDMETHOD(WriteDumpFile)(
        THIS_
        _In_ PCSTR DumpFile,
        _In_ ULONG Qualifier
        ) PURE;
    STDMETHOD(ConnectSession)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG HistoryLimit
        ) PURE;
    STDMETHOD(StartServer)(
        THIS_
        _In_ PCSTR Options
        ) PURE;
    STDMETHOD(OutputServers)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR Machine,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(TerminateProcesses)(
        THIS
        ) PURE;
    STDMETHOD(DetachProcesses)(
        THIS
        ) PURE;
    STDMETHOD(EndSession)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetExitCode)(
        THIS_
        _Out_ PULONG Code
        ) PURE;
    STDMETHOD(DispatchCallbacks)(
        THIS_
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(ExitDispatch)(
        THIS_
        _In_ PDEBUG_CLIENT Client
        ) PURE;
    STDMETHOD(CreateClient)(
        THIS_
        _Out_ PDEBUG_CLIENT* Client
        ) PURE;
    STDMETHOD(GetInputCallbacks)(
        THIS_
        _Out_ PDEBUG_INPUT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetInputCallbacks)(
        THIS_
        _In_opt_ PDEBUG_INPUT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(GetOutputCallbacks)(
        THIS_
        _Out_ PDEBUG_OUTPUT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetOutputCallbacks)(
        THIS_
        _In_opt_ PDEBUG_OUTPUT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(GetOutputMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetOutputMask)(
        THIS_
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(GetOtherOutputMask)(
        THIS_
        _In_ PDEBUG_CLIENT Client,
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetOtherOutputMask)(
        THIS_
        _In_ PDEBUG_CLIENT Client,
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(GetOutputWidth)(
        THIS_
        _Out_ PULONG Columns
        ) PURE;
    STDMETHOD(SetOutputWidth)(
        THIS_
        _In_ ULONG Columns
        ) PURE;
    STDMETHOD(GetOutputLinePrefix)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PrefixSize
        ) PURE;
    STDMETHOD(SetOutputLinePrefix)(
        THIS_
        _In_opt_ PCSTR Prefix
        ) PURE;
    STDMETHOD(GetIdentity)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG IdentitySize
        ) PURE;
    STDMETHOD(OutputIdentity)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ PCSTR Format
        ) PURE;
    STDMETHOD(GetEventCallbacks)(
        THIS_
        _Out_ PDEBUG_EVENT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetEventCallbacks)(
        THIS_
        _In_opt_ PDEBUG_EVENT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(FlushCallbacks)(
        THIS
        ) PURE;
    STDMETHOD(WriteDumpFile2)(
        THIS_
        _In_ PCSTR DumpFile,
        _In_ ULONG Qualifier,
        _In_ ULONG FormatFlags,
        _In_opt_ PCSTR Comment
        ) PURE;
    STDMETHOD(AddDumpInformationFile)(
        THIS_
        _In_ PCSTR InfoFile,
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(EndProcessServer)(
        THIS_
        _In_ ULONG64 Server
        ) PURE;
    STDMETHOD(WaitForProcessServerEnd)(
        THIS_
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(IsKernelDebuggerEnabled)(
        THIS
        ) PURE;
    STDMETHOD(TerminateCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(DetachCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(AbandonCurrentProcess)(
        THIS
        ) PURE;
};
DECLARE_INTERFACE_(IDebugClient3, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(AttachKernel)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PCSTR ConnectOptions
        ) PURE;
    STDMETHOD(GetKernelConnectionOptions)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG OptionsSize
        ) PURE;
    STDMETHOD(SetKernelConnectionOptions)(
        THIS_
        _In_ PCSTR Options
        ) PURE;
    STDMETHOD(StartProcessServer)(
        THIS_
        _In_ ULONG Flags,
        _In_ PCSTR Options,
        _In_opt_ _Reserved_ PVOID Reserved
        ) PURE;
    STDMETHOD(ConnectProcessServer)(
        THIS_
        _In_ PCSTR RemoteOptions,
        _Out_ PULONG64 Server
        ) PURE;
    STDMETHOD(DisconnectProcessServer)(
        THIS_
        _In_ ULONG64 Server
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIds)(
        THIS_
        _In_ ULONG64 Server,
        _Out_writes_opt_(Count) PULONG Ids,
        _In_ ULONG Count,
        _Out_opt_ PULONG ActualCount
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIdByExecutableName)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCSTR ExeName,
        _In_ ULONG Flags,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetRunningProcessDescription)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG SystemId,
        _In_ ULONG Flags,
        _Out_writes_opt_(ExeNameSize) PSTR ExeName,
        _In_ ULONG ExeNameSize,
        _Out_opt_ PULONG ActualExeNameSize,
        _Out_writes_opt_(DescriptionSize) PSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG ActualDescriptionSize
        ) PURE;
    STDMETHOD(AttachProcess)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(CreateProcess)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PSTR CommandLine,
        _In_ ULONG CreateFlags
        ) PURE;
    STDMETHOD(CreateProcessAndAttach)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PSTR CommandLine,
        _In_ ULONG CreateFlags,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(GetProcessOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(OpenDumpFile)(
        THIS_
        _In_ PCSTR DumpFile
        ) PURE;
    STDMETHOD(WriteDumpFile)(
        THIS_
        _In_ PCSTR DumpFile,
        _In_ ULONG Qualifier
        ) PURE;
    STDMETHOD(ConnectSession)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG HistoryLimit
        ) PURE;
    STDMETHOD(StartServer)(
        THIS_
        _In_ PCSTR Options
        ) PURE;
    STDMETHOD(OutputServers)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR Machine,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(TerminateProcesses)(
        THIS
        ) PURE;
    STDMETHOD(DetachProcesses)(
        THIS
        ) PURE;
    STDMETHOD(EndSession)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetExitCode)(
        THIS_
        _Out_ PULONG Code
        ) PURE;
    STDMETHOD(DispatchCallbacks)(
        THIS_
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(ExitDispatch)(
        THIS_
        _In_ PDEBUG_CLIENT Client
        ) PURE;
    STDMETHOD(CreateClient)(
        THIS_
        _Out_ PDEBUG_CLIENT* Client
        ) PURE;
    STDMETHOD(GetInputCallbacks)(
        THIS_
        _Out_ PDEBUG_INPUT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetInputCallbacks)(
        THIS_
        _In_opt_ PDEBUG_INPUT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(GetOutputCallbacks)(
        THIS_
        _Out_ PDEBUG_OUTPUT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetOutputCallbacks)(
        THIS_
        _In_opt_ PDEBUG_OUTPUT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(GetOutputMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetOutputMask)(
        THIS_
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(GetOtherOutputMask)(
        THIS_
        _In_ PDEBUG_CLIENT Client,
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetOtherOutputMask)(
        THIS_
        _In_ PDEBUG_CLIENT Client,
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(GetOutputWidth)(
        THIS_
        _Out_ PULONG Columns
        ) PURE;
    STDMETHOD(SetOutputWidth)(
        THIS_
        _In_ ULONG Columns
        ) PURE;
    STDMETHOD(GetOutputLinePrefix)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PrefixSize
        ) PURE;
    STDMETHOD(SetOutputLinePrefix)(
        THIS_
        _In_opt_ PCSTR Prefix
        ) PURE;
    STDMETHOD(GetIdentity)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG IdentitySize
        ) PURE;
    STDMETHOD(OutputIdentity)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ PCSTR Format
        ) PURE;
    STDMETHOD(GetEventCallbacks)(
        THIS_
        _Out_ PDEBUG_EVENT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetEventCallbacks)(
        THIS_
        _In_opt_ PDEBUG_EVENT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(FlushCallbacks)(
        THIS
        ) PURE;
    STDMETHOD(WriteDumpFile2)(
        THIS_
        _In_ PCSTR DumpFile,
        _In_ ULONG Qualifier,
        _In_ ULONG FormatFlags,
        _In_opt_ PCSTR Comment
        ) PURE;
    STDMETHOD(AddDumpInformationFile)(
        THIS_
        _In_ PCSTR InfoFile,
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(EndProcessServer)(
        THIS_
        _In_ ULONG64 Server
        ) PURE;
    STDMETHOD(WaitForProcessServerEnd)(
        THIS_
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(IsKernelDebuggerEnabled)(
        THIS
        ) PURE;
    STDMETHOD(TerminateCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(DetachCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(AbandonCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIdByExecutableNameWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCWSTR ExeName,
        _In_ ULONG Flags,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetRunningProcessDescriptionWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG SystemId,
        _In_ ULONG Flags,
        _Out_writes_opt_(ExeNameSize) PWSTR ExeName,
        _In_ ULONG ExeNameSize,
        _Out_opt_ PULONG ActualExeNameSize,
        _Out_writes_opt_(DescriptionSize) PWSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG ActualDescriptionSize
        ) PURE;
    STDMETHOD(CreateProcessWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PWSTR CommandLine,
        _In_ ULONG CreateFlags
        ) PURE;
    STDMETHOD(CreateProcessAndAttachWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PWSTR CommandLine,
        _In_ ULONG CreateFlags,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
};
DECLARE_INTERFACE_(IDebugClient4, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(AttachKernel)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PCSTR ConnectOptions
        ) PURE;
    STDMETHOD(GetKernelConnectionOptions)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG OptionsSize
        ) PURE;
    STDMETHOD(SetKernelConnectionOptions)(
        THIS_
        _In_ PCSTR Options
        ) PURE;
    STDMETHOD(StartProcessServer)(
        THIS_
        _In_ ULONG Flags,
        _In_ PCSTR Options,
        _In_opt_ _Reserved_ PVOID Reserved
        ) PURE;
    STDMETHOD(ConnectProcessServer)(
        THIS_
        _In_ PCSTR RemoteOptions,
        _Out_ PULONG64 Server
        ) PURE;
    STDMETHOD(DisconnectProcessServer)(
        THIS_
        _In_ ULONG64 Server
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIds)(
        THIS_
        _In_ ULONG64 Server,
        _Out_writes_opt_(Count) PULONG Ids,
        _In_ ULONG Count,
        _Out_opt_ PULONG ActualCount
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIdByExecutableName)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCSTR ExeName,
        _In_ ULONG Flags,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetRunningProcessDescription)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG SystemId,
        _In_ ULONG Flags,
        _Out_writes_opt_(ExeNameSize) PSTR ExeName,
        _In_ ULONG ExeNameSize,
        _Out_opt_ PULONG ActualExeNameSize,
        _Out_writes_opt_(DescriptionSize) PSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG ActualDescriptionSize
        ) PURE;
    STDMETHOD(AttachProcess)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(CreateProcess)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PSTR CommandLine,
        _In_ ULONG CreateFlags
        ) PURE;
    STDMETHOD(CreateProcessAndAttach)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PSTR CommandLine,
        _In_ ULONG CreateFlags,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(GetProcessOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(OpenDumpFile)(
        THIS_
        _In_ PCSTR DumpFile
        ) PURE;
    STDMETHOD(WriteDumpFile)(
        THIS_
        _In_ PCSTR DumpFile,
        _In_ ULONG Qualifier
        ) PURE;
    STDMETHOD(ConnectSession)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG HistoryLimit
        ) PURE;
    STDMETHOD(StartServer)(
        THIS_
        _In_ PCSTR Options
        ) PURE;
    STDMETHOD(OutputServers)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR Machine,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(TerminateProcesses)(
        THIS
        ) PURE;
    STDMETHOD(DetachProcesses)(
        THIS
        ) PURE;
    STDMETHOD(EndSession)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetExitCode)(
        THIS_
        _Out_ PULONG Code
        ) PURE;
    STDMETHOD(DispatchCallbacks)(
        THIS_
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(ExitDispatch)(
        THIS_
        _In_ PDEBUG_CLIENT Client
        ) PURE;
    STDMETHOD(CreateClient)(
        THIS_
        _Out_ PDEBUG_CLIENT* Client
        ) PURE;
    STDMETHOD(GetInputCallbacks)(
        THIS_
        _Out_ PDEBUG_INPUT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetInputCallbacks)(
        THIS_
        _In_opt_ PDEBUG_INPUT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(GetOutputCallbacks)(
        THIS_
        _Out_ PDEBUG_OUTPUT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetOutputCallbacks)(
        THIS_
        _In_opt_ PDEBUG_OUTPUT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(GetOutputMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetOutputMask)(
        THIS_
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(GetOtherOutputMask)(
        THIS_
        _In_ PDEBUG_CLIENT Client,
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetOtherOutputMask)(
        THIS_
        _In_ PDEBUG_CLIENT Client,
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(GetOutputWidth)(
        THIS_
        _Out_ PULONG Columns
        ) PURE;
    STDMETHOD(SetOutputWidth)(
        THIS_
        _In_ ULONG Columns
        ) PURE;
    STDMETHOD(GetOutputLinePrefix)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PrefixSize
        ) PURE;
    STDMETHOD(SetOutputLinePrefix)(
        THIS_
        _In_opt_ PCSTR Prefix
        ) PURE;
    STDMETHOD(GetIdentity)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG IdentitySize
        ) PURE;
    STDMETHOD(OutputIdentity)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ PCSTR Format
        ) PURE;
    STDMETHOD(GetEventCallbacks)(
        THIS_
        _Out_ PDEBUG_EVENT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetEventCallbacks)(
        THIS_
        _In_opt_ PDEBUG_EVENT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(FlushCallbacks)(
        THIS
        ) PURE;
    STDMETHOD(WriteDumpFile2)(
        THIS_
        _In_ PCSTR DumpFile,
        _In_ ULONG Qualifier,
        _In_ ULONG FormatFlags,
        _In_opt_ PCSTR Comment
        ) PURE;
    STDMETHOD(AddDumpInformationFile)(
        THIS_
        _In_ PCSTR InfoFile,
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(EndProcessServer)(
        THIS_
        _In_ ULONG64 Server
        ) PURE;
    STDMETHOD(WaitForProcessServerEnd)(
        THIS_
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(IsKernelDebuggerEnabled)(
        THIS
        ) PURE;
    STDMETHOD(TerminateCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(DetachCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(AbandonCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIdByExecutableNameWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCWSTR ExeName,
        _In_ ULONG Flags,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetRunningProcessDescriptionWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG SystemId,
        _In_ ULONG Flags,
        _Out_writes_opt_(ExeNameSize) PWSTR ExeName,
        _In_ ULONG ExeNameSize,
        _Out_opt_ PULONG ActualExeNameSize,
        _Out_writes_opt_(DescriptionSize) PWSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG ActualDescriptionSize
        ) PURE;
    STDMETHOD(CreateProcessWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PWSTR CommandLine,
        _In_ ULONG CreateFlags
        ) PURE;
    STDMETHOD(CreateProcessAndAttachWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PWSTR CommandLine,
        _In_ ULONG CreateFlags,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(OpenDumpFileWide)(
        THIS_
        _In_opt_ PCWSTR FileName,
        _In_ ULONG64 FileHandle
        ) PURE;
    STDMETHOD(WriteDumpFileWide)(
        THIS_
        _In_opt_ PCWSTR FileName,
        _In_ ULONG64 FileHandle,
        _In_ ULONG Qualifier,
        _In_ ULONG FormatFlags,
        _In_opt_ PCWSTR Comment
        ) PURE;
    STDMETHOD(AddDumpInformationFileWide)(
        THIS_
        _In_opt_ PCWSTR FileName,
        _In_ ULONG64 FileHandle,
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(GetNumberDumpFiles)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetDumpFile)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Handle,
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetDumpFileWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Handle,
        _Out_ PULONG Type
        ) PURE;
};
DECLARE_INTERFACE_(IDebugClient5, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(AttachKernel)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PCSTR ConnectOptions
        ) PURE;
    STDMETHOD(GetKernelConnectionOptions)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG OptionsSize
        ) PURE;
    STDMETHOD(SetKernelConnectionOptions)(
        THIS_
        _In_ PCSTR Options
        ) PURE;
    STDMETHOD(StartProcessServer)(
        THIS_
        _In_ ULONG Flags,
        _In_ PCSTR Options,
        _In_opt_ _Reserved_ PVOID Reserved
        ) PURE;
    STDMETHOD(ConnectProcessServer)(
        THIS_
        _In_ PCSTR RemoteOptions,
        _Out_ PULONG64 Server
        ) PURE;
    STDMETHOD(DisconnectProcessServer)(
        THIS_
        _In_ ULONG64 Server
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIds)(
        THIS_
        _In_ ULONG64 Server,
        _Out_writes_opt_(Count) PULONG Ids,
        _In_ ULONG Count,
        _Out_opt_ PULONG ActualCount
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIdByExecutableName)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCSTR ExeName,
        _In_ ULONG Flags,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetRunningProcessDescription)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG SystemId,
        _In_ ULONG Flags,
        _Out_writes_opt_(ExeNameSize) PSTR ExeName,
        _In_ ULONG ExeNameSize,
        _Out_opt_ PULONG ActualExeNameSize,
        _Out_writes_opt_(DescriptionSize) PSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG ActualDescriptionSize
        ) PURE;
    STDMETHOD(AttachProcess)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(CreateProcess)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PSTR CommandLine,
        _In_ ULONG CreateFlags
        ) PURE;
    STDMETHOD(CreateProcessAndAttach)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PSTR CommandLine,
        _In_ ULONG CreateFlags,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(GetProcessOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(OpenDumpFile)(
        THIS_
        _In_ PCSTR DumpFile
        ) PURE;
    STDMETHOD(WriteDumpFile)(
        THIS_
        _In_ PCSTR DumpFile,
        _In_ ULONG Qualifier
        ) PURE;
    STDMETHOD(ConnectSession)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG HistoryLimit
        ) PURE;
    STDMETHOD(StartServer)(
        THIS_
        _In_ PCSTR Options
        ) PURE;
    STDMETHOD(OutputServers)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR Machine,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(TerminateProcesses)(
        THIS
        ) PURE;
    STDMETHOD(DetachProcesses)(
        THIS
        ) PURE;
    STDMETHOD(EndSession)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetExitCode)(
        THIS_
        _Out_ PULONG Code
        ) PURE;
    STDMETHOD(DispatchCallbacks)(
        THIS_
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(ExitDispatch)(
        THIS_
        _In_ PDEBUG_CLIENT Client
        ) PURE;
    STDMETHOD(CreateClient)(
        THIS_
        _Out_ PDEBUG_CLIENT* Client
        ) PURE;
    STDMETHOD(GetInputCallbacks)(
        THIS_
        _Out_ PDEBUG_INPUT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetInputCallbacks)(
        THIS_
        _In_opt_ PDEBUG_INPUT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(GetOutputCallbacks)(
        THIS_
        _Out_ PDEBUG_OUTPUT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetOutputCallbacks)(
        THIS_
        _In_opt_ PDEBUG_OUTPUT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(GetOutputMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetOutputMask)(
        THIS_
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(GetOtherOutputMask)(
        THIS_
        _In_ PDEBUG_CLIENT Client,
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetOtherOutputMask)(
        THIS_
        _In_ PDEBUG_CLIENT Client,
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(GetOutputWidth)(
        THIS_
        _Out_ PULONG Columns
        ) PURE;
    STDMETHOD(SetOutputWidth)(
        THIS_
        _In_ ULONG Columns
        ) PURE;
    STDMETHOD(GetOutputLinePrefix)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PrefixSize
        ) PURE;
    STDMETHOD(SetOutputLinePrefix)(
        THIS_
        _In_opt_ PCSTR Prefix
        ) PURE;
    STDMETHOD(GetIdentity)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG IdentitySize
        ) PURE;
    STDMETHOD(OutputIdentity)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ PCSTR Format
        ) PURE;
    STDMETHOD(GetEventCallbacks)(
        THIS_
        _Out_ PDEBUG_EVENT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetEventCallbacks)(
        THIS_
        _In_opt_ PDEBUG_EVENT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(FlushCallbacks)(
        THIS
        ) PURE;
    STDMETHOD(WriteDumpFile2)(
        THIS_
        _In_ PCSTR DumpFile,
        _In_ ULONG Qualifier,
        _In_ ULONG FormatFlags,
        _In_opt_ PCSTR Comment
        ) PURE;
    STDMETHOD(AddDumpInformationFile)(
        THIS_
        _In_ PCSTR InfoFile,
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(EndProcessServer)(
        THIS_
        _In_ ULONG64 Server
        ) PURE;
    STDMETHOD(WaitForProcessServerEnd)(
        THIS_
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(IsKernelDebuggerEnabled)(
        THIS
        ) PURE;
    STDMETHOD(TerminateCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(DetachCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(AbandonCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIdByExecutableNameWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCWSTR ExeName,
        _In_ ULONG Flags,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetRunningProcessDescriptionWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG SystemId,
        _In_ ULONG Flags,
        _Out_writes_opt_(ExeNameSize) PWSTR ExeName,
        _In_ ULONG ExeNameSize,
        _Out_opt_ PULONG ActualExeNameSize,
        _Out_writes_opt_(DescriptionSize) PWSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG ActualDescriptionSize
        ) PURE;
    STDMETHOD(CreateProcessWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PWSTR CommandLine,
        _In_ ULONG CreateFlags
        ) PURE;
    STDMETHOD(CreateProcessAndAttachWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PWSTR CommandLine,
        _In_ ULONG CreateFlags,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(OpenDumpFileWide)(
        THIS_
        _In_opt_ PCWSTR FileName,
        _In_ ULONG64 FileHandle
        ) PURE;
    STDMETHOD(WriteDumpFileWide)(
        THIS_
        _In_opt_ PCWSTR FileName,
        _In_ ULONG64 FileHandle,
        _In_ ULONG Qualifier,
        _In_ ULONG FormatFlags,
        _In_opt_ PCWSTR Comment
        ) PURE;
    STDMETHOD(AddDumpInformationFileWide)(
        THIS_
        _In_opt_ PCWSTR FileName,
        _In_ ULONG64 FileHandle,
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(GetNumberDumpFiles)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetDumpFile)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Handle,
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetDumpFileWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Handle,
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(AttachKernelWide)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PCWSTR ConnectOptions
        ) PURE;
    STDMETHOD(GetKernelConnectionOptionsWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG OptionsSize
        ) PURE;
    STDMETHOD(SetKernelConnectionOptionsWide)(
        THIS_
        _In_ PCWSTR Options
        ) PURE;
    STDMETHOD(StartProcessServerWide)(
        THIS_
        _In_ ULONG Flags,
        _In_ PCWSTR Options,
        _In_opt_ _Reserved_ PVOID Reserved
        ) PURE;
    STDMETHOD(ConnectProcessServerWide)(
        THIS_
        _In_ PCWSTR RemoteOptions,
        _Out_ PULONG64 Server
        ) PURE;
    STDMETHOD(StartServerWide)(
        THIS_
        _In_ PCWSTR Options
        ) PURE;
    STDMETHOD(OutputServersWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCWSTR Machine,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetOutputCallbacksWide)(
        THIS_
        _Out_ PDEBUG_OUTPUT_CALLBACKS_WIDE* Callbacks
        ) PURE;
    STDMETHOD(SetOutputCallbacksWide)(
        THIS_
        _In_ PDEBUG_OUTPUT_CALLBACKS_WIDE Callbacks
        ) PURE;
    STDMETHOD(GetOutputLinePrefixWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PrefixSize
        ) PURE;
    STDMETHOD(SetOutputLinePrefixWide)(
        THIS_
        _In_opt_ PCWSTR Prefix
        ) PURE;
    STDMETHOD(GetIdentityWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG IdentitySize
        ) PURE;
    STDMETHOD(OutputIdentityWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ PCWSTR Format
        ) PURE;
    STDMETHOD(GetEventCallbacksWide)(
        THIS_
        _Out_ PDEBUG_EVENT_CALLBACKS_WIDE* Callbacks
        ) PURE;
    STDMETHOD(SetEventCallbacksWide)(
        THIS_
        _In_ PDEBUG_EVENT_CALLBACKS_WIDE Callbacks
        ) PURE;
    STDMETHOD(CreateProcess2)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PSTR CommandLine,
        _In_reads_bytes_(OptionsBufferSize) PVOID OptionsBuffer,
        _In_ ULONG OptionsBufferSize,
        _In_opt_ PCSTR InitialDirectory,
        _In_opt_ PCSTR Environment
        ) PURE;
    STDMETHOD(CreateProcess2Wide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PWSTR CommandLine,
        _In_reads_bytes_(OptionsBufferSize) PVOID OptionsBuffer,
        _In_ ULONG OptionsBufferSize,
        _In_opt_ PCWSTR InitialDirectory,
        _In_opt_ PCWSTR Environment
        ) PURE;
    STDMETHOD(CreateProcessAndAttach2)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PSTR CommandLine,
        _In_reads_bytes_(OptionsBufferSize) PVOID OptionsBuffer,
        _In_ ULONG OptionsBufferSize,
        _In_opt_ PCSTR InitialDirectory,
        _In_opt_ PCSTR Environment,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(CreateProcessAndAttach2Wide)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PWSTR CommandLine,
        _In_reads_bytes_(OptionsBufferSize) PVOID OptionsBuffer,
        _In_ ULONG OptionsBufferSize,
        _In_opt_ PCWSTR InitialDirectory,
        _In_opt_ PCWSTR Environment,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(PushOutputLinePrefix)(
        THIS_
        _In_opt_ PCSTR NewPrefix,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(PushOutputLinePrefixWide)(
        THIS_
        _In_opt_ PCWSTR NewPrefix,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(PopOutputLinePrefix)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(GetNumberInputCallbacks)(
        THIS_
        _Out_ PULONG Count
        ) PURE;
    STDMETHOD(GetNumberOutputCallbacks)(
        THIS_
        _Out_ PULONG Count
        ) PURE;
    STDMETHOD(GetNumberEventCallbacks)(
        THIS_
        _In_ ULONG EventFlags,
        _Out_ PULONG Count
        ) PURE;
    STDMETHOD(GetQuitLockString)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(SetQuitLockString)(
        THIS_
        _In_ PCSTR String
        ) PURE;
    STDMETHOD(GetQuitLockStringWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(SetQuitLockStringWide)(
        THIS_
        _In_ PCWSTR String
        ) PURE;
};
DECLARE_INTERFACE_(IDebugClient6, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(AttachKernel)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PCSTR ConnectOptions
        ) PURE;
    STDMETHOD(GetKernelConnectionOptions)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG OptionsSize
        ) PURE;
    STDMETHOD(SetKernelConnectionOptions)(
        THIS_
        _In_ PCSTR Options
        ) PURE;
    STDMETHOD(StartProcessServer)(
        THIS_
        _In_ ULONG Flags,
        _In_ PCSTR Options,
        _In_opt_ _Reserved_ PVOID Reserved
        ) PURE;
    STDMETHOD(ConnectProcessServer)(
        THIS_
        _In_ PCSTR RemoteOptions,
        _Out_ PULONG64 Server
        ) PURE;
    STDMETHOD(DisconnectProcessServer)(
        THIS_
        _In_ ULONG64 Server
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIds)(
        THIS_
        _In_ ULONG64 Server,
        _Out_writes_opt_(Count) PULONG Ids,
        _In_ ULONG Count,
        _Out_opt_ PULONG ActualCount
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIdByExecutableName)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCSTR ExeName,
        _In_ ULONG Flags,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetRunningProcessDescription)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG SystemId,
        _In_ ULONG Flags,
        _Out_writes_opt_(ExeNameSize) PSTR ExeName,
        _In_ ULONG ExeNameSize,
        _Out_opt_ PULONG ActualExeNameSize,
        _Out_writes_opt_(DescriptionSize) PSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG ActualDescriptionSize
        ) PURE;
    STDMETHOD(AttachProcess)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(CreateProcess)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PSTR CommandLine,
        _In_ ULONG CreateFlags
        ) PURE;
    STDMETHOD(CreateProcessAndAttach)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PSTR CommandLine,
        _In_ ULONG CreateFlags,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(GetProcessOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(OpenDumpFile)(
        THIS_
        _In_ PCSTR DumpFile
        ) PURE;
    STDMETHOD(WriteDumpFile)(
        THIS_
        _In_ PCSTR DumpFile,
        _In_ ULONG Qualifier
        ) PURE;
    STDMETHOD(ConnectSession)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG HistoryLimit
        ) PURE;
    STDMETHOD(StartServer)(
        THIS_
        _In_ PCSTR Options
        ) PURE;
    STDMETHOD(OutputServers)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR Machine,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(TerminateProcesses)(
        THIS
        ) PURE;
    STDMETHOD(DetachProcesses)(
        THIS
        ) PURE;
    STDMETHOD(EndSession)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetExitCode)(
        THIS_
        _Out_ PULONG Code
        ) PURE;
    STDMETHOD(DispatchCallbacks)(
        THIS_
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(ExitDispatch)(
        THIS_
        _In_ PDEBUG_CLIENT Client
        ) PURE;
    STDMETHOD(CreateClient)(
        THIS_
        _Out_ PDEBUG_CLIENT* Client
        ) PURE;
    STDMETHOD(GetInputCallbacks)(
        THIS_
        _Out_ PDEBUG_INPUT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetInputCallbacks)(
        THIS_
        _In_opt_ PDEBUG_INPUT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(GetOutputCallbacks)(
        THIS_
        _Out_ PDEBUG_OUTPUT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetOutputCallbacks)(
        THIS_
        _In_opt_ PDEBUG_OUTPUT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(GetOutputMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetOutputMask)(
        THIS_
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(GetOtherOutputMask)(
        THIS_
        _In_ PDEBUG_CLIENT Client,
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetOtherOutputMask)(
        THIS_
        _In_ PDEBUG_CLIENT Client,
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(GetOutputWidth)(
        THIS_
        _Out_ PULONG Columns
        ) PURE;
    STDMETHOD(SetOutputWidth)(
        THIS_
        _In_ ULONG Columns
        ) PURE;
    STDMETHOD(GetOutputLinePrefix)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PrefixSize
        ) PURE;
    STDMETHOD(SetOutputLinePrefix)(
        THIS_
        _In_opt_ PCSTR Prefix
        ) PURE;
    STDMETHOD(GetIdentity)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG IdentitySize
        ) PURE;
    STDMETHOD(OutputIdentity)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ PCSTR Format
        ) PURE;
    STDMETHOD(GetEventCallbacks)(
        THIS_
        _Out_ PDEBUG_EVENT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetEventCallbacks)(
        THIS_
        _In_opt_ PDEBUG_EVENT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(FlushCallbacks)(
        THIS
        ) PURE;
    STDMETHOD(WriteDumpFile2)(
        THIS_
        _In_ PCSTR DumpFile,
        _In_ ULONG Qualifier,
        _In_ ULONG FormatFlags,
        _In_opt_ PCSTR Comment
        ) PURE;
    STDMETHOD(AddDumpInformationFile)(
        THIS_
        _In_ PCSTR InfoFile,
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(EndProcessServer)(
        THIS_
        _In_ ULONG64 Server
        ) PURE;
    STDMETHOD(WaitForProcessServerEnd)(
        THIS_
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(IsKernelDebuggerEnabled)(
        THIS
        ) PURE;
    STDMETHOD(TerminateCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(DetachCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(AbandonCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIdByExecutableNameWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCWSTR ExeName,
        _In_ ULONG Flags,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetRunningProcessDescriptionWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG SystemId,
        _In_ ULONG Flags,
        _Out_writes_opt_(ExeNameSize) PWSTR ExeName,
        _In_ ULONG ExeNameSize,
        _Out_opt_ PULONG ActualExeNameSize,
        _Out_writes_opt_(DescriptionSize) PWSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG ActualDescriptionSize
        ) PURE;
    STDMETHOD(CreateProcessWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PWSTR CommandLine,
        _In_ ULONG CreateFlags
        ) PURE;
    STDMETHOD(CreateProcessAndAttachWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PWSTR CommandLine,
        _In_ ULONG CreateFlags,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(OpenDumpFileWide)(
        THIS_
        _In_opt_ PCWSTR FileName,
        _In_ ULONG64 FileHandle
        ) PURE;
    STDMETHOD(WriteDumpFileWide)(
        THIS_
        _In_opt_ PCWSTR FileName,
        _In_ ULONG64 FileHandle,
        _In_ ULONG Qualifier,
        _In_ ULONG FormatFlags,
        _In_opt_ PCWSTR Comment
        ) PURE;
    STDMETHOD(AddDumpInformationFileWide)(
        THIS_
        _In_opt_ PCWSTR FileName,
        _In_ ULONG64 FileHandle,
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(GetNumberDumpFiles)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetDumpFile)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Handle,
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetDumpFileWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Handle,
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(AttachKernelWide)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PCWSTR ConnectOptions
        ) PURE;
    STDMETHOD(GetKernelConnectionOptionsWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG OptionsSize
        ) PURE;
    STDMETHOD(SetKernelConnectionOptionsWide)(
        THIS_
        _In_ PCWSTR Options
        ) PURE;
    STDMETHOD(StartProcessServerWide)(
        THIS_
        _In_ ULONG Flags,
        _In_ PCWSTR Options,
        _In_opt_ _Reserved_ PVOID Reserved
        ) PURE;
    STDMETHOD(ConnectProcessServerWide)(
        THIS_
        _In_ PCWSTR RemoteOptions,
        _Out_ PULONG64 Server
        ) PURE;
    STDMETHOD(StartServerWide)(
        THIS_
        _In_ PCWSTR Options
        ) PURE;
    STDMETHOD(OutputServersWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCWSTR Machine,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetOutputCallbacksWide)(
        THIS_
        _Out_ PDEBUG_OUTPUT_CALLBACKS_WIDE* Callbacks
        ) PURE;
    STDMETHOD(SetOutputCallbacksWide)(
        THIS_
        _In_ PDEBUG_OUTPUT_CALLBACKS_WIDE Callbacks
        ) PURE;
    STDMETHOD(GetOutputLinePrefixWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PrefixSize
        ) PURE;
    STDMETHOD(SetOutputLinePrefixWide)(
        THIS_
        _In_opt_ PCWSTR Prefix
        ) PURE;
    STDMETHOD(GetIdentityWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG IdentitySize
        ) PURE;
    STDMETHOD(OutputIdentityWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ PCWSTR Format
        ) PURE;
    STDMETHOD(GetEventCallbacksWide)(
        THIS_
        _Out_ PDEBUG_EVENT_CALLBACKS_WIDE* Callbacks
        ) PURE;
    STDMETHOD(SetEventCallbacksWide)(
        THIS_
        _In_ PDEBUG_EVENT_CALLBACKS_WIDE Callbacks
        ) PURE;
    STDMETHOD(CreateProcess2)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PSTR CommandLine,
        _In_reads_bytes_(OptionsBufferSize) PVOID OptionsBuffer,
        _In_ ULONG OptionsBufferSize,
        _In_opt_ PCSTR InitialDirectory,
        _In_opt_ PCSTR Environment
        ) PURE;
    STDMETHOD(CreateProcess2Wide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PWSTR CommandLine,
        _In_reads_bytes_(OptionsBufferSize) PVOID OptionsBuffer,
        _In_ ULONG OptionsBufferSize,
        _In_opt_ PCWSTR InitialDirectory,
        _In_opt_ PCWSTR Environment
        ) PURE;
    STDMETHOD(CreateProcessAndAttach2)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PSTR CommandLine,
        _In_reads_bytes_(OptionsBufferSize) PVOID OptionsBuffer,
        _In_ ULONG OptionsBufferSize,
        _In_opt_ PCSTR InitialDirectory,
        _In_opt_ PCSTR Environment,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(CreateProcessAndAttach2Wide)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PWSTR CommandLine,
        _In_reads_bytes_(OptionsBufferSize) PVOID OptionsBuffer,
        _In_ ULONG OptionsBufferSize,
        _In_opt_ PCWSTR InitialDirectory,
        _In_opt_ PCWSTR Environment,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(PushOutputLinePrefix)(
        THIS_
        _In_opt_ PCSTR NewPrefix,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(PushOutputLinePrefixWide)(
        THIS_
        _In_opt_ PCWSTR NewPrefix,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(PopOutputLinePrefix)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(GetNumberInputCallbacks)(
        THIS_
        _Out_ PULONG Count
        ) PURE;
    STDMETHOD(GetNumberOutputCallbacks)(
        THIS_
        _Out_ PULONG Count
        ) PURE;
    STDMETHOD(GetNumberEventCallbacks)(
        THIS_
        _In_ ULONG EventFlags,
        _Out_ PULONG Count
        ) PURE;
    STDMETHOD(GetQuitLockString)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(SetQuitLockString)(
        THIS_
        _In_ PCSTR String
        ) PURE;
    STDMETHOD(GetQuitLockStringWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(SetQuitLockStringWide)(
        THIS_
        _In_ PCWSTR String
        ) PURE;
    STDMETHOD(SetEventContextCallbacks)(
        THIS_
        _In_opt_ PDEBUG_EVENT_CONTEXT_CALLBACKS Callbacks
        ) PURE;
};
DECLARE_INTERFACE_(IDebugClient7, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(AttachKernel)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PCSTR ConnectOptions
        ) PURE;
    STDMETHOD(GetKernelConnectionOptions)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG OptionsSize
        ) PURE;
    STDMETHOD(SetKernelConnectionOptions)(
        THIS_
        _In_ PCSTR Options
        ) PURE;
    STDMETHOD(StartProcessServer)(
        THIS_
        _In_ ULONG Flags,
        _In_ PCSTR Options,
        _In_opt_ _Reserved_ PVOID Reserved
        ) PURE;
    STDMETHOD(ConnectProcessServer)(
        THIS_
        _In_ PCSTR RemoteOptions,
        _Out_ PULONG64 Server
        ) PURE;
    STDMETHOD(DisconnectProcessServer)(
        THIS_
        _In_ ULONG64 Server
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIds)(
        THIS_
        _In_ ULONG64 Server,
        _Out_writes_opt_(Count) PULONG Ids,
        _In_ ULONG Count,
        _Out_opt_ PULONG ActualCount
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIdByExecutableName)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCSTR ExeName,
        _In_ ULONG Flags,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetRunningProcessDescription)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG SystemId,
        _In_ ULONG Flags,
        _Out_writes_opt_(ExeNameSize) PSTR ExeName,
        _In_ ULONG ExeNameSize,
        _Out_opt_ PULONG ActualExeNameSize,
        _Out_writes_opt_(DescriptionSize) PSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG ActualDescriptionSize
        ) PURE;
    STDMETHOD(AttachProcess)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(CreateProcess)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PSTR CommandLine,
        _In_ ULONG CreateFlags
        ) PURE;
    STDMETHOD(CreateProcessAndAttach)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PSTR CommandLine,
        _In_ ULONG CreateFlags,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(GetProcessOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetProcessOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(OpenDumpFile)(
        THIS_
        _In_ PCSTR DumpFile
        ) PURE;
    STDMETHOD(WriteDumpFile)(
        THIS_
        _In_ PCSTR DumpFile,
        _In_ ULONG Qualifier
        ) PURE;
    STDMETHOD(ConnectSession)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG HistoryLimit
        ) PURE;
    STDMETHOD(StartServer)(
        THIS_
        _In_ PCSTR Options
        ) PURE;
    STDMETHOD(OutputServers)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR Machine,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(TerminateProcesses)(
        THIS
        ) PURE;
    STDMETHOD(DetachProcesses)(
        THIS
        ) PURE;
    STDMETHOD(EndSession)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetExitCode)(
        THIS_
        _Out_ PULONG Code
        ) PURE;
    STDMETHOD(DispatchCallbacks)(
        THIS_
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(ExitDispatch)(
        THIS_
        _In_ PDEBUG_CLIENT Client
        ) PURE;
    STDMETHOD(CreateClient)(
        THIS_
        _Out_ PDEBUG_CLIENT* Client
        ) PURE;
    STDMETHOD(GetInputCallbacks)(
        THIS_
        _Out_ PDEBUG_INPUT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetInputCallbacks)(
        THIS_
        _In_opt_ PDEBUG_INPUT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(GetOutputCallbacks)(
        THIS_
        _Out_ PDEBUG_OUTPUT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetOutputCallbacks)(
        THIS_
        _In_opt_ PDEBUG_OUTPUT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(GetOutputMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetOutputMask)(
        THIS_
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(GetOtherOutputMask)(
        THIS_
        _In_ PDEBUG_CLIENT Client,
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetOtherOutputMask)(
        THIS_
        _In_ PDEBUG_CLIENT Client,
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(GetOutputWidth)(
        THIS_
        _Out_ PULONG Columns
        ) PURE;
    STDMETHOD(SetOutputWidth)(
        THIS_
        _In_ ULONG Columns
        ) PURE;
    STDMETHOD(GetOutputLinePrefix)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PrefixSize
        ) PURE;
    STDMETHOD(SetOutputLinePrefix)(
        THIS_
        _In_opt_ PCSTR Prefix
        ) PURE;
    STDMETHOD(GetIdentity)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG IdentitySize
        ) PURE;
    STDMETHOD(OutputIdentity)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ PCSTR Format
        ) PURE;
    STDMETHOD(GetEventCallbacks)(
        THIS_
        _Out_ PDEBUG_EVENT_CALLBACKS* Callbacks
        ) PURE;
    STDMETHOD(SetEventCallbacks)(
        THIS_
        _In_opt_ PDEBUG_EVENT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(FlushCallbacks)(
        THIS
        ) PURE;
    STDMETHOD(WriteDumpFile2)(
        THIS_
        _In_ PCSTR DumpFile,
        _In_ ULONG Qualifier,
        _In_ ULONG FormatFlags,
        _In_opt_ PCSTR Comment
        ) PURE;
    STDMETHOD(AddDumpInformationFile)(
        THIS_
        _In_ PCSTR InfoFile,
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(EndProcessServer)(
        THIS_
        _In_ ULONG64 Server
        ) PURE;
    STDMETHOD(WaitForProcessServerEnd)(
        THIS_
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(IsKernelDebuggerEnabled)(
        THIS
        ) PURE;
    STDMETHOD(TerminateCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(DetachCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(AbandonCurrentProcess)(
        THIS
        ) PURE;
    STDMETHOD(GetRunningProcessSystemIdByExecutableNameWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCWSTR ExeName,
        _In_ ULONG Flags,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetRunningProcessDescriptionWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG SystemId,
        _In_ ULONG Flags,
        _Out_writes_opt_(ExeNameSize) PWSTR ExeName,
        _In_ ULONG ExeNameSize,
        _Out_opt_ PULONG ActualExeNameSize,
        _Out_writes_opt_(DescriptionSize) PWSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG ActualDescriptionSize
        ) PURE;
    STDMETHOD(CreateProcessWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PWSTR CommandLine,
        _In_ ULONG CreateFlags
        ) PURE;
    STDMETHOD(CreateProcessAndAttachWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PWSTR CommandLine,
        _In_ ULONG CreateFlags,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(OpenDumpFileWide)(
        THIS_
        _In_opt_ PCWSTR FileName,
        _In_ ULONG64 FileHandle
        ) PURE;
    STDMETHOD(WriteDumpFileWide)(
        THIS_
        _In_opt_ PCWSTR FileName,
        _In_ ULONG64 FileHandle,
        _In_ ULONG Qualifier,
        _In_ ULONG FormatFlags,
        _In_opt_ PCWSTR Comment
        ) PURE;
    STDMETHOD(AddDumpInformationFileWide)(
        THIS_
        _In_opt_ PCWSTR FileName,
        _In_ ULONG64 FileHandle,
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(GetNumberDumpFiles)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetDumpFile)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Handle,
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetDumpFileWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Handle,
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(AttachKernelWide)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PCWSTR ConnectOptions
        ) PURE;
    STDMETHOD(GetKernelConnectionOptionsWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG OptionsSize
        ) PURE;
    STDMETHOD(SetKernelConnectionOptionsWide)(
        THIS_
        _In_ PCWSTR Options
        ) PURE;
    STDMETHOD(StartProcessServerWide)(
        THIS_
        _In_ ULONG Flags,
        _In_ PCWSTR Options,
        _In_opt_ _Reserved_ PVOID Reserved
        ) PURE;
    STDMETHOD(ConnectProcessServerWide)(
        THIS_
        _In_ PCWSTR RemoteOptions,
        _Out_ PULONG64 Server
        ) PURE;
    STDMETHOD(StartServerWide)(
        THIS_
        _In_ PCWSTR Options
        ) PURE;
    STDMETHOD(OutputServersWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCWSTR Machine,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetOutputCallbacksWide)(
        THIS_
        _Out_ PDEBUG_OUTPUT_CALLBACKS_WIDE* Callbacks
        ) PURE;
    STDMETHOD(SetOutputCallbacksWide)(
        THIS_
        _In_ PDEBUG_OUTPUT_CALLBACKS_WIDE Callbacks
        ) PURE;
    STDMETHOD(GetOutputLinePrefixWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PrefixSize
        ) PURE;
    STDMETHOD(SetOutputLinePrefixWide)(
        THIS_
        _In_opt_ PCWSTR Prefix
        ) PURE;
    STDMETHOD(GetIdentityWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG IdentitySize
        ) PURE;
    STDMETHOD(OutputIdentityWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ PCWSTR Format
        ) PURE;
    STDMETHOD(GetEventCallbacksWide)(
        THIS_
        _Out_ PDEBUG_EVENT_CALLBACKS_WIDE* Callbacks
        ) PURE;
    STDMETHOD(SetEventCallbacksWide)(
        THIS_
        _In_ PDEBUG_EVENT_CALLBACKS_WIDE Callbacks
        ) PURE;
    STDMETHOD(CreateProcess2)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PSTR CommandLine,
        _In_reads_bytes_(OptionsBufferSize) PVOID OptionsBuffer,
        _In_ ULONG OptionsBufferSize,
        _In_opt_ PCSTR InitialDirectory,
        _In_opt_ PCSTR Environment
        ) PURE;
    STDMETHOD(CreateProcess2Wide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PWSTR CommandLine,
        _In_reads_bytes_(OptionsBufferSize) PVOID OptionsBuffer,
        _In_ ULONG OptionsBufferSize,
        _In_opt_ PCWSTR InitialDirectory,
        _In_opt_ PCWSTR Environment
        ) PURE;
    STDMETHOD(CreateProcessAndAttach2)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PSTR CommandLine,
        _In_reads_bytes_(OptionsBufferSize) PVOID OptionsBuffer,
        _In_ ULONG OptionsBufferSize,
        _In_opt_ PCSTR InitialDirectory,
        _In_opt_ PCSTR Environment,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(CreateProcessAndAttach2Wide)(
        THIS_
        _In_ ULONG64 Server,
        _In_opt_ PWSTR CommandLine,
        _In_reads_bytes_(OptionsBufferSize) PVOID OptionsBuffer,
        _In_ ULONG OptionsBufferSize,
        _In_opt_ PCWSTR InitialDirectory,
        _In_opt_ PCWSTR Environment,
        _In_ ULONG ProcessId,
        _In_ ULONG AttachFlags
        ) PURE;
    STDMETHOD(PushOutputLinePrefix)(
        THIS_
        _In_opt_ PCSTR NewPrefix,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(PushOutputLinePrefixWide)(
        THIS_
        _In_opt_ PCWSTR NewPrefix,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(PopOutputLinePrefix)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(GetNumberInputCallbacks)(
        THIS_
        _Out_ PULONG Count
        ) PURE;
    STDMETHOD(GetNumberOutputCallbacks)(
        THIS_
        _Out_ PULONG Count
        ) PURE;
    STDMETHOD(GetNumberEventCallbacks)(
        THIS_
        _In_ ULONG EventFlags,
        _Out_ PULONG Count
        ) PURE;
    STDMETHOD(GetQuitLockString)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(SetQuitLockString)(
        THIS_
        _In_ PCSTR String
        ) PURE;
    STDMETHOD(GetQuitLockStringWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(SetQuitLockStringWide)(
        THIS_
        _In_ PCWSTR String
        ) PURE;
    STDMETHOD(SetEventContextCallbacks)(
        THIS_
        _In_opt_ PDEBUG_EVENT_CONTEXT_CALLBACKS Callbacks
        ) PURE;
    STDMETHOD(SetClientContext)(
        THIS_
        _In_reads_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
};
DECLARE_INTERFACE_(IDebugPlmClient, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(LaunchPlmPackageForDebugWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG Timeout,
        _In_ PCWSTR PackageFullName,
        _In_ PCWSTR AppName,
        _In_opt_ PCWSTR Arguments,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId
        ) PURE;
};
DECLARE_INTERFACE_(IDebugPlmClient2, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(LaunchPlmPackageForDebugWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG Timeout,
        _In_ PCWSTR PackageFullName,
        _In_ PCWSTR AppName,
        _In_opt_ PCWSTR Arguments,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId
        ) PURE;
    STDMETHOD(LaunchPlmBgTaskForDebugWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG Timeout,
        _In_ PCWSTR PackageFullName,
        _In_ PCWSTR BackgroundTaskId,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId
        ) PURE;
};
DECLARE_INTERFACE_(IDebugPlmClient3, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(LaunchPlmPackageForDebugWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG Timeout,
        _In_ PCWSTR PackageFullName,
        _In_ PCWSTR AppName,
        _In_opt_ PCWSTR Arguments,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId
        ) PURE;
    STDMETHOD(LaunchPlmBgTaskForDebugWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ ULONG Timeout,
        _In_ PCWSTR PackageFullName,
        _In_ PCWSTR BackgroundTaskId,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId
        ) PURE;
    STDMETHOD(QueryPlmPackageWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCWSTR PackageFullName,
        _In_ PDEBUG_OUTPUT_STREAM Stream
        ) PURE;
    STDMETHOD(QueryPlmPackageList)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PDEBUG_OUTPUT_STREAM Stream
        ) PURE;
    STDMETHOD(EnablePlmPackageDebugWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCWSTR PackageFullName
        ) PURE;
    STDMETHOD(DisablePlmPackageDebugWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCWSTR PackageFullName
        ) PURE;
    STDMETHOD(SuspendPlmPackageWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCWSTR PackageFullName
        ) PURE;
    STDMETHOD(ResumePlmPackageWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCWSTR PackageFullName
        ) PURE;
    STDMETHOD(TerminatePlmPackageWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCWSTR PackageFullName
        ) PURE;
    STDMETHOD(LaunchAndDebugPlmAppWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCWSTR PackageFullName,
        _In_ PCWSTR AppName,
        _In_ PCWSTR Arguments
        ) PURE;
    STDMETHOD(ActivateAndDebugPlmBgTaskWide)(
        THIS_
        _In_ ULONG64 Server,
        _In_ PCWSTR PackageFullName,
        _In_ PCWSTR BackgroundTaskId
        ) PURE;
};
DECLARE_INTERFACE_(IDebugOutputStream, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        __in REFIID InterfaceId,
        __out PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(Write)(
        THIS_
        _In_ PCWSTR psz
        ) PURE;
};
typedef struct _DEBUG_STACK_FRAME
{
    ULONG64 InstructionOffset;
    ULONG64 ReturnOffset;
    ULONG64 FrameOffset;
    ULONG64 StackOffset;
    ULONG64 FuncTableEntry;
    ULONG64 Params[4];
    ULONG64 Reserved[6];
    BOOL Virtual;
    ULONG FrameNumber;
} DEBUG_STACK_FRAME, *PDEBUG_STACK_FRAME;
typedef struct _DEBUG_STACK_FRAME_EX
{
    ULONG64 InstructionOffset;
    ULONG64 ReturnOffset;
    ULONG64 FrameOffset;
    ULONG64 StackOffset;
    ULONG64 FuncTableEntry;
    ULONG64 Params[4];
    ULONG64 Reserved[6];
    BOOL Virtual;
    ULONG FrameNumber;
    ULONG InlineFrameContext;
    ULONG Reserved1;
} DEBUG_STACK_FRAME_EX, *PDEBUG_STACK_FRAME_EX;
#pragma warning(push)
#pragma warning(disable:4201)
typedef union _INLINE_FRAME_CONTEXT {
    DWORD ContextValue;
    struct {
        BYTE FrameId;
        BYTE FrameType;
        WORD FrameSignature;
    };
} INLINE_FRAME_CONTEXT;
#pragma warning(pop)
typedef struct _STACK_SRC_INFO
{
    PCWSTR ImagePath;
    PCWSTR ModuleName;
    PCWSTR Function;
    ULONG Displacement;
    ULONG Row;
    ULONG Column;
} STACK_SRC_INFO, *PSTACK_SRC_INFO;
typedef struct _STACK_SYM_FRAME_INFO
{
    DEBUG_STACK_FRAME_EX StackFrameEx;
    STACK_SRC_INFO SrcInfo;
} STACK_SYM_FRAME_INFO, *PSTACK_SYM_FRAME_INFO;
typedef struct _DEBUG_SPECIFIC_FILTER_PARAMETERS
{
    ULONG ExecutionOption;
    ULONG ContinueOption;
    ULONG TextSize;
    ULONG CommandSize;
    ULONG ArgumentSize;
} DEBUG_SPECIFIC_FILTER_PARAMETERS, *PDEBUG_SPECIFIC_FILTER_PARAMETERS;
typedef struct _DEBUG_EXCEPTION_FILTER_PARAMETERS
{
    ULONG ExecutionOption;
    ULONG ContinueOption;
    ULONG TextSize;
    ULONG CommandSize;
    ULONG SecondCommandSize;
    ULONG ExceptionCode;
} DEBUG_EXCEPTION_FILTER_PARAMETERS, *PDEBUG_EXCEPTION_FILTER_PARAMETERS;
typedef struct _DEBUG_LAST_EVENT_INFO_BREAKPOINT
{
    ULONG Id;
} DEBUG_LAST_EVENT_INFO_BREAKPOINT, *PDEBUG_LAST_EVENT_INFO_BREAKPOINT;
typedef struct _DEBUG_LAST_EVENT_INFO_EXCEPTION
{
    EXCEPTION_RECORD64 ExceptionRecord;
    ULONG FirstChance;
} DEBUG_LAST_EVENT_INFO_EXCEPTION, *PDEBUG_LAST_EVENT_INFO_EXCEPTION;
typedef struct _DEBUG_LAST_EVENT_INFO_EXIT_THREAD
{
    ULONG ExitCode;
} DEBUG_LAST_EVENT_INFO_EXIT_THREAD, *PDEBUG_LAST_EVENT_INFO_EXIT_THREAD;
typedef struct _DEBUG_LAST_EVENT_INFO_EXIT_PROCESS
{
    ULONG ExitCode;
} DEBUG_LAST_EVENT_INFO_EXIT_PROCESS, *PDEBUG_LAST_EVENT_INFO_EXIT_PROCESS;
typedef struct _DEBUG_LAST_EVENT_INFO_LOAD_MODULE
{
    ULONG64 Base;
} DEBUG_LAST_EVENT_INFO_LOAD_MODULE, *PDEBUG_LAST_EVENT_INFO_LOAD_MODULE;
typedef struct _DEBUG_LAST_EVENT_INFO_UNLOAD_MODULE
{
    ULONG64 Base;
} DEBUG_LAST_EVENT_INFO_UNLOAD_MODULE, *PDEBUG_LAST_EVENT_INFO_UNLOAD_MODULE;
typedef struct _DEBUG_LAST_EVENT_INFO_SYSTEM_ERROR
{
    ULONG Error;
    ULONG Level;
} DEBUG_LAST_EVENT_INFO_SYSTEM_ERROR, *PDEBUG_LAST_EVENT_INFO_SYSTEM_ERROR;
typedef struct _DEBUG_VALUE
{
    union
    {
        UCHAR I8;
        USHORT I16;
        ULONG I32;
        struct
        {
            ULONG64 I64;
            BOOL Nat;
        };
        float F32;
        double F64;
        UCHAR F80Bytes[10];
        UCHAR F82Bytes[11];
        UCHAR F128Bytes[16];
        UCHAR VI8[16];
        USHORT VI16[8];
        ULONG VI32[4];
        ULONG64 VI64[2];
        float VF32[4];
        double VF64[2];
        struct
        {
            ULONG LowPart;
            ULONG HighPart;
        } I64Parts32;
        struct
        {
            ULONG64 LowPart;
            LONG64 HighPart;
        } F128Parts64;
        UCHAR RawBytes[24];
    };
    ULONG TailOfRawBytes;
  ULONG Type;
} DEBUG_VALUE, *PDEBUG_VALUE;
DECLARE_INTERFACE_(IDebugControl, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetInterrupt)(
        THIS
        ) PURE;
    STDMETHOD(SetInterrupt)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetInterruptTimeout)(
        THIS_
        _Out_ PULONG Seconds
        ) PURE;
    STDMETHOD(SetInterruptTimeout)(
        THIS_
        _In_ ULONG Seconds
        ) PURE;
    STDMETHOD(GetLogFile)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PBOOL Append
        ) PURE;
    STDMETHOD(OpenLogFile)(
        THIS_
        _In_ PCSTR File,
        _In_ BOOL Append
        ) PURE;
    STDMETHOD(CloseLogFile)(
        THIS
        ) PURE;
    STDMETHOD(GetLogMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetLogMask)(
        THIS_
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(Input)(
        THIS_
        _Out_writes_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InputSize
        ) PURE;
    STDMETHOD(ReturnInput)(
        THIS_
        _In_ PCSTR Buffer
        ) PURE;
    STDMETHODV(Output)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputVaList)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(ControlledOutput)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(ControlledOutputVaList)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(OutputPrompt)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputPromptVaList)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHOD(GetPromptText)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(OutputCurrentState)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(OutputVersionInformation)(
        THIS_
        _In_ ULONG OutputControl
        ) PURE;
    STDMETHOD(GetNotifyEventHandle)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(SetNotifyEventHandle)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(Assemble)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ PCSTR Instr,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(Disassemble)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DisassemblySize,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(GetDisassembleEffectiveOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(OutputDisassembly)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(OutputDisassemblyLines)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG PreviousLines,
        _In_ ULONG TotalLines,
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_opt_ PULONG OffsetLine,
        _Out_opt_ PULONG64 StartOffset,
        _Out_opt_ PULONG64 EndOffset,
        _Out_writes_opt_(TotalLines) PULONG64 LineOffsets
        ) PURE;
    STDMETHOD(GetNearInstruction)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ LONG Delta,
        _Out_ PULONG64 NearOffset
        ) PURE;
    STDMETHOD(GetStackTrace)(
        THIS_
        _In_ ULONG64 FrameOffset,
        _In_ ULONG64 StackOffset,
        _In_ ULONG64 InstructionOffset,
        _Out_writes_(FramesSize) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(GetReturnOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(OutputStackTrace)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_opt_(FramesSize) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetDebuggeeType)(
        THIS_
        _Out_ PULONG Class,
        _Out_ PULONG Qualifier
        ) PURE;
    STDMETHOD(GetActualProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetExecutingProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetNumberPossibleExecutingProcessorTypes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetPossibleExecutingProcessorTypes)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PULONG Types
        ) PURE;
    STDMETHOD(GetNumberProcessors)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetSystemVersion)(
        THIS_
        _Out_ PULONG PlatformId,
        _Out_ PULONG Major,
        _Out_ PULONG Minor,
        _Out_writes_opt_(ServicePackStringSize) PSTR ServicePackString,
        _In_ ULONG ServicePackStringSize,
        _Out_opt_ PULONG ServicePackStringUsed,
        _Out_ PULONG ServicePackNumber,
        _Out_writes_opt_(BuildStringSize) PSTR BuildString,
        _In_ ULONG BuildStringSize,
        _Out_opt_ PULONG BuildStringUsed
        ) PURE;
    STDMETHOD(GetPageSize)(
        THIS_
        _Out_ PULONG Size
        ) PURE;
    STDMETHOD(IsPointer64Bit)(
        THIS
        ) PURE;
    STDMETHOD(ReadBugCheckData)(
        THIS_
        _Out_ PULONG Code,
        _Out_ PULONG64 Arg1,
        _Out_ PULONG64 Arg2,
        _Out_ PULONG64 Arg3,
        _Out_ PULONG64 Arg4
        ) PURE;
    STDMETHOD(GetNumberSupportedProcessorTypes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetSupportedProcessorTypes)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PULONG Types
        ) PURE;
    STDMETHOD(GetProcessorTypeNames)(
        THIS_
        _In_ ULONG Type,
        _Out_writes_opt_(FullNameBufferSize) PSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetEffectiveProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(SetEffectiveProcessorType)(
        THIS_
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(GetExecutionStatus)(
        THIS_
        _Out_ PULONG Status
        ) PURE;
    STDMETHOD(SetExecutionStatus)(
        THIS_
        _In_ ULONG Status
        ) PURE;
    STDMETHOD(GetCodeLevel)(
        THIS_
        _Out_ PULONG Level
        ) PURE;
    STDMETHOD(SetCodeLevel)(
        THIS_
        _In_ ULONG Level
        ) PURE;
    STDMETHOD(GetEngineOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetSystemErrorControl)(
        THIS_
        _Out_ PULONG OutputLevel,
        _Out_ PULONG BreakLevel
        ) PURE;
    STDMETHOD(SetSystemErrorControl)(
        THIS_
        _In_ ULONG OutputLevel,
        _In_ ULONG BreakLevel
        ) PURE;
    STDMETHOD(GetTextMacro)(
        THIS_
        _In_ ULONG Slot,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MacroSize
        ) PURE;
    STDMETHOD(SetTextMacro)(
        THIS_
        _In_ ULONG Slot,
        _In_ PCSTR Macro
        ) PURE;
    STDMETHOD(GetRadix)(
        THIS_
        _Out_ PULONG Radix
        ) PURE;
    STDMETHOD(SetRadix)(
        THIS_
        _In_ ULONG Radix
        ) PURE;
    STDMETHOD(Evaluate)(
        THIS_
        _In_ PCSTR Expression,
        _In_ ULONG DesiredType,
        _Out_ PDEBUG_VALUE Value,
        _Out_opt_ PULONG RemainderIndex
        ) PURE;
    STDMETHOD(CoerceValue)(
        THIS_
        _In_ PDEBUG_VALUE In,
        _In_ ULONG OutType,
        _Out_ PDEBUG_VALUE Out
        ) PURE;
    STDMETHOD(CoerceValues)(
        THIS_
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_VALUE In,
        _In_reads_(Count) PULONG OutTypes,
        _Out_writes_(Count) PDEBUG_VALUE Out
        ) PURE;
    STDMETHOD(Execute)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR Command,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(ExecuteCommandFile)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR CommandFile,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetNumberBreakpoints)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetBreakpointByIndex)(
        THIS_
        _In_ ULONG Index,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(GetBreakpointById)(
        THIS_
        _In_ ULONG Id,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(GetBreakpointParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Ids,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_BREAKPOINT_PARAMETERS Params
        ) PURE;
    STDMETHOD(AddBreakpoint)(
        THIS_
        _In_ ULONG Type,
        _In_ ULONG DesiredId,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(RemoveBreakpoint)(
        THIS_
        _In_ PDEBUG_BREAKPOINT Bp
        ) PURE;
    STDMETHOD(AddExtension)(
        THIS_
        _In_ PCSTR Path,
        _In_ ULONG Flags,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(RemoveExtension)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(GetExtensionByPath)(
        THIS_
        _In_ PCSTR Path,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(CallExtension)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCSTR Function,
        _In_opt_ PCSTR Arguments
        ) PURE;
    STDMETHOD(GetExtensionFunction)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCSTR FuncName,
        _Out_ FARPROC* Function
        ) PURE;
    STDMETHOD(GetWindbgExtensionApis32)(
        THIS_
        _Inout_ PWINDBG_EXTENSION_APIS32 Api
        ) PURE;
    STDMETHOD(GetWindbgExtensionApis64)(
        THIS_
        _Inout_ PWINDBG_EXTENSION_APIS64 Api
        ) PURE;
    STDMETHOD(GetNumberEventFilters)(
        THIS_
        _Out_ PULONG SpecificEvents,
        _Out_ PULONG SpecificExceptions,
        _Out_ PULONG ArbitraryExceptions
        ) PURE;
    STDMETHOD(GetEventFilterText)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(GetEventFilterCommand)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetEventFilterCommand)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(GetSpecificFilterParameters)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PDEBUG_SPECIFIC_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(SetSpecificFilterParameters)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_SPECIFIC_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetSpecificFilterArgument)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ArgumentSize
        ) PURE;
    STDMETHOD(SetSpecificFilterArgument)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Argument
        ) PURE;
    STDMETHOD(GetExceptionFilterParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Codes,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_EXCEPTION_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(SetExceptionFilterParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_EXCEPTION_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetExceptionFilterSecondCommand)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetExceptionFilterSecondCommand)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(WaitForEvent)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(GetLastEventInformation)(
        THIS_
        _Out_ PULONG Type,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId,
        _Out_writes_bytes_opt_(ExtraInformationSize) PVOID ExtraInformation,
        _In_ ULONG ExtraInformationSize,
        _Out_opt_ PULONG ExtraInformationUsed,
        _Out_writes_opt_(DescriptionSize) PSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG DescriptionUsed
        ) PURE;
};
DECLARE_INTERFACE_(IDebugControl2, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetInterrupt)(
        THIS
        ) PURE;
    STDMETHOD(SetInterrupt)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetInterruptTimeout)(
        THIS_
        _Out_ PULONG Seconds
        ) PURE;
    STDMETHOD(SetInterruptTimeout)(
        THIS_
        _In_ ULONG Seconds
        ) PURE;
    STDMETHOD(GetLogFile)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PBOOL Append
        ) PURE;
    STDMETHOD(OpenLogFile)(
        THIS_
        _In_ PCSTR File,
        _In_ BOOL Append
        ) PURE;
    STDMETHOD(CloseLogFile)(
        THIS
        ) PURE;
    STDMETHOD(GetLogMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetLogMask)(
        THIS_
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(Input)(
        THIS_
        _Out_writes_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InputSize
        ) PURE;
    STDMETHOD(ReturnInput)(
        THIS_
        _In_ PCSTR Buffer
        ) PURE;
    STDMETHODV(Output)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputVaList)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(ControlledOutput)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(ControlledOutputVaList)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(OutputPrompt)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputPromptVaList)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHOD(GetPromptText)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(OutputCurrentState)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(OutputVersionInformation)(
        THIS_
        _In_ ULONG OutputControl
        ) PURE;
    STDMETHOD(GetNotifyEventHandle)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(SetNotifyEventHandle)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(Assemble)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ PCSTR Instr,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(Disassemble)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DisassemblySize,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(GetDisassembleEffectiveOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(OutputDisassembly)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(OutputDisassemblyLines)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG PreviousLines,
        _In_ ULONG TotalLines,
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_opt_ PULONG OffsetLine,
        _Out_opt_ PULONG64 StartOffset,
        _Out_opt_ PULONG64 EndOffset,
        _Out_writes_opt_(TotalLines) PULONG64 LineOffsets
        ) PURE;
    STDMETHOD(GetNearInstruction)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ LONG Delta,
        _Out_ PULONG64 NearOffset
        ) PURE;
    STDMETHOD(GetStackTrace)(
        THIS_
        _In_ ULONG64 FrameOffset,
        _In_ ULONG64 StackOffset,
        _In_ ULONG64 InstructionOffset,
        _Out_writes_(FramesSize) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(GetReturnOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(OutputStackTrace)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_opt_(FramesSize) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetDebuggeeType)(
        THIS_
        _Out_ PULONG Class,
        _Out_ PULONG Qualifier
        ) PURE;
    STDMETHOD(GetActualProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetExecutingProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetNumberPossibleExecutingProcessorTypes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetPossibleExecutingProcessorTypes)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PULONG Types
        ) PURE;
    STDMETHOD(GetNumberProcessors)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetSystemVersion)(
        THIS_
        _Out_ PULONG PlatformId,
        _Out_ PULONG Major,
        _Out_ PULONG Minor,
        _Out_writes_opt_(ServicePackStringSize) PSTR ServicePackString,
        _In_ ULONG ServicePackStringSize,
        _Out_opt_ PULONG ServicePackStringUsed,
        _Out_ PULONG ServicePackNumber,
        _Out_writes_opt_(BuildStringSize) PSTR BuildString,
        _In_ ULONG BuildStringSize,
        _Out_opt_ PULONG BuildStringUsed
        ) PURE;
    STDMETHOD(GetPageSize)(
        THIS_
        _Out_ PULONG Size
        ) PURE;
    STDMETHOD(IsPointer64Bit)(
        THIS
        ) PURE;
    STDMETHOD(ReadBugCheckData)(
        THIS_
        _Out_ PULONG Code,
        _Out_ PULONG64 Arg1,
        _Out_ PULONG64 Arg2,
        _Out_ PULONG64 Arg3,
        _Out_ PULONG64 Arg4
        ) PURE;
    STDMETHOD(GetNumberSupportedProcessorTypes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetSupportedProcessorTypes)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PULONG Types
        ) PURE;
    STDMETHOD(GetProcessorTypeNames)(
        THIS_
        _In_ ULONG Type,
        _Out_writes_opt_(FullNameBufferSize) PSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetEffectiveProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(SetEffectiveProcessorType)(
        THIS_
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(GetExecutionStatus)(
        THIS_
        _Out_ PULONG Status
        ) PURE;
    STDMETHOD(SetExecutionStatus)(
        THIS_
        _In_ ULONG Status
        ) PURE;
    STDMETHOD(GetCodeLevel)(
        THIS_
        _Out_ PULONG Level
        ) PURE;
    STDMETHOD(SetCodeLevel)(
        THIS_
        _In_ ULONG Level
        ) PURE;
    STDMETHOD(GetEngineOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetSystemErrorControl)(
        THIS_
        _Out_ PULONG OutputLevel,
        _Out_ PULONG BreakLevel
        ) PURE;
    STDMETHOD(SetSystemErrorControl)(
        THIS_
        _In_ ULONG OutputLevel,
        _In_ ULONG BreakLevel
        ) PURE;
    STDMETHOD(GetTextMacro)(
        THIS_
        _In_ ULONG Slot,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MacroSize
        ) PURE;
    STDMETHOD(SetTextMacro)(
        THIS_
        _In_ ULONG Slot,
        _In_ PCSTR Macro
        ) PURE;
    STDMETHOD(GetRadix)(
        THIS_
        _Out_ PULONG Radix
        ) PURE;
    STDMETHOD(SetRadix)(
        THIS_
        _In_ ULONG Radix
        ) PURE;
    STDMETHOD(Evaluate)(
        THIS_
        _In_ PCSTR Expression,
        _In_ ULONG DesiredType,
        _Out_ PDEBUG_VALUE Value,
        _Out_opt_ PULONG RemainderIndex
        ) PURE;
    STDMETHOD(CoerceValue)(
        THIS_
        _In_ PDEBUG_VALUE In,
        _In_ ULONG OutType,
        _Out_ PDEBUG_VALUE Out
        ) PURE;
    STDMETHOD(CoerceValues)(
        THIS_
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_VALUE In,
        _In_reads_(Count) PULONG OutTypes,
        _Out_writes_(Count) PDEBUG_VALUE Out
        ) PURE;
    STDMETHOD(Execute)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR Command,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(ExecuteCommandFile)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR CommandFile,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetNumberBreakpoints)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetBreakpointByIndex)(
        THIS_
        _In_ ULONG Index,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(GetBreakpointById)(
        THIS_
        _In_ ULONG Id,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(GetBreakpointParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Ids,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_BREAKPOINT_PARAMETERS Params
        ) PURE;
    STDMETHOD(AddBreakpoint)(
        THIS_
        _In_ ULONG Type,
        _In_ ULONG DesiredId,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(RemoveBreakpoint)(
        THIS_
        _In_ PDEBUG_BREAKPOINT Bp
        ) PURE;
    STDMETHOD(AddExtension)(
        THIS_
        _In_ PCSTR Path,
        _In_ ULONG Flags,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(RemoveExtension)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(GetExtensionByPath)(
        THIS_
        _In_ PCSTR Path,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(CallExtension)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCSTR Function,
        _In_opt_ PCSTR Arguments
        ) PURE;
    STDMETHOD(GetExtensionFunction)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCSTR FuncName,
        _Out_ FARPROC* Function
        ) PURE;
    STDMETHOD(GetWindbgExtensionApis32)(
        THIS_
        _Inout_ PWINDBG_EXTENSION_APIS32 Api
        ) PURE;
    STDMETHOD(GetWindbgExtensionApis64)(
        THIS_
        _Inout_ PWINDBG_EXTENSION_APIS64 Api
        ) PURE;
    STDMETHOD(GetNumberEventFilters)(
        THIS_
        _Out_ PULONG SpecificEvents,
        _Out_ PULONG SpecificExceptions,
        _Out_ PULONG ArbitraryExceptions
        ) PURE;
    STDMETHOD(GetEventFilterText)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(GetEventFilterCommand)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetEventFilterCommand)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(GetSpecificFilterParameters)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PDEBUG_SPECIFIC_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(SetSpecificFilterParameters)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_SPECIFIC_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetSpecificFilterArgument)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ArgumentSize
        ) PURE;
    STDMETHOD(SetSpecificFilterArgument)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Argument
        ) PURE;
    STDMETHOD(GetExceptionFilterParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Codes,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_EXCEPTION_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(SetExceptionFilterParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_EXCEPTION_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetExceptionFilterSecondCommand)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetExceptionFilterSecondCommand)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(WaitForEvent)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(GetLastEventInformation)(
        THIS_
        _Out_ PULONG Type,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId,
        _Out_writes_bytes_opt_(ExtraInformationSize) PVOID ExtraInformation,
        _In_ ULONG ExtraInformationSize,
        _Out_opt_ PULONG ExtraInformationUsed,
        _Out_writes_opt_(DescriptionSize) PSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG DescriptionUsed
        ) PURE;
    STDMETHOD(GetCurrentTimeDate)(
        THIS_
        _Out_ PULONG TimeDate
        ) PURE;
    STDMETHOD(GetCurrentSystemUpTime)(
        THIS_
        _Out_ PULONG UpTime
        ) PURE;
    STDMETHOD(GetDumpFormatFlags)(
        THIS_
        _Out_ PULONG FormatFlags
        ) PURE;
    STDMETHOD(GetNumberTextReplacements)(
        THIS_
        _Out_ PULONG NumRepl
        ) PURE;
    STDMETHOD(GetTextReplacement)(
        THIS_
        _In_opt_ PCSTR SrcText,
        _In_ ULONG Index,
        _Out_writes_opt_(SrcBufferSize) PSTR SrcBuffer,
        _In_ ULONG SrcBufferSize,
        _Out_opt_ PULONG SrcSize,
        _Out_writes_opt_(DstBufferSize) PSTR DstBuffer,
        _In_ ULONG DstBufferSize,
        _Out_opt_ PULONG DstSize
        ) PURE;
    STDMETHOD(SetTextReplacement)(
        THIS_
        _In_ PCSTR SrcText,
        _In_opt_ PCSTR DstText
        ) PURE;
    STDMETHOD(RemoveTextReplacements)(
        THIS
        ) PURE;
    STDMETHOD(OutputTextReplacements)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags
        ) PURE;
};
DECLARE_INTERFACE_(IDebugControl3, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetInterrupt)(
        THIS
        ) PURE;
    STDMETHOD(SetInterrupt)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetInterruptTimeout)(
        THIS_
        _Out_ PULONG Seconds
        ) PURE;
    STDMETHOD(SetInterruptTimeout)(
        THIS_
        _In_ ULONG Seconds
        ) PURE;
    STDMETHOD(GetLogFile)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PBOOL Append
        ) PURE;
    STDMETHOD(OpenLogFile)(
        THIS_
        _In_ PCSTR File,
        _In_ BOOL Append
        ) PURE;
    STDMETHOD(CloseLogFile)(
        THIS
        ) PURE;
    STDMETHOD(GetLogMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetLogMask)(
        THIS_
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(Input)(
        THIS_
        _Out_writes_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InputSize
        ) PURE;
    STDMETHOD(ReturnInput)(
        THIS_
        _In_ PCSTR Buffer
        ) PURE;
    STDMETHODV(Output)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputVaList)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(ControlledOutput)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(ControlledOutputVaList)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(OutputPrompt)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputPromptVaList)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHOD(GetPromptText)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(OutputCurrentState)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(OutputVersionInformation)(
        THIS_
        _In_ ULONG OutputControl
        ) PURE;
    STDMETHOD(GetNotifyEventHandle)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(SetNotifyEventHandle)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(Assemble)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ PCSTR Instr,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(Disassemble)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DisassemblySize,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(GetDisassembleEffectiveOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(OutputDisassembly)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(OutputDisassemblyLines)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG PreviousLines,
        _In_ ULONG TotalLines,
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_opt_ PULONG OffsetLine,
        _Out_opt_ PULONG64 StartOffset,
        _Out_opt_ PULONG64 EndOffset,
        _Out_writes_opt_(TotalLines) PULONG64 LineOffsets
        ) PURE;
    STDMETHOD(GetNearInstruction)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ LONG Delta,
        _Out_ PULONG64 NearOffset
        ) PURE;
    STDMETHOD(GetStackTrace)(
        THIS_
        _In_ ULONG64 FrameOffset,
        _In_ ULONG64 StackOffset,
        _In_ ULONG64 InstructionOffset,
        _Out_writes_(FramesSize) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(GetReturnOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(OutputStackTrace)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_opt_(FramesSize) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetDebuggeeType)(
        THIS_
        _Out_ PULONG Class,
        _Out_ PULONG Qualifier
        ) PURE;
    STDMETHOD(GetActualProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetExecutingProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetNumberPossibleExecutingProcessorTypes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetPossibleExecutingProcessorTypes)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PULONG Types
        ) PURE;
    STDMETHOD(GetNumberProcessors)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetSystemVersion)(
        THIS_
        _Out_ PULONG PlatformId,
        _Out_ PULONG Major,
        _Out_ PULONG Minor,
        _Out_writes_opt_(ServicePackStringSize) PSTR ServicePackString,
        _In_ ULONG ServicePackStringSize,
        _Out_opt_ PULONG ServicePackStringUsed,
        _Out_ PULONG ServicePackNumber,
        _Out_writes_opt_(BuildStringSize) PSTR BuildString,
        _In_ ULONG BuildStringSize,
        _Out_opt_ PULONG BuildStringUsed
        ) PURE;
    STDMETHOD(GetPageSize)(
        THIS_
        _Out_ PULONG Size
        ) PURE;
    STDMETHOD(IsPointer64Bit)(
        THIS
        ) PURE;
    STDMETHOD(ReadBugCheckData)(
        THIS_
        _Out_ PULONG Code,
        _Out_ PULONG64 Arg1,
        _Out_ PULONG64 Arg2,
        _Out_ PULONG64 Arg3,
        _Out_ PULONG64 Arg4
        ) PURE;
    STDMETHOD(GetNumberSupportedProcessorTypes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetSupportedProcessorTypes)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PULONG Types
        ) PURE;
    STDMETHOD(GetProcessorTypeNames)(
        THIS_
        _In_ ULONG Type,
        _Out_writes_opt_(FullNameBufferSize) PSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetEffectiveProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(SetEffectiveProcessorType)(
        THIS_
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(GetExecutionStatus)(
        THIS_
        _Out_ PULONG Status
        ) PURE;
    STDMETHOD(SetExecutionStatus)(
        THIS_
        _In_ ULONG Status
        ) PURE;
    STDMETHOD(GetCodeLevel)(
        THIS_
        _Out_ PULONG Level
        ) PURE;
    STDMETHOD(SetCodeLevel)(
        THIS_
        _In_ ULONG Level
        ) PURE;
    STDMETHOD(GetEngineOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetSystemErrorControl)(
        THIS_
        _Out_ PULONG OutputLevel,
        _Out_ PULONG BreakLevel
        ) PURE;
    STDMETHOD(SetSystemErrorControl)(
        THIS_
        _In_ ULONG OutputLevel,
        _In_ ULONG BreakLevel
        ) PURE;
    STDMETHOD(GetTextMacro)(
        THIS_
        _In_ ULONG Slot,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MacroSize
        ) PURE;
    STDMETHOD(SetTextMacro)(
        THIS_
        _In_ ULONG Slot,
        _In_ PCSTR Macro
        ) PURE;
    STDMETHOD(GetRadix)(
        THIS_
        _Out_ PULONG Radix
        ) PURE;
    STDMETHOD(SetRadix)(
        THIS_
        _In_ ULONG Radix
        ) PURE;
    STDMETHOD(Evaluate)(
        THIS_
        _In_ PCSTR Expression,
        _In_ ULONG DesiredType,
        _Out_ PDEBUG_VALUE Value,
        _Out_opt_ PULONG RemainderIndex
        ) PURE;
    STDMETHOD(CoerceValue)(
        THIS_
        _In_ PDEBUG_VALUE In,
        _In_ ULONG OutType,
        _Out_ PDEBUG_VALUE Out
        ) PURE;
    STDMETHOD(CoerceValues)(
        THIS_
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_VALUE In,
        _In_reads_(Count) PULONG OutTypes,
        _Out_writes_(Count) PDEBUG_VALUE Out
        ) PURE;
    STDMETHOD(Execute)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR Command,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(ExecuteCommandFile)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR CommandFile,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetNumberBreakpoints)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetBreakpointByIndex)(
        THIS_
        _In_ ULONG Index,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(GetBreakpointById)(
        THIS_
        _In_ ULONG Id,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(GetBreakpointParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Ids,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_BREAKPOINT_PARAMETERS Params
        ) PURE;
    STDMETHOD(AddBreakpoint)(
        THIS_
        _In_ ULONG Type,
        _In_ ULONG DesiredId,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(RemoveBreakpoint)(
        THIS_
        _In_ PDEBUG_BREAKPOINT Bp
        ) PURE;
    STDMETHOD(AddExtension)(
        THIS_
        _In_ PCSTR Path,
        _In_ ULONG Flags,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(RemoveExtension)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(GetExtensionByPath)(
        THIS_
        _In_ PCSTR Path,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(CallExtension)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCSTR Function,
        _In_opt_ PCSTR Arguments
        ) PURE;
    STDMETHOD(GetExtensionFunction)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCSTR FuncName,
        _Out_ FARPROC* Function
        ) PURE;
    STDMETHOD(GetWindbgExtensionApis32)(
        THIS_
        _Inout_ PWINDBG_EXTENSION_APIS32 Api
        ) PURE;
    STDMETHOD(GetWindbgExtensionApis64)(
        THIS_
        _Inout_ PWINDBG_EXTENSION_APIS64 Api
        ) PURE;
    STDMETHOD(GetNumberEventFilters)(
        THIS_
        _Out_ PULONG SpecificEvents,
        _Out_ PULONG SpecificExceptions,
        _Out_ PULONG ArbitraryExceptions
        ) PURE;
    STDMETHOD(GetEventFilterText)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(GetEventFilterCommand)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetEventFilterCommand)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(GetSpecificFilterParameters)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PDEBUG_SPECIFIC_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(SetSpecificFilterParameters)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_SPECIFIC_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetSpecificFilterArgument)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ArgumentSize
        ) PURE;
    STDMETHOD(SetSpecificFilterArgument)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Argument
        ) PURE;
    STDMETHOD(GetExceptionFilterParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Codes,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_EXCEPTION_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(SetExceptionFilterParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_EXCEPTION_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetExceptionFilterSecondCommand)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetExceptionFilterSecondCommand)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(WaitForEvent)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(GetLastEventInformation)(
        THIS_
        _Out_ PULONG Type,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId,
        _Out_writes_bytes_opt_(ExtraInformationSize) PVOID ExtraInformation,
        _In_ ULONG ExtraInformationSize,
        _Out_opt_ PULONG ExtraInformationUsed,
        _Out_writes_opt_(DescriptionSize) PSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG DescriptionUsed
        ) PURE;
    STDMETHOD(GetCurrentTimeDate)(
        THIS_
        _Out_ PULONG TimeDate
        ) PURE;
    STDMETHOD(GetCurrentSystemUpTime)(
        THIS_
        _Out_ PULONG UpTime
        ) PURE;
    STDMETHOD(GetDumpFormatFlags)(
        THIS_
        _Out_ PULONG FormatFlags
        ) PURE;
    STDMETHOD(GetNumberTextReplacements)(
        THIS_
        _Out_ PULONG NumRepl
        ) PURE;
    STDMETHOD(GetTextReplacement)(
        THIS_
        _In_opt_ PCSTR SrcText,
        _In_ ULONG Index,
        _Out_writes_opt_(SrcBufferSize) PSTR SrcBuffer,
        _In_ ULONG SrcBufferSize,
        _Out_opt_ PULONG SrcSize,
        _Out_writes_opt_(DstBufferSize) PSTR DstBuffer,
        _In_ ULONG DstBufferSize,
        _Out_opt_ PULONG DstSize
        ) PURE;
    STDMETHOD(SetTextReplacement)(
        THIS_
        _In_ PCSTR SrcText,
        _In_opt_ PCSTR DstText
        ) PURE;
    STDMETHOD(RemoveTextReplacements)(
        THIS
        ) PURE;
    STDMETHOD(OutputTextReplacements)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetAssemblyOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddAssemblyOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveAssemblyOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetAssemblyOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetExpressionSyntax)(
        THIS_
        _Out_ PULONG Flags
        ) PURE;
    STDMETHOD(SetExpressionSyntax)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(SetExpressionSyntaxByName)(
        THIS_
        _In_ PCSTR AbbrevName
        ) PURE;
    STDMETHOD(GetNumberExpressionSyntaxes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetExpressionSyntaxNames)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(FullNameBufferSize) PSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetNumberEvents)(
        THIS_
        _Out_ PULONG Events
        ) PURE;
    STDMETHOD(GetEventIndexDescription)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG Which,
        _In_opt_ PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DescSize
        ) PURE;
    STDMETHOD(GetCurrentEventIndex)(
        THIS_
        _Out_ PULONG Index
        ) PURE;
    STDMETHOD(SetNextEventIndex)(
        THIS_
        _In_ ULONG Relation,
        _In_ ULONG Value,
        _Out_ PULONG NextIndex
        ) PURE;
};
DECLARE_INTERFACE_(IDebugControl4, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetInterrupt)(
        THIS
        ) PURE;
    STDMETHOD(SetInterrupt)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetInterruptTimeout)(
        THIS_
        _Out_ PULONG Seconds
        ) PURE;
    STDMETHOD(SetInterruptTimeout)(
        THIS_
        _In_ ULONG Seconds
        ) PURE;
    STDMETHOD(GetLogFile)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PBOOL Append
        ) PURE;
    STDMETHOD(OpenLogFile)(
        THIS_
        _In_ PCSTR File,
        _In_ BOOL Append
        ) PURE;
    STDMETHOD(CloseLogFile)(
        THIS
        ) PURE;
    STDMETHOD(GetLogMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetLogMask)(
        THIS_
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(Input)(
        THIS_
        _Out_writes_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InputSize
        ) PURE;
    STDMETHOD(ReturnInput)(
        THIS_
        _In_ PCSTR Buffer
        ) PURE;
    STDMETHODV(Output)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputVaList)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(ControlledOutput)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(ControlledOutputVaList)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(OutputPrompt)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputPromptVaList)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHOD(GetPromptText)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(OutputCurrentState)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(OutputVersionInformation)(
        THIS_
        _In_ ULONG OutputControl
        ) PURE;
    STDMETHOD(GetNotifyEventHandle)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(SetNotifyEventHandle)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(Assemble)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ PCSTR Instr,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(Disassemble)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DisassemblySize,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(GetDisassembleEffectiveOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(OutputDisassembly)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(OutputDisassemblyLines)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG PreviousLines,
        _In_ ULONG TotalLines,
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_opt_ PULONG OffsetLine,
        _Out_opt_ PULONG64 StartOffset,
        _Out_opt_ PULONG64 EndOffset,
        _Out_writes_opt_(TotalLines) PULONG64 LineOffsets
        ) PURE;
    STDMETHOD(GetNearInstruction)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ LONG Delta,
        _Out_ PULONG64 NearOffset
        ) PURE;
    STDMETHOD(GetStackTrace)(
        THIS_
        _In_ ULONG64 FrameOffset,
        _In_ ULONG64 StackOffset,
        _In_ ULONG64 InstructionOffset,
        _Out_writes_(FramesSize) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(GetReturnOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(OutputStackTrace)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_opt_(FramesSize) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetDebuggeeType)(
        THIS_
        _Out_ PULONG Class,
        _Out_ PULONG Qualifier
        ) PURE;
    STDMETHOD(GetActualProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetExecutingProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetNumberPossibleExecutingProcessorTypes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetPossibleExecutingProcessorTypes)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PULONG Types
        ) PURE;
    STDMETHOD(GetNumberProcessors)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetSystemVersion)(
        THIS_
        _Out_ PULONG PlatformId,
        _Out_ PULONG Major,
        _Out_ PULONG Minor,
        _Out_writes_opt_(ServicePackStringSize) PSTR ServicePackString,
        _In_ ULONG ServicePackStringSize,
        _Out_opt_ PULONG ServicePackStringUsed,
        _Out_ PULONG ServicePackNumber,
        _Out_writes_opt_(BuildStringSize) PSTR BuildString,
        _In_ ULONG BuildStringSize,
        _Out_opt_ PULONG BuildStringUsed
        ) PURE;
    STDMETHOD(GetPageSize)(
        THIS_
        _Out_ PULONG Size
        ) PURE;
    STDMETHOD(IsPointer64Bit)(
        THIS
        ) PURE;
    STDMETHOD(ReadBugCheckData)(
        THIS_
        _Out_ PULONG Code,
        _Out_ PULONG64 Arg1,
        _Out_ PULONG64 Arg2,
        _Out_ PULONG64 Arg3,
        _Out_ PULONG64 Arg4
        ) PURE;
    STDMETHOD(GetNumberSupportedProcessorTypes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetSupportedProcessorTypes)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PULONG Types
        ) PURE;
    STDMETHOD(GetProcessorTypeNames)(
        THIS_
        _In_ ULONG Type,
        _Out_writes_opt_(FullNameBufferSize) PSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetEffectiveProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(SetEffectiveProcessorType)(
        THIS_
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(GetExecutionStatus)(
        THIS_
        _Out_ PULONG Status
        ) PURE;
    STDMETHOD(SetExecutionStatus)(
        THIS_
        _In_ ULONG Status
        ) PURE;
    STDMETHOD(GetCodeLevel)(
        THIS_
        _Out_ PULONG Level
        ) PURE;
    STDMETHOD(SetCodeLevel)(
        THIS_
        _In_ ULONG Level
        ) PURE;
    STDMETHOD(GetEngineOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetSystemErrorControl)(
        THIS_
        _Out_ PULONG OutputLevel,
        _Out_ PULONG BreakLevel
        ) PURE;
    STDMETHOD(SetSystemErrorControl)(
        THIS_
        _In_ ULONG OutputLevel,
        _In_ ULONG BreakLevel
        ) PURE;
    STDMETHOD(GetTextMacro)(
        THIS_
        _In_ ULONG Slot,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MacroSize
        ) PURE;
    STDMETHOD(SetTextMacro)(
        THIS_
        _In_ ULONG Slot,
        _In_ PCSTR Macro
        ) PURE;
    STDMETHOD(GetRadix)(
        THIS_
        _Out_ PULONG Radix
        ) PURE;
    STDMETHOD(SetRadix)(
        THIS_
        _In_ ULONG Radix
        ) PURE;
    STDMETHOD(Evaluate)(
        THIS_
        _In_ PCSTR Expression,
        _In_ ULONG DesiredType,
        _Out_ PDEBUG_VALUE Value,
        _Out_opt_ PULONG RemainderIndex
        ) PURE;
    STDMETHOD(CoerceValue)(
        THIS_
        _In_ PDEBUG_VALUE In,
        _In_ ULONG OutType,
        _Out_ PDEBUG_VALUE Out
        ) PURE;
    STDMETHOD(CoerceValues)(
        THIS_
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_VALUE In,
        _In_reads_(Count) PULONG OutTypes,
        _Out_writes_(Count) PDEBUG_VALUE Out
        ) PURE;
    STDMETHOD(Execute)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR Command,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(ExecuteCommandFile)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR CommandFile,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetNumberBreakpoints)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetBreakpointByIndex)(
        THIS_
        _In_ ULONG Index,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(GetBreakpointById)(
        THIS_
        _In_ ULONG Id,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(GetBreakpointParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Ids,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_BREAKPOINT_PARAMETERS Params
        ) PURE;
    STDMETHOD(AddBreakpoint)(
        THIS_
        _In_ ULONG Type,
        _In_ ULONG DesiredId,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(RemoveBreakpoint)(
        THIS_
        _In_ PDEBUG_BREAKPOINT Bp
        ) PURE;
    STDMETHOD(AddExtension)(
        THIS_
        _In_ PCSTR Path,
        _In_ ULONG Flags,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(RemoveExtension)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(GetExtensionByPath)(
        THIS_
        _In_ PCSTR Path,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(CallExtension)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCSTR Function,
        _In_opt_ PCSTR Arguments
        ) PURE;
    STDMETHOD(GetExtensionFunction)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCSTR FuncName,
        _Out_ FARPROC* Function
        ) PURE;
    STDMETHOD(GetWindbgExtensionApis32)(
        THIS_
        _Inout_ PWINDBG_EXTENSION_APIS32 Api
        ) PURE;
    STDMETHOD(GetWindbgExtensionApis64)(
        THIS_
        _Inout_ PWINDBG_EXTENSION_APIS64 Api
        ) PURE;
    STDMETHOD(GetNumberEventFilters)(
        THIS_
        _Out_ PULONG SpecificEvents,
        _Out_ PULONG SpecificExceptions,
        _Out_ PULONG ArbitraryExceptions
        ) PURE;
    STDMETHOD(GetEventFilterText)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(GetEventFilterCommand)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetEventFilterCommand)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(GetSpecificFilterParameters)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PDEBUG_SPECIFIC_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(SetSpecificFilterParameters)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_SPECIFIC_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetSpecificFilterArgument)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ArgumentSize
        ) PURE;
    STDMETHOD(SetSpecificFilterArgument)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Argument
        ) PURE;
    STDMETHOD(GetExceptionFilterParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Codes,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_EXCEPTION_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(SetExceptionFilterParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_EXCEPTION_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetExceptionFilterSecondCommand)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetExceptionFilterSecondCommand)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(WaitForEvent)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(GetLastEventInformation)(
        THIS_
        _Out_ PULONG Type,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId,
        _Out_writes_bytes_opt_(ExtraInformationSize) PVOID ExtraInformation,
        _In_ ULONG ExtraInformationSize,
        _Out_opt_ PULONG ExtraInformationUsed,
        _Out_writes_opt_(DescriptionSize) PSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG DescriptionUsed
        ) PURE;
    STDMETHOD(GetCurrentTimeDate)(
        THIS_
        _Out_ PULONG TimeDate
        ) PURE;
    STDMETHOD(GetCurrentSystemUpTime)(
        THIS_
        _Out_ PULONG UpTime
        ) PURE;
    STDMETHOD(GetDumpFormatFlags)(
        THIS_
        _Out_ PULONG FormatFlags
        ) PURE;
    STDMETHOD(GetNumberTextReplacements)(
        THIS_
        _Out_ PULONG NumRepl
        ) PURE;
    STDMETHOD(GetTextReplacement)(
        THIS_
        _In_opt_ PCSTR SrcText,
        _In_ ULONG Index,
        _Out_writes_opt_(SrcBufferSize) PSTR SrcBuffer,
        _In_ ULONG SrcBufferSize,
        _Out_opt_ PULONG SrcSize,
        _Out_writes_opt_(DstBufferSize) PSTR DstBuffer,
        _In_ ULONG DstBufferSize,
        _Out_opt_ PULONG DstSize
        ) PURE;
    STDMETHOD(SetTextReplacement)(
        THIS_
        _In_ PCSTR SrcText,
        _In_opt_ PCSTR DstText
        ) PURE;
    STDMETHOD(RemoveTextReplacements)(
        THIS
        ) PURE;
    STDMETHOD(OutputTextReplacements)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetAssemblyOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddAssemblyOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveAssemblyOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetAssemblyOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetExpressionSyntax)(
        THIS_
        _Out_ PULONG Flags
        ) PURE;
    STDMETHOD(SetExpressionSyntax)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(SetExpressionSyntaxByName)(
        THIS_
        _In_ PCSTR AbbrevName
        ) PURE;
    STDMETHOD(GetNumberExpressionSyntaxes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetExpressionSyntaxNames)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(FullNameBufferSize) PSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetNumberEvents)(
        THIS_
        _Out_ PULONG Events
        ) PURE;
    STDMETHOD(GetEventIndexDescription)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG Which,
        _In_opt_ PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DescSize
        ) PURE;
    STDMETHOD(GetCurrentEventIndex)(
        THIS_
        _Out_ PULONG Index
        ) PURE;
    STDMETHOD(SetNextEventIndex)(
        THIS_
        _In_ ULONG Relation,
        _In_ ULONG Value,
        _Out_ PULONG NextIndex
        ) PURE;
    STDMETHOD(GetLogFileWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PBOOL Append
        ) PURE;
    STDMETHOD(OpenLogFileWide)(
        THIS_
        _In_ PCWSTR File,
        _In_ BOOL Append
        ) PURE;
    STDMETHOD(InputWide)(
        THIS_
        _Out_writes_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InputSize
        ) PURE;
    STDMETHOD(ReturnInputWide)(
        THIS_
        _In_ PCWSTR Buffer
        ) PURE;
    STDMETHODV(OutputWide)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCWSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputVaListWide)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCWSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(ControlledOutputWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCWSTR Format,
        ...
        ) PURE;
    STDMETHOD(ControlledOutputVaListWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCWSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(OutputPromptWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCWSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputPromptVaListWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCWSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHOD(GetPromptTextWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(AssembleWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ PCWSTR Instr,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(DisassembleWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DisassemblySize,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(GetProcessorTypeNamesWide)(
        THIS_
        _In_ ULONG Type,
        _Out_writes_opt_(FullNameBufferSize) PWSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PWSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetTextMacroWide)(
        THIS_
        _In_ ULONG Slot,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MacroSize
        ) PURE;
    STDMETHOD(SetTextMacroWide)(
        THIS_
        _In_ ULONG Slot,
        _In_ PCWSTR Macro
        ) PURE;
    STDMETHOD(EvaluateWide)(
        THIS_
        _In_ PCWSTR Expression,
        _In_ ULONG DesiredType,
        _Out_ PDEBUG_VALUE Value,
        _Out_opt_ PULONG RemainderIndex
        ) PURE;
    STDMETHOD(ExecuteWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCWSTR Command,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(ExecuteCommandFileWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCWSTR CommandFile,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetBreakpointByIndex2)(
        THIS_
        _In_ ULONG Index,
        _Out_ PDEBUG_BREAKPOINT2* Bp
        ) PURE;
    STDMETHOD(GetBreakpointById2)(
        THIS_
        _In_ ULONG Id,
        _Out_ PDEBUG_BREAKPOINT2* Bp
        ) PURE;
    STDMETHOD(AddBreakpoint2)(
        THIS_
        _In_ ULONG Type,
        _In_ ULONG DesiredId,
        _Out_ PDEBUG_BREAKPOINT2* Bp
        ) PURE;
    STDMETHOD(RemoveBreakpoint2)(
        THIS_
        _In_ PDEBUG_BREAKPOINT2 Bp
        ) PURE;
    STDMETHOD(AddExtensionWide)(
        THIS_
        _In_ PCWSTR Path,
        _In_ ULONG Flags,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetExtensionByPathWide)(
        THIS_
        _In_ PCWSTR Path,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(CallExtensionWide)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCWSTR Function,
        _In_opt_ PCWSTR Arguments
        ) PURE;
    STDMETHOD(GetExtensionFunctionWide)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCWSTR FuncName,
        _Out_ FARPROC* Function
        ) PURE;
    STDMETHOD(GetEventFilterTextWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(GetEventFilterCommandWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetEventFilterCommandWide)(
        THIS_
        _In_ ULONG Index,
        _In_ PCWSTR Command
        ) PURE;
    STDMETHOD(GetSpecificFilterArgumentWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ArgumentSize
        ) PURE;
    STDMETHOD(SetSpecificFilterArgumentWide)(
        THIS_
        _In_ ULONG Index,
        _In_ PCWSTR Argument
        ) PURE;
    STDMETHOD(GetExceptionFilterSecondCommandWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetExceptionFilterSecondCommandWide)(
        THIS_
        _In_ ULONG Index,
        _In_ PCWSTR Command
        ) PURE;
    STDMETHOD(GetLastEventInformationWide)(
        THIS_
        _Out_ PULONG Type,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId,
        _Out_writes_bytes_opt_(ExtraInformationSize) PVOID ExtraInformation,
        _In_ ULONG ExtraInformationSize,
        _Out_opt_ PULONG ExtraInformationUsed,
        _Out_writes_opt_(DescriptionSize) PWSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG DescriptionUsed
        ) PURE;
    STDMETHOD(GetTextReplacementWide)(
        THIS_
        _In_opt_ PCWSTR SrcText,
        _In_ ULONG Index,
        _Out_writes_opt_(SrcBufferSize) PWSTR SrcBuffer,
        _In_ ULONG SrcBufferSize,
        _Out_opt_ PULONG SrcSize,
        _Out_writes_opt_(DstBufferSize) PWSTR DstBuffer,
        _In_ ULONG DstBufferSize,
        _Out_opt_ PULONG DstSize
        ) PURE;
    STDMETHOD(SetTextReplacementWide)(
        THIS_
        _In_ PCWSTR SrcText,
        _In_opt_ PCWSTR DstText
        ) PURE;
    STDMETHOD(SetExpressionSyntaxByNameWide)(
        THIS_
        _In_ PCWSTR AbbrevName
        ) PURE;
    STDMETHOD(GetExpressionSyntaxNamesWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(FullNameBufferSize) PWSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PWSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetEventIndexDescriptionWide)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG Which,
        _In_opt_ PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DescSize
        ) PURE;
    STDMETHOD(GetLogFile2)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PULONG Flags
        ) PURE;
    STDMETHOD(OpenLogFile2)(
        THIS_
        _In_ PCSTR File,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetLogFile2Wide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PULONG Flags
        ) PURE;
    STDMETHOD(OpenLogFile2Wide)(
        THIS_
        _In_ PCWSTR File,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetSystemVersionValues)(
        THIS_
        _Out_ PULONG PlatformId,
        _Out_ PULONG Win32Major,
        _Out_ PULONG Win32Minor,
        _Out_opt_ PULONG KdMajor,
        _Out_opt_ PULONG KdMinor
        ) PURE;
    STDMETHOD(GetSystemVersionString)(
        THIS_
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSystemVersionStringWide)(
        THIS_
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetContextStackTrace)(
        THIS_
        _In_reads_bytes_opt_(StartContextSize) PVOID StartContext,
        _In_ ULONG StartContextSize,
        _Out_writes_opt_(FramesSize) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _Out_writes_bytes_opt_(FrameContextsSize) PVOID FrameContexts,
        _In_ ULONG FrameContextsSize,
        _In_ ULONG FrameContextsEntrySize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(OutputContextStackTrace)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_(FramesSize) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _In_reads_bytes_(FrameContextsSize) PVOID FrameContexts,
        _In_ ULONG FrameContextsSize,
        _In_ ULONG FrameContextsEntrySize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetStoredEventInformation)(
        THIS_
        _Out_ PULONG Type,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId,
        _Out_writes_bytes_opt_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize,
        _Out_opt_ PULONG ContextUsed,
        _Out_writes_bytes_opt_(ExtraInformationSize) PVOID ExtraInformation,
        _In_ ULONG ExtraInformationSize,
        _Out_opt_ PULONG ExtraInformationUsed
        ) PURE;
    STDMETHOD(GetManagedStatus)(
        THIS_
        _Out_opt_ PULONG Flags,
        _In_ ULONG WhichString,
        _Out_writes_opt_(StringSize) PSTR String,
        _In_ ULONG StringSize,
        _Out_opt_ PULONG StringNeeded
        ) PURE;
    STDMETHOD(GetManagedStatusWide)(
        THIS_
        _Out_opt_ PULONG Flags,
        _In_ ULONG WhichString,
        _Out_writes_opt_(StringSize) PWSTR String,
        _In_ ULONG StringSize,
        _Out_opt_ PULONG StringNeeded
        ) PURE;
    STDMETHOD(ResetManagedStatus)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
};
DECLARE_INTERFACE_(IDebugControl5, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetInterrupt)(
        THIS
        ) PURE;
    STDMETHOD(SetInterrupt)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetInterruptTimeout)(
        THIS_
        _Out_ PULONG Seconds
        ) PURE;
    STDMETHOD(SetInterruptTimeout)(
        THIS_
        _In_ ULONG Seconds
        ) PURE;
    STDMETHOD(GetLogFile)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PBOOL Append
        ) PURE;
    STDMETHOD(OpenLogFile)(
        THIS_
        _In_ PCSTR File,
        _In_ BOOL Append
        ) PURE;
    STDMETHOD(CloseLogFile)(
        THIS
        ) PURE;
    STDMETHOD(GetLogMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetLogMask)(
        THIS_
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(Input)(
        THIS_
        _Out_writes_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InputSize
        ) PURE;
    STDMETHOD(ReturnInput)(
        THIS_
        _In_ PCSTR Buffer
        ) PURE;
    STDMETHODV(Output)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputVaList)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(ControlledOutput)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(ControlledOutputVaList)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(OutputPrompt)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputPromptVaList)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHOD(GetPromptText)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(OutputCurrentState)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(OutputVersionInformation)(
        THIS_
        _In_ ULONG OutputControl
        ) PURE;
    STDMETHOD(GetNotifyEventHandle)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(SetNotifyEventHandle)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(Assemble)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ PCSTR Instr,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(Disassemble)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DisassemblySize,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(GetDisassembleEffectiveOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(OutputDisassembly)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(OutputDisassemblyLines)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG PreviousLines,
        _In_ ULONG TotalLines,
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_opt_ PULONG OffsetLine,
        _Out_opt_ PULONG64 StartOffset,
        _Out_opt_ PULONG64 EndOffset,
        _Out_writes_opt_(TotalLines) PULONG64 LineOffsets
        ) PURE;
    STDMETHOD(GetNearInstruction)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ LONG Delta,
        _Out_ PULONG64 NearOffset
        ) PURE;
    STDMETHOD(GetStackTrace)(
        THIS_
        _In_ ULONG64 FrameOffset,
        _In_ ULONG64 StackOffset,
        _In_ ULONG64 InstructionOffset,
        _Out_writes_to_(FramesSize,*FramesFilled) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(GetReturnOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(OutputStackTrace)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_opt_(FramesSize) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetDebuggeeType)(
        THIS_
        _Out_ PULONG Class,
        _Out_ PULONG Qualifier
        ) PURE;
    STDMETHOD(GetActualProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetExecutingProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetNumberPossibleExecutingProcessorTypes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetPossibleExecutingProcessorTypes)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PULONG Types
        ) PURE;
    STDMETHOD(GetNumberProcessors)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetSystemVersion)(
        THIS_
        _Out_ PULONG PlatformId,
        _Out_ PULONG Major,
        _Out_ PULONG Minor,
        _Out_writes_opt_(ServicePackStringSize) PSTR ServicePackString,
        _In_ ULONG ServicePackStringSize,
        _Out_opt_ PULONG ServicePackStringUsed,
        _Out_ PULONG ServicePackNumber,
        _Out_writes_opt_(BuildStringSize) PSTR BuildString,
        _In_ ULONG BuildStringSize,
        _Out_opt_ PULONG BuildStringUsed
        ) PURE;
    STDMETHOD(GetPageSize)(
        THIS_
        _Out_ PULONG Size
        ) PURE;
    STDMETHOD(IsPointer64Bit)(
        THIS
        ) PURE;
    STDMETHOD(ReadBugCheckData)(
        THIS_
        _Out_ PULONG Code,
        _Out_ PULONG64 Arg1,
        _Out_ PULONG64 Arg2,
        _Out_ PULONG64 Arg3,
        _Out_ PULONG64 Arg4
        ) PURE;
    STDMETHOD(GetNumberSupportedProcessorTypes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetSupportedProcessorTypes)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PULONG Types
        ) PURE;
    STDMETHOD(GetProcessorTypeNames)(
        THIS_
        _In_ ULONG Type,
        _Out_writes_opt_(FullNameBufferSize) PSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetEffectiveProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(SetEffectiveProcessorType)(
        THIS_
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(GetExecutionStatus)(
        THIS_
        _Out_ PULONG Status
        ) PURE;
    STDMETHOD(SetExecutionStatus)(
        THIS_
        _In_ ULONG Status
        ) PURE;
    STDMETHOD(GetCodeLevel)(
        THIS_
        _Out_ PULONG Level
        ) PURE;
    STDMETHOD(SetCodeLevel)(
        THIS_
        _In_ ULONG Level
        ) PURE;
    STDMETHOD(GetEngineOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetSystemErrorControl)(
        THIS_
        _Out_ PULONG OutputLevel,
        _Out_ PULONG BreakLevel
        ) PURE;
    STDMETHOD(SetSystemErrorControl)(
        THIS_
        _In_ ULONG OutputLevel,
        _In_ ULONG BreakLevel
        ) PURE;
    STDMETHOD(GetTextMacro)(
        THIS_
        _In_ ULONG Slot,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MacroSize
        ) PURE;
    STDMETHOD(SetTextMacro)(
        THIS_
        _In_ ULONG Slot,
        _In_ PCSTR Macro
        ) PURE;
    STDMETHOD(GetRadix)(
        THIS_
        _Out_ PULONG Radix
        ) PURE;
    STDMETHOD(SetRadix)(
        THIS_
        _In_ ULONG Radix
        ) PURE;
    STDMETHOD(Evaluate)(
        THIS_
        _In_ PCSTR Expression,
        _In_ ULONG DesiredType,
        _Out_ PDEBUG_VALUE Value,
        _Out_opt_ PULONG RemainderIndex
        ) PURE;
    STDMETHOD(CoerceValue)(
        THIS_
        _In_ PDEBUG_VALUE In,
        _In_ ULONG OutType,
        _Out_ PDEBUG_VALUE Out
        ) PURE;
    STDMETHOD(CoerceValues)(
        THIS_
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_VALUE In,
        _In_reads_(Count) PULONG OutTypes,
        _Out_writes_(Count) PDEBUG_VALUE Out
        ) PURE;
    STDMETHOD(Execute)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR Command,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(ExecuteCommandFile)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR CommandFile,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetNumberBreakpoints)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetBreakpointByIndex)(
        THIS_
        _In_ ULONG Index,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(GetBreakpointById)(
        THIS_
        _In_ ULONG Id,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(GetBreakpointParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Ids,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_BREAKPOINT_PARAMETERS Params
        ) PURE;
    STDMETHOD(AddBreakpoint)(
        THIS_
        _In_ ULONG Type,
        _In_ ULONG DesiredId,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(RemoveBreakpoint)(
        THIS_
        _In_ PDEBUG_BREAKPOINT Bp
        ) PURE;
    STDMETHOD(AddExtension)(
        THIS_
        _In_ PCSTR Path,
        _In_ ULONG Flags,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(RemoveExtension)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(GetExtensionByPath)(
        THIS_
        _In_ PCSTR Path,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(CallExtension)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCSTR Function,
        _In_opt_ PCSTR Arguments
        ) PURE;
    STDMETHOD(GetExtensionFunction)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCSTR FuncName,
        _Out_ FARPROC* Function
        ) PURE;
    STDMETHOD(GetWindbgExtensionApis32)(
        THIS_
        _Inout_ PWINDBG_EXTENSION_APIS32 Api
        ) PURE;
    STDMETHOD(GetWindbgExtensionApis64)(
        THIS_
        _Inout_ PWINDBG_EXTENSION_APIS64 Api
        ) PURE;
    STDMETHOD(GetNumberEventFilters)(
        THIS_
        _Out_ PULONG SpecificEvents,
        _Out_ PULONG SpecificExceptions,
        _Out_ PULONG ArbitraryExceptions
        ) PURE;
    STDMETHOD(GetEventFilterText)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(GetEventFilterCommand)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetEventFilterCommand)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(GetSpecificFilterParameters)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PDEBUG_SPECIFIC_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(SetSpecificFilterParameters)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_SPECIFIC_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetSpecificFilterArgument)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ArgumentSize
        ) PURE;
    STDMETHOD(SetSpecificFilterArgument)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Argument
        ) PURE;
    STDMETHOD(GetExceptionFilterParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Codes,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_EXCEPTION_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(SetExceptionFilterParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_EXCEPTION_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetExceptionFilterSecondCommand)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetExceptionFilterSecondCommand)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(WaitForEvent)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(GetLastEventInformation)(
        THIS_
        _Out_ PULONG Type,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId,
        _Out_writes_bytes_opt_(ExtraInformationSize) PVOID ExtraInformation,
        _In_ ULONG ExtraInformationSize,
        _Out_opt_ PULONG ExtraInformationUsed,
        _Out_writes_opt_(DescriptionSize) PSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG DescriptionUsed
        ) PURE;
    STDMETHOD(GetCurrentTimeDate)(
        THIS_
        _Out_ PULONG TimeDate
        ) PURE;
    STDMETHOD(GetCurrentSystemUpTime)(
        THIS_
        _Out_ PULONG UpTime
        ) PURE;
    STDMETHOD(GetDumpFormatFlags)(
        THIS_
        _Out_ PULONG FormatFlags
        ) PURE;
    STDMETHOD(GetNumberTextReplacements)(
        THIS_
        _Out_ PULONG NumRepl
        ) PURE;
    STDMETHOD(GetTextReplacement)(
        THIS_
        _In_opt_ PCSTR SrcText,
        _In_ ULONG Index,
        _Out_writes_opt_(SrcBufferSize) PSTR SrcBuffer,
        _In_ ULONG SrcBufferSize,
        _Out_opt_ PULONG SrcSize,
        _Out_writes_opt_(DstBufferSize) PSTR DstBuffer,
        _In_ ULONG DstBufferSize,
        _Out_opt_ PULONG DstSize
        ) PURE;
    STDMETHOD(SetTextReplacement)(
        THIS_
        _In_ PCSTR SrcText,
        _In_opt_ PCSTR DstText
        ) PURE;
    STDMETHOD(RemoveTextReplacements)(
        THIS
        ) PURE;
    STDMETHOD(OutputTextReplacements)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetAssemblyOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddAssemblyOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveAssemblyOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetAssemblyOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetExpressionSyntax)(
        THIS_
        _Out_ PULONG Flags
        ) PURE;
    STDMETHOD(SetExpressionSyntax)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(SetExpressionSyntaxByName)(
        THIS_
        _In_ PCSTR AbbrevName
        ) PURE;
    STDMETHOD(GetNumberExpressionSyntaxes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetExpressionSyntaxNames)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(FullNameBufferSize) PSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetNumberEvents)(
        THIS_
        _Out_ PULONG Events
        ) PURE;
    STDMETHOD(GetEventIndexDescription)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG Which,
        _In_opt_ PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DescSize
        ) PURE;
    STDMETHOD(GetCurrentEventIndex)(
        THIS_
        _Out_ PULONG Index
        ) PURE;
    STDMETHOD(SetNextEventIndex)(
        THIS_
        _In_ ULONG Relation,
        _In_ ULONG Value,
        _Out_ PULONG NextIndex
        ) PURE;
    STDMETHOD(GetLogFileWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PBOOL Append
        ) PURE;
    STDMETHOD(OpenLogFileWide)(
        THIS_
        _In_ PCWSTR File,
        _In_ BOOL Append
        ) PURE;
    STDMETHOD(InputWide)(
        THIS_
        _Out_writes_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InputSize
        ) PURE;
    STDMETHOD(ReturnInputWide)(
        THIS_
        _In_ PCWSTR Buffer
        ) PURE;
    STDMETHODV(OutputWide)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCWSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputVaListWide)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCWSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(ControlledOutputWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCWSTR Format,
        ...
        ) PURE;
    STDMETHOD(ControlledOutputVaListWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCWSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(OutputPromptWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCWSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputPromptVaListWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCWSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHOD(GetPromptTextWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(AssembleWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ PCWSTR Instr,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(DisassembleWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DisassemblySize,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(GetProcessorTypeNamesWide)(
        THIS_
        _In_ ULONG Type,
        _Out_writes_opt_(FullNameBufferSize) PWSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PWSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetTextMacroWide)(
        THIS_
        _In_ ULONG Slot,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MacroSize
        ) PURE;
    STDMETHOD(SetTextMacroWide)(
        THIS_
        _In_ ULONG Slot,
        _In_ PCWSTR Macro
        ) PURE;
    STDMETHOD(EvaluateWide)(
        THIS_
        _In_ PCWSTR Expression,
        _In_ ULONG DesiredType,
        _Out_ PDEBUG_VALUE Value,
        _Out_opt_ PULONG RemainderIndex
        ) PURE;
    STDMETHOD(ExecuteWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCWSTR Command,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(ExecuteCommandFileWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCWSTR CommandFile,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetBreakpointByIndex2)(
        THIS_
        _In_ ULONG Index,
        _Out_ PDEBUG_BREAKPOINT2* Bp
        ) PURE;
    STDMETHOD(GetBreakpointById2)(
        THIS_
        _In_ ULONG Id,
        _Out_ PDEBUG_BREAKPOINT2* Bp
        ) PURE;
    STDMETHOD(AddBreakpoint2)(
        THIS_
        _In_ ULONG Type,
        _In_ ULONG DesiredId,
        _Out_ PDEBUG_BREAKPOINT2* Bp
        ) PURE;
    STDMETHOD(RemoveBreakpoint2)(
        THIS_
        _In_ PDEBUG_BREAKPOINT2 Bp
        ) PURE;
    STDMETHOD(AddExtensionWide)(
        THIS_
        _In_ PCWSTR Path,
        _In_ ULONG Flags,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetExtensionByPathWide)(
        THIS_
        _In_ PCWSTR Path,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(CallExtensionWide)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCWSTR Function,
        _In_opt_ PCWSTR Arguments
        ) PURE;
    STDMETHOD(GetExtensionFunctionWide)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCWSTR FuncName,
        _Out_ FARPROC* Function
        ) PURE;
    STDMETHOD(GetEventFilterTextWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(GetEventFilterCommandWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetEventFilterCommandWide)(
        THIS_
        _In_ ULONG Index,
        _In_ PCWSTR Command
        ) PURE;
    STDMETHOD(GetSpecificFilterArgumentWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ArgumentSize
        ) PURE;
    STDMETHOD(SetSpecificFilterArgumentWide)(
        THIS_
        _In_ ULONG Index,
        _In_ PCWSTR Argument
        ) PURE;
    STDMETHOD(GetExceptionFilterSecondCommandWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetExceptionFilterSecondCommandWide)(
        THIS_
        _In_ ULONG Index,
        _In_ PCWSTR Command
        ) PURE;
    STDMETHOD(GetLastEventInformationWide)(
        THIS_
        _Out_ PULONG Type,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId,
        _Out_writes_bytes_opt_(ExtraInformationSize) PVOID ExtraInformation,
        _In_ ULONG ExtraInformationSize,
        _Out_opt_ PULONG ExtraInformationUsed,
        _Out_writes_opt_(DescriptionSize) PWSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG DescriptionUsed
        ) PURE;
    STDMETHOD(GetTextReplacementWide)(
        THIS_
        _In_opt_ PCWSTR SrcText,
        _In_ ULONG Index,
        _Out_writes_opt_(SrcBufferSize) PWSTR SrcBuffer,
        _In_ ULONG SrcBufferSize,
        _Out_opt_ PULONG SrcSize,
        _Out_writes_opt_(DstBufferSize) PWSTR DstBuffer,
        _In_ ULONG DstBufferSize,
        _Out_opt_ PULONG DstSize
        ) PURE;
    STDMETHOD(SetTextReplacementWide)(
        THIS_
        _In_ PCWSTR SrcText,
        _In_opt_ PCWSTR DstText
        ) PURE;
    STDMETHOD(SetExpressionSyntaxByNameWide)(
        THIS_
        _In_ PCWSTR AbbrevName
        ) PURE;
    STDMETHOD(GetExpressionSyntaxNamesWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(FullNameBufferSize) PWSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PWSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetEventIndexDescriptionWide)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG Which,
        _In_opt_ PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DescSize
        ) PURE;
    STDMETHOD(GetLogFile2)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PULONG Flags
        ) PURE;
    STDMETHOD(OpenLogFile2)(
        THIS_
        _In_ PCSTR File,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetLogFile2Wide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PULONG Flags
        ) PURE;
    STDMETHOD(OpenLogFile2Wide)(
        THIS_
        _In_ PCWSTR File,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetSystemVersionValues)(
        THIS_
        _Out_ PULONG PlatformId,
        _Out_ PULONG Win32Major,
        _Out_ PULONG Win32Minor,
        _Out_opt_ PULONG KdMajor,
        _Out_opt_ PULONG KdMinor
        ) PURE;
    STDMETHOD(GetSystemVersionString)(
        THIS_
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSystemVersionStringWide)(
        THIS_
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetContextStackTrace)(
        THIS_
        _In_reads_bytes_opt_(StartContextSize) PVOID StartContext,
        _In_ ULONG StartContextSize,
        _Out_writes_to_opt_(FramesSize,*FramesFilled) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _Out_writes_bytes_opt_(FrameContextsSize) PVOID FrameContexts,
        _In_ ULONG FrameContextsSize,
        _In_ ULONG FrameContextsEntrySize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(OutputContextStackTrace)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_(FramesSize) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _In_reads_bytes_(FrameContextsSize) PVOID FrameContexts,
        _In_ ULONG FrameContextsSize,
        _In_ ULONG FrameContextsEntrySize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetStoredEventInformation)(
        THIS_
        _Out_ PULONG Type,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId,
        _Out_writes_bytes_opt_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize,
        _Out_opt_ PULONG ContextUsed,
        _Out_writes_bytes_opt_(ExtraInformationSize) PVOID ExtraInformation,
        _In_ ULONG ExtraInformationSize,
        _Out_opt_ PULONG ExtraInformationUsed
        ) PURE;
    STDMETHOD(GetManagedStatus)(
        THIS_
        _Out_opt_ PULONG Flags,
        _In_ ULONG WhichString,
        _Out_writes_opt_(StringSize) PSTR String,
        _In_ ULONG StringSize,
        _Out_opt_ PULONG StringNeeded
        ) PURE;
    STDMETHOD(GetManagedStatusWide)(
        THIS_
        _Out_opt_ PULONG Flags,
        _In_ ULONG WhichString,
        _Out_writes_opt_(StringSize) PWSTR String,
        _In_ ULONG StringSize,
        _Out_opt_ PULONG StringNeeded
        ) PURE;
    STDMETHOD(ResetManagedStatus)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetStackTraceEx)(
        THIS_
        _In_ ULONG64 FrameOffset,
        _In_ ULONG64 StackOffset,
        _In_ ULONG64 InstructionOffset,
        _Out_writes_to_(FramesSize,*FramesFilled) PDEBUG_STACK_FRAME_EX Frames,
        _In_ ULONG FramesSize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(OutputStackTraceEx)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_opt_(FramesSize) PDEBUG_STACK_FRAME_EX Frames,
        _In_ ULONG FramesSize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetContextStackTraceEx)(
        THIS_
        _In_reads_bytes_opt_(StartContextSize) PVOID StartContext,
        _In_ ULONG StartContextSize,
        _Out_writes_to_opt_(FramesSize,*FramesFilled) PDEBUG_STACK_FRAME_EX Frames,
        _In_ ULONG FramesSize,
        _Out_writes_bytes_opt_(FrameContextsSize) PVOID FrameContexts,
        _In_ ULONG FrameContextsSize,
        _In_ ULONG FrameContextsEntrySize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(OutputContextStackTraceEx)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_(FramesSize) PDEBUG_STACK_FRAME_EX Frames,
        _In_ ULONG FramesSize,
        _In_reads_bytes_(FrameContextsSize) PVOID FrameContexts,
        _In_ ULONG FrameContextsSize,
        _In_ ULONG FrameContextsEntrySize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetBreakpointByGuid)(
        THIS_
        _In_ LPGUID Guid,
        _Out_ PDEBUG_BREAKPOINT3* Bp
        ) PURE;
};
DECLARE_INTERFACE_(IDebugControl6, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetInterrupt)(
        THIS
        ) PURE;
    STDMETHOD(SetInterrupt)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetInterruptTimeout)(
        THIS_
        _Out_ PULONG Seconds
        ) PURE;
    STDMETHOD(SetInterruptTimeout)(
        THIS_
        _In_ ULONG Seconds
        ) PURE;
    STDMETHOD(GetLogFile)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PBOOL Append
        ) PURE;
    STDMETHOD(OpenLogFile)(
        THIS_
        _In_ PCSTR File,
        _In_ BOOL Append
        ) PURE;
    STDMETHOD(CloseLogFile)(
        THIS
        ) PURE;
    STDMETHOD(GetLogMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetLogMask)(
        THIS_
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(Input)(
        THIS_
        _Out_writes_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InputSize
        ) PURE;
    STDMETHOD(ReturnInput)(
        THIS_
        _In_ PCSTR Buffer
        ) PURE;
    STDMETHODV(Output)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputVaList)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(ControlledOutput)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(ControlledOutputVaList)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(OutputPrompt)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputPromptVaList)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHOD(GetPromptText)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(OutputCurrentState)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(OutputVersionInformation)(
        THIS_
        _In_ ULONG OutputControl
        ) PURE;
    STDMETHOD(GetNotifyEventHandle)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(SetNotifyEventHandle)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(Assemble)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ PCSTR Instr,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(Disassemble)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DisassemblySize,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(GetDisassembleEffectiveOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(OutputDisassembly)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(OutputDisassemblyLines)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG PreviousLines,
        _In_ ULONG TotalLines,
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_opt_ PULONG OffsetLine,
        _Out_opt_ PULONG64 StartOffset,
        _Out_opt_ PULONG64 EndOffset,
        _Out_writes_opt_(TotalLines) PULONG64 LineOffsets
        ) PURE;
    STDMETHOD(GetNearInstruction)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ LONG Delta,
        _Out_ PULONG64 NearOffset
        ) PURE;
    STDMETHOD(GetStackTrace)(
        THIS_
        _In_ ULONG64 FrameOffset,
        _In_ ULONG64 StackOffset,
        _In_ ULONG64 InstructionOffset,
        _Out_writes_to_(FramesSize,*FramesFilled) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(GetReturnOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(OutputStackTrace)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_opt_(FramesSize) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetDebuggeeType)(
        THIS_
        _Out_ PULONG Class,
        _Out_ PULONG Qualifier
        ) PURE;
    STDMETHOD(GetActualProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetExecutingProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetNumberPossibleExecutingProcessorTypes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetPossibleExecutingProcessorTypes)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PULONG Types
        ) PURE;
    STDMETHOD(GetNumberProcessors)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetSystemVersion)(
        THIS_
        _Out_ PULONG PlatformId,
        _Out_ PULONG Major,
        _Out_ PULONG Minor,
        _Out_writes_opt_(ServicePackStringSize) PSTR ServicePackString,
        _In_ ULONG ServicePackStringSize,
        _Out_opt_ PULONG ServicePackStringUsed,
        _Out_ PULONG ServicePackNumber,
        _Out_writes_opt_(BuildStringSize) PSTR BuildString,
        _In_ ULONG BuildStringSize,
        _Out_opt_ PULONG BuildStringUsed
        ) PURE;
    STDMETHOD(GetPageSize)(
        THIS_
        _Out_ PULONG Size
        ) PURE;
    STDMETHOD(IsPointer64Bit)(
        THIS
        ) PURE;
    STDMETHOD(ReadBugCheckData)(
        THIS_
        _Out_ PULONG Code,
        _Out_ PULONG64 Arg1,
        _Out_ PULONG64 Arg2,
        _Out_ PULONG64 Arg3,
        _Out_ PULONG64 Arg4
        ) PURE;
    STDMETHOD(GetNumberSupportedProcessorTypes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetSupportedProcessorTypes)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PULONG Types
        ) PURE;
    STDMETHOD(GetProcessorTypeNames)(
        THIS_
        _In_ ULONG Type,
        _Out_writes_opt_(FullNameBufferSize) PSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetEffectiveProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(SetEffectiveProcessorType)(
        THIS_
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(GetExecutionStatus)(
        THIS_
        _Out_ PULONG Status
        ) PURE;
    STDMETHOD(SetExecutionStatus)(
        THIS_
        _In_ ULONG Status
        ) PURE;
    STDMETHOD(GetCodeLevel)(
        THIS_
        _Out_ PULONG Level
        ) PURE;
    STDMETHOD(SetCodeLevel)(
        THIS_
        _In_ ULONG Level
        ) PURE;
    STDMETHOD(GetEngineOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetSystemErrorControl)(
        THIS_
        _Out_ PULONG OutputLevel,
        _Out_ PULONG BreakLevel
        ) PURE;
    STDMETHOD(SetSystemErrorControl)(
        THIS_
        _In_ ULONG OutputLevel,
        _In_ ULONG BreakLevel
        ) PURE;
    STDMETHOD(GetTextMacro)(
        THIS_
        _In_ ULONG Slot,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MacroSize
        ) PURE;
    STDMETHOD(SetTextMacro)(
        THIS_
        _In_ ULONG Slot,
        _In_ PCSTR Macro
        ) PURE;
    STDMETHOD(GetRadix)(
        THIS_
        _Out_ PULONG Radix
        ) PURE;
    STDMETHOD(SetRadix)(
        THIS_
        _In_ ULONG Radix
        ) PURE;
    STDMETHOD(Evaluate)(
        THIS_
        _In_ PCSTR Expression,
        _In_ ULONG DesiredType,
        _Out_ PDEBUG_VALUE Value,
        _Out_opt_ PULONG RemainderIndex
        ) PURE;
    STDMETHOD(CoerceValue)(
        THIS_
        _In_ PDEBUG_VALUE In,
        _In_ ULONG OutType,
        _Out_ PDEBUG_VALUE Out
        ) PURE;
    STDMETHOD(CoerceValues)(
        THIS_
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_VALUE In,
        _In_reads_(Count) PULONG OutTypes,
        _Out_writes_(Count) PDEBUG_VALUE Out
        ) PURE;
    STDMETHOD(Execute)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR Command,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(ExecuteCommandFile)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR CommandFile,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetNumberBreakpoints)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetBreakpointByIndex)(
        THIS_
        _In_ ULONG Index,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(GetBreakpointById)(
        THIS_
        _In_ ULONG Id,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(GetBreakpointParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Ids,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_BREAKPOINT_PARAMETERS Params
        ) PURE;
    STDMETHOD(AddBreakpoint)(
        THIS_
        _In_ ULONG Type,
        _In_ ULONG DesiredId,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(RemoveBreakpoint)(
        THIS_
        _In_ PDEBUG_BREAKPOINT Bp
        ) PURE;
    STDMETHOD(AddExtension)(
        THIS_
        _In_ PCSTR Path,
        _In_ ULONG Flags,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(RemoveExtension)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(GetExtensionByPath)(
        THIS_
        _In_ PCSTR Path,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(CallExtension)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCSTR Function,
        _In_opt_ PCSTR Arguments
        ) PURE;
    STDMETHOD(GetExtensionFunction)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCSTR FuncName,
        _Out_ FARPROC* Function
        ) PURE;
    STDMETHOD(GetWindbgExtensionApis32)(
        THIS_
        _Inout_ PWINDBG_EXTENSION_APIS32 Api
        ) PURE;
    STDMETHOD(GetWindbgExtensionApis64)(
        THIS_
        _Inout_ PWINDBG_EXTENSION_APIS64 Api
        ) PURE;
    STDMETHOD(GetNumberEventFilters)(
        THIS_
        _Out_ PULONG SpecificEvents,
        _Out_ PULONG SpecificExceptions,
        _Out_ PULONG ArbitraryExceptions
        ) PURE;
    STDMETHOD(GetEventFilterText)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(GetEventFilterCommand)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetEventFilterCommand)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(GetSpecificFilterParameters)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PDEBUG_SPECIFIC_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(SetSpecificFilterParameters)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_SPECIFIC_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetSpecificFilterArgument)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ArgumentSize
        ) PURE;
    STDMETHOD(SetSpecificFilterArgument)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Argument
        ) PURE;
    STDMETHOD(GetExceptionFilterParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Codes,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_EXCEPTION_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(SetExceptionFilterParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_EXCEPTION_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetExceptionFilterSecondCommand)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetExceptionFilterSecondCommand)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(WaitForEvent)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(GetLastEventInformation)(
        THIS_
        _Out_ PULONG Type,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId,
        _Out_writes_bytes_opt_(ExtraInformationSize) PVOID ExtraInformation,
        _In_ ULONG ExtraInformationSize,
        _Out_opt_ PULONG ExtraInformationUsed,
        _Out_writes_opt_(DescriptionSize) PSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG DescriptionUsed
        ) PURE;
    STDMETHOD(GetCurrentTimeDate)(
        THIS_
        _Out_ PULONG TimeDate
        ) PURE;
    STDMETHOD(GetCurrentSystemUpTime)(
        THIS_
        _Out_ PULONG UpTime
        ) PURE;
    STDMETHOD(GetDumpFormatFlags)(
        THIS_
        _Out_ PULONG FormatFlags
        ) PURE;
    STDMETHOD(GetNumberTextReplacements)(
        THIS_
        _Out_ PULONG NumRepl
        ) PURE;
    STDMETHOD(GetTextReplacement)(
        THIS_
        _In_opt_ PCSTR SrcText,
        _In_ ULONG Index,
        _Out_writes_opt_(SrcBufferSize) PSTR SrcBuffer,
        _In_ ULONG SrcBufferSize,
        _Out_opt_ PULONG SrcSize,
        _Out_writes_opt_(DstBufferSize) PSTR DstBuffer,
        _In_ ULONG DstBufferSize,
        _Out_opt_ PULONG DstSize
        ) PURE;
    STDMETHOD(SetTextReplacement)(
        THIS_
        _In_ PCSTR SrcText,
        _In_opt_ PCSTR DstText
        ) PURE;
    STDMETHOD(RemoveTextReplacements)(
        THIS
        ) PURE;
    STDMETHOD(OutputTextReplacements)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetAssemblyOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddAssemblyOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveAssemblyOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetAssemblyOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetExpressionSyntax)(
        THIS_
        _Out_ PULONG Flags
        ) PURE;
    STDMETHOD(SetExpressionSyntax)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(SetExpressionSyntaxByName)(
        THIS_
        _In_ PCSTR AbbrevName
        ) PURE;
    STDMETHOD(GetNumberExpressionSyntaxes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetExpressionSyntaxNames)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(FullNameBufferSize) PSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetNumberEvents)(
        THIS_
        _Out_ PULONG Events
        ) PURE;
    STDMETHOD(GetEventIndexDescription)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG Which,
        _In_opt_ PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DescSize
        ) PURE;
    STDMETHOD(GetCurrentEventIndex)(
        THIS_
        _Out_ PULONG Index
        ) PURE;
    STDMETHOD(SetNextEventIndex)(
        THIS_
        _In_ ULONG Relation,
        _In_ ULONG Value,
        _Out_ PULONG NextIndex
        ) PURE;
    STDMETHOD(GetLogFileWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PBOOL Append
        ) PURE;
    STDMETHOD(OpenLogFileWide)(
        THIS_
        _In_ PCWSTR File,
        _In_ BOOL Append
        ) PURE;
    STDMETHOD(InputWide)(
        THIS_
        _Out_writes_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InputSize
        ) PURE;
    STDMETHOD(ReturnInputWide)(
        THIS_
        _In_ PCWSTR Buffer
        ) PURE;
    STDMETHODV(OutputWide)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCWSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputVaListWide)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCWSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(ControlledOutputWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCWSTR Format,
        ...
        ) PURE;
    STDMETHOD(ControlledOutputVaListWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCWSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(OutputPromptWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCWSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputPromptVaListWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCWSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHOD(GetPromptTextWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(AssembleWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ PCWSTR Instr,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(DisassembleWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DisassemblySize,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(GetProcessorTypeNamesWide)(
        THIS_
        _In_ ULONG Type,
        _Out_writes_opt_(FullNameBufferSize) PWSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PWSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetTextMacroWide)(
        THIS_
        _In_ ULONG Slot,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MacroSize
        ) PURE;
    STDMETHOD(SetTextMacroWide)(
        THIS_
        _In_ ULONG Slot,
        _In_ PCWSTR Macro
        ) PURE;
    STDMETHOD(EvaluateWide)(
        THIS_
        _In_ PCWSTR Expression,
        _In_ ULONG DesiredType,
        _Out_ PDEBUG_VALUE Value,
        _Out_opt_ PULONG RemainderIndex
        ) PURE;
    STDMETHOD(ExecuteWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCWSTR Command,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(ExecuteCommandFileWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCWSTR CommandFile,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetBreakpointByIndex2)(
        THIS_
        _In_ ULONG Index,
        _Out_ PDEBUG_BREAKPOINT2* Bp
        ) PURE;
    STDMETHOD(GetBreakpointById2)(
        THIS_
        _In_ ULONG Id,
        _Out_ PDEBUG_BREAKPOINT2* Bp
        ) PURE;
    STDMETHOD(AddBreakpoint2)(
        THIS_
        _In_ ULONG Type,
        _In_ ULONG DesiredId,
        _Out_ PDEBUG_BREAKPOINT2* Bp
        ) PURE;
    STDMETHOD(RemoveBreakpoint2)(
        THIS_
        _In_ PDEBUG_BREAKPOINT2 Bp
        ) PURE;
    STDMETHOD(AddExtensionWide)(
        THIS_
        _In_ PCWSTR Path,
        _In_ ULONG Flags,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetExtensionByPathWide)(
        THIS_
        _In_ PCWSTR Path,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(CallExtensionWide)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCWSTR Function,
        _In_opt_ PCWSTR Arguments
        ) PURE;
    STDMETHOD(GetExtensionFunctionWide)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCWSTR FuncName,
        _Out_ FARPROC* Function
        ) PURE;
    STDMETHOD(GetEventFilterTextWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(GetEventFilterCommandWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetEventFilterCommandWide)(
        THIS_
        _In_ ULONG Index,
        _In_ PCWSTR Command
        ) PURE;
    STDMETHOD(GetSpecificFilterArgumentWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ArgumentSize
        ) PURE;
    STDMETHOD(SetSpecificFilterArgumentWide)(
        THIS_
        _In_ ULONG Index,
        _In_ PCWSTR Argument
        ) PURE;
    STDMETHOD(GetExceptionFilterSecondCommandWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetExceptionFilterSecondCommandWide)(
        THIS_
        _In_ ULONG Index,
        _In_ PCWSTR Command
        ) PURE;
    STDMETHOD(GetLastEventInformationWide)(
        THIS_
        _Out_ PULONG Type,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId,
        _Out_writes_bytes_opt_(ExtraInformationSize) PVOID ExtraInformation,
        _In_ ULONG ExtraInformationSize,
        _Out_opt_ PULONG ExtraInformationUsed,
        _Out_writes_opt_(DescriptionSize) PWSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG DescriptionUsed
        ) PURE;
    STDMETHOD(GetTextReplacementWide)(
        THIS_
        _In_opt_ PCWSTR SrcText,
        _In_ ULONG Index,
        _Out_writes_opt_(SrcBufferSize) PWSTR SrcBuffer,
        _In_ ULONG SrcBufferSize,
        _Out_opt_ PULONG SrcSize,
        _Out_writes_opt_(DstBufferSize) PWSTR DstBuffer,
        _In_ ULONG DstBufferSize,
        _Out_opt_ PULONG DstSize
        ) PURE;
    STDMETHOD(SetTextReplacementWide)(
        THIS_
        _In_ PCWSTR SrcText,
        _In_opt_ PCWSTR DstText
        ) PURE;
    STDMETHOD(SetExpressionSyntaxByNameWide)(
        THIS_
        _In_ PCWSTR AbbrevName
        ) PURE;
    STDMETHOD(GetExpressionSyntaxNamesWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(FullNameBufferSize) PWSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PWSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetEventIndexDescriptionWide)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG Which,
        _In_opt_ PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DescSize
        ) PURE;
    STDMETHOD(GetLogFile2)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PULONG Flags
        ) PURE;
    STDMETHOD(OpenLogFile2)(
        THIS_
        _In_ PCSTR File,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetLogFile2Wide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PULONG Flags
        ) PURE;
    STDMETHOD(OpenLogFile2Wide)(
        THIS_
        _In_ PCWSTR File,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetSystemVersionValues)(
        THIS_
        _Out_ PULONG PlatformId,
        _Out_ PULONG Win32Major,
        _Out_ PULONG Win32Minor,
        _Out_opt_ PULONG KdMajor,
        _Out_opt_ PULONG KdMinor
        ) PURE;
    STDMETHOD(GetSystemVersionString)(
        THIS_
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSystemVersionStringWide)(
        THIS_
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetContextStackTrace)(
        THIS_
        _In_reads_bytes_opt_(StartContextSize) PVOID StartContext,
        _In_ ULONG StartContextSize,
        _Out_writes_to_opt_(FramesSize,*FramesFilled) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _Out_writes_bytes_opt_(FrameContextsSize) PVOID FrameContexts,
        _In_ ULONG FrameContextsSize,
        _In_ ULONG FrameContextsEntrySize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(OutputContextStackTrace)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_(FramesSize) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _In_reads_bytes_(FrameContextsSize) PVOID FrameContexts,
        _In_ ULONG FrameContextsSize,
        _In_ ULONG FrameContextsEntrySize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetStoredEventInformation)(
        THIS_
        _Out_ PULONG Type,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId,
        _Out_writes_bytes_opt_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize,
        _Out_opt_ PULONG ContextUsed,
        _Out_writes_bytes_opt_(ExtraInformationSize) PVOID ExtraInformation,
        _In_ ULONG ExtraInformationSize,
        _Out_opt_ PULONG ExtraInformationUsed
        ) PURE;
    STDMETHOD(GetManagedStatus)(
        THIS_
        _Out_opt_ PULONG Flags,
        _In_ ULONG WhichString,
        _Out_writes_opt_(StringSize) PSTR String,
        _In_ ULONG StringSize,
        _Out_opt_ PULONG StringNeeded
        ) PURE;
    STDMETHOD(GetManagedStatusWide)(
        THIS_
        _Out_opt_ PULONG Flags,
        _In_ ULONG WhichString,
        _Out_writes_opt_(StringSize) PWSTR String,
        _In_ ULONG StringSize,
        _Out_opt_ PULONG StringNeeded
        ) PURE;
    STDMETHOD(ResetManagedStatus)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetStackTraceEx)(
        THIS_
        _In_ ULONG64 FrameOffset,
        _In_ ULONG64 StackOffset,
        _In_ ULONG64 InstructionOffset,
        _Out_writes_to_(FramesSize,*FramesFilled) PDEBUG_STACK_FRAME_EX Frames,
        _In_ ULONG FramesSize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(OutputStackTraceEx)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_opt_(FramesSize) PDEBUG_STACK_FRAME_EX Frames,
        _In_ ULONG FramesSize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetContextStackTraceEx)(
        THIS_
        _In_reads_bytes_opt_(StartContextSize) PVOID StartContext,
        _In_ ULONG StartContextSize,
        _Out_writes_to_opt_(FramesSize,*FramesFilled) PDEBUG_STACK_FRAME_EX Frames,
        _In_ ULONG FramesSize,
        _Out_writes_bytes_opt_(FrameContextsSize) PVOID FrameContexts,
        _In_ ULONG FrameContextsSize,
        _In_ ULONG FrameContextsEntrySize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(OutputContextStackTraceEx)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_(FramesSize) PDEBUG_STACK_FRAME_EX Frames,
        _In_ ULONG FramesSize,
        _In_reads_bytes_(FrameContextsSize) PVOID FrameContexts,
        _In_ ULONG FrameContextsSize,
        _In_ ULONG FrameContextsEntrySize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetBreakpointByGuid)(
        THIS_
        _In_ LPGUID Guid,
        _Out_ PDEBUG_BREAKPOINT3* Bp
        ) PURE;
    STDMETHOD(GetExecutionStatusEx)(
        THIS_
        _Out_ PULONG Status
        ) PURE;
    STDMETHOD(GetSynchronizationStatus)(
        THIS_
        _Out_ PULONG SendsAttempted,
        _Out_ PULONG SecondsSinceLastResponse
        ) PURE;
};
DECLARE_INTERFACE_(IDebugControl7, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetInterrupt)(
        THIS
        ) PURE;
    STDMETHOD(SetInterrupt)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetInterruptTimeout)(
        THIS_
        _Out_ PULONG Seconds
        ) PURE;
    STDMETHOD(SetInterruptTimeout)(
        THIS_
        _In_ ULONG Seconds
        ) PURE;
    STDMETHOD(GetLogFile)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PBOOL Append
        ) PURE;
    STDMETHOD(OpenLogFile)(
        THIS_
        _In_ PCSTR File,
        _In_ BOOL Append
        ) PURE;
    STDMETHOD(CloseLogFile)(
        THIS
        ) PURE;
    STDMETHOD(GetLogMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(SetLogMask)(
        THIS_
        _In_ ULONG Mask
        ) PURE;
    STDMETHOD(Input)(
        THIS_
        _Out_writes_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InputSize
        ) PURE;
    STDMETHOD(ReturnInput)(
        THIS_
        _In_ PCSTR Buffer
        ) PURE;
    STDMETHODV(Output)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputVaList)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(ControlledOutput)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(ControlledOutputVaList)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(OutputPrompt)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputPromptVaList)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHOD(GetPromptText)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(OutputCurrentState)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(OutputVersionInformation)(
        THIS_
        _In_ ULONG OutputControl
        ) PURE;
    STDMETHOD(GetNotifyEventHandle)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(SetNotifyEventHandle)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(Assemble)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ PCSTR Instr,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(Disassemble)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DisassemblySize,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(GetDisassembleEffectiveOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(OutputDisassembly)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(OutputDisassemblyLines)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG PreviousLines,
        _In_ ULONG TotalLines,
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_opt_ PULONG OffsetLine,
        _Out_opt_ PULONG64 StartOffset,
        _Out_opt_ PULONG64 EndOffset,
        _Out_writes_opt_(TotalLines) PULONG64 LineOffsets
        ) PURE;
    STDMETHOD(GetNearInstruction)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ LONG Delta,
        _Out_ PULONG64 NearOffset
        ) PURE;
    STDMETHOD(GetStackTrace)(
        THIS_
        _In_ ULONG64 FrameOffset,
        _In_ ULONG64 StackOffset,
        _In_ ULONG64 InstructionOffset,
        _Out_writes_to_(FramesSize,*FramesFilled) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(GetReturnOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(OutputStackTrace)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_opt_(FramesSize) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetDebuggeeType)(
        THIS_
        _Out_ PULONG Class,
        _Out_ PULONG Qualifier
        ) PURE;
    STDMETHOD(GetActualProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetExecutingProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(GetNumberPossibleExecutingProcessorTypes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetPossibleExecutingProcessorTypes)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PULONG Types
        ) PURE;
    STDMETHOD(GetNumberProcessors)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetSystemVersion)(
        THIS_
        _Out_ PULONG PlatformId,
        _Out_ PULONG Major,
        _Out_ PULONG Minor,
        _Out_writes_opt_(ServicePackStringSize) PSTR ServicePackString,
        _In_ ULONG ServicePackStringSize,
        _Out_opt_ PULONG ServicePackStringUsed,
        _Out_ PULONG ServicePackNumber,
        _Out_writes_opt_(BuildStringSize) PSTR BuildString,
        _In_ ULONG BuildStringSize,
        _Out_opt_ PULONG BuildStringUsed
        ) PURE;
    STDMETHOD(GetPageSize)(
        THIS_
        _Out_ PULONG Size
        ) PURE;
    STDMETHOD(IsPointer64Bit)(
        THIS
        ) PURE;
    STDMETHOD(ReadBugCheckData)(
        THIS_
        _Out_ PULONG Code,
        _Out_ PULONG64 Arg1,
        _Out_ PULONG64 Arg2,
        _Out_ PULONG64 Arg3,
        _Out_ PULONG64 Arg4
        ) PURE;
    STDMETHOD(GetNumberSupportedProcessorTypes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetSupportedProcessorTypes)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PULONG Types
        ) PURE;
    STDMETHOD(GetProcessorTypeNames)(
        THIS_
        _In_ ULONG Type,
        _Out_writes_opt_(FullNameBufferSize) PSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetEffectiveProcessorType)(
        THIS_
        _Out_ PULONG Type
        ) PURE;
    STDMETHOD(SetEffectiveProcessorType)(
        THIS_
        _In_ ULONG Type
        ) PURE;
    STDMETHOD(GetExecutionStatus)(
        THIS_
        _Out_ PULONG Status
        ) PURE;
    STDMETHOD(SetExecutionStatus)(
        THIS_
        _In_ ULONG Status
        ) PURE;
    STDMETHOD(GetCodeLevel)(
        THIS_
        _Out_ PULONG Level
        ) PURE;
    STDMETHOD(SetCodeLevel)(
        THIS_
        _In_ ULONG Level
        ) PURE;
    STDMETHOD(GetEngineOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetEngineOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetSystemErrorControl)(
        THIS_
        _Out_ PULONG OutputLevel,
        _Out_ PULONG BreakLevel
        ) PURE;
    STDMETHOD(SetSystemErrorControl)(
        THIS_
        _In_ ULONG OutputLevel,
        _In_ ULONG BreakLevel
        ) PURE;
    STDMETHOD(GetTextMacro)(
        THIS_
        _In_ ULONG Slot,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MacroSize
        ) PURE;
    STDMETHOD(SetTextMacro)(
        THIS_
        _In_ ULONG Slot,
        _In_ PCSTR Macro
        ) PURE;
    STDMETHOD(GetRadix)(
        THIS_
        _Out_ PULONG Radix
        ) PURE;
    STDMETHOD(SetRadix)(
        THIS_
        _In_ ULONG Radix
        ) PURE;
    STDMETHOD(Evaluate)(
        THIS_
        _In_ PCSTR Expression,
        _In_ ULONG DesiredType,
        _Out_ PDEBUG_VALUE Value,
        _Out_opt_ PULONG RemainderIndex
        ) PURE;
    STDMETHOD(CoerceValue)(
        THIS_
        _In_ PDEBUG_VALUE In,
        _In_ ULONG OutType,
        _Out_ PDEBUG_VALUE Out
        ) PURE;
    STDMETHOD(CoerceValues)(
        THIS_
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_VALUE In,
        _In_reads_(Count) PULONG OutTypes,
        _Out_writes_(Count) PDEBUG_VALUE Out
        ) PURE;
    STDMETHOD(Execute)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR Command,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(ExecuteCommandFile)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCSTR CommandFile,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetNumberBreakpoints)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetBreakpointByIndex)(
        THIS_
        _In_ ULONG Index,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(GetBreakpointById)(
        THIS_
        _In_ ULONG Id,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(GetBreakpointParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Ids,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_BREAKPOINT_PARAMETERS Params
        ) PURE;
    STDMETHOD(AddBreakpoint)(
        THIS_
        _In_ ULONG Type,
        _In_ ULONG DesiredId,
        _Out_ PDEBUG_BREAKPOINT* Bp
        ) PURE;
    STDMETHOD(RemoveBreakpoint)(
        THIS_
        _In_ PDEBUG_BREAKPOINT Bp
        ) PURE;
    STDMETHOD(AddExtension)(
        THIS_
        _In_ PCSTR Path,
        _In_ ULONG Flags,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(RemoveExtension)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(GetExtensionByPath)(
        THIS_
        _In_ PCSTR Path,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(CallExtension)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCSTR Function,
        _In_opt_ PCSTR Arguments
        ) PURE;
    STDMETHOD(GetExtensionFunction)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCSTR FuncName,
        _Out_ FARPROC* Function
        ) PURE;
    STDMETHOD(GetWindbgExtensionApis32)(
        THIS_
        _Inout_ PWINDBG_EXTENSION_APIS32 Api
        ) PURE;
    STDMETHOD(GetWindbgExtensionApis64)(
        THIS_
        _Inout_ PWINDBG_EXTENSION_APIS64 Api
        ) PURE;
    STDMETHOD(GetNumberEventFilters)(
        THIS_
        _Out_ PULONG SpecificEvents,
        _Out_ PULONG SpecificExceptions,
        _Out_ PULONG ArbitraryExceptions
        ) PURE;
    STDMETHOD(GetEventFilterText)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(GetEventFilterCommand)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetEventFilterCommand)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(GetSpecificFilterParameters)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PDEBUG_SPECIFIC_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(SetSpecificFilterParameters)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_SPECIFIC_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetSpecificFilterArgument)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ArgumentSize
        ) PURE;
    STDMETHOD(SetSpecificFilterArgument)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Argument
        ) PURE;
    STDMETHOD(GetExceptionFilterParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Codes,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_EXCEPTION_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(SetExceptionFilterParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_(Count) PDEBUG_EXCEPTION_FILTER_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetExceptionFilterSecondCommand)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetExceptionFilterSecondCommand)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Command
        ) PURE;
    STDMETHOD(WaitForEvent)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG Timeout
        ) PURE;
    STDMETHOD(GetLastEventInformation)(
        THIS_
        _Out_ PULONG Type,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId,
        _Out_writes_bytes_opt_(ExtraInformationSize) PVOID ExtraInformation,
        _In_ ULONG ExtraInformationSize,
        _Out_opt_ PULONG ExtraInformationUsed,
        _Out_writes_opt_(DescriptionSize) PSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG DescriptionUsed
        ) PURE;
    STDMETHOD(GetCurrentTimeDate)(
        THIS_
        _Out_ PULONG TimeDate
        ) PURE;
    STDMETHOD(GetCurrentSystemUpTime)(
        THIS_
        _Out_ PULONG UpTime
        ) PURE;
    STDMETHOD(GetDumpFormatFlags)(
        THIS_
        _Out_ PULONG FormatFlags
        ) PURE;
    STDMETHOD(GetNumberTextReplacements)(
        THIS_
        _Out_ PULONG NumRepl
        ) PURE;
    STDMETHOD(GetTextReplacement)(
        THIS_
        _In_opt_ PCSTR SrcText,
        _In_ ULONG Index,
        _Out_writes_opt_(SrcBufferSize) PSTR SrcBuffer,
        _In_ ULONG SrcBufferSize,
        _Out_opt_ PULONG SrcSize,
        _Out_writes_opt_(DstBufferSize) PSTR DstBuffer,
        _In_ ULONG DstBufferSize,
        _Out_opt_ PULONG DstSize
        ) PURE;
    STDMETHOD(SetTextReplacement)(
        THIS_
        _In_ PCSTR SrcText,
        _In_opt_ PCSTR DstText
        ) PURE;
    STDMETHOD(RemoveTextReplacements)(
        THIS
        ) PURE;
    STDMETHOD(OutputTextReplacements)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetAssemblyOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddAssemblyOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveAssemblyOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetAssemblyOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetExpressionSyntax)(
        THIS_
        _Out_ PULONG Flags
        ) PURE;
    STDMETHOD(SetExpressionSyntax)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(SetExpressionSyntaxByName)(
        THIS_
        _In_ PCSTR AbbrevName
        ) PURE;
    STDMETHOD(GetNumberExpressionSyntaxes)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetExpressionSyntaxNames)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(FullNameBufferSize) PSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetNumberEvents)(
        THIS_
        _Out_ PULONG Events
        ) PURE;
    STDMETHOD(GetEventIndexDescription)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG Which,
        _In_opt_ PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DescSize
        ) PURE;
    STDMETHOD(GetCurrentEventIndex)(
        THIS_
        _Out_ PULONG Index
        ) PURE;
    STDMETHOD(SetNextEventIndex)(
        THIS_
        _In_ ULONG Relation,
        _In_ ULONG Value,
        _Out_ PULONG NextIndex
        ) PURE;
    STDMETHOD(GetLogFileWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PBOOL Append
        ) PURE;
    STDMETHOD(OpenLogFileWide)(
        THIS_
        _In_ PCWSTR File,
        _In_ BOOL Append
        ) PURE;
    STDMETHOD(InputWide)(
        THIS_
        _Out_writes_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InputSize
        ) PURE;
    STDMETHOD(ReturnInputWide)(
        THIS_
        _In_ PCWSTR Buffer
        ) PURE;
    STDMETHODV(OutputWide)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCWSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputVaListWide)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCWSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(ControlledOutputWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCWSTR Format,
        ...
        ) PURE;
    STDMETHOD(ControlledOutputVaListWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Mask,
        _In_ PCWSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHODV(OutputPromptWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCWSTR Format,
        ...
        ) PURE;
    STDMETHOD(OutputPromptVaListWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_opt_ PCWSTR Format,
        _In_ va_list Args
        ) PURE;
    STDMETHOD(GetPromptTextWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(AssembleWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ PCWSTR Instr,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(DisassembleWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DisassemblySize,
        _Out_ PULONG64 EndOffset
        ) PURE;
    STDMETHOD(GetProcessorTypeNamesWide)(
        THIS_
        _In_ ULONG Type,
        _Out_writes_opt_(FullNameBufferSize) PWSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PWSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetTextMacroWide)(
        THIS_
        _In_ ULONG Slot,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MacroSize
        ) PURE;
    STDMETHOD(SetTextMacroWide)(
        THIS_
        _In_ ULONG Slot,
        _In_ PCWSTR Macro
        ) PURE;
    STDMETHOD(EvaluateWide)(
        THIS_
        _In_ PCWSTR Expression,
        _In_ ULONG DesiredType,
        _Out_ PDEBUG_VALUE Value,
        _Out_opt_ PULONG RemainderIndex
        ) PURE;
    STDMETHOD(ExecuteWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCWSTR Command,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(ExecuteCommandFileWide)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ PCWSTR CommandFile,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetBreakpointByIndex2)(
        THIS_
        _In_ ULONG Index,
        _Out_ PDEBUG_BREAKPOINT2* Bp
        ) PURE;
    STDMETHOD(GetBreakpointById2)(
        THIS_
        _In_ ULONG Id,
        _Out_ PDEBUG_BREAKPOINT2* Bp
        ) PURE;
    STDMETHOD(AddBreakpoint2)(
        THIS_
        _In_ ULONG Type,
        _In_ ULONG DesiredId,
        _Out_ PDEBUG_BREAKPOINT2* Bp
        ) PURE;
    STDMETHOD(RemoveBreakpoint2)(
        THIS_
        _In_ PDEBUG_BREAKPOINT2 Bp
        ) PURE;
    STDMETHOD(AddExtensionWide)(
        THIS_
        _In_ PCWSTR Path,
        _In_ ULONG Flags,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetExtensionByPathWide)(
        THIS_
        _In_ PCWSTR Path,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(CallExtensionWide)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCWSTR Function,
        _In_opt_ PCWSTR Arguments
        ) PURE;
    STDMETHOD(GetExtensionFunctionWide)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ PCWSTR FuncName,
        _Out_ FARPROC* Function
        ) PURE;
    STDMETHOD(GetEventFilterTextWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TextSize
        ) PURE;
    STDMETHOD(GetEventFilterCommandWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetEventFilterCommandWide)(
        THIS_
        _In_ ULONG Index,
        _In_ PCWSTR Command
        ) PURE;
    STDMETHOD(GetSpecificFilterArgumentWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ArgumentSize
        ) PURE;
    STDMETHOD(SetSpecificFilterArgumentWide)(
        THIS_
        _In_ ULONG Index,
        _In_ PCWSTR Argument
        ) PURE;
    STDMETHOD(GetExceptionFilterSecondCommandWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG CommandSize
        ) PURE;
    STDMETHOD(SetExceptionFilterSecondCommandWide)(
        THIS_
        _In_ ULONG Index,
        _In_ PCWSTR Command
        ) PURE;
    STDMETHOD(GetLastEventInformationWide)(
        THIS_
        _Out_ PULONG Type,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId,
        _Out_writes_bytes_opt_(ExtraInformationSize) PVOID ExtraInformation,
        _In_ ULONG ExtraInformationSize,
        _Out_opt_ PULONG ExtraInformationUsed,
        _Out_writes_opt_(DescriptionSize) PWSTR Description,
        _In_ ULONG DescriptionSize,
        _Out_opt_ PULONG DescriptionUsed
        ) PURE;
    STDMETHOD(GetTextReplacementWide)(
        THIS_
        _In_opt_ PCWSTR SrcText,
        _In_ ULONG Index,
        _Out_writes_opt_(SrcBufferSize) PWSTR SrcBuffer,
        _In_ ULONG SrcBufferSize,
        _Out_opt_ PULONG SrcSize,
        _Out_writes_opt_(DstBufferSize) PWSTR DstBuffer,
        _In_ ULONG DstBufferSize,
        _Out_opt_ PULONG DstSize
        ) PURE;
    STDMETHOD(SetTextReplacementWide)(
        THIS_
        _In_ PCWSTR SrcText,
        _In_opt_ PCWSTR DstText
        ) PURE;
    STDMETHOD(SetExpressionSyntaxByNameWide)(
        THIS_
        _In_ PCWSTR AbbrevName
        ) PURE;
    STDMETHOD(GetExpressionSyntaxNamesWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(FullNameBufferSize) PWSTR FullNameBuffer,
        _In_ ULONG FullNameBufferSize,
        _Out_opt_ PULONG FullNameSize,
        _Out_writes_opt_(AbbrevNameBufferSize) PWSTR AbbrevNameBuffer,
        _In_ ULONG AbbrevNameBufferSize,
        _Out_opt_ PULONG AbbrevNameSize
        ) PURE;
    STDMETHOD(GetEventIndexDescriptionWide)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG Which,
        _In_opt_ PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DescSize
        ) PURE;
    STDMETHOD(GetLogFile2)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PULONG Flags
        ) PURE;
    STDMETHOD(OpenLogFile2)(
        THIS_
        _In_ PCSTR File,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetLogFile2Wide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_ PULONG Flags
        ) PURE;
    STDMETHOD(OpenLogFile2Wide)(
        THIS_
        _In_ PCWSTR File,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetSystemVersionValues)(
        THIS_
        _Out_ PULONG PlatformId,
        _Out_ PULONG Win32Major,
        _Out_ PULONG Win32Minor,
        _Out_opt_ PULONG KdMajor,
        _Out_opt_ PULONG KdMinor
        ) PURE;
    STDMETHOD(GetSystemVersionString)(
        THIS_
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSystemVersionStringWide)(
        THIS_
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetContextStackTrace)(
        THIS_
        _In_reads_bytes_opt_(StartContextSize) PVOID StartContext,
        _In_ ULONG StartContextSize,
        _Out_writes_to_opt_(FramesSize,*FramesFilled) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _Out_writes_bytes_opt_(FrameContextsSize) PVOID FrameContexts,
        _In_ ULONG FrameContextsSize,
        _In_ ULONG FrameContextsEntrySize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(OutputContextStackTrace)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_(FramesSize) PDEBUG_STACK_FRAME Frames,
        _In_ ULONG FramesSize,
        _In_reads_bytes_(FrameContextsSize) PVOID FrameContexts,
        _In_ ULONG FrameContextsSize,
        _In_ ULONG FrameContextsEntrySize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetStoredEventInformation)(
        THIS_
        _Out_ PULONG Type,
        _Out_ PULONG ProcessId,
        _Out_ PULONG ThreadId,
        _Out_writes_bytes_opt_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize,
        _Out_opt_ PULONG ContextUsed,
        _Out_writes_bytes_opt_(ExtraInformationSize) PVOID ExtraInformation,
        _In_ ULONG ExtraInformationSize,
        _Out_opt_ PULONG ExtraInformationUsed
        ) PURE;
    STDMETHOD(GetManagedStatus)(
        THIS_
        _Out_opt_ PULONG Flags,
        _In_ ULONG WhichString,
        _Out_writes_opt_(StringSize) PSTR String,
        _In_ ULONG StringSize,
        _Out_opt_ PULONG StringNeeded
        ) PURE;
    STDMETHOD(GetManagedStatusWide)(
        THIS_
        _Out_opt_ PULONG Flags,
        _In_ ULONG WhichString,
        _Out_writes_opt_(StringSize) PWSTR String,
        _In_ ULONG StringSize,
        _Out_opt_ PULONG StringNeeded
        ) PURE;
    STDMETHOD(ResetManagedStatus)(
        THIS_
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetStackTraceEx)(
        THIS_
        _In_ ULONG64 FrameOffset,
        _In_ ULONG64 StackOffset,
        _In_ ULONG64 InstructionOffset,
        _Out_writes_to_(FramesSize,*FramesFilled) PDEBUG_STACK_FRAME_EX Frames,
        _In_ ULONG FramesSize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(OutputStackTraceEx)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_opt_(FramesSize) PDEBUG_STACK_FRAME_EX Frames,
        _In_ ULONG FramesSize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetContextStackTraceEx)(
        THIS_
        _In_reads_bytes_opt_(StartContextSize) PVOID StartContext,
        _In_ ULONG StartContextSize,
        _Out_writes_to_opt_(FramesSize,*FramesFilled) PDEBUG_STACK_FRAME_EX Frames,
        _In_ ULONG FramesSize,
        _Out_writes_bytes_opt_(FrameContextsSize) PVOID FrameContexts,
        _In_ ULONG FrameContextsSize,
        _In_ ULONG FrameContextsEntrySize,
        _Out_opt_ PULONG FramesFilled
        ) PURE;
    STDMETHOD(OutputContextStackTraceEx)(
        THIS_
        _In_ ULONG OutputControl,
        _In_reads_(FramesSize) PDEBUG_STACK_FRAME_EX Frames,
        _In_ ULONG FramesSize,
        _In_reads_bytes_(FrameContextsSize) PVOID FrameContexts,
        _In_ ULONG FrameContextsSize,
        _In_ ULONG FrameContextsEntrySize,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetBreakpointByGuid)(
        THIS_
        _In_ LPGUID Guid,
        _Out_ PDEBUG_BREAKPOINT3* Bp
        ) PURE;
    STDMETHOD(GetExecutionStatusEx)(
        THIS_
        _Out_ PULONG Status
        ) PURE;
    STDMETHOD(GetSynchronizationStatus)(
        THIS_
        _Out_ PULONG SendsAttempted,
        _Out_ PULONG SecondsSinceLastResponse
        ) PURE;
    STDMETHOD(GetDebuggeeType2)(
        THIS_
        _In_ ULONG Flags,
        _Out_ PULONG Class,
        _Out_ PULONG Qualifier
        ) PURE;
};
typedef struct _DEBUG_PROCESSOR_IDENTIFICATION_ALPHA
{
    ULONG Type;
    ULONG Revision;
} DEBUG_PROCESSOR_IDENTIFICATION_ALPHA, *PDEBUG_PROCESSOR_IDENTIFICATION_ALPHA;
typedef struct _DEBUG_PROCESSOR_IDENTIFICATION_AMD64
{
    ULONG Family;
    ULONG Model;
    ULONG Stepping;
    CHAR VendorString[16];
} DEBUG_PROCESSOR_IDENTIFICATION_AMD64, *PDEBUG_PROCESSOR_IDENTIFICATION_AMD64;
typedef struct _DEBUG_PROCESSOR_IDENTIFICATION_IA64
{
    ULONG Model;
    ULONG Revision;
    ULONG Family;
    ULONG ArchRev;
    CHAR VendorString[16];
} DEBUG_PROCESSOR_IDENTIFICATION_IA64, *PDEBUG_PROCESSOR_IDENTIFICATION_IA64;
typedef struct _DEBUG_PROCESSOR_IDENTIFICATION_X86
{
    ULONG Family;
    ULONG Model;
    ULONG Stepping;
    CHAR VendorString[16];
} DEBUG_PROCESSOR_IDENTIFICATION_X86, *PDEBUG_PROCESSOR_IDENTIFICATION_X86;
typedef struct _DEBUG_PROCESSOR_IDENTIFICATION_ARM
{
    ULONG Model;
    ULONG Revision;
    CHAR VendorString[16];
} DEBUG_PROCESSOR_IDENTIFICATION_ARM, *PDEBUG_PROCESSOR_IDENTIFICATION_ARM;
typedef struct _DEBUG_PROCESSOR_IDENTIFICATION_ARM64
{
    ULONG Model;
    ULONG Revision;
    CHAR VendorString[16];
} DEBUG_PROCESSOR_IDENTIFICATION_ARM64, *PDEBUG_PROCESSOR_IDENTIFICATION_ARM64;
typedef union _DEBUG_PROCESSOR_IDENTIFICATION_ALL
{
    DEBUG_PROCESSOR_IDENTIFICATION_ALPHA Alpha;
    DEBUG_PROCESSOR_IDENTIFICATION_AMD64 Amd64;
    DEBUG_PROCESSOR_IDENTIFICATION_IA64 Ia64;
    DEBUG_PROCESSOR_IDENTIFICATION_X86 X86;
    DEBUG_PROCESSOR_IDENTIFICATION_ARM Arm;
    DEBUG_PROCESSOR_IDENTIFICATION_ARM64 Arm64;
} DEBUG_PROCESSOR_IDENTIFICATION_ALL, *PDEBUG_PROCESSOR_IDENTIFICATION_ALL;
DECLARE_INTERFACE_(IDebugDataSpaces, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(ReadVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(SearchVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Length,
        _In_reads_bytes_(PatternSize) PVOID Pattern,
        _In_ ULONG PatternSize,
        _In_ ULONG PatternGranularity,
        _Out_ PULONG64 MatchOffset
        ) PURE;
    STDMETHOD(ReadVirtualUncached)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteVirtualUncached)(
        THIS_
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(ReadPointersVirtual)(
        THIS_
        _In_ ULONG Count,
        _In_ ULONG64 Offset,
        _Out_writes_(Count) PULONG64 Ptrs
        ) PURE;
    STDMETHOD(WritePointersVirtual)(
        THIS_
        _In_ ULONG Count,
        _In_ ULONG64 Offset,
        _In_reads_(Count) PULONG64 Ptrs
        ) PURE;
    STDMETHOD(ReadPhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WritePhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(ReadControl)(
        THIS_
        _In_ ULONG Processor,
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteControl)(
        THIS_
        _In_ ULONG Processor,
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(ReadIo)(
        THIS_
        _In_ ULONG InterfaceType,
        _In_ ULONG BusNumber,
        _In_ ULONG AddressSpace,
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteIo)(
        THIS_
        _In_ ULONG InterfaceType,
        _In_ ULONG BusNumber,
        _In_ ULONG AddressSpace,
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(ReadMsr)(
        THIS_
        _In_ ULONG Msr,
        _Out_ PULONG64 Value
        ) PURE;
    STDMETHOD(WriteMsr)(
        THIS_
        _In_ ULONG Msr,
        _In_ ULONG64 Value
        ) PURE;
    STDMETHOD(ReadBusData)(
        THIS_
        _In_ ULONG BusDataType,
        _In_ ULONG BusNumber,
        _In_ ULONG SlotNumber,
        _In_ ULONG Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteBusData)(
        THIS_
        _In_ ULONG BusDataType,
        _In_ ULONG BusNumber,
        _In_ ULONG SlotNumber,
        _In_ ULONG Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(CheckLowMemory)(
        THIS
        ) PURE;
    STDMETHOD(ReadDebuggerData)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DataSize
        ) PURE;
    STDMETHOD(ReadProcessorSystemData)(
        THIS_
        _In_ ULONG Processor,
        _In_ ULONG Index,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DataSize
        ) PURE;
};
typedef struct _DEBUG_HANDLE_DATA_BASIC
{
    ULONG TypeNameSize;
    ULONG ObjectNameSize;
    ULONG Attributes;
    ULONG GrantedAccess;
    ULONG HandleCount;
    ULONG PointerCount;
} DEBUG_HANDLE_DATA_BASIC, *PDEBUG_HANDLE_DATA_BASIC;
DECLARE_INTERFACE_(IDebugDataSpaces2, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(ReadVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(SearchVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Length,
        _In_reads_bytes_(PatternSize) PVOID Pattern,
        _In_ ULONG PatternSize,
        _In_ ULONG PatternGranularity,
        _Out_ PULONG64 MatchOffset
        ) PURE;
    STDMETHOD(ReadVirtualUncached)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteVirtualUncached)(
        THIS_
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(ReadPointersVirtual)(
        THIS_
        _In_ ULONG Count,
        _In_ ULONG64 Offset,
        _Out_writes_(Count) PULONG64 Ptrs
        ) PURE;
    STDMETHOD(WritePointersVirtual)(
        THIS_
        _In_ ULONG Count,
        _In_ ULONG64 Offset,
        _In_reads_(Count) PULONG64 Ptrs
        ) PURE;
    STDMETHOD(ReadPhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WritePhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(ReadControl)(
        THIS_
        _In_ ULONG Processor,
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteControl)(
        THIS_
        _In_ ULONG Processor,
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(ReadIo)(
        THIS_
        _In_ ULONG InterfaceType,
        _In_ ULONG BusNumber,
        _In_ ULONG AddressSpace,
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteIo)(
        THIS_
        _In_ ULONG InterfaceType,
        _In_ ULONG BusNumber,
        _In_ ULONG AddressSpace,
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(ReadMsr)(
        THIS_
        _In_ ULONG Msr,
        _Out_ PULONG64 Value
        ) PURE;
    STDMETHOD(WriteMsr)(
        THIS_
        _In_ ULONG Msr,
        _In_ ULONG64 Value
        ) PURE;
    STDMETHOD(ReadBusData)(
        THIS_
        _In_ ULONG BusDataType,
        _In_ ULONG BusNumber,
        _In_ ULONG SlotNumber,
        _In_ ULONG Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteBusData)(
        THIS_
        _In_ ULONG BusDataType,
        _In_ ULONG BusNumber,
        _In_ ULONG SlotNumber,
        _In_ ULONG Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(CheckLowMemory)(
        THIS
        ) PURE;
    STDMETHOD(ReadDebuggerData)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DataSize
        ) PURE;
    STDMETHOD(ReadProcessorSystemData)(
        THIS_
        _In_ ULONG Processor,
        _In_ ULONG Index,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DataSize
        ) PURE;
    STDMETHOD(VirtualToPhysical)(
        THIS_
        _In_ ULONG64 Virtual,
        _Out_ PULONG64 Physical
        ) PURE;
    STDMETHOD(GetVirtualTranslationPhysicalOffsets)(
        THIS_
        _In_ ULONG64 Virtual,
        _Out_writes_opt_(OffsetsSize) PULONG64 Offsets,
        _In_ ULONG OffsetsSize,
        _Out_opt_ PULONG Levels
        ) PURE;
    STDMETHOD(ReadHandleData)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ ULONG DataType,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DataSize
        ) PURE;
    STDMETHOD(FillVirtual)(
        THIS_
        _In_ ULONG64 Start,
        _In_ ULONG Size,
        _In_reads_bytes_(PatternSize) PVOID Pattern,
        _In_ ULONG PatternSize,
        _Out_opt_ PULONG Filled
        ) PURE;
    STDMETHOD(FillPhysical)(
        THIS_
        _In_ ULONG64 Start,
        _In_ ULONG Size,
        _In_reads_bytes_(PatternSize) PVOID Pattern,
        _In_ ULONG PatternSize,
        _Out_opt_ PULONG Filled
        ) PURE;
    STDMETHOD(QueryVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PMEMORY_BASIC_INFORMATION64 Info
        ) PURE;
};
DECLARE_INTERFACE_(IDebugDataSpaces3, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(ReadVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(SearchVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Length,
        _In_reads_bytes_(PatternSize) PVOID Pattern,
        _In_ ULONG PatternSize,
        _In_ ULONG PatternGranularity,
        _Out_ PULONG64 MatchOffset
        ) PURE;
    STDMETHOD(ReadVirtualUncached)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteVirtualUncached)(
        THIS_
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(ReadPointersVirtual)(
        THIS_
        _In_ ULONG Count,
        _In_ ULONG64 Offset,
        _Out_writes_(Count) PULONG64 Ptrs
        ) PURE;
    STDMETHOD(WritePointersVirtual)(
        THIS_
        _In_ ULONG Count,
        _In_ ULONG64 Offset,
        _In_reads_(Count) PULONG64 Ptrs
        ) PURE;
    STDMETHOD(ReadPhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WritePhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(ReadControl)(
        THIS_
        _In_ ULONG Processor,
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteControl)(
        THIS_
        _In_ ULONG Processor,
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(ReadIo)(
        THIS_
        _In_ ULONG InterfaceType,
        _In_ ULONG BusNumber,
        _In_ ULONG AddressSpace,
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteIo)(
        THIS_
        _In_ ULONG InterfaceType,
        _In_ ULONG BusNumber,
        _In_ ULONG AddressSpace,
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(ReadMsr)(
        THIS_
        _In_ ULONG Msr,
        _Out_ PULONG64 Value
        ) PURE;
    STDMETHOD(WriteMsr)(
        THIS_
        _In_ ULONG Msr,
        _In_ ULONG64 Value
        ) PURE;
    STDMETHOD(ReadBusData)(
        THIS_
        _In_ ULONG BusDataType,
        _In_ ULONG BusNumber,
        _In_ ULONG SlotNumber,
        _In_ ULONG Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteBusData)(
        THIS_
        _In_ ULONG BusDataType,
        _In_ ULONG BusNumber,
        _In_ ULONG SlotNumber,
        _In_ ULONG Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(CheckLowMemory)(
        THIS
        ) PURE;
    STDMETHOD(ReadDebuggerData)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DataSize
        ) PURE;
    STDMETHOD(ReadProcessorSystemData)(
        THIS_
        _In_ ULONG Processor,
        _In_ ULONG Index,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DataSize
        ) PURE;
    STDMETHOD(VirtualToPhysical)(
        THIS_
        _In_ ULONG64 Virtual,
        _Out_ PULONG64 Physical
        ) PURE;
    STDMETHOD(GetVirtualTranslationPhysicalOffsets)(
        THIS_
        _In_ ULONG64 Virtual,
        _Out_writes_opt_(OffsetsSize) PULONG64 Offsets,
        _In_ ULONG OffsetsSize,
        _Out_opt_ PULONG Levels
        ) PURE;
    STDMETHOD(ReadHandleData)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ ULONG DataType,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DataSize
        ) PURE;
    STDMETHOD(FillVirtual)(
        THIS_
        _In_ ULONG64 Start,
        _In_ ULONG Size,
        _In_reads_bytes_(PatternSize) PVOID Pattern,
        _In_ ULONG PatternSize,
        _Out_opt_ PULONG Filled
        ) PURE;
    STDMETHOD(FillPhysical)(
        THIS_
        _In_ ULONG64 Start,
        _In_ ULONG Size,
        _In_reads_bytes_(PatternSize) PVOID Pattern,
        _In_ ULONG PatternSize,
        _Out_opt_ PULONG Filled
        ) PURE;
    STDMETHOD(QueryVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PMEMORY_BASIC_INFORMATION64 Info
        ) PURE;
    STDMETHOD(ReadImageNtHeaders)(
        THIS_
        _In_ ULONG64 ImageBase,
        _Out_ PIMAGE_NT_HEADERS64 Headers
        ) PURE;
    STDMETHOD(ReadTagged)(
        THIS_
        _In_ LPGUID Tag,
        _In_ ULONG Offset,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TotalSize
        ) PURE;
    STDMETHOD(StartEnumTagged)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetNextTagged)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_ LPGUID Tag,
        _Out_ PULONG Size
        ) PURE;
    STDMETHOD(EndEnumTagged)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
};
DECLARE_INTERFACE_(IDebugDataSpaces4, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(ReadVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(SearchVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Length,
        _In_reads_bytes_(PatternSize) PVOID Pattern,
        _In_ ULONG PatternSize,
        _In_ ULONG PatternGranularity,
        _Out_ PULONG64 MatchOffset
        ) PURE;
    STDMETHOD(ReadVirtualUncached)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteVirtualUncached)(
        THIS_
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(ReadPointersVirtual)(
        THIS_
        _In_ ULONG Count,
        _In_ ULONG64 Offset,
        _Out_writes_(Count) PULONG64 Ptrs
        ) PURE;
    STDMETHOD(WritePointersVirtual)(
        THIS_
        _In_ ULONG Count,
        _In_ ULONG64 Offset,
        _In_reads_(Count) PULONG64 Ptrs
        ) PURE;
    STDMETHOD(ReadPhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WritePhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(ReadControl)(
        THIS_
        _In_ ULONG Processor,
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteControl)(
        THIS_
        _In_ ULONG Processor,
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(ReadIo)(
        THIS_
        _In_ ULONG InterfaceType,
        _In_ ULONG BusNumber,
        _In_ ULONG AddressSpace,
        _In_ ULONG64 Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteIo)(
        THIS_
        _In_ ULONG InterfaceType,
        _In_ ULONG BusNumber,
        _In_ ULONG AddressSpace,
        _In_ ULONG64 Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(ReadMsr)(
        THIS_
        _In_ ULONG Msr,
        _Out_ PULONG64 Value
        ) PURE;
    STDMETHOD(WriteMsr)(
        THIS_
        _In_ ULONG Msr,
        _In_ ULONG64 Value
        ) PURE;
    STDMETHOD(ReadBusData)(
        THIS_
        _In_ ULONG BusDataType,
        _In_ ULONG BusNumber,
        _In_ ULONG SlotNumber,
        _In_ ULONG Offset,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteBusData)(
        THIS_
        _In_ ULONG BusDataType,
        _In_ ULONG BusNumber,
        _In_ ULONG SlotNumber,
        _In_ ULONG Offset,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(CheckLowMemory)(
        THIS
        ) PURE;
    STDMETHOD(ReadDebuggerData)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DataSize
        ) PURE;
    STDMETHOD(ReadProcessorSystemData)(
        THIS_
        _In_ ULONG Processor,
        _In_ ULONG Index,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DataSize
        ) PURE;
    STDMETHOD(VirtualToPhysical)(
        THIS_
        _In_ ULONG64 Virtual,
        _Out_ PULONG64 Physical
        ) PURE;
    STDMETHOD(GetVirtualTranslationPhysicalOffsets)(
        THIS_
        _In_ ULONG64 Virtual,
        _Out_writes_opt_(OffsetsSize) PULONG64 Offsets,
        _In_ ULONG OffsetsSize,
        _Out_opt_ PULONG Levels
        ) PURE;
    STDMETHOD(ReadHandleData)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ ULONG DataType,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG DataSize
        ) PURE;
    STDMETHOD(FillVirtual)(
        THIS_
        _In_ ULONG64 Start,
        _In_ ULONG Size,
        _In_reads_bytes_(PatternSize) PVOID Pattern,
        _In_ ULONG PatternSize,
        _Out_opt_ PULONG Filled
        ) PURE;
    STDMETHOD(FillPhysical)(
        THIS_
        _In_ ULONG64 Start,
        _In_ ULONG Size,
        _In_reads_bytes_(PatternSize) PVOID Pattern,
        _In_ ULONG PatternSize,
        _Out_opt_ PULONG Filled
        ) PURE;
    STDMETHOD(QueryVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PMEMORY_BASIC_INFORMATION64 Info
        ) PURE;
    STDMETHOD(ReadImageNtHeaders)(
        THIS_
        _In_ ULONG64 ImageBase,
        _Out_ PIMAGE_NT_HEADERS64 Headers
        ) PURE;
    STDMETHOD(ReadTagged)(
        THIS_
        _In_ LPGUID Tag,
        _In_ ULONG Offset,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG TotalSize
        ) PURE;
    STDMETHOD(StartEnumTagged)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetNextTagged)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_ LPGUID Tag,
        _Out_ PULONG Size
        ) PURE;
    STDMETHOD(EndEnumTagged)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(GetOffsetInformation)(
        THIS_
        _In_ ULONG Space,
        _In_ ULONG Which,
        _In_ ULONG64 Offset,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG InfoSize
        ) PURE;
    STDMETHOD(GetNextDifferentlyValidOffsetVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG64 NextOffset
        ) PURE;
    STDMETHOD(GetValidRegionVirtual)(
        THIS_
        _In_ ULONG64 Base,
        _In_ ULONG Size,
        _Out_ PULONG64 ValidBase,
        _Out_ PULONG ValidSize
        ) PURE;
    STDMETHOD(SearchVirtual2)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Length,
        _In_ ULONG Flags,
        _In_reads_bytes_(PatternSize) PVOID Pattern,
        _In_ ULONG PatternSize,
        _In_ ULONG PatternGranularity,
        _Out_ PULONG64 MatchOffset
        ) PURE;
    STDMETHOD(ReadMultiByteStringVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG MaxBytes,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringBytes
        ) PURE;
    STDMETHOD(ReadMultiByteStringVirtualWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG MaxBytes,
        _In_ ULONG CodePage,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringBytes
        ) PURE;
    STDMETHOD(ReadUnicodeStringVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG MaxBytes,
        _In_ ULONG CodePage,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringBytes
        ) PURE;
    STDMETHOD(ReadUnicodeStringVirtualWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG MaxBytes,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringBytes
        ) PURE;
    STDMETHOD(ReadPhysical2)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WritePhysical2)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
};
DECLARE_INTERFACE_(IDebugEventCallbacks, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetInterestMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(Breakpoint)(
        THIS_
        _In_ PDEBUG_BREAKPOINT Bp
        ) PURE;
    STDMETHOD(Exception)(
        THIS_
        _In_ PEXCEPTION_RECORD64 Exception,
        _In_ ULONG FirstChance
        ) PURE;
    STDMETHOD(CreateThread)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ ULONG64 DataOffset,
        _In_ ULONG64 StartOffset
        ) PURE;
    STDMETHOD(ExitThread)(
        THIS_
        _In_ ULONG ExitCode
        ) PURE;
    STDMETHOD(CreateProcess)(
        THIS_
        _In_ ULONG64 ImageFileHandle,
        _In_ ULONG64 Handle,
        _In_ ULONG64 BaseOffset,
        _In_ ULONG ModuleSize,
        _In_opt_ PCSTR ModuleName,
        _In_opt_ PCSTR ImageName,
        _In_ ULONG CheckSum,
        _In_ ULONG TimeDateStamp,
        _In_ ULONG64 InitialThreadHandle,
        _In_ ULONG64 ThreadDataOffset,
        _In_ ULONG64 StartOffset
        ) PURE;
    _Analysis_noreturn_
    STDMETHOD(ExitProcess)(
        THIS_
        _In_ ULONG ExitCode
        ) PURE;
    STDMETHOD(LoadModule)(
        THIS_
        _In_ ULONG64 ImageFileHandle,
        _In_ ULONG64 BaseOffset,
        _In_ ULONG ModuleSize,
        _In_opt_ PCSTR ModuleName,
        _In_opt_ PCSTR ImageName,
        _In_ ULONG CheckSum,
        _In_ ULONG TimeDateStamp
        ) PURE;
    STDMETHOD(UnloadModule)(
        THIS_
        _In_opt_ PCSTR ImageBaseName,
        _In_ ULONG64 BaseOffset
        ) PURE;
    STDMETHOD(SystemError)(
        THIS_
        _In_ ULONG Error,
        _In_ ULONG Level
        ) PURE;
    STDMETHOD(SessionStatus)(
        THIS_
        _In_ ULONG Status
        ) PURE;
    STDMETHOD(ChangeDebuggeeState)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG64 Argument
        ) PURE;
    STDMETHOD(ChangeEngineState)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG64 Argument
        ) PURE;
    STDMETHOD(ChangeSymbolState)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG64 Argument
        ) PURE;
};
DECLARE_INTERFACE_(IDebugEventCallbacksWide, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetInterestMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(Breakpoint)(
        THIS_
        _In_ PDEBUG_BREAKPOINT2 Bp
        ) PURE;
    STDMETHOD(Exception)(
        THIS_
        _In_ PEXCEPTION_RECORD64 Exception,
        _In_ ULONG FirstChance
        ) PURE;
    STDMETHOD(CreateThread)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ ULONG64 DataOffset,
        _In_ ULONG64 StartOffset
        ) PURE;
    _Analysis_noreturn_
    STDMETHOD(ExitThread)(
        THIS_
        _In_ ULONG ExitCode
        ) PURE;
    STDMETHOD(CreateProcess)(
        THIS_
        _In_ ULONG64 ImageFileHandle,
        _In_ ULONG64 Handle,
        _In_ ULONG64 BaseOffset,
        _In_ ULONG ModuleSize,
        _In_opt_ PCWSTR ModuleName,
        _In_opt_ PCWSTR ImageName,
        _In_ ULONG CheckSum,
        _In_ ULONG TimeDateStamp,
        _In_ ULONG64 InitialThreadHandle,
        _In_ ULONG64 ThreadDataOffset,
        _In_ ULONG64 StartOffset
        ) PURE;
    STDMETHOD(ExitProcess)(
        THIS_
        _In_ ULONG ExitCode
        ) PURE;
    STDMETHOD(LoadModule)(
        THIS_
        _In_ ULONG64 ImageFileHandle,
        _In_ ULONG64 BaseOffset,
        _In_ ULONG ModuleSize,
        _In_opt_ PCWSTR ModuleName,
        _In_opt_ PCWSTR ImageName,
        _In_ ULONG CheckSum,
        _In_ ULONG TimeDateStamp
        ) PURE;
    STDMETHOD(UnloadModule)(
        THIS_
        _In_opt_ PCWSTR ImageBaseName,
        _In_ ULONG64 BaseOffset
        ) PURE;
    STDMETHOD(SystemError)(
        THIS_
        _In_ ULONG Error,
        _In_ ULONG Level
        ) PURE;
    STDMETHOD(SessionStatus)(
        THIS_
        _In_ ULONG Status
        ) PURE;
    STDMETHOD(ChangeDebuggeeState)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG64 Argument
        ) PURE;
    STDMETHOD(ChangeEngineState)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG64 Argument
        ) PURE;
    STDMETHOD(ChangeSymbolState)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG64 Argument
        ) PURE;
};
typedef struct _DEBUG_EVENT_CONTEXT
{
    ULONG Size;
    ULONG ProcessEngineId;
    ULONG ThreadEngineId;
    ULONG FrameEngineId;
} DEBUG_EVENT_CONTEXT, *PDEBUG_EVENT_CONTEXT;
DECLARE_INTERFACE_(IDebugEventContextCallbacks, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetInterestMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(Breakpoint)(
        THIS_
        _In_ PDEBUG_BREAKPOINT2 Bp,
        _In_reads_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(Exception)(
        THIS_
        _In_ PEXCEPTION_RECORD64 Exception,
        _In_ ULONG FirstChance,
        _In_reads_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(CreateThread)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ ULONG64 DataOffset,
        _In_ ULONG64 StartOffset,
        _In_reads_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(ExitThread)(
        THIS_
        _In_ ULONG ExitCode,
        _In_reads_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(CreateProcess)(
        THIS_
        _In_ ULONG64 ImageFileHandle,
        _In_ ULONG64 Handle,
        _In_ ULONG64 BaseOffset,
        _In_ ULONG ModuleSize,
        _In_opt_ PCWSTR ModuleName,
        _In_opt_ PCWSTR ImageName,
        _In_ ULONG CheckSum,
        _In_ ULONG TimeDateStamp,
        _In_ ULONG64 InitialThreadHandle,
        _In_ ULONG64 ThreadDataOffset,
        _In_ ULONG64 StartOffset,
        _In_reads_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(ExitProcess)(
        THIS_
        _In_ ULONG ExitCode,
        _In_reads_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(LoadModule)(
        THIS_
        _In_ ULONG64 ImageFileHandle,
        _In_ ULONG64 BaseOffset,
        _In_ ULONG ModuleSize,
        _In_opt_ PCWSTR ModuleName,
        _In_opt_ PCWSTR ImageName,
        _In_ ULONG CheckSum,
        _In_ ULONG TimeDateStamp,
        _In_reads_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(UnloadModule)(
        THIS_
        _In_opt_ PCWSTR ImageBaseName,
        _In_ ULONG64 BaseOffset,
        _In_reads_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(SystemError)(
        THIS_
        _In_ ULONG Error,
        _In_ ULONG Level,
        _In_reads_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(SessionStatus)(
        THIS_
        _In_ ULONG Status
        ) PURE;
    STDMETHOD(ChangeDebuggeeState)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG64 Argument,
        _In_reads_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(ChangeEngineState)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG64 Argument,
        _In_reads_bytes_(ContextSize) PVOID Context,
        _In_ ULONG ContextSize
        ) PURE;
    STDMETHOD(ChangeSymbolState)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG64 Argument
        ) PURE;
};
DECLARE_INTERFACE_(IDebugInputCallbacks, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(StartInput)(
        THIS_
        _In_ ULONG BufferSize
        ) PURE;
    STDMETHOD(EndInput)(
        THIS
        ) PURE;
};
DECLARE_INTERFACE_(IDebugOutputCallbacks, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(Output)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCSTR Text
        ) PURE;
};
DECLARE_INTERFACE_(IDebugOutputCallbacksWide, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(Output)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCWSTR Text
        ) PURE;
};
DECLARE_INTERFACE_(IDebugOutputCallbacks2, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(Output)(
        THIS_
        _In_ ULONG Mask,
        _In_ PCSTR Text
        ) PURE;
    STDMETHOD(GetInterestMask)(
        THIS_
        _Out_ PULONG Mask
        ) PURE;
    STDMETHOD(Output2)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG Flags,
        _In_ ULONG64 Arg,
        _In_opt_ PCWSTR Text
        ) PURE;
};
typedef struct _DEBUG_REGISTER_DESCRIPTION
{
    ULONG Type;
    ULONG Flags;
    ULONG SubregMaster;
    ULONG SubregLength;
    ULONG64 SubregMask;
    ULONG SubregShift;
    ULONG Reserved0;
} DEBUG_REGISTER_DESCRIPTION, *PDEBUG_REGISTER_DESCRIPTION;
DECLARE_INTERFACE_(IDebugRegisters, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetNumberRegisters)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetDescription)(
        THIS_
        _In_ ULONG Register,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PDEBUG_REGISTER_DESCRIPTION Desc
        ) PURE;
    STDMETHOD(GetIndexByName)(
        THIS_
        _In_ PCSTR Name,
        _Out_ PULONG Index
        ) PURE;
    STDMETHOD(GetValue)(
        THIS_
        _In_ ULONG Register,
        _Out_ PDEBUG_VALUE Value
        ) PURE;
    STDMETHOD(SetValue)(
        THIS_
        _In_ ULONG Register,
        _In_ PDEBUG_VALUE Value
        ) PURE;
    STDMETHOD(GetValues)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Indices,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_VALUE Values
        ) PURE;
    STDMETHOD(SetValues)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Indices,
        _In_ ULONG Start,
        _In_reads_(Count) PDEBUG_VALUE Values
        ) PURE;
    STDMETHOD(OutputRegisters)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetInstructionOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetStackOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetFrameOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
};
DECLARE_INTERFACE_(IDebugRegisters2, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetNumberRegisters)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetDescription)(
        THIS_
        _In_ ULONG Register,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PDEBUG_REGISTER_DESCRIPTION Desc
        ) PURE;
    STDMETHOD(GetIndexByName)(
        THIS_
        _In_ PCSTR Name,
        _Out_ PULONG Index
        ) PURE;
    STDMETHOD(GetValue)(
        THIS_
        _In_ ULONG Register,
        _Out_ PDEBUG_VALUE Value
        ) PURE;
    STDMETHOD(SetValue)(
        THIS_
        _In_ ULONG Register,
        _In_ PDEBUG_VALUE Value
        ) PURE;
    STDMETHOD(GetValues)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Indices,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_VALUE Values
        ) PURE;
    STDMETHOD(SetValues)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Indices,
        _In_ ULONG Start,
        _In_reads_(Count) PDEBUG_VALUE Values
        ) PURE;
    STDMETHOD(OutputRegisters)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetInstructionOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetStackOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetFrameOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetDescriptionWide)(
        THIS_
        _In_ ULONG Register,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PDEBUG_REGISTER_DESCRIPTION Desc
        ) PURE;
    STDMETHOD(GetIndexByNameWide)(
        THIS_
        _In_ PCWSTR Name,
        _Out_ PULONG Index
        ) PURE;
    STDMETHOD(GetNumberPseudoRegisters)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetPseudoDescription)(
        THIS_
        _In_ ULONG Register,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 TypeModule,
        _Out_opt_ PULONG TypeId
        ) PURE;
    STDMETHOD(GetPseudoDescriptionWide)(
        THIS_
        _In_ ULONG Register,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 TypeModule,
        _Out_opt_ PULONG TypeId
        ) PURE;
    STDMETHOD(GetPseudoIndexByName)(
        THIS_
        _In_ PCSTR Name,
        _Out_ PULONG Index
        ) PURE;
    STDMETHOD(GetPseudoIndexByNameWide)(
        THIS_
        _In_ PCWSTR Name,
        _Out_ PULONG Index
        ) PURE;
    STDMETHOD(GetPseudoValues)(
        THIS_
        _In_ ULONG Source,
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Indices,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_VALUE Values
        ) PURE;
    STDMETHOD(SetPseudoValues)(
        THIS_
        _In_ ULONG Source,
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Indices,
        _In_ ULONG Start,
        _In_reads_(Count) PDEBUG_VALUE Values
        ) PURE;
    STDMETHOD(GetValues2)(
        THIS_
        _In_ ULONG Source,
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Indices,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_VALUE Values
        ) PURE;
    STDMETHOD(SetValues2)(
        THIS_
        _In_ ULONG Source,
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG Indices,
        _In_ ULONG Start,
        _In_reads_(Count) PDEBUG_VALUE Values
        ) PURE;
    STDMETHOD(OutputRegisters2)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Source,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetInstructionOffset2)(
        THIS_
        _In_ ULONG Source,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetStackOffset2)(
        THIS_
        _In_ ULONG Source,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetFrameOffset2)(
        THIS_
        _In_ ULONG Source,
        _Out_ PULONG64 Offset
        ) PURE;
};
typedef struct _DEBUG_SYMBOL_PARAMETERS
{
    ULONG64 Module;
    ULONG TypeId;
    ULONG ParentSymbol;
    ULONG SubElements;
    ULONG Flags;
    ULONG64 Reserved;
} DEBUG_SYMBOL_PARAMETERS, *PDEBUG_SYMBOL_PARAMETERS;
DECLARE_INTERFACE_(IDebugSymbolGroup, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetNumberSymbols)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(AddSymbol)(
        THIS_
        _In_ PCSTR Name,
        _Inout_ PULONG Index
        ) PURE;
    STDMETHOD(RemoveSymbolByName)(
        THIS_
        _In_ PCSTR Name
        ) PURE;
    STDMETHOD(RemoveSymbolByIndex)(
        THIS_
        _In_ ULONG Index
        ) PURE;
    STDMETHOD(GetSymbolName)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetSymbolParameters)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PDEBUG_SYMBOL_PARAMETERS Params
        ) PURE;
    STDMETHOD(ExpandSymbol)(
        THIS_
        _In_ ULONG Index,
        _In_ BOOL Expand
        ) PURE;
    STDMETHOD(OutputSymbols)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ ULONG Start,
        _In_ ULONG Count
        ) PURE;
    STDMETHOD(WriteSymbol)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Value
        ) PURE;
    STDMETHOD(OutputAsType)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Type
        ) PURE;
};
typedef struct _DEBUG_SYMBOL_ENTRY
{
    ULONG64 ModuleBase;
    ULONG64 Offset;
    ULONG64 Id;
    ULONG64 Arg64;
    ULONG Size;
    ULONG Flags;
    ULONG TypeId;
    ULONG NameSize;
    ULONG Token;
    ULONG Tag;
    ULONG Arg32;
    ULONG Reserved;
} DEBUG_SYMBOL_ENTRY, *PDEBUG_SYMBOL_ENTRY;
DECLARE_INTERFACE_(IDebugSymbolGroup2, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetNumberSymbols)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(AddSymbol)(
        THIS_
        _In_ PCSTR Name,
        _Inout_ PULONG Index
        ) PURE;
    STDMETHOD(RemoveSymbolByName)(
        THIS_
        _In_ PCSTR Name
        ) PURE;
    STDMETHOD(RemoveSymbolByIndex)(
        THIS_
        _In_ ULONG Index
        ) PURE;
    STDMETHOD(GetSymbolName)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetSymbolParameters)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PDEBUG_SYMBOL_PARAMETERS Params
        ) PURE;
    STDMETHOD(ExpandSymbol)(
        THIS_
        _In_ ULONG Index,
        _In_ BOOL Expand
        ) PURE;
    STDMETHOD(OutputSymbols)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ ULONG Start,
        _In_ ULONG Count
        ) PURE;
    STDMETHOD(WriteSymbol)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Value
        ) PURE;
    STDMETHOD(OutputAsType)(
        THIS_
        _In_ ULONG Index,
        _In_ PCSTR Type
        ) PURE;
    STDMETHOD(AddSymbolWide)(
        THIS_
        _In_ PCWSTR Name,
        _Inout_ PULONG Index
        ) PURE;
    STDMETHOD(RemoveSymbolByNameWide)(
        THIS_
        _In_ PCWSTR Name
        ) PURE;
    STDMETHOD(GetSymbolNameWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(WriteSymbolWide)(
        THIS_
        _In_ ULONG Index,
        _In_ PCWSTR Value
        ) PURE;
    STDMETHOD(OutputAsTypeWide)(
        THIS_
        _In_ ULONG Index,
        _In_ PCWSTR Type
        ) PURE;
    STDMETHOD(GetSymbolTypeName)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetSymbolTypeNameWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetSymbolSize)(
        THIS_
        _In_ ULONG Index,
        _Out_ PULONG Size
        ) PURE;
    STDMETHOD(GetSymbolOffset)(
        THIS_
        _In_ ULONG Index,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetSymbolRegister)(
        THIS_
        _In_ ULONG Index,
        _Out_ PULONG Register
        ) PURE;
    STDMETHOD(GetSymbolValueText)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetSymbolValueTextWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetSymbolEntryInformation)(
        THIS_
        _In_ ULONG Index,
        _Out_ PDEBUG_SYMBOL_ENTRY Entry
        ) PURE;
};
typedef struct _DEBUG_MODULE_PARAMETERS
{
    ULONG64 Base;
    ULONG Size;
    ULONG TimeDateStamp;
    ULONG Checksum;
    ULONG Flags;
    ULONG SymbolType;
    ULONG ImageNameSize;
    ULONG ModuleNameSize;
    ULONG LoadedImageNameSize;
    ULONG SymbolFileNameSize;
    ULONG MappedImageNameSize;
    ULONG64 Reserved[2];
} DEBUG_MODULE_PARAMETERS, *PDEBUG_MODULE_PARAMETERS;
DECLARE_INTERFACE_(IDebugSymbols, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetSymbolOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddSymbolOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveSymbolOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetSymbolOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetNameByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetOffsetByName)(
        THIS_
        _In_ PCSTR Symbol,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetNearNameByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ LONG Delta,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetLineByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_opt_ PULONG Line,
        _Out_writes_opt_(FileBufferSize) PSTR FileBuffer,
        _In_ ULONG FileBufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetOffsetByLine)(
        THIS_
        _In_ ULONG Line,
        _In_ PCSTR File,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetNumberModules)(
        THIS_
        _Out_ PULONG Loaded,
        _Out_ PULONG Unloaded
        ) PURE;
    STDMETHOD(GetModuleByIndex)(
        THIS_
        _In_ ULONG Index,
        _Out_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByModuleName)(
        THIS_
        _In_ PCSTR Name,
        _In_ ULONG StartIndex,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG StartIndex,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleNames)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _Out_writes_opt_(ImageNameBufferSize) PSTR ImageNameBuffer,
        _In_ ULONG ImageNameBufferSize,
        _Out_opt_ PULONG ImageNameSize,
        _Out_writes_opt_(ModuleNameBufferSize) PSTR ModuleNameBuffer,
        _In_ ULONG ModuleNameBufferSize,
        _Out_opt_ PULONG ModuleNameSize,
        _Out_writes_opt_(LoadedImageNameBufferSize) PSTR LoadedImageNameBuffer,
        _In_ ULONG LoadedImageNameBufferSize,
        _Out_opt_ PULONG LoadedImageNameSize
        ) PURE;
    STDMETHOD(GetModuleParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG64 Bases,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_MODULE_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetSymbolModule)(
        THIS_
        _In_ PCSTR Symbol,
        _Out_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetTypeName)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetTypeId)(
        THIS_
        _In_ ULONG64 Module,
        _In_ PCSTR Name,
        _Out_ PULONG TypeId
        ) PURE;
    STDMETHOD(GetTypeSize)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_ PULONG Size
        ) PURE;
    STDMETHOD(GetFieldOffset)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ PCSTR Field,
        _Out_ PULONG Offset
        ) PURE;
    STDMETHOD(GetSymbolTypeId)(
        THIS_
        _In_ PCSTR Symbol,
        _Out_ PULONG TypeId,
        _Out_opt_ PULONG64 Module
        ) PURE;
    STDMETHOD(GetOffsetTypeId)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG TypeId,
        _Out_opt_ PULONG64 Module
        ) PURE;
    STDMETHOD(ReadTypedDataVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteTypedDataVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(OutputTypedDataVirtual)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(ReadTypedDataPhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteTypedDataPhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(OutputTypedDataPhysical)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetScope)(
        THIS_
        _Out_opt_ PULONG64 InstructionOffset,
        _Out_opt_ PDEBUG_STACK_FRAME ScopeFrame,
        _Out_writes_bytes_opt_(ScopeContextSize) PVOID ScopeContext,
        _In_ ULONG ScopeContextSize
        ) PURE;
    STDMETHOD(SetScope)(
        THIS_
        _In_ ULONG64 InstructionOffset,
        _In_opt_ PDEBUG_STACK_FRAME ScopeFrame,
        _In_reads_bytes_opt_(ScopeContextSize) PVOID ScopeContext,
        _In_ ULONG ScopeContextSize
        ) PURE;
    STDMETHOD(ResetScope)(
        THIS
        ) PURE;
    STDMETHOD(GetScopeSymbolGroup)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PDEBUG_SYMBOL_GROUP Update,
        _Out_ PDEBUG_SYMBOL_GROUP* Symbols
        ) PURE;
    STDMETHOD(CreateSymbolGroup)(
        THIS_
        _Out_ PDEBUG_SYMBOL_GROUP* Group
        ) PURE;
    STDMETHOD(StartSymbolMatch)(
        THIS_
        _In_ PCSTR Pattern,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetNextSymbolMatch)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MatchSize,
        _Out_opt_ PULONG64 Offset
        ) PURE;
    STDMETHOD(EndSymbolMatch)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(Reload)(
        THIS_
        _In_ PCSTR Module
        ) PURE;
    STDMETHOD(GetSymbolPath)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(SetSymbolPath)(
        THIS_
        _In_ PCSTR Path
        ) PURE;
    STDMETHOD(AppendSymbolPath)(
        THIS_
        _In_ PCSTR Addition
        ) PURE;
    STDMETHOD(GetImagePath)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(SetImagePath)(
        THIS_
        _In_ PCSTR Path
        ) PURE;
    STDMETHOD(AppendImagePath)(
        THIS_
        _In_ PCSTR Addition
        ) PURE;
    STDMETHOD(GetSourcePath)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(GetSourcePathElement)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ElementSize
        ) PURE;
    STDMETHOD(SetSourcePath)(
        THIS_
        _In_ PCSTR Path
        ) PURE;
    STDMETHOD(AppendSourcePath)(
        THIS_
        _In_ PCSTR Addition
        ) PURE;
    STDMETHOD(FindSourceFile)(
        THIS_
        _In_ ULONG StartElement,
        _In_ PCSTR File,
        _In_ ULONG Flags,
        _Out_opt_ PULONG FoundElement,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FoundSize
        ) PURE;
    STDMETHOD(GetSourceFileLineOffsets)(
        THIS_
        _In_ PCSTR File,
        _Out_writes_opt_(BufferLines) PULONG64 Buffer,
        _In_ ULONG BufferLines,
        _Out_opt_ PULONG FileLines
        ) PURE;
};
DECLARE_INTERFACE_(IDebugSymbols2, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetSymbolOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddSymbolOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveSymbolOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetSymbolOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetNameByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetOffsetByName)(
        THIS_
        _In_ PCSTR Symbol,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetNearNameByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ LONG Delta,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetLineByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_opt_ PULONG Line,
        _Out_writes_opt_(FileBufferSize) PSTR FileBuffer,
        _In_ ULONG FileBufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetOffsetByLine)(
        THIS_
        _In_ ULONG Line,
        _In_ PCSTR File,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetNumberModules)(
        THIS_
        _Out_ PULONG Loaded,
        _Out_ PULONG Unloaded
        ) PURE;
    STDMETHOD(GetModuleByIndex)(
        THIS_
        _In_ ULONG Index,
        _Out_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByModuleName)(
        THIS_
        _In_ PCSTR Name,
        _In_ ULONG StartIndex,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG StartIndex,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleNames)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _Out_writes_opt_(ImageNameBufferSize) PSTR ImageNameBuffer,
        _In_ ULONG ImageNameBufferSize,
        _Out_opt_ PULONG ImageNameSize,
        _Out_writes_opt_(ModuleNameBufferSize) PSTR ModuleNameBuffer,
        _In_ ULONG ModuleNameBufferSize,
        _Out_opt_ PULONG ModuleNameSize,
        _Out_writes_opt_(LoadedImageNameBufferSize) PSTR LoadedImageNameBuffer,
        _In_ ULONG LoadedImageNameBufferSize,
        _Out_opt_ PULONG LoadedImageNameSize
        ) PURE;
    STDMETHOD(GetModuleParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG64 Bases,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_MODULE_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetSymbolModule)(
        THIS_
        _In_ PCSTR Symbol,
        _Out_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetTypeName)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetTypeId)(
        THIS_
        _In_ ULONG64 Module,
        _In_ PCSTR Name,
        _Out_ PULONG TypeId
        ) PURE;
    STDMETHOD(GetTypeSize)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_ PULONG Size
        ) PURE;
    STDMETHOD(GetFieldOffset)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ PCSTR Field,
        _Out_ PULONG Offset
        ) PURE;
    STDMETHOD(GetSymbolTypeId)(
        THIS_
        _In_ PCSTR Symbol,
        _Out_ PULONG TypeId,
        _Out_opt_ PULONG64 Module
        ) PURE;
    STDMETHOD(GetOffsetTypeId)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG TypeId,
        _Out_opt_ PULONG64 Module
        ) PURE;
    STDMETHOD(ReadTypedDataVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteTypedDataVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(OutputTypedDataVirtual)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(ReadTypedDataPhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteTypedDataPhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(OutputTypedDataPhysical)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetScope)(
        THIS_
        _Out_opt_ PULONG64 InstructionOffset,
        _Out_opt_ PDEBUG_STACK_FRAME ScopeFrame,
        _Out_writes_bytes_opt_(ScopeContextSize) PVOID ScopeContext,
        _In_ ULONG ScopeContextSize
        ) PURE;
    STDMETHOD(SetScope)(
        THIS_
        _In_ ULONG64 InstructionOffset,
        _In_opt_ PDEBUG_STACK_FRAME ScopeFrame,
        _In_reads_bytes_opt_(ScopeContextSize) PVOID ScopeContext,
        _In_ ULONG ScopeContextSize
        ) PURE;
    STDMETHOD(ResetScope)(
        THIS
        ) PURE;
    STDMETHOD(GetScopeSymbolGroup)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PDEBUG_SYMBOL_GROUP Update,
        _Out_ PDEBUG_SYMBOL_GROUP* Symbols
        ) PURE;
    STDMETHOD(CreateSymbolGroup)(
        THIS_
        _Out_ PDEBUG_SYMBOL_GROUP* Group
        ) PURE;
    STDMETHOD(StartSymbolMatch)(
        THIS_
        _In_ PCSTR Pattern,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetNextSymbolMatch)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MatchSize,
        _Out_opt_ PULONG64 Offset
        ) PURE;
    STDMETHOD(EndSymbolMatch)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(Reload)(
        THIS_
        _In_ PCSTR Module
        ) PURE;
    STDMETHOD(GetSymbolPath)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(SetSymbolPath)(
        THIS_
        _In_ PCSTR Path
        ) PURE;
    STDMETHOD(AppendSymbolPath)(
        THIS_
        _In_ PCSTR Addition
        ) PURE;
    STDMETHOD(GetImagePath)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(SetImagePath)(
        THIS_
        _In_ PCSTR Path
        ) PURE;
    STDMETHOD(AppendImagePath)(
        THIS_
        _In_ PCSTR Addition
        ) PURE;
    STDMETHOD(GetSourcePath)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(GetSourcePathElement)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ElementSize
        ) PURE;
    STDMETHOD(SetSourcePath)(
        THIS_
        _In_ PCSTR Path
        ) PURE;
    STDMETHOD(AppendSourcePath)(
        THIS_
        _In_ PCSTR Addition
        ) PURE;
    STDMETHOD(FindSourceFile)(
        THIS_
        _In_ ULONG StartElement,
        _In_ PCSTR File,
        _In_ ULONG Flags,
        _Out_opt_ PULONG FoundElement,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FoundSize
        ) PURE;
    STDMETHOD(GetSourceFileLineOffsets)(
        THIS_
        _In_ PCSTR File,
        _Out_writes_opt_(BufferLines) PULONG64 Buffer,
        _In_ ULONG BufferLines,
        _Out_opt_ PULONG FileLines
        ) PURE;
    STDMETHOD(GetModuleVersionInformation)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _In_ PCSTR Item,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG VerInfoSize
        ) PURE;
    STDMETHOD(GetModuleNameString)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetConstantName)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG64 Value,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetFieldName)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG FieldIndex,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetTypeOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddTypeOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveTypeOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetTypeOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
};
typedef struct _DEBUG_MODULE_AND_ID
{
    ULONG64 ModuleBase;
    ULONG64 Id;
} DEBUG_MODULE_AND_ID, *PDEBUG_MODULE_AND_ID;
typedef struct _DEBUG_SYMBOL_SOURCE_ENTRY
{
    ULONG64 ModuleBase;
    ULONG64 Offset;
    ULONG64 FileNameId;
    ULONG64 EngineInternal;
    ULONG Size;
    ULONG Flags;
    ULONG FileNameSize;
    ULONG StartLine;
    ULONG EndLine;
    ULONG StartColumn;
    ULONG EndColumn;
    ULONG Reserved;
} DEBUG_SYMBOL_SOURCE_ENTRY, *PDEBUG_SYMBOL_SOURCE_ENTRY;
DECLARE_INTERFACE_(IDebugSymbols3, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetSymbolOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddSymbolOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveSymbolOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetSymbolOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetNameByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetOffsetByName)(
        THIS_
        _In_ PCSTR Symbol,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetNearNameByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ LONG Delta,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetLineByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_opt_ PULONG Line,
        _Out_writes_opt_(FileBufferSize) PSTR FileBuffer,
        _In_ ULONG FileBufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetOffsetByLine)(
        THIS_
        _In_ ULONG Line,
        _In_ PCSTR File,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetNumberModules)(
        THIS_
        _Out_ PULONG Loaded,
        _Out_ PULONG Unloaded
        ) PURE;
    STDMETHOD(GetModuleByIndex)(
        THIS_
        _In_ ULONG Index,
        _Out_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByModuleName)(
        THIS_
        _In_ PCSTR Name,
        _In_ ULONG StartIndex,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG StartIndex,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleNames)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _Out_writes_opt_(ImageNameBufferSize) PSTR ImageNameBuffer,
        _In_ ULONG ImageNameBufferSize,
        _Out_opt_ PULONG ImageNameSize,
        _Out_writes_opt_(ModuleNameBufferSize) PSTR ModuleNameBuffer,
        _In_ ULONG ModuleNameBufferSize,
        _Out_opt_ PULONG ModuleNameSize,
        _Out_writes_opt_(LoadedImageNameBufferSize) PSTR LoadedImageNameBuffer,
        _In_ ULONG LoadedImageNameBufferSize,
        _Out_opt_ PULONG LoadedImageNameSize
        ) PURE;
    STDMETHOD(GetModuleParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG64 Bases,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_MODULE_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetSymbolModule)(
        THIS_
        _In_ PCSTR Symbol,
        _Out_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetTypeName)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetTypeId)(
        THIS_
        _In_ ULONG64 Module,
        _In_ PCSTR Name,
        _Out_ PULONG TypeId
        ) PURE;
    STDMETHOD(GetTypeSize)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_ PULONG Size
        ) PURE;
    STDMETHOD(GetFieldOffset)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ PCSTR Field,
        _Out_ PULONG Offset
        ) PURE;
    STDMETHOD(GetSymbolTypeId)(
        THIS_
        _In_ PCSTR Symbol,
        _Out_ PULONG TypeId,
        _Out_opt_ PULONG64 Module
        ) PURE;
    STDMETHOD(GetOffsetTypeId)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG TypeId,
        _Out_opt_ PULONG64 Module
        ) PURE;
    STDMETHOD(ReadTypedDataVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteTypedDataVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(OutputTypedDataVirtual)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(ReadTypedDataPhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteTypedDataPhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(OutputTypedDataPhysical)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetScope)(
        THIS_
        _Out_opt_ PULONG64 InstructionOffset,
        _Out_opt_ PDEBUG_STACK_FRAME ScopeFrame,
        _Out_writes_bytes_opt_(ScopeContextSize) PVOID ScopeContext,
        _In_ ULONG ScopeContextSize
        ) PURE;
    STDMETHOD(SetScope)(
        THIS_
        _In_ ULONG64 InstructionOffset,
        _In_opt_ PDEBUG_STACK_FRAME ScopeFrame,
        _In_reads_bytes_opt_(ScopeContextSize) PVOID ScopeContext,
        _In_ ULONG ScopeContextSize
        ) PURE;
    STDMETHOD(ResetScope)(
        THIS
        ) PURE;
    STDMETHOD(GetScopeSymbolGroup)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PDEBUG_SYMBOL_GROUP Update,
        _Out_ PDEBUG_SYMBOL_GROUP* Symbols
        ) PURE;
    STDMETHOD(CreateSymbolGroup)(
        THIS_
        _Out_ PDEBUG_SYMBOL_GROUP* Group
        ) PURE;
    STDMETHOD(StartSymbolMatch)(
        THIS_
        _In_ PCSTR Pattern,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetNextSymbolMatch)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MatchSize,
        _Out_opt_ PULONG64 Offset
        ) PURE;
    STDMETHOD(EndSymbolMatch)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(Reload)(
        THIS_
        _In_ PCSTR Module
        ) PURE;
    STDMETHOD(GetSymbolPath)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(SetSymbolPath)(
        THIS_
        _In_ PCSTR Path
        ) PURE;
    STDMETHOD(AppendSymbolPath)(
        THIS_
        _In_ PCSTR Addition
        ) PURE;
    STDMETHOD(GetImagePath)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(SetImagePath)(
        THIS_
        _In_ PCSTR Path
        ) PURE;
    STDMETHOD(AppendImagePath)(
        THIS_
        _In_ PCSTR Addition
        ) PURE;
    STDMETHOD(GetSourcePath)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(GetSourcePathElement)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ElementSize
        ) PURE;
    STDMETHOD(SetSourcePath)(
        THIS_
        _In_ PCSTR Path
        ) PURE;
    STDMETHOD(AppendSourcePath)(
        THIS_
        _In_ PCSTR Addition
        ) PURE;
    STDMETHOD(FindSourceFile)(
        THIS_
        _In_ ULONG StartElement,
        _In_ PCSTR File,
        _In_ ULONG Flags,
        _Out_opt_ PULONG FoundElement,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FoundSize
        ) PURE;
    STDMETHOD(GetSourceFileLineOffsets)(
        THIS_
        _In_ PCSTR File,
        _Out_writes_opt_(BufferLines) PULONG64 Buffer,
        _In_ ULONG BufferLines,
        _Out_opt_ PULONG FileLines
        ) PURE;
    STDMETHOD(GetModuleVersionInformation)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _In_ PCSTR Item,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG VerInfoSize
        ) PURE;
    STDMETHOD(GetModuleNameString)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetConstantName)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG64 Value,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetFieldName)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG FieldIndex,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetTypeOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddTypeOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveTypeOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetTypeOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetNameByOffsetWide)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetOffsetByNameWide)(
        THIS_
        _In_ PCWSTR Symbol,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetNearNameByOffsetWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ LONG Delta,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetLineByOffsetWide)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_opt_ PULONG Line,
        _Out_writes_opt_(FileBufferSize) PWSTR FileBuffer,
        _In_ ULONG FileBufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetOffsetByLineWide)(
        THIS_
        _In_ ULONG Line,
        _In_ PCWSTR File,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetModuleByModuleNameWide)(
        THIS_
        _In_ PCWSTR Name,
        _In_ ULONG StartIndex,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetSymbolModuleWide)(
        THIS_
        _In_ PCWSTR Symbol,
        _Out_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetTypeNameWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetTypeIdWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ PCWSTR Name,
        _Out_ PULONG TypeId
        ) PURE;
    STDMETHOD(GetFieldOffsetWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ PCWSTR Field,
        _Out_ PULONG Offset
        ) PURE;
    STDMETHOD(GetSymbolTypeIdWide)(
        THIS_
        _In_ PCWSTR Symbol,
        _Out_ PULONG TypeId,
        _Out_opt_ PULONG64 Module
        ) PURE;
    STDMETHOD(GetScopeSymbolGroup2)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PDEBUG_SYMBOL_GROUP2 Update,
        _Out_ PDEBUG_SYMBOL_GROUP2* Symbols
        ) PURE;
    STDMETHOD(CreateSymbolGroup2)(
        THIS_
        _Out_ PDEBUG_SYMBOL_GROUP2* Group
        ) PURE;
    STDMETHOD(StartSymbolMatchWide)(
        THIS_
        _In_ PCWSTR Pattern,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetNextSymbolMatchWide)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MatchSize,
        _Out_opt_ PULONG64 Offset
        ) PURE;
    STDMETHOD(ReloadWide)(
        THIS_
        _In_ PCWSTR Module
        ) PURE;
    STDMETHOD(GetSymbolPathWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(SetSymbolPathWide)(
        THIS_
        _In_ PCWSTR Path
        ) PURE;
    STDMETHOD(AppendSymbolPathWide)(
        THIS_
        _In_ PCWSTR Addition
        ) PURE;
    STDMETHOD(GetImagePathWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(SetImagePathWide)(
        THIS_
        _In_ PCWSTR Path
        ) PURE;
    STDMETHOD(AppendImagePathWide)(
        THIS_
        _In_ PCWSTR Addition
        ) PURE;
    STDMETHOD(GetSourcePathWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(GetSourcePathElementWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ElementSize
        ) PURE;
    STDMETHOD(SetSourcePathWide)(
        THIS_
        _In_ PCWSTR Path
        ) PURE;
    STDMETHOD(AppendSourcePathWide)(
        THIS_
        _In_ PCWSTR Addition
        ) PURE;
    STDMETHOD(FindSourceFileWide)(
        THIS_
        _In_ ULONG StartElement,
        _In_ PCWSTR File,
        _In_ ULONG Flags,
        _Out_opt_ PULONG FoundElement,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FoundSize
        ) PURE;
    STDMETHOD(GetSourceFileLineOffsetsWide)(
        THIS_
        _In_ PCWSTR File,
        _Out_writes_opt_(BufferLines) PULONG64 Buffer,
        _In_ ULONG BufferLines,
        _Out_opt_ PULONG FileLines
        ) PURE;
    STDMETHOD(GetModuleVersionInformationWide)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _In_ PCWSTR Item,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG VerInfoSize
        ) PURE;
    STDMETHOD(GetModuleNameStringWide)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetConstantNameWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG64 Value,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetFieldNameWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG FieldIndex,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(IsManagedModule)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByModuleName2)(
        THIS_
        _In_ PCSTR Name,
        _In_ ULONG StartIndex,
        _In_ ULONG Flags,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByModuleName2Wide)(
        THIS_
        _In_ PCWSTR Name,
        _In_ ULONG StartIndex,
        _In_ ULONG Flags,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByOffset2)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG StartIndex,
        _In_ ULONG Flags,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(AddSyntheticModule)(
        THIS_
        _In_ ULONG64 Base,
        _In_ ULONG Size,
        _In_ PCSTR ImagePath,
        _In_ PCSTR ModuleName,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(AddSyntheticModuleWide)(
        THIS_
        _In_ ULONG64 Base,
        _In_ ULONG Size,
        _In_ PCWSTR ImagePath,
        _In_ PCWSTR ModuleName,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(RemoveSyntheticModule)(
        THIS_
        _In_ ULONG64 Base
        ) PURE;
    STDMETHOD(GetCurrentScopeFrameIndex)(
        THIS_
        _Out_ PULONG Index
        ) PURE;
    STDMETHOD(SetScopeFrameByIndex)(
        THIS_
        _In_ ULONG Index
        ) PURE;
    STDMETHOD(SetScopeFromJitDebugInfo)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 InfoOffset
        ) PURE;
    STDMETHOD(SetScopeFromStoredEvent)(
        THIS
        ) PURE;
    STDMETHOD(OutputSymbolByOffset)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ ULONG64 Offset
        ) PURE;
    STDMETHOD(GetFunctionEntryByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BufferNeeded
        ) PURE;
    STDMETHOD(GetFieldTypeAndOffset)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG ContainerTypeId,
        _In_ PCSTR Field,
        _Out_opt_ PULONG FieldTypeId,
        _Out_opt_ PULONG Offset
        ) PURE;
    STDMETHOD(GetFieldTypeAndOffsetWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG ContainerTypeId,
        _In_ PCWSTR Field,
        _Out_opt_ PULONG FieldTypeId,
        _Out_opt_ PULONG Offset
        ) PURE;
    STDMETHOD(AddSyntheticSymbol)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Size,
        _In_ PCSTR Name,
        _In_ ULONG Flags,
        _Out_opt_ PDEBUG_MODULE_AND_ID Id
        ) PURE;
    STDMETHOD(AddSyntheticSymbolWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Size,
        _In_ PCWSTR Name,
        _In_ ULONG Flags,
        _Out_opt_ PDEBUG_MODULE_AND_ID Id
        ) PURE;
    STDMETHOD(RemoveSyntheticSymbol)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID Id
        ) PURE;
    STDMETHOD(GetSymbolEntriesByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(IdsCount) PDEBUG_MODULE_AND_ID Ids,
        _Out_writes_opt_(IdsCount) PULONG64 Displacements,
        _In_ ULONG IdsCount,
        _Out_opt_ PULONG Entries
        ) PURE;
    STDMETHOD(GetSymbolEntriesByName)(
        THIS_
        _In_ PCSTR Symbol,
        _In_ ULONG Flags,
        _Out_writes_opt_(IdsCount) PDEBUG_MODULE_AND_ID Ids,
        _In_ ULONG IdsCount,
        _Out_opt_ PULONG Entries
        ) PURE;
    STDMETHOD(GetSymbolEntriesByNameWide)(
        THIS_
        _In_ PCWSTR Symbol,
        _In_ ULONG Flags,
        _Out_writes_opt_(IdsCount) PDEBUG_MODULE_AND_ID Ids,
        _In_ ULONG IdsCount,
        _Out_opt_ PULONG Entries
        ) PURE;
    STDMETHOD(GetSymbolEntryByToken)(
        THIS_
        _In_ ULONG64 ModuleBase,
        _In_ ULONG Token,
        _Out_ PDEBUG_MODULE_AND_ID Id
        ) PURE;
    STDMETHOD(GetSymbolEntryInformation)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID Id,
        _Out_ PDEBUG_SYMBOL_ENTRY Info
        ) PURE;
    STDMETHOD(GetSymbolEntryString)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID Id,
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSymbolEntryStringWide)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID Id,
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSymbolEntryOffsetRegions)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID Id,
        _In_ ULONG Flags,
        _Out_writes_opt_(RegionsCount) PDEBUG_OFFSET_REGION Regions,
        _In_ ULONG RegionsCount,
        _Out_opt_ PULONG RegionsAvail
        ) PURE;
    STDMETHOD(GetSymbolEntryBySymbolEntry)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID FromId,
        _In_ ULONG Flags,
        _Out_ PDEBUG_MODULE_AND_ID ToId
        ) PURE;
    STDMETHOD(GetSourceEntriesByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(EntriesCount) PDEBUG_SYMBOL_SOURCE_ENTRY Entries,
        _In_ ULONG EntriesCount,
        _Out_opt_ PULONG EntriesAvail
        ) PURE;
    STDMETHOD(GetSourceEntriesByLine)(
        THIS_
        _In_ ULONG Line,
        _In_ PCSTR File,
        _In_ ULONG Flags,
        _Out_writes_opt_(EntriesCount) PDEBUG_SYMBOL_SOURCE_ENTRY Entries,
        _In_ ULONG EntriesCount,
        _Out_opt_ PULONG EntriesAvail
        ) PURE;
    STDMETHOD(GetSourceEntriesByLineWide)(
        THIS_
        _In_ ULONG Line,
        _In_ PCWSTR File,
        _In_ ULONG Flags,
        _Out_writes_opt_(EntriesCount) PDEBUG_SYMBOL_SOURCE_ENTRY Entries,
        _In_ ULONG EntriesCount,
        _Out_opt_ PULONG EntriesAvail
        ) PURE;
    STDMETHOD(GetSourceEntryString)(
        THIS_
        _In_ PDEBUG_SYMBOL_SOURCE_ENTRY Entry,
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSourceEntryStringWide)(
        THIS_
        _In_ PDEBUG_SYMBOL_SOURCE_ENTRY Entry,
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSourceEntryOffsetRegions)(
        THIS_
        _In_ PDEBUG_SYMBOL_SOURCE_ENTRY Entry,
        _In_ ULONG Flags,
        _Out_writes_opt_(RegionsCount) PDEBUG_OFFSET_REGION Regions,
        _In_ ULONG RegionsCount,
        _Out_opt_ PULONG RegionsAvail
        ) PURE;
    STDMETHOD(GetSourceEntryBySourceEntry)(
        THIS_
        _In_ PDEBUG_SYMBOL_SOURCE_ENTRY FromEntry,
        _In_ ULONG Flags,
        _Out_ PDEBUG_SYMBOL_SOURCE_ENTRY ToEntry
        ) PURE;
};
DECLARE_INTERFACE_(IDebugSymbols4, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetSymbolOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddSymbolOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveSymbolOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetSymbolOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetNameByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetOffsetByName)(
        THIS_
        _In_ PCSTR Symbol,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetNearNameByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ LONG Delta,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetLineByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_opt_ PULONG Line,
        _Out_writes_opt_(FileBufferSize) PSTR FileBuffer,
        _In_ ULONG FileBufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetOffsetByLine)(
        THIS_
        _In_ ULONG Line,
        _In_ PCSTR File,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetNumberModules)(
        THIS_
        _Out_ PULONG Loaded,
        _Out_ PULONG Unloaded
        ) PURE;
    STDMETHOD(GetModuleByIndex)(
        THIS_
        _In_ ULONG Index,
        _Out_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByModuleName)(
        THIS_
        _In_ PCSTR Name,
        _In_ ULONG StartIndex,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG StartIndex,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleNames)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _Out_writes_opt_(ImageNameBufferSize) PSTR ImageNameBuffer,
        _In_ ULONG ImageNameBufferSize,
        _Out_opt_ PULONG ImageNameSize,
        _Out_writes_opt_(ModuleNameBufferSize) PSTR ModuleNameBuffer,
        _In_ ULONG ModuleNameBufferSize,
        _Out_opt_ PULONG ModuleNameSize,
        _Out_writes_opt_(LoadedImageNameBufferSize) PSTR LoadedImageNameBuffer,
        _In_ ULONG LoadedImageNameBufferSize,
        _Out_opt_ PULONG LoadedImageNameSize
        ) PURE;
    STDMETHOD(GetModuleParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG64 Bases,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_MODULE_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetSymbolModule)(
        THIS_
        _In_ PCSTR Symbol,
        _Out_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetTypeName)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetTypeId)(
        THIS_
        _In_ ULONG64 Module,
        _In_ PCSTR Name,
        _Out_ PULONG TypeId
        ) PURE;
    STDMETHOD(GetTypeSize)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_ PULONG Size
        ) PURE;
    STDMETHOD(GetFieldOffset)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ PCSTR Field,
        _Out_ PULONG Offset
        ) PURE;
    STDMETHOD(GetSymbolTypeId)(
        THIS_
        _In_ PCSTR Symbol,
        _Out_ PULONG TypeId,
        _Out_opt_ PULONG64 Module
        ) PURE;
    STDMETHOD(GetOffsetTypeId)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG TypeId,
        _Out_opt_ PULONG64 Module
        ) PURE;
    STDMETHOD(ReadTypedDataVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteTypedDataVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(OutputTypedDataVirtual)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(ReadTypedDataPhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteTypedDataPhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(OutputTypedDataPhysical)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetScope)(
        THIS_
        _Out_opt_ PULONG64 InstructionOffset,
        _Out_opt_ PDEBUG_STACK_FRAME ScopeFrame,
        _Out_writes_bytes_opt_(ScopeContextSize) PVOID ScopeContext,
        _In_ ULONG ScopeContextSize
        ) PURE;
    STDMETHOD(SetScope)(
        THIS_
        _In_ ULONG64 InstructionOffset,
        _In_opt_ PDEBUG_STACK_FRAME ScopeFrame,
        _In_reads_bytes_opt_(ScopeContextSize) PVOID ScopeContext,
        _In_ ULONG ScopeContextSize
        ) PURE;
    STDMETHOD(ResetScope)(
        THIS
        ) PURE;
    STDMETHOD(GetScopeSymbolGroup)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PDEBUG_SYMBOL_GROUP Update,
        _Out_ PDEBUG_SYMBOL_GROUP* Symbols
        ) PURE;
    STDMETHOD(CreateSymbolGroup)(
        THIS_
        _Out_ PDEBUG_SYMBOL_GROUP* Group
        ) PURE;
    STDMETHOD(StartSymbolMatch)(
        THIS_
        _In_ PCSTR Pattern,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetNextSymbolMatch)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MatchSize,
        _Out_opt_ PULONG64 Offset
        ) PURE;
    STDMETHOD(EndSymbolMatch)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(Reload)(
        THIS_
        _In_ PCSTR Module
        ) PURE;
    STDMETHOD(GetSymbolPath)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(SetSymbolPath)(
        THIS_
        _In_ PCSTR Path
        ) PURE;
    STDMETHOD(AppendSymbolPath)(
        THIS_
        _In_ PCSTR Addition
        ) PURE;
    STDMETHOD(GetImagePath)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(SetImagePath)(
        THIS_
        _In_ PCSTR Path
        ) PURE;
    STDMETHOD(AppendImagePath)(
        THIS_
        _In_ PCSTR Addition
        ) PURE;
    STDMETHOD(GetSourcePath)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(GetSourcePathElement)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ElementSize
        ) PURE;
    STDMETHOD(SetSourcePath)(
        THIS_
        _In_ PCSTR Path
        ) PURE;
    STDMETHOD(AppendSourcePath)(
        THIS_
        _In_ PCSTR Addition
        ) PURE;
    STDMETHOD(FindSourceFile)(
        THIS_
        _In_ ULONG StartElement,
        _In_ PCSTR File,
        _In_ ULONG Flags,
        _Out_opt_ PULONG FoundElement,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FoundSize
        ) PURE;
    STDMETHOD(GetSourceFileLineOffsets)(
        THIS_
        _In_ PCSTR File,
        _Out_writes_opt_(BufferLines) PULONG64 Buffer,
        _In_ ULONG BufferLines,
        _Out_opt_ PULONG FileLines
        ) PURE;
    STDMETHOD(GetModuleVersionInformation)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _In_ PCSTR Item,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG VerInfoSize
        ) PURE;
    STDMETHOD(GetModuleNameString)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetConstantName)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG64 Value,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetFieldName)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG FieldIndex,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetTypeOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddTypeOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveTypeOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetTypeOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetNameByOffsetWide)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetOffsetByNameWide)(
        THIS_
        _In_ PCWSTR Symbol,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetNearNameByOffsetWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ LONG Delta,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetLineByOffsetWide)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_opt_ PULONG Line,
        _Out_writes_opt_(FileBufferSize) PWSTR FileBuffer,
        _In_ ULONG FileBufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetOffsetByLineWide)(
        THIS_
        _In_ ULONG Line,
        _In_ PCWSTR File,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetModuleByModuleNameWide)(
        THIS_
        _In_ PCWSTR Name,
        _In_ ULONG StartIndex,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetSymbolModuleWide)(
        THIS_
        _In_ PCWSTR Symbol,
        _Out_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetTypeNameWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetTypeIdWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ PCWSTR Name,
        _Out_ PULONG TypeId
        ) PURE;
    STDMETHOD(GetFieldOffsetWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ PCWSTR Field,
        _Out_ PULONG Offset
        ) PURE;
    STDMETHOD(GetSymbolTypeIdWide)(
        THIS_
        _In_ PCWSTR Symbol,
        _Out_ PULONG TypeId,
        _Out_opt_ PULONG64 Module
        ) PURE;
    STDMETHOD(GetScopeSymbolGroup2)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PDEBUG_SYMBOL_GROUP2 Update,
        _Out_ PDEBUG_SYMBOL_GROUP2* Symbols
        ) PURE;
    STDMETHOD(CreateSymbolGroup2)(
        THIS_
        _Out_ PDEBUG_SYMBOL_GROUP2* Group
        ) PURE;
    STDMETHOD(StartSymbolMatchWide)(
        THIS_
        _In_ PCWSTR Pattern,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetNextSymbolMatchWide)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MatchSize,
        _Out_opt_ PULONG64 Offset
        ) PURE;
    STDMETHOD(ReloadWide)(
        THIS_
        _In_ PCWSTR Module
        ) PURE;
    STDMETHOD(GetSymbolPathWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(SetSymbolPathWide)(
        THIS_
        _In_ PCWSTR Path
        ) PURE;
    STDMETHOD(AppendSymbolPathWide)(
        THIS_
        _In_ PCWSTR Addition
        ) PURE;
    STDMETHOD(GetImagePathWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(SetImagePathWide)(
        THIS_
        _In_ PCWSTR Path
        ) PURE;
    STDMETHOD(AppendImagePathWide)(
        THIS_
        _In_ PCWSTR Addition
        ) PURE;
    STDMETHOD(GetSourcePathWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(GetSourcePathElementWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ElementSize
        ) PURE;
    STDMETHOD(SetSourcePathWide)(
        THIS_
        _In_ PCWSTR Path
        ) PURE;
    STDMETHOD(AppendSourcePathWide)(
        THIS_
        _In_ PCWSTR Addition
        ) PURE;
    STDMETHOD(FindSourceFileWide)(
        THIS_
        _In_ ULONG StartElement,
        _In_ PCWSTR File,
        _In_ ULONG Flags,
        _Out_opt_ PULONG FoundElement,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FoundSize
        ) PURE;
    STDMETHOD(GetSourceFileLineOffsetsWide)(
        THIS_
        _In_ PCWSTR File,
        _Out_writes_opt_(BufferLines) PULONG64 Buffer,
        _In_ ULONG BufferLines,
        _Out_opt_ PULONG FileLines
        ) PURE;
    STDMETHOD(GetModuleVersionInformationWide)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _In_ PCWSTR Item,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG VerInfoSize
        ) PURE;
    STDMETHOD(GetModuleNameStringWide)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetConstantNameWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG64 Value,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetFieldNameWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG FieldIndex,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(IsManagedModule)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByModuleName2)(
        THIS_
        _In_ PCSTR Name,
        _In_ ULONG StartIndex,
        _In_ ULONG Flags,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByModuleName2Wide)(
        THIS_
        _In_ PCWSTR Name,
        _In_ ULONG StartIndex,
        _In_ ULONG Flags,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByOffset2)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG StartIndex,
        _In_ ULONG Flags,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(AddSyntheticModule)(
        THIS_
        _In_ ULONG64 Base,
        _In_ ULONG Size,
        _In_ PCSTR ImagePath,
        _In_ PCSTR ModuleName,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(AddSyntheticModuleWide)(
        THIS_
        _In_ ULONG64 Base,
        _In_ ULONG Size,
        _In_ PCWSTR ImagePath,
        _In_ PCWSTR ModuleName,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(RemoveSyntheticModule)(
        THIS_
        _In_ ULONG64 Base
        ) PURE;
    STDMETHOD(GetCurrentScopeFrameIndex)(
        THIS_
        _Out_ PULONG Index
        ) PURE;
    STDMETHOD(SetScopeFrameByIndex)(
        THIS_
        _In_ ULONG Index
        ) PURE;
    STDMETHOD(SetScopeFromJitDebugInfo)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 InfoOffset
        ) PURE;
    STDMETHOD(SetScopeFromStoredEvent)(
        THIS
        ) PURE;
    STDMETHOD(OutputSymbolByOffset)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ ULONG64 Offset
        ) PURE;
    STDMETHOD(GetFunctionEntryByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BufferNeeded
        ) PURE;
    STDMETHOD(GetFieldTypeAndOffset)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG ContainerTypeId,
        _In_ PCSTR Field,
        _Out_opt_ PULONG FieldTypeId,
        _Out_opt_ PULONG Offset
        ) PURE;
    STDMETHOD(GetFieldTypeAndOffsetWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG ContainerTypeId,
        _In_ PCWSTR Field,
        _Out_opt_ PULONG FieldTypeId,
        _Out_opt_ PULONG Offset
        ) PURE;
    STDMETHOD(AddSyntheticSymbol)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Size,
        _In_ PCSTR Name,
        _In_ ULONG Flags,
        _Out_opt_ PDEBUG_MODULE_AND_ID Id
        ) PURE;
    STDMETHOD(AddSyntheticSymbolWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Size,
        _In_ PCWSTR Name,
        _In_ ULONG Flags,
        _Out_opt_ PDEBUG_MODULE_AND_ID Id
        ) PURE;
    STDMETHOD(RemoveSyntheticSymbol)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID Id
        ) PURE;
    STDMETHOD(GetSymbolEntriesByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(IdsCount) PDEBUG_MODULE_AND_ID Ids,
        _Out_writes_opt_(IdsCount) PULONG64 Displacements,
        _In_ ULONG IdsCount,
        _Out_opt_ PULONG Entries
        ) PURE;
    STDMETHOD(GetSymbolEntriesByName)(
        THIS_
        _In_ PCSTR Symbol,
        _In_ ULONG Flags,
        _Out_writes_opt_(IdsCount) PDEBUG_MODULE_AND_ID Ids,
        _In_ ULONG IdsCount,
        _Out_opt_ PULONG Entries
        ) PURE;
    STDMETHOD(GetSymbolEntriesByNameWide)(
        THIS_
        _In_ PCWSTR Symbol,
        _In_ ULONG Flags,
        _Out_writes_opt_(IdsCount) PDEBUG_MODULE_AND_ID Ids,
        _In_ ULONG IdsCount,
        _Out_opt_ PULONG Entries
        ) PURE;
    STDMETHOD(GetSymbolEntryByToken)(
        THIS_
        _In_ ULONG64 ModuleBase,
        _In_ ULONG Token,
        _Out_ PDEBUG_MODULE_AND_ID Id
        ) PURE;
    STDMETHOD(GetSymbolEntryInformation)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID Id,
        _Out_ PDEBUG_SYMBOL_ENTRY Info
        ) PURE;
    STDMETHOD(GetSymbolEntryString)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID Id,
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSymbolEntryStringWide)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID Id,
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSymbolEntryOffsetRegions)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID Id,
        _In_ ULONG Flags,
        _Out_writes_opt_(RegionsCount) PDEBUG_OFFSET_REGION Regions,
        _In_ ULONG RegionsCount,
        _Out_opt_ PULONG RegionsAvail
        ) PURE;
    STDMETHOD(GetSymbolEntryBySymbolEntry)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID FromId,
        _In_ ULONG Flags,
        _Out_ PDEBUG_MODULE_AND_ID ToId
        ) PURE;
    STDMETHOD(GetSourceEntriesByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(EntriesCount) PDEBUG_SYMBOL_SOURCE_ENTRY Entries,
        _In_ ULONG EntriesCount,
        _Out_opt_ PULONG EntriesAvail
        ) PURE;
    STDMETHOD(GetSourceEntriesByLine)(
        THIS_
        _In_ ULONG Line,
        _In_ PCSTR File,
        _In_ ULONG Flags,
        _Out_writes_opt_(EntriesCount) PDEBUG_SYMBOL_SOURCE_ENTRY Entries,
        _In_ ULONG EntriesCount,
        _Out_opt_ PULONG EntriesAvail
        ) PURE;
    STDMETHOD(GetSourceEntriesByLineWide)(
        THIS_
        _In_ ULONG Line,
        _In_ PCWSTR File,
        _In_ ULONG Flags,
        _Out_writes_opt_(EntriesCount) PDEBUG_SYMBOL_SOURCE_ENTRY Entries,
        _In_ ULONG EntriesCount,
        _Out_opt_ PULONG EntriesAvail
        ) PURE;
    STDMETHOD(GetSourceEntryString)(
        THIS_
        _In_ PDEBUG_SYMBOL_SOURCE_ENTRY Entry,
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSourceEntryStringWide)(
        THIS_
        _In_ PDEBUG_SYMBOL_SOURCE_ENTRY Entry,
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSourceEntryOffsetRegions)(
        THIS_
        _In_ PDEBUG_SYMBOL_SOURCE_ENTRY Entry,
        _In_ ULONG Flags,
        _Out_writes_opt_(RegionsCount) PDEBUG_OFFSET_REGION Regions,
        _In_ ULONG RegionsCount,
        _Out_opt_ PULONG RegionsAvail
        ) PURE;
    STDMETHOD(GetSourceEntryBySourceEntry)(
        THIS_
        _In_ PDEBUG_SYMBOL_SOURCE_ENTRY FromEntry,
        _In_ ULONG Flags,
        _Out_ PDEBUG_SYMBOL_SOURCE_ENTRY ToEntry
        ) PURE;
    STDMETHOD(GetScopeEx)(
        THIS_
        _Out_opt_ PULONG64 InstructionOffset,
        _Out_opt_ PDEBUG_STACK_FRAME_EX ScopeFrame,
        _Out_writes_bytes_opt_(ScopeContextSize) PVOID ScopeContext,
        _In_ ULONG ScopeContextSize
        ) PURE;
    STDMETHOD(SetScopeEx)(
        THIS_
        _In_ ULONG64 InstructionOffset,
        _In_opt_ PDEBUG_STACK_FRAME_EX ScopeFrame,
        _In_reads_bytes_opt_(ScopeContextSize) PVOID ScopeContext,
        _In_ ULONG ScopeContextSize
        ) PURE;
    STDMETHOD(GetNameByInlineContext)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG InlineContext,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetNameByInlineContextWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG InlineContext,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetLineByInlineContext)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG InlineContext,
        _Out_opt_ PULONG Line,
        _Out_writes_opt_(FileBufferSize) PSTR FileBuffer,
        _In_ ULONG FileBufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetLineByInlineContextWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG InlineContext,
        _Out_opt_ PULONG Line,
        _Out_writes_opt_(FileBufferSize) PWSTR FileBuffer,
        _In_ ULONG FileBufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(OutputSymbolByInlineContext)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ ULONG64 Offset,
        _In_ ULONG InlineContext
        ) PURE;
};
DECLARE_INTERFACE_(IDebugSymbols5, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetSymbolOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddSymbolOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveSymbolOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetSymbolOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetNameByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetOffsetByName)(
        THIS_
        _In_ PCSTR Symbol,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetNearNameByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ LONG Delta,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetLineByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_opt_ PULONG Line,
        _Out_writes_opt_(FileBufferSize) PSTR FileBuffer,
        _In_ ULONG FileBufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetOffsetByLine)(
        THIS_
        _In_ ULONG Line,
        _In_ PCSTR File,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetNumberModules)(
        THIS_
        _Out_ PULONG Loaded,
        _Out_ PULONG Unloaded
        ) PURE;
    STDMETHOD(GetModuleByIndex)(
        THIS_
        _In_ ULONG Index,
        _Out_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByModuleName)(
        THIS_
        _In_ PCSTR Name,
        _In_ ULONG StartIndex,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG StartIndex,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleNames)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _Out_writes_opt_(ImageNameBufferSize) PSTR ImageNameBuffer,
        _In_ ULONG ImageNameBufferSize,
        _Out_opt_ PULONG ImageNameSize,
        _Out_writes_opt_(ModuleNameBufferSize) PSTR ModuleNameBuffer,
        _In_ ULONG ModuleNameBufferSize,
        _Out_opt_ PULONG ModuleNameSize,
        _Out_writes_opt_(LoadedImageNameBufferSize) PSTR LoadedImageNameBuffer,
        _In_ ULONG LoadedImageNameBufferSize,
        _Out_opt_ PULONG LoadedImageNameSize
        ) PURE;
    STDMETHOD(GetModuleParameters)(
        THIS_
        _In_ ULONG Count,
        _In_reads_opt_(Count) PULONG64 Bases,
        _In_ ULONG Start,
        _Out_writes_(Count) PDEBUG_MODULE_PARAMETERS Params
        ) PURE;
    STDMETHOD(GetSymbolModule)(
        THIS_
        _In_ PCSTR Symbol,
        _Out_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetTypeName)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetTypeId)(
        THIS_
        _In_ ULONG64 Module,
        _In_ PCSTR Name,
        _Out_ PULONG TypeId
        ) PURE;
    STDMETHOD(GetTypeSize)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_ PULONG Size
        ) PURE;
    STDMETHOD(GetFieldOffset)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ PCSTR Field,
        _Out_ PULONG Offset
        ) PURE;
    STDMETHOD(GetSymbolTypeId)(
        THIS_
        _In_ PCSTR Symbol,
        _Out_ PULONG TypeId,
        _Out_opt_ PULONG64 Module
        ) PURE;
    STDMETHOD(GetOffsetTypeId)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG TypeId,
        _Out_opt_ PULONG64 Module
        ) PURE;
    STDMETHOD(ReadTypedDataVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteTypedDataVirtual)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(OutputTypedDataVirtual)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(ReadTypedDataPhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesRead
        ) PURE;
    STDMETHOD(WriteTypedDataPhysical)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_reads_bytes_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BytesWritten
        ) PURE;
    STDMETHOD(OutputTypedDataPhysical)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 Offset,
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(GetScope)(
        THIS_
        _Out_opt_ PULONG64 InstructionOffset,
        _Out_opt_ PDEBUG_STACK_FRAME ScopeFrame,
        _Out_writes_bytes_opt_(ScopeContextSize) PVOID ScopeContext,
        _In_ ULONG ScopeContextSize
        ) PURE;
    STDMETHOD(SetScope)(
        THIS_
        _In_ ULONG64 InstructionOffset,
        _In_opt_ PDEBUG_STACK_FRAME ScopeFrame,
        _In_reads_bytes_opt_(ScopeContextSize) PVOID ScopeContext,
        _In_ ULONG ScopeContextSize
        ) PURE;
    STDMETHOD(ResetScope)(
        THIS
        ) PURE;
    STDMETHOD(GetScopeSymbolGroup)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PDEBUG_SYMBOL_GROUP Update,
        _Out_ PDEBUG_SYMBOL_GROUP* Symbols
        ) PURE;
    STDMETHOD(CreateSymbolGroup)(
        THIS_
        _Out_ PDEBUG_SYMBOL_GROUP* Group
        ) PURE;
    STDMETHOD(StartSymbolMatch)(
        THIS_
        _In_ PCSTR Pattern,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetNextSymbolMatch)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MatchSize,
        _Out_opt_ PULONG64 Offset
        ) PURE;
    STDMETHOD(EndSymbolMatch)(
        THIS_
        _In_ ULONG64 Handle
        ) PURE;
    STDMETHOD(Reload)(
        THIS_
        _In_ PCSTR Module
        ) PURE;
    STDMETHOD(GetSymbolPath)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(SetSymbolPath)(
        THIS_
        _In_ PCSTR Path
        ) PURE;
    STDMETHOD(AppendSymbolPath)(
        THIS_
        _In_ PCSTR Addition
        ) PURE;
    STDMETHOD(GetImagePath)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(SetImagePath)(
        THIS_
        _In_ PCSTR Path
        ) PURE;
    STDMETHOD(AppendImagePath)(
        THIS_
        _In_ PCSTR Addition
        ) PURE;
    STDMETHOD(GetSourcePath)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(GetSourcePathElement)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ElementSize
        ) PURE;
    STDMETHOD(SetSourcePath)(
        THIS_
        _In_ PCSTR Path
        ) PURE;
    STDMETHOD(AppendSourcePath)(
        THIS_
        _In_ PCSTR Addition
        ) PURE;
    STDMETHOD(FindSourceFile)(
        THIS_
        _In_ ULONG StartElement,
        _In_ PCSTR File,
        _In_ ULONG Flags,
        _Out_opt_ PULONG FoundElement,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FoundSize
        ) PURE;
    STDMETHOD(GetSourceFileLineOffsets)(
        THIS_
        _In_ PCSTR File,
        _Out_writes_opt_(BufferLines) PULONG64 Buffer,
        _In_ ULONG BufferLines,
        _Out_opt_ PULONG FileLines
        ) PURE;
    STDMETHOD(GetModuleVersionInformation)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _In_ PCSTR Item,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG VerInfoSize
        ) PURE;
    STDMETHOD(GetModuleNameString)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetConstantName)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG64 Value,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetFieldName)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG FieldIndex,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetTypeOptions)(
        THIS_
        _Out_ PULONG Options
        ) PURE;
    STDMETHOD(AddTypeOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(RemoveTypeOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(SetTypeOptions)(
        THIS_
        _In_ ULONG Options
        ) PURE;
    STDMETHOD(GetNameByOffsetWide)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetOffsetByNameWide)(
        THIS_
        _In_ PCWSTR Symbol,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetNearNameByOffsetWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ LONG Delta,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetLineByOffsetWide)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_opt_ PULONG Line,
        _Out_writes_opt_(FileBufferSize) PWSTR FileBuffer,
        _In_ ULONG FileBufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetOffsetByLineWide)(
        THIS_
        _In_ ULONG Line,
        _In_ PCWSTR File,
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetModuleByModuleNameWide)(
        THIS_
        _In_ PCWSTR Name,
        _In_ ULONG StartIndex,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetSymbolModuleWide)(
        THIS_
        _In_ PCWSTR Symbol,
        _Out_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetTypeNameWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetTypeIdWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ PCWSTR Name,
        _Out_ PULONG TypeId
        ) PURE;
    STDMETHOD(GetFieldOffsetWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ PCWSTR Field,
        _Out_ PULONG Offset
        ) PURE;
    STDMETHOD(GetSymbolTypeIdWide)(
        THIS_
        _In_ PCWSTR Symbol,
        _Out_ PULONG TypeId,
        _Out_opt_ PULONG64 Module
        ) PURE;
    STDMETHOD(GetScopeSymbolGroup2)(
        THIS_
        _In_ ULONG Flags,
        _In_opt_ PDEBUG_SYMBOL_GROUP2 Update,
        _Out_ PDEBUG_SYMBOL_GROUP2* Symbols
        ) PURE;
    STDMETHOD(CreateSymbolGroup2)(
        THIS_
        _Out_ PDEBUG_SYMBOL_GROUP2* Group
        ) PURE;
    STDMETHOD(StartSymbolMatchWide)(
        THIS_
        _In_ PCWSTR Pattern,
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetNextSymbolMatchWide)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG MatchSize,
        _Out_opt_ PULONG64 Offset
        ) PURE;
    STDMETHOD(ReloadWide)(
        THIS_
        _In_ PCWSTR Module
        ) PURE;
    STDMETHOD(GetSymbolPathWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(SetSymbolPathWide)(
        THIS_
        _In_ PCWSTR Path
        ) PURE;
    STDMETHOD(AppendSymbolPathWide)(
        THIS_
        _In_ PCWSTR Addition
        ) PURE;
    STDMETHOD(GetImagePathWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(SetImagePathWide)(
        THIS_
        _In_ PCWSTR Path
        ) PURE;
    STDMETHOD(AppendImagePathWide)(
        THIS_
        _In_ PCWSTR Addition
        ) PURE;
    STDMETHOD(GetSourcePathWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG PathSize
        ) PURE;
    STDMETHOD(GetSourcePathElementWide)(
        THIS_
        _In_ ULONG Index,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ElementSize
        ) PURE;
    STDMETHOD(SetSourcePathWide)(
        THIS_
        _In_ PCWSTR Path
        ) PURE;
    STDMETHOD(AppendSourcePathWide)(
        THIS_
        _In_ PCWSTR Addition
        ) PURE;
    STDMETHOD(FindSourceFileWide)(
        THIS_
        _In_ ULONG StartElement,
        _In_ PCWSTR File,
        _In_ ULONG Flags,
        _Out_opt_ PULONG FoundElement,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG FoundSize
        ) PURE;
    STDMETHOD(GetSourceFileLineOffsetsWide)(
        THIS_
        _In_ PCWSTR File,
        _Out_writes_opt_(BufferLines) PULONG64 Buffer,
        _In_ ULONG BufferLines,
        _Out_opt_ PULONG FileLines
        ) PURE;
    STDMETHOD(GetModuleVersionInformationWide)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _In_ PCWSTR Item,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG VerInfoSize
        ) PURE;
    STDMETHOD(GetModuleNameStringWide)(
        THIS_
        _In_ ULONG Which,
        _In_ ULONG Index,
        _In_ ULONG64 Base,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetConstantNameWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG64 Value,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetFieldNameWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG TypeId,
        _In_ ULONG FieldIndex,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(IsManagedModule)(
        THIS_
        _In_ ULONG Index,
        _In_ ULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByModuleName2)(
        THIS_
        _In_ PCSTR Name,
        _In_ ULONG StartIndex,
        _In_ ULONG Flags,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByModuleName2Wide)(
        THIS_
        _In_ PCWSTR Name,
        _In_ ULONG StartIndex,
        _In_ ULONG Flags,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(GetModuleByOffset2)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG StartIndex,
        _In_ ULONG Flags,
        _Out_opt_ PULONG Index,
        _Out_opt_ PULONG64 Base
        ) PURE;
    STDMETHOD(AddSyntheticModule)(
        THIS_
        _In_ ULONG64 Base,
        _In_ ULONG Size,
        _In_ PCSTR ImagePath,
        _In_ PCSTR ModuleName,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(AddSyntheticModuleWide)(
        THIS_
        _In_ ULONG64 Base,
        _In_ ULONG Size,
        _In_ PCWSTR ImagePath,
        _In_ PCWSTR ModuleName,
        _In_ ULONG Flags
        ) PURE;
    STDMETHOD(RemoveSyntheticModule)(
        THIS_
        _In_ ULONG64 Base
        ) PURE;
    STDMETHOD(GetCurrentScopeFrameIndex)(
        THIS_
        _Out_ PULONG Index
        ) PURE;
    STDMETHOD(SetScopeFrameByIndex)(
        THIS_
        _In_ ULONG Index
        ) PURE;
    STDMETHOD(SetScopeFromJitDebugInfo)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG64 InfoOffset
        ) PURE;
    STDMETHOD(SetScopeFromStoredEvent)(
        THIS
        ) PURE;
    STDMETHOD(OutputSymbolByOffset)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ ULONG64 Offset
        ) PURE;
    STDMETHOD(GetFunctionEntryByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG BufferNeeded
        ) PURE;
    STDMETHOD(GetFieldTypeAndOffset)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG ContainerTypeId,
        _In_ PCSTR Field,
        _Out_opt_ PULONG FieldTypeId,
        _Out_opt_ PULONG Offset
        ) PURE;
    STDMETHOD(GetFieldTypeAndOffsetWide)(
        THIS_
        _In_ ULONG64 Module,
        _In_ ULONG ContainerTypeId,
        _In_ PCWSTR Field,
        _Out_opt_ PULONG FieldTypeId,
        _Out_opt_ PULONG Offset
        ) PURE;
    STDMETHOD(AddSyntheticSymbol)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Size,
        _In_ PCSTR Name,
        _In_ ULONG Flags,
        _Out_opt_ PDEBUG_MODULE_AND_ID Id
        ) PURE;
    STDMETHOD(AddSyntheticSymbolWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Size,
        _In_ PCWSTR Name,
        _In_ ULONG Flags,
        _Out_opt_ PDEBUG_MODULE_AND_ID Id
        ) PURE;
    STDMETHOD(RemoveSyntheticSymbol)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID Id
        ) PURE;
    STDMETHOD(GetSymbolEntriesByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(IdsCount) PDEBUG_MODULE_AND_ID Ids,
        _Out_writes_opt_(IdsCount) PULONG64 Displacements,
        _In_ ULONG IdsCount,
        _Out_opt_ PULONG Entries
        ) PURE;
    STDMETHOD(GetSymbolEntriesByName)(
        THIS_
        _In_ PCSTR Symbol,
        _In_ ULONG Flags,
        _Out_writes_opt_(IdsCount) PDEBUG_MODULE_AND_ID Ids,
        _In_ ULONG IdsCount,
        _Out_opt_ PULONG Entries
        ) PURE;
    STDMETHOD(GetSymbolEntriesByNameWide)(
        THIS_
        _In_ PCWSTR Symbol,
        _In_ ULONG Flags,
        _Out_writes_opt_(IdsCount) PDEBUG_MODULE_AND_ID Ids,
        _In_ ULONG IdsCount,
        _Out_opt_ PULONG Entries
        ) PURE;
    STDMETHOD(GetSymbolEntryByToken)(
        THIS_
        _In_ ULONG64 ModuleBase,
        _In_ ULONG Token,
        _Out_ PDEBUG_MODULE_AND_ID Id
        ) PURE;
    STDMETHOD(GetSymbolEntryInformation)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID Id,
        _Out_ PDEBUG_SYMBOL_ENTRY Info
        ) PURE;
    STDMETHOD(GetSymbolEntryString)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID Id,
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSymbolEntryStringWide)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID Id,
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSymbolEntryOffsetRegions)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID Id,
        _In_ ULONG Flags,
        _Out_writes_opt_(RegionsCount) PDEBUG_OFFSET_REGION Regions,
        _In_ ULONG RegionsCount,
        _Out_opt_ PULONG RegionsAvail
        ) PURE;
    STDMETHOD(GetSymbolEntryBySymbolEntry)(
        THIS_
        _In_ PDEBUG_MODULE_AND_ID FromId,
        _In_ ULONG Flags,
        _Out_ PDEBUG_MODULE_AND_ID ToId
        ) PURE;
    STDMETHOD(GetSourceEntriesByOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG Flags,
        _Out_writes_opt_(EntriesCount) PDEBUG_SYMBOL_SOURCE_ENTRY Entries,
        _In_ ULONG EntriesCount,
        _Out_opt_ PULONG EntriesAvail
        ) PURE;
    STDMETHOD(GetSourceEntriesByLine)(
        THIS_
        _In_ ULONG Line,
        _In_ PCSTR File,
        _In_ ULONG Flags,
        _Out_writes_opt_(EntriesCount) PDEBUG_SYMBOL_SOURCE_ENTRY Entries,
        _In_ ULONG EntriesCount,
        _Out_opt_ PULONG EntriesAvail
        ) PURE;
    STDMETHOD(GetSourceEntriesByLineWide)(
        THIS_
        _In_ ULONG Line,
        _In_ PCWSTR File,
        _In_ ULONG Flags,
        _Out_writes_opt_(EntriesCount) PDEBUG_SYMBOL_SOURCE_ENTRY Entries,
        _In_ ULONG EntriesCount,
        _Out_opt_ PULONG EntriesAvail
        ) PURE;
    STDMETHOD(GetSourceEntryString)(
        THIS_
        _In_ PDEBUG_SYMBOL_SOURCE_ENTRY Entry,
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSourceEntryStringWide)(
        THIS_
        _In_ PDEBUG_SYMBOL_SOURCE_ENTRY Entry,
        _In_ ULONG Which,
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG StringSize
        ) PURE;
    STDMETHOD(GetSourceEntryOffsetRegions)(
        THIS_
        _In_ PDEBUG_SYMBOL_SOURCE_ENTRY Entry,
        _In_ ULONG Flags,
        _Out_writes_opt_(RegionsCount) PDEBUG_OFFSET_REGION Regions,
        _In_ ULONG RegionsCount,
        _Out_opt_ PULONG RegionsAvail
        ) PURE;
    STDMETHOD(GetSourceEntryBySourceEntry)(
        THIS_
        _In_ PDEBUG_SYMBOL_SOURCE_ENTRY FromEntry,
        _In_ ULONG Flags,
        _Out_ PDEBUG_SYMBOL_SOURCE_ENTRY ToEntry
        ) PURE;
    STDMETHOD(GetScopeEx)(
        THIS_
        _Out_opt_ PULONG64 InstructionOffset,
        _Out_opt_ PDEBUG_STACK_FRAME_EX ScopeFrame,
        _Out_writes_bytes_opt_(ScopeContextSize) PVOID ScopeContext,
        _In_ ULONG ScopeContextSize
        ) PURE;
    STDMETHOD(SetScopeEx)(
        THIS_
        _In_ ULONG64 InstructionOffset,
        _In_opt_ PDEBUG_STACK_FRAME_EX ScopeFrame,
        _In_reads_bytes_opt_(ScopeContextSize) PVOID ScopeContext,
        _In_ ULONG ScopeContextSize
        ) PURE;
    STDMETHOD(GetNameByInlineContext)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG InlineContext,
        _Out_writes_opt_(NameBufferSize) PSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetNameByInlineContextWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG InlineContext,
        _Out_writes_opt_(NameBufferSize) PWSTR NameBuffer,
        _In_ ULONG NameBufferSize,
        _Out_opt_ PULONG NameSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetLineByInlineContext)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG InlineContext,
        _Out_opt_ PULONG Line,
        _Out_writes_opt_(FileBufferSize) PSTR FileBuffer,
        _In_ ULONG FileBufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(GetLineByInlineContextWide)(
        THIS_
        _In_ ULONG64 Offset,
        _In_ ULONG InlineContext,
        _Out_opt_ PULONG Line,
        _Out_writes_opt_(FileBufferSize) PWSTR FileBuffer,
        _In_ ULONG FileBufferSize,
        _Out_opt_ PULONG FileSize,
        _Out_opt_ PULONG64 Displacement
        ) PURE;
    STDMETHOD(OutputSymbolByInlineContext)(
        THIS_
        _In_ ULONG OutputControl,
        _In_ ULONG Flags,
        _In_ ULONG64 Offset,
        _In_ ULONG InlineContext
        ) PURE;
    STDMETHOD(GetCurrentScopeFrameIndexEx)(
        THIS_
        _In_ ULONG Flags,
        _Out_ PULONG Index
        ) PURE;
    STDMETHOD(SetScopeFrameByIndexEx)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG Index
        ) PURE;
};
DECLARE_INTERFACE_(IDebugSystemObjects, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetEventThread)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetEventProcess)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadId)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(SetCurrentThreadId)(
        THIS_
        _In_ ULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessId)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(SetCurrentProcessId)(
        THIS_
        _In_ ULONG Id
        ) PURE;
    STDMETHOD(GetNumberThreads)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetTotalNumberThreads)(
        THIS_
        _Out_ PULONG Total,
        _Out_ PULONG LargestProcess
        ) PURE;
    STDMETHOD(GetThreadIdsByIndex)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_opt_(Count) PULONG Ids,
        _Out_writes_opt_(Count) PULONG SysIds
        ) PURE;
    STDMETHOD(GetThreadIdByProcessor)(
        THIS_
        _In_ ULONG Processor,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadDataOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetThreadIdByDataOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadTeb)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetThreadIdByTeb)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadSystemId)(
        THIS_
        _Out_ PULONG SysId
        ) PURE;
    STDMETHOD(GetThreadIdBySystemId)(
        THIS_
        _In_ ULONG SysId,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadHandle)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetThreadIdByHandle)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetNumberProcesses)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetProcessIdsByIndex)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_opt_(Count) PULONG Ids,
        _Out_writes_opt_(Count) PULONG SysIds
        ) PURE;
    STDMETHOD(GetCurrentProcessDataOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetProcessIdByDataOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessPeb)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetProcessIdByPeb)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessSystemId)(
        THIS_
        _Out_ PULONG SysId
        ) PURE;
    STDMETHOD(GetProcessIdBySystemId)(
        THIS_
        _In_ ULONG SysId,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessHandle)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetProcessIdByHandle)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessExecutableName)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ExeSize
        ) PURE;
};
DECLARE_INTERFACE_(IDebugSystemObjects2, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetEventThread)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetEventProcess)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadId)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(SetCurrentThreadId)(
        THIS_
        _In_ ULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessId)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(SetCurrentProcessId)(
        THIS_
        _In_ ULONG Id
        ) PURE;
    STDMETHOD(GetNumberThreads)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetTotalNumberThreads)(
        THIS_
        _Out_ PULONG Total,
        _Out_ PULONG LargestProcess
        ) PURE;
    STDMETHOD(GetThreadIdsByIndex)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_opt_(Count) PULONG Ids,
        _Out_writes_opt_(Count) PULONG SysIds
        ) PURE;
    STDMETHOD(GetThreadIdByProcessor)(
        THIS_
        _In_ ULONG Processor,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadDataOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetThreadIdByDataOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadTeb)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetThreadIdByTeb)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadSystemId)(
        THIS_
        _Out_ PULONG SysId
        ) PURE;
    STDMETHOD(GetThreadIdBySystemId)(
        THIS_
        _In_ ULONG SysId,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadHandle)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetThreadIdByHandle)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetNumberProcesses)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetProcessIdsByIndex)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_opt_(Count) PULONG Ids,
        _Out_writes_opt_(Count) PULONG SysIds
        ) PURE;
    STDMETHOD(GetCurrentProcessDataOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetProcessIdByDataOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessPeb)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetProcessIdByPeb)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessSystemId)(
        THIS_
        _Out_ PULONG SysId
        ) PURE;
    STDMETHOD(GetProcessIdBySystemId)(
        THIS_
        _In_ ULONG SysId,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessHandle)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetProcessIdByHandle)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessExecutableName)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ExeSize
        ) PURE;
    STDMETHOD(GetCurrentProcessUpTime)(
        THIS_
        _Out_ PULONG UpTime
        ) PURE;
    STDMETHOD(GetImplicitThreadDataOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(SetImplicitThreadDataOffset)(
        THIS_
        _In_ ULONG64 Offset
        ) PURE;
    STDMETHOD(GetImplicitProcessDataOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(SetImplicitProcessDataOffset)(
        THIS_
        _In_ ULONG64 Offset
        ) PURE;
};
DECLARE_INTERFACE_(IDebugSystemObjects3, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetEventThread)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetEventProcess)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadId)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(SetCurrentThreadId)(
        THIS_
        _In_ ULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessId)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(SetCurrentProcessId)(
        THIS_
        _In_ ULONG Id
        ) PURE;
    STDMETHOD(GetNumberThreads)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetTotalNumberThreads)(
        THIS_
        _Out_ PULONG Total,
        _Out_ PULONG LargestProcess
        ) PURE;
    STDMETHOD(GetThreadIdsByIndex)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_opt_(Count) PULONG Ids,
        _Out_writes_opt_(Count) PULONG SysIds
        ) PURE;
    STDMETHOD(GetThreadIdByProcessor)(
        THIS_
        _In_ ULONG Processor,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadDataOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetThreadIdByDataOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadTeb)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetThreadIdByTeb)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadSystemId)(
        THIS_
        _Out_ PULONG SysId
        ) PURE;
    STDMETHOD(GetThreadIdBySystemId)(
        THIS_
        _In_ ULONG SysId,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadHandle)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetThreadIdByHandle)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetNumberProcesses)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetProcessIdsByIndex)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_opt_(Count) PULONG Ids,
        _Out_writes_opt_(Count) PULONG SysIds
        ) PURE;
    STDMETHOD(GetCurrentProcessDataOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetProcessIdByDataOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessPeb)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetProcessIdByPeb)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessSystemId)(
        THIS_
        _Out_ PULONG SysId
        ) PURE;
    STDMETHOD(GetProcessIdBySystemId)(
        THIS_
        _In_ ULONG SysId,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessHandle)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetProcessIdByHandle)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessExecutableName)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ExeSize
        ) PURE;
    STDMETHOD(GetCurrentProcessUpTime)(
        THIS_
        _Out_ PULONG UpTime
        ) PURE;
    STDMETHOD(GetImplicitThreadDataOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(SetImplicitThreadDataOffset)(
        THIS_
        _In_ ULONG64 Offset
        ) PURE;
    STDMETHOD(GetImplicitProcessDataOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(SetImplicitProcessDataOffset)(
        THIS_
        _In_ ULONG64 Offset
        ) PURE;
    STDMETHOD(GetEventSystem)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentSystemId)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(SetCurrentSystemId)(
        THIS_
        _In_ ULONG Id
        ) PURE;
    STDMETHOD(GetNumberSystems)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetSystemIdsByIndex)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PULONG Ids
        ) PURE;
    STDMETHOD(GetTotalNumberThreadsAndProcesses)(
        THIS_
        _Out_ PULONG TotalThreads,
        _Out_ PULONG TotalProcesses,
        _Out_ PULONG LargestProcessThreads,
        _Out_ PULONG LargestSystemThreads,
        _Out_ PULONG LargestSystemProcesses
        ) PURE;
    STDMETHOD(GetCurrentSystemServer)(
        THIS_
        _Out_ PULONG64 Server
        ) PURE;
    STDMETHOD(GetSystemByServer)(
        THIS_
        _In_ ULONG64 Server,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentSystemServerName)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
};
DECLARE_INTERFACE_(IDebugSystemObjects4, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetEventThread)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetEventProcess)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadId)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(SetCurrentThreadId)(
        THIS_
        _In_ ULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessId)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(SetCurrentProcessId)(
        THIS_
        _In_ ULONG Id
        ) PURE;
    STDMETHOD(GetNumberThreads)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetTotalNumberThreads)(
        THIS_
        _Out_ PULONG Total,
        _Out_ PULONG LargestProcess
        ) PURE;
    STDMETHOD(GetThreadIdsByIndex)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_opt_(Count) PULONG Ids,
        _Out_writes_opt_(Count) PULONG SysIds
        ) PURE;
    STDMETHOD(GetThreadIdByProcessor)(
        THIS_
        _In_ ULONG Processor,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadDataOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetThreadIdByDataOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadTeb)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetThreadIdByTeb)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadSystemId)(
        THIS_
        _Out_ PULONG SysId
        ) PURE;
    STDMETHOD(GetThreadIdBySystemId)(
        THIS_
        _In_ ULONG SysId,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentThreadHandle)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetThreadIdByHandle)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetNumberProcesses)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetProcessIdsByIndex)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_opt_(Count) PULONG Ids,
        _Out_writes_opt_(Count) PULONG SysIds
        ) PURE;
    STDMETHOD(GetCurrentProcessDataOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetProcessIdByDataOffset)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessPeb)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(GetProcessIdByPeb)(
        THIS_
        _In_ ULONG64 Offset,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessSystemId)(
        THIS_
        _Out_ PULONG SysId
        ) PURE;
    STDMETHOD(GetProcessIdBySystemId)(
        THIS_
        _In_ ULONG SysId,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessHandle)(
        THIS_
        _Out_ PULONG64 Handle
        ) PURE;
    STDMETHOD(GetProcessIdByHandle)(
        THIS_
        _In_ ULONG64 Handle,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentProcessExecutableName)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ExeSize
        ) PURE;
    STDMETHOD(GetCurrentProcessUpTime)(
        THIS_
        _Out_ PULONG UpTime
        ) PURE;
    STDMETHOD(GetImplicitThreadDataOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(SetImplicitThreadDataOffset)(
        THIS_
        _In_ ULONG64 Offset
        ) PURE;
    STDMETHOD(GetImplicitProcessDataOffset)(
        THIS_
        _Out_ PULONG64 Offset
        ) PURE;
    STDMETHOD(SetImplicitProcessDataOffset)(
        THIS_
        _In_ ULONG64 Offset
        ) PURE;
    STDMETHOD(GetEventSystem)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentSystemId)(
        THIS_
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(SetCurrentSystemId)(
        THIS_
        _In_ ULONG Id
        ) PURE;
    STDMETHOD(GetNumberSystems)(
        THIS_
        _Out_ PULONG Number
        ) PURE;
    STDMETHOD(GetSystemIdsByIndex)(
        THIS_
        _In_ ULONG Start,
        _In_ ULONG Count,
        _Out_writes_(Count) PULONG Ids
        ) PURE;
    STDMETHOD(GetTotalNumberThreadsAndProcesses)(
        THIS_
        _Out_ PULONG TotalThreads,
        _Out_ PULONG TotalProcesses,
        _Out_ PULONG LargestProcessThreads,
        _Out_ PULONG LargestSystemThreads,
        _Out_ PULONG LargestSystemProcesses
        ) PURE;
    STDMETHOD(GetCurrentSystemServer)(
        THIS_
        _Out_ PULONG64 Server
        ) PURE;
    STDMETHOD(GetSystemByServer)(
        THIS_
        _In_ ULONG64 Server,
        _Out_ PULONG Id
        ) PURE;
    STDMETHOD(GetCurrentSystemServerName)(
        THIS_
        _Out_writes_opt_(BufferSize) PSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
    STDMETHOD(GetCurrentProcessExecutableNameWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG ExeSize
        ) PURE;
    STDMETHOD(GetCurrentSystemServerNameWide)(
        THIS_
        _Out_writes_opt_(BufferSize) PWSTR Buffer,
        _In_ ULONG BufferSize,
        _Out_opt_ PULONG NameSize
        ) PURE;
};
FORCEINLINE void
DebugCommandException(ULONG Command, ULONG ArgSize, PVOID Arg)
{
    ULONG_PTR ExArgs[4];
    ExArgs[0] = DEBUG_COMMAND_EXCEPTION_ID;
    ExArgs[1] = Command;
    ExArgs[2] = ArgSize;
    ExArgs[3] = (ULONG_PTR)Arg;
    RaiseException(DBG_COMMAND_EXCEPTION, 0, 4, ExArgs);
}
    ((((Major) & 0xffff) << 16) | ((Minor) & 0xffff))
typedef HRESULT (CALLBACK* PDEBUG_EXTENSION_INITIALIZE)
    (_Out_ PULONG Version, _Out_ PULONG Flags);
typedef void (CALLBACK* PDEBUG_EXTENSION_UNINITIALIZE)
    (void);
typedef HRESULT (CALLBACK* PDEBUG_EXTENSION_CANUNLOAD)
    (void);
typedef void (CALLBACK* PDEBUG_EXTENSION_UNLOAD)
    (void);
typedef void (CALLBACK* PDEBUG_EXTENSION_NOTIFY)
    (_In_ ULONG Notify, _In_ ULONG64 Argument);
    HRESULT_FROM_NT(0xC0000271L)
    HRESULT_FROM_NT(0xC00000EEL)
typedef HRESULT (CALLBACK* PDEBUG_EXTENSION_CALL)
    (_In_ PDEBUG_CLIENT Client, _In_opt_ PCSTR Args);
typedef HRESULT (CALLBACK* PDEBUG_EXTENSION_KNOWN_STRUCT)
    (_In_ ULONG Flags,
     _In_ ULONG64 Offset,
     _In_opt_ PSTR TypeName,
     _Out_writes_opt_(*BufferChars) PSTR Buffer,
     _Inout_opt_ PULONG BufferChars);
typedef HRESULT (CALLBACK* PDEBUG_EXTENSION_KNOWN_STRUCT_EX)
    (_In_ PDEBUG_CLIENT Client,
     _In_ ULONG Flags,
     _In_ ULONG64 Offset,
     _In_opt_ PCSTR TypeName,
     _Out_writes_opt_(*BufferChars) PSTR Buffer,
     _Inout_opt_ PULONG BufferChars);
typedef PDEBUG_EXTENSION_KNOWN_STRUCT PDEBUG_ENTENSION_KNOWNSTRUCT;
typedef HRESULT (CALLBACK* PDEBUG_EXTENSION_QUERY_VALUE_NAMES)
    (_In_ PDEBUG_CLIENT Client,
     _In_ ULONG Flags,
     _Out_writes_(BufferChars) PWSTR Buffer,
     _In_ ULONG BufferChars,
     _Out_ PULONG BufferNeeded);
typedef HRESULT (CALLBACK* PDEBUG_EXTENSION_PROVIDE_VALUE)
    (_In_ PDEBUG_CLIENT Client,
     _In_ ULONG Flags,
     _In_ PCWSTR Name,
     _Out_ PULONG64 Value,
     _Out_ PULONG64 TypeModBase,
     _Out_ PULONG TypeId,
     _Out_ PULONG TypeFlags);
};
typedef HRESULT (CALLBACK* PDEBUG_STACK_PROVIDER_BEGINTHREADSTACKRECONSTRUCTION)
    (
    _In_ ULONG StreamType,
    _In_reads_(BufferSize) PVOID MiniDumpStreamBuffer,
    _In_ ULONG BufferSize);
typedef HRESULT (CALLBACK* PDEBUG_STACK_PROVIDER_RECONSTRUCTSTACK)
    (
    _In_ ULONG SystemThreadId,
    _In_reads_(CountNativeFrames) PDEBUG_STACK_FRAME_EX NativeFrames,
    _In_ ULONG CountNativeFrames,
    _Outptr_result_buffer_(*StackSymFramesFilled) PSTACK_SYM_FRAME_INFO *StackSymFrames,
    _Out_ PULONG StackSymFramesFilled);
typedef HRESULT (CALLBACK* PDEBUG_STACK_PROVIDER_FREESTACKSYMFRAMES)
    (
    _In_opt_ PSTACK_SYM_FRAME_INFO StackSymFrames);
typedef HRESULT (CALLBACK* PDEBUG_STACK_PROVIDER_ENDTHREADSTACKRECONSTRUCTION)
    (void);
class DebugBaseEventCallbacks : public IDebugEventCallbacks
{
public:
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        )
    {
        *Interface = NULL;
        if (IsEqualIID(InterfaceId, IID_IUnknown) ||
            IsEqualIID(InterfaceId, IID_IDebugEventCallbacks))
        {
            *Interface = (IDebugEventCallbacks *)this;
            AddRef();
            return S_OK;
        }
        else
        {
            return E_NOINTERFACE;
        }
    }
    STDMETHOD(Breakpoint)(
        THIS_
        _In_ PDEBUG_BREAKPOINT Bp
        )
    {
        UNREFERENCED_PARAMETER(Bp);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(Exception)(
        THIS_
        _In_ PEXCEPTION_RECORD64 Exception,
        _In_ ULONG FirstChance
        )
    {
        UNREFERENCED_PARAMETER(Exception);
        UNREFERENCED_PARAMETER(FirstChance);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(CreateThread)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ ULONG64 DataOffset,
        _In_ ULONG64 StartOffset
        )
    {
        UNREFERENCED_PARAMETER(Handle);
        UNREFERENCED_PARAMETER(DataOffset);
        UNREFERENCED_PARAMETER(StartOffset);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(ExitThread)(
        THIS_
        _In_ ULONG ExitCode
        )
    {
        UNREFERENCED_PARAMETER(ExitCode);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(CreateProcess)(
        THIS_
        _In_ ULONG64 ImageFileHandle,
        _In_ ULONG64 Handle,
        _In_ ULONG64 BaseOffset,
        _In_ ULONG ModuleSize,
        _In_ PCSTR ModuleName,
        _In_ PCSTR ImageName,
        _In_ ULONG CheckSum,
        _In_ ULONG TimeDateStamp,
        _In_ ULONG64 InitialThreadHandle,
        _In_ ULONG64 ThreadDataOffset,
        _In_ ULONG64 StartOffset
        )
    {
        UNREFERENCED_PARAMETER(ImageFileHandle);
        UNREFERENCED_PARAMETER(Handle);
        UNREFERENCED_PARAMETER(BaseOffset);
        UNREFERENCED_PARAMETER(ModuleSize);
        UNREFERENCED_PARAMETER(ModuleName);
        UNREFERENCED_PARAMETER(ImageName);
        UNREFERENCED_PARAMETER(CheckSum);
        UNREFERENCED_PARAMETER(TimeDateStamp);
        UNREFERENCED_PARAMETER(InitialThreadHandle);
        UNREFERENCED_PARAMETER(ThreadDataOffset);
        UNREFERENCED_PARAMETER(StartOffset);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(ExitProcess)(
        THIS_
        _In_ ULONG ExitCode
        )
    {
        UNREFERENCED_PARAMETER(ExitCode);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(LoadModule)(
        THIS_
        _In_ ULONG64 ImageFileHandle,
        _In_ ULONG64 BaseOffset,
        _In_ ULONG ModuleSize,
        _In_ PCSTR ModuleName,
        _In_ PCSTR ImageName,
        _In_ ULONG CheckSum,
        _In_ ULONG TimeDateStamp
        )
    {
        UNREFERENCED_PARAMETER(ImageFileHandle);
        UNREFERENCED_PARAMETER(BaseOffset);
        UNREFERENCED_PARAMETER(ModuleSize);
        UNREFERENCED_PARAMETER(ModuleName);
        UNREFERENCED_PARAMETER(ImageName);
        UNREFERENCED_PARAMETER(CheckSum);
        UNREFERENCED_PARAMETER(TimeDateStamp);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(UnloadModule)(
        THIS_
        _In_ PCSTR ImageBaseName,
        _In_ ULONG64 BaseOffset
        )
    {
        UNREFERENCED_PARAMETER(ImageBaseName);
        UNREFERENCED_PARAMETER(BaseOffset);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(SystemError)(
        THIS_
        _In_ ULONG Error,
        _In_ ULONG Level
        )
    {
        UNREFERENCED_PARAMETER(Error);
        UNREFERENCED_PARAMETER(Level);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(SessionStatus)(
        THIS_
        _In_ ULONG Status
        )
    {
        UNREFERENCED_PARAMETER(Status);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(ChangeDebuggeeState)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG64 Argument
        )
    {
        UNREFERENCED_PARAMETER(Flags);
        UNREFERENCED_PARAMETER(Argument);
        return S_OK;
    }
    STDMETHOD(ChangeEngineState)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG64 Argument
        )
    {
        UNREFERENCED_PARAMETER(Flags);
        UNREFERENCED_PARAMETER(Argument);
        return S_OK;
    }
    STDMETHOD(ChangeSymbolState)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG64 Argument
        )
    {
        UNREFERENCED_PARAMETER(Flags);
        UNREFERENCED_PARAMETER(Argument);
        return S_OK;
    }
};
class DebugBaseEventCallbacksWide : public IDebugEventCallbacksWide
{
public:
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        )
    {
        *Interface = NULL;
        if (IsEqualIID(InterfaceId, IID_IUnknown) ||
            IsEqualIID(InterfaceId, IID_IDebugEventCallbacksWide))
        {
            *Interface = (IDebugEventCallbacksWide *)this;
            AddRef();
            return S_OK;
        }
        else
        {
            return E_NOINTERFACE;
        }
    }
    STDMETHOD(Breakpoint)(
        THIS_
        _In_ PDEBUG_BREAKPOINT2 Bp
        )
    {
        UNREFERENCED_PARAMETER(Bp);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(Exception)(
        THIS_
        _In_ PEXCEPTION_RECORD64 Exception,
        _In_ ULONG FirstChance
        )
    {
        UNREFERENCED_PARAMETER(Exception);
        UNREFERENCED_PARAMETER(FirstChance);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(CreateThread)(
        THIS_
        _In_ ULONG64 Handle,
        _In_ ULONG64 DataOffset,
        _In_ ULONG64 StartOffset
        )
    {
        UNREFERENCED_PARAMETER(Handle);
        UNREFERENCED_PARAMETER(DataOffset);
        UNREFERENCED_PARAMETER(StartOffset);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(ExitThread)(
        THIS_
        _In_ ULONG ExitCode
        )
    {
        UNREFERENCED_PARAMETER(ExitCode);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(CreateProcess)(
        THIS_
        _In_ ULONG64 ImageFileHandle,
        _In_ ULONG64 Handle,
        _In_ ULONG64 BaseOffset,
        _In_ ULONG ModuleSize,
        _In_ PCWSTR ModuleName,
        _In_ PCWSTR ImageName,
        _In_ ULONG CheckSum,
        _In_ ULONG TimeDateStamp,
        _In_ ULONG64 InitialThreadHandle,
        _In_ ULONG64 ThreadDataOffset,
        _In_ ULONG64 StartOffset
        )
    {
        UNREFERENCED_PARAMETER(ImageFileHandle);
        UNREFERENCED_PARAMETER(Handle);
        UNREFERENCED_PARAMETER(BaseOffset);
        UNREFERENCED_PARAMETER(ModuleSize);
        UNREFERENCED_PARAMETER(ModuleName);
        UNREFERENCED_PARAMETER(ImageName);
        UNREFERENCED_PARAMETER(CheckSum);
        UNREFERENCED_PARAMETER(TimeDateStamp);
        UNREFERENCED_PARAMETER(InitialThreadHandle);
        UNREFERENCED_PARAMETER(ThreadDataOffset);
        UNREFERENCED_PARAMETER(StartOffset);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(ExitProcess)(
        THIS_
        _In_ ULONG ExitCode
        )
    {
        UNREFERENCED_PARAMETER(ExitCode);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(LoadModule)(
        THIS_
        _In_ ULONG64 ImageFileHandle,
        _In_ ULONG64 BaseOffset,
        _In_ ULONG ModuleSize,
        _In_ PCWSTR ModuleName,
        _In_ PCWSTR ImageName,
        _In_ ULONG CheckSum,
        _In_ ULONG TimeDateStamp
        )
    {
        UNREFERENCED_PARAMETER(ImageFileHandle);
        UNREFERENCED_PARAMETER(BaseOffset);
        UNREFERENCED_PARAMETER(ModuleSize);
        UNREFERENCED_PARAMETER(ModuleName);
        UNREFERENCED_PARAMETER(ImageName);
        UNREFERENCED_PARAMETER(CheckSum);
        UNREFERENCED_PARAMETER(TimeDateStamp);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(UnloadModule)(
        THIS_
        _In_ PCWSTR ImageBaseName,
        _In_ ULONG64 BaseOffset
        )
    {
        UNREFERENCED_PARAMETER(ImageBaseName);
        UNREFERENCED_PARAMETER(BaseOffset);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(SystemError)(
        THIS_
        _In_ ULONG Error,
        _In_ ULONG Level
        )
    {
        UNREFERENCED_PARAMETER(Error);
        UNREFERENCED_PARAMETER(Level);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(SessionStatus)(
        THIS_
        _In_ ULONG Status
        )
    {
        UNREFERENCED_PARAMETER(Status);
        return DEBUG_STATUS_NO_CHANGE;
    }
    STDMETHOD(ChangeDebuggeeState)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG64 Argument
        )
    {
        UNREFERENCED_PARAMETER(Flags);
        UNREFERENCED_PARAMETER(Argument);
        return S_OK;
    }
    STDMETHOD(ChangeEngineState)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG64 Argument
        )
    {
        UNREFERENCED_PARAMETER(Flags);
        UNREFERENCED_PARAMETER(Argument);
        return S_OK;
    }
    STDMETHOD(ChangeSymbolState)(
        THIS_
        _In_ ULONG Flags,
        _In_ ULONG64 Argument
        )
    {
        UNREFERENCED_PARAMETER(Flags);
        UNREFERENCED_PARAMETER(Argument);
        return S_OK;
    }
};
#endif
#pragma endregion
