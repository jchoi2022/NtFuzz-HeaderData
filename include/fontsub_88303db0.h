#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef void *(__cdecl *CFP_ALLOCPROC)(size_t);
typedef void *(__cdecl *CFP_REALLOCPROC)(void *, size_t);
typedef void (__cdecl *CFP_FREEPROC)(void *);
unsigned long __cdecl CreateFontPackage(
 CONST unsigned char * puchSrcBuffer,
 CONST unsigned long ulSrcBufferSize,
 unsigned char ** ppuchFontPackageBuffer,
 unsigned long * pulFontPackageBufferSize,
 unsigned long * pulBytesWritten,
 CONST unsigned short usFlag,
 CONST unsigned short usTTCIndex,
 CONST unsigned short usSubsetFormat,
 CONST unsigned short usSubsetLanguage,
 CONST unsigned short usSubsetPlatform,
 CONST unsigned short usSubsetEncoding,
 CONST unsigned short *pusSubsetKeepList,
 CONST unsigned short usSubsetListCount,
 CFP_ALLOCPROC lpfnAllocate,
 CFP_REALLOCPROC lpfnReAllocate,
 CFP_FREEPROC lpfnFree,
 void * lpvReserved);
unsigned long __cdecl MergeFontPackage(CONST unsigned char * puchMergeFontBuffer,
   CONST unsigned long ulMergeFontBufferSize,
   CONST unsigned char * puchFontPackageBuffer,
   CONST unsigned long ulFontPackageBufferSize,
   unsigned char **ppuchDestBuffer,
   unsigned long *pulDestBufferSize,
   unsigned long *pulBytesWritten,
   CONST unsigned short usMode,
   CFP_ALLOCPROC lpfnAllocate,
   CFP_REALLOCPROC lpfnReAllocate,
   CFP_FREEPROC lpfnFree,
   void *lpvReserved);
}
#endif
#pragma endregion
