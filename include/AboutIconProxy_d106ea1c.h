#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/AboutIcon.h>
#include <alljoyn_c/BusAttachment.h>
#include <alljoyn_c/Session.h>
extern "C" {
typedef struct _alljoyn_abouticonproxy_handle* alljoyn_abouticonproxy;
extern AJ_API alljoyn_abouticonproxy AJ_CALL alljoyn_abouticonproxy_create(alljoyn_busattachment bus,
                                                                           const char* busName,
                                                                           alljoyn_sessionid sessionId);
extern AJ_API void AJ_CALL alljoyn_abouticonproxy_destroy(alljoyn_abouticonproxy proxy);
extern AJ_API QStatus AJ_CALL alljoyn_abouticonproxy_geticon(alljoyn_abouticonproxy proxy,
                                                             alljoyn_abouticon icon);
extern AJ_API QStatus AJ_CALL alljoyn_abouticonproxy_getversion(alljoyn_abouticonproxy proxy,
                                                                uint16_t* version);
}
