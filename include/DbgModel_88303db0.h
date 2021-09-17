#include <winapifamily.h>
#pragma region Desktop Family or WER Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WER)
struct Location
{
    ULONG64 HostDefined;
    ULONG64 Offset;
    Location() :
        HostDefined(0),
        Offset(0)
    {
    }
    Location(ULONG64 virtualAddress) :
        HostDefined(0),
        Offset(virtualAddress)
    {
    }
    Location(const Location& src) :
        HostDefined(src.HostDefined),
        Offset(src.Offset)
    {
    }
    Location& operator=(const Location& src)
    {
        HostDefined = src.HostDefined;
        Offset = src.Offset;
        return *this;
    }
    Location& operator=(ULONG64 virtualAddress)
    {
        HostDefined = 0;
        Offset = virtualAddress;
        return *this;
    }
    bool operator==(const Location& rhs) const
    {
        return (rhs.HostDefined == HostDefined && rhs.Offset == Offset);
    }
    bool operator!=(const Location& rhs) const
    {
        return !(operator==(rhs));
    }
    Location& operator+=(LONG64 offset)
    {
        Offset += offset;
        return *this;
    }
    Location& operator-=(LONG64 offset)
    {
        Offset -= offset;
        return *this;
    }
    Location operator+(LONG64 offset) const
    {
        Location l = *this;
        l += offset;
        return l;
    }
    Location operator-(LONG64 offset) const
    {
        Location l = *this;
        l -= offset;
        return l;
    }
    ULONG64 GetOffset() const
    {
        return Offset;
    }
    bool IsVirtualAddress() const
    {
        return (HostDefined == 0);
    }
};
extern "C" {
DEFINE_GUID(IID_IHostDataModelAccess, 0xf2bce54e, 0x4835, 0x4f8a, 0x83, 0x6e, 0x79, 0x81, 0xe2, 0x99, 0x4, 0xd1);
DEFINE_GUID(IID_IKeyStore, 0xfc7557d, 0x401d, 0x4fca, 0x93, 0x65, 0xda, 0x1e, 0x98, 0x50, 0x69, 0x7c);
DEFINE_GUID(IID_IModelObject, 0xe28c7893, 0x3f4b, 0x4b96, 0xba, 0xca, 0x29, 0x3c, 0xdc, 0x55, 0xf4, 0x5d);
DEFINE_GUID(IID_IDataModelManager, 0x73fe19f4, 0xa110, 0x4500, 0x8e, 0xd9, 0x3c, 0x28, 0x89, 0x6f, 0x50, 0x8c);
DEFINE_GUID(IID_IModelKeyReference, 0x5253dcf8, 0x5aff, 0x4c62, 0xb3, 0x2, 0x56, 0xa2, 0x89, 0xe0, 0x9, 0x98);
DEFINE_GUID(IID_IModelPropertyAccessor, 0x5a0c63d9, 0x526, 0x42b8, 0x96, 0xc, 0x95, 0x16, 0xa3, 0x25, 0x4c, 0x85);
DEFINE_GUID(IID_IModelMethod, 0x80600c1f, 0xb90b, 0x4896, 0x82, 0xad, 0x1c, 0x0, 0x20, 0x79, 0x9, 0xe8);
DEFINE_GUID(IID_IKeyEnumerator, 0x345fa92e, 0x5e00, 0x4319, 0x9c, 0xae, 0x97, 0x1f, 0x76, 0x1, 0xcd, 0xcf);
DEFINE_GUID(IID_IRawEnumerator, 0xe13613f9, 0x3a3c, 0x40b5, 0x8f, 0x48, 0x1e, 0x5e, 0xbf, 0xb9, 0xb2, 0x1b);
DEFINE_GUID(IID_IDataModelConcept, 0xfcb98d1d, 0x1114, 0x4fbf, 0xb2, 0x4c, 0xef, 0xfc, 0xb5, 0xde, 0xf0, 0xd3);
DEFINE_GUID(IID_IStringDisplayableConcept, 0xd28e8d70, 0x6c00, 0x4205, 0x94, 0xd, 0x50, 0x10, 0x16, 0x60, 0x1e, 0xa3);
DEFINE_GUID(IID_IModelIterator, 0xe4622136, 0x927d, 0x4490, 0x87, 0x4f, 0x58, 0x1f, 0x3e, 0x4e, 0x36, 0x88);
DEFINE_GUID(IID_IIterableConcept, 0xf5d49d0c, 0xb02, 0x4301, 0x9c, 0x9b, 0xb3, 0xa6, 0x3, 0x76, 0x28, 0xf3);
DEFINE_GUID(IID_IIndexableConcept, 0xd1fad99f, 0x3f53, 0x4457, 0x85, 0xc, 0x80, 0x51, 0xdf, 0x2d, 0x3f, 0xb5);
DEFINE_GUID(IID_IPreferredRuntimeTypeConcept, 0x9d6c1d7b, 0xa76f, 0x4618, 0x80, 0x68, 0x5f, 0x76, 0xbd, 0x9a, 0x4e, 0x8a);
DEFINE_GUID(IID_IDebugHost, 0xb8c74943, 0x6b2c, 0x4eeb, 0xb5, 0xc5, 0x35, 0xd3, 0x78, 0xa6, 0xd9, 0x9d);
DEFINE_GUID(IID_IDebugHostContext, 0xa68c70d8, 0x5ec0, 0x46e5, 0xb7, 0x75, 0x31, 0x34, 0xa4, 0x8e, 0xa2, 0xe3);
DEFINE_GUID(IID_IDebugHostSymbols, 0x854fd751, 0xc2e1, 0x4eb2, 0xb5, 0x25, 0x66, 0x19, 0xcb, 0x97, 0xa5, 0x88);
DEFINE_GUID(IID_IDebugHostMemory, 0x212149c9, 0x9183, 0x4a3e, 0xb0, 0xe, 0x4f, 0xd1, 0xdc, 0x95, 0x33, 0x9b);
DEFINE_GUID(IID_IDebugHostSymbol, 0xf819103, 0x87de, 0x4e96, 0x82, 0x77, 0xe0, 0x5c, 0xd4, 0x41, 0xfb, 0x22);
DEFINE_GUID(IID_IDebugHostSymbolEnumerator, 0x28d96c86, 0x10a3, 0x4976, 0xb1, 0x4e, 0xea, 0xef, 0x47, 0x90, 0xaa, 0x1f);
DEFINE_GUID(IID_IDebugHostModule, 0xc9ba3e18, 0xd070, 0x4378, 0xbb, 0xd0, 0x34, 0x61, 0x3b, 0x34, 0x6e, 0x1e);
DEFINE_GUID(IID_IDebugHostType, 0xf219b848, 0x63b2, 0x4a43, 0xa6, 0xc9, 0x72, 0xab, 0xf2, 0x5a, 0x97, 0x11);
DEFINE_GUID(IID_IDebugHostConstant, 0x62787edc, 0xfa76, 0x4690, 0xbd, 0x71, 0x5e, 0x8c, 0x3e, 0x29, 0x37, 0xec);
DEFINE_GUID(IID_IDebugHostModuleSignature, 0x31e53a5a, 0x01ee, 0x4bbb, 0xb8, 0x99, 0x4b, 0x46, 0xae, 0x7d, 0x59, 0x5c);
DEFINE_GUID(IID_IDebugHostTypeSignature, 0x3aadc353, 0x2b14, 0x4abb, 0x98, 0x93, 0x5e, 0x3, 0x45, 0x8e, 0x7, 0xee);
DEFINE_GUID(IID_IDebugHostField, 0xe06f6495, 0x16bc, 0x4cc9, 0xb1, 0x1d, 0x2a, 0x6b, 0x23, 0xfa, 0x72, 0xf3);
DEFINE_GUID(IID_IDebugHostData, 0xa3d64993, 0x826c, 0x44fa, 0x89, 0x7d, 0x92, 0x6f, 0x2f, 0xe7, 0xad, 0xb);
DEFINE_GUID(IID_IDebugHostBaseClass, 0xb94d57d2, 0x390b, 0x40f7, 0xb5, 0xb4, 0xb6, 0xdb, 0x89, 0x7d, 0x97, 0x4b);
DEFINE_GUID(IID_IDebugHostErrorSink, 0xc8ff0f0b, 0xfce9, 0x467e, 0x8b, 0xb3, 0x5d, 0x69, 0xef, 0x10, 0x9c, 0x0);
DEFINE_GUID(IID_IDebugHostEvaluator, 0xfef9a21, 0x577e, 0x4997, 0xac, 0x7b, 0x1c, 0x48, 0x83, 0x24, 0x1d, 0x99);
DEFINE_GUID(IID_IDebugHostPublic, 0x6c597ac9, 0xfb4d, 0x4f6d, 0x9f, 0x39, 0x22, 0x48, 0x85, 0x39, 0xf8, 0xf4);
DEFINE_GUID(IID_IDebugHostType2, 0xb28632b9, 0x8506, 0x4676, 0x87, 0xce, 0x8f, 0x7e, 0x5, 0xe5, 0x98, 0x76);
DEFINE_GUID(IID_IDebugHostStatus, 0x4f3e1ce2, 0x86b2, 0x4c7a, 0x9c, 0x65, 0xd0, 0xa9, 0xd0, 0xee, 0xcf, 0x44);
DEFINE_GUID(IID_IDataModelScriptClient, 0x3b362b0e, 0x89f0, 0x46c6, 0xa6, 0x63, 0xdf, 0xdc, 0x95, 0x19, 0x4a, 0xef);
DEFINE_GUID(IID_IDataModelScriptTemplate, 0x1303dec4, 0xfa3b, 0x4f1b, 0x92, 0x24, 0xb9, 0x53, 0xd1, 0x6b, 0xab, 0xb5);
DEFINE_GUID(IID_IDataModelScript, 0x7b4d30fc, 0xb14a, 0x49f8, 0x8d, 0x87, 0xd9, 0xa1, 0x48, 0xc, 0x97, 0xf7);
DEFINE_GUID(IID_IDataModelScriptProvider, 0x513461e0, 0x4fca, 0x48ce, 0x86, 0x58, 0x32, 0xf3, 0xe2, 0x5, 0x6f, 0x3b);
DEFINE_GUID(IID_IDataModelScriptManager, 0x6fd11e33, 0xe5ad, 0x410b, 0x80, 0x11, 0x68, 0xc6, 0xbc, 0x4b, 0xf8, 0xd);
DEFINE_GUID(IID_IDataModelScriptProviderEnumerator, 0x95ba00e2, 0x704a, 0x4fe2, 0xa8, 0xf1, 0xa7, 0xe7, 0xd8, 0xfb, 0x9, 0x41);
DEFINE_GUID(IID_IDebugHostScriptHost, 0xb70334a4, 0xb92c, 0x4570, 0x93, 0xa1, 0xd3, 0xeb, 0x68, 0x66, 0x49, 0xa0);
DEFINE_GUID(IID_IDataModelScriptHostContext, 0x14d366a, 0x1f23, 0x4981, 0x92, 0x19, 0xb2, 0xdb, 0x8b, 0x40, 0x20, 0x54);
DEFINE_GUID(IID_IDataModelNameBinder, 0xaf352b7b, 0x8292, 0x4c01, 0xb3, 0x60, 0x2d, 0xc3, 0x69, 0x6c, 0x65, 0xe7);
DEFINE_GUID(IID_IDynamicKeyProviderConcept, 0xe7983fa1, 0x80a7, 0x498c, 0x98, 0x8f, 0x51, 0x8d, 0xdc, 0x5d, 0x40, 0x25);
DEFINE_GUID(IID_IDynamicConceptProviderConcept, 0x95a7f7dd, 0x602e, 0x483f, 0x9d, 0x6, 0xa1, 0x5c, 0xe, 0xe1, 0x31, 0x74);
DEFINE_GUID(IID_IDataModelScriptTemplateEnumerator, 0x69ce6ae2, 0x2268, 0x4e6f, 0xb0, 0x62, 0x20, 0xce, 0x62, 0xbf, 0xe6, 0x77);
DEFINE_GUID(IID_IModelKeyReference2, 0x80e2f7c5, 0x7159, 0x4e92, 0x88, 0x7e, 0x7e, 0x3, 0x47, 0xe8, 0x84, 0x6);
DEFINE_GUID(IID_IDebugHostSymbol2, 0x21515b67, 0x6720, 0x4257, 0x8a, 0x68, 0x7, 0x7d, 0xc9, 0x44, 0x47, 0x1c);
DEFINE_GUID(IID_IDebugHostEvaluator2, 0xa117a435, 0x1fb4, 0x4092, 0xa2, 0xab, 0xa9, 0x29, 0x57, 0x6c, 0x1e, 0x87);
DEFINE_GUID(IID_IDataModelManager2, 0xf412c5ea, 0x2284, 0x4622, 0xa6, 0x60, 0xa6, 0x97, 0x16, 0xd, 0x33, 0x12);
DEFINE_GUID(IID_IDebugHostMemory2, 0xeea033de, 0x38f6, 0x416b, 0xa2, 0x51, 0x1d, 0x37, 0x71, 0x0, 0x12, 0x70);
DEFINE_GUID(IID_IDebugHostExtensibility, 0x3c2b24e1, 0x11d0, 0x4f86, 0x8a, 0xe5, 0x4d, 0xf1, 0x66, 0xf7, 0x32, 0x53);
DEFINE_GUID(IID_IDataModelScriptDebug, 0xde8e0945, 0x9750, 0x4471, 0xab, 0x76, 0xa8, 0xf7, 0x9d, 0x6e, 0xc3, 0x50);
DEFINE_GUID(IID_IDataModelScriptDebugClient, 0x53159b6d, 0xd4c4, 0x471b, 0xa8, 0x63, 0x5b, 0x11, 0xc, 0xa8, 0x0, 0xca);
DEFINE_GUID(IID_IDataModelScriptDebugStack, 0x51364dd, 0xe449, 0x443e, 0x97, 0x62, 0xfe, 0x57, 0x8f, 0x4a, 0x54, 0x73);
DEFINE_GUID(IID_IDataModelScriptDebugStackFrame, 0xdec6ed5e, 0x6360, 0x4941, 0xab, 0x4c, 0xa2, 0x64, 0x9, 0xde, 0x4f, 0x82);
DEFINE_GUID(IID_IDataModelScriptDebugVariableSetEnumerator, 0xf9feed7, 0xd045, 0x4ac3, 0x98, 0xa8, 0xa9, 0x89, 0x42, 0xcf, 0x6a, 0x35);
DEFINE_GUID(IID_IDataModelScriptDebugBreakpoint, 0x6bb27b35, 0x2e6, 0x47cb, 0x90, 0xa0, 0x53, 0x71, 0x24, 0x40, 0x32, 0xde);
DEFINE_GUID(IID_IDataModelScriptDebugBreakpointEnumerator, 0x39484a75, 0xb4f3, 0x4799, 0x86, 0xda, 0x69, 0x1a, 0xfa, 0x57, 0xb2, 0x99);
DEFINE_GUID(IID_IDataModelScriptDebug2, 0xcbb10ed3, 0x839e, 0x426c, 0x92, 0x43, 0xe2, 0x35, 0x35, 0xc1, 0xae, 0x1a);
DEFINE_GUID(IID_IComparableConcept, 0xa7830646, 0x9f0c, 0x4a31, 0xba, 0x19, 0x50, 0x3f, 0x33, 0xe6, 0xc8, 0xa3);
DEFINE_GUID(IID_IEquatableConcept, 0xc52d5d3d, 0x609d, 0x4d5d, 0x8a, 0x82, 0x46, 0xb0, 0xac, 0xde, 0xc4, 0xf4);
DEFINE_GUID(IID_IDebugHostModule2, 0xb51887e8, 0xbcd0, 0x4e8f, 0xa8, 0xc7, 0x43, 0x43, 0x98, 0xb7, 0x8c, 0x37);
struct DECLSPEC_UUID("F2BCE54E-4835-4f8a-836E-7981E29904D1") IHostDataModelAccess;
struct DECLSPEC_UUID("0FC7557D-401D-4fca-9365-DA1E9850697C") IKeyStore;
struct DECLSPEC_UUID("E28C7893-3F4B-4b96-BACA-293CDC55F45D") IModelObject;
struct DECLSPEC_UUID("73FE19F4-A110-4500-8ED9-3C28896F508C") IDataModelManager;
struct DECLSPEC_UUID("5253DCF8-5AFF-4c62-B302-56A289E00998") IModelKeyReference;
struct DECLSPEC_UUID("5A0C63D9-0526-42b8-960C-9516A3254C85") IModelPropertyAccessor;
struct DECLSPEC_UUID("80600C1F-B90B-4896-82AD-1C00207909E8") IModelMethod;
struct DECLSPEC_UUID("345FA92E-5E00-4319-9CAE-971F7601CDCF") IKeyEnumerator;
struct DECLSPEC_UUID("E13613F9-3A3C-40b5-8F48-1E5EBFB9B21B") IRawEnumerator;
struct DECLSPEC_UUID("FCB98D1D-1114-4fbf-B24C-EFFCB5DEF0D3") IDataModelConcept;
struct DECLSPEC_UUID("D28E8D70-6C00-4205-940D-501016601EA3") IStringDisplayableConcept;
struct DECLSPEC_UUID("E4622136-927D-4490-874F-581F3E4E3688") IModelIterator;
struct DECLSPEC_UUID("F5D49D0C-0B02-4301-9C9B-B3A6037628F3") IIterableConcept;
struct DECLSPEC_UUID("D1FAD99F-3F53-4457-850C-8051DF2D3FB5") IIndexableConcept;
struct DECLSPEC_UUID("9D6C1D7B-A76F-4618-8068-5F76BD9A4E8A") IPreferredRuntimeTypeConcept;
struct DECLSPEC_UUID("B8C74943-6B2C-4eeb-B5C5-35D378A6D99D") IDebugHost;
struct DECLSPEC_UUID("A68C70D8-5EC0-46e5-B775-3134A48EA2E3") IDebugHostContext;
struct DECLSPEC_UUID("854FD751-C2E1-4eb2-B525-6619CB97A588") IDebugHostSymbols;
struct DECLSPEC_UUID("31E53A5A-01EE-4BBB-B899-4B46AE7D595C") IDebugHostModuleSignature;
struct DECLSPEC_UUID("3AADC353-2B14-4abb-9893-5E03458E07EE") IDebugHostTypeSignature;
struct DECLSPEC_UUID("212149C9-9183-4a3e-B00E-4FD1DC95339B") IDebugHostMemory;
struct DECLSPEC_UUID("C8FF0F0B-FCE9-467e-8BB3-5D69EF109C00") IDebugHostErrorSink;
struct DECLSPEC_UUID("0FEF9A21-577E-4997-AC7B-1C4883241D99") IDebugHostEvaluator;
struct DECLSPEC_UUID("28D96C86-10A3-4976-B14E-EAEF4790AA1F") IDebugHostSymbolEnumerator;
struct DECLSPEC_UUID("0F819103-87DE-4e96-8277-E05CD441FB22") IDebugHostSymbol;
struct DECLSPEC_UUID("C9BA3E18-D070-4378-BBD0-34613B346E1E") IDebugHostModule;
struct DECLSPEC_UUID("3AADC353-2B14-4abb-9893-5E03458E07EE") IDebugHostType;
struct DECLSPEC_UUID("62787EDC-FA76-4690-BD71-5E8C3E2937EC") IDebugHostConstant;
struct DECLSPEC_UUID("E06F6495-16BC-4cc9-B11D-2A6B23FA72F3") IDebugHostField;
struct DECLSPEC_UUID("A3D64993-826C-44fa-897D-926F2FE7AD0B") IDebugHostData;
struct DECLSPEC_UUID("B94D57D2-390B-40f7-B5B4-B6DB897D974B") IDebugHostBaseClass;
struct DECLSPEC_UUID("6C597AC9-FB4D-4f6d-9F39-22488539F8F4") IDebugHostPublic;
struct DECLSPEC_UUID("B28632B9-8506-4676-87CE-8F7E05E59876") IDebugHostType2;
struct DECLSPEC_UUID("4F3E1CE2-86B2-4C7A-9C65-D0A9D0EECF44") IDebugHostStatus;
struct DECLSPEC_UUID("3B362B0E-89F0-46c6-A663-DFDC95194AEF") IDataModelScriptClient;
struct DECLSPEC_UUID("1303DEC4-FA3B-4F1B-9224-B953D16BABB5") IDataModelScriptTemplate;
struct DECLSPEC_UUID("7B4D30FC-B14A-49f8-8D87-D9A1480C97F7") IDataModelScript;
struct DECLSPEC_UUID("513461E0-4FCA-48ce-8658-32F3E2056F3B") IDataModelScriptProvider;
struct DECLSPEC_UUID("6FD11E33-E5AD-410b-8011-68C6BC4BF80D") IDataModelScriptManager;
struct DECLSPEC_UUID("95BA00E2-704A-4fe2-A8F1-A7E7D8FB0941") IDataModelScriptProviderEnumerator;
struct DECLSPEC_UUID("B70334A4-B92C-4570-93A1-D3EB686649A0") IDebugHostScriptHost;
struct DECLSPEC_UUID("014D366A-1F23-4981-9219-B2DB8B402054") IDataModelScriptHostContext;
struct DECLSPEC_UUID("AF352B7B-8292-4c01-B360-2DC3696C65E7") IDataModelNameBinder;
struct DECLSPEC_UUID("69CE6AE2-2268-4e6f-B062-20CE62BFE677") IDataModelScriptTemplateEnumerator;
struct DECLSPEC_UUID("E7983FA1-80A7-498c-988F-518DDC5D4025") IDynamicKeyProviderConcept;
struct DECLSPEC_UUID("95A7F7DD-602E-483f-9D06-A15C0EE13174") IDynamicConceptProviderConcept;
struct DECLSPEC_UUID("80E2F7C5-7159-4e92-887E-7E0347E88406") IModelKeyReference2;
struct DECLSPEC_UUID("A117A435-1FB4-4092-A2AB-A929576C1E87") IDebugHostEvaluator2;
struct DECLSPEC_UUID("21515B67-6720-4257-8A68-077DC944471C") IDebugHostSymbol2;
struct DECLSPEC_UUID("F412C5EA-2284-4622-A660-A697160D3312") IDataModelManager2;
struct DECLSPEC_UUID("EEA033DE-38F6-416b-A251-1D3771001270") IDebugHostMemory2;
struct DECLSPEC_UUID("3C2B24E1-11D0-4f86-8AE5-4DF166F73253") IDebugHostExtensibility;
struct DECLSPEC_UUID("DE8E0945-9750-4471-AB76-A8F79D6EC350") IDataModelScriptDebug;
struct DECLSPEC_UUID("53159B6D-D4C4-471b-A863-5B110CA800CA") IDataModelScriptDebugClient;
struct DECLSPEC_UUID("051364DD-E449-443e-9762-FE578F4A5473") IDataModelScriptDebugStack;
struct DECLSPEC_UUID("DEC6ED5E-6360-4941-AB4C-A26409DE4F82") IDataModelScriptDebugStackFrame;
struct DECLSPEC_UUID("0F9FEED7-D045-4ac3-98A8-A98942CF6A35") IDataModelScriptDebugVariableSetEnumerator;
struct DECLSPEC_UUID("6BB27B35-02E6-47cb-90A0-5371244032DE") IDataModelScriptDebugBreakpoint;
struct DECLSPEC_UUID("39484A75-B4F3-4799-86DA-691AFA57B299") IDataModelScriptDebugBreakpointEnumerator;
struct DECLSPEC_UUID("CBB10ED3-839E-426c-9243-E23535C1AE1A") IDataModelScriptDebug2;
struct DECLSPEC_UUID("A7830646-9F0C-4a31-BA19-503F33E6C8A3") IComparableConcept;
struct DECLSPEC_UUID("C52D5D3D-609D-4d5d-8A82-46B0ACDEC4F4") IEquatableConcept;
struct DECLSPEC_UUID("B51887E8-BCD0-4e8f-A8C7-434398B78C37") IDebugHostModule2;
enum ModelObjectKind
{
    ObjectPropertyAccessor,
    ObjectContext,
    ObjectTargetObject,
    ObjectTargetObjectReference,
    ObjectSynthetic,
    ObjectNoValue,
    ObjectError,
    ObjectIntrinsic,
    ObjectMethod,
    ObjectKeyReference,
};
enum SymbolKind
{
    Symbol,
    SymbolModule,
    SymbolType,
    SymbolField,
    SymbolConstant,
    SymbolData,
    SymbolBaseClass,
    SymbolPublic,
    SymbolFunction,
};
enum TypeKind
{
    TypeUDT,
    TypePointer,
    TypeMemberPointer,
    TypeArray,
    TypeFunction,
    TypeTypedef,
    TypeEnum,
    TypeIntrinsic,
    TypeExtendedArray
};
enum IntrinsicKind
{
    IntrinsicVoid,
    IntrinsicBool,
    IntrinsicChar,
    IntrinsicWChar,
    IntrinsicInt,
    IntrinsicUInt,
    IntrinsicLong,
    IntrinsicULong,
    IntrinsicFloat,
    IntrinsicHRESULT,
    IntrinsicChar16,
    IntrinsicChar32
};
enum PointerKind
{
    PointerStandard,
    PointerReference,
    PointerRValueReference,
    PointerCXHat,
    PointerManagedReference
};
enum CallingConventionKind
{
    CallingConventionUnknown,
    CallingConventionCDecl,
    CallingConventionFastCall,
    CallingConventionStdCall,
    CallingConventionSysCall,
    CallingConventionThisCall,
};
enum LocationKind
{
    LocationMember,
    LocationStatic,
    LocationConstant,
    LocationNone,
};
enum PreferredFormat
{
    FormatNone,
    FormatSingleCharacter,
    FormatQuotedString,
    FormatString,
    FormatQuotedUnicodeString,
    FormatUnicodeString,
    FormatQuotedUTF8String,
    FormatUTF8String,
    FormatBSTRString,
    FormatQuotedHString,
    FormatHString,
    FormatRaw,
    FormatEnumNameOnly,
    FormatEscapedStringWithQuote,
    FormatUTF32String,
    FormatQuotedUTF32String
};
DECLARE_INTERFACE_(IHostDataModelAccess, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetDataModel)(
        THIS_
        _COM_Outptr_ IDataModelManager** manager,
        _COM_Outptr_ IDebugHost** host
        ) PURE;
};
DECLARE_INTERFACE_(IKeyStore, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetKey)(
        THIS_
        _In_ PCWSTR key,
        _COM_Errorptr_opt_ IModelObject** object,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
    STDMETHOD(SetKey)(
        THIS_
        _In_ PCWSTR key,
        _In_opt_ IModelObject* object,
        _In_opt_ IKeyStore* metadata
        ) PURE;
    STDMETHOD(GetKeyValue)(
        THIS_
        _In_ PCWSTR key,
        _COM_Errorptr_opt_ IModelObject** object,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
    STDMETHOD(SetKeyValue)(
        THIS_
        _In_ PCWSTR key,
        _In_ IModelObject* object
        ) PURE;
    STDMETHOD(ClearKeys)(
        THIS
        ) PURE;
};
enum RawSearchFlags
{
    RawSearchNone = 0x00000000,
    RawSearchNoBases = 0x00000001,
};
DECLARE_INTERFACE_(IModelObject, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetContext)(
        THIS_
        _COM_Outptr_result_maybenull_ IDebugHostContext** context
        ) PURE;
    STDMETHOD(GetKind)(
        THIS_
        _Out_ ModelObjectKind *kind
        ) PURE;
    STDMETHOD(GetIntrinsicValue)(
        THIS_
        _Out_ VARIANT* intrinsicData
        ) PURE;
    STDMETHOD(GetIntrinsicValueAs)(
        THIS_
        _In_ VARTYPE vt,
        _Out_ VARIANT* intrinsicData
        ) PURE;
    STDMETHOD(GetKeyValue)(
        THIS_
        _In_ PCWSTR key,
        _COM_Errorptr_opt_ IModelObject** object,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
    STDMETHOD(SetKeyValue)(
        THIS_
        _In_ PCWSTR key,
        _In_opt_ IModelObject* object
        ) PURE;
    STDMETHOD(EnumerateKeyValues)(
        THIS_
        _COM_Outptr_ IKeyEnumerator** enumerator
        ) PURE;
    STDMETHOD(GetRawValue)(
        THIS_
        _In_ SymbolKind kind,
        _In_ PCWSTR name,
        _In_ ULONG searchFlags,
        _COM_Errorptr_ IModelObject** object
        ) PURE;
    STDMETHOD(EnumerateRawValues)(
        THIS_
        _In_ SymbolKind kind,
        _In_ ULONG searchFlags,
        _COM_Outptr_ IRawEnumerator** enumerator
        ) PURE;
    STDMETHOD(Dereference)(
        THIS_
        _COM_Errorptr_ IModelObject** object
        ) PURE;
    STDMETHOD(TryCastToRuntimeType)(
        THIS_
        _COM_Errorptr_ IModelObject** runtimeTypedObject
        ) PURE;
    STDMETHOD(GetConcept)(
        THIS_
        _In_ REFIID conceptId,
        _COM_Outptr_ IUnknown** conceptInterface,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** conceptMetadata
        ) PURE;
    STDMETHOD(GetLocation)(
        THIS_
        _Out_ Location* location
        ) PURE;
    STDMETHOD(GetTypeInfo)(
        THIS_
        _Out_ IDebugHostType** type
        ) PURE;
    STDMETHOD(GetTargetInfo)(
        THIS_
        _Out_ Location* location,
        _Out_ IDebugHostType** type
        ) PURE;
    STDMETHOD(GetNumberOfParentModels)(
        _Out_ ULONG64* numModels
        ) PURE;
    STDMETHOD(GetParentModel)(
        _In_ ULONG64 i,
        _COM_Outptr_ IModelObject **model,
        _COM_Outptr_result_maybenull_ IModelObject **contextObject
        ) PURE;
    STDMETHOD(AddParentModel)(
        THIS_
        _In_ IModelObject* model,
        _In_opt_ IModelObject* contextObject,
        _In_ bool override) PURE;
    STDMETHOD(RemoveParentModel)(
        THIS_
        _In_ IModelObject* model
        ) PURE;
    STDMETHOD(GetKey)(
        THIS_
        _In_ PCWSTR key,
        _COM_Errorptr_opt_ IModelObject** object,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
    STDMETHOD(GetKeyReference)(
        THIS_
        _In_ PCWSTR key,
        _COM_Errorptr_opt_ IModelObject** objectReference,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
    STDMETHOD(SetKey)(
        THIS_
        _In_ PCWSTR key,
        _In_opt_ IModelObject* object,
        _In_opt_ IKeyStore* metadata
        ) PURE;
    STDMETHOD(ClearKeys)(
        THIS
        ) PURE;
    STDMETHOD(EnumerateKeys)(
        THIS_
        _COM_Outptr_ IKeyEnumerator** enumerator
        ) PURE;
    STDMETHOD(EnumerateKeyReferences)(
        THIS_
        _COM_Outptr_ IKeyEnumerator** enumerator
        ) PURE;
    STDMETHOD(SetConcept)(
        THIS_
        _In_ REFIID conceptId,
        _In_ IUnknown* conceptInterface,
        _In_opt_ IKeyStore* conceptMetadata
        ) PURE;
    STDMETHOD(ClearConcepts)(
        THIS
        ) PURE;
    STDMETHOD(GetRawReference)(
        THIS_
        _In_ SymbolKind kind,
        _In_ PCWSTR name,
        _In_ ULONG searchFlags,
        _COM_Errorptr_ IModelObject** object
        ) PURE;
    STDMETHOD(EnumerateRawReferences)(
        THIS_
        _In_ SymbolKind kind,
        _In_ ULONG searchFlags,
        _COM_Outptr_ IRawEnumerator** enumerator
        ) PURE;
    STDMETHOD(SetContextForDataModel)(
        THIS_
        _In_ IModelObject* dataModelObject,
        _In_ IUnknown* context
        ) PURE;
    STDMETHOD(GetContextForDataModel)(
        THIS_
        _In_ IModelObject* dataModelObject,
        _Out_ IUnknown** context
        ) PURE;
    STDMETHOD(Compare)(
        THIS_
        _In_ IModelObject* other,
        _COM_Outptr_opt_result_maybenull_ IModelObject **ppResult
        ) PURE;
    STDMETHOD(IsEqualTo)(
        THIS_
        _In_ IModelObject* other,
        _Out_ bool* equal
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelManager, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(Close)(
        THIS
        ) PURE;
    STDMETHOD(CreateNoValue)(
        THIS_
        _Out_ IModelObject** object
        ) PURE;
    STDMETHOD(CreateErrorObject)(
        THIS_
        _In_ HRESULT hrError,
        _In_opt_ PCWSTR pwszMessage,
        _COM_Outptr_ IModelObject** object
        ) PURE;
    STDMETHOD(CreateTypedObject)(
        THIS_
        _In_opt_ IDebugHostContext* context,
        _In_ Location objectLocation,
        _In_ IDebugHostType* objectType,
        _COM_Errorptr_ IModelObject** object
        ) PURE;
    STDMETHOD(CreateTypedObjectReference)(
        THIS_
        _In_opt_ IDebugHostContext* context,
        _In_ Location objectLocation,
        _In_ IDebugHostType* objectType,
        _COM_Errorptr_ IModelObject** object
        ) PURE;
    STDMETHOD(CreateSyntheticObject)(
        THIS_
        _In_opt_ IDebugHostContext* context,
        _COM_Outptr_ IModelObject** object
        ) PURE;
    STDMETHOD(CreateDataModelObject)(
        THIS_
        _In_ IDataModelConcept* dataModel,
        _COM_Outptr_ IModelObject** object
        ) PURE;
    STDMETHOD(CreateIntrinsicObject)(
        THIS_
        _In_ ModelObjectKind objectKind,
        _In_ VARIANT* intrinsicData,
        _COM_Outptr_ IModelObject** object
        ) PURE;
    STDMETHOD(CreateTypedIntrinsicObject)(
        THIS_
        _In_ VARIANT* intrinsicData,
        _In_ IDebugHostType* type,
        _COM_Outptr_ IModelObject** object
        ) PURE;
    STDMETHOD(GetModelForTypeSignature)(
        THIS_
        _In_ IDebugHostTypeSignature* typeSignature,
        _Out_ IModelObject** dataModel
        ) PURE;
    STDMETHOD(GetModelForType)(
        THIS_
        _In_ IDebugHostType* type,
        _COM_Outptr_ IModelObject** dataModel,
        _COM_Outptr_opt_ IDebugHostTypeSignature** typeSignature,
        _COM_Outptr_opt_ IDebugHostSymbolEnumerator** wildcardMatches
        ) PURE;
    STDMETHOD(RegisterModelForTypeSignature)(
        THIS_
        _In_ IDebugHostTypeSignature* typeSignature,
        _In_ IModelObject* dataModel
        ) PURE;
    STDMETHOD(UnregisterModelForTypeSignature)(
        THIS_
        _In_ IModelObject* dataModel,
        _In_opt_ IDebugHostTypeSignature* typeSignature
        ) PURE;
    STDMETHOD(RegisterExtensionForTypeSignature)(
        THIS_
        _In_ IDebugHostTypeSignature* typeSignature,
        _In_ IModelObject* dataModel
        ) PURE;
    STDMETHOD(UnregisterExtensionForTypeSignature)(
        THIS_
        _In_ IModelObject* dataModel,
        _In_opt_ IDebugHostTypeSignature* typeSignature
        ) PURE;
    STDMETHOD(CreateMetadataStore)(
        THIS_
        _In_opt_ IKeyStore* parentStore,
        _COM_Outptr_ IKeyStore** metadataStore
        ) PURE;
    STDMETHOD(GetRootNamespace)(
        THIS_
        _COM_Outptr_ IModelObject** rootNamespace
        ) PURE;
    STDMETHOD(RegisterNamedModel)(
        THIS_
        _In_ PCWSTR modelName,
        _In_ IModelObject *modeObject
        ) PURE;
    STDMETHOD(UnregisterNamedModel)(
        THIS_
        _In_ PCWSTR modelName
        ) PURE;
    STDMETHOD(AcquireNamedModel)(
        THIS_
        _In_ PCWSTR modelName,
        _COM_Outptr_ IModelObject **modelObject
        ) PURE;
};
DECLARE_INTERFACE_(IModelKeyReference, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetKeyName)(
        THIS_
        _Out_ BSTR* keyName
        ) PURE;
    STDMETHOD(GetOriginalObject)(
        THIS_
        _COM_Outptr_ IModelObject** originalObject
        ) PURE;
    STDMETHOD(GetContextObject)(
        THIS_
        _COM_Outptr_ IModelObject** containingObject
        ) PURE;
    STDMETHOD(GetKey)(
        THIS_
        _COM_Errorptr_opt_ IModelObject** object,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
    STDMETHOD(GetKeyValue)(
        THIS_
        _COM_Errorptr_opt_ IModelObject** object,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
    STDMETHOD(SetKey)(
        THIS_
        _In_opt_ IModelObject* object,
        _In_opt_ IKeyStore* metadata
        ) PURE;
    STDMETHOD(SetKeyValue)(
        THIS_
        _In_ IModelObject* object
        ) PURE;
};
DECLARE_INTERFACE_(IModelPropertyAccessor, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetValue)(
        THIS_
        _In_ PCWSTR key,
        _In_opt_ IModelObject* contextObject,
        _COM_Outptr_ IModelObject** value
        ) PURE;
    STDMETHOD(SetValue)(
        THIS_
        _In_ PCWSTR key,
        _In_opt_ IModelObject* contextObject,
        _In_ IModelObject* value
        ) PURE;
};
DECLARE_INTERFACE_(IModelMethod, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(Call)(
        THIS_
        _In_opt_ IModelObject *pContextObject,
        _In_ ULONG64 argCount,
        _In_reads_(argCount) IModelObject **ppArguments,
        _COM_Errorptr_ IModelObject **ppResult,
        _COM_Outptr_opt_result_maybenull_ IKeyStore **ppMetadata
        ) PURE;
};
DECLARE_INTERFACE_(IKeyEnumerator, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(Reset)(
        THIS
        ) PURE;
    STDMETHOD(GetNext)(
        _Out_ BSTR* key,
        _COM_Errorptr_opt_ IModelObject** value,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
};
DECLARE_INTERFACE_(IRawEnumerator, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(Reset)(
        THIS
        ) PURE;
    STDMETHOD(GetNext)(
        _Out_opt_ BSTR* name,
        _Out_opt_ SymbolKind *kind,
        _COM_Errorptr_opt_ IModelObject** value
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelConcept, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(InitializeObject)(
        THIS_
        _In_ IModelObject* modelObject,
        _In_opt_ IDebugHostTypeSignature* matchingTypeSignature,
        _In_opt_ IDebugHostSymbolEnumerator* wildcardMatches
        ) PURE;
    STDMETHOD(GetName)(
        THIS_
        _Out_ BSTR* modelName
        ) PURE;
};
DECLARE_INTERFACE_(IStringDisplayableConcept, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(ToDisplayString)(
        THIS_
        _In_ IModelObject* contextObject,
        _In_opt_ IKeyStore* metadata,
        _Out_ BSTR* displayString
        ) PURE;
};
DECLARE_INTERFACE_(IModelIterator, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(Reset)(
        THIS
        ) PURE;
    STDMETHOD(GetNext)(
        _COM_Errorptr_ IModelObject** object,
        _In_ ULONG64 dimensions,
        _Out_writes_opt_(dimensions) IModelObject** indexers,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
};
DECLARE_INTERFACE_(IIterableConcept, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetDefaultIndexDimensionality)(
        THIS_
        _In_ IModelObject* contextObject,
        _Out_ ULONG64* dimensionality
        ) PURE;
    STDMETHOD(GetIterator)(
        THIS_
        _In_ IModelObject* contextObject,
        _Out_ IModelIterator** iterator
        ) PURE;
};
DECLARE_INTERFACE_(IIndexableConcept, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetDimensionality)(
        THIS_
        _In_ IModelObject* contextObject,
        _Out_ ULONG64* dimensionality
        ) PURE;
    STDMETHOD(GetAt)(
        THIS_
        _In_ IModelObject* contextObject,
        _In_ ULONG64 indexerCount,
        _In_reads_(indexerCount) IModelObject** indexers,
        _COM_Errorptr_ IModelObject** object,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
    STDMETHOD(SetAt)(
        THIS_
        _In_ IModelObject* contextObject,
        _In_ ULONG64 indexerCount,
        _In_reads_(indexerCount) IModelObject** indexers,
        _In_ IModelObject *value
        ) PURE;
};
DECLARE_INTERFACE_(IPreferredRuntimeTypeConcept, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(CastToPreferredRuntimeType)(
        THIS_
        _In_ IModelObject* contextObject,
        _COM_Errorptr_ IModelObject** object
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHost, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetHostDefinedInterface)(
        THIS_
        _COM_Outptr_ IUnknown** hostUnk
        ) PURE;
    STDMETHOD(GetCurrentContext)(
        THIS_
        _COM_Outptr_ IDebugHostContext** context
        ) PURE;
    STDMETHOD(GetDefaultMetadata)(
        THIS_
        _COM_Outptr_ IKeyStore** defaultMetadataStore
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostContext, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(IsEqualTo)(
        THIS_
        _In_ IDebugHostContext *pContext,
        _Out_ bool *pIsEqual
        ) PURE;
};
enum ErrorClass
{
    ErrorClassWarning,
    ErrorClassError
};
DECLARE_INTERFACE_(IDebugHostErrorSink, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(ReportError)(
        THIS_
        _In_ ErrorClass errClass,
        _In_ HRESULT hrError,
        _In_ PCWSTR message
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostSymbol, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetContext)(
        THIS_
        _COM_Outptr_ IDebugHostContext** context
        ) PURE;
    STDMETHOD(EnumerateChildren)(
        THIS_
        _In_ SymbolKind kind,
        _In_opt_z_ PCWSTR name,
        _Out_ IDebugHostSymbolEnumerator **ppEnum
        ) PURE;
    STDMETHOD(GetSymbolKind)(
        THIS_
        _Out_ SymbolKind *kind
        ) PURE;
    STDMETHOD(GetName)(
        THIS_
        _Out_ BSTR* symbolName
        ) PURE;
    STDMETHOD(GetType)(
        THIS_
        _Out_ IDebugHostType** type
        ) PURE;
    STDMETHOD(GetContainingModule)(
        THIS_
        _Out_ IDebugHostModule **containingModule
        ) PURE;
    STDMETHOD(CompareAgainst)(
        THIS_
        _In_ IDebugHostSymbol *pComparisonSymbol,
        _In_ ULONG comparisonFlags,
        _Out_ bool *pMatches
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostSymbolEnumerator, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(Reset)(
        THIS
        ) PURE;
    STDMETHOD(GetNext)(
        THIS_
        _COM_Outptr_ IDebugHostSymbol** symbol
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostModule, IDebugHostSymbol)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetContext)(
        THIS_
        _COM_Outptr_ IDebugHostContext** context
        ) PURE;
    STDMETHOD(EnumerateChildren)(
        THIS_
        _In_ SymbolKind kind,
        _In_opt_z_ PCWSTR name,
        _Out_ IDebugHostSymbolEnumerator **ppEnum
        ) PURE;
    STDMETHOD(GetSymbolKind)(
        THIS_
        _Out_ SymbolKind *kind
        ) PURE;
    STDMETHOD(GetName)(
        THIS_
        _Out_ BSTR* symbolName
        ) PURE;
    STDMETHOD(GetType)(
        THIS_
        _Out_ IDebugHostType** type
        ) PURE;
    STDMETHOD(GetContainingModule)(
        THIS_
        _Out_ IDebugHostModule **containingModule
        ) PURE;
    STDMETHOD(GetImageName)(
        THIS_
        _In_ bool allowPath,
        _Out_ BSTR* imageName
        ) PURE;
    STDMETHOD(GetBaseLocation)(
        THIS_
        _Out_ Location* moduleBaseLocation
        ) PURE;
    STDMETHOD(GetVersion)(
        THIS_
        _Out_opt_ ULONG64* fileVersion,
        _Out_opt_ ULONG64* productVersion
        ) PURE;
    STDMETHOD(FindTypeByName)(
        THIS_
        _In_z_ PCWSTR typeName,
        _Out_ IDebugHostType** type
        ) PURE;
    STDMETHOD(FindSymbolByRVA)(
        THIS_
        _In_ ULONG64 rva,
        _Out_ IDebugHostSymbol** symbol
        ) PURE;
    STDMETHOD(FindSymbolByName)(
        THIS_
        _In_z_ PCWSTR symbolName,
        _Out_ IDebugHostSymbol** symbol
        ) PURE;
};
struct ArrayDimension
{
    LONG64 LowerBound;
    ULONG64 Length;
    ULONG64 Stride;
};
DECLARE_INTERFACE_(IDebugHostType, IDebugHostSymbol)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetContext)(
        THIS_
        _COM_Outptr_ IDebugHostContext** context
        ) PURE;
    STDMETHOD(EnumerateChildren)(
        THIS_
        _In_ SymbolKind kind,
        _In_opt_z_ PCWSTR name,
        _Out_ IDebugHostSymbolEnumerator **ppEnum
        ) PURE;
    STDMETHOD(GetSymbolKind)(
        THIS_
        _Out_ SymbolKind *kind
        ) PURE;
    STDMETHOD(GetName)(
        THIS_
        _Out_ BSTR* symbolName
        ) PURE;
    STDMETHOD(GetType)(
        THIS_
        _Out_ IDebugHostType** type
        ) PURE;
    STDMETHOD(GetContainingModule)(
        THIS_
        _Out_ IDebugHostModule **containingModule
        ) PURE;
    STDMETHOD(GetTypeKind)(
        THIS_
        _Out_ TypeKind *kind
        ) PURE;
    STDMETHOD(GetSize)(
        THIS_
        _Out_ ULONG64* size
        ) PURE;
    STDMETHOD(GetBaseType)(
        THIS_
        _Out_ IDebugHostType** baseType
        ) PURE;
    STDMETHOD(GetHashCode)(
        THIS_
        _Out_ ULONG* hashCode
        ) PURE;
    STDMETHOD(GetIntrinsicType)(
        THIS_
        _Out_opt_ IntrinsicKind *intrinsicKind,
        _Out_opt_ VARTYPE *carrierType
        ) PURE;
    STDMETHOD(GetBitField)(
        THIS_
        _Out_ ULONG* lsbOfField,
        _Out_ ULONG* lengthOfField
        ) PURE;
    STDMETHOD(GetPointerKind)(
        THIS_
        _Out_ PointerKind* pointerKind
        ) PURE;
    STDMETHOD(GetMemberType)(
        THIS_
        _Out_ IDebugHostType** memberType
        ) PURE;
    STDMETHOD(CreatePointerTo)(
        THIS_
        _In_ PointerKind kind,
        _COM_Outptr_ IDebugHostType** newType
        ) PURE;
    STDMETHOD(GetArrayDimensionality)(
        THIS_
        _Out_ ULONG64* arrayDimensionality
        ) PURE;
    STDMETHOD(GetArrayDimensions)(
        THIS_
        _In_ ULONG64 dimensions,
        _Out_writes_(dimensions) ArrayDimension *pDimensions
        ) PURE;
    STDMETHOD(CreateArrayOf)(
        THIS_
        _In_ ULONG64 dimensions,
        _In_reads_(dimensions) ArrayDimension *pDimensions,
        _COM_Outptr_ IDebugHostType** newType
        ) PURE;
    STDMETHOD(GetFunctionCallingConvention)(
        THIS_
        _Out_ CallingConventionKind* conventionKind
        ) PURE;
    STDMETHOD(GetFunctionReturnType)(
        THIS_
        _COM_Outptr_ IDebugHostType** returnType
        ) PURE;
    STDMETHOD(GetFunctionParameterTypeCount)(
        THIS_
        _Out_ ULONG64* count
        ) PURE;
    STDMETHOD(GetFunctionParameterTypeAt)(
        THIS_
        _In_ ULONG64 i,
        _Out_ IDebugHostType** parameterType
        ) PURE;
    STDMETHOD(IsGeneric)(
        THIS_
        _Out_ bool* isGeneric
        ) PURE;
    STDMETHOD(GetGenericArgumentCount)(
        THIS_
        _Out_ ULONG64* argCount
        ) PURE;
    STDMETHOD(GetGenericArgumentAt)(
        THIS_
        _In_ ULONG64 i,
        _Out_ IDebugHostSymbol** argument
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostConstant, IDebugHostSymbol)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetContext)(
        THIS_
        _COM_Outptr_ IDebugHostContext** context
        ) PURE;
    STDMETHOD(EnumerateChildren)(
        THIS_
        _In_ SymbolKind kind,
        _In_opt_z_ PCWSTR name,
        _Out_ IDebugHostSymbolEnumerator **ppEnum
        ) PURE;
    STDMETHOD(GetSymbolKind)(
        THIS_
        _Out_ SymbolKind *kind
        ) PURE;
    STDMETHOD(GetName)(
        THIS_
        _Out_ BSTR* symbolName
        ) PURE;
    STDMETHOD(GetType)(
        THIS_
        _Out_ IDebugHostType** type
        ) PURE;
    STDMETHOD(GetContainingModule)(
        THIS_
        _Out_ IDebugHostModule **containingModule
        ) PURE;
    STDMETHOD(GetValue)(
        THIS_
        _Out_ VARIANT* value
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostField, IDebugHostSymbol)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetContext)(
        THIS_
        _COM_Outptr_ IDebugHostContext** context
        ) PURE;
    STDMETHOD(EnumerateChildren)(
        THIS_
        _In_ SymbolKind kind,
        _In_opt_z_ PCWSTR name,
        _Out_ IDebugHostSymbolEnumerator **ppEnum
        ) PURE;
    STDMETHOD(GetSymbolKind)(
        THIS_
        _Out_ SymbolKind *kind
        ) PURE;
    STDMETHOD(GetName)(
        THIS_
        _Out_ BSTR* symbolName
        ) PURE;
    STDMETHOD(GetType)(
        THIS_
        _Out_ IDebugHostType** type
        ) PURE;
    STDMETHOD(GetContainingModule)(
        THIS_
        _Out_ IDebugHostModule **containingModule
        ) PURE;
    STDMETHOD(GetLocationKind)(
        THIS_
        _Out_ LocationKind *locationKind
        ) PURE;
    STDMETHOD(GetOffset)(
        THIS_
        _Out_ ULONG64* offset
        ) PURE;
    STDMETHOD(GetLocation)(
        THIS_
        _Out_ Location* location
        ) PURE;
    STDMETHOD(GetValue)(
        THIS_
        _Out_ VARIANT* value
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostData, IDebugHostSymbol)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetContext)(
        THIS_
        _COM_Outptr_ IDebugHostContext** context
        ) PURE;
    STDMETHOD(EnumerateChildren)(
        THIS_
        _In_ SymbolKind kind,
        _In_opt_z_ PCWSTR name,
        _Out_ IDebugHostSymbolEnumerator **ppEnum
        ) PURE;
    STDMETHOD(GetSymbolKind)(
        THIS_
        _Out_ SymbolKind *kind
        ) PURE;
    STDMETHOD(GetName)(
        THIS_
        _Out_ BSTR* symbolName
        ) PURE;
    STDMETHOD(GetType)(
        THIS_
        _Out_ IDebugHostType** type
        ) PURE;
    STDMETHOD(GetContainingModule)(
        THIS_
        _Out_ IDebugHostModule **containingModule
        ) PURE;
    STDMETHOD(GetLocationKind)(
        THIS_
        _Out_ LocationKind *locationKind
        ) PURE;
    STDMETHOD(GetLocation)(
        THIS_
        _Out_ Location* location
        ) PURE;
    STDMETHOD(GetValue)(
        THIS_
        _Out_ VARIANT* value
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostPublic, IDebugHostSymbol)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetContext)(
        THIS_
        _COM_Outptr_ IDebugHostContext** context
        ) PURE;
    STDMETHOD(EnumerateChildren)(
        THIS_
        _In_ SymbolKind kind,
        _In_opt_z_ PCWSTR name,
        _Out_ IDebugHostSymbolEnumerator **ppEnum
        ) PURE;
    STDMETHOD(GetSymbolKind)(
        THIS_
        _Out_ SymbolKind *kind
        ) PURE;
    STDMETHOD(GetName)(
        THIS_
        _Out_ BSTR* symbolName
        ) PURE;
    STDMETHOD(GetType)(
        THIS_
        _Out_ IDebugHostType** type
        ) PURE;
    STDMETHOD(GetContainingModule)(
        THIS_
        _Out_ IDebugHostModule **containingModule
        ) PURE;
    STDMETHOD(GetLocationKind)(
        THIS_
        _Out_ LocationKind *locationKind
        ) PURE;
    STDMETHOD(GetLocation)(
        THIS_
        _Out_ Location* location
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostBaseClass, IDebugHostSymbol)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetContext)(
        THIS_
        _COM_Outptr_ IDebugHostContext** context
        ) PURE;
    STDMETHOD(EnumerateChildren)(
        THIS_
        _In_ SymbolKind kind,
        _In_opt_z_ PCWSTR name,
        _Out_ IDebugHostSymbolEnumerator **ppEnum
        ) PURE;
    STDMETHOD(GetSymbolKind)(
        THIS_
        _Out_ SymbolKind *kind
        ) PURE;
    STDMETHOD(GetName)(
        THIS_
        _Out_ BSTR* symbolName
        ) PURE;
    STDMETHOD(GetType)(
        THIS_
        _Out_ IDebugHostType** type
        ) PURE;
    STDMETHOD(GetContainingModule)(
        THIS_
        _Out_ IDebugHostModule **containingModule
        ) PURE;
    STDMETHOD(GetOffset)(
        THIS_
        _Out_ ULONG64* offset
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostSymbols, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(CreateModuleSignature)(
        THIS_
        _In_z_ PCWSTR pwszModuleName,
        _In_opt_z_ PCWSTR pwszMinVersion,
        _In_opt_z_ PCWSTR pwszMaxVersion,
        _Out_ IDebugHostModuleSignature** ppModuleSignature
        ) PURE;
    STDMETHOD(CreateTypeSignature)(
        THIS_
        _In_z_ PCWSTR signatureSpecification,
        _In_opt_ IDebugHostModule* module,
        _Out_ IDebugHostTypeSignature** typeSignature
        ) PURE;
    STDMETHOD(CreateTypeSignatureForModuleRange)(
        THIS_
        _In_z_ PCWSTR signatureSpecification,
        _In_z_ PCWSTR moduleName,
        _In_opt_z_ PCWSTR minVersion,
        _In_opt_z_ PCWSTR maxVersion,
        _Out_ IDebugHostTypeSignature** typeSignature
        ) PURE;
    STDMETHOD(EnumerateModules)(
        THIS_
        _In_ IDebugHostContext* context,
        _COM_Outptr_ IDebugHostSymbolEnumerator** moduleEnum
        ) PURE;
    STDMETHOD(FindModuleByName)(
        THIS_
        _In_ IDebugHostContext* context,
        _In_z_ PCWSTR moduleName,
        _COM_Outptr_ IDebugHostModule **module
        ) PURE;
    STDMETHOD(FindModuleByLocation)(
        THIS_
        _In_ IDebugHostContext* context,
        _In_ Location moduleLocation,
        _COM_Outptr_ IDebugHostModule **module
        ) PURE;
    STDMETHOD(GetMostDerivedObject)(
        THIS_
        _In_opt_ IDebugHostContext *pContext,
        _In_ Location location,
        _In_ IDebugHostType* objectType,
        _Out_ Location* derivedLocation,
        _Out_ IDebugHostType** derivedType
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostMemory, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(ReadBytes)(
        THIS_
        _In_ IDebugHostContext* context,
        _In_ Location location,
        _Out_writes_bytes_(bufferSize) void* buffer,
        _In_ ULONG64 bufferSize,
        _Out_opt_ ULONG64* bytesRead
        ) PURE;
    STDMETHOD(WriteBytes)(
        THIS_
        _In_ IDebugHostContext* context,
        _In_ Location location,
        _In_reads_bytes_(bufferSize) void* buffer,
        _In_ ULONG64 bufferSize,
        _Out_opt_ ULONG64* bytesWritten
        ) PURE;
    STDMETHOD(ReadPointers)(
        THIS_
        _In_ IDebugHostContext* context,
        _In_ Location location,
        _In_ ULONG64 count,
        _Out_writes_(count) ULONG64* pointers
        ) PURE;
    STDMETHOD(WritePointers)(
        THIS_
        _In_ IDebugHostContext* context,
        _In_ Location location,
        _In_ ULONG64 count,
        _In_reads_(count) ULONG64* pointers
        ) PURE;
    STDMETHOD(GetDisplayStringForLocation)(
        _In_ IDebugHostContext* context,
        _In_ Location location,
        _In_ bool verbose,
        _Out_ BSTR* locationName
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostEvaluator, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(EvaluateExpression)(
        THIS_
        _In_ IDebugHostContext* context,
        _In_ PCWSTR expression,
        _In_opt_ IModelObject* bindingContext,
        _COM_Errorptr_ IModelObject** result,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
    STDMETHOD(EvaluateExtendedExpression)(
        THIS_
        _In_ IDebugHostContext* context,
        _In_ PCWSTR expression,
        _In_opt_ IModelObject* bindingContext,
        _COM_Errorptr_ IModelObject** result,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
};
enum SignatureComparison
{
    Unrelated,
    Ambiguous,
    LessSpecific,
    MoreSpecific,
    Identical
};
DECLARE_INTERFACE_(IDebugHostModuleSignature, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        )PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        )PURE;
    STDMETHOD(IsMatch)(
        THIS_
        _In_ IDebugHostModule* pModule,
        _Out_ bool* isMatch
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostTypeSignature, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetHashCode)(
        THIS_
        _Out_ ULONG* hashCode
        ) PURE;
    STDMETHOD(IsMatch)(
        THIS_
        _In_ IDebugHostType* type,
        _Out_ bool* isMatch,
        _COM_Outptr_opt_ IDebugHostSymbolEnumerator** wildcardMatches
        ) PURE;
    STDMETHOD(CompareAgainst)(
        THIS_
        _In_ IDebugHostTypeSignature* typeSignature,
        _Out_ SignatureComparison* result
        ) PURE;
};
enum SymbolSearchOptions
{
    SymbolSearchNone = 0x00000000,
    SymbolSearchCompletion = 0x00000001
};
struct SymbolSearchInfo
{
protected:
    SymbolSearchInfo(_In_ ULONG derivedSize) :
        HeaderSize(sizeof(SymbolSearchInfo)),
        InfoSize(derivedSize),
        SearchOptions(0)
    {
    }
public:
    SymbolSearchInfo() :
        HeaderSize(sizeof(SymbolSearchInfo)),
        InfoSize(sizeof(SymbolSearchInfo)),
        SearchOptions(0)
    {
    }
    ULONG HeaderSize;
    ULONG InfoSize;
    ULONG SearchOptions;
};
struct TypeSearchInfo : public SymbolSearchInfo
{
    TypeSearchInfo() :
        SymbolSearchInfo(sizeof(TypeSearchInfo))
    {
    }
    TypeSearchInfo(_In_ TypeKind searchType) :
        SymbolSearchInfo(sizeof(TypeSearchInfo)),
        SearchType(searchType)
    {
    }
    TypeKind SearchType;
};
enum LanguageKind
{
    LanguageUnknown,
    LanguageC,
    LanguageCPP,
    LanguageAssembly
};
DECLARE_INTERFACE_(IDebugHostSymbol2, IDebugHostSymbol)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetContext)(
        THIS_
        _COM_Outptr_ IDebugHostContext** context
        ) PURE;
    STDMETHOD(EnumerateChildren)(
        THIS_
        _In_ SymbolKind kind,
        _In_opt_z_ PCWSTR name,
        _Out_ IDebugHostSymbolEnumerator **ppEnum
        ) PURE;
    STDMETHOD(GetSymbolKind)(
        THIS_
        _Out_ SymbolKind *kind
        ) PURE;
    STDMETHOD(GetName)(
        THIS_
        _Out_ BSTR* symbolName
        ) PURE;
    STDMETHOD(GetType)(
        THIS_
        _Out_ IDebugHostType** type
        ) PURE;
    STDMETHOD(GetContainingModule)(
        THIS_
        _Out_ IDebugHostModule **containingModule
        ) PURE;
    STDMETHOD(CompareAgainst)(
        THIS_
        _In_ IDebugHostSymbol *pComparisonSymbol,
        _In_ ULONG comparisonFlags,
        _Out_ bool *pMatches
        ) PURE;
    STDMETHOD(EnumerateChildrenEx)(
        THIS_
        _In_ SymbolKind kind,
        _In_opt_z_ PCWSTR name,
        _In_opt_ SymbolSearchInfo* searchInfo,
        _Out_ IDebugHostSymbolEnumerator **ppEnum
        ) PURE;
    STDMETHOD(GetLanguage)(
        THIS_
        _Out_ LanguageKind *pKind
        ) PURE;
};
enum VarArgsKind
{
    VarArgsNone,
    VarArgsCStyle
};
DECLARE_INTERFACE_(IDebugHostType2, IDebugHostType)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetContext)(
        THIS_
        _COM_Outptr_ IDebugHostContext** context
        ) PURE;
    STDMETHOD(EnumerateChildren)(
        THIS_
        _In_ SymbolKind kind,
        _In_opt_z_ PCWSTR name,
        _Out_ IDebugHostSymbolEnumerator **ppEnum
        ) PURE;
    STDMETHOD(GetSymbolKind)(
        THIS_
        _Out_ SymbolKind *kind
        ) PURE;
    STDMETHOD(GetName)(
        THIS_
        _Out_ BSTR* symbolName
        ) PURE;
    STDMETHOD(GetType)(
        THIS_
        _Out_ IDebugHostType** type
        ) PURE;
    STDMETHOD(GetContainingModule)(
        THIS_
        _Out_ IDebugHostModule **containingModule
        ) PURE;
    STDMETHOD(GetTypeKind)(
        THIS_
        _Out_ TypeKind *kind
        ) PURE;
    STDMETHOD(GetSize)(
        THIS_
        _Out_ ULONG64* size
        ) PURE;
    STDMETHOD(GetBaseType)(
        THIS_
        _Out_ IDebugHostType** baseType
        ) PURE;
    STDMETHOD(GetHashCode)(
        THIS_
        _Out_ ULONG* hashCode
        ) PURE;
    STDMETHOD(GetIntrinsicType)(
        THIS_
        _Out_opt_ IntrinsicKind *intrinsicKind,
        _Out_opt_ VARTYPE *carrierType
        ) PURE;
    STDMETHOD(GetBitField)(
        THIS_
        _Out_ ULONG* lsbOfField,
        _Out_ ULONG* lengthOfField
        ) PURE;
    STDMETHOD(GetPointerKind)(
        THIS_
        _Out_ PointerKind* pointerKind
        ) PURE;
    STDMETHOD(GetMemberType)(
        THIS_
        _Out_ IDebugHostType** memberType
        ) PURE;
    STDMETHOD(CreatePointerTo)(
        THIS_
        _In_ PointerKind kind,
        _COM_Outptr_ IDebugHostType** newType
        ) PURE;
    STDMETHOD(GetArrayDimensionality)(
        THIS_
        _Out_ ULONG64* arrayDimensionality
        ) PURE;
    STDMETHOD(GetArrayDimensions)(
        THIS_
        _In_ ULONG64 dimensions,
        _Out_writes_(dimensions) ArrayDimension *pDimensions
        ) PURE;
    STDMETHOD(CreateArrayOf)(
        THIS_
        _In_ ULONG64 dimensions,
        _In_reads_(dimensions) ArrayDimension *pDimensions,
        _COM_Outptr_ IDebugHostType** newType
        ) PURE;
    STDMETHOD(GetFunctionCallingConvention)(
        THIS_
        _Out_ CallingConventionKind* conventionKind
        ) PURE;
    STDMETHOD(GetFunctionReturnType)(
        THIS_
        _COM_Outptr_ IDebugHostType** returnType
        ) PURE;
    STDMETHOD(GetFunctionParameterTypeCount)(
        THIS_
        _Out_ ULONG64* count
        ) PURE;
    STDMETHOD(GetFunctionParameterTypeAt)(
        THIS_
        _In_ ULONG64 i,
        _Out_ IDebugHostType** parameterType
        ) PURE;
    STDMETHOD(IsGeneric)(
        THIS_
        _Out_ bool* isGeneric
        ) PURE;
    STDMETHOD(GetGenericArgumentCount)(
        THIS_
        _Out_ ULONG64* argCount
        ) PURE;
    STDMETHOD(GetGenericArgumentAt)(
        THIS_
        _In_ ULONG64 i,
        _Out_ IDebugHostSymbol** argument
        ) PURE;
    STDMETHOD(IsTypedef)(
        THIS_
        _Out_ bool* isTypedef
        ) PURE;
    STDMETHOD(GetTypedefBaseType)(
        THIS_
        _Out_ IDebugHostType2** baseType
        ) PURE;
    STDMETHOD(GetTypedefFinalBaseType)(
        THIS_
        _Out_ IDebugHostType2** finalBaseType
        ) PURE;
    STDMETHOD(GetFunctionVarArgsKind)(
        THIS_
        _Out_ VarArgsKind* varArgsKind
        ) PURE;
    STDMETHOD(GetFunctionInstancePointerType)(
        THIS_
        _Out_ IDebugHostType2** instancePointerType
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostStatus, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(PollUserInterrupt)(
        THIS_
        _Out_ bool* interruptRequested
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelScriptClient, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(ReportError)(
        THIS_
        _In_ ErrorClass errClass,
        _In_ HRESULT hrFail,
        _In_opt_ PCWSTR message,
        _In_ ULONG line,
        _In_ ULONG position
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelScriptTemplate, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetName)(
        THIS_
        _Out_ BSTR *templateName
        ) PURE;
    STDMETHOD(GetDescription)(
        THIS_
        _Out_ BSTR *templateDescription
        ) PURE;
    STDMETHOD(GetContent)(
        THIS_
        _COM_Outptr_ IStream **contentStream
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelScript, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetName)(
        THIS_
        _Out_ BSTR *scriptName
        ) PURE;
    STDMETHOD(Rename)(
        THIS_
        _In_ PCWSTR scriptName
        ) PURE;
    STDMETHOD(Populate)(
        THIS_
        _In_ IStream *contentStream
        ) PURE;
    STDMETHOD(Execute)(
        THIS_
        _In_ IDataModelScriptClient *client
        ) PURE;
    STDMETHOD(Unlink)(
        THIS
        ) PURE;
    STDMETHOD(IsInvocable)(
        THIS_
        _Out_ bool *isInvocable
        ) PURE;
    STDMETHOD(InvokeMain)(
        THIS_
        _In_ IDataModelScriptClient *client
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelScriptTemplateEnumerator, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(Reset)(
        THIS
        ) PURE;
    STDMETHOD(GetNext)(
        THIS_
        _COM_Outptr_ IDataModelScriptTemplate **templateContent
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelScriptProvider, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetName)(
        THIS_
        _Out_ BSTR *name
        ) PURE;
    STDMETHOD(GetExtension)(
        THIS_
        _Out_ BSTR *extension
        ) PURE;
    STDMETHOD(CreateScript)(
        THIS_
        _COM_Outptr_ IDataModelScript **script
        ) PURE;
    STDMETHOD(GetDefaultTemplateContent)(
        THIS_
        _COM_Outptr_ IDataModelScriptTemplate **templateContent
        ) PURE;
    STDMETHOD(EnumerateTemplates)(
        THIS_
        _COM_Outptr_ IDataModelScriptTemplateEnumerator **enumerator
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelScriptProviderEnumerator, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(Reset)(
        THIS
        ) PURE;
    STDMETHOD(GetNext)(
        THIS_
        _COM_Outptr_ IDataModelScriptProvider **provider
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelScriptManager, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetDefaultNameBinder)(
        THIS_
        _COM_Outptr_ IDataModelNameBinder **ppNameBinder
        ) PURE;
    STDMETHOD(RegisterScriptProvider)(
        THIS_
        _In_ IDataModelScriptProvider *provider
        ) PURE;
    STDMETHOD(UnregisterScriptProvider)(
        THIS_
        _In_ IDataModelScriptProvider *provider
        ) PURE;
    STDMETHOD(FindProviderForScriptType)(
        THIS_
        _In_ PCWSTR scriptType,
        _COM_Outptr_ IDataModelScriptProvider **provider
        ) PURE;
    STDMETHOD(FindProviderForScriptExtension)(
        THIS_
        _In_ PCWSTR scriptExtension,
        _COM_Outptr_ IDataModelScriptProvider **provider
        ) PURE;
    STDMETHOD(EnumerateScriptProviders)(
        THIS_
        _COM_Outptr_ IDataModelScriptProviderEnumerator **enumerator
        ) PURE;
};
DECLARE_INTERFACE_(IDynamicKeyProviderConcept, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetKey)(
        THIS_
        _In_ IModelObject *contextObject,
        _In_ PCWSTR key,
        _COM_Outptr_opt_result_maybenull_ IModelObject** keyValue,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata,
        _Out_opt_ bool *hasKey
        ) PURE;
    STDMETHOD(SetKey)(
        THIS_
        _In_ IModelObject *contextObject,
        _In_ PCWSTR key,
        _In_ IModelObject *keyValue,
        _In_ IKeyStore *metadata
        ) PURE;
    STDMETHOD(EnumerateKeys)(
        THIS_
        _In_ IModelObject *contextObject,
        _COM_Outptr_ IKeyEnumerator **ppEnumerator
        ) PURE;
};
DECLARE_INTERFACE_(IDynamicConceptProviderConcept, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetConcept)(
        THIS_
        _In_ IModelObject *contextObject,
        _In_ REFIID conceptId,
        _COM_Outptr_result_maybenull_ IUnknown **conceptInterface,
        _COM_Outptr_opt_result_maybenull_ IKeyStore **conceptMetadata,
        _Out_ bool *hasConcept
        ) PURE;
    STDMETHOD(SetConcept)(
        THIS_
        _In_ IModelObject *contextObject,
        _In_ REFIID conceptId,
        _In_ IUnknown *conceptInterface,
        _In_opt_ IKeyStore *conceptMetadata
        ) PURE;
    STDMETHOD(NotifyParent)(
        THIS_
        _In_ IModelObject *parentModel
        ) PURE;
    STDMETHOD(NotifyParentChange)(
        THIS_
        _In_ IModelObject *parentModel
        ) PURE;
    STDMETHOD(NotifyDestruct)(
        THIS
        ) PURE;
};
enum ScriptChangeKind
{
    ScriptRename
};
DECLARE_INTERFACE_(IDataModelScriptHostContext, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(NotifyScriptChange)(
        THIS_
        _In_ IDataModelScript* script,
        _In_ ScriptChangeKind changeKind
        ) PURE;
    STDMETHOD(GetNamespaceObject)(
        THIS_
        _COM_Outptr_ IModelObject** namespaceObject
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostScriptHost, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(CreateContext)(
        THIS_
        _In_ IDataModelScript* script,
        _COM_Outptr_ IDataModelScriptHostContext** scriptContext
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelNameBinder, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(BindValue)(
        THIS_
        _In_ IModelObject* contextObject,
        _In_ PCWSTR name,
        _COM_Errorptr_ IModelObject** value,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
    STDMETHOD(BindReference)(
        THIS_
        _In_ IModelObject* contextObject,
        _In_ PCWSTR name,
        _COM_Errorptr_ IModelObject** reference,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
    STDMETHOD(EnumerateValues)(
        THIS_
        _In_ IModelObject* contextObject,
        _COM_Outptr_ IKeyEnumerator** enumerator
        ) PURE;
    STDMETHOD(EnumerateReferences)(
        THIS_
        _In_ IModelObject* contextObject,
        _COM_Outptr_ IKeyEnumerator** enumerator
        ) PURE;
};
DECLARE_INTERFACE_(IModelKeyReference2, IModelKeyReference)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetKeyName)(
        THIS_
        _Out_ BSTR* keyName
        ) PURE;
    STDMETHOD(GetOriginalObject)(
        THIS_
        _COM_Outptr_ IModelObject** originalObject
        ) PURE;
    STDMETHOD(GetContextObject)(
        THIS_
        _COM_Outptr_ IModelObject** containingObject
        ) PURE;
    STDMETHOD(GetKey)(
        THIS_
        _COM_Errorptr_opt_ IModelObject** object,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
    STDMETHOD(GetKeyValue)(
        THIS_
        _COM_Errorptr_opt_ IModelObject** object,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
    STDMETHOD(SetKey)(
        THIS_
        _In_opt_ IModelObject* object,
        _In_opt_ IKeyStore* metadata
        ) PURE;
    STDMETHOD(SetKeyValue)(
        THIS_
        _In_ IModelObject* object
        ) PURE;
    STDMETHOD(OverrideContextObject)(
        THIS_
        _In_ IModelObject* newContextObject
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostEvaluator2, IDebugHostEvaluator)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(EvaluateExpression)(
        THIS_
        _In_ IDebugHostContext* context,
        _In_ PCWSTR expression,
        _In_opt_ IModelObject* bindingContext,
        _COM_Errorptr_ IModelObject** result,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
    STDMETHOD(EvaluateExtendedExpression)(
        THIS_
        _In_ IDebugHostContext* context,
        _In_ PCWSTR expression,
        _In_opt_ IModelObject* bindingContext,
        _COM_Errorptr_ IModelObject** result,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** metadata
        ) PURE;
    STDMETHOD(AssignTo)(
        THIS_
        _In_ IModelObject* assignmentReference,
        _In_ IModelObject* assignmentValue,
        _COM_Errorptr_ IModelObject** assignmentResult,
        _COM_Outptr_opt_result_maybenull_ IKeyStore** assignmentMetadata
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelManager2, IDataModelManager)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(Close)(
        THIS
        ) PURE;
    STDMETHOD(CreateNoValue)(
        THIS_
        _Out_ IModelObject** object
        ) PURE;
    STDMETHOD(CreateErrorObject)(
        THIS_
        _In_ HRESULT hrError,
        _In_opt_ PCWSTR pwszMessage,
        _COM_Outptr_ IModelObject** object
        ) PURE;
    STDMETHOD(CreateTypedObject)(
        THIS_
        _In_opt_ IDebugHostContext* context,
        _In_ Location objectLocation,
        _In_ IDebugHostType* objectType,
        _COM_Errorptr_ IModelObject** object
        ) PURE;
    STDMETHOD(CreateTypedObjectReference)(
        THIS_
        _In_opt_ IDebugHostContext* context,
        _In_ Location objectLocation,
        _In_ IDebugHostType* objectType,
        _COM_Errorptr_ IModelObject** object
        ) PURE;
    STDMETHOD(CreateSyntheticObject)(
        THIS_
        _In_opt_ IDebugHostContext* context,
        _COM_Outptr_ IModelObject** object
        ) PURE;
    STDMETHOD(CreateDataModelObject)(
        THIS_
        _In_ IDataModelConcept* dataModel,
        _COM_Outptr_ IModelObject** object
        ) PURE;
    STDMETHOD(CreateIntrinsicObject)(
        THIS_
        _In_ ModelObjectKind objectKind,
        _In_ VARIANT* intrinsicData,
        _COM_Outptr_ IModelObject** object
        ) PURE;
    STDMETHOD(CreateTypedIntrinsicObject)(
        THIS_
        _In_ VARIANT* intrinsicData,
        _In_ IDebugHostType* type,
        _COM_Outptr_ IModelObject** object
        ) PURE;
    STDMETHOD(GetModelForTypeSignature)(
        THIS_
        _In_ IDebugHostTypeSignature* typeSignature,
        _Out_ IModelObject** dataModel
        ) PURE;
    STDMETHOD(GetModelForType)(
        THIS_
        _In_ IDebugHostType* type,
        _COM_Outptr_ IModelObject** dataModel,
        _COM_Outptr_opt_ IDebugHostTypeSignature** typeSignature,
        _COM_Outptr_opt_ IDebugHostSymbolEnumerator** wildcardMatches
        ) PURE;
    STDMETHOD(RegisterModelForTypeSignature)(
        THIS_
        _In_ IDebugHostTypeSignature* typeSignature,
        _In_ IModelObject* dataModel
        ) PURE;
    STDMETHOD(UnregisterModelForTypeSignature)(
        THIS_
        _In_ IModelObject* dataModel,
        _In_opt_ IDebugHostTypeSignature* typeSignature
        ) PURE;
    STDMETHOD(RegisterExtensionForTypeSignature)(
        THIS_
        _In_ IDebugHostTypeSignature* typeSignature,
        _In_ IModelObject* dataModel
        ) PURE;
    STDMETHOD(UnregisterExtensionForTypeSignature)(
        THIS_
        _In_ IModelObject* dataModel,
        _In_opt_ IDebugHostTypeSignature* typeSignature
        ) PURE;
    STDMETHOD(CreateMetadataStore)(
        THIS_
        _In_opt_ IKeyStore* parentStore,
        _COM_Outptr_ IKeyStore** metadataStore
        ) PURE;
    STDMETHOD(GetRootNamespace)(
        THIS_
        _COM_Outptr_ IModelObject** rootNamespace
        ) PURE;
    STDMETHOD(RegisterNamedModel)(
        THIS_
        _In_ PCWSTR modelName,
        _In_ IModelObject *modeObject
        ) PURE;
    STDMETHOD(UnregisterNamedModel)(
        THIS_
        _In_ PCWSTR modelName
        ) PURE;
    STDMETHOD(AcquireNamedModel)(
        THIS_
        _In_ PCWSTR modelName,
        _COM_Outptr_ IModelObject **modelObject
        ) PURE;
    STDMETHOD(AcquireSubNamespace)(
        THIS_
        _In_ PCWSTR modelName,
        _In_ PCWSTR subNamespaceModelName,
        _In_ PCWSTR accessName,
        _In_opt_ IKeyStore *metadata,
        _COM_Outptr_ IModelObject **namespaceModelObject
        ) PURE;
    STDMETHOD(CreateTypedIntrinsicObjectEx)(
        THIS_
        _In_opt_ IDebugHostContext* context,
        _In_ VARIANT* intrinsicData,
        _In_ IDebugHostType* type,
        _COM_Outptr_ IModelObject** object
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostMemory2, IDebugHostMemory)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(ReadBytes)(
        THIS_
        _In_ IDebugHostContext* context,
        _In_ Location location,
        _Out_writes_bytes_(bufferSize) void* buffer,
        _In_ ULONG64 bufferSize,
        _Out_opt_ ULONG64* bytesRead
        ) PURE;
    STDMETHOD(WriteBytes)(
        THIS_
        _In_ IDebugHostContext* context,
        _In_ Location location,
        _In_reads_bytes_(bufferSize) void* buffer,
        _In_ ULONG64 bufferSize,
        _Out_opt_ ULONG64* bytesWritten
        ) PURE;
    STDMETHOD(ReadPointers)(
        THIS_
        _In_ IDebugHostContext* context,
        _In_ Location location,
        _In_ ULONG64 count,
        _Out_writes_(count) ULONG64* pointers
        ) PURE;
    STDMETHOD(WritePointers)(
        THIS_
        _In_ IDebugHostContext* context,
        _In_ Location location,
        _In_ ULONG64 count,
        _In_reads_(count) ULONG64* pointers
        ) PURE;
    STDMETHOD(GetDisplayStringForLocation)(
        _In_ IDebugHostContext* context,
        _In_ Location location,
        _In_ bool verbose,
        _Out_ BSTR* locationName
        ) PURE;
    STDMETHOD(LinearizeLocation)(
        _In_ IDebugHostContext* context,
        _In_ Location location,
        _Out_ Location *pLinearizedLocation
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostExtensibility, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(CreateFunctionAlias)(
        THIS_
        _In_ PCWSTR aliasName,
        _In_ IModelObject *functionObject
        ) PURE;
    STDMETHOD(DestroyFunctionAlias)(
        THIS_
        _In_ PCWSTR aliasName
        ) PURE;
};
enum ScriptDebugState
{
    ScriptDebugNoDebugger,
    ScriptDebugNotExecuting,
    ScriptDebugExecuting,
    ScriptDebugBreak
};
enum ScriptDebugEventFilter
{
    ScriptDebugEventFilterEntry,
    ScriptDebugEventFilterException,
    ScriptDebugEventFilterUnhandledException,
    ScriptDebugEventFilterAbort
};
enum ScriptDebugEvent
{
    ScriptDebugBreakpoint,
    ScriptDebugStep,
    ScriptDebugException,
    ScriptDebugAsyncBreak
};
enum ScriptExecutionKind
{
    ScriptExecutionNormal,
    ScriptExecutionStepIn,
    ScriptExecutionStepOut,
    ScriptExecutionStepOver,
};
struct ScriptDebugPosition
{
    ULONG Line;
    ULONG Column;
};
struct ScriptDebugEventInformation
{
    ScriptDebugEvent DebugEvent;
    ScriptDebugPosition EventPosition;
    ScriptDebugPosition EventSpanEnd;
    union
    {
        struct
        {
            bool IsUncaught;
        } ExceptionInformation;
        struct
        {
            ULONG64 BreakpointId;
        } BreakpointInformation;
    } u;
};
DECLARE_INTERFACE_(IDataModelScriptDebugClient, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(NotifyDebugEvent)(
        _In_ ScriptDebugEventInformation *pEventInfo,
        _In_ IDataModelScript *pScript,
        _In_opt_ IModelObject *pEventDataObject,
        _Inout_ ScriptExecutionKind *resumeEventKind
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelScriptDebugVariableSetEnumerator, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(Reset)(
        THIS
        ) PURE;
    STDMETHOD(GetNext)(
        THIS_
        _Out_ BSTR *variableName,
        _COM_Outptr_opt_ IModelObject **variableValue,
        _COM_Outptr_opt_result_maybenull_ IKeyStore **variableMetadata
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelScriptDebugStackFrame, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetName)(
        THIS_
        _Out_ BSTR *name
        ) PURE;
    STDMETHOD(GetPosition)(
        THIS_
        _Out_ ScriptDebugPosition *position,
        _Out_opt_ ScriptDebugPosition *positionSpanEnd,
        _Out_opt_ BSTR *lineText
        ) PURE;
    STDMETHOD(IsTransitionPoint)(
        THIS_
        _Out_ bool *isTransitionPoint
        ) PURE;
    STDMETHOD(GetTransition)(
        THIS_
        _COM_Outptr_ IDataModelScript **transitionScript,
        _Out_ bool *isTransitionContiguous
        ) PURE;
    STDMETHOD(Evaluate)(
        THIS_
        _In_ PCWSTR pwszExpression,
        _COM_Outptr_ IModelObject **ppResult
        ) PURE;
    STDMETHOD(EnumerateLocals)(
        THIS_
        _COM_Outptr_ IDataModelScriptDebugVariableSetEnumerator **variablesEnum
        ) PURE;
    STDMETHOD(EnumerateArguments)(
        THIS_
        _COM_Outptr_ IDataModelScriptDebugVariableSetEnumerator **variablesEnum
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelScriptDebugStack, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG64, GetFrameCount)(
        THIS
        ) PURE;
    STDMETHOD(GetStackFrame)(
        THIS_
        _In_ ULONG64 frameNumber,
        _COM_Outptr_ IDataModelScriptDebugStackFrame **stackFrame
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelScriptDebugBreakpoint, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG64, GetId)(
        THIS
        ) PURE;
    STDMETHOD_(bool, IsEnabled)(
        THIS
        ) PURE;
    STDMETHOD_(void, Enable)(
        THIS
        ) PURE;
    STDMETHOD_(void, Disable)(
        THIS
        ) PURE;
    STDMETHOD_(void, Remove)(
        THIS
        ) PURE;
    STDMETHOD(GetPosition)(
        _Out_ ScriptDebugPosition *position,
        _Out_opt_ ScriptDebugPosition *positionSpanEnd,
        _Out_opt_ BSTR *lineText
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelScriptDebugBreakpointEnumerator, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(Reset)(
        THIS
        ) PURE;
    STDMETHOD(GetNext)(
        THIS_
        _COM_Outptr_ IDataModelScriptDebugBreakpoint **breakpoint
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelScriptDebug, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD_(ScriptDebugState, GetDebugState)(
        THIS
        ) PURE;
    STDMETHOD(GetCurrentPosition)(
        THIS_
        _Out_ ScriptDebugPosition *currentPosition,
        _Out_opt_ ScriptDebugPosition *positionSpanEnd,
        _Out_opt_ BSTR *lineText
        ) PURE;
    STDMETHOD(GetStack)(
        THIS_
        _COM_Outptr_ IDataModelScriptDebugStack **stack
        ) PURE;
    STDMETHOD(SetBreakpoint)(
        THIS_
        _In_ ULONG linePosition,
        _In_ ULONG columnPosition,
        _COM_Outptr_ IDataModelScriptDebugBreakpoint **breakpoint
        ) PURE;
    STDMETHOD(FindBreakpointById)(
        THIS_
        _In_ ULONG64 breakpointId,
        _COM_Outptr_ IDataModelScriptDebugBreakpoint **breakpoint
        ) PURE;
    STDMETHOD(EnumerateBreakpoints)(
        THIS_
        _COM_Outptr_ IDataModelScriptDebugBreakpointEnumerator **breakpointEnum
        ) PURE;
    STDMETHOD(GetEventFilter)(
        THIS_
        _In_ ScriptDebugEventFilter eventFilter,
        _Out_ bool *isBreakEnabled
        ) PURE;
    STDMETHOD(SetEventFilter)(
        THIS_
        _In_ ScriptDebugEventFilter eventFilter,
        _In_ bool isBreakEnabled
        ) PURE;
    STDMETHOD(StartDebugging)(
        THIS_
        _In_ IDataModelScriptDebugClient *debugClient
        ) PURE;
    STDMETHOD(StopDebugging)(
        THIS_
        _In_ IDataModelScriptDebugClient *debugClient
        ) PURE;
};
DECLARE_INTERFACE_(IDataModelScriptDebug2, IDataModelScriptDebug)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD_(ScriptDebugState, GetDebugState)(
        THIS
        ) PURE;
    STDMETHOD(GetCurrentPosition)(
        THIS_
        _Out_ ScriptDebugPosition *currentPosition,
        _Out_opt_ ScriptDebugPosition *positionSpanEnd,
        _Out_opt_ BSTR *lineText
        ) PURE;
    STDMETHOD(GetStack)(
        THIS_
        _COM_Outptr_ IDataModelScriptDebugStack **stack
        ) PURE;
    STDMETHOD(SetBreakpoint)(
        THIS_
        _In_ ULONG linePosition,
        _In_ ULONG columnPosition,
        _COM_Outptr_ IDataModelScriptDebugBreakpoint **breakpoint
        ) PURE;
    STDMETHOD(FindBreakpointById)(
        THIS_
        _In_ ULONG64 breakpointId,
        _COM_Outptr_ IDataModelScriptDebugBreakpoint **breakpoint
        ) PURE;
    STDMETHOD(EnumerateBreakpoints)(
        THIS_
        _COM_Outptr_ IDataModelScriptDebugBreakpointEnumerator **breakpointEnum
        ) PURE;
    STDMETHOD(GetEventFilter)(
        THIS_
        _In_ ScriptDebugEventFilter eventFilter,
        _Out_ bool *isBreakEnabled
        ) PURE;
    STDMETHOD(SetEventFilter)(
        THIS_
        _In_ ScriptDebugEventFilter eventFilter,
        _In_ bool isBreakEnabled
        ) PURE;
    STDMETHOD(StartDebugging)(
        THIS_
        _In_ IDataModelScriptDebugClient *debugClient
        ) PURE;
    STDMETHOD(StopDebugging)(
        THIS_
        _In_ IDataModelScriptDebugClient *debugClient
        ) PURE;
    STDMETHOD(SetBreakpointAtFunction)(
        THIS_
        _In_ PCWSTR functionName,
        _COM_Outptr_ IDataModelScriptDebugBreakpoint **breakpoint
        ) PURE;
};
DECLARE_INTERFACE_(IDebugHostModule2, IDebugHostModule)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(GetContext)(
        THIS_
        _COM_Outptr_ IDebugHostContext** context
        ) PURE;
    STDMETHOD(EnumerateChildren)(
        THIS_
        _In_ SymbolKind kind,
        _In_opt_z_ PCWSTR name,
        _Out_ IDebugHostSymbolEnumerator **ppEnum
        ) PURE;
    STDMETHOD(GetSymbolKind)(
        THIS_
        _Out_ SymbolKind *kind
        ) PURE;
    STDMETHOD(GetName)(
        THIS_
        _Out_ BSTR* symbolName
        ) PURE;
    STDMETHOD(GetType)(
        THIS_
        _Out_ IDebugHostType** type
        ) PURE;
    STDMETHOD(GetContainingModule)(
        THIS_
        _Out_ IDebugHostModule **containingModule
        ) PURE;
    STDMETHOD(GetImageName)(
        THIS_
        _In_ bool allowPath,
        _Out_ BSTR* imageName
        ) PURE;
    STDMETHOD(GetBaseLocation)(
        THIS_
        _Out_ Location* moduleBaseLocation
        ) PURE;
    STDMETHOD(GetVersion)(
        THIS_
        _Out_opt_ ULONG64* fileVersion,
        _Out_opt_ ULONG64* productVersion
        ) PURE;
    STDMETHOD(FindTypeByName)(
        THIS_
        _In_z_ PCWSTR typeName,
        _Out_ IDebugHostType** type
        ) PURE;
    STDMETHOD(FindSymbolByRVA)(
        THIS_
        _In_ ULONG64 rva,
        _Out_ IDebugHostSymbol** symbol
        ) PURE;
    STDMETHOD(FindSymbolByName)(
        THIS_
        _In_z_ PCWSTR symbolName,
        _Out_ IDebugHostSymbol** symbol
        ) PURE;
    STDMETHOD(FindContainingSymbolByRVA)(
        THIS_
        _In_ ULONG64 rva,
        _Out_ IDebugHostSymbol** symbol,
        _Out_ ULONG64 *offset
        ) PURE;
};
DECLARE_INTERFACE_(IComparableConcept, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(CompareObjects)(
        THIS_
        _In_ IModelObject *contextObject,
        _In_ IModelObject *otherObject,
        _Out_ int *comparisonResult
        ) PURE;
};
DECLARE_INTERFACE_(IEquatableConcept, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID iid,
        _COM_Outptr_ PVOID* iface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;
    STDMETHOD(AreObjectsEqual)(
        THIS_
        _In_ IModelObject *contextObject,
        _In_ IModelObject *otherObject,
        _Out_ bool *isEqual
        ) PURE;
};
STDAPI CreateDataModelManager(
    _In_ IDebugHost* debugHost,
    _COM_Outptr_ IDataModelManager** manager
    );
#endif
#pragma endregion
