#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DECLARE_INTERFACE_(IVBGetControl, IUnknown)
    {
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(EnumControls)(THIS_ DWORD dwOleContF, DWORD dwWhich, LPENUMUNKNOWN FAR *ppenumUnk) PURE;
    };
DECLARE_INTERFACE_(IGetOleObject, IUnknown)
    {
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetOleObject)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    };
DECLARE_INTERFACE_(IVBFormat,IUnknown)
  {
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, void FAR* FAR* ppvObj) PURE;
  STDMETHOD_(unsigned long, AddRef)(THIS) PURE;
  STDMETHOD_(unsigned long, Release)(THIS) PURE;
  STDMETHOD(Format)(VARIANT FAR *vData, BSTR bstrFormat, LPVOID lpBuffer,
 USHORT cb, LONG lcid, SHORT sFirstDayOfWeek,
 USHORT sFirstWeekOfYear, USHORT * rcb) PURE;
  };
DECLARE_INTERFACE_(IGetVBAObject,IUnknown)
  {
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, void FAR* FAR* ppvObj) PURE;
  STDMETHOD_(unsigned long, AddRef)(THIS) PURE;
  STDMETHOD_(unsigned long, Release)(THIS) PURE;
  STDMETHOD(GetObject)(THIS_ REFIID riid, void FAR* FAR* ppvObj, DWORD dwReserved) PURE;
  };
#include <initguid.h>
DEFINE_GUID(IID_IVBGetControl, 0x40A050A0L, 0x3C31, 0x101B, 0xA8, 0x2E, 0x08, 0x00, 0x2B, 0x2B, 0x23, 0x37);
DEFINE_GUID(IID_IGetOleObject, 0x8A701DA0L, 0x4FEB, 0x101B, 0xA8, 0x2E, 0x08, 0x00, 0x2B, 0x2B, 0x23, 0x37);
DEFINE_GUID(IID_IGetVBAObject, 0x91733A60L, 0x3F4C, 0x101B, 0xA3, 0xF6, 0x00, 0xAA, 0x00, 0x34, 0xE4, 0xE9);
DEFINE_GUID(IID_IVBFormat, 0x9849FD60L, 0x3768, 0x101B, 0x8D, 0x72, 0xAE, 0x61,0x64, 0xFF, 0xE3, 0xCF);
#endif
#pragma endregion
