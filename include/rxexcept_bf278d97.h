LONG
RxExceptionFilter (
    IN PRX_CONTEXT RxContext,
    IN PEXCEPTION_POINTERS ExceptionPointer
    );
NTSTATUS
RxProcessException (
    IN PRX_CONTEXT RxContext,
    IN NTSTATUS ExceptionCode
    );
                      EXCEPTION_EXECUTE_HANDLER : EXCEPTION_CONTINUE_SEARCH )
    ASSERT((RXCONTEXT)!=NULL); \
    if (RxContext!=NULL) {(RXCONTEXT)->StoredStatus = (STATUS); } \
    ExRaiseStatus( (STATUS) ); \
}
    ASSERT((RXCONTEXT)!=NULL); \
    if (RxContext!=NULL) {(RXCONTEXT)->StoredStatus = (STATUS); } \
    if ((STATUS) == (STATUS_VERIFY_REQUIRED)) { ExRaiseStatus((STATUS)); } \
    ExRaiseStatus(FsRtlNormalizeNtstatus((STATUS),(STATUS_UNEXPECTED_IO_ERROR))); \
}
