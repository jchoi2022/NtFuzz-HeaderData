#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(CLSID_OEMRENDER, 0x6d6abf26, 0x9f38, 0x11d1, 0x88, 0x2a, 0x00, 0xc0, 0x4f, 0xb9, 0x61, 0xec);
DEFINE_GUID(CLSID_OEMUI, 0xabce80d7, 0x9f46, 0x11d1, 0x88, 0x2a, 0x00, 0xc0, 0x4f, 0xb9, 0x61, 0xec);
DEFINE_GUID(CLSID_OEMUIMXDC, 0x4e144300, 0x5b43, 0x4288, 0x93, 0x2a, 0x5e, 0x4d, 0xd6, 0xd8, 0x2b, 0xed);
DEFINE_GUID(CLSID_OEMPTPROVIDER, 0x91723892, 0x45d2, 0x48e2, 0x9e, 0xc9, 0x56, 0x23, 0x79, 0xda, 0xf9, 0x92);
DEFINE_GUID(IID_IPrintCoreHelper, 0xa89ec53e, 0x3905, 0x49c6, 0x9c, 0x1a, 0xc0, 0xa8, 0x81, 0x17, 0xfd, 0xb6);
DEFINE_GUID(IID_IPrintCoreHelperUni, 0x7e8e51d6, 0xe5ee, 0x4426, 0x81, 0x7b, 0x95, 0x8b, 0x94, 0x44, 0xeb, 0x79);
DEFINE_GUID(IID_IPrintCoreHelperPS, 0xc2c14f6f, 0x95d3, 0x4d63, 0x96, 0xcf, 0x6b, 0xd9, 0xe6, 0xc9, 0x7, 0xc2);
DEFINE_GUID(IID_IPrintCoreHelperUni2, 0x6c8afdfc, 0xead0, 0x4d2d, 0x80, 0x71, 0x9b, 0xf0, 0x17, 0x5a, 0x6c, 0x3a);
DEFINE_GUID(IID_IPrintOemCommon, 0x7f42285e, 0x91d5, 0x11d1, 0x88, 0x20, 0x00, 0xc0, 0x4f, 0xb9, 0x61, 0xec);
DEFINE_GUID(IID_IPrintOemEngine, 0x63d17590, 0x91d8, 0x11d1, 0x88, 0x20, 0x00, 0xc0, 0x4f, 0xb9, 0x61, 0xec);
DEFINE_GUID(IID_IPrintOemUI, 0xc6a7a9d0, 0x774c, 0x11d1, 0x94, 0x7f, 0x0, 0xa0, 0xc9, 0x6, 0x40, 0xb8);
DEFINE_GUID(IID_IPrintOemUI2, 0x292515f9, 0xb54b, 0x489b, 0x92, 0x75, 0xba, 0xb5, 0x68, 0x21, 0x39, 0x5e);
DEFINE_GUID(IID_IPrintOemUIMXDC, 0x7349d725, 0xe2c1, 0x4dca, 0xaf, 0xb5, 0xc1, 0x3e, 0x91, 0xbc, 0x93, 0x6);
DEFINE_GUID(IID_IPrintOemDriverUI, 0x92b05d50, 0x78bc, 0x11d1, 0x94, 0x80, 0x0, 0xa0, 0xc9, 0x6, 0x40, 0xb8);
DEFINE_GUID(IID_IPrintCoreUI2, 0x85ccfca, 0x3adf, 0x4c9e, 0xb4, 0x91, 0xd8, 0x51, 0xa6, 0xed, 0xc9, 0x97);
DEFINE_GUID(IID_IPrintOemPS, 0x688342b5, 0x8e1a, 0x11d1, 0x88, 0x1f, 0x00, 0xc0, 0x4f, 0xb9, 0x61, 0xec);
DEFINE_GUID(IID_IPrintOemPS2, 0xbecf7f34, 0x51b3, 0x46c9, 0x8a, 0x1c, 0x18, 0x67, 0x9b, 0xd2, 0x1f, 0x36);
DEFINE_GUID(IID_IPrintOemDriverPS, 0xd90060c7, 0x8e1a, 0x11d1, 0x88, 0x1f, 0x00, 0xc0, 0x4f, 0xb9, 0x61, 0xec);
DEFINE_GUID(IID_IPrintCorePS2, 0xcdbb0b0b, 0xa917, 0x40d7, 0x9f, 0xbf, 0x48, 0x3b, 0x3b, 0xe7, 0xef, 0x22);
DEFINE_GUID(IID_IPrintOemUni, 0xd67ebbf0, 0x78bf, 0x11d1, 0x94, 0x80, 0x0, 0xa0, 0xc9, 0x6, 0x40, 0xb8);
DEFINE_GUID(IID_IPrintOemUni2, 0xb91220ac, 0x15cc, 0x4e7a, 0xa2, 0x1e, 0x95, 0x91, 0xf3, 0x4d, 0x6f, 0x6c);
DEFINE_GUID(IID_IPrintOemUni3, 0x4e4a7747, 0xbc76, 0x4aed, 0xac, 0xc8, 0xc7, 0x6a, 0xf2, 0x2a, 0xad, 0x43);
DEFINE_GUID(IID_IPrintOemDriverUni, 0xd67ebbf1, 0x78bf, 0x11d1, 0x94, 0x80, 0x0, 0xa0, 0xc9, 0x6, 0x40, 0xb8);
DEFINE_GUID(IID_IPrintOemPrintTicketProvider, 0xbcf5e011, 0xf60a, 0x49ff, 0xab, 0x2f, 0xe0, 0x6f, 0x4a, 0xbd, 0xf2, 0x81);
extern "C" {
typedef struct _PRINT_FEATURE_OPTION
{
    PCSTR pszFeature;
    PCSTR pszOption;
} PRINT_FEATURE_OPTION;
DECLARE_INTERFACE_(IPrintCoreHelper, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _COM_Outptr_ LPVOID* ppvObj)PURE;
    STDMETHOD_(ULONG, AddRef) (THIS)PURE;
    STDMETHOD_(ULONG, Release) (THIS)PURE;
    STDMETHOD(GetOption) (THIS_
                          _In_reads_bytes_opt_(cbSize)
                                   CONST DEVMODE *pDevmode, OPTIONAL
                          _In_ DWORD cbSize,
                          _In_ PCSTR pszFeatureRequested,
                          _Outptr_ PCSTR *ppszOption) PURE;
    STDMETHOD(SetOptions) (THIS_
                           IN PDEVMODE pDevmode, OPTIONAL
                           IN DWORD cbSize,
                           IN BOOL bResolveConflicts,
                           IN CONST PRINT_FEATURE_OPTION pFOPairs[],
                           IN DWORD cPairs,
                           OUT PDWORD pcPairsWritten,
                           OUT PDWORD pdwResult) PURE;
    STDMETHOD(EnumConstrainedOptions) (THIS_
                                       IN CONST DEVMODE *pDevmode, OPTIONAL
                                       IN DWORD cbSize,
                                       IN PCSTR pszFeatureKeyword,
                                       OUT PCSTR *pConstrainedOptionList[],
                                       OUT DWORD *pdwNumOptions) PURE;
    STDMETHOD(WhyConstrained) (THIS_
                               _In_reads_bytes_opt_(cbSize)
                                     CONST DEVMODE *pDevmode, OPTIONAL
                               _In_ DWORD cbSize,
                               _In_ PCSTR pszFeatureKeyword,
                               _In_ PCSTR pszOptionKeyword,
                               _Outptr_result_buffer_(*pdwNumOptions)
                                     CONST PRINT_FEATURE_OPTION **ppFOConstraints,
                               _Out_ DWORD *pdwNumOptions) PURE;
    STDMETHOD(EnumFeatures) (THIS_
                             _Outptr_result_buffer_(*pdwNumFeatures)
                                   PCSTR *pFeatureList[],
                             _Out_ DWORD *pdwNumFeatures) PURE;
    STDMETHOD(EnumOptions) (THIS_
                            _In_ PCSTR pszFeatureKeyword,
                            _Outptr_result_buffer_(*pdwNumOptions)
                                  PCSTR *pOptionList[],
                            _Out_ DWORD *pdwNumOptions) PURE;
    STDMETHOD(GetFontSubstitution) (THIS_
                                    IN PCWSTR pszTrueTypeFontName,
                                    OUT PCWSTR *ppszDevFontName) PURE;
    STDMETHOD(SetFontSubstitution) (THIS_
                                    IN PCWSTR pszTrueTypeFontName,
                                    IN PCWSTR pszDevFontName) PURE;
    STDMETHOD(CreateInstanceOfMSXMLObject) (THIS_
                                            IN REFCLSID rclsid,
                                            IN LPUNKNOWN pUnkOuter,
                                            IN DWORD dwClsContext,
                                            IN REFIID riid,
                                            OUT LPVOID *ppv) PURE;
};
DECLARE_INTERFACE_(IPrintCoreHelperUni, IPrintCoreHelper)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _COM_Outptr_ LPVOID* ppvObj)PURE;
    STDMETHOD_(ULONG, AddRef) (THIS)PURE;
    STDMETHOD_(ULONG, Release) (THIS)PURE;
    STDMETHOD(GetOption) (THIS_
                          _In_reads_bytes_opt_(cbSize)
                                   CONST DEVMODE *pDevmode, OPTIONAL
                          _In_ DWORD cbSize,
                          _In_ PCSTR pszFeatureRequested,
                          _Outptr_ PCSTR *ppszOption) PURE;
    STDMETHOD(SetOptions) (THIS_
                           IN PDEVMODE pDevmode, OPTIONAL
                           IN DWORD cbSize,
                           IN BOOL bResolveConflicts,
                           IN CONST PRINT_FEATURE_OPTION pFOPairs[],
                           IN DWORD cPairs,
                           OUT PDWORD pcPairsWritten,
                           OUT PDWORD pdwResult) PURE;
    STDMETHOD(EnumConstrainedOptions) (THIS_
                                       IN CONST DEVMODE *pDevmode, OPTIONAL
                                       IN DWORD cbSize,
                                       IN PCSTR pszFeatureKeyword,
                                       OUT PCSTR *pConstrainedOptionList[],
                                       OUT DWORD *pdwNumOptions) PURE;
    STDMETHOD(WhyConstrained) (THIS_
                               _In_reads_bytes_opt_(cbSize)
                                     CONST DEVMODE *pDevmode, OPTIONAL
                               _In_ DWORD cbSize,
                               _In_ PCSTR pszFeatureKeyword,
                               _In_ PCSTR pszOptionKeyword,
                               _Outptr_result_buffer_(*pdwNumOptions)
                                     CONST PRINT_FEATURE_OPTION **ppFOConstraints,
                               _Out_ DWORD *pdwNumOptions) PURE;
    STDMETHOD(EnumFeatures) (THIS_
                             _Outptr_result_buffer_(*pdwNumFeatures)
                                   PCSTR *pFeatureList[],
                             _Out_ DWORD *pdwNumFeatures) PURE;
    STDMETHOD(EnumOptions) (THIS_
                            _In_ PCSTR pszFeatureKeyword,
                            _Outptr_result_buffer_(*pdwNumOptions)
                                  PCSTR *pOptionList[],
                            _Out_ DWORD *pdwNumOptions) PURE;
    STDMETHOD(GetFontSubstitution) (THIS_
                                    IN PCWSTR pszTrueTypeFontName,
                                    OUT PCWSTR *ppszDevFontName) PURE;
    STDMETHOD(SetFontSubstitution) (THIS_
                                    IN PCWSTR pszTrueTypeFontName,
                                    IN PCWSTR pszDevFontName) PURE;
    STDMETHOD(CreateInstanceOfMSXMLObject) (THIS_
                                            IN REFCLSID rclsid,
                                            IN LPUNKNOWN pUnkOuter,
                                            IN DWORD dwClsContext,
                                            IN REFIID riid,
                                            OUT LPVOID *ppv) PURE;
    STDMETHOD(CreateGDLSnapshot) (THIS_
                                  IN PDEVMODE pDevmode, OPTIONAL
                                  IN DWORD cbSize,
                                  IN DWORD dwFlags,
                                  OUT LPSTREAM *ppSnapshotStream) PURE;
    STDMETHOD(CreateDefaultGDLSnapshot) (THIS_
                                         _In_ DWORD dwFlags,
                                         _Outptr_ LPSTREAM *ppSnapshotStream) PURE;
};
DECLARE_INTERFACE_(IPrintCoreHelperUni2, IPrintCoreHelperUni)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _COM_Outptr_ LPVOID* ppvObj)PURE;
    STDMETHOD_(ULONG, AddRef) (THIS)PURE;
    STDMETHOD_(ULONG, Release) (THIS)PURE;
    STDMETHOD(GetOption) (THIS_
                          _In_reads_bytes_opt_(cbSize)
                                   CONST DEVMODE *pDevmode, OPTIONAL
                          _In_ DWORD cbSize,
                          _In_ PCSTR pszFeatureRequested,
                          _Outptr_ PCSTR *ppszOption) PURE;
    STDMETHOD(SetOptions) (THIS_
                           IN PDEVMODE pDevmode, OPTIONAL
                           IN DWORD cbSize,
                           IN BOOL bResolveConflicts,
                           IN CONST PRINT_FEATURE_OPTION pFOPairs[],
                           IN DWORD cPairs,
                           OUT PDWORD pcPairsWritten,
                           OUT PDWORD pdwResult) PURE;
    STDMETHOD(EnumConstrainedOptions) (THIS_
                                       IN CONST DEVMODE *pDevmode, OPTIONAL
                                       IN DWORD cbSize,
                                       IN PCSTR pszFeatureKeyword,
                                       OUT PCSTR *pConstrainedOptionList[],
                                       OUT DWORD *pdwNumOptions) PURE;
    STDMETHOD(WhyConstrained) (THIS_
                               _In_reads_bytes_opt_(cbSize)
                                     CONST DEVMODE *pDevmode, OPTIONAL
                               _In_ DWORD cbSize,
                               _In_ PCSTR pszFeatureKeyword,
                               _In_ PCSTR pszOptionKeyword,
                               _Outptr_result_buffer_(*pdwNumOptions)
                                     CONST PRINT_FEATURE_OPTION **ppFOConstraints,
                               _Out_ DWORD *pdwNumOptions) PURE;
    STDMETHOD(EnumFeatures) (THIS_
                             _Outptr_result_buffer_(*pdwNumFeatures)
                                   PCSTR *pFeatureList[],
                             _Out_ DWORD *pdwNumFeatures) PURE;
    STDMETHOD(EnumOptions) (THIS_
                            _In_ PCSTR pszFeatureKeyword,
                            _Outptr_result_buffer_(*pdwNumOptions)
                                  PCSTR *pOptionList[],
                            _Out_ DWORD *pdwNumOptions) PURE;
    STDMETHOD(GetFontSubstitution) (THIS_
                                    IN PCWSTR pszTrueTypeFontName,
                                    OUT PCWSTR *ppszDevFontName) PURE;
    STDMETHOD(SetFontSubstitution) (THIS_
                                    IN PCWSTR pszTrueTypeFontName,
                                    IN PCWSTR pszDevFontName) PURE;
    STDMETHOD(CreateInstanceOfMSXMLObject) (THIS_
                                            IN REFCLSID rclsid,
                                            IN LPUNKNOWN pUnkOuter,
                                            IN DWORD dwClsContext,
                                            IN REFIID riid,
                                            OUT LPVOID *ppv) PURE;
    STDMETHOD(CreateGDLSnapshot) (THIS_
                                  IN PDEVMODE pDevmode, OPTIONAL
                                  IN DWORD cbSize,
                                  IN DWORD dwFlags,
                                  OUT LPSTREAM *ppSnapshotStream) PURE;
    STDMETHOD(CreateDefaultGDLSnapshot) (THIS_
                                         IN DWORD dwFlags,
                                         OUT LPSTREAM *ppSnapshotStream) PURE;
    STDMETHOD(GetNamedCommand) (THIS_
        _In_reads_bytes_opt_(cbSize)
                PDEVMODE pDevmode,
                DWORD cbSize,
        _In_ PCWSTR pszCommandName,
        _Outptr_result_bytebuffer_(*pcbCommandSize)
                PBYTE *ppCommandBytes,
        _Out_ DWORD *pcbCommandSize) PURE;
};
DECLARE_INTERFACE_(IPrintCoreHelperPS, IPrintCoreHelper)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _COM_Outptr_ LPVOID* ppvObj)PURE;
    STDMETHOD_(ULONG, AddRef) (THIS)PURE;
    STDMETHOD_(ULONG, Release) (THIS)PURE;
    STDMETHOD(GetOption) (THIS_
                          _In_reads_bytes_opt_(cbSize)
                                   CONST DEVMODE *pDevmode, OPTIONAL
                          _In_ DWORD cbSize,
                          _In_ PCSTR pszFeatureRequested,
                          _Outptr_ PCSTR *ppszOption) PURE;
    STDMETHOD(SetOptions) (THIS_
                           IN PDEVMODE pDevmode, OPTIONAL
                           IN DWORD cbSize,
                           IN BOOL bResolveConflicts,
                           IN CONST PRINT_FEATURE_OPTION pFOPairs[],
                           IN DWORD cPairs,
                           OUT PDWORD pcPairsWritten,
                           OUT PDWORD pdwResult) PURE;
    STDMETHOD(EnumConstrainedOptions) (THIS_
                                       IN CONST DEVMODE *pDevmode, OPTIONAL
                                       IN DWORD cbSize,
                                       IN PCSTR pszFeatureKeyword,
                                       OUT PCSTR *pConstrainedOptionList[],
                                       OUT DWORD *pdwNumOptions) PURE;
    STDMETHOD(WhyConstrained) (THIS_
                               _In_reads_bytes_opt_(cbSize)
                                     CONST DEVMODE *pDevmode, OPTIONAL
                               _In_ DWORD cbSize,
                               _In_ PCSTR pszFeatureKeyword,
                               _In_ PCSTR pszOptionKeyword,
                               _Outptr_result_buffer_(*pdwNumOptions)
                                     CONST PRINT_FEATURE_OPTION **ppFOConstraints,
                               _Out_ DWORD *pdwNumOptions) PURE;
    STDMETHOD(EnumFeatures) (THIS_
                             _Outptr_result_buffer_(*pdwNumFeatures)
                                   PCSTR *pFeatureList[],
                             _Out_ DWORD *pdwNumFeatures) PURE;
    STDMETHOD(EnumOptions) (THIS_
                            _In_ PCSTR pszFeatureKeyword,
                            _Outptr_result_buffer_(*pdwNumOptions)
                                  PCSTR *pOptionList[],
                            _Out_ DWORD *pdwNumOptions) PURE;
    STDMETHOD(GetFontSubstitution) (THIS_
                                    IN PCWSTR pszTrueTypeFontName,
                                    OUT PCWSTR *ppszDevFontName) PURE;
    STDMETHOD(SetFontSubstitution) (THIS_
                                    IN PCWSTR pszTrueTypeFontName,
                                    IN PCWSTR pszDevFontName) PURE;
    STDMETHOD(CreateInstanceOfMSXMLObject) (THIS_
                                            IN REFCLSID rclsid,
                                            IN LPUNKNOWN pUnkOuter,
                                            IN DWORD dwClsContext,
                                            IN REFIID riid,
                                            OUT LPVOID *ppv) PURE;
    STDMETHOD(GetGlobalAttribute) (THIS_
                                   _In_ PCSTR pszAttribute,
                                   _Out_ PDWORD pdwDataType,
                                   _Outptr_result_buffer_(*pcbSize)
                                         PBYTE *ppbData,
                                   _Out_ PDWORD pcbSize) PURE;
    STDMETHOD(GetFeatureAttribute) (THIS_
                                    _In_ PCSTR pszFeatureKeyword,
                                    _In_ PCSTR pszAttribute,
                                    _Out_ PDWORD pdwDataType,
                                    _Outptr_result_buffer_(*pcbSize)
                                          PBYTE *ppbData,
                                    _Out_ PDWORD pcbSize) PURE;
    STDMETHOD(GetOptionAttribute) (THIS_
                                   _In_ PCSTR pszFeatureKeyword,
                                   _In_ PCSTR pszOptionKeyword,
                                   _In_opt_ PCSTR pszAttribute,
                                   _Out_ PDWORD pdwDataType,
                                   _Outptr_result_buffer_(*pcbSize)
                                             PBYTE *ppbData,
                                   _Out_ PDWORD pcbSize) PURE;
};
DECLARE_INTERFACE_(IPrintOemCommon, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _COM_Outptr_ LPVOID* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release) (THIS) PURE;
    STDMETHOD(GetInfo) (THIS_
         _In_ DWORD dwMode,
         _Out_writes_bytes_to_(cbSize, *pcbNeeded) PVOID pBuffer,
         _In_ DWORD cbSize,
         _Out_ PDWORD pcbNeeded) PURE;
    STDMETHOD(DevMode) (THIS_ _In_ DWORD dwMode,
                                _Inout_ POEMDMPARAM pOemDMParam) PURE;
};
DECLARE_INTERFACE_(IPrintOemUI, IPrintOemCommon)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _COM_Outptr_ LPVOID* ppvObj)PURE;
    STDMETHOD_(ULONG, AddRef) (THIS)PURE;
    STDMETHOD_(ULONG, Release) (THIS)PURE;
    STDMETHOD(GetInfo) (THIS_
         _In_ DWORD dwMode,
         _Out_writes_bytes_to_(cbSize, *pcbNeeded) PVOID pBuffer,
         _In_ DWORD cbSize,
         _Out_ PDWORD pcbNeeded) PURE;
    STDMETHOD(DevMode) (THIS_ _In_ DWORD dwMode,
                                _Inout_ POEMDMPARAM pOemDMParam) PURE;
    STDMETHOD(PublishDriverInterface) (THIS_ _In_ IUnknown *pIUnknown) PURE;
    STDMETHOD(CommonUIProp) (THIS_
            _In_ DWORD dwMode,
            _In_ POEMCUIPPARAM pOemCUIPParam
            )PURE;
    STDMETHOD(DocumentPropertySheets) (THIS_
            _Inout_ PPROPSHEETUI_INFO pPSUIInfo,
            _In_ LPARAM lParam
            )PURE;
    STDMETHOD(DevicePropertySheets) (THIS_
            _In_ PPROPSHEETUI_INFO pPSUIInfo,
            _In_ LPARAM lParam
            )PURE;
    STDMETHOD(DevQueryPrintEx) (THIS_
            _In_ POEMUIOBJ poemuiobj,
            _In_ PDEVQUERYPRINT_INFO pDQPInfo,
            _In_ PDEVMODE pPublicDM,
            _In_ PVOID pOEMDM
            )PURE;
    STDMETHOD(DeviceCapabilities) (THIS_
            _Inout_ POEMUIOBJ poemuiobj,
            _In_ HANDLE hPrinter,
            _In_ PWSTR pDeviceName,
            _In_ WORD wCapability,
            _Out_writes_(_Inexpressible_("varies with wCapability"))
                    PVOID pOutput,
            _In_ PDEVMODE pPublicDM,
            _In_ PVOID pOEMDM,
            _In_ DWORD dwOld,
            _Out_ DWORD *dwResult
            )PURE;
    STDMETHOD(UpgradePrinter) (THIS_
            _In_ DWORD dwLevel,
            _At_((PDRIVER_UPGRADE_INFO_1)pDriverUpgradeInfo, _In_)
                 PBYTE pDriverUpgradeInfo
            )PURE;
    STDMETHOD(PrinterEvent) (THIS_
            _In_ PWSTR pPrinterName,
            _In_ INT iDriverEvent,
            _In_ DWORD dwFlags,
            _In_ LPARAM lParam
            )PURE;
    STDMETHOD(DriverEvent) (THIS_
            _In_ DWORD dwDriverEvent,
            _In_ DWORD dwLevel,
            _In_reads_(_Inexpressible_("varies"))
                 LPBYTE pDriverInfo,
            _In_ LPARAM lParam
            )PURE;
    STDMETHOD(QueryColorProfile) (THIS_
            _In_ HANDLE hPrinter,
            _In_ POEMUIOBJ poemuiobj,
            _In_ PDEVMODE pPublicDM,
            _In_ PVOID pOEMDM,
            _In_ ULONG ulQueryMode,
            _Out_writes_(*pcbProfileData) VOID *pvProfileData,
            _Inout_ ULONG *pcbProfileData,
            _Out_ FLONG *pflProfileData
            )PURE;
    STDMETHOD(FontInstallerDlgProc) (THIS_
            _In_ HWND hWnd,
            _In_ UINT usMsg,
            _In_ WPARAM wParam,
            _In_ LPARAM lParam
            )PURE;
    STDMETHOD(UpdateExternalFonts) (THIS_
            _In_ HANDLE hPrinter,
            _In_ HANDLE hHeap,
            _In_ PWSTR pwstrCartridges
           )PURE;
};
DECLARE_INTERFACE_(IPrintOemUI2, IPrintOemUI)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _COM_Outptr_ LPVOID* ppvObj)PURE;
    STDMETHOD_(ULONG, AddRef) (THIS)PURE;
    STDMETHOD_(ULONG, Release) (THIS)PURE;
    STDMETHOD(GetInfo) (THIS_
         _In_ DWORD dwMode,
         _Out_writes_bytes_to_(cbSize, *pcbNeeded) PVOID pBuffer,
         _In_ DWORD cbSize,
         _Out_ PDWORD pcbNeeded) PURE;
    STDMETHOD(DevMode) (THIS_ _In_ DWORD dwMode,
                                _Inout_ POEMDMPARAM pOemDMParam) PURE;
    STDMETHOD(PublishDriverInterface) (THIS_ _In_ IUnknown *pIUnknown) PURE;
    STDMETHOD(CommonUIProp) (THIS_
            _In_ DWORD dwMode,
            _In_ POEMCUIPPARAM pOemCUIPParam
            )PURE;
    STDMETHOD(DocumentPropertySheets) (THIS_
            _Inout_ PPROPSHEETUI_INFO pPSUIInfo,
            _In_ LPARAM lParam
            )PURE;
    STDMETHOD(DevicePropertySheets) (THIS_
            _In_ PPROPSHEETUI_INFO pPSUIInfo,
            _In_ LPARAM lParam
            )PURE;
    STDMETHOD(DevQueryPrintEx) (THIS_
            _In_ POEMUIOBJ poemuiobj,
            _In_ PDEVQUERYPRINT_INFO pDQPInfo,
            _In_ PDEVMODE pPublicDM,
            _In_ PVOID pOEMDM
            )PURE;
    STDMETHOD(DeviceCapabilities) (THIS_
            _Inout_ POEMUIOBJ poemuiobj,
            _In_ HANDLE hPrinter,
            _In_ PWSTR pDeviceName,
            _In_ WORD wCapability,
            _Out_writes_(_Inexpressible_("varies with wCapability"))
                    PVOID pOutput,
            _In_ PDEVMODE pPublicDM,
            _In_ PVOID pOEMDM,
            _In_ DWORD dwOld,
            _Out_ DWORD *dwResult
            )PURE;
    STDMETHOD(UpgradePrinter) (THIS_
            _In_ DWORD dwLevel,
            _At_((PDRIVER_UPGRADE_INFO_1)pDriverUpgradeInfo, _In_)
                 PBYTE pDriverUpgradeInfo
            )PURE;
    STDMETHOD(PrinterEvent) (THIS_
            _In_ PWSTR pPrinterName,
            _In_ INT iDriverEvent,
            _In_ DWORD dwFlags,
            _In_ LPARAM lParam
            )PURE;
    STDMETHOD(DriverEvent) (THIS_
            _In_ DWORD dwDriverEvent,
            _In_ DWORD dwLevel,
            _In_reads_(_Inexpressible_("varies"))
                 LPBYTE pDriverInfo,
            _In_ LPARAM lParam
            )PURE;
    STDMETHOD(QueryColorProfile) (THIS_
            _In_ HANDLE hPrinter,
            _In_ POEMUIOBJ poemuiobj,
            _In_ PDEVMODE pPublicDM,
            _In_ PVOID pOEMDM,
            _In_ ULONG ulQueryMode,
            _Out_writes_(*pcbProfileData) VOID *pvProfileData,
            _Inout_ ULONG *pcbProfileData,
            _Out_ FLONG *pflProfileData
            )PURE;
    STDMETHOD(FontInstallerDlgProc) (THIS_
            _In_ HWND hWnd,
            _In_ UINT usMsg,
            _In_ WPARAM wParam,
            _In_ LPARAM lParam
            )PURE;
    STDMETHOD(UpdateExternalFonts) (THIS_
            _In_ HANDLE hPrinter,
            _In_ HANDLE hHeap,
            _In_ PWSTR pwstrCartridges
           )PURE;
    STDMETHOD(QueryJobAttributes) (THIS_
            _In_ HANDLE hPrinter,
            _In_ PDEVMODE pDevmode,
            _In_range_(1, 4) DWORD dwLevel,
            _In_reads_(_Inexpressible_("varies"))
                             LPBYTE lpAttributeInfo
           )PURE;
    STDMETHOD(HideStandardUI) (THIS_
            DWORD dwMode
           )PURE;
    STDMETHOD(DocumentEvent) (THIS_
            HANDLE hPrinter,
            HDC hdc,
            INT iEsc,
            ULONG cbIn,
            PVOID pvIn,
            ULONG cbOut,
            PVOID pvOut,
            PINT piResult
           )PURE;
};
DECLARE_INTERFACE_(IPrintOemUIMXDC, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _COM_Outptr_ LPVOID* ppvObj)PURE;
    STDMETHOD_(ULONG, AddRef) (THIS)PURE;
    STDMETHOD_(ULONG, Release) (THIS)PURE;
    STDMETHOD(AdjustImageableArea) (THIS_
            HANDLE hPrinter,
            DWORD cbDevMode,
            CONST PDEVMODE pDevMode,
            DWORD cbOEMDM,
            CONST PVOID pOEMDM,
            PRECTL prclImageableArea
           )PURE;
    STDMETHOD(AdjustImageCompression) (THIS_
            HANDLE hPrinter,
            DWORD cbDevMode,
            CONST PDEVMODE pDevMode,
            DWORD cbOEMDM,
            CONST PVOID pOEMDM,
            PLONG pCompressionMode
            ) PURE;
    STDMETHOD(AdjustDPI) (THIS_
            HANDLE hPrinter,
            DWORD cbDevMode,
            CONST PDEVMODE pDevMode,
            DWORD cbOEMDM,
            CONST PVOID pOEMDM,
            PLONG pDPI
            ) PURE;
};
DECLARE_INTERFACE_(IPrintOemDriverUI, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _COM_Outptr_ LPVOID* ppvObj)PURE;
    STDMETHOD_(ULONG, AddRef) (THIS)PURE;
    STDMETHOD_(ULONG, Release) (THIS)PURE;
    STDMETHOD(DrvGetDriverSetting) (THIS_
                        PVOID pci,
                        PCSTR Feature,
                        PVOID pOutput,
                        DWORD cbSize,
                        PDWORD pcbNeeded,
                        PDWORD pdwOptionsReturned
                        )PURE;
    STDMETHOD(DrvUpgradeRegistrySetting) (THIS_
                        HANDLE hPrinter,
                        PCSTR pFeature,
                        PCSTR pOption
                        )PURE;
    STDMETHOD(DrvUpdateUISetting) (THIS_
                        PVOID pci,
                        PVOID pOptItem,
                        DWORD dwPreviousSelection,
                        DWORD dwMode
                        )PURE;
};
DECLARE_INTERFACE_(IPrintCoreUI2, IPrintOemDriverUI)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _COM_Outptr_ LPVOID* ppvObj)PURE;
    STDMETHOD_(ULONG, AddRef) (THIS)PURE;
    STDMETHOD_(ULONG, Release) (THIS)PURE;
    STDMETHOD(DrvGetDriverSetting) (THIS_
                        PVOID pci,
                        PCSTR Feature,
                        PVOID pOutput,
                        DWORD cbSize,
                        PDWORD pcbNeeded,
                        PDWORD pdwOptionsReturned
                        )PURE;
    STDMETHOD(DrvUpgradeRegistrySetting) (THIS_
                        HANDLE hPrinter,
                        PCSTR pFeature,
                        PCSTR pOption
                        )PURE;
    STDMETHOD(DrvUpdateUISetting) (THIS_
                        PVOID pci,
                        PVOID pOptItem,
                        DWORD dwPreviousSelection,
                        DWORD dwMode
                        )PURE;
    STDMETHOD(GetOptions) (THIS_
                           _In_ POEMUIOBJ poemuiobj,
                           _Reserved_ DWORD dwFlags,
                           _In_reads_bytes_opt_(cbIn)
                                       PCZZSTR pmszFeaturesRequested,
                           _In_ DWORD cbIn,
                           _Out_writes_bytes_to_opt_(cbSize, *pcbNeeded)
                                       PZZSTR pmszFeatureOptionBuf,
                           _In_ DWORD cbSize,
                           _Out_ _On_failure_(_When_(return == E_OUTOFMEMORY, _Post_valid_))
                                       PDWORD pcbNeeded) PURE;
    STDMETHOD(SetOptions) (THIS_
                           _In_ POEMUIOBJ poemuiobj,
                           _In_ DWORD dwFlags,
                           _In_reads_bytes_(cbIn) PCZZSTR pmszFeatureOptionBuf,
                           _In_ DWORD cbIn,
                           _Out_ PDWORD pdwResult) PURE;
    STDMETHOD(EnumConstrainedOptions) (THIS_
                                       _In_ POEMUIOBJ poemuiobj,
                                       _Reserved_ DWORD dwFlags,
                                       _In_ PCSTR pszFeatureKeyword,
                                       _Out_writes_bytes_to_opt_(cbSize, *pcbNeeded)
                                                   PZZSTR pmszConstrainedOptionList,
                                       _In_ DWORD cbSize,
                                       _Out_ _On_failure_(_When_(return == E_OUTOFMEMORY, _Post_valid_))
                                                   PDWORD pcbNeeded) PURE;
    STDMETHOD(WhyConstrained) (THIS_
                               _In_ POEMUIOBJ poemuiobj,
                               _Reserved_ DWORD dwFlags,
                               _In_ PCSTR pszFeatureKeyword,
                               _In_ PCSTR pszOptionKeyword,
                               _Out_writes_bytes_to_opt_(cbSize, *pcbNeeded)
                                           PZZSTR pmszReasonList,
                               _In_ DWORD cbSize,
                               _Out_ _On_failure_(_When_(return == E_OUTOFMEMORY, _Post_valid_))
                                           PDWORD pcbNeeded) PURE;
    STDMETHOD(GetGlobalAttribute) (THIS_
                                   _In_ POEMUIOBJ poemuiobj,
                                   _Reserved_ DWORD dwFlags,
                                   _In_opt_ PCSTR pszAttribute,
                                   _Out_ PDWORD pdwDataType,
                                   _Out_writes_bytes_to_opt_(cbSize, *pcbNeeded)
                                               PBYTE pbData,
                                   _In_ DWORD cbSize,
                                   _Out_ _On_failure_(_When_(return == E_OUTOFMEMORY, _Post_valid_))
                                               PDWORD pcbNeeded) PURE;
    STDMETHOD(GetFeatureAttribute) (THIS_
                                    _In_ POEMUIOBJ poemuiobj,
                                    _Reserved_ DWORD dwFlags,
                                    _In_ PCSTR pszFeatureKeyword,
                                    _In_opt_ PCSTR pszAttribute,
                                    _Out_ PDWORD pdwDataType,
                                    _Out_writes_bytes_to_opt_(cbSize, *pcbNeeded)
                                                PBYTE pbData,
                                    _In_ DWORD cbSize,
                                    _Out_ _On_failure_(_When_(return == E_OUTOFMEMORY, _Post_valid_))
                                                PDWORD pcbNeeded) PURE;
    STDMETHOD(GetOptionAttribute) (THIS_
                                   _In_ POEMUIOBJ poemuiobj,
                                   _Reserved_ DWORD dwFlags,
                                   _In_ PCSTR pszFeatureKeyword,
                                   _In_ PCSTR pszOptionKeyword,
                                   _In_opt_ PCSTR pszAttribute,
                                   _Out_ PDWORD pdwDataType,
                                   _Out_writes_bytes_to_opt_(cbSize, *pcbNeeded)
                                               PBYTE pbData,
                                   _In_ DWORD cbSize,
                                   _Out_ _On_failure_(_When_(return == E_OUTOFMEMORY, _Post_valid_))
                                               PDWORD pcbNeeded) PURE;
    STDMETHOD(EnumFeatures) (THIS_
                             _In_ POEMUIOBJ poemuiobj,
                             _Reserved_ DWORD dwFlags,
                             _Out_writes_bytes_to_opt_(cbSize, *pcbNeeded)
                                         PZZSTR pmszFeatureList,
                             _In_ DWORD cbSize,
                             _Out_ _On_failure_(_When_(return == E_OUTOFMEMORY, _Post_valid_))
                                         PDWORD pcbNeeded) PURE;
    STDMETHOD(EnumOptions) (THIS_
                            _In_ POEMUIOBJ poemuiobj,
                            _Reserved_ DWORD dwFlags,
                            _In_ PCSTR pszFeatureKeyword,
                            _Out_writes_bytes_to_opt_(cbSize, *pcbNeeded)
                                        PZZSTR pmszOptionList,
                            _In_ DWORD cbSize,
                            _Out_ _On_failure_(_When_(return == E_OUTOFMEMORY, _Post_valid_))
                                        PDWORD pcbNeeded) PURE;
    STDMETHOD(QuerySimulationSupport) (THIS_
                                       _In_ HANDLE hPrinter,
                                       _In_ DWORD dwLevel,
                                       _Out_writes_bytes_to_opt_(cbSize, *pcbNeeded)
                                             PBYTE pCaps,
                                       _In_ DWORD cbSize,
                                       _Out_ _On_failure_(_When_(return == E_OUTOFMEMORY, _Post_valid_))
                                             PDWORD pcbNeeded) PURE;
};
}
#endif
#pragma endregion
