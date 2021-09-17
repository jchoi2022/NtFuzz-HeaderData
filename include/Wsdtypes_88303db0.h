       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
interface IWSDMessageParameters;
interface IWSDServiceMessaging;
typedef struct _WSD_DURATION WSD_DURATION;
typedef struct _WSD_DATETIME WSD_DATETIME;
typedef struct _WSD_HANDLER_CONTEXT WSD_HANDLER_CONTEXT;
typedef struct _WSD_EVENT WSD_EVENT;
typedef HRESULT (*WSD_STUB_FUNCTION) (
    IUnknown* server,
    IWSDServiceMessaging* session,
    WSD_EVENT* event
);
typedef enum _DeviceDiscoveryMechanism
{
    MulticastDiscovery = 0,
    DirectedDiscovery,
    SecureDirectedDiscovery
} DeviceDiscoveryMechanism;
typedef enum _WSD_PROTOCOL_TYPE
{
    WSD_PT_NONE = 0x00,
    WSD_PT_UDP = 0x01,
    WSD_PT_HTTP = 0x02,
    WSD_PT_HTTPS = 0x04,
    WSD_PT_ALL = 0xff,
} WSD_PROTOCOL_TYPE;
typedef struct _WSD_OPERATION
{
    WSDXML_TYPE* RequestType;
    WSDXML_TYPE* ResponseType;
    WSD_STUB_FUNCTION RequestStubFunction;
} WSD_OPERATION;
typedef
HRESULT (*PWSD_SOAP_MESSAGE_HANDLER)(
    IUnknown* thisUnknown,
    WSD_EVENT* event);
struct _WSD_HANDLER_CONTEXT
{
    PWSD_SOAP_MESSAGE_HANDLER Handler;
    void* PVoid;
    IUnknown* Unknown;
};
typedef enum _WSDEventType
{
    WSDET_NONE = 0,
    WSDET_INCOMING_MESSAGE = 1,
    WSDET_INCOMING_FAULT = 2,
    WSDET_TRANSMISSION_FAILURE = 3,
    WSDET_RESPONSE_TIMEOUT = 4,
} WSDEventType;
typedef struct _WSD_SYNCHRONOUS_RESPONSE_CONTEXT
{
    HRESULT hr;
    HANDLE eventHandle;
    IWSDMessageParameters* messageParameters;
    void* results;
} WSD_SYNCHRONOUS_RESPONSE_CONTEXT;
typedef struct _WSD_PORT_TYPE
{
    DWORD EncodedName;
    DWORD OperationCount;
    WSD_OPERATION* Operations;
    WSD_PROTOCOL_TYPE ProtocolType;
} WSD_PORT_TYPE;
typedef struct _WSD_RELATIONSHIP_METADATA WSD_RELATIONSHIP_METADATA;
typedef struct _WSD_SERVICE_METADATA_LIST WSD_SERVICE_METADATA_LIST;
typedef struct _WSD_HOST_METADATA WSD_HOST_METADATA;
typedef struct _WSD_ENDPOINT_REFERENCE_LIST WSD_ENDPOINT_REFERENCE_LIST;
typedef struct _WSD_SERVICE_METADATA WSD_SERVICE_METADATA;
typedef struct _WSD_THIS_DEVICE_METADATA WSD_THIS_DEVICE_METADATA;
typedef struct _WSD_THIS_MODEL_METADATA WSD_THIS_MODEL_METADATA;
typedef struct _WSD_LOCALIZED_STRING_LIST WSD_LOCALIZED_STRING_LIST;
typedef struct _WSD_SOAP_FAULT_REASON WSD_SOAP_FAULT_REASON;
typedef struct _WSD_SOAP_FAULT_SUBCODE WSD_SOAP_FAULT_SUBCODE;
typedef struct _WSD_SOAP_FAULT_CODE WSD_SOAP_FAULT_CODE;
typedef struct _WSD_SOAP_FAULT WSD_SOAP_FAULT;
typedef struct _WSD_APP_SEQUENCE WSD_APP_SEQUENCE;
typedef struct _WSD_HEADER_RELATESTO WSD_HEADER_RELATESTO;
typedef struct _WSD_SOAP_HEADER WSD_SOAP_HEADER;
typedef struct _WSD_SOAP_MESSAGE WSD_SOAP_MESSAGE;
typedef struct _WSD_RESOLVE_MATCHES WSD_RESOLVE_MATCHES;
typedef struct _WSD_RESOLVE_MATCH WSD_RESOLVE_MATCH;
typedef struct _WSD_RESOLVE WSD_RESOLVE;
typedef struct _WSD_PROBE_MATCH WSD_PROBE_MATCH;
typedef struct _WSD_PROBE_MATCH_LIST WSD_PROBE_MATCH_LIST;
typedef struct _WSD_PROBE_MATCHES WSD_PROBE_MATCHES;
typedef struct _WSD_PROBE WSD_PROBE;
typedef struct _WSD_BYE WSD_BYE;
typedef struct _WSD_SCOPES WSD_SCOPES;
typedef struct _WSD_NAME_LIST WSD_NAME_LIST;
typedef struct _WSD_HELLO WSD_HELLO;
typedef struct _WSD_REFERENCE_PARAMETERS WSD_REFERENCE_PARAMETERS;
typedef struct _WSD_REFERENCE_PROPERTIES WSD_REFERENCE_PROPERTIES;
typedef struct _WSD_ENDPOINT_REFERENCE WSD_ENDPOINT_REFERENCE;
typedef struct _WSD_METADATA_SECTION WSD_METADATA_SECTION;
typedef struct _WSD_METADATA_SECTION_LIST WSD_METADATA_SECTION_LIST;
typedef struct _WSD_URI_LIST WSD_URI_LIST;
typedef struct _WSD_EVENTING_FILTER_ACTION WSD_EVENTING_FILTER_ACTION;
typedef struct _WSD_EVENTING_FILTER WSD_EVENTING_FILTER;
typedef struct _WSD_EVENTING_EXPIRES WSD_EVENTING_EXPIRES;
typedef struct _WSD_EVENTING_DELIVERY_MODE_PUSH WSD_EVENTING_DELIVERY_MODE_PUSH;
typedef struct _WSD_EVENTING_DELIVERY_MODE WSD_EVENTING_DELIVERY_MODE;
typedef struct _WSD_LOCALIZED_STRING WSD_LOCALIZED_STRING;
struct _WSD_RELATIONSHIP_METADATA
{
    const WCHAR* Type;
    WSD_HOST_METADATA* Data;
    WSDXML_ELEMENT* Any;
};
struct _WSD_SERVICE_METADATA_LIST
{
    WSD_SERVICE_METADATA_LIST* Next;
    WSD_SERVICE_METADATA* Element;
};
struct _WSD_HOST_METADATA
{
    WSD_SERVICE_METADATA* Host;
    WSD_SERVICE_METADATA_LIST* Hosted;
};
struct _WSD_ENDPOINT_REFERENCE_LIST
{
    WSD_ENDPOINT_REFERENCE_LIST* Next;
    WSD_ENDPOINT_REFERENCE* Element;
};
struct _WSD_SERVICE_METADATA
{
    WSD_ENDPOINT_REFERENCE_LIST* EndpointReference;
    WSD_NAME_LIST* Types;
    const WCHAR* ServiceId;
    WSDXML_ELEMENT* Any;
};
struct _WSD_THIS_DEVICE_METADATA
{
    WSD_LOCALIZED_STRING_LIST* FriendlyName;
    const WCHAR* FirmwareVersion;
    const WCHAR* SerialNumber;
    WSDXML_ELEMENT* Any;
};
struct _WSD_THIS_MODEL_METADATA
{
    WSD_LOCALIZED_STRING_LIST* Manufacturer;
    const WCHAR* ManufacturerUrl;
    WSD_LOCALIZED_STRING_LIST* ModelName;
    const WCHAR* ModelNumber;
    const WCHAR* ModelUrl;
    const WCHAR* PresentationUrl;
    WSDXML_ELEMENT* Any;
};
struct _WSD_LOCALIZED_STRING_LIST
{
    WSD_LOCALIZED_STRING_LIST* Next;
    WSD_LOCALIZED_STRING* Element;
};
struct _WSD_SOAP_FAULT_REASON
{
    WSD_LOCALIZED_STRING_LIST* Text;
};
struct _WSD_SOAP_FAULT_SUBCODE
{
    WSDXML_NAME* Value;
    WSD_SOAP_FAULT_SUBCODE* Subcode;
};
struct _WSD_SOAP_FAULT_CODE
{
    WSDXML_NAME* Value;
    WSD_SOAP_FAULT_SUBCODE* Subcode;
};
struct _WSD_SOAP_FAULT
{
    WSD_SOAP_FAULT_CODE* Code;
    WSD_SOAP_FAULT_REASON* Reason;
    const WCHAR* Node;
    const WCHAR* Role;
    WSDXML_ELEMENT* Detail;
};
struct _WSD_APP_SEQUENCE
{
    ULONGLONG InstanceId;
    const WCHAR* SequenceId;
    ULONGLONG MessageNumber;
};
struct _WSD_HEADER_RELATESTO
{
    WSDXML_NAME* RelationshipType;
    const WCHAR* MessageID;
};
struct _WSD_SOAP_HEADER
{
    const WCHAR* To;
    const WCHAR* Action;
    const WCHAR* MessageID;
    WSD_HEADER_RELATESTO RelatesTo;
    WSD_ENDPOINT_REFERENCE* ReplyTo;
    WSD_ENDPOINT_REFERENCE* From;
    WSD_ENDPOINT_REFERENCE* FaultTo;
    WSD_APP_SEQUENCE* AppSequence;
    WSDXML_ELEMENT* AnyHeaders;
};
struct _WSD_SOAP_MESSAGE
{
    WSD_SOAP_HEADER Header;
    void* Body;
    WSDXML_TYPE* BodyType;
};
struct _WSD_RESOLVE_MATCHES
{
    WSD_RESOLVE_MATCH* ResolveMatch;
    WSDXML_ELEMENT* Any;
};
struct _WSD_RESOLVE_MATCH
{
    WSD_ENDPOINT_REFERENCE* EndpointReference;
    WSD_NAME_LIST* Types;
    WSD_SCOPES* Scopes;
    WSD_URI_LIST* XAddrs;
    ULONGLONG MetadataVersion;
    WSDXML_ELEMENT* Any;
};
struct _WSD_RESOLVE
{
    WSD_ENDPOINT_REFERENCE* EndpointReference;
    WSDXML_ELEMENT* Any;
};
struct _WSD_PROBE_MATCH
{
    WSD_ENDPOINT_REFERENCE* EndpointReference;
    WSD_NAME_LIST* Types;
    WSD_SCOPES* Scopes;
    WSD_URI_LIST* XAddrs;
    ULONGLONG MetadataVersion;
    WSDXML_ELEMENT* Any;
};
struct _WSD_PROBE_MATCH_LIST
{
    WSD_PROBE_MATCH_LIST* Next;
    WSD_PROBE_MATCH* Element;
};
struct _WSD_PROBE_MATCHES
{
    WSD_PROBE_MATCH_LIST* ProbeMatch;
    WSDXML_ELEMENT* Any;
};
struct _WSD_PROBE
{
    WSD_NAME_LIST* Types;
    WSD_SCOPES* Scopes;
    WSDXML_ELEMENT* Any;
};
struct _WSD_BYE
{
    WSD_ENDPOINT_REFERENCE* EndpointReference;
    WSDXML_ELEMENT* Any;
};
struct _WSD_SCOPES
{
    const WCHAR* MatchBy;
    WSD_URI_LIST* Scopes;
};
struct _WSD_NAME_LIST
{
    WSD_NAME_LIST* Next;
    WSDXML_NAME* Element;
};
struct _WSD_HELLO
{
    WSD_ENDPOINT_REFERENCE* EndpointReference;
    WSD_NAME_LIST* Types;
    WSD_SCOPES* Scopes;
    WSD_URI_LIST* XAddrs;
    ULONGLONG MetadataVersion;
    WSDXML_ELEMENT* Any;
};
struct _WSD_REFERENCE_PARAMETERS
{
    WSDXML_ELEMENT* Any;
};
struct _WSD_REFERENCE_PROPERTIES
{
    WSDXML_ELEMENT* Any;
};
struct _WSD_ENDPOINT_REFERENCE
{
    const WCHAR* Address;
    WSD_REFERENCE_PROPERTIES ReferenceProperties;
    WSD_REFERENCE_PARAMETERS ReferenceParameters;
    WSDXML_NAME* PortType;
    WSDXML_NAME* ServiceName;
    WSDXML_ELEMENT* Any;
};
struct _WSD_METADATA_SECTION
{
    const WCHAR* Dialect;
    const WCHAR* Identifier;
    void* Data;
    WSD_ENDPOINT_REFERENCE* MetadataReference;
    const WCHAR* Location;
    WSDXML_ELEMENT* Any;
};
struct _WSD_METADATA_SECTION_LIST
{
    WSD_METADATA_SECTION_LIST* Next;
    WSD_METADATA_SECTION* Element;
};
struct _WSD_URI_LIST
{
    WSD_URI_LIST* Next;
    const WCHAR* Element;
};
struct _WSD_EVENTING_FILTER_ACTION
{
    WSD_URI_LIST* Actions;
};
struct _WSD_EVENTING_FILTER
{
    const WCHAR* Dialect;
    WSD_EVENTING_FILTER_ACTION* FilterAction;
    void* Data;
};
struct _WSD_EVENTING_EXPIRES
{
    WSD_DURATION* Duration;
    WSD_DATETIME* DateTime;
};
struct _WSD_EVENTING_DELIVERY_MODE_PUSH
{
    WSD_ENDPOINT_REFERENCE* NotifyTo;
};
struct _WSD_EVENTING_DELIVERY_MODE
{
    const WCHAR* Mode;
    WSD_EVENTING_DELIVERY_MODE_PUSH* Push;
    void* Data;
};
struct _WSD_LOCALIZED_STRING
{
    const WCHAR* lang;
    const WCHAR* String;
};
extern WSDXML_TYPE Type_WSD_RELATIONSHIP_METADATA;
extern WSDXML_TYPE Type_WSD_HOST_METADATA;
extern WSDXML_TYPE Type_WSD_SERVICE_METADATA;
extern WSDXML_TYPE Type_WSD_THIS_DEVICE_METADATA;
extern WSDXML_TYPE Type_WSD_THIS_MODEL_METADATA;
extern WSDXML_TYPE Type_WSD_SOAP_FAULT_REASON;
extern WSDXML_TYPE Type_WSD_SOAP_FAULT_SUBCODE;
extern WSDXML_TYPE Type_WSD_SOAP_FAULT_CODE;
extern WSDXML_TYPE Type_WSD_SOAP_FAULT;
extern WSDXML_TYPE Type_WSD_APP_SEQUENCE;
extern WSDXML_TYPE Type_WSD_HEADER_RELATESTO;
extern WSDXML_TYPE Type_WSD_SOAP_HEADER;
extern WSDXML_TYPE Type_WSD_SOAP_MESSAGE;
extern WSDXML_TYPE Type_WSD_RESOLVE_MATCHES;
extern WSDXML_TYPE Type_WSD_RESOLVE_MATCH;
extern WSDXML_TYPE Type_WSD_RESOLVE;
extern WSDXML_TYPE Type_WSD_PROBE_MATCH;
extern WSDXML_TYPE Type_WSD_PROBE_MATCHES;
extern WSDXML_TYPE Type_WSD_PROBE;
extern WSDXML_TYPE Type_WSD_BYE;
extern WSDXML_TYPE Type_WSD_SCOPES;
extern WSDXML_TYPE Type_WSD_HELLO;
extern WSDXML_TYPE Type_WSD_REFERENCE_PARAMETERS;
extern WSDXML_TYPE Type_WSD_REFERENCE_PROPERTIES;
extern WSDXML_TYPE Type_WSD_ENDPOINT_REFERENCE;
extern WSDXML_TYPE Type_WSD_METADATA_SECTION;
extern WSDXML_TYPE Type_WSD_EVENTING_FILTER_ACTION;
extern WSDXML_TYPE Type_WSD_EVENTING_FILTER;
extern WSDXML_TYPE Type_WSD_EVENTING_EXPIRES;
extern WSDXML_TYPE Type_WSD_EVENTING_DELIVERY_MODE_PUSH;
extern WSDXML_TYPE Type_WSD_EVENTING_DELIVERY_MODE;
extern WSDXML_TYPE Type_WSD_LOCALIZED_STRING;
extern WSDXML_TYPE Type_WSD11_RESOLVE_MATCH;
extern WSDXML_TYPE Type_WSD11_RESOLVE_MATCHES;
extern WSDXML_TYPE Type_WSD11_RESOLVE;
extern WSDXML_TYPE Type_WSD11_PROBE_MATCH;
extern WSDXML_TYPE Type_WSD11_PROBE_MATCHES;
extern WSDXML_TYPE Type_WSD11_PROBE;
extern WSDXML_TYPE Type_WSD11_BYE;
extern WSDXML_TYPE Type_WSD11_HELLO;
extern WSDXML_TYPE* WSDTypes[40];
typedef struct
{
    WSD_METADATA_SECTION_LIST* Metadata;
}
RESPONSEBODY_GetMetadata;
typedef struct
{
    WSD_ENDPOINT_REFERENCE* EndTo;
    WSD_EVENTING_DELIVERY_MODE* Delivery;
    WSD_EVENTING_EXPIRES* Expires;
    WSD_EVENTING_FILTER* Filter;
    WSDXML_ELEMENT* Any;
}
REQUESTBODY_Subscribe;
typedef struct
{
    WSD_ENDPOINT_REFERENCE* SubscriptionManager;
    WSD_EVENTING_EXPIRES* expires;
    WSDXML_ELEMENT* any;
}
RESPONSEBODY_Subscribe;
typedef struct
{
    WSD_EVENTING_EXPIRES* Expires;
    WSDXML_ELEMENT* Any;
}
REQUESTBODY_Renew;
typedef struct
{
    WSD_EVENTING_EXPIRES* expires;
    WSDXML_ELEMENT* any;
}
RESPONSEBODY_Renew;
typedef struct
{
    WSDXML_ELEMENT* Any;
}
REQUESTBODY_GetStatus;
typedef struct
{
    WSD_EVENTING_EXPIRES* expires;
    WSDXML_ELEMENT* any;
}
RESPONSEBODY_GetStatus;
typedef struct
{
    WSDXML_ELEMENT* any;
}
REQUESTBODY_Unsubscribe;
typedef struct
{
    WSD_ENDPOINT_REFERENCE* SubscriptionManager;
    const WCHAR* Status;
    WSD_LOCALIZED_STRING* Reason;
    WSDXML_ELEMENT* Any;
}
RESPONSEBODY_SubscriptionEnd;
typedef struct _WSD_UNKNOWN_LOOKUP
{
    WSDXML_ELEMENT* Any;
} WSD_UNKNOWN_LOOKUP;
struct _WSD_EVENT
{
    HRESULT Hr;
    DWORD EventType;
    WCHAR* DispatchTag;
    WSD_HANDLER_CONTEXT HandlerContext;
    WSD_SOAP_MESSAGE* Soap;
    WSD_OPERATION* Operation;
    IWSDMessageParameters* MessageParameters;
};
#endif
#pragma endregion
