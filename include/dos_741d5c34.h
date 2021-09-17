       
#include <corecrt.h>
_CRT_BEGIN_C_HEADER
        #define _DISKFREE_T_DEFINED
        struct _diskfree_t
        {
            unsigned total_clusters;
            unsigned avail_clusters;
            unsigned sectors_per_cluster;
            unsigned bytes_per_sector;
        };
_CRT_END_C_HEADER
