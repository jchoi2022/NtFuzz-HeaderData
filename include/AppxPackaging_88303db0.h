#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAppxFactory IAppxFactory;
typedef interface IAppxFactory2 IAppxFactory2;
typedef interface IAppxPackageReader IAppxPackageReader;
typedef interface IAppxPackageWriter IAppxPackageWriter;
typedef interface IAppxPackageWriter2 IAppxPackageWriter2;
typedef interface IAppxPackageWriter3 IAppxPackageWriter3;
typedef interface IAppxFile IAppxFile;
typedef interface IAppxFilesEnumerator IAppxFilesEnumerator;
typedef interface IAppxBlockMapReader IAppxBlockMapReader;
typedef interface IAppxBlockMapFile IAppxBlockMapFile;
typedef interface IAppxBlockMapFilesEnumerator IAppxBlockMapFilesEnumerator;
typedef interface IAppxBlockMapBlock IAppxBlockMapBlock;
typedef interface IAppxBlockMapBlocksEnumerator IAppxBlockMapBlocksEnumerator;
typedef interface IAppxManifestReader IAppxManifestReader;
typedef interface IAppxManifestReader2 IAppxManifestReader2;
typedef interface IAppxManifestReader3 IAppxManifestReader3;
typedef interface IAppxManifestReader4 IAppxManifestReader4;
typedef interface IAppxManifestReader5 IAppxManifestReader5;
typedef interface IAppxManifestReader6 IAppxManifestReader6;
typedef interface IAppxManifestOptionalPackageInfo IAppxManifestOptionalPackageInfo;
typedef interface IAppxManifestMainPackageDependenciesEnumerator IAppxManifestMainPackageDependenciesEnumerator;
typedef interface IAppxManifestMainPackageDependency IAppxManifestMainPackageDependency;
typedef interface IAppxManifestPackageId IAppxManifestPackageId;
typedef interface IAppxManifestPackageId2 IAppxManifestPackageId2;
typedef interface IAppxManifestProperties IAppxManifestProperties;
typedef interface IAppxManifestTargetDeviceFamiliesEnumerator IAppxManifestTargetDeviceFamiliesEnumerator;
typedef interface IAppxManifestTargetDeviceFamily IAppxManifestTargetDeviceFamily;
typedef interface IAppxManifestPackageDependenciesEnumerator IAppxManifestPackageDependenciesEnumerator;
typedef interface IAppxManifestPackageDependency IAppxManifestPackageDependency;
typedef interface IAppxManifestPackageDependency2 IAppxManifestPackageDependency2;
typedef interface IAppxManifestResourcesEnumerator IAppxManifestResourcesEnumerator;
typedef interface IAppxManifestDeviceCapabilitiesEnumerator IAppxManifestDeviceCapabilitiesEnumerator;
typedef interface IAppxManifestCapabilitiesEnumerator IAppxManifestCapabilitiesEnumerator;
typedef interface IAppxManifestApplicationsEnumerator IAppxManifestApplicationsEnumerator;
typedef interface IAppxManifestApplication IAppxManifestApplication;
typedef interface IAppxManifestQualifiedResourcesEnumerator IAppxManifestQualifiedResourcesEnumerator;
typedef interface IAppxManifestQualifiedResource IAppxManifestQualifiedResource;
typedef interface IAppxBundleFactory IAppxBundleFactory;
typedef interface IAppxBundleWriter IAppxBundleWriter;
typedef interface IAppxBundleWriter2 IAppxBundleWriter2;
typedef interface IAppxBundleWriter3 IAppxBundleWriter3;
typedef interface IAppxBundleWriter4 IAppxBundleWriter4;
typedef interface IAppxBundleReader IAppxBundleReader;
typedef interface IAppxBundleManifestReader IAppxBundleManifestReader;
typedef interface IAppxBundleManifestReader2 IAppxBundleManifestReader2;
typedef interface IAppxBundleManifestPackageInfoEnumerator IAppxBundleManifestPackageInfoEnumerator;
typedef interface IAppxBundleManifestPackageInfo IAppxBundleManifestPackageInfo;
typedef interface IAppxBundleManifestPackageInfo2 IAppxBundleManifestPackageInfo2;
typedef interface IAppxBundleManifestPackageInfo3 IAppxBundleManifestPackageInfo3;
typedef interface IAppxBundleManifestOptionalBundleInfoEnumerator IAppxBundleManifestOptionalBundleInfoEnumerator;
typedef interface IAppxBundleManifestOptionalBundleInfo IAppxBundleManifestOptionalBundleInfo;
typedef interface IAppxContentGroupFilesEnumerator IAppxContentGroupFilesEnumerator;
typedef interface IAppxContentGroup IAppxContentGroup;
typedef interface IAppxContentGroupsEnumerator IAppxContentGroupsEnumerator;
typedef interface IAppxContentGroupMapReader IAppxContentGroupMapReader;
typedef interface IAppxSourceContentGroupMapReader IAppxSourceContentGroupMapReader;
typedef interface IAppxContentGroupMapWriter IAppxContentGroupMapWriter;
typedef interface IAppxPackagingDiagnosticEventSink IAppxPackagingDiagnosticEventSink;
typedef interface IAppxPackagingDiagnosticEventSinkManager IAppxPackagingDiagnosticEventSinkManager;
typedef interface IAppxEncryptionFactory IAppxEncryptionFactory;
typedef interface IAppxEncryptionFactory2 IAppxEncryptionFactory2;
typedef interface IAppxEncryptionFactory3 IAppxEncryptionFactory3;
typedef interface IAppxEncryptionFactory4 IAppxEncryptionFactory4;
typedef interface IAppxEncryptedPackageWriter IAppxEncryptedPackageWriter;
typedef interface IAppxEncryptedPackageWriter2 IAppxEncryptedPackageWriter2;
typedef interface IAppxEncryptedBundleWriter IAppxEncryptedBundleWriter;
typedef interface IAppxEncryptedBundleWriter2 IAppxEncryptedBundleWriter2;
typedef interface IAppxEncryptedBundleWriter3 IAppxEncryptedBundleWriter3;
typedef interface IAppxPackageEditor IAppxPackageEditor;
typedef class AppxFactory AppxFactory;
typedef class AppxBundleFactory AppxBundleFactory;
typedef class AppxPackagingDiagnosticEventSinkManager AppxPackagingDiagnosticEventSinkManager;
typedef class AppxEncryptionFactory AppxEncryptionFactory;
typedef class AppxPackageEditor AppxPackageEditor;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef struct APPX_PACKAGE_SETTINGS
    {
    BOOL forceZip32;
    IUri *hashMethod;
    } APPX_PACKAGE_SETTINGS;
typedef
enum APPX_COMPRESSION_OPTION
    {
        APPX_COMPRESSION_OPTION_NONE = 0,
        APPX_COMPRESSION_OPTION_NORMAL = 1,
        APPX_COMPRESSION_OPTION_MAXIMUM = 2,
        APPX_COMPRESSION_OPTION_FAST = 3,
        APPX_COMPRESSION_OPTION_SUPERFAST = 4
    } APPX_COMPRESSION_OPTION;
typedef struct APPX_PACKAGE_WRITER_PAYLOAD_STREAM
    {
    IStream *inputStream;
    LPCWSTR fileName;
    LPCWSTR contentType;
    APPX_COMPRESSION_OPTION compressionOption;
    } APPX_PACKAGE_WRITER_PAYLOAD_STREAM;
typedef
enum APPX_FOOTPRINT_FILE_TYPE
    {
        APPX_FOOTPRINT_FILE_TYPE_MANIFEST = 0,
        APPX_FOOTPRINT_FILE_TYPE_BLOCKMAP = 1,
        APPX_FOOTPRINT_FILE_TYPE_SIGNATURE = 2,
        APPX_FOOTPRINT_FILE_TYPE_CODEINTEGRITY = 3,
        APPX_FOOTPRINT_FILE_TYPE_CONTENTGROUPMAP = 4
    } APPX_FOOTPRINT_FILE_TYPE;
typedef
enum APPX_BUNDLE_FOOTPRINT_FILE_TYPE
    {
        APPX_BUNDLE_FOOTPRINT_FILE_TYPE_FIRST = 0,
        APPX_BUNDLE_FOOTPRINT_FILE_TYPE_MANIFEST = 0,
        APPX_BUNDLE_FOOTPRINT_FILE_TYPE_BLOCKMAP = 1,
        APPX_BUNDLE_FOOTPRINT_FILE_TYPE_SIGNATURE = 2,
        APPX_BUNDLE_FOOTPRINT_FILE_TYPE_LAST = 2
    } APPX_BUNDLE_FOOTPRINT_FILE_TYPE;
typedef
enum APPX_CAPABILITIES
    {
        APPX_CAPABILITY_INTERNET_CLIENT = 0x1,
        APPX_CAPABILITY_INTERNET_CLIENT_SERVER = 0x2,
        APPX_CAPABILITY_PRIVATE_NETWORK_CLIENT_SERVER = 0x4,
        APPX_CAPABILITY_DOCUMENTS_LIBRARY = 0x8,
        APPX_CAPABILITY_PICTURES_LIBRARY = 0x10,
        APPX_CAPABILITY_VIDEOS_LIBRARY = 0x20,
        APPX_CAPABILITY_MUSIC_LIBRARY = 0x40,
        APPX_CAPABILITY_ENTERPRISE_AUTHENTICATION = 0x80,
        APPX_CAPABILITY_SHARED_USER_CERTIFICATES = 0x100,
        APPX_CAPABILITY_REMOVABLE_STORAGE = 0x200,
        APPX_CAPABILITY_APPOINTMENTS = 0x400,
        APPX_CAPABILITY_CONTACTS = 0x800
    } APPX_CAPABILITIES;
DEFINE_ENUM_FLAG_OPERATORS(APPX_CAPABILITIES);
typedef
enum APPX_PACKAGE_ARCHITECTURE
    {
        APPX_PACKAGE_ARCHITECTURE_X86 = 0,
        APPX_PACKAGE_ARCHITECTURE_ARM = 5,
        APPX_PACKAGE_ARCHITECTURE_X64 = 9,
        APPX_PACKAGE_ARCHITECTURE_NEUTRAL = 11,
        APPX_PACKAGE_ARCHITECTURE_ARM64 = 12
    } APPX_PACKAGE_ARCHITECTURE;
typedef
enum APPX_PACKAGE_ARCHITECTURE2
    {
        APPX_PACKAGE_ARCHITECTURE2_X86 = 0,
        APPX_PACKAGE_ARCHITECTURE2_ARM = 5,
        APPX_PACKAGE_ARCHITECTURE2_X64 = 9,
        APPX_PACKAGE_ARCHITECTURE2_NEUTRAL = 11,
        APPX_PACKAGE_ARCHITECTURE2_ARM64 = 12,
        APPX_PACKAGE_ARCHITECTURE2_X86_ON_ARM64 = 14,
        APPX_PACKAGE_ARCHITECTURE2_UNKNOWN = 0xffff
    } APPX_PACKAGE_ARCHITECTURE2;
typedef
enum APPX_BUNDLE_PAYLOAD_PACKAGE_TYPE
    {
        APPX_BUNDLE_PAYLOAD_PACKAGE_TYPE_APPLICATION = 0,
        APPX_BUNDLE_PAYLOAD_PACKAGE_TYPE_RESOURCE = 1
    } APPX_BUNDLE_PAYLOAD_PACKAGE_TYPE;
typedef
enum DX_FEATURE_LEVEL
    {
        DX_FEATURE_LEVEL_UNSPECIFIED = 0,
        DX_FEATURE_LEVEL_9 = 1,
        DX_FEATURE_LEVEL_10 = 2,
        DX_FEATURE_LEVEL_11 = 3
    } DX_FEATURE_LEVEL;
typedef
enum APPX_CAPABILITY_CLASS_TYPE
    {
        APPX_CAPABILITY_CLASS_DEFAULT = 0,
        APPX_CAPABILITY_CLASS_GENERAL = 0x1,
        APPX_CAPABILITY_CLASS_RESTRICTED = 0x2,
        APPX_CAPABILITY_CLASS_WINDOWS = 0x4,
        APPX_CAPABILITY_CLASS_ALL = 0x7,
        APPX_CAPABILITY_CLASS_CUSTOM = 0x8
    } APPX_CAPABILITY_CLASS_TYPE;
typedef
enum APPX_PACKAGING_CONTEXT_CHANGE_TYPE
    {
        APPX_PACKAGING_CONTEXT_CHANGE_TYPE_START = 0,
        APPX_PACKAGING_CONTEXT_CHANGE_TYPE_CHANGE = 1,
        APPX_PACKAGING_CONTEXT_CHANGE_TYPE_DETAILS = 2,
        APPX_PACKAGING_CONTEXT_CHANGE_TYPE_END = 3
    } APPX_PACKAGING_CONTEXT_CHANGE_TYPE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAppxFactory;
    typedef struct IAppxFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreatePackageWriter )(
            __RPC__in IAppxFactory * This,
                       __RPC__in_opt IStream *outputStream,
                       __RPC__in APPX_PACKAGE_SETTINGS *settings,
                                __RPC__deref_out_opt IAppxPackageWriter **packageWriter);
        HRESULT ( STDMETHODCALLTYPE *CreatePackageReader )(
            __RPC__in IAppxFactory * This,
                       __RPC__in_opt IStream *inputStream,
                                __RPC__deref_out_opt IAppxPackageReader **packageReader);
        HRESULT ( STDMETHODCALLTYPE *CreateManifestReader )(
            __RPC__in IAppxFactory * This,
                       __RPC__in_opt IStream *inputStream,
                                __RPC__deref_out_opt IAppxManifestReader **manifestReader);
        HRESULT ( STDMETHODCALLTYPE *CreateBlockMapReader )(
            __RPC__in IAppxFactory * This,
                       __RPC__in_opt IStream *inputStream,
                                __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader);
        HRESULT ( STDMETHODCALLTYPE *CreateValidatedBlockMapReader )(
            __RPC__in IAppxFactory * This,
                       __RPC__in_opt IStream *blockMapStream,
                       __RPC__in LPCWSTR signatureFileName,
                                __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader);
        END_INTERFACE
    } IAppxFactoryVtbl;
    interface IAppxFactory
    {
        CONST_VTBL struct IAppxFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreatePackageWriter(This,outputStream,settings,packageWriter) )
    ( (This)->lpVtbl -> CreatePackageReader(This,inputStream,packageReader) )
    ( (This)->lpVtbl -> CreateManifestReader(This,inputStream,manifestReader) )
    ( (This)->lpVtbl -> CreateBlockMapReader(This,inputStream,blockMapReader) )
    ( (This)->lpVtbl -> CreateValidatedBlockMapReader(This,blockMapStream,signatureFileName,blockMapReader) )
EXTERN_C const IID IID_IAppxFactory2;
    typedef struct IAppxFactory2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxFactory2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxFactory2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxFactory2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateContentGroupMapReader )(
            __RPC__in IAppxFactory2 * This,
                       __RPC__in_opt IStream *inputStream,
                                __RPC__deref_out_opt IAppxContentGroupMapReader **contentGroupMapReader);
        HRESULT ( STDMETHODCALLTYPE *CreateSourceContentGroupMapReader )(
            __RPC__in IAppxFactory2 * This,
                       __RPC__in_opt IStream *inputStream,
                                __RPC__deref_out_opt IAppxSourceContentGroupMapReader **reader);
        HRESULT ( STDMETHODCALLTYPE *CreateContentGroupMapWriter )(
            __RPC__in IAppxFactory2 * This,
                       __RPC__in_opt IStream *stream,
                                __RPC__deref_out_opt IAppxContentGroupMapWriter **contentGroupMapWriter);
        END_INTERFACE
    } IAppxFactory2Vtbl;
    interface IAppxFactory2
    {
        CONST_VTBL struct IAppxFactory2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateContentGroupMapReader(This,inputStream,contentGroupMapReader) )
    ( (This)->lpVtbl -> CreateSourceContentGroupMapReader(This,inputStream,reader) )
    ( (This)->lpVtbl -> CreateContentGroupMapWriter(This,stream,contentGroupMapWriter) )
EXTERN_C const IID IID_IAppxPackageReader;
    typedef struct IAppxPackageReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxPackageReader * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxPackageReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxPackageReader * This);
        HRESULT ( STDMETHODCALLTYPE *GetBlockMap )(
            __RPC__in IAppxPackageReader * This,
                                __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader);
        HRESULT ( STDMETHODCALLTYPE *GetFootprintFile )(
            __RPC__in IAppxPackageReader * This,
                       APPX_FOOTPRINT_FILE_TYPE type,
                                __RPC__deref_out_opt IAppxFile **file);
        HRESULT ( STDMETHODCALLTYPE *GetPayloadFile )(
            __RPC__in IAppxPackageReader * This,
                               __RPC__in_string LPCWSTR fileName,
                                __RPC__deref_out_opt IAppxFile **file);
        HRESULT ( STDMETHODCALLTYPE *GetPayloadFiles )(
            __RPC__in IAppxPackageReader * This,
                                __RPC__deref_out_opt IAppxFilesEnumerator **filesEnumerator);
        HRESULT ( STDMETHODCALLTYPE *GetManifest )(
            __RPC__in IAppxPackageReader * This,
                                __RPC__deref_out_opt IAppxManifestReader **manifestReader);
        END_INTERFACE
    } IAppxPackageReaderVtbl;
    interface IAppxPackageReader
    {
        CONST_VTBL struct IAppxPackageReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBlockMap(This,blockMapReader) )
    ( (This)->lpVtbl -> GetFootprintFile(This,type,file) )
    ( (This)->lpVtbl -> GetPayloadFile(This,fileName,file) )
    ( (This)->lpVtbl -> GetPayloadFiles(This,filesEnumerator) )
    ( (This)->lpVtbl -> GetManifest(This,manifestReader) )
EXTERN_C const IID IID_IAppxPackageWriter;
    typedef struct IAppxPackageWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxPackageWriter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxPackageWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxPackageWriter * This);
        HRESULT ( STDMETHODCALLTYPE *AddPayloadFile )(
            __RPC__in IAppxPackageWriter * This,
                               __RPC__in_string LPCWSTR fileName,
                               __RPC__in_string LPCWSTR contentType,
                       APPX_COMPRESSION_OPTION compressionOption,
                       __RPC__in_opt IStream *inputStream);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IAppxPackageWriter * This,
                       __RPC__in_opt IStream *manifest);
        END_INTERFACE
    } IAppxPackageWriterVtbl;
    interface IAppxPackageWriter
    {
        CONST_VTBL struct IAppxPackageWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddPayloadFile(This,fileName,contentType,compressionOption,inputStream) )
    ( (This)->lpVtbl -> Close(This,manifest) )
EXTERN_C const IID IID_IAppxPackageWriter2;
    typedef struct IAppxPackageWriter2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxPackageWriter2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxPackageWriter2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxPackageWriter2 * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IAppxPackageWriter2 * This,
                       __RPC__in_opt IStream *manifest,
                       __RPC__in_opt IStream *contentGroupMap);
        END_INTERFACE
    } IAppxPackageWriter2Vtbl;
    interface IAppxPackageWriter2
    {
        CONST_VTBL struct IAppxPackageWriter2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Close(This,manifest,contentGroupMap) )
EXTERN_C const IID IID_IAppxPackageWriter3;
    typedef struct IAppxPackageWriter3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxPackageWriter3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxPackageWriter3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxPackageWriter3 * This);
        HRESULT ( STDMETHODCALLTYPE *AddPayloadFiles )(
            __RPC__in IAppxPackageWriter3 * This,
                       UINT32 fileCount,
                                __RPC__in_ecount_full(fileCount) APPX_PACKAGE_WRITER_PAYLOAD_STREAM *payloadFiles,
                       UINT64 memoryLimit);
        END_INTERFACE
    } IAppxPackageWriter3Vtbl;
    interface IAppxPackageWriter3
    {
        CONST_VTBL struct IAppxPackageWriter3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddPayloadFiles(This,fileCount,payloadFiles,memoryLimit) )
EXTERN_C const IID IID_IAppxFile;
    typedef struct IAppxFileVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxFile * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxFile * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxFile * This);
        HRESULT ( STDMETHODCALLTYPE *GetCompressionOption )(
            __RPC__in IAppxFile * This,
                                __RPC__out APPX_COMPRESSION_OPTION *compressionOption);
        HRESULT ( STDMETHODCALLTYPE *GetContentType )(
            __RPC__in IAppxFile * This,
                                        __RPC__deref_out_opt_string LPWSTR *contentType);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IAppxFile * This,
                                        __RPC__deref_out_opt_string LPWSTR *fileName);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IAppxFile * This,
                                __RPC__out UINT64 *size);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IAppxFile * This,
                                __RPC__deref_out_opt IStream **stream);
        END_INTERFACE
    } IAppxFileVtbl;
    interface IAppxFile
    {
        CONST_VTBL struct IAppxFileVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCompressionOption(This,compressionOption) )
    ( (This)->lpVtbl -> GetContentType(This,contentType) )
    ( (This)->lpVtbl -> GetName(This,fileName) )
    ( (This)->lpVtbl -> GetSize(This,size) )
    ( (This)->lpVtbl -> GetStream(This,stream) )
EXTERN_C const IID IID_IAppxFilesEnumerator;
    typedef struct IAppxFilesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxFilesEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxFilesEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxFilesEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IAppxFilesEnumerator * This,
                                __RPC__deref_out_opt IAppxFile **file);
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )(
            __RPC__in IAppxFilesEnumerator * This,
                                __RPC__out BOOL *hasCurrent);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IAppxFilesEnumerator * This,
                                __RPC__out BOOL *hasNext);
        END_INTERFACE
    } IAppxFilesEnumeratorVtbl;
    interface IAppxFilesEnumerator
    {
        CONST_VTBL struct IAppxFilesEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrent(This,file) )
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
EXTERN_C const IID IID_IAppxBlockMapReader;
    typedef struct IAppxBlockMapReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBlockMapReader * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBlockMapReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBlockMapReader * This);
        HRESULT ( STDMETHODCALLTYPE *GetFile )(
            __RPC__in IAppxBlockMapReader * This,
                               __RPC__in_string LPCWSTR filename,
                                __RPC__deref_out_opt IAppxBlockMapFile **file);
        HRESULT ( STDMETHODCALLTYPE *GetFiles )(
            __RPC__in IAppxBlockMapReader * This,
                                __RPC__deref_out_opt IAppxBlockMapFilesEnumerator **enumerator);
        HRESULT ( STDMETHODCALLTYPE *GetHashMethod )(
            __RPC__in IAppxBlockMapReader * This,
                                __RPC__deref_out_opt IUri **hashMethod);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IAppxBlockMapReader * This,
                                __RPC__deref_out_opt IStream **blockMapStream);
        END_INTERFACE
    } IAppxBlockMapReaderVtbl;
    interface IAppxBlockMapReader
    {
        CONST_VTBL struct IAppxBlockMapReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFile(This,filename,file) )
    ( (This)->lpVtbl -> GetFiles(This,enumerator) )
    ( (This)->lpVtbl -> GetHashMethod(This,hashMethod) )
    ( (This)->lpVtbl -> GetStream(This,blockMapStream) )
EXTERN_C const IID IID_IAppxBlockMapFile;
    typedef struct IAppxBlockMapFileVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBlockMapFile * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBlockMapFile * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBlockMapFile * This);
        HRESULT ( STDMETHODCALLTYPE *GetBlocks )(
            __RPC__in IAppxBlockMapFile * This,
                                __RPC__deref_out_opt IAppxBlockMapBlocksEnumerator **blocks);
        HRESULT ( STDMETHODCALLTYPE *GetLocalFileHeaderSize )(
            __RPC__in IAppxBlockMapFile * This,
                                __RPC__out UINT32 *lfhSize);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IAppxBlockMapFile * This,
                                        __RPC__deref_out_opt_string LPWSTR *name);
        HRESULT ( STDMETHODCALLTYPE *GetUncompressedSize )(
            __RPC__in IAppxBlockMapFile * This,
                                __RPC__out UINT64 *size);
        HRESULT ( STDMETHODCALLTYPE *ValidateFileHash )(
            __RPC__in IAppxBlockMapFile * This,
                       __RPC__in_opt IStream *fileStream,
                                __RPC__out BOOL *isValid);
        END_INTERFACE
    } IAppxBlockMapFileVtbl;
    interface IAppxBlockMapFile
    {
        CONST_VTBL struct IAppxBlockMapFileVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBlocks(This,blocks) )
    ( (This)->lpVtbl -> GetLocalFileHeaderSize(This,lfhSize) )
    ( (This)->lpVtbl -> GetName(This,name) )
    ( (This)->lpVtbl -> GetUncompressedSize(This,size) )
    ( (This)->lpVtbl -> ValidateFileHash(This,fileStream,isValid) )
EXTERN_C const IID IID_IAppxBlockMapFilesEnumerator;
    typedef struct IAppxBlockMapFilesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBlockMapFilesEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBlockMapFilesEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBlockMapFilesEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IAppxBlockMapFilesEnumerator * This,
                                __RPC__deref_out_opt IAppxBlockMapFile **file);
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )(
            __RPC__in IAppxBlockMapFilesEnumerator * This,
                                __RPC__out BOOL *hasCurrent);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IAppxBlockMapFilesEnumerator * This,
                                __RPC__out BOOL *hasCurrent);
        END_INTERFACE
    } IAppxBlockMapFilesEnumeratorVtbl;
    interface IAppxBlockMapFilesEnumerator
    {
        CONST_VTBL struct IAppxBlockMapFilesEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrent(This,file) )
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
EXTERN_C const IID IID_IAppxBlockMapBlock;
    typedef struct IAppxBlockMapBlockVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBlockMapBlock * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBlockMapBlock * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBlockMapBlock * This);
        HRESULT ( STDMETHODCALLTYPE *GetHash )(
            __RPC__in IAppxBlockMapBlock * This,
                        __RPC__out UINT32 *bufferSize,
                                                  __RPC__deref_out_ecount_full_opt(*bufferSize) BYTE **buffer);
        HRESULT ( STDMETHODCALLTYPE *GetCompressedSize )(
            __RPC__in IAppxBlockMapBlock * This,
                                __RPC__out UINT32 *size);
        END_INTERFACE
    } IAppxBlockMapBlockVtbl;
    interface IAppxBlockMapBlock
    {
        CONST_VTBL struct IAppxBlockMapBlockVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetHash(This,bufferSize,buffer) )
    ( (This)->lpVtbl -> GetCompressedSize(This,size) )
EXTERN_C const IID IID_IAppxBlockMapBlocksEnumerator;
    typedef struct IAppxBlockMapBlocksEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBlockMapBlocksEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBlockMapBlocksEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBlockMapBlocksEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IAppxBlockMapBlocksEnumerator * This,
                                __RPC__deref_out_opt IAppxBlockMapBlock **block);
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )(
            __RPC__in IAppxBlockMapBlocksEnumerator * This,
                                __RPC__out BOOL *hasCurrent);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IAppxBlockMapBlocksEnumerator * This,
                                __RPC__out BOOL *hasNext);
        END_INTERFACE
    } IAppxBlockMapBlocksEnumeratorVtbl;
    interface IAppxBlockMapBlocksEnumerator
    {
        CONST_VTBL struct IAppxBlockMapBlocksEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrent(This,block) )
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
EXTERN_C const IID IID_IAppxManifestReader;
    typedef struct IAppxManifestReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestReader * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestReader * This);
        HRESULT ( STDMETHODCALLTYPE *GetPackageId )(
            __RPC__in IAppxManifestReader * This,
                                __RPC__deref_out_opt IAppxManifestPackageId **packageId);
        HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IAppxManifestReader * This,
                                __RPC__deref_out_opt IAppxManifestProperties **packageProperties);
        HRESULT ( STDMETHODCALLTYPE *GetPackageDependencies )(
            __RPC__in IAppxManifestReader * This,
                                __RPC__deref_out_opt IAppxManifestPackageDependenciesEnumerator **dependencies);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in IAppxManifestReader * This,
                                __RPC__out APPX_CAPABILITIES *capabilities);
        HRESULT ( STDMETHODCALLTYPE *GetResources )(
            __RPC__in IAppxManifestReader * This,
                                __RPC__deref_out_opt IAppxManifestResourcesEnumerator **resources);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCapabilities )(
            __RPC__in IAppxManifestReader * This,
                                __RPC__deref_out_opt IAppxManifestDeviceCapabilitiesEnumerator **deviceCapabilities);
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisite )(
            __RPC__in IAppxManifestReader * This,
                               __RPC__in_string LPCWSTR name,
                                __RPC__out UINT64 *value);
        HRESULT ( STDMETHODCALLTYPE *GetApplications )(
            __RPC__in IAppxManifestReader * This,
                                __RPC__deref_out_opt IAppxManifestApplicationsEnumerator **applications);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IAppxManifestReader * This,
                                __RPC__deref_out_opt IStream **manifestStream);
        END_INTERFACE
    } IAppxManifestReaderVtbl;
    interface IAppxManifestReader
    {
        CONST_VTBL struct IAppxManifestReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPackageId(This,packageId) )
    ( (This)->lpVtbl -> GetProperties(This,packageProperties) )
    ( (This)->lpVtbl -> GetPackageDependencies(This,dependencies) )
    ( (This)->lpVtbl -> GetCapabilities(This,capabilities) )
    ( (This)->lpVtbl -> GetResources(This,resources) )
    ( (This)->lpVtbl -> GetDeviceCapabilities(This,deviceCapabilities) )
    ( (This)->lpVtbl -> GetPrerequisite(This,name,value) )
    ( (This)->lpVtbl -> GetApplications(This,applications) )
    ( (This)->lpVtbl -> GetStream(This,manifestStream) )
EXTERN_C const IID IID_IAppxManifestReader2;
    typedef struct IAppxManifestReader2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestReader2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestReader2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestReader2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPackageId )(
            __RPC__in IAppxManifestReader2 * This,
                                __RPC__deref_out_opt IAppxManifestPackageId **packageId);
        HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IAppxManifestReader2 * This,
                                __RPC__deref_out_opt IAppxManifestProperties **packageProperties);
        HRESULT ( STDMETHODCALLTYPE *GetPackageDependencies )(
            __RPC__in IAppxManifestReader2 * This,
                                __RPC__deref_out_opt IAppxManifestPackageDependenciesEnumerator **dependencies);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in IAppxManifestReader2 * This,
                                __RPC__out APPX_CAPABILITIES *capabilities);
        HRESULT ( STDMETHODCALLTYPE *GetResources )(
            __RPC__in IAppxManifestReader2 * This,
                                __RPC__deref_out_opt IAppxManifestResourcesEnumerator **resources);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCapabilities )(
            __RPC__in IAppxManifestReader2 * This,
                                __RPC__deref_out_opt IAppxManifestDeviceCapabilitiesEnumerator **deviceCapabilities);
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisite )(
            __RPC__in IAppxManifestReader2 * This,
                               __RPC__in_string LPCWSTR name,
                                __RPC__out UINT64 *value);
        HRESULT ( STDMETHODCALLTYPE *GetApplications )(
            __RPC__in IAppxManifestReader2 * This,
                                __RPC__deref_out_opt IAppxManifestApplicationsEnumerator **applications);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IAppxManifestReader2 * This,
                                __RPC__deref_out_opt IStream **manifestStream);
        HRESULT ( STDMETHODCALLTYPE *GetQualifiedResources )(
            __RPC__in IAppxManifestReader2 * This,
                                __RPC__deref_out_opt IAppxManifestQualifiedResourcesEnumerator **resources);
        END_INTERFACE
    } IAppxManifestReader2Vtbl;
    interface IAppxManifestReader2
    {
        CONST_VTBL struct IAppxManifestReader2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPackageId(This,packageId) )
    ( (This)->lpVtbl -> GetProperties(This,packageProperties) )
    ( (This)->lpVtbl -> GetPackageDependencies(This,dependencies) )
    ( (This)->lpVtbl -> GetCapabilities(This,capabilities) )
    ( (This)->lpVtbl -> GetResources(This,resources) )
    ( (This)->lpVtbl -> GetDeviceCapabilities(This,deviceCapabilities) )
    ( (This)->lpVtbl -> GetPrerequisite(This,name,value) )
    ( (This)->lpVtbl -> GetApplications(This,applications) )
    ( (This)->lpVtbl -> GetStream(This,manifestStream) )
    ( (This)->lpVtbl -> GetQualifiedResources(This,resources) )
EXTERN_C const IID IID_IAppxManifestReader3;
    typedef struct IAppxManifestReader3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestReader3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestReader3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestReader3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPackageId )(
            __RPC__in IAppxManifestReader3 * This,
                                __RPC__deref_out_opt IAppxManifestPackageId **packageId);
        HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IAppxManifestReader3 * This,
                                __RPC__deref_out_opt IAppxManifestProperties **packageProperties);
        HRESULT ( STDMETHODCALLTYPE *GetPackageDependencies )(
            __RPC__in IAppxManifestReader3 * This,
                                __RPC__deref_out_opt IAppxManifestPackageDependenciesEnumerator **dependencies);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in IAppxManifestReader3 * This,
                                __RPC__out APPX_CAPABILITIES *capabilities);
        HRESULT ( STDMETHODCALLTYPE *GetResources )(
            __RPC__in IAppxManifestReader3 * This,
                                __RPC__deref_out_opt IAppxManifestResourcesEnumerator **resources);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCapabilities )(
            __RPC__in IAppxManifestReader3 * This,
                                __RPC__deref_out_opt IAppxManifestDeviceCapabilitiesEnumerator **deviceCapabilities);
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisite )(
            __RPC__in IAppxManifestReader3 * This,
                               __RPC__in_string LPCWSTR name,
                                __RPC__out UINT64 *value);
        HRESULT ( STDMETHODCALLTYPE *GetApplications )(
            __RPC__in IAppxManifestReader3 * This,
                                __RPC__deref_out_opt IAppxManifestApplicationsEnumerator **applications);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IAppxManifestReader3 * This,
                                __RPC__deref_out_opt IStream **manifestStream);
        HRESULT ( STDMETHODCALLTYPE *GetQualifiedResources )(
            __RPC__in IAppxManifestReader3 * This,
                                __RPC__deref_out_opt IAppxManifestQualifiedResourcesEnumerator **resources);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilitiesByCapabilityClass )(
            __RPC__in IAppxManifestReader3 * This,
                       APPX_CAPABILITY_CLASS_TYPE capabilityClass,
                                __RPC__deref_out_opt IAppxManifestCapabilitiesEnumerator **capabilities);
        HRESULT ( STDMETHODCALLTYPE *GetTargetDeviceFamilies )(
            __RPC__in IAppxManifestReader3 * This,
                                __RPC__deref_out_opt IAppxManifestTargetDeviceFamiliesEnumerator **targetDeviceFamilies);
        END_INTERFACE
    } IAppxManifestReader3Vtbl;
    interface IAppxManifestReader3
    {
        CONST_VTBL struct IAppxManifestReader3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPackageId(This,packageId) )
    ( (This)->lpVtbl -> GetProperties(This,packageProperties) )
    ( (This)->lpVtbl -> GetPackageDependencies(This,dependencies) )
    ( (This)->lpVtbl -> GetCapabilities(This,capabilities) )
    ( (This)->lpVtbl -> GetResources(This,resources) )
    ( (This)->lpVtbl -> GetDeviceCapabilities(This,deviceCapabilities) )
    ( (This)->lpVtbl -> GetPrerequisite(This,name,value) )
    ( (This)->lpVtbl -> GetApplications(This,applications) )
    ( (This)->lpVtbl -> GetStream(This,manifestStream) )
    ( (This)->lpVtbl -> GetQualifiedResources(This,resources) )
    ( (This)->lpVtbl -> GetCapabilitiesByCapabilityClass(This,capabilityClass,capabilities) )
    ( (This)->lpVtbl -> GetTargetDeviceFamilies(This,targetDeviceFamilies) )
EXTERN_C const IID IID_IAppxManifestReader4;
    typedef struct IAppxManifestReader4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestReader4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestReader4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestReader4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPackageId )(
            __RPC__in IAppxManifestReader4 * This,
                                __RPC__deref_out_opt IAppxManifestPackageId **packageId);
        HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IAppxManifestReader4 * This,
                                __RPC__deref_out_opt IAppxManifestProperties **packageProperties);
        HRESULT ( STDMETHODCALLTYPE *GetPackageDependencies )(
            __RPC__in IAppxManifestReader4 * This,
                                __RPC__deref_out_opt IAppxManifestPackageDependenciesEnumerator **dependencies);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in IAppxManifestReader4 * This,
                                __RPC__out APPX_CAPABILITIES *capabilities);
        HRESULT ( STDMETHODCALLTYPE *GetResources )(
            __RPC__in IAppxManifestReader4 * This,
                                __RPC__deref_out_opt IAppxManifestResourcesEnumerator **resources);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCapabilities )(
            __RPC__in IAppxManifestReader4 * This,
                                __RPC__deref_out_opt IAppxManifestDeviceCapabilitiesEnumerator **deviceCapabilities);
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisite )(
            __RPC__in IAppxManifestReader4 * This,
                               __RPC__in_string LPCWSTR name,
                                __RPC__out UINT64 *value);
        HRESULT ( STDMETHODCALLTYPE *GetApplications )(
            __RPC__in IAppxManifestReader4 * This,
                                __RPC__deref_out_opt IAppxManifestApplicationsEnumerator **applications);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IAppxManifestReader4 * This,
                                __RPC__deref_out_opt IStream **manifestStream);
        HRESULT ( STDMETHODCALLTYPE *GetQualifiedResources )(
            __RPC__in IAppxManifestReader4 * This,
                                __RPC__deref_out_opt IAppxManifestQualifiedResourcesEnumerator **resources);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilitiesByCapabilityClass )(
            __RPC__in IAppxManifestReader4 * This,
                       APPX_CAPABILITY_CLASS_TYPE capabilityClass,
                                __RPC__deref_out_opt IAppxManifestCapabilitiesEnumerator **capabilities);
        HRESULT ( STDMETHODCALLTYPE *GetTargetDeviceFamilies )(
            __RPC__in IAppxManifestReader4 * This,
                                __RPC__deref_out_opt IAppxManifestTargetDeviceFamiliesEnumerator **targetDeviceFamilies);
        HRESULT ( STDMETHODCALLTYPE *GetOptionalPackageInfo )(
            __RPC__in IAppxManifestReader4 * This,
                                __RPC__deref_out_opt IAppxManifestOptionalPackageInfo **optionalPackageInfo);
        END_INTERFACE
    } IAppxManifestReader4Vtbl;
    interface IAppxManifestReader4
    {
        CONST_VTBL struct IAppxManifestReader4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPackageId(This,packageId) )
    ( (This)->lpVtbl -> GetProperties(This,packageProperties) )
    ( (This)->lpVtbl -> GetPackageDependencies(This,dependencies) )
    ( (This)->lpVtbl -> GetCapabilities(This,capabilities) )
    ( (This)->lpVtbl -> GetResources(This,resources) )
    ( (This)->lpVtbl -> GetDeviceCapabilities(This,deviceCapabilities) )
    ( (This)->lpVtbl -> GetPrerequisite(This,name,value) )
    ( (This)->lpVtbl -> GetApplications(This,applications) )
    ( (This)->lpVtbl -> GetStream(This,manifestStream) )
    ( (This)->lpVtbl -> GetQualifiedResources(This,resources) )
    ( (This)->lpVtbl -> GetCapabilitiesByCapabilityClass(This,capabilityClass,capabilities) )
    ( (This)->lpVtbl -> GetTargetDeviceFamilies(This,targetDeviceFamilies) )
    ( (This)->lpVtbl -> GetOptionalPackageInfo(This,optionalPackageInfo) )
EXTERN_C const IID IID_IAppxManifestReader5;
    typedef struct IAppxManifestReader5Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestReader5 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestReader5 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestReader5 * This);
        HRESULT ( STDMETHODCALLTYPE *GetMainPackageDependencies )(
            __RPC__in IAppxManifestReader5 * This,
                                __RPC__deref_out_opt IAppxManifestMainPackageDependenciesEnumerator **mainPackageDependencies);
        END_INTERFACE
    } IAppxManifestReader5Vtbl;
    interface IAppxManifestReader5
    {
        CONST_VTBL struct IAppxManifestReader5Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMainPackageDependencies(This,mainPackageDependencies) )
EXTERN_C const IID IID_IAppxManifestReader6;
    typedef struct IAppxManifestReader6Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestReader6 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestReader6 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestReader6 * This);
        HRESULT ( STDMETHODCALLTYPE *GetIsNonQualifiedResourcePackage )(
            __RPC__in IAppxManifestReader6 * This,
                                __RPC__out BOOL *isNonQualifiedResourcePackage);
        END_INTERFACE
    } IAppxManifestReader6Vtbl;
    interface IAppxManifestReader6
    {
        CONST_VTBL struct IAppxManifestReader6Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIsNonQualifiedResourcePackage(This,isNonQualifiedResourcePackage) )
EXTERN_C const IID IID_IAppxManifestOptionalPackageInfo;
    typedef struct IAppxManifestOptionalPackageInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestOptionalPackageInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestOptionalPackageInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestOptionalPackageInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetIsOptionalPackage )(
            __RPC__in IAppxManifestOptionalPackageInfo * This,
                                __RPC__out BOOL *isOptionalPackage);
        HRESULT ( STDMETHODCALLTYPE *GetMainPackageName )(
            __RPC__in IAppxManifestOptionalPackageInfo * This,
                                        __RPC__deref_out_opt_string LPWSTR *mainPackageName);
        END_INTERFACE
    } IAppxManifestOptionalPackageInfoVtbl;
    interface IAppxManifestOptionalPackageInfo
    {
        CONST_VTBL struct IAppxManifestOptionalPackageInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIsOptionalPackage(This,isOptionalPackage) )
    ( (This)->lpVtbl -> GetMainPackageName(This,mainPackageName) )
EXTERN_C const IID IID_IAppxManifestMainPackageDependenciesEnumerator;
    typedef struct IAppxManifestMainPackageDependenciesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestMainPackageDependenciesEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestMainPackageDependenciesEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestMainPackageDependenciesEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IAppxManifestMainPackageDependenciesEnumerator * This,
                                __RPC__deref_out_opt IAppxManifestMainPackageDependency **mainPackageDependency);
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )(
            __RPC__in IAppxManifestMainPackageDependenciesEnumerator * This,
                                __RPC__out BOOL *hasCurrent);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IAppxManifestMainPackageDependenciesEnumerator * This,
                                __RPC__out BOOL *hasNext);
        END_INTERFACE
    } IAppxManifestMainPackageDependenciesEnumeratorVtbl;
    interface IAppxManifestMainPackageDependenciesEnumerator
    {
        CONST_VTBL struct IAppxManifestMainPackageDependenciesEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrent(This,mainPackageDependency) )
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
EXTERN_C const IID IID_IAppxManifestMainPackageDependency;
    typedef struct IAppxManifestMainPackageDependencyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestMainPackageDependency * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestMainPackageDependency * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestMainPackageDependency * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IAppxManifestMainPackageDependency * This,
                                        __RPC__deref_out_opt_string LPWSTR *name);
        HRESULT ( STDMETHODCALLTYPE *GetPublisher )(
            __RPC__in IAppxManifestMainPackageDependency * This,
                                        __RPC__deref_out_opt_string LPWSTR *publisher);
        HRESULT ( STDMETHODCALLTYPE *GetPackageFamilyName )(
            __RPC__in IAppxManifestMainPackageDependency * This,
                                        __RPC__deref_out_opt_string LPWSTR *packageFamilyName);
        END_INTERFACE
    } IAppxManifestMainPackageDependencyVtbl;
    interface IAppxManifestMainPackageDependency
    {
        CONST_VTBL struct IAppxManifestMainPackageDependencyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,name) )
    ( (This)->lpVtbl -> GetPublisher(This,publisher) )
    ( (This)->lpVtbl -> GetPackageFamilyName(This,packageFamilyName) )
EXTERN_C const IID IID_IAppxManifestPackageId;
    typedef struct IAppxManifestPackageIdVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestPackageId * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestPackageId * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestPackageId * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IAppxManifestPackageId * This,
                                        __RPC__deref_out_opt_string LPWSTR *name);
        HRESULT ( STDMETHODCALLTYPE *GetArchitecture )(
            __RPC__in IAppxManifestPackageId * This,
                                __RPC__out APPX_PACKAGE_ARCHITECTURE *architecture);
        HRESULT ( STDMETHODCALLTYPE *GetPublisher )(
            __RPC__in IAppxManifestPackageId * This,
                                        __RPC__deref_out_opt_string LPWSTR *publisher);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IAppxManifestPackageId * This,
                                __RPC__out UINT64 *packageVersion);
        HRESULT ( STDMETHODCALLTYPE *GetResourceId )(
            __RPC__in IAppxManifestPackageId * This,
                                        __RPC__deref_out_opt_string LPWSTR *resourceId);
        HRESULT ( STDMETHODCALLTYPE *ComparePublisher )(
            __RPC__in IAppxManifestPackageId * This,
                               __RPC__in_string LPCWSTR other,
                                __RPC__out BOOL *isSame);
        HRESULT ( STDMETHODCALLTYPE *GetPackageFullName )(
            __RPC__in IAppxManifestPackageId * This,
                                        __RPC__deref_out_opt_string LPWSTR *packageFullName);
        HRESULT ( STDMETHODCALLTYPE *GetPackageFamilyName )(
            __RPC__in IAppxManifestPackageId * This,
                                        __RPC__deref_out_opt_string LPWSTR *packageFamilyName);
        END_INTERFACE
    } IAppxManifestPackageIdVtbl;
    interface IAppxManifestPackageId
    {
        CONST_VTBL struct IAppxManifestPackageIdVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,name) )
    ( (This)->lpVtbl -> GetArchitecture(This,architecture) )
    ( (This)->lpVtbl -> GetPublisher(This,publisher) )
    ( (This)->lpVtbl -> GetVersion(This,packageVersion) )
    ( (This)->lpVtbl -> GetResourceId(This,resourceId) )
    ( (This)->lpVtbl -> ComparePublisher(This,other,isSame) )
    ( (This)->lpVtbl -> GetPackageFullName(This,packageFullName) )
    ( (This)->lpVtbl -> GetPackageFamilyName(This,packageFamilyName) )
EXTERN_C const IID IID_IAppxManifestPackageId2;
    typedef struct IAppxManifestPackageId2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestPackageId2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestPackageId2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestPackageId2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IAppxManifestPackageId2 * This,
                                        __RPC__deref_out_opt_string LPWSTR *name);
        HRESULT ( STDMETHODCALLTYPE *GetArchitecture )(
            __RPC__in IAppxManifestPackageId2 * This,
                                __RPC__out APPX_PACKAGE_ARCHITECTURE *architecture);
        HRESULT ( STDMETHODCALLTYPE *GetPublisher )(
            __RPC__in IAppxManifestPackageId2 * This,
                                        __RPC__deref_out_opt_string LPWSTR *publisher);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IAppxManifestPackageId2 * This,
                                __RPC__out UINT64 *packageVersion);
        HRESULT ( STDMETHODCALLTYPE *GetResourceId )(
            __RPC__in IAppxManifestPackageId2 * This,
                                        __RPC__deref_out_opt_string LPWSTR *resourceId);
        HRESULT ( STDMETHODCALLTYPE *ComparePublisher )(
            __RPC__in IAppxManifestPackageId2 * This,
                               __RPC__in_string LPCWSTR other,
                                __RPC__out BOOL *isSame);
        HRESULT ( STDMETHODCALLTYPE *GetPackageFullName )(
            __RPC__in IAppxManifestPackageId2 * This,
                                        __RPC__deref_out_opt_string LPWSTR *packageFullName);
        HRESULT ( STDMETHODCALLTYPE *GetPackageFamilyName )(
            __RPC__in IAppxManifestPackageId2 * This,
                                        __RPC__deref_out_opt_string LPWSTR *packageFamilyName);
        HRESULT ( STDMETHODCALLTYPE *GetArchitecture2 )(
            __RPC__in IAppxManifestPackageId2 * This,
                                __RPC__out APPX_PACKAGE_ARCHITECTURE2 *architecture);
        END_INTERFACE
    } IAppxManifestPackageId2Vtbl;
    interface IAppxManifestPackageId2
    {
        CONST_VTBL struct IAppxManifestPackageId2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,name) )
    ( (This)->lpVtbl -> GetArchitecture(This,architecture) )
    ( (This)->lpVtbl -> GetPublisher(This,publisher) )
    ( (This)->lpVtbl -> GetVersion(This,packageVersion) )
    ( (This)->lpVtbl -> GetResourceId(This,resourceId) )
    ( (This)->lpVtbl -> ComparePublisher(This,other,isSame) )
    ( (This)->lpVtbl -> GetPackageFullName(This,packageFullName) )
    ( (This)->lpVtbl -> GetPackageFamilyName(This,packageFamilyName) )
    ( (This)->lpVtbl -> GetArchitecture2(This,architecture) )
EXTERN_C const IID IID_IAppxManifestProperties;
    typedef struct IAppxManifestPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestProperties * This);
        HRESULT ( STDMETHODCALLTYPE *GetBoolValue )(
            __RPC__in IAppxManifestProperties * This,
                               __RPC__in_string LPCWSTR name,
                                __RPC__out BOOL *value);
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )(
            __RPC__in IAppxManifestProperties * This,
                               __RPC__in_string LPCWSTR name,
                                        __RPC__deref_out_opt_string LPWSTR *value);
        END_INTERFACE
    } IAppxManifestPropertiesVtbl;
    interface IAppxManifestProperties
    {
        CONST_VTBL struct IAppxManifestPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBoolValue(This,name,value) )
    ( (This)->lpVtbl -> GetStringValue(This,name,value) )
EXTERN_C const IID IID_IAppxManifestTargetDeviceFamiliesEnumerator;
    typedef struct IAppxManifestTargetDeviceFamiliesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestTargetDeviceFamiliesEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestTargetDeviceFamiliesEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestTargetDeviceFamiliesEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IAppxManifestTargetDeviceFamiliesEnumerator * This,
                                __RPC__deref_out_opt IAppxManifestTargetDeviceFamily **targetDeviceFamily);
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )(
            __RPC__in IAppxManifestTargetDeviceFamiliesEnumerator * This,
                                __RPC__out BOOL *hasCurrent);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IAppxManifestTargetDeviceFamiliesEnumerator * This,
                                __RPC__out BOOL *hasNext);
        END_INTERFACE
    } IAppxManifestTargetDeviceFamiliesEnumeratorVtbl;
    interface IAppxManifestTargetDeviceFamiliesEnumerator
    {
        CONST_VTBL struct IAppxManifestTargetDeviceFamiliesEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrent(This,targetDeviceFamily) )
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
EXTERN_C const IID IID_IAppxManifestTargetDeviceFamily;
    typedef struct IAppxManifestTargetDeviceFamilyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestTargetDeviceFamily * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestTargetDeviceFamily * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestTargetDeviceFamily * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IAppxManifestTargetDeviceFamily * This,
                                        __RPC__deref_out_opt_string LPWSTR *name);
        HRESULT ( STDMETHODCALLTYPE *GetMinVersion )(
            __RPC__in IAppxManifestTargetDeviceFamily * This,
                                __RPC__out UINT64 *minVersion);
        HRESULT ( STDMETHODCALLTYPE *GetMaxVersionTested )(
            __RPC__in IAppxManifestTargetDeviceFamily * This,
                                __RPC__out UINT64 *maxVersionTested);
        END_INTERFACE
    } IAppxManifestTargetDeviceFamilyVtbl;
    interface IAppxManifestTargetDeviceFamily
    {
        CONST_VTBL struct IAppxManifestTargetDeviceFamilyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,name) )
    ( (This)->lpVtbl -> GetMinVersion(This,minVersion) )
    ( (This)->lpVtbl -> GetMaxVersionTested(This,maxVersionTested) )
EXTERN_C const IID IID_IAppxManifestPackageDependenciesEnumerator;
    typedef struct IAppxManifestPackageDependenciesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This,
                                __RPC__deref_out_opt IAppxManifestPackageDependency **dependency);
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )(
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This,
                                __RPC__out BOOL *hasCurrent);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This,
                                __RPC__out BOOL *hasNext);
        END_INTERFACE
    } IAppxManifestPackageDependenciesEnumeratorVtbl;
    interface IAppxManifestPackageDependenciesEnumerator
    {
        CONST_VTBL struct IAppxManifestPackageDependenciesEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrent(This,dependency) )
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
EXTERN_C const IID IID_IAppxManifestPackageDependency;
    typedef struct IAppxManifestPackageDependencyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestPackageDependency * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestPackageDependency * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestPackageDependency * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IAppxManifestPackageDependency * This,
                                        __RPC__deref_out_opt_string LPWSTR *name);
        HRESULT ( STDMETHODCALLTYPE *GetPublisher )(
            __RPC__in IAppxManifestPackageDependency * This,
                                        __RPC__deref_out_opt_string LPWSTR *publisher);
        HRESULT ( STDMETHODCALLTYPE *GetMinVersion )(
            __RPC__in IAppxManifestPackageDependency * This,
                                __RPC__out UINT64 *minVersion);
        END_INTERFACE
    } IAppxManifestPackageDependencyVtbl;
    interface IAppxManifestPackageDependency
    {
        CONST_VTBL struct IAppxManifestPackageDependencyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,name) )
    ( (This)->lpVtbl -> GetPublisher(This,publisher) )
    ( (This)->lpVtbl -> GetMinVersion(This,minVersion) )
EXTERN_C const IID IID_IAppxManifestPackageDependency2;
    typedef struct IAppxManifestPackageDependency2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestPackageDependency2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestPackageDependency2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestPackageDependency2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IAppxManifestPackageDependency2 * This,
                                        __RPC__deref_out_opt_string LPWSTR *name);
        HRESULT ( STDMETHODCALLTYPE *GetPublisher )(
            __RPC__in IAppxManifestPackageDependency2 * This,
                                        __RPC__deref_out_opt_string LPWSTR *publisher);
        HRESULT ( STDMETHODCALLTYPE *GetMinVersion )(
            __RPC__in IAppxManifestPackageDependency2 * This,
                                __RPC__out UINT64 *minVersion);
        HRESULT ( STDMETHODCALLTYPE *GetMaxMajorVersionTested )(
            __RPC__in IAppxManifestPackageDependency2 * This,
                                __RPC__out UINT16 *maxMajorVersionTested);
        END_INTERFACE
    } IAppxManifestPackageDependency2Vtbl;
    interface IAppxManifestPackageDependency2
    {
        CONST_VTBL struct IAppxManifestPackageDependency2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,name) )
    ( (This)->lpVtbl -> GetPublisher(This,publisher) )
    ( (This)->lpVtbl -> GetMinVersion(This,minVersion) )
    ( (This)->lpVtbl -> GetMaxMajorVersionTested(This,maxMajorVersionTested) )
EXTERN_C const IID IID_IAppxManifestResourcesEnumerator;
    typedef struct IAppxManifestResourcesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestResourcesEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestResourcesEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestResourcesEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IAppxManifestResourcesEnumerator * This,
                                        __RPC__deref_out_opt_string LPWSTR *resource);
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )(
            __RPC__in IAppxManifestResourcesEnumerator * This,
                                __RPC__out BOOL *hasCurrent);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IAppxManifestResourcesEnumerator * This,
                                __RPC__out BOOL *hasNext);
        END_INTERFACE
    } IAppxManifestResourcesEnumeratorVtbl;
    interface IAppxManifestResourcesEnumerator
    {
        CONST_VTBL struct IAppxManifestResourcesEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrent(This,resource) )
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
EXTERN_C const IID IID_IAppxManifestDeviceCapabilitiesEnumerator;
    typedef struct IAppxManifestDeviceCapabilitiesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This,
                                        __RPC__deref_out_opt_string LPWSTR *deviceCapability);
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )(
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This,
                                __RPC__out BOOL *hasCurrent);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This,
                                __RPC__out BOOL *hasNext);
        END_INTERFACE
    } IAppxManifestDeviceCapabilitiesEnumeratorVtbl;
    interface IAppxManifestDeviceCapabilitiesEnumerator
    {
        CONST_VTBL struct IAppxManifestDeviceCapabilitiesEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrent(This,deviceCapability) )
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
EXTERN_C const IID IID_IAppxManifestCapabilitiesEnumerator;
    typedef struct IAppxManifestCapabilitiesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestCapabilitiesEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestCapabilitiesEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestCapabilitiesEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IAppxManifestCapabilitiesEnumerator * This,
                                        __RPC__deref_out_opt_string LPWSTR *capability);
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )(
            __RPC__in IAppxManifestCapabilitiesEnumerator * This,
                                __RPC__out BOOL *hasCurrent);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IAppxManifestCapabilitiesEnumerator * This,
                                __RPC__out BOOL *hasNext);
        END_INTERFACE
    } IAppxManifestCapabilitiesEnumeratorVtbl;
    interface IAppxManifestCapabilitiesEnumerator
    {
        CONST_VTBL struct IAppxManifestCapabilitiesEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrent(This,capability) )
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
EXTERN_C const IID IID_IAppxManifestApplicationsEnumerator;
    typedef struct IAppxManifestApplicationsEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestApplicationsEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestApplicationsEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestApplicationsEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IAppxManifestApplicationsEnumerator * This,
                                __RPC__deref_out_opt IAppxManifestApplication **application);
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )(
            __RPC__in IAppxManifestApplicationsEnumerator * This,
                                __RPC__out BOOL *hasCurrent);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IAppxManifestApplicationsEnumerator * This,
                                __RPC__out BOOL *hasNext);
        END_INTERFACE
    } IAppxManifestApplicationsEnumeratorVtbl;
    interface IAppxManifestApplicationsEnumerator
    {
        CONST_VTBL struct IAppxManifestApplicationsEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrent(This,application) )
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
EXTERN_C const IID IID_IAppxManifestApplication;
    typedef struct IAppxManifestApplicationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestApplication * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestApplication * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestApplication * This);
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )(
            __RPC__in IAppxManifestApplication * This,
                               __RPC__in_string LPCWSTR name,
                                        __RPC__deref_out_opt_string LPWSTR *value);
        HRESULT ( STDMETHODCALLTYPE *GetAppUserModelId )(
            __RPC__in IAppxManifestApplication * This,
                                        __RPC__deref_out_opt_string LPWSTR *appUserModelId);
        END_INTERFACE
    } IAppxManifestApplicationVtbl;
    interface IAppxManifestApplication
    {
        CONST_VTBL struct IAppxManifestApplicationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStringValue(This,name,value) )
    ( (This)->lpVtbl -> GetAppUserModelId(This,appUserModelId) )
EXTERN_C const IID IID_IAppxManifestQualifiedResourcesEnumerator;
    typedef struct IAppxManifestQualifiedResourcesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestQualifiedResourcesEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestQualifiedResourcesEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestQualifiedResourcesEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IAppxManifestQualifiedResourcesEnumerator * This,
                                __RPC__deref_out_opt IAppxManifestQualifiedResource **resource);
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )(
            __RPC__in IAppxManifestQualifiedResourcesEnumerator * This,
                                __RPC__out BOOL *hasCurrent);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IAppxManifestQualifiedResourcesEnumerator * This,
                                __RPC__out BOOL *hasNext);
        END_INTERFACE
    } IAppxManifestQualifiedResourcesEnumeratorVtbl;
    interface IAppxManifestQualifiedResourcesEnumerator
    {
        CONST_VTBL struct IAppxManifestQualifiedResourcesEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrent(This,resource) )
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
EXTERN_C const IID IID_IAppxManifestQualifiedResource;
    typedef struct IAppxManifestQualifiedResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxManifestQualifiedResource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxManifestQualifiedResource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxManifestQualifiedResource * This);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            __RPC__in IAppxManifestQualifiedResource * This,
                                        __RPC__deref_out_opt_string LPWSTR *language);
        HRESULT ( STDMETHODCALLTYPE *GetScale )(
            __RPC__in IAppxManifestQualifiedResource * This,
                                __RPC__out UINT32 *scale);
        HRESULT ( STDMETHODCALLTYPE *GetDXFeatureLevel )(
            __RPC__in IAppxManifestQualifiedResource * This,
                                __RPC__out DX_FEATURE_LEVEL *dxFeatureLevel);
        END_INTERFACE
    } IAppxManifestQualifiedResourceVtbl;
    interface IAppxManifestQualifiedResource
    {
        CONST_VTBL struct IAppxManifestQualifiedResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLanguage(This,language) )
    ( (This)->lpVtbl -> GetScale(This,scale) )
    ( (This)->lpVtbl -> GetDXFeatureLevel(This,dxFeatureLevel) )
EXTERN_C const IID IID_IAppxBundleFactory;
    typedef struct IAppxBundleFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBundleFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBundleFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBundleFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateBundleWriter )(
            __RPC__in IAppxBundleFactory * This,
                       __RPC__in_opt IStream *outputStream,
                       UINT64 bundleVersion,
                                __RPC__deref_out_opt IAppxBundleWriter **bundleWriter);
        HRESULT ( STDMETHODCALLTYPE *CreateBundleReader )(
            __RPC__in IAppxBundleFactory * This,
                       __RPC__in_opt IStream *inputStream,
                                __RPC__deref_out_opt IAppxBundleReader **bundleReader);
        HRESULT ( STDMETHODCALLTYPE *CreateBundleManifestReader )(
            __RPC__in IAppxBundleFactory * This,
                       __RPC__in_opt IStream *inputStream,
                                __RPC__deref_out_opt IAppxBundleManifestReader **manifestReader);
        END_INTERFACE
    } IAppxBundleFactoryVtbl;
    interface IAppxBundleFactory
    {
        CONST_VTBL struct IAppxBundleFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateBundleWriter(This,outputStream,bundleVersion,bundleWriter) )
    ( (This)->lpVtbl -> CreateBundleReader(This,inputStream,bundleReader) )
    ( (This)->lpVtbl -> CreateBundleManifestReader(This,inputStream,manifestReader) )
EXTERN_C const IID IID_IAppxBundleWriter;
    typedef struct IAppxBundleWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBundleWriter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBundleWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBundleWriter * This);
        HRESULT ( STDMETHODCALLTYPE *AddPayloadPackage )(
            __RPC__in IAppxBundleWriter * This,
                               __RPC__in_string LPCWSTR fileName,
                       __RPC__in_opt IStream *packageStream);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IAppxBundleWriter * This);
        END_INTERFACE
    } IAppxBundleWriterVtbl;
    interface IAppxBundleWriter
    {
        CONST_VTBL struct IAppxBundleWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddPayloadPackage(This,fileName,packageStream) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IAppxBundleWriter2;
    typedef struct IAppxBundleWriter2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBundleWriter2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBundleWriter2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBundleWriter2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddExternalPackageReference )(
            __RPC__in IAppxBundleWriter2 * This,
                               __RPC__in_string LPCWSTR fileName,
                       __RPC__in_opt IStream *inputStream);
        END_INTERFACE
    } IAppxBundleWriter2Vtbl;
    interface IAppxBundleWriter2
    {
        CONST_VTBL struct IAppxBundleWriter2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddExternalPackageReference(This,fileName,inputStream) )
EXTERN_C const IID IID_IAppxBundleWriter3;
    typedef struct IAppxBundleWriter3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBundleWriter3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBundleWriter3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBundleWriter3 * This);
        HRESULT ( STDMETHODCALLTYPE *AddPackageReference )(
            __RPC__in IAppxBundleWriter3 * This,
                               __RPC__in_string LPCWSTR fileName,
                       __RPC__in_opt IStream *inputStream);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IAppxBundleWriter3 * This,
                               __RPC__in_string LPCWSTR hashMethodString);
        END_INTERFACE
    } IAppxBundleWriter3Vtbl;
    interface IAppxBundleWriter3
    {
        CONST_VTBL struct IAppxBundleWriter3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddPackageReference(This,fileName,inputStream) )
    ( (This)->lpVtbl -> Close(This,hashMethodString) )
EXTERN_C const IID IID_IAppxBundleWriter4;
    typedef struct IAppxBundleWriter4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBundleWriter4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBundleWriter4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBundleWriter4 * This);
        HRESULT ( STDMETHODCALLTYPE *AddPayloadPackage )(
            __RPC__in IAppxBundleWriter4 * This,
                               __RPC__in_string LPCWSTR fileName,
                       __RPC__in_opt IStream *packageStream,
                       BOOL isDefaultApplicablePackage);
        HRESULT ( STDMETHODCALLTYPE *AddPackageReference )(
            __RPC__in IAppxBundleWriter4 * This,
                               __RPC__in_string LPCWSTR fileName,
                       __RPC__in_opt IStream *inputStream,
                       BOOL isDefaultApplicablePackage);
        HRESULT ( STDMETHODCALLTYPE *AddExternalPackageReference )(
            __RPC__in IAppxBundleWriter4 * This,
                               __RPC__in_string LPCWSTR fileName,
                       __RPC__in_opt IStream *inputStream,
                       BOOL isDefaultApplicablePackage);
        END_INTERFACE
    } IAppxBundleWriter4Vtbl;
    interface IAppxBundleWriter4
    {
        CONST_VTBL struct IAppxBundleWriter4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddPayloadPackage(This,fileName,packageStream,isDefaultApplicablePackage) )
    ( (This)->lpVtbl -> AddPackageReference(This,fileName,inputStream,isDefaultApplicablePackage) )
    ( (This)->lpVtbl -> AddExternalPackageReference(This,fileName,inputStream,isDefaultApplicablePackage) )
EXTERN_C const IID IID_IAppxBundleReader;
    typedef struct IAppxBundleReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBundleReader * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBundleReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBundleReader * This);
        HRESULT ( STDMETHODCALLTYPE *GetFootprintFile )(
            __RPC__in IAppxBundleReader * This,
                       APPX_BUNDLE_FOOTPRINT_FILE_TYPE fileType,
                                __RPC__deref_out_opt IAppxFile **footprintFile);
        HRESULT ( STDMETHODCALLTYPE *GetBlockMap )(
            __RPC__in IAppxBundleReader * This,
                                __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader);
        HRESULT ( STDMETHODCALLTYPE *GetManifest )(
            __RPC__in IAppxBundleReader * This,
                                __RPC__deref_out_opt IAppxBundleManifestReader **manifestReader);
        HRESULT ( STDMETHODCALLTYPE *GetPayloadPackages )(
            __RPC__in IAppxBundleReader * This,
                                __RPC__deref_out_opt IAppxFilesEnumerator **payloadPackages);
        HRESULT ( STDMETHODCALLTYPE *GetPayloadPackage )(
            __RPC__in IAppxBundleReader * This,
                               __RPC__in_string LPCWSTR fileName,
                                __RPC__deref_out_opt IAppxFile **payloadPackage);
        END_INTERFACE
    } IAppxBundleReaderVtbl;
    interface IAppxBundleReader
    {
        CONST_VTBL struct IAppxBundleReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFootprintFile(This,fileType,footprintFile) )
    ( (This)->lpVtbl -> GetBlockMap(This,blockMapReader) )
    ( (This)->lpVtbl -> GetManifest(This,manifestReader) )
    ( (This)->lpVtbl -> GetPayloadPackages(This,payloadPackages) )
    ( (This)->lpVtbl -> GetPayloadPackage(This,fileName,payloadPackage) )
EXTERN_C const IID IID_IAppxBundleManifestReader;
    typedef struct IAppxBundleManifestReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBundleManifestReader * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBundleManifestReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBundleManifestReader * This);
        HRESULT ( STDMETHODCALLTYPE *GetPackageId )(
            __RPC__in IAppxBundleManifestReader * This,
                                __RPC__deref_out_opt IAppxManifestPackageId **packageId);
        HRESULT ( STDMETHODCALLTYPE *GetPackageInfoItems )(
            __RPC__in IAppxBundleManifestReader * This,
                                __RPC__deref_out_opt IAppxBundleManifestPackageInfoEnumerator **packageInfoItems);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IAppxBundleManifestReader * This,
                                __RPC__deref_out_opt IStream **manifestStream);
        END_INTERFACE
    } IAppxBundleManifestReaderVtbl;
    interface IAppxBundleManifestReader
    {
        CONST_VTBL struct IAppxBundleManifestReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPackageId(This,packageId) )
    ( (This)->lpVtbl -> GetPackageInfoItems(This,packageInfoItems) )
    ( (This)->lpVtbl -> GetStream(This,manifestStream) )
EXTERN_C const IID IID_IAppxBundleManifestReader2;
    typedef struct IAppxBundleManifestReader2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBundleManifestReader2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBundleManifestReader2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBundleManifestReader2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetOptionalBundles )(
            __RPC__in IAppxBundleManifestReader2 * This,
                                __RPC__deref_out_opt IAppxBundleManifestOptionalBundleInfoEnumerator **optionalBundles);
        END_INTERFACE
    } IAppxBundleManifestReader2Vtbl;
    interface IAppxBundleManifestReader2
    {
        CONST_VTBL struct IAppxBundleManifestReader2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOptionalBundles(This,optionalBundles) )
EXTERN_C const IID IID_IAppxBundleManifestPackageInfoEnumerator;
    typedef struct IAppxBundleManifestPackageInfoEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBundleManifestPackageInfoEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBundleManifestPackageInfoEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBundleManifestPackageInfoEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IAppxBundleManifestPackageInfoEnumerator * This,
                                __RPC__deref_out_opt IAppxBundleManifestPackageInfo **packageInfo);
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )(
            __RPC__in IAppxBundleManifestPackageInfoEnumerator * This,
                                __RPC__out BOOL *hasCurrent);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IAppxBundleManifestPackageInfoEnumerator * This,
                                __RPC__out BOOL *hasNext);
        END_INTERFACE
    } IAppxBundleManifestPackageInfoEnumeratorVtbl;
    interface IAppxBundleManifestPackageInfoEnumerator
    {
        CONST_VTBL struct IAppxBundleManifestPackageInfoEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrent(This,packageInfo) )
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
EXTERN_C const IID IID_IAppxBundleManifestPackageInfo;
    typedef struct IAppxBundleManifestPackageInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBundleManifestPackageInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBundleManifestPackageInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBundleManifestPackageInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetPackageType )(
            __RPC__in IAppxBundleManifestPackageInfo * This,
                                __RPC__out APPX_BUNDLE_PAYLOAD_PACKAGE_TYPE *packageType);
        HRESULT ( STDMETHODCALLTYPE *GetPackageId )(
            __RPC__in IAppxBundleManifestPackageInfo * This,
                                __RPC__deref_out_opt IAppxManifestPackageId **packageId);
        HRESULT ( STDMETHODCALLTYPE *GetFileName )(
            __RPC__in IAppxBundleManifestPackageInfo * This,
                                        __RPC__deref_out_opt_string LPWSTR *fileName);
        HRESULT ( STDMETHODCALLTYPE *GetOffset )(
            __RPC__in IAppxBundleManifestPackageInfo * This,
                                __RPC__out UINT64 *offset);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IAppxBundleManifestPackageInfo * This,
                                __RPC__out UINT64 *size);
        HRESULT ( STDMETHODCALLTYPE *GetResources )(
            __RPC__in IAppxBundleManifestPackageInfo * This,
                                __RPC__deref_out_opt IAppxManifestQualifiedResourcesEnumerator **resources);
        END_INTERFACE
    } IAppxBundleManifestPackageInfoVtbl;
    interface IAppxBundleManifestPackageInfo
    {
        CONST_VTBL struct IAppxBundleManifestPackageInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPackageType(This,packageType) )
    ( (This)->lpVtbl -> GetPackageId(This,packageId) )
    ( (This)->lpVtbl -> GetFileName(This,fileName) )
    ( (This)->lpVtbl -> GetOffset(This,offset) )
    ( (This)->lpVtbl -> GetSize(This,size) )
    ( (This)->lpVtbl -> GetResources(This,resources) )
EXTERN_C const IID IID_IAppxBundleManifestPackageInfo2;
    typedef struct IAppxBundleManifestPackageInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBundleManifestPackageInfo2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBundleManifestPackageInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBundleManifestPackageInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetIsPackageReference )(
            __RPC__in IAppxBundleManifestPackageInfo2 * This,
                                __RPC__out BOOL *isPackageReference);
        HRESULT ( STDMETHODCALLTYPE *GetIsNonQualifiedResourcePackage )(
            __RPC__in IAppxBundleManifestPackageInfo2 * This,
                                __RPC__out BOOL *isNonQualifiedResourcePackage);
        HRESULT ( STDMETHODCALLTYPE *GetIsDefaultApplicablePackage )(
            __RPC__in IAppxBundleManifestPackageInfo2 * This,
                                __RPC__out BOOL *isDefaultApplicablePackage);
        END_INTERFACE
    } IAppxBundleManifestPackageInfo2Vtbl;
    interface IAppxBundleManifestPackageInfo2
    {
        CONST_VTBL struct IAppxBundleManifestPackageInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIsPackageReference(This,isPackageReference) )
    ( (This)->lpVtbl -> GetIsNonQualifiedResourcePackage(This,isNonQualifiedResourcePackage) )
    ( (This)->lpVtbl -> GetIsDefaultApplicablePackage(This,isDefaultApplicablePackage) )
EXTERN_C const IID IID_IAppxBundleManifestPackageInfo3;
    typedef struct IAppxBundleManifestPackageInfo3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBundleManifestPackageInfo3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBundleManifestPackageInfo3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBundleManifestPackageInfo3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTargetDeviceFamilies )(
            __RPC__in IAppxBundleManifestPackageInfo3 * This,
                                __RPC__deref_out_opt IAppxManifestTargetDeviceFamiliesEnumerator **targetDeviceFamilies);
        END_INTERFACE
    } IAppxBundleManifestPackageInfo3Vtbl;
    interface IAppxBundleManifestPackageInfo3
    {
        CONST_VTBL struct IAppxBundleManifestPackageInfo3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTargetDeviceFamilies(This,targetDeviceFamilies) )
EXTERN_C const IID IID_IAppxBundleManifestOptionalBundleInfoEnumerator;
    typedef struct IAppxBundleManifestOptionalBundleInfoEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBundleManifestOptionalBundleInfoEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBundleManifestOptionalBundleInfoEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBundleManifestOptionalBundleInfoEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IAppxBundleManifestOptionalBundleInfoEnumerator * This,
                                __RPC__deref_out_opt IAppxBundleManifestOptionalBundleInfo **optionalBundle);
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )(
            __RPC__in IAppxBundleManifestOptionalBundleInfoEnumerator * This,
                                __RPC__out BOOL *hasCurrent);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IAppxBundleManifestOptionalBundleInfoEnumerator * This,
                                __RPC__out BOOL *hasNext);
        END_INTERFACE
    } IAppxBundleManifestOptionalBundleInfoEnumeratorVtbl;
    interface IAppxBundleManifestOptionalBundleInfoEnumerator
    {
        CONST_VTBL struct IAppxBundleManifestOptionalBundleInfoEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrent(This,optionalBundle) )
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
EXTERN_C const IID IID_IAppxBundleManifestOptionalBundleInfo;
    typedef struct IAppxBundleManifestOptionalBundleInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxBundleManifestOptionalBundleInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxBundleManifestOptionalBundleInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxBundleManifestOptionalBundleInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetPackageId )(
            __RPC__in IAppxBundleManifestOptionalBundleInfo * This,
                                __RPC__deref_out_opt IAppxManifestPackageId **packageId);
        HRESULT ( STDMETHODCALLTYPE *GetFileName )(
            __RPC__in IAppxBundleManifestOptionalBundleInfo * This,
                                        __RPC__deref_out_opt_string LPWSTR *fileName);
        HRESULT ( STDMETHODCALLTYPE *GetPackageInfoItems )(
            __RPC__in IAppxBundleManifestOptionalBundleInfo * This,
                                __RPC__deref_out_opt IAppxBundleManifestPackageInfoEnumerator **packageInfoItems);
        END_INTERFACE
    } IAppxBundleManifestOptionalBundleInfoVtbl;
    interface IAppxBundleManifestOptionalBundleInfo
    {
        CONST_VTBL struct IAppxBundleManifestOptionalBundleInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPackageId(This,packageId) )
    ( (This)->lpVtbl -> GetFileName(This,fileName) )
    ( (This)->lpVtbl -> GetPackageInfoItems(This,packageInfoItems) )
EXTERN_C const IID IID_IAppxContentGroupFilesEnumerator;
    typedef struct IAppxContentGroupFilesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxContentGroupFilesEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxContentGroupFilesEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxContentGroupFilesEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IAppxContentGroupFilesEnumerator * This,
                                __RPC__deref_out_opt LPWSTR *file);
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )(
            __RPC__in IAppxContentGroupFilesEnumerator * This,
                                __RPC__out BOOL *hasCurrent);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IAppxContentGroupFilesEnumerator * This,
                                __RPC__out BOOL *hasNext);
        END_INTERFACE
    } IAppxContentGroupFilesEnumeratorVtbl;
    interface IAppxContentGroupFilesEnumerator
    {
        CONST_VTBL struct IAppxContentGroupFilesEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrent(This,file) )
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
EXTERN_C const IID IID_IAppxContentGroup;
    typedef struct IAppxContentGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxContentGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxContentGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxContentGroup * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IAppxContentGroup * This,
                                        __RPC__deref_out_opt_string LPWSTR *groupName);
        HRESULT ( STDMETHODCALLTYPE *GetFiles )(
            __RPC__in IAppxContentGroup * This,
                                __RPC__deref_out_opt IAppxContentGroupFilesEnumerator **enumerator);
        END_INTERFACE
    } IAppxContentGroupVtbl;
    interface IAppxContentGroup
    {
        CONST_VTBL struct IAppxContentGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,groupName) )
    ( (This)->lpVtbl -> GetFiles(This,enumerator) )
EXTERN_C const IID IID_IAppxContentGroupsEnumerator;
    typedef struct IAppxContentGroupsEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxContentGroupsEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxContentGroupsEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxContentGroupsEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IAppxContentGroupsEnumerator * This,
                                __RPC__deref_out_opt IAppxContentGroup **stream);
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )(
            __RPC__in IAppxContentGroupsEnumerator * This,
                                __RPC__out BOOL *hasCurrent);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IAppxContentGroupsEnumerator * This,
                                __RPC__out BOOL *hasNext);
        END_INTERFACE
    } IAppxContentGroupsEnumeratorVtbl;
    interface IAppxContentGroupsEnumerator
    {
        CONST_VTBL struct IAppxContentGroupsEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrent(This,stream) )
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
EXTERN_C const IID IID_IAppxContentGroupMapReader;
    typedef struct IAppxContentGroupMapReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxContentGroupMapReader * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxContentGroupMapReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxContentGroupMapReader * This);
        HRESULT ( STDMETHODCALLTYPE *GetRequiredGroup )(
            __RPC__in IAppxContentGroupMapReader * This,
                                __RPC__deref_out_opt IAppxContentGroup **requiredGroup);
        HRESULT ( STDMETHODCALLTYPE *GetAutomaticGroups )(
            __RPC__in IAppxContentGroupMapReader * This,
                                __RPC__deref_out_opt IAppxContentGroupsEnumerator **automaticGroupsEnumerator);
        END_INTERFACE
    } IAppxContentGroupMapReaderVtbl;
    interface IAppxContentGroupMapReader
    {
        CONST_VTBL struct IAppxContentGroupMapReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRequiredGroup(This,requiredGroup) )
    ( (This)->lpVtbl -> GetAutomaticGroups(This,automaticGroupsEnumerator) )
EXTERN_C const IID IID_IAppxSourceContentGroupMapReader;
    typedef struct IAppxSourceContentGroupMapReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxSourceContentGroupMapReader * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxSourceContentGroupMapReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxSourceContentGroupMapReader * This);
        HRESULT ( STDMETHODCALLTYPE *GetRequiredGroup )(
            __RPC__in IAppxSourceContentGroupMapReader * This,
                                __RPC__deref_out_opt IAppxContentGroup **requiredGroup);
        HRESULT ( STDMETHODCALLTYPE *GetAutomaticGroups )(
            __RPC__in IAppxSourceContentGroupMapReader * This,
                                __RPC__deref_out_opt IAppxContentGroupsEnumerator **automaticGroupsEnumerator);
        END_INTERFACE
    } IAppxSourceContentGroupMapReaderVtbl;
    interface IAppxSourceContentGroupMapReader
    {
        CONST_VTBL struct IAppxSourceContentGroupMapReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRequiredGroup(This,requiredGroup) )
    ( (This)->lpVtbl -> GetAutomaticGroups(This,automaticGroupsEnumerator) )
EXTERN_C const IID IID_IAppxContentGroupMapWriter;
    typedef struct IAppxContentGroupMapWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxContentGroupMapWriter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxContentGroupMapWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxContentGroupMapWriter * This);
        HRESULT ( STDMETHODCALLTYPE *AddAutomaticGroup )(
            __RPC__in IAppxContentGroupMapWriter * This,
                               __RPC__in_string LPCWSTR groupName);
        HRESULT ( STDMETHODCALLTYPE *AddAutomaticFile )(
            __RPC__in IAppxContentGroupMapWriter * This,
                               __RPC__in_string LPCWSTR fileName);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IAppxContentGroupMapWriter * This);
        END_INTERFACE
    } IAppxContentGroupMapWriterVtbl;
    interface IAppxContentGroupMapWriter
    {
        CONST_VTBL struct IAppxContentGroupMapWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddAutomaticGroup(This,groupName) )
    ( (This)->lpVtbl -> AddAutomaticFile(This,fileName) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IAppxPackagingDiagnosticEventSink;
    typedef struct IAppxPackagingDiagnosticEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxPackagingDiagnosticEventSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxPackagingDiagnosticEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxPackagingDiagnosticEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *ReportContextChange )(
            __RPC__in IAppxPackagingDiagnosticEventSink * This,
                       APPX_PACKAGING_CONTEXT_CHANGE_TYPE changeType,
                       LONG contextId,
                               __RPC__in_string LPCSTR contextName,
                               __RPC__in_string LPCWSTR contextMessage,
                               __RPC__in_string LPCWSTR detailsMessage);
        HRESULT ( STDMETHODCALLTYPE *ReportError )(
            __RPC__in IAppxPackagingDiagnosticEventSink * This,
                               __RPC__in_string LPCWSTR errorMessage);
        END_INTERFACE
    } IAppxPackagingDiagnosticEventSinkVtbl;
    interface IAppxPackagingDiagnosticEventSink
    {
        CONST_VTBL struct IAppxPackagingDiagnosticEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReportContextChange(This,changeType,contextId,contextName,contextMessage,detailsMessage) )
    ( (This)->lpVtbl -> ReportError(This,errorMessage) )
EXTERN_C const IID IID_IAppxPackagingDiagnosticEventSinkManager;
    typedef struct IAppxPackagingDiagnosticEventSinkManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxPackagingDiagnosticEventSinkManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxPackagingDiagnosticEventSinkManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxPackagingDiagnosticEventSinkManager * This);
        HRESULT ( STDMETHODCALLTYPE *SetSinkForProcess )(
            __RPC__in IAppxPackagingDiagnosticEventSinkManager * This,
                       __RPC__in_opt IAppxPackagingDiagnosticEventSink *sink);
        END_INTERFACE
    } IAppxPackagingDiagnosticEventSinkManagerVtbl;
    interface IAppxPackagingDiagnosticEventSinkManager
    {
        CONST_VTBL struct IAppxPackagingDiagnosticEventSinkManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSinkForProcess(This,sink) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct APPX_ENCRYPTED_PACKAGE_SETTINGS
    {
    UINT32 keyLength;
    LPCWSTR encryptionAlgorithm;
    BOOL useDiffusion;
    IUri *blockMapHashAlgorithm;
    } APPX_ENCRYPTED_PACKAGE_SETTINGS;
typedef
enum APPX_ENCRYPTED_PACKAGE_OPTIONS
    {
        APPX_ENCRYPTED_PACKAGE_OPTION_NONE = 0,
        APPX_ENCRYPTED_PACKAGE_OPTION_DIFFUSION = 0x1,
        APPX_ENCRYPTED_PACKAGE_OPTION_PAGE_HASHING = 0x2
    } APPX_ENCRYPTED_PACKAGE_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(APPX_ENCRYPTED_PACKAGE_OPTIONS);
typedef struct APPX_ENCRYPTED_PACKAGE_SETTINGS2
    {
    UINT32 keyLength;
    LPCWSTR encryptionAlgorithm;
    IUri *blockMapHashAlgorithm;
    DWORD options;
    } APPX_ENCRYPTED_PACKAGE_SETTINGS2;
typedef struct APPX_KEY_INFO
    {
    UINT32 keyLength;
    UINT32 keyIdLength;
                    BYTE *key;
                    BYTE *keyId;
    } APPX_KEY_INFO;
typedef struct APPX_ENCRYPTED_EXEMPTIONS
    {
    UINT32 count;
                            LPCWSTR *plainTextFiles;
    } APPX_ENCRYPTED_EXEMPTIONS;
extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0059_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0059_v0_0_s_ifspec;
EXTERN_C const IID IID_IAppxEncryptionFactory;
    typedef struct IAppxEncryptionFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxEncryptionFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxEncryptionFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxEncryptionFactory * This);
        HRESULT ( STDMETHODCALLTYPE *EncryptPackage )(
            __RPC__in IAppxEncryptionFactory * This,
                       __RPC__in_opt IStream *inputStream,
                       __RPC__in_opt IStream *outputStream,
                       __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS *settings,
                       __RPC__in const APPX_KEY_INFO *keyInfo,
                       __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles);
        HRESULT ( STDMETHODCALLTYPE *DecryptPackage )(
            __RPC__in IAppxEncryptionFactory * This,
                       __RPC__in_opt IStream *inputStream,
                       __RPC__in_opt IStream *outputStream,
                       __RPC__in const APPX_KEY_INFO *keyInfo);
        HRESULT ( STDMETHODCALLTYPE *CreateEncryptedPackageWriter )(
            __RPC__in IAppxEncryptionFactory * This,
                       __RPC__in_opt IStream *outputStream,
                       __RPC__in_opt IStream *manifestStream,
                       __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS *settings,
                       __RPC__in const APPX_KEY_INFO *keyInfo,
                       __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
                                __RPC__deref_out_opt IAppxEncryptedPackageWriter **packageWriter);
        HRESULT ( STDMETHODCALLTYPE *CreateEncryptedPackageReader )(
            __RPC__in IAppxEncryptionFactory * This,
                       __RPC__in_opt IStream *inputStream,
                       __RPC__in const APPX_KEY_INFO *keyInfo,
                                __RPC__deref_out_opt IAppxPackageReader **packageReader);
        HRESULT ( STDMETHODCALLTYPE *EncryptBundle )(
            __RPC__in IAppxEncryptionFactory * This,
                       __RPC__in_opt IStream *inputStream,
                       __RPC__in_opt IStream *outputStream,
                       __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS *settings,
                       __RPC__in const APPX_KEY_INFO *keyInfo,
                       __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles);
        HRESULT ( STDMETHODCALLTYPE *DecryptBundle )(
            __RPC__in IAppxEncryptionFactory * This,
                       __RPC__in_opt IStream *inputStream,
                       __RPC__in_opt IStream *outputStream,
                       __RPC__in const APPX_KEY_INFO *keyInfo);
        HRESULT ( STDMETHODCALLTYPE *CreateEncryptedBundleWriter )(
            __RPC__in IAppxEncryptionFactory * This,
                       __RPC__in_opt IStream *outputStream,
                       UINT64 bundleVersion,
                       __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS *settings,
                       __RPC__in const APPX_KEY_INFO *keyInfo,
                       __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
                                __RPC__deref_out_opt IAppxEncryptedBundleWriter **bundleWriter);
        HRESULT ( STDMETHODCALLTYPE *CreateEncryptedBundleReader )(
            __RPC__in IAppxEncryptionFactory * This,
                       __RPC__in_opt IStream *inputStream,
                       __RPC__in const APPX_KEY_INFO *keyInfo,
                                __RPC__deref_out_opt IAppxBundleReader **bundleReader);
        END_INTERFACE
    } IAppxEncryptionFactoryVtbl;
    interface IAppxEncryptionFactory
    {
        CONST_VTBL struct IAppxEncryptionFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EncryptPackage(This,inputStream,outputStream,settings,keyInfo,exemptedFiles) )
    ( (This)->lpVtbl -> DecryptPackage(This,inputStream,outputStream,keyInfo) )
    ( (This)->lpVtbl -> CreateEncryptedPackageWriter(This,outputStream,manifestStream,settings,keyInfo,exemptedFiles,packageWriter) )
    ( (This)->lpVtbl -> CreateEncryptedPackageReader(This,inputStream,keyInfo,packageReader) )
    ( (This)->lpVtbl -> EncryptBundle(This,inputStream,outputStream,settings,keyInfo,exemptedFiles) )
    ( (This)->lpVtbl -> DecryptBundle(This,inputStream,outputStream,keyInfo) )
    ( (This)->lpVtbl -> CreateEncryptedBundleWriter(This,outputStream,bundleVersion,settings,keyInfo,exemptedFiles,bundleWriter) )
    ( (This)->lpVtbl -> CreateEncryptedBundleReader(This,inputStream,keyInfo,bundleReader) )
EXTERN_C const IID IID_IAppxEncryptionFactory2;
    typedef struct IAppxEncryptionFactory2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxEncryptionFactory2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxEncryptionFactory2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxEncryptionFactory2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateEncryptedPackageWriter )(
            __RPC__in IAppxEncryptionFactory2 * This,
                       __RPC__in_opt IStream *outputStream,
                       __RPC__in_opt IStream *manifestStream,
                       __RPC__in_opt IStream *contentGroupMapStream,
                       __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS *settings,
                       __RPC__in const APPX_KEY_INFO *keyInfo,
                       __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
                                __RPC__deref_out_opt IAppxEncryptedPackageWriter **packageWriter);
        END_INTERFACE
    } IAppxEncryptionFactory2Vtbl;
    interface IAppxEncryptionFactory2
    {
        CONST_VTBL struct IAppxEncryptionFactory2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateEncryptedPackageWriter(This,outputStream,manifestStream,contentGroupMapStream,settings,keyInfo,exemptedFiles,packageWriter) )
EXTERN_C const IID IID_IAppxEncryptionFactory3;
    typedef struct IAppxEncryptionFactory3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxEncryptionFactory3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxEncryptionFactory3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxEncryptionFactory3 * This);
        HRESULT ( STDMETHODCALLTYPE *EncryptPackage )(
            __RPC__in IAppxEncryptionFactory3 * This,
                       __RPC__in_opt IStream *inputStream,
                       __RPC__in_opt IStream *outputStream,
                       __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS2 *settings,
                       __RPC__in const APPX_KEY_INFO *keyInfo,
                       __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles);
        HRESULT ( STDMETHODCALLTYPE *CreateEncryptedPackageWriter )(
            __RPC__in IAppxEncryptionFactory3 * This,
                       __RPC__in_opt IStream *outputStream,
                       __RPC__in_opt IStream *manifestStream,
                       __RPC__in_opt IStream *contentGroupMapStream,
                       __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS2 *settings,
                       __RPC__in const APPX_KEY_INFO *keyInfo,
                       __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
                                __RPC__deref_out_opt IAppxEncryptedPackageWriter **packageWriter);
        HRESULT ( STDMETHODCALLTYPE *EncryptBundle )(
            __RPC__in IAppxEncryptionFactory3 * This,
                       __RPC__in_opt IStream *inputStream,
                       __RPC__in_opt IStream *outputStream,
                       __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS2 *settings,
                       __RPC__in const APPX_KEY_INFO *keyInfo,
                       __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles);
        HRESULT ( STDMETHODCALLTYPE *CreateEncryptedBundleWriter )(
            __RPC__in IAppxEncryptionFactory3 * This,
                       __RPC__in_opt IStream *outputStream,
                       UINT64 bundleVersion,
                       __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS2 *settings,
                       __RPC__in const APPX_KEY_INFO *keyInfo,
                       __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
                                __RPC__deref_out_opt IAppxEncryptedBundleWriter **bundleWriter);
        END_INTERFACE
    } IAppxEncryptionFactory3Vtbl;
    interface IAppxEncryptionFactory3
    {
        CONST_VTBL struct IAppxEncryptionFactory3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EncryptPackage(This,inputStream,outputStream,settings,keyInfo,exemptedFiles) )
    ( (This)->lpVtbl -> CreateEncryptedPackageWriter(This,outputStream,manifestStream,contentGroupMapStream,settings,keyInfo,exemptedFiles,packageWriter) )
    ( (This)->lpVtbl -> EncryptBundle(This,inputStream,outputStream,settings,keyInfo,exemptedFiles) )
    ( (This)->lpVtbl -> CreateEncryptedBundleWriter(This,outputStream,bundleVersion,settings,keyInfo,exemptedFiles,bundleWriter) )
EXTERN_C const IID IID_IAppxEncryptionFactory4;
    typedef struct IAppxEncryptionFactory4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxEncryptionFactory4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxEncryptionFactory4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxEncryptionFactory4 * This);
        HRESULT ( STDMETHODCALLTYPE *EncryptPackage )(
            __RPC__in IAppxEncryptionFactory4 * This,
                       __RPC__in_opt IStream *inputStream,
                       __RPC__in_opt IStream *outputStream,
                       __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS2 *settings,
                       __RPC__in const APPX_KEY_INFO *keyInfo,
                       __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
                       UINT64 memoryLimit);
        END_INTERFACE
    } IAppxEncryptionFactory4Vtbl;
    interface IAppxEncryptionFactory4
    {
        CONST_VTBL struct IAppxEncryptionFactory4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EncryptPackage(This,inputStream,outputStream,settings,keyInfo,exemptedFiles,memoryLimit) )
EXTERN_C const IID IID_IAppxEncryptedPackageWriter;
    typedef struct IAppxEncryptedPackageWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxEncryptedPackageWriter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxEncryptedPackageWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxEncryptedPackageWriter * This);
        HRESULT ( STDMETHODCALLTYPE *AddPayloadFileEncrypted )(
            __RPC__in IAppxEncryptedPackageWriter * This,
                               __RPC__in_string LPCWSTR fileName,
                       APPX_COMPRESSION_OPTION compressionOption,
                       __RPC__in_opt IStream *inputStream);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IAppxEncryptedPackageWriter * This);
        END_INTERFACE
    } IAppxEncryptedPackageWriterVtbl;
    interface IAppxEncryptedPackageWriter
    {
        CONST_VTBL struct IAppxEncryptedPackageWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddPayloadFileEncrypted(This,fileName,compressionOption,inputStream) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IAppxEncryptedPackageWriter2;
    typedef struct IAppxEncryptedPackageWriter2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxEncryptedPackageWriter2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxEncryptedPackageWriter2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxEncryptedPackageWriter2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddPayloadFilesEncrypted )(
            __RPC__in IAppxEncryptedPackageWriter2 * This,
                       UINT32 fileCount,
                                __RPC__in_ecount_full(fileCount) APPX_PACKAGE_WRITER_PAYLOAD_STREAM *payloadFiles,
                       UINT64 memoryLimit);
        END_INTERFACE
    } IAppxEncryptedPackageWriter2Vtbl;
    interface IAppxEncryptedPackageWriter2
    {
        CONST_VTBL struct IAppxEncryptedPackageWriter2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddPayloadFilesEncrypted(This,fileCount,payloadFiles,memoryLimit) )
EXTERN_C const IID IID_IAppxEncryptedBundleWriter;
    typedef struct IAppxEncryptedBundleWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxEncryptedBundleWriter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxEncryptedBundleWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxEncryptedBundleWriter * This);
        HRESULT ( STDMETHODCALLTYPE *AddPayloadPackageEncrypted )(
            __RPC__in IAppxEncryptedBundleWriter * This,
                               __RPC__in_string LPCWSTR fileName,
                       __RPC__in_opt IStream *packageStream);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IAppxEncryptedBundleWriter * This);
        END_INTERFACE
    } IAppxEncryptedBundleWriterVtbl;
    interface IAppxEncryptedBundleWriter
    {
        CONST_VTBL struct IAppxEncryptedBundleWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddPayloadPackageEncrypted(This,fileName,packageStream) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IAppxEncryptedBundleWriter2;
    typedef struct IAppxEncryptedBundleWriter2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxEncryptedBundleWriter2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxEncryptedBundleWriter2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxEncryptedBundleWriter2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddExternalPackageReference )(
            __RPC__in IAppxEncryptedBundleWriter2 * This,
                               __RPC__in_string LPCWSTR fileName,
                       __RPC__in_opt IStream *inputStream);
        END_INTERFACE
    } IAppxEncryptedBundleWriter2Vtbl;
    interface IAppxEncryptedBundleWriter2
    {
        CONST_VTBL struct IAppxEncryptedBundleWriter2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddExternalPackageReference(This,fileName,inputStream) )
typedef
enum APPX_PACKAGE_EDITOR_UPDATE_PACKAGE_OPTION
    {
        APPX_PACKAGE_EDITOR_UPDATE_PACKAGE_OPTION_APPEND_DELTA = 0
    } APPX_PACKAGE_EDITOR_UPDATE_PACKAGE_OPTION;
typedef
enum APPX_PACKAGE_EDITOR_UPDATE_PACKAGE_MANIFEST_OPTIONS
    {
        APPX_PACKAGE_EDITOR_UPDATE_PACKAGE_MANIFEST_OPTION_NONE = 0,
        APPX_PACKAGE_EDITOR_UPDATE_PACKAGE_MANIFEST_OPTION_SKIP_VALIDATION = 0x1,
        APPX_PACKAGE_EDITOR_UPDATE_PACKAGE_MANIFEST_OPTION_LOCALIZED = 0x2
    } APPX_PACKAGE_EDITOR_UPDATE_PACKAGE_MANIFEST_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(APPX_PACKAGE_EDITOR_UPDATE_PACKAGE_MANIFEST_OPTIONS);
extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0067_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0067_v0_0_s_ifspec;
EXTERN_C const IID IID_IAppxEncryptedBundleWriter3;
    typedef struct IAppxEncryptedBundleWriter3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxEncryptedBundleWriter3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxEncryptedBundleWriter3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxEncryptedBundleWriter3 * This);
        HRESULT ( STDMETHODCALLTYPE *AddPayloadPackageEncrypted )(
            __RPC__in IAppxEncryptedBundleWriter3 * This,
                               __RPC__in_string LPCWSTR fileName,
                       __RPC__in_opt IStream *packageStream,
                       BOOL isDefaultApplicablePackage);
        HRESULT ( STDMETHODCALLTYPE *AddExternalPackageReference )(
            __RPC__in IAppxEncryptedBundleWriter3 * This,
                               __RPC__in_string LPCWSTR fileName,
                       __RPC__in_opt IStream *inputStream,
                       BOOL isDefaultApplicablePackage);
        END_INTERFACE
    } IAppxEncryptedBundleWriter3Vtbl;
    interface IAppxEncryptedBundleWriter3
    {
        CONST_VTBL struct IAppxEncryptedBundleWriter3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddPayloadPackageEncrypted(This,fileName,packageStream,isDefaultApplicablePackage) )
    ( (This)->lpVtbl -> AddExternalPackageReference(This,fileName,inputStream,isDefaultApplicablePackage) )
EXTERN_C const IID IID_IAppxPackageEditor;
    typedef struct IAppxPackageEditorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppxPackageEditor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppxPackageEditor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppxPackageEditor * This);
        HRESULT ( STDMETHODCALLTYPE *SetWorkingDirectory )(
            __RPC__in IAppxPackageEditor * This,
                               __RPC__in_string LPCWSTR workingDirectory);
        HRESULT ( STDMETHODCALLTYPE *CreateDeltaPackage )(
            __RPC__in IAppxPackageEditor * This,
                       __RPC__in_opt IStream *updatedPackageStream,
                       __RPC__in_opt IStream *baselinePackageStream,
                       __RPC__in_opt IStream *deltaPackageStream);
        HRESULT ( STDMETHODCALLTYPE *CreateDeltaPackageUsingBaselineBlockMap )(
            __RPC__in IAppxPackageEditor * This,
                       __RPC__in_opt IStream *updatedPackageStream,
                       __RPC__in_opt IStream *baselineBlockMapStream,
                               __RPC__in_string LPCWSTR baselinePackageFullName,
                       __RPC__in_opt IStream *deltaPackageStream);
        HRESULT ( STDMETHODCALLTYPE *UpdatePackage )(
            __RPC__in IAppxPackageEditor * This,
                       __RPC__in_opt IStream *baselinePackageStream,
                       __RPC__in_opt IStream *deltaPackageStream,
                       APPX_PACKAGE_EDITOR_UPDATE_PACKAGE_OPTION updateOption);
        HRESULT ( STDMETHODCALLTYPE *UpdateEncryptedPackage )(
            __RPC__in IAppxPackageEditor * This,
                       __RPC__in_opt IStream *baselineEncryptedPackageStream,
                       __RPC__in_opt IStream *deltaPackageStream,
                       APPX_PACKAGE_EDITOR_UPDATE_PACKAGE_OPTION updateOption,
                       __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS2 *settings,
                       __RPC__in const APPX_KEY_INFO *keyInfo);
        HRESULT ( STDMETHODCALLTYPE *UpdatePackageManifest )(
            __RPC__in IAppxPackageEditor * This,
                       __RPC__in_opt IStream *packageStream,
                       __RPC__in_opt IStream *updatedManifestStream,
                       BOOL isPackageEncrypted,
                       APPX_PACKAGE_EDITOR_UPDATE_PACKAGE_MANIFEST_OPTIONS options);
        END_INTERFACE
    } IAppxPackageEditorVtbl;
    interface IAppxPackageEditor
    {
        CONST_VTBL struct IAppxPackageEditorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetWorkingDirectory(This,workingDirectory) )
    ( (This)->lpVtbl -> CreateDeltaPackage(This,updatedPackageStream,baselinePackageStream,deltaPackageStream) )
    ( (This)->lpVtbl -> CreateDeltaPackageUsingBaselineBlockMap(This,updatedPackageStream,baselineBlockMapStream,baselinePackageFullName,deltaPackageStream) )
    ( (This)->lpVtbl -> UpdatePackage(This,baselinePackageStream,deltaPackageStream,updateOption) )
    ( (This)->lpVtbl -> UpdateEncryptedPackage(This,baselineEncryptedPackageStream,deltaPackageStream,updateOption,settings,keyInfo) )
    ( (This)->lpVtbl -> UpdatePackageManifest(This,packageStream,updatedManifestStream,isPackageEncrypted,options) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0069_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0069_v0_0_s_ifspec;
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
EXTERN_C const IID LIBID_APPXPACKAGING;
EXTERN_C const CLSID CLSID_AppxFactory;
class DECLSPEC_UUID("5842a140-ff9f-4166-8f5c-62f5b7b0c781")
AppxFactory;
EXTERN_C const CLSID CLSID_AppxBundleFactory;
class DECLSPEC_UUID("378E0446-5384-43B7-8877-E7DBDD883446")
AppxBundleFactory;
EXTERN_C const CLSID CLSID_AppxPackagingDiagnosticEventSinkManager;
class DECLSPEC_UUID("50CA0A46-1588-4161-8ED2-EF9E469CED5D")
AppxPackagingDiagnosticEventSinkManager;
EXTERN_C const CLSID CLSID_AppxEncryptionFactory;
class DECLSPEC_UUID("DC664FDD-D868-46EE-8780-8D196CB739F7")
AppxEncryptionFactory;
EXTERN_C const CLSID CLSID_AppxPackageEditor;
class DECLSPEC_UUID("F004F2CA-AEBC-4B0D-BF58-E516D5BCC0AB")
AppxPackageEditor;
extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0070_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0070_v0_0_s_ifspec;
}
