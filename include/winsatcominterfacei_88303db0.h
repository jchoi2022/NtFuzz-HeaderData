#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IProvideWinSATAssessmentInfo IProvideWinSATAssessmentInfo;
typedef interface IProvideWinSATResultsInfo IProvideWinSATResultsInfo;
typedef interface IQueryRecentWinSATAssessment IQueryRecentWinSATAssessment;
typedef interface IProvideWinSATVisuals IProvideWinSATVisuals;
typedef interface IQueryAllWinSATAssessments IQueryAllWinSATAssessments;
typedef interface IWinSATInitiateEvents IWinSATInitiateEvents;
typedef interface IInitiateWinSATAssessment IInitiateWinSATAssessment;
typedef interface IAccessibleWinSAT IAccessibleWinSAT;
typedef interface IQueryOEMWinSATCustomization IQueryOEMWinSATCustomization;
typedef class CInitiateWinSAT CInitiateWinSAT;
typedef class CQueryWinSAT CQueryWinSAT;
typedef class CQueryAllWinSAT CQueryAllWinSAT;
typedef class CProvideWinSATVisuals CProvideWinSATVisuals;
typedef class CAccessiblityWinSAT CAccessiblityWinSAT;
typedef class CQueryOEMWinSATCustomization CQueryOEMWinSATCustomization;
#include "oaidl.h"
#include "msxml.h"
#include "oleacc.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum __MIDL___MIDL_itf_winsatcominterfacei_0000_0000_0001
    {
        WINSAT_OEM_DATA_VALID = 0,
        WINSAT_OEM_DATA_NON_SYS_CONFIG_MATCH = 1,
        WINSAT_OEM_DATA_INVALID = 2,
        WINSAT_OEM_NO_DATA_SUPPLIED = 3
    } WINSAT_OEM_CUSTOMIZATION_STATE;
typedef
enum __MIDL___MIDL_itf_winsatcominterfacei_0000_0000_0002
    {
        WINSAT_ASSESSMENT_STATE_MIN = 0,
        WINSAT_ASSESSMENT_STATE_UNKNOWN = 0,
        WINSAT_ASSESSMENT_STATE_VALID = 1,
        WINSAT_ASSESSMENT_STATE_INCOHERENT_WITH_HARDWARE = 2,
        WINSAT_ASSESSMENT_STATE_NOT_AVAILABLE = 3,
        WINSAT_ASSESSMENT_STATE_INVALID = 4,
        WINSAT_ASSESSMENT_STATE_MAX = 4
    } WINSAT_ASSESSMENT_STATE;
typedef
enum __MIDL___MIDL_itf_winsatcominterfacei_0000_0000_0003
    {
        WINSAT_ASSESSMENT_MEMORY = 0,
        WINSAT_ASSESSMENT_CPU = 1,
        WINSAT_ASSESSMENT_DISK = 2,
        WINSAT_ASSESSMENT_D3D = 3,
        WINSAT_ASSESSMENT_GRAPHICS = 4
    } WINSAT_ASSESSMENT_TYPE;
typedef
enum __MIDL___MIDL_itf_winsatcominterfacei_0000_0000_0004
    {
        WINSAT_BITMAP_SIZE_SMALL = 0,
        WINSAT_BITMAP_SIZE_NORMAL = 1
    } WINSAT_BITMAP_SIZE;
extern RPC_IF_HANDLE __MIDL_itf_winsatcominterfacei_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsatcominterfacei_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IProvideWinSATAssessmentInfo;
    typedef struct IProvideWinSATAssessmentInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProvideWinSATAssessmentInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProvideWinSATAssessmentInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProvideWinSATAssessmentInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IProvideWinSATAssessmentInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IProvideWinSATAssessmentInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IProvideWinSATAssessmentInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IProvideWinSATAssessmentInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Score )(
            __RPC__in IProvideWinSATAssessmentInfo * This,
                                __RPC__out float *score);
                            HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IProvideWinSATAssessmentInfo * This,
                                        __RPC__deref_out_opt_string BSTR *title);
                            HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IProvideWinSATAssessmentInfo * This,
                                        __RPC__deref_out_opt_string BSTR *description);
        END_INTERFACE
    } IProvideWinSATAssessmentInfoVtbl;
    interface IProvideWinSATAssessmentInfo
    {
        CONST_VTBL struct IProvideWinSATAssessmentInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Score(This,score) )
    ( (This)->lpVtbl -> get_Title(This,title) )
    ( (This)->lpVtbl -> get_Description(This,description) )
EXTERN_C const IID IID_IProvideWinSATResultsInfo;
    typedef struct IProvideWinSATResultsInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProvideWinSATResultsInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProvideWinSATResultsInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProvideWinSATResultsInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IProvideWinSATResultsInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IProvideWinSATResultsInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IProvideWinSATResultsInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IProvideWinSATResultsInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *GetAssessmentInfo )(
            __RPC__in IProvideWinSATResultsInfo * This,
                       WINSAT_ASSESSMENT_TYPE assessment,
                                __RPC__deref_out_opt IProvideWinSATAssessmentInfo **ppinfo);
                            HRESULT ( STDMETHODCALLTYPE *get_AssessmentState )(
            __RPC__in IProvideWinSATResultsInfo * This,
                                __RPC__out WINSAT_ASSESSMENT_STATE *state);
                            HRESULT ( STDMETHODCALLTYPE *get_AssessmentDateTime )(
            __RPC__in IProvideWinSATResultsInfo * This,
                                __RPC__out VARIANT *fileTime);
                            HRESULT ( STDMETHODCALLTYPE *get_SystemRating )(
            __RPC__in IProvideWinSATResultsInfo * This,
                                __RPC__out float *level);
                            HRESULT ( STDMETHODCALLTYPE *get_RatingStateDesc )(
            __RPC__in IProvideWinSATResultsInfo * This,
                                __RPC__deref_out_opt BSTR *description);
        END_INTERFACE
    } IProvideWinSATResultsInfoVtbl;
    interface IProvideWinSATResultsInfo
    {
        CONST_VTBL struct IProvideWinSATResultsInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetAssessmentInfo(This,assessment,ppinfo) )
    ( (This)->lpVtbl -> get_AssessmentState(This,state) )
    ( (This)->lpVtbl -> get_AssessmentDateTime(This,fileTime) )
    ( (This)->lpVtbl -> get_SystemRating(This,level) )
    ( (This)->lpVtbl -> get_RatingStateDesc(This,description) )
EXTERN_C const IID IID_IQueryRecentWinSATAssessment;
    typedef struct IQueryRecentWinSATAssessmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IQueryRecentWinSATAssessment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IQueryRecentWinSATAssessment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IQueryRecentWinSATAssessment * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IQueryRecentWinSATAssessment * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IQueryRecentWinSATAssessment * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IQueryRecentWinSATAssessment * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IQueryRecentWinSATAssessment * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XML )(
            __RPC__in IQueryRecentWinSATAssessment * This,
                               __RPC__in_string BSTR xPath,
                                             __RPC__in_string BSTR namespaces,
                                __RPC__deref_out_opt IXMLDOMNodeList **ppDomNodeList);
                            HRESULT ( STDMETHODCALLTYPE *get_Info )(
            __RPC__in IQueryRecentWinSATAssessment * This,
                                __RPC__deref_out_opt IProvideWinSATResultsInfo **ppWinSATAssessmentInfo);
        END_INTERFACE
    } IQueryRecentWinSATAssessmentVtbl;
    interface IQueryRecentWinSATAssessment
    {
        CONST_VTBL struct IQueryRecentWinSATAssessmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XML(This,xPath,namespaces,ppDomNodeList) )
    ( (This)->lpVtbl -> get_Info(This,ppWinSATAssessmentInfo) )
EXTERN_C const IID IID_IProvideWinSATVisuals;
    typedef struct IProvideWinSATVisualsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProvideWinSATVisuals * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProvideWinSATVisuals * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProvideWinSATVisuals * This);
        HRESULT ( STDMETHODCALLTYPE *get_Bitmap )(
            __RPC__in IProvideWinSATVisuals * This,
                       WINSAT_BITMAP_SIZE bitmapSize,
            WINSAT_ASSESSMENT_STATE state,
            float rating,
                        __RPC__deref_out_opt HBITMAP *pBitmap);
        END_INTERFACE
    } IProvideWinSATVisualsVtbl;
    interface IProvideWinSATVisuals
    {
        CONST_VTBL struct IProvideWinSATVisualsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Bitmap(This,bitmapSize,state,rating,pBitmap) )
EXTERN_C const IID IID_IQueryAllWinSATAssessments;
    typedef struct IQueryAllWinSATAssessmentsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IQueryAllWinSATAssessments * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IQueryAllWinSATAssessments * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IQueryAllWinSATAssessments * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IQueryAllWinSATAssessments * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IQueryAllWinSATAssessments * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IQueryAllWinSATAssessments * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IQueryAllWinSATAssessments * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_AllXML )(
            __RPC__in IQueryAllWinSATAssessments * This,
                               __RPC__in_string BSTR xPath,
                                             __RPC__in_string BSTR namespaces,
                                __RPC__deref_out_opt IXMLDOMNodeList **ppDomNodeList);
        END_INTERFACE
    } IQueryAllWinSATAssessmentsVtbl;
    interface IQueryAllWinSATAssessments
    {
        CONST_VTBL struct IQueryAllWinSATAssessmentsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AllXML(This,xPath,namespaces,ppDomNodeList) )
EXTERN_C const IID IID_IWinSATInitiateEvents;
    typedef struct IWinSATInitiateEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWinSATInitiateEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWinSATInitiateEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWinSATInitiateEvents * This);
        HRESULT ( STDMETHODCALLTYPE *WinSATComplete )(
            __RPC__in IWinSATInitiateEvents * This,
                       HRESULT hresult,
                               __RPC__in_string LPCWSTR strDescription);
        HRESULT ( STDMETHODCALLTYPE *WinSATUpdate )(
            __RPC__in IWinSATInitiateEvents * This,
                       UINT uCurrentTick,
                       UINT uTickTotal,
                               __RPC__in_string LPCWSTR strCurrentState);
        END_INTERFACE
    } IWinSATInitiateEventsVtbl;
    interface IWinSATInitiateEvents
    {
        CONST_VTBL struct IWinSATInitiateEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> WinSATComplete(This,hresult,strDescription) )
    ( (This)->lpVtbl -> WinSATUpdate(This,uCurrentTick,uTickTotal,strCurrentState) )
EXTERN_C const IID IID_IInitiateWinSATAssessment;
    typedef struct IInitiateWinSATAssessmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInitiateWinSATAssessment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInitiateWinSATAssessment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInitiateWinSATAssessment * This);
        HRESULT ( STDMETHODCALLTYPE *InitiateAssessment )(
            __RPC__in IInitiateWinSATAssessment * This,
                               __RPC__in_string LPCWSTR cmdLine,
                                         __RPC__in_opt IWinSATInitiateEvents *pCallbacks,
                                         __RPC__in_opt HWND callerHwnd);
        HRESULT ( STDMETHODCALLTYPE *InitiateFormalAssessment )(
            __RPC__in IInitiateWinSATAssessment * This,
                                         __RPC__in_opt IWinSATInitiateEvents *pCallbacks,
                                         __RPC__in_opt HWND callerHwnd);
        HRESULT ( STDMETHODCALLTYPE *CancelAssessment )(
            __RPC__in IInitiateWinSATAssessment * This);
        END_INTERFACE
    } IInitiateWinSATAssessmentVtbl;
    interface IInitiateWinSATAssessment
    {
        CONST_VTBL struct IInitiateWinSATAssessmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitiateAssessment(This,cmdLine,pCallbacks,callerHwnd) )
    ( (This)->lpVtbl -> InitiateFormalAssessment(This,pCallbacks,callerHwnd) )
    ( (This)->lpVtbl -> CancelAssessment(This) )
EXTERN_C const IID IID_IAccessibleWinSAT;
    typedef struct IAccessibleWinSATVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccessibleWinSAT * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccessibleWinSAT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccessibleWinSAT * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAccessibleWinSAT * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAccessibleWinSAT * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAccessibleWinSAT * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAccessibleWinSAT * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_accParent )(
            __RPC__in IAccessibleWinSAT * This,
                                __RPC__deref_out_opt IDispatch **ppdispParent);
                                    HRESULT ( STDMETHODCALLTYPE *get_accChildCount )(
            __RPC__in IAccessibleWinSAT * This,
                                __RPC__out long *pcountChildren);
                                    HRESULT ( STDMETHODCALLTYPE *get_accChild )(
            __RPC__in IAccessibleWinSAT * This,
                       VARIANT varChild,
                                __RPC__deref_out_opt IDispatch **ppdispChild);
                                    HRESULT ( STDMETHODCALLTYPE *get_accName )(
            __RPC__in IAccessibleWinSAT * This,
                                 VARIANT varChild,
                                __RPC__deref_out_opt BSTR *pszName);
                                    HRESULT ( STDMETHODCALLTYPE *get_accValue )(
            __RPC__in IAccessibleWinSAT * This,
                                 VARIANT varChild,
                                __RPC__deref_out_opt BSTR *pszValue);
                                    HRESULT ( STDMETHODCALLTYPE *get_accDescription )(
            __RPC__in IAccessibleWinSAT * This,
                                 VARIANT varChild,
                                __RPC__deref_out_opt BSTR *pszDescription);
                                    HRESULT ( STDMETHODCALLTYPE *get_accRole )(
            __RPC__in IAccessibleWinSAT * This,
                                 VARIANT varChild,
                                __RPC__out VARIANT *pvarRole);
                                    HRESULT ( STDMETHODCALLTYPE *get_accState )(
            __RPC__in IAccessibleWinSAT * This,
                                 VARIANT varChild,
                                __RPC__out VARIANT *pvarState);
                                    HRESULT ( STDMETHODCALLTYPE *get_accHelp )(
            __RPC__in IAccessibleWinSAT * This,
                                 VARIANT varChild,
                                __RPC__deref_out_opt BSTR *pszHelp);
                                    HRESULT ( STDMETHODCALLTYPE *get_accHelpTopic )(
            __RPC__in IAccessibleWinSAT * This,
                        __RPC__deref_out_opt BSTR *pszHelpFile,
                                 VARIANT varChild,
                                __RPC__out long *pidTopic);
                                    HRESULT ( STDMETHODCALLTYPE *get_accKeyboardShortcut )(
            __RPC__in IAccessibleWinSAT * This,
                                 VARIANT varChild,
                                __RPC__deref_out_opt BSTR *pszKeyboardShortcut);
                                    HRESULT ( STDMETHODCALLTYPE *get_accFocus )(
            __RPC__in IAccessibleWinSAT * This,
                                __RPC__out VARIANT *pvarChild);
                                    HRESULT ( STDMETHODCALLTYPE *get_accSelection )(
            __RPC__in IAccessibleWinSAT * This,
                                __RPC__out VARIANT *pvarChildren);
                                    HRESULT ( STDMETHODCALLTYPE *get_accDefaultAction )(
            __RPC__in IAccessibleWinSAT * This,
                                 VARIANT varChild,
                                __RPC__deref_out_opt BSTR *pszDefaultAction);
                           HRESULT ( STDMETHODCALLTYPE *accSelect )(
            __RPC__in IAccessibleWinSAT * This,
                       long flagsSelect,
                                 VARIANT varChild);
                           HRESULT ( STDMETHODCALLTYPE *accLocation )(
            __RPC__in IAccessibleWinSAT * This,
                        __RPC__out long *pxLeft,
                        __RPC__out long *pyTop,
                        __RPC__out long *pcxWidth,
                        __RPC__out long *pcyHeight,
                                 VARIANT varChild);
                           HRESULT ( STDMETHODCALLTYPE *accNavigate )(
            __RPC__in IAccessibleWinSAT * This,
                       long navDir,
                                 VARIANT varStart,
                                __RPC__out VARIANT *pvarEndUpAt);
                           HRESULT ( STDMETHODCALLTYPE *accHitTest )(
            __RPC__in IAccessibleWinSAT * This,
                       long xLeft,
                       long yTop,
                                __RPC__out VARIANT *pvarChild);
                           HRESULT ( STDMETHODCALLTYPE *accDoDefaultAction )(
            __RPC__in IAccessibleWinSAT * This,
                                 VARIANT varChild);
                                    HRESULT ( STDMETHODCALLTYPE *put_accName )(
            __RPC__in IAccessibleWinSAT * This,
                                 VARIANT varChild,
                       __RPC__in BSTR szName);
                                    HRESULT ( STDMETHODCALLTYPE *put_accValue )(
            __RPC__in IAccessibleWinSAT * This,
                                 VARIANT varChild,
                       __RPC__in BSTR szValue);
        HRESULT ( STDMETHODCALLTYPE *SetAccessiblityData )(
            __RPC__in IAccessibleWinSAT * This,
                               __RPC__in_string LPCWSTR wsName,
                               __RPC__in_string LPCWSTR wsValue,
                               __RPC__in_string LPCWSTR wsDesc);
        END_INTERFACE
    } IAccessibleWinSATVtbl;
    interface IAccessibleWinSAT
    {
        CONST_VTBL struct IAccessibleWinSATVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_accParent(This,ppdispParent) )
    ( (This)->lpVtbl -> get_accChildCount(This,pcountChildren) )
    ( (This)->lpVtbl -> get_accChild(This,varChild,ppdispChild) )
    ( (This)->lpVtbl -> get_accName(This,varChild,pszName) )
    ( (This)->lpVtbl -> get_accValue(This,varChild,pszValue) )
    ( (This)->lpVtbl -> get_accDescription(This,varChild,pszDescription) )
    ( (This)->lpVtbl -> get_accRole(This,varChild,pvarRole) )
    ( (This)->lpVtbl -> get_accState(This,varChild,pvarState) )
    ( (This)->lpVtbl -> get_accHelp(This,varChild,pszHelp) )
    ( (This)->lpVtbl -> get_accHelpTopic(This,pszHelpFile,varChild,pidTopic) )
    ( (This)->lpVtbl -> get_accKeyboardShortcut(This,varChild,pszKeyboardShortcut) )
    ( (This)->lpVtbl -> get_accFocus(This,pvarChild) )
    ( (This)->lpVtbl -> get_accSelection(This,pvarChildren) )
    ( (This)->lpVtbl -> get_accDefaultAction(This,varChild,pszDefaultAction) )
    ( (This)->lpVtbl -> accSelect(This,flagsSelect,varChild) )
    ( (This)->lpVtbl -> accLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight,varChild) )
    ( (This)->lpVtbl -> accNavigate(This,navDir,varStart,pvarEndUpAt) )
    ( (This)->lpVtbl -> accHitTest(This,xLeft,yTop,pvarChild) )
    ( (This)->lpVtbl -> accDoDefaultAction(This,varChild) )
    ( (This)->lpVtbl -> put_accName(This,varChild,szName) )
    ( (This)->lpVtbl -> put_accValue(This,varChild,szValue) )
    ( (This)->lpVtbl -> SetAccessiblityData(This,wsName,wsValue,wsDesc) )
EXTERN_C const IID IID_IQueryOEMWinSATCustomization;
    typedef struct IQueryOEMWinSATCustomizationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IQueryOEMWinSATCustomization * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IQueryOEMWinSATCustomization * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IQueryOEMWinSATCustomization * This);
        HRESULT ( STDMETHODCALLTYPE *GetOEMPrePopulationInfo )(
            __RPC__in IQueryOEMWinSATCustomization * This,
                                __RPC__out WINSAT_OEM_CUSTOMIZATION_STATE *state);
        END_INTERFACE
    } IQueryOEMWinSATCustomizationVtbl;
    interface IQueryOEMWinSATCustomization
    {
        CONST_VTBL struct IQueryOEMWinSATCustomizationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOEMPrePopulationInfo(This,state) )
EXTERN_C const IID LIBID_WINSATLib;
EXTERN_C const CLSID CLSID_CInitiateWinSAT;
class DECLSPEC_UUID("489331DC-F5E0-4528-9FDA-45331BF4A571")
CInitiateWinSAT;
EXTERN_C const CLSID CLSID_CQueryWinSAT;
class DECLSPEC_UUID("F3BDFAD3-F276-49e9-9B17-C474F48F0764")
CQueryWinSAT;
EXTERN_C const CLSID CLSID_CQueryAllWinSAT;
class DECLSPEC_UUID("05DF8D13-C355-47f4-A11E-851B338CEFB8")
CQueryAllWinSAT;
EXTERN_C const CLSID CLSID_CProvideWinSATVisuals;
class DECLSPEC_UUID("9F377D7E-E551-44f8-9F94-9DB392B03B7B")
CProvideWinSATVisuals;
EXTERN_C const CLSID CLSID_CAccessiblityWinSAT;
class DECLSPEC_UUID("6e18f9c6-a3eb-495a-89b7-956482e19f7a")
CAccessiblityWinSAT;
EXTERN_C const CLSID CLSID_CQueryOEMWinSATCustomization;
class DECLSPEC_UUID("C47A41B7-B729-424f-9AF9-5CB3934F2DFA")
CQueryOEMWinSATCustomization;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_winsatcominterfacei_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsatcominterfacei_0000_0010_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HBITMAP_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HBITMAP_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree64( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
