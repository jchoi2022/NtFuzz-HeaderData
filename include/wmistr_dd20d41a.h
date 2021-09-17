       
#pragma warning(disable: 4200)
#pragma warning(disable: 4201)
typedef struct _WNODE_HEADER
{
    ULONG BufferSize;
    ULONG ProviderId;
    union
    {
        ULONG64 HistoricalContext;
        struct
            {
            ULONG Version;
            ULONG Linkage;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
    union
    {
        ULONG CountLost;
        HANDLE KernelHandle;
        LARGE_INTEGER TimeStamp;
    } DUMMYUNIONNAME2;
    GUID Guid;
    ULONG ClientContext;
    ULONG Flags;
} WNODE_HEADER, *PWNODE_HEADER;
typedef struct
{
    ULONG OffsetInstanceData;
    ULONG LengthInstanceData;
} OFFSETINSTANCEDATAANDLENGTH, *POFFSETINSTANCEDATAANDLENGTH;
typedef struct tagWNODE_ALL_DATA
{
    struct _WNODE_HEADER WnodeHeader;
    ULONG DataBlockOffset;
    ULONG InstanceCount;
    ULONG OffsetInstanceNameOffsets;
    union
    {
        ULONG FixedInstanceSize;
        OFFSETINSTANCEDATAANDLENGTH OffsetInstanceDataAndLength[];
    } DUMMYUNIONNAME;
} WNODE_ALL_DATA, *PWNODE_ALL_DATA;
typedef struct tagWNODE_SINGLE_INSTANCE
{
    struct _WNODE_HEADER WnodeHeader;
    ULONG OffsetInstanceName;
    ULONG InstanceIndex;
    ULONG DataBlockOffset;
    ULONG SizeDataBlock;
    UCHAR VariableData[];
} WNODE_SINGLE_INSTANCE, *PWNODE_SINGLE_INSTANCE;
typedef struct tagWNODE_SINGLE_ITEM
{
    struct _WNODE_HEADER WnodeHeader;
    ULONG OffsetInstanceName;
    ULONG InstanceIndex;
    ULONG ItemId;
    ULONG DataBlockOffset;
    ULONG SizeDataItem;
    UCHAR VariableData[];
} WNODE_SINGLE_ITEM, *PWNODE_SINGLE_ITEM;
typedef struct tagWNODE_METHOD_ITEM
{
    struct _WNODE_HEADER WnodeHeader;
    ULONG OffsetInstanceName;
    ULONG InstanceIndex;
    ULONG MethodId;
    ULONG DataBlockOffset;
    ULONG SizeDataBlock;
    UCHAR VariableData[];
} WNODE_METHOD_ITEM, *PWNODE_METHOD_ITEM;
typedef struct tagWNODE_EVENT_ITEM
{
    struct _WNODE_HEADER WnodeHeader;
} WNODE_EVENT_ITEM, *PWNODE_EVENT_ITEM;
typedef struct tagWNODE_EVENT_REFERENCE
{
    struct _WNODE_HEADER WnodeHeader;
    GUID TargetGuid;
    ULONG TargetDataBlockSize;
    union
    {
        ULONG TargetInstanceIndex;
        WCHAR TargetInstanceName[];
    } DUMMYUNIONNAME;
} WNODE_EVENT_REFERENCE, *PWNODE_EVENT_REFERENCE;
typedef struct tagWNODE_TOO_SMALL
{
    struct _WNODE_HEADER WnodeHeader;
    ULONG SizeNeeded;
} WNODE_TOO_SMALL, *PWNODE_TOO_SMALL;
typedef struct
{
    GUID Guid;
    ULONG Flags;
    ULONG InstanceCount;
    union
    {
        ULONG InstanceNameList;
        ULONG BaseNameOffset;
        ULONG_PTR Pdo;
        ULONG_PTR InstanceInfo;
    } DUMMYUNIONNAME;
} WMIREGGUIDW, *PWMIREGGUIDW;
typedef WMIREGGUIDW WMIREGGUID;
typedef PWMIREGGUIDW PWMIREGGUID;
typedef struct
{
    ULONG BufferSize;
    ULONG NextWmiRegInfo;
    ULONG RegistryPath;
    ULONG MofResourceName;
    ULONG GuidCount;
    WMIREGGUIDW WmiRegGuid[];
} WMIREGINFOW, *PWMIREGINFOW;
typedef WMIREGINFOW WMIREGINFO;
typedef PWMIREGINFOW PWMIREGINFO;
typedef enum
{
    WMI_GET_ALL_DATA = 0,
    WMI_GET_SINGLE_INSTANCE = 1,
    WMI_SET_SINGLE_INSTANCE = 2,
    WMI_SET_SINGLE_ITEM = 3,
    WMI_ENABLE_EVENTS = 4,
    WMI_DISABLE_EVENTS = 5,
    WMI_ENABLE_COLLECTION = 6,
    WMI_DISABLE_COLLECTION = 7,
    WMI_REGINFO = 8,
    WMI_EXECUTE_METHOD = 9,
    WMI_CAPTURE_STATE = 10
} WMIDPREQUESTCODE;
#pragma warning(default: 4200)
#pragma warning(default: 4201)
