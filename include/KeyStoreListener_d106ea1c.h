#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/Status.h>
extern "C" {
typedef struct _alljoyn_keystore_handle* alljoyn_keystore;
typedef struct _alljoyn_keystorelistener_handle* alljoyn_keystorelistener;
typedef QStatus (AJ_CALL * alljoyn_keystorelistener_loadrequest_ptr)(const void* context, alljoyn_keystorelistener listener, alljoyn_keystore keyStore);
typedef QStatus (AJ_CALL * alljoyn_keystorelistener_storerequest_ptr)(const void* context, alljoyn_keystorelistener listener, alljoyn_keystore keyStore);
typedef QStatus (AJ_CALL * alljoyn_keystorelistener_acquireexclusivelock_ptr)(const void* context, alljoyn_keystorelistener listener);
typedef void (AJ_CALL * alljoyn_keystorelistener_releaseexclusivelock_ptr)(const void* context, alljoyn_keystorelistener listener);
typedef struct {
    alljoyn_keystorelistener_loadrequest_ptr load_request;
    alljoyn_keystorelistener_storerequest_ptr store_request;
} alljoyn_keystorelistener_callbacks;
typedef struct {
    alljoyn_keystorelistener_loadrequest_ptr load_request;
    alljoyn_keystorelistener_storerequest_ptr store_request;
    alljoyn_keystorelistener_acquireexclusivelock_ptr acquire_exclusive_lock;
    alljoyn_keystorelistener_releaseexclusivelock_ptr release_exclusive_lock;
} alljoyn_keystorelistener_with_synchronization_callbacks;
extern AJ_API alljoyn_keystorelistener AJ_CALL alljoyn_keystorelistener_create(const alljoyn_keystorelistener_callbacks* callbacks,
                                                                               const void* context);
extern AJ_API alljoyn_keystorelistener AJ_CALL alljoyn_keystorelistener_with_synchronization_create(const alljoyn_keystorelistener_with_synchronization_callbacks* callbacks,
                                                                                                    void* context);
extern AJ_API void AJ_CALL alljoyn_keystorelistener_destroy(alljoyn_keystorelistener listener);
extern AJ_API QStatus AJ_CALL alljoyn_keystorelistener_putkeys(alljoyn_keystorelistener listener, alljoyn_keystore keyStore,
                                                               const char* source, const char* password);
extern AJ_API QStatus AJ_CALL alljoyn_keystorelistener_getkeys(alljoyn_keystorelistener listener, alljoyn_keystore keyStore,
                                                               char* sink, size_t* sink_sz);
}
