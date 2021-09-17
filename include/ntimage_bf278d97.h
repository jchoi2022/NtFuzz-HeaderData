#pragma warning (disable:4201)
#pragma warning (disable:4214)
#include "pshpack4.h"
#include "pshpack2.h"
typedef struct _IMAGE_DOS_HEADER {
    USHORT e_magic;
    USHORT e_cblp;
    USHORT e_cp;
    USHORT e_crlc;
    USHORT e_cparhdr;
    USHORT e_minalloc;
    USHORT e_maxalloc;
    USHORT e_ss;
    USHORT e_sp;
    USHORT e_csum;
    USHORT e_ip;
    USHORT e_cs;
    USHORT e_lfarlc;
    USHORT e_ovno;
    USHORT e_res[4];
    USHORT e_oemid;
    USHORT e_oeminfo;
    USHORT e_res2[10];
    LONG e_lfanew;
  } IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;
typedef struct _IMAGE_OS2_HEADER {
    USHORT ne_magic;
    CHAR ne_ver;
    CHAR ne_rev;
    USHORT ne_enttab;
    USHORT ne_cbenttab;
    LONG ne_crc;
    USHORT ne_flags;
    USHORT ne_autodata;
    USHORT ne_heap;
    USHORT ne_stack;
    LONG ne_csip;
    LONG ne_sssp;
    USHORT ne_cseg;
    USHORT ne_cmod;
    USHORT ne_cbnrestab;
    USHORT ne_segtab;
    USHORT ne_rsrctab;
    USHORT ne_restab;
    USHORT ne_modtab;
    USHORT ne_imptab;
    LONG ne_nrestab;
    USHORT ne_cmovent;
    USHORT ne_align;
    USHORT ne_cres;
    UCHAR ne_exetyp;
    UCHAR ne_flagsothers;
    USHORT ne_pretthunks;
    USHORT ne_psegrefbytes;
    USHORT ne_swaparea;
    USHORT ne_expver;
  } IMAGE_OS2_HEADER, *PIMAGE_OS2_HEADER;
typedef struct _IMAGE_VXD_HEADER {
    USHORT e32_magic;
    UCHAR e32_border;
    UCHAR e32_worder;
    ULONG e32_level;
    USHORT e32_cpu;
    USHORT e32_os;
    ULONG e32_ver;
    ULONG e32_mflags;
    ULONG e32_mpages;
    ULONG e32_startobj;
    ULONG e32_eip;
    ULONG e32_stackobj;
    ULONG e32_esp;
    ULONG e32_pagesize;
    ULONG e32_lastpagesize;
    ULONG e32_fixupsize;
    ULONG e32_fixupsum;
    ULONG e32_ldrsize;
    ULONG e32_ldrsum;
    ULONG e32_objtab;
    ULONG e32_objcnt;
    ULONG e32_objmap;
    ULONG e32_itermap;
    ULONG e32_rsrctab;
    ULONG e32_rsrccnt;
    ULONG e32_restab;
    ULONG e32_enttab;
    ULONG e32_dirtab;
    ULONG e32_dircnt;
    ULONG e32_fpagetab;
    ULONG e32_frectab;
    ULONG e32_impmod;
    ULONG e32_impmodcnt;
    ULONG e32_impproc;
    ULONG e32_pagesum;
    ULONG e32_datapage;
    ULONG e32_preload;
    ULONG e32_nrestab;
    ULONG e32_cbnrestab;
    ULONG e32_nressum;
    ULONG e32_autodata;
    ULONG e32_debuginfo;
    ULONG e32_debuglen;
    ULONG e32_instpreload;
    ULONG e32_instdemand;
    ULONG e32_heapsize;
    UCHAR e32_res3[12];
    ULONG e32_winresoff;
    ULONG e32_winreslen;
    USHORT e32_devid;
    USHORT e32_ddkver;
  } IMAGE_VXD_HEADER, *PIMAGE_VXD_HEADER;
#include "poppack.h"
typedef struct _IMAGE_FILE_HEADER {
    USHORT Machine;
    USHORT NumberOfSections;
    ULONG TimeDateStamp;
    ULONG PointerToSymbolTable;
    ULONG NumberOfSymbols;
    USHORT SizeOfOptionalHeader;
    USHORT Characteristics;
} IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;
typedef struct _IMAGE_DATA_DIRECTORY {
    ULONG VirtualAddress;
    ULONG Size;
} IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;
typedef struct _IMAGE_OPTIONAL_HEADER {
    USHORT Magic;
    UCHAR MajorLinkerVersion;
    UCHAR MinorLinkerVersion;
    ULONG SizeOfCode;
    ULONG SizeOfInitializedData;
    ULONG SizeOfUninitializedData;
    ULONG AddressOfEntryPoint;
    ULONG BaseOfCode;
    ULONG BaseOfData;
    ULONG ImageBase;
    ULONG SectionAlignment;
    ULONG FileAlignment;
    USHORT MajorOperatingSystemVersion;
    USHORT MinorOperatingSystemVersion;
    USHORT MajorImageVersion;
    USHORT MinorImageVersion;
    USHORT MajorSubsystemVersion;
    USHORT MinorSubsystemVersion;
    ULONG Win32VersionValue;
    ULONG SizeOfImage;
    ULONG SizeOfHeaders;
    ULONG CheckSum;
    USHORT Subsystem;
    USHORT DllCharacteristics;
    ULONG SizeOfStackReserve;
    ULONG SizeOfStackCommit;
    ULONG SizeOfHeapReserve;
    ULONG SizeOfHeapCommit;
    ULONG LoaderFlags;
    ULONG NumberOfRvaAndSizes;
    IMAGE_DATA_DIRECTORY DataDirectory[IMAGE_NUMBEROF_DIRECTORY_ENTRIES];
} IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;
typedef struct _IMAGE_ROM_OPTIONAL_HEADER {
    USHORT Magic;
    UCHAR MajorLinkerVersion;
    UCHAR MinorLinkerVersion;
    ULONG SizeOfCode;
    ULONG SizeOfInitializedData;
    ULONG SizeOfUninitializedData;
    ULONG AddressOfEntryPoint;
    ULONG BaseOfCode;
    ULONG BaseOfData;
    ULONG BaseOfBss;
    ULONG GprMask;
    ULONG CprMask[4];
    ULONG GpValue;
} IMAGE_ROM_OPTIONAL_HEADER, *PIMAGE_ROM_OPTIONAL_HEADER;
typedef struct _IMAGE_OPTIONAL_HEADER64 {
    USHORT Magic;
    UCHAR MajorLinkerVersion;
    UCHAR MinorLinkerVersion;
    ULONG SizeOfCode;
    ULONG SizeOfInitializedData;
    ULONG SizeOfUninitializedData;
    ULONG AddressOfEntryPoint;
    ULONG BaseOfCode;
    ULONGLONG ImageBase;
    ULONG SectionAlignment;
    ULONG FileAlignment;
    USHORT MajorOperatingSystemVersion;
    USHORT MinorOperatingSystemVersion;
    USHORT MajorImageVersion;
    USHORT MinorImageVersion;
    USHORT MajorSubsystemVersion;
    USHORT MinorSubsystemVersion;
    ULONG Win32VersionValue;
    ULONG SizeOfImage;
    ULONG SizeOfHeaders;
    ULONG CheckSum;
    USHORT Subsystem;
    USHORT DllCharacteristics;
    ULONGLONG SizeOfStackReserve;
    ULONGLONG SizeOfStackCommit;
    ULONGLONG SizeOfHeapReserve;
    ULONGLONG SizeOfHeapCommit;
    ULONG LoaderFlags;
    ULONG NumberOfRvaAndSizes;
    IMAGE_DATA_DIRECTORY DataDirectory[IMAGE_NUMBEROF_DIRECTORY_ENTRIES];
} IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;
typedef IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER;
typedef PIMAGE_OPTIONAL_HEADER64 PIMAGE_OPTIONAL_HEADER;
typedef struct _IMAGE_NT_HEADERS64 {
    ULONG Signature;
    IMAGE_FILE_HEADER FileHeader;
    IMAGE_OPTIONAL_HEADER64 OptionalHeader;
} IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;
typedef struct _IMAGE_NT_HEADERS {
    ULONG Signature;
    IMAGE_FILE_HEADER FileHeader;
    IMAGE_OPTIONAL_HEADER32 OptionalHeader;
} IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;
typedef struct _IMAGE_ROM_HEADERS {
    IMAGE_FILE_HEADER FileHeader;
    IMAGE_ROM_OPTIONAL_HEADER OptionalHeader;
} IMAGE_ROM_HEADERS, *PIMAGE_ROM_HEADERS;
typedef IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS;
typedef PIMAGE_NT_HEADERS64 PIMAGE_NT_HEADERS;
    ((ULONG_PTR)(ntheader) + \
     FIELD_OFFSET( IMAGE_NT_HEADERS, OptionalHeader ) + \
     ((ntheader))->FileHeader.SizeOfOptionalHeader \
    ))
typedef struct ANON_OBJECT_HEADER {
    USHORT Sig1;
    USHORT Sig2;
    USHORT Version;
    USHORT Machine;
    ULONG TimeDateStamp;
    CLSID ClassID;
    ULONG SizeOfData;
} ANON_OBJECT_HEADER;
typedef struct ANON_OBJECT_HEADER_V2 {
    USHORT Sig1;
    USHORT Sig2;
    USHORT Version;
    USHORT Machine;
    ULONG TimeDateStamp;
    CLSID ClassID;
    ULONG SizeOfData;
    ULONG Flags;
    ULONG MetaDataSize;
    ULONG MetaDataOffset;
} ANON_OBJECT_HEADER_V2;
typedef struct ANON_OBJECT_HEADER_BIGOBJ {
    USHORT Sig1;
    USHORT Sig2;
    USHORT Version;
    USHORT Machine;
    ULONG TimeDateStamp;
    CLSID ClassID;
    ULONG SizeOfData;
    ULONG Flags;
    ULONG MetaDataSize;
    ULONG MetaDataOffset;
    ULONG NumberOfSections;
    ULONG PointerToSymbolTable;
    ULONG NumberOfSymbols;
} ANON_OBJECT_HEADER_BIGOBJ;
typedef struct _IMAGE_SECTION_HEADER {
    UCHAR Name[IMAGE_SIZEOF_SHORT_NAME];
    union {
            ULONG PhysicalAddress;
            ULONG VirtualSize;
    } Misc;
    ULONG VirtualAddress;
    ULONG SizeOfRawData;
    ULONG PointerToRawData;
    ULONG PointerToRelocations;
    ULONG PointerToLinenumbers;
    USHORT NumberOfRelocations;
    USHORT NumberOfLinenumbers;
    ULONG Characteristics;
} IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;
#include "pshpack2.h"
typedef struct _IMAGE_SYMBOL {
    union {
        UCHAR ShortName[8];
        struct {
            ULONG Short;
            ULONG Long;
        } Name;
        ULONG LongName[2];
    } N;
    ULONG Value;
    SHORT SectionNumber;
    USHORT Type;
    UCHAR StorageClass;
    UCHAR NumberOfAuxSymbols;
} IMAGE_SYMBOL;
typedef IMAGE_SYMBOL UNALIGNED *PIMAGE_SYMBOL;
typedef struct _IMAGE_SYMBOL_EX {
    union {
        UCHAR ShortName[8];
        struct {
            ULONG Short;
            ULONG Long;
        } Name;
        ULONG LongName[2];
    } N;
    ULONG Value;
    LONG SectionNumber;
    USHORT Type;
    UCHAR StorageClass;
    UCHAR NumberOfAuxSymbols;
} IMAGE_SYMBOL_EX;
typedef IMAGE_SYMBOL_EX UNALIGNED *PIMAGE_SYMBOL_EX;
#include <pshpack2.h>
typedef struct IMAGE_AUX_SYMBOL_TOKEN_DEF {
    UCHAR bAuxType;
    UCHAR bReserved;
    ULONG SymbolTableIndex;
    UCHAR rgbReserved[12];
} IMAGE_AUX_SYMBOL_TOKEN_DEF;
typedef IMAGE_AUX_SYMBOL_TOKEN_DEF UNALIGNED *PIMAGE_AUX_SYMBOL_TOKEN_DEF;
#include <poppack.h>
typedef union _IMAGE_AUX_SYMBOL {
    struct {
        ULONG TagIndex;
        union {
            struct {
                USHORT Linenumber;
                USHORT Size;
            } LnSz;
           ULONG TotalSize;
        } Misc;
        union {
            struct {
                ULONG PointerToLinenumber;
                ULONG PointerToNextFunction;
            } Function;
            struct {
                USHORT Dimension[4];
            } Array;
        } FcnAry;
        USHORT TvIndex;
    } Sym;
    struct {
        UCHAR Name[IMAGE_SIZEOF_SYMBOL];
    } File;
    struct {
        ULONG Length;
        USHORT NumberOfRelocations;
        USHORT NumberOfLinenumbers;
        ULONG CheckSum;
        SHORT Number;
        UCHAR Selection;
 UCHAR bReserved;
 SHORT HighNumber;
    } Section;
    IMAGE_AUX_SYMBOL_TOKEN_DEF TokenDef;
    struct {
        ULONG crc;
        UCHAR rgbReserved[14];
    } CRC;
} IMAGE_AUX_SYMBOL;
typedef IMAGE_AUX_SYMBOL UNALIGNED *PIMAGE_AUX_SYMBOL;
typedef union _IMAGE_AUX_SYMBOL_EX {
    struct {
        ULONG WeakDefaultSymIndex;
        ULONG WeakSearchType;
        UCHAR rgbReserved[12];
    } Sym;
    struct {
        UCHAR Name[sizeof(IMAGE_SYMBOL_EX)];
    } File;
    struct {
        ULONG Length;
        USHORT NumberOfRelocations;
        USHORT NumberOfLinenumbers;
        ULONG CheckSum;
        SHORT Number;
        UCHAR Selection;
        UCHAR bReserved;
        SHORT HighNumber;
        UCHAR rgbReserved[2];
    } Section;
    struct{
        IMAGE_AUX_SYMBOL_TOKEN_DEF TokenDef;
        UCHAR rgbReserved[2];
    } DUMMYSTRUCTNAME;
    struct {
        ULONG crc;
        UCHAR rgbReserved[16];
    } CRC;
} IMAGE_AUX_SYMBOL_EX;
typedef IMAGE_AUX_SYMBOL_EX UNALIGNED *PIMAGE_AUX_SYMBOL_EX;
typedef enum IMAGE_AUX_SYMBOL_TYPE {
    IMAGE_AUX_SYMBOL_TYPE_TOKEN_DEF = 1,
} IMAGE_AUX_SYMBOL_TYPE;
typedef struct _IMAGE_RELOCATION {
    union {
        ULONG VirtualAddress;
        ULONG RelocCount;
    } DUMMYUNIONNAME;
    ULONG SymbolTableIndex;
    USHORT Type;
} IMAGE_RELOCATION;
typedef IMAGE_RELOCATION UNALIGNED *PIMAGE_RELOCATION;
    Value |= (((ULONGLONG)((*(Address) >> InstPos) & (((ULONGLONG)1 << Size) - 1))) << ValPos)
    *(PULONG)Address = (*(PULONG)Address & ~(((1 << Size) - 1) << InstPos)) | \
          ((ULONG)((((ULONGLONG)Value >> ValPos) & (((ULONGLONG)1 << Size) - 1))) << InstPos)
typedef struct _IMAGE_LINENUMBER {
    union {
        ULONG SymbolTableIndex;
        ULONG VirtualAddress;
    } Type;
    USHORT Linenumber;
} IMAGE_LINENUMBER;
typedef IMAGE_LINENUMBER UNALIGNED *PIMAGE_LINENUMBER;
#include "poppack.h"
typedef struct _IMAGE_BASE_RELOCATION {
    ULONG VirtualAddress;
    ULONG SizeOfBlock;
} IMAGE_BASE_RELOCATION;
typedef IMAGE_BASE_RELOCATION UNALIGNED * PIMAGE_BASE_RELOCATION;
typedef struct _IMAGE_ARCHIVE_MEMBER_HEADER {
    UCHAR Name[16];
    UCHAR Date[12];
    UCHAR UserID[6];
    UCHAR GroupID[6];
    UCHAR Mode[8];
    UCHAR Size[10];
    UCHAR EndHeader[2];
} IMAGE_ARCHIVE_MEMBER_HEADER, *PIMAGE_ARCHIVE_MEMBER_HEADER;
typedef struct _IMAGE_EXPORT_DIRECTORY {
    ULONG Characteristics;
    ULONG TimeDateStamp;
    USHORT MajorVersion;
    USHORT MinorVersion;
    ULONG Name;
    ULONG Base;
    ULONG NumberOfFunctions;
    ULONG NumberOfNames;
    ULONG AddressOfFunctions;
    ULONG AddressOfNames;
    ULONG AddressOfNameOrdinals;
} IMAGE_EXPORT_DIRECTORY, *PIMAGE_EXPORT_DIRECTORY;
typedef struct _IMAGE_IMPORT_BY_NAME {
    USHORT Hint;
    CHAR Name[1];
} IMAGE_IMPORT_BY_NAME, *PIMAGE_IMPORT_BY_NAME;
#include "pshpack8.h"
typedef struct _IMAGE_THUNK_DATA64 {
    union {
        ULONGLONG ForwarderString;
        ULONGLONG Function;
        ULONGLONG Ordinal;
        ULONGLONG AddressOfData;
    } u1;
} IMAGE_THUNK_DATA64;
typedef IMAGE_THUNK_DATA64 * PIMAGE_THUNK_DATA64;
#include "poppack.h"
typedef struct _IMAGE_THUNK_DATA32 {
    union {
        ULONG ForwarderString;
        ULONG Function;
        ULONG Ordinal;
        ULONG AddressOfData;
    } u1;
} IMAGE_THUNK_DATA32;
typedef IMAGE_THUNK_DATA32 * PIMAGE_THUNK_DATA32;
typedef VOID
(NTAPI *PIMAGE_TLS_CALLBACK) (
    PVOID DllHandle,
    ULONG Reason,
    PVOID Reserved
    );
typedef struct _IMAGE_TLS_DIRECTORY64 {
    ULONGLONG StartAddressOfRawData;
    ULONGLONG EndAddressOfRawData;
    ULONGLONG AddressOfIndex;
    ULONGLONG AddressOfCallBacks;
    ULONG SizeOfZeroFill;
    union {
        ULONG Characteristics;
        struct {
            ULONG Reserved0 : 20;
            ULONG Alignment : 4;
            ULONG Reserved1 : 8;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} IMAGE_TLS_DIRECTORY64;
typedef IMAGE_TLS_DIRECTORY64 * PIMAGE_TLS_DIRECTORY64;
typedef struct _IMAGE_TLS_DIRECTORY32 {
    ULONG StartAddressOfRawData;
    ULONG EndAddressOfRawData;
    ULONG AddressOfIndex;
    ULONG AddressOfCallBacks;
    ULONG SizeOfZeroFill;
    union {
        ULONG Characteristics;
        struct {
            ULONG Reserved0 : 20;
            ULONG Alignment : 4;
            ULONG Reserved1 : 8;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} IMAGE_TLS_DIRECTORY32;
typedef IMAGE_TLS_DIRECTORY32 * PIMAGE_TLS_DIRECTORY32;
typedef IMAGE_THUNK_DATA64 IMAGE_THUNK_DATA;
typedef PIMAGE_THUNK_DATA64 PIMAGE_THUNK_DATA;
typedef IMAGE_TLS_DIRECTORY64 IMAGE_TLS_DIRECTORY;
typedef PIMAGE_TLS_DIRECTORY64 PIMAGE_TLS_DIRECTORY;
typedef struct _IMAGE_IMPORT_DESCRIPTOR {
    union {
        ULONG Characteristics;
        ULONG OriginalFirstThunk;
    } DUMMYUNIONNAME;
    ULONG TimeDateStamp;
    ULONG ForwarderChain;
    ULONG Name;
    ULONG FirstThunk;
} IMAGE_IMPORT_DESCRIPTOR;
typedef IMAGE_IMPORT_DESCRIPTOR UNALIGNED *PIMAGE_IMPORT_DESCRIPTOR;
typedef struct _IMAGE_BOUND_IMPORT_DESCRIPTOR {
    ULONG TimeDateStamp;
    USHORT OffsetModuleName;
    USHORT NumberOfModuleForwarderRefs;
} IMAGE_BOUND_IMPORT_DESCRIPTOR, *PIMAGE_BOUND_IMPORT_DESCRIPTOR;
typedef struct _IMAGE_BOUND_FORWARDER_REF {
    ULONG TimeDateStamp;
    USHORT OffsetModuleName;
    USHORT Reserved;
} IMAGE_BOUND_FORWARDER_REF, *PIMAGE_BOUND_FORWARDER_REF;
typedef struct _IMAGE_DELAYLOAD_DESCRIPTOR {
    union {
        ULONG AllAttributes;
        struct {
            ULONG RvaBased : 1;
            ULONG ReservedAttributes : 31;
        } DUMMYSTRUCTNAME;
    } Attributes;
    ULONG DllNameRVA;
    ULONG ModuleHandleRVA;
    ULONG ImportAddressTableRVA;
    ULONG ImportNameTableRVA;
    ULONG BoundImportAddressTableRVA;
    ULONG UnloadInformationTableRVA;
    ULONG TimeDateStamp;
} IMAGE_DELAYLOAD_DESCRIPTOR, *PIMAGE_DELAYLOAD_DESCRIPTOR;
typedef const IMAGE_DELAYLOAD_DESCRIPTOR *PCIMAGE_DELAYLOAD_DESCRIPTOR;
typedef struct _IMAGE_RESOURCE_DIRECTORY {
    ULONG Characteristics;
    ULONG TimeDateStamp;
    USHORT MajorVersion;
    USHORT MinorVersion;
    USHORT NumberOfNamedEntries;
    USHORT NumberOfIdEntries;
} IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;
typedef struct _IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union {
        struct {
            ULONG NameOffset:31;
            ULONG NameIsString:1;
        } DUMMYSTRUCTNAME;
        ULONG Name;
        USHORT Id;
    } DUMMYUNIONNAME;
    union {
        ULONG OffsetToData;
        struct {
            ULONG OffsetToDirectory:31;
            ULONG DataIsDirectory:1;
        } DUMMYSTRUCTNAME2;
    } DUMMYUNIONNAME2;
} IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;
typedef struct _IMAGE_RESOURCE_DIRECTORY_STRING {
    USHORT Length;
    CHAR NameString[ 1 ];
} IMAGE_RESOURCE_DIRECTORY_STRING, *PIMAGE_RESOURCE_DIRECTORY_STRING;
typedef struct _IMAGE_RESOURCE_DIR_STRING_U {
    USHORT Length;
    WCHAR NameString[ 1 ];
} IMAGE_RESOURCE_DIR_STRING_U, *PIMAGE_RESOURCE_DIR_STRING_U;
typedef struct _IMAGE_RESOURCE_DATA_ENTRY {
    ULONG OffsetToData;
    ULONG Size;
    ULONG CodePage;
    ULONG Reserved;
} IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;
typedef struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    USHORT Flags;
    USHORT Catalog;
    ULONG CatalogOffset;
    ULONG Reserved;
} IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY;
typedef struct _IMAGE_DYNAMIC_RELOCATION_TABLE {
    ULONG Version;
    ULONG Size;
} IMAGE_DYNAMIC_RELOCATION_TABLE, *PIMAGE_DYNAMIC_RELOCATION_TABLE;
#include "pshpack1.h"
typedef struct _IMAGE_DYNAMIC_RELOCATION32 {
    ULONG Symbol;
    ULONG BaseRelocSize;
} IMAGE_DYNAMIC_RELOCATION32, *PIMAGE_DYNAMIC_RELOCATION32;
typedef struct _IMAGE_DYNAMIC_RELOCATION64 {
    ULONGLONG Symbol;
    ULONG BaseRelocSize;
} IMAGE_DYNAMIC_RELOCATION64, *PIMAGE_DYNAMIC_RELOCATION64;
typedef struct _IMAGE_DYNAMIC_RELOCATION32_V2 {
    ULONG HeaderSize;
    ULONG FixupInfoSize;
    ULONG Symbol;
    ULONG SymbolGroup;
    ULONG Flags;
} IMAGE_DYNAMIC_RELOCATION32_V2, *PIMAGE_DYNAMIC_RELOCATION32_V2;
typedef struct _IMAGE_DYNAMIC_RELOCATION64_V2 {
    ULONG HeaderSize;
    ULONG FixupInfoSize;
    ULONGLONG Symbol;
    ULONG SymbolGroup;
    ULONG Flags;
} IMAGE_DYNAMIC_RELOCATION64_V2, *PIMAGE_DYNAMIC_RELOCATION64_V2;
#include "poppack.h"
typedef IMAGE_DYNAMIC_RELOCATION64 IMAGE_DYNAMIC_RELOCATION;
typedef PIMAGE_DYNAMIC_RELOCATION64 PIMAGE_DYNAMIC_RELOCATION;
typedef IMAGE_DYNAMIC_RELOCATION64_V2 IMAGE_DYNAMIC_RELOCATION_V2;
typedef PIMAGE_DYNAMIC_RELOCATION64_V2 PIMAGE_DYNAMIC_RELOCATION_V2;
#include "pshpack1.h"
typedef struct _IMAGE_PROLOGUE_DYNAMIC_RELOCATION_HEADER {
    UCHAR PrologueByteCount;
} IMAGE_PROLOGUE_DYNAMIC_RELOCATION_HEADER;
typedef IMAGE_PROLOGUE_DYNAMIC_RELOCATION_HEADER UNALIGNED * PIMAGE_PROLOGUE_DYNAMIC_RELOCATION_HEADER;
typedef struct _IMAGE_EPILOGUE_DYNAMIC_RELOCATION_HEADER {
    ULONG EpilogueCount;
    UCHAR EpilogueByteCount;
    UCHAR BranchDescriptorElementSize;
    USHORT BranchDescriptorCount;
} IMAGE_EPILOGUE_DYNAMIC_RELOCATION_HEADER;
typedef IMAGE_EPILOGUE_DYNAMIC_RELOCATION_HEADER UNALIGNED * PIMAGE_EPILOGUE_DYNAMIC_RELOCATION_HEADER;
typedef struct _IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION {
    ULONG PageRelativeOffset : 12;
    ULONG IndirectCall : 1;
    ULONG IATIndex : 19;
} IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION;
typedef IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION UNALIGNED * PIMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION;
typedef struct _IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION {
    USHORT PageRelativeOffset : 12;
    USHORT IndirectCall : 1;
    USHORT RexWPrefix : 1;
    USHORT CfgCheck : 1;
    USHORT Reserved : 1;
} IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION;
typedef IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION UNALIGNED * PIMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION;
typedef struct _IMAGE_SWITCHTABLE_BRANCH_DYNAMIC_RELOCATION {
    USHORT PageRelativeOffset : 12;
    USHORT RegisterNumber : 4;
} IMAGE_SWITCHTABLE_BRANCH_DYNAMIC_RELOCATION;
typedef IMAGE_SWITCHTABLE_BRANCH_DYNAMIC_RELOCATION UNALIGNED * PIMAGE_SWITCHTABLE_BRANCH_DYNAMIC_RELOCATION;
#include "poppack.h"
typedef struct _IMAGE_LOAD_CONFIG_DIRECTORY32 {
    ULONG Size;
    ULONG TimeDateStamp;
    USHORT MajorVersion;
    USHORT MinorVersion;
    ULONG GlobalFlagsClear;
    ULONG GlobalFlagsSet;
    ULONG CriticalSectionDefaultTimeout;
    ULONG DeCommitFreeBlockThreshold;
    ULONG DeCommitTotalFreeThreshold;
    ULONG LockPrefixTable;
    ULONG MaximumAllocationSize;
    ULONG VirtualMemoryThreshold;
    ULONG ProcessHeapFlags;
    ULONG ProcessAffinityMask;
    USHORT CSDVersion;
    USHORT DependentLoadFlags;
    ULONG EditList;
    ULONG SecurityCookie;
    ULONG SEHandlerTable;
    ULONG SEHandlerCount;
    ULONG GuardCFCheckFunctionPointer;
    ULONG GuardCFDispatchFunctionPointer;
    ULONG GuardCFFunctionTable;
    ULONG GuardCFFunctionCount;
    ULONG GuardFlags;
    IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    ULONG GuardAddressTakenIatEntryTable;
    ULONG GuardAddressTakenIatEntryCount;
    ULONG GuardLongJumpTargetTable;
    ULONG GuardLongJumpTargetCount;
    ULONG DynamicValueRelocTable;
    ULONG CHPEMetadataPointer;
    ULONG GuardRFFailureRoutine;
    ULONG GuardRFFailureRoutineFunctionPointer;
    ULONG DynamicValueRelocTableOffset;
    USHORT DynamicValueRelocTableSection;
    USHORT Reserved2;
    ULONG GuardRFVerifyStackPointerFunctionPointer;
    ULONG HotPatchTableOffset;
    ULONG Reserved3;
    ULONG EnclaveConfigurationPointer;
    ULONG VolatileMetadataPointer;
} IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;
typedef struct _IMAGE_LOAD_CONFIG_DIRECTORY64 {
    ULONG Size;
    ULONG TimeDateStamp;
    USHORT MajorVersion;
    USHORT MinorVersion;
    ULONG GlobalFlagsClear;
    ULONG GlobalFlagsSet;
    ULONG CriticalSectionDefaultTimeout;
    ULONGLONG DeCommitFreeBlockThreshold;
    ULONGLONG DeCommitTotalFreeThreshold;
    ULONGLONG LockPrefixTable;
    ULONGLONG MaximumAllocationSize;
    ULONGLONG VirtualMemoryThreshold;
    ULONGLONG ProcessAffinityMask;
    ULONG ProcessHeapFlags;
    USHORT CSDVersion;
    USHORT DependentLoadFlags;
    ULONGLONG EditList;
    ULONGLONG SecurityCookie;
    ULONGLONG SEHandlerTable;
    ULONGLONG SEHandlerCount;
    ULONGLONG GuardCFCheckFunctionPointer;
    ULONGLONG GuardCFDispatchFunctionPointer;
    ULONGLONG GuardCFFunctionTable;
    ULONGLONG GuardCFFunctionCount;
    ULONG GuardFlags;
    IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    ULONGLONG GuardAddressTakenIatEntryTable;
    ULONGLONG GuardAddressTakenIatEntryCount;
    ULONGLONG GuardLongJumpTargetTable;
    ULONGLONG GuardLongJumpTargetCount;
    ULONGLONG DynamicValueRelocTable;
    ULONGLONG CHPEMetadataPointer;
    ULONGLONG GuardRFFailureRoutine;
    ULONGLONG GuardRFFailureRoutineFunctionPointer;
    ULONG DynamicValueRelocTableOffset;
    USHORT DynamicValueRelocTableSection;
    USHORT Reserved2;
    ULONGLONG GuardRFVerifyStackPointerFunctionPointer;
    ULONG HotPatchTableOffset;
    ULONG Reserved3;
    ULONGLONG EnclaveConfigurationPointer;
    ULONGLONG VolatileMetadataPointer;
} IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;
typedef struct _IMAGE_CHPE_METADATA_X86 {
    ULONG Version;
    ULONG CHPECodeAddressRangeOffset;
    ULONG CHPECodeAddressRangeCount;
    ULONG WowA64ExceptionHandlerFunctionPointer;
    ULONG WowA64DispatchCallFunctionPointer;
    ULONG WowA64DispatchIndirectCallFunctionPointer;
    ULONG WowA64DispatchIndirectCallCfgFunctionPointer;
    ULONG WowA64DispatchRetFunctionPointer;
    ULONG WowA64DispatchRetLeafFunctionPointer;
    ULONG WowA64DispatchJumpFunctionPointer;
    ULONG CompilerIATPointer;
    ULONG WowA64RdtscFunctionPointer;
} IMAGE_CHPE_METADATA_X86, *PIMAGE_CHPE_METADATA_X86;
typedef struct _IMAGE_CHPE_RANGE_ENTRY {
    union {
        ULONG StartOffset;
        struct {
            ULONG NativeCode : 1;
            ULONG AddressBits : 31;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
    ULONG Length;
} IMAGE_CHPE_RANGE_ENTRY, *PIMAGE_CHPE_RANGE_ENTRY;
typedef IMAGE_LOAD_CONFIG_DIRECTORY64 IMAGE_LOAD_CONFIG_DIRECTORY;
typedef PIMAGE_LOAD_CONFIG_DIRECTORY64 PIMAGE_LOAD_CONFIG_DIRECTORY;
typedef struct _IMAGE_HOT_PATCH_INFO {
    ULONG Version;
    ULONG Size;
    ULONG SequenceNumber;
    ULONG BaseImageList;
    ULONG BaseImageCount;
    ULONG BufferOffset;
    ULONG ExtraPatchSize;
} IMAGE_HOT_PATCH_INFO, *PIMAGE_HOT_PATCH_INFO;
typedef struct _IMAGE_HOT_PATCH_BASE {
    ULONG SequenceNumber;
    ULONG Flags;
    ULONG OriginalTimeDateStamp;
    ULONG OriginalCheckSum;
    ULONG CodeIntegrityInfo;
    ULONG CodeIntegritySize;
    ULONG PatchTable;
    ULONG BufferOffset;
} IMAGE_HOT_PATCH_BASE, *PIMAGE_HOT_PATCH_BASE;
typedef struct _IMAGE_HOT_PATCH_HASHES {
    UCHAR SHA256[32];
    UCHAR SHA1[20];
} IMAGE_HOT_PATCH_HASHES, *PIMAGE_HOT_PATCH_HASHES;
typedef struct _IMAGE_CE_RUNTIME_FUNCTION_ENTRY {
    ULONG FuncStart;
    ULONG PrologLen : 8;
    ULONG FuncLen : 22;
    ULONG ThirtyTwoBit : 1;
    ULONG ExceptionFlag : 1;
} IMAGE_CE_RUNTIME_FUNCTION_ENTRY, * PIMAGE_CE_RUNTIME_FUNCTION_ENTRY;
typedef struct _IMAGE_ARM_RUNTIME_FUNCTION_ENTRY {
    ULONG BeginAddress;
    union {
        ULONG UnwindData;
        struct {
            ULONG Flag : 2;
            ULONG FunctionLength : 11;
            ULONG Ret : 2;
            ULONG H : 1;
            ULONG Reg : 3;
            ULONG R : 1;
            ULONG L : 1;
            ULONG C : 1;
            ULONG StackAdjust : 10;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} IMAGE_ARM_RUNTIME_FUNCTION_ENTRY, * PIMAGE_ARM_RUNTIME_FUNCTION_ENTRY;
typedef struct _IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY {
    ULONG BeginAddress;
    union {
        ULONG UnwindData;
        struct {
            ULONG Flag : 2;
            ULONG FunctionLength : 11;
            ULONG RegF : 3;
            ULONG RegI : 4;
            ULONG H : 1;
            ULONG CR : 2;
            ULONG FrameSize : 9;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY, * PIMAGE_ARM64_RUNTIME_FUNCTION_ENTRY;
typedef struct _IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY {
    ULONGLONG BeginAddress;
    ULONGLONG EndAddress;
    ULONGLONG ExceptionHandler;
    ULONGLONG HandlerData;
    ULONGLONG PrologEndAddress;
} IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY, *PIMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY;
typedef struct _IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY {
    ULONG BeginAddress;
    ULONG EndAddress;
    ULONG ExceptionHandler;
    ULONG HandlerData;
    ULONG PrologEndAddress;
} IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY, *PIMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY;
typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ULONG BeginAddress;
    ULONG EndAddress;
    union {
        ULONG UnwindInfoAddress;
        ULONG UnwindData;
    } DUMMYUNIONNAME;
} _IMAGE_RUNTIME_FUNCTION_ENTRY, *_PIMAGE_RUNTIME_FUNCTION_ENTRY;
typedef _IMAGE_RUNTIME_FUNCTION_ENTRY IMAGE_IA64_RUNTIME_FUNCTION_ENTRY;
typedef _PIMAGE_RUNTIME_FUNCTION_ENTRY PIMAGE_IA64_RUNTIME_FUNCTION_ENTRY;
typedef _IMAGE_RUNTIME_FUNCTION_ENTRY IMAGE_RUNTIME_FUNCTION_ENTRY;
typedef _PIMAGE_RUNTIME_FUNCTION_ENTRY PIMAGE_RUNTIME_FUNCTION_ENTRY;
typedef struct _IMAGE_ENCLAVE_CONFIG32 {
    ULONG Size;
    ULONG MinimumRequiredConfigSize;
    ULONG PolicyFlags;
    ULONG NumberOfImports;
    ULONG ImportList;
    ULONG ImportEntrySize;
    UCHAR FamilyID[IMAGE_ENCLAVE_SHORT_ID_LENGTH];
    UCHAR ImageID[IMAGE_ENCLAVE_SHORT_ID_LENGTH];
    ULONG ImageVersion;
    ULONG SecurityVersion;
    ULONG EnclaveSize;
    ULONG NumberOfThreads;
    ULONG EnclaveFlags;
} IMAGE_ENCLAVE_CONFIG32, *PIMAGE_ENCLAVE_CONFIG32;
typedef struct _IMAGE_ENCLAVE_CONFIG64 {
    ULONG Size;
    ULONG MinimumRequiredConfigSize;
    ULONG PolicyFlags;
    ULONG NumberOfImports;
    ULONG ImportList;
    ULONG ImportEntrySize;
    UCHAR FamilyID[IMAGE_ENCLAVE_SHORT_ID_LENGTH];
    UCHAR ImageID[IMAGE_ENCLAVE_SHORT_ID_LENGTH];
    ULONG ImageVersion;
    ULONG SecurityVersion;
    ULONGLONG EnclaveSize;
    ULONG NumberOfThreads;
    ULONG EnclaveFlags;
} IMAGE_ENCLAVE_CONFIG64, *PIMAGE_ENCLAVE_CONFIG64;
typedef IMAGE_ENCLAVE_CONFIG64 IMAGE_ENCLAVE_CONFIG;
typedef PIMAGE_ENCLAVE_CONFIG64 PIMAGE_ENCLAVE_CONFIG;
typedef struct _IMAGE_ENCLAVE_IMPORT {
    ULONG MatchType;
    ULONG MinimumSecurityVersion;
    UCHAR UniqueOrAuthorID[IMAGE_ENCLAVE_LONG_ID_LENGTH];
    UCHAR FamilyID[IMAGE_ENCLAVE_SHORT_ID_LENGTH];
    UCHAR ImageID[IMAGE_ENCLAVE_SHORT_ID_LENGTH];
    ULONG ImportName;
    ULONG Reserved;
} IMAGE_ENCLAVE_IMPORT, *PIMAGE_ENCLAVE_IMPORT;
typedef struct _IMAGE_DEBUG_DIRECTORY {
    ULONG Characteristics;
    ULONG TimeDateStamp;
    USHORT MajorVersion;
    USHORT MinorVersion;
    ULONG Type;
    ULONG SizeOfData;
    ULONG AddressOfRawData;
    ULONG PointerToRawData;
} IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;
typedef struct _IMAGE_COFF_SYMBOLS_HEADER {
    ULONG NumberOfSymbols;
    ULONG LvaToFirstSymbol;
    ULONG NumberOfLinenumbers;
    ULONG LvaToFirstLinenumber;
    ULONG RvaToFirstByteOfCode;
    ULONG RvaToLastByteOfCode;
    ULONG RvaToFirstByteOfData;
    ULONG RvaToLastByteOfData;
} IMAGE_COFF_SYMBOLS_HEADER, *PIMAGE_COFF_SYMBOLS_HEADER;
typedef struct _FPO_DATA {
    ULONG ulOffStart;
    ULONG cbProcSize;
    ULONG cdwLocals;
    USHORT cdwParams;
    USHORT cbProlog : 8;
    USHORT cbRegs : 3;
    USHORT fHasSEH : 1;
    USHORT fUseBP : 1;
    USHORT reserved : 1;
    USHORT cbFrame : 2;
} FPO_DATA, *PFPO_DATA;
typedef struct _IMAGE_DEBUG_MISC {
    ULONG DataType;
    ULONG Length;
    BOOLEAN Unicode;
    UCHAR Reserved[ 3 ];
    UCHAR Data[ 1 ];
} IMAGE_DEBUG_MISC, *PIMAGE_DEBUG_MISC;
typedef struct _IMAGE_FUNCTION_ENTRY {
    ULONG StartingAddress;
    ULONG EndingAddress;
    ULONG EndOfPrologue;
} IMAGE_FUNCTION_ENTRY, *PIMAGE_FUNCTION_ENTRY;
typedef struct _IMAGE_FUNCTION_ENTRY64 {
    ULONGLONG StartingAddress;
    ULONGLONG EndingAddress;
    union {
        ULONGLONG EndOfPrologue;
        ULONGLONG UnwindInfoAddress;
    } DUMMYUNIONNAME;
} IMAGE_FUNCTION_ENTRY64, *PIMAGE_FUNCTION_ENTRY64;
typedef struct _IMAGE_SEPARATE_DEBUG_HEADER {
    USHORT Signature;
    USHORT Flags;
    USHORT Machine;
    USHORT Characteristics;
    ULONG TimeDateStamp;
    ULONG CheckSum;
    ULONG ImageBase;
    ULONG SizeOfImage;
    ULONG NumberOfSections;
    ULONG ExportedNamesSize;
    ULONG DebugDirectorySize;
    ULONG SectionAlignment;
    ULONG Reserved[2];
} IMAGE_SEPARATE_DEBUG_HEADER, *PIMAGE_SEPARATE_DEBUG_HEADER;
typedef struct _NON_PAGED_DEBUG_INFO {
    USHORT Signature;
    USHORT Flags;
    ULONG Size;
    USHORT Machine;
    USHORT Characteristics;
    ULONG TimeDateStamp;
    ULONG CheckSum;
    ULONG SizeOfImage;
    ULONGLONG ImageBase;
} NON_PAGED_DEBUG_INFO, *PNON_PAGED_DEBUG_INFO;
typedef struct _ImageArchitectureHeader {
    unsigned int AmaskValue: 1;
    int :7;
    unsigned int AmaskShift: 8;
    int :16;
    ULONG FirstEntryRVA;
} IMAGE_ARCHITECTURE_HEADER, *PIMAGE_ARCHITECTURE_HEADER;
typedef struct _ImageArchitectureEntry {
    ULONG FixupInstRVA;
    ULONG NewInst;
} IMAGE_ARCHITECTURE_ENTRY, *PIMAGE_ARCHITECTURE_ENTRY;
#include "poppack.h"
typedef struct IMPORT_OBJECT_HEADER {
    USHORT Sig1;
    USHORT Sig2;
    USHORT Version;
    USHORT Machine;
    ULONG TimeDateStamp;
    ULONG SizeOfData;
    union {
        USHORT Ordinal;
        USHORT Hint;
    } DUMMYUNIONNAME;
    USHORT Type : 2;
    USHORT NameType : 3;
    USHORT Reserved : 11;
} IMPORT_OBJECT_HEADER;
typedef enum IMPORT_OBJECT_TYPE
{
    IMPORT_OBJECT_CODE = 0,
    IMPORT_OBJECT_DATA = 1,
    IMPORT_OBJECT_CONST = 2,
} IMPORT_OBJECT_TYPE;
typedef enum IMPORT_OBJECT_NAME_TYPE
{
    IMPORT_OBJECT_ORDINAL = 0,
    IMPORT_OBJECT_NAME = 1,
    IMPORT_OBJECT_NAME_NO_PREFIX = 2,
    IMPORT_OBJECT_NAME_UNDECORATE = 3,
    IMPORT_OBJECT_NAME_EXPORTAS = 4,
} IMPORT_OBJECT_NAME_TYPE;
typedef enum ReplacesCorHdrNumericDefines
{
    COMIMAGE_FLAGS_ILONLY =0x00000001,
    COMIMAGE_FLAGS_32BITREQUIRED =0x00000002,
    COMIMAGE_FLAGS_IL_LIBRARY =0x00000004,
    COMIMAGE_FLAGS_STRONGNAMESIGNED =0x00000008,
    COMIMAGE_FLAGS_NATIVE_ENTRYPOINT =0x00000010,
    COMIMAGE_FLAGS_TRACKDEBUGDATA =0x00010000,
    COMIMAGE_FLAGS_32BITPREFERRED =0x00020000,
    COR_VERSION_MAJOR_V2 =2,
    COR_VERSION_MAJOR =COR_VERSION_MAJOR_V2,
    COR_VERSION_MINOR =5,
    COR_DELETED_NAME_LENGTH =8,
    COR_VTABLEGAP_NAME_LENGTH =8,
    NATIVE_TYPE_MAX_CB =1,
    COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE=0xFF,
    IMAGE_COR_MIH_METHODRVA =0x01,
    IMAGE_COR_MIH_EHRVA =0x02,
    IMAGE_COR_MIH_BASICBLOCK =0x08,
    COR_VTABLE_32BIT =0x01,
    COR_VTABLE_64BIT =0x02,
    COR_VTABLE_FROM_UNMANAGED =0x04,
    COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN =0x08,
    COR_VTABLE_CALL_MOST_DERIVED =0x10,
    IMAGE_COR_EATJ_THUNK_SIZE =32,
    MAX_CLASS_NAME =1024,
    MAX_PACKAGE_NAME =1024,
} ReplacesCorHdrNumericDefines;
typedef struct IMAGE_COR20_HEADER
{
    ULONG cb;
    USHORT MajorRuntimeVersion;
    USHORT MinorRuntimeVersion;
    IMAGE_DATA_DIRECTORY MetaData;
    ULONG Flags;
    union {
        ULONG EntryPointToken;
        ULONG EntryPointRVA;
    } DUMMYUNIONNAME;
    IMAGE_DATA_DIRECTORY Resources;
    IMAGE_DATA_DIRECTORY StrongNameSignature;
    IMAGE_DATA_DIRECTORY CodeManagerTable;
    IMAGE_DATA_DIRECTORY VTableFixups;
    IMAGE_DATA_DIRECTORY ExportAddressTableJumps;
    IMAGE_DATA_DIRECTORY ManagedNativeHeader;
} IMAGE_COR20_HEADER, *PIMAGE_COR20_HEADER;
typedef IMAGE_OS2_HEADER UNALIGNED * PUIMAGE_OS2_HEADER;
typedef IMAGE_IMPORT_DESCRIPTOR UNALIGNED CONST *PCIMAGE_IMPORT_DESCRIPTOR;
typedef CONST IMAGE_BOUND_IMPORT_DESCRIPTOR *PCIMAGE_BOUND_IMPORT_DESCRIPTOR;
typedef CONST IMAGE_BOUND_FORWARDER_REF *PCIMAGE_BOUND_FORWARDER_REF;
typedef CONST IMAGE_IMPORT_BY_NAME *PCIMAGE_IMPORT_BY_NAME;
typedef CONST IMAGE_THUNK_DATA *PCIMAGE_THUNK_DATA;
typedef CONST IMAGE_THUNK_DATA32 *PCIMAGE_THUNK_DATA32;
typedef CONST IMAGE_THUNK_DATA64 *PCIMAGE_THUNK_DATA64;
typedef CONST IMAGE_TLS_DIRECTORY *PCIMAGE_TLS_DIRECTORY;
typedef CONST IMAGE_TLS_DIRECTORY32 *PCIMAGE_TLS_DIRECTORY32;
typedef CONST IMAGE_TLS_DIRECTORY64 *PCIMAGE_TLS_DIRECTORY64;
typedef CONST IMAGE_EXPORT_DIRECTORY *PCIMAGE_EXPORT_DIRECTORY;
typedef CONST IMAGE_SECTION_HEADER *PCIMAGE_SECTION_HEADER;
