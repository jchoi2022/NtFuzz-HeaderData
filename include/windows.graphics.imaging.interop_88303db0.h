#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISoftwareBitmapNative ISoftwareBitmapNative;
typedef interface ISoftwareBitmapNativeFactory ISoftwareBitmapNativeFactory;
#include "Inspectable.h"
#include "mfobjects.h"
#include "Wincodec.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern const __declspec(selectany) CLSID CLSID_SoftwareBitmapNativeFactory = { 0x84e65691, 0x8602, 0x4a84, { 0xbe, 0x46, 0x70, 0x8b, 0xe9, 0xcd, 0x4b, 0x74 } };
extern RPC_IF_HANDLE __MIDL_itf_windows2Egraphics2Eimaging2Einterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egraphics2Eimaging2Einterop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISoftwareBitmapNative;
    typedef struct ISoftwareBitmapNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISoftwareBitmapNative * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISoftwareBitmapNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISoftwareBitmapNative * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            ISoftwareBitmapNative * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            ISoftwareBitmapNative * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            ISoftwareBitmapNative * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            ISoftwareBitmapNative * This,
            _In_ REFIID riid,
            _COM_Outptr_ LPVOID *ppv);
        END_INTERFACE
    } ISoftwareBitmapNativeVtbl;
    interface ISoftwareBitmapNative
    {
        CONST_VTBL struct ISoftwareBitmapNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetData(This,riid,ppv) )
EXTERN_C const IID IID_ISoftwareBitmapNativeFactory;
    typedef struct ISoftwareBitmapNativeFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISoftwareBitmapNativeFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISoftwareBitmapNativeFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISoftwareBitmapNativeFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            ISoftwareBitmapNativeFactory * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            ISoftwareBitmapNativeFactory * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            ISoftwareBitmapNativeFactory * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *CreateFromWICBitmap )(
            ISoftwareBitmapNativeFactory * This,
            _In_ IWICBitmap *data,
            _In_ BOOL forceReadOnly,
            _In_ REFIID riid,
            _COM_Outptr_ LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *CreateFromMF2DBuffer2 )(
            ISoftwareBitmapNativeFactory * This,
            _In_ IMF2DBuffer2 *data,
            _In_ REFGUID subtype,
            _In_ UINT32 width,
            _In_ UINT32 height,
            _In_ BOOL forceReadOnly,
            _In_opt_ const MFVideoArea *minDisplayAperture,
            _In_ REFIID riid,
            _COM_Outptr_ LPVOID *ppv);
        END_INTERFACE
    } ISoftwareBitmapNativeFactoryVtbl;
    interface ISoftwareBitmapNativeFactory
    {
        CONST_VTBL struct ISoftwareBitmapNativeFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> CreateFromWICBitmap(This,data,forceReadOnly,riid,ppv) )
    ( (This)->lpVtbl -> CreateFromMF2DBuffer2(This,data,subtype,width,height,forceReadOnly,minDisplayAperture,riid,ppv) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_windows2Egraphics2Eimaging2Einterop_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egraphics2Eimaging2Einterop_0000_0002_v0_0_s_ifspec;
}
