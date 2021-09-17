#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
void* WINGDIPAPI
GdipAlloc(size_t size);
void WINGDIPAPI
GdipFree(void* ptr);
}
#endif
#pragma endregion
