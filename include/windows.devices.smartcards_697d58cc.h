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
#include "Windows.Security.Cryptography.Core.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetHandler __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetHandler;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CICardAddedEventArgs __x_ABI_CWindows_CDevices_CSmartCards_CICardAddedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CICardRemovedEventArgs __x_ABI_CWindows_CDevices_CSmartCards_CICardRemovedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CIKnownSmartCardAppletIds __x_ABI_CWindows_CDevices_CSmartCards_CIKnownSmartCardAppletIds;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2 __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupFactory __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupFactory;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration2 __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration2;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupStatics __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupStatics;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2 __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu3 __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu3;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduFactory __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduFactory;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContext __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContext;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnect __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnect;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnection __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnection;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2 __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics2 __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics2;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPossessionProof __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPossessionProof;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo2 __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo2;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2 __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs2 __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs2;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsWithCryptograms __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsWithCryptograms;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionDeactivatedEventArgs __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionDeactivatedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionProperties __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionProperties;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2 __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics3 __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics3;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetDeferral __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetDeferral;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequest __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequest;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning2 __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning2;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics2 __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics2;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderStatics __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderStatics;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails2 __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails2;
typedef interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails3 __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails3;
typedef interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCard __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCard;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSmartCards__CSmartCard;
typedef struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCard * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCard * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCard * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCard * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCard * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCard * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCard * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCard * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCard * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCard * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardVtbl;
interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCard
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCard __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCard;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSmartCards__CSmartCard;
typedef struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCard * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCard * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCard * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCard * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCard * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCard * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCard * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCard **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardVtbl;
interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCard
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration;
typedef struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl;
interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration;
typedef struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl;
interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu;
typedef struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApduVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApduVtbl;
interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApduVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu;
typedef struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApduVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApduVtbl;
interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApduVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramAlgorithm;
typedef interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm;
typedef struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithmVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This, __RPC__out enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramAlgorithm *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramAlgorithm *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithmVtbl;
interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithmVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm;
typedef struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithmVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithmVtbl;
interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithmVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics;
typedef struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristicsVtbl;
interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristicsVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics;
typedef struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristicsVtbl;
interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristicsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics;
typedef struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristicsVtbl;
interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristicsVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics;
typedef struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristicsVtbl;
interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristicsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageConfirmationResponseFormat;
typedef interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat;
typedef struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This, __RPC__out enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageConfirmationResponseFormat *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageConfirmationResponseFormat *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormatVtbl;
interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormatVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat;
typedef struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormatVtbl;
interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageFormat;
typedef interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat;
typedef struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This, __RPC__out enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageFormat *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageFormat *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormatVtbl;
interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormatVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat;
typedef struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormatVtbl;
interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialType;
typedef interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType;
typedef struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This, __RPC__out enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialType *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialType *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialTypeVtbl;
interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialTypeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType;
typedef struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialTypeVtbl;
interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialTypeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep;
typedef struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStepVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStepVtbl;
interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStepVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep;
typedef struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStepVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStepVtbl;
interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStepVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyCapabilities;
typedef interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities;
typedef struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This, __RPC__out enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyCapabilities *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyCapabilities *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilitiesVtbl;
interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilitiesVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities;
typedef struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilitiesVtbl;
interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilitiesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics;
typedef struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristicsVtbl;
interface __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristicsVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics;
typedef struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristicsVtbl;
interface __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristicsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard;
typedef struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This,
                       __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardVtbl;
interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration;
typedef struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                       __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl;
interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm;
typedef struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithmVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramAlgorithm *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This,
                       enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramAlgorithm item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramAlgorithm *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithmVtbl;
interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithmVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics;
typedef struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This,
                       __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristicsVtbl;
interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristicsVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics;
typedef struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This,
                       __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristicsVtbl;
interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristicsVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat;
typedef struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageConfirmationResponseFormat *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This,
                       enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageConfirmationResponseFormat item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageConfirmationResponseFormat *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormatVtbl;
interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormatVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat;
typedef struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageFormat *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This,
                       enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageFormat item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageFormat *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormatVtbl;
interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormatVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType;
typedef struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialType *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This,
                       enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialType item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialType *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialTypeVtbl;
interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialTypeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities;
typedef struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyCapabilities *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This,
                       enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyCapabilities item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyCapabilities *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilitiesVtbl;
interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilitiesVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics;
typedef struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This,
                       __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristicsVtbl;
interface __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristicsVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardActivationPolicyChangeResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult * This, __RPC__out enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardActivationPolicyChangeResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContextVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContextVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContext * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContextVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContextVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardConnection __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardConnection;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardConnection;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardConnection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardConnection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardConnection * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardConnection * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardConnectionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardConnection
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardConnectionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardConnection *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardConnection **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnection * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnectionVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnectionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramGeneratorOperationStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * This, __RPC__out enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramGeneratorOperationStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatusVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProofVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProofVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProofVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProofVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPossessionProof * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProofVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProofVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfoVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardEmulator __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardEmulator;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardEmulator;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardEmulatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardEmulator * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardEmulator * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardEmulator * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardEmulator * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardEmulatorVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardEmulator
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardEmulatorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardEmulator *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardEmulator **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulatorVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulatorVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardProvisioningVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardProvisioningVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardProvisioningVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioningVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioningVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioningVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReader __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReader;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReader;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReader * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReader * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReader * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReaderVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReader
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReaderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReader *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReader **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader * This, __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardReaderStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus * This, __RPC__out enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardReaderStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatusVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatusVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardStatus;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSmartCards__CSmartCardStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus * This, __RPC__out enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatusVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * This, __RPC__out __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * This, __RPC__out __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistrationVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorApduReceivedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorApduReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorApduReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorApduReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorApduReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorApduReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorApduReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorApduReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorApduReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorApduReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorApduReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorConnectionDeactivatedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorConnectionDeactivatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorConnectionDeactivatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorConnectionDeactivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorConnectionDeactivatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorConnectionDeactivatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorConnectionDeactivatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorConnectionDeactivatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionDeactivatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorConnectionDeactivatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorConnectionDeactivatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorConnectionDeactivatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardAddedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardAddedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardAddedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardAddedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardAddedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardAddedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CICardAddedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardAddedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardAddedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardRemovedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardRemovedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardRemovedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardRemovedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardRemovedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardRemovedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CICardRemovedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardRemovedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardRemovedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
typedef interface __FIIterator_1_Windows__CStorage__CStreams__CIBuffer __FIIterator_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIIterator_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIIterator_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CStreams__CIBuffer __FIIterable_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIIterable_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStreams__CIBuffer **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIIterable_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIVectorView_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                       __x_ABI_CWindows_CStorage_CStreams_CIBuffer * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CStorage__CStreams__CIBuffer __FIVector_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIVector_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIVector_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBuffer * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBuffer * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBuffer * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBuffer * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *value);
    END_INTERFACE
} __FIVector_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIVector_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIVector_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt IInspectable * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_IInspectable __FIMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMap_2_HSTRING_IInspectable;
typedef struct __FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                            __RPC__deref_out_opt IInspectable * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                   __RPC__in_opt IInspectable * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    END_INTERFACE
} __FIMap_2_HSTRING_IInspectableVtbl;
interface __FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) )
    ( (This)->lpVtbl -> Remove(This,key) )
    ( (This)->lpVtbl -> Clear(This) )
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
EXTERN_C const IID IID___FIMapChangedEventArgs_1_HSTRING;
typedef struct __FIMapChangedEventArgs_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIMapChangedEventArgs_1_HSTRINGVtbl;
interface __FIMapChangedEventArgs_1_HSTRING
{
    CONST_VTBL struct __FIMapChangedEventArgs_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_CollectionChange(This,value) )
    ( (This)->lpVtbl -> get_Key(This,value) )
typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender,
                   __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;
interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;
typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
                            __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;
interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) )
    ( (This)->lpVtbl -> remove_MapChanged(This,token) )
typedef interface __FIReference_1_UINT32 __FIReference_1_UINT32;
EXTERN_C const IID IID___FIReference_1_UINT32;
typedef struct __FIReference_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT32 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT32 * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT32 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT32 * This, __RPC__out unsigned int *value);
    END_INTERFACE
} __FIReference_1_UINT32Vtbl;
interface __FIReference_1_UINT32
{
    CONST_VTBL struct __FIReference_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This, __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;
interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;
interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_GUID __FIAsyncOperationCompletedHandler_1_GUID;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_GUID;
typedef interface __FIAsyncOperation_1_GUID __FIAsyncOperation_1_GUID;
typedef struct __FIAsyncOperationCompletedHandler_1_GUIDVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_GUID * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_GUID * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_GUID * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_GUID * This, __RPC__in_opt __FIAsyncOperation_1_GUID *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_GUIDVtbl;
interface __FIAsyncOperationCompletedHandler_1_GUID
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_GUIDVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_GUID __FIAsyncOperation_1_GUID;
EXTERN_C const IID IID___FIAsyncOperation_1_GUID;
typedef struct __FIAsyncOperation_1_GUIDVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_GUID * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_GUID * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_GUID * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_GUID * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_GUID * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_GUID * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_GUID * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_GUID *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_GUID * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_GUID **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_GUID * This, __RPC__out GUID *results);
    END_INTERFACE
} __FIAsyncOperation_1_GUIDVtbl;
interface __FIAsyncOperation_1_GUID
{
    CONST_VTBL struct __FIAsyncOperation_1_GUIDVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;
interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardActivationPolicyChangeResult __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardActivationPolicyChangeResult;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardAppletIdGroupActivationPolicy __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardAppletIdGroupActivationPolicy;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardAutomaticResponseStatus __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardAutomaticResponseStatus;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramAlgorithm __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramAlgorithm;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramGeneratorOperationStatus __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramGeneratorOperationStatus;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageConfirmationResponseFormat __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageConfirmationResponseFormat;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageFormat __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageFormat;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialProtectionMethod __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialProtectionMethod;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialType __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialType;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramPlacementOptions __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramPlacementOptions;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyAlgorithm __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyAlgorithm;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyCapabilities __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyCapabilities;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptographicKeyAttestationStatus __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptographicKeyAttestationStatus;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulationCategory __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulationCategory;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulationType __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulationType;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulatorConnectionDeactivatedReason __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulatorConnectionDeactivatedReason;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulatorConnectionSource __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulatorConnectionSource;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulatorEnablementPolicy __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulatorEnablementPolicy;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardLaunchBehavior __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardLaunchBehavior;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardPinCharacterPolicyOption __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardPinCharacterPolicyOption;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardReaderKind __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardReaderKind;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardReaderStatus __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardReaderStatus;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardStatus __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardStatus;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardTriggerType __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardTriggerType;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardUnlockPromptingBehavior __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardUnlockPromptingBehavior;
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardActivationPolicyChangeResult
{
    SmartCardActivationPolicyChangeResult_Denied = 0,
    SmartCardActivationPolicyChangeResult_Allowed = 1,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardAppletIdGroupActivationPolicy
{
    SmartCardAppletIdGroupActivationPolicy_Disabled = 0,
    SmartCardAppletIdGroupActivationPolicy_ForegroundOverride = 1,
    SmartCardAppletIdGroupActivationPolicy_Enabled = 2,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardAutomaticResponseStatus
{
    SmartCardAutomaticResponseStatus_None = 0,
    SmartCardAutomaticResponseStatus_Success = 1,
    SmartCardAutomaticResponseStatus_UnknownError = 2,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramAlgorithm
{
    SmartCardCryptogramAlgorithm_None = 0,
    SmartCardCryptogramAlgorithm_CbcMac = 1,
    SmartCardCryptogramAlgorithm_Cvc3Umd = 2,
    SmartCardCryptogramAlgorithm_DecimalizedMsd = 3,
    SmartCardCryptogramAlgorithm_Cvc3MD = 4,
    SmartCardCryptogramAlgorithm_Sha1 = 5,
    SmartCardCryptogramAlgorithm_SignedDynamicApplicationData = 6,
    SmartCardCryptogramAlgorithm_RsaPkcs1 = 7,
    SmartCardCryptogramAlgorithm_Sha256Hmac = 8,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramGeneratorOperationStatus
{
    SmartCardCryptogramGeneratorOperationStatus_Success = 0,
    SmartCardCryptogramGeneratorOperationStatus_AuthorizationFailed = 1,
    SmartCardCryptogramGeneratorOperationStatus_AuthorizationCanceled = 2,
    SmartCardCryptogramGeneratorOperationStatus_AuthorizationRequired = 3,
    SmartCardCryptogramGeneratorOperationStatus_CryptogramMaterialPackageStorageKeyExists = 4,
    SmartCardCryptogramGeneratorOperationStatus_NoCryptogramMaterialPackageStorageKey = 5,
    SmartCardCryptogramGeneratorOperationStatus_NoCryptogramMaterialPackage = 6,
    SmartCardCryptogramGeneratorOperationStatus_UnsupportedCryptogramMaterialPackage = 7,
    SmartCardCryptogramGeneratorOperationStatus_UnknownCryptogramMaterialName = 8,
    SmartCardCryptogramGeneratorOperationStatus_InvalidCryptogramMaterialUsage = 9,
    SmartCardCryptogramGeneratorOperationStatus_ApduResponseNotSent = 10,
    SmartCardCryptogramGeneratorOperationStatus_OtherError = 11,
    SmartCardCryptogramGeneratorOperationStatus_ValidationFailed = 12,
    SmartCardCryptogramGeneratorOperationStatus_NotSupported = 13,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageConfirmationResponseFormat
{
    SmartCardCryptogramMaterialPackageConfirmationResponseFormat_None = 0,
    SmartCardCryptogramMaterialPackageConfirmationResponseFormat_VisaHmac = 1,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageFormat
{
    SmartCardCryptogramMaterialPackageFormat_None = 0,
    SmartCardCryptogramMaterialPackageFormat_JweRsaPki = 1,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialProtectionMethod
{
    SmartCardCryptogramMaterialProtectionMethod_None = 0,
    SmartCardCryptogramMaterialProtectionMethod_WhiteBoxing = 1,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialType
{
    SmartCardCryptogramMaterialType_None = 0,
    SmartCardCryptogramMaterialType_StaticDataAuthentication = 1,
    SmartCardCryptogramMaterialType_TripleDes112 = 2,
    SmartCardCryptogramMaterialType_Aes = 3,
    SmartCardCryptogramMaterialType_RsaPkcs1 = 4,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramPlacementOptions
{
    SmartCardCryptogramPlacementOptions_None = 0,
    SmartCardCryptogramPlacementOptions_UnitsAreInNibbles = 0x1,
    SmartCardCryptogramPlacementOptions_ChainOutput = 0x2,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyAlgorithm
{
    SmartCardCryptogramStorageKeyAlgorithm_None = 0,
    SmartCardCryptogramStorageKeyAlgorithm_Rsa2048 = 1,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyCapabilities
{
    SmartCardCryptogramStorageKeyCapabilities_None = 0,
    SmartCardCryptogramStorageKeyCapabilities_HardwareProtection = 0x1,
    SmartCardCryptogramStorageKeyCapabilities_UnlockPrompt = 0x2,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptographicKeyAttestationStatus
{
    SmartCardCryptographicKeyAttestationStatus_NoAttestation = 0,
    SmartCardCryptographicKeyAttestationStatus_SoftwareKeyWithoutTpm = 1,
    SmartCardCryptographicKeyAttestationStatus_SoftwareKeyWithTpm = 2,
    SmartCardCryptographicKeyAttestationStatus_TpmKeyUnknownAttestationStatus = 3,
    SmartCardCryptographicKeyAttestationStatus_TpmKeyWithoutAttestationCapability = 4,
    SmartCardCryptographicKeyAttestationStatus_TpmKeyWithTemporaryAttestationFailure = 5,
    SmartCardCryptographicKeyAttestationStatus_TpmKeyWithLongTermAttestationFailure = 6,
    SmartCardCryptographicKeyAttestationStatus_TpmKeyWithAttestation = 7,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulationCategory
{
    SmartCardEmulationCategory_Other = 0,
    SmartCardEmulationCategory_Payment = 1,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulationType
{
    SmartCardEmulationType_Host = 0,
    SmartCardEmulationType_Uicc = 1,
    SmartCardEmulationType_EmbeddedSE = 2,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulatorConnectionDeactivatedReason
{
    SmartCardEmulatorConnectionDeactivatedReason_ConnectionLost = 0,
    SmartCardEmulatorConnectionDeactivatedReason_ConnectionRedirected = 1,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulatorConnectionSource
{
    SmartCardEmulatorConnectionSource_Unknown = 0,
    SmartCardEmulatorConnectionSource_NfcReader = 1,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulatorEnablementPolicy
{
    SmartCardEmulatorEnablementPolicy_Never = 0,
    SmartCardEmulatorEnablementPolicy_Always = 1,
    SmartCardEmulatorEnablementPolicy_ScreenOn = 2,
    SmartCardEmulatorEnablementPolicy_ScreenUnlocked = 3,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardLaunchBehavior
{
    SmartCardLaunchBehavior_Default = 0,
    SmartCardLaunchBehavior_AboveLock = 1,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardPinCharacterPolicyOption
{
    SmartCardPinCharacterPolicyOption_Allow = 0,
    SmartCardPinCharacterPolicyOption_RequireAtLeastOne = 1,
    SmartCardPinCharacterPolicyOption_Disallow = 2,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardReaderKind
{
    SmartCardReaderKind_Any = 0,
    SmartCardReaderKind_Generic = 1,
    SmartCardReaderKind_Tpm = 2,
    SmartCardReaderKind_Nfc = 3,
    SmartCardReaderKind_Uicc = 4,
    SmartCardReaderKind_EmbeddedSE = 5,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardReaderStatus
{
    SmartCardReaderStatus_Disconnected = 0,
    SmartCardReaderStatus_Ready = 1,
    SmartCardReaderStatus_Exclusive = 2,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardStatus
{
    SmartCardStatus_Disconnected = 0,
    SmartCardStatus_Ready = 1,
    SmartCardStatus_Shared = 2,
    SmartCardStatus_Exclusive = 3,
    SmartCardStatus_Unresponsive = 4,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardTriggerType
{
    SmartCardTriggerType_EmulatorTransaction = 0,
    SmartCardTriggerType_EmulatorNearFieldEntry = 1,
    SmartCardTriggerType_EmulatorNearFieldExit = 2,
    SmartCardTriggerType_EmulatorHostApplicationActivated = 3,
    SmartCardTriggerType_EmulatorAppletIdGroupRegistrationChanged = 4,
    SmartCardTriggerType_ReaderCardAdded = 5,
};
enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardUnlockPromptingBehavior
{
    SmartCardUnlockPromptingBehavior_AllowUnlockPrompt = 0,
    SmartCardUnlockPromptingBehavior_RequireUnlockPrompt = 1,
    SmartCardUnlockPromptingBehavior_PreventUnlockPrompt = 2,
};
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning * sender,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequest * request
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetHandlerVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,request) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ICardAddedEventArgs[] = L"Windows.Devices.SmartCards.ICardAddedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CICardAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CICardAddedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CICardAddedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CICardAddedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CICardAddedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CICardAddedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CICardAddedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SmartCard )(
        __x_ABI_CWindows_CDevices_CSmartCards_CICardAddedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CICardAddedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CICardAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CICardAddedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SmartCard(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CICardAddedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ICardRemovedEventArgs[] = L"Windows.Devices.SmartCards.ICardRemovedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CICardRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CICardRemovedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CICardRemovedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CICardRemovedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CICardRemovedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CICardRemovedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CICardRemovedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SmartCard )(
        __x_ABI_CWindows_CDevices_CSmartCards_CICardRemovedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CICardRemovedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CICardRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CICardRemovedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SmartCard(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CICardRemovedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_IKnownSmartCardAppletIds[] = L"Windows.Devices.SmartCards.IKnownSmartCardAppletIds";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CIKnownSmartCardAppletIdsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CIKnownSmartCardAppletIds * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CIKnownSmartCardAppletIds * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CIKnownSmartCardAppletIds * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CIKnownSmartCardAppletIds * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CIKnownSmartCardAppletIds * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CIKnownSmartCardAppletIds * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PaymentSystemEnvironment )(
        __x_ABI_CWindows_CDevices_CSmartCards_CIKnownSmartCardAppletIds * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProximityPaymentSystemEnvironment )(
        __x_ABI_CWindows_CDevices_CSmartCards_CIKnownSmartCardAppletIds * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CIKnownSmartCardAppletIdsVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CIKnownSmartCardAppletIds
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CIKnownSmartCardAppletIdsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PaymentSystemEnvironment(This,value) )
    ( (This)->lpVtbl->get_ProximityPaymentSystemEnvironment(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CIKnownSmartCardAppletIds;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCard[] = L"Windows.Devices.SmartCards.ISmartCard";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reader )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStatusAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAnswerToResetAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reader(This,value) )
    ( (This)->lpVtbl->GetStatusAsync(This,result) )
    ( (This)->lpVtbl->GetAnswerToResetAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCard;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardAppletIdGroup[] = L"Windows.Devices.SmartCards.ISmartCardAppletIdGroup";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppletIds )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CStorage__CStreams__CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SmartCardEmulationCategory )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulationCategory * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SmartCardEmulationCategory )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulationCategory value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SmartCardEmulationType )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulationType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SmartCardEmulationType )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulationType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutomaticEnablement )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutomaticEnablement )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
    ( (This)->lpVtbl->get_AppletIds(This,value) )
    ( (This)->lpVtbl->get_SmartCardEmulationCategory(This,value) )
    ( (This)->lpVtbl->put_SmartCardEmulationCategory(This,value) )
    ( (This)->lpVtbl->get_SmartCardEmulationType(This,value) )
    ( (This)->lpVtbl->put_SmartCardEmulationType(This,value) )
    ( (This)->lpVtbl->get_AutomaticEnablement(This,value) )
    ( (This)->lpVtbl->put_AutomaticEnablement(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardAppletIdGroup2[] = L"Windows.Devices.SmartCards.ISmartCardAppletIdGroup2";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Logo )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Logo )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SecureUserAuthenticationRequired )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SecureUserAuthenticationRequired )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2Vtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Logo(This,value) )
    ( (This)->lpVtbl->put_Logo(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->get_SecureUserAuthenticationRequired(This,value) )
    ( (This)->lpVtbl->put_SecureUserAuthenticationRequired(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardAppletIdGroupFactory[] = L"Windows.Devices.SmartCards.ISmartCardAppletIdGroupFactory";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupFactory * This,
                  __RPC__in HSTRING displayName,
                  __RPC__in_opt __FIVector_1_Windows__CStorage__CStreams__CIBuffer * appletIds,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulationCategory emulationCategory,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulationType emulationType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,displayName,appletIds,emulationCategory,emulationType,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardAppletIdGroupRegistration[] = L"Windows.Devices.SmartCards.ISmartCardAppletIdGroupRegistration";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActivationPolicy )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardAppletIdGroupActivationPolicy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppletIdGroup )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestActivationPolicyChangeAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardAppletIdGroupActivationPolicy policy,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardActivationPolicyChangeResult * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * This,
                           __RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetAutomaticResponseApdusAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardAutomaticResponseApdu * apdus,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistrationVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistrationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActivationPolicy(This,value) )
    ( (This)->lpVtbl->get_AppletIdGroup(This,value) )
    ( (This)->lpVtbl->RequestActivationPolicyChangeAsync(This,policy,result) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->SetAutomaticResponseApdusAsync(This,apdus,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardAppletIdGroupRegistration2[] = L"Windows.Devices.SmartCards.ISmartCardAppletIdGroupRegistration2";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SmartCardReaderId )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertiesAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * props,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration2Vtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SmartCardReaderId(This,value) )
    ( (This)->lpVtbl->SetPropertiesAsync(This,props,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardAppletIdGroupStatics[] = L"Windows.Devices.SmartCards.ISmartCardAppletIdGroupStatics";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxAppletIds )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupStatics * This,
                           __RPC__out UINT16 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxAppletIds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardAutomaticResponseApdu[] = L"Windows.Devices.SmartCards.ISmartCardAutomaticResponseApdu";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CommandApdu )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CommandApdu )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CommandApduBitMask )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CommandApduBitMask )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShouldMatchLength )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShouldMatchLength )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppletId )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AppletId )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResponseApdu )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ResponseApdu )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CommandApdu(This,value) )
    ( (This)->lpVtbl->put_CommandApdu(This,value) )
    ( (This)->lpVtbl->get_CommandApduBitMask(This,value) )
    ( (This)->lpVtbl->put_CommandApduBitMask(This,value) )
    ( (This)->lpVtbl->get_ShouldMatchLength(This,value) )
    ( (This)->lpVtbl->put_ShouldMatchLength(This,value) )
    ( (This)->lpVtbl->get_AppletId(This,value) )
    ( (This)->lpVtbl->put_AppletId(This,value) )
    ( (This)->lpVtbl->get_ResponseApdu(This,value) )
    ( (This)->lpVtbl->put_ResponseApdu(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardAutomaticResponseApdu2[] = L"Windows.Devices.SmartCards.ISmartCardAutomaticResponseApdu2";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InputState )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2 * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InputState )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2 * This,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutputState )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2 * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutputState )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2 * This,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2Vtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InputState(This,value) )
    ( (This)->lpVtbl->put_InputState(This,value) )
    ( (This)->lpVtbl->get_OutputState(This,value) )
    ( (This)->lpVtbl->put_OutputState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardAutomaticResponseApdu3[] = L"Windows.Devices.SmartCards.ISmartCardAutomaticResponseApdu3";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllowWhenCryptogramGeneratorNotPrepared )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowWhenCryptogramGeneratorNotPrepared )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu3 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu3Vtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllowWhenCryptogramGeneratorNotPrepared(This,value) )
    ( (This)->lpVtbl->put_AllowWhenCryptogramGeneratorNotPrepared(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardAutomaticResponseApduFactory[] = L"Windows.Devices.SmartCards.ISmartCardAutomaticResponseApduFactory";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * commandApdu,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * responseApdu,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApdu * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,commandApdu,responseApdu,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAutomaticResponseApduFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardChallengeContext[] = L"Windows.Devices.SmartCards.ISmartCardChallengeContext";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContext * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContext * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContext * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContext * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContext * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContext * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Challenge )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContext * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *VerifyResponseAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContext * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * response,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ProvisionAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContext * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * response,
                  boolean formatCard,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ProvisionAsyncWithNewCardId )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContext * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * response,
                  boolean formatCard,
                  GUID newCardId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ChangeAdministrativeKeyAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContext * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * response,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * newAdministrativeKey,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContextVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContext
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Challenge(This,value) )
    ( (This)->lpVtbl->VerifyResponseAsync(This,response,result) )
    ( (This)->lpVtbl->ProvisionAsync(This,response,formatCard,result) )
    ( (This)->lpVtbl->ProvisionAsyncWithNewCardId(This,response,formatCard,newCardId,result) )
    ( (This)->lpVtbl->ChangeAdministrativeKeyAsync(This,response,newAdministrativeKey,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardChallengeContext;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardConnect[] = L"Windows.Devices.SmartCards.ISmartCardConnect";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnect * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ConnectAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnect * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardConnection * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnectVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnect
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ConnectAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardConnection[] = L"Windows.Devices.SmartCards.ISmartCardConnection";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnection * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TransmitAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnection * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * command,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnectionVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TransmitAsync(This,command,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardConnection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardCryptogramGenerator[] = L"Windows.Devices.SmartCards.ISmartCardCryptogramGenerator";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SupportedCryptogramMaterialTypes )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialType * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedCryptogramAlgorithms )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedCryptogramMaterialPackageFormats )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageFormat * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedCryptogramMaterialPackageConfirmationResponseFormats )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedSmartCardCryptogramStorageKeyCapabilities )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCapabilities * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteCryptogramMaterialStorageKeyAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This,
                  __RPC__in HSTRING storageKeyName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCryptogramMaterialStorageKeyAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardUnlockPromptingBehavior promptingBehavior,
                  __RPC__in HSTRING storageKeyName,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyAlgorithm algorithm,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyCapabilities capabilities,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestCryptogramMaterialStorageKeyInfoAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardUnlockPromptingBehavior promptingBehavior,
                  __RPC__in HSTRING storageKeyName,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType format,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ImportCryptogramMaterialPackageAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageFormat format,
                  __RPC__in HSTRING storageKeyName,
                  __RPC__in HSTRING materialPackageName,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * cryptogramMaterialPackage,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryProvePossessionOfCryptogramMaterialPackageAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardUnlockPromptingBehavior promptingBehavior,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageConfirmationResponseFormat responseFormat,
                  __RPC__in HSTRING materialPackageName,
                  __RPC__in HSTRING materialName,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * challenge,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPossessionProof * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestUnlockCryptogramMaterialForUseAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardUnlockPromptingBehavior promptingBehavior,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteCryptogramMaterialPackageAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator * This,
                  __RPC__in HSTRING materialPackageName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SupportedCryptogramMaterialTypes(This,result) )
    ( (This)->lpVtbl->get_SupportedCryptogramAlgorithms(This,result) )
    ( (This)->lpVtbl->get_SupportedCryptogramMaterialPackageFormats(This,result) )
    ( (This)->lpVtbl->get_SupportedCryptogramMaterialPackageConfirmationResponseFormats(This,result) )
    ( (This)->lpVtbl->get_SupportedSmartCardCryptogramStorageKeyCapabilities(This,result) )
    ( (This)->lpVtbl->DeleteCryptogramMaterialStorageKeyAsync(This,storageKeyName,result) )
    ( (This)->lpVtbl->CreateCryptogramMaterialStorageKeyAsync(This,promptingBehavior,storageKeyName,algorithm,capabilities,result) )
    ( (This)->lpVtbl->RequestCryptogramMaterialStorageKeyInfoAsync(This,promptingBehavior,storageKeyName,format,result) )
    ( (This)->lpVtbl->ImportCryptogramMaterialPackageAsync(This,format,storageKeyName,materialPackageName,cryptogramMaterialPackage,result) )
    ( (This)->lpVtbl->TryProvePossessionOfCryptogramMaterialPackageAsync(This,promptingBehavior,responseFormat,materialPackageName,materialName,challenge,result) )
    ( (This)->lpVtbl->RequestUnlockCryptogramMaterialForUseAsync(This,promptingBehavior,result) )
    ( (This)->lpVtbl->DeleteCryptogramMaterialPackageAsync(This,materialPackageName,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardCryptogramGenerator2[] = L"Windows.Devices.SmartCards.ISmartCardCryptogramGenerator2";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ValidateRequestApduAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2 * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardUnlockPromptingBehavior promptingBehavior,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * apduToValidate,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * cryptogramPlacementSteps,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAllCryptogramStorageKeyCharacteristicsAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetAllCryptogramMaterialPackageCharacteristicsAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetAllCryptogramMaterialPackageCharacteristicsWithStorageKeyAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2 * This,
                  __RPC__in HSTRING storageKeyName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAllCryptogramMaterialCharacteristicsAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2 * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardUnlockPromptingBehavior promptingBehavior,
                  __RPC__in HSTRING materialPackageName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2Vtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ValidateRequestApduAsync(This,promptingBehavior,apduToValidate,cryptogramPlacementSteps,result) )
    ( (This)->lpVtbl->GetAllCryptogramStorageKeyCharacteristicsAsync(This,result) )
    ( (This)->lpVtbl->GetAllCryptogramMaterialPackageCharacteristicsAsync(This,result) )
    ( (This)->lpVtbl->GetAllCryptogramMaterialPackageCharacteristicsWithStorageKeyAsync(This,storageKeyName,result) )
    ( (This)->lpVtbl->GetAllCryptogramMaterialCharacteristicsAsync(This,promptingBehavior,materialPackageName,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGenerator2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardCryptogramGeneratorStatics[] = L"Windows.Devices.SmartCards.ISmartCardCryptogramGeneratorStatics";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetSmartCardCryptogramGeneratorAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGenerator * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetSmartCardCryptogramGeneratorAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardCryptogramGeneratorStatics2[] = L"Windows.Devices.SmartCards.ISmartCardCryptogramGeneratorStatics2";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics2 * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsSupported(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGeneratorStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult[] = L"Windows.Devices.SmartCards.ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OperationStatus )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramGeneratorOperationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Characteristics )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialCharacteristics * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResultVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OperationStatus(This,value) )
    ( (This)->lpVtbl->get_Characteristics(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult[] = L"Windows.Devices.SmartCards.ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OperationStatus )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramGeneratorOperationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Characteristics )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageCharacteristics * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResultVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OperationStatus(This,value) )
    ( (This)->lpVtbl->get_Characteristics(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult[] = L"Windows.Devices.SmartCards.ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OperationStatus )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramGeneratorOperationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Characteristics )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramStorageKeyCharacteristics * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResultVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OperationStatus(This,value) )
    ( (This)->lpVtbl->get_Characteristics(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardCryptogramMaterialCharacteristics[] = L"Windows.Devices.SmartCards.ISmartCardCryptogramMaterialCharacteristics";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaterialName )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowedAlgorithms )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowedProofOfPossessionAlgorithms )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramMaterialPackageConfirmationResponseFormat * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowedValidations )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramAlgorithm * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaterialType )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtectionMethod )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialProtectionMethod * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtectionVersion )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaterialLength )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristicsVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristicsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaterialName(This,value) )
    ( (This)->lpVtbl->get_AllowedAlgorithms(This,value) )
    ( (This)->lpVtbl->get_AllowedProofOfPossessionAlgorithms(This,value) )
    ( (This)->lpVtbl->get_AllowedValidations(This,value) )
    ( (This)->lpVtbl->get_MaterialType(This,value) )
    ( (This)->lpVtbl->get_ProtectionMethod(This,value) )
    ( (This)->lpVtbl->get_ProtectionVersion(This,value) )
    ( (This)->lpVtbl->get_MaterialLength(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialCharacteristics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardCryptogramMaterialPackageCharacteristics[] = L"Windows.Devices.SmartCards.ISmartCardCryptogramMaterialPackageCharacteristics";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PackageName )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StorageKeyName )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DateImported )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PackageFormat )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramMaterialPackageFormat * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristicsVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristicsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PackageName(This,value) )
    ( (This)->lpVtbl->get_StorageKeyName(This,value) )
    ( (This)->lpVtbl->get_DateImported(This,value) )
    ( (This)->lpVtbl->get_PackageFormat(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPackageCharacteristics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardCryptogramMaterialPossessionProof[] = L"Windows.Devices.SmartCards.ISmartCardCryptogramMaterialPossessionProof";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPossessionProofVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPossessionProof * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPossessionProof * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPossessionProof * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPossessionProof * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPossessionProof * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPossessionProof * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OperationStatus )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPossessionProof * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramGeneratorOperationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Proof )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPossessionProof * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPossessionProofVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPossessionProof
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPossessionProofVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OperationStatus(This,value) )
    ( (This)->lpVtbl->get_Proof(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramMaterialPossessionProof;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardCryptogramPlacementStep[] = L"Windows.Devices.SmartCards.ISmartCardCryptogramPlacementStep";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStepVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Algorithm )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramAlgorithm * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Algorithm )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramAlgorithm value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceData )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SourceData )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CryptogramMaterialPackageName )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CryptogramMaterialPackageName )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CryptogramMaterialName )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CryptogramMaterialName )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TemplateOffset )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TemplateOffset )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CryptogramOffset )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CryptogramOffset )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CryptogramLength )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CryptogramLength )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CryptogramPlacementOptions )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramPlacementOptions * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CryptogramPlacementOptions )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramPlacementOptions value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChainedOutputStep )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChainedOutputStep )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStepVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStepVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Algorithm(This,value) )
    ( (This)->lpVtbl->put_Algorithm(This,value) )
    ( (This)->lpVtbl->get_SourceData(This,value) )
    ( (This)->lpVtbl->put_SourceData(This,value) )
    ( (This)->lpVtbl->get_CryptogramMaterialPackageName(This,value) )
    ( (This)->lpVtbl->put_CryptogramMaterialPackageName(This,value) )
    ( (This)->lpVtbl->get_CryptogramMaterialName(This,value) )
    ( (This)->lpVtbl->put_CryptogramMaterialName(This,value) )
    ( (This)->lpVtbl->get_TemplateOffset(This,value) )
    ( (This)->lpVtbl->put_TemplateOffset(This,value) )
    ( (This)->lpVtbl->get_CryptogramOffset(This,value) )
    ( (This)->lpVtbl->put_CryptogramOffset(This,value) )
    ( (This)->lpVtbl->get_CryptogramLength(This,value) )
    ( (This)->lpVtbl->put_CryptogramLength(This,value) )
    ( (This)->lpVtbl->get_CryptogramPlacementOptions(This,value) )
    ( (This)->lpVtbl->put_CryptogramPlacementOptions(This,value) )
    ( (This)->lpVtbl->get_ChainedOutputStep(This,value) )
    ( (This)->lpVtbl->put_ChainedOutputStep(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramPlacementStep;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardCryptogramStorageKeyCharacteristics[] = L"Windows.Devices.SmartCards.ISmartCardCryptogramStorageKeyCharacteristics";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StorageKeyName )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DateCreated )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Algorithm )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyAlgorithm * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyCapabilities * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristicsVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristicsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StorageKeyName(This,value) )
    ( (This)->lpVtbl->get_DateCreated(This,value) )
    ( (This)->lpVtbl->get_Algorithm(This,value) )
    ( (This)->lpVtbl->get_Capabilities(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyCharacteristics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardCryptogramStorageKeyInfo[] = L"Windows.Devices.SmartCards.ISmartCardCryptogramStorageKeyInfo";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OperationStatus )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramGeneratorOperationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublicKeyBlobType )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublicKey )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttestationStatus )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptographicKeyAttestationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Attestation )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttestationCertificateChain )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardCryptogramStorageKeyCapabilities * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfoVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OperationStatus(This,value) )
    ( (This)->lpVtbl->get_PublicKeyBlobType(This,value) )
    ( (This)->lpVtbl->get_PublicKey(This,value) )
    ( (This)->lpVtbl->get_AttestationStatus(This,value) )
    ( (This)->lpVtbl->get_Attestation(This,value) )
    ( (This)->lpVtbl->get_AttestationCertificateChain(This,value) )
    ( (This)->lpVtbl->get_Capabilities(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardCryptogramStorageKeyInfo2[] = L"Windows.Devices.SmartCards.ISmartCardCryptogramStorageKeyInfo2";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OperationalRequirements )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo2Vtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OperationalRequirements(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardCryptogramStorageKeyInfo2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardEmulator[] = L"Windows.Devices.SmartCards.ISmartCardEmulator";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EnablementPolicy )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulatorEnablementPolicy * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EnablementPolicy(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardEmulator2[] = L"Windows.Devices.SmartCards.ISmartCardEmulator2";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ApduReceived )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorApduReceivedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ApduReceived )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2 * This,
                  EventRegistrationToken value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ConnectionDeactivated )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardEmulator_Windows__CDevices__CSmartCards__CSmartCardEmulatorConnectionDeactivatedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ConnectionDeactivated )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2 * This,
                  EventRegistrationToken value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *IsHostCardEmulationSupported )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2Vtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ApduReceived(This,value,token) )
    ( (This)->lpVtbl->remove_ApduReceived(This,value) )
    ( (This)->lpVtbl->add_ConnectionDeactivated(This,value,token) )
    ( (This)->lpVtbl->remove_ConnectionDeactivated(This,value) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->IsHostCardEmulationSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardEmulatorApduReceivedEventArgs[] = L"Windows.Devices.SmartCards.ISmartCardEmulatorApduReceivedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CommandApdu )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionProperties )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryRespondAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * responseApdu,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutomaticResponseStatus )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardAutomaticResponseStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CommandApdu(This,value) )
    ( (This)->lpVtbl->get_ConnectionProperties(This,value) )
    ( (This)->lpVtbl->TryRespondAsync(This,responseApdu,result) )
    ( (This)->lpVtbl->get_AutomaticResponseStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardEmulatorApduReceivedEventArgs2[] = L"Windows.Devices.SmartCards.ISmartCardEmulatorApduReceivedEventArgs2";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs2 * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *TryRespondWithStateAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * responseApdu,
                  __RPC__in_opt __FIReference_1_UINT32 * nextState,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs2Vtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->TryRespondWithStateAsync(This,responseApdu,nextState,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardEmulatorApduReceivedEventArgsWithCryptograms[] = L"Windows.Devices.SmartCards.ISmartCardEmulatorApduReceivedEventArgsWithCryptograms";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsWithCryptogramsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsWithCryptograms * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsWithCryptograms * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsWithCryptograms * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsWithCryptograms * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsWithCryptograms * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsWithCryptograms * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *TryRespondWithCryptogramsAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsWithCryptograms * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * responseTemplate,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * cryptogramPlacementSteps,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TryRespondWithCryptogramsAndStateAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsWithCryptograms * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * responseTemplate,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramPlacementStep * cryptogramPlacementSteps,
                  __RPC__in_opt __FIReference_1_UINT32 * nextState,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardCryptogramGeneratorOperationStatus * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsWithCryptogramsVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsWithCryptograms
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsWithCryptogramsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryRespondWithCryptogramsAsync(This,responseTemplate,cryptogramPlacementSteps,result) )
    ( (This)->lpVtbl->TryRespondWithCryptogramsAndStateAsync(This,responseTemplate,cryptogramPlacementSteps,nextState,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorApduReceivedEventArgsWithCryptograms;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardEmulatorConnectionDeactivatedEventArgs[] = L"Windows.Devices.SmartCards.ISmartCardEmulatorConnectionDeactivatedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionDeactivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionDeactivatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionDeactivatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionDeactivatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionDeactivatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionDeactivatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionDeactivatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ConnectionProperties )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionDeactivatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionDeactivatedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulatorConnectionDeactivatedReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionDeactivatedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionDeactivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionDeactivatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ConnectionProperties(This,value) )
    ( (This)->lpVtbl->get_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionDeactivatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardEmulatorConnectionProperties[] = L"Windows.Devices.SmartCards.ISmartCardEmulatorConnectionProperties";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionProperties * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionProperties * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardEmulatorConnectionSource * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionPropertiesVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Source(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorConnectionProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardEmulatorStatics[] = L"Windows.Devices.SmartCards.ISmartCardEmulatorStatics";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardEmulator * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardEmulatorStatics2[] = L"Windows.Devices.SmartCards.ISmartCardEmulatorStatics2";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAppletIdGroupRegistrationsAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RegisterAppletIdGroupAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroup * appletIdGroup,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardAppletIdGroupRegistration * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UnregisterAppletIdGroupAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardAppletIdGroupRegistration * registration,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxAppletIdGroupRegistrations )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2 * This,
                           __RPC__out UINT16 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAppletIdGroupRegistrationsAsync(This,result) )
    ( (This)->lpVtbl->RegisterAppletIdGroupAsync(This,appletIdGroup,result) )
    ( (This)->lpVtbl->UnregisterAppletIdGroupAsync(This,registration,result) )
    ( (This)->lpVtbl->get_MaxAppletIdGroupRegistrations(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardEmulatorStatics3[] = L"Windows.Devices.SmartCards.ISmartCardEmulatorStatics3";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics3 * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics3Vtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsSupported(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulatorStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardPinPolicy[] = L"Windows.Devices.SmartCards.ISmartCardPinPolicy";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MinLength )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinLength )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxLength )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxLength )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UppercaseLetters )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardPinCharacterPolicyOption * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UppercaseLetters )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardPinCharacterPolicyOption value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LowercaseLetters )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardPinCharacterPolicyOption * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LowercaseLetters )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardPinCharacterPolicyOption value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Digits )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardPinCharacterPolicyOption * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Digits )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardPinCharacterPolicyOption value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpecialCharacters )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardPinCharacterPolicyOption * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SpecialCharacters )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardPinCharacterPolicyOption value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicyVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MinLength(This,value) )
    ( (This)->lpVtbl->put_MinLength(This,value) )
    ( (This)->lpVtbl->get_MaxLength(This,value) )
    ( (This)->lpVtbl->put_MaxLength(This,value) )
    ( (This)->lpVtbl->get_UppercaseLetters(This,value) )
    ( (This)->lpVtbl->put_UppercaseLetters(This,value) )
    ( (This)->lpVtbl->get_LowercaseLetters(This,value) )
    ( (This)->lpVtbl->put_LowercaseLetters(This,value) )
    ( (This)->lpVtbl->get_Digits(This,value) )
    ( (This)->lpVtbl->put_Digits(This,value) )
    ( (This)->lpVtbl->get_SpecialCharacters(This,value) )
    ( (This)->lpVtbl->put_SpecialCharacters(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardPinResetDeferral[] = L"Windows.Devices.SmartCards.ISmartCardPinResetDeferral";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetDeferralVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardPinResetRequest[] = L"Windows.Devices.SmartCards.ISmartCardPinResetRequest";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Challenge )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequest * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetDeferral * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetResponse )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequest * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * response
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequestVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Challenge(This,value) )
    ( (This)->lpVtbl->get_Deadline(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
    ( (This)->lpVtbl->SetResponse(This,response) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardProvisioning[] = L"Windows.Devices.SmartCards.ISmartCardProvisioning";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SmartCard )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIdAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_GUID * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetNameAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetChallengeContextAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardChallengeContext * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestPinChangeAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestPinResetAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinResetHandler * handler,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SmartCard(This,value) )
    ( (This)->lpVtbl->GetIdAsync(This,result) )
    ( (This)->lpVtbl->GetNameAsync(This,result) )
    ( (This)->lpVtbl->GetChallengeContextAsync(This,result) )
    ( (This)->lpVtbl->RequestPinChangeAsync(This,result) )
    ( (This)->lpVtbl->RequestPinResetAsync(This,handler,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardProvisioning2[] = L"Windows.Devices.SmartCards.ISmartCardProvisioning2";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAuthorityKeyContainerNameAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning2Vtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAuthorityKeyContainerNameAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioning2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardProvisioningStatics[] = L"Windows.Devices.SmartCards.ISmartCardProvisioningStatics";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromSmartCardAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * card,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestVirtualSmartCardCreationAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics * This,
                  __RPC__in HSTRING friendlyName,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * administrativeKey,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * pinPolicy,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestVirtualSmartCardCreationAsyncWithCardId )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics * This,
                  __RPC__in HSTRING friendlyName,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * administrativeKey,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * pinPolicy,
                  GUID cardId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestVirtualSmartCardDeletionAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * card,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromSmartCardAsync(This,card,result) )
    ( (This)->lpVtbl->RequestVirtualSmartCardCreationAsync(This,friendlyName,administrativeKey,pinPolicy,result) )
    ( (This)->lpVtbl->RequestVirtualSmartCardCreationAsyncWithCardId(This,friendlyName,administrativeKey,pinPolicy,cardId,result) )
    ( (This)->lpVtbl->RequestVirtualSmartCardDeletionAsync(This,card,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardProvisioningStatics2[] = L"Windows.Devices.SmartCards.ISmartCardProvisioningStatics2";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RequestAttestedVirtualSmartCardCreationAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics2 * This,
                  __RPC__in HSTRING friendlyName,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * administrativeKey,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * pinPolicy,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestAttestedVirtualSmartCardCreationAsyncWithCardId )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics2 * This,
                  __RPC__in HSTRING friendlyName,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * administrativeKey,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardPinPolicy * pinPolicy,
                  GUID cardId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardProvisioning * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAttestedVirtualSmartCardCreationAsync(This,friendlyName,administrativeKey,pinPolicy,result) )
    ( (This)->lpVtbl->RequestAttestedVirtualSmartCardCreationAsyncWithCardId(This,friendlyName,administrativeKey,pinPolicy,cardId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardProvisioningStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardReader[] = L"Windows.Devices.SmartCards.ISmartCardReader";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardReaderKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStatusAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReaderStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllCardsAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSmartCards__CSmartCard * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CardAdded )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardAddedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CardAdded )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CardRemoved )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSmartCards__CSmartCardReader_Windows__CDevices__CSmartCards__CCardRemovedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CardRemoved )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->GetStatusAsync(This,result) )
    ( (This)->lpVtbl->FindAllCardsAsync(This,result) )
    ( (This)->lpVtbl->add_CardAdded(This,handler,token) )
    ( (This)->lpVtbl->remove_CardAdded(This,token) )
    ( (This)->lpVtbl->add_CardRemoved(This,handler,token) )
    ( (This)->lpVtbl->remove_CardRemoved(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardReaderStatics[] = L"Windows.Devices.SmartCards.ISmartCardReaderStatics";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderStatics * This,
                           __RPC__deref_out_opt HSTRING * selector
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorWithKind )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderStatics * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardReaderKind kind,
                           __RPC__deref_out_opt HSTRING * selector
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSmartCards__CSmartCardReader * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,selector) )
    ( (This)->lpVtbl->GetDeviceSelectorWithKind(This,kind,selector) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardReaderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardTriggerDetails[] = L"Windows.Devices.SmartCards.ISmartCardTriggerDetails";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TriggerType )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardTriggerType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceAppletId )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TriggerData )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetailsVtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TriggerType(This,value) )
    ( (This)->lpVtbl->get_SourceAppletId(This,value) )
    ( (This)->lpVtbl->get_TriggerData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardTriggerDetails2[] = L"Windows.Devices.SmartCards.ISmartCardTriggerDetails2";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Emulator )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardEmulator * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *TryLaunchCurrentAppAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails2 * This,
                  __RPC__in HSTRING arguments,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TryLaunchCurrentAppWithBehaviorAsync )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails2 * This,
                  __RPC__in HSTRING arguments,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardLaunchBehavior behavior,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails2Vtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Emulator(This,value) )
    ( (This)->lpVtbl->TryLaunchCurrentAppAsync(This,arguments,result) )
    ( (This)->lpVtbl->TryLaunchCurrentAppWithBehaviorAsync(This,arguments,behavior,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SmartCards_ISmartCardTriggerDetails3[] = L"Windows.Devices.SmartCards.ISmartCardTriggerDetails3";
typedef struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SmartCard )(
        __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSmartCards_CISmartCard * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails3Vtbl;
interface __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SmartCard(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSmartCards_CISmartCardTriggerDetails3;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_CardAddedEventArgs[] = L"Windows.Devices.SmartCards.CardAddedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_CardRemovedEventArgs[] = L"Windows.Devices.SmartCards.CardRemovedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_KnownSmartCardAppletIds[] = L"Windows.Devices.SmartCards.KnownSmartCardAppletIds";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCard[] = L"Windows.Devices.SmartCards.SmartCard";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardAppletIdGroup[] = L"Windows.Devices.SmartCards.SmartCardAppletIdGroup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardAppletIdGroupRegistration[] = L"Windows.Devices.SmartCards.SmartCardAppletIdGroupRegistration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardAutomaticResponseApdu[] = L"Windows.Devices.SmartCards.SmartCardAutomaticResponseApdu";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardChallengeContext[] = L"Windows.Devices.SmartCards.SmartCardChallengeContext";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardConnection[] = L"Windows.Devices.SmartCards.SmartCardConnection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardCryptogramGenerator[] = L"Windows.Devices.SmartCards.SmartCardCryptogramGenerator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult[] = L"Windows.Devices.SmartCards.SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult[] = L"Windows.Devices.SmartCards.SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult[] = L"Windows.Devices.SmartCards.SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardCryptogramMaterialCharacteristics[] = L"Windows.Devices.SmartCards.SmartCardCryptogramMaterialCharacteristics";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardCryptogramMaterialPackageCharacteristics[] = L"Windows.Devices.SmartCards.SmartCardCryptogramMaterialPackageCharacteristics";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardCryptogramMaterialPossessionProof[] = L"Windows.Devices.SmartCards.SmartCardCryptogramMaterialPossessionProof";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardCryptogramPlacementStep[] = L"Windows.Devices.SmartCards.SmartCardCryptogramPlacementStep";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardCryptogramStorageKeyCharacteristics[] = L"Windows.Devices.SmartCards.SmartCardCryptogramStorageKeyCharacteristics";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardCryptogramStorageKeyInfo[] = L"Windows.Devices.SmartCards.SmartCardCryptogramStorageKeyInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardEmulator[] = L"Windows.Devices.SmartCards.SmartCardEmulator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardEmulatorApduReceivedEventArgs[] = L"Windows.Devices.SmartCards.SmartCardEmulatorApduReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardEmulatorConnectionDeactivatedEventArgs[] = L"Windows.Devices.SmartCards.SmartCardEmulatorConnectionDeactivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardEmulatorConnectionProperties[] = L"Windows.Devices.SmartCards.SmartCardEmulatorConnectionProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardPinPolicy[] = L"Windows.Devices.SmartCards.SmartCardPinPolicy";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardPinResetDeferral[] = L"Windows.Devices.SmartCards.SmartCardPinResetDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardPinResetRequest[] = L"Windows.Devices.SmartCards.SmartCardPinResetRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardProvisioning[] = L"Windows.Devices.SmartCards.SmartCardProvisioning";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardReader[] = L"Windows.Devices.SmartCards.SmartCardReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SmartCards_SmartCardTriggerDetails[] = L"Windows.Devices.SmartCards.SmartCardTriggerDetails";
       
       
#pragma clang diagnostic pop
