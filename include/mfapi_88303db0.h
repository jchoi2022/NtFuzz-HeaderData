#include <winapifamily.h>
       
#pragma pack(push, mfhrds)
#include <mfobjects.h>
#pragma pack(pop, mfhrds)
#include "mmreg.h"
#include <avrt.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI MFStartup( ULONG Version, DWORD dwFlags );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI MFShutdown();
STDAPI MFLockPlatform();
STDAPI MFUnlockPlatform();
typedef unsigned __int64 MFWORKITEM_KEY;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI MFPutWorkItem(
            DWORD dwQueue,
            IMFAsyncCallback * pCallback,
            IUnknown * pState);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI MFPutWorkItem2(
            DWORD dwQueue,
            LONG Priority,
            _In_ IMFAsyncCallback * pCallback,
            _In_opt_ IUnknown * pState);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI MFPutWorkItemEx(
            DWORD dwQueue,
            IMFAsyncResult * pResult);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI MFPutWorkItemEx2(
            DWORD dwQueue,
            LONG Priority,
            _In_ IMFAsyncResult * pResult);
STDAPI MFPutWaitingWorkItem (
            HANDLE hEvent,
            LONG Priority,
            _In_ IMFAsyncResult * pResult,
            _Out_opt_ MFWORKITEM_KEY * pKey
            );
STDAPI MFAllocateSerialWorkQueue (
            _In_ DWORD dwWorkQueue,
            _Out_ OUT DWORD * pdwWorkQueue);
STDAPI MFScheduleWorkItemEx(
            IMFAsyncResult * pResult,
            INT64 Timeout,
            _Out_opt_ MFWORKITEM_KEY * pKey);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI MFScheduleWorkItem(
            IMFAsyncCallback * pCallback,
            IUnknown * pState,
            INT64 Timeout,
            _Out_opt_ MFWORKITEM_KEY * pKey);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI MFCancelWorkItem(
            MFWORKITEM_KEY Key);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI MFGetTimerPeriodicity(
            _Out_ DWORD * Periodicity);
typedef void (*MFPERIODICCALLBACK)(IUnknown* pContext);
STDAPI MFAddPeriodicCallback(
            MFPERIODICCALLBACK Callback,
            IUnknown * pContext,
            _Out_opt_ DWORD * pdwKey);
STDAPI MFRemovePeriodicCallback(
            DWORD dwKey);
typedef enum
{
    MF_STANDARD_WORKQUEUE = 0,
    MF_WINDOW_WORKQUEUE = 1,
    MF_MULTITHREADED_WORKQUEUE = 2,
} MFASYNC_WORKQUEUE_TYPE;
STDAPI MFAllocateWorkQueueEx(
            _In_ MFASYNC_WORKQUEUE_TYPE WorkQueueType,
            _Out_ OUT DWORD * pdwWorkQueue);
STDAPI MFAllocateWorkQueue(
            _Out_ OUT DWORD * pdwWorkQueue);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI MFLockWorkQueue(
            _In_ DWORD dwWorkQueue);
STDAPI MFUnlockWorkQueue(
            _In_ DWORD dwWorkQueue);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI MFBeginRegisterWorkQueueWithMMCSS(
            DWORD dwWorkQueueId,
            _In_ LPCWSTR wszClass,
            DWORD dwTaskId,
            _In_ IMFAsyncCallback * pDoneCallback,
            _In_ IUnknown * pDoneState );
STDAPI MFBeginRegisterWorkQueueWithMMCSSEx(
            DWORD dwWorkQueueId,
            _In_ LPCWSTR wszClass,
            DWORD dwTaskId,
            LONG lPriority,
            _In_ IMFAsyncCallback * pDoneCallback,
            _In_ IUnknown * pDoneState );
STDAPI MFEndRegisterWorkQueueWithMMCSS(
            _In_ IMFAsyncResult * pResult,
            _Out_ DWORD * pdwTaskId );
STDAPI MFBeginUnregisterWorkQueueWithMMCSS(
            DWORD dwWorkQueueId,
            _In_ IMFAsyncCallback * pDoneCallback,
            _In_ IUnknown * pDoneState );
STDAPI MFEndUnregisterWorkQueueWithMMCSS(
            _In_ IMFAsyncResult * pResult );
STDAPI MFGetWorkQueueMMCSSClass(
            DWORD dwWorkQueueId,
            _Out_writes_to_opt_(*pcchClass,*pcchClass) LPWSTR pwszClass,
            _Inout_ DWORD *pcchClass );
STDAPI MFGetWorkQueueMMCSSTaskId(
            DWORD dwWorkQueueId,
            _Out_ LPDWORD pdwTaskId );
STDAPI MFRegisterPlatformWithMMCSS(
    _In_ PCWSTR wszClass,
    _Inout_ DWORD* pdwTaskId,
    _In_ LONG lPriority );
STDAPI MFUnregisterPlatformFromMMCSS();
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI MFLockSharedWorkQueue(
    _In_ PCWSTR wszClass,
    _In_ LONG BasePriority,
    _Inout_ DWORD* pdwTaskId,
    _Out_ DWORD* pID );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI MFGetWorkQueueMMCSSPriority(
            DWORD dwWorkQueueId,
            _Out_ LONG* lPriority );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI MFCreateAsyncResult(
    IUnknown * punkObject,
    IMFAsyncCallback * pCallback,
    IUnknown * punkState,
    _Out_ IMFAsyncResult ** ppAsyncResult );
STDAPI MFInvokeCallback(
    IMFAsyncResult * pAsyncResult );
typedef struct tagMFASYNCRESULT
{
    IMFAsyncResult AsyncResult;
    OVERLAPPED overlapped;
    IMFAsyncCallback * pCallback;
    HRESULT hrStatusResult;
    DWORD dwBytesTransferred;
    HANDLE hEvent;
} MFASYNCRESULT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI MFCreateFile(
    MF_FILE_ACCESSMODE AccessMode,
    MF_FILE_OPENMODE OpenMode,
    MF_FILE_FLAGS fFlags,
    LPCWSTR pwszFileURL,
    _Out_ IMFByteStream **ppIByteStream );
STDAPI MFCreateTempFile(
    MF_FILE_ACCESSMODE AccessMode,
    MF_FILE_OPENMODE OpenMode,
    MF_FILE_FLAGS fFlags,
    _Out_ IMFByteStream **ppIByteStream );
STDAPI MFBeginCreateFile(
    MF_FILE_ACCESSMODE AccessMode,
    MF_FILE_OPENMODE OpenMode,
    MF_FILE_FLAGS fFlags,
    LPCWSTR pwszFilePath,
    IMFAsyncCallback * pCallback,
    IUnknown * pState,
    _Out_ IUnknown ** ppCancelCookie);
STDAPI MFEndCreateFile(
    IMFAsyncResult * pResult,
    _Out_ IMFByteStream **ppFile );
STDAPI MFCancelCreateFile(
    IUnknown * pCancelCookie);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI MFCreateMemoryBuffer(
    _In_ DWORD cbMaxLength,
    _Out_ IMFMediaBuffer ** ppBuffer );
STDAPI MFCreateMediaBufferWrapper(
    _In_ IMFMediaBuffer * pBuffer,
    _In_ DWORD cbOffset,
    _In_ DWORD dwLength,
    _Out_ IMFMediaBuffer ** ppBuffer );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI MFCreateLegacyMediaBufferOnMFMediaBuffer(
    _In_opt_ IMFSample * pSample,
    _In_ IMFMediaBuffer * pMFMediaBuffer,
    _In_ DWORD cbOffset,
    _Outptr_ IMediaBuffer ** ppMediaBuffer );
#include <dxgiformat.h>
STDAPI_(DXGI_FORMAT) MFMapDX9FormatToDXGIFormat( _In_ DWORD dx9 );
STDAPI_(DWORD) MFMapDXGIFormatToDX9Format( _In_ DXGI_FORMAT dx11 );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI MFLockDXGIDeviceManager(
    _Out_opt_ UINT* pResetToken,
    _Outptr_ IMFDXGIDeviceManager** ppManager
    );
STDAPI MFUnlockDXGIDeviceManager();
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI MFCreateDXSurfaceBuffer(
    _In_ REFIID riid,
    _In_ IUnknown * punkSurface,
    _In_ BOOL fBottomUpWhenLinear,
    _Outptr_ IMFMediaBuffer ** ppBuffer );
STDAPI MFCreateWICBitmapBuffer(
    _In_ REFIID riid,
    _In_ IUnknown * punkSurface,
    _Outptr_ IMFMediaBuffer ** ppBuffer
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI
MFCreateDXGISurfaceBuffer(
    _In_ REFIID riid,
    _In_ IUnknown* punkSurface,
    _In_ UINT uSubresourceIndex,
    _In_ BOOL fBottomUpWhenLinear,
    _Outptr_ IMFMediaBuffer** ppBuffer
    );
STDAPI MFCreateVideoSampleAllocatorEx(
    _In_ REFIID riid,
    _Outptr_ void** ppSampleAllocator
    );
STDAPI
MFCreateDXGIDeviceManager(
    _Out_ UINT* resetToken,
    _Outptr_ IMFDXGIDeviceManager** ppDeviceManager
    );
STDAPI MFCreateAlignedMemoryBuffer(
    _In_ DWORD cbMaxLength,
    _In_ DWORD cbAligment,
    _Out_ IMFMediaBuffer ** ppBuffer );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
EXTERN_C const GUID MR_BUFFER_SERVICE;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI MFCreateMediaEvent(
    _In_ MediaEventType met,
    _In_ REFGUID guidExtendedType,
    _In_ HRESULT hrStatus,
    _In_opt_ const PROPVARIANT * pvValue,
    _Out_ IMFMediaEvent ** ppEvent );
STDAPI MFCreateEventQueue(
    _Out_ IMFMediaEventQueue **ppMediaEventQueue );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
DEFINE_GUID(MF_EVENT_SESSIONCAPS,
0x7e5ebcd0, 0x11b8, 0x4abe, 0xaf, 0xad, 0x10, 0xf6, 0x59, 0x9a, 0x7f, 0x42);
DEFINE_GUID(MF_EVENT_SESSIONCAPS_DELTA,
0x7e5ebcd1, 0x11b8, 0x4abe, 0xaf, 0xad, 0x10, 0xf6, 0x59, 0x9a, 0x7f, 0x42);
typedef enum
{
    MF_TOPOSTATUS_INVALID = 0,
    MF_TOPOSTATUS_READY = 100,
    MF_TOPOSTATUS_STARTED_SOURCE = 200,
    MF_TOPOSTATUS_DYNAMIC_CHANGED = 210,
    MF_TOPOSTATUS_SINK_SWITCHED = 300,
    MF_TOPOSTATUS_ENDED = 400,
} MF_TOPOSTATUS;
DEFINE_GUID(MF_EVENT_TOPOLOGY_STATUS,
0x30c5018d, 0x9a53, 0x454b, 0xad, 0x9e, 0x6d, 0x5f, 0x8f, 0xa7, 0xc4, 0x3b);
DEFINE_GUID(MF_EVENT_START_PRESENTATION_TIME,
0x5ad914d0, 0x9b45, 0x4a8d, 0xa2, 0xc0, 0x81, 0xd1, 0xe5, 0xb, 0xfb, 0x7);
DEFINE_GUID(MF_EVENT_PRESENTATION_TIME_OFFSET,
0x5ad914d1, 0x9b45, 0x4a8d, 0xa2, 0xc0, 0x81, 0xd1, 0xe5, 0xb, 0xfb, 0x7);
DEFINE_GUID(MF_EVENT_START_PRESENTATION_TIME_AT_OUTPUT,
0x5ad914d2, 0x9b45, 0x4a8d, 0xa2, 0xc0, 0x81, 0xd1, 0xe5, 0xb, 0xfb, 0x7);
DEFINE_GUID(MF_EVENT_SOURCE_FAKE_START,
0xa8cc55a7, 0x6b31, 0x419f, 0x84, 0x5d, 0xff, 0xb3, 0x51, 0xa2, 0x43, 0x4b);
DEFINE_GUID(MF_EVENT_SOURCE_PROJECTSTART,
0xa8cc55a8, 0x6b31, 0x419f, 0x84, 0x5d, 0xff, 0xb3, 0x51, 0xa2, 0x43, 0x4b);
DEFINE_GUID(MF_EVENT_SOURCE_ACTUAL_START,
0xa8cc55a9, 0x6b31, 0x419f, 0x84, 0x5d, 0xff, 0xb3, 0x51, 0xa2, 0x43, 0x4b);
DEFINE_GUID(MF_EVENT_SOURCE_TOPOLOGY_CANCELED,
0xdb62f650, 0x9a5e, 0x4704, 0xac, 0xf3, 0x56, 0x3b, 0xc6, 0xa7, 0x33, 0x64);
DEFINE_GUID(MF_EVENT_SOURCE_CHARACTERISTICS,
0x47db8490, 0x8b22, 0x4f52, 0xaf, 0xda, 0x9c, 0xe1, 0xb2, 0xd3, 0xcf, 0xa8);
DEFINE_GUID(MF_EVENT_SOURCE_CHARACTERISTICS_OLD,
0x47db8491, 0x8b22, 0x4f52, 0xaf, 0xda, 0x9c, 0xe1, 0xb2, 0xd3, 0xcf, 0xa8);
DEFINE_GUID(MF_EVENT_DO_THINNING,
0x321ea6fb, 0xdad9, 0x46e4, 0xb3, 0x1d, 0xd2, 0xea, 0xe7, 0x9, 0xe, 0x30);
DEFINE_GUID(MF_EVENT_SCRUBSAMPLE_TIME,
0x9ac712b3, 0xdcb8, 0x44d5, 0x8d, 0xc, 0x37, 0x45, 0x5a, 0x27, 0x82, 0xe3);
DEFINE_GUID(MF_EVENT_OUTPUT_NODE,
0x830f1a8b, 0xc060, 0x46dd, 0xa8, 0x01, 0x1c, 0x95, 0xde, 0xc9, 0xb1, 0x07);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
DEFINE_GUID(MF_EVENT_MFT_INPUT_STREAM_ID,
0xf29c2cca, 0x7ae6, 0x42d2, 0xb2, 0x84, 0xbf, 0x83, 0x7c, 0xc8, 0x74, 0xe2);
DEFINE_GUID(MF_EVENT_MFT_CONTEXT,
0xb7cd31f1, 0x899e, 0x4b41, 0x80, 0xc9, 0x26, 0xa8, 0x96, 0xd3, 0x29, 0x77);
DEFINE_GUID(MF_EVENT_STREAM_METADATA_KEYDATA,
0xcd59a4a1, 0x4a3b, 0x4bbd, 0x86, 0x65, 0x72, 0xa4, 0xf, 0xbe, 0xa7, 0x76);
DEFINE_GUID(MF_EVENT_STREAM_METADATA_CONTENT_KEYIDS,
0x5063449d, 0xcc29, 0x4fc6, 0xa7, 0x5a, 0xd2, 0x47, 0xb3, 0x5a, 0xf8, 0x5c);
DEFINE_GUID(MF_EVENT_STREAM_METADATA_SYSTEMID,
0x1ea2ef64, 0xba16, 0x4a36, 0x87, 0x19, 0xfe, 0x75, 0x60, 0xba, 0x32, 0xad);
STDAPI MFCreateSample( _Out_ IMFSample **ppIMFSample );
DEFINE_GUID(MFSampleExtension_MaxDecodeFrameSize,
    0xd3cc654f, 0xf9f3, 0x4a13, 0x88, 0x9f, 0xf0, 0x4e, 0xb2, 0xb5, 0xb9, 0x57);
DEFINE_GUID(MFSampleExtension_AccumulatedNonRefPicPercent,
    0x79ea74df, 0xa740, 0x445b, 0xbc, 0x98, 0xc9, 0xed, 0x1f, 0x26, 0xe, 0xee);
DEFINE_GUID(MFSampleExtension_Encryption_ProtectionScheme,
    0xd054d096, 0x28bb, 0x45da, 0x87, 0xec, 0x74, 0xf3, 0x51, 0x87, 0x14, 0x6);
typedef enum _MFSampleEncryptionProtectionScheme
{
    MF_SAMPLE_ENCRYPTION_PROTECTION_SCHEME_NONE = 0,
    MF_SAMPLE_ENCRYPTION_PROTECTION_SCHEME_AES_CTR = 1,
    MF_SAMPLE_ENCRYPTION_PROTECTION_SCHEME_AES_CBC = 2,
} MFSampleEncryptionProtectionScheme;
DEFINE_GUID(MFSampleExtension_Encryption_CryptByteBlock,
    0x9d84289b, 0xc7f, 0x4713, 0xab, 0x95, 0x10, 0x8a, 0xb4, 0x2a, 0xd8, 0x1);
DEFINE_GUID(MFSampleExtension_Encryption_SkipByteBlock,
    0xd550548, 0x8317, 0x4ab1, 0x84, 0x5f, 0xd0, 0x63, 0x6, 0xe2, 0x93, 0xe3);
DEFINE_GUID(MFSampleExtension_Encryption_SubSample_Mapping,
    0x8444F27A, 0x69A1, 0x48DA, 0xBD, 0x08, 0x11, 0xCE, 0xF3, 0x68, 0x30, 0xD2);
DEFINE_GUID(MFSampleExtension_Encryption_ClearSliceHeaderData,
    0x5509a4f4, 0x320d, 0x4e6c, 0x8d, 0x1a, 0x94, 0xc6, 0x6d, 0xd2, 0xc, 0xb0);
DEFINE_GUID(MFSampleExtension_Encryption_HardwareProtection_KeyInfoID,
0x8cbfcceb, 0x94a5, 0x4de1, 0x82, 0x31, 0xa8, 0x5e, 0x47, 0xcf, 0x81, 0xe7);
DEFINE_GUID(MFSampleExtension_Encryption_HardwareProtection_KeyInfo,
0xb2372080, 0x455b, 0x4dd7, 0x99, 0x89, 0x1a, 0x95, 0x57, 0x84, 0xb7, 0x54);
DEFINE_GUID(MFSampleExtension_Encryption_HardwareProtection_VideoDecryptorContext,
0x693470c8, 0xe837, 0x47a0, 0x88, 0xcb, 0x53, 0x5b, 0x90, 0x5e, 0x35, 0x82);
DEFINE_GUID(MFSampleExtension_Encryption_Opaque_Data,
    0x224d77e5, 0x1391, 0x4ffb, 0x9f, 0x41, 0xb4, 0x32, 0xf6, 0x8c, 0x61, 0x1d);
DEFINE_GUID(MFSampleExtension_NALULengthInfo,
    0x19124E7C, 0xAD4B, 0x465F, 0xBB, 0x18, 0x20, 0x18, 0x62, 0x87, 0xB6, 0xAF);
DEFINE_GUID(MFSampleExtension_Encryption_ResumeVideoOutput,
    0xa435aba5, 0xafde, 0x4cf5, 0xbc, 0x1c, 0xf6, 0xac, 0xaf, 0x13, 0x94, 0x9d);
DEFINE_GUID(MFSampleExtension_Encryption_NALUTypes,
    0xb0f067c7, 0x714c, 0x416c, 0x8d, 0x59, 0x5f, 0x4d, 0xdf, 0x89, 0x13, 0xb6);
DEFINE_GUID(MFSampleExtension_Encryption_SPSPPSData,
    0xaede0fa2, 0xe0c, 0x453c, 0xb7, 0xf3, 0xde, 0x86, 0x93, 0x36, 0x4d, 0x11);
DEFINE_GUID(MFSampleExtension_Encryption_SEIData,
    0x3cf0e972, 0x4542, 0x4687, 0x99, 0x99, 0x58, 0x5f, 0x56, 0x5f, 0xba, 0x7d);
DEFINE_GUID(MFSampleExtension_Encryption_HardwareProtection,
    0x9a2b2d2b, 0x8270, 0x43e3, 0x84, 0x48, 0x99, 0x4f, 0x42, 0x6e, 0x88, 0x86);
DEFINE_GUID(MFSampleExtension_CleanPoint,
0x9cdf01d8, 0xa0f0, 0x43ba, 0xb0, 0x77, 0xea, 0xa0, 0x6c, 0xbd, 0x72, 0x8a);
DEFINE_GUID(MFSampleExtension_Discontinuity,
0x9cdf01d9, 0xa0f0, 0x43ba, 0xb0, 0x77, 0xea, 0xa0, 0x6c, 0xbd, 0x72, 0x8a);
DEFINE_GUID(MFSampleExtension_Token,
0x8294da66, 0xf328, 0x4805, 0xb5, 0x51, 0x00, 0xde, 0xb4, 0xc5, 0x7a, 0x61);
DEFINE_GUID(MFSampleExtension_ClosedCaption_CEA708, 0x26f09068, 0xe744, 0x47dc, 0xaa, 0x03, 0xdb, 0xf2, 0x04, 0x03, 0xbd, 0xe6);
DEFINE_GUID(MFSampleExtension_DecodeTimestamp,
0x73a954d4, 0x9e2, 0x4861, 0xbe, 0xfc, 0x94, 0xbd, 0x97, 0xc0, 0x8e, 0x6e);
DEFINE_GUID(MFSampleExtension_VideoEncodeQP,
0xb2efe478, 0xf979, 0x4c66, 0xb9, 0x5e, 0xee, 0x2b, 0x82, 0xc8, 0x2f, 0x36);
DEFINE_GUID(MFSampleExtension_VideoEncodePictureType,
0x973704e6, 0xcd14, 0x483c, 0x8f, 0x20, 0xc9, 0xfc, 0x9, 0x28, 0xba, 0xd5);
DEFINE_GUID(MFSampleExtension_FrameCorruption,
0xb4dd4a8c, 0xbeb, 0x44c4, 0x8b, 0x75, 0xb0, 0x2b, 0x91, 0x3b, 0x4, 0xf0);
DEFINE_GUID(MFSampleExtension_DirtyRects,
0x9ba70225, 0xb342, 0x4e97, 0x91, 0x26, 0x0b, 0x56, 0x6a, 0xb7, 0xea, 0x7e);
DEFINE_GUID(MFSampleExtension_MoveRegions,
0xe2a6c693, 0x3a8b, 0x4b8d, 0x95, 0xd0, 0xf6, 0x02, 0x81, 0xa1, 0x2f, 0xb7);
typedef struct _MOVE_RECT
{
    POINT SourcePoint;
    RECT DestRect;
} MOVE_RECT;
typedef struct _DIRTYRECT_INFO
{
    UINT FrameNumber;
    UINT NumDirtyRects;
    RECT DirtyRects[1];
} DIRTYRECT_INFO;
typedef struct _MOVEREGION_INFO
{
    UINT FrameNumber;
    UINT NumMoveRegions;
    MOVE_RECT MoveRegions[1];
} MOVEREGION_INFO;
DEFINE_GUID(MFSampleExtension_HDCP_OptionalHeader,
            0x9a2e7390, 0x121f, 0x455f, 0x83, 0x76, 0xc9, 0x74, 0x28, 0xe0, 0xb5, 0x40);
DEFINE_GUID(MFSampleExtension_HDCP_FrameCounter,
            0x9d389c60, 0xf507, 0x4aa6, 0xa4, 0xa, 0x71, 0x2, 0x7a, 0x2, 0xf3, 0xde);
DEFINE_GUID(MFSampleExtension_HDCP_StreamID,
            0x177e5d74, 0xc370, 0x4a7a, 0x95, 0xa2, 0x36, 0x83, 0x3c, 0x01, 0xd0, 0xaf);
DEFINE_GUID(MFSampleExtension_Timestamp,
    0x1e436999, 0x69be, 0x4c7a, 0x93, 0x69, 0x70, 0x06, 0x8c, 0x02, 0x60, 0xcb);
DEFINE_GUID(MFSampleExtension_RepeatFrame,
    0x88be738f, 0x711, 0x4f42, 0xb4, 0x58, 0x34, 0x4a, 0xed, 0x42, 0xec, 0x2f);
DEFINE_GUID(MFT_ENCODER_ERROR,
    0xc8d1eda4, 0x98e4, 0x41d5, 0x92, 0x97, 0x44, 0xf5, 0x38, 0x52, 0xf9, 0x0e);
DEFINE_GUID(MFT_GFX_DRIVER_VERSION_ID_Attribute,
    0xf34b9093, 0x05e0, 0x4b16, 0x99, 0x3d, 0x3e, 0x2a, 0x2c, 0xde, 0x6a, 0xd3);
DEFINE_GUID(MFSampleExtension_DescrambleData,
0x43483be6, 0x4903, 0x4314, 0xb0, 0x32, 0x29, 0x51, 0x36, 0x59, 0x36, 0xfc);
DEFINE_GUID(MFSampleExtension_SampleKeyID,
0x9ed713c8, 0x9b87, 0x4b26, 0x82, 0x97, 0xa9, 0x3b, 0x0c, 0x5a, 0x8a, 0xcc);
DEFINE_GUID(MFSampleExtension_GenKeyFunc,
0x441ca1ee, 0x6b1f, 0x4501, 0x90, 0x3a, 0xde, 0x87, 0xdf, 0x42, 0xf6, 0xed);
DEFINE_GUID(MFSampleExtension_GenKeyCtx,
0x188120cb, 0xd7da, 0x4b59, 0x9b, 0x3e, 0x92, 0x52, 0xfd, 0x37, 0x30, 0x1c);
DEFINE_GUID(MFSampleExtension_PacketCrossOffsets,
0x2789671d, 0x389f, 0x40bb, 0x90, 0xd9, 0xc2, 0x82, 0xf7, 0x7f, 0x9a, 0xbd);
DEFINE_GUID(MFSampleExtension_Encryption_SampleID,
0x6698b84e, 0x0afa, 0x4330, 0xae, 0xb2, 0x1c, 0x0a, 0x98, 0xd7, 0xa4, 0x4d);
DEFINE_GUID(MFSampleExtension_Encryption_KeyID,
0x76376591, 0x795f, 0x4da1, 0x86, 0xed, 0x9d, 0x46, 0xec, 0xa1, 0x09, 0xa9);
DEFINE_GUID(MFSampleExtension_Content_KeyID,
0xc6c7f5b0, 0xacca, 0x415b, 0x87, 0xd9, 0x10, 0x44, 0x14, 0x69, 0xef, 0xc6);
DEFINE_GUID(MFSampleExtension_Encryption_SubSampleMappingSplit,
0xfe0254b9, 0x2aa5, 0x4edc, 0x99, 0xf7, 0x17, 0xe8, 0x9d, 0xbf, 0x91, 0x74);
DEFINE_GUID(MFSampleExtension_Interlaced,
0xb1d5830a, 0xdeb8, 0x40e3, 0x90, 0xfa, 0x38, 0x99, 0x43, 0x71, 0x64, 0x61);
DEFINE_GUID(MFSampleExtension_BottomFieldFirst,
0x941ce0a3, 0x6ae3, 0x4dda, 0x9a, 0x08, 0xa6, 0x42, 0x98, 0x34, 0x06, 0x17);
DEFINE_GUID(MFSampleExtension_RepeatFirstField,
0x304d257c, 0x7493, 0x4fbd, 0xb1, 0x49, 0x92, 0x28, 0xde, 0x8d, 0x9a, 0x99);
DEFINE_GUID(MFSampleExtension_SingleField,
0x9d85f816, 0x658b, 0x455a, 0xbd, 0xe0, 0x9f, 0xa7, 0xe1, 0x5a, 0xb8, 0xf9);
DEFINE_GUID(MFSampleExtension_DerivedFromTopField,
0x6852465a, 0xae1c, 0x4553, 0x8e, 0x9b, 0xc3, 0x42, 0x0f, 0xcb, 0x16, 0x37);
DEFINE_GUID(MFSampleExtension_MeanAbsoluteDifference,
0x1cdbde11, 0x08b4, 0x4311, 0xa6, 0xdd, 0x0f, 0x9f, 0x37, 0x19, 0x07, 0xaa);
DEFINE_GUID(MFSampleExtension_LongTermReferenceFrameInfo,
0x9154733f, 0xe1bd, 0x41bf, 0x81, 0xd3, 0xfc, 0xd9, 0x18, 0xf7, 0x13, 0x32);
typedef struct _ROI_AREA {
    RECT rect;
    INT32 QPDelta;
} ROI_AREA, *PROI_AREA;
DEFINE_GUID(MFSampleExtension_ROIRectangle,
0x3414a438, 0x4998, 0x4d2c, 0xbe, 0x82, 0xbe, 0x3c, 0xa0, 0xb2, 0x4d, 0x43);
DEFINE_GUID(MFSampleExtension_LastSlice,
0x2b5d5457, 0x5547, 0x4f07, 0xb8, 0xc8, 0xb4, 0xa3, 0xa9, 0xa1, 0xda, 0xac);
typedef struct _MACROBLOCK_DATA {
    UINT32 flags;
    INT16 motionVectorX;
    INT16 motionVectorY;
    INT32 QPDelta;
} MACROBLOCK_DATA;
DEFINE_GUID(MFSampleExtension_FeatureMap,
0xa032d165, 0x46fc, 0x400a, 0xb4, 0x49, 0x49, 0xde, 0x53, 0xe6, 0x2a, 0x6e);
DEFINE_GUID(MFSampleExtension_ChromaOnly,
0x1eb9179c, 0xa01f, 0x4845, 0x8c, 0x04, 0x0e, 0x65, 0xa2, 0x6e, 0xb0, 0x4f);
DEFINE_GUID(MFSampleExtension_PhotoThumbnail,
0x74BBC85C, 0xC8BB, 0x42DC, 0xB5, 0x86, 0xDA, 0x17, 0xFF, 0xD3, 0x5D, 0xCC);
DEFINE_GUID(MFSampleExtension_PhotoThumbnailMediaType,
0x61AD5420, 0xEBF8, 0x4143, 0x89, 0xAF, 0x6B, 0xF2, 0x5F, 0x67, 0x2D, 0xEF);
DEFINE_GUID(MFSampleExtension_CaptureMetadata,
0x2EBE23A8, 0xFAF5, 0x444A, 0xA6, 0xA2, 0xEB, 0x81, 0x08, 0x80, 0xAB, 0x5D);
DEFINE_GUID(MFSampleExtension_MDLCacheCookie,
0x5F002AF9, 0xD8F9, 0x41A3, 0xB6, 0xC3, 0xA2, 0xAD, 0x43, 0xF6, 0x47, 0xAD);
DEFINE_GUID(MF_CAPTURE_METADATA_PHOTO_FRAME_FLASH,
0x0F9DD6C6, 0x6003, 0x45D8, 0xBD, 0x59, 0xF1, 0xF5, 0x3E, 0x3D, 0x04, 0xE8);
DEFINE_GUID(MF_CAPTURE_METADATA_FRAME_RAWSTREAM,
0x9252077B, 0x2680, 0x49B9, 0xAE, 0x02, 0xB1, 0x90, 0x75, 0x97, 0x3B, 0x70);
DEFINE_GUID(MF_CAPTURE_METADATA_FOCUSSTATE,
0xa87ee154, 0x997f, 0x465d, 0xb9, 0x1f, 0x29, 0xd5, 0x3b, 0x98, 0x2b, 0x88);
DEFINE_GUID(MF_CAPTURE_METADATA_REQUESTED_FRAME_SETTING_ID,
0xbb3716d9, 0x8a61, 0x47a4, 0x81, 0x97, 0x45, 0x9c, 0x7f, 0xf1, 0x74, 0xd5);
DEFINE_GUID(MF_CAPTURE_METADATA_EXPOSURE_TIME,
0x16b9ae99, 0xcd84, 0x4063, 0x87, 0x9d, 0xa2, 0x8c, 0x76, 0x33, 0x72, 0x9e);
DEFINE_GUID(MF_CAPTURE_METADATA_EXPOSURE_COMPENSATION,
0xd198aa75, 0x4b62, 0x4345, 0xab, 0xf3, 0x3c, 0x31, 0xfa, 0x12, 0xc2, 0x99);
DEFINE_GUID(MF_CAPTURE_METADATA_ISO_SPEED,
0xe528a68f, 0xb2e3, 0x44fe, 0x8b, 0x65, 0x7, 0xbf, 0x4b, 0x5a, 0x13, 0xff);
DEFINE_GUID(MF_CAPTURE_METADATA_LENS_POSITION,
0xb5fc8e86, 0x11d1, 0x4e70, 0x81, 0x9b, 0x72, 0x3a, 0x89, 0xfa, 0x45, 0x20);
DEFINE_GUID(MF_CAPTURE_METADATA_SCENE_MODE,
0x9cc3b54d, 0x5ed3, 0x4bae, 0xb3, 0x88, 0x76, 0x70, 0xae, 0xf5, 0x9e, 0x13);
DEFINE_GUID(MF_CAPTURE_METADATA_FLASH,
0x4a51520b, 0xfb36, 0x446c, 0x9d, 0xf2, 0x68, 0x17, 0x1b, 0x9a, 0x3, 0x89);
DEFINE_GUID(MF_CAPTURE_METADATA_FLASH_POWER,
0x9c0e0d49, 0x205, 0x491a, 0xbc, 0x9d, 0x2d, 0x6e, 0x1f, 0x4d, 0x56, 0x84);
DEFINE_GUID(MF_CAPTURE_METADATA_WHITEBALANCE,
0xc736fd77, 0xfb9, 0x4e2e, 0x97, 0xa2, 0xfc, 0xd4, 0x90, 0x73, 0x9e, 0xe9);
DEFINE_GUID(MF_CAPTURE_METADATA_ZOOMFACTOR,
0xe50b0b81, 0xe501, 0x42c2, 0xab, 0xf2, 0x85, 0x7e, 0xcb, 0x13, 0xfa, 0x5c);
DEFINE_GUID(MF_CAPTURE_METADATA_FACEROIS,
0x864f25a6, 0x349f, 0x46b1, 0xa3, 0xe, 0x54, 0xcc, 0x22, 0x92, 0x8a, 0x47);
DEFINE_GUID(MF_CAPTURE_METADATA_FACEROITIMESTAMPS,
0xe94d50cc, 0x3da0, 0x44d4, 0xbb, 0x34, 0x83, 0x19, 0x8a, 0x74, 0x18, 0x68);
DEFINE_GUID(MF_CAPTURE_METADATA_FACEROICHARACTERIZATIONS,
0xb927a1a8, 0x18ef, 0x46d3, 0xb3, 0xaf, 0x69, 0x37, 0x2f, 0x94, 0xd9, 0xb2);
DEFINE_GUID(MF_CAPTURE_METADATA_ISO_GAINS,
0x5802ac9, 0xe1d, 0x41c7, 0xa8, 0xc8, 0x7e, 0x73, 0x69, 0xf8, 0x4e, 0x1e);
DEFINE_GUID(MF_CAPTURE_METADATA_SENSORFRAMERATE,
0xdb51357e, 0x9d3d, 0x4962, 0xb0, 0x6d, 0x7, 0xce, 0x65, 0xd, 0x9a, 0xa);
DEFINE_GUID(MF_CAPTURE_METADATA_WHITEBALANCE_GAINS,
0xe7570c8f, 0x2dcb, 0x4c7c, 0xaa, 0xce, 0x22, 0xec, 0xe7, 0xcc, 0xe6, 0x47);
DEFINE_GUID(MF_CAPTURE_METADATA_HISTOGRAM,
0x85358432, 0x2ef6, 0x4ba9, 0xa3, 0xfb, 0x6, 0xd8, 0x29, 0x74, 0xb8, 0x95);
DEFINE_GUID(MF_CAPTURE_METADATA_EXIF,
0x2e9575b8, 0x8c31, 0x4a02, 0x85, 0x75, 0x42, 0xb1, 0x97, 0xb7, 0x15, 0x92);
DEFINE_GUID(MF_CAPTURE_METADATA_FRAME_ILLUMINATION,
0x6D688FFC, 0x63D3, 0x46FE, 0xBA, 0xDA, 0x5B, 0x94, 0x7D, 0xB0, 0xD0, 0x80);
DEFINE_GUID(MF_CAPTURE_METADATA_UVC_PAYLOADHEADER,
    0xf9f88a87, 0xe1dd, 0x441e, 0x95, 0xcb, 0x42, 0xe2, 0x1a, 0x64, 0xf1, 0xd9);
DEFINE_GUID(MFSampleExtension_Depth_MinReliableDepth,
0x5f8582b2, 0xe36b, 0x47c8, 0x9b, 0x87, 0xfe, 0xe1, 0xca, 0x72, 0xc5, 0xb0);
DEFINE_GUID(MFSampleExtension_Depth_MaxReliableDepth,
0xe45545d1, 0x1f0f, 0x4a32, 0xa8, 0xa7, 0x61, 0x1, 0xa2, 0x4e, 0xa8, 0xbe);
DEFINE_GUID(MF_CAPTURE_METADATA_FIRST_SCANLINE_START_TIME_QPC,
    0x6a2c49f1, 0xe052, 0x46b6, 0xb2, 0xd9, 0x73, 0xc1, 0x55, 0x87, 0x09, 0xaf);
DEFINE_GUID(MF_CAPTURE_METADATA_LAST_SCANLINE_END_TIME_QPC,
    0xdccadecb, 0xc4d4, 0x400d, 0xb4, 0x18, 0x10, 0xe8, 0x85, 0x25, 0xe1, 0xf6);
DEFINE_GUID(MF_CAPTURE_METADATA_SCANLINE_TIME_QPC_ACCURACY,
    0x4cd79c51, 0xf765, 0x4b09, 0xb1, 0xe1, 0x27, 0xd1, 0xf7, 0xeb, 0xea, 0x09);
DEFINE_GUID(MF_CAPTURE_METADATA_SCANLINE_DIRECTION,
    0x6496a3ba, 0x1907, 0x49e6, 0xb0, 0xc3, 0x12, 0x37, 0x95, 0xf3, 0x80, 0xa9);
typedef struct tagFaceRectInfoBlobHeader
{
    ULONG Size;
    ULONG Count;
} FaceRectInfoBlobHeader;
typedef struct tagFaceRectInfo
{
    RECT Region;
    LONG confidenceLevel;
} FaceRectInfo;
typedef struct tagFaceCharacterizationBlobHeader
{
    ULONG Size;
    ULONG Count;
} FaceCharacterizationBlobHeader;
typedef struct tagFaceCharacterization
{
    ULONG BlinkScoreLeft;
    ULONG BlinkScoreRight;
    ULONG FacialExpression;
    ULONG FacialExpressionScore;
} FaceCharacterization;
typedef struct tagCapturedMetadataExposureCompensation
{
    UINT64 Flags;
    INT32 Value;
} CapturedMetadataExposureCompensation;
typedef struct tagCapturedMetadataISOGains
{
    FLOAT AnalogGain;
    FLOAT DigitalGain;
} CapturedMetadataISOGains;
typedef struct tagCapturedMetadataWhiteBalanceGains
{
    FLOAT R;
    FLOAT G;
    FLOAT B;
} CapturedMetadataWhiteBalanceGains;
typedef struct tagMetadataTimeStamps
{
    ULONG Flags;
    LONGLONG Device;
    LONGLONG Presentation;
} MetadataTimeStamps;
typedef struct tagHistogramGrid
{
    ULONG Width;
    ULONG Height;
    RECT Region;
} HistogramGrid;
typedef struct tagHistogramBlobHeader
{
    ULONG Size;
    ULONG Histograms;
} HistogramBlobHeader;
typedef struct tagHistogramHeader
{
    ULONG Size;
    ULONG Bins;
    ULONG FourCC;
    ULONG ChannelMasks;
    HistogramGrid Grid;
} HistogramHeader;
typedef struct tagHistogramDataHeader
{
    ULONG Size;
    ULONG ChannelMask;
    ULONG Linear;
} HistogramDataHeader;
STDAPI
MFCreateAttributes(
    _Out_ IMFAttributes** ppMFAttributes,
    _In_ UINT32 cInitialSize
    );
STDAPI
MFInitAttributesFromBlob(
    _In_ IMFAttributes* pAttributes,
    _In_reads_bytes_(cbBufSize) const UINT8* pBuf,
    _In_ UINT cbBufSize
    );
STDAPI
MFGetAttributesAsBlobSize(
    _In_ IMFAttributes* pAttributes,
    _Out_ UINT32* pcbBufSize
    );
STDAPI
MFGetAttributesAsBlob(
    _In_ IMFAttributes* pAttributes,
    _Out_writes_bytes_(cbBufSize) UINT8* pBuf,
    _In_ UINT cbBufSize
    );
#include <initguid.h>
DEFINE_GUID(MFT_CATEGORY_VIDEO_DECODER,
0xd6c02d4b, 0x6833, 0x45b4, 0x97, 0x1a, 0x05, 0xa4, 0xb0, 0x4b, 0xab, 0x91);
DEFINE_GUID(MFT_CATEGORY_VIDEO_ENCODER,
0xf79eac7d, 0xe545, 0x4387, 0xbd, 0xee, 0xd6, 0x47, 0xd7, 0xbd, 0xe4, 0x2a);
DEFINE_GUID(MFT_CATEGORY_VIDEO_EFFECT,
0x12e17c21, 0x532c, 0x4a6e, 0x8a, 0x1c, 0x40, 0x82, 0x5a, 0x73, 0x63, 0x97);
DEFINE_GUID(MFT_CATEGORY_MULTIPLEXER,
0x059c561e, 0x05ae, 0x4b61, 0xb6, 0x9d, 0x55, 0xb6, 0x1e, 0xe5, 0x4a, 0x7b);
DEFINE_GUID(MFT_CATEGORY_DEMULTIPLEXER,
0xa8700a7a, 0x939b, 0x44c5, 0x99, 0xd7, 0x76, 0x22, 0x6b, 0x23, 0xb3, 0xf1);
DEFINE_GUID(MFT_CATEGORY_AUDIO_DECODER,
0x9ea73fb4, 0xef7a, 0x4559, 0x8d, 0x5d, 0x71, 0x9d, 0x8f, 0x04, 0x26, 0xc7);
DEFINE_GUID(MFT_CATEGORY_AUDIO_ENCODER,
0x91c64bd0, 0xf91e, 0x4d8c, 0x92, 0x76, 0xdb, 0x24, 0x82, 0x79, 0xd9, 0x75);
DEFINE_GUID(MFT_CATEGORY_AUDIO_EFFECT,
0x11064c48, 0x3648, 0x4ed0, 0x93, 0x2e, 0x05, 0xce, 0x8a, 0xc8, 0x11, 0xb7);
DEFINE_GUID(MFT_CATEGORY_VIDEO_PROCESSOR,
0x302ea3fc, 0xaa5f, 0x47f9, 0x9f, 0x7a, 0xc2, 0x18, 0x8b, 0xb1, 0x63, 0x2);
DEFINE_GUID(MFT_CATEGORY_OTHER,
0x90175d57, 0xb7ea, 0x4901, 0xae, 0xb3, 0x93, 0x3a, 0x87, 0x47, 0x75, 0x6f);
DEFINE_GUID(MFT_CATEGORY_ENCRYPTOR,
0xb0c687be, 0x01cd, 0x44b5, 0xb8, 0xb2, 0x7c, 0x1d, 0x7e, 0x05, 0x8b, 0x1f);
DEFINE_GUID(MFT_CATEGORY_VIDEO_RENDERER_EFFECT,
0x145cd8b4, 0x92f4, 0x4b23, 0x8a, 0xe7, 0xe0, 0xdf, 0x6, 0xc2, 0xda, 0x95);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI
MFTRegister(
    _In_ CLSID clsidMFT,
    _In_ GUID guidCategory,
    _In_ LPWSTR pszName,
    _In_ UINT32 Flags,
    _In_ UINT32 cInputTypes,
    _In_reads_opt_(cInputTypes) MFT_REGISTER_TYPE_INFO* pInputTypes,
    _In_ UINT32 cOutputTypes,
    _In_reads_opt_(cOutputTypes) MFT_REGISTER_TYPE_INFO* pOutputTypes,
    _In_opt_ IMFAttributes* pAttributes
    );
STDAPI
MFTUnregister(
    _In_ CLSID clsidMFT
    );
STDAPI
MFTRegisterLocal(
   _In_ IClassFactory* pClassFactory,
   _In_ REFGUID guidCategory,
   _In_ LPCWSTR pszName,
   _In_ UINT32 Flags,
   _In_ UINT32 cInputTypes,
   _In_reads_opt_(cInputTypes)const MFT_REGISTER_TYPE_INFO* pInputTypes,
   _In_ UINT32 cOutputTypes,
   _In_reads_opt_(cOutputTypes)const MFT_REGISTER_TYPE_INFO* pOutputTypes
    );
STDAPI
MFTUnregisterLocal(
    _In_opt_ IClassFactory * pClassFactory
    );
STDAPI
MFTRegisterLocalByCLSID(
   _In_ REFCLSID clisdMFT,
   _In_ REFGUID guidCategory,
   _In_ LPCWSTR pszName,
   _In_ UINT32 Flags,
   _In_ UINT32 cInputTypes,
   _In_reads_opt_(cInputTypes)const MFT_REGISTER_TYPE_INFO* pInputTypes,
   _In_ UINT32 cOutputTypes,
   _In_reads_opt_(cOutputTypes)const MFT_REGISTER_TYPE_INFO* pOutputTypes
    );
STDAPI
MFTUnregisterLocalByCLSID(
    _In_ CLSID clsidMFT
    );
STDAPI
MFTEnum(
    _In_ GUID guidCategory,
    _In_ UINT32 Flags,
    _In_opt_ MFT_REGISTER_TYPE_INFO* pInputType,
    _In_opt_ MFT_REGISTER_TYPE_INFO* pOutputType,
    _In_opt_ IMFAttributes* pAttributes,
    _Outptr_result_buffer_(*pcMFTs) CLSID** ppclsidMFT,
    _Out_ UINT32* pcMFTs
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
enum _MFT_ENUM_FLAG
{
    MFT_ENUM_FLAG_SYNCMFT = 0x00000001,
    MFT_ENUM_FLAG_ASYNCMFT = 0x00000002,
    MFT_ENUM_FLAG_HARDWARE = 0x00000004,
    MFT_ENUM_FLAG_FIELDOFUSE = 0x00000008,
    MFT_ENUM_FLAG_LOCALMFT = 0x00000010,
    MFT_ENUM_FLAG_TRANSCODE_ONLY = 0x00000020,
    MFT_ENUM_FLAG_SORTANDFILTER = 0x00000040,
    MFT_ENUM_FLAG_SORTANDFILTER_APPROVED_ONLY = 0x000000C0,
    MFT_ENUM_FLAG_SORTANDFILTER_WEB_ONLY = 0x00000140,
    MFT_ENUM_FLAG_SORTANDFILTER_WEB_ONLY_EDGEMODE = 0x00000240,
    MFT_ENUM_FLAG_UNTRUSTED_STOREMFT = 0x00000400,
    MFT_ENUM_FLAG_ALL = 0x0000003F,
};
STDAPI
MFTEnumEx(
    _In_ GUID guidCategory,
    _In_ UINT32 Flags,
    _In_opt_ const MFT_REGISTER_TYPE_INFO* pInputType,
    _In_opt_ const MFT_REGISTER_TYPE_INFO* pOutputType,
    _Outptr_result_buffer_(*pnumMFTActivate) IMFActivate*** pppMFTActivate,
    _Out_ UINT32* pnumMFTActivate
);
DEFINE_GUID(MFT_ENUM_VIDEO_RENDERER_EXTENSION_PROFILE,
0x62c56928, 0x9a4e, 0x443b, 0xb9, 0xdc, 0xca, 0xc8, 0x30, 0xc2, 0x41, 0x0);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
DEFINE_GUID( MFT_ENUM_ADAPTER_LUID,
    0x1d39518c, 0xe220, 0x4da8, 0xa0, 0x7f, 0xba, 0x17, 0x25, 0x52, 0xd6, 0xb1 );
STDAPI
MFTEnum2(
    _In_ GUID guidCategory,
    _In_ UINT32 Flags,
    _In_opt_ const MFT_REGISTER_TYPE_INFO* pInputType,
    _In_opt_ const MFT_REGISTER_TYPE_INFO* pOutputType,
    _In_opt_ IMFAttributes* pAttributes,
    _Outptr_result_buffer_( *pnumMFTActivate ) IMFActivate*** pppMFTActivate,
    _Out_ UINT32* pnumMFTActivate
    );
STDAPI
MFTGetInfo(
    _In_ CLSID clsidMFT,
    _Out_opt_ LPWSTR* pszName,
    _Outptr_opt_result_buffer_(*pcInputTypes) MFT_REGISTER_TYPE_INFO** ppInputTypes,
    _Out_opt_ UINT32* pcInputTypes,
    _Outptr_opt_result_buffer_(*pcOutputTypes) MFT_REGISTER_TYPE_INFO** ppOutputTypes,
    _Out_opt_ UINT32* pcOutputTypes,
    _Outptr_opt_result_maybenull_ IMFAttributes** ppAttributes
    );
STDAPI
MFGetPluginControl(
    _Out_ IMFPluginControl **ppPluginControl
    );
STDAPI
MFGetMFTMerit(
    _Inout_ IUnknown *pMFT,
    _In_ UINT32 cbVerifier,
    _In_reads_bytes_(cbVerifier) const BYTE * verifier,
    _Out_ DWORD *merit
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI
MFRegisterLocalSchemeHandler(
    _In_ PCWSTR szScheme,
    _In_ IMFActivate* pActivate
    );
STDAPI
MFRegisterLocalByteStreamHandler(
    _In_ PCWSTR szFileExtension,
    _In_ PCWSTR szMimeType,
    _In_ IMFActivate* pActivate
    );
STDAPI
MFCreateMFByteStreamWrapper(
    _In_ IMFByteStream* pStream,
    _Out_ IMFByteStream** ppStreamWrapper
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI
MFCreateMediaExtensionActivate(
    _In_ PCWSTR szActivatableClassId,
    _In_opt_ IUnknown* pConfiguration,
    _In_ REFIID riid,
    _Outptr_ LPVOID* ppvObject
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
DEFINE_GUID(MFT_SUPPORT_DYNAMIC_FORMAT_CHANGE,
0x53476a11, 0x3f13, 0x49fb, 0xac, 0x42, 0xee, 0x27, 0x33, 0xc9, 0x67, 0x41);
                  (((DWORD)(ch4) & 0xFF00) << 8) | \
                  (((DWORD)(ch4) & 0xFF0000) >> 8) | \
                  (((DWORD)(ch4) & 0xFF000000) >> 24))
    DEFINE_GUID(name, \
    format, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_MEDIATYPE_GUID( MFVideoFormat_Base, 0x00000000 );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_RGB32, D3DFMT_X8R8G8B8 );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_ARGB32, D3DFMT_A8R8G8B8 );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_RGB24, D3DFMT_R8G8B8 );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_RGB555, D3DFMT_X1R5G5B5 );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_RGB565, D3DFMT_R5G6B5 );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_RGB8, D3DFMT_P8 );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_L8, D3DFMT_L8 );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_L16, D3DFMT_L16 );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_D16, D3DFMT_D16 );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_AI44, FCC('AI44') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_AYUV, FCC('AYUV') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_YUY2, FCC('YUY2') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_YVYU, FCC('YVYU') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_YVU9, FCC('YVU9') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_UYVY, FCC('UYVY') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_NV11, FCC('NV11') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_NV12, FCC('NV12') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_YV12, FCC('YV12') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_I420, FCC('I420') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_IYUV, FCC('IYUV') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_Y210, FCC('Y210') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_Y216, FCC('Y216') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_Y410, FCC('Y410') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_Y416, FCC('Y416') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_Y41P, FCC('Y41P') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_Y41T, FCC('Y41T') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_Y42T, FCC('Y42T') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_P210, FCC('P210') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_P216, FCC('P216') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_P010, FCC('P010') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_P016, FCC('P016') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_v210, FCC('v210') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_v216, FCC('v216') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_v410, FCC('v410') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_MP43, FCC('MP43') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_MP4S, FCC('MP4S') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_M4S2, FCC('M4S2') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_MP4V, FCC('MP4V') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_WMV1, FCC('WMV1') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_WMV2, FCC('WMV2') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_WMV3, FCC('WMV3') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_WVC1, FCC('WVC1') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_MSS1, FCC('MSS1') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_MSS2, FCC('MSS2') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_MPG1, FCC('MPG1') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_DVSL, FCC('dvsl') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_DVSD, FCC('dvsd') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_DVHD, FCC('dvhd') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_DV25, FCC('dv25') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_DV50, FCC('dv50') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_DVH1, FCC('dvh1') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_DVC, FCC('dvc ') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_H264, FCC('H264') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_H265, FCC('H265') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_MJPG, FCC('MJPG') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_420O, FCC('420O') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_HEVC, FCC('HEVC') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_HEVC_ES, FCC('HEVS') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_VP80, FCC('VP80') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_VP90, FCC('VP90') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_ORAW, FCC('ORAW') );
DEFINE_MEDIATYPE_GUID( MFVideoFormat_H263, FCC('H263') );
DEFINE_MEDIATYPE_GUID(MFVideoFormat_A2R10G10B10, D3DFMT_A2B10G10R10);
DEFINE_MEDIATYPE_GUID(MFVideoFormat_A16B16G16R16F, D3DFMT_A16B16G16R16F);
DEFINE_MEDIATYPE_GUID(MFVideoFormat_VP10, FCC('VP10'));
DEFINE_MEDIATYPE_GUID(MFVideoFormat_AV1, FCC('AV01'));
typedef enum _MFFrameSourceTypes
{
    MFFrameSourceTypes_Color = 0x0001,
    MFFrameSourceTypes_Infrared = 0x0002,
    MFFrameSourceTypes_Depth = 0x0004,
    MFFrameSourceTypes_Image = 0x0008,
    MFFrameSourceTypes_Custom = 0x0080
} MFFrameSourceTypes;
DEFINE_GUID(MFVideoFormat_H264_ES,
0x3f40f4f0, 0x5622, 0x4ff8, 0xb6, 0xd8, 0xa1, 0x7a, 0x58, 0x4b, 0xee, 0x5e);
DEFINE_GUID(MFVideoFormat_MPEG2,
0xe06d8026, 0xdb46, 0x11cf, 0xb4, 0xd1, 0x00, 0x80, 0x5f, 0x6c, 0xbb, 0xea);
DEFINE_MEDIATYPE_GUID( MFAudioFormat_Base, 0x00000000 );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_PCM, WAVE_FORMAT_PCM );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_Float, WAVE_FORMAT_IEEE_FLOAT );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_DTS, WAVE_FORMAT_DTS );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_Dolby_AC3_SPDIF, WAVE_FORMAT_DOLBY_AC3_SPDIF );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_DRM, WAVE_FORMAT_DRM );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_WMAudioV8, WAVE_FORMAT_WMAUDIO2 );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_WMAudioV9, WAVE_FORMAT_WMAUDIO3 );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_WMAudio_Lossless, WAVE_FORMAT_WMAUDIO_LOSSLESS );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_WMASPDIF, WAVE_FORMAT_WMASPDIF );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_MSP1, WAVE_FORMAT_WMAVOICE9 );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_MP3, WAVE_FORMAT_MPEGLAYER3 );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_MPEG, WAVE_FORMAT_MPEG );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_AAC, WAVE_FORMAT_MPEG_HEAAC );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_ADTS, WAVE_FORMAT_MPEG_ADTS_AAC );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_AMR_NB, WAVE_FORMAT_AMR_NB );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_AMR_WB, WAVE_FORMAT_AMR_WB );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_AMR_WP, WAVE_FORMAT_AMR_WP );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_FLAC, WAVE_FORMAT_FLAC );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_ALAC, WAVE_FORMAT_ALAC );
DEFINE_MEDIATYPE_GUID( MFAudioFormat_Opus, WAVE_FORMAT_OPUS );
DEFINE_GUID(MFAudioFormat_Dolby_AC3,
0xe06d802c, 0xdb46, 0x11cf, 0xb4, 0xd1, 0x00, 0x80, 0x05f, 0x6c, 0xbb, 0xea);
DEFINE_GUID(MFAudioFormat_Dolby_DDPlus,
0xa7fb87af, 0x2d02, 0x42fb, 0xa4, 0xd4, 0x5, 0xcd, 0x93, 0x84, 0x3b, 0xdd);
DEFINE_GUID(MFAudioFormat_Vorbis,
0x8D2FD10B, 0x5841, 0x4a6b, 0x89, 0x05, 0x58, 0x8F, 0xEC, 0x1A, 0xDE, 0xD9);
DEFINE_GUID(MFAudioFormat_DTS_RAW,
0xE06D8033, 0xDB46, 0x11CF, 0xB4, 0xD1, 0x00, 0x80, 0x5F, 0x6C, 0xBB, 0xEA);
DEFINE_GUID(MFAudioFormat_DTS_HD,
0xA2E58EB7, 0x0FA9, 0x48BB, 0xA4, 0x0C, 0xFA, 0x0E, 0x15, 0x6D, 0x06, 0x45);
DEFINE_GUID(MFAudioFormat_DTS_XLL,
0x45B37C1B, 0x8C70, 0x4E59, 0xA7, 0xBE, 0xA1, 0xE4, 0x2C, 0x81, 0xC8, 0x0D);
DEFINE_GUID(MFAudioFormat_DTS_LBR,
0xC2FE6F0A, 0x4E3C, 0x4DF1, 0x9B, 0x60, 0x50, 0x86, 0x30, 0x91, 0xE4, 0xB9);
DEFINE_GUID(MFAudioFormat_DTS_UHD,
0x87020117, 0xACE3, 0x42DE, 0xB7, 0x3E, 0xC6, 0x56, 0x70, 0x62, 0x63, 0xF8);
DEFINE_GUID(MFAudioFormat_DTS_UHDY,
0x9B9CCA00, 0x91B9, 0x4CCC, 0x88, 0x3A, 0x8F, 0x78, 0x7A, 0xC3, 0xCC, 0x86);
DEFINE_GUID( MFAudioFormat_Float_SpatialObjects,
    0xfa39cd94, 0xbc64, 0x4ab1, 0x9b, 0x71, 0xdc, 0xd0, 0x9d, 0x5a, 0x7e, 0x7a );
DEFINE_GUID(MFAudioFormat_LPCM,
0xe06d8032L, 0xdb46, 0x11cf, 0xb4, 0xd1, 0x00, 0x80, 0x5f, 0x6c, 0xbb, 0xea);
DEFINE_GUID(MFAudioFormat_PCM_HDCP,
0xa5e7ff01, 0x8411, 0x4acc, 0xa8, 0x65, 0x5f, 0x49, 0x41, 0x28, 0x8d, 0x80);
DEFINE_GUID(MFAudioFormat_Dolby_AC3_HDCP,
0x97663a80, 0x8ffb, 0x4445, 0xa6, 0xba, 0x79, 0x2d, 0x90, 0x8f, 0x49, 0x7f);
DEFINE_GUID(MFAudioFormat_AAC_HDCP,
0x419bce76, 0x8b72, 0x400f, 0xad, 0xeb, 0x84, 0xb5, 0x7d, 0x63, 0x48, 0x4d);
DEFINE_GUID(MFAudioFormat_ADTS_HDCP,
0xda4963a3, 0x14d8, 0x4dcf, 0x92, 0xb7, 0x19, 0x3e, 0xb8, 0x43, 0x63, 0xdb);
DEFINE_GUID(MFAudioFormat_Base_HDCP,
0x3884b5bc, 0xe277, 0x43fd, 0x98, 0x3d, 0x03, 0x8a, 0xa8, 0xd9, 0xb6, 0x05);
DEFINE_GUID(MFVideoFormat_H264_HDCP,
0x5d0ce9dd, 0x9817, 0x49da, 0xbd, 0xfd, 0xf5, 0xf5, 0xb9, 0x8f, 0x18, 0xa6);
DEFINE_GUID(MFVideoFormat_HEVC_HDCP,
0x3cfe0fe6, 0x05c4, 0x47dc, 0x9d, 0x70, 0x4b, 0xdb, 0x29, 0x59, 0x72, 0x0f);
DEFINE_GUID(MFVideoFormat_Base_HDCP,
0xeac3b9d5, 0xbd14, 0x4237, 0x8f, 0x1f, 0xba, 0xb4, 0x28, 0xe4, 0x93, 0x12);
DEFINE_GUID(MFMPEG4Format_Base,
0x00000000, 0x767a, 0x494d, 0xb4, 0x78, 0xf2, 0x9d, 0x25, 0xdc, 0x90, 0x37);
DEFINE_GUID(MFSubtitleFormat_XML,
    0x2006f94f, 0x29ca, 0x4195, 0xb8, 0xdb, 0x00, 0xde, 0xd8, 0xff, 0x0c, 0x97);
DEFINE_GUID(MFSubtitleFormat_TTML,
    0x73e73992, 0x9a10, 0x4356, 0x95, 0x57, 0x71, 0x94, 0xe9, 0x1e, 0x3e, 0x54);
DEFINE_GUID(MFSubtitleFormat_ATSC,
    0x7fa7faa3, 0xfeae, 0x4e16, 0xae, 0xdf, 0x36, 0xb9, 0xac, 0xfb, 0xb0, 0x99);
DEFINE_GUID(MFSubtitleFormat_WebVTT,
    0xc886d215, 0xf485, 0x40bb, 0x8d, 0xb6, 0xfa, 0xdb, 0xc6, 0x19, 0xa4, 0x5d);
DEFINE_GUID(MFSubtitleFormat_SRT,
    0x5e467f2e, 0x77ca, 0x4ca5, 0x83, 0x91, 0xd1, 0x42, 0xed, 0x4b, 0x76, 0xc8);
DEFINE_GUID(MFSubtitleFormat_SSA,
    0x57176a1b, 0x1a9e, 0x4eea, 0xab, 0xef, 0xc6, 0x17, 0x60, 0x19, 0x8a, 0xc4);
DEFINE_GUID(MFSubtitleFormat_CustomUserData,
    0x1bb3d849, 0x6614, 0x4d80, 0x88, 0x82, 0xed, 0x24, 0xaa, 0x82, 0xda, 0x92);
    DEFINE_GUID(name, \
    format, 0xbf10, 0x48b4, 0xbc, 0x18, 0x59, 0x3d, 0xc1, 0xdb, 0x95, 0xf);
DEFINE_BINARY_MEDIATYPE_GUID(MFBinaryFormat_Base, 0x00000000);
DEFINE_BINARY_MEDIATYPE_GUID(MFBinaryFormat_GPMD, 'gpmd');
DEFINE_GUID(MF_MT_MAJOR_TYPE,
0x48eba18e, 0xf8c9, 0x4687, 0xbf, 0x11, 0x0a, 0x74, 0xc9, 0xf9, 0x6a, 0x8f);
DEFINE_GUID(MF_MT_SUBTYPE,
0xf7e34c9a, 0x42e8, 0x4714, 0xb7, 0x4b, 0xcb, 0x29, 0xd7, 0x2c, 0x35, 0xe5);
DEFINE_GUID(MF_MT_ALL_SAMPLES_INDEPENDENT,
0xc9173739, 0x5e56, 0x461c, 0xb7, 0x13, 0x46, 0xfb, 0x99, 0x5c, 0xb9, 0x5f);
DEFINE_GUID(MF_MT_FIXED_SIZE_SAMPLES,
0xb8ebefaf, 0xb718, 0x4e04, 0xb0, 0xa9, 0x11, 0x67, 0x75, 0xe3, 0x32, 0x1b);
DEFINE_GUID(MF_MT_COMPRESSED,
0x3afd0cee, 0x18f2, 0x4ba5, 0xa1, 0x10, 0x8b, 0xea, 0x50, 0x2e, 0x1f, 0x92);
DEFINE_GUID(MF_MT_SAMPLE_SIZE,
0xdad3ab78, 0x1990, 0x408b, 0xbc, 0xe2, 0xeb, 0xa6, 0x73, 0xda, 0xcc, 0x10);
DEFINE_GUID(MF_MT_WRAPPED_TYPE,
0x4d3f7b23, 0xd02f, 0x4e6c, 0x9b, 0xee, 0xe4, 0xbf, 0x2c, 0x6c, 0x69, 0x5d);
DEFINE_GUID( MF_MT_VIDEO_3D,
0xcb5e88cf, 0x7b5b, 0x476b, 0x85, 0xaa, 0x1c, 0xa5, 0xae, 0x18, 0x75, 0x55);
typedef enum _MFVideo3DFormat {
    MFVideo3DSampleFormat_BaseView = 0,
    MFVideo3DSampleFormat_MultiView = 1,
    MFVideo3DSampleFormat_Packed_LeftRight = 2,
    MFVideo3DSampleFormat_Packed_TopBottom = 3,
} MFVideo3DFormat;
DEFINE_GUID(MF_MT_VIDEO_3D_FORMAT,
0x5315d8a0, 0x87c5, 0x4697, 0xb7, 0x93, 0x66, 0x6, 0xc6, 0x7c, 0x4, 0x9b);
DEFINE_GUID( MF_MT_VIDEO_3D_NUM_VIEWS,
0xbb077e8a, 0xdcbf, 0x42eb, 0xaf, 0x60, 0x41, 0x8d, 0xf9, 0x8a, 0xa4, 0x95);
DEFINE_GUID( MF_MT_VIDEO_3D_LEFT_IS_BASE,
0x6d4b7bff, 0x5629, 0x4404, 0x94, 0x8c, 0xc6, 0x34, 0xf4, 0xce, 0x26, 0xd4);
DEFINE_GUID( MF_MT_VIDEO_3D_FIRST_IS_LEFT,
0xec298493, 0xada, 0x4ea1, 0xa4, 0xfe, 0xcb, 0xbd, 0x36, 0xce, 0x93, 0x31);
DEFINE_GUID( MFSampleExtension_3DVideo,
0xf86f97a4, 0xdd54, 0x4e2e, 0x9a, 0x5e, 0x55, 0xfc, 0x2d, 0x74, 0xa0, 0x05);
typedef enum _MFVideo3DSampleFormat {
    MFSampleExtension_3DVideo_MultiView = 1,
    MFSampleExtension_3DVideo_Packed = 0,
} MFVideo3DSampleFormat;
DEFINE_GUID( MFSampleExtension_3DVideo_SampleFormat,
0x8671772, 0xe36f, 0x4cff, 0x97, 0xb3, 0xd7, 0x2e, 0x20, 0x98, 0x7a, 0x48);
typedef enum _MFVideoRotationFormat {
    MFVideoRotationFormat_0 = 0,
    MFVideoRotationFormat_90 = 90,
    MFVideoRotationFormat_180 = 180,
    MFVideoRotationFormat_270 = 270,
} MFVideoRotationFormat;
DEFINE_GUID(MF_MT_VIDEO_ROTATION,
0xc380465d, 0x2271, 0x428c, 0x9b, 0x83, 0xec, 0xea, 0x3b, 0x4a, 0x85, 0xc1);
DEFINE_GUID(MF_DEVICESTREAM_MULTIPLEXED_MANAGER,
0x6ea542b0, 0x281f, 0x4231, 0xa4, 0x64, 0xfe, 0x2f, 0x50, 0x22, 0x50, 0x1c);
DEFINE_GUID(MF_MEDIATYPE_MULTIPLEXED_MANAGER,
0x13c78fb5, 0xf275, 0x4ea0, 0xbb, 0x5f, 0x2, 0x49, 0x83, 0x2b, 0xd, 0x6e);
DEFINE_GUID(MFSampleExtension_MULTIPLEXED_MANAGER,
0x8dcdee79, 0x6b5a, 0x4c45, 0x8d, 0xb9, 0x20, 0xb3, 0x95, 0xf0, 0x2f, 0xcf);
STDAPI MFCreateMuxStreamAttributes(
    _In_ IMFCollection *pAttributesToMux,
    _COM_Outptr_ IMFAttributes**ppMuxAttribs
);
STDAPI MFCreateMuxStreamMediaType(
    _In_ IMFCollection *pMediaTypesToMux,
    _COM_Outptr_ IMFMediaType**ppMuxMediaType
);
STDAPI MFCreateMuxStreamSample(
    _In_ IMFCollection *pSamplesToMux,
    _COM_Outptr_ IMFSample**ppMuxSample
);
DEFINE_GUID(MF_MT_SECURE,
0xc5acc4fd, 0x0304, 0x4ecf, 0x80, 0x9f, 0x47, 0xbc, 0x97, 0xff, 0x63, 0xbd);
DEFINE_GUID(MF_DEVICESTREAM_ATTRIBUTE_FRAMESOURCE_TYPES,
0x17145fd1, 0x1b2b, 0x423c, 0x80, 0x1, 0x2b, 0x68, 0x33, 0xed, 0x35, 0x88);
DEFINE_GUID(MF_MT_ALPHA_MODE,
0x5D959B0D, 0x4CBF, 0x4D04, 0x91, 0x9F, 0x3F, 0x5F, 0x7F, 0x28, 0x42, 0x11);
typedef enum _MFDepthMeasurement
{
    DistanceToFocalPlane = 0,
    DistanceToOpticalCenter = 1,
} MFDepthMeasurement;
DEFINE_GUID(MF_MT_DEPTH_MEASUREMENT,
0xfd5ac489, 0x917, 0x4bb6, 0x9d, 0x54, 0x31, 0x22, 0xbf, 0x70, 0x14, 0x4b);
DEFINE_GUID(MF_MT_DEPTH_VALUE_UNIT,
0x21a800f5, 0x3189, 0x4797, 0xbe, 0xba, 0xf1, 0x3c, 0xd9, 0xa3, 0x1a, 0x5e);
DEFINE_GUID(MF_MT_VIDEO_NO_FRAME_ORDERING,
    0x3f5b106f, 0x6bc2, 0x4ee3, 0xb7, 0xed, 0x89, 0x2, 0xc1, 0x8f, 0x53, 0x51);
DEFINE_GUID(MF_MT_VIDEO_H264_NO_FMOASO,
    0xed461cd6, 0xec9f, 0x416a, 0xa8, 0xa3, 0x26, 0xd7, 0xd3, 0x10, 0x18, 0xd7);
DEFINE_GUID(MFSampleExtension_ForwardedDecodeUnits,
0x424c754c, 0x97c8, 0x48d6, 0x87, 0x77, 0xfc, 0x41, 0xf7, 0xb6, 0x8, 0x79);
DEFINE_GUID(MFSampleExtension_TargetGlobalLuminance,
0x3f60ef36, 0x31ef, 0x4daf, 0x83, 0x60, 0x94, 0x3, 0x97, 0xe4, 0x1e, 0xf3);
typedef enum _MF_CUSTOM_DECODE_UNIT_TYPE
{
    MF_DECODE_UNIT_NAL = 0,
    MF_DECODE_UNIT_SEI = 1
} MF_CUSTOM_DECODE_UNIT_TYPE;
DEFINE_GUID(MFSampleExtension_ForwardedDecodeUnitType,
0x89e57c7, 0x47d3, 0x4a26, 0xbf, 0x9c, 0x4b, 0x64, 0xfa, 0xfb, 0x5d, 0x1e);
DEFINE_GUID(MF_MT_FORWARD_CUSTOM_NALU,
0xed336efd, 0x244f, 0x428d, 0x91, 0x53, 0x28, 0xf3, 0x99, 0x45, 0x88, 0x90);
DEFINE_GUID(MF_MT_FORWARD_CUSTOM_SEI,
0xe27362f1, 0xb136, 0x41d1, 0x95, 0x94, 0x3a, 0x7e, 0x4f, 0xeb, 0xf2, 0xd1);
DEFINE_GUID(MF_MT_VIDEO_RENDERER_EXTENSION_PROFILE,
0x8437d4b9, 0xd448, 0x4fcd, 0x9b, 0x6b, 0x83, 0x9b, 0xf9, 0x6c, 0x77, 0x98);
DEFINE_GUID(MF_DECODER_FWD_CUSTOM_SEI_DECODE_ORDER, 0xf13bbe3c, 0x36d4, 0x410a, 0xb9, 0x85, 0x7a, 0x95, 0x1a, 0x1e, 0x62, 0x94);
DEFINE_GUID(MF_MT_AUDIO_NUM_CHANNELS,
0x37e48bf5, 0x645e, 0x4c5b, 0x89, 0xde, 0xad, 0xa9, 0xe2, 0x9b, 0x69, 0x6a);
DEFINE_GUID(MF_MT_AUDIO_SAMPLES_PER_SECOND,
0x5faeeae7, 0x0290, 0x4c31, 0x9e, 0x8a, 0xc5, 0x34, 0xf6, 0x8d, 0x9d, 0xba);
DEFINE_GUID(MF_MT_AUDIO_FLOAT_SAMPLES_PER_SECOND,
0xfb3b724a, 0xcfb5, 0x4319, 0xae, 0xfe, 0x6e, 0x42, 0xb2, 0x40, 0x61, 0x32);
DEFINE_GUID(MF_MT_AUDIO_AVG_BYTES_PER_SECOND,
0x1aab75c8, 0xcfef, 0x451c, 0xab, 0x95, 0xac, 0x03, 0x4b, 0x8e, 0x17, 0x31);
DEFINE_GUID(MF_MT_AUDIO_BLOCK_ALIGNMENT,
0x322de230, 0x9eeb, 0x43bd, 0xab, 0x7a, 0xff, 0x41, 0x22, 0x51, 0x54, 0x1d);
DEFINE_GUID(MF_MT_AUDIO_BITS_PER_SAMPLE,
0xf2deb57f, 0x40fa, 0x4764, 0xaa, 0x33, 0xed, 0x4f, 0x2d, 0x1f, 0xf6, 0x69);
DEFINE_GUID(MF_MT_AUDIO_VALID_BITS_PER_SAMPLE,
0xd9bf8d6a, 0x9530, 0x4b7c, 0x9d, 0xdf, 0xff, 0x6f, 0xd5, 0x8b, 0xbd, 0x06);
DEFINE_GUID(MF_MT_AUDIO_SAMPLES_PER_BLOCK,
0xaab15aac, 0xe13a, 0x4995, 0x92, 0x22, 0x50, 0x1e, 0xa1, 0x5c, 0x68, 0x77);
DEFINE_GUID(MF_MT_AUDIO_CHANNEL_MASK,
0x55fb5765, 0x644a, 0x4caf, 0x84, 0x79, 0x93, 0x89, 0x83, 0xbb, 0x15, 0x88);
typedef struct _MFFOLDDOWN_MATRIX
{
    UINT32 cbSize;
    UINT32 cSrcChannels;
    UINT32 cDstChannels;
    UINT32 dwChannelMask;
    LONG Coeff[64];
} MFFOLDDOWN_MATRIX;
DEFINE_GUID(MF_MT_AUDIO_FOLDDOWN_MATRIX,
0x9d62927c, 0x36be, 0x4cf2, 0xb5, 0xc4, 0xa3, 0x92, 0x6e, 0x3e, 0x87, 0x11);
DEFINE_GUID(MF_MT_AUDIO_WMADRC_PEAKREF,
0x9d62927d, 0x36be, 0x4cf2, 0xb5, 0xc4, 0xa3, 0x92, 0x6e, 0x3e, 0x87, 0x11);
DEFINE_GUID(MF_MT_AUDIO_WMADRC_PEAKTARGET,
0x9d62927e, 0x36be, 0x4cf2, 0xb5, 0xc4, 0xa3, 0x92, 0x6e, 0x3e, 0x87, 0x11);
DEFINE_GUID(MF_MT_AUDIO_WMADRC_AVGREF,
0x9d62927f, 0x36be, 0x4cf2, 0xb5, 0xc4, 0xa3, 0x92, 0x6e, 0x3e, 0x87, 0x11);
DEFINE_GUID(MF_MT_AUDIO_WMADRC_AVGTARGET,
0x9d629280, 0x36be, 0x4cf2, 0xb5, 0xc4, 0xa3, 0x92, 0x6e, 0x3e, 0x87, 0x11);
DEFINE_GUID(MF_MT_AUDIO_PREFER_WAVEFORMATEX,
0xa901aaba, 0xe037, 0x458a, 0xbd, 0xf6, 0x54, 0x5b, 0xe2, 0x07, 0x40, 0x42);
DEFINE_GUID(MF_MT_AAC_PAYLOAD_TYPE,
0xbfbabe79, 0x7434, 0x4d1c, 0x94, 0xf0, 0x72, 0xa3, 0xb9, 0xe1, 0x71, 0x88);
DEFINE_GUID(MF_MT_AAC_AUDIO_PROFILE_LEVEL_INDICATION,
0x7632f0e6, 0x9538, 0x4d61, 0xac, 0xda, 0xea, 0x29, 0xc8, 0xc1, 0x44, 0x56);
DEFINE_GUID(MF_MT_AUDIO_FLAC_MAX_BLOCK_SIZE,
    0x8b81adae, 0x4b5a, 0x4d40, 0x80, 0x22, 0xf3, 0x8d, 0x9, 0xca, 0x3c, 0x5c);
DEFINE_GUID( MF_MT_SPATIAL_AUDIO_MAX_DYNAMIC_OBJECTS,
    0xdcfba24a, 0x2609, 0x4240, 0xa7, 0x21, 0x3f, 0xae, 0xa7, 0x6a, 0x4d, 0xf9 );
DEFINE_GUID( MF_MT_SPATIAL_AUDIO_OBJECT_METADATA_FORMAT_ID,
    0x2ab71bc0, 0x6223, 0x4ba7, 0xad, 0x64, 0x7b, 0x94, 0xb4, 0x7a, 0xe7, 0x92 );
DEFINE_GUID( MF_MT_SPATIAL_AUDIO_OBJECT_METADATA_LENGTH,
    0x94ba8be, 0xd723, 0x489f, 0x92, 0xfa, 0x76, 0x67, 0x77, 0xb3, 0x47, 0x26 );
DEFINE_GUID( MF_MT_SPATIAL_AUDIO_MAX_METADATA_ITEMS,
    0x11aa80b4, 0xe0da, 0x47c6, 0x80, 0x60, 0x96, 0xc1, 0x25, 0x9a, 0xe5, 0xd );
DEFINE_GUID( MF_MT_SPATIAL_AUDIO_MIN_METADATA_ITEM_OFFSET_SPACING,
    0x83e96ec9, 0x1184, 0x417e, 0x82, 0x54, 0x9f, 0x26, 0x91, 0x58, 0xfc, 0x6 );
DEFINE_GUID( MF_MT_SPATIAL_AUDIO_DATA_PRESENT,
    0x6842f6e7, 0xd43e, 0x4ebb, 0x9c, 0x9c, 0xc9, 0x6f, 0x41, 0x78, 0x48, 0x63 );
DEFINE_GUID(MF_MT_FRAME_SIZE,
0x1652c33d, 0xd6b2, 0x4012, 0xb8, 0x34, 0x72, 0x03, 0x08, 0x49, 0xa3, 0x7d);
DEFINE_GUID(MF_MT_FRAME_RATE,
0xc459a2e8, 0x3d2c, 0x4e44, 0xb1, 0x32, 0xfe, 0xe5, 0x15, 0x6c, 0x7b, 0xb0);
DEFINE_GUID(MF_MT_PIXEL_ASPECT_RATIO,
0xc6376a1e, 0x8d0a, 0x4027, 0xbe, 0x45, 0x6d, 0x9a, 0x0a, 0xd3, 0x9b, 0xb6);
DEFINE_GUID(MF_MT_DRM_FLAGS,
0x8772f323, 0x355a, 0x4cc7, 0xbb, 0x78, 0x6d, 0x61, 0xa0, 0x48, 0xae, 0x82);
DEFINE_GUID(MF_MT_TIMESTAMP_CAN_BE_DTS,
0x24974215, 0x1b7b, 0x41e4, 0x86, 0x25, 0xac, 0x46, 0x9f, 0x2d, 0xed, 0xaa);
typedef enum _MFVideoDRMFlags {
    MFVideoDRMFlag_None = 0,
    MFVideoDRMFlag_AnalogProtected = 1,
    MFVideoDRMFlag_DigitallyProtected = 2,
} MFVideoDRMFlags;
DEFINE_GUID(MF_MT_PAD_CONTROL_FLAGS,
0x4d0e73e5, 0x80ea, 0x4354, 0xa9, 0xd0, 0x11, 0x76, 0xce, 0xb0, 0x28, 0xea);
typedef enum _MFVideoPadFlags {
    MFVideoPadFlag_PAD_TO_None = 0,
    MFVideoPadFlag_PAD_TO_4x3 = 1,
    MFVideoPadFlag_PAD_TO_16x9 = 2
} MFVideoPadFlags;
DEFINE_GUID(MF_MT_SOURCE_CONTENT_HINT,
0x68aca3cc, 0x22d0, 0x44e6, 0x85, 0xf8, 0x28, 0x16, 0x71, 0x97, 0xfa, 0x38);
typedef enum _MFVideoSrcContentHintFlags {
    MFVideoSrcContentHintFlag_None = 0,
    MFVideoSrcContentHintFlag_16x9 = 1,
    MFVideoSrcContentHintFlag_235_1 = 2
} MFVideoSrcContentHintFlags;
DEFINE_GUID(MF_MT_VIDEO_CHROMA_SITING,
0x65df2370, 0xc773, 0x4c33, 0xaa, 0x64, 0x84, 0x3e, 0x06, 0x8e, 0xfb, 0x0c);
DEFINE_GUID(MF_MT_INTERLACE_MODE,
0xe2724bb8, 0xe676, 0x4806, 0xb4, 0xb2, 0xa8, 0xd6, 0xef, 0xb4, 0x4c, 0xcd);
DEFINE_GUID(MF_MT_TRANSFER_FUNCTION,
0x5fb0fce9, 0xbe5c, 0x4935, 0xa8, 0x11, 0xec, 0x83, 0x8f, 0x8e, 0xed, 0x93);
DEFINE_GUID(MF_MT_VIDEO_PRIMARIES,
0xdbfbe4d7, 0x0740, 0x4ee0, 0x81, 0x92, 0x85, 0x0a, 0xb0, 0xe2, 0x19, 0x35);
DEFINE_GUID(MF_MT_MAX_LUMINANCE_LEVEL,
0x50253128, 0xc110, 0x4de4, 0x98, 0xae, 0x46, 0xa3, 0x24, 0xfa, 0xe6, 0xda);
DEFINE_GUID(MF_MT_MAX_FRAME_AVERAGE_LUMINANCE_LEVEL,
0x58d4bf57, 0x6f52, 0x4733, 0xa1, 0x95, 0xa9, 0xe2, 0x9e, 0xcf, 0x9e, 0x27);
DEFINE_GUID(MF_MT_MAX_MASTERING_LUMINANCE,
0xd6c6b997, 0x272f, 0x4ca1, 0x8d, 0x0, 0x80, 0x42, 0x11, 0x1a, 0xf, 0xf6);
DEFINE_GUID(MF_MT_MIN_MASTERING_LUMINANCE,
0x839a4460, 0x4e7e, 0x4b4f, 0xae, 0x79, 0xcc, 0x8, 0x90, 0x5c, 0x7b, 0x27);
DEFINE_GUID(MF_MT_DECODER_USE_MAX_RESOLUTION,
0x4c547c24, 0xaf9a, 0x4f38, 0x96, 0xad, 0x97, 0x87, 0x73, 0xcf, 0x53, 0xe7);
DEFINE_GUID(MF_MT_DECODER_MAX_DPB_COUNT,
0x67be144c, 0x88b7, 0x4ca9, 0x96, 0x28, 0xc8, 0x8, 0xd5, 0x26, 0x22, 0x17);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
DEFINE_GUID(MF_MT_CUSTOM_VIDEO_PRIMARIES,
0x47537213, 0x8cfb, 0x4722, 0xaa, 0x34, 0xfb, 0xc9, 0xe2, 0x4d, 0x77, 0xb8);
typedef struct _MT_CUSTOM_VIDEO_PRIMARIES {
    float fRx;
    float fRy;
    float fGx;
    float fGy;
    float fBx;
    float fBy;
    float fWx;
    float fWy;
} MT_CUSTOM_VIDEO_PRIMARIES;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
DEFINE_GUID(MF_MT_YUV_MATRIX,
0x3e23d450, 0x2c75, 0x4d25, 0xa0, 0x0e, 0xb9, 0x16, 0x70, 0xd1, 0x23, 0x27);
DEFINE_GUID(MF_MT_VIDEO_LIGHTING,
0x53a0529c, 0x890b, 0x4216, 0x8b, 0xf9, 0x59, 0x93, 0x67, 0xad, 0x6d, 0x20);
DEFINE_GUID(MF_MT_VIDEO_NOMINAL_RANGE,
0xc21b8ee5, 0xb956, 0x4071, 0x8d, 0xaf, 0x32, 0x5e, 0xdf, 0x5c, 0xab, 0x11);
DEFINE_GUID(MF_MT_GEOMETRIC_APERTURE,
0x66758743, 0x7e5f, 0x400d, 0x98, 0x0a, 0xaa, 0x85, 0x96, 0xc8, 0x56, 0x96);
DEFINE_GUID(MF_MT_MINIMUM_DISPLAY_APERTURE,
0xd7388766, 0x18fe, 0x48c6, 0xa1, 0x77, 0xee, 0x89, 0x48, 0x67, 0xc8, 0xc4);
DEFINE_GUID(MF_MT_PAN_SCAN_APERTURE,
0x79614dde, 0x9187, 0x48fb, 0xb8, 0xc7, 0x4d, 0x52, 0x68, 0x9d, 0xe6, 0x49);
DEFINE_GUID(MF_MT_PAN_SCAN_ENABLED,
0x4b7f6bc3, 0x8b13, 0x40b2, 0xa9, 0x93, 0xab, 0xf6, 0x30, 0xb8, 0x20, 0x4e);
DEFINE_GUID(MF_MT_AVG_BITRATE,
0x20332624, 0xfb0d, 0x4d9e, 0xbd, 0x0d, 0xcb, 0xf6, 0x78, 0x6c, 0x10, 0x2e);
DEFINE_GUID(MF_MT_AVG_BIT_ERROR_RATE,
0x799cabd6, 0x3508, 0x4db4, 0xa3, 0xc7, 0x56, 0x9c, 0xd5, 0x33, 0xde, 0xb1);
DEFINE_GUID(MF_MT_MAX_KEYFRAME_SPACING,
0xc16eb52b, 0x73a1, 0x476f, 0x8d, 0x62, 0x83, 0x9d, 0x6a, 0x02, 0x06, 0x52);
DEFINE_GUID(MF_MT_USER_DATA,
0xb6bc765f, 0x4c3b, 0x40a4, 0xbd, 0x51, 0x25, 0x35, 0xb6, 0x6f, 0xe0, 0x9d);
DEFINE_GUID(MF_MT_OUTPUT_BUFFER_NUM,
0xa505d3ac, 0xf930, 0x436e, 0x8e, 0xde, 0x93, 0xa5, 0x09, 0xce, 0x23, 0xb2);
DEFINE_GUID(MF_MT_REALTIME_CONTENT,
0xbb12d222,0x2bdb,0x425e,0x91,0xec,0x23,0x08,0xe1,0x89,0xa5,0x8f);
DEFINE_GUID(MF_MT_DEFAULT_STRIDE,
0x644b4e48, 0x1e02, 0x4516, 0xb0, 0xeb, 0xc0, 0x1c, 0xa9, 0xd4, 0x9a, 0xc6);
DEFINE_GUID(MF_MT_PALETTE,
0x6d283f42, 0x9846, 0x4410, 0xaf, 0xd9, 0x65, 0x4d, 0x50, 0x3b, 0x1a, 0x54);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
DEFINE_GUID(MF_MT_AM_FORMAT_TYPE,
0x73d1072d, 0x1870, 0x4174, 0xa0, 0x63, 0x29, 0xff, 0x4f, 0xf6, 0xc1, 0x1e);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
DEFINE_GUID(MF_MT_VIDEO_PROFILE,
0xad76a80b, 0x2d5c, 0x4e0b, 0xb3, 0x75, 0x64, 0xe5, 0x20, 0x13, 0x70, 0x36);
DEFINE_GUID(MF_MT_VIDEO_LEVEL,
0x96f66574, 0x11c5, 0x4015, 0x86, 0x66, 0xbf, 0xf5, 0x16, 0x43, 0x6d, 0xa7);
DEFINE_GUID(MF_MT_MPEG_START_TIME_CODE,
0x91f67885, 0x4333, 0x4280, 0x97, 0xcd, 0xbd, 0x5a, 0x6c, 0x03, 0xa0, 0x6e);
DEFINE_GUID(MF_MT_MPEG2_PROFILE,
0xad76a80b, 0x2d5c, 0x4e0b, 0xb3, 0x75, 0x64, 0xe5, 0x20, 0x13, 0x70, 0x36);
DEFINE_GUID(MF_MT_MPEG2_LEVEL,
0x96f66574, 0x11c5, 0x4015, 0x86, 0x66, 0xbf, 0xf5, 0x16, 0x43, 0x6d, 0xa7);
DEFINE_GUID(MF_MT_MPEG2_FLAGS,
0x31e3991d, 0xf701, 0x4b2f, 0xb4, 0x26, 0x8a, 0xe3, 0xbd, 0xa9, 0xe0, 0x4b);
DEFINE_GUID(MF_MT_MPEG_SEQUENCE_HEADER,
0x3c036de7, 0x3ad0, 0x4c9e, 0x92, 0x16, 0xee, 0x6d, 0x6a, 0xc2, 0x1c, 0xb3);
DEFINE_GUID(MF_MT_MPEG2_STANDARD,
0xa20af9e8, 0x928a, 0x4b26, 0xaa, 0xa9, 0xf0, 0x5c, 0x74, 0xca, 0xc4, 0x7c);
DEFINE_GUID(MF_MT_MPEG2_TIMECODE,
0x5229ba10, 0xe29d, 0x4f80, 0xa5, 0x9c, 0xdf, 0x4f, 0x18, 0x2, 0x7, 0xd2);
DEFINE_GUID(MF_MT_MPEG2_CONTENT_PACKET,
0x825d55e4, 0x4f12, 0x4197, 0x9e, 0xb3, 0x59, 0xb6, 0xe4, 0x71, 0xf, 0x6);
DEFINE_GUID(MF_MT_MPEG2_ONE_FRAME_PER_PACKET,
0x91a49eb5, 0x1d20, 0x4b42, 0xac, 0xe8, 0x80, 0x42, 0x69, 0xbf, 0x95, 0xed);
DEFINE_GUID(MF_MT_MPEG2_HDCP,
0x168f1b4a, 0x3e91, 0x450f, 0xae, 0xa7, 0xe4, 0xba, 0xea, 0xda, 0xe5, 0xba);
DEFINE_GUID(MF_MT_H264_MAX_CODEC_CONFIG_DELAY,
0xf5929986, 0x4c45, 0x4fbb, 0xbb, 0x49, 0x6c, 0xc5, 0x34, 0xd0, 0x5b, 0x9b);
DEFINE_GUID(MF_MT_H264_SUPPORTED_SLICE_MODES,
0xc8be1937, 0x4d64, 0x4549, 0x83, 0x43, 0xa8, 0x8, 0x6c, 0xb, 0xfd, 0xa5);
DEFINE_GUID(MF_MT_H264_SUPPORTED_SYNC_FRAME_TYPES,
0x89a52c01, 0xf282, 0x48d2, 0xb5, 0x22, 0x22, 0xe6, 0xae, 0x63, 0x31, 0x99);
DEFINE_GUID(MF_MT_H264_RESOLUTION_SCALING,
0xe3854272, 0xf715, 0x4757, 0xba, 0x90, 0x1b, 0x69, 0x6c, 0x77, 0x34, 0x57);
DEFINE_GUID(MF_MT_H264_SIMULCAST_SUPPORT,
0x9ea2d63d, 0x53f0, 0x4a34, 0xb9, 0x4e, 0x9d, 0xe4, 0x9a, 0x7, 0x8c, 0xb3);
DEFINE_GUID(MF_MT_H264_SUPPORTED_RATE_CONTROL_MODES,
0x6a8ac47e, 0x519c, 0x4f18, 0x9b, 0xb3, 0x7e, 0xea, 0xae, 0xa5, 0x59, 0x4d);
DEFINE_GUID(MF_MT_H264_MAX_MB_PER_SEC,
0x45256d30, 0x7215, 0x4576, 0x93, 0x36, 0xb0, 0xf1, 0xbc, 0xd5, 0x9b, 0xb2);
DEFINE_GUID(MF_MT_H264_SUPPORTED_USAGES,
0x60b1a998, 0xdc01, 0x40ce, 0x97, 0x36, 0xab, 0xa8, 0x45, 0xa2, 0xdb, 0xdc);
DEFINE_GUID(MF_MT_H264_CAPABILITIES,
0xbb3bd508, 0x490a, 0x11e0, 0x99, 0xe4, 0x13, 0x16, 0xdf, 0xd7, 0x20, 0x85);
DEFINE_GUID(MF_MT_H264_SVC_CAPABILITIES,
0xf8993abe, 0xd937, 0x4a8f, 0xbb, 0xca, 0x69, 0x66, 0xfe, 0x9e, 0x11, 0x52);
DEFINE_GUID(MF_MT_H264_USAGE,
0x359ce3a5, 0xaf00, 0x49ca, 0xa2, 0xf4, 0x2a, 0xc9, 0x4c, 0xa8, 0x2b, 0x61);
DEFINE_GUID(MF_MT_H264_RATE_CONTROL_MODES,
0x705177d8, 0x45cb, 0x11e0, 0xac, 0x7d, 0xb9, 0x1c, 0xe0, 0xd7, 0x20, 0x85);
DEFINE_GUID(MF_MT_H264_LAYOUT_PER_STREAM,
0x85e299b2, 0x90e3, 0x4fe8, 0xb2, 0xf5, 0xc0, 0x67, 0xe0, 0xbf, 0xe5, 0x7a);
DEFINE_GUID(MF_MT_IN_BAND_PARAMETER_SET,
0x75da5090, 0x910b, 0x4a03, 0x89, 0x6c, 0x7b, 0x89, 0x8f, 0xee, 0xa5, 0xaf);
DEFINE_GUID(MF_MT_MPEG4_TRACK_TYPE,
    0x54f486dd, 0x9327, 0x4f6d, 0x80, 0xab, 0x6f, 0x70, 0x9e, 0xbb, 0x4c, 0xce);
DEFINE_GUID(MF_MT_CONTAINER_RATE_SCALING,
    0x83877f5e, 0x444, 0x4e28, 0x84, 0x79, 0x6d, 0xb0, 0x98, 0x9b, 0x8c, 0x9);
DEFINE_GUID(MF_MT_DV_AAUX_SRC_PACK_0,
0x84bd5d88, 0x0fb8, 0x4ac8, 0xbe, 0x4b, 0xa8, 0x84, 0x8b, 0xef, 0x98, 0xf3);
DEFINE_GUID(MF_MT_DV_AAUX_CTRL_PACK_0,
0xf731004e, 0x1dd1, 0x4515, 0xaa, 0xbe, 0xf0, 0xc0, 0x6a, 0xa5, 0x36, 0xac);
DEFINE_GUID(MF_MT_DV_AAUX_SRC_PACK_1,
0x720e6544, 0x0225, 0x4003, 0xa6, 0x51, 0x01, 0x96, 0x56, 0x3a, 0x95, 0x8e);
DEFINE_GUID(MF_MT_DV_AAUX_CTRL_PACK_1,
0xcd1f470d, 0x1f04, 0x4fe0, 0xbf, 0xb9, 0xd0, 0x7a, 0xe0, 0x38, 0x6a, 0xd8);
DEFINE_GUID(MF_MT_DV_VAUX_SRC_PACK,
0x41402d9d, 0x7b57, 0x43c6, 0xb1, 0x29, 0x2c, 0xb9, 0x97, 0xf1, 0x50, 0x09);
DEFINE_GUID(MF_MT_DV_VAUX_CTRL_PACK,
0x2f84e1c4, 0x0da1, 0x4788, 0x93, 0x8e, 0x0d, 0xfb, 0xfb, 0xb3, 0x4b, 0x48);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
typedef struct _MT_ARBITRARY_HEADER
{
    GUID majortype;
    GUID subtype;
    BOOL bFixedSizeSamples;
    BOOL bTemporalCompression;
    ULONG lSampleSize;
    GUID formattype;
}
MT_ARBITRARY_HEADER;
DEFINE_GUID(MF_MT_ARBITRARY_HEADER,
0x9e6bd6f5, 0x109, 0x4f95, 0x84, 0xac, 0x93, 0x9, 0x15, 0x3a, 0x19, 0xfc );
DEFINE_GUID(MF_MT_ARBITRARY_FORMAT,
0x5a75b249, 0xd7d, 0x49a1, 0xa1, 0xc3, 0xe0, 0xd8, 0x7f, 0xc, 0xad, 0xe5);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
DEFINE_GUID(MF_MT_IMAGE_LOSS_TOLERANT,
0xed062cf4, 0xe34e, 0x4922, 0xbe, 0x99, 0x93, 0x40, 0x32, 0x13, 0x3d, 0x7c);
DEFINE_GUID(MF_MT_MPEG4_SAMPLE_DESCRIPTION,
0x261e9d83, 0x9529, 0x4b8f, 0xa1, 0x11, 0x8b, 0x9c, 0x95, 0x0a, 0x81, 0xa9);
DEFINE_GUID(MF_MT_MPEG4_CURRENT_SAMPLE_ENTRY,
0x9aa7e155, 0xb64a, 0x4c1d, 0xa5, 0x00, 0x45, 0x5d, 0x60, 0x0b, 0x65, 0x60);
DEFINE_GUID(MF_SD_AMBISONICS_SAMPLE3D_DESCRIPTION,
0xf715cf3e, 0xa964, 0x4c3f, 0x94, 0xae, 0x9d, 0x6b, 0xa7, 0x26, 0x46, 0x41);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
DEFINE_GUID(MF_MT_ORIGINAL_4CC,
0xd7be3fe0, 0x2bc7, 0x492d, 0xb8, 0x43, 0x61, 0xa1, 0x91, 0x9b, 0x70, 0xc3);
DEFINE_GUID(MF_MT_ORIGINAL_WAVE_FORMAT_TAG,
0x8cbbc843, 0x9fd9, 0x49c2, 0x88, 0x2f, 0xa7, 0x25, 0x86, 0xc4, 0x08, 0xad);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
DEFINE_GUID(MF_MT_FRAME_RATE_RANGE_MIN,
0xd2e7558c, 0xdc1f, 0x403f, 0x9a, 0x72, 0xd2, 0x8b, 0xb1, 0xeb, 0x3b, 0x5e);
DEFINE_GUID(MF_MT_FRAME_RATE_RANGE_MAX,
0xe3371d41, 0xb4cf, 0x4a05, 0xbd, 0x4e, 0x20, 0xb8, 0x8b, 0xb2, 0xc4, 0xd6);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
DEFINE_GUID(MF_LOW_LATENCY,
0x9c27891a, 0xed7a, 0x40e1, 0x88, 0xe8, 0xb2, 0x27, 0x27, 0xa0, 0x24, 0xee);
DEFINE_GUID(MF_VIDEO_MAX_MB_PER_SEC,
0xe3f2e203, 0xd445, 0x4b8c, 0x92, 0x11, 0xae, 0x39, 0xd, 0x3b, 0xa0, 0x17);
DEFINE_GUID(MF_DISABLE_FRAME_CORRUPTION_INFO,
    0x7086e16c, 0x49c5, 0x4201, 0x88, 0x2a, 0x85, 0x38, 0xf3, 0x8c, 0xf1, 0x3a);
typedef struct _MF_FLOAT2
{
    FLOAT x;
    FLOAT y;
} MF_FLOAT2;
typedef struct _MF_FLOAT3
{
    FLOAT x;
    FLOAT y;
    FLOAT z;
} MF_FLOAT3;
typedef struct _MF_QUATERNION
{
    FLOAT x;
    FLOAT y;
    FLOAT z;
    FLOAT w;
} MF_QUATERNION;
typedef struct _MFCameraExtrinsic_CalibratedTransform
{
    GUID CalibrationId;
    MF_FLOAT3 Position;
    MF_QUATERNION Orientation;
} MFCameraExtrinsic_CalibratedTransform;
typedef struct _MFCameraExtrinsics
{
    UINT32 TransformCount;
    MFCameraExtrinsic_CalibratedTransform CalibratedTransforms[1];
} MFCameraExtrinsics;
DEFINE_GUID(MFStreamExtension_CameraExtrinsics,
    0x686196d0, 0x13e2, 0x41d9, 0x96, 0x38, 0xef, 0x3, 0x2c, 0x27, 0x2a, 0x52);
DEFINE_GUID(MFSampleExtension_CameraExtrinsics,
    0x6b761658, 0xb7ec, 0x4c3b, 0x82, 0x25, 0x86, 0x23, 0xca, 0xbe, 0xc3, 0x1d);
typedef struct _MFCameraIntrinsic_PinholeCameraModel
{
    MF_FLOAT2 FocalLength;
    MF_FLOAT2 PrincipalPoint;
} MFCameraIntrinsic_PinholeCameraModel;
typedef struct _MFCameraIntrinsic_DistortionModel
{
    FLOAT Radial_k1;
    FLOAT Radial_k2;
    FLOAT Radial_k3;
    FLOAT Tangential_p1;
    FLOAT Tangential_p2;
} MFCameraIntrinsic_DistortionModel;
typedef struct _MFPinholeCameraIntrinsic_IntrinsicModel
{
    UINT32 Width;
    UINT32 Height;
    MFCameraIntrinsic_PinholeCameraModel CameraModel;
    MFCameraIntrinsic_DistortionModel DistortionModel;
} MFPinholeCameraIntrinsic_IntrinsicModel;
typedef struct _MFPinholeCameraIntrinsics
{
    UINT32 IntrinsicModelCount;
    MFPinholeCameraIntrinsic_IntrinsicModel IntrinsicModels[1];
} MFPinholeCameraIntrinsics;
DEFINE_GUID(MFStreamExtension_PinholeCameraIntrinsics,
    0xdbac0455, 0xec8, 0x4aef, 0x9c, 0x32, 0x7a, 0x3e, 0xe3, 0x45, 0x6f, 0x53);
DEFINE_GUID(MFSampleExtension_PinholeCameraIntrinsics,
    0x4ee3b6c5, 0x6a15, 0x4e72, 0x97, 0x61, 0x70, 0xc1, 0xdb, 0x8b, 0x9f, 0xe3);
DEFINE_GUID(MFMediaType_Default,
0x81A412E6, 0x8103, 0x4B06, 0x85, 0x7F, 0x18, 0x62, 0x78, 0x10, 0x24, 0xAC);
DEFINE_GUID(MFMediaType_Audio,
0x73647561, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
DEFINE_GUID(MFMediaType_Video,
0x73646976, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
DEFINE_GUID(MFMediaType_Protected,
0x7b4b6fe6, 0x9d04, 0x4494, 0xbe, 0x14, 0x7e, 0x0b, 0xd0, 0x76, 0xc8, 0xe4);
DEFINE_GUID(MFMediaType_SAMI,
0xe69669a0, 0x3dcd, 0x40cb, 0x9e, 0x2e, 0x37, 0x08, 0x38, 0x7c, 0x06, 0x16);
DEFINE_GUID(MFMediaType_Script,
0x72178C22, 0xE45B, 0x11D5, 0xBC, 0x2A, 0x00, 0xB0, 0xD0, 0xF3, 0xF4, 0xAB);
DEFINE_GUID(MFMediaType_Image,
0x72178C23, 0xE45B, 0x11D5, 0xBC, 0x2A, 0x00, 0xB0, 0xD0, 0xF3, 0xF4, 0xAB);
DEFINE_GUID(MFMediaType_HTML,
0x72178C24, 0xE45B, 0x11D5, 0xBC, 0x2A, 0x00, 0xB0, 0xD0, 0xF3, 0xF4, 0xAB);
DEFINE_GUID(MFMediaType_Binary,
0x72178C25, 0xE45B, 0x11D5, 0xBC, 0x2A, 0x00, 0xB0, 0xD0, 0xF3, 0xF4, 0xAB);
DEFINE_GUID(MFMediaType_FileTransfer,
0x72178C26, 0xE45B, 0x11D5, 0xBC, 0x2A, 0x00, 0xB0, 0xD0, 0xF3, 0xF4, 0xAB);
DEFINE_GUID(MFMediaType_Stream,
0xe436eb83, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
DEFINE_GUID(MFMediaType_MultiplexedFrames,
0x6ea542b0, 0x281f, 0x4231, 0xa4, 0x64, 0xfe, 0x2f, 0x50, 0x22, 0x50, 0x1c);
DEFINE_GUID(MFMediaType_Subtitle,
0xa6d13581, 0xed50, 0x4e65, 0xae, 0x08, 0x26, 0x06, 0x55, 0x76, 0xaa, 0xcc);
DEFINE_GUID(MFMediaType_Perception,
0x597ff6f9, 0x6ea2, 0x4670, 0x85, 0xb4, 0xea, 0x84, 0x7, 0x3f, 0xe9, 0x40);
DEFINE_GUID(MFImageFormat_JPEG,
0x19e4a5aa, 0x5662, 0x4fc5, 0xa0, 0xc0, 0x17, 0x58, 0x02, 0x8e, 0x10, 0x57);
DEFINE_GUID(MFImageFormat_RGB32,
0x00000016, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MFStreamFormat_MPEG2Transport,
0xe06d8023, 0xdb46, 0x11cf, 0xb4, 0xd1, 0x00, 0x80, 0x5f, 0x6c, 0xbb, 0xea);
DEFINE_GUID(MFStreamFormat_MPEG2Program,
0x263067d1, 0xd330, 0x45dc, 0xb6, 0x69, 0x34, 0xd9, 0x86, 0xe4, 0xe3, 0xe1);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
DEFINE_GUID(AM_MEDIA_TYPE_REPRESENTATION,
0xe2e42ad2, 0x132c, 0x491e, 0xa2, 0x68, 0x3c, 0x7c, 0x2d, 0xca, 0x18, 0x1f);
DEFINE_GUID(FORMAT_MFVideoFormat,
0xaed4ab2d, 0x7326, 0x43cb, 0x94, 0x64, 0xc8, 0x79, 0xca, 0xb9, 0xc4, 0x3d);
struct tagVIDEOINFOHEADER;
typedef struct tagVIDEOINFOHEADER VIDEOINFOHEADER;
struct tagVIDEOINFOHEADER2;
typedef struct tagVIDEOINFOHEADER2 VIDEOINFOHEADER2;
struct tagMPEG1VIDEOINFO;
typedef struct tagMPEG1VIDEOINFO MPEG1VIDEOINFO;
struct tagMPEG2VIDEOINFO;
typedef struct tagMPEG2VIDEOINFO MPEG2VIDEOINFO;
struct _AMMediaType;
typedef struct _AMMediaType AM_MEDIA_TYPE;
STDAPI
MFValidateMediaTypeSize(
    _In_ GUID FormatType,
    _In_reads_bytes_opt_(cbSize) UINT8* pBlock,
    _In_ UINT32 cbSize
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI
MFCreateMediaType(
    _Outptr_ IMFMediaType** ppMFType
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI
MFCreateMFVideoFormatFromMFMediaType(
    _In_ IMFMediaType* pMFType,
    _Out_ MFVIDEOFORMAT** ppMFVF,
    _Out_opt_ UINT32* pcbSize
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef enum _MFWaveFormatExConvertFlags {
    MFWaveFormatExConvertFlag_Normal = 0,
    MFWaveFormatExConvertFlag_ForceExtensible = 1
} MFWaveFormatExConvertFlags;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI
MFCreateWaveFormatExFromMFMediaType(
    _In_ IMFMediaType* pMFType,
    _Out_ WAVEFORMATEX** ppWF,
    _Out_opt_ UINT32* pcbSize,
    _In_ UINT32 Flags = MFWaveFormatExConvertFlag_Normal
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI
MFInitMediaTypeFromVideoInfoHeader(
    _In_ IMFMediaType* pMFType,
    _In_reads_bytes_(cbBufSize) const VIDEOINFOHEADER* pVIH,
    _In_ UINT32 cbBufSize,
    _In_opt_ const GUID* pSubtype = NULL
    );
STDAPI
MFInitMediaTypeFromVideoInfoHeader2(
    _In_ IMFMediaType* pMFType,
    _In_reads_bytes_(cbBufSize) const VIDEOINFOHEADER2* pVIH2,
    _In_ UINT32 cbBufSize,
    _In_opt_ const GUID* pSubtype = NULL
    );
STDAPI
MFInitMediaTypeFromMPEG1VideoInfo(
    _In_ IMFMediaType* pMFType,
    _In_reads_bytes_(cbBufSize) const MPEG1VIDEOINFO* pMP1VI,
    _In_ UINT32 cbBufSize,
    _In_opt_ const GUID* pSubtype = NULL
    );
STDAPI
MFInitMediaTypeFromMPEG2VideoInfo(
    _In_ IMFMediaType* pMFType,
    _In_reads_bytes_(cbBufSize) const MPEG2VIDEOINFO* pMP2VI,
    _In_ UINT32 cbBufSize,
    _In_opt_ const GUID* pSubtype = NULL
    );
STDAPI
MFCalculateBitmapImageSize(
    _In_reads_bytes_(cbBufSize) const BITMAPINFOHEADER* pBMIH,
    _In_ UINT32 cbBufSize,
    _Out_ UINT32* pcbImageSize,
    _Out_opt_ BOOL* pbKnown = NULL
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI
MFCalculateImageSize(
    _In_ REFGUID guidSubtype,
    _In_ UINT32 unWidth,
    _In_ UINT32 unHeight,
    _Out_ UINT32* pcbImageSize
    );
STDAPI
MFFrameRateToAverageTimePerFrame(
    _In_ UINT32 unNumerator,
    _In_ UINT32 unDenominator,
    _Out_ UINT64* punAverageTimePerFrame
    );
STDAPI
MFAverageTimePerFrameToFrameRate(
    _In_ UINT64 unAverageTimePerFrame,
    _Out_ UINT32* punNumerator,
    _Out_ UINT32* punDenominator
    );
STDAPI
MFInitMediaTypeFromMFVideoFormat(
    _In_ IMFMediaType* pMFType,
    _In_reads_bytes_(cbBufSize) const MFVIDEOFORMAT* pMFVF,
    _In_ UINT32 cbBufSize
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI
MFInitMediaTypeFromWaveFormatEx(
    _In_ IMFMediaType* pMFType,
    _In_reads_bytes_(cbBufSize) const WAVEFORMATEX* pWaveFormat,
    _In_ UINT32 cbBufSize
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI
MFInitMediaTypeFromAMMediaType(
    _In_ IMFMediaType* pMFType,
    _In_ const AM_MEDIA_TYPE* pAMType
    );
STDAPI
MFInitAMMediaTypeFromMFMediaType(
    _In_ IMFMediaType* pMFType,
    _In_ GUID guidFormatBlockType,
    _Inout_ AM_MEDIA_TYPE* pAMType
    );
STDAPI
MFCreateAMMediaTypeFromMFMediaType(
    _In_ IMFMediaType* pMFType,
    _In_ GUID guidFormatBlockType,
    _Inout_ AM_MEDIA_TYPE** ppAMType
    );
STDAPI_(BOOL)
MFCompareFullToPartialMediaType(
    _In_ IMFMediaType* pMFTypeFull,
    _In_ IMFMediaType* pMFTypePartial
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI
MFWrapMediaType(
    _In_ IMFMediaType* pOrig,
    _In_ REFGUID MajorType,
    _In_ REFGUID SubType,
    _Out_ IMFMediaType ** ppWrap
    );
STDAPI
MFUnwrapMediaType(
    _In_ IMFMediaType* pWrap,
    _Out_ IMFMediaType ** ppOrig
    );
#endif
#pragma endregion
#pragma region Desktop or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI MFCreateVideoMediaTypeFromVideoInfoHeader(
    _In_ const KS_VIDEOINFOHEADER* pVideoInfoHeader,
    DWORD cbVideoInfoHeader,
    DWORD dwPixelAspectRatioX,
    DWORD dwPixelAspectRatioY,
    MFVideoInterlaceMode InterlaceMode,
    QWORD VideoFlags,
    _In_opt_ const GUID * pSubtype,
    _Out_ IMFVideoMediaType** ppIVideoMediaType
    );
STDAPI MFCreateVideoMediaTypeFromVideoInfoHeader2(
    _In_ const KS_VIDEOINFOHEADER2* pVideoInfoHeader,
    DWORD cbVideoInfoHeader,
    QWORD AdditionalVideoFlags,
    _In_opt_ const GUID * pSubtype,
    _Out_ IMFVideoMediaType** ppIVideoMediaType
    );
STDAPI MFCreateVideoMediaType(
    _In_ const MFVIDEOFORMAT* pVideoFormat,
    _Out_ IMFVideoMediaType** ppIVideoMediaType
    );
STDAPI MFCreateVideoMediaTypeFromSubtype(
    _In_ const GUID * pAMSubtype,
    _Out_ IMFVideoMediaType **ppIVideoMediaType
    );
STDAPI_(BOOL)
MFIsFormatYUV(
    DWORD Format
    );
STDAPI MFCreateVideoMediaTypeFromBitMapInfoHeader(
    _In_ const BITMAPINFOHEADER* pbmihBitMapInfoHeader,
    DWORD dwPixelAspectRatioX,
    DWORD dwPixelAspectRatioY,
    MFVideoInterlaceMode InterlaceMode,
    QWORD VideoFlags,
    QWORD qwFramesPerSecondNumerator,
    QWORD qwFramesPerSecondDenominator,
    DWORD dwMaxBitRate,
    _Out_ IMFVideoMediaType** ppIVideoMediaType
    );
STDAPI MFGetStrideForBitmapInfoHeader(
    DWORD format,
    DWORD dwWidth,
    _Out_ LONG* pStride
    );
STDAPI MFGetPlaneSize(
    DWORD format,
    DWORD dwWidth,
    DWORD dwHeight,
    _Out_ DWORD* pdwPlaneSize
    );
STDAPI MFCreateVideoMediaTypeFromBitMapInfoHeaderEx(
    _In_reads_bytes_(cbBitMapInfoHeader) const BITMAPINFOHEADER* pbmihBitMapInfoHeader,
    _In_ UINT32 cbBitMapInfoHeader,
    DWORD dwPixelAspectRatioX,
    DWORD dwPixelAspectRatioY,
    MFVideoInterlaceMode InterlaceMode,
    QWORD VideoFlags,
    DWORD dwFramesPerSecondNumerator,
    DWORD dwFramesPerSecondDenominator,
    DWORD dwMaxBitRate,
    _Out_ IMFVideoMediaType** ppIVideoMediaType
    );
STDAPI MFCreateMediaTypeFromRepresentation(
    GUID guidRepresentation,
    _In_ LPVOID pvRepresentation,
    _Out_ IMFMediaType** ppIMediaType
    );
STDAPI
MFCreateAudioMediaType(
    _In_ const WAVEFORMATEX* pAudioFormat,
    _Out_ IMFAudioMediaType** ppIAudioMediaType
    );
DWORD
STDMETHODCALLTYPE
MFGetUncompressedVideoFormat(
    _In_ const MFVIDEOFORMAT* pVideoFormat
    );
STDAPI
MFInitVideoFormat(
    _In_ MFVIDEOFORMAT* pVideoFormat,
    _In_ MFStandardVideoFormat type
    );
STDAPI
MFInitVideoFormat_RGB(
    _In_ MFVIDEOFORMAT* pVideoFormat,
    _In_ DWORD dwWidth,
    _In_ DWORD dwHeight,
    _In_ DWORD D3Dfmt
    );
STDAPI
MFConvertColorInfoToDXVA(
    _Out_ DWORD* pdwToDXVA,
    _In_ const MFVIDEOFORMAT* pFromFormat
    );
STDAPI
MFConvertColorInfoFromDXVA(
    _Inout_ MFVIDEOFORMAT* pToFormat,
    _In_ DWORD dwFromDXVA
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI MFCopyImage(
    _Out_writes_bytes_(_Inexpressible_(abs(lDestStride) * dwLines)) BYTE* pDest,
    LONG lDestStride,
    _In_reads_bytes_(_Inexpressible_(abs(lSrcStride) * dwLines)) const BYTE* pSrc,
    LONG lSrcStride,
    _Out_range_(<=, _Inexpressible_(min(abs(lSrcStride), abs(lDestStride)))) DWORD dwWidthInBytes,
    DWORD dwLines
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI MFConvertFromFP16Array(
    _Out_writes_(dwCount) float* pDest,
    _In_reads_(dwCount) const WORD* pSrc,
    DWORD dwCount
    );
STDAPI MFConvertToFP16Array(
    _Out_writes_(dwCount) WORD* pDest,
    _In_reads_(dwCount) const float* pSrc,
    DWORD dwCount
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
STDAPI MFCreate2DMediaBuffer(
    _In_ DWORD dwWidth,
    _In_ DWORD dwHeight,
    _In_ DWORD dwFourCC,
    _In_ BOOL fBottomUp,
    _Out_ IMFMediaBuffer** ppBuffer
    );
STDAPI MFCreateMediaBufferFromMediaType(
    _In_ IMFMediaType* pMediaType,
    _In_ LONGLONG llDuration,
    _In_ DWORD dwMinLength,
    _In_ DWORD dwMinAlignment,
    _Outptr_ IMFMediaBuffer** ppBuffer
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
inline
UINT32
HI32(UINT64 unPacked)
{
    return (UINT32)(unPacked >> 32);
}
inline
UINT32
LO32(UINT64 unPacked)
{
    return (UINT32)unPacked;
}
inline
UINT64
Pack2UINT32AsUINT64(UINT32 unHigh, UINT32 unLow)
{
    return ((UINT64)unHigh << 32) | unLow;
}
inline
void
Unpack2UINT32AsUINT64(UINT64 unPacked, _Out_ UINT32* punHigh, _Out_ UINT32* punLow)
{
    *punHigh = HI32(unPacked);
    *punLow = LO32(unPacked);
}
inline
UINT64
PackSize(UINT32 unWidth, UINT32 unHeight)
{
    return Pack2UINT32AsUINT64(unWidth, unHeight);
}
inline
void
UnpackSize(UINT64 unPacked, _Out_ UINT32* punWidth, _Out_ UINT32* punHeight)
{
    Unpack2UINT32AsUINT64(unPacked, punWidth, punHeight);
}
inline
UINT64
PackRatio(INT32 nNumerator, UINT32 unDenominator)
{
    return Pack2UINT32AsUINT64((UINT32)nNumerator, unDenominator);
}
inline
void
UnpackRatio(UINT64 unPacked, _Out_ INT32* pnNumerator, _Out_ UINT32* punDenominator)
{
    Unpack2UINT32AsUINT64(unPacked, (UINT32*)pnNumerator, punDenominator);
}
inline
UINT32
MFGetAttributeUINT32(
    IMFAttributes* pAttributes,
    REFGUID guidKey,
    UINT32 unDefault
    )
{
    UINT32 unRet;
    if (FAILED(pAttributes->GetUINT32(guidKey, &unRet))) {
        unRet = unDefault;
    }
    return unRet;
}
inline
UINT64
MFGetAttributeUINT64(
    IMFAttributes* pAttributes,
    REFGUID guidKey,
    UINT64 unDefault
    )
{
    UINT64 unRet;
    if (FAILED(pAttributes->GetUINT64(guidKey, &unRet))) {
        unRet = unDefault;
    }
    return unRet;
}
inline
double
MFGetAttributeDouble(
    IMFAttributes* pAttributes,
    REFGUID guidKey,
    double fDefault
    )
{
    double fRet;
    if (FAILED(pAttributes->GetDouble(guidKey, &fRet))) {
        fRet = fDefault;
    }
    return fRet;
}
inline
HRESULT
MFGetAttribute2UINT32asUINT64(
    IMFAttributes* pAttributes,
    REFGUID guidKey,
    _Out_ UINT32* punHigh32,
    _Out_ UINT32* punLow32
    )
{
    UINT64 unPacked;
    HRESULT hr = S_OK;
    hr = pAttributes->GetUINT64(guidKey, &unPacked);
    if (FAILED(hr)) {
        return hr;
    }
    Unpack2UINT32AsUINT64(unPacked, punHigh32, punLow32);
    return hr;
}
inline
HRESULT
MFSetAttribute2UINT32asUINT64(
    IMFAttributes* pAttributes,
    REFGUID guidKey,
    UINT32 unHigh32,
    UINT32 unLow32
    )
{
    return pAttributes->SetUINT64(guidKey, Pack2UINT32AsUINT64(unHigh32, unLow32));
}
inline
HRESULT
MFGetAttributeRatio(
    IMFAttributes* pAttributes,
    REFGUID guidKey,
    _Out_ UINT32* punNumerator,
    _Out_ UINT32* punDenominator
    )
{
    return MFGetAttribute2UINT32asUINT64(pAttributes, guidKey, punNumerator, punDenominator);
}
inline
HRESULT
MFGetAttributeSize(
    IMFAttributes* pAttributes,
    REFGUID guidKey,
    _Out_ UINT32* punWidth,
    _Out_ UINT32* punHeight
    )
{
    return MFGetAttribute2UINT32asUINT64(pAttributes, guidKey, punWidth, punHeight);
}
inline
HRESULT
MFSetAttributeRatio(
    IMFAttributes* pAttributes,
    REFGUID guidKey,
    UINT32 unNumerator,
    UINT32 unDenominator
    )
{
    return MFSetAttribute2UINT32asUINT64(pAttributes, guidKey, unNumerator, unDenominator);
}
inline
HRESULT
MFSetAttributeSize(
    IMFAttributes* pAttributes,
    REFGUID guidKey,
    UINT32 unWidth,
    UINT32 unHeight
    )
{
    return MFSetAttribute2UINT32asUINT64(pAttributes, guidKey, unWidth, unHeight);
}
inline
HRESULT
MFGetAttributeString(
    IMFAttributes* pAttributes,
    REFGUID guidKey,
    _Outptr_ PWSTR *ppsz
    )
{
    UINT32 length;
    PWSTR psz = NULL;
    *ppsz = NULL;
    HRESULT hr = pAttributes->GetStringLength(guidKey, &length);
    if (SUCCEEDED(hr)) {
        hr = UIntAdd(length, 1, &length);
    }
    if (SUCCEEDED(hr)) {
        size_t cb;
        hr = SizeTMult(length, sizeof(WCHAR), &cb);
        if( SUCCEEDED( hr ) )
        {
            psz = PWSTR( CoTaskMemAlloc( cb ) );
            if( !psz )
            {
                hr = E_OUTOFMEMORY;
            }
        }
    }
    if (SUCCEEDED(hr)) {
        hr = pAttributes->GetString(guidKey, psz, length, &length);
    }
    if (SUCCEEDED(hr)) {
        *ppsz = psz;
    } else {
        CoTaskMemFree(psz);
    }
    return hr;
}
STDAPI MFCreateCollection(
    _Out_ IMFCollection **ppIMFCollection );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
typedef enum _EAllocationType
{
    eAllocationTypeDynamic,
    eAllocationTypeRT,
    eAllocationTypePageable,
    eAllocationTypeIgnore
} EAllocationType;
EXTERN_C void* WINAPI MFHeapAlloc( size_t nSize,
                            ULONG dwFlags,
                            _In_opt_ char *pszFile,
                            int line,
                            EAllocationType eat);
EXTERN_C void WINAPI MFHeapFree( void * pv );
DEFINE_GUID(CLSID_MFSourceResolver,
    0x90eab60f,
    0xe43a,
    0x4188,
    0xbc, 0xc4, 0xe4, 0x7f, 0xdf, 0x04, 0x86, 0x8c);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
LONGLONG WINAPI MFllMulDiv(LONGLONG a, LONGLONG b, LONGLONG c, LONGLONG d);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI MFGetContentProtectionSystemCLSID(
    _In_ REFGUID guidProtectionSystemID,
    _Out_ CLSID *pclsid );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
DEFINE_GUID(MF_DEVICESTREAM_ATTRIBUTE_FACEAUTH_CAPABILITY,
0xCB6FD12A, 0x2248, 0x4E41, 0xAD, 0x46, 0xE7, 0x8B, 0xB9, 0x0A, 0xB9, 0xFC);
DEFINE_GUID(MF_DEVICESTREAM_ATTRIBUTE_SECURE_CAPABILITY,
0x940FD626, 0xEA6E, 0x4684, 0x98, 0x40, 0x36, 0xBD, 0x6E, 0xC9, 0xFB, 0xEF);
#endif
#pragma endregion
