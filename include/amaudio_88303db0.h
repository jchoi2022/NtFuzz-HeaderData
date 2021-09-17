#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
#include <mmsystem.h>
#include <dsound.h>
DECLARE_INTERFACE_(IAMDirectSound,IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID *ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(GetDirectSoundInterface)(THIS_ LPDIRECTSOUND *lplpds) PURE;
    STDMETHOD(GetPrimaryBufferInterface)(THIS_ LPDIRECTSOUNDBUFFER *lplpdsb) PURE;
    STDMETHOD(GetSecondaryBufferInterface)(THIS_ LPDIRECTSOUNDBUFFER *lplpdsb) PURE;
    STDMETHOD(ReleaseDirectSoundInterface)(THIS_ LPDIRECTSOUND lpds) PURE;
    STDMETHOD(ReleasePrimaryBufferInterface)(THIS_ LPDIRECTSOUNDBUFFER lpdsb) PURE;
    STDMETHOD(ReleaseSecondaryBufferInterface)(THIS_ LPDIRECTSOUNDBUFFER lpdsb) PURE;
    STDMETHOD(SetFocusWindow)(THIS_ HWND, BOOL) PURE ;
    STDMETHOD(GetFocusWindow)(THIS_ HWND *, BOOL*) PURE ;
};
__inline HRESULT AMValidateAndFixWaveFormatEx(_Inout_updates_bytes_(cb) WAVEFORMATEX *pwfx, DWORD cb)
{
    if (cb < sizeof(PCMWAVEFORMAT)) {
        return E_INVALIDARG;
    }
    if (pwfx->wFormatTag != WAVE_FORMAT_PCM) {
        if (cb < sizeof(WAVEFORMATEX)) {
            return E_INVALIDARG;
        }
        if (cb < sizeof(WAVEFORMATEX) + pwfx->cbSize ) {
            pwfx->cbSize = 0;
        }
    }
    if (pwfx->nAvgBytesPerSec > 10000000 || pwfx->nAvgBytesPerSec == 0) {
        pwfx->nAvgBytesPerSec = 176400;
    }
    if (pwfx->nChannels > 32) {
        pwfx->nChannels = 1;
    }
    return S_OK;
}
}
#endif
#pragma endregion
