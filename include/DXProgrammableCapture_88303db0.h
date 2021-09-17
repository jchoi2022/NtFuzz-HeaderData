#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
interface DECLSPEC_UUID("9f251514-9d4d-4902-9d60-18988ab7d4b5") DECLSPEC_NOVTABLE IDXGraphicsAnalysis : public IUnknown
{
    STDMETHOD_(void, BeginCapture)() PURE;
    STDMETHOD_(void, EndCapture)() PURE;
};
#endif
#pragma endregion
