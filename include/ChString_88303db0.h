#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
#include <limits.h>
#include <tchar.h>
#include <polarity.h>
#pragma warning( disable : 4290 )
#include <ProvExce.h>
struct _DOUBLE { BYTE doubleBits[sizeof(double)]; };
void POLARITY WINAPI SetCHStringResourceHandle(HINSTANCE handle);
    #define DOUBLE_ARG double
struct CHStringData
{
    long nRefs;
    int nDataLength;
    int nAllocLength;
    WCHAR* data()
    {
        return (WCHAR*)(this+1);
    }
};
class POLARITY CHString
{
    protected:
        LPWSTR m_pchData;
    protected:
        CHStringData* GetData() const;
        void Init();
        void AllocCopy(CHString& dest, int nCopyLen, int nCopyIndex, int nExtraLen) const throw ( CHeap_Exception ) ;
        void AllocBuffer(int nLen) throw ( CHeap_Exception ) ;
        void AssignCopy(int nSrcLen, LPCWSTR lpszSrcData) throw ( CHeap_Exception ) ;
        void ConcatCopy(int nSrc1Len, LPCWSTR lpszSrc1Data, int nSrc2Len, LPCWSTR lpszSrc2Data) throw ( CHeap_Exception ) ;
        void ConcatInPlace(int nSrcLen, LPCWSTR lpszSrcData);
        void CopyBeforeWrite() throw ( CHeap_Exception ) ;
        void AllocBeforeWrite(int nLen) throw ( CHeap_Exception ) ;
        static inline int WINAPI SafeStrlen(LPCWSTR lpsz) { return (lpsz == NULL) ? 0 : (int)wcslen(lpsz); }
        int LoadStringW(UINT nID, _In_reads_(nMaxBuf) LPWSTR lpszBuf, UINT nMaxBuf) throw ( CHeap_Exception ) ;
    public:
        CHString();
        CHString(const CHString& stringSrc);
        CHString(WCHAR ch, int nRepeat = 1) throw ( CHeap_Exception ) ;
        CHString(LPCSTR lpsz) throw ( CHeap_Exception ) ;
        CHString(LPCWSTR lpsz) throw ( CHeap_Exception ) ;
        CHString(LPCWSTR lpch, int nLength) throw ( CHeap_Exception ) ;
        inline CHString(const unsigned char* lpsz) { Init(); *this = (LPCSTR)lpsz; }
        ~CHString();
        void SetAt(int nIndex, WCHAR ch) throw ( CHeap_Exception ) ;
        void Empty();
        inline int GetLength() const { return GetData()->nDataLength; }
        inline BOOL IsEmpty() const { return GetData()->nDataLength == 0; }
 #pragma prefast(push)
 #pragma prefast(disable:26018 )
        inline WCHAR GetAt(int nIndex) const{ return m_pchData[nIndex]; }
        inline WCHAR operator[](int nIndex) const{ return m_pchData[nIndex]; }
 #pragma prefast(pop)
        inline operator LPCWSTR() const { return m_pchData; }
        inline int GetAllocLength() const { return GetData()->nAllocLength; }
        const CHString& operator=(const CHString& stringSrc) throw ( CHeap_Exception ) ;
        const CHString& operator=(WCHAR ch) throw ( CHeap_Exception ) ;
        const CHString& operator=(LPCSTR lpsz) throw ( CHeap_Exception ) ;
        const CHString& operator=(LPCWSTR lpsz) throw ( CHeap_Exception ) ;
        inline const CHString& operator=(const unsigned char* lpsz) throw ( CHeap_Exception ) { *this = (LPCSTR)lpsz; return *this; }
        inline const CHString& operator=(CHString *p) throw ( CHeap_Exception ) { *this = *p; return *this; }
        inline const CHString& operator=(char ch) throw ( CHeap_Exception ) { *this = (WCHAR)ch; return *this; }
        inline const CHString& operator+=(char ch) throw ( CHeap_Exception ) { *this += (WCHAR)ch; return *this; }
        friend inline CHString operator+(const CHString& string, char ch) throw ( CHeap_Exception ) { return string + (WCHAR)ch; }
        friend inline CHString operator+(char ch, const CHString& string) throw ( CHeap_Exception ) { return (WCHAR)ch + string; }
        const CHString& operator+=(const CHString& string) throw ( CHeap_Exception ) ;
        const CHString& operator+=(WCHAR ch) throw ( CHeap_Exception ) ;
        const CHString& operator+=(LPCWSTR lpsz) throw ( CHeap_Exception ) ;
        friend CHString POLARITY WINAPI operator+(const CHString& string1, const CHString& string2) throw ( CHeap_Exception ) ;
        friend CHString POLARITY WINAPI operator+(const CHString& string, WCHAR ch) throw ( CHeap_Exception ) ;
        friend CHString POLARITY WINAPI operator+(WCHAR ch, const CHString& string) throw ( CHeap_Exception ) ;
        friend CHString POLARITY WINAPI operator+(const CHString& string, LPCWSTR lpsz) throw ( CHeap_Exception ) ;
        friend CHString POLARITY WINAPI operator+(LPCWSTR lpsz, const CHString& string) throw ( CHeap_Exception ) ;
        int Compare(LPCWSTR lpsz) const;
        inline int CompareNoCase(LPCWSTR lpsz) const
        {
            return _wcsicmp(m_pchData, lpsz);
        }
        inline int Collate(LPCWSTR lpsz) const
        {
            return wcscoll(m_pchData, lpsz);
        }
        BOOL LoadStringW(UINT nID) throw ( CHeap_Exception ) ;
        LPWSTR GetBuffer(int nMinBufLength) throw ( CHeap_Exception ) ;
        void ReleaseBuffer(int nNewLength = -1) throw ( CHeap_Exception ) ;
        LPWSTR GetBufferSetLength(int nNewLength) throw ( CHeap_Exception ) ;
        void FreeExtra() throw ( CHeap_Exception ) ;
        LPWSTR LockBuffer() ;
        void UnlockBuffer();
        int Find(WCHAR ch) const;
        int FindOneOf(LPCWSTR lpszCharSet) const;
        int ReverseFind(WCHAR ch) const;
        int Find(LPCWSTR lpszSub) const;
        void MakeUpper() throw ( CHeap_Exception ) ;
        void MakeLower() throw ( CHeap_Exception ) ;
        void MakeReverse() throw ( CHeap_Exception ) ;
        CHString Mid(int nFirst, int nCount) const throw ( CHeap_Exception ) ;
        CHString Mid(int nFirst) const throw ( CHeap_Exception ) ;
        CHString Left(int nCount) const throw ( CHeap_Exception ) ;
        CHString Right(int nCount) const throw ( CHeap_Exception ) ;
        CHString SpanIncluding(LPCWSTR lpszCharSet) const throw ( CHeap_Exception ) ;
        CHString SpanExcluding(LPCWSTR lpszCharSet) const throw ( CHeap_Exception ) ;
        void TrimRight() throw ( CHeap_Exception ) ;
        void TrimLeft() throw ( CHeap_Exception ) ;
        void __cdecl Format(LPCWSTR lpszFormat, ...) throw ( CHeap_Exception ) ;
        void FormatV(LPCWSTR lpszFormat, va_list argList);
        void __cdecl Format(UINT nFormatID, ...) throw ( CHeap_Exception ) ;
        void __cdecl FormatMessageW(LPCWSTR lpszFormat, ...) throw ( CHeap_Exception ) ;
        void __cdecl FormatMessageW(UINT nFormatID, ...) throw ( CHeap_Exception ) ;
        BSTR AllocSysString() const throw ( CHeap_Exception ) ;
        static void WINAPI Release(CHStringData* pData);
        void Release();
};
inline BOOL operator==(const CHString& s1, const CHString& s2) { return s1.Compare(s2) == 0; }
inline BOOL operator==(const CHString& s1, LPCWSTR s2) { return s1.Compare(s2) == 0; }
inline BOOL operator!=(const CHString& s1, const CHString& s2) { return s1.Compare(s2) != 0; }
inline BOOL operator!=(const CHString& s1, LPCWSTR s2) { return s1.Compare(s2) != 0; }
inline BOOL operator<(const CHString& s1, const CHString& s2) { return s1.Compare(s2) < 0; }
inline BOOL operator<(const CHString& s1, LPCWSTR s2) { return s1.Compare(s2) < 0; }
inline BOOL operator>(const CHString& s1, const CHString& s2) { return s1.Compare(s2) > 0; }
inline BOOL operator>(const CHString& s1, LPCWSTR s2) { return s1.Compare(s2) > 0; }
inline BOOL operator<=(const CHString& s1, const CHString& s2) { return s1.Compare(s2) <= 0; }
inline BOOL operator<=(const CHString& s1, LPCWSTR s2) { return s1.Compare(s2) <= 0; }
inline BOOL operator>=(const CHString& s1, const CHString& s2) { return s1.Compare(s2) >= 0; }
inline BOOL operator>=(const CHString& s1, LPCWSTR s2) { return s1.Compare(s2) >= 0; }
#endif
#pragma endregion
