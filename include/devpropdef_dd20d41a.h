#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef ULONG DEVPROPTYPE, *PDEVPROPTYPE;
typedef CHAR DEVPROP_BOOLEAN, *PDEVPROP_BOOLEAN;
typedef GUID DEVPROPGUID, *PDEVPROPGUID;
typedef ULONG DEVPROPID, *PDEVPROPID;
typedef struct _DEVPROPKEY {
    DEVPROPGUID fmtid;
    DEVPROPID pid;
} DEVPROPKEY, *PDEVPROPKEY;
extern "C++" {
inline bool operator==(const DEVPROPKEY &a, const DEVPROPKEY &b) { return ((a.pid == b.pid) && (a.fmtid == b.fmtid)); }
inline bool operator!=(const DEVPROPKEY &a, const DEVPROPKEY &b) { return !(a == b); }
}
typedef
[v1_enum]
enum _DEVPROPSTORE {
    DEVPROP_STORE_SYSTEM,
    DEVPROP_STORE_USER
} DEVPROPSTORE, *PDEVPROPSTORE;
typedef struct _DEVPROPCOMPKEY {
    DEVPROPKEY Key;
    DEVPROPSTORE Store;
    [string] wchar_t *LocaleName;
} DEVPROPCOMPKEY, *PDEVPROPCOMPKEY;
extern "C++" {
inline bool operator==(const DEVPROPCOMPKEY &a, const DEVPROPCOMPKEY &b) { return ((a.Key == b.Key) && (a.Store == b.Store) && IsEqualLocaleName(a.LocaleName, b.LocaleName)); }
inline bool operator!=(const DEVPROPCOMPKEY &a, const DEVPROPCOMPKEY &b) { return !(a == b); }
}
typedef struct _DEVPROPERTY {
    DEVPROPCOMPKEY CompKey;
    DEVPROPTYPE Type;
    ULONG BufferSize;
    [size_is(BufferSize)] BYTE *Buffer;
} DEVPROPERTY, *PDEVPROPERTY;
#endif
#pragma endregion
