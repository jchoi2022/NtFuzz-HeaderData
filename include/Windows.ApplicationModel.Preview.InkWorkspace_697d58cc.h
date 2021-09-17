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
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager;
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManager[] = L"Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManager";
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetThumbnailAsync )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * bitmap,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetThumbnailAsync(This,bitmap,action) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManagerStatics[] = L"Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentApp )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager * * current
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentApp(This,current) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_InkWorkspace_InkWorkspaceHostedAppManager[] = L"Windows.ApplicationModel.Preview.InkWorkspace.InkWorkspaceHostedAppManager";
       
       
#pragma clang diagnostic pop
