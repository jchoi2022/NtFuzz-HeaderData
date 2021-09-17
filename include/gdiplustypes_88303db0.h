#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef BOOL (CALLBACK * ImageAbort)(VOID *);
typedef ImageAbort DrawImageAbort;
typedef ImageAbort GetThumbnailImageAbort;
}
extern "C" {
typedef BOOL (CALLBACK * EnumerateMetafileProc)(EmfPlusRecordType,UINT,UINT,const BYTE*,VOID*);
}
typedef float REAL;
class Size;
class SizeF;
class Point;
class PointF;
class Rect;
class RectF;
class CharacterRange;
_Return_type_success_(return == 0) enum Status
{
    Ok = 0,
    GenericError = 1,
    InvalidParameter = 2,
    OutOfMemory = 3,
    ObjectBusy = 4,
    InsufficientBuffer = 5,
    NotImplemented = 6,
    Win32Error = 7,
    WrongState = 8,
    Aborted = 9,
    FileNotFound = 10,
    ValueOverflow = 11,
    AccessDenied = 12,
    UnknownImageFormat = 13,
    FontFamilyNotFound = 14,
    FontStyleNotFound = 15,
    NotTrueTypeFont = 16,
    UnsupportedGdiplusVersion = 17,
    GdiplusNotInitialized = 18,
    PropertyNotFound = 19,
    PropertyNotSupported = 20,
};
class SizeF
{
public:
    SizeF()
    {
        Width = Height = 0.0f;
    }
    SizeF(IN const SizeF& size)
    {
        Width = size.Width;
        Height = size.Height;
    }
    SizeF(IN REAL width,
          IN REAL height)
    {
        Width = width;
        Height = height;
    }
    SizeF operator+(IN const SizeF& sz) const
    {
        return SizeF(Width + sz.Width,
                     Height + sz.Height);
    }
    SizeF operator-(IN const SizeF& sz) const
    {
        return SizeF(Width - sz.Width,
                     Height - sz.Height);
    }
    BOOL Equals(IN const SizeF& sz) const
    {
        return (Width == sz.Width) && (Height == sz.Height);
    }
    BOOL Empty() const
    {
        return (Width == 0.0f && Height == 0.0f);
    }
public:
    REAL Width;
    REAL Height;
};
class Size
{
public:
    Size()
    {
        Width = Height = 0;
    }
    Size(IN const Size& size)
    {
        Width = size.Width;
        Height = size.Height;
    }
    Size(IN INT width,
         IN INT height)
    {
        Width = width;
        Height = height;
    }
    Size operator+(IN const Size& sz) const
    {
        return Size(Width + sz.Width,
                    Height + sz.Height);
    }
    Size operator-(IN const Size& sz) const
    {
        return Size(Width - sz.Width,
                    Height - sz.Height);
    }
    BOOL Equals(IN const Size& sz) const
    {
        return (Width == sz.Width) && (Height == sz.Height);
    }
    BOOL Empty() const
    {
        return (Width == 0 && Height == 0);
    }
public:
    INT Width;
    INT Height;
};
class PointF
{
public:
   PointF()
   {
       X = Y = 0.0f;
   }
   PointF(IN const PointF &point)
   {
       X = point.X;
       Y = point.Y;
   }
   PointF(IN const SizeF &size)
   {
       X = size.Width;
       Y = size.Height;
   }
   PointF(IN REAL x,
          IN REAL y)
   {
       X = x;
       Y = y;
   }
   PointF operator+(IN const PointF& point) const
   {
       return PointF(X + point.X,
                     Y + point.Y);
   }
   PointF operator-(IN const PointF& point) const
   {
       return PointF(X - point.X,
                     Y - point.Y);
   }
   BOOL Equals(IN const PointF& point)
   {
       return (X == point.X) && (Y == point.Y);
   }
public:
    REAL X;
    REAL Y;
};
class Point
{
public:
   Point()
   {
       X = Y = 0;
   }
   Point(IN const Point &point)
   {
       X = point.X;
       Y = point.Y;
   }
   Point(IN const Size &size)
   {
       X = size.Width;
       Y = size.Height;
   }
   Point(IN INT x,
         IN INT y)
   {
       X = x;
       Y = y;
   }
   Point operator+(IN const Point& point) const
   {
       return Point(X + point.X,
                    Y + point.Y);
   }
   Point operator-(IN const Point& point) const
   {
       return Point(X - point.X,
                    Y - point.Y);
   }
   BOOL Equals(IN const Point& point)
   {
       return (X == point.X) && (Y == point.Y);
   }
public:
    INT X;
    INT Y;
};
class RectF
{
public:
    RectF()
    {
        X = Y = Width = Height = 0.0f;
    }
    RectF(IN REAL x,
          IN REAL y,
          IN REAL width,
          IN REAL height)
    {
        X = x;
        Y = y;
        Width = width;
        Height = height;
    }
    RectF(IN const PointF& location,
          IN const SizeF& size)
    {
        X = location.X;
        Y = location.Y;
        Width = size.Width;
        Height = size.Height;
    }
    RectF* Clone() const
    {
        return new RectF(X, Y, Width, Height);
    }
    VOID GetLocation(OUT PointF* point) const
    {
        point->X = X;
        point->Y = Y;
    }
    VOID GetSize(OUT SizeF* size) const
    {
        size->Width = Width;
        size->Height = Height;
    }
    VOID GetBounds(OUT RectF* rect) const
    {
        rect->X = X;
        rect->Y = Y;
        rect->Width = Width;
        rect->Height = Height;
    }
    REAL GetLeft() const
    {
        return X;
    }
    REAL GetTop() const
    {
        return Y;
    }
    REAL GetRight() const
    {
        return X+Width;
    }
    REAL GetBottom() const
    {
        return Y+Height;
    }
    BOOL IsEmptyArea() const
    {
        return (Width <= REAL_EPSILON) || (Height <= REAL_EPSILON);
    }
    BOOL Equals(IN const RectF & rect) const
    {
        return X == rect.X &&
               Y == rect.Y &&
               Width == rect.Width &&
               Height == rect.Height;
    }
    BOOL Contains(IN REAL x,
                  IN REAL y) const
    {
        return x >= X && x < X+Width &&
               y >= Y && y < Y+Height;
    }
    BOOL Contains(IN const PointF& pt) const
    {
        return Contains(pt.X, pt.Y);
    }
    BOOL Contains(IN const RectF& rect) const
    {
        return (X <= rect.X) && (rect.GetRight() <= GetRight()) &&
               (Y <= rect.Y) && (rect.GetBottom() <= GetBottom());
    }
    VOID Inflate(IN REAL dx,
                 IN REAL dy)
    {
        X -= dx;
        Y -= dy;
        Width += 2*dx;
        Height += 2*dy;
    }
    VOID Inflate(IN const PointF& point)
    {
        Inflate(point.X, point.Y);
    }
    BOOL Intersect(IN const RectF& rect)
    {
        return Intersect(*this, *this, rect);
    }
    static BOOL Intersect(OUT RectF& c,
                          IN const RectF& a,
                          IN const RectF& b)
    {
        REAL right = min(a.GetRight(), b.GetRight());
        REAL bottom = min(a.GetBottom(), b.GetBottom());
        REAL left = max(a.GetLeft(), b.GetLeft());
        REAL top = max(a.GetTop(), b.GetTop());
        c.X = left;
        c.Y = top;
        c.Width = right - left;
        c.Height = bottom - top;
        return !c.IsEmptyArea();
    }
    BOOL IntersectsWith(IN const RectF& rect) const
    {
        return (GetLeft() < rect.GetRight() &&
                GetTop() < rect.GetBottom() &&
                GetRight() > rect.GetLeft() &&
                GetBottom() > rect.GetTop());
    }
    static BOOL Union(OUT RectF& c,
                      IN const RectF& a,
                      IN const RectF& b)
    {
        REAL right = max(a.GetRight(), b.GetRight());
        REAL bottom = max(a.GetBottom(), b.GetBottom());
        REAL left = min(a.GetLeft(), b.GetLeft());
        REAL top = min(a.GetTop(), b.GetTop());
        c.X = left;
        c.Y = top;
        c.Width = right - left;
        c.Height = bottom - top;
        return !c.IsEmptyArea();
    }
    VOID Offset(IN const PointF& point)
    {
        Offset(point.X, point.Y);
    }
    VOID Offset(IN REAL dx,
                IN REAL dy)
    {
        X += dx;
        Y += dy;
    }
public:
    REAL X;
    REAL Y;
    REAL Width;
    REAL Height;
};
class Rect
{
public:
    Rect()
    {
        X = Y = Width = Height = 0;
    }
    Rect(IN INT x,
         IN INT y,
         IN INT width,
         IN INT height)
    {
        X = x;
        Y = y;
        Width = width;
        Height = height;
    }
    Rect(IN const Point& location,
         IN const Size& size)
    {
        X = location.X;
        Y = location.Y;
        Width = size.Width;
        Height = size.Height;
    }
    Rect* Clone() const
    {
        return new Rect(X, Y, Width, Height);
    }
    VOID GetLocation(OUT Point* point) const
    {
        point->X = X;
        point->Y = Y;
    }
    VOID GetSize(OUT Size* size) const
    {
        size->Width = Width;
        size->Height = Height;
    }
    VOID GetBounds(OUT Rect* rect) const
    {
        rect->X = X;
        rect->Y = Y;
        rect->Width = Width;
        rect->Height = Height;
    }
    INT GetLeft() const
    {
        return X;
    }
    INT GetTop() const
    {
        return Y;
    }
    INT GetRight() const
    {
        return X+Width;
    }
    INT GetBottom() const
    {
        return Y+Height;
    }
    BOOL IsEmptyArea() const
    {
        return (Width <= 0) || (Height <= 0);
    }
    BOOL Equals(IN const Rect & rect) const
    {
        return X == rect.X &&
               Y == rect.Y &&
               Width == rect.Width &&
               Height == rect.Height;
    }
    BOOL Contains(IN INT x,
                  IN INT y) const
    {
        return x >= X && x < X+Width &&
               y >= Y && y < Y+Height;
    }
    BOOL Contains(IN const Point& pt) const
    {
        return Contains(pt.X, pt.Y);
    }
    BOOL Contains(IN Rect& rect) const
    {
        return (X <= rect.X) && (rect.GetRight() <= GetRight()) &&
               (Y <= rect.Y) && (rect.GetBottom() <= GetBottom());
    }
    VOID Inflate(IN INT dx,
                 IN INT dy)
    {
        X -= dx;
        Y -= dy;
        Width += 2*dx;
        Height += 2*dy;
    }
    VOID Inflate(IN const Point& point)
    {
        Inflate(point.X, point.Y);
    }
    BOOL Intersect(IN const Rect& rect)
    {
        return Intersect(*this, *this, rect);
    }
    static BOOL Intersect(OUT Rect& c,
                          IN const Rect& a,
                          IN const Rect& b)
    {
        INT right = min(a.GetRight(), b.GetRight());
        INT bottom = min(a.GetBottom(), b.GetBottom());
        INT left = max(a.GetLeft(), b.GetLeft());
        INT top = max(a.GetTop(), b.GetTop());
        c.X = left;
        c.Y = top;
        c.Width = right - left;
        c.Height = bottom - top;
        return !c.IsEmptyArea();
    }
    BOOL IntersectsWith(IN const Rect& rect) const
    {
        return (GetLeft() < rect.GetRight() &&
                GetTop() < rect.GetBottom() &&
                GetRight() > rect.GetLeft() &&
                GetBottom() > rect.GetTop());
    }
    static BOOL Union(OUT Rect& c,
                      IN const Rect& a,
                      IN const Rect& b)
    {
        INT right = max(a.GetRight(), b.GetRight());
        INT bottom = max(a.GetBottom(), b.GetBottom());
        INT left = min(a.GetLeft(), b.GetLeft());
        INT top = min(a.GetTop(), b.GetTop());
        c.X = left;
        c.Y = top;
        c.Width = right - left;
        c.Height = bottom - top;
        return !c.IsEmptyArea();
    }
    VOID Offset(IN const Point& point)
    {
        Offset(point.X, point.Y);
    }
    VOID Offset(IN INT dx,
                IN INT dy)
    {
        X += dx;
        Y += dy;
    }
public:
    INT X;
    INT Y;
    INT Width;
    INT Height;
};
class PathData
{
public:
    PathData()
    {
        Count = 0;
        Points = NULL;
        Types = NULL;
    }
    ~PathData()
    {
        if (Points != NULL)
        {
            delete [] Points;
        }
        if (Types != NULL)
        {
            delete [] Types;
        }
    }
private:
    PathData(const PathData &);
    PathData& operator=(const PathData &);
public:
    INT Count;
    PointF* Points;
    _Field_size_opt_(Count) BYTE* Types;
};
class CharacterRange
{
public:
    CharacterRange(
        INT first,
        INT length
    ) :
        First (first),
        Length (length)
    {}
    CharacterRange() : First(0), Length(0)
    {}
    CharacterRange & operator = (const CharacterRange &rhs)
    {
        First = rhs.First;
        Length = rhs.Length;
        return *this;
    }
    INT First;
    INT Length;
};
#endif
#pragma endregion
