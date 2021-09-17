       
#include <corecrt.h>
#include <corecrt_wdirect.h>
_CRT_BEGIN_C_HEADER
        #define _DISKFREE_T_DEFINED
        struct _diskfree_t
        {
            unsigned total_clusters;
            unsigned avail_clusters;
            unsigned sectors_per_cluster;
            unsigned bytes_per_sector;
        };
       
       
_Success_(return != 0)
_Check_return_ _Ret_maybenull_z_
_ACRTIMP _CRTALLOCATOR char* __cdecl _getcwd(
    _Out_writes_opt_z_(_SizeInBytes) char* _DstBuf,
    _In_ int _SizeInBytes
    );
_Success_(return != 0)
_Check_return_ _Ret_maybenull_z_
_ACRTIMP _CRTALLOCATOR char* __cdecl _getdcwd(
    _In_ int _Drive,
    _Out_writes_opt_z_(_SizeInBytes) char* _DstBuf,
    _In_ int _SizeInBytes
    );
       
       
_Check_return_ _ACRTIMP int __cdecl _chdir(_In_z_ char const* _Path);
_Check_return_ _ACRTIMP int __cdecl _mkdir(_In_z_ char const* _Path);
_Check_return_ _ACRTIMP int __cdecl _rmdir(_In_z_ char const* _Path);
_CRT_END_C_HEADER
