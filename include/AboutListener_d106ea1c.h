#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/MsgArg.h>
#include <alljoyn_c/Session.h>
#include <alljoyn_c/SessionListener.h>
#include <alljoyn_c/SessionPortListener.h>
extern "C" {
typedef struct _alljoyn_aboutlistener_handle* alljoyn_aboutlistener;
typedef void (AJ_CALL * alljoyn_about_announced_ptr)(const void* context,
                                                     const char* busName,
                                                     uint16_t version,
                                                     alljoyn_sessionport port,
                                                     const alljoyn_msgarg objectDescriptionArg,
                                                     const alljoyn_msgarg aboutDataArg);
typedef struct {
    alljoyn_about_announced_ptr about_listener_announced;
} alljoyn_aboutlistener_callback;
extern AJ_API alljoyn_aboutlistener AJ_CALL alljoyn_aboutlistener_create(const alljoyn_aboutlistener_callback* callback,
                                                                         const void* context);
extern AJ_API void AJ_CALL alljoyn_aboutlistener_destroy(alljoyn_aboutlistener listener);
}
