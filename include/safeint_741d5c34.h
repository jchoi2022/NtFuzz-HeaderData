       
#include <corecrt.h>
#include <crtdbg.h>
#pragma pack(push, _CRT_PACKING)
namespace msl
{
namespace utilities
{
enum SafeIntError
{
    SafeIntNoError = 0,
    SafeIntArithmeticOverflow,
    SafeIntDivideByZero
};
}
}
#include "safeint_internal.h"
namespace msl
{
namespace utilities
{
class SafeIntException
{
public:
    SafeIntException() { m_code = SafeIntNoError; }
    SafeIntException( SafeIntError code )
    {
        m_code = code;
    }
    SafeIntError m_code;
};
struct SafeIntErrorPolicy_SafeIntException
{
    static __declspec(noreturn) void SafeIntOnOverflow()
    {
        _SAFEINT_EXCEPTION_ASSERT();
        throw SafeIntException( SafeIntArithmeticOverflow );
    }
    static __declspec(noreturn) void SafeIntOnDivZero()
    {
        _SAFEINT_EXCEPTION_ASSERT();
        throw SafeIntException( SafeIntDivideByZero );
    }
};
struct SafeIntErrorPolicy_InvalidParameter
{
    static __declspec(noreturn) void SafeIntOnOverflow()
    {
        _SAFEINT_EXCEPTION_ASSERT();
        _CRT_SECURE_INVALID_PARAMETER("SafeInt Arithmetic Overflow");
    }
    static __declspec(noreturn) void SafeIntOnDivZero()
    {
        _SAFEINT_EXCEPTION_ASSERT();
        _CRT_SECURE_INVALID_PARAMETER("SafeInt Divide By Zero");
    }
};
template < typename T, typename U >
inline bool SafeCast( const T From, U& To ) throw()
{
    return (details::SafeCastHelper< U, T,
        details::SafeIntErrorPolicy_NoThrow >::Cast( From, To ) == SafeIntNoError);
}
template < typename T, typename U >
inline bool SafeEquals( const T t, const U u ) throw()
{
    return details::EqualityTest< T, U >::IsEquals( t, u );
}
template < typename T, typename U >
inline bool SafeNotEquals( const T t, const U u ) throw()
{
    return !details::EqualityTest< T, U >::IsEquals( t, u );
}
template < typename T, typename U >
inline bool SafeGreaterThan( const T t, const U u ) throw()
{
    return details::GreaterThanTest< T, U >::GreaterThan( t, u );
}
template < typename T, typename U >
inline bool SafeGreaterThanEquals( const T t, const U u ) throw()
{
    return !details::GreaterThanTest< U, T >::GreaterThan( u, t );
}
template < typename T, typename U >
inline bool SafeLessThan( const T t, const U u ) throw()
{
    return details::GreaterThanTest< U, T >::GreaterThan( u, t );
}
template < typename T, typename U >
inline bool SafeLessThanEquals( const T t, const U u ) throw()
{
    return !details::GreaterThanTest< T, U >::GreaterThan( t, u );
}
template < typename T, typename U >
inline bool SafeModulus( const T& t, const U& u, T& result ) throw()
{
    return ( details::ModulusHelper< T, U, details::SafeIntErrorPolicy_NoThrow >::Modulus( t, u, result ) == SafeIntNoError );
}
template < typename T, typename U >
inline bool SafeMultiply( T t, U u, T& result ) throw()
{
    return ( details::MultiplicationHelper< T, U,
        details::SafeIntErrorPolicy_NoThrow >::Multiply( t, u, result ) == SafeIntNoError );
}
template < typename T, typename U >
inline bool SafeDivide( T t, U u, T& result ) throw()
{
    return ( details::DivisionHelper< T, U,
        details::SafeIntErrorPolicy_NoThrow >::Divide( t, u, result ) == SafeIntNoError );
}
template < typename T, typename U >
inline bool SafeAdd( T t, U u, T& result ) throw()
{
    return ( details::AdditionHelper< T, U,
        details::SafeIntErrorPolicy_NoThrow >::Addition( t, u, result ) == SafeIntNoError );
}
template < typename T, typename U >
inline bool SafeSubtract( T t, U u, T& result ) throw()
{
    return ( details::SubtractionHelper< T, U,
        details::SafeIntErrorPolicy_NoThrow >::Subtract( t, u, result ) == SafeIntNoError );
}
template < typename T, typename E = _SAFEINT_DEFAULT_ERROR_POLICY >
class SafeInt
{
public:
    SafeInt() throw()
    {
        static_assert( details::NumericType< T >::isInt , "SafeInt<T>: T needs to be an integer type" );
        m_int = 0;
    }
    SafeInt( const T& i ) throw()
    {
        static_assert( details::NumericType< T >::isInt , "SafeInt<T>: T needs to be an integer type" );
        m_int = i;
    }
    SafeInt( bool b ) throw()
    {
        static_assert( details::NumericType< T >::isInt , "SafeInt<T>: T needs to be an integer type" );
        m_int = b ? 1 : 0;
    }
    template < typename U >
    SafeInt(const SafeInt< U, E >& u)
    {
        static_assert( details::NumericType< T >::isInt , "SafeInt<T>: T needs to be an integer type" );
        *this = SafeInt< T, E >( (U)u );
    }
    template < typename U >
    SafeInt( const U& i )
    {
        static_assert( details::NumericType< T >::isInt , "SafeInt<T>: T needs to be an integer type" );
        details::SafeCastHelper< T, U, E >::Cast( i, m_int );
    }
    template < typename U >
    SafeInt< T, E >& operator =( const U& rhs )
    {
        *this = SafeInt< T, E >( rhs );
        return *this;
    }
    SafeInt< T, E >& operator =( const T& rhs ) throw()
    {
        m_int = rhs;
        return *this;
    }
    template < typename U >
    SafeInt< T, E >& operator =( const SafeInt< U, E >& rhs )
    {
        details::SafeCastHelper< T, U, E >::Cast( rhs.Ref(), m_int );
        return *this;
    }
    SafeInt< T, E >& operator =( const SafeInt< T, E >& rhs ) throw()
    {
        m_int = rhs.m_int;
        return *this;
    }
    operator bool() const throw()
    {
        return !!m_int;
    }
    operator char() const
    {
        char val;
        details::SafeCastHelper< char, T, E >::Cast( m_int, val );
        return val;
    }
    operator signed char() const
    {
        signed char val;
        details::SafeCastHelper< signed char, T, E >::Cast( m_int, val );
        return val;
    }
    operator unsigned char() const
    {
        unsigned char val;
        details::SafeCastHelper< unsigned char, T, E >::Cast( m_int, val );
        return val;
    }
    operator __int16() const
    {
        __int16 val;
        details::SafeCastHelper< __int16, T, E >::Cast( m_int, val );
        return val;
    }
    operator unsigned __int16() const
    {
        unsigned __int16 val;
        details::SafeCastHelper< unsigned __int16, T, E >::Cast( m_int, val );
        return val;
    }
    operator __int32() const
    {
        __int32 val;
        details::SafeCastHelper< __int32, T, E >::Cast( m_int, val );
        return val;
    }
    operator unsigned __int32() const
    {
        unsigned __int32 val;
        details::SafeCastHelper< unsigned __int32, T, E >::Cast( m_int, val );
        return val;
    }
    operator long() const
    {
        long val;
        details::SafeCastHelper< long, T, E >::Cast( m_int, val );
        return val;
    }
    operator unsigned long() const
    {
        unsigned long val;
        details::SafeCastHelper< unsigned long, T, E >::Cast( m_int, val );
        return val;
    }
    operator __int64() const
    {
        __int64 val;
        details::SafeCastHelper< __int64, T, E >::Cast( m_int, val );
        return val;
    }
    operator unsigned __int64() const
    {
        unsigned __int64 val;
        details::SafeCastHelper< unsigned __int64, T, E >::Cast( m_int, val );
        return val;
    }
    operator wchar_t() const
    {
        unsigned __int16 val;
        details::SafeCastHelper< unsigned __int16, T, E >::Cast( m_int, val );
        return val;
    }
    T* Ptr() throw() { return &m_int; }
    const T* Ptr() const throw() { return &m_int; }
    const T& Ref() const throw() { return m_int; }
    bool operator !() const throw() { return (!m_int) ? true : false; }
    const SafeInt< T, E >& operator +() const throw() { return *this; };
    SafeInt< T, E > operator -() const
    {
        T tmp;
        details::NegationHelper< T, E, details::IntTraits< T >::isSigned >::Negative( m_int, tmp );
        return SafeInt< T, E >( tmp );
    }
    SafeInt< T, E >& operator ++()
    {
        if( m_int != details::IntTraits< T >::maxInt )
        {
            ++m_int;
            return *this;
        }
        E::SafeIntOnOverflow();
    }
    SafeInt< T, E >& operator --()
    {
        if( m_int != details::IntTraits< T >::minInt )
        {
            --m_int;
            return *this;
        }
        E::SafeIntOnOverflow();
    }
    SafeInt< T, E > operator ++( int )
    {
        if( m_int != details::IntTraits< T >::maxInt )
        {
            SafeInt< T, E > tmp( m_int );
            m_int++;
            return tmp;
        }
        E::SafeIntOnOverflow();
    }
    SafeInt< T, E > operator --( int )
    {
        if( m_int != details::IntTraits< T >::minInt )
        {
            SafeInt< T, E > tmp( m_int );
            m_int--;
            return tmp;
        }
        E::SafeIntOnOverflow();
    }
    SafeInt< T, E > operator ~() const throw() { return SafeInt< T, E >( (T)~m_int ); }
    template < typename U >
    SafeInt< T, E > operator %( U rhs ) const
    {
        T result;
        details::ModulusHelper< T, U, E >::Modulus( m_int, rhs, result );
        return SafeInt< T, E >( result );
    }
    SafeInt< T, E > operator %( SafeInt< T, E > rhs ) const
    {
        T result;
        details::ModulusHelper< T, T, E >::Modulus( m_int, rhs, result );
        return SafeInt< T, E >( result );
    }
    template < typename U >
    SafeInt< T, E >& operator %=( U rhs )
    {
        details::ModulusHelper< T, U, E >::Modulus( m_int, rhs, m_int );
        return *this;
    }
    template < typename U >
    SafeInt< T, E >& operator %=( SafeInt< U, E > rhs )
    {
        details::ModulusHelper< T, U, E >::Modulus( m_int, (U)rhs, m_int );
        return *this;
    }
    template < typename U >
    SafeInt< T, E > operator *( U rhs ) const
    {
        T ret( 0 );
        details::MultiplicationHelper< T, U, E >::Multiply( m_int, rhs, ret );
        return SafeInt< T, E >( ret );
    }
    SafeInt< T, E > operator *( SafeInt< T, E > rhs ) const
    {
        T ret( 0 );
        details::MultiplicationHelper< T, T, E >::Multiply( m_int, (T)rhs, ret );
        return SafeInt< T, E >( ret );
    }
    SafeInt< T, E >& operator *=( SafeInt< T, E > rhs )
    {
        details::MultiplicationHelper< T, T, E >::Multiply( m_int, (T)rhs, m_int );
        return *this;
    }
    template < typename U >
    SafeInt< T, E >& operator *=( U rhs )
    {
        details::MultiplicationHelper< T, U, E >::Multiply( m_int, rhs, m_int );
        return *this;
    }
    template < typename U >
    SafeInt< T, E >& operator *=( SafeInt< U, E > rhs )
    {
        details::MultiplicationHelper< T, U, E >::Multiply( m_int, rhs.Ref(), m_int );
        return *this;
    }
    template < typename U >
    SafeInt< T, E > operator /( U rhs ) const
    {
        T ret( 0 );
        details::DivisionHelper< T, U, E >::Divide( m_int, rhs, ret );
        return SafeInt< T, E >( ret );
    }
    SafeInt< T, E > operator /( SafeInt< T, E > rhs ) const
    {
        T ret( 0 );
        details::DivisionHelper< T, T, E >::Divide( m_int, (T)rhs, ret );
        return SafeInt< T, E >( ret );
    }
    SafeInt< T, E >& operator /=( SafeInt< T, E > i )
    {
        details::DivisionHelper< T, T, E >::Divide( m_int, (T)i, m_int );
        return *this;
    }
    template < typename U > SafeInt< T, E >& operator /=( U i )
    {
        details::DivisionHelper< T, U, E >::Divide( m_int, i, m_int );
        return *this;
    }
    template < typename U > SafeInt< T, E >& operator /=( SafeInt< U, E > i )
    {
        details::DivisionHelper< T, U, E >::Divide( m_int, (U)i, m_int );
        return *this;
    }
    SafeInt< T, E > operator +( SafeInt< T, E > rhs ) const
    {
        T ret( 0 );
        details::AdditionHelper< T, T, E >::Addition( m_int, (T)rhs, ret );
        return SafeInt< T, E >( ret );
    }
    template < typename U >
    SafeInt< T, E > operator +( U rhs ) const
    {
        T ret( 0 );
        details::AdditionHelper< T, U, E >::Addition( m_int, rhs, ret );
        return SafeInt< T, E >( ret );
    }
    SafeInt< T, E >& operator +=( SafeInt< T, E > rhs )
    {
        details::AdditionHelper< T, T, E >::Addition( m_int, (T)rhs, m_int );
        return *this;
    }
    template < typename U >
    SafeInt< T, E >& operator +=( U rhs )
    {
        details::AdditionHelper< T, U, E >::Addition( m_int, rhs, m_int );
        return *this;
    }
    template < typename U >
    SafeInt< T, E >& operator +=( SafeInt< U, E > rhs )
    {
        details::AdditionHelper< T, U, E >::Addition( m_int, (U)rhs, m_int );
        return *this;
    }
    template < typename U >
    SafeInt< T, E > operator -( U rhs ) const
    {
        T ret( 0 );
        details::SubtractionHelper< T, U, E >::Subtract( m_int, rhs, ret );
        return SafeInt< T, E >( ret );
    }
    SafeInt< T, E > operator -(SafeInt< T, E > rhs) const
    {
        T ret( 0 );
        details::SubtractionHelper< T, T, E >::Subtract( m_int, (T)rhs, ret );
        return SafeInt< T, E >( ret );
    }
    SafeInt< T, E >& operator -=( SafeInt< T, E > rhs )
    {
        details::SubtractionHelper< T, T, E >::Subtract( m_int, (T)rhs, m_int );
        return *this;
    }
    template < typename U >
    SafeInt< T, E >& operator -=( U rhs )
    {
        details::SubtractionHelper< T, U, E >::Subtract( m_int, rhs, m_int );
        return *this;
    }
    template < typename U >
    SafeInt< T, E >& operator -=( SafeInt< U, E > rhs )
    {
        details::SubtractionHelper< T, U, E >::Subtract( m_int, (U)rhs, m_int );
        return *this;
    }
    template < typename U >
    bool operator <( U rhs ) const throw()
    {
        return details::GreaterThanTest< U, T >::GreaterThan( rhs, m_int );
    }
    bool operator <( SafeInt< T, E > rhs ) const throw()
    {
        return m_int < (T)rhs;
    }
    template < typename U >
    bool operator >=( U rhs ) const throw()
    {
        return !details::GreaterThanTest< U, T >::GreaterThan( rhs, m_int );
    }
    bool operator >=( SafeInt< T, E > rhs ) const throw()
    {
        return m_int >= (T)rhs;
    }
    template < typename U >
    bool operator >( U rhs ) const throw()
    {
        return details::GreaterThanTest< T, U >::GreaterThan( m_int, rhs );
    }
    bool operator >( SafeInt< T, E > rhs ) const throw()
    {
        return m_int > (T)rhs;
    }
    template < typename U >
    bool operator <=( U rhs ) const throw()
    {
        return !details::GreaterThanTest< T, U >::GreaterThan( m_int, rhs );
    }
    bool operator <=( SafeInt< T, E > rhs ) const throw()
    {
        return m_int <= (T)rhs;
    }
    template < typename U >
    bool operator ==( U rhs ) const throw()
    {
        return details::EqualityTest< T, U >::IsEquals( m_int, rhs );
    }
    bool operator ==( bool rhs ) const throw()
    {
        return ( m_int == 0 ? false : true ) == rhs;
    }
    bool operator ==( SafeInt< T, E > rhs ) const throw() { return m_int == (T)rhs; }
    template < typename U >
    bool operator !=( U rhs ) const throw()
    {
        return !details::EqualityTest< T, U >::IsEquals( m_int, rhs );
    }
    bool operator !=( bool b ) const throw()
    {
        return ( m_int == 0 ? false : true ) != b;
    }
    bool operator !=( SafeInt< T, E > rhs ) const throw() { return m_int != (T)rhs; }
    template < typename U >
    SafeInt< T, E > operator <<( U bits ) const throw()
    {
        _SAFEINT_SHIFT_ASSERT( !details::IntTraits< U >::isSigned || bits >= 0 );
        _SAFEINT_SHIFT_ASSERT( bits < (int)details::IntTraits< T >::bitCount );
        return SafeInt< T, E >( (T)( m_int << bits ) );
    }
    template < typename U >
    SafeInt< T, E > operator <<( SafeInt< U, E > bits ) const throw()
    {
        _SAFEINT_SHIFT_ASSERT( !details::IntTraits< U >::isSigned || (U)bits >= 0 );
        _SAFEINT_SHIFT_ASSERT( (U)bits < (int)details::IntTraits< T >::bitCount );
        return SafeInt< T, E >( (T)( m_int << (U)bits ) );
    }
    template < typename U >
    SafeInt< T, E >& operator <<=( U bits ) throw()
    {
        _SAFEINT_SHIFT_ASSERT( !details::IntTraits< U >::isSigned || bits >= 0 );
        _SAFEINT_SHIFT_ASSERT( bits < (int)details::IntTraits< T >::bitCount );
        m_int <<= bits;
        return *this;
    }
    template < typename U >
    SafeInt< T, E >& operator <<=( SafeInt< U, E > bits ) throw()
    {
        _SAFEINT_SHIFT_ASSERT( !details::IntTraits< U >::isSigned || (U)bits >= 0 );
        _SAFEINT_SHIFT_ASSERT( (U)bits < (int)details::IntTraits< T >::bitCount );
        m_int <<= (U)bits;
        return *this;
    }
    template < typename U >
    SafeInt< T, E > operator >>( U bits ) const throw()
    {
        _SAFEINT_SHIFT_ASSERT( !details::IntTraits< U >::isSigned || bits >= 0 );
        _SAFEINT_SHIFT_ASSERT( bits < (int)details::IntTraits< T >::bitCount );
        return SafeInt< T, E >( (T)( m_int >> bits ) );
    }
    template < typename U >
    SafeInt< T, E > operator >>( SafeInt< U, E > bits ) const throw()
    {
        _SAFEINT_SHIFT_ASSERT( !details::IntTraits< U >::isSigned || (U)bits >= 0 );
        _SAFEINT_SHIFT_ASSERT( bits < (int)details::IntTraits< T >::bitCount );
        return SafeInt< T, E >( (T)(m_int >> (U)bits) );
    }
    template < typename U >
    SafeInt< T, E >& operator >>=( U bits ) throw()
    {
        _SAFEINT_SHIFT_ASSERT( !details::IntTraits< U >::isSigned || bits >= 0 );
        _SAFEINT_SHIFT_ASSERT( bits < (int)details::IntTraits< T >::bitCount );
        m_int >>= bits;
        return *this;
    }
    template < typename U >
    SafeInt< T, E >& operator >>=( SafeInt< U, E > bits ) throw()
    {
        _SAFEINT_SHIFT_ASSERT( !details::IntTraits< U >::isSigned || (U)bits >= 0 );
        _SAFEINT_SHIFT_ASSERT( (U)bits < (int)details::IntTraits< T >::bitCount );
        m_int >>= (U)bits;
        return *this;
    }
    SafeInt< T, E > operator &( SafeInt< T, E > rhs ) const throw()
    {
        return SafeInt< T, E >( m_int & (T)rhs );
    }
    template < typename U >
    SafeInt< T, E > operator &( U rhs ) const throw()
    {
        return SafeInt< T, E >( details::BinaryAndHelper< T, U >::And( m_int, rhs ) );
    }
    SafeInt< T, E >& operator &=( SafeInt< T, E > rhs ) throw()
    {
        m_int &= (T)rhs;
        return *this;
    }
    template < typename U >
    SafeInt< T, E >& operator &=( U rhs ) throw()
    {
        m_int = details::BinaryAndHelper< T, U >::And( m_int, rhs );
        return *this;
    }
    template < typename U >
    SafeInt< T, E >& operator &=( SafeInt< U, E > rhs ) throw()
    {
        m_int = details::BinaryAndHelper< T, U >::And( m_int, (U)rhs );
        return *this;
    }
    SafeInt< T, E > operator ^( SafeInt< T, E > rhs ) const throw()
    {
        return SafeInt< T, E >( (T)( m_int ^ (T)rhs ) );
    }
    template < typename U >
    SafeInt< T, E > operator ^( U rhs ) const throw()
    {
        return SafeInt< T, E >( details::BinaryXorHelper< T, U >::Xor( m_int, rhs ) );
    }
    SafeInt< T, E >& operator ^=( SafeInt< T, E > rhs ) throw()
    {
        m_int ^= (T)rhs;
        return *this;
    }
    template < typename U >
    SafeInt< T, E >& operator ^=( U rhs ) throw()
    {
        m_int = details::BinaryXorHelper< T, U >::Xor( m_int, rhs );
        return *this;
    }
    template < typename U >
    SafeInt< T, E >& operator ^=( SafeInt< U, E > rhs ) throw()
    {
        m_int = details::BinaryXorHelper< T, U >::Xor( m_int, (U)rhs );
        return *this;
    }
    SafeInt< T, E > operator |( SafeInt< T, E > rhs ) const throw()
    {
        return SafeInt< T, E >( (T)( m_int | (T)rhs ) );
    }
    template < typename U >
    SafeInt< T, E > operator |( U rhs ) const throw()
    {
        return SafeInt< T, E >( details::BinaryOrHelper< T, U >::Or( m_int, rhs ) );
    }
    SafeInt< T, E >& operator |=( SafeInt< T, E > rhs ) throw()
    {
        m_int |= (T)rhs;
        return *this;
    }
    template < typename U >
    SafeInt< T, E >& operator |=( U rhs ) throw()
    {
        m_int = details::BinaryOrHelper< T, U >::Or( m_int, rhs );
        return *this;
    }
    template < typename U >
    SafeInt< T, E >& operator |=( SafeInt< U, E > rhs ) throw()
    {
        m_int = details::BinaryOrHelper< T, U >::Or( m_int, (U)rhs );
        return *this;
    }
    SafeInt< T, E > Min( SafeInt< T, E > test, SafeInt< T, E > floor = SafeInt< T, E >( details::IntTraits< T >::minInt ) ) const throw()
    {
        T tmp = test < m_int ? test : m_int;
        return tmp < floor ? floor : tmp;
    }
    SafeInt< T, E > Max( SafeInt< T, E > test, SafeInt< T, E > upper = SafeInt< T, E >( details::IntTraits< T >::maxInt ) ) const throw()
    {
        T tmp = test > m_int ? test : m_int;
        return tmp > upper ? upper : tmp;
    }
    void Swap( SafeInt< T, E >& with ) throw()
    {
        T temp( m_int );
        m_int = with.m_int;
        with.m_int = temp;
    }
    template < int bits >
    const SafeInt< T, E >& Align()
    {
        if( m_int == 0 )
            return *this;
        _SAFEINT_SHIFT_ASSERT( ( ( details::IntTraits<T>::isSigned && bits < (int)details::IntTraits< T >::bitCount - 1 )
            || ( !details::IntTraits<T>::isSigned && bits < (int)details::IntTraits< T >::bitCount ) ) &&
            bits >= 0 && ( !details::IntTraits<T>::isSigned || m_int > 0 ) );
        const T AlignValue = ( (T)1 << bits ) - 1;
        m_int = ( m_int + AlignValue ) & ~AlignValue;
        if( m_int <= 0 )
            E::SafeIntOnOverflow();
        return *this;
    }
    const SafeInt< T, E >& Align2() { return Align< 1 >(); }
    const SafeInt< T, E >& Align4() { return Align< 2 >(); }
    const SafeInt< T, E >& Align8() { return Align< 3 >(); }
    const SafeInt< T, E >& Align16() { return Align< 4 >(); }
    const SafeInt< T, E >& Align32() { return Align< 5 >(); }
    const SafeInt< T, E >& Align64() { return Align< 6 >(); }
private:
    T m_int;
};
template < typename T, typename U, typename E >
bool operator <( U lhs, SafeInt< T, E > rhs ) throw()
{
    return details::GreaterThanTest< T, U >::GreaterThan( (T)rhs, lhs );
}
template < typename T, typename U, typename E >
bool operator <( SafeInt< U, E > lhs, SafeInt< T, E > rhs ) throw()
{
    return details::GreaterThanTest< T, U >::GreaterThan( (T)rhs, (U)lhs );
}
template < typename T, typename U, typename E >
bool operator >( U lhs, SafeInt< T, E > rhs ) throw()
{
    return details::GreaterThanTest< U, T >::GreaterThan( lhs, (T)rhs );
}
template < typename T, typename U, typename E >
bool operator >( SafeInt< T, E > lhs, SafeInt< U, E > rhs ) throw()
{
    return details::GreaterThanTest< T, U >::GreaterThan( (T)lhs, (U)rhs );
}
template < typename T, typename U, typename E >
bool operator >=( U lhs, SafeInt< T, E > rhs ) throw()
{
    return !details::GreaterThanTest< T, U >::GreaterThan( (T)rhs, lhs );
}
template < typename T, typename U, typename E >
bool operator >=( SafeInt< T, E > lhs, SafeInt< U, E > rhs ) throw()
{
    return !details::GreaterThanTest< U, T >::GreaterThan( (U)rhs, (T)lhs );
}
template < typename T, typename U, typename E >
bool operator <=( U lhs, SafeInt< T, E > rhs ) throw()
{
    return !details::GreaterThanTest< U, T >::GreaterThan( lhs, (T)rhs );
}
template < typename T, typename U, typename E >
bool operator <=( SafeInt< T, E > lhs, SafeInt< U, E > rhs ) throw()
{
    return !details::GreaterThanTest< T, U >::GreaterThan( (T)lhs, (U)rhs );
}
template < typename T, typename E >
bool operator ==( bool lhs, SafeInt< T, E > rhs ) throw()
{
    return lhs == ( (T)rhs == 0 ? false : true );
}
template < typename T, typename U, typename E >
bool operator ==( U lhs, SafeInt< T, E > rhs ) throw()
{
    return details::EqualityTest< T, U >::IsEquals((T)rhs, lhs);
}
template < typename T, typename U, typename E >
bool operator ==( SafeInt< T, E > lhs, SafeInt< U, E > rhs ) throw()
{
    return details::EqualityTest< T, U >::IsEquals( (T)lhs, (U)rhs );
}
template < typename T, typename U, typename E >
bool operator !=( U lhs, SafeInt< T, E > rhs ) throw()
{
    return !details::EqualityTest< T, U >::IsEquals( rhs, lhs );
}
template < typename T, typename E >
bool operator !=( bool lhs, SafeInt< T, E > rhs ) throw()
{
    return ( (T)rhs == 0 ? false : true ) != lhs;
}
template < typename T, typename U, typename E >
bool operator !=( SafeInt< T, E > lhs, SafeInt< U, E > rhs ) throw()
{
    return !details::EqualityTest< T, U >::IsEquals( lhs, rhs );
}
template < typename T, typename U, typename E >
SafeInt< T, E > operator %( U lhs, SafeInt< T, E > rhs )
{
#pragma warning(suppress:4127 6326)
    if( sizeof(T) == sizeof(U) && details::IntTraits< T >::isSigned == details::IntTraits< U >::isSigned )
    {
        if( rhs != 0 )
        {
            if( details::IntTraits< T >::isSigned && (T)rhs == -1 )
                return 0;
            return SafeInt< T, E >( (T)( lhs % (T)rhs ) );
        }
        E::SafeIntOnDivZero();
    }
    return SafeInt< T, E >( ( SafeInt< U, E >( lhs ) % (T)rhs ) );
}
template < typename T, typename U, typename E >
SafeInt< T, E > operator *( U lhs, SafeInt< T, E > rhs )
{
    T ret( 0 );
    details::MultiplicationHelper< T, U, E >::Multiply( (T)rhs, lhs, ret );
    return SafeInt< T, E >(ret);
}
template < typename T, typename U, typename E > SafeInt< T, E > operator /( U lhs, SafeInt< T, E > rhs )
{
#pragma warning(push)
#pragma warning(disable: 4127 4146 4307 4310 6326)
    if( details::DivisionMethod< U, T >::method == details::DivisionState_UnsignedSigned )
    {
        if( (T)rhs > 0 )
            return SafeInt< T, E >( lhs/(T)rhs );
        if( (T)rhs != 0 )
        {
            if( sizeof( U ) >= 4 && sizeof( T ) <= sizeof( U ) )
            {
                U tmp;
                if( sizeof(T) == 4 )
                    tmp = lhs/(U)(unsigned __int32)( -(T)rhs );
                else
                    tmp = lhs/(U)( -(T)rhs );
                if( tmp <= details::IntTraits< T >::maxInt )
                    return SafeInt< T, E >( -( (T)tmp ) );
                if( tmp == (U)details::IntTraits< T >::maxInt + 1 )
                    return SafeInt< T, E >( details::IntTraits< T >::minInt );
                E::SafeIntOnOverflow();
            }
            return SafeInt< T, E >(lhs/(T)rhs);
        }
        E::SafeIntOnDivZero();
    }
    if( details::SafeIntCompare< T, U >::isBothSigned )
    {
        if( lhs == details::IntTraits< U >::minInt && (T)rhs == -1 )
        {
            if( sizeof( U ) < sizeof( T ) )
            {
                return SafeInt< T, E >( (T)( -(T)details::IntTraits< U >::minInt ) );
            }
            E::SafeIntOnOverflow();
        }
    }
    U ret;
    details::DivisionHelper< U, T, E >::Divide( lhs, (T)rhs, ret );
    return SafeInt< T, E >( ret );
#pragma warning(pop)
}
template < typename T, typename U, typename E >
SafeInt< T, E > operator +( U lhs, SafeInt< T, E > rhs )
{
    T ret( 0 );
    details::AdditionHelper< T, U, E >::Addition( (T)rhs, lhs, ret );
    return SafeInt< T, E >( ret );
}
template < typename T, typename U, typename E >
SafeInt< T, E > operator -( U lhs, SafeInt< T, E > rhs )
{
    T ret( 0 );
    details::SubtractionHelper< U, T, E, details::SubtractionMethod2< U, T >::method >::Subtract( lhs, rhs.Ref(), ret );
    return SafeInt< T, E >( ret );
}
template < typename T, typename U, typename E >
T& operator +=( T& lhs, SafeInt< U, E > rhs )
{
    T ret( 0 );
    details::AdditionHelper< T, U, E >::Addition( lhs, (U)rhs, ret );
    lhs = ret;
    return lhs;
}
template < typename T, typename U, typename E >
T& operator -=( T& lhs, SafeInt< U, E > rhs )
{
    T ret( 0 );
    details::SubtractionHelper< T, U, E >::Subtract( lhs, (U)rhs, ret );
    lhs = ret;
    return lhs;
}
template < typename T, typename U, typename E >
T& operator *=( T& lhs, SafeInt< U, E > rhs )
{
    T ret( 0 );
    details::MultiplicationHelper< T, U, E >::Multiply( lhs, (U)rhs, ret );
    lhs = ret;
    return lhs;
}
template < typename T, typename U, typename E >
T& operator /=( T& lhs, SafeInt< U, E > rhs )
{
    T ret( 0 );
    details::DivisionHelper< T, U, E >::Divide( lhs, (U)rhs, ret );
    lhs = ret;
    return lhs;
}
template < typename T, typename U, typename E >
T& operator %=( T& lhs, SafeInt< U, E > rhs )
{
    T ret( 0 );
    details::ModulusHelper< T, U, E >::Modulus( lhs, (U)rhs, ret );
    lhs = ret;
    return lhs;
}
template < typename T, typename U, typename E >
T& operator &=( T& lhs, SafeInt< U, E > rhs ) throw()
{
    lhs = details::BinaryAndHelper< T, U >::And( lhs, (U)rhs );
    return lhs;
}
template < typename T, typename U, typename E >
T& operator ^=( T& lhs, SafeInt< U, E > rhs ) throw()
{
    lhs = details::BinaryXorHelper< T, U >::Xor( lhs, (U)rhs );
    return lhs;
}
template < typename T, typename U, typename E >
T& operator |=( T& lhs, SafeInt< U, E > rhs ) throw()
{
    lhs = details::BinaryOrHelper< T, U >::Or( lhs, (U)rhs );
    return lhs;
}
template < typename T, typename U, typename E >
T& operator <<=( T& lhs, SafeInt< U, E > rhs ) throw()
{
    lhs = (T)( SafeInt< T, E >( lhs ) << (U)rhs );
    return lhs;
}
template < typename T, typename U, typename E >
T& operator >>=( T& lhs, SafeInt< U, E > rhs ) throw()
{
    lhs = (T)( SafeInt< T, E >( lhs ) >> (U)rhs );
    return lhs;
}
template < typename T, typename U, typename E >
T*& operator +=( T*& lhs, SafeInt< U, E > rhs )
{
    SafeInt< uintptr_t, E > ptr_val = reinterpret_cast< uintptr_t >( lhs );
    lhs = reinterpret_cast< T* >( (uintptr_t)( ptr_val + (ptrdiff_t)( SafeInt< ptrdiff_t, E >( rhs ) * sizeof( T ) ) ) );
    return lhs;
}
template < typename T, typename U, typename E >
T*& operator -=( T*& lhs, SafeInt< U, E > rhs )
{
    SafeInt< size_t, E > ptr_val = reinterpret_cast< uintptr_t >( lhs );
    lhs = reinterpret_cast< T* >( (uintptr_t)( ptr_val - (ptrdiff_t)( SafeInt< ptrdiff_t, E >( rhs ) * sizeof( T ) ) ) );
    return lhs;
}
template < typename T, typename U, typename E >
T*& operator *=( T* lhs, SafeInt< U, E > rhs )
{
    static_assert( details::DependentFalse< T >::value, "SafeInt<T>: This operator explicitly not supported" );
    return lhs;
}
template < typename T, typename U, typename E >
T*& operator /=( T* lhs, SafeInt< U, E > rhs )
{
    static_assert( details::DependentFalse< T >::value, "SafeInt<T>: This operator explicitly not supported" );
    return lhs;
}
template < typename T, typename U, typename E >
T*& operator %=( T* lhs, SafeInt< U, E > rhs )
{
    static_assert( details::DependentFalse< T >::value, "SafeInt<T>: This operator explicitly not supported" );
    return lhs;
}
template < typename T, typename U, typename E >
T*& operator &=( T* lhs, SafeInt< U, E > rhs )
{
    static_assert( details::DependentFalse< T >::value, "SafeInt<T>: This operator explicitly not supported" );
    return lhs;
}
template < typename T, typename U, typename E >
T*& operator ^=( T* lhs, SafeInt< U, E > rhs )
{
    static_assert( details::DependentFalse< T >::value, "SafeInt<T>: This operator explicitly not supported" );
    return lhs;
}
template < typename T, typename U, typename E >
T*& operator |=( T* lhs, SafeInt< U, E > rhs )
{
    static_assert( details::DependentFalse< T >::value, "SafeInt<T>: This operator explicitly not supported" );
    return lhs;
}
template < typename T, typename U, typename E >
T*& operator <<=( T* lhs, SafeInt< U, E > rhs )
{
    static_assert( details::DependentFalse< T >::value, "SafeInt<T>: This operator explicitly not supported" );
    return lhs;
}
template < typename T, typename U, typename E >
T*& operator >>=( T* lhs, SafeInt< U, E > rhs )
{
    static_assert( details::DependentFalse< T >::value, "SafeInt<T>: This operator explicitly not supported" );
    return lhs;
}
template < typename T, typename U, typename E >
SafeInt< U, E > operator <<( U lhs, SafeInt< T, E > bits ) throw()
{
    _SAFEINT_SHIFT_ASSERT( !details::IntTraits< T >::isSigned || (T)bits >= 0 );
    _SAFEINT_SHIFT_ASSERT( (T)bits < (int)details::IntTraits< U >::bitCount );
    return SafeInt< U, E >( (U)( lhs << (T)bits ) );
}
template < typename T, typename U, typename E >
SafeInt< U, E > operator >>( U lhs, SafeInt< T, E > bits ) throw()
{
    _SAFEINT_SHIFT_ASSERT( !details::IntTraits< T >::isSigned || (T)bits >= 0 );
    _SAFEINT_SHIFT_ASSERT( (T)bits < (int)details::IntTraits< U >::bitCount );
    return SafeInt< U, E >( (U)( lhs >> (T)bits ) );
}
template < typename T, typename U, typename E >
SafeInt< T, E > operator &( U lhs, SafeInt< T, E > rhs ) throw()
{
    return SafeInt< T, E >( details::BinaryAndHelper< T, U >::And( (T)rhs, lhs ) );
}
template < typename T, typename U, typename E >
SafeInt< T, E > operator ^( U lhs, SafeInt< T, E > rhs ) throw()
{
    return SafeInt< T, E >(details::BinaryXorHelper< T, U >::Xor( (T)rhs, lhs ) );
}
template < typename T, typename U, typename E >
SafeInt< T, E > operator |( U lhs, SafeInt< T, E > rhs ) throw()
{
    return SafeInt< T, E >( details::BinaryOrHelper< T, U >::Or( (T)rhs, lhs ) );
}
}
}
#pragma pack(pop)
