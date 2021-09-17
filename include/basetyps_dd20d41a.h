    #define EXTERN_C extern "C"
                                    const struct iface##Vtbl FAR* lpVtbl; \
                                } iface; \
                                typedef const struct iface##Vtbl iface##Vtbl; \
                                const struct iface##Vtbl
#include <guiddef.h>
typedef unsigned long error_status_t;
typedef unsigned short wchar_t;
