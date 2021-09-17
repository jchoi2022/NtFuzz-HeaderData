#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IExtensionValidation IExtensionValidation;
#include "oaidl.h"
#include "ocidl.h"
#include "Mshtml.h"
extern "C"{
       
#pragma comment(lib,"uuid.lib")
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum ExtensionValidationContexts
    {
        ExtensionValidationContextNone = 0,
        ExtensionValidationContextDynamic = 0x1,
        ExtensionValidationContextParsed = 0x2
    } ExtensionValidationContexts;
typedef
enum ExtensionValidationResults
    {
        ExtensionValidationResultNone = 0,
        ExtensionValidationResultDoNotInstantiate = 0x1,
        ExtensionValidationResultArrestPageLoad = 0x2
    } ExtensionValidationResults;
extern RPC_IF_HANDLE __MIDL_itf_extensionvalidation_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_extensionvalidation_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IExtensionValidation;
    typedef struct IExtensionValidationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IExtensionValidation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IExtensionValidation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IExtensionValidation * This);
        HRESULT ( STDMETHODCALLTYPE *Validate )(
            IExtensionValidation * This,
                       REFGUID extensionGuid,
                               LPWSTR extensionModulePath,
                       DWORD extensionFileVersionMS,
                       DWORD extensionFileVersionLS,
                       IHTMLDocument2 *htmlDocumentTop,
                       IHTMLDocument2 *htmlDocumentSubframe,
                       IHTMLElement *htmlElement,
                       ExtensionValidationContexts contexts,
                        ExtensionValidationResults *results);
        HRESULT ( STDMETHODCALLTYPE *DisplayName )(
            IExtensionValidation * This,
                                LPWSTR *displayName);
        END_INTERFACE
    } IExtensionValidationVtbl;
    interface IExtensionValidation
    {
        CONST_VTBL struct IExtensionValidationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Validate(This,extensionGuid,extensionModulePath,extensionFileVersionMS,extensionFileVersionLS,htmlDocumentTop,htmlDocumentSubframe,htmlElement,contexts,results) )
    ( (This)->lpVtbl -> DisplayName(This,displayName) )
EXTERN_C GUID CATID_ExtensionValidation;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_extensionvalidation_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_extensionvalidation_0000_0001_v0_0_s_ifspec;
}
