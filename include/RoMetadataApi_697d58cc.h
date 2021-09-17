#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMetaDataDispenser IMetaDataDispenser;
typedef interface IMetaDataDispenserEx IMetaDataDispenserEx;
typedef interface IMetaDataAssemblyImport IMetaDataAssemblyImport;
typedef interface IMetaDataImport IMetaDataImport;
typedef interface IMetaDataImport2 IMetaDataImport2;
typedef interface IMetaDataTables IMetaDataTables;
typedef interface IMetaDataTables2 IMetaDataTables2;
#include "unknwn.h"
#include "oaidl.h"
extern "C"{
typedef __int3264 HCORENUM;
typedef unsigned char COR_SIGNATURE;
typedef COR_SIGNATURE *PCOR_SIGNATURE;
typedef const COR_SIGNATURE *PCCOR_SIGNATURE;
typedef const char *MDUTF8CSTR;
typedef const char *UVCP_CONSTANT;
typedef ULONG32 mdToken;
typedef mdToken mdModule;
typedef mdToken mdTypeRef;
typedef mdToken mdTypeDef;
typedef mdToken mdFieldDef;
typedef mdToken mdMethodDef;
typedef mdToken mdParamDef;
typedef mdToken mdInterfaceImpl;
typedef mdToken mdMemberRef;
typedef mdToken mdCustomAttribute;
typedef mdToken mdPermission;
typedef mdToken mdSignature;
typedef mdToken mdEvent;
typedef mdToken mdProperty;
typedef mdToken mdModuleRef;
typedef mdToken mdAssembly;
typedef mdToken mdAssemblyRef;
typedef mdToken mdFile;
typedef mdToken mdExportedType;
typedef mdToken mdManifestResource;
typedef mdToken mdTypeSpec;
typedef mdToken mdGenericParam;
typedef mdToken mdMethodSpec;
typedef mdToken mdGenericParamConstraint;
typedef mdToken mdString;
typedef struct COR_FIELD_OFFSET
    {
    mdFieldDef ridOfField;
    ULONG32 ulOffset;
    } COR_FIELD_OFFSET;
typedef struct OSINFO
    {
    DWORD dwOSPlatformId;
    DWORD dwOSMajorVersion;
    DWORD dwOSMinorVersion;
    } OSINFO;
typedef struct ASSEMBLYMETADATA
    {
    USHORT usMajorVersion;
    USHORT usMinorVersion;
    USHORT usBuildNumber;
    USHORT usRevisionNumber;
                            LPWSTR szLocale;
    ULONG cbLocale;
                    DWORD *rProcessor;
    ULONG ulProcessor;
                    OSINFO *rOS;
    ULONG ulOS;
    } ASSEMBLYMETADATA;
extern RPC_IF_HANDLE __MIDL_itf_rometadataapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rometadataapi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMetaDataDispenser;
    typedef struct IMetaDataDispenserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMetaDataDispenser * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMetaDataDispenser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMetaDataDispenser * This);
        HRESULT ( STDMETHODCALLTYPE *DefineScope )(
            IMetaDataDispenser * This,
                       REFCLSID rclsid,
                       DWORD dwCreateFlags,
                       REFIID riid,
                                IUnknown **ppIUnk);
        HRESULT ( STDMETHODCALLTYPE *OpenScope )(
            IMetaDataDispenser * This,
                               LPCWSTR szScope,
                       DWORD dwOpenFlags,
                       REFIID riid,
                                IUnknown **ppIUnk);
        HRESULT ( STDMETHODCALLTYPE *OpenScopeOnMemory )(
            IMetaDataDispenser * This,
                                const BYTE *pData,
                       ULONG cbData,
                       DWORD dwOpenFlags,
                       REFIID riid,
                                IUnknown **ppIUnk);
        END_INTERFACE
    } IMetaDataDispenserVtbl;
    interface IMetaDataDispenser
    {
        CONST_VTBL struct IMetaDataDispenserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DefineScope(This,rclsid,dwCreateFlags,riid,ppIUnk) )
    ( (This)->lpVtbl -> OpenScope(This,szScope,dwOpenFlags,riid,ppIUnk) )
    ( (This)->lpVtbl -> OpenScopeOnMemory(This,pData,cbData,dwOpenFlags,riid,ppIUnk) )
EXTERN_C const IID IID_IMetaDataDispenserEx;
    typedef struct IMetaDataDispenserExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMetaDataDispenserEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMetaDataDispenserEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMetaDataDispenserEx * This);
        HRESULT ( STDMETHODCALLTYPE *DefineScope )(
            IMetaDataDispenserEx * This,
                       REFCLSID rclsid,
                       DWORD dwCreateFlags,
                       REFIID riid,
                                IUnknown **ppIUnk);
        HRESULT ( STDMETHODCALLTYPE *OpenScope )(
            IMetaDataDispenserEx * This,
                               LPCWSTR szScope,
                       DWORD dwOpenFlags,
                       REFIID riid,
                                IUnknown **ppIUnk);
        HRESULT ( STDMETHODCALLTYPE *OpenScopeOnMemory )(
            IMetaDataDispenserEx * This,
                                const BYTE *pData,
                       ULONG cbData,
                       DWORD dwOpenFlags,
                       REFIID riid,
                                IUnknown **ppIUnk);
        HRESULT ( STDMETHODCALLTYPE *SetOption )(
            IMetaDataDispenserEx * This,
                       REFGUID optionId,
                       const VARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetOption )(
            IMetaDataDispenserEx * This,
                       REFGUID optionId,
                        VARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *OpenScopeOnITypeInfo )(
            IMetaDataDispenserEx * This,
                       ITypeInfo *pITI,
                       DWORD dwOpenFlags,
                       REFIID riid,
                                IUnknown **ppIUnk);
        HRESULT ( STDMETHODCALLTYPE *GetCORSystemDirectory )(
            IMetaDataDispenserEx * This,
            _Out_writes_to_opt_(cchBuffer, *pchBuffer) LPWSTR szBuffer,
                       DWORD cchBuffer,
                        DWORD *pchBuffer);
        HRESULT ( STDMETHODCALLTYPE *FindAssembly )(
            IMetaDataDispenserEx * This,
                                       LPCWSTR szAppBase,
                                       LPCWSTR szPrivateBin,
                                       LPCWSTR szGlobalBin,
                                       LPCWSTR szAssemblyName,
                                                    LPWSTR szName,
                       ULONG cchName,
                        ULONG *pchName);
        HRESULT ( STDMETHODCALLTYPE *FindAssemblyModule )(
            IMetaDataDispenserEx * This,
                                       LPCWSTR szAppBase,
                                       LPCWSTR szPrivateBin,
                                       LPCWSTR szGlobalBin,
                               LPCWSTR szAssemblyName,
                               LPCWSTR szModuleName,
            _Out_writes_to_opt_(cchName, *pcName) LPWSTR szName,
                       ULONG cchName,
                        ULONG *pcName);
        END_INTERFACE
    } IMetaDataDispenserExVtbl;
    interface IMetaDataDispenserEx
    {
        CONST_VTBL struct IMetaDataDispenserExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DefineScope(This,rclsid,dwCreateFlags,riid,ppIUnk) )
    ( (This)->lpVtbl -> OpenScope(This,szScope,dwOpenFlags,riid,ppIUnk) )
    ( (This)->lpVtbl -> OpenScopeOnMemory(This,pData,cbData,dwOpenFlags,riid,ppIUnk) )
    ( (This)->lpVtbl -> SetOption(This,optionId,pValue) )
    ( (This)->lpVtbl -> GetOption(This,optionId,pValue) )
    ( (This)->lpVtbl -> OpenScopeOnITypeInfo(This,pITI,dwOpenFlags,riid,ppIUnk) )
    ( (This)->lpVtbl -> GetCORSystemDirectory(This,szBuffer,cchBuffer,pchBuffer) )
    ( (This)->lpVtbl -> FindAssembly(This,szAppBase,szPrivateBin,szGlobalBin,szAssemblyName,szName,cchName,pchName) )
    ( (This)->lpVtbl -> FindAssemblyModule(This,szAppBase,szPrivateBin,szGlobalBin,szAssemblyName,szModuleName,szName,cchName,pcName) )
EXTERN_C const IID IID_IMetaDataAssemblyImport;
    typedef struct IMetaDataAssemblyImportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMetaDataAssemblyImport * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMetaDataAssemblyImport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMetaDataAssemblyImport * This);
        HRESULT ( STDMETHODCALLTYPE *GetAssemblyProps )(
            IMetaDataAssemblyImport * This,
                       mdAssembly mda,
                                          const BYTE **ppbPublicKey,
                        ULONG *pcbPublicKey,
                        ULONG *pulHashAlgId,
            _Out_writes_to_opt_(cchName, *pchName) LPWSTR szName,
                       ULONG cchName,
                        ULONG *pchName,
                        ASSEMBLYMETADATA *pMetaData,
                        DWORD *pdwAssemblyFlags);
        HRESULT ( STDMETHODCALLTYPE *GetAssemblyRefProps )(
            IMetaDataAssemblyImport * This,
                       mdAssemblyRef mdar,
                                          const BYTE **ppbPublicKeyOrToken,
                        ULONG *pcbPublicKeyOrToken,
            _Out_writes_to_opt_(cchName, *pchName) LPWSTR szName,
                       ULONG cchName,
                        ULONG *pchName,
                        ASSEMBLYMETADATA *pMetaData,
                                          const BYTE **ppbHashValue,
                        ULONG *pcbHashValue,
                        DWORD *pdwAssemblyRefFlags);
        HRESULT ( STDMETHODCALLTYPE *GetFileProps )(
            IMetaDataAssemblyImport * This,
                       mdFile mdf,
            _Out_writes_to_opt_(cchName, *pchName) LPWSTR szName,
                       ULONG cchName,
                        ULONG *pchName,
                                          const BYTE **ppbHashValue,
                        ULONG *pcbHashValue,
                        DWORD *pdwFileFlags);
        HRESULT ( STDMETHODCALLTYPE *GetExportedTypeProps )(
            IMetaDataAssemblyImport * This,
                       mdExportedType mdct,
            _Out_writes_to_opt_(cchName, *pchName) LPWSTR szName,
                       ULONG cchName,
                        ULONG *pchName,
                        mdToken *ptkImplementation,
                        mdTypeDef *ptkTypeDef,
                        DWORD *pdwExportedTypeFlags);
        HRESULT ( STDMETHODCALLTYPE *GetManifestResourceProps )(
            IMetaDataAssemblyImport * This,
                       mdManifestResource mdmr,
            _Out_writes_to_opt_(cchName, *pchName) LPWSTR szName,
                       ULONG cchName,
                        ULONG *pchName,
                        mdToken *ptkImplementation,
                        DWORD *pdwOffset,
                        DWORD *pdwResourceFlags);
        HRESULT ( STDMETHODCALLTYPE *EnumAssemblyRefs )(
            IMetaDataAssemblyImport * This,
                            HCORENUM *phEnum,
                                            mdAssemblyRef rAssemblyRefs[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumFiles )(
            IMetaDataAssemblyImport * This,
                            HCORENUM *phEnum,
                                            mdFile rFiles[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumExportedTypes )(
            IMetaDataAssemblyImport * This,
                            HCORENUM *phEnum,
                                            mdExportedType rExportedTypes[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumManifestResources )(
            IMetaDataAssemblyImport * This,
                            HCORENUM *phEnum,
                                            mdManifestResource rManifestResources[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *GetAssemblyFromScope )(
            IMetaDataAssemblyImport * This,
                        mdAssembly *ptkAssembly);
        HRESULT ( STDMETHODCALLTYPE *FindExportedTypeByName )(
            IMetaDataAssemblyImport * This,
                               LPCWSTR szName,
                       mdToken mdtExportedType,
                        mdExportedType *ptkExportedType);
        HRESULT ( STDMETHODCALLTYPE *FindManifestResourceByName )(
            IMetaDataAssemblyImport * This,
                               LPCWSTR szName,
                        mdManifestResource *ptkManifestResource);
        void ( STDMETHODCALLTYPE *CloseEnum )(
            IMetaDataAssemblyImport * This,
                       HCORENUM hEnum);
        HRESULT ( STDMETHODCALLTYPE *FindAssembliesByName )(
            IMetaDataAssemblyImport * This,
                                       LPCWSTR szAppBase,
                                       LPCWSTR szPrivateBin,
                               LPCWSTR szAssemblyName,
                                            IUnknown *ppIUnk[ ],
                       ULONG cMax,
                        ULONG *pcAssemblies);
        END_INTERFACE
    } IMetaDataAssemblyImportVtbl;
    interface IMetaDataAssemblyImport
    {
        CONST_VTBL struct IMetaDataAssemblyImportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAssemblyProps(This,mda,ppbPublicKey,pcbPublicKey,pulHashAlgId,szName,cchName,pchName,pMetaData,pdwAssemblyFlags) )
    ( (This)->lpVtbl -> GetAssemblyRefProps(This,mdar,ppbPublicKeyOrToken,pcbPublicKeyOrToken,szName,cchName,pchName,pMetaData,ppbHashValue,pcbHashValue,pdwAssemblyRefFlags) )
    ( (This)->lpVtbl -> GetFileProps(This,mdf,szName,cchName,pchName,ppbHashValue,pcbHashValue,pdwFileFlags) )
    ( (This)->lpVtbl -> GetExportedTypeProps(This,mdct,szName,cchName,pchName,ptkImplementation,ptkTypeDef,pdwExportedTypeFlags) )
    ( (This)->lpVtbl -> GetManifestResourceProps(This,mdmr,szName,cchName,pchName,ptkImplementation,pdwOffset,pdwResourceFlags) )
    ( (This)->lpVtbl -> EnumAssemblyRefs(This,phEnum,rAssemblyRefs,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumFiles(This,phEnum,rFiles,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumExportedTypes(This,phEnum,rExportedTypes,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumManifestResources(This,phEnum,rManifestResources,cMax,pcTokens) )
    ( (This)->lpVtbl -> GetAssemblyFromScope(This,ptkAssembly) )
    ( (This)->lpVtbl -> FindExportedTypeByName(This,szName,mdtExportedType,ptkExportedType) )
    ( (This)->lpVtbl -> FindManifestResourceByName(This,szName,ptkManifestResource) )
    ( (This)->lpVtbl -> CloseEnum(This,hEnum) )
    ( (This)->lpVtbl -> FindAssembliesByName(This,szAppBase,szPrivateBin,szAssemblyName,ppIUnk,cMax,pcAssemblies) )
EXTERN_C const IID IID_IMetaDataImport;
    typedef struct IMetaDataImportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMetaDataImport * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMetaDataImport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMetaDataImport * This);
        void ( STDMETHODCALLTYPE *CloseEnum )(
            IMetaDataImport * This,
                       HCORENUM hEnum);
        HRESULT ( STDMETHODCALLTYPE *CountEnum )(
            IMetaDataImport * This,
                       HCORENUM hEnum,
                                ULONG *pulCount);
        HRESULT ( STDMETHODCALLTYPE *ResetEnum )(
            IMetaDataImport * This,
                       HCORENUM hEnum,
                       ULONG ulPos);
        HRESULT ( STDMETHODCALLTYPE *EnumTypeDefs )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                                            mdTypeDef rgTypeDefs[ ],
                       ULONG cMax,
                                ULONG *pcTypeDefs);
        HRESULT ( STDMETHODCALLTYPE *EnumInterfaceImpls )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                       mdTypeDef td,
                                            mdInterfaceImpl rImpls[ ],
                       ULONG cMax,
                                ULONG *pcImpls);
        HRESULT ( STDMETHODCALLTYPE *EnumTypeRefs )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                                            mdTypeRef rgTypeRefs[ ],
                       ULONG cMax,
                                ULONG *pcTypeRefs);
        HRESULT ( STDMETHODCALLTYPE *FindTypeDefByName )(
            IMetaDataImport * This,
                               LPCWSTR szTypeDef,
                       mdToken tkEnclosingClass,
                                mdTypeDef *ptkTypeDef);
        HRESULT ( STDMETHODCALLTYPE *GetScopeProps )(
            IMetaDataImport * This,
            _Out_writes_to_opt_(cchName, *pchName) LPWSTR szName,
                       ULONG cchName,
                        ULONG *pchName,
                                GUID *pmvid);
        HRESULT ( STDMETHODCALLTYPE *GetModuleFromScope )(
            IMetaDataImport * This,
                        mdModule *ptkModule);
        HRESULT ( STDMETHODCALLTYPE *GetTypeDefProps )(
            IMetaDataImport * This,
                       mdTypeDef tkTypeDef,
            _Out_writes_to_opt_(cchTypeDef, pchTypeDef) LPWSTR szTypeDef,
                       ULONG cchTypeDef,
                        ULONG *pchTypeDef,
                        DWORD *pdwTypeDefFlags,
                        mdToken *ptkExtends);
        HRESULT ( STDMETHODCALLTYPE *GetInterfaceImplProps )(
            IMetaDataImport * This,
                       mdInterfaceImpl tkInterfaceImpl,
                        mdTypeDef *ptkClass,
                        mdToken *ptkIface);
        HRESULT ( STDMETHODCALLTYPE *GetTypeRefProps )(
            IMetaDataImport * This,
                       mdTypeRef tkTypeRef,
                        mdToken *ptkResolutionScope,
            _Out_writes_to_opt_(cchName, *pchName) LPWSTR szName,
                       ULONG cchName,
                        ULONG *pchName);
        HRESULT ( STDMETHODCALLTYPE *ResolveTypeRef )(
            IMetaDataImport * This,
                       mdTypeRef tkTypeRef,
                       REFIID riid,
                                IUnknown **ppIScope,
                                mdTypeDef *ptkTypeDef);
        HRESULT ( STDMETHODCALLTYPE *EnumMembers )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypeDef,
                                            mdToken rgMembers[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumMembersWithName )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypeDef,
                               LPCWSTR szName,
                                            mdToken rgMembers[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumMethods )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypeDef,
                                            mdMethodDef rgMethods[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumMethodsWithName )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypeDef,
                               LPCWSTR szName,
                                            mdMethodDef rgMethods[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumFields )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypeDef,
                                            mdFieldDef rgFields[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumFieldsWithName )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypeDef,
                               LPCWSTR szName,
                                            mdFieldDef rFields[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumParams )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                       mdMethodDef tkMethodDef,
                                            mdParamDef rParams[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumMemberRefs )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                       mdToken tkParent,
                                            mdMemberRef rgMemberRefs[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumMethodImpls )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypeDef,
                                            mdToken rMethodBody[ ],
                                            mdToken rMethodDecl[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumPermissionSets )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                       mdToken tk,
                       DWORD dwActions,
                                            mdPermission rPermission[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *FindMember )(
            IMetaDataImport * This,
                       mdTypeDef tkTypeDef,
                               LPCWSTR szName,
                                PCCOR_SIGNATURE pvSigBlob,
                       ULONG cbSigBlob,
                        mdToken *pmb);
        HRESULT ( STDMETHODCALLTYPE *FindMethod )(
            IMetaDataImport * This,
                       mdTypeDef tkTypeDef,
                               LPCWSTR szName,
                                PCCOR_SIGNATURE pvSigBlob,
                       ULONG cbSigBlob,
                        mdMethodDef *ptkMethodDef);
        HRESULT ( STDMETHODCALLTYPE *FindField )(
            IMetaDataImport * This,
                       mdTypeDef tkTypeDef,
                               LPCWSTR szName,
                                PCCOR_SIGNATURE pvSigBlob,
                       ULONG cbSigBlob,
                        mdFieldDef *ptkFieldDef);
        HRESULT ( STDMETHODCALLTYPE *FindMemberRef )(
            IMetaDataImport * This,
                       mdTypeRef tkTypeRef,
                               LPCWSTR szName,
                                PCCOR_SIGNATURE pvSigBlob,
                       ULONG cbSigBlob,
                        mdMemberRef *pMemberRef);
        HRESULT ( STDMETHODCALLTYPE *GetMethodProps )(
            IMetaDataImport * This,
                       mdMethodDef tkMethodDef,
                        mdTypeDef *ptkClass,
            _Out_writes_to_opt_(cchMethod, *pchMethod) LPWSTR szMethod,
                       ULONG cchMethod,
                        ULONG *pchMethod,
                        DWORD *pdwAttr,
                                          PCCOR_SIGNATURE *ppvSigBlob,
                        ULONG *pcbSigBlob,
                        ULONG *pulCodeRVA,
                        DWORD *pdwImplFlags);
        HRESULT ( STDMETHODCALLTYPE *GetMemberRefProps )(
            IMetaDataImport * This,
                       mdMemberRef tkMemberRef,
                        mdToken *ptk,
            _Out_writes_to_opt_(cchMember, *pchMember) LPWSTR szMember,
                       ULONG cchMember,
                        ULONG *pchMember,
                                          PCCOR_SIGNATURE *ppvSigBlob,
                        ULONG *pcbSigBlob);
        HRESULT ( STDMETHODCALLTYPE *EnumProperties )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypDef,
                                            mdProperty rgProperties[ ],
                       ULONG cMax,
                        ULONG *pcProperties);
        HRESULT ( STDMETHODCALLTYPE *EnumEvents )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypDef,
                                            mdEvent rgEvents[ ],
                       ULONG cMax,
                        ULONG *pcEvents);
        HRESULT ( STDMETHODCALLTYPE *GetEventProps )(
            IMetaDataImport * This,
                       mdEvent tkEvent,
                        mdTypeDef *ptkClass,
                                                    LPWSTR szEvent,
                       ULONG cchEvent,
                        ULONG *pchEvent,
                        DWORD *pdwEventFlags,
                        mdToken *ptkEventType,
                        mdMethodDef *ptkAddOn,
                        mdMethodDef *ptkRemoveOn,
                        mdMethodDef *tkkFire,
                                            mdMethodDef rgOtherMethod[ ],
                       ULONG cMax,
                        ULONG *pcOtherMethod);
        HRESULT ( STDMETHODCALLTYPE *EnumMethodSemantics )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                       mdMethodDef tkMethodDef,
                                            mdToken rgEventProp[ ],
                       ULONG cMax,
                        ULONG *pcEventProp);
        HRESULT ( STDMETHODCALLTYPE *GetMethodSemantics )(
            IMetaDataImport * This,
                       mdMethodDef tkMethodDef,
                       mdToken tkEventProp,
                        DWORD *pdwSemanticsFlags);
        HRESULT ( STDMETHODCALLTYPE *GetClassLayout )(
            IMetaDataImport * This,
                       mdTypeDef tkTypeDef,
                        DWORD *pdwPackSize,
                                            COR_FIELD_OFFSET rgFieldOffset[ ],
                       ULONG cMax,
                        ULONG *pcFieldOffset,
                        ULONG *pulClassSize);
        HRESULT ( STDMETHODCALLTYPE *GetFieldMarshal )(
            IMetaDataImport * This,
                       mdToken tk,
                                          PCCOR_SIGNATURE *ppvNativeType,
                        ULONG *pcbNativeType);
        HRESULT ( STDMETHODCALLTYPE *GetRVA )(
            IMetaDataImport * This,
                       mdToken tk,
                        ULONG *pulCodeRVA,
                        DWORD *pdwImplFlags);
        HRESULT ( STDMETHODCALLTYPE *GetPermissionSetProps )(
            IMetaDataImport * This,
                       mdPermission tk,
                        DWORD *pdwAction,
                                          const BYTE **ppvPermission,
                        ULONG *pcbPermission);
        HRESULT ( STDMETHODCALLTYPE *GetSigFromToken )(
            IMetaDataImport * This,
                       mdSignature tkSignature,
                                          PCCOR_SIGNATURE *ppvSig,
                        ULONG *pcbSig);
        HRESULT ( STDMETHODCALLTYPE *GetModuleRefProps )(
            IMetaDataImport * This,
                       mdModuleRef tkModuleRef,
            _Out_writes_to_opt_(cchName, *pchName) LPWSTR szName,
                       ULONG cchName,
                        ULONG *pchName);
        HRESULT ( STDMETHODCALLTYPE *EnumModuleRefs )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                                            mdModuleRef rgModuleRefs[ ],
                       ULONG cMax,
                        ULONG *pcModuleRefs);
        HRESULT ( STDMETHODCALLTYPE *GetTypeSpecFromToken )(
            IMetaDataImport * This,
                       mdTypeSpec tkTypeSpec,
                                          PCCOR_SIGNATURE *ppvSig,
                        ULONG *pcbSig);
        HRESULT ( STDMETHODCALLTYPE *GetNameFromToken )(
            IMetaDataImport * This,
                       mdToken tk,
                                MDUTF8CSTR *pszUtf8NamePtr);
        HRESULT ( STDMETHODCALLTYPE *EnumUnresolvedMethods )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                                            mdToken rgMethods[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *GetUserString )(
            IMetaDataImport * This,
                       mdString tkString,
            _Out_writes_to_opt_(cchString, *pchString) LPWSTR szString,
                       ULONG cchString,
                        ULONG *pchString);
        HRESULT ( STDMETHODCALLTYPE *GetPinvokeMap )(
            IMetaDataImport * This,
                       mdToken tk,
                        DWORD *pdwMappingFlags,
            _Out_writes_to_opt_(cchImportName, *pchImportName) LPWSTR szImportName,
                       ULONG cchImportName,
                        ULONG *pchImportName,
                        mdModuleRef *ptkImportDLL);
        HRESULT ( STDMETHODCALLTYPE *EnumSignatures )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                                            mdSignature rgSignatures[ ],
                       ULONG cMax,
                        ULONG *pcSignatures);
        HRESULT ( STDMETHODCALLTYPE *EnumTypeSpecs )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                                            mdTypeSpec rgTypeSpecs[ ],
                       ULONG cMax,
                        ULONG *pcTypeSpecs);
        HRESULT ( STDMETHODCALLTYPE *EnumUserStrings )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                                            mdString rgStrings[ ],
                       ULONG cMax,
                        ULONG *pcStrings);
        HRESULT ( STDMETHODCALLTYPE *GetParamForMethodIndex )(
            IMetaDataImport * This,
                       mdMethodDef tkMethodDef,
                       ULONG ulParamSeq,
                        mdParamDef *ptkParamDef);
        HRESULT ( STDMETHODCALLTYPE *EnumCustomAttributes )(
            IMetaDataImport * This,
                            HCORENUM *phEnum,
                       mdToken tk,
                       mdToken tkType,
                                            mdCustomAttribute rgCustomAttributes[ ],
                       ULONG cMax,
                        ULONG *pcCustomAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetCustomAttributeProps )(
            IMetaDataImport * This,
                       mdCustomAttribute cv,
                                mdToken *ptkObj,
                                mdToken *ptkType,
                                                  const BYTE **ppBlob,
                                ULONG *pcbBlob);
        HRESULT ( STDMETHODCALLTYPE *FindTypeRef )(
            IMetaDataImport * This,
                       mdToken tkResolutionScope,
                               LPCWSTR szName,
                        mdTypeRef *tkTypeRef);
        HRESULT ( STDMETHODCALLTYPE *GetMemberProps )(
            IMetaDataImport * This,
                       mdToken tkMember,
                        mdTypeDef *ptkTypeDef,
            _Out_writes_to_opt_(cchMember, *pchMember) LPWSTR szMember,
                       ULONG cchMember,
                        ULONG *pchMember,
                        DWORD *pdwAttr,
                                          PCCOR_SIGNATURE *ppvSigBlob,
                        ULONG *pcbSigBlob,
                        ULONG *pulCodeRVA,
                        DWORD *pdwImplFlags,
                        DWORD *pdwCPlusTypeFlag,
                                          UVCP_CONSTANT *ppValue,
                        ULONG *pcchValue);
        HRESULT ( STDMETHODCALLTYPE *GetFieldProps )(
            IMetaDataImport * This,
                       mdFieldDef tkFieldDef,
                        mdTypeDef *ptkTypeDef,
            _Out_writes_to_opt_(cchField, *pchField) LPWSTR szField,
                       ULONG cchField,
                        ULONG *pchField,
                        DWORD *pdwAttr,
                                          PCCOR_SIGNATURE *ppvSigBlob,
                        ULONG *pcbSigBlob,
                        DWORD *pdwCPlusTypeFlag,
                                          UVCP_CONSTANT *ppValue,
                        ULONG *pcchValue);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyProps )(
            IMetaDataImport * This,
                       mdProperty prop,
                        mdTypeDef *ptkTypeDef,
                                                    LPWSTR szProperty,
                       ULONG cchProperty,
                        ULONG *pchProperty,
                        DWORD *pdwPropFlags,
                                          PCCOR_SIGNATURE *ppvSigBlob,
                        ULONG *pcbSigBlob,
                        DWORD *pdwCPlusTypeFlag,
                                          UVCP_CONSTANT *ppDefaultValue,
                        ULONG *pcchDefaultValue,
                        mdMethodDef *ptkSetter,
                        mdMethodDef *ptkGetter,
                                            mdMethodDef rgOtherMethod[ ],
                       ULONG cMax,
                        ULONG *pcOtherMethod);
        HRESULT ( STDMETHODCALLTYPE *GetParamProps )(
            IMetaDataImport * This,
                       mdParamDef tkParamDef,
                        mdMethodDef *ptkMethodDef,
                        ULONG *pulSequence,
            _Out_writes_to_opt_(cchName, *pchName) LPWSTR szName,
                       ULONG cchName,
                        ULONG *pchName,
                        DWORD *pdwAttr,
                        DWORD *pdwCPlusTypeFlag,
                                          UVCP_CONSTANT *ppValue,
                        ULONG *pcchValue);
        HRESULT ( STDMETHODCALLTYPE *GetCustomAttributeByName )(
            IMetaDataImport * This,
                       mdToken tkObj,
                               LPCWSTR szName,
                                          const BYTE **ppData,
                        ULONG *pcbData);
        BOOL ( STDMETHODCALLTYPE *IsValidToken )(
            IMetaDataImport * This,
                       mdToken tk);
        HRESULT ( STDMETHODCALLTYPE *GetNestedClassProps )(
            IMetaDataImport * This,
                       mdTypeDef tdNestedClass,
                        mdTypeDef *ptdEnclosingClass);
        HRESULT ( STDMETHODCALLTYPE *GetNativeCallConvFromSig )(
            IMetaDataImport * This,
                                const BYTE *pvSig,
                       ULONG cbSig,
                        ULONG *pCallConv);
        HRESULT ( STDMETHODCALLTYPE *IsGlobal )(
            IMetaDataImport * This,
                       mdToken tk,
                        int *pbIsGlobal);
        END_INTERFACE
    } IMetaDataImportVtbl;
    interface IMetaDataImport
    {
        CONST_VTBL struct IMetaDataImportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CloseEnum(This,hEnum) )
    ( (This)->lpVtbl -> CountEnum(This,hEnum,pulCount) )
    ( (This)->lpVtbl -> ResetEnum(This,hEnum,ulPos) )
    ( (This)->lpVtbl -> EnumTypeDefs(This,phEnum,rgTypeDefs,cMax,pcTypeDefs) )
    ( (This)->lpVtbl -> EnumInterfaceImpls(This,phEnum,td,rImpls,cMax,pcImpls) )
    ( (This)->lpVtbl -> EnumTypeRefs(This,phEnum,rgTypeRefs,cMax,pcTypeRefs) )
    ( (This)->lpVtbl -> FindTypeDefByName(This,szTypeDef,tkEnclosingClass,ptkTypeDef) )
    ( (This)->lpVtbl -> GetScopeProps(This,szName,cchName,pchName,pmvid) )
    ( (This)->lpVtbl -> GetModuleFromScope(This,ptkModule) )
    ( (This)->lpVtbl -> GetTypeDefProps(This,tkTypeDef,szTypeDef,cchTypeDef,pchTypeDef,pdwTypeDefFlags,ptkExtends) )
    ( (This)->lpVtbl -> GetInterfaceImplProps(This,tkInterfaceImpl,ptkClass,ptkIface) )
    ( (This)->lpVtbl -> GetTypeRefProps(This,tkTypeRef,ptkResolutionScope,szName,cchName,pchName) )
    ( (This)->lpVtbl -> ResolveTypeRef(This,tkTypeRef,riid,ppIScope,ptkTypeDef) )
    ( (This)->lpVtbl -> EnumMembers(This,phEnum,tkTypeDef,rgMembers,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumMembersWithName(This,phEnum,tkTypeDef,szName,rgMembers,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumMethods(This,phEnum,tkTypeDef,rgMethods,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumMethodsWithName(This,phEnum,tkTypeDef,szName,rgMethods,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumFields(This,phEnum,tkTypeDef,rgFields,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumFieldsWithName(This,phEnum,tkTypeDef,szName,rFields,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumParams(This,phEnum,tkMethodDef,rParams,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumMemberRefs(This,phEnum,tkParent,rgMemberRefs,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumMethodImpls(This,phEnum,tkTypeDef,rMethodBody,rMethodDecl,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumPermissionSets(This,phEnum,tk,dwActions,rPermission,cMax,pcTokens) )
    ( (This)->lpVtbl -> FindMember(This,tkTypeDef,szName,pvSigBlob,cbSigBlob,pmb) )
    ( (This)->lpVtbl -> FindMethod(This,tkTypeDef,szName,pvSigBlob,cbSigBlob,ptkMethodDef) )
    ( (This)->lpVtbl -> FindField(This,tkTypeDef,szName,pvSigBlob,cbSigBlob,ptkFieldDef) )
    ( (This)->lpVtbl -> FindMemberRef(This,tkTypeRef,szName,pvSigBlob,cbSigBlob,pMemberRef) )
    ( (This)->lpVtbl -> GetMethodProps(This,tkMethodDef,ptkClass,szMethod,cchMethod,pchMethod,pdwAttr,ppvSigBlob,pcbSigBlob,pulCodeRVA,pdwImplFlags) )
    ( (This)->lpVtbl -> GetMemberRefProps(This,tkMemberRef,ptk,szMember,cchMember,pchMember,ppvSigBlob,pcbSigBlob) )
    ( (This)->lpVtbl -> EnumProperties(This,phEnum,tkTypDef,rgProperties,cMax,pcProperties) )
    ( (This)->lpVtbl -> EnumEvents(This,phEnum,tkTypDef,rgEvents,cMax,pcEvents) )
    ( (This)->lpVtbl -> GetEventProps(This,tkEvent,ptkClass,szEvent,cchEvent,pchEvent,pdwEventFlags,ptkEventType,ptkAddOn,ptkRemoveOn,tkkFire,rgOtherMethod,cMax,pcOtherMethod) )
    ( (This)->lpVtbl -> EnumMethodSemantics(This,phEnum,tkMethodDef,rgEventProp,cMax,pcEventProp) )
    ( (This)->lpVtbl -> GetMethodSemantics(This,tkMethodDef,tkEventProp,pdwSemanticsFlags) )
    ( (This)->lpVtbl -> GetClassLayout(This,tkTypeDef,pdwPackSize,rgFieldOffset,cMax,pcFieldOffset,pulClassSize) )
    ( (This)->lpVtbl -> GetFieldMarshal(This,tk,ppvNativeType,pcbNativeType) )
    ( (This)->lpVtbl -> GetRVA(This,tk,pulCodeRVA,pdwImplFlags) )
    ( (This)->lpVtbl -> GetPermissionSetProps(This,tk,pdwAction,ppvPermission,pcbPermission) )
    ( (This)->lpVtbl -> GetSigFromToken(This,tkSignature,ppvSig,pcbSig) )
    ( (This)->lpVtbl -> GetModuleRefProps(This,tkModuleRef,szName,cchName,pchName) )
    ( (This)->lpVtbl -> EnumModuleRefs(This,phEnum,rgModuleRefs,cMax,pcModuleRefs) )
    ( (This)->lpVtbl -> GetTypeSpecFromToken(This,tkTypeSpec,ppvSig,pcbSig) )
    ( (This)->lpVtbl -> GetNameFromToken(This,tk,pszUtf8NamePtr) )
    ( (This)->lpVtbl -> EnumUnresolvedMethods(This,phEnum,rgMethods,cMax,pcTokens) )
    ( (This)->lpVtbl -> GetUserString(This,tkString,szString,cchString,pchString) )
    ( (This)->lpVtbl -> GetPinvokeMap(This,tk,pdwMappingFlags,szImportName,cchImportName,pchImportName,ptkImportDLL) )
    ( (This)->lpVtbl -> EnumSignatures(This,phEnum,rgSignatures,cMax,pcSignatures) )
    ( (This)->lpVtbl -> EnumTypeSpecs(This,phEnum,rgTypeSpecs,cMax,pcTypeSpecs) )
    ( (This)->lpVtbl -> EnumUserStrings(This,phEnum,rgStrings,cMax,pcStrings) )
    ( (This)->lpVtbl -> GetParamForMethodIndex(This,tkMethodDef,ulParamSeq,ptkParamDef) )
    ( (This)->lpVtbl -> EnumCustomAttributes(This,phEnum,tk,tkType,rgCustomAttributes,cMax,pcCustomAttributes) )
    ( (This)->lpVtbl -> GetCustomAttributeProps(This,cv,ptkObj,ptkType,ppBlob,pcbBlob) )
    ( (This)->lpVtbl -> FindTypeRef(This,tkResolutionScope,szName,tkTypeRef) )
    ( (This)->lpVtbl -> GetMemberProps(This,tkMember,ptkTypeDef,szMember,cchMember,pchMember,pdwAttr,ppvSigBlob,pcbSigBlob,pulCodeRVA,pdwImplFlags,pdwCPlusTypeFlag,ppValue,pcchValue) )
    ( (This)->lpVtbl -> GetFieldProps(This,tkFieldDef,ptkTypeDef,szField,cchField,pchField,pdwAttr,ppvSigBlob,pcbSigBlob,pdwCPlusTypeFlag,ppValue,pcchValue) )
    ( (This)->lpVtbl -> GetPropertyProps(This,prop,ptkTypeDef,szProperty,cchProperty,pchProperty,pdwPropFlags,ppvSigBlob,pcbSigBlob,pdwCPlusTypeFlag,ppDefaultValue,pcchDefaultValue,ptkSetter,ptkGetter,rgOtherMethod,cMax,pcOtherMethod) )
    ( (This)->lpVtbl -> GetParamProps(This,tkParamDef,ptkMethodDef,pulSequence,szName,cchName,pchName,pdwAttr,pdwCPlusTypeFlag,ppValue,pcchValue) )
    ( (This)->lpVtbl -> GetCustomAttributeByName(This,tkObj,szName,ppData,pcbData) )
    ( (This)->lpVtbl -> IsValidToken(This,tk) )
    ( (This)->lpVtbl -> GetNestedClassProps(This,tdNestedClass,ptdEnclosingClass) )
    ( (This)->lpVtbl -> GetNativeCallConvFromSig(This,pvSig,cbSig,pCallConv) )
    ( (This)->lpVtbl -> IsGlobal(This,tk,pbIsGlobal) )
EXTERN_C const IID IID_IMetaDataImport2;
    typedef struct IMetaDataImport2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMetaDataImport2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMetaDataImport2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMetaDataImport2 * This);
        void ( STDMETHODCALLTYPE *CloseEnum )(
            IMetaDataImport2 * This,
                       HCORENUM hEnum);
        HRESULT ( STDMETHODCALLTYPE *CountEnum )(
            IMetaDataImport2 * This,
                       HCORENUM hEnum,
                                ULONG *pulCount);
        HRESULT ( STDMETHODCALLTYPE *ResetEnum )(
            IMetaDataImport2 * This,
                       HCORENUM hEnum,
                       ULONG ulPos);
        HRESULT ( STDMETHODCALLTYPE *EnumTypeDefs )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                                            mdTypeDef rgTypeDefs[ ],
                       ULONG cMax,
                                ULONG *pcTypeDefs);
        HRESULT ( STDMETHODCALLTYPE *EnumInterfaceImpls )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdTypeDef td,
                                            mdInterfaceImpl rImpls[ ],
                       ULONG cMax,
                                ULONG *pcImpls);
        HRESULT ( STDMETHODCALLTYPE *EnumTypeRefs )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                                            mdTypeRef rgTypeRefs[ ],
                       ULONG cMax,
                                ULONG *pcTypeRefs);
        HRESULT ( STDMETHODCALLTYPE *FindTypeDefByName )(
            IMetaDataImport2 * This,
                               LPCWSTR szTypeDef,
                       mdToken tkEnclosingClass,
                                mdTypeDef *ptkTypeDef);
        HRESULT ( STDMETHODCALLTYPE *GetScopeProps )(
            IMetaDataImport2 * This,
            _Out_writes_to_opt_(cchName, *pchName) LPWSTR szName,
                       ULONG cchName,
                        ULONG *pchName,
                                GUID *pmvid);
        HRESULT ( STDMETHODCALLTYPE *GetModuleFromScope )(
            IMetaDataImport2 * This,
                        mdModule *ptkModule);
        HRESULT ( STDMETHODCALLTYPE *GetTypeDefProps )(
            IMetaDataImport2 * This,
                       mdTypeDef tkTypeDef,
            _Out_writes_to_opt_(cchTypeDef, pchTypeDef) LPWSTR szTypeDef,
                       ULONG cchTypeDef,
                        ULONG *pchTypeDef,
                        DWORD *pdwTypeDefFlags,
                        mdToken *ptkExtends);
        HRESULT ( STDMETHODCALLTYPE *GetInterfaceImplProps )(
            IMetaDataImport2 * This,
                       mdInterfaceImpl tkInterfaceImpl,
                        mdTypeDef *ptkClass,
                        mdToken *ptkIface);
        HRESULT ( STDMETHODCALLTYPE *GetTypeRefProps )(
            IMetaDataImport2 * This,
                       mdTypeRef tkTypeRef,
                        mdToken *ptkResolutionScope,
            _Out_writes_to_opt_(cchName, *pchName) LPWSTR szName,
                       ULONG cchName,
                        ULONG *pchName);
        HRESULT ( STDMETHODCALLTYPE *ResolveTypeRef )(
            IMetaDataImport2 * This,
                       mdTypeRef tkTypeRef,
                       REFIID riid,
                                IUnknown **ppIScope,
                                mdTypeDef *ptkTypeDef);
        HRESULT ( STDMETHODCALLTYPE *EnumMembers )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypeDef,
                                            mdToken rgMembers[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumMembersWithName )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypeDef,
                               LPCWSTR szName,
                                            mdToken rgMembers[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumMethods )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypeDef,
                                            mdMethodDef rgMethods[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumMethodsWithName )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypeDef,
                               LPCWSTR szName,
                                            mdMethodDef rgMethods[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumFields )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypeDef,
                                            mdFieldDef rgFields[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumFieldsWithName )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypeDef,
                               LPCWSTR szName,
                                            mdFieldDef rFields[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumParams )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdMethodDef tkMethodDef,
                                            mdParamDef rParams[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumMemberRefs )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdToken tkParent,
                                            mdMemberRef rgMemberRefs[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumMethodImpls )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypeDef,
                                            mdToken rMethodBody[ ],
                                            mdToken rMethodDecl[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *EnumPermissionSets )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdToken tk,
                       DWORD dwActions,
                                            mdPermission rPermission[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *FindMember )(
            IMetaDataImport2 * This,
                       mdTypeDef tkTypeDef,
                               LPCWSTR szName,
                                PCCOR_SIGNATURE pvSigBlob,
                       ULONG cbSigBlob,
                        mdToken *pmb);
        HRESULT ( STDMETHODCALLTYPE *FindMethod )(
            IMetaDataImport2 * This,
                       mdTypeDef tkTypeDef,
                               LPCWSTR szName,
                                PCCOR_SIGNATURE pvSigBlob,
                       ULONG cbSigBlob,
                        mdMethodDef *ptkMethodDef);
        HRESULT ( STDMETHODCALLTYPE *FindField )(
            IMetaDataImport2 * This,
                       mdTypeDef tkTypeDef,
                               LPCWSTR szName,
                                PCCOR_SIGNATURE pvSigBlob,
                       ULONG cbSigBlob,
                        mdFieldDef *ptkFieldDef);
        HRESULT ( STDMETHODCALLTYPE *FindMemberRef )(
            IMetaDataImport2 * This,
                       mdTypeRef tkTypeRef,
                               LPCWSTR szName,
                                PCCOR_SIGNATURE pvSigBlob,
                       ULONG cbSigBlob,
                        mdMemberRef *pMemberRef);
        HRESULT ( STDMETHODCALLTYPE *GetMethodProps )(
            IMetaDataImport2 * This,
                       mdMethodDef tkMethodDef,
                        mdTypeDef *ptkClass,
            _Out_writes_to_opt_(cchMethod, *pchMethod) LPWSTR szMethod,
                       ULONG cchMethod,
                        ULONG *pchMethod,
                        DWORD *pdwAttr,
                                          PCCOR_SIGNATURE *ppvSigBlob,
                        ULONG *pcbSigBlob,
                        ULONG *pulCodeRVA,
                        DWORD *pdwImplFlags);
        HRESULT ( STDMETHODCALLTYPE *GetMemberRefProps )(
            IMetaDataImport2 * This,
                       mdMemberRef tkMemberRef,
                        mdToken *ptk,
            _Out_writes_to_opt_(cchMember, *pchMember) LPWSTR szMember,
                       ULONG cchMember,
                        ULONG *pchMember,
                                          PCCOR_SIGNATURE *ppvSigBlob,
                        ULONG *pcbSigBlob);
        HRESULT ( STDMETHODCALLTYPE *EnumProperties )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypDef,
                                            mdProperty rgProperties[ ],
                       ULONG cMax,
                        ULONG *pcProperties);
        HRESULT ( STDMETHODCALLTYPE *EnumEvents )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdTypeDef tkTypDef,
                                            mdEvent rgEvents[ ],
                       ULONG cMax,
                        ULONG *pcEvents);
        HRESULT ( STDMETHODCALLTYPE *GetEventProps )(
            IMetaDataImport2 * This,
                       mdEvent tkEvent,
                        mdTypeDef *ptkClass,
                                                    LPWSTR szEvent,
                       ULONG cchEvent,
                        ULONG *pchEvent,
                        DWORD *pdwEventFlags,
                        mdToken *ptkEventType,
                        mdMethodDef *ptkAddOn,
                        mdMethodDef *ptkRemoveOn,
                        mdMethodDef *tkkFire,
                                            mdMethodDef rgOtherMethod[ ],
                       ULONG cMax,
                        ULONG *pcOtherMethod);
        HRESULT ( STDMETHODCALLTYPE *EnumMethodSemantics )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdMethodDef tkMethodDef,
                                            mdToken rgEventProp[ ],
                       ULONG cMax,
                        ULONG *pcEventProp);
        HRESULT ( STDMETHODCALLTYPE *GetMethodSemantics )(
            IMetaDataImport2 * This,
                       mdMethodDef tkMethodDef,
                       mdToken tkEventProp,
                        DWORD *pdwSemanticsFlags);
        HRESULT ( STDMETHODCALLTYPE *GetClassLayout )(
            IMetaDataImport2 * This,
                       mdTypeDef tkTypeDef,
                        DWORD *pdwPackSize,
                                            COR_FIELD_OFFSET rgFieldOffset[ ],
                       ULONG cMax,
                        ULONG *pcFieldOffset,
                        ULONG *pulClassSize);
        HRESULT ( STDMETHODCALLTYPE *GetFieldMarshal )(
            IMetaDataImport2 * This,
                       mdToken tk,
                                          PCCOR_SIGNATURE *ppvNativeType,
                        ULONG *pcbNativeType);
        HRESULT ( STDMETHODCALLTYPE *GetRVA )(
            IMetaDataImport2 * This,
                       mdToken tk,
                        ULONG *pulCodeRVA,
                        DWORD *pdwImplFlags);
        HRESULT ( STDMETHODCALLTYPE *GetPermissionSetProps )(
            IMetaDataImport2 * This,
                       mdPermission tk,
                        DWORD *pdwAction,
                                          const BYTE **ppvPermission,
                        ULONG *pcbPermission);
        HRESULT ( STDMETHODCALLTYPE *GetSigFromToken )(
            IMetaDataImport2 * This,
                       mdSignature tkSignature,
                                          PCCOR_SIGNATURE *ppvSig,
                        ULONG *pcbSig);
        HRESULT ( STDMETHODCALLTYPE *GetModuleRefProps )(
            IMetaDataImport2 * This,
                       mdModuleRef tkModuleRef,
            _Out_writes_to_opt_(cchName, *pchName) LPWSTR szName,
                       ULONG cchName,
                        ULONG *pchName);
        HRESULT ( STDMETHODCALLTYPE *EnumModuleRefs )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                                            mdModuleRef rgModuleRefs[ ],
                       ULONG cMax,
                        ULONG *pcModuleRefs);
        HRESULT ( STDMETHODCALLTYPE *GetTypeSpecFromToken )(
            IMetaDataImport2 * This,
                       mdTypeSpec tkTypeSpec,
                                          PCCOR_SIGNATURE *ppvSig,
                        ULONG *pcbSig);
        HRESULT ( STDMETHODCALLTYPE *GetNameFromToken )(
            IMetaDataImport2 * This,
                       mdToken tk,
                                MDUTF8CSTR *pszUtf8NamePtr);
        HRESULT ( STDMETHODCALLTYPE *EnumUnresolvedMethods )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                                            mdToken rgMethods[ ],
                       ULONG cMax,
                        ULONG *pcTokens);
        HRESULT ( STDMETHODCALLTYPE *GetUserString )(
            IMetaDataImport2 * This,
                       mdString tkString,
            _Out_writes_to_opt_(cchString, *pchString) LPWSTR szString,
                       ULONG cchString,
                        ULONG *pchString);
        HRESULT ( STDMETHODCALLTYPE *GetPinvokeMap )(
            IMetaDataImport2 * This,
                       mdToken tk,
                        DWORD *pdwMappingFlags,
            _Out_writes_to_opt_(cchImportName, *pchImportName) LPWSTR szImportName,
                       ULONG cchImportName,
                        ULONG *pchImportName,
                        mdModuleRef *ptkImportDLL);
        HRESULT ( STDMETHODCALLTYPE *EnumSignatures )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                                            mdSignature rgSignatures[ ],
                       ULONG cMax,
                        ULONG *pcSignatures);
        HRESULT ( STDMETHODCALLTYPE *EnumTypeSpecs )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                                            mdTypeSpec rgTypeSpecs[ ],
                       ULONG cMax,
                        ULONG *pcTypeSpecs);
        HRESULT ( STDMETHODCALLTYPE *EnumUserStrings )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                                            mdString rgStrings[ ],
                       ULONG cMax,
                        ULONG *pcStrings);
        HRESULT ( STDMETHODCALLTYPE *GetParamForMethodIndex )(
            IMetaDataImport2 * This,
                       mdMethodDef tkMethodDef,
                       ULONG ulParamSeq,
                        mdParamDef *ptkParamDef);
        HRESULT ( STDMETHODCALLTYPE *EnumCustomAttributes )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdToken tk,
                       mdToken tkType,
                                            mdCustomAttribute rgCustomAttributes[ ],
                       ULONG cMax,
                        ULONG *pcCustomAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetCustomAttributeProps )(
            IMetaDataImport2 * This,
                       mdCustomAttribute cv,
                                mdToken *ptkObj,
                                mdToken *ptkType,
                                                  const BYTE **ppBlob,
                                ULONG *pcbBlob);
        HRESULT ( STDMETHODCALLTYPE *FindTypeRef )(
            IMetaDataImport2 * This,
                       mdToken tkResolutionScope,
                               LPCWSTR szName,
                        mdTypeRef *tkTypeRef);
        HRESULT ( STDMETHODCALLTYPE *GetMemberProps )(
            IMetaDataImport2 * This,
                       mdToken tkMember,
                        mdTypeDef *ptkTypeDef,
            _Out_writes_to_opt_(cchMember, *pchMember) LPWSTR szMember,
                       ULONG cchMember,
                        ULONG *pchMember,
                        DWORD *pdwAttr,
                                          PCCOR_SIGNATURE *ppvSigBlob,
                        ULONG *pcbSigBlob,
                        ULONG *pulCodeRVA,
                        DWORD *pdwImplFlags,
                        DWORD *pdwCPlusTypeFlag,
                                          UVCP_CONSTANT *ppValue,
                        ULONG *pcchValue);
        HRESULT ( STDMETHODCALLTYPE *GetFieldProps )(
            IMetaDataImport2 * This,
                       mdFieldDef tkFieldDef,
                        mdTypeDef *ptkTypeDef,
            _Out_writes_to_opt_(cchField, *pchField) LPWSTR szField,
                       ULONG cchField,
                        ULONG *pchField,
                        DWORD *pdwAttr,
                                          PCCOR_SIGNATURE *ppvSigBlob,
                        ULONG *pcbSigBlob,
                        DWORD *pdwCPlusTypeFlag,
                                          UVCP_CONSTANT *ppValue,
                        ULONG *pcchValue);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyProps )(
            IMetaDataImport2 * This,
                       mdProperty prop,
                        mdTypeDef *ptkTypeDef,
                                                    LPWSTR szProperty,
                       ULONG cchProperty,
                        ULONG *pchProperty,
                        DWORD *pdwPropFlags,
                                          PCCOR_SIGNATURE *ppvSigBlob,
                        ULONG *pcbSigBlob,
                        DWORD *pdwCPlusTypeFlag,
                                          UVCP_CONSTANT *ppDefaultValue,
                        ULONG *pcchDefaultValue,
                        mdMethodDef *ptkSetter,
                        mdMethodDef *ptkGetter,
                                            mdMethodDef rgOtherMethod[ ],
                       ULONG cMax,
                        ULONG *pcOtherMethod);
        HRESULT ( STDMETHODCALLTYPE *GetParamProps )(
            IMetaDataImport2 * This,
                       mdParamDef tkParamDef,
                        mdMethodDef *ptkMethodDef,
                        ULONG *pulSequence,
            _Out_writes_to_opt_(cchName, *pchName) LPWSTR szName,
                       ULONG cchName,
                        ULONG *pchName,
                        DWORD *pdwAttr,
                        DWORD *pdwCPlusTypeFlag,
                                          UVCP_CONSTANT *ppValue,
                        ULONG *pcchValue);
        HRESULT ( STDMETHODCALLTYPE *GetCustomAttributeByName )(
            IMetaDataImport2 * This,
                       mdToken tkObj,
                               LPCWSTR szName,
                                          const BYTE **ppData,
                        ULONG *pcbData);
        BOOL ( STDMETHODCALLTYPE *IsValidToken )(
            IMetaDataImport2 * This,
                       mdToken tk);
        HRESULT ( STDMETHODCALLTYPE *GetNestedClassProps )(
            IMetaDataImport2 * This,
                       mdTypeDef tdNestedClass,
                        mdTypeDef *ptdEnclosingClass);
        HRESULT ( STDMETHODCALLTYPE *GetNativeCallConvFromSig )(
            IMetaDataImport2 * This,
                                const BYTE *pvSig,
                       ULONG cbSig,
                        ULONG *pCallConv);
        HRESULT ( STDMETHODCALLTYPE *IsGlobal )(
            IMetaDataImport2 * This,
                       mdToken tk,
                        int *pbIsGlobal);
        HRESULT ( STDMETHODCALLTYPE *EnumGenericParams )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdToken tk,
                                            mdGenericParam rGenericParams[ ],
                       ULONG cMax,
                        ULONG *pcGenericParams);
        HRESULT ( STDMETHODCALLTYPE *GetGenericParamProps )(
            IMetaDataImport2 * This,
                       mdGenericParam gp,
                        ULONG *pulParamSeq,
                        DWORD *pdwParamFlags,
                        mdToken *ptOwner,
                        DWORD *reserved,
            _Out_writes_to_opt_(cchName, *pchName) LPWSTR wzname,
                       ULONG cchName,
                        ULONG *pchName);
        HRESULT ( STDMETHODCALLTYPE *GetMethodSpecProps )(
            IMetaDataImport2 * This,
                       mdMethodSpec mi,
                        mdToken *tkParent,
                                          PCCOR_SIGNATURE *ppvSigBlob,
                        ULONG *pcbSigBlob);
        HRESULT ( STDMETHODCALLTYPE *EnumGenericParamConstraints )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdGenericParam tk,
                                            mdGenericParamConstraint rGenericParamConstraints[ ],
                       ULONG cMax,
                        ULONG *pcGenericParamConstraints);
        HRESULT ( STDMETHODCALLTYPE *GetGenericParamConstraintProps )(
            IMetaDataImport2 * This,
                       mdGenericParamConstraint gpc,
                        mdGenericParam *ptGenericParam,
                        mdToken *ptkConstraintType);
        HRESULT ( STDMETHODCALLTYPE *GetPEKind )(
            IMetaDataImport2 * This,
                        DWORD *pdwPEKind,
                        DWORD *pdwMAchine);
        HRESULT ( STDMETHODCALLTYPE *GetVersionString )(
            IMetaDataImport2 * This,
            _Out_writes_to_opt_(cchBufSize, pccBufSize) LPWSTR pwzBuf,
                       DWORD ccBufSize,
                        DWORD *pccBufSize);
        HRESULT ( STDMETHODCALLTYPE *EnumMethodSpecs )(
            IMetaDataImport2 * This,
                            HCORENUM *phEnum,
                       mdToken tk,
                                            mdMethodSpec rMethodSpecs[ ],
                       ULONG cMax,
                        ULONG *pcMethodSpecs);
        END_INTERFACE
    } IMetaDataImport2Vtbl;
    interface IMetaDataImport2
    {
        CONST_VTBL struct IMetaDataImport2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CloseEnum(This,hEnum) )
    ( (This)->lpVtbl -> CountEnum(This,hEnum,pulCount) )
    ( (This)->lpVtbl -> ResetEnum(This,hEnum,ulPos) )
    ( (This)->lpVtbl -> EnumTypeDefs(This,phEnum,rgTypeDefs,cMax,pcTypeDefs) )
    ( (This)->lpVtbl -> EnumInterfaceImpls(This,phEnum,td,rImpls,cMax,pcImpls) )
    ( (This)->lpVtbl -> EnumTypeRefs(This,phEnum,rgTypeRefs,cMax,pcTypeRefs) )
    ( (This)->lpVtbl -> FindTypeDefByName(This,szTypeDef,tkEnclosingClass,ptkTypeDef) )
    ( (This)->lpVtbl -> GetScopeProps(This,szName,cchName,pchName,pmvid) )
    ( (This)->lpVtbl -> GetModuleFromScope(This,ptkModule) )
    ( (This)->lpVtbl -> GetTypeDefProps(This,tkTypeDef,szTypeDef,cchTypeDef,pchTypeDef,pdwTypeDefFlags,ptkExtends) )
    ( (This)->lpVtbl -> GetInterfaceImplProps(This,tkInterfaceImpl,ptkClass,ptkIface) )
    ( (This)->lpVtbl -> GetTypeRefProps(This,tkTypeRef,ptkResolutionScope,szName,cchName,pchName) )
    ( (This)->lpVtbl -> ResolveTypeRef(This,tkTypeRef,riid,ppIScope,ptkTypeDef) )
    ( (This)->lpVtbl -> EnumMembers(This,phEnum,tkTypeDef,rgMembers,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumMembersWithName(This,phEnum,tkTypeDef,szName,rgMembers,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumMethods(This,phEnum,tkTypeDef,rgMethods,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumMethodsWithName(This,phEnum,tkTypeDef,szName,rgMethods,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumFields(This,phEnum,tkTypeDef,rgFields,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumFieldsWithName(This,phEnum,tkTypeDef,szName,rFields,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumParams(This,phEnum,tkMethodDef,rParams,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumMemberRefs(This,phEnum,tkParent,rgMemberRefs,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumMethodImpls(This,phEnum,tkTypeDef,rMethodBody,rMethodDecl,cMax,pcTokens) )
    ( (This)->lpVtbl -> EnumPermissionSets(This,phEnum,tk,dwActions,rPermission,cMax,pcTokens) )
    ( (This)->lpVtbl -> FindMember(This,tkTypeDef,szName,pvSigBlob,cbSigBlob,pmb) )
    ( (This)->lpVtbl -> FindMethod(This,tkTypeDef,szName,pvSigBlob,cbSigBlob,ptkMethodDef) )
    ( (This)->lpVtbl -> FindField(This,tkTypeDef,szName,pvSigBlob,cbSigBlob,ptkFieldDef) )
    ( (This)->lpVtbl -> FindMemberRef(This,tkTypeRef,szName,pvSigBlob,cbSigBlob,pMemberRef) )
    ( (This)->lpVtbl -> GetMethodProps(This,tkMethodDef,ptkClass,szMethod,cchMethod,pchMethod,pdwAttr,ppvSigBlob,pcbSigBlob,pulCodeRVA,pdwImplFlags) )
    ( (This)->lpVtbl -> GetMemberRefProps(This,tkMemberRef,ptk,szMember,cchMember,pchMember,ppvSigBlob,pcbSigBlob) )
    ( (This)->lpVtbl -> EnumProperties(This,phEnum,tkTypDef,rgProperties,cMax,pcProperties) )
    ( (This)->lpVtbl -> EnumEvents(This,phEnum,tkTypDef,rgEvents,cMax,pcEvents) )
    ( (This)->lpVtbl -> GetEventProps(This,tkEvent,ptkClass,szEvent,cchEvent,pchEvent,pdwEventFlags,ptkEventType,ptkAddOn,ptkRemoveOn,tkkFire,rgOtherMethod,cMax,pcOtherMethod) )
    ( (This)->lpVtbl -> EnumMethodSemantics(This,phEnum,tkMethodDef,rgEventProp,cMax,pcEventProp) )
    ( (This)->lpVtbl -> GetMethodSemantics(This,tkMethodDef,tkEventProp,pdwSemanticsFlags) )
    ( (This)->lpVtbl -> GetClassLayout(This,tkTypeDef,pdwPackSize,rgFieldOffset,cMax,pcFieldOffset,pulClassSize) )
    ( (This)->lpVtbl -> GetFieldMarshal(This,tk,ppvNativeType,pcbNativeType) )
    ( (This)->lpVtbl -> GetRVA(This,tk,pulCodeRVA,pdwImplFlags) )
    ( (This)->lpVtbl -> GetPermissionSetProps(This,tk,pdwAction,ppvPermission,pcbPermission) )
    ( (This)->lpVtbl -> GetSigFromToken(This,tkSignature,ppvSig,pcbSig) )
    ( (This)->lpVtbl -> GetModuleRefProps(This,tkModuleRef,szName,cchName,pchName) )
    ( (This)->lpVtbl -> EnumModuleRefs(This,phEnum,rgModuleRefs,cMax,pcModuleRefs) )
    ( (This)->lpVtbl -> GetTypeSpecFromToken(This,tkTypeSpec,ppvSig,pcbSig) )
    ( (This)->lpVtbl -> GetNameFromToken(This,tk,pszUtf8NamePtr) )
    ( (This)->lpVtbl -> EnumUnresolvedMethods(This,phEnum,rgMethods,cMax,pcTokens) )
    ( (This)->lpVtbl -> GetUserString(This,tkString,szString,cchString,pchString) )
    ( (This)->lpVtbl -> GetPinvokeMap(This,tk,pdwMappingFlags,szImportName,cchImportName,pchImportName,ptkImportDLL) )
    ( (This)->lpVtbl -> EnumSignatures(This,phEnum,rgSignatures,cMax,pcSignatures) )
    ( (This)->lpVtbl -> EnumTypeSpecs(This,phEnum,rgTypeSpecs,cMax,pcTypeSpecs) )
    ( (This)->lpVtbl -> EnumUserStrings(This,phEnum,rgStrings,cMax,pcStrings) )
    ( (This)->lpVtbl -> GetParamForMethodIndex(This,tkMethodDef,ulParamSeq,ptkParamDef) )
    ( (This)->lpVtbl -> EnumCustomAttributes(This,phEnum,tk,tkType,rgCustomAttributes,cMax,pcCustomAttributes) )
    ( (This)->lpVtbl -> GetCustomAttributeProps(This,cv,ptkObj,ptkType,ppBlob,pcbBlob) )
    ( (This)->lpVtbl -> FindTypeRef(This,tkResolutionScope,szName,tkTypeRef) )
    ( (This)->lpVtbl -> GetMemberProps(This,tkMember,ptkTypeDef,szMember,cchMember,pchMember,pdwAttr,ppvSigBlob,pcbSigBlob,pulCodeRVA,pdwImplFlags,pdwCPlusTypeFlag,ppValue,pcchValue) )
    ( (This)->lpVtbl -> GetFieldProps(This,tkFieldDef,ptkTypeDef,szField,cchField,pchField,pdwAttr,ppvSigBlob,pcbSigBlob,pdwCPlusTypeFlag,ppValue,pcchValue) )
    ( (This)->lpVtbl -> GetPropertyProps(This,prop,ptkTypeDef,szProperty,cchProperty,pchProperty,pdwPropFlags,ppvSigBlob,pcbSigBlob,pdwCPlusTypeFlag,ppDefaultValue,pcchDefaultValue,ptkSetter,ptkGetter,rgOtherMethod,cMax,pcOtherMethod) )
    ( (This)->lpVtbl -> GetParamProps(This,tkParamDef,ptkMethodDef,pulSequence,szName,cchName,pchName,pdwAttr,pdwCPlusTypeFlag,ppValue,pcchValue) )
    ( (This)->lpVtbl -> GetCustomAttributeByName(This,tkObj,szName,ppData,pcbData) )
    ( (This)->lpVtbl -> IsValidToken(This,tk) )
    ( (This)->lpVtbl -> GetNestedClassProps(This,tdNestedClass,ptdEnclosingClass) )
    ( (This)->lpVtbl -> GetNativeCallConvFromSig(This,pvSig,cbSig,pCallConv) )
    ( (This)->lpVtbl -> IsGlobal(This,tk,pbIsGlobal) )
    ( (This)->lpVtbl -> EnumGenericParams(This,phEnum,tk,rGenericParams,cMax,pcGenericParams) )
    ( (This)->lpVtbl -> GetGenericParamProps(This,gp,pulParamSeq,pdwParamFlags,ptOwner,reserved,wzname,cchName,pchName) )
    ( (This)->lpVtbl -> GetMethodSpecProps(This,mi,tkParent,ppvSigBlob,pcbSigBlob) )
    ( (This)->lpVtbl -> EnumGenericParamConstraints(This,phEnum,tk,rGenericParamConstraints,cMax,pcGenericParamConstraints) )
    ( (This)->lpVtbl -> GetGenericParamConstraintProps(This,gpc,ptGenericParam,ptkConstraintType) )
    ( (This)->lpVtbl -> GetPEKind(This,pdwPEKind,pdwMAchine) )
    ( (This)->lpVtbl -> GetVersionString(This,pwzBuf,ccBufSize,pccBufSize) )
    ( (This)->lpVtbl -> EnumMethodSpecs(This,phEnum,tk,rMethodSpecs,cMax,pcMethodSpecs) )
EXTERN_C const IID IID_IMetaDataTables;
    typedef struct IMetaDataTablesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMetaDataTables * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMetaDataTables * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMetaDataTables * This);
        HRESULT ( STDMETHODCALLTYPE *GetStringHeapSize )(
            IMetaDataTables * This,
                        ULONG *pcbStrings);
        HRESULT ( STDMETHODCALLTYPE *GetBlobHeapSize )(
            IMetaDataTables * This,
                        ULONG *pcbBlobs);
        HRESULT ( STDMETHODCALLTYPE *GetGuidHeapSize )(
            IMetaDataTables * This,
                        ULONG *pcbGuids);
        HRESULT ( STDMETHODCALLTYPE *GetUserStringHeapSize )(
            IMetaDataTables * This,
                        ULONG *pcbUserStrings);
        HRESULT ( STDMETHODCALLTYPE *GetNumTables )(
            IMetaDataTables * This,
                        ULONG *pcTables);
        HRESULT ( STDMETHODCALLTYPE *GetTableIndex )(
            IMetaDataTables * This,
                       ULONG token,
                        ULONG *pixTbl);
        HRESULT ( STDMETHODCALLTYPE *GetTableInfo )(
            IMetaDataTables * This,
                       ULONG ixTbl,
                        ULONG *pcbRow,
                        ULONG *pcRows,
                        ULONG *pcCols,
                        ULONG *piKey,
                                LPCSTR *ppName);
        HRESULT ( STDMETHODCALLTYPE *GetColumnInfo )(
            IMetaDataTables * This,
                       ULONG ixTbl,
                       ULONG ixCol,
                        ULONG *poCol,
                        ULONG *pcbCol,
                        ULONG *pType,
                                LPCSTR *ppName);
        HRESULT ( STDMETHODCALLTYPE *GetCodedTokenInfo )(
            IMetaDataTables * This,
                       ULONG ixCdTkn,
                        ULONG *pcTokens,
                                          const ULONG **ppTokens,
                                LPCSTR *ppName);
        HRESULT ( STDMETHODCALLTYPE *GetRow )(
            IMetaDataTables * This,
                       ULONG ixTbl,
                       ULONG rid,
                        const BYTE *ppRow);
        HRESULT ( STDMETHODCALLTYPE *GetColumn )(
            IMetaDataTables * This,
                       ULONG ixTbl,
                       ULONG ixCol,
                       ULONG rid,
                        ULONG *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            IMetaDataTables * This,
                       ULONG ixString,
                                LPCSTR *ppString);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            IMetaDataTables * This,
                       ULONG ixBlob,
                        ULONG *pcbData,
                                          const BYTE **ppData);
        HRESULT ( STDMETHODCALLTYPE *GetGuid )(
            IMetaDataTables * This,
                       ULONG ixGuid,
                        const GUID **ppGUID);
        HRESULT ( STDMETHODCALLTYPE *GetUserString )(
            IMetaDataTables * This,
                       ULONG ixUserString,
                        ULONG *pcbData,
                                          const BYTE **ppData);
        HRESULT ( STDMETHODCALLTYPE *GetNextString )(
            IMetaDataTables * This,
                       ULONG ixString,
                        ULONG *pNext);
        HRESULT ( STDMETHODCALLTYPE *GetNextBlob )(
            IMetaDataTables * This,
                       ULONG ixBlob,
                        ULONG *pNext);
        HRESULT ( STDMETHODCALLTYPE *GetNextGuid )(
            IMetaDataTables * This,
                       ULONG ixGuid,
                        ULONG *pNext);
        HRESULT ( STDMETHODCALLTYPE *GetNextUserString )(
            IMetaDataTables * This,
                       ULONG ixUserString,
                        ULONG *pNext);
        END_INTERFACE
    } IMetaDataTablesVtbl;
    interface IMetaDataTables
    {
        CONST_VTBL struct IMetaDataTablesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStringHeapSize(This,pcbStrings) )
    ( (This)->lpVtbl -> GetBlobHeapSize(This,pcbBlobs) )
    ( (This)->lpVtbl -> GetGuidHeapSize(This,pcbGuids) )
    ( (This)->lpVtbl -> GetUserStringHeapSize(This,pcbUserStrings) )
    ( (This)->lpVtbl -> GetNumTables(This,pcTables) )
    ( (This)->lpVtbl -> GetTableIndex(This,token,pixTbl) )
    ( (This)->lpVtbl -> GetTableInfo(This,ixTbl,pcbRow,pcRows,pcCols,piKey,ppName) )
    ( (This)->lpVtbl -> GetColumnInfo(This,ixTbl,ixCol,poCol,pcbCol,pType,ppName) )
    ( (This)->lpVtbl -> GetCodedTokenInfo(This,ixCdTkn,pcTokens,ppTokens,ppName) )
    ( (This)->lpVtbl -> GetRow(This,ixTbl,rid,ppRow) )
    ( (This)->lpVtbl -> GetColumn(This,ixTbl,ixCol,rid,pVal) )
    ( (This)->lpVtbl -> GetString(This,ixString,ppString) )
    ( (This)->lpVtbl -> GetBlob(This,ixBlob,pcbData,ppData) )
    ( (This)->lpVtbl -> GetGuid(This,ixGuid,ppGUID) )
    ( (This)->lpVtbl -> GetUserString(This,ixUserString,pcbData,ppData) )
    ( (This)->lpVtbl -> GetNextString(This,ixString,pNext) )
    ( (This)->lpVtbl -> GetNextBlob(This,ixBlob,pNext) )
    ( (This)->lpVtbl -> GetNextGuid(This,ixGuid,pNext) )
    ( (This)->lpVtbl -> GetNextUserString(This,ixUserString,pNext) )
EXTERN_C const IID IID_IMetaDataTables2;
    typedef struct IMetaDataTables2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMetaDataTables2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMetaDataTables2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMetaDataTables2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetStringHeapSize )(
            IMetaDataTables2 * This,
                        ULONG *pcbStrings);
        HRESULT ( STDMETHODCALLTYPE *GetBlobHeapSize )(
            IMetaDataTables2 * This,
                        ULONG *pcbBlobs);
        HRESULT ( STDMETHODCALLTYPE *GetGuidHeapSize )(
            IMetaDataTables2 * This,
                        ULONG *pcbGuids);
        HRESULT ( STDMETHODCALLTYPE *GetUserStringHeapSize )(
            IMetaDataTables2 * This,
                        ULONG *pcbUserStrings);
        HRESULT ( STDMETHODCALLTYPE *GetNumTables )(
            IMetaDataTables2 * This,
                        ULONG *pcTables);
        HRESULT ( STDMETHODCALLTYPE *GetTableIndex )(
            IMetaDataTables2 * This,
                       ULONG token,
                        ULONG *pixTbl);
        HRESULT ( STDMETHODCALLTYPE *GetTableInfo )(
            IMetaDataTables2 * This,
                       ULONG ixTbl,
                        ULONG *pcbRow,
                        ULONG *pcRows,
                        ULONG *pcCols,
                        ULONG *piKey,
                                LPCSTR *ppName);
        HRESULT ( STDMETHODCALLTYPE *GetColumnInfo )(
            IMetaDataTables2 * This,
                       ULONG ixTbl,
                       ULONG ixCol,
                        ULONG *poCol,
                        ULONG *pcbCol,
                        ULONG *pType,
                                LPCSTR *ppName);
        HRESULT ( STDMETHODCALLTYPE *GetCodedTokenInfo )(
            IMetaDataTables2 * This,
                       ULONG ixCdTkn,
                        ULONG *pcTokens,
                                          const ULONG **ppTokens,
                                LPCSTR *ppName);
        HRESULT ( STDMETHODCALLTYPE *GetRow )(
            IMetaDataTables2 * This,
                       ULONG ixTbl,
                       ULONG rid,
                        const BYTE *ppRow);
        HRESULT ( STDMETHODCALLTYPE *GetColumn )(
            IMetaDataTables2 * This,
                       ULONG ixTbl,
                       ULONG ixCol,
                       ULONG rid,
                        ULONG *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            IMetaDataTables2 * This,
                       ULONG ixString,
                                LPCSTR *ppString);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            IMetaDataTables2 * This,
                       ULONG ixBlob,
                        ULONG *pcbData,
                                          const BYTE **ppData);
        HRESULT ( STDMETHODCALLTYPE *GetGuid )(
            IMetaDataTables2 * This,
                       ULONG ixGuid,
                        const GUID **ppGUID);
        HRESULT ( STDMETHODCALLTYPE *GetUserString )(
            IMetaDataTables2 * This,
                       ULONG ixUserString,
                        ULONG *pcbData,
                                          const BYTE **ppData);
        HRESULT ( STDMETHODCALLTYPE *GetNextString )(
            IMetaDataTables2 * This,
                       ULONG ixString,
                        ULONG *pNext);
        HRESULT ( STDMETHODCALLTYPE *GetNextBlob )(
            IMetaDataTables2 * This,
                       ULONG ixBlob,
                        ULONG *pNext);
        HRESULT ( STDMETHODCALLTYPE *GetNextGuid )(
            IMetaDataTables2 * This,
                       ULONG ixGuid,
                        ULONG *pNext);
        HRESULT ( STDMETHODCALLTYPE *GetNextUserString )(
            IMetaDataTables2 * This,
                       ULONG ixUserString,
                        ULONG *pNext);
        HRESULT ( STDMETHODCALLTYPE *GetMetaDataStorage )(
            IMetaDataTables2 * This,
                                          const BYTE **ppvMd,
                        ULONG *pcbMd);
        HRESULT ( STDMETHODCALLTYPE *GetMetaDataStreamInfo )(
            IMetaDataTables2 * This,
                       ULONG ix,
                                LPCSTR *ppchName,
                                          const BYTE **ppv,
                        ULONG *pcb);
        END_INTERFACE
    } IMetaDataTables2Vtbl;
    interface IMetaDataTables2
    {
        CONST_VTBL struct IMetaDataTables2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStringHeapSize(This,pcbStrings) )
    ( (This)->lpVtbl -> GetBlobHeapSize(This,pcbBlobs) )
    ( (This)->lpVtbl -> GetGuidHeapSize(This,pcbGuids) )
    ( (This)->lpVtbl -> GetUserStringHeapSize(This,pcbUserStrings) )
    ( (This)->lpVtbl -> GetNumTables(This,pcTables) )
    ( (This)->lpVtbl -> GetTableIndex(This,token,pixTbl) )
    ( (This)->lpVtbl -> GetTableInfo(This,ixTbl,pcbRow,pcRows,pcCols,piKey,ppName) )
    ( (This)->lpVtbl -> GetColumnInfo(This,ixTbl,ixCol,poCol,pcbCol,pType,ppName) )
    ( (This)->lpVtbl -> GetCodedTokenInfo(This,ixCdTkn,pcTokens,ppTokens,ppName) )
    ( (This)->lpVtbl -> GetRow(This,ixTbl,rid,ppRow) )
    ( (This)->lpVtbl -> GetColumn(This,ixTbl,ixCol,rid,pVal) )
    ( (This)->lpVtbl -> GetString(This,ixString,ppString) )
    ( (This)->lpVtbl -> GetBlob(This,ixBlob,pcbData,ppData) )
    ( (This)->lpVtbl -> GetGuid(This,ixGuid,ppGUID) )
    ( (This)->lpVtbl -> GetUserString(This,ixUserString,pcbData,ppData) )
    ( (This)->lpVtbl -> GetNextString(This,ixString,pNext) )
    ( (This)->lpVtbl -> GetNextBlob(This,ixBlob,pNext) )
    ( (This)->lpVtbl -> GetNextGuid(This,ixGuid,pNext) )
    ( (This)->lpVtbl -> GetNextUserString(This,ixUserString,pNext) )
    ( (This)->lpVtbl -> GetMetaDataStorage(This,ppvMd,pcbMd) )
    ( (This)->lpVtbl -> GetMetaDataStreamInfo(This,ix,ppchName,ppv,pcb) )
extern RPC_IF_HANDLE __MIDL_itf_rometadataapi_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rometadataapi_0000_0007_v0_0_s_ifspec;
}
