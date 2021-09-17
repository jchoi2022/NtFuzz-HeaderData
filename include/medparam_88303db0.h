#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMediaParamInfo IMediaParamInfo;
typedef interface IMediaParams IMediaParams;
#include "oaidl.h"
#include "ocidl.h"
#include "strmif.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef float MP_DATA;
typedef
enum _MP_Type
    {
        MPT_INT = 0,
        MPT_FLOAT = ( MPT_INT + 1 ) ,
        MPT_BOOL = ( MPT_FLOAT + 1 ) ,
        MPT_ENUM = ( MPT_BOOL + 1 ) ,
        MPT_MAX = ( MPT_ENUM + 1 )
    } MP_TYPE;
typedef
enum _MP_CURVE_TYPE
    {
        MP_CURVE_JUMP = 0x1,
        MP_CURVE_LINEAR = 0x2,
        MP_CURVE_SQUARE = 0x4,
        MP_CURVE_INVSQUARE = 0x8,
        MP_CURVE_SINE = 0x10
    } MP_CURVE_TYPE;
typedef DWORD MP_CAPS;
typedef struct _MP_PARAMINFO
    {
    MP_TYPE mpType;
    MP_CAPS mopCaps;
    MP_DATA mpdMinValue;
    MP_DATA mpdMaxValue;
    MP_DATA mpdNeutralValue;
    WCHAR szUnitText[ 32 ];
    WCHAR szLabel[ 32 ];
    } MP_PARAMINFO;
typedef DWORD DWORD;
typedef DWORD MP_TIMEDATA;
DEFINE_GUID(GUID_TIME_REFERENCE,
0x93ad712b, 0xdaa0, 0x4ffe, 0xbc, 0x81, 0xb0, 0xce, 0x50, 0xf, 0xcd, 0xd9);
DEFINE_GUID(GUID_TIME_MUSIC,
0x574c49d, 0x5b04, 0x4b15, 0xa5, 0x42, 0xae, 0x28, 0x20, 0x30, 0x11, 0x7b);
DEFINE_GUID(GUID_TIME_SAMPLES,
0xa8593d05, 0xc43, 0x4984, 0x9a, 0x63, 0x97, 0xaf, 0x9e, 0x2, 0xc4, 0xc0);
typedef DWORD MP_FLAGS;
typedef struct _MP_ENVELOPE_SEGMENT
    {
    REFERENCE_TIME rtStart;
    REFERENCE_TIME rtEnd;
    MP_DATA valStart;
    MP_DATA valEnd;
    MP_CURVE_TYPE iCurve;
    MP_FLAGS flags;
    } MP_ENVELOPE_SEGMENT;
extern RPC_IF_HANDLE __MIDL_itf_medparam_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_medparam_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMediaParamInfo;
    typedef struct IMediaParamInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMediaParamInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMediaParamInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMediaParamInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetParamCount )(
            __RPC__in IMediaParamInfo * This,
                        __RPC__out DWORD *pdwParams);
        HRESULT ( STDMETHODCALLTYPE *GetParamInfo )(
            __RPC__in IMediaParamInfo * This,
                       DWORD dwParamIndex,
                        __RPC__out MP_PARAMINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *GetParamText )(
            __RPC__in IMediaParamInfo * This,
                       DWORD dwParamIndex,
                        __RPC__deref_out_opt WCHAR **ppwchText);
        HRESULT ( STDMETHODCALLTYPE *GetNumTimeFormats )(
            __RPC__in IMediaParamInfo * This,
                        __RPC__out DWORD *pdwNumTimeFormats);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedTimeFormat )(
            __RPC__in IMediaParamInfo * This,
                       DWORD dwFormatIndex,
                        __RPC__out GUID *pguidTimeFormat);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentTimeFormat )(
            __RPC__in IMediaParamInfo * This,
                        __RPC__out GUID *pguidTimeFormat,
                        __RPC__out MP_TIMEDATA *pTimeData);
        END_INTERFACE
    } IMediaParamInfoVtbl;
    interface IMediaParamInfo
    {
        CONST_VTBL struct IMediaParamInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetParamCount(This,pdwParams) )
    ( (This)->lpVtbl -> GetParamInfo(This,dwParamIndex,pInfo) )
    ( (This)->lpVtbl -> GetParamText(This,dwParamIndex,ppwchText) )
    ( (This)->lpVtbl -> GetNumTimeFormats(This,pdwNumTimeFormats) )
    ( (This)->lpVtbl -> GetSupportedTimeFormat(This,dwFormatIndex,pguidTimeFormat) )
    ( (This)->lpVtbl -> GetCurrentTimeFormat(This,pguidTimeFormat,pTimeData) )
EXTERN_C const IID IID_IMediaParams;
    typedef struct IMediaParamsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMediaParams * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMediaParams * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMediaParams * This);
        HRESULT ( STDMETHODCALLTYPE *GetParam )(
            __RPC__in IMediaParams * This,
                       DWORD dwParamIndex,
                        __RPC__out MP_DATA *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetParam )(
            __RPC__in IMediaParams * This,
                       DWORD dwParamIndex,
                       MP_DATA value);
        HRESULT ( STDMETHODCALLTYPE *AddEnvelope )(
            __RPC__in IMediaParams * This,
                       DWORD dwParamIndex,
                       DWORD cSegments,
                       __RPC__in MP_ENVELOPE_SEGMENT *pEnvelopeSegments);
        HRESULT ( STDMETHODCALLTYPE *FlushEnvelope )(
            __RPC__in IMediaParams * This,
                       DWORD dwParamIndex,
                       REFERENCE_TIME refTimeStart,
                       REFERENCE_TIME refTimeEnd);
        HRESULT ( STDMETHODCALLTYPE *SetTimeFormat )(
            __RPC__in IMediaParams * This,
                       GUID guidTimeFormat,
                       MP_TIMEDATA mpTimeData);
        END_INTERFACE
    } IMediaParamsVtbl;
    interface IMediaParams
    {
        CONST_VTBL struct IMediaParamsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetParam(This,dwParamIndex,pValue) )
    ( (This)->lpVtbl -> SetParam(This,dwParamIndex,value) )
    ( (This)->lpVtbl -> AddEnvelope(This,dwParamIndex,cSegments,pEnvelopeSegments) )
    ( (This)->lpVtbl -> FlushEnvelope(This,dwParamIndex,refTimeStart,refTimeEnd) )
    ( (This)->lpVtbl -> SetTimeFormat(This,guidTimeFormat,mpTimeData) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_medparam_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_medparam_0000_0002_v0_0_s_ifspec;
}
