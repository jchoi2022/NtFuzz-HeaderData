#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
DWORD FAR PASCAL VideoForWindowsVersion(void);
LONG VFWAPI InitVFW(void);
LONG VFWAPI TermVFW(void);
}
    #include <mmsystem.h>
extern "C" {
  ( (DWORD)(BYTE)(ch0) | ( (DWORD)(BYTE)(ch1) << 8 ) | \
  ( (DWORD)(BYTE)(ch2) << 16 ) | ( (DWORD)(BYTE)(ch3) << 24 ) )
    #define mmioFOURCC MKFOURCC
DECLARE_HANDLE(HIC);
typedef struct {
    DWORD dwSize;
    DWORD fccType;
    DWORD fccHandler;
    DWORD dwVersion;
    DWORD dwFlags;
    LRESULT dwError;
    LPVOID pV1Reserved;
    LPVOID pV2Reserved;
    DWORD dnDevNode;
} ICOPEN;
typedef struct {
    DWORD dwSize;
    DWORD fccType;
    DWORD fccHandler;
    DWORD dwFlags;
    DWORD dwVersion;
    DWORD dwVersionICM;
    WCHAR szName[16];
    WCHAR szDescription[128];
    WCHAR szDriver[128];
} ICINFO;
typedef struct {
    DWORD dwFlags;
    LPBITMAPINFOHEADER lpbiOutput;
    _Field_size_bytes_(lpbiOutput->biSizeImage) LPVOID lpOutput;
    LPBITMAPINFOHEADER lpbiInput;
    _Field_size_bytes_(lpbiInput->biSizeImage) LPVOID lpInput;
    LPDWORD lpckid;
    LPDWORD lpdwFlags;
    LONG lFrameNum;
    DWORD dwFrameSize;
    DWORD dwQuality;
    LPBITMAPINFOHEADER lpbiPrev;
    _Field_size_bytes_(lpbiPrev->biSizeImage) LPVOID lpPrev;
} ICCOMPRESS;
typedef struct {
    DWORD dwFlags;
    LPBITMAPINFOHEADER lpbiOutput;
    LPARAM lOutput;
    LPBITMAPINFOHEADER lpbiInput;
    LPARAM lInput;
    LONG lStartFrame;
    LONG lFrameCount;
    LONG lQuality;
    LONG lDataRate;
    LONG lKeyRate;
    DWORD dwRate;
    DWORD dwScale;
    DWORD dwOverheadPerFrame;
    DWORD dwReserved2;
    LONG (CALLBACK *GetData)(_In_ LPARAM lInput, _In_ LONG lFrame, _Out_writes_bytes_(len) LPVOID lpBits, _In_ LONG len);
    LONG (CALLBACK *PutData)(_In_ LPARAM lOutput, _In_ LONG lFrame, _In_reads_bytes_(len) LPVOID lpBits, _In_ LONG len);
} ICCOMPRESSFRAMES;
typedef struct {
    DWORD dwFlags;
    LPARAM lParam;
    #define ICSTATUS_START 0
    #define ICSTATUS_STATUS 1
    #define ICSTATUS_END 2
    #define ICSTATUS_ERROR 3
    #define ICSTATUS_YIELD 4
    LONG (CALLBACK *Status) (_In_ LPARAM lParam, _In_ UINT message, _In_ LONG l);
} ICSETSTATUSPROC;
typedef struct {
    DWORD dwFlags;
    LPBITMAPINFOHEADER lpbiInput;
    _Field_size_bytes_(lpbiInput->biSizeImage)
    LPVOID lpInput;
    LPBITMAPINFOHEADER lpbiOutput;
    _Field_size_bytes_(lpbiOutput->biSizeImage)
    LPVOID lpOutput;
    DWORD ckid;
} ICDECOMPRESS;
typedef struct {
    DWORD dwFlags;
    LPBITMAPINFOHEADER lpbiSrc;
    LPVOID lpSrc;
    LPBITMAPINFOHEADER lpbiDst;
    LPVOID lpDst;
    int xDst;
    int yDst;
    int dxDst;
    int dyDst;
    int xSrc;
    int ySrc;
    int dxSrc;
    int dySrc;
} ICDECOMPRESSEX;
typedef struct {
    DWORD dwFlags;
    HPALETTE hpal;
    HWND hwnd;
    HDC hdc;
    int xDst;
    int yDst;
    int dxDst;
    int dyDst;
    LPBITMAPINFOHEADER lpbi;
    int xSrc;
    int ySrc;
    int dxSrc;
    int dySrc;
    DWORD dwRate;
    DWORD dwScale;
} ICDRAWBEGIN;
typedef struct {
    DWORD dwFlags;
    LPVOID lpFormat;
    LPVOID lpData;
    DWORD cbData;
    LONG lTime;
} ICDRAW;
typedef struct {
    LPBITMAPINFOHEADER lpbiIn;
    LPBITMAPINFOHEADER lpbiSuggest;
    int dxSrc;
    int dySrc;
    int dxDst;
    int dyDst;
    HIC hicDecompressor;
} ICDRAWSUGGEST;
typedef struct {
    DWORD dwFlags;
    int iStart;
    int iLen;
    LPPALETTEENTRY lppe;
} ICPALETTE;
BOOL
VFWAPI
ICInfo(
    _In_ DWORD fccType,
    _In_ DWORD fccHandler,
    _Out_ ICINFO FAR * lpicinfo
    );
BOOL
VFWAPI
ICInstall(
    _In_ DWORD fccType,
    _In_ DWORD fccHandler,
    _In_ LPARAM lParam,
    _In_ LPSTR szDesc,
    _In_ UINT wFlags
    );
BOOL
VFWAPI
ICRemove(
    _In_ DWORD fccType,
    _In_ DWORD fccHandler,
    _In_ UINT wFlags
    );
_Success_(return != 0)
LRESULT
VFWAPI
ICGetInfo(
    _In_ HIC hic,
    _Out_writes_bytes_to_(cb,return) ICINFO FAR *picinfo,
    _In_ DWORD cb
    );
HIC
VFWAPI
ICOpen(
    _In_ DWORD fccType,
    _In_ DWORD fccHandler,
    _In_ UINT wMode
    );
HIC
VFWAPI
ICOpenFunction(
    _In_ DWORD fccType,
    _In_ DWORD fccHandler,
    _In_ UINT wMode,
    _In_ FARPROC lpfnHandler
    );
LRESULT
VFWAPI
ICClose(
    _In_ HIC hic
    );
LRESULT
VFWAPI
ICSendMessage(
    _In_ HIC hic,
    _In_ UINT msg,
    _In_ DWORD_PTR dw1,
    _In_ DWORD_PTR dw2
    );
LRESULT VFWAPIV ICMessage(HIC hic, UINT msg, UINT cb, ...);
    (ICSendMessage(hic, ICM_ABOUT, (DWORD_PTR) -1, ICMF_ABOUT_QUERY) == ICERR_OK)
    ICSendMessage(hic, ICM_ABOUT, (DWORD_PTR)(UINT_PTR)(hwnd), 0)
    (ICSendMessage(hic, ICM_CONFIGURE, (DWORD_PTR) -1, ICMF_CONFIGURE_QUERY) == ICERR_OK)
    ICSendMessage(hic, ICM_CONFIGURE, (DWORD_PTR)(UINT_PTR)(hwnd), 0)
    ICSendMessage(hic, ICM_GETSTATE, (DWORD_PTR)(LPVOID)(pv), (DWORD_PTR)(cb))
    ICSendMessage(hic, ICM_SETSTATE, (DWORD_PTR)(LPVOID)(pv), (DWORD_PTR)(cb))
    (DWORD) ICGetState(hic, NULL, 0)
static DWORD dwICValue;
    (ICSendMessage(hic, ICM_GETDEFAULTQUALITY, (DWORD_PTR)(LPVOID)&dwICValue, sizeof(DWORD)), dwICValue)
    (ICSendMessage(hic, ICM_GETDEFAULTKEYFRAMERATE, (DWORD_PTR)(LPVOID)&dwICValue, sizeof(DWORD)), dwICValue)
    ICSendMessage(hic, ICM_DRAW_WINDOW, (DWORD_PTR)(LPVOID)(prc), sizeof(RECT))
DWORD
VFWAPIV
ICCompress(
    _In_ HIC hic,
    _In_ DWORD dwFlags,
    _In_ LPBITMAPINFOHEADER lpbiOutput,
    _Out_writes_bytes_(lpbiOutput->biSizeImage) LPVOID lpData,
    _In_ LPBITMAPINFOHEADER lpbiInput,
    _In_reads_bytes_(lpbiInput->biSizeImage) LPVOID lpBits,
    _Out_opt_ LPDWORD lpckid,
    _Out_opt_ LPDWORD lpdwFlags,
    _In_ LONG lFrameNum,
    _In_ DWORD dwFrameSize,
    _In_ DWORD dwQuality,
    _In_opt_ LPBITMAPINFOHEADER lpbiPrev,
    _In_reads_bytes_opt_(lpbiPrev->biSizeImage) LPVOID lpPrev
    );
    ICSendMessage(hic, ICM_COMPRESS_BEGIN, (DWORD_PTR)(LPVOID)(lpbiInput), (DWORD_PTR)(LPVOID)(lpbiOutput))
    ICSendMessage(hic, ICM_COMPRESS_QUERY, (DWORD_PTR)(LPVOID)(lpbiInput), (DWORD_PTR)(LPVOID)(lpbiOutput))
    ICSendMessage(hic, ICM_COMPRESS_GET_FORMAT, (DWORD_PTR)(LPVOID)(lpbiInput), (DWORD_PTR)(LPVOID)(lpbiOutput))
    (DWORD) ICCompressGetFormat(hic, lpbi, NULL)
    (DWORD) ICSendMessage(hic, ICM_COMPRESS_GET_SIZE, (DWORD_PTR)(LPVOID)(lpbiInput), (DWORD_PTR)(LPVOID)(lpbiOutput))
    ICSendMessage(hic, ICM_COMPRESS_END, 0, 0)
DWORD
VFWAPIV
ICDecompress(
    _In_ HIC hic,
    _In_ DWORD dwFlags,
    _In_ LPBITMAPINFOHEADER lpbiFormat,
    _In_reads_bytes_(lpbiFormat->biSizeImage) LPVOID lpData,
    _In_ LPBITMAPINFOHEADER lpbi,
    _Out_writes_bytes_(lpbi->biSizeImage) LPVOID lpBits
    );
    ICSendMessage(hic, ICM_DECOMPRESS_BEGIN, (DWORD_PTR)(LPVOID)(lpbiInput), (DWORD_PTR)(LPVOID)(lpbiOutput))
    ICSendMessage(hic, ICM_DECOMPRESS_QUERY, (DWORD_PTR)(LPVOID)(lpbiInput), (DWORD_PTR)(LPVOID)(lpbiOutput))
    ((LONG) ICSendMessage(hic, ICM_DECOMPRESS_GET_FORMAT, (DWORD_PTR)(LPVOID)(lpbiInput), (DWORD_PTR)(LPVOID)(lpbiOutput)))
    ICDecompressGetFormat(hic, lpbi, NULL)
    ICSendMessage(hic, ICM_DECOMPRESS_GET_PALETTE, (DWORD_PTR)(LPVOID)(lpbiInput), (DWORD_PTR)(LPVOID)(lpbiOutput))
    ICSendMessage(hic, ICM_DECOMPRESS_SET_PALETTE, (DWORD_PTR)(LPVOID)(lpbiPalette), 0)
    ICSendMessage(hic, ICM_DECOMPRESS_END, 0, 0)
static __inline LRESULT VFWAPI_INLINE
ICDecompressEx(
            _In_ HIC hic,
            _In_ DWORD dwFlags,
            _In_ LPBITMAPINFOHEADER lpbiSrc,
            _In_reads_bytes_(lpbiSrc->biSizeImage) LPVOID lpSrc,
            _In_ int xSrc,
            _In_ int ySrc,
            _In_ int dxSrc,
            _In_ int dySrc,
            _In_ LPBITMAPINFOHEADER lpbiDst,
            _Out_writes_bytes_(lpbiDst->biSizeImage) LPVOID lpDst,
            _In_ int xDst,
            _In_ int yDst,
            _In_ int dxDst,
            _In_ int dyDst)
{
    ICDECOMPRESSEX ic;
    ic.dwFlags = dwFlags;
    ic.lpbiSrc = lpbiSrc;
    ic.lpSrc = lpSrc;
    ic.xSrc = xSrc;
    ic.ySrc = ySrc;
    ic.dxSrc = dxSrc;
    ic.dySrc = dySrc;
    ic.lpbiDst = lpbiDst;
    ic.lpDst = lpDst;
    ic.xDst = xDst;
    ic.yDst = yDst;
    ic.dxDst = dxDst;
    ic.dyDst = dyDst;
    return ICSendMessage(hic, ICM_DECOMPRESSEX, (DWORD_PTR)&ic, sizeof(ic));
}
static __inline LRESULT VFWAPI_INLINE
ICDecompressExBegin(
            _In_ HIC hic,
            _In_ DWORD dwFlags,
            _In_ LPBITMAPINFOHEADER lpbiSrc,
            _In_opt_ LPVOID lpSrc,
            _In_ int xSrc,
            _In_ int ySrc,
            _In_ int dxSrc,
            _In_ int dySrc,
            _In_ LPBITMAPINFOHEADER lpbiDst,
            _Out_opt_ LPVOID lpDst,
            _In_ int xDst,
            _In_ int yDst,
            _In_ int dxDst,
            _In_ int dyDst)
{
    ICDECOMPRESSEX ic;
    ic.dwFlags = dwFlags;
    ic.lpbiSrc = lpbiSrc;
    ic.lpSrc = lpSrc;
    ic.xSrc = xSrc;
    ic.ySrc = ySrc;
    ic.dxSrc = dxSrc;
    ic.dySrc = dySrc;
    ic.lpbiDst = lpbiDst;
    ic.lpDst = lpDst;
    ic.xDst = xDst;
    ic.yDst = yDst;
    ic.dxDst = dxDst;
    ic.dyDst = dyDst;
    return ICSendMessage(hic, ICM_DECOMPRESSEX_BEGIN, (DWORD_PTR)&ic, sizeof(ic));
}
static __inline LRESULT VFWAPI_INLINE
ICDecompressExQuery(
            _In_ HIC hic,
            _In_ DWORD dwFlags,
            _In_ LPBITMAPINFOHEADER lpbiSrc,
            _Reserved_ LPVOID lpSrc,
            _In_ int xSrc,
            _In_ int ySrc,
            _In_ int dxSrc,
            _In_ int dySrc,
            _In_opt_ LPBITMAPINFOHEADER lpbiDst,
            _Out_opt_ LPVOID lpDst,
            _In_ int xDst,
            _In_ int yDst,
            _In_ int dxDst,
            _In_ int dyDst)
{
    ICDECOMPRESSEX ic;
    ic.dwFlags = dwFlags;
    ic.lpbiSrc = lpbiSrc;
    ic.lpSrc = lpSrc;
    ic.xSrc = xSrc;
    ic.ySrc = ySrc;
    ic.dxSrc = dxSrc;
    ic.dySrc = dySrc;
    ic.lpbiDst = lpbiDst;
    ic.lpDst = lpDst;
    ic.xDst = xDst;
    ic.yDst = yDst;
    ic.dxDst = dxDst;
    ic.dyDst = dyDst;
    return ICSendMessage(hic, ICM_DECOMPRESSEX_QUERY, (DWORD_PTR)&ic, sizeof(ic));
}
    ICSendMessage(hic, ICM_DECOMPRESSEX_END, 0, 0)
DWORD
VFWAPIV
ICDrawBegin(
    _In_ HIC hic,
    _In_ DWORD dwFlags,
    _In_opt_ HPALETTE hpal,
    _In_opt_ HWND hwnd,
    _In_opt_ HDC hdc,
    _In_ int xDst,
    _In_ int yDst,
    _In_ int dxDst,
    _In_ int dyDst,
    _In_ LPBITMAPINFOHEADER lpbi,
    _In_ int xSrc,
    _In_ int ySrc,
    _In_ int dxSrc,
    _In_ int dySrc,
    _In_ DWORD dwRate,
    _In_ DWORD dwScale
    );
DWORD
VFWAPIV
ICDraw(
    _In_ HIC hic,
    _In_ DWORD dwFlags,
    _In_ LPVOID lpFormat,
    _In_reads_bytes_opt_(cbData) LPVOID lpData,
    _In_ DWORD cbData,
    _In_ LONG lTime
    );
static __inline LRESULT VFWAPI_INLINE
ICDrawSuggestFormat(
            _In_ HIC hic,
            _In_ LPBITMAPINFOHEADER lpbiIn,
            _Out_ LPBITMAPINFOHEADER lpbiOut,
            _In_ int dxSrc,
            _In_ int dySrc,
            _In_ int dxDst,
            _In_ int dyDst,
            _In_ HIC hicDecomp)
{
    ICDRAWSUGGEST ic;
    ic.lpbiIn = lpbiIn;
    ic.lpbiSuggest = lpbiOut;
    ic.dxSrc = dxSrc;
    ic.dySrc = dySrc;
    ic.dxDst = dxDst;
    ic.dyDst = dyDst;
    ic.hicDecompressor = hicDecomp;
    return ICSendMessage(hic, ICM_DRAW_SUGGESTFORMAT, (DWORD_PTR)&ic, sizeof(ic));
}
    ICSendMessage(hic, ICM_DRAW_QUERY, (DWORD_PTR)(LPVOID)(lpbiInput), 0L)
    ICSendMessage(hic, ICM_DRAW_CHANGEPALETTE, (DWORD_PTR)(LPVOID)(lpbiInput), 0L)
    ICSendMessage(hic, ICM_GETBUFFERSWANTED, (DWORD_PTR)(LPVOID)(lpdwBuffers), 0)
    ICSendMessage(hic, ICM_DRAW_END, 0, 0)
    ICSendMessage(hic, ICM_DRAW_START, 0, 0)
    ICSendMessage(hic, ICM_DRAW_START_PLAY, (DWORD_PTR)(lFrom), (DWORD_PTR)(lTo))
    ICSendMessage(hic, ICM_DRAW_STOP, 0, 0)
    ICSendMessage(hic, ICM_DRAW_STOP_PLAY, 0, 0)
    ICSendMessage(hic, ICM_DRAW_GETTIME, (DWORD_PTR)(LPVOID)(lplTime), 0)
    ICSendMessage(hic, ICM_DRAW_SETTIME, (DWORD_PTR)lTime, 0)
    ICSendMessage(hic, ICM_DRAW_REALIZE, (DWORD_PTR)(UINT_PTR)(HDC)(hdc), (DWORD_PTR)(BOOL)(fBackground))
    ICSendMessage(hic, ICM_DRAW_FLUSH, 0, 0)
    ICSendMessage(hic, ICM_DRAW_RENDERBUFFER, 0, 0)
static __inline LRESULT VFWAPI_INLINE
ICSetStatusProc(
            _In_ HIC hic,
            _In_ DWORD dwFlags,
            _In_ LRESULT lParam,
            _In_ LONG (CALLBACK *fpfnStatus)(_In_ LPARAM, _In_ UINT, _In_ LONG) )
{
    ICSETSTATUSPROC ic;
    ic.dwFlags = dwFlags;
    ic.lParam = lParam;
    ic.Status = fpfnStatus;
    return ICSendMessage(hic, ICM_SET_STATUS_PROC, (DWORD_PTR)&ic, sizeof(ic));
}
    ICLocate(fccType, fccHandler, lpbiIn, lpbiOut, ICMODE_DECOMPRESS)
    ICLocate(fccType, fccHandler, lpbiIn, NULL, ICMODE_DRAW)
HIC
VFWAPI
ICLocate(
    _In_ DWORD fccType,
    _In_ DWORD fccHandler,
    _In_ LPBITMAPINFOHEADER lpbiIn,
    _In_opt_ LPBITMAPINFOHEADER lpbiOut,
    _In_ WORD wFlags
    );
HIC
VFWAPI
ICGetDisplayFormat(
    _In_opt_ HIC hic,
    _In_ LPBITMAPINFOHEADER lpbiIn,
    _Out_ LPBITMAPINFOHEADER lpbiOut,
    _In_ int BitDepth,
    _In_ int dx,
    _In_ int dy
    );
HANDLE
VFWAPI
ICImageCompress(
    _In_ HIC hic,
    _In_ UINT uiFlags,
    _In_ LPBITMAPINFO lpbiIn,
    _In_ LPVOID lpBits,
    _In_opt_ LPBITMAPINFO lpbiOut,
    _In_ LONG lQuality,
    _Inout_opt_ LONG FAR * plSize
    );
HANDLE
VFWAPI
ICImageDecompress(
    _In_opt_ HIC hic,
    _In_ UINT uiFlags,
    _In_ LPBITMAPINFO lpbiIn,
    _In_ LPVOID lpBits,
    _In_opt_ LPBITMAPINFO lpbiOut
    );
typedef struct {
    LONG cbSize;
    DWORD dwFlags;
    HIC hic;
    DWORD fccType;
    DWORD fccHandler;
    LPBITMAPINFO lpbiIn;
    LPBITMAPINFO lpbiOut;
    LPVOID lpBitsOut;
    LPVOID lpBitsPrev;
    LONG lFrame;
    LONG lKey;
    LONG lDataRate;
    LONG lQ;
    LONG lKeyCount;
    LPVOID lpState;
    LONG cbState;
} COMPVARS, FAR *PCOMPVARS;
BOOL
VFWAPI
ICCompressorChoose(
    _In_opt_ HWND hwnd,
    _In_ UINT uiFlags,
    _In_opt_ LPVOID pvIn,
    _In_opt_ LPVOID lpData,
    _Inout_ PCOMPVARS pc,
    _In_opt_ LPSTR lpszTitle
    );
BOOL
VFWAPI
ICSeqCompressFrameStart(
    _In_ PCOMPVARS pc,
    _In_ LPBITMAPINFO lpbiIn
    );
void
VFWAPI
ICSeqCompressFrameEnd(
    _In_ PCOMPVARS pc
    );
LPVOID
VFWAPI
ICSeqCompressFrame(
    _In_ PCOMPVARS pc,
    _Reserved_ UINT uiFlags,
    _In_ LPVOID lpBits,
    _Out_ BOOL FAR *pfKey,
    _Inout_opt_ LONG FAR *plSize
    );
void
VFWAPI
ICCompressorFree(
    _In_ PCOMPVARS pc
    );
typedef HANDLE HDRAWDIB;
extern BOOL VFWAPI DrawDibInit(void);
extern HDRAWDIB VFWAPI DrawDibOpen(void);
extern
BOOL
VFWAPI
DrawDibClose(
    _In_ HDRAWDIB hdd
    );
extern
LPVOID
VFWAPI
DrawDibGetBuffer(
    _In_ HDRAWDIB hdd,
    _Out_ LPBITMAPINFOHEADER lpbi,
    _In_ DWORD dwSize,
    _In_ DWORD dwFlags
    );
extern UINT VFWAPI DrawDibError(HDRAWDIB hdd);
extern
HPALETTE
VFWAPI
DrawDibGetPalette(
    _In_ HDRAWDIB hdd
    );
extern
BOOL
VFWAPI
DrawDibSetPalette(
    _In_ HDRAWDIB hdd,
    _In_opt_ HPALETTE hpal
    );
extern
BOOL
VFWAPI
DrawDibChangePalette(
    _In_ HDRAWDIB hdd,
    _In_ int iStart,
    _In_ int iLen,
    _In_reads_(iLen) LPPALETTEENTRY lppe
    );
extern
UINT
VFWAPI
DrawDibRealize(
    _In_ HDRAWDIB hdd,
    _In_ HDC hdc,
    _In_ BOOL fBackground
    );
extern
BOOL
VFWAPI
DrawDibStart(
    _In_ HDRAWDIB hdd,
    _In_ DWORD rate
    );
extern
BOOL
VFWAPI
DrawDibStop(
    _In_ HDRAWDIB hdd
    );
extern
BOOL
VFWAPI
DrawDibBegin(
    _In_ HDRAWDIB hdd,
    _In_opt_ HDC hdc,
    _In_ int dxDst,
    _In_ int dyDst,
    _In_ LPBITMAPINFOHEADER lpbi,
    _In_ int dxSrc,
    _In_ int dySrc,
    _In_ UINT wFlags
    );
extern
BOOL
VFWAPI
DrawDibDraw(
    _In_ HDRAWDIB hdd,
    _In_ HDC hdc,
    _In_ int xDst,
    _In_ int yDst,
    _In_ int dxDst,
    _In_ int dyDst,
    _In_opt_ LPBITMAPINFOHEADER lpbi,
    _In_opt_ LPVOID lpBits,
    _In_ int xSrc,
    _In_ int ySrc,
    _In_ int dxSrc,
    _In_ int dySrc,
    _In_ UINT wFlags
    );
        DrawDibDraw(hdd, hdc, x, y, 0, 0, NULL, NULL, 0, 0, 0, 0, DDF_UPDATE)
extern
BOOL
VFWAPI
DrawDibEnd(
    _In_ HDRAWDIB hdd
    );
typedef struct {
    LONG timeCount;
    LONG timeDraw;
    LONG timeDecompress;
    LONG timeDither;
    LONG timeStretch;
    LONG timeBlt;
    LONG timeSetDIBits;
} DRAWDIBTIME, FAR *LPDRAWDIBTIME;
BOOL
VFWAPI
DrawDibTime(
    _In_ HDRAWDIB hdd,
    _Out_ LPDRAWDIBTIME lpddtime
    );
LRESULT
VFWAPI
DrawDibProfileDisplay(
    _In_ LPBITMAPINFOHEADER lpbi
    );
void WINAPI StretchDIB(
 _In_ LPBITMAPINFOHEADER biDst,
 _Out_ LPVOID lpDst,
 _In_ int DstX,
 _In_ int DstY,
 _In_ int DstXE,
 _In_ int DstYE,
 _In_ LPBITMAPINFOHEADER biSrc,
 _In_ LPVOID lpSrc,
 _In_ int SrcX,
 _In_ int SrcY,
 _In_ int SrcXE,
 _In_ int SrcYE);
        typedef DWORD FOURCC;
#pragma warning(disable:4200)
typedef WORD TWOCC;
                                             (FromHex(HIBYTE(LOWORD(fcc))))))
        MAKELONG((ToHex((stream) & 0x0f) << 8) | \
       (ToHex(((stream) & 0xf0) >> 4)), tcc)
typedef struct
{
    DWORD dwMicroSecPerFrame;
    DWORD dwMaxBytesPerSec;
    DWORD dwPaddingGranularity;
    DWORD dwFlags;
    DWORD dwTotalFrames;
    DWORD dwInitialFrames;
    DWORD dwStreams;
    DWORD dwSuggestedBufferSize;
    DWORD dwWidth;
    DWORD dwHeight;
    DWORD dwReserved[4];
} MainAVIHeader;
typedef struct {
    FOURCC fccType;
    FOURCC fccHandler;
    DWORD dwFlags;
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
    RECT rcFrame;
} AVIStreamHeader;
typedef struct
{
    DWORD ckid;
    DWORD dwFlags;
    DWORD dwChunkOffset;
    DWORD dwChunkLength;
} AVIINDEXENTRY;
typedef struct
{
    BYTE bFirstEntry;
    BYTE bNumEntries;
    WORD wFlags;
    PALETTEENTRY peNew[];
} AVIPALCHANGE;
}
#include "pshpack8.h"
    #include <mmreg.h>
extern "C" {
typedef struct _AVISTREAMINFOW {
    DWORD fccType;
    DWORD fccHandler;
    DWORD dwFlags;
    DWORD dwCaps;
    WORD wPriority;
    WORD wLanguage;
    DWORD dwScale;
    DWORD dwRate;
    DWORD dwStart;
    DWORD dwLength;
    DWORD dwInitialFrames;
    DWORD dwSuggestedBufferSize;
    DWORD dwQuality;
    DWORD dwSampleSize;
    RECT rcFrame;
    DWORD dwEditCount;
    DWORD dwFormatChangeCount;
    WCHAR szName[64];
} AVISTREAMINFOW, FAR * LPAVISTREAMINFOW;
typedef struct _AVISTREAMINFOA {
    DWORD fccType;
    DWORD fccHandler;
    DWORD dwFlags;
    DWORD dwCaps;
    WORD wPriority;
    WORD wLanguage;
    DWORD dwScale;
    DWORD dwRate;
    DWORD dwStart;
    DWORD dwLength;
    DWORD dwInitialFrames;
    DWORD dwSuggestedBufferSize;
    DWORD dwQuality;
    DWORD dwSampleSize;
    RECT rcFrame;
    DWORD dwEditCount;
    DWORD dwFormatChangeCount;
    char szName[64];
} AVISTREAMINFOA, FAR * LPAVISTREAMINFOA;
typedef struct _AVIFILEINFOW {
    DWORD dwMaxBytesPerSec;
    DWORD dwFlags;
    DWORD dwCaps;
    DWORD dwStreams;
    DWORD dwSuggestedBufferSize;
    DWORD dwWidth;
    DWORD dwHeight;
    DWORD dwScale;
    DWORD dwRate;
    DWORD dwLength;
    DWORD dwEditCount;
    WCHAR szFileType[64];
} AVIFILEINFOW, FAR * LPAVIFILEINFOW;
typedef struct _AVIFILEINFOA {
    DWORD dwMaxBytesPerSec;
    DWORD dwFlags;
    DWORD dwCaps;
    DWORD dwStreams;
    DWORD dwSuggestedBufferSize;
    DWORD dwWidth;
    DWORD dwHeight;
    DWORD dwScale;
    DWORD dwRate;
    DWORD dwLength;
    DWORD dwEditCount;
    char szFileType[64];
} AVIFILEINFOA, FAR * LPAVIFILEINFOA;
typedef BOOL (FAR PASCAL * AVISAVECALLBACK)(int);
typedef struct {
    DWORD fccType;
    DWORD fccHandler;
    DWORD dwKeyFrameEvery;
    DWORD dwQuality;
    DWORD dwBytesPerSecond;
    DWORD dwFlags;
    LPVOID lpFormat;
    DWORD cbFormat;
    LPVOID lpParms;
    DWORD cbParms;
    DWORD dwInterleaveEvery;
} AVICOMPRESSOPTIONS, FAR *LPAVICOMPRESSOPTIONS;
}
#include <ole2.h>
extern "C" {
DECLARE_INTERFACE_(IAVIStream, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _Outptr_ LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(Create) (THIS_ LPARAM lParam1, LPARAM lParam2) PURE ;
    STDMETHOD(Info) (THIS_ _Out_writes_bytes_(lSize) AVISTREAMINFOW FAR * psi, _In_ LONG lSize) PURE ;
    STDMETHOD_(LONG, FindSample)(THIS_ _In_ LONG lPos, _In_ LONG lFlags) PURE ;
    STDMETHOD(ReadFormat) (THIS_ _In_ LONG lPos,
       _Out_writes_bytes_to_opt_(*lpcbFormat, *lpcbFormat) LPVOID lpFormat, _Inout_ LONG FAR *lpcbFormat) PURE ;
    STDMETHOD(SetFormat) (THIS_ _In_ LONG lPos,
       _In_reads_bytes_(cbFormat) LPVOID lpFormat, _In_ LONG cbFormat) PURE ;
    STDMETHOD(Read) (THIS_ _In_ LONG lStart, _In_ LONG lSamples,
       _Out_writes_bytes_opt_(cbBuffer) LPVOID lpBuffer, _In_ LONG cbBuffer,
       _Out_opt_ LONG FAR * plBytes, _Out_opt_ LONG FAR * plSamples) PURE ;
    STDMETHOD(Write) (THIS_ _In_ LONG lStart, _In_ LONG lSamples,
       _In_reads_bytes_(cbBuffer) LPVOID lpBuffer, _In_ LONG cbBuffer,
       _In_ DWORD dwFlags,
       _Out_opt_ LONG FAR *plSampWritten,
       _Out_opt_ LONG FAR *plBytesWritten) PURE ;
    STDMETHOD(Delete) (THIS_ _In_ LONG lStart, _In_ LONG lSamples) PURE;
    STDMETHOD(ReadData) (THIS_ _In_ DWORD fcc, _Out_writes_bytes_to_opt_(*lpcb, *lpcb) LPVOID lp, _Inout_ LONG FAR *lpcb) PURE ;
    STDMETHOD(WriteData) (THIS_ _In_ DWORD fcc, _In_reads_bytes_(cb) LPVOID lp, _In_ LONG cb) PURE ;
    STDMETHOD(SetInfo) (THIS_ _In_reads_bytes_(cbInfo) AVISTREAMINFOW FAR * lpInfo,
       _In_ LONG cbInfo) PURE;
};
typedef IAVIStream FAR* PAVISTREAM;
DECLARE_INTERFACE_(IAVIStreaming, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _Outptr_ LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(Begin) (THIS_
        _In_ LONG lStart,
        _In_ LONG lEnd,
        _In_ LONG lRate) PURE;
    STDMETHOD(End) (THIS) PURE;
};
typedef IAVIStreaming FAR* PAVISTREAMING;
DECLARE_INTERFACE_(IAVIEditStream, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _Outptr_ LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(Cut) (THIS_ _Inout_ LONG FAR *plStart,
     _Inout_ LONG FAR *plLength,
     _Outptr_ PAVISTREAM FAR * ppResult) PURE;
    STDMETHOD(Copy) (THIS_ _Inout_ LONG FAR *plStart,
      _Inout_ LONG FAR *plLength,
      _Outptr_ PAVISTREAM FAR * ppResult) PURE;
    STDMETHOD(Paste) (THIS_ _Inout_ LONG FAR *plPos,
       _Inout_ LONG FAR *plLength,
       _Inout_ PAVISTREAM pstream,
       _In_ LONG lStart,
       _In_ LONG lEnd) PURE;
    STDMETHOD(Clone) (THIS_ _Outptr_ PAVISTREAM FAR *ppResult) PURE;
    STDMETHOD(SetInfo) (THIS_ _In_reads_bytes_(cbInfo) AVISTREAMINFOW FAR * lpInfo,
       _In_ LONG cbInfo) PURE;
};
typedef IAVIEditStream FAR* PAVIEDITSTREAM;
DECLARE_INTERFACE_(IAVIPersistFile, IPersistFile)
{
    STDMETHOD(Reserved1)(THIS) PURE;
};
typedef IAVIPersistFile FAR* PAVIPERSISTFILE;
DECLARE_INTERFACE_(IAVIFile, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _Outptr_ LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(Info) (THIS_
                                     _Out_writes_bytes_(lSize) AVIFILEINFOW FAR * pfi,
                                     _In_ LONG lSize) PURE;
    STDMETHOD(GetStream) (THIS_
                                     _Outptr_ PAVISTREAM FAR * ppStream,
         _In_ DWORD fccType,
                                     _In_ LONG lParam) PURE;
    STDMETHOD(CreateStream) (THIS_
                                     _Outptr_ PAVISTREAM FAR * ppStream,
                                     _In_ AVISTREAMINFOW FAR * psi) PURE;
    STDMETHOD(WriteData) (THIS_
                                     _In_ DWORD ckid,
                                     _In_reads_bytes_(cbData) LPVOID lpData,
                                     _In_ LONG cbData) PURE;
    STDMETHOD(ReadData) (THIS_
                                     _In_ DWORD ckid,
                                     _Out_writes_bytes_to_(*lpcbData, *lpcbData) LPVOID lpData,
                                     _Inout_ LONG FAR *lpcbData) PURE;
    STDMETHOD(EndRecord) (THIS) PURE;
    STDMETHOD(DeleteStream) (THIS_
         _In_ DWORD fccType,
                                     _In_ LONG lParam) PURE;
};
typedef IAVIFile FAR* PAVIFILE;
DECLARE_INTERFACE_(IGetFrame, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _Outptr_ LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD_(LPVOID,GetFrame) (THIS_ _In_ LONG lPos) PURE;
    STDMETHOD(Begin) (THIS_ _In_ LONG lStart, _In_ LONG lEnd, _In_ LONG lRate) PURE;
    STDMETHOD(End) (THIS) PURE;
    STDMETHOD(SetFormat) (THIS_ _In_ LPBITMAPINFOHEADER lpbi, _In_opt_ LPVOID lpBits, _In_ int x, _In_ int y, _In_ int dx, _In_ int dy) PURE;
};
typedef IGetFrame FAR* PGETFRAME;
    DEFINE_GUID(name, l, w1, w2, 0xC0,0,0,0,0,0,0,0x46)
DEFINE_AVIGUID(IID_IAVIFile, 0x00020020, 0, 0);
DEFINE_AVIGUID(IID_IAVIStream, 0x00020021, 0, 0);
DEFINE_AVIGUID(IID_IAVIStreaming, 0x00020022, 0, 0);
DEFINE_AVIGUID(IID_IGetFrame, 0x00020023, 0, 0);
DEFINE_AVIGUID(IID_IAVIEditStream, 0x00020024, 0, 0);
DEFINE_AVIGUID(IID_IAVIPersistFile, 0x00020025, 0, 0);
DEFINE_AVIGUID(CLSID_AVISimpleUnMarshal, 0x00020009, 0, 0);
DEFINE_AVIGUID(CLSID_AVIFile, 0x00020000, 0, 0);
STDAPI_(void) AVIFileInit(void);
STDAPI_(void) AVIFileExit(void);
STDAPI_(ULONG) AVIFileAddRef (PAVIFILE pfile);
STDAPI_(ULONG) AVIFileRelease (PAVIFILE pfile);
STDAPI AVIFileOpenA (_Outptr_ PAVIFILE FAR * ppfile, _In_ LPCSTR szFile,
     UINT uMode, _In_opt_ LPCLSID lpHandler);
STDAPI AVIFileOpenW (_Outptr_ PAVIFILE FAR * ppfile, _In_ LPCWSTR szFile,
     UINT uMode, _In_opt_ LPCLSID lpHandler);
STDAPI AVIFileInfoW (_In_ PAVIFILE pfile, _Out_writes_bytes_(lSize) LPAVIFILEINFOW pfi, _In_ LONG lSize);
STDAPI AVIFileInfoA (_In_ PAVIFILE pfile, _Out_writes_bytes_(lSize) LPAVIFILEINFOA pfi, _In_ LONG lSize);
STDAPI AVIFileGetStream (_In_ PAVIFILE pfile, _Outptr_ PAVISTREAM FAR * ppavi, _In_ DWORD fccType, _In_ LONG lParam);
STDAPI AVIFileCreateStreamW (_In_ PAVIFILE pfile, _Outptr_ PAVISTREAM FAR *ppavi, _In_ AVISTREAMINFOW FAR * psi);
STDAPI AVIFileCreateStreamA (_In_ PAVIFILE pfile, _Outptr_ PAVISTREAM FAR *ppavi, _In_ AVISTREAMINFOA FAR * psi);
STDAPI AVIFileWriteData (_In_ PAVIFILE pfile,
      _In_ DWORD ckid,
      _In_reads_bytes_(cbData) LPVOID lpData,
      _In_ LONG cbData);
STDAPI AVIFileReadData (_In_ PAVIFILE pfile,
      _In_ DWORD ckid,
      _Out_writes_bytes_to_(*lpcbData, *lpcbData) LPVOID lpData,
      _Inout_ LONG FAR *lpcbData);
STDAPI AVIFileEndRecord (_In_ PAVIFILE pfile);
STDAPI_(ULONG) AVIStreamAddRef (PAVISTREAM pavi);
STDAPI_(ULONG) AVIStreamRelease (PAVISTREAM pavi);
STDAPI AVIStreamInfoW (_In_ PAVISTREAM pavi, _Out_writes_bytes_(lSize) LPAVISTREAMINFOW psi, _In_ LONG lSize);
STDAPI AVIStreamInfoA (_In_ PAVISTREAM pavi, _Out_writes_bytes_(lSize) LPAVISTREAMINFOA psi, _In_ LONG lSize);
STDAPI_(LONG) AVIStreamFindSample(_In_ PAVISTREAM pavi, _In_ LONG lPos, _In_ LONG lFlags);
STDAPI AVIStreamReadFormat (_In_ PAVISTREAM pavi, _In_ LONG lPos,_Out_writes_bytes_to_opt_(*lpcbFormat,*lpcbFormat) LPVOID lpFormat,_Inout_ LONG FAR *lpcbFormat);
STDAPI AVIStreamSetFormat (_In_ PAVISTREAM pavi, _In_ LONG lPos,_In_reads_bytes_(cbFormat) LPVOID lpFormat, _In_ LONG cbFormat);
STDAPI AVIStreamReadData (_In_ PAVISTREAM pavi, _In_ DWORD fcc, _Out_writes_bytes_to_opt_(*lpcb, *lpcb) LPVOID lp, _Inout_ LONG FAR *lpcb);
STDAPI AVIStreamWriteData (_In_ PAVISTREAM pavi, _In_ DWORD fcc, _In_reads_bytes_(cb) LPVOID lp, _In_ LONG cb);
STDAPI AVIStreamRead (_In_ PAVISTREAM pavi,
         _In_ LONG lStart,
         _In_ LONG lSamples,
         _Out_writes_bytes_opt_(cbBuffer) LPVOID lpBuffer,
         _In_ LONG cbBuffer,
         _Out_opt_ LONG FAR * plBytes,
         _Out_opt_ LONG FAR * plSamples);
STDAPI AVIStreamWrite (_In_ PAVISTREAM pavi,
         _In_ LONG lStart, _In_ LONG lSamples,
         _In_reads_bytes_(cbBuffer) LPVOID lpBuffer, _In_ LONG cbBuffer, _In_ DWORD dwFlags,
         _Out_opt_ LONG FAR *plSampWritten,
         _Out_opt_ LONG FAR *plBytesWritten);
STDAPI_(LONG) AVIStreamStart (_In_ PAVISTREAM pavi);
STDAPI_(LONG) AVIStreamLength (_In_ PAVISTREAM pavi);
STDAPI_(LONG) AVIStreamTimeToSample (_In_ PAVISTREAM pavi, _In_ LONG lTime);
STDAPI_(LONG) AVIStreamSampleToTime (_In_ PAVISTREAM pavi, _In_ LONG lSample);
STDAPI AVIStreamBeginStreaming(_In_ PAVISTREAM pavi, _In_ LONG lStart, _In_ LONG lEnd, _In_ LONG lRate);
STDAPI AVIStreamEndStreaming(_In_ PAVISTREAM pavi);
STDAPI_(PGETFRAME) AVIStreamGetFrameOpen(_In_ PAVISTREAM pavi,
      _In_opt_ LPBITMAPINFOHEADER lpbiWanted);
STDAPI_(LPVOID) AVIStreamGetFrame(_In_ PGETFRAME pg, _In_ LONG lPos);
STDAPI AVIStreamGetFrameClose(_In_ PGETFRAME pg);
STDAPI AVIStreamOpenFromFileA(_Outptr_ PAVISTREAM FAR *ppavi, _In_ LPCSTR szFile,
        _In_ DWORD fccType, _In_ LONG lParam,
        _In_ UINT mode, _In_opt_ CLSID FAR *pclsidHandler);
STDAPI AVIStreamOpenFromFileW(_Outptr_ PAVISTREAM FAR *ppavi, LPCWSTR szFile,
        _In_ DWORD fccType, _In_ LONG lParam,
        _In_ UINT mode, _In_opt_ CLSID FAR *pclsidHandler);
STDAPI AVIStreamCreate(_Outptr_ PAVISTREAM FAR *ppavi, _In_ LONG lParam1, _In_ LONG lParam2,
         _In_opt_ CLSID FAR *pclsidHandler);
            AVIStreamTimeToSample(pavi1,AVIStreamSampleToTime(pavi2, l))
            AVIStreamFindSample(pavi,l+1,FIND_NEXT|FIND_ANY)
            AVIStreamFindSample(pavi,l-1,FIND_PREV|FIND_ANY)
            AVIStreamFindSample(pavi,l,FIND_PREV|FIND_ANY)
            AVIStreamFindSample(pavi,l+1,FIND_NEXT|FIND_KEY)
            AVIStreamFindSample(pavi,l-1,FIND_PREV|FIND_KEY)
            AVIStreamFindSample(pavi,l,FIND_PREV|FIND_KEY)
            (AVIStreamNearestKeyFrame(pavi,l) == l)
            AVIStreamSampleToTime(pavi, AVIStreamPrevSample(pavi,AVIStreamTimeToSample(pavi,t)))
            AVIStreamSampleToTime(pavi, AVIStreamNextSample(pavi,AVIStreamTimeToSample(pavi,t)))
            AVIStreamSampleToTime(pavi, AVIStreamNearestSample(pavi,AVIStreamTimeToSample(pavi,t)))
            AVIStreamSampleToTime(pavi, AVIStreamNextKeyFrame(pavi,AVIStreamTimeToSample(pavi, t)))
            AVIStreamSampleToTime(pavi, AVIStreamPrevKeyFrame(pavi,AVIStreamTimeToSample(pavi, t)))
            AVIStreamSampleToTime(pavi, AVIStreamNearestKeyFrame(pavi,AVIStreamTimeToSample(pavi, t)))
            AVIStreamSampleToTime(pavi, AVIStreamStart(pavi))
            AVIStreamSampleToTime(pavi, AVIStreamLength(pavi))
            (AVIStreamStart(pavi) + AVIStreamLength(pavi))
            AVIStreamSampleToTime(pavi, AVIStreamEnd(pavi))
     AVIStreamRead(pavi,lPos,1,NULL,0,plSize,NULL)
            AVIStreamReadFormat(pavi,lPos,NULL,plSize)
            AVIStreamReadData(pavi,fcc,NULL,plSize)
STDAPI AVIMakeCompressedStream(
  _Outptr_ PAVISTREAM FAR * ppsCompressed,
  _In_ PAVISTREAM ppsSource,
  _In_ AVICOMPRESSOPTIONS FAR * lpOptions,
  _In_opt_ CLSID FAR *pclsidHandler);
EXTERN_C HRESULT CDECL AVISaveA (LPCSTR szFile,
  _In_opt_ CLSID FAR *pclsidHandler,
  _In_ AVISAVECALLBACK lpfnCallback,
  _In_ int nStreams,
  _In_ PAVISTREAM pfile,
  _In_ LPAVICOMPRESSOPTIONS lpOptions,
  ...);
STDAPI AVISaveVA(LPCSTR szFile,
  _In_opt_ CLSID FAR *pclsidHandler,
  _In_ AVISAVECALLBACK lpfnCallback,
  _In_ int nStreams,
  _In_reads_(nStreams) PAVISTREAM FAR * ppavi,
  _In_reads_(nStreams) LPAVICOMPRESSOPTIONS FAR *plpOptions);
EXTERN_C HRESULT CDECL AVISaveW (LPCWSTR szFile,
  _In_opt_ CLSID FAR *pclsidHandler,
  _In_ AVISAVECALLBACK lpfnCallback,
  _In_ int nStreams,
  _In_ PAVISTREAM pfile,
  _In_ LPAVICOMPRESSOPTIONS lpOptions,
  ...);
STDAPI AVISaveVW(LPCWSTR szFile,
  _In_opt_ CLSID FAR *pclsidHandler,
  _In_ AVISAVECALLBACK lpfnCallback,
  _In_ int nStreams,
  _In_reads_(nStreams) PAVISTREAM FAR * ppavi,
  _In_reads_(nStreams) LPAVICOMPRESSOPTIONS FAR *plpOptions);
STDAPI_(INT_PTR) AVISaveOptions(_In_ HWND hwnd,
        _In_ UINT uiFlags,
        _In_ int nStreams,
        _In_reads_(nStreams) PAVISTREAM FAR *ppavi,
        _Inout_updates_(nStreams) LPAVICOMPRESSOPTIONS FAR *plpOptions);
STDAPI AVISaveOptionsFree(int nStreams,
        _In_reads_(nStreams) LPAVICOMPRESSOPTIONS FAR *plpOptions);
STDAPI AVIBuildFilterW(_Out_writes_(cbFilter) LPWSTR lpszFilter, _In_ LONG cbFilter, _In_ BOOL fSaving);
STDAPI AVIBuildFilterA(_Out_writes_(cbFilter) LPSTR lpszFilter, _In_ LONG cbFilter, _In_ BOOL fSaving);
STDAPI AVIMakeFileFromStreams(_Outptr_ PAVIFILE FAR * ppfile,
          _In_ int nStreams,
          _In_reads_(nStreams) PAVISTREAM FAR * papStreams);
STDAPI AVIMakeStreamFromClipboard(UINT cfFormat, _In_ HANDLE hGlobal, _Outptr_ PAVISTREAM FAR *ppstream);
STDAPI AVIPutFileOnClipboard(_In_ PAVIFILE pf);
STDAPI AVIGetFromClipboard(_Outptr_ PAVIFILE FAR * lppf);
STDAPI AVIClearClipboard(void);
STDAPI CreateEditableStream(
  _Outptr_ PAVISTREAM FAR * ppsEditable,
  _In_ PAVISTREAM psSource);
STDAPI EditStreamCut(_In_ PAVISTREAM pavi, _Inout_ LONG FAR *plStart, _Inout_ LONG FAR *plLength, _Outptr_ PAVISTREAM FAR * ppResult);
STDAPI EditStreamCopy(_In_ PAVISTREAM pavi, _Inout_ LONG FAR *plStart, _Inout_ LONG FAR *plLength, _Outptr_ PAVISTREAM FAR * ppResult);
STDAPI EditStreamPaste(_In_ PAVISTREAM pavi, _Inout_ LONG FAR *plPos, _Inout_ LONG FAR *plLength, _In_ PAVISTREAM pstream, _In_ LONG lStart, _In_ LONG lEnd);
STDAPI EditStreamClone(_In_ PAVISTREAM pavi, _Outptr_ PAVISTREAM FAR *ppResult);
STDAPI EditStreamSetNameA(_In_ PAVISTREAM pavi, _In_ LPCSTR lpszName);
STDAPI EditStreamSetNameW(_In_ PAVISTREAM pavi, _In_ LPCWSTR lpszName);
STDAPI EditStreamSetInfoW(_In_ PAVISTREAM pavi, _In_reads_bytes_(cbInfo) LPAVISTREAMINFOW lpInfo, _In_ LONG cbInfo);
STDAPI EditStreamSetInfoA(_In_ PAVISTREAM pavi, _In_reads_bytes_(cbInfo) LPAVISTREAMINFOA lpInfo, _In_ LONG cbInfo);
HWND
VFWAPIV
MCIWndCreateA(
    _In_opt_ HWND hwndParent,
    _In_opt_ HINSTANCE hInstance,
    _In_ DWORD dwStyle,
    _In_opt_ LPCSTR szFile
    );
HWND
VFWAPIV
MCIWndCreateW(
    _In_opt_ HWND hwndParent,
    _In_opt_ HINSTANCE hInstance,
    _In_ DWORD dwStyle,
    _In_opt_ LPCWSTR szFile
    );
BOOL VFWAPIV MCIWndRegisterClass(void);
 (VOID)MCIWndSM(hwnd, MCIWNDM_SETACTIVETIMER, \
 (WPARAM)(UINT)(active), 0L)
 (VOID)MCIWndSM(hwnd, MCIWNDM_SETINACTIVETIMER, \
 (WPARAM)(UINT)(inactive), 0L)
     (VOID)MCIWndSM(hwnd, MCIWNDM_SETTIMERS,(WPARAM)(UINT)(active), \
     (LPARAM)(UINT)(inactive))
 (UINT)MCIWndSM(hwnd, MCIWNDM_GETACTIVETIMER, 0, 0L);
 (UINT)MCIWndSM(hwnd, MCIWNDM_GETINACTIVETIMER, 0, 0L);
    #define MCI_OPEN 0x0803
    #define MCI_CLOSE 0x0804
    #define MCI_PLAY 0x0806
    #define MCI_SEEK 0x0807
    #define MCI_STOP 0x0808
    #define MCI_PAUSE 0x0809
    #define MCI_STEP 0x080E
    #define MCI_RECORD 0x080F
    #define MCI_SAVE 0x0813
    #define MCI_CUT 0x0851
    #define MCI_COPY 0x0852
    #define MCI_PASTE 0x0853
    #define MCI_RESUME 0x0855
    #define MCI_DELETE 0x0856
    #define MCI_MODE_NOT_READY (524)
    #define MCI_MODE_STOP (525)
    #define MCI_MODE_PLAY (526)
    #define MCI_MODE_RECORD (527)
    #define MCI_MODE_SEEK (528)
    #define MCI_MODE_PAUSE (529)
    #define MCI_MODE_OPEN (530)
DECLARE_HANDLE(HVIDEO);
typedef HVIDEO FAR * LPHVIDEO;
DWORD FAR PASCAL VideoForWindowsVersion(void);
typedef struct videohdr_tag {
    LPBYTE lpData;
    DWORD dwBufferLength;
    DWORD dwBytesUsed;
    DWORD dwTimeCaptured;
    DWORD_PTR dwUser;
    DWORD dwFlags;
    DWORD_PTR dwReserved[4];
} VIDEOHDR, NEAR *PVIDEOHDR, FAR * LPVIDEOHDR;
typedef struct channel_caps_tag {
    DWORD dwFlags;
    DWORD dwSrcRectXMod;
    DWORD dwSrcRectYMod;
    DWORD dwSrcRectWidthMod;
    DWORD dwSrcRectHeightMod;
    DWORD dwDstRectXMod;
    DWORD dwDstRectYMod;
    DWORD dwDstRectWidthMod;
    DWORD dwDstRectHeightMod;
} CHANNEL_CAPS, NEAR *PCHANNEL_CAPS, FAR * LPCHANNEL_CAPS;
typedef struct tagCapDriverCaps {
    UINT wDeviceIndex;
    BOOL fHasOverlay;
    BOOL fHasDlgVideoSource;
    BOOL fHasDlgVideoFormat;
    BOOL fHasDlgVideoDisplay;
    BOOL fCaptureInitialized;
    BOOL fDriverSuppliesPalettes;
    HANDLE hVideoIn;
    HANDLE hVideoOut;
    HANDLE hVideoExtIn;
    HANDLE hVideoExtOut;
} CAPDRIVERCAPS, *PCAPDRIVERCAPS, FAR *LPCAPDRIVERCAPS;
typedef struct tagCapStatus {
    UINT uiImageWidth;
    UINT uiImageHeight;
    BOOL fLiveWindow;
    BOOL fOverlayWindow;
    BOOL fScale;
    POINT ptScroll;
    BOOL fUsingDefaultPalette;
    BOOL fAudioHardware;
    BOOL fCapFileExists;
    DWORD dwCurrentVideoFrame;
    DWORD dwCurrentVideoFramesDropped;
    DWORD dwCurrentWaveSamples;
    DWORD dwCurrentTimeElapsedMS;
    HPALETTE hPalCurrent;
    BOOL fCapturingNow;
    DWORD dwReturn;
    UINT wNumVideoAllocated;
    UINT wNumAudioAllocated;
} CAPSTATUS, *PCAPSTATUS, FAR *LPCAPSTATUS;
typedef struct tagCaptureParms {
    DWORD dwRequestMicroSecPerFrame;
    BOOL fMakeUserHitOKToCapture;
    UINT wPercentDropForError;
    BOOL fYield;
    DWORD dwIndexSize;
    UINT wChunkGranularity;
    BOOL fUsingDOSMemory;
    UINT wNumVideoRequested;
    BOOL fCaptureAudio;
    UINT wNumAudioRequested;
    UINT vKeyAbort;
    BOOL fAbortLeftMouse;
    BOOL fAbortRightMouse;
    BOOL fLimitEnabled;
    UINT wTimeLimit;
    BOOL fMCIControl;
    BOOL fStepMCIDevice;
    DWORD dwMCIStartTime;
    DWORD dwMCIStopTime;
    BOOL fStepCaptureAt2x;
    UINT wStepCaptureAverageFrames;
    DWORD dwAudioBufferSize;
    BOOL fDisableWriteCache;
    UINT AVStreamMaster;
} CAPTUREPARMS, *PCAPTUREPARMS, FAR *LPCAPTUREPARMS;
typedef struct tagCapInfoChunk {
    FOURCC fccInfoID;
    LPVOID lpData;
    LONG cbData;
} CAPINFOCHUNK, *PCAPINFOCHUNK, FAR *LPCAPINFOCHUNK;
typedef LRESULT (CALLBACK* CAPYIELDCALLBACK) (_In_ HWND hWnd);
typedef LRESULT (CALLBACK* CAPSTATUSCALLBACKW) (_In_ HWND hWnd, _In_ int nID, LPCWSTR lpsz);
typedef LRESULT (CALLBACK* CAPERRORCALLBACKW) (_In_ HWND hWnd, _In_ int nID, LPCWSTR lpsz);
typedef LRESULT (CALLBACK* CAPSTATUSCALLBACKA) (_In_ HWND hWnd, _In_ int nID, LPCSTR lpsz);
typedef LRESULT (CALLBACK* CAPERRORCALLBACKA) (_In_ HWND hWnd, _In_ int nID, LPCSTR lpsz);
typedef LRESULT (CALLBACK* CAPVIDEOCALLBACK) (_In_ HWND hWnd, _In_ LPVIDEOHDR lpVHdr);
typedef LRESULT (CALLBACK* CAPWAVECALLBACK) (_In_ HWND hWnd, _In_ LPWAVEHDR lpWHdr);
typedef LRESULT (CALLBACK* CAPCONTROLCALLBACK)(_In_ HWND hWnd, _In_ int nState);
HWND VFWAPI capCreateCaptureWindowA (
        LPCSTR lpszWindowName,
        _In_ DWORD dwStyle,
        _In_ int x, _In_ int y, _In_ int nWidth, _In_ int nHeight,
        _In_opt_ HWND hwndParent, _In_ int nID);
BOOL VFWAPI capGetDriverDescriptionA (UINT wDriverIndex,
        _Out_writes_(cbName) LPSTR lpszName, _In_ int cbName,
        _Out_writes_(cbVer) LPSTR lpszVer, _In_ int cbVer);
HWND VFWAPI capCreateCaptureWindowW (
        LPCWSTR lpszWindowName,
        DWORD dwStyle,
        _In_ int x, _In_ int y, _In_ int nWidth, _In_ int nHeight,
        _In_opt_ HWND hwndParent, _In_ int nID);
BOOL VFWAPI capGetDriverDescriptionW (UINT wDriverIndex,
        _Out_writes_(cbName) LPWSTR lpszName, _In_ int cbName,
        _Out_writes_(cbVer) LPWSTR lpszVer, _In_ int cbVer);
}
    #include <msacm.h>
extern "C" {
    BOOL
    VFWAPI
    GetOpenFileNamePreviewA(
        _Inout_ LPOPENFILENAMEA lpofn
        );
    BOOL
    VFWAPI
    GetSaveFileNamePreviewA(
        _Inout_ LPOPENFILENAMEA lpofn
        );
    BOOL
    VFWAPI
    GetOpenFileNamePreviewW(
        _Inout_ LPOPENFILENAMEW lpofn
        );
    BOOL
    VFWAPI
    GetSaveFileNamePreviewW(
        _Inout_ LPOPENFILENAMEW lpofn
        );
        #define GetOpenFileNamePreview GetOpenFileNamePreviewW
        #define GetSaveFileNamePreview GetSaveFileNamePreviewW
#include "poppack.h"
}
#endif
#pragma endregion
