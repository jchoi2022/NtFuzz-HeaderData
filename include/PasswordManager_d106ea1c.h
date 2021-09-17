#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/Status.h>
extern "C" {
extern AJ_API QStatus AJ_CALL alljoyn_passwordmanager_setcredentials(const char* authMechanism, const char* password);
}
