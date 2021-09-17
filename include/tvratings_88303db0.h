#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IXDSToRat IXDSToRat;
typedef interface IEvalRat IEvalRat;
typedef class XDSToRat XDSToRat;
typedef class EvalRat EvalRat;
#include "oaidl.h"
#include "ocidl.h"
#include "encdec.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_tvratings_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tvratings_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IXDSToRat;
    typedef struct IXDSToRatVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXDSToRat * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXDSToRat * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXDSToRat * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IXDSToRat * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IXDSToRat * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IXDSToRat * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXDSToRat * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Init )(
            __RPC__in IXDSToRat * This);
                               HRESULT ( STDMETHODCALLTYPE *ParseXDSBytePair )(
            __RPC__in IXDSToRat * This,
                       BYTE byte1,
                       BYTE byte2,
                        __RPC__out EnTvRat_System *pEnSystem,
                        __RPC__out EnTvRat_GenericLevel *pEnLevel,
                        __RPC__out LONG *plBfEnAttributes);
        END_INTERFACE
    } IXDSToRatVtbl;
    interface IXDSToRat
    {
        CONST_VTBL struct IXDSToRatVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Init(This) )
    ( (This)->lpVtbl -> ParseXDSBytePair(This,byte1,byte2,pEnSystem,pEnLevel,plBfEnAttributes) )
EXTERN_C const IID IID_IEvalRat;
    typedef struct IEvalRatVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEvalRat * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEvalRat * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEvalRat * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IEvalRat * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IEvalRat * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IEvalRat * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEvalRat * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockedRatingAttributes )(
            __RPC__in IEvalRat * This,
                       EnTvRat_System enSystem,
                       EnTvRat_GenericLevel enLevel,
                                __RPC__out LONG *plbfAttrs);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockedRatingAttributes )(
            __RPC__in IEvalRat * This,
                       EnTvRat_System enSystem,
                       EnTvRat_GenericLevel enLevel,
                       LONG lbfAttrs);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockUnRated )(
            __RPC__in IEvalRat * This,
                                __RPC__out BOOL *pfBlockUnRatedShows);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockUnRated )(
            __RPC__in IEvalRat * This,
                       BOOL fBlockUnRatedShows);
                               HRESULT ( STDMETHODCALLTYPE *MostRestrictiveRating )(
            __RPC__in IEvalRat * This,
                       EnTvRat_System enSystem1,
                       EnTvRat_GenericLevel enEnLevel1,
                       LONG lbfEnAttr1,
                       EnTvRat_System enSystem2,
                       EnTvRat_GenericLevel enEnLevel2,
                       LONG lbfEnAttr2,
                        __RPC__out EnTvRat_System *penSystem,
                        __RPC__out EnTvRat_GenericLevel *penEnLevel,
                        __RPC__out LONG *plbfEnAttr);
                               HRESULT ( STDMETHODCALLTYPE *TestRating )(
            __RPC__in IEvalRat * This,
                       EnTvRat_System enShowSystem,
                       EnTvRat_GenericLevel enShowLevel,
                       LONG lbfEnShowAttributes);
        END_INTERFACE
    } IEvalRatVtbl;
    interface IEvalRat
    {
        CONST_VTBL struct IEvalRatVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_BlockedRatingAttributes(This,enSystem,enLevel,plbfAttrs) )
    ( (This)->lpVtbl -> put_BlockedRatingAttributes(This,enSystem,enLevel,lbfAttrs) )
    ( (This)->lpVtbl -> get_BlockUnRated(This,pfBlockUnRatedShows) )
    ( (This)->lpVtbl -> put_BlockUnRated(This,fBlockUnRatedShows) )
    ( (This)->lpVtbl -> MostRestrictiveRating(This,enSystem1,enEnLevel1,lbfEnAttr1,enSystem2,enEnLevel2,lbfEnAttr2,penSystem,penEnLevel,plbfEnAttr) )
    ( (This)->lpVtbl -> TestRating(This,enShowSystem,enShowLevel,lbfEnShowAttributes) )
EXTERN_C const IID LIBID_TVRATINGSLib;
EXTERN_C const CLSID CLSID_XDSToRat;
class DECLSPEC_UUID("C5C5C5F0-3ABC-11D6-B25B-00C04FA0C026")
XDSToRat;
EXTERN_C const CLSID CLSID_EvalRat;
class DECLSPEC_UUID("C5C5C5F1-3ABC-11D6-B25B-00C04FA0C026")
EvalRat;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tvratings_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tvratings_0000_0003_v0_0_s_ifspec;
}
