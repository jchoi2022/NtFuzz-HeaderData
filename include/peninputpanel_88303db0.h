#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IPenInputPanel IPenInputPanel;
typedef interface _IPenInputPanelEvents _IPenInputPanelEvents;
typedef interface IHandwrittenTextInsertion IHandwrittenTextInsertion;
typedef class HandwrittenTextInsertion HandwrittenTextInsertion;
typedef class PenInputPanel PenInputPanel;
typedef interface ITextInputPanelEventSink ITextInputPanelEventSink;
typedef interface ITextInputPanel ITextInputPanel;
typedef interface IInputPanelWindowHandle IInputPanelWindowHandle;
typedef interface ITextInputPanelRunInfo ITextInputPanelRunInfo;
typedef class TextInputPanel TextInputPanel;
typedef class PenInputPanel_Internal PenInputPanel_Internal;
#include "oaidl.h"
#include "ocidl.h"
#include "msinkaut.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_peninputpanel_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_peninputpanel_0000_0000_v0_0_s_ifspec;
typedef
enum DISPID_PenInputPanel
    {
        DISPID_PIPAttachedEditWindow = DISPID_VALUE,
        DISPID_PIPFactoid = ( DISPID_PIPAttachedEditWindow + 1 ) ,
        DISPID_PIPCurrentPanel = ( DISPID_PIPFactoid + 1 ) ,
        DISPID_PIPDefaultPanel = ( DISPID_PIPCurrentPanel + 1 ) ,
        DISPID_PIPVisible = ( DISPID_PIPDefaultPanel + 1 ) ,
        DISPID_PIPTop = ( DISPID_PIPVisible + 1 ) ,
        DISPID_PIPLeft = ( DISPID_PIPTop + 1 ) ,
        DISPID_PIPWidth = ( DISPID_PIPLeft + 1 ) ,
        DISPID_PIPHeight = ( DISPID_PIPWidth + 1 ) ,
        DISPID_PIPMoveTo = ( DISPID_PIPHeight + 1 ) ,
        DISPID_PIPCommitPendingInput = ( DISPID_PIPMoveTo + 1 ) ,
        DISPID_PIPRefresh = ( DISPID_PIPCommitPendingInput + 1 ) ,
        DISPID_PIPBusy = ( DISPID_PIPRefresh + 1 ) ,
        DISPID_PIPVerticalOffset = ( DISPID_PIPBusy + 1 ) ,
        DISPID_PIPHorizontalOffset = ( DISPID_PIPVerticalOffset + 1 ) ,
        DISPID_PIPEnableTsf = ( DISPID_PIPHorizontalOffset + 1 ) ,
        DISPID_PIPAutoShow = ( DISPID_PIPEnableTsf + 1 )
    } DISPID_PenInputPanel;
typedef
enum DISPID_PenInputPanelEvents
    {
        DISPID_PIPEVisibleChanged = 0,
        DISPID_PIPEPanelChanged = ( DISPID_PIPEVisibleChanged + 1 ) ,
        DISPID_PIPEInputFailed = ( DISPID_PIPEPanelChanged + 1 ) ,
        DISPID_PIPEPanelMoving = ( DISPID_PIPEInputFailed + 1 )
    } DISPID_PenInputPanelEvents;
typedef DECLSPEC_UUID("7fd1134a-b2ba-4673-8d64-e28be4168e5d")
enum VisualState
    {
        InPlace = 0,
        Floating = 1,
        DockedTop = 2,
        DockedBottom = 3,
        Closed = 4
    } VisualState;
typedef DECLSPEC_UUID("500f9c5a-6739-449b-9cfa-5fc2f2e9ddce")
enum __MIDL___MIDL_itf_peninputpanel_0000_0000_0001
    {
        InteractionMode_InPlace = 0,
        InteractionMode_Floating = 1,
        InteractionMode_DockedTop = 2,
        InteractionMode_DockedBottom = 3
    } InteractionMode;
typedef DECLSPEC_UUID("aa9bda6b-fc6a-49a3-9d7c-26b233690583")
enum __MIDL___MIDL_itf_peninputpanel_0000_0000_0002
    {
        InPlaceState_Auto = 0,
        InPlaceState_HoverTarget = 1,
        InPlaceState_Expanded = 2
    } InPlaceState;
typedef DECLSPEC_UUID("8b4f78bf-4253-4467-a006-670419caa993")
enum __MIDL___MIDL_itf_peninputpanel_0000_0000_0003
    {
        PanelInputArea_Auto = 0,
        PanelInputArea_Keyboard = 1,
        PanelInputArea_WritingPad = 2,
        PanelInputArea_CharacterPad = 3
    } PanelInputArea;
typedef DECLSPEC_UUID("d708f745-981e-4e9b-afa0-98082aadb421")
enum __MIDL___MIDL_itf_peninputpanel_0000_0000_0004
    {
        CorrectionMode_NotVisible = 0,
        CorrectionMode_PreInsertion = 1,
        CorrectionMode_PostInsertionCollapsed = 2,
        CorrectionMode_PostInsertionExpanded = 3
    } CorrectionMode;
typedef DECLSPEC_UUID("84ccefd0-9212-44e4-94e6-91562a94016e")
enum __MIDL___MIDL_itf_peninputpanel_0000_0000_0005
    {
        CorrectionPosition_Auto = 0,
        CorrectionPosition_Bottom = 1,
        CorrectionPosition_Top = 2
    } CorrectionPosition;
typedef DECLSPEC_UUID("619eab37-412f-44ca-996f-0f415fb8bc12")
enum __MIDL___MIDL_itf_peninputpanel_0000_0000_0006
    {
        InPlaceDirection_Auto = 0,
        InPlaceDirection_Bottom = 1,
        InPlaceDirection_Top = 2
    } InPlaceDirection;
typedef DECLSPEC_UUID("1ad3e1f7-4dd0-48c3-a89b-dfccba13d6f7")
enum __MIDL___MIDL_itf_peninputpanel_0000_0000_0007
    {
        EventMask_InPlaceStateChanging = 1,
        EventMask_InPlaceStateChanged = 2,
        EventMask_InPlaceSizeChanging = 4,
        EventMask_InPlaceSizeChanged = 8,
        EventMask_InputAreaChanging = 16,
        EventMask_InputAreaChanged = 32,
        EventMask_CorrectionModeChanging = 64,
        EventMask_CorrectionModeChanged = 128,
        EventMask_InPlaceVisibilityChanging = 256,
        EventMask_InPlaceVisibilityChanged = 512,
        EventMask_TextInserting = 1024,
        EventMask_TextInserted = 2048,
        EventMask_All = ( ( ( ( ( ( ( ( ( ( ( EventMask_InPlaceStateChanging + EventMask_InPlaceStateChanged ) + EventMask_InPlaceSizeChanging ) + EventMask_InPlaceSizeChanged ) + EventMask_InputAreaChanging ) + EventMask_InputAreaChanged ) + EventMask_CorrectionModeChanging ) + EventMask_CorrectionModeChanged ) + EventMask_InPlaceVisibilityChanging ) + EventMask_InPlaceVisibilityChanged ) + EventMask_TextInserting ) + EventMask_TextInserted )
    } EventMask;
const WCHAR MICROSOFT_URL_EXPERIENCE_PROPERTY[] = L"Microsoft TIP URL Experience";
const WCHAR MICROSOFT_TIP_NO_INSERT_BUTTON_PROPERTY[] = L"Microsoft TIP No Insert Option";
const WCHAR MICROSOFT_TIP_COMBOBOXLIST_PROPERTY[] = L"Microsoft TIP ComboBox List Window Identifier";
const WCHAR MICROSOFT_TIP_OPENING_MSG[] = L"TabletInputPanelOpening";
EXTERN_C const IID LIBID_PenInputPanelLib;
typedef
enum PanelType
    {
        PT_Default = 0,
        PT_Inactive = ( PT_Default + 1 ) ,
        PT_Handwriting = ( PT_Inactive + 1 ) ,
        PT_Keyboard = ( PT_Handwriting + 1 )
    } PanelType;
EXTERN_C const IID IID_IPenInputPanel;
    typedef struct IPenInputPanelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPenInputPanel * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPenInputPanel * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPenInputPanel * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPenInputPanel * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPenInputPanel * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPenInputPanel * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPenInputPanel * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Busy )(
            __RPC__in IPenInputPanel * This,
                                __RPC__out VARIANT_BOOL *Busy);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Factoid )(
            __RPC__in IPenInputPanel * This,
                                __RPC__deref_out_opt BSTR *Factoid);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Factoid )(
            __RPC__in IPenInputPanel * This,
                       __RPC__in BSTR Factoid);
                                                     HRESULT ( STDMETHODCALLTYPE *get_AttachedEditWindow )(
            __RPC__in IPenInputPanel * This,
                                __RPC__out LONG32 *AttachedEditWindow);
                                                     HRESULT ( STDMETHODCALLTYPE *put_AttachedEditWindow )(
            __RPC__in IPenInputPanel * This,
                       LONG32 AttachedEditWindow);
                                                     HRESULT ( STDMETHODCALLTYPE *get_CurrentPanel )(
            __RPC__in IPenInputPanel * This,
                                __RPC__out PanelType *CurrentPanel);
                                                     HRESULT ( STDMETHODCALLTYPE *put_CurrentPanel )(
            __RPC__in IPenInputPanel * This,
                       PanelType CurrentPanel);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DefaultPanel )(
            __RPC__in IPenInputPanel * This,
                                __RPC__out PanelType *pDefaultPanel);
                                                     HRESULT ( STDMETHODCALLTYPE *put_DefaultPanel )(
            __RPC__in IPenInputPanel * This,
                       PanelType DefaultPanel);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Visible )(
            __RPC__in IPenInputPanel * This,
                                __RPC__out VARIANT_BOOL *Visible);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Visible )(
            __RPC__in IPenInputPanel * This,
                       VARIANT_BOOL Visible);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Top )(
            __RPC__in IPenInputPanel * This,
                                __RPC__out long *Top);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Left )(
            __RPC__in IPenInputPanel * This,
                                __RPC__out long *Left);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Width )(
            __RPC__in IPenInputPanel * This,
                                __RPC__out long *Width);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Height )(
            __RPC__in IPenInputPanel * This,
                                __RPC__out long *Height);
                                                     HRESULT ( STDMETHODCALLTYPE *get_VerticalOffset )(
            __RPC__in IPenInputPanel * This,
                                __RPC__out long *VerticalOffset);
                                                     HRESULT ( STDMETHODCALLTYPE *put_VerticalOffset )(
            __RPC__in IPenInputPanel * This,
                       long VerticalOffset);
                                                     HRESULT ( STDMETHODCALLTYPE *get_HorizontalOffset )(
            __RPC__in IPenInputPanel * This,
                                __RPC__out long *HorizontalOffset);
                                                     HRESULT ( STDMETHODCALLTYPE *put_HorizontalOffset )(
            __RPC__in IPenInputPanel * This,
                       long HorizontalOffset);
                                                     HRESULT ( STDMETHODCALLTYPE *get_AutoShow )(
            __RPC__in IPenInputPanel * This,
                                __RPC__out VARIANT_BOOL *pAutoShow);
                                                     HRESULT ( STDMETHODCALLTYPE *put_AutoShow )(
            __RPC__in IPenInputPanel * This,
                       VARIANT_BOOL AutoShow);
                                            HRESULT ( STDMETHODCALLTYPE *MoveTo )(
            __RPC__in IPenInputPanel * This,
                       long Left,
                       long Top);
                                            HRESULT ( STDMETHODCALLTYPE *CommitPendingInput )(
            __RPC__in IPenInputPanel * This);
                                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IPenInputPanel * This);
                                            HRESULT ( STDMETHODCALLTYPE *EnableTsf )(
            __RPC__in IPenInputPanel * This,
                       VARIANT_BOOL Enable);
        END_INTERFACE
    } IPenInputPanelVtbl;
    interface IPenInputPanel
    {
        CONST_VTBL struct IPenInputPanelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Busy(This,Busy) )
    ( (This)->lpVtbl -> get_Factoid(This,Factoid) )
    ( (This)->lpVtbl -> put_Factoid(This,Factoid) )
    ( (This)->lpVtbl -> get_AttachedEditWindow(This,AttachedEditWindow) )
    ( (This)->lpVtbl -> put_AttachedEditWindow(This,AttachedEditWindow) )
    ( (This)->lpVtbl -> get_CurrentPanel(This,CurrentPanel) )
    ( (This)->lpVtbl -> put_CurrentPanel(This,CurrentPanel) )
    ( (This)->lpVtbl -> get_DefaultPanel(This,pDefaultPanel) )
    ( (This)->lpVtbl -> put_DefaultPanel(This,DefaultPanel) )
    ( (This)->lpVtbl -> get_Visible(This,Visible) )
    ( (This)->lpVtbl -> put_Visible(This,Visible) )
    ( (This)->lpVtbl -> get_Top(This,Top) )
    ( (This)->lpVtbl -> get_Left(This,Left) )
    ( (This)->lpVtbl -> get_Width(This,Width) )
    ( (This)->lpVtbl -> get_Height(This,Height) )
    ( (This)->lpVtbl -> get_VerticalOffset(This,VerticalOffset) )
    ( (This)->lpVtbl -> put_VerticalOffset(This,VerticalOffset) )
    ( (This)->lpVtbl -> get_HorizontalOffset(This,HorizontalOffset) )
    ( (This)->lpVtbl -> put_HorizontalOffset(This,HorizontalOffset) )
    ( (This)->lpVtbl -> get_AutoShow(This,pAutoShow) )
    ( (This)->lpVtbl -> put_AutoShow(This,AutoShow) )
    ( (This)->lpVtbl -> MoveTo(This,Left,Top) )
    ( (This)->lpVtbl -> CommitPendingInput(This) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> EnableTsf(This,Enable) )
EXTERN_C const IID DIID__IPenInputPanelEvents;
    typedef struct _IPenInputPanelEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _IPenInputPanelEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _IPenInputPanelEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _IPenInputPanelEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _IPenInputPanelEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _IPenInputPanelEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _IPenInputPanelEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _IPenInputPanelEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _IPenInputPanelEventsVtbl;
    interface _IPenInputPanelEvents
    {
        CONST_VTBL struct _IPenInputPanelEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IHandwrittenTextInsertion;
    typedef struct IHandwrittenTextInsertionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHandwrittenTextInsertion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHandwrittenTextInsertion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHandwrittenTextInsertion * This);
        HRESULT ( STDMETHODCALLTYPE *InsertRecognitionResultsArray )(
            __RPC__in IHandwrittenTextInsertion * This,
                       __RPC__in SAFEARRAY * psaAlternates,
                       LCID locale,
                       BOOL fAlternateContainsAutoSpacingInformation);
        HRESULT ( STDMETHODCALLTYPE *InsertInkRecognitionResult )(
            __RPC__in IHandwrittenTextInsertion * This,
                       __RPC__in_opt IInkRecognitionResult *pIInkRecoResult,
                       LCID locale,
                       BOOL fAlternateContainsAutoSpacingInformation);
        END_INTERFACE
    } IHandwrittenTextInsertionVtbl;
    interface IHandwrittenTextInsertion
    {
        CONST_VTBL struct IHandwrittenTextInsertionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InsertRecognitionResultsArray(This,psaAlternates,locale,fAlternateContainsAutoSpacingInformation) )
    ( (This)->lpVtbl -> InsertInkRecognitionResult(This,pIInkRecoResult,locale,fAlternateContainsAutoSpacingInformation) )
EXTERN_C const CLSID CLSID_HandwrittenTextInsertion;
class DECLSPEC_UUID("9F074EE2-E6E9-4d8a-A047-EB5B5C3C55DA")
HandwrittenTextInsertion;
EXTERN_C const CLSID CLSID_PenInputPanel;
class DECLSPEC_UUID("f744e496-1b5a-489e-81dc-fbd7ac6298a8")
PenInputPanel;
EXTERN_C const IID IID_ITextInputPanelEventSink;
    typedef struct ITextInputPanelEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextInputPanelEventSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextInputPanelEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextInputPanelEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *InPlaceStateChanging )(
            __RPC__in ITextInputPanelEventSink * This,
                       InPlaceState oldInPlaceState,
                       InPlaceState newInPlaceState);
        HRESULT ( STDMETHODCALLTYPE *InPlaceStateChanged )(
            __RPC__in ITextInputPanelEventSink * This,
                       InPlaceState oldInPlaceState,
                       InPlaceState newInPlaceState);
        HRESULT ( STDMETHODCALLTYPE *InPlaceSizeChanging )(
            __RPC__in ITextInputPanelEventSink * This,
                       RECT oldBoundingRectangle,
                       RECT newBoundingRectangle);
        HRESULT ( STDMETHODCALLTYPE *InPlaceSizeChanged )(
            __RPC__in ITextInputPanelEventSink * This,
                       RECT oldBoundingRectangle,
                       RECT newBoundingRectangle);
        HRESULT ( STDMETHODCALLTYPE *InputAreaChanging )(
            __RPC__in ITextInputPanelEventSink * This,
                       PanelInputArea oldInputArea,
                       PanelInputArea newInputArea);
        HRESULT ( STDMETHODCALLTYPE *InputAreaChanged )(
            __RPC__in ITextInputPanelEventSink * This,
                       PanelInputArea oldInputArea,
                       PanelInputArea newInputArea);
        HRESULT ( STDMETHODCALLTYPE *CorrectionModeChanging )(
            __RPC__in ITextInputPanelEventSink * This,
                       CorrectionMode oldCorrectionMode,
                       CorrectionMode newCorrectionMode);
        HRESULT ( STDMETHODCALLTYPE *CorrectionModeChanged )(
            __RPC__in ITextInputPanelEventSink * This,
                       CorrectionMode oldCorrectionMode,
                       CorrectionMode newCorrectionMode);
        HRESULT ( STDMETHODCALLTYPE *InPlaceVisibilityChanging )(
            __RPC__in ITextInputPanelEventSink * This,
                       BOOL oldVisible,
                       BOOL newVisible);
        HRESULT ( STDMETHODCALLTYPE *InPlaceVisibilityChanged )(
            __RPC__in ITextInputPanelEventSink * This,
                       BOOL oldVisible,
                       BOOL newVisible);
        HRESULT ( STDMETHODCALLTYPE *TextInserting )(
            __RPC__in ITextInputPanelEventSink * This,
                       __RPC__in SAFEARRAY * Ink);
        HRESULT ( STDMETHODCALLTYPE *TextInserted )(
            __RPC__in ITextInputPanelEventSink * This,
                       __RPC__in SAFEARRAY * Ink);
        END_INTERFACE
    } ITextInputPanelEventSinkVtbl;
    interface ITextInputPanelEventSink
    {
        CONST_VTBL struct ITextInputPanelEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InPlaceStateChanging(This,oldInPlaceState,newInPlaceState) )
    ( (This)->lpVtbl -> InPlaceStateChanged(This,oldInPlaceState,newInPlaceState) )
    ( (This)->lpVtbl -> InPlaceSizeChanging(This,oldBoundingRectangle,newBoundingRectangle) )
    ( (This)->lpVtbl -> InPlaceSizeChanged(This,oldBoundingRectangle,newBoundingRectangle) )
    ( (This)->lpVtbl -> InputAreaChanging(This,oldInputArea,newInputArea) )
    ( (This)->lpVtbl -> InputAreaChanged(This,oldInputArea,newInputArea) )
    ( (This)->lpVtbl -> CorrectionModeChanging(This,oldCorrectionMode,newCorrectionMode) )
    ( (This)->lpVtbl -> CorrectionModeChanged(This,oldCorrectionMode,newCorrectionMode) )
    ( (This)->lpVtbl -> InPlaceVisibilityChanging(This,oldVisible,newVisible) )
    ( (This)->lpVtbl -> InPlaceVisibilityChanged(This,oldVisible,newVisible) )
    ( (This)->lpVtbl -> TextInserting(This,Ink) )
    ( (This)->lpVtbl -> TextInserted(This,Ink) )
EXTERN_C const IID IID_ITextInputPanel;
    typedef struct ITextInputPanelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextInputPanel * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextInputPanel * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextInputPanel * This);
                        HRESULT ( STDMETHODCALLTYPE *get_AttachedEditWindow )(
            __RPC__in ITextInputPanel * This,
                                __RPC__deref_out_opt HWND *AttachedEditWindow);
                        HRESULT ( STDMETHODCALLTYPE *put_AttachedEditWindow )(
            __RPC__in ITextInputPanel * This,
                       __RPC__in HWND AttachedEditWindow);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentInteractionMode )(
            __RPC__in ITextInputPanel * This,
                                __RPC__out InteractionMode *CurrentInteractionMode);
                        HRESULT ( STDMETHODCALLTYPE *get_DefaultInPlaceState )(
            __RPC__in ITextInputPanel * This,
                                __RPC__out InPlaceState *State);
                        HRESULT ( STDMETHODCALLTYPE *put_DefaultInPlaceState )(
            __RPC__in ITextInputPanel * This,
                       InPlaceState State);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentInPlaceState )(
            __RPC__in ITextInputPanel * This,
                                __RPC__out InPlaceState *State);
                        HRESULT ( STDMETHODCALLTYPE *get_DefaultInputArea )(
            __RPC__in ITextInputPanel * This,
                                __RPC__out PanelInputArea *Area);
                        HRESULT ( STDMETHODCALLTYPE *put_DefaultInputArea )(
            __RPC__in ITextInputPanel * This,
                       PanelInputArea Area);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentInputArea )(
            __RPC__in ITextInputPanel * This,
                                __RPC__out PanelInputArea *Area);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCorrectionMode )(
            __RPC__in ITextInputPanel * This,
                                __RPC__out CorrectionMode *Mode);
                        HRESULT ( STDMETHODCALLTYPE *get_PreferredInPlaceDirection )(
            __RPC__in ITextInputPanel * This,
                                __RPC__out InPlaceDirection *Direction);
                        HRESULT ( STDMETHODCALLTYPE *put_PreferredInPlaceDirection )(
            __RPC__in ITextInputPanel * This,
                       InPlaceDirection Direction);
                        HRESULT ( STDMETHODCALLTYPE *get_ExpandPostInsertionCorrection )(
            __RPC__in ITextInputPanel * This,
                                __RPC__out BOOL *Expand);
                        HRESULT ( STDMETHODCALLTYPE *put_ExpandPostInsertionCorrection )(
            __RPC__in ITextInputPanel * This,
                       BOOL Expand);
                        HRESULT ( STDMETHODCALLTYPE *get_InPlaceVisibleOnFocus )(
            __RPC__in ITextInputPanel * This,
                                __RPC__out BOOL *Visible);
                        HRESULT ( STDMETHODCALLTYPE *put_InPlaceVisibleOnFocus )(
            __RPC__in ITextInputPanel * This,
                       BOOL Visible);
                        HRESULT ( STDMETHODCALLTYPE *get_InPlaceBoundingRectangle )(
            __RPC__in ITextInputPanel * This,
                                __RPC__out RECT *BoundingRectangle);
                        HRESULT ( STDMETHODCALLTYPE *get_PopUpCorrectionHeight )(
            __RPC__in ITextInputPanel * This,
                                __RPC__out int *Height);
                        HRESULT ( STDMETHODCALLTYPE *get_PopDownCorrectionHeight )(
            __RPC__in ITextInputPanel * This,
                                __RPC__out int *Height);
        HRESULT ( STDMETHODCALLTYPE *CommitPendingInput )(
            __RPC__in ITextInputPanel * This);
        HRESULT ( STDMETHODCALLTYPE *SetInPlaceVisibility )(
            __RPC__in ITextInputPanel * This,
            BOOL Visible);
        HRESULT ( STDMETHODCALLTYPE *SetInPlacePosition )(
            __RPC__in ITextInputPanel * This,
            int xPosition,
            int yPosition,
            CorrectionPosition position);
        HRESULT ( STDMETHODCALLTYPE *SetInPlaceHoverTargetPosition )(
            __RPC__in ITextInputPanel * This,
            int xPosition,
            int yPosition);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            __RPC__in ITextInputPanel * This,
            __RPC__in_opt ITextInputPanelEventSink *EventSink,
            DWORD EventMask);
        HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            __RPC__in ITextInputPanel * This,
            __RPC__in_opt ITextInputPanelEventSink *EventSink);
        END_INTERFACE
    } ITextInputPanelVtbl;
    interface ITextInputPanel
    {
        CONST_VTBL struct ITextInputPanelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_AttachedEditWindow(This,AttachedEditWindow) )
    ( (This)->lpVtbl -> put_AttachedEditWindow(This,AttachedEditWindow) )
    ( (This)->lpVtbl -> get_CurrentInteractionMode(This,CurrentInteractionMode) )
    ( (This)->lpVtbl -> get_DefaultInPlaceState(This,State) )
    ( (This)->lpVtbl -> put_DefaultInPlaceState(This,State) )
    ( (This)->lpVtbl -> get_CurrentInPlaceState(This,State) )
    ( (This)->lpVtbl -> get_DefaultInputArea(This,Area) )
    ( (This)->lpVtbl -> put_DefaultInputArea(This,Area) )
    ( (This)->lpVtbl -> get_CurrentInputArea(This,Area) )
    ( (This)->lpVtbl -> get_CurrentCorrectionMode(This,Mode) )
    ( (This)->lpVtbl -> get_PreferredInPlaceDirection(This,Direction) )
    ( (This)->lpVtbl -> put_PreferredInPlaceDirection(This,Direction) )
    ( (This)->lpVtbl -> get_ExpandPostInsertionCorrection(This,Expand) )
    ( (This)->lpVtbl -> put_ExpandPostInsertionCorrection(This,Expand) )
    ( (This)->lpVtbl -> get_InPlaceVisibleOnFocus(This,Visible) )
    ( (This)->lpVtbl -> put_InPlaceVisibleOnFocus(This,Visible) )
    ( (This)->lpVtbl -> get_InPlaceBoundingRectangle(This,BoundingRectangle) )
    ( (This)->lpVtbl -> get_PopUpCorrectionHeight(This,Height) )
    ( (This)->lpVtbl -> get_PopDownCorrectionHeight(This,Height) )
    ( (This)->lpVtbl -> CommitPendingInput(This) )
    ( (This)->lpVtbl -> SetInPlaceVisibility(This,Visible) )
    ( (This)->lpVtbl -> SetInPlacePosition(This,xPosition,yPosition,position) )
    ( (This)->lpVtbl -> SetInPlaceHoverTargetPosition(This,xPosition,yPosition) )
    ( (This)->lpVtbl -> Advise(This,EventSink,EventMask) )
    ( (This)->lpVtbl -> Unadvise(This,EventSink) )
EXTERN_C const IID IID_IInputPanelWindowHandle;
    typedef struct IInputPanelWindowHandleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInputPanelWindowHandle * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInputPanelWindowHandle * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInputPanelWindowHandle * This);
                        HRESULT ( STDMETHODCALLTYPE *get_AttachedEditWindow32 )(
            __RPC__in IInputPanelWindowHandle * This,
                                __RPC__out LONG32 *AttachedEditWindow);
                        HRESULT ( STDMETHODCALLTYPE *put_AttachedEditWindow32 )(
            __RPC__in IInputPanelWindowHandle * This,
                       LONG32 AttachedEditWindow);
                        HRESULT ( STDMETHODCALLTYPE *get_AttachedEditWindow64 )(
            __RPC__in IInputPanelWindowHandle * This,
                                __RPC__out LONG64 *AttachedEditWindow);
                        HRESULT ( STDMETHODCALLTYPE *put_AttachedEditWindow64 )(
            __RPC__in IInputPanelWindowHandle * This,
                       LONG64 AttachedEditWindow);
        END_INTERFACE
    } IInputPanelWindowHandleVtbl;
    interface IInputPanelWindowHandle
    {
        CONST_VTBL struct IInputPanelWindowHandleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_AttachedEditWindow32(This,AttachedEditWindow) )
    ( (This)->lpVtbl -> put_AttachedEditWindow32(This,AttachedEditWindow) )
    ( (This)->lpVtbl -> get_AttachedEditWindow64(This,AttachedEditWindow) )
    ( (This)->lpVtbl -> put_AttachedEditWindow64(This,AttachedEditWindow) )
EXTERN_C const IID IID_ITextInputPanelRunInfo;
    typedef struct ITextInputPanelRunInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextInputPanelRunInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextInputPanelRunInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextInputPanelRunInfo * This);
        HRESULT ( STDMETHODCALLTYPE *IsTipRunning )(
            __RPC__in ITextInputPanelRunInfo * This,
                        __RPC__out BOOL *pfRunning);
        END_INTERFACE
    } ITextInputPanelRunInfoVtbl;
    interface ITextInputPanelRunInfo
    {
        CONST_VTBL struct ITextInputPanelRunInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsTipRunning(This,pfRunning) )
EXTERN_C const CLSID CLSID_TextInputPanel;
class DECLSPEC_UUID("f9b189d7-228b-4f2b-8650-b97f59e02c8c")
TextInputPanel;
EXTERN_C const CLSID CLSID_PenInputPanel_Internal;
class DECLSPEC_UUID("802B1FB9-056B-4720-B0CC-80D23B71171E")
PenInputPanel_Internal;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_peninputpanel_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_peninputpanel_0000_0001_v0_0_s_ifspec;
}
