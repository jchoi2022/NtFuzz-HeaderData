#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDeviceModelPlugIn IDeviceModelPlugIn;
typedef interface IGamutMapModelPlugIn IGamutMapModelPlugIn;
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _XYZColorF
    {
    FLOAT X;
    FLOAT Y;
    FLOAT Z;
    } XYZColorF;
typedef struct _JChColorF
    {
    FLOAT J;
    FLOAT C;
    FLOAT h;
    } JChColorF;
typedef struct _JabColorF
    {
    FLOAT J;
    FLOAT a;
    FLOAT b;
    } JabColorF;
typedef struct _GamutShellTriangle
    {
    UINT aVertexIndex[ 3 ];
    } GamutShellTriangle;
typedef struct _GamutShell
    {
    FLOAT JMin;
    FLOAT JMax;
    UINT cVertices;
    UINT cTriangles;
                    JabColorF *pVertices;
                    GamutShellTriangle *pTriangles;
    } GamutShell;
typedef struct _PrimaryJabColors
    {
    JabColorF red;
    JabColorF yellow;
    JabColorF green;
    JabColorF cyan;
    JabColorF blue;
    JabColorF magenta;
    JabColorF black;
    JabColorF white;
    } PrimaryJabColors;
typedef struct _PrimaryXYZColors
    {
    XYZColorF red;
    XYZColorF yellow;
    XYZColorF green;
    XYZColorF cyan;
    XYZColorF blue;
    XYZColorF magenta;
    XYZColorF black;
    XYZColorF white;
    } PrimaryXYZColors;
typedef struct _GamutBoundaryDescription
    {
    PrimaryJabColors *pPrimaries;
    UINT cNeutralSamples;
                    JabColorF *pNeutralSamples;
    GamutShell *pReferenceShell;
    GamutShell *pPlausibleShell;
    GamutShell *pPossibleShell;
    } GamutBoundaryDescription;
typedef struct _BlackInformation
    {
    BOOL fBlackOnly;
    FLOAT blackWeight;
    } BlackInformation;
extern RPC_IF_HANDLE __MIDL_itf_wcsplugin_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wcsplugin_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDeviceModelPlugIn;
    typedef struct IDeviceModelPlugInVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDeviceModelPlugIn * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDeviceModelPlugIn * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDeviceModelPlugIn * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IDeviceModelPlugIn * This,
                       __RPC__in BSTR bstrXml,
                       UINT cNumModels,
                       UINT iModelPosition);
        HRESULT ( STDMETHODCALLTYPE *GetNumChannels )(
            __RPC__in IDeviceModelPlugIn * This,
                        __RPC__out UINT *pNumChannels);
        HRESULT ( STDMETHODCALLTYPE *DeviceToColorimetricColors )(
            __RPC__in IDeviceModelPlugIn * This,
                       UINT cColors,
                       UINT cChannels,
                                __RPC__in_ecount_full(( cColors * cChannels ) ) const FLOAT *pDeviceValues,
                                 __RPC__out_ecount_full(cColors) XYZColorF *pXYZColors);
        HRESULT ( STDMETHODCALLTYPE *ColorimetricToDeviceColors )(
            __RPC__in IDeviceModelPlugIn * This,
                       UINT cColors,
                       UINT cChannels,
                                __RPC__in_ecount_full(cColors) const XYZColorF *pXYZColors,
                                 __RPC__out_ecount_full(( cColors * cChannels ) ) FLOAT *pDeviceValues);
        HRESULT ( STDMETHODCALLTYPE *ColorimetricToDeviceColorsWithBlack )(
            __RPC__in IDeviceModelPlugIn * This,
                       UINT cColors,
                       UINT cChannels,
                                __RPC__in_ecount_full(cColors) const XYZColorF *pXYZColors,
                                __RPC__in_ecount_full(cColors) const BlackInformation *pBlackInformation,
                                 __RPC__out_ecount_full(( cColors * cChannels ) ) FLOAT *pDeviceValues);
        HRESULT ( STDMETHODCALLTYPE *SetTransformDeviceModelInfo )(
            __RPC__in IDeviceModelPlugIn * This,
                       UINT iModelPosition,
                       __RPC__in_opt IDeviceModelPlugIn *pIDeviceModelOther);
        HRESULT ( STDMETHODCALLTYPE *GetPrimarySamples )(
            __RPC__in IDeviceModelPlugIn * This,
                        __RPC__out PrimaryXYZColors *pPrimaryColor);
        HRESULT ( STDMETHODCALLTYPE *GetGamutBoundaryMeshSize )(
            __RPC__in IDeviceModelPlugIn * This,
                        __RPC__out UINT *pNumVertices,
                        __RPC__out UINT *pNumTriangles);
        HRESULT ( STDMETHODCALLTYPE *GetGamutBoundaryMesh )(
            __RPC__in IDeviceModelPlugIn * This,
                       UINT cChannels,
                       UINT cVertices,
                       UINT cTriangles,
                                 __RPC__out_ecount_full(( cVertices * cChannels ) ) FLOAT *pVertices,
                                 __RPC__out_ecount_full(cTriangles) GamutShellTriangle *pTriangles);
        HRESULT ( STDMETHODCALLTYPE *GetNeutralAxisSize )(
            __RPC__in IDeviceModelPlugIn * This,
                        __RPC__out UINT *pcColors);
        HRESULT ( STDMETHODCALLTYPE *GetNeutralAxis )(
            __RPC__in IDeviceModelPlugIn * This,
                       UINT cColors,
                                 __RPC__out_ecount_full(cColors) XYZColorF *pXYZColors);
        END_INTERFACE
    } IDeviceModelPlugInVtbl;
    interface IDeviceModelPlugIn
    {
        CONST_VTBL struct IDeviceModelPlugInVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,bstrXml,cNumModels,iModelPosition) )
    ( (This)->lpVtbl -> GetNumChannels(This,pNumChannels) )
    ( (This)->lpVtbl -> DeviceToColorimetricColors(This,cColors,cChannels,pDeviceValues,pXYZColors) )
    ( (This)->lpVtbl -> ColorimetricToDeviceColors(This,cColors,cChannels,pXYZColors,pDeviceValues) )
    ( (This)->lpVtbl -> ColorimetricToDeviceColorsWithBlack(This,cColors,cChannels,pXYZColors,pBlackInformation,pDeviceValues) )
    ( (This)->lpVtbl -> SetTransformDeviceModelInfo(This,iModelPosition,pIDeviceModelOther) )
    ( (This)->lpVtbl -> GetPrimarySamples(This,pPrimaryColor) )
    ( (This)->lpVtbl -> GetGamutBoundaryMeshSize(This,pNumVertices,pNumTriangles) )
    ( (This)->lpVtbl -> GetGamutBoundaryMesh(This,cChannels,cVertices,cTriangles,pVertices,pTriangles) )
    ( (This)->lpVtbl -> GetNeutralAxisSize(This,pcColors) )
    ( (This)->lpVtbl -> GetNeutralAxis(This,cColors,pXYZColors) )
EXTERN_C const IID IID_IGamutMapModelPlugIn;
    typedef struct IGamutMapModelPlugInVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGamutMapModelPlugIn * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGamutMapModelPlugIn * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGamutMapModelPlugIn * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IGamutMapModelPlugIn * This,
                       __RPC__in BSTR bstrXml,
                       __RPC__in_opt IDeviceModelPlugIn *pSrcPlugIn,
                       __RPC__in_opt IDeviceModelPlugIn *pDestPlugIn,
                       __RPC__in GamutBoundaryDescription *pSrcGBD,
                       __RPC__in GamutBoundaryDescription *pDestGBD);
        HRESULT ( STDMETHODCALLTYPE *SourceToDestinationAppearanceColors )(
            __RPC__in IGamutMapModelPlugIn * This,
                       UINT cColors,
                                __RPC__in_ecount_full(cColors) const JChColorF *pInputColors,
                                 __RPC__out_ecount_full(cColors) JChColorF *pOutputColors);
        END_INTERFACE
    } IGamutMapModelPlugInVtbl;
    interface IGamutMapModelPlugIn
    {
        CONST_VTBL struct IGamutMapModelPlugInVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,bstrXml,pSrcPlugIn,pDestPlugIn,pSrcGBD,pDestGBD) )
    ( (This)->lpVtbl -> SourceToDestinationAppearanceColors(This,cColors,pInputColors,pOutputColors) )
DEFINE_GUID(CATID_WcsPlugin, 0xa0b402e0, 0x8240, 0x405f, 0x8a, 0x16, 0x8a, 0x5b, 0x4d, 0xf2, 0xf0, 0xdd);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wcsplugin_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wcsplugin_0000_0002_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
}
