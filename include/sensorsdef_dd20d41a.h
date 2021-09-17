#include <stdio.h>
#include <stdlib.h>
#include <initguid.h>
#include <propidl.h>
#include <propkeydef.h>
#include <devpropdef.h>
#include <propvarutil.h>
#include <winapifamily.h>
extern "C" {
DEFINE_GUID(GUID_SensorCategory_All, 0XC317C286, 0XC468, 0X4288, 0X99, 0X75, 0XD4, 0XC4, 0X58, 0X7C, 0X44, 0X2C);
DEFINE_GUID(GUID_SensorCategory_Biometric, 0XCA19690F, 0XA2C7, 0X477D, 0XA9, 0X9E, 0X99, 0XEC, 0X6E, 0X2B, 0X56, 0X48);
DEFINE_GUID(GUID_SensorCategory_Electrical, 0XFB73FCD8, 0XFC4A, 0X483C, 0XAC, 0X58, 0X27, 0XB6, 0X91, 0XC6, 0XBE, 0XFF);
DEFINE_GUID(GUID_SensorCategory_Environmental, 0X323439AA, 0X7F66, 0X492B, 0XBA, 0X0C, 0X73, 0XE9, 0XAA, 0X0A, 0X65, 0XD5);
DEFINE_GUID(GUID_SensorCategory_Light, 0X17A665C0, 0X9063, 0X4216, 0XB2, 0X02, 0X5C, 0X7A, 0X25, 0X5E, 0X18, 0XCE);
DEFINE_GUID(GUID_SensorCategory_Location, 0XBFA794E4, 0XF964, 0X4FDB, 0X90, 0XF6, 0X51, 0X05, 0X6B, 0XFE, 0X4B, 0X44);
DEFINE_GUID(GUID_SensorCategory_Mechanical, 0X8D131D68, 0X8EF7, 0X4656, 0X80, 0XB5, 0XCC, 0XCB, 0XD9, 0X37, 0X91, 0XC5);
DEFINE_GUID(GUID_SensorCategory_Motion, 0XCD09DAF1, 0X3B2E, 0X4C3D, 0XB5, 0X98, 0XB5, 0XE5, 0XFF, 0X93, 0XFD, 0X46);
DEFINE_GUID(GUID_SensorCategory_Orientation, 0X9E6C04B6, 0X96FE, 0X4954, 0XB7, 0X26, 0X68, 0X68, 0X2A, 0X47, 0X3F, 0X69);
DEFINE_GUID(GUID_SensorCategory_Other, 0x2C90E7A9, 0xF4C9, 0x4FA2, 0xAF, 0x37, 0x56, 0xD4, 0x71, 0xFE, 0x5A, 0x3D);
DEFINE_GUID(GUID_SensorCategory_PersonalActivity, 0XF1609081, 0X1E12, 0X412B, 0XA1, 0X4D, 0XCB, 0XB0, 0XE9, 0X5B, 0XD2, 0XE5);
DEFINE_GUID(GUID_SensorCategory_Scanner, 0XB000E77E, 0XF5B5, 0X420F, 0X81, 0X5D, 0X02, 0X70, 0XA7, 0X26, 0XF2, 0X70);
DEFINE_GUID(GUID_SensorCategory_Unsupported, 0x2BEAE7fA, 0x19B0, 0x48C5, 0xA1, 0xF6, 0xB5, 0x48, 0x0D, 0xC2, 0x06, 0xB0);
DEFINE_GUID(GUID_SensorType_Accelerometer3D, 0XC2FB0F5F, 0XE2D2, 0X4C78, 0XBC, 0XD0, 0X35, 0X2A, 0X95, 0X82, 0X81, 0X9D);
DEFINE_GUID(GUID_SensorType_ActivityDetection, 0X9D9E0118, 0X1807, 0X4F2E, 0X96, 0XE4, 0X2C, 0XE5, 0X71, 0X42, 0XE1, 0X96);
DEFINE_GUID(GUID_SensorType_AmbientLight, 0X97F115C8, 0X599A, 0X4153, 0X88, 0X94, 0XD2, 0XD1, 0X28, 0X99, 0X91, 0X8A);
DEFINE_GUID(GUID_SensorType_Barometer, 0X0E903829, 0XFF8A, 0X4A93, 0X97, 0XDF, 0X3D, 0XCB, 0XDE, 0X40, 0X22, 0X88);
DEFINE_GUID(GUID_SensorType_Custom, 0XE83AF229, 0X8640, 0X4D18, 0XA2, 0X13, 0XE2, 0X26, 0X75, 0XEB, 0XB2, 0XC3);
DEFINE_GUID(GUID_SensorType_FloorElevation, 0xADE4987F, 0x7AC4, 0x4DFA, 0x97, 0x22, 0x0A, 0x02, 0x71, 0x81, 0xC7, 0x47);
DEFINE_GUID(GUID_SensorType_GeomagneticOrientation, 0XE77195F8, 0X2D1F, 0X4823, 0X97, 0X1B, 0X1C, 0X44, 0X67, 0X55, 0X6C, 0X9D);
DEFINE_GUID(GUID_SensorType_GravityVector, 0X03B52C73, 0XBB76, 0X463F, 0X95, 0X24, 0X38, 0XDE, 0X76, 0XEB, 0X70, 0X0B);
DEFINE_GUID(GUID_SensorType_Gyrometer3D, 0X09485F5A, 0X759E, 0X42C2, 0XBD, 0X4B, 0XA3, 0X49, 0XB7, 0X5C, 0X86, 0X43);
DEFINE_GUID(GUID_SensorType_Humidity, 0X5C72BF67, 0XBD7E, 0X4257, 0X99, 0X0B, 0X98, 0XA3, 0XBA, 0X3B, 0X40, 0X0A);
DEFINE_GUID(GUID_SensorType_LinearAccelerometer, 0X038B0283, 0X97B4, 0X41C8, 0XBC, 0X24, 0X5F, 0XF1, 0XAA, 0X48, 0XFE, 0XC7);
DEFINE_GUID(GUID_SensorType_Magnetometer3D, 0X55E5EFFB, 0X15C7, 0X40DF, 0X86, 0X98, 0XA8, 0X4B, 0X7C, 0X86, 0X3C, 0X53);
DEFINE_GUID(GUID_SensorType_Orientation, 0XCDB5D8F7, 0X3CFD, 0X41C8, 0X85, 0X42, 0XCC, 0XE6, 0X22, 0XCF, 0X5D, 0X6E);
DEFINE_GUID(GUID_SensorType_Pedometer, 0XB19F89AF, 0XE3EB, 0X444B, 0X8D, 0XEA, 0X20, 0X25, 0X75, 0XA7, 0X15, 0X99);
DEFINE_GUID(GUID_SensorType_Proximity, 0X5220DAE9, 0X3179, 0X4430, 0X9F, 0X90, 0X06, 0X26, 0X6D, 0X2A, 0X34, 0XDE);
DEFINE_GUID(GUID_SensorType_RelativeOrientation, 0x40993b51, 0x4706, 0x44dc, 0x98, 0xd5, 0xc9, 0x20, 0xc0, 0x37, 0xff, 0xab);
DEFINE_GUID(GUID_SensorType_SimpleDeviceOrientation, 0X86A19291, 0X0482, 0X402C, 0XBF, 0X4C, 0XAD, 0XDA, 0XC5, 0X2B, 0X1C, 0X39);
DEFINE_GUID(GUID_SensorType_Temperature, 0X04FD0EC4, 0XD5DA, 0X45FA, 0X95, 0XA9, 0X5D, 0XB3, 0X8E, 0XE1, 0X93, 0X06);
DEFINE_GUID(GUID_SensorType_HingeAngle, 0x82358065, 0xf4c4, 0x4da1, 0xb2, 0x72, 0x13, 0xc2, 0x33, 0x32, 0xa2, 0x7);
DEFINE_PROPERTYKEY(DEVPKEY_Sensor_Type,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 2);
DEFINE_PROPERTYKEY(DEVPKEY_Sensor_Category,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 3);
DEFINE_PROPERTYKEY(DEVPKEY_Sensor_ConnectionType,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 4);
DEFINE_PROPERTYKEY(DEVPKEY_Sensor_IsPrimary,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 5);
DEFINE_PROPERTYKEY(DEVPKEY_Sensor_Name,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 6);
DEFINE_PROPERTYKEY(DEVPKEY_Sensor_Manufacturer,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 7);
DEFINE_PROPERTYKEY(DEVPKEY_Sensor_Model,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 8);
DEFINE_PROPERTYKEY(DEVPKEY_Sensor_PersistentUniqueId,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 9);
DEFINE_PROPERTYKEY(DEVPKEY_Sensor_VendorDefinedSubType,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 10);
DEFINE_PROPERTYKEY(PKEY_Sensor_Type,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 2);
DEFINE_PROPERTYKEY(PKEY_Sensor_State,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 20);
DEFINE_PROPERTYKEY(PKEY_Sensor_MinimumDataInterval_Ms,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 21);
DEFINE_PROPERTYKEY(PKEY_Sensor_MaximumDataFieldSize_Bytes,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 22);
DEFINE_PROPERTYKEY(PKEY_Sensor_Power_Milliwatts,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 23);
DEFINE_PROPERTYKEY(PKEY_SensorHistory_MaxSize_Bytes,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 24);
DEFINE_PROPERTYKEY(PKEY_SensorHistory_Interval_Ms,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 25);
DEFINE_PROPERTYKEY(PKEY_SensorHistory_MaximumRecordSize_Bytes,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 26);
DEFINE_PROPERTYKEY(PKEY_Sensor_FifoReservedSize_Samples,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 27);
DEFINE_PROPERTYKEY(PKEY_Sensor_FifoMaxSize_Samples,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 28);
DEFINE_PROPERTYKEY(PKEY_Sensor_WakeCapable,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 29);
DEFINE_PROPERTYKEY(PKEY_LightSensor_ResponseCurve,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 30);
DEFINE_PROPERTYKEY(DEVPKEY_LightSensor_AutoBrightnessPreferred,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 31);
DEFINE_PROPERTYKEY(DEVPKEY_LightSensor_ColorCapable,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 32);
DEFINE_PROPERTYKEY(DEVPKEY_LightSensor_AdaptiveColorPreferred,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 33);
DEFINE_PROPERTYKEY(PKEY_OrientationSensor_GyroscopeUsed,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 40);
DEFINE_PROPERTYKEY(PKEY_SensorDataField_Resolution,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 50);
DEFINE_PROPERTYKEY(PKEY_SensorDataField_RangeMinimum,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 51);
DEFINE_PROPERTYKEY(PKEY_SensorDataField_RangeMaximum,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 52);
DEFINE_PROPERTYKEY(PKEY_SensorData_SupportedActivityStates,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 60);
DEFINE_PROPERTYKEY(PKEY_SensorData_MinimumDetectionIntervals_Ms,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 61);
DEFINE_PROPERTYKEY(PKEY_SensorData_SupportedStepTypes,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 70);
DEFINE_PROPERTYKEY(DEVPKEY_Sensor_ProximityType,
    0xd4247382, 0x969d, 0x4f24, 0xbb, 0x14, 0xfb, 0x96, 0x71, 0x87, 0xb, 0xbf, 80);
DEFINE_PROPERTYKEY(PKEY_SensorData_Timestamp,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 2);
DEFINE_PROPERTYKEY(PKEY_SensorData_IsValid,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 3);
DEFINE_PROPERTYKEY(PKEY_SensorData_TimestampQPC,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 4);
DEFINE_PROPERTYKEY(PKEY_SensorData_AccelerationX_Gs,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 10);
DEFINE_PROPERTYKEY(PKEY_SensorData_AccelerationY_Gs,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 11);
DEFINE_PROPERTYKEY(PKEY_SensorData_AccelerationZ_Gs,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 12);
DEFINE_PROPERTYKEY(PKEY_SensorData_Shake,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 33);
DEFINE_PROPERTYKEY(PKEY_SensorData_MagneticFieldStrengthX_Microteslas,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 20);
DEFINE_PROPERTYKEY(PKEY_SensorData_MagneticFieldStrengthY_Microteslas,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 21);
DEFINE_PROPERTYKEY(PKEY_SensorData_MagneticFieldStrengthZ_Microteslas,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 22);
DEFINE_PROPERTYKEY(PKEY_SensorData_MagnetometerAccuracy,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 23);
DEFINE_PROPERTYKEY(PKEY_SensorData_AngularVelocityX_DegreesPerSecond,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 40);
DEFINE_PROPERTYKEY(PKEY_SensorData_AngularVelocityY_DegreesPerSecond,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 41);
DEFINE_PROPERTYKEY(PKEY_SensorData_AngularVelocityZ_DegreesPerSecond,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 42);
DEFINE_PROPERTYKEY(PKEY_SensorData_LightLevel_Lux,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 60);
DEFINE_PROPERTYKEY(PKEY_SensorData_LightTemperature_Kelvins,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 61);
DEFINE_PROPERTYKEY(PKEY_SensorData_LightChromaticityX,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 62);
DEFINE_PROPERTYKEY(PKEY_SensorData_LightChromaticityY,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 63);
DEFINE_PROPERTYKEY(PKEY_SensorData_LightLevel_Lux_Threshold_AbsoluteDifference,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 64);
DEFINE_PROPERTYKEY(PKEY_SensorData_QuaternionW,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 70);
DEFINE_PROPERTYKEY(PKEY_SensorData_QuaternionX,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 71);
DEFINE_PROPERTYKEY(PKEY_SensorData_QuaternionY,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 72);
DEFINE_PROPERTYKEY(PKEY_SensorData_QuaternionZ,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 73);
DEFINE_PROPERTYKEY(PKEY_SensorData_DeclinationAngle_Degrees,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 74);
DEFINE_PROPERTYKEY(PKEY_SensorData_LinearAccelerationX_Gs,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 75);
DEFINE_PROPERTYKEY(PKEY_SensorData_LinearAccelerationY_Gs,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 76);
DEFINE_PROPERTYKEY(PKEY_SensorData_LinearAccelerationZ_Gs,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 77);
DEFINE_PROPERTYKEY(PKEY_SensorData_CorrectedAngularVelocityX_DegreesPerSecond,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 78);
DEFINE_PROPERTYKEY(PKEY_SensorData_CorrectedAngularVelocityY_DegreesPerSecond,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 79);
DEFINE_PROPERTYKEY(PKEY_SensorData_CorrectedAngularVelocityZ_DegreesPerSecond,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 80);
DEFINE_PROPERTYKEY(PKEY_SensorData_RotationAngle_Degrees,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 81);
DEFINE_PROPERTYKEY(PKEY_SensorData_ProximityDetection,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 90);
DEFINE_PROPERTYKEY(PKEY_SensorData_ProximityDistanceMillimeters,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 91);
DEFINE_PROPERTYKEY(PKEY_SensorData_AtmosphericPressure_Bars,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 100);
DEFINE_PROPERTYKEY(PKEY_SensorData_Temperature_Celsius,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 101);
DEFINE_PROPERTYKEY(PKEY_SensorData_RelativeHumidity_Percent,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 102);
DEFINE_PROPERTYKEY(PKEY_SensorData_SimpleDeviceOrientation,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 120);
DEFINE_PROPERTYKEY(PKEY_SensorData_CurrentActivityState,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 130);
DEFINE_PROPERTYKEY(PKEY_SensorData_CurrentActivityStateConfidence_Percentage,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 131);
DEFINE_PROPERTYKEY(PKEY_SensorData_SubscribedActivityStates,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 132);
DEFINE_PROPERTYKEY(PKEY_SensorData_ActivityStream,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 133);
DEFINE_PROPERTYKEY(PKEY_SensorData_ConfidenceThreshold_Percentage,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 134);
DEFINE_PROPERTYKEY(PKEY_SensorData_PedometerStepType,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 140);
DEFINE_PROPERTYKEY(PKEY_SensorData_PedometerStepCount,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 141);
DEFINE_PROPERTYKEY(PKEY_SensorData_PedometerStepDuration_Ms,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 142);
DEFINE_PROPERTYKEY(PKEY_SensorData_PedometerReset,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 143);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue0,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 160);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue1,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 161);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue2,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 162);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue3,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 163);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue4,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 164);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue5,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 165);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue6,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 166);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue7,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 167);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue8,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 168);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue9,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 169);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue10,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 170);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue11,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 171);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue12,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 172);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue13,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 173);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue14,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 174);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue15,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 175);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue16,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 176);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue17,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 177);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue18,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 178);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue19,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 179);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue20,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 180);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue21,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 181);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue22,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 182);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue23,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 183);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue24,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 184);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue25,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 185);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue26,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 186);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue27,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 187);
DEFINE_PROPERTYKEY(PKEY_SensorData_CustomValue28,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 188);
DEFINE_PROPERTYKEY(PKEY_SensorData_ElevationChangeMode,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 200);
DEFINE_PROPERTYKEY(PKEY_SensorData_CumulativeElevation_Meters,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 201);
DEFINE_PROPERTYKEY(PKEY_SensorData_CumulativeElevationFloorCount,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 202);
DEFINE_PROPERTYKEY(PKEY_SensorData_CumulativeElevationStepCount,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 203);
DEFINE_PROPERTYKEY(PKEY_SensorData_ElevationChange_Meters,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 204);
DEFINE_PROPERTYKEY(PKEY_SensorData_VerticalSpeed_MetersPerSecond,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 205);
DEFINE_PROPERTYKEY(PKEY_SensorData_ElevationChangeFloorCount,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 206);
DEFINE_PROPERTYKEY(PKEY_SensorData_HingeAngle,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x7, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0xa, 300);
typedef enum ACTIVITY_STATE_COUNT
{
    ActivityStateCount = 8,
} ACTIVITY_STATE_COUNT;
typedef enum ACTIVITY_STATE
{
    ActivityState_Unknown = 0x00000001,
    ActivityState_Stationary = 0x00000002,
    ActivityState_Fidgeting = 0x00000004,
    ActivityState_Walking = 0x00000008,
    ActivityState_Running = 0x00000010,
    ActivityState_InVehicle = 0x00000020,
    ActivityState_Biking = 0x00000040,
    ActivityState_Idle = 0x00000080,
    ActivityState_Max = 1 << ActivityStateCount,
    ActivityState_Force_Dword = 0xFFFFFFFF
} ACTIVITY_STATE;
typedef enum ELEVATION_CHANGE_MODE
{
    ElevationChangeMode_Unknown = 0,
    ElevationChangeMode_Elevator,
    ElevationChangeMode_Stepping,
    ElevationChangeMode_Max,
    ElevationChangeMode_Force_Dword = 0xFFFFFFFF
} ELEVATION_CHANGE_MODE;
typedef enum MAGNETOMETER_ACCURACY
{
    MagnetometerAccuracy_Unknown = 0,
    MagnetometerAccuracy_Unreliable,
    MagnetometerAccuracy_Approximate,
    MagnetometerAccuracy_High
} MAGNETOMETER_ACCURACY;
typedef enum PEDOMETER_STEP_TYPE_COUNT
{
    PedometerStepTypeCount = 3,
} PEDOMETER_STEP_TYPE_COUNT;
typedef enum PEDOMETER_STEP_TYPE
{
    PedometerStepType_Unknown = 0x00000001,
    PedometerStepType_Walking = 0x00000002,
    PedometerStepType_Running = 0x00000004,
    PedometerStepType_Max = 1 << PedometerStepTypeCount,
    PedometerStepType_Force_Dword = 0xFFFFFFFF
} PEDOMETER_STEP_TYPE;
typedef enum PROXIMITY_TYPE
{
    ProximityType_ObjectProximity = 0,
    ProximityType_HumanProximity = 1,
    ProximityType_Force_Dword = 0xFFFFFFFF
} PROXIMITY_TYPE;
typedef enum SIMPLE_DEVICE_ORIENTATION
{
    SimpleDeviceOrientation_NotRotated = 0,
    SimpleDeviceOrientation_Rotated90DegreesCounterclockwise = 1,
    SimpleDeviceOrientation_Rotated180DegreesCounterclockwise = 2,
    SimpleDeviceOrientation_Rotated270DegreesCounterclockwise = 3,
    SimpleDeviceOrientation_Faceup = 4,
    SimpleDeviceOrientation_Facedown = 5,
} SIMPLE_DEVICE_ORIENTATION;
typedef enum SENSOR_STATE
{
    SensorState_Initializing = 0,
    SensorState_Idle,
    SensorState_Active,
    SensorState_Error,
} SENSOR_STATE;
typedef enum SENSOR_CONNECTION_TYPES
{
    SensorConnectionType_Integrated = 0,
    SensorConnectionType_Attached,
    SensorConnectionType_External
} SENSOR_CONNECTION_TYPES;
typedef struct SENSOR_VALUE_PAIR
{
    PROPERTYKEY Key;
    PROPVARIANT Value;
} SENSOR_VALUE_PAIR, *PSENSOR_VALUE_PAIR;
typedef struct SENSOR_COLLECTION_LIST
{
    _Field_range_(>, SENSOR_COLLECTION_LIST_HEADER_SIZE)
    ULONG AllocatedSizeInBytes;
    _Field_range_(<=, (AllocatedSizeInBytes - SENSOR_COLLECTION_LIST_HEADER_SIZE) / sizeof(SENSOR_VALUE_PAIR))
    ULONG Count;
    _Field_size_bytes_(AllocatedSizeInBytes - SENSOR_COLLECTION_LIST_HEADER_SIZE)
    SENSOR_VALUE_PAIR List[1];
} SENSOR_COLLECTION_LIST, *PSENSOR_COLLECTION_LIST;
typedef struct SENSOR_PROPERTY_LIST
{
    _Field_range_(>, SENSOR_PROPERTY_LIST_HEADER_SIZE)
    ULONG AllocatedSizeInBytes;
    _Field_range_(<=, (AllocatedSizeInBytes - SENSOR_PROPERTY_LIST_HEADER_SIZE) / sizeof(PROPERTYKEY))
    ULONG Count;
    _Field_size_bytes_(AllocatedSizeInBytes - SENSOR_PROPERTY_LIST_HEADER_SIZE)
    PROPERTYKEY List[1];
} SENSOR_PROPERTY_LIST, *PSENSOR_PROPERTY_LIST;
static const ULONG SENSOR_COLLECTION_LIST_HEADER_SIZE =
    (sizeof(SENSOR_COLLECTION_LIST) - sizeof(SENSOR_VALUE_PAIR));
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
VOID
FORCEINLINE
SENSOR_COLLECTION_LIST_INIT(
    _Out_writes_bytes_(CollectionListSize)
    _Post_satisfies_(pCollectionList->AllocatedSizeInBytes == CollectionListSize)
    PSENSOR_COLLECTION_LIST pCollectionList,
    _In_ _Pre_satisfies_(SENSOR_COLLECTION_LIST_HEADER_SIZE <= CollectionListSize) ULONG CollectionListSize
    )
{
    if (SENSOR_COLLECTION_LIST_HEADER_SIZE > CollectionListSize)
    {
        DbgRaiseAssertionFailure();
    }
    RtlZeroMemory(pCollectionList, CollectionListSize);
    pCollectionList->AllocatedSizeInBytes = CollectionListSize;
    pCollectionList->Count = 0;
}
_Ret_range_(==, SENSOR_COLLECTION_LIST_HEADER_SIZE + sizeof(SENSOR_VALUE_PAIR) * Count)
ULONG
FORCEINLINE
SENSOR_COLLECTION_LIST_SIZE(
    _In_ ULONG Count
    )
{
    return SENSOR_COLLECTION_LIST_HEADER_SIZE + sizeof(SENSOR_VALUE_PAIR) * Count;
}
ULONG
FORCEINLINE
SENSOR_COLLECTION_LIST_CALCULATE_MAX_COUNT(
    _In_ PSENSOR_COLLECTION_LIST pCollectionList
    )
{
    if (NULL == pCollectionList ||
        pCollectionList->AllocatedSizeInBytes < SENSOR_COLLECTION_LIST_HEADER_SIZE)
    {
        return 0;
    }
    else
    {
        return ((pCollectionList->AllocatedSizeInBytes - SENSOR_COLLECTION_LIST_HEADER_SIZE) /
            sizeof(SENSOR_VALUE_PAIR));
    }
}
#endif
#pragma deprecated(SENSOR_COLLECTION_LIST_CALCULATE_MAX_COUNT)
static const ULONG SENSOR_PROPERTY_LIST_HEADER_SIZE =
    (sizeof(SENSOR_PROPERTY_LIST) - sizeof(PROPERTYKEY));
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
VOID
FORCEINLINE
SENSOR_PROPERTY_LIST_INIT(
    _Out_writes_bytes_(PropertyListSize) PSENSOR_PROPERTY_LIST pPropertyList,
    _In_ _Pre_satisfies_(SENSOR_PROPERTY_LIST_HEADER_SIZE <= PropertyListSize) ULONG PropertyListSize
    )
{
    if (SENSOR_PROPERTY_LIST_HEADER_SIZE > PropertyListSize)
    {
        DbgRaiseAssertionFailure();
    }
    RtlZeroMemory(pPropertyList, PropertyListSize);
    pPropertyList->AllocatedSizeInBytes = PropertyListSize;
    pPropertyList->Count = 0;
}
_Ret_range_(== , SENSOR_PROPERTY_LIST_HEADER_SIZE + sizeof(PROPERTYKEY) * Count)
ULONG
FORCEINLINE
SENSOR_PROPERTY_LIST_SIZE(
    _In_ ULONG Count
    )
{
    return SENSOR_PROPERTY_LIST_HEADER_SIZE + sizeof(PROPERTYKEY) * Count;
}
ULONG
FORCEINLINE
SENSOR_PROPERTY_LIST_CALCULATE_MAX_COUNT(
    _In_ PSENSOR_PROPERTY_LIST pPropertyList
    )
{
    if (NULL == pPropertyList ||
        pPropertyList->AllocatedSizeInBytes < SENSOR_PROPERTY_LIST_HEADER_SIZE)
    {
        return 0;
    }
    else
    {
        return ((pPropertyList->AllocatedSizeInBytes - SENSOR_PROPERTY_LIST_HEADER_SIZE) /
            sizeof(PROPERTYKEY));
    }
}
#endif
#pragma deprecated(SENSOR_PROPERTY_LIST_CALCULATE_MAX_COUNT)
}
