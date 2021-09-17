#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
DEFINE_GUID(IID_IAMParse,
0xc47a3420, 0x005c, 0x11d2, 0x90, 0x38, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x98);
DECLARE_INTERFACE_(IAMParse, IUnknown) {
    STDMETHOD(GetParseTime) (THIS_
                             _Out_ REFERENCE_TIME *prtCurrent
                            ) PURE;
    STDMETHOD(SetParseTime) (THIS_
                             REFERENCE_TIME rtCurrent
                            ) PURE;
    STDMETHOD(Flush) (THIS) PURE;
};
}
#endif
#pragma endregion
