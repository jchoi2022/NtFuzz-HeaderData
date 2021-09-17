#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IUISimplePropertySet IUISimplePropertySet;
typedef interface IUIRibbon IUIRibbon;
typedef interface IUIFramework IUIFramework;
typedef interface IUIEventLogger IUIEventLogger;
typedef interface IUIEventingManager IUIEventingManager;
typedef interface IUIContextualUI IUIContextualUI;
typedef interface IUICollection IUICollection;
typedef interface IUICollectionChangedEvent IUICollectionChangedEvent;
typedef interface IUICommandHandler IUICommandHandler;
typedef interface IUIApplication IUIApplication;
typedef interface IUIImage IUIImage;
typedef interface IUIImageFromBitmap IUIImageFromBitmap;
typedef class UIRibbonFramework UIRibbonFramework;
typedef class UIRibbonImageFromBitmapFactory UIRibbonImageFromBitmapFactory;
#include "propsys.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4668)
#pragma warning(disable:4001)
       
#pragma warning(pop)
#include <UIRibbonKeyDef.h>
DEFINE_UIPROPERTYKEY(UI_PKEY_Enabled, VT_BOOL, 1);
DEFINE_UIPROPERTYKEY(UI_PKEY_LabelDescription, VT_LPWSTR, 2);
DEFINE_UIPROPERTYKEY(UI_PKEY_Keytip, VT_LPWSTR, 3);
DEFINE_UIPROPERTYKEY(UI_PKEY_Label, VT_LPWSTR, 4);
DEFINE_UIPROPERTYKEY(UI_PKEY_TooltipDescription, VT_LPWSTR, 5);
DEFINE_UIPROPERTYKEY(UI_PKEY_TooltipTitle, VT_LPWSTR, 6);
DEFINE_UIPROPERTYKEY(UI_PKEY_LargeImage, VT_UNKNOWN, 7);
DEFINE_UIPROPERTYKEY(UI_PKEY_LargeHighContrastImage, VT_UNKNOWN, 8);
DEFINE_UIPROPERTYKEY(UI_PKEY_SmallImage, VT_UNKNOWN, 9);
DEFINE_UIPROPERTYKEY(UI_PKEY_SmallHighContrastImage, VT_UNKNOWN, 10);
DEFINE_UIPROPERTYKEY(UI_PKEY_CommandId, VT_UI4, 100);
DEFINE_UIPROPERTYKEY(UI_PKEY_ItemsSource, VT_UNKNOWN, 101);
DEFINE_UIPROPERTYKEY(UI_PKEY_Categories, VT_UNKNOWN, 102);
DEFINE_UIPROPERTYKEY(UI_PKEY_CategoryId, VT_UI4, 103);
DEFINE_UIPROPERTYKEY(UI_PKEY_SelectedItem, VT_UI4, 104);
DEFINE_UIPROPERTYKEY(UI_PKEY_CommandType, VT_UI4, 105);
DEFINE_UIPROPERTYKEY(UI_PKEY_ItemImage, VT_UNKNOWN, 106);
DEFINE_UIPROPERTYKEY(UI_PKEY_BooleanValue, VT_BOOL, 200);
DEFINE_UIPROPERTYKEY(UI_PKEY_DecimalValue, VT_DECIMAL, 201);
DEFINE_UIPROPERTYKEY(UI_PKEY_StringValue, VT_LPWSTR, 202);
DEFINE_UIPROPERTYKEY(UI_PKEY_MaxValue, VT_DECIMAL, 203);
DEFINE_UIPROPERTYKEY(UI_PKEY_MinValue, VT_DECIMAL, 204);
DEFINE_UIPROPERTYKEY(UI_PKEY_Increment, VT_DECIMAL, 205);
DEFINE_UIPROPERTYKEY(UI_PKEY_DecimalPlaces, VT_UI4, 206);
DEFINE_UIPROPERTYKEY(UI_PKEY_FormatString, VT_LPWSTR, 207);
DEFINE_UIPROPERTYKEY(UI_PKEY_RepresentativeString, VT_LPWSTR, 208);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties, VT_UNKNOWN, 300);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_Family, VT_LPWSTR, 301);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_Size, VT_DECIMAL, 302);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_Bold, VT_UI4, 303);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_Italic, VT_UI4, 304);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_Underline, VT_UI4, 305);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_Strikethrough, VT_UI4, 306);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_VerticalPositioning, VT_UI4, 307);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_ForegroundColor, VT_UI4, 308);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_BackgroundColor, VT_UI4, 309);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_ForegroundColorType, VT_UI4, 310);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_BackgroundColorType, VT_UI4, 311);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_ChangedProperties, VT_UNKNOWN, 312);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_DeltaSize, VT_UI4, 313);
DEFINE_UIPROPERTYKEY(UI_PKEY_RecentItems, VT_ARRAY|VT_UNKNOWN, 350);
DEFINE_UIPROPERTYKEY(UI_PKEY_Pinned, VT_BOOL, 351);
DEFINE_UIPROPERTYKEY(UI_PKEY_Color, VT_UI4, 400);
DEFINE_UIPROPERTYKEY(UI_PKEY_ColorType, VT_UI4, 401);
DEFINE_UIPROPERTYKEY(UI_PKEY_ColorMode, VT_UI4, 402);
DEFINE_UIPROPERTYKEY(UI_PKEY_ThemeColorsCategoryLabel, VT_LPWSTR, 403);
DEFINE_UIPROPERTYKEY(UI_PKEY_StandardColorsCategoryLabel, VT_LPWSTR, 404);
DEFINE_UIPROPERTYKEY(UI_PKEY_RecentColorsCategoryLabel, VT_LPWSTR, 405);
DEFINE_UIPROPERTYKEY(UI_PKEY_AutomaticColorLabel, VT_LPWSTR, 406);
DEFINE_UIPROPERTYKEY(UI_PKEY_NoColorLabel, VT_LPWSTR, 407);
DEFINE_UIPROPERTYKEY(UI_PKEY_MoreColorsLabel, VT_LPWSTR, 408);
DEFINE_UIPROPERTYKEY(UI_PKEY_ThemeColors, VT_VECTOR|VT_UI4, 409);
DEFINE_UIPROPERTYKEY(UI_PKEY_StandardColors, VT_VECTOR|VT_UI4, 410);
DEFINE_UIPROPERTYKEY(UI_PKEY_ThemeColorsTooltips, VT_VECTOR|VT_LPWSTR, 411);
DEFINE_UIPROPERTYKEY(UI_PKEY_StandardColorsTooltips, VT_VECTOR|VT_LPWSTR, 412);
DEFINE_UIPROPERTYKEY(UI_PKEY_Viewable, VT_BOOL, 1000);
DEFINE_UIPROPERTYKEY(UI_PKEY_Minimized, VT_BOOL, 1001);
DEFINE_UIPROPERTYKEY(UI_PKEY_QuickAccessToolbarDock, VT_UI4, 1002);
DEFINE_UIPROPERTYKEY(UI_PKEY_ContextAvailable, VT_UI4, 1100);
DEFINE_UIPROPERTYKEY(UI_PKEY_GlobalBackgroundColor, VT_UI4, 2000);
DEFINE_UIPROPERTYKEY(UI_PKEY_GlobalHighlightColor, VT_UI4, 2001);
DEFINE_UIPROPERTYKEY(UI_PKEY_GlobalTextColor, VT_UI4, 2002);
typedef DWORD UI_HSBCOLOR;
__inline UI_HSBCOLOR UI_HSB(BYTE hue, BYTE saturation, BYTE brightness)
{
    return hue | (saturation << 8) | (brightness << 16);
}
typedef
enum UI_CONTEXTAVAILABILITY
    {
        UI_CONTEXTAVAILABILITY_NOTAVAILABLE = 0,
        UI_CONTEXTAVAILABILITY_AVAILABLE = 1,
        UI_CONTEXTAVAILABILITY_ACTIVE = 2
    } UI_CONTEXTAVAILABILITY;
typedef
enum UI_FONTPROPERTIES
    {
        UI_FONTPROPERTIES_NOTAVAILABLE = 0,
        UI_FONTPROPERTIES_NOTSET = 1,
        UI_FONTPROPERTIES_SET = 2
    } UI_FONTPROPERTIES;
typedef
enum UI_FONTVERTICALPOSITION
    {
        UI_FONTVERTICALPOSITION_NOTAVAILABLE = 0,
        UI_FONTVERTICALPOSITION_NOTSET = 1,
        UI_FONTVERTICALPOSITION_SUPERSCRIPT = 2,
        UI_FONTVERTICALPOSITION_SUBSCRIPT = 3
    } UI_FONTVERTICALPOSITION;
typedef
enum UI_FONTUNDERLINE
    {
        UI_FONTUNDERLINE_NOTAVAILABLE = 0,
        UI_FONTUNDERLINE_NOTSET = 1,
        UI_FONTUNDERLINE_SET = 2
    } UI_FONTUNDERLINE;
typedef
enum UI_FONTDELTASIZE
    {
        UI_FONTDELTASIZE_GROW = 0,
        UI_FONTDELTASIZE_SHRINK = 1
    } UI_FONTDELTASIZE;
typedef
enum UI_CONTROLDOCK
    {
        UI_CONTROLDOCK_TOP = 1,
        UI_CONTROLDOCK_BOTTOM = 3
    } UI_CONTROLDOCK;
typedef
enum UI_SWATCHCOLORTYPE
    {
        UI_SWATCHCOLORTYPE_NOCOLOR = 0,
        UI_SWATCHCOLORTYPE_AUTOMATIC = 1,
        UI_SWATCHCOLORTYPE_RGB = 2
    } UI_SWATCHCOLORTYPE;
typedef
enum UI_SWATCHCOLORMODE
    {
        UI_SWATCHCOLORMODE_NORMAL = 0,
        UI_SWATCHCOLORMODE_MONOCHROME = 1
    } UI_SWATCHCOLORMODE;
typedef
enum UI_EVENTTYPE
    {
        UI_EVENTTYPE_ApplicationMenuOpened = 0,
        UI_EVENTTYPE_RibbonMinimized = 1,
        UI_EVENTTYPE_RibbonExpanded = 2,
        UI_EVENTTYPE_ApplicationModeSwitched = 3,
        UI_EVENTTYPE_TabActivated = 4,
        UI_EVENTTYPE_MenuOpened = 5,
        UI_EVENTTYPE_CommandExecuted = 6,
        UI_EVENTTYPE_TooltipShown = 7
    } UI_EVENTTYPE;
typedef
enum UI_EVENTLOCATION
    {
        UI_EVENTLOCATION_Ribbon = 0,
        UI_EVENTLOCATION_QAT = 1,
        UI_EVENTLOCATION_ApplicationMenu = 2,
        UI_EVENTLOCATION_ContextPopup = 3
    } UI_EVENTLOCATION;
extern RPC_IF_HANDLE __MIDL_itf_UIRibbon_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIRibbon_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IUISimplePropertySet;
    typedef struct IUISimplePropertySetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUISimplePropertySet * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUISimplePropertySet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUISimplePropertySet * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            IUISimplePropertySet * This,
                       REFPROPERTYKEY key,
                        PROPVARIANT *value);
        END_INTERFACE
    } IUISimplePropertySetVtbl;
    interface IUISimplePropertySet
    {
        CONST_VTBL struct IUISimplePropertySetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetValue(This,key,value) )
EXTERN_C const IID IID_IUIRibbon;
    typedef struct IUIRibbonVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIRibbon * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIRibbon * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIRibbon * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetHeight )(
            IUIRibbon * This,
                        UINT32 *cy);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *LoadSettingsFromStream )(
            IUIRibbon * This,
                       IStream *pStream);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SaveSettingsToStream )(
            IUIRibbon * This,
                       IStream *pStream);
        END_INTERFACE
    } IUIRibbonVtbl;
    interface IUIRibbon
    {
        CONST_VTBL struct IUIRibbonVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetHeight(This,cy) )
    ( (This)->lpVtbl -> LoadSettingsFromStream(This,pStream) )
    ( (This)->lpVtbl -> SaveSettingsToStream(This,pStream) )
extern RPC_IF_HANDLE __MIDL_itf_UIRibbon_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIRibbon_0000_0002_v0_0_s_ifspec;
typedef
enum UI_INVALIDATIONS
    {
        UI_INVALIDATIONS_STATE = 0x1,
        UI_INVALIDATIONS_VALUE = 0x2,
        UI_INVALIDATIONS_PROPERTY = 0x4,
        UI_INVALIDATIONS_ALLPROPERTIES = 0x8
    } UI_INVALIDATIONS;
DEFINE_ENUM_FLAG_OPERATORS(UI_INVALIDATIONS)
EXTERN_C const IID IID_IUIFramework;
    typedef struct IUIFrameworkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIFramework * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIFramework * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIFramework * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IUIFramework * This,
                       HWND frameWnd,
                       IUIApplication *application);
        HRESULT ( STDMETHODCALLTYPE *Destroy )(
            IUIFramework * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *LoadUI )(
            IUIFramework * This,
                       HINSTANCE instance,
                       LPCWSTR resourceName);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetView )(
            IUIFramework * This,
            UINT32 viewId,
            REFIID riid,
            _Outptr_ void **ppv);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetUICommandProperty )(
            IUIFramework * This,
            UINT32 commandId,
                       REFPROPERTYKEY key,
                        PROPVARIANT *value);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetUICommandProperty )(
            IUIFramework * This,
            UINT32 commandId,
                       REFPROPERTYKEY key,
                       REFPROPVARIANT value);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *InvalidateUICommand )(
            IUIFramework * This,
            UINT32 commandId,
            UI_INVALIDATIONS flags,
            _In_opt_ const PROPERTYKEY *key);
        HRESULT ( STDMETHODCALLTYPE *FlushPendingInvalidations )(
            IUIFramework * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetModes )(
            IUIFramework * This,
            INT32 iModes);
        END_INTERFACE
    } IUIFrameworkVtbl;
    interface IUIFramework
    {
        CONST_VTBL struct IUIFrameworkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,frameWnd,application) )
    ( (This)->lpVtbl -> Destroy(This) )
    ( (This)->lpVtbl -> LoadUI(This,instance,resourceName) )
    ( (This)->lpVtbl -> GetView(This,viewId,riid,ppv) )
    ( (This)->lpVtbl -> GetUICommandProperty(This,commandId,key,value) )
    ( (This)->lpVtbl -> SetUICommandProperty(This,commandId,key,value) )
    ( (This)->lpVtbl -> InvalidateUICommand(This,commandId,flags,key) )
    ( (This)->lpVtbl -> FlushPendingInvalidations(This) )
    ( (This)->lpVtbl -> SetModes(This,iModes) )
typedef void *UI_EVENTPARAMS;
extern RPC_IF_HANDLE __MIDL_itf_UIRibbon_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIRibbon_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IUIEventLogger;
    typedef struct IUIEventLoggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIEventLogger * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIEventLogger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIEventLogger * This);
        void ( STDMETHODCALLTYPE *OnUIEvent )(
            IUIEventLogger * This,
                       UI_EVENTPARAMS *pEventParams);
        END_INTERFACE
    } IUIEventLoggerVtbl;
    interface IUIEventLogger
    {
        CONST_VTBL struct IUIEventLoggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnUIEvent(This,pEventParams) )
EXTERN_C const IID IID_IUIEventingManager;
    typedef struct IUIEventingManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIEventingManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIEventingManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIEventingManager * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetEventLogger )(
            IUIEventingManager * This,
                       IUIEventLogger *eventLogger);
        END_INTERFACE
    } IUIEventingManagerVtbl;
    interface IUIEventingManager
    {
        CONST_VTBL struct IUIEventingManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetEventLogger(This,eventLogger) )
EXTERN_C const IID IID_IUIContextualUI;
    typedef struct IUIContextualUIVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIContextualUI * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIContextualUI * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIContextualUI * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *ShowAtLocation )(
            IUIContextualUI * This,
            INT32 x,
            INT32 y);
        END_INTERFACE
    } IUIContextualUIVtbl;
    interface IUIContextualUI
    {
        CONST_VTBL struct IUIContextualUIVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ShowAtLocation(This,x,y) )
EXTERN_C const IID IID_IUICollection;
    typedef struct IUICollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUICollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUICollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUICollection * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IUICollection * This,
                        UINT32 *count);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            IUICollection * This,
            UINT32 index,
            _Outptr_ IUnknown **item);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Add )(
            IUICollection * This,
                       IUnknown *item);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Insert )(
            IUICollection * This,
            UINT32 index,
                       IUnknown *item);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            IUICollection * This,
            UINT32 index);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Replace )(
            IUICollection * This,
            UINT32 indexReplaced,
                       IUnknown *itemReplaceWith);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            IUICollection * This);
        END_INTERFACE
    } IUICollectionVtbl;
    interface IUICollection
    {
        CONST_VTBL struct IUICollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetItem(This,index,item) )
    ( (This)->lpVtbl -> Add(This,item) )
    ( (This)->lpVtbl -> Insert(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Replace(This,indexReplaced,itemReplaceWith) )
    ( (This)->lpVtbl -> Clear(This) )
typedef
enum UI_COLLECTIONCHANGE
    {
        UI_COLLECTIONCHANGE_INSERT = 0,
        UI_COLLECTIONCHANGE_REMOVE = 1,
        UI_COLLECTIONCHANGE_REPLACE = 2,
        UI_COLLECTIONCHANGE_RESET = 3
    } UI_COLLECTIONCHANGE;
extern RPC_IF_HANDLE __MIDL_itf_UIRibbon_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIRibbon_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IUICollectionChangedEvent;
    typedef struct IUICollectionChangedEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUICollectionChangedEvent * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUICollectionChangedEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUICollectionChangedEvent * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnChanged )(
            IUICollectionChangedEvent * This,
            UI_COLLECTIONCHANGE action,
            UINT32 oldIndex,
            _In_opt_ IUnknown *oldItem,
            UINT32 newIndex,
            _In_opt_ IUnknown *newItem);
        END_INTERFACE
    } IUICollectionChangedEventVtbl;
    interface IUICollectionChangedEvent
    {
        CONST_VTBL struct IUICollectionChangedEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnChanged(This,action,oldIndex,oldItem,newIndex,newItem) )
typedef
enum UI_EXECUTIONVERB
    {
        UI_EXECUTIONVERB_EXECUTE = 0,
        UI_EXECUTIONVERB_PREVIEW = 1,
        UI_EXECUTIONVERB_CANCELPREVIEW = 2
    } UI_EXECUTIONVERB;
EXTERN_C const IID IID_IUICommandHandler;
    typedef struct IUICommandHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUICommandHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUICommandHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUICommandHandler * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Execute )(
            IUICommandHandler * This,
            UINT32 commandId,
            UI_EXECUTIONVERB verb,
            _In_opt_ const PROPERTYKEY *key,
            _In_opt_ const PROPVARIANT *currentValue,
            _In_opt_ IUISimplePropertySet *commandExecutionProperties);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *UpdateProperty )(
            IUICommandHandler * This,
            UINT32 commandId,
                       REFPROPERTYKEY key,
            _In_opt_ const PROPVARIANT *currentValue,
                        PROPVARIANT *newValue);
        END_INTERFACE
    } IUICommandHandlerVtbl;
    interface IUICommandHandler
    {
        CONST_VTBL struct IUICommandHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Execute(This,commandId,verb,key,currentValue,commandExecutionProperties) )
    ( (This)->lpVtbl -> UpdateProperty(This,commandId,key,currentValue,newValue) )
typedef
enum UI_COMMANDTYPE
    {
        UI_COMMANDTYPE_UNKNOWN = 0,
        UI_COMMANDTYPE_GROUP = 1,
        UI_COMMANDTYPE_ACTION = 2,
        UI_COMMANDTYPE_ANCHOR = 3,
        UI_COMMANDTYPE_CONTEXT = 4,
        UI_COMMANDTYPE_COLLECTION = 5,
        UI_COMMANDTYPE_COMMANDCOLLECTION = 6,
        UI_COMMANDTYPE_DECIMAL = 7,
        UI_COMMANDTYPE_BOOLEAN = 8,
        UI_COMMANDTYPE_FONT = 9,
        UI_COMMANDTYPE_RECENTITEMS = 10,
        UI_COMMANDTYPE_COLORANCHOR = 11,
        UI_COMMANDTYPE_COLORCOLLECTION = 12
    } UI_COMMANDTYPE;
typedef
enum UI_VIEWTYPE
    {
        UI_VIEWTYPE_RIBBON = 1
    } UI_VIEWTYPE;
extern RPC_IF_HANDLE __MIDL_itf_UIRibbon_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIRibbon_0000_0009_v0_0_s_ifspec;
typedef
enum UI_VIEWVERB
    {
        UI_VIEWVERB_CREATE = 0,
        UI_VIEWVERB_DESTROY = 1,
        UI_VIEWVERB_SIZE = 2,
        UI_VIEWVERB_ERROR = 3
    } UI_VIEWVERB;
EXTERN_C const IID IID_IUIApplication;
    typedef struct IUIApplicationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIApplication * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIApplication * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIApplication * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnViewChanged )(
            IUIApplication * This,
            UINT32 viewId,
            UI_VIEWTYPE typeID,
                       IUnknown *view,
            UI_VIEWVERB verb,
            INT32 uReasonCode);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnCreateUICommand )(
            IUIApplication * This,
            UINT32 commandId,
            UI_COMMANDTYPE typeID,
                        IUICommandHandler **commandHandler);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnDestroyUICommand )(
            IUIApplication * This,
            UINT32 commandId,
            UI_COMMANDTYPE typeID,
            _In_opt_ IUICommandHandler *commandHandler);
        END_INTERFACE
    } IUIApplicationVtbl;
    interface IUIApplication
    {
        CONST_VTBL struct IUIApplicationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnViewChanged(This,viewId,typeID,view,verb,uReasonCode) )
    ( (This)->lpVtbl -> OnCreateUICommand(This,commandId,typeID,commandHandler) )
    ( (This)->lpVtbl -> OnDestroyUICommand(This,commandId,typeID,commandHandler) )
EXTERN_C const IID IID_IUIImage;
    typedef struct IUIImageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIImage * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIImage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIImage * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetBitmap )(
            IUIImage * This,
                        HBITMAP *bitmap);
        END_INTERFACE
    } IUIImageVtbl;
    interface IUIImage
    {
        CONST_VTBL struct IUIImageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBitmap(This,bitmap) )
typedef
enum UI_OWNERSHIP
    {
        UI_OWNERSHIP_TRANSFER = 0,
        UI_OWNERSHIP_COPY = 1
    } UI_OWNERSHIP;
EXTERN_C const IID IID_IUIImageFromBitmap;
    typedef struct IUIImageFromBitmapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIImageFromBitmap * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIImageFromBitmap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIImageFromBitmap * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateImage )(
            IUIImageFromBitmap * This,
                       HBITMAP bitmap,
            UI_OWNERSHIP options,
                        IUIImage **image);
        END_INTERFACE
    } IUIImageFromBitmapVtbl;
    interface IUIImageFromBitmap
    {
        CONST_VTBL struct IUIImageFromBitmapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateImage(This,bitmap,options,image) )
DEFINE_GUID(CLSID_UIRibbonFramework,0x926749fa, 0x2615, 0x4987, 0x88, 0x45, 0xc3, 0x3e, 0x65, 0xf2, 0xb9, 0x57);
DEFINE_GUID(CLSID_UIRibbonImageFromBitmapFactory,
                                    0x0f7434b6, 0x59b6, 0x4250, 0x99, 0x9e, 0xd1, 0x68, 0xd6, 0xae, 0x42, 0x93);
DEFINE_GUID(LIBID_UIRibbon, 0x942f35c2, 0xe83b, 0x45ef, 0xb0, 0x85, 0xac, 0x29, 0x5d, 0xd6, 0x3d, 0x5b);
extern RPC_IF_HANDLE __MIDL_itf_UIRibbon_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIRibbon_0000_0012_v0_0_s_ifspec;
EXTERN_C const IID LIBID_UIRibbon;
EXTERN_C const CLSID CLSID_UIRibbonFramework;
class DECLSPEC_UUID("926749fa-2615-4987-8845-c33e65f2b957")
UIRibbonFramework;
EXTERN_C const CLSID CLSID_UIRibbonImageFromBitmapFactory;
class DECLSPEC_UUID("0F7434B6-59B6-4250-999E-D168D6AE4293")
UIRibbonImageFromBitmapFactory;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_UIRibbon_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIRibbon_0000_0013_v0_0_s_ifspec;
}
