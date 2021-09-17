#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
       
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Devices.Enumeration.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage;
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPortVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPortVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPortVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPortVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This, __RPC__out __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPortVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPortVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPortVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPortVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPortVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPortVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This, __RPC__out __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPortVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPortVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This, __RPC__out __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CDevices_CMidi_CMidiMessageType __x_ABI_CWindows_CDevices_CMidi_CMidiMessageType;
enum __x_ABI_CWindows_CDevices_CMidi_CMidiMessageType
{
    MidiMessageType_None = 0,
    MidiMessageType_NoteOff = 128,
    MidiMessageType_NoteOn = 144,
    MidiMessageType_PolyphonicKeyPressure = 160,
    MidiMessageType_ControlChange = 176,
    MidiMessageType_ProgramChange = 192,
    MidiMessageType_ChannelPressure = 208,
    MidiMessageType_PitchBendChange = 224,
    MidiMessageType_SystemExclusive = 240,
    MidiMessageType_MidiTimeCode = 241,
    MidiMessageType_SongPositionPointer = 242,
    MidiMessageType_SongSelect = 243,
    MidiMessageType_TuneRequest = 246,
    MidiMessageType_EndSystemExclusive = 247,
    MidiMessageType_TimingClock = 248,
    MidiMessageType_Start = 250,
    MidiMessageType_Continue = 251,
    MidiMessageType_Stop = 252,
    MidiMessageType_ActiveSensing = 254,
    MidiMessageType_SystemReset = 255,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiChannelPressureMessage[] = L"Windows.Devices.Midi.IMidiChannelPressureMessage";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pressure )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * This,
                           __RPC__out BYTE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Channel(This,value) )
    ( (This)->lpVtbl->get_Pressure(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiChannelPressureMessageFactory[] = L"Windows.Devices.Midi.IMidiChannelPressureMessageFactory";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiChannelPressureMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory * This,
                  BYTE channel,
                  BYTE pressure,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMidiChannelPressureMessage(This,channel,pressure,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiControlChangeMessage[] = L"Windows.Devices.Midi.IMidiControlChangeMessage";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Controller )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ControlValue )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This,
                           __RPC__out BYTE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Channel(This,value) )
    ( (This)->lpVtbl->get_Controller(This,value) )
    ( (This)->lpVtbl->get_ControlValue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiControlChangeMessageFactory[] = L"Windows.Devices.Midi.IMidiControlChangeMessageFactory";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiControlChangeMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory * This,
                  BYTE channel,
                  BYTE controller,
                  BYTE controlValue,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMidiControlChangeMessage(This,channel,controller,controlValue,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiInPort[] = L"Windows.Devices.Midi.IMidiInPort";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_MessageReceived )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MessageReceived )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_MessageReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_MessageReceived(This,token) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiInPort;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiInPortStatics[] = L"Windows.Devices.Midi.IMidiInPortStatics";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,value) )
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiMessage[] = L"Windows.Devices.Midi.IMidiMessage";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RawData )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CMidi_CMidiMessageType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_RawData(This,value) )
    ( (This)->lpVtbl->get_Type(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiMessageReceivedEventArgs[] = L"Windows.Devices.Midi.IMidiMessageReceivedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Message(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiNoteOffMessage[] = L"Windows.Devices.Midi.IMidiNoteOffMessage";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Note )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Velocity )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This,
                           __RPC__out BYTE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Channel(This,value) )
    ( (This)->lpVtbl->get_Note(This,value) )
    ( (This)->lpVtbl->get_Velocity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiNoteOffMessageFactory[] = L"Windows.Devices.Midi.IMidiNoteOffMessageFactory";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiNoteOffMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory * This,
                  BYTE channel,
                  BYTE note,
                  BYTE velocity,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMidiNoteOffMessage(This,channel,note,velocity,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiNoteOnMessage[] = L"Windows.Devices.Midi.IMidiNoteOnMessage";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Note )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Velocity )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This,
                           __RPC__out BYTE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Channel(This,value) )
    ( (This)->lpVtbl->get_Note(This,value) )
    ( (This)->lpVtbl->get_Velocity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiNoteOnMessageFactory[] = L"Windows.Devices.Midi.IMidiNoteOnMessageFactory";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiNoteOnMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory * This,
                  BYTE channel,
                  BYTE note,
                  BYTE velocity,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMidiNoteOnMessage(This,channel,note,velocity,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiOutPort[] = L"Windows.Devices.Midi.IMidiOutPort";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SendMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * midiMessage
        );
    HRESULT ( STDMETHODCALLTYPE *SendBuffer )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * midiData
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SendMessage(This,midiMessage) )
    ( (This)->lpVtbl->SendBuffer(This,midiData) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiOutPortStatics[] = L"Windows.Devices.Midi.IMidiOutPortStatics";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,value) )
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiPitchBendChangeMessage[] = L"Windows.Devices.Midi.IMidiPitchBendChangeMessage";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bend )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * This,
                           __RPC__out UINT16 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Channel(This,value) )
    ( (This)->lpVtbl->get_Bend(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiPitchBendChangeMessageFactory[] = L"Windows.Devices.Midi.IMidiPitchBendChangeMessageFactory";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiPitchBendChangeMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory * This,
                  BYTE channel,
                  UINT16 bend,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMidiPitchBendChangeMessage(This,channel,bend,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessage[] = L"Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessage";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Note )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pressure )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This,
                           __RPC__out BYTE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Channel(This,value) )
    ( (This)->lpVtbl->get_Note(This,value) )
    ( (This)->lpVtbl->get_Pressure(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessageFactory[] = L"Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessageFactory";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiPolyphonicKeyPressureMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory * This,
                  BYTE channel,
                  BYTE note,
                  BYTE pressure,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMidiPolyphonicKeyPressureMessage(This,channel,note,pressure,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiProgramChangeMessage[] = L"Windows.Devices.Midi.IMidiProgramChangeMessage";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Program )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * This,
                           __RPC__out BYTE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Channel(This,value) )
    ( (This)->lpVtbl->get_Program(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiProgramChangeMessageFactory[] = L"Windows.Devices.Midi.IMidiProgramChangeMessageFactory";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiProgramChangeMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory * This,
                  BYTE channel,
                  BYTE program,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMidiProgramChangeMessage(This,channel,program,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSongPositionPointerMessage[] = L"Windows.Devices.Midi.IMidiSongPositionPointerMessage";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Beats )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage * This,
                           __RPC__out UINT16 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Beats(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSongPositionPointerMessageFactory[] = L"Windows.Devices.Midi.IMidiSongPositionPointerMessageFactory";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiSongPositionPointerMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory * This,
                  UINT16 beats,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMidiSongPositionPointerMessage(This,beats,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSongSelectMessage[] = L"Windows.Devices.Midi.IMidiSongSelectMessage";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Song )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage * This,
                           __RPC__out BYTE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Song(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSongSelectMessageFactory[] = L"Windows.Devices.Midi.IMidiSongSelectMessageFactory";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiSongSelectMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory * This,
                  BYTE song,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMidiSongSelectMessage(This,song,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSynthesizer[] = L"Windows.Devices.Midi.IMidiSynthesizer";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AudioDevice )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Volume )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Volume )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AudioDevice(This,value) )
    ( (This)->lpVtbl->get_Volume(This,value) )
    ( (This)->lpVtbl->put_Volume(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSynthesizerStatics[] = L"Windows.Devices.Midi.IMidiSynthesizerStatics";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateAsync )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromAudioDeviceAsync )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * audioDevice,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsSynthesizer )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * midiDevice,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAsync(This,value) )
    ( (This)->lpVtbl->CreateFromAudioDeviceAsync(This,audioDevice,value) )
    ( (This)->lpVtbl->IsSynthesizer(This,midiDevice,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSystemExclusiveMessageFactory[] = L"Windows.Devices.Midi.IMidiSystemExclusiveMessageFactory";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiSystemExclusiveMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * rawData,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMidiSystemExclusiveMessage(This,rawData,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiTimeCodeMessage[] = L"Windows.Devices.Midi.IMidiTimeCodeMessage";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FrameType )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Values )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * This,
                           __RPC__out BYTE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FrameType(This,value) )
    ( (This)->lpVtbl->get_Values(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiTimeCodeMessageFactory[] = L"Windows.Devices.Midi.IMidiTimeCodeMessageFactory";
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiTimeCodeMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory * This,
                  BYTE frameType,
                  BYTE values,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMidiTimeCodeMessage(This,frameType,values,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiActiveSensingMessage[] = L"Windows.Devices.Midi.MidiActiveSensingMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiChannelPressureMessage[] = L"Windows.Devices.Midi.MidiChannelPressureMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiContinueMessage[] = L"Windows.Devices.Midi.MidiContinueMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiControlChangeMessage[] = L"Windows.Devices.Midi.MidiControlChangeMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiInPort[] = L"Windows.Devices.Midi.MidiInPort";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiMessageReceivedEventArgs[] = L"Windows.Devices.Midi.MidiMessageReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiNoteOffMessage[] = L"Windows.Devices.Midi.MidiNoteOffMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiNoteOnMessage[] = L"Windows.Devices.Midi.MidiNoteOnMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiOutPort[] = L"Windows.Devices.Midi.MidiOutPort";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiPitchBendChangeMessage[] = L"Windows.Devices.Midi.MidiPitchBendChangeMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiPolyphonicKeyPressureMessage[] = L"Windows.Devices.Midi.MidiPolyphonicKeyPressureMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiProgramChangeMessage[] = L"Windows.Devices.Midi.MidiProgramChangeMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiSongPositionPointerMessage[] = L"Windows.Devices.Midi.MidiSongPositionPointerMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiSongSelectMessage[] = L"Windows.Devices.Midi.MidiSongSelectMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiStartMessage[] = L"Windows.Devices.Midi.MidiStartMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiStopMessage[] = L"Windows.Devices.Midi.MidiStopMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiSynthesizer[] = L"Windows.Devices.Midi.MidiSynthesizer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiSystemExclusiveMessage[] = L"Windows.Devices.Midi.MidiSystemExclusiveMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiSystemResetMessage[] = L"Windows.Devices.Midi.MidiSystemResetMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiTimeCodeMessage[] = L"Windows.Devices.Midi.MidiTimeCodeMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiTimingClockMessage[] = L"Windows.Devices.Midi.MidiTimingClockMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiTuneRequestMessage[] = L"Windows.Devices.Midi.MidiTuneRequestMessage";
       
       
#pragma clang diagnostic pop
