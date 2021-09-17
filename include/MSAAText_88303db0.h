#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITfMSAAControl ITfMSAAControl;
typedef interface IInternalDocWrap IInternalDocWrap;
typedef interface ITextStoreACPEx ITextStoreACPEx;
typedef interface ITextStoreAnchorEx ITextStoreAnchorEx;
typedef interface ITextStoreACPSinkEx ITextStoreACPSinkEx;
typedef interface ITextStoreSinkAnchorEx ITextStoreSinkAnchorEx;
typedef interface IAccDictionary IAccDictionary;
typedef interface IVersionInfo IVersionInfo;
typedef interface ICoCreateLocally ICoCreateLocally;
typedef interface ICoCreatedLocally ICoCreatedLocally;
typedef interface IAccStore IAccStore;
typedef interface IAccServerDocMgr IAccServerDocMgr;
typedef interface IAccClientDocMgr IAccClientDocMgr;
typedef interface IDocWrap IDocWrap;
typedef interface IClonableWrapper IClonableWrapper;
typedef class MSAAControl MSAAControl;
typedef class AccStore AccStore;
typedef class AccDictionary AccDictionary;
typedef class AccServerDocMgr AccServerDocMgr;
typedef class AccClientDocMgr AccClientDocMgr;
typedef class DocWrap DocWrap;
#include "oaidl.h"
#include "ocidl.h"
#include "textstor.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID( IID_ITfMSAAControl, 0xb5f8fb3b,0x393f,0x4f7c,0x84,0xcb,0x50,0x49,0x24,0xc2,0x70,0x5a);
DEFINE_GUID( IID_IInternalDocWrap, 0xE1AA6466,0x9DB4,0x40ba,0xBE,0x03,0x77,0xC3,0x8E,0x8E,0x60,0xB2);
DEFINE_GUID( IID_ITextStoreACPEx, 0xA2DE3BC2,0x3D8E,0x11d3,0x81,0xA9,0xF7,0x53,0xFB,0xE6,0x1A,0x00);
DEFINE_GUID( IID_ITextStoreAnchorEx, 0xA2DE3BC1,0x3D8E,0x11d3,0x81,0xA9,0xF7,0x53,0xFB,0xE6,0x1A,0x00);
DEFINE_GUID( IID_ITextStoreACPSinkEx, 0x2bdf9464,0x41e2,0x43e3,0x95,0x0c,0xa6,0x86,0x5b,0xa2,0x5c,0xd4);
DEFINE_GUID( IID_ITextStoreSinkAnchorEx, 0x25642426,0x028d,0x4474,0x97,0x7b,0x11,0x1b,0xb1,0x14,0xfe,0x3e);
DEFINE_GUID( IID_IAccDictionary, 0x1DC4CB5F,0xD737,0x474d,0xAD,0xE9,0x5C,0xCF,0xC9,0xBC,0x1C,0xC9);
DEFINE_GUID( IID_IVersionInfo, 0x401518EC,0xDB00,0x4611,0x9B,0x29,0x2A,0x0E,0x4B,0x9A,0xFA,0x85);
DEFINE_GUID( IID_ICoCreateLocally, 0x03DE00AA,0xF272,0x41e3,0x99,0xCB,0x03,0xC5,0xE8,0x11,0x4E,0xA0);
DEFINE_GUID( IID_ICoCreatedLocally, 0x0A53EB6C,0x1908,0x4742,0x8C,0xFF,0x2C,0xEE,0x2E,0x93,0xF9,0x4C);
DEFINE_GUID( IID_IAccStore, 0xE2CD4A63,0x2B72,0x4D48,0xB7,0x39,0x95,0xE4,0x76,0x51,0x95,0xBA);
DEFINE_GUID( IID_IAccServerDocMgr, 0xAD7C73CF,0x6DD5,0x4855,0xAB,0xC2,0xB0,0x4B,0xAD,0x5B,0x91,0x53);
DEFINE_GUID( IID_IAccClientDocMgr, 0x4C896039,0x7B6D,0x49e6,0xA8,0xC1,0x45,0x11,0x6A,0x98,0x29,0x2B);
DEFINE_GUID( IID_IDocWrap, 0xDCD285FE,0x0BE0,0x43BD,0x99,0xC9,0xAA,0xAE,0xC5,0x13,0xC5,0x55);
DEFINE_GUID( IID_IClonableWrapper, 0xB33E75FF,0xE84C,0x4dca,0xA2,0x5C,0x33,0xB8,0xDC,0x00,0x33,0x74);
DEFINE_GUID( LIBID_MSAATEXTLib, 0x150E2D7A,0xDAC1,0x4582,0x94,0x7D,0x2A,0x8F,0xD7,0x8B,0x82,0xCD);
DEFINE_GUID( CLSID_MSAAControl, 0x08cd963f,0x7a3e,0x4f5c,0x9b,0xd8,0xd6,0x92,0xbb,0x04,0x3c,0x5b );
DEFINE_GUID( CLSID_AccStore, 0x5440837F,0x4BFF,0x4AE5,0xA1,0xB1,0x77,0x22,0xEC,0xC6,0x33,0x2A );
DEFINE_GUID( CLSID_AccDictionary, 0x6572EE16,0x5FE5,0x4331,0xBB,0x6D,0x76,0xA4,0x9C,0x56,0xE4,0x23 );
DEFINE_GUID( CLSID_AccServerDocMgr, 0x6089A37E,0xEB8A,0x482D,0xBD,0x6F,0xF9,0xF4,0x69,0x04,0xD1,0x6D );
DEFINE_GUID( CLSID_AccClientDocMgr, 0xFC48CC30,0x4F3E,0x4fa1,0x80,0x3B,0xAD,0x0E,0x19,0x6A,0x83,0xB1 );
DEFINE_GUID( CLSID_DocWrap, 0xBF426F7E,0x7A5E,0x44D6,0x83,0x0C,0xA3,0x90,0xEA,0x94,0x62,0xA3 );
extern RPC_IF_HANDLE __MIDL_itf_msaatext_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msaatext_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfMSAAControl;
    typedef struct ITfMSAAControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfMSAAControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfMSAAControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfMSAAControl * This);
        HRESULT ( STDMETHODCALLTYPE *SystemEnableMSAA )(
            __RPC__in ITfMSAAControl * This);
        HRESULT ( STDMETHODCALLTYPE *SystemDisableMSAA )(
            __RPC__in ITfMSAAControl * This);
        END_INTERFACE
    } ITfMSAAControlVtbl;
    interface ITfMSAAControl
    {
        CONST_VTBL struct ITfMSAAControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SystemEnableMSAA(This) )
    ( (This)->lpVtbl -> SystemDisableMSAA(This) )
EXTERN_C const IID IID_IInternalDocWrap;
    typedef struct IInternalDocWrapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInternalDocWrap * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInternalDocWrap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInternalDocWrap * This);
        HRESULT ( STDMETHODCALLTYPE *NotifyRevoke )(
            IInternalDocWrap * This);
        END_INTERFACE
    } IInternalDocWrapVtbl;
    interface IInternalDocWrap
    {
        CONST_VTBL struct IInternalDocWrapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NotifyRevoke(This) )
EXTERN_C const IID IID_ITextStoreACPEx;
    typedef struct ITextStoreACPExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextStoreACPEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextStoreACPEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextStoreACPEx * This);
        HRESULT ( STDMETHODCALLTYPE *ScrollToRect )(
            __RPC__in ITextStoreACPEx * This,
                       LONG acpStart,
                       LONG acpEnd,
                       RECT rc,
                       DWORD dwPosition);
        END_INTERFACE
    } ITextStoreACPExVtbl;
    interface ITextStoreACPEx
    {
        CONST_VTBL struct ITextStoreACPExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ScrollToRect(This,acpStart,acpEnd,rc,dwPosition) )
EXTERN_C const IID IID_ITextStoreAnchorEx;
    typedef struct ITextStoreAnchorExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextStoreAnchorEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextStoreAnchorEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextStoreAnchorEx * This);
        HRESULT ( STDMETHODCALLTYPE *ScrollToRect )(
            __RPC__in ITextStoreAnchorEx * This,
                       __RPC__in_opt IAnchor *pStart,
                       __RPC__in_opt IAnchor *pEnd,
                       RECT rc,
                       DWORD dwPosition);
        END_INTERFACE
    } ITextStoreAnchorExVtbl;
    interface ITextStoreAnchorEx
    {
        CONST_VTBL struct ITextStoreAnchorExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ScrollToRect(This,pStart,pEnd,rc,dwPosition) )
extern RPC_IF_HANDLE __MIDL_itf_msaatext_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msaatext_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_ITextStoreACPSinkEx;
    typedef struct ITextStoreACPSinkExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextStoreACPSinkEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextStoreACPSinkEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextStoreACPSinkEx * This);
        HRESULT ( STDMETHODCALLTYPE *OnTextChange )(
            __RPC__in ITextStoreACPSinkEx * This,
                       DWORD dwFlags,
                       __RPC__in const TS_TEXTCHANGE *pChange);
        HRESULT ( STDMETHODCALLTYPE *OnSelectionChange )(
            __RPC__in ITextStoreACPSinkEx * This);
        HRESULT ( STDMETHODCALLTYPE *OnLayoutChange )(
            __RPC__in ITextStoreACPSinkEx * This,
                       TsLayoutCode lcode,
                       TsViewCookie vcView);
        HRESULT ( STDMETHODCALLTYPE *OnStatusChange )(
            __RPC__in ITextStoreACPSinkEx * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *OnAttrsChange )(
            __RPC__in ITextStoreACPSinkEx * This,
                       LONG acpStart,
                       LONG acpEnd,
                       ULONG cAttrs,
                                __RPC__in_ecount_full(cAttrs) const TS_ATTRID *paAttrs);
        HRESULT ( STDMETHODCALLTYPE *OnLockGranted )(
            __RPC__in ITextStoreACPSinkEx * This,
                       DWORD dwLockFlags);
        HRESULT ( STDMETHODCALLTYPE *OnStartEditTransaction )(
            __RPC__in ITextStoreACPSinkEx * This);
        HRESULT ( STDMETHODCALLTYPE *OnEndEditTransaction )(
            __RPC__in ITextStoreACPSinkEx * This);
        HRESULT ( STDMETHODCALLTYPE *OnDisconnect )(
            __RPC__in ITextStoreACPSinkEx * This);
        END_INTERFACE
    } ITextStoreACPSinkExVtbl;
    interface ITextStoreACPSinkEx
    {
        CONST_VTBL struct ITextStoreACPSinkExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnTextChange(This,dwFlags,pChange) )
    ( (This)->lpVtbl -> OnSelectionChange(This) )
    ( (This)->lpVtbl -> OnLayoutChange(This,lcode,vcView) )
    ( (This)->lpVtbl -> OnStatusChange(This,dwFlags) )
    ( (This)->lpVtbl -> OnAttrsChange(This,acpStart,acpEnd,cAttrs,paAttrs) )
    ( (This)->lpVtbl -> OnLockGranted(This,dwLockFlags) )
    ( (This)->lpVtbl -> OnStartEditTransaction(This) )
    ( (This)->lpVtbl -> OnEndEditTransaction(This) )
    ( (This)->lpVtbl -> OnDisconnect(This) )
EXTERN_C const IID IID_ITextStoreSinkAnchorEx;
    typedef struct ITextStoreSinkAnchorExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextStoreSinkAnchorEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextStoreSinkAnchorEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextStoreSinkAnchorEx * This);
        HRESULT ( STDMETHODCALLTYPE *OnTextChange )(
            __RPC__in ITextStoreSinkAnchorEx * This,
                       DWORD dwFlags,
                       __RPC__in_opt IAnchor *paStart,
                       __RPC__in_opt IAnchor *paEnd);
        HRESULT ( STDMETHODCALLTYPE *OnSelectionChange )(
            __RPC__in ITextStoreSinkAnchorEx * This);
        HRESULT ( STDMETHODCALLTYPE *OnLayoutChange )(
            __RPC__in ITextStoreSinkAnchorEx * This,
                       TsLayoutCode lcode,
                       TsViewCookie vcView);
        HRESULT ( STDMETHODCALLTYPE *OnStatusChange )(
            __RPC__in ITextStoreSinkAnchorEx * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *OnAttrsChange )(
            __RPC__in ITextStoreSinkAnchorEx * This,
                       __RPC__in_opt IAnchor *paStart,
                       __RPC__in_opt IAnchor *paEnd,
                       ULONG cAttrs,
                                __RPC__in_ecount_full(cAttrs) const TS_ATTRID *paAttrs);
        HRESULT ( STDMETHODCALLTYPE *OnLockGranted )(
            __RPC__in ITextStoreSinkAnchorEx * This,
                       DWORD dwLockFlags);
        HRESULT ( STDMETHODCALLTYPE *OnStartEditTransaction )(
            __RPC__in ITextStoreSinkAnchorEx * This);
        HRESULT ( STDMETHODCALLTYPE *OnEndEditTransaction )(
            __RPC__in ITextStoreSinkAnchorEx * This);
        HRESULT ( STDMETHODCALLTYPE *OnDisconnect )(
            __RPC__in ITextStoreSinkAnchorEx * This);
        END_INTERFACE
    } ITextStoreSinkAnchorExVtbl;
    interface ITextStoreSinkAnchorEx
    {
        CONST_VTBL struct ITextStoreSinkAnchorExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnTextChange(This,dwFlags,paStart,paEnd) )
    ( (This)->lpVtbl -> OnSelectionChange(This) )
    ( (This)->lpVtbl -> OnLayoutChange(This,lcode,vcView) )
    ( (This)->lpVtbl -> OnStatusChange(This,dwFlags) )
    ( (This)->lpVtbl -> OnAttrsChange(This,paStart,paEnd,cAttrs,paAttrs) )
    ( (This)->lpVtbl -> OnLockGranted(This,dwLockFlags) )
    ( (This)->lpVtbl -> OnStartEditTransaction(This) )
    ( (This)->lpVtbl -> OnEndEditTransaction(This) )
    ( (This)->lpVtbl -> OnDisconnect(This) )
EXTERN_C const IID IID_IAccDictionary;
    typedef struct IAccDictionaryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccDictionary * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccDictionary * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccDictionary * This);
        HRESULT ( STDMETHODCALLTYPE *GetLocalizedString )(
            __RPC__in IAccDictionary * This,
                       __RPC__in REFGUID Term,
                       LCID lcid,
                        __RPC__deref_out_opt BSTR *pResult,
                        __RPC__out LCID *plcid);
        HRESULT ( STDMETHODCALLTYPE *GetParentTerm )(
            __RPC__in IAccDictionary * This,
                       __RPC__in REFGUID Term,
                        __RPC__out GUID *pParentTerm);
        HRESULT ( STDMETHODCALLTYPE *GetMnemonicString )(
            __RPC__in IAccDictionary * This,
                       __RPC__in REFGUID Term,
                        __RPC__deref_out_opt BSTR *pResult);
        HRESULT ( STDMETHODCALLTYPE *LookupMnemonicTerm )(
            __RPC__in IAccDictionary * This,
                       __RPC__in BSTR bstrMnemonic,
                        __RPC__out GUID *pTerm);
        HRESULT ( STDMETHODCALLTYPE *ConvertValueToString )(
            __RPC__in IAccDictionary * This,
                       __RPC__in REFGUID Term,
                       LCID lcid,
                       VARIANT varValue,
                        __RPC__deref_out_opt BSTR *pbstrResult,
                        __RPC__out LCID *plcid);
        END_INTERFACE
    } IAccDictionaryVtbl;
    interface IAccDictionary
    {
        CONST_VTBL struct IAccDictionaryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLocalizedString(This,Term,lcid,pResult,plcid) )
    ( (This)->lpVtbl -> GetParentTerm(This,Term,pParentTerm) )
    ( (This)->lpVtbl -> GetMnemonicString(This,Term,pResult) )
    ( (This)->lpVtbl -> LookupMnemonicTerm(This,bstrMnemonic,pTerm) )
    ( (This)->lpVtbl -> ConvertValueToString(This,Term,lcid,varValue,pbstrResult,plcid) )
EXTERN_C const IID IID_IVersionInfo;
    typedef struct IVersionInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVersionInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVersionInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVersionInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetSubcomponentCount )(
            __RPC__in IVersionInfo * This,
                       ULONG ulSub,
                        __RPC__out ULONG *ulCount);
        HRESULT ( STDMETHODCALLTYPE *GetImplementationID )(
            __RPC__in IVersionInfo * This,
                       ULONG ulSub,
                        __RPC__out GUID *implid);
        HRESULT ( STDMETHODCALLTYPE *GetBuildVersion )(
            __RPC__in IVersionInfo * This,
                       ULONG ulSub,
                        __RPC__out DWORD *pdwMajor,
                        __RPC__out DWORD *pdwMinor);
        HRESULT ( STDMETHODCALLTYPE *GetComponentDescription )(
            __RPC__in IVersionInfo * This,
                       ULONG ulSub,
                        __RPC__deref_out_opt BSTR *pImplStr);
        HRESULT ( STDMETHODCALLTYPE *GetInstanceDescription )(
            __RPC__in IVersionInfo * This,
                       ULONG ulSub,
                        __RPC__deref_out_opt BSTR *pImplStr);
        END_INTERFACE
    } IVersionInfoVtbl;
    interface IVersionInfo
    {
        CONST_VTBL struct IVersionInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSubcomponentCount(This,ulSub,ulCount) )
    ( (This)->lpVtbl -> GetImplementationID(This,ulSub,implid) )
    ( (This)->lpVtbl -> GetBuildVersion(This,ulSub,pdwMajor,pdwMinor) )
    ( (This)->lpVtbl -> GetComponentDescription(This,ulSub,pImplStr) )
    ( (This)->lpVtbl -> GetInstanceDescription(This,ulSub,pImplStr) )
EXTERN_C const IID IID_ICoCreateLocally;
    typedef struct ICoCreateLocallyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICoCreateLocally * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICoCreateLocally * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICoCreateLocally * This);
        HRESULT ( STDMETHODCALLTYPE *CoCreateLocally )(
            __RPC__in ICoCreateLocally * This,
                       __RPC__in REFCLSID rclsid,
                       DWORD dwClsContext,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **punk,
                       __RPC__in REFIID riidParam,
                               __RPC__in_opt IUnknown *punkParam,
                       VARIANT varParam);
        END_INTERFACE
    } ICoCreateLocallyVtbl;
    interface ICoCreateLocally
    {
        CONST_VTBL struct ICoCreateLocallyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CoCreateLocally(This,rclsid,dwClsContext,riid,punk,riidParam,punkParam,varParam) )
EXTERN_C const IID IID_ICoCreatedLocally;
    typedef struct ICoCreatedLocallyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICoCreatedLocally * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICoCreatedLocally * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICoCreatedLocally * This);
        HRESULT ( STDMETHODCALLTYPE *LocalInit )(
            __RPC__in ICoCreatedLocally * This,
                       __RPC__in_opt IUnknown *punkLocalObject,
                       __RPC__in REFIID riidParam,
                               __RPC__in_opt IUnknown *punkParam,
                       VARIANT varParam);
        END_INTERFACE
    } ICoCreatedLocallyVtbl;
    interface ICoCreatedLocally
    {
        CONST_VTBL struct ICoCreatedLocallyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LocalInit(This,punkLocalObject,riidParam,punkParam,varParam) )
EXTERN_C const IID IID_IAccStore;
    typedef struct IAccStoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccStore * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccStore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccStore * This);
        HRESULT ( STDMETHODCALLTYPE *Register )(
            __RPC__in IAccStore * This,
                       __RPC__in REFIID riid,
                               __RPC__in_opt IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *Unregister )(
            __RPC__in IAccStore * This,
                       __RPC__in_opt IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *GetDocuments )(
            __RPC__in IAccStore * This,
                        __RPC__deref_out_opt IEnumUnknown **enumUnknown);
        HRESULT ( STDMETHODCALLTYPE *LookupByHWND )(
            __RPC__in IAccStore * This,
                       __RPC__in HWND hWnd,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppunk);
        HRESULT ( STDMETHODCALLTYPE *LookupByPoint )(
            __RPC__in IAccStore * This,
                       POINT pt,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppunk);
        HRESULT ( STDMETHODCALLTYPE *OnDocumentFocus )(
            __RPC__in IAccStore * This,
                       __RPC__in_opt IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *GetFocused )(
            __RPC__in IAccStore * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppunk);
        END_INTERFACE
    } IAccStoreVtbl;
    interface IAccStore
    {
        CONST_VTBL struct IAccStoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Register(This,riid,punk) )
    ( (This)->lpVtbl -> Unregister(This,punk) )
    ( (This)->lpVtbl -> GetDocuments(This,enumUnknown) )
    ( (This)->lpVtbl -> LookupByHWND(This,hWnd,riid,ppunk) )
    ( (This)->lpVtbl -> LookupByPoint(This,pt,riid,ppunk) )
    ( (This)->lpVtbl -> OnDocumentFocus(This,punk) )
    ( (This)->lpVtbl -> GetFocused(This,riid,ppunk) )
EXTERN_C const IID IID_IAccServerDocMgr;
    typedef struct IAccServerDocMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccServerDocMgr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccServerDocMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccServerDocMgr * This);
        HRESULT ( STDMETHODCALLTYPE *NewDocument )(
            __RPC__in IAccServerDocMgr * This,
                       __RPC__in REFIID riid,
                               __RPC__in_opt IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *RevokeDocument )(
            __RPC__in IAccServerDocMgr * This,
                       __RPC__in_opt IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *OnDocumentFocus )(
            __RPC__in IAccServerDocMgr * This,
                       __RPC__in_opt IUnknown *punk);
        END_INTERFACE
    } IAccServerDocMgrVtbl;
    interface IAccServerDocMgr
    {
        CONST_VTBL struct IAccServerDocMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NewDocument(This,riid,punk) )
    ( (This)->lpVtbl -> RevokeDocument(This,punk) )
    ( (This)->lpVtbl -> OnDocumentFocus(This,punk) )
EXTERN_C const IID IID_IAccClientDocMgr;
    typedef struct IAccClientDocMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccClientDocMgr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccClientDocMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccClientDocMgr * This);
        HRESULT ( STDMETHODCALLTYPE *GetDocuments )(
            __RPC__in IAccClientDocMgr * This,
                        __RPC__deref_out_opt IEnumUnknown **enumUnknown);
        HRESULT ( STDMETHODCALLTYPE *LookupByHWND )(
            __RPC__in IAccClientDocMgr * This,
                       __RPC__in HWND hWnd,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppunk);
        HRESULT ( STDMETHODCALLTYPE *LookupByPoint )(
            __RPC__in IAccClientDocMgr * This,
                       POINT pt,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppunk);
        HRESULT ( STDMETHODCALLTYPE *GetFocused )(
            __RPC__in IAccClientDocMgr * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppunk);
        END_INTERFACE
    } IAccClientDocMgrVtbl;
    interface IAccClientDocMgr
    {
        CONST_VTBL struct IAccClientDocMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDocuments(This,enumUnknown) )
    ( (This)->lpVtbl -> LookupByHWND(This,hWnd,riid,ppunk) )
    ( (This)->lpVtbl -> LookupByPoint(This,pt,riid,ppunk) )
    ( (This)->lpVtbl -> GetFocused(This,riid,ppunk) )
EXTERN_C const IID IID_IDocWrap;
    typedef struct IDocWrapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDocWrap * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDocWrap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDocWrap * This);
        HRESULT ( STDMETHODCALLTYPE *SetDoc )(
            __RPC__in IDocWrap * This,
                       __RPC__in REFIID riid,
                               __RPC__in_opt IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *GetWrappedDoc )(
            __RPC__in IDocWrap * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppunk);
        END_INTERFACE
    } IDocWrapVtbl;
    interface IDocWrap
    {
        CONST_VTBL struct IDocWrapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDoc(This,riid,punk) )
    ( (This)->lpVtbl -> GetWrappedDoc(This,riid,ppunk) )
EXTERN_C const IID IID_IClonableWrapper;
    typedef struct IClonableWrapperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IClonableWrapper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IClonableWrapper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IClonableWrapper * This);
        HRESULT ( STDMETHODCALLTYPE *CloneNewWrapper )(
            __RPC__in IClonableWrapper * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IClonableWrapperVtbl;
    interface IClonableWrapper
    {
        CONST_VTBL struct IClonableWrapperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CloneNewWrapper(This,riid,ppv) )
EXTERN_C const IID LIBID_MSAATEXTLib;
EXTERN_C const CLSID CLSID_MSAAControl;
class DECLSPEC_UUID("08cd963f-7a3e-4f5c-9bd8-d692bb043c5b")
MSAAControl;
EXTERN_C const CLSID CLSID_AccStore;
class DECLSPEC_UUID("5440837F-4BFF-4AE5-A1B1-7722ECC6332A")
AccStore;
EXTERN_C const CLSID CLSID_AccDictionary;
class DECLSPEC_UUID("6572EE16-5FE5-4331-BB6D-76A49C56E423")
AccDictionary;
EXTERN_C const CLSID CLSID_AccServerDocMgr;
class DECLSPEC_UUID("6089A37E-EB8A-482D-BD6F-F9F46904D16D")
AccServerDocMgr;
EXTERN_C const CLSID CLSID_AccClientDocMgr;
class DECLSPEC_UUID("FC48CC30-4F3E-4fa1-803B-AD0E196A83B1")
AccClientDocMgr;
EXTERN_C const CLSID CLSID_DocWrap;
class DECLSPEC_UUID("BF426F7E-7A5E-44D6-830C-A390EA9462A3")
DocWrap;
DEFINE_GUID(IID_ITextStoreACP, 0x28888fe3,0xc2a0,0x483a,0xa3,0xea,0x8c,0xb1,0xce,0x51,0xff,0x3d);
DEFINE_GUID(IID_ITextStoreAnchor, 0x9b2077b0,0x5f18,0x4dec,0xbe,0xe9,0x3c,0xc7,0x22,0xf5,0xdf,0xe0);
DEFINE_GUID(IID_IAnchor, 0x0feb7e34,0x5a60,0x4356,0x8e,0xf7,0xab,0xde,0xc2,0xff,0x7c,0xf8);
DEFINE_GUID(IID_ITextStoreAnchorSink, 0xaa80e905,0x2021,0x11d2,0x93,0xe0,0x00,0x60,0xb0,0x67,0xb8,0x6e);
DEFINE_GUID(IID_ITextStoreACPSink, 0x22d44c94,0xa419,0x4542,0xa2,0x72,0xae,0x26,0x09,0x3e,0xce,0xcf);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msaatext_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msaatext_0000_0016_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
