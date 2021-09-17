#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPhotoAcquireItem IPhotoAcquireItem;
typedef interface IUserInputString IUserInputString;
typedef interface IPhotoAcquireProgressCB IPhotoAcquireProgressCB;
typedef interface IPhotoProgressActionCB IPhotoProgressActionCB;
typedef interface IPhotoProgressDialog IPhotoProgressDialog;
typedef interface IPhotoAcquireSource IPhotoAcquireSource;
typedef interface IPhotoAcquire IPhotoAcquire;
typedef interface IPhotoAcquireSettings IPhotoAcquireSettings;
typedef interface IPhotoAcquireOptionsDialog IPhotoAcquireOptionsDialog;
typedef interface IPhotoAcquireDeviceSelectionDialog IPhotoAcquireDeviceSelectionDialog;
typedef interface IPhotoAcquirePlugin IPhotoAcquirePlugin;
typedef class PhotoAcquire PhotoAcquire;
typedef class PhotoAcquireAutoPlayDropTarget PhotoAcquireAutoPlayDropTarget;
typedef class PhotoAcquireAutoPlayHWEventHandler PhotoAcquireAutoPlayHWEventHandler;
typedef class PhotoAcquireOptionsDialog PhotoAcquireOptionsDialog;
typedef class PhotoProgressDialog PhotoProgressDialog;
typedef class PhotoAcquireDeviceSelectionDialog PhotoAcquireDeviceSelectionDialog;
#include "objidl.h"
#include "propidl.h"
#include "shobjidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <PhotoAcquireProperties.h>
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IPhotoAcquireItem;
    typedef struct IPhotoAcquireItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPhotoAcquireItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPhotoAcquireItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPhotoAcquireItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetItemName )(
            __RPC__in IPhotoAcquireItem * This,
                        __RPC__deref_out_opt BSTR *pbstrItemName);
        HRESULT ( STDMETHODCALLTYPE *GetThumbnail )(
            __RPC__in IPhotoAcquireItem * This,
                       SIZE sizeThumbnail,
                        __RPC__deref_out_opt HBITMAP *phbmpThumbnail);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IPhotoAcquireItem * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out PROPVARIANT *pv);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IPhotoAcquireItem * This,
                       __RPC__in REFPROPERTYKEY key,
                       __RPC__in const PROPVARIANT *pv);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IPhotoAcquireItem * This,
                        __RPC__deref_out_opt IStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *CanDelete )(
            __RPC__in IPhotoAcquireItem * This,
                        __RPC__out BOOL *pfCanDelete);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IPhotoAcquireItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetSubItemCount )(
            __RPC__in IPhotoAcquireItem * This,
                        __RPC__out UINT *pnCount);
        HRESULT ( STDMETHODCALLTYPE *GetSubItemAt )(
            __RPC__in IPhotoAcquireItem * This,
                       UINT nItemIndex,
                        __RPC__deref_out_opt IPhotoAcquireItem **ppPhotoAcquireItem);
        END_INTERFACE
    } IPhotoAcquireItemVtbl;
    interface IPhotoAcquireItem
    {
        CONST_VTBL struct IPhotoAcquireItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItemName(This,pbstrItemName) )
    ( (This)->lpVtbl -> GetThumbnail(This,sizeThumbnail,phbmpThumbnail) )
    ( (This)->lpVtbl -> GetProperty(This,key,pv) )
    ( (This)->lpVtbl -> SetProperty(This,key,pv) )
    ( (This)->lpVtbl -> GetStream(This,ppStream) )
    ( (This)->lpVtbl -> CanDelete(This,pfCanDelete) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> GetSubItemCount(This,pnCount) )
    ( (This)->lpVtbl -> GetSubItemAt(This,nItemIndex,ppPhotoAcquireItem) )
typedef
enum tagUSER_INPUT_STRING_TYPE
    {
        USER_INPUT_DEFAULT = 0,
        USER_INPUT_PATH_ELEMENT = 0x1
    } USER_INPUT_STRING_TYPE;
EXTERN_C const IID IID_IUserInputString;
    typedef struct IUserInputStringVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUserInputString * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUserInputString * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUserInputString * This);
        HRESULT ( STDMETHODCALLTYPE *GetSubmitButtonText )(
            __RPC__in IUserInputString * This,
                        __RPC__deref_out_opt BSTR *pbstrSubmitButtonText);
        HRESULT ( STDMETHODCALLTYPE *GetPrompt )(
            __RPC__in IUserInputString * This,
                        __RPC__deref_out_opt BSTR *pbstrPromptTitle);
        HRESULT ( STDMETHODCALLTYPE *GetStringId )(
            __RPC__in IUserInputString * This,
                        __RPC__deref_out_opt BSTR *pbstrStringId);
        HRESULT ( STDMETHODCALLTYPE *GetStringType )(
            __RPC__in IUserInputString * This,
                        __RPC__out USER_INPUT_STRING_TYPE *pnStringType);
        HRESULT ( STDMETHODCALLTYPE *GetTooltipText )(
            __RPC__in IUserInputString * This,
                        __RPC__deref_out_opt BSTR *pbstrTooltipText);
        HRESULT ( STDMETHODCALLTYPE *GetMaxLength )(
            __RPC__in IUserInputString * This,
                        __RPC__out UINT *pcchMaxLength);
        HRESULT ( STDMETHODCALLTYPE *GetDefault )(
            __RPC__in IUserInputString * This,
                        __RPC__deref_out_opt BSTR *pbstrDefault);
        HRESULT ( STDMETHODCALLTYPE *GetMruCount )(
            __RPC__in IUserInputString * This,
                        __RPC__out UINT *pnMruCount);
        HRESULT ( STDMETHODCALLTYPE *GetMruEntryAt )(
            __RPC__in IUserInputString * This,
                       UINT nIndex,
                        __RPC__deref_out_opt BSTR *pbstrMruEntry);
        HRESULT ( STDMETHODCALLTYPE *GetImage )(
            __RPC__in IUserInputString * This,
                       UINT nSize,
                                    __RPC__deref_opt_inout_opt HBITMAP *phBitmap,
                                    __RPC__deref_opt_inout_opt HICON *phIcon);
        END_INTERFACE
    } IUserInputStringVtbl;
    interface IUserInputString
    {
        CONST_VTBL struct IUserInputStringVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSubmitButtonText(This,pbstrSubmitButtonText) )
    ( (This)->lpVtbl -> GetPrompt(This,pbstrPromptTitle) )
    ( (This)->lpVtbl -> GetStringId(This,pbstrStringId) )
    ( (This)->lpVtbl -> GetStringType(This,pnStringType) )
    ( (This)->lpVtbl -> GetTooltipText(This,pbstrTooltipText) )
    ( (This)->lpVtbl -> GetMaxLength(This,pcchMaxLength) )
    ( (This)->lpVtbl -> GetDefault(This,pbstrDefault) )
    ( (This)->lpVtbl -> GetMruCount(This,pnMruCount) )
    ( (This)->lpVtbl -> GetMruEntryAt(This,nIndex,pbstrMruEntry) )
    ( (This)->lpVtbl -> GetImage(This,nSize,phBitmap,phIcon) )
typedef
enum tagERROR_ADVISE_MESSAGE_TYPE
    {
        PHOTOACQUIRE_ERROR_SKIPRETRYCANCEL = 0,
        PHOTOACQUIRE_ERROR_RETRYCANCEL = 1,
        PHOTOACQUIRE_ERROR_YESNO = 2,
        PHOTOACQUIRE_ERROR_OK = 3
    } ERROR_ADVISE_MESSAGE_TYPE;
typedef
enum tagERROR_ADVISE_RESULT
    {
        PHOTOACQUIRE_RESULT_YES = 0,
        PHOTOACQUIRE_RESULT_NO = 1,
        PHOTOACQUIRE_RESULT_OK = 2,
        PHOTOACQUIRE_RESULT_SKIP = 3,
        PHOTOACQUIRE_RESULT_SKIP_ALL = 4,
        PHOTOACQUIRE_RESULT_RETRY = 5,
        PHOTOACQUIRE_RESULT_ABORT = 6
    } ERROR_ADVISE_RESULT;
EXTERN_C const IID IID_IPhotoAcquireProgressCB;
    typedef struct IPhotoAcquireProgressCBVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPhotoAcquireProgressCB * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPhotoAcquireProgressCB * This);
        HRESULT ( STDMETHODCALLTYPE *Cancelled )(
            __RPC__in IPhotoAcquireProgressCB * This,
                        __RPC__out BOOL *pfCancelled);
        HRESULT ( STDMETHODCALLTYPE *StartEnumeration )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       __RPC__in_opt IPhotoAcquireSource *pPhotoAcquireSource);
        HRESULT ( STDMETHODCALLTYPE *FoundItem )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       __RPC__in_opt IPhotoAcquireItem *pPhotoAcquireItem);
        HRESULT ( STDMETHODCALLTYPE *EndEnumeration )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *StartTransfer )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       __RPC__in_opt IPhotoAcquireSource *pPhotoAcquireSource);
        HRESULT ( STDMETHODCALLTYPE *StartItemTransfer )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       UINT nItemIndex,
                       __RPC__in_opt IPhotoAcquireItem *pPhotoAcquireItem);
        HRESULT ( STDMETHODCALLTYPE *DirectoryCreated )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       __RPC__in LPCWSTR pszDirectory);
        HRESULT ( STDMETHODCALLTYPE *UpdateTransferPercent )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       BOOL fOverall,
                       UINT nPercent);
        HRESULT ( STDMETHODCALLTYPE *EndItemTransfer )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       UINT nItemIndex,
                       __RPC__in_opt IPhotoAcquireItem *pPhotoAcquireItem,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *EndTransfer )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *StartDelete )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       __RPC__in_opt IPhotoAcquireSource *pPhotoAcquireSource);
        HRESULT ( STDMETHODCALLTYPE *StartItemDelete )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       UINT nItemIndex,
                       __RPC__in_opt IPhotoAcquireItem *pPhotoAcquireItem);
        HRESULT ( STDMETHODCALLTYPE *UpdateDeletePercent )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       UINT nPercent);
        HRESULT ( STDMETHODCALLTYPE *EndItemDelete )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       UINT nItemIndex,
                       __RPC__in_opt IPhotoAcquireItem *pPhotoAcquireItem,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *EndDelete )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *EndSession )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *GetDeleteAfterAcquire )(
            __RPC__in IPhotoAcquireProgressCB * This,
                        __RPC__out BOOL *pfDeleteAfterAcquire);
        HRESULT ( STDMETHODCALLTYPE *ErrorAdvise )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       HRESULT hr,
                       __RPC__in LPCWSTR pszErrorMessage,
                       ERROR_ADVISE_MESSAGE_TYPE nMessageType,
                        __RPC__out ERROR_ADVISE_RESULT *pnErrorAdviseResult);
        HRESULT ( STDMETHODCALLTYPE *GetUserInput )(
            __RPC__in IPhotoAcquireProgressCB * This,
                       __RPC__in REFIID riidType,
                       __RPC__in_opt IUnknown *pUnknown,
                        __RPC__out PROPVARIANT *pPropVarResult,
                               __RPC__in_opt const PROPVARIANT *pPropVarDefault);
        END_INTERFACE
    } IPhotoAcquireProgressCBVtbl;
    interface IPhotoAcquireProgressCB
    {
        CONST_VTBL struct IPhotoAcquireProgressCBVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Cancelled(This,pfCancelled) )
    ( (This)->lpVtbl -> StartEnumeration(This,pPhotoAcquireSource) )
    ( (This)->lpVtbl -> FoundItem(This,pPhotoAcquireItem) )
    ( (This)->lpVtbl -> EndEnumeration(This,hr) )
    ( (This)->lpVtbl -> StartTransfer(This,pPhotoAcquireSource) )
    ( (This)->lpVtbl -> StartItemTransfer(This,nItemIndex,pPhotoAcquireItem) )
    ( (This)->lpVtbl -> DirectoryCreated(This,pszDirectory) )
    ( (This)->lpVtbl -> UpdateTransferPercent(This,fOverall,nPercent) )
    ( (This)->lpVtbl -> EndItemTransfer(This,nItemIndex,pPhotoAcquireItem,hr) )
    ( (This)->lpVtbl -> EndTransfer(This,hr) )
    ( (This)->lpVtbl -> StartDelete(This,pPhotoAcquireSource) )
    ( (This)->lpVtbl -> StartItemDelete(This,nItemIndex,pPhotoAcquireItem) )
    ( (This)->lpVtbl -> UpdateDeletePercent(This,nPercent) )
    ( (This)->lpVtbl -> EndItemDelete(This,nItemIndex,pPhotoAcquireItem,hr) )
    ( (This)->lpVtbl -> EndDelete(This,hr) )
    ( (This)->lpVtbl -> EndSession(This,hr) )
    ( (This)->lpVtbl -> GetDeleteAfterAcquire(This,pfDeleteAfterAcquire) )
    ( (This)->lpVtbl -> ErrorAdvise(This,hr,pszErrorMessage,nMessageType,pnErrorAdviseResult) )
    ( (This)->lpVtbl -> GetUserInput(This,riidType,pUnknown,pPropVarResult,pPropVarDefault) )
EXTERN_C const IID IID_IPhotoProgressActionCB;
    typedef struct IPhotoProgressActionCBVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPhotoProgressActionCB * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPhotoProgressActionCB * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPhotoProgressActionCB * This);
        HRESULT ( STDMETHODCALLTYPE *DoAction )(
            __RPC__in IPhotoProgressActionCB * This,
            __RPC__in HWND hWndParent);
        END_INTERFACE
    } IPhotoProgressActionCBVtbl;
    interface IPhotoProgressActionCB
    {
        CONST_VTBL struct IPhotoProgressActionCBVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DoAction(This,hWndParent) )
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0004_v0_0_s_ifspec;
typedef
enum tagPROGRESS_DIALOG_IMAGE_TYPE
    {
        PROGRESS_DIALOG_ICON_SMALL = 0,
        PROGRESS_DIALOG_ICON_LARGE = 0x1,
        PROGRESS_DIALOG_ICON_THUMBNAIL = 0x2,
        PROGRESS_DIALOG_BITMAP_THUMBNAIL = 0x3
    } PROGRESS_DIALOG_IMAGE_TYPE;
typedef
enum tagPROGRESS_DIALOG_CHECKBOX_ID
    {
        PROGRESS_DIALOG_CHECKBOX_ID_DEFAULT = 0
    } PROGRESS_DIALOG_CHECKBOX_ID;
EXTERN_C const IID IID_IPhotoProgressDialog;
    typedef struct IPhotoProgressDialogVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPhotoProgressDialog * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPhotoProgressDialog * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPhotoProgressDialog * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IPhotoProgressDialog * This,
                       __RPC__in HWND hwndParent);
        HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            __RPC__in IPhotoProgressDialog * This,
                        __RPC__deref_out_opt HWND *phwndProgressDialog);
        HRESULT ( STDMETHODCALLTYPE *Destroy )(
            __RPC__in IPhotoProgressDialog * This);
        HRESULT ( STDMETHODCALLTYPE *SetTitle )(
            __RPC__in IPhotoProgressDialog * This,
                               __RPC__in_string LPCWSTR pszTitle);
        HRESULT ( STDMETHODCALLTYPE *ShowCheckbox )(
            __RPC__in IPhotoProgressDialog * This,
                       PROGRESS_DIALOG_CHECKBOX_ID nCheckboxId,
                       BOOL fShow);
        HRESULT ( STDMETHODCALLTYPE *SetCheckboxText )(
            __RPC__in IPhotoProgressDialog * This,
                       PROGRESS_DIALOG_CHECKBOX_ID nCheckboxId,
                               __RPC__in_string LPCWSTR pszCheckboxText);
        HRESULT ( STDMETHODCALLTYPE *SetCheckboxCheck )(
            __RPC__in IPhotoProgressDialog * This,
                       PROGRESS_DIALOG_CHECKBOX_ID nCheckboxId,
                       BOOL fChecked);
        HRESULT ( STDMETHODCALLTYPE *SetCheckboxTooltip )(
            __RPC__in IPhotoProgressDialog * This,
                       PROGRESS_DIALOG_CHECKBOX_ID nCheckboxId,
                               __RPC__in_string LPCWSTR pszCheckboxTooltipText);
        HRESULT ( STDMETHODCALLTYPE *IsCheckboxChecked )(
            __RPC__in IPhotoProgressDialog * This,
                       PROGRESS_DIALOG_CHECKBOX_ID nCheckboxId,
                        __RPC__out BOOL *pfChecked);
        HRESULT ( STDMETHODCALLTYPE *SetCaption )(
            __RPC__in IPhotoProgressDialog * This,
                               __RPC__in_string LPCWSTR pszTitle);
        HRESULT ( STDMETHODCALLTYPE *SetImage )(
            __RPC__in IPhotoProgressDialog * This,
                       PROGRESS_DIALOG_IMAGE_TYPE nImageType,
                               __RPC__in_opt HICON hIcon,
                               __RPC__in_opt HBITMAP hBitmap);
        HRESULT ( STDMETHODCALLTYPE *SetPercentComplete )(
            __RPC__in IPhotoProgressDialog * This,
                       int nPercent);
        HRESULT ( STDMETHODCALLTYPE *SetProgressText )(
            __RPC__in IPhotoProgressDialog * This,
                               __RPC__in_string LPCWSTR pszProgressText);
        HRESULT ( STDMETHODCALLTYPE *SetActionLinkCallback )(
            __RPC__in IPhotoProgressDialog * This,
                       __RPC__in_opt IPhotoProgressActionCB *pPhotoProgressActionCB);
        HRESULT ( STDMETHODCALLTYPE *SetActionLinkText )(
            __RPC__in IPhotoProgressDialog * This,
                       __RPC__in LPCWSTR pszCaption);
        HRESULT ( STDMETHODCALLTYPE *ShowActionLink )(
            __RPC__in IPhotoProgressDialog * This,
                       BOOL fShow);
        HRESULT ( STDMETHODCALLTYPE *IsCancelled )(
            __RPC__in IPhotoProgressDialog * This,
                        __RPC__out BOOL *pfCancelled);
        HRESULT ( STDMETHODCALLTYPE *GetUserInput )(
            __RPC__in IPhotoProgressDialog * This,
                       __RPC__in REFIID riidType,
                       __RPC__in_opt IUnknown *pUnknown,
                        __RPC__out PROPVARIANT *pPropVarResult,
                               __RPC__in_opt const PROPVARIANT *pPropVarDefault);
        END_INTERFACE
    } IPhotoProgressDialogVtbl;
    interface IPhotoProgressDialog
    {
        CONST_VTBL struct IPhotoProgressDialogVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,hwndParent) )
    ( (This)->lpVtbl -> GetWindow(This,phwndProgressDialog) )
    ( (This)->lpVtbl -> Destroy(This) )
    ( (This)->lpVtbl -> SetTitle(This,pszTitle) )
    ( (This)->lpVtbl -> ShowCheckbox(This,nCheckboxId,fShow) )
    ( (This)->lpVtbl -> SetCheckboxText(This,nCheckboxId,pszCheckboxText) )
    ( (This)->lpVtbl -> SetCheckboxCheck(This,nCheckboxId,fChecked) )
    ( (This)->lpVtbl -> SetCheckboxTooltip(This,nCheckboxId,pszCheckboxTooltipText) )
    ( (This)->lpVtbl -> IsCheckboxChecked(This,nCheckboxId,pfChecked) )
    ( (This)->lpVtbl -> SetCaption(This,pszTitle) )
    ( (This)->lpVtbl -> SetImage(This,nImageType,hIcon,hBitmap) )
    ( (This)->lpVtbl -> SetPercentComplete(This,nPercent) )
    ( (This)->lpVtbl -> SetProgressText(This,pszProgressText) )
    ( (This)->lpVtbl -> SetActionLinkCallback(This,pPhotoProgressActionCB) )
    ( (This)->lpVtbl -> SetActionLinkText(This,pszCaption) )
    ( (This)->lpVtbl -> ShowActionLink(This,fShow) )
    ( (This)->lpVtbl -> IsCancelled(This,pfCancelled) )
    ( (This)->lpVtbl -> GetUserInput(This,riidType,pUnknown,pPropVarResult,pPropVarDefault) )
EXTERN_C const IID IID_IPhotoAcquireSource;
    typedef struct IPhotoAcquireSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPhotoAcquireSource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPhotoAcquireSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPhotoAcquireSource * This);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            __RPC__in IPhotoAcquireSource * This,
                        __RPC__deref_out_opt BSTR *pbstrFriendlyName);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceIcons )(
            __RPC__in IPhotoAcquireSource * This,
                       UINT nSize,
                                    __RPC__deref_opt_inout_opt HICON *phLargeIcon,
                                    __RPC__deref_opt_inout_opt HICON *phSmallIcon);
        HRESULT ( STDMETHODCALLTYPE *InitializeItemList )(
            __RPC__in IPhotoAcquireSource * This,
                       BOOL fForceEnumeration,
                               __RPC__in_opt IPhotoAcquireProgressCB *pPhotoAcquireProgressCB,
                                    __RPC__inout_opt UINT *pnItemCount);
        HRESULT ( STDMETHODCALLTYPE *GetItemCount )(
            __RPC__in IPhotoAcquireSource * This,
                        __RPC__out UINT *pnItemCount);
        HRESULT ( STDMETHODCALLTYPE *GetItemAt )(
            __RPC__in IPhotoAcquireSource * This,
                       UINT nIndex,
                        __RPC__deref_out_opt IPhotoAcquireItem **ppPhotoAcquireItem);
        HRESULT ( STDMETHODCALLTYPE *GetPhotoAcquireSettings )(
            __RPC__in IPhotoAcquireSource * This,
                        __RPC__deref_out_opt IPhotoAcquireSettings **ppPhotoAcquireSettings);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceId )(
            __RPC__in IPhotoAcquireSource * This,
                        __RPC__deref_out_opt BSTR *pbstrDeviceId);
        HRESULT ( STDMETHODCALLTYPE *BindToObject )(
            __RPC__in IPhotoAcquireSource * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IPhotoAcquireSourceVtbl;
    interface IPhotoAcquireSource
    {
        CONST_VTBL struct IPhotoAcquireSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFriendlyName(This,pbstrFriendlyName) )
    ( (This)->lpVtbl -> GetDeviceIcons(This,nSize,phLargeIcon,phSmallIcon) )
    ( (This)->lpVtbl -> InitializeItemList(This,fForceEnumeration,pPhotoAcquireProgressCB,pnItemCount) )
    ( (This)->lpVtbl -> GetItemCount(This,pnItemCount) )
    ( (This)->lpVtbl -> GetItemAt(This,nIndex,ppPhotoAcquireItem) )
    ( (This)->lpVtbl -> GetPhotoAcquireSettings(This,ppPhotoAcquireSettings) )
    ( (This)->lpVtbl -> GetDeviceId(This,pbstrDeviceId) )
    ( (This)->lpVtbl -> BindToObject(This,riid,ppv) )
EXTERN_C const IID IID_IPhotoAcquire;
    typedef struct IPhotoAcquireVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPhotoAcquire * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPhotoAcquire * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPhotoAcquire * This);
        HRESULT ( STDMETHODCALLTYPE *CreatePhotoSource )(
            __RPC__in IPhotoAcquire * This,
                               __RPC__in_string LPCWSTR pszDevice,
                        __RPC__deref_out_opt IPhotoAcquireSource **ppPhotoAcquireSource);
        HRESULT ( STDMETHODCALLTYPE *Acquire )(
            __RPC__in IPhotoAcquire * This,
                       __RPC__in_opt IPhotoAcquireSource *pPhotoAcquireSource,
                       BOOL fShowProgress,
                               __RPC__in_opt HWND hWndParent,
                               __RPC__in_opt LPCWSTR pszApplicationName,
                               __RPC__in_opt IPhotoAcquireProgressCB *pPhotoAcquireProgressCB);
        HRESULT ( STDMETHODCALLTYPE *EnumResults )(
            __RPC__in IPhotoAcquire * This,
                        __RPC__deref_out_opt IEnumString **ppEnumFilePaths);
        END_INTERFACE
    } IPhotoAcquireVtbl;
    interface IPhotoAcquire
    {
        CONST_VTBL struct IPhotoAcquireVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreatePhotoSource(This,pszDevice,ppPhotoAcquireSource) )
    ( (This)->lpVtbl -> Acquire(This,pPhotoAcquireSource,fShowProgress,hWndParent,pszApplicationName,pPhotoAcquireProgressCB) )
    ( (This)->lpVtbl -> EnumResults(This,ppEnumFilePaths) )
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IPhotoAcquireSettings;
    typedef struct IPhotoAcquireSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPhotoAcquireSettings * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPhotoAcquireSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPhotoAcquireSettings * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromRegistry )(
            __RPC__in IPhotoAcquireSettings * This,
                       __RPC__in LPCWSTR pszRegistryKey);
        HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            __RPC__in IPhotoAcquireSettings * This,
                       DWORD dwPhotoAcquireFlags);
        HRESULT ( STDMETHODCALLTYPE *SetOutputFilenameTemplate )(
            __RPC__in IPhotoAcquireSettings * This,
                               __RPC__in_string LPCWSTR pszTemplate);
        HRESULT ( STDMETHODCALLTYPE *SetSequencePaddingWidth )(
            __RPC__in IPhotoAcquireSettings * This,
                       DWORD dwWidth);
        HRESULT ( STDMETHODCALLTYPE *SetSequenceZeroPadding )(
            __RPC__in IPhotoAcquireSettings * This,
                       BOOL fZeroPad);
        HRESULT ( STDMETHODCALLTYPE *SetGroupTag )(
            __RPC__in IPhotoAcquireSettings * This,
                               __RPC__in_string LPCWSTR pszGroupTag);
        HRESULT ( STDMETHODCALLTYPE *SetAcquisitionTime )(
            __RPC__in IPhotoAcquireSettings * This,
                       __RPC__in const FILETIME *pftAcquisitionTime);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            __RPC__in IPhotoAcquireSettings * This,
                        __RPC__out DWORD *pdwPhotoAcquireFlags);
        HRESULT ( STDMETHODCALLTYPE *GetOutputFilenameTemplate )(
            __RPC__in IPhotoAcquireSettings * This,
                        __RPC__deref_out_opt BSTR *pbstrTemplate);
        HRESULT ( STDMETHODCALLTYPE *GetSequencePaddingWidth )(
            __RPC__in IPhotoAcquireSettings * This,
                        __RPC__out DWORD *pdwWidth);
        HRESULT ( STDMETHODCALLTYPE *GetSequenceZeroPadding )(
            __RPC__in IPhotoAcquireSettings * This,
                        __RPC__out BOOL *pfZeroPad);
        HRESULT ( STDMETHODCALLTYPE *GetGroupTag )(
            __RPC__in IPhotoAcquireSettings * This,
                        __RPC__deref_out_opt BSTR *pbstrGroupTag);
        HRESULT ( STDMETHODCALLTYPE *GetAcquisitionTime )(
            __RPC__in IPhotoAcquireSettings * This,
                        __RPC__out FILETIME *pftAcquisitionTime);
        END_INTERFACE
    } IPhotoAcquireSettingsVtbl;
    interface IPhotoAcquireSettings
    {
        CONST_VTBL struct IPhotoAcquireSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitializeFromRegistry(This,pszRegistryKey) )
    ( (This)->lpVtbl -> SetFlags(This,dwPhotoAcquireFlags) )
    ( (This)->lpVtbl -> SetOutputFilenameTemplate(This,pszTemplate) )
    ( (This)->lpVtbl -> SetSequencePaddingWidth(This,dwWidth) )
    ( (This)->lpVtbl -> SetSequenceZeroPadding(This,fZeroPad) )
    ( (This)->lpVtbl -> SetGroupTag(This,pszGroupTag) )
    ( (This)->lpVtbl -> SetAcquisitionTime(This,pftAcquisitionTime) )
    ( (This)->lpVtbl -> GetFlags(This,pdwPhotoAcquireFlags) )
    ( (This)->lpVtbl -> GetOutputFilenameTemplate(This,pbstrTemplate) )
    ( (This)->lpVtbl -> GetSequencePaddingWidth(This,pdwWidth) )
    ( (This)->lpVtbl -> GetSequenceZeroPadding(This,pfZeroPad) )
    ( (This)->lpVtbl -> GetGroupTag(This,pbstrGroupTag) )
    ( (This)->lpVtbl -> GetAcquisitionTime(This,pftAcquisitionTime) )
EXTERN_C const IID IID_IPhotoAcquireOptionsDialog;
    typedef struct IPhotoAcquireOptionsDialogVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPhotoAcquireOptionsDialog * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPhotoAcquireOptionsDialog * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPhotoAcquireOptionsDialog * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IPhotoAcquireOptionsDialog * This,
                               __RPC__in_opt LPCWSTR pszRegistryRoot);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IPhotoAcquireOptionsDialog * This,
                       __RPC__in HWND hWndParent,
                        __RPC__deref_out_opt HWND *phWndDialog);
        HRESULT ( STDMETHODCALLTYPE *Destroy )(
            __RPC__in IPhotoAcquireOptionsDialog * This);
        HRESULT ( STDMETHODCALLTYPE *DoModal )(
            __RPC__in IPhotoAcquireOptionsDialog * This,
                       __RPC__in HWND hWndParent,
                                    __RPC__inout_opt INT_PTR *ppnReturnCode);
        HRESULT ( STDMETHODCALLTYPE *SaveData )(
            __RPC__in IPhotoAcquireOptionsDialog * This);
        END_INTERFACE
    } IPhotoAcquireOptionsDialogVtbl;
    interface IPhotoAcquireOptionsDialog
    {
        CONST_VTBL struct IPhotoAcquireOptionsDialogVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pszRegistryRoot) )
    ( (This)->lpVtbl -> Create(This,hWndParent,phWndDialog) )
    ( (This)->lpVtbl -> Destroy(This) )
    ( (This)->lpVtbl -> DoModal(This,hWndParent,ppnReturnCode) )
    ( (This)->lpVtbl -> SaveData(This) )
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0009_v0_0_s_ifspec;
typedef
enum tagDEVICE_SELECTION_DEVICE_TYPE
    {
        DST_UNKNOWN_DEVICE = 0,
        DST_WPD_DEVICE = 0x1,
        DST_WIA_DEVICE = 0x2,
        DST_STI_DEVICE = 0x3,
        DSF_TWAIN_DEVICE = 0x4,
        DST_FS_DEVICE = 0x5,
        DST_DV_DEVICE = 0x6
    } DEVICE_SELECTION_DEVICE_TYPE;
EXTERN_C const IID IID_IPhotoAcquireDeviceSelectionDialog;
    typedef struct IPhotoAcquireDeviceSelectionDialogVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPhotoAcquireDeviceSelectionDialog * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPhotoAcquireDeviceSelectionDialog * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPhotoAcquireDeviceSelectionDialog * This);
        HRESULT ( STDMETHODCALLTYPE *SetTitle )(
            __RPC__in IPhotoAcquireDeviceSelectionDialog * This,
                               __RPC__in_string LPCWSTR pszTitle);
        HRESULT ( STDMETHODCALLTYPE *SetSubmitButtonText )(
            __RPC__in IPhotoAcquireDeviceSelectionDialog * This,
                               __RPC__in_string LPCWSTR pszSubmitButtonText);
        HRESULT ( STDMETHODCALLTYPE *DoModal )(
            __RPC__in IPhotoAcquireDeviceSelectionDialog * This,
                       __RPC__in HWND hWndParent,
                       DWORD dwDeviceFlags,
                                    __RPC__deref_opt_inout_opt BSTR *pbstrDeviceId,
                                    __RPC__inout_opt DEVICE_SELECTION_DEVICE_TYPE *pnDeviceType);
        END_INTERFACE
    } IPhotoAcquireDeviceSelectionDialogVtbl;
    interface IPhotoAcquireDeviceSelectionDialog
    {
        CONST_VTBL struct IPhotoAcquireDeviceSelectionDialogVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetTitle(This,pszTitle) )
    ( (This)->lpVtbl -> SetSubmitButtonText(This,pszSubmitButtonText) )
    ( (This)->lpVtbl -> DoModal(This,hWndParent,dwDeviceFlags,pbstrDeviceId,pnDeviceType) )
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_IPhotoAcquirePlugin;
    typedef struct IPhotoAcquirePluginVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPhotoAcquirePlugin * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPhotoAcquirePlugin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPhotoAcquirePlugin * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IPhotoAcquirePlugin * This,
                       __RPC__in_opt IPhotoAcquireSource *pPhotoAcquireSource,
                       __RPC__in_opt IPhotoAcquireProgressCB *pPhotoAcquireProgressCB);
        HRESULT ( STDMETHODCALLTYPE *ProcessItem )(
            __RPC__in IPhotoAcquirePlugin * This,
                       DWORD dwAcquireStage,
                       __RPC__in_opt IPhotoAcquireItem *pPhotoAcquireItem,
                       __RPC__in_opt IStream *pOriginalItemStream,
                       __RPC__in LPCWSTR pszFinalFilename,
                       __RPC__in_opt IPropertyStore *pPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *TransferComplete )(
            __RPC__in IPhotoAcquirePlugin * This,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *DisplayConfigureDialog )(
            __RPC__in IPhotoAcquirePlugin * This,
            __RPC__in HWND hWndParent);
        END_INTERFACE
    } IPhotoAcquirePluginVtbl;
    interface IPhotoAcquirePlugin
    {
        CONST_VTBL struct IPhotoAcquirePluginVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pPhotoAcquireSource,pPhotoAcquireProgressCB) )
    ( (This)->lpVtbl -> ProcessItem(This,dwAcquireStage,pPhotoAcquireItem,pOriginalItemStream,pszFinalFilename,pPropertyStore) )
    ( (This)->lpVtbl -> TransferComplete(This,hr) )
    ( (This)->lpVtbl -> DisplayConfigureDialog(This,hWndParent) )
EXTERN_C const IID LIBID_PhotoAcquireObjects;
EXTERN_C const CLSID CLSID_PhotoAcquire;
class DECLSPEC_UUID("00f26e02-e9f2-4a9f-9fdd-5a962fb26a98")
PhotoAcquire;
EXTERN_C const CLSID CLSID_PhotoAcquireAutoPlayDropTarget;
class DECLSPEC_UUID("00f20eb5-8fd6-4d9d-b75e-36801766c8f1")
PhotoAcquireAutoPlayDropTarget;
EXTERN_C const CLSID CLSID_PhotoAcquireAutoPlayHWEventHandler;
class DECLSPEC_UUID("00f2b433-44e4-4d88-b2b0-2698a0a91dba")
PhotoAcquireAutoPlayHWEventHandler;
EXTERN_C const CLSID CLSID_PhotoAcquireOptionsDialog;
class DECLSPEC_UUID("00f210a1-62f0-438b-9f7e-9618d72a1831")
PhotoAcquireOptionsDialog;
EXTERN_C const CLSID CLSID_PhotoProgressDialog;
class DECLSPEC_UUID("00f24ca0-748f-4e8a-894f-0e0357c6799f")
PhotoProgressDialog;
EXTERN_C const CLSID CLSID_PhotoAcquireDeviceSelectionDialog;
class DECLSPEC_UUID("00f29a34-b8a1-482c-bcf8-3ac7b0fe8f62")
PhotoAcquireDeviceSelectionDialog;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0012_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HBITMAP_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HICON_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HBITMAP_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree64( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HICON_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree64( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
}
