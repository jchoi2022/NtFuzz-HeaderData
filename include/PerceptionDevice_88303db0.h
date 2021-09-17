       
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
EXTERN_C
HRESULT
WINAPI
PerceptionDeviceCreateFactory(
    _In_ REFIID riid,
    _Outptr_ LPVOID* ppFactory);
#include <PerceptionDeviceCore.h>
#include <unknwn.h>
enum class PerceptionDeviceOptions
{
    None = 0x0,
    Privileged = 0x1,
};
DEFINE_ENUM_FLAG_OPERATORS( PerceptionDeviceOptions );
struct IPerceptionDevice;
struct IPerceptionDeviceObjectSubscription;
struct IPerceptionDeviceStateStream;
struct IPerceptionDeviceStateStreamReader;
struct IPerceptionDevicePropertyListener;
struct IPerceptionDeviceRootObjectWatcher;
MIDL_INTERFACE("{81A9D645-1D04-4778-8AF0-83FA08A9D9B7}")
IPerceptionDevicePropertyChangedEventArgs : public IUnknown
{
    STDMETHOD_(UINT, GetValueSize)() = 0;
    STDMETHOD_(const void*, GetValue)() = 0;
    STDMETHOD_(const LUID&, GetChangeId)() = 0;
};
MIDL_INTERFACE("{93D35D5F-B33F-42F3-9795-3973C6D919AE}")
IPerceptionDevicePropertyChangedHandler : public IUnknown
{
    STDMETHOD(Invoke)(
        _In_ IPerceptionDevicePropertyListener* sender,
        _In_ IPerceptionDevicePropertyChangedEventArgs* eventArgs) = 0;
};
MIDL_INTERFACE("{0E2FAE1E-C75C-4530-91B9-8F264540F8CC}")
IPerceptionDevicePropertyListener : public IUnknown
{
    STDMETHOD(SetPropertyChangedHandler)(
        _In_ IPerceptionDevicePropertyChangedHandler* handler) = 0;
    STDMETHOD(Start)() = 0;
    STDMETHOD(Stop)() = 0;
    STDMETHOD_(__success(true) void, GetDevice)(
        _COM_Outptr_ IPerceptionDevice** device) = 0;
    STDMETHOD_(REFGUID, GetObjectId)() = 0;
    STDMETHOD_(REFGUID, GetPropertyId)() = 0;
};
MIDL_INTERFACE("{C8F21EB1-9411-4516-A8A1-B778CF767287}")
IPerceptionDevice : public IUnknown
{
    STDMETHOD(ReadProperty)(
        REFGUID objectId,
        REFGUID propertyId,
        UINT valueSize,
        _Out_writes_bytes_all_(valueSize) void* value,
        _Out_opt_ LUID* changeId) = 0;
    STDMETHOD(ReadVariableSizeProperty)(
        REFGUID objectId,
        REFGUID propertyId,
        _Out_ UINT* valueSize,
        _Outptr_result_bytebuffer_all_maybenull_(*valueSize) void** value,
        _Out_opt_ LUID* changeId) = 0;
    STDMETHOD(CreatePropertyListener)(
        REFGUID objectId,
        REFGUID propertyId,
        _COM_Outptr_ IPerceptionDevicePropertyListener** listener) = 0;
    STDMETHOD(SendCommand)(
        REFGUID objectId,
        REFGUID commandId,
        UINT inBufferSize,
        _In_reads_bytes_opt_(inBufferSize) const void* inBuffer,
        UINT outBufferSize,
        _Out_writes_bytes_all_opt_(outBufferSize) void* outBuffer) = 0;
    STDMETHOD(SendCommandWithVariableSizeOutput)(
        REFGUID objectId,
        REFGUID commandId,
        UINT inBufferSize,
        _In_reads_bytes_opt_(inBufferSize) const void* inBuffer,
        _Out_opt_ UINT* outBufferSize,
        _Outptr_opt_result_bytebuffer_all_maybenull_(*outBufferSize) void** outBuffer) = 0;
    STDMETHOD_(_Ret_z_ LPCWSTR, GetDeviceInterfacePath)() = 0;
    STDMETHOD_(PerceptionDeviceOptions, GetOptions)() = 0;
    STDMETHOD_(REFGUID, GetLifetimeId)() = 0;
    STDMETHOD(CreateStateStream)(
        REFGUID stateStreamObjectId,
        _COM_Outptr_ IPerceptionDeviceStateStream** stateStream) = 0;
    STDMETHOD(CreateObjectSubscription)(
        REFGUID objectId,
        UINT subscriptionFlags,
        _COM_Outptr_ IPerceptionDeviceObjectSubscription** subscription) = 0;
};
MIDL_INTERFACE("{B6B43FBF-92D3-4467-8FFF-553EA84ED9BA}")
IPerceptionDeviceRootObjectAddedEventArgs : public IUnknown
{
    STDMETHOD_(__success(true) void, GetDevice)(_COM_Outptr_ IPerceptionDevice** device) = 0;
    STDMETHOD_(REFGUID, GetPropertyId)() = 0;
    STDMETHOD_(REFGUID, GetObjectId)() = 0;
};
MIDL_INTERFACE("{0E69DBE3-CBA4-4677-98F8-E26EFC983632}")
IPerceptionDeviceRootObjectAddedHandler : public IUnknown
{
    STDMETHOD(Invoke)(
        _In_ IPerceptionDeviceRootObjectWatcher* sender,
        _In_ IPerceptionDeviceRootObjectAddedEventArgs* args) = 0;
};
MIDL_INTERFACE("{CB9C24BC-2778-4A5C-B7EF-91D34025BF6A}")
IPerceptionDeviceRootObjectRemovedEventArgs : public IUnknown
{
    STDMETHOD_(__success(true) void, GetDevice)(_COM_Outptr_ IPerceptionDevice** device) = 0;
    STDMETHOD_(REFGUID, GetPropertyId)() = 0;
    STDMETHOD_(REFGUID, GetObjectId)() = 0;
};
MIDL_INTERFACE("{F720BF56-3D90-4421-B1EF-4F8F5EDC7A07}")
IPerceptionDeviceRootObjectRemovedHandler : public IUnknown
{
    STDMETHOD(Invoke)(
        _In_ IPerceptionDeviceRootObjectWatcher* sender,
        _In_ IPerceptionDeviceRootObjectRemovedEventArgs* args) = 0;
};
MIDL_INTERFACE("{2F22B1BD-7431-4452-92D6-D31557570F33}")
IPerceptionDeviceRootObjectWatcher : public IUnknown
{
    STDMETHOD(SetAddedHandler)(
        _In_ IPerceptionDeviceRootObjectAddedHandler* handler) = 0;
    STDMETHOD(SetRemovedHandler)(
        _In_ IPerceptionDeviceRootObjectRemovedHandler* handler) = 0;
    STDMETHOD(Start)() = 0;
    STDMETHOD(Stop)() = 0;
};
MIDL_INTERFACE("{5FB106F4-A5C7-43C8-A723-232B4456DC6C}")
IPerceptionDevicePayloadDescriptor : public IUnknown
{
    STDMETHOD_(UINT, GetPayloadSizeInBytes)() = 0;
    STDMETHOD_(_Ret_maybenull_ const PERCEPTION_PAYLOAD_FIELD*, FindFieldById)(
        REFGUID fieldId) = 0;
};
MIDL_INTERFACE("{C2FB5866-1C71-4B74-89E1-EA13F2709B11}")
IPerceptionDeviceStateStream : public IUnknown
{
    STDMETHOD_(__success(true) void, GetPayloadDescriptor)(
        _COM_Outptr_ IPerceptionDevicePayloadDescriptor** descriptor) = 0;
    STDMETHOD(CreateReader)(
        UINT subscriptionFlags,
        _COM_Outptr_ IPerceptionDeviceStateStreamReader** reader) = 0;
};
MIDL_INTERFACE("{3B84AAB1-D2BE-4D26-B285-E21CDE1DE058}")
IPerceptionDeviceStateStreamReader : public IUnknown
{
    STDMETHOD(ReadStatesAfterTime)(
        LONGLONG timestampInQpcTicks,
        UINT bufferSize,
        _Out_writes_bytes_to_(bufferSize, *numBytesRead) void* buffer,
        _Out_ UINT* numBytesRead) = 0;
    STDMETHOD(ReadStatesAroundTime)(
        LONGLONG timestampInQpcTicks,
        UINT bufferSize,
        _Out_writes_bytes_to_(bufferSize, *numBytesRead) void* buffer,
        _Out_ UINT* numBytesRead) = 0;
};
MIDL_INTERFACE("{9801651F-E62B-4E19-979F-4B8C5ADB80E6}")
IPerceptionDeviceObjectSubscription : public IUnknown
{
    STDMETHOD_(__success(true) void, GetDevice)(_COM_Outptr_ IPerceptionDevice** device) = 0;
    STDMETHOD_(REFGUID, GetObjectId)() = 0;
    STDMETHOD_(UINT, GetSubscriptionFlags)() = 0;
};
MIDL_INTERFACE("{33D7A5EC-A087-4C8B-8167-67C0D6016FDB}")
IPerceptionDeviceFactory : public IUnknown
{
    STDMETHOD(OpenDevice)(
        _In_z_ LPCWSTR deviceInterfacePath,
        PerceptionDeviceOptions options,
        _COM_Outptr_ IPerceptionDevice** device) = 0;
    STDMETHOD(CreatePayloadDescriptor)(
        UINT size,
        _In_bytecount_(size) const void* data,
        _COM_Outptr_ IPerceptionDevicePayloadDescriptor** descriptor) = 0;
    STDMETHOD(CreateRootObjectWatcher)(
        UINT propertyIdCount,
        _In_reads_(propertyIdCount) const GUID* propertyIds,
        PerceptionDeviceOptions deviceOptions,
        _COM_Outptr_ IPerceptionDeviceRootObjectWatcher** ppWatcher) = 0;
};
#endif
