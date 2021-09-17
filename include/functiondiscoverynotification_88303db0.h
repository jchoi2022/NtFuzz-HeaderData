       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
interface IFunctionDiscoveryNotification;
class CFunctionDiscoveryNotificationWrapper : public IFunctionDiscoveryNotification
{
public:
        virtual HRESULT STDMETHODCALLTYPE OnUpdate(
                       QueryUpdateAction,
                       FDQUERYCONTEXT,
                       __RPC__in_opt IFunctionInstance*)
        { return S_OK; }
        virtual HRESULT STDMETHODCALLTYPE OnError(
                       HRESULT,
                       FDQUERYCONTEXT,
                               __RPC__in_string const WCHAR*)
        { return S_OK; }
        virtual HRESULT STDMETHODCALLTYPE OnEvent(
                       DWORD,
                       FDQUERYCONTEXT,
                               __RPC__in_string const WCHAR*)
        { return S_OK; }
};
#endif
#pragma endregion
