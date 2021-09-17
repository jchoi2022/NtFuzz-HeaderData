#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/ApplicationStateListener.h>
#include <alljoyn_c/KeyStoreListener.h>
#include <alljoyn_c/AuthListener.h>
#include <alljoyn_c/BusListener.h>
#include <alljoyn_c/BusObject.h>
#include <alljoyn_c/ProxyBusObject.h>
#include <alljoyn_c/PermissionConfigurationListener.h>
#include <alljoyn_c/PermissionConfigurator.h>
#include <alljoyn_c/InterfaceDescription.h>
#include <alljoyn_c/Session.h>
#include <alljoyn_c/SessionListener.h>
#include <alljoyn_c/SessionPortListener.h>
#include <alljoyn_c/AboutListener.h>
#include <alljoyn_c/Status.h>
extern "C" {
typedef struct _alljoyn_busattachment_handle* alljoyn_busattachment;
typedef void (AJ_CALL * alljoyn_busattachment_joinsessioncb_ptr)(QStatus status, alljoyn_sessionid sessionId, const alljoyn_sessionopts opts, void* context);
typedef void (AJ_CALL * alljoyn_busattachment_setlinktimeoutcb_ptr)(QStatus status, uint32_t timeout, void* context);
extern AJ_API alljoyn_busattachment AJ_CALL alljoyn_busattachment_create(const char* applicationName, QCC_BOOL allowRemoteMessages);
extern AJ_API alljoyn_busattachment AJ_CALL alljoyn_busattachment_create_concurrency(const char* applicationName, QCC_BOOL allowRemoteMessages, uint32_t concurrency);
extern AJ_API void AJ_CALL alljoyn_busattachment_destroy(alljoyn_busattachment bus);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_start(alljoyn_busattachment bus);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_stop(alljoyn_busattachment bus);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_join(alljoyn_busattachment bus);
extern AJ_API uint32_t AJ_CALL alljoyn_busattachment_getconcurrency(alljoyn_busattachment bus);
extern AJ_API const char* AJ_CALL alljoyn_busattachment_getconnectspec(alljoyn_busattachment bus);
extern AJ_API void AJ_CALL alljoyn_busattachment_enableconcurrentcallbacks(alljoyn_busattachment bus);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_createinterface(alljoyn_busattachment bus, const char* name,
                                                                    alljoyn_interfacedescription* iface);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_createinterface_secure(alljoyn_busattachment bus, const char* name,
                                                                           alljoyn_interfacedescription* iface,
                                                                           alljoyn_interfacedescription_securitypolicy secPolicy);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_connect(alljoyn_busattachment bus, const char* connectSpec);
extern AJ_API void AJ_CALL alljoyn_busattachment_registerbuslistener(alljoyn_busattachment bus, alljoyn_buslistener listener);
extern AJ_API void AJ_CALL alljoyn_busattachment_unregisterbuslistener(alljoyn_busattachment bus, alljoyn_buslistener listener);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_findadvertisedname(alljoyn_busattachment bus, const char* namePrefix);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_findadvertisednamebytransport(alljoyn_busattachment bus, const char* namePrefix, alljoyn_transportmask transports);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_cancelfindadvertisedname(alljoyn_busattachment bus, const char* namePrefix);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_cancelfindadvertisednamebytransport(alljoyn_busattachment bus, const char* namePrefix, alljoyn_transportmask transports);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_advertisename(alljoyn_busattachment bus, const char* name, alljoyn_transportmask transports);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_canceladvertisename(alljoyn_busattachment bus, const char* name, alljoyn_transportmask transports);
extern AJ_API const alljoyn_interfacedescription AJ_CALL alljoyn_busattachment_getinterface(alljoyn_busattachment bus, const char* name);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_joinsession(alljoyn_busattachment bus, const char* sessionHost,
                                                                alljoyn_sessionport sessionPort, alljoyn_sessionlistener listener,
                                                                alljoyn_sessionid* sessionId, alljoyn_sessionopts opts);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_joinsessionasync(alljoyn_busattachment bus,
                                                                     const char* sessionHost,
                                                                     alljoyn_sessionport sessionPort,
                                                                     alljoyn_sessionlistener listener,
                                                                     const alljoyn_sessionopts opts,
                                                                     alljoyn_busattachment_joinsessioncb_ptr callback,
                                                                     void* context);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_registerbusobject(alljoyn_busattachment bus, alljoyn_busobject obj);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_registerbusobject_secure(alljoyn_busattachment bus, alljoyn_busobject obj);
extern AJ_API void AJ_CALL alljoyn_busattachment_unregisterbusobject(alljoyn_busattachment bus, alljoyn_busobject object);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_requestname(alljoyn_busattachment bus, const char* requestedName, uint32_t flags);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_releasename(alljoyn_busattachment bus, const char* name);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_bindsessionport(alljoyn_busattachment bus, alljoyn_sessionport* sessionPort,
                                                                    const alljoyn_sessionopts opts, alljoyn_sessionportlistener listener);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_unbindsessionport(alljoyn_busattachment bus, alljoyn_sessionport sessionPort);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_enablepeersecurity(alljoyn_busattachment bus, const char* authMechanisms,
                                                                       alljoyn_authlistener listener, const char* keyStoreFileName,
                                                                       QCC_BOOL isShared);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_enablepeersecuritywithpermissionconfigurationlistener(alljoyn_busattachment bus,
                                                                                                          const char* authMechanisms,
                                                                                                          alljoyn_authlistener authListener,
                                                                                                          const char* keyStoreFileName,
                                                                                                          QCC_BOOL isShared,
                                                                                                          alljoyn_permissionconfigurationlistener permissionConfigurationListener);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_busattachment_ispeersecurityenabled(alljoyn_busattachment bus);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_createinterfacesfromxml(alljoyn_busattachment bus, const char* xml);
extern AJ_API size_t AJ_CALL alljoyn_busattachment_getinterfaces(const alljoyn_busattachment bus,
                                                                 const alljoyn_interfacedescription* ifaces, size_t numIfaces);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_deleteinterface(alljoyn_busattachment bus, alljoyn_interfacedescription iface);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_busattachment_isstarted(alljoyn_busattachment bus);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_busattachment_isstopping(alljoyn_busattachment bus);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_busattachment_isconnected(const alljoyn_busattachment bus);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_disconnect(alljoyn_busattachment bus, const char* unused);
extern AJ_API const alljoyn_proxybusobject AJ_CALL alljoyn_busattachment_getdbusproxyobj(alljoyn_busattachment bus);
extern AJ_API const alljoyn_proxybusobject AJ_CALL alljoyn_busattachment_getalljoynproxyobj(alljoyn_busattachment bus);
extern AJ_API const alljoyn_proxybusobject AJ_CALL alljoyn_busattachment_getalljoyndebugobj(alljoyn_busattachment bus);
extern AJ_API const char* AJ_CALL alljoyn_busattachment_getuniquename(const alljoyn_busattachment bus);
extern AJ_API const char* AJ_CALL alljoyn_busattachment_getglobalguidstring(const alljoyn_busattachment bus);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_registersignalhandler(alljoyn_busattachment bus,
                                                                          alljoyn_messagereceiver_signalhandler_ptr signal_handler,
                                                                          const alljoyn_interfacedescription_member member,
                                                                          const char* srcPath);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_registersignalhandlerwithrule(alljoyn_busattachment bus,
                                                                                  alljoyn_messagereceiver_signalhandler_ptr signal_handler,
                                                                                  const alljoyn_interfacedescription_member member,
                                                                                  const char* matchRule);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_unregistersignalhandler(alljoyn_busattachment bus,
                                                                            alljoyn_messagereceiver_signalhandler_ptr signal_handler,
                                                                            const alljoyn_interfacedescription_member member,
                                                                            const char* srcPath);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_unregistersignalhandlerwithrule(alljoyn_busattachment bus,
                                                                                    alljoyn_messagereceiver_signalhandler_ptr signal_handler,
                                                                                    const alljoyn_interfacedescription_member member,
                                                                                    const char* matchRule);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_unregisterallhandlers(alljoyn_busattachment bus);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_registerkeystorelistener(alljoyn_busattachment bus, alljoyn_keystorelistener listener);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_reloadkeystore(alljoyn_busattachment bus);
extern AJ_API void AJ_CALL alljoyn_busattachment_clearkeystore(alljoyn_busattachment bus);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_clearkeys(alljoyn_busattachment bus, const char* guid);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_setkeyexpiration(alljoyn_busattachment bus, const char* guid, uint32_t timeout);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_getkeyexpiration(alljoyn_busattachment bus, const char* guid, uint32_t* timeout);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_addlogonentry(alljoyn_busattachment bus, const char* authMechanism,
                                                                  const char* userName, const char* password);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_addmatch(alljoyn_busattachment bus, const char* rule);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_removematch(alljoyn_busattachment bus, const char* rule);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_setsessionlistener(alljoyn_busattachment bus, alljoyn_sessionid sessionId,
                                                                       alljoyn_sessionlistener listener);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_leavesession(alljoyn_busattachment bus, alljoyn_sessionid sessionId);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_secureconnection(alljoyn_busattachment bus, const char* name, QCC_BOOL forceAuth);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_secureconnectionasync(alljoyn_busattachment bus, const char* name, QCC_BOOL forceAuth);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_removesessionmember(alljoyn_busattachment bus, alljoyn_sessionid sessionId, const char* memberName);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_setlinktimeout(alljoyn_busattachment bus, alljoyn_sessionid sessionid, uint32_t* linkTimeout);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_setlinktimeoutasync(alljoyn_busattachment bus, alljoyn_sessionid sessionid,
                                                                        uint32_t linkTimeout, alljoyn_busattachment_setlinktimeoutcb_ptr callback,
                                                                        void* context);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_namehasowner(alljoyn_busattachment bus, const char* name, QCC_BOOL* hasOwner);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_getpeerguid(alljoyn_busattachment bus, const char* name, char* guid, size_t* guidSz);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_setdaemondebug(alljoyn_busattachment bus, const char* module, uint32_t level);
extern AJ_API uint32_t AJ_CALL alljoyn_busattachment_gettimestamp();
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_ping(alljoyn_busattachment bus, const char* name, uint32_t timeout);
extern AJ_API void AJ_CALL alljoyn_busattachment_registeraboutlistener(alljoyn_busattachment bus,
                                                                       alljoyn_aboutlistener aboutListener);
extern AJ_API void AJ_CALL alljoyn_busattachment_unregisteraboutlistener(alljoyn_busattachment bus,
                                                                         alljoyn_aboutlistener aboutListener);
extern AJ_API void AJ_CALL alljoyn_busattachment_unregisterallaboutlisteners(alljoyn_busattachment bus);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_whoimplements_interfaces(alljoyn_busattachment bus,
                                                                             const char** implementsInterfaces,
                                                                             size_t numberInterfaces);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_whoimplements_interface(alljoyn_busattachment bus,
                                                                            const char* implementsInterface);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_cancelwhoimplements_interfaces(alljoyn_busattachment bus,
                                                                                   const char** implementsInterfaces,
                                                                                   size_t numberInterfaces);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_cancelwhoimplements_interface(alljoyn_busattachment bus,
                                                                                  const char* implementsInterface);
extern AJ_API const alljoyn_permissionconfigurator AJ_CALL alljoyn_busattachment_getpermissionconfigurator(alljoyn_busattachment bus);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_registerapplicationstatelistener(alljoyn_busattachment bus,
                                                                                     alljoyn_applicationstatelistener listener);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_unregisterapplicationstatelistener(alljoyn_busattachment bus,
                                                                                       alljoyn_applicationstatelistener listener);
extern AJ_API QStatus AJ_CALL alljoyn_busattachment_deletedefaultkeystore(const char* applicationName);
}
