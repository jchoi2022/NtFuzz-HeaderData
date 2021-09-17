#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/InterfaceDescription.h>
#include <alljoyn_c/MessageReceiver.h>
#include <alljoyn_c/MsgArg.h>
#include <alljoyn_c/Session.h>
#include <alljoyn_c/Status.h>
extern "C" {
typedef struct _alljoyn_proxybusobject_handle* alljoyn_proxybusobject;
typedef struct _alljoyn_busattachment_handle* alljoyn_busattachment;
typedef void (AJ_CALL * alljoyn_proxybusobject_listener_introspectcb_ptr)(QStatus status, alljoyn_proxybusobject obj, void* context);
typedef void (AJ_CALL * alljoyn_proxybusobject_listener_getpropertycb_ptr)(QStatus status, alljoyn_proxybusobject obj, const alljoyn_msgarg value, void* context);
typedef void (AJ_CALL * alljoyn_proxybusobject_listener_getallpropertiescb_ptr)(QStatus status, alljoyn_proxybusobject obj, const alljoyn_msgarg values, void* context);
typedef void (AJ_CALL * alljoyn_proxybusobject_listener_setpropertycb_ptr)(QStatus status, alljoyn_proxybusobject obj, void* context);
typedef void (AJ_CALL * alljoyn_proxybusobject_listener_propertieschanged_ptr)(alljoyn_proxybusobject obj, const char* ifaceName, const alljoyn_msgarg changed, const alljoyn_msgarg invalidated, void* context);
extern AJ_API alljoyn_proxybusobject AJ_CALL alljoyn_proxybusobject_create(alljoyn_busattachment bus, const char* service,
                                                                           const char* path, alljoyn_sessionid sessionId);
extern AJ_API alljoyn_proxybusobject AJ_CALL alljoyn_proxybusobject_create_secure(alljoyn_busattachment bus, const char* service,
                                                                                  const char* path, alljoyn_sessionid sessionId);
extern AJ_API void AJ_CALL alljoyn_proxybusobject_destroy(alljoyn_proxybusobject proxyObj);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_addinterface(alljoyn_proxybusobject proxyObj, const alljoyn_interfacedescription iface);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_addinterface_by_name(alljoyn_proxybusobject proxyObj, const char* name);
extern AJ_API size_t AJ_CALL alljoyn_proxybusobject_getchildren(alljoyn_proxybusobject proxyObj, alljoyn_proxybusobject* children, size_t numChildren);
extern AJ_API alljoyn_proxybusobject AJ_CALL alljoyn_proxybusobject_getchild(alljoyn_proxybusobject proxyObj, const char* path);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_addchild(alljoyn_proxybusobject proxyObj, const alljoyn_proxybusobject child);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_removechild(alljoyn_proxybusobject proxyObj, const char* path);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_introspectremoteobject(alljoyn_proxybusobject proxyObj);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_introspectremoteobjectasync(alljoyn_proxybusobject proxyObj, alljoyn_proxybusobject_listener_introspectcb_ptr callback, void* context);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_getproperty(alljoyn_proxybusobject proxyObj, const char* iface, const char* property, alljoyn_msgarg value);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_getpropertyasync(alljoyn_proxybusobject proxyObj,
                                                                      const char* iface,
                                                                      const char* property,
                                                                      alljoyn_proxybusobject_listener_getpropertycb_ptr callback,
                                                                      uint32_t timeout,
                                                                      void* context);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_getallproperties(alljoyn_proxybusobject proxyObj, const char* iface, alljoyn_msgarg values);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_getallpropertiesasync(alljoyn_proxybusobject proxyObj,
                                                                            const char* iface,
                                                                            alljoyn_proxybusobject_listener_getallpropertiescb_ptr callback,
                                                                            uint32_t timeout,
                                                                            void* context);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_setproperty(alljoyn_proxybusobject proxyObj, const char* iface, const char* property, alljoyn_msgarg value);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_registerpropertieschangedlistener(alljoyn_proxybusobject proxyObj,
                                                                                       const char* iface,
                                                                                       const char** properties,
                                                                                       size_t numProperties,
                                                                                       alljoyn_proxybusobject_listener_propertieschanged_ptr callback,
                                                                                       void* context);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_unregisterpropertieschangedlistener(alljoyn_proxybusobject proxyObj,
                                                                                         const char* iface,
                                                                                         alljoyn_proxybusobject_listener_propertieschanged_ptr callback);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_setpropertyasync(alljoyn_proxybusobject proxyObj,
                                                                      const char* iface,
                                                                      const char* property,
                                                                      alljoyn_msgarg value,
                                                                      alljoyn_proxybusobject_listener_setpropertycb_ptr callback,
                                                                      uint32_t timeout,
                                                                      void* context);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_methodcall(alljoyn_proxybusobject proxyObj,
                                                                const char* ifaceName,
                                                                const char* methodName,
                                                                const alljoyn_msgarg args,
                                                                size_t numArgs,
                                                                alljoyn_message replyMsg,
                                                                uint32_t timeout,
                                                                uint8_t flags);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_methodcall_member(alljoyn_proxybusobject proxyObj,
                                                                       const alljoyn_interfacedescription_member method,
                                                                       const alljoyn_msgarg args,
                                                                       size_t numArgs,
                                                                       alljoyn_message replyMsg,
                                                                       uint32_t timeout,
                                                                       uint8_t flags);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_methodcall_noreply(alljoyn_proxybusobject proxyObj,
                                                                        const char* ifaceName,
                                                                        const char* methodName,
                                                                        const alljoyn_msgarg args,
                                                                        size_t numArgs,
                                                                        uint8_t flags);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_methodcall_member_noreply(alljoyn_proxybusobject proxyObj,
                                                                               const alljoyn_interfacedescription_member method,
                                                                               const alljoyn_msgarg args,
                                                                               size_t numArgs,
                                                                               uint8_t flags);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_methodcallasync(alljoyn_proxybusobject proxyObj,
                                                                     const char* ifaceName,
                                                                     const char* methodName,
                                                                     alljoyn_messagereceiver_replyhandler_ptr replyFunc,
                                                                     const alljoyn_msgarg args,
                                                                     size_t numArgs,
                                                                     void* context,
                                                                     uint32_t timeout,
                                                                     uint8_t flags);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_methodcallasync_member(alljoyn_proxybusobject proxyObj,
                                                                            const alljoyn_interfacedescription_member method,
                                                                            alljoyn_messagereceiver_replyhandler_ptr replyFunc,
                                                                            const alljoyn_msgarg args,
                                                                            size_t numArgs,
                                                                            void* context,
                                                                            uint32_t timeout,
                                                                            uint8_t flags);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_parsexml(alljoyn_proxybusobject proxyObj, const char* xml, const char* identifier);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_secureconnection(alljoyn_proxybusobject proxyObj, QCC_BOOL forceAuth);
extern AJ_API QStatus AJ_CALL alljoyn_proxybusobject_secureconnectionasync(alljoyn_proxybusobject proxyObj, QCC_BOOL forceAuth);
extern AJ_API const alljoyn_interfacedescription AJ_CALL alljoyn_proxybusobject_getinterface(alljoyn_proxybusobject proxyObj, const char* iface);
extern AJ_API size_t AJ_CALL alljoyn_proxybusobject_getinterfaces(alljoyn_proxybusobject proxyObj, const alljoyn_interfacedescription* ifaces, size_t numIfaces);
extern AJ_API const char* AJ_CALL alljoyn_proxybusobject_getpath(alljoyn_proxybusobject proxyObj);
extern AJ_API const char* AJ_CALL alljoyn_proxybusobject_getservicename(alljoyn_proxybusobject proxyObj);
extern AJ_API const char* AJ_CALL alljoyn_proxybusobject_getuniquename(alljoyn_proxybusobject proxyObj);
extern AJ_API alljoyn_sessionid AJ_CALL alljoyn_proxybusobject_getsessionid(alljoyn_proxybusobject proxyObj);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_proxybusobject_implementsinterface(alljoyn_proxybusobject proxyObj, const char* iface);
extern AJ_API alljoyn_proxybusobject AJ_CALL alljoyn_proxybusobject_copy(const alljoyn_proxybusobject source);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_proxybusobject_isvalid(alljoyn_proxybusobject proxyObj);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_proxybusobject_issecure(alljoyn_proxybusobject proxyObj);
extern AJ_API void AJ_CALL alljoyn_proxybusobject_enablepropertycaching(alljoyn_proxybusobject proxyObj);
}
