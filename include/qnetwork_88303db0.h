#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(LIBID_QuartzNetTypeLib,0x56A868B1L,0x0AD4,0x11CE,0xB0,0x3A,0x00,0x20,0xAF,0x0B,0xA7,0x70);
DEFINE_GUID(IID_IAMNetShowConfig,0xFA2AA8F1L,0x8B62,0x11D0,0xA5,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
DECLARE_INTERFACE_(IAMNetShowConfig, IDispatch)
{
BEGIN_INTERFACE
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;
    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;
    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;
    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
    STDMETHOD(get_BufferingTime)(THIS_ double FAR* pBufferingTime) PURE;
    STDMETHOD(put_BufferingTime)(THIS_ double BufferingTime) PURE;
    STDMETHOD(get_UseFixedUDPPort)(THIS_ VARIANT_BOOL FAR* pUseFixedUDPPort) PURE;
    STDMETHOD(put_UseFixedUDPPort)(THIS_ VARIANT_BOOL UseFixedUDPPort) PURE;
    STDMETHOD(get_FixedUDPPort)(THIS_ long FAR* pFixedUDPPort) PURE;
    STDMETHOD(put_FixedUDPPort)(THIS_ long FixedUDPPort) PURE;
    STDMETHOD(get_UseHTTPProxy)(THIS_ VARIANT_BOOL FAR* pUseHTTPProxy) PURE;
    STDMETHOD(put_UseHTTPProxy)(THIS_ VARIANT_BOOL UseHTTPProxy) PURE;
    STDMETHOD(get_EnableAutoProxy)(THIS_ VARIANT_BOOL FAR* pEnableAutoProxy) PURE;
    STDMETHOD(put_EnableAutoProxy)(THIS_ VARIANT_BOOL EnableAutoProxy) PURE;
    STDMETHOD(get_HTTPProxyHost)(THIS_ BSTR FAR* pbstrHTTPProxyHost) PURE;
    STDMETHOD(put_HTTPProxyHost)(THIS_ BSTR bstrHTTPProxyHost) PURE;
    STDMETHOD(get_HTTPProxyPort)(THIS_ long FAR* pHTTPProxyPort) PURE;
    STDMETHOD(put_HTTPProxyPort)(THIS_ long HTTPProxyPort) PURE;
    STDMETHOD(get_EnableMulticast)(THIS_ VARIANT_BOOL FAR* pEnableMulticast) PURE;
    STDMETHOD(put_EnableMulticast)(THIS_ VARIANT_BOOL EnableMulticast) PURE;
    STDMETHOD(get_EnableUDP)(THIS_ VARIANT_BOOL FAR* pEnableUDP) PURE;
    STDMETHOD(put_EnableUDP)(THIS_ VARIANT_BOOL EnableUDP) PURE;
    STDMETHOD(get_EnableTCP)(THIS_ VARIANT_BOOL FAR* pEnableTCP) PURE;
    STDMETHOD(put_EnableTCP)(THIS_ VARIANT_BOOL EnableTCP) PURE;
    STDMETHOD(get_EnableHTTP)(THIS_ VARIANT_BOOL FAR* pEnableHTTP) PURE;
    STDMETHOD(put_EnableHTTP)(THIS_ VARIANT_BOOL EnableHTTP) PURE;
};
DEFINE_GUID(IID_IAMChannelInfo,0xFA2AA8F2L,0x8B62,0x11D0,0xA5,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
DECLARE_INTERFACE_(IAMChannelInfo, IDispatch)
{
BEGIN_INTERFACE
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;
    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;
    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;
    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
    STDMETHOD(get_ChannelName)(THIS_ BSTR FAR* pbstrChannelName) PURE;
    STDMETHOD(get_ChannelDescription)(THIS_ BSTR FAR* pbstrChannelDescription) PURE;
    STDMETHOD(get_ChannelURL)(THIS_ BSTR FAR* pbstrChannelURL) PURE;
    STDMETHOD(get_ContactAddress)(THIS_ BSTR FAR* pbstrContactAddress) PURE;
    STDMETHOD(get_ContactPhone)(THIS_ BSTR FAR* pbstrContactPhone) PURE;
    STDMETHOD(get_ContactEmail)(THIS_ BSTR FAR* pbstrContactEmail) PURE;
};
DEFINE_GUID(IID_IAMNetworkStatus,0xFA2AA8F3L,0x8B62,0x11D0,0xA5,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
DECLARE_INTERFACE_(IAMNetworkStatus, IDispatch)
{
BEGIN_INTERFACE
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;
    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;
    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;
    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
    STDMETHOD(get_ReceivedPackets)(THIS_ long FAR* pReceivedPackets) PURE;
    STDMETHOD(get_RecoveredPackets)(THIS_ long FAR* pRecoveredPackets) PURE;
    STDMETHOD(get_LostPackets)(THIS_ long FAR* pLostPackets) PURE;
    STDMETHOD(get_ReceptionQuality)(THIS_ long FAR* pReceptionQuality) PURE;
    STDMETHOD(get_BufferingCount)(THIS_ long FAR* pBufferingCount) PURE;
    STDMETHOD(get_IsBroadcast)(THIS_ VARIANT_BOOL FAR* pIsBroadcast) PURE;
    STDMETHOD(get_BufferingProgress)(THIS_ long FAR* pBufferingProgress) PURE;
};
typedef enum {
    AM_EXSEEK_CANSEEK = 1,
    AM_EXSEEK_CANSCAN = 2,
    AM_EXSEEK_MARKERSEEK = 4,
    AM_EXSEEK_SCANWITHOUTCLOCK = 8,
    AM_EXSEEK_NOSTANDARDREPAINT = 16,
    AM_EXSEEK_BUFFERING = 32,
    AM_EXSEEK_SENDS_VIDEOFRAMEREADY = 64
} AMExtendedSeekingCapabilities;
DEFINE_GUID(IID_IAMExtendedSeeking,0xFA2AA8F9L,0x8B62,0x11D0,0xA5,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
DECLARE_INTERFACE_(IAMExtendedSeeking, IDispatch)
{
BEGIN_INTERFACE
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;
    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;
    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;
    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
    STDMETHOD(get_ExSeekCapabilities)(THIS_ long FAR* pExCapabilities) PURE;
    STDMETHOD(get_MarkerCount)(THIS_ long FAR* pMarkerCount) PURE;
    STDMETHOD(get_CurrentMarker)(THIS_ long FAR* pCurrentMarker) PURE;
    STDMETHOD(GetMarkerTime)(THIS_ long MarkerNum, double FAR* pMarkerTime) PURE;
    STDMETHOD(GetMarkerName)(THIS_ long MarkerNum, BSTR FAR* pbstrMarkerName) PURE;
    STDMETHOD(put_PlaybackSpeed)(THIS_ double Speed) PURE;
    STDMETHOD(get_PlaybackSpeed)(THIS_ double FAR* pSpeed) PURE;
};
DEFINE_GUID(IID_IAMNetShowExProps,0xFA2AA8F5L,0x8B62,0x11D0,0xA5,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
DECLARE_INTERFACE_(IAMNetShowExProps, IDispatch)
{
BEGIN_INTERFACE
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;
    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;
    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;
    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
    STDMETHOD(get_SourceProtocol)(THIS_ long FAR* pSourceProtocol) PURE;
    STDMETHOD(get_Bandwidth)(THIS_ long FAR* pBandwidth) PURE;
    STDMETHOD(get_ErrorCorrection)(THIS_ BSTR FAR* pbstrErrorCorrection) PURE;
    STDMETHOD(get_CodecCount)(THIS_ long FAR* pCodecCount) PURE;
    STDMETHOD(GetCodecInstalled)(THIS_ long CodecNum, VARIANT_BOOL FAR* pCodecInstalled) PURE;
    STDMETHOD(GetCodecDescription)(THIS_ long CodecNum, BSTR FAR* pbstrCodecDescription) PURE;
    STDMETHOD(GetCodecURL)(THIS_ long CodecNum, BSTR FAR* pbstrCodecURL) PURE;
    STDMETHOD(get_CreationDate)(THIS_ DATE FAR* pCreationDate) PURE;
    STDMETHOD(get_SourceLink)(THIS_ BSTR FAR* pbstrSourceLink) PURE;
};
DEFINE_GUID(IID_IAMExtendedErrorInfo,0xFA2AA8F6L,0x8B62,0x11D0,0xA5,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
DECLARE_INTERFACE_(IAMExtendedErrorInfo, IDispatch)
{
BEGIN_INTERFACE
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;
    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;
    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;
    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
    STDMETHOD(get_HasError)(THIS_ VARIANT_BOOL FAR* pHasError) PURE;
    STDMETHOD(get_ErrorDescription)(THIS_ BSTR FAR* pbstrErrorDescription) PURE;
    STDMETHOD(get_ErrorCode)(THIS_ long FAR* pErrorCode) PURE;
};
DEFINE_GUID(IID_IAMMediaContent,0xFA2AA8F4L,0x8B62,0x11D0,0xA5,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
DECLARE_INTERFACE_(IAMMediaContent, IDispatch)
{
BEGIN_INTERFACE
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;
    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;
    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;
    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
    STDMETHOD(get_AuthorName)(THIS_ BSTR FAR* pbstrAuthorName) PURE;
    STDMETHOD(get_Title)(THIS_ BSTR FAR* pbstrTitle) PURE;
    STDMETHOD(get_Rating)(THIS_ BSTR FAR* pbstrRating) PURE;
    STDMETHOD(get_Description)(THIS_ BSTR FAR* pbstrDescription) PURE;
    STDMETHOD(get_Copyright)(THIS_ BSTR FAR* pbstrCopyright) PURE;
    STDMETHOD(get_BaseURL)(THIS_ BSTR FAR* pbstrBaseURL) PURE;
    STDMETHOD(get_LogoURL)(THIS_ BSTR FAR* pbstrLogoURL) PURE;
    STDMETHOD(get_LogoIconURL)(THIS_ BSTR FAR* pbstrLogoURL) PURE;
    STDMETHOD(get_WatermarkURL)(THIS_ BSTR FAR* pbstrWatermarkURL) PURE;
    STDMETHOD(get_MoreInfoURL)(THIS_ BSTR FAR* pbstrMoreInfoURL) PURE;
    STDMETHOD(get_MoreInfoBannerImage)(THIS_ BSTR FAR* pbstrMoreInfoBannerImage) PURE;
    STDMETHOD(get_MoreInfoBannerURL)(THIS_ BSTR FAR* pbstrMoreInfoBannerURL) PURE;
    STDMETHOD(get_MoreInfoText)(THIS_ BSTR FAR* pbstrMoreInfoText) PURE;
};
DEFINE_GUID(IID_IAMMediaContent2,0xCE8F78C1L,0x74D9,0x11D2,0xB0,0x9D,0x00,0xA0,0xC9,0xA8,0x11,0x17);
DECLARE_INTERFACE_(IAMMediaContent2, IDispatch)
{
BEGIN_INTERFACE
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;
    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;
    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;
    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
    STDMETHOD(get_MediaParameter)(THIS_ long EntryNum, BSTR bstrName, BSTR FAR* pbstrValue) PURE;
    STDMETHOD(get_MediaParameterName)(THIS_ long EntryNum, long Index, BSTR FAR* pbstrName) PURE;
    STDMETHOD(get_PlaylistCount)(THIS_ long FAR* pNumberEntries) PURE;
};
DEFINE_GUID(IID_IAMNetShowPreroll,0xAAE7E4E2L,0x6388,0x11D1,0x8D,0x93,0x00,0x60,0x97,0xC9,0xA2,0xB2);
DECLARE_INTERFACE_(IAMNetShowPreroll, IDispatch)
{
BEGIN_INTERFACE
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;
    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;
    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;
    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
    STDMETHOD(put_Preroll)(THIS_ VARIANT_BOOL fPreroll) PURE;
    STDMETHOD(get_Preroll)(THIS_ VARIANT_BOOL FAR* pfPreroll) PURE;
};
DEFINE_GUID(IID_IDShowPlugin,0x4746B7C8L,0x700E,0x11D1,0xBE,0xCC,0x00,0xC0,0x4F,0xB6,0xE9,0x37);
DECLARE_INTERFACE_(IDShowPlugin, IUnknown)
{
BEGIN_INTERFACE
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(get_URL)(THIS_ BSTR FAR* pURL) PURE;
    STDMETHOD(get_UserAgent)(THIS_ BSTR FAR* pUserAgent) PURE;
};
#endif
#pragma endregion
