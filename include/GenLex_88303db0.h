#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <Polarity.h>
class CGenLexSource
{
public:
    virtual wchar_t NextChar() = 0;
    virtual void Pushback(wchar_t) = 0;
    virtual void Reset() = 0;
};
class CTextLexSource : public CGenLexSource
{
    const wchar_t *m_pSrcBuf;
    const wchar_t *m_pStart;
public:
    CTextLexSource(const wchar_t *pSrc) { SetString(pSrc); }
    wchar_t NextChar()
    {
        if (!m_pSrcBuf)
            return 0;
        else
            return *m_pSrcBuf++ ? m_pSrcBuf[-1] : 0;
    }
    void Pushback(wchar_t)
    {
        if (m_pSrcBuf)
            --m_pSrcBuf;
    }
    void Reset() { m_pSrcBuf = m_pStart; }
    void SetString (const wchar_t *pSrc) { m_pSrcBuf = m_pStart = pSrc; }
};
#pragma pack(2)
struct LexEl
{
    wchar_t cFirst, cLast;
    WORD wGotoState;
    WORD wReturnTok;
    WORD wInstructions;
};
#pragma pack()
class CGenLexer
{
    _Field_size_(m_nCurBufSize) wchar_t *m_pTokenBuf;
    int m_nCurrentLine;
    int m_nCurBufSize;
    CGenLexSource *m_pSrc;
    LexEl *m_pTable;
public:
    CGenLexer(LexEl *pTbl, CGenLexSource *pSrc);
   ~CGenLexer();
    _Success_(return == 1) int NextToken();
    wchar_t* GetTokenText() { return m_pTokenBuf; }
    int GetLineNum() { return m_nCurrentLine; }
    void Reset();
};
#endif
#pragma endregion
