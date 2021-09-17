#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/MsgArg.h>
#include <alljoyn_c/BusAttachment.h>
#include <alljoyn_c/Session.h>
extern "C" {
typedef struct _alljoyn_aboutproxy_handle* alljoyn_aboutproxy;
extern AJ_API alljoyn_aboutproxy AJ_CALL alljoyn_aboutproxy_create(alljoyn_busattachment bus,
                                                                   const char* busName,
                                                                   alljoyn_sessionid sessionId);
extern AJ_API void AJ_CALL alljoyn_aboutproxy_destroy(alljoyn_aboutproxy proxy);
extern AJ_API QStatus AJ_CALL alljoyn_aboutproxy_getobjectdescription(alljoyn_aboutproxy proxy,
                                                                      alljoyn_msgarg objectDesc);
extern AJ_API QStatus AJ_CALL alljoyn_aboutproxy_getaboutdata(alljoyn_aboutproxy proxy,
                                                              const char* language,
                                                              alljoyn_msgarg data);
extern AJ_API QStatus AJ_CALL alljoyn_aboutproxy_getversion(alljoyn_aboutproxy proxy,
                                                            uint16_t* version);
}
