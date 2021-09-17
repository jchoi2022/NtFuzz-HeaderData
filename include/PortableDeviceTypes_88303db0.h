#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWpdSerializer IWpdSerializer;
typedef interface IPortableDeviceValues IPortableDeviceValues;
typedef interface IPortableDeviceKeyCollection IPortableDeviceKeyCollection;
typedef interface IPortableDevicePropVariantCollection IPortableDevicePropVariantCollection;
typedef interface IPortableDeviceValuesCollection IPortableDeviceValuesCollection;
typedef class WpdSerializer WpdSerializer;
typedef class PortableDeviceValues PortableDeviceValues;
typedef class PortableDeviceKeyCollection PortableDeviceKeyCollection;
typedef class PortableDevicePropVariantCollection PortableDevicePropVariantCollection;
typedef class PortableDeviceValuesCollection PortableDeviceValuesCollection;
#include "oaidl.h"
#include "ocidl.h"
#include "propsys.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum tagWPD_STREAM_UNITS
    {
        WPD_STREAM_UNITS_BYTES = 0L,
        WPD_STREAM_UNITS_FRAMES = 0x1L,
        WPD_STREAM_UNITS_ROWS = 0x2L,
        WPD_STREAM_UNITS_MILLISECONDS = 0x4L,
        WPD_STREAM_UNITS_MICROSECONDS = 0x8L
    } WPD_STREAM_UNITS;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceTypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceTypes_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWpdSerializer;
    typedef struct IWpdSerializerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWpdSerializer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWpdSerializer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWpdSerializer * This);
        HRESULT ( STDMETHODCALLTYPE *GetIPortableDeviceValuesFromBuffer )(
            __RPC__in IWpdSerializer * This,
                                __RPC__in_ecount_full(dwInputBufferLength) BYTE *pBuffer,
                       DWORD dwInputBufferLength,
                        __RPC__deref_out_opt IPortableDeviceValues **ppParams);
        HRESULT ( STDMETHODCALLTYPE *WriteIPortableDeviceValuesToBuffer )(
            __RPC__in IWpdSerializer * This,
                       DWORD dwOutputBufferLength,
                       __RPC__in_opt IPortableDeviceValues *pResults,
                                            __RPC__out_ecount_part(dwOutputBufferLength, *pdwBytesWritten) BYTE *pBuffer,
                        __RPC__out DWORD *pdwBytesWritten);
        HRESULT ( STDMETHODCALLTYPE *GetBufferFromIPortableDeviceValues )(
            __RPC__in IWpdSerializer * This,
                       __RPC__in_opt IPortableDeviceValues *pSource,
                                          __RPC__deref_out_ecount_full_opt(*pdwBufferSize) BYTE **ppBuffer,
                        __RPC__out DWORD *pdwBufferSize);
        HRESULT ( STDMETHODCALLTYPE *GetSerializedSize )(
            __RPC__in IWpdSerializer * This,
                       __RPC__in_opt IPortableDeviceValues *pSource,
                        __RPC__out DWORD *pdwSize);
        END_INTERFACE
    } IWpdSerializerVtbl;
    interface IWpdSerializer
    {
        CONST_VTBL struct IWpdSerializerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIPortableDeviceValuesFromBuffer(This,pBuffer,dwInputBufferLength,ppParams) )
    ( (This)->lpVtbl -> WriteIPortableDeviceValuesToBuffer(This,dwOutputBufferLength,pResults,pBuffer,pdwBytesWritten) )
    ( (This)->lpVtbl -> GetBufferFromIPortableDeviceValues(This,pSource,ppBuffer,pdwBufferSize) )
    ( (This)->lpVtbl -> GetSerializedSize(This,pSource,pdwSize) )
#endif
#pragma endregion
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) && !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceTypes_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceTypes_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IPortableDeviceValues;
    typedef struct IPortableDeviceValuesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceValues * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceValues * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in DWORD *pcelt);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IPortableDeviceValues * This,
                       const DWORD index,
                                    __RPC__inout_opt PROPERTYKEY *pKey,
                                    __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                       __RPC__in const PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetStringValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                       __RPC__in LPCWSTR Value);
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__deref_out_opt LPWSTR *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetUnsignedIntegerValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                       const ULONG Value);
        HRESULT ( STDMETHODCALLTYPE *GetUnsignedIntegerValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out ULONG *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetSignedIntegerValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                       const LONG Value);
        HRESULT ( STDMETHODCALLTYPE *GetSignedIntegerValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out LONG *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetUnsignedLargeIntegerValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                       const ULONGLONG Value);
        HRESULT ( STDMETHODCALLTYPE *GetUnsignedLargeIntegerValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out ULONGLONG *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetSignedLargeIntegerValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                       const LONGLONG Value);
        HRESULT ( STDMETHODCALLTYPE *GetSignedLargeIntegerValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out LONGLONG *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetFloatValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                       const FLOAT Value);
        HRESULT ( STDMETHODCALLTYPE *GetFloatValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out FLOAT *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetErrorValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                       const HRESULT Value);
        HRESULT ( STDMETHODCALLTYPE *GetErrorValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out HRESULT *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetKeyValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                       __RPC__in REFPROPERTYKEY Value);
        HRESULT ( STDMETHODCALLTYPE *GetKeyValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out PROPERTYKEY *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetBoolValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                       const BOOL Value);
        HRESULT ( STDMETHODCALLTYPE *GetBoolValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out BOOL *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetIUnknownValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                       __RPC__in_opt IUnknown *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetIUnknownValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__deref_out_opt IUnknown **ppValue);
        HRESULT ( STDMETHODCALLTYPE *SetGuidValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                       __RPC__in REFGUID Value);
        HRESULT ( STDMETHODCALLTYPE *GetGuidValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out GUID *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetBufferValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                                __RPC__in_ecount_full(cbValue) BYTE *pValue,
                       DWORD cbValue);
        HRESULT ( STDMETHODCALLTYPE *GetBufferValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                                          __RPC__deref_out_ecount_full_opt(*pcbValue) BYTE **ppValue,
                        __RPC__out DWORD *pcbValue);
        HRESULT ( STDMETHODCALLTYPE *SetIPortableDeviceValuesValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                       __RPC__in_opt IPortableDeviceValues *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetIPortableDeviceValuesValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__deref_out_opt IPortableDeviceValues **ppValue);
        HRESULT ( STDMETHODCALLTYPE *SetIPortableDevicePropVariantCollectionValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                       __RPC__in_opt IPortableDevicePropVariantCollection *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetIPortableDevicePropVariantCollectionValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__deref_out_opt IPortableDevicePropVariantCollection **ppValue);
        HRESULT ( STDMETHODCALLTYPE *SetIPortableDeviceKeyCollectionValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                       __RPC__in_opt IPortableDeviceKeyCollection *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetIPortableDeviceKeyCollectionValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__deref_out_opt IPortableDeviceKeyCollection **ppValue);
        HRESULT ( STDMETHODCALLTYPE *SetIPortableDeviceValuesCollectionValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                       __RPC__in_opt IPortableDeviceValuesCollection *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetIPortableDeviceValuesCollectionValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__deref_out_opt IPortableDeviceValuesCollection **ppValue);
        HRESULT ( STDMETHODCALLTYPE *RemoveValue )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in REFPROPERTYKEY key);
        HRESULT ( STDMETHODCALLTYPE *CopyValuesFromPropertyStore )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in_opt IPropertyStore *pStore);
        HRESULT ( STDMETHODCALLTYPE *CopyValuesToPropertyStore )(
            __RPC__in IPortableDeviceValues * This,
                       __RPC__in_opt IPropertyStore *pStore);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IPortableDeviceValues * This);
        END_INTERFACE
    } IPortableDeviceValuesVtbl;
    interface IPortableDeviceValues
    {
        CONST_VTBL struct IPortableDeviceValuesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pcelt) )
    ( (This)->lpVtbl -> GetAt(This,index,pKey,pValue) )
    ( (This)->lpVtbl -> SetValue(This,key,pValue) )
    ( (This)->lpVtbl -> GetValue(This,key,pValue) )
    ( (This)->lpVtbl -> SetStringValue(This,key,Value) )
    ( (This)->lpVtbl -> GetStringValue(This,key,pValue) )
    ( (This)->lpVtbl -> SetUnsignedIntegerValue(This,key,Value) )
    ( (This)->lpVtbl -> GetUnsignedIntegerValue(This,key,pValue) )
    ( (This)->lpVtbl -> SetSignedIntegerValue(This,key,Value) )
    ( (This)->lpVtbl -> GetSignedIntegerValue(This,key,pValue) )
    ( (This)->lpVtbl -> SetUnsignedLargeIntegerValue(This,key,Value) )
    ( (This)->lpVtbl -> GetUnsignedLargeIntegerValue(This,key,pValue) )
    ( (This)->lpVtbl -> SetSignedLargeIntegerValue(This,key,Value) )
    ( (This)->lpVtbl -> GetSignedLargeIntegerValue(This,key,pValue) )
    ( (This)->lpVtbl -> SetFloatValue(This,key,Value) )
    ( (This)->lpVtbl -> GetFloatValue(This,key,pValue) )
    ( (This)->lpVtbl -> SetErrorValue(This,key,Value) )
    ( (This)->lpVtbl -> GetErrorValue(This,key,pValue) )
    ( (This)->lpVtbl -> SetKeyValue(This,key,Value) )
    ( (This)->lpVtbl -> GetKeyValue(This,key,pValue) )
    ( (This)->lpVtbl -> SetBoolValue(This,key,Value) )
    ( (This)->lpVtbl -> GetBoolValue(This,key,pValue) )
    ( (This)->lpVtbl -> SetIUnknownValue(This,key,pValue) )
    ( (This)->lpVtbl -> GetIUnknownValue(This,key,ppValue) )
    ( (This)->lpVtbl -> SetGuidValue(This,key,Value) )
    ( (This)->lpVtbl -> GetGuidValue(This,key,pValue) )
    ( (This)->lpVtbl -> SetBufferValue(This,key,pValue,cbValue) )
    ( (This)->lpVtbl -> GetBufferValue(This,key,ppValue,pcbValue) )
    ( (This)->lpVtbl -> SetIPortableDeviceValuesValue(This,key,pValue) )
    ( (This)->lpVtbl -> GetIPortableDeviceValuesValue(This,key,ppValue) )
    ( (This)->lpVtbl -> SetIPortableDevicePropVariantCollectionValue(This,key,pValue) )
    ( (This)->lpVtbl -> GetIPortableDevicePropVariantCollectionValue(This,key,ppValue) )
    ( (This)->lpVtbl -> SetIPortableDeviceKeyCollectionValue(This,key,pValue) )
    ( (This)->lpVtbl -> GetIPortableDeviceKeyCollectionValue(This,key,ppValue) )
    ( (This)->lpVtbl -> SetIPortableDeviceValuesCollectionValue(This,key,pValue) )
    ( (This)->lpVtbl -> GetIPortableDeviceValuesCollectionValue(This,key,ppValue) )
    ( (This)->lpVtbl -> RemoveValue(This,key) )
    ( (This)->lpVtbl -> CopyValuesFromPropertyStore(This,pStore) )
    ( (This)->lpVtbl -> CopyValuesToPropertyStore(This,pStore) )
    ( (This)->lpVtbl -> Clear(This) )
#endif
#pragma endregion
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) && !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceTypes_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceTypes_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IPortableDeviceKeyCollection;
    typedef struct IPortableDeviceKeyCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceKeyCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceKeyCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceKeyCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IPortableDeviceKeyCollection * This,
                       __RPC__in DWORD *pcElems);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IPortableDeviceKeyCollection * This,
                       const DWORD dwIndex,
                       __RPC__in PROPERTYKEY *pKey);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IPortableDeviceKeyCollection * This,
                       __RPC__in REFPROPERTYKEY Key);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IPortableDeviceKeyCollection * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IPortableDeviceKeyCollection * This,
                       const DWORD dwIndex);
        END_INTERFACE
    } IPortableDeviceKeyCollectionVtbl;
    interface IPortableDeviceKeyCollection
    {
        CONST_VTBL struct IPortableDeviceKeyCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pcElems) )
    ( (This)->lpVtbl -> GetAt(This,dwIndex,pKey) )
    ( (This)->lpVtbl -> Add(This,Key) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> RemoveAt(This,dwIndex) )
EXTERN_C const IID IID_IPortableDevicePropVariantCollection;
    typedef struct IPortableDevicePropVariantCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDevicePropVariantCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDevicePropVariantCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDevicePropVariantCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IPortableDevicePropVariantCollection * This,
                       __RPC__in DWORD *pcElems);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IPortableDevicePropVariantCollection * This,
                       const DWORD dwIndex,
                       __RPC__in PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IPortableDevicePropVariantCollection * This,
                       __RPC__in const PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IPortableDevicePropVariantCollection * This,
                        __RPC__out VARTYPE *pvt);
        HRESULT ( STDMETHODCALLTYPE *ChangeType )(
            __RPC__in IPortableDevicePropVariantCollection * This,
                       const VARTYPE vt);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IPortableDevicePropVariantCollection * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IPortableDevicePropVariantCollection * This,
                       const DWORD dwIndex);
        END_INTERFACE
    } IPortableDevicePropVariantCollectionVtbl;
    interface IPortableDevicePropVariantCollection
    {
        CONST_VTBL struct IPortableDevicePropVariantCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pcElems) )
    ( (This)->lpVtbl -> GetAt(This,dwIndex,pValue) )
    ( (This)->lpVtbl -> Add(This,pValue) )
    ( (This)->lpVtbl -> GetType(This,pvt) )
    ( (This)->lpVtbl -> ChangeType(This,vt) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> RemoveAt(This,dwIndex) )
EXTERN_C const IID IID_IPortableDeviceValuesCollection;
    typedef struct IPortableDeviceValuesCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceValuesCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceValuesCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceValuesCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IPortableDeviceValuesCollection * This,
                       __RPC__in DWORD *pcElems);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IPortableDeviceValuesCollection * This,
                       const DWORD dwIndex,
                        __RPC__deref_out_opt IPortableDeviceValues **ppValues);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IPortableDeviceValuesCollection * This,
                       __RPC__in_opt IPortableDeviceValues *pValues);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IPortableDeviceValuesCollection * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IPortableDeviceValuesCollection * This,
                       const DWORD dwIndex);
        END_INTERFACE
    } IPortableDeviceValuesCollectionVtbl;
    interface IPortableDeviceValuesCollection
    {
        CONST_VTBL struct IPortableDeviceValuesCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pcElems) )
    ( (This)->lpVtbl -> GetAt(This,dwIndex,ppValues) )
    ( (This)->lpVtbl -> Add(This,pValues) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> RemoveAt(This,dwIndex) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceTypes_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceTypes_0000_0005_v0_0_s_ifspec;
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
EXTERN_C const IID LIBID_PortableDeviceTypesLib;
EXTERN_C const CLSID CLSID_WpdSerializer;
class DECLSPEC_UUID("0b91a74b-ad7c-4a9d-b563-29eef9167172")
WpdSerializer;
EXTERN_C const CLSID CLSID_PortableDeviceValues;
class DECLSPEC_UUID("0c15d503-d017-47ce-9016-7b3f978721cc")
PortableDeviceValues;
EXTERN_C const CLSID CLSID_PortableDeviceKeyCollection;
class DECLSPEC_UUID("de2d022d-2480-43be-97f0-d1fa2cf98f4f")
PortableDeviceKeyCollection;
EXTERN_C const CLSID CLSID_PortableDevicePropVariantCollection;
class DECLSPEC_UUID("08a99e2f-6d6d-4b80-af5a-baf2bcbe4cb9")
PortableDevicePropVariantCollection;
EXTERN_C const CLSID CLSID_PortableDeviceValuesCollection;
class DECLSPEC_UUID("3882134d-14cf-4220-9cb4-435f86d83f60")
PortableDeviceValuesCollection;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceTypes_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceTypes_0000_0006_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
}
