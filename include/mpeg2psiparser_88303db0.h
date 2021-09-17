#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IGenericDescriptor IGenericDescriptor;
typedef interface IGenericDescriptor2 IGenericDescriptor2;
typedef interface IPAT IPAT;
typedef interface ICAT ICAT;
typedef interface IPMT IPMT;
typedef interface ITSDT ITSDT;
typedef interface IPSITables IPSITables;
#include "oaidl.h"
#include "ocidl.h"
#include "mpeg2structs.h"
#include "mpeg2data.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mpeg2psiparser_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mpeg2psiparser_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IGenericDescriptor;
    typedef struct IGenericDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IGenericDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IGenericDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IGenericDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IGenericDescriptor * This,
                       BYTE *pbDesc,
                       INT bCount);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IGenericDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IGenericDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetBody )(
            IGenericDescriptor * This,
                        BYTE **ppbVal);
        END_INTERFACE
    } IGenericDescriptorVtbl;
    interface IGenericDescriptor
    {
        CONST_VTBL struct IGenericDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pbDesc,bCount) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetBody(This,ppbVal) )
EXTERN_C const IID IID_IGenericDescriptor2;
    typedef struct IGenericDescriptor2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IGenericDescriptor2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IGenericDescriptor2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IGenericDescriptor2 * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IGenericDescriptor2 * This,
                       BYTE *pbDesc,
                       INT bCount);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IGenericDescriptor2 * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IGenericDescriptor2 * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetBody )(
            IGenericDescriptor2 * This,
                        BYTE **ppbVal);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IGenericDescriptor2 * This,
                       BYTE *pbDesc,
                       WORD wCount);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IGenericDescriptor2 * This,
                        WORD *pwVal);
        END_INTERFACE
    } IGenericDescriptor2Vtbl;
    interface IGenericDescriptor2
    {
        CONST_VTBL struct IGenericDescriptor2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pbDesc,bCount) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetBody(This,ppbVal) )
    ( (This)->lpVtbl -> Initialize(This,pbDesc,wCount) )
    ( (This)->lpVtbl -> GetLength(This,pwVal) )
typedef struct __MIDL_IPAT_0001
    {
    WORD wProgramNumber;
    WORD wProgramMapPID;
    } ProgramElement;
EXTERN_C const IID IID_IPAT;
    typedef struct IPATVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPAT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPAT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPAT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IPAT * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetTransportStreamId )(
            IPAT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            IPAT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IPAT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordProgramNumber )(
            IPAT * This,
                       DWORD dwIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordProgramMapPid )(
            IPAT * This,
                       DWORD dwIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *FindRecordProgramMapPid )(
            IPAT * This,
                       WORD wProgramNumber,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *RegisterForNextTable )(
            IPAT * This,
                       HANDLE hNextTableAvailable);
        HRESULT ( STDMETHODCALLTYPE *GetNextTable )(
            IPAT * This,
                        IPAT **ppPAT);
        HRESULT ( STDMETHODCALLTYPE *RegisterForWhenCurrent )(
            IPAT * This,
                       HANDLE hNextTableIsCurrent);
        HRESULT ( STDMETHODCALLTYPE *ConvertNextToCurrent )(
            IPAT * This);
        END_INTERFACE
    } IPATVtbl;
    interface IPAT
    {
        CONST_VTBL struct IPATVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetTransportStreamId(This,pwVal) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordProgramNumber(This,dwIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordProgramMapPid(This,dwIndex,pwVal) )
    ( (This)->lpVtbl -> FindRecordProgramMapPid(This,wProgramNumber,pwVal) )
    ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) )
    ( (This)->lpVtbl -> GetNextTable(This,ppPAT) )
    ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) )
    ( (This)->lpVtbl -> ConvertNextToCurrent(This) )
EXTERN_C const IID IID_ICAT;
    typedef struct ICATVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICAT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICAT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICAT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            ICAT * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            ICAT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfTableDescriptors )(
            ICAT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByIndex )(
            ICAT * This,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByTag )(
            ICAT * This,
                       BYTE bTag,
                            DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *RegisterForNextTable )(
            ICAT * This,
                       HANDLE hNextTableAvailable);
        HRESULT ( STDMETHODCALLTYPE *GetNextTable )(
            ICAT * This,
                       DWORD dwTimeout,
                        ICAT **ppCAT);
        HRESULT ( STDMETHODCALLTYPE *RegisterForWhenCurrent )(
            ICAT * This,
                       HANDLE hNextTableIsCurrent);
        HRESULT ( STDMETHODCALLTYPE *ConvertNextToCurrent )(
            ICAT * This);
        END_INTERFACE
    } ICATVtbl;
    interface ICAT
    {
        CONST_VTBL struct ICATVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
    ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) )
    ( (This)->lpVtbl -> GetNextTable(This,dwTimeout,ppCAT) )
    ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) )
    ( (This)->lpVtbl -> ConvertNextToCurrent(This) )
EXTERN_C const IID IID_IPMT;
    typedef struct IPMTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPMT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPMT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPMT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IPMT * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetProgramNumber )(
            IPMT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            IPMT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetPcrPid )(
            IPMT * This,
                        PID *pPidVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfTableDescriptors )(
            IPMT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByIndex )(
            IPMT * This,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByTag )(
            IPMT * This,
                       BYTE bTag,
                            DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IPMT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordStreamType )(
            IPMT * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordElementaryPid )(
            IPMT * This,
                       DWORD dwRecordIndex,
                        PID *pPidVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfDescriptors )(
            IPMT * This,
                       DWORD dwRecordIndex,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByIndex )(
            IPMT * This,
                       DWORD dwRecordIndex,
                       DWORD dwDescIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByTag )(
            IPMT * This,
                       DWORD dwRecordIndex,
                       BYTE bTag,
                            DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *QueryServiceGatewayInfo )(
            IPMT * This,
                        DSMCC_ELEMENT **ppDSMCCList,
                        UINT *puiCount);
        HRESULT ( STDMETHODCALLTYPE *QueryMPEInfo )(
            IPMT * This,
                        MPE_ELEMENT **ppMPEList,
                        UINT *puiCount);
        HRESULT ( STDMETHODCALLTYPE *RegisterForNextTable )(
            IPMT * This,
                       HANDLE hNextTableAvailable);
        HRESULT ( STDMETHODCALLTYPE *GetNextTable )(
            IPMT * This,
                        IPMT **ppPMT);
        HRESULT ( STDMETHODCALLTYPE *RegisterForWhenCurrent )(
            IPMT * This,
                       HANDLE hNextTableIsCurrent);
        HRESULT ( STDMETHODCALLTYPE *ConvertNextToCurrent )(
            IPMT * This);
        END_INTERFACE
    } IPMTVtbl;
    interface IPMT
    {
        CONST_VTBL struct IPMTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetProgramNumber(This,pwVal) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetPcrPid(This,pPidVal) )
    ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
    ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pwVal) )
    ( (This)->lpVtbl -> GetRecordStreamType(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordElementaryPid(This,dwRecordIndex,pPidVal) )
    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwDescIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> QueryServiceGatewayInfo(This,ppDSMCCList,puiCount) )
    ( (This)->lpVtbl -> QueryMPEInfo(This,ppMPEList,puiCount) )
    ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) )
    ( (This)->lpVtbl -> GetNextTable(This,ppPMT) )
    ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) )
    ( (This)->lpVtbl -> ConvertNextToCurrent(This) )
EXTERN_C const IID IID_ITSDT;
    typedef struct ITSDTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITSDT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITSDT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITSDT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            ITSDT * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            ITSDT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfTableDescriptors )(
            ITSDT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByIndex )(
            ITSDT * This,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByTag )(
            ITSDT * This,
                       BYTE bTag,
                            DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *RegisterForNextTable )(
            ITSDT * This,
                       HANDLE hNextTableAvailable);
        HRESULT ( STDMETHODCALLTYPE *GetNextTable )(
            ITSDT * This,
                        ITSDT **ppTSDT);
        HRESULT ( STDMETHODCALLTYPE *RegisterForWhenCurrent )(
            ITSDT * This,
                       HANDLE hNextTableIsCurrent);
        HRESULT ( STDMETHODCALLTYPE *ConvertNextToCurrent )(
            ITSDT * This);
        END_INTERFACE
    } ITSDTVtbl;
    interface ITSDT
    {
        CONST_VTBL struct ITSDTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
    ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) )
    ( (This)->lpVtbl -> GetNextTable(This,ppTSDT) )
    ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) )
    ( (This)->lpVtbl -> ConvertNextToCurrent(This) )
EXTERN_C const IID IID_IPSITables;
    typedef struct IPSITablesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPSITables * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPSITables * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPSITables * This);
        HRESULT ( STDMETHODCALLTYPE *GetTable )(
            __RPC__in IPSITables * This,
                       DWORD dwTSID,
                       DWORD dwTID_PID,
                       DWORD dwHashedVer,
                       DWORD dwPara4,
                        __RPC__deref_out_opt IUnknown **ppIUnknown);
        END_INTERFACE
    } IPSITablesVtbl;
    interface IPSITables
    {
        CONST_VTBL struct IPSITablesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTable(This,dwTSID,dwTID_PID,dwHashedVer,dwPara4,ppIUnknown) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mpeg2psiparser_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mpeg2psiparser_0000_0007_v0_0_s_ifspec;
}
