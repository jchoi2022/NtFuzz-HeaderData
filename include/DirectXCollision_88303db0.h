       
#include "DirectXMath.h"
namespace DirectX
{
enum ContainmentType
{
    DISJOINT = 0,
    INTERSECTS = 1,
    CONTAINS = 2
};
enum PlaneIntersectionType
{
    FRONT = 0,
    INTERSECTING = 1,
    BACK = 2
};
struct BoundingBox;
struct BoundingOrientedBox;
struct BoundingFrustum;
#pragma warning(push)
#pragma warning(disable:4324 4820)
struct BoundingSphere
{
    XMFLOAT3 Center;
    float Radius;
    BoundingSphere() noexcept : Center(0, 0, 0), Radius(1.f) {}
    BoundingSphere(const BoundingSphere&) = default;
    BoundingSphere& operator=(const BoundingSphere&) = default;
    BoundingSphere(BoundingSphere&&) = default;
    BoundingSphere& operator=(BoundingSphere&&) = default;
    XM_CONSTEXPR BoundingSphere( _In_ const XMFLOAT3& center, _In_ float radius )
        : Center(center), Radius(radius) {}
    void XM_CALLCONV Transform( _Out_ BoundingSphere& Out, _In_ FXMMATRIX M ) const;
    void XM_CALLCONV Transform( _Out_ BoundingSphere& Out, _In_ float Scale, _In_ FXMVECTOR Rotation, _In_ FXMVECTOR Translation ) const;
    ContainmentType XM_CALLCONV Contains( _In_ FXMVECTOR Point ) const;
    ContainmentType XM_CALLCONV Contains( _In_ FXMVECTOR V0, _In_ FXMVECTOR V1, _In_ FXMVECTOR V2 ) const;
    ContainmentType Contains( _In_ const BoundingSphere& sh ) const;
    ContainmentType Contains( _In_ const BoundingBox& box ) const;
    ContainmentType Contains( _In_ const BoundingOrientedBox& box ) const;
    ContainmentType Contains( _In_ const BoundingFrustum& fr ) const;
    bool Intersects( _In_ const BoundingSphere& sh ) const;
    bool Intersects( _In_ const BoundingBox& box ) const;
    bool Intersects( _In_ const BoundingOrientedBox& box ) const;
    bool Intersects( _In_ const BoundingFrustum& fr ) const;
    bool XM_CALLCONV Intersects( _In_ FXMVECTOR V0, _In_ FXMVECTOR V1, _In_ FXMVECTOR V2 ) const;
    PlaneIntersectionType XM_CALLCONV Intersects( _In_ FXMVECTOR Plane ) const;
    bool XM_CALLCONV Intersects( _In_ FXMVECTOR Origin, _In_ FXMVECTOR Direction, _Out_ float& Dist ) const;
    ContainmentType XM_CALLCONV ContainedBy( _In_ FXMVECTOR Plane0, _In_ FXMVECTOR Plane1, _In_ FXMVECTOR Plane2,
                                                     _In_ GXMVECTOR Plane3, _In_ HXMVECTOR Plane4, _In_ HXMVECTOR Plane5 ) const;
    static void CreateMerged( _Out_ BoundingSphere& Out, _In_ const BoundingSphere& S1, _In_ const BoundingSphere& S2 );
    static void CreateFromBoundingBox( _Out_ BoundingSphere& Out, _In_ const BoundingBox& box );
    static void CreateFromBoundingBox( _Out_ BoundingSphere& Out, _In_ const BoundingOrientedBox& box );
    static void CreateFromPoints( _Out_ BoundingSphere& Out, _In_ size_t Count,
                                  _In_reads_bytes_(sizeof(XMFLOAT3)+Stride*(Count-1)) const XMFLOAT3* pPoints, _In_ size_t Stride );
    static void CreateFromFrustum( _Out_ BoundingSphere& Out, _In_ const BoundingFrustum& fr );
};
struct BoundingBox
{
    static const size_t CORNER_COUNT = 8;
    XMFLOAT3 Center;
    XMFLOAT3 Extents;
    BoundingBox() noexcept : Center(0, 0, 0), Extents(1.f, 1.f, 1.f) {}
    BoundingBox(const BoundingBox&) = default;
    BoundingBox& operator=(const BoundingBox&) = default;
    BoundingBox(BoundingBox&&) = default;
    BoundingBox& operator=(BoundingBox&&) = default;
    XM_CONSTEXPR BoundingBox( _In_ const XMFLOAT3& center, _In_ const XMFLOAT3& extents )
        : Center(center), Extents(extents) {}
    void XM_CALLCONV Transform( _Out_ BoundingBox& Out, _In_ FXMMATRIX M ) const;
    void XM_CALLCONV Transform( _Out_ BoundingBox& Out, _In_ float Scale, _In_ FXMVECTOR Rotation, _In_ FXMVECTOR Translation ) const;
    void GetCorners( _Out_writes_(8) XMFLOAT3* Corners ) const;
    ContainmentType XM_CALLCONV Contains( _In_ FXMVECTOR Point ) const;
    ContainmentType XM_CALLCONV Contains( _In_ FXMVECTOR V0, _In_ FXMVECTOR V1, _In_ FXMVECTOR V2 ) const;
    ContainmentType Contains( _In_ const BoundingSphere& sh ) const;
    ContainmentType Contains( _In_ const BoundingBox& box ) const;
    ContainmentType Contains( _In_ const BoundingOrientedBox& box ) const;
    ContainmentType Contains( _In_ const BoundingFrustum& fr ) const;
    bool Intersects( _In_ const BoundingSphere& sh ) const;
    bool Intersects( _In_ const BoundingBox& box ) const;
    bool Intersects( _In_ const BoundingOrientedBox& box ) const;
    bool Intersects( _In_ const BoundingFrustum& fr ) const;
    bool XM_CALLCONV Intersects( _In_ FXMVECTOR V0, _In_ FXMVECTOR V1, _In_ FXMVECTOR V2 ) const;
    PlaneIntersectionType XM_CALLCONV Intersects( _In_ FXMVECTOR Plane ) const;
    bool XM_CALLCONV Intersects( _In_ FXMVECTOR Origin, _In_ FXMVECTOR Direction, _Out_ float& Dist ) const;
    ContainmentType XM_CALLCONV ContainedBy( _In_ FXMVECTOR Plane0, _In_ FXMVECTOR Plane1, _In_ FXMVECTOR Plane2,
                                                     _In_ GXMVECTOR Plane3, _In_ HXMVECTOR Plane4, _In_ HXMVECTOR Plane5 ) const;
    static void CreateMerged( _Out_ BoundingBox& Out, _In_ const BoundingBox& b1, _In_ const BoundingBox& b2 );
    static void CreateFromSphere( _Out_ BoundingBox& Out, _In_ const BoundingSphere& sh );
    static void XM_CALLCONV CreateFromPoints( _Out_ BoundingBox& Out, _In_ FXMVECTOR pt1, _In_ FXMVECTOR pt2 );
    static void CreateFromPoints( _Out_ BoundingBox& Out, _In_ size_t Count,
                                  _In_reads_bytes_(sizeof(XMFLOAT3)+Stride*(Count-1)) const XMFLOAT3* pPoints, _In_ size_t Stride );
};
struct BoundingOrientedBox
{
    static const size_t CORNER_COUNT = 8;
    XMFLOAT3 Center;
    XMFLOAT3 Extents;
    XMFLOAT4 Orientation;
    BoundingOrientedBox() noexcept : Center(0, 0, 0), Extents(1.f, 1.f, 1.f), Orientation(0, 0, 0, 1.f) {}
    BoundingOrientedBox(const BoundingOrientedBox&) = default;
    BoundingOrientedBox& operator=(const BoundingOrientedBox&) = default;
    BoundingOrientedBox(BoundingOrientedBox&&) = default;
    BoundingOrientedBox& operator=(BoundingOrientedBox&&) = default;
    XM_CONSTEXPR BoundingOrientedBox( _In_ const XMFLOAT3& _Center, _In_ const XMFLOAT3& _Extents, _In_ const XMFLOAT4& _Orientation )
        : Center(_Center), Extents(_Extents), Orientation(_Orientation) {}
    void XM_CALLCONV Transform( _Out_ BoundingOrientedBox& Out, _In_ FXMMATRIX M ) const;
    void XM_CALLCONV Transform( _Out_ BoundingOrientedBox& Out, _In_ float Scale, _In_ FXMVECTOR Rotation, _In_ FXMVECTOR Translation ) const;
    void GetCorners( _Out_writes_(8) XMFLOAT3* Corners ) const;
    ContainmentType XM_CALLCONV Contains( _In_ FXMVECTOR Point ) const;
    ContainmentType XM_CALLCONV Contains( _In_ FXMVECTOR V0, _In_ FXMVECTOR V1, _In_ FXMVECTOR V2 ) const;
    ContainmentType Contains( _In_ const BoundingSphere& sh ) const;
    ContainmentType Contains( _In_ const BoundingBox& box ) const;
    ContainmentType Contains( _In_ const BoundingOrientedBox& box ) const;
    ContainmentType Contains( _In_ const BoundingFrustum& fr ) const;
    bool Intersects( _In_ const BoundingSphere& sh ) const;
    bool Intersects( _In_ const BoundingBox& box ) const;
    bool Intersects( _In_ const BoundingOrientedBox& box ) const;
    bool Intersects( _In_ const BoundingFrustum& fr ) const;
    bool XM_CALLCONV Intersects( _In_ FXMVECTOR V0, _In_ FXMVECTOR V1, _In_ FXMVECTOR V2 ) const;
    PlaneIntersectionType XM_CALLCONV Intersects( _In_ FXMVECTOR Plane ) const;
    bool XM_CALLCONV Intersects( _In_ FXMVECTOR Origin, _In_ FXMVECTOR Direction, _Out_ float& Dist ) const;
    ContainmentType XM_CALLCONV ContainedBy( _In_ FXMVECTOR Plane0, _In_ FXMVECTOR Plane1, _In_ FXMVECTOR Plane2,
                                                     _In_ GXMVECTOR Plane3, _In_ HXMVECTOR Plane4, _In_ HXMVECTOR Plane5 ) const;
    static void CreateFromBoundingBox( _Out_ BoundingOrientedBox& Out, _In_ const BoundingBox& box );
    static void CreateFromPoints( _Out_ BoundingOrientedBox& Out, _In_ size_t Count,
                                  _In_reads_bytes_(sizeof(XMFLOAT3)+Stride*(Count-1)) const XMFLOAT3* pPoints, _In_ size_t Stride );
};
struct BoundingFrustum
{
    static const size_t CORNER_COUNT = 8;
    XMFLOAT3 Origin;
    XMFLOAT4 Orientation;
    float RightSlope;
    float LeftSlope;
    float TopSlope;
    float BottomSlope;
    float Near, Far;
    BoundingFrustum() noexcept :
        Origin(0, 0, 0), Orientation(0, 0, 0, 1.f), RightSlope(1.f), LeftSlope(-1.f),
        TopSlope(1.f), BottomSlope(-1.f), Near(0), Far(1.f) {}
    BoundingFrustum(const BoundingFrustum&) = default;
    BoundingFrustum& operator=(const BoundingFrustum&) = default;
    BoundingFrustum(BoundingFrustum&&) = default;
    BoundingFrustum& operator=(BoundingFrustum&&) = default;
    XM_CONSTEXPR BoundingFrustum( _In_ const XMFLOAT3& _Origin, _In_ const XMFLOAT4& _Orientation,
                     _In_ float _RightSlope, _In_ float _LeftSlope, _In_ float _TopSlope, _In_ float _BottomSlope,
                     _In_ float _Near, _In_ float _Far )
        : Origin(_Origin), Orientation(_Orientation),
          RightSlope(_RightSlope), LeftSlope(_LeftSlope), TopSlope(_TopSlope), BottomSlope(_BottomSlope),
          Near(_Near), Far(_Far) {}
    BoundingFrustum( _In_ CXMMATRIX Projection );
    void XM_CALLCONV Transform( _Out_ BoundingFrustum& Out, _In_ FXMMATRIX M ) const;
    void XM_CALLCONV Transform( _Out_ BoundingFrustum& Out, _In_ float Scale, _In_ FXMVECTOR Rotation, _In_ FXMVECTOR Translation ) const;
    void GetCorners( _Out_writes_(8) XMFLOAT3* Corners ) const;
    ContainmentType XM_CALLCONV Contains( _In_ FXMVECTOR Point ) const;
    ContainmentType XM_CALLCONV Contains( _In_ FXMVECTOR V0, _In_ FXMVECTOR V1, _In_ FXMVECTOR V2 ) const;
    ContainmentType Contains( _In_ const BoundingSphere& sp ) const;
    ContainmentType Contains( _In_ const BoundingBox& box ) const;
    ContainmentType Contains( _In_ const BoundingOrientedBox& box ) const;
    ContainmentType Contains( _In_ const BoundingFrustum& fr ) const;
    bool Intersects( _In_ const BoundingSphere& sh ) const;
    bool Intersects( _In_ const BoundingBox& box ) const;
    bool Intersects( _In_ const BoundingOrientedBox& box ) const;
    bool Intersects( _In_ const BoundingFrustum& fr ) const;
    bool XM_CALLCONV Intersects( _In_ FXMVECTOR V0, _In_ FXMVECTOR V1, _In_ FXMVECTOR V2 ) const;
    PlaneIntersectionType XM_CALLCONV Intersects( _In_ FXMVECTOR Plane ) const;
    bool XM_CALLCONV Intersects( _In_ FXMVECTOR rayOrigin, _In_ FXMVECTOR Direction, _Out_ float& Dist ) const;
    ContainmentType XM_CALLCONV ContainedBy( _In_ FXMVECTOR Plane0, _In_ FXMVECTOR Plane1, _In_ FXMVECTOR Plane2,
                                                     _In_ GXMVECTOR Plane3, _In_ HXMVECTOR Plane4, _In_ HXMVECTOR Plane5 ) const;
    void GetPlanes( _Out_opt_ XMVECTOR* NearPlane, _Out_opt_ XMVECTOR* FarPlane, _Out_opt_ XMVECTOR* RightPlane,
                    _Out_opt_ XMVECTOR* LeftPlane, _Out_opt_ XMVECTOR* TopPlane, _Out_opt_ XMVECTOR* BottomPlane ) const;
    static void XM_CALLCONV CreateFromMatrix( _Out_ BoundingFrustum& Out, _In_ FXMMATRIX Projection );
};
namespace TriangleTests
{
    bool XM_CALLCONV Intersects( _In_ FXMVECTOR Origin, _In_ FXMVECTOR Direction, _In_ FXMVECTOR V0, _In_ GXMVECTOR V1, _In_ HXMVECTOR V2, _Out_ float& Dist );
    bool XM_CALLCONV Intersects( _In_ FXMVECTOR A0, _In_ FXMVECTOR A1, _In_ FXMVECTOR A2, _In_ GXMVECTOR B0, _In_ HXMVECTOR B1, _In_ HXMVECTOR B2 );
    PlaneIntersectionType XM_CALLCONV Intersects( _In_ FXMVECTOR V0, _In_ FXMVECTOR V1, _In_ FXMVECTOR V2, _In_ GXMVECTOR Plane );
    ContainmentType XM_CALLCONV ContainedBy( _In_ FXMVECTOR V0, _In_ FXMVECTOR V1, _In_ FXMVECTOR V2,
                                                         _In_ GXMVECTOR Plane0, _In_ HXMVECTOR Plane1, _In_ HXMVECTOR Plane2,
                                                         _In_ CXMVECTOR Plane3, _In_ CXMVECTOR Plane4, _In_ CXMVECTOR Plane5 );
}
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable : 4068 4365 4616 6001)
#pragma prefast(push)
#pragma prefast(disable : 25000, "FXMVECTOR is 16 bytes")
#pragma prefast(disable : 26495, "Union initialization confuses /analyze")
#include "DirectXCollision.inl"
#pragma prefast(pop)
#pragma warning(pop)
}
