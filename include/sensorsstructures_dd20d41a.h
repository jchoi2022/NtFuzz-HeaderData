       
extern "C" {
typedef struct
{
    float X;
    float Y;
    float Z;
} VEC3D, *PVEC3D;
#pragma warning(push)
#pragma warning(disable:4201)
typedef struct
{
    union
    {
        struct
        {
            float A11;
            float A12;
            float A13;
            float A21;
            float A22;
            float A23;
            float A31;
            float A32;
            float A33;
        };
        struct
        {
            VEC3D V1;
            VEC3D V2;
            VEC3D V3;
        };
        float M[3][3];
    };
} MATRIX3X3, *PMATRIX3X3;
#pragma warning(pop)
typedef struct
{
    float X;
    float Y;
    float Z;
    float W;
} QUATERNION, *PQUATERNION;
typedef enum
{
    AXIS_X = 0,
    AXIS_Y,
    AXIS_Z,
    AXIS_MAX
} AXIS, *PAXIS;
}
