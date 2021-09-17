       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <strsafe.h>
PROPID WIA_StdPropsInContext[NUM_STD_PROPS_IN_CONTEXT] = {
    WIA_IPA_DATATYPE,
    WIA_IPA_DEPTH,
    WIA_IPS_XRES,
    WIA_IPS_XPOS,
    WIA_IPS_XEXTENT,
    WIA_IPA_PIXELS_PER_LINE,
    WIA_IPS_YRES,
    WIA_IPS_YPOS,
    WIA_IPS_YEXTENT,
    WIA_IPA_NUMBER_OF_LINES,
    WIA_IPS_CUR_INTENT,
    WIA_IPA_TYMED,
    WIA_IPA_FORMAT,
    };
extern "C" {
HRESULT _stdcall wiasCreateDrvItem(LONG lObjectFlags, BSTR bstrItemName, BSTR bstrFullItemName,
   _Inout_ IWiaMiniDrv *pIMiniDrv, LONG cbDevSpecContext,
   _Outptr_opt_result_bytebuffer_(cbDevSpecContext) BYTE **ppDevSpecContext, _Outptr_ IWiaDrvItem **ppIWiaDrvItem);
HRESULT _stdcall wiasReadMultiple(_In_ BYTE *pWiasContext, ULONG ulCount,
   _In_reads_(ulCount) const PROPSPEC *ps, _Out_writes_(ulCount) PROPVARIANT *pv,
   _Out_writes_opt_(ulCount) PROPVARIANT *pvOld);
HRESULT _stdcall wiasWriteMultiple(_In_ BYTE *pWiasContext, ULONG ulCount,
   _In_reads_(ulCount) const PROPSPEC *ps, const PROPVARIANT *pv);
HRESULT _stdcall wiasWritePropBin(_In_ BYTE *pWiasContext, PROPID propid, LONG cbVal,
   _In_reads_bytes_(cbVal) BYTE *pbVal);
HRESULT _stdcall wiasGetPropertyAttributes(_In_ BYTE *pWiasContext, LONG cPropSpec,
   _In_reads_(cPropSpec) PROPSPEC *pPropSpec, ULONG *pulAccessFlags,
   _Out_writes_(cPropSpec) PROPVARIANT *pPropVar);
HRESULT _stdcall wiasSetPropertyAttributes(_In_ BYTE *pWiasContext, LONG cPropSpec,
   _In_reads_(cPropSpec) PROPSPEC *pPropSpec, _In_reads_(cPropSpec) ULONG *pulAccessFlags,
   _Out_writes_(cPropSpec) PROPVARIANT *pPropVar);
HRESULT _stdcall wiasValidateItemProperties(_In_ BYTE *pWiasContext, ULONG nPropSpec,
    _In_reads_(nPropSpec) const PROPSPEC *pPropSpec);
HRESULT _stdcall wiasCreatePropContext(ULONG cPropSpec, _In_reads_(cPropSpec) PROPSPEC *pPropSpec,
   ULONG cProps, _In_reads_opt_(cProps) PROPID *pProps, _In_ WIA_PROPERTY_CONTEXT *pContext);
HRESULT _stdcall wiasGetImageInformation(_In_ BYTE *pWiasContext, LONG lFlags,
    _Inout_ PMINIDRV_TRANSFER_CONTEXT pmdtc);
HRESULT _stdcall wiasWritePageBufToFile(_In_ PMINIDRV_TRANSFER_CONTEXT pmdtc);
HRESULT _stdcall wiasWritePageBufToStream(_In_ PMINIDRV_TRANSFER_CONTEXT pmdtc, _In_ IStream * pstream);
HRESULT _stdcall wiasWriteBufToFile(LONG lFlags, _In_ PMINIDRV_TRANSFER_CONTEXT pmdtc);
HRESULT _stdcall wiasReadPropStr(_In_ BYTE *pWiasContext, PROPID propid,
    _Out_ BSTR *pbstr, _Out_opt_ BSTR *pbstrOld, BOOL bMustExist);
HRESULT _stdcall wiasReadPropLong(_In_ BYTE *pWiasContext, PROPID propid,
   _Out_ LONG *plVal, _Out_opt_ LONG *plValOld, BOOL bMustExist);
HRESULT _stdcall wiasReadPropFloat(_In_ BYTE *pWiasContext, PROPID propid,
   _Out_ FLOAT *pfVal, _Out_opt_ FLOAT *pfValOld, BOOL bMustExist);
HRESULT _stdcall wiasReadPropGuid(_In_ BYTE *pWiasContext, PROPID propid,
    _Out_ GUID *pguidVal, _Out_opt_ GUID *pguidValOld, BOOL bMustExist);
HRESULT _stdcall wiasReadPropBin(_In_ BYTE *pWiasContext, PROPID propid,
    _Out_ BYTE **ppbVal, _Out_opt_ BYTE **ppbValOld, BOOL bMustExist);
HRESULT _stdcall wiasWritePropStr(_In_ BYTE *pWiasContext, PROPID propid, _In_opt_ BSTR bstr);
HRESULT _stdcall wiasWritePropLong(_In_ BYTE *pWiasContext, PROPID propid, LONG lVal);
HRESULT _stdcall wiasWritePropFloat(_In_ BYTE *pWiasContext, PROPID propid, float fVal);
HRESULT _stdcall wiasWritePropGuid(_In_ BYTE *pWiasContext, PROPID propid, GUID guidVal);
HRESULT _stdcall wiasSetItemPropNames(_In_ BYTE *pWiasContext, LONG cItemProps,
    _Inout_updates_(cItemProps) PROPID *ppId, _Inout_updates_(cItemProps) LPOLESTR *ppszNames);
HRESULT _stdcall wiasSetItemPropAttribs(_In_ BYTE *pWiasContext, LONG cPropSpec,
    _In_reads_(cPropSpec) PROPSPEC *pPropSpec, _In_reads_(cPropSpec) PWIA_PROPERTY_INFO pwpi);
HRESULT _stdcall wiasSendEndOfPage(_In_ BYTE *pWiasContext,
   LONG lPageCount, _Inout_ PMINIDRV_TRANSFER_CONTEXT pmdtc);
HRESULT _stdcall wiasGetItemType(_In_ BYTE *pWiasContext, _Out_ LONG *plType);
HRESULT _stdcall wiasGetDrvItem(_In_ BYTE *pWiasContext, _Out_ IWiaDrvItem **ppIWiaDrvItem);
HRESULT _stdcall wiasGetRootItem(_In_ BYTE *pWiasContext, _Out_ BYTE **ppWiasContext);
HRESULT _stdcall wiasSetValidFlag(_In_ BYTE* pWiasContext, PROPID propid, ULONG ulNom, ULONG ulValidBits);
HRESULT _stdcall wiasSetValidRangeLong(_In_ BYTE* pWiasContext, PROPID propid, LONG lMin, LONG lNom, LONG lMax, LONG lStep);
HRESULT _stdcall wiasSetValidRangeFloat(_In_ BYTE* pWiasContext, PROPID propid, FLOAT fMin, FLOAT fNom, FLOAT fMax, FLOAT fStep);
HRESULT _stdcall wiasSetValidListLong(_In_ BYTE *pWiasContext, PROPID propid, ULONG ulCount, LONG lNom, LONG *plValues);
HRESULT _stdcall wiasSetValidListFloat(_In_ BYTE *pWiasContext, PROPID propid, ULONG ulCount, FLOAT fNom, _In_reads_(ulCount) FLOAT *pfValues);
HRESULT _stdcall wiasSetValidListGuid(_In_ BYTE *pWiasContext, PROPID propid, ULONG ulCount, GUID guidNom, _In_reads_(ulCount) GUID *pguidValues);
HRESULT _stdcall wiasSetValidListStr(_In_ BYTE *pWiasContext, PROPID propid, ULONG ulCount, BSTR bstrNom, _In_reads_(ulCount) BSTR *bstrValues);
HRESULT _stdcall wiasFreePropContext(_Inout_ WIA_PROPERTY_CONTEXT *pContext);
HRESULT _stdcall wiasIsPropChanged(PROPID propid, _In_ WIA_PROPERTY_CONTEXT *pContext, _Out_ BOOL *pbChanged);
HRESULT _stdcall wiasSetPropChanged(PROPID propid, _In_ WIA_PROPERTY_CONTEXT *pContext, BOOL bChanged);
HRESULT _stdcall wiasGetChangedValueLong(_In_ BYTE *pWiasContext, _In_ WIA_PROPERTY_CONTEXT *pContext,
    BOOL bNoValidation, PROPID propID, _Out_ WIAS_CHANGED_VALUE_INFO *pInfo);
HRESULT _stdcall wiasGetChangedValueFloat(_In_ BYTE *pWiasContext, _In_ WIA_PROPERTY_CONTEXT *pContext,
    BOOL bNoValidation, PROPID propID, _Out_ WIAS_CHANGED_VALUE_INFO *pInfo);
HRESULT _stdcall wiasGetChangedValueGuid(_In_ BYTE *pWiasContext, _In_ WIA_PROPERTY_CONTEXT *pContext,
    BOOL bNoValidation, PROPID propID, _Out_ WIAS_CHANGED_VALUE_INFO *pInfo);
HRESULT _stdcall wiasGetChangedValueStr(_In_ BYTE *pWiasContext, _In_ WIA_PROPERTY_CONTEXT *pContext,
    BOOL bNoValidation, PROPID propID, _Out_ WIAS_CHANGED_VALUE_INFO *pInfo);
HRESULT _stdcall wiasGetContextFromName(_In_ BYTE *pWiasContext, LONG lFlags, _In_ BSTR bstrName, _Out_ BYTE **ppWiasContext);
HRESULT _stdcall wiasUpdateScanRect(_In_ BYTE *pWiasContext, _In_ WIA_PROPERTY_CONTEXT *pContext, LONG lWidth, LONG lHeight);
HRESULT _stdcall wiasUpdateValidFormat(_In_ BYTE *pWiasContext, _In_ WIA_PROPERTY_CONTEXT *pContext, _In_ IWiaMiniDrv *pIMiniDrv);
HRESULT _stdcall wiasGetChildrenContexts(_In_ BYTE *pParentContext, _Out_ ULONG *pulNumChildren,
    _Out_writes_(*pulNumChildren) BYTE ***pppChildren);
HRESULT _stdcall wiasQueueEvent(_In_ BSTR bstrDeviceId, _In_ const GUID *pEventGUID, _In_opt_ BSTR bstrFullItemName);
VOID __cdecl wiasDebugTrace(_In_ HINSTANCE hInstance, _In_ LPCSTR pszFormat, ... );
VOID __cdecl wiasDebugError(_In_ HINSTANCE hInstance, _In_ LPCSTR pszFormat, ... );
VOID __stdcall wiasPrintDebugHResult(_In_ HINSTANCE hInstance, HRESULT hr );
BSTR __cdecl wiasFormatArgs(_In_ LPCSTR lpszFormat, ...);
HRESULT _stdcall wiasCreateChildAppItem(_In_ BYTE *pParentWiasContext, LONG lFlags,
    _In_ BSTR bstrItemName, _In_ BSTR bstrFullItemName, _Out_ BYTE **ppWiasChildContext);
HRESULT _stdcall wiasCreateLogInstance(_In_ BYTE *pModuleHandle, _Out_ IWiaLogEx **ppIWiaLogEx);
HRESULT _stdcall wiasDownSampleBuffer(LONG lFlags, _Inout_ WIAS_DOWN_SAMPLE_INFO *pInfo);
HRESULT _stdcall wiasParseEndorserString(_In_ BYTE *pWiasContext, LONG lFlags,
   _Out_opt_ WIAS_ENDORSER_INFO *pInfo, _Out_ BSTR *pOutputString);
         { if ( pILog ) \
            pILog->Log(WIALOG_TRACE, ResID, Detail, wiasFormatArgs Args);\
         };
         {if ( pILog )\
            pILog->Log(WIALOG_ERROR, ResID, WIALOG_NO_LEVEL, wiasFormatArgs Args);\
         };
         {if ( pILog )\
            pILog->Log(WIALOG_WARNING, ResID, WIALOG_NO_LEVEL, wiasFormatArgs Args);\
         };
         {if ( pILog )\
            pILog->hResult(hr);\
         };
class CWiaLogProc {
private:
    CHAR m_szMessage[MAX_PATH];
    IWiaLog *m_pIWiaLog;
    INT m_DetailLevel;
    INT m_ResourceID;
public:
    inline CWiaLogProc(IWiaLog *pIWiaLog, INT ResourceID, INT DetailLevel, _In_z_ CHAR *pszMsg) {
        ZeroMemory(m_szMessage, sizeof(m_szMessage));
        StringCchCopyA(m_szMessage, ARRAYSIZE(m_szMessage), pszMsg);
        m_pIWiaLog = pIWiaLog;
        m_DetailLevel = DetailLevel;
        m_ResourceID = ResourceID;
        WIAS_LTRACE(pIWiaLog,
                    ResourceID,
                    DetailLevel,
                    ("%s, entering",m_szMessage));
    }
    inline ~CWiaLogProc() {
        WIAS_LTRACE(m_pIWiaLog,
                    m_ResourceID,
                    m_DetailLevel,
                    ("%s, leaving",m_szMessage));
    }
};
class CWiaLogProcEx {
private:
    CHAR m_szMessage[MAX_PATH];
    IWiaLogEx *m_pIWiaLog;
    INT m_DetailLevel;
    INT m_ResourceID;
public:
    inline CWiaLogProcEx(IWiaLogEx *pIWiaLog, INT ResourceID, INT DetailLevel, _In_z_ CHAR *pszMsg, LONG lMethodId = 0) {
        UNREFERENCED_PARAMETER(lMethodId);
        ZeroMemory(m_szMessage, sizeof(m_szMessage));
        StringCchCopyA(m_szMessage, ARRAYSIZE(m_szMessage), pszMsg);
        m_pIWiaLog = pIWiaLog;
        m_DetailLevel = DetailLevel;
        m_ResourceID = ResourceID;
        WIAS_LTRACE(pIWiaLog,
                    ResourceID,
                    DetailLevel,
                    ("%s, entering",m_szMessage));
    }
    inline ~CWiaLogProcEx() {
        WIAS_LTRACE(m_pIWiaLog,
                    m_ResourceID,
                    m_DetailLevel,
                    ("%s, leaving",m_szMessage));
    }
};
}
#endif
#pragma endregion
