#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IOpenServiceActivityInput IOpenServiceActivityInput;
typedef interface IOpenServiceActivityOutputContext IOpenServiceActivityOutputContext;
typedef interface IOpenService IOpenService;
typedef interface IOpenServiceManager IOpenServiceManager;
typedef class OpenServiceManager OpenServiceManager;
typedef class OpenServiceActivityManager OpenServiceActivityManager;
typedef interface IOpenServiceActivity IOpenServiceActivity;
typedef interface IEnumOpenServiceActivity IEnumOpenServiceActivity;
typedef interface IOpenServiceActivityCategory IOpenServiceActivityCategory;
typedef interface IEnumOpenServiceActivityCategory IEnumOpenServiceActivityCategory;
typedef interface IOpenServiceActivityManager IOpenServiceActivityManager;
#include "objidl.h"
#include "oleidl.h"
#include "mshtml.h"
#include "exdisp.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum OpenServiceErrors
    {
        OS_E_NOTFOUND = 0x80030002,
        OS_E_NOTSUPPORTED = 0x80004021,
        OS_E_CANCELLED = 0x80002ef1,
        OS_E_GPDISABLED = 0xc00d0bdc
    } OpenServiceErrors;
typedef
enum OpenServiceActivityContentType
    {
        ActivityContentNone = -1,
        ActivityContentDocument = ( ActivityContentNone + 1 ) ,
        ActivityContentSelection = ( ActivityContentDocument + 1 ) ,
        ActivityContentLink = ( ActivityContentSelection + 1 ) ,
        ActivityContentCount = ( ActivityContentLink + 1 )
    } OpenServiceActivityContentType;
extern RPC_IF_HANDLE __MIDL_itf_openservice_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_openservice_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IOpenServiceActivityInput;
    typedef struct IOpenServiceActivityInputVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpenServiceActivityInput * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpenServiceActivityInput * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpenServiceActivityInput * This);
        HRESULT ( STDMETHODCALLTYPE *GetVariable )(
            __RPC__in IOpenServiceActivityInput * This,
                       __RPC__in LPCWSTR pwzVariableName,
                               __RPC__in_opt LPCWSTR pwzVariableType,
                        __RPC__deref_out_opt BSTR *pbstrVariableContent);
        HRESULT ( STDMETHODCALLTYPE *HasVariable )(
            __RPC__in IOpenServiceActivityInput * This,
                       __RPC__in LPCWSTR pwzVariableName,
                               __RPC__in_opt LPCWSTR pwzVariableType,
                        __RPC__out BOOL *pfHasVariable);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IOpenServiceActivityInput * This,
                        __RPC__out OpenServiceActivityContentType *pType);
        END_INTERFACE
    } IOpenServiceActivityInputVtbl;
    interface IOpenServiceActivityInput
    {
        CONST_VTBL struct IOpenServiceActivityInputVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetVariable(This,pwzVariableName,pwzVariableType,pbstrVariableContent) )
    ( (This)->lpVtbl -> HasVariable(This,pwzVariableName,pwzVariableType,pfHasVariable) )
    ( (This)->lpVtbl -> GetType(This,pType) )
EXTERN_C const IID IID_IOpenServiceActivityOutputContext;
    typedef struct IOpenServiceActivityOutputContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpenServiceActivityOutputContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpenServiceActivityOutputContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpenServiceActivityOutputContext * This);
        HRESULT ( STDMETHODCALLTYPE *Navigate )(
            __RPC__in IOpenServiceActivityOutputContext * This,
                       __RPC__in LPCWSTR pwzUri,
                               __RPC__in_opt LPCWSTR pwzMethod,
                               __RPC__in_opt LPCWSTR pwzHeaders,
                               __RPC__in_opt IStream *pPostData);
        HRESULT ( STDMETHODCALLTYPE *CanNavigate )(
            __RPC__in IOpenServiceActivityOutputContext * This,
                       __RPC__in LPCWSTR pwzUri,
                               __RPC__in_opt LPCWSTR pwzMethod,
                               __RPC__in_opt LPCWSTR pwzHeaders,
                               __RPC__in_opt IStream *pPostData,
                        __RPC__out BOOL *pfCanNavigate);
        END_INTERFACE
    } IOpenServiceActivityOutputContextVtbl;
    interface IOpenServiceActivityOutputContext
    {
        CONST_VTBL struct IOpenServiceActivityOutputContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Navigate(This,pwzUri,pwzMethod,pwzHeaders,pPostData) )
    ( (This)->lpVtbl -> CanNavigate(This,pwzUri,pwzMethod,pwzHeaders,pPostData,pfCanNavigate) )
EXTERN_C const IID IID_IOpenService;
    typedef struct IOpenServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpenService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpenService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpenService * This);
        HRESULT ( STDMETHODCALLTYPE *IsDefault )(
            __RPC__in IOpenService * This,
                        __RPC__out BOOL *pfIsDefault);
        HRESULT ( STDMETHODCALLTYPE *SetDefault )(
            __RPC__in IOpenService * This,
                       BOOL fDefault,
                       __RPC__in HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *GetID )(
            __RPC__in IOpenService * This,
                        __RPC__deref_out_opt BSTR *pbstrID);
        END_INTERFACE
    } IOpenServiceVtbl;
    interface IOpenService
    {
        CONST_VTBL struct IOpenServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsDefault(This,pfIsDefault) )
    ( (This)->lpVtbl -> SetDefault(This,fDefault,hwnd) )
    ( (This)->lpVtbl -> GetID(This,pbstrID) )
EXTERN_C const IID IID_IOpenServiceManager;
    typedef struct IOpenServiceManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpenServiceManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpenServiceManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpenServiceManager * This);
        HRESULT ( STDMETHODCALLTYPE *InstallService )(
            __RPC__in IOpenServiceManager * This,
                       __RPC__in LPCWSTR pwzServiceUrl,
                        __RPC__deref_out_opt IOpenService **ppService);
        HRESULT ( STDMETHODCALLTYPE *UninstallService )(
            __RPC__in IOpenServiceManager * This,
                       __RPC__in_opt IOpenService *pService);
        HRESULT ( STDMETHODCALLTYPE *GetServiceByID )(
            __RPC__in IOpenServiceManager * This,
                       __RPC__in LPCWSTR pwzID,
                        __RPC__deref_out_opt IOpenService **ppService);
        END_INTERFACE
    } IOpenServiceManagerVtbl;
    interface IOpenServiceManager
    {
        CONST_VTBL struct IOpenServiceManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InstallService(This,pwzServiceUrl,ppService) )
    ( (This)->lpVtbl -> UninstallService(This,pService) )
    ( (This)->lpVtbl -> GetServiceByID(This,pwzID,ppService) )
EXTERN_C const IID LIBID_IEOpenServiceObjects;
EXTERN_C const CLSID CLSID_OpenServiceManager;
class DECLSPEC_UUID("098870b6-39ea-480b-b8b5-dd0167c4db59")
OpenServiceManager;
EXTERN_C const CLSID CLSID_OpenServiceActivityManager;
class DECLSPEC_UUID("c5efd803-50f8-43cd-9ab8-aafc1394c9e0")
OpenServiceActivityManager;
EXTERN_C const IID IID_IOpenServiceActivity;
    typedef struct IOpenServiceActivityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpenServiceActivity * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpenServiceActivity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpenServiceActivity * This);
        HRESULT ( STDMETHODCALLTYPE *IsDefault )(
            __RPC__in IOpenServiceActivity * This,
                        __RPC__out BOOL *pfIsDefault);
        HRESULT ( STDMETHODCALLTYPE *SetDefault )(
            __RPC__in IOpenServiceActivity * This,
                       BOOL fDefault,
                       __RPC__in HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *GetID )(
            __RPC__in IOpenServiceActivity * This,
                        __RPC__deref_out_opt BSTR *pbstrID);
        HRESULT ( STDMETHODCALLTYPE *Execute )(
            __RPC__in IOpenServiceActivity * This,
                       __RPC__in_opt IOpenServiceActivityInput *pInput,
                       __RPC__in_opt IOpenServiceActivityOutputContext *pOutput);
        HRESULT ( STDMETHODCALLTYPE *CanExecute )(
            __RPC__in IOpenServiceActivity * This,
                       __RPC__in_opt IOpenServiceActivityInput *pInput,
                       __RPC__in_opt IOpenServiceActivityOutputContext *pOutput,
                        __RPC__out BOOL *pfCanExecute);
        HRESULT ( STDMETHODCALLTYPE *CanExecuteType )(
            __RPC__in IOpenServiceActivity * This,
                       OpenServiceActivityContentType type,
                        __RPC__out BOOL *pfCanExecute);
        HRESULT ( STDMETHODCALLTYPE *Preview )(
            __RPC__in IOpenServiceActivity * This,
                       __RPC__in_opt IOpenServiceActivityInput *pInput,
                       __RPC__in_opt IOpenServiceActivityOutputContext *pOutput);
        HRESULT ( STDMETHODCALLTYPE *CanPreview )(
            __RPC__in IOpenServiceActivity * This,
                       __RPC__in_opt IOpenServiceActivityInput *pInput,
                       __RPC__in_opt IOpenServiceActivityOutputContext *pOutput,
                        __RPC__out BOOL *pfCanPreview);
        HRESULT ( STDMETHODCALLTYPE *CanPreviewType )(
            __RPC__in IOpenServiceActivity * This,
                       OpenServiceActivityContentType type,
                        __RPC__out BOOL *pfCanPreview);
        HRESULT ( STDMETHODCALLTYPE *GetStatusText )(
            __RPC__in IOpenServiceActivity * This,
                       __RPC__in_opt IOpenServiceActivityInput *pInput,
                        __RPC__deref_out_opt BSTR *pbstrStatusText);
        HRESULT ( STDMETHODCALLTYPE *GetHomepageUrl )(
            __RPC__in IOpenServiceActivity * This,
                        __RPC__deref_out_opt BSTR *pbstrHomepageUrl);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in IOpenServiceActivity * This,
                        __RPC__deref_out_opt BSTR *pbstrDisplayName);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in IOpenServiceActivity * This,
                        __RPC__deref_out_opt BSTR *pbstrDescription);
        HRESULT ( STDMETHODCALLTYPE *GetCategoryName )(
            __RPC__in IOpenServiceActivity * This,
                        __RPC__deref_out_opt BSTR *pbstrCategoryName);
        HRESULT ( STDMETHODCALLTYPE *GetIconPath )(
            __RPC__in IOpenServiceActivity * This,
                        __RPC__deref_out_opt BSTR *pbstrIconPath);
        HRESULT ( STDMETHODCALLTYPE *GetIcon )(
            __RPC__in IOpenServiceActivity * This,
                       BOOL fSmallIcon,
                        __RPC__deref_out_opt HICON *phIcon);
        HRESULT ( STDMETHODCALLTYPE *GetDescriptionFilePath )(
            __RPC__in IOpenServiceActivity * This,
                        __RPC__deref_out_opt BSTR *pbstrXmlPath);
        HRESULT ( STDMETHODCALLTYPE *GetDownloadUrl )(
            __RPC__in IOpenServiceActivity * This,
                        __RPC__deref_out_opt BSTR *pbstrXmlUri);
        HRESULT ( STDMETHODCALLTYPE *GetInstallUrl )(
            __RPC__in IOpenServiceActivity * This,
                        __RPC__deref_out_opt BSTR *pbstrInstallUri);
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )(
            __RPC__in IOpenServiceActivity * This,
                        __RPC__out BOOL *pfIsEnabled);
        HRESULT ( STDMETHODCALLTYPE *SetEnabled )(
            __RPC__in IOpenServiceActivity * This,
                       BOOL fEnable);
        END_INTERFACE
    } IOpenServiceActivityVtbl;
    interface IOpenServiceActivity
    {
        CONST_VTBL struct IOpenServiceActivityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsDefault(This,pfIsDefault) )
    ( (This)->lpVtbl -> SetDefault(This,fDefault,hwnd) )
    ( (This)->lpVtbl -> GetID(This,pbstrID) )
    ( (This)->lpVtbl -> Execute(This,pInput,pOutput) )
    ( (This)->lpVtbl -> CanExecute(This,pInput,pOutput,pfCanExecute) )
    ( (This)->lpVtbl -> CanExecuteType(This,type,pfCanExecute) )
    ( (This)->lpVtbl -> Preview(This,pInput,pOutput) )
    ( (This)->lpVtbl -> CanPreview(This,pInput,pOutput,pfCanPreview) )
    ( (This)->lpVtbl -> CanPreviewType(This,type,pfCanPreview) )
    ( (This)->lpVtbl -> GetStatusText(This,pInput,pbstrStatusText) )
    ( (This)->lpVtbl -> GetHomepageUrl(This,pbstrHomepageUrl) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrDisplayName) )
    ( (This)->lpVtbl -> GetDescription(This,pbstrDescription) )
    ( (This)->lpVtbl -> GetCategoryName(This,pbstrCategoryName) )
    ( (This)->lpVtbl -> GetIconPath(This,pbstrIconPath) )
    ( (This)->lpVtbl -> GetIcon(This,fSmallIcon,phIcon) )
    ( (This)->lpVtbl -> GetDescriptionFilePath(This,pbstrXmlPath) )
    ( (This)->lpVtbl -> GetDownloadUrl(This,pbstrXmlUri) )
    ( (This)->lpVtbl -> GetInstallUrl(This,pbstrInstallUri) )
    ( (This)->lpVtbl -> IsEnabled(This,pfIsEnabled) )
    ( (This)->lpVtbl -> SetEnabled(This,fEnable) )
typedef IOpenServiceActivity *EnumActivityType;
EXTERN_C const IID IID_IEnumOpenServiceActivity;
    typedef struct IEnumOpenServiceActivityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumOpenServiceActivity * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumOpenServiceActivity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumOpenServiceActivity * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumOpenServiceActivity * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) EnumActivityType *rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumOpenServiceActivity * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumOpenServiceActivity * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumOpenServiceActivity * This,
                        __RPC__deref_out_opt IEnumOpenServiceActivity **ppenum);
        END_INTERFACE
    } IEnumOpenServiceActivityVtbl;
    interface IEnumOpenServiceActivity
    {
        CONST_VTBL struct IEnumOpenServiceActivityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_IOpenServiceActivityCategory;
    typedef struct IOpenServiceActivityCategoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpenServiceActivityCategory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpenServiceActivityCategory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpenServiceActivityCategory * This);
        HRESULT ( STDMETHODCALLTYPE *HasDefaultActivity )(
            __RPC__in IOpenServiceActivityCategory * This,
                        __RPC__out BOOL *pfHasDefaultActivity);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultActivity )(
            __RPC__in IOpenServiceActivityCategory * This,
                        __RPC__deref_out_opt IOpenServiceActivity **ppDefaultActivity);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultActivity )(
            __RPC__in IOpenServiceActivityCategory * This,
                       __RPC__in_opt IOpenServiceActivity *pActivity,
                       __RPC__in HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IOpenServiceActivityCategory * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetActivityEnumerator )(
            __RPC__in IOpenServiceActivityCategory * This,
                       __RPC__in_opt IOpenServiceActivityInput *pInput,
                       __RPC__in_opt IOpenServiceActivityOutputContext *pOutput,
                        __RPC__deref_out_opt IEnumOpenServiceActivity **ppEnumActivity);
        END_INTERFACE
    } IOpenServiceActivityCategoryVtbl;
    interface IOpenServiceActivityCategory
    {
        CONST_VTBL struct IOpenServiceActivityCategoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HasDefaultActivity(This,pfHasDefaultActivity) )
    ( (This)->lpVtbl -> GetDefaultActivity(This,ppDefaultActivity) )
    ( (This)->lpVtbl -> SetDefaultActivity(This,pActivity,hwnd) )
    ( (This)->lpVtbl -> GetName(This,pbstrName) )
    ( (This)->lpVtbl -> GetActivityEnumerator(This,pInput,pOutput,ppEnumActivity) )
typedef IOpenServiceActivityCategory *EnumActivityVerbType;
EXTERN_C const IID IID_IEnumOpenServiceActivityCategory;
    typedef struct IEnumOpenServiceActivityCategoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumOpenServiceActivityCategory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumOpenServiceActivityCategory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumOpenServiceActivityCategory * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumOpenServiceActivityCategory * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) EnumActivityVerbType *rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumOpenServiceActivityCategory * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumOpenServiceActivityCategory * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumOpenServiceActivityCategory * This,
                        __RPC__deref_out_opt IEnumOpenServiceActivityCategory **ppenum);
        END_INTERFACE
    } IEnumOpenServiceActivityCategoryVtbl;
    interface IEnumOpenServiceActivityCategory
    {
        CONST_VTBL struct IEnumOpenServiceActivityCategoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_IOpenServiceActivityManager;
    typedef struct IOpenServiceActivityManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpenServiceActivityManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpenServiceActivityManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpenServiceActivityManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetCategoryEnumerator )(
            __RPC__in IOpenServiceActivityManager * This,
                       OpenServiceActivityContentType eType,
                        __RPC__deref_out_opt IEnumOpenServiceActivityCategory **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetActivityByID )(
            __RPC__in IOpenServiceActivityManager * This,
                       __RPC__in LPCWSTR pwzActivityID,
                        __RPC__deref_out_opt IOpenServiceActivity **ppActivity);
        HRESULT ( STDMETHODCALLTYPE *GetActivityByHomepageAndCategory )(
            __RPC__in IOpenServiceActivityManager * This,
                       __RPC__in LPCWSTR pwzHomepage,
                       __RPC__in LPCWSTR pwzCategory,
                        __RPC__deref_out_opt IOpenServiceActivity **ppActivity);
        HRESULT ( STDMETHODCALLTYPE *GetVersionCookie )(
            __RPC__in IOpenServiceActivityManager * This,
                        __RPC__out DWORD *pdwVersionCookie);
        END_INTERFACE
    } IOpenServiceActivityManagerVtbl;
    interface IOpenServiceActivityManager
    {
        CONST_VTBL struct IOpenServiceActivityManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCategoryEnumerator(This,eType,ppEnum) )
    ( (This)->lpVtbl -> GetActivityByID(This,pwzActivityID,ppActivity) )
    ( (This)->lpVtbl -> GetActivityByHomepageAndCategory(This,pwzHomepage,pwzCategory,ppActivity) )
    ( (This)->lpVtbl -> GetVersionCookie(This,pdwVersionCookie) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_openservice_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_openservice_0000_0010_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HICON_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HICON_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree64( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
