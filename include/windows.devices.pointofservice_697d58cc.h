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
#include "Windows.Graphics.Imaging.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner2 __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities1 __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities1;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities2 __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerDataReceivedEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerDataReceivedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerImagePreviewReceivedEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerImagePreviewReceivedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReport __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReport;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportFactory __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportFactory;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics2 __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatusUpdatedEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatusUpdatedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics2 __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics2 __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatus __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatus;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusUpdatedEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusUpdatedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner1 __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner1;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner2 __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3 __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner4 __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner4;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerClosedEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerClosedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer2 __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerClosedEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerClosedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedJournalPrinter __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedJournalPrinter;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay3 __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay3;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayClosedEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayClosedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayStatics __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayStatics;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader2 __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderClosedEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderClosedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter2 __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterClosedEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterClosedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrintJob __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrintJob;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2 __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay2 __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphs __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics2 __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelector __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelector;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatusUpdatedEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatusUpdatedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmap __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmap;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2 __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStatics __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStatics;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderEncryptionAlgorithmsStatics __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderEncryptionAlgorithmsStatics;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics2 __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatusUpdatedEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatusUpdatedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter2 __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCharacterSetIdsStatics __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCharacterSetIdsStatics;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontProperty __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontProperty;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJob __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJob;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterReleaseDeviceRequestedEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterReleaseDeviceRequestedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics2 __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatus __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatus;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusUpdatedEventArgs __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusUpdatedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2 __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2 __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrintJob __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrintJob;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2 __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData;
typedef interface __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataFactory __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataFactory;
enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterRotation;
typedef interface __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotation __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotation;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotation;
typedef struct __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This, __RPC__out enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterRotation *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterRotation *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotationVtbl;
interface __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotation
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CPointOfService__CPosPrinterRotation __FIIterable_1_Windows__CDevices__CPointOfService__CPosPrinterRotation;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CPointOfService__CPosPrinterRotation;
typedef struct __FIIterable_1_Windows__CDevices__CPointOfService__CPosPrinterRotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CPointOfService__CPosPrinterRotation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CPointOfService__CPosPrinterRotationVtbl;
interface __FIIterable_1_Windows__CDevices__CPointOfService__CPosPrinterRotation
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CPointOfService__CPosPrinterRotationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
struct __x_ABI_CWindows_CDevices_CPointOfService_CSizeUInt32;
typedef interface __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32 __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32;
typedef struct __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This, __RPC__out struct __x_ABI_CWindows_CDevices_CPointOfService_CSizeUInt32 *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CDevices_CPointOfService_CSizeUInt32 *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32Vtbl;
interface __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32Vtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CPointOfService__CSizeUInt32 __FIIterable_1_Windows__CDevices__CPointOfService__CSizeUInt32;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CPointOfService__CSizeUInt32;
typedef struct __FIIterable_1_Windows__CDevices__CPointOfService__CSizeUInt32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CPointOfService__CSizeUInt32 **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CPointOfService__CSizeUInt32Vtbl;
interface __FIIterable_1_Windows__CDevices__CPointOfService__CSizeUInt32
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CPointOfService__CSizeUInt32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotation __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotation;
typedef struct __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterRotation *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This,
                       enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterRotation item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterRotation *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotationVtbl;
interface __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32 __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32;
typedef struct __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CDevices_CPointOfService_CSizeUInt32 *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This,
                       struct __x_ABI_CWindows_CDevices_CPointOfService_CSizeUInt32 item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32 * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CDevices_CPointOfService_CSizeUInt32 *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32Vtbl;
interface __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32Vtbl *lpVtbl;
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
typedef interface __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner;
typedef struct __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerVtbl;
interface __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader;
typedef struct __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderVtbl;
interface __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeScanner __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeScanner;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeScanner;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeScannerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeScanner * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeScanner * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeScanner * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeScanner * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeScannerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeScanner
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeScannerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScannerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeScanner *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeScanner **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner * This, __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScannerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScannerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributesVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes * This, __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributesVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributesVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CCashDrawer __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CCashDrawer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CCashDrawer;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CCashDrawerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CCashDrawer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CCashDrawer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CCashDrawer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CCashDrawer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CCashDrawerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CCashDrawer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CCashDrawerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CCashDrawer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CCashDrawer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer * This, __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * This, __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedCashDrawerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedCashDrawerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedCashDrawerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer * This, __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedLineDisplayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedLineDisplayVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedLineDisplayVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay * This, __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplayVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplayVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * This, __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedPosPrinterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedPosPrinterVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedPosPrinterVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter * This, __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinterVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinterVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplay __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplay;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplay;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplay * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplay * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplay * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplay * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplay
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplay *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplay **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay * This, __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayPowerStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus * This, __RPC__out enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayPowerStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatusVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmapVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmapVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap * This, __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmap * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmapVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmapVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayWindow __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayWindow;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayWindow;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayWindowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayWindow * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayWindow * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayWindow * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayWindow * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayWindowVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayWindow
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayWindowVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayWindow *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CLineDisplayWindow **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow * This, __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindowVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindowVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CMagneticStripeReader __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CMagneticStripeReader;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CMagneticStripeReader;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CMagneticStripeReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CMagneticStripeReader * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CMagneticStripeReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CMagneticStripeReader * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CMagneticStripeReader * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CMagneticStripeReaderVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CMagneticStripeReader
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CMagneticStripeReaderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CMagneticStripeReader *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CMagneticStripeReader **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader * This, __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReaderVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReaderVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CPosPrinter __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CPosPrinter;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CPosPrinter;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CPosPrinterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CPosPrinter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CPosPrinter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CPosPrinter * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CPosPrinter * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CPosPrinterVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CPosPrinter
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CPosPrinterVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CPosPrinter *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPointOfService__CPosPrinter **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter * This, __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinterVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinterVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerStatusUpdatedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerStatusUpdatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerStatusUpdatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerStatusUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerStatusUpdatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerStatusUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerStatusUpdatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerStatusUpdatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatusUpdatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerStatusUpdatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerStatusUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerStatusUpdatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawer_Windows__CDevices__CPointOfService__CCashDrawerStatusUpdatedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawer_Windows__CDevices__CPointOfService__CCashDrawerStatusUpdatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawer_Windows__CDevices__CPointOfService__CCashDrawerStatusUpdatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawer_Windows__CDevices__CPointOfService__CCashDrawerStatusUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawer_Windows__CDevices__CPointOfService__CCashDrawerStatusUpdatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawer_Windows__CDevices__CPointOfService__CCashDrawerStatusUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawer_Windows__CDevices__CPointOfService__CCashDrawerStatusUpdatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawer_Windows__CDevices__CPointOfService__CCashDrawerStatusUpdatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusUpdatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawer_Windows__CDevices__CPointOfService__CCashDrawerStatusUpdatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawer_Windows__CDevices__CPointOfService__CCashDrawerStatusUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawer_Windows__CDevices__CPointOfService__CCashDrawerStatusUpdatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerCloseAlarm_IInspectable __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerCloseAlarm_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerCloseAlarm_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerCloseAlarm_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerCloseAlarm_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerCloseAlarm_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerCloseAlarm_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerCloseAlarm_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerCloseAlarm_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerCloseAlarm_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerCloseAlarm_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerClosedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerClosedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerClosedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerClosedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerClosedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerClosedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerClosedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerClosedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerClosedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerClosedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerOpenedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerOpenedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerOpenedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerOpenedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerOpenedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerOpenedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerOpenedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerOpenedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerOpenedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerOpenedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerOpenedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerDataReceivedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerDataReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerDataReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerDataReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerDataReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerDataReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerDataReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerDataReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerDataReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerDataReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerDataReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerDataReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerErrorOccurredEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerErrorOccurredEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerErrorOccurredEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerErrorOccurredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerErrorOccurredEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerErrorOccurredEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerErrorOccurredEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerErrorOccurredEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerErrorOccurredEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerErrorOccurredEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerErrorOccurredEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerImagePreviewReceivedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerImagePreviewReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerImagePreviewReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerImagePreviewReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerImagePreviewReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerImagePreviewReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerImagePreviewReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerImagePreviewReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerImagePreviewReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerImagePreviewReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerImagePreviewReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerImagePreviewReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerClosedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerClosedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerClosedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerClosedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerClosedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerClosedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerClosedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerClosedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerClosedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerClosedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerClosedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_IInspectable __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_Windows__CDevices__CPointOfService__CClaimedCashDrawerClosedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_Windows__CDevices__CPointOfService__CClaimedCashDrawerClosedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_Windows__CDevices__CPointOfService__CClaimedCashDrawerClosedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_Windows__CDevices__CPointOfService__CClaimedCashDrawerClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_Windows__CDevices__CPointOfService__CClaimedCashDrawerClosedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_Windows__CDevices__CPointOfService__CClaimedCashDrawerClosedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_Windows__CDevices__CPointOfService__CClaimedCashDrawerClosedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_Windows__CDevices__CPointOfService__CClaimedCashDrawerClosedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerClosedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_Windows__CDevices__CPointOfService__CClaimedCashDrawerClosedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_Windows__CDevices__CPointOfService__CClaimedCashDrawerClosedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_Windows__CDevices__CPointOfService__CClaimedCashDrawerClosedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_IInspectable __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CClaimedLineDisplayClosedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CClaimedLineDisplayClosedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CClaimedLineDisplayClosedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CClaimedLineDisplayClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CClaimedLineDisplayClosedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CClaimedLineDisplayClosedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CClaimedLineDisplayClosedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CClaimedLineDisplayClosedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayClosedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CClaimedLineDisplayClosedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CClaimedLineDisplayClosedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CClaimedLineDisplayClosedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CLineDisplayStatusUpdatedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CLineDisplayStatusUpdatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CLineDisplayStatusUpdatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CLineDisplayStatusUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CLineDisplayStatusUpdatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CLineDisplayStatusUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CLineDisplayStatusUpdatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CLineDisplayStatusUpdatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatusUpdatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CLineDisplayStatusUpdatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CLineDisplayStatusUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CLineDisplayStatusUpdatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderClosedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderClosedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderClosedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderClosedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderClosedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderClosedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderClosedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderClosedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderClosedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderClosedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderClosedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderAamvaCardDataReceivedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderAamvaCardDataReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderAamvaCardDataReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderAamvaCardDataReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderAamvaCardDataReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderAamvaCardDataReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderAamvaCardDataReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderAamvaCardDataReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderAamvaCardDataReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderAamvaCardDataReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderBankCardDataReceivedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderBankCardDataReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderBankCardDataReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderBankCardDataReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderBankCardDataReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderBankCardDataReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderBankCardDataReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderBankCardDataReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderBankCardDataReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderBankCardDataReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderBankCardDataReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderErrorOccurredEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderErrorOccurredEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderErrorOccurredEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderErrorOccurredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderErrorOccurredEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderErrorOccurredEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderErrorOccurredEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderErrorOccurredEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderErrorOccurredEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderErrorOccurredEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderErrorOccurredEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderVendorSpecificCardDataReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderVendorSpecificCardDataReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderVendorSpecificCardDataReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CClaimedPosPrinterClosedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CClaimedPosPrinterClosedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CClaimedPosPrinterClosedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CClaimedPosPrinterClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CClaimedPosPrinterClosedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CClaimedPosPrinterClosedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CClaimedPosPrinterClosedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CClaimedPosPrinterClosedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterClosedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CClaimedPosPrinterClosedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CClaimedPosPrinterClosedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CClaimedPosPrinterClosedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterReleaseDeviceRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterReleaseDeviceRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterReleaseDeviceRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterReleaseDeviceRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterReleaseDeviceRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterReleaseDeviceRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterReleaseDeviceRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterReleaseDeviceRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterReleaseDeviceRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterReleaseDeviceRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterReleaseDeviceRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterReleaseDeviceRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderStatusUpdatedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderStatusUpdatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderStatusUpdatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderStatusUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderStatusUpdatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderStatusUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderStatusUpdatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderStatusUpdatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatusUpdatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderStatusUpdatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderStatusUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderStatusUpdatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterStatusUpdatedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterStatusUpdatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPointOfService__CPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterStatusUpdatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterStatusUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterStatusUpdatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterStatusUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterStatusUpdatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterStatusUpdatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusUpdatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterStatusUpdatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterStatusUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterStatusUpdatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __FIIterator_1_UINT32 __FIIterator_1_UINT32;
EXTERN_C const IID IID___FIIterator_1_UINT32;
typedef struct __FIIterator_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out unsigned int *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_UINT32 * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) unsigned int *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_UINT32Vtbl;
interface __FIIterator_1_UINT32
{
    CONST_VTBL struct __FIIterator_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIIterable_1_UINT32 __FIIterable_1_UINT32;
EXTERN_C const IID IID___FIIterable_1_UINT32;
typedef struct __FIIterable_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_UINT32 * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__deref_out_opt __FIIterator_1_UINT32 **first);
    END_INTERFACE
} __FIIterable_1_UINT32Vtbl;
interface __FIIterable_1_UINT32
{
    CONST_VTBL struct __FIIterable_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_UINT32 __FIVectorView_1_UINT32;
EXTERN_C const IID IID___FIVectorView_1_UINT32;
typedef struct __FIVectorView_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_UINT32 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_UINT32 * This,
                                                    unsigned int index,
                                                             __RPC__out unsigned int *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_UINT32 * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_UINT32 * This,
                       unsigned int item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_UINT32 * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) unsigned int *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_UINT32Vtbl;
interface __FIVectorView_1_UINT32
{
    CONST_VTBL struct __FIVectorView_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32 __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32;
typedef interface __FIAsyncOperation_1___FIVectorView_1_UINT32 __FIAsyncOperation_1___FIVectorView_1_UINT32;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32 * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_UINT32 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32Vtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_UINT32 __FIAsyncOperation_1___FIVectorView_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_UINT32;
typedef struct __FIAsyncOperation_1___FIVectorView_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This, __RPC__out __FIVectorView_1_UINT32 * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_UINT32Vtbl;
interface __FIAsyncOperation_1___FIVectorView_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
struct __x_ABI_CWindows_CFoundation_CSize;
typedef interface __FIIterator_1_Windows__CFoundation__CSize __FIIterator_1_Windows__CFoundation__CSize;
EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CSize;
typedef struct __FIIterator_1_Windows__CFoundation__CSizeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CFoundation__CSize * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CFoundation__CSize * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CFoundation__CSize * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CFoundation__CSize * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CFoundation__CSize * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CFoundation__CSize * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CFoundation__CSize * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CSize *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CFoundation__CSize * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CFoundation__CSize * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CFoundation__CSize * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CSize *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CFoundation__CSizeVtbl;
interface __FIIterator_1_Windows__CFoundation__CSize
{
    CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CSizeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CFoundation__CSize __FIIterable_1_Windows__CFoundation__CSize;
EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CSize;
typedef struct __FIIterable_1_Windows__CFoundation__CSizeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CFoundation__CSize * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CFoundation__CSize * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CFoundation__CSize * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CFoundation__CSize * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CFoundation__CSize * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CFoundation__CSize * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CFoundation__CSize * This, __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CSize **first);
    END_INTERFACE
} __FIIterable_1_Windows__CFoundation__CSizeVtbl;
interface __FIIterable_1_Windows__CFoundation__CSize
{
    CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CSizeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CFoundation__CSize __FIVectorView_1_Windows__CFoundation__CSize;
EXTERN_C const IID IID___FIVectorView_1_Windows__CFoundation__CSize;
typedef struct __FIVectorView_1_Windows__CFoundation__CSizeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CSize * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CFoundation__CSize * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CFoundation__CSize * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CFoundation__CSize * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CSize * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CSize * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CFoundation__CSize * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CFoundation_CSize *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CFoundation__CSize * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CSize * This,
                       struct __x_ABI_CWindows_CFoundation_CSize item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CSize * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CSize *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CFoundation__CSizeVtbl;
interface __FIVectorView_1_Windows__CFoundation__CSize
{
    CONST_VTBL struct __FIVectorView_1_Windows__CFoundation__CSizeVtbl *lpVtbl;
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
typedef interface __FIIterator_1_int __FIIterator_1_int;
EXTERN_C const IID IID___FIIterator_1_int;
typedef struct __FIIterator_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_int * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_int * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_int * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_int * This, __RPC__out int *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_int * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_int * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_int * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) int *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_intVtbl;
interface __FIIterator_1_int
{
    CONST_VTBL struct __FIIterator_1_intVtbl *lpVtbl;
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
typedef interface __FIIterable_1_int __FIIterable_1_int;
EXTERN_C const IID IID___FIIterable_1_int;
typedef struct __FIIterable_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_int * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_int * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_int * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_int * This, __RPC__deref_out_opt __FIIterator_1_int **first);
    END_INTERFACE
} __FIIterable_1_intVtbl;
interface __FIIterable_1_int
{
    CONST_VTBL struct __FIIterable_1_intVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_int __FIVectorView_1_int;
EXTERN_C const IID IID___FIVectorView_1_int;
typedef struct __FIVectorView_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_int * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_int * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_int * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_int * This,
                                                    unsigned int index,
                                                             __RPC__out int *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_int * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_int * This,
                       int item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_int * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) int *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_intVtbl;
interface __FIVectorView_1_int
{
    CONST_VTBL struct __FIVectorView_1_intVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_UINT32 __FIAsyncOperationCompletedHandler_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_UINT32;
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;
typedef struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This, __RPC__in_opt __FIAsyncOperation_1_UINT32 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_UINT32Vtbl;
interface __FIAsyncOperationCompletedHandler_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperation_1_UINT32;
typedef struct __FIAsyncOperation_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__out unsigned int *results);
    END_INTERFACE
} __FIAsyncOperation_1_UINT32Vtbl;
interface __FIAsyncOperation_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperation_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;
typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt HSTRING *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;
interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CBarcodeScannerStatus __x_ABI_CWindows_CDevices_CPointOfService_CBarcodeScannerStatus;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CBarcodeSymbologyDecodeLengthKind __x_ABI_CWindows_CDevices_CPointOfService_CBarcodeSymbologyDecodeLengthKind;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CCashDrawerStatusKind __x_ABI_CWindows_CDevices_CPointOfService_CCashDrawerStatusKind;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayCursorType __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayCursorType;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayDescriptorState __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayDescriptorState;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayHorizontalAlignment __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayHorizontalAlignment;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayMarqueeFormat __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayMarqueeFormat;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayPowerStatus __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayPowerStatus;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayScrollDirection __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayScrollDirection;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayTextAttribute __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayTextAttribute;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayTextAttributeGranularity __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayTextAttributeGranularity;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayVerticalAlignment __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayVerticalAlignment;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderAuthenticationLevel __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderAuthenticationLevel;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderAuthenticationProtocol __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderAuthenticationProtocol;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderErrorReportingType __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderErrorReportingType;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderStatus __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderStatus;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderTrackErrorType __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderTrackErrorType;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderTrackIds __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderTrackIds;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CPosConnectionTypes __x_ABI_CWindows_CDevices_CPointOfService_CPosConnectionTypes;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterAlignment __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterAlignment;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterBarcodeTextPosition __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterBarcodeTextPosition;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterCartridgeSensors __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterCartridgeSensors;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterColorCapabilities __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterColorCapabilities;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterColorCartridge __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterColorCartridge;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterLineDirection __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterLineDirection;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterLineStyle __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterLineStyle;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterMapMode __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterMapMode;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterMarkFeedCapabilities __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterMarkFeedCapabilities;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterMarkFeedKind __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterMarkFeedKind;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterPrintSide __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterPrintSide;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterRotation __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterRotation;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterRuledLineCapabilities __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterRuledLineCapabilities;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterStatusKind __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterStatusKind;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosErrorReason __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosErrorReason;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosErrorSeverity __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosErrorSeverity;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosHealthCheckLevel __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosHealthCheckLevel;
typedef enum __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosPowerReportingType __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosPowerReportingType;
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CSizeUInt32 __x_ABI_CWindows_CDevices_CPointOfService_CSizeUInt32;
enum __x_ABI_CWindows_CDevices_CPointOfService_CBarcodeScannerStatus
{
    BarcodeScannerStatus_Online = 0,
    BarcodeScannerStatus_Off = 1,
    BarcodeScannerStatus_Offline = 2,
    BarcodeScannerStatus_OffOrOffline = 3,
    BarcodeScannerStatus_Extended = 4,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CBarcodeSymbologyDecodeLengthKind
{
    BarcodeSymbologyDecodeLengthKind_AnyLength = 0,
    BarcodeSymbologyDecodeLengthKind_Discrete = 1,
    BarcodeSymbologyDecodeLengthKind_Range = 2,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CCashDrawerStatusKind
{
    CashDrawerStatusKind_Online = 0,
    CashDrawerStatusKind_Off = 1,
    CashDrawerStatusKind_Offline = 2,
    CashDrawerStatusKind_OffOrOffline = 3,
    CashDrawerStatusKind_Extended = 4,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayCursorType
{
    LineDisplayCursorType_None = 0,
    LineDisplayCursorType_Block = 1,
    LineDisplayCursorType_HalfBlock = 2,
    LineDisplayCursorType_Underline = 3,
    LineDisplayCursorType_Reverse = 4,
    LineDisplayCursorType_Other = 5,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayDescriptorState
{
    LineDisplayDescriptorState_Off = 0,
    LineDisplayDescriptorState_On = 1,
    LineDisplayDescriptorState_Blink = 2,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayHorizontalAlignment
{
    LineDisplayHorizontalAlignment_Left = 0,
    LineDisplayHorizontalAlignment_Center = 1,
    LineDisplayHorizontalAlignment_Right = 2,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayMarqueeFormat
{
    LineDisplayMarqueeFormat_None = 0,
    LineDisplayMarqueeFormat_Walk = 1,
    LineDisplayMarqueeFormat_Place = 2,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayPowerStatus
{
    LineDisplayPowerStatus_Unknown = 0,
    LineDisplayPowerStatus_Online = 1,
    LineDisplayPowerStatus_Off = 2,
    LineDisplayPowerStatus_Offline = 3,
    LineDisplayPowerStatus_OffOrOffline = 4,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayScrollDirection
{
    LineDisplayScrollDirection_Up = 0,
    LineDisplayScrollDirection_Down = 1,
    LineDisplayScrollDirection_Left = 2,
    LineDisplayScrollDirection_Right = 3,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayTextAttribute
{
    LineDisplayTextAttribute_Normal = 0,
    LineDisplayTextAttribute_Blink = 1,
    LineDisplayTextAttribute_Reverse = 2,
    LineDisplayTextAttribute_ReverseBlink = 3,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayTextAttributeGranularity
{
    LineDisplayTextAttributeGranularity_NotSupported = 0,
    LineDisplayTextAttributeGranularity_EntireDisplay = 1,
    LineDisplayTextAttributeGranularity_PerCharacter = 2,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayVerticalAlignment
{
    LineDisplayVerticalAlignment_Top = 0,
    LineDisplayVerticalAlignment_Center = 1,
    LineDisplayVerticalAlignment_Bottom = 2,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderAuthenticationLevel
{
    MagneticStripeReaderAuthenticationLevel_NotSupported = 0,
    MagneticStripeReaderAuthenticationLevel_Optional = 1,
    MagneticStripeReaderAuthenticationLevel_Required = 2,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderAuthenticationProtocol
{
    MagneticStripeReaderAuthenticationProtocol_None = 0,
    MagneticStripeReaderAuthenticationProtocol_ChallengeResponse = 1,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderErrorReportingType
{
    MagneticStripeReaderErrorReportingType_CardLevel = 0,
    MagneticStripeReaderErrorReportingType_TrackLevel = 1,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderStatus
{
    MagneticStripeReaderStatus_Unauthenticated = 0,
    MagneticStripeReaderStatus_Authenticated = 1,
    MagneticStripeReaderStatus_Extended = 2,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderTrackErrorType
{
    MagneticStripeReaderTrackErrorType_None = 0,
    MagneticStripeReaderTrackErrorType_StartSentinelError = 1,
    MagneticStripeReaderTrackErrorType_EndSentinelError = 2,
    MagneticStripeReaderTrackErrorType_ParityError = 3,
    MagneticStripeReaderTrackErrorType_LrcError = 4,
    MagneticStripeReaderTrackErrorType_Unknown = -1,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderTrackIds
{
    MagneticStripeReaderTrackIds_None = 0,
    MagneticStripeReaderTrackIds_Track1 = 1,
    MagneticStripeReaderTrackIds_Track2 = 2,
    MagneticStripeReaderTrackIds_Track3 = 4,
    MagneticStripeReaderTrackIds_Track4 = 8,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CPosConnectionTypes
{
    PosConnectionTypes_Local = 0x1,
    PosConnectionTypes_IP = 0x2,
    PosConnectionTypes_Bluetooth = 0x4,
    PosConnectionTypes_All = 0xffffffff,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterAlignment
{
    PosPrinterAlignment_Left = 0,
    PosPrinterAlignment_Center = 1,
    PosPrinterAlignment_Right = 2,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterBarcodeTextPosition
{
    PosPrinterBarcodeTextPosition_None = 0,
    PosPrinterBarcodeTextPosition_Above = 1,
    PosPrinterBarcodeTextPosition_Below = 2,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterCartridgeSensors
{
    PosPrinterCartridgeSensors_None = 0,
    PosPrinterCartridgeSensors_Removed = 0x1,
    PosPrinterCartridgeSensors_Empty = 0x2,
    PosPrinterCartridgeSensors_HeadCleaning = 0x4,
    PosPrinterCartridgeSensors_NearEnd = 0x8,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterColorCapabilities
{
    PosPrinterColorCapabilities_None = 0,
    PosPrinterColorCapabilities_Primary = 0x1,
    PosPrinterColorCapabilities_Custom1 = 0x2,
    PosPrinterColorCapabilities_Custom2 = 0x4,
    PosPrinterColorCapabilities_Custom3 = 0x8,
    PosPrinterColorCapabilities_Custom4 = 0x10,
    PosPrinterColorCapabilities_Custom5 = 0x20,
    PosPrinterColorCapabilities_Custom6 = 0x40,
    PosPrinterColorCapabilities_Cyan = 0x80,
    PosPrinterColorCapabilities_Magenta = 0x100,
    PosPrinterColorCapabilities_Yellow = 0x200,
    PosPrinterColorCapabilities_Full = 0x400,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterColorCartridge
{
    PosPrinterColorCartridge_Unknown = 0,
    PosPrinterColorCartridge_Primary = 1,
    PosPrinterColorCartridge_Custom1 = 2,
    PosPrinterColorCartridge_Custom2 = 3,
    PosPrinterColorCartridge_Custom3 = 4,
    PosPrinterColorCartridge_Custom4 = 5,
    PosPrinterColorCartridge_Custom5 = 6,
    PosPrinterColorCartridge_Custom6 = 7,
    PosPrinterColorCartridge_Cyan = 8,
    PosPrinterColorCartridge_Magenta = 9,
    PosPrinterColorCartridge_Yellow = 10,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterLineDirection
{
    PosPrinterLineDirection_Horizontal = 0,
    PosPrinterLineDirection_Vertical = 1,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterLineStyle
{
    PosPrinterLineStyle_SingleSolid = 0,
    PosPrinterLineStyle_DoubleSolid = 1,
    PosPrinterLineStyle_Broken = 2,
    PosPrinterLineStyle_Chain = 3,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterMapMode
{
    PosPrinterMapMode_Dots = 0,
    PosPrinterMapMode_Twips = 1,
    PosPrinterMapMode_English = 2,
    PosPrinterMapMode_Metric = 3,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterMarkFeedCapabilities
{
    PosPrinterMarkFeedCapabilities_None = 0,
    PosPrinterMarkFeedCapabilities_ToTakeUp = 0x1,
    PosPrinterMarkFeedCapabilities_ToCutter = 0x2,
    PosPrinterMarkFeedCapabilities_ToCurrentTopOfForm = 0x4,
    PosPrinterMarkFeedCapabilities_ToNextTopOfForm = 0x8,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterMarkFeedKind
{
    PosPrinterMarkFeedKind_ToTakeUp = 0,
    PosPrinterMarkFeedKind_ToCutter = 1,
    PosPrinterMarkFeedKind_ToCurrentTopOfForm = 2,
    PosPrinterMarkFeedKind_ToNextTopOfForm = 3,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterPrintSide
{
    PosPrinterPrintSide_Unknown = 0,
    PosPrinterPrintSide_Side1 = 1,
    PosPrinterPrintSide_Side2 = 2,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterRotation
{
    PosPrinterRotation_Normal = 0,
    PosPrinterRotation_Right90 = 1,
    PosPrinterRotation_Left90 = 2,
    PosPrinterRotation_Rotate180 = 3,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterRuledLineCapabilities
{
    PosPrinterRuledLineCapabilities_None = 0,
    PosPrinterRuledLineCapabilities_Horizontal = 0x1,
    PosPrinterRuledLineCapabilities_Vertical = 0x2,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterStatusKind
{
    PosPrinterStatusKind_Online = 0,
    PosPrinterStatusKind_Off = 1,
    PosPrinterStatusKind_Offline = 2,
    PosPrinterStatusKind_OffOrOffline = 3,
    PosPrinterStatusKind_Extended = 4,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosErrorReason
{
    UnifiedPosErrorReason_UnknownErrorReason = 0,
    UnifiedPosErrorReason_NoService = 1,
    UnifiedPosErrorReason_Disabled = 2,
    UnifiedPosErrorReason_Illegal = 3,
    UnifiedPosErrorReason_NoHardware = 4,
    UnifiedPosErrorReason_Closed = 5,
    UnifiedPosErrorReason_Offline = 6,
    UnifiedPosErrorReason_Failure = 7,
    UnifiedPosErrorReason_Timeout = 8,
    UnifiedPosErrorReason_Busy = 9,
    UnifiedPosErrorReason_Extended = 10,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosErrorSeverity
{
    UnifiedPosErrorSeverity_UnknownErrorSeverity = 0,
    UnifiedPosErrorSeverity_Warning = 1,
    UnifiedPosErrorSeverity_Recoverable = 2,
    UnifiedPosErrorSeverity_Unrecoverable = 3,
    UnifiedPosErrorSeverity_AssistanceRequired = 4,
    UnifiedPosErrorSeverity_Fatal = 5,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosHealthCheckLevel
{
    UnifiedPosHealthCheckLevel_UnknownHealthCheckLevel = 0,
    UnifiedPosHealthCheckLevel_POSInternal = 1,
    UnifiedPosHealthCheckLevel_External = 2,
    UnifiedPosHealthCheckLevel_Interactive = 3,
};
enum __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosPowerReportingType
{
    UnifiedPosPowerReportingType_UnknownPowerReportingType = 0,
    UnifiedPosPowerReportingType_Standard = 1,
    UnifiedPosPowerReportingType_Advanced = 2,
};
struct __x_ABI_CWindows_CDevices_CPointOfService_CSizeUInt32
{
    UINT32 Width;
    UINT32 Height;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IBarcodeScanner[] = L"Windows.Devices.PointOfService.IBarcodeScanner";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ClaimScannerAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CheckHealthAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosHealthCheckLevel level,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetSupportedSymbologiesAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_UINT32 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *IsSymbologySupportedAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This,
                  UINT32 barcodeSymbology,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RetrieveStatisticsAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * statisticsCategories,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetSupportedProfiles )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsProfileSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This,
                  __RPC__in HSTRING profile,
                           __RPC__out boolean * isSupported
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StatusUpdated )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerStatusUpdatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StatusUpdated )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_Capabilities(This,value) )
    ( (This)->lpVtbl->ClaimScannerAsync(This,operation) )
    ( (This)->lpVtbl->CheckHealthAsync(This,level,operation) )
    ( (This)->lpVtbl->GetSupportedSymbologiesAsync(This,operation) )
    ( (This)->lpVtbl->IsSymbologySupportedAsync(This,barcodeSymbology,operation) )
    ( (This)->lpVtbl->RetrieveStatisticsAsync(This,statisticsCategories,operation) )
    ( (This)->lpVtbl->GetSupportedProfiles(This,value) )
    ( (This)->lpVtbl->IsProfileSupported(This,profile,isSupported) )
    ( (This)->lpVtbl->add_StatusUpdated(This,handler,token) )
    ( (This)->lpVtbl->remove_StatusUpdated(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IBarcodeScanner2[] = L"Windows.Devices.PointOfService.IBarcodeScanner2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VideoDeviceId )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VideoDeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScanner2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IBarcodeScannerCapabilities[] = L"Windows.Devices.PointOfService.IBarcodeScannerCapabilities";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PowerReportingType )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosPowerReportingType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStatisticsReportingSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStatisticsUpdatingSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsImagePreviewSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilitiesVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PowerReportingType(This,value) )
    ( (This)->lpVtbl->get_IsStatisticsReportingSupported(This,value) )
    ( (This)->lpVtbl->get_IsStatisticsUpdatingSupported(This,value) )
    ( (This)->lpVtbl->get_IsImagePreviewSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IBarcodeScannerCapabilities1[] = L"Windows.Devices.PointOfService.IBarcodeScannerCapabilities1";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities1Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities1 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities1 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities1 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities1 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities1 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities1 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSoftwareTriggerSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities1 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities1Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities1
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities1Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSoftwareTriggerSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities1;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IBarcodeScannerCapabilities2[] = L"Windows.Devices.PointOfService.IBarcodeScannerCapabilities2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsVideoPreviewSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsVideoPreviewSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerCapabilities2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IBarcodeScannerDataReceivedEventArgs[] = L"Windows.Devices.PointOfService.IBarcodeScannerDataReceivedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerDataReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerDataReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerDataReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerDataReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerDataReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerDataReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerDataReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Report )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerDataReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReport * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerDataReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerDataReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerDataReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Report(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerDataReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IBarcodeScannerErrorOccurredEventArgs[] = L"Windows.Devices.PointOfService.IBarcodeScannerErrorOccurredEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PartialInputData )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReport * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRetriable )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorData )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PartialInputData(This,value) )
    ( (This)->lpVtbl->get_IsRetriable(This,value) )
    ( (This)->lpVtbl->get_ErrorData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerErrorOccurredEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IBarcodeScannerImagePreviewReceivedEventArgs[] = L"Windows.Devices.PointOfService.IBarcodeScannerImagePreviewReceivedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerImagePreviewReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerImagePreviewReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerImagePreviewReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerImagePreviewReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerImagePreviewReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerImagePreviewReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerImagePreviewReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Preview )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerImagePreviewReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerImagePreviewReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerImagePreviewReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerImagePreviewReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Preview(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerImagePreviewReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IBarcodeScannerReport[] = L"Windows.Devices.PointOfService.IBarcodeScannerReport";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ScanDataType )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReport * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScanData )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReport * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScanDataLabel )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReport * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReport
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ScanDataType(This,value) )
    ( (This)->lpVtbl->get_ScanData(This,value) )
    ( (This)->lpVtbl->get_ScanDataLabel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IBarcodeScannerReportFactory[] = L"Windows.Devices.PointOfService.IBarcodeScannerReportFactory";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportFactory * This,
                  UINT32 scanDataType,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * scanData,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * scanDataLabel,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReport * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,scanDataType,scanData,scanDataLabel,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerReportFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IBarcodeScannerStatics[] = L"Windows.Devices.PointOfService.IBarcodeScannerStatics";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeScanner * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultAsync(This,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,result) )
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IBarcodeScannerStatics2[] = L"Windows.Devices.PointOfService.IBarcodeScannerStatics2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorWithConnectionTypes )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics2 * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosConnectionTypes connectionTypes,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelectorWithConnectionTypes(This,connectionTypes,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IBarcodeScannerStatusUpdatedEventArgs[] = L"Windows.Devices.PointOfService.IBarcodeScannerStatusUpdatedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatusUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatusUpdatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatusUpdatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatusUpdatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatusUpdatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatusUpdatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatusUpdatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatusUpdatedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CBarcodeScannerStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedStatus )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatusUpdatedEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatusUpdatedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatusUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatusUpdatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_ExtendedStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeScannerStatusUpdatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics[] = L"Windows.Devices.PointOfService.IBarcodeSymbologiesStatics";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Unknown )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ean8 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ean8Add2 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ean8Add5 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Eanv )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EanvAdd2 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EanvAdd5 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ean13 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ean13Add2 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ean13Add5 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Isbn )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsbnAdd5 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ismn )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsmnAdd2 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsmnAdd5 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Issn )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IssnAdd2 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IssnAdd5 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ean99 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ean99Add2 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ean99Add5 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Upca )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpcaAdd2 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpcaAdd5 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Upce )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpceAdd2 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpceAdd5 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpcCoupon )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TfStd )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TfDis )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TfInt )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TfInd )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TfMat )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TfIata )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gs1DatabarType1 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gs1DatabarType2 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gs1DatabarType3 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Code39 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Code39Ex )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Trioptic39 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Code32 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pzn )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Code93 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Code93Ex )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Code128 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gs1128 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gs1128Coupon )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UccEan128 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sisac )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Isbt )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Codabar )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Code11 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Msi )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Plessey )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Telepen )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Code16k )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CodablockA )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CodablockF )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Codablock128 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Code49 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Aztec )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataCode )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataMatrix )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HanXin )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Maxicode )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MicroPdf417 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MicroQr )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pdf417 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Qr )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MsTag )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ccab )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ccc )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tlc39 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AusPost )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanPost )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChinaPost )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DutchKix )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InfoMail )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItalianPost25 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItalianPost39 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_JapanPost )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KoreanPost )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SwedenPost )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UkPost )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsIntelligent )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsIntelligentPkg )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsPlanet )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsPostNet )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Us4StateFics )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OcrA )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OcrB )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Micr )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedBase )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetName )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics * This,
                  UINT32 scanDataType,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Unknown(This,value) )
    ( (This)->lpVtbl->get_Ean8(This,value) )
    ( (This)->lpVtbl->get_Ean8Add2(This,value) )
    ( (This)->lpVtbl->get_Ean8Add5(This,value) )
    ( (This)->lpVtbl->get_Eanv(This,value) )
    ( (This)->lpVtbl->get_EanvAdd2(This,value) )
    ( (This)->lpVtbl->get_EanvAdd5(This,value) )
    ( (This)->lpVtbl->get_Ean13(This,value) )
    ( (This)->lpVtbl->get_Ean13Add2(This,value) )
    ( (This)->lpVtbl->get_Ean13Add5(This,value) )
    ( (This)->lpVtbl->get_Isbn(This,value) )
    ( (This)->lpVtbl->get_IsbnAdd5(This,value) )
    ( (This)->lpVtbl->get_Ismn(This,value) )
    ( (This)->lpVtbl->get_IsmnAdd2(This,value) )
    ( (This)->lpVtbl->get_IsmnAdd5(This,value) )
    ( (This)->lpVtbl->get_Issn(This,value) )
    ( (This)->lpVtbl->get_IssnAdd2(This,value) )
    ( (This)->lpVtbl->get_IssnAdd5(This,value) )
    ( (This)->lpVtbl->get_Ean99(This,value) )
    ( (This)->lpVtbl->get_Ean99Add2(This,value) )
    ( (This)->lpVtbl->get_Ean99Add5(This,value) )
    ( (This)->lpVtbl->get_Upca(This,value) )
    ( (This)->lpVtbl->get_UpcaAdd2(This,value) )
    ( (This)->lpVtbl->get_UpcaAdd5(This,value) )
    ( (This)->lpVtbl->get_Upce(This,value) )
    ( (This)->lpVtbl->get_UpceAdd2(This,value) )
    ( (This)->lpVtbl->get_UpceAdd5(This,value) )
    ( (This)->lpVtbl->get_UpcCoupon(This,value) )
    ( (This)->lpVtbl->get_TfStd(This,value) )
    ( (This)->lpVtbl->get_TfDis(This,value) )
    ( (This)->lpVtbl->get_TfInt(This,value) )
    ( (This)->lpVtbl->get_TfInd(This,value) )
    ( (This)->lpVtbl->get_TfMat(This,value) )
    ( (This)->lpVtbl->get_TfIata(This,value) )
    ( (This)->lpVtbl->get_Gs1DatabarType1(This,value) )
    ( (This)->lpVtbl->get_Gs1DatabarType2(This,value) )
    ( (This)->lpVtbl->get_Gs1DatabarType3(This,value) )
    ( (This)->lpVtbl->get_Code39(This,value) )
    ( (This)->lpVtbl->get_Code39Ex(This,value) )
    ( (This)->lpVtbl->get_Trioptic39(This,value) )
    ( (This)->lpVtbl->get_Code32(This,value) )
    ( (This)->lpVtbl->get_Pzn(This,value) )
    ( (This)->lpVtbl->get_Code93(This,value) )
    ( (This)->lpVtbl->get_Code93Ex(This,value) )
    ( (This)->lpVtbl->get_Code128(This,value) )
    ( (This)->lpVtbl->get_Gs1128(This,value) )
    ( (This)->lpVtbl->get_Gs1128Coupon(This,value) )
    ( (This)->lpVtbl->get_UccEan128(This,value) )
    ( (This)->lpVtbl->get_Sisac(This,value) )
    ( (This)->lpVtbl->get_Isbt(This,value) )
    ( (This)->lpVtbl->get_Codabar(This,value) )
    ( (This)->lpVtbl->get_Code11(This,value) )
    ( (This)->lpVtbl->get_Msi(This,value) )
    ( (This)->lpVtbl->get_Plessey(This,value) )
    ( (This)->lpVtbl->get_Telepen(This,value) )
    ( (This)->lpVtbl->get_Code16k(This,value) )
    ( (This)->lpVtbl->get_CodablockA(This,value) )
    ( (This)->lpVtbl->get_CodablockF(This,value) )
    ( (This)->lpVtbl->get_Codablock128(This,value) )
    ( (This)->lpVtbl->get_Code49(This,value) )
    ( (This)->lpVtbl->get_Aztec(This,value) )
    ( (This)->lpVtbl->get_DataCode(This,value) )
    ( (This)->lpVtbl->get_DataMatrix(This,value) )
    ( (This)->lpVtbl->get_HanXin(This,value) )
    ( (This)->lpVtbl->get_Maxicode(This,value) )
    ( (This)->lpVtbl->get_MicroPdf417(This,value) )
    ( (This)->lpVtbl->get_MicroQr(This,value) )
    ( (This)->lpVtbl->get_Pdf417(This,value) )
    ( (This)->lpVtbl->get_Qr(This,value) )
    ( (This)->lpVtbl->get_MsTag(This,value) )
    ( (This)->lpVtbl->get_Ccab(This,value) )
    ( (This)->lpVtbl->get_Ccc(This,value) )
    ( (This)->lpVtbl->get_Tlc39(This,value) )
    ( (This)->lpVtbl->get_AusPost(This,value) )
    ( (This)->lpVtbl->get_CanPost(This,value) )
    ( (This)->lpVtbl->get_ChinaPost(This,value) )
    ( (This)->lpVtbl->get_DutchKix(This,value) )
    ( (This)->lpVtbl->get_InfoMail(This,value) )
    ( (This)->lpVtbl->get_ItalianPost25(This,value) )
    ( (This)->lpVtbl->get_ItalianPost39(This,value) )
    ( (This)->lpVtbl->get_JapanPost(This,value) )
    ( (This)->lpVtbl->get_KoreanPost(This,value) )
    ( (This)->lpVtbl->get_SwedenPost(This,value) )
    ( (This)->lpVtbl->get_UkPost(This,value) )
    ( (This)->lpVtbl->get_UsIntelligent(This,value) )
    ( (This)->lpVtbl->get_UsIntelligentPkg(This,value) )
    ( (This)->lpVtbl->get_UsPlanet(This,value) )
    ( (This)->lpVtbl->get_UsPostNet(This,value) )
    ( (This)->lpVtbl->get_Us4StateFics(This,value) )
    ( (This)->lpVtbl->get_OcrA(This,value) )
    ( (This)->lpVtbl->get_OcrB(This,value) )
    ( (This)->lpVtbl->get_Micr(This,value) )
    ( (This)->lpVtbl->get_ExtendedBase(This,value) )
    ( (This)->lpVtbl->GetName(This,scanDataType,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics2[] = L"Windows.Devices.PointOfService.IBarcodeSymbologiesStatics2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Gs1DWCode )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics2 * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Gs1DWCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologiesStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes[] = L"Windows.Devices.PointOfService.IBarcodeSymbologyAttributes";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsCheckDigitValidationEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCheckDigitValidationEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCheckDigitValidationSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCheckDigitTransmissionEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCheckDigitTransmissionEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCheckDigitTransmissionSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DecodeLength1 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DecodeLength1 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DecodeLength2 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DecodeLength2 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DecodeLengthKind )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CBarcodeSymbologyDecodeLengthKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DecodeLengthKind )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CBarcodeSymbologyDecodeLengthKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDecodeLengthSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributesVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsCheckDigitValidationEnabled(This,value) )
    ( (This)->lpVtbl->put_IsCheckDigitValidationEnabled(This,value) )
    ( (This)->lpVtbl->get_IsCheckDigitValidationSupported(This,value) )
    ( (This)->lpVtbl->get_IsCheckDigitTransmissionEnabled(This,value) )
    ( (This)->lpVtbl->put_IsCheckDigitTransmissionEnabled(This,value) )
    ( (This)->lpVtbl->get_IsCheckDigitTransmissionSupported(This,value) )
    ( (This)->lpVtbl->get_DecodeLength1(This,value) )
    ( (This)->lpVtbl->put_DecodeLength1(This,value) )
    ( (This)->lpVtbl->get_DecodeLength2(This,value) )
    ( (This)->lpVtbl->put_DecodeLength2(This,value) )
    ( (This)->lpVtbl->get_DecodeLengthKind(This,value) )
    ( (This)->lpVtbl->put_DecodeLengthKind(This,value) )
    ( (This)->lpVtbl->get_IsDecodeLengthSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ICashDrawer[] = L"Windows.Devices.PointOfService.ICashDrawer";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatus * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDrawerOpen )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DrawerEventSource )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ClaimDrawerAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedCashDrawer * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CheckHealthAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosHealthCheckLevel level,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetStatisticsAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * statisticsCategories,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StatusUpdated )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawer_Windows__CDevices__CPointOfService__CCashDrawerStatusUpdatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StatusUpdated )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_Capabilities(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_IsDrawerOpen(This,value) )
    ( (This)->lpVtbl->get_DrawerEventSource(This,value) )
    ( (This)->lpVtbl->ClaimDrawerAsync(This,operation) )
    ( (This)->lpVtbl->CheckHealthAsync(This,level,operation) )
    ( (This)->lpVtbl->GetStatisticsAsync(This,statisticsCategories,operation) )
    ( (This)->lpVtbl->add_StatusUpdated(This,handler,token) )
    ( (This)->lpVtbl->remove_StatusUpdated(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ICashDrawerCapabilities[] = L"Windows.Devices.PointOfService.ICashDrawerCapabilities";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PowerReportingType )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosPowerReportingType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStatisticsReportingSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStatisticsUpdatingSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStatusReportingSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStatusMultiDrawerDetectSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDrawerOpenSensorAvailable )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilitiesVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PowerReportingType(This,value) )
    ( (This)->lpVtbl->get_IsStatisticsReportingSupported(This,value) )
    ( (This)->lpVtbl->get_IsStatisticsUpdatingSupported(This,value) )
    ( (This)->lpVtbl->get_IsStatusReportingSupported(This,value) )
    ( (This)->lpVtbl->get_IsStatusMultiDrawerDetectSupported(This,value) )
    ( (This)->lpVtbl->get_IsDrawerOpenSensorAvailable(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ICashDrawerCloseAlarm[] = L"Windows.Devices.PointOfService.ICashDrawerCloseAlarm";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarmVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_AlarmTimeout )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlarmTimeout )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BeepFrequency )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BeepFrequency )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BeepDuration )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BeepDuration )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BeepDelay )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BeepDelay )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AlarmTimeoutExpired )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerCloseAlarm_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AlarmTimeoutExpired )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarmVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarmVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_AlarmTimeout(This,value) )
    ( (This)->lpVtbl->get_AlarmTimeout(This,value) )
    ( (This)->lpVtbl->put_BeepFrequency(This,value) )
    ( (This)->lpVtbl->get_BeepFrequency(This,value) )
    ( (This)->lpVtbl->put_BeepDuration(This,value) )
    ( (This)->lpVtbl->get_BeepDuration(This,value) )
    ( (This)->lpVtbl->put_BeepDelay(This,value) )
    ( (This)->lpVtbl->get_BeepDelay(This,value) )
    ( (This)->lpVtbl->add_AlarmTimeoutExpired(This,handler,token) )
    ( (This)->lpVtbl->remove_AlarmTimeoutExpired(This,token) )
    ( (This)->lpVtbl->StartAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ICashDrawerEventSource[] = L"Windows.Devices.PointOfService.ICashDrawerEventSource";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_DrawerClosed )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerClosedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DrawerClosed )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DrawerOpened )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CCashDrawerEventSource_Windows__CDevices__CPointOfService__CCashDrawerOpenedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DrawerOpened )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_DrawerClosed(This,handler,token) )
    ( (This)->lpVtbl->remove_DrawerClosed(This,token) )
    ( (This)->lpVtbl->add_DrawerOpened(This,handler,token) )
    ( (This)->lpVtbl->remove_DrawerOpened(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ICashDrawerEventSourceEventArgs[] = L"Windows.Devices.PointOfService.ICashDrawerEventSourceEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CashDrawer )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CashDrawer(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerEventSourceEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ICashDrawerStatics[] = L"Windows.Devices.PointOfService.ICashDrawerStatics";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CCashDrawer * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultAsync(This,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,result) )
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ICashDrawerStatics2[] = L"Windows.Devices.PointOfService.ICashDrawerStatics2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorWithConnectionTypes )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics2 * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosConnectionTypes connectionTypes,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelectorWithConnectionTypes(This,connectionTypes,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ICashDrawerStatus[] = L"Windows.Devices.PointOfService.ICashDrawerStatus";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatus * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatus * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatus * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatus * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatus * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatus * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StatusKind )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatus * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CCashDrawerStatusKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedStatus )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatus * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatus
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StatusKind(This,value) )
    ( (This)->lpVtbl->get_ExtendedStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatus;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ICashDrawerStatusUpdatedEventArgs[] = L"Windows.Devices.PointOfService.ICashDrawerStatusUpdatedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusUpdatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusUpdatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusUpdatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusUpdatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusUpdatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusUpdatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusUpdatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatus * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusUpdatedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusUpdatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerStatusUpdatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedBarcodeScanner[] = L"Windows.Devices.PointOfService.IClaimedBarcodeScanner";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsDisabledOnDataReceived )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDisabledOnDataReceived )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsDecodeDataEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDecodeDataEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *EnableAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DisableAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RetainDevice )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetActiveSymbologiesAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  __RPC__in_opt __FIIterable_1_UINT32 * symbologies,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ResetStatisticsAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * statisticsCategories,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateStatisticsAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  __RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * statistics,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetActiveProfileAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  __RPC__in HSTRING profile,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DataReceived )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerDataReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DataReceived )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TriggerPressed )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TriggerPressed )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TriggerReleased )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TriggerReleased )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReleaseDeviceRequested )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReleaseDeviceRequested )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ImagePreviewReceived )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerImagePreviewReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ImagePreviewReceived )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ErrorOccurred )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CBarcodeScannerErrorOccurredEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ErrorOccurred )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsDisabledOnDataReceived(This,value) )
    ( (This)->lpVtbl->get_IsDisabledOnDataReceived(This,value) )
    ( (This)->lpVtbl->put_IsDecodeDataEnabled(This,value) )
    ( (This)->lpVtbl->get_IsDecodeDataEnabled(This,value) )
    ( (This)->lpVtbl->EnableAsync(This,result) )
    ( (This)->lpVtbl->DisableAsync(This,result) )
    ( (This)->lpVtbl->RetainDevice(This) )
    ( (This)->lpVtbl->SetActiveSymbologiesAsync(This,symbologies,result) )
    ( (This)->lpVtbl->ResetStatisticsAsync(This,statisticsCategories,result) )
    ( (This)->lpVtbl->UpdateStatisticsAsync(This,statistics,result) )
    ( (This)->lpVtbl->SetActiveProfileAsync(This,profile,result) )
    ( (This)->lpVtbl->add_DataReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_DataReceived(This,token) )
    ( (This)->lpVtbl->add_TriggerPressed(This,handler,token) )
    ( (This)->lpVtbl->remove_TriggerPressed(This,token) )
    ( (This)->lpVtbl->add_TriggerReleased(This,handler,token) )
    ( (This)->lpVtbl->remove_TriggerReleased(This,token) )
    ( (This)->lpVtbl->add_ReleaseDeviceRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ReleaseDeviceRequested(This,token) )
    ( (This)->lpVtbl->add_ImagePreviewReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_ImagePreviewReceived(This,token) )
    ( (This)->lpVtbl->add_ErrorOccurred(This,handler,token) )
    ( (This)->lpVtbl->remove_ErrorOccurred(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedBarcodeScanner1[] = L"Windows.Devices.PointOfService.IClaimedBarcodeScanner1";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner1Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner1 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner1 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner1 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner1 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner1 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner1 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartSoftwareTriggerAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner1 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *StopSoftwareTriggerAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner1 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner1Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner1
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner1Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartSoftwareTriggerAsync(This,result) )
    ( (This)->lpVtbl->StopSoftwareTriggerAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner1;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedBarcodeScanner2[] = L"Windows.Devices.PointOfService.IClaimedBarcodeScanner2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetSymbologyAttributesAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner2 * This,
                  UINT32 barcodeSymbology,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CBarcodeSymbologyAttributes * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetSymbologyAttributesAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner2 * This,
                  UINT32 barcodeSymbology,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIBarcodeSymbologyAttributes * attributes,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetSymbologyAttributesAsync(This,barcodeSymbology,result) )
    ( (This)->lpVtbl->SetSymbologyAttributesAsync(This,barcodeSymbology,attributes,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedBarcodeScanner3[] = L"Windows.Devices.PointOfService.IClaimedBarcodeScanner3";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowVideoPreviewAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *HideVideoPreview )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3 * This
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsVideoPreviewShownOnEnable )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVideoPreviewShownOnEnable )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowVideoPreviewAsync(This,operation) )
    ( (This)->lpVtbl->HideVideoPreview(This) )
    ( (This)->lpVtbl->put_IsVideoPreviewShownOnEnable(This,value) )
    ( (This)->lpVtbl->get_IsVideoPreviewShownOnEnable(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedBarcodeScanner4[] = L"Windows.Devices.PointOfService.IClaimedBarcodeScanner4";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner4 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedBarcodeScanner_Windows__CDevices__CPointOfService__CClaimedBarcodeScannerClosedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner4 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner4Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner4
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Closed(This,handler,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScanner4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedBarcodeScannerClosedEventArgs[] = L"Windows.Devices.PointOfService.IClaimedBarcodeScannerClosedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerClosedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerClosedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerClosedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerClosedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerClosedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerClosedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerClosedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerClosedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerClosedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedBarcodeScannerClosedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedCashDrawer[] = L"Windows.Devices.PointOfService.IClaimedCashDrawer";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDrawerOpen )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CloseAlarm )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CICashDrawerCloseAlarm * * value
        );
    HRESULT ( STDMETHODCALLTYPE *OpenDrawerAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *EnableAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DisableAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RetainDeviceAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ResetStatisticsAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * statisticsCategories,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateStatisticsAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This,
                  __RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * statistics,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReleaseDeviceRequested )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReleaseDeviceRequested )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_IsDrawerOpen(This,value) )
    ( (This)->lpVtbl->get_CloseAlarm(This,value) )
    ( (This)->lpVtbl->OpenDrawerAsync(This,result) )
    ( (This)->lpVtbl->EnableAsync(This,result) )
    ( (This)->lpVtbl->DisableAsync(This,result) )
    ( (This)->lpVtbl->RetainDeviceAsync(This,result) )
    ( (This)->lpVtbl->ResetStatisticsAsync(This,statisticsCategories,result) )
    ( (This)->lpVtbl->UpdateStatisticsAsync(This,statistics,result) )
    ( (This)->lpVtbl->add_ReleaseDeviceRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ReleaseDeviceRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedCashDrawer2[] = L"Windows.Devices.PointOfService.IClaimedCashDrawer2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedCashDrawer_Windows__CDevices__CPointOfService__CClaimedCashDrawerClosedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Closed(This,handler,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawer2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedCashDrawerClosedEventArgs[] = L"Windows.Devices.PointOfService.IClaimedCashDrawerClosedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerClosedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerClosedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerClosedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerClosedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerClosedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerClosedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerClosedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerClosedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerClosedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedCashDrawerClosedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedJournalPrinter[] = L"Windows.Devices.PointOfService.IClaimedJournalPrinter";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedJournalPrinterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedJournalPrinter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedJournalPrinter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedJournalPrinter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedJournalPrinter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedJournalPrinter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedJournalPrinter * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateJob )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedJournalPrinter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJob * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedJournalPrinterVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedJournalPrinter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedJournalPrinterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateJob(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedJournalPrinter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedLineDisplay[] = L"Windows.Devices.PointOfService.IClaimedLineDisplay";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhysicalDeviceName )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhysicalDeviceDescription )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceControlDescription )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceControlVersion )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceServiceVersion )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultWindow )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RetainDevice )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReleaseDeviceRequested )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReleaseDeviceRequested )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_Capabilities(This,value) )
    ( (This)->lpVtbl->get_PhysicalDeviceName(This,value) )
    ( (This)->lpVtbl->get_PhysicalDeviceDescription(This,value) )
    ( (This)->lpVtbl->get_DeviceControlDescription(This,value) )
    ( (This)->lpVtbl->get_DeviceControlVersion(This,value) )
    ( (This)->lpVtbl->get_DeviceServiceVersion(This,value) )
    ( (This)->lpVtbl->get_DefaultWindow(This,value) )
    ( (This)->lpVtbl->RetainDevice(This) )
    ( (This)->lpVtbl->add_ReleaseDeviceRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ReleaseDeviceRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedLineDisplay2[] = L"Windows.Devices.PointOfService.IClaimedLineDisplay2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStatisticsAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * statisticsCategories,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CheckHealthAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosHealthCheckLevel level,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CheckPowerStatusAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StatusUpdated )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CLineDisplayStatusUpdatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StatusUpdated )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedScreenSizesInCharacters )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CSize * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxBitmapSizeInPixels )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedCharacterSets )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomGlyphs )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphs * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAttributes )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryUpdateAttributesAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * attributes,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetDescriptorAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                  UINT32 descriptor,
                  __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayDescriptorState descriptorState,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryClearDescriptorsAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryCreateWindowAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                  __x_ABI_CWindows_CFoundation_CRect viewport,
                  __x_ABI_CWindows_CFoundation_CSize windowSize,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayWindow * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TryStoreStorageFileBitmapAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * bitmap,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TryStoreStorageFileBitmapWithAlignmentAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * bitmap,
                  __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayHorizontalAlignment horizontalAlignment,
                  __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayVerticalAlignment verticalAlignment,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TryStoreStorageFileBitmapWithAlignmentAndWidthAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * bitmap,
                  __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayHorizontalAlignment horizontalAlignment,
                  __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayVerticalAlignment verticalAlignment,
                  INT32 widthInPixels,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayStoredBitmap * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetStatisticsAsync(This,statisticsCategories,result) )
    ( (This)->lpVtbl->CheckHealthAsync(This,level,result) )
    ( (This)->lpVtbl->CheckPowerStatusAsync(This,result) )
    ( (This)->lpVtbl->add_StatusUpdated(This,handler,token) )
    ( (This)->lpVtbl->remove_StatusUpdated(This,token) )
    ( (This)->lpVtbl->get_SupportedScreenSizesInCharacters(This,value) )
    ( (This)->lpVtbl->get_MaxBitmapSizeInPixels(This,value) )
    ( (This)->lpVtbl->get_SupportedCharacterSets(This,value) )
    ( (This)->lpVtbl->get_CustomGlyphs(This,value) )
    ( (This)->lpVtbl->GetAttributes(This,value) )
    ( (This)->lpVtbl->TryUpdateAttributesAsync(This,attributes,operation) )
    ( (This)->lpVtbl->TrySetDescriptorAsync(This,descriptor,descriptorState,operation) )
    ( (This)->lpVtbl->TryClearDescriptorsAsync(This,operation) )
    ( (This)->lpVtbl->TryCreateWindowAsync(This,viewport,windowSize,result) )
    ( (This)->lpVtbl->TryStoreStorageFileBitmapAsync(This,bitmap,result) )
    ( (This)->lpVtbl->TryStoreStorageFileBitmapWithAlignmentAsync(This,bitmap,horizontalAlignment,verticalAlignment,result) )
    ( (This)->lpVtbl->TryStoreStorageFileBitmapWithAlignmentAndWidthAsync(This,bitmap,horizontalAlignment,verticalAlignment,widthInPixels,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedLineDisplay3[] = L"Windows.Devices.PointOfService.IClaimedLineDisplay3";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay3 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedLineDisplay_Windows__CDevices__CPointOfService__CClaimedLineDisplayClosedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay3 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay3Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Closed(This,handler,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplay3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedLineDisplayClosedEventArgs[] = L"Windows.Devices.PointOfService.IClaimedLineDisplayClosedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayClosedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayClosedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayClosedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayClosedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayClosedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayClosedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayClosedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayClosedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayClosedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayClosedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedLineDisplayStatics[] = L"Windows.Devices.PointOfService.IClaimedLineDisplayStatics";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayStatics * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorWithConnectionTypes )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayStatics * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosConnectionTypes connectionTypes,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )
    ( (This)->lpVtbl->GetDeviceSelectorWithConnectionTypes(This,connectionTypes,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedLineDisplayStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedMagneticStripeReader[] = L"Windows.Devices.PointOfService.IClaimedMagneticStripeReader";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsDisabledOnDataReceived )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDisabledOnDataReceived )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsDecodeDataEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDecodeDataEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDeviceAuthenticated )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DataEncryptionAlgorithm )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataEncryptionAlgorithm )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TracksToRead )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderTrackIds value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TracksToRead )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderTrackIds * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsTransmitSentinelsEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTransmitSentinelsEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *EnableAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DisableAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RetainDevice )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetErrorReportingType )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderErrorReportingType value
        );
    HRESULT ( STDMETHODCALLTYPE *RetrieveDeviceAuthenticationDataAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *AuthenticateDeviceAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  UINT32 __responseTokenSize,
                                                __RPC__in_ecount_full(__responseTokenSize) BYTE * responseToken,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeAuthenticateDeviceAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  UINT32 __responseTokenSize,
                                                __RPC__in_ecount_full(__responseTokenSize) BYTE * responseToken,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateKeyAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  __RPC__in HSTRING key,
                  __RPC__in HSTRING keyName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ResetStatisticsAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * statisticsCategories,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateStatisticsAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  __RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * statistics,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BankCardDataReceived )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderBankCardDataReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BankCardDataReceived )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AamvaCardDataReceived )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderAamvaCardDataReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AamvaCardDataReceived )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_VendorSpecificDataReceived )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VendorSpecificDataReceived )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReleaseDeviceRequested )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReleaseDeviceRequested )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ErrorOccurred )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderErrorOccurredEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ErrorOccurred )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsDisabledOnDataReceived(This,value) )
    ( (This)->lpVtbl->get_IsDisabledOnDataReceived(This,value) )
    ( (This)->lpVtbl->put_IsDecodeDataEnabled(This,value) )
    ( (This)->lpVtbl->get_IsDecodeDataEnabled(This,value) )
    ( (This)->lpVtbl->get_IsDeviceAuthenticated(This,value) )
    ( (This)->lpVtbl->put_DataEncryptionAlgorithm(This,value) )
    ( (This)->lpVtbl->get_DataEncryptionAlgorithm(This,value) )
    ( (This)->lpVtbl->put_TracksToRead(This,value) )
    ( (This)->lpVtbl->get_TracksToRead(This,value) )
    ( (This)->lpVtbl->put_IsTransmitSentinelsEnabled(This,value) )
    ( (This)->lpVtbl->get_IsTransmitSentinelsEnabled(This,value) )
    ( (This)->lpVtbl->EnableAsync(This,result) )
    ( (This)->lpVtbl->DisableAsync(This,result) )
    ( (This)->lpVtbl->RetainDevice(This) )
    ( (This)->lpVtbl->SetErrorReportingType(This,value) )
    ( (This)->lpVtbl->RetrieveDeviceAuthenticationDataAsync(This,operation) )
    ( (This)->lpVtbl->AuthenticateDeviceAsync(This,__responseTokenSize,responseToken,result) )
    ( (This)->lpVtbl->DeAuthenticateDeviceAsync(This,__responseTokenSize,responseToken,result) )
    ( (This)->lpVtbl->UpdateKeyAsync(This,key,keyName,result) )
    ( (This)->lpVtbl->ResetStatisticsAsync(This,statisticsCategories,result) )
    ( (This)->lpVtbl->UpdateStatisticsAsync(This,statistics,result) )
    ( (This)->lpVtbl->add_BankCardDataReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_BankCardDataReceived(This,token) )
    ( (This)->lpVtbl->add_AamvaCardDataReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_AamvaCardDataReceived(This,token) )
    ( (This)->lpVtbl->add_VendorSpecificDataReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_VendorSpecificDataReceived(This,token) )
    ( (This)->lpVtbl->add_ReleaseDeviceRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ReleaseDeviceRequested(This,token) )
    ( (This)->lpVtbl->add_ErrorOccurred(This,handler,token) )
    ( (This)->lpVtbl->remove_ErrorOccurred(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedMagneticStripeReader2[] = L"Windows.Devices.PointOfService.IClaimedMagneticStripeReader2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReaderClosedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Closed(This,handler,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReader2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedMagneticStripeReaderClosedEventArgs[] = L"Windows.Devices.PointOfService.IClaimedMagneticStripeReaderClosedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderClosedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderClosedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderClosedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderClosedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderClosedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderClosedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderClosedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderClosedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderClosedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedMagneticStripeReaderClosedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedPosPrinter[] = L"Windows.Devices.PointOfService.IClaimedPosPrinter";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CharacterSet )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CharacterSet )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCoverOpen )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCharacterSetMappingEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCharacterSetMappingEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MapMode )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterMapMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MapMode )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterMapMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Receipt )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Slip )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Journal )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedJournalPrinter * * value
        );
    HRESULT ( STDMETHODCALLTYPE *EnableAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DisableAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RetainDeviceAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ResetStatisticsAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * statisticsCategories,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateStatisticsAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                  __RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * statistics,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReleaseDeviceRequested )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterReleaseDeviceRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReleaseDeviceRequested )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_CharacterSet(This,value) )
    ( (This)->lpVtbl->get_CharacterSet(This,value) )
    ( (This)->lpVtbl->get_IsCoverOpen(This,value) )
    ( (This)->lpVtbl->put_IsCharacterSetMappingEnabled(This,value) )
    ( (This)->lpVtbl->get_IsCharacterSetMappingEnabled(This,value) )
    ( (This)->lpVtbl->put_MapMode(This,value) )
    ( (This)->lpVtbl->get_MapMode(This,value) )
    ( (This)->lpVtbl->get_Receipt(This,value) )
    ( (This)->lpVtbl->get_Slip(This,value) )
    ( (This)->lpVtbl->get_Journal(This,value) )
    ( (This)->lpVtbl->EnableAsync(This,result) )
    ( (This)->lpVtbl->DisableAsync(This,result) )
    ( (This)->lpVtbl->RetainDeviceAsync(This,result) )
    ( (This)->lpVtbl->ResetStatisticsAsync(This,statisticsCategories,result) )
    ( (This)->lpVtbl->UpdateStatisticsAsync(This,statistics,result) )
    ( (This)->lpVtbl->add_ReleaseDeviceRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ReleaseDeviceRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedPosPrinter2[] = L"Windows.Devices.PointOfService.IClaimedPosPrinter2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CClaimedPosPrinter_Windows__CDevices__CPointOfService__CClaimedPosPrinterClosedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Closed(This,handler,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinter2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedPosPrinterClosedEventArgs[] = L"Windows.Devices.PointOfService.IClaimedPosPrinterClosedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterClosedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterClosedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterClosedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterClosedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterClosedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterClosedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterClosedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterClosedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterClosedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedPosPrinterClosedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedReceiptPrinter[] = L"Windows.Devices.PointOfService.IClaimedReceiptPrinter";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SidewaysMaxLines )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SidewaysMaxChars )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LinesToPaperCut )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageSize )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrintArea )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateJob )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinterVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SidewaysMaxLines(This,value) )
    ( (This)->lpVtbl->get_SidewaysMaxChars(This,value) )
    ( (This)->lpVtbl->get_LinesToPaperCut(This,value) )
    ( (This)->lpVtbl->get_PageSize(This,value) )
    ( (This)->lpVtbl->get_PrintArea(This,value) )
    ( (This)->lpVtbl->CreateJob(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedReceiptPrinter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IClaimedSlipPrinter[] = L"Windows.Devices.PointOfService.IClaimedSlipPrinter";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SidewaysMaxLines )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SidewaysMaxChars )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxLines )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LinesNearEndToEnd )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrintSide )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterPrintSide * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageSize )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrintArea )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    HRESULT ( STDMETHODCALLTYPE *OpenJaws )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This
        );
    HRESULT ( STDMETHODCALLTYPE *CloseJaws )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This
        );
    HRESULT ( STDMETHODCALLTYPE *InsertSlipAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan timeout,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveSlipAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan timeout,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ChangePrintSide )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterPrintSide printSide
        );
    HRESULT ( STDMETHODCALLTYPE *CreateJob )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinterVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SidewaysMaxLines(This,value) )
    ( (This)->lpVtbl->get_SidewaysMaxChars(This,value) )
    ( (This)->lpVtbl->get_MaxLines(This,value) )
    ( (This)->lpVtbl->get_LinesNearEndToEnd(This,value) )
    ( (This)->lpVtbl->get_PrintSide(This,value) )
    ( (This)->lpVtbl->get_PageSize(This,value) )
    ( (This)->lpVtbl->get_PrintArea(This,value) )
    ( (This)->lpVtbl->OpenJaws(This) )
    ( (This)->lpVtbl->CloseJaws(This) )
    ( (This)->lpVtbl->InsertSlipAsync(This,timeout,result) )
    ( (This)->lpVtbl->RemoveSlipAsync(This,timeout,result) )
    ( (This)->lpVtbl->ChangePrintSide(This,printSide) )
    ( (This)->lpVtbl->CreateJob(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIClaimedSlipPrinter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation[] = L"Windows.Devices.PointOfService.ICommonClaimedPosPrinterStation";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_CharactersPerLine )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CharactersPerLine )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LineHeight )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LineHeight )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LineSpacing )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LineSpacing )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LineWidth )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsLetterQuality )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsLetterQuality )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPaperNearEnd )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ColorCartridge )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterColorCartridge value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColorCartridge )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterColorCartridge * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCoverOpen )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCartridgeRemoved )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCartridgeEmpty )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHeadCleaning )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPaperEmpty )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReadyToPrint )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ValidateData )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation * This,
                  __RPC__in HSTRING data,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStationVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_CharactersPerLine(This,value) )
    ( (This)->lpVtbl->get_CharactersPerLine(This,value) )
    ( (This)->lpVtbl->put_LineHeight(This,value) )
    ( (This)->lpVtbl->get_LineHeight(This,value) )
    ( (This)->lpVtbl->put_LineSpacing(This,value) )
    ( (This)->lpVtbl->get_LineSpacing(This,value) )
    ( (This)->lpVtbl->get_LineWidth(This,value) )
    ( (This)->lpVtbl->put_IsLetterQuality(This,value) )
    ( (This)->lpVtbl->get_IsLetterQuality(This,value) )
    ( (This)->lpVtbl->get_IsPaperNearEnd(This,value) )
    ( (This)->lpVtbl->put_ColorCartridge(This,value) )
    ( (This)->lpVtbl->get_ColorCartridge(This,value) )
    ( (This)->lpVtbl->get_IsCoverOpen(This,value) )
    ( (This)->lpVtbl->get_IsCartridgeRemoved(This,value) )
    ( (This)->lpVtbl->get_IsCartridgeEmpty(This,value) )
    ( (This)->lpVtbl->get_IsHeadCleaning(This,value) )
    ( (This)->lpVtbl->get_IsPaperEmpty(This,value) )
    ( (This)->lpVtbl->get_IsReadyToPrint(This,value) )
    ( (This)->lpVtbl->ValidateData(This,data,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CICommonClaimedPosPrinterStation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities[] = L"Windows.Devices.PointOfService.ICommonPosPrintStationCapabilities";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsPrinterPresent )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDualColorSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColorCartridgeCapabilities )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterColorCapabilities * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CartridgeSensors )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterCartridgeSensors * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBoldSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsItalicSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsUnderlineSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDoubleHighPrintSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDoubleWidePrintSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDoubleHighDoubleWidePrintSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPaperEmptySensorSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPaperNearEndSensorSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedCharactersPerLine )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilitiesVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsPrinterPresent(This,value) )
    ( (This)->lpVtbl->get_IsDualColorSupported(This,value) )
    ( (This)->lpVtbl->get_ColorCartridgeCapabilities(This,value) )
    ( (This)->lpVtbl->get_CartridgeSensors(This,value) )
    ( (This)->lpVtbl->get_IsBoldSupported(This,value) )
    ( (This)->lpVtbl->get_IsItalicSupported(This,value) )
    ( (This)->lpVtbl->get_IsUnderlineSupported(This,value) )
    ( (This)->lpVtbl->get_IsDoubleHighPrintSupported(This,value) )
    ( (This)->lpVtbl->get_IsDoubleWidePrintSupported(This,value) )
    ( (This)->lpVtbl->get_IsDoubleHighDoubleWidePrintSupported(This,value) )
    ( (This)->lpVtbl->get_IsPaperEmptySensorSupported(This,value) )
    ( (This)->lpVtbl->get_IsPaperNearEndSensorSupported(This,value) )
    ( (This)->lpVtbl->get_SupportedCharactersPerLine(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CICommonPosPrintStationCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ICommonReceiptSlipCapabilities[] = L"Windows.Devices.PointOfService.ICommonReceiptSlipCapabilities";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsBarcodeSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBitmapSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsLeft90RotationSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRight90RotationSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Is180RotationSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPrintAreaSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RuledLineCapabilities )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterRuledLineCapabilities * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedBarcodeRotations )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedBitmapRotations )(
        __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CPointOfService__CPosPrinterRotation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilitiesVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsBarcodeSupported(This,value) )
    ( (This)->lpVtbl->get_IsBitmapSupported(This,value) )
    ( (This)->lpVtbl->get_IsLeft90RotationSupported(This,value) )
    ( (This)->lpVtbl->get_IsRight90RotationSupported(This,value) )
    ( (This)->lpVtbl->get_Is180RotationSupported(This,value) )
    ( (This)->lpVtbl->get_IsPrintAreaSupported(This,value) )
    ( (This)->lpVtbl->get_RuledLineCapabilities(This,value) )
    ( (This)->lpVtbl->get_SupportedBarcodeRotations(This,value) )
    ( (This)->lpVtbl->get_SupportedBitmapRotations(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CICommonReceiptSlipCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IJournalPrintJob[] = L"Windows.Devices.PointOfService.IJournalPrintJob";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrintJobVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrintJob * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrintJob * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrintJob * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrintJob * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrintJob * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrintJob * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Print )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrintJob * This,
                  __RPC__in HSTRING data,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * printOptions
        );
    HRESULT ( STDMETHODCALLTYPE *FeedPaperByLine )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrintJob * This,
                  INT32 lineCount
        );
    HRESULT ( STDMETHODCALLTYPE *FeedPaperByMapModeUnit )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrintJob * This,
                  INT32 distance
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrintJobVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrintJob
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrintJobVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Print(This,data,printOptions) )
    ( (This)->lpVtbl->FeedPaperByLine(This,lineCount) )
    ( (This)->lpVtbl->FeedPaperByMapModeUnit(This,distance) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrintJob;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IJournalPrinterCapabilities[] = L"Windows.Devices.PointOfService.IJournalPrinterCapabilities";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilitiesVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IJournalPrinterCapabilities2[] = L"Windows.Devices.PointOfService.IJournalPrinterCapabilities2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsReverseVideoSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStrikethroughSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSuperscriptSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSubscriptSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReversePaperFeedByLineSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReversePaperFeedByMapModeUnitSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsReverseVideoSupported(This,value) )
    ( (This)->lpVtbl->get_IsStrikethroughSupported(This,value) )
    ( (This)->lpVtbl->get_IsSuperscriptSupported(This,value) )
    ( (This)->lpVtbl->get_IsSubscriptSupported(This,value) )
    ( (This)->lpVtbl->get_IsReversePaperFeedByLineSupported(This,value) )
    ( (This)->lpVtbl->get_IsReversePaperFeedByMapModeUnitSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ILineDisplay[] = L"Windows.Devices.PointOfService.ILineDisplay";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhysicalDeviceName )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhysicalDeviceDescription )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceControlDescription )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceControlVersion )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceServiceVersion )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ClaimAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedLineDisplay * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_Capabilities(This,value) )
    ( (This)->lpVtbl->get_PhysicalDeviceName(This,value) )
    ( (This)->lpVtbl->get_PhysicalDeviceDescription(This,value) )
    ( (This)->lpVtbl->get_DeviceControlDescription(This,value) )
    ( (This)->lpVtbl->get_DeviceControlVersion(This,value) )
    ( (This)->lpVtbl->get_DeviceServiceVersion(This,value) )
    ( (This)->lpVtbl->ClaimAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ILineDisplay2[] = L"Windows.Devices.PointOfService.ILineDisplay2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CheckPowerStatusAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplayPowerStatus * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CheckPowerStatusAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CILineDisplay2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ILineDisplayAttributes[] = L"Windows.Devices.PointOfService.ILineDisplayAttributes";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsPowerNotifyEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsPowerNotifyEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Brightness )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Brightness )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BlinkRate )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BlinkRate )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScreenSizeInCharacters )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScreenSizeInCharacters )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                  __x_ABI_CWindows_CFoundation_CSize value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CharacterSet )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CharacterSet )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCharacterSetMappingEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCharacterSetMappingEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentWindow )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CurrentWindow )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributesVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsPowerNotifyEnabled(This,value) )
    ( (This)->lpVtbl->put_IsPowerNotifyEnabled(This,value) )
    ( (This)->lpVtbl->get_Brightness(This,value) )
    ( (This)->lpVtbl->put_Brightness(This,value) )
    ( (This)->lpVtbl->get_BlinkRate(This,value) )
    ( (This)->lpVtbl->put_BlinkRate(This,value) )
    ( (This)->lpVtbl->get_ScreenSizeInCharacters(This,value) )
    ( (This)->lpVtbl->put_ScreenSizeInCharacters(This,value) )
    ( (This)->lpVtbl->get_CharacterSet(This,value) )
    ( (This)->lpVtbl->put_CharacterSet(This,value) )
    ( (This)->lpVtbl->get_IsCharacterSetMappingEnabled(This,value) )
    ( (This)->lpVtbl->put_IsCharacterSetMappingEnabled(This,value) )
    ( (This)->lpVtbl->get_CurrentWindow(This,value) )
    ( (This)->lpVtbl->put_CurrentWindow(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayAttributes;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ILineDisplayCapabilities[] = L"Windows.Devices.PointOfService.ILineDisplayCapabilities";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsStatisticsReportingSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStatisticsUpdatingSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PowerReportingType )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosPowerReportingType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanChangeScreenSize )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanDisplayBitmaps )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanReadCharacterAtCursor )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanMapCharacterSets )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanDisplayCustomGlyphs )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanReverse )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayTextAttributeGranularity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanBlink )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayTextAttributeGranularity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanChangeBlinkRate )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBrightnessSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCursorSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHorizontalMarqueeSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVerticalMarqueeSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInterCharacterWaitSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedDescriptors )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedWindows )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilitiesVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsStatisticsReportingSupported(This,value) )
    ( (This)->lpVtbl->get_IsStatisticsUpdatingSupported(This,value) )
    ( (This)->lpVtbl->get_PowerReportingType(This,value) )
    ( (This)->lpVtbl->get_CanChangeScreenSize(This,value) )
    ( (This)->lpVtbl->get_CanDisplayBitmaps(This,value) )
    ( (This)->lpVtbl->get_CanReadCharacterAtCursor(This,value) )
    ( (This)->lpVtbl->get_CanMapCharacterSets(This,value) )
    ( (This)->lpVtbl->get_CanDisplayCustomGlyphs(This,value) )
    ( (This)->lpVtbl->get_CanReverse(This,value) )
    ( (This)->lpVtbl->get_CanBlink(This,value) )
    ( (This)->lpVtbl->get_CanChangeBlinkRate(This,value) )
    ( (This)->lpVtbl->get_IsBrightnessSupported(This,value) )
    ( (This)->lpVtbl->get_IsCursorSupported(This,value) )
    ( (This)->lpVtbl->get_IsHorizontalMarqueeSupported(This,value) )
    ( (This)->lpVtbl->get_IsVerticalMarqueeSupported(This,value) )
    ( (This)->lpVtbl->get_IsInterCharacterWaitSupported(This,value) )
    ( (This)->lpVtbl->get_SupportedDescriptors(This,value) )
    ( (This)->lpVtbl->get_SupportedWindows(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ILineDisplayCursor[] = L"Windows.Devices.PointOfService.ILineDisplayCursor";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanCustomize )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBlinkSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBlockSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHalfBlockSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsUnderlineSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReverseSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOtherSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAttributes )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryUpdateAttributesAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes * attributes,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanCustomize(This,value) )
    ( (This)->lpVtbl->get_IsBlinkSupported(This,value) )
    ( (This)->lpVtbl->get_IsBlockSupported(This,value) )
    ( (This)->lpVtbl->get_IsHalfBlockSupported(This,value) )
    ( (This)->lpVtbl->get_IsUnderlineSupported(This,value) )
    ( (This)->lpVtbl->get_IsReverseSupported(This,value) )
    ( (This)->lpVtbl->get_IsOtherSupported(This,value) )
    ( (This)->lpVtbl->GetAttributes(This,result) )
    ( (This)->lpVtbl->TryUpdateAttributesAsync(This,attributes,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ILineDisplayCursorAttributes[] = L"Windows.Devices.PointOfService.ILineDisplayCursorAttributes";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsBlinkEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsBlinkEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CursorType )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayCursorType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CursorType )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayCursorType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAutoAdvanceEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsAutoAdvanceEnabled )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributesVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsBlinkEnabled(This,value) )
    ( (This)->lpVtbl->put_IsBlinkEnabled(This,value) )
    ( (This)->lpVtbl->get_CursorType(This,value) )
    ( (This)->lpVtbl->put_CursorType(This,value) )
    ( (This)->lpVtbl->get_IsAutoAdvanceEnabled(This,value) )
    ( (This)->lpVtbl->put_IsAutoAdvanceEnabled(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->put_Position(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursorAttributes;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ILineDisplayCustomGlyphs[] = L"Windows.Devices.PointOfService.ILineDisplayCustomGlyphs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SizeInPixels )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedGlyphCodes )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphs * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryRedefineAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphs * This,
                  UINT32 glyphCode,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * glyphData,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SizeInPixels(This,value) )
    ( (This)->lpVtbl->get_SupportedGlyphCodes(This,value) )
    ( (This)->lpVtbl->TryRedefineAsync(This,glyphCode,glyphData,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCustomGlyphs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ILineDisplayMarquee[] = L"Windows.Devices.PointOfService.ILineDisplayMarquee";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarqueeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Format )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayMarqueeFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Format )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayMarqueeFormat value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RepeatWaitInterval )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RepeatWaitInterval )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScrollWaitInterval )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScrollWaitInterval )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    HRESULT ( STDMETHODCALLTYPE *TryStartScrollingAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayScrollDirection direction,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryStopScrollingAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarqueeVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarqueeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Format(This,value) )
    ( (This)->lpVtbl->put_Format(This,value) )
    ( (This)->lpVtbl->get_RepeatWaitInterval(This,value) )
    ( (This)->lpVtbl->put_RepeatWaitInterval(This,value) )
    ( (This)->lpVtbl->get_ScrollWaitInterval(This,value) )
    ( (This)->lpVtbl->put_ScrollWaitInterval(This,value) )
    ( (This)->lpVtbl->TryStartScrollingAsync(This,direction,operation) )
    ( (This)->lpVtbl->TryStopScrollingAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ILineDisplayStatics[] = L"Windows.Devices.PointOfService.ILineDisplayStatics";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CLineDisplay * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorWithConnectionTypes )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosConnectionTypes connectionTypes,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
    ( (This)->lpVtbl->GetDefaultAsync(This,result) )
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )
    ( (This)->lpVtbl->GetDeviceSelectorWithConnectionTypes(This,connectionTypes,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ILineDisplayStatics2[] = L"Windows.Devices.PointOfService.ILineDisplayStatics2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StatisticsCategorySelector )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelector * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StatisticsCategorySelector(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ILineDisplayStatisticsCategorySelector[] = L"Windows.Devices.PointOfService.ILineDisplayStatisticsCategorySelector";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelector * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelector * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelector * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelector * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelector * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelector * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllStatistics )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelector * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UnifiedPosStatistics )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelector * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManufacturerStatistics )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelector * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelectorVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelector
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelectorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllStatistics(This,value) )
    ( (This)->lpVtbl->get_UnifiedPosStatistics(This,value) )
    ( (This)->lpVtbl->get_ManufacturerStatistics(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatisticsCategorySelector;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ILineDisplayStatusUpdatedEventArgs[] = L"Windows.Devices.PointOfService.ILineDisplayStatusUpdatedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatusUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatusUpdatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatusUpdatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatusUpdatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatusUpdatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatusUpdatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatusUpdatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatusUpdatedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayPowerStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatusUpdatedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatusUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatusUpdatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStatusUpdatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ILineDisplayStoredBitmap[] = L"Windows.Devices.PointOfService.ILineDisplayStoredBitmap";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmap * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmap * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmap * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmap * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmap * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmap * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EscapeSequence )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmap * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryDeleteAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmap * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmapVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmap
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmapVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EscapeSequence(This,value) )
    ( (This)->lpVtbl->TryDeleteAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmap;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ILineDisplayWindow[] = L"Windows.Devices.PointOfService.ILineDisplayWindow";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SizeInCharacters )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InterCharacterWaitInterval )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InterCharacterWaitInterval )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    HRESULT ( STDMETHODCALLTYPE *TryRefreshAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryDisplayTextAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * This,
                  __RPC__in HSTRING text,
                  __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayTextAttribute displayAttribute,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryDisplayTextAtPositionAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * This,
                  __RPC__in HSTRING text,
                  __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayTextAttribute displayAttribute,
                  __x_ABI_CWindows_CFoundation_CPoint startPosition,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryDisplayTextNormalAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * This,
                  __RPC__in HSTRING text,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryScrollTextAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayScrollDirection direction,
                  UINT32 numberOfColumnsOrRows,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryClearTextAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindowVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindowVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SizeInCharacters(This,value) )
    ( (This)->lpVtbl->get_InterCharacterWaitInterval(This,value) )
    ( (This)->lpVtbl->put_InterCharacterWaitInterval(This,value) )
    ( (This)->lpVtbl->TryRefreshAsync(This,operation) )
    ( (This)->lpVtbl->TryDisplayTextAsync(This,text,displayAttribute,operation) )
    ( (This)->lpVtbl->TryDisplayTextAtPositionAsync(This,text,displayAttribute,startPosition,operation) )
    ( (This)->lpVtbl->TryDisplayTextNormalAsync(This,text,operation) )
    ( (This)->lpVtbl->TryScrollTextAsync(This,direction,numberOfColumnsOrRows,operation) )
    ( (This)->lpVtbl->TryClearTextAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ILineDisplayWindow2[] = L"Windows.Devices.PointOfService.ILineDisplayWindow2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Cursor )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayCursor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Marquee )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayMarquee * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadCharacterAtCursorAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryDisplayStoredBitmapAtCursorAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayStoredBitmap * bitmap,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryDisplayStorageFileBitmapAtCursorAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * bitmap,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryDisplayStorageFileBitmapAtCursorWithAlignmentAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * bitmap,
                  __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayHorizontalAlignment horizontalAlignment,
                  __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayVerticalAlignment verticalAlignment,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryDisplayStorageFileBitmapAtCursorWithAlignmentAndWidthAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * bitmap,
                  __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayHorizontalAlignment horizontalAlignment,
                  __x_ABI_CWindows_CDevices_CPointOfService_CLineDisplayVerticalAlignment verticalAlignment,
                  INT32 widthInPixels,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryDisplayStorageFileBitmapAtPointAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * bitmap,
                  __x_ABI_CWindows_CFoundation_CPoint offsetInPixels,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryDisplayStorageFileBitmapAtPointWithWidthAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * bitmap,
                  __x_ABI_CWindows_CFoundation_CPoint offsetInPixels,
                  INT32 widthInPixels,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Cursor(This,value) )
    ( (This)->lpVtbl->get_Marquee(This,value) )
    ( (This)->lpVtbl->ReadCharacterAtCursorAsync(This,result) )
    ( (This)->lpVtbl->TryDisplayStoredBitmapAtCursorAsync(This,bitmap,operation) )
    ( (This)->lpVtbl->TryDisplayStorageFileBitmapAtCursorAsync(This,bitmap,operation) )
    ( (This)->lpVtbl->TryDisplayStorageFileBitmapAtCursorWithAlignmentAsync(This,bitmap,horizontalAlignment,verticalAlignment,operation) )
    ( (This)->lpVtbl->TryDisplayStorageFileBitmapAtCursorWithAlignmentAndWidthAsync(This,bitmap,horizontalAlignment,verticalAlignment,widthInPixels,operation) )
    ( (This)->lpVtbl->TryDisplayStorageFileBitmapAtPointAsync(This,bitmap,offsetInPixels,operation) )
    ( (This)->lpVtbl->TryDisplayStorageFileBitmapAtPointWithWidthAsync(This,bitmap,offsetInPixels,widthInPixels,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CILineDisplayWindow2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IMagneticStripeReader[] = L"Windows.Devices.PointOfService.IMagneticStripeReader";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedCardTypes )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * This,
                   __RPC__out UINT32 * __valueSize,
                                                      __RPC__deref_out_ecount_full_opt(*(__valueSize)) UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceAuthenticationProtocol )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderAuthenticationProtocol * value
        );
    HRESULT ( STDMETHODCALLTYPE *CheckHealthAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosHealthCheckLevel level,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ClaimReaderAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedMagneticStripeReader * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RetrieveStatisticsAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * statisticsCategories,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetErrorReportingType )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderErrorReportingType * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StatusUpdated )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CMagneticStripeReader_Windows__CDevices__CPointOfService__CMagneticStripeReaderStatusUpdatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StatusUpdated )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_Capabilities(This,value) )
    ( (This)->lpVtbl->get_SupportedCardTypes(This,__valueSize,value) )
    ( (This)->lpVtbl->get_DeviceAuthenticationProtocol(This,value) )
    ( (This)->lpVtbl->CheckHealthAsync(This,level,operation) )
    ( (This)->lpVtbl->ClaimReaderAsync(This,operation) )
    ( (This)->lpVtbl->RetrieveStatisticsAsync(This,statisticsCategories,operation) )
    ( (This)->lpVtbl->GetErrorReportingType(This,value) )
    ( (This)->lpVtbl->add_StatusUpdated(This,handler,token) )
    ( (This)->lpVtbl->remove_StatusUpdated(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs[] = L"Windows.Devices.PointOfService.IMagneticStripeReaderAamvaCardDataReceivedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Report )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LicenseNumber )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Restrictions )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Class )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Endorsements )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BirthDate )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirstName )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Surname )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Suffix )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gender )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HairColor )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EyeColor )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Weight )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Address )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_City )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PostalCode )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Report(This,value) )
    ( (This)->lpVtbl->get_LicenseNumber(This,value) )
    ( (This)->lpVtbl->get_ExpirationDate(This,value) )
    ( (This)->lpVtbl->get_Restrictions(This,value) )
    ( (This)->lpVtbl->get_Class(This,value) )
    ( (This)->lpVtbl->get_Endorsements(This,value) )
    ( (This)->lpVtbl->get_BirthDate(This,value) )
    ( (This)->lpVtbl->get_FirstName(This,value) )
    ( (This)->lpVtbl->get_Surname(This,value) )
    ( (This)->lpVtbl->get_Suffix(This,value) )
    ( (This)->lpVtbl->get_Gender(This,value) )
    ( (This)->lpVtbl->get_HairColor(This,value) )
    ( (This)->lpVtbl->get_EyeColor(This,value) )
    ( (This)->lpVtbl->get_Height(This,value) )
    ( (This)->lpVtbl->get_Weight(This,value) )
    ( (This)->lpVtbl->get_Address(This,value) )
    ( (This)->lpVtbl->get_City(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_PostalCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderAamvaCardDataReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IMagneticStripeReaderBankCardDataReceivedEventArgs[] = L"Windows.Devices.PointOfService.IMagneticStripeReaderBankCardDataReceivedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Report )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccountNumber )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceCode )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirstName )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MiddleInitial )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Surname )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Suffix )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Report(This,value) )
    ( (This)->lpVtbl->get_AccountNumber(This,value) )
    ( (This)->lpVtbl->get_ExpirationDate(This,value) )
    ( (This)->lpVtbl->get_ServiceCode(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->get_FirstName(This,value) )
    ( (This)->lpVtbl->get_MiddleInitial(This,value) )
    ( (This)->lpVtbl->get_Surname(This,value) )
    ( (This)->lpVtbl->get_Suffix(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderBankCardDataReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IMagneticStripeReaderCapabilities[] = L"Windows.Devices.PointOfService.IMagneticStripeReaderCapabilities";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CardAuthentication )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedEncryptionAlgorithms )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthenticationLevel )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderAuthenticationLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsIsoSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsJisOneSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsJisTwoSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PowerReportingType )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosPowerReportingType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStatisticsReportingSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStatisticsUpdatingSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTrackDataMaskingSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTransmitSentinelsSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilitiesVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CardAuthentication(This,value) )
    ( (This)->lpVtbl->get_SupportedEncryptionAlgorithms(This,value) )
    ( (This)->lpVtbl->get_AuthenticationLevel(This,value) )
    ( (This)->lpVtbl->get_IsIsoSupported(This,value) )
    ( (This)->lpVtbl->get_IsJisOneSupported(This,value) )
    ( (This)->lpVtbl->get_IsJisTwoSupported(This,value) )
    ( (This)->lpVtbl->get_PowerReportingType(This,value) )
    ( (This)->lpVtbl->get_IsStatisticsReportingSupported(This,value) )
    ( (This)->lpVtbl->get_IsStatisticsUpdatingSupported(This,value) )
    ( (This)->lpVtbl->get_IsTrackDataMaskingSupported(This,value) )
    ( (This)->lpVtbl->get_IsTransmitSentinelsSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IMagneticStripeReaderCardTypesStatics[] = L"Windows.Devices.PointOfService.IMagneticStripeReaderCardTypesStatics";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Unknown )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bank )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Aamva )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedBase )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStatics * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Unknown(This,value) )
    ( (This)->lpVtbl->get_Bank(This,value) )
    ( (This)->lpVtbl->get_Aamva(This,value) )
    ( (This)->lpVtbl->get_ExtendedBase(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderCardTypesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IMagneticStripeReaderEncryptionAlgorithmsStatics[] = L"Windows.Devices.PointOfService.IMagneticStripeReaderEncryptionAlgorithmsStatics";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderEncryptionAlgorithmsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderEncryptionAlgorithmsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderEncryptionAlgorithmsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderEncryptionAlgorithmsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderEncryptionAlgorithmsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderEncryptionAlgorithmsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderEncryptionAlgorithmsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_None )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderEncryptionAlgorithmsStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TripleDesDukpt )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderEncryptionAlgorithmsStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedBase )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderEncryptionAlgorithmsStatics * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderEncryptionAlgorithmsStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderEncryptionAlgorithmsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderEncryptionAlgorithmsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_None(This,value) )
    ( (This)->lpVtbl->get_TripleDesDukpt(This,value) )
    ( (This)->lpVtbl->get_ExtendedBase(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderEncryptionAlgorithmsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IMagneticStripeReaderErrorOccurredEventArgs[] = L"Windows.Devices.PointOfService.IMagneticStripeReaderErrorOccurredEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Track1Status )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderTrackErrorType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Track2Status )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderTrackErrorType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Track3Status )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderTrackErrorType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Track4Status )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderTrackErrorType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorData )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PartialInputData )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Track1Status(This,value) )
    ( (This)->lpVtbl->get_Track2Status(This,value) )
    ( (This)->lpVtbl->get_Track3Status(This,value) )
    ( (This)->lpVtbl->get_Track4Status(This,value) )
    ( (This)->lpVtbl->get_ErrorData(This,value) )
    ( (This)->lpVtbl->get_PartialInputData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderErrorOccurredEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IMagneticStripeReaderReport[] = L"Windows.Devices.PointOfService.IMagneticStripeReaderReport";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CardType )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Track1 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Track2 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Track3 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Track4 )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CardAuthenticationData )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CardAuthenticationDataLength )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdditionalSecurityInformation )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReportVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CardType(This,value) )
    ( (This)->lpVtbl->get_Track1(This,value) )
    ( (This)->lpVtbl->get_Track2(This,value) )
    ( (This)->lpVtbl->get_Track3(This,value) )
    ( (This)->lpVtbl->get_Track4(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->get_CardAuthenticationData(This,value) )
    ( (This)->lpVtbl->get_CardAuthenticationDataLength(This,value) )
    ( (This)->lpVtbl->get_AdditionalSecurityInformation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IMagneticStripeReaderStatics[] = L"Windows.Devices.PointOfService.IMagneticStripeReaderStatics";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CMagneticStripeReader * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultAsync(This,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,result) )
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IMagneticStripeReaderStatics2[] = L"Windows.Devices.PointOfService.IMagneticStripeReaderStatics2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorWithConnectionTypes )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics2 * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosConnectionTypes connectionTypes,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelectorWithConnectionTypes(This,connectionTypes,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IMagneticStripeReaderStatusUpdatedEventArgs[] = L"Windows.Devices.PointOfService.IMagneticStripeReaderStatusUpdatedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatusUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatusUpdatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatusUpdatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatusUpdatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatusUpdatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatusUpdatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatusUpdatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatusUpdatedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CMagneticStripeReaderStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedStatus )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatusUpdatedEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatusUpdatedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatusUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatusUpdatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_ExtendedStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderStatusUpdatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IMagneticStripeReaderTrackData[] = L"Windows.Devices.PointOfService.IMagneticStripeReaderTrackData";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DiscretionaryData )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EncryptedData )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackDataVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackDataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Data(This,value) )
    ( (This)->lpVtbl->get_DiscretionaryData(This,value) )
    ( (This)->lpVtbl->get_EncryptedData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderTrackData;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs[] = L"Windows.Devices.PointOfService.IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVendorSpecificCardDataReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Report )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderReport * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVendorSpecificCardDataReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVendorSpecificCardDataReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Report(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IPosPrinter[] = L"Windows.Devices.PointOfService.IPosPrinter";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedCharacterSets )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedTypeFaces )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatus * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ClaimPrinterAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CClaimedPosPrinter * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CheckHealthAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosHealthCheckLevel level,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetStatisticsAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * statisticsCategories,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StatusUpdated )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPointOfService__CPosPrinter_Windows__CDevices__CPointOfService__CPosPrinterStatusUpdatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StatusUpdated )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_Capabilities(This,value) )
    ( (This)->lpVtbl->get_SupportedCharacterSets(This,value) )
    ( (This)->lpVtbl->get_SupportedTypeFaces(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->ClaimPrinterAsync(This,operation) )
    ( (This)->lpVtbl->CheckHealthAsync(This,level,operation) )
    ( (This)->lpVtbl->GetStatisticsAsync(This,statisticsCategories,operation) )
    ( (This)->lpVtbl->add_StatusUpdated(This,handler,token) )
    ( (This)->lpVtbl->remove_StatusUpdated(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IPosPrinter2[] = L"Windows.Devices.PointOfService.IPosPrinter2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SupportedBarcodeSymbologies )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFontProperty )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter2 * This,
                  __RPC__in HSTRING typeface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontProperty * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SupportedBarcodeSymbologies(This,value) )
    ( (This)->lpVtbl->GetFontProperty(This,typeface,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinter2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IPosPrinterCapabilities[] = L"Windows.Devices.PointOfService.IPosPrinterCapabilities";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PowerReportingType )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosPowerReportingType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStatisticsReportingSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStatisticsUpdatingSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultCharacterSet )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasCoverSensor )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanMapCharacterSet )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTransactionSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Receipt )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Slip )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Journal )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIJournalPrinterCapabilities * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilitiesVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PowerReportingType(This,value) )
    ( (This)->lpVtbl->get_IsStatisticsReportingSupported(This,value) )
    ( (This)->lpVtbl->get_IsStatisticsUpdatingSupported(This,value) )
    ( (This)->lpVtbl->get_DefaultCharacterSet(This,value) )
    ( (This)->lpVtbl->get_HasCoverSensor(This,value) )
    ( (This)->lpVtbl->get_CanMapCharacterSet(This,value) )
    ( (This)->lpVtbl->get_IsTransactionSupported(This,value) )
    ( (This)->lpVtbl->get_Receipt(This,value) )
    ( (This)->lpVtbl->get_Slip(This,value) )
    ( (This)->lpVtbl->get_Journal(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IPosPrinterCharacterSetIdsStatics[] = L"Windows.Devices.PointOfService.IPosPrinterCharacterSetIdsStatics";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCharacterSetIdsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCharacterSetIdsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCharacterSetIdsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCharacterSetIdsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCharacterSetIdsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCharacterSetIdsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCharacterSetIdsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Utf16LE )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCharacterSetIdsStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ascii )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCharacterSetIdsStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ansi )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCharacterSetIdsStatics * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCharacterSetIdsStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCharacterSetIdsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCharacterSetIdsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Utf16LE(This,value) )
    ( (This)->lpVtbl->get_Ascii(This,value) )
    ( (This)->lpVtbl->get_Ansi(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterCharacterSetIdsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IPosPrinterFontProperty[] = L"Windows.Devices.PointOfService.IPosPrinterFontProperty";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontPropertyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontProperty * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontProperty * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontProperty * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontProperty * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontProperty * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontProperty * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TypeFace )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontProperty * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsScalableToAnySize )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontProperty * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CharacterSizes )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontProperty * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CPointOfService__CSizeUInt32 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontPropertyVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontProperty
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontPropertyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TypeFace(This,value) )
    ( (This)->lpVtbl->get_IsScalableToAnySize(This,value) )
    ( (This)->lpVtbl->get_CharacterSizes(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterFontProperty;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IPosPrinterJob[] = L"Windows.Devices.PointOfService.IPosPrinterJob";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJobVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJob * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJob * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJob * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJob * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJob * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJob * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Print )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJob * This,
                  __RPC__in HSTRING data
        );
                    HRESULT ( STDMETHODCALLTYPE *PrintLine )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJob * This,
                  __RPC__in HSTRING data
        );
                    HRESULT ( STDMETHODCALLTYPE *PrintNewline )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJob * This
        );
    HRESULT ( STDMETHODCALLTYPE *ExecuteAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJob * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJobVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJob
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJobVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Print(This,data) )
    ( (This)->lpVtbl->PrintLine(This,data) )
    ( (This)->lpVtbl->PrintNewline(This) )
    ( (This)->lpVtbl->ExecuteAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterJob;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IPosPrinterPrintOptions[] = L"Windows.Devices.PointOfService.IPosPrinterPrintOptions";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TypeFace )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TypeFace )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CharacterHeight )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CharacterHeight )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bold )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Bold )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Italic )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Italic )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Underline )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Underline )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReverseVideo )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReverseVideo )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Strikethrough )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Strikethrough )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Superscript )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Superscript )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subscript )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Subscript )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DoubleWide )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DoubleWide )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DoubleHigh )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DoubleHigh )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Alignment )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterAlignment * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Alignment )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterAlignment value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CharacterSet )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CharacterSet )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * This,
                  UINT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptionsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TypeFace(This,value) )
    ( (This)->lpVtbl->put_TypeFace(This,value) )
    ( (This)->lpVtbl->get_CharacterHeight(This,value) )
    ( (This)->lpVtbl->put_CharacterHeight(This,value) )
    ( (This)->lpVtbl->get_Bold(This,value) )
    ( (This)->lpVtbl->put_Bold(This,value) )
    ( (This)->lpVtbl->get_Italic(This,value) )
    ( (This)->lpVtbl->put_Italic(This,value) )
    ( (This)->lpVtbl->get_Underline(This,value) )
    ( (This)->lpVtbl->put_Underline(This,value) )
    ( (This)->lpVtbl->get_ReverseVideo(This,value) )
    ( (This)->lpVtbl->put_ReverseVideo(This,value) )
    ( (This)->lpVtbl->get_Strikethrough(This,value) )
    ( (This)->lpVtbl->put_Strikethrough(This,value) )
    ( (This)->lpVtbl->get_Superscript(This,value) )
    ( (This)->lpVtbl->put_Superscript(This,value) )
    ( (This)->lpVtbl->get_Subscript(This,value) )
    ( (This)->lpVtbl->put_Subscript(This,value) )
    ( (This)->lpVtbl->get_DoubleWide(This,value) )
    ( (This)->lpVtbl->put_DoubleWide(This,value) )
    ( (This)->lpVtbl->get_DoubleHigh(This,value) )
    ( (This)->lpVtbl->put_DoubleHigh(This,value) )
    ( (This)->lpVtbl->get_Alignment(This,value) )
    ( (This)->lpVtbl->put_Alignment(This,value) )
    ( (This)->lpVtbl->get_CharacterSet(This,value) )
    ( (This)->lpVtbl->put_CharacterSet(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IPosPrinterReleaseDeviceRequestedEventArgs[] = L"Windows.Devices.PointOfService.IPosPrinterReleaseDeviceRequestedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterReleaseDeviceRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterReleaseDeviceRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterReleaseDeviceRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterReleaseDeviceRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterReleaseDeviceRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterReleaseDeviceRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterReleaseDeviceRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterReleaseDeviceRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterReleaseDeviceRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterReleaseDeviceRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterReleaseDeviceRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IPosPrinterStatics[] = L"Windows.Devices.PointOfService.IPosPrinterStatics";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPointOfService__CPosPrinter * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultAsync(This,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,result) )
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IPosPrinterStatics2[] = L"Windows.Devices.PointOfService.IPosPrinterStatics2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorWithConnectionTypes )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics2 * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosConnectionTypes connectionTypes,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelectorWithConnectionTypes(This,connectionTypes,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IPosPrinterStatus[] = L"Windows.Devices.PointOfService.IPosPrinterStatus";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatus * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatus * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatus * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatus * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatus * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatus * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StatusKind )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatus * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterStatusKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedStatus )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatus * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatus
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StatusKind(This,value) )
    ( (This)->lpVtbl->get_ExtendedStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatus;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IPosPrinterStatusUpdatedEventArgs[] = L"Windows.Devices.PointOfService.IPosPrinterStatusUpdatedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusUpdatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusUpdatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusUpdatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusUpdatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusUpdatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusUpdatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusUpdatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatus * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusUpdatedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusUpdatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterStatusUpdatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IReceiptOrSlipJob[] = L"Windows.Devices.PointOfService.IReceiptOrSlipJob";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJobVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetBarcodeRotation )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterRotation value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPrintRotation )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterRotation value,
                  boolean includeBitmaps
        );
    HRESULT ( STDMETHODCALLTYPE *SetPrintArea )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
                    HRESULT ( STDMETHODCALLTYPE *SetBitmap )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                  UINT32 bitmapNumber,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * bitmap,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterAlignment alignment
        );
                    HRESULT ( STDMETHODCALLTYPE *SetBitmapCustomWidthStandardAlign )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                  UINT32 bitmapNumber,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * bitmap,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterAlignment alignment,
                  UINT32 width
        );
                    HRESULT ( STDMETHODCALLTYPE *SetCustomAlignedBitmap )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                  UINT32 bitmapNumber,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * bitmap,
                  UINT32 alignmentDistance
        );
                    HRESULT ( STDMETHODCALLTYPE *SetBitmapCustomWidthCustomAlign )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                  UINT32 bitmapNumber,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * bitmap,
                  UINT32 alignmentDistance,
                  UINT32 width
        );
    HRESULT ( STDMETHODCALLTYPE *PrintSavedBitmap )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                  UINT32 bitmapNumber
        );
    HRESULT ( STDMETHODCALLTYPE *DrawRuledLine )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                  __RPC__in HSTRING positionList,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterLineDirection lineDirection,
                  UINT32 lineWidth,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterLineStyle lineStyle,
                  UINT32 lineColor
        );
    HRESULT ( STDMETHODCALLTYPE *PrintBarcode )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                  __RPC__in HSTRING data,
                  UINT32 symbology,
                  UINT32 height,
                  UINT32 width,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterBarcodeTextPosition textPosition,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterAlignment alignment
        );
    HRESULT ( STDMETHODCALLTYPE *PrintBarcodeCustomAlign )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                  __RPC__in HSTRING data,
                  UINT32 symbology,
                  UINT32 height,
                  UINT32 width,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterBarcodeTextPosition textPosition,
                  UINT32 alignmentDistance
        );
                    HRESULT ( STDMETHODCALLTYPE *PrintBitmap )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * bitmap,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterAlignment alignment
        );
                    HRESULT ( STDMETHODCALLTYPE *PrintBitmapCustomWidthStandardAlign )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * bitmap,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterAlignment alignment,
                  UINT32 width
        );
                    HRESULT ( STDMETHODCALLTYPE *PrintCustomAlignedBitmap )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * bitmap,
                  UINT32 alignmentDistance
        );
                    HRESULT ( STDMETHODCALLTYPE *PrintBitmapCustomWidthCustomAlign )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * bitmap,
                  UINT32 alignmentDistance,
                  UINT32 width
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJobVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJobVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetBarcodeRotation(This,value) )
    ( (This)->lpVtbl->SetPrintRotation(This,value,includeBitmaps) )
    ( (This)->lpVtbl->SetPrintArea(This,value) )
    ( (This)->lpVtbl->SetBitmap(This,bitmapNumber,bitmap,alignment) )
    ( (This)->lpVtbl->SetBitmapCustomWidthStandardAlign(This,bitmapNumber,bitmap,alignment,width) )
    ( (This)->lpVtbl->SetCustomAlignedBitmap(This,bitmapNumber,bitmap,alignmentDistance) )
    ( (This)->lpVtbl->SetBitmapCustomWidthCustomAlign(This,bitmapNumber,bitmap,alignmentDistance,width) )
    ( (This)->lpVtbl->PrintSavedBitmap(This,bitmapNumber) )
    ( (This)->lpVtbl->DrawRuledLine(This,positionList,lineDirection,lineWidth,lineStyle,lineColor) )
    ( (This)->lpVtbl->PrintBarcode(This,data,symbology,height,width,textPosition,alignment) )
    ( (This)->lpVtbl->PrintBarcodeCustomAlign(This,data,symbology,height,width,textPosition,alignmentDistance) )
    ( (This)->lpVtbl->PrintBitmap(This,bitmap,alignment) )
    ( (This)->lpVtbl->PrintBitmapCustomWidthStandardAlign(This,bitmap,alignment,width) )
    ( (This)->lpVtbl->PrintCustomAlignedBitmap(This,bitmap,alignmentDistance) )
    ( (This)->lpVtbl->PrintBitmapCustomWidthCustomAlign(This,bitmap,alignmentDistance,width) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIReceiptOrSlipJob;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IReceiptPrintJob[] = L"Windows.Devices.PointOfService.IReceiptPrintJob";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJobVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *MarkFeed )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob * This,
                  __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterMarkFeedKind kind
        );
                    HRESULT ( STDMETHODCALLTYPE *CutPaper )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob * This,
                  DOUBLE percentage
        );
                    HRESULT ( STDMETHODCALLTYPE *CutPaperDefault )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJobVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJobVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->MarkFeed(This,kind) )
    ( (This)->lpVtbl->CutPaper(This,percentage) )
    ( (This)->lpVtbl->CutPaperDefault(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IReceiptPrintJob2[] = L"Windows.Devices.PointOfService.IReceiptPrintJob2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StampPaper )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *Print )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2 * This,
                  __RPC__in HSTRING data,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * printOptions
        );
    HRESULT ( STDMETHODCALLTYPE *FeedPaperByLine )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2 * This,
                  INT32 lineCount
        );
    HRESULT ( STDMETHODCALLTYPE *FeedPaperByMapModeUnit )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2 * This,
                  INT32 distance
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StampPaper(This) )
    ( (This)->lpVtbl->Print(This,data,printOptions) )
    ( (This)->lpVtbl->FeedPaperByLine(This,lineCount) )
    ( (This)->lpVtbl->FeedPaperByMapModeUnit(This,distance) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrintJob2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IReceiptPrinterCapabilities[] = L"Windows.Devices.PointOfService.IReceiptPrinterCapabilities";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanCutPaper )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStampSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MarkFeedCapabilities )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CPosPrinterMarkFeedCapabilities * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilitiesVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanCutPaper(This,value) )
    ( (This)->lpVtbl->get_IsStampSupported(This,value) )
    ( (This)->lpVtbl->get_MarkFeedCapabilities(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IReceiptPrinterCapabilities2[] = L"Windows.Devices.PointOfService.IReceiptPrinterCapabilities2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsReverseVideoSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStrikethroughSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSuperscriptSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSubscriptSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReversePaperFeedByLineSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReversePaperFeedByMapModeUnitSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsReverseVideoSupported(This,value) )
    ( (This)->lpVtbl->get_IsStrikethroughSupported(This,value) )
    ( (This)->lpVtbl->get_IsSuperscriptSupported(This,value) )
    ( (This)->lpVtbl->get_IsSubscriptSupported(This,value) )
    ( (This)->lpVtbl->get_IsReversePaperFeedByLineSupported(This,value) )
    ( (This)->lpVtbl->get_IsReversePaperFeedByMapModeUnitSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIReceiptPrinterCapabilities2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ISlipPrintJob[] = L"Windows.Devices.PointOfService.ISlipPrintJob";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrintJobVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrintJob * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrintJob * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrintJob * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrintJob * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrintJob * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrintJob * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Print )(
        __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrintJob * This,
                  __RPC__in HSTRING data,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPointOfService_CIPosPrinterPrintOptions * printOptions
        );
    HRESULT ( STDMETHODCALLTYPE *FeedPaperByLine )(
        __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrintJob * This,
                  INT32 lineCount
        );
    HRESULT ( STDMETHODCALLTYPE *FeedPaperByMapModeUnit )(
        __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrintJob * This,
                  INT32 distance
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrintJobVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrintJob
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrintJobVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Print(This,data,printOptions) )
    ( (This)->lpVtbl->FeedPaperByLine(This,lineCount) )
    ( (This)->lpVtbl->FeedPaperByMapModeUnit(This,distance) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CISlipPrintJob;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ISlipPrinterCapabilities[] = L"Windows.Devices.PointOfService.ISlipPrinterCapabilities";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsFullLengthSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBothSidesPrintingSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilitiesVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsFullLengthSupported(This,value) )
    ( (This)->lpVtbl->get_IsBothSidesPrintingSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_ISlipPrinterCapabilities2[] = L"Windows.Devices.PointOfService.ISlipPrinterCapabilities2";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsReverseVideoSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStrikethroughSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSuperscriptSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSubscriptSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReversePaperFeedByLineSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReversePaperFeedByMapModeUnitSupported )(
        __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2Vtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsReverseVideoSupported(This,value) )
    ( (This)->lpVtbl->get_IsStrikethroughSupported(This,value) )
    ( (This)->lpVtbl->get_IsSuperscriptSupported(This,value) )
    ( (This)->lpVtbl->get_IsSubscriptSupported(This,value) )
    ( (This)->lpVtbl->get_IsReversePaperFeedByLineSupported(This,value) )
    ( (This)->lpVtbl->get_IsReversePaperFeedByMapModeUnitSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CISlipPrinterCapabilities2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IUnifiedPosErrorData[] = L"Windows.Devices.PointOfService.IUnifiedPosErrorData";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Severity )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosErrorSeverity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosErrorReason * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedReason )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Message(This,value) )
    ( (This)->lpVtbl->get_Severity(This,value) )
    ( (This)->lpVtbl->get_Reason(This,value) )
    ( (This)->lpVtbl->get_ExtendedReason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_PointOfService_IUnifiedPosErrorDataFactory[] = L"Windows.Devices.PointOfService.IUnifiedPosErrorDataFactory";
typedef struct __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataFactory * This,
                  __RPC__in HSTRING message,
                  __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosErrorSeverity severity,
                  __x_ABI_CWindows_CDevices_CPointOfService_CUnifiedPosErrorReason reason,
                  UINT32 extendedReason,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorData * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,message,severity,reason,extendedReason,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPointOfService_CIUnifiedPosErrorDataFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_BarcodeScanner[] = L"Windows.Devices.PointOfService.BarcodeScanner";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_BarcodeScannerCapabilities[] = L"Windows.Devices.PointOfService.BarcodeScannerCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_BarcodeScannerDataReceivedEventArgs[] = L"Windows.Devices.PointOfService.BarcodeScannerDataReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_BarcodeScannerErrorOccurredEventArgs[] = L"Windows.Devices.PointOfService.BarcodeScannerErrorOccurredEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_BarcodeScannerImagePreviewReceivedEventArgs[] = L"Windows.Devices.PointOfService.BarcodeScannerImagePreviewReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_BarcodeScannerReport[] = L"Windows.Devices.PointOfService.BarcodeScannerReport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_BarcodeScannerStatusUpdatedEventArgs[] = L"Windows.Devices.PointOfService.BarcodeScannerStatusUpdatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_BarcodeSymbologies[] = L"Windows.Devices.PointOfService.BarcodeSymbologies";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_BarcodeSymbologyAttributes[] = L"Windows.Devices.PointOfService.BarcodeSymbologyAttributes";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_CashDrawer[] = L"Windows.Devices.PointOfService.CashDrawer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_CashDrawerCapabilities[] = L"Windows.Devices.PointOfService.CashDrawerCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_CashDrawerCloseAlarm[] = L"Windows.Devices.PointOfService.CashDrawerCloseAlarm";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_CashDrawerClosedEventArgs[] = L"Windows.Devices.PointOfService.CashDrawerClosedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_CashDrawerEventSource[] = L"Windows.Devices.PointOfService.CashDrawerEventSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_CashDrawerOpenedEventArgs[] = L"Windows.Devices.PointOfService.CashDrawerOpenedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_CashDrawerStatus[] = L"Windows.Devices.PointOfService.CashDrawerStatus";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_CashDrawerStatusUpdatedEventArgs[] = L"Windows.Devices.PointOfService.CashDrawerStatusUpdatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_ClaimedBarcodeScanner[] = L"Windows.Devices.PointOfService.ClaimedBarcodeScanner";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_ClaimedBarcodeScannerClosedEventArgs[] = L"Windows.Devices.PointOfService.ClaimedBarcodeScannerClosedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_ClaimedCashDrawer[] = L"Windows.Devices.PointOfService.ClaimedCashDrawer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_ClaimedCashDrawerClosedEventArgs[] = L"Windows.Devices.PointOfService.ClaimedCashDrawerClosedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_ClaimedJournalPrinter[] = L"Windows.Devices.PointOfService.ClaimedJournalPrinter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_ClaimedLineDisplay[] = L"Windows.Devices.PointOfService.ClaimedLineDisplay";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_ClaimedLineDisplayClosedEventArgs[] = L"Windows.Devices.PointOfService.ClaimedLineDisplayClosedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_ClaimedMagneticStripeReader[] = L"Windows.Devices.PointOfService.ClaimedMagneticStripeReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_ClaimedMagneticStripeReaderClosedEventArgs[] = L"Windows.Devices.PointOfService.ClaimedMagneticStripeReaderClosedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_ClaimedPosPrinter[] = L"Windows.Devices.PointOfService.ClaimedPosPrinter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_ClaimedPosPrinterClosedEventArgs[] = L"Windows.Devices.PointOfService.ClaimedPosPrinterClosedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_ClaimedReceiptPrinter[] = L"Windows.Devices.PointOfService.ClaimedReceiptPrinter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_ClaimedSlipPrinter[] = L"Windows.Devices.PointOfService.ClaimedSlipPrinter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_JournalPrintJob[] = L"Windows.Devices.PointOfService.JournalPrintJob";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_JournalPrinterCapabilities[] = L"Windows.Devices.PointOfService.JournalPrinterCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_LineDisplay[] = L"Windows.Devices.PointOfService.LineDisplay";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_LineDisplayAttributes[] = L"Windows.Devices.PointOfService.LineDisplayAttributes";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_LineDisplayCapabilities[] = L"Windows.Devices.PointOfService.LineDisplayCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_LineDisplayCursor[] = L"Windows.Devices.PointOfService.LineDisplayCursor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_LineDisplayCursorAttributes[] = L"Windows.Devices.PointOfService.LineDisplayCursorAttributes";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_LineDisplayCustomGlyphs[] = L"Windows.Devices.PointOfService.LineDisplayCustomGlyphs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_LineDisplayMarquee[] = L"Windows.Devices.PointOfService.LineDisplayMarquee";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_LineDisplayStatisticsCategorySelector[] = L"Windows.Devices.PointOfService.LineDisplayStatisticsCategorySelector";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_LineDisplayStatusUpdatedEventArgs[] = L"Windows.Devices.PointOfService.LineDisplayStatusUpdatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_LineDisplayStoredBitmap[] = L"Windows.Devices.PointOfService.LineDisplayStoredBitmap";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_LineDisplayWindow[] = L"Windows.Devices.PointOfService.LineDisplayWindow";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_MagneticStripeReader[] = L"Windows.Devices.PointOfService.MagneticStripeReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_MagneticStripeReaderAamvaCardDataReceivedEventArgs[] = L"Windows.Devices.PointOfService.MagneticStripeReaderAamvaCardDataReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_MagneticStripeReaderBankCardDataReceivedEventArgs[] = L"Windows.Devices.PointOfService.MagneticStripeReaderBankCardDataReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_MagneticStripeReaderCapabilities[] = L"Windows.Devices.PointOfService.MagneticStripeReaderCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_MagneticStripeReaderCardTypes[] = L"Windows.Devices.PointOfService.MagneticStripeReaderCardTypes";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_MagneticStripeReaderEncryptionAlgorithms[] = L"Windows.Devices.PointOfService.MagneticStripeReaderEncryptionAlgorithms";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_MagneticStripeReaderErrorOccurredEventArgs[] = L"Windows.Devices.PointOfService.MagneticStripeReaderErrorOccurredEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_MagneticStripeReaderReport[] = L"Windows.Devices.PointOfService.MagneticStripeReaderReport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_MagneticStripeReaderStatusUpdatedEventArgs[] = L"Windows.Devices.PointOfService.MagneticStripeReaderStatusUpdatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_MagneticStripeReaderTrackData[] = L"Windows.Devices.PointOfService.MagneticStripeReaderTrackData";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs[] = L"Windows.Devices.PointOfService.MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_PosPrinter[] = L"Windows.Devices.PointOfService.PosPrinter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_PosPrinterCapabilities[] = L"Windows.Devices.PointOfService.PosPrinterCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_PosPrinterCharacterSetIds[] = L"Windows.Devices.PointOfService.PosPrinterCharacterSetIds";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_PosPrinterFontProperty[] = L"Windows.Devices.PointOfService.PosPrinterFontProperty";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_PosPrinterPrintOptions[] = L"Windows.Devices.PointOfService.PosPrinterPrintOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_PosPrinterReleaseDeviceRequestedEventArgs[] = L"Windows.Devices.PointOfService.PosPrinterReleaseDeviceRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_PosPrinterStatus[] = L"Windows.Devices.PointOfService.PosPrinterStatus";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_PosPrinterStatusUpdatedEventArgs[] = L"Windows.Devices.PointOfService.PosPrinterStatusUpdatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_ReceiptPrintJob[] = L"Windows.Devices.PointOfService.ReceiptPrintJob";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_ReceiptPrinterCapabilities[] = L"Windows.Devices.PointOfService.ReceiptPrinterCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_SlipPrintJob[] = L"Windows.Devices.PointOfService.SlipPrintJob";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_SlipPrinterCapabilities[] = L"Windows.Devices.PointOfService.SlipPrinterCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_PointOfService_UnifiedPosErrorData[] = L"Windows.Devices.PointOfService.UnifiedPosErrorData";
       
       
#pragma clang diagnostic pop
