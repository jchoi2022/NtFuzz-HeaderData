#error ERROR: Only Win32 target supported!
#pragma pack(push,8)
#include <useoldio.h>
#include <crtdefs.h>
#include <iostream.h>
#include <stdio.h>
#pragma warning(disable:4514)
class _CRTIMP stdiobuf : public streambuf {
public:
        stdiobuf(FILE* f);
FILE * stdiofile() { return _str; }
virtual int pbackfail(int c);
virtual int overflow(int c = EOF);
virtual int underflow();
virtual streampos seekoff( streamoff, ios::seek_dir, int =ios::in|ios::out);
virtual int sync();
        ~stdiobuf();
        int setrwbuf(int _rsize, int _wsize);
private:
        FILE * _str;
};
class _CRTIMP stdiostream : public iostream {
public:
        stdiostream(FILE *);
        ~stdiostream();
        stdiobuf* rdbuf() const { return (stdiobuf*) ostream::rdbuf(); }
private:
};
#pragma pack(pop)
