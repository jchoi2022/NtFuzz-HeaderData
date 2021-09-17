#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <stdio.h>
  #define CLASS_IMPORT_EXPORT __declspec( dllexport )
class CParseXML {
private:
 CHAR m_cCurToken[MAX_LINE_LEN];
 CHAR m_cCurWord[MAX_LINE_LEN];
 CHAR m_cCurBuffer[MAX_LINE_LEN];
 FILE *m_fh;
 CHAR * m_pCurrentIndex;
 DWORD m_dwError;
private:
 DWORD Read();
 DWORD SetError(DWORD dw) { m_dwError = dw; return m_dwError; }
public:
 CParseXML() {
  m_fh = NULL;
  m_cCurBuffer[0] = '\0';
  m_pCurrentIndex = NULL;
  m_dwError = F_OK;
 }
 ~CParseXML() {
  End();
 }
 CHAR * GetFirstWord(CHAR *);
 CHAR * GetValue(CHAR *);
 DWORD Start(const CHAR *szFile);
 void End();
 CHAR *GetToken();
 DWORD GetError() { return m_dwError; }
};
typedef struct fifo {
 CHAR *string;
 fifo *prev;
} FIFO;
class CLASS_IMPORT_EXPORT CFIFOString {
private:
 FIFO *m_fifoTail;
public:
 CFIFOString() { m_fifoTail = NULL; }
 ~CFIFOString();
 void RemoveAll();
 DWORD AddTail(CHAR *sz);
 DWORD GetTail(_Outptr_ PZPSTR sz);
};
#endif
#pragma endregion
