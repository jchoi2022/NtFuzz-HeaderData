#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IScriptNode IScriptNode;
typedef interface IScriptEntry IScriptEntry;
typedef interface IScriptScriptlet IScriptScriptlet;
typedef interface IActiveScriptAuthor IActiveScriptAuthor;
typedef interface IActiveScriptAuthorProcedure IActiveScriptAuthorProcedure;
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
DEFINE_GUID(CATID_ActiveScriptAuthor, 0xaee2a92, 0xbcbb, 0x11d0, 0x8c, 0x72, 0x0, 0xc0, 0x4f, 0xc2, 0xb0, 0x85);
DEFINE_GUID(IID_IActiveScriptAuthor, 0x9c109da0, 0x7006, 0x11d1, 0xb3, 0x6c, 0x00, 0xa0, 0xc9, 0x11, 0xe8, 0xb2);
DEFINE_GUID(IID_IScriptNode, 0xaee2a94, 0xbcbb, 0x11d0, 0x8c, 0x72, 0x0, 0xc0, 0x4f, 0xc2, 0xb0, 0x85);
DEFINE_GUID(IID_IScriptEntry, 0xaee2a95, 0xbcbb, 0x11d0, 0x8c, 0x72, 0x0, 0xc0, 0x4f, 0xc2, 0xb0, 0x85);
DEFINE_GUID(IID_IScriptScriptlet, 0xaee2a96, 0xbcbb, 0x11d0, 0x8c, 0x72, 0x0, 0xc0, 0x4f, 0xc2, 0xb0, 0x85);
DEFINE_GUID(IID_IActiveScriptAuthorProcedure, 0x7e2d4b70, 0xbd9a, 0x11d0, 0x93, 0x36, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);
const DWORD fasaPreferInternalHandler = 0x0001;
const DWORD fasaSupportInternalHandler = 0x0002;
const DWORD fasaCaseSensitive = 0x0004;
const DWORD SCRIPT_CMPL_NOLIST = 0x0000;
const DWORD SCRIPT_CMPL_MEMBERLIST = 0x0001;
const DWORD SCRIPT_CMPL_ENUMLIST = 0x0002;
const DWORD SCRIPT_CMPL_PARAMTIP = 0x0004;
const DWORD SCRIPT_CMPL_GLOBALLIST = 0x0008;
const DWORD SCRIPT_CMPL_ENUM_TRIGGER = 0x0001;
const DWORD SCRIPT_CMPL_MEMBER_TRIGGER = 0x0002;
const DWORD SCRIPT_CMPL_PARAM_TRIGGER = 0x0003;
const DWORD SCRIPT_CMPL_COMMIT = 0x0004;
const DWORD GETATTRTYPE_NORMAL = 0x0000;
const DWORD GETATTRTYPE_DEPSCAN = 0x0001;
const DWORD GETATTRFLAG_THIS = 0x0100;
const DWORD GETATTRFLAG_HUMANTEXT = 0x8000;
const DWORD SOURCETEXT_ATTR_HUMANTEXT = 0x8000;
const DWORD SOURCETEXT_ATTR_IDENTIFIER = 0x0100;
const DWORD SOURCETEXT_ATTR_MEMBERLOOKUP = 0x0200;
const DWORD SOURCETEXT_ATTR_THIS = 0x0400;
typedef WORD SOURCE_TEXT_ATTR;
extern RPC_IF_HANDLE __MIDL_itf_activaut_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activaut_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IScriptNode;
    typedef struct IScriptNodeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IScriptNode * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IScriptNode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IScriptNode * This);
        HRESULT ( STDMETHODCALLTYPE *Alive )(
            __RPC__in IScriptNode * This);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IScriptNode * This);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            __RPC__in IScriptNode * This,
                        __RPC__deref_out_opt IScriptNode **ppsnParent);
        HRESULT ( STDMETHODCALLTYPE *GetIndexInParent )(
            __RPC__in IScriptNode * This,
                        __RPC__out ULONG *pisn);
        HRESULT ( STDMETHODCALLTYPE *GetCookie )(
            __RPC__in IScriptNode * This,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfChildren )(
            __RPC__in IScriptNode * This,
                        __RPC__out ULONG *pcsn);
        HRESULT ( STDMETHODCALLTYPE *GetChild )(
            __RPC__in IScriptNode * This,
                       ULONG isn,
                        __RPC__deref_out_opt IScriptNode **ppsn);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            __RPC__in IScriptNode * This,
                        __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *CreateChildEntry )(
            __RPC__in IScriptNode * This,
                       ULONG isn,
                       DWORD dwCookie,
                       __RPC__in LPCOLESTR pszDelimiter,
                        __RPC__deref_out_opt IScriptEntry **ppse);
        HRESULT ( STDMETHODCALLTYPE *CreateChildHandler )(
            __RPC__in IScriptNode * This,
                       __RPC__in LPCOLESTR pszDefaultName,
                                __RPC__in_ecount_full(cpszNames) LPCOLESTR *prgpszNames,
                       ULONG cpszNames,
                       __RPC__in LPCOLESTR pszEvent,
                       __RPC__in LPCOLESTR pszDelimiter,
                       __RPC__in_opt ITypeInfo *ptiSignature,
                       ULONG iMethodSignature,
                       ULONG isn,
                       DWORD dwCookie,
                        __RPC__deref_out_opt IScriptEntry **ppse);
        END_INTERFACE
    } IScriptNodeVtbl;
    interface IScriptNode
    {
        CONST_VTBL struct IScriptNodeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Alive(This) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> GetParent(This,ppsnParent) )
    ( (This)->lpVtbl -> GetIndexInParent(This,pisn) )
    ( (This)->lpVtbl -> GetCookie(This,pdwCookie) )
    ( (This)->lpVtbl -> GetNumberOfChildren(This,pcsn) )
    ( (This)->lpVtbl -> GetChild(This,isn,ppsn) )
    ( (This)->lpVtbl -> GetLanguage(This,pbstr) )
    ( (This)->lpVtbl -> CreateChildEntry(This,isn,dwCookie,pszDelimiter,ppse) )
    ( (This)->lpVtbl -> CreateChildHandler(This,pszDefaultName,prgpszNames,cpszNames,pszEvent,pszDelimiter,ptiSignature,iMethodSignature,isn,dwCookie,ppse) )
EXTERN_C const IID IID_IScriptEntry;
    typedef struct IScriptEntryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IScriptEntry * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IScriptEntry * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IScriptEntry * This);
        HRESULT ( STDMETHODCALLTYPE *Alive )(
            __RPC__in IScriptEntry * This);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IScriptEntry * This);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            __RPC__in IScriptEntry * This,
                        __RPC__deref_out_opt IScriptNode **ppsnParent);
        HRESULT ( STDMETHODCALLTYPE *GetIndexInParent )(
            __RPC__in IScriptEntry * This,
                        __RPC__out ULONG *pisn);
        HRESULT ( STDMETHODCALLTYPE *GetCookie )(
            __RPC__in IScriptEntry * This,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfChildren )(
            __RPC__in IScriptEntry * This,
                        __RPC__out ULONG *pcsn);
        HRESULT ( STDMETHODCALLTYPE *GetChild )(
            __RPC__in IScriptEntry * This,
                       ULONG isn,
                        __RPC__deref_out_opt IScriptNode **ppsn);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            __RPC__in IScriptEntry * This,
                        __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *CreateChildEntry )(
            __RPC__in IScriptEntry * This,
                       ULONG isn,
                       DWORD dwCookie,
                       __RPC__in LPCOLESTR pszDelimiter,
                        __RPC__deref_out_opt IScriptEntry **ppse);
        HRESULT ( STDMETHODCALLTYPE *CreateChildHandler )(
            __RPC__in IScriptEntry * This,
                       __RPC__in LPCOLESTR pszDefaultName,
                                __RPC__in_ecount_full(cpszNames) LPCOLESTR *prgpszNames,
                       ULONG cpszNames,
                       __RPC__in LPCOLESTR pszEvent,
                       __RPC__in LPCOLESTR pszDelimiter,
                       __RPC__in_opt ITypeInfo *ptiSignature,
                       ULONG iMethodSignature,
                       ULONG isn,
                       DWORD dwCookie,
                        __RPC__deref_out_opt IScriptEntry **ppse);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in IScriptEntry * This,
                        __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *SetText )(
            __RPC__in IScriptEntry * This,
                       __RPC__in LPCOLESTR psz);
        HRESULT ( STDMETHODCALLTYPE *GetBody )(
            __RPC__in IScriptEntry * This,
                        __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *SetBody )(
            __RPC__in IScriptEntry * This,
                       __RPC__in LPCOLESTR psz);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IScriptEntry * This,
                        __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            __RPC__in IScriptEntry * This,
                       __RPC__in LPCOLESTR psz);
        HRESULT ( STDMETHODCALLTYPE *GetItemName )(
            __RPC__in IScriptEntry * This,
                        __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *SetItemName )(
            __RPC__in IScriptEntry * This,
                       __RPC__in LPCOLESTR psz);
        HRESULT ( STDMETHODCALLTYPE *GetSignature )(
            __RPC__in IScriptEntry * This,
                        __RPC__deref_out_opt ITypeInfo **ppti,
                        __RPC__out ULONG *piMethod);
        HRESULT ( STDMETHODCALLTYPE *SetSignature )(
            __RPC__in IScriptEntry * This,
                       __RPC__in_opt ITypeInfo *pti,
                       ULONG iMethod);
        HRESULT ( STDMETHODCALLTYPE *GetRange )(
            __RPC__in IScriptEntry * This,
                        __RPC__out ULONG *pichMin,
                        __RPC__out ULONG *pcch);
        END_INTERFACE
    } IScriptEntryVtbl;
    interface IScriptEntry
    {
        CONST_VTBL struct IScriptEntryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Alive(This) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> GetParent(This,ppsnParent) )
    ( (This)->lpVtbl -> GetIndexInParent(This,pisn) )
    ( (This)->lpVtbl -> GetCookie(This,pdwCookie) )
    ( (This)->lpVtbl -> GetNumberOfChildren(This,pcsn) )
    ( (This)->lpVtbl -> GetChild(This,isn,ppsn) )
    ( (This)->lpVtbl -> GetLanguage(This,pbstr) )
    ( (This)->lpVtbl -> CreateChildEntry(This,isn,dwCookie,pszDelimiter,ppse) )
    ( (This)->lpVtbl -> CreateChildHandler(This,pszDefaultName,prgpszNames,cpszNames,pszEvent,pszDelimiter,ptiSignature,iMethodSignature,isn,dwCookie,ppse) )
    ( (This)->lpVtbl -> GetText(This,pbstr) )
    ( (This)->lpVtbl -> SetText(This,psz) )
    ( (This)->lpVtbl -> GetBody(This,pbstr) )
    ( (This)->lpVtbl -> SetBody(This,psz) )
    ( (This)->lpVtbl -> GetName(This,pbstr) )
    ( (This)->lpVtbl -> SetName(This,psz) )
    ( (This)->lpVtbl -> GetItemName(This,pbstr) )
    ( (This)->lpVtbl -> SetItemName(This,psz) )
    ( (This)->lpVtbl -> GetSignature(This,ppti,piMethod) )
    ( (This)->lpVtbl -> SetSignature(This,pti,iMethod) )
    ( (This)->lpVtbl -> GetRange(This,pichMin,pcch) )
EXTERN_C const IID IID_IScriptScriptlet;
    typedef struct IScriptScriptletVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IScriptScriptlet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IScriptScriptlet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IScriptScriptlet * This);
        HRESULT ( STDMETHODCALLTYPE *Alive )(
            __RPC__in IScriptScriptlet * This);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IScriptScriptlet * This);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            __RPC__in IScriptScriptlet * This,
                        __RPC__deref_out_opt IScriptNode **ppsnParent);
        HRESULT ( STDMETHODCALLTYPE *GetIndexInParent )(
            __RPC__in IScriptScriptlet * This,
                        __RPC__out ULONG *pisn);
        HRESULT ( STDMETHODCALLTYPE *GetCookie )(
            __RPC__in IScriptScriptlet * This,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfChildren )(
            __RPC__in IScriptScriptlet * This,
                        __RPC__out ULONG *pcsn);
        HRESULT ( STDMETHODCALLTYPE *GetChild )(
            __RPC__in IScriptScriptlet * This,
                       ULONG isn,
                        __RPC__deref_out_opt IScriptNode **ppsn);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            __RPC__in IScriptScriptlet * This,
                        __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *CreateChildEntry )(
            __RPC__in IScriptScriptlet * This,
                       ULONG isn,
                       DWORD dwCookie,
                       __RPC__in LPCOLESTR pszDelimiter,
                        __RPC__deref_out_opt IScriptEntry **ppse);
        HRESULT ( STDMETHODCALLTYPE *CreateChildHandler )(
            __RPC__in IScriptScriptlet * This,
                       __RPC__in LPCOLESTR pszDefaultName,
                                __RPC__in_ecount_full(cpszNames) LPCOLESTR *prgpszNames,
                       ULONG cpszNames,
                       __RPC__in LPCOLESTR pszEvent,
                       __RPC__in LPCOLESTR pszDelimiter,
                       __RPC__in_opt ITypeInfo *ptiSignature,
                       ULONG iMethodSignature,
                       ULONG isn,
                       DWORD dwCookie,
                        __RPC__deref_out_opt IScriptEntry **ppse);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in IScriptScriptlet * This,
                        __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *SetText )(
            __RPC__in IScriptScriptlet * This,
                       __RPC__in LPCOLESTR psz);
        HRESULT ( STDMETHODCALLTYPE *GetBody )(
            __RPC__in IScriptScriptlet * This,
                        __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *SetBody )(
            __RPC__in IScriptScriptlet * This,
                       __RPC__in LPCOLESTR psz);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IScriptScriptlet * This,
                        __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            __RPC__in IScriptScriptlet * This,
                       __RPC__in LPCOLESTR psz);
        HRESULT ( STDMETHODCALLTYPE *GetItemName )(
            __RPC__in IScriptScriptlet * This,
                        __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *SetItemName )(
            __RPC__in IScriptScriptlet * This,
                       __RPC__in LPCOLESTR psz);
        HRESULT ( STDMETHODCALLTYPE *GetSignature )(
            __RPC__in IScriptScriptlet * This,
                        __RPC__deref_out_opt ITypeInfo **ppti,
                        __RPC__out ULONG *piMethod);
        HRESULT ( STDMETHODCALLTYPE *SetSignature )(
            __RPC__in IScriptScriptlet * This,
                       __RPC__in_opt ITypeInfo *pti,
                       ULONG iMethod);
        HRESULT ( STDMETHODCALLTYPE *GetRange )(
            __RPC__in IScriptScriptlet * This,
                        __RPC__out ULONG *pichMin,
                        __RPC__out ULONG *pcch);
        HRESULT ( STDMETHODCALLTYPE *GetSubItemName )(
            __RPC__in IScriptScriptlet * This,
                        __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *SetSubItemName )(
            __RPC__in IScriptScriptlet * This,
                       __RPC__in LPCOLESTR psz);
        HRESULT ( STDMETHODCALLTYPE *GetEventName )(
            __RPC__in IScriptScriptlet * This,
                        __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *SetEventName )(
            __RPC__in IScriptScriptlet * This,
                       __RPC__in LPCOLESTR psz);
        HRESULT ( STDMETHODCALLTYPE *GetSimpleEventName )(
            __RPC__in IScriptScriptlet * This,
                        __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *SetSimpleEventName )(
            __RPC__in IScriptScriptlet * This,
                       __RPC__in LPCOLESTR psz);
        END_INTERFACE
    } IScriptScriptletVtbl;
    interface IScriptScriptlet
    {
        CONST_VTBL struct IScriptScriptletVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Alive(This) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> GetParent(This,ppsnParent) )
    ( (This)->lpVtbl -> GetIndexInParent(This,pisn) )
    ( (This)->lpVtbl -> GetCookie(This,pdwCookie) )
    ( (This)->lpVtbl -> GetNumberOfChildren(This,pcsn) )
    ( (This)->lpVtbl -> GetChild(This,isn,ppsn) )
    ( (This)->lpVtbl -> GetLanguage(This,pbstr) )
    ( (This)->lpVtbl -> CreateChildEntry(This,isn,dwCookie,pszDelimiter,ppse) )
    ( (This)->lpVtbl -> CreateChildHandler(This,pszDefaultName,prgpszNames,cpszNames,pszEvent,pszDelimiter,ptiSignature,iMethodSignature,isn,dwCookie,ppse) )
    ( (This)->lpVtbl -> GetText(This,pbstr) )
    ( (This)->lpVtbl -> SetText(This,psz) )
    ( (This)->lpVtbl -> GetBody(This,pbstr) )
    ( (This)->lpVtbl -> SetBody(This,psz) )
    ( (This)->lpVtbl -> GetName(This,pbstr) )
    ( (This)->lpVtbl -> SetName(This,psz) )
    ( (This)->lpVtbl -> GetItemName(This,pbstr) )
    ( (This)->lpVtbl -> SetItemName(This,psz) )
    ( (This)->lpVtbl -> GetSignature(This,ppti,piMethod) )
    ( (This)->lpVtbl -> SetSignature(This,pti,iMethod) )
    ( (This)->lpVtbl -> GetRange(This,pichMin,pcch) )
    ( (This)->lpVtbl -> GetSubItemName(This,pbstr) )
    ( (This)->lpVtbl -> SetSubItemName(This,psz) )
    ( (This)->lpVtbl -> GetEventName(This,pbstr) )
    ( (This)->lpVtbl -> SetEventName(This,psz) )
    ( (This)->lpVtbl -> GetSimpleEventName(This,pbstr) )
    ( (This)->lpVtbl -> SetSimpleEventName(This,psz) )
EXTERN_C const IID IID_IActiveScriptAuthor;
    typedef struct IActiveScriptAuthorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptAuthor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptAuthor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptAuthor * This);
        HRESULT ( STDMETHODCALLTYPE *AddNamedItem )(
            __RPC__in IActiveScriptAuthor * This,
                       __RPC__in LPCOLESTR pszName,
                       DWORD dwFlags,
                       __RPC__in_opt IDispatch *pdisp);
        HRESULT ( STDMETHODCALLTYPE *AddScriptlet )(
            __RPC__in IActiveScriptAuthor * This,
                       __RPC__in LPCOLESTR pszDefaultName,
                       __RPC__in LPCOLESTR pszCode,
                       __RPC__in LPCOLESTR pszItemName,
                       __RPC__in LPCOLESTR pszSubItemName,
                       __RPC__in LPCOLESTR pszEventName,
                       __RPC__in LPCOLESTR pszDelimiter,
                       DWORD dwCookie,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *ParseScriptText )(
            __RPC__in IActiveScriptAuthor * This,
                       __RPC__in LPCOLESTR pszCode,
                       __RPC__in LPCOLESTR pszItemName,
                       __RPC__in LPCOLESTR pszDelimiter,
                       DWORD dwCookie,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetScriptTextAttributes )(
            __RPC__in IActiveScriptAuthor * This,
                                __RPC__in_ecount_full(cch) LPCOLESTR pszCode,
                       ULONG cch,
                       __RPC__in LPCOLESTR pszDelimiter,
                       DWORD dwFlags,
                                     __RPC__inout_ecount_full(cch) SOURCE_TEXT_ATTR *pattr);
        HRESULT ( STDMETHODCALLTYPE *GetScriptletTextAttributes )(
            __RPC__in IActiveScriptAuthor * This,
                                __RPC__in_ecount_full(cch) LPCOLESTR pszCode,
                       ULONG cch,
                       __RPC__in LPCOLESTR pszDelimiter,
                       DWORD dwFlags,
                                     __RPC__inout_ecount_full(cch) SOURCE_TEXT_ATTR *pattr);
        HRESULT ( STDMETHODCALLTYPE *GetRoot )(
            __RPC__in IActiveScriptAuthor * This,
                        __RPC__deref_out_opt IScriptNode **ppsp);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageFlags )(
            __RPC__in IActiveScriptAuthor * This,
                        __RPC__out DWORD *pgrfasa);
        HRESULT ( STDMETHODCALLTYPE *GetEventHandler )(
            __RPC__in IActiveScriptAuthor * This,
                       __RPC__in_opt IDispatch *pdisp,
                       __RPC__in LPCOLESTR pszItem,
                       __RPC__in LPCOLESTR pszSubItem,
                       __RPC__in LPCOLESTR pszEvent,
                        __RPC__deref_out_opt IScriptEntry **ppse);
        HRESULT ( STDMETHODCALLTYPE *RemoveNamedItem )(
            __RPC__in IActiveScriptAuthor * This,
                       __RPC__in LPCOLESTR pszName);
        HRESULT ( STDMETHODCALLTYPE *AddTypeLib )(
            __RPC__in IActiveScriptAuthor * This,
                       __RPC__in REFGUID rguidTypeLib,
                       DWORD dwMajor,
                       DWORD dwMinor,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *RemoveTypeLib )(
            __RPC__in IActiveScriptAuthor * This,
                       __RPC__in REFGUID rguidTypeLib,
                       DWORD dwMajor,
                       DWORD dwMinor);
        HRESULT ( STDMETHODCALLTYPE *GetChars )(
            __RPC__in IActiveScriptAuthor * This,
                       DWORD fRequestedList,
                        __RPC__deref_out_opt BSTR *pbstrChars);
        HRESULT ( STDMETHODCALLTYPE *GetInfoFromContext )(
            __RPC__in IActiveScriptAuthor * This,
                       __RPC__in LPCOLESTR pszCode,
                       ULONG cchCode,
                       ULONG ichCurrentPosition,
                       DWORD dwListTypesRequested,
                        __RPC__out DWORD *pdwListTypesProvided,
                        __RPC__out ULONG *pichListAnchorPosition,
                        __RPC__out ULONG *pichFuncAnchorPosition,
                        __RPC__out MEMBERID *pmemid,
                        __RPC__out LONG *piCurrentParameter,
                        __RPC__deref_out_opt IUnknown **ppunk);
        HRESULT ( STDMETHODCALLTYPE *IsCommitChar )(
            __RPC__in IActiveScriptAuthor * This,
                       OLECHAR ch,
                        __RPC__out BOOL *pfcommit);
        END_INTERFACE
    } IActiveScriptAuthorVtbl;
    interface IActiveScriptAuthor
    {
        CONST_VTBL struct IActiveScriptAuthorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddNamedItem(This,pszName,dwFlags,pdisp) )
    ( (This)->lpVtbl -> AddScriptlet(This,pszDefaultName,pszCode,pszItemName,pszSubItemName,pszEventName,pszDelimiter,dwCookie,dwFlags) )
    ( (This)->lpVtbl -> ParseScriptText(This,pszCode,pszItemName,pszDelimiter,dwCookie,dwFlags) )
    ( (This)->lpVtbl -> GetScriptTextAttributes(This,pszCode,cch,pszDelimiter,dwFlags,pattr) )
    ( (This)->lpVtbl -> GetScriptletTextAttributes(This,pszCode,cch,pszDelimiter,dwFlags,pattr) )
    ( (This)->lpVtbl -> GetRoot(This,ppsp) )
    ( (This)->lpVtbl -> GetLanguageFlags(This,pgrfasa) )
    ( (This)->lpVtbl -> GetEventHandler(This,pdisp,pszItem,pszSubItem,pszEvent,ppse) )
    ( (This)->lpVtbl -> RemoveNamedItem(This,pszName) )
    ( (This)->lpVtbl -> AddTypeLib(This,rguidTypeLib,dwMajor,dwMinor,dwFlags) )
    ( (This)->lpVtbl -> RemoveTypeLib(This,rguidTypeLib,dwMajor,dwMinor) )
    ( (This)->lpVtbl -> GetChars(This,fRequestedList,pbstrChars) )
    ( (This)->lpVtbl -> GetInfoFromContext(This,pszCode,cchCode,ichCurrentPosition,dwListTypesRequested,pdwListTypesProvided,pichListAnchorPosition,pichFuncAnchorPosition,pmemid,piCurrentParameter,ppunk) )
    ( (This)->lpVtbl -> IsCommitChar(This,ch,pfcommit) )
EXTERN_C const IID IID_IActiveScriptAuthorProcedure;
    typedef struct IActiveScriptAuthorProcedureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActiveScriptAuthorProcedure * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActiveScriptAuthorProcedure * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActiveScriptAuthorProcedure * This);
        HRESULT ( STDMETHODCALLTYPE *ParseProcedureText )(
            __RPC__in IActiveScriptAuthorProcedure * This,
                       __RPC__in LPCOLESTR pszCode,
                       __RPC__in LPCOLESTR pszFormalParams,
                       __RPC__in LPCOLESTR pszProcedureName,
                       __RPC__in LPCOLESTR pszItemName,
                       __RPC__in LPCOLESTR pszDelimiter,
                       DWORD dwCookie,
                       DWORD dwFlags,
                       __RPC__in_opt IDispatch *pdispFor);
        END_INTERFACE
    } IActiveScriptAuthorProcedureVtbl;
    interface IActiveScriptAuthorProcedure
    {
        CONST_VTBL struct IActiveScriptAuthorProcedureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ParseProcedureText(This,pszCode,pszFormalParams,pszProcedureName,pszItemName,pszDelimiter,dwCookie,dwFlags,pdispFor) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_activaut_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activaut_0000_0005_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
