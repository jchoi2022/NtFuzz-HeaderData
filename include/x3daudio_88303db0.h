       
#include <sdkddkver.h>
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_TV_APP | WINAPI_PARTITION_TV_TITLE | WINAPI_PARTITION_GAMES)
#include <windef.h>
#include <DirectXMath.h>
    #define _SPEAKER_POSITIONS_
    #define SPEAKER_FRONT_LEFT 0x00000001
    #define SPEAKER_FRONT_RIGHT 0x00000002
    #define SPEAKER_FRONT_CENTER 0x00000004
    #define SPEAKER_LOW_FREQUENCY 0x00000008
    #define SPEAKER_BACK_LEFT 0x00000010
    #define SPEAKER_BACK_RIGHT 0x00000020
    #define SPEAKER_FRONT_LEFT_OF_CENTER 0x00000040
    #define SPEAKER_FRONT_RIGHT_OF_CENTER 0x00000080
    #define SPEAKER_BACK_CENTER 0x00000100
    #define SPEAKER_SIDE_LEFT 0x00000200
    #define SPEAKER_SIDE_RIGHT 0x00000400
    #define SPEAKER_TOP_CENTER 0x00000800
    #define SPEAKER_TOP_FRONT_LEFT 0x00001000
    #define SPEAKER_TOP_FRONT_CENTER 0x00002000
    #define SPEAKER_TOP_FRONT_RIGHT 0x00004000
    #define SPEAKER_TOP_BACK_LEFT 0x00008000
    #define SPEAKER_TOP_BACK_CENTER 0x00010000
    #define SPEAKER_TOP_BACK_RIGHT 0x00020000
    #define SPEAKER_RESERVED 0x7FFC0000
    #define SPEAKER_ALL 0x80000000
    #define SPEAKER_MONO SPEAKER_FRONT_CENTER
    #define SPEAKER_STEREO (SPEAKER_FRONT_LEFT | SPEAKER_FRONT_RIGHT)
    #define SPEAKER_2POINT1 (SPEAKER_FRONT_LEFT | SPEAKER_FRONT_RIGHT | SPEAKER_LOW_FREQUENCY)
    #define SPEAKER_SURROUND (SPEAKER_FRONT_LEFT | SPEAKER_FRONT_RIGHT | SPEAKER_FRONT_CENTER | SPEAKER_BACK_CENTER)
    #define SPEAKER_QUAD (SPEAKER_FRONT_LEFT | SPEAKER_FRONT_RIGHT | SPEAKER_BACK_LEFT | SPEAKER_BACK_RIGHT)
    #define SPEAKER_4POINT1 (SPEAKER_FRONT_LEFT | SPEAKER_FRONT_RIGHT | SPEAKER_LOW_FREQUENCY | SPEAKER_BACK_LEFT | SPEAKER_BACK_RIGHT)
    #define SPEAKER_5POINT1 (SPEAKER_FRONT_LEFT | SPEAKER_FRONT_RIGHT | SPEAKER_FRONT_CENTER | SPEAKER_LOW_FREQUENCY | SPEAKER_BACK_LEFT | SPEAKER_BACK_RIGHT)
    #define SPEAKER_7POINT1 (SPEAKER_FRONT_LEFT | SPEAKER_FRONT_RIGHT | SPEAKER_FRONT_CENTER | SPEAKER_LOW_FREQUENCY | SPEAKER_BACK_LEFT | SPEAKER_BACK_RIGHT | SPEAKER_FRONT_LEFT_OF_CENTER | SPEAKER_FRONT_RIGHT_OF_CENTER)
    #define SPEAKER_5POINT1_SURROUND (SPEAKER_FRONT_LEFT | SPEAKER_FRONT_RIGHT | SPEAKER_FRONT_CENTER | SPEAKER_LOW_FREQUENCY | SPEAKER_SIDE_LEFT | SPEAKER_SIDE_RIGHT)
    #define SPEAKER_7POINT1_SURROUND (SPEAKER_FRONT_LEFT | SPEAKER_FRONT_RIGHT | SPEAKER_FRONT_CENTER | SPEAKER_LOW_FREQUENCY | SPEAKER_BACK_LEFT | SPEAKER_BACK_RIGHT | SPEAKER_SIDE_LEFT | SPEAKER_SIDE_RIGHT)
#pragma pack(push, 1)
typedef float FLOAT32;
typedef DirectX::XMFLOAT3 X3DAUDIO_VECTOR;
typedef BYTE X3DAUDIO_HANDLE[X3DAUDIO_HANDLE_BYTESIZE];
typedef struct X3DAUDIO_DISTANCE_CURVE_POINT
{
    FLOAT32 Distance;
    FLOAT32 DSPSetting;
} X3DAUDIO_DISTANCE_CURVE_POINT, *LPX3DAUDIO_DISTANCE_CURVE_POINT;
typedef struct X3DAUDIO_DISTANCE_CURVE
{
    X3DAUDIO_DISTANCE_CURVE_POINT* pPoints;
    UINT32 PointCount;
} X3DAUDIO_DISTANCE_CURVE, *LPX3DAUDIO_DISTANCE_CURVE;
static const X3DAUDIO_DISTANCE_CURVE_POINT X3DAudioDefault_LinearCurvePoints[2] = { 0.0f, 1.0f, 1.0f, 0.0f };
static const X3DAUDIO_DISTANCE_CURVE X3DAudioDefault_LinearCurve = { (X3DAUDIO_DISTANCE_CURVE_POINT*)&X3DAudioDefault_LinearCurvePoints[0], 2 };
typedef struct X3DAUDIO_CONE
{
    FLOAT32 InnerAngle;
    FLOAT32 OuterAngle;
    FLOAT32 InnerVolume;
    FLOAT32 OuterVolume;
    FLOAT32 InnerLPF;
    FLOAT32 OuterLPF;
    FLOAT32 InnerReverb;
    FLOAT32 OuterReverb;
} X3DAUDIO_CONE, *LPX3DAUDIO_CONE;
static const X3DAUDIO_CONE X3DAudioDefault_DirectionalCone = { X3DAUDIO_PI/2, X3DAUDIO_PI, 1.0f, 0.708f, 0.0f, 0.25f, 0.708f, 1.0f };
typedef struct X3DAUDIO_LISTENER
{
    X3DAUDIO_VECTOR OrientFront;
    X3DAUDIO_VECTOR OrientTop;
    X3DAUDIO_VECTOR Position;
    X3DAUDIO_VECTOR Velocity;
    X3DAUDIO_CONE* pCone;
} X3DAUDIO_LISTENER, *LPX3DAUDIO_LISTENER;
typedef struct X3DAUDIO_EMITTER
{
    X3DAUDIO_CONE* pCone;
    X3DAUDIO_VECTOR OrientFront;
    X3DAUDIO_VECTOR OrientTop;
    X3DAUDIO_VECTOR Position;
    X3DAUDIO_VECTOR Velocity;
    FLOAT32 InnerRadius;
    FLOAT32 InnerRadiusAngle;
    UINT32 ChannelCount;
    FLOAT32 ChannelRadius;
    FLOAT32* pChannelAzimuths;
    X3DAUDIO_DISTANCE_CURVE* pVolumeCurve;
    X3DAUDIO_DISTANCE_CURVE* pLFECurve;
    X3DAUDIO_DISTANCE_CURVE* pLPFDirectCurve;
    X3DAUDIO_DISTANCE_CURVE* pLPFReverbCurve;
    X3DAUDIO_DISTANCE_CURVE* pReverbCurve;
    FLOAT32 CurveDistanceScaler;
    FLOAT32 DopplerScaler;
} X3DAUDIO_EMITTER, *LPX3DAUDIO_EMITTER;
typedef struct X3DAUDIO_DSP_SETTINGS
{
    FLOAT32* pMatrixCoefficients;
    FLOAT32* pDelayTimes;
    UINT32 SrcChannelCount;
    UINT32 DstChannelCount;
    FLOAT32 LPFDirectCoefficient;
    FLOAT32 LPFReverbCoefficient;
    FLOAT32 ReverbLevel;
    FLOAT32 DopplerFactor;
    FLOAT32 EmitterToListenerAngle;
    FLOAT32 EmitterToListenerDistance;
    FLOAT32 EmitterVelocityComponent;
    FLOAT32 ListenerVelocityComponent;
} X3DAUDIO_DSP_SETTINGS, *LPX3DAUDIO_DSP_SETTINGS;
X3DAUDIO_API_(HRESULT) X3DAudioInitialize (UINT32 SpeakerChannelMask, FLOAT32 SpeedOfSound, _Out_writes_bytes_(X3DAUDIO_HANDLE_BYTESIZE) X3DAUDIO_HANDLE Instance);
X3DAUDIO_API_(void) X3DAudioCalculate (_In_reads_bytes_(X3DAUDIO_HANDLE_BYTESIZE) const X3DAUDIO_HANDLE Instance, _In_ const X3DAUDIO_LISTENER* pListener, _In_ const X3DAUDIO_EMITTER* pEmitter, UINT32 Flags, _Inout_ X3DAUDIO_DSP_SETTINGS* pDSPSettings);
#pragma pack(pop)
#endif
#pragma endregion
