#include <crtdefs.h>
#pragma pack(push,_CRT_PACKING)
extern "C" {
typedef _JBTYPE jmp_buf[_JBLEN];
int __cdecl setjmp(_Out_ jmp_buf _Buf);
}
extern "C"
{
_CRTIMP __declspec(noreturn) void __cdecl longjmp(_In_reads_(_JBLEN) jmp_buf _Buf, _In_ int _Value) throw(...);
}
#pragma pack(pop)
