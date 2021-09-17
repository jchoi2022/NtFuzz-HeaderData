#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "d3d11.h"
    #define D3DCSX_DLL D3DCSX_DLL_W
extern "C" {
typedef enum D3DX11_SCAN_DATA_TYPE
{
    D3DX11_SCAN_DATA_TYPE_FLOAT = 1,
    D3DX11_SCAN_DATA_TYPE_INT,
    D3DX11_SCAN_DATA_TYPE_UINT,
} D3DX11_SCAN_DATA_TYPE;
typedef enum D3DX11_SCAN_OPCODE
{
    D3DX11_SCAN_OPCODE_ADD = 1,
    D3DX11_SCAN_OPCODE_MIN,
    D3DX11_SCAN_OPCODE_MAX,
    D3DX11_SCAN_OPCODE_MUL,
    D3DX11_SCAN_OPCODE_AND,
    D3DX11_SCAN_OPCODE_OR,
    D3DX11_SCAN_OPCODE_XOR,
} D3DX11_SCAN_OPCODE;
typedef enum D3DX11_SCAN_DIRECTION
{
    D3DX11_SCAN_DIRECTION_FORWARD = 1,
    D3DX11_SCAN_DIRECTION_BACKWARD,
} D3DX11_SCAN_DIRECTION;
DEFINE_GUID(IID_ID3DX11Scan, 0x5089b68f, 0xe71d, 0x4d38, 0xbe, 0x8e, 0xf3, 0x63, 0xb9, 0x5a, 0x94, 0x05);
DECLARE_INTERFACE_(ID3DX11Scan, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(SetScanDirection)(THIS_ D3DX11_SCAN_DIRECTION Direction) PURE;
    STDMETHOD(Scan)( THIS_
        D3DX11_SCAN_DATA_TYPE ElementType,
        D3DX11_SCAN_OPCODE OpCode,
        UINT ElementScanSize,
        _In_ ID3D11UnorderedAccessView* pSrc,
        _In_ ID3D11UnorderedAccessView* pDst
    ) PURE;
    STDMETHOD(Multiscan)( THIS_
        D3DX11_SCAN_DATA_TYPE ElementType,
        D3DX11_SCAN_OPCODE OpCode,
        UINT ElementScanSize,
        UINT ElementScanPitch,
        UINT ScanCount,
        _In_ ID3D11UnorderedAccessView* pSrc,
        _In_ ID3D11UnorderedAccessView* pDst
    ) PURE;
};
HRESULT WINAPI D3DX11CreateScan(
    _In_ ID3D11DeviceContext* pDeviceContext,
    UINT MaxElementScanSize,
    UINT MaxScanCount,
    _Out_ ID3DX11Scan** ppScan );
DEFINE_GUID(IID_ID3DX11SegmentedScan, 0xa915128c, 0xd954, 0x4c79, 0xbf, 0xe1, 0x64, 0xdb, 0x92, 0x31, 0x94, 0xd6);
DECLARE_INTERFACE_(ID3DX11SegmentedScan, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(SetScanDirection)(THIS_ D3DX11_SCAN_DIRECTION Direction) PURE;
    STDMETHOD(SegScan)( THIS_
        D3DX11_SCAN_DATA_TYPE ElementType,
        D3DX11_SCAN_OPCODE OpCode,
        UINT ElementScanSize,
        _In_opt_ ID3D11UnorderedAccessView* pSrc,
        _In_ ID3D11UnorderedAccessView* pSrcElementFlags,
        _In_ ID3D11UnorderedAccessView* pDst
    ) PURE;
};
HRESULT WINAPI D3DX11CreateSegmentedScan(
    _In_ ID3D11DeviceContext* pDeviceContext,
    UINT MaxElementScanSize,
    _Out_ ID3DX11SegmentedScan** ppScan );
DEFINE_GUID(IID_ID3DX11FFT, 0xb3f7a938, 0x4c93, 0x4310, 0xa6, 0x75, 0xb3, 0x0d, 0x6d, 0xe5, 0x05, 0x53);
DECLARE_INTERFACE_(ID3DX11FFT, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(SetForwardScale)(THIS_ FLOAT ForwardScale) PURE;
    STDMETHOD_(FLOAT, GetForwardScale)(THIS) PURE;
    STDMETHOD(SetInverseScale)(THIS_ FLOAT InverseScale) PURE;
    STDMETHOD_(FLOAT, GetInverseScale)(THIS) PURE;
    STDMETHOD(AttachBuffersAndPrecompute)( THIS_
        _In_range_(0,D3DX11_FFT_MAX_TEMP_BUFFERS) UINT NumTempBuffers,
        _In_reads_(NumTempBuffers) ID3D11UnorderedAccessView* const* ppTempBuffers,
        _In_range_(0,D3DX11_FFT_MAX_PRECOMPUTE_BUFFERS) UINT NumPrecomputeBuffers,
        _In_reads_(NumPrecomputeBuffers) ID3D11UnorderedAccessView* const* ppPrecomputeBufferSizes ) PURE;
    STDMETHOD(ForwardTransform)( THIS_
        _In_ const ID3D11UnorderedAccessView* pInputBuffer,
        _Inout_ ID3D11UnorderedAccessView** ppOutputBuffer ) PURE;
    STDMETHOD(InverseTransform)( THIS_
        _In_ const ID3D11UnorderedAccessView* pInputBuffer,
        _Inout_ ID3D11UnorderedAccessView** ppOutputBuffer ) PURE;
};
typedef enum D3DX11_FFT_DATA_TYPE
{
    D3DX11_FFT_DATA_TYPE_REAL,
    D3DX11_FFT_DATA_TYPE_COMPLEX,
} D3DX11_FFT_DATA_TYPE;
typedef enum D3DX11_FFT_DIM_MASK
{
    D3DX11_FFT_DIM_MASK_1D = 0x1,
    D3DX11_FFT_DIM_MASK_2D = 0x3,
    D3DX11_FFT_DIM_MASK_3D = 0x7,
} D3DX11_FFT_DIM_MASK;
typedef struct D3DX11_FFT_DESC
{
    UINT NumDimensions;
    UINT ElementLengths[D3DX11_FFT_MAX_DIMENSIONS];
    UINT DimensionMask;
    D3DX11_FFT_DATA_TYPE Type;
} D3DX11_FFT_DESC;
typedef struct D3DX11_FFT_BUFFER_INFO
{
    _Field_range_(0,D3DX11_FFT_MAX_TEMP_BUFFERS) UINT NumTempBufferSizes;
    UINT TempBufferFloatSizes[D3DX11_FFT_MAX_TEMP_BUFFERS];
    _Field_range_(0,D3DX11_FFT_MAX_PRECOMPUTE_BUFFERS) UINT NumPrecomputeBufferSizes;
    UINT PrecomputeBufferFloatSizes[D3DX11_FFT_MAX_PRECOMPUTE_BUFFERS];
} D3DX11_FFT_BUFFER_INFO;
typedef enum D3DX11_FFT_CREATE_FLAG
{
    D3DX11_FFT_CREATE_FLAG_NO_PRECOMPUTE_BUFFERS = 0x01L,
} D3DX11_FFT_CREATE_FLAG;
HRESULT WINAPI D3DX11CreateFFT(
   ID3D11DeviceContext* pDeviceContext,
   _In_ const D3DX11_FFT_DESC* pDesc,
   UINT Flags,
   _Out_ D3DX11_FFT_BUFFER_INFO* pBufferInfo,
   _Out_ ID3DX11FFT** ppFFT
 );
HRESULT WINAPI D3DX11CreateFFT1DReal(
   ID3D11DeviceContext* pDeviceContext,
   UINT X,
   UINT Flags,
   _Out_ D3DX11_FFT_BUFFER_INFO* pBufferInfo,
   _Out_ ID3DX11FFT** ppFFT
 );
HRESULT WINAPI D3DX11CreateFFT1DComplex(
   ID3D11DeviceContext* pDeviceContext,
   UINT X,
   UINT Flags,
   _Out_ D3DX11_FFT_BUFFER_INFO* pBufferInfo,
   _Out_ ID3DX11FFT** ppFFT
 );
HRESULT WINAPI D3DX11CreateFFT2DReal(
   ID3D11DeviceContext* pDeviceContext,
   UINT X,
   UINT Y,
   UINT Flags,
   _Out_ D3DX11_FFT_BUFFER_INFO* pBufferInfo,
   _Out_ ID3DX11FFT** ppFFT
 );
HRESULT WINAPI D3DX11CreateFFT2DComplex(
   ID3D11DeviceContext* pDeviceContext,
   UINT X,
   UINT Y,
   UINT Flags,
   _Out_ D3DX11_FFT_BUFFER_INFO* pBufferInfo,
   _Out_ ID3DX11FFT** ppFFT
 );
HRESULT WINAPI D3DX11CreateFFT3DReal(
   ID3D11DeviceContext* pDeviceContext,
   UINT X,
   UINT Y,
   UINT Z,
   UINT Flags,
   _Out_ D3DX11_FFT_BUFFER_INFO* pBufferInfo,
   _Out_ ID3DX11FFT** ppFFT
 );
HRESULT WINAPI D3DX11CreateFFT3DComplex(
   ID3D11DeviceContext* pDeviceContext,
   UINT X,
   UINT Y,
   UINT Z,
   UINT Flags,
   _Out_ D3DX11_FFT_BUFFER_INFO* pBufferInfo,
   _Out_ ID3DX11FFT** ppFFT
 );
}
#endif
#pragma endregion
