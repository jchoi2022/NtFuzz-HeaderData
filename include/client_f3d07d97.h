       
#pragma region includes
#include <stddef.h>
#include <unknwn.h>
#include <weakreference.h>
#include <roapi.h>
#include <winrt.h>
#include <wrl\def.h>
#include <wrl\internal.h>
#include <pshpack8.h>
#pragma endregion
#pragma warning(push)
#pragma warning(disable: 4510)
#pragma warning(disable: 4610)
#pragma warning(disable: 4624)
namespace Microsoft {
namespace WRL {
namespace Details
{
template <typename T>
class ComPtrRefBase
{
public:
    typedef typename T::InterfaceType InterfaceType;
    operator IInspectable**() const throw()
    {
        static_assert(__is_base_of(IInspectable, InterfaceType), "Invalid cast: InterfaceType does not derive from IInspectable");
        return reinterpret_cast<IInspectable**>(ptr_->ReleaseAndGetAddressOf());
    }
    operator IUnknown**() const throw()
    {
        static_assert(__is_base_of(IUnknown, InterfaceType), "Invalid cast: InterfaceType does not derive from IUnknown");
        return reinterpret_cast<IUnknown**>(ptr_->ReleaseAndGetAddressOf());
    }
protected:
    T* ptr_;
};
template <typename T>
class ComPtrRef : public Details::ComPtrRefBase<T>
{
    using Super = Details::ComPtrRefBase<T>;
    using InterfaceType = typename Super::InterfaceType;
public:
    ComPtrRef(_In_opt_ T* ptr) throw()
    {
         this->ptr_ = ptr;
    }
    operator void**() const throw()
    {
        return reinterpret_cast<void**>(this->ptr_->ReleaseAndGetAddressOf());
    }
    operator T*() throw()
    {
        *this->ptr_ = nullptr;
        return this->ptr_;
    }
    operator InterfaceType**() throw()
    {
        return this->ptr_->ReleaseAndGetAddressOf();
    }
    InterfaceType* operator *() throw()
    {
        return this->ptr_->Get();
    }
    InterfaceType* const * GetAddressOf() const throw()
    {
        return this->ptr_->GetAddressOf();
    }
    InterfaceType** ReleaseAndGetAddressOf() throw()
    {
        return this->ptr_->ReleaseAndGetAddressOf();
    }
};
}
class WeakRef;
class AgileRef;
template<typename T>
HRESULT AsAgile(_In_ T* p, _Out_ AgileRef* pAgile) throw();
template<typename T>
HRESULT AsWeak(_In_ T* p, _Out_ WeakRef* pWeak) throw();
template <typename T>
class ComPtr
{
public:
    typedef T InterfaceType;
protected:
    InterfaceType *ptr_;
    template<class U> friend class ComPtr;
    void InternalAddRef() const throw()
    {
        if (ptr_ != nullptr)
        {
            ptr_->AddRef();
        }
    }
    unsigned long InternalRelease() throw()
    {
        unsigned long ref = 0;
        T* temp = ptr_;
        if (temp != nullptr)
        {
            ptr_ = nullptr;
            ref = temp->Release();
        }
        return ref;
    }
public:
#pragma region constructors
    ComPtr() throw() : ptr_(nullptr)
    {
    }
    ComPtr(decltype(__nullptr)) throw() : ptr_(nullptr)
    {
    }
    template<class U>
    ComPtr(_In_opt_ U *other) throw() : ptr_(other)
    {
        InternalAddRef();
    }
    ComPtr(const ComPtr& other) throw() : ptr_(other.ptr_)
    {
        InternalAddRef();
    }
    template<class U>
    ComPtr(const ComPtr<U> &other, typename Details::EnableIf<Details::IsConvertible<U*, T*>::value, void *>::type * = 0) throw() :
        ptr_(other.ptr_)
    {
        InternalAddRef();
    }
    ComPtr(_Inout_ ComPtr &&other) throw() : ptr_(nullptr)
    {
        if (this != reinterpret_cast<ComPtr*>(&reinterpret_cast<unsigned char&>(other)))
        {
            Swap(other);
        }
    }
    template<class U>
    ComPtr(_Inout_ ComPtr<U>&& other, typename Details::EnableIf<Details::IsConvertible<U*, T*>::value, void *>::type * = 0) throw() :
        ptr_(other.ptr_)
    {
        other.ptr_ = nullptr;
    }
#pragma endregion
#pragma region destructor
    ~ComPtr() throw()
    {
        InternalRelease();
    }
#pragma endregion
#pragma region assignment
    ComPtr& operator=(decltype(__nullptr)) throw()
    {
        InternalRelease();
        return *this;
    }
    ComPtr& operator=(_In_opt_ T *other) throw()
    {
        if (ptr_ != other)
        {
            ComPtr(other).Swap(*this);
        }
        return *this;
    }
    template <typename U>
    ComPtr& operator=(_In_opt_ U *other) throw()
    {
        ComPtr(other).Swap(*this);
        return *this;
    }
    ComPtr& operator=(const ComPtr &other) throw()
    {
        if (ptr_ != other.ptr_)
        {
            ComPtr(other).Swap(*this);
        }
        return *this;
    }
    template<class U>
    ComPtr& operator=(const ComPtr<U>& other) throw()
    {
        ComPtr(other).Swap(*this);
        return *this;
    }
    ComPtr& operator=(_Inout_ ComPtr &&other) throw()
    {
        ComPtr(static_cast<ComPtr&&>(other)).Swap(*this);
        return *this;
    }
    template<class U>
    ComPtr& operator=(_Inout_ ComPtr<U>&& other) throw()
    {
        ComPtr(static_cast<ComPtr<U>&&>(other)).Swap(*this);
        return *this;
    }
#pragma endregion
#pragma region modifiers
    void Swap(_Inout_ ComPtr&& r) throw()
    {
        T* tmp = ptr_;
        ptr_ = r.ptr_;
        r.ptr_ = tmp;
    }
    void Swap(_Inout_ ComPtr& r) throw()
    {
        T* tmp = ptr_;
        ptr_ = r.ptr_;
        r.ptr_ = tmp;
    }
#pragma endregion
    operator Details::BoolType() const throw()
    {
        return Get() != nullptr ? &Details::BoolStruct::Member : nullptr;
    }
    T* Get() const throw()
    {
        return ptr_;
    }
    InterfaceType* operator->() const throw()
    {
        return ptr_;
    }
    Details::ComPtrRef<ComPtr<T>> operator&() throw()
    {
        return Details::ComPtrRef<ComPtr<T>>(this);
    }
    const Details::ComPtrRef<const ComPtr<T>> operator&() const throw()
    {
        return Details::ComPtrRef<const ComPtr<T>>(this);
    }
    T* const* GetAddressOf() const throw()
    {
        return &ptr_;
    }
    T** GetAddressOf() throw()
    {
        return &ptr_;
    }
    T** ReleaseAndGetAddressOf() throw()
    {
        InternalRelease();
        return &ptr_;
    }
    T* Detach() throw()
    {
        T* ptr = ptr_;
        ptr_ = nullptr;
        return ptr;
    }
    void Attach(_In_opt_ InterfaceType* other) throw()
    {
        if (ptr_ != nullptr)
        {
            auto ref = ptr_->Release();
            DBG_UNREFERENCED_LOCAL_VARIABLE(ref);
            __WRL_ASSERT__(ref != 0 || ptr_ != other);
        }
        ptr_ = other;
    }
    unsigned long Reset()
    {
        return InternalRelease();
    }
    template <typename U>
    HRESULT CopyTo(Details::ComPtrRef<ComPtr<U>> ptr, typename Details::EnableIf<
      ((Details::IsSame<T, IInspectable>::value && !Details::IsSame<U, IUnknown>::value) || (Details::IsSame<T, IUnknown>::value))
      && !Details::IsSame<U*, T*>::value, void *>::type * = 0) const throw()
    {
        return ptr_->QueryInterface(__uuidof(U), ptr);
    }
    HRESULT CopyTo(_Outptr_result_maybenull_ InterfaceType** ptr) const throw()
    {
        InternalAddRef();
        *ptr = ptr_;
        return S_OK;
    }
    HRESULT CopyTo(REFIID riid, _Outptr_result_nullonfailure_ void** ptr) const throw()
    {
        return ptr_->QueryInterface(riid, ptr);
    }
    template<typename U>
    HRESULT CopyTo(_Outptr_result_nullonfailure_ U** ptr) const throw()
    {
        return ptr_->QueryInterface(__uuidof(U), reinterpret_cast<void**>(ptr));
    }
    template<typename U>
    HRESULT As(_Inout_ Details::ComPtrRef<ComPtr<U>> p) const throw()
    {
        return ptr_->QueryInterface(__uuidof(U), p);
    }
    template<typename U>
    HRESULT As(_Out_ ComPtr<U>* p) const throw()
    {
        return ptr_->QueryInterface(__uuidof(U), reinterpret_cast<void**>(p->ReleaseAndGetAddressOf()));
    }
    HRESULT AsIID(REFIID riid, _Out_ ComPtr<IUnknown>* p) const throw()
    {
        return ptr_->QueryInterface(riid, reinterpret_cast<void**>(p->ReleaseAndGetAddressOf()));
    }
    HRESULT AsWeak(_Out_ WeakRef* pWeakRef) const throw()
    {
        return ::Microsoft::WRL::AsWeak(ptr_, pWeakRef);
    }
    HRESULT AsAgile(_Out_ AgileRef* pAgile) const throw()
    {
        return ::Microsoft::WRL::AsAgile(ptr_, pAgile);
    }
};
class WeakRef : public ComPtr<IWeakReference>
{
private:
    void operator->();
protected:
    HRESULT InternalResolve(REFIID riid, _Outptr_result_maybenull_ IInspectable** inspectable) const throw()
    {
        *inspectable = nullptr;
        if (ptr_ == nullptr)
        {
            return S_OK;
        }
        return ptr_->Resolve(riid, inspectable);
    }
public:
    Details::ComPtrRef<WeakRef> operator&() throw()
    {
        return Details::ComPtrRef<WeakRef>(this);
    }
    const Details::ComPtrRef<const WeakRef> operator&() const throw()
    {
        return Details::ComPtrRef<const WeakRef>(this);
    }
    WeakRef() throw() : ComPtr(nullptr)
    {
    }
    WeakRef(decltype(__nullptr)) throw() : ComPtr(nullptr)
    {
    }
    WeakRef(_In_opt_ IWeakReference* ptr) throw() : ComPtr(ptr)
    {
    }
    WeakRef(const ComPtr<IWeakReference>& ptr) throw() : ComPtr(ptr)
    {
    }
    WeakRef(const WeakRef& ptr) throw() : ComPtr(ptr)
    {
    }
    WeakRef(_Inout_ WeakRef&& ptr) throw() : ComPtr(static_cast<ComPtr<IWeakReference>&&>(ptr))
    {
    }
    ~WeakRef() throw()
    {
    }
    template<typename U>
    HRESULT As(_Inout_ Details::ComPtrRef<ComPtr<U>> ptr) const throw()
    {
        static_assert(!Details::IsSame<IWeakReference, U>::value, "IWeakReference cannot resolve IWeakReference object.");
        static_assert(__is_base_of(IInspectable, U), "WeakRef::As() can only be used on types derived from IInspectable");
        return InternalResolve(__uuidof(U), ptr);
    }
    template<typename U>
    HRESULT As(_Out_ ComPtr<U>* ptr) const throw()
    {
        static_assert(!Details::IsSame<IWeakReference, U>::value, "IWeakReference cannot resolve IWeakReference object.");
        static_assert(__is_base_of(IInspectable, U), "WeakRef::As() can only be used on types derived from IInspectable");
        return InternalResolve(__uuidof(U), ptr->ReleaseAndGetAddressOf());
    }
    HRESULT AsIID(REFIID riid, _Out_ ComPtr<IInspectable>* ptr) const throw()
    {
        __WRL_ASSERT__(riid != __uuidof(IWeakReference));
        return InternalResolve(riid, ptr->ReleaseAndGetAddressOf());
    }
    HRESULT CopyTo(REFIID riid, _Outptr_result_maybenull_ IInspectable** ptr) const throw()
    {
        __WRL_ASSERT__(riid != __uuidof(IWeakReference));
        return InternalResolve(riid, ptr);
    }
    template<typename U>
    HRESULT CopyTo(_Outptr_result_maybenull_ U** ptr) const throw()
    {
        static_assert(__is_base_of(IInspectable, U), "WeakRef::CopyTo() can only be used on types derived from IInspectable");
        return InternalResolve(__uuidof(U), reinterpret_cast<IInspectable**>(ptr));
    }
    HRESULT CopyTo(_Outptr_result_maybenull_ IWeakReference** ptr) const throw()
    {
        InternalAddRef();
        *ptr = ptr_;
        return S_OK;
    }
    WeakRef& operator=(_In_ const WeakRef &other) throw()
    {
        ComPtr::operator=(static_cast<const ComPtr&>(other));
        return *this;
    }
    WeakRef& operator=(_Inout_ WeakRef &&other) throw()
    {
        ComPtr::operator=(static_cast<ComPtr&&>(other));
        return *this;
    }
};
template<typename T>
HRESULT AsWeak(_In_ T* p, _Out_ WeakRef* pWeak) throw()
{
    static_assert(!Details::IsSame<IWeakReference,T>::value, "Cannot get IWeakReference object to IWeakReference.");
    ComPtr<IWeakReferenceSource> refSource;
    HRESULT hr = p->QueryInterface(IID_PPV_ARGS(refSource.GetAddressOf()));
    if (FAILED(hr))
    {
        return hr;
    }
    ComPtr<IWeakReference> weakref;
    hr = refSource->GetWeakReference(weakref.GetAddressOf());
    if (FAILED(hr))
    {
        return hr;
    }
    *pWeak = WeakRef(weakref);
    return S_OK;
}
class AgileRef : public ComPtr<IAgileReference>
{
protected:
    HRESULT InternalResolve(REFIID riid, _Outptr_result_maybenull_ void** ptr) const
    {
        *ptr = nullptr;
        if (ptr_ == nullptr)
        {
            return S_OK;
        }
        return ptr_->Resolve(riid, ptr);
    }
public:
    Details::ComPtrRef<AgileRef> operator&() throw()
    {
        return Details::ComPtrRef<AgileRef>(this);
    }
    const Details::ComPtrRef<const AgileRef> operator&() const throw()
    {
        return Details::ComPtrRef<const AgileRef>(this);
    }
    AgileRef() throw() : ComPtr(nullptr)
    {
    }
    AgileRef(decltype(__nullptr)) throw() : ComPtr(nullptr)
    {
    }
    AgileRef(_In_opt_ IAgileReference* ptr) throw() : ComPtr(ptr)
    {
    }
    AgileRef(const ComPtr<IAgileReference>& ptr) throw() : ComPtr(ptr)
    {
    }
    AgileRef(const AgileRef& ptr) throw() : ComPtr(ptr)
    {
    }
    AgileRef(_Inout_ AgileRef&& ptr) throw() : ComPtr(static_cast<ComPtr<IAgileReference>&&>(ptr))
    {
    }
    ~AgileRef() throw()
    {
    }
    template<typename U>
    HRESULT As(_Inout_ Details::ComPtrRef<ComPtr<U>> ptr) const throw()
    {
        static_assert(!Details::IsSame<IAgileReference, U>::value, "IAgileReference cannot resolve IAgileReference object.");
        static_assert(__is_base_of(IUnknown, U), "AgileRef::As() can only be used on types derived from IUnknown");
        return InternalResolve(__uuidof(U), ptr);
    }
    template<typename U>
    HRESULT As(_Out_ ComPtr<U>* ptr) const throw()
    {
        static_assert(!Details::IsSame<IAgileReference, U>::value, "IAgileReference cannot resolve IAgileReference object.");
        static_assert(__is_base_of(IUnknown, U), "AgileRef::As() can only be used on types derived from IUnknown");
        return InternalResolve(__uuidof(U), reinterpret_cast<void**>(ptr->ReleaseAndGetAddressOf()));
    }
    HRESULT AsIID(REFIID riid, _Out_ ComPtr<IUnknown>* ptr) const throw()
    {
        __WRL_ASSERT__(riid != __uuidof(IAgileReference));
        return InternalResolve(riid, reinterpret_cast<void**>(ptr->ReleaseAndGetAddressOf()));
    }
    HRESULT CopyTo(REFIID riid, _Outptr_result_maybenull_ IUnknown** ptr) const throw()
    {
        __WRL_ASSERT__(riid != __uuidof(IAgileReference));
        return InternalResolve(riid, reinterpret_cast<void**>(ptr));
    }
    template<typename U>
    HRESULT CopyTo(_Outptr_result_maybenull_ U** ptr) const throw()
    {
        static_assert(__is_base_of(IUnknown, U), "AgileRef::As() can only be used on types derived from IUnknown");
        return InternalResolve(__uuidof(U), reinterpret_cast<void**>(ptr));
    }
    HRESULT CopyTo(_Outptr_result_maybenull_ IAgileReference** ptr) const throw()
    {
        InternalAddRef();
        *ptr = ptr_;
        return S_OK;
    }
    AgileRef& operator=(_In_ const AgileRef &other) throw()
    {
        ComPtr::operator=(static_cast<const ComPtr&>(other));
        return *this;
    }
    AgileRef& operator=(_Inout_ AgileRef &&other) throw()
    {
        ComPtr::operator=(static_cast<ComPtr&&>(other));
        return *this;
    }
    void operator->() = delete;
};
template<typename T>
HRESULT AsAgile(_In_opt_ T* p, _Inout_ Microsoft::WRL::AgileRef* pAgile) throw()
{
    static_assert(!Details::IsSame<IAgileReference, T>::value, "Cannot get IAgileReference object to IAgileReference.");
    HRESULT hr = S_OK;
    if (p)
    {
        hr = RoGetAgileReference(AGILEREFERENCE_DEFAULT, __uuidof(T), p, pAgile->ReleaseAndGetAddressOf());
    }
    else
    {
        *pAgile = nullptr;
    }
    return hr;
}
template<class T, class U>
bool operator==(const ComPtr<T>& a, const ComPtr<U>& b) throw()
{
    static_assert(__is_base_of(T, U) || __is_base_of(U, T), "'T' and 'U' pointers must be comparable");
    return a.Get() == b.Get();
}
template<class T>
bool operator==(const ComPtr<T>& a, decltype(__nullptr)) throw()
{
    return a.Get() == nullptr;
}
template<class T>
bool operator==(decltype(__nullptr), const ComPtr<T>& a) throw()
{
    return a.Get() == nullptr;
}
template<class T, class U>
bool operator!=(const ComPtr<T>& a, const ComPtr<U>& b) throw()
{
    static_assert(__is_base_of(T, U) || __is_base_of(U, T), "'T' and 'U' pointers must be comparable");
    return a.Get() != b.Get();
}
template<class T>
bool operator!=(const ComPtr<T>& a, decltype(__nullptr)) throw()
{
    return a.Get() != nullptr;
}
template<class T>
bool operator!=(decltype(__nullptr), const ComPtr<T>& a) throw()
{
    return a.Get() != nullptr;
}
template<class T, class U>
bool operator<(const ComPtr<T>& a, const ComPtr<U>& b) throw()
{
    static_assert(__is_base_of(T, U) || __is_base_of(U, T), "'T' and 'U' pointers must be comparable");
    return a.Get() < b.Get();
}
template<class T, class U>
bool operator==(const Details::ComPtrRef<ComPtr<T>>& a, const Details::ComPtrRef<ComPtr<U>>& b) throw()
{
    static_assert(__is_base_of(T, U) || __is_base_of(U, T), "'T' and 'U' pointers must be comparable");
    return a.GetAddressOf() == b.GetAddressOf();
}
template<class T>
bool operator==(const Details::ComPtrRef<ComPtr<T>>& a, decltype(__nullptr)) throw()
{
    return a.GetAddressOf() == nullptr;
}
template<class T>
bool operator==(decltype(__nullptr), const Details::ComPtrRef<ComPtr<T>>& a) throw()
{
    return a.GetAddressOf() == nullptr;
}
template<class T>
bool operator==(const Details::ComPtrRef<ComPtr<T>>& a, void* b) throw()
{
    return a.GetAddressOf() == b;
}
template<class T>
bool operator==(void* b, const Details::ComPtrRef<ComPtr<T>>& a) throw()
{
    return a.GetAddressOf() == b;
}
template<class T, class U>
bool operator!=(const Details::ComPtrRef<ComPtr<T>>& a, const Details::ComPtrRef<ComPtr<U>>& b) throw()
{
    static_assert(__is_base_of(T, U) || __is_base_of(U, T), "'T' and 'U' pointers must be comparable");
    return a.GetAddressOf() != b.GetAddressOf();
}
template<class T>
bool operator!=(const Details::ComPtrRef<ComPtr<T>>& a, decltype(__nullptr)) throw()
{
    return a.GetAddressOf() != nullptr;
}
template<class T>
bool operator!=(decltype(__nullptr), const Details::ComPtrRef<ComPtr<T>>& a) throw()
{
    return a.GetAddressOf() != nullptr;
}
template<class T>
bool operator!=(const Details::ComPtrRef<ComPtr<T>>& a, void* b) throw()
{
    return a.GetAddressOf() != b;
}
template<class T>
bool operator!=(void* b, const Details::ComPtrRef<ComPtr<T>>& a) throw()
{
    return a.GetAddressOf() != b;
}
template<class T, class U>
bool operator<(const Details::ComPtrRef<ComPtr<T>>& a, const Details::ComPtrRef<ComPtr<U>>& b) throw()
{
    static_assert(__is_base_of(T, U) || __is_base_of(U, T), "'T' and 'U' pointers must be comparable");
    return a.GetAddressOf() < b.GetAddressOf();
}
}}
template<typename T>
void** IID_PPV_ARGS_Helper(_Inout_ ::Microsoft::WRL::Details::ComPtrRef<T> pp) throw()
{
    static_assert(__is_base_of(IUnknown, typename T::InterfaceType), "T has to derive from IUnknown");
    return pp;
}
template<typename T>
void** IID_INS_ARGS_Helper(_Inout_ ::Microsoft::WRL::Details::ComPtrRef<T> pp) throw()
{
    static_assert(__is_base_of(IInspectable, typename T::InterfaceType), "T has to derive from IInspectable");
    return pp;
}
namespace Windows
{
    namespace Foundation
    {
        template<typename T>
        inline HRESULT ActivateInstance(
            _In_ HSTRING activatableClassId,
            _Inout_ ::Microsoft::WRL::Details::ComPtrRef<T> instance) throw()
        {
            return ActivateInstance(activatableClassId, instance.ReleaseAndGetAddressOf());
        }
        template<typename T>
        inline HRESULT GetActivationFactory(
            _In_ HSTRING activatableClassId,
            _Inout_ ::Microsoft::WRL::Details::ComPtrRef<T> factory) throw()
        {
            return GetActivationFactory(activatableClassId, factory.ReleaseAndGetAddressOf());
        }
    }
}
namespace ABI
{
    namespace Windows
    {
        namespace Foundation
        {
            template<typename T>
            inline HRESULT ActivateInstance(
                _In_ HSTRING activatableClassId,
                _Inout_ ::Microsoft::WRL::Details::ComPtrRef<T> instance) throw()
            {
                return ActivateInstance(activatableClassId, instance.ReleaseAndGetAddressOf());
            }
            template<typename T>
            inline HRESULT GetActivationFactory(
                _In_ HSTRING activatableClassId,
                _Inout_ ::Microsoft::WRL::Details::ComPtrRef<T> factory) throw()
            {
                return GetActivationFactory(activatableClassId, factory.ReleaseAndGetAddressOf());
            }
        }
    }
}
#pragma warning(pop)
#include <poppack.h>
