#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAccessControl IAccessControl;
typedef interface IAuditControl IAuditControl;
#include "unknwn.h"
#include "accctrl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef PACTRL_ACCESSW PACTRL_ACCESSW_ALLOCATE_ALL_NODES;
typedef PACTRL_AUDITW PACTRL_AUDITW_ALLOCATE_ALL_NODES;
extern RPC_IF_HANDLE __MIDL_itf_iaccess_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iaccess_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAccessControl;
    typedef struct IAccessControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccessControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccessControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccessControl * This);
        HRESULT ( STDMETHODCALLTYPE *GrantAccessRights )(
            __RPC__in IAccessControl * This,
                       __RPC__in PACTRL_ACCESSW pAccessList);
        HRESULT ( STDMETHODCALLTYPE *SetAccessRights )(
            __RPC__in IAccessControl * This,
                       __RPC__in PACTRL_ACCESSW pAccessList);
        HRESULT ( STDMETHODCALLTYPE *SetOwner )(
            __RPC__in IAccessControl * This,
                       __RPC__in PTRUSTEEW pOwner,
                       __RPC__in PTRUSTEEW pGroup);
        HRESULT ( STDMETHODCALLTYPE *RevokeAccessRights )(
            __RPC__in IAccessControl * This,
                       __RPC__in LPWSTR lpProperty,
                       ULONG cTrustees,
                                __RPC__in_ecount_full(cTrustees) TRUSTEEW prgTrustees[ ]);
        HRESULT ( STDMETHODCALLTYPE *GetAllAccessRights )(
            __RPC__in IAccessControl * This,
                       __RPC__in LPWSTR lpProperty,
                        __RPC__deref_out_opt PACTRL_ACCESSW_ALLOCATE_ALL_NODES *ppAccessList,
                        __RPC__deref_out_opt PTRUSTEEW *ppOwner,
                        __RPC__deref_out_opt PTRUSTEEW *ppGroup);
        HRESULT ( STDMETHODCALLTYPE *IsAccessAllowed )(
            __RPC__in IAccessControl * This,
                       __RPC__in PTRUSTEEW pTrustee,
                       __RPC__in LPWSTR lpProperty,
                       ACCESS_RIGHTS AccessRights,
                        __RPC__out BOOL *pfAccessAllowed);
        END_INTERFACE
    } IAccessControlVtbl;
    interface IAccessControl
    {
        CONST_VTBL struct IAccessControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GrantAccessRights(This,pAccessList) )
    ( (This)->lpVtbl -> SetAccessRights(This,pAccessList) )
    ( (This)->lpVtbl -> SetOwner(This,pOwner,pGroup) )
    ( (This)->lpVtbl -> RevokeAccessRights(This,lpProperty,cTrustees,prgTrustees) )
    ( (This)->lpVtbl -> GetAllAccessRights(This,lpProperty,ppAccessList,ppOwner,ppGroup) )
    ( (This)->lpVtbl -> IsAccessAllowed(This,pTrustee,lpProperty,AccessRights,pfAccessAllowed) )
extern RPC_IF_HANDLE __MIDL_itf_iaccess_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iaccess_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IAuditControl;
    typedef struct IAuditControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAuditControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAuditControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAuditControl * This);
        HRESULT ( STDMETHODCALLTYPE *GrantAuditRights )(
            __RPC__in IAuditControl * This,
                       __RPC__in PACTRL_AUDITW pAuditList);
        HRESULT ( STDMETHODCALLTYPE *SetAuditRights )(
            __RPC__in IAuditControl * This,
                       __RPC__in PACTRL_AUDITW pAuditList);
        HRESULT ( STDMETHODCALLTYPE *RevokeAuditRights )(
            __RPC__in IAuditControl * This,
                       __RPC__in LPWSTR lpProperty,
                       ULONG cTrustees,
                                __RPC__in_ecount_full(cTrustees) TRUSTEEW prgTrustees[ ]);
        HRESULT ( STDMETHODCALLTYPE *GetAllAuditRights )(
            __RPC__in IAuditControl * This,
                       __RPC__in LPWSTR lpProperty,
                        __RPC__deref_out_opt PACTRL_AUDITW *ppAuditList);
        HRESULT ( STDMETHODCALLTYPE *IsAccessAudited )(
            __RPC__in IAuditControl * This,
                       __RPC__in PTRUSTEEW pTrustee,
                       ACCESS_RIGHTS AuditRights,
                        __RPC__out BOOL *pfAccessAudited);
        END_INTERFACE
    } IAuditControlVtbl;
    interface IAuditControl
    {
        CONST_VTBL struct IAuditControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GrantAuditRights(This,pAuditList) )
    ( (This)->lpVtbl -> SetAuditRights(This,pAuditList) )
    ( (This)->lpVtbl -> RevokeAuditRights(This,lpProperty,cTrustees,prgTrustees) )
    ( (This)->lpVtbl -> GetAllAuditRights(This,lpProperty,ppAuditList) )
    ( (This)->lpVtbl -> IsAccessAudited(This,pTrustee,AuditRights,pfAccessAudited) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_iaccess_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iaccess_0000_0002_v0_0_s_ifspec;
}
