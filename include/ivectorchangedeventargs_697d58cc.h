#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
       
#include "oaidl.h"
#include "inspectable.h"
#include "asyncinfo.h"
#include "eventtoken.h"
#include "windowscontracts.h"
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs;
#pragma warning (push)
#pragma warning (disable:4668)
#pragma warning (disable:4001)
       
#pragma warning (pop)
typedef
enum __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange
{
    CollectionChange_Reset,
    CollectionChange_ItemInserted,
    CollectionChange_ItemRemoved,
    CollectionChange_ItemChanged,
} __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Collections_IVectorChangedEventArgs[] = L"Windows.Foundation.Collections.IVectorChangedEventArgs";
typedef struct __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(
        __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Index )(
        __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * This,
                           __RPC__out unsigned int * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgsVtbl;
interface __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CollectionChange(This,value) )
    ( (This)->lpVtbl->get_Index(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs;
       
       
#pragma clang diagnostic pop
