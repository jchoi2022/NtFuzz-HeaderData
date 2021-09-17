#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IContactManager IContactManager;
typedef interface IContactCollection IContactCollection;
typedef interface IContactProperties IContactProperties;
typedef interface IContact IContact;
typedef interface IContactPropertyCollection IContactPropertyCollection;
typedef class Contact Contact;
typedef class ContactManager ContactManager;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_icontact_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_icontact_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IContactManager;
    typedef struct IContactManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContactManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContactManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContactManager * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IContactManager * This,
                                       __RPC__in_opt_string LPCWSTR pszAppName,
                                       __RPC__in_opt_string LPCWSTR pszAppVersion);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in IContactManager * This,
                                       __RPC__in_opt_string LPCWSTR pszContactID,
                        __RPC__deref_out_opt IContact **ppContact);
        HRESULT ( STDMETHODCALLTYPE *MergeContactIDs )(
            __RPC__in IContactManager * This,
                                       __RPC__in_opt_string LPCWSTR pszNewContactID,
                                       __RPC__in_opt_string LPCWSTR pszOldContactID);
        HRESULT ( STDMETHODCALLTYPE *GetMeContact )(
            __RPC__in IContactManager * This,
                        __RPC__deref_out_opt IContact **ppMeContact);
        HRESULT ( STDMETHODCALLTYPE *SetMeContact )(
            __RPC__in IContactManager * This,
                       __RPC__in_opt IContact *pMeContact);
        HRESULT ( STDMETHODCALLTYPE *GetContactCollection )(
            __RPC__in IContactManager * This,
                        __RPC__deref_out_opt IContactCollection **ppContactCollection);
        END_INTERFACE
    } IContactManagerVtbl;
    interface IContactManager
    {
        CONST_VTBL struct IContactManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pszAppName,pszAppVersion) )
    ( (This)->lpVtbl -> Load(This,pszContactID,ppContact) )
    ( (This)->lpVtbl -> MergeContactIDs(This,pszNewContactID,pszOldContactID) )
    ( (This)->lpVtbl -> GetMeContact(This,ppMeContact) )
    ( (This)->lpVtbl -> SetMeContact(This,pMeContact) )
    ( (This)->lpVtbl -> GetContactCollection(This,ppContactCollection) )
EXTERN_C const IID IID_IContactCollection;
    typedef struct IContactCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContactCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContactCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContactCollection * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IContactCollection * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IContactCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IContactCollection * This,
                        __RPC__deref_out_opt IContact **ppContact);
        END_INTERFACE
    } IContactCollectionVtbl;
    interface IContactCollection
    {
        CONST_VTBL struct IContactCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Next(This) )
    ( (This)->lpVtbl -> GetCurrent(This,ppContact) )
EXTERN_C const IID IID_IContactProperties;
    typedef struct IContactPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContactProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContactProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContactProperties * This);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in IContactProperties * This,
                                       __RPC__in_opt_string LPCWSTR pszPropertyName,
            DWORD dwFlags,
                                                     __RPC__inout_ecount_full_opt_string(cchValue) LPWSTR pszValue,
                       DWORD cchValue,
                                    __RPC__inout_opt DWORD *pdwcchPropertyValueRequired);
        HRESULT ( STDMETHODCALLTYPE *GetDate )(
            __RPC__in IContactProperties * This,
                                       __RPC__in_opt_string LPCWSTR pszPropertyName,
            DWORD dwFlags,
                                    __RPC__inout_opt FILETIME *pftDateTime);
        HRESULT ( STDMETHODCALLTYPE *GetBinary )(
            __RPC__in IContactProperties * This,
                                       __RPC__in_opt_string LPCWSTR pszPropertyName,
            DWORD dwFlags,
                                             __RPC__inout_ecount_full_opt(cchContentType) LPWSTR pszContentType,
                       DWORD cchContentType,
                                    __RPC__inout_opt DWORD *pdwcchContentTypeRequired,
                        __RPC__deref_out_opt IStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *GetLabels )(
            __RPC__in IContactProperties * This,
                                       __RPC__in_opt_string LPCWSTR pszArrayElementName,
            DWORD dwFlags,
                                             __RPC__inout_ecount_full_opt(cchLabels) LPWSTR pszLabels,
                       DWORD cchLabels,
                                    __RPC__inout_opt DWORD *pdwcchLabelsRequired);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            __RPC__in IContactProperties * This,
                                       __RPC__in_opt_string LPCWSTR pszPropertyName,
            DWORD dwFlags,
                                       __RPC__in_opt_string LPCWSTR pszValue);
        HRESULT ( STDMETHODCALLTYPE *SetDate )(
            __RPC__in IContactProperties * This,
                                       __RPC__in_opt_string LPCWSTR pszPropertyName,
            DWORD dwFlags,
                       FILETIME ftDateTime);
        HRESULT ( STDMETHODCALLTYPE *SetBinary )(
            __RPC__in IContactProperties * This,
                                       __RPC__in_opt_string LPCWSTR pszPropertyName,
            DWORD dwFlags,
                                       __RPC__in_opt_string LPCWSTR pszContentType,
                               __RPC__in_opt IStream *pStream);
        HRESULT ( STDMETHODCALLTYPE *SetLabels )(
            __RPC__in IContactProperties * This,
                                       __RPC__in_opt_string LPCWSTR pszArrayElementName,
            DWORD dwFlags,
                       DWORD dwLabelCount,
                                        __RPC__in_ecount_full_opt(dwLabelCount) LPCWSTR ppszLabels[ ]);
        HRESULT ( STDMETHODCALLTYPE *CreateArrayNode )(
            __RPC__in IContactProperties * This,
                                       __RPC__in_opt_string LPCWSTR pszArrayName,
            DWORD dwFlags,
            BOOL fAppend,
                                                     __RPC__inout_ecount_full_opt_string(cchNewArrayElementName) LPWSTR pszNewArrayElementName,
            DWORD cchNewArrayElementName,
                                    __RPC__inout_opt DWORD *pdwcchNewArrayElementNameRequired);
        HRESULT ( STDMETHODCALLTYPE *DeleteProperty )(
            __RPC__in IContactProperties * This,
                                       __RPC__in_opt_string LPCWSTR pszPropertyName,
            DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *DeleteArrayNode )(
            __RPC__in IContactProperties * This,
                                       __RPC__in_opt_string LPCWSTR pszArrayElementName,
            DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *DeleteLabels )(
            __RPC__in IContactProperties * This,
                                       __RPC__in_opt_string LPCWSTR pszArrayElementName,
            DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyCollection )(
            __RPC__in IContactProperties * This,
                        __RPC__deref_out_opt IContactPropertyCollection **ppPropertyCollection,
            DWORD dwFlags,
                                       __RPC__in_opt_string LPCWSTR pszMultiValueName,
                       DWORD dwLabelCount,
                                        __RPC__in_ecount_full_opt(dwLabelCount) LPCWSTR ppszLabels[ ],
            BOOL fAnyLabelMatches);
        END_INTERFACE
    } IContactPropertiesVtbl;
    interface IContactProperties
    {
        CONST_VTBL struct IContactPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetString(This,pszPropertyName,dwFlags,pszValue,cchValue,pdwcchPropertyValueRequired) )
    ( (This)->lpVtbl -> GetDate(This,pszPropertyName,dwFlags,pftDateTime) )
    ( (This)->lpVtbl -> GetBinary(This,pszPropertyName,dwFlags,pszContentType,cchContentType,pdwcchContentTypeRequired,ppStream) )
    ( (This)->lpVtbl -> GetLabels(This,pszArrayElementName,dwFlags,pszLabels,cchLabels,pdwcchLabelsRequired) )
    ( (This)->lpVtbl -> SetString(This,pszPropertyName,dwFlags,pszValue) )
    ( (This)->lpVtbl -> SetDate(This,pszPropertyName,dwFlags,ftDateTime) )
    ( (This)->lpVtbl -> SetBinary(This,pszPropertyName,dwFlags,pszContentType,pStream) )
    ( (This)->lpVtbl -> SetLabels(This,pszArrayElementName,dwFlags,dwLabelCount,ppszLabels) )
    ( (This)->lpVtbl -> CreateArrayNode(This,pszArrayName,dwFlags,fAppend,pszNewArrayElementName,cchNewArrayElementName,pdwcchNewArrayElementNameRequired) )
    ( (This)->lpVtbl -> DeleteProperty(This,pszPropertyName,dwFlags) )
    ( (This)->lpVtbl -> DeleteArrayNode(This,pszArrayElementName,dwFlags) )
    ( (This)->lpVtbl -> DeleteLabels(This,pszArrayElementName,dwFlags) )
    ( (This)->lpVtbl -> GetPropertyCollection(This,ppPropertyCollection,dwFlags,pszMultiValueName,dwLabelCount,ppszLabels,fAnyLabelMatches) )
EXTERN_C const IID IID_IContact;
    typedef struct IContactVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContact * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContact * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContact * This);
        HRESULT ( STDMETHODCALLTYPE *GetContactID )(
            __RPC__in IContact * This,
                                             __RPC__inout_ecount_full_string(cchContactID) LPWSTR pszContactID,
                       DWORD cchContactID,
                                    __RPC__inout_opt DWORD *pdwcchContactIDRequired);
        HRESULT ( STDMETHODCALLTYPE *GetPath )(
            __RPC__in IContact * This,
                                             __RPC__inout_ecount_full_string(cchPath) LPWSTR pszPath,
                       DWORD cchPath,
                                    __RPC__inout_opt DWORD *pdwcchPathRequired);
        HRESULT ( STDMETHODCALLTYPE *CommitChanges )(
            __RPC__in IContact * This,
                       DWORD dwCommitFlags);
        END_INTERFACE
    } IContactVtbl;
    interface IContact
    {
        CONST_VTBL struct IContactVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetContactID(This,pszContactID,cchContactID,pdwcchContactIDRequired) )
    ( (This)->lpVtbl -> GetPath(This,pszPath,cchPath,pdwcchPathRequired) )
    ( (This)->lpVtbl -> CommitChanges(This,dwCommitFlags) )
EXTERN_C const IID IID_IContactPropertyCollection;
    typedef struct IContactPropertyCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContactPropertyCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContactPropertyCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContactPropertyCollection * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IContactPropertyCollection * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IContactPropertyCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyName )(
            __RPC__in IContactPropertyCollection * This,
                                                             __RPC__inout_ecount_full_opt_string(cchPropertyName) LPWSTR pszPropertyName,
                       DWORD cchPropertyName,
                                    __RPC__inout_opt DWORD *pdwcchPropertyNameRequired);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyType )(
            __RPC__in IContactPropertyCollection * This,
                                    __RPC__inout_opt DWORD *pdwType);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyVersion )(
            __RPC__in IContactPropertyCollection * This,
                                    __RPC__inout_opt DWORD *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyModificationDate )(
            __RPC__in IContactPropertyCollection * This,
                                    __RPC__inout_opt FILETIME *pftModificationDate);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyArrayElementID )(
            __RPC__in IContactPropertyCollection * This,
                                                             __RPC__inout_ecount_full_opt_string(cchArrayElementID) LPWSTR pszArrayElementID,
                       DWORD cchArrayElementID,
                                    __RPC__inout_opt DWORD *pdwcchArrayElementIDRequired);
        END_INTERFACE
    } IContactPropertyCollectionVtbl;
    interface IContactPropertyCollection
    {
        CONST_VTBL struct IContactPropertyCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Next(This) )
    ( (This)->lpVtbl -> GetPropertyName(This,pszPropertyName,cchPropertyName,pdwcchPropertyNameRequired) )
    ( (This)->lpVtbl -> GetPropertyType(This,pdwType) )
    ( (This)->lpVtbl -> GetPropertyVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> GetPropertyModificationDate(This,pftModificationDate) )
    ( (This)->lpVtbl -> GetPropertyArrayElementID(This,pszArrayElementID,cchArrayElementID,pdwcchArrayElementIDRequired) )
EXTERN_C const IID LIBID_CONTACT;
EXTERN_C const CLSID CLSID_Contact;
class DECLSPEC_UUID("61b68808-8eee-4fd1-acb8-3d804c8db056")
Contact;
EXTERN_C const CLSID CLSID_ContactManager;
class DECLSPEC_UUID("7165c8ab-af88-42bd-86fd-5310b4285a02")
ContactManager;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_icontact_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_icontact_0000_0006_v0_0_s_ifspec;
}
