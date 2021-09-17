#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICreateTypeInfo ICreateTypeInfo;
typedef interface ICreateTypeInfo2 ICreateTypeInfo2;
typedef interface ICreateTypeLib ICreateTypeLib;
typedef interface ICreateTypeLib2 ICreateTypeLib2;
typedef interface IDispatch IDispatch;
typedef interface IEnumVARIANT IEnumVARIANT;
typedef interface ITypeComp ITypeComp;
typedef interface ITypeInfo ITypeInfo;
typedef interface ITypeInfo2 ITypeInfo2;
typedef interface ITypeLib ITypeLib;
typedef interface ITypeLib2 ITypeLib2;
typedef interface ITypeChangeEvents ITypeChangeEvents;
typedef interface IErrorInfo IErrorInfo;
typedef interface ICreateErrorInfo ICreateErrorInfo;
typedef interface ISupportErrorInfo ISupportErrorInfo;
typedef interface ITypeFactory ITypeFactory;
typedef interface ITypeMarshal ITypeMarshal;
typedef interface IRecordInfo IRecordInfo;
typedef interface IErrorLog IErrorLog;
typedef interface IPropertyBag IPropertyBag;
typedef interface ITypeLibRegistrationReader ITypeLibRegistrationReader;
typedef interface ITypeLibRegistration ITypeLibRegistration;
#include "objidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0000_v0_0_s_ifspec;
typedef CY CURRENCY;
typedef struct tagSAFEARRAYBOUND
    {
    ULONG cElements;
    LONG lLbound;
    } SAFEARRAYBOUND;
typedef struct tagSAFEARRAYBOUND *LPSAFEARRAYBOUND;
typedef __RPC_unique_pointer struct _wireVARIANT *wireVARIANT;
typedef __RPC_unique_pointer struct _wireBRECORD *wireBRECORD;
typedef struct _wireSAFEARR_BSTR
    {
    ULONG Size;
                         wireBSTR *aBstr;
    } SAFEARR_BSTR;
typedef struct _wireSAFEARR_UNKNOWN
    {
    ULONG Size;
                         IUnknown **apUnknown;
    } SAFEARR_UNKNOWN;
typedef struct _wireSAFEARR_DISPATCH
    {
    ULONG Size;
                         IDispatch **apDispatch;
    } SAFEARR_DISPATCH;
typedef struct _wireSAFEARR_VARIANT
    {
    ULONG Size;
                         wireVARIANT *aVariant;
    } SAFEARR_VARIANT;
typedef struct _wireSAFEARR_BRECORD
    {
    ULONG Size;
                         wireBRECORD *aRecord;
    } SAFEARR_BRECORD;
typedef struct _wireSAFEARR_HAVEIID
    {
    ULONG Size;
                         IUnknown **apUnknown;
    IID iid;
    } SAFEARR_HAVEIID;
typedef
enum tagSF_TYPE
    {
        SF_ERROR = VT_ERROR,
        SF_I1 = VT_I1,
        SF_I2 = VT_I2,
        SF_I4 = VT_I4,
        SF_I8 = VT_I8,
        SF_BSTR = VT_BSTR,
        SF_UNKNOWN = VT_UNKNOWN,
        SF_DISPATCH = VT_DISPATCH,
        SF_VARIANT = VT_VARIANT,
        SF_RECORD = VT_RECORD,
        SF_HAVEIID = ( VT_UNKNOWN | VT_RESERVED )
    } SF_TYPE;
typedef struct _wireSAFEARRAY_UNION
    {
    ULONG sfType;
                                          union __MIDL_IOleAutomationTypes_0001
        {
                       SAFEARR_BSTR BstrStr;
                       SAFEARR_UNKNOWN UnknownStr;
                       SAFEARR_DISPATCH DispatchStr;
                       SAFEARR_VARIANT VariantStr;
                       SAFEARR_BRECORD RecordStr;
                       SAFEARR_HAVEIID HaveIidStr;
                       BYTE_SIZEDARR ByteStr;
                       WORD_SIZEDARR WordStr;
                       DWORD_SIZEDARR LongStr;
                       HYPER_SIZEDARR HyperStr;
        } u;
    } SAFEARRAYUNION;
typedef __RPC_unique_pointer struct _wireSAFEARRAY
    {
    USHORT cDims;
    USHORT fFeatures;
    ULONG cbElements;
    ULONG cLocks;
    SAFEARRAYUNION uArrayStructs;
                    SAFEARRAYBOUND rgsabound[ 1 ];
    } *wireSAFEARRAY;
typedef __RPC_unique_pointer wireSAFEARRAY *wirePSAFEARRAY;
typedef struct tagSAFEARRAY
    {
    USHORT cDims;
    USHORT fFeatures;
    ULONG cbElements;
    ULONG cLocks;
    PVOID pvData;
    SAFEARRAYBOUND rgsabound[ 1 ];
    } SAFEARRAY;
typedef SAFEARRAY *LPSAFEARRAY;
typedef struct tagVARIANT VARIANT;
struct tagVARIANT
    {
    union
        {
        struct __tagVARIANT
            {
            VARTYPE vt;
            WORD wReserved1;
            WORD wReserved2;
            WORD wReserved3;
            union
                {
                LONGLONG llVal;
                LONG lVal;
                BYTE bVal;
                SHORT iVal;
                FLOAT fltVal;
                DOUBLE dblVal;
                VARIANT_BOOL boolVal;
                VARIANT_BOOL __OBSOLETE__VARIANT_BOOL;
                SCODE scode;
                CY cyVal;
                DATE date;
                BSTR bstrVal;
                IUnknown *punkVal;
                IDispatch *pdispVal;
                SAFEARRAY *parray;
                BYTE *pbVal;
                SHORT *piVal;
                LONG *plVal;
                LONGLONG *pllVal;
                FLOAT *pfltVal;
                DOUBLE *pdblVal;
                VARIANT_BOOL *pboolVal;
                VARIANT_BOOL *__OBSOLETE__VARIANT_PBOOL;
                SCODE *pscode;
                CY *pcyVal;
                DATE *pdate;
                BSTR *pbstrVal;
                IUnknown **ppunkVal;
                IDispatch **ppdispVal;
                SAFEARRAY **pparray;
                VARIANT *pvarVal;
                PVOID byref;
                CHAR cVal;
                USHORT uiVal;
                ULONG ulVal;
                ULONGLONG ullVal;
                INT intVal;
                UINT uintVal;
                DECIMAL *pdecVal;
                CHAR *pcVal;
                USHORT *puiVal;
                ULONG *pulVal;
                ULONGLONG *pullVal;
                INT *pintVal;
                UINT *puintVal;
                struct __tagBRECORD
                    {
                    PVOID pvRecord;
                    IRecordInfo *pRecInfo;
                    } __VARIANT_NAME_4;
                } __VARIANT_NAME_3;
            } __VARIANT_NAME_2;
        DECIMAL decVal;
        } __VARIANT_NAME_1;
    } ;
typedef VARIANT *LPVARIANT;
typedef VARIANT VARIANTARG;
typedef VARIANT *LPVARIANTARG;
typedef const VARIANT *REFVARIANT;
struct _wireBRECORD
    {
    ULONG fFlags;
    ULONG clSize;
    IRecordInfo *pRecInfo;
                    byte *pRecord;
    } ;
struct _wireVARIANT
    {
    DWORD clSize;
    DWORD rpcReserved;
    USHORT vt;
    USHORT wReserved1;
    USHORT wReserved2;
    USHORT wReserved3;
                                   union
        {
                       LONGLONG llVal;
                       LONG lVal;
                       BYTE bVal;
                       SHORT iVal;
                       FLOAT fltVal;
                       DOUBLE dblVal;
                       VARIANT_BOOL boolVal;
                       SCODE scode;
                       CY cyVal;
                       DATE date;
                       wireBSTR bstrVal;
                       IUnknown *punkVal;
                       IDispatch *pdispVal;
                       wirePSAFEARRAY parray;
                       wireBRECORD brecVal;
                       BYTE *pbVal;
                       SHORT *piVal;
                       LONG *plVal;
                       LONGLONG *pllVal;
                       FLOAT *pfltVal;
                       DOUBLE *pdblVal;
                       VARIANT_BOOL *pboolVal;
                       SCODE *pscode;
                       CY *pcyVal;
                       DATE *pdate;
                       wireBSTR *pbstrVal;
                       IUnknown **ppunkVal;
                       IDispatch **ppdispVal;
                       wirePSAFEARRAY *pparray;
                       wireVARIANT *pvarVal;
                       CHAR cVal;
                       USHORT uiVal;
                       ULONG ulVal;
                       ULONGLONG ullVal;
                       INT intVal;
                       UINT uintVal;
                       DECIMAL decVal;
                       DECIMAL *pdecVal;
                       CHAR *pcVal;
                       USHORT *puiVal;
                       ULONG *pulVal;
                       ULONGLONG *pullVal;
                       INT *pintVal;
                       UINT *puintVal;
        } DUMMYUNIONNAME;
    } ;
typedef LONG DISPID;
typedef DISPID MEMBERID;
typedef DWORD HREFTYPE;
typedef
enum tagTYPEKIND
    {
        TKIND_ENUM = 0,
        TKIND_RECORD = ( TKIND_ENUM + 1 ) ,
        TKIND_MODULE = ( TKIND_RECORD + 1 ) ,
        TKIND_INTERFACE = ( TKIND_MODULE + 1 ) ,
        TKIND_DISPATCH = ( TKIND_INTERFACE + 1 ) ,
        TKIND_COCLASS = ( TKIND_DISPATCH + 1 ) ,
        TKIND_ALIAS = ( TKIND_COCLASS + 1 ) ,
        TKIND_UNION = ( TKIND_ALIAS + 1 ) ,
        TKIND_MAX = ( TKIND_UNION + 1 )
    } TYPEKIND;
typedef struct tagTYPEDESC
    {
                                   union
        {
                       struct tagTYPEDESC *lptdesc;
                       struct tagARRAYDESC *lpadesc;
                       HREFTYPE hreftype;
        } DUMMYUNIONNAME;
    VARTYPE vt;
    } TYPEDESC;
typedef struct tagARRAYDESC
    {
    TYPEDESC tdescElem;
    USHORT cDims;
                    SAFEARRAYBOUND rgbounds[ 1 ];
    } ARRAYDESC;
typedef struct tagPARAMDESCEX
    {
    ULONG cBytes;
    VARIANTARG varDefaultValue;
    } PARAMDESCEX;
typedef struct tagPARAMDESCEX *LPPARAMDESCEX;
typedef struct tagPARAMDESC
    {
    LPPARAMDESCEX pparamdescex;
    USHORT wParamFlags;
    } PARAMDESC;
typedef struct tagPARAMDESC *LPPARAMDESC;
typedef struct tagIDLDESC
    {
    ULONG_PTR dwReserved;
    USHORT wIDLFlags;
    } IDLDESC;
typedef struct tagIDLDESC *LPIDLDESC;
#if 0
typedef struct tagELEMDESC
    {
    TYPEDESC tdesc;
    PARAMDESC paramdesc;
    } ELEMDESC;
#else
typedef struct tagELEMDESC {
    TYPEDESC tdesc;
    union {
        IDLDESC idldesc;
        PARAMDESC paramdesc;
    } DUMMYUNIONNAME;
} ELEMDESC, * LPELEMDESC;
#endif
typedef struct tagTYPEATTR
    {
    GUID guid;
    LCID lcid;
    DWORD dwReserved;
    MEMBERID memidConstructor;
    MEMBERID memidDestructor;
    LPOLESTR lpstrSchema;
    ULONG cbSizeInstance;
    TYPEKIND typekind;
    WORD cFuncs;
    WORD cVars;
    WORD cImplTypes;
    WORD cbSizeVft;
    WORD cbAlignment;
    WORD wTypeFlags;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    TYPEDESC tdescAlias;
    IDLDESC idldescType;
    } TYPEATTR;
typedef struct tagTYPEATTR *LPTYPEATTR;
typedef struct tagDISPPARAMS
    {
                    VARIANTARG *rgvarg;
                    DISPID *rgdispidNamedArgs;
    UINT cArgs;
    UINT cNamedArgs;
    } DISPPARAMS;
#if 0
typedef struct tagEXCEPINFO
    {
    WORD wCode;
    WORD wReserved;
    BSTR bstrSource;
    BSTR bstrDescription;
    BSTR bstrHelpFile;
    DWORD dwHelpContext;
    ULONG_PTR pvReserved;
    ULONG_PTR pfnDeferredFillIn;
    SCODE scode;
    } EXCEPINFO;
#else
typedef struct tagEXCEPINFO {
    WORD wCode;
    WORD wReserved;
    BSTR bstrSource;
    BSTR bstrDescription;
    BSTR bstrHelpFile;
    DWORD dwHelpContext;
    PVOID pvReserved;
    HRESULT (__stdcall *pfnDeferredFillIn)(struct tagEXCEPINFO *);
    SCODE scode;
} EXCEPINFO, * LPEXCEPINFO;
#endif
typedef
enum tagCALLCONV
    {
        CC_FASTCALL = 0,
        CC_CDECL = 1,
        CC_MSCPASCAL = ( CC_CDECL + 1 ) ,
        CC_PASCAL = CC_MSCPASCAL,
        CC_MACPASCAL = ( CC_PASCAL + 1 ) ,
        CC_STDCALL = ( CC_MACPASCAL + 1 ) ,
        CC_FPFASTCALL = ( CC_STDCALL + 1 ) ,
        CC_SYSCALL = ( CC_FPFASTCALL + 1 ) ,
        CC_MPWCDECL = ( CC_SYSCALL + 1 ) ,
        CC_MPWPASCAL = ( CC_MPWCDECL + 1 ) ,
        CC_MAX = ( CC_MPWPASCAL + 1 )
    } CALLCONV;
typedef
enum tagFUNCKIND
    {
        FUNC_VIRTUAL = 0,
        FUNC_PUREVIRTUAL = ( FUNC_VIRTUAL + 1 ) ,
        FUNC_NONVIRTUAL = ( FUNC_PUREVIRTUAL + 1 ) ,
        FUNC_STATIC = ( FUNC_NONVIRTUAL + 1 ) ,
        FUNC_DISPATCH = ( FUNC_STATIC + 1 )
    } FUNCKIND;
typedef
enum tagINVOKEKIND
    {
        INVOKE_FUNC = 1,
        INVOKE_PROPERTYGET = 2,
        INVOKE_PROPERTYPUT = 4,
        INVOKE_PROPERTYPUTREF = 8
    } INVOKEKIND;
typedef struct tagFUNCDESC
    {
    MEMBERID memid;
                    SCODE *lprgscode;
                    ELEMDESC *lprgelemdescParam;
    FUNCKIND funckind;
    INVOKEKIND invkind;
    CALLCONV callconv;
    SHORT cParams;
    SHORT cParamsOpt;
    SHORT oVft;
    SHORT cScodes;
    ELEMDESC elemdescFunc;
    WORD wFuncFlags;
    } FUNCDESC;
typedef struct tagFUNCDESC *LPFUNCDESC;
typedef
enum tagVARKIND
    {
        VAR_PERINSTANCE = 0,
        VAR_STATIC = ( VAR_PERINSTANCE + 1 ) ,
        VAR_CONST = ( VAR_STATIC + 1 ) ,
        VAR_DISPATCH = ( VAR_CONST + 1 )
    } VARKIND;
typedef struct tagVARDESC
    {
    MEMBERID memid;
    LPOLESTR lpstrSchema;
                                   union
        {
                       ULONG oInst;
                       VARIANT *lpvarValue;
        } DUMMYUNIONNAME;
    ELEMDESC elemdescVar;
    WORD wVarFlags;
    VARKIND varkind;
    } VARDESC;
typedef struct tagVARDESC *LPVARDESC;
typedef
enum tagTYPEFLAGS
    {
        TYPEFLAG_FAPPOBJECT = 0x1,
        TYPEFLAG_FCANCREATE = 0x2,
        TYPEFLAG_FLICENSED = 0x4,
        TYPEFLAG_FPREDECLID = 0x8,
        TYPEFLAG_FHIDDEN = 0x10,
        TYPEFLAG_FCONTROL = 0x20,
        TYPEFLAG_FDUAL = 0x40,
        TYPEFLAG_FNONEXTENSIBLE = 0x80,
        TYPEFLAG_FOLEAUTOMATION = 0x100,
        TYPEFLAG_FRESTRICTED = 0x200,
        TYPEFLAG_FAGGREGATABLE = 0x400,
        TYPEFLAG_FREPLACEABLE = 0x800,
        TYPEFLAG_FDISPATCHABLE = 0x1000,
        TYPEFLAG_FREVERSEBIND = 0x2000,
        TYPEFLAG_FPROXY = 0x4000
    } TYPEFLAGS;
typedef
enum tagFUNCFLAGS
    {
        FUNCFLAG_FRESTRICTED = 0x1,
        FUNCFLAG_FSOURCE = 0x2,
        FUNCFLAG_FBINDABLE = 0x4,
        FUNCFLAG_FREQUESTEDIT = 0x8,
        FUNCFLAG_FDISPLAYBIND = 0x10,
        FUNCFLAG_FDEFAULTBIND = 0x20,
        FUNCFLAG_FHIDDEN = 0x40,
        FUNCFLAG_FUSESGETLASTERROR = 0x80,
        FUNCFLAG_FDEFAULTCOLLELEM = 0x100,
        FUNCFLAG_FUIDEFAULT = 0x200,
        FUNCFLAG_FNONBROWSABLE = 0x400,
        FUNCFLAG_FREPLACEABLE = 0x800,
        FUNCFLAG_FIMMEDIATEBIND = 0x1000
    } FUNCFLAGS;
typedef
enum tagVARFLAGS
    {
        VARFLAG_FREADONLY = 0x1,
        VARFLAG_FSOURCE = 0x2,
        VARFLAG_FBINDABLE = 0x4,
        VARFLAG_FREQUESTEDIT = 0x8,
        VARFLAG_FDISPLAYBIND = 0x10,
        VARFLAG_FDEFAULTBIND = 0x20,
        VARFLAG_FHIDDEN = 0x40,
        VARFLAG_FRESTRICTED = 0x80,
        VARFLAG_FDEFAULTCOLLELEM = 0x100,
        VARFLAG_FUIDEFAULT = 0x200,
        VARFLAG_FNONBROWSABLE = 0x400,
        VARFLAG_FREPLACEABLE = 0x800,
        VARFLAG_FIMMEDIATEBIND = 0x1000
    } VARFLAGS;
typedef struct tagCLEANLOCALSTORAGE
    {
    IUnknown *pInterface;
    PVOID pStorage;
    DWORD flags;
    } CLEANLOCALSTORAGE;
typedef struct tagCUSTDATAITEM
    {
    GUID guid;
    VARIANTARG varValue;
    } CUSTDATAITEM;
typedef struct tagCUSTDATAITEM *LPCUSTDATAITEM;
typedef struct tagCUSTDATA
    {
    DWORD cCustData;
                    LPCUSTDATAITEM prgCustData;
    } CUSTDATA;
typedef struct tagCUSTDATA *LPCUSTDATA;
extern RPC_IF_HANDLE IOleAutomationTypes_v1_0_c_ifspec;
extern RPC_IF_HANDLE IOleAutomationTypes_v1_0_s_ifspec;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0001_v0_0_s_ifspec;
typedef ICreateTypeInfo *LPCREATETYPEINFO;
EXTERN_C const IID IID_ICreateTypeInfo;
    typedef struct ICreateTypeInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICreateTypeInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICreateTypeInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICreateTypeInfo * This);
        HRESULT ( STDMETHODCALLTYPE *SetGuid )(
            ICreateTypeInfo * This,
                       REFGUID guid);
        HRESULT ( STDMETHODCALLTYPE *SetTypeFlags )(
            ICreateTypeInfo * This,
                       UINT uTypeFlags);
        HRESULT ( STDMETHODCALLTYPE *SetDocString )(
            ICreateTypeInfo * This,
            __RPC__in LPOLESTR pStrDoc);
        HRESULT ( STDMETHODCALLTYPE *SetHelpContext )(
            ICreateTypeInfo * This,
                       DWORD dwHelpContext);
        HRESULT ( STDMETHODCALLTYPE *SetVersion )(
            ICreateTypeInfo * This,
                       WORD wMajorVerNum,
                       WORD wMinorVerNum);
        HRESULT ( STDMETHODCALLTYPE *AddRefTypeInfo )(
            ICreateTypeInfo * This,
                       ITypeInfo *pTInfo,
                       HREFTYPE *phRefType);
        HRESULT ( STDMETHODCALLTYPE *AddFuncDesc )(
            ICreateTypeInfo * This,
                       UINT index,
                       FUNCDESC *pFuncDesc);
        HRESULT ( STDMETHODCALLTYPE *AddImplType )(
            ICreateTypeInfo * This,
                       UINT index,
                       HREFTYPE hRefType);
        HRESULT ( STDMETHODCALLTYPE *SetImplTypeFlags )(
            ICreateTypeInfo * This,
                       UINT index,
                       INT implTypeFlags);
        HRESULT ( STDMETHODCALLTYPE *SetAlignment )(
            ICreateTypeInfo * This,
                       WORD cbAlignment);
        HRESULT ( STDMETHODCALLTYPE *SetSchema )(
            ICreateTypeInfo * This,
            __RPC__in LPOLESTR pStrSchema);
        HRESULT ( STDMETHODCALLTYPE *AddVarDesc )(
            ICreateTypeInfo * This,
                       UINT index,
                       VARDESC *pVarDesc);
        HRESULT ( STDMETHODCALLTYPE *SetFuncAndParamNames )(
            ICreateTypeInfo * This,
                       UINT index,
            __RPC__in_ecount(cNames) LPOLESTR *rgszNames,
                       UINT cNames);
        HRESULT ( STDMETHODCALLTYPE *SetVarName )(
            ICreateTypeInfo * This,
                       UINT index,
            __RPC__in LPOLESTR szName);
        HRESULT ( STDMETHODCALLTYPE *SetTypeDescAlias )(
            ICreateTypeInfo * This,
                       TYPEDESC *pTDescAlias);
        HRESULT ( STDMETHODCALLTYPE *DefineFuncAsDllEntry )(
            ICreateTypeInfo * This,
                       UINT index,
            __RPC__in LPOLESTR szDllName,
            __RPC__in LPOLESTR szProcName);
        HRESULT ( STDMETHODCALLTYPE *SetFuncDocString )(
            ICreateTypeInfo * This,
                       UINT index,
            __RPC__in LPOLESTR szDocString);
        HRESULT ( STDMETHODCALLTYPE *SetVarDocString )(
            ICreateTypeInfo * This,
                       UINT index,
            __RPC__in LPOLESTR szDocString);
        HRESULT ( STDMETHODCALLTYPE *SetFuncHelpContext )(
            ICreateTypeInfo * This,
                       UINT index,
                       DWORD dwHelpContext);
        HRESULT ( STDMETHODCALLTYPE *SetVarHelpContext )(
            ICreateTypeInfo * This,
                       UINT index,
                       DWORD dwHelpContext);
        HRESULT ( STDMETHODCALLTYPE *SetMops )(
            ICreateTypeInfo * This,
                       UINT index,
            _In_ BSTR bstrMops);
        HRESULT ( STDMETHODCALLTYPE *SetTypeIdldesc )(
            ICreateTypeInfo * This,
                       IDLDESC *pIdlDesc);
        HRESULT ( STDMETHODCALLTYPE *LayOut )(
            ICreateTypeInfo * This);
        END_INTERFACE
    } ICreateTypeInfoVtbl;
    interface ICreateTypeInfo
    {
        CONST_VTBL struct ICreateTypeInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetGuid(This,guid) )
    ( (This)->lpVtbl -> SetTypeFlags(This,uTypeFlags) )
    ( (This)->lpVtbl -> SetDocString(This,pStrDoc) )
    ( (This)->lpVtbl -> SetHelpContext(This,dwHelpContext) )
    ( (This)->lpVtbl -> SetVersion(This,wMajorVerNum,wMinorVerNum) )
    ( (This)->lpVtbl -> AddRefTypeInfo(This,pTInfo,phRefType) )
    ( (This)->lpVtbl -> AddFuncDesc(This,index,pFuncDesc) )
    ( (This)->lpVtbl -> AddImplType(This,index,hRefType) )
    ( (This)->lpVtbl -> SetImplTypeFlags(This,index,implTypeFlags) )
    ( (This)->lpVtbl -> SetAlignment(This,cbAlignment) )
    ( (This)->lpVtbl -> SetSchema(This,pStrSchema) )
    ( (This)->lpVtbl -> AddVarDesc(This,index,pVarDesc) )
    ( (This)->lpVtbl -> SetFuncAndParamNames(This,index,rgszNames,cNames) )
    ( (This)->lpVtbl -> SetVarName(This,index,szName) )
    ( (This)->lpVtbl -> SetTypeDescAlias(This,pTDescAlias) )
    ( (This)->lpVtbl -> DefineFuncAsDllEntry(This,index,szDllName,szProcName) )
    ( (This)->lpVtbl -> SetFuncDocString(This,index,szDocString) )
    ( (This)->lpVtbl -> SetVarDocString(This,index,szDocString) )
    ( (This)->lpVtbl -> SetFuncHelpContext(This,index,dwHelpContext) )
    ( (This)->lpVtbl -> SetVarHelpContext(This,index,dwHelpContext) )
    ( (This)->lpVtbl -> SetMops(This,index,bstrMops) )
    ( (This)->lpVtbl -> SetTypeIdldesc(This,pIdlDesc) )
    ( (This)->lpVtbl -> LayOut(This) )
typedef ICreateTypeInfo2 *LPCREATETYPEINFO2;
EXTERN_C const IID IID_ICreateTypeInfo2;
    typedef struct ICreateTypeInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICreateTypeInfo2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICreateTypeInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICreateTypeInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetGuid )(
            ICreateTypeInfo2 * This,
                       REFGUID guid);
        HRESULT ( STDMETHODCALLTYPE *SetTypeFlags )(
            ICreateTypeInfo2 * This,
                       UINT uTypeFlags);
        HRESULT ( STDMETHODCALLTYPE *SetDocString )(
            ICreateTypeInfo2 * This,
            __RPC__in LPOLESTR pStrDoc);
        HRESULT ( STDMETHODCALLTYPE *SetHelpContext )(
            ICreateTypeInfo2 * This,
                       DWORD dwHelpContext);
        HRESULT ( STDMETHODCALLTYPE *SetVersion )(
            ICreateTypeInfo2 * This,
                       WORD wMajorVerNum,
                       WORD wMinorVerNum);
        HRESULT ( STDMETHODCALLTYPE *AddRefTypeInfo )(
            ICreateTypeInfo2 * This,
                       ITypeInfo *pTInfo,
                       HREFTYPE *phRefType);
        HRESULT ( STDMETHODCALLTYPE *AddFuncDesc )(
            ICreateTypeInfo2 * This,
                       UINT index,
                       FUNCDESC *pFuncDesc);
        HRESULT ( STDMETHODCALLTYPE *AddImplType )(
            ICreateTypeInfo2 * This,
                       UINT index,
                       HREFTYPE hRefType);
        HRESULT ( STDMETHODCALLTYPE *SetImplTypeFlags )(
            ICreateTypeInfo2 * This,
                       UINT index,
                       INT implTypeFlags);
        HRESULT ( STDMETHODCALLTYPE *SetAlignment )(
            ICreateTypeInfo2 * This,
                       WORD cbAlignment);
        HRESULT ( STDMETHODCALLTYPE *SetSchema )(
            ICreateTypeInfo2 * This,
            __RPC__in LPOLESTR pStrSchema);
        HRESULT ( STDMETHODCALLTYPE *AddVarDesc )(
            ICreateTypeInfo2 * This,
                       UINT index,
                       VARDESC *pVarDesc);
        HRESULT ( STDMETHODCALLTYPE *SetFuncAndParamNames )(
            ICreateTypeInfo2 * This,
                       UINT index,
            __RPC__in_ecount(cNames) LPOLESTR *rgszNames,
                       UINT cNames);
        HRESULT ( STDMETHODCALLTYPE *SetVarName )(
            ICreateTypeInfo2 * This,
                       UINT index,
            __RPC__in LPOLESTR szName);
        HRESULT ( STDMETHODCALLTYPE *SetTypeDescAlias )(
            ICreateTypeInfo2 * This,
                       TYPEDESC *pTDescAlias);
        HRESULT ( STDMETHODCALLTYPE *DefineFuncAsDllEntry )(
            ICreateTypeInfo2 * This,
                       UINT index,
            __RPC__in LPOLESTR szDllName,
            __RPC__in LPOLESTR szProcName);
        HRESULT ( STDMETHODCALLTYPE *SetFuncDocString )(
            ICreateTypeInfo2 * This,
                       UINT index,
            __RPC__in LPOLESTR szDocString);
        HRESULT ( STDMETHODCALLTYPE *SetVarDocString )(
            ICreateTypeInfo2 * This,
                       UINT index,
            __RPC__in LPOLESTR szDocString);
        HRESULT ( STDMETHODCALLTYPE *SetFuncHelpContext )(
            ICreateTypeInfo2 * This,
                       UINT index,
                       DWORD dwHelpContext);
        HRESULT ( STDMETHODCALLTYPE *SetVarHelpContext )(
            ICreateTypeInfo2 * This,
                       UINT index,
                       DWORD dwHelpContext);
        HRESULT ( STDMETHODCALLTYPE *SetMops )(
            ICreateTypeInfo2 * This,
                       UINT index,
            _In_ BSTR bstrMops);
        HRESULT ( STDMETHODCALLTYPE *SetTypeIdldesc )(
            ICreateTypeInfo2 * This,
                       IDLDESC *pIdlDesc);
        HRESULT ( STDMETHODCALLTYPE *LayOut )(
            ICreateTypeInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *DeleteFuncDesc )(
            ICreateTypeInfo2 * This,
                       UINT index);
        HRESULT ( STDMETHODCALLTYPE *DeleteFuncDescByMemId )(
            ICreateTypeInfo2 * This,
                       MEMBERID memid,
                       INVOKEKIND invKind);
        HRESULT ( STDMETHODCALLTYPE *DeleteVarDesc )(
            ICreateTypeInfo2 * This,
                       UINT index);
        HRESULT ( STDMETHODCALLTYPE *DeleteVarDescByMemId )(
            ICreateTypeInfo2 * This,
                       MEMBERID memid);
        HRESULT ( STDMETHODCALLTYPE *DeleteImplType )(
            ICreateTypeInfo2 * This,
                       UINT index);
        HRESULT ( STDMETHODCALLTYPE *SetCustData )(
            ICreateTypeInfo2 * This,
                       REFGUID guid,
                       VARIANT *pVarVal);
        HRESULT ( STDMETHODCALLTYPE *SetFuncCustData )(
            ICreateTypeInfo2 * This,
                       UINT index,
                       REFGUID guid,
                       VARIANT *pVarVal);
        HRESULT ( STDMETHODCALLTYPE *SetParamCustData )(
            ICreateTypeInfo2 * This,
                       UINT indexFunc,
                       UINT indexParam,
                       REFGUID guid,
                       VARIANT *pVarVal);
        HRESULT ( STDMETHODCALLTYPE *SetVarCustData )(
            ICreateTypeInfo2 * This,
                       UINT index,
                       REFGUID guid,
                       VARIANT *pVarVal);
        HRESULT ( STDMETHODCALLTYPE *SetImplTypeCustData )(
            ICreateTypeInfo2 * This,
                       UINT index,
                       REFGUID guid,
                       VARIANT *pVarVal);
        HRESULT ( STDMETHODCALLTYPE *SetHelpStringContext )(
            ICreateTypeInfo2 * This,
                       ULONG dwHelpStringContext);
        HRESULT ( STDMETHODCALLTYPE *SetFuncHelpStringContext )(
            ICreateTypeInfo2 * This,
                       UINT index,
                       ULONG dwHelpStringContext);
        HRESULT ( STDMETHODCALLTYPE *SetVarHelpStringContext )(
            ICreateTypeInfo2 * This,
                       UINT index,
                       ULONG dwHelpStringContext);
        HRESULT ( STDMETHODCALLTYPE *Invalidate )(
            ICreateTypeInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ICreateTypeInfo2 * This,
            __RPC__in LPOLESTR szName);
        END_INTERFACE
    } ICreateTypeInfo2Vtbl;
    interface ICreateTypeInfo2
    {
        CONST_VTBL struct ICreateTypeInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetGuid(This,guid) )
    ( (This)->lpVtbl -> SetTypeFlags(This,uTypeFlags) )
    ( (This)->lpVtbl -> SetDocString(This,pStrDoc) )
    ( (This)->lpVtbl -> SetHelpContext(This,dwHelpContext) )
    ( (This)->lpVtbl -> SetVersion(This,wMajorVerNum,wMinorVerNum) )
    ( (This)->lpVtbl -> AddRefTypeInfo(This,pTInfo,phRefType) )
    ( (This)->lpVtbl -> AddFuncDesc(This,index,pFuncDesc) )
    ( (This)->lpVtbl -> AddImplType(This,index,hRefType) )
    ( (This)->lpVtbl -> SetImplTypeFlags(This,index,implTypeFlags) )
    ( (This)->lpVtbl -> SetAlignment(This,cbAlignment) )
    ( (This)->lpVtbl -> SetSchema(This,pStrSchema) )
    ( (This)->lpVtbl -> AddVarDesc(This,index,pVarDesc) )
    ( (This)->lpVtbl -> SetFuncAndParamNames(This,index,rgszNames,cNames) )
    ( (This)->lpVtbl -> SetVarName(This,index,szName) )
    ( (This)->lpVtbl -> SetTypeDescAlias(This,pTDescAlias) )
    ( (This)->lpVtbl -> DefineFuncAsDllEntry(This,index,szDllName,szProcName) )
    ( (This)->lpVtbl -> SetFuncDocString(This,index,szDocString) )
    ( (This)->lpVtbl -> SetVarDocString(This,index,szDocString) )
    ( (This)->lpVtbl -> SetFuncHelpContext(This,index,dwHelpContext) )
    ( (This)->lpVtbl -> SetVarHelpContext(This,index,dwHelpContext) )
    ( (This)->lpVtbl -> SetMops(This,index,bstrMops) )
    ( (This)->lpVtbl -> SetTypeIdldesc(This,pIdlDesc) )
    ( (This)->lpVtbl -> LayOut(This) )
    ( (This)->lpVtbl -> DeleteFuncDesc(This,index) )
    ( (This)->lpVtbl -> DeleteFuncDescByMemId(This,memid,invKind) )
    ( (This)->lpVtbl -> DeleteVarDesc(This,index) )
    ( (This)->lpVtbl -> DeleteVarDescByMemId(This,memid) )
    ( (This)->lpVtbl -> DeleteImplType(This,index) )
    ( (This)->lpVtbl -> SetCustData(This,guid,pVarVal) )
    ( (This)->lpVtbl -> SetFuncCustData(This,index,guid,pVarVal) )
    ( (This)->lpVtbl -> SetParamCustData(This,indexFunc,indexParam,guid,pVarVal) )
    ( (This)->lpVtbl -> SetVarCustData(This,index,guid,pVarVal) )
    ( (This)->lpVtbl -> SetImplTypeCustData(This,index,guid,pVarVal) )
    ( (This)->lpVtbl -> SetHelpStringContext(This,dwHelpStringContext) )
    ( (This)->lpVtbl -> SetFuncHelpStringContext(This,index,dwHelpStringContext) )
    ( (This)->lpVtbl -> SetVarHelpStringContext(This,index,dwHelpStringContext) )
    ( (This)->lpVtbl -> Invalidate(This) )
    ( (This)->lpVtbl -> SetName(This,szName) )
typedef ICreateTypeLib *LPCREATETYPELIB;
EXTERN_C const IID IID_ICreateTypeLib;
    typedef struct ICreateTypeLibVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICreateTypeLib * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICreateTypeLib * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICreateTypeLib * This);
        HRESULT ( STDMETHODCALLTYPE *CreateTypeInfo )(
            ICreateTypeLib * This,
            __RPC__in LPOLESTR szName,
                       TYPEKIND tkind,
                        ICreateTypeInfo **ppCTInfo);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ICreateTypeLib * This,
            __RPC__in LPOLESTR szName);
        HRESULT ( STDMETHODCALLTYPE *SetVersion )(
            ICreateTypeLib * This,
                       WORD wMajorVerNum,
                       WORD wMinorVerNum);
        HRESULT ( STDMETHODCALLTYPE *SetGuid )(
            ICreateTypeLib * This,
                       REFGUID guid);
        HRESULT ( STDMETHODCALLTYPE *SetDocString )(
            ICreateTypeLib * This,
            __RPC__in LPOLESTR szDoc);
        HRESULT ( STDMETHODCALLTYPE *SetHelpFileName )(
            ICreateTypeLib * This,
            __RPC__in LPOLESTR szHelpFileName);
        HRESULT ( STDMETHODCALLTYPE *SetHelpContext )(
            ICreateTypeLib * This,
                       DWORD dwHelpContext);
        HRESULT ( STDMETHODCALLTYPE *SetLcid )(
            ICreateTypeLib * This,
                       LCID lcid);
        HRESULT ( STDMETHODCALLTYPE *SetLibFlags )(
            ICreateTypeLib * This,
                       UINT uLibFlags);
        HRESULT ( STDMETHODCALLTYPE *SaveAllChanges )(
            ICreateTypeLib * This);
        END_INTERFACE
    } ICreateTypeLibVtbl;
    interface ICreateTypeLib
    {
        CONST_VTBL struct ICreateTypeLibVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateTypeInfo(This,szName,tkind,ppCTInfo) )
    ( (This)->lpVtbl -> SetName(This,szName) )
    ( (This)->lpVtbl -> SetVersion(This,wMajorVerNum,wMinorVerNum) )
    ( (This)->lpVtbl -> SetGuid(This,guid) )
    ( (This)->lpVtbl -> SetDocString(This,szDoc) )
    ( (This)->lpVtbl -> SetHelpFileName(This,szHelpFileName) )
    ( (This)->lpVtbl -> SetHelpContext(This,dwHelpContext) )
    ( (This)->lpVtbl -> SetLcid(This,lcid) )
    ( (This)->lpVtbl -> SetLibFlags(This,uLibFlags) )
    ( (This)->lpVtbl -> SaveAllChanges(This) )
typedef ICreateTypeLib2 *LPCREATETYPELIB2;
EXTERN_C const IID IID_ICreateTypeLib2;
    typedef struct ICreateTypeLib2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICreateTypeLib2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICreateTypeLib2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICreateTypeLib2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateTypeInfo )(
            ICreateTypeLib2 * This,
            __RPC__in LPOLESTR szName,
                       TYPEKIND tkind,
                        ICreateTypeInfo **ppCTInfo);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ICreateTypeLib2 * This,
            __RPC__in LPOLESTR szName);
        HRESULT ( STDMETHODCALLTYPE *SetVersion )(
            ICreateTypeLib2 * This,
                       WORD wMajorVerNum,
                       WORD wMinorVerNum);
        HRESULT ( STDMETHODCALLTYPE *SetGuid )(
            ICreateTypeLib2 * This,
                       REFGUID guid);
        HRESULT ( STDMETHODCALLTYPE *SetDocString )(
            ICreateTypeLib2 * This,
            __RPC__in LPOLESTR szDoc);
        HRESULT ( STDMETHODCALLTYPE *SetHelpFileName )(
            ICreateTypeLib2 * This,
            __RPC__in LPOLESTR szHelpFileName);
        HRESULT ( STDMETHODCALLTYPE *SetHelpContext )(
            ICreateTypeLib2 * This,
                       DWORD dwHelpContext);
        HRESULT ( STDMETHODCALLTYPE *SetLcid )(
            ICreateTypeLib2 * This,
                       LCID lcid);
        HRESULT ( STDMETHODCALLTYPE *SetLibFlags )(
            ICreateTypeLib2 * This,
                       UINT uLibFlags);
        HRESULT ( STDMETHODCALLTYPE *SaveAllChanges )(
            ICreateTypeLib2 * This);
        HRESULT ( STDMETHODCALLTYPE *DeleteTypeInfo )(
            ICreateTypeLib2 * This,
            __RPC__in LPOLESTR szName);
        HRESULT ( STDMETHODCALLTYPE *SetCustData )(
            ICreateTypeLib2 * This,
                       REFGUID guid,
                       VARIANT *pVarVal);
        HRESULT ( STDMETHODCALLTYPE *SetHelpStringContext )(
            ICreateTypeLib2 * This,
                       ULONG dwHelpStringContext);
        HRESULT ( STDMETHODCALLTYPE *SetHelpStringDll )(
            ICreateTypeLib2 * This,
            __RPC__in LPOLESTR szFileName);
        END_INTERFACE
    } ICreateTypeLib2Vtbl;
    interface ICreateTypeLib2
    {
        CONST_VTBL struct ICreateTypeLib2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateTypeInfo(This,szName,tkind,ppCTInfo) )
    ( (This)->lpVtbl -> SetName(This,szName) )
    ( (This)->lpVtbl -> SetVersion(This,wMajorVerNum,wMinorVerNum) )
    ( (This)->lpVtbl -> SetGuid(This,guid) )
    ( (This)->lpVtbl -> SetDocString(This,szDoc) )
    ( (This)->lpVtbl -> SetHelpFileName(This,szHelpFileName) )
    ( (This)->lpVtbl -> SetHelpContext(This,dwHelpContext) )
    ( (This)->lpVtbl -> SetLcid(This,lcid) )
    ( (This)->lpVtbl -> SetLibFlags(This,uLibFlags) )
    ( (This)->lpVtbl -> SaveAllChanges(This) )
    ( (This)->lpVtbl -> DeleteTypeInfo(This,szName) )
    ( (This)->lpVtbl -> SetCustData(This,guid,pVarVal) )
    ( (This)->lpVtbl -> SetHelpStringContext(This,dwHelpStringContext) )
    ( (This)->lpVtbl -> SetHelpStringDll(This,szFileName) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0005_v0_0_s_ifspec;
typedef __RPC_unique_pointer IDispatch *LPDISPATCH;
EXTERN_C const IID IID_IDispatch;
    typedef struct IDispatchVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDispatch * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDispatch * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDispatch * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDispatch * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDispatch * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDispatch * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDispatch * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IDispatchVtbl;
    interface IDispatch
    {
        CONST_VTBL struct IDispatchVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
                HRESULT STDMETHODCALLTYPE IDispatch_RemoteInvoke_Proxy(
    __RPC__in IDispatch * This,
               DISPID dispIdMember,
               __RPC__in REFIID riid,
               LCID lcid,
               DWORD dwFlags,
               __RPC__in DISPPARAMS *pDispParams,
                __RPC__out VARIANT *pVarResult,
                __RPC__out EXCEPINFO *pExcepInfo,
                __RPC__out UINT *pArgErr,
               UINT cVarRef,
                        __RPC__in_ecount_full(cVarRef) UINT *rgVarRefIdx,
                             __RPC__inout_ecount_full(cVarRef) VARIANTARG *rgVarRef);
void __RPC_STUB IDispatch_RemoteInvoke_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef __RPC_unique_pointer IEnumVARIANT *LPENUMVARIANT;
EXTERN_C const IID IID_IEnumVARIANT;
    typedef struct IEnumVARIANTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumVARIANT * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumVARIANT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumVARIANT * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumVARIANT * This,
                       ULONG celt,
                                            VARIANT *rgVar,
                        ULONG *pCeltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumVARIANT * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumVARIANT * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumVARIANT * This,
                        __RPC__deref_out_opt IEnumVARIANT **ppEnum);
        END_INTERFACE
    } IEnumVARIANTVtbl;
    interface IEnumVARIANT
    {
        CONST_VTBL struct IEnumVARIANTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgVar,pCeltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
                HRESULT STDMETHODCALLTYPE IEnumVARIANT_RemoteNext_Proxy(
    __RPC__in IEnumVARIANT * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pCeltFetched) VARIANT *rgVar,
                __RPC__out ULONG *pCeltFetched);
void __RPC_STUB IEnumVARIANT_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef __RPC_unique_pointer ITypeComp *LPTYPECOMP;
typedef
enum tagDESCKIND
    {
        DESCKIND_NONE = 0,
        DESCKIND_FUNCDESC = ( DESCKIND_NONE + 1 ) ,
        DESCKIND_VARDESC = ( DESCKIND_FUNCDESC + 1 ) ,
        DESCKIND_TYPECOMP = ( DESCKIND_VARDESC + 1 ) ,
        DESCKIND_IMPLICITAPPOBJ = ( DESCKIND_TYPECOMP + 1 ) ,
        DESCKIND_MAX = ( DESCKIND_IMPLICITAPPOBJ + 1 )
    } DESCKIND;
typedef union tagBINDPTR
    {
    FUNCDESC *lpfuncdesc;
    VARDESC *lpvardesc;
    ITypeComp *lptcomp;
    } BINDPTR;
typedef union tagBINDPTR *LPBINDPTR;
EXTERN_C const IID IID_ITypeComp;
    typedef struct ITypeCompVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITypeComp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITypeComp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITypeComp * This);
                      HRESULT ( STDMETHODCALLTYPE *Bind )(
            ITypeComp * This,
            __RPC__in LPOLESTR szName,
                       ULONG lHashVal,
                       WORD wFlags,
                        ITypeInfo **ppTInfo,
                        DESCKIND *pDescKind,
                        BINDPTR *pBindPtr);
                      HRESULT ( STDMETHODCALLTYPE *BindType )(
            ITypeComp * This,
            __RPC__in LPOLESTR szName,
                       ULONG lHashVal,
                        ITypeInfo **ppTInfo,
                        ITypeComp **ppTComp);
        END_INTERFACE
    } ITypeCompVtbl;
    interface ITypeComp
    {
        CONST_VTBL struct ITypeCompVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Bind(This,szName,lHashVal,wFlags,ppTInfo,pDescKind,pBindPtr) )
    ( (This)->lpVtbl -> BindType(This,szName,lHashVal,ppTInfo,ppTComp) )
                HRESULT STDMETHODCALLTYPE ITypeComp_RemoteBind_Proxy(
    __RPC__in ITypeComp * This,
               __RPC__in LPOLESTR szName,
               ULONG lHashVal,
               WORD wFlags,
                __RPC__deref_out_opt ITypeInfo **ppTInfo,
                __RPC__out DESCKIND *pDescKind,
                __RPC__deref_out_opt LPFUNCDESC *ppFuncDesc,
                __RPC__deref_out_opt LPVARDESC *ppVarDesc,
                __RPC__deref_out_opt ITypeComp **ppTypeComp,
                __RPC__out CLEANLOCALSTORAGE *pDummy);
void __RPC_STUB ITypeComp_RemoteBind_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ITypeComp_RemoteBindType_Proxy(
    __RPC__in ITypeComp * This,
               __RPC__in LPOLESTR szName,
               ULONG lHashVal,
                __RPC__deref_out_opt ITypeInfo **ppTInfo);
void __RPC_STUB ITypeComp_RemoteBindType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0008_v0_0_s_ifspec;
typedef __RPC_unique_pointer ITypeInfo *LPTYPEINFO;
EXTERN_C const IID IID_ITypeInfo;
    typedef struct ITypeInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITypeInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITypeInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITypeInfo * This);
                      HRESULT ( STDMETHODCALLTYPE *GetTypeAttr )(
            ITypeInfo * This,
                        TYPEATTR **ppTypeAttr);
        HRESULT ( STDMETHODCALLTYPE *GetTypeComp )(
            __RPC__in ITypeInfo * This,
                        __RPC__deref_out_opt ITypeComp **ppTComp);
                      HRESULT ( STDMETHODCALLTYPE *GetFuncDesc )(
            ITypeInfo * This,
                       UINT index,
                        FUNCDESC **ppFuncDesc);
                      HRESULT ( STDMETHODCALLTYPE *GetVarDesc )(
            ITypeInfo * This,
                       UINT index,
                        VARDESC **ppVarDesc);
                      HRESULT ( STDMETHODCALLTYPE *GetNames )(
            ITypeInfo * This,
                       MEMBERID memid,
            __RPC__out_ecount_part(cMaxNames, *pcNames) BSTR *rgBstrNames,
                       UINT cMaxNames,
            __RPC__out UINT *pcNames);
        HRESULT ( STDMETHODCALLTYPE *GetRefTypeOfImplType )(
            __RPC__in ITypeInfo * This,
                       UINT index,
                        __RPC__out HREFTYPE *pRefType);
        HRESULT ( STDMETHODCALLTYPE *GetImplTypeFlags )(
            __RPC__in ITypeInfo * This,
                       UINT index,
                        __RPC__out INT *pImplTypeFlags);
                      HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ITypeInfo * This,
            __RPC__in_ecount(cNames) LPOLESTR *rgszNames,
                       UINT cNames,
                                 MEMBERID *pMemId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITypeInfo * This,
                       PVOID pvInstance,
                       MEMBERID memid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                      HRESULT ( STDMETHODCALLTYPE *GetDocumentation )(
            ITypeInfo * This,
                       MEMBERID memid,
            _Outptr_opt_ BSTR *pBstrName,
            _Outptr_opt_ BSTR *pBstrDocString,
                        DWORD *pdwHelpContext,
            _Outptr_opt_ BSTR *pBstrHelpFile);
                      HRESULT ( STDMETHODCALLTYPE *GetDllEntry )(
            ITypeInfo * This,
                       MEMBERID memid,
                       INVOKEKIND invKind,
            _Outptr_opt_ BSTR *pBstrDllName,
            _Outptr_opt_ BSTR *pBstrName,
                        WORD *pwOrdinal);
        HRESULT ( STDMETHODCALLTYPE *GetRefTypeInfo )(
            __RPC__in ITypeInfo * This,
                       HREFTYPE hRefType,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
                      HRESULT ( STDMETHODCALLTYPE *AddressOfMember )(
            ITypeInfo * This,
                       MEMBERID memid,
                       INVOKEKIND invKind,
                        PVOID *ppv);
                      HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            ITypeInfo * This,
                       IUnknown *pUnkOuter,
                       REFIID riid,
                                PVOID *ppvObj);
        HRESULT ( STDMETHODCALLTYPE *GetMops )(
            __RPC__in ITypeInfo * This,
                       MEMBERID memid,
                        __RPC__deref_out_opt BSTR *pBstrMops);
                      HRESULT ( STDMETHODCALLTYPE *GetContainingTypeLib )(
            ITypeInfo * This,
                        ITypeLib **ppTLib,
                        UINT *pIndex);
                      void ( STDMETHODCALLTYPE *ReleaseTypeAttr )(
            ITypeInfo * This,
                       TYPEATTR *pTypeAttr);
                      void ( STDMETHODCALLTYPE *ReleaseFuncDesc )(
            ITypeInfo * This,
                       FUNCDESC *pFuncDesc);
                      void ( STDMETHODCALLTYPE *ReleaseVarDesc )(
            ITypeInfo * This,
                       VARDESC *pVarDesc);
        END_INTERFACE
    } ITypeInfoVtbl;
    interface ITypeInfo
    {
        CONST_VTBL struct ITypeInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeAttr(This,ppTypeAttr) )
    ( (This)->lpVtbl -> GetTypeComp(This,ppTComp) )
    ( (This)->lpVtbl -> GetFuncDesc(This,index,ppFuncDesc) )
    ( (This)->lpVtbl -> GetVarDesc(This,index,ppVarDesc) )
    ( (This)->lpVtbl -> GetNames(This,memid,rgBstrNames,cMaxNames,pcNames) )
    ( (This)->lpVtbl -> GetRefTypeOfImplType(This,index,pRefType) )
    ( (This)->lpVtbl -> GetImplTypeFlags(This,index,pImplTypeFlags) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,rgszNames,cNames,pMemId) )
    ( (This)->lpVtbl -> Invoke(This,pvInstance,memid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetDocumentation(This,memid,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile) )
    ( (This)->lpVtbl -> GetDllEntry(This,memid,invKind,pBstrDllName,pBstrName,pwOrdinal) )
    ( (This)->lpVtbl -> GetRefTypeInfo(This,hRefType,ppTInfo) )
    ( (This)->lpVtbl -> AddressOfMember(This,memid,invKind,ppv) )
    ( (This)->lpVtbl -> CreateInstance(This,pUnkOuter,riid,ppvObj) )
    ( (This)->lpVtbl -> GetMops(This,memid,pBstrMops) )
    ( (This)->lpVtbl -> GetContainingTypeLib(This,ppTLib,pIndex) )
    ( (This)->lpVtbl -> ReleaseTypeAttr(This,pTypeAttr) )
    ( (This)->lpVtbl -> ReleaseFuncDesc(This,pFuncDesc) )
    ( (This)->lpVtbl -> ReleaseVarDesc(This,pVarDesc) )
                HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetTypeAttr_Proxy(
    __RPC__in ITypeInfo * This,
                __RPC__deref_out_opt LPTYPEATTR *ppTypeAttr,
                __RPC__out CLEANLOCALSTORAGE *pDummy);
void __RPC_STUB ITypeInfo_RemoteGetTypeAttr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetFuncDesc_Proxy(
    __RPC__in ITypeInfo * This,
               UINT index,
                __RPC__deref_out_opt LPFUNCDESC *ppFuncDesc,
                __RPC__out CLEANLOCALSTORAGE *pDummy);
void __RPC_STUB ITypeInfo_RemoteGetFuncDesc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetVarDesc_Proxy(
    __RPC__in ITypeInfo * This,
               UINT index,
                __RPC__deref_out_opt LPVARDESC *ppVarDesc,
                __RPC__out CLEANLOCALSTORAGE *pDummy);
void __RPC_STUB ITypeInfo_RemoteGetVarDesc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetNames_Proxy(
    __RPC__in ITypeInfo * This,
               MEMBERID memid,
                                    __RPC__out_ecount_part(cMaxNames, *pcNames) BSTR *rgBstrNames,
               UINT cMaxNames,
                __RPC__out UINT *pcNames);
void __RPC_STUB ITypeInfo_RemoteGetNames_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                        HRESULT STDMETHODCALLTYPE ITypeInfo_LocalGetIDsOfNames_Proxy(
    __RPC__in ITypeInfo * This);
void __RPC_STUB ITypeInfo_LocalGetIDsOfNames_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                        HRESULT STDMETHODCALLTYPE ITypeInfo_LocalInvoke_Proxy(
    __RPC__in ITypeInfo * This);
void __RPC_STUB ITypeInfo_LocalInvoke_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetDocumentation_Proxy(
    __RPC__in ITypeInfo * This,
               MEMBERID memid,
               DWORD refPtrFlags,
                __RPC__deref_out_opt BSTR *pBstrName,
                __RPC__deref_out_opt BSTR *pBstrDocString,
                __RPC__out DWORD *pdwHelpContext,
                __RPC__deref_out_opt BSTR *pBstrHelpFile);
void __RPC_STUB ITypeInfo_RemoteGetDocumentation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetDllEntry_Proxy(
    __RPC__in ITypeInfo * This,
               MEMBERID memid,
               INVOKEKIND invKind,
               DWORD refPtrFlags,
                __RPC__deref_out_opt BSTR *pBstrDllName,
                __RPC__deref_out_opt BSTR *pBstrName,
                __RPC__out WORD *pwOrdinal);
void __RPC_STUB ITypeInfo_RemoteGetDllEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                        HRESULT STDMETHODCALLTYPE ITypeInfo_LocalAddressOfMember_Proxy(
    __RPC__in ITypeInfo * This);
void __RPC_STUB ITypeInfo_LocalAddressOfMember_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteCreateInstance_Proxy(
    __RPC__in ITypeInfo * This,
               __RPC__in REFIID riid,
                        __RPC__deref_out_opt IUnknown **ppvObj);
void __RPC_STUB ITypeInfo_RemoteCreateInstance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetContainingTypeLib_Proxy(
    __RPC__in ITypeInfo * This,
                __RPC__deref_out_opt ITypeLib **ppTLib,
                __RPC__out UINT *pIndex);
void __RPC_STUB ITypeInfo_RemoteGetContainingTypeLib_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                        HRESULT STDMETHODCALLTYPE ITypeInfo_LocalReleaseTypeAttr_Proxy(
    __RPC__in ITypeInfo * This);
void __RPC_STUB ITypeInfo_LocalReleaseTypeAttr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                        HRESULT STDMETHODCALLTYPE ITypeInfo_LocalReleaseFuncDesc_Proxy(
    __RPC__in ITypeInfo * This);
void __RPC_STUB ITypeInfo_LocalReleaseFuncDesc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                        HRESULT STDMETHODCALLTYPE ITypeInfo_LocalReleaseVarDesc_Proxy(
    __RPC__in ITypeInfo * This);
void __RPC_STUB ITypeInfo_LocalReleaseVarDesc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef __RPC_unique_pointer ITypeInfo2 *LPTYPEINFO2;
EXTERN_C const IID IID_ITypeInfo2;
    typedef struct ITypeInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITypeInfo2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITypeInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITypeInfo2 * This);
                      HRESULT ( STDMETHODCALLTYPE *GetTypeAttr )(
            ITypeInfo2 * This,
                        TYPEATTR **ppTypeAttr);
        HRESULT ( STDMETHODCALLTYPE *GetTypeComp )(
            __RPC__in ITypeInfo2 * This,
                        __RPC__deref_out_opt ITypeComp **ppTComp);
                      HRESULT ( STDMETHODCALLTYPE *GetFuncDesc )(
            ITypeInfo2 * This,
                       UINT index,
                        FUNCDESC **ppFuncDesc);
                      HRESULT ( STDMETHODCALLTYPE *GetVarDesc )(
            ITypeInfo2 * This,
                       UINT index,
                        VARDESC **ppVarDesc);
                      HRESULT ( STDMETHODCALLTYPE *GetNames )(
            ITypeInfo2 * This,
                       MEMBERID memid,
            __RPC__out_ecount_part(cMaxNames, *pcNames) BSTR *rgBstrNames,
                       UINT cMaxNames,
            __RPC__out UINT *pcNames);
        HRESULT ( STDMETHODCALLTYPE *GetRefTypeOfImplType )(
            __RPC__in ITypeInfo2 * This,
                       UINT index,
                        __RPC__out HREFTYPE *pRefType);
        HRESULT ( STDMETHODCALLTYPE *GetImplTypeFlags )(
            __RPC__in ITypeInfo2 * This,
                       UINT index,
                        __RPC__out INT *pImplTypeFlags);
                      HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ITypeInfo2 * This,
            __RPC__in_ecount(cNames) LPOLESTR *rgszNames,
                       UINT cNames,
                                 MEMBERID *pMemId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITypeInfo2 * This,
                       PVOID pvInstance,
                       MEMBERID memid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
                      HRESULT ( STDMETHODCALLTYPE *GetDocumentation )(
            ITypeInfo2 * This,
                       MEMBERID memid,
            _Outptr_opt_ BSTR *pBstrName,
            _Outptr_opt_ BSTR *pBstrDocString,
                        DWORD *pdwHelpContext,
            _Outptr_opt_ BSTR *pBstrHelpFile);
                      HRESULT ( STDMETHODCALLTYPE *GetDllEntry )(
            ITypeInfo2 * This,
                       MEMBERID memid,
                       INVOKEKIND invKind,
            _Outptr_opt_ BSTR *pBstrDllName,
            _Outptr_opt_ BSTR *pBstrName,
                        WORD *pwOrdinal);
        HRESULT ( STDMETHODCALLTYPE *GetRefTypeInfo )(
            __RPC__in ITypeInfo2 * This,
                       HREFTYPE hRefType,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
                      HRESULT ( STDMETHODCALLTYPE *AddressOfMember )(
            ITypeInfo2 * This,
                       MEMBERID memid,
                       INVOKEKIND invKind,
                        PVOID *ppv);
                      HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            ITypeInfo2 * This,
                       IUnknown *pUnkOuter,
                       REFIID riid,
                                PVOID *ppvObj);
        HRESULT ( STDMETHODCALLTYPE *GetMops )(
            __RPC__in ITypeInfo2 * This,
                       MEMBERID memid,
                        __RPC__deref_out_opt BSTR *pBstrMops);
                      HRESULT ( STDMETHODCALLTYPE *GetContainingTypeLib )(
            ITypeInfo2 * This,
                        ITypeLib **ppTLib,
                        UINT *pIndex);
                      void ( STDMETHODCALLTYPE *ReleaseTypeAttr )(
            ITypeInfo2 * This,
                       TYPEATTR *pTypeAttr);
                      void ( STDMETHODCALLTYPE *ReleaseFuncDesc )(
            ITypeInfo2 * This,
                       FUNCDESC *pFuncDesc);
                      void ( STDMETHODCALLTYPE *ReleaseVarDesc )(
            ITypeInfo2 * This,
                       VARDESC *pVarDesc);
        HRESULT ( STDMETHODCALLTYPE *GetTypeKind )(
            __RPC__in ITypeInfo2 * This,
                        __RPC__out TYPEKIND *pTypeKind);
        HRESULT ( STDMETHODCALLTYPE *GetTypeFlags )(
            __RPC__in ITypeInfo2 * This,
                        __RPC__out ULONG *pTypeFlags);
        HRESULT ( STDMETHODCALLTYPE *GetFuncIndexOfMemId )(
            __RPC__in ITypeInfo2 * This,
                       MEMBERID memid,
                       INVOKEKIND invKind,
                        __RPC__out UINT *pFuncIndex);
        HRESULT ( STDMETHODCALLTYPE *GetVarIndexOfMemId )(
            __RPC__in ITypeInfo2 * This,
                       MEMBERID memid,
                        __RPC__out UINT *pVarIndex);
        HRESULT ( STDMETHODCALLTYPE *GetCustData )(
            __RPC__in ITypeInfo2 * This,
                       __RPC__in REFGUID guid,
                        __RPC__out VARIANT *pVarVal);
        HRESULT ( STDMETHODCALLTYPE *GetFuncCustData )(
            __RPC__in ITypeInfo2 * This,
                       UINT index,
                       __RPC__in REFGUID guid,
                        __RPC__out VARIANT *pVarVal);
        HRESULT ( STDMETHODCALLTYPE *GetParamCustData )(
            __RPC__in ITypeInfo2 * This,
                       UINT indexFunc,
                       UINT indexParam,
                       __RPC__in REFGUID guid,
                        __RPC__out VARIANT *pVarVal);
        HRESULT ( STDMETHODCALLTYPE *GetVarCustData )(
            __RPC__in ITypeInfo2 * This,
                       UINT index,
                       __RPC__in REFGUID guid,
                        __RPC__out VARIANT *pVarVal);
        HRESULT ( STDMETHODCALLTYPE *GetImplTypeCustData )(
            __RPC__in ITypeInfo2 * This,
                       UINT index,
                       __RPC__in REFGUID guid,
                        __RPC__out VARIANT *pVarVal);
                      HRESULT ( STDMETHODCALLTYPE *GetDocumentation2 )(
            ITypeInfo2 * This,
                       MEMBERID memid,
                       LCID lcid,
            _Outptr_opt_ BSTR *pbstrHelpString,
                        DWORD *pdwHelpStringContext,
            _Outptr_opt_ BSTR *pbstrHelpStringDll);
        HRESULT ( STDMETHODCALLTYPE *GetAllCustData )(
            __RPC__in ITypeInfo2 * This,
                        __RPC__out CUSTDATA *pCustData);
        HRESULT ( STDMETHODCALLTYPE *GetAllFuncCustData )(
            __RPC__in ITypeInfo2 * This,
                       UINT index,
                        __RPC__out CUSTDATA *pCustData);
        HRESULT ( STDMETHODCALLTYPE *GetAllParamCustData )(
            __RPC__in ITypeInfo2 * This,
                       UINT indexFunc,
                       UINT indexParam,
                        __RPC__out CUSTDATA *pCustData);
        HRESULT ( STDMETHODCALLTYPE *GetAllVarCustData )(
            __RPC__in ITypeInfo2 * This,
                       UINT index,
                        __RPC__out CUSTDATA *pCustData);
        HRESULT ( STDMETHODCALLTYPE *GetAllImplTypeCustData )(
            __RPC__in ITypeInfo2 * This,
                       UINT index,
                        __RPC__out CUSTDATA *pCustData);
        END_INTERFACE
    } ITypeInfo2Vtbl;
    interface ITypeInfo2
    {
        CONST_VTBL struct ITypeInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeAttr(This,ppTypeAttr) )
    ( (This)->lpVtbl -> GetTypeComp(This,ppTComp) )
    ( (This)->lpVtbl -> GetFuncDesc(This,index,ppFuncDesc) )
    ( (This)->lpVtbl -> GetVarDesc(This,index,ppVarDesc) )
    ( (This)->lpVtbl -> GetNames(This,memid,rgBstrNames,cMaxNames,pcNames) )
    ( (This)->lpVtbl -> GetRefTypeOfImplType(This,index,pRefType) )
    ( (This)->lpVtbl -> GetImplTypeFlags(This,index,pImplTypeFlags) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,rgszNames,cNames,pMemId) )
    ( (This)->lpVtbl -> Invoke(This,pvInstance,memid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetDocumentation(This,memid,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile) )
    ( (This)->lpVtbl -> GetDllEntry(This,memid,invKind,pBstrDllName,pBstrName,pwOrdinal) )
    ( (This)->lpVtbl -> GetRefTypeInfo(This,hRefType,ppTInfo) )
    ( (This)->lpVtbl -> AddressOfMember(This,memid,invKind,ppv) )
    ( (This)->lpVtbl -> CreateInstance(This,pUnkOuter,riid,ppvObj) )
    ( (This)->lpVtbl -> GetMops(This,memid,pBstrMops) )
    ( (This)->lpVtbl -> GetContainingTypeLib(This,ppTLib,pIndex) )
    ( (This)->lpVtbl -> ReleaseTypeAttr(This,pTypeAttr) )
    ( (This)->lpVtbl -> ReleaseFuncDesc(This,pFuncDesc) )
    ( (This)->lpVtbl -> ReleaseVarDesc(This,pVarDesc) )
    ( (This)->lpVtbl -> GetTypeKind(This,pTypeKind) )
    ( (This)->lpVtbl -> GetTypeFlags(This,pTypeFlags) )
    ( (This)->lpVtbl -> GetFuncIndexOfMemId(This,memid,invKind,pFuncIndex) )
    ( (This)->lpVtbl -> GetVarIndexOfMemId(This,memid,pVarIndex) )
    ( (This)->lpVtbl -> GetCustData(This,guid,pVarVal) )
    ( (This)->lpVtbl -> GetFuncCustData(This,index,guid,pVarVal) )
    ( (This)->lpVtbl -> GetParamCustData(This,indexFunc,indexParam,guid,pVarVal) )
    ( (This)->lpVtbl -> GetVarCustData(This,index,guid,pVarVal) )
    ( (This)->lpVtbl -> GetImplTypeCustData(This,index,guid,pVarVal) )
    ( (This)->lpVtbl -> GetDocumentation2(This,memid,lcid,pbstrHelpString,pdwHelpStringContext,pbstrHelpStringDll) )
    ( (This)->lpVtbl -> GetAllCustData(This,pCustData) )
    ( (This)->lpVtbl -> GetAllFuncCustData(This,index,pCustData) )
    ( (This)->lpVtbl -> GetAllParamCustData(This,indexFunc,indexParam,pCustData) )
    ( (This)->lpVtbl -> GetAllVarCustData(This,index,pCustData) )
    ( (This)->lpVtbl -> GetAllImplTypeCustData(This,index,pCustData) )
                HRESULT STDMETHODCALLTYPE ITypeInfo2_RemoteGetDocumentation2_Proxy(
    __RPC__in ITypeInfo2 * This,
               MEMBERID memid,
               LCID lcid,
               DWORD refPtrFlags,
                __RPC__deref_out_opt BSTR *pbstrHelpString,
                __RPC__out DWORD *pdwHelpStringContext,
                __RPC__deref_out_opt BSTR *pbstrHelpStringDll);
void __RPC_STUB ITypeInfo2_RemoteGetDocumentation2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0010_v0_0_s_ifspec;
typedef
enum tagSYSKIND
    {
        SYS_WIN16 = 0,
        SYS_WIN32 = ( SYS_WIN16 + 1 ) ,
        SYS_MAC = ( SYS_WIN32 + 1 ) ,
        SYS_WIN64 = ( SYS_MAC + 1 )
    } SYSKIND;
typedef
enum tagLIBFLAGS
    {
        LIBFLAG_FRESTRICTED = 0x1,
        LIBFLAG_FCONTROL = 0x2,
        LIBFLAG_FHIDDEN = 0x4,
        LIBFLAG_FHASDISKIMAGE = 0x8
    } LIBFLAGS;
typedef __RPC_unique_pointer ITypeLib *LPTYPELIB;
typedef struct tagTLIBATTR
    {
    GUID guid;
    LCID lcid;
    SYSKIND syskind;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    WORD wLibFlags;
    } TLIBATTR;
typedef struct tagTLIBATTR *LPTLIBATTR;
EXTERN_C const IID IID_ITypeLib;
    typedef struct ITypeLibVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITypeLib * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITypeLib * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITypeLib * This);
                      UINT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ITypeLib * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITypeLib * This,
                       UINT index,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoType )(
            __RPC__in ITypeLib * This,
                       UINT index,
                        __RPC__out TYPEKIND *pTKind);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoOfGuid )(
            __RPC__in ITypeLib * This,
                       __RPC__in REFGUID guid,
                        __RPC__deref_out_opt ITypeInfo **ppTinfo);
                      HRESULT ( STDMETHODCALLTYPE *GetLibAttr )(
            ITypeLib * This,
                        TLIBATTR **ppTLibAttr);
        HRESULT ( STDMETHODCALLTYPE *GetTypeComp )(
            __RPC__in ITypeLib * This,
                        __RPC__deref_out_opt ITypeComp **ppTComp);
                      HRESULT ( STDMETHODCALLTYPE *GetDocumentation )(
            ITypeLib * This,
                       INT index,
            _Outptr_opt_ BSTR *pBstrName,
            _Outptr_opt_ BSTR *pBstrDocString,
                        DWORD *pdwHelpContext,
            _Outptr_opt_ BSTR *pBstrHelpFile);
                      HRESULT ( STDMETHODCALLTYPE *IsName )(
            ITypeLib * This,
            __RPC__inout LPOLESTR szNameBuf,
                       ULONG lHashVal,
                        BOOL *pfName);
                      HRESULT ( STDMETHODCALLTYPE *FindName )(
            ITypeLib * This,
            __RPC__inout LPOLESTR szNameBuf,
                       ULONG lHashVal,
                                            ITypeInfo **ppTInfo,
                                            MEMBERID *rgMemId,
                            USHORT *pcFound);
                      void ( STDMETHODCALLTYPE *ReleaseTLibAttr )(
            ITypeLib * This,
                       TLIBATTR *pTLibAttr);
        END_INTERFACE
    } ITypeLibVtbl;
    interface ITypeLib
    {
        CONST_VTBL struct ITypeLibVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This) )
    ( (This)->lpVtbl -> GetTypeInfo(This,index,ppTInfo) )
    ( (This)->lpVtbl -> GetTypeInfoType(This,index,pTKind) )
    ( (This)->lpVtbl -> GetTypeInfoOfGuid(This,guid,ppTinfo) )
    ( (This)->lpVtbl -> GetLibAttr(This,ppTLibAttr) )
    ( (This)->lpVtbl -> GetTypeComp(This,ppTComp) )
    ( (This)->lpVtbl -> GetDocumentation(This,index,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile) )
    ( (This)->lpVtbl -> IsName(This,szNameBuf,lHashVal,pfName) )
    ( (This)->lpVtbl -> FindName(This,szNameBuf,lHashVal,ppTInfo,rgMemId,pcFound) )
    ( (This)->lpVtbl -> ReleaseTLibAttr(This,pTLibAttr) )
                HRESULT STDMETHODCALLTYPE ITypeLib_RemoteGetTypeInfoCount_Proxy(
    __RPC__in ITypeLib * This,
                __RPC__out UINT *pcTInfo);
void __RPC_STUB ITypeLib_RemoteGetTypeInfoCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ITypeLib_RemoteGetLibAttr_Proxy(
    __RPC__in ITypeLib * This,
                __RPC__deref_out_opt LPTLIBATTR *ppTLibAttr,
                __RPC__out CLEANLOCALSTORAGE *pDummy);
void __RPC_STUB ITypeLib_RemoteGetLibAttr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ITypeLib_RemoteGetDocumentation_Proxy(
    __RPC__in ITypeLib * This,
               INT index,
               DWORD refPtrFlags,
                __RPC__deref_out_opt BSTR *pBstrName,
                __RPC__deref_out_opt BSTR *pBstrDocString,
                __RPC__out DWORD *pdwHelpContext,
                __RPC__deref_out_opt BSTR *pBstrHelpFile);
void __RPC_STUB ITypeLib_RemoteGetDocumentation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ITypeLib_RemoteIsName_Proxy(
    __RPC__in ITypeLib * This,
               __RPC__in LPOLESTR szNameBuf,
               ULONG lHashVal,
                __RPC__out BOOL *pfName,
                __RPC__deref_out_opt BSTR *pBstrLibName);
void __RPC_STUB ITypeLib_RemoteIsName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ITypeLib_RemoteFindName_Proxy(
    __RPC__in ITypeLib * This,
               __RPC__in LPOLESTR szNameBuf,
               ULONG lHashVal,
                                    __RPC__out_ecount_part(*pcFound, *pcFound) ITypeInfo **ppTInfo,
                                    __RPC__out_ecount_part(*pcFound, *pcFound) MEMBERID *rgMemId,
                    __RPC__inout USHORT *pcFound,
                __RPC__deref_out_opt BSTR *pBstrLibName);
void __RPC_STUB ITypeLib_RemoteFindName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                        HRESULT STDMETHODCALLTYPE ITypeLib_LocalReleaseTLibAttr_Proxy(
    __RPC__in ITypeLib * This);
void __RPC_STUB ITypeLib_LocalReleaseTLibAttr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0011_v0_0_s_ifspec;
typedef __RPC_unique_pointer ITypeLib2 *LPTYPELIB2;
EXTERN_C const IID IID_ITypeLib2;
    typedef struct ITypeLib2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITypeLib2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITypeLib2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITypeLib2 * This);
                      UINT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ITypeLib2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITypeLib2 * This,
                       UINT index,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoType )(
            __RPC__in ITypeLib2 * This,
                       UINT index,
                        __RPC__out TYPEKIND *pTKind);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoOfGuid )(
            __RPC__in ITypeLib2 * This,
                       __RPC__in REFGUID guid,
                        __RPC__deref_out_opt ITypeInfo **ppTinfo);
                      HRESULT ( STDMETHODCALLTYPE *GetLibAttr )(
            ITypeLib2 * This,
                        TLIBATTR **ppTLibAttr);
        HRESULT ( STDMETHODCALLTYPE *GetTypeComp )(
            __RPC__in ITypeLib2 * This,
                        __RPC__deref_out_opt ITypeComp **ppTComp);
                      HRESULT ( STDMETHODCALLTYPE *GetDocumentation )(
            ITypeLib2 * This,
                       INT index,
            _Outptr_opt_ BSTR *pBstrName,
            _Outptr_opt_ BSTR *pBstrDocString,
                        DWORD *pdwHelpContext,
            _Outptr_opt_ BSTR *pBstrHelpFile);
                      HRESULT ( STDMETHODCALLTYPE *IsName )(
            ITypeLib2 * This,
            __RPC__inout LPOLESTR szNameBuf,
                       ULONG lHashVal,
                        BOOL *pfName);
                      HRESULT ( STDMETHODCALLTYPE *FindName )(
            ITypeLib2 * This,
            __RPC__inout LPOLESTR szNameBuf,
                       ULONG lHashVal,
                                            ITypeInfo **ppTInfo,
                                            MEMBERID *rgMemId,
                            USHORT *pcFound);
                      void ( STDMETHODCALLTYPE *ReleaseTLibAttr )(
            ITypeLib2 * This,
                       TLIBATTR *pTLibAttr);
        HRESULT ( STDMETHODCALLTYPE *GetCustData )(
            __RPC__in ITypeLib2 * This,
                       __RPC__in REFGUID guid,
                        __RPC__out VARIANT *pVarVal);
                      HRESULT ( STDMETHODCALLTYPE *GetLibStatistics )(
            ITypeLib2 * This,
                        ULONG *pcUniqueNames,
                        ULONG *pcchUniqueNames);
                      HRESULT ( STDMETHODCALLTYPE *GetDocumentation2 )(
            ITypeLib2 * This,
                       INT index,
                       LCID lcid,
            _Outptr_opt_ BSTR *pbstrHelpString,
                        DWORD *pdwHelpStringContext,
            _Outptr_opt_ BSTR *pbstrHelpStringDll);
        HRESULT ( STDMETHODCALLTYPE *GetAllCustData )(
            __RPC__in ITypeLib2 * This,
                        __RPC__out CUSTDATA *pCustData);
        END_INTERFACE
    } ITypeLib2Vtbl;
    interface ITypeLib2
    {
        CONST_VTBL struct ITypeLib2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This) )
    ( (This)->lpVtbl -> GetTypeInfo(This,index,ppTInfo) )
    ( (This)->lpVtbl -> GetTypeInfoType(This,index,pTKind) )
    ( (This)->lpVtbl -> GetTypeInfoOfGuid(This,guid,ppTinfo) )
    ( (This)->lpVtbl -> GetLibAttr(This,ppTLibAttr) )
    ( (This)->lpVtbl -> GetTypeComp(This,ppTComp) )
    ( (This)->lpVtbl -> GetDocumentation(This,index,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile) )
    ( (This)->lpVtbl -> IsName(This,szNameBuf,lHashVal,pfName) )
    ( (This)->lpVtbl -> FindName(This,szNameBuf,lHashVal,ppTInfo,rgMemId,pcFound) )
    ( (This)->lpVtbl -> ReleaseTLibAttr(This,pTLibAttr) )
    ( (This)->lpVtbl -> GetCustData(This,guid,pVarVal) )
    ( (This)->lpVtbl -> GetLibStatistics(This,pcUniqueNames,pcchUniqueNames) )
    ( (This)->lpVtbl -> GetDocumentation2(This,index,lcid,pbstrHelpString,pdwHelpStringContext,pbstrHelpStringDll) )
    ( (This)->lpVtbl -> GetAllCustData(This,pCustData) )
                HRESULT STDMETHODCALLTYPE ITypeLib2_RemoteGetLibStatistics_Proxy(
    __RPC__in ITypeLib2 * This,
                __RPC__out ULONG *pcUniqueNames,
                __RPC__out ULONG *pcchUniqueNames);
void __RPC_STUB ITypeLib2_RemoteGetLibStatistics_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ITypeLib2_RemoteGetDocumentation2_Proxy(
    __RPC__in ITypeLib2 * This,
               INT index,
               LCID lcid,
               DWORD refPtrFlags,
                __RPC__deref_out_opt BSTR *pbstrHelpString,
                __RPC__out DWORD *pdwHelpStringContext,
                __RPC__deref_out_opt BSTR *pbstrHelpStringDll);
void __RPC_STUB ITypeLib2_RemoteGetDocumentation2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef ITypeChangeEvents *LPTYPECHANGEEVENTS;
typedef
enum tagCHANGEKIND
    {
        CHANGEKIND_ADDMEMBER = 0,
        CHANGEKIND_DELETEMEMBER = ( CHANGEKIND_ADDMEMBER + 1 ) ,
        CHANGEKIND_SETNAMES = ( CHANGEKIND_DELETEMEMBER + 1 ) ,
        CHANGEKIND_SETDOCUMENTATION = ( CHANGEKIND_SETNAMES + 1 ) ,
        CHANGEKIND_GENERAL = ( CHANGEKIND_SETDOCUMENTATION + 1 ) ,
        CHANGEKIND_INVALIDATE = ( CHANGEKIND_GENERAL + 1 ) ,
        CHANGEKIND_CHANGEFAILED = ( CHANGEKIND_INVALIDATE + 1 ) ,
        CHANGEKIND_MAX = ( CHANGEKIND_CHANGEFAILED + 1 )
    } CHANGEKIND;
EXTERN_C const IID IID_ITypeChangeEvents;
    typedef struct ITypeChangeEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITypeChangeEvents * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITypeChangeEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITypeChangeEvents * This);
        HRESULT ( STDMETHODCALLTYPE *RequestTypeChange )(
            ITypeChangeEvents * This,
                       CHANGEKIND changeKind,
                       ITypeInfo *pTInfoBefore,
            __RPC__in LPOLESTR pStrName,
                        INT *pfCancel);
        HRESULT ( STDMETHODCALLTYPE *AfterTypeChange )(
            ITypeChangeEvents * This,
                       CHANGEKIND changeKind,
                       ITypeInfo *pTInfoAfter,
            __RPC__in LPOLESTR pStrName);
        END_INTERFACE
    } ITypeChangeEventsVtbl;
    interface ITypeChangeEvents
    {
        CONST_VTBL struct ITypeChangeEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RequestTypeChange(This,changeKind,pTInfoBefore,pStrName,pfCancel) )
    ( (This)->lpVtbl -> AfterTypeChange(This,changeKind,pTInfoAfter,pStrName) )
typedef __RPC_unique_pointer IErrorInfo *LPERRORINFO;
EXTERN_C const IID IID_IErrorInfo;
    typedef struct IErrorInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IErrorInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IErrorInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IErrorInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            __RPC__in IErrorInfo * This,
                        __RPC__out GUID *pGUID);
        HRESULT ( STDMETHODCALLTYPE *GetSource )(
            __RPC__in IErrorInfo * This,
                        __RPC__deref_out_opt BSTR *pBstrSource);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in IErrorInfo * This,
                        __RPC__deref_out_opt BSTR *pBstrDescription);
        HRESULT ( STDMETHODCALLTYPE *GetHelpFile )(
            __RPC__in IErrorInfo * This,
                        __RPC__deref_out_opt BSTR *pBstrHelpFile);
        HRESULT ( STDMETHODCALLTYPE *GetHelpContext )(
            __RPC__in IErrorInfo * This,
                        __RPC__out DWORD *pdwHelpContext);
        END_INTERFACE
    } IErrorInfoVtbl;
    interface IErrorInfo
    {
        CONST_VTBL struct IErrorInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetGUID(This,pGUID) )
    ( (This)->lpVtbl -> GetSource(This,pBstrSource) )
    ( (This)->lpVtbl -> GetDescription(This,pBstrDescription) )
    ( (This)->lpVtbl -> GetHelpFile(This,pBstrHelpFile) )
    ( (This)->lpVtbl -> GetHelpContext(This,pdwHelpContext) )
typedef __RPC_unique_pointer ICreateErrorInfo *LPCREATEERRORINFO;
EXTERN_C const IID IID_ICreateErrorInfo;
    typedef struct ICreateErrorInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICreateErrorInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICreateErrorInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICreateErrorInfo * This);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            __RPC__in ICreateErrorInfo * This,
                       __RPC__in REFGUID rguid);
        HRESULT ( STDMETHODCALLTYPE *SetSource )(
            __RPC__in ICreateErrorInfo * This,
                       __RPC__in LPOLESTR szSource);
        HRESULT ( STDMETHODCALLTYPE *SetDescription )(
            __RPC__in ICreateErrorInfo * This,
                       __RPC__in LPOLESTR szDescription);
        HRESULT ( STDMETHODCALLTYPE *SetHelpFile )(
            __RPC__in ICreateErrorInfo * This,
                       __RPC__in LPOLESTR szHelpFile);
        HRESULT ( STDMETHODCALLTYPE *SetHelpContext )(
            __RPC__in ICreateErrorInfo * This,
                       DWORD dwHelpContext);
        END_INTERFACE
    } ICreateErrorInfoVtbl;
    interface ICreateErrorInfo
    {
        CONST_VTBL struct ICreateErrorInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetGUID(This,rguid) )
    ( (This)->lpVtbl -> SetSource(This,szSource) )
    ( (This)->lpVtbl -> SetDescription(This,szDescription) )
    ( (This)->lpVtbl -> SetHelpFile(This,szHelpFile) )
    ( (This)->lpVtbl -> SetHelpContext(This,dwHelpContext) )
typedef __RPC_unique_pointer ISupportErrorInfo *LPSUPPORTERRORINFO;
EXTERN_C const IID IID_ISupportErrorInfo;
    typedef struct ISupportErrorInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISupportErrorInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISupportErrorInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISupportErrorInfo * This);
        HRESULT ( STDMETHODCALLTYPE *InterfaceSupportsErrorInfo )(
            __RPC__in ISupportErrorInfo * This,
                       __RPC__in REFIID riid);
        END_INTERFACE
    } ISupportErrorInfoVtbl;
    interface ISupportErrorInfo
    {
        CONST_VTBL struct ISupportErrorInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InterfaceSupportsErrorInfo(This,riid) )
EXTERN_C const IID IID_ITypeFactory;
    typedef struct ITypeFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITypeFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITypeFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITypeFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateFromTypeInfo )(
            __RPC__in ITypeFactory * This,
                       __RPC__in_opt ITypeInfo *pTypeInfo,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppv);
        END_INTERFACE
    } ITypeFactoryVtbl;
    interface ITypeFactory
    {
        CONST_VTBL struct ITypeFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateFromTypeInfo(This,pTypeInfo,riid,ppv) )
EXTERN_C const IID IID_ITypeMarshal;
    typedef struct ITypeMarshalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITypeMarshal * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITypeMarshal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITypeMarshal * This);
        HRESULT ( STDMETHODCALLTYPE *Size )(
            ITypeMarshal * This,
                       PVOID pvType,
                       DWORD dwDestContext,
                       PVOID pvDestContext,
                        ULONG *pSize);
        HRESULT ( STDMETHODCALLTYPE *Marshal )(
            ITypeMarshal * This,
                       PVOID pvType,
                       DWORD dwDestContext,
                       PVOID pvDestContext,
                       ULONG cbBufferLength,
            _Out_writes_bytes_to_(cbBufferLength, *pcbWritten) BYTE *pBuffer,
            _Out_ ULONG *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Unmarshal )(
            ITypeMarshal * This,
                        PVOID pvType,
                       DWORD dwFlags,
                       ULONG cbBufferLength,
            _In_reads_(cbBufferLength) BYTE *pBuffer,
            _Out_ ULONG *pcbRead);
        HRESULT ( STDMETHODCALLTYPE *Free )(
            ITypeMarshal * This,
                       PVOID pvType);
        END_INTERFACE
    } ITypeMarshalVtbl;
    interface ITypeMarshal
    {
        CONST_VTBL struct ITypeMarshalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Size(This,pvType,dwDestContext,pvDestContext,pSize) )
    ( (This)->lpVtbl -> Marshal(This,pvType,dwDestContext,pvDestContext,cbBufferLength,pBuffer,pcbWritten) )
    ( (This)->lpVtbl -> Unmarshal(This,pvType,dwFlags,cbBufferLength,pBuffer,pcbRead) )
    ( (This)->lpVtbl -> Free(This,pvType) )
typedef IRecordInfo *LPRECORDINFO;
EXTERN_C const IID IID_IRecordInfo;
    typedef struct IRecordInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRecordInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRecordInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRecordInfo * This);
        HRESULT ( STDMETHODCALLTYPE *RecordInit )(
            IRecordInfo * This,
                        PVOID pvNew);
        HRESULT ( STDMETHODCALLTYPE *RecordClear )(
            IRecordInfo * This,
                       PVOID pvExisting);
        HRESULT ( STDMETHODCALLTYPE *RecordCopy )(
            IRecordInfo * This,
                       PVOID pvExisting,
                        PVOID pvNew);
        HRESULT ( STDMETHODCALLTYPE *GetGuid )(
            IRecordInfo * This,
                        GUID *pguid);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IRecordInfo * This,
            __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            IRecordInfo * This,
                        ULONG *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IRecordInfo * This,
                        ITypeInfo **ppTypeInfo);
        HRESULT ( STDMETHODCALLTYPE *GetField )(
            IRecordInfo * This,
                       PVOID pvData,
                       LPCOLESTR szFieldName,
                        VARIANT *pvarField);
        HRESULT ( STDMETHODCALLTYPE *GetFieldNoCopy )(
            IRecordInfo * This,
                       PVOID pvData,
                       LPCOLESTR szFieldName,
                        VARIANT *pvarField,
                        PVOID *ppvDataCArray);
        HRESULT ( STDMETHODCALLTYPE *PutField )(
            IRecordInfo * This,
                       ULONG wFlags,
                            PVOID pvData,
                       LPCOLESTR szFieldName,
                       VARIANT *pvarField);
        HRESULT ( STDMETHODCALLTYPE *PutFieldNoCopy )(
            IRecordInfo * This,
                       ULONG wFlags,
                            PVOID pvData,
                       LPCOLESTR szFieldName,
                       VARIANT *pvarField);
        HRESULT ( STDMETHODCALLTYPE *GetFieldNames )(
            IRecordInfo * This,
                            ULONG *pcNames,
            __RPC__out_ecount_part(*pcNames, *pcNames) BSTR *rgBstrNames);
        BOOL ( STDMETHODCALLTYPE *IsMatchingType )(
            IRecordInfo * This,
                       IRecordInfo *pRecordInfo);
        PVOID ( STDMETHODCALLTYPE *RecordCreate )(
            IRecordInfo * This);
        HRESULT ( STDMETHODCALLTYPE *RecordCreateCopy )(
            IRecordInfo * This,
                       PVOID pvSource,
                        PVOID *ppvDest);
        HRESULT ( STDMETHODCALLTYPE *RecordDestroy )(
            IRecordInfo * This,
                       PVOID pvRecord);
        END_INTERFACE
    } IRecordInfoVtbl;
    interface IRecordInfo
    {
        CONST_VTBL struct IRecordInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RecordInit(This,pvNew) )
    ( (This)->lpVtbl -> RecordClear(This,pvExisting) )
    ( (This)->lpVtbl -> RecordCopy(This,pvExisting,pvNew) )
    ( (This)->lpVtbl -> GetGuid(This,pguid) )
    ( (This)->lpVtbl -> GetName(This,pbstrName) )
    ( (This)->lpVtbl -> GetSize(This,pcbSize) )
    ( (This)->lpVtbl -> GetTypeInfo(This,ppTypeInfo) )
    ( (This)->lpVtbl -> GetField(This,pvData,szFieldName,pvarField) )
    ( (This)->lpVtbl -> GetFieldNoCopy(This,pvData,szFieldName,pvarField,ppvDataCArray) )
    ( (This)->lpVtbl -> PutField(This,wFlags,pvData,szFieldName,pvarField) )
    ( (This)->lpVtbl -> PutFieldNoCopy(This,wFlags,pvData,szFieldName,pvarField) )
    ( (This)->lpVtbl -> GetFieldNames(This,pcNames,rgBstrNames) )
    ( (This)->lpVtbl -> IsMatchingType(This,pRecordInfo) )
    ( (This)->lpVtbl -> RecordCreate(This) )
    ( (This)->lpVtbl -> RecordCreateCopy(This,pvSource,ppvDest) )
    ( (This)->lpVtbl -> RecordDestroy(This,pvRecord) )
typedef IErrorLog *LPERRORLOG;
EXTERN_C const IID IID_IErrorLog;
    typedef struct IErrorLogVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IErrorLog * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IErrorLog * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IErrorLog * This);
        HRESULT ( STDMETHODCALLTYPE *AddError )(
            __RPC__in IErrorLog * This,
                       __RPC__in LPCOLESTR pszPropName,
                       __RPC__in EXCEPINFO *pExcepInfo);
        END_INTERFACE
    } IErrorLogVtbl;
    interface IErrorLog
    {
        CONST_VTBL struct IErrorLogVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddError(This,pszPropName,pExcepInfo) )
typedef IPropertyBag *LPPROPERTYBAG;
EXTERN_C const IID IID_IPropertyBag;
    typedef struct IPropertyBagVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyBag * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyBag * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyBag * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            IPropertyBag * This,
                       LPCOLESTR pszPropName,
                            VARIANT *pVar,
                               IErrorLog *pErrorLog);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in IPropertyBag * This,
                       __RPC__in LPCOLESTR pszPropName,
                       __RPC__in VARIANT *pVar);
        END_INTERFACE
    } IPropertyBagVtbl;
    interface IPropertyBag
    {
        CONST_VTBL struct IPropertyBagVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) )
    ( (This)->lpVtbl -> Write(This,pszPropName,pVar) )
                HRESULT STDMETHODCALLTYPE IPropertyBag_RemoteRead_Proxy(
    __RPC__in IPropertyBag * This,
               __RPC__in LPCOLESTR pszPropName,
                __RPC__out VARIANT *pVar,
                       __RPC__in_opt IErrorLog *pErrorLog,
               DWORD varType,
               __RPC__in_opt IUnknown *pUnkObj);
void __RPC_STUB IPropertyBag_RemoteRead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_ITypeLibRegistrationReader;
    typedef struct ITypeLibRegistrationReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITypeLibRegistrationReader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITypeLibRegistrationReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITypeLibRegistrationReader * This);
        HRESULT ( STDMETHODCALLTYPE *EnumTypeLibRegistrations )(
            ITypeLibRegistrationReader * This,
                        IEnumUnknown **ppEnumUnknown);
        END_INTERFACE
    } ITypeLibRegistrationReaderVtbl;
    interface ITypeLibRegistrationReader
    {
        CONST_VTBL struct ITypeLibRegistrationReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumTypeLibRegistrations(This,ppEnumUnknown) )
EXTERN_C const IID IID_ITypeLibRegistration;
    typedef struct ITypeLibRegistrationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITypeLibRegistration * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITypeLibRegistration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITypeLibRegistration * This);
        HRESULT ( STDMETHODCALLTYPE *GetGuid )(
            ITypeLibRegistration * This,
                        GUID *pGuid);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            ITypeLibRegistration * This,
                        BSTR *pVersion);
        HRESULT ( STDMETHODCALLTYPE *GetLcid )(
            ITypeLibRegistration * This,
                        LCID *pLcid);
        HRESULT ( STDMETHODCALLTYPE *GetWin32Path )(
            ITypeLibRegistration * This,
                        BSTR *pWin32Path);
        HRESULT ( STDMETHODCALLTYPE *GetWin64Path )(
            ITypeLibRegistration * This,
                        BSTR *pWin64Path);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            ITypeLibRegistration * This,
                        BSTR *pDisplayName);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            ITypeLibRegistration * This,
                        DWORD *pFlags);
        HRESULT ( STDMETHODCALLTYPE *GetHelpDir )(
            ITypeLibRegistration * This,
                        BSTR *pHelpDir);
        END_INTERFACE
    } ITypeLibRegistrationVtbl;
    interface ITypeLibRegistration
    {
        CONST_VTBL struct ITypeLibRegistrationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetGuid(This,pGuid) )
    ( (This)->lpVtbl -> GetVersion(This,pVersion) )
    ( (This)->lpVtbl -> GetLcid(This,pLcid) )
    ( (This)->lpVtbl -> GetWin32Path(This,pWin32Path) )
    ( (This)->lpVtbl -> GetWin64Path(This,pWin64Path) )
    ( (This)->lpVtbl -> GetDisplayName(This,pDisplayName) )
    ( (This)->lpVtbl -> GetFlags(This,pFlags) )
    ( (This)->lpVtbl -> GetHelpDir(This,pHelpDir) )
EXTERN_C const CLSID CLSID_TypeLibRegistrationReader;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0023_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER CLEANLOCALSTORAGE_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in CLEANLOCALSTORAGE * );
unsigned char * __RPC_USER CLEANLOCALSTORAGE_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in CLEANLOCALSTORAGE * );
unsigned char * __RPC_USER CLEANLOCALSTORAGE_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out CLEANLOCALSTORAGE * );
void __RPC_USER CLEANLOCALSTORAGE_UserFree( __RPC__in unsigned long *, __RPC__in CLEANLOCALSTORAGE * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER CLEANLOCALSTORAGE_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in CLEANLOCALSTORAGE * );
unsigned char * __RPC_USER CLEANLOCALSTORAGE_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in CLEANLOCALSTORAGE * );
unsigned char * __RPC_USER CLEANLOCALSTORAGE_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out CLEANLOCALSTORAGE * );
void __RPC_USER CLEANLOCALSTORAGE_UserFree64( __RPC__in unsigned long *, __RPC__in CLEANLOCALSTORAGE * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
              HRESULT STDMETHODCALLTYPE IDispatch_Invoke_Proxy(
    IDispatch * This,
    _In_ DISPID dispIdMember,
    _In_ REFIID riid,
    _In_ LCID lcid,
    _In_ WORD wFlags,
    _In_ DISPPARAMS *pDispParams,
    _Out_opt_ VARIANT *pVarResult,
    _Out_opt_ EXCEPINFO *pExcepInfo,
    _Out_opt_ UINT *puArgErr);
                HRESULT STDMETHODCALLTYPE IDispatch_Invoke_Stub(
    __RPC__in IDispatch * This,
               DISPID dispIdMember,
               __RPC__in REFIID riid,
               LCID lcid,
               DWORD dwFlags,
               __RPC__in DISPPARAMS *pDispParams,
                __RPC__out VARIANT *pVarResult,
                __RPC__out EXCEPINFO *pExcepInfo,
                __RPC__out UINT *pArgErr,
               UINT cVarRef,
                        __RPC__in_ecount_full(cVarRef) UINT *rgVarRefIdx,
                             __RPC__inout_ecount_full(cVarRef) VARIANTARG *rgVarRef);
              HRESULT STDMETHODCALLTYPE IEnumVARIANT_Next_Proxy(
    IEnumVARIANT * This,
               ULONG celt,
                                    VARIANT *rgVar,
                ULONG *pCeltFetched);
                HRESULT STDMETHODCALLTYPE IEnumVARIANT_Next_Stub(
    __RPC__in IEnumVARIANT * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pCeltFetched) VARIANT *rgVar,
                __RPC__out ULONG *pCeltFetched);
              HRESULT STDMETHODCALLTYPE ITypeComp_Bind_Proxy(
    ITypeComp * This,
    __RPC__in LPOLESTR szName,
               ULONG lHashVal,
               WORD wFlags,
                ITypeInfo **ppTInfo,
                DESCKIND *pDescKind,
                BINDPTR *pBindPtr);
                HRESULT STDMETHODCALLTYPE ITypeComp_Bind_Stub(
    __RPC__in ITypeComp * This,
               __RPC__in LPOLESTR szName,
               ULONG lHashVal,
               WORD wFlags,
                __RPC__deref_out_opt ITypeInfo **ppTInfo,
                __RPC__out DESCKIND *pDescKind,
                __RPC__deref_out_opt LPFUNCDESC *ppFuncDesc,
                __RPC__deref_out_opt LPVARDESC *ppVarDesc,
                __RPC__deref_out_opt ITypeComp **ppTypeComp,
                __RPC__out CLEANLOCALSTORAGE *pDummy);
              HRESULT STDMETHODCALLTYPE ITypeComp_BindType_Proxy(
    ITypeComp * This,
    __RPC__in LPOLESTR szName,
               ULONG lHashVal,
                ITypeInfo **ppTInfo,
                ITypeComp **ppTComp);
                HRESULT STDMETHODCALLTYPE ITypeComp_BindType_Stub(
    __RPC__in ITypeComp * This,
               __RPC__in LPOLESTR szName,
               ULONG lHashVal,
                __RPC__deref_out_opt ITypeInfo **ppTInfo);
              HRESULT STDMETHODCALLTYPE ITypeInfo_GetTypeAttr_Proxy(
    ITypeInfo * This,
                TYPEATTR **ppTypeAttr);
                HRESULT STDMETHODCALLTYPE ITypeInfo_GetTypeAttr_Stub(
    __RPC__in ITypeInfo * This,
                __RPC__deref_out_opt LPTYPEATTR *ppTypeAttr,
                __RPC__out CLEANLOCALSTORAGE *pDummy);
              HRESULT STDMETHODCALLTYPE ITypeInfo_GetFuncDesc_Proxy(
    ITypeInfo * This,
               UINT index,
                FUNCDESC **ppFuncDesc);
                HRESULT STDMETHODCALLTYPE ITypeInfo_GetFuncDesc_Stub(
    __RPC__in ITypeInfo * This,
               UINT index,
                __RPC__deref_out_opt LPFUNCDESC *ppFuncDesc,
                __RPC__out CLEANLOCALSTORAGE *pDummy);
              HRESULT STDMETHODCALLTYPE ITypeInfo_GetVarDesc_Proxy(
    ITypeInfo * This,
               UINT index,
                VARDESC **ppVarDesc);
                HRESULT STDMETHODCALLTYPE ITypeInfo_GetVarDesc_Stub(
    __RPC__in ITypeInfo * This,
               UINT index,
                __RPC__deref_out_opt LPVARDESC *ppVarDesc,
                __RPC__out CLEANLOCALSTORAGE *pDummy);
              HRESULT STDMETHODCALLTYPE ITypeInfo_GetNames_Proxy(
    ITypeInfo * This,
               MEMBERID memid,
    __RPC__out_ecount_part(cMaxNames, *pcNames) BSTR *rgBstrNames,
               UINT cMaxNames,
    __RPC__out UINT *pcNames);
                HRESULT STDMETHODCALLTYPE ITypeInfo_GetNames_Stub(
    __RPC__in ITypeInfo * This,
               MEMBERID memid,
                                    __RPC__out_ecount_part(cMaxNames, *pcNames) BSTR *rgBstrNames,
               UINT cMaxNames,
                __RPC__out UINT *pcNames);
              HRESULT STDMETHODCALLTYPE ITypeInfo_GetIDsOfNames_Proxy(
    ITypeInfo * This,
    __RPC__in_ecount(cNames) LPOLESTR *rgszNames,
               UINT cNames,
                         MEMBERID *pMemId);
                        HRESULT STDMETHODCALLTYPE ITypeInfo_GetIDsOfNames_Stub(
    __RPC__in ITypeInfo * This);
              HRESULT STDMETHODCALLTYPE ITypeInfo_Invoke_Proxy(
    ITypeInfo * This,
               PVOID pvInstance,
               MEMBERID memid,
               WORD wFlags,
                    DISPPARAMS *pDispParams,
                VARIANT *pVarResult,
                EXCEPINFO *pExcepInfo,
                UINT *puArgErr);
                        HRESULT STDMETHODCALLTYPE ITypeInfo_Invoke_Stub(
    __RPC__in ITypeInfo * This);
              HRESULT STDMETHODCALLTYPE ITypeInfo_GetDocumentation_Proxy(
    ITypeInfo * This,
               MEMBERID memid,
    _Outptr_opt_ BSTR *pBstrName,
    _Outptr_opt_ BSTR *pBstrDocString,
                DWORD *pdwHelpContext,
    _Outptr_opt_ BSTR *pBstrHelpFile);
                HRESULT STDMETHODCALLTYPE ITypeInfo_GetDocumentation_Stub(
    __RPC__in ITypeInfo * This,
               MEMBERID memid,
               DWORD refPtrFlags,
                __RPC__deref_out_opt BSTR *pBstrName,
                __RPC__deref_out_opt BSTR *pBstrDocString,
                __RPC__out DWORD *pdwHelpContext,
                __RPC__deref_out_opt BSTR *pBstrHelpFile);
              HRESULT STDMETHODCALLTYPE ITypeInfo_GetDllEntry_Proxy(
    ITypeInfo * This,
               MEMBERID memid,
               INVOKEKIND invKind,
    _Outptr_opt_ BSTR *pBstrDllName,
    _Outptr_opt_ BSTR *pBstrName,
                WORD *pwOrdinal);
                HRESULT STDMETHODCALLTYPE ITypeInfo_GetDllEntry_Stub(
    __RPC__in ITypeInfo * This,
               MEMBERID memid,
               INVOKEKIND invKind,
               DWORD refPtrFlags,
                __RPC__deref_out_opt BSTR *pBstrDllName,
                __RPC__deref_out_opt BSTR *pBstrName,
                __RPC__out WORD *pwOrdinal);
              HRESULT STDMETHODCALLTYPE ITypeInfo_AddressOfMember_Proxy(
    ITypeInfo * This,
               MEMBERID memid,
               INVOKEKIND invKind,
                PVOID *ppv);
                        HRESULT STDMETHODCALLTYPE ITypeInfo_AddressOfMember_Stub(
    __RPC__in ITypeInfo * This);
              HRESULT STDMETHODCALLTYPE ITypeInfo_CreateInstance_Proxy(
    ITypeInfo * This,
               IUnknown *pUnkOuter,
               REFIID riid,
                        PVOID *ppvObj);
                HRESULT STDMETHODCALLTYPE ITypeInfo_CreateInstance_Stub(
    __RPC__in ITypeInfo * This,
               __RPC__in REFIID riid,
                        __RPC__deref_out_opt IUnknown **ppvObj);
              HRESULT STDMETHODCALLTYPE ITypeInfo_GetContainingTypeLib_Proxy(
    ITypeInfo * This,
                ITypeLib **ppTLib,
                UINT *pIndex);
                HRESULT STDMETHODCALLTYPE ITypeInfo_GetContainingTypeLib_Stub(
    __RPC__in ITypeInfo * This,
                __RPC__deref_out_opt ITypeLib **ppTLib,
                __RPC__out UINT *pIndex);
              void STDMETHODCALLTYPE ITypeInfo_ReleaseTypeAttr_Proxy(
    ITypeInfo * This,
               TYPEATTR *pTypeAttr);
                        HRESULT STDMETHODCALLTYPE ITypeInfo_ReleaseTypeAttr_Stub(
    __RPC__in ITypeInfo * This);
              void STDMETHODCALLTYPE ITypeInfo_ReleaseFuncDesc_Proxy(
    ITypeInfo * This,
               FUNCDESC *pFuncDesc);
                        HRESULT STDMETHODCALLTYPE ITypeInfo_ReleaseFuncDesc_Stub(
    __RPC__in ITypeInfo * This);
              void STDMETHODCALLTYPE ITypeInfo_ReleaseVarDesc_Proxy(
    ITypeInfo * This,
               VARDESC *pVarDesc);
                        HRESULT STDMETHODCALLTYPE ITypeInfo_ReleaseVarDesc_Stub(
    __RPC__in ITypeInfo * This);
              HRESULT STDMETHODCALLTYPE ITypeInfo2_GetDocumentation2_Proxy(
    ITypeInfo2 * This,
               MEMBERID memid,
               LCID lcid,
    _Outptr_opt_ BSTR *pbstrHelpString,
                DWORD *pdwHelpStringContext,
    _Outptr_opt_ BSTR *pbstrHelpStringDll);
                HRESULT STDMETHODCALLTYPE ITypeInfo2_GetDocumentation2_Stub(
    __RPC__in ITypeInfo2 * This,
               MEMBERID memid,
               LCID lcid,
               DWORD refPtrFlags,
                __RPC__deref_out_opt BSTR *pbstrHelpString,
                __RPC__out DWORD *pdwHelpStringContext,
                __RPC__deref_out_opt BSTR *pbstrHelpStringDll);
              UINT STDMETHODCALLTYPE ITypeLib_GetTypeInfoCount_Proxy(
    ITypeLib * This);
                HRESULT STDMETHODCALLTYPE ITypeLib_GetTypeInfoCount_Stub(
    __RPC__in ITypeLib * This,
                __RPC__out UINT *pcTInfo);
              HRESULT STDMETHODCALLTYPE ITypeLib_GetLibAttr_Proxy(
    ITypeLib * This,
                TLIBATTR **ppTLibAttr);
                HRESULT STDMETHODCALLTYPE ITypeLib_GetLibAttr_Stub(
    __RPC__in ITypeLib * This,
                __RPC__deref_out_opt LPTLIBATTR *ppTLibAttr,
                __RPC__out CLEANLOCALSTORAGE *pDummy);
              HRESULT STDMETHODCALLTYPE ITypeLib_GetDocumentation_Proxy(
    ITypeLib * This,
               INT index,
    _Outptr_opt_ BSTR *pBstrName,
    _Outptr_opt_ BSTR *pBstrDocString,
                DWORD *pdwHelpContext,
    _Outptr_opt_ BSTR *pBstrHelpFile);
                HRESULT STDMETHODCALLTYPE ITypeLib_GetDocumentation_Stub(
    __RPC__in ITypeLib * This,
               INT index,
               DWORD refPtrFlags,
                __RPC__deref_out_opt BSTR *pBstrName,
                __RPC__deref_out_opt BSTR *pBstrDocString,
                __RPC__out DWORD *pdwHelpContext,
                __RPC__deref_out_opt BSTR *pBstrHelpFile);
              HRESULT STDMETHODCALLTYPE ITypeLib_IsName_Proxy(
    ITypeLib * This,
    __RPC__inout LPOLESTR szNameBuf,
               ULONG lHashVal,
                BOOL *pfName);
                HRESULT STDMETHODCALLTYPE ITypeLib_IsName_Stub(
    __RPC__in ITypeLib * This,
               __RPC__in LPOLESTR szNameBuf,
               ULONG lHashVal,
                __RPC__out BOOL *pfName,
                __RPC__deref_out_opt BSTR *pBstrLibName);
              HRESULT STDMETHODCALLTYPE ITypeLib_FindName_Proxy(
    ITypeLib * This,
    __RPC__inout LPOLESTR szNameBuf,
               ULONG lHashVal,
                                    ITypeInfo **ppTInfo,
                                    MEMBERID *rgMemId,
                    USHORT *pcFound);
                HRESULT STDMETHODCALLTYPE ITypeLib_FindName_Stub(
    __RPC__in ITypeLib * This,
               __RPC__in LPOLESTR szNameBuf,
               ULONG lHashVal,
                                    __RPC__out_ecount_part(*pcFound, *pcFound) ITypeInfo **ppTInfo,
                                    __RPC__out_ecount_part(*pcFound, *pcFound) MEMBERID *rgMemId,
                    __RPC__inout USHORT *pcFound,
                __RPC__deref_out_opt BSTR *pBstrLibName);
              void STDMETHODCALLTYPE ITypeLib_ReleaseTLibAttr_Proxy(
    ITypeLib * This,
               TLIBATTR *pTLibAttr);
                        HRESULT STDMETHODCALLTYPE ITypeLib_ReleaseTLibAttr_Stub(
    __RPC__in ITypeLib * This);
              HRESULT STDMETHODCALLTYPE ITypeLib2_GetLibStatistics_Proxy(
    ITypeLib2 * This,
                ULONG *pcUniqueNames,
                ULONG *pcchUniqueNames);
                HRESULT STDMETHODCALLTYPE ITypeLib2_GetLibStatistics_Stub(
    __RPC__in ITypeLib2 * This,
                __RPC__out ULONG *pcUniqueNames,
                __RPC__out ULONG *pcchUniqueNames);
              HRESULT STDMETHODCALLTYPE ITypeLib2_GetDocumentation2_Proxy(
    ITypeLib2 * This,
               INT index,
               LCID lcid,
    _Outptr_opt_ BSTR *pbstrHelpString,
                DWORD *pdwHelpStringContext,
    _Outptr_opt_ BSTR *pbstrHelpStringDll);
                HRESULT STDMETHODCALLTYPE ITypeLib2_GetDocumentation2_Stub(
    __RPC__in ITypeLib2 * This,
               INT index,
               LCID lcid,
               DWORD refPtrFlags,
                __RPC__deref_out_opt BSTR *pbstrHelpString,
                __RPC__out DWORD *pdwHelpStringContext,
                __RPC__deref_out_opt BSTR *pbstrHelpStringDll);
              HRESULT STDMETHODCALLTYPE IPropertyBag_Read_Proxy(
    IPropertyBag * This,
               LPCOLESTR pszPropName,
                    VARIANT *pVar,
                       IErrorLog *pErrorLog);
                HRESULT STDMETHODCALLTYPE IPropertyBag_Read_Stub(
    __RPC__in IPropertyBag * This,
               __RPC__in LPCOLESTR pszPropName,
                __RPC__out VARIANT *pVar,
                       __RPC__in_opt IErrorLog *pErrorLog,
               DWORD varType,
               __RPC__in_opt IUnknown *pUnkObj);
}
