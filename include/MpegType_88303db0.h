#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct tagAM_MPEGSTREAMTYPE
{
    DWORD dwStreamId;
    DWORD dwReserved;
    AM_MEDIA_TYPE mt;
    BYTE bFormat[1];
} AM_MPEGSTREAMTYPE;
typedef struct tagAM_MPEGSYSTEMTYPE
{
    DWORD dwBitRate;
    DWORD cStreams;
    AM_MPEGSTREAMTYPE Streams[1];
} AM_MPEGSYSTEMTYPE;
    FIELD_OFFSET(AM_MPEGSTREAMTYPE, bFormat[(pStreamType)->mt.cbFormat])
    ((AM_MPEGSTREAMTYPE *)((PBYTE)(pStreamType) + \
     ((AM_MPEGSTREAMTYPE_ELEMENTLENGTH(pStreamType) + 7) & ~7)))
DECLARE_INTERFACE_(IMpegAudioDecoder, IUnknown) {
    STDMETHOD(get_FrequencyDivider) (THIS_
                           _Out_ unsigned long *pDivider
                           ) PURE;
    STDMETHOD(put_FrequencyDivider) (THIS_
                           unsigned long Divider
                           ) PURE;
    STDMETHOD(get_DecoderAccuracy) (THIS_
                           _Out_ unsigned long *pAccuracy
                           ) PURE;
    STDMETHOD(put_DecoderAccuracy) (THIS_
                           unsigned long Accuracy
                           ) PURE;
    STDMETHOD(get_Stereo) (THIS_
                           _Out_ unsigned long *pStereo
                           ) PURE;
    STDMETHOD(put_Stereo) (THIS_
                           unsigned long Stereo
                           ) PURE;
    STDMETHOD(get_DecoderWordSize) (THIS_
                           _Out_ unsigned long *pWordSize
                           ) PURE;
    STDMETHOD(put_DecoderWordSize) (THIS_
                           unsigned long WordSize
                           ) PURE;
    STDMETHOD(get_IntegerDecode) (THIS_
                           _Out_ unsigned long *pIntDecode
                           ) PURE;
    STDMETHOD(put_IntegerDecode) (THIS_
                           unsigned long IntDecode
                           ) PURE;
    STDMETHOD(get_DualMode) (THIS_
                           unsigned long *pIntDecode
                           ) PURE;
    STDMETHOD(put_DualMode) (THIS_
                           unsigned long IntDecode
                           ) PURE;
    STDMETHOD(get_AudioFormat) (THIS_
                           _Out_ MPEG1WAVEFORMAT *lpFmt
                           ) PURE;
};
}
#endif
#pragma endregion
