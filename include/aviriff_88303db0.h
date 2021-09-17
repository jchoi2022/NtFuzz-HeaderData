#pragma warning(disable: 4097 4511 4512 4514 4705)
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
  #define NUMELMS(aa) (sizeof(aa)/sizeof((aa)[0]))
#include <pshpack2.h>
                  (((DWORD)(ch4) & 0xFF00) << 8) | \
                  (((DWORD)(ch4) & 0xFF0000) >> 8) | \
                  (((DWORD)(ch4) & 0xFF000000) >> 24))
typedef struct _riffchunk {
   FOURCC fcc;
   DWORD cb;
   } RIFFCHUNK, * LPRIFFCHUNK;
typedef struct _rifflist {
   FOURCC fcc;
   DWORD cb;
   FOURCC fccListType;
   } RIFFLIST, * LPRIFFLIST;
                          + sizeof(RIFFCHUNK) \
                          + RIFFROUND(((LPRIFFCHUNK)pChunk)->cb))
typedef struct _avimainheader {
    FOURCC fcc;
    DWORD cb;
    DWORD dwMicroSecPerFrame;
    DWORD dwMaxBytesPerSec;
    DWORD dwPaddingGranularity;
    DWORD dwFlags;
    #define AVIF_HASINDEX 0x00000010
    #define AVIF_MUSTUSEINDEX 0x00000020
    #define AVIF_ISINTERLEAVED 0x00000100
    #define AVIF_TRUSTCKTYPE 0x00000800
    #define AVIF_WASCAPTUREFILE 0x00010000
    #define AVIF_COPYRIGHTED 0x00020000
    DWORD dwTotalFrames;
    DWORD dwInitialFrames;
    DWORD dwStreams;
    DWORD dwSuggestedBufferSize;
    DWORD dwWidth;
    DWORD dwHeight;
    DWORD dwReserved[4];
    } AVIMAINHEADER;
typedef struct _aviextheader {
   FOURCC fcc;
   DWORD cb;
   DWORD dwGrandFrames;
   DWORD dwFuture[61];
   } AVIEXTHEADER;
typedef struct _avistreamheader {
   FOURCC fcc;
   DWORD cb;
   FOURCC fccType;
   #define streamtypeVIDEO FCC('vids')
   #define streamtypeAUDIO FCC('auds')
   #define streamtypeMIDI FCC('mids')
   #define streamtypeTEXT FCC('txts')
   FOURCC fccHandler;
   DWORD dwFlags;
   #define AVISF_DISABLED 0x00000001
   #define AVISF_VIDEO_PALCHANGES 0x00010000
   WORD wPriority;
   WORD wLanguage;
   DWORD dwInitialFrames;
   DWORD dwScale;
   DWORD dwRate;
   DWORD dwStart;
   DWORD dwLength;
   DWORD dwSuggestedBufferSize;
   DWORD dwQuality;
   DWORD dwSampleSize;
   struct {
      short int left;
      short int top;
      short int right;
      short int bottom;
      } rcFrame;
   } AVISTREAMHEADER;
#pragma warning(disable:4200)
typedef struct _avioldindex {
   FOURCC fcc;
   DWORD cb;
   struct _avioldindex_entry {
      DWORD dwChunkId;
      DWORD dwFlags;
      #define AVIIF_LIST 0x00000001
      #define AVIIF_KEYFRAME 0x00000010
      #define AVIIF_NO_TIME 0x00000100
      #define AVIIF_COMPRESSOR 0x0FFF0000
      DWORD dwOffset;
      DWORD dwSize;
      } aIndex[];
   } AVIOLDINDEX;
typedef union _timecode {
   struct {
      WORD wFrameRate;
      WORD wFrameFract;
      LONG cFrames;
      };
   DWORDLONG qw;
   } TIMECODE;
typedef struct tagTIMECODE_SAMPLE {
    LONGLONG qwTick;
    TIMECODE timecode;
    DWORD dwUser;
    DWORD dwFlags;
} TIMECODE_SAMPLE;
typedef struct _timecodedata {
   TIMECODE time;
   DWORD dwSMPTEflags;
   DWORD dwUser;
   } TIMECODEDATA;
typedef struct _avimetaindex {
   FOURCC fcc;
   UINT cb;
   WORD wLongsPerEntry;
   BYTE bIndexSubType;
   BYTE bIndexType;
   DWORD nEntriesInUse;
   DWORD dwChunkId;
   DWORD dwReserved[3];
   DWORD adwIndex[];
   } AVIMETAINDEX;
typedef struct _avisuperindex {
   FOURCC fcc;
   UINT cb;
   WORD wLongsPerEntry;
   BYTE bIndexSubType;
   BYTE bIndexType;
   DWORD nEntriesInUse;
   DWORD dwChunkId;
   DWORD dwReserved[3];
   struct _avisuperindex_entry {
      DWORDLONG qwOffset;
      DWORD dwSize;
      DWORD dwDuration;
      } aIndex[NUMINDEX(4)];
   } AVISUPERINDEX;
typedef struct _avistdindex_entry {
   DWORD dwOffset;
   DWORD dwSize;
   } AVISTDINDEX_ENTRY;
typedef struct _avistdindex {
   FOURCC fcc;
   UINT cb;
   WORD wLongsPerEntry;
   BYTE bIndexSubType;
   BYTE bIndexType;
   DWORD nEntriesInUse;
   DWORD dwChunkId;
   DWORDLONG qwBaseOffset;
   DWORD dwReserved_3;
   AVISTDINDEX_ENTRY aIndex[NUMINDEX(2)];
   } AVISTDINDEX;
typedef struct _avitimedindex_entry {
   DWORD dwOffset;
   DWORD dwSize;
   DWORD dwDuration;
   } AVITIMEDINDEX_ENTRY;
typedef struct _avitimedindex {
   FOURCC fcc;
   UINT cb;
   WORD wLongsPerEntry;
   BYTE bIndexSubType;
   BYTE bIndexType;
   DWORD nEntriesInUse;
   DWORD dwChunkId;
   DWORDLONG qwBaseOffset;
   DWORD dwReserved_3;
   AVITIMEDINDEX_ENTRY aIndex[NUMINDEX(3)];
   DWORD adwTrailingFill[NUMINDEXFILL(3)];
   } AVITIMEDINDEX;
typedef struct _avitimecodeindex {
   FOURCC fcc;
   UINT cb;
   WORD wLongsPerEntry;
   BYTE bIndexSubType;
   BYTE bIndexType;
   DWORD nEntriesInUse;
   DWORD dwChunkId;
   DWORD dwReserved[3];
   TIMECODEDATA aIndex[NUMINDEX(sizeof(TIMECODEDATA)/sizeof(LONG))];
   } AVITIMECODEINDEX;
typedef struct _avitcdlindex_entry {
    DWORD dwTick;
    TIMECODE time;
    DWORD dwSMPTEflags;
    DWORD dwUser;
    TCHAR szReelId[12];
    } AVITCDLINDEX_ENTRY;
typedef struct _avitcdlindex {
   FOURCC fcc;
   UINT cb;
   WORD wLongsPerEntry;
   BYTE bIndexSubType;
   BYTE bIndexType;
   DWORD nEntriesInUse;
   DWORD dwChunkId;
   DWORD dwReserved[3];
   AVITCDLINDEX_ENTRY aIndex[NUMINDEX(7)];
   DWORD adwTrailingFill[NUMINDEXFILL(7)];
   } AVITCDLINDEX;
typedef struct _avifieldindex_chunk {
   FOURCC fcc;
   DWORD cb;
   WORD wLongsPerEntry;
   BYTE bIndexSubType;
   BYTE bIndexType;
   DWORD nEntriesInUse;
   DWORD dwChunkId;
   DWORDLONG qwBaseOffset;
   DWORD dwReserved3;
   struct _avifieldindex_entry {
      DWORD dwOffset;
      DWORD dwSize;
      DWORD dwOffsetField2;
   } aIndex[ ];
} AVIFIELDINDEX, * PAVIFIELDINDEX;
#include <poppack.h>
#endif
#pragma endregion
