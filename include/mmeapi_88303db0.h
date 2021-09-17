       
#include <apiset.h>
#include <apisetcconv.h>
#include <mmsyscom.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DECLARE_HANDLE(HWAVE);
DECLARE_HANDLE(HWAVEIN);
DECLARE_HANDLE(HWAVEOUT);
typedef HWAVEIN FAR *LPHWAVEIN;
typedef HWAVEOUT FAR *LPHWAVEOUT;
typedef DRVCALLBACK WAVECALLBACK;
typedef WAVECALLBACK FAR *LPWAVECALLBACK;
typedef struct wavehdr_tag {
    LPSTR lpData;
    DWORD dwBufferLength;
    DWORD dwBytesRecorded;
    DWORD_PTR dwUser;
    DWORD dwFlags;
    DWORD dwLoops;
    struct wavehdr_tag FAR *lpNext;
    DWORD_PTR reserved;
} WAVEHDR, *PWAVEHDR, NEAR *NPWAVEHDR, FAR *LPWAVEHDR;
typedef struct tagWAVEOUTCAPSA {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[MAXPNAMELEN];
    DWORD dwFormats;
    WORD wChannels;
    WORD wReserved1;
    DWORD dwSupport;
} WAVEOUTCAPSA, *PWAVEOUTCAPSA, *NPWAVEOUTCAPSA, *LPWAVEOUTCAPSA;
typedef struct tagWAVEOUTCAPSW {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    WCHAR szPname[MAXPNAMELEN];
    DWORD dwFormats;
    WORD wChannels;
    WORD wReserved1;
    DWORD dwSupport;
} WAVEOUTCAPSW, *PWAVEOUTCAPSW, *NPWAVEOUTCAPSW, *LPWAVEOUTCAPSW;
typedef WAVEOUTCAPSW WAVEOUTCAPS;
typedef PWAVEOUTCAPSW PWAVEOUTCAPS;
typedef NPWAVEOUTCAPSW NPWAVEOUTCAPS;
typedef LPWAVEOUTCAPSW LPWAVEOUTCAPS;
typedef struct tagWAVEOUTCAPS2A {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[MAXPNAMELEN];
    DWORD dwFormats;
    WORD wChannels;
    WORD wReserved1;
    DWORD dwSupport;
    GUID ManufacturerGuid;
    GUID ProductGuid;
    GUID NameGuid;
} WAVEOUTCAPS2A, *PWAVEOUTCAPS2A, *NPWAVEOUTCAPS2A, *LPWAVEOUTCAPS2A;
typedef struct tagWAVEOUTCAPS2W {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    WCHAR szPname[MAXPNAMELEN];
    DWORD dwFormats;
    WORD wChannels;
    WORD wReserved1;
    DWORD dwSupport;
    GUID ManufacturerGuid;
    GUID ProductGuid;
    GUID NameGuid;
} WAVEOUTCAPS2W, *PWAVEOUTCAPS2W, *NPWAVEOUTCAPS2W, *LPWAVEOUTCAPS2W;
typedef WAVEOUTCAPS2W WAVEOUTCAPS2;
typedef PWAVEOUTCAPS2W PWAVEOUTCAPS2;
typedef NPWAVEOUTCAPS2W NPWAVEOUTCAPS2;
typedef LPWAVEOUTCAPS2W LPWAVEOUTCAPS2;
typedef struct tagWAVEINCAPSA {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[MAXPNAMELEN];
    DWORD dwFormats;
    WORD wChannels;
    WORD wReserved1;
} WAVEINCAPSA, *PWAVEINCAPSA, *NPWAVEINCAPSA, *LPWAVEINCAPSA;
typedef struct tagWAVEINCAPSW {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    WCHAR szPname[MAXPNAMELEN];
    DWORD dwFormats;
    WORD wChannels;
    WORD wReserved1;
} WAVEINCAPSW, *PWAVEINCAPSW, *NPWAVEINCAPSW, *LPWAVEINCAPSW;
typedef WAVEINCAPSW WAVEINCAPS;
typedef PWAVEINCAPSW PWAVEINCAPS;
typedef NPWAVEINCAPSW NPWAVEINCAPS;
typedef LPWAVEINCAPSW LPWAVEINCAPS;
typedef struct tagWAVEINCAPS2A {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[MAXPNAMELEN];
    DWORD dwFormats;
    WORD wChannels;
    WORD wReserved1;
    GUID ManufacturerGuid;
    GUID ProductGuid;
    GUID NameGuid;
} WAVEINCAPS2A, *PWAVEINCAPS2A, *NPWAVEINCAPS2A, *LPWAVEINCAPS2A;
typedef struct tagWAVEINCAPS2W {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    WCHAR szPname[MAXPNAMELEN];
    DWORD dwFormats;
    WORD wChannels;
    WORD wReserved1;
    GUID ManufacturerGuid;
    GUID ProductGuid;
    GUID NameGuid;
} WAVEINCAPS2W, *PWAVEINCAPS2W, *NPWAVEINCAPS2W, *LPWAVEINCAPS2W;
typedef WAVEINCAPS2W WAVEINCAPS2;
typedef PWAVEINCAPS2W PWAVEINCAPS2;
typedef NPWAVEINCAPS2W NPWAVEINCAPS2;
typedef LPWAVEINCAPS2W LPWAVEINCAPS2;
typedef struct waveformat_tag {
    WORD wFormatTag;
    WORD nChannels;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD nBlockAlign;
} WAVEFORMAT, *PWAVEFORMAT, NEAR *NPWAVEFORMAT, FAR *LPWAVEFORMAT;
typedef struct pcmwaveformat_tag {
    WAVEFORMAT wf;
    WORD wBitsPerSample;
} PCMWAVEFORMAT, *PPCMWAVEFORMAT, NEAR *NPPCMWAVEFORMAT, FAR *LPPCMWAVEFORMAT;
typedef struct tWAVEFORMATEX
{
    WORD wFormatTag;
    WORD nChannels;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD nBlockAlign;
    WORD wBitsPerSample;
    WORD cbSize;
} WAVEFORMATEX, *PWAVEFORMATEX, NEAR *NPWAVEFORMATEX, FAR *LPWAVEFORMATEX;
typedef const WAVEFORMATEX FAR *LPCWAVEFORMATEX;
WINMMAPI
UINT
WINAPI
waveOutGetNumDevs(
    void
    );
WINMMAPI
MMRESULT
WINAPI
waveOutGetDevCapsA(
    _In_ UINT_PTR uDeviceID,
    _Out_ LPWAVEOUTCAPSA pwoc,
    _In_ UINT cbwoc
    );
WINMMAPI
MMRESULT
WINAPI
waveOutGetDevCapsW(
    _In_ UINT_PTR uDeviceID,
    _Out_ LPWAVEOUTCAPSW pwoc,
    _In_ UINT cbwoc
    );
WINMMAPI
MMRESULT
WINAPI
waveOutGetVolume(
    _In_opt_ HWAVEOUT hwo,
    _Out_ LPDWORD pdwVolume
    );
WINMMAPI
MMRESULT
WINAPI
waveOutSetVolume(
    _In_opt_ HWAVEOUT hwo,
    _In_ DWORD dwVolume
    );
WINMMAPI
MMRESULT
WINAPI
waveOutGetErrorTextA(
    _In_ MMRESULT mmrError,
    _Out_writes_(cchText) LPSTR pszText,
    _In_ UINT cchText
    );
WINMMAPI
MMRESULT
WINAPI
waveOutGetErrorTextW(
    _In_ MMRESULT mmrError,
    _Out_writes_(cchText) LPWSTR pszText,
    _In_ UINT cchText
    );
WINMMAPI
MMRESULT
WINAPI
waveOutOpen(
    _Out_opt_ LPHWAVEOUT phwo,
    _In_ UINT uDeviceID,
    _In_ LPCWAVEFORMATEX pwfx,
    _In_opt_ DWORD_PTR dwCallback,
    _In_opt_ DWORD_PTR dwInstance,
    _In_ DWORD fdwOpen
    );
WINMMAPI
MMRESULT
WINAPI
waveOutClose(
    _In_ HWAVEOUT hwo
    );
WINMMAPI
MMRESULT
WINAPI
waveOutPrepareHeader(
    _In_ HWAVEOUT hwo,
    _Inout_updates_bytes_(cbwh) LPWAVEHDR pwh,
    _In_ UINT cbwh
    );
WINMMAPI
MMRESULT
WINAPI
waveOutUnprepareHeader(
    _In_ HWAVEOUT hwo,
    _Inout_updates_bytes_(cbwh) LPWAVEHDR pwh,
    _In_ UINT cbwh
    );
WINMMAPI
MMRESULT
WINAPI
waveOutWrite(
    _In_ HWAVEOUT hwo,
    _Inout_updates_bytes_(cbwh) LPWAVEHDR pwh,
    _In_ UINT cbwh
    );
WINMMAPI
MMRESULT
WINAPI
waveOutPause(
    _In_ HWAVEOUT hwo
    );
WINMMAPI
MMRESULT
WINAPI
waveOutRestart(
    _In_ HWAVEOUT hwo
    );
WINMMAPI
MMRESULT
WINAPI
waveOutReset(
    _In_ HWAVEOUT hwo
    );
WINMMAPI
MMRESULT
WINAPI
waveOutBreakLoop(
    _In_ HWAVEOUT hwo
    );
WINMMAPI
MMRESULT
WINAPI
waveOutGetPosition(
    _In_ HWAVEOUT hwo,
    _Inout_updates_bytes_(cbmmt) LPMMTIME pmmt,
    _In_ UINT cbmmt
    );
WINMMAPI
MMRESULT
WINAPI
waveOutGetPitch(
    _In_ HWAVEOUT hwo,
    _Out_ LPDWORD pdwPitch
    );
WINMMAPI
MMRESULT
WINAPI
waveOutSetPitch(
    _In_ HWAVEOUT hwo,
    _In_ DWORD dwPitch
    );
WINMMAPI
MMRESULT
WINAPI
waveOutGetPlaybackRate(
    _In_ HWAVEOUT hwo,
    _Out_ LPDWORD pdwRate
    );
WINMMAPI
MMRESULT
WINAPI
waveOutSetPlaybackRate(
    _In_ HWAVEOUT hwo,
    _In_ DWORD dwRate
    );
WINMMAPI
MMRESULT
WINAPI
waveOutGetID(
    _In_ HWAVEOUT hwo,
    _Out_ LPUINT puDeviceID
    );
WINMMAPI
MMRESULT
WINAPI
waveOutMessage(
    _In_opt_ HWAVEOUT hwo,
    _In_ UINT uMsg,
    _In_ DWORD_PTR dw1,
    _In_ DWORD_PTR dw2
    );
WINMMAPI
UINT
WINAPI
waveInGetNumDevs(
    void
    );
WINMMAPI
MMRESULT
WINAPI
waveInGetDevCapsA(
    _In_ UINT_PTR uDeviceID,
    _Out_writes_bytes_(cbwic) LPWAVEINCAPSA pwic,
    _In_ UINT cbwic
    );
WINMMAPI
MMRESULT
WINAPI
waveInGetDevCapsW(
    _In_ UINT_PTR uDeviceID,
    _Out_writes_bytes_(cbwic) LPWAVEINCAPSW pwic,
    _In_ UINT cbwic
    );
WINMMAPI
MMRESULT
WINAPI
waveInGetErrorTextA(
    _In_ MMRESULT mmrError,
    _Out_writes_(cchText) LPSTR pszText,
    _In_ UINT cchText
    );
WINMMAPI
MMRESULT
WINAPI
waveInGetErrorTextW(
    _In_ MMRESULT mmrError,
    _Out_writes_(cchText) LPWSTR pszText,
    _In_ UINT cchText
    );
WINMMAPI
MMRESULT
WINAPI
waveInOpen(
    _Out_opt_ LPHWAVEIN phwi,
    _In_ UINT uDeviceID,
    _In_ LPCWAVEFORMATEX pwfx,
    _In_opt_ DWORD_PTR dwCallback,
    _In_opt_ DWORD_PTR dwInstance,
    _In_ DWORD fdwOpen
    );
WINMMAPI
MMRESULT
WINAPI
waveInClose(
    _In_ HWAVEIN hwi
    );
WINMMAPI
MMRESULT
WINAPI
waveInPrepareHeader(
    _In_ HWAVEIN hwi,
    _Inout_updates_bytes_(cbwh) LPWAVEHDR pwh,
    _In_ UINT cbwh
    );
WINMMAPI
MMRESULT
WINAPI
waveInUnprepareHeader(
    _In_ HWAVEIN hwi,
    _Inout_updates_bytes_(cbwh) LPWAVEHDR pwh,
    _In_ UINT cbwh
    );
WINMMAPI
MMRESULT
WINAPI
waveInAddBuffer(
    _In_ HWAVEIN hwi,
    _Inout_updates_bytes_(cbwh) LPWAVEHDR pwh,
    _In_ UINT cbwh
    );
WINMMAPI
MMRESULT
WINAPI
waveInStart(
    _In_ HWAVEIN hwi
    );
WINMMAPI
MMRESULT
WINAPI
waveInStop(
    _In_ HWAVEIN hwi
    );
WINMMAPI
MMRESULT
WINAPI
waveInReset(
    _In_ HWAVEIN hwi
    );
WINMMAPI
MMRESULT
WINAPI
waveInGetPosition(
    _In_ HWAVEIN hwi,
    _Inout_updates_bytes_(cbmmt) LPMMTIME pmmt,
    _In_ UINT cbmmt
    );
WINMMAPI
MMRESULT
WINAPI
waveInGetID(
    _In_ HWAVEIN hwi,
    _In_ LPUINT puDeviceID
    );
WINMMAPI
MMRESULT
WINAPI
waveInMessage(
    _In_opt_ HWAVEIN hwi,
    _In_ UINT uMsg,
    _In_opt_ DWORD_PTR dw1,
    _In_opt_ DWORD_PTR dw2
    );
DECLARE_HANDLE(HMIDI);
DECLARE_HANDLE(HMIDIIN);
DECLARE_HANDLE(HMIDIOUT);
DECLARE_HANDLE(HMIDISTRM);
typedef HMIDI FAR *LPHMIDI;
typedef HMIDIIN FAR *LPHMIDIIN;
typedef HMIDIOUT FAR *LPHMIDIOUT;
typedef HMIDISTRM FAR *LPHMIDISTRM;
typedef DRVCALLBACK MIDICALLBACK;
typedef MIDICALLBACK FAR *LPMIDICALLBACK;
typedef WORD PATCHARRAY[MIDIPATCHSIZE];
typedef WORD FAR *LPPATCHARRAY;
typedef WORD KEYARRAY[MIDIPATCHSIZE];
typedef WORD FAR *LPKEYARRAY;
typedef struct tagMIDIOUTCAPSA {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[MAXPNAMELEN];
    WORD wTechnology;
    WORD wVoices;
    WORD wNotes;
    WORD wChannelMask;
    DWORD dwSupport;
} MIDIOUTCAPSA, *PMIDIOUTCAPSA, *NPMIDIOUTCAPSA, *LPMIDIOUTCAPSA;
typedef struct tagMIDIOUTCAPSW {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    WCHAR szPname[MAXPNAMELEN];
    WORD wTechnology;
    WORD wVoices;
    WORD wNotes;
    WORD wChannelMask;
    DWORD dwSupport;
} MIDIOUTCAPSW, *PMIDIOUTCAPSW, *NPMIDIOUTCAPSW, *LPMIDIOUTCAPSW;
typedef MIDIOUTCAPSW MIDIOUTCAPS;
typedef PMIDIOUTCAPSW PMIDIOUTCAPS;
typedef NPMIDIOUTCAPSW NPMIDIOUTCAPS;
typedef LPMIDIOUTCAPSW LPMIDIOUTCAPS;
typedef struct tagMIDIOUTCAPS2A {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[MAXPNAMELEN];
    WORD wTechnology;
    WORD wVoices;
    WORD wNotes;
    WORD wChannelMask;
    DWORD dwSupport;
    GUID ManufacturerGuid;
    GUID ProductGuid;
    GUID NameGuid;
} MIDIOUTCAPS2A, *PMIDIOUTCAPS2A, *NPMIDIOUTCAPS2A, *LPMIDIOUTCAPS2A;
typedef struct tagMIDIOUTCAPS2W {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    WCHAR szPname[MAXPNAMELEN];
    WORD wTechnology;
    WORD wVoices;
    WORD wNotes;
    WORD wChannelMask;
    DWORD dwSupport;
    GUID ManufacturerGuid;
    GUID ProductGuid;
    GUID NameGuid;
} MIDIOUTCAPS2W, *PMIDIOUTCAPS2W, *NPMIDIOUTCAPS2W, *LPMIDIOUTCAPS2W;
typedef MIDIOUTCAPS2W MIDIOUTCAPS2;
typedef PMIDIOUTCAPS2W PMIDIOUTCAPS2;
typedef NPMIDIOUTCAPS2W NPMIDIOUTCAPS2;
typedef LPMIDIOUTCAPS2W LPMIDIOUTCAPS2;
typedef struct tagMIDIINCAPSA {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[MAXPNAMELEN];
    DWORD dwSupport;
} MIDIINCAPSA, *PMIDIINCAPSA, *NPMIDIINCAPSA, *LPMIDIINCAPSA;
typedef struct tagMIDIINCAPSW {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    WCHAR szPname[MAXPNAMELEN];
    DWORD dwSupport;
} MIDIINCAPSW, *PMIDIINCAPSW, *NPMIDIINCAPSW, *LPMIDIINCAPSW;
typedef MIDIINCAPSW MIDIINCAPS;
typedef PMIDIINCAPSW PMIDIINCAPS;
typedef NPMIDIINCAPSW NPMIDIINCAPS;
typedef LPMIDIINCAPSW LPMIDIINCAPS;
typedef struct tagMIDIINCAPS2A {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[MAXPNAMELEN];
    DWORD dwSupport;
    GUID ManufacturerGuid;
    GUID ProductGuid;
    GUID NameGuid;
} MIDIINCAPS2A, *PMIDIINCAPS2A, *NPMIDIINCAPS2A, *LPMIDIINCAPS2A;
typedef struct tagMIDIINCAPS2W {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    WCHAR szPname[MAXPNAMELEN];
    DWORD dwSupport;
    GUID ManufacturerGuid;
    GUID ProductGuid;
    GUID NameGuid;
} MIDIINCAPS2W, *PMIDIINCAPS2W, *NPMIDIINCAPS2W, *LPMIDIINCAPS2W;
typedef MIDIINCAPS2W MIDIINCAPS2;
typedef PMIDIINCAPS2W PMIDIINCAPS2;
typedef NPMIDIINCAPS2W NPMIDIINCAPS2;
typedef LPMIDIINCAPS2W LPMIDIINCAPS2;
typedef struct midihdr_tag {
    LPSTR lpData;
    DWORD dwBufferLength;
    DWORD dwBytesRecorded;
    DWORD_PTR dwUser;
    DWORD dwFlags;
    struct midihdr_tag far *lpNext;
    DWORD_PTR reserved;
    DWORD dwOffset;
    DWORD_PTR dwReserved[8];
} MIDIHDR, *PMIDIHDR, NEAR *NPMIDIHDR, FAR *LPMIDIHDR;
typedef struct midievent_tag
{
    DWORD dwDeltaTime;
    DWORD dwStreamID;
    DWORD dwEvent;
    DWORD dwParms[1];
} MIDIEVENT;
typedef struct midistrmbuffver_tag
{
    DWORD dwVersion;
    DWORD dwMid;
    DWORD dwOEMVersion;
} MIDISTRMBUFFVER;
typedef struct midiproptimediv_tag
{
    DWORD cbStruct;
    DWORD dwTimeDiv;
} MIDIPROPTIMEDIV, FAR *LPMIDIPROPTIMEDIV;
typedef struct midiproptempo_tag
{
    DWORD cbStruct;
    DWORD dwTempo;
} MIDIPROPTEMPO, FAR *LPMIDIPROPTEMPO;
WINMMAPI
UINT
WINAPI
midiOutGetNumDevs(
    void
    );
WINMMAPI
MMRESULT
WINAPI
midiStreamOpen(
    _Out_ LPHMIDISTRM phms,
    _Inout_updates_(cMidi) LPUINT puDeviceID,
    _In_ DWORD cMidi,
    _In_opt_ DWORD_PTR dwCallback,
    _In_opt_ DWORD_PTR dwInstance,
    _In_ DWORD fdwOpen
    );
WINMMAPI
MMRESULT
WINAPI
midiStreamClose(
    _In_ HMIDISTRM hms
    );
WINMMAPI
MMRESULT
WINAPI
midiStreamProperty(
    _In_ HMIDISTRM hms,
    _Inout_updates_bytes_(sizeof(DWORD) + sizeof(DWORD)) LPBYTE lppropdata,
    _In_ DWORD dwProperty
    );
WINMMAPI
MMRESULT
WINAPI
midiStreamPosition(
    _In_ HMIDISTRM hms,
    _Out_writes_bytes_(cbmmt) LPMMTIME lpmmt,
    _In_ UINT cbmmt
    );
WINMMAPI
MMRESULT
WINAPI
midiStreamOut(
    _In_ HMIDISTRM hms,
    _Out_writes_bytes_(cbmh) LPMIDIHDR pmh,
    _In_ UINT cbmh
    );
WINMMAPI
MMRESULT
WINAPI
midiStreamPause(
    _In_ HMIDISTRM hms
    );
WINMMAPI
MMRESULT
WINAPI
midiStreamRestart(
    _In_ HMIDISTRM hms
    );
WINMMAPI
MMRESULT
WINAPI
midiStreamStop(
    _In_ HMIDISTRM hms
    );
WINMMAPI
MMRESULT
WINAPI
midiConnect(
    _In_ HMIDI hmi,
    _In_ HMIDIOUT hmo,
    _In_opt_ LPVOID pReserved
    );
WINMMAPI
MMRESULT
WINAPI
midiDisconnect(
    _In_ HMIDI hmi,
    _In_ HMIDIOUT hmo,
    _In_opt_ LPVOID pReserved
    );
WINMMAPI
MMRESULT
WINAPI
midiOutGetDevCapsA(
    _In_ UINT_PTR uDeviceID,
    _Out_writes_bytes_(cbmoc) LPMIDIOUTCAPSA pmoc,
    _In_ UINT cbmoc
    );
WINMMAPI
MMRESULT
WINAPI
midiOutGetDevCapsW(
    _In_ UINT_PTR uDeviceID,
    _Out_writes_bytes_(cbmoc) LPMIDIOUTCAPSW pmoc,
    _In_ UINT cbmoc
    );
WINMMAPI
MMRESULT
WINAPI
midiOutGetVolume(
    _In_opt_ HMIDIOUT hmo,
    _Out_ LPDWORD pdwVolume
    );
WINMMAPI
MMRESULT
WINAPI
midiOutSetVolume(
    _In_opt_ HMIDIOUT hmo,
    _In_ DWORD dwVolume
    );
WINMMAPI
MMRESULT
WINAPI
midiOutGetErrorTextA(
    _In_ MMRESULT mmrError,
    _Out_writes_(cchText) LPSTR pszText,
    _In_ UINT cchText
    );
WINMMAPI
MMRESULT
WINAPI
midiOutGetErrorTextW(
    _In_ MMRESULT mmrError,
    _Out_writes_(cchText) LPWSTR pszText,
    _In_ UINT cchText
    );
WINMMAPI
MMRESULT
WINAPI
midiOutOpen(
    _Out_ LPHMIDIOUT phmo,
    _In_ UINT uDeviceID,
    _In_opt_ DWORD_PTR dwCallback,
    _In_opt_ DWORD_PTR dwInstance,
    _In_ DWORD fdwOpen
    );
WINMMAPI
MMRESULT
WINAPI
midiOutClose(
    _In_ HMIDIOUT hmo
    );
WINMMAPI
MMRESULT
WINAPI
midiOutPrepareHeader(
    _In_ HMIDIOUT hmo,
    _Inout_updates_bytes_(cbmh) LPMIDIHDR pmh,
    _In_ UINT cbmh
    );
WINMMAPI
MMRESULT
WINAPI
midiOutUnprepareHeader(
    _In_ HMIDIOUT hmo,
    _Inout_updates_bytes_(cbmh) LPMIDIHDR pmh,
    _In_ UINT cbmh
    );
WINMMAPI
MMRESULT
WINAPI
midiOutShortMsg(
    _In_ HMIDIOUT hmo,
    _In_ DWORD dwMsg
    );
WINMMAPI
MMRESULT
WINAPI
midiOutLongMsg(
    _In_ HMIDIOUT hmo,
    _In_reads_bytes_(cbmh) LPMIDIHDR pmh,
    _In_ UINT cbmh
    );
WINMMAPI
MMRESULT
WINAPI
midiOutReset(
    _In_ HMIDIOUT hmo
    );
WINMMAPI
MMRESULT
WINAPI
midiOutCachePatches(
    _In_ HMIDIOUT hmo,
    _In_ UINT uBank,
    _In_reads_(MIDIPATCHSIZE) LPWORD pwpa,
    _In_ UINT fuCache
    );
WINMMAPI
MMRESULT
WINAPI
midiOutCacheDrumPatches(
    _In_ HMIDIOUT hmo,
    _In_ UINT uPatch,
    _In_reads_(MIDIPATCHSIZE) LPWORD pwkya,
    _In_ UINT fuCache
    );
WINMMAPI
MMRESULT
WINAPI
midiOutGetID(
    _In_ HMIDIOUT hmo,
    _Out_ LPUINT puDeviceID
    );
WINMMAPI
MMRESULT
WINAPI
midiOutMessage(
    _In_opt_ HMIDIOUT hmo,
    _In_ UINT uMsg,
    _In_opt_ DWORD_PTR dw1,
    _In_opt_ DWORD_PTR dw2
    );
WINMMAPI
UINT
WINAPI
midiInGetNumDevs(
    void
    );
WINMMAPI
MMRESULT
WINAPI
midiInGetDevCapsA(
    _In_ UINT_PTR uDeviceID,
    _Out_writes_bytes_(cbmic) LPMIDIINCAPSA pmic,
    _In_ UINT cbmic
    );
WINMMAPI
MMRESULT
WINAPI
midiInGetDevCapsW(
    _In_ UINT_PTR uDeviceID,
    _Out_writes_bytes_(cbmic) LPMIDIINCAPSW pmic,
    _In_ UINT cbmic
    );
WINMMAPI
MMRESULT
WINAPI
midiInGetErrorTextA(
    _In_ MMRESULT mmrError,
    _Out_writes_(cchText) LPSTR pszText,
    _In_ UINT cchText
    );
WINMMAPI
MMRESULT
WINAPI
midiInGetErrorTextW(
    _In_ MMRESULT mmrError,
    _Out_writes_(cchText) LPWSTR pszText,
    _In_ UINT cchText
    );
WINMMAPI
MMRESULT
WINAPI
midiInOpen(
    _Out_ LPHMIDIIN phmi,
    _In_ UINT uDeviceID,
    _In_opt_ DWORD_PTR dwCallback,
    _In_opt_ DWORD_PTR dwInstance,
    _In_ DWORD fdwOpen
    );
WINMMAPI
MMRESULT
WINAPI
midiInClose(
    _In_ HMIDIIN hmi
    );
WINMMAPI
MMRESULT
WINAPI
midiInPrepareHeader(
    _In_ HMIDIIN hmi,
    _Inout_updates_bytes_(cbmh) LPMIDIHDR pmh,
    _In_ UINT cbmh
    );
WINMMAPI
MMRESULT
WINAPI
midiInUnprepareHeader(
    _In_ HMIDIIN hmi,
    _Inout_updates_bytes_(cbmh) LPMIDIHDR pmh,
    _In_ UINT cbmh
    );
WINMMAPI
MMRESULT
WINAPI
midiInAddBuffer(
    _In_ HMIDIIN hmi,
    _Out_writes_bytes_(cbmh) LPMIDIHDR pmh,
    _In_ UINT cbmh
    );
WINMMAPI
MMRESULT
WINAPI
midiInStart(
    _In_ HMIDIIN hmi
    );
WINMMAPI
MMRESULT
WINAPI
midiInStop(
    _In_ HMIDIIN hmi
    );
WINMMAPI
MMRESULT
WINAPI
midiInReset(
    _In_ HMIDIIN hmi
    );
WINMMAPI
MMRESULT
WINAPI
midiInGetID(
    _In_ HMIDIIN hmi,
    _Out_ LPUINT puDeviceID
    );
WINMMAPI
MMRESULT
WINAPI
midiInMessage(
    _In_opt_ HMIDIIN hmi,
    _In_ UINT uMsg,
    _In_opt_ DWORD_PTR dw1,
    _In_opt_ DWORD_PTR dw2
    );
typedef struct tagAUXCAPSA {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[MAXPNAMELEN];
    WORD wTechnology;
    WORD wReserved1;
    DWORD dwSupport;
} AUXCAPSA, *PAUXCAPSA, *NPAUXCAPSA, *LPAUXCAPSA;
typedef struct tagAUXCAPSW {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    WCHAR szPname[MAXPNAMELEN];
    WORD wTechnology;
    WORD wReserved1;
    DWORD dwSupport;
} AUXCAPSW, *PAUXCAPSW, *NPAUXCAPSW, *LPAUXCAPSW;
typedef AUXCAPSW AUXCAPS;
typedef PAUXCAPSW PAUXCAPS;
typedef NPAUXCAPSW NPAUXCAPS;
typedef LPAUXCAPSW LPAUXCAPS;
typedef struct tagAUXCAPS2A {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[MAXPNAMELEN];
    WORD wTechnology;
    WORD wReserved1;
    DWORD dwSupport;
    GUID ManufacturerGuid;
    GUID ProductGuid;
    GUID NameGuid;
} AUXCAPS2A, *PAUXCAPS2A, *NPAUXCAPS2A, *LPAUXCAPS2A;
typedef struct tagAUXCAPS2W {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    WCHAR szPname[MAXPNAMELEN];
    WORD wTechnology;
    WORD wReserved1;
    DWORD dwSupport;
    GUID ManufacturerGuid;
    GUID ProductGuid;
    GUID NameGuid;
} AUXCAPS2W, *PAUXCAPS2W, *NPAUXCAPS2W, *LPAUXCAPS2W;
typedef AUXCAPS2W AUXCAPS2;
typedef PAUXCAPS2W PAUXCAPS2;
typedef NPAUXCAPS2W NPAUXCAPS2;
typedef LPAUXCAPS2W LPAUXCAPS2;
WINMMAPI
UINT
WINAPI
auxGetNumDevs(
    void
    );
WINMMAPI
MMRESULT
WINAPI
auxGetDevCapsA(
    _In_ UINT_PTR uDeviceID,
    _Out_writes_bytes_(cbac) LPAUXCAPSA pac,
    _In_ UINT cbac
    );
WINMMAPI
MMRESULT
WINAPI
auxGetDevCapsW(
    _In_ UINT_PTR uDeviceID,
    _Out_writes_bytes_(cbac) LPAUXCAPSW pac,
    _In_ UINT cbac
    );
WINMMAPI
MMRESULT
WINAPI
auxSetVolume(
    _In_ UINT uDeviceID,
    _In_ DWORD dwVolume
    );
WINMMAPI
MMRESULT
WINAPI
auxGetVolume(
    _In_ UINT uDeviceID,
    _Out_ LPDWORD pdwVolume
    );
WINMMAPI
MMRESULT
WINAPI
auxOutMessage(
    _In_ UINT uDeviceID,
    _In_ UINT uMsg,
    _In_opt_ DWORD_PTR dw1,
    _In_opt_ DWORD_PTR dw2
    );
DECLARE_HANDLE(HMIXEROBJ);
typedef HMIXEROBJ FAR *LPHMIXEROBJ;
DECLARE_HANDLE(HMIXER);
typedef HMIXER FAR *LPHMIXER;
WINMMAPI
UINT
WINAPI
mixerGetNumDevs(
    void
    );
typedef struct tagMIXERCAPSA {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[MAXPNAMELEN];
    DWORD fdwSupport;
    DWORD cDestinations;
} MIXERCAPSA, *PMIXERCAPSA, *LPMIXERCAPSA;
typedef struct tagMIXERCAPSW {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    WCHAR szPname[MAXPNAMELEN];
    DWORD fdwSupport;
    DWORD cDestinations;
} MIXERCAPSW, *PMIXERCAPSW, *LPMIXERCAPSW;
typedef MIXERCAPSW MIXERCAPS;
typedef PMIXERCAPSW PMIXERCAPS;
typedef LPMIXERCAPSW LPMIXERCAPS;
typedef struct tagMIXERCAPS2A {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[MAXPNAMELEN];
    DWORD fdwSupport;
    DWORD cDestinations;
    GUID ManufacturerGuid;
    GUID ProductGuid;
    GUID NameGuid;
} MIXERCAPS2A, *PMIXERCAPS2A, *LPMIXERCAPS2A;
typedef struct tagMIXERCAPS2W {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    WCHAR szPname[MAXPNAMELEN];
    DWORD fdwSupport;
    DWORD cDestinations;
    GUID ManufacturerGuid;
    GUID ProductGuid;
    GUID NameGuid;
} MIXERCAPS2W, *PMIXERCAPS2W, *LPMIXERCAPS2W;
typedef MIXERCAPS2W MIXERCAPS2;
typedef PMIXERCAPS2W PMIXERCAPS2;
typedef LPMIXERCAPS2W LPMIXERCAPS2;
WINMMAPI
MMRESULT
WINAPI
mixerGetDevCapsA(
    _In_ UINT_PTR uMxId,
    _Out_writes_bytes_(cbmxcaps) LPMIXERCAPSA pmxcaps,
    _In_ UINT cbmxcaps
    );
WINMMAPI
MMRESULT
WINAPI
mixerGetDevCapsW(
    _In_ UINT_PTR uMxId,
    _Out_writes_bytes_(cbmxcaps) LPMIXERCAPSW pmxcaps,
    _In_ UINT cbmxcaps
    );
WINMMAPI
MMRESULT
WINAPI
mixerOpen(
    _Out_opt_ LPHMIXER phmx,
    _In_ UINT uMxId,
    _In_opt_ DWORD_PTR dwCallback,
    _In_opt_ DWORD_PTR dwInstance,
    _In_ DWORD fdwOpen
    );
WINMMAPI
MMRESULT
WINAPI
mixerClose(
    _In_ HMIXER hmx
    );
WINMMAPI
DWORD
WINAPI
mixerMessage(
    _In_opt_ HMIXER hmx,
    _In_ UINT uMsg,
    _In_opt_ DWORD_PTR dwParam1,
    _In_opt_ DWORD_PTR dwParam2
    );
typedef struct tagMIXERLINEA {
    DWORD cbStruct;
    DWORD dwDestination;
    DWORD dwSource;
    DWORD dwLineID;
    DWORD fdwLine;
    DWORD_PTR dwUser;
    DWORD dwComponentType;
    DWORD cChannels;
    DWORD cConnections;
    DWORD cControls;
    CHAR szShortName[MIXER_SHORT_NAME_CHARS];
    CHAR szName[MIXER_LONG_NAME_CHARS];
    struct {
        DWORD dwType;
        DWORD dwDeviceID;
        WORD wMid;
        WORD wPid;
        MMVERSION vDriverVersion;
        CHAR szPname[MAXPNAMELEN];
    } Target;
} MIXERLINEA, *PMIXERLINEA, *LPMIXERLINEA;
typedef struct tagMIXERLINEW {
    DWORD cbStruct;
    DWORD dwDestination;
    DWORD dwSource;
    DWORD dwLineID;
    DWORD fdwLine;
    DWORD_PTR dwUser;
    DWORD dwComponentType;
    DWORD cChannels;
    DWORD cConnections;
    DWORD cControls;
    WCHAR szShortName[MIXER_SHORT_NAME_CHARS];
    WCHAR szName[MIXER_LONG_NAME_CHARS];
    struct {
        DWORD dwType;
        DWORD dwDeviceID;
        WORD wMid;
        WORD wPid;
        MMVERSION vDriverVersion;
        WCHAR szPname[MAXPNAMELEN];
    } Target;
} MIXERLINEW, *PMIXERLINEW, *LPMIXERLINEW;
typedef MIXERLINEW MIXERLINE;
typedef PMIXERLINEW PMIXERLINE;
typedef LPMIXERLINEW LPMIXERLINE;
WINMMAPI
MMRESULT
WINAPI
mixerGetLineInfoA(
    _In_opt_ HMIXEROBJ hmxobj,
    _Inout_ LPMIXERLINEA pmxl,
    _In_ DWORD fdwInfo
    );
WINMMAPI
MMRESULT
WINAPI
mixerGetLineInfoW(
    _In_opt_ HMIXEROBJ hmxobj,
    _Inout_ LPMIXERLINEW pmxl,
    _In_ DWORD fdwInfo
    );
WINMMAPI
MMRESULT
WINAPI
mixerGetID(
    _In_opt_ HMIXEROBJ hmxobj,
    _Out_ UINT FAR * puMxId,
    _In_ DWORD fdwId
    );
typedef struct tagMIXERCONTROLA {
    DWORD cbStruct;
    DWORD dwControlID;
    DWORD dwControlType;
    DWORD fdwControl;
    DWORD cMultipleItems;
    CHAR szShortName[MIXER_SHORT_NAME_CHARS];
    CHAR szName[MIXER_LONG_NAME_CHARS];
    union {
        struct {
            LONG lMinimum;
            LONG lMaximum;
        } DUMMYSTRUCTNAME;
        struct {
            DWORD dwMinimum;
            DWORD dwMaximum;
        } DUMMYSTRUCTNAME2;
        DWORD dwReserved[6];
    } Bounds;
    union {
        DWORD cSteps;
        DWORD cbCustomData;
        DWORD dwReserved[6];
    } Metrics;
} MIXERCONTROLA, *PMIXERCONTROLA, *LPMIXERCONTROLA;
typedef struct tagMIXERCONTROLW {
    DWORD cbStruct;
    DWORD dwControlID;
    DWORD dwControlType;
    DWORD fdwControl;
    DWORD cMultipleItems;
    WCHAR szShortName[MIXER_SHORT_NAME_CHARS];
    WCHAR szName[MIXER_LONG_NAME_CHARS];
    union {
        struct {
            LONG lMinimum;
            LONG lMaximum;
        } DUMMYSTRUCTNAME;
        struct {
            DWORD dwMinimum;
            DWORD dwMaximum;
        } DUMMYSTRUCTNAME2;
        DWORD dwReserved[6];
    } Bounds;
    union {
        DWORD cSteps;
        DWORD cbCustomData;
        DWORD dwReserved[6];
    } Metrics;
} MIXERCONTROLW, *PMIXERCONTROLW, *LPMIXERCONTROLW;
typedef MIXERCONTROLW MIXERCONTROL;
typedef PMIXERCONTROLW PMIXERCONTROL;
typedef LPMIXERCONTROLW LPMIXERCONTROL;
typedef struct tagMIXERLINECONTROLSA {
    DWORD cbStruct;
    DWORD dwLineID;
    union {
        DWORD dwControlID;
        DWORD dwControlType;
    } DUMMYUNIONNAME;
    DWORD cControls;
    DWORD cbmxctrl;
    LPMIXERCONTROLA pamxctrl;
} MIXERLINECONTROLSA, *PMIXERLINECONTROLSA, *LPMIXERLINECONTROLSA;
typedef struct tagMIXERLINECONTROLSW {
    DWORD cbStruct;
    DWORD dwLineID;
    union {
        DWORD dwControlID;
        DWORD dwControlType;
    } DUMMYUNIONNAME;
    DWORD cControls;
    DWORD cbmxctrl;
    LPMIXERCONTROLW pamxctrl;
} MIXERLINECONTROLSW, *PMIXERLINECONTROLSW, *LPMIXERLINECONTROLSW;
typedef MIXERLINECONTROLSW MIXERLINECONTROLS;
typedef PMIXERLINECONTROLSW PMIXERLINECONTROLS;
typedef LPMIXERLINECONTROLSW LPMIXERLINECONTROLS;
WINMMAPI
MMRESULT
WINAPI
mixerGetLineControlsA(
    _In_opt_ HMIXEROBJ hmxobj,
    _Inout_ LPMIXERLINECONTROLSA pmxlc,
    _In_ DWORD fdwControls
    );
WINMMAPI
MMRESULT
WINAPI
mixerGetLineControlsW(
    _In_opt_ HMIXEROBJ hmxobj,
    _Inout_ LPMIXERLINECONTROLSW pmxlc,
    _In_ DWORD fdwControls
    );
typedef struct tMIXERCONTROLDETAILS {
    DWORD cbStruct;
    DWORD dwControlID;
    DWORD cChannels;
    union {
        HWND hwndOwner;
        DWORD cMultipleItems;
    } DUMMYUNIONNAME;
    DWORD cbDetails;
    LPVOID paDetails;
} MIXERCONTROLDETAILS, *PMIXERCONTROLDETAILS, FAR *LPMIXERCONTROLDETAILS;
typedef struct tagMIXERCONTROLDETAILS_LISTTEXTA {
    DWORD dwParam1;
    DWORD dwParam2;
    CHAR szName[MIXER_LONG_NAME_CHARS];
} MIXERCONTROLDETAILS_LISTTEXTA, *PMIXERCONTROLDETAILS_LISTTEXTA, *LPMIXERCONTROLDETAILS_LISTTEXTA;
typedef struct tagMIXERCONTROLDETAILS_LISTTEXTW {
    DWORD dwParam1;
    DWORD dwParam2;
    WCHAR szName[MIXER_LONG_NAME_CHARS];
} MIXERCONTROLDETAILS_LISTTEXTW, *PMIXERCONTROLDETAILS_LISTTEXTW, *LPMIXERCONTROLDETAILS_LISTTEXTW;
typedef MIXERCONTROLDETAILS_LISTTEXTW MIXERCONTROLDETAILS_LISTTEXT;
typedef PMIXERCONTROLDETAILS_LISTTEXTW PMIXERCONTROLDETAILS_LISTTEXT;
typedef LPMIXERCONTROLDETAILS_LISTTEXTW LPMIXERCONTROLDETAILS_LISTTEXT;
typedef struct tMIXERCONTROLDETAILS_BOOLEAN {
    LONG fValue;
} MIXERCONTROLDETAILS_BOOLEAN,
      *PMIXERCONTROLDETAILS_BOOLEAN,
 FAR *LPMIXERCONTROLDETAILS_BOOLEAN;
typedef struct tMIXERCONTROLDETAILS_SIGNED {
    LONG lValue;
} MIXERCONTROLDETAILS_SIGNED,
      *PMIXERCONTROLDETAILS_SIGNED,
 FAR *LPMIXERCONTROLDETAILS_SIGNED;
typedef struct tMIXERCONTROLDETAILS_UNSIGNED {
    DWORD dwValue;
} MIXERCONTROLDETAILS_UNSIGNED,
      *PMIXERCONTROLDETAILS_UNSIGNED,
 FAR *LPMIXERCONTROLDETAILS_UNSIGNED;
WINMMAPI
MMRESULT
WINAPI
mixerGetControlDetailsA(
    _In_opt_ HMIXEROBJ hmxobj,
    _Inout_ LPMIXERCONTROLDETAILS pmxcd,
    _In_ DWORD fdwDetails
    );
WINMMAPI
MMRESULT
WINAPI
mixerGetControlDetailsW(
    _In_opt_ HMIXEROBJ hmxobj,
    _Inout_ LPMIXERCONTROLDETAILS pmxcd,
    _In_ DWORD fdwDetails
    );
WINMMAPI
MMRESULT
WINAPI
mixerSetControlDetails(
    _In_opt_ HMIXEROBJ hmxobj,
    _In_ LPMIXERCONTROLDETAILS pmxcd,
    _In_ DWORD fdwDetails
    );
#endif
#pragma endregion
}
