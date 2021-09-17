#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IInputPaneAnimationCoordinator IInputPaneAnimationCoordinator;
typedef class ShowInputPaneAnimationCoordinator ShowInputPaneAnimationCoordinator;
typedef class HideInputPaneAnimationCoordinator HideInputPaneAnimationCoordinator;
#include "wtypes.h"
#include "unknwn.h"
#include "dcompanimation.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_animationcoordinator_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_animationcoordinator_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IInputPaneAnimationCoordinator;
    typedef struct IInputPaneAnimationCoordinatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInputPaneAnimationCoordinator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInputPaneAnimationCoordinator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInputPaneAnimationCoordinator * This);
        HRESULT ( STDMETHODCALLTYPE *AddAnimation )(
            IInputPaneAnimationCoordinator * This,
            _In_ IUnknown *device,
            _In_ IDCompositionAnimation *animation);
        END_INTERFACE
    } IInputPaneAnimationCoordinatorVtbl;
    interface IInputPaneAnimationCoordinator
    {
        CONST_VTBL struct IInputPaneAnimationCoordinatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddAnimation(This,device,animation) )
EXTERN_C const IID LIBID_AnimationCoordinatorLib;
EXTERN_C const CLSID CLSID_ShowInputPaneAnimationCoordinator;
class DECLSPEC_UUID("1F046ABF-3202-4DC1-8CB5-3C67617CE1FA")
ShowInputPaneAnimationCoordinator;
EXTERN_C const CLSID CLSID_HideInputPaneAnimationCoordinator;
class DECLSPEC_UUID("384742B1-2A77-4CB3-8CF8-1136F5E17E59")
HideInputPaneAnimationCoordinator;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_animationcoordinator_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_animationcoordinator_0000_0002_v0_0_s_ifspec;
}
