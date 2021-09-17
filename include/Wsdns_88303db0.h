       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern WSDXML_NAME Names_Eventing[];
extern WSDXML_NAMESPACE Namespace_Eventing;
extern WSDXML_NAME Names_Addressing[];
extern WSDXML_NAMESPACE Namespace_Addressing;
extern WSDXML_NAME Names_Discovery[];
extern WSDXML_NAMESPACE Namespace_Discovery;
extern WSDXML_NAME Names_Include[];
extern WSDXML_NAMESPACE Namespace_Include;
extern WSDXML_NAME Names_XML[];
extern WSDXML_NAMESPACE Namespace_XML;
extern WSDXML_NAME Names_Devprof[];
extern WSDXML_NAMESPACE Namespace_Devprof;
extern WSDXML_NAME Names_Mex[];
extern WSDXML_NAMESPACE Namespace_Mex;
extern WSDXML_NAME Names_Envelope[];
extern WSDXML_NAMESPACE Namespace_Envelope;
extern WSDXML_NAME Names_Discovery11[];
extern WSDXML_NAMESPACE Namespace_Discovery11;
extern WSDXML_NAMESPACE* WSDNamespaces[9];
extern WSD_OPERATION Operations_mex[1];
extern WSD_PORT_TYPE PortType_mex;
extern WSD_OPERATION Operations_Eventing[4];
extern WSD_PORT_TYPE PortType_Eventing;
extern WSD_OPERATION Operations_EventSink[1];
extern WSD_PORT_TYPE PortType_EventSink;
#endif
#pragma endregion
