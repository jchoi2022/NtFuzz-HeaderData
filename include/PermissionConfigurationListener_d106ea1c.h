#include <alljoyn_c/AjAPI.h>
extern "C" {
typedef struct _alljoyn_permissionconfigurationlistener_handle* alljoyn_permissionconfigurationlistener;
typedef QStatus (AJ_CALL * alljoyn_permissionconfigurationlistener_factoryreset_ptr)(const void* context);
typedef void (AJ_CALL * alljoyn_permissionconfigurationlistener_policychanged_ptr)(const void* context);
typedef void (AJ_CALL * alljoyn_permissionconfigurationlistener_startmanagement_ptr)(const void* context);
typedef void (AJ_CALL * alljoyn_permissionconfigurationlistener_endmanagement_ptr)(const void* context);
typedef struct {
    alljoyn_permissionconfigurationlistener_factoryreset_ptr factory_reset;
    alljoyn_permissionconfigurationlistener_policychanged_ptr policy_changed;
    alljoyn_permissionconfigurationlistener_startmanagement_ptr start_management;
    alljoyn_permissionconfigurationlistener_endmanagement_ptr end_management;
} alljoyn_permissionconfigurationlistener_callbacks;
extern AJ_API alljoyn_permissionconfigurationlistener AJ_CALL alljoyn_permissionconfigurationlistener_create(const alljoyn_permissionconfigurationlistener_callbacks* callbacks, const void* context);
extern AJ_API void AJ_CALL alljoyn_permissionconfigurationlistener_destroy(alljoyn_permissionconfigurationlistener listener);
}
