       
#include <crtdefs.h>
#pragma pack(push,_CRT_PACKING)
  #define _TLS_QUAL __declspec(thread)
  #define _HAS_EXCEPTIONS 1
  #define _HAS_NAMESPACE 1
 #define _HAS_IMMUTABLE_SETS 0
 #define _HAS_STRICT_CONFORMANCE 0
  #define _HAS_ITERATOR_DEBUGGING 0
#include <stlshared.h>
 #define _SCL_SECURE_INVALID_ARGUMENT \
 { \
  _ASSERTE(("SCL Secure Invalid Argument", 0)); \
  _SCL_SECURE_INVALID_ARGUMENT_NO_ASSERT; \
 }
 #define _SCL_SECURE_OUT_OF_RANGE \
 { \
  _ASSERTE(("SCL Secure Out Of Range", 0)); \
  _SCL_SECURE_OUT_OF_RANGE_NO_ASSERT; \
 }
 #define _SCL_SECURE_INVALID_ARGUMENT_NO_ASSERT _SCL_SECURE_INVALID_PARAMETER("invalid argument")
 #define _SCL_SECURE_OUT_OF_RANGE_NO_ASSERT _SCL_SECURE_INVALID_PARAMETER("out of range")
 #define _SCL_SECURE_ALWAYS_VALIDATE(cond) \
 { \
  if (!(cond)) \
  { \
   _ASSERTE((#cond, 0)); \
   _SCL_SECURE_INVALID_ARGUMENT_NO_ASSERT; \
  } \
 }
 #define _SCL_SECURE_ALWAYS_VALIDATE_RANGE(cond) \
 { \
  if (!(cond)) \
  { \
   _ASSERTE((#cond, 0)); \
   _SCL_SECURE_OUT_OF_RANGE_NO_ASSERT; \
  } \
 }
 #define _SCL_SECURE_CRT_VALIDATE(cond, retvalue) \
 { \
  if (!(cond)) \
  { \
   _ASSERTE((#cond, 0)); \
   _SCL_SECURE_INVALID_PARAMETER(cond); \
   return (retvalue); \
  } \
 }
 #define _SCL_SECURE_VALIDATE(cond)
 #define _SCL_SECURE_VALIDATE_RANGE(cond)
 #define _SCL_SECURE_MOVE(func, dst, size, src, count) func((dst), (src), (count))
 #define _SCL_SECURE_COPY(func, dst, size, src, count) func((dst), (src), (count))
#include <use_ansi.h>
 #define _VC6SP2 0
    #define _CRTIMP2
    #define _CRTDATA2 _CRTIMP2
  #define _DEPRECATED __declspec(deprecated)
  #define _STD_BEGIN
  #define _STD_END
  #define _STD
  #define _C_STD_BEGIN
  #define _C_STD_END
  #define _CSTD
  #define _C_LIB_DECL
  #define _END_C_LIB_DECL
  #define _EXTERN_C
  #define _END_EXTERN_C
 #define _Restrict restrict
_STD_BEGIN
typedef bool _Bool;
_STD_END
typedef _LONGLONG _Longlong;
typedef _ULONGLONG _ULonglong;
  #define _FPOSOFF(fp) ((long)(fp))
_STD_BEGIN
class _CRTIMP2_PURE _Lockit
 {
public:
    explicit _THISCALL _Lockit();
 explicit _THISCALL _Lockit(int);
 _THISCALL ~_Lockit();
private:
    static _MRTIMP2_NPURE_FUNCTION(void) _Lockit_ctor(_Lockit *);
    static _MRTIMP2_NPURE_FUNCTION(void) _Lockit_ctor(_Lockit *, int);
    static _MRTIMP2_NPURE_FUNCTION(void) _Lockit_dtor(_Lockit *);
 __CLR_OR_THIS_CALL _Lockit(const _Lockit&);
 _Lockit& __CLR_OR_THIS_CALL operator=(const _Lockit&);
 int _Locktype;
 };
class _CRTIMP2_PURE _Mutex
 {
public:
    _THISCALL _Mutex();
 _THISCALL ~_Mutex();
 void _THISCALL _Lock();
 void _THISCALL _Unlock();
private:
    static _MRTIMP2_NPURE_FUNCTION(void) _Mutex_ctor(_Mutex *);
    static _MRTIMP2_NPURE_FUNCTION(void) _Mutex_dtor(_Mutex *);
    static _MRTIMP2_NPURE_FUNCTION(void) _Mutex_Lock(_Mutex *);
    static _MRTIMP2_NPURE_FUNCTION(void) _Mutex_Unlock(_Mutex *);
 __CLR_OR_THIS_CALL _Mutex(const _Mutex&);
 _Mutex& __CLR_OR_THIS_CALL operator=(const _Mutex&);
 void *_Mtx;
 };
class _CRTIMP2_PURE _Init_locks
 {
public:
    _THISCALL _Init_locks();
 _THISCALL ~_Init_locks();
private:
    static _MRTIMP2_NPURE_FUNCTION(void) _Init_locks_ctor(_Init_locks *);
    static _MRTIMP2_NPURE_FUNCTION(void) _Init_locks_dtor(_Init_locks *);
 };
_STD_END
_C_STD_BEGIN
typedef void (_ATEXIT_CALLBACK_CALLING_CONVENTION* _ATEXIT_CALLBACK)(void);
_MRTIMP2_FUNCTION(void) _Atexit(_ATEXIT_CALLBACK);
typedef int _Mbstatet;
_C_STD_END
  #define _EXTERN_TEMPLATE template
  #define _THROW_BAD_ALLOC _THROW1(...)
#pragma pack(pop)
