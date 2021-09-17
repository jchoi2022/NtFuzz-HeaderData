#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
    #define KBD_LONG_POINTER
        (0xc000 + ((0x ## prefix) >= 0xE0 ? 0x100 : 0) + (0x ## base))
typedef struct {
    BYTE Vk;
    BYTE ModBits;
} VK_TO_BIT, *KBD_LONG_POINTER PVK_TO_BIT;
#pragma warning(push)
#pragma warning(disable : 4200)
typedef struct {
    PVK_TO_BIT pVkToBit;
    WORD wMaxModBits;
    BYTE ModNumber[];
} MODIFIERS, *KBD_LONG_POINTER PMODIFIERS;
#pragma warning(pop)
typedef struct _VSC_VK {
    BYTE Vsc;
    USHORT Vk;
} VSC_VK, *KBD_LONG_POINTER PVSC_VK;
typedef struct _VK_VSC {
    BYTE Vk;
    BYTE Vsc;
} VK_VSC, *KBD_LONG_POINTER PVK_VSC;
                                    BYTE VirtualKey; \
                                    BYTE Attributes; \
                                    WCHAR wch[n]; \
                                } VK_TO_WCHARS##n, *KBD_LONG_POINTER PVK_TO_WCHARS##n;
TYPEDEF_VK_TO_WCHARS(1)
TYPEDEF_VK_TO_WCHARS(2)
TYPEDEF_VK_TO_WCHARS(3)
TYPEDEF_VK_TO_WCHARS(4)
TYPEDEF_VK_TO_WCHARS(5)
TYPEDEF_VK_TO_WCHARS(6)
TYPEDEF_VK_TO_WCHARS(7)
TYPEDEF_VK_TO_WCHARS(8)
TYPEDEF_VK_TO_WCHARS(9)
TYPEDEF_VK_TO_WCHARS(10)
typedef struct _VK_TO_WCHAR_TABLE {
    PVK_TO_WCHARS1 pVkToWchars;
    BYTE nModifications;
    BYTE cbSize;
} VK_TO_WCHAR_TABLE, *KBD_LONG_POINTER PVK_TO_WCHAR_TABLE;
typedef struct {
    DWORD dwBoth;
    WCHAR wchComposed;
    USHORT uFlags;
} DEADKEY, *KBD_LONG_POINTER PDEADKEY;
                                    BYTE VirtualKey; \
                                    WORD ModificationNumber; \
                                    WCHAR wch[n]; \
                                } LIGATURE##n, *KBD_LONG_POINTER PLIGATURE##n;
TYPEDEF_LIGATURE(1)
TYPEDEF_LIGATURE(2)
TYPEDEF_LIGATURE(3)
TYPEDEF_LIGATURE(4)
TYPEDEF_LIGATURE(5)
typedef struct {
    BYTE vsc;
    WCHAR *KBD_LONG_POINTER pwsz;
} VSC_LPWSTR, *KBD_LONG_POINTER PVSC_LPWSTR;
typedef WCHAR *KBD_LONG_POINTER DEADKEY_LPWSTR;
#if KLLF_SHIFTLOCK != KLL_ATTR_FROM_KLF(KLF_SHIFTLOCK)
    #error KLLF_SHIFTLOCK != KLL_ATTR_FROM_KLF(KLF_SHIFTLOCK)
#endif
#if KLLF_LRM_RLM != KLL_ATTR_FROM_KLF(KLF_LRM_RLM)
    #error KLLF_LRM_RLM != KLL_ATTR_FROM_KLF(KLF_LRM_RLM)
#endif
typedef struct tagKbdLayer {
    PMODIFIERS pCharModifiers;
    PVK_TO_WCHAR_TABLE pVkToWcharTable;
    PDEADKEY pDeadKey;
    PVSC_LPWSTR pKeyNames;
    PVSC_LPWSTR pKeyNamesExt;
    WCHAR *KBD_LONG_POINTER *KBD_LONG_POINTER pKeyNamesDead;
    USHORT *KBD_LONG_POINTER pusVSCtoVK;
    BYTE bMaxVSCtoVK;
    PVSC_VK pVSCtoVK_E0;
    PVSC_VK pVSCtoVK_E1;
    DWORD fLocaleFlags;
    BYTE nLgMax;
    BYTE cbLgEntry;
    PLIGATURE1 pLigature;
    DWORD dwType;
    DWORD dwSubType;
} KBDTABLES, *KBD_LONG_POINTER PKBDTABLES;
typedef struct _VK_FUNCTION_PARAM {
    BYTE NLSFEProcIndex;
    ULONG NLSFEProcParam;
} VK_FPARAM, *KBD_LONG_POINTER PVK_FPARAM;
typedef struct _VK_TO_FUNCTION_TABLE {
    BYTE Vk;
    BYTE NLSFEProcType;
    BYTE NLSFEProcCurrent;
    BYTE NLSFEProcSwitch;
    VK_FPARAM NLSFEProc[8];
    VK_FPARAM NLSFEProcAlt[8];
} VK_F, *KBD_LONG_POINTER PVK_F;
typedef struct tagKbdNlsLayer {
    USHORT OEMIdentifier;
    USHORT LayoutInformation;
    UINT NumOfVkToF;
    PVK_F pVkToF;
    INT NumOfMouseVKey;
    USHORT *KBD_LONG_POINTER pusMouseVKey;
} KBDNLSTABLES, *KBD_LONG_POINTER PKBDNLSTABLES;
typedef struct tagKBDTABLE_DESC {
    WCHAR wszDllName[32];
    DWORD dwType;
    DWORD dwSubType;
} KBDTABLE_DESC, *KBD_LONG_POINTER PKBDTABLE_DESC;
typedef struct tagKBDTABLE_MULTI {
    UINT nTables;
    KBDTABLE_DESC aKbdTables[KBDTABLE_MULTI_MAX];
} KBDTABLE_MULTI, *KBD_LONG_POINTER PKBDTABLE_MULTI;
typedef struct tagKBD_TYPE_INFO {
    DWORD dwVersion;
    DWORD dwType;
    DWORD dwSubType;
} KBD_TYPE_INFO, *PKBD_TYPE_INFO;
                                  (Id).Subtype == ((NLSKBD_OEM_FUJITSU<<4)|FMV_KBD_OASYS_TYPE))
                                  (Id).SubType == 0x00020002)
#endif
#pragma endregion
