#include <winapifamily.h>
#include <pshpack8.h>
#include <winerror.h>
#include <objbase.h>
#include <oleauto.h>
#include <coml2api.h>
#include <oleidl.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINOLEAPI CreateDataAdviseHolder(_Outptr_ LPDATAADVISEHOLDER FAR* ppDAHolder);
WINOLEAPI_(DWORD) OleBuildVersion( VOID );
_Check_return_ WINOLEAPI WriteFmtUserTypeStg (IN LPSTORAGE pstg, IN CLIPFORMAT cf, _In_z_ LPOLESTR lpszUserType);
WINOLEAPI ReadFmtUserTypeStg (IN LPSTORAGE pstg, OUT CLIPFORMAT FAR* pcf, _Outptr_opt_result_z_ LPOLESTR FAR* lplpszUserType);
_Check_return_ WINOLEAPI OleInitialize(IN LPVOID pvReserved);
WINOLEAPI_(void) OleUninitialize(void);
WINOLEAPI OleQueryLinkFromData(IN LPDATAOBJECT pSrcDataObject);
WINOLEAPI OleQueryCreateFromData(IN LPDATAOBJECT pSrcDataObject);
WINOLEAPI OleCreate(IN REFCLSID rclsid, IN REFIID riid, IN DWORD renderopt,
                IN LPFORMATETC pFormatEtc, IN LPOLECLIENTSITE pClientSite,
                IN LPSTORAGE pStg, OUT LPVOID FAR* ppvObj);
_Check_return_
WINOLEAPI OleCreateEx(IN REFCLSID rclsid, IN REFIID riid, IN DWORD dwFlags,
                IN DWORD renderopt, IN ULONG cFormats, IN DWORD* rgAdvf,
                IN LPFORMATETC rgFormatEtc, IN IAdviseSink FAR* lpAdviseSink,
                OUT DWORD FAR* rgdwConnection, IN LPOLECLIENTSITE pClientSite,
                IN LPSTORAGE pStg, OUT LPVOID FAR* ppvObj);
WINOLEAPI OleCreateFromData(IN LPDATAOBJECT pSrcDataObj, IN REFIID riid,
                IN DWORD renderopt, IN LPFORMATETC pFormatEtc,
                IN LPOLECLIENTSITE pClientSite, IN LPSTORAGE pStg,
                OUT LPVOID FAR* ppvObj);
_Check_return_
WINOLEAPI OleCreateFromDataEx(IN LPDATAOBJECT pSrcDataObj, IN REFIID riid,
                IN DWORD dwFlags, IN DWORD renderopt, IN ULONG cFormats, IN DWORD* rgAdvf,
                IN LPFORMATETC rgFormatEtc, IN IAdviseSink FAR* lpAdviseSink,
                OUT DWORD FAR* rgdwConnection, IN LPOLECLIENTSITE pClientSite,
                IN LPSTORAGE pStg, OUT LPVOID FAR* ppvObj);
WINOLEAPI OleCreateLinkFromData(IN LPDATAOBJECT pSrcDataObj, IN REFIID riid,
                IN DWORD renderopt, IN LPFORMATETC pFormatEtc,
                IN LPOLECLIENTSITE pClientSite, IN LPSTORAGE pStg,
                OUT LPVOID FAR* ppvObj);
_Check_return_
WINOLEAPI OleCreateLinkFromDataEx(IN LPDATAOBJECT pSrcDataObj, IN REFIID riid,
                IN DWORD dwFlags, IN DWORD renderopt, IN ULONG cFormats, IN DWORD* rgAdvf,
                IN LPFORMATETC rgFormatEtc, IN IAdviseSink FAR* lpAdviseSink,
                OUT IN DWORD FAR* rgdwConnection, IN LPOLECLIENTSITE pClientSite,
                IN LPSTORAGE pStg, OUT LPVOID FAR* ppvObj);
WINOLEAPI OleCreateStaticFromData(IN LPDATAOBJECT pSrcDataObj, IN REFIID iid,
                IN DWORD renderopt, IN LPFORMATETC pFormatEtc,
                IN LPOLECLIENTSITE pClientSite, IN LPSTORAGE pStg,
                OUT LPVOID FAR* ppvObj);
WINOLEAPI OleCreateLink(IN LPMONIKER pmkLinkSrc, IN REFIID riid,
            IN DWORD renderopt, IN LPFORMATETC lpFormatEtc,
            IN LPOLECLIENTSITE pClientSite, IN LPSTORAGE pStg, OUT LPVOID FAR* ppvObj);
WINOLEAPI OleCreateLinkEx(IN LPMONIKER pmkLinkSrc, IN REFIID riid,
            IN DWORD dwFlags, IN DWORD renderopt, IN ULONG cFormats, IN DWORD* rgAdvf,
            IN LPFORMATETC rgFormatEtc, IN IAdviseSink FAR* lpAdviseSink,
            OUT DWORD FAR* rgdwConnection, IN LPOLECLIENTSITE pClientSite,
            IN LPSTORAGE pStg, OUT LPVOID FAR* ppvObj);
WINOLEAPI OleCreateLinkToFile(IN LPCOLESTR lpszFileName, IN REFIID riid,
            IN DWORD renderopt, IN LPFORMATETC lpFormatEtc,
            IN LPOLECLIENTSITE pClientSite, IN LPSTORAGE pStg, OUT LPVOID FAR* ppvObj);
WINOLEAPI OleCreateLinkToFileEx(IN LPCOLESTR lpszFileName, IN REFIID riid,
            IN DWORD dwFlags, IN DWORD renderopt, IN ULONG cFormats, IN DWORD* rgAdvf,
            IN LPFORMATETC rgFormatEtc, IN IAdviseSink FAR* lpAdviseSink,
            OUT DWORD FAR* rgdwConnection, IN LPOLECLIENTSITE pClientSite,
            IN LPSTORAGE pStg, OUT LPVOID FAR* ppvObj);
WINOLEAPI OleCreateFromFile(IN REFCLSID rclsid, IN LPCOLESTR lpszFileName, IN REFIID riid,
            IN DWORD renderopt, IN LPFORMATETC lpFormatEtc,
            IN LPOLECLIENTSITE pClientSite, IN LPSTORAGE pStg, OUT LPVOID FAR* ppvObj);
_Check_return_
WINOLEAPI OleCreateFromFileEx(IN REFCLSID rclsid, IN LPCOLESTR lpszFileName, IN REFIID riid,
            IN DWORD dwFlags, IN DWORD renderopt, IN ULONG cFormats, IN DWORD* rgAdvf,
            IN LPFORMATETC rgFormatEtc, IN IAdviseSink FAR* lpAdviseSink,
            OUT DWORD FAR* rgdwConnection, IN LPOLECLIENTSITE pClientSite,
            IN LPSTORAGE pStg, OUT LPVOID FAR* ppvObj);
WINOLEAPI OleLoad(IN LPSTORAGE pStg, IN REFIID riid, IN LPOLECLIENTSITE pClientSite,
            OUT LPVOID FAR* ppvObj);
WINOLEAPI OleSave(_In_ LPPERSISTSTORAGE pPS, _In_ LPSTORAGE pStg, _In_ BOOL fSameAsLoad);
WINOLEAPI OleLoadFromStream( IN LPSTREAM pStm, IN REFIID iidInterface, OUT LPVOID FAR* ppvObj);
WINOLEAPI OleSaveToStream( IN LPPERSISTSTREAM pPStm, IN LPSTREAM pStm );
WINOLEAPI OleSetContainedObject(IN LPUNKNOWN pUnknown, IN BOOL fContained);
WINOLEAPI OleNoteObjectVisible(IN LPUNKNOWN pUnknown, IN BOOL fVisible);
WINOLEAPI RegisterDragDrop(IN HWND hwnd, IN LPDROPTARGET pDropTarget);
WINOLEAPI RevokeDragDrop(IN HWND hwnd);
WINOLEAPI DoDragDrop(IN LPDATAOBJECT pDataObj, IN LPDROPSOURCE pDropSource,
            IN DWORD dwOKEffects, OUT LPDWORD pdwEffect);
WINOLEAPI OleSetClipboard(IN LPDATAOBJECT pDataObj);
WINOLEAPI OleGetClipboard(_Outptr_ LPDATAOBJECT FAR* ppDataObj);
WINOLEAPI OleGetClipboardWithEnterpriseInfo(_Outptr_result_nullonfailure_ IDataObject** dataObject,
            _Outptr_result_nullonfailure_ PWSTR* dataEnterpriseId,
            _Outptr_result_nullonfailure_ PWSTR* sourceDescription,
            _Outptr_result_nullonfailure_ PWSTR* targetDescription,
            _Outptr_result_nullonfailure_ PWSTR* dataDescription);
WINOLEAPI OleFlushClipboard(void);
WINOLEAPI OleIsCurrentClipboard(IN LPDATAOBJECT pDataObj);
WINOLEAPI_(HOLEMENU) OleCreateMenuDescriptor (IN HMENU hmenuCombined,
                                IN LPOLEMENUGROUPWIDTHS lpMenuWidths);
WINOLEAPI OleSetMenuDescriptor (IN HOLEMENU holemenu, IN HWND hwndFrame,
                                IN HWND hwndActiveObject,
                                IN LPOLEINPLACEFRAME lpFrame,
                                IN LPOLEINPLACEACTIVEOBJECT lpActiveObj);
WINOLEAPI OleDestroyMenuDescriptor (IN HOLEMENU holemenu);
WINOLEAPI OleTranslateAccelerator (IN LPOLEINPLACEFRAME lpFrame,
                            IN LPOLEINPLACEFRAMEINFO lpFrameInfo, IN LPMSG lpmsg);
WINOLEAPI_(HANDLE) OleDuplicateData (IN HANDLE hSrc, IN CLIPFORMAT cfFormat,
                        IN UINT uiFlags);
WINOLEAPI OleDraw (IN LPUNKNOWN pUnknown, IN DWORD dwAspect, IN HDC hdcDraw,
                    IN LPCRECT lprcBounds);
_Check_return_ WINOLEAPI OleRun(IN LPUNKNOWN pUnknown);
WINOLEAPI_(BOOL) OleIsRunning(IN LPOLEOBJECT pObject);
WINOLEAPI OleLockRunning(IN LPUNKNOWN pUnknown, IN BOOL fLock, IN BOOL fLastUnlockCloses);
WINOLEAPI_(void) ReleaseStgMedium(IN LPSTGMEDIUM);
WINOLEAPI CreateOleAdviseHolder(_Out_ LPOLEADVISEHOLDER FAR* ppOAHolder);
WINOLEAPI OleCreateDefaultHandler(IN REFCLSID clsid, IN LPUNKNOWN pUnkOuter,
                    IN REFIID riid, OUT LPVOID FAR* lplpObj);
WINOLEAPI OleCreateEmbeddingHelper(IN REFCLSID clsid, IN LPUNKNOWN pUnkOuter,
                    IN DWORD flags, IN LPCLASSFACTORY pCF,
                    IN REFIID riid, OUT LPVOID FAR* lplpObj);
WINOLEAPI_(BOOL) IsAccelerator(IN HACCEL hAccel, IN int cAccelEntries, IN LPMSG lpMsg,
                                        OUT WORD FAR* lpwCmd);
WINOLEAPI_(HGLOBAL) OleGetIconOfFile(_In_ LPOLESTR lpszPath, IN BOOL fUseFileAsLabel);
WINOLEAPI_(HGLOBAL) OleGetIconOfClass(IN REFCLSID rclsid, _In_opt_ LPOLESTR lpszLabel,
                                        IN BOOL fUseTypeAsLabel);
WINOLEAPI_(HGLOBAL) OleMetafilePictFromIconAndLabel(IN HICON hIcon, _In_ LPOLESTR lpszLabel,
                                        _In_ LPOLESTR lpszSourceFile, IN UINT iIconIndex);
_Check_return_ WINOLEAPI OleRegGetUserType (IN REFCLSID clsid, IN DWORD dwFormOfType,
                                        _Outptr_ LPOLESTR FAR* pszUserType);
WINOLEAPI OleRegGetMiscStatus (IN REFCLSID clsid, IN DWORD dwAspect,
                                        OUT DWORD FAR* pdwStatus);
WINOLEAPI OleRegEnumFormatEtc(IN REFCLSID clsid, IN DWORD dwDirection,
                              _Outptr_ LPENUMFORMATETC FAR* ppenum);
WINOLEAPI OleRegEnumVerbs (IN REFCLSID clsid, _Outptr_ LPENUMOLEVERB FAR* ppenum);
typedef struct _OLESTREAM FAR* LPOLESTREAM;
typedef struct _OLESTREAMVTBL
{
    DWORD (CALLBACK* Get)(LPOLESTREAM, void FAR*, DWORD);
    DWORD (CALLBACK* Put)(LPOLESTREAM, const void FAR*, DWORD);
} OLESTREAMVTBL;
typedef OLESTREAMVTBL FAR* LPOLESTREAMVTBL;
typedef struct _OLESTREAM
{
    LPOLESTREAMVTBL lpstbl;
} OLESTREAM;
WINOLEAPI OleConvertOLESTREAMToIStorage
    (IN LPOLESTREAM lpolestream,
    OUT LPSTORAGE pstg,
    IN const DVTARGETDEVICE FAR* ptd);
WINOLEAPI OleConvertIStorageToOLESTREAM
    (IN LPSTORAGE pstg,
    OUT LPOLESTREAM lpolestream);
WINOLEAPI OleDoAutoConvert(IN LPSTORAGE pStg, OUT LPCLSID pClsidNew);
WINOLEAPI OleGetAutoConvert(IN REFCLSID clsidOld, OUT LPCLSID pClsidNew);
WINOLEAPI OleSetAutoConvert(IN REFCLSID clsidOld, IN REFCLSID clsidNew);
WINOLEAPI SetConvertStg(IN LPSTORAGE pStg, IN BOOL fConvert);
WINOLEAPI OleConvertIStorageToOLESTREAMEx
    (IN LPSTORAGE pstg,
     IN CLIPFORMAT cfFormat,
     IN LONG lWidth,
     IN LONG lHeight,
     IN DWORD dwSize,
     IN LPSTGMEDIUM pmedium,
     OUT LPOLESTREAM polestm);
WINOLEAPI OleConvertOLESTREAMToIStorageEx
    (IN LPOLESTREAM polestm,
     OUT LPSTORAGE pstg,
     OUT CLIPFORMAT FAR* pcfFormat,
     OUT LONG FAR* plwWidth,
     OUT LONG FAR* plHeight,
     OUT DWORD FAR* pdwSize,
     OUT LPSTGMEDIUM pmedium);
#endif
#pragma endregion
#include <poppack.h>
