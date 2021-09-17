#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef DWORD HCRYPTASN1MODULE;
typedef void *ASN1module_t;
typedef void *ASN1encoding_t;
typedef void *ASN1decoding_t;
HCRYPTASN1MODULE
WINAPI
I_CryptInstallAsn1Module(
    IN ASN1module_t pMod,
    IN DWORD dwFlags,
    IN void *pvReserved
    );
BOOL
WINAPI
I_CryptUninstallAsn1Module(
    IN HCRYPTASN1MODULE hAsn1Module
    );
ASN1encoding_t
WINAPI
I_CryptGetAsn1Encoder(
    IN HCRYPTASN1MODULE hAsn1Module
    );
ASN1decoding_t
WINAPI
I_CryptGetAsn1Decoder(
    IN HCRYPTASN1MODULE hAsn1Module
    );
}
#endif
#pragma endregion
