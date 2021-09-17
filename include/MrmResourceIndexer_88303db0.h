       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
extern "C" {
enum MrmPlatformVersion
{
    MrmPlatformVersion_Default = 0,
    MrmPlatformVersion_Windows10_0_0_0 = 0x010A0000,
    MrmPlatformVersion_Windows10_0_0_5 = 0x010A0005
};
struct MrmResourceIndexerHandle
{
    PVOID handle;
};
enum MrmPackagingMode
{
    MrmPackagingModeStandaloneFile,
    MrmPackagingModeAutoSplit,
    MrmPackagingModeResourcePack
};
enum MrmPackagingOptions
{
    MrmPackagingOptionsNone = 0x00,
    MrmPackagingOptionsOmitSchemaFromResourcePacks = 0x01,
    MrmPackagingOptionsSplitLanguageVariants = 0x02,
};
enum MrmDumpType
{
    MrmDumpType_Basic = 0,
    MrmDumpType_Detailed = 1,
    MrmDumpType_Schema = 2
};
enum MrmResourceIndexerMessageSeverity
{
    MrmResourceIndexerMessageSeverityVerbose,
    MrmResourceIndexerMessageSeverityInfo,
    MrmResourceIndexerMessageSeverityWarning,
    MrmResourceIndexerMessageSeverityError
};
struct MrmResourceIndexerMessage
{
    MrmResourceIndexerMessageSeverity severity;
    ULONG id;
    PCWSTR text;
};
STDAPI MrmCreateResourceIndexer(
    _In_opt_ PCWSTR packageFamilyName,
    _In_ PCWSTR projectRoot,
    _In_ MrmPlatformVersion platformVersion,
    _In_opt_ PCWSTR defaultQualifiers,
    _Inout_ MrmResourceIndexerHandle* indexer);
STDAPI MrmCreateResourceIndexerFromPreviousSchemaFile(
    _In_ PCWSTR projectRoot,
    _In_ MrmPlatformVersion platformVersion,
    _In_opt_ PCWSTR defaultQualifiers,
    _In_ PCWSTR schemaFile,
    _Inout_ MrmResourceIndexerHandle* indexer);
STDAPI MrmCreateResourceIndexerFromPreviousPriFile(
    _In_ PCWSTR projectRoot,
    _In_ MrmPlatformVersion platformVersion,
    _In_opt_ PCWSTR defaultQualifiers,
    _In_ PCWSTR priFile,
    _Inout_ MrmResourceIndexerHandle* indexer);
STDAPI MrmCreateResourceIndexerFromPreviousSchemaData(
    _In_ PCWSTR projectRoot,
    _In_ MrmPlatformVersion platformVersion,
    _In_opt_ PCWSTR defaultQualifiers,
    _In_reads_bytes_(schemaXmlSize) BYTE* schemaXmlData,
    _In_ ULONG schemaXmlSize,
    _Inout_ MrmResourceIndexerHandle* indexer);
STDAPI MrmCreateResourceIndexerFromPreviousPriData(
    _In_ PCWSTR projectRoot,
    _In_ MrmPlatformVersion platformVersion,
    _In_opt_ PCWSTR defaultQualifiers,
    _In_reads_bytes_(priSize) BYTE* priData,
    _In_ ULONG priSize,
    _Inout_ MrmResourceIndexerHandle* indexer);
STDAPI MrmIndexString(
    _In_ MrmResourceIndexerHandle indexer,
    _In_ PCWSTR resourceUri,
    _In_ PCWSTR resourceString,
    _In_opt_ PCWSTR qualifiers);
STDAPI MrmIndexEmbeddedData(
    _In_ MrmResourceIndexerHandle indexer,
    _In_ PCWSTR resourceUri,
    _In_reads_bytes_(embeddedDataSize) const BYTE* embeddedData,
    _In_ ULONG embeddedDataSize,
    _In_opt_ PCWSTR qualifiers);
STDAPI MrmIndexFile(
    _In_ MrmResourceIndexerHandle indexer,
    _In_ PCWSTR resourceUri,
    _In_ PCWSTR filePath,
    _In_opt_ PCWSTR qualifiers);
STDAPI MrmIndexFileAutoQualifiers(
    _In_ MrmResourceIndexerHandle indexer,
    _In_opt_ PCWSTR filePath);
STDAPI MrmIndexResourceContainerAutoQualifiers(
    _In_ MrmResourceIndexerHandle indexer,
    _In_ PCWSTR containerPath);
STDAPI MrmCreateResourceFile(
    _In_ MrmResourceIndexerHandle indexer,
    _In_ MrmPackagingMode packagingMode,
    _In_ MrmPackagingOptions packagingOptions,
    _In_ PCWSTR outputDirectory);
STDAPI MrmCreateResourceFileInMemory(
    _In_ MrmResourceIndexerHandle indexer,
    _In_ MrmPackagingMode packagingMode,
    _In_ MrmPackagingOptions packagingOptions,
    _Outptr_result_bytebuffer_(*outputPriSize) BYTE** outputPriData,
    _Out_ ULONG* outputPriSize);
STDAPI MrmPeekResourceIndexerMessages(
    _In_ MrmResourceIndexerHandle handle,
    _Out_writes_(*numMsgs) MrmResourceIndexerMessage** messages,
    _Out_ ULONG* numMsgs);
STDAPI MrmDestroyIndexerAndMessages(_In_ MrmResourceIndexerHandle indexer);
STDAPI MrmFreeMemory(_In_ BYTE* data);
STDAPI MrmDumpPriFile(
    _In_ PCWSTR indexFileName,
    _In_opt_ PCWSTR schemaPriFile,
    _In_ MrmDumpType dumpType,
    _In_ PCWSTR outputXmlFile);
STDAPI MrmDumpPriFileInMemory(
    _In_ PCWSTR indexFileName,
    _In_opt_ PCWSTR schemaPriFile,
    _In_ MrmDumpType dumpType,
    _Outptr_result_bytebuffer_(*outputXmlSize) BYTE** outputXmlData,
    _Out_ ULONG* outputXmlSize);
STDAPI MrmDumpPriDataInMemory(
    _In_reads_bytes_(inputPriSize) BYTE* inputPriData,
    _In_ ULONG inputPriSize,
    _In_reads_bytes_opt_(schemaPriSize) BYTE* schemaPriData,
    _In_ ULONG schemaPriSize,
    _In_ MrmDumpType dumpType,
    _Outptr_result_bytebuffer_(*outputXmlSize) BYTE** outputXmlData,
    _Out_ ULONG* outputXmlSize);
STDAPI MrmCreateConfig(
    _In_ MrmPlatformVersion platformVersion,
    _In_opt_ PCWSTR defaultQualifiers,
    _In_ PCWSTR outputXmlFile);
STDAPI MrmCreateConfigInMemory(
    _In_ MrmPlatformVersion platformVersion,
    _In_opt_ PCWSTR defaultQualifiers,
    _Outptr_result_bytebuffer_(*outputXmlSize) BYTE** outputXmlData,
    _Out_ ULONG* outputXmlSize);
}
#endif
#pragma endregion
