#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "basetsd.h"
#include "guiddef.h"
extern "C"{
extern RPC_IF_HANDLE __MIDL_itf_wtypesbase_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wtypesbase_0000_0000_v0_0_s_ifspec;
#if 0
typedef byte BYTE;
typedef unsigned short WORD;
typedef unsigned int UINT;
typedef int INT;
typedef long BOOL;
typedef long LONG;
typedef unsigned long DWORD;
typedef void *HANDLE;
typedef WORD *LPWORD;
typedef DWORD *LPDWORD;
typedef char CHAR;
typedef __RPC_string CHAR *LPSTR;
typedef __RPC_string const CHAR *LPCSTR;
typedef wchar_t WCHAR;
typedef WCHAR TCHAR;
typedef __RPC_string WCHAR *LPWSTR;
typedef __RPC_string TCHAR *LPTSTR;
typedef __RPC_string const WCHAR *LPCWSTR;
typedef __RPC_string const TCHAR *LPCTSTR;
typedef HANDLE *LPHANDLE;
#endif
typedef char OLECHAR;
typedef LPSTR LPOLESTR;
typedef LPCSTR LPCOLESTR;
typedef void *PVOID;
typedef void *LPVOID;
typedef float FLOAT;
typedef unsigned char UCHAR;
typedef short SHORT;
typedef unsigned short USHORT;
typedef DWORD ULONG;
typedef double DOUBLE;
typedef unsigned __int64 DWORDLONG;
typedef DWORDLONG *PDWORDLONG;
typedef __int64 LONGLONG;
typedef unsigned __int64 ULONGLONG;
typedef LONGLONG *PLONGLONG;
typedef ULONGLONG *PULONGLONG;
#if 0
typedef struct _LARGE_INTEGER
    {
    LONGLONG QuadPart;
    } LARGE_INTEGER;
typedef LARGE_INTEGER *PLARGE_INTEGER;
typedef struct _ULARGE_INTEGER
    {
    ULONGLONG QuadPart;
    } ULARGE_INTEGER;
#endif
typedef struct _FILETIME
    {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
    } FILETIME;
typedef struct _FILETIME *PFILETIME;
typedef struct _FILETIME *LPFILETIME;
typedef struct _SYSTEMTIME
    {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
    } SYSTEMTIME;
typedef struct _SYSTEMTIME *PSYSTEMTIME;
typedef struct _SYSTEMTIME *LPSYSTEMTIME;
typedef struct _SECURITY_ATTRIBUTES
    {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
    } SECURITY_ATTRIBUTES;
typedef struct _SECURITY_ATTRIBUTES *PSECURITY_ATTRIBUTES;
typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;
typedef USHORT SECURITY_DESCRIPTOR_CONTROL;
typedef USHORT *PSECURITY_DESCRIPTOR_CONTROL;
typedef PVOID PSID;
typedef struct _ACL
    {
    UCHAR AclRevision;
    UCHAR Sbz1;
    USHORT AclSize;
    USHORT AceCount;
    USHORT Sbz2;
    } ACL;
typedef ACL *PACL;
typedef struct _SECURITY_DESCRIPTOR
    {
    UCHAR Revision;
    UCHAR Sbz1;
    SECURITY_DESCRIPTOR_CONTROL Control;
    PSID Owner;
    PSID Group;
    PACL Sacl;
    PACL Dacl;
    } SECURITY_DESCRIPTOR;
typedef struct _SECURITY_DESCRIPTOR *PISECURITY_DESCRIPTOR;
typedef struct _COAUTHIDENTITY
    {
                    USHORT *User;
                  ULONG UserLength;
                    USHORT *Domain;
                  ULONG DomainLength;
                    USHORT *Password;
                  ULONG PasswordLength;
    ULONG Flags;
    } COAUTHIDENTITY;
typedef struct _COAUTHINFO
    {
    DWORD dwAuthnSvc;
    DWORD dwAuthzSvc;
    LPWSTR pwszServerPrincName;
    DWORD dwAuthnLevel;
    DWORD dwImpersonationLevel;
    COAUTHIDENTITY *pAuthIdentityData;
    DWORD dwCapabilities;
    } COAUTHINFO;
typedef LONG SCODE;
typedef SCODE *PSCODE;
typedef LONG HRESULT;
typedef struct _OBJECTID
    {
    GUID Lineage;
    ULONG Uniquifier;
    } OBJECTID;
#if 0
typedef GUID *REFGUID;
typedef IID *REFIID;
typedef CLSID *REFCLSID;
#endif
typedef
enum tagMEMCTX
    {
        MEMCTX_TASK = 1,
        MEMCTX_SHARED = 2,
        MEMCTX_MACSYSTEM = 3,
        MEMCTX_UNKNOWN = -1,
        MEMCTX_SAME = -2
    } MEMCTX;
typedef
enum tagCLSCTX
    {
        CLSCTX_INPROC_SERVER = 0x1,
        CLSCTX_INPROC_HANDLER = 0x2,
        CLSCTX_LOCAL_SERVER = 0x4,
        CLSCTX_INPROC_SERVER16 = 0x8,
        CLSCTX_REMOTE_SERVER = 0x10,
        CLSCTX_INPROC_HANDLER16 = 0x20,
        CLSCTX_RESERVED1 = 0x40,
        CLSCTX_RESERVED2 = 0x80,
        CLSCTX_RESERVED3 = 0x100,
        CLSCTX_RESERVED4 = 0x200,
        CLSCTX_NO_CODE_DOWNLOAD = 0x400,
        CLSCTX_RESERVED5 = 0x800,
        CLSCTX_NO_CUSTOM_MARSHAL = 0x1000,
        CLSCTX_ENABLE_CODE_DOWNLOAD = 0x2000,
        CLSCTX_NO_FAILURE_LOG = 0x4000,
        CLSCTX_DISABLE_AAA = 0x8000,
        CLSCTX_ENABLE_AAA = 0x10000,
        CLSCTX_FROM_DEFAULT_CONTEXT = 0x20000,
        CLSCTX_ACTIVATE_X86_SERVER = 0x40000,
        CLSCTX_ACTIVATE_32_BIT_SERVER = CLSCTX_ACTIVATE_X86_SERVER,
        CLSCTX_ACTIVATE_64_BIT_SERVER = 0x80000,
        CLSCTX_ENABLE_CLOAKING = 0x100000,
        CLSCTX_APPCONTAINER = 0x400000,
        CLSCTX_ACTIVATE_AAA_AS_IU = 0x800000,
        CLSCTX_RESERVED6 = 0x1000000,
        CLSCTX_ACTIVATE_ARM32_SERVER = 0x2000000,
        CLSCTX_PS_DLL = 0x80000000
    } CLSCTX;
   (CLSCTX_INPROC_SERVER | \
    CLSCTX_INPROC_HANDLER | \
    CLSCTX_LOCAL_SERVER | \
    CLSCTX_INPROC_SERVER16 | \
    CLSCTX_REMOTE_SERVER | \
    CLSCTX_NO_CODE_DOWNLOAD | \
    CLSCTX_NO_CUSTOM_MARSHAL | \
    CLSCTX_ENABLE_CODE_DOWNLOAD | \
    CLSCTX_NO_FAILURE_LOG | \
    CLSCTX_DISABLE_AAA | \
    CLSCTX_ENABLE_AAA | \
    CLSCTX_FROM_DEFAULT_CONTEXT | \
    CLSCTX_ACTIVATE_X86_SERVER | \
    CLSCTX_ACTIVATE_64_BIT_SERVER | \
    CLSCTX_ENABLE_CLOAKING | \
    CLSCTX_APPCONTAINER | \
    CLSCTX_ACTIVATE_AAA_AS_IU | \
    CLSCTX_RESERVED6 | \
    CLSCTX_ACTIVATE_ARM32_SERVER | \
    CLSCTX_PS_DLL)
typedef
enum tagMSHLFLAGS
    {
        MSHLFLAGS_NORMAL = 0,
        MSHLFLAGS_TABLESTRONG = 1,
        MSHLFLAGS_TABLEWEAK = 2,
        MSHLFLAGS_NOPING = 4,
        MSHLFLAGS_RESERVED1 = 8,
        MSHLFLAGS_RESERVED2 = 16,
        MSHLFLAGS_RESERVED3 = 32,
        MSHLFLAGS_RESERVED4 = 64
    } MSHLFLAGS;
typedef
enum tagMSHCTX
    {
        MSHCTX_LOCAL = 0,
        MSHCTX_NOSHAREDMEM = 1,
        MSHCTX_DIFFERENTMACHINE = 2,
        MSHCTX_INPROC = 3,
        MSHCTX_CROSSCTX = 4,
        MSHCTX_RESERVED1 = 5
    } MSHCTX;
typedef struct _BYTE_BLOB
    {
    ULONG clSize;
                    byte abData[ 1 ];
    } BYTE_BLOB;
typedef __RPC_unique_pointer BYTE_BLOB *UP_BYTE_BLOB;
typedef struct _WORD_BLOB
    {
    ULONG clSize;
                    unsigned short asData[ 1 ];
    } WORD_BLOB;
typedef __RPC_unique_pointer WORD_BLOB *UP_WORD_BLOB;
typedef struct _DWORD_BLOB
    {
    ULONG clSize;
                    ULONG alData[ 1 ];
    } DWORD_BLOB;
typedef __RPC_unique_pointer DWORD_BLOB *UP_DWORD_BLOB;
typedef struct _FLAGGED_BYTE_BLOB
    {
    ULONG fFlags;
    ULONG clSize;
                    byte abData[ 1 ];
    } FLAGGED_BYTE_BLOB;
typedef __RPC_unique_pointer FLAGGED_BYTE_BLOB *UP_FLAGGED_BYTE_BLOB;
typedef struct _FLAGGED_WORD_BLOB
    {
    ULONG fFlags;
    ULONG clSize;
                    unsigned short asData[ 1 ];
    } FLAGGED_WORD_BLOB;
typedef __RPC_unique_pointer FLAGGED_WORD_BLOB *UP_FLAGGED_WORD_BLOB;
typedef struct _BYTE_SIZEDARR
    {
    ULONG clSize;
                    byte *pData;
    } BYTE_SIZEDARR;
typedef struct _SHORT_SIZEDARR
    {
    ULONG clSize;
                    unsigned short *pData;
    } WORD_SIZEDARR;
typedef struct _LONG_SIZEDARR
    {
    ULONG clSize;
                    ULONG *pData;
    } DWORD_SIZEDARR;
typedef struct _HYPER_SIZEDARR
    {
    ULONG clSize;
                    hyper *pData;
    } HYPER_SIZEDARR;
extern RPC_IF_HANDLE IWinTypesBase_v0_1_c_ifspec;
extern RPC_IF_HANDLE IWinTypesBase_v0_1_s_ifspec;
typedef boolean BOOLEAN;
typedef struct tagBLOB
    {
    ULONG cbSize;
                    BYTE *pBlobData;
    } BLOB;
typedef struct tagBLOB *LPBLOB;
typedef struct _SID_IDENTIFIER_AUTHORITY
    {
    UCHAR Value[ 6 ];
    } SID_IDENTIFIER_AUTHORITY;
typedef struct _SID_IDENTIFIER_AUTHORITY *PSID_IDENTIFIER_AUTHORITY;
typedef struct _SID
    {
    BYTE Revision;
    BYTE SubAuthorityCount;
    SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
                    ULONG SubAuthority[ 1 ];
    } SID;
typedef struct _SID *PISID;
typedef struct _SID_AND_ATTRIBUTES
    {
    SID *Sid;
    DWORD Attributes;
    } SID_AND_ATTRIBUTES;
typedef struct _SID_AND_ATTRIBUTES *PSID_AND_ATTRIBUTES;
extern RPC_IF_HANDLE __MIDL_itf_wtypesbase_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wtypesbase_0000_0001_v0_0_s_ifspec;
}
