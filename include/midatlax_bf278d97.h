typedef struct _MID_MAP_ *PMID_MAP;
typedef struct _RX_MID_ATLAS {
   USHORT MaximumNumberOfMids;
   USHORT MidsAllocated;
   USHORT NumberOfMidsInUse;
   USHORT NumberOfMidsDiscarded;
   USHORT MaximumMidFieldWidth;
   USHORT Reserved;
   USHORT MidQuantum;
   UCHAR MidQuantumFieldWidth;
   UCHAR NumberOfLevels;
   LIST_ENTRY MidMapFreeList;
   LIST_ENTRY MidMapExpansionList;
   PMID_MAP pRootMidMap;
} RX_MID_ATLAS, *PRX_MID_ATLAS;
typedef
VOID (*PCONTEXT_DESTRUCTOR) (
      PVOID Context
      );
PRX_MID_ATLAS
RxCreateMidAtlas (
    USHORT MaximumNumberOfEntries,
    USHORT InitialAllocation
    );
VOID
RxDestroyMidAtlas (
    PRX_MID_ATLAS MidAtlas,
    PCONTEXT_DESTRUCTOR ContextDestructor
    );
PVOID
RxMapMidToContext (
    PRX_MID_ATLAS MidAtlas,
    USHORT Mid
    );
NTSTATUS
RxAssociateContextWithMid (
    PRX_MID_ATLAS MidAtlas,
    PVOID Context,
    PUSHORT NewMid
    );
NTSTATUS
RxMapAndDissociateMidFromContext (
    PRX_MID_ATLAS MidAtlas,
    USHORT Mid,
    PVOID *ContextPointer
    );
NTSTATUS
RxReassociateMid (
    PRX_MID_ATLAS MidAtlas,
    USHORT Mid,
    PVOID NewContext
    );
