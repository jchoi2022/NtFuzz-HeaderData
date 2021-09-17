#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
        #define DEFINE_GUIDEX(name) EXTERN_C const CDECL GUID name
        #define STATICGUIDOF(guid) STATIC_##guid
    #define SIZEOF_ARRAY(ar) (sizeof(ar)/sizeof((ar)[0]))
    0x00000000L, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#pragma prefast(suppress: 6244, "duplicate definition is harmless in this case")
DEFINE_GUIDSTRUCT("00000000-0000-0000-0000-000000000000", GUID_NULL);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum {
    KSRESET_BEGIN,
    KSRESET_END
} KSRESET;
typedef enum {
    KSSTATE_STOP,
    KSSTATE_ACQUIRE,
    KSSTATE_PAUSE,
    KSSTATE_RUN
} KSSTATE, *PKSSTATE;
typedef struct {
    ULONG PriorityClass;
    ULONG PrioritySubClass;
} KSPRIORITY, *PKSPRIORITY;
typedef struct {
    union {
        struct {
            GUID Set;
            ULONG Id;
            ULONG Flags;
        };
        LONGLONG Alignment;
    };
} KSIDENTIFIER, *PKSIDENTIFIER;
typedef KSIDENTIFIER KSPROPERTY, *PKSPROPERTY, KSMETHOD, *PKSMETHOD, KSEVENT, *PKSEVENT;
typedef struct {
    KSPROPERTY Property;
    ULONG NodeId;
    ULONG Reserved;
} KSP_NODE, *PKSP_NODE;
typedef struct {
    KSMETHOD Method;
    ULONG NodeId;
    ULONG Reserved;
} KSM_NODE, *PKSM_NODE;
typedef struct {
    KSEVENT Event;
    ULONG NodeId;
    ULONG Reserved;
} KSE_NODE, *PKSE_NODE;
    0x97E99BA0L, 0xBDEA, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("97E99BA0-BDEA-11CF-A5D6-28DB04C10000", KSPROPTYPESETID_General);
typedef struct {
    ULONG Size;
    ULONG Count;
} KSMULTIPLE_ITEM, *PKSMULTIPLE_ITEM;
typedef struct {
    ULONG AccessFlags;
    ULONG DescriptionSize;
    KSIDENTIFIER PropTypeSet;
    ULONG MembersListCount;
    ULONG Reserved;
} KSPROPERTY_DESCRIPTION, *PKSPROPERTY_DESCRIPTION;
typedef struct {
    ULONG MembersFlags;
    ULONG MembersSize;
    ULONG MembersCount;
    ULONG Flags;
} KSPROPERTY_MEMBERSHEADER, *PKSPROPERTY_MEMBERSHEADER;
typedef union {
    struct {
        LONG SignedMinimum;
        LONG SignedMaximum;
    };
    struct {
        ULONG UnsignedMinimum;
        ULONG UnsignedMaximum;
    };
} KSPROPERTY_BOUNDS_LONG, *PKSPROPERTY_BOUNDS_LONG;
typedef union {
    struct {
        LONGLONG SignedMinimum;
        LONGLONG SignedMaximum;
    };
    struct {
        DWORDLONG UnsignedMinimum;
        DWORDLONG UnsignedMaximum;
    };
} KSPROPERTY_BOUNDS_LONGLONG, *PKSPROPERTY_BOUNDS_LONGLONG;
typedef struct {
    ULONG SteppingDelta;
    ULONG Reserved;
    KSPROPERTY_BOUNDS_LONG Bounds;
} KSPROPERTY_STEPPING_LONG, *PKSPROPERTY_STEPPING_LONG;
typedef struct {
    DWORDLONG SteppingDelta;
    KSPROPERTY_BOUNDS_LONGLONG Bounds;
} KSPROPERTY_STEPPING_LONGLONG, *PKSPROPERTY_STEPPING_LONGLONG;
typedef PVOID PKSWORKER;
typedef struct {
    ULONG NotificationType;
    union {
        struct {
            HANDLE Event;
            ULONG_PTR Reserved[2];
        } EventHandle;
        struct {
            HANDLE Semaphore;
            ULONG Reserved;
            LONG Adjustment;
        } SemaphoreHandle;
        struct {
            PVOID Unused;
            LONG_PTR Alignment[2];
        } Alignment;
    };
} KSEVENTDATA, *PKSEVENTDATA;
typedef struct {
    KSEVENT Event;
    PKSEVENTDATA EventData;
    PVOID Reserved;
} KSQUERYBUFFER, *PKSQUERYBUFFER;
typedef struct {
    ULONG Size;
    ULONG Flags;
    union {
        HANDLE ObjectHandle;
        PVOID ObjectPointer;
    };
    PVOID Reserved;
    KSEVENT Event;
    KSEVENTDATA EventData;
} KSRELATIVEEVENT;
typedef struct {
    KSEVENTDATA EventData;
    LONGLONG MarkTime;
} KSEVENT_TIME_MARK, *PKSEVENT_TIME_MARK;
typedef struct {
    KSEVENTDATA EventData;
    LONGLONG TimeBase;
    LONGLONG Interval;
} KSEVENT_TIME_INTERVAL, *PKSEVENT_TIME_INTERVAL;
typedef struct {
    LONGLONG TimeBase;
    LONGLONG Interval;
} KSINTERVAL, *PKSINTERVAL;
    0x1464EDA5L, 0x6A8F, 0x11D1, 0x9A, 0xA7, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("1464EDA5-6A8F-11D1-9AA7-00A0C9223196", KSPROPSETID_General);
typedef enum {
    KSPROPERTY_GENERAL_COMPONENTID
} KSPROPERTY_GENERAL;
typedef struct {
    GUID Manufacturer;
    GUID Product;
    GUID Component;
    GUID Name;
    ULONG Version;
    ULONG Revision;
} KSCOMPONENTID, *PKSCOMPONENTID;
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_GENERAL_COMPONENTID,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSCOMPONENTID),\
        NULL, NULL, 0, NULL, NULL, 0)
    0x65D003CAL, 0x1523, 0x11D2, 0xB2, 0x7A, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("65D003CA-1523-11D2-B27A-00A0C9223196", KSMETHODSETID_StreamIo);
typedef enum {
    KSMETHOD_STREAMIO_READ,
    KSMETHOD_STREAMIO_WRITE
} KSMETHOD_STREAMIO;
    DEFINE_KSMETHOD_ITEM(\
        KSMETHOD_STREAMIO_READ,\
        KSMETHOD_TYPE_WRITE,\
        (Handler),\
        sizeof(KSMETHOD),\
        0,\
        NULL)
    DEFINE_KSMETHOD_ITEM(\
        KSMETHOD_STREAMIO_WRITE,\
        KSMETHOD_TYPE_READ,\
        (Handler),\
        sizeof(KSMETHOD),\
        0,\
        NULL)
    0xEE904F0CL, 0xD09B, 0x11D0, 0xAB, 0xE9, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("EE904F0C-D09B-11D0-ABE9-00A0C9223196", KSPROPSETID_MediaSeeking);
typedef enum {
    KSPROPERTY_MEDIASEEKING_CAPABILITIES,
    KSPROPERTY_MEDIASEEKING_FORMATS,
    KSPROPERTY_MEDIASEEKING_TIMEFORMAT,
    KSPROPERTY_MEDIASEEKING_POSITION,
    KSPROPERTY_MEDIASEEKING_STOPPOSITION,
    KSPROPERTY_MEDIASEEKING_POSITIONS,
    KSPROPERTY_MEDIASEEKING_DURATION,
    KSPROPERTY_MEDIASEEKING_AVAILABLE,
    KSPROPERTY_MEDIASEEKING_PREROLL,
    KSPROPERTY_MEDIASEEKING_CONVERTTIMEFORMAT
} KSPROPERTY_MEDIASEEKING;
typedef enum {
    KS_SEEKING_NoPositioning,
    KS_SEEKING_AbsolutePositioning,
    KS_SEEKING_RelativePositioning,
    KS_SEEKING_IncrementalPositioning,
    KS_SEEKING_PositioningBitsMask = 0x3,
    KS_SEEKING_SeekToKeyFrame,
    KS_SEEKING_ReturnTime = 0x8
} KS_SEEKING_FLAGS;
typedef enum {
    KS_SEEKING_CanSeekAbsolute = 0x1,
    KS_SEEKING_CanSeekForwards = 0x2,
    KS_SEEKING_CanSeekBackwards = 0x4,
    KS_SEEKING_CanGetCurrentPos = 0x8,
    KS_SEEKING_CanGetStopPos = 0x10,
    KS_SEEKING_CanGetDuration = 0x20,
    KS_SEEKING_CanPlayBackwards = 0x40
} KS_SEEKING_CAPABILITIES;
typedef struct {
    LONGLONG Current;
    LONGLONG Stop;
    KS_SEEKING_FLAGS CurrentFlags;
    KS_SEEKING_FLAGS StopFlags;
} KSPROPERTY_POSITIONS, *PKSPROPERTY_POSITIONS;
typedef struct {
    LONGLONG Earliest;
    LONGLONG Latest;
} KSPROPERTY_MEDIAAVAILABLE, *PKSPROPERTY_MEDIAAVAILABLE;
typedef struct {
    KSPROPERTY Property;
    GUID SourceFormat;
    GUID TargetFormat;
    LONGLONG Time;
} KSP_TIMEFORMAT, *PKSP_TIMEFORMAT;
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_CAPABILITIES,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KS_SEEKING_CAPABILITIES),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_FORMATS,\
        (Handler),\
        sizeof(KSPROPERTY),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_TIMEFORMAT,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(GUID),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_POSITION,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(LONGLONG),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_STOPPOSITION,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(LONGLONG),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_POSITIONS,\
        NULL,\
        sizeof(KSPROPERTY),\
        sizeof(KSPROPERTY_POSITIONS),\
        (Handler),\
        NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_DURATION,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(LONGLONG),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_AVAILABLE,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSPROPERTY_MEDIAAVAILABLE),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_PREROLL,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(LONGLONG),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_CONVERTTIMEFORMAT,\
        (Handler),\
        sizeof(KSP_TIMEFORMAT),\
        sizeof(LONGLONG),\
        NULL, NULL, 0, NULL, NULL, 0)
    0x720D4AC0L, 0x7533, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("720D4AC0-7533-11D0-A5D6-28DB04C10000", KSPROPSETID_Topology);
typedef enum {
    KSPROPERTY_TOPOLOGY_CATEGORIES,
    KSPROPERTY_TOPOLOGY_NODES,
    KSPROPERTY_TOPOLOGY_CONNECTIONS,
    KSPROPERTY_TOPOLOGY_NAME
} KSPROPERTY_TOPOLOGY;
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_TOPOLOGY_CATEGORIES,\
        (Handler),\
        sizeof(KSPROPERTY),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_TOPOLOGY_NODES,\
        (Handler),\
        sizeof(KSPROPERTY),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_TOPOLOGY_CONNECTIONS,\
        (Handler),\
        sizeof(KSPROPERTY),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_TOPOLOGY_NAME,\
        (Handler),\
        sizeof(KSP_NODE),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)
DEFINE_KSPROPERTY_TABLE(TopologySet) {\
    DEFINE_KSPROPERTY_ITEM_TOPOLOGY_CATEGORIES(Handler),\
    DEFINE_KSPROPERTY_ITEM_TOPOLOGY_NODES(Handler),\
    DEFINE_KSPROPERTY_ITEM_TOPOLOGY_CONNECTIONS(Handler),\
    DEFINE_KSPROPERTY_ITEM_TOPOLOGY_NAME(Handler)\
}
    0x085AFF00L, 0x62CE, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("085AFF00-62CE-11CF-A5D6-28DB04C10000", KSCATEGORY_BRIDGE);
    0x65E8773DL, 0x8F56, 0x11D0, 0xA3, 0xB9, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("65E8773D-8F56-11D0-A3B9-00A0C9223196", KSCATEGORY_CAPTURE);
    0xe5323777, 0xf976, 0x4f5b, 0x9b, 0x55, 0xb9, 0x46, 0x99, 0xc4, 0x6e, 0x44
DEFINE_GUIDSTRUCT("E5323777-F976-4f5b-9B55-B94699C46E44", KSCATEGORY_VIDEO_CAMERA);
    0x24e552d7, 0x6523, 0x47f7, 0xa6, 0x47, 0xd3, 0x46, 0x5b, 0xf1, 0xf5, 0xca
DEFINE_GUIDSTRUCT("24E552D7-6523-47F7-A647-D3465BF1F5CA", KSCATEGORY_SENSOR_CAMERA);
    0xb8238652, 0xb500, 0x41eb, 0xb4, 0xf3, 0x42, 0x34, 0xf7, 0xf5, 0xae, 0x99
DEFINE_GUIDSTRUCT("B8238652-B500-41EB-B4F3-4234F7F5AE99", KSCATEGORY_NETWORK_CAMERA);
    0x669C7214, 0x0A88, 0x4311, 0xA7, 0xF3, 0x4E, 0x79, 0x82, 0x0E, 0x33, 0xBD
DEFINE_GUIDSTRUCT("669C7214-0A88-4311-A7F3-4E79820E33BD", KSCATEGORY_SENSOR_GROUP);
    0x65E8773EL, 0x8F56, 0x11D0, 0xA3, 0xB9, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("65E8773E-8F56-11D0-A3B9-00A0C9223196", KSCATEGORY_RENDER);
    0xAD809C00L, 0x7B88, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("AD809C00-7B88-11D0-A5D6-28DB04C10000", KSCATEGORY_MIXER);
    0x0A4252A0L, 0x7E70, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("0A4252A0-7E70-11D0-A5D6-28DB04C10000", KSCATEGORY_SPLITTER);
    0x1E84C900L, 0x7E70, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("1E84C900-7E70-11D0-A5D6-28DB04C10000", KSCATEGORY_DATACOMPRESSOR);
    0x2721AE20L, 0x7E70, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("2721AE20-7E70-11D0-A5D6-28DB04C10000", KSCATEGORY_DATADECOMPRESSOR);
    0x2EB07EA0L, 0x7E70, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("2EB07EA0-7E70-11D0-A5D6-28DB04C10000", KSCATEGORY_DATATRANSFORM);
 0xd6c02d4b, 0x6833, 0x45b4, 0x97, 0x1a, 0x05, 0xa4, 0xb0, 0x4b, 0xab, 0x91
DEFINE_GUIDSTRUCT("d6c02d4b-6833-45b4-971a-05a4b04bab91", KSMFT_CATEGORY_VIDEO_DECODER);
 0xf79eac7d, 0xe545, 0x4387, 0xbd, 0xee, 0xd6, 0x47, 0xd7, 0xbd, 0xe4, 0x2a
DEFINE_GUIDSTRUCT("f79eac7d-e545-4387-bdee-d647d7bde42a", KSMFT_CATEGORY_VIDEO_ENCODER);
 0x12e17c21, 0x532c, 0x4a6e, 0x8a, 0x1c, 0x40, 0x82, 0x5a, 0x73, 0x63, 0x97
DEFINE_GUIDSTRUCT("12e17c21-532c-4a6e-8a1c-40825a736397", KSMFT_CATEGORY_VIDEO_EFFECT);
 0x059c561e, 0x05ae, 0x4b61, 0xb6, 0x9d, 0x55, 0xb6, 0x1e, 0xe5, 0x4a, 0x7b
DEFINE_GUIDSTRUCT("059c561e-05ae-4b61-b69d-55b61ee54a7b", KSMFT_CATEGORY_MULTIPLEXER);
 0xa8700a7a, 0x939b, 0x44c5, 0x99, 0xd7, 0x76, 0x22, 0x6b, 0x23, 0xb3, 0xf1
DEFINE_GUIDSTRUCT("a8700a7a-939b-44c5-99d7-76226b23b3f1", KSMFT_CATEGORY_DEMULTIPLEXER);
 0x9ea73fb4, 0xef7a, 0x4559, 0x8d, 0x5d, 0x71, 0x9d, 0x8f, 0x04, 0x26, 0xc7
DEFINE_GUIDSTRUCT("9ea73fb4-ef7a-4559-8d5d-719d8f0426c7", KSMFT_CATEGORY_AUDIO_DECODER);
 0x91c64bd0, 0xf91e, 0x4d8c, 0x92, 0x76, 0xdb, 0x24, 0x82, 0x79, 0xd9, 0x75
DEFINE_GUIDSTRUCT("91c64bd0-f91e-4d8c-9276-db248279d975", KSMFT_CATEGORY_AUDIO_ENCODER);
 0x11064c48, 0x3648, 0x4ed0, 0x93, 0x2e, 0x05, 0xce, 0x8a, 0xc8, 0x11, 0xb7
DEFINE_GUIDSTRUCT("11064c48-3648-4ed0-932e-05ce8ac811b7", KSMFT_CATEGORY_AUDIO_EFFECT);
 0x302ea3fc, 0xaa5f, 0x47f9, 0x9f, 0x7a, 0xc2, 0x18, 0x8b, 0xb1, 0x63, 0x2
DEFINE_GUIDSTRUCT("302ea3fc-aa5f-47f9-9f7a-c2188bb16302", KSMFT_CATEGORY_VIDEO_PROCESSOR);
 0x90175d57, 0xb7ea, 0x4901, 0xae, 0xb3, 0x93, 0x3a, 0x87, 0x47, 0x75, 0x6f
DEFINE_GUIDSTRUCT("90175d57-b7ea-4901-aeb3-933a8747756f", KSMFT_CATEGORY_OTHER);
    0xCF1DDA2CL, 0x9743, 0x11D0, 0xA3, 0xEE, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("CF1DDA2C-9743-11D0-A3EE-00A0C9223196", KSCATEGORY_COMMUNICATIONSTRANSFORM);
    0xCF1DDA2DL, 0x9743, 0x11D0, 0xA3, 0xEE, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("CF1DDA2D-9743-11D0-A3EE-00A0C9223196", KSCATEGORY_INTERFACETRANSFORM);
    0xCF1DDA2EL, 0x9743, 0x11D0, 0xA3, 0xEE, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("CF1DDA2E-9743-11D0-A3EE-00A0C9223196", KSCATEGORY_MEDIUMTRANSFORM);
    0x760FED5EL, 0x9357, 0x11D0, 0xA3, 0xCC, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("760FED5E-9357-11D0-A3CC-00A0C9223196", KSCATEGORY_FILESYSTEM);
    0x53172480L, 0x4791, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("53172480-4791-11D0-A5D6-28DB04C10000", KSCATEGORY_CLOCK);
    0x97EBAACAL, 0x95BD, 0x11D0, 0xA3, 0xEA, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("97EBAACA-95BD-11D0-A3EA-00A0C9223196", KSCATEGORY_PROXY);
    0x97EBAACBL, 0x95BD, 0x11D0, 0xA3, 0xEA, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("97EBAACB-95BD-11D0-A3EA-00A0C9223196", KSCATEGORY_QUALITY);
typedef struct {
    ULONG FromNode;
    ULONG FromNodePin;
    ULONG ToNode;
    ULONG ToNodePin;
} KSTOPOLOGY_CONNECTION, *PKSTOPOLOGY_CONNECTION;
typedef struct {
    ULONG CategoriesCount;
    _Field_size_(CategoriesCount)
    const GUID* Categories;
    ULONG TopologyNodesCount;
    _Field_size_(TopologyNodesCount)
    const GUID* TopologyNodes;
    ULONG TopologyConnectionsCount;
    _Field_size_(TopologyConnectionsCount)
    const KSTOPOLOGY_CONNECTION* TopologyConnections;
    _Field_size_(TopologyNodesCount)
    const GUID* TopologyNodesNames;
    ULONG Reserved;
} KSTOPOLOGY, *PKSTOPOLOGY;
typedef struct {
    ULONG CreateFlags;
    ULONG Node;
} KSNODE_CREATE, *PKSNODE_CREATE;
    0x7b785570L, 0x8c82, 0x11cf, 0xbc, 0x0c, 0x00, 0xaa, 0x00, 0xac, 0x74, 0xf6
DEFINE_GUIDSTRUCT("7b785570-8c82-11cf-bc0c-00aa00ac74f6", KSTIME_FORMAT_FRAME);
    0x7b785571L, 0x8c82, 0x11cf, 0xbc, 0x0c, 0x00, 0xaa, 0x00, 0xac, 0x74, 0xf6
DEFINE_GUIDSTRUCT("7b785571-8c82-11cf-bc0c-00aa00ac74f6", KSTIME_FORMAT_BYTE);
    0x7b785572L, 0x8c82, 0x11cf, 0xbc, 0x0c, 0x00, 0xaa, 0x00, 0xac, 0x74, 0xf6
DEFINE_GUIDSTRUCT("7b785572-8c82-11cf-bc0c-00aa00ac74f6", KSTIME_FORMAT_SAMPLE);
    0x7b785573L, 0x8c82, 0x11cf, 0xbc, 0x0c, 0x00, 0xaa, 0x00, 0xac, 0x74, 0xf6
DEFINE_GUIDSTRUCT("7b785573-8c82-11cf-bc0c-00aa00ac74f6", KSTIME_FORMAT_FIELD);
    0x7b785574L, 0x8c82, 0x11cf, 0xbc, 0x0c, 0x00, 0xaa, 0x00, 0xac, 0x74, 0xf6
DEFINE_GUIDSTRUCT("7b785574-8c82-11cf-bc0c-00aa00ac74f6", KSTIME_FORMAT_MEDIA_TIME);
typedef KSIDENTIFIER KSPIN_INTERFACE, *PKSPIN_INTERFACE;
    0x1A8766A0L, 0x62CE, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("1A8766A0-62CE-11CF-A5D6-28DB04C10000", KSINTERFACESETID_Standard);
typedef enum {
    KSINTERFACE_STANDARD_STREAMING,
    KSINTERFACE_STANDARD_LOOPED_STREAMING,
    KSINTERFACE_STANDARD_CONTROL
} KSINTERFACE_STANDARD;
    0x8C6F932CL, 0xE771, 0x11D0, 0xB8, 0xFF, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("8C6F932C-E771-11D0-B8FF-00A0C9223196", KSINTERFACESETID_FileIo);
typedef enum {
    KSINTERFACE_FILEIO_STREAMING
} KSINTERFACE_FILEIO;
    0x4747B320L, 0x62CE, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("4747B320-62CE-11CF-A5D6-28DB04C10000", KSMEDIUMSETID_Standard);
    0x8C134960L, 0x51AD, 0x11CF, 0x87, 0x8A, 0x94, 0xF8, 0x01, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("8C134960-51AD-11CF-878A-94F801C10000", KSPROPSETID_Pin);
typedef enum {
    KSPROPERTY_PIN_CINSTANCES,
    KSPROPERTY_PIN_CTYPES,
    KSPROPERTY_PIN_DATAFLOW,
    KSPROPERTY_PIN_DATARANGES,
    KSPROPERTY_PIN_DATAINTERSECTION,
    KSPROPERTY_PIN_INTERFACES,
    KSPROPERTY_PIN_MEDIUMS,
    KSPROPERTY_PIN_COMMUNICATION,
    KSPROPERTY_PIN_GLOBALCINSTANCES,
    KSPROPERTY_PIN_NECESSARYINSTANCES,
    KSPROPERTY_PIN_PHYSICALCONNECTION,
    KSPROPERTY_PIN_CATEGORY,
    KSPROPERTY_PIN_NAME,
    KSPROPERTY_PIN_CONSTRAINEDDATARANGES,
    KSPROPERTY_PIN_PROPOSEDATAFORMAT,
    KSPROPERTY_PIN_PROPOSEDATAFORMAT2,
    KSPROPERTY_PIN_MODEDATAFORMATS,
} KSPROPERTY_PIN;
typedef struct {
    KSPROPERTY Property;
    ULONG PinId;
    union {
        ULONG Reserved;
        ULONG Flags;
    };
} KSP_PIN, *PKSP_PIN;
typedef struct {
    KSEVENT Event;
    ULONG PinId;
    ULONG Reserved;
} KSE_PIN, *PKSE_PIN;
typedef struct {
    ULONG PossibleCount;
    ULONG CurrentCount;
} KSPIN_CINSTANCES, *PKSPIN_CINSTANCES;
typedef enum {
    KSPIN_DATAFLOW_IN = 1,
    KSPIN_DATAFLOW_OUT
} KSPIN_DATAFLOW, *PKSPIN_DATAFLOW;
typedef struct {
    ULONG FormatSize;
    ULONG Flags;
    ULONG SampleSize;
    ULONG Reserved;
    GUID MajorFormat;
    GUID SubFormat;
    GUID Specifier;
} KSDATAFORMAT, *PKSDATAFORMAT, KSDATARANGE, *PKSDATARANGE;
typedef struct {
    ULONG Size;
    ULONG Flags;
    GUID Attribute;
} KSATTRIBUTE, *PKSATTRIBUTE;
typedef enum {
    KSPIN_COMMUNICATION_NONE,
    KSPIN_COMMUNICATION_SINK,
    KSPIN_COMMUNICATION_SOURCE,
    KSPIN_COMMUNICATION_BOTH,
    KSPIN_COMMUNICATION_BRIDGE
} KSPIN_COMMUNICATION, *PKSPIN_COMMUNICATION;
typedef KSIDENTIFIER KSPIN_MEDIUM, *PKSPIN_MEDIUM;
typedef struct {
    KSPIN_INTERFACE Interface;
    KSPIN_MEDIUM Medium;
    ULONG PinId;
    HANDLE PinToHandle;
    KSPRIORITY Priority;
} KSPIN_CONNECT, *PKSPIN_CONNECT;
typedef struct {
    ULONG Size;
    ULONG Pin;
    WCHAR SymbolicLinkName[1];
} KSPIN_PHYSICALCONNECTION, *PKSPIN_PHYSICALCONNECTION;
    const KSPIN_INTERFACE tablename[] =
    {\
        STATICGUIDOF(guid),\
        (interface),\
        0\
    }
    const KSPIN_MEDIUM tablename[] =
    DEFINE_KSPIN_INTERFACE_ITEM(guid, medium)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_CINSTANCES,\
        (Handler),\
        sizeof(KSP_PIN),\
        sizeof(KSPIN_CINSTANCES),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_CTYPES,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(ULONG),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_DATAFLOW,\
        (Handler),\
        sizeof(KSP_PIN),\
        sizeof(KSPIN_DATAFLOW),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_DATARANGES,\
        (Handler),\
        sizeof(KSP_PIN),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_DATAINTERSECTION,\
        (Handler),\
        sizeof(KSP_PIN) + sizeof(KSMULTIPLE_ITEM),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_INTERFACES,\
        (Handler),\
        sizeof(KSP_PIN),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_MEDIUMS,\
        (Handler),\
        sizeof(KSP_PIN),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_COMMUNICATION,\
        (Handler),\
        sizeof(KSP_PIN),\
        sizeof(KSPIN_COMMUNICATION),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_GLOBALCINSTANCES,\
        (Handler),\
        sizeof(KSP_PIN),\
        sizeof(KSPIN_CINSTANCES),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_NECESSARYINSTANCES,\
        (Handler),\
        sizeof(KSP_PIN),\
        sizeof(ULONG),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_PHYSICALCONNECTION,\
        (Handler),\
        sizeof(KSP_PIN),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_CATEGORY,\
        (Handler),\
        sizeof(KSP_PIN),\
        sizeof(GUID),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_NAME,\
        (Handler),\
        sizeof(KSP_PIN),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_CONSTRAINEDDATARANGES,\
        (Handler),\
        sizeof(KSP_PIN),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_PROPOSEDATAFORMAT,\
        NULL,\
        sizeof(KSP_PIN),\
        sizeof(KSDATAFORMAT),\
        (Handler), NULL, 0, NULL, NULL, 0)
    PropGeneral, PropInstances, PropIntersection)\
DEFINE_KSPROPERTY_TABLE(PinSet) {\
    DEFINE_KSPROPERTY_ITEM_PIN_CINSTANCES(PropInstances),\
    DEFINE_KSPROPERTY_ITEM_PIN_CTYPES(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_DATAFLOW(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_DATARANGES(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_DATAINTERSECTION(PropIntersection),\
    DEFINE_KSPROPERTY_ITEM_PIN_INTERFACES(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_MEDIUMS(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_COMMUNICATION(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_CATEGORY(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_NAME(PropGeneral)\
}
    PropGeneral, PropInstances, PropIntersection)\
DEFINE_KSPROPERTY_TABLE(PinSet) {\
    DEFINE_KSPROPERTY_ITEM_PIN_CINSTANCES(PropInstances),\
    DEFINE_KSPROPERTY_ITEM_PIN_CTYPES(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_DATAFLOW(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_DATARANGES(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_DATAINTERSECTION(PropIntersection),\
    DEFINE_KSPROPERTY_ITEM_PIN_INTERFACES(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_MEDIUMS(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_COMMUNICATION(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_CATEGORY(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_NAME(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_CONSTRAINEDDATARANGES(PropGeneral)\
}
    0xDD4F192E, 0x3B78, 0x49AD, 0xA5, 0x34, 0x2C, 0x31, 0x5b, 0x82, 0x20, 0x00
DEFINE_GUIDSTRUCT("DD4F192E-3B78-49AD-A534-2C315B822000", KSEVENTSETID_PinCapsChange);
typedef enum {
    KSEVENT_PINCAPS_FORMATCHANGE,
    KSEVENT_PINCAPS_JACKINFOCHANGE
} KSEVENT_PINCAPS_CHANGENOTIFICATIONS;
 0xda168465, 0x3a7c, 0x4858, 0x9d, 0x4a, 0x3e, 0x8e, 0x24, 0x70, 0x1a, 0xef
DEFINE_GUIDSTRUCT("DA168465-3A7C-4858-9D4A-3E8E24701AEF", KSEVENTSETID_VolumeLimit);
typedef enum {
    KSEVENT_VOLUMELIMIT_CHANGED
} KSEVENT_VOLUMELIMIT;
    0x9b365890L, 0x165f, 0x11d0, 0xa1, 0x95, 0x00, 0x20, 0xaf, 0xd1, 0x56, 0xe4
DEFINE_GUIDSTRUCT("9b365890-165f-11d0-a195-0020afd156e4", KSNAME_Filter);
    0x146F1A80L, 0x4791, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("146F1A80-4791-11D0-A5D6-28DB04C10000", KSNAME_Pin);
    0x53172480L, 0x4791, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("53172480-4791-11D0-A5D6-28DB04C10000", KSNAME_Clock);
    0x642F5D00L, 0x4791, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("642F5D00-4791-11D0-A5D6-28DB04C10000", KSNAME_Allocator);
    0x0621061AL, 0xEE75, 0x11D0, 0xB9, 0x15, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("0621061A-EE75-11D0-B915-00A0C9223196", KSNAME_TopologyNode);
    0xE436EB83L, 0x524F, 0x11CE, 0x9F, 0x53, 0x00, 0x20, 0xAF, 0x0B, 0xA7, 0x70
DEFINE_GUIDSTRUCT("E436EB83-524F-11CE-9F53-0020AF0BA770", KSDATAFORMAT_TYPE_STREAM);
    0xE436EB8EL, 0x524F, 0x11CE, 0x9F, 0x53, 0x00, 0x20, 0xAF, 0x0B, 0xA7, 0x70
DEFINE_GUIDSTRUCT("E436EB8E-524F-11CE-9F53-0020AF0BA770", KSDATAFORMAT_SUBTYPE_NONE);
    0xAA797B40L, 0xE974, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("AA797B40-E974-11CF-A5D6-28DB04C10000", KSDATAFORMAT_SPECIFIER_FILENAME);
    0x65E8773CL, 0x8F56, 0x11D0, 0xA3, 0xB9, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("65E8773C-8F56-11D0-A3B9-00A0C9223196", KSDATAFORMAT_SPECIFIER_FILEHANDLE);
    0x0F6417D6L, 0xC318, 0x11D0, 0xA4, 0x3F, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("0F6417D6-C318-11D0-A43F-00A0C9223196", KSDATAFORMAT_SPECIFIER_NONE);
    0xD16AD380L, 0xAC1A, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("D16AD380-AC1A-11CF-A5D6-28DB04C10000", KSPROPSETID_Quality);
typedef enum {
    KSPROPERTY_QUALITY_REPORT,
    KSPROPERTY_QUALITY_ERROR
} KSPROPERTY_QUALITY;
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_QUALITY_REPORT,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(KSQUALITY),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_QUALITY_ERROR,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(KSERROR),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)
    0x1D58C920L, 0xAC9B, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("1D58C920-AC9B-11CF-A5D6-28DB04C10000", KSPROPSETID_Connection);
typedef enum {
    KSPROPERTY_CONNECTION_STATE,
    KSPROPERTY_CONNECTION_PRIORITY,
    KSPROPERTY_CONNECTION_DATAFORMAT,
    KSPROPERTY_CONNECTION_ALLOCATORFRAMING,
    KSPROPERTY_CONNECTION_PROPOSEDATAFORMAT,
    KSPROPERTY_CONNECTION_ACQUIREORDERING,
    KSPROPERTY_CONNECTION_ALLOCATORFRAMING_EX,
    KSPROPERTY_CONNECTION_STARTAT
} KSPROPERTY_CONNECTION;
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CONNECTION_STATE,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(KSSTATE),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CONNECTION_PRIORITY,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(KSPRIORITY),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CONNECTION_DATAFORMAT,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        0,\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CONNECTION_ALLOCATORFRAMING,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSALLOCATOR_FRAMING),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CONNECTION_ALLOCATORFRAMING_EX,\
        (Handler),\
        sizeof(KSPROPERTY),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CONNECTION_PROPOSEDATAFORMAT,\
        NULL,\
        sizeof(KSPROPERTY),\
        sizeof(KSDATAFORMAT),\
        (Handler),\
        NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CONNECTION_ACQUIREORDERING,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(int),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CONNECTION_STARTAT,\
        NULL,\
        sizeof(KSPROPERTY),\
        sizeof(KSRELATIVEEVENT),\
        (Handler),\
        NULL, 0, NULL, NULL, 0)
    0xa3d1c5d, 0x5243, 0x4819, 0x9e, 0xd0, 0xae, 0xe8, 0x4, 0x4c, 0xee, 0x2b
DEFINE_GUIDSTRUCT("0A3D1C5D-5243-4819-9ED0-AEE8044CEE2B", KSPROPSETID_MemoryTransport);
enum {
    KSPROPERTY_MEMORY_TRANSPORT = 1
};
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEMORY_TRANSPORT,\
        NULL,\
        sizeof(KSPROPERTY),\
        sizeof(BOOL),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)
typedef struct {
    union {
        ULONG OptionsFlags;
        ULONG RequirementsFlags;
    };
    ULONG PoolType;
    ULONG Frames;
    ULONG FrameSize;
    union {
        ULONG FileAlignment;
        LONG FramePitch;
    };
    ULONG Reserved;
} KSALLOCATOR_FRAMING, *PKSALLOCATOR_FRAMING;
typedef struct {
    ULONG MinFrameSize;
    ULONG MaxFrameSize;
    ULONG Stepping;
} KS_FRAMING_RANGE, *PKS_FRAMING_RANGE;
typedef struct {
    KS_FRAMING_RANGE Range;
    ULONG InPlaceWeight;
    ULONG NotInPlaceWeight;
} KS_FRAMING_RANGE_WEIGHTED, *PKS_FRAMING_RANGE_WEIGHTED;
typedef struct {
    ULONG RatioNumerator;
    ULONG RatioDenominator;
    ULONG RatioConstantMargin;
} KS_COMPRESSION, *PKS_COMPRESSION;
typedef struct {
    GUID MemoryType;
    GUID BusType;
    ULONG MemoryFlags;
    ULONG BusFlags;
    ULONG Flags;
    ULONG Frames;
    union {
        ULONG FileAlignment;
        LONG FramePitch;
        };
    ULONG MemoryTypeWeight;
    KS_FRAMING_RANGE PhysicalRange;
    KS_FRAMING_RANGE_WEIGHTED FramingRange;
} KS_FRAMING_ITEM, *PKS_FRAMING_ITEM;
typedef struct {
    ULONG CountItems;
    ULONG PinFlags;
    KS_COMPRESSION OutputCompression;
    ULONG PinWeight;
    KS_FRAMING_ITEM FramingItem[1];
} KSALLOCATOR_FRAMING_EX, *PKSALLOCATOR_FRAMING_EX;
    0x091bb638L, 0x603f, 0x11d1, 0xb0, 0x67, 0x00, 0xa0, 0xc9, 0x06, 0x28, 0x02
DEFINE_GUIDSTRUCT("091bb638-603f-11d1-b067-00a0c9062802", KSMEMORY_TYPE_SYSTEM);
    0x8cb0fc28L, 0x7893, 0x11d1, 0xb0, 0x69, 0x00, 0xa0, 0xc9, 0x06, 0x28, 0x02
DEFINE_GUIDSTRUCT("8cb0fc28-7893-11d1-b069-00a0c9062802", KSMEMORY_TYPE_USER);
    0xd833f8f8L, 0x7894, 0x11d1, 0xb0, 0x69, 0x00, 0xa0, 0xc9, 0x06, 0x28, 0x02
DEFINE_GUIDSTRUCT("d833f8f8-7894-11d1-b069-00a0c9062802", KSMEMORY_TYPE_KERNEL_PAGED);
    0x4a6d5fc4L, 0x7895, 0x11d1, 0xb0, 0x69, 0x00, 0xa0, 0xc9, 0x06, 0x28, 0x02
DEFINE_GUIDSTRUCT("4a6d5fc4-7895-11d1-b069-00a0c9062802", KSMEMORY_TYPE_KERNEL_NONPAGED);
    0x091bb639L, 0x603f, 0x11d1, 0xb0, 0x67, 0x00, 0xa0, 0xc9, 0x06, 0x28, 0x02
DEFINE_GUIDSTRUCT("091bb639-603f-11d1-b067-00a0c9062802", KSMEMORY_TYPE_DEVICE_UNKNOWN);
    const KSALLOCATOR_FRAMING_EX FramingExName = \
    {\
        1, \
        0, \
        {\
            1, \
            1, \
            0 \
        }, \
        0, \
        {\
            {\
                MemoryType, \
                STATIC_KS_TYPE_DONT_CARE, \
                0, \
                0, \
                Flags, \
                Frames, \
                Alignment, \
                0, \
                {\
                    0, \
                    (ULONG)-1, \
                    1 \
                }, \
                {\
                    {\
                        MinFrameSize, \
                        MaxFrameSize, \
                        1 \
                    }, \
                    0, \
                    0 \
                }\
            }\
        }\
    }
{\
    KsCompressionPointer->RatioNumerator = 1;\
    KsCompressionPointer->RatioDenominator = 1;\
    KsCompressionPointer->RatioConstantMargin = 0;\
}
{\
    KsFramingRangePointer->MinFrameSize = 0;\
    KsFramingRangePointer->MaxFrameSize = (ULONG) -1;\
    KsFramingRangePointer->Stepping = 1;\
}
{\
    KsFramingRangePointer->MinFrameSize = P_MinFrameSize;\
    KsFramingRangePointer->MaxFrameSize = P_MaxFrameSize;\
    KsFramingRangePointer->Stepping = 1;\
}
{\
    KS_FRAMING_RANGE *KsFramingRange = &KsFramingRangeWeightedPointer->Range;\
    SetKsFramingRange(KsFramingRange, P_MinFrameSize, P_MaxFrameSize);\
    KsFramingRangeWeightedPointer->InPlaceWeight = 0;\
    KsFramingRangeWeightedPointer->NotInPlaceWeight = 0;\
}
{\
    KS_COMPRESSION *KsCompression = &FramingExPointer->OutputCompression;\
    KS_FRAMING_RANGE *KsFramingRange = &FramingExPointer->FramingItem[0].PhysicalRange;\
    KS_FRAMING_RANGE_WEIGHTED *KsFramingRangeWeighted = &FramingExPointer->FramingItem[0].FramingRange;\
    FramingExPointer->CountItems = 1;\
    FramingExPointer->PinFlags = 0;\
    SetDefaultKsCompression(KsCompression);\
    FramingExPointer->PinWeight = 0;\
    FramingExPointer->FramingItem[0].MemoryType = P_MemoryType;\
    FramingExPointer->FramingItem[0].BusType = KS_TYPE_DONT_CARE;\
    FramingExPointer->FramingItem[0].MemoryFlags = 0;\
    FramingExPointer->FramingItem[0].BusFlags = 0;\
    FramingExPointer->FramingItem[0].Flags = P_Flags;\
    FramingExPointer->FramingItem[0].Frames = P_Frames;\
    FramingExPointer->FramingItem[0].FileAlignment = P_Alignment;\
    FramingExPointer->FramingItem[0].MemoryTypeWeight = 0;\
    SetDontCareKsFramingRange(KsFramingRange);\
    SetKsFramingRangeWeighted(KsFramingRangeWeighted, P_MinFrameSize, P_MaxFrameSize);\
}
    0x75d95571L, 0x073c, 0x11d0, 0xa1, 0x61, 0x00, 0x20, 0xaf, 0xd1, 0x56, 0xe4
DEFINE_GUIDSTRUCT("75d95571-073c-11d0-a161-0020afd156e4", KSEVENTSETID_StreamAllocator);
typedef enum {
    KSEVENT_STREAMALLOCATOR_INTERNAL_FREEFRAME,
    KSEVENT_STREAMALLOCATOR_FREEFRAME
} KSEVENT_STREAMALLOCATOR;
    0xcf6e4341L, 0xec87, 0x11cf, 0xa1, 0x30, 0x00, 0x20, 0xaf, 0xd1, 0x56, 0xe4
DEFINE_GUIDSTRUCT("cf6e4341-ec87-11cf-a130-0020afd156e4", KSMETHODSETID_StreamAllocator);
typedef enum {
    KSMETHOD_STREAMALLOCATOR_ALLOC,
    KSMETHOD_STREAMALLOCATOR_FREE
} KSMETHOD_STREAMALLOCATOR;
    DEFINE_KSMETHOD_ITEM(\
        KSMETHOD_STREAMALLOCATOR_ALLOC,\
        KSMETHOD_TYPE_WRITE,\
        (Handler),\
        sizeof(KSMETHOD),\
        sizeof(PVOID),\
        NULL)
    DEFINE_KSMETHOD_ITEM(\
        KSMETHOD_STREAMALLOCATOR_FREE,\
        KSMETHOD_TYPE_READ,\
        (Handler),\
        sizeof(KSMETHOD),\
        sizeof(PVOID),\
        NULL)
DEFINE_KSMETHOD_TABLE(AllocatorSet) {\
    DEFINE_KSMETHOD_ITEM_STREAMALLOCATOR_ALLOC(MethodAlloc),\
    DEFINE_KSMETHOD_ITEM_STREAMALLOCATOR_FREE(MethodFree)\
}
    0xcf6e4342L, 0xec87, 0x11cf, 0xa1, 0x30, 0x00, 0x20, 0xaf, 0xd1, 0x56, 0xe4
DEFINE_GUIDSTRUCT("cf6e4342-ec87-11cf-a130-0020afd156e4", KSPROPSETID_StreamAllocator);
typedef struct {
    KSALLOCATOR_FRAMING Framing;
    ULONG AllocatedFrames;
    ULONG Reserved;
} KSSTREAMALLOCATOR_STATUS, *PKSSTREAMALLOCATOR_STATUS;
typedef struct {
    KSALLOCATOR_FRAMING_EX Framing;
    ULONG AllocatedFrames;
    ULONG Reserved;
} KSSTREAMALLOCATOR_STATUS_EX, *PKSSTREAMALLOCATOR_STATUS_EX;
typedef struct {
    LONGLONG Time;
    ULONG Numerator;
    ULONG Denominator;
} KSTIME, *PKSTIME;
typedef struct {
    ULONG Size;
    ULONG TypeSpecificFlags;
    KSTIME PresentationTime;
    LONGLONG Duration;
    ULONG FrameExtent;
    ULONG DataUsed;
    _Field_size_bytes_(FrameExtent)
    PVOID Data;
    ULONG OptionsFlags;
#if _WIN64
    ULONG Reserved;
#endif
} KSSTREAM_HEADER, *PKSSTREAM_HEADER;
typedef struct {
    ULONG BufferSize;
    ULONG UsedSize;
    _Field_size_bytes_(BufferSize)
    PVOID Data;
    _Field_size_bytes_(BufferSize)
    PVOID SystemVa;
    ULONG Flags;
    ULONG Reserved;
} KSSTREAM_METADATA_INFO, *PKSSTREAM_METADATA_INFO;
typedef struct
{
 ULONG PresentationTimeStamp;
 ULONG SourceClockReference;
 union
 {
  struct
  {
   USHORT Counter : 11;
   USHORT Reserved : 5;
  };
  USHORT SCRToken;
 };
 USHORT Reserved0;
 ULONG Reserved1;
} KSSTREAM_UVC_METADATATYPE_TIMESTAMP, *PKSSTREAM_UVC_METADATATYPE_TIMESTAMP;
typedef struct {
    KSSTREAM_UVC_METADATATYPE_TIMESTAMP StartOfFrameTimestamp;
    KSSTREAM_UVC_METADATATYPE_TIMESTAMP EndOfFrameTimestamp;
} KSSTREAM_UVC_METADATA, *PKSSTREAM_UVC_METADATA;
typedef enum{
  KSPIN_MDL_CACHING_NOTIFY_CLEANUP,
  KSPIN_MDL_CACHING_NOTIFY_CLEANALL_WAIT,
  KSPIN_MDL_CACHING_NOTIFY_CLEANALL_NOWAIT,
  KSPIN_MDL_CACHING_NOTIFY_ADDSAMPLE
}KSPIN_MDL_CACHING_EVENT;
typedef struct {
 KSPIN_MDL_CACHING_EVENT Event;
 PVOID Buffer;
} KSPIN_MDL_CACHING_NOTIFICATION, *PKSPIN_MDL_CACHING_NOTIFICATION;
typedef struct {
 KSPIN_MDL_CACHING_EVENT Event;
 ULONG Buffer;
} KSPIN_MDL_CACHING_NOTIFICATION32, *PKSPIN_MDL_CACHING_NOTIFICATION32;
    0x1fdd8ee1L, 0x9cd3, 0x11d0, 0x82, 0xaa, 0x00, 0x00, 0xf8, 0x22, 0xfe, 0x8a
DEFINE_GUIDSTRUCT("1fdd8ee1-9cd3-11d0-82aa-0000f822fe8a", KSPROPSETID_StreamInterface);
typedef enum {
    KSPROPERTY_STREAMINTERFACE_HEADERSIZE
} KSPROPERTY_STREAMINTERFACE;
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAMINTERFACE_HEADERSIZE,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(ULONG),\
        NULL, NULL, 0, NULL, NULL, 0)
    HeaderSizeHandler)\
DEFINE_KSPROPERTY_TABLE(StreamInterfaceSet) {\
    DEFINE_KSPROPERTY_ITEM_STREAMINTERFACE_HEADERSIZE( HeaderSizeHandler )\
}
    0x65aaba60L, 0x98ae, 0x11cf, 0xa1, 0x0d, 0x00, 0x20, 0xaf, 0xd1, 0x56, 0xe4
DEFINE_GUIDSTRUCT("65aaba60-98ae-11cf-a10d-0020afd156e4", KSPROPSETID_Stream);
typedef enum {
    KSPROPERTY_STREAM_ALLOCATOR,
    KSPROPERTY_STREAM_QUALITY,
    KSPROPERTY_STREAM_DEGRADATION,
    KSPROPERTY_STREAM_MASTERCLOCK,
    KSPROPERTY_STREAM_TIMEFORMAT,
    KSPROPERTY_STREAM_PRESENTATIONTIME,
    KSPROPERTY_STREAM_PRESENTATIONEXTENT,
    KSPROPERTY_STREAM_FRAMETIME,
    KSPROPERTY_STREAM_RATECAPABILITY,
    KSPROPERTY_STREAM_RATE,
    KSPROPERTY_STREAM_PIPE_ID
} KSPROPERTY_STREAM;
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_ALLOCATOR,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(HANDLE),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_QUALITY,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSQUALITY_MANAGER),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_DEGRADATION,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        0,\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_MASTERCLOCK,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(HANDLE),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_TIMEFORMAT,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(GUID),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_PRESENTATIONTIME,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(KSTIME),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_PRESENTATIONEXTENT,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(LONGLONG),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_FRAMETIME,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSFRAMETIME),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_RATECAPABILITY,\
        (Handler),\
        sizeof(KSRATE_CAPABILITY),\
        sizeof(KSRATE),\
        NULL, NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_RATE,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(KSRATE),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_PIPE_ID,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(HANDLE),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)
typedef enum{
    KSPROPERTY_ALLOCATOR_CLEANUP_CACHEDMDLPAGES = 1
}KSPPROPERTY_ALLOCATOR_MDLCACHING;
 DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_ALLOCATOR_CLEANUP_CACHEDMDLPAGES,\
        NULL,\
        sizeof(KSPROPERTY),\
        sizeof(KSPIN_MDL_CACHING_NOTIFICATION),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)
    0xbd718a7b, 0x97fc, 0x40c7, 0x88, 0xce, 0xd3, 0xff, 0x6, 0xf5, 0x5b, 0x16
DEFINE_GUIDSTRUCT("BD718A7B-97FC-40C7-88CE-D3FF06F55B16", KSPROPSETID_PinMDLCacheClearProp);
typedef struct {
    HANDLE QualityManager;
    PVOID Context;
} KSQUALITY_MANAGER, *PKSQUALITY_MANAGER;
typedef struct {
    LONGLONG Duration;
    ULONG FrameFlags;
    ULONG Reserved;
} KSFRAMETIME, *PKSFRAMETIME;
typedef struct {
    LONGLONG PresentationStart;
    LONGLONG Duration;
    KSPIN_INTERFACE Interface;
    LONG Rate;
    ULONG Flags;
} KSRATE, *PKSRATE;
typedef struct {
    KSPROPERTY Property;
    KSRATE Rate;
} KSRATE_CAPABILITY, *PKSRATE_CAPABILITY;
    0xDF12A4C0L, 0xAC17, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("DF12A4C0-AC17-11CF-A5D6-28DB04C10000", KSPROPSETID_Clock);
    ((((ULONGLONG)(ULONG)(PerformanceTime).HighPart * NANOSECONDS / (Frequency)) << 32) + \
    ((((((ULONGLONG)(ULONG)(PerformanceTime).HighPart * NANOSECONDS) % (Frequency)) << 32) + \
    ((ULONGLONG)(PerformanceTime).LowPart * NANOSECONDS)) / (Frequency)))
typedef struct {
    ULONG CreateFlags;
} KSCLOCK_CREATE, *PKSCLOCK_CREATE;
typedef struct {
    LONGLONG Time;
    LONGLONG SystemTime;
} KSCORRELATED_TIME, *PKSCORRELATED_TIME;
typedef struct {
    LONGLONG Granularity;
    LONGLONG Error;
} KSRESOLUTION, *PKSRESOLUTION;
typedef enum {
    KSPROPERTY_CLOCK_TIME,
    KSPROPERTY_CLOCK_PHYSICALTIME,
    KSPROPERTY_CLOCK_CORRELATEDTIME,
    KSPROPERTY_CLOCK_CORRELATEDPHYSICALTIME,
    KSPROPERTY_CLOCK_RESOLUTION,
    KSPROPERTY_CLOCK_STATE,
} KSPROPERTY_CLOCK;
    0x364D8E20L, 0x62C7, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("364D8E20-62C7-11CF-A5D6-28DB04C10000", KSEVENTSETID_Clock);
typedef enum {
    KSEVENT_CLOCK_INTERVAL_MARK,
    KSEVENT_CLOCK_POSITION_MARK
} KSEVENT_CLOCK_POSITION;
    0x7f4bcbe0L, 0x9ea5, 0x11cf, 0xa5, 0xd6, 0x28, 0xdb, 0x04, 0xc1, 0x00, 0x00
DEFINE_GUIDSTRUCT("7f4bcbe0-9ea5-11cf-a5d6-28db04c10000", KSEVENTSETID_Connection);
typedef enum {
    KSEVENT_CONNECTION_POSITIONUPDATE,
    KSEVENT_CONNECTION_DATADISCONTINUITY,
    KSEVENT_CONNECTION_TIMEDISCONTINUITY,
    KSEVENT_CONNECTION_PRIORITY,
    KSEVENT_CONNECTION_ENDOFSTREAM
} KSEVENT_CONNECTION;
typedef struct {
    PVOID Context;
    ULONG Proportion;
    LONGLONG DeltaTime;
} KSQUALITY, *PKSQUALITY;
typedef struct {
    PVOID Context;
    ULONG Status;
} KSERROR, *PKSERROR;
typedef enum {
    KSDEVICE_THERMAL_STATE_LOW,
    KSDEVICE_THERMAL_STATE_HIGH
} KSDEVICE_THERMAL_STATE;
    0x288296ec, 0x9f94, 0x41b4, 0xa1, 0x53, 0xaa, 0x31, 0xae, 0xec, 0xb3, 0x3f
DEFINE_GUIDSTRUCT("288296EC-9F94-41b4-A153-AA31AEECB33F", KSEVENTSETID_Device);
typedef enum {
    KSEVENT_DEVICE_LOST,
    KSEVENT_DEVICE_PREEMPTED,
    KSEVENT_DEVICE_THERMAL_HIGH,
    KSEVENT_DEVICE_THERMAL_LOW
} KSEVENT_DEVICE;
typedef KSIDENTIFIER KSDEGRADE, *PKSDEGRADE;
    0x9F564180L, 0x704C, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("9F564180-704C-11D0-A5D6-28DB04C10000", KSDEGRADESETID_Standard);
typedef enum {
    KSDEGRADE_STANDARD_SAMPLE,
    KSDEGRADE_STANDARD_QUALITY,
    KSDEGRADE_STANDARD_COMPUTATION,
    KSDEGRADE_STANDARD_SKIP
} KSDEGRADE_STANDARD;
#include <pshpack1.h>
typedef struct {
    GUID PropertySet;
    ULONG Count;
} KSPROPERTY_SERIALHDR, *PKSPROPERTY_SERIALHDR;
#include <poppack.h>
typedef struct {
    KSIDENTIFIER PropTypeSet;
    ULONG Id;
    ULONG PropertyLength;
} KSPROPERTY_SERIAL, *PKSPROPERTY_SERIAL;
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
DWORD
WINAPI
KsCreateAllocator(
    _In_ HANDLE ConnectionHandle,
    _In_ PKSALLOCATOR_FRAMING AllocatorFraming,
    _Out_ PHANDLE AllocatorHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
DWORD
NTAPI
KsCreateClock(
    _In_ HANDLE ConnectionHandle,
    _In_ PKSCLOCK_CREATE ClockCreate,
    _Out_ PHANDLE ClockHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
DWORD
WINAPI
KsCreatePin(
    _In_ HANDLE FilterHandle,
    _In_ PKSPIN_CONNECT Connect,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE ConnectionHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
DWORD
WINAPI
KsCreateTopologyNode(
    _In_ HANDLE ParentHandle,
    _In_ PKSNODE_CREATE NodeCreate,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE NodeHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
HRESULT
WINAPI
KsCreateAllocator2(
    _In_ HANDLE ConnectionHandle,
    _In_ PKSALLOCATOR_FRAMING AllocatorFraming,
    _Out_ PHANDLE AllocatorHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
HRESULT
NTAPI
KsCreateClock2(
    _In_ HANDLE ConnectionHandle,
    _In_ PKSCLOCK_CREATE ClockCreate,
    _Out_ PHANDLE ClockHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
HRESULT
WINAPI
KsCreatePin2(
    _In_ HANDLE FilterHandle,
    _In_ PKSPIN_CONNECT Connect,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE ConnectionHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
HRESULT
WINAPI
KsCreateTopologyNode2(
    _In_ HANDLE ParentHandle,
    _In_ PKSNODE_CREATE NodeCreate,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE NodeHandle
    );
    typedef union _MF_MDL_SHARED_PAYLOAD_KEY{
        struct {
            ULONG pHandle;
     ULONG fHandle;
            ULONG64 uPayload;
        }combined;
        GUID GMDLHandle;
    }MF_MDL_SHARED_PAYLOAD_KEY, *PMF_MDL_SHARED_PAYLOAD_KEY;
    d.combined.phandle = (ULONG32)a;\
    d.combined.fhandle = (ULONG32)b;\
    d.combined.upayload = (ULONG64)c;\
}
if ( pIrp->RequestorMode != KernelMode ) { \
    pIrp->IoStatus.Information = 0; \
    pIrp->IoStatus.Status = STATUS_INVALID_DEVICE_REQUEST; \
    if ( CompleteRequest ) IoCompleteRequest ( pIrp, IO_NO_INCREMENT ); \
    return STATUS_INVALID_DEVICE_REQUEST; \
}
#endif
#pragma endregion
