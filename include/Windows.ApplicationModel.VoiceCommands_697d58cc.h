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
#include "Windows.ApplicationModel.AppService.h"
#include "Windows.Globalization.h"
#include "Windows.Media.SpeechRecognition.h"
#include "Windows.Storage.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand;
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile;
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition;
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse;
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection;
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage;
typedef interface __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile;
typedef struct __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile;
typedef struct __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition;
typedef struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl;
interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                       __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile;
typedef struct __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl;
interface __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResultVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;
EXTERN_C const IID IID___FIIterator_1_HSTRING;
typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out HSTRING *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;
interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;
EXTERN_C const IID IID___FIIterable_1_HSTRING;
typedef struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt __FIIterator_1_HSTRING **first);
    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;
interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIVectorView_1_HSTRING;
typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                                    unsigned int index,
                                                             __RPC__out HSTRING *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_HSTRING * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       HSTRING item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;
interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;
typedef struct __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt __FIVectorView_1_HSTRING * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl;
interface __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING___FIVectorView_1_HSTRING __FIMapView_2_HSTRING___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIMapView_2_HSTRING___FIVectorView_1_HSTRING;
typedef struct __FIMapView_2_HSTRING___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __FIVectorView_1_HSTRING * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_HSTRING **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING___FIVectorView_1_HSTRINGVtbl;
interface __FIMapView_2_HSTRING___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) )
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CGlobalization_CILanguage __x_ABI_CWindows_CGlobalization_CILanguage;
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef enum __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandCompletionReason __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandCompletionReason;
typedef enum __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandContentTileType __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandContentTileType;
enum __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandCompletionReason
{
    VoiceCommandCompletionReason_Unknown = 0,
    VoiceCommandCompletionReason_CommunicationFailed = 1,
    VoiceCommandCompletionReason_ResourceLimitsExceeded = 2,
    VoiceCommandCompletionReason_Canceled = 3,
    VoiceCommandCompletionReason_TimeoutExceeded = 4,
    VoiceCommandCompletionReason_AppLaunched = 5,
    VoiceCommandCompletionReason_Completed = 6,
};
enum __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandContentTileType
{
    VoiceCommandContentTileType_TitleOnly = 0,
    VoiceCommandContentTileType_TitleWithText = 1,
    VoiceCommandContentTileType_TitleWith68x68Icon = 2,
    VoiceCommandContentTileType_TitleWith68x68IconAndText = 3,
    VoiceCommandContentTileType_TitleWith68x92Icon = 4,
    VoiceCommandContentTileType_TitleWith68x92IconAndText = 5,
    VoiceCommandContentTileType_TitleWith280x140Icon = 6,
    VoiceCommandContentTileType_TitleWith280x140IconAndText = 7,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommand[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommand";
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CommandName )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpeechRecognitionResult )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandVtbl;
interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CommandName(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->get_SpeechRecognitionResult(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandCompletedEventArgs[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandCompletedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandCompletionReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandConfirmationResult[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandConfirmationResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Confirmed )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Confirmed(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandContentTile";
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TextLine1 )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TextLine1 )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TextLine2 )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TextLine2 )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TextLine3 )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TextLine3 )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Image )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Image )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppContext )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AppContext )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppLaunchArgument )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AppLaunchArgument )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentTileType )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandContentTileType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentTileType )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
                  __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandContentTileType value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTileVtbl;
interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTileVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_TextLine1(This,value) )
    ( (This)->lpVtbl->put_TextLine1(This,value) )
    ( (This)->lpVtbl->get_TextLine2(This,value) )
    ( (This)->lpVtbl->put_TextLine2(This,value) )
    ( (This)->lpVtbl->get_TextLine3(This,value) )
    ( (This)->lpVtbl->put_TextLine3(This,value) )
    ( (This)->lpVtbl->get_Image(This,value) )
    ( (This)->lpVtbl->put_Image(This,value) )
    ( (This)->lpVtbl->get_AppContext(This,value) )
    ( (This)->lpVtbl->put_AppContext(This,value) )
    ( (This)->lpVtbl->get_AppLaunchArgument(This,value) )
    ( (This)->lpVtbl->put_AppLaunchArgument(This,value) )
    ( (This)->lpVtbl->get_ContentTileType(This,value) )
    ( (This)->lpVtbl->put_ContentTileType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDefinition[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandDefinition";
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPhraseListAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This,
                  __RPC__in HSTRING phraseListName,
                  __RPC__in_opt __FIIterable_1_HSTRING * phraseList,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * updateAction
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Language(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->SetPhraseListAsync(This,phraseListName,phraseList,updateAction) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDefinitionManagerStatics[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandDefinitionManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *InstallCommandDefinitionsFromStorageFileAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * installAction
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InstalledCommandDefinitions )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * * voiceCommandDefinitions
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->InstallCommandDefinitionsFromStorageFileAsync(This,file,installAction) )
    ( (This)->lpVtbl->get_InstalledCommandDefinitions(This,voiceCommandDefinitions) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDisambiguationResult[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandDisambiguationResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SelectedItem )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SelectedItem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponse[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandResponse";
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Message )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RepeatMessage )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RepeatMessage )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppLaunchArgument )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AppLaunchArgument )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VoiceCommandContentTiles )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseVtbl;
interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Message(This,value) )
    ( (This)->lpVtbl->put_Message(This,value) )
    ( (This)->lpVtbl->get_RepeatMessage(This,value) )
    ( (This)->lpVtbl->put_RepeatMessage(This,value) )
    ( (This)->lpVtbl->get_AppLaunchArgument(This,value) )
    ( (This)->lpVtbl->put_AppLaunchArgument(This,value) )
    ( (This)->lpVtbl->get_VoiceCommandContentTiles(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponseStatics[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandResponseStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxSupportedVoiceCommandContentTiles )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateResponse )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * userMessage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * * response
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateResponseWithTiles )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * message,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * contentTiles,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * * response
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateResponseForPrompt )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * message,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * repeatMessage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * * response
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateResponseForPromptWithTiles )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * message,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * repeatMessage,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * contentTiles,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * * response
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxSupportedVoiceCommandContentTiles(This,value) )
    ( (This)->lpVtbl->CreateResponse(This,userMessage,response) )
    ( (This)->lpVtbl->CreateResponseWithTiles(This,message,contentTiles,response) )
    ( (This)->lpVtbl->CreateResponseForPrompt(This,message,repeatMessage,response) )
    ( (This)->lpVtbl->CreateResponseForPromptWithTiles(This,message,repeatMessage,contentTiles,response) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnection[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandServiceConnection";
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetVoiceCommandAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestConfirmationAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * response,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestDisambiguationAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * response,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ReportProgressAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * response,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *ReportSuccessAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * response,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailureAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * response,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAppLaunchAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * response,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CILanguage * * language
        );
                    HRESULT ( STDMETHODCALLTYPE *add_VoiceCommandCompleted )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VoiceCommandCompleted )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetVoiceCommandAsync(This,operation) )
    ( (This)->lpVtbl->RequestConfirmationAsync(This,response,operation) )
    ( (This)->lpVtbl->RequestDisambiguationAsync(This,response,operation) )
    ( (This)->lpVtbl->ReportProgressAsync(This,response,action) )
    ( (This)->lpVtbl->ReportSuccessAsync(This,response,action) )
    ( (This)->lpVtbl->ReportFailureAsync(This,response,action) )
    ( (This)->lpVtbl->RequestAppLaunchAsync(This,response,action) )
    ( (This)->lpVtbl->get_Language(This,language) )
    ( (This)->lpVtbl->add_VoiceCommandCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_VoiceCommandCompleted(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnectionStatics[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandServiceConnectionStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromAppServiceTriggerDetails )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails * triggerDetails,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromAppServiceTriggerDetails(This,triggerDetails,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandUserMessage[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandUserMessage";
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayMessage )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayMessage )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpokenMessage )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SpokenMessage )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessageVtbl;
interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayMessage(This,value) )
    ( (This)->lpVtbl->put_DisplayMessage(This,value) )
    ( (This)->lpVtbl->get_SpokenMessage(This,value) )
    ( (This)->lpVtbl->put_SpokenMessage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommand[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommand";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandCompletedEventArgs[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandConfirmationResult[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandConfirmationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandContentTile[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandContentTile";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandDefinition[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandDefinitionManager[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinitionManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandDisambiguationResult[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandDisambiguationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandResponse[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandResponse";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandServiceConnection[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandServiceConnection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandUserMessage[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandUserMessage";
       
       
#pragma clang diagnostic pop
