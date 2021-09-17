typedef struct _reobject
{
 DWORD cbStruct;
 LONG cp;
 CLSID clsid;
 LPOLEOBJECT poleobj;
 LPSTORAGE pstg;
 LPOLECLIENTSITE polesite;
 SIZEL sizel;
 DWORD dvaspect;
 DWORD dwFlags;
 DWORD dwUser;
} REOBJECT;
DECLARE_INTERFACE_(IRichEditOle, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * lplpObj) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(GetClientSite) (THIS_ LPOLECLIENTSITE FAR * lplpolesite) PURE;
 STDMETHOD_(LONG,GetObjectCount) (THIS) PURE;
 STDMETHOD_(LONG,GetLinkCount) (THIS) PURE;
 STDMETHOD(GetObject) (THIS_ LONG iob, REOBJECT FAR * lpreobject,
        DWORD dwFlags) PURE;
    STDMETHOD(InsertObject) (THIS_ REOBJECT FAR * lpreobject) PURE;
 STDMETHOD(ConvertObject) (THIS_ LONG iob, REFCLSID rclsidNew,
         LPCSTR lpstrUserTypeNew) PURE;
 STDMETHOD(ActivateAs) (THIS_ REFCLSID rclsid, REFCLSID rclsidAs) PURE;
 STDMETHOD(SetHostNames) (THIS_ LPCSTR lpstrContainerApp,
        LPCSTR lpstrContainerObj) PURE;
 STDMETHOD(SetLinkAvailable) (THIS_ LONG iob, BOOL fAvailable) PURE;
 STDMETHOD(SetDvaspect) (THIS_ LONG iob, DWORD dvaspect) PURE;
 STDMETHOD(HandsOffStorage) (THIS_ LONG iob) PURE;
 STDMETHOD(SaveCompleted) (THIS_ LONG iob, LPSTORAGE lpstg) PURE;
 STDMETHOD(InPlaceDeactivate) (THIS) PURE;
 STDMETHOD(ContextSensitiveHelp) (THIS_ BOOL fEnterMode) PURE;
 STDMETHOD(GetClipboardData) (THIS_ CHARRANGE FAR * lpchrg, DWORD reco,
         LPDATAOBJECT FAR * lplpdataobj) PURE;
 STDMETHOD(ImportDataObject) (THIS_ LPDATAOBJECT lpdataobj,
         CLIPFORMAT cf, HGLOBAL hMetaPict) PURE;
};
typedef IRichEditOle FAR * LPRICHEDITOLE;
DECLARE_INTERFACE_(IRichEditOleCallback, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * lplpObj) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
 STDMETHOD(GetNewStorage) (THIS_ LPSTORAGE FAR * lplpstg) PURE;
    STDMETHOD(GetInPlaceContext) (THIS_ LPOLEINPLACEFRAME FAR * lplpFrame,
          LPOLEINPLACEUIWINDOW FAR * lplpDoc,
          LPOLEINPLACEFRAMEINFO lpFrameInfo) PURE;
 STDMETHOD(ShowContainerUI) (THIS_ BOOL fShow) PURE;
 STDMETHOD(QueryInsertObject) (THIS_ LPCLSID lpclsid, LPSTORAGE lpstg,
         LONG cp) PURE;
 STDMETHOD(DeleteObject) (THIS_ LPOLEOBJECT lpoleobj) PURE;
 STDMETHOD(QueryAcceptData) (THIS_ LPDATAOBJECT lpdataobj,
        CLIPFORMAT FAR * lpcfFormat, DWORD reco,
        BOOL fReally, HGLOBAL hMetaPict) PURE;
 STDMETHOD(ContextSensitiveHelp) (THIS_ BOOL fEnterMode) PURE;
 STDMETHOD(GetClipboardData) (THIS_ CHARRANGE FAR * lpchrg, DWORD reco,
         LPDATAOBJECT FAR * lplpdataobj) PURE;
 STDMETHOD(GetDragDropEffect) (THIS_ BOOL fDrag, DWORD grfKeyState,
         LPDWORD pdwEffect) PURE;
 STDMETHOD(GetContextMenu) (THIS_ WORD seltype, LPOLEOBJECT lpoleobj,
         CHARRANGE FAR * lpchrg,
         HMENU FAR * lphmenu) PURE;
};
typedef IRichEditOleCallback FAR * LPRICHEDITOLECALLBACK;
DEFINE_GUID(IID_IRichEditOle, 0x00020D00, 0, 0, 0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IRichEditOleCallback, 0x00020D03, 0, 0, 0xC0,0,0,0,0,0,0,0x46);
