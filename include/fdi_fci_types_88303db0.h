#include <winapifamily.h>
extern "C" {
typedef int BOOL;
typedef unsigned char BYTE;
typedef unsigned int UINT;
typedef unsigned short USHORT;
typedef unsigned long ULONG;
typedef unsigned long CHECKSUM;
typedef unsigned long UOFF;
typedef unsigned long COFF;
typedef struct {
    int erfOper;
    int erfType;
    BOOL fError;
} ERF;
typedef ERF FAR *PERF;
typedef unsigned short TCOMP;
            ((tc) & tcompMASK_TYPE)
            (((tc) & tcompMASK_QUANTUM_LEVEL) >> tcompSHIFT_QUANTUM_LEVEL)
            (((tc) & tcompMASK_QUANTUM_MEM) >> tcompSHIFT_QUANTUM_MEM)
            (((m) << tcompSHIFT_QUANTUM_MEM ) | \
             ((l) << tcompSHIFT_QUANTUM_LEVEL) | \
             ( t ))
            (((tc) & tcompMASK_LZX_WINDOW) >> tcompSHIFT_LZX_WINDOW)
            (((w) << tcompSHIFT_LZX_WINDOW ) | \
             ( tcompTYPE_LZX ))
}
