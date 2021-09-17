#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPropertyStorage IPropertyStorage;
typedef interface IPropertySetStorage IPropertySetStorage;
typedef interface IEnumSTATPROPSTG IEnumSTATPROPSTG;
typedef interface IEnumSTATPROPSETSTG IEnumSTATPROPSETSTG;
#include "objidl.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct tagVersionedStream
    {
    GUID guidVersion;
    IStream *pStream;
    } VERSIONEDSTREAM;
typedef struct tagVersionedStream *LPVERSIONEDSTREAM;
typedef struct tag_inner_PROPVARIANT PROPVARIANT;
typedef struct tagCAC
    {
    ULONG cElems;
                    CHAR *pElems;
    } CAC;
typedef struct tagCAUB
    {
    ULONG cElems;
                    UCHAR *pElems;
    } CAUB;
typedef struct tagCAI
    {
    ULONG cElems;
                    SHORT *pElems;
    } CAI;
typedef struct tagCAUI
    {
    ULONG cElems;
                    USHORT *pElems;
    } CAUI;
typedef struct tagCAL
    {
    ULONG cElems;
                    LONG *pElems;
    } CAL;
typedef struct tagCAUL
    {
    ULONG cElems;
                    ULONG *pElems;
    } CAUL;
typedef struct tagCAFLT
    {
    ULONG cElems;
                    FLOAT *pElems;
    } CAFLT;
typedef struct tagCADBL
    {
    ULONG cElems;
                    DOUBLE *pElems;
    } CADBL;
typedef struct tagCACY
    {
    ULONG cElems;
                    CY *pElems;
    } CACY;
typedef struct tagCADATE
    {
    ULONG cElems;
                    DATE *pElems;
    } CADATE;
typedef struct tagCABSTR
    {
    ULONG cElems;
                    BSTR *pElems;
    } CABSTR;
typedef struct tagCABSTRBLOB
    {
    ULONG cElems;
                    BSTRBLOB *pElems;
    } CABSTRBLOB;
typedef struct tagCABOOL
    {
    ULONG cElems;
                    VARIANT_BOOL *pElems;
    } CABOOL;
typedef struct tagCASCODE
    {
    ULONG cElems;
                    SCODE *pElems;
    } CASCODE;
typedef struct tagCAPROPVARIANT
    {
    ULONG cElems;
                    PROPVARIANT *pElems;
    } CAPROPVARIANT;
typedef struct tagCAH
    {
    ULONG cElems;
                    LARGE_INTEGER *pElems;
    } CAH;
typedef struct tagCAUH
    {
    ULONG cElems;
                    ULARGE_INTEGER *pElems;
    } CAUH;
typedef struct tagCALPSTR
    {
    ULONG cElems;
                    LPSTR *pElems;
    } CALPSTR;
typedef struct tagCALPWSTR
    {
    ULONG cElems;
                    LPWSTR *pElems;
    } CALPWSTR;
typedef struct tagCAFILETIME
    {
    ULONG cElems;
                    FILETIME *pElems;
    } CAFILETIME;
typedef struct tagCACLIPDATA
    {
    ULONG cElems;
                    CLIPDATA *pElems;
    } CACLIPDATA;
typedef struct tagCACLSID
    {
    ULONG cElems;
                    CLSID *pElems;
    } CACLSID;
typedef BYTE PROPVAR_PAD1;
typedef BYTE PROPVAR_PAD2;
typedef ULONG PROPVAR_PAD3;
struct tagPROPVARIANT;
typedef struct tag_inner_PROPVARIANT *LPPROPVARIANT;
typedef const PROPVARIANT *REFPROPVARIANT;
typedef struct tagPROPSPEC
    {
    ULONG ulKind;
                                          union
        {
                       PROPID propid;
                       LPOLESTR lpwstr;
        } DUMMYUNIONNAME;
    } PROPSPEC;
typedef struct tagSTATPROPSTG
    {
    LPOLESTR lpwstrName;
    PROPID propid;
    VARTYPE vt;
    } STATPROPSTG;
typedef struct tagSTATPROPSETSTG
    {
    FMTID fmtid;
    CLSID clsid;
    DWORD grfFlags;
    FILETIME mtime;
    FILETIME ctime;
    FILETIME atime;
    DWORD dwOSVersion;
    } STATPROPSETSTG;
extern RPC_IF_HANDLE __MIDL_itf_propidlbase_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propidlbase_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IPropertyStorage;
    typedef struct IPropertyStorageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyStorage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyStorage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyStorage * This);
        HRESULT ( STDMETHODCALLTYPE *ReadMultiple )(
            __RPC__in IPropertyStorage * This,
                       ULONG cpspec,
                                __RPC__in_ecount_full(cpspec) const PROPSPEC rgpspec[ ],
                                 __RPC__out_ecount_full(cpspec) PROPVARIANT rgpropvar[ ]);
        HRESULT ( STDMETHODCALLTYPE *WriteMultiple )(
            __RPC__in IPropertyStorage * This,
                       ULONG cpspec,
                                __RPC__in_ecount_full(cpspec) const PROPSPEC rgpspec[ ],
                                __RPC__in_ecount_full(cpspec) const PROPVARIANT rgpropvar[ ],
                       PROPID propidNameFirst);
        HRESULT ( STDMETHODCALLTYPE *DeleteMultiple )(
            __RPC__in IPropertyStorage * This,
                       ULONG cpspec,
                                __RPC__in_ecount_full(cpspec) const PROPSPEC rgpspec[ ]);
        HRESULT ( STDMETHODCALLTYPE *ReadPropertyNames )(
            __RPC__in IPropertyStorage * This,
                       ULONG cpropid,
                                __RPC__in_ecount_full(cpropid) const PROPID rgpropid[ ],
                                 __RPC__out_ecount_full(cpropid) LPOLESTR rglpwstrName[ ]);
        HRESULT ( STDMETHODCALLTYPE *WritePropertyNames )(
            __RPC__in IPropertyStorage * This,
                       ULONG cpropid,
                                __RPC__in_ecount_full(cpropid) const PROPID rgpropid[ ],
                                __RPC__in_ecount_full(cpropid) const LPOLESTR rglpwstrName[ ]);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyNames )(
            __RPC__in IPropertyStorage * This,
                       ULONG cpropid,
                                __RPC__in_ecount_full(cpropid) const PROPID rgpropid[ ]);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IPropertyStorage * This,
                       DWORD grfCommitFlags);
        HRESULT ( STDMETHODCALLTYPE *Revert )(
            __RPC__in IPropertyStorage * This);
        HRESULT ( STDMETHODCALLTYPE *Enum )(
            __RPC__in IPropertyStorage * This,
                        __RPC__deref_out_opt IEnumSTATPROPSTG **ppenum);
        HRESULT ( STDMETHODCALLTYPE *SetTimes )(
            __RPC__in IPropertyStorage * This,
                       __RPC__in const FILETIME *pctime,
                       __RPC__in const FILETIME *patime,
                       __RPC__in const FILETIME *pmtime);
        HRESULT ( STDMETHODCALLTYPE *SetClass )(
            __RPC__in IPropertyStorage * This,
                       __RPC__in REFCLSID clsid);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            __RPC__in IPropertyStorage * This,
                        __RPC__out STATPROPSETSTG *pstatpsstg);
        END_INTERFACE
    } IPropertyStorageVtbl;
    interface IPropertyStorage
    {
        CONST_VTBL struct IPropertyStorageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReadMultiple(This,cpspec,rgpspec,rgpropvar) )
    ( (This)->lpVtbl -> WriteMultiple(This,cpspec,rgpspec,rgpropvar,propidNameFirst) )
    ( (This)->lpVtbl -> DeleteMultiple(This,cpspec,rgpspec) )
    ( (This)->lpVtbl -> ReadPropertyNames(This,cpropid,rgpropid,rglpwstrName) )
    ( (This)->lpVtbl -> WritePropertyNames(This,cpropid,rgpropid,rglpwstrName) )
    ( (This)->lpVtbl -> DeletePropertyNames(This,cpropid,rgpropid) )
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
    ( (This)->lpVtbl -> Revert(This) )
    ( (This)->lpVtbl -> Enum(This,ppenum) )
    ( (This)->lpVtbl -> SetTimes(This,pctime,patime,pmtime) )
    ( (This)->lpVtbl -> SetClass(This,clsid) )
    ( (This)->lpVtbl -> Stat(This,pstatpsstg) )
typedef __RPC_unique_pointer IPropertySetStorage *LPPROPERTYSETSTORAGE;
EXTERN_C const IID IID_IPropertySetStorage;
    typedef struct IPropertySetStorageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertySetStorage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertySetStorage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertySetStorage * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IPropertySetStorage * This,
                       __RPC__in REFFMTID rfmtid,
                               __RPC__in_opt const CLSID *pclsid,
                       DWORD grfFlags,
                       DWORD grfMode,
                        __RPC__deref_out_opt IPropertyStorage **ppprstg);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IPropertySetStorage * This,
                       __RPC__in REFFMTID rfmtid,
                       DWORD grfMode,
                        __RPC__deref_out_opt IPropertyStorage **ppprstg);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IPropertySetStorage * This,
                       __RPC__in REFFMTID rfmtid);
        HRESULT ( STDMETHODCALLTYPE *Enum )(
            __RPC__in IPropertySetStorage * This,
                        __RPC__deref_out_opt IEnumSTATPROPSETSTG **ppenum);
        END_INTERFACE
    } IPropertySetStorageVtbl;
    interface IPropertySetStorage
    {
        CONST_VTBL struct IPropertySetStorageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,rfmtid,pclsid,grfFlags,grfMode,ppprstg) )
    ( (This)->lpVtbl -> Open(This,rfmtid,grfMode,ppprstg) )
    ( (This)->lpVtbl -> Delete(This,rfmtid) )
    ( (This)->lpVtbl -> Enum(This,ppenum) )
typedef __RPC_unique_pointer IEnumSTATPROPSTG *LPENUMSTATPROPSTG;
EXTERN_C const IID IID_IEnumSTATPROPSTG;
    typedef struct IEnumSTATPROPSTGVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumSTATPROPSTG * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumSTATPROPSTG * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumSTATPROPSTG * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumSTATPROPSTG * This,
                       ULONG celt,
            _Out_writes_to_(celt, *pceltFetched) STATPROPSTG *rgelt,
            _Out_opt_ _Deref_out_range_(0, celt) ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumSTATPROPSTG * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumSTATPROPSTG * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumSTATPROPSTG * This,
                        __RPC__deref_out_opt IEnumSTATPROPSTG **ppenum);
        END_INTERFACE
    } IEnumSTATPROPSTGVtbl;
    interface IEnumSTATPROPSTG
    {
        CONST_VTBL struct IEnumSTATPROPSTGVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
                HRESULT STDMETHODCALLTYPE IEnumSTATPROPSTG_RemoteNext_Proxy(
    __RPC__in IEnumSTATPROPSTG * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) STATPROPSTG *rgelt,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumSTATPROPSTG_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef __RPC_unique_pointer IEnumSTATPROPSETSTG *LPENUMSTATPROPSETSTG;
EXTERN_C const IID IID_IEnumSTATPROPSETSTG;
    typedef struct IEnumSTATPROPSETSTGVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumSTATPROPSETSTG * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumSTATPROPSETSTG * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumSTATPROPSETSTG * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumSTATPROPSETSTG * This,
                       ULONG celt,
            _Out_writes_to_(celt, *pceltFetched) STATPROPSETSTG *rgelt,
            _Out_opt_ _Deref_out_range_(0, celt) ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumSTATPROPSETSTG * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumSTATPROPSETSTG * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumSTATPROPSETSTG * This,
                        __RPC__deref_out_opt IEnumSTATPROPSETSTG **ppenum);
        END_INTERFACE
    } IEnumSTATPROPSETSTGVtbl;
    interface IEnumSTATPROPSETSTG
    {
        CONST_VTBL struct IEnumSTATPROPSETSTGVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
                HRESULT STDMETHODCALLTYPE IEnumSTATPROPSETSTG_RemoteNext_Proxy(
    __RPC__in IEnumSTATPROPSETSTG * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) STATPROPSETSTG *rgelt,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumSTATPROPSETSTG_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef __RPC_unique_pointer IPropertyStorage *LPPROPERTYSTORAGE;
#endif
#pragma endregion
#pragma warning(default:4201)
#pragma warning(default:4237)
extern RPC_IF_HANDLE __MIDL_itf_propidlbase_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propidlbase_0000_0004_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
              HRESULT STDMETHODCALLTYPE IEnumSTATPROPSTG_Next_Proxy(
    IEnumSTATPROPSTG * This,
               ULONG celt,
    _Out_writes_to_(celt, *pceltFetched) STATPROPSTG *rgelt,
    _Out_opt_ _Deref_out_range_(0, celt) ULONG *pceltFetched);
                HRESULT STDMETHODCALLTYPE IEnumSTATPROPSTG_Next_Stub(
    __RPC__in IEnumSTATPROPSTG * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) STATPROPSTG *rgelt,
                __RPC__out ULONG *pceltFetched);
              HRESULT STDMETHODCALLTYPE IEnumSTATPROPSETSTG_Next_Proxy(
    IEnumSTATPROPSETSTG * This,
               ULONG celt,
    _Out_writes_to_(celt, *pceltFetched) STATPROPSETSTG *rgelt,
    _Out_opt_ _Deref_out_range_(0, celt) ULONG *pceltFetched);
                HRESULT STDMETHODCALLTYPE IEnumSTATPROPSETSTG_Next_Stub(
    __RPC__in IEnumSTATPROPSETSTG * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) STATPROPSETSTG *rgelt,
                __RPC__out ULONG *pceltFetched);
}
