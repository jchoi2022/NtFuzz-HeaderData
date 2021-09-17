#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma prefast (push)
#pragma prefast (disable: 26135)
class POLARITY CThreadBase
{
public:
 enum THREAD_SAFETY_MECHANISM
 {
  etsmFirst = 0,
  etsmSerialized = 0,
  etsmPriorityRead,
  etsmPriorityWrite,
  etsmLast
 };
 CThreadBase( THREAD_SAFETY_MECHANISM etsm = etsmSerialized );
 virtual ~CThreadBase();
 LONG AddRef( void );
 LONG Release( void );
 BOOL BeginRead( DWORD dwTimeOut = INFINITE );
 void EndRead( void );
 BOOL BeginWrite( DWORD dwTimeOut = INFINITE );
 void EndWrite( void );
protected:
 virtual void OnFinalRelease( void );
private:
 CRITICAL_SECTION m_cs;
 LONG m_lRefCount;
 THREAD_SAFETY_MECHANISM m_etsm;
 void Lock( void );
 void Unlock( void );
};
inline BOOL CThreadBase::BeginRead( DWORD dwTimeout )
{
 EnterCriticalSection( &m_cs );
 return TRUE;
}
inline void CThreadBase::EndRead( void )
{
 LeaveCriticalSection( &m_cs );
}
inline BOOL CThreadBase::BeginWrite( DWORD dwTimeout )
{
 EnterCriticalSection( &m_cs );
 return TRUE;
}
inline void CThreadBase::EndWrite( void )
{
 LeaveCriticalSection( &m_cs );
}
inline void CThreadBase::Lock( void )
{
 EnterCriticalSection( &m_cs );
}
inline void CThreadBase::Unlock( void )
{
 LeaveCriticalSection( &m_cs );
}
#pragma prefast (pop)
#endif
#pragma endregion
