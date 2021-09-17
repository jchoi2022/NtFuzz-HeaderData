#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWICPalette IWICPalette;
typedef interface IWICBitmapSource IWICBitmapSource;
typedef interface IWICFormatConverter IWICFormatConverter;
typedef interface IWICPlanarFormatConverter IWICPlanarFormatConverter;
typedef interface IWICBitmapScaler IWICBitmapScaler;
typedef interface IWICBitmapClipper IWICBitmapClipper;
typedef interface IWICBitmapFlipRotator IWICBitmapFlipRotator;
typedef interface IWICBitmapLock IWICBitmapLock;
typedef interface IWICBitmap IWICBitmap;
typedef interface IWICColorContext IWICColorContext;
typedef interface IWICColorTransform IWICColorTransform;
typedef interface IWICFastMetadataEncoder IWICFastMetadataEncoder;
typedef interface IWICStream IWICStream;
typedef interface IWICEnumMetadataItem IWICEnumMetadataItem;
typedef interface IWICMetadataQueryReader IWICMetadataQueryReader;
typedef interface IWICMetadataQueryWriter IWICMetadataQueryWriter;
typedef interface IWICBitmapEncoder IWICBitmapEncoder;
typedef interface IWICBitmapFrameEncode IWICBitmapFrameEncode;
typedef interface IWICPlanarBitmapFrameEncode IWICPlanarBitmapFrameEncode;
typedef interface IWICImageEncoder IWICImageEncoder;
typedef interface IWICBitmapDecoder IWICBitmapDecoder;
typedef interface IWICBitmapSourceTransform IWICBitmapSourceTransform;
typedef interface IWICPlanarBitmapSourceTransform IWICPlanarBitmapSourceTransform;
typedef interface IWICBitmapFrameDecode IWICBitmapFrameDecode;
typedef interface IWICProgressiveLevelControl IWICProgressiveLevelControl;
typedef interface IWICProgressCallback IWICProgressCallback;
typedef interface IWICBitmapCodecProgressNotification IWICBitmapCodecProgressNotification;
typedef interface IWICComponentInfo IWICComponentInfo;
typedef interface IWICFormatConverterInfo IWICFormatConverterInfo;
typedef interface IWICBitmapCodecInfo IWICBitmapCodecInfo;
typedef interface IWICBitmapEncoderInfo IWICBitmapEncoderInfo;
typedef interface IWICBitmapDecoderInfo IWICBitmapDecoderInfo;
typedef interface IWICPixelFormatInfo IWICPixelFormatInfo;
typedef interface IWICPixelFormatInfo2 IWICPixelFormatInfo2;
typedef interface IWICImagingFactory IWICImagingFactory;
typedef interface IWICImagingFactory2 IWICImagingFactory2;
typedef interface IWICDevelopRawNotificationCallback IWICDevelopRawNotificationCallback;
typedef interface IWICDevelopRaw IWICDevelopRaw;
typedef interface IWICDdsDecoder IWICDdsDecoder;
typedef interface IWICDdsEncoder IWICDdsEncoder;
typedef interface IWICDdsFrameDecode IWICDdsFrameDecode;
typedef interface IWICJpegFrameDecode IWICJpegFrameDecode;
typedef interface IWICJpegFrameEncode IWICJpegFrameEncode;
#include "wtypes.h"
#include "propidl.h"
#include "ocidl.h"
#include "dxgiformat.h"
#include "dxgitype.h"
extern "C"{
#include <intsafe.h>
#include <dcommon.h>
DEFINE_GUID(CLSID_WICImagingFactory, 0xcacaf262, 0x9370, 0x4615, 0xa1, 0x3b, 0x9f, 0x55, 0x39, 0xda, 0x4c, 0xa);
DEFINE_GUID(CLSID_WICImagingFactory1, 0xcacaf262, 0x9370, 0x4615, 0xa1, 0x3b, 0x9f, 0x55, 0x39, 0xda, 0x4c, 0xa);
DEFINE_GUID(CLSID_WICImagingFactory2, 0x317d06e8, 0x5f24, 0x433d, 0xbd, 0xf7, 0x79, 0xce, 0x68, 0xd8, 0xab, 0xc2);
DEFINE_GUID(GUID_VendorMicrosoft, 0xf0e749ca, 0xedef, 0x4589, 0xa7, 0x3a, 0xee, 0xe, 0x62, 0x6a, 0x2a, 0x2b);
DEFINE_GUID(GUID_VendorMicrosoftBuiltIn, 0x257a30fd, 0x6b6, 0x462b, 0xae, 0xa4, 0x63, 0xf7, 0xb, 0x86, 0xe5, 0x33);
DEFINE_GUID(CLSID_WICPngDecoder, 0x389ea17b, 0x5078, 0x4cde, 0xb6, 0xef, 0x25, 0xc1, 0x51, 0x75, 0xc7, 0x51);
DEFINE_GUID(CLSID_WICPngDecoder1, 0x389ea17b, 0x5078, 0x4cde, 0xb6, 0xef, 0x25, 0xc1, 0x51, 0x75, 0xc7, 0x51);
DEFINE_GUID(CLSID_WICPngDecoder2, 0xe018945b, 0xaa86, 0x4008, 0x9b, 0xd4, 0x67, 0x77, 0xa1, 0xe4, 0x0c, 0x11);
DEFINE_GUID(CLSID_WICBmpDecoder, 0x6b462062, 0x7cbf, 0x400d, 0x9f, 0xdb, 0x81, 0x3d, 0xd1, 0x0f, 0x27, 0x78);
DEFINE_GUID(CLSID_WICIcoDecoder, 0xc61bfcdf, 0x2e0f, 0x4aad, 0xa8, 0xd7, 0xe0, 0x6b, 0xaf, 0xeb, 0xcd, 0xfe);
DEFINE_GUID(CLSID_WICJpegDecoder, 0x9456a480, 0xe88b, 0x43ea, 0x9e, 0x73, 0x0b, 0x2d, 0x9b, 0x71, 0xb1, 0xca);
DEFINE_GUID(CLSID_WICGifDecoder, 0x381dda3c, 0x9ce9, 0x4834, 0xa2, 0x3e, 0x1f, 0x98, 0xf8, 0xfc, 0x52, 0xbe);
DEFINE_GUID(CLSID_WICTiffDecoder, 0xb54e85d9, 0xfe23, 0x499f, 0x8b, 0x88, 0x6a, 0xce, 0xa7, 0x13, 0x75, 0x2b);
DEFINE_GUID(CLSID_WICWmpDecoder, 0xa26cec36, 0x234c, 0x4950, 0xae, 0x16, 0xe3, 0x4a, 0xac, 0xe7, 0x1d, 0x0d);
DEFINE_GUID(CLSID_WICDdsDecoder, 0x9053699f, 0xa341, 0x429d, 0x9e, 0x90, 0xee, 0x43, 0x7c, 0xf8, 0x0c, 0x73);
DEFINE_GUID(CLSID_WICBmpEncoder, 0x69be8bb4, 0xd66d, 0x47c8, 0x86, 0x5a, 0xed, 0x15, 0x89, 0x43, 0x37, 0x82);
DEFINE_GUID(CLSID_WICPngEncoder, 0x27949969, 0x876a, 0x41d7, 0x94, 0x47, 0x56, 0x8f, 0x6a, 0x35, 0xa4, 0xdc);
DEFINE_GUID(CLSID_WICJpegEncoder, 0x1a34f5c1, 0x4a5a, 0x46dc, 0xb6, 0x44, 0x1f, 0x45, 0x67, 0xe7, 0xa6, 0x76);
DEFINE_GUID(CLSID_WICGifEncoder, 0x114f5598, 0x0b22, 0x40a0, 0x86, 0xa1, 0xc8, 0x3e, 0xa4, 0x95, 0xad, 0xbd);
DEFINE_GUID(CLSID_WICTiffEncoder, 0x0131be10, 0x2001, 0x4c5f, 0xa9, 0xb0, 0xcc, 0x88, 0xfa, 0xb6, 0x4c, 0xe8);
DEFINE_GUID(CLSID_WICWmpEncoder, 0xac4ce3cb, 0xe1c1, 0x44cd, 0x82, 0x15, 0x5a, 0x16, 0x65, 0x50, 0x9e, 0xc2);
DEFINE_GUID(CLSID_WICDdsEncoder, 0xa61dde94, 0x66ce, 0x4ac1, 0x88, 0x1b, 0x71, 0x68, 0x05, 0x88, 0x89, 0x5e);
DEFINE_GUID(CLSID_WICAdngDecoder, 0x981d9411, 0x909e, 0x42a7, 0x8f, 0x5d, 0xa7, 0x47, 0xff, 0x05, 0x2e, 0xdb);
DEFINE_GUID(CLSID_WICJpegQualcommPhoneEncoder, 0x68ed5c62, 0xf534, 0x4979, 0xb2, 0xb3, 0x68, 0x6a, 0x12, 0xb2, 0xb3, 0x4c);
DEFINE_GUID(CLSID_WICHeifDecoder, 0xe9A4A80a, 0x44fe, 0x4DE4, 0x89, 0x71, 0x71, 0x50, 0XB1, 0X0a, 0X51, 0X99);
DEFINE_GUID(CLSID_WICHeifEncoder, 0x0dbecec1, 0x9eb3, 0x4860, 0x9c, 0x6f, 0xdd, 0xbe, 0x86, 0x63, 0x45, 0x75);
DEFINE_GUID(CLSID_WICWebpDecoder, 0x7693E886, 0x51C9, 0x4070, 0x84, 0x19, 0x9F, 0x70, 0X73, 0X8E, 0XC8, 0XFA);
DEFINE_GUID(CLSID_WICRAWDecoder, 0x41945702, 0x8302, 0x44A6, 0x94, 0x45, 0xAC, 0x98, 0xE8, 0xAF, 0xA0, 0x86);
DEFINE_GUID(GUID_ContainerFormatBmp, 0x0af1d87e, 0xfcfe, 0x4188, 0xbd, 0xeb, 0xa7, 0x90, 0x64, 0x71, 0xcb, 0xe3);
DEFINE_GUID(GUID_ContainerFormatPng, 0x1b7cfaf4, 0x713f, 0x473c, 0xbb, 0xcd, 0x61, 0x37, 0x42, 0x5f, 0xae, 0xaf);
DEFINE_GUID(GUID_ContainerFormatIco, 0xa3a860c4, 0x338f, 0x4c17, 0x91, 0x9a, 0xfb, 0xa4, 0xb5, 0x62, 0x8f, 0x21);
DEFINE_GUID(GUID_ContainerFormatJpeg, 0x19e4a5aa, 0x5662, 0x4fc5, 0xa0, 0xc0, 0x17, 0x58, 0x02, 0x8e, 0x10, 0x57);
DEFINE_GUID(GUID_ContainerFormatTiff, 0x163bcc30, 0xe2e9, 0x4f0b, 0x96, 0x1d, 0xa3, 0xe9, 0xfd, 0xb7, 0x88, 0xa3);
DEFINE_GUID(GUID_ContainerFormatGif, 0x1f8a5601, 0x7d4d, 0x4cbd, 0x9c, 0x82, 0x1b, 0xc8, 0xd4, 0xee, 0xb9, 0xa5);
DEFINE_GUID(GUID_ContainerFormatWmp, 0x57a37caa, 0x367a, 0x4540, 0x91, 0x6b, 0xf1, 0x83, 0xc5, 0x09, 0x3a, 0x4b);
DEFINE_GUID(GUID_ContainerFormatDds, 0x9967cb95, 0x2e85, 0x4ac8, 0x8c, 0xa2, 0x83, 0xd7, 0xcc, 0xd4, 0x25, 0xc9);
DEFINE_GUID(GUID_ContainerFormatAdng, 0xf3ff6d0d, 0x38c0, 0x41c4, 0xb1, 0xfe, 0x1f, 0x38, 0x24, 0xf1, 0x7b, 0x84);
DEFINE_GUID(GUID_ContainerFormatHeif, 0xe1e62521, 0x6787, 0x405b, 0xa3, 0x39, 0x50, 0x07, 0x15, 0xb5, 0x76, 0x3f);
DEFINE_GUID(GUID_ContainerFormatWebp, 0xe094b0e2, 0x67f2, 0x45b3, 0xb0, 0xea, 0x11, 0x53, 0x37, 0xca, 0x7c, 0xf3);
DEFINE_GUID(GUID_ContainerFormatRaw, 0xfe99ce60, 0xf19c, 0x433c, 0xa3, 0xae, 0x00, 0xac, 0xef, 0xa9, 0xca, 0x21);
DEFINE_GUID(CLSID_WICImagingCategories, 0xfae3d380, 0xfea4, 0x4623, 0x8c, 0x75, 0xc6, 0xb6, 0x11, 0x10, 0xb6, 0x81);
DEFINE_GUID(CATID_WICBitmapDecoders, 0x7ed96837, 0x96f0, 0x4812, 0xb2, 0x11, 0xf1, 0x3c, 0x24, 0x11, 0x7e, 0xd3);
DEFINE_GUID(CATID_WICBitmapEncoders, 0xac757296, 0x3522, 0x4e11, 0x98, 0x62, 0xc1, 0x7b, 0xe5, 0xa1, 0x76, 0x7e);
DEFINE_GUID(CATID_WICPixelFormats, 0x2b46e70f, 0xcda7, 0x473e, 0x89, 0xf6, 0xdc, 0x96, 0x30, 0xa2, 0x39, 0x0b);
DEFINE_GUID(CATID_WICFormatConverters, 0x7835eae8, 0xbf14, 0x49d1, 0x93, 0xce, 0x53, 0x3a, 0x40, 0x7b, 0x22, 0x48);
DEFINE_GUID(CATID_WICMetadataReader, 0x05af94d8, 0x7174, 0x4cd2, 0xbe, 0x4a, 0x41, 0x24, 0xb8, 0x0e, 0xe4, 0xb8);
DEFINE_GUID(CATID_WICMetadataWriter, 0xabe3b9a4, 0x257d, 0x4b97, 0xbd, 0x1a, 0x29, 0x4a, 0xf4, 0x96, 0x22, 0x2e);
DEFINE_GUID(CLSID_WICDefaultFormatConverter, 0x1a3f11dc, 0xb514, 0x4b17, 0x8c, 0x5f, 0x21, 0x54, 0x51, 0x38, 0x52, 0xf1);
DEFINE_GUID(CLSID_WICFormatConverterHighColor, 0xac75d454, 0x9f37, 0x48f8, 0xb9, 0x72, 0x4e, 0x19, 0xbc, 0x85, 0x60, 0x11);
DEFINE_GUID(CLSID_WICFormatConverterNChannel, 0xc17cabb2, 0xd4a3, 0x47d7, 0xa5, 0x57, 0x33, 0x9b, 0x2e, 0xfb, 0xd4, 0xf1);
DEFINE_GUID(CLSID_WICFormatConverterWMPhoto, 0x9cb5172b, 0xd600, 0x46ba, 0xab, 0x77, 0x77, 0xbb, 0x7e, 0x3a, 0x00, 0xd9);
DEFINE_GUID(CLSID_WICPlanarFormatConverter, 0x184132b8, 0x32f8, 0x4784, 0x91, 0x31, 0xdd, 0x72, 0x24, 0xb2, 0x34, 0x38);
#if 0
typedef DWORD *ID2D1Device;
typedef DWORD *ID2D1Image;
typedef DWORD *D2D1_PIXEL_FORMAT;
#endif
typedef interface ID2D1Device ID2D1Device;
typedef interface ID2D1Image ID2D1Image;
typedef UINT32 WICColor;
typedef struct WICRect
    {
    INT X;
    INT Y;
    INT Width;
    INT Height;
    } WICRect;
typedef BYTE* WICInProcPointer;
#if 0
typedef void *WICInProcPointer;
#endif
typedef
enum WICColorContextType
    {
        WICColorContextUninitialized = 0,
        WICColorContextProfile = 0x1,
        WICColorContextExifColorSpace = 0x2
    } WICColorContextType;
typedef REFGUID REFWICPixelFormatGUID;
typedef GUID WICPixelFormatGUID;
DEFINE_GUID(GUID_WICPixelFormatDontCare, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x00);
DEFINE_GUID(GUID_WICPixelFormat1bppIndexed, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x01);
DEFINE_GUID(GUID_WICPixelFormat2bppIndexed, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x02);
DEFINE_GUID(GUID_WICPixelFormat4bppIndexed, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x03);
DEFINE_GUID(GUID_WICPixelFormat8bppIndexed, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x04);
DEFINE_GUID(GUID_WICPixelFormatBlackWhite, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x05);
DEFINE_GUID(GUID_WICPixelFormat2bppGray, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x06);
DEFINE_GUID(GUID_WICPixelFormat4bppGray, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x07);
DEFINE_GUID(GUID_WICPixelFormat8bppGray, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x08);
DEFINE_GUID(GUID_WICPixelFormat8bppAlpha, 0xe6cd0116, 0xeeba, 0x4161, 0xaa, 0x85, 0x27, 0xdd, 0x9f, 0xb3, 0xa8, 0x95);
DEFINE_GUID(GUID_WICPixelFormat16bppBGR555, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x09);
DEFINE_GUID(GUID_WICPixelFormat16bppBGR565, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0a);
DEFINE_GUID(GUID_WICPixelFormat16bppBGRA5551, 0x05ec7c2b, 0xf1e6, 0x4961, 0xad, 0x46, 0xe1, 0xcc, 0x81, 0x0a, 0x87, 0xd2);
DEFINE_GUID(GUID_WICPixelFormat16bppGray, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0b);
DEFINE_GUID(GUID_WICPixelFormat24bppBGR, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0c);
DEFINE_GUID(GUID_WICPixelFormat24bppRGB, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0d);
DEFINE_GUID(GUID_WICPixelFormat32bppBGR, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0e);
DEFINE_GUID(GUID_WICPixelFormat32bppBGRA, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0f);
DEFINE_GUID(GUID_WICPixelFormat32bppPBGRA, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x10);
DEFINE_GUID(GUID_WICPixelFormat32bppGrayFloat, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x11);
DEFINE_GUID(GUID_WICPixelFormat32bppRGB, 0xd98c6b95, 0x3efe, 0x47d6, 0xbb, 0x25, 0xeb, 0x17, 0x48, 0xab, 0x0c, 0xf1);
DEFINE_GUID(GUID_WICPixelFormat32bppRGBA, 0xf5c7ad2d, 0x6a8d, 0x43dd, 0xa7, 0xa8, 0xa2, 0x99, 0x35, 0x26, 0x1a, 0xe9);
DEFINE_GUID(GUID_WICPixelFormat32bppPRGBA, 0x3cc4a650, 0xa527, 0x4d37, 0xa9, 0x16, 0x31, 0x42, 0xc7, 0xeb, 0xed, 0xba);
DEFINE_GUID(GUID_WICPixelFormat48bppRGB, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x15);
DEFINE_GUID(GUID_WICPixelFormat48bppBGR, 0xe605a384, 0xb468, 0x46ce, 0xbb, 0x2e, 0x36, 0xf1, 0x80, 0xe6, 0x43, 0x13);
DEFINE_GUID(GUID_WICPixelFormat64bppRGB, 0xa1182111, 0x186d, 0x4d42, 0xbc, 0x6a, 0x9c, 0x83, 0x03, 0xa8, 0xdf, 0xf9);
DEFINE_GUID(GUID_WICPixelFormat64bppRGBA, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x16);
DEFINE_GUID(GUID_WICPixelFormat64bppBGRA, 0x1562ff7c, 0xd352, 0x46f9, 0x97, 0x9e, 0x42, 0x97, 0x6b, 0x79, 0x22, 0x46);
DEFINE_GUID(GUID_WICPixelFormat64bppPRGBA, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x17);
DEFINE_GUID(GUID_WICPixelFormat64bppPBGRA, 0x8c518e8e, 0xa4ec, 0x468b, 0xae, 0x70, 0xc9, 0xa3, 0x5a, 0x9c, 0x55, 0x30);
DEFINE_GUID(GUID_WICPixelFormat16bppGrayFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x13);
DEFINE_GUID(GUID_WICPixelFormat32bppBGR101010, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x14);
DEFINE_GUID(GUID_WICPixelFormat48bppRGBFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x12);
DEFINE_GUID(GUID_WICPixelFormat48bppBGRFixedPoint, 0x49ca140e, 0xcab6, 0x493b, 0x9d, 0xdf, 0x60, 0x18, 0x7c, 0x37, 0x53, 0x2a);
DEFINE_GUID(GUID_WICPixelFormat96bppRGBFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x18);
DEFINE_GUID(GUID_WICPixelFormat96bppRGBFloat, 0xe3fed78f, 0xe8db, 0x4acf, 0x84, 0xc1, 0xe9, 0x7f, 0x61, 0x36, 0xb3, 0x27);
DEFINE_GUID(GUID_WICPixelFormat128bppRGBAFloat, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x19);
DEFINE_GUID(GUID_WICPixelFormat128bppPRGBAFloat, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1a);
DEFINE_GUID(GUID_WICPixelFormat128bppRGBFloat, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1b);
DEFINE_GUID(GUID_WICPixelFormat32bppCMYK, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1c);
DEFINE_GUID(GUID_WICPixelFormat64bppRGBAFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1d);
DEFINE_GUID(GUID_WICPixelFormat64bppBGRAFixedPoint, 0x356de33c, 0x54d2, 0x4a23, 0xbb, 0x4, 0x9b, 0x7b, 0xf9, 0xb1, 0xd4, 0x2d);
DEFINE_GUID(GUID_WICPixelFormat64bppRGBFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x40);
DEFINE_GUID(GUID_WICPixelFormat128bppRGBAFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1e);
DEFINE_GUID(GUID_WICPixelFormat128bppRGBFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x41);
DEFINE_GUID(GUID_WICPixelFormat64bppRGBAHalf, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x3a);
DEFINE_GUID(GUID_WICPixelFormat64bppPRGBAHalf, 0x58ad26c2, 0xc623, 0x4d9d, 0xb3, 0x20, 0x38, 0x7e, 0x49, 0xf8, 0xc4, 0x42);
DEFINE_GUID(GUID_WICPixelFormat64bppRGBHalf, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x42);
DEFINE_GUID(GUID_WICPixelFormat48bppRGBHalf, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x3b);
DEFINE_GUID(GUID_WICPixelFormat32bppRGBE, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x3d);
DEFINE_GUID(GUID_WICPixelFormat16bppGrayHalf, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x3e);
DEFINE_GUID(GUID_WICPixelFormat32bppGrayFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x3f);
DEFINE_GUID(GUID_WICPixelFormat32bppRGBA1010102, 0x25238D72, 0xFCF9, 0x4522, 0xb5, 0x14, 0x55, 0x78, 0xe5, 0xad, 0x55, 0xe0);
DEFINE_GUID(GUID_WICPixelFormat32bppRGBA1010102XR, 0x00DE6B9A, 0xC101, 0x434b, 0xb5, 0x02, 0xd0, 0x16, 0x5e, 0xe1, 0x12, 0x2c);
DEFINE_GUID(GUID_WICPixelFormat32bppR10G10B10A2, 0x604e1bb5, 0x8a3c, 0x4b65, 0xb1, 0x1c, 0xbc, 0x0b, 0x8d, 0xd7, 0x5b, 0x7f);
DEFINE_GUID(GUID_WICPixelFormat32bppR10G10B10A2HDR10, 0x9c215c5d, 0x1acc, 0x4f0e, 0xa4, 0xbc, 0x70, 0xfb, 0x3a, 0xe8, 0xfd, 0x28);
DEFINE_GUID(GUID_WICPixelFormat64bppCMYK, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1f);
DEFINE_GUID(GUID_WICPixelFormat24bpp3Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x20);
DEFINE_GUID(GUID_WICPixelFormat32bpp4Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x21);
DEFINE_GUID(GUID_WICPixelFormat40bpp5Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x22);
DEFINE_GUID(GUID_WICPixelFormat48bpp6Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x23);
DEFINE_GUID(GUID_WICPixelFormat56bpp7Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x24);
DEFINE_GUID(GUID_WICPixelFormat64bpp8Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x25);
DEFINE_GUID(GUID_WICPixelFormat48bpp3Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x26);
DEFINE_GUID(GUID_WICPixelFormat64bpp4Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x27);
DEFINE_GUID(GUID_WICPixelFormat80bpp5Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x28);
DEFINE_GUID(GUID_WICPixelFormat96bpp6Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x29);
DEFINE_GUID(GUID_WICPixelFormat112bpp7Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2a);
DEFINE_GUID(GUID_WICPixelFormat128bpp8Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2b);
DEFINE_GUID(GUID_WICPixelFormat40bppCMYKAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2c);
DEFINE_GUID(GUID_WICPixelFormat80bppCMYKAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2d);
DEFINE_GUID(GUID_WICPixelFormat32bpp3ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2e);
DEFINE_GUID(GUID_WICPixelFormat40bpp4ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2f);
DEFINE_GUID(GUID_WICPixelFormat48bpp5ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x30);
DEFINE_GUID(GUID_WICPixelFormat56bpp6ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x31);
DEFINE_GUID(GUID_WICPixelFormat64bpp7ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x32);
DEFINE_GUID(GUID_WICPixelFormat72bpp8ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x33);
DEFINE_GUID(GUID_WICPixelFormat64bpp3ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x34);
DEFINE_GUID(GUID_WICPixelFormat80bpp4ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x35);
DEFINE_GUID(GUID_WICPixelFormat96bpp5ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x36);
DEFINE_GUID(GUID_WICPixelFormat112bpp6ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x37);
DEFINE_GUID(GUID_WICPixelFormat128bpp7ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x38);
DEFINE_GUID(GUID_WICPixelFormat144bpp8ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x39);
DEFINE_GUID(GUID_WICPixelFormat8bppY, 0x91B4DB54, 0x2DF9, 0x42F0, 0xB4, 0x49, 0x29, 0x09, 0xBB, 0x3D, 0xF8, 0x8E);
DEFINE_GUID(GUID_WICPixelFormat8bppCb, 0x1339F224, 0x6BFE, 0x4C3E, 0x93, 0x02, 0xE4, 0xF3, 0xA6, 0xD0, 0xCA, 0x2A);
DEFINE_GUID(GUID_WICPixelFormat8bppCr, 0xB8145053, 0x2116, 0x49F0, 0x88, 0x35, 0xED, 0x84, 0x4B, 0x20, 0x5C, 0x51);
DEFINE_GUID(GUID_WICPixelFormat16bppCbCr, 0xFF95BA6E, 0x11E0, 0x4263, 0xBB, 0x45, 0x01, 0x72, 0x1F, 0x34, 0x60, 0xA4);
DEFINE_GUID(GUID_WICPixelFormat16bppYQuantizedDctCoefficients, 0xA355F433, 0x48E8, 0x4A42, 0x84, 0xD8, 0xE2, 0xAA, 0x26, 0xCA, 0x80, 0xA4);
DEFINE_GUID(GUID_WICPixelFormat16bppCbQuantizedDctCoefficients, 0xD2C4FF61, 0x56A5, 0x49C2, 0x8B, 0x5C, 0x4C, 0x19, 0x25, 0x96, 0x48, 0x37);
DEFINE_GUID(GUID_WICPixelFormat16bppCrQuantizedDctCoefficients, 0x2FE354F0, 0x1680, 0x42D8, 0x92, 0x31, 0xE7, 0x3C, 0x05, 0x65, 0xBF, 0xC1);
typedef
enum WICBitmapCreateCacheOption
    {
        WICBitmapNoCache = 0,
        WICBitmapCacheOnDemand = 0x1,
        WICBitmapCacheOnLoad = 0x2,
        WICBITMAPCREATECACHEOPTION_FORCE_DWORD = 0x7fffffff
    } WICBitmapCreateCacheOption;
typedef
enum WICDecodeOptions
    {
        WICDecodeMetadataCacheOnDemand = 0,
        WICDecodeMetadataCacheOnLoad = 0x1,
        WICMETADATACACHEOPTION_FORCE_DWORD = 0x7fffffff
    } WICDecodeOptions;
typedef
enum WICBitmapEncoderCacheOption
    {
        WICBitmapEncoderCacheInMemory = 0,
        WICBitmapEncoderCacheTempFile = 0x1,
        WICBitmapEncoderNoCache = 0x2,
        WICBITMAPENCODERCACHEOPTION_FORCE_DWORD = 0x7fffffff
    } WICBitmapEncoderCacheOption;
typedef
enum WICComponentType
    {
        WICDecoder = 0x1,
        WICEncoder = 0x2,
        WICPixelFormatConverter = 0x4,
        WICMetadataReader = 0x8,
        WICMetadataWriter = 0x10,
        WICPixelFormat = 0x20,
        WICAllComponents = 0x3f,
        WICCOMPONENTTYPE_FORCE_DWORD = 0x7fffffff
    } WICComponentType;
typedef
enum WICComponentEnumerateOptions
    {
        WICComponentEnumerateDefault = 0,
        WICComponentEnumerateRefresh = 0x1,
        WICComponentEnumerateDisabled = 0x80000000,
        WICComponentEnumerateUnsigned = 0x40000000,
        WICComponentEnumerateBuiltInOnly = 0x20000000,
        WICCOMPONENTENUMERATEOPTIONS_FORCE_DWORD = 0x7fffffff
    } WICComponentEnumerateOptions;
typedef struct WICBitmapPattern
    {
    ULARGE_INTEGER Position;
    ULONG Length;
                    BYTE *Pattern;
                    BYTE *Mask;
    BOOL EndOfStream;
    } WICBitmapPattern;
typedef
enum WICBitmapInterpolationMode
    {
        WICBitmapInterpolationModeNearestNeighbor = 0,
        WICBitmapInterpolationModeLinear = 0x1,
        WICBitmapInterpolationModeCubic = 0x2,
        WICBitmapInterpolationModeFant = 0x3,
        WICBitmapInterpolationModeHighQualityCubic = 0x4,
        WICBITMAPINTERPOLATIONMODE_FORCE_DWORD = 0x7fffffff
    } WICBitmapInterpolationMode;
typedef
enum WICBitmapPaletteType
    {
        WICBitmapPaletteTypeCustom = 0,
        WICBitmapPaletteTypeMedianCut = 0x1,
        WICBitmapPaletteTypeFixedBW = 0x2,
        WICBitmapPaletteTypeFixedHalftone8 = 0x3,
        WICBitmapPaletteTypeFixedHalftone27 = 0x4,
        WICBitmapPaletteTypeFixedHalftone64 = 0x5,
        WICBitmapPaletteTypeFixedHalftone125 = 0x6,
        WICBitmapPaletteTypeFixedHalftone216 = 0x7,
        WICBitmapPaletteTypeFixedWebPalette = WICBitmapPaletteTypeFixedHalftone216,
        WICBitmapPaletteTypeFixedHalftone252 = 0x8,
        WICBitmapPaletteTypeFixedHalftone256 = 0x9,
        WICBitmapPaletteTypeFixedGray4 = 0xa,
        WICBitmapPaletteTypeFixedGray16 = 0xb,
        WICBitmapPaletteTypeFixedGray256 = 0xc,
        WICBITMAPPALETTETYPE_FORCE_DWORD = 0x7fffffff
    } WICBitmapPaletteType;
typedef
enum WICBitmapDitherType
    {
        WICBitmapDitherTypeNone = 0,
        WICBitmapDitherTypeSolid = 0,
        WICBitmapDitherTypeOrdered4x4 = 0x1,
        WICBitmapDitherTypeOrdered8x8 = 0x2,
        WICBitmapDitherTypeOrdered16x16 = 0x3,
        WICBitmapDitherTypeSpiral4x4 = 0x4,
        WICBitmapDitherTypeSpiral8x8 = 0x5,
        WICBitmapDitherTypeDualSpiral4x4 = 0x6,
        WICBitmapDitherTypeDualSpiral8x8 = 0x7,
        WICBitmapDitherTypeErrorDiffusion = 0x8,
        WICBITMAPDITHERTYPE_FORCE_DWORD = 0x7fffffff
    } WICBitmapDitherType;
typedef
enum WICBitmapAlphaChannelOption
    {
        WICBitmapUseAlpha = 0,
        WICBitmapUsePremultipliedAlpha = 0x1,
        WICBitmapIgnoreAlpha = 0x2,
        WICBITMAPALPHACHANNELOPTIONS_FORCE_DWORD = 0x7fffffff
    } WICBitmapAlphaChannelOption;
typedef
enum WICBitmapTransformOptions
    {
        WICBitmapTransformRotate0 = 0,
        WICBitmapTransformRotate90 = 0x1,
        WICBitmapTransformRotate180 = 0x2,
        WICBitmapTransformRotate270 = 0x3,
        WICBitmapTransformFlipHorizontal = 0x8,
        WICBitmapTransformFlipVertical = 0x10,
        WICBITMAPTRANSFORMOPTIONS_FORCE_DWORD = 0x7fffffff
    } WICBitmapTransformOptions;
typedef
enum WICBitmapLockFlags
    {
        WICBitmapLockRead = 0x1,
        WICBitmapLockWrite = 0x2,
        WICBITMAPLOCKFLAGS_FORCE_DWORD = 0x7fffffff
    } WICBitmapLockFlags;
typedef
enum WICBitmapDecoderCapabilities
    {
        WICBitmapDecoderCapabilitySameEncoder = 0x1,
        WICBitmapDecoderCapabilityCanDecodeAllImages = 0x2,
        WICBitmapDecoderCapabilityCanDecodeSomeImages = 0x4,
        WICBitmapDecoderCapabilityCanEnumerateMetadata = 0x8,
        WICBitmapDecoderCapabilityCanDecodeThumbnail = 0x10,
        WICBITMAPDECODERCAPABILITIES_FORCE_DWORD = 0x7fffffff
    } WICBitmapDecoderCapabilities;
typedef
enum WICProgressOperation
    {
        WICProgressOperationCopyPixels = 0x1,
        WICProgressOperationWritePixels = 0x2,
        WICProgressOperationAll = 0xffff,
        WICPROGRESSOPERATION_FORCE_DWORD = 0x7fffffff
    } WICProgressOperation;
typedef
enum WICProgressNotification
    {
        WICProgressNotificationBegin = 0x10000,
        WICProgressNotificationEnd = 0x20000,
        WICProgressNotificationFrequent = 0x40000,
        WICProgressNotificationAll = 0xffff0000,
        WICPROGRESSNOTIFICATION_FORCE_DWORD = 0x7fffffff
    } WICProgressNotification;
typedef
enum WICComponentSigning
    {
        WICComponentSigned = 0x1,
        WICComponentUnsigned = 0x2,
        WICComponentSafe = 0x4,
        WICComponentDisabled = 0x80000000,
        WICCOMPONENTSIGNING_FORCE_DWORD = 0x7fffffff
    } WICComponentSigning;
typedef
enum WICGifLogicalScreenDescriptorProperties
    {
        WICGifLogicalScreenSignature = 0x1,
        WICGifLogicalScreenDescriptorWidth = 0x2,
        WICGifLogicalScreenDescriptorHeight = 0x3,
        WICGifLogicalScreenDescriptorGlobalColorTableFlag = 0x4,
        WICGifLogicalScreenDescriptorColorResolution = 0x5,
        WICGifLogicalScreenDescriptorSortFlag = 0x6,
        WICGifLogicalScreenDescriptorGlobalColorTableSize = 0x7,
        WICGifLogicalScreenDescriptorBackgroundColorIndex = 0x8,
        WICGifLogicalScreenDescriptorPixelAspectRatio = 0x9,
        WICGifLogicalScreenDescriptorProperties_FORCE_DWORD = 0x7fffffff
    } WICGifLogicalScreenDescriptorProperties;
typedef
enum WICGifImageDescriptorProperties
    {
        WICGifImageDescriptorLeft = 0x1,
        WICGifImageDescriptorTop = 0x2,
        WICGifImageDescriptorWidth = 0x3,
        WICGifImageDescriptorHeight = 0x4,
        WICGifImageDescriptorLocalColorTableFlag = 0x5,
        WICGifImageDescriptorInterlaceFlag = 0x6,
        WICGifImageDescriptorSortFlag = 0x7,
        WICGifImageDescriptorLocalColorTableSize = 0x8,
        WICGifImageDescriptorProperties_FORCE_DWORD = 0x7fffffff
    } WICGifImageDescriptorProperties;
typedef
enum WICGifGraphicControlExtensionProperties
    {
        WICGifGraphicControlExtensionDisposal = 0x1,
        WICGifGraphicControlExtensionUserInputFlag = 0x2,
        WICGifGraphicControlExtensionTransparencyFlag = 0x3,
        WICGifGraphicControlExtensionDelay = 0x4,
        WICGifGraphicControlExtensionTransparentColorIndex = 0x5,
        WICGifGraphicControlExtensionProperties_FORCE_DWORD = 0x7fffffff
    } WICGifGraphicControlExtensionProperties;
typedef
enum WICGifApplicationExtensionProperties
    {
        WICGifApplicationExtensionApplication = 0x1,
        WICGifApplicationExtensionData = 0x2,
        WICGifApplicationExtensionProperties_FORCE_DWORD = 0x7fffffff
    } WICGifApplicationExtensionProperties;
typedef
enum WICGifCommentExtensionProperties
    {
        WICGifCommentExtensionText = 0x1,
        WICGifCommentExtensionProperties_FORCE_DWORD = 0x7fffffff
    } WICGifCommentExtensionProperties;
typedef
enum WICJpegCommentProperties
    {
        WICJpegCommentText = 0x1,
        WICJpegCommentProperties_FORCE_DWORD = 0x7fffffff
    } WICJpegCommentProperties;
typedef
enum WICJpegLuminanceProperties
    {
        WICJpegLuminanceTable = 0x1,
        WICJpegLuminanceProperties_FORCE_DWORD = 0x7fffffff
    } WICJpegLuminanceProperties;
typedef
enum WICJpegChrominanceProperties
    {
        WICJpegChrominanceTable = 0x1,
        WICJpegChrominanceProperties_FORCE_DWORD = 0x7fffffff
    } WICJpegChrominanceProperties;
typedef
enum WIC8BIMIptcProperties
    {
        WIC8BIMIptcPString = 0,
        WIC8BIMIptcEmbeddedIPTC = 0x1,
        WIC8BIMIptcProperties_FORCE_DWORD = 0x7fffffff
    } WIC8BIMIptcProperties;
typedef
enum WIC8BIMResolutionInfoProperties
    {
        WIC8BIMResolutionInfoPString = 0x1,
        WIC8BIMResolutionInfoHResolution = 0x2,
        WIC8BIMResolutionInfoHResolutionUnit = 0x3,
        WIC8BIMResolutionInfoWidthUnit = 0x4,
        WIC8BIMResolutionInfoVResolution = 0x5,
        WIC8BIMResolutionInfoVResolutionUnit = 0x6,
        WIC8BIMResolutionInfoHeightUnit = 0x7,
        WIC8BIMResolutionInfoProperties_FORCE_DWORD = 0x7fffffff
    } WIC8BIMResolutionInfoProperties;
typedef
enum WIC8BIMIptcDigestProperties
    {
        WIC8BIMIptcDigestPString = 0x1,
        WIC8BIMIptcDigestIptcDigest = 0x2,
        WIC8BIMIptcDigestProperties_FORCE_DWORD = 0x7fffffff
    } WIC8BIMIptcDigestProperties;
typedef
enum WICPngGamaProperties
    {
        WICPngGamaGamma = 0x1,
        WICPngGamaProperties_FORCE_DWORD = 0x7fffffff
    } WICPngGamaProperties;
typedef
enum WICPngBkgdProperties
    {
        WICPngBkgdBackgroundColor = 0x1,
        WICPngBkgdProperties_FORCE_DWORD = 0x7fffffff
    } WICPngBkgdProperties;
typedef
enum WICPngItxtProperties
    {
        WICPngItxtKeyword = 0x1,
        WICPngItxtCompressionFlag = 0x2,
        WICPngItxtLanguageTag = 0x3,
        WICPngItxtTranslatedKeyword = 0x4,
        WICPngItxtText = 0x5,
        WICPngItxtProperties_FORCE_DWORD = 0x7fffffff
    } WICPngItxtProperties;
typedef
enum WICPngChrmProperties
    {
        WICPngChrmWhitePointX = 0x1,
        WICPngChrmWhitePointY = 0x2,
        WICPngChrmRedX = 0x3,
        WICPngChrmRedY = 0x4,
        WICPngChrmGreenX = 0x5,
        WICPngChrmGreenY = 0x6,
        WICPngChrmBlueX = 0x7,
        WICPngChrmBlueY = 0x8,
        WICPngChrmProperties_FORCE_DWORD = 0x7fffffff
    } WICPngChrmProperties;
typedef
enum WICPngHistProperties
    {
        WICPngHistFrequencies = 0x1,
        WICPngHistProperties_FORCE_DWORD = 0x7fffffff
    } WICPngHistProperties;
typedef
enum WICPngIccpProperties
    {
        WICPngIccpProfileName = 0x1,
        WICPngIccpProfileData = 0x2,
        WICPngIccpProperties_FORCE_DWORD = 0x7fffffff
    } WICPngIccpProperties;
typedef
enum WICPngSrgbProperties
    {
        WICPngSrgbRenderingIntent = 0x1,
        WICPngSrgbProperties_FORCE_DWORD = 0x7fffffff
    } WICPngSrgbProperties;
typedef
enum WICPngTimeProperties
    {
        WICPngTimeYear = 0x1,
        WICPngTimeMonth = 0x2,
        WICPngTimeDay = 0x3,
        WICPngTimeHour = 0x4,
        WICPngTimeMinute = 0x5,
        WICPngTimeSecond = 0x6,
        WICPngTimeProperties_FORCE_DWORD = 0x7fffffff
    } WICPngTimeProperties;
typedef
enum WICHeifProperties
    {
        WICHeifOrientation = 0x1,
        WICHeifProperties_FORCE_DWORD = 0x7fffffff
    } WICHeifProperties;
typedef
enum WICHeifHdrProperties
    {
        WICHeifHdrMaximumLuminanceLevel = 0x1,
        WICHeifHdrMaximumFrameAverageLuminanceLevel = 0x2,
        WICHeifHdrMinimumMasteringDisplayLuminanceLevel = 0x3,
        WICHeifHdrMaximumMasteringDisplayLuminanceLevel = 0x4,
        WICHeifHdrCustomVideoPrimaries = 0x5,
        WICHeifHdrProperties_FORCE_DWORD = 0x7fffffff
    } WICHeifHdrProperties;
typedef
enum WICWebpAnimProperties
    {
        WICWebpAnimLoopCount = 0x1,
        WICWebpAnimProperties_FORCE_DWORD = 0x7fffffff
    } WICWebpAnimProperties;
typedef
enum WICWebpAnmfProperties
    {
        WICWebpAnmfFrameDuration = 0x1,
        WICWebpAnmfProperties_FORCE_DWORD = 0x7fffffff
    } WICWebpAnmfProperties;
typedef
enum WICSectionAccessLevel
    {
        WICSectionAccessLevelRead = 0x1,
        WICSectionAccessLevelReadWrite = 0x3,
        WICSectionAccessLevel_FORCE_DWORD = 0x7fffffff
    } WICSectionAccessLevel;
typedef
enum WICPixelFormatNumericRepresentation
    {
        WICPixelFormatNumericRepresentationUnspecified = 0,
        WICPixelFormatNumericRepresentationIndexed = 0x1,
        WICPixelFormatNumericRepresentationUnsignedInteger = 0x2,
        WICPixelFormatNumericRepresentationSignedInteger = 0x3,
        WICPixelFormatNumericRepresentationFixed = 0x4,
        WICPixelFormatNumericRepresentationFloat = 0x5,
        WICPixelFormatNumericRepresentation_FORCE_DWORD = 0x7fffffff
    } WICPixelFormatNumericRepresentation;
typedef
enum WICPlanarOptions
    {
        WICPlanarOptionsDefault = 0,
        WICPlanarOptionsPreserveSubsampling = 0x1,
        WICPLANAROPTIONS_FORCE_DWORD = 0x7fffffff
    } WICPlanarOptions;
typedef
enum WICJpegIndexingOptions
    {
        WICJpegIndexingOptionsGenerateOnDemand = 0,
        WICJpegIndexingOptionsGenerateOnLoad = 0x1,
        WICJpegIndexingOptions_FORCE_DWORD = 0x7fffffff
    } WICJpegIndexingOptions;
typedef
enum WICJpegTransferMatrix
    {
        WICJpegTransferMatrixIdentity = 0,
        WICJpegTransferMatrixBT601 = 0x1,
        WICJpegTransferMatrix_FORCE_DWORD = 0x7fffffff
    } WICJpegTransferMatrix;
typedef
enum WICJpegScanType
    {
        WICJpegScanTypeInterleaved = 0,
        WICJpegScanTypePlanarComponents = 0x1,
        WICJpegScanTypeProgressive = 0x2,
        WICJpegScanType_FORCE_DWORD = 0x7fffffff
    } WICJpegScanType;
typedef struct WICImageParameters
    {
    D2D1_PIXEL_FORMAT PixelFormat;
    FLOAT DpiX;
    FLOAT DpiY;
    FLOAT Top;
    FLOAT Left;
    UINT32 PixelWidth;
    UINT32 PixelHeight;
    } WICImageParameters;
typedef struct WICBitmapPlaneDescription
    {
    WICPixelFormatGUID Format;
    UINT Width;
    UINT Height;
    } WICBitmapPlaneDescription;
typedef struct WICBitmapPlane
    {
    WICPixelFormatGUID Format;
                    BYTE *pbBuffer;
    UINT cbStride;
    UINT cbBufferSize;
    } WICBitmapPlane;
typedef struct WICJpegFrameHeader
    {
    UINT Width;
    UINT Height;
    WICJpegTransferMatrix TransferMatrix;
    WICJpegScanType ScanType;
                  UINT cComponents;
    DWORD ComponentIdentifiers;
    DWORD SampleFactors;
    DWORD QuantizationTableIndices;
    } WICJpegFrameHeader;
typedef struct WICJpegScanHeader
    {
                  UINT cComponents;
    UINT RestartInterval;
    DWORD ComponentSelectors;
    DWORD HuffmanTableIndices;
    BYTE StartSpectralSelection;
    BYTE EndSpectralSelection;
    BYTE SuccessiveApproximationHigh;
    BYTE SuccessiveApproximationLow;
    } WICJpegScanHeader;
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWICPalette;
    typedef struct IWICPaletteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICPalette * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICPalette * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICPalette * This);
        HRESULT ( STDMETHODCALLTYPE *InitializePredefined )(
            __RPC__in IWICPalette * This,
                       WICBitmapPaletteType ePaletteType,
                       BOOL fAddTransparentColor);
        HRESULT ( STDMETHODCALLTYPE *InitializeCustom )(
            __RPC__in IWICPalette * This,
                                __RPC__in_ecount_full(cCount) WICColor *pColors,
                       UINT cCount);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromBitmap )(
            __RPC__in IWICPalette * This,
                       __RPC__in_opt IWICBitmapSource *pISurface,
                       UINT cCount,
                       BOOL fAddTransparentColor);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPalette )(
            __RPC__in IWICPalette * This,
                       __RPC__in_opt IWICPalette *pIPalette);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IWICPalette * This,
                        __RPC__out WICBitmapPaletteType *pePaletteType);
        HRESULT ( STDMETHODCALLTYPE *GetColorCount )(
            __RPC__in IWICPalette * This,
                        __RPC__out UINT *pcCount);
        HRESULT ( STDMETHODCALLTYPE *GetColors )(
            __RPC__in IWICPalette * This,
                       UINT cCount,
                                 __RPC__out_ecount_full(cCount) WICColor *pColors,
                        __RPC__out UINT *pcActualColors);
        HRESULT ( STDMETHODCALLTYPE *IsBlackWhite )(
            __RPC__in IWICPalette * This,
                        __RPC__out BOOL *pfIsBlackWhite);
        HRESULT ( STDMETHODCALLTYPE *IsGrayscale )(
            __RPC__in IWICPalette * This,
                        __RPC__out BOOL *pfIsGrayscale);
        HRESULT ( STDMETHODCALLTYPE *HasAlpha )(
            __RPC__in IWICPalette * This,
                        __RPC__out BOOL *pfHasAlpha);
        END_INTERFACE
    } IWICPaletteVtbl;
    interface IWICPalette
    {
        CONST_VTBL struct IWICPaletteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitializePredefined(This,ePaletteType,fAddTransparentColor) )
    ( (This)->lpVtbl -> InitializeCustom(This,pColors,cCount) )
    ( (This)->lpVtbl -> InitializeFromBitmap(This,pISurface,cCount,fAddTransparentColor) )
    ( (This)->lpVtbl -> InitializeFromPalette(This,pIPalette) )
    ( (This)->lpVtbl -> GetType(This,pePaletteType) )
    ( (This)->lpVtbl -> GetColorCount(This,pcCount) )
    ( (This)->lpVtbl -> GetColors(This,cCount,pColors,pcActualColors) )
    ( (This)->lpVtbl -> IsBlackWhite(This,pfIsBlackWhite) )
    ( (This)->lpVtbl -> IsGrayscale(This,pfIsGrayscale) )
    ( (This)->lpVtbl -> HasAlpha(This,pfHasAlpha) )
EXTERN_C const IID IID_IWICBitmapSource;
    typedef struct IWICBitmapSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICBitmapSource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICBitmapSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICBitmapSource * This);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IWICBitmapSource * This,
                        __RPC__out UINT *puiWidth,
                        __RPC__out UINT *puiHeight);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )(
            __RPC__in IWICBitmapSource * This,
                        __RPC__out WICPixelFormatGUID *pPixelFormat);
        HRESULT ( STDMETHODCALLTYPE *GetResolution )(
            __RPC__in IWICBitmapSource * This,
                        __RPC__out double *pDpiX,
                        __RPC__out double *pDpiY);
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )(
            __RPC__in IWICBitmapSource * This,
                       __RPC__in_opt IWICPalette *pIPalette);
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )(
            __RPC__in IWICBitmapSource * This,
                               __RPC__in_opt const WICRect *prc,
                       UINT cbStride,
                       UINT cbBufferSize,
                                 __RPC__out_ecount_full(cbBufferSize) BYTE *pbBuffer);
        END_INTERFACE
    } IWICBitmapSourceVtbl;
    interface IWICBitmapSource
    {
        CONST_VTBL struct IWICBitmapSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) )
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) )
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) )
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) )
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) )
EXTERN_C const IID IID_IWICFormatConverter;
    typedef struct IWICFormatConverterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICFormatConverter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICFormatConverter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICFormatConverter * This);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IWICFormatConverter * This,
                        __RPC__out UINT *puiWidth,
                        __RPC__out UINT *puiHeight);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )(
            __RPC__in IWICFormatConverter * This,
                        __RPC__out WICPixelFormatGUID *pPixelFormat);
        HRESULT ( STDMETHODCALLTYPE *GetResolution )(
            __RPC__in IWICFormatConverter * This,
                        __RPC__out double *pDpiX,
                        __RPC__out double *pDpiY);
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )(
            __RPC__in IWICFormatConverter * This,
                       __RPC__in_opt IWICPalette *pIPalette);
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )(
            __RPC__in IWICFormatConverter * This,
                               __RPC__in_opt const WICRect *prc,
                       UINT cbStride,
                       UINT cbBufferSize,
                                 __RPC__out_ecount_full(cbBufferSize) BYTE *pbBuffer);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IWICFormatConverter * This,
                       __RPC__in_opt IWICBitmapSource *pISource,
                       __RPC__in REFWICPixelFormatGUID dstFormat,
                       WICBitmapDitherType dither,
                               __RPC__in_opt IWICPalette *pIPalette,
                       double alphaThresholdPercent,
                       WICBitmapPaletteType paletteTranslate);
        HRESULT ( STDMETHODCALLTYPE *CanConvert )(
            __RPC__in IWICFormatConverter * This,
                       __RPC__in REFWICPixelFormatGUID srcPixelFormat,
                       __RPC__in REFWICPixelFormatGUID dstPixelFormat,
                        __RPC__out BOOL *pfCanConvert);
        END_INTERFACE
    } IWICFormatConverterVtbl;
    interface IWICFormatConverter
    {
        CONST_VTBL struct IWICFormatConverterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) )
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) )
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) )
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) )
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) )
    ( (This)->lpVtbl -> Initialize(This,pISource,dstFormat,dither,pIPalette,alphaThresholdPercent,paletteTranslate) )
    ( (This)->lpVtbl -> CanConvert(This,srcPixelFormat,dstPixelFormat,pfCanConvert) )
EXTERN_C const IID IID_IWICPlanarFormatConverter;
    typedef struct IWICPlanarFormatConverterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICPlanarFormatConverter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICPlanarFormatConverter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICPlanarFormatConverter * This);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IWICPlanarFormatConverter * This,
                        __RPC__out UINT *puiWidth,
                        __RPC__out UINT *puiHeight);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )(
            __RPC__in IWICPlanarFormatConverter * This,
                        __RPC__out WICPixelFormatGUID *pPixelFormat);
        HRESULT ( STDMETHODCALLTYPE *GetResolution )(
            __RPC__in IWICPlanarFormatConverter * This,
                        __RPC__out double *pDpiX,
                        __RPC__out double *pDpiY);
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )(
            __RPC__in IWICPlanarFormatConverter * This,
                       __RPC__in_opt IWICPalette *pIPalette);
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )(
            __RPC__in IWICPlanarFormatConverter * This,
                               __RPC__in_opt const WICRect *prc,
                       UINT cbStride,
                       UINT cbBufferSize,
                                 __RPC__out_ecount_full(cbBufferSize) BYTE *pbBuffer);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IWICPlanarFormatConverter * This,
                                __RPC__in_ecount_full(cPlanes) IWICBitmapSource **ppPlanes,
            UINT cPlanes,
                       __RPC__in REFWICPixelFormatGUID dstFormat,
                       WICBitmapDitherType dither,
                               __RPC__in_opt IWICPalette *pIPalette,
                       double alphaThresholdPercent,
                       WICBitmapPaletteType paletteTranslate);
        HRESULT ( STDMETHODCALLTYPE *CanConvert )(
            __RPC__in IWICPlanarFormatConverter * This,
                                __RPC__in_ecount_full(cSrcPlanes) const WICPixelFormatGUID *pSrcPixelFormats,
            UINT cSrcPlanes,
                       __RPC__in REFWICPixelFormatGUID dstPixelFormat,
                        __RPC__out BOOL *pfCanConvert);
        END_INTERFACE
    } IWICPlanarFormatConverterVtbl;
    interface IWICPlanarFormatConverter
    {
        CONST_VTBL struct IWICPlanarFormatConverterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) )
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) )
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) )
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) )
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) )
    ( (This)->lpVtbl -> Initialize(This,ppPlanes,cPlanes,dstFormat,dither,pIPalette,alphaThresholdPercent,paletteTranslate) )
    ( (This)->lpVtbl -> CanConvert(This,pSrcPixelFormats,cSrcPlanes,dstPixelFormat,pfCanConvert) )
EXTERN_C const IID IID_IWICBitmapScaler;
    typedef struct IWICBitmapScalerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICBitmapScaler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICBitmapScaler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICBitmapScaler * This);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IWICBitmapScaler * This,
                        __RPC__out UINT *puiWidth,
                        __RPC__out UINT *puiHeight);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )(
            __RPC__in IWICBitmapScaler * This,
                        __RPC__out WICPixelFormatGUID *pPixelFormat);
        HRESULT ( STDMETHODCALLTYPE *GetResolution )(
            __RPC__in IWICBitmapScaler * This,
                        __RPC__out double *pDpiX,
                        __RPC__out double *pDpiY);
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )(
            __RPC__in IWICBitmapScaler * This,
                       __RPC__in_opt IWICPalette *pIPalette);
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )(
            __RPC__in IWICBitmapScaler * This,
                               __RPC__in_opt const WICRect *prc,
                       UINT cbStride,
                       UINT cbBufferSize,
                                 __RPC__out_ecount_full(cbBufferSize) BYTE *pbBuffer);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IWICBitmapScaler * This,
                       __RPC__in_opt IWICBitmapSource *pISource,
                       UINT uiWidth,
                       UINT uiHeight,
                       WICBitmapInterpolationMode mode);
        END_INTERFACE
    } IWICBitmapScalerVtbl;
    interface IWICBitmapScaler
    {
        CONST_VTBL struct IWICBitmapScalerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) )
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) )
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) )
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) )
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) )
    ( (This)->lpVtbl -> Initialize(This,pISource,uiWidth,uiHeight,mode) )
EXTERN_C const IID IID_IWICBitmapClipper;
    typedef struct IWICBitmapClipperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICBitmapClipper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICBitmapClipper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICBitmapClipper * This);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IWICBitmapClipper * This,
                        __RPC__out UINT *puiWidth,
                        __RPC__out UINT *puiHeight);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )(
            __RPC__in IWICBitmapClipper * This,
                        __RPC__out WICPixelFormatGUID *pPixelFormat);
        HRESULT ( STDMETHODCALLTYPE *GetResolution )(
            __RPC__in IWICBitmapClipper * This,
                        __RPC__out double *pDpiX,
                        __RPC__out double *pDpiY);
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )(
            __RPC__in IWICBitmapClipper * This,
                       __RPC__in_opt IWICPalette *pIPalette);
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )(
            __RPC__in IWICBitmapClipper * This,
                               __RPC__in_opt const WICRect *prc,
                       UINT cbStride,
                       UINT cbBufferSize,
                                 __RPC__out_ecount_full(cbBufferSize) BYTE *pbBuffer);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IWICBitmapClipper * This,
                       __RPC__in_opt IWICBitmapSource *pISource,
                       __RPC__in const WICRect *prc);
        END_INTERFACE
    } IWICBitmapClipperVtbl;
    interface IWICBitmapClipper
    {
        CONST_VTBL struct IWICBitmapClipperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) )
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) )
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) )
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) )
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) )
    ( (This)->lpVtbl -> Initialize(This,pISource,prc) )
EXTERN_C const IID IID_IWICBitmapFlipRotator;
    typedef struct IWICBitmapFlipRotatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICBitmapFlipRotator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICBitmapFlipRotator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICBitmapFlipRotator * This);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IWICBitmapFlipRotator * This,
                        __RPC__out UINT *puiWidth,
                        __RPC__out UINT *puiHeight);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )(
            __RPC__in IWICBitmapFlipRotator * This,
                        __RPC__out WICPixelFormatGUID *pPixelFormat);
        HRESULT ( STDMETHODCALLTYPE *GetResolution )(
            __RPC__in IWICBitmapFlipRotator * This,
                        __RPC__out double *pDpiX,
                        __RPC__out double *pDpiY);
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )(
            __RPC__in IWICBitmapFlipRotator * This,
                       __RPC__in_opt IWICPalette *pIPalette);
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )(
            __RPC__in IWICBitmapFlipRotator * This,
                               __RPC__in_opt const WICRect *prc,
                       UINT cbStride,
                       UINT cbBufferSize,
                                 __RPC__out_ecount_full(cbBufferSize) BYTE *pbBuffer);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IWICBitmapFlipRotator * This,
                       __RPC__in_opt IWICBitmapSource *pISource,
                       WICBitmapTransformOptions options);
        END_INTERFACE
    } IWICBitmapFlipRotatorVtbl;
    interface IWICBitmapFlipRotator
    {
        CONST_VTBL struct IWICBitmapFlipRotatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) )
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) )
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) )
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) )
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) )
    ( (This)->lpVtbl -> Initialize(This,pISource,options) )
EXTERN_C const IID IID_IWICBitmapLock;
    typedef struct IWICBitmapLockVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICBitmapLock * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICBitmapLock * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICBitmapLock * This);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IWICBitmapLock * This,
                        __RPC__out UINT *puiWidth,
                        __RPC__out UINT *puiHeight);
        HRESULT ( STDMETHODCALLTYPE *GetStride )(
            __RPC__in IWICBitmapLock * This,
                        __RPC__out UINT *pcbStride);
        HRESULT ( STDMETHODCALLTYPE *GetDataPointer )(
            __RPC__in IWICBitmapLock * This,
                        __RPC__out UINT *pcbBufferSize,
                                          __RPC__deref_out_ecount_full_opt(*pcbBufferSize) WICInProcPointer *ppbData);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )(
            __RPC__in IWICBitmapLock * This,
                        __RPC__out WICPixelFormatGUID *pPixelFormat);
        END_INTERFACE
    } IWICBitmapLockVtbl;
    interface IWICBitmapLock
    {
        CONST_VTBL struct IWICBitmapLockVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) )
    ( (This)->lpVtbl -> GetStride(This,pcbStride) )
    ( (This)->lpVtbl -> GetDataPointer(This,pcbBufferSize,ppbData) )
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) )
EXTERN_C const IID IID_IWICBitmap;
    typedef struct IWICBitmapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICBitmap * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICBitmap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICBitmap * This);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IWICBitmap * This,
                        __RPC__out UINT *puiWidth,
                        __RPC__out UINT *puiHeight);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )(
            __RPC__in IWICBitmap * This,
                        __RPC__out WICPixelFormatGUID *pPixelFormat);
        HRESULT ( STDMETHODCALLTYPE *GetResolution )(
            __RPC__in IWICBitmap * This,
                        __RPC__out double *pDpiX,
                        __RPC__out double *pDpiY);
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )(
            __RPC__in IWICBitmap * This,
                       __RPC__in_opt IWICPalette *pIPalette);
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )(
            __RPC__in IWICBitmap * This,
                               __RPC__in_opt const WICRect *prc,
                       UINT cbStride,
                       UINT cbBufferSize,
                                 __RPC__out_ecount_full(cbBufferSize) BYTE *pbBuffer);
        HRESULT ( STDMETHODCALLTYPE *Lock )(
            __RPC__in IWICBitmap * This,
                               __RPC__in_opt const WICRect *prcLock,
                       DWORD flags,
                        __RPC__deref_out_opt IWICBitmapLock **ppILock);
        HRESULT ( STDMETHODCALLTYPE *SetPalette )(
            __RPC__in IWICBitmap * This,
                       __RPC__in_opt IWICPalette *pIPalette);
        HRESULT ( STDMETHODCALLTYPE *SetResolution )(
            __RPC__in IWICBitmap * This,
                       double dpiX,
                       double dpiY);
        END_INTERFACE
    } IWICBitmapVtbl;
    interface IWICBitmap
    {
        CONST_VTBL struct IWICBitmapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) )
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) )
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) )
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) )
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) )
    ( (This)->lpVtbl -> Lock(This,prcLock,flags,ppILock) )
    ( (This)->lpVtbl -> SetPalette(This,pIPalette) )
    ( (This)->lpVtbl -> SetResolution(This,dpiX,dpiY) )
EXTERN_C const IID IID_IWICColorContext;
    typedef struct IWICColorContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICColorContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICColorContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICColorContext * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromFilename )(
            __RPC__in IWICColorContext * This,
                       __RPC__in LPCWSTR wzFilename);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromMemory )(
            __RPC__in IWICColorContext * This,
                                __RPC__in_ecount_full(cbBufferSize) const BYTE *pbBuffer,
                       UINT cbBufferSize);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromExifColorSpace )(
            __RPC__in IWICColorContext * This,
                       UINT value);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IWICColorContext * This,
                        __RPC__out WICColorContextType *pType);
        HRESULT ( STDMETHODCALLTYPE *GetProfileBytes )(
            __RPC__in IWICColorContext * This,
                       UINT cbBuffer,
                                             __RPC__inout_ecount_full_opt(cbBuffer) BYTE *pbBuffer,
                        __RPC__out UINT *pcbActual);
        HRESULT ( STDMETHODCALLTYPE *GetExifColorSpace )(
            __RPC__in IWICColorContext * This,
                        __RPC__out UINT *pValue);
        END_INTERFACE
    } IWICColorContextVtbl;
    interface IWICColorContext
    {
        CONST_VTBL struct IWICColorContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitializeFromFilename(This,wzFilename) )
    ( (This)->lpVtbl -> InitializeFromMemory(This,pbBuffer,cbBufferSize) )
    ( (This)->lpVtbl -> InitializeFromExifColorSpace(This,value) )
    ( (This)->lpVtbl -> GetType(This,pType) )
    ( (This)->lpVtbl -> GetProfileBytes(This,cbBuffer,pbBuffer,pcbActual) )
    ( (This)->lpVtbl -> GetExifColorSpace(This,pValue) )
EXTERN_C const IID IID_IWICColorTransform;
    typedef struct IWICColorTransformVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICColorTransform * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICColorTransform * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICColorTransform * This);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IWICColorTransform * This,
                        __RPC__out UINT *puiWidth,
                        __RPC__out UINT *puiHeight);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )(
            __RPC__in IWICColorTransform * This,
                        __RPC__out WICPixelFormatGUID *pPixelFormat);
        HRESULT ( STDMETHODCALLTYPE *GetResolution )(
            __RPC__in IWICColorTransform * This,
                        __RPC__out double *pDpiX,
                        __RPC__out double *pDpiY);
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )(
            __RPC__in IWICColorTransform * This,
                       __RPC__in_opt IWICPalette *pIPalette);
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )(
            __RPC__in IWICColorTransform * This,
                               __RPC__in_opt const WICRect *prc,
                       UINT cbStride,
                       UINT cbBufferSize,
                                 __RPC__out_ecount_full(cbBufferSize) BYTE *pbBuffer);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IWICColorTransform * This,
                       __RPC__in_opt IWICBitmapSource *pIBitmapSource,
                       __RPC__in_opt IWICColorContext *pIContextSource,
                       __RPC__in_opt IWICColorContext *pIContextDest,
                       __RPC__in REFWICPixelFormatGUID pixelFmtDest);
        END_INTERFACE
    } IWICColorTransformVtbl;
    interface IWICColorTransform
    {
        CONST_VTBL struct IWICColorTransformVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) )
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) )
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) )
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) )
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) )
    ( (This)->lpVtbl -> Initialize(This,pIBitmapSource,pIContextSource,pIContextDest,pixelFmtDest) )
EXTERN_C const IID IID_IWICFastMetadataEncoder;
    typedef struct IWICFastMetadataEncoderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICFastMetadataEncoder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICFastMetadataEncoder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICFastMetadataEncoder * This);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IWICFastMetadataEncoder * This);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataQueryWriter )(
            __RPC__in IWICFastMetadataEncoder * This,
                        __RPC__deref_out_opt IWICMetadataQueryWriter **ppIMetadataQueryWriter);
        END_INTERFACE
    } IWICFastMetadataEncoderVtbl;
    interface IWICFastMetadataEncoder
    {
        CONST_VTBL struct IWICFastMetadataEncoderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> GetMetadataQueryWriter(This,ppIMetadataQueryWriter) )
EXTERN_C const IID IID_IWICStream;
    typedef struct IWICStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICStream * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            IWICStream * This,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *Write )(
            IWICStream * This,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbWritten);
                      HRESULT ( STDMETHODCALLTYPE *Seek )(
            IWICStream * This,
                       LARGE_INTEGER dlibMove,
                       DWORD dwOrigin,
            _Out_opt_ ULARGE_INTEGER *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *SetSize )(
            __RPC__in IWICStream * This,
                       ULARGE_INTEGER libNewSize);
                      HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            IWICStream * This,
            _In_ IStream *pstm,
                       ULARGE_INTEGER cb,
            _Out_opt_ ULARGE_INTEGER *pcbRead,
            _Out_opt_ ULARGE_INTEGER *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IWICStream * This,
                       DWORD grfCommitFlags);
        HRESULT ( STDMETHODCALLTYPE *Revert )(
            __RPC__in IWICStream * This);
        HRESULT ( STDMETHODCALLTYPE *LockRegion )(
            __RPC__in IWICStream * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )(
            __RPC__in IWICStream * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            __RPC__in IWICStream * This,
                        __RPC__out STATSTG *pstatstg,
                       DWORD grfStatFlag);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IWICStream * This,
                        __RPC__deref_out_opt IStream **ppstm);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromIStream )(
            __RPC__in IWICStream * This,
                       __RPC__in_opt IStream *pIStream);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromFilename )(
            __RPC__in IWICStream * This,
                       __RPC__in LPCWSTR wzFileName,
                       DWORD dwDesiredAccess);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromMemory )(
            __RPC__in IWICStream * This,
                                __RPC__in_ecount_full(cbBufferSize) WICInProcPointer pbBuffer,
                       DWORD cbBufferSize);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromIStreamRegion )(
            __RPC__in IWICStream * This,
                       __RPC__in_opt IStream *pIStream,
                       ULARGE_INTEGER ulOffset,
                       ULARGE_INTEGER ulMaxSize);
        END_INTERFACE
    } IWICStreamVtbl;
    interface IWICStream
    {
        CONST_VTBL struct IWICStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
    ( (This)->lpVtbl -> SetSize(This,libNewSize) )
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) )
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
    ( (This)->lpVtbl -> Revert(This) )
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
    ( (This)->lpVtbl -> Clone(This,ppstm) )
    ( (This)->lpVtbl -> InitializeFromIStream(This,pIStream) )
    ( (This)->lpVtbl -> InitializeFromFilename(This,wzFileName,dwDesiredAccess) )
    ( (This)->lpVtbl -> InitializeFromMemory(This,pbBuffer,cbBufferSize) )
    ( (This)->lpVtbl -> InitializeFromIStreamRegion(This,pIStream,ulOffset,ulMaxSize) )
EXTERN_C const IID IID_IWICEnumMetadataItem;
    typedef struct IWICEnumMetadataItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICEnumMetadataItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICEnumMetadataItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICEnumMetadataItem * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IWICEnumMetadataItem * This,
                       ULONG celt,
                                             __RPC__inout_ecount_full_opt(celt) PROPVARIANT *rgeltSchema,
                                     __RPC__inout_ecount_full(celt) PROPVARIANT *rgeltId,
                                               __RPC__inout_ecount_full(celt) PROPVARIANT *rgeltValue,
                                  __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IWICEnumMetadataItem * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IWICEnumMetadataItem * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IWICEnumMetadataItem * This,
                        __RPC__deref_out_opt IWICEnumMetadataItem **ppIEnumMetadataItem);
        END_INTERFACE
    } IWICEnumMetadataItemVtbl;
    interface IWICEnumMetadataItem
    {
        CONST_VTBL struct IWICEnumMetadataItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgeltSchema,rgeltId,rgeltValue,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppIEnumMetadataItem) )
EXTERN_C const IID IID_IWICMetadataQueryReader;
    typedef struct IWICMetadataQueryReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICMetadataQueryReader * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICMetadataQueryReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICMetadataQueryReader * This);
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormat )(
            __RPC__in IWICMetadataQueryReader * This,
                        __RPC__out GUID *pguidContainerFormat);
        HRESULT ( STDMETHODCALLTYPE *GetLocation )(
            __RPC__in IWICMetadataQueryReader * This,
                       UINT cchMaxLength,
                                             __RPC__inout_ecount_full_opt(cchMaxLength) WCHAR *wzNamespace,
                        __RPC__out UINT *pcchActualLength);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataByName )(
            __RPC__in IWICMetadataQueryReader * This,
                       __RPC__in LPCWSTR wzName,
                                    __RPC__inout_opt PROPVARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )(
            __RPC__in IWICMetadataQueryReader * This,
                        __RPC__deref_out_opt IEnumString **ppIEnumString);
        END_INTERFACE
    } IWICMetadataQueryReaderVtbl;
    interface IWICMetadataQueryReader
    {
        CONST_VTBL struct IWICMetadataQueryReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetContainerFormat(This,pguidContainerFormat) )
    ( (This)->lpVtbl -> GetLocation(This,cchMaxLength,wzNamespace,pcchActualLength) )
    ( (This)->lpVtbl -> GetMetadataByName(This,wzName,pvarValue) )
    ( (This)->lpVtbl -> GetEnumerator(This,ppIEnumString) )
EXTERN_C const IID IID_IWICMetadataQueryWriter;
    typedef struct IWICMetadataQueryWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICMetadataQueryWriter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICMetadataQueryWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICMetadataQueryWriter * This);
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormat )(
            __RPC__in IWICMetadataQueryWriter * This,
                        __RPC__out GUID *pguidContainerFormat);
        HRESULT ( STDMETHODCALLTYPE *GetLocation )(
            __RPC__in IWICMetadataQueryWriter * This,
                       UINT cchMaxLength,
                                             __RPC__inout_ecount_full_opt(cchMaxLength) WCHAR *wzNamespace,
                        __RPC__out UINT *pcchActualLength);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataByName )(
            __RPC__in IWICMetadataQueryWriter * This,
                       __RPC__in LPCWSTR wzName,
                                    __RPC__inout_opt PROPVARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )(
            __RPC__in IWICMetadataQueryWriter * This,
                        __RPC__deref_out_opt IEnumString **ppIEnumString);
        HRESULT ( STDMETHODCALLTYPE *SetMetadataByName )(
            __RPC__in IWICMetadataQueryWriter * This,
                       __RPC__in LPCWSTR wzName,
                       __RPC__in const PROPVARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *RemoveMetadataByName )(
            __RPC__in IWICMetadataQueryWriter * This,
                       __RPC__in LPCWSTR wzName);
        END_INTERFACE
    } IWICMetadataQueryWriterVtbl;
    interface IWICMetadataQueryWriter
    {
        CONST_VTBL struct IWICMetadataQueryWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetContainerFormat(This,pguidContainerFormat) )
    ( (This)->lpVtbl -> GetLocation(This,cchMaxLength,wzNamespace,pcchActualLength) )
    ( (This)->lpVtbl -> GetMetadataByName(This,wzName,pvarValue) )
    ( (This)->lpVtbl -> GetEnumerator(This,ppIEnumString) )
    ( (This)->lpVtbl -> SetMetadataByName(This,wzName,pvarValue) )
    ( (This)->lpVtbl -> RemoveMetadataByName(This,wzName) )
EXTERN_C const IID IID_IWICBitmapEncoder;
    typedef struct IWICBitmapEncoderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICBitmapEncoder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICBitmapEncoder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICBitmapEncoder * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IWICBitmapEncoder * This,
                       __RPC__in_opt IStream *pIStream,
                       WICBitmapEncoderCacheOption cacheOption);
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormat )(
            __RPC__in IWICBitmapEncoder * This,
                        __RPC__out GUID *pguidContainerFormat);
        HRESULT ( STDMETHODCALLTYPE *GetEncoderInfo )(
            __RPC__in IWICBitmapEncoder * This,
                        __RPC__deref_out_opt IWICBitmapEncoderInfo **ppIEncoderInfo);
        HRESULT ( STDMETHODCALLTYPE *SetColorContexts )(
            __RPC__in IWICBitmapEncoder * This,
                       UINT cCount,
                                __RPC__in_ecount_full(cCount) IWICColorContext **ppIColorContext);
        HRESULT ( STDMETHODCALLTYPE *SetPalette )(
            __RPC__in IWICBitmapEncoder * This,
                       __RPC__in_opt IWICPalette *pIPalette);
        HRESULT ( STDMETHODCALLTYPE *SetThumbnail )(
            __RPC__in IWICBitmapEncoder * This,
                       __RPC__in_opt IWICBitmapSource *pIThumbnail);
        HRESULT ( STDMETHODCALLTYPE *SetPreview )(
            __RPC__in IWICBitmapEncoder * This,
                       __RPC__in_opt IWICBitmapSource *pIPreview);
        HRESULT ( STDMETHODCALLTYPE *CreateNewFrame )(
            __RPC__in IWICBitmapEncoder * This,
                        __RPC__deref_out_opt IWICBitmapFrameEncode **ppIFrameEncode,
                                    __RPC__deref_opt_inout_opt IPropertyBag2 **ppIEncoderOptions);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IWICBitmapEncoder * This);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataQueryWriter )(
            __RPC__in IWICBitmapEncoder * This,
                        __RPC__deref_out_opt IWICMetadataQueryWriter **ppIMetadataQueryWriter);
        END_INTERFACE
    } IWICBitmapEncoderVtbl;
    interface IWICBitmapEncoder
    {
        CONST_VTBL struct IWICBitmapEncoderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pIStream,cacheOption) )
    ( (This)->lpVtbl -> GetContainerFormat(This,pguidContainerFormat) )
    ( (This)->lpVtbl -> GetEncoderInfo(This,ppIEncoderInfo) )
    ( (This)->lpVtbl -> SetColorContexts(This,cCount,ppIColorContext) )
    ( (This)->lpVtbl -> SetPalette(This,pIPalette) )
    ( (This)->lpVtbl -> SetThumbnail(This,pIThumbnail) )
    ( (This)->lpVtbl -> SetPreview(This,pIPreview) )
    ( (This)->lpVtbl -> CreateNewFrame(This,ppIFrameEncode,ppIEncoderOptions) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> GetMetadataQueryWriter(This,ppIMetadataQueryWriter) )
EXTERN_C const IID IID_IWICBitmapFrameEncode;
    typedef struct IWICBitmapFrameEncodeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICBitmapFrameEncode * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICBitmapFrameEncode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICBitmapFrameEncode * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IWICBitmapFrameEncode * This,
                               __RPC__in_opt IPropertyBag2 *pIEncoderOptions);
        HRESULT ( STDMETHODCALLTYPE *SetSize )(
            __RPC__in IWICBitmapFrameEncode * This,
                       UINT uiWidth,
                       UINT uiHeight);
        HRESULT ( STDMETHODCALLTYPE *SetResolution )(
            __RPC__in IWICBitmapFrameEncode * This,
                       double dpiX,
                       double dpiY);
        HRESULT ( STDMETHODCALLTYPE *SetPixelFormat )(
            __RPC__in IWICBitmapFrameEncode * This,
                            __RPC__inout WICPixelFormatGUID *pPixelFormat);
        HRESULT ( STDMETHODCALLTYPE *SetColorContexts )(
            __RPC__in IWICBitmapFrameEncode * This,
                       UINT cCount,
                                __RPC__in_ecount_full(cCount) IWICColorContext **ppIColorContext);
        HRESULT ( STDMETHODCALLTYPE *SetPalette )(
            __RPC__in IWICBitmapFrameEncode * This,
                       __RPC__in_opt IWICPalette *pIPalette);
        HRESULT ( STDMETHODCALLTYPE *SetThumbnail )(
            __RPC__in IWICBitmapFrameEncode * This,
                       __RPC__in_opt IWICBitmapSource *pIThumbnail);
        HRESULT ( STDMETHODCALLTYPE *WritePixels )(
            __RPC__in IWICBitmapFrameEncode * This,
                       UINT lineCount,
                       UINT cbStride,
                       UINT cbBufferSize,
                                __RPC__in_ecount_full(cbBufferSize) BYTE *pbPixels);
        HRESULT ( STDMETHODCALLTYPE *WriteSource )(
            __RPC__in IWICBitmapFrameEncode * This,
                       __RPC__in_opt IWICBitmapSource *pIBitmapSource,
                               __RPC__in_opt WICRect *prc);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IWICBitmapFrameEncode * This);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataQueryWriter )(
            __RPC__in IWICBitmapFrameEncode * This,
                        __RPC__deref_out_opt IWICMetadataQueryWriter **ppIMetadataQueryWriter);
        END_INTERFACE
    } IWICBitmapFrameEncodeVtbl;
    interface IWICBitmapFrameEncode
    {
        CONST_VTBL struct IWICBitmapFrameEncodeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pIEncoderOptions) )
    ( (This)->lpVtbl -> SetSize(This,uiWidth,uiHeight) )
    ( (This)->lpVtbl -> SetResolution(This,dpiX,dpiY) )
    ( (This)->lpVtbl -> SetPixelFormat(This,pPixelFormat) )
    ( (This)->lpVtbl -> SetColorContexts(This,cCount,ppIColorContext) )
    ( (This)->lpVtbl -> SetPalette(This,pIPalette) )
    ( (This)->lpVtbl -> SetThumbnail(This,pIThumbnail) )
    ( (This)->lpVtbl -> WritePixels(This,lineCount,cbStride,cbBufferSize,pbPixels) )
    ( (This)->lpVtbl -> WriteSource(This,pIBitmapSource,prc) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> GetMetadataQueryWriter(This,ppIMetadataQueryWriter) )
EXTERN_C const IID IID_IWICPlanarBitmapFrameEncode;
    typedef struct IWICPlanarBitmapFrameEncodeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICPlanarBitmapFrameEncode * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICPlanarBitmapFrameEncode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICPlanarBitmapFrameEncode * This);
        HRESULT ( STDMETHODCALLTYPE *WritePixels )(
            __RPC__in IWICPlanarBitmapFrameEncode * This,
            UINT lineCount,
                                __RPC__in_ecount_full(cPlanes) WICBitmapPlane *pPlanes,
            UINT cPlanes);
        HRESULT ( STDMETHODCALLTYPE *WriteSource )(
            __RPC__in IWICPlanarBitmapFrameEncode * This,
                                __RPC__in_ecount_full(cPlanes) IWICBitmapSource **ppPlanes,
            UINT cPlanes,
                               __RPC__in_opt WICRect *prcSource);
        END_INTERFACE
    } IWICPlanarBitmapFrameEncodeVtbl;
    interface IWICPlanarBitmapFrameEncode
    {
        CONST_VTBL struct IWICPlanarBitmapFrameEncodeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> WritePixels(This,lineCount,pPlanes,cPlanes) )
    ( (This)->lpVtbl -> WriteSource(This,ppPlanes,cPlanes,prcSource) )
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0019_v0_0_s_ifspec;
EXTERN_C const IID IID_IWICImageEncoder;
    typedef struct IWICImageEncoderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWICImageEncoder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWICImageEncoder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWICImageEncoder * This);
        HRESULT ( STDMETHODCALLTYPE *WriteFrame )(
            IWICImageEncoder * This,
                       ID2D1Image *pImage,
                       IWICBitmapFrameEncode *pFrameEncode,
                               const WICImageParameters *pImageParameters);
        HRESULT ( STDMETHODCALLTYPE *WriteFrameThumbnail )(
            IWICImageEncoder * This,
                       ID2D1Image *pImage,
                       IWICBitmapFrameEncode *pFrameEncode,
                               const WICImageParameters *pImageParameters);
        HRESULT ( STDMETHODCALLTYPE *WriteThumbnail )(
            IWICImageEncoder * This,
                       ID2D1Image *pImage,
                       IWICBitmapEncoder *pEncoder,
                               const WICImageParameters *pImageParameters);
        END_INTERFACE
    } IWICImageEncoderVtbl;
    interface IWICImageEncoder
    {
        CONST_VTBL struct IWICImageEncoderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> WriteFrame(This,pImage,pFrameEncode,pImageParameters) )
    ( (This)->lpVtbl -> WriteFrameThumbnail(This,pImage,pFrameEncode,pImageParameters) )
    ( (This)->lpVtbl -> WriteThumbnail(This,pImage,pEncoder,pImageParameters) )
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0020_v0_0_s_ifspec;
EXTERN_C const IID IID_IWICBitmapDecoder;
    typedef struct IWICBitmapDecoderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICBitmapDecoder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICBitmapDecoder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICBitmapDecoder * This);
        HRESULT ( STDMETHODCALLTYPE *QueryCapability )(
            __RPC__in IWICBitmapDecoder * This,
                       __RPC__in_opt IStream *pIStream,
                        __RPC__out DWORD *pdwCapability);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IWICBitmapDecoder * This,
                       __RPC__in_opt IStream *pIStream,
                       WICDecodeOptions cacheOptions);
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormat )(
            __RPC__in IWICBitmapDecoder * This,
                        __RPC__out GUID *pguidContainerFormat);
        HRESULT ( STDMETHODCALLTYPE *GetDecoderInfo )(
            __RPC__in IWICBitmapDecoder * This,
                        __RPC__deref_out_opt IWICBitmapDecoderInfo **ppIDecoderInfo);
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )(
            __RPC__in IWICBitmapDecoder * This,
                       __RPC__in_opt IWICPalette *pIPalette);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataQueryReader )(
            __RPC__in IWICBitmapDecoder * This,
                        __RPC__deref_out_opt IWICMetadataQueryReader **ppIMetadataQueryReader);
        HRESULT ( STDMETHODCALLTYPE *GetPreview )(
            __RPC__in IWICBitmapDecoder * This,
                        __RPC__deref_out_opt IWICBitmapSource **ppIBitmapSource);
        HRESULT ( STDMETHODCALLTYPE *GetColorContexts )(
            __RPC__in IWICBitmapDecoder * This,
                       UINT cCount,
                                             __RPC__inout_ecount_full_opt(cCount) IWICColorContext **ppIColorContexts,
                        __RPC__out UINT *pcActualCount);
        HRESULT ( STDMETHODCALLTYPE *GetThumbnail )(
            __RPC__in IWICBitmapDecoder * This,
                        __RPC__deref_out_opt IWICBitmapSource **ppIThumbnail);
        HRESULT ( STDMETHODCALLTYPE *GetFrameCount )(
            __RPC__in IWICBitmapDecoder * This,
                        __RPC__out UINT *pCount);
        HRESULT ( STDMETHODCALLTYPE *GetFrame )(
            __RPC__in IWICBitmapDecoder * This,
                       UINT index,
                        __RPC__deref_out_opt IWICBitmapFrameDecode **ppIBitmapFrame);
        END_INTERFACE
    } IWICBitmapDecoderVtbl;
    interface IWICBitmapDecoder
    {
        CONST_VTBL struct IWICBitmapDecoderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryCapability(This,pIStream,pdwCapability) )
    ( (This)->lpVtbl -> Initialize(This,pIStream,cacheOptions) )
    ( (This)->lpVtbl -> GetContainerFormat(This,pguidContainerFormat) )
    ( (This)->lpVtbl -> GetDecoderInfo(This,ppIDecoderInfo) )
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) )
    ( (This)->lpVtbl -> GetMetadataQueryReader(This,ppIMetadataQueryReader) )
    ( (This)->lpVtbl -> GetPreview(This,ppIBitmapSource) )
    ( (This)->lpVtbl -> GetColorContexts(This,cCount,ppIColorContexts,pcActualCount) )
    ( (This)->lpVtbl -> GetThumbnail(This,ppIThumbnail) )
    ( (This)->lpVtbl -> GetFrameCount(This,pCount) )
    ( (This)->lpVtbl -> GetFrame(This,index,ppIBitmapFrame) )
EXTERN_C const IID IID_IWICBitmapSourceTransform;
    typedef struct IWICBitmapSourceTransformVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICBitmapSourceTransform * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICBitmapSourceTransform * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICBitmapSourceTransform * This);
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )(
            __RPC__in IWICBitmapSourceTransform * This,
                               __RPC__in_opt const WICRect *prc,
                       UINT uiWidth,
                       UINT uiHeight,
                               __RPC__in_opt WICPixelFormatGUID *pguidDstFormat,
                       WICBitmapTransformOptions dstTransform,
                       UINT nStride,
                       UINT cbBufferSize,
                                 __RPC__out_ecount_full(cbBufferSize) BYTE *pbBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetClosestSize )(
            __RPC__in IWICBitmapSourceTransform * This,
                            __RPC__inout UINT *puiWidth,
                            __RPC__inout UINT *puiHeight);
        HRESULT ( STDMETHODCALLTYPE *GetClosestPixelFormat )(
            __RPC__in IWICBitmapSourceTransform * This,
                            __RPC__inout WICPixelFormatGUID *pguidDstFormat);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportTransform )(
            __RPC__in IWICBitmapSourceTransform * This,
                       WICBitmapTransformOptions dstTransform,
                        __RPC__out BOOL *pfIsSupported);
        END_INTERFACE
    } IWICBitmapSourceTransformVtbl;
    interface IWICBitmapSourceTransform
    {
        CONST_VTBL struct IWICBitmapSourceTransformVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CopyPixels(This,prc,uiWidth,uiHeight,pguidDstFormat,dstTransform,nStride,cbBufferSize,pbBuffer) )
    ( (This)->lpVtbl -> GetClosestSize(This,puiWidth,puiHeight) )
    ( (This)->lpVtbl -> GetClosestPixelFormat(This,pguidDstFormat) )
    ( (This)->lpVtbl -> DoesSupportTransform(This,dstTransform,pfIsSupported) )
EXTERN_C const IID IID_IWICPlanarBitmapSourceTransform;
    typedef struct IWICPlanarBitmapSourceTransformVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICPlanarBitmapSourceTransform * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICPlanarBitmapSourceTransform * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICPlanarBitmapSourceTransform * This);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportTransform )(
            __RPC__in IWICPlanarBitmapSourceTransform * This,
                            __RPC__inout UINT *puiWidth,
                            __RPC__inout UINT *puiHeight,
            WICBitmapTransformOptions dstTransform,
            WICPlanarOptions dstPlanarOptions,
                                __RPC__in_ecount_full(cPlanes) const WICPixelFormatGUID *pguidDstFormats,
                                 __RPC__out_ecount_full(cPlanes) WICBitmapPlaneDescription *pPlaneDescriptions,
            UINT cPlanes,
                        __RPC__out BOOL *pfIsSupported);
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )(
            __RPC__in IWICPlanarBitmapSourceTransform * This,
                               __RPC__in_opt const WICRect *prcSource,
            UINT uiWidth,
            UINT uiHeight,
            WICBitmapTransformOptions dstTransform,
            WICPlanarOptions dstPlanarOptions,
                                __RPC__in_ecount_full(cPlanes) const WICBitmapPlane *pDstPlanes,
            UINT cPlanes);
        END_INTERFACE
    } IWICPlanarBitmapSourceTransformVtbl;
    interface IWICPlanarBitmapSourceTransform
    {
        CONST_VTBL struct IWICPlanarBitmapSourceTransformVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DoesSupportTransform(This,puiWidth,puiHeight,dstTransform,dstPlanarOptions,pguidDstFormats,pPlaneDescriptions,cPlanes,pfIsSupported) )
    ( (This)->lpVtbl -> CopyPixels(This,prcSource,uiWidth,uiHeight,dstTransform,dstPlanarOptions,pDstPlanes,cPlanes) )
EXTERN_C const IID IID_IWICBitmapFrameDecode;
    typedef struct IWICBitmapFrameDecodeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICBitmapFrameDecode * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICBitmapFrameDecode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICBitmapFrameDecode * This);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IWICBitmapFrameDecode * This,
                        __RPC__out UINT *puiWidth,
                        __RPC__out UINT *puiHeight);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )(
            __RPC__in IWICBitmapFrameDecode * This,
                        __RPC__out WICPixelFormatGUID *pPixelFormat);
        HRESULT ( STDMETHODCALLTYPE *GetResolution )(
            __RPC__in IWICBitmapFrameDecode * This,
                        __RPC__out double *pDpiX,
                        __RPC__out double *pDpiY);
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )(
            __RPC__in IWICBitmapFrameDecode * This,
                       __RPC__in_opt IWICPalette *pIPalette);
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )(
            __RPC__in IWICBitmapFrameDecode * This,
                               __RPC__in_opt const WICRect *prc,
                       UINT cbStride,
                       UINT cbBufferSize,
                                 __RPC__out_ecount_full(cbBufferSize) BYTE *pbBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataQueryReader )(
            __RPC__in IWICBitmapFrameDecode * This,
                        __RPC__deref_out_opt IWICMetadataQueryReader **ppIMetadataQueryReader);
        HRESULT ( STDMETHODCALLTYPE *GetColorContexts )(
            __RPC__in IWICBitmapFrameDecode * This,
                       UINT cCount,
                                             __RPC__inout_ecount_full_opt(cCount) IWICColorContext **ppIColorContexts,
                        __RPC__out UINT *pcActualCount);
        HRESULT ( STDMETHODCALLTYPE *GetThumbnail )(
            __RPC__in IWICBitmapFrameDecode * This,
                        __RPC__deref_out_opt IWICBitmapSource **ppIThumbnail);
        END_INTERFACE
    } IWICBitmapFrameDecodeVtbl;
    interface IWICBitmapFrameDecode
    {
        CONST_VTBL struct IWICBitmapFrameDecodeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) )
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) )
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) )
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) )
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) )
    ( (This)->lpVtbl -> GetMetadataQueryReader(This,ppIMetadataQueryReader) )
    ( (This)->lpVtbl -> GetColorContexts(This,cCount,ppIColorContexts,pcActualCount) )
    ( (This)->lpVtbl -> GetThumbnail(This,ppIThumbnail) )
EXTERN_C const IID IID_IWICProgressiveLevelControl;
    typedef struct IWICProgressiveLevelControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICProgressiveLevelControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICProgressiveLevelControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICProgressiveLevelControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetLevelCount )(
            __RPC__in IWICProgressiveLevelControl * This,
                                __RPC__out UINT *pcLevels);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentLevel )(
            __RPC__in IWICProgressiveLevelControl * This,
                                __RPC__out UINT *pnLevel);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentLevel )(
            __RPC__in IWICProgressiveLevelControl * This,
                       UINT nLevel);
        END_INTERFACE
    } IWICProgressiveLevelControlVtbl;
    interface IWICProgressiveLevelControl
    {
        CONST_VTBL struct IWICProgressiveLevelControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLevelCount(This,pcLevels) )
    ( (This)->lpVtbl -> GetCurrentLevel(This,pnLevel) )
    ( (This)->lpVtbl -> SetCurrentLevel(This,nLevel) )
EXTERN_C const IID IID_IWICProgressCallback;
    typedef struct IWICProgressCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICProgressCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICProgressCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICProgressCallback * This);
        HRESULT ( STDMETHODCALLTYPE *Notify )(
            __RPC__in IWICProgressCallback * This,
                       ULONG uFrameNum,
                       WICProgressOperation operation,
                       double dblProgress);
        END_INTERFACE
    } IWICProgressCallbackVtbl;
    interface IWICProgressCallback
    {
        CONST_VTBL struct IWICProgressCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Notify(This,uFrameNum,operation,dblProgress) )
typedef HRESULT ( __stdcall *PFNProgressNotification )(
    __RPC__in LPVOID pvData,
    ULONG uFrameNum,
    WICProgressOperation operation,
    double dblProgress);
EXTERN_C const IID IID_IWICBitmapCodecProgressNotification;
    typedef struct IWICBitmapCodecProgressNotificationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICBitmapCodecProgressNotification * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICBitmapCodecProgressNotification * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICBitmapCodecProgressNotification * This);
                      HRESULT ( STDMETHODCALLTYPE *RegisterProgressNotification )(
            IWICBitmapCodecProgressNotification * This,
            _In_opt_ PFNProgressNotification pfnProgressNotification,
            _In_opt_ LPVOID pvData,
                       DWORD dwProgressFlags);
        END_INTERFACE
    } IWICBitmapCodecProgressNotificationVtbl;
    interface IWICBitmapCodecProgressNotification
    {
        CONST_VTBL struct IWICBitmapCodecProgressNotificationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterProgressNotification(This,pfnProgressNotification,pvData,dwProgressFlags) )
                HRESULT STDMETHODCALLTYPE IWICBitmapCodecProgressNotification_Remote_RegisterProgressNotification_Proxy(
    __RPC__in IWICBitmapCodecProgressNotification * This,
                       __RPC__in_opt IWICProgressCallback *pICallback,
               DWORD dwProgressFlags);
void __RPC_STUB IWICBitmapCodecProgressNotification_Remote_RegisterProgressNotification_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IWICComponentInfo;
    typedef struct IWICComponentInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICComponentInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICComponentInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICComponentInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )(
            __RPC__in IWICComponentInfo * This,
                        __RPC__out WICComponentType *pType);
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )(
            __RPC__in IWICComponentInfo * This,
                        __RPC__out CLSID *pclsid);
        HRESULT ( STDMETHODCALLTYPE *GetSigningStatus )(
            __RPC__in IWICComponentInfo * This,
                        __RPC__out DWORD *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetAuthor )(
            __RPC__in IWICComponentInfo * This,
                       UINT cchAuthor,
                                             __RPC__inout_ecount_full_opt(cchAuthor) WCHAR *wzAuthor,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetVendorGUID )(
            __RPC__in IWICComponentInfo * This,
                        __RPC__out GUID *pguidVendor);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IWICComponentInfo * This,
                       UINT cchVersion,
                                             __RPC__inout_ecount_full_opt(cchVersion) WCHAR *wzVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetSpecVersion )(
            __RPC__in IWICComponentInfo * This,
                       UINT cchSpecVersion,
                                             __RPC__inout_ecount_full_opt(cchSpecVersion) WCHAR *wzSpecVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            __RPC__in IWICComponentInfo * This,
                       UINT cchFriendlyName,
                                             __RPC__inout_ecount_full_opt(cchFriendlyName) WCHAR *wzFriendlyName,
                        __RPC__out UINT *pcchActual);
        END_INTERFACE
    } IWICComponentInfoVtbl;
    interface IWICComponentInfo
    {
        CONST_VTBL struct IWICComponentInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetComponentType(This,pType) )
    ( (This)->lpVtbl -> GetCLSID(This,pclsid) )
    ( (This)->lpVtbl -> GetSigningStatus(This,pStatus) )
    ( (This)->lpVtbl -> GetAuthor(This,cchAuthor,wzAuthor,pcchActual) )
    ( (This)->lpVtbl -> GetVendorGUID(This,pguidVendor) )
    ( (This)->lpVtbl -> GetVersion(This,cchVersion,wzVersion,pcchActual) )
    ( (This)->lpVtbl -> GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) )
    ( (This)->lpVtbl -> GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) )
EXTERN_C const IID IID_IWICFormatConverterInfo;
    typedef struct IWICFormatConverterInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICFormatConverterInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICFormatConverterInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICFormatConverterInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )(
            __RPC__in IWICFormatConverterInfo * This,
                        __RPC__out WICComponentType *pType);
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )(
            __RPC__in IWICFormatConverterInfo * This,
                        __RPC__out CLSID *pclsid);
        HRESULT ( STDMETHODCALLTYPE *GetSigningStatus )(
            __RPC__in IWICFormatConverterInfo * This,
                        __RPC__out DWORD *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetAuthor )(
            __RPC__in IWICFormatConverterInfo * This,
                       UINT cchAuthor,
                                             __RPC__inout_ecount_full_opt(cchAuthor) WCHAR *wzAuthor,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetVendorGUID )(
            __RPC__in IWICFormatConverterInfo * This,
                        __RPC__out GUID *pguidVendor);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IWICFormatConverterInfo * This,
                       UINT cchVersion,
                                             __RPC__inout_ecount_full_opt(cchVersion) WCHAR *wzVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetSpecVersion )(
            __RPC__in IWICFormatConverterInfo * This,
                       UINT cchSpecVersion,
                                             __RPC__inout_ecount_full_opt(cchSpecVersion) WCHAR *wzSpecVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            __RPC__in IWICFormatConverterInfo * This,
                       UINT cchFriendlyName,
                                             __RPC__inout_ecount_full_opt(cchFriendlyName) WCHAR *wzFriendlyName,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormats )(
            __RPC__in IWICFormatConverterInfo * This,
                       UINT cFormats,
                                             __RPC__inout_ecount_full_opt(cFormats) WICPixelFormatGUID *pPixelFormatGUIDs,
                        __RPC__out UINT *pcActual);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in IWICFormatConverterInfo * This,
                        __RPC__deref_out_opt IWICFormatConverter **ppIConverter);
        END_INTERFACE
    } IWICFormatConverterInfoVtbl;
    interface IWICFormatConverterInfo
    {
        CONST_VTBL struct IWICFormatConverterInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetComponentType(This,pType) )
    ( (This)->lpVtbl -> GetCLSID(This,pclsid) )
    ( (This)->lpVtbl -> GetSigningStatus(This,pStatus) )
    ( (This)->lpVtbl -> GetAuthor(This,cchAuthor,wzAuthor,pcchActual) )
    ( (This)->lpVtbl -> GetVendorGUID(This,pguidVendor) )
    ( (This)->lpVtbl -> GetVersion(This,cchVersion,wzVersion,pcchActual) )
    ( (This)->lpVtbl -> GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) )
    ( (This)->lpVtbl -> GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) )
    ( (This)->lpVtbl -> GetPixelFormats(This,cFormats,pPixelFormatGUIDs,pcActual) )
    ( (This)->lpVtbl -> CreateInstance(This,ppIConverter) )
EXTERN_C const IID IID_IWICBitmapCodecInfo;
    typedef struct IWICBitmapCodecInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICBitmapCodecInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICBitmapCodecInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICBitmapCodecInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )(
            __RPC__in IWICBitmapCodecInfo * This,
                        __RPC__out WICComponentType *pType);
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )(
            __RPC__in IWICBitmapCodecInfo * This,
                        __RPC__out CLSID *pclsid);
        HRESULT ( STDMETHODCALLTYPE *GetSigningStatus )(
            __RPC__in IWICBitmapCodecInfo * This,
                        __RPC__out DWORD *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetAuthor )(
            __RPC__in IWICBitmapCodecInfo * This,
                       UINT cchAuthor,
                                             __RPC__inout_ecount_full_opt(cchAuthor) WCHAR *wzAuthor,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetVendorGUID )(
            __RPC__in IWICBitmapCodecInfo * This,
                        __RPC__out GUID *pguidVendor);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IWICBitmapCodecInfo * This,
                       UINT cchVersion,
                                             __RPC__inout_ecount_full_opt(cchVersion) WCHAR *wzVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetSpecVersion )(
            __RPC__in IWICBitmapCodecInfo * This,
                       UINT cchSpecVersion,
                                             __RPC__inout_ecount_full_opt(cchSpecVersion) WCHAR *wzSpecVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            __RPC__in IWICBitmapCodecInfo * This,
                       UINT cchFriendlyName,
                                             __RPC__inout_ecount_full_opt(cchFriendlyName) WCHAR *wzFriendlyName,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormat )(
            __RPC__in IWICBitmapCodecInfo * This,
                        __RPC__out GUID *pguidContainerFormat);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormats )(
            __RPC__in IWICBitmapCodecInfo * This,
                       UINT cFormats,
                                             __RPC__inout_ecount_full_opt(cFormats) GUID *pguidPixelFormats,
                        __RPC__out UINT *pcActual);
        HRESULT ( STDMETHODCALLTYPE *GetColorManagementVersion )(
            __RPC__in IWICBitmapCodecInfo * This,
                       UINT cchColorManagementVersion,
                                             __RPC__inout_ecount_full_opt(cchColorManagementVersion) WCHAR *wzColorManagementVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceManufacturer )(
            __RPC__in IWICBitmapCodecInfo * This,
                       UINT cchDeviceManufacturer,
                                             __RPC__inout_ecount_full_opt(cchDeviceManufacturer) WCHAR *wzDeviceManufacturer,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceModels )(
            __RPC__in IWICBitmapCodecInfo * This,
                       UINT cchDeviceModels,
                                             __RPC__inout_ecount_full_opt(cchDeviceModels) WCHAR *wzDeviceModels,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetMimeTypes )(
            __RPC__in IWICBitmapCodecInfo * This,
                       UINT cchMimeTypes,
                                             __RPC__inout_ecount_full_opt(cchMimeTypes) WCHAR *wzMimeTypes,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetFileExtensions )(
            __RPC__in IWICBitmapCodecInfo * This,
                       UINT cchFileExtensions,
                                             __RPC__inout_ecount_full_opt(cchFileExtensions) WCHAR *wzFileExtensions,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportAnimation )(
            __RPC__in IWICBitmapCodecInfo * This,
                        __RPC__out BOOL *pfSupportAnimation);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportChromakey )(
            __RPC__in IWICBitmapCodecInfo * This,
                        __RPC__out BOOL *pfSupportChromakey);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportLossless )(
            __RPC__in IWICBitmapCodecInfo * This,
                        __RPC__out BOOL *pfSupportLossless);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportMultiframe )(
            __RPC__in IWICBitmapCodecInfo * This,
                        __RPC__out BOOL *pfSupportMultiframe);
        HRESULT ( STDMETHODCALLTYPE *MatchesMimeType )(
            __RPC__in IWICBitmapCodecInfo * This,
                       __RPC__in LPCWSTR wzMimeType,
                        __RPC__out BOOL *pfMatches);
        END_INTERFACE
    } IWICBitmapCodecInfoVtbl;
    interface IWICBitmapCodecInfo
    {
        CONST_VTBL struct IWICBitmapCodecInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetComponentType(This,pType) )
    ( (This)->lpVtbl -> GetCLSID(This,pclsid) )
    ( (This)->lpVtbl -> GetSigningStatus(This,pStatus) )
    ( (This)->lpVtbl -> GetAuthor(This,cchAuthor,wzAuthor,pcchActual) )
    ( (This)->lpVtbl -> GetVendorGUID(This,pguidVendor) )
    ( (This)->lpVtbl -> GetVersion(This,cchVersion,wzVersion,pcchActual) )
    ( (This)->lpVtbl -> GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) )
    ( (This)->lpVtbl -> GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) )
    ( (This)->lpVtbl -> GetContainerFormat(This,pguidContainerFormat) )
    ( (This)->lpVtbl -> GetPixelFormats(This,cFormats,pguidPixelFormats,pcActual) )
    ( (This)->lpVtbl -> GetColorManagementVersion(This,cchColorManagementVersion,wzColorManagementVersion,pcchActual) )
    ( (This)->lpVtbl -> GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual) )
    ( (This)->lpVtbl -> GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual) )
    ( (This)->lpVtbl -> GetMimeTypes(This,cchMimeTypes,wzMimeTypes,pcchActual) )
    ( (This)->lpVtbl -> GetFileExtensions(This,cchFileExtensions,wzFileExtensions,pcchActual) )
    ( (This)->lpVtbl -> DoesSupportAnimation(This,pfSupportAnimation) )
    ( (This)->lpVtbl -> DoesSupportChromakey(This,pfSupportChromakey) )
    ( (This)->lpVtbl -> DoesSupportLossless(This,pfSupportLossless) )
    ( (This)->lpVtbl -> DoesSupportMultiframe(This,pfSupportMultiframe) )
    ( (This)->lpVtbl -> MatchesMimeType(This,wzMimeType,pfMatches) )
EXTERN_C const IID IID_IWICBitmapEncoderInfo;
    typedef struct IWICBitmapEncoderInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICBitmapEncoderInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICBitmapEncoderInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICBitmapEncoderInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )(
            __RPC__in IWICBitmapEncoderInfo * This,
                        __RPC__out WICComponentType *pType);
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )(
            __RPC__in IWICBitmapEncoderInfo * This,
                        __RPC__out CLSID *pclsid);
        HRESULT ( STDMETHODCALLTYPE *GetSigningStatus )(
            __RPC__in IWICBitmapEncoderInfo * This,
                        __RPC__out DWORD *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetAuthor )(
            __RPC__in IWICBitmapEncoderInfo * This,
                       UINT cchAuthor,
                                             __RPC__inout_ecount_full_opt(cchAuthor) WCHAR *wzAuthor,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetVendorGUID )(
            __RPC__in IWICBitmapEncoderInfo * This,
                        __RPC__out GUID *pguidVendor);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IWICBitmapEncoderInfo * This,
                       UINT cchVersion,
                                             __RPC__inout_ecount_full_opt(cchVersion) WCHAR *wzVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetSpecVersion )(
            __RPC__in IWICBitmapEncoderInfo * This,
                       UINT cchSpecVersion,
                                             __RPC__inout_ecount_full_opt(cchSpecVersion) WCHAR *wzSpecVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            __RPC__in IWICBitmapEncoderInfo * This,
                       UINT cchFriendlyName,
                                             __RPC__inout_ecount_full_opt(cchFriendlyName) WCHAR *wzFriendlyName,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormat )(
            __RPC__in IWICBitmapEncoderInfo * This,
                        __RPC__out GUID *pguidContainerFormat);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormats )(
            __RPC__in IWICBitmapEncoderInfo * This,
                       UINT cFormats,
                                             __RPC__inout_ecount_full_opt(cFormats) GUID *pguidPixelFormats,
                        __RPC__out UINT *pcActual);
        HRESULT ( STDMETHODCALLTYPE *GetColorManagementVersion )(
            __RPC__in IWICBitmapEncoderInfo * This,
                       UINT cchColorManagementVersion,
                                             __RPC__inout_ecount_full_opt(cchColorManagementVersion) WCHAR *wzColorManagementVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceManufacturer )(
            __RPC__in IWICBitmapEncoderInfo * This,
                       UINT cchDeviceManufacturer,
                                             __RPC__inout_ecount_full_opt(cchDeviceManufacturer) WCHAR *wzDeviceManufacturer,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceModels )(
            __RPC__in IWICBitmapEncoderInfo * This,
                       UINT cchDeviceModels,
                                             __RPC__inout_ecount_full_opt(cchDeviceModels) WCHAR *wzDeviceModels,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetMimeTypes )(
            __RPC__in IWICBitmapEncoderInfo * This,
                       UINT cchMimeTypes,
                                             __RPC__inout_ecount_full_opt(cchMimeTypes) WCHAR *wzMimeTypes,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetFileExtensions )(
            __RPC__in IWICBitmapEncoderInfo * This,
                       UINT cchFileExtensions,
                                             __RPC__inout_ecount_full_opt(cchFileExtensions) WCHAR *wzFileExtensions,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportAnimation )(
            __RPC__in IWICBitmapEncoderInfo * This,
                        __RPC__out BOOL *pfSupportAnimation);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportChromakey )(
            __RPC__in IWICBitmapEncoderInfo * This,
                        __RPC__out BOOL *pfSupportChromakey);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportLossless )(
            __RPC__in IWICBitmapEncoderInfo * This,
                        __RPC__out BOOL *pfSupportLossless);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportMultiframe )(
            __RPC__in IWICBitmapEncoderInfo * This,
                        __RPC__out BOOL *pfSupportMultiframe);
        HRESULT ( STDMETHODCALLTYPE *MatchesMimeType )(
            __RPC__in IWICBitmapEncoderInfo * This,
                       __RPC__in LPCWSTR wzMimeType,
                        __RPC__out BOOL *pfMatches);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in IWICBitmapEncoderInfo * This,
                        __RPC__deref_out_opt IWICBitmapEncoder **ppIBitmapEncoder);
        END_INTERFACE
    } IWICBitmapEncoderInfoVtbl;
    interface IWICBitmapEncoderInfo
    {
        CONST_VTBL struct IWICBitmapEncoderInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetComponentType(This,pType) )
    ( (This)->lpVtbl -> GetCLSID(This,pclsid) )
    ( (This)->lpVtbl -> GetSigningStatus(This,pStatus) )
    ( (This)->lpVtbl -> GetAuthor(This,cchAuthor,wzAuthor,pcchActual) )
    ( (This)->lpVtbl -> GetVendorGUID(This,pguidVendor) )
    ( (This)->lpVtbl -> GetVersion(This,cchVersion,wzVersion,pcchActual) )
    ( (This)->lpVtbl -> GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) )
    ( (This)->lpVtbl -> GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) )
    ( (This)->lpVtbl -> GetContainerFormat(This,pguidContainerFormat) )
    ( (This)->lpVtbl -> GetPixelFormats(This,cFormats,pguidPixelFormats,pcActual) )
    ( (This)->lpVtbl -> GetColorManagementVersion(This,cchColorManagementVersion,wzColorManagementVersion,pcchActual) )
    ( (This)->lpVtbl -> GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual) )
    ( (This)->lpVtbl -> GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual) )
    ( (This)->lpVtbl -> GetMimeTypes(This,cchMimeTypes,wzMimeTypes,pcchActual) )
    ( (This)->lpVtbl -> GetFileExtensions(This,cchFileExtensions,wzFileExtensions,pcchActual) )
    ( (This)->lpVtbl -> DoesSupportAnimation(This,pfSupportAnimation) )
    ( (This)->lpVtbl -> DoesSupportChromakey(This,pfSupportChromakey) )
    ( (This)->lpVtbl -> DoesSupportLossless(This,pfSupportLossless) )
    ( (This)->lpVtbl -> DoesSupportMultiframe(This,pfSupportMultiframe) )
    ( (This)->lpVtbl -> MatchesMimeType(This,wzMimeType,pfMatches) )
    ( (This)->lpVtbl -> CreateInstance(This,ppIBitmapEncoder) )
EXTERN_C const IID IID_IWICBitmapDecoderInfo;
    typedef struct IWICBitmapDecoderInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICBitmapDecoderInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICBitmapDecoderInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICBitmapDecoderInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )(
            __RPC__in IWICBitmapDecoderInfo * This,
                        __RPC__out WICComponentType *pType);
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )(
            __RPC__in IWICBitmapDecoderInfo * This,
                        __RPC__out CLSID *pclsid);
        HRESULT ( STDMETHODCALLTYPE *GetSigningStatus )(
            __RPC__in IWICBitmapDecoderInfo * This,
                        __RPC__out DWORD *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetAuthor )(
            __RPC__in IWICBitmapDecoderInfo * This,
                       UINT cchAuthor,
                                             __RPC__inout_ecount_full_opt(cchAuthor) WCHAR *wzAuthor,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetVendorGUID )(
            __RPC__in IWICBitmapDecoderInfo * This,
                        __RPC__out GUID *pguidVendor);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IWICBitmapDecoderInfo * This,
                       UINT cchVersion,
                                             __RPC__inout_ecount_full_opt(cchVersion) WCHAR *wzVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetSpecVersion )(
            __RPC__in IWICBitmapDecoderInfo * This,
                       UINT cchSpecVersion,
                                             __RPC__inout_ecount_full_opt(cchSpecVersion) WCHAR *wzSpecVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            __RPC__in IWICBitmapDecoderInfo * This,
                       UINT cchFriendlyName,
                                             __RPC__inout_ecount_full_opt(cchFriendlyName) WCHAR *wzFriendlyName,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormat )(
            __RPC__in IWICBitmapDecoderInfo * This,
                        __RPC__out GUID *pguidContainerFormat);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormats )(
            __RPC__in IWICBitmapDecoderInfo * This,
                       UINT cFormats,
                                             __RPC__inout_ecount_full_opt(cFormats) GUID *pguidPixelFormats,
                        __RPC__out UINT *pcActual);
        HRESULT ( STDMETHODCALLTYPE *GetColorManagementVersion )(
            __RPC__in IWICBitmapDecoderInfo * This,
                       UINT cchColorManagementVersion,
                                             __RPC__inout_ecount_full_opt(cchColorManagementVersion) WCHAR *wzColorManagementVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceManufacturer )(
            __RPC__in IWICBitmapDecoderInfo * This,
                       UINT cchDeviceManufacturer,
                                             __RPC__inout_ecount_full_opt(cchDeviceManufacturer) WCHAR *wzDeviceManufacturer,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceModels )(
            __RPC__in IWICBitmapDecoderInfo * This,
                       UINT cchDeviceModels,
                                             __RPC__inout_ecount_full_opt(cchDeviceModels) WCHAR *wzDeviceModels,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetMimeTypes )(
            __RPC__in IWICBitmapDecoderInfo * This,
                       UINT cchMimeTypes,
                                             __RPC__inout_ecount_full_opt(cchMimeTypes) WCHAR *wzMimeTypes,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetFileExtensions )(
            __RPC__in IWICBitmapDecoderInfo * This,
                       UINT cchFileExtensions,
                                             __RPC__inout_ecount_full_opt(cchFileExtensions) WCHAR *wzFileExtensions,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportAnimation )(
            __RPC__in IWICBitmapDecoderInfo * This,
                        __RPC__out BOOL *pfSupportAnimation);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportChromakey )(
            __RPC__in IWICBitmapDecoderInfo * This,
                        __RPC__out BOOL *pfSupportChromakey);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportLossless )(
            __RPC__in IWICBitmapDecoderInfo * This,
                        __RPC__out BOOL *pfSupportLossless);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportMultiframe )(
            __RPC__in IWICBitmapDecoderInfo * This,
                        __RPC__out BOOL *pfSupportMultiframe);
        HRESULT ( STDMETHODCALLTYPE *MatchesMimeType )(
            __RPC__in IWICBitmapDecoderInfo * This,
                       __RPC__in LPCWSTR wzMimeType,
                        __RPC__out BOOL *pfMatches);
                      HRESULT ( STDMETHODCALLTYPE *GetPatterns )(
            IWICBitmapDecoderInfo * This,
                       UINT cbSizePatterns,
            _Out_writes_bytes_to_opt_(cbSizePatterns, *pcbPatternsActual) WICBitmapPattern *pPatterns,
            _Out_opt_ UINT *pcPatterns,
            _Out_ UINT *pcbPatternsActual);
        HRESULT ( STDMETHODCALLTYPE *MatchesPattern )(
            __RPC__in IWICBitmapDecoderInfo * This,
                       __RPC__in_opt IStream *pIStream,
                        __RPC__out BOOL *pfMatches);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in IWICBitmapDecoderInfo * This,
                        __RPC__deref_out_opt IWICBitmapDecoder **ppIBitmapDecoder);
        END_INTERFACE
    } IWICBitmapDecoderInfoVtbl;
    interface IWICBitmapDecoderInfo
    {
        CONST_VTBL struct IWICBitmapDecoderInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetComponentType(This,pType) )
    ( (This)->lpVtbl -> GetCLSID(This,pclsid) )
    ( (This)->lpVtbl -> GetSigningStatus(This,pStatus) )
    ( (This)->lpVtbl -> GetAuthor(This,cchAuthor,wzAuthor,pcchActual) )
    ( (This)->lpVtbl -> GetVendorGUID(This,pguidVendor) )
    ( (This)->lpVtbl -> GetVersion(This,cchVersion,wzVersion,pcchActual) )
    ( (This)->lpVtbl -> GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) )
    ( (This)->lpVtbl -> GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) )
    ( (This)->lpVtbl -> GetContainerFormat(This,pguidContainerFormat) )
    ( (This)->lpVtbl -> GetPixelFormats(This,cFormats,pguidPixelFormats,pcActual) )
    ( (This)->lpVtbl -> GetColorManagementVersion(This,cchColorManagementVersion,wzColorManagementVersion,pcchActual) )
    ( (This)->lpVtbl -> GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual) )
    ( (This)->lpVtbl -> GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual) )
    ( (This)->lpVtbl -> GetMimeTypes(This,cchMimeTypes,wzMimeTypes,pcchActual) )
    ( (This)->lpVtbl -> GetFileExtensions(This,cchFileExtensions,wzFileExtensions,pcchActual) )
    ( (This)->lpVtbl -> DoesSupportAnimation(This,pfSupportAnimation) )
    ( (This)->lpVtbl -> DoesSupportChromakey(This,pfSupportChromakey) )
    ( (This)->lpVtbl -> DoesSupportLossless(This,pfSupportLossless) )
    ( (This)->lpVtbl -> DoesSupportMultiframe(This,pfSupportMultiframe) )
    ( (This)->lpVtbl -> MatchesMimeType(This,wzMimeType,pfMatches) )
    ( (This)->lpVtbl -> GetPatterns(This,cbSizePatterns,pPatterns,pcPatterns,pcbPatternsActual) )
    ( (This)->lpVtbl -> MatchesPattern(This,pIStream,pfMatches) )
    ( (This)->lpVtbl -> CreateInstance(This,ppIBitmapDecoder) )
                HRESULT STDMETHODCALLTYPE IWICBitmapDecoderInfo_Remote_GetPatterns_Proxy(
    __RPC__in IWICBitmapDecoderInfo * This,
                                  __RPC__deref_out_ecount_full_opt(*pcPatterns) WICBitmapPattern **ppPatterns,
                __RPC__out UINT *pcPatterns);
void __RPC_STUB IWICBitmapDecoderInfo_Remote_GetPatterns_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IWICPixelFormatInfo;
    typedef struct IWICPixelFormatInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICPixelFormatInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICPixelFormatInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICPixelFormatInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )(
            __RPC__in IWICPixelFormatInfo * This,
                        __RPC__out WICComponentType *pType);
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )(
            __RPC__in IWICPixelFormatInfo * This,
                        __RPC__out CLSID *pclsid);
        HRESULT ( STDMETHODCALLTYPE *GetSigningStatus )(
            __RPC__in IWICPixelFormatInfo * This,
                        __RPC__out DWORD *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetAuthor )(
            __RPC__in IWICPixelFormatInfo * This,
                       UINT cchAuthor,
                                             __RPC__inout_ecount_full_opt(cchAuthor) WCHAR *wzAuthor,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetVendorGUID )(
            __RPC__in IWICPixelFormatInfo * This,
                        __RPC__out GUID *pguidVendor);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IWICPixelFormatInfo * This,
                       UINT cchVersion,
                                             __RPC__inout_ecount_full_opt(cchVersion) WCHAR *wzVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetSpecVersion )(
            __RPC__in IWICPixelFormatInfo * This,
                       UINT cchSpecVersion,
                                             __RPC__inout_ecount_full_opt(cchSpecVersion) WCHAR *wzSpecVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            __RPC__in IWICPixelFormatInfo * This,
                       UINT cchFriendlyName,
                                             __RPC__inout_ecount_full_opt(cchFriendlyName) WCHAR *wzFriendlyName,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetFormatGUID )(
            __RPC__in IWICPixelFormatInfo * This,
                        __RPC__out GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetColorContext )(
            __RPC__in IWICPixelFormatInfo * This,
                        __RPC__deref_out_opt IWICColorContext **ppIColorContext);
        HRESULT ( STDMETHODCALLTYPE *GetBitsPerPixel )(
            __RPC__in IWICPixelFormatInfo * This,
                        __RPC__out UINT *puiBitsPerPixel);
        HRESULT ( STDMETHODCALLTYPE *GetChannelCount )(
            __RPC__in IWICPixelFormatInfo * This,
                        __RPC__out UINT *puiChannelCount);
        HRESULT ( STDMETHODCALLTYPE *GetChannelMask )(
            __RPC__in IWICPixelFormatInfo * This,
                       UINT uiChannelIndex,
                       UINT cbMaskBuffer,
                                             __RPC__inout_ecount_full_opt(cbMaskBuffer) BYTE *pbMaskBuffer,
                        __RPC__out UINT *pcbActual);
        END_INTERFACE
    } IWICPixelFormatInfoVtbl;
    interface IWICPixelFormatInfo
    {
        CONST_VTBL struct IWICPixelFormatInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetComponentType(This,pType) )
    ( (This)->lpVtbl -> GetCLSID(This,pclsid) )
    ( (This)->lpVtbl -> GetSigningStatus(This,pStatus) )
    ( (This)->lpVtbl -> GetAuthor(This,cchAuthor,wzAuthor,pcchActual) )
    ( (This)->lpVtbl -> GetVendorGUID(This,pguidVendor) )
    ( (This)->lpVtbl -> GetVersion(This,cchVersion,wzVersion,pcchActual) )
    ( (This)->lpVtbl -> GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) )
    ( (This)->lpVtbl -> GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) )
    ( (This)->lpVtbl -> GetFormatGUID(This,pFormat) )
    ( (This)->lpVtbl -> GetColorContext(This,ppIColorContext) )
    ( (This)->lpVtbl -> GetBitsPerPixel(This,puiBitsPerPixel) )
    ( (This)->lpVtbl -> GetChannelCount(This,puiChannelCount) )
    ( (This)->lpVtbl -> GetChannelMask(This,uiChannelIndex,cbMaskBuffer,pbMaskBuffer,pcbActual) )
EXTERN_C const IID IID_IWICPixelFormatInfo2;
    typedef struct IWICPixelFormatInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICPixelFormatInfo2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICPixelFormatInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICPixelFormatInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )(
            __RPC__in IWICPixelFormatInfo2 * This,
                        __RPC__out WICComponentType *pType);
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )(
            __RPC__in IWICPixelFormatInfo2 * This,
                        __RPC__out CLSID *pclsid);
        HRESULT ( STDMETHODCALLTYPE *GetSigningStatus )(
            __RPC__in IWICPixelFormatInfo2 * This,
                        __RPC__out DWORD *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetAuthor )(
            __RPC__in IWICPixelFormatInfo2 * This,
                       UINT cchAuthor,
                                             __RPC__inout_ecount_full_opt(cchAuthor) WCHAR *wzAuthor,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetVendorGUID )(
            __RPC__in IWICPixelFormatInfo2 * This,
                        __RPC__out GUID *pguidVendor);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IWICPixelFormatInfo2 * This,
                       UINT cchVersion,
                                             __RPC__inout_ecount_full_opt(cchVersion) WCHAR *wzVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetSpecVersion )(
            __RPC__in IWICPixelFormatInfo2 * This,
                       UINT cchSpecVersion,
                                             __RPC__inout_ecount_full_opt(cchSpecVersion) WCHAR *wzSpecVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            __RPC__in IWICPixelFormatInfo2 * This,
                       UINT cchFriendlyName,
                                             __RPC__inout_ecount_full_opt(cchFriendlyName) WCHAR *wzFriendlyName,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetFormatGUID )(
            __RPC__in IWICPixelFormatInfo2 * This,
                        __RPC__out GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetColorContext )(
            __RPC__in IWICPixelFormatInfo2 * This,
                        __RPC__deref_out_opt IWICColorContext **ppIColorContext);
        HRESULT ( STDMETHODCALLTYPE *GetBitsPerPixel )(
            __RPC__in IWICPixelFormatInfo2 * This,
                        __RPC__out UINT *puiBitsPerPixel);
        HRESULT ( STDMETHODCALLTYPE *GetChannelCount )(
            __RPC__in IWICPixelFormatInfo2 * This,
                        __RPC__out UINT *puiChannelCount);
        HRESULT ( STDMETHODCALLTYPE *GetChannelMask )(
            __RPC__in IWICPixelFormatInfo2 * This,
                       UINT uiChannelIndex,
                       UINT cbMaskBuffer,
                                             __RPC__inout_ecount_full_opt(cbMaskBuffer) BYTE *pbMaskBuffer,
                        __RPC__out UINT *pcbActual);
        HRESULT ( STDMETHODCALLTYPE *SupportsTransparency )(
            __RPC__in IWICPixelFormatInfo2 * This,
                        __RPC__out BOOL *pfSupportsTransparency);
        HRESULT ( STDMETHODCALLTYPE *GetNumericRepresentation )(
            __RPC__in IWICPixelFormatInfo2 * This,
                        __RPC__out WICPixelFormatNumericRepresentation *pNumericRepresentation);
        END_INTERFACE
    } IWICPixelFormatInfo2Vtbl;
    interface IWICPixelFormatInfo2
    {
        CONST_VTBL struct IWICPixelFormatInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetComponentType(This,pType) )
    ( (This)->lpVtbl -> GetCLSID(This,pclsid) )
    ( (This)->lpVtbl -> GetSigningStatus(This,pStatus) )
    ( (This)->lpVtbl -> GetAuthor(This,cchAuthor,wzAuthor,pcchActual) )
    ( (This)->lpVtbl -> GetVendorGUID(This,pguidVendor) )
    ( (This)->lpVtbl -> GetVersion(This,cchVersion,wzVersion,pcchActual) )
    ( (This)->lpVtbl -> GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) )
    ( (This)->lpVtbl -> GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) )
    ( (This)->lpVtbl -> GetFormatGUID(This,pFormat) )
    ( (This)->lpVtbl -> GetColorContext(This,ppIColorContext) )
    ( (This)->lpVtbl -> GetBitsPerPixel(This,puiBitsPerPixel) )
    ( (This)->lpVtbl -> GetChannelCount(This,puiChannelCount) )
    ( (This)->lpVtbl -> GetChannelMask(This,uiChannelIndex,cbMaskBuffer,pbMaskBuffer,pcbActual) )
    ( (This)->lpVtbl -> SupportsTransparency(This,pfSupportsTransparency) )
    ( (This)->lpVtbl -> GetNumericRepresentation(This,pNumericRepresentation) )
EXTERN_C const IID IID_IWICImagingFactory;
    typedef struct IWICImagingFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICImagingFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICImagingFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICImagingFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateDecoderFromFilename )(
            __RPC__in IWICImagingFactory * This,
                       __RPC__in LPCWSTR wzFilename,
                               __RPC__in_opt const GUID *pguidVendor,
                       DWORD dwDesiredAccess,
                       WICDecodeOptions metadataOptions,
                                __RPC__deref_out_opt IWICBitmapDecoder **ppIDecoder);
        HRESULT ( STDMETHODCALLTYPE *CreateDecoderFromStream )(
            __RPC__in IWICImagingFactory * This,
                       __RPC__in_opt IStream *pIStream,
                               __RPC__in_opt const GUID *pguidVendor,
                       WICDecodeOptions metadataOptions,
                                __RPC__deref_out_opt IWICBitmapDecoder **ppIDecoder);
        HRESULT ( STDMETHODCALLTYPE *CreateDecoderFromFileHandle )(
            __RPC__in IWICImagingFactory * This,
                       ULONG_PTR hFile,
                               __RPC__in_opt const GUID *pguidVendor,
                       WICDecodeOptions metadataOptions,
                                __RPC__deref_out_opt IWICBitmapDecoder **ppIDecoder);
        HRESULT ( STDMETHODCALLTYPE *CreateComponentInfo )(
            __RPC__in IWICImagingFactory * This,
                       __RPC__in REFCLSID clsidComponent,
                        __RPC__deref_out_opt IWICComponentInfo **ppIInfo);
        HRESULT ( STDMETHODCALLTYPE *CreateDecoder )(
            __RPC__in IWICImagingFactory * This,
                       __RPC__in REFGUID guidContainerFormat,
                               __RPC__in_opt const GUID *pguidVendor,
                                __RPC__deref_out_opt IWICBitmapDecoder **ppIDecoder);
        HRESULT ( STDMETHODCALLTYPE *CreateEncoder )(
            __RPC__in IWICImagingFactory * This,
                       __RPC__in REFGUID guidContainerFormat,
                               __RPC__in_opt const GUID *pguidVendor,
                                __RPC__deref_out_opt IWICBitmapEncoder **ppIEncoder);
        HRESULT ( STDMETHODCALLTYPE *CreatePalette )(
            __RPC__in IWICImagingFactory * This,
                        __RPC__deref_out_opt IWICPalette **ppIPalette);
        HRESULT ( STDMETHODCALLTYPE *CreateFormatConverter )(
            __RPC__in IWICImagingFactory * This,
                        __RPC__deref_out_opt IWICFormatConverter **ppIFormatConverter);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapScaler )(
            __RPC__in IWICImagingFactory * This,
                        __RPC__deref_out_opt IWICBitmapScaler **ppIBitmapScaler);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapClipper )(
            __RPC__in IWICImagingFactory * This,
                        __RPC__deref_out_opt IWICBitmapClipper **ppIBitmapClipper);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFlipRotator )(
            __RPC__in IWICImagingFactory * This,
                        __RPC__deref_out_opt IWICBitmapFlipRotator **ppIBitmapFlipRotator);
        HRESULT ( STDMETHODCALLTYPE *CreateStream )(
            __RPC__in IWICImagingFactory * This,
                        __RPC__deref_out_opt IWICStream **ppIWICStream);
        HRESULT ( STDMETHODCALLTYPE *CreateColorContext )(
            __RPC__in IWICImagingFactory * This,
                        __RPC__deref_out_opt IWICColorContext **ppIWICColorContext);
        HRESULT ( STDMETHODCALLTYPE *CreateColorTransformer )(
            __RPC__in IWICImagingFactory * This,
                        __RPC__deref_out_opt IWICColorTransform **ppIWICColorTransform);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmap )(
            __RPC__in IWICImagingFactory * This,
                       UINT uiWidth,
                       UINT uiHeight,
                       __RPC__in REFWICPixelFormatGUID pixelFormat,
                       WICBitmapCreateCacheOption option,
                        __RPC__deref_out_opt IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromSource )(
            __RPC__in IWICImagingFactory * This,
                       __RPC__in_opt IWICBitmapSource *pIBitmapSource,
                       WICBitmapCreateCacheOption option,
                        __RPC__deref_out_opt IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromSourceRect )(
            __RPC__in IWICImagingFactory * This,
                       __RPC__in_opt IWICBitmapSource *pIBitmapSource,
                       UINT x,
                       UINT y,
                       UINT width,
                       UINT height,
                        __RPC__deref_out_opt IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromMemory )(
            __RPC__in IWICImagingFactory * This,
                       UINT uiWidth,
                       UINT uiHeight,
                       __RPC__in REFWICPixelFormatGUID pixelFormat,
                       UINT cbStride,
                       UINT cbBufferSize,
                                __RPC__in_ecount_full(cbBufferSize) BYTE *pbBuffer,
                        __RPC__deref_out_opt IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromHBITMAP )(
            __RPC__in IWICImagingFactory * This,
                       __RPC__in HBITMAP hBitmap,
                               __RPC__in_opt HPALETTE hPalette,
                       WICBitmapAlphaChannelOption options,
                        __RPC__deref_out_opt IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromHICON )(
            __RPC__in IWICImagingFactory * This,
                       __RPC__in HICON hIcon,
                        __RPC__deref_out_opt IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateComponentEnumerator )(
            __RPC__in IWICImagingFactory * This,
                       DWORD componentTypes,
                       DWORD options,
                        __RPC__deref_out_opt IEnumUnknown **ppIEnumUnknown);
        HRESULT ( STDMETHODCALLTYPE *CreateFastMetadataEncoderFromDecoder )(
            __RPC__in IWICImagingFactory * This,
                       __RPC__in_opt IWICBitmapDecoder *pIDecoder,
                        __RPC__deref_out_opt IWICFastMetadataEncoder **ppIFastEncoder);
        HRESULT ( STDMETHODCALLTYPE *CreateFastMetadataEncoderFromFrameDecode )(
            __RPC__in IWICImagingFactory * This,
                       __RPC__in_opt IWICBitmapFrameDecode *pIFrameDecoder,
                        __RPC__deref_out_opt IWICFastMetadataEncoder **ppIFastEncoder);
        HRESULT ( STDMETHODCALLTYPE *CreateQueryWriter )(
            __RPC__in IWICImagingFactory * This,
                       __RPC__in REFGUID guidMetadataFormat,
                               __RPC__in_opt const GUID *pguidVendor,
                        __RPC__deref_out_opt IWICMetadataQueryWriter **ppIQueryWriter);
        HRESULT ( STDMETHODCALLTYPE *CreateQueryWriterFromReader )(
            __RPC__in IWICImagingFactory * This,
                       __RPC__in_opt IWICMetadataQueryReader *pIQueryReader,
                               __RPC__in_opt const GUID *pguidVendor,
                        __RPC__deref_out_opt IWICMetadataQueryWriter **ppIQueryWriter);
        END_INTERFACE
    } IWICImagingFactoryVtbl;
    interface IWICImagingFactory
    {
        CONST_VTBL struct IWICImagingFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateDecoderFromFilename(This,wzFilename,pguidVendor,dwDesiredAccess,metadataOptions,ppIDecoder) )
    ( (This)->lpVtbl -> CreateDecoderFromStream(This,pIStream,pguidVendor,metadataOptions,ppIDecoder) )
    ( (This)->lpVtbl -> CreateDecoderFromFileHandle(This,hFile,pguidVendor,metadataOptions,ppIDecoder) )
    ( (This)->lpVtbl -> CreateComponentInfo(This,clsidComponent,ppIInfo) )
    ( (This)->lpVtbl -> CreateDecoder(This,guidContainerFormat,pguidVendor,ppIDecoder) )
    ( (This)->lpVtbl -> CreateEncoder(This,guidContainerFormat,pguidVendor,ppIEncoder) )
    ( (This)->lpVtbl -> CreatePalette(This,ppIPalette) )
    ( (This)->lpVtbl -> CreateFormatConverter(This,ppIFormatConverter) )
    ( (This)->lpVtbl -> CreateBitmapScaler(This,ppIBitmapScaler) )
    ( (This)->lpVtbl -> CreateBitmapClipper(This,ppIBitmapClipper) )
    ( (This)->lpVtbl -> CreateBitmapFlipRotator(This,ppIBitmapFlipRotator) )
    ( (This)->lpVtbl -> CreateStream(This,ppIWICStream) )
    ( (This)->lpVtbl -> CreateColorContext(This,ppIWICColorContext) )
    ( (This)->lpVtbl -> CreateColorTransformer(This,ppIWICColorTransform) )
    ( (This)->lpVtbl -> CreateBitmap(This,uiWidth,uiHeight,pixelFormat,option,ppIBitmap) )
    ( (This)->lpVtbl -> CreateBitmapFromSource(This,pIBitmapSource,option,ppIBitmap) )
    ( (This)->lpVtbl -> CreateBitmapFromSourceRect(This,pIBitmapSource,x,y,width,height,ppIBitmap) )
    ( (This)->lpVtbl -> CreateBitmapFromMemory(This,uiWidth,uiHeight,pixelFormat,cbStride,cbBufferSize,pbBuffer,ppIBitmap) )
    ( (This)->lpVtbl -> CreateBitmapFromHBITMAP(This,hBitmap,hPalette,options,ppIBitmap) )
    ( (This)->lpVtbl -> CreateBitmapFromHICON(This,hIcon,ppIBitmap) )
    ( (This)->lpVtbl -> CreateComponentEnumerator(This,componentTypes,options,ppIEnumUnknown) )
    ( (This)->lpVtbl -> CreateFastMetadataEncoderFromDecoder(This,pIDecoder,ppIFastEncoder) )
    ( (This)->lpVtbl -> CreateFastMetadataEncoderFromFrameDecode(This,pIFrameDecoder,ppIFastEncoder) )
    ( (This)->lpVtbl -> CreateQueryWriter(This,guidMetadataFormat,pguidVendor,ppIQueryWriter) )
    ( (This)->lpVtbl -> CreateQueryWriterFromReader(This,pIQueryReader,pguidVendor,ppIQueryWriter) )
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0035_v0_0_s_ifspec;
EXTERN_C const IID IID_IWICImagingFactory2;
    typedef struct IWICImagingFactory2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWICImagingFactory2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWICImagingFactory2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWICImagingFactory2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateDecoderFromFilename )(
            IWICImagingFactory2 * This,
                       LPCWSTR wzFilename,
                               const GUID *pguidVendor,
                       DWORD dwDesiredAccess,
                       WICDecodeOptions metadataOptions,
                                IWICBitmapDecoder **ppIDecoder);
        HRESULT ( STDMETHODCALLTYPE *CreateDecoderFromStream )(
            IWICImagingFactory2 * This,
                       IStream *pIStream,
                               const GUID *pguidVendor,
                       WICDecodeOptions metadataOptions,
                                IWICBitmapDecoder **ppIDecoder);
        HRESULT ( STDMETHODCALLTYPE *CreateDecoderFromFileHandle )(
            IWICImagingFactory2 * This,
                       ULONG_PTR hFile,
                               const GUID *pguidVendor,
                       WICDecodeOptions metadataOptions,
                                IWICBitmapDecoder **ppIDecoder);
        HRESULT ( STDMETHODCALLTYPE *CreateComponentInfo )(
            IWICImagingFactory2 * This,
                       REFCLSID clsidComponent,
                        IWICComponentInfo **ppIInfo);
        HRESULT ( STDMETHODCALLTYPE *CreateDecoder )(
            IWICImagingFactory2 * This,
                       REFGUID guidContainerFormat,
                               const GUID *pguidVendor,
                                IWICBitmapDecoder **ppIDecoder);
        HRESULT ( STDMETHODCALLTYPE *CreateEncoder )(
            IWICImagingFactory2 * This,
                       REFGUID guidContainerFormat,
                               const GUID *pguidVendor,
                                IWICBitmapEncoder **ppIEncoder);
        HRESULT ( STDMETHODCALLTYPE *CreatePalette )(
            IWICImagingFactory2 * This,
                        IWICPalette **ppIPalette);
        HRESULT ( STDMETHODCALLTYPE *CreateFormatConverter )(
            IWICImagingFactory2 * This,
                        IWICFormatConverter **ppIFormatConverter);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapScaler )(
            IWICImagingFactory2 * This,
                        IWICBitmapScaler **ppIBitmapScaler);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapClipper )(
            IWICImagingFactory2 * This,
                        IWICBitmapClipper **ppIBitmapClipper);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFlipRotator )(
            IWICImagingFactory2 * This,
                        IWICBitmapFlipRotator **ppIBitmapFlipRotator);
        HRESULT ( STDMETHODCALLTYPE *CreateStream )(
            IWICImagingFactory2 * This,
                        IWICStream **ppIWICStream);
        HRESULT ( STDMETHODCALLTYPE *CreateColorContext )(
            IWICImagingFactory2 * This,
                        IWICColorContext **ppIWICColorContext);
        HRESULT ( STDMETHODCALLTYPE *CreateColorTransformer )(
            IWICImagingFactory2 * This,
                        IWICColorTransform **ppIWICColorTransform);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmap )(
            IWICImagingFactory2 * This,
                       UINT uiWidth,
                       UINT uiHeight,
                       REFWICPixelFormatGUID pixelFormat,
                       WICBitmapCreateCacheOption option,
                        IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromSource )(
            IWICImagingFactory2 * This,
                       IWICBitmapSource *pIBitmapSource,
                       WICBitmapCreateCacheOption option,
                        IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromSourceRect )(
            IWICImagingFactory2 * This,
                       IWICBitmapSource *pIBitmapSource,
                       UINT x,
                       UINT y,
                       UINT width,
                       UINT height,
                        IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromMemory )(
            IWICImagingFactory2 * This,
                       UINT uiWidth,
                       UINT uiHeight,
                       REFWICPixelFormatGUID pixelFormat,
                       UINT cbStride,
                       UINT cbBufferSize,
                                BYTE *pbBuffer,
                        IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromHBITMAP )(
            IWICImagingFactory2 * This,
                       HBITMAP hBitmap,
                               HPALETTE hPalette,
                       WICBitmapAlphaChannelOption options,
                        IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromHICON )(
            IWICImagingFactory2 * This,
                       HICON hIcon,
                        IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateComponentEnumerator )(
            IWICImagingFactory2 * This,
                       DWORD componentTypes,
                       DWORD options,
                        IEnumUnknown **ppIEnumUnknown);
        HRESULT ( STDMETHODCALLTYPE *CreateFastMetadataEncoderFromDecoder )(
            IWICImagingFactory2 * This,
                       IWICBitmapDecoder *pIDecoder,
                        IWICFastMetadataEncoder **ppIFastEncoder);
        HRESULT ( STDMETHODCALLTYPE *CreateFastMetadataEncoderFromFrameDecode )(
            IWICImagingFactory2 * This,
                       IWICBitmapFrameDecode *pIFrameDecoder,
                        IWICFastMetadataEncoder **ppIFastEncoder);
        HRESULT ( STDMETHODCALLTYPE *CreateQueryWriter )(
            IWICImagingFactory2 * This,
                       REFGUID guidMetadataFormat,
                               const GUID *pguidVendor,
                        IWICMetadataQueryWriter **ppIQueryWriter);
        HRESULT ( STDMETHODCALLTYPE *CreateQueryWriterFromReader )(
            IWICImagingFactory2 * This,
                       IWICMetadataQueryReader *pIQueryReader,
                               const GUID *pguidVendor,
                        IWICMetadataQueryWriter **ppIQueryWriter);
        HRESULT ( STDMETHODCALLTYPE *CreateImageEncoder )(
            IWICImagingFactory2 * This,
                       ID2D1Device *pD2DDevice,
                        IWICImageEncoder **ppWICImageEncoder);
        END_INTERFACE
    } IWICImagingFactory2Vtbl;
    interface IWICImagingFactory2
    {
        CONST_VTBL struct IWICImagingFactory2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateDecoderFromFilename(This,wzFilename,pguidVendor,dwDesiredAccess,metadataOptions,ppIDecoder) )
    ( (This)->lpVtbl -> CreateDecoderFromStream(This,pIStream,pguidVendor,metadataOptions,ppIDecoder) )
    ( (This)->lpVtbl -> CreateDecoderFromFileHandle(This,hFile,pguidVendor,metadataOptions,ppIDecoder) )
    ( (This)->lpVtbl -> CreateComponentInfo(This,clsidComponent,ppIInfo) )
    ( (This)->lpVtbl -> CreateDecoder(This,guidContainerFormat,pguidVendor,ppIDecoder) )
    ( (This)->lpVtbl -> CreateEncoder(This,guidContainerFormat,pguidVendor,ppIEncoder) )
    ( (This)->lpVtbl -> CreatePalette(This,ppIPalette) )
    ( (This)->lpVtbl -> CreateFormatConverter(This,ppIFormatConverter) )
    ( (This)->lpVtbl -> CreateBitmapScaler(This,ppIBitmapScaler) )
    ( (This)->lpVtbl -> CreateBitmapClipper(This,ppIBitmapClipper) )
    ( (This)->lpVtbl -> CreateBitmapFlipRotator(This,ppIBitmapFlipRotator) )
    ( (This)->lpVtbl -> CreateStream(This,ppIWICStream) )
    ( (This)->lpVtbl -> CreateColorContext(This,ppIWICColorContext) )
    ( (This)->lpVtbl -> CreateColorTransformer(This,ppIWICColorTransform) )
    ( (This)->lpVtbl -> CreateBitmap(This,uiWidth,uiHeight,pixelFormat,option,ppIBitmap) )
    ( (This)->lpVtbl -> CreateBitmapFromSource(This,pIBitmapSource,option,ppIBitmap) )
    ( (This)->lpVtbl -> CreateBitmapFromSourceRect(This,pIBitmapSource,x,y,width,height,ppIBitmap) )
    ( (This)->lpVtbl -> CreateBitmapFromMemory(This,uiWidth,uiHeight,pixelFormat,cbStride,cbBufferSize,pbBuffer,ppIBitmap) )
    ( (This)->lpVtbl -> CreateBitmapFromHBITMAP(This,hBitmap,hPalette,options,ppIBitmap) )
    ( (This)->lpVtbl -> CreateBitmapFromHICON(This,hIcon,ppIBitmap) )
    ( (This)->lpVtbl -> CreateComponentEnumerator(This,componentTypes,options,ppIEnumUnknown) )
    ( (This)->lpVtbl -> CreateFastMetadataEncoderFromDecoder(This,pIDecoder,ppIFastEncoder) )
    ( (This)->lpVtbl -> CreateFastMetadataEncoderFromFrameDecode(This,pIFrameDecoder,ppIFastEncoder) )
    ( (This)->lpVtbl -> CreateQueryWriter(This,guidMetadataFormat,pguidVendor,ppIQueryWriter) )
    ( (This)->lpVtbl -> CreateQueryWriterFromReader(This,pIQueryReader,pguidVendor,ppIQueryWriter) )
    ( (This)->lpVtbl -> CreateImageEncoder(This,pD2DDevice,ppWICImageEncoder) )
HRESULT WINAPI WICConvertBitmapSource(
     _In_ REFWICPixelFormatGUID dstFormat,
     _In_ IWICBitmapSource *pISrc,
     _Outptr_ IWICBitmapSource **ppIDst
     );
HRESULT WINAPI WICCreateBitmapFromSection(
     _In_ UINT width,
     _In_ UINT height,
     _In_ REFWICPixelFormatGUID pixelFormat,
     _In_ HANDLE hSection,
     _In_ UINT stride,
     _In_ UINT offset,
     _Outptr_ IWICBitmap **ppIBitmap
     );
HRESULT WINAPI WICCreateBitmapFromSectionEx(
     _In_ UINT width,
     _In_ UINT height,
     _In_ REFWICPixelFormatGUID pixelFormat,
     _In_ HANDLE hSection,
     _In_ UINT stride,
     _In_ UINT offset,
     _In_ WICSectionAccessLevel desiredAccessLevel,
     _Outptr_ IWICBitmap **ppIBitmap
     );
HRESULT WINAPI WICMapGuidToShortName(
    _In_ REFGUID guid,
    _In_ UINT cchName,
    _Inout_updates_opt_(cchName) WCHAR *wzName,
    _Out_ UINT *pcchActual
   );
HRESULT WINAPI WICMapShortNameToGuid(
    _In_ PCWSTR wzName,
    _Out_ GUID *pguid
   );
HRESULT WINAPI WICMapSchemaToName(
    _In_ REFGUID guidMetadataFormat,
    _In_ LPWSTR pwzSchema,
    _In_ UINT cchName,
    _Inout_updates_opt_(cchName) WCHAR *wzName,
    _Out_ UINT *pcchActual
    );
typedef
enum WICTiffCompressionOption
    {
        WICTiffCompressionDontCare = 0,
        WICTiffCompressionNone = 0x1,
        WICTiffCompressionCCITT3 = 0x2,
        WICTiffCompressionCCITT4 = 0x3,
        WICTiffCompressionLZW = 0x4,
        WICTiffCompressionRLE = 0x5,
        WICTiffCompressionZIP = 0x6,
        WICTiffCompressionLZWHDifferencing = 0x7,
        WICTIFFCOMPRESSIONOPTION_FORCE_DWORD = 0x7fffffff
    } WICTiffCompressionOption;
typedef
enum WICJpegYCrCbSubsamplingOption
    {
        WICJpegYCrCbSubsamplingDefault = 0,
        WICJpegYCrCbSubsampling420 = 0x1,
        WICJpegYCrCbSubsampling422 = 0x2,
        WICJpegYCrCbSubsampling444 = 0x3,
        WICJpegYCrCbSubsampling440 = 0x4,
        WICJPEGYCRCBSUBSAMPLING_FORCE_DWORD = 0x7fffffff
    } WICJpegYCrCbSubsamplingOption;
typedef
enum WICPngFilterOption
    {
        WICPngFilterUnspecified = 0,
        WICPngFilterNone = 0x1,
        WICPngFilterSub = 0x2,
        WICPngFilterUp = 0x3,
        WICPngFilterAverage = 0x4,
        WICPngFilterPaeth = 0x5,
        WICPngFilterAdaptive = 0x6,
        WICPNGFILTEROPTION_FORCE_DWORD = 0x7fffffff
    } WICPngFilterOption;
typedef
enum WICNamedWhitePoint
    {
        WICWhitePointDefault = 0x1,
        WICWhitePointDaylight = 0x2,
        WICWhitePointCloudy = 0x4,
        WICWhitePointShade = 0x8,
        WICWhitePointTungsten = 0x10,
        WICWhitePointFluorescent = 0x20,
        WICWhitePointFlash = 0x40,
        WICWhitePointUnderwater = 0x80,
        WICWhitePointCustom = 0x100,
        WICWhitePointAutoWhiteBalance = 0x200,
        WICWhitePointAsShot = WICWhitePointDefault,
        WICNAMEDWHITEPOINT_FORCE_DWORD = 0x7fffffff
    } WICNamedWhitePoint;
typedef
enum WICRawCapabilities
    {
        WICRawCapabilityNotSupported = 0,
        WICRawCapabilityGetSupported = 0x1,
        WICRawCapabilityFullySupported = 0x2,
        WICRAWCAPABILITIES_FORCE_DWORD = 0x7fffffff
    } WICRawCapabilities;
typedef
enum WICRawRotationCapabilities
    {
        WICRawRotationCapabilityNotSupported = 0,
        WICRawRotationCapabilityGetSupported = 0x1,
        WICRawRotationCapabilityNinetyDegreesSupported = 0x2,
        WICRawRotationCapabilityFullySupported = 0x3,
        WICRAWROTATIONCAPABILITIES_FORCE_DWORD = 0x7fffffff
    } WICRawRotationCapabilities;
typedef struct WICRawCapabilitiesInfo
    {
    UINT cbSize;
    UINT CodecMajorVersion;
    UINT CodecMinorVersion;
    WICRawCapabilities ExposureCompensationSupport;
    WICRawCapabilities ContrastSupport;
    WICRawCapabilities RGBWhitePointSupport;
    WICRawCapabilities NamedWhitePointSupport;
    UINT NamedWhitePointSupportMask;
    WICRawCapabilities KelvinWhitePointSupport;
    WICRawCapabilities GammaSupport;
    WICRawCapabilities TintSupport;
    WICRawCapabilities SaturationSupport;
    WICRawCapabilities SharpnessSupport;
    WICRawCapabilities NoiseReductionSupport;
    WICRawCapabilities DestinationColorProfileSupport;
    WICRawCapabilities ToneCurveSupport;
    WICRawRotationCapabilities RotationSupport;
    WICRawCapabilities RenderModeSupport;
    } WICRawCapabilitiesInfo;
typedef
enum WICRawParameterSet
    {
        WICAsShotParameterSet = 0x1,
        WICUserAdjustedParameterSet = 0x2,
        WICAutoAdjustedParameterSet = 0x3,
        WICRAWPARAMETERSET_FORCE_DWORD = 0x7fffffff
    } WICRawParameterSet;
typedef
enum WICRawRenderMode
    {
        WICRawRenderModeDraft = 0x1,
        WICRawRenderModeNormal = 0x2,
        WICRawRenderModeBestQuality = 0x3,
        WICRAWRENDERMODE_FORCE_DWORD = 0x7fffffff
    } WICRawRenderMode;
typedef struct WICRawToneCurvePoint
    {
    double Input;
    double Output;
    } WICRawToneCurvePoint;
typedef struct WICRawToneCurve
    {
    UINT cPoints;
    WICRawToneCurvePoint aPoints[ 1 ];
    } WICRawToneCurve;
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0036_v0_0_s_ifspec;
EXTERN_C const IID IID_IWICDevelopRawNotificationCallback;
    typedef struct IWICDevelopRawNotificationCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICDevelopRawNotificationCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICDevelopRawNotificationCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICDevelopRawNotificationCallback * This);
        HRESULT ( STDMETHODCALLTYPE *Notify )(
            __RPC__in IWICDevelopRawNotificationCallback * This,
                       UINT NotificationMask);
        END_INTERFACE
    } IWICDevelopRawNotificationCallbackVtbl;
    interface IWICDevelopRawNotificationCallback
    {
        CONST_VTBL struct IWICDevelopRawNotificationCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Notify(This,NotificationMask) )
EXTERN_C const IID IID_IWICDevelopRaw;
    typedef struct IWICDevelopRawVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICDevelopRaw * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICDevelopRaw * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICDevelopRaw * This);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__out UINT *puiWidth,
                        __RPC__out UINT *puiHeight);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__out WICPixelFormatGUID *pPixelFormat);
        HRESULT ( STDMETHODCALLTYPE *GetResolution )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__out double *pDpiX,
                        __RPC__out double *pDpiY);
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )(
            __RPC__in IWICDevelopRaw * This,
                       __RPC__in_opt IWICPalette *pIPalette);
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )(
            __RPC__in IWICDevelopRaw * This,
                               __RPC__in_opt const WICRect *prc,
                       UINT cbStride,
                       UINT cbBufferSize,
                                 __RPC__out_ecount_full(cbBufferSize) BYTE *pbBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataQueryReader )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__deref_out_opt IWICMetadataQueryReader **ppIMetadataQueryReader);
        HRESULT ( STDMETHODCALLTYPE *GetColorContexts )(
            __RPC__in IWICDevelopRaw * This,
                       UINT cCount,
                                             __RPC__inout_ecount_full_opt(cCount) IWICColorContext **ppIColorContexts,
                        __RPC__out UINT *pcActualCount);
        HRESULT ( STDMETHODCALLTYPE *GetThumbnail )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__deref_out_opt IWICBitmapSource **ppIThumbnail);
                      HRESULT ( STDMETHODCALLTYPE *QueryRawCapabilitiesInfo )(
            IWICDevelopRaw * This,
                            WICRawCapabilitiesInfo *pInfo);
        HRESULT ( STDMETHODCALLTYPE *LoadParameterSet )(
            __RPC__in IWICDevelopRaw * This,
                       WICRawParameterSet ParameterSet);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentParameterSet )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__deref_out_opt IPropertyBag2 **ppCurrentParameterSet);
        HRESULT ( STDMETHODCALLTYPE *SetExposureCompensation )(
            __RPC__in IWICDevelopRaw * This,
                       double ev);
        HRESULT ( STDMETHODCALLTYPE *GetExposureCompensation )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__out double *pEV);
        HRESULT ( STDMETHODCALLTYPE *SetWhitePointRGB )(
            __RPC__in IWICDevelopRaw * This,
                       UINT Red,
                       UINT Green,
                       UINT Blue);
        HRESULT ( STDMETHODCALLTYPE *GetWhitePointRGB )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__out UINT *pRed,
                        __RPC__out UINT *pGreen,
                        __RPC__out UINT *pBlue);
        HRESULT ( STDMETHODCALLTYPE *SetNamedWhitePoint )(
            __RPC__in IWICDevelopRaw * This,
                       WICNamedWhitePoint WhitePoint);
        HRESULT ( STDMETHODCALLTYPE *GetNamedWhitePoint )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__out WICNamedWhitePoint *pWhitePoint);
        HRESULT ( STDMETHODCALLTYPE *SetWhitePointKelvin )(
            __RPC__in IWICDevelopRaw * This,
                       UINT WhitePointKelvin);
        HRESULT ( STDMETHODCALLTYPE *GetWhitePointKelvin )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__out UINT *pWhitePointKelvin);
        HRESULT ( STDMETHODCALLTYPE *GetKelvinRangeInfo )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__out UINT *pMinKelvinTemp,
                        __RPC__out UINT *pMaxKelvinTemp,
                        __RPC__out UINT *pKelvinTempStepValue);
        HRESULT ( STDMETHODCALLTYPE *SetContrast )(
            __RPC__in IWICDevelopRaw * This,
                       double Contrast);
        HRESULT ( STDMETHODCALLTYPE *GetContrast )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__out double *pContrast);
        HRESULT ( STDMETHODCALLTYPE *SetGamma )(
            __RPC__in IWICDevelopRaw * This,
                       double Gamma);
        HRESULT ( STDMETHODCALLTYPE *GetGamma )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__out double *pGamma);
        HRESULT ( STDMETHODCALLTYPE *SetSharpness )(
            __RPC__in IWICDevelopRaw * This,
                       double Sharpness);
        HRESULT ( STDMETHODCALLTYPE *GetSharpness )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__out double *pSharpness);
        HRESULT ( STDMETHODCALLTYPE *SetSaturation )(
            __RPC__in IWICDevelopRaw * This,
                       double Saturation);
        HRESULT ( STDMETHODCALLTYPE *GetSaturation )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__out double *pSaturation);
        HRESULT ( STDMETHODCALLTYPE *SetTint )(
            __RPC__in IWICDevelopRaw * This,
                       double Tint);
        HRESULT ( STDMETHODCALLTYPE *GetTint )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__out double *pTint);
        HRESULT ( STDMETHODCALLTYPE *SetNoiseReduction )(
            __RPC__in IWICDevelopRaw * This,
                       double NoiseReduction);
        HRESULT ( STDMETHODCALLTYPE *GetNoiseReduction )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__out double *pNoiseReduction);
        HRESULT ( STDMETHODCALLTYPE *SetDestinationColorContext )(
            __RPC__in IWICDevelopRaw * This,
                               __RPC__in_opt IWICColorContext *pColorContext);
                      HRESULT ( STDMETHODCALLTYPE *SetToneCurve )(
            IWICDevelopRaw * This,
                       UINT cbToneCurveSize,
            _In_reads_bytes_(cbToneCurveSize) const WICRawToneCurve *pToneCurve);
                      HRESULT ( STDMETHODCALLTYPE *GetToneCurve )(
            IWICDevelopRaw * This,
                       UINT cbToneCurveBufferSize,
            _Out_writes_bytes_to_opt_(cbToneCurveBufferSize, *pcbActualToneCurveBufferSize) WICRawToneCurve *pToneCurve,
            _Inout_opt_ UINT *pcbActualToneCurveBufferSize);
        HRESULT ( STDMETHODCALLTYPE *SetRotation )(
            __RPC__in IWICDevelopRaw * This,
                       double Rotation);
        HRESULT ( STDMETHODCALLTYPE *GetRotation )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__out double *pRotation);
        HRESULT ( STDMETHODCALLTYPE *SetRenderMode )(
            __RPC__in IWICDevelopRaw * This,
                       WICRawRenderMode RenderMode);
        HRESULT ( STDMETHODCALLTYPE *GetRenderMode )(
            __RPC__in IWICDevelopRaw * This,
                        __RPC__out WICRawRenderMode *pRenderMode);
        HRESULT ( STDMETHODCALLTYPE *SetNotificationCallback )(
            __RPC__in IWICDevelopRaw * This,
                               __RPC__in_opt IWICDevelopRawNotificationCallback *pCallback);
        END_INTERFACE
    } IWICDevelopRawVtbl;
    interface IWICDevelopRaw
    {
        CONST_VTBL struct IWICDevelopRawVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) )
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) )
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) )
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) )
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) )
    ( (This)->lpVtbl -> GetMetadataQueryReader(This,ppIMetadataQueryReader) )
    ( (This)->lpVtbl -> GetColorContexts(This,cCount,ppIColorContexts,pcActualCount) )
    ( (This)->lpVtbl -> GetThumbnail(This,ppIThumbnail) )
    ( (This)->lpVtbl -> QueryRawCapabilitiesInfo(This,pInfo) )
    ( (This)->lpVtbl -> LoadParameterSet(This,ParameterSet) )
    ( (This)->lpVtbl -> GetCurrentParameterSet(This,ppCurrentParameterSet) )
    ( (This)->lpVtbl -> SetExposureCompensation(This,ev) )
    ( (This)->lpVtbl -> GetExposureCompensation(This,pEV) )
    ( (This)->lpVtbl -> SetWhitePointRGB(This,Red,Green,Blue) )
    ( (This)->lpVtbl -> GetWhitePointRGB(This,pRed,pGreen,pBlue) )
    ( (This)->lpVtbl -> SetNamedWhitePoint(This,WhitePoint) )
    ( (This)->lpVtbl -> GetNamedWhitePoint(This,pWhitePoint) )
    ( (This)->lpVtbl -> SetWhitePointKelvin(This,WhitePointKelvin) )
    ( (This)->lpVtbl -> GetWhitePointKelvin(This,pWhitePointKelvin) )
    ( (This)->lpVtbl -> GetKelvinRangeInfo(This,pMinKelvinTemp,pMaxKelvinTemp,pKelvinTempStepValue) )
    ( (This)->lpVtbl -> SetContrast(This,Contrast) )
    ( (This)->lpVtbl -> GetContrast(This,pContrast) )
    ( (This)->lpVtbl -> SetGamma(This,Gamma) )
    ( (This)->lpVtbl -> GetGamma(This,pGamma) )
    ( (This)->lpVtbl -> SetSharpness(This,Sharpness) )
    ( (This)->lpVtbl -> GetSharpness(This,pSharpness) )
    ( (This)->lpVtbl -> SetSaturation(This,Saturation) )
    ( (This)->lpVtbl -> GetSaturation(This,pSaturation) )
    ( (This)->lpVtbl -> SetTint(This,Tint) )
    ( (This)->lpVtbl -> GetTint(This,pTint) )
    ( (This)->lpVtbl -> SetNoiseReduction(This,NoiseReduction) )
    ( (This)->lpVtbl -> GetNoiseReduction(This,pNoiseReduction) )
    ( (This)->lpVtbl -> SetDestinationColorContext(This,pColorContext) )
    ( (This)->lpVtbl -> SetToneCurve(This,cbToneCurveSize,pToneCurve) )
    ( (This)->lpVtbl -> GetToneCurve(This,cbToneCurveBufferSize,pToneCurve,pcbActualToneCurveBufferSize) )
    ( (This)->lpVtbl -> SetRotation(This,Rotation) )
    ( (This)->lpVtbl -> GetRotation(This,pRotation) )
    ( (This)->lpVtbl -> SetRenderMode(This,RenderMode) )
    ( (This)->lpVtbl -> GetRenderMode(This,pRenderMode) )
    ( (This)->lpVtbl -> SetNotificationCallback(This,pCallback) )
                HRESULT STDMETHODCALLTYPE IWICDevelopRaw_Remote_QueryRawCapabilitiesInfo_Proxy(
    __RPC__in IWICDevelopRaw * This,
                    __RPC__inout WICRawCapabilitiesInfo *pInfo);
void __RPC_STUB IWICDevelopRaw_Remote_QueryRawCapabilitiesInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IWICDevelopRaw_Remote_SetToneCurve_Proxy(
    __RPC__in IWICDevelopRaw * This,
               UINT cPoints,
                        __RPC__in_ecount_full(cPoints) const WICRawToneCurvePoint *aPoints);
void __RPC_STUB IWICDevelopRaw_Remote_SetToneCurve_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IWICDevelopRaw_Remote_GetToneCurve_Proxy(
    __RPC__in IWICDevelopRaw * This,
                __RPC__out UINT *pcPoints,
                                  __RPC__deref_out_ecount_full_opt(*pcPoints) WICRawToneCurvePoint **paPoints);
void __RPC_STUB IWICDevelopRaw_Remote_GetToneCurve_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef
enum WICDdsDimension
    {
        WICDdsTexture1D = 0,
        WICDdsTexture2D = 0x1,
        WICDdsTexture3D = 0x2,
        WICDdsTextureCube = 0x3,
        WICDDSTEXTURE_FORCE_DWORD = 0x7fffffff
    } WICDdsDimension;
typedef
enum WICDdsAlphaMode
    {
        WICDdsAlphaModeUnknown = 0,
        WICDdsAlphaModeStraight = 0x1,
        WICDdsAlphaModePremultiplied = 0x2,
        WICDdsAlphaModeOpaque = 0x3,
        WICDdsAlphaModeCustom = 0x4,
        WICDDSALPHAMODE_FORCE_DWORD = 0x7fffffff
    } WICDdsAlphaMode;
typedef struct WICDdsParameters
    {
    UINT Width;
    UINT Height;
    UINT Depth;
    UINT MipLevels;
    UINT ArraySize;
    DXGI_FORMAT DxgiFormat;
    WICDdsDimension Dimension;
    WICDdsAlphaMode AlphaMode;
    } WICDdsParameters;
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0038_v0_0_s_ifspec;
EXTERN_C const IID IID_IWICDdsDecoder;
    typedef struct IWICDdsDecoderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICDdsDecoder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICDdsDecoder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICDdsDecoder * This);
        HRESULT ( STDMETHODCALLTYPE *GetParameters )(
            __RPC__in IWICDdsDecoder * This,
                        __RPC__out WICDdsParameters *pParameters);
        HRESULT ( STDMETHODCALLTYPE *GetFrame )(
            __RPC__in IWICDdsDecoder * This,
                       UINT arrayIndex,
                       UINT mipLevel,
                       UINT sliceIndex,
                                __RPC__deref_out_opt IWICBitmapFrameDecode **ppIBitmapFrame);
        END_INTERFACE
    } IWICDdsDecoderVtbl;
    interface IWICDdsDecoder
    {
        CONST_VTBL struct IWICDdsDecoderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetParameters(This,pParameters) )
    ( (This)->lpVtbl -> GetFrame(This,arrayIndex,mipLevel,sliceIndex,ppIBitmapFrame) )
EXTERN_C const IID IID_IWICDdsEncoder;
    typedef struct IWICDdsEncoderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICDdsEncoder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICDdsEncoder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICDdsEncoder * This);
        HRESULT ( STDMETHODCALLTYPE *SetParameters )(
            __RPC__in IWICDdsEncoder * This,
                       __RPC__in WICDdsParameters *pParameters);
        HRESULT ( STDMETHODCALLTYPE *GetParameters )(
            __RPC__in IWICDdsEncoder * This,
                        __RPC__out WICDdsParameters *pParameters);
        HRESULT ( STDMETHODCALLTYPE *CreateNewFrame )(
            __RPC__in IWICDdsEncoder * This,
                        __RPC__deref_out_opt IWICBitmapFrameEncode **ppIFrameEncode,
                                  __RPC__out UINT *pArrayIndex,
                                  __RPC__out UINT *pMipLevel,
                                  __RPC__out UINT *pSliceIndex);
        END_INTERFACE
    } IWICDdsEncoderVtbl;
    interface IWICDdsEncoder
    {
        CONST_VTBL struct IWICDdsEncoderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetParameters(This,pParameters) )
    ( (This)->lpVtbl -> GetParameters(This,pParameters) )
    ( (This)->lpVtbl -> CreateNewFrame(This,ppIFrameEncode,pArrayIndex,pMipLevel,pSliceIndex) )
typedef struct WICDdsFormatInfo
    {
    DXGI_FORMAT DxgiFormat;
    UINT BytesPerBlock;
    UINT BlockWidth;
    UINT BlockHeight;
    } WICDdsFormatInfo;
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0040_v0_0_s_ifspec;
EXTERN_C const IID IID_IWICDdsFrameDecode;
    typedef struct IWICDdsFrameDecodeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICDdsFrameDecode * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICDdsFrameDecode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICDdsFrameDecode * This);
        HRESULT ( STDMETHODCALLTYPE *GetSizeInBlocks )(
            __RPC__in IWICDdsFrameDecode * This,
                        __RPC__out UINT *pWidthInBlocks,
                        __RPC__out UINT *pHeightInBlocks);
        HRESULT ( STDMETHODCALLTYPE *GetFormatInfo )(
            __RPC__in IWICDdsFrameDecode * This,
                        __RPC__out WICDdsFormatInfo *pFormatInfo);
        HRESULT ( STDMETHODCALLTYPE *CopyBlocks )(
            __RPC__in IWICDdsFrameDecode * This,
                               __RPC__in_opt const WICRect *prcBoundsInBlocks,
                       UINT cbStride,
                       UINT cbBufferSize,
                                 __RPC__out_ecount_full(cbBufferSize) BYTE *pbBuffer);
        END_INTERFACE
    } IWICDdsFrameDecodeVtbl;
    interface IWICDdsFrameDecode
    {
        CONST_VTBL struct IWICDdsFrameDecodeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSizeInBlocks(This,pWidthInBlocks,pHeightInBlocks) )
    ( (This)->lpVtbl -> GetFormatInfo(This,pFormatInfo) )
    ( (This)->lpVtbl -> CopyBlocks(This,prcBoundsInBlocks,cbStride,cbBufferSize,pbBuffer) )
EXTERN_C const IID IID_IWICJpegFrameDecode;
    typedef struct IWICJpegFrameDecodeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICJpegFrameDecode * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICJpegFrameDecode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICJpegFrameDecode * This);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportIndexing )(
            __RPC__in IWICJpegFrameDecode * This,
                        __RPC__out BOOL *pfIndexingSupported);
        HRESULT ( STDMETHODCALLTYPE *SetIndexing )(
            __RPC__in IWICJpegFrameDecode * This,
            WICJpegIndexingOptions options,
            UINT horizontalIntervalSize);
        HRESULT ( STDMETHODCALLTYPE *ClearIndexing )(
            __RPC__in IWICJpegFrameDecode * This);
        HRESULT ( STDMETHODCALLTYPE *GetAcHuffmanTable )(
            __RPC__in IWICJpegFrameDecode * This,
            UINT scanIndex,
                          __RPC__in_range(0,WIC_JPEG_MAX_TABLE_INDEX) UINT tableIndex,
                        __RPC__out DXGI_JPEG_AC_HUFFMAN_TABLE *pAcHuffmanTable);
        HRESULT ( STDMETHODCALLTYPE *GetDcHuffmanTable )(
            __RPC__in IWICJpegFrameDecode * This,
            UINT scanIndex,
                          __RPC__in_range(0,WIC_JPEG_MAX_TABLE_INDEX) UINT tableIndex,
                        __RPC__out DXGI_JPEG_DC_HUFFMAN_TABLE *pDcHuffmanTable);
        HRESULT ( STDMETHODCALLTYPE *GetQuantizationTable )(
            __RPC__in IWICJpegFrameDecode * This,
            UINT scanIndex,
                          __RPC__in_range(0,WIC_JPEG_MAX_TABLE_INDEX) UINT tableIndex,
                        __RPC__out DXGI_JPEG_QUANTIZATION_TABLE *pQuantizationTable);
        HRESULT ( STDMETHODCALLTYPE *GetFrameHeader )(
            __RPC__in IWICJpegFrameDecode * This,
                        __RPC__out WICJpegFrameHeader *pFrameHeader);
        HRESULT ( STDMETHODCALLTYPE *GetScanHeader )(
            __RPC__in IWICJpegFrameDecode * This,
            UINT scanIndex,
                        __RPC__out WICJpegScanHeader *pScanHeader);
        HRESULT ( STDMETHODCALLTYPE *CopyScan )(
            __RPC__in IWICJpegFrameDecode * This,
            UINT scanIndex,
            UINT scanOffset,
                       UINT cbScanData,
                                            __RPC__out_ecount_part(cbScanData, *pcbScanDataActual) BYTE *pbScanData,
                        __RPC__out UINT *pcbScanDataActual);
        HRESULT ( STDMETHODCALLTYPE *CopyMinimalStream )(
            __RPC__in IWICJpegFrameDecode * This,
            UINT streamOffset,
                       UINT cbStreamData,
                                            __RPC__out_ecount_part(cbStreamData, *pcbStreamDataActual) BYTE *pbStreamData,
                        __RPC__out UINT *pcbStreamDataActual);
        END_INTERFACE
    } IWICJpegFrameDecodeVtbl;
    interface IWICJpegFrameDecode
    {
        CONST_VTBL struct IWICJpegFrameDecodeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DoesSupportIndexing(This,pfIndexingSupported) )
    ( (This)->lpVtbl -> SetIndexing(This,options,horizontalIntervalSize) )
    ( (This)->lpVtbl -> ClearIndexing(This) )
    ( (This)->lpVtbl -> GetAcHuffmanTable(This,scanIndex,tableIndex,pAcHuffmanTable) )
    ( (This)->lpVtbl -> GetDcHuffmanTable(This,scanIndex,tableIndex,pDcHuffmanTable) )
    ( (This)->lpVtbl -> GetQuantizationTable(This,scanIndex,tableIndex,pQuantizationTable) )
    ( (This)->lpVtbl -> GetFrameHeader(This,pFrameHeader) )
    ( (This)->lpVtbl -> GetScanHeader(This,scanIndex,pScanHeader) )
    ( (This)->lpVtbl -> CopyScan(This,scanIndex,scanOffset,cbScanData,pbScanData,pcbScanDataActual) )
    ( (This)->lpVtbl -> CopyMinimalStream(This,streamOffset,cbStreamData,pbStreamData,pcbStreamDataActual) )
EXTERN_C const IID IID_IWICJpegFrameEncode;
    typedef struct IWICJpegFrameEncodeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICJpegFrameEncode * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICJpegFrameEncode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICJpegFrameEncode * This);
        HRESULT ( STDMETHODCALLTYPE *GetAcHuffmanTable )(
            __RPC__in IWICJpegFrameEncode * This,
            UINT scanIndex,
                          __RPC__in_range(0,WIC_JPEG_MAX_TABLE_INDEX) UINT tableIndex,
                        __RPC__out DXGI_JPEG_AC_HUFFMAN_TABLE *pAcHuffmanTable);
        HRESULT ( STDMETHODCALLTYPE *GetDcHuffmanTable )(
            __RPC__in IWICJpegFrameEncode * This,
            UINT scanIndex,
                          __RPC__in_range(0,WIC_JPEG_MAX_TABLE_INDEX) UINT tableIndex,
                        __RPC__out DXGI_JPEG_DC_HUFFMAN_TABLE *pDcHuffmanTable);
        HRESULT ( STDMETHODCALLTYPE *GetQuantizationTable )(
            __RPC__in IWICJpegFrameEncode * This,
            UINT scanIndex,
                          __RPC__in_range(0,WIC_JPEG_MAX_TABLE_INDEX) UINT tableIndex,
                        __RPC__out DXGI_JPEG_QUANTIZATION_TABLE *pQuantizationTable);
        HRESULT ( STDMETHODCALLTYPE *WriteScan )(
            __RPC__in IWICJpegFrameEncode * This,
                       UINT cbScanData,
                                __RPC__in_ecount_full(cbScanData) const BYTE *pbScanData);
        END_INTERFACE
    } IWICJpegFrameEncodeVtbl;
    interface IWICJpegFrameEncode
    {
        CONST_VTBL struct IWICJpegFrameEncodeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAcHuffmanTable(This,scanIndex,tableIndex,pAcHuffmanTable) )
    ( (This)->lpVtbl -> GetDcHuffmanTable(This,scanIndex,tableIndex,pDcHuffmanTable) )
    ( (This)->lpVtbl -> GetQuantizationTable(This,scanIndex,tableIndex,pQuantizationTable) )
    ( (This)->lpVtbl -> WriteScan(This,cbScanData,pbScanData) )
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HBITMAP_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HICON_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER HPALETTE_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HPALETTE * );
unsigned char * __RPC_USER HPALETTE_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HPALETTE * );
unsigned char * __RPC_USER HPALETTE_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HPALETTE * );
void __RPC_USER HPALETTE_UserFree( __RPC__in unsigned long *, __RPC__in HPALETTE * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER WICInProcPointer_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in WICInProcPointer * );
unsigned char * __RPC_USER WICInProcPointer_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in WICInProcPointer * );
unsigned char * __RPC_USER WICInProcPointer_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out WICInProcPointer * );
void __RPC_USER WICInProcPointer_UserFree( __RPC__in unsigned long *, __RPC__in WICInProcPointer * );
              HRESULT STDMETHODCALLTYPE IWICBitmapCodecProgressNotification_RegisterProgressNotification_Proxy(
    IWICBitmapCodecProgressNotification * This,
    _In_opt_ PFNProgressNotification pfnProgressNotification,
    _In_opt_ LPVOID pvData,
               DWORD dwProgressFlags);
                HRESULT STDMETHODCALLTYPE IWICBitmapCodecProgressNotification_RegisterProgressNotification_Stub(
    __RPC__in IWICBitmapCodecProgressNotification * This,
                       __RPC__in_opt IWICProgressCallback *pICallback,
               DWORD dwProgressFlags);
              HRESULT STDMETHODCALLTYPE IWICBitmapDecoderInfo_GetPatterns_Proxy(
    IWICBitmapDecoderInfo * This,
               UINT cbSizePatterns,
    _Out_writes_bytes_to_opt_(cbSizePatterns, *pcbPatternsActual) WICBitmapPattern *pPatterns,
    _Out_opt_ UINT *pcPatterns,
    _Out_ UINT *pcbPatternsActual);
                HRESULT STDMETHODCALLTYPE IWICBitmapDecoderInfo_GetPatterns_Stub(
    __RPC__in IWICBitmapDecoderInfo * This,
                                  __RPC__deref_out_ecount_full_opt(*pcPatterns) WICBitmapPattern **ppPatterns,
                __RPC__out UINT *pcPatterns);
              HRESULT STDMETHODCALLTYPE IWICDevelopRaw_QueryRawCapabilitiesInfo_Proxy(
    IWICDevelopRaw * This,
                    WICRawCapabilitiesInfo *pInfo);
                HRESULT STDMETHODCALLTYPE IWICDevelopRaw_QueryRawCapabilitiesInfo_Stub(
    __RPC__in IWICDevelopRaw * This,
                    __RPC__inout WICRawCapabilitiesInfo *pInfo);
              HRESULT STDMETHODCALLTYPE IWICDevelopRaw_SetToneCurve_Proxy(
    IWICDevelopRaw * This,
               UINT cbToneCurveSize,
    _In_reads_bytes_(cbToneCurveSize) const WICRawToneCurve *pToneCurve);
                HRESULT STDMETHODCALLTYPE IWICDevelopRaw_SetToneCurve_Stub(
    __RPC__in IWICDevelopRaw * This,
               UINT cPoints,
                        __RPC__in_ecount_full(cPoints) const WICRawToneCurvePoint *aPoints);
              HRESULT STDMETHODCALLTYPE IWICDevelopRaw_GetToneCurve_Proxy(
    IWICDevelopRaw * This,
               UINT cbToneCurveBufferSize,
    _Out_writes_bytes_to_opt_(cbToneCurveBufferSize, *pcbActualToneCurveBufferSize) WICRawToneCurve *pToneCurve,
    _Inout_opt_ UINT *pcbActualToneCurveBufferSize);
                HRESULT STDMETHODCALLTYPE IWICDevelopRaw_GetToneCurve_Stub(
    __RPC__in IWICDevelopRaw * This,
                __RPC__out UINT *pcPoints,
                                  __RPC__deref_out_ecount_full_opt(*pcPoints) WICRawToneCurvePoint **paPoints);
}
