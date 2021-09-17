#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITranscodeImage ITranscodeImage;
typedef class ImageTranscode ImageTranscode;
#include "objidl.h"
#include "propidl.h"
#include "shobjidl_core.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_imagetranscode_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imagetranscode_0000_0000_v0_0_s_ifspec;
typedef
enum tagTI_FLAGS
    {
        TI_BITMAP = 1,
        TI_JPEG = 2
    } TI_FLAGS;
EXTERN_C const IID IID_ITranscodeImage;
    typedef struct ITranscodeImageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITranscodeImage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITranscodeImage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITranscodeImage * This);
        HRESULT ( STDMETHODCALLTYPE *TranscodeImage )(
            __RPC__in ITranscodeImage * This,
                       __RPC__in_opt IShellItem *pShellItem,
                       UINT uiMaxWidth,
                       UINT uiMaxHeight,
                       DWORD flags,
                       __RPC__in_opt IStream *pvImage,
                        __RPC__out UINT *puiWidth,
                        __RPC__out UINT *puiHeight);
        END_INTERFACE
    } ITranscodeImageVtbl;
    interface ITranscodeImage
    {
        CONST_VTBL struct ITranscodeImageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> TranscodeImage(This,pShellItem,uiMaxWidth,uiMaxHeight,flags,pvImage,puiWidth,puiHeight) )
EXTERN_C const IID LIBID_TranscodeLibrary;
EXTERN_C const CLSID CLSID_ImageTranscode;
class DECLSPEC_UUID("17B75166-928F-417d-9685-64AA135565C1")
ImageTranscode;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_imagetranscode_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imagetranscode_0000_0002_v0_0_s_ifspec;
}
