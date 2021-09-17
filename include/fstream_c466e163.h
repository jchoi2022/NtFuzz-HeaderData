#error ERROR: Only Win32 target supported!
#pragma pack(push,8)
#include <useoldio.h>
#include <crtdefs.h>
#include <iostream.h>
#pragma warning(disable:4514)
typedef int filedesc;
class _CRTIMP filebuf : public streambuf {
public:
static const int openprot;
static const int sh_none;
static const int sh_read;
static const int sh_write;
static const int binary;
static const int text;
                        filebuf();
                        filebuf(filedesc);
                        filebuf(filedesc, _In_z_ char *, int);
                        ~filebuf();
        filebuf* attach(filedesc);
        filedesc fd() const { return (x_fd==-1) ? EOF : x_fd; }
        int is_open() const { return (x_fd!=-1); }
        filebuf* open(const char *, int, int = filebuf::openprot);
        filebuf* close();
        int setmode(int = filebuf::text);
virtual int overflow(int=EOF);
virtual int underflow();
virtual streambuf* setbuf(_In_opt_z_ char *, int);
virtual streampos seekoff(streamoff, ios::seek_dir, int);
virtual int sync();
private:
        filedesc x_fd;
        int x_fOpened;
};
class _CRTIMP ifstream : public istream {
public:
        ifstream();
        ifstream(const char *, int =ios::in, int = filebuf::openprot);
        ifstream(filedesc);
        ifstream(filedesc, _In_opt_z_ char *, int);
        ~ifstream();
        streambuf * setbuf(_In_opt_z_ char *, int);
        filebuf* rdbuf() const { return (filebuf*) ios::rdbuf(); }
        void attach(filedesc);
        filedesc fd() const { return rdbuf()->fd(); }
        int is_open() const { return rdbuf()->is_open(); }
        void open(const char *, int =ios::in, int = filebuf::openprot);
        void close();
        int setmode(int mode = filebuf::text) { return rdbuf()->setmode(mode); }
};
class _CRTIMP ofstream : public ostream {
public:
        ofstream();
        ofstream(const char *, int =ios::out, int = filebuf::openprot);
        ofstream(filedesc);
        ofstream(filedesc, _In_opt_z_ char *, int);
        ~ofstream();
        streambuf * setbuf(_In_opt_z_ char *, int);
        filebuf* rdbuf() const { return (filebuf*) ios::rdbuf(); }
        void attach(filedesc);
        filedesc fd() const { return rdbuf()->fd(); }
        int is_open() const { return rdbuf()->is_open(); }
        void open(const char *, int =ios::out, int = filebuf::openprot);
        void close();
        int setmode(int mode = filebuf::text) { return rdbuf()->setmode(mode); }
};
class _CRTIMP fstream : public iostream {
public:
        fstream();
        fstream(const char *, int, int = filebuf::openprot);
        fstream(filedesc);
        fstream(filedesc, _In_opt_z_ char *, int);
        ~fstream();
        streambuf * setbuf(_In_opt_z_ char *, int);
        filebuf* rdbuf() const { return (filebuf*) ostream::rdbuf(); }
        void attach(filedesc);
        filedesc fd() const { return rdbuf()->fd(); }
        int is_open() const { return rdbuf()->is_open(); }
        void open(const char *, int, int = filebuf::openprot);
        void close();
        int setmode(int mode = filebuf::text) { return rdbuf()->setmode(mode); }
};
inline ios& binary(ios& _fstrm) \
   { ((filebuf*)_fstrm.rdbuf())->setmode(filebuf::binary); return _fstrm; }
inline ios& text(ios& _fstrm) \
   { ((filebuf*)_fstrm.rdbuf())->setmode(filebuf::text); return _fstrm; }
#pragma pack(pop)
