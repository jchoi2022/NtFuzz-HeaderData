#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <stdlib.h>
#include <objbase.h>
struct IDirect3D;
struct IDirect3DDevice;
struct IDirect3DLight;
struct IDirect3DMaterial;
struct IDirect3DExecuteBuffer;
struct IDirect3DTexture;
struct IDirect3DViewport;
typedef struct IDirect3D *LPDIRECT3D;
typedef struct IDirect3DDevice *LPDIRECT3DDEVICE;
typedef struct IDirect3DExecuteBuffer *LPDIRECT3DEXECUTEBUFFER;
typedef struct IDirect3DLight *LPDIRECT3DLIGHT;
typedef struct IDirect3DMaterial *LPDIRECT3DMATERIAL;
typedef struct IDirect3DTexture *LPDIRECT3DTEXTURE;
typedef struct IDirect3DViewport *LPDIRECT3DVIEWPORT;
struct IDirect3D2;
struct IDirect3DDevice2;
struct IDirect3DMaterial2;
struct IDirect3DTexture2;
struct IDirect3DViewport2;
typedef struct IDirect3D2 *LPDIRECT3D2;
typedef struct IDirect3DDevice2 *LPDIRECT3DDEVICE2;
typedef struct IDirect3DMaterial2 *LPDIRECT3DMATERIAL2;
typedef struct IDirect3DTexture2 *LPDIRECT3DTEXTURE2;
typedef struct IDirect3DViewport2 *LPDIRECT3DVIEWPORT2;
struct IDirect3D3;
struct IDirect3DDevice3;
struct IDirect3DMaterial3;
struct IDirect3DViewport3;
struct IDirect3DVertexBuffer;
typedef struct IDirect3D3 *LPDIRECT3D3;
typedef struct IDirect3DDevice3 *LPDIRECT3DDEVICE3;
typedef struct IDirect3DMaterial3 *LPDIRECT3DMATERIAL3;
typedef struct IDirect3DViewport3 *LPDIRECT3DVIEWPORT3;
typedef struct IDirect3DVertexBuffer *LPDIRECT3DVERTEXBUFFER;
struct IDirect3D7;
struct IDirect3DDevice7;
struct IDirect3DVertexBuffer7;
typedef struct IDirect3D7 *LPDIRECT3D7;
typedef struct IDirect3DDevice7 *LPDIRECT3DDEVICE7;
typedef struct IDirect3DVertexBuffer7 *LPDIRECT3DVERTEXBUFFER7;
#include "d3dtypes.h"
#include "d3dcaps.h"
extern "C" {
DECLARE_INTERFACE_(IDirect3D, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(Initialize)(THIS_ REFCLSID) PURE;
    STDMETHOD(EnumDevices)(THIS_ LPD3DENUMDEVICESCALLBACK,LPVOID) PURE;
    STDMETHOD(CreateLight)(THIS_ LPDIRECT3DLIGHT*,IUnknown*) PURE;
    STDMETHOD(CreateMaterial)(THIS_ LPDIRECT3DMATERIAL*,IUnknown*) PURE;
    STDMETHOD(CreateViewport)(THIS_ LPDIRECT3DVIEWPORT*,IUnknown*) PURE;
    STDMETHOD(FindDevice)(THIS_ LPD3DFINDDEVICESEARCH,LPD3DFINDDEVICERESULT) PURE;
};
typedef struct IDirect3D *LPDIRECT3D;
DECLARE_INTERFACE_(IDirect3D2, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(EnumDevices)(THIS_ LPD3DENUMDEVICESCALLBACK,LPVOID) PURE;
    STDMETHOD(CreateLight)(THIS_ LPDIRECT3DLIGHT*,IUnknown*) PURE;
    STDMETHOD(CreateMaterial)(THIS_ LPDIRECT3DMATERIAL2*,IUnknown*) PURE;
    STDMETHOD(CreateViewport)(THIS_ LPDIRECT3DVIEWPORT2*,IUnknown*) PURE;
    STDMETHOD(FindDevice)(THIS_ LPD3DFINDDEVICESEARCH,LPD3DFINDDEVICERESULT) PURE;
    STDMETHOD(CreateDevice)(THIS_ REFCLSID,LPDIRECTDRAWSURFACE,LPDIRECT3DDEVICE2*) PURE;
};
typedef struct IDirect3D2 *LPDIRECT3D2;
DECLARE_INTERFACE_(IDirect3D3, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(EnumDevices)(THIS_ LPD3DENUMDEVICESCALLBACK,LPVOID) PURE;
    STDMETHOD(CreateLight)(THIS_ LPDIRECT3DLIGHT*,LPUNKNOWN) PURE;
    STDMETHOD(CreateMaterial)(THIS_ LPDIRECT3DMATERIAL3*,LPUNKNOWN) PURE;
    STDMETHOD(CreateViewport)(THIS_ LPDIRECT3DVIEWPORT3*,LPUNKNOWN) PURE;
    STDMETHOD(FindDevice)(THIS_ LPD3DFINDDEVICESEARCH,LPD3DFINDDEVICERESULT) PURE;
    STDMETHOD(CreateDevice)(THIS_ REFCLSID,LPDIRECTDRAWSURFACE4,LPDIRECT3DDEVICE3*,LPUNKNOWN) PURE;
    STDMETHOD(CreateVertexBuffer)(THIS_ LPD3DVERTEXBUFFERDESC,LPDIRECT3DVERTEXBUFFER*,DWORD,LPUNKNOWN) PURE;
    STDMETHOD(EnumZBufferFormats)(THIS_ REFCLSID,LPD3DENUMPIXELFORMATSCALLBACK,LPVOID) PURE;
    STDMETHOD(EvictManagedTextures)(THIS) PURE;
};
typedef struct IDirect3D3 *LPDIRECT3D3;
DECLARE_INTERFACE_(IDirect3D7, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(EnumDevices)(THIS_ LPD3DENUMDEVICESCALLBACK7,LPVOID) PURE;
    STDMETHOD(CreateDevice)(THIS_ REFCLSID,LPDIRECTDRAWSURFACE7,LPDIRECT3DDEVICE7*) PURE;
    STDMETHOD(CreateVertexBuffer)(THIS_ LPD3DVERTEXBUFFERDESC,LPDIRECT3DVERTEXBUFFER7*,DWORD) PURE;
    STDMETHOD(EnumZBufferFormats)(THIS_ REFCLSID,LPD3DENUMPIXELFORMATSCALLBACK,LPVOID) PURE;
    STDMETHOD(EvictManagedTextures)(THIS) PURE;
};
typedef struct IDirect3D7 *LPDIRECT3D7;
DECLARE_INTERFACE_(IDirect3DDevice, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(Initialize)(THIS_ LPDIRECT3D,LPGUID,LPD3DDEVICEDESC) PURE;
    STDMETHOD(GetCaps)(THIS_ LPD3DDEVICEDESC,LPD3DDEVICEDESC) PURE;
    STDMETHOD(SwapTextureHandles)(THIS_ LPDIRECT3DTEXTURE,LPDIRECT3DTEXTURE) PURE;
    STDMETHOD(CreateExecuteBuffer)(THIS_ LPD3DEXECUTEBUFFERDESC,LPDIRECT3DEXECUTEBUFFER*,IUnknown*) PURE;
    STDMETHOD(GetStats)(THIS_ LPD3DSTATS) PURE;
    STDMETHOD(Execute)(THIS_ LPDIRECT3DEXECUTEBUFFER,LPDIRECT3DVIEWPORT,DWORD) PURE;
    STDMETHOD(AddViewport)(THIS_ LPDIRECT3DVIEWPORT) PURE;
    STDMETHOD(DeleteViewport)(THIS_ LPDIRECT3DVIEWPORT) PURE;
    STDMETHOD(NextViewport)(THIS_ LPDIRECT3DVIEWPORT,LPDIRECT3DVIEWPORT*,DWORD) PURE;
    STDMETHOD(Pick)(THIS_ LPDIRECT3DEXECUTEBUFFER,LPDIRECT3DVIEWPORT,DWORD,LPD3DRECT) PURE;
    STDMETHOD(GetPickRecords)(THIS_ LPDWORD,LPD3DPICKRECORD) PURE;
    STDMETHOD(EnumTextureFormats)(THIS_ LPD3DENUMTEXTUREFORMATSCALLBACK,LPVOID) PURE;
    STDMETHOD(CreateMatrix)(THIS_ LPD3DMATRIXHANDLE) PURE;
    STDMETHOD(SetMatrix)(THIS_ D3DMATRIXHANDLE,const LPD3DMATRIX) PURE;
    STDMETHOD(GetMatrix)(THIS_ D3DMATRIXHANDLE,LPD3DMATRIX) PURE;
    STDMETHOD(DeleteMatrix)(THIS_ D3DMATRIXHANDLE) PURE;
    STDMETHOD(BeginScene)(THIS) PURE;
    STDMETHOD(EndScene)(THIS) PURE;
    STDMETHOD(GetDirect3D)(THIS_ LPDIRECT3D*) PURE;
};
typedef struct IDirect3DDevice *LPDIRECT3DDEVICE;
DECLARE_INTERFACE_(IDirect3DDevice2, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(GetCaps)(THIS_ LPD3DDEVICEDESC,LPD3DDEVICEDESC) PURE;
    STDMETHOD(SwapTextureHandles)(THIS_ LPDIRECT3DTEXTURE2,LPDIRECT3DTEXTURE2) PURE;
    STDMETHOD(GetStats)(THIS_ LPD3DSTATS) PURE;
    STDMETHOD(AddViewport)(THIS_ LPDIRECT3DVIEWPORT2) PURE;
    STDMETHOD(DeleteViewport)(THIS_ LPDIRECT3DVIEWPORT2) PURE;
    STDMETHOD(NextViewport)(THIS_ LPDIRECT3DVIEWPORT2,LPDIRECT3DVIEWPORT2*,DWORD) PURE;
    STDMETHOD(EnumTextureFormats)(THIS_ LPD3DENUMTEXTUREFORMATSCALLBACK,LPVOID) PURE;
    STDMETHOD(BeginScene)(THIS) PURE;
    STDMETHOD(EndScene)(THIS) PURE;
    STDMETHOD(GetDirect3D)(THIS_ LPDIRECT3D2*) PURE;
    STDMETHOD(SetCurrentViewport)(THIS_ LPDIRECT3DVIEWPORT2) PURE;
    STDMETHOD(GetCurrentViewport)(THIS_ LPDIRECT3DVIEWPORT2 *) PURE;
    STDMETHOD(SetRenderTarget)(THIS_ LPDIRECTDRAWSURFACE,DWORD) PURE;
    STDMETHOD(GetRenderTarget)(THIS_ LPDIRECTDRAWSURFACE *) PURE;
    STDMETHOD(Begin)(THIS_ D3DPRIMITIVETYPE,D3DVERTEXTYPE,DWORD) PURE;
    STDMETHOD(BeginIndexed)(THIS_ D3DPRIMITIVETYPE,D3DVERTEXTYPE,LPVOID,DWORD,DWORD) PURE;
    STDMETHOD(Vertex)(THIS_ LPVOID) PURE;
    STDMETHOD(Index)(THIS_ WORD) PURE;
    STDMETHOD(End)(THIS_ DWORD) PURE;
    STDMETHOD(GetRenderState)(THIS_ D3DRENDERSTATETYPE,LPDWORD) PURE;
    STDMETHOD(SetRenderState)(THIS_ D3DRENDERSTATETYPE,DWORD) PURE;
    STDMETHOD(GetLightState)(THIS_ D3DLIGHTSTATETYPE,LPDWORD) PURE;
    STDMETHOD(SetLightState)(THIS_ D3DLIGHTSTATETYPE,DWORD) PURE;
    STDMETHOD(SetTransform)(THIS_ D3DTRANSFORMSTATETYPE,LPD3DMATRIX) PURE;
    STDMETHOD(GetTransform)(THIS_ D3DTRANSFORMSTATETYPE,LPD3DMATRIX) PURE;
    STDMETHOD(MultiplyTransform)(THIS_ D3DTRANSFORMSTATETYPE,LPD3DMATRIX) PURE;
    STDMETHOD(DrawPrimitive)(THIS_ D3DPRIMITIVETYPE,D3DVERTEXTYPE,LPVOID,DWORD,DWORD) PURE;
    STDMETHOD(DrawIndexedPrimitive)(THIS_ D3DPRIMITIVETYPE,D3DVERTEXTYPE,LPVOID,DWORD,LPWORD,DWORD,DWORD) PURE;
    STDMETHOD(SetClipStatus)(THIS_ LPD3DCLIPSTATUS) PURE;
    STDMETHOD(GetClipStatus)(THIS_ LPD3DCLIPSTATUS) PURE;
};
typedef struct IDirect3DDevice2 *LPDIRECT3DDEVICE2;
DECLARE_INTERFACE_(IDirect3DDevice3, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(GetCaps)(THIS_ LPD3DDEVICEDESC,LPD3DDEVICEDESC) PURE;
    STDMETHOD(GetStats)(THIS_ LPD3DSTATS) PURE;
    STDMETHOD(AddViewport)(THIS_ LPDIRECT3DVIEWPORT3) PURE;
    STDMETHOD(DeleteViewport)(THIS_ LPDIRECT3DVIEWPORT3) PURE;
    STDMETHOD(NextViewport)(THIS_ LPDIRECT3DVIEWPORT3,LPDIRECT3DVIEWPORT3*,DWORD) PURE;
    STDMETHOD(EnumTextureFormats)(THIS_ LPD3DENUMPIXELFORMATSCALLBACK,LPVOID) PURE;
    STDMETHOD(BeginScene)(THIS) PURE;
    STDMETHOD(EndScene)(THIS) PURE;
    STDMETHOD(GetDirect3D)(THIS_ LPDIRECT3D3*) PURE;
    STDMETHOD(SetCurrentViewport)(THIS_ LPDIRECT3DVIEWPORT3) PURE;
    STDMETHOD(GetCurrentViewport)(THIS_ LPDIRECT3DVIEWPORT3 *) PURE;
    STDMETHOD(SetRenderTarget)(THIS_ LPDIRECTDRAWSURFACE4,DWORD) PURE;
    STDMETHOD(GetRenderTarget)(THIS_ LPDIRECTDRAWSURFACE4 *) PURE;
    STDMETHOD(Begin)(THIS_ D3DPRIMITIVETYPE,DWORD,DWORD) PURE;
    STDMETHOD(BeginIndexed)(THIS_ D3DPRIMITIVETYPE,DWORD,LPVOID,DWORD,DWORD) PURE;
    STDMETHOD(Vertex)(THIS_ LPVOID) PURE;
    STDMETHOD(Index)(THIS_ WORD) PURE;
    STDMETHOD(End)(THIS_ DWORD) PURE;
    STDMETHOD(GetRenderState)(THIS_ D3DRENDERSTATETYPE,LPDWORD) PURE;
    STDMETHOD(SetRenderState)(THIS_ D3DRENDERSTATETYPE,DWORD) PURE;
    STDMETHOD(GetLightState)(THIS_ D3DLIGHTSTATETYPE,LPDWORD) PURE;
    STDMETHOD(SetLightState)(THIS_ D3DLIGHTSTATETYPE,DWORD) PURE;
    STDMETHOD(SetTransform)(THIS_ D3DTRANSFORMSTATETYPE,LPD3DMATRIX) PURE;
    STDMETHOD(GetTransform)(THIS_ D3DTRANSFORMSTATETYPE,LPD3DMATRIX) PURE;
    STDMETHOD(MultiplyTransform)(THIS_ D3DTRANSFORMSTATETYPE,LPD3DMATRIX) PURE;
    STDMETHOD(DrawPrimitive)(THIS_ D3DPRIMITIVETYPE,DWORD,LPVOID,DWORD,DWORD) PURE;
    STDMETHOD(DrawIndexedPrimitive)(THIS_ D3DPRIMITIVETYPE,DWORD,LPVOID,DWORD,LPWORD,DWORD,DWORD) PURE;
    STDMETHOD(SetClipStatus)(THIS_ LPD3DCLIPSTATUS) PURE;
    STDMETHOD(GetClipStatus)(THIS_ LPD3DCLIPSTATUS) PURE;
    STDMETHOD(DrawPrimitiveStrided)(THIS_ D3DPRIMITIVETYPE,DWORD,LPD3DDRAWPRIMITIVESTRIDEDDATA,DWORD,DWORD) PURE;
    STDMETHOD(DrawIndexedPrimitiveStrided)(THIS_ D3DPRIMITIVETYPE,DWORD,LPD3DDRAWPRIMITIVESTRIDEDDATA,DWORD,LPWORD,DWORD,DWORD) PURE;
    STDMETHOD(DrawPrimitiveVB)(THIS_ D3DPRIMITIVETYPE,LPDIRECT3DVERTEXBUFFER,DWORD,DWORD,DWORD) PURE;
    STDMETHOD(DrawIndexedPrimitiveVB)(THIS_ D3DPRIMITIVETYPE,LPDIRECT3DVERTEXBUFFER,LPWORD,DWORD,DWORD) PURE;
    STDMETHOD(ComputeSphereVisibility)(THIS_ LPD3DVECTOR,LPD3DVALUE,DWORD,DWORD,LPDWORD) PURE;
    STDMETHOD(GetTexture)(THIS_ DWORD,LPDIRECT3DTEXTURE2 *) PURE;
    STDMETHOD(SetTexture)(THIS_ DWORD,LPDIRECT3DTEXTURE2) PURE;
    STDMETHOD(GetTextureStageState)(THIS_ DWORD,D3DTEXTURESTAGESTATETYPE,LPDWORD) PURE;
    STDMETHOD(SetTextureStageState)(THIS_ DWORD,D3DTEXTURESTAGESTATETYPE,DWORD) PURE;
    STDMETHOD(ValidateDevice)(THIS_ LPDWORD) PURE;
};
typedef struct IDirect3DDevice3 *LPDIRECT3DDEVICE3;
DECLARE_INTERFACE_(IDirect3DDevice7, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(GetCaps)(THIS_ LPD3DDEVICEDESC7) PURE;
    STDMETHOD(EnumTextureFormats)(THIS_ LPD3DENUMPIXELFORMATSCALLBACK,LPVOID) PURE;
    STDMETHOD(BeginScene)(THIS) PURE;
    STDMETHOD(EndScene)(THIS) PURE;
    STDMETHOD(GetDirect3D)(THIS_ LPDIRECT3D7*) PURE;
    STDMETHOD(SetRenderTarget)(THIS_ LPDIRECTDRAWSURFACE7,DWORD) PURE;
    STDMETHOD(GetRenderTarget)(THIS_ LPDIRECTDRAWSURFACE7 *) PURE;
    STDMETHOD(Clear)(THIS_ DWORD,LPD3DRECT,DWORD,D3DCOLOR,D3DVALUE,DWORD) PURE;
    STDMETHOD(SetTransform)(THIS_ D3DTRANSFORMSTATETYPE,LPD3DMATRIX) PURE;
    STDMETHOD(GetTransform)(THIS_ D3DTRANSFORMSTATETYPE,LPD3DMATRIX) PURE;
    STDMETHOD(SetViewport)(THIS_ LPD3DVIEWPORT7) PURE;
    STDMETHOD(MultiplyTransform)(THIS_ D3DTRANSFORMSTATETYPE,LPD3DMATRIX) PURE;
    STDMETHOD(GetViewport)(THIS_ LPD3DVIEWPORT7) PURE;
    STDMETHOD(SetMaterial)(THIS_ LPD3DMATERIAL7) PURE;
    STDMETHOD(GetMaterial)(THIS_ LPD3DMATERIAL7) PURE;
    STDMETHOD(SetLight)(THIS_ DWORD,LPD3DLIGHT7) PURE;
    STDMETHOD(GetLight)(THIS_ DWORD,LPD3DLIGHT7) PURE;
    STDMETHOD(SetRenderState)(THIS_ D3DRENDERSTATETYPE,DWORD) PURE;
    STDMETHOD(GetRenderState)(THIS_ D3DRENDERSTATETYPE,LPDWORD) PURE;
    STDMETHOD(BeginStateBlock)(THIS) PURE;
    STDMETHOD(EndStateBlock)(THIS_ LPDWORD) PURE;
    STDMETHOD(PreLoad)(THIS_ LPDIRECTDRAWSURFACE7) PURE;
    STDMETHOD(DrawPrimitive)(THIS_ D3DPRIMITIVETYPE,DWORD,LPVOID,DWORD,DWORD) PURE;
    STDMETHOD(DrawIndexedPrimitive)(THIS_ D3DPRIMITIVETYPE,DWORD,LPVOID,DWORD,LPWORD,DWORD,DWORD) PURE;
    STDMETHOD(SetClipStatus)(THIS_ LPD3DCLIPSTATUS) PURE;
    STDMETHOD(GetClipStatus)(THIS_ LPD3DCLIPSTATUS) PURE;
    STDMETHOD(DrawPrimitiveStrided)(THIS_ D3DPRIMITIVETYPE,DWORD,LPD3DDRAWPRIMITIVESTRIDEDDATA,DWORD,DWORD) PURE;
    STDMETHOD(DrawIndexedPrimitiveStrided)(THIS_ D3DPRIMITIVETYPE,DWORD,LPD3DDRAWPRIMITIVESTRIDEDDATA,DWORD,LPWORD,DWORD,DWORD) PURE;
    STDMETHOD(DrawPrimitiveVB)(THIS_ D3DPRIMITIVETYPE,LPDIRECT3DVERTEXBUFFER7,DWORD,DWORD,DWORD) PURE;
    STDMETHOD(DrawIndexedPrimitiveVB)(THIS_ D3DPRIMITIVETYPE,LPDIRECT3DVERTEXBUFFER7,DWORD,DWORD,LPWORD,DWORD,DWORD) PURE;
    STDMETHOD(ComputeSphereVisibility)(THIS_ LPD3DVECTOR,LPD3DVALUE,DWORD,DWORD,LPDWORD) PURE;
    STDMETHOD(GetTexture)(THIS_ DWORD,LPDIRECTDRAWSURFACE7 *) PURE;
    STDMETHOD(SetTexture)(THIS_ DWORD,LPDIRECTDRAWSURFACE7) PURE;
    STDMETHOD(GetTextureStageState)(THIS_ DWORD,D3DTEXTURESTAGESTATETYPE,LPDWORD) PURE;
    STDMETHOD(SetTextureStageState)(THIS_ DWORD,D3DTEXTURESTAGESTATETYPE,DWORD) PURE;
    STDMETHOD(ValidateDevice)(THIS_ LPDWORD) PURE;
    STDMETHOD(ApplyStateBlock)(THIS_ DWORD) PURE;
    STDMETHOD(CaptureStateBlock)(THIS_ DWORD) PURE;
    STDMETHOD(DeleteStateBlock)(THIS_ DWORD) PURE;
    STDMETHOD(CreateStateBlock)(THIS_ D3DSTATEBLOCKTYPE,LPDWORD) PURE;
    STDMETHOD(Load)(THIS_ LPDIRECTDRAWSURFACE7,LPPOINT,LPDIRECTDRAWSURFACE7,LPRECT,DWORD) PURE;
    STDMETHOD(LightEnable)(THIS_ DWORD,BOOL) PURE;
    STDMETHOD(GetLightEnable)(THIS_ DWORD,BOOL*) PURE;
    STDMETHOD(SetClipPlane)(THIS_ DWORD,D3DVALUE*) PURE;
    STDMETHOD(GetClipPlane)(THIS_ DWORD,D3DVALUE*) PURE;
    STDMETHOD(GetInfo)(THIS_ DWORD,LPVOID,DWORD) PURE;
};
typedef struct IDirect3DDevice7 *LPDIRECT3DDEVICE7;
DECLARE_INTERFACE_(IDirect3DExecuteBuffer, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(Initialize)(THIS_ LPDIRECT3DDEVICE,LPD3DEXECUTEBUFFERDESC) PURE;
    STDMETHOD(Lock)(THIS_ LPD3DEXECUTEBUFFERDESC) PURE;
    STDMETHOD(Unlock)(THIS) PURE;
    STDMETHOD(SetExecuteData)(THIS_ LPD3DEXECUTEDATA) PURE;
    STDMETHOD(GetExecuteData)(THIS_ LPD3DEXECUTEDATA) PURE;
    STDMETHOD(Validate)(THIS_ LPDWORD,LPD3DVALIDATECALLBACK,LPVOID,DWORD) PURE;
    STDMETHOD(Optimize)(THIS_ DWORD) PURE;
};
typedef struct IDirect3DExecuteBuffer *LPDIRECT3DEXECUTEBUFFER;
DECLARE_INTERFACE_(IDirect3DLight, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(Initialize)(THIS_ LPDIRECT3D) PURE;
    STDMETHOD(SetLight)(THIS_ LPD3DLIGHT) PURE;
    STDMETHOD(GetLight)(THIS_ LPD3DLIGHT) PURE;
};
typedef struct IDirect3DLight *LPDIRECT3DLIGHT;
DECLARE_INTERFACE_(IDirect3DMaterial, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(Initialize)(THIS_ LPDIRECT3D) PURE;
    STDMETHOD(SetMaterial)(THIS_ LPD3DMATERIAL) PURE;
    STDMETHOD(GetMaterial)(THIS_ LPD3DMATERIAL) PURE;
    STDMETHOD(GetHandle)(THIS_ LPDIRECT3DDEVICE,LPD3DMATERIALHANDLE) PURE;
    STDMETHOD(Reserve)(THIS) PURE;
    STDMETHOD(Unreserve)(THIS) PURE;
};
typedef struct IDirect3DMaterial *LPDIRECT3DMATERIAL;
DECLARE_INTERFACE_(IDirect3DMaterial2, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(SetMaterial)(THIS_ LPD3DMATERIAL) PURE;
    STDMETHOD(GetMaterial)(THIS_ LPD3DMATERIAL) PURE;
    STDMETHOD(GetHandle)(THIS_ LPDIRECT3DDEVICE2,LPD3DMATERIALHANDLE) PURE;
};
typedef struct IDirect3DMaterial2 *LPDIRECT3DMATERIAL2;
DECLARE_INTERFACE_(IDirect3DMaterial3, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(SetMaterial)(THIS_ LPD3DMATERIAL) PURE;
    STDMETHOD(GetMaterial)(THIS_ LPD3DMATERIAL) PURE;
    STDMETHOD(GetHandle)(THIS_ LPDIRECT3DDEVICE3,LPD3DMATERIALHANDLE) PURE;
};
typedef struct IDirect3DMaterial3 *LPDIRECT3DMATERIAL3;
DECLARE_INTERFACE_(IDirect3DTexture, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(Initialize)(THIS_ LPDIRECT3DDEVICE,LPDIRECTDRAWSURFACE) PURE;
    STDMETHOD(GetHandle)(THIS_ LPDIRECT3DDEVICE,LPD3DTEXTUREHANDLE) PURE;
    STDMETHOD(PaletteChanged)(THIS_ DWORD,DWORD) PURE;
    STDMETHOD(Load)(THIS_ LPDIRECT3DTEXTURE) PURE;
    STDMETHOD(Unload)(THIS) PURE;
};
typedef struct IDirect3DTexture *LPDIRECT3DTEXTURE;
DECLARE_INTERFACE_(IDirect3DTexture2, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(GetHandle)(THIS_ LPDIRECT3DDEVICE2,LPD3DTEXTUREHANDLE) PURE;
    STDMETHOD(PaletteChanged)(THIS_ DWORD,DWORD) PURE;
    STDMETHOD(Load)(THIS_ LPDIRECT3DTEXTURE2) PURE;
};
typedef struct IDirect3DTexture2 *LPDIRECT3DTEXTURE2;
DECLARE_INTERFACE_(IDirect3DViewport, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(Initialize)(THIS_ LPDIRECT3D) PURE;
    STDMETHOD(GetViewport)(THIS_ LPD3DVIEWPORT) PURE;
    STDMETHOD(SetViewport)(THIS_ LPD3DVIEWPORT) PURE;
    STDMETHOD(TransformVertices)(THIS_ DWORD,LPD3DTRANSFORMDATA,DWORD,LPDWORD) PURE;
    STDMETHOD(LightElements)(THIS_ DWORD,LPD3DLIGHTDATA) PURE;
    STDMETHOD(SetBackground)(THIS_ D3DMATERIALHANDLE) PURE;
    STDMETHOD(GetBackground)(THIS_ LPD3DMATERIALHANDLE,LPBOOL) PURE;
    STDMETHOD(SetBackgroundDepth)(THIS_ LPDIRECTDRAWSURFACE) PURE;
    STDMETHOD(GetBackgroundDepth)(THIS_ LPDIRECTDRAWSURFACE*,LPBOOL) PURE;
    STDMETHOD(Clear)(THIS_ DWORD,LPD3DRECT,DWORD) PURE;
    STDMETHOD(AddLight)(THIS_ LPDIRECT3DLIGHT) PURE;
    STDMETHOD(DeleteLight)(THIS_ LPDIRECT3DLIGHT) PURE;
    STDMETHOD(NextLight)(THIS_ LPDIRECT3DLIGHT,LPDIRECT3DLIGHT*,DWORD) PURE;
};
typedef struct IDirect3DViewport *LPDIRECT3DVIEWPORT;
DECLARE_INTERFACE_(IDirect3DViewport2, IDirect3DViewport)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(Initialize)(THIS_ LPDIRECT3D) PURE;
    STDMETHOD(GetViewport)(THIS_ LPD3DVIEWPORT) PURE;
    STDMETHOD(SetViewport)(THIS_ LPD3DVIEWPORT) PURE;
    STDMETHOD(TransformVertices)(THIS_ DWORD,LPD3DTRANSFORMDATA,DWORD,LPDWORD) PURE;
    STDMETHOD(LightElements)(THIS_ DWORD,LPD3DLIGHTDATA) PURE;
    STDMETHOD(SetBackground)(THIS_ D3DMATERIALHANDLE) PURE;
    STDMETHOD(GetBackground)(THIS_ LPD3DMATERIALHANDLE,LPBOOL) PURE;
    STDMETHOD(SetBackgroundDepth)(THIS_ LPDIRECTDRAWSURFACE) PURE;
    STDMETHOD(GetBackgroundDepth)(THIS_ LPDIRECTDRAWSURFACE*,LPBOOL) PURE;
    STDMETHOD(Clear)(THIS_ DWORD,LPD3DRECT,DWORD) PURE;
    STDMETHOD(AddLight)(THIS_ LPDIRECT3DLIGHT) PURE;
    STDMETHOD(DeleteLight)(THIS_ LPDIRECT3DLIGHT) PURE;
    STDMETHOD(NextLight)(THIS_ LPDIRECT3DLIGHT,LPDIRECT3DLIGHT*,DWORD) PURE;
    STDMETHOD(GetViewport2)(THIS_ LPD3DVIEWPORT2) PURE;
    STDMETHOD(SetViewport2)(THIS_ LPD3DVIEWPORT2) PURE;
};
typedef struct IDirect3DViewport2 *LPDIRECT3DVIEWPORT2;
DECLARE_INTERFACE_(IDirect3DViewport3, IDirect3DViewport2)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(Initialize)(THIS_ LPDIRECT3D) PURE;
    STDMETHOD(GetViewport)(THIS_ LPD3DVIEWPORT) PURE;
    STDMETHOD(SetViewport)(THIS_ LPD3DVIEWPORT) PURE;
    STDMETHOD(TransformVertices)(THIS_ DWORD,LPD3DTRANSFORMDATA,DWORD,LPDWORD) PURE;
    STDMETHOD(LightElements)(THIS_ DWORD,LPD3DLIGHTDATA) PURE;
    STDMETHOD(SetBackground)(THIS_ D3DMATERIALHANDLE) PURE;
    STDMETHOD(GetBackground)(THIS_ LPD3DMATERIALHANDLE,LPBOOL) PURE;
    STDMETHOD(SetBackgroundDepth)(THIS_ LPDIRECTDRAWSURFACE) PURE;
    STDMETHOD(GetBackgroundDepth)(THIS_ LPDIRECTDRAWSURFACE*,LPBOOL) PURE;
    STDMETHOD(Clear)(THIS_ DWORD,LPD3DRECT,DWORD) PURE;
    STDMETHOD(AddLight)(THIS_ LPDIRECT3DLIGHT) PURE;
    STDMETHOD(DeleteLight)(THIS_ LPDIRECT3DLIGHT) PURE;
    STDMETHOD(NextLight)(THIS_ LPDIRECT3DLIGHT,LPDIRECT3DLIGHT*,DWORD) PURE;
    STDMETHOD(GetViewport2)(THIS_ LPD3DVIEWPORT2) PURE;
    STDMETHOD(SetViewport2)(THIS_ LPD3DVIEWPORT2) PURE;
    STDMETHOD(SetBackgroundDepth2)(THIS_ LPDIRECTDRAWSURFACE4) PURE;
    STDMETHOD(GetBackgroundDepth2)(THIS_ LPDIRECTDRAWSURFACE4*,LPBOOL) PURE;
    STDMETHOD(Clear2)(THIS_ DWORD,LPD3DRECT,DWORD,D3DCOLOR,D3DVALUE,DWORD) PURE;
};
typedef struct IDirect3DViewport3 *LPDIRECT3DVIEWPORT3;
DECLARE_INTERFACE_(IDirect3DVertexBuffer, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(Lock)(THIS_ DWORD,LPVOID*,LPDWORD) PURE;
    STDMETHOD(Unlock)(THIS) PURE;
    STDMETHOD(ProcessVertices)(THIS_ DWORD,DWORD,DWORD,LPDIRECT3DVERTEXBUFFER,DWORD,LPDIRECT3DDEVICE3,DWORD) PURE;
    STDMETHOD(GetVertexBufferDesc)(THIS_ LPD3DVERTEXBUFFERDESC) PURE;
    STDMETHOD(Optimize)(THIS_ LPDIRECT3DDEVICE3,DWORD) PURE;
};
typedef struct IDirect3DVertexBuffer *LPDIRECT3DVERTEXBUFFER;
DECLARE_INTERFACE_(IDirect3DVertexBuffer7, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(Lock)(THIS_ DWORD,LPVOID*,LPDWORD) PURE;
    STDMETHOD(Unlock)(THIS) PURE;
    STDMETHOD(ProcessVertices)(THIS_ DWORD,DWORD,DWORD,LPDIRECT3DVERTEXBUFFER7,DWORD,LPDIRECT3DDEVICE7,DWORD) PURE;
    STDMETHOD(GetVertexBufferDesc)(THIS_ LPD3DVERTEXBUFFERDESC) PURE;
    STDMETHOD(Optimize)(THIS_ LPDIRECT3DDEVICE7,DWORD) PURE;
    STDMETHOD(ProcessVerticesStrided)(THIS_ DWORD,DWORD,DWORD,LPD3DDRAWPRIMITIVESTRIDEDDATA,DWORD,LPDIRECT3DDEVICE7,DWORD) PURE;
};
typedef struct IDirect3DVertexBuffer7 *LPDIRECT3DVERTEXBUFFER7;
};
#endif
#pragma endregion
