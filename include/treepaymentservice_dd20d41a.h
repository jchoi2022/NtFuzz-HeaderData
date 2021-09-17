#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
       
extern "C" {
DEFINE_GUID(GUID_TREE_PAYMENT_SERVICE,
0xad0ab067, 0xcda2, 0x4ecb, 0xa1, 0x5, 0xb9, 0xd3, 0x60, 0xb8, 0xcb, 0x69);
#include <pshpack1.h>
typedef struct _PAYMENT_SERVICE_IN {
    UINT32 CmdId;
    UINT64 ValidMatchDuration;
} PAYMENT_SERVICE_IN, *PPAYMENT_SERVICE_IN;
typedef struct _PAYMENT_SERVICE_OUT {
    INT32 Status;
    UINT64 BioMatchTime;
    UINT64 CurrentTime;
} PAYMENT_SERVICE_OUT, *PPAYMENT_SERVICE_OUT;
#include <poppack.h>
}
#endif
