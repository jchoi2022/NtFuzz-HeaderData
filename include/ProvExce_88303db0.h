#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <eh.h>
class CHeap_Exception
{
public:
 enum HEAP_ERROR
 {
  E_ALLOCATION_ERROR = 0 ,
  E_FREE_ERROR
 };
private:
 HEAP_ERROR m_Error;
public:
 CHeap_Exception ( HEAP_ERROR e ) : m_Error ( e ) {}
 ~CHeap_Exception () {}
 HEAP_ERROR GetError() { return m_Error ; }
} ;
class CStructured_Exception
{
private:
    UINT m_nSE ;
 EXCEPTION_POINTERS *m_pExp ;
public:
    CStructured_Exception () {}
    CStructured_Exception ( UINT n , EXCEPTION_POINTERS *pExp ) : m_nSE ( n ) , m_pExp ( pExp ) {}
    ~CStructured_Exception () {}
    UINT GetSENumber () { return m_nSE ; }
 EXCEPTION_POINTERS *GetExtendedInfo() { return m_pExp ; }
} ;
class CSetStructuredExceptionHandler
{
private:
    PROVIDER_EXCEPT_SE_TRANSLATOR_FUNC_TYPE m_PrevFunc ;
public:
    static void PROVIDER_EXCEPT_API_INLINE trans_func ( UINT u , EXCEPTION_POINTERS *pExp )
 {
  throw CStructured_Exception ( u , pExp ) ;
 }
 CSetStructuredExceptionHandler () : m_PrevFunc ( NULL )
 {
 }
 ~CSetStructuredExceptionHandler ()
 {
 }
} ;
#endif
#pragma endregion
