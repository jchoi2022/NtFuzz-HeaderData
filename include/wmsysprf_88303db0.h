       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID( WMProfile_V40_DialUpMBR,
             0xfd7f47f1,
             0x72a6,
             0x45a4,
             0x80, 0xf0, 0x3a, 0xec, 0xef, 0xc3, 0x2c, 0x07 );
EXTERN_GUID( WMProfile_V40_IntranetMBR,
             0x82cd3321,
             0xa94a,
             0x4ffc,
             0x9c, 0x2b, 0x09, 0x2c, 0x10, 0xca, 0x16, 0xe7 );
EXTERN_GUID( WMProfile_V40_2856100MBR,
             0x5a1c2206,
             0xdc5e,
             0x4186,
             0xbe, 0xb2, 0x4c, 0x5a, 0x99, 0x4b, 0x13, 0x2e );
EXTERN_GUID( WMProfile_V40_6VoiceAudio,
             0xD508978A,
             0x11A0,
             0x4d15,
             0xb0, 0xda, 0xac, 0xdc, 0x99, 0xd4, 0xf8, 0x90 );
EXTERN_GUID( WMProfile_V40_16AMRadio,
             0x0f4be81f,
             0xd57d,
             0x41e1,
             0xb2, 0xe3, 0x2f, 0xad, 0x98, 0x6b, 0xfe, 0xc2 );
EXTERN_GUID( WMProfile_V40_288FMRadioMono,
             0x7fa57fc8,
             0x6ea4,
             0x4645,
             0x8a, 0xbf, 0xb6, 0xe5, 0xa8, 0xf8, 0x14, 0xa1 );
EXTERN_GUID( WMProfile_V40_288FMRadioStereo,
             0x22fcf466,
             0xaa40,
             0x431f,
             0xa2, 0x89, 0x06, 0xd0, 0xea, 0x1a, 0x1e, 0x40 );
EXTERN_GUID( WMProfile_V40_56DialUpStereo,
             0xe8026f87,
             0xe905,
             0x4594,
             0xa3, 0xc7, 0x00, 0xd0, 0x00, 0x41, 0xd1, 0xd9 );
EXTERN_GUID( WMProfile_V40_64Audio,
             0x4820b3f7,
             0xcbec,
             0x41dc,
             0x93, 0x91, 0x78, 0x59, 0x87, 0x14, 0xc8, 0xe5 );
EXTERN_GUID( WMProfile_V40_96Audio,
             0x0efa0ee3,
             0x9e64,
             0x41e2,
             0x83, 0x7f, 0x3c, 0x00, 0x38, 0xf3, 0x27, 0xba );
EXTERN_GUID( WMProfile_V40_128Audio,
             0x93ddbe12,
             0x13dc,
             0x4e32,
             0xa3, 0x5e, 0x40, 0x37, 0x8e, 0x34, 0x27, 0x9a );
EXTERN_GUID( WMProfile_V40_288VideoVoice,
             0xbb2bc274,
             0x0eb6,
             0x4da9,
             0xb5, 0x50, 0xec, 0xf7, 0xf2, 0xb9, 0x94, 0x8f );
EXTERN_GUID( WMProfile_V40_288VideoAudio,
             0xac617f2d,
             0x6cbe,
             0x4e84,
             0x8e, 0x9a, 0xce, 0x15, 0x1a, 0x12, 0xa3, 0x54 );
EXTERN_GUID( WMProfile_V40_288VideoWebServer,
             0xabf2f00d,
             0xd555,
             0x4815,
             0x94, 0xce, 0x82, 0x75, 0xf3, 0xa7, 0x0b, 0xfe );
EXTERN_GUID( WMProfile_V40_56DialUpVideo,
             0xe21713bb,
             0x652f,
             0x4dab,
             0x99, 0xde, 0x71, 0xe0, 0x44, 0x00, 0x27, 0x0f );
EXTERN_GUID( WMProfile_V40_56DialUpVideoWebServer,
             0xb756ff10,
             0x520f,
             0x4749,
             0xa3, 0x99, 0xb7, 0x80, 0xe2, 0xfc, 0x92, 0x50 );
EXTERN_GUID( WMProfile_V40_100Video,
             0x8f99ddd8,
             0x6684,
             0x456b,
             0xa0, 0xa3, 0x33, 0xe1, 0x31, 0x68, 0x95, 0xf0 );
EXTERN_GUID( WMProfile_V40_250Video,
             0x541841c3,
             0x9339,
             0x4f7b,
             0x9a, 0x22, 0xb1, 0x15, 0x40, 0x89, 0x4e, 0x42 );
EXTERN_GUID( WMProfile_V40_512Video,
             0x70440e6d,
             0xc4ef,
             0x4f84,
             0x8c, 0xd0, 0xd5, 0xc2, 0x86, 0x86, 0xe7, 0x84 );
EXTERN_GUID( WMProfile_V40_1MBVideo,
             0xb4482a4c,
             0xcc17,
             0x4b07,
             0xa9, 0x4e, 0x98, 0x18, 0xd5, 0xe0, 0xf1, 0x3f );
EXTERN_GUID( WMProfile_V40_3MBVideo,
             0x55374ac0,
             0x309b,
             0x4396,
             0xb8, 0x8f, 0xe6, 0xe2, 0x92, 0x11, 0x3f, 0x28 );
EXTERN_GUID( WMProfile_V70_DialUpMBR,
             0x5b16e74b,
             0x4068,
             0x45b5,
             0xb8, 0xe, 0x7b, 0xf8, 0xc8, 0xd, 0x2c, 0x2f );
EXTERN_GUID( WMProfile_V70_IntranetMBR,
             0x45880dc,
             0x34b6,
             0x4ca9,
             0xa3, 0x26, 0x73, 0x55, 0x7e, 0xd1, 0x43, 0xf3 );
EXTERN_GUID( WMProfile_V70_2856100MBR,
             0x7df7a25,
             0x3fe2,
             0x4a5b,
             0x8b, 0x1e, 0x34, 0x8b, 0x7, 0x21, 0xca, 0x70 );
EXTERN_GUID( WMProfile_V70_288VideoVoice,
             0xb952f38e,
             0x7dbc,
             0x4533,
             0xa9, 0xca, 0xb0, 0xb, 0x1c, 0x6e, 0x98, 0x0 );
EXTERN_GUID( WMProfile_V70_288VideoAudio,
             0x58bba0ee,
             0x896a,
             0x4948,
             0x99, 0x53, 0x85, 0xb7, 0x36, 0xf8, 0x39, 0x47 );
EXTERN_GUID( WMProfile_V70_288VideoWebServer,
             0x70a32e2b,
             0xe2df,
             0x4ebd,
             0x91, 0x5, 0xd9, 0xca, 0x19, 0x4a, 0x2d, 0x50 );
EXTERN_GUID( WMProfile_V70_56VideoWebServer,
             0xdef99e40,
             0x57bc,
             0x4ab3,
             0xb2, 0xd1, 0xb6, 0xe3, 0xca, 0xf6, 0x42, 0x57 );
EXTERN_GUID( WMProfile_V70_64VideoISDN,
             0xc2b7a7e9,
             0x7b8e,
             0x4992,
             0xa1, 0xa1, 0x06, 0x82, 0x17, 0xa3, 0xb3, 0x11 );
EXTERN_GUID( WMProfile_V70_100Video,
             0xd9f3c932,
             0x5ea9,
             0x4c6d,
             0x89, 0xb4, 0x26, 0x86, 0xe5, 0x15, 0x42, 0x6e );
EXTERN_GUID( WMProfile_V70_256Video,
             0xafe69b3a,
             0x403f,
             0x4a1b,
             0x80, 0x7, 0xe, 0x21, 0xcf, 0xb3, 0xdf, 0x84 );
EXTERN_GUID( WMProfile_V70_384Video,
             0xf3d45fbb,
             0x8782,
             0x44df,
             0x97, 0xc6, 0x86, 0x78, 0xe2, 0xf9, 0xb1, 0x3d );
EXTERN_GUID( WMProfile_V70_768Video,
             0x326ebb6,
             0xf76e,
             0x4964,
             0xb0, 0xdb, 0xe7, 0x29, 0x97, 0x8d, 0x35, 0xee );
EXTERN_GUID( WMProfile_V70_1500Video,
             0xb89164a,
             0x5490,
             0x4686,
             0x9e, 0x37, 0x5a, 0x80, 0x88, 0x4e, 0x51, 0x46 );
EXTERN_GUID( WMProfile_V70_2000Video,
             0xaa980124,
             0xbf10,
             0x4e4f,
             0x9a, 0xfd, 0x43, 0x29, 0xa7, 0x39, 0x5c, 0xff );
EXTERN_GUID( WMProfile_V70_700FilmContentVideo,
             0x7a747920,
             0x2449,
             0x4d76,
             0x99, 0xcb, 0xfd, 0xb0, 0xc9, 0x4, 0x84, 0xd4 );
EXTERN_GUID( WMProfile_V70_1500FilmContentVideo,
             0xf6a5f6df,
             0xee3f,
             0x434c,
             0xa4, 0x33, 0x52, 0x3c, 0xe5, 0x5f, 0x51, 0x6b );
EXTERN_GUID( WMProfile_V70_6VoiceAudio,
             0xeaba9fbf,
             0xb64f,
             0x49b3,
             0xaa, 0xc, 0x73, 0xfb, 0xdd, 0x15, 0xa, 0xd0 );
EXTERN_GUID( WMProfile_V70_288FMRadioMono,
             0xc012a833,
             0xa03b,
             0x44a5,
             0x96, 0xdc, 0xed, 0x95, 0xcc, 0x65, 0x58, 0x2d );
EXTERN_GUID( WMProfile_V70_288FMRadioStereo,
             0xe96d67c9,
             0x1a39,
             0x4dc4,
             0xb9, 0x0, 0xb1, 0x18, 0x4d, 0xc8, 0x36, 0x20 );
EXTERN_GUID( WMProfile_V70_56DialUpStereo,
             0x674ee767,
             0x949,
             0x4fac,
             0x87, 0x5e, 0xf4, 0xc9, 0xc2, 0x92, 0x1, 0x3b );
EXTERN_GUID( WMProfile_V70_64AudioISDN,
             0x91dea458,
             0x9d60,
             0x4212,
             0x9c, 0x59, 0xd4, 0x09, 0x19, 0xc9, 0x39, 0xe4 );
EXTERN_GUID( WMProfile_V70_64Audio,
             0xb29cffc6,
             0xf131,
             0x41db,
             0xb5, 0xe8, 0x99, 0xd8, 0xb0, 0xb9, 0x45, 0xf4 );
EXTERN_GUID( WMProfile_V70_96Audio,
             0xa9d4b819,
             0x16cc,
             0x4a59,
             0x9f, 0x37, 0x69, 0x3d, 0xbb, 0x3, 0x2, 0xd6 );
EXTERN_GUID( WMProfile_V70_128Audio,
             0xc64cf5da,
             0xdf45,
             0x40d3,
             0x80, 0x27, 0xde, 0x69, 0x8d, 0x68, 0xdc, 0x66 );
EXTERN_GUID( WMProfile_V70_225VideoPDA,
             0xf55ea573,
             0x4c02,
             0x42b5,
             0x90, 0x26, 0xa8, 0x26, 0xc, 0x43, 0x8a, 0x9f );
EXTERN_GUID( WMProfile_V70_150VideoPDA,
             0xf472967,
             0xe3c6,
             0x4797,
             0x96, 0x94, 0xf0, 0x30, 0x4c, 0x5e, 0x2f, 0x17 );
EXTERN_GUID( WMProfile_V80_255VideoPDA,
             0xfeedbcdf,
             0x3fac,
             0x4c93,
             0xac, 0xd, 0x47, 0x94, 0x1e, 0xc7, 0x2c, 0xb );
EXTERN_GUID( WMProfile_V80_150VideoPDA,
             0xaee16dfa,
             0x2c14,
             0x4a2f,
             0xad, 0x3f, 0xa3, 0x3, 0x40, 0x31, 0x78, 0x4f );
EXTERN_GUID( WMProfile_V80_28856VideoMBR,
             0xd66920c4,
             0xc21f,
             0x4ec8,
             0xa0, 0xb4, 0x95, 0xcf, 0x2b, 0xd5, 0x7f, 0xc4 );
EXTERN_GUID( WMProfile_V80_100768VideoMBR,
             0x5bdb5a0e,
             0x979e,
             0x47d3,
             0x95, 0x96, 0x73, 0xb3, 0x86, 0x39, 0x2a, 0x55 );
EXTERN_GUID( WMProfile_V80_288100VideoMBR,
             0xd8722c69,
             0x2419,
             0x4b36,
             0xb4, 0xe0, 0x6e, 0x17, 0xb6, 0x5, 0x64, 0xe5 );
EXTERN_GUID( WMProfile_V80_288Video,
             0x3df678d9,
             0x1352,
             0x4186,
             0xbb, 0xf8, 0x74, 0xf0, 0xc1, 0x9b, 0x6a, 0xe2 );
EXTERN_GUID( WMProfile_V80_56Video,
             0x254e8a96,
             0x2612,
             0x405c,
             0x80, 0x39, 0xf0, 0xbf, 0x72, 0x5c, 0xed, 0x7d );
EXTERN_GUID( WMProfile_V80_100Video,
             0xa2e300b4,
             0xc2d4,
             0x4fc0,
             0xb5, 0xdd, 0xec, 0xbd, 0x94, 0x8d, 0xc0, 0xdf );
EXTERN_GUID( WMProfile_V80_256Video,
             0xbbc75500,
             0x33d2,
             0x4466,
             0xb8, 0x6b, 0x12, 0x2b, 0x20, 0x1c, 0xc9, 0xae );
EXTERN_GUID( WMProfile_V80_384Video,
             0x29b00c2b,
             0x9a9,
             0x48bd,
             0xad, 0x9, 0xcd, 0xae, 0x11, 0x7d, 0x1d, 0xa7 );
EXTERN_GUID( WMProfile_V80_768Video,
             0x74d01102,
             0xe71a,
             0x4820,
             0x8f, 0xd, 0x13, 0xd2, 0xec, 0x1e, 0x48, 0x72 );
EXTERN_GUID( WMProfile_V80_700NTSCVideo,
             0xc8c2985f,
             0xe5d9,
             0x4538,
             0x9e, 0x23, 0x9b, 0x21, 0xbf, 0x78, 0xf7, 0x45 );
EXTERN_GUID( WMProfile_V80_1400NTSCVideo,
             0x931d1bee,
             0x617a,
             0x4bcd,
             0x99, 0x5, 0xcc, 0xd0, 0x78, 0x66, 0x83, 0xee );
EXTERN_GUID( WMProfile_V80_384PALVideo,
             0x9227c692,
             0xae62,
             0x4f72,
             0xa7, 0xea, 0x73, 0x60, 0x62, 0xd0, 0xe2, 0x1e );
EXTERN_GUID( WMProfile_V80_700PALVideo,
             0xec298949,
             0x639b,
             0x45e2,
             0x96, 0xfd, 0x4a, 0xb3, 0x2d, 0x59, 0x19, 0xc2 );
EXTERN_GUID( WMProfile_V80_288MonoAudio,
             0x7ea3126d,
             0xe1ba,
             0x4716,
             0x89, 0xaf, 0xf6, 0x5c, 0xee, 0xc, 0xc, 0x67 );
EXTERN_GUID( WMProfile_V80_288StereoAudio,
             0x7e4cab5c,
             0x35dc,
             0x45bb,
             0xa7, 0xc0, 0x19, 0xb2, 0x80, 0x70, 0xd0, 0xcc );
EXTERN_GUID( WMProfile_V80_32StereoAudio,
             0x60907f9f,
             0xb352,
             0x47e5,
             0xb2, 0x10, 0xe, 0xf1, 0xf4, 0x7e, 0x9f, 0x9d );
EXTERN_GUID( WMProfile_V80_48StereoAudio,
             0x5ee06be5,
             0x492b,
             0x480a,
             0x8a, 0x8f, 0x12, 0xf3, 0x73, 0xec, 0xf9, 0xd4 );
EXTERN_GUID( WMProfile_V80_64StereoAudio,
             0x9bb5bc4,
             0x3176,
             0x457f,
             0x8d, 0xd6, 0x3c, 0xd9, 0x19, 0x12, 0x3e, 0x2d );
EXTERN_GUID( WMProfile_V80_96StereoAudio,
             0x1fc81930,
             0x61f2,
             0x436f,
             0x9d, 0x33, 0x34, 0x9f, 0x2a, 0x1c, 0xf, 0x10 );
EXTERN_GUID( WMProfile_V80_128StereoAudio,
             0x407b9450,
             0x8bdc,
             0x4ee5,
             0x88, 0xb8, 0x6f, 0x52, 0x7b, 0xd9, 0x41, 0xf2 );
EXTERN_GUID( WMProfile_V80_288VideoOnly,
             0x8c45b4c7,
             0x4aeb,
             0x4f78,
             0xa5, 0xec, 0x88, 0x42, 0xb, 0x9d, 0xad, 0xef );
EXTERN_GUID( WMProfile_V80_56VideoOnly,
             0x6e2a6955,
             0x81df,
             0x4943,
             0xba, 0x50, 0x68, 0xa9, 0x86, 0xa7, 0x8, 0xf6 );
EXTERN_GUID( WMProfile_V80_FAIRVBRVideo,
             0x3510a862,
             0x5850,
             0x4886,
             0x83, 0x5f, 0xd7, 0x8e, 0xc6, 0xa6, 0x40, 0x42 );
EXTERN_GUID( WMProfile_V80_HIGHVBRVideo,
             0xf10d9d3,
             0x3b04,
             0x4fb0,
             0xa3, 0xd3, 0x88, 0xd4, 0xac, 0x85, 0x4a, 0xcc );
EXTERN_GUID( WMProfile_V80_BESTVBRVideo,
             0x48439ba,
             0x309c,
             0x440e,
             0x9c, 0xb4, 0x3d, 0xcc, 0xa3, 0x75, 0x64, 0x23 );
#endif
#pragma endregion
