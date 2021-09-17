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
#include "Windows.Storage.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI;
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs;
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI;
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral;
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs;
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation;
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest;
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral;
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * sender, __RPC__in_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * sender, __RPC__in_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * sender, __RPC__in_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;
EXTERN_C const IID IID___FIIterator_1_HSTRING;
typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out HSTRING *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;
interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;
EXTERN_C const IID IID___FIIterable_1_HSTRING;
typedef struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt __FIIterator_1_HSTRING **first);
    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;
interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIVectorView_1_HSTRING;
typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                                    unsigned int index,
                                                             __RPC__out HSTRING *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_HSTRING * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       HSTRING item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;
interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef enum __x_ABI_CWindows_CStorage_CPickers_CProvider_CAddFileResult __x_ABI_CWindows_CStorage_CPickers_CProvider_CAddFileResult;
typedef enum __x_ABI_CWindows_CStorage_CPickers_CProvider_CFileSelectionMode __x_ABI_CWindows_CStorage_CPickers_CProvider_CFileSelectionMode;
typedef enum __x_ABI_CWindows_CStorage_CPickers_CProvider_CSetFileNameResult __x_ABI_CWindows_CStorage_CPickers_CProvider_CSetFileNameResult;
enum __x_ABI_CWindows_CStorage_CPickers_CProvider_CAddFileResult
{
    AddFileResult_Added = 0,
    AddFileResult_AlreadyAdded = 1,
    AddFileResult_NotAllowed = 2,
    AddFileResult_Unavailable = 3,
};
enum __x_ABI_CWindows_CStorage_CPickers_CProvider_CFileSelectionMode
{
    FileSelectionMode_Single = 0,
    FileSelectionMode_Multiple = 1,
};
enum __x_ABI_CWindows_CStorage_CPickers_CProvider_CSetFileNameResult
{
    SetFileNameResult_Succeeded = 0,
    SetFileNameResult_NotAllowed = 1,
    SetFileNameResult_Unavailable = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IFileOpenPickerUI[] = L"Windows.Storage.Pickers.Provider.IFileOpenPickerUI";
typedef struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUIVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddFile )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
                  __RPC__in HSTRING id,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__out __x_ABI_CWindows_CStorage_CPickers_CProvider_CAddFileResult * addResult
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveFile )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
                  __RPC__in HSTRING id
        );
    HRESULT ( STDMETHODCALLTYPE *ContainsFile )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
                  __RPC__in HSTRING id,
                           __RPC__out boolean * isContained
        );
    HRESULT ( STDMETHODCALLTYPE *CanAddFile )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__out boolean * canAdd
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowedFileTypes )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectionMode )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CPickers_CProvider_CFileSelectionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SettingsIdentifier )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
                                HRESULT ( STDMETHODCALLTYPE *add_FileRemoved )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CFileRemovedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_FileRemoved )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Closing )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileOpenPickerUI_Windows__CStorage__CPickers__CProvider__CPickerClosingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closing )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUIVtbl;
interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUIVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddFile(This,id,file,addResult) )
    ( (This)->lpVtbl->RemoveFile(This,id) )
    ( (This)->lpVtbl->ContainsFile(This,id,isContained) )
    ( (This)->lpVtbl->CanAddFile(This,file,canAdd) )
    ( (This)->lpVtbl->get_AllowedFileTypes(This,value) )
    ( (This)->lpVtbl->get_SelectionMode(This,value) )
    ( (This)->lpVtbl->get_SettingsIdentifier(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
    ( (This)->lpVtbl->add_FileRemoved(This,handler,token) )
DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
    ( (This)->lpVtbl->remove_FileRemoved(This,token) )
    ( (This)->lpVtbl->add_Closing(This,handler,token) )
    ( (This)->lpVtbl->remove_Closing(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IFileRemovedEventArgs[] = L"Windows.Storage.Pickers.Provider.IFileRemovedEventArgs";
typedef struct
DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
__x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
                               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgsVtbl;
interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
    ( (This)->lpVtbl->get_Id(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileRemovedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IFileSavePickerUI[] = L"Windows.Storage.Pickers.Provider.IFileSavePickerUI";
typedef struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUIVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowedFileTypes )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SettingsIdentifier )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FileName )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetFileName )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
                  __RPC__in HSTRING value,
                           __RPC__out __x_ABI_CWindows_CStorage_CPickers_CProvider_CSetFileNameResult * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_FileNameChanged )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FileNameChanged )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TargetFileRequested )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CPickers__CProvider__CFileSavePickerUI_Windows__CStorage__CPickers__CProvider__CTargetFileRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TargetFileRequested )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUIVtbl;
interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUIVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_AllowedFileTypes(This,value) )
    ( (This)->lpVtbl->get_SettingsIdentifier(This,value) )
    ( (This)->lpVtbl->get_FileName(This,value) )
    ( (This)->lpVtbl->TrySetFileName(This,value,result) )
    ( (This)->lpVtbl->add_FileNameChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_FileNameChanged(This,token) )
    ( (This)->lpVtbl->add_TargetFileRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_TargetFileRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IPickerClosingDeferral[] = L"Windows.Storage.Pickers.Provider.IPickerClosingDeferral";
typedef struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferralVtbl;
interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IPickerClosingEventArgs[] = L"Windows.Storage.Pickers.Provider.IPickerClosingEventArgs";
typedef struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ClosingOperation )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgsVtbl;
interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ClosingOperation(This,value) )
    ( (This)->lpVtbl->get_IsCanceled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_IPickerClosingOperation[] = L"Windows.Storage.Pickers.Provider.IPickerClosingOperation";
typedef struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingDeferral * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperationVtbl;
interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
    ( (This)->lpVtbl->get_Deadline(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CIPickerClosingOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_ITargetFileRequest[] = L"Windows.Storage.Pickers.Provider.ITargetFileRequest";
typedef struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TargetFile )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TargetFile )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestVtbl;
interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TargetFile(This,value) )
    ( (This)->lpVtbl->put_TargetFile(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_ITargetFileRequestDeferral[] = L"Windows.Storage.Pickers.Provider.ITargetFileRequestDeferral";
typedef struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferralVtbl;
interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_Provider_ITargetFileRequestedEventArgs[] = L"Windows.Storage.Pickers.Provider.ITargetFileRequestedEventArgs";
typedef struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CProvider_CITargetFileRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_FileOpenPickerUI[] = L"Windows.Storage.Pickers.Provider.FileOpenPickerUI";
DEPRECATED("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_FileRemovedEventArgs[] = L"Windows.Storage.Pickers.Provider.FileRemovedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_FileSavePickerUI[] = L"Windows.Storage.Pickers.Provider.FileSavePickerUI";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_PickerClosingDeferral[] = L"Windows.Storage.Pickers.Provider.PickerClosingDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_PickerClosingEventArgs[] = L"Windows.Storage.Pickers.Provider.PickerClosingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_PickerClosingOperation[] = L"Windows.Storage.Pickers.Provider.PickerClosingOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_TargetFileRequest[] = L"Windows.Storage.Pickers.Provider.TargetFileRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_TargetFileRequestDeferral[] = L"Windows.Storage.Pickers.Provider.TargetFileRequestDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_Provider_TargetFileRequestedEventArgs[] = L"Windows.Storage.Pickers.Provider.TargetFileRequestedEventArgs";
       
       
#pragma clang diagnostic pop
