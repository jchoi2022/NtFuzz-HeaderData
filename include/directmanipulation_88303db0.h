#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDirectManipulationManager IDirectManipulationManager;
typedef interface IDirectManipulationManager2 IDirectManipulationManager2;
typedef interface IDirectManipulationManager3 IDirectManipulationManager3;
typedef interface IDirectManipulationViewport IDirectManipulationViewport;
typedef interface IDirectManipulationViewport2 IDirectManipulationViewport2;
typedef interface IDirectManipulationViewportEventHandler IDirectManipulationViewportEventHandler;
typedef interface IDirectManipulationContent IDirectManipulationContent;
typedef interface IDirectManipulationPrimaryContent IDirectManipulationPrimaryContent;
typedef interface IDirectManipulationDragDropEventHandler IDirectManipulationDragDropEventHandler;
typedef interface IDirectManipulationDragDropBehavior IDirectManipulationDragDropBehavior;
typedef interface IDirectManipulationInteractionEventHandler IDirectManipulationInteractionEventHandler;
typedef interface IDirectManipulationFrameInfoProvider IDirectManipulationFrameInfoProvider;
typedef interface IDirectManipulationCompositor IDirectManipulationCompositor;
typedef interface IDirectManipulationCompositor2 IDirectManipulationCompositor2;
typedef interface IDirectManipulationUpdateHandler IDirectManipulationUpdateHandler;
typedef interface IDirectManipulationUpdateManager IDirectManipulationUpdateManager;
typedef interface IDirectManipulationAutoScrollBehavior IDirectManipulationAutoScrollBehavior;
typedef interface IDirectManipulationDeferContactService IDirectManipulationDeferContactService;
typedef interface IDirectManipulationSnapPointsInertiaBehavior IDirectManipulationSnapPointsInertiaBehavior;
typedef interface IDirectManipulationContent2 IDirectManipulationContent2;
typedef interface IDirectManipulationViewport3 IDirectManipulationViewport3;
typedef interface IDirectManipulationPrimaryContent2 IDirectManipulationPrimaryContent2;
typedef interface IDirectManipulationParametricMotionBehavior IDirectManipulationParametricMotionBehavior;
typedef interface IDirectManipulationParametricMotionCurve IDirectManipulationParametricMotionCurve;
typedef interface IDirectManipulationParametricRestPointList IDirectManipulationParametricRestPointList;
typedef interface IDirectManipulationParametricRestPointBehavior IDirectManipulationParametricRestPointBehavior;
typedef interface IDirectManipulationCompositorPartner IDirectManipulationCompositorPartner;
typedef interface IDirectManipulationManagerPartner IDirectManipulationManagerPartner;
typedef interface IDirectManipulationViewportPartner IDirectManipulationViewportPartner;
typedef class DirectManipulationViewport DirectManipulationViewport;
typedef class DirectManipulationUpdateManager DirectManipulationUpdateManager;
typedef class DirectManipulationPrimaryContent DirectManipulationPrimaryContent;
typedef class DirectManipulationManager DirectManipulationManager;
typedef class DirectManipulationSharedManager DirectManipulationSharedManager;
typedef class DCompManipulationCompositor DCompManipulationCompositor;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if 0
typedef void *HWND;
#endif
typedef
enum DIRECTMANIPULATION_STATUS
    {
        DIRECTMANIPULATION_BUILDING = 0,
        DIRECTMANIPULATION_ENABLED = 1,
        DIRECTMANIPULATION_DISABLED = 2,
        DIRECTMANIPULATION_RUNNING = 3,
        DIRECTMANIPULATION_INERTIA = 4,
        DIRECTMANIPULATION_READY = 5,
        DIRECTMANIPULATION_SUSPENDED = 6
    } DIRECTMANIPULATION_STATUS;
typedef
enum DIRECTMANIPULATION_HITTEST_TYPE
    {
        DIRECTMANIPULATION_HITTEST_TYPE_ASYNCHRONOUS = 0,
        DIRECTMANIPULATION_HITTEST_TYPE_SYNCHRONOUS = 0x1,
        DIRECTMANIPULATION_HITTEST_TYPE_AUTO_SYNCHRONOUS = 0x2
    } DIRECTMANIPULATION_HITTEST_TYPE;
DEFINE_ENUM_FLAG_OPERATORS(DIRECTMANIPULATION_HITTEST_TYPE)
typedef
enum DIRECTMANIPULATION_CONFIGURATION
    {
        DIRECTMANIPULATION_CONFIGURATION_NONE = 0,
        DIRECTMANIPULATION_CONFIGURATION_INTERACTION = 0x1,
        DIRECTMANIPULATION_CONFIGURATION_TRANSLATION_X = 0x2,
        DIRECTMANIPULATION_CONFIGURATION_TRANSLATION_Y = 0x4,
        DIRECTMANIPULATION_CONFIGURATION_SCALING = 0x10,
        DIRECTMANIPULATION_CONFIGURATION_TRANSLATION_INERTIA = 0x20,
        DIRECTMANIPULATION_CONFIGURATION_SCALING_INERTIA = 0x80,
        DIRECTMANIPULATION_CONFIGURATION_RAILS_X = 0x100,
        DIRECTMANIPULATION_CONFIGURATION_RAILS_Y = 0x200
    } DIRECTMANIPULATION_CONFIGURATION;
DEFINE_ENUM_FLAG_OPERATORS(DIRECTMANIPULATION_CONFIGURATION)
typedef
enum DIRECTMANIPULATION_GESTURE_CONFIGURATION
    {
        DIRECTMANIPULATION_GESTURE_NONE = 0,
        DIRECTMANIPULATION_GESTURE_DEFAULT = 0,
        DIRECTMANIPULATION_GESTURE_CROSS_SLIDE_VERTICAL = 0x8,
        DIRECTMANIPULATION_GESTURE_CROSS_SLIDE_HORIZONTAL = 0x10,
        DIRECTMANIPULATION_GESTURE_PINCH_ZOOM = 0x20
    } DIRECTMANIPULATION_GESTURE_CONFIGURATION;
DEFINE_ENUM_FLAG_OPERATORS(DIRECTMANIPULATION_GESTURE_CONFIGURATION)
typedef
enum DIRECTMANIPULATION_MOTION_TYPES
    {
        DIRECTMANIPULATION_MOTION_NONE = 0,
        DIRECTMANIPULATION_MOTION_TRANSLATEX = 0x1,
        DIRECTMANIPULATION_MOTION_TRANSLATEY = 0x2,
        DIRECTMANIPULATION_MOTION_ZOOM = 0x4,
        DIRECTMANIPULATION_MOTION_CENTERX = 0x10,
        DIRECTMANIPULATION_MOTION_CENTERY = 0x20,
        DIRECTMANIPULATION_MOTION_ALL = ( ( ( ( DIRECTMANIPULATION_MOTION_TRANSLATEX | DIRECTMANIPULATION_MOTION_TRANSLATEY ) | DIRECTMANIPULATION_MOTION_ZOOM ) | DIRECTMANIPULATION_MOTION_CENTERX ) | DIRECTMANIPULATION_MOTION_CENTERY )
    } DIRECTMANIPULATION_MOTION_TYPES;
DEFINE_ENUM_FLAG_OPERATORS(DIRECTMANIPULATION_MOTION_TYPES)
typedef
enum DIRECTMANIPULATION_VIEWPORT_OPTIONS
    {
        DIRECTMANIPULATION_VIEWPORT_OPTIONS_DEFAULT = 0,
        DIRECTMANIPULATION_VIEWPORT_OPTIONS_AUTODISABLE = 0x1,
        DIRECTMANIPULATION_VIEWPORT_OPTIONS_MANUALUPDATE = 0x2,
        DIRECTMANIPULATION_VIEWPORT_OPTIONS_INPUT = 0x4,
        DIRECTMANIPULATION_VIEWPORT_OPTIONS_EXPLICITHITTEST = 0x8,
        DIRECTMANIPULATION_VIEWPORT_OPTIONS_DISABLEPIXELSNAPPING = 0x10
    } DIRECTMANIPULATION_VIEWPORT_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(DIRECTMANIPULATION_VIEWPORT_OPTIONS)
typedef
enum DIRECTMANIPULATION_SNAPPOINT_TYPE
    {
        DIRECTMANIPULATION_SNAPPOINT_MANDATORY = 0,
        DIRECTMANIPULATION_SNAPPOINT_OPTIONAL = 1,
        DIRECTMANIPULATION_SNAPPOINT_MANDATORY_SINGLE = 2,
        DIRECTMANIPULATION_SNAPPOINT_OPTIONAL_SINGLE = 3
    } DIRECTMANIPULATION_SNAPPOINT_TYPE;
typedef
enum DIRECTMANIPULATION_SNAPPOINT_COORDINATE
    {
        DIRECTMANIPULATION_COORDINATE_BOUNDARY = 0,
        DIRECTMANIPULATION_COORDINATE_ORIGIN = 0x1,
        DIRECTMANIPULATION_COORDINATE_MIRRORED = 0x10
    } DIRECTMANIPULATION_SNAPPOINT_COORDINATE;
DEFINE_ENUM_FLAG_OPERATORS(DIRECTMANIPULATION_SNAPPOINT_COORDINATE)
typedef
enum DIRECTMANIPULATION_HORIZONTALALIGNMENT
    {
        DIRECTMANIPULATION_HORIZONTALALIGNMENT_NONE = 0,
        DIRECTMANIPULATION_HORIZONTALALIGNMENT_LEFT = 0x1,
        DIRECTMANIPULATION_HORIZONTALALIGNMENT_CENTER = 0x2,
        DIRECTMANIPULATION_HORIZONTALALIGNMENT_RIGHT = 0x4,
        DIRECTMANIPULATION_HORIZONTALALIGNMENT_UNLOCKCENTER = 0x8
    } DIRECTMANIPULATION_HORIZONTALALIGNMENT;
DEFINE_ENUM_FLAG_OPERATORS(DIRECTMANIPULATION_HORIZONTALALIGNMENT)
typedef
enum DIRECTMANIPULATION_VERTICALALIGNMENT
    {
        DIRECTMANIPULATION_VERTICALALIGNMENT_NONE = 0,
        DIRECTMANIPULATION_VERTICALALIGNMENT_TOP = 0x1,
        DIRECTMANIPULATION_VERTICALALIGNMENT_CENTER = 0x2,
        DIRECTMANIPULATION_VERTICALALIGNMENT_BOTTOM = 0x4,
        DIRECTMANIPULATION_VERTICALALIGNMENT_UNLOCKCENTER = 0x8
    } DIRECTMANIPULATION_VERTICALALIGNMENT;
DEFINE_ENUM_FLAG_OPERATORS(DIRECTMANIPULATION_VERTICALALIGNMENT)
typedef
enum DIRECTMANIPULATION_INPUT_MODE
    {
        DIRECTMANIPULATION_INPUT_MODE_AUTOMATIC = 0,
        DIRECTMANIPULATION_INPUT_MODE_MANUAL = 1
    } DIRECTMANIPULATION_INPUT_MODE;
DEFINE_GUID(CLSID_VerticalIndicatorContent, 0xa10b5f17, 0xafe0, 0x4aa2, 0x91, 0xe9, 0x3e, 0x70, 0x1, 0xd2, 0xe6, 0xb4);
DEFINE_GUID(CLSID_HorizontalIndicatorContent, 0xe7d18cf5, 0x3ec7, 0x44d5, 0xa7, 0x6b, 0x37, 0x70, 0xf3, 0xcf, 0x90, 0x3d);
DEFINE_GUID(CLSID_VirtualViewportContent, 0x3206a19a, 0x86f0, 0x4cb4, 0xa7, 0xf3, 0x16, 0xe3, 0xb7, 0xe2, 0xd8, 0x52);
DEFINE_GUID(CLSID_DragDropConfigurationBehavior, 0x09b01b3e, 0xba6c, 0x454d, 0x82, 0xe8, 0x95, 0xe3, 0x52, 0x32, 0x9f, 0x23);
DEFINE_GUID(CLSID_AutoScrollBehavior, 0x26126a51, 0x3c70, 0x4c9a, 0xae, 0xc2, 0x94, 0x88, 0x49, 0xee, 0xb0, 0x93);
DEFINE_GUID(CLSID_DeferContactService , 0xd7b67cf4, 0x84bb, 0x434e, 0x86, 0xae, 0x65, 0x92, 0xbb, 0xc9, 0xab, 0xd9);
extern RPC_IF_HANDLE __MIDL_itf_directmanipulation_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_directmanipulation_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDirectManipulationManager;
    typedef struct IDirectManipulationManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationManager * This);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            IDirectManipulationManager * This,
            _In_ HWND window);
        HRESULT ( STDMETHODCALLTYPE *Deactivate )(
            IDirectManipulationManager * This,
            _In_ HWND window);
        HRESULT ( STDMETHODCALLTYPE *RegisterHitTestTarget )(
            IDirectManipulationManager * This,
            _In_ HWND window,
            _In_opt_ HWND hitTestWindow,
            _In_ DIRECTMANIPULATION_HITTEST_TYPE type);
        HRESULT ( STDMETHODCALLTYPE *ProcessInput )(
            IDirectManipulationManager * This,
            _In_ const MSG *message,
            _Out_ BOOL *handled);
        HRESULT ( STDMETHODCALLTYPE *GetUpdateManager )(
            IDirectManipulationManager * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **object);
        HRESULT ( STDMETHODCALLTYPE *CreateViewport )(
            IDirectManipulationManager * This,
            _In_opt_ IDirectManipulationFrameInfoProvider *frameInfo,
            _In_ HWND window,
            _In_ REFIID riid,
            _COM_Outptr_ void **object);
        HRESULT ( STDMETHODCALLTYPE *CreateContent )(
            IDirectManipulationManager * This,
            _In_opt_ IDirectManipulationFrameInfoProvider *frameInfo,
            _In_ REFCLSID clsid,
            _In_ REFIID riid,
            _COM_Outptr_ void **object);
        END_INTERFACE
    } IDirectManipulationManagerVtbl;
    interface IDirectManipulationManager
    {
        CONST_VTBL struct IDirectManipulationManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Activate(This,window) )
    ( (This)->lpVtbl -> Deactivate(This,window) )
    ( (This)->lpVtbl -> RegisterHitTestTarget(This,window,hitTestWindow,type) )
    ( (This)->lpVtbl -> ProcessInput(This,message,handled) )
    ( (This)->lpVtbl -> GetUpdateManager(This,riid,object) )
    ( (This)->lpVtbl -> CreateViewport(This,frameInfo,window,riid,object) )
    ( (This)->lpVtbl -> CreateContent(This,frameInfo,clsid,riid,object) )
EXTERN_C const IID IID_IDirectManipulationManager2;
    typedef struct IDirectManipulationManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationManager2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            IDirectManipulationManager2 * This,
            _In_ HWND window);
        HRESULT ( STDMETHODCALLTYPE *Deactivate )(
            IDirectManipulationManager2 * This,
            _In_ HWND window);
        HRESULT ( STDMETHODCALLTYPE *RegisterHitTestTarget )(
            IDirectManipulationManager2 * This,
            _In_ HWND window,
            _In_opt_ HWND hitTestWindow,
            _In_ DIRECTMANIPULATION_HITTEST_TYPE type);
        HRESULT ( STDMETHODCALLTYPE *ProcessInput )(
            IDirectManipulationManager2 * This,
            _In_ const MSG *message,
            _Out_ BOOL *handled);
        HRESULT ( STDMETHODCALLTYPE *GetUpdateManager )(
            IDirectManipulationManager2 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **object);
        HRESULT ( STDMETHODCALLTYPE *CreateViewport )(
            IDirectManipulationManager2 * This,
            _In_opt_ IDirectManipulationFrameInfoProvider *frameInfo,
            _In_ HWND window,
            _In_ REFIID riid,
            _COM_Outptr_ void **object);
        HRESULT ( STDMETHODCALLTYPE *CreateContent )(
            IDirectManipulationManager2 * This,
            _In_opt_ IDirectManipulationFrameInfoProvider *frameInfo,
            _In_ REFCLSID clsid,
            _In_ REFIID riid,
            _COM_Outptr_ void **object);
        HRESULT ( STDMETHODCALLTYPE *CreateBehavior )(
            IDirectManipulationManager2 * This,
            _In_ REFCLSID clsid,
            _In_ REFIID riid,
            _COM_Outptr_ void **object);
        END_INTERFACE
    } IDirectManipulationManager2Vtbl;
    interface IDirectManipulationManager2
    {
        CONST_VTBL struct IDirectManipulationManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Activate(This,window) )
    ( (This)->lpVtbl -> Deactivate(This,window) )
    ( (This)->lpVtbl -> RegisterHitTestTarget(This,window,hitTestWindow,type) )
    ( (This)->lpVtbl -> ProcessInput(This,message,handled) )
    ( (This)->lpVtbl -> GetUpdateManager(This,riid,object) )
    ( (This)->lpVtbl -> CreateViewport(This,frameInfo,window,riid,object) )
    ( (This)->lpVtbl -> CreateContent(This,frameInfo,clsid,riid,object) )
    ( (This)->lpVtbl -> CreateBehavior(This,clsid,riid,object) )
EXTERN_C const IID IID_IDirectManipulationManager3;
    typedef struct IDirectManipulationManager3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationManager3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationManager3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationManager3 * This);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            IDirectManipulationManager3 * This,
            _In_ HWND window);
        HRESULT ( STDMETHODCALLTYPE *Deactivate )(
            IDirectManipulationManager3 * This,
            _In_ HWND window);
        HRESULT ( STDMETHODCALLTYPE *RegisterHitTestTarget )(
            IDirectManipulationManager3 * This,
            _In_ HWND window,
            _In_opt_ HWND hitTestWindow,
            _In_ DIRECTMANIPULATION_HITTEST_TYPE type);
        HRESULT ( STDMETHODCALLTYPE *ProcessInput )(
            IDirectManipulationManager3 * This,
            _In_ const MSG *message,
            _Out_ BOOL *handled);
        HRESULT ( STDMETHODCALLTYPE *GetUpdateManager )(
            IDirectManipulationManager3 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **object);
        HRESULT ( STDMETHODCALLTYPE *CreateViewport )(
            IDirectManipulationManager3 * This,
            _In_opt_ IDirectManipulationFrameInfoProvider *frameInfo,
            _In_ HWND window,
            _In_ REFIID riid,
            _COM_Outptr_ void **object);
        HRESULT ( STDMETHODCALLTYPE *CreateContent )(
            IDirectManipulationManager3 * This,
            _In_opt_ IDirectManipulationFrameInfoProvider *frameInfo,
            _In_ REFCLSID clsid,
            _In_ REFIID riid,
            _COM_Outptr_ void **object);
        HRESULT ( STDMETHODCALLTYPE *CreateBehavior )(
            IDirectManipulationManager3 * This,
            _In_ REFCLSID clsid,
            _In_ REFIID riid,
            _COM_Outptr_ void **object);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            IDirectManipulationManager3 * This,
            _In_ REFCLSID clsid,
            _In_ REFIID riid,
            _COM_Outptr_ void **object);
        END_INTERFACE
    } IDirectManipulationManager3Vtbl;
    interface IDirectManipulationManager3
    {
        CONST_VTBL struct IDirectManipulationManager3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Activate(This,window) )
    ( (This)->lpVtbl -> Deactivate(This,window) )
    ( (This)->lpVtbl -> RegisterHitTestTarget(This,window,hitTestWindow,type) )
    ( (This)->lpVtbl -> ProcessInput(This,message,handled) )
    ( (This)->lpVtbl -> GetUpdateManager(This,riid,object) )
    ( (This)->lpVtbl -> CreateViewport(This,frameInfo,window,riid,object) )
    ( (This)->lpVtbl -> CreateContent(This,frameInfo,clsid,riid,object) )
    ( (This)->lpVtbl -> CreateBehavior(This,clsid,riid,object) )
    ( (This)->lpVtbl -> GetService(This,clsid,riid,object) )
EXTERN_C const IID IID_IDirectManipulationViewport;
    typedef struct IDirectManipulationViewportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationViewport * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationViewport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationViewport * This);
        HRESULT ( STDMETHODCALLTYPE *Enable )(
            IDirectManipulationViewport * This);
        HRESULT ( STDMETHODCALLTYPE *Disable )(
            IDirectManipulationViewport * This);
        HRESULT ( STDMETHODCALLTYPE *SetContact )(
            IDirectManipulationViewport * This,
            _In_ UINT32 pointerId);
        HRESULT ( STDMETHODCALLTYPE *ReleaseContact )(
            IDirectManipulationViewport * This,
            _In_ UINT32 pointerId);
        HRESULT ( STDMETHODCALLTYPE *ReleaseAllContacts )(
            IDirectManipulationViewport * This);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            IDirectManipulationViewport * This,
            _Out_ DIRECTMANIPULATION_STATUS *status);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDirectManipulationViewport * This,
            _In_ REFIID riid,
            _COM_Outptr_opt_ void **object,
            _Out_opt_ UINT32 *id);
        HRESULT ( STDMETHODCALLTYPE *SetTag )(
            IDirectManipulationViewport * This,
            _In_opt_ IUnknown *object,
            _In_ UINT32 id);
        HRESULT ( STDMETHODCALLTYPE *GetViewportRect )(
            IDirectManipulationViewport * This,
            _Out_ RECT *viewport);
        HRESULT ( STDMETHODCALLTYPE *SetViewportRect )(
            IDirectManipulationViewport * This,
            _In_ const RECT *viewport);
        HRESULT ( STDMETHODCALLTYPE *ZoomToRect )(
            IDirectManipulationViewport * This,
            _In_ const float left,
            _In_ const float top,
            _In_ const float right,
            _In_ const float bottom,
            _In_ BOOL animate);
        HRESULT ( STDMETHODCALLTYPE *SetViewportTransform )(
            IDirectManipulationViewport * This,
            _In_reads_(pointCount) const float *matrix,
            _In_ DWORD pointCount);
        HRESULT ( STDMETHODCALLTYPE *SyncDisplayTransform )(
            IDirectManipulationViewport * This,
            _In_reads_(pointCount) const float *matrix,
            _In_ DWORD pointCount);
        HRESULT ( STDMETHODCALLTYPE *GetPrimaryContent )(
            IDirectManipulationViewport * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **object);
        HRESULT ( STDMETHODCALLTYPE *AddContent )(
            IDirectManipulationViewport * This,
            _In_ IDirectManipulationContent *content);
        HRESULT ( STDMETHODCALLTYPE *RemoveContent )(
            IDirectManipulationViewport * This,
            _In_ IDirectManipulationContent *content);
        HRESULT ( STDMETHODCALLTYPE *SetViewportOptions )(
            IDirectManipulationViewport * This,
            _In_ DIRECTMANIPULATION_VIEWPORT_OPTIONS options);
        HRESULT ( STDMETHODCALLTYPE *AddConfiguration )(
            IDirectManipulationViewport * This,
            _In_ DIRECTMANIPULATION_CONFIGURATION configuration);
        HRESULT ( STDMETHODCALLTYPE *RemoveConfiguration )(
            IDirectManipulationViewport * This,
            _In_ DIRECTMANIPULATION_CONFIGURATION configuration);
        HRESULT ( STDMETHODCALLTYPE *ActivateConfiguration )(
            IDirectManipulationViewport * This,
            _In_ DIRECTMANIPULATION_CONFIGURATION configuration);
        HRESULT ( STDMETHODCALLTYPE *SetManualGesture )(
            IDirectManipulationViewport * This,
            _In_ DIRECTMANIPULATION_GESTURE_CONFIGURATION configuration);
        HRESULT ( STDMETHODCALLTYPE *SetChaining )(
            IDirectManipulationViewport * This,
            _In_ DIRECTMANIPULATION_MOTION_TYPES enabledTypes);
        HRESULT ( STDMETHODCALLTYPE *AddEventHandler )(
            IDirectManipulationViewport * This,
            _In_opt_ HWND window,
            _In_ IDirectManipulationViewportEventHandler *eventHandler,
            _Out_ DWORD *cookie);
        HRESULT ( STDMETHODCALLTYPE *RemoveEventHandler )(
            IDirectManipulationViewport * This,
            _In_ DWORD cookie);
        HRESULT ( STDMETHODCALLTYPE *SetInputMode )(
            IDirectManipulationViewport * This,
            _In_ DIRECTMANIPULATION_INPUT_MODE mode);
        HRESULT ( STDMETHODCALLTYPE *SetUpdateMode )(
            IDirectManipulationViewport * This,
            _In_ DIRECTMANIPULATION_INPUT_MODE mode);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IDirectManipulationViewport * This);
        HRESULT ( STDMETHODCALLTYPE *Abandon )(
            IDirectManipulationViewport * This);
        END_INTERFACE
    } IDirectManipulationViewportVtbl;
    interface IDirectManipulationViewport
    {
        CONST_VTBL struct IDirectManipulationViewportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Enable(This) )
    ( (This)->lpVtbl -> Disable(This) )
    ( (This)->lpVtbl -> SetContact(This,pointerId) )
    ( (This)->lpVtbl -> ReleaseContact(This,pointerId) )
    ( (This)->lpVtbl -> ReleaseAllContacts(This) )
    ( (This)->lpVtbl -> GetStatus(This,status) )
    ( (This)->lpVtbl -> GetTag(This,riid,object,id) )
    ( (This)->lpVtbl -> SetTag(This,object,id) )
    ( (This)->lpVtbl -> GetViewportRect(This,viewport) )
    ( (This)->lpVtbl -> SetViewportRect(This,viewport) )
    ( (This)->lpVtbl -> ZoomToRect(This,left,top,right,bottom,animate) )
    ( (This)->lpVtbl -> SetViewportTransform(This,matrix,pointCount) )
    ( (This)->lpVtbl -> SyncDisplayTransform(This,matrix,pointCount) )
    ( (This)->lpVtbl -> GetPrimaryContent(This,riid,object) )
    ( (This)->lpVtbl -> AddContent(This,content) )
    ( (This)->lpVtbl -> RemoveContent(This,content) )
    ( (This)->lpVtbl -> SetViewportOptions(This,options) )
    ( (This)->lpVtbl -> AddConfiguration(This,configuration) )
    ( (This)->lpVtbl -> RemoveConfiguration(This,configuration) )
    ( (This)->lpVtbl -> ActivateConfiguration(This,configuration) )
    ( (This)->lpVtbl -> SetManualGesture(This,configuration) )
    ( (This)->lpVtbl -> SetChaining(This,enabledTypes) )
    ( (This)->lpVtbl -> AddEventHandler(This,window,eventHandler,cookie) )
    ( (This)->lpVtbl -> RemoveEventHandler(This,cookie) )
    ( (This)->lpVtbl -> SetInputMode(This,mode) )
    ( (This)->lpVtbl -> SetUpdateMode(This,mode) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Abandon(This) )
EXTERN_C const IID IID_IDirectManipulationViewport2;
    typedef struct IDirectManipulationViewport2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationViewport2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationViewport2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationViewport2 * This);
        HRESULT ( STDMETHODCALLTYPE *Enable )(
            IDirectManipulationViewport2 * This);
        HRESULT ( STDMETHODCALLTYPE *Disable )(
            IDirectManipulationViewport2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetContact )(
            IDirectManipulationViewport2 * This,
            _In_ UINT32 pointerId);
        HRESULT ( STDMETHODCALLTYPE *ReleaseContact )(
            IDirectManipulationViewport2 * This,
            _In_ UINT32 pointerId);
        HRESULT ( STDMETHODCALLTYPE *ReleaseAllContacts )(
            IDirectManipulationViewport2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            IDirectManipulationViewport2 * This,
            _Out_ DIRECTMANIPULATION_STATUS *status);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDirectManipulationViewport2 * This,
            _In_ REFIID riid,
            _COM_Outptr_opt_ void **object,
            _Out_opt_ UINT32 *id);
        HRESULT ( STDMETHODCALLTYPE *SetTag )(
            IDirectManipulationViewport2 * This,
            _In_opt_ IUnknown *object,
            _In_ UINT32 id);
        HRESULT ( STDMETHODCALLTYPE *GetViewportRect )(
            IDirectManipulationViewport2 * This,
            _Out_ RECT *viewport);
        HRESULT ( STDMETHODCALLTYPE *SetViewportRect )(
            IDirectManipulationViewport2 * This,
            _In_ const RECT *viewport);
        HRESULT ( STDMETHODCALLTYPE *ZoomToRect )(
            IDirectManipulationViewport2 * This,
            _In_ const float left,
            _In_ const float top,
            _In_ const float right,
            _In_ const float bottom,
            _In_ BOOL animate);
        HRESULT ( STDMETHODCALLTYPE *SetViewportTransform )(
            IDirectManipulationViewport2 * This,
            _In_reads_(pointCount) const float *matrix,
            _In_ DWORD pointCount);
        HRESULT ( STDMETHODCALLTYPE *SyncDisplayTransform )(
            IDirectManipulationViewport2 * This,
            _In_reads_(pointCount) const float *matrix,
            _In_ DWORD pointCount);
        HRESULT ( STDMETHODCALLTYPE *GetPrimaryContent )(
            IDirectManipulationViewport2 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **object);
        HRESULT ( STDMETHODCALLTYPE *AddContent )(
            IDirectManipulationViewport2 * This,
            _In_ IDirectManipulationContent *content);
        HRESULT ( STDMETHODCALLTYPE *RemoveContent )(
            IDirectManipulationViewport2 * This,
            _In_ IDirectManipulationContent *content);
        HRESULT ( STDMETHODCALLTYPE *SetViewportOptions )(
            IDirectManipulationViewport2 * This,
            _In_ DIRECTMANIPULATION_VIEWPORT_OPTIONS options);
        HRESULT ( STDMETHODCALLTYPE *AddConfiguration )(
            IDirectManipulationViewport2 * This,
            _In_ DIRECTMANIPULATION_CONFIGURATION configuration);
        HRESULT ( STDMETHODCALLTYPE *RemoveConfiguration )(
            IDirectManipulationViewport2 * This,
            _In_ DIRECTMANIPULATION_CONFIGURATION configuration);
        HRESULT ( STDMETHODCALLTYPE *ActivateConfiguration )(
            IDirectManipulationViewport2 * This,
            _In_ DIRECTMANIPULATION_CONFIGURATION configuration);
        HRESULT ( STDMETHODCALLTYPE *SetManualGesture )(
            IDirectManipulationViewport2 * This,
            _In_ DIRECTMANIPULATION_GESTURE_CONFIGURATION configuration);
        HRESULT ( STDMETHODCALLTYPE *SetChaining )(
            IDirectManipulationViewport2 * This,
            _In_ DIRECTMANIPULATION_MOTION_TYPES enabledTypes);
        HRESULT ( STDMETHODCALLTYPE *AddEventHandler )(
            IDirectManipulationViewport2 * This,
            _In_opt_ HWND window,
            _In_ IDirectManipulationViewportEventHandler *eventHandler,
            _Out_ DWORD *cookie);
        HRESULT ( STDMETHODCALLTYPE *RemoveEventHandler )(
            IDirectManipulationViewport2 * This,
            _In_ DWORD cookie);
        HRESULT ( STDMETHODCALLTYPE *SetInputMode )(
            IDirectManipulationViewport2 * This,
            _In_ DIRECTMANIPULATION_INPUT_MODE mode);
        HRESULT ( STDMETHODCALLTYPE *SetUpdateMode )(
            IDirectManipulationViewport2 * This,
            _In_ DIRECTMANIPULATION_INPUT_MODE mode);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IDirectManipulationViewport2 * This);
        HRESULT ( STDMETHODCALLTYPE *Abandon )(
            IDirectManipulationViewport2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddBehavior )(
            IDirectManipulationViewport2 * This,
            _In_ IUnknown *behavior,
            _Out_ DWORD *cookie);
        HRESULT ( STDMETHODCALLTYPE *RemoveBehavior )(
            IDirectManipulationViewport2 * This,
            _In_ DWORD cookie);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllBehaviors )(
            IDirectManipulationViewport2 * This);
        END_INTERFACE
    } IDirectManipulationViewport2Vtbl;
    interface IDirectManipulationViewport2
    {
        CONST_VTBL struct IDirectManipulationViewport2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Enable(This) )
    ( (This)->lpVtbl -> Disable(This) )
    ( (This)->lpVtbl -> SetContact(This,pointerId) )
    ( (This)->lpVtbl -> ReleaseContact(This,pointerId) )
    ( (This)->lpVtbl -> ReleaseAllContacts(This) )
    ( (This)->lpVtbl -> GetStatus(This,status) )
    ( (This)->lpVtbl -> GetTag(This,riid,object,id) )
    ( (This)->lpVtbl -> SetTag(This,object,id) )
    ( (This)->lpVtbl -> GetViewportRect(This,viewport) )
    ( (This)->lpVtbl -> SetViewportRect(This,viewport) )
    ( (This)->lpVtbl -> ZoomToRect(This,left,top,right,bottom,animate) )
    ( (This)->lpVtbl -> SetViewportTransform(This,matrix,pointCount) )
    ( (This)->lpVtbl -> SyncDisplayTransform(This,matrix,pointCount) )
    ( (This)->lpVtbl -> GetPrimaryContent(This,riid,object) )
    ( (This)->lpVtbl -> AddContent(This,content) )
    ( (This)->lpVtbl -> RemoveContent(This,content) )
    ( (This)->lpVtbl -> SetViewportOptions(This,options) )
    ( (This)->lpVtbl -> AddConfiguration(This,configuration) )
    ( (This)->lpVtbl -> RemoveConfiguration(This,configuration) )
    ( (This)->lpVtbl -> ActivateConfiguration(This,configuration) )
    ( (This)->lpVtbl -> SetManualGesture(This,configuration) )
    ( (This)->lpVtbl -> SetChaining(This,enabledTypes) )
    ( (This)->lpVtbl -> AddEventHandler(This,window,eventHandler,cookie) )
    ( (This)->lpVtbl -> RemoveEventHandler(This,cookie) )
    ( (This)->lpVtbl -> SetInputMode(This,mode) )
    ( (This)->lpVtbl -> SetUpdateMode(This,mode) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Abandon(This) )
    ( (This)->lpVtbl -> AddBehavior(This,behavior,cookie) )
    ( (This)->lpVtbl -> RemoveBehavior(This,cookie) )
    ( (This)->lpVtbl -> RemoveAllBehaviors(This) )
EXTERN_C const IID IID_IDirectManipulationViewportEventHandler;
    typedef struct IDirectManipulationViewportEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationViewportEventHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationViewportEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationViewportEventHandler * This);
        HRESULT ( STDMETHODCALLTYPE *OnViewportStatusChanged )(
            IDirectManipulationViewportEventHandler * This,
            _In_ IDirectManipulationViewport *viewport,
            _In_ DIRECTMANIPULATION_STATUS current,
            _In_ DIRECTMANIPULATION_STATUS previous);
        HRESULT ( STDMETHODCALLTYPE *OnViewportUpdated )(
            IDirectManipulationViewportEventHandler * This,
            _In_ IDirectManipulationViewport *viewport);
        HRESULT ( STDMETHODCALLTYPE *OnContentUpdated )(
            IDirectManipulationViewportEventHandler * This,
            _In_ IDirectManipulationViewport *viewport,
            _In_ IDirectManipulationContent *content);
        END_INTERFACE
    } IDirectManipulationViewportEventHandlerVtbl;
    interface IDirectManipulationViewportEventHandler
    {
        CONST_VTBL struct IDirectManipulationViewportEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnViewportStatusChanged(This,viewport,current,previous) )
    ( (This)->lpVtbl -> OnViewportUpdated(This,viewport) )
    ( (This)->lpVtbl -> OnContentUpdated(This,viewport,content) )
EXTERN_C const IID IID_IDirectManipulationContent;
    typedef struct IDirectManipulationContentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationContent * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationContent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationContent * This);
        HRESULT ( STDMETHODCALLTYPE *GetContentRect )(
            IDirectManipulationContent * This,
            _Out_ RECT *contentSize);
        HRESULT ( STDMETHODCALLTYPE *SetContentRect )(
            IDirectManipulationContent * This,
            _In_ const RECT *contentSize);
        HRESULT ( STDMETHODCALLTYPE *GetViewport )(
            IDirectManipulationContent * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **object);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDirectManipulationContent * This,
            _In_ REFIID riid,
            _COM_Outptr_opt_ void **object,
            _Out_opt_ UINT32 *id);
        HRESULT ( STDMETHODCALLTYPE *SetTag )(
            IDirectManipulationContent * This,
            _In_opt_ IUnknown *object,
            _In_ UINT32 id);
        HRESULT ( STDMETHODCALLTYPE *GetOutputTransform )(
            IDirectManipulationContent * This,
            _Out_writes_(pointCount) float *matrix,
            _In_ DWORD pointCount);
        HRESULT ( STDMETHODCALLTYPE *GetContentTransform )(
            IDirectManipulationContent * This,
            _Out_writes_(pointCount) float *matrix,
            _In_ DWORD pointCount);
        HRESULT ( STDMETHODCALLTYPE *SyncContentTransform )(
            IDirectManipulationContent * This,
            _In_reads_(pointCount) const float *matrix,
            _In_ DWORD pointCount);
        END_INTERFACE
    } IDirectManipulationContentVtbl;
    interface IDirectManipulationContent
    {
        CONST_VTBL struct IDirectManipulationContentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetContentRect(This,contentSize) )
    ( (This)->lpVtbl -> SetContentRect(This,contentSize) )
    ( (This)->lpVtbl -> GetViewport(This,riid,object) )
    ( (This)->lpVtbl -> GetTag(This,riid,object,id) )
    ( (This)->lpVtbl -> SetTag(This,object,id) )
    ( (This)->lpVtbl -> GetOutputTransform(This,matrix,pointCount) )
    ( (This)->lpVtbl -> GetContentTransform(This,matrix,pointCount) )
    ( (This)->lpVtbl -> SyncContentTransform(This,matrix,pointCount) )
EXTERN_C const IID IID_IDirectManipulationPrimaryContent;
    typedef struct IDirectManipulationPrimaryContentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationPrimaryContent * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationPrimaryContent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationPrimaryContent * This);
        HRESULT ( STDMETHODCALLTYPE *SetSnapInterval )(
            IDirectManipulationPrimaryContent * This,
            _In_ DIRECTMANIPULATION_MOTION_TYPES motion,
            _In_ float interval,
            _In_ float offset);
        HRESULT ( STDMETHODCALLTYPE *SetSnapPoints )(
            IDirectManipulationPrimaryContent * This,
            _In_ DIRECTMANIPULATION_MOTION_TYPES motion,
            _In_reads_opt_(pointCount) const float *points,
            _In_ DWORD pointCount);
        HRESULT ( STDMETHODCALLTYPE *SetSnapType )(
            IDirectManipulationPrimaryContent * This,
            _In_ DIRECTMANIPULATION_MOTION_TYPES motion,
            _In_ DIRECTMANIPULATION_SNAPPOINT_TYPE type);
        HRESULT ( STDMETHODCALLTYPE *SetSnapCoordinate )(
            IDirectManipulationPrimaryContent * This,
            _In_ DIRECTMANIPULATION_MOTION_TYPES motion,
            _In_ DIRECTMANIPULATION_SNAPPOINT_COORDINATE coordinate,
            _In_ float origin);
        HRESULT ( STDMETHODCALLTYPE *SetZoomBoundaries )(
            IDirectManipulationPrimaryContent * This,
            _In_ float zoomMinimum,
            _In_ float zoomMaximum);
        HRESULT ( STDMETHODCALLTYPE *SetHorizontalAlignment )(
            IDirectManipulationPrimaryContent * This,
            _In_ DIRECTMANIPULATION_HORIZONTALALIGNMENT alignment);
        HRESULT ( STDMETHODCALLTYPE *SetVerticalAlignment )(
            IDirectManipulationPrimaryContent * This,
            _In_ DIRECTMANIPULATION_VERTICALALIGNMENT alignment);
        HRESULT ( STDMETHODCALLTYPE *GetInertiaEndTransform )(
            IDirectManipulationPrimaryContent * This,
            _Out_writes_(pointCount) float *matrix,
            _In_ DWORD pointCount);
        HRESULT ( STDMETHODCALLTYPE *GetCenterPoint )(
            IDirectManipulationPrimaryContent * This,
            _Out_ float *centerX,
            _Out_ float *centerY);
        END_INTERFACE
    } IDirectManipulationPrimaryContentVtbl;
    interface IDirectManipulationPrimaryContent
    {
        CONST_VTBL struct IDirectManipulationPrimaryContentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSnapInterval(This,motion,interval,offset) )
    ( (This)->lpVtbl -> SetSnapPoints(This,motion,points,pointCount) )
    ( (This)->lpVtbl -> SetSnapType(This,motion,type) )
    ( (This)->lpVtbl -> SetSnapCoordinate(This,motion,coordinate,origin) )
    ( (This)->lpVtbl -> SetZoomBoundaries(This,zoomMinimum,zoomMaximum) )
    ( (This)->lpVtbl -> SetHorizontalAlignment(This,alignment) )
    ( (This)->lpVtbl -> SetVerticalAlignment(This,alignment) )
    ( (This)->lpVtbl -> GetInertiaEndTransform(This,matrix,pointCount) )
    ( (This)->lpVtbl -> GetCenterPoint(This,centerX,centerY) )
typedef
enum DIRECTMANIPULATION_DRAG_DROP_STATUS
    {
        DIRECTMANIPULATION_DRAG_DROP_READY = 0,
        DIRECTMANIPULATION_DRAG_DROP_PRESELECT = 1,
        DIRECTMANIPULATION_DRAG_DROP_SELECTING = 2,
        DIRECTMANIPULATION_DRAG_DROP_DRAGGING = 3,
        DIRECTMANIPULATION_DRAG_DROP_CANCELLED = 4,
        DIRECTMANIPULATION_DRAG_DROP_COMMITTED = 5
    } DIRECTMANIPULATION_DRAG_DROP_STATUS;
extern RPC_IF_HANDLE __MIDL_itf_directmanipulation_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_directmanipulation_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IDirectManipulationDragDropEventHandler;
    typedef struct IDirectManipulationDragDropEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationDragDropEventHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationDragDropEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationDragDropEventHandler * This);
        HRESULT ( STDMETHODCALLTYPE *OnDragDropStatusChange )(
            IDirectManipulationDragDropEventHandler * This,
            _In_ IDirectManipulationViewport2 *viewport,
            _In_ DIRECTMANIPULATION_DRAG_DROP_STATUS current,
            _In_ DIRECTMANIPULATION_DRAG_DROP_STATUS previous);
        END_INTERFACE
    } IDirectManipulationDragDropEventHandlerVtbl;
    interface IDirectManipulationDragDropEventHandler
    {
        CONST_VTBL struct IDirectManipulationDragDropEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnDragDropStatusChange(This,viewport,current,previous) )
typedef
enum DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION
    {
        DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION_VERTICAL = 0x1,
        DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION_HORIZONTAL = 0x2,
        DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION_SELECT_ONLY = 0x10,
        DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION_SELECT_DRAG = 0x20,
        DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION_HOLD_DRAG = 0x40
    } DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION;
DEFINE_ENUM_FLAG_OPERATORS(DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION)
extern RPC_IF_HANDLE __MIDL_itf_directmanipulation_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_directmanipulation_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IDirectManipulationDragDropBehavior;
    typedef struct IDirectManipulationDragDropBehaviorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationDragDropBehavior * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationDragDropBehavior * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationDragDropBehavior * This);
        HRESULT ( STDMETHODCALLTYPE *SetConfiguration )(
            IDirectManipulationDragDropBehavior * This,
            _In_ DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION configuration);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            IDirectManipulationDragDropBehavior * This,
            _Out_ DIRECTMANIPULATION_DRAG_DROP_STATUS *status);
        END_INTERFACE
    } IDirectManipulationDragDropBehaviorVtbl;
    interface IDirectManipulationDragDropBehavior
    {
        CONST_VTBL struct IDirectManipulationDragDropBehaviorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetConfiguration(This,configuration) )
    ( (This)->lpVtbl -> GetStatus(This,status) )
typedef
enum DIRECTMANIPULATION_INTERACTION_TYPE
    {
        DIRECTMANIPULATION_INTERACTION_BEGIN = 0,
        DIRECTMANIPULATION_INTERACTION_TYPE_MANIPULATION = 1,
        DIRECTMANIPULATION_INTERACTION_TYPE_GESTURE_TAP = 2,
        DIRECTMANIPULATION_INTERACTION_TYPE_GESTURE_HOLD = 3,
        DIRECTMANIPULATION_INTERACTION_TYPE_GESTURE_CROSS_SLIDE = 4,
        DIRECTMANIPULATION_INTERACTION_TYPE_GESTURE_PINCH_ZOOM = 5,
        DIRECTMANIPULATION_INTERACTION_END = 100
    } DIRECTMANIPULATION_INTERACTION_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_directmanipulation_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_directmanipulation_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_IDirectManipulationInteractionEventHandler;
    typedef struct IDirectManipulationInteractionEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationInteractionEventHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationInteractionEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationInteractionEventHandler * This);
        HRESULT ( STDMETHODCALLTYPE *OnInteraction )(
            IDirectManipulationInteractionEventHandler * This,
            _In_ IDirectManipulationViewport2 *viewport,
            _In_ DIRECTMANIPULATION_INTERACTION_TYPE interaction);
        END_INTERFACE
    } IDirectManipulationInteractionEventHandlerVtbl;
    interface IDirectManipulationInteractionEventHandler
    {
        CONST_VTBL struct IDirectManipulationInteractionEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnInteraction(This,viewport,interaction) )
EXTERN_C const IID IID_IDirectManipulationFrameInfoProvider;
    typedef struct IDirectManipulationFrameInfoProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationFrameInfoProvider * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationFrameInfoProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationFrameInfoProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetNextFrameInfo )(
            IDirectManipulationFrameInfoProvider * This,
            _Out_ ULONGLONG *time,
            _Out_ ULONGLONG *processTime,
            _Out_ ULONGLONG *compositionTime);
        END_INTERFACE
    } IDirectManipulationFrameInfoProviderVtbl;
    interface IDirectManipulationFrameInfoProvider
    {
        CONST_VTBL struct IDirectManipulationFrameInfoProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNextFrameInfo(This,time,processTime,compositionTime) )
EXTERN_C const IID IID_IDirectManipulationCompositor;
    typedef struct IDirectManipulationCompositorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationCompositor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationCompositor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationCompositor * This);
        HRESULT ( STDMETHODCALLTYPE *AddContent )(
            IDirectManipulationCompositor * This,
            _In_ IDirectManipulationContent *content,
            _In_opt_ IUnknown *device,
            _In_opt_ IUnknown *parentVisual,
            _In_opt_ IUnknown *childVisual);
        HRESULT ( STDMETHODCALLTYPE *RemoveContent )(
            IDirectManipulationCompositor * This,
            _In_ IDirectManipulationContent *content);
        HRESULT ( STDMETHODCALLTYPE *SetUpdateManager )(
            IDirectManipulationCompositor * This,
            _In_ IDirectManipulationUpdateManager *updateManager);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            IDirectManipulationCompositor * This);
        END_INTERFACE
    } IDirectManipulationCompositorVtbl;
    interface IDirectManipulationCompositor
    {
        CONST_VTBL struct IDirectManipulationCompositorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddContent(This,content,device,parentVisual,childVisual) )
    ( (This)->lpVtbl -> RemoveContent(This,content) )
    ( (This)->lpVtbl -> SetUpdateManager(This,updateManager) )
    ( (This)->lpVtbl -> Flush(This) )
EXTERN_C const IID IID_IDirectManipulationCompositor2;
    typedef struct IDirectManipulationCompositor2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationCompositor2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationCompositor2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationCompositor2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddContent )(
            IDirectManipulationCompositor2 * This,
            _In_ IDirectManipulationContent *content,
            _In_opt_ IUnknown *device,
            _In_opt_ IUnknown *parentVisual,
            _In_opt_ IUnknown *childVisual);
        HRESULT ( STDMETHODCALLTYPE *RemoveContent )(
            IDirectManipulationCompositor2 * This,
            _In_ IDirectManipulationContent *content);
        HRESULT ( STDMETHODCALLTYPE *SetUpdateManager )(
            IDirectManipulationCompositor2 * This,
            _In_ IDirectManipulationUpdateManager *updateManager);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            IDirectManipulationCompositor2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddContentWithCrossProcessChaining )(
            IDirectManipulationCompositor2 * This,
            _In_ IDirectManipulationPrimaryContent *content,
            _In_opt_ IUnknown *device,
            _In_opt_ IUnknown *parentVisual,
            _In_opt_ IUnknown *childVisual);
        END_INTERFACE
    } IDirectManipulationCompositor2Vtbl;
    interface IDirectManipulationCompositor2
    {
        CONST_VTBL struct IDirectManipulationCompositor2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddContent(This,content,device,parentVisual,childVisual) )
    ( (This)->lpVtbl -> RemoveContent(This,content) )
    ( (This)->lpVtbl -> SetUpdateManager(This,updateManager) )
    ( (This)->lpVtbl -> Flush(This) )
    ( (This)->lpVtbl -> AddContentWithCrossProcessChaining(This,content,device,parentVisual,childVisual) )
EXTERN_C const IID IID_IDirectManipulationUpdateHandler;
    typedef struct IDirectManipulationUpdateHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationUpdateHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationUpdateHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationUpdateHandler * This);
        HRESULT ( STDMETHODCALLTYPE *Update )(
            IDirectManipulationUpdateHandler * This);
        END_INTERFACE
    } IDirectManipulationUpdateHandlerVtbl;
    interface IDirectManipulationUpdateHandler
    {
        CONST_VTBL struct IDirectManipulationUpdateHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Update(This) )
EXTERN_C const IID IID_IDirectManipulationUpdateManager;
    typedef struct IDirectManipulationUpdateManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationUpdateManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationUpdateManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationUpdateManager * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterWaitHandleCallback )(
            IDirectManipulationUpdateManager * This,
            _In_ HANDLE handle,
            _In_ IDirectManipulationUpdateHandler *eventHandler,
            _Out_ DWORD *cookie);
        HRESULT ( STDMETHODCALLTYPE *UnregisterWaitHandleCallback )(
            IDirectManipulationUpdateManager * This,
            _In_ DWORD cookie);
        HRESULT ( STDMETHODCALLTYPE *Update )(
            IDirectManipulationUpdateManager * This,
            _In_opt_ IDirectManipulationFrameInfoProvider *frameInfo);
        END_INTERFACE
    } IDirectManipulationUpdateManagerVtbl;
    interface IDirectManipulationUpdateManager
    {
        CONST_VTBL struct IDirectManipulationUpdateManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterWaitHandleCallback(This,handle,eventHandler,cookie) )
    ( (This)->lpVtbl -> UnregisterWaitHandleCallback(This,cookie) )
    ( (This)->lpVtbl -> Update(This,frameInfo) )
typedef
enum DIRECTMANIPULATION_AUTOSCROLL_CONFIGURATION
    {
        DIRECTMANIPULATION_AUTOSCROLL_CONFIGURATION_STOP = 0,
        DIRECTMANIPULATION_AUTOSCROLL_CONFIGURATION_FORWARD = 1,
        DIRECTMANIPULATION_AUTOSCROLL_CONFIGURATION_REVERSE = 2
    } DIRECTMANIPULATION_AUTOSCROLL_CONFIGURATION;
extern RPC_IF_HANDLE __MIDL_itf_directmanipulation_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_directmanipulation_0000_0016_v0_0_s_ifspec;
EXTERN_C const IID IID_IDirectManipulationAutoScrollBehavior;
    typedef struct IDirectManipulationAutoScrollBehaviorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationAutoScrollBehavior * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationAutoScrollBehavior * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationAutoScrollBehavior * This);
        HRESULT ( STDMETHODCALLTYPE *SetConfiguration )(
            IDirectManipulationAutoScrollBehavior * This,
            _In_ DIRECTMANIPULATION_MOTION_TYPES motionTypes,
            _In_ DIRECTMANIPULATION_AUTOSCROLL_CONFIGURATION scrollMotion);
        END_INTERFACE
    } IDirectManipulationAutoScrollBehaviorVtbl;
    interface IDirectManipulationAutoScrollBehavior
    {
        CONST_VTBL struct IDirectManipulationAutoScrollBehaviorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetConfiguration(This,motionTypes,scrollMotion) )
EXTERN_C const IID IID_IDirectManipulationDeferContactService;
    typedef struct IDirectManipulationDeferContactServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDirectManipulationDeferContactService * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDirectManipulationDeferContactService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDirectManipulationDeferContactService * This);
        HRESULT ( STDMETHODCALLTYPE *DeferContact )(
            IDirectManipulationDeferContactService * This,
            _In_ UINT32 pointerId,
            _In_ UINT32 timeout);
        HRESULT ( STDMETHODCALLTYPE *CancelContact )(
            IDirectManipulationDeferContactService * This,
            _In_ UINT32 pointerId);
        HRESULT ( STDMETHODCALLTYPE *CancelDeferral )(
            IDirectManipulationDeferContactService * This,
            _In_ UINT32 pointerId);
        END_INTERFACE
    } IDirectManipulationDeferContactServiceVtbl;
    interface IDirectManipulationDeferContactService
    {
        CONST_VTBL struct IDirectManipulationDeferContactServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DeferContact(This,pointerId,timeout) )
    ( (This)->lpVtbl -> CancelContact(This,pointerId) )
    ( (This)->lpVtbl -> CancelDeferral(This,pointerId) )
extern RPC_IF_HANDLE __MIDL_itf_directmanipulation_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_directmanipulation_0000_0029_v0_0_s_ifspec;
EXTERN_C const IID LIBID_DirectManipulation;
EXTERN_C const CLSID CLSID_DirectManipulationViewport;
class DECLSPEC_UUID("34E211B6-3650-4F75-8334-FA359598E1C5")
DirectManipulationViewport;
EXTERN_C const CLSID CLSID_DirectManipulationUpdateManager;
class DECLSPEC_UUID("9FC1BFD5-1835-441A-B3B1-B6CC74B727D0")
DirectManipulationUpdateManager;
EXTERN_C const CLSID CLSID_DirectManipulationPrimaryContent;
class DECLSPEC_UUID("CAA02661-D59E-41C7-8393-3BA3BACB6B57")
DirectManipulationPrimaryContent;
EXTERN_C const CLSID CLSID_DirectManipulationManager;
class DECLSPEC_UUID("54E211B6-3650-4F75-8334-FA359598E1C5")
DirectManipulationManager;
EXTERN_C const CLSID CLSID_DirectManipulationSharedManager;
class DECLSPEC_UUID("99793286-77CC-4B57-96DB-3B354F6F9FB5")
DirectManipulationSharedManager;
EXTERN_C const CLSID CLSID_DCompManipulationCompositor;
class DECLSPEC_UUID("79DEA627-A08A-43AC-8EF5-6900B9299126")
DCompManipulationCompositor;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_directmanipulation_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_directmanipulation_0000_0030_v0_0_s_ifspec;
}
