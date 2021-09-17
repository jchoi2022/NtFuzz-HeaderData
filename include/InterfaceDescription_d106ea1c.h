#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/Message.h>
#include <alljoyn_c/Status.h>
extern "C" {
typedef struct _alljoyn_interfacedescription_handle* alljoyn_interfacedescription;
static const uint8_t ALLJOYN_PROP_ACCESS_READ = 1;
static const uint8_t ALLJOYN_PROP_ACCESS_WRITE = 2;
static const uint8_t ALLJOYN_PROP_ACCESS_RW = 3;
static const uint8_t ALLJOYN_MEMBER_ANNOTATE_NO_REPLY = 1;
static const uint8_t ALLJOYN_MEMBER_ANNOTATE_DEPRECATED = 2;
static const uint8_t ALLJOYN_MEMBER_ANNOTATE_SESSIONCAST = 4;
static const uint8_t ALLJOYN_MEMBER_ANNOTATE_SESSIONLESS = 8;
static const uint8_t ALLJOYN_MEMBER_ANNOTATE_UNICAST = 16;
static const uint8_t ALLJOYN_MEMBER_ANNOTATE_GLOBAL_BROADCAST = 32;
typedef enum {
    AJ_IFC_SECURITY_INHERIT,
    AJ_IFC_SECURITY_REQUIRED,
    AJ_IFC_SECURITY_OFF
} alljoyn_interfacedescription_securitypolicy;
typedef struct {
    alljoyn_interfacedescription iface;
    alljoyn_messagetype memberType;
    const char* name;
    const char* signature;
    const char* returnSignature;
    const char* argNames;
    const void* internal_member;
} alljoyn_interfacedescription_member;
typedef const char* (AJ_CALL * alljoyn_interfacedescription_translation_callback_ptr)(const char* sourceLanguage, const char* targetLanguage, const char* sourceText);
extern AJ_API size_t AJ_CALL alljoyn_interfacedescription_member_getannotationscount(alljoyn_interfacedescription_member member);
extern AJ_API void AJ_CALL alljoyn_interfacedescription_member_getannotationatindex(alljoyn_interfacedescription_member member,
                                                                                    size_t index,
                                                                                    char* name, size_t* name_size,
                                                                                    char* value, size_t* value_size);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_member_getannotation(alljoyn_interfacedescription_member member, const char* name, char* value, size_t* value_size);
extern AJ_API size_t AJ_CALL alljoyn_interfacedescription_member_getargannotationscount(alljoyn_interfacedescription_member member, const char* argName);
extern AJ_API void AJ_CALL alljoyn_interfacedescription_member_getargannotationatindex(alljoyn_interfacedescription_member member,
                                                                                       const char* argName,
                                                                                       size_t index,
                                                                                       char* name,
                                                                                       size_t* name_size,
                                                                                       char* value,
                                                                                       size_t* value_size);
extern QCC_BOOL AJ_CALL alljoyn_interfacedescription_member_getargannotation(alljoyn_interfacedescription_member member, const char* argName, const char* name, char* value, size_t* value_size);
typedef struct {
    const char* name;
    const char* signature;
    uint8_t access;
    const void* internal_property;
} alljoyn_interfacedescription_property;
extern AJ_API size_t AJ_CALL alljoyn_interfacedescription_property_getannotationscount(alljoyn_interfacedescription_property property);
extern AJ_API void AJ_CALL alljoyn_interfacedescription_property_getannotationatindex(alljoyn_interfacedescription_property property,
                                                                                      size_t index,
                                                                                      char* name, size_t* name_size,
                                                                                      char* value, size_t* value_size);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_property_getannotation(alljoyn_interfacedescription_property property, const char* name, char* value, size_t* value_size);
extern AJ_API void AJ_CALL alljoyn_interfacedescription_activate(alljoyn_interfacedescription iface);
extern AJ_API QStatus AJ_CALL alljoyn_interfacedescription_addannotation(alljoyn_interfacedescription iface, const char* name, const char* value);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_getannotation(alljoyn_interfacedescription iface, const char* name, char* value, size_t* value_size);
extern AJ_API size_t AJ_CALL alljoyn_interfacedescription_getannotationscount(alljoyn_interfacedescription iface);
extern AJ_API void AJ_CALL alljoyn_interfacedescription_getannotationatindex(alljoyn_interfacedescription iface,
                                                                             size_t index,
                                                                             char* name, size_t* name_size,
                                                                             char* value, size_t* value_size);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_getmember(const alljoyn_interfacedescription iface, const char* name,
                                                                      alljoyn_interfacedescription_member* member);
extern AJ_API QStatus AJ_CALL alljoyn_interfacedescription_addmember(alljoyn_interfacedescription iface, alljoyn_messagetype type,
                                                                     const char* name, const char* inputSig, const char* outSig,
                                                                     const char* argNames, uint8_t annotation);
extern AJ_API QStatus AJ_CALL alljoyn_interfacedescription_addmemberannotation(alljoyn_interfacedescription iface,
                                                                               const char* member,
                                                                               const char* name,
                                                                               const char* value);
AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_getmemberannotation(alljoyn_interfacedescription iface,
                                                                         const char* member,
                                                                         const char* name,
                                                                         char* value,
                                                                         size_t* value_size);
extern AJ_API size_t AJ_CALL alljoyn_interfacedescription_getmembers(const alljoyn_interfacedescription iface,
                                                                     alljoyn_interfacedescription_member* members,
                                                                     size_t numMembers);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_hasmember(alljoyn_interfacedescription iface,
                                                                      const char* name, const char* inSig,
                                                                      const char* outSig);
extern AJ_API QStatus AJ_CALL alljoyn_interfacedescription_addmethod(alljoyn_interfacedescription iface, const char* name, const char* inputSig, const char* outSig, const char* argNames, uint8_t annotation, const char* accessPerms);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_getmethod(alljoyn_interfacedescription iface, const char* name, alljoyn_interfacedescription_member* member);
extern AJ_API QStatus AJ_CALL alljoyn_interfacedescription_addsignal(alljoyn_interfacedescription iface, const char* name, const char* sig, const char* argNames, uint8_t annotation, const char* accessPerms);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_getsignal(alljoyn_interfacedescription iface, const char* name, alljoyn_interfacedescription_member* member);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_getproperty(const alljoyn_interfacedescription iface, const char* name,
                                                                        alljoyn_interfacedescription_property* property);
extern AJ_API size_t AJ_CALL alljoyn_interfacedescription_getproperties(const alljoyn_interfacedescription iface,
                                                                        alljoyn_interfacedescription_property* props,
                                                                        size_t numProps);
extern AJ_API QStatus AJ_CALL alljoyn_interfacedescription_addproperty(alljoyn_interfacedescription iface, const char* name,
                                                                       const char* signature, uint8_t access);
extern AJ_API QStatus AJ_CALL alljoyn_interfacedescription_addpropertyannotation(alljoyn_interfacedescription iface,
                                                                                 const char* property,
                                                                                 const char* name,
                                                                                 const char* value);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_getpropertyannotation(alljoyn_interfacedescription iface,
                                                                                  const char* property,
                                                                                  const char* name,
                                                                                  char* value,
                                                                                  size_t* str_size);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_hasproperty(const alljoyn_interfacedescription iface, const char* name);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_hasproperties(const alljoyn_interfacedescription iface);
extern AJ_API const char* AJ_CALL alljoyn_interfacedescription_getname(const alljoyn_interfacedescription iface);
extern AJ_API size_t AJ_CALL alljoyn_interfacedescription_introspect(const alljoyn_interfacedescription iface, char* str, size_t buf, size_t indent);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_issecure(const alljoyn_interfacedescription iface);
extern AJ_API alljoyn_interfacedescription_securitypolicy AJ_CALL alljoyn_interfacedescription_getsecuritypolicy(const alljoyn_interfacedescription iface);
QCC_DEPRECATED_ON(
    extern AJ_API void AJ_CALL alljoyn_interfacedescription_setdescriptionlanguage(alljoyn_interfacedescription iface, const char* language),
    16.10);
QCC_DEPRECATED_ON(
    extern AJ_API size_t AJ_CALL alljoyn_interfacedescription_getdescriptionlanguages(const alljoyn_interfacedescription iface, const char** languages, size_t size),
    16.10);
extern AJ_API size_t AJ_CALL alljoyn_interfacedescription_getdescriptionlanguages2(const alljoyn_interfacedescription iface, char* languages, size_t languagesSize);
QCC_DEPRECATED_ON(
    extern AJ_API void AJ_CALL alljoyn_interfacedescription_setdescription(alljoyn_interfacedescription iface, const char* description),
    16.10);
extern AJ_API QStatus AJ_CALL alljoyn_interfacedescription_setdescriptionforlanguage(alljoyn_interfacedescription iface, const char* description, const char* languageTag);
extern AJ_API size_t AJ_CALL alljoyn_interfacedescription_getdescriptionforlanguage(alljoyn_interfacedescription iface, char* description, size_t maxLanguageLength, const char* languageTag);
QCC_DEPRECATED_ON(
    extern AJ_API QStatus AJ_CALL alljoyn_interfacedescription_setmemberdescription(alljoyn_interfacedescription iface, const char* member, const char* description),
    16.10);
extern AJ_API QStatus AJ_CALL alljoyn_interfacedescription_setmemberdescriptionforlanguage(
    alljoyn_interfacedescription iface, const char* member, const char* description, const char* languageTag);
extern AJ_API size_t AJ_CALL alljoyn_interfacedescription_getmemberdescriptionforlanguage(
    alljoyn_interfacedescription iface, const char* member, char* description, size_t maxLanguageLength, const char* languageTag);
QCC_DEPRECATED_ON(
    extern AJ_API QStatus AJ_CALL alljoyn_interfacedescription_setargdescription(alljoyn_interfacedescription iface, const char* member, const char* argName, const char* description),
    16.10);
extern AJ_API QStatus AJ_CALL alljoyn_interfacedescription_setargdescriptionforlanguage(
    alljoyn_interfacedescription iface, const char* member, const char* arg, const char* description, const char* languageTag);
extern AJ_API size_t AJ_CALL alljoyn_interfacedescription_getargdescriptionforlanguage(
    alljoyn_interfacedescription iface, const char* member, const char* arg, char* description, size_t maxLanguageLength, const char* languageTag);
QCC_DEPRECATED_ON(
    extern AJ_API QStatus AJ_CALL alljoyn_interfacedescription_setpropertydescription(alljoyn_interfacedescription iface, const char* name, const char* description),
    16.10);
extern AJ_API QStatus AJ_CALL alljoyn_interfacedescription_setpropertydescriptionforlanguage(
    alljoyn_interfacedescription iface, const char* name, const char* description, const char* languageTag);
extern AJ_API size_t AJ_CALL alljoyn_interfacedescription_getpropertydescriptionforlanguage(
    alljoyn_interfacedescription iface, const char* property, char* description, size_t maxLanguageLength, const char* languageTag);
QCC_DEPRECATED_ON(
    extern AJ_API void AJ_CALL alljoyn_interfacedescription_setdescriptiontranslationcallback(alljoyn_interfacedescription iface, alljoyn_interfacedescription_translation_callback_ptr translationCallback),
    16.10);
QCC_DEPRECATED_ON(
    extern AJ_API alljoyn_interfacedescription_translation_callback_ptr AJ_CALL alljoyn_interfacedescription_getdescriptiontranslationcallback(const alljoyn_interfacedescription iface),
    16.10);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_hasdescription(const alljoyn_interfacedescription iface);
extern AJ_API QStatus AJ_CALL alljoyn_interfacedescription_addargannotation(alljoyn_interfacedescription iface, const char* member, const char* argName, const char* name, const char* value);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_getmemberargannotation(const alljoyn_interfacedescription iface, const char* member, const char* argName, const char* name, char* value, size_t* value_size);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_eql(const alljoyn_interfacedescription one,
                                                                const alljoyn_interfacedescription other);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_member_eql(const alljoyn_interfacedescription_member one,
                                                                       const alljoyn_interfacedescription_member other);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_interfacedescription_property_eql(const alljoyn_interfacedescription_property one,
                                                                         const alljoyn_interfacedescription_property other);
}
