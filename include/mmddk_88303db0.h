#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "pshpack1.h"
extern "C" {
  #define MMNOTIMERDEV
  #define MMNOWAVEDEV
  #define MMNOMIDIDEV
  #define MMNOAUXDEV
  #define MMNOJOYDEV
  #define MMNOMMIODEV
  #define MMNOMCIDEV
typedef struct {
    DWORD dwSize;
    DWORD dwCmd;
    } DRVM_IOCTL_DATA, FAR * LPDRVM_IOCTL_DATA;
typedef struct {
    DWORD cbSize;
    LPVOID pCaps;
} MDEVICECAPSEX;
typedef struct tMIXEROPENDESC
{
    HMIXER hmx;
    LPVOID pReserved0;
    DWORD_PTR dwCallback;
    DWORD_PTR dwInstance;
    DWORD_PTR dnDevNode;
} MIXEROPENDESC, *PMIXEROPENDESC, FAR *LPMIXEROPENDESC;
typedef VOID (TASKCALLBACK) (DWORD_PTR dwInst);
typedef TASKCALLBACK FAR *LPTASKCALLBACK;
UINT APIENTRY mmTaskCreate(LPTASKCALLBACK lpfn, HANDLE FAR * lph, DWORD_PTR dwInst);
VOID APIENTRY mmTaskBlock(DWORD h);
BOOL APIENTRY mmTaskSignal(DWORD h);
VOID APIENTRY mmTaskYield(VOID);
DWORD APIENTRY mmGetCurrentTask(VOID);
}
#include "poppack.h"
#endif
#pragma endregion
