#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/Session.h>
#include <alljoyn_c/SessionListener.h>
extern "C" {
typedef struct _alljoyn_sessionportlistener_handle* alljoyn_sessionportlistener;
typedef QCC_BOOL (AJ_CALL * alljoyn_sessionportlistener_acceptsessionjoiner_ptr)(const void* context, alljoyn_sessionport sessionPort,
                                                                                 const char* joiner, const alljoyn_sessionopts opts);
typedef void (AJ_CALL * alljoyn_sessionportlistener_sessionjoined_ptr)(const void* context, alljoyn_sessionport sessionPort,
                                                                       alljoyn_sessionid id, const char* joiner);
typedef struct {
    alljoyn_sessionportlistener_acceptsessionjoiner_ptr accept_session_joiner;
    alljoyn_sessionportlistener_sessionjoined_ptr session_joined;
} alljoyn_sessionportlistener_callbacks;
extern AJ_API alljoyn_sessionportlistener AJ_CALL alljoyn_sessionportlistener_create(const alljoyn_sessionportlistener_callbacks* callbacks,
                                                                                     const void* context);
extern AJ_API void AJ_CALL alljoyn_sessionportlistener_destroy(alljoyn_sessionportlistener listener);
}
