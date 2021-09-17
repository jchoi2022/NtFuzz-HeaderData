       
WINRT_EXPORT namespace winrt::Windows::Foundation {
struct IMemoryBuffer;
struct MemoryBuffer;
struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Storage {
enum class FileAccessMode;
enum class StorageOpenOptions : unsigned;
struct IStorageFile;
struct StorageStreamTransaction;
}
WINRT_EXPORT namespace winrt::Windows::System {
struct User;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams {
enum class ByteOrder : int32_t
{
    LittleEndian = 0,
    BigEndian = 1,
};
enum class FileOpenDisposition : int32_t
{
    OpenExisting = 0,
    OpenAlways = 1,
    CreateNew = 2,
    CreateAlways = 3,
    TruncateExisting = 4,
};
enum class InputStreamOptions : uint32_t
{
    None = 0x0,
    Partial = 0x1,
    ReadAhead = 0x2,
};
enum class UnicodeEncoding : int32_t
{
    Utf8 = 0,
    Utf16LE = 1,
    Utf16BE = 2,
};
struct IBuffer;
struct IBufferFactory;
struct IBufferStatics;
struct IContentTypeProvider;
struct IDataReader;
struct IDataReaderFactory;
struct IDataReaderStatics;
struct IDataWriter;
struct IDataWriterFactory;
struct IFileRandomAccessStreamStatics;
struct IInputStream;
struct IInputStreamReference;
struct IOutputStream;
struct IRandomAccessStream;
struct IRandomAccessStreamReference;
struct IRandomAccessStreamReferenceStatics;
struct IRandomAccessStreamStatics;
struct IRandomAccessStreamWithContentType;
struct Buffer;
struct DataReader;
struct DataReaderLoadOperation;
struct DataWriter;
struct DataWriterStoreOperation;
struct FileInputStream;
struct FileOutputStream;
struct FileRandomAccessStream;
struct InMemoryRandomAccessStream;
struct InputStreamOverStream;
struct OutputStreamOverStream;
struct RandomAccessStream;
struct RandomAccessStreamOverStream;
struct RandomAccessStreamReference;
}
namespace winrt::impl {
template<> struct is_enum_flag<Windows::Storage::Streams::InputStreamOptions> : std::true_type {};
template <> struct category<Windows::Storage::Streams::IBuffer>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IBufferFactory>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IBufferStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IContentTypeProvider>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IDataReader>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IDataReaderFactory>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IDataReaderStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IDataWriter>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IDataWriterFactory>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IFileRandomAccessStreamStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IInputStream>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IInputStreamReference>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IOutputStream>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IRandomAccessStream>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IRandomAccessStreamReference>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IRandomAccessStreamStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::IRandomAccessStreamWithContentType>{ using type = interface_category; };
template <> struct category<Windows::Storage::Streams::Buffer>{ using type = class_category; };
template <> struct category<Windows::Storage::Streams::DataReader>{ using type = class_category; };
template <> struct category<Windows::Storage::Streams::DataReaderLoadOperation>{ using type = class_category; };
template <> struct category<Windows::Storage::Streams::DataWriter>{ using type = class_category; };
template <> struct category<Windows::Storage::Streams::DataWriterStoreOperation>{ using type = class_category; };
template <> struct category<Windows::Storage::Streams::FileInputStream>{ using type = class_category; };
template <> struct category<Windows::Storage::Streams::FileOutputStream>{ using type = class_category; };
template <> struct category<Windows::Storage::Streams::FileRandomAccessStream>{ using type = class_category; };
template <> struct category<Windows::Storage::Streams::InMemoryRandomAccessStream>{ using type = class_category; };
template <> struct category<Windows::Storage::Streams::InputStreamOverStream>{ using type = class_category; };
template <> struct category<Windows::Storage::Streams::OutputStreamOverStream>{ using type = class_category; };
template <> struct category<Windows::Storage::Streams::RandomAccessStream>{ using type = class_category; };
template <> struct category<Windows::Storage::Streams::RandomAccessStreamOverStream>{ using type = class_category; };
template <> struct category<Windows::Storage::Streams::RandomAccessStreamReference>{ using type = class_category; };
template <> struct category<Windows::Storage::Streams::ByteOrder>{ using type = enum_category; };
template <> struct category<Windows::Storage::Streams::FileOpenDisposition>{ using type = enum_category; };
template <> struct category<Windows::Storage::Streams::InputStreamOptions>{ using type = enum_category; };
template <> struct category<Windows::Storage::Streams::UnicodeEncoding>{ using type = enum_category; };
template <> struct name<Windows::Storage::Streams::IBuffer>{ static constexpr auto & value{ L"Windows.Storage.Streams.IBuffer" }; };
template <> struct name<Windows::Storage::Streams::IBufferFactory>{ static constexpr auto & value{ L"Windows.Storage.Streams.IBufferFactory" }; };
template <> struct name<Windows::Storage::Streams::IBufferStatics>{ static constexpr auto & value{ L"Windows.Storage.Streams.IBufferStatics" }; };
template <> struct name<Windows::Storage::Streams::IContentTypeProvider>{ static constexpr auto & value{ L"Windows.Storage.Streams.IContentTypeProvider" }; };
template <> struct name<Windows::Storage::Streams::IDataReader>{ static constexpr auto & value{ L"Windows.Storage.Streams.IDataReader" }; };
template <> struct name<Windows::Storage::Streams::IDataReaderFactory>{ static constexpr auto & value{ L"Windows.Storage.Streams.IDataReaderFactory" }; };
template <> struct name<Windows::Storage::Streams::IDataReaderStatics>{ static constexpr auto & value{ L"Windows.Storage.Streams.IDataReaderStatics" }; };
template <> struct name<Windows::Storage::Streams::IDataWriter>{ static constexpr auto & value{ L"Windows.Storage.Streams.IDataWriter" }; };
template <> struct name<Windows::Storage::Streams::IDataWriterFactory>{ static constexpr auto & value{ L"Windows.Storage.Streams.IDataWriterFactory" }; };
template <> struct name<Windows::Storage::Streams::IFileRandomAccessStreamStatics>{ static constexpr auto & value{ L"Windows.Storage.Streams.IFileRandomAccessStreamStatics" }; };
template <> struct name<Windows::Storage::Streams::IInputStream>{ static constexpr auto & value{ L"Windows.Storage.Streams.IInputStream" }; };
template <> struct name<Windows::Storage::Streams::IInputStreamReference>{ static constexpr auto & value{ L"Windows.Storage.Streams.IInputStreamReference" }; };
template <> struct name<Windows::Storage::Streams::IOutputStream>{ static constexpr auto & value{ L"Windows.Storage.Streams.IOutputStream" }; };
template <> struct name<Windows::Storage::Streams::IRandomAccessStream>{ static constexpr auto & value{ L"Windows.Storage.Streams.IRandomAccessStream" }; };
template <> struct name<Windows::Storage::Streams::IRandomAccessStreamReference>{ static constexpr auto & value{ L"Windows.Storage.Streams.IRandomAccessStreamReference" }; };
template <> struct name<Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>{ static constexpr auto & value{ L"Windows.Storage.Streams.IRandomAccessStreamReferenceStatics" }; };
template <> struct name<Windows::Storage::Streams::IRandomAccessStreamStatics>{ static constexpr auto & value{ L"Windows.Storage.Streams.IRandomAccessStreamStatics" }; };
template <> struct name<Windows::Storage::Streams::IRandomAccessStreamWithContentType>{ static constexpr auto & value{ L"Windows.Storage.Streams.IRandomAccessStreamWithContentType" }; };
template <> struct name<Windows::Storage::Streams::Buffer>{ static constexpr auto & value{ L"Windows.Storage.Streams.Buffer" }; };
template <> struct name<Windows::Storage::Streams::DataReader>{ static constexpr auto & value{ L"Windows.Storage.Streams.DataReader" }; };
template <> struct name<Windows::Storage::Streams::DataReaderLoadOperation>{ static constexpr auto & value{ L"Windows.Storage.Streams.DataReaderLoadOperation" }; };
template <> struct name<Windows::Storage::Streams::DataWriter>{ static constexpr auto & value{ L"Windows.Storage.Streams.DataWriter" }; };
template <> struct name<Windows::Storage::Streams::DataWriterStoreOperation>{ static constexpr auto & value{ L"Windows.Storage.Streams.DataWriterStoreOperation" }; };
template <> struct name<Windows::Storage::Streams::FileInputStream>{ static constexpr auto & value{ L"Windows.Storage.Streams.FileInputStream" }; };
template <> struct name<Windows::Storage::Streams::FileOutputStream>{ static constexpr auto & value{ L"Windows.Storage.Streams.FileOutputStream" }; };
template <> struct name<Windows::Storage::Streams::FileRandomAccessStream>{ static constexpr auto & value{ L"Windows.Storage.Streams.FileRandomAccessStream" }; };
template <> struct name<Windows::Storage::Streams::InMemoryRandomAccessStream>{ static constexpr auto & value{ L"Windows.Storage.Streams.InMemoryRandomAccessStream" }; };
template <> struct name<Windows::Storage::Streams::InputStreamOverStream>{ static constexpr auto & value{ L"Windows.Storage.Streams.InputStreamOverStream" }; };
template <> struct name<Windows::Storage::Streams::OutputStreamOverStream>{ static constexpr auto & value{ L"Windows.Storage.Streams.OutputStreamOverStream" }; };
template <> struct name<Windows::Storage::Streams::RandomAccessStream>{ static constexpr auto & value{ L"Windows.Storage.Streams.RandomAccessStream" }; };
template <> struct name<Windows::Storage::Streams::RandomAccessStreamOverStream>{ static constexpr auto & value{ L"Windows.Storage.Streams.RandomAccessStreamOverStream" }; };
template <> struct name<Windows::Storage::Streams::RandomAccessStreamReference>{ static constexpr auto & value{ L"Windows.Storage.Streams.RandomAccessStreamReference" }; };
template <> struct name<Windows::Storage::Streams::ByteOrder>{ static constexpr auto & value{ L"Windows.Storage.Streams.ByteOrder" }; };
template <> struct name<Windows::Storage::Streams::FileOpenDisposition>{ static constexpr auto & value{ L"Windows.Storage.Streams.FileOpenDisposition" }; };
template <> struct name<Windows::Storage::Streams::InputStreamOptions>{ static constexpr auto & value{ L"Windows.Storage.Streams.InputStreamOptions" }; };
template <> struct name<Windows::Storage::Streams::UnicodeEncoding>{ static constexpr auto & value{ L"Windows.Storage.Streams.UnicodeEncoding" }; };
template <> struct guid_storage<Windows::Storage::Streams::IBuffer>{ static constexpr guid value{ 0x905A0FE0,0xBC53,0x11DF,{ 0x8C,0x49,0x00,0x1E,0x4F,0xC6,0x86,0xDA } }; };
template <> struct guid_storage<Windows::Storage::Streams::IBufferFactory>{ static constexpr guid value{ 0x71AF914D,0xC10F,0x484B,{ 0xBC,0x50,0x14,0xBC,0x62,0x3B,0x3A,0x27 } }; };
template <> struct guid_storage<Windows::Storage::Streams::IBufferStatics>{ static constexpr guid value{ 0xE901E65B,0xD716,0x475A,{ 0xA9,0x0A,0xAF,0x72,0x29,0xB1,0xE7,0x41 } }; };
template <> struct guid_storage<Windows::Storage::Streams::IContentTypeProvider>{ static constexpr guid value{ 0x97D098A5,0x3B99,0x4DE9,{ 0x88,0xA5,0xE1,0x1D,0x2F,0x50,0xC7,0x95 } }; };
template <> struct guid_storage<Windows::Storage::Streams::IDataReader>{ static constexpr guid value{ 0xE2B50029,0xB4C1,0x4314,{ 0xA4,0xB8,0xFB,0x81,0x3A,0x2F,0x27,0x5E } }; };
template <> struct guid_storage<Windows::Storage::Streams::IDataReaderFactory>{ static constexpr guid value{ 0xD7527847,0x57DA,0x4E15,{ 0x91,0x4C,0x06,0x80,0x66,0x99,0xA0,0x98 } }; };
template <> struct guid_storage<Windows::Storage::Streams::IDataReaderStatics>{ static constexpr guid value{ 0x11FCBFC8,0xF93A,0x471B,{ 0xB1,0x21,0xF3,0x79,0xE3,0x49,0x31,0x3C } }; };
template <> struct guid_storage<Windows::Storage::Streams::IDataWriter>{ static constexpr guid value{ 0x64B89265,0xD341,0x4922,{ 0xB3,0x8A,0xDD,0x4A,0xF8,0x80,0x8C,0x4E } }; };
template <> struct guid_storage<Windows::Storage::Streams::IDataWriterFactory>{ static constexpr guid value{ 0x338C67C2,0x8B84,0x4C2B,{ 0x9C,0x50,0x7B,0x87,0x67,0x84,0x7A,0x1F } }; };
template <> struct guid_storage<Windows::Storage::Streams::IFileRandomAccessStreamStatics>{ static constexpr guid value{ 0x73550107,0x3B57,0x4B5D,{ 0x83,0x45,0x55,0x4D,0x2F,0xC6,0x21,0xF0 } }; };
template <> struct guid_storage<Windows::Storage::Streams::IInputStream>{ static constexpr guid value{ 0x905A0FE2,0xBC53,0x11DF,{ 0x8C,0x49,0x00,0x1E,0x4F,0xC6,0x86,0xDA } }; };
template <> struct guid_storage<Windows::Storage::Streams::IInputStreamReference>{ static constexpr guid value{ 0x43929D18,0x5EC9,0x4B5A,{ 0x91,0x9C,0x42,0x05,0xB0,0xC8,0x04,0xB6 } }; };
template <> struct guid_storage<Windows::Storage::Streams::IOutputStream>{ static constexpr guid value{ 0x905A0FE6,0xBC53,0x11DF,{ 0x8C,0x49,0x00,0x1E,0x4F,0xC6,0x86,0xDA } }; };
template <> struct guid_storage<Windows::Storage::Streams::IRandomAccessStream>{ static constexpr guid value{ 0x905A0FE1,0xBC53,0x11DF,{ 0x8C,0x49,0x00,0x1E,0x4F,0xC6,0x86,0xDA } }; };
template <> struct guid_storage<Windows::Storage::Streams::IRandomAccessStreamReference>{ static constexpr guid value{ 0x33EE3134,0x1DD6,0x4E3A,{ 0x80,0x67,0xD1,0xC1,0x62,0xE8,0x64,0x2B } }; };
template <> struct guid_storage<Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>{ static constexpr guid value{ 0x857309DC,0x3FBF,0x4E7D,{ 0x98,0x6F,0xEF,0x3B,0x1A,0x07,0xA9,0x64 } }; };
template <> struct guid_storage<Windows::Storage::Streams::IRandomAccessStreamStatics>{ static constexpr guid value{ 0x524CEDCF,0x6E29,0x4CE5,{ 0x95,0x73,0x6B,0x75,0x3D,0xB6,0x6C,0x3A } }; };
template <> struct guid_storage<Windows::Storage::Streams::IRandomAccessStreamWithContentType>{ static constexpr guid value{ 0xCC254827,0x4B3D,0x438F,{ 0x92,0x32,0x10,0xC7,0x6B,0xC7,0xE0,0x38 } }; };
template <> struct default_interface<Windows::Storage::Streams::Buffer>{ using type = Windows::Storage::Streams::IBuffer; };
template <> struct default_interface<Windows::Storage::Streams::DataReader>{ using type = Windows::Storage::Streams::IDataReader; };
template <> struct default_interface<Windows::Storage::Streams::DataReaderLoadOperation>{ using type = Windows::Foundation::IAsyncOperation<uint32_t>; };
template <> struct default_interface<Windows::Storage::Streams::DataWriter>{ using type = Windows::Storage::Streams::IDataWriter; };
template <> struct default_interface<Windows::Storage::Streams::DataWriterStoreOperation>{ using type = Windows::Foundation::IAsyncOperation<uint32_t>; };
template <> struct default_interface<Windows::Storage::Streams::FileInputStream>{ using type = Windows::Storage::Streams::IInputStream; };
template <> struct default_interface<Windows::Storage::Streams::FileOutputStream>{ using type = Windows::Storage::Streams::IOutputStream; };
template <> struct default_interface<Windows::Storage::Streams::FileRandomAccessStream>{ using type = Windows::Storage::Streams::IRandomAccessStream; };
template <> struct default_interface<Windows::Storage::Streams::InMemoryRandomAccessStream>{ using type = Windows::Storage::Streams::IRandomAccessStream; };
template <> struct default_interface<Windows::Storage::Streams::InputStreamOverStream>{ using type = Windows::Storage::Streams::IInputStream; };
template <> struct default_interface<Windows::Storage::Streams::OutputStreamOverStream>{ using type = Windows::Storage::Streams::IOutputStream; };
template <> struct default_interface<Windows::Storage::Streams::RandomAccessStreamOverStream>{ using type = Windows::Storage::Streams::IRandomAccessStream; };
template <> struct default_interface<Windows::Storage::Streams::RandomAccessStreamReference>{ using type = Windows::Storage::Streams::IRandomAccessStreamReference; };
template <> struct abi<Windows::Storage::Streams::IBuffer>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Capacity(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Length(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Length(uint32_t value) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IBufferFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(uint32_t capacity, void** value) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IBufferStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateCopyFromMemoryBuffer(void* input, void** value) noexcept = 0;
    virtual int32_t WINRT_CALL CreateMemoryBufferOverIBuffer(void* input, void** value) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IContentTypeProvider>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ContentType(void** value) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IDataReader>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_UnconsumedBufferLength(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_UnicodeEncoding(Windows::Storage::Streams::UnicodeEncoding* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_UnicodeEncoding(Windows::Storage::Streams::UnicodeEncoding value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ByteOrder(Windows::Storage::Streams::ByteOrder* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_ByteOrder(Windows::Storage::Streams::ByteOrder value) noexcept = 0;
    virtual int32_t WINRT_CALL get_InputStreamOptions(Windows::Storage::Streams::InputStreamOptions* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_InputStreamOptions(Windows::Storage::Streams::InputStreamOptions value) noexcept = 0;
    virtual int32_t WINRT_CALL ReadByte(uint8_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL ReadBytes(uint32_t __valueSize, uint8_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL ReadBuffer(uint32_t length, void** buffer) noexcept = 0;
    virtual int32_t WINRT_CALL ReadBoolean(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL ReadGuid(winrt::guid* value) noexcept = 0;
    virtual int32_t WINRT_CALL ReadInt16(int16_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL ReadInt32(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL ReadInt64(int64_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL ReadUInt16(uint16_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL ReadUInt32(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL ReadUInt64(uint64_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL ReadSingle(float* value) noexcept = 0;
    virtual int32_t WINRT_CALL ReadDouble(double* value) noexcept = 0;
    virtual int32_t WINRT_CALL ReadString(uint32_t codeUnitCount, void** value) noexcept = 0;
    virtual int32_t WINRT_CALL ReadDateTime(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL ReadTimeSpan(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL LoadAsync(uint32_t count, void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL DetachBuffer(void** buffer) noexcept = 0;
    virtual int32_t WINRT_CALL DetachStream(void** stream) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IDataReaderFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateDataReader(void* inputStream, void** dataReader) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IDataReaderStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL FromBuffer(void* buffer, void** dataReader) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IDataWriter>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_UnstoredBufferLength(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_UnicodeEncoding(Windows::Storage::Streams::UnicodeEncoding* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_UnicodeEncoding(Windows::Storage::Streams::UnicodeEncoding value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ByteOrder(Windows::Storage::Streams::ByteOrder* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_ByteOrder(Windows::Storage::Streams::ByteOrder value) noexcept = 0;
    virtual int32_t WINRT_CALL WriteByte(uint8_t value) noexcept = 0;
    virtual int32_t WINRT_CALL WriteBytes(uint32_t __valueSize, uint8_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL WriteBuffer(void* buffer) noexcept = 0;
    virtual int32_t WINRT_CALL WriteBufferRange(void* buffer, uint32_t start, uint32_t count) noexcept = 0;
    virtual int32_t WINRT_CALL WriteBoolean(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL WriteGuid(winrt::guid value) noexcept = 0;
    virtual int32_t WINRT_CALL WriteInt16(int16_t value) noexcept = 0;
    virtual int32_t WINRT_CALL WriteInt32(int32_t value) noexcept = 0;
    virtual int32_t WINRT_CALL WriteInt64(int64_t value) noexcept = 0;
    virtual int32_t WINRT_CALL WriteUInt16(uint16_t value) noexcept = 0;
    virtual int32_t WINRT_CALL WriteUInt32(uint32_t value) noexcept = 0;
    virtual int32_t WINRT_CALL WriteUInt64(uint64_t value) noexcept = 0;
    virtual int32_t WINRT_CALL WriteSingle(float value) noexcept = 0;
    virtual int32_t WINRT_CALL WriteDouble(double value) noexcept = 0;
    virtual int32_t WINRT_CALL WriteDateTime(Windows::Foundation::DateTime value) noexcept = 0;
    virtual int32_t WINRT_CALL WriteTimeSpan(Windows::Foundation::TimeSpan value) noexcept = 0;
    virtual int32_t WINRT_CALL WriteString(void* value, uint32_t* codeUnitCount) noexcept = 0;
    virtual int32_t WINRT_CALL MeasureString(void* value, uint32_t* codeUnitCount) noexcept = 0;
    virtual int32_t WINRT_CALL StoreAsync(void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL FlushAsync(void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL DetachBuffer(void** buffer) noexcept = 0;
    virtual int32_t WINRT_CALL DetachStream(void** outputStream) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IDataWriterFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateDataWriter(void* outputStream, void** dataWriter) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IFileRandomAccessStreamStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL OpenAsync(void* filePath, Windows::Storage::FileAccessMode accessMode, void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL OpenWithOptionsAsync(void* filePath, Windows::Storage::FileAccessMode accessMode, Windows::Storage::StorageOpenOptions sharingOptions, Windows::Storage::Streams::FileOpenDisposition openDisposition, void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL OpenTransactedWriteAsync(void* filePath, void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL OpenTransactedWriteWithOptionsAsync(void* filePath, Windows::Storage::StorageOpenOptions openOptions, Windows::Storage::Streams::FileOpenDisposition openDisposition, void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL OpenForUserAsync(void* user, void* filePath, Windows::Storage::FileAccessMode accessMode, void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL OpenForUserWithOptionsAsync(void* user, void* filePath, Windows::Storage::FileAccessMode accessMode, Windows::Storage::StorageOpenOptions sharingOptions, Windows::Storage::Streams::FileOpenDisposition openDisposition, void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL OpenTransactedWriteForUserAsync(void* user, void* filePath, void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL OpenTransactedWriteForUserWithOptionsAsync(void* user, void* filePath, Windows::Storage::StorageOpenOptions openOptions, Windows::Storage::Streams::FileOpenDisposition openDisposition, void** operation) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IInputStream>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL ReadAsync(void* buffer, uint32_t count, Windows::Storage::Streams::InputStreamOptions options, void** operation) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IInputStreamReference>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL OpenSequentialReadAsync(void** operation) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IOutputStream>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL WriteAsync(void* buffer, void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL FlushAsync(void** operation) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IRandomAccessStream>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Size(uint64_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Size(uint64_t value) noexcept = 0;
    virtual int32_t WINRT_CALL GetInputStreamAt(uint64_t position, void** stream) noexcept = 0;
    virtual int32_t WINRT_CALL GetOutputStreamAt(uint64_t position, void** stream) noexcept = 0;
    virtual int32_t WINRT_CALL get_Position(uint64_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL Seek(uint64_t position) noexcept = 0;
    virtual int32_t WINRT_CALL CloneStream(void** stream) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanRead(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanWrite(bool* value) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IRandomAccessStreamReference>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL OpenReadAsync(void** operation) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateFromFile(void* file, void** streamReference) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromUri(void* uri, void** streamReference) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromStream(void* stream, void** streamReference) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IRandomAccessStreamStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CopyAsync(void* source, void* destination, void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL CopySizeAsync(void* source, void* destination, uint64_t bytesToCopy, void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL CopyAndCloseAsync(void* source, void* destination, void** operation) noexcept = 0;
};};
template <> struct abi<Windows::Storage::Streams::IRandomAccessStreamWithContentType>{ struct type : IInspectable
{
};};
template <typename D>
struct consume_Windows_Storage_Streams_IBuffer
{
    uint32_t Capacity() const;
    uint32_t Length() const;
    void Length(uint32_t value) const;
    auto data() const
    {
        uint8_t* data{};
        static_cast<D const&>(*this).template as<IBufferByteAccess>()->Buffer(&data);
        return data;
    }
};
template <> struct consume<Windows::Storage::Streams::IBuffer> { template <typename D> using type = consume_Windows_Storage_Streams_IBuffer<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IBufferFactory
{
    Windows::Storage::Streams::Buffer Create(uint32_t capacity) const;
};
template <> struct consume<Windows::Storage::Streams::IBufferFactory> { template <typename D> using type = consume_Windows_Storage_Streams_IBufferFactory<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IBufferStatics
{
    Windows::Storage::Streams::Buffer CreateCopyFromMemoryBuffer(Windows::Foundation::IMemoryBuffer const& input) const;
    Windows::Foundation::MemoryBuffer CreateMemoryBufferOverIBuffer(Windows::Storage::Streams::IBuffer const& input) const;
};
template <> struct consume<Windows::Storage::Streams::IBufferStatics> { template <typename D> using type = consume_Windows_Storage_Streams_IBufferStatics<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IContentTypeProvider
{
    hstring ContentType() const;
};
template <> struct consume<Windows::Storage::Streams::IContentTypeProvider> { template <typename D> using type = consume_Windows_Storage_Streams_IContentTypeProvider<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IDataReader
{
    uint32_t UnconsumedBufferLength() const;
    Windows::Storage::Streams::UnicodeEncoding UnicodeEncoding() const;
    void UnicodeEncoding(Windows::Storage::Streams::UnicodeEncoding const& value) const;
    Windows::Storage::Streams::ByteOrder ByteOrder() const;
    void ByteOrder(Windows::Storage::Streams::ByteOrder const& value) const;
    Windows::Storage::Streams::InputStreamOptions InputStreamOptions() const;
    void InputStreamOptions(Windows::Storage::Streams::InputStreamOptions const& value) const;
    uint8_t ReadByte() const;
    void ReadBytes(array_view<uint8_t> value) const;
    Windows::Storage::Streams::IBuffer ReadBuffer(uint32_t length) const;
    bool ReadBoolean() const;
    winrt::guid ReadGuid() const;
    int16_t ReadInt16() const;
    int32_t ReadInt32() const;
    int64_t ReadInt64() const;
    uint16_t ReadUInt16() const;
    uint32_t ReadUInt32() const;
    uint64_t ReadUInt64() const;
    float ReadSingle() const;
    double ReadDouble() const;
    hstring ReadString(uint32_t codeUnitCount) const;
    Windows::Foundation::DateTime ReadDateTime() const;
    Windows::Foundation::TimeSpan ReadTimeSpan() const;
    Windows::Storage::Streams::DataReaderLoadOperation LoadAsync(uint32_t count) const;
    Windows::Storage::Streams::IBuffer DetachBuffer() const;
    Windows::Storage::Streams::IInputStream DetachStream() const;
};
template <> struct consume<Windows::Storage::Streams::IDataReader> { template <typename D> using type = consume_Windows_Storage_Streams_IDataReader<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IDataReaderFactory
{
    Windows::Storage::Streams::DataReader CreateDataReader(Windows::Storage::Streams::IInputStream const& inputStream) const;
};
template <> struct consume<Windows::Storage::Streams::IDataReaderFactory> { template <typename D> using type = consume_Windows_Storage_Streams_IDataReaderFactory<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IDataReaderStatics
{
    Windows::Storage::Streams::DataReader FromBuffer(Windows::Storage::Streams::IBuffer const& buffer) const;
};
template <> struct consume<Windows::Storage::Streams::IDataReaderStatics> { template <typename D> using type = consume_Windows_Storage_Streams_IDataReaderStatics<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IDataWriter
{
    uint32_t UnstoredBufferLength() const;
    Windows::Storage::Streams::UnicodeEncoding UnicodeEncoding() const;
    void UnicodeEncoding(Windows::Storage::Streams::UnicodeEncoding const& value) const;
    Windows::Storage::Streams::ByteOrder ByteOrder() const;
    void ByteOrder(Windows::Storage::Streams::ByteOrder const& value) const;
    void WriteByte(uint8_t value) const;
    void WriteBytes(array_view<uint8_t const> value) const;
    void WriteBuffer(Windows::Storage::Streams::IBuffer const& buffer) const;
    void WriteBuffer(Windows::Storage::Streams::IBuffer const& buffer, uint32_t start, uint32_t count) const;
    void WriteBoolean(bool value) const;
    void WriteGuid(winrt::guid const& value) const;
    void WriteInt16(int16_t value) const;
    void WriteInt32(int32_t value) const;
    void WriteInt64(int64_t value) const;
    void WriteUInt16(uint16_t value) const;
    void WriteUInt32(uint32_t value) const;
    void WriteUInt64(uint64_t value) const;
    void WriteSingle(float value) const;
    void WriteDouble(double value) const;
    void WriteDateTime(Windows::Foundation::DateTime const& value) const;
    void WriteTimeSpan(Windows::Foundation::TimeSpan const& value) const;
    uint32_t WriteString(param::hstring const& value) const;
    uint32_t MeasureString(param::hstring const& value) const;
    Windows::Storage::Streams::DataWriterStoreOperation StoreAsync() const;
    Windows::Foundation::IAsyncOperation<bool> FlushAsync() const;
    Windows::Storage::Streams::IBuffer DetachBuffer() const;
    Windows::Storage::Streams::IOutputStream DetachStream() const;
};
template <> struct consume<Windows::Storage::Streams::IDataWriter> { template <typename D> using type = consume_Windows_Storage_Streams_IDataWriter<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IDataWriterFactory
{
    Windows::Storage::Streams::DataWriter CreateDataWriter(Windows::Storage::Streams::IOutputStream const& outputStream) const;
};
template <> struct consume<Windows::Storage::Streams::IDataWriterFactory> { template <typename D> using type = consume_Windows_Storage_Streams_IDataWriterFactory<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IFileRandomAccessStreamStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> OpenAsync(param::hstring const& filePath, Windows::Storage::FileAccessMode const& accessMode) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> OpenAsync(param::hstring const& filePath, Windows::Storage::FileAccessMode const& accessMode, Windows::Storage::StorageOpenOptions const& sharingOptions, Windows::Storage::Streams::FileOpenDisposition const& openDisposition) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction> OpenTransactedWriteAsync(param::hstring const& filePath) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction> OpenTransactedWriteAsync(param::hstring const& filePath, Windows::Storage::StorageOpenOptions const& openOptions, Windows::Storage::Streams::FileOpenDisposition const& openDisposition) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> OpenForUserAsync(Windows::System::User const& user, param::hstring const& filePath, Windows::Storage::FileAccessMode const& accessMode) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> OpenForUserAsync(Windows::System::User const& user, param::hstring const& filePath, Windows::Storage::FileAccessMode const& accessMode, Windows::Storage::StorageOpenOptions const& sharingOptions, Windows::Storage::Streams::FileOpenDisposition const& openDisposition) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction> OpenTransactedWriteForUserAsync(Windows::System::User const& user, param::hstring const& filePath) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction> OpenTransactedWriteForUserAsync(Windows::System::User const& user, param::hstring const& filePath, Windows::Storage::StorageOpenOptions const& openOptions, Windows::Storage::Streams::FileOpenDisposition const& openDisposition) const;
};
template <> struct consume<Windows::Storage::Streams::IFileRandomAccessStreamStatics> { template <typename D> using type = consume_Windows_Storage_Streams_IFileRandomAccessStreamStatics<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IInputStream
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint32_t> ReadAsync(Windows::Storage::Streams::IBuffer const& buffer, uint32_t count, Windows::Storage::Streams::InputStreamOptions const& options) const;
};
template <> struct consume<Windows::Storage::Streams::IInputStream> { template <typename D> using type = consume_Windows_Storage_Streams_IInputStream<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IInputStreamReference
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream> OpenSequentialReadAsync() const;
};
template <> struct consume<Windows::Storage::Streams::IInputStreamReference> { template <typename D> using type = consume_Windows_Storage_Streams_IInputStreamReference<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IOutputStream
{
    Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> WriteAsync(Windows::Storage::Streams::IBuffer const& buffer) const;
    Windows::Foundation::IAsyncOperation<bool> FlushAsync() const;
};
template <> struct consume<Windows::Storage::Streams::IOutputStream> { template <typename D> using type = consume_Windows_Storage_Streams_IOutputStream<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IRandomAccessStream
{
    uint64_t Size() const;
    void Size(uint64_t value) const;
    Windows::Storage::Streams::IInputStream GetInputStreamAt(uint64_t position) const;
    Windows::Storage::Streams::IOutputStream GetOutputStreamAt(uint64_t position) const;
    uint64_t Position() const;
    void Seek(uint64_t position) const;
    Windows::Storage::Streams::IRandomAccessStream CloneStream() const;
    bool CanRead() const;
    bool CanWrite() const;
};
template <> struct consume<Windows::Storage::Streams::IRandomAccessStream> { template <typename D> using type = consume_Windows_Storage_Streams_IRandomAccessStream<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IRandomAccessStreamReference
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> OpenReadAsync() const;
};
template <> struct consume<Windows::Storage::Streams::IRandomAccessStreamReference> { template <typename D> using type = consume_Windows_Storage_Streams_IRandomAccessStreamReference<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics
{
    Windows::Storage::Streams::RandomAccessStreamReference CreateFromFile(Windows::Storage::IStorageFile const& file) const;
    Windows::Storage::Streams::RandomAccessStreamReference CreateFromUri(Windows::Foundation::Uri const& uri) const;
    Windows::Storage::Streams::RandomAccessStreamReference CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream) const;
};
template <> struct consume<Windows::Storage::Streams::IRandomAccessStreamReferenceStatics> { template <typename D> using type = consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IRandomAccessStreamStatics
{
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> CopyAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination) const;
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> CopyAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination, uint64_t bytesToCopy) const;
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> CopyAndCloseAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination) const;
};
template <> struct consume<Windows::Storage::Streams::IRandomAccessStreamStatics> { template <typename D> using type = consume_Windows_Storage_Streams_IRandomAccessStreamStatics<D>; };
template <typename D>
struct consume_Windows_Storage_Streams_IRandomAccessStreamWithContentType
{
};
template <> struct consume<Windows::Storage::Streams::IRandomAccessStreamWithContentType> { template <typename D> using type = consume_Windows_Storage_Streams_IRandomAccessStreamWithContentType<D>; };
}
