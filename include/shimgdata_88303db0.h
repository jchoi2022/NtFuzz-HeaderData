#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IShellImageDataFactory IShellImageDataFactory;
typedef interface IShellImageData IShellImageData;
typedef interface IShellImageDataAbort IShellImageDataAbort;
typedef class ShellImageDataFactory ShellImageDataFactory;
#include "oleidl.h"
#include "propidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef DWORD PixelFormat;
typedef DWORD InterpolationMode;
typedef BYTE EncoderParameters;
typedef BYTE Image;
extern RPC_IF_HANDLE __MIDL_itf_shimgdata_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shimgdata_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IShellImageDataFactory;
    typedef struct IShellImageDataFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellImageDataFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellImageDataFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellImageDataFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateIShellImageData )(
            __RPC__in IShellImageDataFactory * This,
                        __RPC__deref_out_opt IShellImageData **ppshimg);
        HRESULT ( STDMETHODCALLTYPE *CreateImageFromFile )(
            __RPC__in IShellImageDataFactory * This,
                       __RPC__in LPCWSTR pszPath,
                        __RPC__deref_out_opt IShellImageData **ppshimg);
        HRESULT ( STDMETHODCALLTYPE *CreateImageFromStream )(
            __RPC__in IShellImageDataFactory * This,
                       __RPC__in_opt IStream *pStream,
                        __RPC__deref_out_opt IShellImageData **ppshimg);
        HRESULT ( STDMETHODCALLTYPE *GetDataFormatFromPath )(
            __RPC__in IShellImageDataFactory * This,
                       __RPC__in LPCWSTR pszPath,
                        __RPC__out GUID *pDataFormat);
        END_INTERFACE
    } IShellImageDataFactoryVtbl;
    interface IShellImageDataFactory
    {
        CONST_VTBL struct IShellImageDataFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateIShellImageData(This,ppshimg) )
    ( (This)->lpVtbl -> CreateImageFromFile(This,pszPath,ppshimg) )
    ( (This)->lpVtbl -> CreateImageFromStream(This,pStream,ppshimg) )
    ( (This)->lpVtbl -> GetDataFormatFromPath(This,pszPath,pDataFormat) )
EXTERN_C const IID IID_IShellImageData;
    typedef struct IShellImageDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IShellImageData * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IShellImageData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IShellImageData * This);
        HRESULT ( STDMETHODCALLTYPE *Decode )(
            IShellImageData * This,
                       DWORD dwFlags,
                       ULONG cxDesired,
                       ULONG cyDesired);
        HRESULT ( STDMETHODCALLTYPE *Draw )(
            IShellImageData * This,
                       HDC hdc,
                       LPRECT prcDest,
                       LPRECT prcSrc);
        HRESULT ( STDMETHODCALLTYPE *NextFrame )(
            IShellImageData * This);
        HRESULT ( STDMETHODCALLTYPE *NextPage )(
            IShellImageData * This);
        HRESULT ( STDMETHODCALLTYPE *PrevPage )(
            IShellImageData * This);
        HRESULT ( STDMETHODCALLTYPE *IsTransparent )(
            IShellImageData * This);
        HRESULT ( STDMETHODCALLTYPE *IsAnimated )(
            IShellImageData * This);
        HRESULT ( STDMETHODCALLTYPE *IsVector )(
            IShellImageData * This);
        HRESULT ( STDMETHODCALLTYPE *IsMultipage )(
            IShellImageData * This);
        HRESULT ( STDMETHODCALLTYPE *IsEditable )(
            IShellImageData * This);
        HRESULT ( STDMETHODCALLTYPE *IsPrintable )(
            IShellImageData * This);
        HRESULT ( STDMETHODCALLTYPE *IsDecoded )(
            IShellImageData * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPage )(
            IShellImageData * This,
                        ULONG *pnPage);
        HRESULT ( STDMETHODCALLTYPE *GetPageCount )(
            IShellImageData * This,
                        ULONG *pcPages);
        HRESULT ( STDMETHODCALLTYPE *SelectPage )(
            IShellImageData * This,
                       ULONG iPage);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            IShellImageData * This,
                        SIZE *pSize);
        HRESULT ( STDMETHODCALLTYPE *GetRawDataFormat )(
            IShellImageData * This,
                        GUID *pDataFormat);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )(
            IShellImageData * This,
                        PixelFormat *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetDelay )(
            IShellImageData * This,
                        DWORD *pdwDelay);
        HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            IShellImageData * This,
                       DWORD dwMode,
                        IPropertySetStorage **ppPropSet);
        HRESULT ( STDMETHODCALLTYPE *Rotate )(
            IShellImageData * This,
                       DWORD dwAngle);
        HRESULT ( STDMETHODCALLTYPE *Scale )(
            IShellImageData * This,
                       ULONG cx,
                       ULONG cy,
                       InterpolationMode hints);
        HRESULT ( STDMETHODCALLTYPE *DiscardEdit )(
            IShellImageData * This);
        HRESULT ( STDMETHODCALLTYPE *SetEncoderParams )(
            IShellImageData * This,
                       IPropertyBag *pbagEnc);
        HRESULT ( STDMETHODCALLTYPE *DisplayName )(
            IShellImageData * This,
                                     LPWSTR wszName,
                       UINT cch);
        HRESULT ( STDMETHODCALLTYPE *GetResolution )(
            IShellImageData * This,
                        ULONG *puResolutionX,
                        ULONG *puResolutionY);
        HRESULT ( STDMETHODCALLTYPE *GetEncoderParams )(
            IShellImageData * This,
                       GUID *pguidFmt,
                        EncoderParameters **ppEncParams);
        HRESULT ( STDMETHODCALLTYPE *RegisterAbort )(
            IShellImageData * This,
                       IShellImageDataAbort *pAbort,
                        IShellImageDataAbort **ppAbortPrev);
        HRESULT ( STDMETHODCALLTYPE *CloneFrame )(
            IShellImageData * This,
                        Image **ppImg);
        HRESULT ( STDMETHODCALLTYPE *ReplaceFrame )(
            IShellImageData * This,
                       Image *pImg);
        END_INTERFACE
    } IShellImageDataVtbl;
    interface IShellImageData
    {
        CONST_VTBL struct IShellImageDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Decode(This,dwFlags,cxDesired,cyDesired) )
    ( (This)->lpVtbl -> Draw(This,hdc,prcDest,prcSrc) )
    ( (This)->lpVtbl -> NextFrame(This) )
    ( (This)->lpVtbl -> NextPage(This) )
    ( (This)->lpVtbl -> PrevPage(This) )
    ( (This)->lpVtbl -> IsTransparent(This) )
    ( (This)->lpVtbl -> IsAnimated(This) )
    ( (This)->lpVtbl -> IsVector(This) )
    ( (This)->lpVtbl -> IsMultipage(This) )
    ( (This)->lpVtbl -> IsEditable(This) )
    ( (This)->lpVtbl -> IsPrintable(This) )
    ( (This)->lpVtbl -> IsDecoded(This) )
    ( (This)->lpVtbl -> GetCurrentPage(This,pnPage) )
    ( (This)->lpVtbl -> GetPageCount(This,pcPages) )
    ( (This)->lpVtbl -> SelectPage(This,iPage) )
    ( (This)->lpVtbl -> GetSize(This,pSize) )
    ( (This)->lpVtbl -> GetRawDataFormat(This,pDataFormat) )
    ( (This)->lpVtbl -> GetPixelFormat(This,pFormat) )
    ( (This)->lpVtbl -> GetDelay(This,pdwDelay) )
    ( (This)->lpVtbl -> GetProperties(This,dwMode,ppPropSet) )
    ( (This)->lpVtbl -> Rotate(This,dwAngle) )
    ( (This)->lpVtbl -> Scale(This,cx,cy,hints) )
    ( (This)->lpVtbl -> DiscardEdit(This) )
    ( (This)->lpVtbl -> SetEncoderParams(This,pbagEnc) )
    ( (This)->lpVtbl -> DisplayName(This,wszName,cch) )
    ( (This)->lpVtbl -> GetResolution(This,puResolutionX,puResolutionY) )
    ( (This)->lpVtbl -> GetEncoderParams(This,pguidFmt,ppEncParams) )
    ( (This)->lpVtbl -> RegisterAbort(This,pAbort,ppAbortPrev) )
    ( (This)->lpVtbl -> CloneFrame(This,ppImg) )
    ( (This)->lpVtbl -> ReplaceFrame(This,pImg) )
EXTERN_C const IID IID_IShellImageDataAbort;
    typedef struct IShellImageDataAbortVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellImageDataAbort * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellImageDataAbort * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellImageDataAbort * This);
        HRESULT ( STDMETHODCALLTYPE *QueryAbort )(
            __RPC__in IShellImageDataAbort * This);
        END_INTERFACE
    } IShellImageDataAbortVtbl;
    interface IShellImageDataAbort
    {
        CONST_VTBL struct IShellImageDataAbortVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryAbort(This) )
EXTERN_C const IID LIBID_ShellImageData;
EXTERN_C const CLSID CLSID_ShellImageDataFactory;
class DECLSPEC_UUID("66e4e4fb-f385-4dd0-8d74-a2efd1bc6178")
ShellImageDataFactory;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_shimgdata_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shimgdata_0000_0004_v0_0_s_ifspec;
}
