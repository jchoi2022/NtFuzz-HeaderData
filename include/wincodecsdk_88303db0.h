#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWICMetadataBlockReader IWICMetadataBlockReader;
typedef interface IWICMetadataBlockWriter IWICMetadataBlockWriter;
typedef interface IWICMetadataReader IWICMetadataReader;
typedef interface IWICMetadataWriter IWICMetadataWriter;
typedef interface IWICStreamProvider IWICStreamProvider;
typedef interface IWICPersistStream IWICPersistStream;
typedef interface IWICMetadataHandlerInfo IWICMetadataHandlerInfo;
typedef interface IWICMetadataReaderInfo IWICMetadataReaderInfo;
typedef interface IWICMetadataWriterInfo IWICMetadataWriterInfo;
typedef interface IWICComponentFactory IWICComponentFactory;
#include "wtypes.h"
#include "wincodec.h"
extern "C"{
DEFINE_GUID(GUID_MetadataFormatUnknown, 0xA45E592F, 0x9078, 0x4A7C, 0xAD, 0xB5, 0x4E, 0xDC, 0x4F, 0xD6, 0x1B, 0x1F);
DEFINE_GUID(GUID_MetadataFormatIfd, 0x537396C6, 0x2D8A, 0x4BB6, 0x9B, 0xF8, 0x2F, 0x0A, 0x8E, 0x2A, 0x3A, 0xDF);
DEFINE_GUID(GUID_MetadataFormatSubIfd, 0x58A2E128, 0x2DB9, 0x4E57, 0xBB, 0x14, 0x51, 0x77, 0x89, 0x1E, 0xD3, 0x31);
DEFINE_GUID(GUID_MetadataFormatExif, 0x1C3C4F9D, 0xB84A, 0x467D, 0x94, 0x93, 0x36, 0xCF, 0xBD, 0x59, 0xEA, 0x57);
DEFINE_GUID(GUID_MetadataFormatGps, 0x7134AB8A, 0x9351, 0x44AD, 0xAF, 0x62, 0x44, 0x8D, 0xB6, 0xB5, 0x02, 0xEC);
DEFINE_GUID(GUID_MetadataFormatInterop, 0xED686F8E, 0x681F, 0x4C8B, 0xBD, 0x41, 0xA8, 0xAD, 0xDB, 0xF6, 0xB3, 0xFC);
DEFINE_GUID(GUID_MetadataFormatApp0, 0x79007028, 0x268D, 0x45d6, 0xA3, 0xC2, 0x35, 0x4E, 0x6A, 0x50, 0x4B, 0xC9);
DEFINE_GUID(GUID_MetadataFormatApp1, 0x8FD3DFC3, 0xF951, 0x492B, 0x81, 0x7F, 0x69, 0xC2, 0xE6, 0xD9, 0xA5, 0xB0);
DEFINE_GUID(GUID_MetadataFormatApp13, 0x326556A2, 0xF502, 0x4354, 0x9C, 0xC0, 0x8E, 0x3F, 0x48, 0xEA, 0xF6, 0xB5);
DEFINE_GUID(GUID_MetadataFormatIPTC, 0x4FAB0914, 0xE129, 0x4087, 0xA1, 0xD1, 0xBC, 0x81, 0x2D, 0x45, 0xA7, 0xB5);
DEFINE_GUID(GUID_MetadataFormatIRB, 0x16100D66, 0x8570, 0x4BB9, 0xB9, 0x2D, 0xFD, 0xA4, 0xB2, 0x3E, 0xCE, 0x67);
DEFINE_GUID(GUID_MetadataFormat8BIMIPTC, 0x0010568c, 0x0852, 0x4e6a, 0xb1, 0x91, 0x5c, 0x33, 0xac, 0x5b, 0x04, 0x30);
DEFINE_GUID(GUID_MetadataFormat8BIMResolutionInfo, 0x739F305D, 0x81DB, 0x43CB, 0xAC, 0x5E, 0x55, 0x01, 0x3E, 0xF9, 0xF0, 0x03);
DEFINE_GUID(GUID_MetadataFormat8BIMIPTCDigest, 0x1CA32285, 0x9CCD, 0x4786, 0x8B, 0xD8, 0x79, 0x53, 0x9D, 0xB6, 0xA0, 0x06);
DEFINE_GUID(GUID_MetadataFormatXMP, 0xBB5ACC38, 0xF216, 0x4CEC, 0xA6, 0xC5, 0x5F, 0x6E, 0x73, 0x97, 0x63, 0xA9);
DEFINE_GUID(GUID_MetadataFormatThumbnail, 0x243dcee9, 0x8703, 0x40ee, 0x8e, 0xf0, 0x22, 0xa6, 0x0, 0xb8, 0x5, 0x8c);
DEFINE_GUID(GUID_MetadataFormatChunktEXt, 0x568d8936, 0xc0a9, 0x4923, 0x90, 0x5d, 0xdf, 0x2b, 0x38, 0x23, 0x8f, 0xbc);
DEFINE_GUID(GUID_MetadataFormatXMPStruct, 0x22383CF1, 0xED17, 0x4E2E, 0xAF, 0x17, 0xD8, 0x5B, 0x8F, 0x6B, 0x30, 0xD0);
DEFINE_GUID(GUID_MetadataFormatXMPBag, 0x833CCA5F, 0xDCB7, 0x4516, 0x80, 0x6F, 0x65, 0x96, 0xAB, 0x26, 0xDC, 0xE4);
DEFINE_GUID(GUID_MetadataFormatXMPSeq, 0x63E8DF02, 0xEB6C,0x456C, 0xA2, 0x24, 0xB2, 0x5E, 0x79, 0x4F, 0xD6, 0x48);
DEFINE_GUID(GUID_MetadataFormatXMPAlt, 0x7B08A675, 0x91AA, 0x481B, 0xA7, 0x98, 0x4D, 0xA9, 0x49, 0x08, 0x61, 0x3B);
DEFINE_GUID(GUID_MetadataFormatLSD, 0xE256031E, 0x6299, 0x4929, 0xB9, 0x8D, 0x5A, 0xC8, 0x84, 0xAF, 0xBA, 0x92);
DEFINE_GUID(GUID_MetadataFormatIMD, 0xBD2BB086, 0x4D52, 0x48DD, 0x96, 0x77, 0xDB, 0x48, 0x3E, 0x85, 0xAE, 0x8F);
DEFINE_GUID(GUID_MetadataFormatGCE, 0x2A25CAD8, 0xDEEB, 0x4C69, 0xA7, 0x88, 0xE, 0xC2, 0x26, 0x6D, 0xCA, 0xFD);
DEFINE_GUID(GUID_MetadataFormatAPE, 0x2E043DC2, 0xC967, 0x4E05, 0x87, 0x5E, 0x61, 0x8B, 0xF6, 0x7E, 0x85, 0xC3);
DEFINE_GUID(GUID_MetadataFormatJpegChrominance, 0xF73D0DCF, 0xCEC6, 0x4F85, 0x9B, 0x0E, 0x1C, 0x39, 0x56, 0xB1, 0xBE, 0xF7);
DEFINE_GUID(GUID_MetadataFormatJpegLuminance, 0x86908007, 0xEDFC, 0x4860, 0x8D, 0x4B, 0x4E, 0xE6, 0xE8, 0x3E, 0x60, 0x58);
DEFINE_GUID(GUID_MetadataFormatJpegComment, 0x220E5F33, 0xAFD3, 0x474E, 0x9D, 0x31, 0x7D, 0x4F, 0xE7, 0x30, 0xF5, 0x57);
DEFINE_GUID(GUID_MetadataFormatGifComment, 0xC4B6E0E0, 0xCFB4, 0x4AD3, 0xAB, 0x33, 0x9A, 0xAD, 0x23, 0x55, 0xA3, 0x4A);
DEFINE_GUID(GUID_MetadataFormatChunkgAMA, 0xF00935A5, 0x1D5D, 0x4CD1, 0x81, 0xB2, 0x93, 0x24, 0xD7, 0xEC, 0xA7, 0x81);
DEFINE_GUID(GUID_MetadataFormatChunkbKGD, 0xE14D3571, 0x6B47, 0x4DEA, 0xB6, 0xA, 0x87, 0xCE, 0xA, 0x78, 0xDF, 0xB7);
DEFINE_GUID(GUID_MetadataFormatChunkiTXt, 0xC2BEC729, 0xB68, 0x4B77, 0xAA, 0xE, 0x62, 0x95, 0xA6, 0xAC, 0x18, 0x14);
DEFINE_GUID(GUID_MetadataFormatChunkcHRM, 0x9DB3655B, 0x2842, 0x44B3, 0x80, 0x67, 0x12, 0xE9, 0xB3, 0x75, 0x55, 0x6A);
DEFINE_GUID(GUID_MetadataFormatChunkhIST, 0xC59A82DA, 0xDB74, 0x48A4, 0xBD, 0x6A, 0xB6, 0x9C, 0x49, 0x31, 0xEF, 0x95);
DEFINE_GUID(GUID_MetadataFormatChunkiCCP, 0xEB4349AB, 0xB685, 0x450F, 0x91, 0xB5, 0xE8, 0x2, 0xE8, 0x92, 0x53, 0x6C);
DEFINE_GUID(GUID_MetadataFormatChunksRGB, 0xC115FD36, 0xCC6F, 0x4E3F, 0x83, 0x63, 0x52, 0x4B, 0x87, 0xC6, 0xB0, 0xD9);
DEFINE_GUID(GUID_MetadataFormatChunktIME, 0x6B00AE2D, 0xE24B, 0x460A, 0x98, 0xB6, 0x87, 0x8B, 0xD0, 0x30, 0x72, 0xFD);
DEFINE_GUID(GUID_MetadataFormatDds, 0x4a064603, 0x8c33, 0x4e60, 0x9c, 0x29, 0x13, 0x62, 0x31, 0x70, 0x2d, 0x08);
DEFINE_GUID(GUID_MetadataFormatHeif, 0x817EF3E1, 0x1288, 0x45F4, 0xA8, 0x52, 0x26, 0x0D, 0x9E, 0x7C, 0xCE, 0x83);
DEFINE_GUID(GUID_MetadataFormatHeifHDR,0x568b8d8a, 0x1e65, 0x438c, 0x89, 0x68, 0xd6, 0xe, 0x10, 0x12, 0xbe, 0xb9);
DEFINE_GUID(GUID_MetadataFormatWebpANIM, 0x6dc4fda6, 0x78e6, 0x4102, 0xae, 0x35, 0xbc, 0xfa, 0x1e, 0xdc, 0xc7, 0x8b);
DEFINE_GUID(GUID_MetadataFormatWebpANMF, 0x43c105ee, 0xb93b, 0x4abb, 0xb0, 0x3, 0xa0, 0x8c, 0xd, 0x87, 0x4, 0x71);
DEFINE_GUID(CLSID_WICUnknownMetadataReader, 0x699745c2, 0x5066, 0x4b82, 0xa8, 0xe3, 0xd4, 0x4, 0x78, 0xdb, 0xec, 0x8c);
DEFINE_GUID(CLSID_WICUnknownMetadataWriter, 0xa09cca86, 0x27ba, 0x4f39, 0x90, 0x53, 0x12, 0x1f, 0xa4, 0xdc, 0x8, 0xfc);
DEFINE_GUID(CLSID_WICApp0MetadataWriter, 0xF3C633A2, 0x46C8, 0x498e, 0x8F, 0xBB, 0xCC, 0x6F, 0x72, 0x1B, 0xBC, 0xDE);
DEFINE_GUID(CLSID_WICApp0MetadataReader, 0x43324B33, 0xA78F, 0x480f, 0x91, 0x11, 0x96, 0x38, 0xAA, 0xCC, 0xC8, 0x32);
DEFINE_GUID(CLSID_WICApp1MetadataWriter, 0xee366069, 0x1832, 0x420f, 0xb3, 0x81, 0x04, 0x79, 0xad, 0x06, 0x6f, 0x19);
DEFINE_GUID(CLSID_WICApp1MetadataReader, 0xdde33513, 0x774e, 0x4bcd, 0xae, 0x79, 0x02, 0xf4, 0xad, 0xfe, 0x62, 0xfc);
DEFINE_GUID(CLSID_WICApp13MetadataWriter, 0x7B19A919, 0xA9D6, 0x49E5, 0xBD, 0x45, 0x02, 0xC3, 0x4E, 0x4E, 0x4C, 0xD5);
DEFINE_GUID(CLSID_WICApp13MetadataReader, 0xAA7E3C50, 0x864C, 0x4604, 0xBC, 0x04, 0x8B, 0x0B, 0x76, 0xE6, 0x37, 0xF6);
DEFINE_GUID(CLSID_WICIfdMetadataReader, 0x8f914656, 0x9d0a, 0x4eb2, 0x90, 0x19, 0xb, 0xf9, 0x6d, 0x8a, 0x9e, 0xe6);
DEFINE_GUID(CLSID_WICIfdMetadataWriter, 0xb1ebfc28, 0xc9bd, 0x47a2, 0x8d, 0x33, 0xb9, 0x48, 0x76, 0x97, 0x77, 0xa7);
DEFINE_GUID(CLSID_WICSubIfdMetadataReader, 0x50D42F09, 0xECD1, 0x4B41, 0xB6, 0x5D, 0xDA, 0x1F, 0xDA, 0xA7, 0x56, 0x63);
DEFINE_GUID(CLSID_WICSubIfdMetadataWriter, 0x8ADE5386, 0x8E9B, 0x4F4C, 0xAC, 0xF2, 0xF0, 0x00, 0x87, 0x06, 0xB2, 0x38);
DEFINE_GUID(CLSID_WICExifMetadataReader, 0xd9403860, 0x297f, 0x4a49, 0xbf, 0x9b, 0x77, 0x89, 0x81, 0x50, 0xa4, 0x42);
DEFINE_GUID(CLSID_WICExifMetadataWriter, 0xc9a14cda, 0xc339, 0x460b, 0x90, 0x78, 0xd4, 0xde, 0xbc, 0xfa, 0xbe, 0x91);
DEFINE_GUID(CLSID_WICGpsMetadataReader, 0x3697790B, 0x223B, 0x484E, 0x99, 0x25, 0xC4, 0x86, 0x92, 0x18, 0xF1, 0x7A);
DEFINE_GUID(CLSID_WICGpsMetadataWriter, 0xCB8C13E4, 0x62B5, 0x4C96, 0xA4, 0x8B, 0x6B, 0xA6, 0xAC, 0xE3, 0x9C, 0x76);
DEFINE_GUID(CLSID_WICInteropMetadataReader, 0xB5C8B898, 0x0074, 0x459F, 0xB7, 0x00, 0x86, 0x0D, 0x46, 0x51, 0xEA, 0x14);
DEFINE_GUID(CLSID_WICInteropMetadataWriter, 0x122EC645, 0xCD7E, 0x44D8, 0xB1, 0x86, 0x2C, 0x8C, 0x20, 0xC3, 0xB5, 0x0F);
DEFINE_GUID(CLSID_WICThumbnailMetadataReader, 0xfb012959, 0xf4f6, 0x44d7, 0x9d, 0x9, 0xda, 0xa0, 0x87, 0xa9, 0xdb, 0x57);
DEFINE_GUID(CLSID_WICThumbnailMetadataWriter, 0xd049b20c, 0x5dd0, 0x44fe, 0xb0, 0xb3, 0x8f, 0x92, 0xc8, 0xe6, 0xd0, 0x80);
DEFINE_GUID(CLSID_WICIPTCMetadataReader, 0x03012959, 0xf4f6, 0x44d7, 0x9d, 0x9, 0xda, 0xa0, 0x87, 0xa9, 0xdb, 0x57);
DEFINE_GUID(CLSID_WICIPTCMetadataWriter, 0x1249b20c, 0x5dd0, 0x44fe, 0xb0, 0xb3, 0x8f, 0x92, 0xc8, 0xe6, 0xd0, 0x80);
DEFINE_GUID(CLSID_WICIRBMetadataReader, 0xD4DCD3D7, 0xB4C2, 0x47D9, 0xA6, 0xBF, 0xB8, 0x9B, 0xA3, 0x96, 0xA4, 0xA3);
DEFINE_GUID(CLSID_WICIRBMetadataWriter, 0x5C5C1935, 0x0235, 0x4434, 0x80, 0xBC, 0x25, 0x1B, 0xC1, 0xEC, 0x39, 0xC6);
DEFINE_GUID(CLSID_WIC8BIMIPTCMetadataReader, 0x0010668c, 0x0801, 0x4da6, 0xa4, 0xa4, 0x82, 0x65, 0x22, 0xb6, 0xd2, 0x8f);
DEFINE_GUID(CLSID_WIC8BIMIPTCMetadataWriter, 0x00108226, 0xee41, 0x44a2, 0x9e, 0x9c, 0x4b, 0xe4, 0xd5, 0xb1, 0xd2, 0xcd);
DEFINE_GUID(CLSID_WIC8BIMResolutionInfoMetadataReader, 0x5805137A, 0xE348, 0x4F7C, 0xB3, 0xCC, 0x6D, 0xB9, 0x96, 0x5A, 0x05, 0x99);
DEFINE_GUID(CLSID_WIC8BIMResolutionInfoMetadataWriter, 0x4ff2fe0e, 0xe74a, 0x4b71, 0x98, 0xc4, 0xab, 0x7d, 0xc1, 0x67, 0x7, 0xba);
DEFINE_GUID(CLSID_WIC8BIMIPTCDigestMetadataReader, 0x02805F1E, 0xD5AA, 0x415b, 0x82, 0xC5, 0x61, 0xC0, 0x33, 0xA9, 0x88, 0xA6);
DEFINE_GUID(CLSID_WIC8BIMIPTCDigestMetadataWriter, 0x2DB5E62B, 0x0D67, 0x495f, 0x8F, 0x9D, 0xC2, 0xF0, 0x18, 0x86, 0x47, 0xAC);
DEFINE_GUID(CLSID_WICPngTextMetadataReader, 0x4b59afcc, 0xb8c3, 0x408a, 0xb6, 0x70, 0x89, 0xe5, 0xfa, 0xb6, 0xfd, 0xa7);
DEFINE_GUID(CLSID_WICPngTextMetadataWriter, 0xb5ebafb9, 0x253e, 0x4a72, 0xa7, 0x44, 0x7, 0x62, 0xd2, 0x68, 0x56, 0x83);
DEFINE_GUID(CLSID_WICXMPMetadataReader, 0x72B624DF, 0xAE11, 0x4948, 0xA6, 0x5C, 0x35, 0x1E, 0xB0, 0x82, 0x94, 0x19);
DEFINE_GUID(CLSID_WICXMPMetadataWriter, 0x1765E14E, 0x1BD4, 0x462E, 0xB6, 0xB1, 0x59, 0x0B, 0xF1, 0x26, 0x2A, 0xC6);
DEFINE_GUID(CLSID_WICXMPStructMetadataReader, 0x01B90D9A, 0x8209, 0x47F7, 0x9C, 0x52, 0xE1, 0x24, 0x4B, 0xF5, 0x0C, 0xED);
DEFINE_GUID(CLSID_WICXMPStructMetadataWriter, 0x22C21F93, 0x7DDB, 0x411C, 0x9B, 0x17, 0xC5, 0xB7, 0xBD, 0x06, 0x4A, 0xBC);
DEFINE_GUID(CLSID_WICXMPBagMetadataReader, 0xE7E79A30, 0x4F2C, 0x4FAB, 0x8D, 0x00, 0x39, 0x4F, 0x2D, 0x6B, 0xBE, 0xBE);
DEFINE_GUID(CLSID_WICXMPBagMetadataWriter, 0xED822C8C, 0xD6BE, 0x4301, 0xA6, 0x31, 0x0E, 0x14, 0x16, 0xBA, 0xD2, 0x8F);
DEFINE_GUID(CLSID_WICXMPSeqMetadataReader, 0x7F12E753, 0xFC71, 0x43D7, 0xA5, 0x1D, 0x92, 0xF3, 0x59, 0x77, 0xAB, 0xB5);
DEFINE_GUID(CLSID_WICXMPSeqMetadataWriter, 0x6D68D1DE, 0xD432, 0x4B0F, 0x92, 0x3A, 0x09, 0x11, 0x83, 0xA9, 0xBD, 0xA7);
DEFINE_GUID(CLSID_WICXMPAltMetadataReader, 0xAA94DCC2, 0xB8B0, 0x4898, 0xB8, 0x35, 0x00, 0x0A, 0xAB, 0xD7, 0x43, 0x93);
DEFINE_GUID(CLSID_WICXMPAltMetadataWriter, 0x076C2A6C, 0xF78F, 0x4C46, 0xA7, 0x23, 0x35, 0x83, 0xE7, 0x08, 0x76, 0xEA);
DEFINE_GUID(CLSID_WICLSDMetadataReader, 0x41070793, 0x59E4, 0x479A, 0xA1, 0xF7, 0x95, 0x4A, 0xDC, 0x2E, 0xF5, 0xFC);
DEFINE_GUID(CLSID_WICLSDMetadataWriter, 0x73C037E7, 0xE5D9, 0x4954, 0x87, 0x6A, 0x6D, 0xA8, 0x1D, 0x6E, 0x57, 0x68);
DEFINE_GUID(CLSID_WICGCEMetadataReader, 0xB92E345D, 0xF52D, 0x41F3, 0xB5, 0x62, 0x8, 0x1B, 0xC7, 0x72, 0xE3, 0xB9);
DEFINE_GUID(CLSID_WICGCEMetadataWriter, 0xAF95DC76, 0x16B2, 0x47F4, 0xB3, 0xEA, 0x3C, 0x31, 0x79, 0x66, 0x93, 0xE7);
DEFINE_GUID(CLSID_WICIMDMetadataReader, 0x7447A267, 0x15, 0x42C8, 0xA8, 0xF1, 0xFB, 0x3B, 0x94, 0xC6, 0x83, 0x61);
DEFINE_GUID(CLSID_WICIMDMetadataWriter, 0x8C89071F, 0x452E, 0x4E95, 0x96, 0x82, 0x9D, 0x10, 0x24, 0x62, 0x71, 0x72);
DEFINE_GUID(CLSID_WICAPEMetadataReader, 0x1767B93A, 0xB021, 0x44EA, 0x92, 0xF, 0x86, 0x3C, 0x11, 0xF4, 0xF7, 0x68);
DEFINE_GUID(CLSID_WICAPEMetadataWriter, 0xBD6EDFCA, 0x2890, 0x482F, 0xB2, 0x33, 0x8D, 0x73, 0x39, 0xA1, 0xCF, 0x8D);
DEFINE_GUID(CLSID_WICJpegChrominanceMetadataReader, 0x50B1904B, 0xF28F, 0x4574, 0x93, 0xF4, 0x0B, 0xAD, 0xE8, 0x2C, 0x69, 0xE9);
DEFINE_GUID(CLSID_WICJpegChrominanceMetadataWriter, 0x3FF566F0, 0x6E6B, 0x49D4, 0x96, 0xE6, 0xB7, 0x88, 0x86, 0x69, 0x2C, 0x62);
DEFINE_GUID(CLSID_WICJpegLuminanceMetadataReader, 0x356F2F88, 0x5A6, 0x4728, 0xB9, 0xA4, 0x1B, 0xFB, 0xCE, 0x04, 0xD8, 0x38);
DEFINE_GUID(CLSID_WICJpegLuminanceMetadataWriter, 0x1D583ABC, 0x8A0E, 0x4657, 0x99, 0x82, 0xA3, 0x80, 0xCA, 0x58, 0xFB, 0x4B);
DEFINE_GUID(CLSID_WICJpegCommentMetadataReader, 0x9f66347C, 0x60C4, 0x4C4D, 0xAB, 0x58, 0xD2, 0x35, 0x86, 0x85, 0xf6, 0x07);
DEFINE_GUID(CLSID_WICJpegCommentMetadataWriter, 0xE573236F, 0x55B1, 0x4EDA, 0x81, 0xEA, 0x9F, 0x65, 0xDB, 0x02, 0x90, 0xD3);
DEFINE_GUID(CLSID_WICGifCommentMetadataReader, 0x32557D3B, 0x69DC, 0x4F95, 0x83, 0x6E, 0xF5, 0x97, 0x2B, 0x2F, 0x61, 0x59);
DEFINE_GUID(CLSID_WICGifCommentMetadataWriter, 0xA02797fC, 0xC4AE, 0x418C, 0xAF, 0x95, 0xE6, 0x37, 0xC7, 0xEA, 0xD2, 0xA1);
DEFINE_GUID(CLSID_WICPngGamaMetadataReader, 0x3692CA39, 0xE082, 0x4350, 0x9E, 0x1F, 0x37, 0x4, 0xCB, 0x8, 0x3C, 0xD5);
DEFINE_GUID(CLSID_WICPngGamaMetadataWriter, 0xFF036D13, 0x5D4B, 0x46DD, 0xB1, 0xF, 0x10, 0x66, 0x93, 0xD9, 0xFE, 0x4F);
DEFINE_GUID(CLSID_WICPngBkgdMetadataReader, 0xCE7A4A6, 0x3E8, 0x4A60, 0x9D, 0x15, 0x28, 0x2E, 0xF3, 0x2E, 0xE7, 0xDA);
DEFINE_GUID(CLSID_WICPngBkgdMetadataWriter, 0x68E3F2FD, 0x31AE, 0x4441, 0xBB, 0x6A, 0xFD, 0x70, 0x47, 0x52, 0x5F, 0x90);
DEFINE_GUID(CLSID_WICPngItxtMetadataReader, 0xAABFB2FA, 0x3E1E, 0x4A8F, 0x89, 0x77, 0x55, 0x56, 0xFB, 0x94, 0xEA, 0x23);
DEFINE_GUID(CLSID_WICPngItxtMetadataWriter, 0x31879719, 0xE751, 0x4DF8, 0x98, 0x1D, 0x68, 0xDF, 0xF6, 0x77, 0x4, 0xED);
DEFINE_GUID(CLSID_WICPngChrmMetadataReader, 0xF90B5F36, 0x367B, 0x402A, 0x9D, 0xD1, 0xBC, 0xF, 0xD5, 0x9D, 0x8F, 0x62);
DEFINE_GUID(CLSID_WICPngChrmMetadataWriter, 0xE23CE3EB, 0x5608, 0x4E83, 0xBC, 0xEF, 0x27, 0xB1, 0x98, 0x7E, 0x51, 0xD7);
DEFINE_GUID(CLSID_WICPngHistMetadataReader, 0x877A0BB7, 0xA313, 0x4491, 0x87, 0xB5, 0x2E, 0x6D, 0x5, 0x94, 0xF5, 0x20);
DEFINE_GUID(CLSID_WICPngHistMetadataWriter, 0x8A03E749, 0x672E, 0x446E, 0xBF, 0x1F, 0x2C, 0x11, 0xD2, 0x33, 0xB6, 0xFF);
DEFINE_GUID(CLSID_WICPngIccpMetadataReader, 0xF5D3E63B, 0xCB0F, 0x4628, 0xA4, 0x78, 0x6D, 0x82, 0x44, 0xBE, 0x36, 0xB1);
DEFINE_GUID(CLSID_WICPngIccpMetadataWriter, 0x16671E5F, 0xCE6, 0x4CC4, 0x97, 0x68, 0xE8, 0x9F, 0xE5, 0x1, 0x8A, 0xDE);
DEFINE_GUID(CLSID_WICPngSrgbMetadataReader, 0xFB40360C, 0x547E, 0x4956, 0xA3, 0xB9, 0xD4, 0x41, 0x88, 0x59, 0xBA, 0x66);
DEFINE_GUID(CLSID_WICPngSrgbMetadataWriter, 0xA6EE35C6, 0x87EC, 0x47DF, 0x9F, 0x22, 0x1D, 0x5A, 0xAD, 0x84, 0xC, 0x82);
DEFINE_GUID(CLSID_WICPngTimeMetadataReader, 0xD94EDF02, 0xEFE5, 0x4F0D, 0x85, 0xC8, 0xF5, 0xA6, 0x8B, 0x30, 0x0, 0xB1);
DEFINE_GUID(CLSID_WICPngTimeMetadataWriter, 0x1AB78400, 0xB5A3, 0x4D91, 0x8A, 0xCE, 0x33, 0xFC, 0xD1, 0x49, 0x9B, 0xE6);
DEFINE_GUID(CLSID_WICDdsMetadataReader, 0x276c88ca, 0x7533, 0x4a86, 0xb6, 0x76, 0x66, 0xb3, 0x60, 0x80, 0xd4, 0x84);
DEFINE_GUID(CLSID_WICDdsMetadataWriter, 0xfd688bbd, 0x31ed, 0x4db7, 0xa7, 0x23, 0x93, 0x49, 0x27, 0xd3, 0x83, 0x67);
DEFINE_GUID(CLSID_WICHeifMetadataReader, 0xACDDFC3F, 0x85EC, 0x41BC, 0xBD, 0xEF, 0x1B, 0xC2, 0x62, 0xE4, 0xDB, 0x05);
DEFINE_GUID(CLSID_WICHeifMetadataWriter, 0x3AE45E79, 0x40BC, 0x4401, 0xAC, 0xE5, 0xDD, 0x3C, 0xB1, 0x6E, 0x6A, 0xFE);
DEFINE_GUID(CLSID_WICHeifHDRMetadataReader ,0x2438de3d, 0x94d9, 0x4be8, 0x84, 0xa8, 0x4d, 0xe9, 0x5a, 0x57, 0x5e, 0x75);
DEFINE_GUID(CLSID_WICWebpAnimMetadataReader, 0x76f9911, 0xa348, 0x465c, 0xa8, 0x7, 0xa2, 0x52, 0xf3, 0xf2, 0xd3, 0xde);
DEFINE_GUID(CLSID_WICWebpAnmfMetadataReader, 0x85a10b03, 0xc9f6, 0x439f, 0xbe, 0x5e, 0xc0, 0xfb, 0xef, 0x67, 0x80, 0x7c);
typedef
enum WICMetadataCreationOptions
    {
        WICMetadataCreationDefault = 0,
        WICMetadataCreationAllowUnknown = WICMetadataCreationDefault,
        WICMetadataCreationFailUnknown = 0x10000,
        WICMetadataCreationMask = 0xffff0000
    } WICMetadataCreationOptions;
typedef
enum WICPersistOptions
    {
        WICPersistOptionDefault = 0,
        WICPersistOptionLittleEndian = 0,
        WICPersistOptionBigEndian = 0x1,
        WICPersistOptionStrictFormat = 0x2,
        WICPersistOptionNoCacheStream = 0x4,
        WICPersistOptionPreferUTF8 = 0x8,
        WICPersistOptionMask = 0xffff
    } WICPersistOptions;
extern RPC_IF_HANDLE __MIDL_itf_wincodecsdk_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wincodecsdk_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWICMetadataBlockReader;
    typedef struct IWICMetadataBlockReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICMetadataBlockReader * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICMetadataBlockReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICMetadataBlockReader * This);
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormat )(
            __RPC__in IWICMetadataBlockReader * This,
                        __RPC__out GUID *pguidContainerFormat);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IWICMetadataBlockReader * This,
                        __RPC__out UINT *pcCount);
        HRESULT ( STDMETHODCALLTYPE *GetReaderByIndex )(
            __RPC__in IWICMetadataBlockReader * This,
                       UINT nIndex,
                        __RPC__deref_out_opt IWICMetadataReader **ppIMetadataReader);
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )(
            __RPC__in IWICMetadataBlockReader * This,
                        __RPC__deref_out_opt IEnumUnknown **ppIEnumMetadata);
        END_INTERFACE
    } IWICMetadataBlockReaderVtbl;
    interface IWICMetadataBlockReader
    {
        CONST_VTBL struct IWICMetadataBlockReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetContainerFormat(This,pguidContainerFormat) )
    ( (This)->lpVtbl -> GetCount(This,pcCount) )
    ( (This)->lpVtbl -> GetReaderByIndex(This,nIndex,ppIMetadataReader) )
    ( (This)->lpVtbl -> GetEnumerator(This,ppIEnumMetadata) )
EXTERN_C const IID IID_IWICMetadataBlockWriter;
    typedef struct IWICMetadataBlockWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICMetadataBlockWriter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICMetadataBlockWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICMetadataBlockWriter * This);
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormat )(
            __RPC__in IWICMetadataBlockWriter * This,
                        __RPC__out GUID *pguidContainerFormat);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IWICMetadataBlockWriter * This,
                        __RPC__out UINT *pcCount);
        HRESULT ( STDMETHODCALLTYPE *GetReaderByIndex )(
            __RPC__in IWICMetadataBlockWriter * This,
                       UINT nIndex,
                        __RPC__deref_out_opt IWICMetadataReader **ppIMetadataReader);
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )(
            __RPC__in IWICMetadataBlockWriter * This,
                        __RPC__deref_out_opt IEnumUnknown **ppIEnumMetadata);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromBlockReader )(
            __RPC__in IWICMetadataBlockWriter * This,
                       __RPC__in_opt IWICMetadataBlockReader *pIMDBlockReader);
        HRESULT ( STDMETHODCALLTYPE *GetWriterByIndex )(
            __RPC__in IWICMetadataBlockWriter * This,
                       UINT nIndex,
                        __RPC__deref_out_opt IWICMetadataWriter **ppIMetadataWriter);
        HRESULT ( STDMETHODCALLTYPE *AddWriter )(
            __RPC__in IWICMetadataBlockWriter * This,
                       __RPC__in_opt IWICMetadataWriter *pIMetadataWriter);
        HRESULT ( STDMETHODCALLTYPE *SetWriterByIndex )(
            __RPC__in IWICMetadataBlockWriter * This,
                       UINT nIndex,
                       __RPC__in_opt IWICMetadataWriter *pIMetadataWriter);
        HRESULT ( STDMETHODCALLTYPE *RemoveWriterByIndex )(
            __RPC__in IWICMetadataBlockWriter * This,
                       UINT nIndex);
        END_INTERFACE
    } IWICMetadataBlockWriterVtbl;
    interface IWICMetadataBlockWriter
    {
        CONST_VTBL struct IWICMetadataBlockWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetContainerFormat(This,pguidContainerFormat) )
    ( (This)->lpVtbl -> GetCount(This,pcCount) )
    ( (This)->lpVtbl -> GetReaderByIndex(This,nIndex,ppIMetadataReader) )
    ( (This)->lpVtbl -> GetEnumerator(This,ppIEnumMetadata) )
    ( (This)->lpVtbl -> InitializeFromBlockReader(This,pIMDBlockReader) )
    ( (This)->lpVtbl -> GetWriterByIndex(This,nIndex,ppIMetadataWriter) )
    ( (This)->lpVtbl -> AddWriter(This,pIMetadataWriter) )
    ( (This)->lpVtbl -> SetWriterByIndex(This,nIndex,pIMetadataWriter) )
    ( (This)->lpVtbl -> RemoveWriterByIndex(This,nIndex) )
EXTERN_C const IID IID_IWICMetadataReader;
    typedef struct IWICMetadataReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICMetadataReader * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICMetadataReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICMetadataReader * This);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataFormat )(
            __RPC__in IWICMetadataReader * This,
                        __RPC__out GUID *pguidMetadataFormat);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataHandlerInfo )(
            __RPC__in IWICMetadataReader * This,
                        __RPC__deref_out_opt IWICMetadataHandlerInfo **ppIHandler);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IWICMetadataReader * This,
                        __RPC__out UINT *pcCount);
        HRESULT ( STDMETHODCALLTYPE *GetValueByIndex )(
            __RPC__in IWICMetadataReader * This,
                       UINT nIndex,
                                    __RPC__inout_opt PROPVARIANT *pvarSchema,
                                    __RPC__inout_opt PROPVARIANT *pvarId,
                                    __RPC__inout_opt PROPVARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in IWICMetadataReader * This,
                               __RPC__in_opt const PROPVARIANT *pvarSchema,
                       __RPC__in const PROPVARIANT *pvarId,
                                    __RPC__inout_opt PROPVARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )(
            __RPC__in IWICMetadataReader * This,
                        __RPC__deref_out_opt IWICEnumMetadataItem **ppIEnumMetadata);
        END_INTERFACE
    } IWICMetadataReaderVtbl;
    interface IWICMetadataReader
    {
        CONST_VTBL struct IWICMetadataReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMetadataFormat(This,pguidMetadataFormat) )
    ( (This)->lpVtbl -> GetMetadataHandlerInfo(This,ppIHandler) )
    ( (This)->lpVtbl -> GetCount(This,pcCount) )
    ( (This)->lpVtbl -> GetValueByIndex(This,nIndex,pvarSchema,pvarId,pvarValue) )
    ( (This)->lpVtbl -> GetValue(This,pvarSchema,pvarId,pvarValue) )
    ( (This)->lpVtbl -> GetEnumerator(This,ppIEnumMetadata) )
EXTERN_C const IID IID_IWICMetadataWriter;
    typedef struct IWICMetadataWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICMetadataWriter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICMetadataWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICMetadataWriter * This);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataFormat )(
            __RPC__in IWICMetadataWriter * This,
                        __RPC__out GUID *pguidMetadataFormat);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataHandlerInfo )(
            __RPC__in IWICMetadataWriter * This,
                        __RPC__deref_out_opt IWICMetadataHandlerInfo **ppIHandler);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IWICMetadataWriter * This,
                        __RPC__out UINT *pcCount);
        HRESULT ( STDMETHODCALLTYPE *GetValueByIndex )(
            __RPC__in IWICMetadataWriter * This,
                       UINT nIndex,
                                    __RPC__inout_opt PROPVARIANT *pvarSchema,
                                    __RPC__inout_opt PROPVARIANT *pvarId,
                                    __RPC__inout_opt PROPVARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in IWICMetadataWriter * This,
                               __RPC__in_opt const PROPVARIANT *pvarSchema,
                       __RPC__in const PROPVARIANT *pvarId,
                                    __RPC__inout_opt PROPVARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )(
            __RPC__in IWICMetadataWriter * This,
                        __RPC__deref_out_opt IWICEnumMetadataItem **ppIEnumMetadata);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in IWICMetadataWriter * This,
                               __RPC__in_opt const PROPVARIANT *pvarSchema,
                       __RPC__in const PROPVARIANT *pvarId,
                       __RPC__in const PROPVARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *SetValueByIndex )(
            __RPC__in IWICMetadataWriter * This,
                       UINT nIndex,
                               __RPC__in_opt const PROPVARIANT *pvarSchema,
                       __RPC__in const PROPVARIANT *pvarId,
                       __RPC__in const PROPVARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *RemoveValue )(
            __RPC__in IWICMetadataWriter * This,
                               __RPC__in_opt const PROPVARIANT *pvarSchema,
                       __RPC__in const PROPVARIANT *pvarId);
        HRESULT ( STDMETHODCALLTYPE *RemoveValueByIndex )(
            __RPC__in IWICMetadataWriter * This,
                       UINT nIndex);
        END_INTERFACE
    } IWICMetadataWriterVtbl;
    interface IWICMetadataWriter
    {
        CONST_VTBL struct IWICMetadataWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMetadataFormat(This,pguidMetadataFormat) )
    ( (This)->lpVtbl -> GetMetadataHandlerInfo(This,ppIHandler) )
    ( (This)->lpVtbl -> GetCount(This,pcCount) )
    ( (This)->lpVtbl -> GetValueByIndex(This,nIndex,pvarSchema,pvarId,pvarValue) )
    ( (This)->lpVtbl -> GetValue(This,pvarSchema,pvarId,pvarValue) )
    ( (This)->lpVtbl -> GetEnumerator(This,ppIEnumMetadata) )
    ( (This)->lpVtbl -> SetValue(This,pvarSchema,pvarId,pvarValue) )
    ( (This)->lpVtbl -> SetValueByIndex(This,nIndex,pvarSchema,pvarId,pvarValue) )
    ( (This)->lpVtbl -> RemoveValue(This,pvarSchema,pvarId) )
    ( (This)->lpVtbl -> RemoveValueByIndex(This,nIndex) )
EXTERN_C const IID IID_IWICStreamProvider;
    typedef struct IWICStreamProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICStreamProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICStreamProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICStreamProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IWICStreamProvider * This,
                        __RPC__deref_out_opt IStream **ppIStream);
        HRESULT ( STDMETHODCALLTYPE *GetPersistOptions )(
            __RPC__in IWICStreamProvider * This,
                        __RPC__out DWORD *pdwPersistOptions);
        HRESULT ( STDMETHODCALLTYPE *GetPreferredVendorGUID )(
            __RPC__in IWICStreamProvider * This,
                        __RPC__out GUID *pguidPreferredVendor);
        HRESULT ( STDMETHODCALLTYPE *RefreshStream )(
            __RPC__in IWICStreamProvider * This);
        END_INTERFACE
    } IWICStreamProviderVtbl;
    interface IWICStreamProvider
    {
        CONST_VTBL struct IWICStreamProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStream(This,ppIStream) )
    ( (This)->lpVtbl -> GetPersistOptions(This,pdwPersistOptions) )
    ( (This)->lpVtbl -> GetPreferredVendorGUID(This,pguidPreferredVendor) )
    ( (This)->lpVtbl -> RefreshStream(This) )
EXTERN_C const IID IID_IWICPersistStream;
    typedef struct IWICPersistStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICPersistStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICPersistStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICPersistStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in IWICPersistStream * This,
                        __RPC__out CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *IsDirty )(
            __RPC__in IWICPersistStream * This);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in IWICPersistStream * This,
                               __RPC__in_opt IStream *pStm);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IWICPersistStream * This,
                               __RPC__in_opt IStream *pStm,
                       BOOL fClearDirty);
        HRESULT ( STDMETHODCALLTYPE *GetSizeMax )(
            __RPC__in IWICPersistStream * This,
                        __RPC__out ULARGE_INTEGER *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *LoadEx )(
            __RPC__in IWICPersistStream * This,
                               __RPC__in_opt IStream *pIStream,
                               __RPC__in_opt const GUID *pguidPreferredVendor,
                       DWORD dwPersistOptions);
        HRESULT ( STDMETHODCALLTYPE *SaveEx )(
            __RPC__in IWICPersistStream * This,
                       __RPC__in_opt IStream *pIStream,
                       DWORD dwPersistOptions,
                       BOOL fClearDirty);
        END_INTERFACE
    } IWICPersistStreamVtbl;
    interface IWICPersistStream
    {
        CONST_VTBL struct IWICPersistStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> IsDirty(This) )
    ( (This)->lpVtbl -> Load(This,pStm) )
    ( (This)->lpVtbl -> Save(This,pStm,fClearDirty) )
    ( (This)->lpVtbl -> GetSizeMax(This,pcbSize) )
    ( (This)->lpVtbl -> LoadEx(This,pIStream,pguidPreferredVendor,dwPersistOptions) )
    ( (This)->lpVtbl -> SaveEx(This,pIStream,dwPersistOptions,fClearDirty) )
EXTERN_C const IID IID_IWICMetadataHandlerInfo;
    typedef struct IWICMetadataHandlerInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICMetadataHandlerInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICMetadataHandlerInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICMetadataHandlerInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )(
            __RPC__in IWICMetadataHandlerInfo * This,
                        __RPC__out WICComponentType *pType);
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )(
            __RPC__in IWICMetadataHandlerInfo * This,
                        __RPC__out CLSID *pclsid);
        HRESULT ( STDMETHODCALLTYPE *GetSigningStatus )(
            __RPC__in IWICMetadataHandlerInfo * This,
                        __RPC__out DWORD *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetAuthor )(
            __RPC__in IWICMetadataHandlerInfo * This,
                       UINT cchAuthor,
                                             __RPC__inout_ecount_full_opt(cchAuthor) WCHAR *wzAuthor,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetVendorGUID )(
            __RPC__in IWICMetadataHandlerInfo * This,
                        __RPC__out GUID *pguidVendor);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IWICMetadataHandlerInfo * This,
                       UINT cchVersion,
                                             __RPC__inout_ecount_full_opt(cchVersion) WCHAR *wzVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetSpecVersion )(
            __RPC__in IWICMetadataHandlerInfo * This,
                       UINT cchSpecVersion,
                                             __RPC__inout_ecount_full_opt(cchSpecVersion) WCHAR *wzSpecVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            __RPC__in IWICMetadataHandlerInfo * This,
                       UINT cchFriendlyName,
                                             __RPC__inout_ecount_full_opt(cchFriendlyName) WCHAR *wzFriendlyName,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataFormat )(
            __RPC__in IWICMetadataHandlerInfo * This,
                        __RPC__out GUID *pguidMetadataFormat);
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormats )(
            __RPC__in IWICMetadataHandlerInfo * This,
                       UINT cContainerFormats,
                                             __RPC__inout_ecount_full_opt(cContainerFormats) GUID *pguidContainerFormats,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceManufacturer )(
            __RPC__in IWICMetadataHandlerInfo * This,
                       UINT cchDeviceManufacturer,
                                             __RPC__inout_ecount_full_opt(cchDeviceManufacturer) WCHAR *wzDeviceManufacturer,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceModels )(
            __RPC__in IWICMetadataHandlerInfo * This,
                       UINT cchDeviceModels,
                                             __RPC__inout_ecount_full_opt(cchDeviceModels) WCHAR *wzDeviceModels,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *DoesRequireFullStream )(
            __RPC__in IWICMetadataHandlerInfo * This,
                        __RPC__out BOOL *pfRequiresFullStream);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportPadding )(
            __RPC__in IWICMetadataHandlerInfo * This,
                        __RPC__out BOOL *pfSupportsPadding);
        HRESULT ( STDMETHODCALLTYPE *DoesRequireFixedSize )(
            __RPC__in IWICMetadataHandlerInfo * This,
                        __RPC__out BOOL *pfFixedSize);
        END_INTERFACE
    } IWICMetadataHandlerInfoVtbl;
    interface IWICMetadataHandlerInfo
    {
        CONST_VTBL struct IWICMetadataHandlerInfoVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetMetadataFormat(This,pguidMetadataFormat) )
    ( (This)->lpVtbl -> GetContainerFormats(This,cContainerFormats,pguidContainerFormats,pcchActual) )
    ( (This)->lpVtbl -> GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual) )
    ( (This)->lpVtbl -> GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual) )
    ( (This)->lpVtbl -> DoesRequireFullStream(This,pfRequiresFullStream) )
    ( (This)->lpVtbl -> DoesSupportPadding(This,pfSupportsPadding) )
    ( (This)->lpVtbl -> DoesRequireFixedSize(This,pfFixedSize) )
typedef struct WICMetadataPattern
    {
    ULARGE_INTEGER Position;
    ULONG Length;
                    BYTE *Pattern;
                    BYTE *Mask;
    ULARGE_INTEGER DataOffset;
    } WICMetadataPattern;
extern RPC_IF_HANDLE __MIDL_itf_wincodecsdk_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wincodecsdk_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IWICMetadataReaderInfo;
    typedef struct IWICMetadataReaderInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICMetadataReaderInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICMetadataReaderInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICMetadataReaderInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )(
            __RPC__in IWICMetadataReaderInfo * This,
                        __RPC__out WICComponentType *pType);
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )(
            __RPC__in IWICMetadataReaderInfo * This,
                        __RPC__out CLSID *pclsid);
        HRESULT ( STDMETHODCALLTYPE *GetSigningStatus )(
            __RPC__in IWICMetadataReaderInfo * This,
                        __RPC__out DWORD *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetAuthor )(
            __RPC__in IWICMetadataReaderInfo * This,
                       UINT cchAuthor,
                                             __RPC__inout_ecount_full_opt(cchAuthor) WCHAR *wzAuthor,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetVendorGUID )(
            __RPC__in IWICMetadataReaderInfo * This,
                        __RPC__out GUID *pguidVendor);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IWICMetadataReaderInfo * This,
                       UINT cchVersion,
                                             __RPC__inout_ecount_full_opt(cchVersion) WCHAR *wzVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetSpecVersion )(
            __RPC__in IWICMetadataReaderInfo * This,
                       UINT cchSpecVersion,
                                             __RPC__inout_ecount_full_opt(cchSpecVersion) WCHAR *wzSpecVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            __RPC__in IWICMetadataReaderInfo * This,
                       UINT cchFriendlyName,
                                             __RPC__inout_ecount_full_opt(cchFriendlyName) WCHAR *wzFriendlyName,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataFormat )(
            __RPC__in IWICMetadataReaderInfo * This,
                        __RPC__out GUID *pguidMetadataFormat);
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormats )(
            __RPC__in IWICMetadataReaderInfo * This,
                       UINT cContainerFormats,
                                             __RPC__inout_ecount_full_opt(cContainerFormats) GUID *pguidContainerFormats,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceManufacturer )(
            __RPC__in IWICMetadataReaderInfo * This,
                       UINT cchDeviceManufacturer,
                                             __RPC__inout_ecount_full_opt(cchDeviceManufacturer) WCHAR *wzDeviceManufacturer,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceModels )(
            __RPC__in IWICMetadataReaderInfo * This,
                       UINT cchDeviceModels,
                                             __RPC__inout_ecount_full_opt(cchDeviceModels) WCHAR *wzDeviceModels,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *DoesRequireFullStream )(
            __RPC__in IWICMetadataReaderInfo * This,
                        __RPC__out BOOL *pfRequiresFullStream);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportPadding )(
            __RPC__in IWICMetadataReaderInfo * This,
                        __RPC__out BOOL *pfSupportsPadding);
        HRESULT ( STDMETHODCALLTYPE *DoesRequireFixedSize )(
            __RPC__in IWICMetadataReaderInfo * This,
                        __RPC__out BOOL *pfFixedSize);
                      HRESULT ( STDMETHODCALLTYPE *GetPatterns )(
            IWICMetadataReaderInfo * This,
                       REFGUID guidContainerFormat,
                       UINT cbSize,
            _Out_writes_bytes_to_opt_(cbSize, *pcbActual) WICMetadataPattern *pPattern,
            _Out_opt_ UINT *pcCount,
            _Out_opt_ UINT *pcbActual);
        HRESULT ( STDMETHODCALLTYPE *MatchesPattern )(
            __RPC__in IWICMetadataReaderInfo * This,
                       __RPC__in REFGUID guidContainerFormat,
                       __RPC__in_opt IStream *pIStream,
                        __RPC__out BOOL *pfMatches);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in IWICMetadataReaderInfo * This,
                        __RPC__deref_out_opt IWICMetadataReader **ppIReader);
        END_INTERFACE
    } IWICMetadataReaderInfoVtbl;
    interface IWICMetadataReaderInfo
    {
        CONST_VTBL struct IWICMetadataReaderInfoVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetMetadataFormat(This,pguidMetadataFormat) )
    ( (This)->lpVtbl -> GetContainerFormats(This,cContainerFormats,pguidContainerFormats,pcchActual) )
    ( (This)->lpVtbl -> GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual) )
    ( (This)->lpVtbl -> GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual) )
    ( (This)->lpVtbl -> DoesRequireFullStream(This,pfRequiresFullStream) )
    ( (This)->lpVtbl -> DoesSupportPadding(This,pfSupportsPadding) )
    ( (This)->lpVtbl -> DoesRequireFixedSize(This,pfFixedSize) )
    ( (This)->lpVtbl -> GetPatterns(This,guidContainerFormat,cbSize,pPattern,pcCount,pcbActual) )
    ( (This)->lpVtbl -> MatchesPattern(This,guidContainerFormat,pIStream,pfMatches) )
    ( (This)->lpVtbl -> CreateInstance(This,ppIReader) )
                HRESULT STDMETHODCALLTYPE IWICMetadataReaderInfo_Remote_GetPatterns_Proxy(
    __RPC__in IWICMetadataReaderInfo * This,
               __RPC__in REFGUID guidContainerFormat,
                                  __RPC__deref_out_ecount_full_opt(*pcPatterns) WICMetadataPattern **ppPatterns,
                __RPC__out UINT *pcPatterns);
void __RPC_STUB IWICMetadataReaderInfo_Remote_GetPatterns_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef struct WICMetadataHeader
    {
    ULARGE_INTEGER Position;
    ULONG Length;
                    BYTE *Header;
    ULARGE_INTEGER DataOffset;
    } WICMetadataHeader;
extern RPC_IF_HANDLE __MIDL_itf_wincodecsdk_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wincodecsdk_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IWICMetadataWriterInfo;
    typedef struct IWICMetadataWriterInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICMetadataWriterInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICMetadataWriterInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICMetadataWriterInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )(
            __RPC__in IWICMetadataWriterInfo * This,
                        __RPC__out WICComponentType *pType);
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )(
            __RPC__in IWICMetadataWriterInfo * This,
                        __RPC__out CLSID *pclsid);
        HRESULT ( STDMETHODCALLTYPE *GetSigningStatus )(
            __RPC__in IWICMetadataWriterInfo * This,
                        __RPC__out DWORD *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetAuthor )(
            __RPC__in IWICMetadataWriterInfo * This,
                       UINT cchAuthor,
                                             __RPC__inout_ecount_full_opt(cchAuthor) WCHAR *wzAuthor,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetVendorGUID )(
            __RPC__in IWICMetadataWriterInfo * This,
                        __RPC__out GUID *pguidVendor);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IWICMetadataWriterInfo * This,
                       UINT cchVersion,
                                             __RPC__inout_ecount_full_opt(cchVersion) WCHAR *wzVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetSpecVersion )(
            __RPC__in IWICMetadataWriterInfo * This,
                       UINT cchSpecVersion,
                                             __RPC__inout_ecount_full_opt(cchSpecVersion) WCHAR *wzSpecVersion,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            __RPC__in IWICMetadataWriterInfo * This,
                       UINT cchFriendlyName,
                                             __RPC__inout_ecount_full_opt(cchFriendlyName) WCHAR *wzFriendlyName,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataFormat )(
            __RPC__in IWICMetadataWriterInfo * This,
                        __RPC__out GUID *pguidMetadataFormat);
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormats )(
            __RPC__in IWICMetadataWriterInfo * This,
                       UINT cContainerFormats,
                                             __RPC__inout_ecount_full_opt(cContainerFormats) GUID *pguidContainerFormats,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceManufacturer )(
            __RPC__in IWICMetadataWriterInfo * This,
                       UINT cchDeviceManufacturer,
                                             __RPC__inout_ecount_full_opt(cchDeviceManufacturer) WCHAR *wzDeviceManufacturer,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceModels )(
            __RPC__in IWICMetadataWriterInfo * This,
                       UINT cchDeviceModels,
                                             __RPC__inout_ecount_full_opt(cchDeviceModels) WCHAR *wzDeviceModels,
                        __RPC__out UINT *pcchActual);
        HRESULT ( STDMETHODCALLTYPE *DoesRequireFullStream )(
            __RPC__in IWICMetadataWriterInfo * This,
                        __RPC__out BOOL *pfRequiresFullStream);
        HRESULT ( STDMETHODCALLTYPE *DoesSupportPadding )(
            __RPC__in IWICMetadataWriterInfo * This,
                        __RPC__out BOOL *pfSupportsPadding);
        HRESULT ( STDMETHODCALLTYPE *DoesRequireFixedSize )(
            __RPC__in IWICMetadataWriterInfo * This,
                        __RPC__out BOOL *pfFixedSize);
                      HRESULT ( STDMETHODCALLTYPE *GetHeader )(
            IWICMetadataWriterInfo * This,
                       REFGUID guidContainerFormat,
                       UINT cbSize,
            _Out_writes_bytes_opt_(cbSize) WICMetadataHeader *pHeader,
            _Out_opt_ UINT *pcbActual);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in IWICMetadataWriterInfo * This,
                        __RPC__deref_out_opt IWICMetadataWriter **ppIWriter);
        END_INTERFACE
    } IWICMetadataWriterInfoVtbl;
    interface IWICMetadataWriterInfo
    {
        CONST_VTBL struct IWICMetadataWriterInfoVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetMetadataFormat(This,pguidMetadataFormat) )
    ( (This)->lpVtbl -> GetContainerFormats(This,cContainerFormats,pguidContainerFormats,pcchActual) )
    ( (This)->lpVtbl -> GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual) )
    ( (This)->lpVtbl -> GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual) )
    ( (This)->lpVtbl -> DoesRequireFullStream(This,pfRequiresFullStream) )
    ( (This)->lpVtbl -> DoesSupportPadding(This,pfSupportsPadding) )
    ( (This)->lpVtbl -> DoesRequireFixedSize(This,pfFixedSize) )
    ( (This)->lpVtbl -> GetHeader(This,guidContainerFormat,cbSize,pHeader,pcbActual) )
    ( (This)->lpVtbl -> CreateInstance(This,ppIWriter) )
                HRESULT STDMETHODCALLTYPE IWICMetadataWriterInfo_Remote_GetHeader_Proxy(
    __RPC__in IWICMetadataWriterInfo * This,
               __RPC__in REFGUID guidContainerFormat,
                __RPC__out WICMetadataHeader *pHeader);
void __RPC_STUB IWICMetadataWriterInfo_Remote_GetHeader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IWICComponentFactory;
    typedef struct IWICComponentFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWICComponentFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWICComponentFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateDecoderFromFilename )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in LPCWSTR wzFilename,
                               __RPC__in_opt const GUID *pguidVendor,
                       DWORD dwDesiredAccess,
                       WICDecodeOptions metadataOptions,
                                __RPC__deref_out_opt IWICBitmapDecoder **ppIDecoder);
        HRESULT ( STDMETHODCALLTYPE *CreateDecoderFromStream )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in_opt IStream *pIStream,
                               __RPC__in_opt const GUID *pguidVendor,
                       WICDecodeOptions metadataOptions,
                                __RPC__deref_out_opt IWICBitmapDecoder **ppIDecoder);
        HRESULT ( STDMETHODCALLTYPE *CreateDecoderFromFileHandle )(
            __RPC__in IWICComponentFactory * This,
                       ULONG_PTR hFile,
                               __RPC__in_opt const GUID *pguidVendor,
                       WICDecodeOptions metadataOptions,
                                __RPC__deref_out_opt IWICBitmapDecoder **ppIDecoder);
        HRESULT ( STDMETHODCALLTYPE *CreateComponentInfo )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in REFCLSID clsidComponent,
                        __RPC__deref_out_opt IWICComponentInfo **ppIInfo);
        HRESULT ( STDMETHODCALLTYPE *CreateDecoder )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in REFGUID guidContainerFormat,
                               __RPC__in_opt const GUID *pguidVendor,
                                __RPC__deref_out_opt IWICBitmapDecoder **ppIDecoder);
        HRESULT ( STDMETHODCALLTYPE *CreateEncoder )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in REFGUID guidContainerFormat,
                               __RPC__in_opt const GUID *pguidVendor,
                                __RPC__deref_out_opt IWICBitmapEncoder **ppIEncoder);
        HRESULT ( STDMETHODCALLTYPE *CreatePalette )(
            __RPC__in IWICComponentFactory * This,
                        __RPC__deref_out_opt IWICPalette **ppIPalette);
        HRESULT ( STDMETHODCALLTYPE *CreateFormatConverter )(
            __RPC__in IWICComponentFactory * This,
                        __RPC__deref_out_opt IWICFormatConverter **ppIFormatConverter);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapScaler )(
            __RPC__in IWICComponentFactory * This,
                        __RPC__deref_out_opt IWICBitmapScaler **ppIBitmapScaler);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapClipper )(
            __RPC__in IWICComponentFactory * This,
                        __RPC__deref_out_opt IWICBitmapClipper **ppIBitmapClipper);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFlipRotator )(
            __RPC__in IWICComponentFactory * This,
                        __RPC__deref_out_opt IWICBitmapFlipRotator **ppIBitmapFlipRotator);
        HRESULT ( STDMETHODCALLTYPE *CreateStream )(
            __RPC__in IWICComponentFactory * This,
                        __RPC__deref_out_opt IWICStream **ppIWICStream);
        HRESULT ( STDMETHODCALLTYPE *CreateColorContext )(
            __RPC__in IWICComponentFactory * This,
                        __RPC__deref_out_opt IWICColorContext **ppIWICColorContext);
        HRESULT ( STDMETHODCALLTYPE *CreateColorTransformer )(
            __RPC__in IWICComponentFactory * This,
                        __RPC__deref_out_opt IWICColorTransform **ppIWICColorTransform);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmap )(
            __RPC__in IWICComponentFactory * This,
                       UINT uiWidth,
                       UINT uiHeight,
                       __RPC__in REFWICPixelFormatGUID pixelFormat,
                       WICBitmapCreateCacheOption option,
                        __RPC__deref_out_opt IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromSource )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in_opt IWICBitmapSource *pIBitmapSource,
                       WICBitmapCreateCacheOption option,
                        __RPC__deref_out_opt IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromSourceRect )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in_opt IWICBitmapSource *pIBitmapSource,
                       UINT x,
                       UINT y,
                       UINT width,
                       UINT height,
                        __RPC__deref_out_opt IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromMemory )(
            __RPC__in IWICComponentFactory * This,
                       UINT uiWidth,
                       UINT uiHeight,
                       __RPC__in REFWICPixelFormatGUID pixelFormat,
                       UINT cbStride,
                       UINT cbBufferSize,
                                __RPC__in_ecount_full(cbBufferSize) BYTE *pbBuffer,
                        __RPC__deref_out_opt IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromHBITMAP )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in HBITMAP hBitmap,
                               __RPC__in_opt HPALETTE hPalette,
                       WICBitmapAlphaChannelOption options,
                        __RPC__deref_out_opt IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromHICON )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in HICON hIcon,
                        __RPC__deref_out_opt IWICBitmap **ppIBitmap);
        HRESULT ( STDMETHODCALLTYPE *CreateComponentEnumerator )(
            __RPC__in IWICComponentFactory * This,
                       DWORD componentTypes,
                       DWORD options,
                        __RPC__deref_out_opt IEnumUnknown **ppIEnumUnknown);
        HRESULT ( STDMETHODCALLTYPE *CreateFastMetadataEncoderFromDecoder )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in_opt IWICBitmapDecoder *pIDecoder,
                        __RPC__deref_out_opt IWICFastMetadataEncoder **ppIFastEncoder);
        HRESULT ( STDMETHODCALLTYPE *CreateFastMetadataEncoderFromFrameDecode )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in_opt IWICBitmapFrameDecode *pIFrameDecoder,
                        __RPC__deref_out_opt IWICFastMetadataEncoder **ppIFastEncoder);
        HRESULT ( STDMETHODCALLTYPE *CreateQueryWriter )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in REFGUID guidMetadataFormat,
                               __RPC__in_opt const GUID *pguidVendor,
                        __RPC__deref_out_opt IWICMetadataQueryWriter **ppIQueryWriter);
        HRESULT ( STDMETHODCALLTYPE *CreateQueryWriterFromReader )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in_opt IWICMetadataQueryReader *pIQueryReader,
                               __RPC__in_opt const GUID *pguidVendor,
                        __RPC__deref_out_opt IWICMetadataQueryWriter **ppIQueryWriter);
        HRESULT ( STDMETHODCALLTYPE *CreateMetadataReader )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in REFGUID guidMetadataFormat,
                                        __RPC__in_ecount_full_opt(1) const GUID *pguidVendor,
                       DWORD dwOptions,
                       __RPC__in_opt IStream *pIStream,
                        __RPC__deref_out_opt IWICMetadataReader **ppIReader);
        HRESULT ( STDMETHODCALLTYPE *CreateMetadataReaderFromContainer )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in REFGUID guidContainerFormat,
                                        __RPC__in_ecount_full_opt(1) const GUID *pguidVendor,
                       DWORD dwOptions,
                       __RPC__in_opt IStream *pIStream,
                        __RPC__deref_out_opt IWICMetadataReader **ppIReader);
        HRESULT ( STDMETHODCALLTYPE *CreateMetadataWriter )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in REFGUID guidMetadataFormat,
                                        __RPC__in_ecount_full_opt(1) const GUID *pguidVendor,
                       DWORD dwMetadataOptions,
                        __RPC__deref_out_opt IWICMetadataWriter **ppIWriter);
        HRESULT ( STDMETHODCALLTYPE *CreateMetadataWriterFromReader )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in_opt IWICMetadataReader *pIReader,
                               __RPC__in_opt const GUID *pguidVendor,
                        __RPC__deref_out_opt IWICMetadataWriter **ppIWriter);
        HRESULT ( STDMETHODCALLTYPE *CreateQueryReaderFromBlockReader )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in_opt IWICMetadataBlockReader *pIBlockReader,
                        __RPC__deref_out_opt IWICMetadataQueryReader **ppIQueryReader);
        HRESULT ( STDMETHODCALLTYPE *CreateQueryWriterFromBlockWriter )(
            __RPC__in IWICComponentFactory * This,
                       __RPC__in_opt IWICMetadataBlockWriter *pIBlockWriter,
                        __RPC__deref_out_opt IWICMetadataQueryWriter **ppIQueryWriter);
        HRESULT ( STDMETHODCALLTYPE *CreateEncoderPropertyBag )(
            __RPC__in IWICComponentFactory * This,
                                        __RPC__in_ecount_full_opt(cCount) PROPBAG2 *ppropOptions,
                       UINT cCount,
                        __RPC__deref_out_opt IPropertyBag2 **ppIPropertyBag);
        END_INTERFACE
    } IWICComponentFactoryVtbl;
    interface IWICComponentFactory
    {
        CONST_VTBL struct IWICComponentFactoryVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> CreateMetadataReader(This,guidMetadataFormat,pguidVendor,dwOptions,pIStream,ppIReader) )
    ( (This)->lpVtbl -> CreateMetadataReaderFromContainer(This,guidContainerFormat,pguidVendor,dwOptions,pIStream,ppIReader) )
    ( (This)->lpVtbl -> CreateMetadataWriter(This,guidMetadataFormat,pguidVendor,dwMetadataOptions,ppIWriter) )
    ( (This)->lpVtbl -> CreateMetadataWriterFromReader(This,pIReader,pguidVendor,ppIWriter) )
    ( (This)->lpVtbl -> CreateQueryReaderFromBlockReader(This,pIBlockReader,ppIQueryReader) )
    ( (This)->lpVtbl -> CreateQueryWriterFromBlockWriter(This,pIBlockWriter,ppIQueryWriter) )
    ( (This)->lpVtbl -> CreateEncoderPropertyBag(This,ppropOptions,cCount,ppIPropertyBag) )
HRESULT WINAPI WICMatchMetadataContent(
    _In_ REFGUID guidContainerFormat,
    _In_opt_ const GUID *pguidVendor,
    _In_ IStream *pIStream,
    _Out_ GUID *pguidMetadataFormat
    );
HRESULT WINAPI WICSerializeMetadataContent(
    _In_ REFGUID guidContainerFormat,
    _In_ IWICMetadataWriter *pIWriter,
    _In_ DWORD dwPersistOptions,
    _In_ IStream *pIStream
    );
HRESULT WINAPI WICGetMetadataContentSize(
    _In_ REFGUID guidContainerFormat,
    _In_ IWICMetadataWriter *pIWriter,
    _Out_ ULARGE_INTEGER *pcbSize
    );
extern RPC_IF_HANDLE __MIDL_itf_wincodecsdk_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wincodecsdk_0000_0010_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER CLIPFORMAT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out CLIPFORMAT * );
void __RPC_USER CLIPFORMAT_UserFree( __RPC__in unsigned long *, __RPC__in CLIPFORMAT * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
              HRESULT STDMETHODCALLTYPE IWICMetadataReaderInfo_GetPatterns_Proxy(
    IWICMetadataReaderInfo * This,
               REFGUID guidContainerFormat,
               UINT cbSize,
    _Out_writes_bytes_to_opt_(cbSize, *pcbActual) WICMetadataPattern *pPattern,
    _Out_opt_ UINT *pcCount,
    _Out_opt_ UINT *pcbActual);
                HRESULT STDMETHODCALLTYPE IWICMetadataReaderInfo_GetPatterns_Stub(
    __RPC__in IWICMetadataReaderInfo * This,
               __RPC__in REFGUID guidContainerFormat,
                                  __RPC__deref_out_ecount_full_opt(*pcPatterns) WICMetadataPattern **ppPatterns,
                __RPC__out UINT *pcPatterns);
              HRESULT STDMETHODCALLTYPE IWICMetadataWriterInfo_GetHeader_Proxy(
    IWICMetadataWriterInfo * This,
               REFGUID guidContainerFormat,
               UINT cbSize,
    _Out_writes_bytes_opt_(cbSize) WICMetadataHeader *pHeader,
    _Out_opt_ UINT *pcbActual);
                HRESULT STDMETHODCALLTYPE IWICMetadataWriterInfo_GetHeader_Stub(
    __RPC__in IWICMetadataWriterInfo * This,
               __RPC__in REFGUID guidContainerFormat,
                __RPC__out WICMetadataHeader *pHeader);
}
