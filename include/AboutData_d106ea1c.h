#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/MsgArg.h>
extern "C" {
typedef struct _alljoyn_aboutdata_handle* alljoyn_aboutdata;
extern AJ_API alljoyn_aboutdata AJ_CALL alljoyn_aboutdata_create_empty();
extern AJ_API alljoyn_aboutdata AJ_CALL alljoyn_aboutdata_create(const char* defaultLanguage);
extern AJ_API alljoyn_aboutdata AJ_CALL alljoyn_aboutdata_create_full(const alljoyn_msgarg arg,
                                                                      const char* language);
extern AJ_API void AJ_CALL alljoyn_aboutdata_destroy(alljoyn_aboutdata data);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_createfromxml(alljoyn_aboutdata data,
                                                              const char* aboutDataXml);
extern AJ_API bool AJ_CALL alljoyn_aboutdata_isvalid(alljoyn_aboutdata data,
                                                     const char* language);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_createfrommsgarg(alljoyn_aboutdata data,
                                                                 const alljoyn_msgarg arg,
                                                                 const char* language);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_setappid(alljoyn_aboutdata data,
                                                         const uint8_t* appId,
                                                         const size_t num);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_setappid_fromstring(alljoyn_aboutdata data,
                                                                    const char* appId);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_getappid(alljoyn_aboutdata data,
                                                         uint8_t** appId,
                                                         size_t* num);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_setdefaultlanguage(alljoyn_aboutdata data,
                                                                   const char* defaultLanguage);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_getdefaultlanguage(alljoyn_aboutdata data,
                                                                   char** defaultLanguage);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_setdevicename(alljoyn_aboutdata data,
                                                              const char* deviceName,
                                                              const char* language);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_getdevicename(alljoyn_aboutdata data,
                                                              char** deviceName,
                                                              const char* language);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_setdeviceid(alljoyn_aboutdata data,
                                                            const char* deviceId);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_getdeviceid(alljoyn_aboutdata data,
                                                            char** deviceId);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_setappname(alljoyn_aboutdata data,
                                                           const char* appName,
                                                           const char* language);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_getappname(alljoyn_aboutdata data,
                                                           char** appName,
                                                           const char* language);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_setmanufacturer(alljoyn_aboutdata data,
                                                                const char* manufacturer,
                                                                const char* language);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_getmanufacturer(alljoyn_aboutdata data,
                                                                char** manufacturer,
                                                                const char* language);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_setmodelnumber(alljoyn_aboutdata data,
                                                               const char* modelNumber);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_getmodelnumber(alljoyn_aboutdata data,
                                                               char** modelNumber);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_setsupportedlanguage(alljoyn_aboutdata data,
                                                                     const char* language);
extern AJ_API size_t AJ_CALL alljoyn_aboutdata_getsupportedlanguages(alljoyn_aboutdata data,
                                                                     const char** languageTags,
                                                                     size_t num);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_setdescription(alljoyn_aboutdata data,
                                                               const char* description,
                                                               const char* language);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_getdescription(alljoyn_aboutdata data,
                                                               char** description,
                                                               const char* language);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_setdateofmanufacture(alljoyn_aboutdata data,
                                                                     const char* dateOfManufacture);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_getdateofmanufacture(alljoyn_aboutdata data,
                                                                     char** dateOfManufacture);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_setsoftwareversion(alljoyn_aboutdata data,
                                                                   const char* softwareVersion);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_getsoftwareversion(alljoyn_aboutdata data,
                                                                   char** softwareVersion);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_getajsoftwareversion(alljoyn_aboutdata data,
                                                                     char** ajSoftwareVersion);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_sethardwareversion(alljoyn_aboutdata data,
                                                                   const char* hardwareVersion);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_gethardwareversion(alljoyn_aboutdata data,
                                                                   char** hardwareVersion);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_setsupporturl(alljoyn_aboutdata data,
                                                              const char* supportUrl);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_getsupporturl(alljoyn_aboutdata data,
                                                              char** supportUrl);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_setfield(alljoyn_aboutdata data,
                                                         const char* name,
                                                         alljoyn_msgarg value,
                                                         const char* language);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_getfield(alljoyn_aboutdata data,
                                                         const char* name,
                                                         alljoyn_msgarg* value,
                                                         const char* language);
extern AJ_API size_t AJ_CALL alljoyn_aboutdata_getfields(alljoyn_aboutdata data,
                                                         const char** fields,
                                                         size_t num_fields);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_getaboutdata(alljoyn_aboutdata data,
                                                             alljoyn_msgarg msgArg,
                                                             const char* language);
extern AJ_API QStatus AJ_CALL alljoyn_aboutdata_getannouncedaboutdata(alljoyn_aboutdata data,
                                                                      alljoyn_msgarg msgArg);
extern AJ_API bool AJ_CALL alljoyn_aboutdata_isfieldrequired(alljoyn_aboutdata data,
                                                             const char* fieldName);
extern AJ_API bool AJ_CALL alljoyn_aboutdata_isfieldannounced(alljoyn_aboutdata data,
                                                              const char* fieldName);
extern AJ_API bool AJ_CALL alljoyn_aboutdata_isfieldlocalized(alljoyn_aboutdata data,
                                                              const char* fieldName);
extern AJ_API const char* AJ_CALL alljoyn_aboutdata_getfieldsignature(alljoyn_aboutdata data,
                                                                      const char* fieldName);
}
