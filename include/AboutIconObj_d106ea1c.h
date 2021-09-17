#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/MsgArg.h>
#include <alljoyn_c/AboutIcon.h>
#include <alljoyn_c/BusAttachment.h>
extern "C" {
typedef struct _alljoyn_abouticonobj_handle* alljoyn_abouticonobj;
extern AJ_API alljoyn_abouticonobj AJ_CALL alljoyn_abouticonobj_create(alljoyn_busattachment bus,
                                                                       alljoyn_abouticon icon);
extern AJ_API void AJ_CALL alljoyn_abouticonobj_destroy(alljoyn_abouticonobj icon);
}
