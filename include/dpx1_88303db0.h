#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDpxJob IDpxJob;
typedef interface IFileHashProviderCallback IFileHashProviderCallback;
typedef interface IDpxJob2 IDpxJob2;
typedef interface IDpxContainer IDpxContainer;
typedef interface IDpxFile IDpxFile;
typedef interface IDpxFile2 IDpxFile2;
typedef interface IDpxContainerDirectoryEntry IDpxContainerDirectoryEntry;
typedef interface IDpxDownloadProvider IDpxDownloadProvider;
typedef interface IDpxDownloadCallback IDpxDownloadCallback;
typedef interface IEnumDpxContainers IEnumDpxContainers;
typedef interface IEnumDpxFiles IEnumDpxFiles;
typedef interface IEnumDpxContainerDirectoryEntries IEnumDpxContainerDirectoryEntries;
typedef interface IDpxEncryptedContainer IDpxEncryptedContainer;
typedef interface IDpxContainer2 IDpxContainer2;
typedef interface IDpxContainer3 IDpxContainer3;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <SpecStrings.h>
typedef unsigned int ALG_ID;
typedef unsigned int LOCATIONTYPE;
typedef
enum __MIDL___MIDL_itf_dpx1_0000_0000_0001
    {
        DPX_RESUME_AND_DOWNLOAD = 0,
        DPX_RESUME_UNTIL_DOWNLOAD = 0x1,
        DPX_RESUME_AND_DOWNLOAD_FALLBACK = 0x2,
        DPX_RESUME_UNTIL_DOWNLOAD_NO_CLONE = 0x3
    } DPX_RESUME_TYPE;
typedef struct __MIDL___MIDL_itf_dpx1_0000_0000_0002
    {
    ALG_ID AlgorithmId;
    UINT HashSize;
                      BYTE HashData[ 64 ];
    } DPX_HASH;
typedef struct __MIDL___MIDL_itf_dpx1_0000_0000_0003
    {
    UINT64 Offset;
    UINT64 Length;
    } DPX_BYTE_RANGE;
typedef
enum __MIDL___MIDL_itf_dpx1_0000_0000_0004
    {
        DPX_PHASE_JOB_IDLE = 0,
        DPX_PHASE_DOWNLOAD_INDEX = 0x10,
        DPX_PHASE_INVENTORY = 0x20,
        DPX_PHASE_DOWNLOAD_FILES = 0x30,
        DPX_PHASE_EXPAND_FILES = 0x40,
        DPX_PHASE_JOB_INPROGRESS = 0x50,
        DPX_PHASE_JOB_COMPLETE = 0x7f00,
        DPX_PHASE_JOB_CANCELLED = 0xfffe,
        DPX_PHASE_JOB_FAILURE = 0xffff
    } DPX_PROGRESS_PHASE;
typedef struct __MIDL___MIDL_itf_dpx1_0000_0000_0005
    {
    UINT64 Completed;
    UINT64 Remaining;
    } DPX_PROGRESS_REMAIN;
typedef struct __MIDL___MIDL_itf_dpx1_0000_0000_0006
    {
    DPX_PROGRESS_REMAIN Inventory;
    DPX_PROGRESS_REMAIN Download;
    DPX_PROGRESS_REMAIN Expansion;
    DPX_PROGRESS_REMAIN Files;
    DPX_PROGRESS_REMAIN Overall;
    DPX_PROGRESS_PHASE ePhase;
    } DPX_PROGRESS;
extern RPC_IF_HANDLE __MIDL_itf_dpx1_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dpx1_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDpxJob;
    typedef struct IDpxJobVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDpxJob * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDpxJob * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDpxJob * This);
        HRESULT ( STDMETHODCALLTYPE *GetTargetPath )(
            __RPC__in IDpxJob * This,
                        __RPC__deref_out_opt LPWSTR *TargetPath);
        HRESULT ( STDMETHODCALLTYPE *AddContainer )(
            __RPC__in IDpxJob * This,
                       __RPC__in LPCWSTR ContainerPath,
                        __RPC__deref_out_opt IDpxContainer **ppContainer);
        HRESULT ( STDMETHODCALLTYPE *EnumContainers )(
            __RPC__in IDpxJob * This,
                        __RPC__deref_out_opt IEnumDpxContainers **ppEnumContainers);
        HRESULT ( STDMETHODCALLTYPE *SetDownloadProvider )(
            __RPC__in IDpxJob * This,
                               __RPC__in_opt IDpxDownloadProvider *pDownloadProvider);
        HRESULT ( STDMETHODCALLTYPE *GetDownloadProvider )(
            __RPC__in IDpxJob * This,
                        __RPC__deref_out_opt IDpxDownloadProvider **ppDownloadProvider);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IDpxJob * This,
            DPX_RESUME_TYPE eResumeType);
        HRESULT ( STDMETHODCALLTYPE *Suspend )(
            __RPC__in IDpxJob * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IDpxJob * This);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IDpxJob * This,
                        __RPC__out DPX_PROGRESS *pProgress);
        HRESULT ( STDMETHODCALLTYPE *SaveJobState )(
            __RPC__in IDpxJob * This);
        HRESULT ( STDMETHODCALLTYPE *SetUserValue )(
            __RPC__in IDpxJob * This,
                       UINT64 UserValue);
        HRESULT ( STDMETHODCALLTYPE *GetUserValue )(
            __RPC__in IDpxJob * This,
                        __RPC__out UINT64 *pUserValue);
        HRESULT ( STDMETHODCALLTYPE *SetOptionValue )(
            __RPC__in IDpxJob * This,
                       __RPC__in LPCWSTR OptionName,
                               __RPC__in_opt LPCWSTR OptionValue);
        HRESULT ( STDMETHODCALLTYPE *GetOptionValue )(
            __RPC__in IDpxJob * This,
                       __RPC__in LPCWSTR OptionName,
                        __RPC__deref_out_opt LPWSTR *pOptionValue);
                      void ( STDMETHODCALLTYPE *FreeMemory )(
            IDpxJob * This,
                       void *Allocation);
        END_INTERFACE
    } IDpxJobVtbl;
    interface IDpxJob
    {
        CONST_VTBL struct IDpxJobVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTargetPath(This,TargetPath) )
    ( (This)->lpVtbl -> AddContainer(This,ContainerPath,ppContainer) )
    ( (This)->lpVtbl -> EnumContainers(This,ppEnumContainers) )
    ( (This)->lpVtbl -> SetDownloadProvider(This,pDownloadProvider) )
    ( (This)->lpVtbl -> GetDownloadProvider(This,ppDownloadProvider) )
    ( (This)->lpVtbl -> Resume(This,eResumeType) )
    ( (This)->lpVtbl -> Suspend(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> GetProgress(This,pProgress) )
    ( (This)->lpVtbl -> SaveJobState(This) )
    ( (This)->lpVtbl -> SetUserValue(This,UserValue) )
    ( (This)->lpVtbl -> GetUserValue(This,pUserValue) )
    ( (This)->lpVtbl -> SetOptionValue(This,OptionName,OptionValue) )
    ( (This)->lpVtbl -> GetOptionValue(This,OptionName,pOptionValue) )
    ( (This)->lpVtbl -> FreeMemory(This,Allocation) )
enum class DPX_FILE_PROVIDER_QUERY_DISPOSITION
{
    Invalid = 0,
    Success = 1,
    Compressed = 2
};
extern RPC_IF_HANDLE __MIDL_itf_dpx1_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dpx1_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IFileHashProviderCallback;
    typedef struct IFileHashProviderCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFileHashProviderCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFileHashProviderCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFileHashProviderCallback * This);
        HRESULT ( STDMETHODCALLTYPE *GetFileHash )(
            __RPC__in IFileHashProviderCallback * This,
                       __RPC__in LPCWSTR FilePath,
                       ALG_ID algId,
                        __RPC__out DPX_FILE_PROVIDER_QUERY_DISPOSITION *pDisposition,
                       UINT cbHashData,
                                 __RPC__out_ecount_full(cbHashData) BYTE pbHashData[ ]);
        END_INTERFACE
    } IFileHashProviderCallbackVtbl;
    interface IFileHashProviderCallback
    {
        CONST_VTBL struct IFileHashProviderCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFileHash(This,FilePath,algId,pDisposition,cbHashData,pbHashData) )
EXTERN_C const IID IID_IDpxJob2;
    typedef struct IDpxJob2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDpxJob2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDpxJob2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDpxJob2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTargetPath )(
            __RPC__in IDpxJob2 * This,
                        __RPC__deref_out_opt LPWSTR *TargetPath);
        HRESULT ( STDMETHODCALLTYPE *AddContainer )(
            __RPC__in IDpxJob2 * This,
                       __RPC__in LPCWSTR ContainerPath,
                        __RPC__deref_out_opt IDpxContainer **ppContainer);
        HRESULT ( STDMETHODCALLTYPE *EnumContainers )(
            __RPC__in IDpxJob2 * This,
                        __RPC__deref_out_opt IEnumDpxContainers **ppEnumContainers);
        HRESULT ( STDMETHODCALLTYPE *SetDownloadProvider )(
            __RPC__in IDpxJob2 * This,
                               __RPC__in_opt IDpxDownloadProvider *pDownloadProvider);
        HRESULT ( STDMETHODCALLTYPE *GetDownloadProvider )(
            __RPC__in IDpxJob2 * This,
                        __RPC__deref_out_opt IDpxDownloadProvider **ppDownloadProvider);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IDpxJob2 * This,
            DPX_RESUME_TYPE eResumeType);
        HRESULT ( STDMETHODCALLTYPE *Suspend )(
            __RPC__in IDpxJob2 * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IDpxJob2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IDpxJob2 * This,
                        __RPC__out DPX_PROGRESS *pProgress);
        HRESULT ( STDMETHODCALLTYPE *SaveJobState )(
            __RPC__in IDpxJob2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetUserValue )(
            __RPC__in IDpxJob2 * This,
                       UINT64 UserValue);
        HRESULT ( STDMETHODCALLTYPE *GetUserValue )(
            __RPC__in IDpxJob2 * This,
                        __RPC__out UINT64 *pUserValue);
        HRESULT ( STDMETHODCALLTYPE *SetOptionValue )(
            __RPC__in IDpxJob2 * This,
                       __RPC__in LPCWSTR OptionName,
                               __RPC__in_opt LPCWSTR OptionValue);
        HRESULT ( STDMETHODCALLTYPE *GetOptionValue )(
            __RPC__in IDpxJob2 * This,
                       __RPC__in LPCWSTR OptionName,
                        __RPC__deref_out_opt LPWSTR *pOptionValue);
                      void ( STDMETHODCALLTYPE *FreeMemory )(
            IDpxJob2 * This,
                       void *Allocation);
        HRESULT ( STDMETHODCALLTYPE *SetInventoryProvider )(
            __RPC__in IDpxJob2 * This,
                       LOCATIONTYPE locationType,
                       __RPC__in_opt IFileHashProviderCallback *pProvider);
        END_INTERFACE
    } IDpxJob2Vtbl;
    interface IDpxJob2
    {
        CONST_VTBL struct IDpxJob2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTargetPath(This,TargetPath) )
    ( (This)->lpVtbl -> AddContainer(This,ContainerPath,ppContainer) )
    ( (This)->lpVtbl -> EnumContainers(This,ppEnumContainers) )
    ( (This)->lpVtbl -> SetDownloadProvider(This,pDownloadProvider) )
    ( (This)->lpVtbl -> GetDownloadProvider(This,ppDownloadProvider) )
    ( (This)->lpVtbl -> Resume(This,eResumeType) )
    ( (This)->lpVtbl -> Suspend(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> GetProgress(This,pProgress) )
    ( (This)->lpVtbl -> SaveJobState(This) )
    ( (This)->lpVtbl -> SetUserValue(This,UserValue) )
    ( (This)->lpVtbl -> GetUserValue(This,pUserValue) )
    ( (This)->lpVtbl -> SetOptionValue(This,OptionName,OptionValue) )
    ( (This)->lpVtbl -> GetOptionValue(This,OptionName,pOptionValue) )
    ( (This)->lpVtbl -> FreeMemory(This,Allocation) )
    ( (This)->lpVtbl -> SetInventoryProvider(This,locationType,pProvider) )
EXTERN_C const IID IID_IDpxContainer;
    typedef struct IDpxContainerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDpxContainer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDpxContainer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDpxContainer * This);
        HRESULT ( STDMETHODCALLTYPE *SetContainerPath )(
            __RPC__in IDpxContainer * This,
                       __RPC__in LPCWSTR ContainerPath);
        HRESULT ( STDMETHODCALLTYPE *GetContainerPath )(
            __RPC__in IDpxContainer * This,
                        __RPC__deref_out_opt LPWSTR *pContainerPath);
        HRESULT ( STDMETHODCALLTYPE *AddFileToExtract )(
            __RPC__in IDpxContainer * This,
                       __RPC__in LPCWSTR SourceFileName,
                               __RPC__in_opt LPCWSTR TargetFileName,
                               __RPC__in_opt DPX_HASH *TargetFileHash);
        HRESULT ( STDMETHODCALLTYPE *AddFileToExtract2 )(
            __RPC__in IDpxContainer * This,
                       __RPC__in LPCWSTR SourceFileName,
                               __RPC__in_opt LPCWSTR TargetFileName,
                        __RPC__deref_out_opt IDpxFile **ppFile);
        HRESULT ( STDMETHODCALLTYPE *ExtractAllFiles )(
            __RPC__in IDpxContainer * This);
        HRESULT ( STDMETHODCALLTYPE *EnumFilesToExtract )(
            __RPC__in IDpxContainer * This,
                        __RPC__deref_out_opt IEnumDpxFiles **ppEnumFiles);
        HRESULT ( STDMETHODCALLTYPE *SetExpectedContainerIndexHash )(
            __RPC__in IDpxContainer * This,
                       __RPC__in DPX_HASH *pExpectedHash);
        HRESULT ( STDMETHODCALLTYPE *GetExpectedContainerIndexHash )(
            __RPC__in IDpxContainer * This,
                        __RPC__deref_out_opt DPX_HASH **ppExpectedHash);
        HRESULT ( STDMETHODCALLTYPE *ProvideContainerIndex )(
            __RPC__in IDpxContainer * This,
                       UINT IndexSize,
                                __RPC__in_ecount_full(IndexSize) BYTE IndexData[ ]);
        HRESULT ( STDMETHODCALLTYPE *ProvideContainerIndexByFile )(
            __RPC__in IDpxContainer * This,
                       __RPC__in LPCWSTR IndexFileName);
        HRESULT ( STDMETHODCALLTYPE *EnumDirectoryEntries )(
            __RPC__in IDpxContainer * This,
                        __RPC__deref_out_opt IEnumDpxContainerDirectoryEntries **ppEnumEntries);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IDpxContainer * This);
        HRESULT ( STDMETHODCALLTYPE *SetUserValue )(
            __RPC__in IDpxContainer * This,
                       UINT64 UserValue);
        HRESULT ( STDMETHODCALLTYPE *GetUserValue )(
            __RPC__in IDpxContainer * This,
                        __RPC__out UINT64 *pUserValue);
                      void ( STDMETHODCALLTYPE *FreeMemory )(
            IDpxContainer * This,
                       void *Allocation);
        END_INTERFACE
    } IDpxContainerVtbl;
    interface IDpxContainer
    {
        CONST_VTBL struct IDpxContainerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetContainerPath(This,ContainerPath) )
    ( (This)->lpVtbl -> GetContainerPath(This,pContainerPath) )
    ( (This)->lpVtbl -> AddFileToExtract(This,SourceFileName,TargetFileName,TargetFileHash) )
    ( (This)->lpVtbl -> AddFileToExtract2(This,SourceFileName,TargetFileName,ppFile) )
    ( (This)->lpVtbl -> ExtractAllFiles(This) )
    ( (This)->lpVtbl -> EnumFilesToExtract(This,ppEnumFiles) )
    ( (This)->lpVtbl -> SetExpectedContainerIndexHash(This,pExpectedHash) )
    ( (This)->lpVtbl -> GetExpectedContainerIndexHash(This,ppExpectedHash) )
    ( (This)->lpVtbl -> ProvideContainerIndex(This,IndexSize,IndexData) )
    ( (This)->lpVtbl -> ProvideContainerIndexByFile(This,IndexFileName) )
    ( (This)->lpVtbl -> EnumDirectoryEntries(This,ppEnumEntries) )
    ( (This)->lpVtbl -> Remove(This) )
    ( (This)->lpVtbl -> SetUserValue(This,UserValue) )
    ( (This)->lpVtbl -> GetUserValue(This,pUserValue) )
    ( (This)->lpVtbl -> FreeMemory(This,Allocation) )
EXTERN_C const IID IID_IDpxFile;
    typedef struct IDpxFileVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDpxFile * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDpxFile * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDpxFile * This);
        HRESULT ( STDMETHODCALLTYPE *GetSourceFileName )(
            __RPC__in IDpxFile * This,
                        __RPC__deref_out_opt LPWSTR *pSourceFileName);
        HRESULT ( STDMETHODCALLTYPE *GetTargetFileName )(
            __RPC__in IDpxFile * This,
                        __RPC__deref_out_opt LPWSTR *pTargetFileName);
        HRESULT ( STDMETHODCALLTYPE *SetExpectedHash )(
            __RPC__in IDpxFile * This,
                       __RPC__in DPX_HASH *pExpectedHash);
        HRESULT ( STDMETHODCALLTYPE *GetExpectedHash )(
            __RPC__in IDpxFile * This,
                        __RPC__deref_out_opt DPX_HASH **ppExpectedHash);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IDpxFile * This);
        HRESULT ( STDMETHODCALLTYPE *SetUserValue )(
            __RPC__in IDpxFile * This,
                       UINT64 UserValue);
        HRESULT ( STDMETHODCALLTYPE *GetUserValue )(
            __RPC__in IDpxFile * This,
                        __RPC__out UINT64 *pUserValue);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IDpxFile * This,
                        __RPC__out HRESULT *pStatus);
                      void ( STDMETHODCALLTYPE *FreeMemory )(
            IDpxFile * This,
                       void *Allocation);
        END_INTERFACE
    } IDpxFileVtbl;
    interface IDpxFile
    {
        CONST_VTBL struct IDpxFileVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSourceFileName(This,pSourceFileName) )
    ( (This)->lpVtbl -> GetTargetFileName(This,pTargetFileName) )
    ( (This)->lpVtbl -> SetExpectedHash(This,pExpectedHash) )
    ( (This)->lpVtbl -> GetExpectedHash(This,ppExpectedHash) )
    ( (This)->lpVtbl -> Remove(This) )
    ( (This)->lpVtbl -> SetUserValue(This,UserValue) )
    ( (This)->lpVtbl -> GetUserValue(This,pUserValue) )
    ( (This)->lpVtbl -> GetStatus(This,pStatus) )
    ( (This)->lpVtbl -> FreeMemory(This,Allocation) )
EXTERN_C const IID IID_IDpxFile2;
    typedef struct IDpxFile2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDpxFile2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDpxFile2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDpxFile2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSourceFileName )(
            __RPC__in IDpxFile2 * This,
                        __RPC__deref_out_opt LPWSTR *pSourceFileName);
        HRESULT ( STDMETHODCALLTYPE *GetTargetFileName )(
            __RPC__in IDpxFile2 * This,
                        __RPC__deref_out_opt LPWSTR *pTargetFileName);
        HRESULT ( STDMETHODCALLTYPE *SetExpectedHash )(
            __RPC__in IDpxFile2 * This,
                       __RPC__in DPX_HASH *pExpectedHash);
        HRESULT ( STDMETHODCALLTYPE *GetExpectedHash )(
            __RPC__in IDpxFile2 * This,
                        __RPC__deref_out_opt DPX_HASH **ppExpectedHash);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IDpxFile2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetUserValue )(
            __RPC__in IDpxFile2 * This,
                       UINT64 UserValue);
        HRESULT ( STDMETHODCALLTYPE *GetUserValue )(
            __RPC__in IDpxFile2 * This,
                        __RPC__out UINT64 *pUserValue);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IDpxFile2 * This,
                        __RPC__out HRESULT *pStatus);
                      void ( STDMETHODCALLTYPE *FreeMemory )(
            IDpxFile2 * This,
                       void *Allocation);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IDpxFile2 * This,
                        __RPC__out UINT64 *pSize);
        END_INTERFACE
    } IDpxFile2Vtbl;
    interface IDpxFile2
    {
        CONST_VTBL struct IDpxFile2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSourceFileName(This,pSourceFileName) )
    ( (This)->lpVtbl -> GetTargetFileName(This,pTargetFileName) )
    ( (This)->lpVtbl -> SetExpectedHash(This,pExpectedHash) )
    ( (This)->lpVtbl -> GetExpectedHash(This,ppExpectedHash) )
    ( (This)->lpVtbl -> Remove(This) )
    ( (This)->lpVtbl -> SetUserValue(This,UserValue) )
    ( (This)->lpVtbl -> GetUserValue(This,pUserValue) )
    ( (This)->lpVtbl -> GetStatus(This,pStatus) )
    ( (This)->lpVtbl -> FreeMemory(This,Allocation) )
    ( (This)->lpVtbl -> GetSize(This,pSize) )
EXTERN_C const IID IID_IDpxContainerDirectoryEntry;
    typedef struct IDpxContainerDirectoryEntryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDpxContainerDirectoryEntry * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDpxContainerDirectoryEntry * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDpxContainerDirectoryEntry * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IDpxContainerDirectoryEntry * This,
                        __RPC__deref_out_opt LPWSTR *pDirEntryName);
        HRESULT ( STDMETHODCALLTYPE *GetHash )(
            __RPC__in IDpxContainerDirectoryEntry * This,
                        __RPC__deref_out_opt DPX_HASH **pDirEntryHash);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IDpxContainerDirectoryEntry * This,
                        __RPC__out UINT64 *pDirEntrySize);
        HRESULT ( STDMETHODCALLTYPE *GetTime )(
            __RPC__in IDpxContainerDirectoryEntry * This,
                        __RPC__out FILETIME *pDirEntryTime);
                      void ( STDMETHODCALLTYPE *FreeMemory )(
            IDpxContainerDirectoryEntry * This,
                       void *Allocation);
        END_INTERFACE
    } IDpxContainerDirectoryEntryVtbl;
    interface IDpxContainerDirectoryEntry
    {
        CONST_VTBL struct IDpxContainerDirectoryEntryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,pDirEntryName) )
    ( (This)->lpVtbl -> GetHash(This,pDirEntryHash) )
    ( (This)->lpVtbl -> GetSize(This,pDirEntrySize) )
    ( (This)->lpVtbl -> GetTime(This,pDirEntryTime) )
    ( (This)->lpVtbl -> FreeMemory(This,Allocation) )
EXTERN_C const IID IID_IDpxDownloadProvider;
    typedef struct IDpxDownloadProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDpxDownloadProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDpxDownloadProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDpxDownloadProvider * This);
        HRESULT ( STDMETHODCALLTYPE *SetProvideDataCallback )(
            __RPC__in IDpxDownloadProvider * This,
                       __RPC__in_opt IDpxDownloadCallback *pProvideData);
        HRESULT ( STDMETHODCALLTYPE *GetProvideDataCallback )(
            __RPC__in IDpxDownloadProvider * This,
                        __RPC__deref_out_opt IDpxDownloadCallback **ppProvideData);
        HRESULT ( STDMETHODCALLTYPE *AddContainer )(
            __RPC__in IDpxDownloadProvider * This,
                       __RPC__in LPCWSTR ContainerFilePath,
                       UINT64 ContainerId);
        HRESULT ( STDMETHODCALLTYPE *AddRanges )(
            __RPC__in IDpxDownloadProvider * This,
                       UINT64 ContainerId,
                       UINT RangeCount,
                                __RPC__in_ecount_full(RangeCount) DPX_BYTE_RANGE RangeList[ ]);
        HRESULT ( STDMETHODCALLTYPE *GetContainers )(
            __RPC__in IDpxDownloadProvider * This,
                        __RPC__out UINT *ContainerCount,
                                          __RPC__deref_out_ecount_full_opt(*ContainerCount) UINT64 **ppContainerIdArray);
        HRESULT ( STDMETHODCALLTYPE *GetContainerPath )(
            __RPC__in IDpxDownloadProvider * This,
                       UINT64 ContainerId,
                        __RPC__deref_out_opt LPWSTR *ContainerPath);
        HRESULT ( STDMETHODCALLTYPE *GetRanges )(
            __RPC__in IDpxDownloadProvider * This,
                       UINT64 ContainerId,
                       BOOL IncludeCompletedRanges,
                        __RPC__out UINT *RangeCount,
                                          __RPC__deref_out_ecount_full_opt(*RangeCount) DPX_BYTE_RANGE **ppRangeArray);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IDpxDownloadProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Suspend )(
            __RPC__in IDpxDownloadProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IDpxDownloadProvider * This);
        HRESULT ( STDMETHODCALLTYPE *WaitForCompletion )(
            __RPC__in IDpxDownloadProvider * This,
                       DWORD TimeoutMilliseconds);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IDpxDownloadProvider * This,
                        __RPC__out DPX_PROGRESS_REMAIN *pDownloadProgress);
        HRESULT ( STDMETHODCALLTYPE *ClearRequest )(
            __RPC__in IDpxDownloadProvider * This);
                      void ( STDMETHODCALLTYPE *FreeMemory )(
            IDpxDownloadProvider * This,
                       void *Allocation);
        END_INTERFACE
    } IDpxDownloadProviderVtbl;
    interface IDpxDownloadProvider
    {
        CONST_VTBL struct IDpxDownloadProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetProvideDataCallback(This,pProvideData) )
    ( (This)->lpVtbl -> GetProvideDataCallback(This,ppProvideData) )
    ( (This)->lpVtbl -> AddContainer(This,ContainerFilePath,ContainerId) )
    ( (This)->lpVtbl -> AddRanges(This,ContainerId,RangeCount,RangeList) )
    ( (This)->lpVtbl -> GetContainers(This,ContainerCount,ppContainerIdArray) )
    ( (This)->lpVtbl -> GetContainerPath(This,ContainerId,ContainerPath) )
    ( (This)->lpVtbl -> GetRanges(This,ContainerId,IncludeCompletedRanges,RangeCount,ppRangeArray) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> Suspend(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> WaitForCompletion(This,TimeoutMilliseconds) )
    ( (This)->lpVtbl -> GetProgress(This,pDownloadProgress) )
    ( (This)->lpVtbl -> ClearRequest(This) )
    ( (This)->lpVtbl -> FreeMemory(This,Allocation) )
EXTERN_C const IID IID_IDpxDownloadCallback;
    typedef struct IDpxDownloadCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDpxDownloadCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDpxDownloadCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDpxDownloadCallback * This);
        HRESULT ( STDMETHODCALLTYPE *ProvideRequestedData )(
            __RPC__in IDpxDownloadCallback * This,
                       UINT64 ContainerId,
                       UINT RangeCount,
                                __RPC__in_ecount_full(RangeCount) DPX_BYTE_RANGE RangeList[ ],
                                __RPC__in_ecount_full(RangeCount) const BYTE *RangeData[ ]);
        HRESULT ( STDMETHODCALLTYPE *ProvideRequestedDataByFile )(
            __RPC__in IDpxDownloadCallback * This,
                       UINT64 ContainerId,
                       __RPC__in LPCWSTR ResponseFilePath,
                       UINT RangeCount,
                                __RPC__in_ecount_full(RangeCount) DPX_BYTE_RANGE RangeArray[ ],
                                __RPC__in_ecount_full(RangeCount) UINT64 OffsetInResponseFile[ ]);
        HRESULT ( STDMETHODCALLTYPE *ProvideRequestedDataByPackedRangeFile )(
            __RPC__in IDpxDownloadCallback * This,
                       UINT64 ContainerId,
                       __RPC__in LPCWSTR ResponseFilePath);
        END_INTERFACE
    } IDpxDownloadCallbackVtbl;
    interface IDpxDownloadCallback
    {
        CONST_VTBL struct IDpxDownloadCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ProvideRequestedData(This,ContainerId,RangeCount,RangeList,RangeData) )
    ( (This)->lpVtbl -> ProvideRequestedDataByFile(This,ContainerId,ResponseFilePath,RangeCount,RangeArray,OffsetInResponseFile) )
    ( (This)->lpVtbl -> ProvideRequestedDataByPackedRangeFile(This,ContainerId,ResponseFilePath) )
EXTERN_C const IID IID_IEnumDpxContainers;
    typedef struct IEnumDpxContainersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumDpxContainers * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumDpxContainers * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumDpxContainers * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumDpxContainers * This,
                       UINT ItemCount,
                                            __RPC__out_ecount_part(ItemCount, *pFetchedCount) IDpxContainer **ppContainers,
                        __RPC__out UINT *pFetchedCount);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumDpxContainers * This,
                       UINT ItemCount);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumDpxContainers * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumDpxContainers * This,
                        __RPC__deref_out_opt IEnumDpxContainers **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumDpxContainers * This,
                        __RPC__out UINT *pItemCount);
        END_INTERFACE
    } IEnumDpxContainersVtbl;
    interface IEnumDpxContainers
    {
        CONST_VTBL struct IEnumDpxContainersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,ItemCount,ppContainers,pFetchedCount) )
    ( (This)->lpVtbl -> Skip(This,ItemCount) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> GetCount(This,pItemCount) )
EXTERN_C const IID IID_IEnumDpxFiles;
    typedef struct IEnumDpxFilesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumDpxFiles * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumDpxFiles * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumDpxFiles * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumDpxFiles * This,
                       UINT ItemCount,
                                            __RPC__out_ecount_part(ItemCount, *pFetchedCount) IDpxFile **ppFiles,
                        __RPC__out UINT *pFetchedCount);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumDpxFiles * This,
                       UINT ItemCount);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumDpxFiles * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumDpxFiles * This,
                        __RPC__deref_out_opt IEnumDpxFiles **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumDpxFiles * This,
                        __RPC__out UINT *pItemCount);
        END_INTERFACE
    } IEnumDpxFilesVtbl;
    interface IEnumDpxFiles
    {
        CONST_VTBL struct IEnumDpxFilesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,ItemCount,ppFiles,pFetchedCount) )
    ( (This)->lpVtbl -> Skip(This,ItemCount) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> GetCount(This,pItemCount) )
EXTERN_C const IID IID_IEnumDpxContainerDirectoryEntries;
    typedef struct IEnumDpxContainerDirectoryEntriesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumDpxContainerDirectoryEntries * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumDpxContainerDirectoryEntries * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumDpxContainerDirectoryEntries * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumDpxContainerDirectoryEntries * This,
                       UINT ItemCount,
                                            __RPC__out_ecount_part(ItemCount, *pFetchedCount) IDpxContainerDirectoryEntry **ppDirectoryEntries,
                        __RPC__out UINT *pFetchedCount);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumDpxContainerDirectoryEntries * This,
                       UINT ItemCount);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumDpxContainerDirectoryEntries * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumDpxContainerDirectoryEntries * This,
                        __RPC__deref_out_opt IEnumDpxContainerDirectoryEntries **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumDpxContainerDirectoryEntries * This,
                        __RPC__out UINT *pItemCount);
        END_INTERFACE
    } IEnumDpxContainerDirectoryEntriesVtbl;
    interface IEnumDpxContainerDirectoryEntries
    {
        CONST_VTBL struct IEnumDpxContainerDirectoryEntriesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,ItemCount,ppDirectoryEntries,pFetchedCount) )
    ( (This)->lpVtbl -> Skip(This,ItemCount) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> GetCount(This,pItemCount) )
typedef struct tagDpxContainerDecryptionData
    {
    ULONG cbDecryptionData;
                    BYTE *pDecryptionData;
    } DpxContainerDecryptionData;
typedef
enum tagDPX_CONTAINER_ENCRYPTION_ENUM
    {
        DPX_CONTAINER_ENCRYPTION_NONE = 0,
        DPX_CONTAINER_ENCRYPTION_ITERATIVE = 1,
        DPX_CONTAINER_ENCRYPTION_MAX_ENUM = DPX_CONTAINER_ENCRYPTION_ITERATIVE
    } DPX_CONTAINER_ENCRYPTION_ENUM;
extern RPC_IF_HANDLE __MIDL_itf_dpx1_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dpx1_0000_0012_v0_0_s_ifspec;
EXTERN_C const IID IID_IDpxEncryptedContainer;
    typedef struct IDpxEncryptedContainerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDpxEncryptedContainer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDpxEncryptedContainer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDpxEncryptedContainer * This);
        HRESULT ( STDMETHODCALLTYPE *SetContainerPath )(
            __RPC__in IDpxEncryptedContainer * This,
                       __RPC__in LPCWSTR ContainerPath);
        HRESULT ( STDMETHODCALLTYPE *GetContainerPath )(
            __RPC__in IDpxEncryptedContainer * This,
                        __RPC__deref_out_opt LPWSTR *pContainerPath);
        HRESULT ( STDMETHODCALLTYPE *AddFileToExtract )(
            __RPC__in IDpxEncryptedContainer * This,
                       __RPC__in LPCWSTR SourceFileName,
                               __RPC__in_opt LPCWSTR TargetFileName,
                               __RPC__in_opt DPX_HASH *TargetFileHash);
        HRESULT ( STDMETHODCALLTYPE *AddFileToExtract2 )(
            __RPC__in IDpxEncryptedContainer * This,
                       __RPC__in LPCWSTR SourceFileName,
                               __RPC__in_opt LPCWSTR TargetFileName,
                        __RPC__deref_out_opt IDpxFile **ppFile);
        HRESULT ( STDMETHODCALLTYPE *ExtractAllFiles )(
            __RPC__in IDpxEncryptedContainer * This);
        HRESULT ( STDMETHODCALLTYPE *EnumFilesToExtract )(
            __RPC__in IDpxEncryptedContainer * This,
                        __RPC__deref_out_opt IEnumDpxFiles **ppEnumFiles);
        HRESULT ( STDMETHODCALLTYPE *SetExpectedContainerIndexHash )(
            __RPC__in IDpxEncryptedContainer * This,
                       __RPC__in DPX_HASH *pExpectedHash);
        HRESULT ( STDMETHODCALLTYPE *GetExpectedContainerIndexHash )(
            __RPC__in IDpxEncryptedContainer * This,
                        __RPC__deref_out_opt DPX_HASH **ppExpectedHash);
        HRESULT ( STDMETHODCALLTYPE *ProvideContainerIndex )(
            __RPC__in IDpxEncryptedContainer * This,
                       UINT IndexSize,
                                __RPC__in_ecount_full(IndexSize) BYTE IndexData[ ]);
        HRESULT ( STDMETHODCALLTYPE *ProvideContainerIndexByFile )(
            __RPC__in IDpxEncryptedContainer * This,
                       __RPC__in LPCWSTR IndexFileName);
        HRESULT ( STDMETHODCALLTYPE *EnumDirectoryEntries )(
            __RPC__in IDpxEncryptedContainer * This,
                        __RPC__deref_out_opt IEnumDpxContainerDirectoryEntries **ppEnumEntries);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IDpxEncryptedContainer * This);
        HRESULT ( STDMETHODCALLTYPE *SetUserValue )(
            __RPC__in IDpxEncryptedContainer * This,
                       UINT64 UserValue);
        HRESULT ( STDMETHODCALLTYPE *GetUserValue )(
            __RPC__in IDpxEncryptedContainer * This,
                        __RPC__out UINT64 *pUserValue);
                      void ( STDMETHODCALLTYPE *FreeMemory )(
            IDpxEncryptedContainer * This,
                       void *Allocation);
        HRESULT ( STDMETHODCALLTYPE *SetContainerDecryption )(
            __RPC__in IDpxEncryptedContainer * This,
                       UINT DecryptionDataCount,
                                __RPC__in_ecount_full(DecryptionDataCount) DpxContainerDecryptionData DecryptionData[ ],
                       DPX_CONTAINER_ENCRYPTION_ENUM EncryptionType);
        END_INTERFACE
    } IDpxEncryptedContainerVtbl;
    interface IDpxEncryptedContainer
    {
        CONST_VTBL struct IDpxEncryptedContainerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetContainerPath(This,ContainerPath) )
    ( (This)->lpVtbl -> GetContainerPath(This,pContainerPath) )
    ( (This)->lpVtbl -> AddFileToExtract(This,SourceFileName,TargetFileName,TargetFileHash) )
    ( (This)->lpVtbl -> AddFileToExtract2(This,SourceFileName,TargetFileName,ppFile) )
    ( (This)->lpVtbl -> ExtractAllFiles(This) )
    ( (This)->lpVtbl -> EnumFilesToExtract(This,ppEnumFiles) )
    ( (This)->lpVtbl -> SetExpectedContainerIndexHash(This,pExpectedHash) )
    ( (This)->lpVtbl -> GetExpectedContainerIndexHash(This,ppExpectedHash) )
    ( (This)->lpVtbl -> ProvideContainerIndex(This,IndexSize,IndexData) )
    ( (This)->lpVtbl -> ProvideContainerIndexByFile(This,IndexFileName) )
    ( (This)->lpVtbl -> EnumDirectoryEntries(This,ppEnumEntries) )
    ( (This)->lpVtbl -> Remove(This) )
    ( (This)->lpVtbl -> SetUserValue(This,UserValue) )
    ( (This)->lpVtbl -> GetUserValue(This,pUserValue) )
    ( (This)->lpVtbl -> FreeMemory(This,Allocation) )
    ( (This)->lpVtbl -> SetContainerDecryption(This,DecryptionDataCount,DecryptionData,EncryptionType) )
typedef struct tagDpxPredecessorFilePathInfo
    {
    LPCWSTR PredecessorInstallPath;
    LPCWSTR PredecessorCabPath;
    LPCWSTR CabPath;
    } PredecessorFilePathInfo;
extern RPC_IF_HANDLE __MIDL_itf_dpx1_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dpx1_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_IDpxContainer2;
    typedef struct IDpxContainer2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDpxContainer2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDpxContainer2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDpxContainer2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetContainerPath )(
            __RPC__in IDpxContainer2 * This,
                       __RPC__in LPCWSTR ContainerPath);
        HRESULT ( STDMETHODCALLTYPE *GetContainerPath )(
            __RPC__in IDpxContainer2 * This,
                        __RPC__deref_out_opt LPWSTR *pContainerPath);
        HRESULT ( STDMETHODCALLTYPE *AddFileToExtract )(
            __RPC__in IDpxContainer2 * This,
                       __RPC__in LPCWSTR SourceFileName,
                               __RPC__in_opt LPCWSTR TargetFileName,
                               __RPC__in_opt DPX_HASH *TargetFileHash);
        HRESULT ( STDMETHODCALLTYPE *AddFileToExtract2 )(
            __RPC__in IDpxContainer2 * This,
                       __RPC__in LPCWSTR SourceFileName,
                               __RPC__in_opt LPCWSTR TargetFileName,
                        __RPC__deref_out_opt IDpxFile **ppFile);
        HRESULT ( STDMETHODCALLTYPE *ExtractAllFiles )(
            __RPC__in IDpxContainer2 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumFilesToExtract )(
            __RPC__in IDpxContainer2 * This,
                        __RPC__deref_out_opt IEnumDpxFiles **ppEnumFiles);
        HRESULT ( STDMETHODCALLTYPE *SetExpectedContainerIndexHash )(
            __RPC__in IDpxContainer2 * This,
                       __RPC__in DPX_HASH *pExpectedHash);
        HRESULT ( STDMETHODCALLTYPE *GetExpectedContainerIndexHash )(
            __RPC__in IDpxContainer2 * This,
                        __RPC__deref_out_opt DPX_HASH **ppExpectedHash);
        HRESULT ( STDMETHODCALLTYPE *ProvideContainerIndex )(
            __RPC__in IDpxContainer2 * This,
                       UINT IndexSize,
                                __RPC__in_ecount_full(IndexSize) BYTE IndexData[ ]);
        HRESULT ( STDMETHODCALLTYPE *ProvideContainerIndexByFile )(
            __RPC__in IDpxContainer2 * This,
                       __RPC__in LPCWSTR IndexFileName);
        HRESULT ( STDMETHODCALLTYPE *EnumDirectoryEntries )(
            __RPC__in IDpxContainer2 * This,
                        __RPC__deref_out_opt IEnumDpxContainerDirectoryEntries **ppEnumEntries);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IDpxContainer2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetUserValue )(
            __RPC__in IDpxContainer2 * This,
                       UINT64 UserValue);
        HRESULT ( STDMETHODCALLTYPE *GetUserValue )(
            __RPC__in IDpxContainer2 * This,
                        __RPC__out UINT64 *pUserValue);
                      void ( STDMETHODCALLTYPE *FreeMemory )(
            IDpxContainer2 * This,
                       void *Allocation);
        HRESULT ( STDMETHODCALLTYPE *SetContainerDecryption )(
            __RPC__in IDpxContainer2 * This,
                       UINT DecryptionDataCount,
                                __RPC__in_ecount_full(DecryptionDataCount) DpxContainerDecryptionData DecryptionData[ ],
                       DPX_CONTAINER_ENCRYPTION_ENUM EncryptionType);
        HRESULT ( STDMETHODCALLTYPE *AddPredecessorContainer )(
            __RPC__in IDpxContainer2 * This,
                       __RPC__in LPCWSTR ContainerPath,
                       UINT PredecessorFilePathsCount,
                                __RPC__in_ecount_full(PredecessorFilePathsCount) PredecessorFilePathInfo PredecessorFilePaths[ ],
                        __RPC__deref_out_opt IDpxContainer2 **ppContainer);
        END_INTERFACE
    } IDpxContainer2Vtbl;
    interface IDpxContainer2
    {
        CONST_VTBL struct IDpxContainer2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetContainerPath(This,ContainerPath) )
    ( (This)->lpVtbl -> GetContainerPath(This,pContainerPath) )
    ( (This)->lpVtbl -> AddFileToExtract(This,SourceFileName,TargetFileName,TargetFileHash) )
    ( (This)->lpVtbl -> AddFileToExtract2(This,SourceFileName,TargetFileName,ppFile) )
    ( (This)->lpVtbl -> ExtractAllFiles(This) )
    ( (This)->lpVtbl -> EnumFilesToExtract(This,ppEnumFiles) )
    ( (This)->lpVtbl -> SetExpectedContainerIndexHash(This,pExpectedHash) )
    ( (This)->lpVtbl -> GetExpectedContainerIndexHash(This,ppExpectedHash) )
    ( (This)->lpVtbl -> ProvideContainerIndex(This,IndexSize,IndexData) )
    ( (This)->lpVtbl -> ProvideContainerIndexByFile(This,IndexFileName) )
    ( (This)->lpVtbl -> EnumDirectoryEntries(This,ppEnumEntries) )
    ( (This)->lpVtbl -> Remove(This) )
    ( (This)->lpVtbl -> SetUserValue(This,UserValue) )
    ( (This)->lpVtbl -> GetUserValue(This,pUserValue) )
    ( (This)->lpVtbl -> FreeMemory(This,Allocation) )
    ( (This)->lpVtbl -> SetContainerDecryption(This,DecryptionDataCount,DecryptionData,EncryptionType) )
    ( (This)->lpVtbl -> AddPredecessorContainer(This,ContainerPath,PredecessorFilePathsCount,PredecessorFilePaths,ppContainer) )
EXTERN_C const IID IID_IDpxContainer3;
    typedef struct IDpxContainer3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDpxContainer3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDpxContainer3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDpxContainer3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetContainerPath )(
            __RPC__in IDpxContainer3 * This,
                       __RPC__in LPCWSTR ContainerPath);
        HRESULT ( STDMETHODCALLTYPE *GetContainerPath )(
            __RPC__in IDpxContainer3 * This,
                        __RPC__deref_out_opt LPWSTR *pContainerPath);
        HRESULT ( STDMETHODCALLTYPE *AddFileToExtract )(
            __RPC__in IDpxContainer3 * This,
                       __RPC__in LPCWSTR SourceFileName,
                               __RPC__in_opt LPCWSTR TargetFileName,
                               __RPC__in_opt DPX_HASH *TargetFileHash);
        HRESULT ( STDMETHODCALLTYPE *AddFileToExtract2 )(
            __RPC__in IDpxContainer3 * This,
                       __RPC__in LPCWSTR SourceFileName,
                               __RPC__in_opt LPCWSTR TargetFileName,
                        __RPC__deref_out_opt IDpxFile **ppFile);
        HRESULT ( STDMETHODCALLTYPE *ExtractAllFiles )(
            __RPC__in IDpxContainer3 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumFilesToExtract )(
            __RPC__in IDpxContainer3 * This,
                        __RPC__deref_out_opt IEnumDpxFiles **ppEnumFiles);
        HRESULT ( STDMETHODCALLTYPE *SetExpectedContainerIndexHash )(
            __RPC__in IDpxContainer3 * This,
                       __RPC__in DPX_HASH *pExpectedHash);
        HRESULT ( STDMETHODCALLTYPE *GetExpectedContainerIndexHash )(
            __RPC__in IDpxContainer3 * This,
                        __RPC__deref_out_opt DPX_HASH **ppExpectedHash);
        HRESULT ( STDMETHODCALLTYPE *ProvideContainerIndex )(
            __RPC__in IDpxContainer3 * This,
                       UINT IndexSize,
                                __RPC__in_ecount_full(IndexSize) BYTE IndexData[ ]);
        HRESULT ( STDMETHODCALLTYPE *ProvideContainerIndexByFile )(
            __RPC__in IDpxContainer3 * This,
                       __RPC__in LPCWSTR IndexFileName);
        HRESULT ( STDMETHODCALLTYPE *EnumDirectoryEntries )(
            __RPC__in IDpxContainer3 * This,
                        __RPC__deref_out_opt IEnumDpxContainerDirectoryEntries **ppEnumEntries);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IDpxContainer3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetUserValue )(
            __RPC__in IDpxContainer3 * This,
                       UINT64 UserValue);
        HRESULT ( STDMETHODCALLTYPE *GetUserValue )(
            __RPC__in IDpxContainer3 * This,
                        __RPC__out UINT64 *pUserValue);
                      void ( STDMETHODCALLTYPE *FreeMemory )(
            IDpxContainer3 * This,
                       void *Allocation);
        HRESULT ( STDMETHODCALLTYPE *SetContainerDecryption )(
            __RPC__in IDpxContainer3 * This,
                       UINT DecryptionDataCount,
                                __RPC__in_ecount_full(DecryptionDataCount) DpxContainerDecryptionData DecryptionData[ ],
                       DPX_CONTAINER_ENCRYPTION_ENUM EncryptionType);
        HRESULT ( STDMETHODCALLTYPE *AddPredecessorContainer )(
            __RPC__in IDpxContainer3 * This,
                       __RPC__in LPCWSTR ContainerPath,
                       UINT PredecessorFilePathsCount,
                                __RPC__in_ecount_full(PredecessorFilePathsCount) PredecessorFilePathInfo PredecessorFilePaths[ ],
                        __RPC__deref_out_opt IDpxContainer2 **ppContainer);
        HRESULT ( STDMETHODCALLTYPE *AddPeerContainer )(
            __RPC__in IDpxContainer3 * This,
                       __RPC__in LPCWSTR ContainerPath,
                        __RPC__deref_out_opt IDpxContainer3 **ppContainer);
        HRESULT ( STDMETHODCALLTYPE *IsPeer )(
            __RPC__in IDpxContainer3 * This,
                       __RPC__in_opt IDpxContainer3 *ppOtherContainer,
                        __RPC__out BOOL *pIsPeer);
        HRESULT ( STDMETHODCALLTYPE *GetPeerGroupId )(
            __RPC__in IDpxContainer3 * This,
                        __RPC__out UINT64 *pnPeerGroupId);
        END_INTERFACE
    } IDpxContainer3Vtbl;
    interface IDpxContainer3
    {
        CONST_VTBL struct IDpxContainer3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetContainerPath(This,ContainerPath) )
    ( (This)->lpVtbl -> GetContainerPath(This,pContainerPath) )
    ( (This)->lpVtbl -> AddFileToExtract(This,SourceFileName,TargetFileName,TargetFileHash) )
    ( (This)->lpVtbl -> AddFileToExtract2(This,SourceFileName,TargetFileName,ppFile) )
    ( (This)->lpVtbl -> ExtractAllFiles(This) )
    ( (This)->lpVtbl -> EnumFilesToExtract(This,ppEnumFiles) )
    ( (This)->lpVtbl -> SetExpectedContainerIndexHash(This,pExpectedHash) )
    ( (This)->lpVtbl -> GetExpectedContainerIndexHash(This,ppExpectedHash) )
    ( (This)->lpVtbl -> ProvideContainerIndex(This,IndexSize,IndexData) )
    ( (This)->lpVtbl -> ProvideContainerIndexByFile(This,IndexFileName) )
    ( (This)->lpVtbl -> EnumDirectoryEntries(This,ppEnumEntries) )
    ( (This)->lpVtbl -> Remove(This) )
    ( (This)->lpVtbl -> SetUserValue(This,UserValue) )
    ( (This)->lpVtbl -> GetUserValue(This,pUserValue) )
    ( (This)->lpVtbl -> FreeMemory(This,Allocation) )
    ( (This)->lpVtbl -> SetContainerDecryption(This,DecryptionDataCount,DecryptionData,EncryptionType) )
    ( (This)->lpVtbl -> AddPredecessorContainer(This,ContainerPath,PredecessorFilePathsCount,PredecessorFilePaths,ppContainer) )
    ( (This)->lpVtbl -> AddPeerContainer(This,ContainerPath,ppContainer) )
    ( (This)->lpVtbl -> IsPeer(This,ppOtherContainer,pIsPeer) )
    ( (This)->lpVtbl -> GetPeerGroupId(This,pnPeerGroupId) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_dpx1_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dpx1_0000_0015_v0_0_s_ifspec;
}
