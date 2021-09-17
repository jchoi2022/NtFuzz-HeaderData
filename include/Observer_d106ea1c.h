#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/BusAttachment.h>
#include <alljoyn_c/ProxyBusObject.h>
extern "C" {
typedef struct _alljoyn_proxybusobject_ref_handle* alljoyn_proxybusobject_ref;
AJ_API alljoyn_proxybusobject_ref AJ_CALL alljoyn_proxybusobject_ref_create(alljoyn_proxybusobject proxy);
AJ_API alljoyn_proxybusobject AJ_CALL alljoyn_proxybusobject_ref_get(alljoyn_proxybusobject_ref ref);
AJ_API void AJ_CALL alljoyn_proxybusobject_ref_incref(alljoyn_proxybusobject_ref ref);
AJ_API void AJ_CALL alljoyn_proxybusobject_ref_decref(alljoyn_proxybusobject_ref ref);
typedef struct _alljoyn_observerlistener_handle* alljoyn_observerlistener;
typedef void (AJ_CALL * alljoyn_observer_object_discovered_ptr)(const void* context,
                                                                alljoyn_proxybusobject_ref proxyref);
typedef void (AJ_CALL * alljoyn_observer_object_lost_ptr)(const void* context,
                                                          alljoyn_proxybusobject_ref proxyref);
typedef struct {
    alljoyn_observer_object_discovered_ptr object_discovered;
    alljoyn_observer_object_lost_ptr object_lost;
} alljoyn_observerlistener_callback;
extern AJ_API alljoyn_observerlistener AJ_CALL alljoyn_observerlistener_create(const alljoyn_observerlistener_callback* callback,
                                                                               const void* context);
extern AJ_API void AJ_CALL alljoyn_observerlistener_destroy(alljoyn_observerlistener listener);
typedef struct _alljoyn_observer_handle* alljoyn_observer;
extern AJ_API alljoyn_observer AJ_CALL alljoyn_observer_create(alljoyn_busattachment bus,
                                                               const char* mandatoryInterfaces[],
                                                               size_t numMandatoryInterfaces);
extern AJ_API void AJ_CALL alljoyn_observer_destroy(alljoyn_observer observer);
extern AJ_API void AJ_CALL alljoyn_observer_registerlistener(alljoyn_observer observer,
                                                             alljoyn_observerlistener listener,
                                                             QCC_BOOL triggerOnExisting);
extern AJ_API void AJ_CALL alljoyn_observer_unregisterlistener(alljoyn_observer observer,
                                                               alljoyn_observerlistener listener);
extern AJ_API void AJ_CALL alljoyn_observer_unregisteralllisteners(alljoyn_observer observer);
extern AJ_API alljoyn_proxybusobject_ref AJ_CALL alljoyn_observer_get(alljoyn_observer observer,
                                                                      const char* uniqueBusName,
                                                                      const char* objectPath);
extern AJ_API alljoyn_proxybusobject_ref AJ_CALL alljoyn_observer_getfirst(alljoyn_observer observer);
extern AJ_API alljoyn_proxybusobject_ref AJ_CALL alljoyn_observer_getnext(alljoyn_observer observer,
                                                                          alljoyn_proxybusobject_ref proxyref);
}
