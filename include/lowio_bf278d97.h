#include "mrx.h"
extern FAST_MUTEX RxLowIoPagingIoSyncMutex;
      RxMdlIsLocked((MDL)) || RxMdlSourceIsNonPaged((MDL)) \
      )
   ( ((LOWIOCONTEXT)->Operation > LOWIO_OP_WRITE ) || \
     ((LOWIOCONTEXT)->ParamsFor.ReadWrite.Buffer == NULL) || \
     ( \
      ((LOWIOCONTEXT)->ParamsFor.ReadWrite.Buffer != NULL) && \
      RxLowIoIsMdlLocked(((LOWIOCONTEXT)->ParamsFor.ReadWrite.Buffer)) \
     ) \
   )
typedef struct _LOWIO_PER_FCB_INFO {
    LIST_ENTRY PagingIoReadsOutstanding;
    LIST_ENTRY PagingIoWritesOutstanding;
} LOWIO_PER_FCB_INFO, *PLOWIO_PER_FCB_INFO;
PVOID
NTAPI
RxLowIoGetBufferAddress (
    IN PRX_CONTEXT RxContext
    );
NTSTATUS
NTAPI
RxLowIoPopulateFsctlInfo (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp
    );
NTSTATUS
NTAPI
RxLowIoSubmit (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp,
    IN PFCB Fcb,
    IN PLOWIO_COMPLETION_ROUTINE CompletionRoutine
    );
NTSTATUS
NTAPI
RxLowIoCompletion (
    PRX_CONTEXT RxContext
    );
VOID
NTAPI
RxInitializeLowIoContext (
    IN PRX_CONTEXT RxContext,
    IN ULONG Operation,
    OUT PLOWIO_CONTEXT LowIoContext
    );
VOID
RxInitializeLowIoPerFcbInfo (
    PLOWIO_PER_FCB_INFO LowIoPerFcbInfo
    );
