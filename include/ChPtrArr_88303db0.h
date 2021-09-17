#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
#include <limits.h>
#include <assert.h>
#include <tchar.h>
#include <polarity.h>
#include <ProvExce.h>
class POLARITY CHPtrArray
{
    public :
    CHPtrArray() ;
    int GetSize() const ;
    int GetUpperBound() const ;
    void SetSize(int nNewSize, int nGrowBy = -1) throw ( CHeap_Exception ) ;
    void FreeExtra() throw ( CHeap_Exception ) ;
    void RemoveAll() ;
    void* GetAt(int nIndex) const ;
    void SetAt(int nIndex, void* newElement) ;
    void*& ElementAt(int nIndex) ;
    const void** GetData() const ;
    void** GetData() ;
    void SetAtGrow(int nIndex, void* newElement) throw ( CHeap_Exception ) ;
    int Add(void* newElement) throw ( CHeap_Exception ) ;
    int Append(const CHPtrArray& src) throw ( CHeap_Exception ) ;
    void Copy(const CHPtrArray& src) throw ( CHeap_Exception ) ;
    void* operator[](int nIndex) const ;
    void*& operator[](int nIndex) ;
    void InsertAt(int nIndex, void* newElement, int nCount = 1) throw ( CHeap_Exception ) ;
    void RemoveAt(int nIndex, int nCount = 1) ;
    void InsertAt(int nStartIndex, CHPtrArray* pNewArray) throw ( CHeap_Exception ) ;
protected:
    void** m_pData ;
    int m_nSize ;
    int m_nMaxSize ;
    int m_nGrowBy ;
public:
    ~CHPtrArray() ;
    void AssertValid() const ;
protected:
    typedef void* BASE_TYPE ;
    typedef void* BASE_ARG_TYPE ;
} ;
#endif
#pragma endregion
