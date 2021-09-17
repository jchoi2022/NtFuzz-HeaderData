#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICameraUIControlEventCallback ICameraUIControlEventCallback;
typedef interface ICameraUIControl ICameraUIControl;
typedef class CameraUIControl CameraUIControl;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#pragma warning(push)
#pragma warning(disable:4668)
#pragma warning(disable:4001)
       
#pragma warning(pop)
typedef
enum CameraUIControlMode
    {
        Browse = 0,
        Linear = ( Browse + 1 )
    } CameraUIControlMode;
typedef
enum CameraUIControlLinearSelectionMode
    {
        Single = 0,
        Multiple = ( Single + 1 )
    } CameraUIControlLinearSelectionMode;
typedef
enum CameraUIControlCaptureMode
    {
        PhotoOrVideo = 0,
        Photo = ( PhotoOrVideo + 1 ) ,
        Video = ( Photo + 1 )
    } CameraUIControlCaptureMode;
typedef
enum CameraUIControlPhotoFormat
    {
        Jpeg = 0,
        Png = ( Jpeg + 1 ) ,
        JpegXR = ( Png + 1 )
    } CameraUIControlPhotoFormat;
typedef
enum CameraUIControlVideoFormat
    {
        Mp4 = 0,
        Wmv = ( Mp4 + 1 )
    } CameraUIControlVideoFormat;
typedef
enum CameraUIControlViewType
    {
        SingleItem = 0,
        ItemList = ( SingleItem + 1 )
    } CameraUIControlViewType;
extern RPC_IF_HANDLE __MIDL_itf_camerauicontrol_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_camerauicontrol_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICameraUIControlEventCallback;
    typedef struct ICameraUIControlEventCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICameraUIControlEventCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICameraUIControlEventCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICameraUIControlEventCallback * This);
        void ( STDMETHODCALLTYPE *OnStartupComplete )(
            ICameraUIControlEventCallback * This);
        void ( STDMETHODCALLTYPE *OnSuspendComplete )(
            ICameraUIControlEventCallback * This);
        void ( STDMETHODCALLTYPE *OnItemCaptured )(
            ICameraUIControlEventCallback * This,
            _In_ LPCWSTR pszPath);
        void ( STDMETHODCALLTYPE *OnItemDeleted )(
            ICameraUIControlEventCallback * This,
            _In_ LPCWSTR pszPath);
        void ( STDMETHODCALLTYPE *OnClosed )(
            ICameraUIControlEventCallback * This);
        END_INTERFACE
    } ICameraUIControlEventCallbackVtbl;
    interface ICameraUIControlEventCallback
    {
        CONST_VTBL struct ICameraUIControlEventCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStartupComplete(This) )
    ( (This)->lpVtbl -> OnSuspendComplete(This) )
    ( (This)->lpVtbl -> OnItemCaptured(This,pszPath) )
    ( (This)->lpVtbl -> OnItemDeleted(This,pszPath) )
    ( (This)->lpVtbl -> OnClosed(This) )
EXTERN_C const IID IID_ICameraUIControl;
    typedef struct ICameraUIControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICameraUIControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICameraUIControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICameraUIControl * This);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            ICameraUIControl * This,
            _In_ IUnknown *pWindow,
            _In_ CameraUIControlMode mode,
            _In_ CameraUIControlLinearSelectionMode selectionMode,
            _In_ CameraUIControlCaptureMode captureMode,
            _In_ CameraUIControlPhotoFormat photoFormat,
            _In_ CameraUIControlVideoFormat videoFormat,
            _In_ BOOL bHasCloseButton,
            _In_opt_ ICameraUIControlEventCallback *pEventCallback);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            ICameraUIControl * This);
        HRESULT ( STDMETHODCALLTYPE *Suspend )(
            ICameraUIControl * This,
            _Out_ BOOL *pbDeferralRequired);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            ICameraUIControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentViewType )(
            ICameraUIControl * This,
            _Out_ CameraUIControlViewType *pViewType);
        HRESULT ( STDMETHODCALLTYPE *GetActiveItem )(
            ICameraUIControl * This,
            _Outptr_opt_ BSTR *pbstrActiveItemPath);
        HRESULT ( STDMETHODCALLTYPE *GetSelectedItems )(
            ICameraUIControl * This,
            _Outptr_ SAFEARRAY **ppSelectedItemPaths);
        HRESULT ( STDMETHODCALLTYPE *RemoveCapturedItem )(
            ICameraUIControl * This,
            _In_ LPCWSTR pszPath);
        END_INTERFACE
    } ICameraUIControlVtbl;
    interface ICameraUIControl
    {
        CONST_VTBL struct ICameraUIControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Show(This,pWindow,mode,selectionMode,captureMode,photoFormat,videoFormat,bHasCloseButton,pEventCallback) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Suspend(This,pbDeferralRequired) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> GetCurrentViewType(This,pViewType) )
    ( (This)->lpVtbl -> GetActiveItem(This,pbstrActiveItemPath) )
    ( (This)->lpVtbl -> GetSelectedItems(This,ppSelectedItemPaths) )
    ( (This)->lpVtbl -> RemoveCapturedItem(This,pszPath) )
EXTERN_C const IID LIBID_CameraUIControlTypesLib;
EXTERN_C const CLSID CLSID_CameraUIControl;
class DECLSPEC_UUID("16D5A2BE-B1C5-47b3-8EAE-CCBCF452C7E8")
CameraUIControl;
extern RPC_IF_HANDLE __MIDL_itf_camerauicontrol_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_camerauicontrol_0000_0003_v0_0_s_ifspec;
}
