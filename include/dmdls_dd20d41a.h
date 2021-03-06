#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "dls1.h"
typedef long PCENT;
typedef long GCENT;
typedef long TCENT;
typedef long PERCENT;
typedef LONGLONG REFERENCE_TIME;
typedef REFERENCE_TIME *LPREFERENCE_TIME;
typedef long MUSIC_TIME;
                ((DWORD)(BYTE)(ch0) | ((DWORD)(BYTE)(ch1) << 8) | \
                ((DWORD)(BYTE)(ch2) << 16) | ((DWORD)(BYTE)(ch3) << 24 ))
typedef DWORD FOURCC;
typedef struct _DMUS_DOWNLOADINFO
{
    DWORD dwDLType;
    DWORD dwDLId;
    DWORD dwNumOffsetTableEntries;
    DWORD cbSize;
} DMUS_DOWNLOADINFO;
typedef struct _DMUS_OFFSETTABLE
{
    ULONG ulOffsetTable[DMUS_DEFAULT_SIZE_OFFSETTABLE];
} DMUS_OFFSETTABLE;
typedef struct _DMUS_INSTRUMENT
{
    ULONG ulPatch;
    ULONG ulFirstRegionIdx;
    ULONG ulGlobalArtIdx;
    ULONG ulFirstExtCkIdx;
    ULONG ulCopyrightIdx;
    ULONG ulFlags;
} DMUS_INSTRUMENT;
typedef struct _DMUS_REGION
{
    RGNRANGE RangeKey;
    RGNRANGE RangeVelocity;
    USHORT fusOptions;
    USHORT usKeyGroup;
    ULONG ulRegionArtIdx;
    ULONG ulNextRegionIdx;
    ULONG ulFirstExtCkIdx;
    WAVELINK WaveLink;
    WSMPL WSMP;
    WLOOP WLOOP[1];
} DMUS_REGION;
typedef struct _DMUS_LFOPARAMS
{
    PCENT pcFrequency;
    TCENT tcDelay;
    GCENT gcVolumeScale;
    PCENT pcPitchScale;
    GCENT gcMWToVolume;
    PCENT pcMWToPitch;
} DMUS_LFOPARAMS;
typedef struct _DMUS_VEGPARAMS
{
    TCENT tcAttack;
    TCENT tcDecay;
    PERCENT ptSustain;
    TCENT tcRelease;
    TCENT tcVel2Attack;
    TCENT tcKey2Decay;
} DMUS_VEGPARAMS;
typedef struct _DMUS_PEGPARAMS
{
    TCENT tcAttack;
    TCENT tcDecay;
    PERCENT ptSustain;
    TCENT tcRelease;
    TCENT tcVel2Attack;
    TCENT tcKey2Decay;
    PCENT pcRange;
} DMUS_PEGPARAMS;
typedef struct _DMUS_MSCPARAMS
{
    PERCENT ptDefaultPan;
} DMUS_MSCPARAMS;
typedef struct _DMUS_ARTICPARAMS
{
    DMUS_LFOPARAMS LFO;
    DMUS_VEGPARAMS VolEG;
    DMUS_PEGPARAMS PitchEG;
    DMUS_MSCPARAMS Misc;
} DMUS_ARTICPARAMS;
typedef struct _DMUS_ARTICULATION
{
    ULONG ulArt1Idx;
    ULONG ulFirstExtCkIdx;
} DMUS_ARTICULATION;
typedef struct _DMUS_ARTICULATION2
{
    ULONG ulArtIdx;
    ULONG ulFirstExtCkIdx;
    ULONG ulNextArtIdx;
} DMUS_ARTICULATION2;
typedef struct _DMUS_EXTENSIONCHUNK
{
    ULONG cbSize;
    ULONG ulNextExtCkIdx;
    FOURCC ExtCkID;
    BYTE byExtCk[DMUS_MIN_DATA_SIZE];
} DMUS_EXTENSIONCHUNK;
typedef struct _DMUS_COPYRIGHT
{
    ULONG cbSize;
    BYTE byCopyright[DMUS_MIN_DATA_SIZE];
} DMUS_COPYRIGHT;
typedef struct _DMUS_WAVEDATA
{
    ULONG cbSize;
    BYTE byData[DMUS_MIN_DATA_SIZE];
} DMUS_WAVEDATA;
typedef struct _DMUS_WAVE
{
    ULONG ulFirstExtCkIdx;
    ULONG ulCopyrightIdx;
    ULONG ulWaveDataIdx;
    WAVEFORMATEX WaveformatEx;
} DMUS_WAVE;
typedef struct _DMUS_NOTERANGE *LPDMUS_NOTERANGE;
typedef struct _DMUS_NOTERANGE
{
    DWORD dwLowNote;
    DWORD dwHighNote;
} DMUS_NOTERANGE;
typedef struct _DMUS_WAVEARTDL
{
    ULONG ulDownloadIdIdx;
    ULONG ulBus;
    ULONG ulBuffers;
    ULONG ulMasterDLId;
    USHORT usOptions;
} DMUS_WAVEARTDL,
    *LPDMUS_WAVEARTDL;
typedef struct _DMUS_WAVEDL
{
    ULONG cbWaveData;
} DMUS_WAVEDL,
    *LPDMUS_WAVEDL;
#endif
#pragma endregion
