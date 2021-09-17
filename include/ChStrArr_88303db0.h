#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <polarity.h>
#include <ProvExce.h>
class POLARITY CHStringArray
{
    public:
        CHStringArray();
        ~CHStringArray();
        int GetSize() const { return m_nSize; }
        int GetUpperBound() const { return m_nSize-1; }
        void SetSize(int nNewSize, int nGrowBy = -1) throw ( CHeap_Exception ) ;
        void FreeExtra() throw ( CHeap_Exception ) ;
        void RemoveAll() { SetSize(0); }
        CHString GetAt(int nIndex) const{ return m_pData[nIndex]; }
        void SetAt(int nIndex, LPCWSTR newElement){ m_pData[nIndex] = newElement; }
        CHString& ElementAt(int nIndex) { return m_pData[nIndex]; }
        const CHString* GetData() const { return (const CHString*)m_pData; }
        CHString* GetData() { return (CHString*)m_pData; }
        void SetAtGrow(int nIndex, LPCWSTR newElement) throw ( CHeap_Exception ) ;
        int Add(LPCWSTR newElement) throw ( CHeap_Exception )
        {
            int nIndex = m_nSize;
            SetAtGrow(nIndex, newElement);
            return nIndex;
        }
        int Append(const CHStringArray& src) throw ( CHeap_Exception ) ;
        void Copy(const CHStringArray& src) throw ( CHeap_Exception ) ;
        CHString operator[](int nIndex) const { return GetAt(nIndex); }
        CHString& operator[](int nIndex) { return ElementAt(nIndex); }
        void InsertAt(int nIndex, LPCWSTR newElement, int nCount = 1) throw ( CHeap_Exception ) ;
        void RemoveAt(int nIndex, int nCount = 1);
        void InsertAt(int nStartIndex, CHStringArray* pNewArray) throw ( CHeap_Exception ) ;
    protected:
        CHString* m_pData;
        int m_nSize;
        int m_nMaxSize;
        int m_nGrowBy;
        typedef CHString BASE_TYPE;
        typedef LPCWSTR BASE_ARG_TYPE;
};
#endif
#pragma endregion
