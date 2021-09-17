#error No OS GROUP defined.
#include <assert.h>
typedef int32_t QCC_BOOL;
extern "C" {
typedef enum {
    UNANNOUNCED,
    ANNOUNCED
} alljoyn_about_announceflag;
extern AJ_API int AJ_CALL alljoyn_unity_deferred_callbacks_process();
extern AJ_API void AJ_CALL alljoyn_unity_set_deferred_callback_mainthread_only(QCC_BOOL mainthread_only);
}
