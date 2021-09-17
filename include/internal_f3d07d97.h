       
#include <ntassert.h>
#include <windows.h>
namespace Microsoft {
namespace WRL {
namespace Details {
    struct BoolStruct
    {
        int Member;
    };
    typedef int BoolStruct::* BoolType;
    inline void __declspec(noreturn) RaiseException(HRESULT hr, DWORD dwExceptionFlags = EXCEPTION_NONCONTINUABLE) throw()
    {
        ::RaiseException(static_cast<DWORD>(hr), dwExceptionFlags, 0, NULL);
    }
    template <class From, class To>
    struct IsConvertible
    {
        static const bool value = __is_convertible_to(From, To);
    };
    template <bool b, typename T = void>
    struct EnableIf
    {
    };
    template <typename T>
    struct EnableIf<true, T>
    {
        typedef T type;
    };
    template <typename T1, typename T2>
    struct IsSame
    {
        static const bool value = false;
    };
    template <typename T1>
    struct IsSame<T1, T1>
    {
        static const bool value = true;
    };
    template<class T>
    struct RemoveReference
    {
        typedef T Type;
    };
    template<class T>
    struct RemoveReference<T&>
    {
        typedef T Type;
    };
    template<class T>
    struct RemoveReference<T&&>
    {
        typedef T Type;
    };
    template<class T>
    inline typename RemoveReference<T>::Type&& Move(_Inout_ T&& arg) throw()
    {
        return ((typename RemoveReference<T>::Type&&)arg);
    }
    template<class T>
    inline void Swap(_Inout_ T& left, _Inout_ T& right) throw()
    {
        T tmp = Move(left);
        left = Move(right);
        right = Move(tmp);
    }
    template<class T>
    struct Identity
    {
        typedef T Type;
    };
    template<class T>
    inline T&& Forward(typename Identity<T>::Type& arg) throw()
    {
        return (T&&)arg;
    }
    template <typename Base, typename Derived>
    struct IsBaseOfStrict
    {
        static const bool value = __is_base_of(Base, Derived);
    };
    template <typename Base>
    struct IsBaseOfStrict<Base, Base>
    {
        static const bool value = false;
    };
}}}
