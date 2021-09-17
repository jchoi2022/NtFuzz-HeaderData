#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/Message.h>
extern "C" {
typedef struct _alljoyn_busobject_handle* alljoyn_busobject;
typedef void (AJ_CALL * alljoyn_messagereceiver_methodhandler_ptr)(alljoyn_busobject bus,
                                                                   const alljoyn_interfacedescription_member* member,
                                                                   alljoyn_message message);
typedef void (AJ_CALL * alljoyn_messagereceiver_replyhandler_ptr)(alljoyn_message message, void* context);
typedef void (AJ_CALL * alljoyn_messagereceiver_signalhandler_ptr)(const alljoyn_interfacedescription_member* member,
                                                                   const char* srcPath, alljoyn_message message);
}
