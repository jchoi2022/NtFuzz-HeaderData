#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/Session.h>
extern "C" {
typedef enum {
    ALLJOYN_SESSIONLOST_INVALID = 0x00,
    ALLJOYN_SESSIONLOST_REMOTE_END_LEFT_SESSION = 0x01,
    ALLJOYN_SESSIONLOST_REMOTE_END_CLOSED_ABRUPTLY = 0x02,
    ALLJOYN_SESSIONLOST_REMOVED_BY_BINDER = 0x03,
    ALLJOYN_SESSIONLOST_LINK_TIMEOUT = 0x04,
    ALLJOYN_SESSIONLOST_REASON_OTHER = 0x05
} alljoyn_sessionlostreason;
typedef struct _alljoyn_sessionlistener_handle* alljoyn_sessionlistener;
typedef void (AJ_CALL * alljoyn_sessionlistener_sessionlost_ptr)(const void* context, alljoyn_sessionid sessionId, alljoyn_sessionlostreason reason);
typedef void (AJ_CALL * alljoyn_sessionlistener_sessionmemberadded_ptr)(const void* context, alljoyn_sessionid sessionId,
                                                                        const char* uniqueName);
typedef void (AJ_CALL * alljoyn_sessionlistener_sessionmemberremoved_ptr)(const void* context, alljoyn_sessionid sessionId,
                                                                          const char* uniqueName);
typedef struct {
    alljoyn_sessionlistener_sessionlost_ptr session_lost;
    alljoyn_sessionlistener_sessionmemberadded_ptr session_member_added;
    alljoyn_sessionlistener_sessionmemberremoved_ptr session_member_removed;
} alljoyn_sessionlistener_callbacks;
extern AJ_API alljoyn_sessionlistener AJ_CALL alljoyn_sessionlistener_create(const alljoyn_sessionlistener_callbacks* callbacks,
                                                                             const void* context);
extern AJ_API void AJ_CALL alljoyn_sessionlistener_destroy(alljoyn_sessionlistener listener);
}
