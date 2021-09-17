#include <winapifamily.h>
extern "C" {
#include <specstrings.h>
#include <pshpack8.h>
#pragma warning(push)
#pragma warning(disable: 4201)
    typedef unsigned __int64 JET_API_PTR;
typedef _Return_type_success_( return >= 0 ) long JET_ERR;
typedef JET_API_PTR JET_HANDLE;
typedef JET_API_PTR JET_INSTANCE;
typedef JET_API_PTR JET_SESID;
typedef JET_API_PTR JET_TABLEID;
typedef JET_API_PTR JET_LS;
typedef unsigned long JET_COLUMNID;
typedef struct tagJET_INDEXID
{
    unsigned long cbStruct;
    unsigned char rgbIndexId[sizeof(JET_API_PTR)+sizeof(unsigned long)+sizeof(unsigned long)];
} JET_INDEXID;
typedef unsigned long JET_DBID;
typedef unsigned long JET_OBJTYP;
typedef unsigned long JET_COLTYP;
typedef unsigned long JET_GRBIT;
typedef unsigned long JET_SNP;
typedef unsigned long JET_SNT;
typedef double JET_DATESERIAL;
typedef unsigned long JET_CBTYP;
typedef JET_ERR (JET_API *JET_PFNSTATUS)(
    _In_ JET_SESID sesid,
    _In_ JET_SNP snp,
    _In_ JET_SNT snt,
    _In_opt_ void * pv );
typedef unsigned short WCHAR;
typedef _Null_terminated_ char * JET_PSTR;
typedef _Null_terminated_ const char * JET_PCSTR;
typedef _Null_terminated_ WCHAR * JET_PWSTR;
typedef _Null_terminated_ const WCHAR * JET_PCWSTR;
typedef struct
{
    char *szDatabaseName;
    char *szNewDatabaseName;
} JET_RSTMAP_A;
typedef struct
{
    WCHAR *szDatabaseName;
    WCHAR *szNewDatabaseName;
} JET_RSTMAP_W;
typedef struct tagCONVERT_A
{
    char *szOldDll;
    union
    {
        unsigned long fFlags;
        struct
        {
            unsigned long fSchemaChangesOnly:1;
        };
    };
} JET_CONVERT_A;
typedef struct tagCONVERT_W
{
    WCHAR *szOldDll;
    union
    {
        unsigned long fFlags;
        struct
        {
            unsigned long fSchemaChangesOnly:1;
        };
    };
} JET_CONVERT_W;
typedef JET_ERR (JET_API *JET_CALLBACK)(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_TABLEID tableid,
    _In_ JET_CBTYP cbtyp,
    _Inout_opt_ void * pvArg1,
    _Inout_opt_ void * pvArg2,
    _In_opt_ void * pvContext,
    _In_ JET_API_PTR ulUnused );
typedef struct
{
    unsigned long cbStruct;
    unsigned long cunitDone;
    unsigned long cunitTotal;
} JET_SNPROG;
typedef struct
{
    unsigned long cbStruct;
    unsigned long cbFilesizeLow;
    unsigned long cbFilesizeHigh;
    unsigned long cbFreeSpaceRequiredLow;
    unsigned long cbFreeSpaceRequiredHigh;
    unsigned long csecToUpgrade;
    union
    {
        unsigned long ulFlags;
        struct
        {
            unsigned long fUpgradable:1;
            unsigned long fAlreadyUpgraded:1;
        };
    };
} JET_DBINFOUPGRADE;
typedef struct
{
    unsigned long cbStruct;
    JET_OBJTYP objtyp;
    JET_DATESERIAL dtCreate;
    JET_DATESERIAL dtUpdate;
    JET_GRBIT grbit;
    unsigned long flags;
    unsigned long cRecord;
    unsigned long cPage;
} JET_OBJECTINFO;
typedef struct
{
    unsigned long cbStruct;
    JET_TABLEID tableid;
    unsigned long cRecord;
    JET_COLUMNID columnidcontainername;
    JET_COLUMNID columnidobjectname;
    JET_COLUMNID columnidobjtyp;
    JET_COLUMNID columniddtCreate;
    JET_COLUMNID columniddtUpdate;
    JET_COLUMNID columnidgrbit;
    JET_COLUMNID columnidflags;
    JET_COLUMNID columnidcRecord;
    JET_COLUMNID columnidcPage;
} JET_OBJECTLIST;
typedef struct
{
    unsigned long cbStruct;
    JET_TABLEID tableid;
    unsigned long cRecord;
    JET_COLUMNID columnidPresentationOrder;
    JET_COLUMNID columnidcolumnname;
    JET_COLUMNID columnidcolumnid;
    JET_COLUMNID columnidcoltyp;
    JET_COLUMNID columnidCountry;
    JET_COLUMNID columnidLangid;
    JET_COLUMNID columnidCp;
    JET_COLUMNID columnidCollate;
    JET_COLUMNID columnidcbMax;
    JET_COLUMNID columnidgrbit;
    JET_COLUMNID columnidDefault;
    JET_COLUMNID columnidBaseTableName;
    JET_COLUMNID columnidBaseColumnName;
    JET_COLUMNID columnidDefinitionName;
} JET_COLUMNLIST;
typedef struct
{
    unsigned long cbStruct;
    JET_COLUMNID columnid;
    JET_COLTYP coltyp;
    unsigned short wCountry;
    unsigned short langid;
    unsigned short cp;
    unsigned short wCollate;
    unsigned long cbMax;
    JET_GRBIT grbit;
} JET_COLUMNDEF;
typedef struct
{
    unsigned long cbStruct;
    JET_COLUMNID columnid;
    JET_COLTYP coltyp;
    unsigned short wCountry;
    unsigned short langid;
    unsigned short cp;
    unsigned short wFiller;
    unsigned long cbMax;
    JET_GRBIT grbit;
    char szBaseTableName[256];
    char szBaseColumnName[256];
} JET_COLUMNBASE_A;
typedef struct
{
    unsigned long cbStruct;
    JET_COLUMNID columnid;
    JET_COLTYP coltyp;
    unsigned short wCountry;
    unsigned short langid;
    unsigned short cp;
    unsigned short wFiller;
    unsigned long cbMax;
    JET_GRBIT grbit;
    WCHAR szBaseTableName[256];
    WCHAR szBaseColumnName[256];
} JET_COLUMNBASE_W;
typedef struct
{
    unsigned long cbStruct;
    JET_TABLEID tableid;
    unsigned long cRecord;
    JET_COLUMNID columnidindexname;
    JET_COLUMNID columnidgrbitIndex;
    JET_COLUMNID columnidcKey;
    JET_COLUMNID columnidcEntry;
    JET_COLUMNID columnidcPage;
    JET_COLUMNID columnidcColumn;
    JET_COLUMNID columnidiColumn;
    JET_COLUMNID columnidcolumnid;
    JET_COLUMNID columnidcoltyp;
    JET_COLUMNID columnidCountry;
    JET_COLUMNID columnidLangid;
    JET_COLUMNID columnidCp;
    JET_COLUMNID columnidCollate;
    JET_COLUMNID columnidgrbitColumn;
    JET_COLUMNID columnidcolumnname;
    JET_COLUMNID columnidLCMapFlags;
} JET_INDEXLIST;
typedef struct tag_JET_COLUMNCREATE_A
{
    unsigned long cbStruct;
    char *szColumnName;
    JET_COLTYP coltyp;
    unsigned long cbMax;
    JET_GRBIT grbit;
    void *pvDefault;
    unsigned long cbDefault;
    unsigned long cp;
    JET_COLUMNID columnid;
    JET_ERR err;
} JET_COLUMNCREATE_A;
typedef struct tag_JET_COLUMNCREATE_W
{
    unsigned long cbStruct;
    WCHAR *szColumnName;
    JET_COLTYP coltyp;
    unsigned long cbMax;
    JET_GRBIT grbit;
    void *pvDefault;
    unsigned long cbDefault;
    unsigned long cp;
    JET_COLUMNID columnid;
    JET_ERR err;
} JET_COLUMNCREATE_W;
typedef struct tag_JET_USERDEFINEDDEFAULT_A
{
    char * szCallback;
    unsigned char * pbUserData;
    unsigned long cbUserData;
    char * szDependantColumns;
} JET_USERDEFINEDDEFAULT_A;
typedef struct tag_JET_USERDEFINEDDEFAULT_W
{
    WCHAR * szCallback;
    unsigned char * pbUserData;
    unsigned long cbUserData;
    WCHAR * szDependantColumns;
} JET_USERDEFINEDDEFAULT_W;
typedef struct tagJET_CONDITIONALCOLUMN_A
{
    unsigned long cbStruct;
    char *szColumnName;
    JET_GRBIT grbit;
} JET_CONDITIONALCOLUMN_A;
typedef struct tagJET_CONDITIONALCOLUMN_W
{
    unsigned long cbStruct;
    WCHAR *szColumnName;
    JET_GRBIT grbit;
} JET_CONDITIONALCOLUMN_W;
typedef struct tagJET_UNICODEINDEX
{
    unsigned long lcid;
    unsigned long dwMapFlags;
} JET_UNICODEINDEX;
typedef struct tagJET_UNICODEINDEX2
{
    _Field_z_ WCHAR *szLocaleName;
    unsigned long dwMapFlags;
} JET_UNICODEINDEX2;
typedef struct tagJET_TUPLELIMITS
{
    unsigned long chLengthMin;
    unsigned long chLengthMax;
    unsigned long chToIndexMax;
    unsigned long cchIncrement;
    unsigned long ichStart;
} JET_TUPLELIMITS;
typedef struct tagJET_SPACEHINTS
{
    unsigned long cbStruct;
    unsigned long ulInitialDensity;
    unsigned long cbInitial;
    JET_GRBIT grbit;
    unsigned long ulMaintDensity;
    unsigned long ulGrowth;
    unsigned long cbMinExtent;
    unsigned long cbMaxExtent;
} JET_SPACEHINTS;
typedef struct tagJET_INDEXCREATE_A
{
    unsigned long cbStruct;
    char *szIndexName;
    char *szKey;
    unsigned long cbKey;
    JET_GRBIT grbit;
    unsigned long ulDensity;
    union
    {
        unsigned long lcid;
        JET_UNICODEINDEX *pidxunicode;
    };
    union
    {
        unsigned long cbVarSegMac;
        JET_TUPLELIMITS *ptuplelimits;
    };
    JET_CONDITIONALCOLUMN_A *rgconditionalcolumn;
    unsigned long cConditionalColumn;
    JET_ERR err;
    unsigned long cbKeyMost;
} JET_INDEXCREATE_A;
typedef struct tagJET_INDEXCREATE_W
{
    unsigned long cbStruct;
    WCHAR *szIndexName;
    WCHAR *szKey;
    unsigned long cbKey;
    JET_GRBIT grbit;
    unsigned long ulDensity;
    union
    {
        unsigned long lcid;
        JET_UNICODEINDEX *pidxunicode;
    };
    union
    {
        unsigned long cbVarSegMac;
        JET_TUPLELIMITS *ptuplelimits;
    };
    JET_CONDITIONALCOLUMN_W *rgconditionalcolumn;
    unsigned long cConditionalColumn;
    JET_ERR err;
    unsigned long cbKeyMost;
} JET_INDEXCREATE_W;
typedef struct tagJET_INDEXCREATE2_A
{
    unsigned long cbStruct;
    char *szIndexName;
    char *szKey;
    unsigned long cbKey;
    JET_GRBIT grbit;
    unsigned long ulDensity;
    union
    {
        unsigned long lcid;
        JET_UNICODEINDEX *pidxunicode;
    };
    union
    {
        unsigned long cbVarSegMac;
        JET_TUPLELIMITS *ptuplelimits;
    };
    JET_CONDITIONALCOLUMN_A *rgconditionalcolumn;
    unsigned long cConditionalColumn;
    JET_ERR err;
    unsigned long cbKeyMost;
    JET_SPACEHINTS * pSpacehints;
} JET_INDEXCREATE2_A;
typedef struct tagJET_INDEXCREATE2_W
{
    unsigned long cbStruct;
    WCHAR *szIndexName;
    WCHAR *szKey;
    unsigned long cbKey;
    JET_GRBIT grbit;
    unsigned long ulDensity;
    union
    {
        unsigned long lcid;
        JET_UNICODEINDEX *pidxunicode;
    };
    union
    {
        unsigned long cbVarSegMac;
        JET_TUPLELIMITS *ptuplelimits;
    };
    JET_CONDITIONALCOLUMN_W *rgconditionalcolumn;
    unsigned long cConditionalColumn;
    JET_ERR err;
    unsigned long cbKeyMost;
    JET_SPACEHINTS * pSpacehints;
} JET_INDEXCREATE2_W;
typedef struct tagJET_INDEXCREATE3_A
{
    unsigned long cbStruct;
    char *szIndexName;
    char *szKey;
    unsigned long cbKey;
    JET_GRBIT grbit;
    unsigned long ulDensity;
    JET_UNICODEINDEX2 *pidxunicode;
    union
    {
        unsigned long cbVarSegMac;
        JET_TUPLELIMITS *ptuplelimits;
    };
    JET_CONDITIONALCOLUMN_A *rgconditionalcolumn;
    unsigned long cConditionalColumn;
    JET_ERR err;
    unsigned long cbKeyMost;
    JET_SPACEHINTS * pSpacehints;
} JET_INDEXCREATE3_A;
typedef struct tagJET_INDEXCREATE3_W
{
    unsigned long cbStruct;
    WCHAR *szIndexName;
    WCHAR *szKey;
    unsigned long cbKey;
    JET_GRBIT grbit;
    unsigned long ulDensity;
    JET_UNICODEINDEX2 *pidxunicode;
    union
    {
        unsigned long cbVarSegMac;
        JET_TUPLELIMITS *ptuplelimits;
    };
    JET_CONDITIONALCOLUMN_W *rgconditionalcolumn;
    unsigned long cConditionalColumn;
    JET_ERR err;
    unsigned long cbKeyMost;
    JET_SPACEHINTS * pSpacehints;
} JET_INDEXCREATE3_W;
typedef struct tagJET_TABLECREATE_A
{
    unsigned long cbStruct;
    char *szTableName;
    char *szTemplateTableName;
    unsigned long ulPages;
    unsigned long ulDensity;
    JET_COLUMNCREATE_A *rgcolumncreate;
    unsigned long cColumns;
    JET_INDEXCREATE_A *rgindexcreate;
    unsigned long cIndexes;
    JET_GRBIT grbit;
    JET_TABLEID tableid;
    unsigned long cCreated;
} JET_TABLECREATE_A;
typedef struct tagJET_TABLECREATE_W
{
    unsigned long cbStruct;
    WCHAR *szTableName;
    WCHAR *szTemplateTableName;
    unsigned long ulPages;
    unsigned long ulDensity;
    JET_COLUMNCREATE_W *rgcolumncreate;
    unsigned long cColumns;
    JET_INDEXCREATE_W *rgindexcreate;
    unsigned long cIndexes;
    JET_GRBIT grbit;
    JET_TABLEID tableid;
    unsigned long cCreated;
} JET_TABLECREATE_W;
typedef struct tagJET_TABLECREATE2_A
{
    unsigned long cbStruct;
    char *szTableName;
    char *szTemplateTableName;
    unsigned long ulPages;
    unsigned long ulDensity;
    JET_COLUMNCREATE_A *rgcolumncreate;
    unsigned long cColumns;
    JET_INDEXCREATE_A *rgindexcreate;
    unsigned long cIndexes;
    char *szCallback;
    JET_CBTYP cbtyp;
    JET_GRBIT grbit;
    JET_TABLEID tableid;
    unsigned long cCreated;
} JET_TABLECREATE2_A;
typedef struct tagJET_TABLECREATE2_W
{
    unsigned long cbStruct;
    WCHAR *szTableName;
    WCHAR *szTemplateTableName;
    unsigned long ulPages;
    unsigned long ulDensity;
    JET_COLUMNCREATE_W *rgcolumncreate;
    unsigned long cColumns;
    JET_INDEXCREATE_W *rgindexcreate;
    unsigned long cIndexes;
    WCHAR *szCallback;
    JET_CBTYP cbtyp;
    JET_GRBIT grbit;
    JET_TABLEID tableid;
    unsigned long cCreated;
} JET_TABLECREATE2_W;
typedef struct tagJET_TABLECREATE3_A
{
    unsigned long cbStruct;
    char *szTableName;
    char *szTemplateTableName;
    unsigned long ulPages;
    unsigned long ulDensity;
    JET_COLUMNCREATE_A *rgcolumncreate;
    unsigned long cColumns;
    JET_INDEXCREATE2_A *rgindexcreate;
    unsigned long cIndexes;
    char *szCallback;
    JET_CBTYP cbtyp;
    JET_GRBIT grbit;
    JET_SPACEHINTS * pSeqSpacehints;
    JET_SPACEHINTS * pLVSpacehints;
    unsigned long cbSeparateLV;
    JET_TABLEID tableid;
    unsigned long cCreated;
} JET_TABLECREATE3_A;
typedef struct tagJET_TABLECREATE3_W
{
    unsigned long cbStruct;
    WCHAR *szTableName;
    WCHAR *szTemplateTableName;
    unsigned long ulPages;
    unsigned long ulDensity;
    JET_COLUMNCREATE_W *rgcolumncreate;
    unsigned long cColumns;
    JET_INDEXCREATE2_W *rgindexcreate;
    unsigned long cIndexes;
    WCHAR *szCallback;
    JET_CBTYP cbtyp;
    JET_GRBIT grbit;
    JET_SPACEHINTS * pSeqSpacehints;
    JET_SPACEHINTS * pLVSpacehints;
    unsigned long cbSeparateLV;
    JET_TABLEID tableid;
    unsigned long cCreated;
} JET_TABLECREATE3_W;
typedef struct tagJET_TABLECREATE4_A
{
    unsigned long cbStruct;
    char *szTableName;
    char *szTemplateTableName;
    unsigned long ulPages;
    unsigned long ulDensity;
    JET_COLUMNCREATE_A *rgcolumncreate;
    unsigned long cColumns;
    JET_INDEXCREATE3_A *rgindexcreate;
    unsigned long cIndexes;
    char *szCallback;
    JET_CBTYP cbtyp;
    JET_GRBIT grbit;
    JET_SPACEHINTS * pSeqSpacehints;
    JET_SPACEHINTS * pLVSpacehints;
    unsigned long cbSeparateLV;
    JET_TABLEID tableid;
    unsigned long cCreated;
} JET_TABLECREATE4_A;
typedef struct tagJET_TABLECREATE4_W
{
    unsigned long cbStruct;
    WCHAR *szTableName;
    WCHAR *szTemplateTableName;
    unsigned long ulPages;
    unsigned long ulDensity;
    JET_COLUMNCREATE_W *rgcolumncreate;
    unsigned long cColumns;
    JET_INDEXCREATE3_W *rgindexcreate;
    unsigned long cIndexes;
    WCHAR *szCallback;
    JET_CBTYP cbtyp;
    JET_GRBIT grbit;
    JET_SPACEHINTS * pSeqSpacehints;
    JET_SPACEHINTS * pLVSpacehints;
    unsigned long cbSeparateLV;
    JET_TABLEID tableid;
    unsigned long cCreated;
} JET_TABLECREATE4_W;
typedef struct tagJET_OPENTEMPORARYTABLE
{
    unsigned long cbStruct;
    const JET_COLUMNDEF *prgcolumndef;
    unsigned long ccolumn;
    JET_UNICODEINDEX *pidxunicode;
    JET_GRBIT grbit;
    JET_COLUMNID *prgcolumnid;
    unsigned long cbKeyMost;
    unsigned long cbVarSegMac;
    JET_TABLEID tableid;
} JET_OPENTEMPORARYTABLE;
typedef struct tagJET_OPENTEMPORARYTABLE2
{
    unsigned long cbStruct;
    const JET_COLUMNDEF *prgcolumndef;
    unsigned long ccolumn;
    JET_UNICODEINDEX2 *pidxunicode;
    JET_GRBIT grbit;
    JET_COLUMNID *prgcolumnid;
    unsigned long cbKeyMost;
    unsigned long cbVarSegMac;
    JET_TABLEID tableid;
} JET_OPENTEMPORARYTABLE2;
typedef struct
{
    unsigned long cbStruct;
    unsigned long ibLongValue;
    unsigned long itagSequence;
    JET_COLUMNID columnidNextTagged;
} JET_RETINFO;
typedef struct
{
    unsigned long cbStruct;
    unsigned long ibLongValue;
    unsigned long itagSequence;
} JET_SETINFO;
typedef struct
{
    unsigned long cbStruct;
    unsigned long centriesLT;
    unsigned long centriesInRange;
    unsigned long centriesTotal;
} JET_RECPOS;
typedef struct
{
    unsigned long cbStruct;
    JET_TABLEID tableid;
    unsigned long cRecord;
    JET_COLUMNID columnidBookmark;
} JET_RECORDLIST;
typedef struct
{
    unsigned long cbStruct;
    JET_TABLEID tableid;
    JET_GRBIT grbit;
} JET_INDEXRANGE;
typedef enum
{
    JET_relopEquals = 0,
    JET_relopPrefixEquals,
    JET_relopNotEquals,
    JET_relopLessThanOrEqual,
    JET_relopLessThan,
    JET_relopGreaterThanOrEqual,
    JET_relopGreaterThan,
    JET_relopBitmaskEqualsZero,
    JET_relopBitmaskNotEqualsZero,
} JET_RELOP;
typedef struct
{
    JET_COLUMNID columnid;
    JET_RELOP relop;
    void * pv;
    unsigned long cb;
    JET_GRBIT grbit;
} JET_INDEX_COLUMN;
typedef struct
{
    JET_INDEX_COLUMN * rgStartColumns;
    unsigned long cStartColumns;
    JET_INDEX_COLUMN * rgEndColumns;
    unsigned long cEndColumns;
} JET_INDEX_RANGE;
#include <pshpack1.h>
typedef struct
{
    char bSeconds;
    char bMinutes;
    char bHours;
    char bDay;
    char bMonth;
    char bYear;
    union
    {
        char bFiller1;
        struct
        {
            unsigned char fTimeIsUTC:1;
            unsigned char bMillisecondsLow:7;
        };
    };
    union
    {
        char bFiller2;
        struct
        {
            unsigned char fReserved:1;
            unsigned char bMillisecondsHigh:3;
            unsigned char fUnused:4;
        };
    };
} JET_LOGTIME;
typedef struct
{
    char bSeconds;
    char bMinutes;
    char bHours;
    char bDay;
    char bMonth;
    char bYear;
    union
    {
        char bFiller1;
        struct
        {
            unsigned char fTimeIsUTC:1;
            unsigned char bMillisecondsLow:7;
        };
    };
    union
    {
        char bFiller2;
        struct
        {
            unsigned char fOSSnapshot:1;
            unsigned char bMillisecondsHigh:3;
            unsigned char fReserved:4;
        };
    };
} JET_BKLOGTIME;
typedef struct
{
    unsigned short ib;
    unsigned short isec;
    long lGeneration;
} JET_LGPOS;
typedef struct
{
    unsigned long ulRandom;
    JET_LOGTIME logtimeCreate;
    char szComputerName[ JET_MAX_COMPUTERNAME_LENGTH + 1 ];
} JET_SIGNATURE;
typedef struct
{
    JET_LGPOS lgposMark;
    union
    {
        JET_LOGTIME logtimeMark;
        JET_BKLOGTIME bklogtimeMark;
    };
    unsigned long genLow;
    unsigned long genHigh;
} JET_BKINFO;
#include <poppack.h>
typedef struct
{
    unsigned long ulVersion;
    unsigned long ulUpdate;
    JET_SIGNATURE signDb;
    unsigned long dbstate;
    JET_LGPOS lgposConsistent;
    JET_LOGTIME logtimeConsistent;
    JET_LOGTIME logtimeAttach;
    JET_LGPOS lgposAttach;
    JET_LOGTIME logtimeDetach;
    JET_LGPOS lgposDetach;
    JET_SIGNATURE signLog;
    JET_BKINFO bkinfoFullPrev;
    JET_BKINFO bkinfoIncPrev;
    JET_BKINFO bkinfoFullCur;
    unsigned long fShadowingDisabled;
    unsigned long fUpgradeDb;
    unsigned long dwMajorVersion;
    unsigned long dwMinorVersion;
    unsigned long dwBuildNumber;
    long lSPNumber;
    unsigned long cbPageSize;
} JET_DBINFOMISC;
typedef struct
{
    unsigned long ulVersion;
    unsigned long ulUpdate;
    JET_SIGNATURE signDb;
    unsigned long dbstate;
    JET_LGPOS lgposConsistent;
    JET_LOGTIME logtimeConsistent;
    JET_LOGTIME logtimeAttach;
    JET_LGPOS lgposAttach;
    JET_LOGTIME logtimeDetach;
    JET_LGPOS lgposDetach;
    JET_SIGNATURE signLog;
    JET_BKINFO bkinfoFullPrev;
    JET_BKINFO bkinfoIncPrev;
    JET_BKINFO bkinfoFullCur;
    unsigned long fShadowingDisabled;
    unsigned long fUpgradeDb;
    unsigned long dwMajorVersion;
    unsigned long dwMinorVersion;
    unsigned long dwBuildNumber;
    long lSPNumber;
    unsigned long cbPageSize;
    unsigned long genMinRequired;
    unsigned long genMaxRequired;
    JET_LOGTIME logtimeGenMaxCreate;
    unsigned long ulRepairCount;
    JET_LOGTIME logtimeRepair;
    unsigned long ulRepairCountOld;
    unsigned long ulECCFixSuccess;
    JET_LOGTIME logtimeECCFixSuccess;
    unsigned long ulECCFixSuccessOld;
    unsigned long ulECCFixFail;
    JET_LOGTIME logtimeECCFixFail;
    unsigned long ulECCFixFailOld;
    unsigned long ulBadChecksum;
    JET_LOGTIME logtimeBadChecksum;
    unsigned long ulBadChecksumOld;
} JET_DBINFOMISC2;
typedef struct
{
    unsigned long ulVersion;
    unsigned long ulUpdate;
    JET_SIGNATURE signDb;
    unsigned long dbstate;
    JET_LGPOS lgposConsistent;
    JET_LOGTIME logtimeConsistent;
    JET_LOGTIME logtimeAttach;
    JET_LGPOS lgposAttach;
    JET_LOGTIME logtimeDetach;
    JET_LGPOS lgposDetach;
    JET_SIGNATURE signLog;
    JET_BKINFO bkinfoFullPrev;
    JET_BKINFO bkinfoIncPrev;
    JET_BKINFO bkinfoFullCur;
    unsigned long fShadowingDisabled;
    unsigned long fUpgradeDb;
    unsigned long dwMajorVersion;
    unsigned long dwMinorVersion;
    unsigned long dwBuildNumber;
    long lSPNumber;
    unsigned long cbPageSize;
    unsigned long genMinRequired;
    unsigned long genMaxRequired;
    JET_LOGTIME logtimeGenMaxCreate;
    unsigned long ulRepairCount;
    JET_LOGTIME logtimeRepair;
    unsigned long ulRepairCountOld;
    unsigned long ulECCFixSuccess;
    JET_LOGTIME logtimeECCFixSuccess;
    unsigned long ulECCFixSuccessOld;
    unsigned long ulECCFixFail;
    JET_LOGTIME logtimeECCFixFail;
    unsigned long ulECCFixFailOld;
    unsigned long ulBadChecksum;
    JET_LOGTIME logtimeBadChecksum;
    unsigned long ulBadChecksumOld;
    unsigned long genCommitted;
} JET_DBINFOMISC3;
typedef struct
{
    unsigned long ulVersion;
    unsigned long ulUpdate;
    JET_SIGNATURE signDb;
    unsigned long dbstate;
    JET_LGPOS lgposConsistent;
    JET_LOGTIME logtimeConsistent;
    JET_LOGTIME logtimeAttach;
    JET_LGPOS lgposAttach;
    JET_LOGTIME logtimeDetach;
    JET_LGPOS lgposDetach;
    JET_SIGNATURE signLog;
    JET_BKINFO bkinfoFullPrev;
    JET_BKINFO bkinfoIncPrev;
    JET_BKINFO bkinfoFullCur;
    unsigned long fShadowingDisabled;
    unsigned long fUpgradeDb;
    unsigned long dwMajorVersion;
    unsigned long dwMinorVersion;
    unsigned long dwBuildNumber;
    long lSPNumber;
    unsigned long cbPageSize;
    unsigned long genMinRequired;
    unsigned long genMaxRequired;
    JET_LOGTIME logtimeGenMaxCreate;
    unsigned long ulRepairCount;
    JET_LOGTIME logtimeRepair;
    unsigned long ulRepairCountOld;
    unsigned long ulECCFixSuccess;
    JET_LOGTIME logtimeECCFixSuccess;
    unsigned long ulECCFixSuccessOld;
    unsigned long ulECCFixFail;
    JET_LOGTIME logtimeECCFixFail;
    unsigned long ulECCFixFailOld;
    unsigned long ulBadChecksum;
    JET_LOGTIME logtimeBadChecksum;
    unsigned long ulBadChecksumOld;
    unsigned long genCommitted;
    JET_BKINFO bkinfoCopyPrev;
    JET_BKINFO bkinfoDiffPrev;
} JET_DBINFOMISC4;
struct JET_THREADSTATS
{
    unsigned long cbStruct;
    unsigned long cPageReferenced;
    unsigned long cPageRead;
    unsigned long cPagePreread;
    unsigned long cPageDirtied;
    unsigned long cPageRedirtied;
    unsigned long cLogRecord;
    unsigned long cbLogRecord;
};
struct JET_THREADSTATS2
{
    unsigned long cbStruct;
    unsigned long cPageReferenced;
    unsigned long cPageRead;
    unsigned long cPagePreread;
    unsigned long cPageDirtied;
    unsigned long cPageRedirtied;
    unsigned long cLogRecord;
    unsigned long cbLogRecord;
    unsigned __int64 cusecPageCacheMiss;
    unsigned long cPageCacheMiss;
};
struct JET_THREADSTATS3
{
    unsigned long cbStruct;
    unsigned long cPageReferenced;
    unsigned long cPageRead;
    unsigned long cPagePreread;
    unsigned long cPageDirtied;
    unsigned long cPageRedirtied;
    unsigned long cLogRecord;
    unsigned long cbLogRecord;
    unsigned __int64 cusecPageCacheMiss;
    unsigned long cPageCacheMiss;
    unsigned long cSeparatedLongValueRead;
    unsigned __int64 cusecLongValuePageCacheMiss;
    unsigned long cLongValuePageCacheMiss;
};
typedef struct
{
    unsigned long cbStruct;
    JET_RSTMAP_A * rgrstmap;
    long crstmap;
    JET_LGPOS lgposStop;
    JET_LOGTIME logtimeStop;
    JET_PFNSTATUS pfnStatus;
} JET_RSTINFO_A;
typedef struct
{
    unsigned long cbStruct;
    JET_RSTMAP_W * rgrstmap;
    long crstmap;
    JET_LGPOS lgposStop;
    JET_LOGTIME logtimeStop;
    JET_PFNSTATUS pfnStatus;
} JET_RSTINFO_W;
typedef enum
{
    JET_errcatUnknown = 0,
    JET_errcatError,
    JET_errcatOperation,
    JET_errcatFatal,
    JET_errcatIO,
    JET_errcatResource,
    JET_errcatMemory,
    JET_errcatQuota,
    JET_errcatDisk,
    JET_errcatData,
    JET_errcatCorruption,
    JET_errcatInconsistent,
    JET_errcatFragmentation,
    JET_errcatApi,
    JET_errcatUsage,
    JET_errcatState,
    JET_errcatObsolete,
    JET_errcatMax,
} JET_ERRCAT;
typedef struct
{
    unsigned long cbStruct;
    JET_ERR errValue;
    JET_ERRCAT errcatMostSpecific;
    unsigned char rgCategoricalHierarchy[8];
    unsigned long lSourceLine;
    WCHAR rgszSourceFile[64];
} JET_ERRINFOBASIC_W;
typedef struct
{
    JET_SIGNATURE signLog;
    int reserved;
    __int64 commitId;
} JET_COMMIT_ID;
typedef JET_ERR (JET_API *JET_PFNDURABLECOMMITCALLBACK)(
    _In_ JET_INSTANCE instance,
    _In_ JET_COMMIT_ID *pCommitIdSeen,
    _In_ JET_GRBIT grbit );
typedef enum
{
    JET_IndexCheckingOff = 0,
    JET_IndexCheckingOn = 1,
    JET_IndexCheckingDeferToOpenTable = 2,
    JET_IndexCheckingMax = 3,
} JET_INDEXCHECKING;
typedef struct
{
    unsigned long ulUserID;
    unsigned char nOperationID;
    unsigned char nOperationType;
    unsigned char nClientType;
    unsigned char fFlags;
} JET_OPERATIONCONTEXT;
typedef struct
{
    JET_COLUMNID columnid;
    const void *pvData;
    unsigned long cbData;
    JET_GRBIT grbit;
    unsigned long ibLongValue;
    unsigned long itagSequence;
    JET_ERR err;
} JET_SETCOLUMN;
typedef struct
{
    unsigned long paramid;
    JET_API_PTR lParam;
    const char *sz;
    JET_ERR err;
} JET_SETSYSPARAM_A;
typedef struct
{
    unsigned long paramid;
    JET_API_PTR lParam;
    const WCHAR *sz;
    JET_ERR err;
} JET_SETSYSPARAM_W;
typedef struct
{
    JET_COLUMNID columnid;
    void *pvData;
    unsigned long cbData;
    unsigned long cbActual;
    JET_GRBIT grbit;
    unsigned long ibLongValue;
    unsigned long itagSequence;
    JET_COLUMNID columnidNextTagged;
    JET_ERR err;
} JET_RETRIEVECOLUMN;
typedef struct
{
    JET_COLUMNID columnid;
    unsigned long ctagSequence;
    unsigned long* rgtagSequence;
} JET_ENUMCOLUMNID;
typedef struct
{
    unsigned long itagSequence;
    JET_ERR err;
    unsigned long cbData;
    void* pvData;
} JET_ENUMCOLUMNVALUE;
typedef struct
{
    JET_COLUMNID columnid;
    JET_ERR err;
    union
    {
        struct
        {
            unsigned long cEnumColumnValue;
            JET_ENUMCOLUMNVALUE* rgEnumColumnValue;
        };
        struct
        {
            unsigned long cbData;
            void* pvData;
        };
    };
} JET_ENUMCOLUMN;
typedef void* (JET_API *JET_PFNREALLOC)(
    _In_opt_ void * pvContext,
    _In_opt_ void * pv,
    _In_ unsigned long cb );
typedef struct
{
    unsigned __int64 cbData;
    unsigned __int64 cbLongValueData;
    unsigned __int64 cbOverhead;
    unsigned __int64 cbLongValueOverhead;
    unsigned __int64 cNonTaggedColumns;
    unsigned __int64 cTaggedColumns;
    unsigned __int64 cLongValues;
    unsigned __int64 cMultiValues;
} JET_RECSIZE;
typedef struct
{
    unsigned __int64 cbData;
    unsigned __int64 cbLongValueData;
    unsigned __int64 cbOverhead;
    unsigned __int64 cbLongValueOverhead;
    unsigned __int64 cNonTaggedColumns;
    unsigned __int64 cTaggedColumns;
    unsigned __int64 cLongValues;
    unsigned __int64 cMultiValues;
    unsigned __int64 cCompressedColumns;
    unsigned __int64 cbDataCompressed;
    unsigned __int64 cbLongValueDataCompressed;
} JET_RECSIZE2;
#pragma warning(pop)
extern "C" {
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetInit(
    _Inout_opt_ JET_INSTANCE * pinstance );
JET_ERR JET_API
JetInit2(
    _Inout_opt_ JET_INSTANCE * pinstance,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetInit3A(
    _Inout_opt_ JET_INSTANCE * pinstance,
    _In_opt_ JET_RSTINFO_A * prstInfo,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetInit3W(
    _Inout_opt_ JET_INSTANCE * pinstance,
    _In_opt_ JET_RSTINFO_W * prstInfo,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateInstanceA(
    _Out_ JET_INSTANCE * pinstance,
    _In_opt_ JET_PCSTR szInstanceName );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateInstanceW(
    _Out_ JET_INSTANCE * pinstance,
    _In_opt_ JET_PCWSTR szInstanceName );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateInstance2A(
    _Out_ JET_INSTANCE * pinstance,
    _In_opt_ JET_PCSTR szInstanceName,
    _In_opt_ JET_PCSTR szDisplayName,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateInstance2W(
    _Out_ JET_INSTANCE * pinstance,
    _In_opt_ JET_PCWSTR szInstanceName,
    _In_opt_ JET_PCWSTR szDisplayName,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetInstanceMiscInfo(
    _In_ JET_INSTANCE instance,
    _Out_writes_bytes_( cbMax ) void * pvResult,
    _In_ unsigned long cbMax,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetTerm(
    _In_ JET_INSTANCE instance );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetTerm2(
    _In_ JET_INSTANCE instance,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetStopService();
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetStopServiceInstance(
    _In_ JET_INSTANCE instance );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetStopServiceInstance2(
    _In_ JET_INSTANCE instance,
    _In_ const JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetStopBackup();
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetStopBackupInstance(
    _In_ JET_INSTANCE instance );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetSystemParameterA(
    _Inout_opt_ JET_INSTANCE * pinstance,
    _In_opt_ JET_SESID sesid,
    _In_ unsigned long paramid,
    _In_opt_ JET_API_PTR lParam,
    _In_opt_ JET_PCSTR szParam );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetSystemParameterW(
    _Inout_opt_ JET_INSTANCE * pinstance,
    _In_opt_ JET_SESID sesid,
    _In_ unsigned long paramid,
    _In_opt_ JET_API_PTR lParam,
    _In_opt_ JET_PCWSTR szParam );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetSystemParameterA(
    _In_ JET_INSTANCE instance,
    _In_opt_ JET_SESID sesid,
    _In_ unsigned long paramid,
    _Out_opt_ JET_API_PTR * plParam,
    _Out_writes_bytes_opt_( cbMax ) JET_PSTR szParam,
    _In_ unsigned long cbMax );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetSystemParameterW(
    _In_ JET_INSTANCE instance,
    _In_opt_ JET_SESID sesid,
    _In_ unsigned long paramid,
    _Out_opt_ JET_API_PTR * plParam,
    _Out_writes_bytes_opt_( cbMax ) JET_PWSTR szParam,
    _In_ unsigned long cbMax );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetEnableMultiInstanceA(
    _In_reads_opt_( csetsysparam ) JET_SETSYSPARAM_A * psetsysparam,
    _In_ unsigned long csetsysparam,
    _Out_opt_ unsigned long * pcsetsucceed );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetEnableMultiInstanceW(
    _In_reads_opt_( csetsysparam ) JET_SETSYSPARAM_W * psetsysparam,
    _In_ unsigned long csetsysparam,
    _Out_opt_ unsigned long * pcsetsucceed );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetThreadStats(
    _Out_writes_bytes_( cbMax ) void * pvResult,
    _In_ unsigned long cbMax );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API JetBeginSessionA(
    _In_ JET_INSTANCE instance,
    _Out_ JET_SESID * psesid,
    _In_opt_ JET_PCSTR szUserName,
    _In_opt_ JET_PCSTR szPassword );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API JetBeginSessionW(
    _In_ JET_INSTANCE instance,
    _Out_ JET_SESID * psesid,
    _In_opt_ JET_PCWSTR szUserName,
    _In_opt_ JET_PCWSTR szPassword );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDupSession(
    _In_ JET_SESID sesid,
    _Out_ JET_SESID * psesid );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetEndSession(
    _In_ JET_SESID sesid,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetVersion(
    _In_ JET_SESID sesid,
    _Out_ unsigned long * pwVersion );
JET_ERR JET_API
JetIdle(
    _In_ JET_SESID sesid,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateDatabaseA(
    _In_ JET_SESID sesid,
    _In_ JET_PCSTR szFilename,
    _In_opt_ JET_PCSTR szConnect,
    _Out_ JET_DBID * pdbid,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateDatabaseW(
    _In_ JET_SESID sesid,
    _In_ JET_PCWSTR szFilename,
    _In_opt_ JET_PCWSTR szConnect,
    _Out_ JET_DBID * pdbid,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateDatabase2A(
    _In_ JET_SESID sesid,
    _In_ JET_PCSTR szFilename,
    _In_ const unsigned long cpgDatabaseSizeMax,
    _Out_ JET_DBID * pdbid,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API JetCreateDatabase2W(
    _In_ JET_SESID sesid,
    _In_ JET_PCWSTR szFilename,
    _In_ const unsigned long cpgDatabaseSizeMax,
    _Out_ JET_DBID * pdbid,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetAttachDatabaseA(
    _In_ JET_SESID sesid,
    _In_ JET_PCSTR szFilename,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetAttachDatabaseW(
    _In_ JET_SESID sesid,
    _In_ JET_PCWSTR szFilename,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetAttachDatabase2A(
    _In_ JET_SESID sesid,
    _In_ JET_PCSTR szFilename,
    _In_ const unsigned long cpgDatabaseSizeMax,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetAttachDatabase2W(
    _In_ JET_SESID sesid,
    _In_ JET_PCWSTR szFilename,
    _In_ const unsigned long cpgDatabaseSizeMax,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDetachDatabaseA(
    _In_ JET_SESID sesid,
    _In_opt_ JET_PCSTR szFilename );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDetachDatabaseW(
    _In_ JET_SESID sesid,
    _In_opt_ JET_PCWSTR szFilename );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDetachDatabase2A(
    _In_ JET_SESID sesid,
    _In_opt_ JET_PCSTR szFilename,
    _In_ JET_GRBIT grbit);
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDetachDatabase2W(
    _In_ JET_SESID sesid,
    _In_opt_ JET_PCWSTR szFilename,
    _In_ JET_GRBIT grbit);
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetObjectInfoA(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_OBJTYP objtyp,
    _In_opt_ JET_PCSTR szContainerName,
    _In_opt_ JET_PCSTR szObjectName,
    _Out_writes_bytes_( cbMax ) void * pvResult,
    _In_ unsigned long cbMax,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetObjectInfoW(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_OBJTYP objtyp,
    _In_opt_ JET_PCWSTR szContainerName,
    _In_opt_ JET_PCWSTR szObjectName,
    _Out_writes_bytes_( cbMax ) void * pvResult,
    _In_ unsigned long cbMax,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetTableInfoA(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Out_writes_bytes_( cbMax ) void * pvResult,
    _In_ unsigned long cbMax,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetTableInfoW(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Out_writes_bytes_( cbMax ) void * pvResult,
    _In_ unsigned long cbMax,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateTableA(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_PCSTR szTableName,
    _In_ unsigned long lPages,
    _In_ unsigned long lDensity,
    _Out_ JET_TABLEID * ptableid );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateTableW(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_PCWSTR szTableName,
    _In_ unsigned long lPages,
    _In_ unsigned long lDensity,
    _Out_ JET_TABLEID * ptableid );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateTableColumnIndexA(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _Inout_ JET_TABLECREATE_A * ptablecreate );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateTableColumnIndexW(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _Inout_ JET_TABLECREATE_W * ptablecreate );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateTableColumnIndex2A(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _Inout_ JET_TABLECREATE2_A * ptablecreate );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateTableColumnIndex2W(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _Inout_ JET_TABLECREATE2_W * ptablecreate );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateTableColumnIndex3A(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _Inout_ JET_TABLECREATE3_A * ptablecreate );
JET_ERR JET_API
JetCreateTableColumnIndex3W(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _Inout_ JET_TABLECREATE3_W * ptablecreate );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateTableColumnIndex4A(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _Inout_ JET_TABLECREATE4_A * ptablecreate );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateTableColumnIndex4W(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _Inout_ JET_TABLECREATE4_W * ptablecreate );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDeleteTableA(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_PCSTR szTableName );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDeleteTableW(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_PCWSTR szTableName );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetRenameTableA(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_PCSTR szName,
    _In_ JET_PCSTR szNameNew );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API JetRenameTableW(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_PCWSTR szName,
    _In_ JET_PCWSTR szNameNew );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetTableColumnInfoA(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_opt_ JET_PCSTR szColumnName,
    _Out_writes_bytes_( cbMax ) void * pvResult,
    _In_ unsigned long cbMax,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API JetGetTableColumnInfoW(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_opt_ JET_PCWSTR szColumnName,
    _Out_writes_bytes_( cbMax ) void * pvResult,
    _In_ unsigned long cbMax,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetColumnInfoA(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_PCSTR szTableName,
    _In_opt_ JET_PCSTR pColumnNameOrId,
    _Out_writes_bytes_( cbMax ) void * pvResult,
    _In_ unsigned long cbMax,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API JetGetColumnInfoW(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_PCWSTR szTableName,
    _In_opt_ JET_PCWSTR pwColumnNameOrId,
    _Out_writes_bytes_( cbMax ) void * pvResult,
    _In_ unsigned long cbMax,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetAddColumnA(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_PCSTR szColumnName,
    _In_ const JET_COLUMNDEF * pcolumndef,
    _In_reads_bytes_opt_( cbDefault ) const void * pvDefault,
    _In_ unsigned long cbDefault,
    _Out_opt_ JET_COLUMNID * pcolumnid );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API JetAddColumnW(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_PCWSTR szColumnName,
    _In_ const JET_COLUMNDEF * pcolumndef,
    _In_reads_bytes_opt_( cbDefault ) const void * pvDefault,
    _In_ unsigned long cbDefault,
    _Out_opt_ JET_COLUMNID * pcolumnid );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDeleteColumnA(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_PCSTR szColumnName );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDeleteColumnW(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_PCWSTR szColumnName );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDeleteColumn2A(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_PCSTR szColumnName,
    _In_ const JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDeleteColumn2W(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_PCWSTR szColumnName,
    _In_ const JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetRenameColumnA(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_PCSTR szName,
    _In_ JET_PCSTR szNameNew,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetRenameColumnW(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_PCWSTR szName,
    _In_ JET_PCWSTR szNameNew,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetColumnDefaultValueA(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_PCSTR szTableName,
    _In_ JET_PCSTR szColumnName,
    _In_reads_bytes_( cbData ) const void * pvData,
    _In_ const unsigned long cbData,
    _In_ const JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetColumnDefaultValueW(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_PCWSTR szTableName,
    _In_ JET_PCWSTR szColumnName,
    _In_reads_bytes_( cbData ) const void * pvData,
    _In_ const unsigned long cbData,
    _In_ const JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetTableIndexInfoA(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_opt_ JET_PCSTR szIndexName,
    _Out_writes_bytes_( cbResult ) void * pvResult,
    _In_ unsigned long cbResult,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetTableIndexInfoW(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_opt_ JET_PCWSTR szIndexName,
    _Out_writes_bytes_( cbResult ) void * pvResult,
    _In_ unsigned long cbResult,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetIndexInfoA(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_PCSTR szTableName,
    _In_opt_ JET_PCSTR szIndexName,
    _Out_writes_bytes_( cbResult ) void * pvResult,
    _In_ unsigned long cbResult,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetIndexInfoW(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_PCWSTR szTableName,
    _In_opt_ JET_PCWSTR szIndexName,
    _Out_writes_bytes_( cbResult ) void * pvResult,
    _In_ unsigned long cbResult,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateIndexA(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_PCSTR szIndexName,
    _In_ JET_GRBIT grbit,
    _In_reads_bytes_( cbKey ) const char * szKey,
    _In_ unsigned long cbKey,
    _In_ unsigned long lDensity );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateIndexW(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_PCWSTR szIndexName,
    _In_ JET_GRBIT grbit,
    _In_reads_bytes_( cbKey ) const WCHAR * szKey,
    _In_ unsigned long cbKey,
    _In_ unsigned long lDensity );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateIndex2A(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_reads_( cIndexCreate ) JET_INDEXCREATE_A * pindexcreate,
    _In_ unsigned long cIndexCreate );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateIndex2W(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_reads_( cIndexCreate ) JET_INDEXCREATE_W * pindexcreate,
    _In_ unsigned long cIndexCreate );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateIndex3A(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_reads_( cIndexCreate ) JET_INDEXCREATE2_A *pindexcreate,
    _In_ unsigned long cIndexCreate );
JET_ERR JET_API
JetCreateIndex3W(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_reads_( cIndexCreate ) JET_INDEXCREATE2_W *pindexcreate,
    _In_ unsigned long cIndexCreate );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateIndex4A(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_reads_( cIndexCreate ) JET_INDEXCREATE3_A *pindexcreate,
    _In_ unsigned long cIndexCreate );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCreateIndex4W(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_reads_( cIndexCreate ) JET_INDEXCREATE3_W *pindexcreate,
    _In_ unsigned long cIndexCreate );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDeleteIndexA(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_PCSTR szIndexName );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDeleteIndexW(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_PCWSTR szIndexName );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetBeginTransaction(
    _In_ JET_SESID sesid );
JET_ERR JET_API
JetBeginTransaction2(
    _In_ JET_SESID sesid,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetBeginTransaction3(
    _In_ JET_SESID sesid,
    _In_ __int64 trxid,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCommitTransaction(
    _In_ JET_SESID sesid,
    _In_ JET_GRBIT grbit );
JET_ERR JET_API
JetCommitTransaction2(
    _In_ JET_SESID sesid,
    _In_ JET_GRBIT grbit,
    _In_ unsigned long cmsecDurableCommit,
    _Out_opt_ JET_COMMIT_ID * pCommitId );
JET_ERR JET_API
JetRollback(
    _In_ JET_SESID sesid,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API JetGetDatabaseInfoA(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _Out_writes_bytes_( cbMax ) void * pvResult,
    _In_ unsigned long cbMax,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetDatabaseInfoW(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _Out_writes_bytes_( cbMax ) void * pvResult,
    _In_ unsigned long cbMax,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetDatabaseFileInfoA(
    _In_ JET_PCSTR szDatabaseName,
    _Out_writes_bytes_( cbMax ) void * pvResult,
    _In_ unsigned long cbMax,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetDatabaseFileInfoW(
    _In_ JET_PCWSTR szDatabaseName,
    _Out_writes_bytes_( cbMax ) void * pvResult,
    _In_ unsigned long cbMax,
    _In_ unsigned long InfoLevel );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetOpenDatabaseA(
    _In_ JET_SESID sesid,
    _In_ JET_PCSTR szFilename,
    _In_opt_ JET_PCSTR szConnect,
    _Out_ JET_DBID* pdbid,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetOpenDatabaseW(
    _In_ JET_SESID sesid,
    _In_ JET_PCWSTR szFilename,
    _In_opt_ JET_PCWSTR szConnect,
    _Out_ JET_DBID* pdbid,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCloseDatabase(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetOpenTableA(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_PCSTR szTableName,
    _In_reads_bytes_opt_( cbParameters ) const void * pvParameters,
    _In_ unsigned long cbParameters,
    _In_ JET_GRBIT grbit,
    _Out_ JET_TABLEID * ptableid );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetOpenTableW(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ JET_PCWSTR szTableName,
    _In_reads_bytes_opt_( cbParameters ) const void * pvParameters,
    _In_ unsigned long cbParameters,
    _In_ JET_GRBIT grbit,
    _Out_ JET_TABLEID * ptableid );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetTableSequential(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_GRBIT grbit );
JET_ERR JET_API
JetResetTableSequential(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCloseTable(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid );
JET_ERR JET_API
JetDelete(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetUpdate(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Out_writes_bytes_to_opt_( cbBookmark, *pcbActual ) void * pvBookmark,
    _In_ unsigned long cbBookmark,
    _Out_opt_ unsigned long * pcbActual );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetUpdate2(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Out_writes_bytes_to_opt_( cbBookmark, *pcbActual ) void * pvBookmark,
    _In_ unsigned long cbBookmark,
    _Out_opt_ unsigned long * pcbActual,
    _In_ const JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetEscrowUpdate(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_COLUMNID columnid,
    _In_reads_bytes_( cbMax ) void * pv,
    _In_ unsigned long cbMax,
    _Out_writes_bytes_to_opt_( cbOldMax, *pcbOldActual ) void * pvOld,
    _In_ unsigned long cbOldMax,
    _Out_opt_ unsigned long * pcbOldActual,
    _In_ JET_GRBIT grbit );
JET_ERR JET_API
JetRetrieveColumn(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_COLUMNID columnid,
    _Out_writes_bytes_to_opt_( cbData, min( cbData, *pcbActual ) ) void * pvData,
    _In_ unsigned long cbData,
    _Out_opt_ unsigned long * pcbActual,
    _In_ JET_GRBIT grbit,
    _Inout_opt_ JET_RETINFO * pretinfo );
JET_ERR JET_API
JetRetrieveColumns(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Inout_updates_opt_( cretrievecolumn ) JET_RETRIEVECOLUMN * pretrievecolumn,
    _In_ unsigned long cretrievecolumn );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetEnumerateColumns(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ unsigned long cEnumColumnId,
    _In_reads_opt_( cEnumColumnId ) JET_ENUMCOLUMNID * rgEnumColumnId,
    _Out_ unsigned long * pcEnumColumn,
    _Outptr_result_buffer_( *pcEnumColumn ) JET_ENUMCOLUMN ** prgEnumColumn,
    _In_ JET_PFNREALLOC pfnRealloc,
    _In_opt_ void * pvReallocContext,
    _In_ unsigned long cbDataMost,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetRecordSize(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Out_ JET_RECSIZE * precsize,
    _In_ const JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetRecordSize2(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Out_ JET_RECSIZE2 * precsize,
    _In_ const JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetColumn(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_COLUMNID columnid,
    _In_reads_bytes_opt_( cbData ) const void * pvData,
    _In_ unsigned long cbData,
    _In_ JET_GRBIT grbit,
    _In_opt_ JET_SETINFO * psetinfo );
JET_ERR JET_API
JetSetColumns(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_reads_opt_( csetcolumn ) JET_SETCOLUMN * psetcolumn,
    _In_ unsigned long csetcolumn );
JET_ERR JET_API
JetPrepareUpdate(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ unsigned long prep );
JET_ERR JET_API
JetGetRecordPosition(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Out_writes_bytes_( cbRecpos ) JET_RECPOS * precpos,
    _In_ unsigned long cbRecpos );
JET_ERR JET_API
JetGotoPosition(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_RECPOS * precpos );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetCursorInfo(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Out_writes_bytes_( cbMax ) void * pvResult,
    _In_ unsigned long cbMax,
    _In_ unsigned long InfoLevel );
JET_ERR JET_API
JetDupCursor(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Out_ JET_TABLEID * ptableid,
    _In_ JET_GRBIT grbit );
JET_ERR JET_API
JetGetCurrentIndexA(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Out_writes_bytes_( cbIndexName ) JET_PSTR szIndexName,
    _In_ unsigned long cbIndexName );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetCurrentIndexW(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Out_writes_bytes_( cbIndexName ) JET_PWSTR szIndexName,
    _In_ unsigned long cbIndexName );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetCurrentIndexA(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_opt_ JET_PCSTR szIndexName );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetCurrentIndexW(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_opt_ JET_PCWSTR szIndexName );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetCurrentIndex2A(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_opt_ JET_PCSTR szIndexName,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetCurrentIndex2W(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_opt_ JET_PCWSTR szIndexName,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetCurrentIndex3A(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_opt_ JET_PCSTR szIndexName,
    _In_ JET_GRBIT grbit,
    _In_ unsigned long itagSequence );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetCurrentIndex3W(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_opt_ JET_PCWSTR szIndexName,
    _In_ JET_GRBIT grbit,
    _In_ unsigned long itagSequence );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetCurrentIndex4A(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_opt_ JET_PCSTR szIndexName,
    _In_opt_ JET_INDEXID * pindexid,
    _In_ JET_GRBIT grbit,
    _In_ unsigned long itagSequence );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetCurrentIndex4W(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_opt_ JET_PCWSTR szIndexName,
    _In_opt_ JET_INDEXID * pindexid,
    _In_ JET_GRBIT grbit,
    _In_ unsigned long itagSequence );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetMove(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ long cRow,
    _In_ JET_GRBIT grbit );
JET_ERR JET_API
JetSetCursorFilter(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_reads_( cColumnFilters ) JET_INDEX_COLUMN *rgColumnFilters,
    _In_ unsigned long cColumnFilters,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetLock(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetMakeKey(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_reads_bytes_opt_( cbData ) const void * pvData,
    _In_ unsigned long cbData,
    _In_ JET_GRBIT grbit );
JET_ERR JET_API
JetSeek(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetPrereadKeys(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_reads_(ckeys) const void ** rgpvKeys,
    _In_reads_(ckeys) const unsigned long * rgcbKeys,
    _In_ long ckeys,
    _Out_opt_ long * pckeysPreread,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetPrereadIndexRanges(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_reads_(cIndexRanges) const JET_INDEX_RANGE * const rgIndexRanges,
    _In_ const unsigned long cIndexRanges,
    _Out_opt_ unsigned long * const pcRangesPreread,
    _In_reads_(ccolumnidPreread) const JET_COLUMNID * const rgcolumnidPreread,
    _In_ const unsigned long ccolumnidPreread,
    _In_ JET_GRBIT grbit );
JET_ERR JET_API
JetGetBookmark(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Out_writes_bytes_to_opt_( cbMax, *pcbActual ) void * pvBookmark,
    _In_ unsigned long cbMax,
    _Out_opt_ unsigned long * pcbActual );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetSecondaryIndexBookmark(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Out_writes_bytes_to_opt_( cbSecondaryKeyMax, *pcbSecondaryKeyActual ) void * pvSecondaryKey,
    _In_ unsigned long cbSecondaryKeyMax,
    _Out_opt_ unsigned long * pcbSecondaryKeyActual,
    _Out_writes_bytes_to_opt_( cbPrimaryBookmarkMax, *pcbPrimaryBookmarkActual ) void * pvPrimaryBookmark,
    _In_ unsigned long cbPrimaryBookmarkMax,
    _Out_opt_ unsigned long * pcbPrimaryBookmarkActual,
    _In_ const JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCompactA(
    _In_ JET_SESID sesid,
    _In_ JET_PCSTR szDatabaseSrc,
    _In_ JET_PCSTR szDatabaseDest,
    _In_ JET_PFNSTATUS pfnStatus,
    _In_opt_ JET_CONVERT_A * pconvert,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCompactW(
    _In_ JET_SESID sesid,
    _In_ JET_PCWSTR szDatabaseSrc,
    _In_ JET_PCWSTR szDatabaseDest,
    _In_ JET_PFNSTATUS pfnStatus,
    _In_opt_ JET_CONVERT_W * pconvert,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDefragmentA(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_opt_ JET_PCSTR szTableName,
    _Inout_opt_ unsigned long * pcPasses,
    _Inout_opt_ unsigned long * pcSeconds,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDefragmentW(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_opt_ JET_PCWSTR szTableName,
    _Inout_opt_ unsigned long * pcPasses,
    _Inout_opt_ unsigned long * pcSeconds,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDefragment2A(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_opt_ JET_PCSTR szTableName,
    _Inout_opt_ unsigned long * pcPasses,
    _Inout_opt_ unsigned long * pcSeconds,
    _In_ JET_CALLBACK callback,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDefragment2W(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_opt_ JET_PCWSTR szTableName,
    _Inout_opt_ unsigned long * pcPasses,
    _Inout_opt_ unsigned long * pcSeconds,
    _In_ JET_CALLBACK callback,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDefragment3A(
    _In_ JET_SESID sesid,
    _In_ JET_PCSTR szDatabaseName,
    _In_opt_ JET_PCSTR szTableName,
    _Inout_opt_ unsigned long * pcPasses,
    _Inout_opt_ unsigned long * pcSeconds,
    _In_ JET_CALLBACK callback,
    _In_ void * pvContext,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetDefragment3W(
    _In_ JET_SESID sesid,
    _In_ JET_PCWSTR szDatabaseName,
    _In_opt_ JET_PCWSTR szTableName,
    _Inout_opt_ unsigned long * pcPasses,
    _Inout_opt_ unsigned long * pcSeconds,
    _In_ JET_CALLBACK callback,
    _In_ void * pvContext,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetDatabaseSizeA(
    _In_ JET_SESID sesid,
    _In_ JET_PCSTR szDatabaseName,
    _In_ unsigned long cpg,
    _Out_ unsigned long * pcpgReal );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetDatabaseSizeW(
    _In_ JET_SESID sesid,
    _In_ JET_PCWSTR szDatabaseName,
    _In_ unsigned long cpg,
    _Out_ unsigned long * pcpgReal );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGrowDatabase(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ unsigned long cpg,
    _In_ unsigned long * pcpgReal );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetResizeDatabase(
    _In_ JET_SESID sesid,
    _In_ JET_DBID dbid,
    _In_ unsigned long cpgTarget,
    _Out_ unsigned long * pcpgActual,
    _In_ const JET_GRBIT grbit );
JET_ERR JET_API
JetSetSessionContext(
    _In_ JET_SESID sesid,
    _In_ JET_API_PTR ulContext );
JET_ERR JET_API
JetResetSessionContext(
    _In_ JET_SESID sesid );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGotoBookmark(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_reads_bytes_( cbBookmark ) void * pvBookmark,
    _In_ unsigned long cbBookmark );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGotoSecondaryIndexBookmark(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_reads_bytes_( cbSecondaryKey ) void * pvSecondaryKey,
    _In_ unsigned long cbSecondaryKey,
    _In_reads_bytes_opt_( cbPrimaryBookmark ) void * pvPrimaryBookmark,
    _In_ unsigned long cbPrimaryBookmark,
    _In_ const JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetIntersectIndexes(
    _In_ JET_SESID sesid,
    _In_reads_( cindexrange ) JET_INDEXRANGE * rgindexrange,
    _In_ unsigned long cindexrange,
    _Inout_ JET_RECORDLIST * precordlist,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetComputeStats(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid );
JET_ERR JET_API
JetOpenTempTable(
    _In_ JET_SESID sesid,
    _In_reads_( ccolumn ) const JET_COLUMNDEF * prgcolumndef,
    _In_ unsigned long ccolumn,
    _In_ JET_GRBIT grbit,
    _Out_ JET_TABLEID * ptableid,
    _Out_writes_( ccolumn ) JET_COLUMNID * prgcolumnid );
JET_ERR JET_API
JetOpenTempTable2(
    _In_ JET_SESID sesid,
    _In_reads_( ccolumn ) const JET_COLUMNDEF * prgcolumndef,
    _In_ unsigned long ccolumn,
    _In_ unsigned long lcid,
    _In_ JET_GRBIT grbit,
    _Out_ JET_TABLEID * ptableid,
    _Out_writes_( ccolumn ) JET_COLUMNID * prgcolumnid );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetOpenTempTable3(
    _In_ JET_SESID sesid,
    _In_reads_( ccolumn ) const JET_COLUMNDEF * prgcolumndef,
    _In_ unsigned long ccolumn,
    _In_opt_ JET_UNICODEINDEX * pidxunicode,
    _In_ JET_GRBIT grbit,
    _Out_ JET_TABLEID * ptableid,
    _Out_writes_( ccolumn ) JET_COLUMNID * prgcolumnid );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetOpenTemporaryTable(
    _In_ JET_SESID sesid,
    _In_ JET_OPENTEMPORARYTABLE * popentemporarytable );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetOpenTemporaryTable2(
    _In_ JET_SESID sesid,
    _In_ JET_OPENTEMPORARYTABLE2 * popentemporarytable );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetBackupA(
    _In_ JET_PCSTR szBackupPath,
    _In_ JET_GRBIT grbit,
    _In_opt_ JET_PFNSTATUS pfnStatus );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetBackupW(
    _In_ JET_PCWSTR szBackupPath,
    _In_ JET_GRBIT grbit,
    _In_opt_ JET_PFNSTATUS pfnStatus );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetBackupInstanceA(
    _In_ JET_INSTANCE instance,
    _In_ JET_PCSTR szBackupPath,
    _In_ JET_GRBIT grbit,
    _In_opt_ JET_PFNSTATUS pfnStatus );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetBackupInstanceW(
    _In_ JET_INSTANCE instance,
    _In_ JET_PCWSTR szBackupPath,
    _In_ JET_GRBIT grbit,
    _In_opt_ JET_PFNSTATUS pfnStatus );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetRestoreA(
    _In_ JET_PCSTR szSource,
    _In_opt_ JET_PFNSTATUS pfn );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetRestoreW(
    _In_ JET_PCWSTR szSource,
    _In_opt_ JET_PFNSTATUS pfn );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetRestore2A(
    _In_ JET_PCSTR sz,
    _In_opt_ JET_PCSTR szDest,
    _In_opt_ JET_PFNSTATUS pfn );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetRestore2W(
    _In_ JET_PCWSTR sz,
    _In_opt_ JET_PCWSTR szDest,
    _In_opt_ JET_PFNSTATUS pfn );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetRestoreInstanceA(
    _In_ JET_INSTANCE instance,
    _In_ JET_PCSTR sz,
    _In_opt_ JET_PCSTR szDest,
    _In_opt_ JET_PFNSTATUS pfn );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetRestoreInstanceW(
    _In_ JET_INSTANCE instance,
    _In_ JET_PCWSTR sz,
    _In_opt_ JET_PCWSTR szDest,
    _In_opt_ JET_PFNSTATUS pfn );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetSetIndexRange(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableidSrc,
    _In_ JET_GRBIT grbit );
JET_ERR JET_API
JetIndexRecordCount(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Out_ unsigned long * pcrec,
    _In_ unsigned long crecMax );
JET_ERR JET_API
JetRetrieveKey(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Out_writes_bytes_to_opt_( cbMax, *pcbActual ) void * pvKey,
    _In_ unsigned long cbMax,
    _Out_opt_ unsigned long * pcbActual,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API JetBeginExternalBackup(
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API JetBeginExternalBackupInstance(
    _In_ JET_INSTANCE instance,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetAttachInfoA(
    _Out_writes_bytes_to_opt_( cbMax, *pcbActual ) JET_PSTR szzDatabases,
    _In_ unsigned long cbMax,
    _Out_opt_ unsigned long * pcbActual );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetAttachInfoW(
    _Out_writes_bytes_to_opt_( cbMax, *pcbActual ) JET_PWSTR wszzDatabases,
    _In_ unsigned long cbMax,
    _Out_opt_ unsigned long * pcbActual );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetAttachInfoInstanceA(
    _In_ JET_INSTANCE instance,
    _Out_writes_bytes_to_opt_( cbMax, *pcbActual ) JET_PSTR szzDatabases,
    _In_ unsigned long cbMax,
    _Out_opt_ unsigned long * pcbActual );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetAttachInfoInstanceW(
    _In_ JET_INSTANCE instance,
    _Out_writes_bytes_to_opt_( cbMax, *pcbActual ) JET_PWSTR szzDatabases,
    _In_ unsigned long cbMax,
    _Out_opt_ unsigned long * pcbActual );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetOpenFileA(
    _In_ JET_PCSTR szFileName,
    _Out_ JET_HANDLE * phfFile,
    _Out_ unsigned long * pulFileSizeLow,
    _Out_ unsigned long * pulFileSizeHigh );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetOpenFileW(
    _In_ JET_PCWSTR szFileName,
    _Out_ JET_HANDLE * phfFile,
    _Out_ unsigned long * pulFileSizeLow,
    _Out_ unsigned long * pulFileSizeHigh );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetOpenFileInstanceA(
    _In_ JET_INSTANCE instance,
    _In_ JET_PCSTR szFileName,
    _Out_ JET_HANDLE * phfFile,
    _Out_ unsigned long * pulFileSizeLow,
    _Out_ unsigned long * pulFileSizeHigh );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetOpenFileInstanceW(
    _In_ JET_INSTANCE instance,
    _In_ JET_PCWSTR szFileName,
    _Out_ JET_HANDLE * phfFile,
    _Out_ unsigned long * pulFileSizeLow,
    _Out_ unsigned long * pulFileSizeHigh );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetReadFile(
    _In_ JET_HANDLE hfFile,
    _Out_writes_bytes_to_( cb, *pcbActual ) void * pv,
    _In_ unsigned long cb,
    _Out_opt_ unsigned long * pcbActual );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetReadFileInstance(
    _In_ JET_INSTANCE instance,
    _In_ JET_HANDLE hfFile,
    _Out_writes_bytes_to_( cb, *pcbActual ) void * pv,
    _In_ unsigned long cb,
    _Out_opt_ unsigned long * pcbActual );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCloseFile(
    _In_ JET_HANDLE hfFile );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetCloseFileInstance(
    _In_ JET_INSTANCE instance,
    _In_ JET_HANDLE hfFile );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetLogInfoA(
    _Out_writes_bytes_to_opt_( cbMax, *pcbActual ) JET_PSTR szzLogs,
    _In_ unsigned long cbMax,
    _Out_opt_ unsigned long * pcbActual );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetLogInfoW(
        _Out_writes_bytes_to_opt_( cbMax, *pcbActual ) JET_PWSTR szzLogs,
        _In_ unsigned long cbMax,
        _Out_opt_ unsigned long * pcbActual );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetLogInfoInstanceA(
    _In_ JET_INSTANCE instance,
    _Out_writes_bytes_to_opt_( cbMax, *pcbActual ) JET_PSTR szzLogs,
    _In_ unsigned long cbMax,
    _Out_opt_ unsigned long * pcbActual );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetLogInfoInstanceW(
    _In_ JET_INSTANCE instance,
    _Out_writes_bytes_to_opt_( cbMax, *pcbActual ) JET_PWSTR wszzLogs,
    _In_ unsigned long cbMax,
    _Out_opt_ unsigned long * pcbActual );
#endif
#pragma endregion
typedef struct
{
    unsigned long cbSize;
    unsigned long ulGenLow;
    unsigned long ulGenHigh;
    char szBaseName[ JET_BASE_NAME_LENGTH + 1 ];
} JET_LOGINFO_A;
typedef struct
{
    unsigned long cbSize;
    unsigned long ulGenLow;
    unsigned long ulGenHigh;
    WCHAR szBaseName[ JET_BASE_NAME_LENGTH + 1 ];
} JET_LOGINFO_W;
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetLogInfoInstance2A(
    _In_ JET_INSTANCE instance,
    _Out_writes_bytes_to_opt_( cbMax, *pcbActual ) JET_PSTR szzLogs,
    _In_ unsigned long cbMax,
    _Out_opt_ unsigned long * pcbActual,
    _Inout_opt_ JET_LOGINFO_A * pLogInfo );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetLogInfoInstance2W(
    _In_ JET_INSTANCE instance,
    _Out_writes_bytes_to_opt_( cbMax, *pcbActual ) JET_PWSTR wszzLogs,
    _In_ unsigned long cbMax,
    _Out_opt_ unsigned long * pcbActual,
    _Inout_opt_ JET_LOGINFO_W * pLogInfo );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetTruncateLogInfoInstanceA(
    _In_ JET_INSTANCE instance,
    _Out_writes_bytes_to_opt_( cbMax, *pcbActual ) JET_PSTR szzLogs,
    _In_ unsigned long cbMax,
    _Out_opt_ unsigned long * pcbActual );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetTruncateLogInfoInstanceW(
    _In_ JET_INSTANCE instance,
    _Out_writes_bytes_to_opt_( cbMax, *pcbActual ) JET_PWSTR wszzLogs,
    _In_ unsigned long cbMax,
    _Out_opt_ unsigned long * pcbActual );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API JetTruncateLog( void );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetTruncateLogInstance(
    _In_ JET_INSTANCE instance );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API JetEndExternalBackup( void );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetEndExternalBackupInstance(
    _In_ JET_INSTANCE instance );
JET_ERR JET_API
JetEndExternalBackupInstance2(
    _In_ JET_INSTANCE instance,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetExternalRestoreA(
    _In_ JET_PSTR szCheckpointFilePath,
    _In_ JET_PSTR szLogPath,
    _In_reads_opt_( crstfilemap ) JET_RSTMAP_A * rgrstmap,
    _In_ long crstfilemap,
    _In_ JET_PSTR szBackupLogPath,
    _In_ long genLow,
    _In_ long genHigh,
    _In_ JET_PFNSTATUS pfn );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetExternalRestoreW(
    _In_ JET_PWSTR szCheckpointFilePath,
    _In_ JET_PWSTR szLogPath,
    _In_reads_opt_( crstfilemap ) JET_RSTMAP_W * rgrstmap,
    _In_ long crstfilemap,
    _In_ JET_PWSTR szBackupLogPath,
    _In_ long genLow,
    _In_ long genHigh,
    _In_ JET_PFNSTATUS pfn );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetExternalRestore2A(
    _In_ JET_PSTR szCheckpointFilePath,
    _In_ JET_PSTR szLogPath,
    _In_reads_opt_( crstfilemap ) JET_RSTMAP_A * rgrstmap,
    _In_ long crstfilemap,
    _In_ JET_PSTR szBackupLogPath,
    _Inout_ JET_LOGINFO_A * pLogInfo,
    _In_opt_ JET_PSTR szTargetInstanceName,
    _In_opt_ JET_PSTR szTargetInstanceLogPath,
    _In_opt_ JET_PSTR szTargetInstanceCheckpointPath,
    _In_ JET_PFNSTATUS pfn );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetExternalRestore2W(
    _In_ JET_PWSTR szCheckpointFilePath,
    _In_ JET_PWSTR szLogPath,
    _In_reads_opt_( crstfilemap ) JET_RSTMAP_W * rgrstmap,
    _In_ long crstfilemap,
    _In_ JET_PWSTR szBackupLogPath,
    _Inout_ JET_LOGINFO_W * pLogInfo,
    _In_opt_ JET_PWSTR szTargetInstanceName,
    _In_opt_ JET_PWSTR szTargetInstanceLogPath,
    _In_opt_ JET_PWSTR szTargetInstanceCheckpointPath,
    _In_ JET_PFNSTATUS pfn );
#endif
#pragma endregion
#pragma region Application Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetRegisterCallback(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_CBTYP cbtyp,
    _In_ JET_CALLBACK pCallback,
    _In_opt_ void * pvContext,
    _In_ JET_HANDLE * phCallbackId );
JET_ERR JET_API
JetUnregisterCallback(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_CBTYP cbtyp,
    _In_ JET_HANDLE hCallbackId );
#endif
#pragma endregion
typedef struct _JET_INSTANCE_INFO_A
{
    JET_INSTANCE hInstanceId;
    char * szInstanceName;
    JET_API_PTR cDatabases;
    char ** szDatabaseFileName;
    char ** szDatabaseDisplayName;
    char ** szDatabaseSLVFileName_Obsolete;
} JET_INSTANCE_INFO_A;
typedef struct _JET_INSTANCE_INFO_W
{
    JET_INSTANCE hInstanceId;
    WCHAR * szInstanceName;
    JET_API_PTR cDatabases;
    WCHAR ** szDatabaseFileName;
    WCHAR ** szDatabaseDisplayName;
    WCHAR ** szDatabaseSLVFileName_Obsolete;
} JET_INSTANCE_INFO_W;
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetInstanceInfoA(
    _Out_ unsigned long * pcInstanceInfo,
    _Outptr_result_buffer_( *pcInstanceInfo ) JET_INSTANCE_INFO_A ** paInstanceInfo );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetGetInstanceInfoW(
    _Out_ unsigned long * pcInstanceInfo,
    _Outptr_result_buffer_( *pcInstanceInfo ) JET_INSTANCE_INFO_W ** paInstanceInfo );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetFreeBuffer(
    _Pre_notnull_ char * pbBuf );
JET_ERR JET_API
JetSetLS(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _In_ JET_LS ls,
    _In_ JET_GRBIT grbit );
JET_ERR JET_API
JetGetLS(
    _In_ JET_SESID sesid,
    _In_ JET_TABLEID tableid,
    _Out_ JET_LS * pls,
    _In_ JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
typedef JET_API_PTR JET_OSSNAPID;
JET_ERR JET_API
JetOSSnapshotPrepare(
    _Out_ JET_OSSNAPID * psnapId,
    _In_ const JET_GRBIT grbit );
JET_ERR JET_API
JetOSSnapshotPrepareInstance(
    _In_ JET_OSSNAPID snapId,
    _In_ JET_INSTANCE instance,
    _In_ const JET_GRBIT grbit );
JET_ERR JET_API
JetOSSnapshotFreezeA(
    _In_ const JET_OSSNAPID snapId,
    _Out_ unsigned long * pcInstanceInfo,
    _Outptr_result_buffer_( *pcInstanceInfo ) JET_INSTANCE_INFO_A ** paInstanceInfo,
    _In_ const JET_GRBIT grbit );
JET_ERR JET_API
JetOSSnapshotFreezeW(
    _In_ const JET_OSSNAPID snapId,
    _Out_ unsigned long * pcInstanceInfo,
    _Outptr_result_buffer_( *pcInstanceInfo ) JET_INSTANCE_INFO_W ** paInstanceInfo,
    _In_ const JET_GRBIT grbit );
JET_ERR JET_API
JetOSSnapshotThaw(
    _In_ const JET_OSSNAPID snapId,
    _In_ const JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetOSSnapshotAbort(
    _In_ const JET_OSSNAPID snapId,
    _In_ const JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetOSSnapshotTruncateLog(
    _In_ const JET_OSSNAPID snapId,
    _In_ const JET_GRBIT grbit );
JET_ERR JET_API
JetOSSnapshotTruncateLogInstance(
    _In_ const JET_OSSNAPID snapId,
    _In_ JET_INSTANCE instance,
    _In_ const JET_GRBIT grbit );
JET_ERR JET_API
JetOSSnapshotGetFreezeInfoA(
    _In_ const JET_OSSNAPID snapId,
    _Out_ unsigned long * pcInstanceInfo,
    _Outptr_result_buffer_( *pcInstanceInfo ) JET_INSTANCE_INFO_A ** paInstanceInfo,
    _In_ const JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetOSSnapshotGetFreezeInfoW(
    _In_ const JET_OSSNAPID snapId,
    _Out_ unsigned long * pcInstanceInfo,
    _Outptr_result_buffer_( *pcInstanceInfo ) JET_INSTANCE_INFO_W ** paInstanceInfo,
    _In_ const JET_GRBIT grbit );
JET_ERR JET_API
JetOSSnapshotEnd(
    _In_ const JET_OSSNAPID snapId,
    _In_ const JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API
JetConfigureProcessForCrashDump(
    _In_ const JET_GRBIT grbit );
#endif
#pragma endregion
#pragma region Desktop Family or Esent Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_PKG_ESENT)
JET_ERR JET_API JetGetErrorInfoW(
    _In_opt_ void * pvContext,
    _Out_writes_bytes_( cbMax ) void * pvResult,
    _In_ unsigned long cbMax,
    _In_ unsigned long InfoLevel,
    _In_ JET_GRBIT grbit );
JET_ERR JET_API
JetSetSessionParameter(
    _In_opt_ JET_SESID sesid,
    _In_ unsigned long sesparamid,
    _In_reads_bytes_opt_( cbParam ) void * pvParam,
    _In_ unsigned long cbParam );
JET_ERR JET_API
JetGetSessionParameter(
    _In_opt_ JET_SESID sesid,
    _In_ unsigned long sesparamid,
    _Out_cap_post_count_(cbParamMax, *pcbParamActual) void * pvParam,
    _In_ unsigned long cbParamMax,
    _Out_opt_ unsigned long * pcbParamActual );
#endif
#pragma endregion
}
#include <poppack.h>
}
