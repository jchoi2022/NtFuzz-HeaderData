typedef struct _THROTTLING_STATE {
    LARGE_INTEGER NextTime;
    __volatile ULONG CurrentIncrement;
    ULONG MaximumDelay;
    LARGE_INTEGER Increment;
    __volatile ULONG NumberOfQueries;
} THROTTLING_STATE, *PTHROTTLING_STATE;
    if ((_Increment)>0) { \
        (_pBP)->Increment.QuadPart = (_Increment) * 10000; \
        (_pBP)->MaximumDelay = (_MaximumDelay) / (_Increment); \
        (_pBP)->CurrentIncrement = 0; \
    }}
BOOLEAN
RxShouldRequestBeThrottled(
    IN PTHROTTLING_STATE pBP
    );
VOID
RxInitiateOrContinueThrottling (
    IN PTHROTTLING_STATE pBP
    );
