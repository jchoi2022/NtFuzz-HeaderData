       
#include <wrl\def.h>
#include <wrl\internal.h>
#include <wrl\client.h>
#include <wrl\implements.h>
#include <wrl\wrappers\corewrappers.h>
#include <eventtoken.h>
#include <roerrorapi.h>
#include <pshpack8.h>
namespace ABI {
namespace Windows {
namespace Foundation {
typedef ::Windows::Foundation::IDeferral IDeferral;
typedef ::Windows::Foundation::IDeferralFactory IDeferralFactory;
typedef ::Windows::Foundation::IDeferralCompletedHandler IDeferralCompletedHandler;
}
}
}
namespace Microsoft {
namespace WRL {
enum DelegateCheckMode
{
    NoCheck = 1
};
template<DelegateCheckMode delegateCheckMode> struct DelegateTraits;
template<>
struct DelegateTraits<NoCheck>
{
    static HRESULT CheckReturn(HRESULT hr)
    {
        return hr;
    }
};
extern __declspec(selectany) const DelegateCheckMode DefaultDelegateCheckMode = NoCheck;
enum InvokeMode
{
   StopOnFirstError = 1,
   FireAll = 2,
};
template<InvokeMode invokeModeValue>
struct InvokeModeOptions
{
    static const InvokeMode invokeMode = invokeModeValue;
};
template<InvokeMode invokeMode> struct InvokeTraits;
template<typename TDelegateInterface, typename EventSourceOptions>
class EventSource;
namespace Details
{
template<typename TDelegateInterface>
void* GetDelegateBucketAssist(TDelegateInterface *pDelegate)
{
    void ***pVT = reinterpret_cast<void ***>(pDelegate);
    return (*pVT)[3];
}
template<typename TMemberFunction>
struct ArgTraits
{
    static const int args = -1;
};
template<typename TDelegateInterface>
struct ArgTraits<HRESULT(STDMETHODCALLTYPE TDelegateInterface::*)(void)>
{
    static const int args = 0;
};
template<typename TDelegateInterface, typename TArg1>
struct ArgTraits<HRESULT(STDMETHODCALLTYPE TDelegateInterface::*)(TArg1)>
{
    static const int args = 1;
    typedef TArg1 Arg1Type;
};
template<typename TDelegateInterface, typename TArg1, typename TArg2>
struct ArgTraits<HRESULT(STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2)>
{
    static const int args = 2;
    typedef TArg1 Arg1Type;
    typedef TArg2 Arg2Type;
};
template<typename TDelegateInterface, typename TArg1, typename TArg2, typename TArg3>
struct ArgTraits<HRESULT(STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3)>
{
    static const int args = 3;
    typedef TArg1 Arg1Type;
    typedef TArg2 Arg2Type;
    typedef TArg3 Arg3Type;
};
template<typename TDelegateInterface, typename TArg1, typename TArg2, typename TArg3, typename TArg4>
struct ArgTraits<HRESULT(STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4)>
{
    static const int args = 4;
    typedef TArg1 Arg1Type;
    typedef TArg2 Arg2Type;
    typedef TArg3 Arg3Type;
    typedef TArg4 Arg4Type;
};
template<typename TDelegateInterface, typename TArg1, typename TArg2, typename TArg3, typename TArg4, typename TArg5>
struct ArgTraits<HRESULT(STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5)>
{
    static const int args = 5;
    typedef TArg1 Arg1Type;
    typedef TArg2 Arg2Type;
    typedef TArg3 Arg3Type;
    typedef TArg4 Arg4Type;
    typedef TArg5 Arg5Type;
};
template<typename TDelegateInterface, typename TArg1, typename TArg2, typename TArg3, typename TArg4, typename TArg5, typename TArg6>
struct ArgTraits<HRESULT(STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6)>
{
    static const int args = 6;
    typedef TArg1 Arg1Type;
    typedef TArg2 Arg2Type;
    typedef TArg3 Arg3Type;
    typedef TArg4 Arg4Type;
    typedef TArg5 Arg5Type;
    typedef TArg6 Arg6Type;
};
template<typename TDelegateInterface, typename TArg1, typename TArg2, typename TArg3, typename TArg4, typename TArg5, typename TArg6, typename TArg7>
struct ArgTraits<HRESULT(STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7)>
{
    static const int args = 7;
    typedef TArg1 Arg1Type;
    typedef TArg2 Arg2Type;
    typedef TArg3 Arg3Type;
    typedef TArg4 Arg4Type;
    typedef TArg5 Arg5Type;
    typedef TArg6 Arg6Type;
    typedef TArg7 Arg7Type;
};
template<typename TDelegateInterface, typename TArg1, typename TArg2, typename TArg3, typename TArg4, typename TArg5, typename TArg6, typename TArg7, typename TArg8>
struct ArgTraits<HRESULT(STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8)>
{
    static const int args = 8;
    typedef TArg1 Arg1Type;
    typedef TArg2 Arg2Type;
    typedef TArg3 Arg3Type;
    typedef TArg4 Arg4Type;
    typedef TArg5 Arg5Type;
    typedef TArg6 Arg6Type;
    typedef TArg7 Arg7Type;
    typedef TArg8 Arg8Type;
};
template<typename TDelegateInterface, typename TArg1, typename TArg2, typename TArg3, typename TArg4, typename TArg5, typename TArg6, typename TArg7, typename TArg8, typename TArg9>
struct ArgTraits<HRESULT(STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8, TArg9)>
{
    static const int args = 9;
    typedef TArg1 Arg1Type;
    typedef TArg2 Arg2Type;
    typedef TArg3 Arg3Type;
    typedef TArg4 Arg4Type;
    typedef TArg5 Arg5Type;
    typedef TArg6 Arg6Type;
    typedef TArg7 Arg7Type;
    typedef TArg8 Arg8Type;
    typedef TArg9 Arg9Type;
};
template<typename TDelegateInterface, bool isImplements = __is_base_of(ImplementsBase, TDelegateInterface)>
struct ArgTraitsHelper;
template<typename TDelegateInterface>
struct ArgTraitsHelper<TDelegateInterface, false>
{
    typedef decltype(&TDelegateInterface::Invoke) methodType;
    typedef ArgTraits<methodType> Traits;
    static const int args = Traits::args;
    typedef TDelegateInterface Interface;
    static_assert(args != -1, "Delegate Invoke signature doesn't match. Possible reasons: wrong calling convention, wrong returned type or passed too many parameters to 'Callback'");
};
template<typename TDelegateInterface>
struct ArgTraitsHelper<TDelegateInterface, true> : ArgTraitsHelper<typename TDelegateInterface::FirstInterface>
{
};
template<typename TDelegateInterface> class DelegateArgTraits;
template<typename TDelegateInterface, typename ...TArgs>
class DelegateArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArgs...)>
{
    template<typename TDelegateInterface, typename TCallback, DelegateCheckMode checkMode, typename... TArgs>
    struct DelegateInvokeHelper WrlSealed : public ::Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>, RemoveReference<TCallback>::Type
    {
        DelegateInvokeHelper(TCallback&& callback) throw() : RemoveReference<TCallback>::Type(Details::Forward<TCallback>(callback)) {}
        HRESULT STDMETHODCALLTYPE Invoke(TArgs... args) throw() override
        {
            return DelegateTraits<checkMode>::CheckReturn((*this)(Details::Forward<TArgs>(args)...));
        }
    };
public:
    template<typename TDelegateInterface, typename TImplements, DelegateCheckMode checkMode = DefaultDelegateCheckMode, typename TLambda>
    static ComPtr<TImplements> Callback(TLambda&& callback) throw()
    {
        static_assert(__is_base_of(IUnknown, TDelegateInterface) && !__is_base_of(IInspectable, TDelegateInterface), "Delegates objects must be 'IUnknown' base and not 'IInspectable'");
        return Make<DelegateInvokeHelper<TDelegateInterface, TLambda, checkMode, TArgs...>>(Details::Forward<TLambda>(callback));
    }
};
template<typename TDelegateInterface, bool isImplements = __is_base_of(ImplementsBase, TDelegateInterface)>
struct DelegateArgTraitsHelper;
template<typename TDelegateInterface>
struct DelegateArgTraitsHelper<TDelegateInterface, false>
{
    typedef TDelegateInterface Interface;
    typedef DelegateArgTraits<decltype(&TDelegateInterface::Invoke)> Traits;
};
template<typename TDelegateInterface>
struct DelegateArgTraitsHelper<TDelegateInterface, true> : DelegateArgTraitsHelper<typename TDelegateInterface::FirstInterface>
{
};
template<typename TDelegateInterface>
HRESULT CreateAgileHelper(_In_ TDelegateInterface* delegateInterface, _COM_Outptr_ TDelegateInterface** wrapper)
{
    *wrapper = nullptr;
    static_assert(__is_base_of(IUnknown, TDelegateInterface) && !__is_base_of(IInspectable, TDelegateInterface), "Delegates objects must be 'IUnknown' base and not 'IInspectable'");
    AgileRef delegateAsAgile;
    HRESULT hr = Microsoft::WRL::AsAgile(delegateInterface, &delegateAsAgile);
    if (FAILED(hr)) return hr;
    using DelegateHelper = DelegateArgTraitsHelper<TDelegateInterface>;
    auto callback = typename DelegateHelper::Traits::template Callback<Implements<RuntimeClassFlags<ClassicCom>, TDelegateInterface, FtmBase>, typename DelegateHelper::Interface>(
        [delegateAsAgile = Move(delegateAsAgile)](auto&&... args)
    {
        ComPtr<TDelegateInterface> localDelegate;
        HRESULT hr = delegateAsAgile.CopyTo(localDelegate.GetAddressOf());
        if (FAILED(hr)) return hr;
        return localDelegate->Invoke(Details::Forward<decltype(args)>(args)...);
    });
    if (!callback) return E_OUTOFMEMORY;
    *wrapper = callback.Detach();
    return S_OK;
}
}
template<typename TDelegateInterface, typename TLambda>
ComPtr<typename Details::DelegateArgTraitsHelper<TDelegateInterface>::Interface> Callback(TLambda&& callback) throw()
{
    using DelegateHelper = Details::DelegateArgTraitsHelper<TDelegateInterface>;
    return DelegateHelper::Traits::template Callback<TDelegateInterface, typename DelegateHelper::Interface>(Details::Forward<TLambda>(callback));
}
template<typename TDelegateInterface, typename TFunc>
ComPtr<typename Details::DelegateArgTraitsHelper<TDelegateInterface>::Interface> Callback(_In_ TFunc* callback) throw()
{
    using DelegateHelper = Details::DelegateArgTraitsHelper<TDelegateInterface>;
    return DelegateHelper::Traits::template Callback<TDelegateInterface, typename DelegateHelper::Interface>(
        [=](auto&& ...args)
    {
        return callback(Details::Forward<decltype(args)>(args)...);
    });
}
template<typename TDelegateInterface, typename TCallbackObject, typename... TArgs>
ComPtr<typename Details::DelegateArgTraitsHelper<TDelegateInterface>::Interface> Callback(_In_ TCallbackObject *object, _In_ HRESULT(TCallbackObject::* method)(TArgs...)) throw()
{
    return Callback<TDelegateInterface>([=](auto&& ...args) { return ((*object).*(method))(args ...); });
}
template<typename TDelegateInterface>
HRESULT WeakReferenceCallback(_In_ IWeakReferenceSource* innerCallback, _Outptr_result_nullonfailure_ TDelegateInterface** callback)
{
    *callback = nullptr;
    WeakRef innerWeakRef;
    HRESULT hr = innerCallback->GetWeakReference(&innerWeakRef);
    if (SUCCEEDED(hr))
    {
        *callback = Callback<TDelegateInterface>([innerWeakRef = Details::Move(innerWeakRef)](auto&&... args) -> HRESULT
        {
            ComPtr<TDelegateInterface> strongHandler;
            HRESULT hr = innerWeakRef.Get()->Resolve(__uuidof(TDelegateInterface), reinterpret_cast<IInspectable**>(strongHandler.GetAddressOf()));
            if (SUCCEEDED(hr))
            {
                if (strongHandler)
                {
                    return strongHandler->Invoke(args ...);
                }
                else
                {
                    return RPC_E_DISCONNECTED;
                }
            }
            return hr;
        }).Detach();
        hr = (*callback != nullptr) ? S_OK : E_OUTOFMEMORY;
    }
    return hr;
}
template<typename TDelegateInterface>
HRESULT WeakReferenceCallback(_In_ TDelegateInterface* innerCallback, _Outptr_result_nullonfailure_ TDelegateInterface** callback)
{
    *callback = nullptr;
    ComPtr<IWeakReferenceSource> weakRefSource;
    HRESULT hr = innerCallback->QueryInterface(IID_PPV_ARGS(&weakRefSource));
    if (SUCCEEDED(hr))
    {
        hr = WeakReferenceCallback(weakRefSource.Get(), callback);
    }
    return hr;
}
template<typename T, typename TDelegateInterface, typename ...TArgs>
HRESULT WeakReferenceCallback(_In_ T* targetObject, HRESULT (T::*targetMethod)(TArgs... args), _Outptr_result_nullonfailure_ TDelegateInterface** callback)
{
    static_assert(__is_base_of(IWeakReferenceSource, T), "The object being called must be able to supply a weak reference to be called back through.");
    *callback = nullptr;
    WeakRef innerWeakRef;
    HRESULT hr = targetObject->GetWeakReference(&innerWeakRef);
    if (SUCCEEDED(hr))
    {
        *callback = Callback<TDelegateInterface>([innerWeakRef=Details::Move(innerWeakRef), targetObject, targetMethod](TArgs&&... innerArgs)
        {
            ComPtr<IInspectable> strongHandler;
            HRESULT hr = innerWeakRef.Get()->Resolve(__uuidof(IInspectable), reinterpret_cast<IInspectable**>(strongHandler.GetAddressOf()));
            if (SUCCEEDED(hr))
            {
                if (strongHandler)
                {
                    return (targetObject->*targetMethod)(Details::Forward<TArgs>(innerArgs) ...);
                }
                else
                {
                    return RPC_E_DISCONNECTED;
                }
            }
            return hr;
        }).Detach();
        hr = (*callback != nullptr) ? S_OK : E_OUTOFMEMORY;
    }
    return hr;
}
template<typename T, typename TDelegateInterface, typename ...TArgs>
HRESULT WeakReferenceCallback(_In_ T* targetObject, HRESULT(T::*targetMethod)(TArgs... args), ::Microsoft::WRL::Details::ComPtrRef< ::Microsoft::WRL::ComPtr<TDelegateInterface>> callback)
{
    return WeakReferenceCallback(targetObject, targetMethod, static_cast<TDelegateInterface**>(callback));
}
namespace Details
{
class EventTargetArray WrlSealed : public ::Microsoft::WRL::RuntimeClass< ::Microsoft::WRL::RuntimeClassFlags<ClassicCom>, IUnknown >
{
    public:
        EventTargetArray() throw() : begin_(nullptr), end_(nullptr), bucketAssists_(nullptr)
        {
        }
        HRESULT RuntimeClassInitialize(size_t items) throw()
        {
            begin_ = new(std::nothrow) ComPtr<IUnknown>[items];
            bucketAssists_ = new(std::nothrow) void *[items];
            if (begin_ == nullptr || bucketAssists_ == nullptr)
            {
                delete[] begin_;
                delete[] bucketAssists_;
                begin_ = nullptr;
                bucketAssists_ = nullptr;
                return E_OUTOFMEMORY;
            }
            end_ = begin_;
            return S_OK;
        }
        ~EventTargetArray() throw()
        {
            delete[] begin_;
            delete[] bucketAssists_;
        }
        ComPtr<IUnknown>* Begin() throw()
        {
            return begin_;
        }
        ComPtr<IUnknown>* End() throw()
        {
            return end_;
        }
        void AddTail(_In_ IUnknown* element) throw()
        {
            AddTail(element, nullptr);
        }
        void AddTail(_In_ IUnknown* element, void *bucketAssist) throw()
        {
            *end_ = element;
            *(bucketAssists_ + (end_ - begin_)) = bucketAssist;
            end_++;
        }
        size_t Length() throw()
        {
            return (end_ - begin_);
        }
        void **Begin_BucketAssists()
        {
            return bucketAssists_;
        }
        void **End_BucketAssists()
        {
            return bucketAssists_ + (end_ - begin_);
        }
    private:
        ComPtr<IUnknown>* begin_;
        ComPtr<IUnknown>* end_;
        void **bucketAssists_;
};
}
template<>
struct InvokeTraits<FireAll>
{
   template<typename TInvokeMethod, typename TDelegateInterface>
   static HRESULT InvokeDelegates(TInvokeMethod invokeOne, Details::EventTargetArray *targetArray, EventSource<TDelegateInterface, InvokeModeOptions<FireAll>>* pEvent)
   {
      ComPtr<Details::EventTargetArray> targets;
      targets = targetArray;
      for (auto element = targets->Begin(); element != targets->End(); element++)
      {
          HRESULT hr = (invokeOne)(*element);
          if (FAILED(hr))
          {
              ::RoTransformError(hr, S_OK, nullptr);
              if (hr == RPC_E_DISCONNECTED || hr == HRESULT_FROM_WIN32(RPC_S_SERVER_UNAVAILABLE) || hr == JSCRIPT_E_CANTEXECUTE)
              {
                  EventRegistrationToken token;
                  token.value = reinterpret_cast<__int64>(element->Get());
                  pEvent->Remove(token);
              }
          }
      }
      return S_OK;
   }
};
template<>
struct InvokeTraits<StopOnFirstError>
{
   template<typename TInvokeMethod, typename TDelegateInterface>
   static HRESULT InvokeDelegates(TInvokeMethod invokeOne, Details::EventTargetArray *targetArray, EventSource<TDelegateInterface, InvokeModeOptions<StopOnFirstError>>* pEvent)
   {
      HRESULT hr = S_OK;
      ComPtr<Details::EventTargetArray> targets;
      targets = targetArray;
      for (auto element = targets->Begin(); element != targets->End(); element++)
      {
           hr = (invokeOne)(*element);
           if (hr == RPC_E_DISCONNECTED || hr == HRESULT_FROM_WIN32(RPC_S_SERVER_UNAVAILABLE) || hr == JSCRIPT_E_CANTEXECUTE)
           {
               ::RoTransformError(hr, S_OK, nullptr);
               EventRegistrationToken token;
               token.value = reinterpret_cast<__int64>(element->Get());
               pEvent->Remove(token);
               hr = S_OK;
           }
           if (FAILED(hr))
           {
              break;
           }
      }
      return hr;
   }
};
template<typename TDelegateInterface, typename TEventSourceOptions = InvokeModeOptions<FireAll>>
class EventSource
{
public:
    EventSource() throw() :
         targets_(nullptr)
    {
    }
    HRESULT Add(_In_opt_ TDelegateInterface* delegateInterface, _Out_ EventRegistrationToken* token) throw()
    {
        if (delegateInterface == nullptr)
        {
            return E_INVALIDARG;
        }
        return AddInternal(delegateInterface, Microsoft::WRL::Details::GetDelegateBucketAssist(delegateInterface), token);
    }
    HRESULT Remove(EventRegistrationToken token) throw()
    {
        ComPtr<Details::EventTargetArray> pTempList;
        {
            Wrappers::SRWLock::SyncLockExclusive addRemoveLock = addRemoveLock_.LockExclusive();
            if (targets_ == nullptr)
            {
                return S_OK;
            }
            ComPtr<Details::EventTargetArray> pNewList;
            size_t availableSlots = targets_->Length() - 1;
            bool removed = false;
            if (availableSlots == 0)
            {
                if (reinterpret_cast<__int64>(targets_->Begin()->Get()) == token.value)
                {
                    removed = true;
                }
            }
            else
            {
                HRESULT hr = MakeAndInitialize<Details::EventTargetArray>(pNewList.GetAddressOf(), availableSlots);
                if (FAILED(hr))
                {
                    return hr;
                }
                void **bucketElement = targets_->Begin_BucketAssists();
                for (auto element = targets_->Begin(); element != targets_->End(); element++)
                {
                    if (!removed && token.value == reinterpret_cast<__int64>(element->Get()))
                    {
                        removed = true;
                        continue;
                    }
                    if (availableSlots == 0)
                    {
                        __WRL_ASSERT__(!removed && "Attempt to remove token that was not added to this EventSource<>");
                        break;
                    }
                    pNewList->AddTail(element->Get(), *bucketElement);
                    bucketElement++;
                    availableSlots--;
                }
            }
            if (removed)
            {
                Wrappers::SRWLock::SyncLockExclusive targetsPointerLock = targetsPointerLock_.LockExclusive();
                pTempList = Details::Move(targets_);
                targets_ = Details::Move(pNewList);
            }
        }
        return S_OK;
    }
protected:
    HRESULT Add(_In_opt_ TDelegateInterface* delegateInterface, _In_opt_ void *bucketAssist, _Out_ EventRegistrationToken* token) throw()
    {
        if (delegateInterface == nullptr)
        {
            return E_INVALIDARG;
        }
        return AddInternal(delegateInterface, bucketAssist, token);
    }
private:
    HRESULT AddInternal(_In_ TDelegateInterface* delegateInterface, _In_opt_ void *bucketAssist, _Out_ EventRegistrationToken* token) throw()
    {
        token->value = 0;
        ComPtr<Details::EventTargetArray> pTempList;
        {
            Wrappers::SRWLock::SyncLockExclusive addRemoveLock = addRemoveLock_.LockExclusive();
            ComPtr<Details::EventTargetArray> pNewList;
            HRESULT hr = MakeAndInitialize<Details::EventTargetArray>(pNewList.GetAddressOf(), targets_ == nullptr ? 1 : targets_->Length() + 1);
            if (FAILED(hr))
            {
                return hr;
            }
            if (targets_)
            {
                void **bucketElement = targets_->Begin_BucketAssists();
                for (auto element = targets_->Begin(); element != targets_->End(); element++)
                {
                    pNewList->AddTail(element->Get(), *bucketElement);
                    bucketElement++;
                }
            }
            token->value = reinterpret_cast<__int64>(delegateInterface);
            pNewList->AddTail(delegateInterface, bucketAssist);
            {
                Wrappers::SRWLock::SyncLockExclusive targetsPointerLock = targetsPointerLock_.LockExclusive();
                pTempList = Details::Move(targets_);
                targets_ = Details::Move(pNewList);
            }
        }
        return S_OK;
    }
    template <typename TInvokeMethod>
    _Check_return_ HRESULT DoInvoke(TInvokeMethod invokeOne) throw()
    {
        HRESULT hr = S_OK;
        ComPtr<Details::EventTargetArray> targets;
        {
            Wrappers::SRWLock::SyncLockExclusive targetsPointerLock = targetsPointerLock_.LockExclusive();
            targets = targets_;
        }
        if (targets)
        {
            hr = InvokeTraits<TEventSourceOptions::invokeMode>::InvokeDelegates(invokeOne, targets.Get(), this);
        }
        return hr;
    }
public:
    template<typename ...TArgs>
    _Check_return_ HRESULT InvokeAll(TArgs... args) throw()
    {
        return DoInvoke([&](ComPtr<IUnknown>& p) -> HRESULT { return static_cast<TDelegateInterface*>(p.Get())->Invoke(Details::Forward<TArgs>(args)...); });
    }
    size_t GetSize() const throw()
    {
        if (targets_ == nullptr)
        {
            return 0;
        }
        Wrappers::SRWLock::SyncLockExclusive targetsPointerLock = targetsPointerLock_.LockExclusive();
        return targets_ == nullptr ? 0 : targets_->Length();
    }
protected:
    ComPtr<Details::EventTargetArray> targets_;
    mutable Wrappers::SRWLock targetsPointerLock_;
    Wrappers::SRWLock addRemoveLock_;
};
template <typename TEventArgsInterface, typename TEventArgsClass>
class DeferrableEventArgs : public TEventArgsInterface
{
public:
    STDMETHOD(GetDeferral)(_COM_Outptr_ ::ABI::Windows::Foundation::IDeferral** result)
    {
        *result = nullptr;
        auto lockGuard = lock_.LockExclusive();
        if (raised_)
        {
            ::RoOriginateError(E_ILLEGAL_METHOD_CALL, nullptr);
            return E_ILLEGAL_METHOD_CALL;
        }
        Microsoft::WRL::ComPtr< ::ABI::Windows::Foundation::IDeferralFactory > factory;
        HRESULT hr = GetActivationFactory(
            Wrappers::HStringReference(RuntimeClass_Windows_Foundation_Deferral).Get(),
            &factory);
        if (FAILED(hr))
        {
            return hr;
        }
        Microsoft::WRL::ComPtr<DeferrableEventArgs> lifetime(this);
        auto callback = Microsoft::WRL::Callback< ::ABI::Windows::Foundation::IDeferralCompletedHandler >(
                [lifetime]() { return lifetime->Complete(); });
        if (callback == nullptr)
        {
            return E_OUTOFMEMORY;
        }
        Microsoft::WRL::ComPtr< ::ABI::Windows::Foundation::IDeferral > deferral;
        hr = factory->Create(callback.Get(), &deferral);
        if (FAILED(hr))
        {
            return hr;
        }
        completionsRequired_++;
        return deferral.CopyTo(result);
    }
    void InvokeAllFinished()
    {
        bool invokeNeeded;
        {
            auto lockGuard = lock_.LockExclusive();
            raised_ = true;
            invokeNeeded = (completionsRequired_ == 0);
        }
        if (invokeNeeded)
        {
            static_cast<TEventArgsClass*>(this)->InvokeCompleteHandler();
        }
    }
private:
    _Requires_lock_not_held_(lock_)
    HRESULT Complete()
    {
        bool invokeNeeded;
        {
            auto lockGuard = lock_.LockExclusive();
            if (completionsRequired_ == 0)
            {
                ::RoOriginateError(E_ILLEGAL_METHOD_CALL, nullptr);
                return E_ILLEGAL_METHOD_CALL;
            }
            completionsRequired_--;
            invokeNeeded = (raised_ && (completionsRequired_ == 0));
        }
        if (invokeNeeded)
        {
            static_cast<TEventArgsClass*>(this)->InvokeCompleteHandler();
        }
        return S_OK;
    }
    Wrappers::SRWLock lock_;
    _Guarded_by_(lock_)
    bool raised_ = false;
    _Guarded_by_(lock_)
    long completionsRequired_ = 0;
};
template<typename TDelegateInterface, typename TEventSourceOptions = Microsoft::WRL::InvokeModeOptions<FireAll>>
class AgileEventSource : public Microsoft::WRL::EventSource<TDelegateInterface, TEventSourceOptions>
{
    using Super = Microsoft::WRL::EventSource<TDelegateInterface, TEventSourceOptions>;
public:
    HRESULT Add(_In_ TDelegateInterface* delegateInterface, _Out_ EventRegistrationToken* token)
    {
        if (delegateInterface == nullptr)
        {
            return E_INVALIDARG;
        }
        Microsoft::WRL::ComPtr<TDelegateInterface> agileCallback;
        HRESULT hr = Details::CreateAgileHelper<TDelegateInterface>(delegateInterface, &agileCallback);
        if (SUCCEEDED(hr))
        {
            hr = Super::Add(agileCallback.Get(), Microsoft::WRL::Details::GetDelegateBucketAssist(delegateInterface), token);
        }
        return hr;
    }
};
} }
#include <poppack.h>
#include <wrl\internalevent.h>
