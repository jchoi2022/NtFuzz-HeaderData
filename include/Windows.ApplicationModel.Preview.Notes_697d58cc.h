#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
       
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview;
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2;
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions;
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics;
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INotePlacementChangedPreviewEventArgs[] = L"Windows.ApplicationModel.Preview.Notes.INotePlacementChangedPreviewEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ViewId )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ViewId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INoteVisibilityChangedPreviewEventArgs[] = L"Windows.ApplicationModel.Preview.Notes.INoteVisibilityChangedPreviewEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ViewId )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVisible )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ViewId(This,value) )
    ( (This)->lpVtbl->get_IsVisible(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview[] = L"Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreview";
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsScreenLocked )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowNote )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                  INT32 noteViewId
        );
    HRESULT ( STDMETHODCALLTYPE *ShowNoteRelativeTo )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                  INT32 noteViewId,
                  INT32 anchorNoteViewId
        );
    HRESULT ( STDMETHODCALLTYPE *ShowNoteWithPlacement )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                  INT32 noteViewId,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data
        );
    HRESULT ( STDMETHODCALLTYPE *HideNote )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                  INT32 noteViewId
        );
    HRESULT ( STDMETHODCALLTYPE *GetNotePlacement )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                  INT32 noteViewId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * data
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetNoteSize )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                  INT32 noteViewId,
                  __x_ABI_CWindows_CFoundation_CSize size,
                           __RPC__out boolean * succeeded
        );
    HRESULT ( STDMETHODCALLTYPE *SetFocusToNextView )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetNotesThumbnailAsync )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * thumbnail,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SystemLockStateChanged )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SystemLockStateChanged )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NotePlacementChanged )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NotePlacementChanged )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NoteVisibilityChanged )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NoteVisibilityChanged )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsScreenLocked(This,value) )
    ( (This)->lpVtbl->ShowNote(This,noteViewId) )
    ( (This)->lpVtbl->ShowNoteRelativeTo(This,noteViewId,anchorNoteViewId) )
    ( (This)->lpVtbl->ShowNoteWithPlacement(This,noteViewId,data) )
    ( (This)->lpVtbl->HideNote(This,noteViewId) )
    ( (This)->lpVtbl->GetNotePlacement(This,noteViewId,data) )
    ( (This)->lpVtbl->TrySetNoteSize(This,noteViewId,size,succeeded) )
    ( (This)->lpVtbl->SetFocusToNextView(This) )
    ( (This)->lpVtbl->SetNotesThumbnailAsync(This,thumbnail,operation) )
    ( (This)->lpVtbl->add_SystemLockStateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SystemLockStateChanged(This,token) )
    ( (This)->lpVtbl->add_NotePlacementChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_NotePlacementChanged(This,token) )
    ( (This)->lpVtbl->add_NoteVisibilityChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_NoteVisibilityChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview2[] = L"Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreview2";
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ShowNoteRelativeToWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This,
                  INT32 noteViewId,
                  INT32 anchorNoteViewId,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * options
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowNoteWithPlacementWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This,
                  INT32 noteViewId,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * options
        );
    HRESULT ( STDMETHODCALLTYPE *SetFocusToPreviousView )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetThumbnailImageForTaskSwitcherAsync )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * bitmap,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowNoteRelativeToWithOptions(This,noteViewId,anchorNoteViewId,options) )
    ( (This)->lpVtbl->ShowNoteWithPlacementWithOptions(This,noteViewId,data,options) )
    ( (This)->lpVtbl->SetFocusToPreviousView(This) )
    ( (This)->lpVtbl->SetThumbnailImageForTaskSwitcherAsync(This,bitmap,action) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreviewShowNoteOptions[] = L"Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreviewShowNoteOptions";
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ShowWithFocus )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShowWithFocus )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptionsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ShowWithFocus(This,value) )
    ( (This)->lpVtbl->put_ShowWithFocus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreviewStatics[] = L"Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreviewStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentApp )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * * current
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentApp(This,current) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_Notes_NotePlacementChangedPreviewEventArgs[] = L"Windows.ApplicationModel.Preview.Notes.NotePlacementChangedPreviewEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_Notes_NoteVisibilityChangedPreviewEventArgs[] = L"Windows.ApplicationModel.Preview.Notes.NoteVisibilityChangedPreviewEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_Notes_NotesWindowManagerPreview[] = L"Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreview";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_Notes_NotesWindowManagerPreviewShowNoteOptions[] = L"Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreviewShowNoteOptions";
       
       
#pragma clang diagnostic pop
