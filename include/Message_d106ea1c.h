#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/MsgArg.h>
#include <alljoyn_c/Session.h>
#include <alljoyn_c/Status.h>
extern "C" {
typedef struct _alljoyn_message_handle* alljoyn_message;
typedef struct _alljoyn_busattachment_handle* alljoyn_busattachment;
static const uint8_t ALLJOYN_LITTLE_ENDIAN = 'l';
static const uint8_t ALLJOYN_BIG_ENDIAN = 'B';
static const uint32_t ALLJOYN_MESSAGE_DEFAULT_TIMEOUT = 25000;
typedef enum {
    ALLJOYN_MESSAGE_INVALID = 0,
    ALLJOYN_MESSAGE_METHOD_CALL = 1,
    ALLJOYN_MESSAGE_METHOD_RET = 2,
    ALLJOYN_MESSAGE_ERROR = 3,
    ALLJOYN_MESSAGE_SIGNAL = 4
} alljoyn_messagetype;
extern AJ_API alljoyn_message AJ_CALL alljoyn_message_create(alljoyn_busattachment bus);
extern AJ_API void AJ_CALL alljoyn_message_destroy(alljoyn_message msg);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_message_isbroadcastsignal(alljoyn_message msg);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_message_isglobalbroadcast(alljoyn_message msg);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_message_issessionless(alljoyn_message msg);
extern AJ_API uint8_t AJ_CALL alljoyn_message_getflags(alljoyn_message msg);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_message_isexpired(alljoyn_message msg, uint32_t* tillExpireMS);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_message_isunreliable(alljoyn_message msg);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_message_isencrypted(alljoyn_message msg);
extern AJ_API const char* AJ_CALL alljoyn_message_getauthmechanism(alljoyn_message msg);
extern AJ_API alljoyn_messagetype AJ_CALL alljoyn_message_gettype(alljoyn_message msg);
extern AJ_API void AJ_CALL alljoyn_message_getargs(alljoyn_message msg, size_t* numArgs, alljoyn_msgarg* args);
extern AJ_API const alljoyn_msgarg AJ_CALL alljoyn_message_getarg(alljoyn_message msg, size_t argN);
extern AJ_API QStatus CDECL_CALL alljoyn_message_parseargs(alljoyn_message msg, const char* signature, ...);
extern AJ_API uint32_t AJ_CALL alljoyn_message_getcallserial(alljoyn_message msg);
extern AJ_API const char* AJ_CALL alljoyn_message_getsignature(alljoyn_message msg);
extern AJ_API const char* AJ_CALL alljoyn_message_getobjectpath(alljoyn_message msg);
extern AJ_API const char* AJ_CALL alljoyn_message_getinterface(alljoyn_message msg);
extern AJ_API const char* AJ_CALL alljoyn_message_getmembername(alljoyn_message msg);
extern AJ_API uint32_t AJ_CALL alljoyn_message_getreplyserial(alljoyn_message msg);
extern AJ_API const char* AJ_CALL alljoyn_message_getsender(alljoyn_message msg);
extern AJ_API const char* AJ_CALL alljoyn_message_getreceiveendpointname(alljoyn_message msg);
extern AJ_API const char* AJ_CALL alljoyn_message_getdestination(alljoyn_message msg);
QCC_DEPRECATED(extern AJ_API uint32_t AJ_CALL alljoyn_message_getcompressiontoken(alljoyn_message msg));
extern AJ_API alljoyn_sessionid AJ_CALL alljoyn_message_getsessionid(alljoyn_message msg);
extern AJ_API const char* AJ_CALL alljoyn_message_geterrorname(alljoyn_message msg, char* errorMessage, size_t* errorMessage_size);
extern AJ_API size_t AJ_CALL alljoyn_message_tostring(alljoyn_message msg, char* str, size_t buf);
extern AJ_API size_t AJ_CALL alljoyn_message_description(alljoyn_message msg, char* str, size_t buf);
extern AJ_API uint32_t AJ_CALL alljoyn_message_gettimestamp(alljoyn_message msg);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_message_eql(const alljoyn_message one, const alljoyn_message other);
extern AJ_API void AJ_CALL alljoyn_message_setendianess(const char endian);
}
