#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
typedef unsigned int ber_tag_t;
typedef int ber_int_t;
typedef unsigned int ber_uint_t;
typedef unsigned int ber_len_t;
typedef int ber_slen_t;
WINBERAPI BerElement * BERAPI ber_init( BERVAL *pBerVal );
WINBERAPI VOID BERAPI ber_free( BerElement *pBerElement, INT fbuf );
WINBERAPI VOID BERAPI ber_bvfree( BERVAL *pBerVal );
WINBERAPI VOID BERAPI ber_bvecfree( PBERVAL *pBerVal );
WINBERAPI BERVAL * BERAPI ber_bvdup( BERVAL *pBerVal );
WINBERAPI BerElement * BERAPI ber_alloc_t( INT options );
WINBERAPI ULONG BERAPI ber_skip_tag( BerElement *pBerElement, ULONG *pLen );
WINBERAPI ULONG BERAPI ber_peek_tag( BerElement *pBerElement, ULONG *pLen);
WINBERAPI ULONG BERAPI ber_first_element( BerElement *pBerElement, ULONG *pLen, _Out_ CHAR **ppOpaque );
WINBERAPI ULONG BERAPI ber_next_element( BerElement *pBerElement, ULONG *pLen, _In_ CHAR *opaque );
WINBERAPI INT BERAPI ber_flatten( BerElement *pBerElement, PBERVAL *pBerVal );
WINBERAPI INT BERAPI ber_printf( BerElement *pBerElement, _In_ PSTR fmt, ... );
WINBERAPI ULONG BERAPI ber_scanf( BerElement *pBerElement, _In_ PSTR fmt, ... );
}
#endif
#pragma endregion
