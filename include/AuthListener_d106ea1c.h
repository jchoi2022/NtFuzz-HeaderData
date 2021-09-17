#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/Message.h>
extern "C" {
typedef struct _alljoyn_authlistener_handle* alljoyn_authlistener;
typedef struct _alljoyn_credentials_handle* alljoyn_credentials;
static const uint16_t ALLJOYN_CRED_PASSWORD = 0x0001;
static const uint16_t ALLJOYN_CRED_USER_NAME = 0x0002;
static const uint16_t ALLJOYN_CRED_CERT_CHAIN = 0x0004;
static const uint16_t ALLJOYN_CRED_PRIVATE_KEY = 0x0008;
static const uint16_t ALLJOYN_CRED_LOGON_ENTRY = 0x0010;
static const uint16_t ALLJOYN_CRED_EXPIRATION = 0x0020;
static const uint16_t ALLJOYN_CRED_NEW_PASSWORD = 0x1001;
static const uint16_t ALLJOYN_CRED_ONE_TIME_PWD = 0x2001;
typedef QCC_BOOL (AJ_CALL * alljoyn_authlistener_requestcredentials_ptr)(const void* context, const char* authMechanism, const char* peerName, uint16_t authCount,
                                                                         const char* userName, uint16_t credMask, alljoyn_credentials credentials);
typedef QStatus (AJ_CALL * alljoyn_authlistener_requestcredentialsasync_ptr)(const void* context, alljoyn_authlistener listener,
                                                                             const char* authMechanism, const char* peerName, uint16_t authCount,
                                                                             const char* userName, uint16_t credMask, void* authContext);
extern AJ_API QStatus AJ_CALL alljoyn_authlistener_requestcredentialsresponse(alljoyn_authlistener listener, void* authContext, QCC_BOOL accept, alljoyn_credentials credentials);
typedef QCC_BOOL (AJ_CALL * alljoyn_authlistener_verifycredentials_ptr)(const void* context, const char* authMechanism, const char* peerName,
                                                                        const alljoyn_credentials credentials);
typedef QStatus (AJ_CALL * alljoyn_authlistener_verifycredentialsasync_ptr)(const void* context, alljoyn_authlistener listener,
                                                                            const char* authMechanism, const char* peerName, const alljoyn_credentials credentials, void* authContext);
extern AJ_API QStatus AJ_CALL alljoyn_authlistener_verifycredentialsresponse(alljoyn_authlistener listener, void* authContext, QCC_BOOL accept);
typedef void (AJ_CALL * alljoyn_authlistener_securityviolation_ptr)(const void* context, QStatus status, const alljoyn_message msg);
typedef void (AJ_CALL * alljoyn_authlistener_authenticationcomplete_ptr)(const void* context, const char* authMechanism, const char* peerName, QCC_BOOL success);
typedef struct {
    alljoyn_authlistener_requestcredentials_ptr request_credentials;
    alljoyn_authlistener_verifycredentials_ptr verify_credentials;
    alljoyn_authlistener_securityviolation_ptr security_violation;
    alljoyn_authlistener_authenticationcomplete_ptr authentication_complete;
} alljoyn_authlistener_callbacks;
typedef struct {
    alljoyn_authlistener_requestcredentialsasync_ptr request_credentials;
    alljoyn_authlistener_verifycredentialsasync_ptr verify_credentials;
    alljoyn_authlistener_securityviolation_ptr security_violation;
    alljoyn_authlistener_authenticationcomplete_ptr authentication_complete;
} alljoyn_authlistenerasync_callbacks;
extern AJ_API alljoyn_authlistener AJ_CALL alljoyn_authlistener_create(const alljoyn_authlistener_callbacks* callbacks, const void* context);
extern AJ_API alljoyn_authlistener AJ_CALL alljoyn_authlistenerasync_create(const alljoyn_authlistenerasync_callbacks* callbacks, const void* context);
extern AJ_API void AJ_CALL alljoyn_authlistener_destroy(alljoyn_authlistener listener);
extern AJ_API void AJ_CALL alljoyn_authlistenerasync_destroy(alljoyn_authlistener listener);
extern AJ_API QStatus AJ_CALL alljoyn_authlistener_setsharedsecret(alljoyn_authlistener listener, const uint8_t* sharedSecret, size_t sharedSecretSize);
extern AJ_API alljoyn_credentials AJ_CALL alljoyn_credentials_create();
extern AJ_API void AJ_CALL alljoyn_credentials_destroy(alljoyn_credentials cred);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_credentials_isset(const alljoyn_credentials cred, uint16_t creds);
extern AJ_API void AJ_CALL alljoyn_credentials_setpassword(alljoyn_credentials cred, const char* pwd);
extern AJ_API void AJ_CALL alljoyn_credentials_setusername(alljoyn_credentials cred, const char* userName);
extern AJ_API void AJ_CALL alljoyn_credentials_setcertchain(alljoyn_credentials cred, const char* certChain);
extern AJ_API void AJ_CALL alljoyn_credentials_setprivatekey(alljoyn_credentials cred, const char* pk);
extern AJ_API void AJ_CALL alljoyn_credentials_setlogonentry(alljoyn_credentials cred, const char* logonEntry);
extern AJ_API void AJ_CALL alljoyn_credentials_setexpiration(alljoyn_credentials cred, uint32_t expiration);
extern AJ_API const char* AJ_CALL alljoyn_credentials_getpassword(const alljoyn_credentials cred);
extern AJ_API const char* AJ_CALL alljoyn_credentials_getusername(const alljoyn_credentials cred);
extern AJ_API const char* AJ_CALL alljoyn_credentials_getcertchain(const alljoyn_credentials cred);
extern AJ_API const char* AJ_CALL alljoyn_credentials_getprivateKey(const alljoyn_credentials cred);
extern AJ_API const char* AJ_CALL alljoyn_credentials_getlogonentry(const alljoyn_credentials cred);
extern AJ_API uint32_t AJ_CALL alljoyn_credentials_getexpiration(const alljoyn_credentials cred);
extern AJ_API void AJ_CALL alljoyn_credentials_clear(alljoyn_credentials cred);
}
