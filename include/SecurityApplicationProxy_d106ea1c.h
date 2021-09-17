#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/PermissionConfigurator.h>
#include <alljoyn_c/BusAttachment.h>
#include <alljoyn_c/Session.h>
extern "C" {
typedef struct _alljoyn_securityapplicationproxy_handle* alljoyn_securityapplicationproxy;
AJ_API alljoyn_sessionport AJ_CALL alljoyn_securityapplicationproxy_getpermissionmanagementsessionport();
AJ_API alljoyn_securityapplicationproxy AJ_CALL alljoyn_securityapplicationproxy_create(alljoyn_busattachment bus,
                                                                                        AJ_PCSTR appBusName,
                                                                                        alljoyn_sessionid sessionId);
AJ_API void AJ_CALL alljoyn_securityapplicationproxy_destroy(alljoyn_securityapplicationproxy proxy);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_claim(alljoyn_securityapplicationproxy proxy,
                                                              AJ_PCSTR caKey,
                                                              AJ_PCSTR identityCertificateChain,
                                                              const uint8_t* groupId,
                                                              size_t groupSize,
                                                              AJ_PCSTR groupAuthority,
                                                              AJ_PCSTR* manifestsXmls, size_t manifestsCount);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_getmanifesttemplate(alljoyn_securityapplicationproxy proxy, AJ_PSTR* manifestTemplateXml);
AJ_API void AJ_CALL alljoyn_securityapplicationproxy_manifesttemplate_destroy(AJ_PSTR manifestTemplateXml);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_getapplicationstate(alljoyn_securityapplicationproxy proxy, alljoyn_applicationstate* applicationState);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_getclaimcapabilities(alljoyn_securityapplicationproxy proxy, alljoyn_claimcapabilities* capabilities);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_getclaimcapabilitiesadditionalinfo(alljoyn_securityapplicationproxy proxy, alljoyn_claimcapabilitiesadditionalinfo* additionalInfo);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_getpolicy(alljoyn_securityapplicationproxy proxy,
                                                                  AJ_PSTR* policyXml);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_getdefaultpolicy(alljoyn_securityapplicationproxy proxy,
                                                                         AJ_PSTR* policyXml);
AJ_API void AJ_CALL alljoyn_securityapplicationproxy_policy_destroy(AJ_PSTR policyXml);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_updatepolicy(alljoyn_securityapplicationproxy proxy, AJ_PCSTR policyXml);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_updateidentity(alljoyn_securityapplicationproxy proxy,
                                                                       AJ_PCSTR identityCertificateChain,
                                                                       AJ_PCSTR* manifestsXmls, size_t manifestsCount);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_installmembership(alljoyn_securityapplicationproxy proxy, AJ_PCSTR membershipCertificateChain);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_reset(alljoyn_securityapplicationproxy proxy);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_resetpolicy(alljoyn_securityapplicationproxy proxy);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_startmanagement(alljoyn_securityapplicationproxy proxy);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_endmanagement(alljoyn_securityapplicationproxy proxy);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_geteccpublickey(alljoyn_securityapplicationproxy proxy, AJ_PSTR* eccPublicKey);
AJ_API void AJ_CALL alljoyn_securityapplicationproxy_eccpublickey_destroy(AJ_PSTR eccPublicKey);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_signmanifest(AJ_PCSTR unsignedManifestXml,
                                                                     AJ_PCSTR identityCertificatePem,
                                                                     AJ_PCSTR signingPrivateKeyPem,
                                                                     AJ_PSTR* signedManifestXml);
AJ_API void AJ_CALL alljoyn_securityapplicationproxy_manifest_destroy(AJ_PSTR signedManifestXml);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_computemanifestdigest(AJ_PCSTR unsignedManifestXml,
                                                                              AJ_PCSTR identityCertificatePem,
                                                                              uint8_t** digest,
                                                                              size_t* digestSize);
AJ_API void AJ_CALL alljoyn_securityapplicationproxy_digest_destroy(uint8_t* digest);
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_setmanifestsignature(AJ_PCSTR unsignedManifestXml,
                                                                             AJ_PCSTR identityCertificatePem,
                                                                             const uint8_t* signature,
                                                                             size_t signatureSize,
                                                                             AJ_PSTR* signedManifestXml);
}
