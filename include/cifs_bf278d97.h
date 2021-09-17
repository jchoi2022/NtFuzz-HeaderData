    ( ((Status) & 0x1FFF0000) == SRV_STATUS_FACILITY_CODE ? TRUE : FALSE )
                                   (SRV_DOS_STATUS | ERROR_TOO_MANY_OPEN_FILES)
#include <winerror.h>
        (NTSTATUS)(SRV_OS2_STATUS | ERROR_INVALID_LEVEL)
        (NTSTATUS)(SRV_OS2_STATUS | ERROR_EA_LIST_INCONSISTENT)
        (NTSTATUS)(SRV_OS2_STATUS | ERROR_NEGATIVE_SEEK)
        (NTSTATUS)(SRV_OS2_STATUS | ERROR_NO_MORE_SEARCH_HANDLES)
        (NTSTATUS)(SRV_OS2_STATUS | ERROR_EAS_DIDNT_FIT)
        (NTSTATUS)(SRV_OS2_STATUS | ERROR_EA_ACCESS_DENIED)
        (NTSTATUS)(SRV_OS2_STATUS | ERROR_CANCEL_VIOLATION)
        (NTSTATUS)(SRV_OS2_STATUS | ERROR_ATOMIC_LOCKS_NOT_SUPPORTED)
        (NTSTATUS)(SRV_OS2_STATUS | ERROR_CANNOT_COPY)
typedef unsigned short SMB_UNALIGNED *PSMB_USHORT;
typedef unsigned long SMB_UNALIGNED *PSMB_ULONG;
#include <packon.h>
typedef enum _SMB_DIALECT {
    SmbDialectNtLanMan,
    SmbDialectLanMan21,
    SmbDialectDosLanMan21,
    SmbDialectLanMan20,
    SmbDialectDosLanMan20,
    SmbDialectLanMan10,
    SmbDialectMsNet30,
    SmbDialectMsNet103,
    SmbDialectPcLan10,
    SmbDialectPcNet10,
    SmbDialectIllegal,
} SMB_DIALECT, *PSMB_DIALECT;
    ( (BOOLEAN)( (dialect) == SmbDialectDosLanMan21 || \
                 (dialect) == SmbDialectDosLanMan20 || \
                 (dialect) > SmbDialectLanMan10 ) )
    ( (BOOLEAN)(dialect <= SmbDialectDosLanMan20 ) )
typedef union _SMB_DATE {
    USHORT Ushort;
    struct {
        USHORT Day : 5;
        USHORT Month : 4;
        USHORT Year : 7;
    } Struct;
} SMB_DATE;
typedef SMB_DATE SMB_UNALIGNED *PSMB_DATE;
typedef union _SMB_TIME {
    USHORT Ushort;
    struct {
        USHORT TwoSeconds : 5;
        USHORT Minutes : 6;
        USHORT Hours : 5;
    } Struct;
} SMB_TIME;
typedef SMB_TIME SMB_UNALIGNED *PSMB_TIME;
typedef struct _SMB_FIND_BUFFER {
    SMB_DATE CreationDate;
    SMB_TIME CreationTime;
    SMB_DATE LastAccessDate;
    SMB_TIME LastAccessTime;
    SMB_DATE LastWriteDate;
    SMB_TIME LastWriteTime;
    _ULONG( DataSize );
    _ULONG( AllocationSize );
    _USHORT( Attributes );
    UCHAR FileNameLength;
    CHAR FileName[1];
} SMB_FIND_BUFFER;
typedef SMB_FIND_BUFFER SMB_UNALIGNED *PSMB_FIND_BUFFER;
typedef struct _SMB_FIND_BUFFER2 {
    SMB_DATE CreationDate;
    SMB_TIME CreationTime;
    SMB_DATE LastAccessDate;
    SMB_TIME LastAccessTime;
    SMB_DATE LastWriteDate;
    SMB_TIME LastWriteTime;
    _ULONG( DataSize );
    _ULONG( AllocationSize );
    _USHORT( Attributes );
    _ULONG( EaSize );
    UCHAR FileNameLength;
    CHAR FileName[1];
} SMB_FIND_BUFFER2;
typedef SMB_FIND_BUFFER2 SMB_UNALIGNED *PSMB_FIND_BUFFER2;
typedef struct _FEA {
    UCHAR fEA;
    UCHAR cbName;
    _USHORT( cbValue );
} FEA;
typedef FEA SMB_UNALIGNED *PFEA;
typedef struct _FEALIST {
    _ULONG( cbList );
    FEA list[1];
} FEALIST;
typedef FEALIST SMB_UNALIGNED *PFEALIST;
typedef struct _GEA {
    UCHAR cbName;
    CHAR szName[1];
} GEA;
typedef GEA SMB_UNALIGNED *PGEA;
typedef struct _GEALIST {
    _ULONG( cbList );
    GEA list[1];
} GEALIST;
typedef GEALIST SMB_UNALIGNED *PGEALIST;
typedef struct _EAOP {
    PGEALIST fpGEAList;
    PFEALIST fpFEAList;
    ULONG oError;
} EAOP;
typedef EAOP SMB_UNALIGNED *PEAOP;
typedef struct _FSALLOCATE {
    _ULONG( idFileSystem );
    _ULONG( cSectorUnit );
    _ULONG( cUnit );
    _ULONG( cUnitAvail );
    _USHORT( cbSector );
} FSALLOCATE, *PFSALLOCATE;
typedef struct _VOLUMELABEL {
    UCHAR cch;
    CHAR szVolLabel[12];
} VOLUMELABEL, *PVOLUMELABEL;
typedef struct _FSINFO {
    _ULONG( ulVsn );
    VOLUMELABEL vol;
} FSINFO, *PFSINFO;
typedef enum _FILE_TYPE {
    FileTypeDisk = 0,
    FileTypeByteModePipe = 1,
    FileTypeMessageModePipe = 2,
    FileTypePrinter = 3,
    FileTypeCommDevice = 4,
    FileTypeIPC = 0xFFFE,
    FileTypeUnknown = 0xFFFF
} FILE_TYPE;
#include <packoff.h>
        (PVOID)( ((ULONG_PTR)(Pointer) + 1) & ~1 )
            (USHORT)( (ULONG_PTR)&((type *)0)->Buffer[0] + (byteCount) )
        (PVOID)( (ULONG_PTR)( (PUCHAR)( &((type *)(base))->Buffer[0] ) ) + \
        (byteCount) )
        (USHORT)( (PCHAR)(params) - (PCHAR)(header) + \
          SIZEOF_SMB_PARAMS( type,(byteCount) ) )
            (ULONG)(( FIELD_OFFSET(FILE_FULL_EA_INFORMATION, EaName[0]) + \
                      (Fea)->cbName + 1 + SmbGetUshort( &(Fea)->cbValue ) + \
                      3 ) & ~3 )
            (ULONG)(( FIELD_OFFSET(FILE_FULL_EA_INFORMATION, EaName[0]) + \
                      (Gea)->cbName + 1 + 3 ) & ~3 )
            (ULONG)( sizeof(FEA) + (NtFullEa)->EaNameLength + 1 + \
                     (NtFullEa)->EaValueLength )
            (ULONG)( sizeof(GEA) + (NtGetEa)->EaNameLength )
#include <packon.h>
typedef struct _SMB_HEADER {
    UCHAR Protocol[4];
    UCHAR Command;
    UCHAR ErrorClass;
    UCHAR Reserved;
    _USHORT( Error );
    UCHAR Flags;
    _USHORT( Flags2 );
    union {
        _USHORT( Reserved2 )[6];
        struct {
            _USHORT( PidHigh );
            union {
                struct {
                    _ULONG( Key );
                    _USHORT( Sid );
                    _USHORT( SequenceNumber );
                    _USHORT( Gid );
                };
                UCHAR SecuritySignature[SMB_SECURITY_SIGNATURE_LENGTH];
            };
        };
    };
    _USHORT( Tid );
    _USHORT( Pid );
    _USHORT( Uid );
    _USHORT( Mid );
    _USHORT( Kludge );
} SMB_HEADER;
typedef SMB_HEADER *PSMB_HEADER;
typedef struct _NT_SMB_HEADER {
    UCHAR Protocol[4];
    UCHAR Command;
    union {
        struct {
            UCHAR ErrorClass;
            UCHAR Reserved;
            _USHORT( Error );
        } DosError;
        ULONG NtStatus;
    } Status;
    UCHAR Flags;
    _USHORT( Flags2 );
    union {
        _USHORT( Reserved2 )[6];
        struct {
            _USHORT( PidHigh );
            union {
                struct {
                    _ULONG( Key );
                    _USHORT( Sid );
                    _USHORT( SequenceNumber );
                    _USHORT( Gid );
                };
                UCHAR SecuritySignature[SMB_SECURITY_SIGNATURE_LENGTH];
            };
        };
    };
    _USHORT( Tid );
    _USHORT( Pid );
    _USHORT( Uid );
    _USHORT( Mid );
    _USHORT( Kludge );
} NT_SMB_HEADER;
typedef NT_SMB_HEADER *PNT_SMB_HEADER;
typedef struct _SMB_PARAMS {
    UCHAR WordCount;
    _USHORT( ByteCount );
} SMB_PARAMS;
typedef SMB_PARAMS SMB_UNALIGNED *PSMB_PARAMS;
typedef struct _GENERIC_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
} GENERIC_ANDX;
typedef GENERIC_ANDX SMB_UNALIGNED *PGENERIC_ANDX;
typedef struct _REQ_CANCEL_FORWARD {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_CANCEL_FORWARD;
typedef REQ_CANCEL_FORWARD SMB_UNALIGNED *PREQ_CANCEL_FORWARD;
typedef struct _RESP_CANCEL_FORWARD {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_CANCEL_FORWARD;
typedef RESP_CANCEL_FORWARD SMB_UNALIGNED *PRESP_CANCEL_FORWARD;
typedef struct _REQ_CHECK_DIRECTORY {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_CHECK_DIRECTORY;
typedef REQ_CHECK_DIRECTORY SMB_UNALIGNED *PREQ_CHECK_DIRECTORY;
typedef struct _RESP_CHECK_DIRECTORY {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_CHECK_DIRECTORY;
typedef RESP_CHECK_DIRECTORY SMB_UNALIGNED *PRESP_CHECK_DIRECTORY;
typedef struct _REQ_CLOSE {
    UCHAR WordCount;
    _USHORT( Fid );
    _ULONG( LastWriteTimeInSeconds );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_CLOSE;
typedef REQ_CLOSE SMB_UNALIGNED *PREQ_CLOSE;
typedef struct _RESP_CLOSE {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_CLOSE;
typedef RESP_CLOSE SMB_UNALIGNED *PRESP_CLOSE;
typedef struct _REQ_CLOSE_AND_TREE_DISC {
    UCHAR WordCount;
    _USHORT( Fid );
    _ULONG( LastWriteTimeInSeconds );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_CLOSE_AND_TREE_DISC;
typedef REQ_CLOSE_AND_TREE_DISC SMB_UNALIGNED *PREQ_CLOSE_AND_TREE_DISC;
typedef struct _RESP_CLOSE_AND_TREE_DISC {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_CLOSE_AND_TREE_DISC;
typedef RESP_CLOSE_AND_TREE_DISC SMB_UNALIGNED *PRESP_CLOSE_AND_TREE_DISC;
typedef struct _REQ_CLOSE_PRINT_FILE {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_CLOSE_PRINT_FILE;
typedef REQ_CLOSE_PRINT_FILE SMB_UNALIGNED *PREQ_CLOSE_PRINT_FILE;
typedef struct _RESP_CLOSE_PRINT_FILE {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_CLOSE_PRINT_FILE;
typedef RESP_CLOSE_PRINT_FILE SMB_UNALIGNED *PRESP_CLOSE_PRINT_FILE;
typedef struct _REQ_COPY {
    UCHAR WordCount;
    _USHORT( Tid2 );
    _USHORT( OpenFunction );
    _USHORT( Flags );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_COPY;
typedef REQ_COPY SMB_UNALIGNED *PREQ_COPY;
typedef struct _RESP_COPY {
    UCHAR WordCount;
    _USHORT( Count );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_COPY;
typedef RESP_COPY SMB_UNALIGNED *PRESP_COPY;
typedef struct _REQ_CREATE {
    UCHAR WordCount;
    _USHORT( FileAttributes );
    _ULONG( CreationTimeInSeconds );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_CREATE;
typedef REQ_CREATE SMB_UNALIGNED *PREQ_CREATE;
typedef struct _RESP_CREATE {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_CREATE;
typedef RESP_CREATE SMB_UNALIGNED *PRESP_CREATE;
typedef struct _REQ_CREATE_DIRECTORY {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_CREATE_DIRECTORY;
typedef REQ_CREATE_DIRECTORY SMB_UNALIGNED *PREQ_CREATE_DIRECTORY;
typedef struct _RESP_CREATE_DIRECTORY {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_CREATE_DIRECTORY;
typedef RESP_CREATE_DIRECTORY SMB_UNALIGNED *PRESP_CREATE_DIRECTORY;
typedef struct _REQ_CREATE_TEMPORARY {
    UCHAR WordCount;
    _USHORT( FileAttributes );
    _ULONG( CreationTimeInSeconds );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_CREATE_TEMPORARY;
typedef REQ_CREATE_TEMPORARY SMB_UNALIGNED *PREQ_CREATE_TEMPORARY;
typedef struct _RESP_CREATE_TEMPORARY {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_CREATE_TEMPORARY;
typedef RESP_CREATE_TEMPORARY SMB_UNALIGNED *PRESP_CREATE_TEMPORARY;
typedef struct _REQ_DELETE {
    UCHAR WordCount;
    _USHORT( SearchAttributes );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_DELETE;
typedef REQ_DELETE SMB_UNALIGNED *PREQ_DELETE;
typedef struct _RESP_DELETE {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_DELETE;
typedef RESP_DELETE SMB_UNALIGNED *PRESP_DELETE;
typedef struct _REQ_DELETE_DIRECTORY {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_DELETE_DIRECTORY;
typedef REQ_DELETE_DIRECTORY SMB_UNALIGNED *PREQ_DELETE_DIRECTORY;
typedef struct _RESP_DELETE_DIRECTORY {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_DELETE_DIRECTORY;
typedef RESP_DELETE_DIRECTORY SMB_UNALIGNED *PRESP_DELETE_DIRECTORY;
typedef struct _REQ_ECHO {
    UCHAR WordCount;
    _USHORT( EchoCount );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_ECHO;
typedef REQ_ECHO SMB_UNALIGNED *PREQ_ECHO;
typedef struct _RESP_ECHO {
    UCHAR WordCount;
    _USHORT( SequenceNumber );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_ECHO;
typedef RESP_ECHO SMB_UNALIGNED *PRESP_ECHO;
typedef struct _REQ_FIND_CLOSE2 {
    UCHAR WordCount;
    _USHORT( Sid );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_FIND_CLOSE2;
typedef REQ_FIND_CLOSE2 SMB_UNALIGNED *PREQ_FIND_CLOSE2;
typedef struct _RESP_FIND_CLOSE2 {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_FIND_CLOSE2;
typedef RESP_FIND_CLOSE2 SMB_UNALIGNED *PRESP_FIND_CLOSE2;
typedef struct _REQ_FIND_NOTIFY_CLOSE {
    UCHAR WordCount;
    _USHORT( Handle );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_FIND_NOTIFY_CLOSE;
typedef REQ_FIND_NOTIFY_CLOSE SMB_UNALIGNED *PREQ_FIND_NOTIFY_CLOSE;
typedef struct _RESP_FIND_NOTIFY_CLOSE {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_FIND_NOTIFY_CLOSE;
typedef RESP_FIND_NOTIFY_CLOSE SMB_UNALIGNED *PRESP_FIND_NOTIFY_CLOSE;
typedef struct _REQ_FLUSH {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_FLUSH;
typedef REQ_FLUSH SMB_UNALIGNED *PREQ_FLUSH;
typedef struct _RESP_FLUSH {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_FLUSH;
typedef RESP_FLUSH SMB_UNALIGNED *PRESP_FLUSH;
typedef struct _REQ_FORWARD_USER_NAME {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_FORWARD_USER_NAME;
typedef REQ_FORWARD_USER_NAME SMB_UNALIGNED *PREQ_FORWARD_USER_NAME;
typedef struct _RESP_FORWARD_USER_NAME {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_FORWARD_USER_NAME;
typedef RESP_FORWARD_USER_NAME SMB_UNALIGNED *PRESP_FORWARD_USER_NAME;
typedef struct _REQ_GET_MACHINE_NAME {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_GET_MACHINE_NAME;
typedef REQ_GET_MACHINE_NAME SMB_UNALIGNED *PREQ_GET_MACHINE_NAME;
typedef struct _RESP_GET_MACHINE_NAME {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_GET_MACHINE_NAME;
typedef RESP_GET_MACHINE_NAME SMB_UNALIGNED *PRESP_GET_MACHINE_NAME;
typedef struct _REQ_GET_PRINT_QUEUE {
    UCHAR WordCount;
    _USHORT( MaxCount );
    _USHORT( StartIndex );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_GET_PRINT_QUEUE;
typedef REQ_GET_PRINT_QUEUE SMB_UNALIGNED *PREQ_GET_PRINT_QUEUE;
typedef struct _RESP_GET_PRINT_QUEUE {
    UCHAR WordCount;
    _USHORT( Count );
    _USHORT( RestartIndex );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_GET_PRINT_QUEUE;
typedef RESP_GET_PRINT_QUEUE SMB_UNALIGNED *PRESP_GET_PRINT_QUEUE;
typedef struct _REQ_IOCTL {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( Category );
    _USHORT( Function );
    _USHORT( TotalParameterCount );
    _USHORT( TotalDataCount );
    _USHORT( MaxParameterCount );
    _USHORT( MaxDataCount );
    _ULONG( Timeout );
    _USHORT( Reserved );
    _USHORT( ParameterCount );
    _USHORT( ParameterOffset );
    _USHORT( DataCount );
    _USHORT( DataOffset );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_IOCTL;
typedef REQ_IOCTL SMB_UNALIGNED *PREQ_IOCTL;
typedef struct _RESP_IOCTL_INTERIM {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_IOCTL_INTERIM;
typedef RESP_IOCTL_INTERIM SMB_UNALIGNED *PRESP_IOCTL_INTERIM;
typedef struct _REQ_IOCTL_SECONDARY {
    UCHAR WordCount;
    _USHORT( TotalParameterCount );
    _USHORT( TotalDataCount );
    _USHORT( ParameterCount );
    _USHORT( ParameterOffset );
    _USHORT( ParameterDisplacement );
    _USHORT( DataCount );
    _USHORT( DataOffset );
    _USHORT( DataDisplacement );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_IOCTL_SECONDARY;
typedef REQ_IOCTL_SECONDARY SMB_UNALIGNED *PREQ_IOCTL_SECONDARY;
typedef struct _RESP_IOCTL {
    UCHAR WordCount;
    _USHORT( TotalParameterCount );
    _USHORT( TotalDataCount );
    _USHORT( ParameterCount );
    _USHORT( ParameterOffset );
    _USHORT( ParameterDisplacement );
    _USHORT( DataCount );
    _USHORT( DataOffset );
    _USHORT( DataDisplacement );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_IOCTL;
typedef RESP_IOCTL SMB_UNALIGNED *PRESP_IOCTL;
typedef struct _REQ_LOCK_BYTE_RANGE {
    UCHAR WordCount;
    _USHORT( Fid );
    _ULONG( Count );
    _ULONG( Offset );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_LOCK_BYTE_RANGE;
typedef REQ_LOCK_BYTE_RANGE SMB_UNALIGNED *PREQ_LOCK_BYTE_RANGE;
typedef struct _RESP_LOCK_BYTE_RANGE {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_LOCK_BYTE_RANGE;
typedef RESP_LOCK_BYTE_RANGE SMB_UNALIGNED *PRESP_LOCK_BYTE_RANGE;
typedef struct _REQ_LOCKING_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( Fid );
    UCHAR( LockType );
    UCHAR( OplockLevel );
    _ULONG( Timeout );
    _USHORT( NumberOfUnlocks );
    _USHORT( NumberOfLocks );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_LOCKING_ANDX;
typedef REQ_LOCKING_ANDX SMB_UNALIGNED *PREQ_LOCKING_ANDX;
typedef struct _LOCKING_ANDX_RANGE {
    _USHORT( Pid );
    _ULONG( Offset );
    _ULONG( Length );
} LOCKING_ANDX_RANGE;
typedef LOCKING_ANDX_RANGE SMB_UNALIGNED *PLOCKING_ANDX_RANGE;
typedef struct _NT_LOCKING_ANDX_RANGE {
    _USHORT( Pid );
    _USHORT( Pad );
    _ULONG( OffsetHigh );
    _ULONG( OffsetLow );
    _ULONG( LengthHigh );
    _ULONG( LengthLow );
} NTLOCKING_ANDX_RANGE;
typedef NTLOCKING_ANDX_RANGE SMB_UNALIGNED *PNTLOCKING_ANDX_RANGE;
typedef struct _RESP_LOCKING_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_LOCKING_ANDX;
typedef RESP_LOCKING_ANDX SMB_UNALIGNED *PRESP_LOCKING_ANDX;
typedef struct _REQ_LOGOFF_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_LOGOFF_ANDX;
typedef REQ_LOGOFF_ANDX SMB_UNALIGNED *PREQ_LOGOFF_ANDX;
typedef struct _RESP_LOGOFF_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_LOGOFF_ANDX;
typedef RESP_LOGOFF_ANDX SMB_UNALIGNED *PRESP_LOGOFF_ANDX;
typedef struct _REQ_MOVE {
    UCHAR WordCount;
    _USHORT( Tid2 );
    _USHORT( OpenFunction );
    _USHORT( Flags );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_MOVE;
typedef REQ_MOVE SMB_UNALIGNED *PREQ_MOVE;
typedef struct _RESP_MOVE {
    UCHAR WordCount;
    _USHORT( Count );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_MOVE;
typedef RESP_MOVE SMB_UNALIGNED *PRESP_MOVE;
typedef struct _REQ_NEGOTIATE {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_NEGOTIATE;
typedef REQ_NEGOTIATE *PREQ_NEGOTIATE;
typedef struct _RESP_NEGOTIATE {
    UCHAR WordCount;
    _USHORT( DialectIndex );
    _USHORT( SecurityMode );
    _USHORT( MaxBufferSize );
    _USHORT( MaxMpxCount );
    _USHORT( MaxNumberVcs );
    _USHORT( RawMode );
    _ULONG( SessionKey );
    SMB_TIME ServerTime;
    SMB_DATE ServerDate;
    _USHORT( ServerTimeZone );
    _USHORT( EncryptionKeyLength );
    _USHORT( Reserved );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_NEGOTIATE;
typedef RESP_NEGOTIATE *PRESP_NEGOTIATE;
typedef struct _RESP_OLD_NEGOTIATE {
    UCHAR WordCount;
    _USHORT( DialectIndex );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_OLD_NEGOTIATE;
typedef RESP_OLD_NEGOTIATE *PRESP_OLD_NEGOTIATE;
typedef struct _RESP_NT_NEGOTIATE {
    UCHAR WordCount;
    _USHORT( DialectIndex );
    UCHAR( SecurityMode );
    _USHORT( MaxMpxCount );
    _USHORT( MaxNumberVcs );
    _ULONG( MaxBufferSize );
    _ULONG( MaxRawSize );
    _ULONG( SessionKey );
    _ULONG( Capabilities );
    _ULONG( SystemTimeLow );
    _ULONG( SystemTimeHigh );
    _USHORT( ServerTimeZone );
    UCHAR( EncryptionKeyLength );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_NT_NEGOTIATE;
typedef RESP_NT_NEGOTIATE *PRESP_NT_NEGOTIATE;
typedef struct _REQ_OPEN {
    UCHAR WordCount;
    _USHORT( DesiredAccess );
    _USHORT( SearchAttributes );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_OPEN;
typedef REQ_OPEN SMB_UNALIGNED *PREQ_OPEN;
typedef struct _RESP_OPEN {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( FileAttributes );
    _ULONG( LastWriteTimeInSeconds );
    _ULONG( DataSize );
    _USHORT( GrantedAccess );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_OPEN;
typedef RESP_OPEN SMB_UNALIGNED *PRESP_OPEN;
typedef struct _REQ_OPEN_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( Flags );
    _USHORT( DesiredAccess );
    _USHORT( SearchAttributes );
    _USHORT( FileAttributes );
    _ULONG( CreationTimeInSeconds );
    _USHORT( OpenFunction );
    _ULONG( AllocationSize );
    _ULONG( Timeout );
    _ULONG( Reserved );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_OPEN_ANDX;
typedef REQ_OPEN_ANDX SMB_UNALIGNED *PREQ_OPEN_ANDX;
typedef struct _RESP_OPEN_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( Fid );
    _USHORT( FileAttributes );
    _ULONG( LastWriteTimeInSeconds );
    _ULONG( DataSize );
    _USHORT( GrantedAccess );
    _USHORT( FileType );
    _USHORT( DeviceState );
    _USHORT( Action );
    _ULONG( ServerFid );
    _USHORT( Reserved );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_OPEN_ANDX;
typedef RESP_OPEN_ANDX SMB_UNALIGNED *PRESP_OPEN_ANDX;
typedef struct _REQ_NT_CREATE_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    UCHAR Reserved;
    _USHORT( NameLength );
    _ULONG( Flags );
    _ULONG( RootDirectoryFid );
    ACCESS_MASK DesiredAccess;
    LARGE_INTEGER AllocationSize;
    _ULONG( FileAttributes );
    _ULONG( ShareAccess );
    _ULONG( CreateDisposition );
    _ULONG( CreateOptions );
    _ULONG( ImpersonationLevel );
    UCHAR SecurityFlags;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_NT_CREATE_ANDX;
typedef REQ_NT_CREATE_ANDX SMB_UNALIGNED *PREQ_NT_CREATE_ANDX;
typedef struct _RESP_NT_CREATE_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    UCHAR OplockLevel;
    _USHORT( Fid );
    _ULONG( CreateAction );
    TIME CreationTime;
    TIME LastAccessTime;
    TIME LastWriteTime;
    TIME ChangeTime;
    _ULONG( FileAttributes );
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    _USHORT( FileType );
    union {
        _USHORT( DeviceState );
        _USHORT( FileStatusFlags );
    };
    BOOLEAN Directory;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_NT_CREATE_ANDX;
typedef RESP_NT_CREATE_ANDX SMB_UNALIGNED *PRESP_NT_CREATE_ANDX;
typedef struct _REQ_OPEN_PRINT_FILE {
    UCHAR WordCount;
    _USHORT( SetupLength );
    _USHORT( Mode );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_OPEN_PRINT_FILE;
typedef REQ_OPEN_PRINT_FILE SMB_UNALIGNED *PREQ_OPEN_PRINT_FILE;
typedef struct _RESP_OPEN_PRINT_FILE {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_OPEN_PRINT_FILE;
typedef RESP_OPEN_PRINT_FILE SMB_UNALIGNED *PRESP_OPEN_PRINT_FILE;
typedef struct _REQ_PROCESS_EXIT {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_PROCESS_EXIT;
typedef REQ_PROCESS_EXIT SMB_UNALIGNED *PREQ_PROCESS_EXIT;
typedef struct _RESP_PROCESS_EXIT {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_PROCESS_EXIT;
typedef RESP_PROCESS_EXIT SMB_UNALIGNED *PRESP_PROCESS_EXIT;
typedef struct _REQ_QUERY_INFORMATION {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_QUERY_INFORMATION;
typedef REQ_QUERY_INFORMATION SMB_UNALIGNED *PREQ_QUERY_INFORMATION;
typedef struct _RESP_QUERY_INFORMATION {
    UCHAR WordCount;
    _USHORT( FileAttributes );
    _ULONG( LastWriteTimeInSeconds );
    _ULONG( FileSize );
    _USHORT( Reserved )[5];
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_QUERY_INFORMATION;
typedef RESP_QUERY_INFORMATION SMB_UNALIGNED *PRESP_QUERY_INFORMATION;
typedef struct _REQ_QUERY_INFORMATION2 {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_QUERY_INFORMATION2;
typedef REQ_QUERY_INFORMATION2 SMB_UNALIGNED *PREQ_QUERY_INFORMATION2;
typedef struct _RESP_QUERY_INFORMATION2 {
    UCHAR WordCount;
    SMB_DATE CreationDate;
    SMB_TIME CreationTime;
    SMB_DATE LastAccessDate;
    SMB_TIME LastAccessTime;
    SMB_DATE LastWriteDate;
    SMB_TIME LastWriteTime;
    _ULONG( FileDataSize );
    _ULONG( FileAllocationSize );
    _USHORT( FileAttributes );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_QUERY_INFORMATION2;
typedef RESP_QUERY_INFORMATION2 SMB_UNALIGNED *PRESP_QUERY_INFORMATION2;
typedef struct _REQ_QUERY_INFORMATION_DISK {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_QUERY_INFORMATION_DISK;
typedef REQ_QUERY_INFORMATION_DISK SMB_UNALIGNED *PREQ_QUERY_INFORMATION_DISK;
typedef struct _RESP_QUERY_INFORMATION_DISK {
    UCHAR WordCount;
    _USHORT( TotalUnits );
    _USHORT( BlocksPerUnit );
    _USHORT( BlockSize );
    _USHORT( FreeUnits );
    _USHORT( Reserved );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_QUERY_INFORMATION_DISK;
typedef RESP_QUERY_INFORMATION_DISK SMB_UNALIGNED *PRESP_QUERY_INFORMATION_DISK;
typedef struct _REQ_QUERY_INFORMATION_SRV {
    UCHAR WordCount;
    _USHORT( Mode );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_QUERY_INFORMATION_SRV;
typedef REQ_QUERY_INFORMATION_SRV SMB_UNALIGNED *PREQ_QUERY_INFORMATION_SRV;
typedef struct _RESP_QUERY_INFORMATION_SRV {
    UCHAR WordCount;
    _ULONG( smb_fsid );
    _ULONG( BlocksPerUnit );
    _ULONG( smb_aunits );
    _ULONG( smb_fau );
    _USHORT( BlockSize );
    SMB_DATE smb_vldate;
    SMB_TIME smb_vltime;
    UCHAR smb_vllen;
    UCHAR Reserved;
    _USHORT( SecurityMode );
    _USHORT( BlockMode );
    _ULONG( Services );
    _USHORT( MaxTransmitSize );
    _USHORT( MaxMpxCount );
    _USHORT( MaxNumberVcs );
    SMB_TIME ServerTime;
    SMB_DATE ServerDate;
    _USHORT( ServerTimeZone );
    _ULONG( Reserved2 );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_QUERY_INFORMATION_SRV;
typedef RESP_QUERY_INFORMATION_SRV SMB_UNALIGNED *PRESP_QUERY_INFORMATION_SRV;
typedef struct _REQ_READ {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( Count );
    _ULONG( Offset );
    _USHORT( Remaining );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_READ;
typedef REQ_READ SMB_UNALIGNED *PREQ_READ;
typedef struct _RESP_READ {
    UCHAR WordCount;
    _USHORT( Count );
    _USHORT( Reserved )[4];
    _USHORT( ByteCount );
      UCHAR BufferFormat;
      _USHORT( DataLength );
      ULONG Buffer[1];
} RESP_READ;
typedef RESP_READ SMB_UNALIGNED *PRESP_READ;
typedef struct _REQ_READ_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( Fid );
    _ULONG( Offset );
    _USHORT( MaxCount );
    _USHORT( MinCount );
    _ULONG( Timeout );
    _USHORT( Remaining );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_READ_ANDX;
typedef REQ_READ_ANDX SMB_UNALIGNED *PREQ_READ_ANDX;
typedef struct _REQ_NT_READ_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( Fid );
    _ULONG( Offset );
    _USHORT( MaxCount );
    _USHORT( MinCount );
    union {
        _ULONG( Timeout );
        _USHORT( MaxCountHigh );
    };
    _USHORT( Remaining );
    _ULONG( OffsetHigh );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_NT_READ_ANDX;
typedef REQ_NT_READ_ANDX SMB_UNALIGNED *PREQ_NT_READ_ANDX;
typedef struct _RESP_READ_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( Remaining );
    _USHORT( DataCompactionMode );
    _USHORT( Reserved );
    _USHORT( DataLength );
    _USHORT( DataOffset );
    union {
        _USHORT( Reserved2 );
        _USHORT( DataLengthHigh );
    };
    _ULONG( Reserved3 )[2];
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_READ_ANDX;
typedef RESP_READ_ANDX SMB_UNALIGNED *PRESP_READ_ANDX;
typedef struct _REQ_READ_MPX {
    UCHAR WordCount;
    _USHORT( Fid );
    _ULONG( Offset );
    _USHORT( MaxCount );
    _USHORT( MinCount );
    _ULONG( Timeout );
    _USHORT( Reserved );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_READ_MPX;
typedef REQ_READ_MPX SMB_UNALIGNED *PREQ_READ_MPX;
typedef struct _RESP_READ_MPX {
    UCHAR WordCount;
    _ULONG( Offset );
    _USHORT( Count );
    _USHORT( Remaining );
    _USHORT( DataCompactionMode );
    _USHORT( Reserved );
    _USHORT( DataLength );
    _USHORT( DataOffset );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_READ_MPX;
typedef RESP_READ_MPX SMB_UNALIGNED *PRESP_READ_MPX;
typedef struct _REQ_READ_RAW {
    UCHAR WordCount;
    _USHORT( Fid );
    _ULONG( Offset );
    _USHORT( MaxCount );
    _USHORT( MinCount );
    _ULONG( Timeout );
    _USHORT( Reserved );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_READ_RAW;
typedef REQ_READ_RAW SMB_UNALIGNED *PREQ_READ_RAW;
typedef struct _REQ_NT_READ_RAW {
    UCHAR WordCount;
    _USHORT( Fid );
    _ULONG( Offset );
    _USHORT( MaxCount );
    _USHORT( MinCount );
    _ULONG( Timeout );
    _USHORT( Reserved );
    _ULONG( OffsetHigh );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_NT_READ_RAW;
typedef REQ_NT_READ_RAW SMB_UNALIGNED *PREQ_NT_READ_RAW;
typedef struct _REQ_RENAME {
    UCHAR WordCount;
    _USHORT( SearchAttributes );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_RENAME;
typedef REQ_RENAME SMB_UNALIGNED *PREQ_RENAME;
typedef struct _REQ_NTRENAME {
    UCHAR WordCount;
    _USHORT( SearchAttributes );
    _USHORT( InformationLevel );
    _ULONG( ClusterCount );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_NTRENAME;
typedef REQ_NTRENAME SMB_UNALIGNED *PREQ_NTRENAME;
typedef struct _RESP_RENAME {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_RENAME;
typedef RESP_RENAME SMB_UNALIGNED *PRESP_RENAME;
typedef struct _REQ_SEARCH {
    UCHAR WordCount;
    _USHORT( MaxCount );
    _USHORT( SearchAttributes );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_SEARCH;
typedef REQ_SEARCH SMB_UNALIGNED *PREQ_SEARCH;
typedef struct _RESP_SEARCH {
    UCHAR WordCount;
    _USHORT( Count );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_SEARCH;
typedef RESP_SEARCH SMB_UNALIGNED *PRESP_SEARCH;
#include <packon.h>
typedef struct _SMB_RESUME_KEY {
    UCHAR Reserved;
    UCHAR FileName[11];
    UCHAR Sid;
    _ULONG( FileIndex );
    UCHAR Consumer[4];
} SMB_RESUME_KEY;
typedef SMB_RESUME_KEY SMB_UNALIGNED *PSMB_RESUME_KEY;
typedef struct _SMB_DIRECTORY_INFORMATION {
    SMB_RESUME_KEY ResumeKey;
    UCHAR FileAttributes;
    SMB_TIME LastWriteTime;
    SMB_DATE LastWriteDate;
    _ULONG( FileSize );
    UCHAR FileName[13];
} SMB_DIRECTORY_INFORMATION;
typedef SMB_DIRECTORY_INFORMATION SMB_UNALIGNED *PSMB_DIRECTORY_INFORMATION;
#include <packoff.h>
typedef struct _REQ_SEEK {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( Mode );
    _ULONG( Offset );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_SEEK;
typedef REQ_SEEK SMB_UNALIGNED *PREQ_SEEK;
typedef struct _RESP_SEEK {
    UCHAR WordCount;
    _ULONG( Offset );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_SEEK;
typedef RESP_SEEK SMB_UNALIGNED *PRESP_SEEK;
typedef struct _REQ_SEND_BROADCAST_MESSAGE {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_SEND_BROADCAST_MESSAGE;
typedef REQ_SEND_BROADCAST_MESSAGE SMB_UNALIGNED *PREQ_SEND_BROADCAST_MESSAGE;
typedef struct _REQ_SEND_END_MB_MESSAGE {
    UCHAR WordCount;
    _USHORT( MessageGroupId );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_SEND_END_MB_MESSAGE;
typedef REQ_SEND_END_MB_MESSAGE SMB_UNALIGNED *PREQ_SEND_END_MB_MESSAGE;
typedef struct _RESP_SEND_END_MB_MESSAGE {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_SEND_END_MB_MESSAGE;
typedef RESP_SEND_END_MB_MESSAGE SMB_UNALIGNED *PRESP_SEND_END_MB_MESSAGE;
typedef struct _REQ_SEND_MESSAGE {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_SEND_MESSAGE;
typedef REQ_SEND_MESSAGE SMB_UNALIGNED *PREQ_SEND_MESSAGE;
typedef struct _RESP_SEND_MESSAGE {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_SEND_MESSAGE;
typedef RESP_SEND_MESSAGE SMB_UNALIGNED *PRESP_SEND_MESSAGE;
typedef struct _REQ_SEND_START_MB_MESSAGE {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_SEND_START_MB_MESSAGE;
typedef REQ_SEND_START_MB_MESSAGE SMB_UNALIGNED *PREQ_SEND_START_MB_MESSAGE;
typedef struct _RESP_SEND_START_MB_MESSAGE {
    UCHAR WordCount;
    _USHORT( MessageGroupId );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_SEND_START_MB_MESSAGE;
typedef RESP_SEND_START_MB_MESSAGE SMB_UNALIGNED *PSEND_START_MB_MESSAGE;
typedef struct _REQ_SEND_TEXT_MB_MESSAGE {
    UCHAR WordCount;
    _USHORT( MessageGroupId );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_SEND_TEXT_MB_MESSAGE;
typedef REQ_SEND_TEXT_MB_MESSAGE SMB_UNALIGNED *PREQ_SEND_TEXT_MB_MESSAGE;
typedef struct _RESP_SEND_TEXT_MB_MESSAGE {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_SEND_TEXT_MB_MESSAGE;
typedef RESP_SEND_TEXT_MB_MESSAGE SMB_UNALIGNED *PRESP_SEND_TEXT_MB_MESSAGE;
typedef struct _REQ_SESSION_SETUP_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( MaxBufferSize );
    _USHORT( MaxMpxCount );
    _USHORT( VcNumber );
    _ULONG( SessionKey );
    _USHORT( PasswordLength );
    _ULONG( Reserved );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_SESSION_SETUP_ANDX;
typedef REQ_SESSION_SETUP_ANDX SMB_UNALIGNED *PREQ_SESSION_SETUP_ANDX;
typedef struct _REQ_NT_SESSION_SETUP_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( MaxBufferSize );
    _USHORT( MaxMpxCount );
    _USHORT( VcNumber );
    _ULONG( SessionKey );
    _USHORT( CaseInsensitivePasswordLength );
    _USHORT( CaseSensitivePasswordLength );
    _ULONG( Reserved);
    _ULONG( Capabilities );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_NT_SESSION_SETUP_ANDX;
typedef REQ_NT_SESSION_SETUP_ANDX SMB_UNALIGNED *PREQ_NT_SESSION_SETUP_ANDX;
typedef struct _RESP_SESSION_SETUP_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( Action );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_SESSION_SETUP_ANDX;
typedef RESP_SESSION_SETUP_ANDX SMB_UNALIGNED *PRESP_SESSION_SETUP_ANDX;
typedef struct _REQ_SET_INFORMATION {
    UCHAR WordCount;
    _USHORT( FileAttributes );
    _ULONG( LastWriteTimeInSeconds );
    _USHORT( Reserved )[5];
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_SET_INFORMATION;
typedef REQ_SET_INFORMATION SMB_UNALIGNED *PREQ_SET_INFORMATION;
typedef struct _RESP_SET_INFORMATION {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_SET_INFORMATION;
typedef RESP_SET_INFORMATION SMB_UNALIGNED *PRESP_SET_INFORMATION;
typedef struct _REQ_SET_INFORMATION2 {
    UCHAR WordCount;
    _USHORT( Fid );
    SMB_DATE CreationDate;
    SMB_TIME CreationTime;
    SMB_DATE LastAccessDate;
    SMB_TIME LastAccessTime;
    SMB_DATE LastWriteDate;
    SMB_TIME LastWriteTime;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_SET_INFORMATION2;
typedef REQ_SET_INFORMATION2 SMB_UNALIGNED *PREQ_SET_INFORMATION2;
typedef struct _RESP_SET_INFORMATION2 {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_SET_INFORMATION2;
typedef RESP_SET_INFORMATION2 SMB_UNALIGNED *PRESP_SET_INFORMATION2;
typedef struct _REQ_TRANSACTION {
    UCHAR WordCount;
    _USHORT( TotalParameterCount );
    _USHORT( TotalDataCount );
    _USHORT( MaxParameterCount );
    _USHORT( MaxDataCount );
    UCHAR MaxSetupCount;
    UCHAR Reserved;
    _USHORT( Flags );
    _ULONG( Timeout );
    _USHORT( Reserved2 );
    _USHORT( ParameterCount );
    _USHORT( ParameterOffset );
    _USHORT( DataCount );
    _USHORT( DataOffset );
    UCHAR SetupCount;
    UCHAR Reserved3;
    UCHAR Buffer[1];
} REQ_TRANSACTION;
typedef REQ_TRANSACTION SMB_UNALIGNED *PREQ_TRANSACTION;
typedef struct _RESP_TRANSACTION_INTERIM {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_TRANSACTION_INTERIM;
typedef RESP_TRANSACTION_INTERIM SMB_UNALIGNED *PRESP_TRANSACTION_INTERIM;
typedef struct _REQ_TRANSACTION_SECONDARY {
    UCHAR WordCount;
    _USHORT( TotalParameterCount );
    _USHORT( TotalDataCount );
    _USHORT( ParameterCount );
    _USHORT( ParameterOffset );
    _USHORT( ParameterDisplacement );
    _USHORT( DataCount );
    _USHORT( DataOffset );
    _USHORT( DataDisplacement );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_TRANSACTION_SECONDARY;
typedef REQ_TRANSACTION_SECONDARY SMB_UNALIGNED *PREQ_TRANSACTION_SECONDARY;
typedef struct _RESP_TRANSACTION {
    UCHAR WordCount;
    _USHORT( TotalParameterCount );
    _USHORT( TotalDataCount );
    _USHORT( Reserved );
    _USHORT( ParameterCount );
    _USHORT( ParameterOffset );
    _USHORT( ParameterDisplacement );
    _USHORT( DataCount );
    _USHORT( DataOffset );
    _USHORT( DataDisplacement );
    UCHAR SetupCount;
    UCHAR Reserved2;
    UCHAR Buffer[1];
} RESP_TRANSACTION;
typedef RESP_TRANSACTION SMB_UNALIGNED *PRESP_TRANSACTION;
typedef struct _REQ_NT_TRANSACTION {
    UCHAR WordCount;
    UCHAR MaxSetupCount;
    _USHORT( Flags );
    _ULONG( TotalParameterCount );
    _ULONG( TotalDataCount );
    _ULONG( MaxParameterCount );
    _ULONG( MaxDataCount );
    _ULONG( ParameterCount );
    _ULONG( ParameterOffset );
    _ULONG( DataCount );
    _ULONG( DataOffset );
    UCHAR SetupCount;
    _USHORT( Function );
    UCHAR Buffer[1];
} REQ_NT_TRANSACTION;
typedef REQ_NT_TRANSACTION SMB_UNALIGNED *PREQ_NT_TRANSACTION;
typedef struct _RESP_NT_TRANSACTION_INTERIM {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_NT_TRANSACTION_INTERIM;
typedef RESP_NT_TRANSACTION_INTERIM SMB_UNALIGNED *PRESP_NT_TRANSACTION_INTERIM;
typedef struct _REQ_NT_TRANSACTION_SECONDARY {
    UCHAR WordCount;
    UCHAR Reserved1;
    _USHORT( Reserved2 );
    _ULONG( TotalParameterCount );
    _ULONG( TotalDataCount );
    _ULONG( ParameterCount );
    _ULONG( ParameterOffset );
    _ULONG( ParameterDisplacement );
    _ULONG( DataCount );
    _ULONG( DataOffset );
    _ULONG( DataDisplacement );
    UCHAR Reserved3;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_NT_TRANSACTION_SECONDARY;
typedef REQ_NT_TRANSACTION_SECONDARY SMB_UNALIGNED *PREQ_NT_TRANSACTION_SECONDARY;
typedef struct _RESP_NT_TRANSACTION {
    UCHAR WordCount;
    UCHAR Reserved1;
    _USHORT( Reserved2 );
    _ULONG( TotalParameterCount );
    _ULONG( TotalDataCount );
    _ULONG( ParameterCount );
    _ULONG( ParameterOffset );
    _ULONG( ParameterDisplacement );
    _ULONG( DataCount );
    _ULONG( DataOffset );
    _ULONG( DataDisplacement );
    UCHAR SetupCount;
    UCHAR Buffer[1];
} RESP_NT_TRANSACTION;
typedef RESP_NT_TRANSACTION SMB_UNALIGNED *PRESP_NT_TRANSACTION;
typedef struct _REQ_TREE_CONNECT {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_TREE_CONNECT;
typedef REQ_TREE_CONNECT SMB_UNALIGNED *PREQ_TREE_CONNECT;
typedef struct _RESP_TREE_CONNECT {
    UCHAR WordCount;
    _USHORT( MaxBufferSize );
    _USHORT( Tid );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_TREE_CONNECT;
typedef RESP_TREE_CONNECT SMB_UNALIGNED *PRESP_TREE_CONNECT;
typedef struct _REQ_TREE_CONNECT_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( Flags );
    _USHORT( PasswordLength );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_TREE_CONNECT_ANDX;
typedef REQ_TREE_CONNECT_ANDX SMB_UNALIGNED *PREQ_TREE_CONNECT_ANDX;
typedef struct _RESP_TREE_CONNECT_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_TREE_CONNECT_ANDX;
typedef RESP_TREE_CONNECT_ANDX SMB_UNALIGNED *PRESP_TREE_CONNECT_ANDX;
typedef struct _RESP_21_TREE_CONNECT_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( OptionalSupport );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_21_TREE_CONNECT_ANDX;
typedef RESP_21_TREE_CONNECT_ANDX SMB_UNALIGNED *PRESP_21_TREE_CONNECT_ANDX;
typedef struct _REQ_TREE_DISCONNECT {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_TREE_DISCONNECT;
typedef REQ_TREE_DISCONNECT SMB_UNALIGNED *PREQ_TREE_DISCONNECT;
typedef struct _RESP_TREE_DISCONNECT {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_TREE_DISCONNECT;
typedef RESP_TREE_DISCONNECT SMB_UNALIGNED *PRESP_TREE_DISCONNECT;
typedef struct _REQ_UNLOCK_BYTE_RANGE {
    UCHAR WordCount;
    _USHORT( Fid );
    _ULONG( Count );
    _ULONG( Offset );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_UNLOCK_BYTE_RANGE;
typedef REQ_UNLOCK_BYTE_RANGE SMB_UNALIGNED *PREQ_UNLOCK_BYTE_RANGE;
typedef struct _RESP_UNLOCK_BYTE_RANGE {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_UNLOCK_BYTE_RANGE;
typedef RESP_UNLOCK_BYTE_RANGE SMB_UNALIGNED *PRESP_UNLOCK_BYTE_RANGE;
typedef struct _REQ_WRITE {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( Count );
    _ULONG( Offset );
    _USHORT( Remaining );
    _USHORT( ByteCount );
      UCHAR BufferFormat;
      _USHORT( DataLength );
      ULONG Buffer[1];
} REQ_WRITE;
typedef REQ_WRITE SMB_UNALIGNED *PREQ_WRITE;
typedef struct _RESP_WRITE {
    UCHAR WordCount;
    _USHORT( Count );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_WRITE;
typedef RESP_WRITE SMB_UNALIGNED *PRESP_WRITE;
typedef struct _REQ_WRITE_AND_CLOSE {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( Count );
    _ULONG( Offset );
    _ULONG( LastWriteTimeInSeconds );
    _USHORT( ByteCount );
    UCHAR Pad;
    ULONG Buffer[1];
} REQ_WRITE_AND_CLOSE;
typedef REQ_WRITE_AND_CLOSE SMB_UNALIGNED *PREQ_WRITE_AND_CLOSE;
typedef struct _REQ_WRITE_AND_CLOSE_LONG {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( Count );
    _ULONG( Offset );
    _ULONG( LastWriteTimeInSeconds );
    _ULONG( Reserved )[3];
    _USHORT( ByteCount );
    UCHAR Pad;
    ULONG Buffer[1];
} REQ_WRITE_AND_CLOSE_LONG;
typedef REQ_WRITE_AND_CLOSE_LONG SMB_UNALIGNED *PREQ_WRITE_AND_CLOSE_LONG;
typedef struct _RESP_WRITE_AND_CLOSE {
    UCHAR WordCount;
    _USHORT( Count );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_WRITE_AND_CLOSE;
typedef RESP_WRITE_AND_CLOSE SMB_UNALIGNED *PRESP_WRITE_AND_CLOSE;
typedef struct _REQ_WRITE_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( Fid );
    _ULONG( Offset );
    _ULONG( Timeout );
    _USHORT( WriteMode );
    _USHORT( Remaining );
    _USHORT( Reserved );
    _USHORT( DataLength );
    _USHORT( DataOffset );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_WRITE_ANDX;
typedef REQ_WRITE_ANDX SMB_UNALIGNED *PREQ_WRITE_ANDX;
typedef struct _REQ_NT_WRITE_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( Fid );
    _ULONG( Offset );
    _ULONG( Timeout );
    _USHORT( WriteMode );
    _USHORT( Remaining );
    _USHORT( DataLengthHigh );
    _USHORT( DataLength );
    _USHORT( DataOffset );
    _ULONG( OffsetHigh );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_NT_WRITE_ANDX;
typedef REQ_NT_WRITE_ANDX SMB_UNALIGNED *PREQ_NT_WRITE_ANDX;
typedef struct _RESP_WRITE_ANDX {
    UCHAR WordCount;
    UCHAR AndXCommand;
    UCHAR AndXReserved;
    _USHORT( AndXOffset );
    _USHORT( Count );
    _USHORT( Remaining );
    union {
        _ULONG( Reserved );
        _USHORT( CountHigh );
    };
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_WRITE_ANDX;
typedef RESP_WRITE_ANDX SMB_UNALIGNED *PRESP_WRITE_ANDX;
typedef struct _REQ_WRITE_MPX {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( Count );
    _USHORT( Reserved );
    _ULONG( Offset );
    _ULONG( Timeout );
    _USHORT( WriteMode );
    union {
        struct {
            _USHORT( DataCompactionMode );
            _USHORT( Reserved2 );
        } ;
        _ULONG( Mask );
    } ;
    _USHORT( DataLength );
    _USHORT( DataOffset );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_WRITE_MPX;
typedef REQ_WRITE_MPX SMB_UNALIGNED *PREQ_WRITE_MPX;
typedef struct _RESP_WRITE_MPX_INTERIM {
    UCHAR WordCount;
    _USHORT( Remaining );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_WRITE_MPX_INTERIM;
typedef RESP_WRITE_MPX_INTERIM SMB_UNALIGNED *PRESP_WRITE_MPX_INTERIM;
typedef struct _RESP_WRITE_MPX_DATAGRAM {
    UCHAR WordCount;
    _ULONG( Mask );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_WRITE_MPX_DATAGRAM;
typedef RESP_WRITE_MPX_DATAGRAM SMB_UNALIGNED *PRESP_WRITE_MPX_DATAGRAM;
typedef struct _REQ_WRITE_MPX_SECONDARY {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( Count );
    _ULONG( Offset );
    _ULONG( Reserved );
    _USHORT( DataLength );
    _USHORT( DataOffset );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_WRITE_MPX_SECONDARY;
typedef REQ_WRITE_MPX_SECONDARY SMB_UNALIGNED *PREQ_WRITE_MPX_SECONDARY;
typedef struct _RESP_WRITE_COMPLETE {
    UCHAR WordCount;
    _USHORT( Count );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_WRITE_COMPLETE;
typedef RESP_WRITE_COMPLETE SMB_UNALIGNED *PRESP_WRITE_COMPLETE;
typedef struct _REQ_WRITE_PRINT_FILE {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_WRITE_PRINT_FILE;
typedef REQ_WRITE_PRINT_FILE SMB_UNALIGNED *PREQ_WRITE_PRINT_FILE;
typedef struct _RESP_WRITE_PRINT_FILE {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_WRITE_PRINT_FILE;
typedef RESP_WRITE_PRINT_FILE SMB_UNALIGNED *PRESP_WRITE_PRINT_FILE;
typedef struct _REQ_WRITE_RAW {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( Count );
    _USHORT( Reserved );
    _ULONG( Offset );
    _ULONG( Timeout );
    _USHORT( WriteMode );
    _ULONG( Reserved2 );
    _USHORT( DataLength );
    _USHORT( DataOffset );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_WRITE_RAW;
typedef REQ_WRITE_RAW SMB_UNALIGNED *PREQ_WRITE_RAW;
typedef struct _REQ_NT_WRITE_RAW {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( Count );
    _USHORT( Reserved );
    _ULONG( Offset );
    _ULONG( Timeout );
    _USHORT( WriteMode );
    _ULONG( Reserved2 );
    _USHORT( DataLength );
    _USHORT( DataOffset );
    _ULONG( OffsetHigh );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_NT_WRITE_RAW;
typedef REQ_NT_WRITE_RAW SMB_UNALIGNED *PREQ_NT_WRITE_RAW;
typedef struct _RESP_WRITE_RAW_INTERIM {
    UCHAR WordCount;
    _USHORT( Remaining );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_WRITE_RAW_INTERIM;
typedef RESP_WRITE_RAW_INTERIM SMB_UNALIGNED *PRESP_WRITE_RAW_INTERIM;
typedef struct _RESP_WRITE_RAW_SECONDARY {
    UCHAR WordCount;
    _USHORT( Count );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_WRITE_RAW_SECONDARY;
typedef RESP_WRITE_RAW_SECONDARY SMB_UNALIGNED *PRESP_WRITE_RAW_SECONDARY;
typedef struct _REQ_103_WRITE_RAW {
    UCHAR WordCount;
    _USHORT( Fid );
    _USHORT( Count );
    _USHORT( Reserved );
    _ULONG( Offset );
    _ULONG( Timeout );
    _USHORT( WriteMode );
    _ULONG( Reserved2 );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_103_WRITE_RAW;
typedef REQ_103_WRITE_RAW SMB_UNALIGNED *PREQ_103_WRITE_RAW;
typedef struct _RESP_103_WRITE_RAW {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_103_WRITE_RAW;
typedef RESP_103_WRITE_RAW SMB_UNALIGNED *PRESP_103_WRITE_RAW;
typedef struct _REQ_NT_CANCEL {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} REQ_NT_CANCEL;
typedef REQ_NT_CANCEL SMB_UNALIGNED *PREQ_NT_CANCEL;
typedef struct _RESP_NT_CANCEL {
    UCHAR WordCount;
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} RESP_NT_CANCEL;
typedef RESP_NT_CANCEL SMB_UNALIGNED *PRESP_NT_CANCEL;
            (SMB_FLAGS_LOCK_AND_READ_OK | \
             SMB_FLAGS_SEND_NO_ACK | \
             SMB_FLAGS_CASE_INSENSITIVE | \
             SMB_FLAGS_CANONICALIZED_PATHS | \
             SMB_FLAGS_OPLOCK_NOTIFY_ANY | \
             SMB_FLAGS_OPLOCK)
            (SMB_FLAGS2_KNOWS_LONG_NAMES | \
             SMB_FLAGS2_KNOWS_EAS | \
             SMB_FLAGS2_DFS | \
             SMB_FLAGS2_PAGING_IO | \
             SMB_FLAGS2_IS_LONG_NAME | \
             SMB_FLAGS2_NT_STATUS | \
             SMB_FLAGS2_UNICODE )
    (BOOLEAN)((SmbOpenFunction & SMB_OFUN_CREATE_MASK) == SMB_OFUN_CREATE_CREATE)
    (BOOLEAN)((SmbOpenFunction & SMB_OFUN_OPEN_MASK) == SMB_OFUN_OPEN_APPEND)
    (BOOLEAN)((SmbOpenFunction & SMB_OFUN_OPEN_MASK) == SMB_OFUN_OPEN_TRUNCATE)
#include <packoff.h>
#include <packon.h>
typedef struct {
    _USHORT( Fid );
    UCHAR ReturnSingleEntry;
    UCHAR RestartScan;
    _ULONG ( SidListLength );
    _ULONG ( StartSidLength );
    _ULONG( StartSidOffset);
} REQ_NT_QUERY_FS_QUOTA_INFO, *PREQ_NT_QUERY_FS_QUOTA_INFO;
typedef struct {
    _ULONG ( Length );
} RESP_NT_QUERY_FS_QUOTA_INFO, *PRESP_NT_QUERY_FS_QUOTA_INFO;
typedef struct {
    _USHORT( Fid );
} REQ_NT_SET_FS_QUOTA_INFO, *PREQ_NT_SET_FS_QUOTA_INFO;
typedef struct {
    USHORT MaxReferralLevel;
    UCHAR RequestFileName[1];
} REQ_GET_DFS_REFERRAL;
typedef REQ_GET_DFS_REFERRAL SMB_UNALIGNED *PREQ_GET_DFS_REFERRAL;
typedef struct {
    USHORT VersionNumber;
    USHORT Size;
    USHORT ServerType;
    struct {
        USHORT StripPath : 1;
    };
    WCHAR ShareName[1];
} DFS_REFERRAL_V1;
typedef DFS_REFERRAL_V1 SMB_UNALIGNED *PDFS_REFERRAL_V1;
typedef struct {
    USHORT VersionNumber;
    USHORT Size;
    USHORT ServerType;
    struct {
        USHORT StripPath : 1;
    };
    ULONG Proximity;
    ULONG TimeToLive;
    USHORT DfsPathOffset;
    USHORT DfsAlternatePathOffset;
    USHORT NetworkAddressOffset;
} DFS_REFERRAL_V2;
typedef DFS_REFERRAL_V2 SMB_UNALIGNED *PDFS_REFERRAL_V2;
typedef struct {
    USHORT VersionNumber;
    USHORT Size;
    USHORT ServerType;
    struct {
        USHORT StripPath : 1;
        USHORT NameListReferral : 1;
    };
    ULONG TimeToLive;
    union {
      struct {
        USHORT DfsPathOffset;
        USHORT DfsAlternatePathOffset;
        USHORT NetworkAddressOffset;
        GUID ServiceSiteGuid;
      };
      struct {
        USHORT SpecialNameOffset;
        USHORT NumberOfExpandedNames;
        USHORT ExpandedNameOffset;
      };
    };
} DFS_REFERRAL_V3;
typedef DFS_REFERRAL_V3 SMB_UNALIGNED *PDFS_REFERRAL_V3;
typedef struct {
    USHORT PathConsumed;
    USHORT NumberOfReferrals;
    struct {
            ULONG ReferralServers : 1;
            ULONG StorageServers : 1;
    };
    union {
        DFS_REFERRAL_V1 v1;
        DFS_REFERRAL_V2 v2;
        DFS_REFERRAL_V3 v3;
    } Referrals[1];
} RESP_GET_DFS_REFERRAL;
typedef RESP_GET_DFS_REFERRAL SMB_UNALIGNED *PRESP_GET_DFS_REFERRAL;
typedef struct {
    UCHAR RequestFileName[1];
    union {
        DFS_REFERRAL_V1 v1;
    } Referral;
} REQ_REPORT_DFS_INCONSISTENCY;
typedef REQ_REPORT_DFS_INCONSISTENCY SMB_UNALIGNED *PREQ_REPORT_DFS_INCONSISTENCY;
typedef struct _REQ_QUERY_FS_INFORMATION_FID {
    _USHORT( InformationLevel );
    _USHORT( Fid );
} REQ_QUERY_FS_INFORMATION_FID;
typedef REQ_QUERY_FS_INFORMATION_FID SMB_UNALIGNED *PREQ_QUERY_FS_INFORMATION_FID;
typedef struct _REQ_CREATE_DIRECTORY2 {
    _ULONG( Reserved );
    UCHAR Buffer[1];
} REQ_CREATE_DIRECTORY2;
typedef REQ_CREATE_DIRECTORY2 SMB_UNALIGNED *PREQ_CREATE_DIRECTORY2;
typedef struct _RESP_CREATE_DIRECTORY2 {
    _USHORT( EaErrorOffset );
} RESP_CREATE_DIRECTORY2;
typedef RESP_CREATE_DIRECTORY2 SMB_UNALIGNED *PRESP_CREATE_DIRECTORY2;
typedef struct _REQ_FIND_FIRST2 {
    _USHORT( SearchAttributes );
    _USHORT( SearchCount );
    _USHORT( Flags );
    _USHORT( InformationLevel );
    _ULONG(SearchStorageType);
    UCHAR Buffer[1];
} REQ_FIND_FIRST2;
typedef REQ_FIND_FIRST2 SMB_UNALIGNED *PREQ_FIND_FIRST2;
typedef struct _RESP_FIND_FIRST2 {
    _USHORT( Sid );
    _USHORT( SearchCount );
    _USHORT( EndOfSearch );
    _USHORT( EaErrorOffset );
    _USHORT( LastNameOffset );
} RESP_FIND_FIRST2;
typedef RESP_FIND_FIRST2 SMB_UNALIGNED *PRESP_FIND_FIRST2;
typedef struct _REQ_FIND_NEXT2 {
    _USHORT( Sid );
    _USHORT( SearchCount );
    _USHORT( InformationLevel );
    _ULONG( ResumeKey );
    _USHORT( Flags );
    UCHAR Buffer[1];
} REQ_FIND_NEXT2;
typedef REQ_FIND_NEXT2 SMB_UNALIGNED *PREQ_FIND_NEXT2;
typedef struct _RESP_FIND_NEXT2 {
    _USHORT( SearchCount );
    _USHORT( EndOfSearch );
    _USHORT( EaErrorOffset );
    _USHORT( LastNameOffset );
} RESP_FIND_NEXT2;
typedef RESP_FIND_NEXT2 SMB_UNALIGNED *PRESP_FIND_NEXT2;
typedef struct _REQ_OPEN2 {
    _USHORT( Flags );
    _USHORT( DesiredAccess );
    _USHORT( SearchAttributes );
    _USHORT( FileAttributes );
    _ULONG( CreationTimeInSeconds );
    _USHORT( OpenFunction );
    _ULONG( AllocationSize );
    _USHORT( Reserved )[5];
    UCHAR Buffer[1];
} REQ_OPEN2;
typedef REQ_OPEN2 SMB_UNALIGNED *PREQ_OPEN2;
typedef struct _RESP_OPEN2 {
    _USHORT( Fid );
    _USHORT( FileAttributes );
    _ULONG( CreationTimeInSeconds );
    _ULONG( DataSize );
    _USHORT( GrantedAccess );
    _USHORT( FileType );
    _USHORT( DeviceState );
    _USHORT( Action );
    _ULONG( ServerFid );
    _USHORT( EaErrorOffset );
    _ULONG( EaLength );
} RESP_OPEN2;
typedef RESP_OPEN2 SMB_UNALIGNED *PRESP_OPEN2;
typedef struct _REQ_QUERY_FS_INFORMATION {
    _USHORT( InformationLevel );
} REQ_QUERY_FS_INFORMATION;
typedef REQ_QUERY_FS_INFORMATION SMB_UNALIGNED *PREQ_QUERY_FS_INFORMATION;
typedef struct _REQ_SET_FS_INFORMATION {
    _USHORT( Fid );
    _USHORT( InformationLevel );
} REQ_SET_FS_INFORMATION;
typedef REQ_SET_FS_INFORMATION SMB_UNALIGNED *PREQ_SET_FS_INFORMATION;
typedef struct _REQ_QUERY_PATH_INFORMATION {
    _USHORT( InformationLevel );
    _ULONG( Reserved );
    UCHAR Buffer[1];
} REQ_QUERY_PATH_INFORMATION;
typedef REQ_QUERY_PATH_INFORMATION SMB_UNALIGNED *PREQ_QUERY_PATH_INFORMATION;
typedef struct _RESP_QUERY_PATH_INFORMATION {
    _USHORT( EaErrorOffset );
} RESP_QUERY_PATH_INFORMATION;
typedef RESP_QUERY_PATH_INFORMATION SMB_UNALIGNED *PRESP_QUERY_PATH_INFORMATION;
typedef struct _REQ_SET_PATH_INFORMATION {
    _USHORT( InformationLevel );
    _ULONG( Reserved );
    UCHAR Buffer[1];
} REQ_SET_PATH_INFORMATION;
typedef REQ_SET_PATH_INFORMATION SMB_UNALIGNED *PREQ_SET_PATH_INFORMATION;
typedef struct _RESP_SET_PATH_INFORMATION {
    _USHORT( EaErrorOffset );
} RESP_SET_PATH_INFORMATION;
typedef RESP_SET_PATH_INFORMATION SMB_UNALIGNED *PRESP_SET_PATH_INFORMATION;
typedef struct _REQ_QUERY_FILE_INFORMATION {
    _USHORT( Fid );
    _USHORT( InformationLevel );
} REQ_QUERY_FILE_INFORMATION;
typedef REQ_QUERY_FILE_INFORMATION SMB_UNALIGNED *PREQ_QUERY_FILE_INFORMATION;
typedef struct _RESP_QUERY_FILE_INFORMATION {
    _USHORT( EaErrorOffset );
} RESP_QUERY_FILE_INFORMATION;
typedef RESP_QUERY_FILE_INFORMATION SMB_UNALIGNED *PRESP_QUERY_FILE_INFORMATION;
typedef struct _REQ_SET_FILE_INFORMATION {
    _USHORT( Fid );
    _USHORT( InformationLevel );
    _USHORT( Flags );
} REQ_SET_FILE_INFORMATION;
typedef REQ_SET_FILE_INFORMATION SMB_UNALIGNED *PREQ_SET_FILE_INFORMATION;
typedef struct _RESP_SET_FILE_INFORMATION {
    _USHORT( EaErrorOffset );
} RESP_SET_FILE_INFORMATION;
typedef RESP_SET_FILE_INFORMATION SMB_UNALIGNED *PRESP_SET_FILE_INFORMATION;
typedef struct _SMB_TRANSACT_MAILSLOT {
    UCHAR WordCount;
    _USHORT( TotalParameterCount );
    _USHORT( TotalDataCount );
    _USHORT( MaxParameterCount );
    _USHORT( MaxDataCount );
    UCHAR MaxSetupCount;
    UCHAR Reserved;
    _USHORT( Flags );
    _ULONG( Timeout );
    _USHORT( Reserved1 );
    _USHORT( ParameterCount );
    _USHORT( ParameterOffset );
    _USHORT( DataCount );
    _USHORT( DataOffset );
    UCHAR SetupWordCount;
    UCHAR Reserved2;
    _USHORT( Opcode );
    _USHORT( Priority );
    _USHORT( Class );
    _USHORT( ByteCount );
    UCHAR Buffer[1];
} SMB_TRANSACT_MAILSLOT;
typedef SMB_TRANSACT_MAILSLOT SMB_UNALIGNED *PSMB_TRANSACT_MAILSLOT;
typedef struct _SMB_TRANSACT_NAMED_PIPE {
    UCHAR WordCount;
    _USHORT( TotalParameterCount );
    _USHORT( TotalDataCount );
    _USHORT( MaxParameterCount );
    _USHORT( MaxDataCount );
    UCHAR MaxSetupCount;
    UCHAR Reserved;
    _USHORT( Flags );
    _ULONG( Timeout );
    _USHORT( Reserved1 );
    _USHORT( ParameterCount );
} SMB_TRANSACT_NAMED_PIPE;
typedef SMB_TRANSACT_NAMED_PIPE SMB_UNALIGNED *PSMB_TRANSACT_NAMED_PIPE;
typedef struct _NAMED_PIPE_INFORMATION_1 {
    _USHORT( OutputBufferSize );
    _USHORT( InputBufferSize );
    UCHAR MaximumInstances;
    UCHAR CurrentInstances;
    UCHAR PipeNameLength;
    UCHAR PipeName[1];
} NAMED_PIPE_INFORMATION_1;
typedef NAMED_PIPE_INFORMATION_1 SMB_UNALIGNED *PNAMED_PIPE_INFORMATION_1;
typedef struct _RESP_PEEK_NMPIPE {
    _USHORT( ReadDataAvailable );
    _USHORT( MessageLength );
    _USHORT( NamedPipeState );
} RESP_PEEK_NMPIPE;
typedef RESP_PEEK_NMPIPE SMB_UNALIGNED *PRESP_PEEK_NMPIPE;
                    (sizeof(UNICODE_SMB_PIPE_PREFIX) - sizeof(WCHAR))
                    (sizeof(UNICODE_SMB_MAILSLOT_PREFIX) - sizeof(WCHAR))
typedef struct _REQ_CREATE_WITH_SD_OR_EA {
    _ULONG( Flags );
    _ULONG( RootDirectoryFid );
    ACCESS_MASK DesiredAccess;
    LARGE_INTEGER AllocationSize;
    _ULONG( FileAttributes );
    _ULONG( ShareAccess );
    _ULONG( CreateDisposition );
    _ULONG( CreateOptions );
    _ULONG( SecurityDescriptorLength );
    _ULONG( EaLength );
    _ULONG( NameLength );
    _ULONG( ImpersonationLevel );
    UCHAR SecurityFlags;
    UCHAR Buffer[1];
} REQ_CREATE_WITH_SD_OR_EA;
typedef REQ_CREATE_WITH_SD_OR_EA SMB_UNALIGNED *PREQ_CREATE_WITH_SD_OR_EA;
typedef struct _RESP_CREATE_WITH_SD_OR_EA {
    UCHAR OplockLevel;
    UCHAR Reserved;
    _USHORT( Fid );
    _ULONG( CreateAction );
    _ULONG( EaErrorOffset );
    TIME CreationTime;
    TIME LastAccessTime;
    TIME LastWriteTime;
    TIME ChangeTime;
    _ULONG( FileAttributes );
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    _USHORT( FileType );
    _USHORT( DeviceState );
    BOOLEAN Directory;
} RESP_CREATE_WITH_SD_OR_EA;
typedef RESP_CREATE_WITH_SD_OR_EA SMB_UNALIGNED *PRESP_CREATE_WITH_SD_OR_EA;
typedef struct _REQ_NT_IO_CONTROL {
    _ULONG( FunctionCode );
    _USHORT( Fid );
    BOOLEAN IsFsctl;
    UCHAR IsFlags;
} REQ_NT_IO_CONTROL;
typedef REQ_NT_IO_CONTROL SMB_UNALIGNED *PREQ_NT_IO_CONTROL;
typedef struct _REQ_NOTIFY_CHANGE {
    _ULONG( CompletionFilter );
    _USHORT( Fid );
    BOOLEAN WatchTree;
    UCHAR Reserved;
} REQ_NOTIFY_CHANGE;
typedef REQ_NOTIFY_CHANGE SMB_UNALIGNED *PREQ_NOTIFY_CHANGE;
typedef struct _REQ_SET_SECURITY_DESCRIPTOR {
    _USHORT( Fid );
    _USHORT( Reserved );
    _ULONG( SecurityInformation );
} REQ_SET_SECURITY_DESCRIPTOR;
typedef REQ_SET_SECURITY_DESCRIPTOR SMB_UNALIGNED *PREQ_SET_SECURITY_DESCRIPTOR;
typedef struct _REQ_QUERY_SECURITY_DESCRIPTOR {
    _USHORT( Fid );
    _USHORT( Reserved );
    _ULONG( SecurityInformation );
} REQ_QUERY_SECURITY_DESCRIPTOR;
typedef REQ_QUERY_SECURITY_DESCRIPTOR SMB_UNALIGNED *PREQ_QUERY_SECURITY_DESCRIPTOR;
typedef struct _RESP_QUERY_SECURITY_DESCRIPTOR {
    _ULONG( LengthNeeded );
} RESP_QUERY_SECURITY_DESCRIPTOR;
typedef RESP_QUERY_SECURITY_DESCRIPTOR SMB_UNALIGNED *PRESP_QUERY_SECURITY_DESCRIPTOR;
typedef struct _REQ_NT_RENAME {
    _USHORT( Fid );
    _USHORT( RenameFlags );
    UCHAR NewName[];
} REQ_NT_RENAME;
typedef REQ_NT_RENAME SMB_UNALIGNED *PREQ_NT_RENAME;
#include <packoff.h>
                            *(PSMB_USHORT)(SrcAddress) = (Value)
        *(PSMB_USHORT)(DestAddress) = *(PSMB_USHORT)(SrcAddress)
        *(PSMB_ULONG)(DestAddress) = *(PSMB_ULONG)(SrcAddress)
            (DestAddress)->Ushort = (SrcAddress)->Ushort
                (DestAddress)->Ushort = (SrcAddress)->Ushort
