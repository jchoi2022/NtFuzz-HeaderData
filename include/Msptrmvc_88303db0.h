#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
class CVideoCaptureTerminal :
    public CSingleFilterStaticTerminal
{
public:
    CVideoCaptureTerminal();
    virtual ~CVideoCaptureTerminal();
public:
    static HRESULT CreateTerminal(
        IN CComPtr<IMoniker> pMoniker,
        IN MSP_HANDLE htAddress,
        OUT ITTerminal **ppTerm
        );
DECLARE_LOG_ADDREF_RELEASE(CVideoCaptureTerminal);
private:
    virtual HRESULT AddFiltersToGraph();
    virtual LONG CountOfMediaTypes()
    {
        return 1;
    }
    virtual DWORD GetSupportedMediaTypes(void)
    {
        return (DWORD) TAPIMEDIATYPE_VIDEO;
    }
    HRESULT CreateFilters();
    HRESULT FindCapturePin();
};
inline
CVideoCaptureTerminal::CVideoCaptureTerminal(
    )
{
    m_TerminalDirection = TD_CAPTURE;
    m_TerminalType = TT_STATIC;
}
#endif
#pragma endregion
