#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICredentialProviderCredential ICredentialProviderCredential;
typedef interface IQueryContinueWithStatus IQueryContinueWithStatus;
typedef interface IConnectableCredentialProviderCredential IConnectableCredentialProviderCredential;
typedef interface ICredentialProviderCredentialEvents ICredentialProviderCredentialEvents;
typedef interface ICredentialProvider ICredentialProvider;
typedef interface ICredentialProviderEvents ICredentialProviderEvents;
typedef interface ICredentialProviderFilter ICredentialProviderFilter;
typedef interface ICredentialProviderCredential2 ICredentialProviderCredential2;
typedef interface ICredentialProviderCredentialWithFieldOptions ICredentialProviderCredentialWithFieldOptions;
typedef interface ICredentialProviderCredentialEvents2 ICredentialProviderCredentialEvents2;
typedef interface ICredentialProviderUser ICredentialProviderUser;
typedef interface ICredentialProviderUserArray ICredentialProviderUserArray;
typedef interface ICredentialProviderSetUserArray ICredentialProviderSetUserArray;
typedef class PasswordCredentialProvider PasswordCredentialProvider;
typedef class V1PasswordCredentialProvider V1PasswordCredentialProvider;
typedef class PINLogonCredentialProvider PINLogonCredentialProvider;
typedef class NPCredentialProvider NPCredentialProvider;
typedef class SmartcardCredentialProvider SmartcardCredentialProvider;
typedef class V1SmartcardCredentialProvider V1SmartcardCredentialProvider;
typedef class SmartcardPinProvider SmartcardPinProvider;
typedef class SmartcardReaderSelectionProvider SmartcardReaderSelectionProvider;
typedef class SmartcardWinRTProvider SmartcardWinRTProvider;
typedef class GenericCredentialProvider GenericCredentialProvider;
typedef class RASProvider RASProvider;
typedef class OnexCredentialProvider OnexCredentialProvider;
typedef class OnexPlapSmartcardCredentialProvider OnexPlapSmartcardCredentialProvider;
typedef class VaultProvider VaultProvider;
typedef class WinBioCredentialProvider WinBioCredentialProvider;
typedef class V1WinBioCredentialProvider V1WinBioCredentialProvider;
#include "wtypes.h"
#include "shobjidl_core.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _CREDENTIAL_PROVIDER_USAGE_SCENARIO
    {
        CPUS_INVALID = 0,
        CPUS_LOGON = ( CPUS_INVALID + 1 ) ,
        CPUS_UNLOCK_WORKSTATION = ( CPUS_LOGON + 1 ) ,
        CPUS_CHANGE_PASSWORD = ( CPUS_UNLOCK_WORKSTATION + 1 ) ,
        CPUS_CREDUI = ( CPUS_CHANGE_PASSWORD + 1 ) ,
        CPUS_PLAP = ( CPUS_CREDUI + 1 )
    } CREDENTIAL_PROVIDER_USAGE_SCENARIO;
typedef
enum _CREDENTIAL_PROVIDER_FIELD_TYPE
    {
        CPFT_INVALID = 0,
        CPFT_LARGE_TEXT = ( CPFT_INVALID + 1 ) ,
        CPFT_SMALL_TEXT = ( CPFT_LARGE_TEXT + 1 ) ,
        CPFT_COMMAND_LINK = ( CPFT_SMALL_TEXT + 1 ) ,
        CPFT_EDIT_TEXT = ( CPFT_COMMAND_LINK + 1 ) ,
        CPFT_PASSWORD_TEXT = ( CPFT_EDIT_TEXT + 1 ) ,
        CPFT_TILE_IMAGE = ( CPFT_PASSWORD_TEXT + 1 ) ,
        CPFT_CHECKBOX = ( CPFT_TILE_IMAGE + 1 ) ,
        CPFT_COMBOBOX = ( CPFT_CHECKBOX + 1 ) ,
        CPFT_SUBMIT_BUTTON = ( CPFT_COMBOBOX + 1 )
    } CREDENTIAL_PROVIDER_FIELD_TYPE;
typedef
enum _CREDENTIAL_PROVIDER_FIELD_STATE
    {
        CPFS_HIDDEN = 0,
        CPFS_DISPLAY_IN_SELECTED_TILE = ( CPFS_HIDDEN + 1 ) ,
        CPFS_DISPLAY_IN_DESELECTED_TILE = ( CPFS_DISPLAY_IN_SELECTED_TILE + 1 ) ,
        CPFS_DISPLAY_IN_BOTH = ( CPFS_DISPLAY_IN_DESELECTED_TILE + 1 )
    } CREDENTIAL_PROVIDER_FIELD_STATE;
typedef
enum _CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE
    {
        CPFIS_NONE = 0,
        CPFIS_READONLY = ( CPFIS_NONE + 1 ) ,
        CPFIS_DISABLED = ( CPFIS_READONLY + 1 ) ,
        CPFIS_FOCUSED = ( CPFIS_DISABLED + 1 )
    } CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE;
typedef struct _CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR
    {
    DWORD dwFieldID;
    CREDENTIAL_PROVIDER_FIELD_TYPE cpft;
    LPWSTR pszLabel;
    GUID guidFieldType;
    } CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR;
typedef
enum _CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE
    {
        CPGSR_NO_CREDENTIAL_NOT_FINISHED = 0,
        CPGSR_NO_CREDENTIAL_FINISHED = ( CPGSR_NO_CREDENTIAL_NOT_FINISHED + 1 ) ,
        CPGSR_RETURN_CREDENTIAL_FINISHED = ( CPGSR_NO_CREDENTIAL_FINISHED + 1 ) ,
        CPGSR_RETURN_NO_CREDENTIAL_FINISHED = ( CPGSR_RETURN_CREDENTIAL_FINISHED + 1 )
    } CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE;
typedef
enum _CREDENTIAL_PROVIDER_STATUS_ICON
    {
        CPSI_NONE = 0,
        CPSI_ERROR = ( CPSI_NONE + 1 ) ,
        CPSI_WARNING = ( CPSI_ERROR + 1 ) ,
        CPSI_SUCCESS = ( CPSI_WARNING + 1 )
    } CREDENTIAL_PROVIDER_STATUS_ICON;
typedef struct _CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION
    {
    ULONG ulAuthenticationPackage;
    GUID clsidCredentialProvider;
    ULONG cbSerialization;
                    byte *rgbSerialization;
    } CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION;
typedef
enum CREDENTIAL_PROVIDER_ACCOUNT_OPTIONS
    {
        CPAO_NONE = 0,
        CPAO_EMPTY_LOCAL = 0x1,
        CPAO_EMPTY_CONNECTED = 0x2
    } CREDENTIAL_PROVIDER_ACCOUNT_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(CREDENTIAL_PROVIDER_ACCOUNT_OPTIONS)
typedef
enum CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS
    {
        CPCFO_NONE = 0,
        CPCFO_ENABLE_PASSWORD_REVEAL = 0x1,
        CPCFO_IS_EMAIL_ADDRESS = 0x2,
        CPCFO_ENABLE_TOUCH_KEYBOARD_AUTO_INVOKE = 0x4,
        CPCFO_NUMBERS_ONLY = 0x8,
        CPCFO_SHOW_ENGLISH_KEYBOARD = 0x10
    } CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS)
typedef LONG NTSTATUS;
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICredentialProviderCredential;
    typedef struct ICredentialProviderCredentialVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICredentialProviderCredential * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICredentialProviderCredential * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICredentialProviderCredential * This);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            ICredentialProviderCredential * This,
            _In_ ICredentialProviderCredentialEvents *pcpce);
        HRESULT ( STDMETHODCALLTYPE *UnAdvise )(
            ICredentialProviderCredential * This);
        HRESULT ( STDMETHODCALLTYPE *SetSelected )(
            ICredentialProviderCredential * This,
            _Out_ BOOL *pbAutoLogon);
        HRESULT ( STDMETHODCALLTYPE *SetDeselected )(
            ICredentialProviderCredential * This);
        HRESULT ( STDMETHODCALLTYPE *GetFieldState )(
            ICredentialProviderCredential * This,
                       DWORD dwFieldID,
            _Out_ CREDENTIAL_PROVIDER_FIELD_STATE *pcpfs,
            _Out_ CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *pcpfis);
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )(
            ICredentialProviderCredential * This,
                       DWORD dwFieldID,
            _Outptr_result_nullonfailure_ LPWSTR *ppsz);
        HRESULT ( STDMETHODCALLTYPE *GetBitmapValue )(
            ICredentialProviderCredential * This,
                       DWORD dwFieldID,
            _Outptr_result_nullonfailure_ HBITMAP *phbmp);
        HRESULT ( STDMETHODCALLTYPE *GetCheckboxValue )(
            ICredentialProviderCredential * This,
                       DWORD dwFieldID,
            _Out_ BOOL *pbChecked,
            _Outptr_result_nullonfailure_ LPWSTR *ppszLabel);
        HRESULT ( STDMETHODCALLTYPE *GetSubmitButtonValue )(
            ICredentialProviderCredential * This,
                       DWORD dwFieldID,
            _Out_ DWORD *pdwAdjacentTo);
        HRESULT ( STDMETHODCALLTYPE *GetComboBoxValueCount )(
            ICredentialProviderCredential * This,
                       DWORD dwFieldID,
            _Out_ DWORD *pcItems,
            _Out_ DWORD *pdwSelectedItem);
        HRESULT ( STDMETHODCALLTYPE *GetComboBoxValueAt )(
            ICredentialProviderCredential * This,
                       DWORD dwFieldID,
            DWORD dwItem,
            _Outptr_result_nullonfailure_ LPWSTR *ppszItem);
        HRESULT ( STDMETHODCALLTYPE *SetStringValue )(
            ICredentialProviderCredential * This,
                       DWORD dwFieldID,
            _In_ LPCWSTR psz);
        HRESULT ( STDMETHODCALLTYPE *SetCheckboxValue )(
            ICredentialProviderCredential * This,
                       DWORD dwFieldID,
                       BOOL bChecked);
        HRESULT ( STDMETHODCALLTYPE *SetComboBoxSelectedValue )(
            ICredentialProviderCredential * This,
                       DWORD dwFieldID,
                       DWORD dwSelectedItem);
        HRESULT ( STDMETHODCALLTYPE *CommandLinkClicked )(
            ICredentialProviderCredential * This,
                       DWORD dwFieldID);
        HRESULT ( STDMETHODCALLTYPE *GetSerialization )(
            ICredentialProviderCredential * This,
            _Out_ CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *pcpgsr,
            _Out_ CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcs,
            _Outptr_result_maybenull_ LPWSTR *ppszOptionalStatusText,
            _Out_ CREDENTIAL_PROVIDER_STATUS_ICON *pcpsiOptionalStatusIcon);
        HRESULT ( STDMETHODCALLTYPE *ReportResult )(
            ICredentialProviderCredential * This,
                       NTSTATUS ntsStatus,
                       NTSTATUS ntsSubstatus,
            _Outptr_result_maybenull_ LPWSTR *ppszOptionalStatusText,
            _Out_ CREDENTIAL_PROVIDER_STATUS_ICON *pcpsiOptionalStatusIcon);
        END_INTERFACE
    } ICredentialProviderCredentialVtbl;
    interface ICredentialProviderCredential
    {
        CONST_VTBL struct ICredentialProviderCredentialVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Advise(This,pcpce) )
    ( (This)->lpVtbl -> UnAdvise(This) )
    ( (This)->lpVtbl -> SetSelected(This,pbAutoLogon) )
    ( (This)->lpVtbl -> SetDeselected(This) )
    ( (This)->lpVtbl -> GetFieldState(This,dwFieldID,pcpfs,pcpfis) )
    ( (This)->lpVtbl -> GetStringValue(This,dwFieldID,ppsz) )
    ( (This)->lpVtbl -> GetBitmapValue(This,dwFieldID,phbmp) )
    ( (This)->lpVtbl -> GetCheckboxValue(This,dwFieldID,pbChecked,ppszLabel) )
    ( (This)->lpVtbl -> GetSubmitButtonValue(This,dwFieldID,pdwAdjacentTo) )
    ( (This)->lpVtbl -> GetComboBoxValueCount(This,dwFieldID,pcItems,pdwSelectedItem) )
    ( (This)->lpVtbl -> GetComboBoxValueAt(This,dwFieldID,dwItem,ppszItem) )
    ( (This)->lpVtbl -> SetStringValue(This,dwFieldID,psz) )
    ( (This)->lpVtbl -> SetCheckboxValue(This,dwFieldID,bChecked) )
    ( (This)->lpVtbl -> SetComboBoxSelectedValue(This,dwFieldID,dwSelectedItem) )
    ( (This)->lpVtbl -> CommandLinkClicked(This,dwFieldID) )
    ( (This)->lpVtbl -> GetSerialization(This,pcpgsr,pcpcs,ppszOptionalStatusText,pcpsiOptionalStatusIcon) )
    ( (This)->lpVtbl -> ReportResult(This,ntsStatus,ntsSubstatus,ppszOptionalStatusText,pcpsiOptionalStatusIcon) )
EXTERN_C const IID IID_IQueryContinueWithStatus;
    typedef struct IQueryContinueWithStatusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IQueryContinueWithStatus * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IQueryContinueWithStatus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IQueryContinueWithStatus * This);
        HRESULT ( STDMETHODCALLTYPE *QueryContinue )(
            IQueryContinueWithStatus * This);
        HRESULT ( STDMETHODCALLTYPE *SetStatusMessage )(
            IQueryContinueWithStatus * This,
            _In_ LPCWSTR psz);
        END_INTERFACE
    } IQueryContinueWithStatusVtbl;
    interface IQueryContinueWithStatus
    {
        CONST_VTBL struct IQueryContinueWithStatusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryContinue(This) )
    ( (This)->lpVtbl -> SetStatusMessage(This,psz) )
EXTERN_C const IID IID_IConnectableCredentialProviderCredential;
    typedef struct IConnectableCredentialProviderCredentialVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IConnectableCredentialProviderCredential * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IConnectableCredentialProviderCredential * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IConnectableCredentialProviderCredential * This);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            IConnectableCredentialProviderCredential * This,
            _In_ ICredentialProviderCredentialEvents *pcpce);
        HRESULT ( STDMETHODCALLTYPE *UnAdvise )(
            IConnectableCredentialProviderCredential * This);
        HRESULT ( STDMETHODCALLTYPE *SetSelected )(
            IConnectableCredentialProviderCredential * This,
            _Out_ BOOL *pbAutoLogon);
        HRESULT ( STDMETHODCALLTYPE *SetDeselected )(
            IConnectableCredentialProviderCredential * This);
        HRESULT ( STDMETHODCALLTYPE *GetFieldState )(
            IConnectableCredentialProviderCredential * This,
                       DWORD dwFieldID,
            _Out_ CREDENTIAL_PROVIDER_FIELD_STATE *pcpfs,
            _Out_ CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *pcpfis);
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )(
            IConnectableCredentialProviderCredential * This,
                       DWORD dwFieldID,
            _Outptr_result_nullonfailure_ LPWSTR *ppsz);
        HRESULT ( STDMETHODCALLTYPE *GetBitmapValue )(
            IConnectableCredentialProviderCredential * This,
                       DWORD dwFieldID,
            _Outptr_result_nullonfailure_ HBITMAP *phbmp);
        HRESULT ( STDMETHODCALLTYPE *GetCheckboxValue )(
            IConnectableCredentialProviderCredential * This,
                       DWORD dwFieldID,
            _Out_ BOOL *pbChecked,
            _Outptr_result_nullonfailure_ LPWSTR *ppszLabel);
        HRESULT ( STDMETHODCALLTYPE *GetSubmitButtonValue )(
            IConnectableCredentialProviderCredential * This,
                       DWORD dwFieldID,
            _Out_ DWORD *pdwAdjacentTo);
        HRESULT ( STDMETHODCALLTYPE *GetComboBoxValueCount )(
            IConnectableCredentialProviderCredential * This,
                       DWORD dwFieldID,
            _Out_ DWORD *pcItems,
            _Out_ DWORD *pdwSelectedItem);
        HRESULT ( STDMETHODCALLTYPE *GetComboBoxValueAt )(
            IConnectableCredentialProviderCredential * This,
                       DWORD dwFieldID,
            DWORD dwItem,
            _Outptr_result_nullonfailure_ LPWSTR *ppszItem);
        HRESULT ( STDMETHODCALLTYPE *SetStringValue )(
            IConnectableCredentialProviderCredential * This,
                       DWORD dwFieldID,
            _In_ LPCWSTR psz);
        HRESULT ( STDMETHODCALLTYPE *SetCheckboxValue )(
            IConnectableCredentialProviderCredential * This,
                       DWORD dwFieldID,
                       BOOL bChecked);
        HRESULT ( STDMETHODCALLTYPE *SetComboBoxSelectedValue )(
            IConnectableCredentialProviderCredential * This,
                       DWORD dwFieldID,
                       DWORD dwSelectedItem);
        HRESULT ( STDMETHODCALLTYPE *CommandLinkClicked )(
            IConnectableCredentialProviderCredential * This,
                       DWORD dwFieldID);
        HRESULT ( STDMETHODCALLTYPE *GetSerialization )(
            IConnectableCredentialProviderCredential * This,
            _Out_ CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *pcpgsr,
            _Out_ CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcs,
            _Outptr_result_maybenull_ LPWSTR *ppszOptionalStatusText,
            _Out_ CREDENTIAL_PROVIDER_STATUS_ICON *pcpsiOptionalStatusIcon);
        HRESULT ( STDMETHODCALLTYPE *ReportResult )(
            IConnectableCredentialProviderCredential * This,
                       NTSTATUS ntsStatus,
                       NTSTATUS ntsSubstatus,
            _Outptr_result_maybenull_ LPWSTR *ppszOptionalStatusText,
            _Out_ CREDENTIAL_PROVIDER_STATUS_ICON *pcpsiOptionalStatusIcon);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            IConnectableCredentialProviderCredential * This,
            _In_ IQueryContinueWithStatus *pqcws);
        HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            IConnectableCredentialProviderCredential * This);
        END_INTERFACE
    } IConnectableCredentialProviderCredentialVtbl;
    interface IConnectableCredentialProviderCredential
    {
        CONST_VTBL struct IConnectableCredentialProviderCredentialVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Advise(This,pcpce) )
    ( (This)->lpVtbl -> UnAdvise(This) )
    ( (This)->lpVtbl -> SetSelected(This,pbAutoLogon) )
    ( (This)->lpVtbl -> SetDeselected(This) )
    ( (This)->lpVtbl -> GetFieldState(This,dwFieldID,pcpfs,pcpfis) )
    ( (This)->lpVtbl -> GetStringValue(This,dwFieldID,ppsz) )
    ( (This)->lpVtbl -> GetBitmapValue(This,dwFieldID,phbmp) )
    ( (This)->lpVtbl -> GetCheckboxValue(This,dwFieldID,pbChecked,ppszLabel) )
    ( (This)->lpVtbl -> GetSubmitButtonValue(This,dwFieldID,pdwAdjacentTo) )
    ( (This)->lpVtbl -> GetComboBoxValueCount(This,dwFieldID,pcItems,pdwSelectedItem) )
    ( (This)->lpVtbl -> GetComboBoxValueAt(This,dwFieldID,dwItem,ppszItem) )
    ( (This)->lpVtbl -> SetStringValue(This,dwFieldID,psz) )
    ( (This)->lpVtbl -> SetCheckboxValue(This,dwFieldID,bChecked) )
    ( (This)->lpVtbl -> SetComboBoxSelectedValue(This,dwFieldID,dwSelectedItem) )
    ( (This)->lpVtbl -> CommandLinkClicked(This,dwFieldID) )
    ( (This)->lpVtbl -> GetSerialization(This,pcpgsr,pcpcs,ppszOptionalStatusText,pcpsiOptionalStatusIcon) )
    ( (This)->lpVtbl -> ReportResult(This,ntsStatus,ntsSubstatus,ppszOptionalStatusText,pcpsiOptionalStatusIcon) )
    ( (This)->lpVtbl -> Connect(This,pqcws) )
    ( (This)->lpVtbl -> Disconnect(This) )
EXTERN_C const IID IID_ICredentialProviderCredentialEvents;
    typedef struct ICredentialProviderCredentialEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICredentialProviderCredentialEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICredentialProviderCredentialEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICredentialProviderCredentialEvents * This);
        HRESULT ( STDMETHODCALLTYPE *SetFieldState )(
            __RPC__in ICredentialProviderCredentialEvents * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                       CREDENTIAL_PROVIDER_FIELD_STATE cpfs);
        HRESULT ( STDMETHODCALLTYPE *SetFieldInteractiveState )(
            __RPC__in ICredentialProviderCredentialEvents * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                       CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE cpfis);
        HRESULT ( STDMETHODCALLTYPE *SetFieldString )(
            __RPC__in ICredentialProviderCredentialEvents * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                                       __RPC__in_opt_string LPCWSTR psz);
        HRESULT ( STDMETHODCALLTYPE *SetFieldCheckbox )(
            __RPC__in ICredentialProviderCredentialEvents * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                       BOOL bChecked,
                       __RPC__in LPCWSTR pszLabel);
        HRESULT ( STDMETHODCALLTYPE *SetFieldBitmap )(
            __RPC__in ICredentialProviderCredentialEvents * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                       __RPC__in HBITMAP hbmp);
        HRESULT ( STDMETHODCALLTYPE *SetFieldComboBoxSelectedItem )(
            __RPC__in ICredentialProviderCredentialEvents * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                       DWORD dwSelectedItem);
        HRESULT ( STDMETHODCALLTYPE *DeleteFieldComboBoxItem )(
            __RPC__in ICredentialProviderCredentialEvents * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                       DWORD dwItem);
        HRESULT ( STDMETHODCALLTYPE *AppendFieldComboBoxItem )(
            __RPC__in ICredentialProviderCredentialEvents * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                               __RPC__in_string LPCWSTR pszItem);
        HRESULT ( STDMETHODCALLTYPE *SetFieldSubmitButton )(
            __RPC__in ICredentialProviderCredentialEvents * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                       DWORD dwAdjacentTo);
        HRESULT ( STDMETHODCALLTYPE *OnCreatingWindow )(
            __RPC__in ICredentialProviderCredentialEvents * This,
                        __RPC__deref_out_opt HWND *phwndOwner);
        END_INTERFACE
    } ICredentialProviderCredentialEventsVtbl;
    interface ICredentialProviderCredentialEvents
    {
        CONST_VTBL struct ICredentialProviderCredentialEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFieldState(This,pcpc,dwFieldID,cpfs) )
    ( (This)->lpVtbl -> SetFieldInteractiveState(This,pcpc,dwFieldID,cpfis) )
    ( (This)->lpVtbl -> SetFieldString(This,pcpc,dwFieldID,psz) )
    ( (This)->lpVtbl -> SetFieldCheckbox(This,pcpc,dwFieldID,bChecked,pszLabel) )
    ( (This)->lpVtbl -> SetFieldBitmap(This,pcpc,dwFieldID,hbmp) )
    ( (This)->lpVtbl -> SetFieldComboBoxSelectedItem(This,pcpc,dwFieldID,dwSelectedItem) )
    ( (This)->lpVtbl -> DeleteFieldComboBoxItem(This,pcpc,dwFieldID,dwItem) )
    ( (This)->lpVtbl -> AppendFieldComboBoxItem(This,pcpc,dwFieldID,pszItem) )
    ( (This)->lpVtbl -> SetFieldSubmitButton(This,pcpc,dwFieldID,dwAdjacentTo) )
    ( (This)->lpVtbl -> OnCreatingWindow(This,phwndOwner) )
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_ICredentialProvider;
    typedef struct ICredentialProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICredentialProvider * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICredentialProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICredentialProvider * This);
        HRESULT ( STDMETHODCALLTYPE *SetUsageScenario )(
            ICredentialProvider * This,
                       CREDENTIAL_PROVIDER_USAGE_SCENARIO cpus,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *SetSerialization )(
            ICredentialProvider * This,
            _In_ const CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcs);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            ICredentialProvider * This,
            _In_ ICredentialProviderEvents *pcpe,
            _In_ UINT_PTR upAdviseContext);
        HRESULT ( STDMETHODCALLTYPE *UnAdvise )(
            ICredentialProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetFieldDescriptorCount )(
            ICredentialProvider * This,
            _Out_ DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *GetFieldDescriptorAt )(
            ICredentialProvider * This,
                       DWORD dwIndex,
            _Outptr_result_nullonfailure_ CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR **ppcpfd);
        HRESULT ( STDMETHODCALLTYPE *GetCredentialCount )(
            ICredentialProvider * This,
            _Out_ DWORD *pdwCount,
            _Out_ DWORD *pdwDefault,
            _Out_ BOOL *pbAutoLogonWithDefault);
        HRESULT ( STDMETHODCALLTYPE *GetCredentialAt )(
            ICredentialProvider * This,
                       DWORD dwIndex,
            _COM_Outptr_ ICredentialProviderCredential **ppcpc);
        END_INTERFACE
    } ICredentialProviderVtbl;
    interface ICredentialProvider
    {
        CONST_VTBL struct ICredentialProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetUsageScenario(This,cpus,dwFlags) )
    ( (This)->lpVtbl -> SetSerialization(This,pcpcs) )
    ( (This)->lpVtbl -> Advise(This,pcpe,upAdviseContext) )
    ( (This)->lpVtbl -> UnAdvise(This) )
    ( (This)->lpVtbl -> GetFieldDescriptorCount(This,pdwCount) )
    ( (This)->lpVtbl -> GetFieldDescriptorAt(This,dwIndex,ppcpfd) )
    ( (This)->lpVtbl -> GetCredentialCount(This,pdwCount,pdwDefault,pbAutoLogonWithDefault) )
    ( (This)->lpVtbl -> GetCredentialAt(This,dwIndex,ppcpc) )
EXTERN_C const IID IID_ICredentialProviderEvents;
    typedef struct ICredentialProviderEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICredentialProviderEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICredentialProviderEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICredentialProviderEvents * This);
        HRESULT ( STDMETHODCALLTYPE *CredentialsChanged )(
            __RPC__in ICredentialProviderEvents * This,
                       UINT_PTR upAdviseContext);
        END_INTERFACE
    } ICredentialProviderEventsVtbl;
    interface ICredentialProviderEvents
    {
        CONST_VTBL struct ICredentialProviderEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CredentialsChanged(This,upAdviseContext) )
EXTERN_C const IID IID_ICredentialProviderFilter;
    typedef struct ICredentialProviderFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICredentialProviderFilter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICredentialProviderFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICredentialProviderFilter * This);
        HRESULT ( STDMETHODCALLTYPE *Filter )(
            ICredentialProviderFilter * This,
                       CREDENTIAL_PROVIDER_USAGE_SCENARIO cpus,
                       DWORD dwFlags,
            _In_reads_(cProviders) GUID *rgclsidProviders,
            _Inout_updates_(cProviders) BOOL *rgbAllow,
                       DWORD cProviders);
        HRESULT ( STDMETHODCALLTYPE *UpdateRemoteCredential )(
            ICredentialProviderFilter * This,
            _In_ const CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcsIn,
            _Out_ CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcsOut);
        END_INTERFACE
    } ICredentialProviderFilterVtbl;
    interface ICredentialProviderFilter
    {
        CONST_VTBL struct ICredentialProviderFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Filter(This,cpus,dwFlags,rgclsidProviders,rgbAllow,cProviders) )
    ( (This)->lpVtbl -> UpdateRemoteCredential(This,pcpcsIn,pcpcsOut) )
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_ICredentialProviderCredential2;
    typedef struct ICredentialProviderCredential2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICredentialProviderCredential2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICredentialProviderCredential2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICredentialProviderCredential2 * This);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            ICredentialProviderCredential2 * This,
            _In_ ICredentialProviderCredentialEvents *pcpce);
        HRESULT ( STDMETHODCALLTYPE *UnAdvise )(
            ICredentialProviderCredential2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetSelected )(
            ICredentialProviderCredential2 * This,
            _Out_ BOOL *pbAutoLogon);
        HRESULT ( STDMETHODCALLTYPE *SetDeselected )(
            ICredentialProviderCredential2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetFieldState )(
            ICredentialProviderCredential2 * This,
                       DWORD dwFieldID,
            _Out_ CREDENTIAL_PROVIDER_FIELD_STATE *pcpfs,
            _Out_ CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *pcpfis);
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )(
            ICredentialProviderCredential2 * This,
                       DWORD dwFieldID,
            _Outptr_result_nullonfailure_ LPWSTR *ppsz);
        HRESULT ( STDMETHODCALLTYPE *GetBitmapValue )(
            ICredentialProviderCredential2 * This,
                       DWORD dwFieldID,
            _Outptr_result_nullonfailure_ HBITMAP *phbmp);
        HRESULT ( STDMETHODCALLTYPE *GetCheckboxValue )(
            ICredentialProviderCredential2 * This,
                       DWORD dwFieldID,
            _Out_ BOOL *pbChecked,
            _Outptr_result_nullonfailure_ LPWSTR *ppszLabel);
        HRESULT ( STDMETHODCALLTYPE *GetSubmitButtonValue )(
            ICredentialProviderCredential2 * This,
                       DWORD dwFieldID,
            _Out_ DWORD *pdwAdjacentTo);
        HRESULT ( STDMETHODCALLTYPE *GetComboBoxValueCount )(
            ICredentialProviderCredential2 * This,
                       DWORD dwFieldID,
            _Out_ DWORD *pcItems,
            _Out_ DWORD *pdwSelectedItem);
        HRESULT ( STDMETHODCALLTYPE *GetComboBoxValueAt )(
            ICredentialProviderCredential2 * This,
                       DWORD dwFieldID,
            DWORD dwItem,
            _Outptr_result_nullonfailure_ LPWSTR *ppszItem);
        HRESULT ( STDMETHODCALLTYPE *SetStringValue )(
            ICredentialProviderCredential2 * This,
                       DWORD dwFieldID,
            _In_ LPCWSTR psz);
        HRESULT ( STDMETHODCALLTYPE *SetCheckboxValue )(
            ICredentialProviderCredential2 * This,
                       DWORD dwFieldID,
                       BOOL bChecked);
        HRESULT ( STDMETHODCALLTYPE *SetComboBoxSelectedValue )(
            ICredentialProviderCredential2 * This,
                       DWORD dwFieldID,
                       DWORD dwSelectedItem);
        HRESULT ( STDMETHODCALLTYPE *CommandLinkClicked )(
            ICredentialProviderCredential2 * This,
                       DWORD dwFieldID);
        HRESULT ( STDMETHODCALLTYPE *GetSerialization )(
            ICredentialProviderCredential2 * This,
            _Out_ CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *pcpgsr,
            _Out_ CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcs,
            _Outptr_result_maybenull_ LPWSTR *ppszOptionalStatusText,
            _Out_ CREDENTIAL_PROVIDER_STATUS_ICON *pcpsiOptionalStatusIcon);
        HRESULT ( STDMETHODCALLTYPE *ReportResult )(
            ICredentialProviderCredential2 * This,
                       NTSTATUS ntsStatus,
                       NTSTATUS ntsSubstatus,
            _Outptr_result_maybenull_ LPWSTR *ppszOptionalStatusText,
            _Out_ CREDENTIAL_PROVIDER_STATUS_ICON *pcpsiOptionalStatusIcon);
        HRESULT ( STDMETHODCALLTYPE *GetUserSid )(
            ICredentialProviderCredential2 * This,
            _Outptr_result_maybenull_ LPWSTR *sid);
        END_INTERFACE
    } ICredentialProviderCredential2Vtbl;
    interface ICredentialProviderCredential2
    {
        CONST_VTBL struct ICredentialProviderCredential2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Advise(This,pcpce) )
    ( (This)->lpVtbl -> UnAdvise(This) )
    ( (This)->lpVtbl -> SetSelected(This,pbAutoLogon) )
    ( (This)->lpVtbl -> SetDeselected(This) )
    ( (This)->lpVtbl -> GetFieldState(This,dwFieldID,pcpfs,pcpfis) )
    ( (This)->lpVtbl -> GetStringValue(This,dwFieldID,ppsz) )
    ( (This)->lpVtbl -> GetBitmapValue(This,dwFieldID,phbmp) )
    ( (This)->lpVtbl -> GetCheckboxValue(This,dwFieldID,pbChecked,ppszLabel) )
    ( (This)->lpVtbl -> GetSubmitButtonValue(This,dwFieldID,pdwAdjacentTo) )
    ( (This)->lpVtbl -> GetComboBoxValueCount(This,dwFieldID,pcItems,pdwSelectedItem) )
    ( (This)->lpVtbl -> GetComboBoxValueAt(This,dwFieldID,dwItem,ppszItem) )
    ( (This)->lpVtbl -> SetStringValue(This,dwFieldID,psz) )
    ( (This)->lpVtbl -> SetCheckboxValue(This,dwFieldID,bChecked) )
    ( (This)->lpVtbl -> SetComboBoxSelectedValue(This,dwFieldID,dwSelectedItem) )
    ( (This)->lpVtbl -> CommandLinkClicked(This,dwFieldID) )
    ( (This)->lpVtbl -> GetSerialization(This,pcpgsr,pcpcs,ppszOptionalStatusText,pcpsiOptionalStatusIcon) )
    ( (This)->lpVtbl -> ReportResult(This,ntsStatus,ntsSubstatus,ppszOptionalStatusText,pcpsiOptionalStatusIcon) )
    ( (This)->lpVtbl -> GetUserSid(This,sid) )
EXTERN_C const IID IID_ICredentialProviderCredentialWithFieldOptions;
    typedef struct ICredentialProviderCredentialWithFieldOptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICredentialProviderCredentialWithFieldOptions * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICredentialProviderCredentialWithFieldOptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICredentialProviderCredentialWithFieldOptions * This);
        HRESULT ( STDMETHODCALLTYPE *GetFieldOptions )(
            ICredentialProviderCredentialWithFieldOptions * This,
                       DWORD fieldID,
            _Out_ CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *options);
        END_INTERFACE
    } ICredentialProviderCredentialWithFieldOptionsVtbl;
    interface ICredentialProviderCredentialWithFieldOptions
    {
        CONST_VTBL struct ICredentialProviderCredentialWithFieldOptionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFieldOptions(This,fieldID,options) )
EXTERN_C const IID IID_ICredentialProviderCredentialEvents2;
    typedef struct ICredentialProviderCredentialEvents2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICredentialProviderCredentialEvents2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICredentialProviderCredentialEvents2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICredentialProviderCredentialEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetFieldState )(
            __RPC__in ICredentialProviderCredentialEvents2 * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                       CREDENTIAL_PROVIDER_FIELD_STATE cpfs);
        HRESULT ( STDMETHODCALLTYPE *SetFieldInteractiveState )(
            __RPC__in ICredentialProviderCredentialEvents2 * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                       CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE cpfis);
        HRESULT ( STDMETHODCALLTYPE *SetFieldString )(
            __RPC__in ICredentialProviderCredentialEvents2 * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                                       __RPC__in_opt_string LPCWSTR psz);
        HRESULT ( STDMETHODCALLTYPE *SetFieldCheckbox )(
            __RPC__in ICredentialProviderCredentialEvents2 * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                       BOOL bChecked,
                       __RPC__in LPCWSTR pszLabel);
        HRESULT ( STDMETHODCALLTYPE *SetFieldBitmap )(
            __RPC__in ICredentialProviderCredentialEvents2 * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                       __RPC__in HBITMAP hbmp);
        HRESULT ( STDMETHODCALLTYPE *SetFieldComboBoxSelectedItem )(
            __RPC__in ICredentialProviderCredentialEvents2 * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                       DWORD dwSelectedItem);
        HRESULT ( STDMETHODCALLTYPE *DeleteFieldComboBoxItem )(
            __RPC__in ICredentialProviderCredentialEvents2 * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                       DWORD dwItem);
        HRESULT ( STDMETHODCALLTYPE *AppendFieldComboBoxItem )(
            __RPC__in ICredentialProviderCredentialEvents2 * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                               __RPC__in_string LPCWSTR pszItem);
        HRESULT ( STDMETHODCALLTYPE *SetFieldSubmitButton )(
            __RPC__in ICredentialProviderCredentialEvents2 * This,
                       __RPC__in_opt ICredentialProviderCredential *pcpc,
                       DWORD dwFieldID,
                       DWORD dwAdjacentTo);
        HRESULT ( STDMETHODCALLTYPE *OnCreatingWindow )(
            __RPC__in ICredentialProviderCredentialEvents2 * This,
                        __RPC__deref_out_opt HWND *phwndOwner);
        HRESULT ( STDMETHODCALLTYPE *BeginFieldUpdates )(
            __RPC__in ICredentialProviderCredentialEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *EndFieldUpdates )(
            __RPC__in ICredentialProviderCredentialEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetFieldOptions )(
            __RPC__in ICredentialProviderCredentialEvents2 * This,
                       __RPC__in_opt ICredentialProviderCredential *credential,
                       DWORD fieldID,
                       CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS options);
        END_INTERFACE
    } ICredentialProviderCredentialEvents2Vtbl;
    interface ICredentialProviderCredentialEvents2
    {
        CONST_VTBL struct ICredentialProviderCredentialEvents2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFieldState(This,pcpc,dwFieldID,cpfs) )
    ( (This)->lpVtbl -> SetFieldInteractiveState(This,pcpc,dwFieldID,cpfis) )
    ( (This)->lpVtbl -> SetFieldString(This,pcpc,dwFieldID,psz) )
    ( (This)->lpVtbl -> SetFieldCheckbox(This,pcpc,dwFieldID,bChecked,pszLabel) )
    ( (This)->lpVtbl -> SetFieldBitmap(This,pcpc,dwFieldID,hbmp) )
    ( (This)->lpVtbl -> SetFieldComboBoxSelectedItem(This,pcpc,dwFieldID,dwSelectedItem) )
    ( (This)->lpVtbl -> DeleteFieldComboBoxItem(This,pcpc,dwFieldID,dwItem) )
    ( (This)->lpVtbl -> AppendFieldComboBoxItem(This,pcpc,dwFieldID,pszItem) )
    ( (This)->lpVtbl -> SetFieldSubmitButton(This,pcpc,dwFieldID,dwAdjacentTo) )
    ( (This)->lpVtbl -> OnCreatingWindow(This,phwndOwner) )
    ( (This)->lpVtbl -> BeginFieldUpdates(This) )
    ( (This)->lpVtbl -> EndFieldUpdates(This) )
    ( (This)->lpVtbl -> SetFieldOptions(This,credential,fieldID,options) )
EXTERN_C const IID IID_ICredentialProviderUser;
    typedef struct ICredentialProviderUserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICredentialProviderUser * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICredentialProviderUser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICredentialProviderUser * This);
        HRESULT ( STDMETHODCALLTYPE *GetSid )(
            ICredentialProviderUser * This,
            _Outptr_result_nullonfailure_ LPWSTR *sid);
        HRESULT ( STDMETHODCALLTYPE *GetProviderID )(
            ICredentialProviderUser * This,
            _Out_ GUID *providerID);
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )(
            ICredentialProviderUser * This,
            _In_ REFPROPERTYKEY key,
            _Outptr_result_nullonfailure_ LPWSTR *stringValue);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            ICredentialProviderUser * This,
            _In_ REFPROPERTYKEY key,
            _Out_ PROPVARIANT *value);
        END_INTERFACE
    } ICredentialProviderUserVtbl;
    interface ICredentialProviderUser
    {
        CONST_VTBL struct ICredentialProviderUserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSid(This,sid) )
    ( (This)->lpVtbl -> GetProviderID(This,providerID) )
    ( (This)->lpVtbl -> GetStringValue(This,key,stringValue) )
    ( (This)->lpVtbl -> GetValue(This,key,value) )
DEFINE_GUID(Identity_LocalUserProvider, 0xA198529B, 0x730F, 0x4089, 0xB6, 0x46, 0xA1, 0x25, 0x57, 0xF5, 0x66, 0x5E);
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_ICredentialProviderUserArray;
    typedef struct ICredentialProviderUserArrayVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICredentialProviderUserArray * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICredentialProviderUserArray * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICredentialProviderUserArray * This);
        HRESULT ( STDMETHODCALLTYPE *SetProviderFilter )(
            ICredentialProviderUserArray * This,
                       REFGUID guidProviderToFilterTo);
        HRESULT ( STDMETHODCALLTYPE *GetAccountOptions )(
            ICredentialProviderUserArray * This,
            _Out_ CREDENTIAL_PROVIDER_ACCOUNT_OPTIONS *credentialProviderAccountOptions);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            ICredentialProviderUserArray * This,
            _Out_ DWORD *userCount);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            ICredentialProviderUserArray * This,
                       DWORD userIndex,
            _COM_Outptr_ ICredentialProviderUser **user);
        END_INTERFACE
    } ICredentialProviderUserArrayVtbl;
    interface ICredentialProviderUserArray
    {
        CONST_VTBL struct ICredentialProviderUserArrayVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetProviderFilter(This,guidProviderToFilterTo) )
    ( (This)->lpVtbl -> GetAccountOptions(This,credentialProviderAccountOptions) )
    ( (This)->lpVtbl -> GetCount(This,userCount) )
    ( (This)->lpVtbl -> GetAt(This,userIndex,user) )
EXTERN_C const IID IID_ICredentialProviderSetUserArray;
    typedef struct ICredentialProviderSetUserArrayVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICredentialProviderSetUserArray * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICredentialProviderSetUserArray * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICredentialProviderSetUserArray * This);
        HRESULT ( STDMETHODCALLTYPE *SetUserArray )(
            ICredentialProviderSetUserArray * This,
            _In_ ICredentialProviderUserArray *users);
        END_INTERFACE
    } ICredentialProviderSetUserArrayVtbl;
    interface ICredentialProviderSetUserArray
    {
        CONST_VTBL struct ICredentialProviderSetUserArrayVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetUserArray(This,users) )
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID LIBID_CredentialProviders;
EXTERN_C const CLSID CLSID_PasswordCredentialProvider;
class DECLSPEC_UUID("60b78e88-ead8-445c-9cfd-0b87f74ea6cd")
PasswordCredentialProvider;
EXTERN_C const CLSID CLSID_V1PasswordCredentialProvider;
class DECLSPEC_UUID("6f45dc1e-5384-457a-bc13-2cd81b0d28ed")
V1PasswordCredentialProvider;
EXTERN_C const CLSID CLSID_PINLogonCredentialProvider;
class DECLSPEC_UUID("cb82ea12-9f71-446d-89e1-8d0924e1256e")
PINLogonCredentialProvider;
EXTERN_C const CLSID CLSID_NPCredentialProvider;
class DECLSPEC_UUID("3dd6bec0-8193-4ffe-ae25-e08e39ea4063")
NPCredentialProvider;
EXTERN_C const CLSID CLSID_SmartcardCredentialProvider;
class DECLSPEC_UUID("8FD7E19C-3BF7-489B-A72C-846AB3678C96")
SmartcardCredentialProvider;
EXTERN_C const CLSID CLSID_V1SmartcardCredentialProvider;
class DECLSPEC_UUID("8bf9a910-a8ff-457f-999f-a5ca10b4a885")
V1SmartcardCredentialProvider;
EXTERN_C const CLSID CLSID_SmartcardPinProvider;
class DECLSPEC_UUID("94596c7e-3744-41ce-893e-bbf09122f76a")
SmartcardPinProvider;
EXTERN_C const CLSID CLSID_SmartcardReaderSelectionProvider;
class DECLSPEC_UUID("1b283861-754f-4022-ad47-a5eaaa618894")
SmartcardReaderSelectionProvider;
EXTERN_C const CLSID CLSID_SmartcardWinRTProvider;
class DECLSPEC_UUID("1ee7337f-85ac-45e2-a23c-37c753209769")
SmartcardWinRTProvider;
EXTERN_C const CLSID CLSID_GenericCredentialProvider;
class DECLSPEC_UUID("25CBB996-92ED-457e-B28C-4774084BD562")
GenericCredentialProvider;
EXTERN_C const CLSID CLSID_RASProvider;
class DECLSPEC_UUID("5537E283-B1E7-4EF8-9C6E-7AB0AFE5056D")
RASProvider;
EXTERN_C const CLSID CLSID_OnexCredentialProvider;
class DECLSPEC_UUID("07AA0886-CC8D-4e19-A410-1C75AF686E62")
OnexCredentialProvider;
EXTERN_C const CLSID CLSID_OnexPlapSmartcardCredentialProvider;
class DECLSPEC_UUID("33c86cd6-705f-4ba1-9adb-67070b837775")
OnexPlapSmartcardCredentialProvider;
EXTERN_C const CLSID CLSID_VaultProvider;
class DECLSPEC_UUID("503739d0-4c5e-4cfd-b3ba-d881334f0df2")
VaultProvider;
EXTERN_C const CLSID CLSID_WinBioCredentialProvider;
class DECLSPEC_UUID("BEC09223-B018-416D-A0AC-523971B639F5")
WinBioCredentialProvider;
EXTERN_C const CLSID CLSID_V1WinBioCredentialProvider;
class DECLSPEC_UUID("AC3AC249-E820-4343-A65B-377AC634DC09")
V1WinBioCredentialProvider;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0014_v0_0_s_ifspec;
unsigned long __RPC_USER HBITMAP_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER HBITMAP_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree64( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
