#error ERROR: Only Win32 target supported!
#pragma pack(push,8)
#include <useoldio.h>
#include <crtdefs.h>
#include <ios.h>
#pragma warning(disable:4514)
typedef long streamoff, streampos;
class _CRTIMP ostream : virtual public ios {
public:
        ostream(streambuf*);
        virtual ~ostream();
        ostream& flush();
        int opfx();
        void osfx();
inline ostream& operator<<(ostream& (__cdecl * _f)(ostream&));
inline ostream& operator<<(ios& (__cdecl * _f)(ios&));
        ostream& operator<<(const char *);
inline ostream& operator<<(const unsigned char *);
inline ostream& operator<<(const signed char *);
inline ostream& operator<<(char);
        ostream& operator<<(unsigned char);
inline ostream& operator<<(signed char);
        ostream& operator<<(short);
        ostream& operator<<(unsigned short);
        ostream& operator<<(int);
        ostream& operator<<(unsigned int);
        ostream& operator<<(long);
        ostream& operator<<(unsigned long);
inline ostream& operator<<(float);
        ostream& operator<<(double);
        ostream& operator<<(long double);
        ostream& operator<<(const void *);
        ostream& operator<<(streambuf*);
inline ostream& put(char);
        ostream& put(unsigned char);
inline ostream& put(signed char);
        ostream& write(const char *,int);
inline ostream& write(const unsigned char *,int);
inline ostream& write(const signed char *,int);
        ostream& seekp(streampos);
        ostream& seekp(streamoff,ios::seek_dir);
        streampos tellp();
protected:
        ostream();
        ostream(const ostream&);
        ostream& operator=(streambuf*);
        ostream& operator=(const ostream& _os) {return operator=(_os.rdbuf()); }
        int do_opfx(int);
        void do_osfx();
private:
        ostream(ios&);
        ostream& writepad(const char *, const char *);
        int x_floatused;
};
inline ostream& ostream::operator<<(ostream& (__cdecl * _f)(ostream&)) { (*_f)(*this); return *this; }
inline ostream& ostream::operator<<(ios& (__cdecl * _f)(ios& )) { (*_f)(*this); return *this; }
inline ostream& ostream::operator<<(char _c) { return operator<<((unsigned char) _c); }
inline ostream& ostream::operator<<(signed char _c) { return operator<<((unsigned char) _c); }
inline ostream& ostream::operator<<(const unsigned char * _s) { return operator<<((const char *) _s); }
inline ostream& ostream::operator<<(const signed char * _s) { return operator<<((const char *) _s); }
inline ostream& ostream::operator<<(float _f) { x_floatused = 1; return operator<<((double) _f); }
inline ostream& ostream::put(char _c) { return put((unsigned char) _c); }
inline ostream& ostream::put(signed char _c) { return put((unsigned char) _c); }
inline ostream& ostream::write(const unsigned char * _s, int _n) { return write((char *) _s, _n); }
inline ostream& ostream::write(const signed char * _s, int _n) { return write((char *) _s, _n); }
class _CRTIMP ostream_withassign : public ostream {
        public:
                ostream_withassign();
                ostream_withassign(streambuf* _is);
                ~ostream_withassign();
    ostream& operator=(const ostream& _os) { return ostream::operator=(_os.rdbuf()); }
    ostream& operator=(streambuf* _sb) { return ostream::operator=(_sb); }
};
extern ostream_withassign _CRTIMP cout;
extern ostream_withassign _CRTIMP cerr;
extern ostream_withassign _CRTIMP clog;
inline _CRTIMP ostream& __cdecl flush(ostream& _outs) { return _outs.flush(); }
inline _CRTIMP ostream& __cdecl endl(ostream& _outs) { return _outs << '\n' << flush; }
inline _CRTIMP ostream& __cdecl ends(ostream& _outs) { return _outs << char('\0'); }
_CRTIMP ios& __cdecl dec(ios&);
_CRTIMP ios& __cdecl hex(ios&);
_CRTIMP ios& __cdecl oct(ios&);
#pragma pack(pop)
