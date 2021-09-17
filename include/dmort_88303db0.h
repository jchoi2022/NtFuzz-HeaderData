#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI MoInitMediaType(DMO_MEDIA_TYPE *pmt, DWORD cbFormat);
STDAPI MoFreeMediaType(DMO_MEDIA_TYPE *pmt);
STDAPI MoCopyMediaType(DMO_MEDIA_TYPE *pmtDest, const DMO_MEDIA_TYPE *pmtSrc);
STDAPI MoCreateMediaType(DMO_MEDIA_TYPE **ppmt, DWORD cbFormat);
STDAPI MoDeleteMediaType(DMO_MEDIA_TYPE *pmt);
STDAPI MoDuplicateMediaType(DMO_MEDIA_TYPE **ppmtDest, const DMO_MEDIA_TYPE *pmtSrc);
#endif
#pragma endregion
