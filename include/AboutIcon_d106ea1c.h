#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/MsgArg.h>
extern "C" {
typedef struct _alljoyn_abouticon_handle* alljoyn_abouticon;
extern AJ_API alljoyn_abouticon AJ_CALL alljoyn_abouticon_create();
extern AJ_API void AJ_CALL alljoyn_abouticon_destroy(alljoyn_abouticon icon);
extern AJ_API void AJ_CALL alljoyn_abouticon_getcontent(alljoyn_abouticon icon,
                                                        const uint8_t** data,
                                                        size_t* size);
extern AJ_API QStatus AJ_CALL alljoyn_abouticon_setcontent(alljoyn_abouticon icon,
                                                           const char* type,
                                                           uint8_t* data,
                                                           size_t csize,
                                                           bool ownsData);
extern AJ_API void AJ_CALL alljoyn_abouticon_geturl(alljoyn_abouticon icon,
                                                    const char** type,
                                                    const char** url);
extern AJ_API QStatus AJ_CALL alljoyn_abouticon_seturl(alljoyn_abouticon icon,
                                                       const char* type,
                                                       const char* url);
extern AJ_API void AJ_CALL alljoyn_abouticon_clear(alljoyn_abouticon icon);
extern AJ_API QStatus AJ_CALL alljoyn_abouticon_setcontent_frommsgarg(alljoyn_abouticon icon,
                                                                      const alljoyn_msgarg arg);
}
