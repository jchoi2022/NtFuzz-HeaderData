#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAttributeSet IAttributeSet;
typedef interface IAttributeGet IAttributeGet;
#include "unknwn.h"
#include "objidl.h"
#include "strmif.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_dsattrib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dsattrib_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAttributeSet;
    typedef struct IAttributeSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAttributeSet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAttributeSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAttributeSet * This);
        HRESULT ( STDMETHODCALLTYPE *SetAttrib )(
            __RPC__in IAttributeSet * This,
                       GUID guidAttribute,
                       __RPC__in BYTE *pbAttribute,
                       DWORD dwAttributeLength);
        END_INTERFACE
    } IAttributeSetVtbl;
    interface IAttributeSet
    {
        CONST_VTBL struct IAttributeSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAttrib(This,guidAttribute,pbAttribute,dwAttributeLength) )
EXTERN_C const IID IID_IAttributeGet;
    typedef struct IAttributeGetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAttributeGet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAttributeGet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAttributeGet * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IAttributeGet * This,
                        __RPC__out LONG *plCount);
        HRESULT ( STDMETHODCALLTYPE *GetAttribIndexed )(
            __RPC__in IAttributeGet * This,
                       LONG lIndex,
                        __RPC__out GUID *pguidAttribute,
                            __RPC__inout BYTE *pbAttribute,
                            __RPC__inout DWORD *pdwAttributeLength);
        HRESULT ( STDMETHODCALLTYPE *GetAttrib )(
            __RPC__in IAttributeGet * This,
                       GUID guidAttribute,
                            __RPC__inout BYTE *pbAttribute,
                            __RPC__inout DWORD *pdwAttributeLength);
        END_INTERFACE
    } IAttributeGetVtbl;
    interface IAttributeGet
    {
        CONST_VTBL struct IAttributeGetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,plCount) )
    ( (This)->lpVtbl -> GetAttribIndexed(This,lIndex,pguidAttribute,pbAttribute,pdwAttributeLength) )
    ( (This)->lpVtbl -> GetAttrib(This,guidAttribute,pbAttribute,pdwAttributeLength) )
typedef struct _UDCR_TAG {
    BYTE bVersion ;
    BYTE KID [24 + 1] ;
    ULONGLONG ullBaseCounter ;
    ULONGLONG ullBaseCounterRange ;
    BOOL fScrambled ;
    BYTE bStreamMark ;
    DWORD dwReserved1 ;
    DWORD dwReserved2 ;
} UDCR_TAG ;
typedef struct _PIC_SEQ_SAMPLE {
    DWORD
      Content : 3,
      Start : 1,
      FrameRate : 4,
      InvalidVA : 1,
      Reserved : 19,
      Version : 4 ;
} PIC_SEQ_SAMPLE, *PPIC_SEQ_SAMPLE ;
typedef struct _SAMPLE_SEQ_OFFSET {
    DWORD
      Type : 4,
      Offset : 20,
      Reserved : 8 ;
} SAMPLE_SEQ_OFFSET ;
    ((attr_len - sizeof (PIC_SEQ_SAMPLE)) / sizeof (SAMPLE_SEQ_OFFSET))
typedef enum VA_VIDEO_FORMAT
{
    VA_VIDEO_COMPONENT = 0,
    VA_VIDEO_PAL = 1,
    VA_VIDEO_NTSC = 2,
    VA_VIDEO_SECAM = 3,
    VA_VIDEO_MAC = 4,
    VA_VIDEO_UNSPECIFIED = 5
} VA_VIDEO_FORMAT;
typedef enum VA_COLOR_PRIMARIES
{
    VA_PRIMARIES_ITU_R_BT_709 = 1,
    VA_PRIMARIES_UNSPECIFIED = 2,
    VA_PRIMARIES_ITU_R_BT_470_SYSTEM_M = 4,
    VA_PRIMARIES_ITU_R_BT_470_SYSTEM_B_G = 5,
    VA_PRIMARIES_SMPTE_170M = 6,
    VA_PRIMARIES_SMPTE_240M = 7,
    VA_PRIMARIES_H264_GENERIC_FILM = 8
} VA_COLOR_PRIMARIES;
typedef enum VA_TRANSFER_CHARACTERISTICS
{
    VA_TRANSFER_CHARACTERISTICS_ITU_R_BT_709 = 1,
    VA_TRANSFER_CHARACTERISTICS_UNSPECIFIED = 2,
    VA_TRANSFER_CHARACTERISTICS_ITU_R_BT_470_SYSTEM_M = 4,
    VA_TRANSFER_CHARACTERISTICS_ITU_R_BT_470_SYSTEM_B_G = 5,
    VA_TRANSFER_CHARACTERISTICS_SMPTE_170M = 6,
    VA_TRANSFER_CHARACTERISTICS_SMPTE_240M = 7,
    VA_TRANSFER_CHARACTERISTICS_LINEAR = 8,
    VA_TRANSFER_CHARACTERISTICS_H264_LOG_100_TO_1 = 9,
    VA_TRANSFER_CHARACTERISTICS_H264_LOG_316_TO_1 = 10
} VA_TRANSFER_CHARACTERISTICS;
typedef enum VA_MATRIX_COEFFICIENTS
{
    VA_MATRIX_COEFF_H264_RGB = 0,
    VA_MATRIX_COEFF_ITU_R_BT_709 = 1,
    VA_MATRIX_COEFF_UNSPECIFIED = 2,
    VA_MATRIX_COEFF_FCC = 4,
    VA_MATRIX_COEFF_ITU_R_BT_470_SYSTEM_B_G = 5,
    VA_MATRIX_COEFF_SMPTE_170M = 6,
    VA_MATRIX_COEFF_SMPTE_240M = 7,
    VA_MATRIX_COEFF_H264_YCgCo = 8
} VA_MATRIX_COEFFICIENTS;
typedef struct VA_OPTIONAL_VIDEO_PROPERTIES
{
    WORD dwPictureHeight ;
    WORD dwPictureWidth ;
    WORD dwAspectRatioX ;
    WORD dwAspectRatioY ;
    VA_VIDEO_FORMAT VAVideoFormat;
    VA_COLOR_PRIMARIES VAColorPrimaries;
    VA_TRANSFER_CHARACTERISTICS VATransferCharacteristics;
    VA_MATRIX_COEFFICIENTS VAMatrixCoefficients;
} VA_OPTIONAL_VIDEO_PROPERTIES;
typedef struct _TRANSPORT_PROPERTIES {
    ULONG PID ;
    REFERENCE_TIME PCR ;
    union {
        struct _Others {
            LONGLONG
                TransportScramblingControl : 8 ,
                Reserved : 56 ;
        } Others ;
        LONGLONG Value ;
    } Fields ;
} TRANSPORT_PROPERTIES ;
typedef struct _PBDA_TAG_ATTRIBUTE {
    GUID TableUUId ;
    BYTE TableId ;
    WORD VersionNo ;
    DWORD TableDataSize ;
    BYTE TableData [1] ;
} PBDA_TAG_ATTRIBUTE ;
typedef struct _CAPTURE_STREAMTIME {
    REFERENCE_TIME StreamTime ;
} CAPTURE_STREAMTIME ;
typedef struct _DSHOW_STREAM_DESC {
    DWORD VersionNo ;
    DWORD StreamId ;
    BOOL Default ;
    BOOL Creation ;
    DWORD Reserved ;
} DSHOW_STREAM_DESC ;
typedef struct _SAMPLE_LIVE_STREAM_TIME{
    ULONGLONG qwStreamTime;
    ULONGLONG qwLiveTime;
}SAMPLE_LIVE_STREAM_TIME ;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_dsattrib_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dsattrib_0000_0002_v0_0_s_ifspec;
}
