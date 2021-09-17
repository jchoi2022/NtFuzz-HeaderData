typedef USHORT NODE_TYPE_CODE;
typedef NODE_TYPE_CODE *PNODE_TYPE_CODE;
typedef CSHORT NODE_BYTE_SIZE;
typedef struct _NODE_TYPE_CODE_AND_SIZE_NO_REFCOUNT {
      NODE_TYPE_CODE NodeTypeCode;
      NODE_BYTE_SIZE NodeByteSize;
} NODE_TYPE_CODE_AND_SIZE_NO_REFCOUNT;
typedef struct _NODE_TYPE_CODE_AND_SIZE : public NODE_TYPE_CODE_AND_SIZE_NO_REFCOUNT {
      __volatile ULONG NodeReferenceCount;
} NODE_TYPE_CODE_AND_SIZE, *PNODE_TYPE_AND_SIZE;
        RtlZeroMemory( Ptr, Size ); \
        ((NODE_TYPE_CODE_AND_SIZE *)(Ptr))->NodeTypeCode = TType; \
        ((NODE_TYPE_CODE_AND_SIZE *)(Ptr))->NodeByteSize = (CSHORT)Size; \
        }
typedef enum _RX_FILE_TYPE {
    FileTypeNotYetKnown = 0,
    FileTypeDirectory = 2,
    FileTypeFile = 3
} RX_FILE_TYPE;
typedef USHORT RDBSS_STORAGE_TYPE_CODES;
    ((((NodeType(FCB) & 0xff00) == RDBSS_NTC_STORAGE_TYPE_UNKNOWN)) || ((NodeType( FCB ) & 0xfff0) == 0xeb90))
typedef enum _RDBSS_BUG_CHECK_CODES {
     RDBSS_BUG_CHECK_FCBSTRUC = 0xfcb00000,
     RDBSS_BUG_CHECK_CACHESUP = 0xca550000,
     RDBSS_BUG_CHECK_CLEANUP = 0xc1ee0000,
     RDBSS_BUG_CHECK_CLOSE = 0xc10e0000,
     RDBSS_BUG_CHECK_NTEXCEPT = 0xbaad0000,
} RDBSS_BUG_CHECK_CODES;
        KeBugCheckEx(RDBSS_FILE_SYSTEM, \
                     BugCheckFileId | ((ULONG)(__LINE__)), \
                     A, B, C ); \
        }
