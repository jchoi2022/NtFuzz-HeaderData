typedef struct _DEBUG_TRACE_CONTROLPOINT{
    ULONG ControlPointNumber;
    PSZ Name;
} DEBUG_TRACE_CONTROLPOINT, *PDEBUG_TRACE_CONTROLPOINT;
typedef struct {
    LONG PrintLevel;
    ULONG BreakMask;
    PSZ Name;
} RX_DEBUG_TRACE_CONTROL, *PRX_DEBUG_TRACE_CONTROL;
