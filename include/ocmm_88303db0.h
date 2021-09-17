#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITimerService ITimerService;
typedef interface ITimer ITimer;
typedef interface ITimerEx ITimerEx;
typedef interface ITimerSink ITimerSink;
typedef interface IMapMIMEToCLSID IMapMIMEToCLSID;
typedef interface IImageDecodeFilter IImageDecodeFilter;
typedef interface IImageDecodeEventSink IImageDecodeEventSink;
typedef interface IImageDecodeEventSink2 IImageDecodeEventSink2;
#include "oaidl.h"
#include "oleidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef GUID BFID;
typedef struct tagRGBQUAD RGBQUAD;
EXTERN_C const GUID BFID_MONOCHROME;
EXTERN_C const GUID BFID_RGB_4;
EXTERN_C const GUID BFID_RGB_8;
EXTERN_C const GUID BFID_RGB_555;
EXTERN_C const GUID BFID_RGB_565;
EXTERN_C const GUID BFID_RGB_24;
EXTERN_C const GUID BFID_RGB_32;
EXTERN_C const GUID BFID_RGBA_32;
EXTERN_C const GUID BFID_GRAY_8;
EXTERN_C const GUID BFID_GRAY_16;
EXTERN_C const GUID CLSID_IImageDecodeFilter;
EXTERN_C const GUID NAMEDTIMER_DRAW;
extern RPC_IF_HANDLE __MIDL_itf_ocmm_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ocmm_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITimerService;
    typedef struct ITimerServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITimerService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITimerService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITimerService * This);
        HRESULT ( STDMETHODCALLTYPE *CreateTimer )(
            __RPC__in ITimerService * This,
                       __RPC__in_opt ITimer *pReferenceTimer,
                        __RPC__deref_out_opt ITimer **ppNewTimer);
        HRESULT ( STDMETHODCALLTYPE *GetNamedTimer )(
            __RPC__in ITimerService * This,
                       __RPC__in REFGUID rguidName,
                        __RPC__deref_out_opt ITimer **ppTimer);
        HRESULT ( STDMETHODCALLTYPE *SetNamedTimerReference )(
            __RPC__in ITimerService * This,
                       __RPC__in REFGUID rguidName,
                       __RPC__in_opt ITimer *pReferenceTimer);
        END_INTERFACE
    } ITimerServiceVtbl;
    interface ITimerService
    {
        CONST_VTBL struct ITimerServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateTimer(This,pReferenceTimer,ppNewTimer) )
    ( (This)->lpVtbl -> GetNamedTimer(This,rguidName,ppTimer) )
    ( (This)->lpVtbl -> SetNamedTimerReference(This,rguidName,pReferenceTimer) )
EXTERN_C const IID IID_ITimer;
    typedef struct ITimerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITimer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITimer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITimer * This);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            __RPC__in ITimer * This,
                       VARIANT vtimeMin,
                       VARIANT vtimeMax,
                       VARIANT vtimeInterval,
                       DWORD dwFlags,
                       __RPC__in_opt ITimerSink *pTimerSink,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            __RPC__in ITimer * This,
                       DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *Freeze )(
            __RPC__in ITimer * This,
                       BOOL fFreeze);
        HRESULT ( STDMETHODCALLTYPE *GetTime )(
            __RPC__in ITimer * This,
                        __RPC__out VARIANT *pvtime);
        END_INTERFACE
    } ITimerVtbl;
    interface ITimer
    {
        CONST_VTBL struct ITimerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie) )
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) )
    ( (This)->lpVtbl -> Freeze(This,fFreeze) )
    ( (This)->lpVtbl -> GetTime(This,pvtime) )
EXTERN_C const IID IID_ITimerEx;
    typedef struct ITimerExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITimerEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITimerEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITimerEx * This);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            __RPC__in ITimerEx * This,
                       VARIANT vtimeMin,
                       VARIANT vtimeMax,
                       VARIANT vtimeInterval,
                       DWORD dwFlags,
                       __RPC__in_opt ITimerSink *pTimerSink,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            __RPC__in ITimerEx * This,
                       DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *Freeze )(
            __RPC__in ITimerEx * This,
                       BOOL fFreeze);
        HRESULT ( STDMETHODCALLTYPE *GetTime )(
            __RPC__in ITimerEx * This,
                        __RPC__out VARIANT *pvtime);
        HRESULT ( STDMETHODCALLTYPE *SetMode )(
            __RPC__in ITimerEx * This,
                       DWORD dwMode);
        END_INTERFACE
    } ITimerExVtbl;
    interface ITimerEx
    {
        CONST_VTBL struct ITimerExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie) )
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) )
    ( (This)->lpVtbl -> Freeze(This,fFreeze) )
    ( (This)->lpVtbl -> GetTime(This,pvtime) )
    ( (This)->lpVtbl -> SetMode(This,dwMode) )
EXTERN_C const IID IID_ITimerSink;
    typedef struct ITimerSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITimerSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITimerSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITimerSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnTimer )(
            __RPC__in ITimerSink * This,
                       VARIANT vtimeAdvise);
        END_INTERFACE
    } ITimerSinkVtbl;
    interface ITimerSink
    {
        CONST_VTBL struct ITimerSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnTimer(This,vtimeAdvise) )
extern RPC_IF_HANDLE __MIDL_itf_ocmm_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ocmm_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IMapMIMEToCLSID;
    typedef struct IMapMIMEToCLSIDVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMapMIMEToCLSID * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMapMIMEToCLSID * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMapMIMEToCLSID * This);
        HRESULT ( STDMETHODCALLTYPE *EnableDefaultMappings )(
            __RPC__in IMapMIMEToCLSID * This,
            BOOL bEnable);
        HRESULT ( STDMETHODCALLTYPE *MapMIMEToCLSID )(
            __RPC__in IMapMIMEToCLSID * This,
            __RPC__in LPCOLESTR pszMIMEType,
            __RPC__in CLSID *pCLSID);
        HRESULT ( STDMETHODCALLTYPE *SetMapping )(
            __RPC__in IMapMIMEToCLSID * This,
            __RPC__in LPCOLESTR pszMIMEType,
            DWORD dwMapMode,
            __RPC__in REFCLSID clsid);
        END_INTERFACE
    } IMapMIMEToCLSIDVtbl;
    interface IMapMIMEToCLSID
    {
        CONST_VTBL struct IMapMIMEToCLSIDVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnableDefaultMappings(This,bEnable) )
    ( (This)->lpVtbl -> MapMIMEToCLSID(This,pszMIMEType,pCLSID) )
    ( (This)->lpVtbl -> SetMapping(This,pszMIMEType,dwMapMode,clsid) )
EXTERN_C const IID IID_IImageDecodeFilter;
    typedef struct IImageDecodeFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IImageDecodeFilter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IImageDecodeFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IImageDecodeFilter * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IImageDecodeFilter * This,
            __RPC__in_opt IImageDecodeEventSink *pEventSink);
        HRESULT ( STDMETHODCALLTYPE *Process )(
            __RPC__in IImageDecodeFilter * This,
            __RPC__in_opt IStream *pStream);
        HRESULT ( STDMETHODCALLTYPE *Terminate )(
            __RPC__in IImageDecodeFilter * This,
            HRESULT hrStatus);
        END_INTERFACE
    } IImageDecodeFilterVtbl;
    interface IImageDecodeFilter
    {
        CONST_VTBL struct IImageDecodeFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pEventSink) )
    ( (This)->lpVtbl -> Process(This,pStream) )
    ( (This)->lpVtbl -> Terminate(This,hrStatus) )
EXTERN_C const IID IID_IImageDecodeEventSink;
    typedef struct IImageDecodeEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IImageDecodeEventSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IImageDecodeEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IImageDecodeEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *GetSurface )(
            __RPC__in IImageDecodeEventSink * This,
                       LONG nWidth,
                       LONG nHeight,
                       __RPC__in REFGUID bfid,
                       ULONG nPasses,
                       DWORD dwHints,
                        __RPC__deref_out_opt IUnknown **ppSurface);
        HRESULT ( STDMETHODCALLTYPE *OnBeginDecode )(
            __RPC__in IImageDecodeEventSink * This,
                        __RPC__out DWORD *pdwEvents,
                        __RPC__out ULONG *pnFormats,
                                          __RPC__deref_out_ecount_full_opt(*pnFormats) BFID **ppFormats);
        HRESULT ( STDMETHODCALLTYPE *OnBitsComplete )(
            __RPC__in IImageDecodeEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnDecodeComplete )(
            __RPC__in IImageDecodeEventSink * This,
                       HRESULT hrStatus);
        HRESULT ( STDMETHODCALLTYPE *OnPalette )(
            __RPC__in IImageDecodeEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnProgress )(
            __RPC__in IImageDecodeEventSink * This,
                       __RPC__in RECT *pBounds,
                       BOOL bComplete);
        END_INTERFACE
    } IImageDecodeEventSinkVtbl;
    interface IImageDecodeEventSink
    {
        CONST_VTBL struct IImageDecodeEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSurface(This,nWidth,nHeight,bfid,nPasses,dwHints,ppSurface) )
    ( (This)->lpVtbl -> OnBeginDecode(This,pdwEvents,pnFormats,ppFormats) )
    ( (This)->lpVtbl -> OnBitsComplete(This) )
    ( (This)->lpVtbl -> OnDecodeComplete(This,hrStatus) )
    ( (This)->lpVtbl -> OnPalette(This) )
    ( (This)->lpVtbl -> OnProgress(This,pBounds,bComplete) )
EXTERN_C const IID IID_IImageDecodeEventSink2;
    typedef struct IImageDecodeEventSink2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IImageDecodeEventSink2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IImageDecodeEventSink2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IImageDecodeEventSink2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSurface )(
            IImageDecodeEventSink2 * This,
                       LONG nWidth,
                       LONG nHeight,
                       REFGUID bfid,
                       ULONG nPasses,
                       DWORD dwHints,
                        IUnknown **ppSurface);
        HRESULT ( STDMETHODCALLTYPE *OnBeginDecode )(
            IImageDecodeEventSink2 * This,
                        DWORD *pdwEvents,
                        ULONG *pnFormats,
                                          BFID **ppFormats);
        HRESULT ( STDMETHODCALLTYPE *OnBitsComplete )(
            IImageDecodeEventSink2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnDecodeComplete )(
            IImageDecodeEventSink2 * This,
                       HRESULT hrStatus);
        HRESULT ( STDMETHODCALLTYPE *OnPalette )(
            IImageDecodeEventSink2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnProgress )(
            IImageDecodeEventSink2 * This,
                       RECT *pBounds,
                       BOOL bComplete);
        HRESULT ( STDMETHODCALLTYPE *IsAlphaPremultRequired )(
            IImageDecodeEventSink2 * This,
                        BOOL *pfPremultAlpha);
        END_INTERFACE
    } IImageDecodeEventSink2Vtbl;
    interface IImageDecodeEventSink2
    {
        CONST_VTBL struct IImageDecodeEventSink2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSurface(This,nWidth,nHeight,bfid,nPasses,dwHints,ppSurface) )
    ( (This)->lpVtbl -> OnBeginDecode(This,pdwEvents,pnFormats,ppFormats) )
    ( (This)->lpVtbl -> OnBitsComplete(This) )
    ( (This)->lpVtbl -> OnDecodeComplete(This,hrStatus) )
    ( (This)->lpVtbl -> OnPalette(This) )
    ( (This)->lpVtbl -> OnProgress(This,pBounds,bComplete) )
    ( (This)->lpVtbl -> IsAlphaPremultRequired(This,pfPremultAlpha) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_ocmm_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ocmm_0000_0008_v0_0_s_ifspec;
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
