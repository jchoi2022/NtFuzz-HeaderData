       
#include <winapifamily.h>
#include <float.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef struct HrtfPosition
{
    float x;
    float y;
    float z;
} HrtfPosition;
typedef struct HrtfOrientation
{
    float element[9];
} HrtfOrientation;
typedef enum HrtfDirectivityType
{
    OmniDirectional=0,
    Cardioid,
    Cone
} HrtfDirectivityType;
typedef enum HrtfEnvironment
{
    Small=0,
    Medium,
    Large,
    Outdoors,
} HrtfEnvironment;
typedef struct HrtfDirectivity
{
    HrtfDirectivityType type;
    float scaling;
} HrtfDirectivity;
typedef struct HrtfDirectivityCardioid
{
    HrtfDirectivity directivity;
    float order;
} HrtfDirectivityCardioid;
typedef struct HrtfDirectivityCone
{
    HrtfDirectivity directivity;
    float innerAngle;
    float outerAngle;
} HrtfDirectivityCone;
typedef enum HrtfDistanceDecayType
{
    NaturalDecay=0,
    CustomDecay
} HrtfDistanceDecayType;
typedef struct HrtfDistanceDecay
{
    HrtfDistanceDecayType type;
    float maxGain;
    float minGain;
    float unityGainDistance;
    float cutoffDistance;
} HrtfDistanceDecay;
typedef struct HrtfApoInit
{
    HrtfDistanceDecay* distanceDecay;
    HrtfDirectivity* directivity;
} HrtfApoInit;
STDAPI CreateHrtfApo(
    _In_ const HrtfApoInit* init,
    _COM_Outptr_ IXAPO** xApo
);
DECLARE_INTERFACE_IID_(IXAPOHrtfParameters, IUnknown, "15B3CD66-E9DE-4464-B6E6-2BC3CF63D455")
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void **ppv) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(SetSourcePosition)(THIS_ _In_ const HrtfPosition* position) PURE;
    STDMETHOD(SetSourceOrientation)(THIS_ _In_ const HrtfOrientation* orientation) PURE;
    STDMETHOD(SetSourceGain)(THIS_ _In_ float gain) PURE;
    STDMETHOD(SetEnvironment)(THIS_ _In_ HrtfEnvironment environment) PURE;
};
#endif
#pragma endregion
