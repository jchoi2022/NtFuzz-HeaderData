#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDXGIInfoQueue IDXGIInfoQueue;
typedef interface IDXGIDebug IDXGIDebug;
typedef interface IDXGIDebug1 IDXGIDebug1;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef
enum DXGI_DEBUG_RLO_FLAGS
    {
        DXGI_DEBUG_RLO_SUMMARY = 0x1,
        DXGI_DEBUG_RLO_DETAIL = 0x2,
        DXGI_DEBUG_RLO_IGNORE_INTERNAL = 0x4,
        DXGI_DEBUG_RLO_ALL = 0x7
    } DXGI_DEBUG_RLO_FLAGS;
typedef GUID DXGI_DEBUG_ID;
DEFINE_GUID(DXGI_DEBUG_ALL, 0xe48ae283, 0xda80, 0x490b, 0x87, 0xe6, 0x43, 0xe9, 0xa9, 0xcf, 0xda, 0x8);
DEFINE_GUID(DXGI_DEBUG_DX, 0x35cdd7fc, 0x13b2, 0x421d, 0xa5, 0xd7, 0x7e, 0x44, 0x51, 0x28, 0x7d, 0x64);
DEFINE_GUID(DXGI_DEBUG_DXGI, 0x25cddaa4, 0xb1c6, 0x47e1, 0xac, 0x3e, 0x98, 0x87, 0x5b, 0x5a, 0x2e, 0x2a);
DEFINE_GUID(DXGI_DEBUG_APP, 0x6cd6e01, 0x4219, 0x4ebd, 0x87, 0x9, 0x27, 0xed, 0x23, 0x36, 0xc, 0x62);
typedef
enum DXGI_INFO_QUEUE_MESSAGE_CATEGORY
    {
        DXGI_INFO_QUEUE_MESSAGE_CATEGORY_UNKNOWN = 0,
        DXGI_INFO_QUEUE_MESSAGE_CATEGORY_MISCELLANEOUS = ( DXGI_INFO_QUEUE_MESSAGE_CATEGORY_UNKNOWN + 1 ) ,
        DXGI_INFO_QUEUE_MESSAGE_CATEGORY_INITIALIZATION = ( DXGI_INFO_QUEUE_MESSAGE_CATEGORY_MISCELLANEOUS + 1 ) ,
        DXGI_INFO_QUEUE_MESSAGE_CATEGORY_CLEANUP = ( DXGI_INFO_QUEUE_MESSAGE_CATEGORY_INITIALIZATION + 1 ) ,
        DXGI_INFO_QUEUE_MESSAGE_CATEGORY_COMPILATION = ( DXGI_INFO_QUEUE_MESSAGE_CATEGORY_CLEANUP + 1 ) ,
        DXGI_INFO_QUEUE_MESSAGE_CATEGORY_STATE_CREATION = ( DXGI_INFO_QUEUE_MESSAGE_CATEGORY_COMPILATION + 1 ) ,
        DXGI_INFO_QUEUE_MESSAGE_CATEGORY_STATE_SETTING = ( DXGI_INFO_QUEUE_MESSAGE_CATEGORY_STATE_CREATION + 1 ) ,
        DXGI_INFO_QUEUE_MESSAGE_CATEGORY_STATE_GETTING = ( DXGI_INFO_QUEUE_MESSAGE_CATEGORY_STATE_SETTING + 1 ) ,
        DXGI_INFO_QUEUE_MESSAGE_CATEGORY_RESOURCE_MANIPULATION = ( DXGI_INFO_QUEUE_MESSAGE_CATEGORY_STATE_GETTING + 1 ) ,
        DXGI_INFO_QUEUE_MESSAGE_CATEGORY_EXECUTION = ( DXGI_INFO_QUEUE_MESSAGE_CATEGORY_RESOURCE_MANIPULATION + 1 ) ,
        DXGI_INFO_QUEUE_MESSAGE_CATEGORY_SHADER = ( DXGI_INFO_QUEUE_MESSAGE_CATEGORY_EXECUTION + 1 )
    } DXGI_INFO_QUEUE_MESSAGE_CATEGORY;
typedef
enum DXGI_INFO_QUEUE_MESSAGE_SEVERITY
    {
        DXGI_INFO_QUEUE_MESSAGE_SEVERITY_CORRUPTION = 0,
        DXGI_INFO_QUEUE_MESSAGE_SEVERITY_ERROR = ( DXGI_INFO_QUEUE_MESSAGE_SEVERITY_CORRUPTION + 1 ) ,
        DXGI_INFO_QUEUE_MESSAGE_SEVERITY_WARNING = ( DXGI_INFO_QUEUE_MESSAGE_SEVERITY_ERROR + 1 ) ,
        DXGI_INFO_QUEUE_MESSAGE_SEVERITY_INFO = ( DXGI_INFO_QUEUE_MESSAGE_SEVERITY_WARNING + 1 ) ,
        DXGI_INFO_QUEUE_MESSAGE_SEVERITY_MESSAGE = ( DXGI_INFO_QUEUE_MESSAGE_SEVERITY_INFO + 1 )
    } DXGI_INFO_QUEUE_MESSAGE_SEVERITY;
typedef int DXGI_INFO_QUEUE_MESSAGE_ID;
typedef struct DXGI_INFO_QUEUE_MESSAGE
    {
    DXGI_DEBUG_ID Producer;
    DXGI_INFO_QUEUE_MESSAGE_CATEGORY Category;
    DXGI_INFO_QUEUE_MESSAGE_SEVERITY Severity;
    DXGI_INFO_QUEUE_MESSAGE_ID ID;
    _Field_size_(DescriptionByteLength) const char *pDescription;
    SIZE_T DescriptionByteLength;
    } DXGI_INFO_QUEUE_MESSAGE;
typedef struct DXGI_INFO_QUEUE_FILTER_DESC
    {
    UINT NumCategories;
    _Field_size_(NumCategories) DXGI_INFO_QUEUE_MESSAGE_CATEGORY *pCategoryList;
    UINT NumSeverities;
    _Field_size_(NumSeverities) DXGI_INFO_QUEUE_MESSAGE_SEVERITY *pSeverityList;
    UINT NumIDs;
    _Field_size_(NumIDs) DXGI_INFO_QUEUE_MESSAGE_ID *pIDList;
    } DXGI_INFO_QUEUE_FILTER_DESC;
typedef struct DXGI_INFO_QUEUE_FILTER
    {
    DXGI_INFO_QUEUE_FILTER_DESC AllowList;
    DXGI_INFO_QUEUE_FILTER_DESC DenyList;
    } DXGI_INFO_QUEUE_FILTER;
HRESULT WINAPI DXGIGetDebugInterface(REFIID riid, void **ppDebug);
extern RPC_IF_HANDLE __MIDL_itf_dxgidebug_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgidebug_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIInfoQueue;
    typedef struct IDXGIInfoQueueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIInfoQueue * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIInfoQueue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIInfoQueue * This);
        HRESULT ( STDMETHODCALLTYPE *SetMessageCountLimit )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer,
            _In_ UINT64 MessageCountLimit);
        void ( STDMETHODCALLTYPE *ClearStoredMessages )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        HRESULT ( STDMETHODCALLTYPE *GetMessage )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer,
            _In_ UINT64 MessageIndex,
            _Out_writes_bytes_opt_(*pMessageByteLength) DXGI_INFO_QUEUE_MESSAGE *pMessage,
            _Inout_ SIZE_T *pMessageByteLength);
        UINT64 ( STDMETHODCALLTYPE *GetNumStoredMessagesAllowedByRetrievalFilters )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        UINT64 ( STDMETHODCALLTYPE *GetNumStoredMessages )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        UINT64 ( STDMETHODCALLTYPE *GetNumMessagesDiscardedByMessageCountLimit )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        UINT64 ( STDMETHODCALLTYPE *GetMessageCountLimit )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        UINT64 ( STDMETHODCALLTYPE *GetNumMessagesAllowedByStorageFilter )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        UINT64 ( STDMETHODCALLTYPE *GetNumMessagesDeniedByStorageFilter )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        HRESULT ( STDMETHODCALLTYPE *AddStorageFilterEntries )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer,
            _In_ DXGI_INFO_QUEUE_FILTER *pFilter);
        HRESULT ( STDMETHODCALLTYPE *GetStorageFilter )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer,
            _Out_writes_bytes_opt_(*pFilterByteLength) DXGI_INFO_QUEUE_FILTER *pFilter,
            _Inout_ SIZE_T *pFilterByteLength);
        void ( STDMETHODCALLTYPE *ClearStorageFilter )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        HRESULT ( STDMETHODCALLTYPE *PushEmptyStorageFilter )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        HRESULT ( STDMETHODCALLTYPE *PushDenyAllStorageFilter )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        HRESULT ( STDMETHODCALLTYPE *PushCopyOfStorageFilter )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        HRESULT ( STDMETHODCALLTYPE *PushStorageFilter )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer,
            _In_ DXGI_INFO_QUEUE_FILTER *pFilter);
        void ( STDMETHODCALLTYPE *PopStorageFilter )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        UINT ( STDMETHODCALLTYPE *GetStorageFilterStackSize )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        HRESULT ( STDMETHODCALLTYPE *AddRetrievalFilterEntries )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer,
            _In_ DXGI_INFO_QUEUE_FILTER *pFilter);
        HRESULT ( STDMETHODCALLTYPE *GetRetrievalFilter )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer,
            _Out_writes_bytes_opt_(*pFilterByteLength) DXGI_INFO_QUEUE_FILTER *pFilter,
            _Inout_ SIZE_T *pFilterByteLength);
        void ( STDMETHODCALLTYPE *ClearRetrievalFilter )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        HRESULT ( STDMETHODCALLTYPE *PushEmptyRetrievalFilter )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        HRESULT ( STDMETHODCALLTYPE *PushDenyAllRetrievalFilter )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        HRESULT ( STDMETHODCALLTYPE *PushCopyOfRetrievalFilter )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        HRESULT ( STDMETHODCALLTYPE *PushRetrievalFilter )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer,
            _In_ DXGI_INFO_QUEUE_FILTER *pFilter);
        void ( STDMETHODCALLTYPE *PopRetrievalFilter )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        UINT ( STDMETHODCALLTYPE *GetRetrievalFilterStackSize )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        HRESULT ( STDMETHODCALLTYPE *AddMessage )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer,
            _In_ DXGI_INFO_QUEUE_MESSAGE_CATEGORY Category,
            _In_ DXGI_INFO_QUEUE_MESSAGE_SEVERITY Severity,
            _In_ DXGI_INFO_QUEUE_MESSAGE_ID ID,
            _In_ LPCSTR pDescription);
        HRESULT ( STDMETHODCALLTYPE *AddApplicationMessage )(
            IDXGIInfoQueue * This,
            _In_ DXGI_INFO_QUEUE_MESSAGE_SEVERITY Severity,
            _In_ LPCSTR pDescription);
        HRESULT ( STDMETHODCALLTYPE *SetBreakOnCategory )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer,
            _In_ DXGI_INFO_QUEUE_MESSAGE_CATEGORY Category,
            _In_ BOOL bEnable);
        HRESULT ( STDMETHODCALLTYPE *SetBreakOnSeverity )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer,
            _In_ DXGI_INFO_QUEUE_MESSAGE_SEVERITY Severity,
            _In_ BOOL bEnable);
        HRESULT ( STDMETHODCALLTYPE *SetBreakOnID )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer,
            _In_ DXGI_INFO_QUEUE_MESSAGE_ID ID,
            _In_ BOOL bEnable);
        BOOL ( STDMETHODCALLTYPE *GetBreakOnCategory )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer,
            _In_ DXGI_INFO_QUEUE_MESSAGE_CATEGORY Category);
        BOOL ( STDMETHODCALLTYPE *GetBreakOnSeverity )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer,
            _In_ DXGI_INFO_QUEUE_MESSAGE_SEVERITY Severity);
        BOOL ( STDMETHODCALLTYPE *GetBreakOnID )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer,
            _In_ DXGI_INFO_QUEUE_MESSAGE_ID ID);
        void ( STDMETHODCALLTYPE *SetMuteDebugOutput )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer,
            _In_ BOOL bMute);
        BOOL ( STDMETHODCALLTYPE *GetMuteDebugOutput )(
            IDXGIInfoQueue * This,
            _In_ DXGI_DEBUG_ID Producer);
        END_INTERFACE
    } IDXGIInfoQueueVtbl;
    interface IDXGIInfoQueue
    {
        CONST_VTBL struct IDXGIInfoQueueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetMessageCountLimit(This,Producer,MessageCountLimit) )
    ( (This)->lpVtbl -> ClearStoredMessages(This,Producer) )
    ( (This)->lpVtbl -> GetMessage(This,Producer,MessageIndex,pMessage,pMessageByteLength) )
    ( (This)->lpVtbl -> GetNumStoredMessagesAllowedByRetrievalFilters(This,Producer) )
    ( (This)->lpVtbl -> GetNumStoredMessages(This,Producer) )
    ( (This)->lpVtbl -> GetNumMessagesDiscardedByMessageCountLimit(This,Producer) )
    ( (This)->lpVtbl -> GetMessageCountLimit(This,Producer) )
    ( (This)->lpVtbl -> GetNumMessagesAllowedByStorageFilter(This,Producer) )
    ( (This)->lpVtbl -> GetNumMessagesDeniedByStorageFilter(This,Producer) )
    ( (This)->lpVtbl -> AddStorageFilterEntries(This,Producer,pFilter) )
    ( (This)->lpVtbl -> GetStorageFilter(This,Producer,pFilter,pFilterByteLength) )
    ( (This)->lpVtbl -> ClearStorageFilter(This,Producer) )
    ( (This)->lpVtbl -> PushEmptyStorageFilter(This,Producer) )
    ( (This)->lpVtbl -> PushDenyAllStorageFilter(This,Producer) )
    ( (This)->lpVtbl -> PushCopyOfStorageFilter(This,Producer) )
    ( (This)->lpVtbl -> PushStorageFilter(This,Producer,pFilter) )
    ( (This)->lpVtbl -> PopStorageFilter(This,Producer) )
    ( (This)->lpVtbl -> GetStorageFilterStackSize(This,Producer) )
    ( (This)->lpVtbl -> AddRetrievalFilterEntries(This,Producer,pFilter) )
    ( (This)->lpVtbl -> GetRetrievalFilter(This,Producer,pFilter,pFilterByteLength) )
    ( (This)->lpVtbl -> ClearRetrievalFilter(This,Producer) )
    ( (This)->lpVtbl -> PushEmptyRetrievalFilter(This,Producer) )
    ( (This)->lpVtbl -> PushDenyAllRetrievalFilter(This,Producer) )
    ( (This)->lpVtbl -> PushCopyOfRetrievalFilter(This,Producer) )
    ( (This)->lpVtbl -> PushRetrievalFilter(This,Producer,pFilter) )
    ( (This)->lpVtbl -> PopRetrievalFilter(This,Producer) )
    ( (This)->lpVtbl -> GetRetrievalFilterStackSize(This,Producer) )
    ( (This)->lpVtbl -> AddMessage(This,Producer,Category,Severity,ID,pDescription) )
    ( (This)->lpVtbl -> AddApplicationMessage(This,Severity,pDescription) )
    ( (This)->lpVtbl -> SetBreakOnCategory(This,Producer,Category,bEnable) )
    ( (This)->lpVtbl -> SetBreakOnSeverity(This,Producer,Severity,bEnable) )
    ( (This)->lpVtbl -> SetBreakOnID(This,Producer,ID,bEnable) )
    ( (This)->lpVtbl -> GetBreakOnCategory(This,Producer,Category) )
    ( (This)->lpVtbl -> GetBreakOnSeverity(This,Producer,Severity) )
    ( (This)->lpVtbl -> GetBreakOnID(This,Producer,ID) )
    ( (This)->lpVtbl -> SetMuteDebugOutput(This,Producer,bMute) )
    ( (This)->lpVtbl -> GetMuteDebugOutput(This,Producer) )
EXTERN_C const IID IID_IDXGIDebug;
    typedef struct IDXGIDebugVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIDebug * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIDebug * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIDebug * This);
        HRESULT ( STDMETHODCALLTYPE *ReportLiveObjects )(
            IDXGIDebug * This,
            GUID apiid,
            DXGI_DEBUG_RLO_FLAGS flags);
        END_INTERFACE
    } IDXGIDebugVtbl;
    interface IDXGIDebug
    {
        CONST_VTBL struct IDXGIDebugVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReportLiveObjects(This,apiid,flags) )
EXTERN_C const IID IID_IDXGIDebug1;
    typedef struct IDXGIDebug1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIDebug1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIDebug1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIDebug1 * This);
        HRESULT ( STDMETHODCALLTYPE *ReportLiveObjects )(
            IDXGIDebug1 * This,
            GUID apiid,
            DXGI_DEBUG_RLO_FLAGS flags);
        void ( STDMETHODCALLTYPE *EnableLeakTrackingForThread )(
            IDXGIDebug1 * This);
        void ( STDMETHODCALLTYPE *DisableLeakTrackingForThread )(
            IDXGIDebug1 * This);
        BOOL ( STDMETHODCALLTYPE *IsLeakTrackingEnabledForThread )(
            IDXGIDebug1 * This);
        END_INTERFACE
    } IDXGIDebug1Vtbl;
    interface IDXGIDebug1
    {
        CONST_VTBL struct IDXGIDebug1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReportLiveObjects(This,apiid,flags) )
    ( (This)->lpVtbl -> EnableLeakTrackingForThread(This) )
    ( (This)->lpVtbl -> DisableLeakTrackingForThread(This) )
    ( (This)->lpVtbl -> IsLeakTrackingEnabledForThread(This) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
DEFINE_GUID(IID_IDXGIInfoQueue,0xD67441C7,0x672A,0x476f,0x9E,0x82,0xCD,0x55,0xB4,0x49,0x49,0xCE);
DEFINE_GUID(IID_IDXGIDebug,0x119E7452,0xDE9E,0x40fe,0x88,0x06,0x88,0xF9,0x0C,0x12,0xB4,0x41);
DEFINE_GUID(IID_IDXGIDebug1,0xc5a05f0c,0x16f2,0x4adf,0x9f,0x4d,0xa8,0xc4,0xd5,0x8a,0xc5,0x50);
extern RPC_IF_HANDLE __MIDL_itf_dxgidebug_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgidebug_0000_0003_v0_0_s_ifspec;
}
