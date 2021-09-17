#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef class FunctionDiscovery FunctionDiscovery;
typedef class PropertyStore PropertyStore;
typedef class FunctionInstanceCollection FunctionInstanceCollection;
typedef class PropertyStoreCollection PropertyStoreCollection;
#include "oaidl.h"
#include "ocidl.h"
#include "propsys.h"
#include "FunctionDiscoveryAPI.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_functiondiscovery_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_functiondiscovery_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID LIBID_FctnDiscLib;
EXTERN_C const CLSID CLSID_FunctionDiscovery;
class DECLSPEC_UUID("C72BE2EC-8E90-452c-B29A-AB8FF1C071FC")
FunctionDiscovery;
EXTERN_C const CLSID CLSID_PropertyStore;
class DECLSPEC_UUID("e4796550-df61-448b-9193-13fc1341b163")
PropertyStore;
EXTERN_C const CLSID CLSID_FunctionInstanceCollection;
class DECLSPEC_UUID("ba818ce5-b55f-443f-ad39-2fe89be6191f")
FunctionInstanceCollection;
EXTERN_C const CLSID CLSID_PropertyStoreCollection;
class DECLSPEC_UUID("EDD36029-D753-4862-AA5B-5BCCAD2A4D29")
PropertyStoreCollection;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_functiondiscovery_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_functiondiscovery_0000_0001_v0_0_s_ifspec;
}
