       
#include <asyncinfo.h>
#include <winerror.h>
#include <intrin.h>
#include <windows.foundation.h>
#include <windows.foundation.diagnostics.h>
namespace ABI {
namespace Windows {
namespace Foundation {
typedef ::Windows::Foundation::IAsyncActionCompletedHandler IAsyncActionCompletedHandler;
namespace Diagnostics {
typedef ::Windows::Foundation::Diagnostics::CausalitySource CausalitySource;
typedef ::Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics IAsyncCausalityTracerStatics;
typedef ::Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs TracingStatusChangedEventArgs;
typedef ::Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs ITracingStatusChangedEventArgs;
typedef ::Windows::Foundation::Diagnostics::CausalityTraceLevel CausalityTraceLevel;
const ::Windows::Foundation::Diagnostics::CausalityTraceLevel CausalityTraceLevel_Verbose = ::Windows::Foundation::Diagnostics::CausalityTraceLevel_Verbose;
const ::Windows::Foundation::Diagnostics::CausalityTraceLevel CausalityTraceLevel_Important = ::Windows::Foundation::Diagnostics::CausalityTraceLevel_Important;
const ::Windows::Foundation::Diagnostics::CausalityTraceLevel CausalityTraceLevel_Required = ::Windows::Foundation::Diagnostics::CausalityTraceLevel_Required;
const ::Windows::Foundation::Diagnostics::CausalityRelation CausalityRelation_Join = ::Windows::Foundation::Diagnostics::CausalityRelation_Join;
const ::Windows::Foundation::Diagnostics::CausalityRelation CausalityRelation_Choice = ::Windows::Foundation::Diagnostics::CausalityRelation_Choice;
const ::Windows::Foundation::Diagnostics::CausalityRelation CausalityRelation_Error = ::Windows::Foundation::Diagnostics::CausalityRelation_Error;
const ::Windows::Foundation::Diagnostics::CausalityRelation CausalityRelation_Cancel = ::Windows::Foundation::Diagnostics::CausalityRelation_Cancel;
const ::Windows::Foundation::Diagnostics::CausalityRelation CausalityRelation_AssignDelegate = ::Windows::Foundation::Diagnostics::CausalityRelation_AssignDelegate ;
const ::Windows::Foundation::Diagnostics::CausalitySynchronousWork CausalitySynchronousWork_CompletionNotification = ::Windows::Foundation::Diagnostics::CausalitySynchronousWork_CompletionNotification;
const ::Windows::Foundation::Diagnostics::CausalitySynchronousWork CausalitySynchronousWork_ProgressNotification = ::Windows::Foundation::Diagnostics::CausalitySynchronousWork_ProgressNotification;
const ::Windows::Foundation::Diagnostics::CausalitySynchronousWork CausalitySynchronousWork_Execution = ::Windows::Foundation::Diagnostics::CausalitySynchronousWork_Execution;
}
}
}
}
#include <wrl\def.h>
#include <wrl\internal.h>
#include <wrl\implements.h>
#include <wrl\event.h>
#include <wrl\wrappers\corewrappers.h>
#include <new.h>
#include <pshpack8.h>
#pragma warning(push)
#pragma warning(disable: 4481)
extern _declspec(selectany) const GUID GUID_CAUSALITY_WINDOWS_PLATFORM_ID =
{ 0xc54c95d9, 0x5b6e, 0x41e9, { 0xa2, 0x8d, 0x2d, 0xd6, 0x8f, 0x94, 0xb5, 0x0 } };
namespace Microsoft {
namespace WRL {
enum ErrorPropagationPolicy
{
    PropagateDelegateError = 1,
    IgnoreDelegateError = 2
};
namespace Details
{
  struct AsyncOptionsBase
  {
      static const bool hasCausalityOptions = false;
      static const bool hasErrorPropagationPolicy = false;
      static const bool hasCausalityOperationName = false;
      static const bool isCausalityEnabled = true;
  };
  template < PCWSTR OpName >
  struct IsOperationName
  {
      static const bool Value = true;
  };
  template < >
  struct IsOperationName< nullptr >
  {
      static const bool Value = false;
  };
}
template < ErrorPropagationPolicy errorPropagationPolicy = Microsoft::WRL::ErrorPropagationPolicy::IgnoreDelegateError>
struct ErrorPropagationOptions : public Microsoft::WRL::Details::AsyncOptionsBase
{
    static const ErrorPropagationPolicy PropagationPolicy = errorPropagationPolicy;
    static const bool hasErrorPropagationPolicy = true;
};
template <
    PCWSTR OpName = nullptr,
    const GUID &PlatformId = WRL_DEFAULT_CAUSALITY_GUID,
    ::ABI::Windows::Foundation::Diagnostics::CausalitySource CausalitySource = WRL_DEFAULT_CAUSALITY_SOURCE
>
struct AsyncCausalityOptions : public Microsoft::WRL::Details::AsyncOptionsBase
{
    static PCWSTR GetAsyncOperationName()
    {
        return OpName;
    }
    static const GUID GetPlatformId()
    {
        return PlatformId;
    }
    static ::ABI::Windows::Foundation::Diagnostics::CausalitySource GetCausalitySource()
    {
        return CausalitySource;
    }
    static const bool hasCausalityOptions = true;
    static const bool hasCausalityOperationName = Microsoft::WRL::Details::IsOperationName<OpName>::Value;
};
extern __declspec(selectany) const WCHAR DisableCausalityAsyncOperationName[] = L"Disabled";
struct DisableCausality : public AsyncCausalityOptions< DisableCausalityAsyncOperationName >
{
    static const bool isCausalityEnabled = false;
};
namespace Details
{
enum AsyncStatusInternal
{
    _Undefined = -2,
    _Created = -1,
    _Started = static_cast<int>(::ABI::Windows::Foundation::AsyncStatus::Started),
    _Completed = static_cast<int>(::ABI::Windows::Foundation::AsyncStatus::Completed),
    _Canceled = static_cast<int>(::ABI::Windows::Foundation::AsyncStatus::Canceled),
    _Error = static_cast<int>(::ABI::Windows::Foundation::AsyncStatus::Error),
    _Closed
};
template < typename T >
struct DerefHelper;
template < typename T >
struct DerefHelper<T*>
{
    typedef T DerefType;
};
#pragma region AsyncOptionsHelper
template < typename TComplete, bool hasName, typename TOptions >
struct CausalityNameHelper
{
    static PCWSTR GetName()
    {
        return TOptions::GetAsyncOperationName();
    }
};
template < typename TComplete, typename TOptions >
struct CausalityNameHelper< TComplete, false, TOptions >
{
    static PCWSTR GetName()
    {
        return TComplete::z_get_rc_name_impl();
    }
};
template <typename TOptions>
struct CausalityNameHelper< ::ABI::Windows::Foundation::IAsyncActionCompletedHandler, false, TOptions >
{
    static PCWSTR GetName()
    {
        return L"Windows.Foundation.IAsyncActionCompletedHandler";
    }
};
template < bool hasValue, typename TOptions >
struct ErrorPropagationOptionsHelper;
template < typename TOptions >
struct ErrorPropagationOptionsHelper< true , TOptions >
{
    static const Microsoft::WRL::ErrorPropagationPolicy PropagationPolicy = TOptions::PropagationPolicy;
};
template < typename TOptions >
struct ErrorPropagationOptionsHelper< false , TOptions >
{
    static const Microsoft::WRL::ErrorPropagationPolicy PropagationPolicy = Microsoft::WRL::ErrorPropagationOptions<>::PropagationPolicy;
};
template < bool hasCausalityOptions, typename TComplete, typename TOptions >
struct AsyncCausalityOptionsHelper;
template < typename TComplete, typename TOptions >
struct AsyncCausalityOptionsHelper < true, TComplete, TOptions >
{
    static_assert(!(__is_base_of(::ABI::Windows::Foundation::IAsyncActionCompletedHandler, TComplete) && !TOptions::hasCausalityOperationName),"Please add name to Asynchronous Operations for Better Diagnostics: http://winri/BreakingChanges/BreakingChangeForm/Index/1992");
    static PCWSTR GetAsyncOperationName()
    {
        return CausalityNameHelper< TComplete, TOptions::hasCausalityOperationName, TOptions >::GetName();
    }
    static const GUID GetPlatformId()
    {
        return TOptions::GetPlatformId();
    }
    static const ::ABI::Windows::Foundation::Diagnostics::CausalitySource GetCausalitySource()
    {
        return TOptions::GetCausalitySource();
    }
    static const bool CausalityEnabled = TOptions::isCausalityEnabled;
};
template < typename TComplete, typename TOptions >
struct AsyncCausalityOptionsHelper < false, TComplete, TOptions >
{
    static_assert(!(__is_base_of(::ABI::Windows::Foundation::IAsyncActionCompletedHandler, TComplete) && !TOptions::hasCausalityOperationName),"Please add name to Asynchronous Operations for Better Diagnostics: http://winri/BreakingChanges/BreakingChangeForm/Index/1992");
    static PCWSTR GetAsyncOperationName()
    {
        return CausalityNameHelper< TComplete, TOptions::hasCausalityOperationName, TOptions >::GetName();
    }
    static const GUID GetPlatformId()
    {
        return Microsoft::WRL::AsyncCausalityOptions<>::GetPlatformId();
    }
    static ::ABI::Windows::Foundation::Diagnostics::CausalitySource GetCausalitySource()
    {
        return Microsoft::WRL::AsyncCausalityOptions<>::GetCausalitySource();
    }
    static const bool CausalityEnabled = TOptions::isCausalityEnabled;
};
template < typename TComplete, typename TOptions >
struct AsyncOptionsHelper :
    public AsyncCausalityOptionsHelper < TOptions::hasCausalityOptions, TComplete, TOptions >,
    public ErrorPropagationOptionsHelper < TOptions::hasErrorPropagationPolicy, TOptions >
{
};
#pragma endregion
}
enum AsyncResultType
{
    SingleResult = 0x0001,
    MultipleResults = 0x0002
};
enum CancelTransitionPolicy
{
    RemainCanceled = 0,
    TransitionFromCanceled
};
#pragma region AsyncOptions
template < ErrorPropagationPolicy errorPropagationPolicy >
struct ErrorPropagationPolicyTraits;
template <>
struct ErrorPropagationPolicyTraits< PropagateDelegateError >
{
    static HRESULT FireCompletionErrorPropagationPolicyFilter(HRESULT hrIn, IUnknown *, void * = nullptr)
    {
        if (hrIn == RPC_E_DISCONNECTED || hrIn == HRESULT_FROM_WIN32(RPC_S_SERVER_UNAVAILABLE) || hrIn == JSCRIPT_E_CANTEXECUTE)
        {
            ::RoTransformError(hrIn, S_OK, nullptr);
            hrIn = S_OK;
        }
        return hrIn;
    }
    static HRESULT FireProgressErrorPropagationPolicyFilter(HRESULT hrIn, IUnknown *, void * = nullptr)
    {
        if (hrIn == RPC_E_DISCONNECTED || hrIn == HRESULT_FROM_WIN32(RPC_S_SERVER_UNAVAILABLE) || hrIn == JSCRIPT_E_CANTEXECUTE)
        {
            ::RoTransformError(hrIn, S_OK, nullptr);
            hrIn = S_OK;
        }
        return hrIn;
    }
};
template <>
struct ErrorPropagationPolicyTraits< IgnoreDelegateError >
{
    static HRESULT FireCompletionErrorPropagationPolicyFilter(HRESULT hrIn, IUnknown *, void * = nullptr)
    {
        if (FAILED(hrIn))
        {
            ::RoTransformError(hrIn, S_OK, nullptr);
            hrIn = S_OK;
        }
        return hrIn;
    }
    static HRESULT FireProgressErrorPropagationPolicyFilter(HRESULT hrIn, IUnknown *, void * = nullptr)
    {
        if (FAILED(hrIn))
        {
            ::RoTransformError(hrIn, S_OK, nullptr);
            hrIn = S_OK;
        }
        return hrIn;
    }
};
template <
    ErrorPropagationPolicy errorPropagationPolicy = ErrorPropagationPolicy::IgnoreDelegateError,
    PCWSTR OpName = nullptr,
    const GUID &PlatformId = GUID_CAUSALITY_WINDOWS_PLATFORM_ID,
    ::ABI::Windows::Foundation::Diagnostics::CausalitySource CausalitySource = ::ABI::Windows::Foundation::Diagnostics::CausalitySource::CausalitySource_System
>
struct AsyncOptions :
    public AsyncCausalityOptions<OpName, PlatformId, CausalitySource>,
    public ErrorPropagationOptions<errorPropagationPolicy>
{
    static const bool hasCausalityOptions = true;
    static const bool hasErrorPropagationPolicy = true;
    static const bool hasCausalityOperationName = Microsoft::WRL::Details::IsOperationName<OpName>::Value;
    static const bool isCausalityEnabled = true;
};
#pragma endregion
    _declspec(selectany) INIT_ONCE gCausalityInitOnce = INIT_ONCE_STATIC_INIT;
    _declspec(selectany) ::ABI::Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics* gCausality;
template <
    typename TComplete,
    typename TProgress = Details::Nil,
    AsyncResultType resultType = SingleResult,
    typename TAsyncBaseOptions = AsyncOptions<>
>
class AsyncBase : public AsyncBase< TComplete, Details::Nil, resultType, TAsyncBaseOptions >
{
    typedef typename Details::ArgTraitsHelper< TProgress >::Traits ProgressTraits;
    typedef Microsoft::WRL::Details::AsyncOptionsHelper< TComplete, TAsyncBaseOptions > AllOptions;
    friend class AsyncBase< TComplete, Details::Nil, resultType, TAsyncBaseOptions >;
public:
    AsyncBase() :
        progressDelegate_(nullptr),
        progressDelegateBucketAssist_(nullptr)
    {
    }
    STDMETHOD(PutOnProgress)(TProgress* progressHandler)
    {
        HRESULT hr = this->CheckValidStateForDelegateCall();
        if (SUCCEEDED(hr))
        {
            progressDelegate_ = progressHandler;
            if (progressDelegate_ != nullptr)
            {
                progressDelegateBucketAssist_ = Microsoft::WRL::Details::GetDelegateBucketAssist(progressDelegate_.Get());
            }
            this->TraceDelegateAssigned();
        }
        return hr;
    }
    STDMETHOD(GetOnProgress)(TProgress** progressHandler)
    {
        *progressHandler = nullptr;
        HRESULT hr = this->CheckValidStateForDelegateCall();
        if (SUCCEEDED(hr))
        {
            progressDelegate_.CopyTo(progressHandler);
        }
        return hr;
    }
    HRESULT FireProgress(const typename ProgressTraits::Arg2Type arg)
    {
        HRESULT hr = S_OK;
        ComPtr< ::ABI::Windows::Foundation::IAsyncInfo > asyncInfo = this;
        ComPtr<Details::DerefHelper<ProgressTraits::Arg1Type>::DerefType> operationInterface;
        if (progressDelegate_)
        {
            hr = asyncInfo.As(&operationInterface);
            if (SUCCEEDED(hr))
            {
                this->TraceProgressNotificationStart();
                hr = progressDelegate_->Invoke(operationInterface.Get(), arg);
                this->TraceProgressNotificationComplete();
            }
        }
        hr = ErrorPropagationPolicyTraits< AllOptions::PropagationPolicy >::FireProgressErrorPropagationPolicyFilter(hr, progressDelegate_.Get(), progressDelegateBucketAssist_);
        return hr;
    }
    HRESULT FireCompletion(void) override
    {
        progressDelegate_.Reset();
        return AsyncBase< TComplete, Details::Nil, resultType, TAsyncBaseOptions >::FireCompletion();
    }
private:
    ::Microsoft::WRL::ComPtr<TProgress> progressDelegate_;
    void *progressDelegateBucketAssist_;
};
template < typename TComplete, AsyncResultType resultType, typename TAsyncBaseOptions >
class AsyncBase< TComplete, Details::Nil, resultType, TAsyncBaseOptions > : public ::Microsoft::WRL::Implements< ::ABI::Windows::Foundation::IAsyncInfo >
{
    typedef typename Details::ArgTraitsHelper< TComplete >::Traits CompleteTraits;
    typedef Microsoft::WRL::Details::AsyncOptionsHelper<TComplete, TAsyncBaseOptions> AllOptions;
public:
    AsyncBase() :
        currentStatus_(Details::AsyncStatusInternal::_Created),
        id_(1),
        errorCode_(S_OK),
        completeDelegate_(nullptr),
        completeDelegateBucketAssist_(nullptr),
        asyncOperationBucketAssist_(nullptr),
        cCompleteDelegateAssigned_(0),
        cCallbackMade_(0)
    {
    }
    virtual ~AsyncBase()
    {
        if (!cCallbackMade_)
        {
            TraceOperationComplete();
        }
    }
    STDMETHOD(put_Id)(const unsigned int id)
    {
        if (id == 0)
        {
            WCHAR const pszParamName[] = L"id";
            ::RoOriginateErrorW(E_INVALIDARG, ARRAYSIZE(pszParamName) - 1, pszParamName);
            return E_INVALIDARG;
        }
        id_ = id;
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);
        if (current != Details::_Created)
        {
            ::RoOriginateError(E_ILLEGAL_METHOD_CALL, nullptr);
            return E_ILLEGAL_METHOD_CALL;
        }
        return S_OK;
    }
    STDMETHOD(get_Id)(unsigned int *id) override
    {
        *id = id_;
        return CheckValidStateForAsyncInfoCall();
    }
    STDMETHOD(get_Status)(::ABI::Windows::Foundation::AsyncStatus *status) override
    {
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);
        *status = static_cast< ::ABI::Windows::Foundation::AsyncStatus >(current);
        return CheckValidStateForAsyncInfoCall();
    }
    STDMETHOD(get_ErrorCode)(HRESULT* errorCode) override
    {
        HRESULT hr = CheckValidStateForAsyncInfoCall();
        if (SUCCEEDED(hr))
        {
            ErrorCode(errorCode);
        }
        else
        {
            *errorCode = hr;
        }
        return hr;
    }
protected:
    STDMETHOD(Start)(void)
    {
        HRESULT hr = S_OK;
        if (TransitionToState(Details::_Started))
        {
            hr = OnStart();
            if (SUCCEEDED(hr) &&
                ::InitOnceExecuteOnce(&gCausalityInitOnce, InitCausality, NULL, NULL))
            {
                TraceOperationStart();
            }
        }
        else
        {
            hr = E_ILLEGAL_STATE_CHANGE;
            ::RoOriginateError(E_ILLEGAL_STATE_CHANGE, nullptr);
        }
        return hr;
    }
public:
    STDMETHOD(Cancel)(void)
    {
        if (TransitionToState(Details::_Canceled))
        {
            OnCancel();
            TraceCancellation();
        }
        return S_OK;
    }
    STDMETHOD(Close)(void) override
    {
        HRESULT hr = S_OK;
        if (TransitionToState(Details::_Closed))
        {
            OnClose();
        }
        else
        {
            Details::AsyncStatusInternal current = Details::_Undefined;
            CurrentStatus(&current);
            if (current == Details::_Closed)
            {
                hr = S_OK;
            }
            else
            {
                hr = E_ILLEGAL_STATE_CHANGE;
                ::RoOriginateError(E_ILLEGAL_STATE_CHANGE, nullptr);
            }
        }
        return hr;
    }
    STDMETHOD(PutOnComplete)(TComplete* completeHandler)
    {
        HRESULT hr = CheckValidStateForDelegateCall();
        if (SUCCEEDED(hr))
        {
            if (InterlockedIncrement(&cCompleteDelegateAssigned_) == 1)
            {
                if (completeHandler != nullptr)
                {
                    completeDelegateBucketAssist_ = Microsoft::WRL::Details::GetDelegateBucketAssist(completeHandler);
                }
                completeDelegate_ = completeHandler;
                MemoryBarrier();
                this->TraceDelegateAssigned();
                if (IsTerminalState())
                {
                    FireCompletion();
                }
            }
            else
            {
                hr = E_ILLEGAL_DELEGATE_ASSIGNMENT;
                ::RoOriginateError(E_ILLEGAL_DELEGATE_ASSIGNMENT, nullptr);
            }
        }
        return hr;
    }
    STDMETHOD(GetOnComplete)(TComplete** completeHandler)
    {
        *completeHandler = nullptr;
        HRESULT hr = CheckValidStateForDelegateCall();
        if (SUCCEEDED(hr))
        {
            completeDelegate_.CopyTo(completeHandler);
        }
        return hr;
    }
    virtual HRESULT FireCompletion()
    {
        HRESULT hr = S_OK;
        TryTransitionToCompleted();
        __WRL_ASSERT__(IsTerminalState() && "Must only call FireCompletion when operation is in terminal state");
        if (completeDelegate_ != nullptr && InterlockedIncrement(&cCallbackMade_) == 1)
        {
            ComPtr< ::ABI::Windows::Foundation::IAsyncInfo> asyncInfo = this;
            ComPtr<typename Details::DerefHelper<typename CompleteTraits::Arg1Type>::DerefType> operationInterface;
            TraceOperationComplete();
            if (SUCCEEDED(asyncInfo.As(&operationInterface)))
            {
                Details::AsyncStatusInternal current = Details::_Undefined;
                CurrentStatus(&current);
                TraceCompletionNotificationStart();
                hr = completeDelegate_->Invoke(operationInterface.Get(), static_cast<::ABI::Windows::Foundation::AsyncStatus>(current));
                hr = ErrorPropagationPolicyTraits< AllOptions::PropagationPolicy >::FireCompletionErrorPropagationPolicyFilter(hr, completeDelegate_.Get(), completeDelegateBucketAssist_);
                completeDelegate_ = nullptr;
                TraceCompletionNotificationComplete();
            }
        }
        return hr;
    }
protected:
    inline void CurrentStatus(Details::AsyncStatusInternal *status)
    {
        ::_InterlockedCompareExchange(reinterpret_cast<LONG*>(status), currentStatus_, static_cast<LONG>(*status));
        __WRL_ASSERT__(*status != Details::_Undefined);
    }
    inline void ErrorCode(HRESULT *error)
    {
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);
        if (current != Details::_Error)
        {
            *error = S_OK;
        }
        else
        {
            ::_InterlockedCompareExchange(reinterpret_cast<LONG*>(error), errorCode_, static_cast<LONG>(*error));
            if (errorInfo_ != nullptr)
            {
                SetRestrictedErrorInfo(errorInfo_.Get());
            }
        }
    }
    bool TryTransitionToCompleted(CancelTransitionPolicy cancelBehavior = CancelTransitionPolicy::RemainCanceled)
    {
        bool bTransition = TransitionToState(Details::AsyncStatusInternal::_Completed);
        if (!bTransition && cancelBehavior == CancelTransitionPolicy::TransitionFromCanceled)
        {
            bTransition = TransitionCanceledToCompleted();
        }
        return bTransition;
    }
    bool TryTransitionToError(const HRESULT error, CancelTransitionPolicy cancelBehavior = CancelTransitionPolicy::RemainCanceled, _In_opt_ void * bucketAssist = nullptr)
    {
        if (bucketAssist != nullptr)
        {
            asyncOperationBucketAssist_ = bucketAssist;
        }
        bool bTransition = false;
        if (::_InterlockedCompareExchange(reinterpret_cast<volatile LONG*>(&errorCode_), error, S_OK) == S_OK)
        {
            (void)GetRestrictedErrorInfo(&errorInfo_);
            bTransition = TransitionToState(Details::AsyncStatusInternal::_Error);
            if (!bTransition && cancelBehavior == CancelTransitionPolicy::TransitionFromCanceled)
            {
                bTransition = TransitionCanceledToError();
            }
        }
        if (bTransition)
        {
            TraceError();
        }
        return bTransition;
    }
    inline HRESULT CheckValidStateForDelegateCall()
    {
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);
        if (current == Details::_Closed)
        {
            ::RoOriginateError(E_ILLEGAL_METHOD_CALL, nullptr);
            return E_ILLEGAL_METHOD_CALL;
        }
        return S_OK;
    }
    inline HRESULT CheckValidStateForResultsCall()
    {
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);
        if (current == Details::_Error)
        {
            HRESULT hr;
            ErrorCode(&hr);
            return hr;
        }
#pragma warning(push)
#pragma warning(disable: 4127)
        if (resultType == SingleResult)
#pragma warning(pop)
        {
            if (current != Details::_Completed)
            {
                ::RoOriginateError(E_ILLEGAL_METHOD_CALL, nullptr);
                return E_ILLEGAL_METHOD_CALL;
            }
        }
        else if (current != Details::_Started &&
                 current != Details::_Canceled &&
                 current != Details::_Completed)
        {
            ::RoOriginateError(E_ILLEGAL_METHOD_CALL, nullptr);
            return E_ILLEGAL_METHOD_CALL;
        }
        return S_OK;
    }
    inline bool ContinueAsyncOperation()
    {
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);
        return (current == Details::_Started);
    }
    virtual HRESULT OnStart(void) = 0;
    virtual void OnClose(void) = 0;
    virtual void OnCancel(void) = 0;
private:
    static BOOL WINAPI InitCausality(
        _Inout_opt_ PINIT_ONCE InitOnce,
        _Inout_opt_ PVOID Parameter,
        _Out_opt_ PVOID* Context )
    {
        UNREFERENCED_PARAMETER(InitOnce);
        UNREFERENCED_PARAMETER(Parameter);
        UNREFERENCED_PARAMETER(Context);
        OSVERSIONINFOEX osvi;
        DWORDLONG dwlConditionMask = 0;
        ZeroMemory(&osvi, sizeof(OSVERSIONINFOEX));
        osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);
        osvi.dwMajorVersion = 6;
        osvi.dwMinorVersion = 2;
        VER_SET_CONDITION(dwlConditionMask, VER_MAJORVERSION, VER_GREATER_EQUAL);
        VER_SET_CONDITION(dwlConditionMask, VER_MINORVERSION, VER_GREATER_EQUAL);
        if (VerifyVersionInfo(&osvi, VER_MAJORVERSION | VER_MINORVERSION, dwlConditionMask))
        {
            Microsoft::WRL::Wrappers::HStringReference hstrCausalityTraceName(RuntimeClass_Windows_Foundation_Diagnostics_AsyncCausalityTracer);
            if (FAILED(::Windows::Foundation::GetActivationFactory(hstrCausalityTraceName.Get(), &gCausality)))
            {
                return FALSE;
            }
            return TRUE;
        }
        else
        {
            gCausality = nullptr;
            return FALSE;
        }
    }
    inline HRESULT CheckValidStateForAsyncInfoCall()
    {
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);
        if (current == Details::_Closed)
        {
            ::RoOriginateError(E_ILLEGAL_METHOD_CALL, nullptr);
            return E_ILLEGAL_METHOD_CALL;
        }
        else if (current == Details::_Created)
        {
            return E_ASYNC_OPERATION_NOT_STARTED;
        }
        return S_OK;
    }
    inline bool TransitionToState(const Details::AsyncStatusInternal newState)
    {
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);
        switch(newState)
        {
        case Details::_Started:
            if (current != Details::_Created)
            {
                return false;
            }
            break;
        case Details::_Completed:
            if (current != Details::_Started)
            {
                return false;
            }
            break;
        case Details::_Canceled:
            if (current != Details::_Started)
            {
                return false;
            }
            break;
        case Details::_Error:
            if (current != Details::_Started)
            {
                return false;
            }
            break;
        case Details::_Closed:
            if (!IsTerminalState(current))
            {
                return false;
            }
            break;
        default:
            return false;
            break;
        }
        Details::AsyncStatusInternal retState = static_cast<Details::AsyncStatusInternal>(
                ::_InterlockedCompareExchange(reinterpret_cast<volatile LONG*>(&currentStatus_),
                                            newState,
                                            static_cast<LONG>(current)));
        return (retState == current);
    }
protected:
    inline bool TransitionCanceledToCompleted()
    {
        Details::AsyncStatusInternal retState = static_cast<Details::AsyncStatusInternal>(
                ::_InterlockedCompareExchange(reinterpret_cast<volatile LONG*>(&currentStatus_),
                                            Details::AsyncStatusInternal::_Completed,
                                            Details::AsyncStatusInternal::_Canceled));
        return (retState == Details::AsyncStatusInternal::_Canceled);
    }
    inline bool TransitionCanceledToError()
    {
        Details::AsyncStatusInternal retState = static_cast<Details::AsyncStatusInternal>(
                ::_InterlockedCompareExchange(reinterpret_cast<volatile LONG*>(&currentStatus_),
                                            Details::AsyncStatusInternal::_Error,
                                            Details::AsyncStatusInternal::_Canceled));
        return (retState == Details::AsyncStatusInternal::_Canceled);
    }
    inline bool IsTerminalState()
    {
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);
        return IsTerminalState(current);
    }
    inline bool IsTerminalState(Details::AsyncStatusInternal status)
    {
        return (status == Details::_Error ||
                status == Details::_Canceled ||
                status == Details::_Completed ||
                status == Details::_Closed);
    }
    long cCallbackMade_;
    long cCompleteDelegateAssigned_;
#pragma region TracingMethods
    void TraceOperationStart()
    {
        if (gCausality && AllOptions::CausalityEnabled)
        {
            gCausality->TraceOperationCreation(
                ::ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel_Required,
                AllOptions::GetCausalitySource(),
                AllOptions::GetPlatformId(),
                reinterpret_cast< UINT64 >(this),
                Microsoft::WRL::Wrappers::HStringReference(AllOptions::GetAsyncOperationName()).Get(),
                id_);
        }
    }
    void TraceOperationComplete()
    {
        if (gCausality && AllOptions::CausalityEnabled)
        {
            Details::AsyncStatusInternal status;
            CurrentStatus(&status);
            gCausality->TraceOperationCompletion(
                ::ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel_Required,
                AllOptions::GetCausalitySource(),
                AllOptions::GetPlatformId(),
                reinterpret_cast< UINT64 >(this),
                static_cast< ::ABI::Windows::Foundation::AsyncStatus >(status));
        }
    }
    void TraceProgressNotificationStart()
    {
        if (gCausality && AllOptions::CausalityEnabled)
        {
            gCausality->TraceSynchronousWorkStart(
                ::ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel_Important,
                AllOptions::GetCausalitySource(),
                AllOptions::GetPlatformId(),
                reinterpret_cast< UINT64 >(this),
                ::ABI::Windows::Foundation::Diagnostics::CausalitySynchronousWork_ProgressNotification);
        }
    }
    void TraceProgressNotificationComplete()
    {
        if (gCausality && AllOptions::CausalityEnabled)
        {
            gCausality->TraceSynchronousWorkCompletion(
                ::ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel_Important,
                AllOptions::GetCausalitySource(),
                ::ABI::Windows::Foundation::Diagnostics::CausalitySynchronousWork_ProgressNotification);
        }
    }
    void TraceCompletionNotificationStart()
    {
        if (gCausality && AllOptions::CausalityEnabled)
        {
            gCausality->TraceSynchronousWorkStart(
                ::ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel_Required,
                AllOptions::GetCausalitySource(),
                AllOptions::GetPlatformId(),
                reinterpret_cast< UINT64 >(this),
                ::ABI::Windows::Foundation::Diagnostics::CausalitySynchronousWork_CompletionNotification);
        }
    }
    void TraceCompletionNotificationComplete()
    {
        if (gCausality && AllOptions::CausalityEnabled)
        {
            gCausality->TraceSynchronousWorkCompletion(
                ::ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel_Required,
                AllOptions::GetCausalitySource(),
                ::ABI::Windows::Foundation::Diagnostics::CausalitySynchronousWork_CompletionNotification);
        }
    }
    void TraceExecutionStart(::ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel)
    {
        if (gCausality && AllOptions::CausalityEnabled)
        {
            gCausality->TraceSynchronousWorkStart(
                traceLevel,
                AllOptions::GetCausalitySource(),
                AllOptions::GetPlatformId(),
                reinterpret_cast< UINT64 >(this),
                ::ABI::Windows::Foundation::Diagnostics::CausalitySynchronousWork_Execution);
        }
    }
    void TraceExecutionComplete(::ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel)
    {
        if (gCausality && AllOptions::CausalityEnabled)
        {
            gCausality->TraceSynchronousWorkCompletion(
                traceLevel,
                AllOptions::GetCausalitySource(),
                ::ABI::Windows::Foundation::Diagnostics::CausalitySynchronousWork_Execution);
        }
    }
    void TraceDelegateAssigned()
    {
        if (gCausality && AllOptions::CausalityEnabled)
        {
            gCausality->TraceOperationRelation(
                ::ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel_Verbose,
                AllOptions::GetCausalitySource(),
                AllOptions::GetPlatformId(),
                reinterpret_cast< UINT64 >(this),
                ::ABI::Windows::Foundation::Diagnostics::CausalityRelation_AssignDelegate);
        }
    }
    void TraceError()
    {
        if (gCausality && AllOptions::CausalityEnabled)
        {
            gCausality->TraceOperationRelation(
                ::ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel_Verbose,
                AllOptions::GetCausalitySource(),
                AllOptions::GetPlatformId(),
                reinterpret_cast< UINT64 >(this),
                ::ABI::Windows::Foundation::Diagnostics::CausalityRelation_Error);
        }
    }
    void TraceCancellation()
    {
        if (gCausality && AllOptions::CausalityEnabled)
        {
            gCausality->TraceOperationRelation(
                ::ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel_Important,
                AllOptions::GetCausalitySource(),
                AllOptions::GetPlatformId(),
                reinterpret_cast< UINT64 >(this),
                ::ABI::Windows::Foundation::Diagnostics::CausalityRelation_Cancel);
        }
    }
#pragma endregion
private:
    ::Microsoft::WRL::ComPtr<TComplete> completeDelegate_;
    void *completeDelegateBucketAssist_;
    ::Microsoft::WRL::ComPtr<IRestrictedErrorInfo> errorInfo_;
    Details::AsyncStatusInternal volatile currentStatus_;
    HRESULT volatile errorCode_;
    unsigned int id_;
protected:
    void *asyncOperationBucketAssist_;
};
}}
#pragma warning(pop)
    Microsoft::WRL::AsyncCausalityOptions< OpName >
    Microsoft::WRL::AsyncBase< TComplete, Microsoft::WRL::Details::Nil, Microsoft::WRL::AsyncResultType::SingleResult, CAUSALITY_OPTIONS(OpName)>
    Microsoft::WRL::AsyncBase< TComplete, TProgress, Microsoft::WRL::AsyncResultType::SingleResult, CAUSALITY_OPTIONS(OpName)>
    Microsoft::WRL::AsyncBase< TComplete, Microsoft::WRL::Details::Nil, Microsoft::WRL::AsyncResultType::SingleResult, Microsoft::WRL::DisableCausality>
    Microsoft::WRL::AsyncBase< TComplete, TProgress, Microsoft::WRL::AsyncResultType::SingleResult, Microsoft::WRL::DisableCausality>
#include <poppack.h>
#include <wrl\internalasync.h>
