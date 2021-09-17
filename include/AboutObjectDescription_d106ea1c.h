#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/MsgArg.h>
extern "C" {
typedef struct _alljoyn_aboutobjectdescription_handle* alljoyn_aboutobjectdescription;
extern AJ_API alljoyn_aboutobjectdescription AJ_CALL alljoyn_aboutobjectdescription_create();
extern AJ_API alljoyn_aboutobjectdescription AJ_CALL alljoyn_aboutobjectdescription_create_full(const alljoyn_msgarg arg);
extern AJ_API QStatus AJ_CALL alljoyn_aboutobjectdescription_createfrommsgarg(alljoyn_aboutobjectdescription description,
                                                                              const alljoyn_msgarg arg);
extern AJ_API void AJ_CALL alljoyn_aboutobjectdescription_destroy(alljoyn_aboutobjectdescription description);
extern AJ_API size_t AJ_CALL alljoyn_aboutobjectdescription_getpaths(alljoyn_aboutobjectdescription description,
                                                                     const char** paths,
                                                                     size_t numPaths);
extern AJ_API size_t AJ_CALL alljoyn_aboutobjectdescription_getinterfaces(alljoyn_aboutobjectdescription description,
                                                                          const char* path,
                                                                          const char** interfaces,
                                                                          size_t numInterfaces);
extern AJ_API size_t AJ_CALL alljoyn_aboutobjectdescription_getinterfacepaths(alljoyn_aboutobjectdescription description,
                                                                              const char* interfaceName,
                                                                              const char** paths,
                                                                              size_t numPaths);
extern AJ_API void AJ_CALL alljoyn_aboutobjectdescription_clear(alljoyn_aboutobjectdescription description);
extern AJ_API bool AJ_CALL alljoyn_aboutobjectdescription_haspath(alljoyn_aboutobjectdescription description,
                                                                  const char* path);
extern AJ_API bool AJ_CALL alljoyn_aboutobjectdescription_hasinterface(alljoyn_aboutobjectdescription description,
                                                                       const char* interfaceName);
extern AJ_API bool AJ_CALL alljoyn_aboutobjectdescription_hasinterfaceatpath(alljoyn_aboutobjectdescription description,
                                                                             const char* path,
                                                                             const char* interfaceName);
extern AJ_API QStatus AJ_CALL alljoyn_aboutobjectdescription_getmsgarg(alljoyn_aboutobjectdescription description,
                                                                       alljoyn_msgarg msgArg);
}
