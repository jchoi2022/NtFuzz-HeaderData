#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWMPEffects IWMPEffects;
typedef interface IWMPEffects2 IWMPEffects2;
#include "oaidl.h"
#include "ocidl.h"
#include "wmp.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
enum PlayerState
    {
        stop_state = 0,
        pause_state = 1,
        play_state = 2
    } ;
static const float kfltTimedLevelMaximumFrequency = 22050.0F;
static const float kfltTimedLevelMinimumFrequency = 20.0F;
  (int)(((FREQ) - kfltTimedLevelMinimumFrequency) /\
    (((kfltTimedLevelMaximumFrequency - kfltTimedLevelMinimumFrequency) / SA_BUFFER_SIZE)))
typedef struct tagTimedLevel
    {
    unsigned char frequency[ 2 ][ 1024 ];
    unsigned char waveform[ 2 ][ 1024 ];
    int state;
    hyper timeStamp;
    } TimedLevel;
extern RPC_IF_HANDLE __MIDL_itf_effectspri_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_effectspri_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPEffects;
    typedef struct IWMPEffectsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPEffects * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPEffects * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPEffects * This);
                                  HRESULT ( STDMETHODCALLTYPE *Render )(
            IWMPEffects * This,
                       TimedLevel *pLevels,
                       HDC hdc,
                       RECT *prc);
                           HRESULT ( STDMETHODCALLTYPE *MediaInfo )(
            IWMPEffects * This,
                       LONG lChannelCount,
                       LONG lSampleRate,
                       BSTR bstrTitle);
                           HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            IWMPEffects * This,
                        DWORD *pdwCapabilities);
                           HRESULT ( STDMETHODCALLTYPE *GetTitle )(
            IWMPEffects * This,
                        BSTR *bstrTitle);
                           HRESULT ( STDMETHODCALLTYPE *GetPresetTitle )(
            IWMPEffects * This,
                       LONG nPreset,
                        BSTR *bstrPresetTitle);
                           HRESULT ( STDMETHODCALLTYPE *GetPresetCount )(
            IWMPEffects * This,
                        LONG *pnPresetCount);
                           HRESULT ( STDMETHODCALLTYPE *SetCurrentPreset )(
            IWMPEffects * This,
                       LONG nPreset);
                           HRESULT ( STDMETHODCALLTYPE *GetCurrentPreset )(
            IWMPEffects * This,
                        LONG *pnPreset);
                           HRESULT ( STDMETHODCALLTYPE *DisplayPropertyPage )(
            IWMPEffects * This,
                       HWND hwndOwner);
                           HRESULT ( STDMETHODCALLTYPE *GoFullscreen )(
            IWMPEffects * This,
                       BOOL fFullScreen);
                           HRESULT ( STDMETHODCALLTYPE *RenderFullScreen )(
            IWMPEffects * This,
                       TimedLevel *pLevels);
        END_INTERFACE
    } IWMPEffectsVtbl;
    interface IWMPEffects
    {
        CONST_VTBL struct IWMPEffectsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Render(This,pLevels,hdc,prc) )
    ( (This)->lpVtbl -> MediaInfo(This,lChannelCount,lSampleRate,bstrTitle) )
    ( (This)->lpVtbl -> GetCapabilities(This,pdwCapabilities) )
    ( (This)->lpVtbl -> GetTitle(This,bstrTitle) )
    ( (This)->lpVtbl -> GetPresetTitle(This,nPreset,bstrPresetTitle) )
    ( (This)->lpVtbl -> GetPresetCount(This,pnPresetCount) )
    ( (This)->lpVtbl -> SetCurrentPreset(This,nPreset) )
    ( (This)->lpVtbl -> GetCurrentPreset(This,pnPreset) )
    ( (This)->lpVtbl -> DisplayPropertyPage(This,hwndOwner) )
    ( (This)->lpVtbl -> GoFullscreen(This,fFullScreen) )
    ( (This)->lpVtbl -> RenderFullScreen(This,pLevels) )
EXTERN_C const IID IID_IWMPEffects2;
    typedef struct IWMPEffects2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPEffects2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPEffects2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPEffects2 * This);
                                  HRESULT ( STDMETHODCALLTYPE *Render )(
            IWMPEffects2 * This,
                       TimedLevel *pLevels,
                       HDC hdc,
                       RECT *prc);
                           HRESULT ( STDMETHODCALLTYPE *MediaInfo )(
            IWMPEffects2 * This,
                       LONG lChannelCount,
                       LONG lSampleRate,
                       BSTR bstrTitle);
                           HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            IWMPEffects2 * This,
                        DWORD *pdwCapabilities);
                           HRESULT ( STDMETHODCALLTYPE *GetTitle )(
            IWMPEffects2 * This,
                        BSTR *bstrTitle);
                           HRESULT ( STDMETHODCALLTYPE *GetPresetTitle )(
            IWMPEffects2 * This,
                       LONG nPreset,
                        BSTR *bstrPresetTitle);
                           HRESULT ( STDMETHODCALLTYPE *GetPresetCount )(
            IWMPEffects2 * This,
                        LONG *pnPresetCount);
                           HRESULT ( STDMETHODCALLTYPE *SetCurrentPreset )(
            IWMPEffects2 * This,
                       LONG nPreset);
                           HRESULT ( STDMETHODCALLTYPE *GetCurrentPreset )(
            IWMPEffects2 * This,
                        LONG *pnPreset);
                           HRESULT ( STDMETHODCALLTYPE *DisplayPropertyPage )(
            IWMPEffects2 * This,
                       HWND hwndOwner);
                           HRESULT ( STDMETHODCALLTYPE *GoFullscreen )(
            IWMPEffects2 * This,
                       BOOL fFullScreen);
                           HRESULT ( STDMETHODCALLTYPE *RenderFullScreen )(
            IWMPEffects2 * This,
                       TimedLevel *pLevels);
        HRESULT ( STDMETHODCALLTYPE *SetCore )(
            IWMPEffects2 * This,
                       IWMPCore *pPlayer);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            IWMPEffects2 * This,
                       HWND hwndParent);
        HRESULT ( STDMETHODCALLTYPE *Destroy )(
            IWMPEffects2 * This);
        HRESULT ( STDMETHODCALLTYPE *NotifyNewMedia )(
            IWMPEffects2 * This,
                       IWMPMedia *pMedia);
        HRESULT ( STDMETHODCALLTYPE *OnWindowMessage )(
            IWMPEffects2 * This,
                       UINT msg,
                       WPARAM WParam,
                       LPARAM LParam,
                       LRESULT *plResultParam);
        HRESULT ( STDMETHODCALLTYPE *RenderWindowed )(
            IWMPEffects2 * This,
                       TimedLevel *pData,
                       BOOL fRequiredRender);
        END_INTERFACE
    } IWMPEffects2Vtbl;
    interface IWMPEffects2
    {
        CONST_VTBL struct IWMPEffects2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Render(This,pLevels,hdc,prc) )
    ( (This)->lpVtbl -> MediaInfo(This,lChannelCount,lSampleRate,bstrTitle) )
    ( (This)->lpVtbl -> GetCapabilities(This,pdwCapabilities) )
    ( (This)->lpVtbl -> GetTitle(This,bstrTitle) )
    ( (This)->lpVtbl -> GetPresetTitle(This,nPreset,bstrPresetTitle) )
    ( (This)->lpVtbl -> GetPresetCount(This,pnPresetCount) )
    ( (This)->lpVtbl -> SetCurrentPreset(This,nPreset) )
    ( (This)->lpVtbl -> GetCurrentPreset(This,pnPreset) )
    ( (This)->lpVtbl -> DisplayPropertyPage(This,hwndOwner) )
    ( (This)->lpVtbl -> GoFullscreen(This,fFullScreen) )
    ( (This)->lpVtbl -> RenderFullScreen(This,pLevels) )
    ( (This)->lpVtbl -> SetCore(This,pPlayer) )
    ( (This)->lpVtbl -> Create(This,hwndParent) )
    ( (This)->lpVtbl -> Destroy(This) )
    ( (This)->lpVtbl -> NotifyNewMedia(This,pMedia) )
    ( (This)->lpVtbl -> OnWindowMessage(This,msg,WParam,LParam,plResultParam) )
    ( (This)->lpVtbl -> RenderWindowed(This,pData,fRequiredRender) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_effectspri_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_effectspri_0000_0002_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( unsigned long *, unsigned long , BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( unsigned long *, unsigned char *, BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * );
void __RPC_USER BSTR_UserFree( unsigned long *, BSTR * );
unsigned long __RPC_USER HWND_UserSize( unsigned long *, unsigned long , HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( unsigned long *, unsigned char *, HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * );
void __RPC_USER HWND_UserFree( unsigned long *, HWND * );
}
