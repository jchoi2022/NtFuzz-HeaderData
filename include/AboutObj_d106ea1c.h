#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/AboutData.h>
#include <alljoyn_c/AboutDataListener.h>
#include <alljoyn_c/BusAttachment.h>
#include <alljoyn_c/Session.h>
#include <alljoyn_c/SessionListener.h>
#include <alljoyn_c/SessionPortListener.h>
extern "C" {
typedef struct _alljoyn_aboutobj_handle* alljoyn_aboutobj;
extern AJ_API alljoyn_aboutobj AJ_CALL alljoyn_aboutobj_create(alljoyn_busattachment bus,
                                                               alljoyn_about_announceflag isAnnounced);
extern AJ_API void AJ_CALL alljoyn_aboutobj_destroy(alljoyn_aboutobj obj);
extern AJ_API QStatus AJ_CALL alljoyn_aboutobj_announce(alljoyn_aboutobj obj,
                                                        alljoyn_sessionport sessionPort,
                                                        alljoyn_aboutdata aboutData);
QStatus AJ_CALL alljoyn_aboutobj_announce_using_datalistener(alljoyn_aboutobj obj,
                                                             alljoyn_sessionport sessionPort,
                                                             alljoyn_aboutdatalistener aboutListener);
extern AJ_API QStatus AJ_CALL alljoyn_aboutobj_unannounce(alljoyn_aboutobj obj);
}
