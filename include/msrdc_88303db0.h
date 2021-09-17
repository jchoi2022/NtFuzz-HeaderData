#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IRdcGeneratorParameters IRdcGeneratorParameters;
typedef interface IRdcGeneratorFilterMaxParameters IRdcGeneratorFilterMaxParameters;
typedef interface IRdcGenerator IRdcGenerator;
typedef interface IRdcFileReader IRdcFileReader;
typedef interface IRdcFileWriter IRdcFileWriter;
typedef interface IRdcSignatureReader IRdcSignatureReader;
typedef interface IRdcComparator IRdcComparator;
typedef interface IRdcLibrary IRdcLibrary;
typedef interface ISimilarityReportProgress ISimilarityReportProgress;
typedef interface ISimilarityTableDumpState ISimilarityTableDumpState;
typedef interface ISimilarityTraitsMappedView ISimilarityTraitsMappedView;
typedef interface ISimilarityTraitsMapping ISimilarityTraitsMapping;
typedef interface ISimilarityTraitsTable ISimilarityTraitsTable;
typedef interface ISimilarityFileIdTable ISimilarityFileIdTable;
typedef interface IRdcSimilarityGenerator IRdcSimilarityGenerator;
typedef interface IFindSimilarResults IFindSimilarResults;
typedef interface ISimilarity ISimilarity;
typedef class RdcLibrary RdcLibrary;
typedef class RdcGeneratorParameters RdcGeneratorParameters;
typedef class RdcGeneratorFilterMaxParameters RdcGeneratorFilterMaxParameters;
typedef class RdcGenerator RdcGenerator;
typedef class RdcFileReader RdcFileReader;
typedef class RdcSignatureReader RdcSignatureReader;
typedef class RdcComparator RdcComparator;
typedef class SimilarityReportProgress SimilarityReportProgress;
typedef class SimilarityTableDumpState SimilarityTableDumpState;
typedef class SimilarityTraitsTable SimilarityTraitsTable;
typedef class SimilarityFileIdTable SimilarityFileIdTable;
typedef class Similarity Similarity;
typedef class RdcSimilarityGenerator RdcSimilarityGenerator;
typedef class FindSimilarResults FindSimilarResults;
typedef class SimilarityTraitsMapping SimilarityTraitsMapping;
typedef class SimilarityTraitsMappedView SimilarityTraitsMappedView;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning( disable: 4100 )
#pragma warning( disable: 4152 )
const ULONG MSRDC_VERSION = 0x010000;
const ULONG MSRDC_MINIMUM_COMPATIBLE_APP_VERSION = 0x010000;
const ULONG MSRDC_MINIMUM_DEPTH = 1;
const ULONG MSRDC_MAXIMUM_DEPTH = 8;
const ULONG MSRDC_MINIMUM_COMPAREBUFFER = 100000;
const ULONG MSRDC_MAXIMUM_COMPAREBUFFER = (1<<30);
const ULONG MSRDC_DEFAULT_COMPAREBUFFER = 3200000;
const ULONG MSRDC_MINIMUM_INPUTBUFFERSIZE = 1024;
const ULONG MSRDC_MINIMUM_HORIZONSIZE = 128;
const ULONG MSRDC_MAXIMUM_HORIZONSIZE = 1024 * 16;
const ULONG MSRDC_MINIMUM_HASHWINDOWSIZE = 2;
const ULONG MSRDC_MAXIMUM_HASHWINDOWSIZE = 96;
const ULONG MSRDC_DEFAULT_HASHWINDOWSIZE_1 = 48;
const ULONG MSRDC_DEFAULT_HORIZONSIZE_1 = 1024;
const ULONG MSRDC_DEFAULT_HASHWINDOWSIZE_N = 2;
const ULONG MSRDC_DEFAULT_HORIZONSIZE_N = 128;
const ULONG MSRDC_MAXIMUM_TRAITVALUE = 63;
const ULONG MSRDC_MINIMUM_MATCHESREQUIRED = 1;
const ULONG MSRDC_MAXIMUM_MATCHESREQUIRED = 16;
typedef
enum __MIDL___MIDL_itf_msrdc_0000_0000_0001
    {
        RDC_NoError = 0,
        RDC_HeaderVersionNewer = ( RDC_NoError + 1 ) ,
        RDC_HeaderVersionOlder = ( RDC_HeaderVersionNewer + 1 ) ,
        RDC_HeaderMissingOrCorrupt = ( RDC_HeaderVersionOlder + 1 ) ,
        RDC_HeaderWrongType = ( RDC_HeaderMissingOrCorrupt + 1 ) ,
        RDC_DataMissingOrCorrupt = ( RDC_HeaderWrongType + 1 ) ,
        RDC_DataTooManyRecords = ( RDC_DataMissingOrCorrupt + 1 ) ,
        RDC_FileChecksumMismatch = ( RDC_DataTooManyRecords + 1 ) ,
        RDC_ApplicationError = ( RDC_FileChecksumMismatch + 1 ) ,
        RDC_Aborted = ( RDC_ApplicationError + 1 ) ,
        RDC_Win32Error = ( RDC_Aborted + 1 )
    } RDC_ErrorCode;
typedef
enum __MIDL___MIDL_itf_msrdc_0000_0000_0002
    {
        RDCGENTYPE_Unused = 0,
        RDCGENTYPE_FilterMax = ( RDCGENTYPE_Unused + 1 )
    } GeneratorParametersType;
typedef
enum __MIDL___MIDL_itf_msrdc_0000_0000_0003
    {
        RDCNEED_SOURCE = 0,
        RDCNEED_TARGET = 1,
        RDCNEED_SEED = 2,
        RDCNEED_SEED_MAX = 255
    } RdcNeedType;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0004
    {
    RdcNeedType m_BlockType;
    unsigned __int64 m_FileOffset;
    unsigned __int64 m_BlockLength;
    } RdcNeed;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0005
    {
    ULONG m_Size;
    ULONG m_Used;
    BYTE *m_Data;
    } RdcBufferPointer;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0006
    {
    ULONG m_Size;
    ULONG m_Used;
    RdcNeed *m_Data;
    } RdcNeedPointer;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0007
    {
    BYTE m_Signature[ 16 ];
    USHORT m_BlockLength;
    } RdcSignature;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0008
    {
    ULONG m_Size;
    ULONG m_Used;
    RdcSignature *m_Data;
    } RdcSignaturePointer;
typedef unsigned int SimilarityFileIndexT;
typedef
enum __MIDL___MIDL_itf_msrdc_0000_0000_0009
    {
        RDCTABLE_InvalidOrUnknown = 0,
        RDCTABLE_Existing = ( RDCTABLE_InvalidOrUnknown + 1 ) ,
        RDCTABLE_New = ( RDCTABLE_Existing + 1 )
    } RdcCreatedTables;
typedef
enum __MIDL___MIDL_itf_msrdc_0000_0000_0010
    {
        RDCMAPPING_Undefined = 0,
        RDCMAPPING_ReadOnly = ( RDCMAPPING_Undefined + 1 ) ,
        RDCMAPPING_ReadWrite = ( RDCMAPPING_ReadOnly + 1 )
    } RdcMappingAccessMode;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0011
    {
    unsigned char *m_Data;
    DWORD m_Length;
    } SimilarityMappedViewInfo;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0012
    {
    unsigned char m_Data[ 16 ];
    } SimilarityData;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0013
    {
    SimilarityFileIndexT m_FileIndex;
    unsigned int m_MatchCount;
    } FindSimilarFileIndexResults;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0014
    {
    SimilarityFileIndexT m_FileIndex;
    SimilarityData m_Data;
    } SimilarityDumpData;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0015
    {
    byte m_FileId[ 32 ];
    } SimilarityFileId;
extern RPC_IF_HANDLE __MIDL_itf_msrdc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msrdc_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IRdcGeneratorParameters;
    typedef struct IRdcGeneratorParametersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRdcGeneratorParameters * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRdcGeneratorParameters * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRdcGeneratorParameters * This);
                           HRESULT ( STDMETHODCALLTYPE *GetGeneratorParametersType )(
            __RPC__in IRdcGeneratorParameters * This,
                        __RPC__out GeneratorParametersType *parametersType);
                           HRESULT ( STDMETHODCALLTYPE *GetParametersVersion )(
            __RPC__in IRdcGeneratorParameters * This,
                        __RPC__out ULONG *currentVersion,
                        __RPC__out ULONG *minimumCompatibleAppVersion);
                           HRESULT ( STDMETHODCALLTYPE *GetSerializeSize )(
            __RPC__in IRdcGeneratorParameters * This,
                        __RPC__out ULONG *size);
                           HRESULT ( STDMETHODCALLTYPE *Serialize )(
            __RPC__in IRdcGeneratorParameters * This,
                       ULONG size,
                        __RPC__out BYTE *parametersBlob,
                        __RPC__out ULONG *bytesWritten);
        END_INTERFACE
    } IRdcGeneratorParametersVtbl;
    interface IRdcGeneratorParameters
    {
        CONST_VTBL struct IRdcGeneratorParametersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetGeneratorParametersType(This,parametersType) )
    ( (This)->lpVtbl -> GetParametersVersion(This,currentVersion,minimumCompatibleAppVersion) )
    ( (This)->lpVtbl -> GetSerializeSize(This,size) )
    ( (This)->lpVtbl -> Serialize(This,size,parametersBlob,bytesWritten) )
EXTERN_C const IID IID_IRdcGeneratorFilterMaxParameters;
    typedef struct IRdcGeneratorFilterMaxParametersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRdcGeneratorFilterMaxParameters * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRdcGeneratorFilterMaxParameters * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRdcGeneratorFilterMaxParameters * This);
                           HRESULT ( STDMETHODCALLTYPE *GetHorizonSize )(
            IRdcGeneratorFilterMaxParameters * This,
                        ULONG *horizonSize);
                           HRESULT ( STDMETHODCALLTYPE *SetHorizonSize )(
            IRdcGeneratorFilterMaxParameters * This,
                       ULONG horizonSize);
                           HRESULT ( STDMETHODCALLTYPE *GetHashWindowSize )(
            IRdcGeneratorFilterMaxParameters * This,
                        ULONG *hashWindowSize);
                           HRESULT ( STDMETHODCALLTYPE *SetHashWindowSize )(
            IRdcGeneratorFilterMaxParameters * This,
                       ULONG hashWindowSize);
        END_INTERFACE
    } IRdcGeneratorFilterMaxParametersVtbl;
    interface IRdcGeneratorFilterMaxParameters
    {
        CONST_VTBL struct IRdcGeneratorFilterMaxParametersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetHorizonSize(This,horizonSize) )
    ( (This)->lpVtbl -> SetHorizonSize(This,horizonSize) )
    ( (This)->lpVtbl -> GetHashWindowSize(This,hashWindowSize) )
    ( (This)->lpVtbl -> SetHashWindowSize(This,hashWindowSize) )
EXTERN_C const IID IID_IRdcGenerator;
    typedef struct IRdcGeneratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRdcGenerator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRdcGenerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRdcGenerator * This);
                           HRESULT ( STDMETHODCALLTYPE *GetGeneratorParameters )(
            IRdcGenerator * This,
                       ULONG level,
                        IRdcGeneratorParameters **iGeneratorParameters);
                           HRESULT ( STDMETHODCALLTYPE *Process )(
            IRdcGenerator * This,
                       BOOL endOfInput,
                        BOOL *endOfOutput,
                            RdcBufferPointer *inputBuffer,
                       ULONG depth,
                                 RdcBufferPointer *outputBuffers[ ],
                        RDC_ErrorCode *rdc_ErrorCode);
        END_INTERFACE
    } IRdcGeneratorVtbl;
    interface IRdcGenerator
    {
        CONST_VTBL struct IRdcGeneratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetGeneratorParameters(This,level,iGeneratorParameters) )
    ( (This)->lpVtbl -> Process(This,endOfInput,endOfOutput,inputBuffer,depth,outputBuffers,rdc_ErrorCode) )
EXTERN_C const IID IID_IRdcFileReader;
    typedef struct IRdcFileReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRdcFileReader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRdcFileReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRdcFileReader * This);
                           HRESULT ( STDMETHODCALLTYPE *GetFileSize )(
            IRdcFileReader * This,
                        ULONGLONG *fileSize);
                           HRESULT ( STDMETHODCALLTYPE *Read )(
            IRdcFileReader * This,
                       ULONGLONG offsetFileStart,
                       ULONG bytesToRead,
                        ULONG *bytesActuallyRead,
                        BYTE *buffer,
                        BOOL *eof);
                           HRESULT ( STDMETHODCALLTYPE *GetFilePosition )(
            IRdcFileReader * This,
                        ULONGLONG *offsetFromStart);
        END_INTERFACE
    } IRdcFileReaderVtbl;
    interface IRdcFileReader
    {
        CONST_VTBL struct IRdcFileReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFileSize(This,fileSize) )
    ( (This)->lpVtbl -> Read(This,offsetFileStart,bytesToRead,bytesActuallyRead,buffer,eof) )
    ( (This)->lpVtbl -> GetFilePosition(This,offsetFromStart) )
EXTERN_C const IID IID_IRdcFileWriter;
    typedef struct IRdcFileWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRdcFileWriter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRdcFileWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRdcFileWriter * This);
                           HRESULT ( STDMETHODCALLTYPE *GetFileSize )(
            IRdcFileWriter * This,
                        ULONGLONG *fileSize);
                           HRESULT ( STDMETHODCALLTYPE *Read )(
            IRdcFileWriter * This,
                       ULONGLONG offsetFileStart,
                       ULONG bytesToRead,
                        ULONG *bytesActuallyRead,
                        BYTE *buffer,
                        BOOL *eof);
                           HRESULT ( STDMETHODCALLTYPE *GetFilePosition )(
            IRdcFileWriter * This,
                        ULONGLONG *offsetFromStart);
                           HRESULT ( STDMETHODCALLTYPE *Write )(
            IRdcFileWriter * This,
                       ULONGLONG offsetFileStart,
                       ULONG bytesToWrite,
                        BYTE *buffer);
                           HRESULT ( STDMETHODCALLTYPE *Truncate )(
            IRdcFileWriter * This);
                           HRESULT ( STDMETHODCALLTYPE *DeleteOnClose )(
            IRdcFileWriter * This);
        END_INTERFACE
    } IRdcFileWriterVtbl;
    interface IRdcFileWriter
    {
        CONST_VTBL struct IRdcFileWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFileSize(This,fileSize) )
    ( (This)->lpVtbl -> Read(This,offsetFileStart,bytesToRead,bytesActuallyRead,buffer,eof) )
    ( (This)->lpVtbl -> GetFilePosition(This,offsetFromStart) )
    ( (This)->lpVtbl -> Write(This,offsetFileStart,bytesToWrite,buffer) )
    ( (This)->lpVtbl -> Truncate(This) )
    ( (This)->lpVtbl -> DeleteOnClose(This) )
EXTERN_C const IID IID_IRdcSignatureReader;
    typedef struct IRdcSignatureReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRdcSignatureReader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRdcSignatureReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRdcSignatureReader * This);
                           HRESULT ( STDMETHODCALLTYPE *ReadHeader )(
            IRdcSignatureReader * This,
                        RDC_ErrorCode *rdc_ErrorCode);
                           HRESULT ( STDMETHODCALLTYPE *ReadSignatures )(
            IRdcSignatureReader * This,
                            RdcSignaturePointer *rdcSignaturePointer,
                        BOOL *endOfOutput);
        END_INTERFACE
    } IRdcSignatureReaderVtbl;
    interface IRdcSignatureReader
    {
        CONST_VTBL struct IRdcSignatureReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReadHeader(This,rdc_ErrorCode) )
    ( (This)->lpVtbl -> ReadSignatures(This,rdcSignaturePointer,endOfOutput) )
EXTERN_C const IID IID_IRdcComparator;
    typedef struct IRdcComparatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRdcComparator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRdcComparator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRdcComparator * This);
                           HRESULT ( STDMETHODCALLTYPE *Process )(
            IRdcComparator * This,
                       BOOL endOfInput,
                        BOOL *endOfOutput,
                            RdcBufferPointer *inputBuffer,
                            RdcNeedPointer *outputBuffer,
                        RDC_ErrorCode *rdc_ErrorCode);
        END_INTERFACE
    } IRdcComparatorVtbl;
    interface IRdcComparator
    {
        CONST_VTBL struct IRdcComparatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Process(This,endOfInput,endOfOutput,inputBuffer,outputBuffer,rdc_ErrorCode) )
EXTERN_C const IID IID_IRdcLibrary;
    typedef struct IRdcLibraryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRdcLibrary * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRdcLibrary * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRdcLibrary * This);
                           HRESULT ( STDMETHODCALLTYPE *ComputeDefaultRecursionDepth )(
            IRdcLibrary * This,
                       ULONGLONG fileSize,
                        ULONG *depth);
                           HRESULT ( STDMETHODCALLTYPE *CreateGeneratorParameters )(
            IRdcLibrary * This,
                       GeneratorParametersType parametersType,
                       ULONG level,
                        IRdcGeneratorParameters **iGeneratorParameters);
                           HRESULT ( STDMETHODCALLTYPE *OpenGeneratorParameters )(
            IRdcLibrary * This,
                       ULONG size,
                       const BYTE *parametersBlob,
                        IRdcGeneratorParameters **iGeneratorParameters);
                           HRESULT ( STDMETHODCALLTYPE *CreateGenerator )(
            IRdcLibrary * This,
                       ULONG depth,
                                IRdcGeneratorParameters *iGeneratorParametersArray[ ],
                        IRdcGenerator **iGenerator);
                           HRESULT ( STDMETHODCALLTYPE *CreateComparator )(
            IRdcLibrary * This,
                       IRdcFileReader *iSeedSignaturesFile,
                       ULONG comparatorBufferSize,
                        IRdcComparator **iComparator);
                           HRESULT ( STDMETHODCALLTYPE *CreateSignatureReader )(
            IRdcLibrary * This,
                       IRdcFileReader *iFileReader,
                        IRdcSignatureReader **iSignatureReader);
                           HRESULT ( STDMETHODCALLTYPE *GetRDCVersion )(
            IRdcLibrary * This,
                        ULONG *currentVersion,
                        ULONG *minimumCompatibleAppVersion);
        END_INTERFACE
    } IRdcLibraryVtbl;
    interface IRdcLibrary
    {
        CONST_VTBL struct IRdcLibraryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ComputeDefaultRecursionDepth(This,fileSize,depth) )
    ( (This)->lpVtbl -> CreateGeneratorParameters(This,parametersType,level,iGeneratorParameters) )
    ( (This)->lpVtbl -> OpenGeneratorParameters(This,size,parametersBlob,iGeneratorParameters) )
    ( (This)->lpVtbl -> CreateGenerator(This,depth,iGeneratorParametersArray,iGenerator) )
    ( (This)->lpVtbl -> CreateComparator(This,iSeedSignaturesFile,comparatorBufferSize,iComparator) )
    ( (This)->lpVtbl -> CreateSignatureReader(This,iFileReader,iSignatureReader) )
    ( (This)->lpVtbl -> GetRDCVersion(This,currentVersion,minimumCompatibleAppVersion) )
EXTERN_C const IID IID_ISimilarityReportProgress;
    typedef struct ISimilarityReportProgressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISimilarityReportProgress * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISimilarityReportProgress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISimilarityReportProgress * This);
                           HRESULT ( STDMETHODCALLTYPE *ReportProgress )(
            ISimilarityReportProgress * This,
                       DWORD percentCompleted);
        END_INTERFACE
    } ISimilarityReportProgressVtbl;
    interface ISimilarityReportProgress
    {
        CONST_VTBL struct ISimilarityReportProgressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReportProgress(This,percentCompleted) )
EXTERN_C const IID IID_ISimilarityTableDumpState;
    typedef struct ISimilarityTableDumpStateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISimilarityTableDumpState * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISimilarityTableDumpState * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISimilarityTableDumpState * This);
                           HRESULT ( STDMETHODCALLTYPE *GetNextData )(
            ISimilarityTableDumpState * This,
                       DWORD resultsSize,
                        DWORD *resultsUsed,
                        BOOL *eof,
                            SimilarityDumpData *results);
        END_INTERFACE
    } ISimilarityTableDumpStateVtbl;
    interface ISimilarityTableDumpState
    {
        CONST_VTBL struct ISimilarityTableDumpStateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNextData(This,resultsSize,resultsUsed,eof,results) )
EXTERN_C const IID IID_ISimilarityTraitsMappedView;
    typedef struct ISimilarityTraitsMappedViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISimilarityTraitsMappedView * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISimilarityTraitsMappedView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISimilarityTraitsMappedView * This);
                                  HRESULT ( STDMETHODCALLTYPE *Flush )(
            ISimilarityTraitsMappedView * This);
                                  HRESULT ( STDMETHODCALLTYPE *Unmap )(
            ISimilarityTraitsMappedView * This);
                                  HRESULT ( STDMETHODCALLTYPE *Get )(
            ISimilarityTraitsMappedView * This,
                       unsigned __int64 index,
                       BOOL dirty,
                       DWORD numElements,
                        SimilarityMappedViewInfo *viewInfo);
                                  void ( STDMETHODCALLTYPE *GetView )(
            ISimilarityTraitsMappedView * This,
                        const unsigned char **mappedPageBegin,
                        const unsigned char **mappedPageEnd);
        END_INTERFACE
    } ISimilarityTraitsMappedViewVtbl;
    interface ISimilarityTraitsMappedView
    {
        CONST_VTBL struct ISimilarityTraitsMappedViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Flush(This) )
    ( (This)->lpVtbl -> Unmap(This) )
    ( (This)->lpVtbl -> Get(This,index,dirty,numElements,viewInfo) )
    ( (This)->lpVtbl -> GetView(This,mappedPageBegin,mappedPageEnd) )
EXTERN_C const IID IID_ISimilarityTraitsMapping;
    typedef struct ISimilarityTraitsMappingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISimilarityTraitsMapping * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISimilarityTraitsMapping * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISimilarityTraitsMapping * This);
                                  void ( STDMETHODCALLTYPE *CloseMapping )(
            ISimilarityTraitsMapping * This);
                           HRESULT ( STDMETHODCALLTYPE *SetFileSize )(
            ISimilarityTraitsMapping * This,
                       unsigned __int64 fileSize);
                                  HRESULT ( STDMETHODCALLTYPE *GetFileSize )(
            ISimilarityTraitsMapping * This,
                        unsigned __int64 *fileSize);
                                  HRESULT ( STDMETHODCALLTYPE *OpenMapping )(
            ISimilarityTraitsMapping * This,
                       RdcMappingAccessMode accessMode,
                       unsigned __int64 begin,
                       unsigned __int64 end,
                        unsigned __int64 *actualEnd);
                                  HRESULT ( STDMETHODCALLTYPE *ResizeMapping )(
            ISimilarityTraitsMapping * This,
                       RdcMappingAccessMode accessMode,
                       unsigned __int64 begin,
                       unsigned __int64 end,
                        unsigned __int64 *actualEnd);
                                  void ( STDMETHODCALLTYPE *GetPageSize )(
            ISimilarityTraitsMapping * This,
                        DWORD *pageSize);
                           HRESULT ( STDMETHODCALLTYPE *CreateView )(
            ISimilarityTraitsMapping * This,
                       DWORD minimumMappedPages,
                       RdcMappingAccessMode accessMode,
                        ISimilarityTraitsMappedView **mappedView);
        END_INTERFACE
    } ISimilarityTraitsMappingVtbl;
    interface ISimilarityTraitsMapping
    {
        CONST_VTBL struct ISimilarityTraitsMappingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CloseMapping(This) )
    ( (This)->lpVtbl -> SetFileSize(This,fileSize) )
    ( (This)->lpVtbl -> GetFileSize(This,fileSize) )
    ( (This)->lpVtbl -> OpenMapping(This,accessMode,begin,end,actualEnd) )
    ( (This)->lpVtbl -> ResizeMapping(This,accessMode,begin,end,actualEnd) )
    ( (This)->lpVtbl -> GetPageSize(This,pageSize) )
    ( (This)->lpVtbl -> CreateView(This,minimumMappedPages,accessMode,mappedView) )
EXTERN_C const IID IID_ISimilarityTraitsTable;
    typedef struct ISimilarityTraitsTableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISimilarityTraitsTable * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISimilarityTraitsTable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISimilarityTraitsTable * This);
                           HRESULT ( STDMETHODCALLTYPE *CreateTable )(
            ISimilarityTraitsTable * This,
            _In_ wchar_t *path,
                       BOOL truncate,
            _In_ BYTE *securityDescriptor,
            _Out_ RdcCreatedTables *isNew);
                           HRESULT ( STDMETHODCALLTYPE *CreateTableIndirect )(
            ISimilarityTraitsTable * This,
                       ISimilarityTraitsMapping *mapping,
                       BOOL truncate,
                        RdcCreatedTables *isNew);
                           HRESULT ( STDMETHODCALLTYPE *CloseTable )(
            ISimilarityTraitsTable * This,
            BOOL isValid);
                           HRESULT ( STDMETHODCALLTYPE *Append )(
            ISimilarityTraitsTable * This,
                       SimilarityData *data,
                       SimilarityFileIndexT fileIndex);
                           HRESULT ( STDMETHODCALLTYPE *FindSimilarFileIndex )(
            ISimilarityTraitsTable * This,
                       SimilarityData *similarityData,
                       USHORT numberOfMatchesRequired,
                        FindSimilarFileIndexResults *findSimilarFileIndexResults,
                       DWORD resultsSize,
                        DWORD *resultsUsed);
                           HRESULT ( STDMETHODCALLTYPE *BeginDump )(
            ISimilarityTraitsTable * This,
                        ISimilarityTableDumpState **similarityTableDumpState);
                           HRESULT ( STDMETHODCALLTYPE *GetLastIndex )(
            ISimilarityTraitsTable * This,
                        SimilarityFileIndexT *fileIndex);
        END_INTERFACE
    } ISimilarityTraitsTableVtbl;
    interface ISimilarityTraitsTable
    {
        CONST_VTBL struct ISimilarityTraitsTableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateTable(This,path,truncate,securityDescriptor,isNew) )
    ( (This)->lpVtbl -> CreateTableIndirect(This,mapping,truncate,isNew) )
    ( (This)->lpVtbl -> CloseTable(This,isValid) )
    ( (This)->lpVtbl -> Append(This,data,fileIndex) )
    ( (This)->lpVtbl -> FindSimilarFileIndex(This,similarityData,numberOfMatchesRequired,findSimilarFileIndexResults,resultsSize,resultsUsed) )
    ( (This)->lpVtbl -> BeginDump(This,similarityTableDumpState) )
    ( (This)->lpVtbl -> GetLastIndex(This,fileIndex) )
EXTERN_C const IID IID_ISimilarityFileIdTable;
    typedef struct ISimilarityFileIdTableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISimilarityFileIdTable * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISimilarityFileIdTable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISimilarityFileIdTable * This);
                           HRESULT ( STDMETHODCALLTYPE *CreateTable )(
            ISimilarityFileIdTable * This,
            _In_ wchar_t *path,
                       BOOL truncate,
            _In_ BYTE *securityDescriptor,
                       DWORD recordSize,
            _Out_ RdcCreatedTables *isNew);
                           HRESULT ( STDMETHODCALLTYPE *CreateTableIndirect )(
            ISimilarityFileIdTable * This,
                       IRdcFileWriter *fileIdFile,
                       BOOL truncate,
                       DWORD recordSize,
                        RdcCreatedTables *isNew);
                           HRESULT ( STDMETHODCALLTYPE *CloseTable )(
            ISimilarityFileIdTable * This,
            BOOL isValid);
                           HRESULT ( STDMETHODCALLTYPE *Append )(
            ISimilarityFileIdTable * This,
                       SimilarityFileId *similarityFileId,
                        SimilarityFileIndexT *similarityFileIndex);
                           HRESULT ( STDMETHODCALLTYPE *Lookup )(
            ISimilarityFileIdTable * This,
                       SimilarityFileIndexT similarityFileIndex,
                        SimilarityFileId *similarityFileId);
                           HRESULT ( STDMETHODCALLTYPE *Invalidate )(
            ISimilarityFileIdTable * This,
                       SimilarityFileIndexT similarityFileIndex);
                           HRESULT ( STDMETHODCALLTYPE *GetRecordCount )(
            ISimilarityFileIdTable * This,
                        DWORD *recordCount);
        END_INTERFACE
    } ISimilarityFileIdTableVtbl;
    interface ISimilarityFileIdTable
    {
        CONST_VTBL struct ISimilarityFileIdTableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateTable(This,path,truncate,securityDescriptor,recordSize,isNew) )
    ( (This)->lpVtbl -> CreateTableIndirect(This,fileIdFile,truncate,recordSize,isNew) )
    ( (This)->lpVtbl -> CloseTable(This,isValid) )
    ( (This)->lpVtbl -> Append(This,similarityFileId,similarityFileIndex) )
    ( (This)->lpVtbl -> Lookup(This,similarityFileIndex,similarityFileId) )
    ( (This)->lpVtbl -> Invalidate(This,similarityFileIndex) )
    ( (This)->lpVtbl -> GetRecordCount(This,recordCount) )
EXTERN_C const IID IID_IRdcSimilarityGenerator;
    typedef struct IRdcSimilarityGeneratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRdcSimilarityGenerator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRdcSimilarityGenerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRdcSimilarityGenerator * This);
                           HRESULT ( STDMETHODCALLTYPE *EnableSimilarity )(
            IRdcSimilarityGenerator * This);
                           HRESULT ( STDMETHODCALLTYPE *Results )(
            IRdcSimilarityGenerator * This,
                        SimilarityData *similarityData);
        END_INTERFACE
    } IRdcSimilarityGeneratorVtbl;
    interface IRdcSimilarityGenerator
    {
        CONST_VTBL struct IRdcSimilarityGeneratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnableSimilarity(This) )
    ( (This)->lpVtbl -> Results(This,similarityData) )
EXTERN_C const IID IID_IFindSimilarResults;
    typedef struct IFindSimilarResultsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFindSimilarResults * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFindSimilarResults * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFindSimilarResults * This);
                           HRESULT ( STDMETHODCALLTYPE *GetSize )(
            IFindSimilarResults * This,
                        DWORD *size);
                           HRESULT ( STDMETHODCALLTYPE *GetNextFileId )(
            IFindSimilarResults * This,
                        DWORD *numTraitsMatched,
                        SimilarityFileId *similarityFileId);
        END_INTERFACE
    } IFindSimilarResultsVtbl;
    interface IFindSimilarResults
    {
        CONST_VTBL struct IFindSimilarResultsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSize(This,size) )
    ( (This)->lpVtbl -> GetNextFileId(This,numTraitsMatched,similarityFileId) )
EXTERN_C const IID IID_ISimilarity;
    typedef struct ISimilarityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISimilarity * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISimilarity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISimilarity * This);
                           HRESULT ( STDMETHODCALLTYPE *CreateTable )(
            ISimilarity * This,
            _In_ wchar_t *path,
                       BOOL truncate,
            _In_ BYTE *securityDescriptor,
                       DWORD recordSize,
            _Out_ RdcCreatedTables *isNew);
                           HRESULT ( STDMETHODCALLTYPE *CreateTableIndirect )(
            ISimilarity * This,
                       ISimilarityTraitsMapping *mapping,
                       IRdcFileWriter *fileIdFile,
                       BOOL truncate,
                       DWORD recordSize,
                        RdcCreatedTables *isNew);
                           HRESULT ( STDMETHODCALLTYPE *CloseTable )(
            ISimilarity * This,
                       BOOL isValid);
                           HRESULT ( STDMETHODCALLTYPE *Append )(
            ISimilarity * This,
                       SimilarityFileId *similarityFileId,
                       SimilarityData *similarityData);
                           HRESULT ( STDMETHODCALLTYPE *FindSimilarFileId )(
            ISimilarity * This,
                       SimilarityData *similarityData,
                       USHORT numberOfMatchesRequired,
                       DWORD resultsSize,
                        IFindSimilarResults **findSimilarResults);
                           HRESULT ( STDMETHODCALLTYPE *CopyAndSwap )(
            ISimilarity * This,
                       ISimilarity *newSimilarityTables,
                       ISimilarityReportProgress *reportProgress);
                           HRESULT ( STDMETHODCALLTYPE *GetRecordCount )(
            ISimilarity * This,
                        DWORD *recordCount);
        END_INTERFACE
    } ISimilarityVtbl;
    interface ISimilarity
    {
        CONST_VTBL struct ISimilarityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateTable(This,path,truncate,securityDescriptor,recordSize,isNew) )
    ( (This)->lpVtbl -> CreateTableIndirect(This,mapping,fileIdFile,truncate,recordSize,isNew) )
    ( (This)->lpVtbl -> CloseTable(This,isValid) )
    ( (This)->lpVtbl -> Append(This,similarityFileId,similarityData) )
    ( (This)->lpVtbl -> FindSimilarFileId(This,similarityData,numberOfMatchesRequired,resultsSize,findSimilarResults) )
    ( (This)->lpVtbl -> CopyAndSwap(This,newSimilarityTables,reportProgress) )
    ( (This)->lpVtbl -> GetRecordCount(This,recordCount) )
EXTERN_C const IID LIBID_MSRDCLib;
EXTERN_C const CLSID CLSID_RdcLibrary;
class DECLSPEC_UUID("96236A85-9DBC-11DA-9E3F-0011114AE311")
RdcLibrary;
EXTERN_C const CLSID CLSID_RdcGeneratorParameters;
class DECLSPEC_UUID("96236A86-9DBC-11DA-9E3F-0011114AE311")
RdcGeneratorParameters;
EXTERN_C const CLSID CLSID_RdcGeneratorFilterMaxParameters;
class DECLSPEC_UUID("96236A87-9DBC-11DA-9E3F-0011114AE311")
RdcGeneratorFilterMaxParameters;
EXTERN_C const CLSID CLSID_RdcGenerator;
class DECLSPEC_UUID("96236A88-9DBC-11DA-9E3F-0011114AE311")
RdcGenerator;
EXTERN_C const CLSID CLSID_RdcFileReader;
class DECLSPEC_UUID("96236A89-9DBC-11DA-9E3F-0011114AE311")
RdcFileReader;
EXTERN_C const CLSID CLSID_RdcSignatureReader;
class DECLSPEC_UUID("96236A8A-9DBC-11DA-9E3F-0011114AE311")
RdcSignatureReader;
EXTERN_C const CLSID CLSID_RdcComparator;
class DECLSPEC_UUID("96236A8B-9DBC-11DA-9E3F-0011114AE311")
RdcComparator;
EXTERN_C const CLSID CLSID_SimilarityReportProgress;
class DECLSPEC_UUID("96236A8D-9DBC-11DA-9E3F-0011114AE311")
SimilarityReportProgress;
EXTERN_C const CLSID CLSID_SimilarityTableDumpState;
class DECLSPEC_UUID("96236A8E-9DBC-11DA-9E3F-0011114AE311")
SimilarityTableDumpState;
EXTERN_C const CLSID CLSID_SimilarityTraitsTable;
class DECLSPEC_UUID("96236A8F-9DBC-11DA-9E3F-0011114AE311")
SimilarityTraitsTable;
EXTERN_C const CLSID CLSID_SimilarityFileIdTable;
class DECLSPEC_UUID("96236A90-9DBC-11DA-9E3F-0011114AE311")
SimilarityFileIdTable;
EXTERN_C const CLSID CLSID_Similarity;
class DECLSPEC_UUID("96236A91-9DBC-11DA-9E3F-0011114AE311")
Similarity;
EXTERN_C const CLSID CLSID_RdcSimilarityGenerator;
class DECLSPEC_UUID("96236A92-9DBC-11DA-9E3F-0011114AE311")
RdcSimilarityGenerator;
EXTERN_C const CLSID CLSID_FindSimilarResults;
class DECLSPEC_UUID("96236A93-9DBC-11DA-9E3F-0011114AE311")
FindSimilarResults;
EXTERN_C const CLSID CLSID_SimilarityTraitsMapping;
class DECLSPEC_UUID("96236A94-9DBC-11DA-9E3F-0011114AE311")
SimilarityTraitsMapping;
EXTERN_C const CLSID CLSID_SimilarityTraitsMappedView;
class DECLSPEC_UUID("96236A95-9DBC-11DA-9E3F-0011114AE311")
SimilarityTraitsMappedView;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msrdc_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msrdc_0000_0018_v0_0_s_ifspec;
}
