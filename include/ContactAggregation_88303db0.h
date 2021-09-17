#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IContactAggregationManager IContactAggregationManager;
typedef interface IContactAggregationContact IContactAggregationContact;
typedef interface IContactAggregationContactCollection IContactAggregationContactCollection;
typedef interface IContactAggregationAggregate IContactAggregationAggregate;
typedef interface IContactAggregationAggregateCollection IContactAggregationAggregateCollection;
typedef interface IContactAggregationGroup IContactAggregationGroup;
typedef interface IContactAggregationGroupCollection IContactAggregationGroupCollection;
typedef interface IContactAggregationLink IContactAggregationLink;
typedef interface IContactAggregationLinkCollection IContactAggregationLinkCollection;
typedef interface IContactAggregationServerPerson IContactAggregationServerPerson;
typedef interface IContactAggregationServerPersonCollection IContactAggregationServerPersonCollection;
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum CONTACT_AGGREGATION_CREATE_OR_OPEN_OPTIONS
    {
        CA_CREATE_LOCAL = 0,
        CA_CREATE_EXTERNAL = 1
    } CONTACT_AGGREGATION_CREATE_OR_OPEN_OPTIONS;
typedef
enum CONTACT_AGGREGATION_COLLECTION_OPTIONS
    {
        CACO_DEFAULT = 0,
        CACO_INCLUDE_EXTERNAL = 1,
        CACO_EXTERNAL_ONLY = 2
    } CONTACT_AGGREGATION_COLLECTION_OPTIONS;
typedef struct _CONTACT_AGGREGATION_BLOB
    {
    DWORD dwCount;
                    BYTE *lpb;
    } CONTACT_AGGREGATION_BLOB;
typedef struct _CONTACT_AGGREGATION_BLOB *PCONTACT_AGGREGATION_BLOB;
DEFINE_GUID(CLSID_ContactAggregationManager, 0x96c8ad95, 0xc199, 0x44de, 0xb3, 0x4e, 0xac, 0x33, 0xc4, 0x42, 0xdf, 0x39);
#pragma deprecated(IContactAggregationManager)
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IContactAggregationManager;
    typedef struct IContactAggregationManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContactAggregationManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContactAggregationManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContactAggregationManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetVersionInfo )(
            __RPC__in IContactAggregationManager * This,
                        __RPC__out long *plMajorVersion,
                        __RPC__out long *plMinorVersion);
        HRESULT ( STDMETHODCALLTYPE *CreateOrOpenGroup )(
            __RPC__in IContactAggregationManager * This,
                       __RPC__in LPCWSTR pGroupName,
                       CONTACT_AGGREGATION_CREATE_OR_OPEN_OPTIONS options,
                        __RPC__out BOOL *pCreatedGroup,
                                __RPC__deref_out_opt IContactAggregationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *CreateExternalContact )(
            __RPC__in IContactAggregationManager * This,
                                __RPC__deref_out_opt IContactAggregationContact **ppItem);
        HRESULT ( STDMETHODCALLTYPE *CreateServerPerson )(
            __RPC__in IContactAggregationManager * This,
                        __RPC__deref_out_opt IContactAggregationServerPerson **ppServerPerson);
        HRESULT ( STDMETHODCALLTYPE *CreateServerContactLink )(
            __RPC__in IContactAggregationManager * This,
                        __RPC__deref_out_opt IContactAggregationLink **ppServerContactLink);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            __RPC__in IContactAggregationManager * This);
        HRESULT ( STDMETHODCALLTYPE *OpenAggregateContact )(
            __RPC__in IContactAggregationManager * This,
                       __RPC__in LPCWSTR pItemId,
                        __RPC__deref_out_opt IContactAggregationAggregate **ppItem);
        HRESULT ( STDMETHODCALLTYPE *OpenContact )(
            __RPC__in IContactAggregationManager * This,
                       __RPC__in LPCWSTR pItemId,
                        __RPC__deref_out_opt IContactAggregationContact **ppItem);
        HRESULT ( STDMETHODCALLTYPE *OpenServerContactLink )(
            __RPC__in IContactAggregationManager * This,
                       __RPC__in LPCWSTR pItemId,
                        __RPC__deref_out_opt IContactAggregationLink **ppItem);
        HRESULT ( STDMETHODCALLTYPE *OpenServerPerson )(
            __RPC__in IContactAggregationManager * This,
                       __RPC__in LPCWSTR pItemId,
                        __RPC__deref_out_opt IContactAggregationServerPerson **ppItem);
                        HRESULT ( STDMETHODCALLTYPE *get_Contacts )(
            __RPC__in IContactAggregationManager * This,
                       CONTACT_AGGREGATION_COLLECTION_OPTIONS options,
                                __RPC__deref_out_opt IContactAggregationContactCollection **ppItems);
                        HRESULT ( STDMETHODCALLTYPE *get_AggregateContacts )(
            __RPC__in IContactAggregationManager * This,
                       CONTACT_AGGREGATION_COLLECTION_OPTIONS options,
                        __RPC__deref_out_opt IContactAggregationAggregateCollection **ppAggregates);
                        HRESULT ( STDMETHODCALLTYPE *get_Groups )(
            __RPC__in IContactAggregationManager * This,
                       CONTACT_AGGREGATION_COLLECTION_OPTIONS options,
                        __RPC__deref_out_opt IContactAggregationGroupCollection **ppGroups);
                        HRESULT ( STDMETHODCALLTYPE *get_ServerPersons )(
            __RPC__in IContactAggregationManager * This,
                        __RPC__deref_out_opt IContactAggregationServerPersonCollection **ppServerPersonCollection);
                        HRESULT ( STDMETHODCALLTYPE *get_ServerContactLinks )(
            __RPC__in IContactAggregationManager * This,
                       __RPC__in LPCWSTR pPersonItemId,
                        __RPC__deref_out_opt IContactAggregationLinkCollection **ppServerContactLinkCollection);
        END_INTERFACE
    } IContactAggregationManagerVtbl;
    interface IContactAggregationManager
    {
        CONST_VTBL struct IContactAggregationManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetVersionInfo(This,plMajorVersion,plMinorVersion) )
    ( (This)->lpVtbl -> CreateOrOpenGroup(This,pGroupName,options,pCreatedGroup,ppGroup) )
    ( (This)->lpVtbl -> CreateExternalContact(This,ppItem) )
    ( (This)->lpVtbl -> CreateServerPerson(This,ppServerPerson) )
    ( (This)->lpVtbl -> CreateServerContactLink(This,ppServerContactLink) )
    ( (This)->lpVtbl -> Flush(This) )
    ( (This)->lpVtbl -> OpenAggregateContact(This,pItemId,ppItem) )
    ( (This)->lpVtbl -> OpenContact(This,pItemId,ppItem) )
    ( (This)->lpVtbl -> OpenServerContactLink(This,pItemId,ppItem) )
    ( (This)->lpVtbl -> OpenServerPerson(This,pItemId,ppItem) )
    ( (This)->lpVtbl -> get_Contacts(This,options,ppItems) )
    ( (This)->lpVtbl -> get_AggregateContacts(This,options,ppAggregates) )
    ( (This)->lpVtbl -> get_Groups(This,options,ppGroups) )
    ( (This)->lpVtbl -> get_ServerPersons(This,ppServerPersonCollection) )
    ( (This)->lpVtbl -> get_ServerContactLinks(This,pPersonItemId,ppServerContactLinkCollection) )
#pragma deprecated(IContactAggregationContact)
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IContactAggregationContact;
    typedef struct IContactAggregationContactVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContactAggregationContact * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContactAggregationContact * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContactAggregationContact * This);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IContactAggregationContact * This);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IContactAggregationContact * This);
        HRESULT ( STDMETHODCALLTYPE *MoveToAggregate )(
            __RPC__in IContactAggregationContact * This,
                       __RPC__in LPCWSTR pAggregateId);
        HRESULT ( STDMETHODCALLTYPE *Unlink )(
            __RPC__in IContactAggregationContact * This);
                        HRESULT ( STDMETHODCALLTYPE *get_AccountId )(
            __RPC__in IContactAggregationContact * This,
                                __RPC__deref_out_opt LPWSTR *ppAccountId);
                        HRESULT ( STDMETHODCALLTYPE *put_AccountId )(
            __RPC__in IContactAggregationContact * This,
                       __RPC__in LPCWSTR pAccountId);
                        HRESULT ( STDMETHODCALLTYPE *get_AggregateId )(
            __RPC__in IContactAggregationContact * This,
                        __RPC__deref_out_opt LPWSTR *ppAggregateId);
                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IContactAggregationContact * This,
                                __RPC__deref_out_opt LPWSTR *ppItemId);
                        HRESULT ( STDMETHODCALLTYPE *get_IsMe )(
            __RPC__in IContactAggregationContact * This,
                                __RPC__out BOOL *pIsMe);
                        HRESULT ( STDMETHODCALLTYPE *get_IsExternal )(
            __RPC__in IContactAggregationContact * This,
                                __RPC__out BOOL *pIsExternal);
                        HRESULT ( STDMETHODCALLTYPE *get_NetworkSourceId )(
            __RPC__in IContactAggregationContact * This,
                                __RPC__out ULONG *pNetworkSourceId);
                        HRESULT ( STDMETHODCALLTYPE *put_NetworkSourceId )(
            __RPC__in IContactAggregationContact * This,
                       ULONG networkSourceId);
                        HRESULT ( STDMETHODCALLTYPE *get_NetworkSourceIdString )(
            __RPC__in IContactAggregationContact * This,
                                __RPC__deref_out_opt LPWSTR *ppNetworkSourceId);
                        HRESULT ( STDMETHODCALLTYPE *put_NetworkSourceIdString )(
            __RPC__in IContactAggregationContact * This,
                       __RPC__in LPCWSTR pNetworkSourceId);
                        HRESULT ( STDMETHODCALLTYPE *get_RemoteObjectId )(
            __RPC__in IContactAggregationContact * This,
                                __RPC__deref_out_opt CONTACT_AGGREGATION_BLOB **ppRemoteObjectId);
                        HRESULT ( STDMETHODCALLTYPE *put_RemoteObjectId )(
            __RPC__in IContactAggregationContact * This,
                       __RPC__in const CONTACT_AGGREGATION_BLOB *pRemoteObjectId);
                        HRESULT ( STDMETHODCALLTYPE *get_SyncIdentityHash )(
            __RPC__in IContactAggregationContact * This,
                                __RPC__deref_out_opt CONTACT_AGGREGATION_BLOB **ppSyncIdentityHash);
                        HRESULT ( STDMETHODCALLTYPE *put_SyncIdentityHash )(
            __RPC__in IContactAggregationContact * This,
                       __RPC__in const CONTACT_AGGREGATION_BLOB *pSyncIdentityHash);
        END_INTERFACE
    } IContactAggregationContactVtbl;
    interface IContactAggregationContact
    {
        CONST_VTBL struct IContactAggregationContactVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> MoveToAggregate(This,pAggregateId) )
    ( (This)->lpVtbl -> Unlink(This) )
    ( (This)->lpVtbl -> get_AccountId(This,ppAccountId) )
    ( (This)->lpVtbl -> put_AccountId(This,pAccountId) )
    ( (This)->lpVtbl -> get_AggregateId(This,ppAggregateId) )
    ( (This)->lpVtbl -> get_Id(This,ppItemId) )
    ( (This)->lpVtbl -> get_IsMe(This,pIsMe) )
    ( (This)->lpVtbl -> get_IsExternal(This,pIsExternal) )
    ( (This)->lpVtbl -> get_NetworkSourceId(This,pNetworkSourceId) )
    ( (This)->lpVtbl -> put_NetworkSourceId(This,networkSourceId) )
    ( (This)->lpVtbl -> get_NetworkSourceIdString(This,ppNetworkSourceId) )
    ( (This)->lpVtbl -> put_NetworkSourceIdString(This,pNetworkSourceId) )
    ( (This)->lpVtbl -> get_RemoteObjectId(This,ppRemoteObjectId) )
    ( (This)->lpVtbl -> put_RemoteObjectId(This,pRemoteObjectId) )
    ( (This)->lpVtbl -> get_SyncIdentityHash(This,ppSyncIdentityHash) )
    ( (This)->lpVtbl -> put_SyncIdentityHash(This,pSyncIdentityHash) )
#pragma deprecated(IContactAggregationContactCollection)
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IContactAggregationContactCollection;
    typedef struct IContactAggregationContactCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContactAggregationContactCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContactAggregationContactCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContactAggregationContactCollection * This);
        HRESULT ( STDMETHODCALLTYPE *FindFirst )(
            __RPC__in IContactAggregationContactCollection * This,
                                __RPC__deref_out_opt IContactAggregationContact **ppItem);
        HRESULT ( STDMETHODCALLTYPE *FindNext )(
            __RPC__in IContactAggregationContactCollection * This,
                                __RPC__deref_out_opt IContactAggregationContact **ppItem);
        HRESULT ( STDMETHODCALLTYPE *FindFirstByIdentityHash )(
            __RPC__in IContactAggregationContactCollection * This,
                       __RPC__in LPCWSTR pSourceType,
                       __RPC__in LPCWSTR pAccountId,
                       __RPC__in const CONTACT_AGGREGATION_BLOB *pIdentityHash,
                                __RPC__deref_out_opt IContactAggregationContact **ppItem);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IContactAggregationContactCollection * This,
                                __RPC__out int *pCount);
        HRESULT ( STDMETHODCALLTYPE *FindFirstByRemoteId )(
            __RPC__in IContactAggregationContactCollection * This,
                       __RPC__in LPCWSTR pSourceType,
                       __RPC__in LPCWSTR pAccountId,
                       __RPC__in const CONTACT_AGGREGATION_BLOB *pRemoteObjectId,
                                __RPC__deref_out_opt IContactAggregationContact **ppItem);
        END_INTERFACE
    } IContactAggregationContactCollectionVtbl;
    interface IContactAggregationContactCollection
    {
        CONST_VTBL struct IContactAggregationContactCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindFirst(This,ppItem) )
    ( (This)->lpVtbl -> FindNext(This,ppItem) )
    ( (This)->lpVtbl -> FindFirstByIdentityHash(This,pSourceType,pAccountId,pIdentityHash,ppItem) )
    ( (This)->lpVtbl -> get_Count(This,pCount) )
    ( (This)->lpVtbl -> FindFirstByRemoteId(This,pSourceType,pAccountId,pRemoteObjectId,ppItem) )
#pragma deprecated(IContactAggregationAggregate)
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IContactAggregationAggregate;
    typedef struct IContactAggregationAggregateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContactAggregationAggregate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContactAggregationAggregate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContactAggregationAggregate * This);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IContactAggregationAggregate * This);
        HRESULT ( STDMETHODCALLTYPE *GetComponentItems )(
            __RPC__in IContactAggregationAggregate * This,
                        __RPC__deref_out_opt IContactAggregationContactCollection **pComponentItems);
        HRESULT ( STDMETHODCALLTYPE *Link )(
            __RPC__in IContactAggregationAggregate * This,
                       __RPC__in LPCWSTR pAggregateId);
                        HRESULT ( STDMETHODCALLTYPE *get_Groups )(
            __RPC__in IContactAggregationAggregate * This,
                       CONTACT_AGGREGATION_COLLECTION_OPTIONS options,
                        __RPC__deref_out_opt IContactAggregationGroupCollection **ppGroups);
                        HRESULT ( STDMETHODCALLTYPE *get_AntiLink )(
            __RPC__in IContactAggregationAggregate * This,
                                __RPC__deref_out_opt LPWSTR *ppAntiLink);
                        HRESULT ( STDMETHODCALLTYPE *put_AntiLink )(
            __RPC__in IContactAggregationAggregate * This,
                       __RPC__in LPCWSTR pAntiLink);
                        HRESULT ( STDMETHODCALLTYPE *get_FavoriteOrder )(
            __RPC__in IContactAggregationAggregate * This,
                                __RPC__out ULONG *pFavoriteOrder);
                        HRESULT ( STDMETHODCALLTYPE *put_FavoriteOrder )(
            __RPC__in IContactAggregationAggregate * This,
                       ULONG favoriteOrder);
                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IContactAggregationAggregate * This,
                                __RPC__deref_out_opt LPWSTR *ppItemId);
        END_INTERFACE
    } IContactAggregationAggregateVtbl;
    interface IContactAggregationAggregate
    {
        CONST_VTBL struct IContactAggregationAggregateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> GetComponentItems(This,pComponentItems) )
    ( (This)->lpVtbl -> Link(This,pAggregateId) )
    ( (This)->lpVtbl -> get_Groups(This,options,ppGroups) )
    ( (This)->lpVtbl -> get_AntiLink(This,ppAntiLink) )
    ( (This)->lpVtbl -> put_AntiLink(This,pAntiLink) )
    ( (This)->lpVtbl -> get_FavoriteOrder(This,pFavoriteOrder) )
    ( (This)->lpVtbl -> put_FavoriteOrder(This,favoriteOrder) )
    ( (This)->lpVtbl -> get_Id(This,ppItemId) )
#pragma deprecated(IContactAggregationAggregateCollection)
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IContactAggregationAggregateCollection;
    typedef struct IContactAggregationAggregateCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContactAggregationAggregateCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContactAggregationAggregateCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContactAggregationAggregateCollection * This);
        HRESULT ( STDMETHODCALLTYPE *FindFirst )(
            __RPC__in IContactAggregationAggregateCollection * This,
                                __RPC__deref_out_opt IContactAggregationAggregate **ppAggregate);
        HRESULT ( STDMETHODCALLTYPE *FindFirstByAntiLinkId )(
            __RPC__in IContactAggregationAggregateCollection * This,
                       __RPC__in LPCWSTR pAntiLinkId,
                                __RPC__deref_out_opt IContactAggregationAggregate **ppAggregate);
        HRESULT ( STDMETHODCALLTYPE *FindNext )(
            __RPC__in IContactAggregationAggregateCollection * This,
                                __RPC__deref_out_opt IContactAggregationAggregate **ppAggregate);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IContactAggregationAggregateCollection * This,
                                __RPC__out int *pCount);
        END_INTERFACE
    } IContactAggregationAggregateCollectionVtbl;
    interface IContactAggregationAggregateCollection
    {
        CONST_VTBL struct IContactAggregationAggregateCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindFirst(This,ppAggregate) )
    ( (This)->lpVtbl -> FindFirstByAntiLinkId(This,pAntiLinkId,ppAggregate) )
    ( (This)->lpVtbl -> FindNext(This,ppAggregate) )
    ( (This)->lpVtbl -> get_Count(This,pCount) )
#pragma deprecated(IContactAggregationGroup)
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IContactAggregationGroup;
    typedef struct IContactAggregationGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContactAggregationGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContactAggregationGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContactAggregationGroup * This);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IContactAggregationGroup * This);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IContactAggregationGroup * This);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IContactAggregationGroup * This,
                       __RPC__in LPCWSTR pAggregateId);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IContactAggregationGroup * This,
                       __RPC__in LPCWSTR pAggregateId);
                        HRESULT ( STDMETHODCALLTYPE *get_Members )(
            __RPC__in IContactAggregationGroup * This,
                                __RPC__deref_out_opt IContactAggregationAggregateCollection **ppAggregateContactCollection);
                        HRESULT ( STDMETHODCALLTYPE *get_GlobalObjectId )(
            __RPC__in IContactAggregationGroup * This,
                                __RPC__out GUID *pGlobalObjectId);
                        HRESULT ( STDMETHODCALLTYPE *put_GlobalObjectId )(
            __RPC__in IContactAggregationGroup * This,
                       __RPC__in const GUID *pGlobalObjectId);
                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IContactAggregationGroup * This,
                                __RPC__deref_out_opt LPWSTR *ppItemId);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IContactAggregationGroup * This,
                                __RPC__deref_out_opt LPWSTR *ppName);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IContactAggregationGroup * This,
                       __RPC__in LPCWSTR pName);
        END_INTERFACE
    } IContactAggregationGroupVtbl;
    interface IContactAggregationGroup
    {
        CONST_VTBL struct IContactAggregationGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> Add(This,pAggregateId) )
    ( (This)->lpVtbl -> Remove(This,pAggregateId) )
    ( (This)->lpVtbl -> get_Members(This,ppAggregateContactCollection) )
    ( (This)->lpVtbl -> get_GlobalObjectId(This,pGlobalObjectId) )
    ( (This)->lpVtbl -> put_GlobalObjectId(This,pGlobalObjectId) )
    ( (This)->lpVtbl -> get_Id(This,ppItemId) )
    ( (This)->lpVtbl -> get_Name(This,ppName) )
    ( (This)->lpVtbl -> put_Name(This,pName) )
#pragma deprecated(IContactAggregationGroupCollection)
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IContactAggregationGroupCollection;
    typedef struct IContactAggregationGroupCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContactAggregationGroupCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContactAggregationGroupCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContactAggregationGroupCollection * This);
        HRESULT ( STDMETHODCALLTYPE *FindFirst )(
            __RPC__in IContactAggregationGroupCollection * This,
                                __RPC__deref_out_opt IContactAggregationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *FindFirstByGlobalObjectId )(
            __RPC__in IContactAggregationGroupCollection * This,
                       __RPC__in const GUID *pGlobalObjectId,
                                __RPC__deref_out_opt IContactAggregationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *FindNext )(
            __RPC__in IContactAggregationGroupCollection * This,
                                __RPC__deref_out_opt IContactAggregationGroup **ppGroup);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IContactAggregationGroupCollection * This,
                                __RPC__out UINT *pCount);
        END_INTERFACE
    } IContactAggregationGroupCollectionVtbl;
    interface IContactAggregationGroupCollection
    {
        CONST_VTBL struct IContactAggregationGroupCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindFirst(This,ppGroup) )
    ( (This)->lpVtbl -> FindFirstByGlobalObjectId(This,pGlobalObjectId,ppGroup) )
    ( (This)->lpVtbl -> FindNext(This,ppGroup) )
    ( (This)->lpVtbl -> get_Count(This,pCount) )
#pragma deprecated(IContactAggregationLink)
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IContactAggregationLink;
    typedef struct IContactAggregationLinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContactAggregationLink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContactAggregationLink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContactAggregationLink * This);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IContactAggregationLink * This);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IContactAggregationLink * This);
                        HRESULT ( STDMETHODCALLTYPE *get_AccountId )(
            __RPC__in IContactAggregationLink * This,
                                __RPC__deref_out_opt LPWSTR *ppAccountId);
                        HRESULT ( STDMETHODCALLTYPE *put_AccountId )(
            __RPC__in IContactAggregationLink * This,
                       __RPC__in LPCWSTR pAccountId);
                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IContactAggregationLink * This,
                                __RPC__deref_out_opt LPWSTR *ppItemId);
                        HRESULT ( STDMETHODCALLTYPE *get_IsLinkResolved )(
            __RPC__in IContactAggregationLink * This,
                                __RPC__out BOOL *pIsLinkResolved);
                        HRESULT ( STDMETHODCALLTYPE *put_IsLinkResolved )(
            __RPC__in IContactAggregationLink * This,
                       BOOL isLinkResolved);
                        HRESULT ( STDMETHODCALLTYPE *get_NetworkSourceIdString )(
            __RPC__in IContactAggregationLink * This,
                                __RPC__deref_out_opt LPWSTR *ppNetworkSourceId);
                        HRESULT ( STDMETHODCALLTYPE *put_NetworkSourceIdString )(
            __RPC__in IContactAggregationLink * This,
                       __RPC__in LPCWSTR pNetworkSourceId);
                        HRESULT ( STDMETHODCALLTYPE *get_RemoteObjectId )(
            __RPC__in IContactAggregationLink * This,
                                __RPC__deref_out_opt CONTACT_AGGREGATION_BLOB **ppRemoteObjectId);
                        HRESULT ( STDMETHODCALLTYPE *put_RemoteObjectId )(
            __RPC__in IContactAggregationLink * This,
                       __RPC__in const CONTACT_AGGREGATION_BLOB *pRemoteObjectId);
                        HRESULT ( STDMETHODCALLTYPE *get_ServerPerson )(
            __RPC__in IContactAggregationLink * This,
                                __RPC__deref_out_opt LPWSTR *ppServerPersonId);
                        HRESULT ( STDMETHODCALLTYPE *put_ServerPerson )(
            __RPC__in IContactAggregationLink * This,
                       __RPC__in LPCWSTR pServerPersonId);
                        HRESULT ( STDMETHODCALLTYPE *get_ServerPersonBaseline )(
            __RPC__in IContactAggregationLink * This,
                                __RPC__deref_out_opt LPWSTR *ppServerPersonId);
                        HRESULT ( STDMETHODCALLTYPE *put_ServerPersonBaseline )(
            __RPC__in IContactAggregationLink * This,
                       __RPC__in LPCWSTR pServerPersonId);
                        HRESULT ( STDMETHODCALLTYPE *get_SyncIdentityHash )(
            __RPC__in IContactAggregationLink * This,
                                __RPC__deref_out_opt CONTACT_AGGREGATION_BLOB **ppSyncIdentityHash);
                        HRESULT ( STDMETHODCALLTYPE *put_SyncIdentityHash )(
            __RPC__in IContactAggregationLink * This,
                       __RPC__in const CONTACT_AGGREGATION_BLOB *pSyncIdentityHash);
        END_INTERFACE
    } IContactAggregationLinkVtbl;
    interface IContactAggregationLink
    {
        CONST_VTBL struct IContactAggregationLinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> get_AccountId(This,ppAccountId) )
    ( (This)->lpVtbl -> put_AccountId(This,pAccountId) )
    ( (This)->lpVtbl -> get_Id(This,ppItemId) )
    ( (This)->lpVtbl -> get_IsLinkResolved(This,pIsLinkResolved) )
    ( (This)->lpVtbl -> put_IsLinkResolved(This,isLinkResolved) )
    ( (This)->lpVtbl -> get_NetworkSourceIdString(This,ppNetworkSourceId) )
    ( (This)->lpVtbl -> put_NetworkSourceIdString(This,pNetworkSourceId) )
    ( (This)->lpVtbl -> get_RemoteObjectId(This,ppRemoteObjectId) )
    ( (This)->lpVtbl -> put_RemoteObjectId(This,pRemoteObjectId) )
    ( (This)->lpVtbl -> get_ServerPerson(This,ppServerPersonId) )
    ( (This)->lpVtbl -> put_ServerPerson(This,pServerPersonId) )
    ( (This)->lpVtbl -> get_ServerPersonBaseline(This,ppServerPersonId) )
    ( (This)->lpVtbl -> put_ServerPersonBaseline(This,pServerPersonId) )
    ( (This)->lpVtbl -> get_SyncIdentityHash(This,ppSyncIdentityHash) )
    ( (This)->lpVtbl -> put_SyncIdentityHash(This,pSyncIdentityHash) )
#pragma deprecated(IContactAggregationLinkCollection)
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IContactAggregationLinkCollection;
    typedef struct IContactAggregationLinkCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContactAggregationLinkCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContactAggregationLinkCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContactAggregationLinkCollection * This);
        HRESULT ( STDMETHODCALLTYPE *FindFirst )(
            __RPC__in IContactAggregationLinkCollection * This,
                                __RPC__deref_out_opt IContactAggregationLink **ppServerContactLink);
        HRESULT ( STDMETHODCALLTYPE *FindFirstByRemoteId )(
            __RPC__in IContactAggregationLinkCollection * This,
                       __RPC__in LPCWSTR pSourceType,
                       __RPC__in LPCWSTR pAccountId,
                       __RPC__in const CONTACT_AGGREGATION_BLOB *pRemoteId,
                                __RPC__deref_out_opt IContactAggregationLink **ppServerContactLink);
        HRESULT ( STDMETHODCALLTYPE *FindNext )(
            __RPC__in IContactAggregationLinkCollection * This,
                                __RPC__deref_out_opt IContactAggregationLink **ppServerContactLink);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IContactAggregationLinkCollection * This,
                                __RPC__out UINT *pCount);
        END_INTERFACE
    } IContactAggregationLinkCollectionVtbl;
    interface IContactAggregationLinkCollection
    {
        CONST_VTBL struct IContactAggregationLinkCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindFirst(This,ppServerContactLink) )
    ( (This)->lpVtbl -> FindFirstByRemoteId(This,pSourceType,pAccountId,pRemoteId,ppServerContactLink) )
    ( (This)->lpVtbl -> FindNext(This,ppServerContactLink) )
    ( (This)->lpVtbl -> get_Count(This,pCount) )
#pragma deprecated(IContactAggregationServerPerson)
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IContactAggregationServerPerson;
    typedef struct IContactAggregationServerPersonVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContactAggregationServerPerson * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContactAggregationServerPerson * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContactAggregationServerPerson * This);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IContactAggregationServerPerson * This);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IContactAggregationServerPerson * This);
                        HRESULT ( STDMETHODCALLTYPE *get_AggregateId )(
            __RPC__in IContactAggregationServerPerson * This,
                                __RPC__deref_out_opt LPWSTR *ppAggregateId);
                        HRESULT ( STDMETHODCALLTYPE *put_AggregateId )(
            __RPC__in IContactAggregationServerPerson * This,
                       __RPC__in LPCWSTR pAggregateId);
                        HRESULT ( STDMETHODCALLTYPE *get_AntiLink )(
            __RPC__in IContactAggregationServerPerson * This,
                                __RPC__deref_out_opt LPWSTR *ppAntiLink);
                        HRESULT ( STDMETHODCALLTYPE *put_AntiLink )(
            __RPC__in IContactAggregationServerPerson * This,
                       __RPC__in LPCWSTR pAntiLink);
                        HRESULT ( STDMETHODCALLTYPE *get_AntiLinkBaseline )(
            __RPC__in IContactAggregationServerPerson * This,
                                __RPC__deref_out_opt LPWSTR *ppAntiLink);
                        HRESULT ( STDMETHODCALLTYPE *put_AntiLinkBaseline )(
            __RPC__in IContactAggregationServerPerson * This,
                       __RPC__in LPCWSTR pAntiLink);
                        HRESULT ( STDMETHODCALLTYPE *get_FavoriteOrder )(
            __RPC__in IContactAggregationServerPerson * This,
                                __RPC__out ULONG *pFavoriteOrder);
                        HRESULT ( STDMETHODCALLTYPE *put_FavoriteOrder )(
            __RPC__in IContactAggregationServerPerson * This,
                       ULONG favoriteOrder);
                        HRESULT ( STDMETHODCALLTYPE *get_FavoriteOrderBaseline )(
            __RPC__in IContactAggregationServerPerson * This,
                                __RPC__out ULONG *pFavoriteOrder);
                        HRESULT ( STDMETHODCALLTYPE *put_FavoriteOrderBaseline )(
            __RPC__in IContactAggregationServerPerson * This,
                       ULONG favoriteOrder);
                        HRESULT ( STDMETHODCALLTYPE *get_Groups )(
            __RPC__in IContactAggregationServerPerson * This,
                                __RPC__deref_out_opt CONTACT_AGGREGATION_BLOB **pGroups);
                        HRESULT ( STDMETHODCALLTYPE *put_Groups )(
            __RPC__in IContactAggregationServerPerson * This,
                       __RPC__in const CONTACT_AGGREGATION_BLOB *pGroups);
                        HRESULT ( STDMETHODCALLTYPE *get_GroupsBaseline )(
            __RPC__in IContactAggregationServerPerson * This,
                                __RPC__deref_out_opt CONTACT_AGGREGATION_BLOB **ppGroups);
                        HRESULT ( STDMETHODCALLTYPE *put_GroupsBaseline )(
            __RPC__in IContactAggregationServerPerson * This,
                       __RPC__in const CONTACT_AGGREGATION_BLOB *pGroups);
                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IContactAggregationServerPerson * This,
                                __RPC__deref_out_opt LPWSTR *ppId);
                        HRESULT ( STDMETHODCALLTYPE *get_IsTombstone )(
            __RPC__in IContactAggregationServerPerson * This,
                                __RPC__out BOOL *pIsTombstone);
                        HRESULT ( STDMETHODCALLTYPE *put_IsTombstone )(
            __RPC__in IContactAggregationServerPerson * This,
                       BOOL isTombstone);
                        HRESULT ( STDMETHODCALLTYPE *get_LinkedAggregateId )(
            __RPC__in IContactAggregationServerPerson * This,
                                __RPC__deref_out_opt LPWSTR *ppLinkedAggregateId);
                        HRESULT ( STDMETHODCALLTYPE *put_LinkedAggregateId )(
            __RPC__in IContactAggregationServerPerson * This,
                       __RPC__in LPCWSTR pLinkedAggregateId);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
            __RPC__in IContactAggregationServerPerson * This,
                                __RPC__deref_out_opt LPWSTR *ppObjectId);
                        HRESULT ( STDMETHODCALLTYPE *put_ObjectId )(
            __RPC__in IContactAggregationServerPerson * This,
                       __RPC__in LPCWSTR pObjectId);
        END_INTERFACE
    } IContactAggregationServerPersonVtbl;
    interface IContactAggregationServerPerson
    {
        CONST_VTBL struct IContactAggregationServerPersonVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> get_AggregateId(This,ppAggregateId) )
    ( (This)->lpVtbl -> put_AggregateId(This,pAggregateId) )
    ( (This)->lpVtbl -> get_AntiLink(This,ppAntiLink) )
    ( (This)->lpVtbl -> put_AntiLink(This,pAntiLink) )
    ( (This)->lpVtbl -> get_AntiLinkBaseline(This,ppAntiLink) )
    ( (This)->lpVtbl -> put_AntiLinkBaseline(This,pAntiLink) )
    ( (This)->lpVtbl -> get_FavoriteOrder(This,pFavoriteOrder) )
    ( (This)->lpVtbl -> put_FavoriteOrder(This,favoriteOrder) )
    ( (This)->lpVtbl -> get_FavoriteOrderBaseline(This,pFavoriteOrder) )
    ( (This)->lpVtbl -> put_FavoriteOrderBaseline(This,favoriteOrder) )
    ( (This)->lpVtbl -> get_Groups(This,pGroups) )
    ( (This)->lpVtbl -> put_Groups(This,pGroups) )
    ( (This)->lpVtbl -> get_GroupsBaseline(This,ppGroups) )
    ( (This)->lpVtbl -> put_GroupsBaseline(This,pGroups) )
    ( (This)->lpVtbl -> get_Id(This,ppId) )
    ( (This)->lpVtbl -> get_IsTombstone(This,pIsTombstone) )
    ( (This)->lpVtbl -> put_IsTombstone(This,isTombstone) )
    ( (This)->lpVtbl -> get_LinkedAggregateId(This,ppLinkedAggregateId) )
    ( (This)->lpVtbl -> put_LinkedAggregateId(This,pLinkedAggregateId) )
    ( (This)->lpVtbl -> get_ObjectId(This,ppObjectId) )
    ( (This)->lpVtbl -> put_ObjectId(This,pObjectId) )
#pragma deprecated(IContactAggregationServerPersonCollection)
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_IContactAggregationServerPersonCollection;
    typedef struct IContactAggregationServerPersonCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContactAggregationServerPersonCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContactAggregationServerPersonCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContactAggregationServerPersonCollection * This);
        HRESULT ( STDMETHODCALLTYPE *FindFirst )(
            __RPC__in IContactAggregationServerPersonCollection * This,
                                __RPC__deref_out_opt IContactAggregationServerPerson **ppServerPerson);
        HRESULT ( STDMETHODCALLTYPE *FindFirstByServerId )(
            __RPC__in IContactAggregationServerPersonCollection * This,
                       __RPC__in LPCWSTR pServerId,
                                __RPC__deref_out_opt IContactAggregationServerPerson **ppServerPerson);
        HRESULT ( STDMETHODCALLTYPE *FindFirstByAggregateId )(
            __RPC__in IContactAggregationServerPersonCollection * This,
                       __RPC__in LPCWSTR pAggregateId,
                                __RPC__deref_out_opt IContactAggregationServerPerson **ppServerPerson);
        HRESULT ( STDMETHODCALLTYPE *FindFirstByLinkedAggregateId )(
            __RPC__in IContactAggregationServerPersonCollection * This,
                       __RPC__in LPCWSTR pAggregateId,
                                __RPC__deref_out_opt IContactAggregationServerPerson **ppServerPerson);
        HRESULT ( STDMETHODCALLTYPE *FindNext )(
            __RPC__in IContactAggregationServerPersonCollection * This,
                                __RPC__deref_out_opt IContactAggregationServerPerson **ppServerPerson);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IContactAggregationServerPersonCollection * This,
                                __RPC__out UINT *pCount);
        END_INTERFACE
    } IContactAggregationServerPersonCollectionVtbl;
    interface IContactAggregationServerPersonCollection
    {
        CONST_VTBL struct IContactAggregationServerPersonCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindFirst(This,ppServerPerson) )
    ( (This)->lpVtbl -> FindFirstByServerId(This,pServerId,ppServerPerson) )
    ( (This)->lpVtbl -> FindFirstByAggregateId(This,pAggregateId,ppServerPerson) )
    ( (This)->lpVtbl -> FindFirstByLinkedAggregateId(This,pAggregateId,ppServerPerson) )
    ( (This)->lpVtbl -> FindNext(This,ppServerPerson) )
    ( (This)->lpVtbl -> get_Count(This,pCount) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contactaggregation_0000_0011_v0_0_s_ifspec;
}
