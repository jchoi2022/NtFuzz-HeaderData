#include <crtdefs.h>
#pragma pack(push,_CRT_PACKING)
extern "C" {
struct _diskfree_t {
        unsigned total_clusters;
        unsigned avail_clusters;
        unsigned sectors_per_cluster;
        unsigned bytes_per_sector;
        };
_Check_return_ _CRTIMP unsigned __cdecl _getdiskfree(_In_ unsigned _Drive, _Out_ struct _diskfree_t * _DiskFree);
void __cdecl _disable(void);
void __cdecl _enable(void);
}
#pragma pack(pop)
