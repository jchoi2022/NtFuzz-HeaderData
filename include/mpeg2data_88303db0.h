#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMpeg2TableFilter IMpeg2TableFilter;
typedef interface IMpeg2Data IMpeg2Data;
typedef interface ISectionList ISectionList;
typedef interface IMpeg2Stream IMpeg2Stream;
typedef class SectionList SectionList;
typedef class Mpeg2Stream Mpeg2Stream;
typedef class Mpeg2Data Mpeg2Data;
#include "oaidl.h"
#include "ocidl.h"
#include "bdaiface.h"
#include "mpeg2structs.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma pack(push)
#pragma pack(1)
extern RPC_IF_HANDLE __MIDL_itf_mpeg2data_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mpeg2data_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMpeg2TableFilter;
    typedef struct IMpeg2TableFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMpeg2TableFilter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMpeg2TableFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMpeg2TableFilter * This);
        HRESULT ( STDMETHODCALLTYPE *AddPID )(
            __RPC__in IMpeg2TableFilter * This,
            PID p);
        HRESULT ( STDMETHODCALLTYPE *AddTable )(
            __RPC__in IMpeg2TableFilter * This,
            PID p,
            TID t);
        HRESULT ( STDMETHODCALLTYPE *AddExtension )(
            __RPC__in IMpeg2TableFilter * This,
            PID p,
            TID t,
            TEID e);
        HRESULT ( STDMETHODCALLTYPE *RemovePID )(
            __RPC__in IMpeg2TableFilter * This,
            PID p);
        HRESULT ( STDMETHODCALLTYPE *RemoveTable )(
            __RPC__in IMpeg2TableFilter * This,
            PID p,
            TID t);
        HRESULT ( STDMETHODCALLTYPE *RemoveExtension )(
            __RPC__in IMpeg2TableFilter * This,
            PID p,
            TID t,
            TEID e);
        END_INTERFACE
    } IMpeg2TableFilterVtbl;
    interface IMpeg2TableFilter
    {
        CONST_VTBL struct IMpeg2TableFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddPID(This,p) )
    ( (This)->lpVtbl -> AddTable(This,p,t) )
    ( (This)->lpVtbl -> AddExtension(This,p,t,e) )
    ( (This)->lpVtbl -> RemovePID(This,p) )
    ( (This)->lpVtbl -> RemoveTable(This,p,t) )
    ( (This)->lpVtbl -> RemoveExtension(This,p,t,e) )
typedef struct Mpeg2TableSampleHdr
    {
    BYTE SectionCount;
    BYTE Reserved[ 3 ];
    long SectionOffsets[ 1 ];
    } Mpeg2TableSampleHdr;
DEFINE_GUID(CLSID_Mpeg2TableFilter,
0x752845f1, 0x758f, 0x4c83, 0xa0, 0x43, 0x42, 0x70, 0xc5, 0x93, 0x30, 0x8e);
class DECLSPEC_UUID("DBAF6C1B-B6A4-4898-AE65-204F0D9509A1") Mpeg2DataLib;
extern RPC_IF_HANDLE __MIDL_itf_mpeg2data_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mpeg2data_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID LIBID_Mpeg2DataLib;
EXTERN_C const IID IID_IMpeg2Data;
    typedef struct IMpeg2DataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMpeg2Data * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMpeg2Data * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMpeg2Data * This);
        HRESULT ( STDMETHODCALLTYPE *GetSection )(
            __RPC__in IMpeg2Data * This,
                       PID pid,
                       TID tid,
                       __RPC__in PMPEG2_FILTER pFilter,
                       DWORD dwTimeout,
                        __RPC__deref_out_opt ISectionList **ppSectionList);
        HRESULT ( STDMETHODCALLTYPE *GetTable )(
            __RPC__in IMpeg2Data * This,
                       PID pid,
                       TID tid,
                       __RPC__in PMPEG2_FILTER pFilter,
                       DWORD dwTimeout,
                        __RPC__deref_out_opt ISectionList **ppSectionList);
        HRESULT ( STDMETHODCALLTYPE *GetStreamOfSections )(
            __RPC__in IMpeg2Data * This,
                       PID pid,
                       TID tid,
                       __RPC__in PMPEG2_FILTER pFilter,
                       __RPC__in HANDLE hDataReadyEvent,
                        __RPC__deref_out_opt IMpeg2Stream **ppMpegStream);
        END_INTERFACE
    } IMpeg2DataVtbl;
    interface IMpeg2Data
    {
        CONST_VTBL struct IMpeg2DataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSection(This,pid,tid,pFilter,dwTimeout,ppSectionList) )
    ( (This)->lpVtbl -> GetTable(This,pid,tid,pFilter,dwTimeout,ppSectionList) )
    ( (This)->lpVtbl -> GetStreamOfSections(This,pid,tid,pFilter,hDataReadyEvent,ppMpegStream) )
EXTERN_C const IID IID_ISectionList;
    typedef struct ISectionListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISectionList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISectionList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISectionList * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ISectionList * This,
                       MPEG_REQUEST_TYPE requestType,
                       __RPC__in_opt IMpeg2Data *pMpeg2Data,
                       __RPC__in PMPEG_CONTEXT pContext,
                       PID pid,
                       TID tid,
                       __RPC__in PMPEG2_FILTER pFilter,
                       DWORD timeout,
                       __RPC__in HANDLE hDoneEvent);
        HRESULT ( STDMETHODCALLTYPE *InitializeWithRawSections )(
            __RPC__in ISectionList * This,
                       __RPC__in PMPEG_PACKET_LIST pmplSections);
        HRESULT ( STDMETHODCALLTYPE *CancelPendingRequest )(
            __RPC__in ISectionList * This);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfSections )(
            __RPC__in ISectionList * This,
                        __RPC__out WORD *pCount);
        HRESULT ( STDMETHODCALLTYPE *GetSectionData )(
            __RPC__in ISectionList * This,
                       WORD sectionNumber,
                        __RPC__out DWORD *pdwRawPacketLength,
                        __RPC__deref_out_opt PSECTION *ppSection);
        HRESULT ( STDMETHODCALLTYPE *GetProgramIdentifier )(
            __RPC__in ISectionList * This,
            __RPC__in PID *pPid);
        HRESULT ( STDMETHODCALLTYPE *GetTableIdentifier )(
            __RPC__in ISectionList * This,
            __RPC__in TID *pTableId);
        END_INTERFACE
    } ISectionListVtbl;
    interface ISectionList
    {
        CONST_VTBL struct ISectionListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,requestType,pMpeg2Data,pContext,pid,tid,pFilter,timeout,hDoneEvent) )
    ( (This)->lpVtbl -> InitializeWithRawSections(This,pmplSections) )
    ( (This)->lpVtbl -> CancelPendingRequest(This) )
    ( (This)->lpVtbl -> GetNumberOfSections(This,pCount) )
    ( (This)->lpVtbl -> GetSectionData(This,sectionNumber,pdwRawPacketLength,ppSection) )
    ( (This)->lpVtbl -> GetProgramIdentifier(This,pPid) )
    ( (This)->lpVtbl -> GetTableIdentifier(This,pTableId) )
EXTERN_C const IID IID_IMpeg2Stream;
    typedef struct IMpeg2StreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMpeg2Stream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMpeg2Stream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMpeg2Stream * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IMpeg2Stream * This,
                       MPEG_REQUEST_TYPE requestType,
                       __RPC__in_opt IMpeg2Data *pMpeg2Data,
                       __RPC__in PMPEG_CONTEXT pContext,
                       PID pid,
                       TID tid,
                       __RPC__in PMPEG2_FILTER pFilter,
                       __RPC__in HANDLE hDataReadyEvent);
        HRESULT ( STDMETHODCALLTYPE *SupplyDataBuffer )(
            __RPC__in IMpeg2Stream * This,
                       __RPC__in PMPEG_STREAM_BUFFER pStreamBuffer);
        END_INTERFACE
    } IMpeg2StreamVtbl;
    interface IMpeg2Stream
    {
        CONST_VTBL struct IMpeg2StreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,requestType,pMpeg2Data,pContext,pid,tid,pFilter,hDataReadyEvent) )
    ( (This)->lpVtbl -> SupplyDataBuffer(This,pStreamBuffer) )
EXTERN_C const CLSID CLSID_SectionList;
class DECLSPEC_UUID("73DA5D04-4347-45d3-A9DC-FAE9DDBE558D")
SectionList;
EXTERN_C const CLSID CLSID_Mpeg2Stream;
class DECLSPEC_UUID("F91D96C7-8509-4d0b-AB26-A0DD10904BB7")
Mpeg2Stream;
EXTERN_C const CLSID CLSID_Mpeg2Data;
class DECLSPEC_UUID("C666E115-BB62-4027-A113-82D643FE2D99")
Mpeg2Data;
#pragma pack(pop)
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mpeg2data_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mpeg2data_0000_0002_v0_0_s_ifspec;
}
