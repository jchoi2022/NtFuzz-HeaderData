#include <alljoyn_c/AjAPI.h>
extern "C" {
typedef struct _alljoyn_permissionconfigurator_handle* alljoyn_permissionconfigurator;
typedef enum {
    NOT_CLAIMABLE,
    CLAIMABLE,
    CLAIMED,
    NEED_UPDATE
} alljoyn_applicationstate;
typedef uint16_t alljoyn_claimcapabilities;
typedef enum {
    CAPABLE_ECDHE_NULL = 0x0001,
    CAPABLE_ECDHE_ECDSA = 0x0004,
    CAPABLE_ECDHE_SPEKE = 0x0008
} alljoyn_claimcapability_masks;
typedef uint16_t alljoyn_claimcapabilitiesadditionalinfo;
typedef enum {
    PASSWORD_GENERATED_BY_SECURITY_MANAGER = 0x0001,
    PASSWORD_GENERATED_BY_APPLICATION = 0x0002
} alljoyn_claimcapabilityadditionalinfo_masks;
AJ_API alljoyn_claimcapabilities AJ_CALL alljoyn_permissionconfigurator_getdefaultclaimcapabilities();
typedef struct {
    uint8_t* serial;
    size_t serialLen;
    AJ_PSTR issuerPublicKey;
    uint8_t* issuerAki;
    size_t issuerAkiLen;
} alljoyn_certificateid;
typedef struct {
    size_t count;
    alljoyn_certificateid* ids;
} alljoyn_certificateidarray;
typedef struct {
    size_t count;
    AJ_PSTR* xmls;
} alljoyn_manifestarray;
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_getapplicationstate(const alljoyn_permissionconfigurator configurator, alljoyn_applicationstate* state);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_setapplicationstate(alljoyn_permissionconfigurator configurator, alljoyn_applicationstate state);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_getpublickey(alljoyn_permissionconfigurator configurator, AJ_PSTR* publicKey);
AJ_API void AJ_CALL alljoyn_permissionconfigurator_publickey_destroy(AJ_PSTR publicKey);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_getmanifesttemplate(alljoyn_permissionconfigurator configurator, AJ_PSTR* manifestTemplateXml);
AJ_API void AJ_CALL alljoyn_permissionconfigurator_manifesttemplate_destroy(AJ_PSTR manifestTemplateXml);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_setmanifesttemplatefromxml(alljoyn_permissionconfigurator configurator, AJ_PCSTR manifestTemplateXml);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_getclaimcapabilities(const alljoyn_permissionconfigurator configurator, alljoyn_claimcapabilities* claimCapabilities);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_setclaimcapabilities(alljoyn_permissionconfigurator configurator, alljoyn_claimcapabilities claimCapabilities);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_getclaimcapabilitiesadditionalinfo(const alljoyn_permissionconfigurator configurator, alljoyn_claimcapabilitiesadditionalinfo* additionalInfo);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_setclaimcapabilitiesadditionalinfo(alljoyn_permissionconfigurator configurator, alljoyn_claimcapabilitiesadditionalinfo additionalInfo);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_reset(alljoyn_permissionconfigurator configurator);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_claim(alljoyn_permissionconfigurator configurator,
                                                            AJ_PCSTR caKey,
                                                            AJ_PCSTR identityCertificateChain,
                                                            const uint8_t* groupId,
                                                            size_t groupSize,
                                                            AJ_PCSTR groupAuthority,
                                                            AJ_PCSTR* manifestsXmls,
                                                            size_t manifestsCount);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_updateidentity(alljoyn_permissionconfigurator configurator,
                                                                     AJ_PCSTR identityCertificateChain,
                                                                     AJ_PCSTR* manifestsXmls, size_t manifestsCount);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_getidentity(alljoyn_permissionconfigurator configurator,
                                                                  AJ_PSTR* identityCertificateChain);
AJ_API void AJ_CALL alljoyn_permissionconfigurator_certificatechain_destroy(AJ_PSTR certificateChain);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_getmanifests(alljoyn_permissionconfigurator configurator,
                                                                   alljoyn_manifestarray* manifestArray);
AJ_API void AJ_CALL alljoyn_permissionconfigurator_manifestarray_cleanup(alljoyn_manifestarray* manifestArray);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_installmanifests(alljoyn_permissionconfigurator configurator,
                                                                       AJ_PCSTR* manifestsXmls,
                                                                       size_t manifestsCount,
                                                                       QCC_BOOL append);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_getidentitycertificateid(alljoyn_permissionconfigurator configurator,
                                                                               alljoyn_certificateid* certificateId);
AJ_API void AJ_CALL alljoyn_permissionconfigurator_certificateid_cleanup(alljoyn_certificateid* certificateId);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_updatepolicy(alljoyn_permissionconfigurator configurator,
                                                                   AJ_PCSTR policyXml);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_getpolicy(alljoyn_permissionconfigurator configurator,
                                                                AJ_PSTR* policyXml);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_getdefaultpolicy(alljoyn_permissionconfigurator configurator,
                                                                       AJ_PSTR* policyXml);
AJ_API void AJ_CALL alljoyn_permissionconfigurator_policy_destroy(AJ_PSTR policyXml);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_resetpolicy(alljoyn_permissionconfigurator configurator);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_getmembershipsummaries(alljoyn_permissionconfigurator configurator,
                                                                             alljoyn_certificateidarray* certificateIds);
AJ_API void AJ_CALL alljoyn_permissionconfigurator_certificateidarray_cleanup(alljoyn_certificateidarray* certificateIdArray);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_installmembership(alljoyn_permissionconfigurator configurator,
                                                                        AJ_PCSTR membershipCertificateChain);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_removemembership(alljoyn_permissionconfigurator configurator,
                                                                       const uint8_t* serial,
                                                                       size_t serialLen,
                                                                       AJ_PCSTR issuerPublicKey,
                                                                       const uint8_t* issuerAki,
                                                                       size_t issuerAkiLen);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_startmanagement(alljoyn_permissionconfigurator configurator);
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_endmanagement(alljoyn_permissionconfigurator configurator);
}
