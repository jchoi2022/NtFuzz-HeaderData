#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface ICounterItem ICounterItem;
typedef interface ICounterItem2 ICounterItem2;
typedef interface _ICounterItemUnion _ICounterItemUnion;
typedef interface DICounterItem DICounterItem;
typedef interface ICounters ICounters;
typedef interface ILogFileItem ILogFileItem;
typedef interface DILogFileItem DILogFileItem;
typedef interface ILogFiles ILogFiles;
typedef interface ISystemMonitor ISystemMonitor;
typedef interface ISystemMonitor2 ISystemMonitor2;
typedef interface _ISystemMonitorUnion _ISystemMonitorUnion;
typedef interface DISystemMonitor DISystemMonitor;
typedef interface DISystemMonitorInternal DISystemMonitorInternal;
typedef interface ISystemMonitorEvents ISystemMonitorEvents;
typedef interface DISystemMonitorEvents DISystemMonitorEvents;
typedef class SystemMonitor SystemMonitor;
typedef class CounterItem CounterItem;
typedef class Counters Counters;
typedef class LogFileItem LogFileItem;
typedef class LogFiles LogFiles;
typedef class CounterItem2 CounterItem2;
typedef class SystemMonitor2 SystemMonitor2;
typedef class AppearPropPage AppearPropPage;
typedef class GeneralPropPage GeneralPropPage;
typedef class GraphPropPage GraphPropPage;
typedef class SourcePropPage SourcePropPage;
typedef class CounterPropPage CounterPropPage;
#include "ocidl.h"
extern "C"{
typedef
enum eDisplayTypeConstant
    {
        sysmonLineGraph = 1,
        sysmonHistogram = 2,
        sysmonReport = 3,
        sysmonChartArea = 4,
        sysmonChartStackedArea = 5
    } DisplayTypeConstants;
typedef
enum eReportValueTypeConstant
    {
        sysmonDefaultValue = 0,
        sysmonCurrentValue = 0x1,
        sysmonAverage = 0x2,
        sysmonMinimum = 0x3,
        sysmonMaximum = 0x4
    } ReportValueTypeConstants;
typedef
enum eDataSourceTypeConstant
    {
        sysmonNullDataSource = 0xffffffff,
        sysmonCurrentActivity = 0x1,
        sysmonLogFiles = 0x2,
        sysmonSqlLog = 0x3
    } DataSourceTypeConstants;
typedef
enum __MIDL___MIDL_itf_sysmon_0000_0000_0001
    {
        sysmonFileHtml = 1,
        sysmonFileReport = 2,
        sysmonFileCsv = 3,
        sysmonFileTsv = 4,
        sysmonFileBlg = 5,
        sysmonFileRetiredBlg = 6,
        sysmonFileGif = 7
    } SysmonFileType;
typedef
enum __MIDL___MIDL_itf_sysmon_0000_0000_0002
    {
        sysmonDataAvg = 1,
        sysmonDataMin = 2,
        sysmonDataMax = 3,
        sysmonDataTime = 4,
        sysmonDataCount = 5
    } SysmonDataType;
typedef
enum __MIDL___MIDL_itf_sysmon_0000_0000_0003
    {
        sysmonBatchNone = 0,
        sysmonBatchAddFiles = 1,
        sysmonBatchAddCounters = 2,
        sysmonBatchAddFilesAutoCounters = 3
    } SysmonBatchReason;
DEFINE_GUID(LIBID_SystemMonitor,0x1B773E42,0x2509,0x11cf,0x94,0x2F,0x00,0x80,0x29,0x00,0x43,0x47);
DEFINE_GUID(IID_ICounterItem,0x771A9520,0xEE28,0x11ce,0x94,0x1E,0x00,0x80,0x29,0x00,0x43,0x47);
    typedef struct ICounterItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICounterItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICounterItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICounterItem * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in ICounterItem * This,
                                __RPC__out double *pdblValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_Color )(
            __RPC__in ICounterItem * This,
                       OLE_COLOR Color);
                            HRESULT ( STDMETHODCALLTYPE *get_Color )(
            __RPC__in ICounterItem * This,
                                __RPC__out OLE_COLOR *pColor);
                                        HRESULT ( STDMETHODCALLTYPE *put_Width )(
            __RPC__in ICounterItem * This,
                       INT iWidth);
                            HRESULT ( STDMETHODCALLTYPE *get_Width )(
            __RPC__in ICounterItem * This,
                                __RPC__out INT *piValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_LineStyle )(
            __RPC__in ICounterItem * This,
                       INT iLineStyle);
                            HRESULT ( STDMETHODCALLTYPE *get_LineStyle )(
            __RPC__in ICounterItem * This,
                                __RPC__out INT *piValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_ScaleFactor )(
            __RPC__in ICounterItem * This,
                       INT iScale);
                            HRESULT ( STDMETHODCALLTYPE *get_ScaleFactor )(
            __RPC__in ICounterItem * This,
                                __RPC__out INT *piValue);
                            HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in ICounterItem * This,
                                __RPC__deref_out_opt BSTR *pstrValue);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in ICounterItem * This,
                        __RPC__out double *Value,
                        __RPC__out long *Status);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            __RPC__in ICounterItem * This,
                        __RPC__out double *Max,
                        __RPC__out double *Min,
                        __RPC__out double *Avg,
                        __RPC__out long *Status);
        END_INTERFACE
    } ICounterItemVtbl;
    interface ICounterItem
    {
        CONST_VTBL struct ICounterItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Value(This,pdblValue) )
    ( (This)->lpVtbl -> put_Color(This,Color) )
    ( (This)->lpVtbl -> get_Color(This,pColor) )
    ( (This)->lpVtbl -> put_Width(This,iWidth) )
    ( (This)->lpVtbl -> get_Width(This,piValue) )
    ( (This)->lpVtbl -> put_LineStyle(This,iLineStyle) )
    ( (This)->lpVtbl -> get_LineStyle(This,piValue) )
    ( (This)->lpVtbl -> put_ScaleFactor(This,iScale) )
    ( (This)->lpVtbl -> get_ScaleFactor(This,piValue) )
    ( (This)->lpVtbl -> get_Path(This,pstrValue) )
    ( (This)->lpVtbl -> GetValue(This,Value,Status) )
    ( (This)->lpVtbl -> GetStatistics(This,Max,Min,Avg,Status) )
DEFINE_GUID(IID_ICounterItem2,0xeefcd4e1,0xea1c,0x4435,0xb7,0xf4,0xe3,0x41,0xba,0x03,0xb4,0xf9);
    typedef struct ICounterItem2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICounterItem2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICounterItem2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICounterItem2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in ICounterItem2 * This,
                                __RPC__out double *pdblValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_Color )(
            __RPC__in ICounterItem2 * This,
                       OLE_COLOR Color);
                            HRESULT ( STDMETHODCALLTYPE *get_Color )(
            __RPC__in ICounterItem2 * This,
                                __RPC__out OLE_COLOR *pColor);
                                        HRESULT ( STDMETHODCALLTYPE *put_Width )(
            __RPC__in ICounterItem2 * This,
                       INT iWidth);
                            HRESULT ( STDMETHODCALLTYPE *get_Width )(
            __RPC__in ICounterItem2 * This,
                                __RPC__out INT *piValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_LineStyle )(
            __RPC__in ICounterItem2 * This,
                       INT iLineStyle);
                            HRESULT ( STDMETHODCALLTYPE *get_LineStyle )(
            __RPC__in ICounterItem2 * This,
                                __RPC__out INT *piValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_ScaleFactor )(
            __RPC__in ICounterItem2 * This,
                       INT iScale);
                            HRESULT ( STDMETHODCALLTYPE *get_ScaleFactor )(
            __RPC__in ICounterItem2 * This,
                                __RPC__out INT *piValue);
                            HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in ICounterItem2 * This,
                                __RPC__deref_out_opt BSTR *pstrValue);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in ICounterItem2 * This,
                        __RPC__out double *Value,
                        __RPC__out long *Status);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            __RPC__in ICounterItem2 * This,
                        __RPC__out double *Max,
                        __RPC__out double *Min,
                        __RPC__out double *Avg,
                        __RPC__out long *Status);
                                        HRESULT ( STDMETHODCALLTYPE *put_Selected )(
            __RPC__in ICounterItem2 * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_Selected )(
            __RPC__in ICounterItem2 * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_Visible )(
            __RPC__in ICounterItem2 * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_Visible )(
            __RPC__in ICounterItem2 * This,
                                __RPC__out VARIANT_BOOL *pbState);
                               HRESULT ( STDMETHODCALLTYPE *GetDataAt )(
            __RPC__in ICounterItem2 * This,
                       INT iIndex,
                       SysmonDataType iWhich,
                        __RPC__out VARIANT *pVariant);
        END_INTERFACE
    } ICounterItem2Vtbl;
    interface ICounterItem2
    {
        CONST_VTBL struct ICounterItem2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Value(This,pdblValue) )
    ( (This)->lpVtbl -> put_Color(This,Color) )
    ( (This)->lpVtbl -> get_Color(This,pColor) )
    ( (This)->lpVtbl -> put_Width(This,iWidth) )
    ( (This)->lpVtbl -> get_Width(This,piValue) )
    ( (This)->lpVtbl -> put_LineStyle(This,iLineStyle) )
    ( (This)->lpVtbl -> get_LineStyle(This,piValue) )
    ( (This)->lpVtbl -> put_ScaleFactor(This,iScale) )
    ( (This)->lpVtbl -> get_ScaleFactor(This,piValue) )
    ( (This)->lpVtbl -> get_Path(This,pstrValue) )
    ( (This)->lpVtbl -> GetValue(This,Value,Status) )
    ( (This)->lpVtbl -> GetStatistics(This,Max,Min,Avg,Status) )
    ( (This)->lpVtbl -> put_Selected(This,bState) )
    ( (This)->lpVtbl -> get_Selected(This,pbState) )
    ( (This)->lpVtbl -> put_Visible(This,bState) )
    ( (This)->lpVtbl -> get_Visible(This,pbState) )
    ( (This)->lpVtbl -> GetDataAt(This,iIndex,iWhich,pVariant) )
DEFINE_GUID(IID__ICounterItemUnion,0xde1a6b74,0x9182,0x4c41,0x8e,0x2c,0x24,0xc2,0xcd,0x30,0xee,0x83);
    typedef struct _ICounterItemUnionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ICounterItemUnion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ICounterItemUnion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ICounterItemUnion * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in _ICounterItemUnion * This,
                                __RPC__out double *pdblValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_Color )(
            __RPC__in _ICounterItemUnion * This,
                       OLE_COLOR Color);
                            HRESULT ( STDMETHODCALLTYPE *get_Color )(
            __RPC__in _ICounterItemUnion * This,
                                __RPC__out OLE_COLOR *pColor);
                                        HRESULT ( STDMETHODCALLTYPE *put_Width )(
            __RPC__in _ICounterItemUnion * This,
                       INT iWidth);
                            HRESULT ( STDMETHODCALLTYPE *get_Width )(
            __RPC__in _ICounterItemUnion * This,
                                __RPC__out INT *piValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_LineStyle )(
            __RPC__in _ICounterItemUnion * This,
                       INT iLineStyle);
                            HRESULT ( STDMETHODCALLTYPE *get_LineStyle )(
            __RPC__in _ICounterItemUnion * This,
                                __RPC__out INT *piValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_ScaleFactor )(
            __RPC__in _ICounterItemUnion * This,
                       INT iScale);
                            HRESULT ( STDMETHODCALLTYPE *get_ScaleFactor )(
            __RPC__in _ICounterItemUnion * This,
                                __RPC__out INT *piValue);
                            HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in _ICounterItemUnion * This,
                                __RPC__deref_out_opt BSTR *pstrValue);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in _ICounterItemUnion * This,
                        __RPC__out double *Value,
                        __RPC__out long *Status);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            __RPC__in _ICounterItemUnion * This,
                        __RPC__out double *Max,
                        __RPC__out double *Min,
                        __RPC__out double *Avg,
                        __RPC__out long *Status);
                                        HRESULT ( STDMETHODCALLTYPE *put_Selected )(
            __RPC__in _ICounterItemUnion * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_Selected )(
            __RPC__in _ICounterItemUnion * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_Visible )(
            __RPC__in _ICounterItemUnion * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_Visible )(
            __RPC__in _ICounterItemUnion * This,
                                __RPC__out VARIANT_BOOL *pbState);
                               HRESULT ( STDMETHODCALLTYPE *GetDataAt )(
            __RPC__in _ICounterItemUnion * This,
                       INT iIndex,
                       SysmonDataType iWhich,
                        __RPC__out VARIANT *pVariant);
        END_INTERFACE
    } _ICounterItemUnionVtbl;
    interface _ICounterItemUnion
    {
        CONST_VTBL struct _ICounterItemUnionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Value(This,pdblValue) )
    ( (This)->lpVtbl -> put_Color(This,Color) )
    ( (This)->lpVtbl -> get_Color(This,pColor) )
    ( (This)->lpVtbl -> put_Width(This,iWidth) )
    ( (This)->lpVtbl -> get_Width(This,piValue) )
    ( (This)->lpVtbl -> put_LineStyle(This,iLineStyle) )
    ( (This)->lpVtbl -> get_LineStyle(This,piValue) )
    ( (This)->lpVtbl -> put_ScaleFactor(This,iScale) )
    ( (This)->lpVtbl -> get_ScaleFactor(This,piValue) )
    ( (This)->lpVtbl -> get_Path(This,pstrValue) )
    ( (This)->lpVtbl -> GetValue(This,Value,Status) )
    ( (This)->lpVtbl -> GetStatistics(This,Max,Min,Avg,Status) )
    ( (This)->lpVtbl -> put_Selected(This,bState) )
    ( (This)->lpVtbl -> get_Selected(This,pbState) )
    ( (This)->lpVtbl -> put_Visible(This,bState) )
    ( (This)->lpVtbl -> get_Visible(This,pbState) )
    ( (This)->lpVtbl -> GetDataAt(This,iIndex,iWhich,pVariant) )
DEFINE_GUID(DIID_DICounterItem,0xC08C4FF2,0x0E2E,0x11cf,0x94,0x2C,0x00,0x80,0x29,0x00,0x43,0x47);
    typedef struct DICounterItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DICounterItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DICounterItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DICounterItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DICounterItem * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DICounterItem * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DICounterItem * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DICounterItem * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } DICounterItemVtbl;
    interface DICounterItem
    {
        CONST_VTBL struct DICounterItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
DEFINE_GUID(IID_ICounters,0x79167962,0x28FC,0x11cf,0x94,0x2F,0x00,0x80,0x29,0x00,0x43,0x47);
    typedef struct ICountersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICounters * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICounters * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICounters * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICounters * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICounters * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICounters * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICounters * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ICounters * This,
                                __RPC__out long *pLong);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ICounters * This,
                                __RPC__deref_out_opt IUnknown **ppIunk);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ICounters * This,
                       VARIANT index,
                                __RPC__deref_out_opt DICounterItem **ppI);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ICounters * This,
                       __RPC__in BSTR pathname,
                                __RPC__deref_out_opt DICounterItem **ppI);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ICounters * This,
                       VARIANT index);
        END_INTERFACE
    } ICountersVtbl;
    interface ICounters
    {
        CONST_VTBL struct ICountersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pLong) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppIunk) )
    ( (This)->lpVtbl -> get_Item(This,index,ppI) )
    ( (This)->lpVtbl -> Add(This,pathname,ppI) )
    ( (This)->lpVtbl -> Remove(This,index) )
DEFINE_GUID(IID_ILogFileItem,0xD6B518DD,0x05C7,0x418a,0x89,0xE6,0x4F,0x9C,0xE8,0xC6,0x84,0x1E);
    typedef struct ILogFileItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILogFileItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILogFileItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILogFileItem * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in ILogFileItem * This,
                                __RPC__deref_out_opt BSTR *pstrValue);
        END_INTERFACE
    } ILogFileItemVtbl;
    interface ILogFileItem
    {
        CONST_VTBL struct ILogFileItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Path(This,pstrValue) )
DEFINE_GUID(DIID_DILogFileItem,0x8D093FFC,0xF777,0x4917,0x82,0xD1,0x83,0x3F,0xBC,0x54,0xC5,0x8F);
    typedef struct DILogFileItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DILogFileItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DILogFileItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DILogFileItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DILogFileItem * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DILogFileItem * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DILogFileItem * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DILogFileItem * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } DILogFileItemVtbl;
    interface DILogFileItem
    {
        CONST_VTBL struct DILogFileItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
DEFINE_GUID(IID_ILogFiles,0x6A2A97E6,0x6851,0x41ea,0x87,0xAD,0x2A,0x82,0x25,0x33,0x58,0x65);
    typedef struct ILogFilesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILogFiles * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILogFiles * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILogFiles * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ILogFiles * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ILogFiles * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ILogFiles * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ILogFiles * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ILogFiles * This,
                                __RPC__out long *pLong);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ILogFiles * This,
                                __RPC__deref_out_opt IUnknown **ppIunk);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ILogFiles * This,
                       VARIANT index,
                                __RPC__deref_out_opt DILogFileItem **ppI);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ILogFiles * This,
                       __RPC__in BSTR pathname,
                                __RPC__deref_out_opt DILogFileItem **ppI);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ILogFiles * This,
                       VARIANT index);
        END_INTERFACE
    } ILogFilesVtbl;
    interface ILogFiles
    {
        CONST_VTBL struct ILogFilesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pLong) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppIunk) )
    ( (This)->lpVtbl -> get_Item(This,index,ppI) )
    ( (This)->lpVtbl -> Add(This,pathname,ppI) )
    ( (This)->lpVtbl -> Remove(This,index) )
DEFINE_GUID(IID_ISystemMonitor,0x194EB241,0xC32C,0x11cf,0x93,0x98,0x00,0xAA,0x00,0xA3,0xDD,0xEA);
    typedef struct ISystemMonitorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISystemMonitor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISystemMonitor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISystemMonitor * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Appearance )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out INT *iAppearance);
                            HRESULT ( STDMETHODCALLTYPE *put_Appearance )(
            __RPC__in ISystemMonitor * This,
                       INT iAppearance);
                                        HRESULT ( STDMETHODCALLTYPE *get_BackColor )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out OLE_COLOR *pColor);
                            HRESULT ( STDMETHODCALLTYPE *put_BackColor )(
            __RPC__in ISystemMonitor * This,
                       OLE_COLOR Color);
                                        HRESULT ( STDMETHODCALLTYPE *get_BorderStyle )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out INT *iBorderStyle);
                            HRESULT ( STDMETHODCALLTYPE *put_BorderStyle )(
            __RPC__in ISystemMonitor * This,
                       INT iBorderStyle);
                                        HRESULT ( STDMETHODCALLTYPE *get_ForeColor )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out OLE_COLOR *pColor);
                            HRESULT ( STDMETHODCALLTYPE *put_ForeColor )(
            __RPC__in ISystemMonitor * This,
                       OLE_COLOR Color);
                                        HRESULT ( STDMETHODCALLTYPE *get_Font )(
            __RPC__in ISystemMonitor * This,
                                __RPC__deref_out_opt IFontDisp **ppFont);
                               HRESULT ( STDMETHODCALLTYPE *putref_Font )(
            __RPC__in ISystemMonitor * This,
                       __RPC__in_opt IFontDisp *pFont);
                                        HRESULT ( STDMETHODCALLTYPE *get_Counters )(
            __RPC__in ISystemMonitor * This,
                                __RPC__deref_out_opt ICounters **ppICounters);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowVerticalGrid )(
            __RPC__in ISystemMonitor * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowVerticalGrid )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowHorizontalGrid )(
            __RPC__in ISystemMonitor * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowHorizontalGrid )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowLegend )(
            __RPC__in ISystemMonitor * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowLegend )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowScaleLabels )(
            __RPC__in ISystemMonitor * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowScaleLabels )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowValueBar )(
            __RPC__in ISystemMonitor * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowValueBar )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaximumScale )(
            __RPC__in ISystemMonitor * This,
                       INT iValue);
                            HRESULT ( STDMETHODCALLTYPE *get_MaximumScale )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out INT *piValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinimumScale )(
            __RPC__in ISystemMonitor * This,
                       INT iValue);
                            HRESULT ( STDMETHODCALLTYPE *get_MinimumScale )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out INT *piValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_UpdateInterval )(
            __RPC__in ISystemMonitor * This,
                       FLOAT fValue);
                            HRESULT ( STDMETHODCALLTYPE *get_UpdateInterval )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out FLOAT *pfValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisplayType )(
            __RPC__in ISystemMonitor * This,
                       DisplayTypeConstants eDisplayType);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplayType )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out DisplayTypeConstants *peDisplayType);
                                        HRESULT ( STDMETHODCALLTYPE *put_ManualUpdate )(
            __RPC__in ISystemMonitor * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ManualUpdate )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_GraphTitle )(
            __RPC__in ISystemMonitor * This,
                       __RPC__in BSTR bsTitle);
                            HRESULT ( STDMETHODCALLTYPE *get_GraphTitle )(
            __RPC__in ISystemMonitor * This,
                                __RPC__deref_out_opt BSTR *pbsTitle);
                                        HRESULT ( STDMETHODCALLTYPE *put_YAxisLabel )(
            __RPC__in ISystemMonitor * This,
                       __RPC__in BSTR bsTitle);
                            HRESULT ( STDMETHODCALLTYPE *get_YAxisLabel )(
            __RPC__in ISystemMonitor * This,
                                __RPC__deref_out_opt BSTR *pbsTitle);
                               HRESULT ( STDMETHODCALLTYPE *CollectSample )(
            __RPC__in ISystemMonitor * This);
                               HRESULT ( STDMETHODCALLTYPE *UpdateGraph )(
            __RPC__in ISystemMonitor * This);
                               HRESULT ( STDMETHODCALLTYPE *BrowseCounters )(
            __RPC__in ISystemMonitor * This);
                               HRESULT ( STDMETHODCALLTYPE *DisplayProperties )(
            __RPC__in ISystemMonitor * This);
                           HRESULT ( STDMETHODCALLTYPE *Counter )(
            __RPC__in ISystemMonitor * This,
                       INT iIndex,
                        __RPC__deref_out_opt ICounterItem **ppICounter);
                           HRESULT ( STDMETHODCALLTYPE *AddCounter )(
            __RPC__in ISystemMonitor * This,
                       __RPC__in BSTR bsPath,
                        __RPC__deref_out_opt ICounterItem **ppICounter);
                           HRESULT ( STDMETHODCALLTYPE *DeleteCounter )(
            __RPC__in ISystemMonitor * This,
                       __RPC__in_opt ICounterItem *pCtr);
                                        HRESULT ( STDMETHODCALLTYPE *get_BackColorCtl )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out OLE_COLOR *pColor);
                            HRESULT ( STDMETHODCALLTYPE *put_BackColorCtl )(
            __RPC__in ISystemMonitor * This,
                       OLE_COLOR Color);
                                        HRESULT ( STDMETHODCALLTYPE *put_LogFileName )(
            __RPC__in ISystemMonitor * This,
                       __RPC__in BSTR bsFileName);
                            HRESULT ( STDMETHODCALLTYPE *get_LogFileName )(
            __RPC__in ISystemMonitor * This,
                                __RPC__deref_out_opt BSTR *bsFileName);
                                        HRESULT ( STDMETHODCALLTYPE *put_LogViewStart )(
            __RPC__in ISystemMonitor * This,
                       DATE StartTime);
                            HRESULT ( STDMETHODCALLTYPE *get_LogViewStart )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out DATE *StartTime);
                                        HRESULT ( STDMETHODCALLTYPE *put_LogViewStop )(
            __RPC__in ISystemMonitor * This,
                       DATE StopTime);
                            HRESULT ( STDMETHODCALLTYPE *get_LogViewStop )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out DATE *StopTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_GridColor )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out OLE_COLOR *pColor);
                            HRESULT ( STDMETHODCALLTYPE *put_GridColor )(
            __RPC__in ISystemMonitor * This,
                       OLE_COLOR Color);
                                        HRESULT ( STDMETHODCALLTYPE *get_TimeBarColor )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out OLE_COLOR *pColor);
                            HRESULT ( STDMETHODCALLTYPE *put_TimeBarColor )(
            __RPC__in ISystemMonitor * This,
                       OLE_COLOR Color);
                                        HRESULT ( STDMETHODCALLTYPE *get_Highlight )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out VARIANT_BOOL *pbState);
                            HRESULT ( STDMETHODCALLTYPE *put_Highlight )(
            __RPC__in ISystemMonitor * This,
                       VARIANT_BOOL bState);
                                        HRESULT ( STDMETHODCALLTYPE *get_ShowToolbar )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out VARIANT_BOOL *pbState);
                            HRESULT ( STDMETHODCALLTYPE *put_ShowToolbar )(
            __RPC__in ISystemMonitor * This,
                       VARIANT_BOOL bState);
                               HRESULT ( STDMETHODCALLTYPE *Paste )(
            __RPC__in ISystemMonitor * This);
                               HRESULT ( STDMETHODCALLTYPE *Copy )(
            __RPC__in ISystemMonitor * This);
                               HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ISystemMonitor * This);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReadOnly )(
            __RPC__in ISystemMonitor * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReportValueType )(
            __RPC__in ISystemMonitor * This,
                       ReportValueTypeConstants eReportValueType);
                            HRESULT ( STDMETHODCALLTYPE *get_ReportValueType )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out ReportValueTypeConstants *peReportValueType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MonitorDuplicateInstances )(
            __RPC__in ISystemMonitor * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_MonitorDuplicateInstances )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisplayFilter )(
            __RPC__in ISystemMonitor * This,
                       INT iValue);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplayFilter )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out INT *piValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_LogFiles )(
            __RPC__in ISystemMonitor * This,
                                __RPC__deref_out_opt ILogFiles **ppILogFiles);
                                        HRESULT ( STDMETHODCALLTYPE *put_DataSourceType )(
            __RPC__in ISystemMonitor * This,
                       DataSourceTypeConstants eDataSourceType);
                            HRESULT ( STDMETHODCALLTYPE *get_DataSourceType )(
            __RPC__in ISystemMonitor * This,
                                __RPC__out DataSourceTypeConstants *peDataSourceType);
                                        HRESULT ( STDMETHODCALLTYPE *put_SqlDsnName )(
            __RPC__in ISystemMonitor * This,
                       __RPC__in BSTR bsSqlDsnName);
                            HRESULT ( STDMETHODCALLTYPE *get_SqlDsnName )(
            __RPC__in ISystemMonitor * This,
                                __RPC__deref_out_opt BSTR *bsSqlDsnName);
                                        HRESULT ( STDMETHODCALLTYPE *put_SqlLogSetName )(
            __RPC__in ISystemMonitor * This,
                       __RPC__in BSTR bsSqlLogSetName);
                            HRESULT ( STDMETHODCALLTYPE *get_SqlLogSetName )(
            __RPC__in ISystemMonitor * This,
                                __RPC__deref_out_opt BSTR *bsSqlLogSetName);
        END_INTERFACE
    } ISystemMonitorVtbl;
    interface ISystemMonitor
    {
        CONST_VTBL struct ISystemMonitorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Appearance(This,iAppearance) )
    ( (This)->lpVtbl -> put_Appearance(This,iAppearance) )
    ( (This)->lpVtbl -> get_BackColor(This,pColor) )
    ( (This)->lpVtbl -> put_BackColor(This,Color) )
    ( (This)->lpVtbl -> get_BorderStyle(This,iBorderStyle) )
    ( (This)->lpVtbl -> put_BorderStyle(This,iBorderStyle) )
    ( (This)->lpVtbl -> get_ForeColor(This,pColor) )
    ( (This)->lpVtbl -> put_ForeColor(This,Color) )
    ( (This)->lpVtbl -> get_Font(This,ppFont) )
    ( (This)->lpVtbl -> putref_Font(This,pFont) )
    ( (This)->lpVtbl -> get_Counters(This,ppICounters) )
    ( (This)->lpVtbl -> put_ShowVerticalGrid(This,bState) )
    ( (This)->lpVtbl -> get_ShowVerticalGrid(This,pbState) )
    ( (This)->lpVtbl -> put_ShowHorizontalGrid(This,bState) )
    ( (This)->lpVtbl -> get_ShowHorizontalGrid(This,pbState) )
    ( (This)->lpVtbl -> put_ShowLegend(This,bState) )
    ( (This)->lpVtbl -> get_ShowLegend(This,pbState) )
    ( (This)->lpVtbl -> put_ShowScaleLabels(This,bState) )
    ( (This)->lpVtbl -> get_ShowScaleLabels(This,pbState) )
    ( (This)->lpVtbl -> put_ShowValueBar(This,bState) )
    ( (This)->lpVtbl -> get_ShowValueBar(This,pbState) )
    ( (This)->lpVtbl -> put_MaximumScale(This,iValue) )
    ( (This)->lpVtbl -> get_MaximumScale(This,piValue) )
    ( (This)->lpVtbl -> put_MinimumScale(This,iValue) )
    ( (This)->lpVtbl -> get_MinimumScale(This,piValue) )
    ( (This)->lpVtbl -> put_UpdateInterval(This,fValue) )
    ( (This)->lpVtbl -> get_UpdateInterval(This,pfValue) )
    ( (This)->lpVtbl -> put_DisplayType(This,eDisplayType) )
    ( (This)->lpVtbl -> get_DisplayType(This,peDisplayType) )
    ( (This)->lpVtbl -> put_ManualUpdate(This,bState) )
    ( (This)->lpVtbl -> get_ManualUpdate(This,pbState) )
    ( (This)->lpVtbl -> put_GraphTitle(This,bsTitle) )
    ( (This)->lpVtbl -> get_GraphTitle(This,pbsTitle) )
    ( (This)->lpVtbl -> put_YAxisLabel(This,bsTitle) )
    ( (This)->lpVtbl -> get_YAxisLabel(This,pbsTitle) )
    ( (This)->lpVtbl -> CollectSample(This) )
    ( (This)->lpVtbl -> UpdateGraph(This) )
    ( (This)->lpVtbl -> BrowseCounters(This) )
    ( (This)->lpVtbl -> DisplayProperties(This) )
    ( (This)->lpVtbl -> Counter(This,iIndex,ppICounter) )
    ( (This)->lpVtbl -> AddCounter(This,bsPath,ppICounter) )
    ( (This)->lpVtbl -> DeleteCounter(This,pCtr) )
    ( (This)->lpVtbl -> get_BackColorCtl(This,pColor) )
    ( (This)->lpVtbl -> put_BackColorCtl(This,Color) )
    ( (This)->lpVtbl -> put_LogFileName(This,bsFileName) )
    ( (This)->lpVtbl -> get_LogFileName(This,bsFileName) )
    ( (This)->lpVtbl -> put_LogViewStart(This,StartTime) )
    ( (This)->lpVtbl -> get_LogViewStart(This,StartTime) )
    ( (This)->lpVtbl -> put_LogViewStop(This,StopTime) )
    ( (This)->lpVtbl -> get_LogViewStop(This,StopTime) )
    ( (This)->lpVtbl -> get_GridColor(This,pColor) )
    ( (This)->lpVtbl -> put_GridColor(This,Color) )
    ( (This)->lpVtbl -> get_TimeBarColor(This,pColor) )
    ( (This)->lpVtbl -> put_TimeBarColor(This,Color) )
    ( (This)->lpVtbl -> get_Highlight(This,pbState) )
    ( (This)->lpVtbl -> put_Highlight(This,bState) )
    ( (This)->lpVtbl -> get_ShowToolbar(This,pbState) )
    ( (This)->lpVtbl -> put_ShowToolbar(This,bState) )
    ( (This)->lpVtbl -> Paste(This) )
    ( (This)->lpVtbl -> Copy(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> put_ReadOnly(This,bState) )
    ( (This)->lpVtbl -> get_ReadOnly(This,pbState) )
    ( (This)->lpVtbl -> put_ReportValueType(This,eReportValueType) )
    ( (This)->lpVtbl -> get_ReportValueType(This,peReportValueType) )
    ( (This)->lpVtbl -> put_MonitorDuplicateInstances(This,bState) )
    ( (This)->lpVtbl -> get_MonitorDuplicateInstances(This,pbState) )
    ( (This)->lpVtbl -> put_DisplayFilter(This,iValue) )
    ( (This)->lpVtbl -> get_DisplayFilter(This,piValue) )
    ( (This)->lpVtbl -> get_LogFiles(This,ppILogFiles) )
    ( (This)->lpVtbl -> put_DataSourceType(This,eDataSourceType) )
    ( (This)->lpVtbl -> get_DataSourceType(This,peDataSourceType) )
    ( (This)->lpVtbl -> put_SqlDsnName(This,bsSqlDsnName) )
    ( (This)->lpVtbl -> get_SqlDsnName(This,bsSqlDsnName) )
    ( (This)->lpVtbl -> put_SqlLogSetName(This,bsSqlLogSetName) )
    ( (This)->lpVtbl -> get_SqlLogSetName(This,bsSqlLogSetName) )
DEFINE_GUID(IID_ISystemMonitor2,0x08e3206a,0x5fd2,0x4fde,0xa8,0xa5,0x8c,0xb3,0xb6,0x3d,0x26,0x77);
    typedef struct ISystemMonitor2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISystemMonitor2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISystemMonitor2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISystemMonitor2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Appearance )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out INT *iAppearance);
                            HRESULT ( STDMETHODCALLTYPE *put_Appearance )(
            __RPC__in ISystemMonitor2 * This,
                       INT iAppearance);
                                        HRESULT ( STDMETHODCALLTYPE *get_BackColor )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out OLE_COLOR *pColor);
                            HRESULT ( STDMETHODCALLTYPE *put_BackColor )(
            __RPC__in ISystemMonitor2 * This,
                       OLE_COLOR Color);
                                        HRESULT ( STDMETHODCALLTYPE *get_BorderStyle )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out INT *iBorderStyle);
                            HRESULT ( STDMETHODCALLTYPE *put_BorderStyle )(
            __RPC__in ISystemMonitor2 * This,
                       INT iBorderStyle);
                                        HRESULT ( STDMETHODCALLTYPE *get_ForeColor )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out OLE_COLOR *pColor);
                            HRESULT ( STDMETHODCALLTYPE *put_ForeColor )(
            __RPC__in ISystemMonitor2 * This,
                       OLE_COLOR Color);
                                        HRESULT ( STDMETHODCALLTYPE *get_Font )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__deref_out_opt IFontDisp **ppFont);
                               HRESULT ( STDMETHODCALLTYPE *putref_Font )(
            __RPC__in ISystemMonitor2 * This,
                       __RPC__in_opt IFontDisp *pFont);
                                        HRESULT ( STDMETHODCALLTYPE *get_Counters )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__deref_out_opt ICounters **ppICounters);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowVerticalGrid )(
            __RPC__in ISystemMonitor2 * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowVerticalGrid )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowHorizontalGrid )(
            __RPC__in ISystemMonitor2 * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowHorizontalGrid )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowLegend )(
            __RPC__in ISystemMonitor2 * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowLegend )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowScaleLabels )(
            __RPC__in ISystemMonitor2 * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowScaleLabels )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowValueBar )(
            __RPC__in ISystemMonitor2 * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowValueBar )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaximumScale )(
            __RPC__in ISystemMonitor2 * This,
                       INT iValue);
                            HRESULT ( STDMETHODCALLTYPE *get_MaximumScale )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out INT *piValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinimumScale )(
            __RPC__in ISystemMonitor2 * This,
                       INT iValue);
                            HRESULT ( STDMETHODCALLTYPE *get_MinimumScale )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out INT *piValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_UpdateInterval )(
            __RPC__in ISystemMonitor2 * This,
                       FLOAT fValue);
                            HRESULT ( STDMETHODCALLTYPE *get_UpdateInterval )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out FLOAT *pfValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisplayType )(
            __RPC__in ISystemMonitor2 * This,
                       DisplayTypeConstants eDisplayType);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplayType )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out DisplayTypeConstants *peDisplayType);
                                        HRESULT ( STDMETHODCALLTYPE *put_ManualUpdate )(
            __RPC__in ISystemMonitor2 * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ManualUpdate )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_GraphTitle )(
            __RPC__in ISystemMonitor2 * This,
                       __RPC__in BSTR bsTitle);
                            HRESULT ( STDMETHODCALLTYPE *get_GraphTitle )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__deref_out_opt BSTR *pbsTitle);
                                        HRESULT ( STDMETHODCALLTYPE *put_YAxisLabel )(
            __RPC__in ISystemMonitor2 * This,
                       __RPC__in BSTR bsTitle);
                            HRESULT ( STDMETHODCALLTYPE *get_YAxisLabel )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__deref_out_opt BSTR *pbsTitle);
                               HRESULT ( STDMETHODCALLTYPE *CollectSample )(
            __RPC__in ISystemMonitor2 * This);
                               HRESULT ( STDMETHODCALLTYPE *UpdateGraph )(
            __RPC__in ISystemMonitor2 * This);
                               HRESULT ( STDMETHODCALLTYPE *BrowseCounters )(
            __RPC__in ISystemMonitor2 * This);
                               HRESULT ( STDMETHODCALLTYPE *DisplayProperties )(
            __RPC__in ISystemMonitor2 * This);
                           HRESULT ( STDMETHODCALLTYPE *Counter )(
            __RPC__in ISystemMonitor2 * This,
                       INT iIndex,
                        __RPC__deref_out_opt ICounterItem **ppICounter);
                           HRESULT ( STDMETHODCALLTYPE *AddCounter )(
            __RPC__in ISystemMonitor2 * This,
                       __RPC__in BSTR bsPath,
                        __RPC__deref_out_opt ICounterItem **ppICounter);
                           HRESULT ( STDMETHODCALLTYPE *DeleteCounter )(
            __RPC__in ISystemMonitor2 * This,
                       __RPC__in_opt ICounterItem *pCtr);
                                        HRESULT ( STDMETHODCALLTYPE *get_BackColorCtl )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out OLE_COLOR *pColor);
                            HRESULT ( STDMETHODCALLTYPE *put_BackColorCtl )(
            __RPC__in ISystemMonitor2 * This,
                       OLE_COLOR Color);
                                        HRESULT ( STDMETHODCALLTYPE *put_LogFileName )(
            __RPC__in ISystemMonitor2 * This,
                       __RPC__in BSTR bsFileName);
                            HRESULT ( STDMETHODCALLTYPE *get_LogFileName )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__deref_out_opt BSTR *bsFileName);
                                        HRESULT ( STDMETHODCALLTYPE *put_LogViewStart )(
            __RPC__in ISystemMonitor2 * This,
                       DATE StartTime);
                            HRESULT ( STDMETHODCALLTYPE *get_LogViewStart )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out DATE *StartTime);
                                        HRESULT ( STDMETHODCALLTYPE *put_LogViewStop )(
            __RPC__in ISystemMonitor2 * This,
                       DATE StopTime);
                            HRESULT ( STDMETHODCALLTYPE *get_LogViewStop )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out DATE *StopTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_GridColor )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out OLE_COLOR *pColor);
                            HRESULT ( STDMETHODCALLTYPE *put_GridColor )(
            __RPC__in ISystemMonitor2 * This,
                       OLE_COLOR Color);
                                        HRESULT ( STDMETHODCALLTYPE *get_TimeBarColor )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out OLE_COLOR *pColor);
                            HRESULT ( STDMETHODCALLTYPE *put_TimeBarColor )(
            __RPC__in ISystemMonitor2 * This,
                       OLE_COLOR Color);
                                        HRESULT ( STDMETHODCALLTYPE *get_Highlight )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out VARIANT_BOOL *pbState);
                            HRESULT ( STDMETHODCALLTYPE *put_Highlight )(
            __RPC__in ISystemMonitor2 * This,
                       VARIANT_BOOL bState);
                                        HRESULT ( STDMETHODCALLTYPE *get_ShowToolbar )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out VARIANT_BOOL *pbState);
                            HRESULT ( STDMETHODCALLTYPE *put_ShowToolbar )(
            __RPC__in ISystemMonitor2 * This,
                       VARIANT_BOOL bState);
                               HRESULT ( STDMETHODCALLTYPE *Paste )(
            __RPC__in ISystemMonitor2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Copy )(
            __RPC__in ISystemMonitor2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ISystemMonitor2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReadOnly )(
            __RPC__in ISystemMonitor2 * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReportValueType )(
            __RPC__in ISystemMonitor2 * This,
                       ReportValueTypeConstants eReportValueType);
                            HRESULT ( STDMETHODCALLTYPE *get_ReportValueType )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out ReportValueTypeConstants *peReportValueType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MonitorDuplicateInstances )(
            __RPC__in ISystemMonitor2 * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_MonitorDuplicateInstances )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisplayFilter )(
            __RPC__in ISystemMonitor2 * This,
                       INT iValue);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplayFilter )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out INT *piValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_LogFiles )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__deref_out_opt ILogFiles **ppILogFiles);
                                        HRESULT ( STDMETHODCALLTYPE *put_DataSourceType )(
            __RPC__in ISystemMonitor2 * This,
                       DataSourceTypeConstants eDataSourceType);
                            HRESULT ( STDMETHODCALLTYPE *get_DataSourceType )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out DataSourceTypeConstants *peDataSourceType);
                                        HRESULT ( STDMETHODCALLTYPE *put_SqlDsnName )(
            __RPC__in ISystemMonitor2 * This,
                       __RPC__in BSTR bsSqlDsnName);
                            HRESULT ( STDMETHODCALLTYPE *get_SqlDsnName )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__deref_out_opt BSTR *bsSqlDsnName);
                                        HRESULT ( STDMETHODCALLTYPE *put_SqlLogSetName )(
            __RPC__in ISystemMonitor2 * This,
                       __RPC__in BSTR bsSqlLogSetName);
                            HRESULT ( STDMETHODCALLTYPE *get_SqlLogSetName )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__deref_out_opt BSTR *bsSqlLogSetName);
                                        HRESULT ( STDMETHODCALLTYPE *put_EnableDigitGrouping )(
            __RPC__in ISystemMonitor2 * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_EnableDigitGrouping )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_EnableToolTips )(
            __RPC__in ISystemMonitor2 * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_EnableToolTips )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowTimeAxisLabels )(
            __RPC__in ISystemMonitor2 * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowTimeAxisLabels )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ChartScroll )(
            __RPC__in ISystemMonitor2 * This,
                       VARIANT_BOOL bScroll);
                            HRESULT ( STDMETHODCALLTYPE *get_ChartScroll )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out VARIANT_BOOL *pbScroll);
                                        HRESULT ( STDMETHODCALLTYPE *put_DataPointCount )(
            __RPC__in ISystemMonitor2 * This,
                       INT iNewCount);
                            HRESULT ( STDMETHODCALLTYPE *get_DataPointCount )(
            __RPC__in ISystemMonitor2 * This,
                                __RPC__out INT *piDataPointCount);
                               HRESULT ( STDMETHODCALLTYPE *ScaleToFit )(
            __RPC__in ISystemMonitor2 * This,
            VARIANT_BOOL bSelectedCountersOnly);
                               HRESULT ( STDMETHODCALLTYPE *SaveAs )(
            __RPC__in ISystemMonitor2 * This,
            __RPC__in BSTR bstrFileName,
            SysmonFileType eSysmonFileType);
                               HRESULT ( STDMETHODCALLTYPE *Relog )(
            __RPC__in ISystemMonitor2 * This,
            __RPC__in BSTR bstrFileName,
            SysmonFileType eSysmonFileType,
            INT iFilter);
                               HRESULT ( STDMETHODCALLTYPE *ClearData )(
            __RPC__in ISystemMonitor2 * This);
                            HRESULT ( STDMETHODCALLTYPE *get_LogSourceStartTime )(
            __RPC__in ISystemMonitor2 * This,
                        __RPC__out DATE *pDate);
                            HRESULT ( STDMETHODCALLTYPE *get_LogSourceStopTime )(
            __RPC__in ISystemMonitor2 * This,
                        __RPC__out DATE *pDate);
                               HRESULT ( STDMETHODCALLTYPE *SetLogViewRange )(
            __RPC__in ISystemMonitor2 * This,
                       DATE StartTime,
                       DATE StopTime);
                   HRESULT ( STDMETHODCALLTYPE *GetLogViewRange )(
            __RPC__in ISystemMonitor2 * This,
                        __RPC__out DATE *StartTime,
                        __RPC__out DATE *StopTime);
                   HRESULT ( STDMETHODCALLTYPE *BatchingLock )(
            __RPC__in ISystemMonitor2 * This,
                       VARIANT_BOOL fLock,
                       SysmonBatchReason eBatchReason);
                               HRESULT ( STDMETHODCALLTYPE *LoadSettings )(
            __RPC__in ISystemMonitor2 * This,
                       __RPC__in BSTR bstrSettingFileName);
        END_INTERFACE
    } ISystemMonitor2Vtbl;
    interface ISystemMonitor2
    {
        CONST_VTBL struct ISystemMonitor2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Appearance(This,iAppearance) )
    ( (This)->lpVtbl -> put_Appearance(This,iAppearance) )
    ( (This)->lpVtbl -> get_BackColor(This,pColor) )
    ( (This)->lpVtbl -> put_BackColor(This,Color) )
    ( (This)->lpVtbl -> get_BorderStyle(This,iBorderStyle) )
    ( (This)->lpVtbl -> put_BorderStyle(This,iBorderStyle) )
    ( (This)->lpVtbl -> get_ForeColor(This,pColor) )
    ( (This)->lpVtbl -> put_ForeColor(This,Color) )
    ( (This)->lpVtbl -> get_Font(This,ppFont) )
    ( (This)->lpVtbl -> putref_Font(This,pFont) )
    ( (This)->lpVtbl -> get_Counters(This,ppICounters) )
    ( (This)->lpVtbl -> put_ShowVerticalGrid(This,bState) )
    ( (This)->lpVtbl -> get_ShowVerticalGrid(This,pbState) )
    ( (This)->lpVtbl -> put_ShowHorizontalGrid(This,bState) )
    ( (This)->lpVtbl -> get_ShowHorizontalGrid(This,pbState) )
    ( (This)->lpVtbl -> put_ShowLegend(This,bState) )
    ( (This)->lpVtbl -> get_ShowLegend(This,pbState) )
    ( (This)->lpVtbl -> put_ShowScaleLabels(This,bState) )
    ( (This)->lpVtbl -> get_ShowScaleLabels(This,pbState) )
    ( (This)->lpVtbl -> put_ShowValueBar(This,bState) )
    ( (This)->lpVtbl -> get_ShowValueBar(This,pbState) )
    ( (This)->lpVtbl -> put_MaximumScale(This,iValue) )
    ( (This)->lpVtbl -> get_MaximumScale(This,piValue) )
    ( (This)->lpVtbl -> put_MinimumScale(This,iValue) )
    ( (This)->lpVtbl -> get_MinimumScale(This,piValue) )
    ( (This)->lpVtbl -> put_UpdateInterval(This,fValue) )
    ( (This)->lpVtbl -> get_UpdateInterval(This,pfValue) )
    ( (This)->lpVtbl -> put_DisplayType(This,eDisplayType) )
    ( (This)->lpVtbl -> get_DisplayType(This,peDisplayType) )
    ( (This)->lpVtbl -> put_ManualUpdate(This,bState) )
    ( (This)->lpVtbl -> get_ManualUpdate(This,pbState) )
    ( (This)->lpVtbl -> put_GraphTitle(This,bsTitle) )
    ( (This)->lpVtbl -> get_GraphTitle(This,pbsTitle) )
    ( (This)->lpVtbl -> put_YAxisLabel(This,bsTitle) )
    ( (This)->lpVtbl -> get_YAxisLabel(This,pbsTitle) )
    ( (This)->lpVtbl -> CollectSample(This) )
    ( (This)->lpVtbl -> UpdateGraph(This) )
    ( (This)->lpVtbl -> BrowseCounters(This) )
    ( (This)->lpVtbl -> DisplayProperties(This) )
    ( (This)->lpVtbl -> Counter(This,iIndex,ppICounter) )
    ( (This)->lpVtbl -> AddCounter(This,bsPath,ppICounter) )
    ( (This)->lpVtbl -> DeleteCounter(This,pCtr) )
    ( (This)->lpVtbl -> get_BackColorCtl(This,pColor) )
    ( (This)->lpVtbl -> put_BackColorCtl(This,Color) )
    ( (This)->lpVtbl -> put_LogFileName(This,bsFileName) )
    ( (This)->lpVtbl -> get_LogFileName(This,bsFileName) )
    ( (This)->lpVtbl -> put_LogViewStart(This,StartTime) )
    ( (This)->lpVtbl -> get_LogViewStart(This,StartTime) )
    ( (This)->lpVtbl -> put_LogViewStop(This,StopTime) )
    ( (This)->lpVtbl -> get_LogViewStop(This,StopTime) )
    ( (This)->lpVtbl -> get_GridColor(This,pColor) )
    ( (This)->lpVtbl -> put_GridColor(This,Color) )
    ( (This)->lpVtbl -> get_TimeBarColor(This,pColor) )
    ( (This)->lpVtbl -> put_TimeBarColor(This,Color) )
    ( (This)->lpVtbl -> get_Highlight(This,pbState) )
    ( (This)->lpVtbl -> put_Highlight(This,bState) )
    ( (This)->lpVtbl -> get_ShowToolbar(This,pbState) )
    ( (This)->lpVtbl -> put_ShowToolbar(This,bState) )
    ( (This)->lpVtbl -> Paste(This) )
    ( (This)->lpVtbl -> Copy(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> put_ReadOnly(This,bState) )
    ( (This)->lpVtbl -> get_ReadOnly(This,pbState) )
    ( (This)->lpVtbl -> put_ReportValueType(This,eReportValueType) )
    ( (This)->lpVtbl -> get_ReportValueType(This,peReportValueType) )
    ( (This)->lpVtbl -> put_MonitorDuplicateInstances(This,bState) )
    ( (This)->lpVtbl -> get_MonitorDuplicateInstances(This,pbState) )
    ( (This)->lpVtbl -> put_DisplayFilter(This,iValue) )
    ( (This)->lpVtbl -> get_DisplayFilter(This,piValue) )
    ( (This)->lpVtbl -> get_LogFiles(This,ppILogFiles) )
    ( (This)->lpVtbl -> put_DataSourceType(This,eDataSourceType) )
    ( (This)->lpVtbl -> get_DataSourceType(This,peDataSourceType) )
    ( (This)->lpVtbl -> put_SqlDsnName(This,bsSqlDsnName) )
    ( (This)->lpVtbl -> get_SqlDsnName(This,bsSqlDsnName) )
    ( (This)->lpVtbl -> put_SqlLogSetName(This,bsSqlLogSetName) )
    ( (This)->lpVtbl -> get_SqlLogSetName(This,bsSqlLogSetName) )
    ( (This)->lpVtbl -> put_EnableDigitGrouping(This,bState) )
    ( (This)->lpVtbl -> get_EnableDigitGrouping(This,pbState) )
    ( (This)->lpVtbl -> put_EnableToolTips(This,bState) )
    ( (This)->lpVtbl -> get_EnableToolTips(This,pbState) )
    ( (This)->lpVtbl -> put_ShowTimeAxisLabels(This,bState) )
    ( (This)->lpVtbl -> get_ShowTimeAxisLabels(This,pbState) )
    ( (This)->lpVtbl -> put_ChartScroll(This,bScroll) )
    ( (This)->lpVtbl -> get_ChartScroll(This,pbScroll) )
    ( (This)->lpVtbl -> put_DataPointCount(This,iNewCount) )
    ( (This)->lpVtbl -> get_DataPointCount(This,piDataPointCount) )
    ( (This)->lpVtbl -> ScaleToFit(This,bSelectedCountersOnly) )
    ( (This)->lpVtbl -> SaveAs(This,bstrFileName,eSysmonFileType) )
    ( (This)->lpVtbl -> Relog(This,bstrFileName,eSysmonFileType,iFilter) )
    ( (This)->lpVtbl -> ClearData(This) )
    ( (This)->lpVtbl -> get_LogSourceStartTime(This,pDate) )
    ( (This)->lpVtbl -> get_LogSourceStopTime(This,pDate) )
    ( (This)->lpVtbl -> SetLogViewRange(This,StartTime,StopTime) )
    ( (This)->lpVtbl -> GetLogViewRange(This,StartTime,StopTime) )
    ( (This)->lpVtbl -> BatchingLock(This,fLock,eBatchReason) )
    ( (This)->lpVtbl -> LoadSettings(This,bstrSettingFileName) )
DEFINE_GUID(IID__ISystemMonitorUnion,0xc8a77338,0x265f,0x4de5,0xaa,0x25,0xc7,0xda,0x1c,0xe5,0xa8,0xf4);
    typedef struct _ISystemMonitorUnionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ISystemMonitorUnion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ISystemMonitorUnion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ISystemMonitorUnion * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Appearance )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out INT *iAppearance);
                            HRESULT ( STDMETHODCALLTYPE *put_Appearance )(
            __RPC__in _ISystemMonitorUnion * This,
                       INT iAppearance);
                                        HRESULT ( STDMETHODCALLTYPE *get_BackColor )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out OLE_COLOR *pColor);
                            HRESULT ( STDMETHODCALLTYPE *put_BackColor )(
            __RPC__in _ISystemMonitorUnion * This,
                       OLE_COLOR Color);
                                        HRESULT ( STDMETHODCALLTYPE *get_BorderStyle )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out INT *iBorderStyle);
                            HRESULT ( STDMETHODCALLTYPE *put_BorderStyle )(
            __RPC__in _ISystemMonitorUnion * This,
                       INT iBorderStyle);
                                        HRESULT ( STDMETHODCALLTYPE *get_ForeColor )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out OLE_COLOR *pColor);
                            HRESULT ( STDMETHODCALLTYPE *put_ForeColor )(
            __RPC__in _ISystemMonitorUnion * This,
                       OLE_COLOR Color);
                                        HRESULT ( STDMETHODCALLTYPE *get_Font )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__deref_out_opt IFontDisp **ppFont);
                               HRESULT ( STDMETHODCALLTYPE *putref_Font )(
            __RPC__in _ISystemMonitorUnion * This,
                       __RPC__in_opt IFontDisp *pFont);
                                        HRESULT ( STDMETHODCALLTYPE *get_Counters )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__deref_out_opt ICounters **ppICounters);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowVerticalGrid )(
            __RPC__in _ISystemMonitorUnion * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowVerticalGrid )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowHorizontalGrid )(
            __RPC__in _ISystemMonitorUnion * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowHorizontalGrid )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowLegend )(
            __RPC__in _ISystemMonitorUnion * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowLegend )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowScaleLabels )(
            __RPC__in _ISystemMonitorUnion * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowScaleLabels )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowValueBar )(
            __RPC__in _ISystemMonitorUnion * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowValueBar )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaximumScale )(
            __RPC__in _ISystemMonitorUnion * This,
                       INT iValue);
                            HRESULT ( STDMETHODCALLTYPE *get_MaximumScale )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out INT *piValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinimumScale )(
            __RPC__in _ISystemMonitorUnion * This,
                       INT iValue);
                            HRESULT ( STDMETHODCALLTYPE *get_MinimumScale )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out INT *piValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_UpdateInterval )(
            __RPC__in _ISystemMonitorUnion * This,
                       FLOAT fValue);
                            HRESULT ( STDMETHODCALLTYPE *get_UpdateInterval )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out FLOAT *pfValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisplayType )(
            __RPC__in _ISystemMonitorUnion * This,
                       DisplayTypeConstants eDisplayType);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplayType )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out DisplayTypeConstants *peDisplayType);
                                        HRESULT ( STDMETHODCALLTYPE *put_ManualUpdate )(
            __RPC__in _ISystemMonitorUnion * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ManualUpdate )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_GraphTitle )(
            __RPC__in _ISystemMonitorUnion * This,
                       __RPC__in BSTR bsTitle);
                            HRESULT ( STDMETHODCALLTYPE *get_GraphTitle )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__deref_out_opt BSTR *pbsTitle);
                                        HRESULT ( STDMETHODCALLTYPE *put_YAxisLabel )(
            __RPC__in _ISystemMonitorUnion * This,
                       __RPC__in BSTR bsTitle);
                            HRESULT ( STDMETHODCALLTYPE *get_YAxisLabel )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__deref_out_opt BSTR *pbsTitle);
                               HRESULT ( STDMETHODCALLTYPE *CollectSample )(
            __RPC__in _ISystemMonitorUnion * This);
                               HRESULT ( STDMETHODCALLTYPE *UpdateGraph )(
            __RPC__in _ISystemMonitorUnion * This);
                               HRESULT ( STDMETHODCALLTYPE *BrowseCounters )(
            __RPC__in _ISystemMonitorUnion * This);
                               HRESULT ( STDMETHODCALLTYPE *DisplayProperties )(
            __RPC__in _ISystemMonitorUnion * This);
                           HRESULT ( STDMETHODCALLTYPE *Counter )(
            __RPC__in _ISystemMonitorUnion * This,
                       INT iIndex,
                        __RPC__deref_out_opt ICounterItem **ppICounter);
                           HRESULT ( STDMETHODCALLTYPE *AddCounter )(
            __RPC__in _ISystemMonitorUnion * This,
                       __RPC__in BSTR bsPath,
                        __RPC__deref_out_opt ICounterItem **ppICounter);
                           HRESULT ( STDMETHODCALLTYPE *DeleteCounter )(
            __RPC__in _ISystemMonitorUnion * This,
                       __RPC__in_opt ICounterItem *pCtr);
                                        HRESULT ( STDMETHODCALLTYPE *get_BackColorCtl )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out OLE_COLOR *pColor);
                            HRESULT ( STDMETHODCALLTYPE *put_BackColorCtl )(
            __RPC__in _ISystemMonitorUnion * This,
                       OLE_COLOR Color);
                                        HRESULT ( STDMETHODCALLTYPE *put_LogFileName )(
            __RPC__in _ISystemMonitorUnion * This,
                       __RPC__in BSTR bsFileName);
                            HRESULT ( STDMETHODCALLTYPE *get_LogFileName )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__deref_out_opt BSTR *bsFileName);
                                        HRESULT ( STDMETHODCALLTYPE *put_LogViewStart )(
            __RPC__in _ISystemMonitorUnion * This,
                       DATE StartTime);
                            HRESULT ( STDMETHODCALLTYPE *get_LogViewStart )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out DATE *StartTime);
                                        HRESULT ( STDMETHODCALLTYPE *put_LogViewStop )(
            __RPC__in _ISystemMonitorUnion * This,
                       DATE StopTime);
                            HRESULT ( STDMETHODCALLTYPE *get_LogViewStop )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out DATE *StopTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_GridColor )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out OLE_COLOR *pColor);
                            HRESULT ( STDMETHODCALLTYPE *put_GridColor )(
            __RPC__in _ISystemMonitorUnion * This,
                       OLE_COLOR Color);
                                        HRESULT ( STDMETHODCALLTYPE *get_TimeBarColor )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out OLE_COLOR *pColor);
                            HRESULT ( STDMETHODCALLTYPE *put_TimeBarColor )(
            __RPC__in _ISystemMonitorUnion * This,
                       OLE_COLOR Color);
                                        HRESULT ( STDMETHODCALLTYPE *get_Highlight )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out VARIANT_BOOL *pbState);
                            HRESULT ( STDMETHODCALLTYPE *put_Highlight )(
            __RPC__in _ISystemMonitorUnion * This,
                       VARIANT_BOOL bState);
                                        HRESULT ( STDMETHODCALLTYPE *get_ShowToolbar )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out VARIANT_BOOL *pbState);
                            HRESULT ( STDMETHODCALLTYPE *put_ShowToolbar )(
            __RPC__in _ISystemMonitorUnion * This,
                       VARIANT_BOOL bState);
                               HRESULT ( STDMETHODCALLTYPE *Paste )(
            __RPC__in _ISystemMonitorUnion * This);
                               HRESULT ( STDMETHODCALLTYPE *Copy )(
            __RPC__in _ISystemMonitorUnion * This);
                               HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in _ISystemMonitorUnion * This);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReadOnly )(
            __RPC__in _ISystemMonitorUnion * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReportValueType )(
            __RPC__in _ISystemMonitorUnion * This,
                       ReportValueTypeConstants eReportValueType);
                            HRESULT ( STDMETHODCALLTYPE *get_ReportValueType )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out ReportValueTypeConstants *peReportValueType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MonitorDuplicateInstances )(
            __RPC__in _ISystemMonitorUnion * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_MonitorDuplicateInstances )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisplayFilter )(
            __RPC__in _ISystemMonitorUnion * This,
                       INT iValue);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplayFilter )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out INT *piValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_LogFiles )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__deref_out_opt ILogFiles **ppILogFiles);
                                        HRESULT ( STDMETHODCALLTYPE *put_DataSourceType )(
            __RPC__in _ISystemMonitorUnion * This,
                       DataSourceTypeConstants eDataSourceType);
                            HRESULT ( STDMETHODCALLTYPE *get_DataSourceType )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out DataSourceTypeConstants *peDataSourceType);
                                        HRESULT ( STDMETHODCALLTYPE *put_SqlDsnName )(
            __RPC__in _ISystemMonitorUnion * This,
                       __RPC__in BSTR bsSqlDsnName);
                            HRESULT ( STDMETHODCALLTYPE *get_SqlDsnName )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__deref_out_opt BSTR *bsSqlDsnName);
                                        HRESULT ( STDMETHODCALLTYPE *put_SqlLogSetName )(
            __RPC__in _ISystemMonitorUnion * This,
                       __RPC__in BSTR bsSqlLogSetName);
                            HRESULT ( STDMETHODCALLTYPE *get_SqlLogSetName )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__deref_out_opt BSTR *bsSqlLogSetName);
                                        HRESULT ( STDMETHODCALLTYPE *put_EnableDigitGrouping )(
            __RPC__in _ISystemMonitorUnion * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_EnableDigitGrouping )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_EnableToolTips )(
            __RPC__in _ISystemMonitorUnion * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_EnableToolTips )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowTimeAxisLabels )(
            __RPC__in _ISystemMonitorUnion * This,
                       VARIANT_BOOL bState);
                            HRESULT ( STDMETHODCALLTYPE *get_ShowTimeAxisLabels )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out VARIANT_BOOL *pbState);
                                        HRESULT ( STDMETHODCALLTYPE *put_ChartScroll )(
            __RPC__in _ISystemMonitorUnion * This,
                       VARIANT_BOOL bScroll);
                            HRESULT ( STDMETHODCALLTYPE *get_ChartScroll )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out VARIANT_BOOL *pbScroll);
                                        HRESULT ( STDMETHODCALLTYPE *put_DataPointCount )(
            __RPC__in _ISystemMonitorUnion * This,
                       INT iNewCount);
                            HRESULT ( STDMETHODCALLTYPE *get_DataPointCount )(
            __RPC__in _ISystemMonitorUnion * This,
                                __RPC__out INT *piDataPointCount);
                               HRESULT ( STDMETHODCALLTYPE *ScaleToFit )(
            __RPC__in _ISystemMonitorUnion * This,
            VARIANT_BOOL bSelectedCountersOnly);
                               HRESULT ( STDMETHODCALLTYPE *SaveAs )(
            __RPC__in _ISystemMonitorUnion * This,
            __RPC__in BSTR bstrFileName,
            SysmonFileType eSysmonFileType);
                               HRESULT ( STDMETHODCALLTYPE *Relog )(
            __RPC__in _ISystemMonitorUnion * This,
            __RPC__in BSTR bstrFileName,
            SysmonFileType eSysmonFileType,
            INT iFilter);
                               HRESULT ( STDMETHODCALLTYPE *ClearData )(
            __RPC__in _ISystemMonitorUnion * This);
                            HRESULT ( STDMETHODCALLTYPE *get_LogSourceStartTime )(
            __RPC__in _ISystemMonitorUnion * This,
                        __RPC__out DATE *pDate);
                            HRESULT ( STDMETHODCALLTYPE *get_LogSourceStopTime )(
            __RPC__in _ISystemMonitorUnion * This,
                        __RPC__out DATE *pDate);
                               HRESULT ( STDMETHODCALLTYPE *SetLogViewRange )(
            __RPC__in _ISystemMonitorUnion * This,
                       DATE StartTime,
                       DATE StopTime);
                   HRESULT ( STDMETHODCALLTYPE *GetLogViewRange )(
            __RPC__in _ISystemMonitorUnion * This,
                        __RPC__out DATE *StartTime,
                        __RPC__out DATE *StopTime);
                   HRESULT ( STDMETHODCALLTYPE *BatchingLock )(
            __RPC__in _ISystemMonitorUnion * This,
                       VARIANT_BOOL fLock,
                       SysmonBatchReason eBatchReason);
                               HRESULT ( STDMETHODCALLTYPE *LoadSettings )(
            __RPC__in _ISystemMonitorUnion * This,
                       __RPC__in BSTR bstrSettingFileName);
        END_INTERFACE
    } _ISystemMonitorUnionVtbl;
    interface _ISystemMonitorUnion
    {
        CONST_VTBL struct _ISystemMonitorUnionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Appearance(This,iAppearance) )
    ( (This)->lpVtbl -> put_Appearance(This,iAppearance) )
    ( (This)->lpVtbl -> get_BackColor(This,pColor) )
    ( (This)->lpVtbl -> put_BackColor(This,Color) )
    ( (This)->lpVtbl -> get_BorderStyle(This,iBorderStyle) )
    ( (This)->lpVtbl -> put_BorderStyle(This,iBorderStyle) )
    ( (This)->lpVtbl -> get_ForeColor(This,pColor) )
    ( (This)->lpVtbl -> put_ForeColor(This,Color) )
    ( (This)->lpVtbl -> get_Font(This,ppFont) )
    ( (This)->lpVtbl -> putref_Font(This,pFont) )
    ( (This)->lpVtbl -> get_Counters(This,ppICounters) )
    ( (This)->lpVtbl -> put_ShowVerticalGrid(This,bState) )
    ( (This)->lpVtbl -> get_ShowVerticalGrid(This,pbState) )
    ( (This)->lpVtbl -> put_ShowHorizontalGrid(This,bState) )
    ( (This)->lpVtbl -> get_ShowHorizontalGrid(This,pbState) )
    ( (This)->lpVtbl -> put_ShowLegend(This,bState) )
    ( (This)->lpVtbl -> get_ShowLegend(This,pbState) )
    ( (This)->lpVtbl -> put_ShowScaleLabels(This,bState) )
    ( (This)->lpVtbl -> get_ShowScaleLabels(This,pbState) )
    ( (This)->lpVtbl -> put_ShowValueBar(This,bState) )
    ( (This)->lpVtbl -> get_ShowValueBar(This,pbState) )
    ( (This)->lpVtbl -> put_MaximumScale(This,iValue) )
    ( (This)->lpVtbl -> get_MaximumScale(This,piValue) )
    ( (This)->lpVtbl -> put_MinimumScale(This,iValue) )
    ( (This)->lpVtbl -> get_MinimumScale(This,piValue) )
    ( (This)->lpVtbl -> put_UpdateInterval(This,fValue) )
    ( (This)->lpVtbl -> get_UpdateInterval(This,pfValue) )
    ( (This)->lpVtbl -> put_DisplayType(This,eDisplayType) )
    ( (This)->lpVtbl -> get_DisplayType(This,peDisplayType) )
    ( (This)->lpVtbl -> put_ManualUpdate(This,bState) )
    ( (This)->lpVtbl -> get_ManualUpdate(This,pbState) )
    ( (This)->lpVtbl -> put_GraphTitle(This,bsTitle) )
    ( (This)->lpVtbl -> get_GraphTitle(This,pbsTitle) )
    ( (This)->lpVtbl -> put_YAxisLabel(This,bsTitle) )
    ( (This)->lpVtbl -> get_YAxisLabel(This,pbsTitle) )
    ( (This)->lpVtbl -> CollectSample(This) )
    ( (This)->lpVtbl -> UpdateGraph(This) )
    ( (This)->lpVtbl -> BrowseCounters(This) )
    ( (This)->lpVtbl -> DisplayProperties(This) )
    ( (This)->lpVtbl -> Counter(This,iIndex,ppICounter) )
    ( (This)->lpVtbl -> AddCounter(This,bsPath,ppICounter) )
    ( (This)->lpVtbl -> DeleteCounter(This,pCtr) )
    ( (This)->lpVtbl -> get_BackColorCtl(This,pColor) )
    ( (This)->lpVtbl -> put_BackColorCtl(This,Color) )
    ( (This)->lpVtbl -> put_LogFileName(This,bsFileName) )
    ( (This)->lpVtbl -> get_LogFileName(This,bsFileName) )
    ( (This)->lpVtbl -> put_LogViewStart(This,StartTime) )
    ( (This)->lpVtbl -> get_LogViewStart(This,StartTime) )
    ( (This)->lpVtbl -> put_LogViewStop(This,StopTime) )
    ( (This)->lpVtbl -> get_LogViewStop(This,StopTime) )
    ( (This)->lpVtbl -> get_GridColor(This,pColor) )
    ( (This)->lpVtbl -> put_GridColor(This,Color) )
    ( (This)->lpVtbl -> get_TimeBarColor(This,pColor) )
    ( (This)->lpVtbl -> put_TimeBarColor(This,Color) )
    ( (This)->lpVtbl -> get_Highlight(This,pbState) )
    ( (This)->lpVtbl -> put_Highlight(This,bState) )
    ( (This)->lpVtbl -> get_ShowToolbar(This,pbState) )
    ( (This)->lpVtbl -> put_ShowToolbar(This,bState) )
    ( (This)->lpVtbl -> Paste(This) )
    ( (This)->lpVtbl -> Copy(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> put_ReadOnly(This,bState) )
    ( (This)->lpVtbl -> get_ReadOnly(This,pbState) )
    ( (This)->lpVtbl -> put_ReportValueType(This,eReportValueType) )
    ( (This)->lpVtbl -> get_ReportValueType(This,peReportValueType) )
    ( (This)->lpVtbl -> put_MonitorDuplicateInstances(This,bState) )
    ( (This)->lpVtbl -> get_MonitorDuplicateInstances(This,pbState) )
    ( (This)->lpVtbl -> put_DisplayFilter(This,iValue) )
    ( (This)->lpVtbl -> get_DisplayFilter(This,piValue) )
    ( (This)->lpVtbl -> get_LogFiles(This,ppILogFiles) )
    ( (This)->lpVtbl -> put_DataSourceType(This,eDataSourceType) )
    ( (This)->lpVtbl -> get_DataSourceType(This,peDataSourceType) )
    ( (This)->lpVtbl -> put_SqlDsnName(This,bsSqlDsnName) )
    ( (This)->lpVtbl -> get_SqlDsnName(This,bsSqlDsnName) )
    ( (This)->lpVtbl -> put_SqlLogSetName(This,bsSqlLogSetName) )
    ( (This)->lpVtbl -> get_SqlLogSetName(This,bsSqlLogSetName) )
    ( (This)->lpVtbl -> put_EnableDigitGrouping(This,bState) )
    ( (This)->lpVtbl -> get_EnableDigitGrouping(This,pbState) )
    ( (This)->lpVtbl -> put_EnableToolTips(This,bState) )
    ( (This)->lpVtbl -> get_EnableToolTips(This,pbState) )
    ( (This)->lpVtbl -> put_ShowTimeAxisLabels(This,bState) )
    ( (This)->lpVtbl -> get_ShowTimeAxisLabels(This,pbState) )
    ( (This)->lpVtbl -> put_ChartScroll(This,bScroll) )
    ( (This)->lpVtbl -> get_ChartScroll(This,pbScroll) )
    ( (This)->lpVtbl -> put_DataPointCount(This,iNewCount) )
    ( (This)->lpVtbl -> get_DataPointCount(This,piDataPointCount) )
    ( (This)->lpVtbl -> ScaleToFit(This,bSelectedCountersOnly) )
    ( (This)->lpVtbl -> SaveAs(This,bstrFileName,eSysmonFileType) )
    ( (This)->lpVtbl -> Relog(This,bstrFileName,eSysmonFileType,iFilter) )
    ( (This)->lpVtbl -> ClearData(This) )
    ( (This)->lpVtbl -> get_LogSourceStartTime(This,pDate) )
    ( (This)->lpVtbl -> get_LogSourceStopTime(This,pDate) )
    ( (This)->lpVtbl -> SetLogViewRange(This,StartTime,StopTime) )
    ( (This)->lpVtbl -> GetLogViewRange(This,StartTime,StopTime) )
    ( (This)->lpVtbl -> BatchingLock(This,fLock,eBatchReason) )
    ( (This)->lpVtbl -> LoadSettings(This,bstrSettingFileName) )
DEFINE_GUID(DIID_DISystemMonitor,0x13D73D81,0xC32E,0x11cf,0x93,0x98,0x00,0xAA,0x00,0xA3,0xDD,0xEA);
    typedef struct DISystemMonitorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DISystemMonitor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DISystemMonitor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DISystemMonitor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DISystemMonitor * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DISystemMonitor * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DISystemMonitor * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DISystemMonitor * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } DISystemMonitorVtbl;
    interface DISystemMonitor
    {
        CONST_VTBL struct DISystemMonitorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
DEFINE_GUID(DIID_DISystemMonitorInternal,0x194EB242,0xC32C,0x11cf,0x93,0x98,0x00,0xAA,0x00,0xA3,0xDD,0xEA);
    typedef struct DISystemMonitorInternalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DISystemMonitorInternal * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DISystemMonitorInternal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DISystemMonitorInternal * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DISystemMonitorInternal * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DISystemMonitorInternal * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DISystemMonitorInternal * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DISystemMonitorInternal * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } DISystemMonitorInternalVtbl;
    interface DISystemMonitorInternal
    {
        CONST_VTBL struct DISystemMonitorInternalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
DEFINE_GUID(IID_ISystemMonitorEvents,0xEE660EA0,0x4ABD,0x11cf,0x94,0x3A,0x00,0x80,0x29,0x00,0x43,0x47);
    typedef struct ISystemMonitorEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISystemMonitorEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISystemMonitorEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISystemMonitorEvents * This);
                               void ( STDMETHODCALLTYPE *OnCounterSelected )(
            __RPC__in ISystemMonitorEvents * This,
                       INT Index);
                               void ( STDMETHODCALLTYPE *OnCounterAdded )(
            __RPC__in ISystemMonitorEvents * This,
                       INT Index);
                               void ( STDMETHODCALLTYPE *OnCounterDeleted )(
            __RPC__in ISystemMonitorEvents * This,
                       INT Index);
                               void ( STDMETHODCALLTYPE *OnSampleCollected )(
            __RPC__in ISystemMonitorEvents * This);
                               void ( STDMETHODCALLTYPE *OnDblClick )(
            __RPC__in ISystemMonitorEvents * This,
                       INT Index);
        END_INTERFACE
    } ISystemMonitorEventsVtbl;
    interface ISystemMonitorEvents
    {
        CONST_VTBL struct ISystemMonitorEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnCounterSelected(This,Index) )
    ( (This)->lpVtbl -> OnCounterAdded(This,Index) )
    ( (This)->lpVtbl -> OnCounterDeleted(This,Index) )
    ( (This)->lpVtbl -> OnSampleCollected(This) )
    ( (This)->lpVtbl -> OnDblClick(This,Index) )
DEFINE_GUID(DIID_DISystemMonitorEvents,0x84979930,0x4AB3,0x11cf,0x94,0x3A,0x00,0x80,0x29,0x00,0x43,0x47);
    typedef struct DISystemMonitorEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DISystemMonitorEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DISystemMonitorEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DISystemMonitorEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DISystemMonitorEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DISystemMonitorEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DISystemMonitorEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DISystemMonitorEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } DISystemMonitorEventsVtbl;
    interface DISystemMonitorEvents
    {
        CONST_VTBL struct DISystemMonitorEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
DEFINE_GUID(CLSID_SystemMonitor,0xC4D2D8E0,0xD1DD,0x11ce,0x94,0x0F,0x00,0x80,0x29,0x00,0x43,0x47);
class DECLSPEC_UUID("C4D2D8E0-D1DD-11ce-940F-008029004347")
SystemMonitor;
DEFINE_GUID(CLSID_CounterItem,0xC4D2D8E0,0xD1DD,0x11ce,0x94,0x0F,0x00,0x80,0x29,0x00,0x43,0x48);
class DECLSPEC_UUID("C4D2D8E0-D1DD-11ce-940F-008029004348")
CounterItem;
DEFINE_GUID(CLSID_Counters,0xB2B066D2,0x2AAC,0x11cf,0x94,0x2F,0x00,0x80,0x29,0x00,0x43,0x47);
class DECLSPEC_UUID("B2B066D2-2AAC-11cf-942F-008029004347")
Counters;
DEFINE_GUID(CLSID_LogFileItem,0x16EC5BE8,0xDF93,0x4237,0x94,0xE4,0x9E,0xE9,0x18,0x11,0x1D,0x71);
class DECLSPEC_UUID("16EC5BE8-DF93-4237-94E4-9EE918111D71")
LogFileItem;
DEFINE_GUID(CLSID_LogFiles,0x2735D9FD,0xF6B9,0x4f19,0xA5,0xD9,0xE2,0xD0,0x68,0x58,0x4B,0xC5);
class DECLSPEC_UUID("2735D9FD-F6B9-4f19-A5D9-E2D068584BC5")
LogFiles;
DEFINE_GUID(CLSID_CounterItem2,0x43196c62,0xc31f,0x4ce3,0xa0,0x2e,0x79,0xef,0xe0,0xf6,0xa5,0x25);
class DECLSPEC_UUID("43196c62-c31f-4ce3-a02e-79efe0f6a525")
CounterItem2;
DEFINE_GUID(CLSID_SystemMonitor2,0x7f30578c,0x5f38,0x4612,0xac,0xfe,0x6e,0xd0,0x4c,0x7b,0x7a,0xf8);
class DECLSPEC_UUID("7f30578c-5f38-4612-acfe-6ed04c7b7af8")
SystemMonitor2;
DEFINE_GUID(CLSID_AppearPropPage,0xe49741e9,0x93a8,0x4ab1,0x8e,0x96,0xbf,0x44,0x82,0x28,0x2e,0x9c);
class DECLSPEC_UUID("e49741e9-93a8-4ab1-8e96-bf4482282e9c")
AppearPropPage;
DEFINE_GUID(CLSID_GeneralPropPage,0xC3E5D3D2,0x1A03,0x11CF,0x94,0x2D,0x00,0x80,0x29,0x00,0x43,0x47);
class DECLSPEC_UUID("C3E5D3D2-1A03-11CF-942D-008029004347")
GeneralPropPage;
DEFINE_GUID(CLSID_GraphPropPage,0xC3E5D3D3,0x1A03,0x11CF,0x94,0x2D,0x00,0x80,0x29,0x00,0x43,0x47);
class DECLSPEC_UUID("C3E5D3D3-1A03-11CF-942D-008029004347")
GraphPropPage;
DEFINE_GUID(CLSID_SourcePropPage,0x0CF32AA1,0x7571,0x11D0,0x93,0xC4,0x00,0xAA,0x00,0xA3,0xDD,0xEA);
class DECLSPEC_UUID("0CF32AA1-7571-11D0-93C4-00AA00A3DDEA")
SourcePropPage;
DEFINE_GUID(CLSID_CounterPropPage,0xCF948561,0xEDE8,0x11CE,0x94,0x1E,0x00,0x80,0x29,0x00,0x43,0x47);
class DECLSPEC_UUID("CF948561-EDE8-11CE-941E-008029004347")
CounterPropPage;
}
