#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(4 : 4275 4800 4786 4251)
#include "windows.h"
#include <wbemidl.h>
#include <wmiutils.h>
#include <Polarity.h>
#include <yvals.h>
#include <stllock.h>
extern POLARITY CCritSec g_cs;
#include "utillib.h"
#include "ThrdBase.h"
#include "RefPtrCo.h"
#include "MethodCo.h"
#include "FRQuery.h"
#include "wbemglue.h"
#include "instance.h"
class CFramework_Exception
{
private:
 CHString m_sErrorText;
    HRESULT m_hr;
public:
 CFramework_Exception ( LPCWSTR lpwszErrorText, HRESULT hr) : m_hr ( hr ) , m_sErrorText ( lpwszErrorText) {}
 CFramework_Exception ( LPCWSTR lpwszErrorText) : m_hr ( WBEM_S_NO_ERROR ) , m_sErrorText ( lpwszErrorText) {}
 ~CFramework_Exception () {}
 HRESULT GetHRESULT() { return m_hr ; }
 CHString &GetErrorText() { return m_sErrorText; }
} ;
    #define _DBG_ASSERT(X) { if (!(X)) { DebugBreak(); } }
#endif
#pragma endregion
