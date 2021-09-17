extern "C" {
typedef struct tag_video_open_parms {
    DWORD dwSize;
    FOURCC fccType;
    FOURCC fccComp;
    DWORD dwVersion;
    DWORD dwFlags;
    DWORD dwError;
    LPVOID pV1Reserved;
    LPVOID pV2Reserved;
    DWORD dnDevNode;
} VIDEO_OPEN_PARMS, FAR * LPVIDEO_OPEN_PARMS;
typedef struct tag_video_geterrortext_parms {
       DWORD dwError;
       LPWSTR lpText;
       DWORD dwLength;
} VIDEO_GETERRORTEXT_PARMS, FAR * LPVIDEO_GETERRORTEXT_PARMS;
typedef struct tag_video_stream_init_parms {
       DWORD dwMicroSecPerFrame;
       DWORD dwCallback;
       DWORD dwCallbackInst;
       DWORD dwFlags;
       HANDLE hVideo;
} VIDEO_STREAM_INIT_PARMS, FAR * LPVIDEO_STREAM_INIT_PARMS;
typedef struct tag_video_configure_parms {
       LPDWORD lpdwReturn;
       LPVOID lpData1;
       DWORD dwSize1;
       LPVOID lpData2;
       DWORD dwSize2;
} VIDEOCONFIGPARMS, FAR * LPVIDEOCONFIGPARMS;
}
