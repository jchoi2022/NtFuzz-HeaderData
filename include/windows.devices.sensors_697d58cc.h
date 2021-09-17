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
#include "Windows.Graphics.Display.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer2 __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer3 __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer3;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer4 __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer4;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerDeviceId __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerDeviceId;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading2 __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingChangedEventArgs __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerShakenEventArgs __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerShakenEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics2 __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics3 __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics3;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReport __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReport;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangedEventArgs __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStatics __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStatics;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorTriggerDetails __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorTriggerDetails;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAltimeter __x_ABI_CWindows_CDevices_CSensors_CIAltimeter;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAltimeter2 __x_ABI_CWindows_CDevices_CSensors_CIAltimeter2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading2 __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingChangedEventArgs __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIAltimeterStatics __x_ABI_CWindows_CDevices_CSensors_CIAltimeterStatics;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIBarometer __x_ABI_CWindows_CDevices_CSensors_CIBarometer;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIBarometer2 __x_ABI_CWindows_CDevices_CSensors_CIBarometer2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading2 __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingChangedEventArgs __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics2 __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CICompass __x_ABI_CWindows_CDevices_CSensors_CICompass;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CICompass2 __x_ABI_CWindows_CDevices_CSensors_CICompass2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CICompass3 __x_ABI_CWindows_CDevices_CSensors_CICompass3;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CICompassDeviceId __x_ABI_CWindows_CDevices_CSensors_CICompassDeviceId;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CICompassReading __x_ABI_CWindows_CDevices_CSensors_CICompassReading;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CICompassReading2 __x_ABI_CWindows_CDevices_CSensors_CICompassReading2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CICompassReadingChangedEventArgs __x_ABI_CWindows_CDevices_CSensors_CICompassReadingChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CICompassReadingHeadingAccuracy __x_ABI_CWindows_CDevices_CSensors_CICompassReadingHeadingAccuracy;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CICompassStatics __x_ABI_CWindows_CDevices_CSensors_CICompassStatics;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CICompassStatics2 __x_ABI_CWindows_CDevices_CSensors_CICompassStatics2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometer __x_ABI_CWindows_CDevices_CSensors_CIGyrometer;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometer2 __x_ABI_CWindows_CDevices_CSensors_CIGyrometer2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometer3 __x_ABI_CWindows_CDevices_CSensors_CIGyrometer3;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometerDeviceId __x_ABI_CWindows_CDevices_CSensors_CIGyrometerDeviceId;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading2 __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingChangedEventArgs __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics2 __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReading __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReading;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorReadingChangedEventArgs __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorReadingChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStatics __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStatics;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometer __x_ABI_CWindows_CDevices_CSensors_CIInclinometer;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometer2 __x_ABI_CWindows_CDevices_CSensors_CIInclinometer2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometer3 __x_ABI_CWindows_CDevices_CSensors_CIInclinometer3;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerDeviceId __x_ABI_CWindows_CDevices_CSensors_CIInclinometerDeviceId;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading2 __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingChangedEventArgs __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingYawAccuracy __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingYawAccuracy;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics2 __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics3 __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics3;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics4 __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics4;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CILightSensor __x_ABI_CWindows_CDevices_CSensors_CILightSensor;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CILightSensor2 __x_ABI_CWindows_CDevices_CSensors_CILightSensor2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CILightSensorDeviceId __x_ABI_CWindows_CDevices_CSensors_CILightSensorDeviceId;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading2 __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingChangedEventArgs __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics2 __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer2 __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer3 __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer3;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerDeviceId __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerDeviceId;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading2 __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingChangedEventArgs __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics2 __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor2 __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor3 __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor3;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorDeviceId __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorDeviceId;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading2 __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingChangedEventArgs __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingYawAccuracy __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingYawAccuracy;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics2 __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics3 __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics3;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics4 __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics4;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIPedometer __x_ABI_CWindows_CDevices_CSensors_CIPedometer;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIPedometer2 __x_ABI_CWindows_CDevices_CSensors_CIPedometer2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIPedometerDataThresholdFactory __x_ABI_CWindows_CDevices_CSensors_CIPedometerDataThresholdFactory;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingChangedEventArgs __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics2 __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorDataThresholdFactory __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorDataThresholdFactory;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingChangedEventArgs __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics2 __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CISensorDataThreshold __x_ABI_CWindows_CDevices_CSensors_CISensorDataThreshold;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetails __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetails;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternion __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternion;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor2 __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor2;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorDeviceId __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorDeviceId;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorOrientationChangedEventArgs __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorOrientationChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics2 __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics2;
typedef interface __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReading __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReading;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReading;
typedef struct __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl;
interface __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReading
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReading __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReading;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReading;
typedef struct __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReading **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl;
interface __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReading
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport;
typedef struct __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReport * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReport * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReportVtbl;
interface __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReportVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport;
typedef struct __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReportVtbl;
interface __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReportVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CDevices_CSensors_CActivityType;
typedef interface __FIIterator_1_Windows__CDevices__CSensors__CActivityType __FIIterator_1_Windows__CDevices__CSensors__CActivityType;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSensors__CActivityType;
typedef struct __FIIterator_1_Windows__CDevices__CSensors__CActivityTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__out enum __x_ABI_CWindows_CDevices_CSensors_CActivityType *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSensors_CActivityType *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSensors__CActivityTypeVtbl;
interface __FIIterator_1_Windows__CDevices__CSensors__CActivityType
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSensors__CActivityTypeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSensors__CActivityType __FIIterable_1_Windows__CDevices__CSensors__CActivityType;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSensors__CActivityType;
typedef struct __FIIterable_1_Windows__CDevices__CSensors__CActivityTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivityType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivityType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivityType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivityType * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSensors__CActivityType **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSensors__CActivityTypeVtbl;
interface __FIIterable_1_Windows__CDevices__CSensors__CActivityType
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSensors__CActivityTypeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CSensors__CPedometerReading __FIIterator_1_Windows__CDevices__CSensors__CPedometerReading;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSensors__CPedometerReading;
typedef struct __FIIterator_1_Windows__CDevices__CSensors__CPedometerReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSensors__CPedometerReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CPedometerReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CPedometerReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CPedometerReading * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CPedometerReading * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSensors__CPedometerReadingVtbl;
interface __FIIterator_1_Windows__CDevices__CSensors__CPedometerReading
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSensors__CPedometerReadingVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSensors__CPedometerReading __FIIterable_1_Windows__CDevices__CSensors__CPedometerReading;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSensors__CPedometerReading;
typedef struct __FIIterable_1_Windows__CDevices__CSensors__CPedometerReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSensors__CPedometerReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CPedometerReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CPedometerReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CPedometerReading * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSensors__CPedometerReading **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSensors__CPedometerReadingVtbl;
interface __FIIterable_1_Windows__CDevices__CSensors__CPedometerReading
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSensors__CPedometerReadingVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReading __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReading;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReading;
typedef struct __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReading * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReading * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReading * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReading * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReading * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReading * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReading * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReadingVtbl;
interface __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReading
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReadingVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSensors__CProximitySensorReading __FIIterable_1_Windows__CDevices__CSensors__CProximitySensorReading;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSensors__CProximitySensorReading;
typedef struct __FIIterable_1_Windows__CDevices__CSensors__CProximitySensorReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSensors__CProximitySensorReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CProximitySensorReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CProximitySensorReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CProximitySensorReading * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CProximitySensorReading * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CProximitySensorReading * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CProximitySensorReading * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSensors__CProximitySensorReading **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSensors__CProximitySensorReadingVtbl;
interface __FIIterable_1_Windows__CDevices__CSensors__CProximitySensorReading
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSensors__CProximitySensorReadingVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CDevices_CSensors_CPedometerStepKind;
typedef interface __FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading __FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading;
EXTERN_C const IID IID___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading;
typedef struct __FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__out enum __x_ABI_CWindows_CDevices_CSensors_CPedometerStepKind *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * *value);
    END_INTERFACE
} __FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReadingVtbl;
interface __FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading
{
    CONST_VTBL struct __FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReadingVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading;
typedef struct __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__out __FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReadingVtbl;
interface __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReadingVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading __FIIterable_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading;
typedef struct __FIIterable_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReadingVtbl;
interface __FIIterable_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReadingVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading;
EXTERN_C const IID IID___FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading;
typedef struct __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CSensors_CPedometerStepKind key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__in enum __x_ABI_CWindows_CDevices_CSensors_CPedometerStepKind key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__deref_out_opt __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading **secondPartition);
    END_INTERFACE
} __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReadingVtbl;
interface __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading
{
    CONST_VTBL struct __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReadingVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading;
typedef struct __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                       __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl;
interface __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport;
typedef struct __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReport * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This,
                       __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReport * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReport * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReportVtbl;
interface __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReportVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSensors__CActivityType __FIVectorView_1_Windows__CDevices__CSensors__CActivityType;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSensors__CActivityType;
typedef struct __FIVectorView_1_Windows__CDevices__CSensors__CActivityTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CDevices_CSensors_CActivityType *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This,
                       enum __x_ABI_CWindows_CDevices_CSensors_CActivityType item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSensors_CActivityType *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSensors__CActivityTypeVtbl;
interface __FIVectorView_1_Windows__CDevices__CSensors__CActivityType
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSensors__CActivityTypeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading;
typedef struct __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This,
                       __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReadingVtbl;
interface __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReadingVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReading __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReading;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReading;
typedef struct __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReading * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReading * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReading * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReading * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReading * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReading * This,
                       __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReading * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReadingVtbl;
interface __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReading
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReadingVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CDevices__CSensors__CActivityType __FIVector_1_Windows__CDevices__CSensors__CActivityType;
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CSensors__CActivityType;
typedef struct __FIVector_1_Windows__CDevices__CSensors__CActivityTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CSensors_CActivityType *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                   unsigned int index,
                            __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CSensors_CActivityType *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSensors__CActivityType **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CSensors_CActivityType item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CSensors_CActivityType item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CSensors_CActivityType item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__in enum __x_ABI_CWindows_CDevices_CSensors_CActivityType item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSensors_CActivityType *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CDevices_CSensors_CActivityType *value);
    END_INTERFACE
} __FIVector_1_Windows__CDevices__CSensors__CActivityTypeVtbl;
interface __FIVector_1_Windows__CDevices__CSensors__CActivityType
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CSensors__CActivityTypeVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CAccelerometer __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CAccelerometer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CAccelerometer;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CAccelerometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CAccelerometer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CAccelerometer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CAccelerometer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CAccelerometer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CAccelerometerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CAccelerometer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CAccelerometerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CAccelerometer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CAccelerometer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensor __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensor;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensor;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensor * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensor * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensorVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensor
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensor *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensor **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensorReading __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensorReading;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensorReading;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensorReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensorReading * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensorReading
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensorReading *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CActivitySensorReading **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CBarometer __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CBarometer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CBarometer;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CBarometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CBarometer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CBarometer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CBarometer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CBarometer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CBarometerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CBarometer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CBarometerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CBarometer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CBarometer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIBarometer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCompass __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCompass;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCompass;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCompassVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCompass * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCompass * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCompass * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCompass * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCompassVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCompass
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCompassVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompassVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCompass *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCompass **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CICompass * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompassVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompassVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CGyrometer __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CGyrometer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CGyrometer;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CGyrometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CGyrometer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CGyrometer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CGyrometer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CGyrometer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CGyrometerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CGyrometer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CGyrometerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CGyrometer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CGyrometer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIGyrometer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleReading __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleReading;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleReading;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleReading * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleReading * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleReadingVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleReading
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleReadingVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleReading *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleReading **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReading * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReadingVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReadingVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleSensor __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleSensor;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleSensor;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleSensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleSensor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleSensor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleSensor * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleSensor * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleSensorVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleSensor
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleSensorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleSensor *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CHingeAngleSensor **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensorVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensorVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CInclinometer __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CInclinometer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CInclinometer;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CInclinometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CInclinometer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CInclinometer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CInclinometer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CInclinometer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CInclinometerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CInclinometer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CInclinometerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CInclinometer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CInclinometer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CLightSensor __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CLightSensor;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CLightSensor;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CLightSensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CLightSensor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CLightSensor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CLightSensor * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CLightSensor * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CLightSensorVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CLightSensor
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CLightSensorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CLightSensor *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CLightSensor **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CILightSensor * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensorVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensorVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CMagnetometer __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CMagnetometer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CMagnetometer;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CMagnetometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CMagnetometer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CMagnetometer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CMagnetometer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CMagnetometer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CMagnetometerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CMagnetometer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CMagnetometerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CMagnetometer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CMagnetometer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__COrientationSensor __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__COrientationSensor;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__COrientationSensor;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__COrientationSensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__COrientationSensor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__COrientationSensor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__COrientationSensor * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__COrientationSensor * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__COrientationSensorVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__COrientationSensor
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__COrientationSensorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__COrientationSensor *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__COrientationSensor **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensorVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensorVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CPedometer __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CPedometer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CPedometer;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CPedometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CPedometer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CPedometer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CPedometer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CPedometer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CPedometerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CPedometer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CPedometerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CPedometer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CPedometer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CIPedometer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CSimpleOrientationSensor __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CSimpleOrientationSensor;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CSimpleOrientationSensor;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CSimpleOrientationSensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CSimpleOrientationSensor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CSimpleOrientationSensor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CSimpleOrientationSensor * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CSimpleOrientationSensor * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CSimpleOrientationSensorVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CSimpleOrientationSensor
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CSimpleOrientationSensorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CSimpleOrientationSensor *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CSimpleOrientationSensor **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor * This, __RPC__out __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensorVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensorVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * This, __RPC__out __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReadingVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReadingVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * This, __RPC__out __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReadingVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReadingVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerReadingChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerReadingChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerReadingChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerReadingChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerReadingChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerReadingChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerReadingChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerReadingChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerReadingChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerReadingChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerShakenEventArgs __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerShakenEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerShakenEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerShakenEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerShakenEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerShakenEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerShakenEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerShakenEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerShakenEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerShakenEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerShakenEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerShakenEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CActivitySensor_Windows__CDevices__CSensors__CActivitySensorReadingChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSensors__CActivitySensor_Windows__CDevices__CSensors__CActivitySensorReadingChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSensors__CActivitySensor_Windows__CDevices__CSensors__CActivitySensorReadingChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CActivitySensor_Windows__CDevices__CSensors__CActivitySensorReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CActivitySensor_Windows__CDevices__CSensors__CActivitySensorReadingChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CActivitySensor_Windows__CDevices__CSensors__CActivitySensorReadingChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CActivitySensor_Windows__CDevices__CSensors__CActivitySensorReadingChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CActivitySensor_Windows__CDevices__CSensors__CActivitySensorReadingChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSensors__CActivitySensor_Windows__CDevices__CSensors__CActivitySensorReadingChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CActivitySensor_Windows__CDevices__CSensors__CActivitySensorReadingChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CActivitySensor_Windows__CDevices__CSensors__CActivitySensorReadingChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CAltimeter_Windows__CDevices__CSensors__CAltimeterReadingChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSensors__CAltimeter_Windows__CDevices__CSensors__CAltimeterReadingChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSensors__CAltimeter_Windows__CDevices__CSensors__CAltimeterReadingChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CAltimeter_Windows__CDevices__CSensors__CAltimeterReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CAltimeter_Windows__CDevices__CSensors__CAltimeterReadingChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CAltimeter_Windows__CDevices__CSensors__CAltimeterReadingChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CAltimeter_Windows__CDevices__CSensors__CAltimeterReadingChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CAltimeter_Windows__CDevices__CSensors__CAltimeterReadingChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIAltimeter * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSensors__CAltimeter_Windows__CDevices__CSensors__CAltimeterReadingChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CAltimeter_Windows__CDevices__CSensors__CAltimeterReadingChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CAltimeter_Windows__CDevices__CSensors__CAltimeterReadingChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CBarometer_Windows__CDevices__CSensors__CBarometerReadingChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSensors__CBarometer_Windows__CDevices__CSensors__CBarometerReadingChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSensors__CBarometer_Windows__CDevices__CSensors__CBarometerReadingChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CBarometer_Windows__CDevices__CSensors__CBarometerReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CBarometer_Windows__CDevices__CSensors__CBarometerReadingChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CBarometer_Windows__CDevices__CSensors__CBarometerReadingChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CBarometer_Windows__CDevices__CSensors__CBarometerReadingChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CBarometer_Windows__CDevices__CSensors__CBarometerReadingChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIBarometer * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSensors__CBarometer_Windows__CDevices__CSensors__CBarometerReadingChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CBarometer_Windows__CDevices__CSensors__CBarometerReadingChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CBarometer_Windows__CDevices__CSensors__CBarometerReadingChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CCompass_Windows__CDevices__CSensors__CCompassReadingChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSensors__CCompass_Windows__CDevices__CSensors__CCompassReadingChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSensors__CCompass_Windows__CDevices__CSensors__CCompassReadingChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CCompass_Windows__CDevices__CSensors__CCompassReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CCompass_Windows__CDevices__CSensors__CCompassReadingChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CCompass_Windows__CDevices__CSensors__CCompassReadingChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CCompass_Windows__CDevices__CSensors__CCompassReadingChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CCompass_Windows__CDevices__CSensors__CCompassReadingChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CICompass * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CICompassReadingChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSensors__CCompass_Windows__CDevices__CSensors__CCompassReadingChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CCompass_Windows__CDevices__CSensors__CCompassReadingChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CCompass_Windows__CDevices__CSensors__CCompassReadingChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CGyrometer_Windows__CDevices__CSensors__CGyrometerReadingChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSensors__CGyrometer_Windows__CDevices__CSensors__CGyrometerReadingChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSensors__CGyrometer_Windows__CDevices__CSensors__CGyrometerReadingChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CGyrometer_Windows__CDevices__CSensors__CGyrometerReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CGyrometer_Windows__CDevices__CSensors__CGyrometerReadingChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CGyrometer_Windows__CDevices__CSensors__CGyrometerReadingChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CGyrometer_Windows__CDevices__CSensors__CGyrometerReadingChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CGyrometer_Windows__CDevices__CSensors__CGyrometerReadingChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIGyrometer * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSensors__CGyrometer_Windows__CDevices__CSensors__CGyrometerReadingChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CGyrometer_Windows__CDevices__CSensors__CGyrometerReadingChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CGyrometer_Windows__CDevices__CSensors__CGyrometerReadingChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CHingeAngleSensor_Windows__CDevices__CSensors__CHingeAngleSensorReadingChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSensors__CHingeAngleSensor_Windows__CDevices__CSensors__CHingeAngleSensorReadingChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSensors__CHingeAngleSensor_Windows__CDevices__CSensors__CHingeAngleSensorReadingChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CHingeAngleSensor_Windows__CDevices__CSensors__CHingeAngleSensorReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CHingeAngleSensor_Windows__CDevices__CSensors__CHingeAngleSensorReadingChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CHingeAngleSensor_Windows__CDevices__CSensors__CHingeAngleSensorReadingChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CHingeAngleSensor_Windows__CDevices__CSensors__CHingeAngleSensorReadingChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CHingeAngleSensor_Windows__CDevices__CSensors__CHingeAngleSensorReadingChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorReadingChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSensors__CHingeAngleSensor_Windows__CDevices__CSensors__CHingeAngleSensorReadingChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CHingeAngleSensor_Windows__CDevices__CSensors__CHingeAngleSensorReadingChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CHingeAngleSensor_Windows__CDevices__CSensors__CHingeAngleSensorReadingChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CInclinometer_Windows__CDevices__CSensors__CInclinometerReadingChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSensors__CInclinometer_Windows__CDevices__CSensors__CInclinometerReadingChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSensors__CInclinometer_Windows__CDevices__CSensors__CInclinometerReadingChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CInclinometer_Windows__CDevices__CSensors__CInclinometerReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CInclinometer_Windows__CDevices__CSensors__CInclinometerReadingChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CInclinometer_Windows__CDevices__CSensors__CInclinometerReadingChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CInclinometer_Windows__CDevices__CSensors__CInclinometerReadingChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CInclinometer_Windows__CDevices__CSensors__CInclinometerReadingChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSensors__CInclinometer_Windows__CDevices__CSensors__CInclinometerReadingChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CInclinometer_Windows__CDevices__CSensors__CInclinometerReadingChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CInclinometer_Windows__CDevices__CSensors__CInclinometerReadingChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CLightSensor_Windows__CDevices__CSensors__CLightSensorReadingChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSensors__CLightSensor_Windows__CDevices__CSensors__CLightSensorReadingChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSensors__CLightSensor_Windows__CDevices__CSensors__CLightSensorReadingChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CLightSensor_Windows__CDevices__CSensors__CLightSensorReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CLightSensor_Windows__CDevices__CSensors__CLightSensorReadingChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CLightSensor_Windows__CDevices__CSensors__CLightSensorReadingChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CLightSensor_Windows__CDevices__CSensors__CLightSensorReadingChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CLightSensor_Windows__CDevices__CSensors__CLightSensorReadingChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CILightSensor * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSensors__CLightSensor_Windows__CDevices__CSensors__CLightSensorReadingChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CLightSensor_Windows__CDevices__CSensors__CLightSensorReadingChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CLightSensor_Windows__CDevices__CSensors__CLightSensorReadingChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CMagnetometer_Windows__CDevices__CSensors__CMagnetometerReadingChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSensors__CMagnetometer_Windows__CDevices__CSensors__CMagnetometerReadingChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSensors__CMagnetometer_Windows__CDevices__CSensors__CMagnetometerReadingChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CMagnetometer_Windows__CDevices__CSensors__CMagnetometerReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CMagnetometer_Windows__CDevices__CSensors__CMagnetometerReadingChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CMagnetometer_Windows__CDevices__CSensors__CMagnetometerReadingChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CMagnetometer_Windows__CDevices__CSensors__CMagnetometerReadingChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CMagnetometer_Windows__CDevices__CSensors__CMagnetometerReadingChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSensors__CMagnetometer_Windows__CDevices__CSensors__CMagnetometerReadingChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CMagnetometer_Windows__CDevices__CSensors__CMagnetometerReadingChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CMagnetometer_Windows__CDevices__CSensors__CMagnetometerReadingChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSensors__COrientationSensor_Windows__CDevices__CSensors__COrientationSensorReadingChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSensors__COrientationSensor_Windows__CDevices__CSensors__COrientationSensorReadingChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSensors__COrientationSensor_Windows__CDevices__CSensors__COrientationSensorReadingChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSensors__COrientationSensor_Windows__CDevices__CSensors__COrientationSensorReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__COrientationSensor_Windows__CDevices__CSensors__COrientationSensorReadingChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__COrientationSensor_Windows__CDevices__CSensors__COrientationSensorReadingChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__COrientationSensor_Windows__CDevices__CSensors__COrientationSensorReadingChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__COrientationSensor_Windows__CDevices__CSensors__COrientationSensorReadingChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSensors__COrientationSensor_Windows__CDevices__CSensors__COrientationSensorReadingChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSensors__COrientationSensor_Windows__CDevices__CSensors__COrientationSensorReadingChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSensors__COrientationSensor_Windows__CDevices__CSensors__COrientationSensorReadingChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CPedometer_Windows__CDevices__CSensors__CPedometerReadingChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSensors__CPedometer_Windows__CDevices__CSensors__CPedometerReadingChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSensors__CPedometer_Windows__CDevices__CSensors__CPedometerReadingChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CPedometer_Windows__CDevices__CSensors__CPedometerReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CPedometer_Windows__CDevices__CSensors__CPedometerReadingChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CPedometer_Windows__CDevices__CSensors__CPedometerReadingChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CPedometer_Windows__CDevices__CSensors__CPedometerReadingChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CPedometer_Windows__CDevices__CSensors__CPedometerReadingChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIPedometer * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSensors__CPedometer_Windows__CDevices__CSensors__CPedometerReadingChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CPedometer_Windows__CDevices__CSensors__CPedometerReadingChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CPedometer_Windows__CDevices__CSensors__CPedometerReadingChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CProximitySensor_Windows__CDevices__CSensors__CProximitySensorReadingChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSensors__CProximitySensor_Windows__CDevices__CSensors__CProximitySensorReadingChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSensors__CProximitySensor_Windows__CDevices__CSensors__CProximitySensorReadingChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CProximitySensor_Windows__CDevices__CSensors__CProximitySensorReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CProximitySensor_Windows__CDevices__CSensors__CProximitySensorReadingChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CProximitySensor_Windows__CDevices__CSensors__CProximitySensorReadingChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CProximitySensor_Windows__CDevices__CSensors__CProximitySensorReadingChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CProximitySensor_Windows__CDevices__CSensors__CProximitySensorReadingChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSensors__CProximitySensor_Windows__CDevices__CSensors__CProximitySensorReadingChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CProximitySensor_Windows__CDevices__CSensors__CProximitySensorReadingChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CProximitySensor_Windows__CDevices__CSensors__CProximitySensorReadingChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CSimpleOrientationSensor_Windows__CDevices__CSensors__CSimpleOrientationSensorOrientationChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSensors__CSimpleOrientationSensor_Windows__CDevices__CSensors__CSimpleOrientationSensorOrientationChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSensors__CSimpleOrientationSensor_Windows__CDevices__CSensors__CSimpleOrientationSensorOrientationChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CSimpleOrientationSensor_Windows__CDevices__CSensors__CSimpleOrientationSensorOrientationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CSimpleOrientationSensor_Windows__CDevices__CSensors__CSimpleOrientationSensorOrientationChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CSimpleOrientationSensor_Windows__CDevices__CSensors__CSimpleOrientationSensorOrientationChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CSimpleOrientationSensor_Windows__CDevices__CSensors__CSimpleOrientationSensorOrientationChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CSimpleOrientationSensor_Windows__CDevices__CSensors__CSimpleOrientationSensorOrientationChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorOrientationChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSensors__CSimpleOrientationSensor_Windows__CDevices__CSensors__CSimpleOrientationSensorOrientationChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CSimpleOrientationSensor_Windows__CDevices__CSensors__CSimpleOrientationSensorOrientationChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CSimpleOrientationSensor_Windows__CDevices__CSensors__CSimpleOrientationSensorOrientationChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
struct __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __FIReference_1_Windows__CFoundation__CTimeSpan __FIReference_1_Windows__CFoundation__CTimeSpan;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CTimeSpan;
typedef struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CTimeSpan *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CTimeSpanVtbl;
interface __FIReference_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef interface __FIReference_1_double __FIReference_1_double;
EXTERN_C const IID IID___FIReference_1_double;
typedef struct __FIReference_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_double * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_double * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_double * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_double * This, __RPC__out double *value);
    END_INTERFACE
} __FIReference_1_doubleVtbl;
interface __FIReference_1_double
{
    CONST_VTBL struct __FIReference_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations;
typedef enum __x_ABI_CWindows_CDevices_CSensors_CAccelerometerReadingType __x_ABI_CWindows_CDevices_CSensors_CAccelerometerReadingType;
typedef enum __x_ABI_CWindows_CDevices_CSensors_CActivitySensorReadingConfidence __x_ABI_CWindows_CDevices_CSensors_CActivitySensorReadingConfidence;
typedef enum __x_ABI_CWindows_CDevices_CSensors_CActivityType __x_ABI_CWindows_CDevices_CSensors_CActivityType;
typedef enum __x_ABI_CWindows_CDevices_CSensors_CMagnetometerAccuracy __x_ABI_CWindows_CDevices_CSensors_CMagnetometerAccuracy;
typedef enum __x_ABI_CWindows_CDevices_CSensors_CPedometerStepKind __x_ABI_CWindows_CDevices_CSensors_CPedometerStepKind;
typedef enum __x_ABI_CWindows_CDevices_CSensors_CSensorOptimizationGoal __x_ABI_CWindows_CDevices_CSensors_CSensorOptimizationGoal;
typedef enum __x_ABI_CWindows_CDevices_CSensors_CSensorReadingType __x_ABI_CWindows_CDevices_CSensors_CSensorReadingType;
typedef enum __x_ABI_CWindows_CDevices_CSensors_CSensorType __x_ABI_CWindows_CDevices_CSensors_CSensorType;
typedef enum __x_ABI_CWindows_CDevices_CSensors_CSimpleOrientation __x_ABI_CWindows_CDevices_CSensors_CSimpleOrientation;
enum __x_ABI_CWindows_CDevices_CSensors_CAccelerometerReadingType
{
    AccelerometerReadingType_Standard = 0,
    AccelerometerReadingType_Linear = 1,
    AccelerometerReadingType_Gravity = 2,
};
enum __x_ABI_CWindows_CDevices_CSensors_CActivitySensorReadingConfidence
{
    ActivitySensorReadingConfidence_High = 0,
    ActivitySensorReadingConfidence_Low = 1,
};
enum __x_ABI_CWindows_CDevices_CSensors_CActivityType
{
    ActivityType_Unknown = 0,
    ActivityType_Idle = 1,
    ActivityType_Stationary = 2,
    ActivityType_Fidgeting = 3,
    ActivityType_Walking = 4,
    ActivityType_Running = 5,
    ActivityType_InVehicle = 6,
    ActivityType_Biking = 7,
};
enum __x_ABI_CWindows_CDevices_CSensors_CMagnetometerAccuracy
{
    MagnetometerAccuracy_Unknown = 0,
    MagnetometerAccuracy_Unreliable = 1,
    MagnetometerAccuracy_Approximate = 2,
    MagnetometerAccuracy_High = 3,
};
enum __x_ABI_CWindows_CDevices_CSensors_CPedometerStepKind
{
    PedometerStepKind_Unknown = 0,
    PedometerStepKind_Walking = 1,
    PedometerStepKind_Running = 2,
};
enum __x_ABI_CWindows_CDevices_CSensors_CSensorOptimizationGoal
{
    SensorOptimizationGoal_Precision = 0,
    SensorOptimizationGoal_PowerEfficiency = 1,
};
enum __x_ABI_CWindows_CDevices_CSensors_CSensorReadingType
{
    SensorReadingType_Absolute = 0,
    SensorReadingType_Relative = 1,
};
enum __x_ABI_CWindows_CDevices_CSensors_CSensorType
{
    SensorType_Accelerometer = 0,
    SensorType_ActivitySensor = 1,
    SensorType_Barometer = 2,
    SensorType_Compass = 3,
    SensorType_CustomSensor = 4,
    SensorType_Gyroscope = 5,
    SensorType_ProximitySensor = 6,
    SensorType_Inclinometer = 7,
    SensorType_LightSensor = 8,
    SensorType_OrientationSensor = 9,
    SensorType_Pedometer = 10,
    SensorType_RelativeInclinometer = 11,
    SensorType_RelativeOrientationSensor = 12,
    SensorType_SimpleOrientationSensor = 13,
};
enum __x_ABI_CWindows_CDevices_CSensors_CSimpleOrientation
{
    SimpleOrientation_NotRotated = 0,
    SimpleOrientation_Rotated90DegreesCounterclockwise = 1,
    SimpleOrientation_Rotated180DegreesCounterclockwise = 2,
    SimpleOrientation_Rotated270DegreesCounterclockwise = 3,
    SimpleOrientation_Faceup = 4,
    SimpleOrientation_Facedown = 5,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAccelerometer[] = L"Windows.Devices.Sensors.IAccelerometer";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinimumReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerReadingChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Shaken )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__CAccelerometer_Windows__CDevices__CSensors__CAccelerometerShakenEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Shaken )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentReading(This,value) )
    ( (This)->lpVtbl->get_MinimumReportInterval(This,value) )
    ( (This)->lpVtbl->put_ReportInterval(This,value) )
    ( (This)->lpVtbl->get_ReportInterval(This,value) )
    ( (This)->lpVtbl->add_ReadingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ReadingChanged(This,token) )
    ( (This)->lpVtbl->add_Shaken(This,handler,token) )
    ( (This)->lpVtbl->remove_Shaken(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAccelerometer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAccelerometer2[] = L"Windows.Devices.Sensors.IAccelerometer2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ReadingTransform )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer2 * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadingTransform )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer2 * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ReadingTransform(This,value) )
    ( (This)->lpVtbl->get_ReadingTransform(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAccelerometer2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAccelerometer3[] = L"Windows.Devices.Sensors.IAccelerometer3";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer3 * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer3 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxBatchSize )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer3 * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer3Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_MaxBatchSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAccelerometer3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAccelerometer4[] = L"Windows.Devices.Sensors.IAccelerometer4";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ReadingType )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer4 * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSensors_CAccelerometerReadingType * type
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer4Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer4
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ReadingType(This,type) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAccelerometer4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAccelerometerDeviceId[] = L"Windows.Devices.Sensors.IAccelerometerDeviceId";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerDeviceIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerDeviceId * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerDeviceId * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerDeviceId * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerDeviceId * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerDeviceId * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerDeviceId * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerDeviceId * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerDeviceIdVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerDeviceId
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerDeviceIdVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAccelerometerDeviceId;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAccelerometerReading[] = L"Windows.Devices.Sensors.IAccelerometerReading";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccelerationX )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccelerationY )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccelerationZ )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_AccelerationX(This,value) )
    ( (This)->lpVtbl->get_AccelerationY(This,value) )
    ( (This)->lpVtbl->get_AccelerationZ(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAccelerometerReading2[] = L"Windows.Devices.Sensors.IAccelerometerReading2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PerformanceCount )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading2 * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PerformanceCount(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAccelerometerReadingChangedEventArgs[] = L"Windows.Devices.Sensors.IAccelerometerReadingChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reading )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReading * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAccelerometerReadingChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAccelerometerShakenEventArgs[] = L"Windows.Devices.Sensors.IAccelerometerShakenEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerShakenEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerShakenEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerShakenEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerShakenEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerShakenEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerShakenEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerShakenEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerShakenEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerShakenEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerShakenEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerShakenEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAccelerometerShakenEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAccelerometerStatics[] = L"Windows.Devices.Sensors.IAccelerometerStatics";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAccelerometerStatics2[] = L"Windows.Devices.Sensors.IAccelerometerStatics2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDefaultWithAccelerometerReadingType )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics2 * This,
                  __x_ABI_CWindows_CDevices_CSensors_CAccelerometerReadingType readingType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIAccelerometer * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultWithAccelerometerReadingType(This,readingType,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAccelerometerStatics3[] = L"Windows.Devices.Sensors.IAccelerometerStatics3";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics3 * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CAccelerometer * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics3 * This,
                  __x_ABI_CWindows_CDevices_CSensors_CAccelerometerReadingType readingType,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics3Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
    ( (This)->lpVtbl->GetDeviceSelector(This,readingType,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAccelerometerStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IActivitySensor[] = L"Windows.Devices.Sensors.IActivitySensor";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentReadingAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensorReading * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubscribedActivities )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CSensors__CActivityType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PowerInMilliwatts )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedActivities )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinimumReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__CActivitySensor_Windows__CDevices__CSensors__CActivitySensorReadingChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIActivitySensor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentReadingAsync(This,result) )
    ( (This)->lpVtbl->get_SubscribedActivities(This,value) )
    ( (This)->lpVtbl->get_PowerInMilliwatts(This,value) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_SupportedActivities(This,value) )
    ( (This)->lpVtbl->get_MinimumReportInterval(This,value) )
    ( (This)->lpVtbl->add_ReadingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ReadingChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIActivitySensor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IActivitySensorReading[] = L"Windows.Devices.Sensors.IActivitySensorReading";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Activity )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSensors_CActivityType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Confidence )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSensors_CActivitySensorReadingConfidence * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_Activity(This,value) )
    ( (This)->lpVtbl->get_Confidence(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IActivitySensorReadingChangeReport[] = L"Windows.Devices.Sensors.IActivitySensorReadingChangeReport";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reading )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReport * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReportVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReport
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangeReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IActivitySensorReadingChangedEventArgs[] = L"Windows.Devices.Sensors.IActivitySensorReadingChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reading )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReading * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIActivitySensorReadingChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IActivitySensorStatics[] = L"Windows.Devices.Sensors.IActivitySensorStatics";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CActivitySensor * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetSystemHistoryAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStatics * This,
                  __x_ABI_CWindows_CFoundation_CDateTime fromTime,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetSystemHistoryWithDurationAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStatics * This,
                  __x_ABI_CWindows_CFoundation_CDateTime fromTime,
                  __x_ABI_CWindows_CFoundation_CTimeSpan duration,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReading * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultAsync(This,result) )
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,result) )
    ( (This)->lpVtbl->GetSystemHistoryAsync(This,fromTime,result) )
    ( (This)->lpVtbl->GetSystemHistoryWithDurationAsync(This,fromTime,duration,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIActivitySensorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IActivitySensorTriggerDetails[] = L"Windows.Devices.Sensors.IActivitySensorTriggerDetails";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReadReports )(
        __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorTriggerDetails * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSensors__CActivitySensorReadingChangeReport * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorTriggerDetailsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIActivitySensorTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReadReports(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIActivitySensorTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAltimeter[] = L"Windows.Devices.Sensors.IAltimeter";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAltimeterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeter * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CDevices_CSensors_CIAltimeter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSensors_CIAltimeter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinimumReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIAltimeter * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIAltimeter * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIAltimeter * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIAltimeter * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__CAltimeter_Windows__CDevices__CSensors__CAltimeterReadingChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIAltimeter * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAltimeterVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAltimeter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAltimeterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentReading(This,value) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_MinimumReportInterval(This,value) )
    ( (This)->lpVtbl->put_ReportInterval(This,value) )
    ( (This)->lpVtbl->get_ReportInterval(This,value) )
    ( (This)->lpVtbl->add_ReadingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ReadingChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAltimeter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAltimeter2[] = L"Windows.Devices.Sensors.IAltimeter2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAltimeter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeter2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeter2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeter2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeter2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeter2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeter2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CIAltimeter2 * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CIAltimeter2 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxBatchSize )(
        __x_ABI_CWindows_CDevices_CSensors_CIAltimeter2 * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAltimeter2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAltimeter2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAltimeter2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_MaxBatchSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAltimeter2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAltimeterReading[] = L"Windows.Devices.Sensors.IAltimeterReading";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AltitudeChangeInMeters )(
        __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_AltitudeChangeInMeters(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAltimeterReading2[] = L"Windows.Devices.Sensors.IAltimeterReading2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PerformanceCount )(
        __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading2 * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PerformanceCount(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAltimeterReadingChangedEventArgs[] = L"Windows.Devices.Sensors.IAltimeterReadingChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reading )(
        __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReading * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAltimeterReadingChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IAltimeterStatics[] = L"Windows.Devices.Sensors.IAltimeterStatics";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIAltimeterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIAltimeterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CDevices_CSensors_CIAltimeterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIAltimeter * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIAltimeterStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIAltimeterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIAltimeterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIAltimeterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IBarometer[] = L"Windows.Devices.Sensors.IBarometer";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIBarometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometer * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometer * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinimumReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometer * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometer * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometer * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__CBarometer_Windows__CDevices__CSensors__CBarometerReadingChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometer * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIBarometerVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIBarometer
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIBarometerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentReading(This,value) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_MinimumReportInterval(This,value) )
    ( (This)->lpVtbl->put_ReportInterval(This,value) )
    ( (This)->lpVtbl->get_ReportInterval(This,value) )
    ( (This)->lpVtbl->add_ReadingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ReadingChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIBarometer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IBarometer2[] = L"Windows.Devices.Sensors.IBarometer2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIBarometer2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometer2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometer2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometer2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometer2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometer2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometer2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometer2 * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometer2 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxBatchSize )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometer2 * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIBarometer2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIBarometer2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIBarometer2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_MaxBatchSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIBarometer2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IBarometerReading[] = L"Windows.Devices.Sensors.IBarometerReading";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StationPressureInHectopascals )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_StationPressureInHectopascals(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIBarometerReading;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IBarometerReading2[] = L"Windows.Devices.Sensors.IBarometerReading2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PerformanceCount )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading2 * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PerformanceCount(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIBarometerReading2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IBarometerReadingChangedEventArgs[] = L"Windows.Devices.Sensors.IBarometerReadingChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reading )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIBarometerReading * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIBarometerReadingChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IBarometerStatics[] = L"Windows.Devices.Sensors.IBarometerStatics";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIBarometerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIBarometer * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIBarometerStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIBarometerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IBarometerStatics2[] = L"Windows.Devices.Sensors.IBarometerStatics2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics2 * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CBarometer * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics2 * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIBarometerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ICompass[] = L"Windows.Devices.Sensors.ICompass";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CICompassVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CDevices_CSensors_CICompass * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CICompassReading * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinimumReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CICompass * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CICompass * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CICompass * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CICompass * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__CCompass_Windows__CDevices__CSensors__CCompassReadingChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CICompass * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CICompassVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CICompass
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CICompassVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentReading(This,value) )
    ( (This)->lpVtbl->get_MinimumReportInterval(This,value) )
    ( (This)->lpVtbl->put_ReportInterval(This,value) )
    ( (This)->lpVtbl->get_ReportInterval(This,value) )
    ( (This)->lpVtbl->add_ReadingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ReadingChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CICompass;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ICompass2[] = L"Windows.Devices.Sensors.ICompass2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CICompass2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ReadingTransform )(
        __x_ABI_CWindows_CDevices_CSensors_CICompass2 * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadingTransform )(
        __x_ABI_CWindows_CDevices_CSensors_CICompass2 * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CICompass2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CICompass2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CICompass2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ReadingTransform(This,value) )
    ( (This)->lpVtbl->get_ReadingTransform(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CICompass2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ICompass3[] = L"Windows.Devices.Sensors.ICompass3";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CICompass3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompass3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CICompass3 * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CICompass3 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxBatchSize )(
        __x_ABI_CWindows_CDevices_CSensors_CICompass3 * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CICompass3Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CICompass3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CICompass3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_MaxBatchSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CICompass3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ICompassDeviceId[] = L"Windows.Devices.Sensors.ICompassDeviceId";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CICompassDeviceIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassDeviceId * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassDeviceId * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassDeviceId * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassDeviceId * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassDeviceId * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassDeviceId * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSensors_CICompassDeviceId * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CICompassDeviceIdVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CICompassDeviceId
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CICompassDeviceIdVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CICompassDeviceId;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ICompassReading[] = L"Windows.Devices.Sensors.ICompassReading";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CICompassReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReading * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReading * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReading * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReading * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReading * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReading * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSensors_CICompassReading * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeadingMagneticNorth )(
        __x_ABI_CWindows_CDevices_CSensors_CICompassReading * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeadingTrueNorth )(
        __x_ABI_CWindows_CDevices_CSensors_CICompassReading * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CICompassReadingVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CICompassReading
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CICompassReadingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_HeadingMagneticNorth(This,value) )
    ( (This)->lpVtbl->get_HeadingTrueNorth(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CICompassReading;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ICompassReading2[] = L"Windows.Devices.Sensors.ICompassReading2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CICompassReading2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReading2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReading2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReading2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReading2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReading2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReading2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PerformanceCount )(
        __x_ABI_CWindows_CDevices_CSensors_CICompassReading2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CSensors_CICompassReading2 * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CICompassReading2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CICompassReading2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CICompassReading2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PerformanceCount(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CICompassReading2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ICompassReadingChangedEventArgs[] = L"Windows.Devices.Sensors.ICompassReadingChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CICompassReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReadingChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReadingChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReadingChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReadingChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReadingChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReadingChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reading )(
        __x_ABI_CWindows_CDevices_CSensors_CICompassReadingChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CICompassReading * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CICompassReadingChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CICompassReadingChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CICompassReadingChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CICompassReadingChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ICompassReadingHeadingAccuracy[] = L"Windows.Devices.Sensors.ICompassReadingHeadingAccuracy";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CICompassReadingHeadingAccuracyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReadingHeadingAccuracy * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReadingHeadingAccuracy * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReadingHeadingAccuracy * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReadingHeadingAccuracy * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReadingHeadingAccuracy * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassReadingHeadingAccuracy * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HeadingAccuracy )(
        __x_ABI_CWindows_CDevices_CSensors_CICompassReadingHeadingAccuracy * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSensors_CMagnetometerAccuracy * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CICompassReadingHeadingAccuracyVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CICompassReadingHeadingAccuracy
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CICompassReadingHeadingAccuracyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HeadingAccuracy(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CICompassReadingHeadingAccuracy;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ICompassStatics[] = L"Windows.Devices.Sensors.ICompassStatics";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CICompassStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CDevices_CSensors_CICompassStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CICompass * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CICompassStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CICompassStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CICompassStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CICompassStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ICompassStatics2[] = L"Windows.Devices.Sensors.ICompassStatics2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CICompassStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CICompassStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSensors_CICompassStatics2 * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CICompassStatics2 * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CCompass * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CICompassStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CICompassStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CICompassStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CICompassStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IGyrometer[] = L"Windows.Devices.Sensors.IGyrometer";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinimumReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometer * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometer * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometer * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__CGyrometer_Windows__CDevices__CSensors__CGyrometerReadingChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometer * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIGyrometerVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometer
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentReading(This,value) )
    ( (This)->lpVtbl->get_MinimumReportInterval(This,value) )
    ( (This)->lpVtbl->put_ReportInterval(This,value) )
    ( (This)->lpVtbl->get_ReportInterval(This,value) )
    ( (This)->lpVtbl->add_ReadingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ReadingChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIGyrometer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IGyrometer2[] = L"Windows.Devices.Sensors.IGyrometer2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometer2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ReadingTransform )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometer2 * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadingTransform )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometer2 * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIGyrometer2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometer2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometer2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ReadingTransform(This,value) )
    ( (This)->lpVtbl->get_ReadingTransform(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIGyrometer2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IGyrometer3[] = L"Windows.Devices.Sensors.IGyrometer3";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometer3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometer3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometer3 * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometer3 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxBatchSize )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometer3 * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIGyrometer3Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometer3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometer3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_MaxBatchSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIGyrometer3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IGyrometerDeviceId[] = L"Windows.Devices.Sensors.IGyrometerDeviceId";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometerDeviceIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerDeviceId * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerDeviceId * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerDeviceId * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerDeviceId * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerDeviceId * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerDeviceId * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometerDeviceId * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIGyrometerDeviceIdVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometerDeviceId
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometerDeviceIdVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIGyrometerDeviceId;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IGyrometerReading[] = L"Windows.Devices.Sensors.IGyrometerReading";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AngularVelocityX )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AngularVelocityY )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AngularVelocityZ )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_AngularVelocityX(This,value) )
    ( (This)->lpVtbl->get_AngularVelocityY(This,value) )
    ( (This)->lpVtbl->get_AngularVelocityZ(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IGyrometerReading2[] = L"Windows.Devices.Sensors.IGyrometerReading2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PerformanceCount )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading2 * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PerformanceCount(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IGyrometerReadingChangedEventArgs[] = L"Windows.Devices.Sensors.IGyrometerReadingChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reading )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReading * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIGyrometerReadingChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IGyrometerStatics[] = L"Windows.Devices.Sensors.IGyrometerStatics";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIGyrometer * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IGyrometerStatics2[] = L"Windows.Devices.Sensors.IGyrometerStatics2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics2 * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics2 * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CGyrometer * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIGyrometerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IHingeAngleReading[] = L"Windows.Devices.Sensors.IHingeAngleReading";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReading * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReading * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReading * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReading * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReading * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReading * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReading * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AngleInDegrees )(
        __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReading * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReading * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReadingVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReading
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReadingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_AngleInDegrees(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReading;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IHingeAngleSensor[] = L"Windows.Devices.Sensors.IHingeAngleSensor";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentReadingAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleReading * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinReportThresholdInDegrees )(
        __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportThresholdInDegrees )(
        __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReportThresholdInDegrees )(
        __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor * This,
                  DOUBLE value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__CHingeAngleSensor_Windows__CDevices__CSensors__CHingeAngleSensorReadingChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentReadingAsync(This,value) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_MinReportThresholdInDegrees(This,value) )
    ( (This)->lpVtbl->get_ReportThresholdInDegrees(This,value) )
    ( (This)->lpVtbl->put_ReportThresholdInDegrees(This,value) )
    ( (This)->lpVtbl->add_ReadingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ReadingChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IHingeAngleSensorReadingChangedEventArgs[] = L"Windows.Devices.Sensors.IHingeAngleSensorReadingChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorReadingChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorReadingChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorReadingChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorReadingChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorReadingChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorReadingChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reading )(
        __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorReadingChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleReading * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorReadingChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorReadingChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorReadingChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorReadingChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IHingeAngleSensorStatics[] = L"Windows.Devices.Sensors.IHingeAngleSensorStatics";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStatics * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetRelatedToAdjacentPanelsAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStatics * This,
                  __RPC__in HSTRING firstPanelId,
                  __RPC__in HSTRING secondPanelId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CHingeAngleSensor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )
    ( (This)->lpVtbl->GetDefaultAsync(This,result) )
    ( (This)->lpVtbl->GetRelatedToAdjacentPanelsAsync(This,firstPanelId,secondPanelId,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIHingeAngleSensorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IInclinometer[] = L"Windows.Devices.Sensors.IInclinometer";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinimumReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__CInclinometer_Windows__CDevices__CSensors__CInclinometerReadingChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIInclinometerVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometer
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentReading(This,value) )
    ( (This)->lpVtbl->get_MinimumReportInterval(This,value) )
    ( (This)->lpVtbl->put_ReportInterval(This,value) )
    ( (This)->lpVtbl->get_ReportInterval(This,value) )
    ( (This)->lpVtbl->add_ReadingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ReadingChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIInclinometer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IInclinometer2[] = L"Windows.Devices.Sensors.IInclinometer2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometer2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ReadingTransform )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometer2 * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadingTransform )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometer2 * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadingType )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometer2 * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSensors_CSensorReadingType * type
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIInclinometer2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometer2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometer2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ReadingTransform(This,value) )
    ( (This)->lpVtbl->get_ReadingTransform(This,value) )
    ( (This)->lpVtbl->get_ReadingType(This,type) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIInclinometer2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IInclinometer3[] = L"Windows.Devices.Sensors.IInclinometer3";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometer3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometer3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometer3 * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometer3 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxBatchSize )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometer3 * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIInclinometer3Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometer3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometer3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_MaxBatchSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIInclinometer3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IInclinometerDeviceId[] = L"Windows.Devices.Sensors.IInclinometerDeviceId";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerDeviceIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerDeviceId * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerDeviceId * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerDeviceId * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerDeviceId * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerDeviceId * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerDeviceId * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometerDeviceId * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIInclinometerDeviceIdVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerDeviceId
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerDeviceIdVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIInclinometerDeviceId;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IInclinometerReading[] = L"Windows.Devices.Sensors.IInclinometerReading";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PitchDegrees )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RollDegrees )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_YawDegrees )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading * This,
                           __RPC__out FLOAT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_PitchDegrees(This,value) )
    ( (This)->lpVtbl->get_RollDegrees(This,value) )
    ( (This)->lpVtbl->get_YawDegrees(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IInclinometerReading2[] = L"Windows.Devices.Sensors.IInclinometerReading2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PerformanceCount )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading2 * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PerformanceCount(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IInclinometerReadingChangedEventArgs[] = L"Windows.Devices.Sensors.IInclinometerReadingChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reading )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReading * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IInclinometerReadingYawAccuracy[] = L"Windows.Devices.Sensors.IInclinometerReadingYawAccuracy";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingYawAccuracyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingYawAccuracy * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingYawAccuracy * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingYawAccuracy * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingYawAccuracy * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingYawAccuracy * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingYawAccuracy * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_YawAccuracy )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingYawAccuracy * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSensors_CMagnetometerAccuracy * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingYawAccuracyVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingYawAccuracy
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingYawAccuracyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_YawAccuracy(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIInclinometerReadingYawAccuracy;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IInclinometerStatics[] = L"Windows.Devices.Sensors.IInclinometerStatics";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IInclinometerStatics2[] = L"Windows.Devices.Sensors.IInclinometerStatics2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultForRelativeReadings )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultForRelativeReadings(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IInclinometerStatics3[] = L"Windows.Devices.Sensors.IInclinometerStatics3";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDefaultWithSensorReadingType )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics3 * This,
                  __x_ABI_CWindows_CDevices_CSensors_CSensorReadingType sensorReadingtype,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIInclinometer * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics3Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultWithSensorReadingType(This,sensorReadingtype,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IInclinometerStatics4[] = L"Windows.Devices.Sensors.IInclinometerStatics4";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics4 * This,
                  __x_ABI_CWindows_CDevices_CSensors_CSensorReadingType readingType,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics4 * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CInclinometer * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics4Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,readingType,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIInclinometerStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ILightSensor[] = L"Windows.Devices.Sensors.ILightSensor";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CILightSensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensor * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinimumReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensor * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensor * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensor * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__CLightSensor_Windows__CDevices__CSensors__CLightSensorReadingChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensor * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CILightSensorVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CILightSensor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CILightSensorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentReading(This,value) )
    ( (This)->lpVtbl->get_MinimumReportInterval(This,value) )
    ( (This)->lpVtbl->put_ReportInterval(This,value) )
    ( (This)->lpVtbl->get_ReportInterval(This,value) )
    ( (This)->lpVtbl->add_ReadingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ReadingChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CILightSensor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ILightSensor2[] = L"Windows.Devices.Sensors.ILightSensor2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CILightSensor2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensor2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensor2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensor2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensor2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensor2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensor2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensor2 * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensor2 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxBatchSize )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensor2 * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CILightSensor2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CILightSensor2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CILightSensor2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_MaxBatchSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CILightSensor2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ILightSensorDeviceId[] = L"Windows.Devices.Sensors.ILightSensorDeviceId";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CILightSensorDeviceIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorDeviceId * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorDeviceId * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorDeviceId * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorDeviceId * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorDeviceId * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorDeviceId * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensorDeviceId * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CILightSensorDeviceIdVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CILightSensorDeviceId
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CILightSensorDeviceIdVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CILightSensorDeviceId;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ILightSensorReading[] = L"Windows.Devices.Sensors.ILightSensorReading";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IlluminanceInLux )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading * This,
                           __RPC__out FLOAT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_IlluminanceInLux(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CILightSensorReading;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ILightSensorReading2[] = L"Windows.Devices.Sensors.ILightSensorReading2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PerformanceCount )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading2 * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PerformanceCount(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CILightSensorReading2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ILightSensorReadingChangedEventArgs[] = L"Windows.Devices.Sensors.ILightSensorReadingChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reading )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CILightSensorReading * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CILightSensorReadingChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ILightSensorStatics[] = L"Windows.Devices.Sensors.ILightSensorStatics";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CILightSensorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CILightSensor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CILightSensorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CILightSensorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ILightSensorStatics2[] = L"Windows.Devices.Sensors.ILightSensorStatics2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics2 * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics2 * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CLightSensor * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CILightSensorStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IMagnetometer[] = L"Windows.Devices.Sensors.IMagnetometer";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinimumReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__CMagnetometer_Windows__CDevices__CSensors__CMagnetometerReadingChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentReading(This,value) )
    ( (This)->lpVtbl->get_MinimumReportInterval(This,value) )
    ( (This)->lpVtbl->put_ReportInterval(This,value) )
    ( (This)->lpVtbl->get_ReportInterval(This,value) )
    ( (This)->lpVtbl->add_ReadingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ReadingChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIMagnetometer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IMagnetometer2[] = L"Windows.Devices.Sensors.IMagnetometer2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ReadingTransform )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer2 * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadingTransform )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer2 * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ReadingTransform(This,value) )
    ( (This)->lpVtbl->get_ReadingTransform(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIMagnetometer2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IMagnetometer3[] = L"Windows.Devices.Sensors.IMagnetometer3";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer3 * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer3 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxBatchSize )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer3 * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer3Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_MaxBatchSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIMagnetometer3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IMagnetometerDeviceId[] = L"Windows.Devices.Sensors.IMagnetometerDeviceId";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerDeviceIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerDeviceId * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerDeviceId * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerDeviceId * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerDeviceId * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerDeviceId * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerDeviceId * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerDeviceId * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerDeviceIdVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerDeviceId
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerDeviceIdVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIMagnetometerDeviceId;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IMagnetometerReading[] = L"Windows.Devices.Sensors.IMagnetometerReading";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MagneticFieldX )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MagneticFieldY )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MagneticFieldZ )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DirectionalAccuracy )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSensors_CMagnetometerAccuracy * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_MagneticFieldX(This,value) )
    ( (This)->lpVtbl->get_MagneticFieldY(This,value) )
    ( (This)->lpVtbl->get_MagneticFieldZ(This,value) )
    ( (This)->lpVtbl->get_DirectionalAccuracy(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IMagnetometerReading2[] = L"Windows.Devices.Sensors.IMagnetometerReading2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PerformanceCount )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading2 * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PerformanceCount(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IMagnetometerReadingChangedEventArgs[] = L"Windows.Devices.Sensors.IMagnetometerReadingChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reading )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReading * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIMagnetometerReadingChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IMagnetometerStatics[] = L"Windows.Devices.Sensors.IMagnetometerStatics";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIMagnetometer * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IMagnetometerStatics2[] = L"Windows.Devices.Sensors.IMagnetometerStatics2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics2 * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics2 * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CMagnetometer * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIMagnetometerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IOrientationSensor[] = L"Windows.Devices.Sensors.IOrientationSensor";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinimumReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__COrientationSensor_Windows__CDevices__CSensors__COrientationSensorReadingChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentReading(This,value) )
    ( (This)->lpVtbl->get_MinimumReportInterval(This,value) )
    ( (This)->lpVtbl->put_ReportInterval(This,value) )
    ( (This)->lpVtbl->get_ReportInterval(This,value) )
    ( (This)->lpVtbl->add_ReadingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ReadingChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IOrientationSensor2[] = L"Windows.Devices.Sensors.IOrientationSensor2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ReadingTransform )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor2 * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadingTransform )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor2 * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadingType )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor2 * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSensors_CSensorReadingType * type
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ReadingTransform(This,value) )
    ( (This)->lpVtbl->get_ReadingTransform(This,value) )
    ( (This)->lpVtbl->get_ReadingType(This,type) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IOrientationSensor3[] = L"Windows.Devices.Sensors.IOrientationSensor3";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor3 * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor3 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxBatchSize )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor3 * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor3Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_ReportLatency(This,value) )
    ( (This)->lpVtbl->get_MaxBatchSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IOrientationSensorDeviceId[] = L"Windows.Devices.Sensors.IOrientationSensorDeviceId";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorDeviceIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorDeviceId * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorDeviceId * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorDeviceId * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorDeviceId * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorDeviceId * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorDeviceId * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorDeviceId * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorDeviceIdVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorDeviceId
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorDeviceIdVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorDeviceId;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IOrientationSensorReading[] = L"Windows.Devices.Sensors.IOrientationSensorReading";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationMatrix )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Quaternion )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternion * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_RotationMatrix(This,value) )
    ( (This)->lpVtbl->get_Quaternion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IOrientationSensorReading2[] = L"Windows.Devices.Sensors.IOrientationSensorReading2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PerformanceCount )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading2 * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PerformanceCount(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IOrientationSensorReadingChangedEventArgs[] = L"Windows.Devices.Sensors.IOrientationSensorReadingChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reading )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReading * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IOrientationSensorReadingYawAccuracy[] = L"Windows.Devices.Sensors.IOrientationSensorReadingYawAccuracy";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingYawAccuracyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingYawAccuracy * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingYawAccuracy * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingYawAccuracy * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingYawAccuracy * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingYawAccuracy * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingYawAccuracy * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_YawAccuracy )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingYawAccuracy * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSensors_CMagnetometerAccuracy * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingYawAccuracyVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingYawAccuracy
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingYawAccuracyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_YawAccuracy(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorReadingYawAccuracy;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IOrientationSensorStatics[] = L"Windows.Devices.Sensors.IOrientationSensorStatics";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IOrientationSensorStatics2[] = L"Windows.Devices.Sensors.IOrientationSensorStatics2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultForRelativeReadings )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultForRelativeReadings(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IOrientationSensorStatics3[] = L"Windows.Devices.Sensors.IOrientationSensorStatics3";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDefaultWithSensorReadingType )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics3 * This,
                  __x_ABI_CWindows_CDevices_CSensors_CSensorReadingType sensorReadingtype,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDefaultWithSensorReadingTypeAndSensorOptimizationGoal )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics3 * This,
                  __x_ABI_CWindows_CDevices_CSensors_CSensorReadingType sensorReadingType,
                  __x_ABI_CWindows_CDevices_CSensors_CSensorOptimizationGoal optimizationGoal,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics3Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultWithSensorReadingType(This,sensorReadingtype,result) )
    ( (This)->lpVtbl->GetDefaultWithSensorReadingTypeAndSensorOptimizationGoal(This,sensorReadingType,optimizationGoal,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IOrientationSensorStatics4[] = L"Windows.Devices.Sensors.IOrientationSensorStatics4";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics4 * This,
                  __x_ABI_CWindows_CDevices_CSensors_CSensorReadingType readingType,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorWithSensorReadingTypeAndSensorOptimizationGoal )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics4 * This,
                  __x_ABI_CWindows_CDevices_CSensors_CSensorReadingType readingType,
                  __x_ABI_CWindows_CDevices_CSensors_CSensorOptimizationGoal optimizationGoal,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics4 * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__COrientationSensor * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics4Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,readingType,result) )
    ( (This)->lpVtbl->GetDeviceSelectorWithSensorReadingTypeAndSensorOptimizationGoal(This,readingType,optimizationGoal,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIOrientationSensorStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IPedometer[] = L"Windows.Devices.Sensors.IPedometer";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIPedometerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometer * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PowerInMilliwatts )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometer * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinimumReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometer * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometer * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometer * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__CPedometer_Windows__CDevices__CSensors__CPedometerReadingChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometer * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIPedometerVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIPedometer
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIPedometerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_PowerInMilliwatts(This,value) )
    ( (This)->lpVtbl->get_MinimumReportInterval(This,value) )
    ( (This)->lpVtbl->put_ReportInterval(This,value) )
    ( (This)->lpVtbl->get_ReportInterval(This,value) )
    ( (This)->lpVtbl->add_ReadingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ReadingChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIPedometer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IPedometer2[] = L"Windows.Devices.Sensors.IPedometer2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIPedometer2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometer2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometer2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometer2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometer2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometer2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometer2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentReadings )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometer2 * This,
                           __RPC__deref_out_opt __FIMapView_2_Windows__CDevices__CSensors__CPedometerStepKind_Windows__CDevices__CSensors__CPedometerReading * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIPedometer2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIPedometer2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIPedometer2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentReadings(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIPedometer2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IPedometerDataThresholdFactory[] = L"Windows.Devices.Sensors.IPedometerDataThresholdFactory";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIPedometerDataThresholdFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerDataThresholdFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerDataThresholdFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerDataThresholdFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerDataThresholdFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerDataThresholdFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerDataThresholdFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometerDataThresholdFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIPedometer * sensor,
                  INT32 stepGoal,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CISensorDataThreshold * * threshold
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIPedometerDataThresholdFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIPedometerDataThresholdFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIPedometerDataThresholdFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,sensor,stepGoal,threshold) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIPedometerDataThresholdFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IPedometerReading[] = L"Windows.Devices.Sensors.IPedometerReading";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StepKind )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSensors_CPedometerStepKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CumulativeSteps )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CumulativeStepsDuration )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StepKind(This,value) )
    ( (This)->lpVtbl->get_CumulativeSteps(This,value) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_CumulativeStepsDuration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIPedometerReading;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IPedometerReadingChangedEventArgs[] = L"Windows.Devices.Sensors.IPedometerReadingChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reading )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIPedometerReading * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIPedometerReadingChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IPedometerStatics[] = L"Windows.Devices.Sensors.IPedometerStatics";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIPedometerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CPedometer * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetSystemHistoryAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics * This,
                  __x_ABI_CWindows_CFoundation_CDateTime fromTime,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetSystemHistoryWithDurationAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics * This,
                  __x_ABI_CWindows_CFoundation_CDateTime fromTime,
                  __x_ABI_CWindows_CFoundation_CTimeSpan duration,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIPedometerStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIPedometerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
    ( (This)->lpVtbl->GetDefaultAsync(This,operation) )
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )
    ( (This)->lpVtbl->GetSystemHistoryAsync(This,fromTime,operation) )
    ( (This)->lpVtbl->GetSystemHistoryWithDurationAsync(This,fromTime,duration,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IPedometerStatics2[] = L"Windows.Devices.Sensors.IPedometerStatics2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetReadingsFromTriggerDetails )(
        __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetails * triggerDetails,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSensors__CPedometerReading * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetReadingsFromTriggerDetails(This,triggerDetails,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIPedometerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IProximitySensor[] = L"Windows.Devices.Sensors.IProximitySensor";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxDistanceInMillimeters )(
        __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinDistanceInMillimeters )(
        __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__CProximitySensor_Windows__CDevices__CSensors__CProximitySensorReadingChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDisplayOnOffController )(
        __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIClosable * * controller
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_MaxDistanceInMillimeters(This,value) )
    ( (This)->lpVtbl->get_MinDistanceInMillimeters(This,value) )
    ( (This)->lpVtbl->GetCurrentReading(This,value) )
    ( (This)->lpVtbl->add_ReadingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ReadingChanged(This,token) )
    ( (This)->lpVtbl->CreateDisplayOnOffController(This,controller) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIProximitySensor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IProximitySensorDataThresholdFactory[] = L"Windows.Devices.Sensors.IProximitySensorDataThresholdFactory";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorDataThresholdFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorDataThresholdFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorDataThresholdFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorDataThresholdFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorDataThresholdFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorDataThresholdFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorDataThresholdFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorDataThresholdFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor * sensor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CISensorDataThreshold * * threshold
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorDataThresholdFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorDataThresholdFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorDataThresholdFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,sensor,threshold) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIProximitySensorDataThresholdFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IProximitySensorReading[] = L"Windows.Devices.Sensors.IProximitySensorReading";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDetected )(
        __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DistanceInMillimeters )(
        __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_IsDetected(This,value) )
    ( (This)->lpVtbl->get_DistanceInMillimeters(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IProximitySensorReadingChangedEventArgs[] = L"Windows.Devices.Sensors.IProximitySensorReadingChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reading )(
        __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReading * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIProximitySensorReadingChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IProximitySensorStatics[] = L"Windows.Devices.Sensors.IProximitySensorStatics";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromId )(
        __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics * This,
                  __RPC__in HSTRING sensorId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CIProximitySensor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )
    ( (This)->lpVtbl->FromId(This,sensorId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_IProximitySensorStatics2[] = L"Windows.Devices.Sensors.IProximitySensorStatics2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetReadingsFromTriggerDetails )(
        __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetails * triggerDetails,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSensors__CProximitySensorReading * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetReadingsFromTriggerDetails(This,triggerDetails,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CIProximitySensorStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ISensorDataThreshold[] = L"Windows.Devices.Sensors.ISensorDataThreshold";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorDataThreshold * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorDataThreshold * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorDataThreshold * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorDataThreshold * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorDataThreshold * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorDataThreshold * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CISensorDataThreshold
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CISensorDataThreshold;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ISensorDataThresholdTriggerDetails[] = L"Windows.Devices.Sensors.ISensorDataThresholdTriggerDetails";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SensorType )(
        __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetails * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSensors_CSensorType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetailsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_SensorType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CISensorDataThresholdTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ISensorQuaternion[] = L"Windows.Devices.Sensors.ISensorQuaternion";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternion * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternion * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternion * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternion * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternion * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternion * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_W )(
        __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternion * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_X )(
        __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternion * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Y )(
        __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternion * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Z )(
        __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternion * This,
                           __RPC__out FLOAT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternionVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternion
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CISensorQuaternionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_W(This,value) )
    ( (This)->lpVtbl->get_X(This,value) )
    ( (This)->lpVtbl->get_Y(This,value) )
    ( (This)->lpVtbl->get_Z(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CISensorQuaternion;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ISensorRotationMatrix[] = L"Windows.Devices.Sensors.ISensorRotationMatrix";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrixVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_M11 )(
        __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_M12 )(
        __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_M13 )(
        __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_M21 )(
        __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_M22 )(
        __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_M23 )(
        __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_M31 )(
        __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_M32 )(
        __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_M33 )(
        __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix * This,
                           __RPC__out FLOAT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrixVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrixVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_M11(This,value) )
    ( (This)->lpVtbl->get_M12(This,value) )
    ( (This)->lpVtbl->get_M13(This,value) )
    ( (This)->lpVtbl->get_M21(This,value) )
    ( (This)->lpVtbl->get_M22(This,value) )
    ( (This)->lpVtbl->get_M23(This,value) )
    ( (This)->lpVtbl->get_M31(This,value) )
    ( (This)->lpVtbl->get_M32(This,value) )
    ( (This)->lpVtbl->get_M33(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CISensorRotationMatrix;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ISimpleOrientationSensor[] = L"Windows.Devices.Sensors.ISimpleOrientationSensor";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentOrientation )(
        __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSensors_CSimpleOrientation * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_OrientationChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__CSimpleOrientationSensor_Windows__CDevices__CSensors__CSimpleOrientationSensorOrientationChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_OrientationChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentOrientation(This,value) )
    ( (This)->lpVtbl->add_OrientationChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_OrientationChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ISimpleOrientationSensor2[] = L"Windows.Devices.Sensors.ISimpleOrientationSensor2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ReadingTransform )(
        __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor2 * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadingTransform )(
        __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor2 * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ReadingTransform(This,value) )
    ( (This)->lpVtbl->get_ReadingTransform(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ISimpleOrientationSensorDeviceId[] = L"Windows.Devices.Sensors.ISimpleOrientationSensorDeviceId";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorDeviceIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorDeviceId * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorDeviceId * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorDeviceId * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorDeviceId * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorDeviceId * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorDeviceId * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorDeviceId * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorDeviceIdVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorDeviceId
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorDeviceIdVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorDeviceId;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ISimpleOrientationSensorOrientationChangedEventArgs[] = L"Windows.Devices.Sensors.ISimpleOrientationSensorOrientationChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorOrientationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorOrientationChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorOrientationChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorOrientationChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorOrientationChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorOrientationChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorOrientationChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorOrientationChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorOrientationChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSensors_CSimpleOrientation * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorOrientationChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorOrientationChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorOrientationChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorOrientationChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ISimpleOrientationSensorStatics[] = L"Windows.Devices.Sensors.ISimpleOrientationSensorStatics";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_ISimpleOrientationSensorStatics2[] = L"Windows.Devices.Sensors.ISimpleOrientationSensorStatics2";
typedef struct __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics2 * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CSimpleOrientationSensor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CISimpleOrientationSensorStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_Accelerometer[] = L"Windows.Devices.Sensors.Accelerometer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_AccelerometerReading[] = L"Windows.Devices.Sensors.AccelerometerReading";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_AccelerometerReadingChangedEventArgs[] = L"Windows.Devices.Sensors.AccelerometerReadingChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_AccelerometerShakenEventArgs[] = L"Windows.Devices.Sensors.AccelerometerShakenEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_ActivitySensor[] = L"Windows.Devices.Sensors.ActivitySensor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_ActivitySensorReading[] = L"Windows.Devices.Sensors.ActivitySensorReading";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_ActivitySensorReadingChangeReport[] = L"Windows.Devices.Sensors.ActivitySensorReadingChangeReport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_ActivitySensorReadingChangedEventArgs[] = L"Windows.Devices.Sensors.ActivitySensorReadingChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_ActivitySensorTriggerDetails[] = L"Windows.Devices.Sensors.ActivitySensorTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_Altimeter[] = L"Windows.Devices.Sensors.Altimeter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_AltimeterReading[] = L"Windows.Devices.Sensors.AltimeterReading";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_AltimeterReadingChangedEventArgs[] = L"Windows.Devices.Sensors.AltimeterReadingChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_Barometer[] = L"Windows.Devices.Sensors.Barometer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_BarometerReading[] = L"Windows.Devices.Sensors.BarometerReading";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_BarometerReadingChangedEventArgs[] = L"Windows.Devices.Sensors.BarometerReadingChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_Compass[] = L"Windows.Devices.Sensors.Compass";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_CompassReading[] = L"Windows.Devices.Sensors.CompassReading";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_CompassReadingChangedEventArgs[] = L"Windows.Devices.Sensors.CompassReadingChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_Gyrometer[] = L"Windows.Devices.Sensors.Gyrometer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_GyrometerReading[] = L"Windows.Devices.Sensors.GyrometerReading";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_GyrometerReadingChangedEventArgs[] = L"Windows.Devices.Sensors.GyrometerReadingChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_HingeAngleReading[] = L"Windows.Devices.Sensors.HingeAngleReading";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_HingeAngleSensor[] = L"Windows.Devices.Sensors.HingeAngleSensor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_HingeAngleSensorReadingChangedEventArgs[] = L"Windows.Devices.Sensors.HingeAngleSensorReadingChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_Inclinometer[] = L"Windows.Devices.Sensors.Inclinometer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_InclinometerReading[] = L"Windows.Devices.Sensors.InclinometerReading";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_InclinometerReadingChangedEventArgs[] = L"Windows.Devices.Sensors.InclinometerReadingChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_LightSensor[] = L"Windows.Devices.Sensors.LightSensor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_LightSensorReading[] = L"Windows.Devices.Sensors.LightSensorReading";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_LightSensorReadingChangedEventArgs[] = L"Windows.Devices.Sensors.LightSensorReadingChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_Magnetometer[] = L"Windows.Devices.Sensors.Magnetometer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_MagnetometerReading[] = L"Windows.Devices.Sensors.MagnetometerReading";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_MagnetometerReadingChangedEventArgs[] = L"Windows.Devices.Sensors.MagnetometerReadingChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_OrientationSensor[] = L"Windows.Devices.Sensors.OrientationSensor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_OrientationSensorReading[] = L"Windows.Devices.Sensors.OrientationSensorReading";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_OrientationSensorReadingChangedEventArgs[] = L"Windows.Devices.Sensors.OrientationSensorReadingChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_Pedometer[] = L"Windows.Devices.Sensors.Pedometer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_PedometerDataThreshold[] = L"Windows.Devices.Sensors.PedometerDataThreshold";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_PedometerReading[] = L"Windows.Devices.Sensors.PedometerReading";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_PedometerReadingChangedEventArgs[] = L"Windows.Devices.Sensors.PedometerReadingChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_ProximitySensor[] = L"Windows.Devices.Sensors.ProximitySensor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_ProximitySensorDataThreshold[] = L"Windows.Devices.Sensors.ProximitySensorDataThreshold";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_ProximitySensorDisplayOnOffController[] = L"Windows.Devices.Sensors.ProximitySensorDisplayOnOffController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_ProximitySensorReading[] = L"Windows.Devices.Sensors.ProximitySensorReading";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_ProximitySensorReadingChangedEventArgs[] = L"Windows.Devices.Sensors.ProximitySensorReadingChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_SensorDataThresholdTriggerDetails[] = L"Windows.Devices.Sensors.SensorDataThresholdTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_SensorQuaternion[] = L"Windows.Devices.Sensors.SensorQuaternion";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_SensorRotationMatrix[] = L"Windows.Devices.Sensors.SensorRotationMatrix";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_SimpleOrientationSensor[] = L"Windows.Devices.Sensors.SimpleOrientationSensor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_SimpleOrientationSensorOrientationChangedEventArgs[] = L"Windows.Devices.Sensors.SimpleOrientationSensorOrientationChangedEventArgs";
       
       
#pragma clang diagnostic pop
