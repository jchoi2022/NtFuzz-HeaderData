       
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
VOID
(WINAPI * PFN_WEBSOCKET_COMPLETION)(
    HRESULT hrError,
    VOID * pvCompletionContext,
    DWORD cbIO,
    BOOL fUTF8Encoded,
    BOOL fFinalFragment,
    BOOL fClose
);
class IWebSocketContext : public IHttpStoredContext
{
public:
    virtual
    HRESULT
    WriteFragment(
        _In_ VOID * pData,
        _Inout_ DWORD * pcbSent,
        _In_ BOOL fAsync,
        _In_ BOOL fUTF8Encoded,
        _In_ BOOL fFinalFragment,
        _In_ PFN_WEBSOCKET_COMPLETION pfnCompletion = NULL,
        _In_ VOID * pvCompletionContext = NULL,
        _Out_ BOOL * pfCompletionExpected = NULL
    ) = 0;
    virtual
    HRESULT
    ReadFragment(
        _Out_ VOID * pData,
        _Inout_ DWORD * pcbData,
        _In_ BOOL fAsync,
        _Out_ BOOL * pfUTF8Encoded,
        _Out_ BOOL * pfFinalFragment,
        _Out_ BOOL * pfConnectionClose,
        _In_ PFN_WEBSOCKET_COMPLETION pfnCompletion = NULL,
        _In_ VOID * pvCompletionContext = NULL,
        _Out_ BOOL * pfCompletionExpected = NULL
    ) = 0;
    virtual
    HRESULT
    SendConnectionClose(
        _In_ BOOL fAsync,
        _In_ USHORT uStatusCode,
        _In_ LPCWSTR pszReason = NULL,
        _In_ PFN_WEBSOCKET_COMPLETION pfnCompletion = NULL,
        _In_ VOID * pvCompletionContext = NULL,
        _Out_ BOOL * pfCompletionExpected = NULL
    ) = 0;
    virtual
    HRESULT
    GetCloseStatus(
        _Out_ USHORT * pStatusCode,
        _Out_ LPCWSTR * ppszReason = NULL,
        _Out_ USHORT * pcchReason = NULL
    ) = 0;
    virtual
    VOID
    CloseTcpConnection(
        VOID
    ) = 0;
    virtual
    VOID
    CancelOutstandingIO(
        VOID
    ) = 0;
};
#endif
#pragma endregion
