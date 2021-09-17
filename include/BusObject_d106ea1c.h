#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/InterfaceDescription.h>
#include <alljoyn_c/MsgArg.h>
#include <alljoyn_c/MessageReceiver.h>
#include <alljoyn_c/Session.h>
#include <alljoyn_c/Status.h>
extern "C" {
typedef struct _alljoyn_busobject_handle* alljoyn_busobject;
typedef QStatus (AJ_CALL * alljoyn_busobject_prop_get_ptr)(const void* context, const char* ifcName, const char* propName, alljoyn_msgarg val);
typedef QStatus (AJ_CALL * alljoyn_busobject_prop_set_ptr)(const void* context, const char* ifcName, const char* propName, alljoyn_msgarg val);
typedef void (AJ_CALL * alljoyn_busobject_object_registration_ptr)(const void* context);
typedef struct {
    alljoyn_busobject_prop_get_ptr property_get;
    alljoyn_busobject_prop_set_ptr property_set;
    alljoyn_busobject_object_registration_ptr object_registered;
    alljoyn_busobject_object_registration_ptr object_unregistered;
} alljoyn_busobject_callbacks;
typedef struct {
    const alljoyn_interfacedescription_member* member;
    alljoyn_messagereceiver_methodhandler_ptr method_handler;
} alljoyn_busobject_methodentry;
extern AJ_API alljoyn_busobject AJ_CALL alljoyn_busobject_create(const char* path, QCC_BOOL isPlaceholder,
                                                                 const alljoyn_busobject_callbacks* callbacks_in, const void* context_in);
extern AJ_API void AJ_CALL alljoyn_busobject_destroy(alljoyn_busobject bus);
extern AJ_API const char* AJ_CALL alljoyn_busobject_getpath(alljoyn_busobject bus);
extern AJ_API void AJ_CALL alljoyn_busobject_emitpropertychanged(alljoyn_busobject bus,
                                                                 const char* ifcName,
                                                                 const char* propName,
                                                                 alljoyn_msgarg val,
                                                                 alljoyn_sessionid id);
extern AJ_API void AJ_CALL alljoyn_busobject_emitpropertieschanged(alljoyn_busobject bus,
                                                                   const char* ifcName,
                                                                   const char** propNames,
                                                                   size_t numProps,
                                                                   alljoyn_sessionid id);
extern AJ_API size_t AJ_CALL alljoyn_busobject_getname(alljoyn_busobject bus, char* buffer, size_t bufferSz);
extern AJ_API QStatus AJ_CALL alljoyn_busobject_addinterface(alljoyn_busobject bus,
                                                             const alljoyn_interfacedescription iface);
extern AJ_API QStatus AJ_CALL alljoyn_busobject_addmethodhandler(alljoyn_busobject bus,
                                                                 const alljoyn_interfacedescription_member member,
                                                                 alljoyn_messagereceiver_methodhandler_ptr handler,
                                                                 void* context);
extern AJ_API QStatus AJ_CALL alljoyn_busobject_addmethodhandlers(alljoyn_busobject bus,
                                                                  const alljoyn_busobject_methodentry* entries,
                                                                  size_t numEntries);
extern AJ_API QStatus AJ_CALL alljoyn_busobject_methodreply_args(alljoyn_busobject bus, alljoyn_message msg,
                                                                 const alljoyn_msgarg args, size_t numArgs);
extern AJ_API QStatus AJ_CALL alljoyn_busobject_methodreply_err(alljoyn_busobject bus, alljoyn_message msg,
                                                                const char* error, const char* errorMessage);
extern AJ_API QStatus AJ_CALL alljoyn_busobject_methodreply_status(alljoyn_busobject bus, alljoyn_message msg, QStatus status);
extern AJ_API const alljoyn_busattachment AJ_CALL alljoyn_busobject_getbusattachment(alljoyn_busobject bus);
extern AJ_API QStatus AJ_CALL alljoyn_busobject_signal(alljoyn_busobject bus,
                                                       const char* destination,
                                                       alljoyn_sessionid sessionId,
                                                       const alljoyn_interfacedescription_member signal,
                                                       const alljoyn_msgarg args,
                                                       size_t numArgs,
                                                       uint16_t timeToLive,
                                                       uint8_t flags,
                                                       alljoyn_message msg);
extern AJ_API QStatus AJ_CALL alljoyn_busobject_cancelsessionlessmessage_serial(alljoyn_busobject bus, uint32_t serialNumber);
extern AJ_API QStatus AJ_CALL alljoyn_busobject_cancelsessionlessmessage(alljoyn_busobject bus, const alljoyn_message msg);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_busobject_issecure(alljoyn_busobject bus);
extern AJ_API size_t AJ_CALL alljoyn_busobject_getannouncedinterfacenames(alljoyn_busobject bus,
                                                                          const char** interfaces,
                                                                          size_t numInterfaces);
extern AJ_API QStatus AJ_CALL alljoyn_busobject_setannounceflag(alljoyn_busobject bus,
                                                                const alljoyn_interfacedescription iface,
                                                                alljoyn_about_announceflag isAnnounced);
extern AJ_API QStatus AJ_CALL alljoyn_busobject_addinterface_announced(alljoyn_busobject bus,
                                                                       const alljoyn_interfacedescription iface);
}
