#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IInkEdit IInkEdit;
typedef interface _IInkEditEvents _IInkEditEvents;
typedef class InkEdit InkEdit;
#include "oaidl.h"
#include "ocidl.h"
#include "msinkaut.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
struct IEC_STROKEINFO
{
     NMHDR nmhdr;
     IInkCursor * Cursor;
     IInkStrokeDisp * Stroke;
};
struct IEC_GESTUREINFO
{
     NMHDR nmhdr;
     IInkCursor * Cursor;
     IInkStrokes * Strokes;
     VARIANT Gestures;
};
struct IEC_RECOGNITIONRESULTINFO
{
     NMHDR nmhdr;
     IInkRecognitionResult * RecognitionResult;
};
extern RPC_IF_HANDLE __MIDL_itf_inked_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inked_0000_0000_v0_0_s_ifspec;
typedef
enum MouseButton
    {
        NO_BUTTON = 0,
        LEFT_BUTTON = 0x1,
        RIGHT_BUTTON = 0x2,
        MIDDLE_BUTTON = 0x4
    } MouseButton;
typedef
enum SelAlignmentConstants
    {
        rtfLeft = 0,
        rtfRight = 1,
        rtfCenter = 2
    } SelAlignmentConstants;
typedef
enum DISPID_InkEdit
    {
        DISPID_Text = DISPID_VALUE,
        DISPID_TextRTF = ( DISPID_Text + 1 ) ,
        DISPID_Hwnd = ( DISPID_TextRTF + 1 ) ,
        DISPID_DisableNoScroll = ( DISPID_Hwnd + 1 ) ,
        DISPID_Locked = ( DISPID_DisableNoScroll + 1 ) ,
        DISPID_Enabled = ( DISPID_Locked + 1 ) ,
        DISPID_MaxLength = ( DISPID_Enabled + 1 ) ,
        DISPID_MultiLine = ( DISPID_MaxLength + 1 ) ,
        DISPID_ScrollBars = ( DISPID_MultiLine + 1 ) ,
        DISPID_RTSelStart = ( DISPID_ScrollBars + 1 ) ,
        DISPID_RTSelLength = ( DISPID_RTSelStart + 1 ) ,
        DISPID_RTSelText = ( DISPID_RTSelLength + 1 ) ,
        DISPID_SelAlignment = ( DISPID_RTSelText + 1 ) ,
        DISPID_SelBold = ( DISPID_SelAlignment + 1 ) ,
        DISPID_SelCharOffset = ( DISPID_SelBold + 1 ) ,
        DISPID_SelColor = ( DISPID_SelCharOffset + 1 ) ,
        DISPID_SelFontName = ( DISPID_SelColor + 1 ) ,
        DISPID_SelFontSize = ( DISPID_SelFontName + 1 ) ,
        DISPID_SelItalic = ( DISPID_SelFontSize + 1 ) ,
        DISPID_SelRTF = ( DISPID_SelItalic + 1 ) ,
        DISPID_SelUnderline = ( DISPID_SelRTF + 1 ) ,
        DISPID_DragIcon = ( DISPID_SelUnderline + 1 ) ,
        DISPID_Status = ( DISPID_DragIcon + 1 ) ,
        DISPID_UseMouseForInput = ( DISPID_Status + 1 ) ,
        DISPID_InkMode = ( DISPID_UseMouseForInput + 1 ) ,
        DISPID_InkInsertMode = ( DISPID_InkMode + 1 ) ,
        DISPID_RecoTimeout = ( DISPID_InkInsertMode + 1 ) ,
        DISPID_DrawAttr = ( DISPID_RecoTimeout + 1 ) ,
        DISPID_Recognizer = ( DISPID_DrawAttr + 1 ) ,
        DISPID_Factoid = ( DISPID_Recognizer + 1 ) ,
        DISPID_SelInk = ( DISPID_Factoid + 1 ) ,
        DISPID_SelInksDisplayMode = ( DISPID_SelInk + 1 ) ,
        DISPID_Recognize = ( DISPID_SelInksDisplayMode + 1 ) ,
        DISPID_GetGestStatus = ( DISPID_Recognize + 1 ) ,
        DISPID_SetGestStatus = ( DISPID_GetGestStatus + 1 ) ,
        DISPID_Refresh = ( DISPID_SetGestStatus + 1 )
    } DISPID_InkEdit;
typedef
enum DISPID_InkEditEvents
    {
        DISPID_IeeChange = 1,
        DISPID_IeeSelChange = 2,
        DISPID_IeeKeyDown = 3,
        DISPID_IeeKeyUp = 4,
        DISPID_IeeMouseUp = 5,
        DISPID_IeeMouseDown = 6,
        DISPID_IeeKeyPress = 7,
        DISPID_IeeDblClick = 8,
        DISPID_IeeClick = 9,
        DISPID_IeeMouseMove = 10,
        DISPID_IeeCursorDown = 21,
        DISPID_IeeStroke = 22,
        DISPID_IeeGesture = 23,
        DISPID_IeeRecognitionResult = 24
    } DISPID_InkEditEvents;
EXTERN_C const IID LIBID_INKEDLib;
typedef
enum InkMode
    {
        IEM_Disabled = 0,
        IEM_Ink = 1,
        IEM_InkAndGesture = 2
    } InkMode;
typedef
enum InkInsertMode
    {
        IEM_InsertText = 0,
        IEM_InsertInk = 1
    } InkInsertMode;
typedef
enum InkEditStatus
    {
        IES_Idle = 0,
        IES_Collecting = 1,
        IES_Recognizing = 2
    } InkEditStatus;
typedef
enum InkDisplayMode
    {
        IDM_Ink = 0,
        IDM_Text = 1
    } InkDisplayMode;
typedef
enum AppearanceConstants
    {
        rtfFlat = 0,
        rtfThreeD = 1
    } AppearanceConstants;
typedef
enum BorderStyleConstants
    {
        rtfNoBorder = 0,
        rtfFixedSingle = 1
    } BorderStyleConstants;
typedef
enum ScrollBarsConstants
    {
        rtfNone = 0,
        rtfHorizontal = 1,
        rtfVertical = 2,
        rtfBoth = 3
    } ScrollBarsConstants;
EXTERN_C const IID IID_IInkEdit;
    typedef struct IInkEditVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkEdit * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkEdit * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkEdit * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkEdit * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkEdit * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkEdit * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkEdit * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IInkEdit * This,
                                __RPC__out InkEditStatus *pStatus);
                                                     HRESULT ( STDMETHODCALLTYPE *get_UseMouseForInput )(
            __RPC__in IInkEdit * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                                     HRESULT ( STDMETHODCALLTYPE *put_UseMouseForInput )(
            __RPC__in IInkEdit * This,
                                     VARIANT_BOOL newVal);
                                                     HRESULT ( STDMETHODCALLTYPE *get_InkMode )(
            __RPC__in IInkEdit * This,
                                __RPC__out InkMode *pVal);
                                                     HRESULT ( STDMETHODCALLTYPE *put_InkMode )(
            __RPC__in IInkEdit * This,
                                     InkMode newVal);
                                                     HRESULT ( STDMETHODCALLTYPE *get_InkInsertMode )(
            __RPC__in IInkEdit * This,
                                __RPC__out InkInsertMode *pVal);
                                                     HRESULT ( STDMETHODCALLTYPE *put_InkInsertMode )(
            __RPC__in IInkEdit * This,
                                     InkInsertMode newVal);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DrawingAttributes )(
            __RPC__in IInkEdit * This,
                                __RPC__deref_out_opt IInkDrawingAttributes **pVal);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_DrawingAttributes )(
            __RPC__in IInkEdit * This,
                       __RPC__in_opt IInkDrawingAttributes *newVal);
                                                     HRESULT ( STDMETHODCALLTYPE *get_RecognitionTimeout )(
            __RPC__in IInkEdit * This,
                                __RPC__out long *pVal);
                                                     HRESULT ( STDMETHODCALLTYPE *put_RecognitionTimeout )(
            __RPC__in IInkEdit * This,
                       long newVal);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Recognizer )(
            __RPC__in IInkEdit * This,
                                __RPC__deref_out_opt IInkRecognizer **pVal);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_Recognizer )(
            __RPC__in IInkEdit * This,
                       __RPC__in_opt IInkRecognizer *newVal);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Factoid )(
            __RPC__in IInkEdit * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Factoid )(
            __RPC__in IInkEdit * This,
                       __RPC__in BSTR newVal);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SelInks )(
            __RPC__in IInkEdit * This,
                                __RPC__out VARIANT *pSelInk);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SelInks )(
            __RPC__in IInkEdit * This,
                       VARIANT SelInk);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SelInksDisplayMode )(
            __RPC__in IInkEdit * This,
                                __RPC__out InkDisplayMode *pInkDisplayMode);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SelInksDisplayMode )(
            __RPC__in IInkEdit * This,
                       InkDisplayMode InkDisplayMode);
                                            HRESULT ( STDMETHODCALLTYPE *Recognize )(
            __RPC__in IInkEdit * This);
                                            HRESULT ( STDMETHODCALLTYPE *GetGestureStatus )(
            __RPC__in IInkEdit * This,
                       InkApplicationGesture Gesture,
                                __RPC__out VARIANT_BOOL *pListen);
                                            HRESULT ( STDMETHODCALLTYPE *SetGestureStatus )(
            __RPC__in IInkEdit * This,
                       InkApplicationGesture Gesture,
                       VARIANT_BOOL Listen);
                                                     HRESULT ( STDMETHODCALLTYPE *put_BackColor )(
            __RPC__in IInkEdit * This,
                       OLE_COLOR clr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_BackColor )(
            __RPC__in IInkEdit * This,
                                __RPC__out OLE_COLOR *pclr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Appearance )(
            __RPC__in IInkEdit * This,
                                __RPC__out AppearanceConstants *pAppearance);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Appearance )(
            __RPC__in IInkEdit * This,
                       AppearanceConstants pAppearance);
                                                     HRESULT ( STDMETHODCALLTYPE *get_BorderStyle )(
            __RPC__in IInkEdit * This,
                                __RPC__out BorderStyleConstants *pBorderStyle);
                                                     HRESULT ( STDMETHODCALLTYPE *put_BorderStyle )(
            __RPC__in IInkEdit * This,
                       BorderStyleConstants pBorderStyle);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Hwnd )(
            __RPC__in IInkEdit * This,
                                __RPC__out OLE_HANDLE *pohHwnd);
                                                               HRESULT ( STDMETHODCALLTYPE *get_Font )(
            __RPC__in IInkEdit * This,
                                __RPC__deref_out_opt IFontDisp **ppFont);
                                                                  HRESULT ( STDMETHODCALLTYPE *putref_Font )(
            __RPC__in IInkEdit * This,
                       __RPC__in_opt IFontDisp *ppFont);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Text )(
            __RPC__in IInkEdit * This,
                                __RPC__deref_out_opt BSTR *pbstrText);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Text )(
            __RPC__in IInkEdit * This,
                       __RPC__in BSTR pbstrText);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MouseIcon )(
            __RPC__in IInkEdit * This,
                                __RPC__deref_out_opt IPictureDisp **MouseIcon);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MouseIcon )(
            __RPC__in IInkEdit * This,
                       __RPC__in_opt IPictureDisp *MouseIcon);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_MouseIcon )(
            __RPC__in IInkEdit * This,
                       __RPC__in_opt IPictureDisp *MouseIcon);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MousePointer )(
            __RPC__in IInkEdit * This,
                                __RPC__out InkMousePointer *MousePointer);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MousePointer )(
            __RPC__in IInkEdit * This,
                       InkMousePointer MousePointer);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Locked )(
            __RPC__in IInkEdit * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Locked )(
            __RPC__in IInkEdit * This,
                       VARIANT_BOOL newVal);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IInkEdit * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IInkEdit * This,
                       VARIANT_BOOL newVal);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MaxLength )(
            __RPC__in IInkEdit * This,
                                __RPC__out long *plMaxLength);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MaxLength )(
            __RPC__in IInkEdit * This,
                       long lMaxLength);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MultiLine )(
            __RPC__in IInkEdit * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MultiLine )(
            __RPC__in IInkEdit * This,
                       VARIANT_BOOL newVal);
                                                     HRESULT ( STDMETHODCALLTYPE *get_ScrollBars )(
            __RPC__in IInkEdit * This,
                                __RPC__out ScrollBarsConstants *pVal);
                                                     HRESULT ( STDMETHODCALLTYPE *put_ScrollBars )(
            __RPC__in IInkEdit * This,
                       ScrollBarsConstants newVal);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DisableNoScroll )(
            __RPC__in IInkEdit * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                                     HRESULT ( STDMETHODCALLTYPE *put_DisableNoScroll )(
            __RPC__in IInkEdit * This,
                       VARIANT_BOOL newVal);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SelAlignment )(
            __RPC__in IInkEdit * This,
                                __RPC__out VARIANT *pvarSelAlignment);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SelAlignment )(
            __RPC__in IInkEdit * This,
                       VARIANT pvarSelAlignment);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SelBold )(
            __RPC__in IInkEdit * This,
                                __RPC__out VARIANT *pvarSelBold);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SelBold )(
            __RPC__in IInkEdit * This,
                       VARIANT pvarSelBold);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SelItalic )(
            __RPC__in IInkEdit * This,
                                __RPC__out VARIANT *pvarSelItalic);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SelItalic )(
            __RPC__in IInkEdit * This,
                       VARIANT pvarSelItalic);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SelUnderline )(
            __RPC__in IInkEdit * This,
                                __RPC__out VARIANT *pvarSelUnderline);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SelUnderline )(
            __RPC__in IInkEdit * This,
                       VARIANT pvarSelUnderline);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SelColor )(
            __RPC__in IInkEdit * This,
                                __RPC__out VARIANT *pvarSelColor);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SelColor )(
            __RPC__in IInkEdit * This,
                       VARIANT pvarSelColor);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SelFontName )(
            __RPC__in IInkEdit * This,
                                __RPC__out VARIANT *pvarSelFontName);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SelFontName )(
            __RPC__in IInkEdit * This,
                       VARIANT pvarSelFontName);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SelFontSize )(
            __RPC__in IInkEdit * This,
                                __RPC__out VARIANT *pvarSelFontSize);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SelFontSize )(
            __RPC__in IInkEdit * This,
                       VARIANT pvarSelFontSize);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SelCharOffset )(
            __RPC__in IInkEdit * This,
                                __RPC__out VARIANT *pvarSelCharOffset);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SelCharOffset )(
            __RPC__in IInkEdit * This,
                       VARIANT pvarSelCharOffset);
                                                                                         HRESULT ( STDMETHODCALLTYPE *get_TextRTF )(
            __RPC__in IInkEdit * This,
                                __RPC__deref_out_opt BSTR *pbstrTextRTF);
                                                                            HRESULT ( STDMETHODCALLTYPE *put_TextRTF )(
            __RPC__in IInkEdit * This,
                       __RPC__in BSTR pbstrTextRTF);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SelStart )(
            __RPC__in IInkEdit * This,
                                __RPC__out long *plSelStart);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SelStart )(
            __RPC__in IInkEdit * This,
                       long plSelStart);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SelLength )(
            __RPC__in IInkEdit * This,
                                __RPC__out long *plSelLength);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SelLength )(
            __RPC__in IInkEdit * This,
                       long plSelLength);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SelText )(
            __RPC__in IInkEdit * This,
                                __RPC__deref_out_opt BSTR *pbstrSelText);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SelText )(
            __RPC__in IInkEdit * This,
                       __RPC__in BSTR pbstrSelText);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SelRTF )(
            __RPC__in IInkEdit * This,
                                __RPC__deref_out_opt BSTR *pbstrSelRTF);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SelRTF )(
            __RPC__in IInkEdit * This,
                       __RPC__in BSTR pbstrSelRTF);
                                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IInkEdit * This);
        END_INTERFACE
    } IInkEditVtbl;
    interface IInkEdit
    {
        CONST_VTBL struct IInkEditVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Status(This,pStatus) )
    ( (This)->lpVtbl -> get_UseMouseForInput(This,pVal) )
    ( (This)->lpVtbl -> put_UseMouseForInput(This,newVal) )
    ( (This)->lpVtbl -> get_InkMode(This,pVal) )
    ( (This)->lpVtbl -> put_InkMode(This,newVal) )
    ( (This)->lpVtbl -> get_InkInsertMode(This,pVal) )
    ( (This)->lpVtbl -> put_InkInsertMode(This,newVal) )
    ( (This)->lpVtbl -> get_DrawingAttributes(This,pVal) )
    ( (This)->lpVtbl -> putref_DrawingAttributes(This,newVal) )
    ( (This)->lpVtbl -> get_RecognitionTimeout(This,pVal) )
    ( (This)->lpVtbl -> put_RecognitionTimeout(This,newVal) )
    ( (This)->lpVtbl -> get_Recognizer(This,pVal) )
    ( (This)->lpVtbl -> putref_Recognizer(This,newVal) )
    ( (This)->lpVtbl -> get_Factoid(This,pVal) )
    ( (This)->lpVtbl -> put_Factoid(This,newVal) )
    ( (This)->lpVtbl -> get_SelInks(This,pSelInk) )
    ( (This)->lpVtbl -> put_SelInks(This,SelInk) )
    ( (This)->lpVtbl -> get_SelInksDisplayMode(This,pInkDisplayMode) )
    ( (This)->lpVtbl -> put_SelInksDisplayMode(This,InkDisplayMode) )
    ( (This)->lpVtbl -> Recognize(This) )
    ( (This)->lpVtbl -> GetGestureStatus(This,Gesture,pListen) )
    ( (This)->lpVtbl -> SetGestureStatus(This,Gesture,Listen) )
    ( (This)->lpVtbl -> put_BackColor(This,clr) )
    ( (This)->lpVtbl -> get_BackColor(This,pclr) )
    ( (This)->lpVtbl -> get_Appearance(This,pAppearance) )
    ( (This)->lpVtbl -> put_Appearance(This,pAppearance) )
    ( (This)->lpVtbl -> get_BorderStyle(This,pBorderStyle) )
    ( (This)->lpVtbl -> put_BorderStyle(This,pBorderStyle) )
    ( (This)->lpVtbl -> get_Hwnd(This,pohHwnd) )
    ( (This)->lpVtbl -> get_Font(This,ppFont) )
    ( (This)->lpVtbl -> putref_Font(This,ppFont) )
    ( (This)->lpVtbl -> get_Text(This,pbstrText) )
    ( (This)->lpVtbl -> put_Text(This,pbstrText) )
    ( (This)->lpVtbl -> get_MouseIcon(This,MouseIcon) )
    ( (This)->lpVtbl -> put_MouseIcon(This,MouseIcon) )
    ( (This)->lpVtbl -> putref_MouseIcon(This,MouseIcon) )
    ( (This)->lpVtbl -> get_MousePointer(This,MousePointer) )
    ( (This)->lpVtbl -> put_MousePointer(This,MousePointer) )
    ( (This)->lpVtbl -> get_Locked(This,pVal) )
    ( (This)->lpVtbl -> put_Locked(This,newVal) )
    ( (This)->lpVtbl -> get_Enabled(This,pVal) )
    ( (This)->lpVtbl -> put_Enabled(This,newVal) )
    ( (This)->lpVtbl -> get_MaxLength(This,plMaxLength) )
    ( (This)->lpVtbl -> put_MaxLength(This,lMaxLength) )
    ( (This)->lpVtbl -> get_MultiLine(This,pVal) )
    ( (This)->lpVtbl -> put_MultiLine(This,newVal) )
    ( (This)->lpVtbl -> get_ScrollBars(This,pVal) )
    ( (This)->lpVtbl -> put_ScrollBars(This,newVal) )
    ( (This)->lpVtbl -> get_DisableNoScroll(This,pVal) )
    ( (This)->lpVtbl -> put_DisableNoScroll(This,newVal) )
    ( (This)->lpVtbl -> get_SelAlignment(This,pvarSelAlignment) )
    ( (This)->lpVtbl -> put_SelAlignment(This,pvarSelAlignment) )
    ( (This)->lpVtbl -> get_SelBold(This,pvarSelBold) )
    ( (This)->lpVtbl -> put_SelBold(This,pvarSelBold) )
    ( (This)->lpVtbl -> get_SelItalic(This,pvarSelItalic) )
    ( (This)->lpVtbl -> put_SelItalic(This,pvarSelItalic) )
    ( (This)->lpVtbl -> get_SelUnderline(This,pvarSelUnderline) )
    ( (This)->lpVtbl -> put_SelUnderline(This,pvarSelUnderline) )
    ( (This)->lpVtbl -> get_SelColor(This,pvarSelColor) )
    ( (This)->lpVtbl -> put_SelColor(This,pvarSelColor) )
    ( (This)->lpVtbl -> get_SelFontName(This,pvarSelFontName) )
    ( (This)->lpVtbl -> put_SelFontName(This,pvarSelFontName) )
    ( (This)->lpVtbl -> get_SelFontSize(This,pvarSelFontSize) )
    ( (This)->lpVtbl -> put_SelFontSize(This,pvarSelFontSize) )
    ( (This)->lpVtbl -> get_SelCharOffset(This,pvarSelCharOffset) )
    ( (This)->lpVtbl -> put_SelCharOffset(This,pvarSelCharOffset) )
    ( (This)->lpVtbl -> get_TextRTF(This,pbstrTextRTF) )
    ( (This)->lpVtbl -> put_TextRTF(This,pbstrTextRTF) )
    ( (This)->lpVtbl -> get_SelStart(This,plSelStart) )
    ( (This)->lpVtbl -> put_SelStart(This,plSelStart) )
    ( (This)->lpVtbl -> get_SelLength(This,plSelLength) )
    ( (This)->lpVtbl -> put_SelLength(This,plSelLength) )
    ( (This)->lpVtbl -> get_SelText(This,pbstrSelText) )
    ( (This)->lpVtbl -> put_SelText(This,pbstrSelText) )
    ( (This)->lpVtbl -> get_SelRTF(This,pbstrSelRTF) )
    ( (This)->lpVtbl -> put_SelRTF(This,pbstrSelRTF) )
    ( (This)->lpVtbl -> Refresh(This) )
EXTERN_C const IID DIID__IInkEditEvents;
    typedef struct _IInkEditEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _IInkEditEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _IInkEditEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _IInkEditEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _IInkEditEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _IInkEditEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _IInkEditEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _IInkEditEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _IInkEditEventsVtbl;
    interface _IInkEditEvents
    {
        CONST_VTBL struct _IInkEditEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_InkEdit;
class DECLSPEC_UUID("E5CA59F5-57C4-4DD8-9BD6-1DEEEDD27AF4")
InkEdit;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_inked_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inked_0000_0001_v0_0_s_ifspec;
}
