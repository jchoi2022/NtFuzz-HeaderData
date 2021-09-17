       
#include <winapifamily.h>
#include <Shellapi.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
ULONG MAPISendMailHelper(_In_ LHANDLE lhSession, _In_ ULONG_PTR ulUIParam, _In_ lpMapiMessageW lpMessage, _In_ FLAGS flFlags, _In_ ULONG ulReserved);
HMODULE LoadDefaultMailProvider(_Out_ bool *pfSupportUTF8);
HRESULT ConvertMessageFromUnicode(_In_ const MapiMessageW *pMessageIn, _Outptr_ MapiMessage **ppMessageOut, bool fSupportUTF8);
void FreeMessage(_Inout_opt_ MapiMessage* pMessage);
__inline ULONG MAPISendMailHelper(
  _In_ LHANDLE lhSession,
  _In_ ULONG_PTR ulUIParam,
  _In_ lpMapiMessageW lpMessage,
  _In_ FLAGS flFlags,
  _In_ ULONG ulReserved)
{
    ULONG ulRet = MAPI_E_FAILURE;
    HMODULE hMapi32 = LoadLibraryW(L"mapi32.dll");
    if (hMapi32)
    {
        LPMAPISENDMAILW pfnMapiSendMailW = (LPMAPISENDMAILW)GetProcAddress(hMapi32, "MAPISendMailW");
        if (pfnMapiSendMailW)
        {
            ulRet = pfnMapiSendMailW(lhSession, ulUIParam, lpMessage, flFlags, ulReserved);
        }
        else
        {
            bool fMadeCall = false;
            bool fSupportsUTF8 = false;
            HMODULE hMapiProvider = LoadDefaultMailProvider(&fSupportsUTF8);
            if (hMapiProvider)
            {
                LPMAPISENDMAILW pfnMapiSendMailProviderW = (LPMAPISENDMAILW)GetProcAddress(hMapiProvider, "MAPISendMailW");
                if (pfnMapiSendMailProviderW)
                {
                    ulRet = pfnMapiSendMailProviderW(lhSession, ulUIParam, lpMessage, flFlags, ulReserved);
                    fMadeCall = true;
                }
                FreeLibrary(hMapiProvider);
            }
            if (!fMadeCall && ((flFlags & MAPI_FORCE_UNICODE) != MAPI_FORCE_UNICODE))
            {
                MapiMessage *pMapiMessageA;
                if (SUCCEEDED(ConvertMessageFromUnicode(lpMessage, &pMapiMessageA, fSupportsUTF8)))
                {
                    LPMAPISENDMAIL pfnMapiSendMailA = (LPMAPISENDMAIL)GetProcAddress(hMapi32, "MAPISendMail");
                    if (pfnMapiSendMailA)
                    {
                        ulRet = pfnMapiSendMailA(lhSession, ulUIParam, pMapiMessageA, flFlags, ulReserved);
                    }
                    FreeMessage(pMapiMessageA);
                }
            }
        }
        FreeLibrary(hMapi32);
    }
    return ulRet;
}
__inline HRESULT AllocFileDesc(ULONG nFileDesc, _Outptr_result_buffer_(nFileDesc) MapiFileDesc** ppFileDesc)
{
    HRESULT hr = E_INVALIDARG;
    if (ppFileDesc && (nFileDesc > 0))
    {
        *ppFileDesc = NULL;
        MapiFileDesc* pNewFileDesc = new MapiFileDesc[nFileDesc];
        if (pNewFileDesc == NULL)
        {
            hr = E_OUTOFMEMORY;
        }
        else
        {
            ZeroMemory(pNewFileDesc, nFileDesc * sizeof(MapiFileDesc));
            *ppFileDesc = pNewFileDesc;
             hr = S_OK;
        }
    }
    return hr;
}
__inline void FreeFileDesc(_Inout_updates_opt_(nFileDesc) MapiFileDesc* pFileDesc, ULONG nFileDesc)
{
    if (pFileDesc)
    {
        for (ULONG i = 0; i < nFileDesc; i++)
        {
            delete[] pFileDesc[i].lpszPathName;
            delete[] pFileDesc[i].lpszFileName;
            pFileDesc[i].ulReserved = 0;
            pFileDesc[i].flFlags = 0;
            pFileDesc[i].nPosition = 0;
            pFileDesc[i].lpszPathName = 0;
            pFileDesc[i].lpszFileName = 0;
            pFileDesc[i].lpFileType = NULL;
        }
    }
}
__inline HRESULT AllocRecipDesc(ULONG nRecipDesc, _Outptr_result_buffer_(nRecipDesc) MapiRecipDesc** ppRecipDesc)
{
    HRESULT hr = E_INVALIDARG;
    if (ppRecipDesc && (nRecipDesc > 0))
    {
        *ppRecipDesc = NULL;
        MapiRecipDesc* pNewRecipDesc = new MapiRecipDesc[nRecipDesc];
        if (pNewRecipDesc == NULL)
        {
            hr = E_OUTOFMEMORY;
        }
        else
        {
            ZeroMemory(pNewRecipDesc, nRecipDesc * sizeof(MapiRecipDesc));
            *ppRecipDesc = pNewRecipDesc;
            hr = S_OK;
        }
    }
    return hr;
}
__inline void FreeRecipDesc(_Inout_updates_opt_(nRecipDesc) MapiRecipDesc* pRecipDesc, ULONG nRecipDesc)
{
    if (pRecipDesc)
    {
        for (ULONG i = 0; i < nRecipDesc; i++)
        {
            delete[] pRecipDesc[i].lpszName;
            delete[] pRecipDesc[i].lpszAddress;
            delete[] pRecipDesc[i].lpEntryID;
            pRecipDesc[i].ulReserved = 0;
            pRecipDesc[i].ulRecipClass = 0;
            pRecipDesc[i].lpszName = 0;
            pRecipDesc[i].lpszAddress = 0;
            pRecipDesc[i].ulEIDSize = 0;
            pRecipDesc[i].lpEntryID = 0;
        }
    }
}
__inline void FreeMessage(_Inout_opt_ MapiMessage* pMessage)
{
    if (pMessage)
    {
        FreeRecipDesc(pMessage->lpOriginator, 1);
        FreeRecipDesc(pMessage->lpRecips, pMessage->nRecipCount);
        FreeFileDesc(pMessage->lpFiles, pMessage->nFileCount);
        delete[] pMessage->lpszSubject;
        delete[] pMessage->lpszNoteText;
        delete[] pMessage->lpszMessageType;
        delete[] pMessage->lpszDateReceived;
        delete[] pMessage->lpszConversationID;
        delete[] pMessage->lpOriginator;
        delete[] pMessage->lpRecips;
        delete[] pMessage->lpFiles;
        pMessage->ulReserved = 0;
        pMessage->lpszSubject = 0;
        pMessage->lpszNoteText = 0;
        pMessage->lpszMessageType = 0;
        pMessage->lpszDateReceived = 0;
        pMessage->lpszConversationID = 0;
        pMessage->flFlags = 0;
        pMessage->lpOriginator = 0;
        pMessage->nRecipCount = 0;
        pMessage->lpRecips = 0;
        pMessage->nFileCount = 0;
        pMessage->lpFiles = 0;
        delete pMessage;
    }
}
__inline HRESULT ConvertStringToMultiByteEx(PCWSTR pszIn, _Outptr_ PSTR *ppszOut, bool fSupportUTF8, _Out_opt_ bool *pfUsedDefaultChar)
{
    HRESULT hr = S_OK;
    *ppszOut = NULL;
    if (pfUsedDefaultChar)
    {
        *pfUsedDefaultChar = false;
    }
    if (pszIn)
    {
        BOOL fUsedDefaultChar = FALSE;
        int iLen = WideCharToMultiByte(fSupportUTF8 ? CP_UTF8 : CP_ACP, fSupportUTF8 ? WC_ERR_INVALID_CHARS : 0, pszIn, -1, NULL, 0, NULL, fSupportUTF8 ? NULL : &fUsedDefaultChar);
        if (iLen)
        {
            *ppszOut = new char[iLen];
            if (*ppszOut)
            {
                if (0 == WideCharToMultiByte(fSupportUTF8 ? CP_UTF8 : CP_ACP, fSupportUTF8 ? WC_ERR_INVALID_CHARS : 0, pszIn, -1, *ppszOut, iLen, NULL, fSupportUTF8 ? NULL : &fUsedDefaultChar))
                {
                    delete[] *ppszOut;
                    *ppszOut = NULL;
                    hr = HRESULT_FROM_WIN32(GetLastError());
                }
                else if (pfUsedDefaultChar)
                {
                    *pfUsedDefaultChar = (fUsedDefaultChar != FALSE);
                }
            }
            else
            {
                hr = E_OUTOFMEMORY;
            }
        }
        else
        {
            hr = HRESULT_FROM_WIN32(GetLastError());
        }
    }
    return hr;
}
__inline HRESULT ConvertStringToMultiByte(PCWSTR pszIn, _Outptr_result_maybenull_ PSTR *ppszOut)
{
    return ConvertStringToMultiByteEx(pszIn, ppszOut, false, NULL);
}
__inline HRESULT ConvertFilePathFromUnicode(PCWSTR pszIn, _Outptr_result_maybenull_ PSTR *ppszOut)
{
    *ppszOut = NULL;
    bool fUsedDefaultChar = false;
    HRESULT hr = ConvertStringToMultiByteEx(pszIn, ppszOut, false, &fUsedDefaultChar);
    if (SUCCEEDED(hr) && fUsedDefaultChar)
    {
        delete[] *ppszOut;
        *ppszOut = NULL;
        wchar_t wzTemp[MAX_PATH];
        DWORD dwRes = GetShortPathNameW(pszIn, wzTemp, ARRAYSIZE(wzTemp));
        if (dwRes >= ARRAYSIZE(wzTemp))
        {
            hr = E_INVALIDARG;
        }
        else if (dwRes == 0)
        {
            hr = HRESULT_FROM_WIN32(GetLastError());
        }
        else
        {
            hr = ConvertStringToMultiByteEx(wzTemp, ppszOut, false, &fUsedDefaultChar);
            if (SUCCEEDED(hr) && fUsedDefaultChar)
            {
                delete[] *ppszOut;
                *ppszOut = NULL;
                hr = E_INVALIDARG;
            }
        }
    }
    return hr;
}
__inline HRESULT ConvertFileDescArrayFromUnicode(_In_reads_(ulFileDesc) const MapiFileDescW *pFileIn, ULONG ulFileDesc, _Outptr_result_buffer_(ulFileDesc) MapiFileDesc **ppFileOut)
{
    HRESULT hr = S_OK;
    *ppFileOut = NULL;
    if (pFileIn && ulFileDesc)
    {
        MapiFileDesc *pFileOut = NULL;
        hr = AllocFileDesc(ulFileDesc, &pFileOut);
        if (SUCCEEDED(hr))
        {
            for (ULONG ul = 0; SUCCEEDED(hr) && ul < ulFileDesc; ul++)
            {
                hr = ConvertFilePathFromUnicode(pFileIn[ul].lpszPathName, &pFileOut[ul].lpszPathName);
                if (SUCCEEDED(hr))
                {
                    hr = ConvertStringToMultiByte(pFileIn[ul].lpszFileName, &pFileOut[ul].lpszFileName);
                }
                if (SUCCEEDED(hr))
                {
                    pFileOut[ul].ulReserved = pFileIn[ul].ulReserved;
                    pFileOut[ul].flFlags = pFileIn[ul].flFlags;
                    pFileOut[ul].nPosition = pFileIn[ul].nPosition;
                    pFileOut[ul].lpFileType = pFileIn[ul].lpFileType;
                }
            }
            if (SUCCEEDED(hr))
            {
                *ppFileOut = pFileOut;
            }
            else
            {
                FreeFileDesc(pFileOut, ulFileDesc);
                delete[] pFileOut;
            }
        }
    }
    return hr;
}
__inline HRESULT ConvertRecipDescArrayFromUnicode(_In_reads_(ulRecipDesc) const MapiRecipDescW *pRecipIn, ULONG ulRecipDesc, _Outptr_result_buffer_(ulRecipDesc) MapiRecipDesc **ppRecipOut)
{
    HRESULT hr = S_OK;
    *ppRecipOut = NULL;
    if (pRecipIn && ulRecipDesc)
    {
        MapiRecipDesc *pRecipOut = NULL;
        hr = AllocRecipDesc(ulRecipDesc, &pRecipOut);
        if (SUCCEEDED(hr))
        {
            for (ULONG ul = 0; SUCCEEDED(hr) && ul < ulRecipDesc; ul++)
            {
                hr = ConvertStringToMultiByte(pRecipIn[ul].lpszName, &pRecipOut[ul].lpszName);
                if (SUCCEEDED(hr))
                {
                    hr = ConvertStringToMultiByte(pRecipIn[ul].lpszAddress, &pRecipOut[ul].lpszAddress);
                }
                if (SUCCEEDED(hr) && pRecipIn[ul].ulEIDSize && pRecipIn[ul].lpEntryID)
                {
                    pRecipOut[ul].lpEntryID = new BYTE[pRecipIn[ul].ulEIDSize];
                    if (pRecipOut[ul].lpEntryID)
                    {
                        memcpy(pRecipOut[ul].lpEntryID, pRecipIn[ul].lpEntryID, pRecipIn[ul].ulEIDSize);
                    }
                    else
                    {
                        hr = E_OUTOFMEMORY;
                    }
                }
                if (SUCCEEDED(hr))
                {
                    pRecipOut[ul].ulReserved = pRecipIn[ul].ulReserved;
                    pRecipOut[ul].ulRecipClass = pRecipIn[ul].ulRecipClass;
                    pRecipOut[ul].ulEIDSize = pRecipIn[ul].ulEIDSize;
                }
            }
            if (SUCCEEDED(hr))
            {
                *ppRecipOut = pRecipOut;
            }
            else
            {
                FreeRecipDesc(pRecipOut, ulRecipDesc);
                delete[] pRecipOut;
            }
        }
    }
    return hr;
}
__inline HRESULT ConvertMessageFromUnicode(_In_ const MapiMessageW *pMessageIn, _Outptr_ MapiMessage **ppMessageOut, bool fSupportUTF8)
{
    HRESULT hr = S_OK;
    *ppMessageOut = NULL;
    if (pMessageIn)
    {
        MapiMessage *pMessageOut = new MapiMessage;
        if (pMessageOut == NULL)
        {
           hr = E_OUTOFMEMORY;
        }
        else
        {
            ZeroMemory(pMessageOut, sizeof(MapiMessage));
            hr = ConvertStringToMultiByteEx(pMessageIn->lpszSubject, &pMessageOut->lpszSubject, fSupportUTF8, NULL);
            if (SUCCEEDED(hr))
            {
                hr = ConvertStringToMultiByteEx(pMessageIn->lpszNoteText, &pMessageOut->lpszNoteText, fSupportUTF8, NULL);
                if (SUCCEEDED(hr))
                {
                    hr = ConvertStringToMultiByte(pMessageIn->lpszMessageType, &pMessageOut->lpszMessageType);
                    if (SUCCEEDED(hr))
                    {
                        hr = ConvertStringToMultiByte(pMessageIn->lpszDateReceived, &pMessageOut->lpszDateReceived);
                        if (SUCCEEDED(hr))
                        {
                            hr = ConvertStringToMultiByte(pMessageIn->lpszConversationID, &pMessageOut->lpszConversationID);
                            if (SUCCEEDED(hr))
                            {
                                hr = ConvertRecipDescArrayFromUnicode(pMessageIn->lpOriginator, 1, &pMessageOut->lpOriginator);
                                if (SUCCEEDED(hr))
                                {
                                    hr = ConvertRecipDescArrayFromUnicode(pMessageIn->lpRecips, pMessageIn->nRecipCount, &pMessageOut->lpRecips);
                                    if (SUCCEEDED(hr))
                                    {
                                        hr = ConvertFileDescArrayFromUnicode(pMessageIn->lpFiles, pMessageIn->nFileCount, &pMessageOut->lpFiles);
                                        if (SUCCEEDED(hr))
                                        {
                                            pMessageOut->ulReserved = fSupportUTF8 ? CP_UTF8 : pMessageIn->ulReserved;
                                            pMessageOut->flFlags = pMessageIn->flFlags;
                                            pMessageOut->nRecipCount = pMessageIn->nRecipCount;
                                            pMessageOut->nFileCount = pMessageIn->nFileCount;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (SUCCEEDED(hr))
            {
                *ppMessageOut = pMessageOut;
            }
            else
            {
                 FreeMessage(pMessageOut);
            }
        }
    }
    return hr;
}
typedef UINT (WINAPI MSIPROVIDEQUALIFIEDCOMPONENTW)(PCWSTR, PCWSTR, DWORD, PWSTR, DWORD*);
typedef MSIPROVIDEQUALIFIEDCOMPONENTW * PMSIPROVIDEQUALIFIEDCOMPONENTW;
static const wchar_t s_wszLcid[] = L"Software\\";
static const wchar_t s_wszPolicy[] = L"Software\\Policy\\";
__inline bool GetComponentPathOrInstall(HINSTANCE hinstMSI, PCWSTR szCategory, DWORD dwLcid, _Out_writes_(*pcchPath) PWSTR szPath, _Inout_ DWORD *pcchPath, bool fInstall)
{
    UINT uiRet = ERROR_INDEX_ABSENT;
    wchar_t szQualifier[16];
    PMSIPROVIDEQUALIFIEDCOMPONENTW pfnMsiProvideQualifiedComponentW;
    const DWORD cchPathOrig = *pcchPath;
    pfnMsiProvideQualifiedComponentW = (PMSIPROVIDEQUALIFIEDCOMPONENTW)GetProcAddress(hinstMSI, "MsiProvideQualifiedComponentW");
    if (pfnMsiProvideQualifiedComponentW)
    {
        szPath[0] = L'\0';
        szQualifier[0] = L'\0';
        swprintf_s(szQualifier, ARRAYSIZE(szQualifier), L"%lu\\%s", dwLcid, L"NT");
        uiRet = pfnMsiProvideQualifiedComponentW(szCategory, szQualifier, static_cast<DWORD>(-1), szPath, pcchPath);
        if (uiRet == ERROR_FILE_NOT_FOUND || uiRet == ERROR_INDEX_ABSENT)
        {
            *pcchPath = cchPathOrig;
            if (fInstall && uiRet == ERROR_FILE_NOT_FOUND)
            {
                uiRet = pfnMsiProvideQualifiedComponentW(szCategory, szQualifier, 0, szPath, pcchPath);
            }
            else
            {
                swprintf_s(szQualifier, ARRAYSIZE(szQualifier), L"%lu", dwLcid);
                uiRet = pfnMsiProvideQualifiedComponentW(szCategory, szQualifier, static_cast<DWORD>(-1), szPath, pcchPath);
                if (fInstall && uiRet == ERROR_FILE_NOT_FOUND)
                {
                    *pcchPath = cchPathOrig;
                    uiRet = pfnMsiProvideQualifiedComponentW(szCategory, szQualifier, 0, szPath, pcchPath);
                }
            }
        }
    }
    return (uiRet != ERROR_INDEX_ABSENT);
}
__inline bool GetComponentPath(_In_opt_ PWSTR szComponent, _In_opt_ PZZWSTR szzQualifier, _Out_writes_(cchDllPath) PWSTR szDllPath, DWORD cchDllPath, bool fInstall)
{
    szDllPath[0] = L'\0';
    HINSTANCE hinstMSI = NULL;
    size_t cb;
    PWSTR szLcid = NULL;
    HKEY hkeyLcid = NULL;
    PWSTR szPolicy = NULL;
    HKEY hkeyPolicy = NULL;
    bool fDone = false;
    PWSTR szName;
    DWORD dwLcid;
    const DWORD cchDllPathOrig = cchDllPath;
    hinstMSI = ::LoadLibraryW(L"MSI.DLL");
    if (hinstMSI)
    {
        if (szzQualifier == NULL || szzQualifier[0] == L'\0')
        {
            fDone = true;
            if (!GetComponentPathOrInstall(hinstMSI, szComponent, GetUserDefaultLCID(), szDllPath, &cchDllPath, fInstall))
            {
                cchDllPath = cchDllPathOrig;
                if (!GetComponentPathOrInstall(hinstMSI, szComponent, GetSystemDefaultLCID(), szDllPath, &cchDllPath, fInstall))
                {
                    cchDllPath = cchDllPathOrig;
                    if (!GetComponentPathOrInstall(hinstMSI, szComponent, 1033, szDllPath, &cchDllPath, fInstall))
                    {
                        fDone = false;
                    }
                }
            }
        }
        else
        {
            cb = (wcslen(s_wszPolicy) + wcslen(szzQualifier) + 1) * sizeof(wchar_t);
            szPolicy = (PWSTR) HeapAlloc(GetProcessHeap(), 0, cb);
            if (szPolicy)
            {
                wcscpy_s(szPolicy, cb / sizeof(wchar_t), s_wszPolicy);
                wcscat_s(szPolicy, cb / sizeof(wchar_t), szzQualifier);
                RegOpenKeyExW(HKEY_CURRENT_USER, szPolicy, 0, KEY_READ, &hkeyPolicy);
            }
            cb = (wcslen(s_wszLcid) + wcslen(szzQualifier) + 1) * sizeof(wchar_t);
            szLcid = (LPWSTR) HeapAlloc(GetProcessHeap(), 0, cb);
            if (szLcid)
            {
                wcscpy_s(szLcid, cb / sizeof(wchar_t), s_wszLcid);
                wcscat_s(szLcid, cb / sizeof(wchar_t), szzQualifier);
                RegOpenKeyExW(HKEY_CURRENT_USER, szLcid, 0, KEY_READ, &hkeyLcid);
            }
            szName = &szzQualifier[wcslen(szzQualifier) + 1];
            while (szName[0] != L'\0' && !fDone)
            {
                DWORD dwType;
                DWORD dwSize = sizeof(dwLcid);
                DWORD dwSize1 = dwSize;
                if ((hkeyPolicy && RegQueryValueExW(hkeyPolicy, szName, 0, &dwType, (LPBYTE) &dwLcid, &dwSize) == ERROR_SUCCESS && dwType == REG_DWORD) ||
                    (hkeyLcid && RegQueryValueExW(hkeyLcid, szName, 0, &dwType, (LPBYTE) &dwLcid, &dwSize1) == ERROR_SUCCESS && dwType == REG_DWORD))
                {
                    cchDllPath = cchDllPathOrig;
                    fDone = GetComponentPathOrInstall(hinstMSI, szComponent, dwLcid, szDllPath, &cchDllPath, fInstall);
                }
                szName = &szName[wcslen(szName) + 1];
            }
        }
    }
    if (hkeyPolicy) { RegCloseKey(hkeyPolicy); }
    if (szPolicy) { HeapFree(GetProcessHeap(), 0, (LPVOID) szPolicy); }
    if (hkeyLcid) { RegCloseKey(hkeyLcid); }
    if (szLcid) { HeapFree(GetProcessHeap(), 0, (LPVOID) szLcid); }
    if (hinstMSI) { ::FreeLibrary(hinstMSI); }
    return fDone;
}
__inline bool AlwaysNeedsMSMAPI(_Out_writes_opt_(cchDllPath) PWSTR szDllPath, DWORD cchDllPath)
{
    bool fNeedsMSMAPI = false;
    HKEY hkeyRoot = NULL;
    long lResult = ::RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Windows Messaging Subsystem\\MSMapiApps", 0, KEY_READ, &hkeyRoot);
    if (ERROR_SUCCESS == lResult)
    {
        wchar_t szValueName[256];
        DWORD dwSize;
        DWORD dwIndex = 0;
        DWORD dwType;
        DWORD cbBuffer;
        do
        {
            dwSize = ARRAYSIZE(szValueName);
            if (NULL == szDllPath || 0 == cchDllPath)
            {
                lResult = ::RegEnumValueW(hkeyRoot, dwIndex++, szValueName, &dwSize, NULL, &dwType, NULL, NULL);
            }
            else
            {
                szDllPath[cchDllPath - 1] = L'\0';
                cbBuffer = (cchDllPath - 1) * sizeof(wchar_t);
                lResult = ::RegEnumValueW(hkeyRoot, dwIndex++, szValueName, &dwSize, NULL, &dwType, (LPBYTE) szDllPath, &cbBuffer);
            }
            if (ERROR_SUCCESS == lResult)
            {
                if (NULL != GetModuleHandleW(szValueName))
                {
                    fNeedsMSMAPI = true;
                    break;
                }
            }
        } while (ERROR_SUCCESS == lResult);
        ::RegCloseKey(hkeyRoot);
    }
    return fNeedsMSMAPI;
}
__inline bool IsTerminalServer(void)
{
    OSVERSIONINFOEXW osVersionInfo = {0};
    DWORDLONG dwlConditionMask = 0;
    osVersionInfo.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEXW);
    osVersionInfo.wSuiteMask = VER_SUITE_TERMINAL;
    VER_SET_CONDITION(dwlConditionMask, VER_SUITENAME, VER_AND);
    return (VerifyVersionInfoW(&osVersionInfo, VER_SUITENAME, dwlConditionMask) != 0);
}
__inline LRESULT GetMailClientRegKey(HKEY hkeyRoot, _Out_ HKEY* hkeyDefaultMail)
{
    HKEY hkey = nullptr;
    LRESULT lResult = ::RegOpenKeyExW(hkeyRoot, L"Software\\Clients\\Mail", 0, KEY_READ, &hkey);
    if (ERROR_SUCCESS == lResult)
    {
        wchar_t mailAppName[MAX_PATH] = L"";
        wchar_t defaultMailAppName[MAX_PATH];
        if (AlwaysNeedsMSMAPI(mailAppName, ARRAYSIZE(mailAppName)))
        {
            if (mailAppName[0] != L'\0')
            {
                wcscpy_s(defaultMailAppName, ARRAYSIZE(defaultMailAppName), mailAppName);
                lResult = ERROR_SUCCESS;
            }
            else
            {
                lResult = ERROR_PATH_NOT_FOUND;
            }
        }
        else
        {
            DWORD sizeInBytes = (ARRAYSIZE(defaultMailAppName) - 1) * sizeof(wchar_t);
            defaultMailAppName[ARRAYSIZE(defaultMailAppName) - 1] = L'\0';
            lResult = ::RegQueryValueExW(hkey, nullptr, nullptr, nullptr, (LPBYTE)defaultMailAppName, &sizeInBytes);
        }
        if (ERROR_SUCCESS == lResult)
        {
            lResult = ::RegOpenKeyExW(hkey, defaultMailAppName, 0, KEY_READ, hkeyDefaultMail);
            if (ERROR_SUCCESS != lResult && hkeyRoot == HKEY_CURRENT_USER)
            {
                wchar_t DefaultMailAppKeyPath[MAX_PATH];
                wcscpy_s(DefaultMailAppKeyPath, ARRAYSIZE(DefaultMailAppKeyPath), L"Software\\Clients\\Mail\\");
                wcscat_s(DefaultMailAppKeyPath, ARRAYSIZE(DefaultMailAppKeyPath), defaultMailAppName);
                lResult = ::RegOpenKeyExW(HKEY_LOCAL_MACHINE, DefaultMailAppKeyPath, 0, KEY_READ, hkeyDefaultMail);
            }
        }
        ::RegCloseKey(hkey);
    }
    return lResult;
}
__inline bool GetMapiDllPath(HKEY hkeyRoot, _Out_writes_(cchDllPath) PWSTR szDllPath, DWORD cchDllPath, _Out_ bool *pfSupportUTF8)
{
    szDllPath[0] = L'\0';
    *pfSupportUTF8 = false;
    DWORD cbBufferSizeT;
    DWORD dwType;
    HKEY hkeyDefaultMail = NULL;
    LRESULT lResult = GetMailClientRegKey(hkeyRoot, &hkeyDefaultMail);
    if (ERROR_SUCCESS == lResult)
    {
        DWORD dwSupportUTF8 = 0;
        cbBufferSizeT = sizeof(dwSupportUTF8);
        if (ERROR_SUCCESS == ::RegQueryValueExW(hkeyDefaultMail, L"SupportUTF8", NULL, &dwType, (LPBYTE)&dwSupportUTF8, &cbBufferSizeT))
        {
            if (REG_DWORD == dwType && dwSupportUTF8 != 0)
            {
                *pfSupportUTF8 = true;
            }
        }
        wchar_t szComponent[39 + 1] = {0};
        DWORD dwMSIInstallOnWTS;
        PWSTR szMSIOfficeLCID = NULL;
        PWSTR szMSIApplicationLCID = NULL;
        cbBufferSizeT = sizeof(dwMSIInstallOnWTS);
        lResult = ::RegQueryValueExW(hkeyDefaultMail, L"MSIInstallOnWTS", NULL, &dwType, (LPBYTE) &dwMSIInstallOnWTS, &cbBufferSizeT);
        if (ERROR_SUCCESS == lResult && REG_DWORD == dwType)
        {
        }
        else
        {
            dwMSIInstallOnWTS = 1;
        }
        lResult = ::RegQueryValueExW(hkeyDefaultMail, L"MSIApplicationLCID", NULL, &dwType, NULL, &cbBufferSizeT);
        if (ERROR_SUCCESS == lResult && REG_MULTI_SZ == dwType)
        {
            szMSIApplicationLCID = (PWSTR)HeapAlloc(GetProcessHeap(), 0, cbBufferSizeT + sizeof(wchar_t));
            if (szMSIApplicationLCID)
            {
                szMSIApplicationLCID[cbBufferSizeT / sizeof(wchar_t)] = L'\0';
                lResult = ::RegQueryValueExW(hkeyDefaultMail, L"MSIApplicationLCID", NULL, &dwType, (LPBYTE) szMSIApplicationLCID, &cbBufferSizeT);
            }
        }
        if (ERROR_SUCCESS == lResult)
        {
            lResult = ::RegQueryValueExW(hkeyDefaultMail, L"MSIOfficeLCID", NULL, &dwType, NULL, &cbBufferSizeT);
        }
        if (ERROR_SUCCESS == lResult && REG_MULTI_SZ == dwType)
        {
            szMSIOfficeLCID = (PWSTR)HeapAlloc(GetProcessHeap(), 0, cbBufferSizeT + sizeof(wchar_t));
            if (szMSIOfficeLCID)
            {
                szMSIOfficeLCID[cbBufferSizeT / sizeof(wchar_t)] = L'\0';
                lResult = ::RegQueryValueExW(hkeyDefaultMail, L"MSIOfficeLCID", NULL, &dwType, (LPBYTE) szMSIOfficeLCID, &cbBufferSizeT);
            }
        }
        bool fDone = false;
        cbBufferSizeT = (ARRAYSIZE(szComponent) - 1) * sizeof(wchar_t);
        szComponent[ARRAYSIZE(szComponent) - 1] = L'\0';
        if (ERROR_SUCCESS == lResult)
        {
            lResult = ::RegQueryValueExW(hkeyDefaultMail, L"MSIComponentID", NULL, &dwType, (LPBYTE) szComponent, &cbBufferSizeT);
        }
        if (ERROR_SUCCESS == lResult && REG_SZ == dwType)
        {
            bool fInstall = dwMSIInstallOnWTS || !IsTerminalServer();
            if (szMSIApplicationLCID && GetComponentPath(szComponent, szMSIApplicationLCID, szDllPath, cchDllPath, fInstall))
            {
                fDone = true;
            }
            else if (szMSIOfficeLCID && GetComponentPath(szComponent, szMSIOfficeLCID, szDllPath, cchDllPath, fInstall))
            {
                fDone = true;
            }
            else if (GetComponentPath(szComponent, NULL, szDllPath, cchDllPath, fInstall))
            {
                fDone = true;
            }
        }
        if (!fDone)
        {
            cbBufferSizeT = (cchDllPath - 1) * sizeof(wchar_t);
            szDllPath[cchDllPath - 1] = L'\0';
            lResult = ::RegQueryValueExW(hkeyDefaultMail, L"DLLPath", NULL, &dwType, (LPBYTE) szDllPath, &cbBufferSizeT);
            if (ERROR_SUCCESS != lResult)
            {
                szDllPath[0] = L'\0';
            }
            else if (REG_EXPAND_SZ == dwType)
            {
                wchar_t szExpandedPath[MAX_PATH];
                lResult = ExpandEnvironmentStringsW(szDllPath, szExpandedPath, MAX_PATH);
                if (lResult > 0 && lResult < MAX_PATH)
                {
                    wcscpy_s(szDllPath, cchDllPath, szExpandedPath);
                }
                else
                {
                    szDllPath[0] = L'\0';
                }
            }
        }
        if (szMSIApplicationLCID)
        {
            HeapFree(GetProcessHeap(), 0, (LPVOID) szMSIApplicationLCID);
        }
        if (szMSIOfficeLCID)
        {
            HeapFree(GetProcessHeap(), 0, (LPVOID) szMSIOfficeLCID);
        }
        ::RegCloseKey(hkeyDefaultMail);
    }
    return (L'\0' != szDllPath[0]);
}
__inline bool GetDefaultMailClientExePath(HKEY hkeyRoot, _Out_ PWSTR* exePath)
{
    *exePath = nullptr;
    HKEY hkeyDefaultMail = nullptr;
    LRESULT lResult = GetMailClientRegKey(hkeyRoot, &hkeyDefaultMail);
    if (ERROR_SUCCESS == lResult)
    {
        HKEY hkeyShellCommand = nullptr;
        lResult = ::RegOpenKeyExW(hkeyDefaultMail, L"shell\\open\\command", 0, KEY_READ, &hkeyShellCommand);
        if (ERROR_SUCCESS == lResult)
        {
            wchar_t shellCommand[MAX_PATH];
            wchar_t expandedPath[MAX_PATH];
            DWORD bufferSizeInBytes = ARRAYSIZE(shellCommand) * sizeof(wchar_t);
            DWORD valueType;
            lResult = ::RegQueryValueExW(hkeyShellCommand, L"", NULL, &valueType, (LPBYTE)shellCommand, &bufferSizeInBytes);
            if (ERROR_SUCCESS == lResult)
            {
                if (REG_EXPAND_SZ == valueType)
                {
                    lResult = ExpandEnvironmentStringsW(shellCommand, expandedPath, ARRAYSIZE(expandedPath));
                    if (lResult > 0 && lResult <= ARRAYSIZE(shellCommand))
                    {
                        wcscpy_s(shellCommand, ARRAYSIZE(shellCommand), expandedPath);
                    }
                }
                if (FAILED(SHEvaluateSystemCommandTemplate(shellCommand, exePath, nullptr, nullptr)))
                {
                    *exePath = nullptr;
                    lResult = ERROR_PATH_NOT_FOUND;
                }
            }
            ::RegCloseKey(hkeyShellCommand);
        }
        ::RegCloseKey(hkeyDefaultMail);
    }
    return (lResult == ERROR_SUCCESS);
}
__inline HMODULE LoadDefaultMailProvider(_Out_ bool *pfSupportUTF8)
{
    HMODULE hMod = NULL;
    wchar_t szDllPath[MAX_PATH] = L"";
    *pfSupportUTF8 = false;
    if (!GetMapiDllPath(HKEY_CURRENT_USER, szDllPath, ARRAYSIZE(szDllPath), pfSupportUTF8) &&
        !GetMapiDllPath(HKEY_LOCAL_MACHINE, szDllPath, ARRAYSIZE(szDllPath), pfSupportUTF8))
    {
        wcscpy_s(szDllPath, ARRAYSIZE(szDllPath), L"mapi32x.dll");
    }
    OFSTRUCT ofs;
    if (_wcsicmp(szDllPath, L"mapi32.dll") != 0)
    {
        if (_wcsicmp(szDllPath, L"mapi32x.dll") != 0)
        {
            hMod = LoadLibraryW(szDllPath);
        }
        else if ((OpenFile("mapisvc.inf", &ofs, OF_EXIST) != HFILE_ERROR) || AlwaysNeedsMSMAPI(NULL, 0))
        {
            UINT uiRes = GetSystemDirectoryW(szDllPath, ARRAYSIZE(szDllPath));
            if ((uiRes > 0) && (uiRes < ARRAYSIZE(szDllPath)))
            {
                if (wcscat_s(szDllPath, ARRAYSIZE(szDllPath), L"\\mapi32x.dll") == 0)
                {
                    hMod = LoadLibraryW(szDllPath);
                }
            }
        }
    }
    return hMod;
}
#endif
#pragma endregion
