       
#include <roapi.h>
#include <winrt.h>
#include <activation.h>
#include <WinString.h>
#include <intrin.h>
#include <winapifamily.h>
#include <wrl\def.h>
#include <wrl\internal.h>
#include <wrl\client.h>
#include <wrl\implements.h>
#include <wrl\ftm.h>
#include <wrl\wrappers\corewrappers.h>
#include <pshpack8.h>
namespace Microsoft {
namespace WRL {
enum ModuleType
{
    InProc = 0x1,
    OutOfProc = 0x2,
    DisableCaching = 0x4,
    InProcDisableCaching = InProc | DisableCaching,
    OutOfProcDisableCaching = OutOfProc | DisableCaching
};
enum FactoryCacheFlags
{
    FactoryCacheDefault,
    FactoryCacheEnabled,
    FactoryCacheDisabled
};
namespace Details
{
struct FactoryCache
{
    IUnknown* factory;
    union {
        RO_REGISTRATION_COOKIE winrt;
        DWORD com;
    } cookie;
};
struct CreatorMap
{
    HRESULT(STDMETHODCALLTYPE *factoryCreator)(_In_ unsigned int*, _In_ const CreatorMap*, REFIID, _COM_Outptr_ IUnknown**) throw();
    union {
        const IID* clsid;
        const wchar_t* (STDMETHODCALLTYPE *getRuntimeName)();
    } activationId;
    TrustLevel (STDMETHODCALLTYPE *getTrustLevel)();
    FactoryCache* factoryCache;
    const wchar_t* serverName;
};
class FactoryBase
{
};
inline bool IsServerNameEqual(_In_ const CreatorMap* entry, const wchar_t* serverName) throw()
{
    if (serverName == nullptr)
    {
        return true;
    }
    else if (entry->serverName == nullptr)
    {
        return false;
    }
    return ::wcscmp(entry->serverName, serverName) == 0;
}
#pragma warning(push)
#pragma warning(disable: 26165)
inline bool TerminateMap(_In_ ModuleBase *modulePtr, _In_opt_z_ const wchar_t *serverName, bool forceTerminate) throw()
{
    auto entry = modulePtr->GetFirstEntryPointer() + 1;
    auto last = modulePtr->GetLastEntryPointer();
    for (; entry < last; entry++)
    {
        if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
        {
            if (modulePtr->GetObjectCount() > 0 && !forceTerminate)
            {
                return false;
            }
            if (static_cast<IUnknown* volatile&>((*entry)->factoryCache->factory) == nullptr)
            {
                continue;
            }
            void* factoryPointer = nullptr;
            {
                auto lock = ::Microsoft::WRL::Wrappers::SRWLock::LockExclusive(modulePtr->GetLock());
                if ((*entry)->factoryCache->factory == nullptr)
                {
                    continue;
                }
                factoryPointer = (*entry)->factoryCache->factory;
                (*entry)->factoryCache->factory = nullptr;
            }
            __WRL_ASSERT__(factoryPointer != nullptr);
            IUnknown *factory = reinterpret_cast<IUnknown*>(::DecodePointer(factoryPointer));
            _Analysis_assume_(factory != nullptr);
            factory->Release();
        }
    }
    return modulePtr->GetObjectCount() == 0 ? true : false;
}
inline HRESULT GetCacheEntry(_In_ ModuleBase* modulePtr, _In_ unsigned int *flags, REFIID riid, _In_ const CreatorMap* entry, _COM_Outptr_ IUnknown **ppFactory) throw()
{
    *ppFactory = nullptr;
    IUnknown *factory = nullptr;
    if (static_cast<IUnknown* volatile&>(entry->factoryCache->factory) != nullptr)
    {
        auto readLock = ::Microsoft::WRL::Wrappers::SRWLock::LockShared(modulePtr->GetLock());
        void* factoryPointer = entry->factoryCache->factory;
        if (factoryPointer != nullptr)
        {
            factory = reinterpret_cast<IUnknown*>(::DecodePointer(factoryPointer));
            _Analysis_assume_(factory != nullptr);
            __WRL_ASSERT__(factory != nullptr);
            return factory->QueryInterface(riid, reinterpret_cast<void**>(ppFactory));
        }
    }
    HRESULT hr = entry->factoryCreator(flags, entry, riid, &factory);
    if (FAILED(hr))
    {
        return hr;
    }
    if ((*flags & DisableCaching) == 0)
    {
        IUnknown *cachedFactory = nullptr;
        {
            auto writeLock = ::Microsoft::WRL::Wrappers::SRWLock::LockExclusive(modulePtr->GetLock());
            void* factoryPointer = entry->factoryCache->factory;
            if (factoryPointer == nullptr)
            {
                entry->factoryCache->factory = reinterpret_cast<IUnknown*>(::EncodePointer(factory));
            }
            else
            {
                cachedFactory = reinterpret_cast<IUnknown*>(::DecodePointer(factoryPointer));
                _Analysis_assume_(cachedFactory != nullptr);
                cachedFactory->AddRef();
            }
        }
        if (cachedFactory != nullptr)
        {
            factory->Release();
            factory->Release();
            factory = cachedFactory;
        }
    }
    *ppFactory = factory;
    __WRL_ASSERT__(*ppFactory != nullptr);
    return S_OK;
}
#pragma warning(pop)
template<unsigned int flags>
inline HRESULT GetClassObject(_In_ ModuleBase *modulePtr, _In_opt_z_ const wchar_t* serverName, REFCLSID clsid, REFIID riid, _Outptr_result_nullonfailure_ void **ppv) throw()
{
    *ppv = nullptr;
    auto entry = modulePtr->GetFirstEntryPointer() + 1;
    auto last = modulePtr->GetMidEntryPointer();
    for (; entry < last; entry++)
    {
        if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
        {
            if (*(*entry)->activationId.clsid == clsid)
            {
                unsigned int currentFlags = flags;
#pragma warning(push)
#pragma warning(disable: 4127)
#pragma warning(disable: 6326)
                if ((flags & DisableCaching) == 0)
#pragma warning(pop)
                {
                    return GetCacheEntry(modulePtr, &currentFlags, riid, *entry, reinterpret_cast<IUnknown**>(ppv));
                }
                else
                {
                    return (*entry)->factoryCreator(&currentFlags, *entry, riid, reinterpret_cast<IUnknown**>(ppv));
                }
            }
        }
    }
    return CLASS_E_CLASSNOTAVAILABLE;
}
template<unsigned int flags>
inline HRESULT GetActivationFactory(_In_ ModuleBase* modulePtr, _In_opt_z_ const wchar_t* serverName, _In_opt_ HSTRING activatibleClassId, _COM_Outptr_ IActivationFactory **ppFactory) throw()
{
    *ppFactory = nullptr;
    BOOL hasEmbedNull;
    if (::WindowsIsStringEmpty(activatibleClassId) ||
        (FAILED(::WindowsStringHasEmbeddedNull(activatibleClassId, &hasEmbedNull)) || hasEmbedNull == TRUE))
    {
        WCHAR const pszParamName[] = L"activatibleClassId";
        ::RoOriginateErrorW(E_INVALIDARG, ARRAYSIZE(pszParamName) - 1, pszParamName);
        return E_INVALIDARG;
    }
    const wchar_t* id = ::WindowsGetStringRawBuffer(activatibleClassId, nullptr);
    auto entry = modulePtr->GetMidEntryPointer() + 1;
    auto last = modulePtr->GetLastEntryPointer();
    for (; entry < last; entry++)
    {
        if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
        {
            const wchar_t* runtimeName = ((*entry)->activationId.getRuntimeName)();
            __WRL_ASSERT__(runtimeName != nullptr);
            _Analysis_assume_(runtimeName != nullptr);
            if (::wcscmp(id, runtimeName) == 0)
            {
                unsigned int currentFlags = flags;
#pragma warning(push)
#pragma warning(disable: 4127)
#pragma warning(disable: 6326)
                if ((flags & DisableCaching) == 0)
#pragma warning(pop)
                {
                    return GetCacheEntry(modulePtr, &currentFlags, __uuidof(IActivationFactory), *entry, reinterpret_cast<IUnknown**>(ppFactory));
                }
                else
                {
                    return (*entry)->factoryCreator(&currentFlags, *entry, __uuidof(IActivationFactory), reinterpret_cast<IUnknown**>(ppFactory));
                }
            }
        }
    }
    ::RoOriginateError(CLASS_E_CLASSNOTAVAILABLE, activatibleClassId);
    return CLASS_E_CLASSNOTAVAILABLE;
}
template<unsigned int flags>
inline HRESULT STDAPICALLTYPE ActivationFactoryCallback(_In_opt_ HSTRING activationId, _COM_Outptr_ IActivationFactory **ppFactory) throw()
{
    auto modulePtr = ::Microsoft::WRL::GetModuleBase();
    __WRL_ASSERT__(modulePtr != nullptr);
    return GetActivationFactory<flags>(modulePtr, nullptr, activationId, ppFactory);
}
template<unsigned int flags>
inline HRESULT RegisterWinRTObject(_In_opt_z_ const wchar_t*, _In_reads_(count) _Deref_pre_z_ const wchar_t** activatableClassIds, _Inout_ RO_REGISTRATION_COOKIE* cookie, unsigned int count) throw()
{
    PFNGETACTIVATIONFACTORY* activationFactoryCallbacks = new (std::nothrow) PFNGETACTIVATIONFACTORY[count];
    HSTRING* activatableClassIdsHstring = new (std::nothrow) HSTRING[count];
    HRESULT hr = S_OK;
    if (activationFactoryCallbacks == nullptr || activatableClassIdsHstring == nullptr)
    {
        hr = E_OUTOFMEMORY;
    }
    if (SUCCEEDED(hr))
    {
        unsigned int index = 0;
        for(;index < count && SUCCEEDED(hr); index++)
        {
            activationFactoryCallbacks[index] = &Details::ActivationFactoryCallback<flags>;
            hr = ::WindowsCreateString(activatableClassIds[index], static_cast<UINT32>(::wcslen(activatableClassIds[index])), &activatableClassIdsHstring[index]);
        }
        if (SUCCEEDED(hr))
        {
            hr = ::Windows::Foundation::RegisterActivationFactories(activatableClassIdsHstring, activationFactoryCallbacks, count, cookie);
        }
        for (unsigned int i = 0; i < index; i++)
        {
            ::WindowsDeleteString(activatableClassIdsHstring[i]);
        }
    }
    delete [] activationFactoryCallbacks;
    delete [] activatableClassIdsHstring;
    return hr;
}
template<unsigned int comFlags>
inline HRESULT RegisterCOMObject(_In_opt_z_ const wchar_t*, _In_reads_(count) IID* clsids, _In_reads_(count) IClassFactory** factories, _Inout_updates_(count) DWORD* cookies, unsigned int count) throw()
{
    HRESULT hr = S_OK;
    unsigned int index = 0;
    for (; index < count && SUCCEEDED(hr); index++)
    {
        hr = ::CoRegisterClassObject(clsids[index], factories[index], CLSCTX_LOCAL_SERVER, comFlags | REGCLS_SUSPENDED, &cookies[index]);
    }
    if (SUCCEEDED(hr))
    {
        hr = ::CoResumeClassObjects();
    }
    if (FAILED(hr))
    {
        for (unsigned int i = 0; i < index; i++)
        {
            ::CoRevokeClassObject(cookies[i]);
            cookies[i] = 0;
        }
    }
   return hr;
}
_Ret_range_(<=, end - first) inline unsigned int CountObjectEntries(_In_reads_(end - first) const CreatorMap** first, _In_ const CreatorMap** end, _In_opt_z_ const wchar_t* serverName) throw()
{
    unsigned int count = 0;
    for (const CreatorMap** entry = first + 1; entry < end; entry++)
    {
        if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
        {
            count++;
        }
    }
    return count;
}
template<unsigned int flags>
inline HRESULT RegisterObjects(_In_ ModuleBase* modulePtr, _In_opt_z_ const wchar_t* serverName) throw()
{
    HRESULT hr = S_OK;
    auto firstEntry = modulePtr->GetFirstEntryPointer();
    auto midEntry = modulePtr->GetMidEntryPointer();
    unsigned int objectCount = CountObjectEntries(firstEntry, midEntry, serverName);
    if (objectCount > 0)
    {
        DWORD* cookies = new(std::nothrow) DWORD[objectCount];
        IClassFactory** factories = new (std::nothrow) IClassFactory*[objectCount];
        IID* clsids = new (std::nothrow) IID[objectCount];
        if (cookies == nullptr || factories == nullptr || clsids == nullptr)
        {
            hr = E_OUTOFMEMORY;
        }
        if (SUCCEEDED(hr))
        {
            unsigned int index = 0;
            for (const CreatorMap** entry = firstEntry + 1; entry < midEntry && SUCCEEDED(hr); entry++)
            {
                if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
                {
                    unsigned int currentFlags = flags;
                    IUnknown* factory = nullptr;
                    hr = (*entry)->factoryCreator(&currentFlags, *entry, __uuidof(IClassFactory), &factory);
                    if (SUCCEEDED(hr))
                    {
                        factories[index] = reinterpret_cast<IClassFactory*>(factory);
                        clsids[index] = *(*entry)->activationId.clsid;
                        index++;
                    }
                }
            }
            if (SUCCEEDED(hr))
            {
                hr = modulePtr->RegisterCOMObject(serverName, clsids, factories, cookies, objectCount);
                if (SUCCEEDED(hr))
                {
                    index = 0;
                    for (const CreatorMap** entry = firstEntry + 1; entry < midEntry; entry++)
                    {
                        if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
                        {
                            (*entry)->factoryCache->cookie.com = cookies[index];
                            index++;
                        }
                    }
                }
            }
            for (unsigned int i = 0; i < index; i++)
            {
                factories[i]->Release();
            }
        }
        delete [] cookies;
        delete [] clsids;
        delete [] factories;
    }
    if (SUCCEEDED(hr))
    {
        auto lastEntry = modulePtr->GetLastEntryPointer();
        objectCount = CountObjectEntries(midEntry, lastEntry, serverName);
        if (objectCount > 0)
        {
            const wchar_t** activatableClassIds = new (std::nothrow) const wchar_t*[objectCount];
            if (activatableClassIds == nullptr)
            {
                hr = E_OUTOFMEMORY;
            }
            if (SUCCEEDED(hr))
            {
                RO_REGISTRATION_COOKIE cookie = nullptr;
                unsigned int classCount = 0;
                for (const CreatorMap** entry = midEntry + 1; entry < lastEntry; entry++)
                {
                    if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
                    {
                        const wchar_t* id = ((*entry)->activationId.getRuntimeName)();
                        __WRL_ASSERT__(id != nullptr);
                        activatableClassIds[classCount] = id;
                        classCount++;
                    }
                }
                hr = modulePtr->RegisterWinRTObject(serverName, activatableClassIds, &cookie, classCount);
                if (SUCCEEDED(hr))
                {
                    for (const CreatorMap** entry = midEntry + 1; entry < lastEntry; entry++)
                    {
                        if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
                        {
                             (*entry)->factoryCache->cookie.winrt = cookie;
                        }
                    }
                }
            }
            delete [] activatableClassIds;
        }
    }
    return hr;
}
inline HRESULT UnregisterObjects(_In_ ModuleBase* modulePtr, _In_opt_z_ const wchar_t* serverName) throw()
{
    HRESULT hr = S_OK;
    auto firstEntry = modulePtr->GetFirstEntryPointer();
    auto midEntry = modulePtr->GetMidEntryPointer();
    unsigned int objectCount = CountObjectEntries(firstEntry, midEntry, serverName);
    if (objectCount > 0)
    {
        DWORD* cookies = new(std::nothrow) DWORD[objectCount];
        if (cookies == nullptr)
        {
            hr = E_OUTOFMEMORY;
        }
        if (SUCCEEDED(hr))
        {
            unsigned int index = 0;
            for (const CreatorMap** entry = firstEntry + 1; entry < midEntry; entry++)
            {
                _Analysis_assume_(index < objectCount);
                if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
                {
                    cookies[index] = (*entry)->factoryCache->cookie.com;
                    index++;
                }
            }
            _Analysis_assume_(index == objectCount);
            hr = modulePtr->UnregisterCOMObject(serverName, cookies, objectCount);
            index = 0;
            for (const CreatorMap** entry = firstEntry + 1; entry < midEntry; entry++)
            {
                _Analysis_assume_(index < objectCount);
                if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
                {
                    (*entry)->factoryCache->cookie.com = cookies[index];
                    index++;
                }
            }
        }
        delete [] cookies;
    }
    if (SUCCEEDED(hr))
    {
        RO_REGISTRATION_COOKIE cookie = { 0 };
        bool foundCookie = false;
        auto lastEntry = modulePtr->GetLastEntryPointer();
        for (const CreatorMap** entry = midEntry + 1; entry < lastEntry; entry++)
        {
            if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
            {
                 cookie = (*entry)->factoryCache->cookie.winrt;
                 foundCookie = true;
                 break;
            }
        }
        if (foundCookie)
        {
            hr = modulePtr->UnregisterWinRTObject(serverName, cookie);
            if (SUCCEEDED(hr))
            {
                for (const CreatorMap** entry = midEntry + 1; entry < lastEntry; entry++)
                {
                    if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
                    {
                         (*entry)->factoryCache->cookie.winrt = 0;
                    }
                }
            }
        }
    }
    TerminateMap(modulePtr, serverName, false);
    return hr;
}
#pragma warning(push)
#pragma warning(disable: 6387)
template<typename Factory>
inline HRESULT STDMETHODCALLTYPE CreateClassFactory(_In_ unsigned int *flags, _In_ const CreatorMap*, REFIID riid, _Outptr_ IUnknown **ppFactory) throw()
{
    static_assert(__is_base_of(IClassFactory, Factory), "'Factory' must inherit from 'IClassFactory'");
    static_assert(__is_base_of(FactoryBase, Factory), "'Factory' must inherit from '::Microsoft::WRL::ClassFactory'");
    switch(Factory::cacheFlag)
    {
        case FactoryCacheFlags::FactoryCacheEnabled:
            if ((*flags & DisableCaching) != 0)
            {
                __WRL_ASSERT__("Mismatched Module<> and 'Factory' configuration. 'Factory' is cacheable and Module<> doesn't support caching");
                *flags |= DisableCaching;
            }
            else
            {
                *flags &= ~DisableCaching;
            }
            break;
        case FactoryCacheFlags::FactoryCacheDisabled:
            *flags |= DisableCaching;
            break;
    }
    ComPtr<Factory> classFactory;
    HRESULT hr = MakeAndInitialize<Factory>(classFactory.GetAddressOf());
    if (FAILED(hr))
    {
        return hr;
    }
    classFactory.Get()->flags_ = *flags;
    hr = classFactory.CopyTo(riid, reinterpret_cast<void**>(ppFactory));
    if ((*flags & InProc) != 0)
    {
        if (SUCCEEDED(hr))
        {
            if ((*flags & DisableCaching) != 0)
            {
                auto modulePtr = ::Microsoft::WRL::GetModuleBase();
                __WRL_ASSERT__(modulePtr != nullptr);
                modulePtr->IncrementObjectCount();
            }
            else
            {
                classFactory.Detach();
            }
        }
        else
        {
            classFactory.Get()->flags_ &= ~(InProc | DisableCaching);
        }
    }
    return hr;
}
template<typename Factory>
inline HRESULT STDMETHODCALLTYPE CreateActivationFactory(_In_ unsigned int *flags, _In_ const CreatorMap* entry, REFIID riid, _Outptr_ IUnknown **ppFactory) throw()
{
    static_assert(__is_base_of(IActivationFactory, Factory), "'Factory' must inherit from 'IActivationFactory'");
    static_assert(__is_base_of(FactoryBase, Factory), "'Factory' must inherit from '::Microsoft::WRL::IActivationFactory'");
    switch(Factory::cacheFlag)
    {
        case FactoryCacheFlags::FactoryCacheEnabled:
            if ((*flags & DisableCaching) != 0)
            {
                __WRL_ASSERT__("Mismatched Module<> and 'Factory' configuration. 'Factory' is cacheable and Module<> doesn't support caching");
                *flags |= DisableCaching;
            }
            else
            {
                *flags &= ~DisableCaching;
            }
            break;
        case FactoryCacheFlags::FactoryCacheDisabled:
            *flags |= DisableCaching;
            break;
    }
    ComPtr<Factory> activationFactory;
    HRESULT hr = MakeAndInitialize<Factory>(activationFactory.GetAddressOf());
    if (FAILED(hr))
    {
        return hr;
    }
    hr = activationFactory->CanCastTo(riid, reinterpret_cast<void**>(ppFactory));
    if (FAILED(hr))
    {
        return hr;
    }
    if ((*flags & DisableCaching) == 0)
    {
        activationFactory->InternalAddRef();
    }
    activationFactory.Get()->flags_ = *flags;
    __WRL_ASSERT__(activationFactory.Get()->entry_ == nullptr);
    activationFactory.Get()->entry_ = const_cast<CreatorMap*>(entry);
    activationFactory.Detach();
    return S_OK;
}
#pragma warning(pop)
template<typename T>
inline void CheckForDuplicateEntries(const CreatorMap** firstEntry, const CreatorMap** lastEntry, T validateEntry) throw()
{
    __WRL_ASSERT__(firstEntry <= lastEntry);
    if (firstEntry == lastEntry)
    {
        return;
    }
    for (const CreatorMap** entry = firstEntry; entry < (lastEntry - 1); entry++)
    {
        if (*entry == nullptr)
        {
            continue;
        }
        for (const CreatorMap** entry2 = (entry + 1); entry2 < lastEntry; entry2++)
        {
            if (*entry2 != nullptr)
            {
                (validateEntry)(*entry, *entry2);
            }
        }
    }
}
}
#pragma warning(push)
#pragma warning(disable: 6388)
template <typename I0 = Details::Nil, typename I1 = Details::Nil, typename I2 = Details::Nil, FactoryCacheFlags cacheFlagValue = FactoryCacheDefault>
class ClassFactory :
    public Details::RuntimeClass<typename Details::InterfaceListHelper<IClassFactory, I0, I1, I2, Details::Nil>::TypeT, RuntimeClassFlags<ClassicCom | InhibitWeakReference>, false>,
    private Details::FactoryBase
{
private:
    static const unsigned int cacheFlag = cacheFlagValue;
public:
    ClassFactory() throw() : flags_(DisableCaching)
    {
    }
    STDMETHOD_(ULONG, AddRef)()
    {
        auto refcount = Super::InternalAddRef();
        if ((flags_ & (OutOfProc | DisableCaching)) == 0 && refcount == 2)
        {
            auto modulePtr = ::Microsoft::WRL::GetModuleBase();
            __WRL_ASSERT__(modulePtr != nullptr);
            modulePtr->IncrementObjectCount();
        }
        return refcount;
    }
    STDMETHOD_(ULONG, Release)()
    {
        auto refcount = Super::InternalRelease();
        if (refcount == 0)
        {
            bool isInProcWithoutCaching = (flags_ & (InProc | DisableCaching)) == (InProc | DisableCaching);
            delete this;
            if (isInProcWithoutCaching)
            {
                auto modulePtr = ::Microsoft::WRL::GetModuleBase();
                __WRL_ASSERT__(modulePtr != nullptr);
                modulePtr->DecrementObjectCount();
            }
        }
        else if ((flags_ & (OutOfProc | DisableCaching)) == 0 && refcount == 1)
        {
            auto modulePtr = ::Microsoft::WRL::GetModuleBase();
            __WRL_ASSERT__(modulePtr != nullptr);
            modulePtr->DecrementObjectCount();
        }
        return refcount;
    }
    STDMETHOD(QueryInterface)(REFIID riid, _Outptr_result_nullonfailure_ void **ppvObject)
    {
        return Super::AsIID(this, riid, ppvObject);
    }
    STDMETHOD(LockServer)(BOOL fLock)
    {
        auto modulePtr = ::Microsoft::WRL::GetModuleBase();
        if (modulePtr == nullptr)
        {
            ::RoOriginateError(E_FAIL, nullptr);
            return E_FAIL;
        }
        if (fLock)
        {
            modulePtr->IncrementObjectCount();
        }
        else
        {
            modulePtr->DecrementObjectCount();
        }
        return S_OK;
    }
    template<typename Factory> friend HRESULT STDMETHODCALLTYPE Details::CreateClassFactory(_In_ unsigned int*, _In_ const Details::CreatorMap*, REFIID, _Outptr_ IUnknown **) throw();
protected:
    using Super = Details::RuntimeClass<typename Details::InterfaceListHelper<IClassFactory, I0, I1, I2, Details::Nil>::TypeT, RuntimeClassFlags<ClassicCom | InhibitWeakReference>, false>;
private:
    unsigned int flags_;
};
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable: 6387 6388)
template<typename Base, FactoryCacheFlags cacheFlagValue = FactoryCacheDefault>
class SimpleClassFactory : public ClassFactory<Details::Nil, Details::Nil, Details::Nil, cacheFlagValue>
{
public:
    STDMETHOD(CreateInstance)(_Inout_opt_ IUnknown* pUnkOuter, REFIID riid, _Outptr_result_nullonfailure_ void** ppvObject)
    {
        static_assert(__is_base_of(Details::RuntimeClassBase, Base), "SimpleClassFactory can only instantiate 'Base' that derive from RuntimeClass");
        static_assert((Base::ClassFlags::value & ::Microsoft::WRL::ClassicCom) == ::Microsoft::WRL::ClassicCom,
            "SimpleClassFactory can only instantiate 'Base' that is configured with ClassicCom or WinRtClassicComMix flags");
        *ppvObject = nullptr;
        if (pUnkOuter != nullptr)
        {
            ::RoOriginateError(CLASS_E_NOAGGREGATION, nullptr);
            return CLASS_E_NOAGGREGATION;
        }
        ComPtr<IUnknown> unk;
        HRESULT hr = MakeAndInitialize<Base>(unk.GetAddressOf());
        if (FAILED(hr))
        {
            return hr;
        }
        return unk.CopyTo(riid, ppvObject);
    }
};
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable: 6388)
template <typename I0 = Details::Nil, typename I1 = Details::Nil, typename I2 = Details::Nil, FactoryCacheFlags cacheFlagValue = FactoryCacheDefault>
class ActivationFactory :
    public Details::RuntimeClass<typename Details::InterfaceListHelper<IActivationFactory, I0, I1, I2, Details::Nil>::TypeT, RuntimeClassFlags<WinRt | InhibitWeakReference | InhibitFtmBase>, false>,
    private Details::FactoryBase
{
private:
    static const unsigned int cacheFlag = cacheFlagValue;
public:
    typedef ActivationFactory ActivationFactoryT;
    typedef I0 FirstInterface;
    ActivationFactory() throw() : entry_(nullptr), flags_(DisableCaching)
    {
        auto modulePtr = ::Microsoft::WRL::GetModuleBase();
        if (modulePtr != nullptr)
        {
            modulePtr->IncrementObjectCount();
        }
    }
    STDMETHOD_(ULONG, AddRef)()
    {
        auto refcount = Super::InternalAddRef();
        if ((flags_ & DisableCaching) == 0 && refcount == 2)
        {
            auto modulePtr = ::Microsoft::WRL::GetModuleBase();
            __WRL_ASSERT__(modulePtr != nullptr);
            modulePtr->IncrementObjectCount();
        }
        return refcount;
    }
    STDMETHOD_(ULONG, Release)()
    {
        auto refcount = Super::InternalRelease();
        if (refcount == 0)
        {
            bool isCacheDisabled = (flags_ & DisableCaching) != 0;
            delete this;
            if (isCacheDisabled && Details::ModuleBase::module_ != nullptr)
            {
                auto modulePtr = ::Microsoft::WRL::GetModuleBase();
                __WRL_ASSERT__(modulePtr != nullptr);
                modulePtr->DecrementObjectCount();
            }
        }
        else if ((flags_ & DisableCaching) == 0 && refcount == 1)
        {
            auto modulePtr = ::Microsoft::WRL::GetModuleBase();
            __WRL_ASSERT__(modulePtr != nullptr);
            modulePtr->DecrementObjectCount();
        }
        return refcount;
    }
    STDMETHOD(QueryInterface)(REFIID riid, _Outptr_result_nullonfailure_ void **ppvObject)
    {
        return Super::AsIID(this, riid, ppvObject);
    }
    STDMETHOD(GetIids)(
        _Out_ ULONG *iidCount,
        _When_(*iidCount == 0, _At_(*iids, _Post_null_))
        _When_(*iidCount > 0, _At_(*iids, _Post_notnull_))
        _Result_nullonfailure_ IID **iids)
    {
        return Super::GetImplementedIIDS(this, iidCount, iids);
    }
    STDMETHOD(GetRuntimeClassName)(_Out_ HSTRING* runtimeName)
    {
        *runtimeName = nullptr;
        ::RoOriginateError(E_ILLEGAL_METHOD_CALL, nullptr);
        return E_ILLEGAL_METHOD_CALL;
    }
    STDMETHOD(GetTrustLevel)(_Out_ TrustLevel* trustLvl)
    {
        if (entry_ != nullptr)
        {
            *trustLvl = (entry_->getTrustLevel)();
        }
        else
        {
            __WRL_ASSERT__(false && "Use 'InspectableClassStatic' on static ONLY factories or override 'GetTrustLevel' method to set trust level.");
            *trustLvl = TrustLevel::FullTrust;
        }
        return S_OK;
    }
    STDMETHOD(ActivateInstance)(_Outptr_result_nullonfailure_ IInspectable **ppvObject)
    {
        *ppvObject = nullptr;
        ::RoOriginateError(E_NOTIMPL, nullptr);
        return E_NOTIMPL;
    }
    template<typename Factory> friend HRESULT STDMETHODCALLTYPE Details::CreateActivationFactory(_In_ unsigned int*, _In_ const Details::CreatorMap*, REFIID, _Outptr_ IUnknown **) throw();
protected:
    using Super = Details::RuntimeClass<typename Details::InterfaceListHelper<IActivationFactory, I0, I1, I2, Details::Nil>::TypeT, RuntimeClassFlags<WinRt | InhibitWeakReference | InhibitFtmBase>, false>;
private:
    Details::CreatorMap* entry_;
    unsigned int flags_;
};
template <typename I0 = Details::Nil, typename I1 = Details::Nil, typename I2 = Details::Nil, FactoryCacheFlags cacheFlagValue = FactoryCacheDefault>
class AgileActivationFactory : public ActivationFactory<Implements<FtmBase, I0>, I1, I2, cacheFlagValue>
{
};
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable: 6387 6388)
template<typename Base, FactoryCacheFlags cacheFlagValue = FactoryCacheDefault>
class SimpleActivationFactory : public ActivationFactory<Details::Nil, Details::Nil, Details::Nil, cacheFlagValue>
{
public:
    STDMETHOD(ActivateInstance)(_Outptr_result_nullonfailure_ IInspectable **ppvObject)
    {
        static_assert(__is_base_of(Details::RuntimeClassBase, Base), "SimpleActivationFactory can only instantiate 'Base' that derive from RuntimeClass");
        static_assert((Base::ClassFlags::value & ::Microsoft::WRL::WinRt) == ::Microsoft::WRL::WinRt,
            "SimpleActivationFactory can only instantiate 'Base' that is configured with WinRt or WinRtClassicComMix flags");
        return MakeAndInitialize<Base>(ppvObject);
    }
};
template<typename Base, FactoryCacheFlags cacheFlagValue = FactoryCacheDefault>
class SimpleSealedActivationFactory WrlSealed : public SimpleActivationFactory<Base, cacheFlagValue>
{
};
template<typename Base, FactoryCacheFlags cacheFlagValue = FactoryCacheDefault>
class SimpleAgileActivationFactory : public AgileActivationFactory<Details::Nil, Details::Nil, Details::Nil, cacheFlagValue>
{
public:
    STDMETHOD(ActivateInstance)(_Outptr_result_nullonfailure_ IInspectable **ppvObject)
    {
        static_assert(__is_base_of(Details::RuntimeClassBase, Base), "SimpleAgileActivationFactory can only instantiate 'Base' that derive from RuntimeClass");
        static_assert((Base::ClassFlags::value & ::Microsoft::WRL::WinRt) == ::Microsoft::WRL::WinRt,
            "SimpleAgileActivationFactory can only instantiate 'Base' that is configured with WinRt or WinRtClassicComMix flags");
        return MakeAndInitialize<Base>(ppvObject);
    }
};
template<typename Base, FactoryCacheFlags cacheFlagValue = FactoryCacheDefault>
class SimpleSealedAgileActivationFactory WrlSealed : public SimpleAgileActivationFactory<Base, cacheFlagValue>
{
};
#pragma warning(pop)
#pragma comment(linker, "/merge:minATL=.rdata")
    __declspec(selectany) ::Microsoft::WRL::Details::FactoryCache __objectFactory__##className##_##serverName = { nullptr, 0 }; \
    extern __declspec(selectany) const ::Microsoft::WRL::Details::CreatorMap __object_##className##_##serverName = { \
        creatorFunction, \
        runtimeClassName, \
        trustLevel, \
        &__objectFactory__##className##_##serverName,\
        L#serverName}; \
    extern "C" __declspec(allocate(section)) __declspec(selectany) const ::Microsoft::WRL::Details::CreatorMap* const __minATLObjMap_##className##_##serverName = &__object_##className##_##serverName; \
    WrlCreatorMapIncludePragmaEx(className, serverName)
    __declspec(selectany) ::Microsoft::WRL::Details::FactoryCache __objectFactory__##className = { nullptr, 0 }; \
    extern __declspec(selectany) const ::Microsoft::WRL::Details::CreatorMap __object_##className = { \
        creatorFunction, \
        runtimeClassName, \
        trustLevel, \
        &__objectFactory__##className,\
        nullptr}; \
    extern "C" __declspec(allocate(section)) __declspec(selectany) const ::Microsoft::WRL::Details::CreatorMap* const __minATLObjMap_##className = &__object_##className; \
    WrlCreatorMapIncludePragma(className)
    InternalWrlCreateCreatorMapEx(className, serverName, reinterpret_cast<const IID*>(&className::InternalGetRuntimeClassName), &className::InternalGetTrustLevel, ::Microsoft::WRL::Details::CreateActivationFactory<factory>, "minATL$__r")
    InternalWrlCreateCreatorMap(className, reinterpret_cast<const IID*>(&className::InternalGetRuntimeClassName), &className::InternalGetTrustLevel, ::Microsoft::WRL::Details::CreateActivationFactory<factory>, "minATL$__r")
    ActivatableClassWithFactory(className, ::Microsoft::WRL::SimpleSealedActivationFactory<className>)
    ActivatableClassWithFactory(className, ::Microsoft::WRL::SimpleSealedAgileActivationFactory<className>)
    InternalWrlCreateCreatorMapEx(factory, serverName, reinterpret_cast<const IID*>(&factory::InternalGetRuntimeClassNameStatic), &factory::InternalGetTrustLevelStatic, ::Microsoft::WRL::Details::CreateActivationFactory<factory>, "minATL$__r")
    InternalWrlCreateCreatorMap(factory, reinterpret_cast<const IID*>(&factory::InternalGetRuntimeClassNameStatic), &factory::InternalGetTrustLevelStatic, ::Microsoft::WRL::Details::CreateActivationFactory<factory>, "minATL$__r")
    public: \
        static const wchar_t* STDMETHODCALLTYPE InternalGetRuntimeClassNameStatic() throw() \
        { \
            static_assert(__is_base_of(IActivationFactory, ActivationFactoryT) && __is_base_of(::Microsoft::WRL::Details::FactoryBase, ActivationFactoryT), "'InspectableClassStatic' macro can only be used with ::Windows::WRL::ActivationFactory types"); \
            static_assert(!__is_base_of(ActivationFactoryT::FirstInterface, ::Microsoft::WRL::Details::Nil), "ActivationFactory with 'InspectableClassStatic' macro requires to specify custom interfaces"); \
            return runtimeClassName; \
        } \
        static TrustLevel STDMETHODCALLTYPE InternalGetTrustLevelStatic() throw() \
        { \
            return trustLevel; \
        } \
        STDMETHOD(GetRuntimeClassName)(_Out_ HSTRING* runtimeName) \
        { \
            *runtimeName = nullptr; \
            return E_ILLEGAL_METHOD_CALL; \
        } \
        STDMETHOD(GetTrustLevel)(_Out_ TrustLevel* trustLvl) \
        { \
            *trustLvl = trustLevel; \
            return S_OK; \
        } \
        STDMETHOD(GetIids)(_Out_ ULONG *iidCount, \
            _When_(*iidCount == 0, _At_(*iids, _Post_null_)) \
            _When_(*iidCount > 0, _At_(*iids, _Post_notnull_)) \
            _Result_nullonfailure_ IID **iids) \
        { \
            return ActivationFactoryT::GetIids(iidCount, iids); \
        } \
        STDMETHOD(QueryInterface)(REFIID riid, _Outptr_result_nullonfailure_ void **ppvObject) \
        { \
            return ActivationFactoryT::QueryInterface(riid, ppvObject); \
        } \
        STDMETHOD_(ULONG, Release)() \
        { \
            return ActivationFactoryT::Release(); \
        } \
        STDMETHOD_(ULONG, AddRef)() \
        { \
            return ActivationFactoryT::AddRef(); \
        } \
    private:
    InternalWrlCreateCreatorMapEx(className##_COM, serverName, &__uuidof(className), nullptr, ::Microsoft::WRL::Details::CreateClassFactory<factory>, "minATL$__f")
    InternalWrlCreateCreatorMap(className##_COM, &__uuidof(className), nullptr, ::Microsoft::WRL::Details::CreateClassFactory<factory>, "minATL$__f")
    CoCreatableClassWithFactory(className, ::Microsoft::WRL::SimpleClassFactory<className>)
namespace Details
{
template<ModuleType moduleType>
class DefaultModule;
}
template<ModuleType moduleType, typename ModuleT = Details::DefaultModule<moduleType>>
class Module;
#pragma warning(push)
#pragma warning(disable: 6388)
template<typename ModuleT>
class Module<InProc, ModuleT> :
    public Details::ModuleBase
{
private:
    void VerifyEntries() throw()
    {
        for (const Details::CreatorMap** entry = GetMidEntryPointer() + 1; entry < GetLastEntryPointer(); entry++)
        {
            if (*entry == nullptr)
            {
                continue;
            }
            const wchar_t* name = ((*entry)->activationId.getRuntimeName)();
            (name);
            __WRL_ASSERT__(name != nullptr && ::wcslen(name) != 0);
        }
        Details::CheckForDuplicateEntries((GetFirstEntryPointer() + 1), GetMidEntryPointer(),
            [](const Details::CreatorMap* entry, const Details::CreatorMap* entry2) -> void {
                __WRL_ASSERT__(entry->activationId.clsid != entry2->activationId.clsid && "Duplicate CLSID!");
            }
        );
        Details::CheckForDuplicateEntries((GetMidEntryPointer() + 1), GetLastEntryPointer(),
            [](const Details::CreatorMap* entry, const Details::CreatorMap* entry2) -> void {
                __WRL_ASSERT__(::wcscmp((entry->activationId.getRuntimeName)(), (entry2->activationId.getRuntimeName)()) != 0 && "Duplicate runtime class name!");
            }
        );
    }
    static bool StaticInitialize()
    {
        auto &moduleRef = ModuleT::Create();
        __WRL_ASSERT__(&moduleRef != nullptr && "Must always be valid address");
        return nullptr != &moduleRef;
    }
    static bool isInitialized;
protected:
    Module()
    {
        VerifyEntries();
    }
public:
    virtual ~Module() throw()
    {
        Details::TerminateMap(this, nullptr, true);
        isInitialized = false;
    }
    static ModuleT& Create() throw()
    {
        static ModuleT moduleSingleton;
        return moduleSingleton;
    }
    static ModuleT& GetModule() throw()
    {
        return Create();
    }
 HRESULT GetActivationFactory(_In_opt_ HSTRING activatibleClassId, _COM_Outptr_ IActivationFactory **ppIFactory, _In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        return Details::GetActivationFactory<InProc>(this, serverName, activatibleClassId, ppIFactory);
    }
    HRESULT GetClassObject(REFCLSID clsid, REFIID riid, _Outptr_result_nullonfailure_ void **ppv, _In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        return Details::GetClassObject<InProc>(this, serverName, clsid, riid, ppv);
    }
    bool Terminate(_In_opt_z_ const wchar_t* serverName = nullptr, bool forceTerminate = false) throw()
    {
        return Details::TerminateMap(this, serverName, forceTerminate);
    }
    STDMETHOD_(unsigned long, IncrementObjectCount)()
    {
        return static_cast<unsigned long>(_InterlockedIncrement(reinterpret_cast<volatile long*>(&objectCount_)));
    }
    STDMETHOD_(unsigned long, DecrementObjectCount)()
    {
        return static_cast<unsigned long>(_InterlockedDecrement(reinterpret_cast<volatile long*>(&objectCount_)));
    }
    STDMETHOD(RegisterWinRTObject)(_In_opt_z_ const wchar_t*, _In_ _Deref_pre_z_ const wchar_t**, _Inout_ RO_REGISTRATION_COOKIE*, unsigned int)
    {
        ::RoOriginateError(E_NOTIMPL, nullptr);
        return E_NOTIMPL;
    }
    STDMETHOD(UnregisterWinRTObject)(_In_opt_z_ const wchar_t*, _In_ RO_REGISTRATION_COOKIE)
    {
        ::RoOriginateError(E_NOTIMPL, nullptr);
        return E_NOTIMPL;
    }
    STDMETHOD(RegisterCOMObject)(_In_opt_z_ const wchar_t*, _In_ IID*, _In_ IClassFactory**, _Inout_ DWORD*, unsigned int)
    {
        ::RoOriginateError(E_NOTIMPL, nullptr);
        return E_NOTIMPL;
    }
    STDMETHOD(UnregisterCOMObject)(_In_opt_z_ const wchar_t*, _Inout_ DWORD *, unsigned int)
    {
        ::RoOriginateError(E_NOTIMPL, nullptr);
        return E_NOTIMPL;
    }
};
#pragma warning(pop)
template<typename ModuleT>
__declspec(selectany) bool Module<InProc, ModuleT>::isInitialized = Module<InProc, ModuleT>::StaticInitialize();
#pragma warning(push)
#pragma warning(disable: 6388)
template<typename ModuleT>
class Module<InProcDisableCaching, ModuleT> :
    public Module<InProc, ModuleT>
{
public:
 HRESULT GetActivationFactory(_In_opt_ HSTRING activatibleClassId, _COM_Outptr_ IActivationFactory **ppIFactory, _In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        return Details::GetActivationFactory<InProcDisableCaching>(this, serverName, activatibleClassId, ppIFactory);
    }
    HRESULT GetClassObject(REFCLSID clsid, REFIID riid, _Outptr_result_nullonfailure_ void **ppv, _In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        return Details::GetClassObject<InProcDisableCaching>(this, serverName, clsid, riid, ppv);
    }
};
#pragma warning(pop)
namespace Details
{
template<typename ModuleT>
class OutOfProcModuleBase :
    public Module<InProc, ModuleT>
{
private:
    STDMETHOD_(unsigned long, GetObjectCount)() const
    {
        return 0;
    }
protected:
    class ReleaseNotifier
    {
    public:
        ReleaseNotifier(bool release) throw() : release_(release)
        {
        }
        virtual ~ReleaseNotifier() throw()
        {
        }
        void Release() throw()
        {
            if (release_)
            {
                delete this;
            }
        }
        virtual void Invoke() throw() = 0;
    private:
        bool release_;
    };
    template<typename T>
    class GenericReleaseNotifier : public ReleaseNotifier
    {
    public:
        GenericReleaseNotifier(T callback, bool release) throw() : ReleaseNotifier(release), callback_(callback)
        {
        }
        void Invoke() throw()
        {
            callback_();
        }
    protected:
        T callback_;
    };
    template<typename T>
    class MethodReleaseNotifier : public ReleaseNotifier
    {
    public:
        MethodReleaseNotifier(_In_ T* object, _In_ void (T::* method)(), bool release) throw() :
            ReleaseNotifier(release), object_(object), method_(method)
        {
        }
        void Invoke() throw()
        {
            (object_->*method_)();
        }
    protected:
        T* object_;
        void (T::* method_)();
    };
   ReleaseNotifier *releaseNotifier_;
    OutOfProcModuleBase() throw() : releaseNotifier_(nullptr)
    {
    }
    template<typename T>
    HRESULT Initialize(T callback) throw()
    {
        __WRL_ASSERT__(releaseNotifier_ == nullptr);
        releaseNotifier_ = new(std::nothrow) GenericReleaseNotifier<T>(callback, true);
        if (releaseNotifier_ == nullptr)
        {
            return E_OUTOFMEMORY;
        }
        return S_OK;
    }
    template<typename T>
    HRESULT Initialize(_In_ T* object, _In_ void (T::* method)()) throw()
    {
        __WRL_ASSERT__(releaseNotifier_ == nullptr);
        releaseNotifier_ = new(std::nothrow) MethodReleaseNotifier<T>(object, method, true);
        if (releaseNotifier_ == nullptr)
        {
            return E_OUTOFMEMORY;
        }
        return S_OK;
    }
public:
    virtual ~OutOfProcModuleBase() throw()
    {
        if (releaseNotifier_ != nullptr)
        {
            releaseNotifier_->Release();
            releaseNotifier_ = nullptr;
        }
    }
    static ModuleT& Create() throw()
    {
        static ModuleT moduleSingleton;
        return moduleSingleton;
    }
    template<typename T>
    static ModuleT& Create(T callback) throw()
    {
        auto &moduleRef = Create();
        static char callbackBuffer[sizeof(GenericReleaseNotifier<T>)];
        __WRL_ASSERT__(moduleRef.releaseNotifier_ == nullptr);
        if (moduleRef.releaseNotifier_ == nullptr)
        {
            moduleRef.releaseNotifier_ = new (&callbackBuffer) GenericReleaseNotifier<T>(callback, false);
        }
        return moduleRef;
    }
    template<typename T>
    static ModuleT& Create(_In_ T* object, _In_ void (T::* method)()) throw()
    {
        auto &moduleRef = Create();
        static char callbackBuffer[sizeof(MethodReleaseNotifier<T>)];
        __WRL_ASSERT__(moduleRef.releaseNotifier_ == nullptr);
        if (moduleRef.releaseNotifier_ == nullptr)
        {
            moduleRef.releaseNotifier_ = new (&callbackBuffer) MethodReleaseNotifier<T>(object, method, false);
        }
        return moduleRef;
    }
    static ModuleT& GetModule() throw()
    {
        auto &moduleRef = Create();
        return moduleRef;
    }
};
}
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP) && !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
namespace Details
{
class __declspec(uuid("4EDB8EE2-96DD-49A7-94F7-4607DDAB8E3C")) __declspec(novtable) IGetActivationFactoryAbiType : public IInspectable
{
public:
    virtual HRESULT STDMETHODCALLTYPE GetActivationFactory(
                   __RPC__in HSTRING activatableClassId,
                            __RPC__deref_out_opt IInspectable **factory) = 0;
};
class __declspec(uuid("518DC408-C077-475B-809E-0BC0C57E4B74")) __declspec(novtable) ICoreApplicationUseCountAbiType : public IInspectable
{
public:
    virtual HRESULT STDMETHODCALLTYPE IncrementApplicationUseCount(void) = 0;
    virtual HRESULT STDMETHODCALLTYPE DecrementApplicationUseCount(void) = 0;
};
class __declspec(uuid("0AACF7A4-5E1D-49DF-8034-FB6A68BC5ED1")) __declspec(novtable) ICoreApplicationAbiType : public IInspectable
{
public:
    virtual HRESULT STDMETHODCALLTYPE Reserved1() = 0;
    virtual HRESULT STDMETHODCALLTYPE Reserved2() = 0;
    virtual HRESULT STDMETHODCALLTYPE Reserved3() = 0;
    virtual HRESULT STDMETHODCALLTYPE Reserved4() = 0;
    virtual HRESULT STDMETHODCALLTYPE Reserved5() = 0;
    virtual HRESULT STDMETHODCALLTYPE Reserved6() = 0;
    virtual HRESULT STDMETHODCALLTYPE Reserved7() = 0;
    virtual HRESULT STDMETHODCALLTYPE Reserved8() = 0;
    virtual HRESULT STDMETHODCALLTYPE RunWithActivationFactories(
                   __RPC__in_opt IGetActivationFactoryAbiType *activationFactoryCallback) = 0;
};
class ActivationHelper :
    public ::Microsoft::WRL::RuntimeClass<
              ::Microsoft::WRL::RuntimeClassFlags< ::Microsoft::WRL::InhibitWeakReference | ::Microsoft::WRL::WinRt>,
              IGetActivationFactoryAbiType, FtmBase>
{
    InspectableClass(nullptr, BaseTrust)
public:
    STDMETHOD(GetActivationFactory)(_In_ HSTRING activationId, _COM_Outptr_ IInspectable **factory)
    {
        auto modulePtr = ::Microsoft::WRL::GetModuleBase();
        __WRL_ASSERT__(modulePtr != nullptr);
        return ::Microsoft::WRL::Details::GetActivationFactory<InProcDisableCaching>(modulePtr, nullptr, activationId, reinterpret_cast< ::IActivationFactory**>(factory));
    }
};
}
template<typename ModuleT>
class Module<OutOfProc, ModuleT> :
    public Details::OutOfProcModuleBase<ModuleT>
{
private:
    using Super = Details::OutOfProcModuleBase<ModuleT>;
    ::Microsoft::WRL::ComPtr< Details::ICoreApplicationUseCountAbiType> count_;
protected:
    Module() throw()
    {
    }
public:
    STDMETHOD_(unsigned long, IncrementObjectCount)()
    {
        if (count_ != nullptr)
        {
            count_->IncrementApplicationUseCount();
            return Super::IncrementObjectCount();
        }
        return 0;
    }
    STDMETHOD_(unsigned long, DecrementObjectCount)()
    {
        unsigned long ref = 0;
        if (count_ != nullptr)
        {
            count_->DecrementApplicationUseCount();
            ref = Super::DecrementObjectCount();
            if (ref == 0)
            {
                Super::releaseNotifier_->Invoke();
            }
        }
        return ref;
    }
    HRESULT RegisterObjects(_In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        ComPtr< Details::IGetActivationFactoryAbiType> getActivationFactory;
        ComPtr< Details::ICoreApplicationAbiType> coreApplication;
        HRESULT hr = MakeAndInitialize< Details::ActivationHelper>(getActivationFactory.GetAddressOf());
        if (FAILED(hr))
        {
            return hr;
        }
        hr = ::Windows::Foundation::GetActivationFactory(
            Wrappers::HStringReference(L"Windows.ApplicationModel.Core.CoreApplication").Get(),
                coreApplication.GetAddressOf());
        if (FAILED(hr))
        {
            return hr;
        }
        hr = coreApplication.As(&count_);
        if (FAILED(hr))
        {
            return hr;
        }
        hr = coreApplication->RunWithActivationFactories(getActivationFactory.Get());
        count_ = nullptr;
        return hr;
    }
    HRESULT UnregisterObjects(_In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        return S_OK;
    }
};
#else
template<typename ModuleT>
class Module<OutOfProc, ModuleT> :
    public Details::OutOfProcModuleBase<ModuleT>
{
public:
    STDMETHOD(RegisterCOMObject)(_In_opt_z_ const wchar_t* serverName, _In_reads_(count) IID* clsids, _In_reads_(count) IClassFactory** factories, _Inout_updates_(count) DWORD* cookies, unsigned int count)
    {
        return Details::RegisterCOMObject<REGCLS_MULTIPLEUSE>(serverName, clsids, factories, cookies, count);
    }
    STDMETHOD(UnregisterCOMObject)(_In_opt_z_ const wchar_t*, _Inout_updates_(count) DWORD* cookies, unsigned int count)
    {
        HRESULT hr = S_OK;
        for (unsigned int i = 0 ; i < count && SUCCEEDED(hr); i++)
        {
            if (cookies[i] != 0)
            {
                hr = ::CoRevokeClassObject(cookies[i]);
                if (SUCCEEDED(hr))
                {
                    cookies[i] = 0;
                }
            }
        }
        return hr;
    }
    STDMETHOD(RegisterWinRTObject)(_In_opt_z_ const wchar_t* serverName, _In_reads_(count) _Deref_pre_z_ const wchar_t** activatableClassIds, _Inout_ RO_REGISTRATION_COOKIE* cookie, unsigned int count)
    {
        return Details::RegisterWinRTObject<OutOfProc>(serverName, activatableClassIds, cookie, count);
    }
    STDMETHOD(UnregisterWinRTObject)(_In_opt_z_ const wchar_t*, _In_ RO_REGISTRATION_COOKIE cookie)
    {
        ::Windows::Foundation::RevokeActivationFactories(cookie);
        return S_OK;
    }
    HRESULT RegisterObjects(_In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        return Details::RegisterObjects<OutOfProc>(this, serverName);
    }
    HRESULT UnregisterObjects(_In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
       return Details::UnregisterObjects(this, serverName);
    }
    STDMETHOD_(unsigned long, IncrementObjectCount)()
    {
        return ::CoAddRefServerProcess();
    }
    STDMETHOD_(unsigned long, DecrementObjectCount)()
    {
        auto ref = ::CoReleaseServerProcess();
        if (ref == 0)
        {
            __super::releaseNotifier_->Invoke();
        }
        return ref;
    }
};
#pragma warning(push)
#pragma warning(disable: 6388)
template<typename ModuleT>
class Module<OutOfProcDisableCaching, ModuleT> :
    public Module<OutOfProc, ModuleT>
{
public:
 HRESULT GetActivationFactory(_In_opt_ HSTRING activatibleClassId, _COM_Outptr_ IActivationFactory **ppIFactory, _In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        return Details::GetActivationFactory<InProcDisableCaching>(this, serverName, activatibleClassId, ppIFactory);
    }
    HRESULT GetClassObject(REFCLSID clsid, REFIID riid, _Outptr_result_nullonfailure_ void **ppv, _In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        return Details::GetClassObject<InProcDisableCaching>(this, serverName, clsid, riid, ppv);
    }
    HRESULT RegisterObjects(_In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        return Details::RegisterObjects<OutOfProcDisableCaching>(this, serverName);
    }
    STDMETHOD(RegisterWinRTObject)(_In_opt_z_ const wchar_t* serverName, _In_reads_(count) _Deref_pre_z_ const wchar_t** activatableClassIds, _Inout_updates_(count) RO_REGISTRATION_COOKIE* cookies, unsigned int count)
    {
        return Details::RegisterWinRTObject<OutOfProcDisableCaching>(serverName, activatableClassIds, cookies, count);
    }
};
#pragma warning(pop)
#endif
namespace Details
{
template <ModuleType moduleType>
class DefaultModule :
    public Module<moduleType, DefaultModule<moduleType>>
{
};
}
}}
#include <poppack.h>
