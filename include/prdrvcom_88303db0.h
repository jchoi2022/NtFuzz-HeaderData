#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(CLSID_PTPROVIDER, 0x46ac151b, 0x8490, 0x4531, 0x96, 0xcc, 0x55, 0xbf, 0x2b, 0xf1, 0x9e, 0x11);
DEFINE_GUID(IID_IPrintTicketProvider, 0xbb5116db, 0xa23, 0x4c3a, 0xa6, 0xb6, 0x89, 0xe5, 0x55, 0x8d, 0xfb, 0x5d);
DEFINE_GUID(IID_IPrintTicketProvider2, 0xb8a70ab2, 0x3dfc, 0x4fec, 0xa0, 0x74, 0x51, 0x1b, 0x13, 0xc6, 0x51, 0xcb);
extern "C" {
typedef
enum tagSHIMOPTS
{
    PTSHIM_DEFAULT = 0,
    PTSHIM_NOSNAPSHOT = 0x1
} SHIMOPTS, *PSHIMOPTS;
DECLARE_INTERFACE_IID_(IPrintTicketProvider, IUnknown, "BB5116DB-0A23-4c3a-A6B6-89E5558DFB5D")
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID* ppvObj)PURE;
    STDMETHOD_(ULONG, AddRef) (THIS)PURE;
    STDMETHOD_(ULONG, Release) (THIS)PURE;
    STDMETHOD(GetSupportedVersions)( THIS_
            IN HANDLE hPrinter,
            OUT INT *ppVersions[],
            OUT INT *cVersions
            ) PURE;
    STDMETHOD(BindPrinter)( THIS_
            IN HANDLE hPrinter,
            IN INT version,
            OUT PSHIMOPTS pOptions,
            OUT DWORD *pDevModeFlags,
            OUT INT *cNamespaces,
            OUT BSTR **ppNamespaces
            ) PURE;
    STDMETHOD(QueryDeviceNamespace)( THIS_
            OUT BSTR *pDefaultNamespace
            ) PURE;
    STDMETHOD(ConvertPrintTicketToDevMode)( THIS_
            IN IXMLDOMDocument2 *pPrintTicket,
            IN ULONG cbDevmodeIn,
            IN PDEVMODE pDevmodeIn,
            OUT ULONG *pcbDevmodeOut,
            OUT PDEVMODE *ppDevmodeOut
            ) PURE;
    STDMETHOD(ConvertDevModeToPrintTicket)( THIS_
            IN ULONG cbDevmode,
            IN PDEVMODE pDevmode,
            IN IXMLDOMDocument2 *pPrintTicket
            ) PURE;
    STDMETHOD(GetPrintCapabilities)( THIS_
            IN IXMLDOMDocument2 *pPrintTicket,
            OUT IXMLDOMDocument2 **ppCapabilities
            ) PURE;
    STDMETHOD(ValidatePrintTicket)( THIS_
            IN OUT IXMLDOMDocument2 *pBaseTicket
            ) PURE;
};
DECLARE_INTERFACE_IID_(IPrintTicketProvider2, IPrintTicketProvider, "B8A70AB2-3DFC-4FEC-A074-511B13C651CB")
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID* ppvObj)PURE;
    STDMETHOD_(ULONG, AddRef) (THIS)PURE;
    STDMETHOD_(ULONG, Release) (THIS)PURE;
    STDMETHOD(GetSupportedVersions)(THIS_
        IN HANDLE hPrinter,
        OUT INT *ppVersions[],
        OUT INT *cVersions
        ) PURE;
    STDMETHOD(BindPrinter)(THIS_
        IN HANDLE hPrinter,
        IN INT version,
        OUT PSHIMOPTS pOptions,
        OUT DWORD *pDevModeFlags,
        OUT INT *cNamespaces,
        OUT BSTR **ppNamespaces
        ) PURE;
    STDMETHOD(QueryDeviceNamespace)(THIS_
        OUT BSTR *pDefaultNamespace
        ) PURE;
    STDMETHOD(ConvertPrintTicketToDevMode)(THIS_
        IN IXMLDOMDocument2 *pPrintTicket,
        IN ULONG cbDevmodeIn,
        IN PDEVMODE pDevmodeIn,
        OUT ULONG *pcbDevmodeOut,
        OUT PDEVMODE *ppDevmodeOut
        ) PURE;
    STDMETHOD(ConvertDevModeToPrintTicket)(THIS_
        IN ULONG cbDevmode,
        IN PDEVMODE pDevmode,
        IN IXMLDOMDocument2 *pPrintTicket
        ) PURE;
    STDMETHOD(GetPrintCapabilities)(THIS_
        IN IXMLDOMDocument2 *pPrintTicket,
        OUT IXMLDOMDocument2 **ppCapabilities
        ) PURE;
    STDMETHOD(ValidatePrintTicket)(THIS_
        IN OUT IXMLDOMDocument2 *pBaseTicket
        ) PURE;
    STDMETHOD(GetPrintDeviceCapabilities)(THIS_
        IN IXMLDOMDocument2 *pPrintTicket,
        OUT IXMLDOMDocument2 **ppDeviceCapabilities
        ) PURE;
    STDMETHOD(GetPrintDeviceResources)(THIS_
        IN LPCWSTR pszLocaleName,
        IN IXMLDOMDocument2 *pPrintTicket,
        OUT IXMLDOMDocument2 **ppDeviceResources
        ) PURE;
};
}
#endif
#pragma endregion
