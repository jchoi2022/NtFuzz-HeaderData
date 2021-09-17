#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IEnumConnections IEnumConnections;
typedef interface IConnectionPoint IConnectionPoint;
typedef interface IEnumConnectionPoints IEnumConnectionPoints;
typedef interface IConnectionPointContainer IConnectionPointContainer;
typedef interface IClassFactory2 IClassFactory2;
typedef interface IProvideClassInfo IProvideClassInfo;
typedef interface IProvideClassInfo2 IProvideClassInfo2;
typedef interface IProvideMultipleClassInfo IProvideMultipleClassInfo;
typedef interface IOleControl IOleControl;
typedef interface IOleControlSite IOleControlSite;
typedef interface IPropertyPage IPropertyPage;
typedef interface IPropertyPage2 IPropertyPage2;
typedef interface IPropertyPageSite IPropertyPageSite;
typedef interface IPropertyNotifySink IPropertyNotifySink;
typedef interface ISpecifyPropertyPages ISpecifyPropertyPages;
typedef interface IPersistMemory IPersistMemory;
typedef interface IPersistStreamInit IPersistStreamInit;
typedef interface IPersistPropertyBag IPersistPropertyBag;
typedef interface ISimpleFrameSite ISimpleFrameSite;
typedef interface IFont IFont;
typedef interface IPicture IPicture;
typedef interface IPicture2 IPicture2;
typedef interface IFontEventsDisp IFontEventsDisp;
typedef interface IFontDisp IFontDisp;
typedef interface IPictureDisp IPictureDisp;
typedef interface IOleInPlaceObjectWindowless IOleInPlaceObjectWindowless;
typedef interface IOleInPlaceSiteEx IOleInPlaceSiteEx;
typedef interface IOleInPlaceSiteWindowless IOleInPlaceSiteWindowless;
typedef interface IViewObjectEx IViewObjectEx;
typedef interface IOleUndoUnit IOleUndoUnit;
typedef interface IOleParentUndoUnit IOleParentUndoUnit;
typedef interface IEnumOleUndoUnits IEnumOleUndoUnits;
typedef interface IOleUndoManager IOleUndoManager;
typedef interface IPointerInactive IPointerInactive;
typedef interface IObjectWithSite IObjectWithSite;
typedef interface IPerPropertyBrowsing IPerPropertyBrowsing;
typedef interface IPropertyBag2 IPropertyBag2;
typedef interface IPersistPropertyBag2 IPersistPropertyBag2;
typedef interface IAdviseSinkEx IAdviseSinkEx;
typedef interface IQuickActivate IQuickActivate;
#include "oleidl.h"
#include "oaidl.h"
#include "servprov.h"
#include "urlmon.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0000_v0_0_s_ifspec;
typedef
enum tagUASFLAGS
    {
        UAS_NORMAL = 0,
        UAS_BLOCKED = 0x1,
        UAS_NOPARENTENABLE = 0x2,
        UAS_MASK = 0x3
    } UASFLAGS;
typedef
enum tagREADYSTATE
    {
        READYSTATE_UNINITIALIZED = 0,
        READYSTATE_LOADING = 1,
        READYSTATE_LOADED = 2,
        READYSTATE_INTERACTIVE = 3,
        READYSTATE_COMPLETE = 4
    } READYSTATE;
extern RPC_IF_HANDLE IOleControlTypes_v1_0_c_ifspec;
extern RPC_IF_HANDLE IOleControlTypes_v1_0_s_ifspec;
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0001_v0_0_s_ifspec;
typedef IEnumConnections *PENUMCONNECTIONS;
typedef IEnumConnections *LPENUMCONNECTIONS;
typedef struct tagCONNECTDATA
    {
    IUnknown *pUnk;
    DWORD dwCookie;
    } CONNECTDATA;
typedef struct tagCONNECTDATA *PCONNECTDATA;
typedef struct tagCONNECTDATA *LPCONNECTDATA;
EXTERN_C const IID IID_IEnumConnections;
    typedef struct IEnumConnectionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumConnections * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumConnections * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumConnections * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumConnections * This,
                       ULONG cConnections,
                                            LPCONNECTDATA rgcd,
                        ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumConnections * This,
                       ULONG cConnections);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumConnections * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumConnections * This,
                        __RPC__deref_out_opt IEnumConnections **ppEnum);
        END_INTERFACE
    } IEnumConnectionsVtbl;
    interface IEnumConnections
    {
        CONST_VTBL struct IEnumConnectionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cConnections,rgcd,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cConnections) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
                HRESULT STDMETHODCALLTYPE IEnumConnections_RemoteNext_Proxy(
    __RPC__in IEnumConnections * This,
               ULONG cConnections,
                                    __RPC__out_ecount_part(cConnections, *pcFetched) LPCONNECTDATA rgcd,
                __RPC__out ULONG *pcFetched);
void __RPC_STUB IEnumConnections_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef IConnectionPoint *PCONNECTIONPOINT;
typedef IConnectionPoint *LPCONNECTIONPOINT;
EXTERN_C const IID IID_IConnectionPoint;
    typedef struct IConnectionPointVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConnectionPoint * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConnectionPoint * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConnectionPoint * This);
        HRESULT ( STDMETHODCALLTYPE *GetConnectionInterface )(
            __RPC__in IConnectionPoint * This,
                        __RPC__out IID *pIID);
        HRESULT ( STDMETHODCALLTYPE *GetConnectionPointContainer )(
            __RPC__in IConnectionPoint * This,
                        __RPC__deref_out_opt IConnectionPointContainer **ppCPC);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            __RPC__in IConnectionPoint * This,
                       __RPC__in_opt IUnknown *pUnkSink,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            __RPC__in IConnectionPoint * This,
                       DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *EnumConnections )(
            __RPC__in IConnectionPoint * This,
                        __RPC__deref_out_opt IEnumConnections **ppEnum);
        END_INTERFACE
    } IConnectionPointVtbl;
    interface IConnectionPoint
    {
        CONST_VTBL struct IConnectionPointVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetConnectionInterface(This,pIID) )
    ( (This)->lpVtbl -> GetConnectionPointContainer(This,ppCPC) )
    ( (This)->lpVtbl -> Advise(This,pUnkSink,pdwCookie) )
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) )
    ( (This)->lpVtbl -> EnumConnections(This,ppEnum) )
typedef IEnumConnectionPoints *PENUMCONNECTIONPOINTS;
typedef IEnumConnectionPoints *LPENUMCONNECTIONPOINTS;
EXTERN_C const IID IID_IEnumConnectionPoints;
    typedef struct IEnumConnectionPointsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumConnectionPoints * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumConnectionPoints * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumConnectionPoints * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumConnectionPoints * This,
                       ULONG cConnections,
                                            LPCONNECTIONPOINT *ppCP,
                        ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumConnectionPoints * This,
                       ULONG cConnections);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumConnectionPoints * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumConnectionPoints * This,
                        __RPC__deref_out_opt IEnumConnectionPoints **ppEnum);
        END_INTERFACE
    } IEnumConnectionPointsVtbl;
    interface IEnumConnectionPoints
    {
        CONST_VTBL struct IEnumConnectionPointsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cConnections,ppCP,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cConnections) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
                HRESULT STDMETHODCALLTYPE IEnumConnectionPoints_RemoteNext_Proxy(
    __RPC__in IEnumConnectionPoints * This,
               ULONG cConnections,
                                    __RPC__out_ecount_part(cConnections, *pcFetched) LPCONNECTIONPOINT *ppCP,
                __RPC__out ULONG *pcFetched);
void __RPC_STUB IEnumConnectionPoints_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef IConnectionPointContainer *PCONNECTIONPOINTCONTAINER;
typedef IConnectionPointContainer *LPCONNECTIONPOINTCONTAINER;
EXTERN_C const IID IID_IConnectionPointContainer;
    typedef struct IConnectionPointContainerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConnectionPointContainer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConnectionPointContainer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConnectionPointContainer * This);
        HRESULT ( STDMETHODCALLTYPE *EnumConnectionPoints )(
            __RPC__in IConnectionPointContainer * This,
                        __RPC__deref_out_opt IEnumConnectionPoints **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *FindConnectionPoint )(
            __RPC__in IConnectionPointContainer * This,
                       __RPC__in REFIID riid,
                        __RPC__deref_out_opt IConnectionPoint **ppCP);
        END_INTERFACE
    } IConnectionPointContainerVtbl;
    interface IConnectionPointContainer
    {
        CONST_VTBL struct IConnectionPointContainerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumConnectionPoints(This,ppEnum) )
    ( (This)->lpVtbl -> FindConnectionPoint(This,riid,ppCP) )
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0005_v0_0_s_ifspec;
typedef IClassFactory2 *LPCLASSFACTORY2;
typedef struct tagLICINFO
    {
    LONG cbLicInfo;
    BOOL fRuntimeKeyAvail;
    BOOL fLicVerified;
    } LICINFO;
typedef struct tagLICINFO *LPLICINFO;
EXTERN_C const IID IID_IClassFactory2;
    typedef struct IClassFactory2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IClassFactory2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IClassFactory2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IClassFactory2 * This);
                      HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            IClassFactory2 * This,
            _In_opt_ IUnknown *pUnkOuter,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppvObject);
                      HRESULT ( STDMETHODCALLTYPE *LockServer )(
            IClassFactory2 * This,
                       BOOL fLock);
        HRESULT ( STDMETHODCALLTYPE *GetLicInfo )(
            __RPC__in IClassFactory2 * This,
                            __RPC__inout LICINFO *pLicInfo);
        HRESULT ( STDMETHODCALLTYPE *RequestLicKey )(
            __RPC__in IClassFactory2 * This,
                       DWORD dwReserved,
                        __RPC__deref_out_opt BSTR *pBstrKey);
                      HRESULT ( STDMETHODCALLTYPE *CreateInstanceLic )(
            IClassFactory2 * This,
            _In_opt_ IUnknown *pUnkOuter,
            _Reserved_ IUnknown *pUnkReserved,
            __RPC__in REFIID riid,
            __RPC__in BSTR bstrKey,
            __RPC__deref_out_opt PVOID *ppvObj);
        END_INTERFACE
    } IClassFactory2Vtbl;
    interface IClassFactory2
    {
        CONST_VTBL struct IClassFactory2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstance(This,pUnkOuter,riid,ppvObject) )
    ( (This)->lpVtbl -> LockServer(This,fLock) )
    ( (This)->lpVtbl -> GetLicInfo(This,pLicInfo) )
    ( (This)->lpVtbl -> RequestLicKey(This,dwReserved,pBstrKey) )
    ( (This)->lpVtbl -> CreateInstanceLic(This,pUnkOuter,pUnkReserved,riid,bstrKey,ppvObj) )
                HRESULT STDMETHODCALLTYPE IClassFactory2_RemoteCreateInstanceLic_Proxy(
    __RPC__in IClassFactory2 * This,
               __RPC__in REFIID riid,
               __RPC__in BSTR bstrKey,
                        __RPC__deref_out_opt IUnknown **ppvObj);
void __RPC_STUB IClassFactory2_RemoteCreateInstanceLic_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef IProvideClassInfo *LPPROVIDECLASSINFO;
EXTERN_C const IID IID_IProvideClassInfo;
    typedef struct IProvideClassInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProvideClassInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProvideClassInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProvideClassInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassInfo )(
            __RPC__in IProvideClassInfo * This,
                        __RPC__deref_out_opt ITypeInfo **ppTI);
        END_INTERFACE
    } IProvideClassInfoVtbl;
    interface IProvideClassInfo
    {
        CONST_VTBL struct IProvideClassInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassInfo(This,ppTI) )
typedef IProvideClassInfo2 *LPPROVIDECLASSINFO2;
typedef
enum tagGUIDKIND
    {
        GUIDKIND_DEFAULT_SOURCE_DISP_IID = 1
    } GUIDKIND;
EXTERN_C const IID IID_IProvideClassInfo2;
    typedef struct IProvideClassInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProvideClassInfo2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProvideClassInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProvideClassInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassInfo )(
            __RPC__in IProvideClassInfo2 * This,
                        __RPC__deref_out_opt ITypeInfo **ppTI);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            __RPC__in IProvideClassInfo2 * This,
                       DWORD dwGuidKind,
                        __RPC__out GUID *pGUID);
        END_INTERFACE
    } IProvideClassInfo2Vtbl;
    interface IProvideClassInfo2
    {
        CONST_VTBL struct IProvideClassInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassInfo(This,ppTI) )
    ( (This)->lpVtbl -> GetGUID(This,dwGuidKind,pGUID) )
typedef IProvideMultipleClassInfo *LPPROVIDEMULTIPLECLASSINFO;
EXTERN_C const IID IID_IProvideMultipleClassInfo;
    typedef struct IProvideMultipleClassInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProvideMultipleClassInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProvideMultipleClassInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProvideMultipleClassInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassInfo )(
            __RPC__in IProvideMultipleClassInfo * This,
                        __RPC__deref_out_opt ITypeInfo **ppTI);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            __RPC__in IProvideMultipleClassInfo * This,
                       DWORD dwGuidKind,
                        __RPC__out GUID *pGUID);
        HRESULT ( STDMETHODCALLTYPE *GetMultiTypeInfoCount )(
            __RPC__in IProvideMultipleClassInfo * This,
                        __RPC__out ULONG *pcti);
        HRESULT ( STDMETHODCALLTYPE *GetInfoOfIndex )(
            __RPC__in IProvideMultipleClassInfo * This,
                       ULONG iti,
                       DWORD dwFlags,
                        __RPC__deref_out_opt ITypeInfo **pptiCoClass,
                        __RPC__out DWORD *pdwTIFlags,
                        __RPC__out ULONG *pcdispidReserved,
                        __RPC__out IID *piidPrimary,
                        __RPC__out IID *piidSource);
        END_INTERFACE
    } IProvideMultipleClassInfoVtbl;
    interface IProvideMultipleClassInfo
    {
        CONST_VTBL struct IProvideMultipleClassInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassInfo(This,ppTI) )
    ( (This)->lpVtbl -> GetGUID(This,dwGuidKind,pGUID) )
    ( (This)->lpVtbl -> GetMultiTypeInfoCount(This,pcti) )
    ( (This)->lpVtbl -> GetInfoOfIndex(This,iti,dwFlags,pptiCoClass,pdwTIFlags,pcdispidReserved,piidPrimary,piidSource) )
typedef IOleControl *LPOLECONTROL;
typedef struct tagCONTROLINFO
    {
    ULONG cb;
    HACCEL hAccel;
    USHORT cAccel;
    DWORD dwFlags;
    } CONTROLINFO;
typedef struct tagCONTROLINFO *LPCONTROLINFO;
typedef
enum tagCTRLINFO
    {
        CTRLINFO_EATS_RETURN = 1,
        CTRLINFO_EATS_ESCAPE = 2
    } CTRLINFO;
EXTERN_C const IID IID_IOleControl;
    typedef struct IOleControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetControlInfo )(
            __RPC__in IOleControl * This,
                            __RPC__inout CONTROLINFO *pCI);
        HRESULT ( STDMETHODCALLTYPE *OnMnemonic )(
            __RPC__in IOleControl * This,
                       __RPC__in MSG *pMsg);
        HRESULT ( STDMETHODCALLTYPE *OnAmbientPropertyChange )(
            __RPC__in IOleControl * This,
                       DISPID dispID);
        HRESULT ( STDMETHODCALLTYPE *FreezeEvents )(
            __RPC__in IOleControl * This,
                       BOOL bFreeze);
        END_INTERFACE
    } IOleControlVtbl;
    interface IOleControl
    {
        CONST_VTBL struct IOleControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetControlInfo(This,pCI) )
    ( (This)->lpVtbl -> OnMnemonic(This,pMsg) )
    ( (This)->lpVtbl -> OnAmbientPropertyChange(This,dispID) )
    ( (This)->lpVtbl -> FreezeEvents(This,bFreeze) )
typedef IOleControlSite *LPOLECONTROLSITE;
typedef struct tagPOINTF
    {
    FLOAT x;
    FLOAT y;
    } POINTF;
typedef struct tagPOINTF *LPPOINTF;
typedef
enum tagXFORMCOORDS
    {
        XFORMCOORDS_POSITION = 0x1,
        XFORMCOORDS_SIZE = 0x2,
        XFORMCOORDS_HIMETRICTOCONTAINER = 0x4,
        XFORMCOORDS_CONTAINERTOHIMETRIC = 0x8,
        XFORMCOORDS_EVENTCOMPAT = 0x10
    } XFORMCOORDS;
EXTERN_C const IID IID_IOleControlSite;
    typedef struct IOleControlSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleControlSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleControlSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleControlSite * This);
        HRESULT ( STDMETHODCALLTYPE *OnControlInfoChanged )(
            __RPC__in IOleControlSite * This);
        HRESULT ( STDMETHODCALLTYPE *LockInPlaceActive )(
            __RPC__in IOleControlSite * This,
                       BOOL fLock);
        HRESULT ( STDMETHODCALLTYPE *GetExtendedControl )(
            __RPC__in IOleControlSite * This,
                        __RPC__deref_out_opt IDispatch **ppDisp);
        HRESULT ( STDMETHODCALLTYPE *TransformCoords )(
            __RPC__in IOleControlSite * This,
                            __RPC__inout POINTL *pPtlHimetric,
                            __RPC__inout POINTF *pPtfContainer,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )(
            __RPC__in IOleControlSite * This,
                       __RPC__in MSG *pMsg,
                       DWORD grfModifiers);
        HRESULT ( STDMETHODCALLTYPE *OnFocus )(
            __RPC__in IOleControlSite * This,
                       BOOL fGotFocus);
        HRESULT ( STDMETHODCALLTYPE *ShowPropertyFrame )(
            __RPC__in IOleControlSite * This);
        END_INTERFACE
    } IOleControlSiteVtbl;
    interface IOleControlSite
    {
        CONST_VTBL struct IOleControlSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnControlInfoChanged(This) )
    ( (This)->lpVtbl -> LockInPlaceActive(This,fLock) )
    ( (This)->lpVtbl -> GetExtendedControl(This,ppDisp) )
    ( (This)->lpVtbl -> TransformCoords(This,pPtlHimetric,pPtfContainer,dwFlags) )
    ( (This)->lpVtbl -> TranslateAccelerator(This,pMsg,grfModifiers) )
    ( (This)->lpVtbl -> OnFocus(This,fGotFocus) )
    ( (This)->lpVtbl -> ShowPropertyFrame(This) )
typedef IPropertyPage *LPPROPERTYPAGE;
typedef struct tagPROPPAGEINFO
    {
    ULONG cb;
    LPOLESTR pszTitle;
    SIZE size;
    LPOLESTR pszDocString;
    LPOLESTR pszHelpFile;
    DWORD dwHelpContext;
    } PROPPAGEINFO;
typedef struct tagPROPPAGEINFO *LPPROPPAGEINFO;
EXTERN_C const IID IID_IPropertyPage;
    typedef struct IPropertyPageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyPage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyPage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyPage * This);
        HRESULT ( STDMETHODCALLTYPE *SetPageSite )(
            __RPC__in IPropertyPage * This,
                       __RPC__in_opt IPropertyPageSite *pPageSite);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            __RPC__in IPropertyPage * This,
                       __RPC__in HWND hWndParent,
                       __RPC__in LPCRECT pRect,
                       BOOL bModal);
        HRESULT ( STDMETHODCALLTYPE *Deactivate )(
            __RPC__in IPropertyPage * This);
        HRESULT ( STDMETHODCALLTYPE *GetPageInfo )(
            __RPC__in IPropertyPage * This,
                        __RPC__out PROPPAGEINFO *pPageInfo);
        HRESULT ( STDMETHODCALLTYPE *SetObjects )(
            __RPC__in IPropertyPage * This,
                       ULONG cObjects,
                                __RPC__in_ecount_full(cObjects) IUnknown **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in IPropertyPage * This,
                       UINT nCmdShow);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IPropertyPage * This,
                       __RPC__in LPCRECT pRect);
        HRESULT ( STDMETHODCALLTYPE *IsPageDirty )(
            __RPC__in IPropertyPage * This);
        HRESULT ( STDMETHODCALLTYPE *Apply )(
            __RPC__in IPropertyPage * This);
        HRESULT ( STDMETHODCALLTYPE *Help )(
            __RPC__in IPropertyPage * This,
                       __RPC__in LPCOLESTR pszHelpDir);
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )(
            __RPC__in IPropertyPage * This,
                       __RPC__in MSG *pMsg);
        END_INTERFACE
    } IPropertyPageVtbl;
    interface IPropertyPage
    {
        CONST_VTBL struct IPropertyPageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPageSite(This,pPageSite) )
    ( (This)->lpVtbl -> Activate(This,hWndParent,pRect,bModal) )
    ( (This)->lpVtbl -> Deactivate(This) )
    ( (This)->lpVtbl -> GetPageInfo(This,pPageInfo) )
    ( (This)->lpVtbl -> SetObjects(This,cObjects,ppUnk) )
    ( (This)->lpVtbl -> Show(This,nCmdShow) )
    ( (This)->lpVtbl -> Move(This,pRect) )
    ( (This)->lpVtbl -> IsPageDirty(This) )
    ( (This)->lpVtbl -> Apply(This) )
    ( (This)->lpVtbl -> Help(This,pszHelpDir) )
    ( (This)->lpVtbl -> TranslateAccelerator(This,pMsg) )
typedef IPropertyPage2 *LPPROPERTYPAGE2;
EXTERN_C const IID IID_IPropertyPage2;
    typedef struct IPropertyPage2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyPage2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyPage2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyPage2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPageSite )(
            __RPC__in IPropertyPage2 * This,
                       __RPC__in_opt IPropertyPageSite *pPageSite);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            __RPC__in IPropertyPage2 * This,
                       __RPC__in HWND hWndParent,
                       __RPC__in LPCRECT pRect,
                       BOOL bModal);
        HRESULT ( STDMETHODCALLTYPE *Deactivate )(
            __RPC__in IPropertyPage2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPageInfo )(
            __RPC__in IPropertyPage2 * This,
                        __RPC__out PROPPAGEINFO *pPageInfo);
        HRESULT ( STDMETHODCALLTYPE *SetObjects )(
            __RPC__in IPropertyPage2 * This,
                       ULONG cObjects,
                                __RPC__in_ecount_full(cObjects) IUnknown **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in IPropertyPage2 * This,
                       UINT nCmdShow);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IPropertyPage2 * This,
                       __RPC__in LPCRECT pRect);
        HRESULT ( STDMETHODCALLTYPE *IsPageDirty )(
            __RPC__in IPropertyPage2 * This);
        HRESULT ( STDMETHODCALLTYPE *Apply )(
            __RPC__in IPropertyPage2 * This);
        HRESULT ( STDMETHODCALLTYPE *Help )(
            __RPC__in IPropertyPage2 * This,
                       __RPC__in LPCOLESTR pszHelpDir);
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )(
            __RPC__in IPropertyPage2 * This,
                       __RPC__in MSG *pMsg);
        HRESULT ( STDMETHODCALLTYPE *EditProperty )(
            __RPC__in IPropertyPage2 * This,
                       DISPID dispID);
        END_INTERFACE
    } IPropertyPage2Vtbl;
    interface IPropertyPage2
    {
        CONST_VTBL struct IPropertyPage2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPageSite(This,pPageSite) )
    ( (This)->lpVtbl -> Activate(This,hWndParent,pRect,bModal) )
    ( (This)->lpVtbl -> Deactivate(This) )
    ( (This)->lpVtbl -> GetPageInfo(This,pPageInfo) )
    ( (This)->lpVtbl -> SetObjects(This,cObjects,ppUnk) )
    ( (This)->lpVtbl -> Show(This,nCmdShow) )
    ( (This)->lpVtbl -> Move(This,pRect) )
    ( (This)->lpVtbl -> IsPageDirty(This) )
    ( (This)->lpVtbl -> Apply(This) )
    ( (This)->lpVtbl -> Help(This,pszHelpDir) )
    ( (This)->lpVtbl -> TranslateAccelerator(This,pMsg) )
    ( (This)->lpVtbl -> EditProperty(This,dispID) )
typedef IPropertyPageSite *LPPROPERTYPAGESITE;
typedef
enum tagPROPPAGESTATUS
    {
        PROPPAGESTATUS_DIRTY = 0x1,
        PROPPAGESTATUS_VALIDATE = 0x2,
        PROPPAGESTATUS_CLEAN = 0x4
    } PROPPAGESTATUS;
EXTERN_C const IID IID_IPropertyPageSite;
    typedef struct IPropertyPageSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyPageSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyPageSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyPageSite * This);
        HRESULT ( STDMETHODCALLTYPE *OnStatusChange )(
            __RPC__in IPropertyPageSite * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetLocaleID )(
            __RPC__in IPropertyPageSite * This,
                        __RPC__out LCID *pLocaleID);
        HRESULT ( STDMETHODCALLTYPE *GetPageContainer )(
            __RPC__in IPropertyPageSite * This,
                        __RPC__deref_out_opt IUnknown **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )(
            __RPC__in IPropertyPageSite * This,
                       __RPC__in MSG *pMsg);
        END_INTERFACE
    } IPropertyPageSiteVtbl;
    interface IPropertyPageSite
    {
        CONST_VTBL struct IPropertyPageSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStatusChange(This,dwFlags) )
    ( (This)->lpVtbl -> GetLocaleID(This,pLocaleID) )
    ( (This)->lpVtbl -> GetPageContainer(This,ppUnk) )
    ( (This)->lpVtbl -> TranslateAccelerator(This,pMsg) )
typedef IPropertyNotifySink *LPPROPERTYNOTIFYSINK;
EXTERN_C const IID IID_IPropertyNotifySink;
    typedef struct IPropertyNotifySinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyNotifySink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyNotifySink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyNotifySink * This);
        HRESULT ( STDMETHODCALLTYPE *OnChanged )(
            __RPC__in IPropertyNotifySink * This,
                       DISPID dispID);
        HRESULT ( STDMETHODCALLTYPE *OnRequestEdit )(
            __RPC__in IPropertyNotifySink * This,
                       DISPID dispID);
        END_INTERFACE
    } IPropertyNotifySinkVtbl;
    interface IPropertyNotifySink
    {
        CONST_VTBL struct IPropertyNotifySinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnChanged(This,dispID) )
    ( (This)->lpVtbl -> OnRequestEdit(This,dispID) )
typedef ISpecifyPropertyPages *LPSPECIFYPROPERTYPAGES;
typedef struct tagCAUUID
    {
    ULONG cElems;
                    GUID *pElems;
    } CAUUID;
typedef struct tagCAUUID *LPCAUUID;
EXTERN_C const IID IID_ISpecifyPropertyPages;
    typedef struct ISpecifyPropertyPagesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpecifyPropertyPages * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpecifyPropertyPages * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpecifyPropertyPages * This);
        HRESULT ( STDMETHODCALLTYPE *GetPages )(
            __RPC__in ISpecifyPropertyPages * This,
                        __RPC__out CAUUID *pPages);
        END_INTERFACE
    } ISpecifyPropertyPagesVtbl;
    interface ISpecifyPropertyPages
    {
        CONST_VTBL struct ISpecifyPropertyPagesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPages(This,pPages) )
typedef IPersistMemory *LPPERSISTMEMORY;
EXTERN_C const IID IID_IPersistMemory;
    typedef struct IPersistMemoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPersistMemory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPersistMemory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPersistMemory * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in IPersistMemory * This,
                        __RPC__out CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *IsDirty )(
            __RPC__in IPersistMemory * This);
                      HRESULT ( STDMETHODCALLTYPE *Load )(
            IPersistMemory * This,
                                LPVOID pMem,
                       ULONG cbSize);
                      HRESULT ( STDMETHODCALLTYPE *Save )(
            IPersistMemory * This,
                                 LPVOID pMem,
                       BOOL fClearDirty,
                       ULONG cbSize);
        HRESULT ( STDMETHODCALLTYPE *GetSizeMax )(
            __RPC__in IPersistMemory * This,
                        __RPC__out ULONG *pCbSize);
        HRESULT ( STDMETHODCALLTYPE *InitNew )(
            __RPC__in IPersistMemory * This);
        END_INTERFACE
    } IPersistMemoryVtbl;
    interface IPersistMemory
    {
        CONST_VTBL struct IPersistMemoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> IsDirty(This) )
    ( (This)->lpVtbl -> Load(This,pMem,cbSize) )
    ( (This)->lpVtbl -> Save(This,pMem,fClearDirty,cbSize) )
    ( (This)->lpVtbl -> GetSizeMax(This,pCbSize) )
    ( (This)->lpVtbl -> InitNew(This) )
                HRESULT STDMETHODCALLTYPE IPersistMemory_RemoteLoad_Proxy(
    __RPC__in IPersistMemory * This,
                        __RPC__in_ecount_full(cbSize) BYTE *pMem,
               ULONG cbSize);
void __RPC_STUB IPersistMemory_RemoteLoad_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IPersistMemory_RemoteSave_Proxy(
    __RPC__in IPersistMemory * This,
                         __RPC__out_ecount_full(cbSize) BYTE *pMem,
               BOOL fClearDirty,
               ULONG cbSize);
void __RPC_STUB IPersistMemory_RemoteSave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef IPersistStreamInit *LPPERSISTSTREAMINIT;
EXTERN_C const IID IID_IPersistStreamInit;
    typedef struct IPersistStreamInitVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPersistStreamInit * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPersistStreamInit * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPersistStreamInit * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in IPersistStreamInit * This,
                        __RPC__out CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *IsDirty )(
            __RPC__in IPersistStreamInit * This);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in IPersistStreamInit * This,
                       __RPC__in_opt LPSTREAM pStm);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IPersistStreamInit * This,
                       __RPC__in_opt LPSTREAM pStm,
                       BOOL fClearDirty);
        HRESULT ( STDMETHODCALLTYPE *GetSizeMax )(
            __RPC__in IPersistStreamInit * This,
                        __RPC__out ULARGE_INTEGER *pCbSize);
        HRESULT ( STDMETHODCALLTYPE *InitNew )(
            __RPC__in IPersistStreamInit * This);
        END_INTERFACE
    } IPersistStreamInitVtbl;
    interface IPersistStreamInit
    {
        CONST_VTBL struct IPersistStreamInitVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> IsDirty(This) )
    ( (This)->lpVtbl -> Load(This,pStm) )
    ( (This)->lpVtbl -> Save(This,pStm,fClearDirty) )
    ( (This)->lpVtbl -> GetSizeMax(This,pCbSize) )
    ( (This)->lpVtbl -> InitNew(This) )
typedef IPersistPropertyBag *LPPERSISTPROPERTYBAG;
EXTERN_C const IID IID_IPersistPropertyBag;
    typedef struct IPersistPropertyBagVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPersistPropertyBag * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPersistPropertyBag * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPersistPropertyBag * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in IPersistPropertyBag * This,
                        __RPC__out CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *InitNew )(
            __RPC__in IPersistPropertyBag * This);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in IPersistPropertyBag * This,
                       __RPC__in_opt IPropertyBag *pPropBag,
                               __RPC__in_opt IErrorLog *pErrorLog);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IPersistPropertyBag * This,
                       __RPC__in_opt IPropertyBag *pPropBag,
                       BOOL fClearDirty,
                       BOOL fSaveAllProperties);
        END_INTERFACE
    } IPersistPropertyBagVtbl;
    interface IPersistPropertyBag
    {
        CONST_VTBL struct IPersistPropertyBagVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> InitNew(This) )
    ( (This)->lpVtbl -> Load(This,pPropBag,pErrorLog) )
    ( (This)->lpVtbl -> Save(This,pPropBag,fClearDirty,fSaveAllProperties) )
typedef ISimpleFrameSite *LPSIMPLEFRAMESITE;
EXTERN_C const IID IID_ISimpleFrameSite;
    typedef struct ISimpleFrameSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISimpleFrameSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISimpleFrameSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISimpleFrameSite * This);
        HRESULT ( STDMETHODCALLTYPE *PreMessageFilter )(
            __RPC__in ISimpleFrameSite * This,
                       __RPC__in HWND hWnd,
                       UINT msg,
                       WPARAM wp,
                       LPARAM lp,
                        __RPC__out LRESULT *plResult,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *PostMessageFilter )(
            __RPC__in ISimpleFrameSite * This,
                       __RPC__in HWND hWnd,
                       UINT msg,
                       WPARAM wp,
                       LPARAM lp,
                        __RPC__out LRESULT *plResult,
                       DWORD dwCookie);
        END_INTERFACE
    } ISimpleFrameSiteVtbl;
    interface ISimpleFrameSite
    {
        CONST_VTBL struct ISimpleFrameSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PreMessageFilter(This,hWnd,msg,wp,lp,plResult,pdwCookie) )
    ( (This)->lpVtbl -> PostMessageFilter(This,hWnd,msg,wp,lp,plResult,dwCookie) )
typedef IFont *LPFONT;
typedef TEXTMETRICW TEXTMETRICOLE;
typedef TEXTMETRICOLE *LPTEXTMETRICOLE;
EXTERN_C const IID IID_IFont;
    typedef struct IFontVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFont * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFont * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFont * This);
        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFont * This,
                        __RPC__deref_out_opt BSTR *pName);
        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFont * This,
                       __RPC__in BSTR name);
        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in IFont * This,
                        __RPC__out CY *pSize);
        HRESULT ( STDMETHODCALLTYPE *put_Size )(
            __RPC__in IFont * This,
                       CY size);
        HRESULT ( STDMETHODCALLTYPE *get_Bold )(
            __RPC__in IFont * This,
                        __RPC__out BOOL *pBold);
        HRESULT ( STDMETHODCALLTYPE *put_Bold )(
            __RPC__in IFont * This,
                       BOOL bold);
        HRESULT ( STDMETHODCALLTYPE *get_Italic )(
            __RPC__in IFont * This,
                        __RPC__out BOOL *pItalic);
        HRESULT ( STDMETHODCALLTYPE *put_Italic )(
            __RPC__in IFont * This,
                       BOOL italic);
        HRESULT ( STDMETHODCALLTYPE *get_Underline )(
            __RPC__in IFont * This,
                        __RPC__out BOOL *pUnderline);
        HRESULT ( STDMETHODCALLTYPE *put_Underline )(
            __RPC__in IFont * This,
                       BOOL underline);
        HRESULT ( STDMETHODCALLTYPE *get_Strikethrough )(
            __RPC__in IFont * This,
                        __RPC__out BOOL *pStrikethrough);
        HRESULT ( STDMETHODCALLTYPE *put_Strikethrough )(
            __RPC__in IFont * This,
                       BOOL strikethrough);
        HRESULT ( STDMETHODCALLTYPE *get_Weight )(
            __RPC__in IFont * This,
                        __RPC__out SHORT *pWeight);
        HRESULT ( STDMETHODCALLTYPE *put_Weight )(
            __RPC__in IFont * This,
                       SHORT weight);
        HRESULT ( STDMETHODCALLTYPE *get_Charset )(
            __RPC__in IFont * This,
                        __RPC__out SHORT *pCharset);
        HRESULT ( STDMETHODCALLTYPE *put_Charset )(
            __RPC__in IFont * This,
                       SHORT charset);
        HRESULT ( STDMETHODCALLTYPE *get_hFont )(
            __RPC__in IFont * This,
                        __RPC__deref_out_opt HFONT *phFont);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IFont * This,
                        __RPC__deref_out_opt IFont **ppFont);
        HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            __RPC__in IFont * This,
                       __RPC__in_opt IFont *pFontOther);
        HRESULT ( STDMETHODCALLTYPE *SetRatio )(
            __RPC__in IFont * This,
                       LONG cyLogical,
                       LONG cyHimetric);
        HRESULT ( STDMETHODCALLTYPE *QueryTextMetrics )(
            __RPC__in IFont * This,
                        __RPC__out TEXTMETRICOLE *pTM);
        HRESULT ( STDMETHODCALLTYPE *AddRefHfont )(
            __RPC__in IFont * This,
                       __RPC__in HFONT hFont);
        HRESULT ( STDMETHODCALLTYPE *ReleaseHfont )(
            __RPC__in IFont * This,
                       __RPC__in HFONT hFont);
        HRESULT ( STDMETHODCALLTYPE *SetHdc )(
            __RPC__in IFont * This,
                       __RPC__in HDC hDC);
        END_INTERFACE
    } IFontVtbl;
    interface IFont
    {
        CONST_VTBL struct IFontVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Name(This,pName) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_Size(This,pSize) )
    ( (This)->lpVtbl -> put_Size(This,size) )
    ( (This)->lpVtbl -> get_Bold(This,pBold) )
    ( (This)->lpVtbl -> put_Bold(This,bold) )
    ( (This)->lpVtbl -> get_Italic(This,pItalic) )
    ( (This)->lpVtbl -> put_Italic(This,italic) )
    ( (This)->lpVtbl -> get_Underline(This,pUnderline) )
    ( (This)->lpVtbl -> put_Underline(This,underline) )
    ( (This)->lpVtbl -> get_Strikethrough(This,pStrikethrough) )
    ( (This)->lpVtbl -> put_Strikethrough(This,strikethrough) )
    ( (This)->lpVtbl -> get_Weight(This,pWeight) )
    ( (This)->lpVtbl -> put_Weight(This,weight) )
    ( (This)->lpVtbl -> get_Charset(This,pCharset) )
    ( (This)->lpVtbl -> put_Charset(This,charset) )
    ( (This)->lpVtbl -> get_hFont(This,phFont) )
    ( (This)->lpVtbl -> Clone(This,ppFont) )
    ( (This)->lpVtbl -> IsEqual(This,pFontOther) )
    ( (This)->lpVtbl -> SetRatio(This,cyLogical,cyHimetric) )
    ( (This)->lpVtbl -> QueryTextMetrics(This,pTM) )
    ( (This)->lpVtbl -> AddRefHfont(This,hFont) )
    ( (This)->lpVtbl -> ReleaseHfont(This,hFont) )
    ( (This)->lpVtbl -> SetHdc(This,hDC) )
typedef IPicture *LPPICTURE;
typedef
enum tagPictureAttributes
    {
        PICTURE_SCALABLE = 0x1,
        PICTURE_TRANSPARENT = 0x2
    } PICTUREATTRIBUTES;
typedef DECLSPEC_UUID("66504313-BE0F-101A-8BBB-00AA00300CAB") UINT OLE_HANDLE;
typedef DECLSPEC_UUID("66504306-BE0F-101A-8BBB-00AA00300CAB") LONG OLE_XPOS_HIMETRIC;
typedef DECLSPEC_UUID("66504307-BE0F-101A-8BBB-00AA00300CAB") LONG OLE_YPOS_HIMETRIC;
typedef DECLSPEC_UUID("66504308-BE0F-101A-8BBB-00AA00300CAB") LONG OLE_XSIZE_HIMETRIC;
typedef DECLSPEC_UUID("66504309-BE0F-101A-8BBB-00AA00300CAB") LONG OLE_YSIZE_HIMETRIC;
EXTERN_C const IID IID_IPicture;
    typedef struct IPictureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPicture * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPicture * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPicture * This);
        HRESULT ( STDMETHODCALLTYPE *get_Handle )(
            __RPC__in IPicture * This,
                        __RPC__out OLE_HANDLE *pHandle);
        HRESULT ( STDMETHODCALLTYPE *get_hPal )(
            __RPC__in IPicture * This,
                        __RPC__out OLE_HANDLE *phPal);
        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IPicture * This,
                        __RPC__out SHORT *pType);
        HRESULT ( STDMETHODCALLTYPE *get_Width )(
            __RPC__in IPicture * This,
                        __RPC__out OLE_XSIZE_HIMETRIC *pWidth);
        HRESULT ( STDMETHODCALLTYPE *get_Height )(
            __RPC__in IPicture * This,
                        __RPC__out OLE_YSIZE_HIMETRIC *pHeight);
        HRESULT ( STDMETHODCALLTYPE *Render )(
            __RPC__in IPicture * This,
                       __RPC__in HDC hDC,
                       LONG x,
                       LONG y,
                       LONG cx,
                       LONG cy,
                       OLE_XPOS_HIMETRIC xSrc,
                       OLE_YPOS_HIMETRIC ySrc,
                       OLE_XSIZE_HIMETRIC cxSrc,
                       OLE_YSIZE_HIMETRIC cySrc,
                       __RPC__in LPCRECT pRcWBounds);
        HRESULT ( STDMETHODCALLTYPE *set_hPal )(
            __RPC__in IPicture * This,
                       OLE_HANDLE hPal);
        HRESULT ( STDMETHODCALLTYPE *get_CurDC )(
            __RPC__in IPicture * This,
                        __RPC__deref_out_opt HDC *phDC);
        HRESULT ( STDMETHODCALLTYPE *SelectPicture )(
            __RPC__in IPicture * This,
                       __RPC__in HDC hDCIn,
                        __RPC__deref_out_opt HDC *phDCOut,
                        __RPC__out OLE_HANDLE *phBmpOut);
        HRESULT ( STDMETHODCALLTYPE *get_KeepOriginalFormat )(
            __RPC__in IPicture * This,
                        __RPC__out BOOL *pKeep);
        HRESULT ( STDMETHODCALLTYPE *put_KeepOriginalFormat )(
            __RPC__in IPicture * This,
                       BOOL keep);
        HRESULT ( STDMETHODCALLTYPE *PictureChanged )(
            __RPC__in IPicture * This);
        HRESULT ( STDMETHODCALLTYPE *SaveAsFile )(
            __RPC__in IPicture * This,
                       __RPC__in_opt LPSTREAM pStream,
                       BOOL fSaveMemCopy,
                        __RPC__out LONG *pCbSize);
        HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
            __RPC__in IPicture * This,
                        __RPC__out DWORD *pDwAttr);
        END_INTERFACE
    } IPictureVtbl;
    interface IPicture
    {
        CONST_VTBL struct IPictureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Handle(This,pHandle) )
    ( (This)->lpVtbl -> get_hPal(This,phPal) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Width(This,pWidth) )
    ( (This)->lpVtbl -> get_Height(This,pHeight) )
    ( (This)->lpVtbl -> Render(This,hDC,x,y,cx,cy,xSrc,ySrc,cxSrc,cySrc,pRcWBounds) )
    ( (This)->lpVtbl -> set_hPal(This,hPal) )
    ( (This)->lpVtbl -> get_CurDC(This,phDC) )
    ( (This)->lpVtbl -> SelectPicture(This,hDCIn,phDCOut,phBmpOut) )
    ( (This)->lpVtbl -> get_KeepOriginalFormat(This,pKeep) )
    ( (This)->lpVtbl -> put_KeepOriginalFormat(This,keep) )
    ( (This)->lpVtbl -> PictureChanged(This) )
    ( (This)->lpVtbl -> SaveAsFile(This,pStream,fSaveMemCopy,pCbSize) )
    ( (This)->lpVtbl -> get_Attributes(This,pDwAttr) )
typedef IPicture2 *LPPICTURE2;
typedef UINT_PTR HHANDLE;
EXTERN_C const IID IID_IPicture2;
    typedef struct IPicture2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPicture2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPicture2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPicture2 * This);
        HRESULT ( STDMETHODCALLTYPE *get_Handle )(
            __RPC__in IPicture2 * This,
                        __RPC__out HHANDLE *pHandle);
        HRESULT ( STDMETHODCALLTYPE *get_hPal )(
            __RPC__in IPicture2 * This,
                        __RPC__out HHANDLE *phPal);
        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IPicture2 * This,
                        __RPC__out SHORT *pType);
        HRESULT ( STDMETHODCALLTYPE *get_Width )(
            __RPC__in IPicture2 * This,
                        __RPC__out OLE_XSIZE_HIMETRIC *pWidth);
        HRESULT ( STDMETHODCALLTYPE *get_Height )(
            __RPC__in IPicture2 * This,
                        __RPC__out OLE_YSIZE_HIMETRIC *pHeight);
        HRESULT ( STDMETHODCALLTYPE *Render )(
            __RPC__in IPicture2 * This,
                       __RPC__in HDC hDC,
                       LONG x,
                       LONG y,
                       LONG cx,
                       LONG cy,
                       OLE_XPOS_HIMETRIC xSrc,
                       OLE_YPOS_HIMETRIC ySrc,
                       OLE_XSIZE_HIMETRIC cxSrc,
                       OLE_YSIZE_HIMETRIC cySrc,
                       __RPC__in LPCRECT pRcWBounds);
        HRESULT ( STDMETHODCALLTYPE *set_hPal )(
            __RPC__in IPicture2 * This,
                       HHANDLE hPal);
        HRESULT ( STDMETHODCALLTYPE *get_CurDC )(
            __RPC__in IPicture2 * This,
                        __RPC__deref_out_opt HDC *phDC);
        HRESULT ( STDMETHODCALLTYPE *SelectPicture )(
            __RPC__in IPicture2 * This,
                       __RPC__in HDC hDCIn,
                        __RPC__deref_out_opt HDC *phDCOut,
                        __RPC__out HHANDLE *phBmpOut);
        HRESULT ( STDMETHODCALLTYPE *get_KeepOriginalFormat )(
            __RPC__in IPicture2 * This,
                        __RPC__out BOOL *pKeep);
        HRESULT ( STDMETHODCALLTYPE *put_KeepOriginalFormat )(
            __RPC__in IPicture2 * This,
                       BOOL keep);
        HRESULT ( STDMETHODCALLTYPE *PictureChanged )(
            __RPC__in IPicture2 * This);
        HRESULT ( STDMETHODCALLTYPE *SaveAsFile )(
            __RPC__in IPicture2 * This,
                       __RPC__in_opt LPSTREAM pStream,
                       BOOL fSaveMemCopy,
                        __RPC__out LONG *pCbSize);
        HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
            __RPC__in IPicture2 * This,
                        __RPC__out DWORD *pDwAttr);
        END_INTERFACE
    } IPicture2Vtbl;
    interface IPicture2
    {
        CONST_VTBL struct IPicture2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Handle(This,pHandle) )
    ( (This)->lpVtbl -> get_hPal(This,phPal) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Width(This,pWidth) )
    ( (This)->lpVtbl -> get_Height(This,pHeight) )
    ( (This)->lpVtbl -> Render(This,hDC,x,y,cx,cy,xSrc,ySrc,cxSrc,cySrc,pRcWBounds) )
    ( (This)->lpVtbl -> set_hPal(This,hPal) )
    ( (This)->lpVtbl -> get_CurDC(This,phDC) )
    ( (This)->lpVtbl -> SelectPicture(This,hDCIn,phDCOut,phBmpOut) )
    ( (This)->lpVtbl -> get_KeepOriginalFormat(This,pKeep) )
    ( (This)->lpVtbl -> put_KeepOriginalFormat(This,keep) )
    ( (This)->lpVtbl -> PictureChanged(This) )
    ( (This)->lpVtbl -> SaveAsFile(This,pStream,fSaveMemCopy,pCbSize) )
    ( (This)->lpVtbl -> get_Attributes(This,pDwAttr) )
typedef IFontEventsDisp *LPFONTEVENTS;
EXTERN_C const IID IID_IFontEventsDisp;
    typedef struct IFontEventsDispVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFontEventsDisp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFontEventsDisp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFontEventsDisp * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFontEventsDisp * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFontEventsDisp * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFontEventsDisp * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFontEventsDisp * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IFontEventsDispVtbl;
    interface IFontEventsDisp
    {
        CONST_VTBL struct IFontEventsDispVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
typedef IFontDisp *LPFONTDISP;
EXTERN_C const IID IID_IFontDisp;
    typedef struct IFontDispVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFontDisp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFontDisp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFontDisp * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFontDisp * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFontDisp * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFontDisp * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFontDisp * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IFontDispVtbl;
    interface IFontDisp
    {
        CONST_VTBL struct IFontDispVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
typedef IPictureDisp *LPPICTUREDISP;
EXTERN_C const IID IID_IPictureDisp;
    typedef struct IPictureDispVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPictureDisp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPictureDisp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPictureDisp * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPictureDisp * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPictureDisp * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPictureDisp * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPictureDisp * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IPictureDispVtbl;
    interface IPictureDisp
    {
        CONST_VTBL struct IPictureDispVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
typedef IOleInPlaceObjectWindowless *LPOLEINPLACEOBJECTWINDOWLESS;
EXTERN_C const IID IID_IOleInPlaceObjectWindowless;
    typedef struct IOleInPlaceObjectWindowlessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleInPlaceObjectWindowless * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleInPlaceObjectWindowless * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleInPlaceObjectWindowless * This);
                           HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            __RPC__in IOleInPlaceObjectWindowless * This,
                        __RPC__deref_out_opt HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )(
            __RPC__in IOleInPlaceObjectWindowless * This,
                       BOOL fEnterMode);
        HRESULT ( STDMETHODCALLTYPE *InPlaceDeactivate )(
            __RPC__in IOleInPlaceObjectWindowless * This);
        HRESULT ( STDMETHODCALLTYPE *UIDeactivate )(
            __RPC__in IOleInPlaceObjectWindowless * This);
                           HRESULT ( STDMETHODCALLTYPE *SetObjectRects )(
            __RPC__in IOleInPlaceObjectWindowless * This,
                       __RPC__in LPCRECT lprcPosRect,
                       __RPC__in LPCRECT lprcClipRect);
        HRESULT ( STDMETHODCALLTYPE *ReactivateAndUndo )(
            __RPC__in IOleInPlaceObjectWindowless * This);
        HRESULT ( STDMETHODCALLTYPE *OnWindowMessage )(
            __RPC__in IOleInPlaceObjectWindowless * This,
                       UINT msg,
                       WPARAM wParam,
                       LPARAM lParam,
                        __RPC__out LRESULT *plResult);
        HRESULT ( STDMETHODCALLTYPE *GetDropTarget )(
            __RPC__in IOleInPlaceObjectWindowless * This,
                        __RPC__deref_out_opt IDropTarget **ppDropTarget);
        END_INTERFACE
    } IOleInPlaceObjectWindowlessVtbl;
    interface IOleInPlaceObjectWindowless
    {
        CONST_VTBL struct IOleInPlaceObjectWindowlessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
    ( (This)->lpVtbl -> InPlaceDeactivate(This) )
    ( (This)->lpVtbl -> UIDeactivate(This) )
    ( (This)->lpVtbl -> SetObjectRects(This,lprcPosRect,lprcClipRect) )
    ( (This)->lpVtbl -> ReactivateAndUndo(This) )
    ( (This)->lpVtbl -> OnWindowMessage(This,msg,wParam,lParam,plResult) )
    ( (This)->lpVtbl -> GetDropTarget(This,ppDropTarget) )
typedef IOleInPlaceSiteEx *LPOLEINPLACESITEEX;
typedef
enum tagACTIVATEFLAGS
    {
        ACTIVATE_WINDOWLESS = 1
    } ACTIVATEFLAGS;
EXTERN_C const IID IID_IOleInPlaceSiteEx;
    typedef struct IOleInPlaceSiteExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleInPlaceSiteEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleInPlaceSiteEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleInPlaceSiteEx * This);
                           HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            __RPC__in IOleInPlaceSiteEx * This,
                        __RPC__deref_out_opt HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )(
            __RPC__in IOleInPlaceSiteEx * This,
                       BOOL fEnterMode);
        HRESULT ( STDMETHODCALLTYPE *CanInPlaceActivate )(
            __RPC__in IOleInPlaceSiteEx * This);
        HRESULT ( STDMETHODCALLTYPE *OnInPlaceActivate )(
            __RPC__in IOleInPlaceSiteEx * This);
        HRESULT ( STDMETHODCALLTYPE *OnUIActivate )(
            __RPC__in IOleInPlaceSiteEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetWindowContext )(
            __RPC__in IOleInPlaceSiteEx * This,
                        __RPC__deref_out_opt IOleInPlaceFrame **ppFrame,
                        __RPC__deref_out_opt IOleInPlaceUIWindow **ppDoc,
                        __RPC__out LPRECT lprcPosRect,
                        __RPC__out LPRECT lprcClipRect,
                            __RPC__inout LPOLEINPLACEFRAMEINFO lpFrameInfo);
        HRESULT ( STDMETHODCALLTYPE *Scroll )(
            __RPC__in IOleInPlaceSiteEx * This,
                       SIZE scrollExtant);
        HRESULT ( STDMETHODCALLTYPE *OnUIDeactivate )(
            __RPC__in IOleInPlaceSiteEx * This,
                       BOOL fUndoable);
        HRESULT ( STDMETHODCALLTYPE *OnInPlaceDeactivate )(
            __RPC__in IOleInPlaceSiteEx * This);
        HRESULT ( STDMETHODCALLTYPE *DiscardUndoState )(
            __RPC__in IOleInPlaceSiteEx * This);
        HRESULT ( STDMETHODCALLTYPE *DeactivateAndUndo )(
            __RPC__in IOleInPlaceSiteEx * This);
        HRESULT ( STDMETHODCALLTYPE *OnPosRectChange )(
            __RPC__in IOleInPlaceSiteEx * This,
                       __RPC__in LPCRECT lprcPosRect);
        HRESULT ( STDMETHODCALLTYPE *OnInPlaceActivateEx )(
            __RPC__in IOleInPlaceSiteEx * This,
                        __RPC__out BOOL *pfNoRedraw,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *OnInPlaceDeactivateEx )(
            __RPC__in IOleInPlaceSiteEx * This,
                       BOOL fNoRedraw);
        HRESULT ( STDMETHODCALLTYPE *RequestUIActivate )(
            __RPC__in IOleInPlaceSiteEx * This);
        END_INTERFACE
    } IOleInPlaceSiteExVtbl;
    interface IOleInPlaceSiteEx
    {
        CONST_VTBL struct IOleInPlaceSiteExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
    ( (This)->lpVtbl -> CanInPlaceActivate(This) )
    ( (This)->lpVtbl -> OnInPlaceActivate(This) )
    ( (This)->lpVtbl -> OnUIActivate(This) )
    ( (This)->lpVtbl -> GetWindowContext(This,ppFrame,ppDoc,lprcPosRect,lprcClipRect,lpFrameInfo) )
    ( (This)->lpVtbl -> Scroll(This,scrollExtant) )
    ( (This)->lpVtbl -> OnUIDeactivate(This,fUndoable) )
    ( (This)->lpVtbl -> OnInPlaceDeactivate(This) )
    ( (This)->lpVtbl -> DiscardUndoState(This) )
    ( (This)->lpVtbl -> DeactivateAndUndo(This) )
    ( (This)->lpVtbl -> OnPosRectChange(This,lprcPosRect) )
    ( (This)->lpVtbl -> OnInPlaceActivateEx(This,pfNoRedraw,dwFlags) )
    ( (This)->lpVtbl -> OnInPlaceDeactivateEx(This,fNoRedraw) )
    ( (This)->lpVtbl -> RequestUIActivate(This) )
typedef IOleInPlaceSiteWindowless *LPOLEINPLACESITEWINDOWLESS;
typedef
enum tagOLEDCFLAGS
    {
        OLEDC_NODRAW = 0x1,
        OLEDC_PAINTBKGND = 0x2,
        OLEDC_OFFSCREEN = 0x4
    } OLEDCFLAGS;
EXTERN_C const IID IID_IOleInPlaceSiteWindowless;
    typedef struct IOleInPlaceSiteWindowlessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleInPlaceSiteWindowless * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleInPlaceSiteWindowless * This);
                           HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                        __RPC__deref_out_opt HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                       BOOL fEnterMode);
        HRESULT ( STDMETHODCALLTYPE *CanInPlaceActivate )(
            __RPC__in IOleInPlaceSiteWindowless * This);
        HRESULT ( STDMETHODCALLTYPE *OnInPlaceActivate )(
            __RPC__in IOleInPlaceSiteWindowless * This);
        HRESULT ( STDMETHODCALLTYPE *OnUIActivate )(
            __RPC__in IOleInPlaceSiteWindowless * This);
        HRESULT ( STDMETHODCALLTYPE *GetWindowContext )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                        __RPC__deref_out_opt IOleInPlaceFrame **ppFrame,
                        __RPC__deref_out_opt IOleInPlaceUIWindow **ppDoc,
                        __RPC__out LPRECT lprcPosRect,
                        __RPC__out LPRECT lprcClipRect,
                            __RPC__inout LPOLEINPLACEFRAMEINFO lpFrameInfo);
        HRESULT ( STDMETHODCALLTYPE *Scroll )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                       SIZE scrollExtant);
        HRESULT ( STDMETHODCALLTYPE *OnUIDeactivate )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                       BOOL fUndoable);
        HRESULT ( STDMETHODCALLTYPE *OnInPlaceDeactivate )(
            __RPC__in IOleInPlaceSiteWindowless * This);
        HRESULT ( STDMETHODCALLTYPE *DiscardUndoState )(
            __RPC__in IOleInPlaceSiteWindowless * This);
        HRESULT ( STDMETHODCALLTYPE *DeactivateAndUndo )(
            __RPC__in IOleInPlaceSiteWindowless * This);
        HRESULT ( STDMETHODCALLTYPE *OnPosRectChange )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                       __RPC__in LPCRECT lprcPosRect);
        HRESULT ( STDMETHODCALLTYPE *OnInPlaceActivateEx )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                        __RPC__out BOOL *pfNoRedraw,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *OnInPlaceDeactivateEx )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                       BOOL fNoRedraw);
        HRESULT ( STDMETHODCALLTYPE *RequestUIActivate )(
            __RPC__in IOleInPlaceSiteWindowless * This);
        HRESULT ( STDMETHODCALLTYPE *CanWindowlessActivate )(
            __RPC__in IOleInPlaceSiteWindowless * This);
        HRESULT ( STDMETHODCALLTYPE *GetCapture )(
            __RPC__in IOleInPlaceSiteWindowless * This);
        HRESULT ( STDMETHODCALLTYPE *SetCapture )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                       BOOL fCapture);
        HRESULT ( STDMETHODCALLTYPE *GetFocus )(
            __RPC__in IOleInPlaceSiteWindowless * This);
        HRESULT ( STDMETHODCALLTYPE *SetFocus )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                       BOOL fFocus);
        HRESULT ( STDMETHODCALLTYPE *GetDC )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                               __RPC__in_opt LPCRECT pRect,
                       DWORD grfFlags,
                        __RPC__deref_out_opt HDC *phDC);
        HRESULT ( STDMETHODCALLTYPE *ReleaseDC )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                       __RPC__in HDC hDC);
        HRESULT ( STDMETHODCALLTYPE *InvalidateRect )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                               __RPC__in_opt LPCRECT pRect,
                       BOOL fErase);
        HRESULT ( STDMETHODCALLTYPE *InvalidateRgn )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                       __RPC__in HRGN hRGN,
                       BOOL fErase);
        HRESULT ( STDMETHODCALLTYPE *ScrollRect )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                       INT dx,
                       INT dy,
                       __RPC__in LPCRECT pRectScroll,
                       __RPC__in LPCRECT pRectClip);
        HRESULT ( STDMETHODCALLTYPE *AdjustRect )(
            __RPC__in IOleInPlaceSiteWindowless * This,
                            __RPC__inout LPRECT prc);
        HRESULT ( STDMETHODCALLTYPE *OnDefWindowMessage )(
            __RPC__in IOleInPlaceSiteWindowless * This,
            _In_ UINT msg,
            _In_ WPARAM wParam,
            _In_ LPARAM lParam,
                        __RPC__out LRESULT *plResult);
        END_INTERFACE
    } IOleInPlaceSiteWindowlessVtbl;
    interface IOleInPlaceSiteWindowless
    {
        CONST_VTBL struct IOleInPlaceSiteWindowlessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
    ( (This)->lpVtbl -> CanInPlaceActivate(This) )
    ( (This)->lpVtbl -> OnInPlaceActivate(This) )
    ( (This)->lpVtbl -> OnUIActivate(This) )
    ( (This)->lpVtbl -> GetWindowContext(This,ppFrame,ppDoc,lprcPosRect,lprcClipRect,lpFrameInfo) )
    ( (This)->lpVtbl -> Scroll(This,scrollExtant) )
    ( (This)->lpVtbl -> OnUIDeactivate(This,fUndoable) )
    ( (This)->lpVtbl -> OnInPlaceDeactivate(This) )
    ( (This)->lpVtbl -> DiscardUndoState(This) )
    ( (This)->lpVtbl -> DeactivateAndUndo(This) )
    ( (This)->lpVtbl -> OnPosRectChange(This,lprcPosRect) )
    ( (This)->lpVtbl -> OnInPlaceActivateEx(This,pfNoRedraw,dwFlags) )
    ( (This)->lpVtbl -> OnInPlaceDeactivateEx(This,fNoRedraw) )
    ( (This)->lpVtbl -> RequestUIActivate(This) )
    ( (This)->lpVtbl -> CanWindowlessActivate(This) )
    ( (This)->lpVtbl -> GetCapture(This) )
    ( (This)->lpVtbl -> SetCapture(This,fCapture) )
    ( (This)->lpVtbl -> GetFocus(This) )
    ( (This)->lpVtbl -> SetFocus(This,fFocus) )
    ( (This)->lpVtbl -> GetDC(This,pRect,grfFlags,phDC) )
    ( (This)->lpVtbl -> ReleaseDC(This,hDC) )
    ( (This)->lpVtbl -> InvalidateRect(This,pRect,fErase) )
    ( (This)->lpVtbl -> InvalidateRgn(This,hRGN,fErase) )
    ( (This)->lpVtbl -> ScrollRect(This,dx,dy,pRectScroll,pRectClip) )
    ( (This)->lpVtbl -> AdjustRect(This,prc) )
    ( (This)->lpVtbl -> OnDefWindowMessage(This,msg,wParam,lParam,plResult) )
typedef IViewObjectEx *LPVIEWOBJECTEX;
typedef
enum tagVIEWSTATUS
    {
        VIEWSTATUS_OPAQUE = 1,
        VIEWSTATUS_SOLIDBKGND = 2,
        VIEWSTATUS_DVASPECTOPAQUE = 4,
        VIEWSTATUS_DVASPECTTRANSPARENT = 8,
        VIEWSTATUS_SURFACE = 16,
        VIEWSTATUS_3DSURFACE = 32
    } VIEWSTATUS;
typedef
enum tagHITRESULT
    {
        HITRESULT_OUTSIDE = 0,
        HITRESULT_TRANSPARENT = 1,
        HITRESULT_CLOSE = 2,
        HITRESULT_HIT = 3
    } HITRESULT;
typedef
enum tagDVASPECT2
    {
        DVASPECT_OPAQUE = 16,
        DVASPECT_TRANSPARENT = 32
    } DVASPECT2;
typedef struct tagExtentInfo
    {
    ULONG cb;
    DWORD dwExtentMode;
    SIZEL sizelProposed;
    } DVEXTENTINFO;
typedef
enum tagExtentMode
    {
        DVEXTENT_CONTENT = 0,
        DVEXTENT_INTEGRAL = ( DVEXTENT_CONTENT + 1 )
    } DVEXTENTMODE;
typedef
enum tagAspectInfoFlag
    {
        DVASPECTINFOFLAG_CANOPTIMIZE = 1
    } DVASPECTINFOFLAG;
typedef struct tagAspectInfo
    {
    ULONG cb;
    DWORD dwFlags;
    } DVASPECTINFO;
EXTERN_C const IID IID_IViewObjectEx;
    typedef struct IViewObjectExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IViewObjectEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IViewObjectEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IViewObjectEx * This);
                      HRESULT ( STDMETHODCALLTYPE *Draw )(
            IViewObjectEx * This,
            _In_ DWORD dwDrawAspect,
            _In_ LONG lindex,
            _Null_ void *pvAspect,
            _In_opt_ DVTARGETDEVICE *ptd,
            _In_opt_ HDC hdcTargetDev,
            _In_ HDC hdcDraw,
            _In_opt_ LPCRECTL lprcBounds,
            _In_opt_ LPCRECTL lprcWBounds,
            _In_opt_ BOOL ( STDMETHODCALLTYPE *pfnContinue )(
                ULONG_PTR dwContinue),
            _In_ ULONG_PTR dwContinue);
                      HRESULT ( STDMETHODCALLTYPE *GetColorSet )(
            IViewObjectEx * This,
            _In_ DWORD dwDrawAspect,
            _In_ LONG lindex,
            _Null_ void *pvAspect,
            _In_opt_ DVTARGETDEVICE *ptd,
            _In_opt_ HDC hicTargetDev,
            _Outptr_ LOGPALETTE **ppColorSet);
                      HRESULT ( STDMETHODCALLTYPE *Freeze )(
            IViewObjectEx * This,
            _In_ DWORD dwDrawAspect,
            _In_ LONG lindex,
            _Null_ void *pvAspect,
            _Out_ DWORD *pdwFreeze);
        HRESULT ( STDMETHODCALLTYPE *Unfreeze )(
            __RPC__in IViewObjectEx * This,
                       DWORD dwFreeze);
        HRESULT ( STDMETHODCALLTYPE *SetAdvise )(
            __RPC__in IViewObjectEx * This,
                       DWORD aspects,
                       DWORD advf,
                               __RPC__in_opt IAdviseSink *pAdvSink);
                      HRESULT ( STDMETHODCALLTYPE *GetAdvise )(
            IViewObjectEx * This,
            _Out_opt_ DWORD *pAspects,
            _Out_opt_ DWORD *pAdvf,
            _Outptr_ IAdviseSink **ppAdvSink);
        HRESULT ( STDMETHODCALLTYPE *GetExtent )(
            __RPC__in IViewObjectEx * This,
                       DWORD dwDrawAspect,
                       LONG lindex,
                               __RPC__in_opt DVTARGETDEVICE *ptd,
                        __RPC__out LPSIZEL lpsizel);
        HRESULT ( STDMETHODCALLTYPE *GetRect )(
            __RPC__in IViewObjectEx * This,
                       DWORD dwAspect,
                        __RPC__out LPRECTL pRect);
        HRESULT ( STDMETHODCALLTYPE *GetViewStatus )(
            __RPC__in IViewObjectEx * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *QueryHitPoint )(
            __RPC__in IViewObjectEx * This,
                       DWORD dwAspect,
                       __RPC__in LPCRECT pRectBounds,
                       POINT ptlLoc,
                       LONG lCloseHint,
                        __RPC__out DWORD *pHitResult);
        HRESULT ( STDMETHODCALLTYPE *QueryHitRect )(
            __RPC__in IViewObjectEx * This,
                       DWORD dwAspect,
                       __RPC__in LPCRECT pRectBounds,
                       __RPC__in LPCRECT pRectLoc,
                       LONG lCloseHint,
                        __RPC__out DWORD *pHitResult);
        HRESULT ( STDMETHODCALLTYPE *GetNaturalExtent )(
            __RPC__in IViewObjectEx * This,
                       DWORD dwAspect,
                       LONG lindex,
                       __RPC__in DVTARGETDEVICE *ptd,
                       __RPC__in HDC hicTargetDev,
                       __RPC__in DVEXTENTINFO *pExtentInfo,
                        __RPC__out LPSIZEL pSizel);
        END_INTERFACE
    } IViewObjectExVtbl;
    interface IViewObjectEx
    {
        CONST_VTBL struct IViewObjectExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Draw(This,dwDrawAspect,lindex,pvAspect,ptd,hdcTargetDev,hdcDraw,lprcBounds,lprcWBounds,pfnContinue,dwContinue) )
    ( (This)->lpVtbl -> GetColorSet(This,dwDrawAspect,lindex,pvAspect,ptd,hicTargetDev,ppColorSet) )
    ( (This)->lpVtbl -> Freeze(This,dwDrawAspect,lindex,pvAspect,pdwFreeze) )
    ( (This)->lpVtbl -> Unfreeze(This,dwFreeze) )
    ( (This)->lpVtbl -> SetAdvise(This,aspects,advf,pAdvSink) )
    ( (This)->lpVtbl -> GetAdvise(This,pAspects,pAdvf,ppAdvSink) )
    ( (This)->lpVtbl -> GetExtent(This,dwDrawAspect,lindex,ptd,lpsizel) )
    ( (This)->lpVtbl -> GetRect(This,dwAspect,pRect) )
    ( (This)->lpVtbl -> GetViewStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> QueryHitPoint(This,dwAspect,pRectBounds,ptlLoc,lCloseHint,pHitResult) )
    ( (This)->lpVtbl -> QueryHitRect(This,dwAspect,pRectBounds,pRectLoc,lCloseHint,pHitResult) )
    ( (This)->lpVtbl -> GetNaturalExtent(This,dwAspect,lindex,ptd,hicTargetDev,pExtentInfo,pSizel) )
typedef IOleUndoUnit *LPOLEUNDOUNIT;
EXTERN_C const IID IID_IOleUndoUnit;
    typedef struct IOleUndoUnitVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleUndoUnit * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleUndoUnit * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleUndoUnit * This);
        HRESULT ( STDMETHODCALLTYPE *Do )(
            __RPC__in IOleUndoUnit * This,
                       __RPC__in_opt IOleUndoManager *pUndoManager);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in IOleUndoUnit * This,
                        __RPC__deref_out_opt BSTR *pBstr);
        HRESULT ( STDMETHODCALLTYPE *GetUnitType )(
            __RPC__in IOleUndoUnit * This,
                        __RPC__out CLSID *pClsid,
                        __RPC__out LONG *plID);
        HRESULT ( STDMETHODCALLTYPE *OnNextAdd )(
            __RPC__in IOleUndoUnit * This);
        END_INTERFACE
    } IOleUndoUnitVtbl;
    interface IOleUndoUnit
    {
        CONST_VTBL struct IOleUndoUnitVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Do(This,pUndoManager) )
    ( (This)->lpVtbl -> GetDescription(This,pBstr) )
    ( (This)->lpVtbl -> GetUnitType(This,pClsid,plID) )
    ( (This)->lpVtbl -> OnNextAdd(This) )
typedef IOleParentUndoUnit *LPOLEPARENTUNDOUNIT;
EXTERN_C const IID IID_IOleParentUndoUnit;
    typedef struct IOleParentUndoUnitVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleParentUndoUnit * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleParentUndoUnit * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleParentUndoUnit * This);
        HRESULT ( STDMETHODCALLTYPE *Do )(
            __RPC__in IOleParentUndoUnit * This,
                       __RPC__in_opt IOleUndoManager *pUndoManager);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in IOleParentUndoUnit * This,
                        __RPC__deref_out_opt BSTR *pBstr);
        HRESULT ( STDMETHODCALLTYPE *GetUnitType )(
            __RPC__in IOleParentUndoUnit * This,
                        __RPC__out CLSID *pClsid,
                        __RPC__out LONG *plID);
        HRESULT ( STDMETHODCALLTYPE *OnNextAdd )(
            __RPC__in IOleParentUndoUnit * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IOleParentUndoUnit * This,
                       __RPC__in_opt IOleParentUndoUnit *pPUU);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IOleParentUndoUnit * This,
                       __RPC__in_opt IOleParentUndoUnit *pPUU,
                       BOOL fCommit);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IOleParentUndoUnit * This,
                       __RPC__in_opt IOleUndoUnit *pUU);
        HRESULT ( STDMETHODCALLTYPE *FindUnit )(
            __RPC__in IOleParentUndoUnit * This,
                       __RPC__in_opt IOleUndoUnit *pUU);
        HRESULT ( STDMETHODCALLTYPE *GetParentState )(
            __RPC__in IOleParentUndoUnit * This,
                        __RPC__out DWORD *pdwState);
        END_INTERFACE
    } IOleParentUndoUnitVtbl;
    interface IOleParentUndoUnit
    {
        CONST_VTBL struct IOleParentUndoUnitVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Do(This,pUndoManager) )
    ( (This)->lpVtbl -> GetDescription(This,pBstr) )
    ( (This)->lpVtbl -> GetUnitType(This,pClsid,plID) )
    ( (This)->lpVtbl -> OnNextAdd(This) )
    ( (This)->lpVtbl -> Open(This,pPUU) )
    ( (This)->lpVtbl -> Close(This,pPUU,fCommit) )
    ( (This)->lpVtbl -> Add(This,pUU) )
    ( (This)->lpVtbl -> FindUnit(This,pUU) )
    ( (This)->lpVtbl -> GetParentState(This,pdwState) )
typedef IEnumOleUndoUnits *LPENUMOLEUNDOUNITS;
EXTERN_C const IID IID_IEnumOleUndoUnits;
    typedef struct IEnumOleUndoUnitsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumOleUndoUnits * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumOleUndoUnits * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumOleUndoUnits * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumOleUndoUnits * This,
                       ULONG cElt,
                                            IOleUndoUnit **rgElt,
                        ULONG *pcEltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumOleUndoUnits * This,
                       ULONG cElt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumOleUndoUnits * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumOleUndoUnits * This,
                        __RPC__deref_out_opt IEnumOleUndoUnits **ppEnum);
        END_INTERFACE
    } IEnumOleUndoUnitsVtbl;
    interface IEnumOleUndoUnits
    {
        CONST_VTBL struct IEnumOleUndoUnitsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cElt,rgElt,pcEltFetched) )
    ( (This)->lpVtbl -> Skip(This,cElt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
                HRESULT STDMETHODCALLTYPE IEnumOleUndoUnits_RemoteNext_Proxy(
    __RPC__in IEnumOleUndoUnits * This,
               ULONG cElt,
                                    __RPC__out_ecount_part(cElt, *pcEltFetched) IOleUndoUnit **rgElt,
                __RPC__out ULONG *pcEltFetched);
void __RPC_STUB IEnumOleUndoUnits_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef IOleUndoManager *LPOLEUNDOMANAGER;
EXTERN_C const IID IID_IOleUndoManager;
    typedef struct IOleUndoManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleUndoManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleUndoManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleUndoManager * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IOleUndoManager * This,
                       __RPC__in_opt IOleParentUndoUnit *pPUU);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IOleUndoManager * This,
                       __RPC__in_opt IOleParentUndoUnit *pPUU,
                       BOOL fCommit);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IOleUndoManager * This,
                       __RPC__in_opt IOleUndoUnit *pUU);
        HRESULT ( STDMETHODCALLTYPE *GetOpenParentState )(
            __RPC__in IOleUndoManager * This,
                        __RPC__out DWORD *pdwState);
        HRESULT ( STDMETHODCALLTYPE *DiscardFrom )(
            __RPC__in IOleUndoManager * This,
                       __RPC__in_opt IOleUndoUnit *pUU);
        HRESULT ( STDMETHODCALLTYPE *UndoTo )(
            __RPC__in IOleUndoManager * This,
                       __RPC__in_opt IOleUndoUnit *pUU);
        HRESULT ( STDMETHODCALLTYPE *RedoTo )(
            __RPC__in IOleUndoManager * This,
                       __RPC__in_opt IOleUndoUnit *pUU);
        HRESULT ( STDMETHODCALLTYPE *EnumUndoable )(
            __RPC__in IOleUndoManager * This,
                        __RPC__deref_out_opt IEnumOleUndoUnits **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *EnumRedoable )(
            __RPC__in IOleUndoManager * This,
                        __RPC__deref_out_opt IEnumOleUndoUnits **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetLastUndoDescription )(
            __RPC__in IOleUndoManager * This,
                        __RPC__deref_out_opt BSTR *pBstr);
        HRESULT ( STDMETHODCALLTYPE *GetLastRedoDescription )(
            __RPC__in IOleUndoManager * This,
                        __RPC__deref_out_opt BSTR *pBstr);
        HRESULT ( STDMETHODCALLTYPE *Enable )(
            __RPC__in IOleUndoManager * This,
                       BOOL fEnable);
        END_INTERFACE
    } IOleUndoManagerVtbl;
    interface IOleUndoManager
    {
        CONST_VTBL struct IOleUndoManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Open(This,pPUU) )
    ( (This)->lpVtbl -> Close(This,pPUU,fCommit) )
    ( (This)->lpVtbl -> Add(This,pUU) )
    ( (This)->lpVtbl -> GetOpenParentState(This,pdwState) )
    ( (This)->lpVtbl -> DiscardFrom(This,pUU) )
    ( (This)->lpVtbl -> UndoTo(This,pUU) )
    ( (This)->lpVtbl -> RedoTo(This,pUU) )
    ( (This)->lpVtbl -> EnumUndoable(This,ppEnum) )
    ( (This)->lpVtbl -> EnumRedoable(This,ppEnum) )
    ( (This)->lpVtbl -> GetLastUndoDescription(This,pBstr) )
    ( (This)->lpVtbl -> GetLastRedoDescription(This,pBstr) )
    ( (This)->lpVtbl -> Enable(This,fEnable) )
typedef IPointerInactive *LPPOINTERINACTIVE;
typedef
enum tagPOINTERINACTIVE
    {
        POINTERINACTIVE_ACTIVATEONENTRY = 1,
        POINTERINACTIVE_DEACTIVATEONLEAVE = 2,
        POINTERINACTIVE_ACTIVATEONDRAG = 4
    } POINTERINACTIVE;
EXTERN_C const IID IID_IPointerInactive;
    typedef struct IPointerInactiveVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPointerInactive * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPointerInactive * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPointerInactive * This);
        HRESULT ( STDMETHODCALLTYPE *GetActivationPolicy )(
            __RPC__in IPointerInactive * This,
                        __RPC__out DWORD *pdwPolicy);
        HRESULT ( STDMETHODCALLTYPE *OnInactiveMouseMove )(
            __RPC__in IPointerInactive * This,
                       __RPC__in LPCRECT pRectBounds,
                       LONG x,
                       LONG y,
                       DWORD grfKeyState);
        HRESULT ( STDMETHODCALLTYPE *OnInactiveSetCursor )(
            __RPC__in IPointerInactive * This,
                       __RPC__in LPCRECT pRectBounds,
                       LONG x,
                       LONG y,
                       DWORD dwMouseMsg,
                       BOOL fSetAlways);
        END_INTERFACE
    } IPointerInactiveVtbl;
    interface IPointerInactive
    {
        CONST_VTBL struct IPointerInactiveVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetActivationPolicy(This,pdwPolicy) )
    ( (This)->lpVtbl -> OnInactiveMouseMove(This,pRectBounds,x,y,grfKeyState) )
    ( (This)->lpVtbl -> OnInactiveSetCursor(This,pRectBounds,x,y,dwMouseMsg,fSetAlways) )
typedef IObjectWithSite *LPOBJECTWITHSITE;
EXTERN_C const IID IID_IObjectWithSite;
    typedef struct IObjectWithSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IObjectWithSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IObjectWithSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IObjectWithSite * This);
        HRESULT ( STDMETHODCALLTYPE *SetSite )(
            __RPC__in IObjectWithSite * This,
                       __RPC__in_opt IUnknown *pUnkSite);
        HRESULT ( STDMETHODCALLTYPE *GetSite )(
            __RPC__in IObjectWithSite * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppvSite);
        END_INTERFACE
    } IObjectWithSiteVtbl;
    interface IObjectWithSite
    {
        CONST_VTBL struct IObjectWithSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSite(This,pUnkSite) )
    ( (This)->lpVtbl -> GetSite(This,riid,ppvSite) )
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0036_v0_0_s_ifspec;
typedef IPerPropertyBrowsing *LPPERPROPERTYBROWSING;
typedef struct tagCALPOLESTR
    {
    ULONG cElems;
                    LPOLESTR *pElems;
    } CALPOLESTR;
typedef struct tagCALPOLESTR *LPCALPOLESTR;
typedef struct tagCADWORD
    {
    ULONG cElems;
                    DWORD *pElems;
    } CADWORD;
typedef struct tagCADWORD *LPCADWORD;
EXTERN_C const IID IID_IPerPropertyBrowsing;
    typedef struct IPerPropertyBrowsingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPerPropertyBrowsing * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPerPropertyBrowsing * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPerPropertyBrowsing * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayString )(
            __RPC__in IPerPropertyBrowsing * This,
                       DISPID dispID,
                        __RPC__deref_out_opt BSTR *pBstr);
        HRESULT ( STDMETHODCALLTYPE *MapPropertyToPage )(
            __RPC__in IPerPropertyBrowsing * This,
                       DISPID dispID,
                        __RPC__out CLSID *pClsid);
        HRESULT ( STDMETHODCALLTYPE *GetPredefinedStrings )(
            __RPC__in IPerPropertyBrowsing * This,
                       DISPID dispID,
                        __RPC__out CALPOLESTR *pCaStringsOut,
                        __RPC__out CADWORD *pCaCookiesOut);
        HRESULT ( STDMETHODCALLTYPE *GetPredefinedValue )(
            __RPC__in IPerPropertyBrowsing * This,
                       DISPID dispID,
                       DWORD dwCookie,
                        __RPC__out VARIANT *pVarOut);
        END_INTERFACE
    } IPerPropertyBrowsingVtbl;
    interface IPerPropertyBrowsing
    {
        CONST_VTBL struct IPerPropertyBrowsingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayString(This,dispID,pBstr) )
    ( (This)->lpVtbl -> MapPropertyToPage(This,dispID,pClsid) )
    ( (This)->lpVtbl -> GetPredefinedStrings(This,dispID,pCaStringsOut,pCaCookiesOut) )
    ( (This)->lpVtbl -> GetPredefinedValue(This,dispID,dwCookie,pVarOut) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0037_v0_0_s_ifspec;
typedef IPropertyBag2 *LPPROPERTYBAG2;
typedef
enum tagPROPBAG2_TYPE
    {
        PROPBAG2_TYPE_UNDEFINED = 0,
        PROPBAG2_TYPE_DATA = 1,
        PROPBAG2_TYPE_URL = 2,
        PROPBAG2_TYPE_OBJECT = 3,
        PROPBAG2_TYPE_STREAM = 4,
        PROPBAG2_TYPE_STORAGE = 5,
        PROPBAG2_TYPE_MONIKER = 6
    } PROPBAG2_TYPE;
typedef struct tagPROPBAG2
    {
    DWORD dwType;
    VARTYPE vt;
    CLIPFORMAT cfType;
    DWORD dwHint;
    LPOLESTR pstrName;
    CLSID clsid;
    } PROPBAG2;
EXTERN_C const IID IID_IPropertyBag2;
    typedef struct IPropertyBag2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyBag2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyBag2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyBag2 * This);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            __RPC__in IPropertyBag2 * This,
                       ULONG cProperties,
                                __RPC__in_ecount_full(cProperties) PROPBAG2 *pPropBag,
                               __RPC__in_opt IErrorLog *pErrLog,
                                 __RPC__out_ecount_full(cProperties) VARIANT *pvarValue,
                                             __RPC__inout_ecount_full_opt(cProperties) HRESULT *phrError);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in IPropertyBag2 * This,
                       ULONG cProperties,
                                __RPC__in_ecount_full(cProperties) PROPBAG2 *pPropBag,
                                __RPC__in_ecount_full(cProperties) VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *CountProperties )(
            __RPC__in IPropertyBag2 * This,
                        __RPC__out ULONG *pcProperties);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyInfo )(
            __RPC__in IPropertyBag2 * This,
                       ULONG iProperty,
                       ULONG cProperties,
                                 __RPC__out_ecount_full(cProperties) PROPBAG2 *pPropBag,
                        __RPC__out ULONG *pcProperties);
        HRESULT ( STDMETHODCALLTYPE *LoadObject )(
            __RPC__in IPropertyBag2 * This,
                       __RPC__in LPCOLESTR pstrName,
                       DWORD dwHint,
                       __RPC__in_opt IUnknown *pUnkObject,
                               __RPC__in_opt IErrorLog *pErrLog);
        END_INTERFACE
    } IPropertyBag2Vtbl;
    interface IPropertyBag2
    {
        CONST_VTBL struct IPropertyBag2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,cProperties,pPropBag,pErrLog,pvarValue,phrError) )
    ( (This)->lpVtbl -> Write(This,cProperties,pPropBag,pvarValue) )
    ( (This)->lpVtbl -> CountProperties(This,pcProperties) )
    ( (This)->lpVtbl -> GetPropertyInfo(This,iProperty,cProperties,pPropBag,pcProperties) )
    ( (This)->lpVtbl -> LoadObject(This,pstrName,dwHint,pUnkObject,pErrLog) )
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0038_v0_0_s_ifspec;
typedef IPersistPropertyBag2 *LPPERSISTPROPERTYBAG2;
EXTERN_C const IID IID_IPersistPropertyBag2;
    typedef struct IPersistPropertyBag2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPersistPropertyBag2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPersistPropertyBag2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPersistPropertyBag2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in IPersistPropertyBag2 * This,
                        __RPC__out CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *InitNew )(
            __RPC__in IPersistPropertyBag2 * This);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in IPersistPropertyBag2 * This,
                       __RPC__in_opt IPropertyBag2 *pPropBag,
                               __RPC__in_opt IErrorLog *pErrLog);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IPersistPropertyBag2 * This,
                       __RPC__in_opt IPropertyBag2 *pPropBag,
                       BOOL fClearDirty,
                       BOOL fSaveAllProperties);
        HRESULT ( STDMETHODCALLTYPE *IsDirty )(
            __RPC__in IPersistPropertyBag2 * This);
        END_INTERFACE
    } IPersistPropertyBag2Vtbl;
    interface IPersistPropertyBag2
    {
        CONST_VTBL struct IPersistPropertyBag2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> InitNew(This) )
    ( (This)->lpVtbl -> Load(This,pPropBag,pErrLog) )
    ( (This)->lpVtbl -> Save(This,pPropBag,fClearDirty,fSaveAllProperties) )
    ( (This)->lpVtbl -> IsDirty(This) )
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0039_v0_0_s_ifspec;
typedef IAdviseSinkEx *LPADVISESINKEX;
EXTERN_C const IID IID_IAdviseSinkEx;
    typedef struct IAdviseSinkExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAdviseSinkEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAdviseSinkEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAdviseSinkEx * This);
                      void ( STDMETHODCALLTYPE *OnDataChange )(
            IAdviseSinkEx * This,
            _In_ FORMATETC *pFormatetc,
            _In_ STGMEDIUM *pStgmed);
                      void ( STDMETHODCALLTYPE *OnViewChange )(
            IAdviseSinkEx * This,
                       DWORD dwAspect,
                       LONG lindex);
                      void ( STDMETHODCALLTYPE *OnRename )(
            IAdviseSinkEx * This,
            _In_ IMoniker *pmk);
                      void ( STDMETHODCALLTYPE *OnSave )(
            IAdviseSinkEx * This);
                      void ( STDMETHODCALLTYPE *OnClose )(
            IAdviseSinkEx * This);
                      void ( STDMETHODCALLTYPE *OnViewStatusChange )(
            IAdviseSinkEx * This,
                       DWORD dwViewStatus);
        END_INTERFACE
    } IAdviseSinkExVtbl;
    interface IAdviseSinkEx
    {
        CONST_VTBL struct IAdviseSinkExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnDataChange(This,pFormatetc,pStgmed) )
    ( (This)->lpVtbl -> OnViewChange(This,dwAspect,lindex) )
    ( (This)->lpVtbl -> OnRename(This,pmk) )
    ( (This)->lpVtbl -> OnSave(This) )
    ( (This)->lpVtbl -> OnClose(This) )
    ( (This)->lpVtbl -> OnViewStatusChange(This,dwViewStatus) )
                HRESULT STDMETHODCALLTYPE IAdviseSinkEx_RemoteOnViewStatusChange_Proxy(
    __RPC__in IAdviseSinkEx * This,
               DWORD dwViewStatus);
void __RPC_STUB IAdviseSinkEx_RemoteOnViewStatusChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0040_v0_0_s_ifspec;
typedef IQuickActivate *LPQUICKACTIVATE;
typedef
enum tagQACONTAINERFLAGS
    {
        QACONTAINER_SHOWHATCHING = 0x1,
        QACONTAINER_SHOWGRABHANDLES = 0x2,
        QACONTAINER_USERMODE = 0x4,
        QACONTAINER_DISPLAYASDEFAULT = 0x8,
        QACONTAINER_UIDEAD = 0x10,
        QACONTAINER_AUTOCLIP = 0x20,
        QACONTAINER_MESSAGEREFLECT = 0x40,
        QACONTAINER_SUPPORTSMNEMONICS = 0x80
    } QACONTAINERFLAGS;
typedef DECLSPEC_UUID("66504301-BE0F-101A-8BBB-00AA00300CAB") DWORD OLE_COLOR;
typedef struct tagQACONTAINER
    {
    ULONG cbSize;
    IOleClientSite *pClientSite;
    IAdviseSinkEx *pAdviseSink;
    IPropertyNotifySink *pPropertyNotifySink;
    IUnknown *pUnkEventSink;
    DWORD dwAmbientFlags;
    OLE_COLOR colorFore;
    OLE_COLOR colorBack;
    IFont *pFont;
    IOleUndoManager *pUndoMgr;
    DWORD dwAppearance;
    LONG lcid;
    HPALETTE hpal;
    IBindHost *pBindHost;
    IOleControlSite *pOleControlSite;
    IServiceProvider *pServiceProvider;
    } QACONTAINER;
typedef struct tagQACONTROL
    {
    ULONG cbSize;
    DWORD dwMiscStatus;
    DWORD dwViewStatus;
    DWORD dwEventCookie;
    DWORD dwPropNotifyCookie;
    DWORD dwPointerActivationPolicy;
    } QACONTROL;
EXTERN_C const IID IID_IQuickActivate;
    typedef struct IQuickActivateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IQuickActivate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IQuickActivate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IQuickActivate * This);
                      HRESULT ( STDMETHODCALLTYPE *QuickActivate )(
            IQuickActivate * This,
                       QACONTAINER *pQaContainer,
                            QACONTROL *pQaControl);
        HRESULT ( STDMETHODCALLTYPE *SetContentExtent )(
            __RPC__in IQuickActivate * This,
                       __RPC__in LPSIZEL pSizel);
        HRESULT ( STDMETHODCALLTYPE *GetContentExtent )(
            __RPC__in IQuickActivate * This,
                        __RPC__out LPSIZEL pSizel);
        END_INTERFACE
    } IQuickActivateVtbl;
    interface IQuickActivate
    {
        CONST_VTBL struct IQuickActivateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QuickActivate(This,pQaContainer,pQaControl) )
    ( (This)->lpVtbl -> SetContentExtent(This,pSizel) )
    ( (This)->lpVtbl -> GetContentExtent(This,pSizel) )
                HRESULT STDMETHODCALLTYPE IQuickActivate_RemoteQuickActivate_Proxy(
    __RPC__in IQuickActivate * This,
               __RPC__in QACONTAINER *pQaContainer,
                __RPC__out QACONTROL *pQaControl);
void __RPC_STUB IQuickActivate_RemoteQuickActivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ocidl_0000_0041_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER CLIPFORMAT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out CLIPFORMAT * );
void __RPC_USER CLIPFORMAT_UserFree( __RPC__in unsigned long *, __RPC__in CLIPFORMAT * );
unsigned long __RPC_USER HACCEL_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HACCEL * );
unsigned char * __RPC_USER HACCEL_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HACCEL * );
unsigned char * __RPC_USER HACCEL_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HACCEL * );
void __RPC_USER HACCEL_UserFree( __RPC__in unsigned long *, __RPC__in HACCEL * );
unsigned long __RPC_USER HDC_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HDC * );
void __RPC_USER HDC_UserFree( __RPC__in unsigned long *, __RPC__in HDC * );
unsigned long __RPC_USER HFONT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HFONT * );
unsigned char * __RPC_USER HFONT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HFONT * );
unsigned char * __RPC_USER HFONT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HFONT * );
void __RPC_USER HFONT_UserFree( __RPC__in unsigned long *, __RPC__in HFONT * );
unsigned long __RPC_USER HPALETTE_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HPALETTE * );
unsigned char * __RPC_USER HPALETTE_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HPALETTE * );
unsigned char * __RPC_USER HPALETTE_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HPALETTE * );
void __RPC_USER HPALETTE_UserFree( __RPC__in unsigned long *, __RPC__in HPALETTE * );
unsigned long __RPC_USER HRGN_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HRGN * );
unsigned char * __RPC_USER HRGN_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HRGN * );
unsigned char * __RPC_USER HRGN_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HRGN * );
void __RPC_USER HRGN_UserFree( __RPC__in unsigned long *, __RPC__in HRGN * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER CLIPFORMAT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out CLIPFORMAT * );
void __RPC_USER CLIPFORMAT_UserFree64( __RPC__in unsigned long *, __RPC__in CLIPFORMAT * );
unsigned long __RPC_USER HACCEL_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HACCEL * );
unsigned char * __RPC_USER HACCEL_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HACCEL * );
unsigned char * __RPC_USER HACCEL_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HACCEL * );
void __RPC_USER HACCEL_UserFree64( __RPC__in unsigned long *, __RPC__in HACCEL * );
unsigned long __RPC_USER HDC_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HDC * );
void __RPC_USER HDC_UserFree64( __RPC__in unsigned long *, __RPC__in HDC * );
unsigned long __RPC_USER HFONT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HFONT * );
unsigned char * __RPC_USER HFONT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HFONT * );
unsigned char * __RPC_USER HFONT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HFONT * );
void __RPC_USER HFONT_UserFree64( __RPC__in unsigned long *, __RPC__in HFONT * );
unsigned long __RPC_USER HPALETTE_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HPALETTE * );
unsigned char * __RPC_USER HPALETTE_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HPALETTE * );
unsigned char * __RPC_USER HPALETTE_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HPALETTE * );
void __RPC_USER HPALETTE_UserFree64( __RPC__in unsigned long *, __RPC__in HPALETTE * );
unsigned long __RPC_USER HRGN_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HRGN * );
unsigned char * __RPC_USER HRGN_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HRGN * );
unsigned char * __RPC_USER HRGN_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HRGN * );
void __RPC_USER HRGN_UserFree64( __RPC__in unsigned long *, __RPC__in HRGN * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
              HRESULT STDMETHODCALLTYPE IEnumConnections_Next_Proxy(
    IEnumConnections * This,
               ULONG cConnections,
                                    LPCONNECTDATA rgcd,
                ULONG *pcFetched);
                HRESULT STDMETHODCALLTYPE IEnumConnections_Next_Stub(
    __RPC__in IEnumConnections * This,
               ULONG cConnections,
                                    __RPC__out_ecount_part(cConnections, *pcFetched) LPCONNECTDATA rgcd,
                __RPC__out ULONG *pcFetched);
              HRESULT STDMETHODCALLTYPE IEnumConnectionPoints_Next_Proxy(
    IEnumConnectionPoints * This,
               ULONG cConnections,
                                    LPCONNECTIONPOINT *ppCP,
                ULONG *pcFetched);
                HRESULT STDMETHODCALLTYPE IEnumConnectionPoints_Next_Stub(
    __RPC__in IEnumConnectionPoints * This,
               ULONG cConnections,
                                    __RPC__out_ecount_part(cConnections, *pcFetched) LPCONNECTIONPOINT *ppCP,
                __RPC__out ULONG *pcFetched);
              HRESULT STDMETHODCALLTYPE IClassFactory2_CreateInstanceLic_Proxy(
    IClassFactory2 * This,
    _In_opt_ IUnknown *pUnkOuter,
    _Reserved_ IUnknown *pUnkReserved,
    __RPC__in REFIID riid,
    __RPC__in BSTR bstrKey,
    __RPC__deref_out_opt PVOID *ppvObj);
                HRESULT STDMETHODCALLTYPE IClassFactory2_CreateInstanceLic_Stub(
    __RPC__in IClassFactory2 * This,
               __RPC__in REFIID riid,
               __RPC__in BSTR bstrKey,
                        __RPC__deref_out_opt IUnknown **ppvObj);
              HRESULT STDMETHODCALLTYPE IPersistMemory_Load_Proxy(
    IPersistMemory * This,
                        LPVOID pMem,
               ULONG cbSize);
                HRESULT STDMETHODCALLTYPE IPersistMemory_Load_Stub(
    __RPC__in IPersistMemory * This,
                        __RPC__in_ecount_full(cbSize) BYTE *pMem,
               ULONG cbSize);
              HRESULT STDMETHODCALLTYPE IPersistMemory_Save_Proxy(
    IPersistMemory * This,
                         LPVOID pMem,
               BOOL fClearDirty,
               ULONG cbSize);
                HRESULT STDMETHODCALLTYPE IPersistMemory_Save_Stub(
    __RPC__in IPersistMemory * This,
                         __RPC__out_ecount_full(cbSize) BYTE *pMem,
               BOOL fClearDirty,
               ULONG cbSize);
              HRESULT STDMETHODCALLTYPE IEnumOleUndoUnits_Next_Proxy(
    IEnumOleUndoUnits * This,
               ULONG cElt,
                                    IOleUndoUnit **rgElt,
                ULONG *pcEltFetched);
                HRESULT STDMETHODCALLTYPE IEnumOleUndoUnits_Next_Stub(
    __RPC__in IEnumOleUndoUnits * This,
               ULONG cElt,
                                    __RPC__out_ecount_part(cElt, *pcEltFetched) IOleUndoUnit **rgElt,
                __RPC__out ULONG *pcEltFetched);
              void STDMETHODCALLTYPE IAdviseSinkEx_OnViewStatusChange_Proxy(
    IAdviseSinkEx * This,
               DWORD dwViewStatus);
                HRESULT STDMETHODCALLTYPE IAdviseSinkEx_OnViewStatusChange_Stub(
    __RPC__in IAdviseSinkEx * This,
               DWORD dwViewStatus);
              HRESULT STDMETHODCALLTYPE IQuickActivate_QuickActivate_Proxy(
    IQuickActivate * This,
               QACONTAINER *pQaContainer,
                    QACONTROL *pQaControl);
                HRESULT STDMETHODCALLTYPE IQuickActivate_QuickActivate_Stub(
    __RPC__in IQuickActivate * This,
               __RPC__in QACONTAINER *pQaContainer,
                __RPC__out QACONTROL *pQaControl);
}
