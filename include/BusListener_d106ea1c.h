#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/TransportMask.h>
#include <alljoyn_c/MsgArg.h>
extern "C" {
typedef struct _alljoyn_buslistener_handle* alljoyn_buslistener;
typedef struct _alljoyn_busattachment_handle* alljoyn_busattachment;
typedef void (AJ_CALL * alljoyn_buslistener_listener_registered_ptr)(const void* context, alljoyn_busattachment bus);
typedef void (AJ_CALL * alljoyn_buslistener_listener_unregistered_ptr)(const void* context);
typedef void (AJ_CALL * alljoyn_buslistener_found_advertised_name_ptr)(const void* context, const char* name, alljoyn_transportmask transport, const char* namePrefix);
typedef void (AJ_CALL * alljoyn_buslistener_lost_advertised_name_ptr)(const void* context, const char* name, alljoyn_transportmask transport, const char* namePrefix);
typedef void (AJ_CALL * alljoyn_buslistener_name_owner_changed_ptr)(const void* context, const char* busName, const char* previousOwner, const char* newOwner);
typedef void (AJ_CALL * alljoyn_buslistener_bus_stopping_ptr)(const void* context);
typedef void (AJ_CALL * alljoyn_buslistener_bus_disconnected_ptr)(const void* context);
typedef void (AJ_CALL * alljoyn_buslistener_bus_prop_changed_ptr)(const void* context, const char* prop_name, alljoyn_msgarg prop_value);
typedef struct {
    alljoyn_buslistener_listener_registered_ptr listener_registered;
    alljoyn_buslistener_listener_unregistered_ptr listener_unregistered;
    alljoyn_buslistener_found_advertised_name_ptr found_advertised_name;
    alljoyn_buslistener_lost_advertised_name_ptr lost_advertised_name;
    alljoyn_buslistener_name_owner_changed_ptr name_owner_changed;
    alljoyn_buslistener_bus_stopping_ptr bus_stopping;
    alljoyn_buslistener_bus_disconnected_ptr bus_disconnected;
    alljoyn_buslistener_bus_prop_changed_ptr property_changed;
} alljoyn_buslistener_callbacks;
extern AJ_API alljoyn_buslistener AJ_CALL alljoyn_buslistener_create(const alljoyn_buslistener_callbacks* callbacks, const void* context);
extern AJ_API void AJ_CALL alljoyn_buslistener_destroy(alljoyn_buslistener listener);
}
