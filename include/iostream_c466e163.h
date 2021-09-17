#error ERROR: Only Win32 target supported!
#pragma pack(push,8)
#include <useoldio.h>
#include <crtdefs.h>
typedef long streamoff, streampos;
#include <ios.h>
#include <streamb.h>
#include <istream.h>
#include <ostream.h>
#pragma warning(disable:4514)
class _CRTIMP iostream : public istream, public ostream {
public:
        iostream(streambuf*);
        virtual ~iostream();
protected:
        iostream();
        iostream(const iostream&);
inline iostream& operator=(streambuf*);
inline iostream& operator=(iostream&);
private:
        iostream(ios&);
        iostream(istream&);
        iostream(ostream&);
};
inline iostream& iostream::operator=(streambuf* _sb) { istream::operator=(_sb); ostream::operator=(_sb); return *this; }
inline iostream& iostream::operator=(iostream& _strm) { return operator=(_strm.rdbuf()); }
class _CRTIMP Iostream_init {
public:
        Iostream_init();
        Iostream_init(ios &, int =0);
        ~Iostream_init();
};
#pragma pack(pop)
