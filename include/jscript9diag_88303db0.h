#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IJsDebug IJsDebug;
typedef interface IJsDebugProcess IJsDebugProcess;
typedef interface IJsDebugStackWalker IJsDebugStackWalker;
typedef interface IJsDebugFrame IJsDebugFrame;
typedef interface IJsDebugProperty IJsDebugProperty;
typedef interface IJsEnumDebugProperty IJsEnumDebugProperty;
typedef interface IJsDebugBreakPoint IJsDebugBreakPoint;
typedef interface IEnumJsStackFrames IEnumJsStackFrames;
typedef interface IJsDebugDataTarget IJsDebugDataTarget;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_jscript9diag_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_jscript9diag_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IJsDebug;
    typedef struct IJsDebugVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IJsDebug * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IJsDebug * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IJsDebug * This);
        HRESULT ( STDMETHODCALLTYPE *OpenVirtualProcess )(
            IJsDebug * This,
                       DWORD processId,
                       UINT64 runtimeJsBaseAddress,
                       IJsDebugDataTarget *pDataTarget,
                        IJsDebugProcess **ppProcess);
        END_INTERFACE
    } IJsDebugVtbl;
    interface IJsDebug
    {
        CONST_VTBL struct IJsDebugVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OpenVirtualProcess(This,processId,runtimeJsBaseAddress,pDataTarget,ppProcess) )
EXTERN_C const IID IID_IJsDebugProcess;
    typedef struct IJsDebugProcessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IJsDebugProcess * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IJsDebugProcess * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IJsDebugProcess * This);
        HRESULT ( STDMETHODCALLTYPE *CreateStackWalker )(
            IJsDebugProcess * This,
                       DWORD threadId,
                        IJsDebugStackWalker **ppStackWalker);
        HRESULT ( STDMETHODCALLTYPE *CreateBreakPoint )(
            IJsDebugProcess * This,
                       UINT64 documentId,
                       DWORD characterOffset,
                       DWORD characterCount,
                       BOOL isEnabled,
                        IJsDebugBreakPoint **ppDebugBreakPoint);
        HRESULT ( STDMETHODCALLTYPE *PerformAsyncBreak )(
            IJsDebugProcess * This,
                       DWORD threadId);
        HRESULT ( STDMETHODCALLTYPE *GetExternalStepAddress )(
            IJsDebugProcess * This,
                        UINT64 *pCodeAddress);
        END_INTERFACE
    } IJsDebugProcessVtbl;
    interface IJsDebugProcess
    {
        CONST_VTBL struct IJsDebugProcessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateStackWalker(This,threadId,ppStackWalker) )
    ( (This)->lpVtbl -> CreateBreakPoint(This,documentId,characterOffset,characterCount,isEnabled,ppDebugBreakPoint) )
    ( (This)->lpVtbl -> PerformAsyncBreak(This,threadId) )
    ( (This)->lpVtbl -> GetExternalStepAddress(This,pCodeAddress) )
EXTERN_C const IID IID_IJsDebugStackWalker;
    typedef struct IJsDebugStackWalkerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IJsDebugStackWalker * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IJsDebugStackWalker * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IJsDebugStackWalker * This);
        HRESULT ( STDMETHODCALLTYPE *GetNext )(
            IJsDebugStackWalker * This,
                        IJsDebugFrame **ppFrame);
        END_INTERFACE
    } IJsDebugStackWalkerVtbl;
    interface IJsDebugStackWalker
    {
        CONST_VTBL struct IJsDebugStackWalkerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNext(This,ppFrame) )
EXTERN_C const IID IID_IJsDebugFrame;
    typedef struct IJsDebugFrameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IJsDebugFrame * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IJsDebugFrame * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IJsDebugFrame * This);
        HRESULT ( STDMETHODCALLTYPE *GetStackRange )(
            IJsDebugFrame * This,
                        UINT64 *pStart,
                        UINT64 *pEnd);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IJsDebugFrame * This,
                        BSTR *pName);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentPositionWithId )(
            IJsDebugFrame * This,
                        UINT64 *pDocumentId,
                        DWORD *pCharacterOffset,
                        DWORD *pStatementCharCount);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentPositionWithName )(
            IJsDebugFrame * This,
                        BSTR *pDocumentName,
                        DWORD *pLine,
                        DWORD *pColumn);
        HRESULT ( STDMETHODCALLTYPE *GetDebugProperty )(
            IJsDebugFrame * This,
                        IJsDebugProperty **ppDebugProperty);
        HRESULT ( STDMETHODCALLTYPE *GetReturnAddress )(
            IJsDebugFrame * This,
                        UINT64 *pReturnAddress);
        HRESULT ( STDMETHODCALLTYPE *Evaluate )(
            IJsDebugFrame * This,
                       LPCOLESTR pExpressionText,
                        IJsDebugProperty **ppDebugProperty,
                        BSTR *pError);
        END_INTERFACE
    } IJsDebugFrameVtbl;
    interface IJsDebugFrame
    {
        CONST_VTBL struct IJsDebugFrameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStackRange(This,pStart,pEnd) )
    ( (This)->lpVtbl -> GetName(This,pName) )
    ( (This)->lpVtbl -> GetDocumentPositionWithId(This,pDocumentId,pCharacterOffset,pStatementCharCount) )
    ( (This)->lpVtbl -> GetDocumentPositionWithName(This,pDocumentName,pLine,pColumn) )
    ( (This)->lpVtbl -> GetDebugProperty(This,ppDebugProperty) )
    ( (This)->lpVtbl -> GetReturnAddress(This,pReturnAddress) )
    ( (This)->lpVtbl -> Evaluate(This,pExpressionText,ppDebugProperty,pError) )
typedef
enum JS_PROPERTY_MEMBERS
    {
        JS_PROPERTY_MEMBERS_ALL = 0,
        JS_PROPERTY_MEMBERS_ARGUMENTS = 1
    } JS_PROPERTY_MEMBERS;
typedef
enum JS_PROPERTY_ATTRIBUTES
    {
        JS_PROPERTY_ATTRIBUTE_NONE = 0,
        JS_PROPERTY_HAS_CHILDREN = 0x1,
        JS_PROPERTY_FAKE = 0x2,
        JS_PROPERTY_METHOD = 0x4,
        JS_PROPERTY_READONLY = 0x8,
        JS_PROPERTY_NATIVE_WINRT_POINTER = 0x10,
        JS_PROPERTY_FRAME_INTRYBLOCK = 0x20,
        JS_PROPERTY_FRAME_INCATCHBLOCK = 0x40,
        JS_PROPERTY_FRAME_INFINALLYBLOCK = 0x80
    } JS_PROPERTY_ATTRIBUTES;
typedef struct tagJsDebugPropertyInfo
    {
    BSTR name;
    BSTR type;
    BSTR value;
    BSTR fullName;
    JS_PROPERTY_ATTRIBUTES attr;
    } JsDebugPropertyInfo;
extern RPC_IF_HANDLE __MIDL_itf_jscript9diag_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_jscript9diag_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IJsDebugProperty;
    typedef struct IJsDebugPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IJsDebugProperty * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IJsDebugProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IJsDebugProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyInfo )(
            IJsDebugProperty * This,
                       UINT nRadix,
                        JsDebugPropertyInfo *pPropertyInfo);
        HRESULT ( STDMETHODCALLTYPE *GetMembers )(
            IJsDebugProperty * This,
                       JS_PROPERTY_MEMBERS members,
                        IJsEnumDebugProperty **ppEnum);
        END_INTERFACE
    } IJsDebugPropertyVtbl;
    interface IJsDebugProperty
    {
        CONST_VTBL struct IJsDebugPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropertyInfo(This,nRadix,pPropertyInfo) )
    ( (This)->lpVtbl -> GetMembers(This,members,ppEnum) )
EXTERN_C const IID IID_IJsEnumDebugProperty;
    typedef struct IJsEnumDebugPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IJsEnumDebugProperty * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IJsEnumDebugProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IJsEnumDebugProperty * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IJsEnumDebugProperty * This,
                       ULONG count,
                                            IJsDebugProperty **ppDebugProperty,
                        ULONG *pActualCount);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IJsEnumDebugProperty * This,
                        ULONG *pCount);
        END_INTERFACE
    } IJsEnumDebugPropertyVtbl;
    interface IJsEnumDebugProperty
    {
        CONST_VTBL struct IJsEnumDebugPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,count,ppDebugProperty,pActualCount) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
EXTERN_C const IID IID_IJsDebugBreakPoint;
    typedef struct IJsDebugBreakPointVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IJsDebugBreakPoint * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IJsDebugBreakPoint * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IJsDebugBreakPoint * This);
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )(
            IJsDebugBreakPoint * This,
                        BOOL *pIsEnabled);
        HRESULT ( STDMETHODCALLTYPE *Enable )(
            IJsDebugBreakPoint * This);
        HRESULT ( STDMETHODCALLTYPE *Disable )(
            IJsDebugBreakPoint * This);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            IJsDebugBreakPoint * This);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentPosition )(
            IJsDebugBreakPoint * This,
                        UINT64 *pDocumentId,
                        DWORD *pCharacterOffset,
                        DWORD *pStatementCharCount);
        END_INTERFACE
    } IJsDebugBreakPointVtbl;
    interface IJsDebugBreakPoint
    {
        CONST_VTBL struct IJsDebugBreakPointVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsEnabled(This,pIsEnabled) )
    ( (This)->lpVtbl -> Enable(This) )
    ( (This)->lpVtbl -> Disable(This) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> GetDocumentPosition(This,pDocumentId,pCharacterOffset,pStatementCharCount) )
typedef struct __MIDL___MIDL_itf_jscript9diag_0000_0007_0001
    {
    UINT64 InstructionOffset;
    UINT64 ReturnOffset;
    UINT64 FrameOffset;
    UINT64 StackOffset;
    } JS_NATIVE_FRAME;
extern RPC_IF_HANDLE __MIDL_itf_jscript9diag_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_jscript9diag_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumJsStackFrames;
    typedef struct IEnumJsStackFramesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumJsStackFrames * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumJsStackFrames * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumJsStackFrames * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumJsStackFrames * This,
                       ULONG cFrameCount,
                                            JS_NATIVE_FRAME *pFrames,
                        ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumJsStackFrames * This);
        END_INTERFACE
    } IEnumJsStackFramesVtbl;
    interface IEnumJsStackFrames
    {
        CONST_VTBL struct IEnumJsStackFramesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cFrameCount,pFrames,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
typedef
enum JsDebugReadMemoryFlags
    {
        None = 0,
        JsDebugAllowPartialRead = 0x1
    } JsDebugReadMemoryFlags;
extern RPC_IF_HANDLE __MIDL_itf_jscript9diag_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_jscript9diag_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IJsDebugDataTarget;
    typedef struct IJsDebugDataTargetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IJsDebugDataTarget * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IJsDebugDataTarget * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IJsDebugDataTarget * This);
        HRESULT ( STDMETHODCALLTYPE *ReadMemory )(
            IJsDebugDataTarget * This,
                       UINT64 address,
                       JsDebugReadMemoryFlags flags,
                                            BYTE *pBuffer,
                       DWORD size,
                        DWORD *pBytesRead);
        HRESULT ( STDMETHODCALLTYPE *WriteMemory )(
            IJsDebugDataTarget * This,
                       UINT64 address,
                                const BYTE *pMemory,
                       DWORD size);
        HRESULT ( STDMETHODCALLTYPE *AllocateVirtualMemory )(
            IJsDebugDataTarget * This,
                       UINT64 address,
                       DWORD size,
                       DWORD allocationType,
                       DWORD pageProtection,
                        UINT64 *pAllocatedAddress);
        HRESULT ( STDMETHODCALLTYPE *FreeVirtualMemory )(
            IJsDebugDataTarget * This,
                       UINT64 address,
                       DWORD size,
                       DWORD freeType);
        HRESULT ( STDMETHODCALLTYPE *GetTlsValue )(
            IJsDebugDataTarget * This,
                       DWORD threadId,
                       UINT32 tlsIndex,
                        UINT64 *pValue);
        HRESULT ( STDMETHODCALLTYPE *ReadBSTR )(
            IJsDebugDataTarget * This,
                       UINT64 address,
                        BSTR *pString);
        HRESULT ( STDMETHODCALLTYPE *ReadNullTerminatedString )(
            IJsDebugDataTarget * This,
                       UINT64 address,
                       UINT16 characterSize,
                       UINT32 maxCharacters,
                        BSTR *pString);
        HRESULT ( STDMETHODCALLTYPE *CreateStackFrameEnumerator )(
            IJsDebugDataTarget * This,
                       DWORD threadId,
                        IEnumJsStackFrames **ppEnumerator);
        HRESULT ( STDMETHODCALLTYPE *GetThreadContext )(
            IJsDebugDataTarget * This,
                       DWORD threadId,
                       ULONG32 contextFlags,
                       ULONG32 contextSize,
                                 void *pContext);
        END_INTERFACE
    } IJsDebugDataTargetVtbl;
    interface IJsDebugDataTarget
    {
        CONST_VTBL struct IJsDebugDataTargetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReadMemory(This,address,flags,pBuffer,size,pBytesRead) )
    ( (This)->lpVtbl -> WriteMemory(This,address,pMemory,size) )
    ( (This)->lpVtbl -> AllocateVirtualMemory(This,address,size,allocationType,pageProtection,pAllocatedAddress) )
    ( (This)->lpVtbl -> FreeVirtualMemory(This,address,size,freeType) )
    ( (This)->lpVtbl -> GetTlsValue(This,threadId,tlsIndex,pValue) )
    ( (This)->lpVtbl -> ReadBSTR(This,address,pString) )
    ( (This)->lpVtbl -> ReadNullTerminatedString(This,address,characterSize,maxCharacters,pString) )
    ( (This)->lpVtbl -> CreateStackFrameEnumerator(This,threadId,ppEnumerator) )
    ( (This)->lpVtbl -> GetThreadContext(This,threadId,contextFlags,contextSize,pContext) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_jscript9diag_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_jscript9diag_0000_0009_v0_0_s_ifspec;
}
