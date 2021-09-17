#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/Status.h>
#include <alljoyn_c/PermissionConfigurator.h>
extern "C" {
typedef struct _alljoyn_applicationstatelistener_handle* alljoyn_applicationstatelistener;
typedef void (AJ_CALL * alljoyn_applicationstatelistener_state_ptr)(AJ_PCSTR busName,
                                                                    AJ_PCSTR publicKey,
                                                                    alljoyn_applicationstate applicationState,
                                                                    void* context);
typedef struct {
    alljoyn_applicationstatelistener_state_ptr state;
} alljoyn_applicationstatelistener_callbacks;
AJ_API alljoyn_applicationstatelistener AJ_CALL alljoyn_applicationstatelistener_create(const alljoyn_applicationstatelistener_callbacks* callbacks, void* context);
AJ_API void AJ_CALL alljoyn_applicationstatelistener_destroy(alljoyn_applicationstatelistener listener);
}
