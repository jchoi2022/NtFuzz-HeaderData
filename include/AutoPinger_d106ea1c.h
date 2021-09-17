#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/BusAttachment.h>
extern "C"
{
typedef struct _alljoyn_pinglistener_handle* alljoyn_pinglistener;
typedef void (AJ_CALL * alljoyn_autopinger_destination_lost_ptr)(const void* context,
                                                                 const char* group,
                                                                 const char* destination);
typedef void (AJ_CALL * alljoyn_autopinger_destination_found_ptr)(const void* context,
                                                                  const char* group,
                                                                  const char* destination);
typedef struct {
    alljoyn_autopinger_destination_found_ptr destination_found;
    alljoyn_autopinger_destination_lost_ptr destination_lost;
} alljoyn_pinglistener_callback;
extern AJ_API alljoyn_pinglistener AJ_CALL alljoyn_pinglistener_create(const alljoyn_pinglistener_callback* callback,
                                                                       const void* context);
extern AJ_API void AJ_CALL alljoyn_pinglistener_destroy(alljoyn_pinglistener listener);
typedef struct _alljoyn_autopinger_handle* alljoyn_autopinger;
extern AJ_API alljoyn_autopinger AJ_CALL alljoyn_autopinger_create(alljoyn_busattachment bus);
extern AJ_API void AJ_CALL alljoyn_autopinger_destroy(alljoyn_autopinger autopinger);
extern AJ_API void AJ_CALL alljoyn_autopinger_pause(alljoyn_autopinger autopinger);
extern AJ_API void AJ_CALL alljoyn_autopinger_resume(alljoyn_autopinger autopinger);
extern AJ_API void AJ_CALL alljoyn_autopinger_addpinggroup(alljoyn_autopinger autopinger,
                                                           const char* group,
                                                           alljoyn_pinglistener listener,
                                                           uint32_t pinginterval = 5);
extern AJ_API void AJ_CALL alljoyn_autopinger_removepinggroup(alljoyn_autopinger autopinger,
                                                              const char* group);
extern AJ_API QStatus AJ_CALL alljoyn_autopinger_setpinginterval(alljoyn_autopinger autopinger,
                                                                 const char* group,
                                                                 uint32_t pinginterval);
extern AJ_API QStatus AJ_CALL alljoyn_autopinger_adddestination(alljoyn_autopinger autopinger,
                                                                const char* group,
                                                                const char* destination);
extern AJ_API QStatus AJ_CALL alljoyn_autopinger_removedestination(alljoyn_autopinger autopinger,
                                                                   const char* group,
                                                                   const char* destination,
                                                                   QCC_BOOL removeall = false);
}
