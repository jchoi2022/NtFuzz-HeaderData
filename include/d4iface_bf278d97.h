extern "C" {
typedef unsigned long CHANNEL_HANDLE;
typedef CHANNEL_HANDLE *PCHANNEL_HANDLE;
typedef struct _DOT4_ACTIVITY
{
    ULONG ulMessage;
    ULONG ulByteCount;
    CHANNEL_HANDLE hChannel;
} DOT4_ACTIVITY, *PDOT4_ACTIVITY;
}
