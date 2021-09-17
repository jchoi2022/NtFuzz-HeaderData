#include <crtdefs.h>
#pragma pack(push,_CRT_PACKING)
extern "C" {
struct _diskfree_t {
        unsigned total_clusters;
        unsigned avail_clusters;
        unsigned sectors_per_cluster;
        unsigned bytes_per_sector;
        };
_Check_return_ _Ret_opt_z_ _CRTIMP char * __cdecl _getcwd(_Out_writes_opt_(_SizeInBytes) char * _DstBuf, _In_ int _SizeInBytes);
_Check_return_ _Ret_opt_z_ _CRTIMP char * __cdecl _getdcwd(_In_ int _Drive, _Out_writes_opt_(_SizeInBytes) char * _DstBuf, _In_ int _SizeInBytes);
_Check_return_ _Ret_opt_z_ char * __cdecl _getdcwd_nolock(_In_ int _Drive, _Out_writes_opt_(_SizeInBytes) char * _DstBuf, _In_ int _SizeInBytes);
_Check_return_ _CRTIMP int __cdecl _chdir(_In_z_ const char * _Path);
_Check_return_ _CRTIMP int __cdecl _mkdir(_In_z_ const char * _Path);
_Check_return_ _CRTIMP int __cdecl _rmdir(_In_z_ const char * _Path);
_Check_return_ _CRTIMP int __cdecl _chdrive(_In_ int _Drive);
_Check_return_ _CRTIMP int __cdecl _getdrive(void);
_Check_return_ _CRTIMP unsigned long __cdecl _getdrives(void);
_Check_return_ _CRTIMP unsigned __cdecl _getdiskfree(_In_ unsigned _Drive, _Out_ struct _diskfree_t * _DiskFree);
_Check_return_ _Ret_opt_z_ _CRTIMP wchar_t * __cdecl _wgetcwd(_Out_writes_opt_(_SizeInWords) wchar_t * _DstBuf, _In_ int _SizeInWords);
_Check_return_ _Ret_opt_z_ _CRTIMP wchar_t * __cdecl _wgetdcwd(_In_ int _Drive, _Out_writes_opt_(_SizeInWords) wchar_t * _DstBuf, _In_ int _SizeInWords);
_Check_return_ _Ret_opt_z_ wchar_t * __cdecl _wgetdcwd_nolock(_In_ int _Drive, _Out_writes_opt_(_SizeInWords) wchar_t * _DstBuf, _In_ int _SizeInWords);
_Check_return_ _CRTIMP int __cdecl _wchdir(_In_z_ const wchar_t * _Path);
_Check_return_ _CRTIMP int __cdecl _wmkdir(_In_z_ const wchar_t * _Path);
_Check_return_ _CRTIMP int __cdecl _wrmdir(_In_z_ const wchar_t * _Path);
_Check_return_ _Ret_opt_z_ _CRT_NONSTDC_DEPRECATE(_getcwd) _CRTIMP char * __cdecl getcwd(_Out_writes_opt_(_SizeInBytes) char * _DstBuf, _In_ int _SizeInBytes);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_chdir) _CRTIMP int __cdecl chdir(_In_z_ const char * _Path);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_mkdir) _CRTIMP int __cdecl mkdir(_In_z_ const char * _Path);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_rmdir) _CRTIMP int __cdecl rmdir(_In_z_ const char * _Path);
}
#pragma pack(pop)
