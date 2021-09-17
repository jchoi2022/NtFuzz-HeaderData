#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/MsgArg.h>
extern "C" {
typedef struct _alljoyn_aboutdatalistener_handle* alljoyn_aboutdatalistener;
typedef QStatus (AJ_CALL * alljoyn_aboutdatalistener_getaboutdata_ptr)(const void* context,
                                                                       alljoyn_msgarg msgArg,
                                                                       const char* language);
typedef QStatus (AJ_CALL * alljoyn_aboutdatalistener_getannouncedaboutdata_ptr)(const void* context,
                                                                                alljoyn_msgarg msgArg);
typedef struct {
    alljoyn_aboutdatalistener_getaboutdata_ptr about_datalistener_getaboutdata;
    alljoyn_aboutdatalistener_getannouncedaboutdata_ptr about_datalistener_getannouncedaboutdata;
} alljoyn_aboutdatalistener_callbacks;
extern AJ_API alljoyn_aboutdatalistener AJ_CALL alljoyn_aboutdatalistener_create(const alljoyn_aboutdatalistener_callbacks* callbacks,
                                                                                 const void* context);
extern AJ_API void AJ_CALL alljoyn_aboutdatalistener_destroy(alljoyn_aboutdatalistener listener);
}
