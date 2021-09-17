extern "C" {
DWORD FAR PASCAL GetVDMPointer32W(LPVOID vp, UINT fMode);
DWORD FAR PASCAL LoadLibraryEx32W(LPCSTR lpszLibFile, DWORD hFile, DWORD dwFlags);
DWORD FAR PASCAL GetProcAddress32W(DWORD hModule, LPCSTR lpszProc);
DWORD FAR PASCAL FreeLibrary32W(DWORD hLibModule);
DWORD FAR CDECL CallProcEx32W( DWORD, DWORD, DWORD, ... );
}
