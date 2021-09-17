#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(IID_IXMLGraphBuilder,
0x1bb05960, 0x5fbf, 0x11d2, 0xa5, 0x21, 0x44, 0xdf, 0x7, 0xc1, 0x0, 0x0);
interface IXMLGraphBuilder : IUnknown
{
    STDMETHOD(BuildFromXML) (IGraphBuilder *pGraph, IXMLElement *pxml) = 0;
    STDMETHOD(SaveToXML) (IGraphBuilder *pGraph, BSTR *pbstrxml) = 0;
    STDMETHOD(BuildFromXMLFile) (IGraphBuilder *pGraph, LPCWSTR wszFileName, LPCWSTR wszBaseURL) = 0;
};
DEFINE_GUID(CLSID_XMLGraphBuilder,
0x1bb05961, 0x5fbf, 0x11d2, 0xa5, 0x21, 0x44, 0xdf, 0x7, 0xc1, 0x0, 0x0);
#endif
#pragma endregion
