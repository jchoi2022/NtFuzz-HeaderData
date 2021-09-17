struct FLOATSAFE
{
    KFLOATING_SAVE FloatSave;
    NTSTATUS ntStatus;
    FLOATSAFE(void)
    {
        ntStatus = KeSaveFloatingPointState(&FloatSave);
    }
    ~FLOATSAFE(void)
    {
        if (NT_SUCCESS(ntStatus))
        {
            KeRestoreFloatingPointState(&FloatSave);
        }
    }
};
