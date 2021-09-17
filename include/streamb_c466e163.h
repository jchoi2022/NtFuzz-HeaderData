#error ERROR: Only Win32 target supported!
#pragma pack(push,8)
#include <useoldio.h>
#include <crtdefs.h>
#include <ios.h>
#pragma warning(disable:4514)
typedef long streampos, streamoff;
class _CRTIMP ios;
class _CRTIMP streambuf {
public:
    virtual ~streambuf();
    inline int in_avail() const;
    inline int out_waiting() const;
    int sgetc();
    int snextc();
    int sbumpc();
    void stossc();
    inline int sputbackc(char);
    inline int sputc(int);
    inline int sputn(const char *,int);
    inline int sgetn(_Out_writes_(cbBuf) char *,int cbBuf);
    virtual int sync();
    virtual streambuf* setbuf(_In_opt_ char *, int);
    virtual streampos seekoff(streamoff,ios::seek_dir,int =ios::in|ios::out);
    virtual streampos seekpos(streampos,int =ios::in|ios::out);
    virtual int xsputn(const char *,int);
    virtual int xsgetn(_Out_writes_(cbBuf) char *,int cbBuf);
    virtual int overflow(int =EOF) = 0;
    virtual int underflow() = 0;
    virtual int pbackfail(int);
    void dbp();
    void setlock() { LockFlg--; }
    void clrlock() { if (LockFlg <= 0) LockFlg++; }
    void lock() { if (LockFlg<0) _mtlock(lockptr()); };
    void unlock() { if (LockFlg<0) _mtunlock(lockptr()); }
protected:
    streambuf();
    streambuf(_In_opt_ char *,int);
    inline char * base() const;
    inline char * ebuf() const;
    inline char * pbase() const;
    inline char * pptr() const;
    inline char * epptr() const;
    inline char * eback() const;
    inline char * gptr() const;
    inline char * egptr() const;
    inline int blen() const;
    inline void setp(_In_ char *,_In_ char *);
    inline void setg(_In_ char *,_In_ char *,_In_ char *);
    inline void pbump(int);
    inline void gbump(int);
    void setb(_In_reads_(eb-b) char *b,_In_reads_(0) char *eb,int =0);
    inline int unbuffered() const;
    inline void unbuffered(int);
    int allocate();
    virtual int doallocate();
    _PCRT_CRITICAL_SECTION lockptr() { return & x_lock; }
private:
    int _fAlloc;
    int _fUnbuf;
    int x_lastc;
    char * _base;
    char * _ebuf;
    char * _pbase;
    char * _pptr;
    char * _epptr;
    char * _eback;
    char * _gptr;
    char * _egptr;
    int LockFlg;
   _CRT_CRITICAL_SECTION x_lock;
};
inline int streambuf::in_avail() const { return (gptr()<_egptr) ? (int)(_egptr-gptr()) : 0; }
inline int streambuf::out_waiting() const { return (_pptr>=_pbase) ? (int)(_pptr-_pbase) : 0; }
inline int streambuf::sputbackc(char _c){ return (_eback<gptr()) ? *(--_gptr)=_c : pbackfail(_c); }
inline int streambuf::sputc(int _i){ return (_pptr<_epptr) ? (unsigned char)(*(_pptr++)=(char)_i) : overflow(_i); }
inline int streambuf::sputn(const char * _str,int _n) { return xsputn(_str, _n); }
inline int streambuf::sgetn(_Out_writes_(_n) char * _str,int _n) { return xsgetn(_str, _n); }
inline char * streambuf::base() const { return _base; }
inline char * streambuf::ebuf() const { return _ebuf; }
inline int streambuf::blen() const {return ((_ebuf > _base) ? (int)(_ebuf-_base) : 0); }
inline char * streambuf::pbase() const { return _pbase; }
inline char * streambuf::pptr() const { return _pptr; }
inline char * streambuf::epptr() const { return _epptr; }
inline char * streambuf::eback() const { return _eback; }
inline char * streambuf::gptr() const { return _gptr; }
inline char * streambuf::egptr() const { return _egptr; }
inline void streambuf::gbump(int _n) { if (_egptr) _gptr += _n; }
inline void streambuf::pbump(int _n) { if (_epptr) _pptr += _n; }
inline void streambuf::setg(_In_ char * _eb, _In_ char * _g, _In_ char * _eg) {_eback=_eb; _gptr=_g; _egptr=_eg; x_lastc=EOF; }
inline void streambuf::setp(_In_ char * _p, _In_ char * _ep) {_pptr=_pbase=_p; _epptr=_ep; }
inline int streambuf::unbuffered() const { return _fUnbuf; }
inline void streambuf::unbuffered(int _f) { _fUnbuf = _f; }
#pragma pack(pop)
