#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IBootOptions IBootOptions;
typedef interface IProgressItem IProgressItem;
typedef interface IEnumProgressItems IEnumProgressItems;
typedef interface IProgressItems IProgressItems;
typedef interface IFileSystemImageResult IFileSystemImageResult;
typedef interface IFileSystemImageResult2 IFileSystemImageResult2;
typedef interface IFsiItem IFsiItem;
typedef interface IEnumFsiItems IEnumFsiItems;
typedef interface IFsiFileItem IFsiFileItem;
typedef interface IFsiFileItem2 IFsiFileItem2;
typedef interface IFsiNamedStreams IFsiNamedStreams;
typedef interface IFsiDirectoryItem IFsiDirectoryItem;
typedef interface IFsiDirectoryItem2 IFsiDirectoryItem2;
typedef interface IFileSystemImage IFileSystemImage;
typedef interface IFileSystemImage2 IFileSystemImage2;
typedef interface IFileSystemImage3 IFileSystemImage3;
typedef interface DFileSystemImageEvents DFileSystemImageEvents;
typedef interface DFileSystemImageImportEvents DFileSystemImageImportEvents;
typedef interface IIsoImageManager IIsoImageManager;
typedef class BootOptions BootOptions;
typedef class FsiStream FsiStream;
typedef class FileSystemImageResult FileSystemImageResult;
typedef class ProgressItem ProgressItem;
typedef class EnumProgressItems EnumProgressItems;
typedef class ProgressItems ProgressItems;
typedef class FsiDirectoryItem FsiDirectoryItem;
typedef class FsiFileItem FsiFileItem;
typedef class EnumFsiItems EnumFsiItems;
typedef class FsiNamedStreams FsiNamedStreams;
typedef class MsftFileSystemImage MsftFileSystemImage;
typedef class MsftIsoImageManager MsftIsoImageManager;
typedef class BlockRange BlockRange;
typedef class BlockRangeList BlockRangeList;
#include "oaidl.h"
#include "ocidl.h"
#include "imapi2.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum FsiItemType
    {
        FsiItemNotFound = 0,
        FsiItemDirectory = 1,
        FsiItemFile = 2
    } FsiItemType;
typedef
enum FsiFileSystems
    {
        FsiFileSystemNone = 0,
        FsiFileSystemISO9660 = 1,
        FsiFileSystemJoliet = 2,
        FsiFileSystemUDF = 4,
        FsiFileSystemUnknown = 0x40000000
    } FsiFileSystems;
typedef
enum EmulationType
    {
        EmulationNone = 0,
        Emulation12MFloppy = 1,
        Emulation144MFloppy = 2,
        Emulation288MFloppy = 3,
        EmulationHardDisk = 4
    } EmulationType;
typedef
enum PlatformId
    {
        PlatformX86 = 0,
        PlatformPowerPC = 1,
        PlatformMac = 2,
        PlatformEFI = 0xef
    } PlatformId;
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IBootOptions;
    typedef struct IBootOptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBootOptions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBootOptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBootOptions * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IBootOptions * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IBootOptions * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IBootOptions * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IBootOptions * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_BootImage )(
            __RPC__in IBootOptions * This,
                                __RPC__deref_out_opt IStream **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Manufacturer )(
            __RPC__in IBootOptions * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Manufacturer )(
            __RPC__in IBootOptions * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlatformId )(
            __RPC__in IBootOptions * This,
                                __RPC__out PlatformId *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_PlatformId )(
            __RPC__in IBootOptions * This,
                       PlatformId newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Emulation )(
            __RPC__in IBootOptions * This,
                                __RPC__out EmulationType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Emulation )(
            __RPC__in IBootOptions * This,
                       EmulationType newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ImageSize )(
            __RPC__in IBootOptions * This,
                                __RPC__out ULONG *pVal);
                               HRESULT ( STDMETHODCALLTYPE *AssignBootImage )(
            __RPC__in IBootOptions * This,
                       __RPC__in_opt IStream *newVal);
        END_INTERFACE
    } IBootOptionsVtbl;
    interface IBootOptions
    {
        CONST_VTBL struct IBootOptionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_BootImage(This,pVal) )
    ( (This)->lpVtbl -> get_Manufacturer(This,pVal) )
    ( (This)->lpVtbl -> put_Manufacturer(This,newVal) )
    ( (This)->lpVtbl -> get_PlatformId(This,pVal) )
    ( (This)->lpVtbl -> put_PlatformId(This,newVal) )
    ( (This)->lpVtbl -> get_Emulation(This,pVal) )
    ( (This)->lpVtbl -> put_Emulation(This,newVal) )
    ( (This)->lpVtbl -> get_ImageSize(This,pVal) )
    ( (This)->lpVtbl -> AssignBootImage(This,newVal) )
EXTERN_C const IID IID_IProgressItem;
    typedef struct IProgressItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProgressItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProgressItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProgressItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IProgressItem * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IProgressItem * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IProgressItem * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IProgressItem * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IProgressItem * This,
                                __RPC__deref_out_opt BSTR *desc);
                                        HRESULT ( STDMETHODCALLTYPE *get_FirstBlock )(
            __RPC__in IProgressItem * This,
                                __RPC__out ULONG *block);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastBlock )(
            __RPC__in IProgressItem * This,
                                __RPC__out ULONG *block);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockCount )(
            __RPC__in IProgressItem * This,
                                __RPC__out ULONG *blocks);
        END_INTERFACE
    } IProgressItemVtbl;
    interface IProgressItem
    {
        CONST_VTBL struct IProgressItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Description(This,desc) )
    ( (This)->lpVtbl -> get_FirstBlock(This,block) )
    ( (This)->lpVtbl -> get_LastBlock(This,block) )
    ( (This)->lpVtbl -> get_BlockCount(This,blocks) )
EXTERN_C const IID IID_IEnumProgressItems;
    typedef struct IEnumProgressItemsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumProgressItems * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumProgressItems * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumProgressItems * This);
                                  HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumProgressItems * This,
                       ULONG celt,
                                 IProgressItem **rgelt,
                        ULONG *pceltFetched);
                           HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumProgressItems * This,
                       ULONG celt);
                           HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumProgressItems * This);
                           HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumProgressItems * This,
                        __RPC__deref_out_opt IEnumProgressItems **ppEnum);
        END_INTERFACE
    } IEnumProgressItemsVtbl;
    interface IEnumProgressItems
    {
        CONST_VTBL struct IEnumProgressItemsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
                            HRESULT STDMETHODCALLTYPE IEnumProgressItems_RemoteNext_Proxy(
    __RPC__in IEnumProgressItems * This,
                      __RPC__in_range(1,0x7fffffff) ULONG celt,
                         __RPC__out_ecount_full(celt) IProgressItem **rgelt,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumProgressItems_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IProgressItems;
    typedef struct IProgressItemsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProgressItems * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProgressItems * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProgressItems * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IProgressItems * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IProgressItems * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IProgressItems * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IProgressItems * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IProgressItems * This,
                                __RPC__deref_out_opt IEnumVARIANT **NewEnum);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IProgressItems * This,
                       long Index,
                                __RPC__deref_out_opt IProgressItem **item);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IProgressItems * This,
                                __RPC__out long *Count);
                               HRESULT ( STDMETHODCALLTYPE *ProgressItemFromBlock )(
            __RPC__in IProgressItems * This,
                       ULONG block,
                                __RPC__deref_out_opt IProgressItem **item);
                               HRESULT ( STDMETHODCALLTYPE *ProgressItemFromDescription )(
            __RPC__in IProgressItems * This,
                       __RPC__in BSTR description,
                                __RPC__deref_out_opt IProgressItem **item);
                                                            HRESULT ( STDMETHODCALLTYPE *get_EnumProgressItems )(
            __RPC__in IProgressItems * This,
                                __RPC__deref_out_opt IEnumProgressItems **NewEnum);
        END_INTERFACE
    } IProgressItemsVtbl;
    interface IProgressItems
    {
        CONST_VTBL struct IProgressItemsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,NewEnum) )
    ( (This)->lpVtbl -> get_Item(This,Index,item) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> ProgressItemFromBlock(This,block,item) )
    ( (This)->lpVtbl -> ProgressItemFromDescription(This,description,item) )
    ( (This)->lpVtbl -> get_EnumProgressItems(This,NewEnum) )
EXTERN_C const IID IID_IFileSystemImageResult;
    typedef struct IFileSystemImageResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFileSystemImageResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFileSystemImageResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFileSystemImageResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFileSystemImageResult * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFileSystemImageResult * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFileSystemImageResult * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFileSystemImageResult * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ImageStream )(
            __RPC__in IFileSystemImageResult * This,
                                __RPC__deref_out_opt IStream **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProgressItems )(
            __RPC__in IFileSystemImageResult * This,
                                __RPC__deref_out_opt IProgressItems **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalBlocks )(
            __RPC__in IFileSystemImageResult * This,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockSize )(
            __RPC__in IFileSystemImageResult * This,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DiscId )(
            __RPC__in IFileSystemImageResult * This,
                                __RPC__deref_out_opt BSTR *pVal);
        END_INTERFACE
    } IFileSystemImageResultVtbl;
    interface IFileSystemImageResult
    {
        CONST_VTBL struct IFileSystemImageResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ImageStream(This,pVal) )
    ( (This)->lpVtbl -> get_ProgressItems(This,pVal) )
    ( (This)->lpVtbl -> get_TotalBlocks(This,pVal) )
    ( (This)->lpVtbl -> get_BlockSize(This,pVal) )
    ( (This)->lpVtbl -> get_DiscId(This,pVal) )
EXTERN_C const IID IID_IFileSystemImageResult2;
    typedef struct IFileSystemImageResult2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFileSystemImageResult2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFileSystemImageResult2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFileSystemImageResult2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFileSystemImageResult2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFileSystemImageResult2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFileSystemImageResult2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFileSystemImageResult2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ImageStream )(
            __RPC__in IFileSystemImageResult2 * This,
                                __RPC__deref_out_opt IStream **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProgressItems )(
            __RPC__in IFileSystemImageResult2 * This,
                                __RPC__deref_out_opt IProgressItems **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalBlocks )(
            __RPC__in IFileSystemImageResult2 * This,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockSize )(
            __RPC__in IFileSystemImageResult2 * This,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DiscId )(
            __RPC__in IFileSystemImageResult2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModifiedBlocks )(
            __RPC__in IFileSystemImageResult2 * This,
                                     __RPC__deref_out_opt IBlockRangeList **pVal);
        END_INTERFACE
    } IFileSystemImageResult2Vtbl;
    interface IFileSystemImageResult2
    {
        CONST_VTBL struct IFileSystemImageResult2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ImageStream(This,pVal) )
    ( (This)->lpVtbl -> get_ProgressItems(This,pVal) )
    ( (This)->lpVtbl -> get_TotalBlocks(This,pVal) )
    ( (This)->lpVtbl -> get_BlockSize(This,pVal) )
    ( (This)->lpVtbl -> get_DiscId(This,pVal) )
    ( (This)->lpVtbl -> get_ModifiedBlocks(This,pVal) )
EXTERN_C const IID IID_IFsiItem;
    typedef struct IFsiItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsiItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsiItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsiItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsiItem * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsiItem * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsiItem * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsiItem * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsiItem * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FullPath )(
            __RPC__in IFsiItem * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CreationTime )(
            __RPC__in IFsiItem * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CreationTime )(
            __RPC__in IFsiItem * This,
                       DATE newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastAccessedTime )(
            __RPC__in IFsiItem * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LastAccessedTime )(
            __RPC__in IFsiItem * This,
                       DATE newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastModifiedTime )(
            __RPC__in IFsiItem * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LastModifiedTime )(
            __RPC__in IFsiItem * This,
                       DATE newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
            __RPC__in IFsiItem * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
            __RPC__in IFsiItem * This,
                       VARIANT_BOOL newVal);
                               HRESULT ( STDMETHODCALLTYPE *FileSystemName )(
            __RPC__in IFsiItem * This,
                       FsiFileSystems fileSystem,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *FileSystemPath )(
            __RPC__in IFsiItem * This,
                       FsiFileSystems fileSystem,
                                __RPC__deref_out_opt BSTR *pVal);
        END_INTERFACE
    } IFsiItemVtbl;
    interface IFsiItem
    {
        CONST_VTBL struct IFsiItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> get_FullPath(This,pVal) )
    ( (This)->lpVtbl -> get_CreationTime(This,pVal) )
    ( (This)->lpVtbl -> put_CreationTime(This,newVal) )
    ( (This)->lpVtbl -> get_LastAccessedTime(This,pVal) )
    ( (This)->lpVtbl -> put_LastAccessedTime(This,newVal) )
    ( (This)->lpVtbl -> get_LastModifiedTime(This,pVal) )
    ( (This)->lpVtbl -> put_LastModifiedTime(This,newVal) )
    ( (This)->lpVtbl -> get_IsHidden(This,pVal) )
    ( (This)->lpVtbl -> put_IsHidden(This,newVal) )
    ( (This)->lpVtbl -> FileSystemName(This,fileSystem,pVal) )
    ( (This)->lpVtbl -> FileSystemPath(This,fileSystem,pVal) )
EXTERN_C const IID IID_IEnumFsiItems;
    typedef struct IEnumFsiItemsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumFsiItems * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumFsiItems * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumFsiItems * This);
                                  HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumFsiItems * This,
                       ULONG celt,
                                 IFsiItem **rgelt,
                        ULONG *pceltFetched);
                           HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumFsiItems * This,
                       ULONG celt);
                           HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumFsiItems * This);
                           HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumFsiItems * This,
                        __RPC__deref_out_opt IEnumFsiItems **ppEnum);
        END_INTERFACE
    } IEnumFsiItemsVtbl;
    interface IEnumFsiItems
    {
        CONST_VTBL struct IEnumFsiItemsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
                            HRESULT STDMETHODCALLTYPE IEnumFsiItems_RemoteNext_Proxy(
    __RPC__in IEnumFsiItems * This,
                      __RPC__in_range(0,0x7fffffff) ULONG celt,
                         __RPC__out_ecount_full(celt) IFsiItem **rgelt,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumFsiItems_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IFsiFileItem;
    typedef struct IFsiFileItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsiFileItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsiFileItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsiFileItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsiFileItem * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsiFileItem * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsiFileItem * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsiFileItem * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsiFileItem * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FullPath )(
            __RPC__in IFsiFileItem * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CreationTime )(
            __RPC__in IFsiFileItem * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CreationTime )(
            __RPC__in IFsiFileItem * This,
                       DATE newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastAccessedTime )(
            __RPC__in IFsiFileItem * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LastAccessedTime )(
            __RPC__in IFsiFileItem * This,
                       DATE newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastModifiedTime )(
            __RPC__in IFsiFileItem * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LastModifiedTime )(
            __RPC__in IFsiFileItem * This,
                       DATE newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
            __RPC__in IFsiFileItem * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
            __RPC__in IFsiFileItem * This,
                       VARIANT_BOOL newVal);
                               HRESULT ( STDMETHODCALLTYPE *FileSystemName )(
            __RPC__in IFsiFileItem * This,
                       FsiFileSystems fileSystem,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *FileSystemPath )(
            __RPC__in IFsiFileItem * This,
                       FsiFileSystems fileSystem,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DataSize )(
            __RPC__in IFsiFileItem * This,
                                __RPC__out LONGLONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DataSize32BitLow )(
            __RPC__in IFsiFileItem * This,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DataSize32BitHigh )(
            __RPC__in IFsiFileItem * This,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Data )(
            __RPC__in IFsiFileItem * This,
                                __RPC__deref_out_opt IStream **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Data )(
            __RPC__in IFsiFileItem * This,
                       __RPC__in_opt IStream *newVal);
        END_INTERFACE
    } IFsiFileItemVtbl;
    interface IFsiFileItem
    {
        CONST_VTBL struct IFsiFileItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> get_FullPath(This,pVal) )
    ( (This)->lpVtbl -> get_CreationTime(This,pVal) )
    ( (This)->lpVtbl -> put_CreationTime(This,newVal) )
    ( (This)->lpVtbl -> get_LastAccessedTime(This,pVal) )
    ( (This)->lpVtbl -> put_LastAccessedTime(This,newVal) )
    ( (This)->lpVtbl -> get_LastModifiedTime(This,pVal) )
    ( (This)->lpVtbl -> put_LastModifiedTime(This,newVal) )
    ( (This)->lpVtbl -> get_IsHidden(This,pVal) )
    ( (This)->lpVtbl -> put_IsHidden(This,newVal) )
    ( (This)->lpVtbl -> FileSystemName(This,fileSystem,pVal) )
    ( (This)->lpVtbl -> FileSystemPath(This,fileSystem,pVal) )
    ( (This)->lpVtbl -> get_DataSize(This,pVal) )
    ( (This)->lpVtbl -> get_DataSize32BitLow(This,pVal) )
    ( (This)->lpVtbl -> get_DataSize32BitHigh(This,pVal) )
    ( (This)->lpVtbl -> get_Data(This,pVal) )
    ( (This)->lpVtbl -> put_Data(This,newVal) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IFsiFileItem2;
    typedef struct IFsiFileItem2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsiFileItem2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsiFileItem2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsiFileItem2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsiFileItem2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsiFileItem2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsiFileItem2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsiFileItem2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsiFileItem2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FullPath )(
            __RPC__in IFsiFileItem2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CreationTime )(
            __RPC__in IFsiFileItem2 * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CreationTime )(
            __RPC__in IFsiFileItem2 * This,
                       DATE newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastAccessedTime )(
            __RPC__in IFsiFileItem2 * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LastAccessedTime )(
            __RPC__in IFsiFileItem2 * This,
                       DATE newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastModifiedTime )(
            __RPC__in IFsiFileItem2 * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LastModifiedTime )(
            __RPC__in IFsiFileItem2 * This,
                       DATE newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
            __RPC__in IFsiFileItem2 * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
            __RPC__in IFsiFileItem2 * This,
                       VARIANT_BOOL newVal);
                               HRESULT ( STDMETHODCALLTYPE *FileSystemName )(
            __RPC__in IFsiFileItem2 * This,
                       FsiFileSystems fileSystem,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *FileSystemPath )(
            __RPC__in IFsiFileItem2 * This,
                       FsiFileSystems fileSystem,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DataSize )(
            __RPC__in IFsiFileItem2 * This,
                                __RPC__out LONGLONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DataSize32BitLow )(
            __RPC__in IFsiFileItem2 * This,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DataSize32BitHigh )(
            __RPC__in IFsiFileItem2 * This,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Data )(
            __RPC__in IFsiFileItem2 * This,
                                __RPC__deref_out_opt IStream **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Data )(
            __RPC__in IFsiFileItem2 * This,
                       __RPC__in_opt IStream *newVal);
                                                            HRESULT ( STDMETHODCALLTYPE *get_FsiNamedStreams )(
            __RPC__in IFsiFileItem2 * This,
                                     __RPC__deref_out_opt IFsiNamedStreams **streams);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsNamedStream )(
            __RPC__in IFsiFileItem2 * This,
                                     __RPC__out VARIANT_BOOL *pVal);
                               HRESULT ( STDMETHODCALLTYPE *AddStream )(
            __RPC__in IFsiFileItem2 * This,
                       __RPC__in BSTR name,
                       __RPC__in_opt IStream *streamData);
                               HRESULT ( STDMETHODCALLTYPE *RemoveStream )(
            __RPC__in IFsiFileItem2 * This,
                       __RPC__in BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsRealTime )(
            __RPC__in IFsiFileItem2 * This,
                                     __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsRealTime )(
            __RPC__in IFsiFileItem2 * This,
                       VARIANT_BOOL newVal);
        END_INTERFACE
    } IFsiFileItem2Vtbl;
    interface IFsiFileItem2
    {
        CONST_VTBL struct IFsiFileItem2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> get_FullPath(This,pVal) )
    ( (This)->lpVtbl -> get_CreationTime(This,pVal) )
    ( (This)->lpVtbl -> put_CreationTime(This,newVal) )
    ( (This)->lpVtbl -> get_LastAccessedTime(This,pVal) )
    ( (This)->lpVtbl -> put_LastAccessedTime(This,newVal) )
    ( (This)->lpVtbl -> get_LastModifiedTime(This,pVal) )
    ( (This)->lpVtbl -> put_LastModifiedTime(This,newVal) )
    ( (This)->lpVtbl -> get_IsHidden(This,pVal) )
    ( (This)->lpVtbl -> put_IsHidden(This,newVal) )
    ( (This)->lpVtbl -> FileSystemName(This,fileSystem,pVal) )
    ( (This)->lpVtbl -> FileSystemPath(This,fileSystem,pVal) )
    ( (This)->lpVtbl -> get_DataSize(This,pVal) )
    ( (This)->lpVtbl -> get_DataSize32BitLow(This,pVal) )
    ( (This)->lpVtbl -> get_DataSize32BitHigh(This,pVal) )
    ( (This)->lpVtbl -> get_Data(This,pVal) )
    ( (This)->lpVtbl -> put_Data(This,newVal) )
    ( (This)->lpVtbl -> get_FsiNamedStreams(This,streams) )
    ( (This)->lpVtbl -> get_IsNamedStream(This,pVal) )
    ( (This)->lpVtbl -> AddStream(This,name,streamData) )
    ( (This)->lpVtbl -> RemoveStream(This,name) )
    ( (This)->lpVtbl -> get_IsRealTime(This,pVal) )
    ( (This)->lpVtbl -> put_IsRealTime(This,newVal) )
EXTERN_C const IID IID_IFsiNamedStreams;
    typedef struct IFsiNamedStreamsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsiNamedStreams * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsiNamedStreams * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsiNamedStreams * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsiNamedStreams * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsiNamedStreams * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsiNamedStreams * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsiNamedStreams * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFsiNamedStreams * This,
                                     __RPC__deref_out_opt IEnumVARIANT **NewEnum);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFsiNamedStreams * This,
                       LONG index,
                                     __RPC__deref_out_opt IFsiFileItem2 **item);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFsiNamedStreams * This,
                                     __RPC__out LONG *count);
                                                            HRESULT ( STDMETHODCALLTYPE *get_EnumNamedStreams )(
            __RPC__in IFsiNamedStreams * This,
                                     __RPC__deref_out_opt IEnumFsiItems **NewEnum);
        END_INTERFACE
    } IFsiNamedStreamsVtbl;
    interface IFsiNamedStreams
    {
        CONST_VTBL struct IFsiNamedStreamsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,NewEnum) )
    ( (This)->lpVtbl -> get_Item(This,index,item) )
    ( (This)->lpVtbl -> get_Count(This,count) )
    ( (This)->lpVtbl -> get_EnumNamedStreams(This,NewEnum) )
EXTERN_C const IID IID_IFsiDirectoryItem;
    typedef struct IFsiDirectoryItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsiDirectoryItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsiDirectoryItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsiDirectoryItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsiDirectoryItem * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsiDirectoryItem * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsiDirectoryItem * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsiDirectoryItem * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsiDirectoryItem * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FullPath )(
            __RPC__in IFsiDirectoryItem * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CreationTime )(
            __RPC__in IFsiDirectoryItem * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CreationTime )(
            __RPC__in IFsiDirectoryItem * This,
                       DATE newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastAccessedTime )(
            __RPC__in IFsiDirectoryItem * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LastAccessedTime )(
            __RPC__in IFsiDirectoryItem * This,
                       DATE newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastModifiedTime )(
            __RPC__in IFsiDirectoryItem * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LastModifiedTime )(
            __RPC__in IFsiDirectoryItem * This,
                       DATE newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
            __RPC__in IFsiDirectoryItem * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
            __RPC__in IFsiDirectoryItem * This,
                       VARIANT_BOOL newVal);
                               HRESULT ( STDMETHODCALLTYPE *FileSystemName )(
            __RPC__in IFsiDirectoryItem * This,
                       FsiFileSystems fileSystem,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *FileSystemPath )(
            __RPC__in IFsiDirectoryItem * This,
                       FsiFileSystems fileSystem,
                                __RPC__deref_out_opt BSTR *pVal);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFsiDirectoryItem * This,
                                __RPC__deref_out_opt IEnumVARIANT **NewEnum);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFsiDirectoryItem * This,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IFsiItem **item);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFsiDirectoryItem * This,
                                __RPC__out LONG *Count);
                                                            HRESULT ( STDMETHODCALLTYPE *get_EnumFsiItems )(
            __RPC__in IFsiDirectoryItem * This,
                                __RPC__deref_out_opt IEnumFsiItems **NewEnum);
                               HRESULT ( STDMETHODCALLTYPE *AddDirectory )(
            __RPC__in IFsiDirectoryItem * This,
                       __RPC__in BSTR path);
                               HRESULT ( STDMETHODCALLTYPE *AddFile )(
            __RPC__in IFsiDirectoryItem * This,
                       __RPC__in BSTR path,
                       __RPC__in_opt IStream *fileData);
                               HRESULT ( STDMETHODCALLTYPE *AddTree )(
            __RPC__in IFsiDirectoryItem * This,
                       __RPC__in BSTR sourceDirectory,
                       VARIANT_BOOL includeBaseDirectory);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IFsiDirectoryItem * This,
                       __RPC__in_opt IFsiItem *item);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IFsiDirectoryItem * This,
                       __RPC__in BSTR path);
                               HRESULT ( STDMETHODCALLTYPE *RemoveTree )(
            __RPC__in IFsiDirectoryItem * This,
                       __RPC__in BSTR path);
        END_INTERFACE
    } IFsiDirectoryItemVtbl;
    interface IFsiDirectoryItem
    {
        CONST_VTBL struct IFsiDirectoryItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> get_FullPath(This,pVal) )
    ( (This)->lpVtbl -> get_CreationTime(This,pVal) )
    ( (This)->lpVtbl -> put_CreationTime(This,newVal) )
    ( (This)->lpVtbl -> get_LastAccessedTime(This,pVal) )
    ( (This)->lpVtbl -> put_LastAccessedTime(This,newVal) )
    ( (This)->lpVtbl -> get_LastModifiedTime(This,pVal) )
    ( (This)->lpVtbl -> put_LastModifiedTime(This,newVal) )
    ( (This)->lpVtbl -> get_IsHidden(This,pVal) )
    ( (This)->lpVtbl -> put_IsHidden(This,newVal) )
    ( (This)->lpVtbl -> FileSystemName(This,fileSystem,pVal) )
    ( (This)->lpVtbl -> FileSystemPath(This,fileSystem,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,NewEnum) )
    ( (This)->lpVtbl -> get_Item(This,path,item) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get_EnumFsiItems(This,NewEnum) )
    ( (This)->lpVtbl -> AddDirectory(This,path) )
    ( (This)->lpVtbl -> AddFile(This,path,fileData) )
    ( (This)->lpVtbl -> AddTree(This,sourceDirectory,includeBaseDirectory) )
    ( (This)->lpVtbl -> Add(This,item) )
    ( (This)->lpVtbl -> Remove(This,path) )
    ( (This)->lpVtbl -> RemoveTree(This,path) )
EXTERN_C const IID IID_IFsiDirectoryItem2;
    typedef struct IFsiDirectoryItem2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsiDirectoryItem2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsiDirectoryItem2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsiDirectoryItem2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsiDirectoryItem2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsiDirectoryItem2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsiDirectoryItem2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsiDirectoryItem2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsiDirectoryItem2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FullPath )(
            __RPC__in IFsiDirectoryItem2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CreationTime )(
            __RPC__in IFsiDirectoryItem2 * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CreationTime )(
            __RPC__in IFsiDirectoryItem2 * This,
                       DATE newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastAccessedTime )(
            __RPC__in IFsiDirectoryItem2 * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LastAccessedTime )(
            __RPC__in IFsiDirectoryItem2 * This,
                       DATE newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastModifiedTime )(
            __RPC__in IFsiDirectoryItem2 * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LastModifiedTime )(
            __RPC__in IFsiDirectoryItem2 * This,
                       DATE newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
            __RPC__in IFsiDirectoryItem2 * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
            __RPC__in IFsiDirectoryItem2 * This,
                       VARIANT_BOOL newVal);
                               HRESULT ( STDMETHODCALLTYPE *FileSystemName )(
            __RPC__in IFsiDirectoryItem2 * This,
                       FsiFileSystems fileSystem,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *FileSystemPath )(
            __RPC__in IFsiDirectoryItem2 * This,
                       FsiFileSystems fileSystem,
                                __RPC__deref_out_opt BSTR *pVal);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFsiDirectoryItem2 * This,
                                __RPC__deref_out_opt IEnumVARIANT **NewEnum);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFsiDirectoryItem2 * This,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IFsiItem **item);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFsiDirectoryItem2 * This,
                                __RPC__out LONG *Count);
                                                            HRESULT ( STDMETHODCALLTYPE *get_EnumFsiItems )(
            __RPC__in IFsiDirectoryItem2 * This,
                                __RPC__deref_out_opt IEnumFsiItems **NewEnum);
                               HRESULT ( STDMETHODCALLTYPE *AddDirectory )(
            __RPC__in IFsiDirectoryItem2 * This,
                       __RPC__in BSTR path);
                               HRESULT ( STDMETHODCALLTYPE *AddFile )(
            __RPC__in IFsiDirectoryItem2 * This,
                       __RPC__in BSTR path,
                       __RPC__in_opt IStream *fileData);
                               HRESULT ( STDMETHODCALLTYPE *AddTree )(
            __RPC__in IFsiDirectoryItem2 * This,
                       __RPC__in BSTR sourceDirectory,
                       VARIANT_BOOL includeBaseDirectory);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IFsiDirectoryItem2 * This,
                       __RPC__in_opt IFsiItem *item);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IFsiDirectoryItem2 * This,
                       __RPC__in BSTR path);
                               HRESULT ( STDMETHODCALLTYPE *RemoveTree )(
            __RPC__in IFsiDirectoryItem2 * This,
                       __RPC__in BSTR path);
                               HRESULT ( STDMETHODCALLTYPE *AddTreeWithNamedStreams )(
            __RPC__in IFsiDirectoryItem2 * This,
                       __RPC__in BSTR sourceDirectory,
                       VARIANT_BOOL includeBaseDirectory);
        END_INTERFACE
    } IFsiDirectoryItem2Vtbl;
    interface IFsiDirectoryItem2
    {
        CONST_VTBL struct IFsiDirectoryItem2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> get_FullPath(This,pVal) )
    ( (This)->lpVtbl -> get_CreationTime(This,pVal) )
    ( (This)->lpVtbl -> put_CreationTime(This,newVal) )
    ( (This)->lpVtbl -> get_LastAccessedTime(This,pVal) )
    ( (This)->lpVtbl -> put_LastAccessedTime(This,newVal) )
    ( (This)->lpVtbl -> get_LastModifiedTime(This,pVal) )
    ( (This)->lpVtbl -> put_LastModifiedTime(This,newVal) )
    ( (This)->lpVtbl -> get_IsHidden(This,pVal) )
    ( (This)->lpVtbl -> put_IsHidden(This,newVal) )
    ( (This)->lpVtbl -> FileSystemName(This,fileSystem,pVal) )
    ( (This)->lpVtbl -> FileSystemPath(This,fileSystem,pVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,NewEnum) )
    ( (This)->lpVtbl -> get_Item(This,path,item) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get_EnumFsiItems(This,NewEnum) )
    ( (This)->lpVtbl -> AddDirectory(This,path) )
    ( (This)->lpVtbl -> AddFile(This,path,fileData) )
    ( (This)->lpVtbl -> AddTree(This,sourceDirectory,includeBaseDirectory) )
    ( (This)->lpVtbl -> Add(This,item) )
    ( (This)->lpVtbl -> Remove(This,path) )
    ( (This)->lpVtbl -> RemoveTree(This,path) )
    ( (This)->lpVtbl -> AddTreeWithNamedStreams(This,sourceDirectory,includeBaseDirectory) )
EXTERN_C const IID IID_IFileSystemImage;
    typedef struct IFileSystemImageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFileSystemImage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFileSystemImage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFileSystemImage * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFileSystemImage * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFileSystemImage * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFileSystemImage * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFileSystemImage * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Root )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__deref_out_opt IFsiDirectoryItem **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SessionStartBlock )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SessionStartBlock )(
            __RPC__in IFileSystemImage * This,
                       LONG newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FreeMediaBlocks )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_FreeMediaBlocks )(
            __RPC__in IFileSystemImage * This,
                       LONG newVal);
                               HRESULT ( STDMETHODCALLTYPE *SetMaxMediaBlocksFromDevice )(
            __RPC__in IFileSystemImage * This,
                       __RPC__in_opt IDiscRecorder2 *discRecorder);
                                        HRESULT ( STDMETHODCALLTYPE *get_UsedBlocks )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeName )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_VolumeName )(
            __RPC__in IFileSystemImage * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ImportedVolumeName )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_BootImageOptions )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__deref_out_opt IBootOptions **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_BootImageOptions )(
            __RPC__in IFileSystemImage * This,
                       __RPC__in_opt IBootOptions *newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileCount )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DirectoryCount )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkingDirectory )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_WorkingDirectory )(
            __RPC__in IFileSystemImage * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ChangePoint )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_StrictFileSystemCompliance )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_StrictFileSystemCompliance )(
            __RPC__in IFileSystemImage * This,
                       VARIANT_BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UseRestrictedCharacterSet )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_UseRestrictedCharacterSet )(
            __RPC__in IFileSystemImage * This,
                       VARIANT_BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileSystemsToCreate )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__out FsiFileSystems *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_FileSystemsToCreate )(
            __RPC__in IFileSystemImage * This,
                       FsiFileSystems newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileSystemsSupported )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__out FsiFileSystems *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_UDFRevision )(
            __RPC__in IFileSystemImage * This,
                       LONG newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UDFRevision )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UDFRevisionsSupported )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__deref_out_opt SAFEARRAY * *pVal);
                               HRESULT ( STDMETHODCALLTYPE *ChooseImageDefaults )(
            __RPC__in IFileSystemImage * This,
                       __RPC__in_opt IDiscRecorder2 *discRecorder);
                               HRESULT ( STDMETHODCALLTYPE *ChooseImageDefaultsForMediaType )(
            __RPC__in IFileSystemImage * This,
                       IMAPI_MEDIA_PHYSICAL_TYPE value);
                                        HRESULT ( STDMETHODCALLTYPE *put_ISO9660InterchangeLevel )(
            __RPC__in IFileSystemImage * This,
                       LONG newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ISO9660InterchangeLevel )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ISO9660InterchangeLevelsSupported )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__deref_out_opt SAFEARRAY * *pVal);
                               HRESULT ( STDMETHODCALLTYPE *CreateResultImage )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__deref_out_opt IFileSystemImageResult **resultStream);
                               HRESULT ( STDMETHODCALLTYPE *Exists )(
            __RPC__in IFileSystemImage * This,
                       __RPC__in BSTR fullPath,
                                     __RPC__out FsiItemType *itemType);
                               HRESULT ( STDMETHODCALLTYPE *CalculateDiscIdentifier )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__deref_out_opt BSTR *discIdentifier);
                               HRESULT ( STDMETHODCALLTYPE *IdentifyFileSystemsOnDisc )(
            __RPC__in IFileSystemImage * This,
                       __RPC__in_opt IDiscRecorder2 *discRecorder,
                                     __RPC__out FsiFileSystems *fileSystems);
                               HRESULT ( STDMETHODCALLTYPE *GetDefaultFileSystemForImport )(
            __RPC__in IFileSystemImage * This,
                       FsiFileSystems fileSystems,
                                     __RPC__out FsiFileSystems *importDefault);
                               HRESULT ( STDMETHODCALLTYPE *ImportFileSystem )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__out FsiFileSystems *importedFileSystem);
                               HRESULT ( STDMETHODCALLTYPE *ImportSpecificFileSystem )(
            __RPC__in IFileSystemImage * This,
                       FsiFileSystems fileSystemToUse);
                               HRESULT ( STDMETHODCALLTYPE *RollbackToChangePoint )(
            __RPC__in IFileSystemImage * This,
                       LONG changePoint);
                               HRESULT ( STDMETHODCALLTYPE *LockInChangePoint )(
            __RPC__in IFileSystemImage * This);
                               HRESULT ( STDMETHODCALLTYPE *CreateDirectoryItem )(
            __RPC__in IFileSystemImage * This,
                       __RPC__in BSTR name,
                                     __RPC__deref_out_opt IFsiDirectoryItem **newItem);
                               HRESULT ( STDMETHODCALLTYPE *CreateFileItem )(
            __RPC__in IFileSystemImage * This,
                       __RPC__in BSTR name,
                                     __RPC__deref_out_opt IFsiFileItem **newItem);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeNameUDF )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeNameJoliet )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeNameISO9660 )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_StageFiles )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_StageFiles )(
            __RPC__in IFileSystemImage * This,
                       VARIANT_BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MultisessionInterfaces )(
            __RPC__in IFileSystemImage * This,
                                     __RPC__deref_out_opt SAFEARRAY * *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MultisessionInterfaces )(
            __RPC__in IFileSystemImage * This,
                       __RPC__in SAFEARRAY * newVal);
        END_INTERFACE
    } IFileSystemImageVtbl;
    interface IFileSystemImage
    {
        CONST_VTBL struct IFileSystemImageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Root(This,pVal) )
    ( (This)->lpVtbl -> get_SessionStartBlock(This,pVal) )
    ( (This)->lpVtbl -> put_SessionStartBlock(This,newVal) )
    ( (This)->lpVtbl -> get_FreeMediaBlocks(This,pVal) )
    ( (This)->lpVtbl -> put_FreeMediaBlocks(This,newVal) )
    ( (This)->lpVtbl -> SetMaxMediaBlocksFromDevice(This,discRecorder) )
    ( (This)->lpVtbl -> get_UsedBlocks(This,pVal) )
    ( (This)->lpVtbl -> get_VolumeName(This,pVal) )
    ( (This)->lpVtbl -> put_VolumeName(This,newVal) )
    ( (This)->lpVtbl -> get_ImportedVolumeName(This,pVal) )
    ( (This)->lpVtbl -> get_BootImageOptions(This,pVal) )
    ( (This)->lpVtbl -> put_BootImageOptions(This,newVal) )
    ( (This)->lpVtbl -> get_FileCount(This,pVal) )
    ( (This)->lpVtbl -> get_DirectoryCount(This,pVal) )
    ( (This)->lpVtbl -> get_WorkingDirectory(This,pVal) )
    ( (This)->lpVtbl -> put_WorkingDirectory(This,newVal) )
    ( (This)->lpVtbl -> get_ChangePoint(This,pVal) )
    ( (This)->lpVtbl -> get_StrictFileSystemCompliance(This,pVal) )
    ( (This)->lpVtbl -> put_StrictFileSystemCompliance(This,newVal) )
    ( (This)->lpVtbl -> get_UseRestrictedCharacterSet(This,pVal) )
    ( (This)->lpVtbl -> put_UseRestrictedCharacterSet(This,newVal) )
    ( (This)->lpVtbl -> get_FileSystemsToCreate(This,pVal) )
    ( (This)->lpVtbl -> put_FileSystemsToCreate(This,newVal) )
    ( (This)->lpVtbl -> get_FileSystemsSupported(This,pVal) )
    ( (This)->lpVtbl -> put_UDFRevision(This,newVal) )
    ( (This)->lpVtbl -> get_UDFRevision(This,pVal) )
    ( (This)->lpVtbl -> get_UDFRevisionsSupported(This,pVal) )
    ( (This)->lpVtbl -> ChooseImageDefaults(This,discRecorder) )
    ( (This)->lpVtbl -> ChooseImageDefaultsForMediaType(This,value) )
    ( (This)->lpVtbl -> put_ISO9660InterchangeLevel(This,newVal) )
    ( (This)->lpVtbl -> get_ISO9660InterchangeLevel(This,pVal) )
    ( (This)->lpVtbl -> get_ISO9660InterchangeLevelsSupported(This,pVal) )
    ( (This)->lpVtbl -> CreateResultImage(This,resultStream) )
    ( (This)->lpVtbl -> Exists(This,fullPath,itemType) )
    ( (This)->lpVtbl -> CalculateDiscIdentifier(This,discIdentifier) )
    ( (This)->lpVtbl -> IdentifyFileSystemsOnDisc(This,discRecorder,fileSystems) )
    ( (This)->lpVtbl -> GetDefaultFileSystemForImport(This,fileSystems,importDefault) )
    ( (This)->lpVtbl -> ImportFileSystem(This,importedFileSystem) )
    ( (This)->lpVtbl -> ImportSpecificFileSystem(This,fileSystemToUse) )
    ( (This)->lpVtbl -> RollbackToChangePoint(This,changePoint) )
    ( (This)->lpVtbl -> LockInChangePoint(This) )
    ( (This)->lpVtbl -> CreateDirectoryItem(This,name,newItem) )
    ( (This)->lpVtbl -> CreateFileItem(This,name,newItem) )
    ( (This)->lpVtbl -> get_VolumeNameUDF(This,pVal) )
    ( (This)->lpVtbl -> get_VolumeNameJoliet(This,pVal) )
    ( (This)->lpVtbl -> get_VolumeNameISO9660(This,pVal) )
    ( (This)->lpVtbl -> get_StageFiles(This,pVal) )
    ( (This)->lpVtbl -> put_StageFiles(This,newVal) )
    ( (This)->lpVtbl -> get_MultisessionInterfaces(This,pVal) )
    ( (This)->lpVtbl -> put_MultisessionInterfaces(This,newVal) )
EXTERN_C const IID IID_IFileSystemImage2;
    typedef struct IFileSystemImage2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFileSystemImage2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFileSystemImage2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFileSystemImage2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFileSystemImage2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFileSystemImage2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFileSystemImage2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFileSystemImage2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Root )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__deref_out_opt IFsiDirectoryItem **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SessionStartBlock )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SessionStartBlock )(
            __RPC__in IFileSystemImage2 * This,
                       LONG newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FreeMediaBlocks )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_FreeMediaBlocks )(
            __RPC__in IFileSystemImage2 * This,
                       LONG newVal);
                               HRESULT ( STDMETHODCALLTYPE *SetMaxMediaBlocksFromDevice )(
            __RPC__in IFileSystemImage2 * This,
                       __RPC__in_opt IDiscRecorder2 *discRecorder);
                                        HRESULT ( STDMETHODCALLTYPE *get_UsedBlocks )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeName )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_VolumeName )(
            __RPC__in IFileSystemImage2 * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ImportedVolumeName )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_BootImageOptions )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__deref_out_opt IBootOptions **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_BootImageOptions )(
            __RPC__in IFileSystemImage2 * This,
                       __RPC__in_opt IBootOptions *newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileCount )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DirectoryCount )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkingDirectory )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_WorkingDirectory )(
            __RPC__in IFileSystemImage2 * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ChangePoint )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_StrictFileSystemCompliance )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_StrictFileSystemCompliance )(
            __RPC__in IFileSystemImage2 * This,
                       VARIANT_BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UseRestrictedCharacterSet )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_UseRestrictedCharacterSet )(
            __RPC__in IFileSystemImage2 * This,
                       VARIANT_BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileSystemsToCreate )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__out FsiFileSystems *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_FileSystemsToCreate )(
            __RPC__in IFileSystemImage2 * This,
                       FsiFileSystems newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileSystemsSupported )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__out FsiFileSystems *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_UDFRevision )(
            __RPC__in IFileSystemImage2 * This,
                       LONG newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UDFRevision )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UDFRevisionsSupported )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__deref_out_opt SAFEARRAY * *pVal);
                               HRESULT ( STDMETHODCALLTYPE *ChooseImageDefaults )(
            __RPC__in IFileSystemImage2 * This,
                       __RPC__in_opt IDiscRecorder2 *discRecorder);
                               HRESULT ( STDMETHODCALLTYPE *ChooseImageDefaultsForMediaType )(
            __RPC__in IFileSystemImage2 * This,
                       IMAPI_MEDIA_PHYSICAL_TYPE value);
                                        HRESULT ( STDMETHODCALLTYPE *put_ISO9660InterchangeLevel )(
            __RPC__in IFileSystemImage2 * This,
                       LONG newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ISO9660InterchangeLevel )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ISO9660InterchangeLevelsSupported )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__deref_out_opt SAFEARRAY * *pVal);
                               HRESULT ( STDMETHODCALLTYPE *CreateResultImage )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__deref_out_opt IFileSystemImageResult **resultStream);
                               HRESULT ( STDMETHODCALLTYPE *Exists )(
            __RPC__in IFileSystemImage2 * This,
                       __RPC__in BSTR fullPath,
                                     __RPC__out FsiItemType *itemType);
                               HRESULT ( STDMETHODCALLTYPE *CalculateDiscIdentifier )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__deref_out_opt BSTR *discIdentifier);
                               HRESULT ( STDMETHODCALLTYPE *IdentifyFileSystemsOnDisc )(
            __RPC__in IFileSystemImage2 * This,
                       __RPC__in_opt IDiscRecorder2 *discRecorder,
                                     __RPC__out FsiFileSystems *fileSystems);
                               HRESULT ( STDMETHODCALLTYPE *GetDefaultFileSystemForImport )(
            __RPC__in IFileSystemImage2 * This,
                       FsiFileSystems fileSystems,
                                     __RPC__out FsiFileSystems *importDefault);
                               HRESULT ( STDMETHODCALLTYPE *ImportFileSystem )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__out FsiFileSystems *importedFileSystem);
                               HRESULT ( STDMETHODCALLTYPE *ImportSpecificFileSystem )(
            __RPC__in IFileSystemImage2 * This,
                       FsiFileSystems fileSystemToUse);
                               HRESULT ( STDMETHODCALLTYPE *RollbackToChangePoint )(
            __RPC__in IFileSystemImage2 * This,
                       LONG changePoint);
                               HRESULT ( STDMETHODCALLTYPE *LockInChangePoint )(
            __RPC__in IFileSystemImage2 * This);
                               HRESULT ( STDMETHODCALLTYPE *CreateDirectoryItem )(
            __RPC__in IFileSystemImage2 * This,
                       __RPC__in BSTR name,
                                     __RPC__deref_out_opt IFsiDirectoryItem **newItem);
                               HRESULT ( STDMETHODCALLTYPE *CreateFileItem )(
            __RPC__in IFileSystemImage2 * This,
                       __RPC__in BSTR name,
                                     __RPC__deref_out_opt IFsiFileItem **newItem);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeNameUDF )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeNameJoliet )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeNameISO9660 )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_StageFiles )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_StageFiles )(
            __RPC__in IFileSystemImage2 * This,
                       VARIANT_BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MultisessionInterfaces )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__deref_out_opt SAFEARRAY * *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MultisessionInterfaces )(
            __RPC__in IFileSystemImage2 * This,
                       __RPC__in SAFEARRAY * newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_BootImageOptionsArray )(
            __RPC__in IFileSystemImage2 * This,
                                     __RPC__deref_out_opt SAFEARRAY * *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_BootImageOptionsArray )(
            __RPC__in IFileSystemImage2 * This,
                       __RPC__in SAFEARRAY * newVal);
        END_INTERFACE
    } IFileSystemImage2Vtbl;
    interface IFileSystemImage2
    {
        CONST_VTBL struct IFileSystemImage2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Root(This,pVal) )
    ( (This)->lpVtbl -> get_SessionStartBlock(This,pVal) )
    ( (This)->lpVtbl -> put_SessionStartBlock(This,newVal) )
    ( (This)->lpVtbl -> get_FreeMediaBlocks(This,pVal) )
    ( (This)->lpVtbl -> put_FreeMediaBlocks(This,newVal) )
    ( (This)->lpVtbl -> SetMaxMediaBlocksFromDevice(This,discRecorder) )
    ( (This)->lpVtbl -> get_UsedBlocks(This,pVal) )
    ( (This)->lpVtbl -> get_VolumeName(This,pVal) )
    ( (This)->lpVtbl -> put_VolumeName(This,newVal) )
    ( (This)->lpVtbl -> get_ImportedVolumeName(This,pVal) )
    ( (This)->lpVtbl -> get_BootImageOptions(This,pVal) )
    ( (This)->lpVtbl -> put_BootImageOptions(This,newVal) )
    ( (This)->lpVtbl -> get_FileCount(This,pVal) )
    ( (This)->lpVtbl -> get_DirectoryCount(This,pVal) )
    ( (This)->lpVtbl -> get_WorkingDirectory(This,pVal) )
    ( (This)->lpVtbl -> put_WorkingDirectory(This,newVal) )
    ( (This)->lpVtbl -> get_ChangePoint(This,pVal) )
    ( (This)->lpVtbl -> get_StrictFileSystemCompliance(This,pVal) )
    ( (This)->lpVtbl -> put_StrictFileSystemCompliance(This,newVal) )
    ( (This)->lpVtbl -> get_UseRestrictedCharacterSet(This,pVal) )
    ( (This)->lpVtbl -> put_UseRestrictedCharacterSet(This,newVal) )
    ( (This)->lpVtbl -> get_FileSystemsToCreate(This,pVal) )
    ( (This)->lpVtbl -> put_FileSystemsToCreate(This,newVal) )
    ( (This)->lpVtbl -> get_FileSystemsSupported(This,pVal) )
    ( (This)->lpVtbl -> put_UDFRevision(This,newVal) )
    ( (This)->lpVtbl -> get_UDFRevision(This,pVal) )
    ( (This)->lpVtbl -> get_UDFRevisionsSupported(This,pVal) )
    ( (This)->lpVtbl -> ChooseImageDefaults(This,discRecorder) )
    ( (This)->lpVtbl -> ChooseImageDefaultsForMediaType(This,value) )
    ( (This)->lpVtbl -> put_ISO9660InterchangeLevel(This,newVal) )
    ( (This)->lpVtbl -> get_ISO9660InterchangeLevel(This,pVal) )
    ( (This)->lpVtbl -> get_ISO9660InterchangeLevelsSupported(This,pVal) )
    ( (This)->lpVtbl -> CreateResultImage(This,resultStream) )
    ( (This)->lpVtbl -> Exists(This,fullPath,itemType) )
    ( (This)->lpVtbl -> CalculateDiscIdentifier(This,discIdentifier) )
    ( (This)->lpVtbl -> IdentifyFileSystemsOnDisc(This,discRecorder,fileSystems) )
    ( (This)->lpVtbl -> GetDefaultFileSystemForImport(This,fileSystems,importDefault) )
    ( (This)->lpVtbl -> ImportFileSystem(This,importedFileSystem) )
    ( (This)->lpVtbl -> ImportSpecificFileSystem(This,fileSystemToUse) )
    ( (This)->lpVtbl -> RollbackToChangePoint(This,changePoint) )
    ( (This)->lpVtbl -> LockInChangePoint(This) )
    ( (This)->lpVtbl -> CreateDirectoryItem(This,name,newItem) )
    ( (This)->lpVtbl -> CreateFileItem(This,name,newItem) )
    ( (This)->lpVtbl -> get_VolumeNameUDF(This,pVal) )
    ( (This)->lpVtbl -> get_VolumeNameJoliet(This,pVal) )
    ( (This)->lpVtbl -> get_VolumeNameISO9660(This,pVal) )
    ( (This)->lpVtbl -> get_StageFiles(This,pVal) )
    ( (This)->lpVtbl -> put_StageFiles(This,newVal) )
    ( (This)->lpVtbl -> get_MultisessionInterfaces(This,pVal) )
    ( (This)->lpVtbl -> put_MultisessionInterfaces(This,newVal) )
    ( (This)->lpVtbl -> get_BootImageOptionsArray(This,pVal) )
    ( (This)->lpVtbl -> put_BootImageOptionsArray(This,newVal) )
EXTERN_C const IID IID_IFileSystemImage3;
    typedef struct IFileSystemImage3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFileSystemImage3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFileSystemImage3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFileSystemImage3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFileSystemImage3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFileSystemImage3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFileSystemImage3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFileSystemImage3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Root )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__deref_out_opt IFsiDirectoryItem **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SessionStartBlock )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SessionStartBlock )(
            __RPC__in IFileSystemImage3 * This,
                       LONG newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FreeMediaBlocks )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_FreeMediaBlocks )(
            __RPC__in IFileSystemImage3 * This,
                       LONG newVal);
                               HRESULT ( STDMETHODCALLTYPE *SetMaxMediaBlocksFromDevice )(
            __RPC__in IFileSystemImage3 * This,
                       __RPC__in_opt IDiscRecorder2 *discRecorder);
                                        HRESULT ( STDMETHODCALLTYPE *get_UsedBlocks )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeName )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_VolumeName )(
            __RPC__in IFileSystemImage3 * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ImportedVolumeName )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_BootImageOptions )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__deref_out_opt IBootOptions **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_BootImageOptions )(
            __RPC__in IFileSystemImage3 * This,
                       __RPC__in_opt IBootOptions *newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileCount )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DirectoryCount )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkingDirectory )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_WorkingDirectory )(
            __RPC__in IFileSystemImage3 * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ChangePoint )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_StrictFileSystemCompliance )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_StrictFileSystemCompliance )(
            __RPC__in IFileSystemImage3 * This,
                       VARIANT_BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UseRestrictedCharacterSet )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_UseRestrictedCharacterSet )(
            __RPC__in IFileSystemImage3 * This,
                       VARIANT_BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileSystemsToCreate )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__out FsiFileSystems *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_FileSystemsToCreate )(
            __RPC__in IFileSystemImage3 * This,
                       FsiFileSystems newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileSystemsSupported )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__out FsiFileSystems *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_UDFRevision )(
            __RPC__in IFileSystemImage3 * This,
                       LONG newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UDFRevision )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UDFRevisionsSupported )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__deref_out_opt SAFEARRAY * *pVal);
                               HRESULT ( STDMETHODCALLTYPE *ChooseImageDefaults )(
            __RPC__in IFileSystemImage3 * This,
                       __RPC__in_opt IDiscRecorder2 *discRecorder);
                               HRESULT ( STDMETHODCALLTYPE *ChooseImageDefaultsForMediaType )(
            __RPC__in IFileSystemImage3 * This,
                       IMAPI_MEDIA_PHYSICAL_TYPE value);
                                        HRESULT ( STDMETHODCALLTYPE *put_ISO9660InterchangeLevel )(
            __RPC__in IFileSystemImage3 * This,
                       LONG newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ISO9660InterchangeLevel )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ISO9660InterchangeLevelsSupported )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__deref_out_opt SAFEARRAY * *pVal);
                               HRESULT ( STDMETHODCALLTYPE *CreateResultImage )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__deref_out_opt IFileSystemImageResult **resultStream);
                               HRESULT ( STDMETHODCALLTYPE *Exists )(
            __RPC__in IFileSystemImage3 * This,
                       __RPC__in BSTR fullPath,
                                     __RPC__out FsiItemType *itemType);
                               HRESULT ( STDMETHODCALLTYPE *CalculateDiscIdentifier )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__deref_out_opt BSTR *discIdentifier);
                               HRESULT ( STDMETHODCALLTYPE *IdentifyFileSystemsOnDisc )(
            __RPC__in IFileSystemImage3 * This,
                       __RPC__in_opt IDiscRecorder2 *discRecorder,
                                     __RPC__out FsiFileSystems *fileSystems);
                               HRESULT ( STDMETHODCALLTYPE *GetDefaultFileSystemForImport )(
            __RPC__in IFileSystemImage3 * This,
                       FsiFileSystems fileSystems,
                                     __RPC__out FsiFileSystems *importDefault);
                               HRESULT ( STDMETHODCALLTYPE *ImportFileSystem )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__out FsiFileSystems *importedFileSystem);
                               HRESULT ( STDMETHODCALLTYPE *ImportSpecificFileSystem )(
            __RPC__in IFileSystemImage3 * This,
                       FsiFileSystems fileSystemToUse);
                               HRESULT ( STDMETHODCALLTYPE *RollbackToChangePoint )(
            __RPC__in IFileSystemImage3 * This,
                       LONG changePoint);
                               HRESULT ( STDMETHODCALLTYPE *LockInChangePoint )(
            __RPC__in IFileSystemImage3 * This);
                               HRESULT ( STDMETHODCALLTYPE *CreateDirectoryItem )(
            __RPC__in IFileSystemImage3 * This,
                       __RPC__in BSTR name,
                                     __RPC__deref_out_opt IFsiDirectoryItem **newItem);
                               HRESULT ( STDMETHODCALLTYPE *CreateFileItem )(
            __RPC__in IFileSystemImage3 * This,
                       __RPC__in BSTR name,
                                     __RPC__deref_out_opt IFsiFileItem **newItem);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeNameUDF )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeNameJoliet )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeNameISO9660 )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_StageFiles )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_StageFiles )(
            __RPC__in IFileSystemImage3 * This,
                       VARIANT_BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MultisessionInterfaces )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__deref_out_opt SAFEARRAY * *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MultisessionInterfaces )(
            __RPC__in IFileSystemImage3 * This,
                       __RPC__in SAFEARRAY * newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_BootImageOptionsArray )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__deref_out_opt SAFEARRAY * *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_BootImageOptionsArray )(
            __RPC__in IFileSystemImage3 * This,
                       __RPC__in SAFEARRAY * newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CreateRedundantUdfMetadataFiles )(
            __RPC__in IFileSystemImage3 * This,
                                     __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CreateRedundantUdfMetadataFiles )(
            __RPC__in IFileSystemImage3 * This,
                       VARIANT_BOOL newVal);
                               HRESULT ( STDMETHODCALLTYPE *ProbeSpecificFileSystem )(
            __RPC__in IFileSystemImage3 * This,
                       FsiFileSystems fileSystemToProbe,
                                     __RPC__out VARIANT_BOOL *isAppendable);
        END_INTERFACE
    } IFileSystemImage3Vtbl;
    interface IFileSystemImage3
    {
        CONST_VTBL struct IFileSystemImage3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Root(This,pVal) )
    ( (This)->lpVtbl -> get_SessionStartBlock(This,pVal) )
    ( (This)->lpVtbl -> put_SessionStartBlock(This,newVal) )
    ( (This)->lpVtbl -> get_FreeMediaBlocks(This,pVal) )
    ( (This)->lpVtbl -> put_FreeMediaBlocks(This,newVal) )
    ( (This)->lpVtbl -> SetMaxMediaBlocksFromDevice(This,discRecorder) )
    ( (This)->lpVtbl -> get_UsedBlocks(This,pVal) )
    ( (This)->lpVtbl -> get_VolumeName(This,pVal) )
    ( (This)->lpVtbl -> put_VolumeName(This,newVal) )
    ( (This)->lpVtbl -> get_ImportedVolumeName(This,pVal) )
    ( (This)->lpVtbl -> get_BootImageOptions(This,pVal) )
    ( (This)->lpVtbl -> put_BootImageOptions(This,newVal) )
    ( (This)->lpVtbl -> get_FileCount(This,pVal) )
    ( (This)->lpVtbl -> get_DirectoryCount(This,pVal) )
    ( (This)->lpVtbl -> get_WorkingDirectory(This,pVal) )
    ( (This)->lpVtbl -> put_WorkingDirectory(This,newVal) )
    ( (This)->lpVtbl -> get_ChangePoint(This,pVal) )
    ( (This)->lpVtbl -> get_StrictFileSystemCompliance(This,pVal) )
    ( (This)->lpVtbl -> put_StrictFileSystemCompliance(This,newVal) )
    ( (This)->lpVtbl -> get_UseRestrictedCharacterSet(This,pVal) )
    ( (This)->lpVtbl -> put_UseRestrictedCharacterSet(This,newVal) )
    ( (This)->lpVtbl -> get_FileSystemsToCreate(This,pVal) )
    ( (This)->lpVtbl -> put_FileSystemsToCreate(This,newVal) )
    ( (This)->lpVtbl -> get_FileSystemsSupported(This,pVal) )
    ( (This)->lpVtbl -> put_UDFRevision(This,newVal) )
    ( (This)->lpVtbl -> get_UDFRevision(This,pVal) )
    ( (This)->lpVtbl -> get_UDFRevisionsSupported(This,pVal) )
    ( (This)->lpVtbl -> ChooseImageDefaults(This,discRecorder) )
    ( (This)->lpVtbl -> ChooseImageDefaultsForMediaType(This,value) )
    ( (This)->lpVtbl -> put_ISO9660InterchangeLevel(This,newVal) )
    ( (This)->lpVtbl -> get_ISO9660InterchangeLevel(This,pVal) )
    ( (This)->lpVtbl -> get_ISO9660InterchangeLevelsSupported(This,pVal) )
    ( (This)->lpVtbl -> CreateResultImage(This,resultStream) )
    ( (This)->lpVtbl -> Exists(This,fullPath,itemType) )
    ( (This)->lpVtbl -> CalculateDiscIdentifier(This,discIdentifier) )
    ( (This)->lpVtbl -> IdentifyFileSystemsOnDisc(This,discRecorder,fileSystems) )
    ( (This)->lpVtbl -> GetDefaultFileSystemForImport(This,fileSystems,importDefault) )
    ( (This)->lpVtbl -> ImportFileSystem(This,importedFileSystem) )
    ( (This)->lpVtbl -> ImportSpecificFileSystem(This,fileSystemToUse) )
    ( (This)->lpVtbl -> RollbackToChangePoint(This,changePoint) )
    ( (This)->lpVtbl -> LockInChangePoint(This) )
    ( (This)->lpVtbl -> CreateDirectoryItem(This,name,newItem) )
    ( (This)->lpVtbl -> CreateFileItem(This,name,newItem) )
    ( (This)->lpVtbl -> get_VolumeNameUDF(This,pVal) )
    ( (This)->lpVtbl -> get_VolumeNameJoliet(This,pVal) )
    ( (This)->lpVtbl -> get_VolumeNameISO9660(This,pVal) )
    ( (This)->lpVtbl -> get_StageFiles(This,pVal) )
    ( (This)->lpVtbl -> put_StageFiles(This,newVal) )
    ( (This)->lpVtbl -> get_MultisessionInterfaces(This,pVal) )
    ( (This)->lpVtbl -> put_MultisessionInterfaces(This,newVal) )
    ( (This)->lpVtbl -> get_BootImageOptionsArray(This,pVal) )
    ( (This)->lpVtbl -> put_BootImageOptionsArray(This,newVal) )
    ( (This)->lpVtbl -> get_CreateRedundantUdfMetadataFiles(This,pVal) )
    ( (This)->lpVtbl -> put_CreateRedundantUdfMetadataFiles(This,newVal) )
    ( (This)->lpVtbl -> ProbeSpecificFileSystem(This,fileSystemToProbe,isAppendable) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0016_v0_0_s_ifspec;
EXTERN_C const IID IID_DFileSystemImageEvents;
    typedef struct DFileSystemImageEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DFileSystemImageEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DFileSystemImageEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DFileSystemImageEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DFileSystemImageEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DFileSystemImageEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DFileSystemImageEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DFileSystemImageEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in DFileSystemImageEvents * This,
                       __RPC__in_opt IDispatch *object,
                       __RPC__in BSTR currentFile,
                       LONG copiedSectors,
                       LONG totalSectors);
        END_INTERFACE
    } DFileSystemImageEventsVtbl;
    interface DFileSystemImageEvents
    {
        CONST_VTBL struct DFileSystemImageEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Update(This,object,currentFile,copiedSectors,totalSectors) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0017_v0_0_s_ifspec;
EXTERN_C const IID IID_DFileSystemImageImportEvents;
    typedef struct DFileSystemImageImportEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DFileSystemImageImportEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DFileSystemImageImportEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DFileSystemImageImportEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DFileSystemImageImportEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DFileSystemImageImportEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DFileSystemImageImportEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DFileSystemImageImportEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *UpdateImport )(
            __RPC__in DFileSystemImageImportEvents * This,
                       __RPC__in_opt IDispatch *object,
                       FsiFileSystems fileSystem,
                       __RPC__in BSTR currentItem,
                       LONG importedDirectoryItems,
                       LONG totalDirectoryItems,
                       LONG importedFileItems,
                       LONG totalFileItems);
        END_INTERFACE
    } DFileSystemImageImportEventsVtbl;
    interface DFileSystemImageImportEvents
    {
        CONST_VTBL struct DFileSystemImageImportEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> UpdateImport(This,object,fileSystem,currentItem,importedDirectoryItems,totalDirectoryItems,importedFileItems,totalFileItems) )
EXTERN_C const IID IID_IIsoImageManager;
    typedef struct IIsoImageManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IIsoImageManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IIsoImageManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IIsoImageManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IIsoImageManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IIsoImageManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IIsoImageManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IIsoImageManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IIsoImageManager * This,
                                     __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Stream )(
            __RPC__in IIsoImageManager * This,
                                __RPC__deref_out_opt IStream **data);
                               HRESULT ( STDMETHODCALLTYPE *SetPath )(
            __RPC__in IIsoImageManager * This,
                       __RPC__in BSTR Val);
                               HRESULT ( STDMETHODCALLTYPE *SetStream )(
            __RPC__in IIsoImageManager * This,
                       __RPC__in_opt IStream *data);
                               HRESULT ( STDMETHODCALLTYPE *Validate )(
            __RPC__in IIsoImageManager * This);
        END_INTERFACE
    } IIsoImageManagerVtbl;
    interface IIsoImageManager
    {
        CONST_VTBL struct IIsoImageManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Path(This,pVal) )
    ( (This)->lpVtbl -> get_Stream(This,data) )
    ( (This)->lpVtbl -> SetPath(This,Val) )
    ( (This)->lpVtbl -> SetStream(This,data) )
    ( (This)->lpVtbl -> Validate(This) )
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0019_v0_0_s_ifspec;
EXTERN_C const IID LIBID_IMAPI2FS;
EXTERN_C const CLSID CLSID_BootOptions;
class DECLSPEC_UUID("2C941FCE-975B-59BE-A960-9A2A262853A5")
BootOptions;
EXTERN_C const CLSID CLSID_FsiStream;
class DECLSPEC_UUID("2C941FCD-975B-59BE-A960-9A2A262853A5")
FsiStream;
EXTERN_C const CLSID CLSID_FileSystemImageResult;
class DECLSPEC_UUID("2C941FCC-975B-59BE-A960-9A2A262853A5")
FileSystemImageResult;
EXTERN_C const CLSID CLSID_ProgressItem;
class DECLSPEC_UUID("2C941FCB-975B-59BE-A960-9A2A262853A5")
ProgressItem;
EXTERN_C const CLSID CLSID_EnumProgressItems;
class DECLSPEC_UUID("2C941FCA-975B-59BE-A960-9A2A262853A5")
EnumProgressItems;
EXTERN_C const CLSID CLSID_ProgressItems;
class DECLSPEC_UUID("2C941FC9-975B-59BE-A960-9A2A262853A5")
ProgressItems;
EXTERN_C const CLSID CLSID_FsiDirectoryItem;
class DECLSPEC_UUID("2C941FC8-975B-59BE-A960-9A2A262853A5")
FsiDirectoryItem;
EXTERN_C const CLSID CLSID_FsiFileItem;
class DECLSPEC_UUID("2C941FC7-975B-59BE-A960-9A2A262853A5")
FsiFileItem;
EXTERN_C const CLSID CLSID_EnumFsiItems;
class DECLSPEC_UUID("2C941FC6-975B-59BE-A960-9A2A262853A5")
EnumFsiItems;
EXTERN_C const CLSID CLSID_FsiNamedStreams;
class DECLSPEC_UUID("C6B6F8ED-6D19-44b4-B539-B159B793A32D")
FsiNamedStreams;
EXTERN_C const CLSID CLSID_MsftFileSystemImage;
class DECLSPEC_UUID("2C941FC5-975B-59BE-A960-9A2A262853A5")
MsftFileSystemImage;
EXTERN_C const CLSID CLSID_MsftIsoImageManager;
class DECLSPEC_UUID("CEEE3B62-8F56-4056-869B-EF16917E3EFC")
MsftIsoImageManager;
EXTERN_C const CLSID CLSID_BlockRange;
class DECLSPEC_UUID("B507CA27-2204-11DD-966A-001AA01BBC58")
BlockRange;
EXTERN_C const CLSID CLSID_BlockRangeList;
class DECLSPEC_UUID("B507CA28-2204-11DD-966A-001AA01BBC58")
BlockRangeList;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0020_v0_0_s_ifspec;
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
                          HRESULT STDMETHODCALLTYPE IEnumProgressItems_Next_Proxy(
    IEnumProgressItems * This,
               ULONG celt,
                         IProgressItem **rgelt,
                ULONG *pceltFetched);
                            HRESULT STDMETHODCALLTYPE IEnumProgressItems_Next_Stub(
    __RPC__in IEnumProgressItems * This,
                      __RPC__in_range(1,0x7fffffff) ULONG celt,
                         __RPC__out_ecount_full(celt) IProgressItem **rgelt,
                __RPC__out ULONG *pceltFetched);
                          HRESULT STDMETHODCALLTYPE IEnumFsiItems_Next_Proxy(
    IEnumFsiItems * This,
               ULONG celt,
                         IFsiItem **rgelt,
                ULONG *pceltFetched);
                            HRESULT STDMETHODCALLTYPE IEnumFsiItems_Next_Stub(
    __RPC__in IEnumFsiItems * This,
                      __RPC__in_range(0,0x7fffffff) ULONG celt,
                         __RPC__out_ecount_full(celt) IFsiItem **rgelt,
                __RPC__out ULONG *pceltFetched);
}
