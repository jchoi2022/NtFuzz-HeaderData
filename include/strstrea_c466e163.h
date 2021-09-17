#error ERROR: Only Win32 target supported!
#pragma pack(push,8)
#include <crtdefs.h>
#include <useoldio.h>
#include <iostream.h>
#pragma warning(disable:4514)
class _CRTIMP strstreambuf : public streambuf {
public:
                strstreambuf();
                strstreambuf(int);
                strstreambuf(_In_reads_(_Inexpressible_(size)) char *, int size, _In_opt_ char * = 0);
                strstreambuf(_In_reads_(_Inexpressible_(size)) unsigned char *, int size, _In_opt_ unsigned char * = 0);
                strstreambuf(_In_reads_(_Inexpressible_(size)) signed char *, int size, _In_opt_ signed char * = 0);
                strstreambuf(void * (*a)(long), void (*f) (void *));
                ~strstreambuf();
        void freeze(int =1);
        char * str();
virtual int overflow(int);
virtual int underflow();
virtual streambuf* setbuf(_In_ char *, int);
virtual streampos seekoff(streamoff, ios::seek_dir, int);
virtual int sync();
protected:
virtual int doallocate();
private:
        void _init(_In_reads_(_Inexpressible_(size)) char *, int size, _In_opt_ char *);
        int x_dynamic;
        int x_bufmin;
        int _fAlloc;
        int x_static;
        void * (* x_alloc)(long);
        void (* x_free)(void *);
};
class _CRTIMP istrstream : public istream {
public:
                istrstream(_In_ char *);
                istrstream(_In_ char *, int);
                ~istrstream();
inline strstreambuf* rdbuf() const { return (strstreambuf*) ios::rdbuf(); }
inline char * str() { return rdbuf()->str(); }
};
class _CRTIMP ostrstream : public ostream {
public:
                ostrstream();
                ostrstream(_In_ char *, int, int = ios::out);
                ~ostrstream();
inline int pcount() const { return rdbuf()->out_waiting(); }
inline strstreambuf* rdbuf() const { return (strstreambuf*) ios::rdbuf(); }
inline char * str() { return rdbuf()->str(); }
};
class _CRTIMP strstream : public iostream {
public:
                strstream();
                strstream(_In_ char *, int, int);
                ~strstream();
inline int pcount() const { return rdbuf()->out_waiting(); }
inline strstreambuf* rdbuf() const { return (strstreambuf*) ostream::rdbuf(); }
inline char * str() { return rdbuf()->str(); }
};
#pragma pack(pop)
