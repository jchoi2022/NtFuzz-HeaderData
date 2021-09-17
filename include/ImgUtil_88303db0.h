#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISniffStream ISniffStream;
typedef interface IDithererImpl IDithererImpl;
typedef class CoDitherToRGB8 CoDitherToRGB8;
typedef class CoSniffStream CoSniffStream;
typedef class CoMapMIMEToCLSID CoMapMIMEToCLSID;
#include "ocmm.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <ddraw.h>
STDAPI CreateMIMEMap( IMapMIMEToCLSID** ppMap );
STDAPI DecodeImage( IStream* pStream, IMapMIMEToCLSID* pMap,
   IUnknown* pEventSink );
STDAPI SniffStream( IStream* pInStream, UINT* pnFormat,
   IStream** ppOutStream );
STDAPI GetMaxMIMEIDBytes( ULONG* pnMaxBytes );
STDAPI IdentifyMIMEType( const BYTE* pbBytes, ULONG nBytes,
   UINT* pnFormat );
STDAPI ComputeInvCMAP(const RGBQUAD *pRGBColors, ULONG nColors, BYTE *pInvTable,
   ULONG cbTable);
STDAPI DitherTo8( BYTE * pDestBits, LONG nDestPitch, BYTE * pSrcBits, LONG nSrcPitch,
   REFGUID bfidSrc, RGBQUAD * prgbDestColors, RGBQUAD * prgbSrcColors, BYTE * pbDestInvMap,
   LONG x, LONG y, LONG cx, LONG cy, LONG lDestTrans, LONG lSrcTrans);
STDAPI CreateDDrawSurfaceOnDIB(HBITMAP hbmDib, IDirectDrawSurface **ppSurface);
STDAPI DecodeImageEx( IStream* pStream, IMapMIMEToCLSID* pMap,
   IUnknown* pEventSink, LPCWSTR pszMIMETypeParam );
extern RPC_IF_HANDLE __MIDL_itf_imgutil_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imgutil_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISniffStream;
    typedef struct ISniffStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISniffStream * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISniffStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISniffStream * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            ISniffStream * This,
            IStream *pStream);
        HRESULT ( STDMETHODCALLTYPE *Peek )(
            ISniffStream * This,
            void *pBuffer,
            ULONG nBytes,
            ULONG *pnBytesRead);
        END_INTERFACE
    } ISniffStreamVtbl;
    interface ISniffStream
    {
        CONST_VTBL struct ISniffStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,pStream) )
    ( (This)->lpVtbl -> Peek(This,pBuffer,nBytes,pnBytesRead) )
EXTERN_C const IID IID_IDithererImpl;
    typedef struct IDithererImplVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDithererImpl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDithererImpl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDithererImpl * This);
        HRESULT ( STDMETHODCALLTYPE *SetDestColorTable )(
            IDithererImpl * This,
            ULONG nColors,
            const RGBQUAD *prgbColors);
        HRESULT ( STDMETHODCALLTYPE *SetEventSink )(
            IDithererImpl * This,
            IImageDecodeEventSink *pEventSink);
        END_INTERFACE
    } IDithererImplVtbl;
    interface IDithererImpl
    {
        CONST_VTBL struct IDithererImplVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDestColorTable(This,nColors,prgbColors) )
    ( (This)->lpVtbl -> SetEventSink(This,pEventSink) )
EXTERN_C const IID LIBID_ImgUtilLib;
EXTERN_C const CLSID CLSID_CoDitherToRGB8;
class DECLSPEC_UUID("A860CE50-3910-11d0-86FC-00A0C913F750")
CoDitherToRGB8;
EXTERN_C const CLSID CLSID_CoSniffStream;
class DECLSPEC_UUID("6A01FDA0-30DF-11d0-B724-00AA006C1A01")
CoSniffStream;
EXTERN_C const CLSID CLSID_CoMapMIMEToCLSID;
class DECLSPEC_UUID("30C3B080-30FB-11d0-B724-00AA006C1A01")
CoMapMIMEToCLSID;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_imgutil_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imgutil_0000_0003_v0_0_s_ifspec;
}
