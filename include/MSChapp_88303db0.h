#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _CYPHER_BLOCK {
    CHAR data[CYPHER_BLOCK_LENGTH];
}CYPHER_BLOCK;
typedef struct _LM_OWF_PASSWORD {
    CYPHER_BLOCK data[2];
} LM_OWF_PASSWORD;
typedef LM_OWF_PASSWORD * PLM_OWF_PASSWORD;
typedef LM_OWF_PASSWORD NT_OWF_PASSWORD;
typedef NT_OWF_PASSWORD * PNT_OWF_PASSWORD;
typedef struct _SAMPR_ENCRYPTED_USER_PASSWORD {
    UCHAR Buffer[ (256 * 2) + 4 ];
} SAMPR_ENCRYPTED_USER_PASSWORD, *PSAMPR_ENCRYPTED_USER_PASSWORD;
typedef struct _ENCRYPTED_LM_OWF_PASSWORD {
    CYPHER_BLOCK data[2];
} ENCRYPTED_LM_OWF_PASSWORD, *PENCRYPTED_LM_OWF_PASSWORD;
typedef ENCRYPTED_LM_OWF_PASSWORD ENCRYPTED_NT_OWF_PASSWORD;
typedef ENCRYPTED_NT_OWF_PASSWORD * PENCRYPTED_NT_OWF_PASSWORD;
extern WINADVAPI DWORD WINAPI
MSChapSrvChangePassword(
   _In_ PWSTR ServerName,
   _In_ PWSTR UserName,
   _In_ BOOLEAN LmOldPresent,
   _In_ PLM_OWF_PASSWORD LmOldOwfPassword,
   _In_ PLM_OWF_PASSWORD LmNewOwfPassword,
   _In_ PNT_OWF_PASSWORD NtOldOwfPassword,
   _In_ PNT_OWF_PASSWORD NtNewOwfPassword
   );
extern WINADVAPI DWORD WINAPI
MSChapSrvChangePassword2(
    _In_ PWSTR ServerName,
    _In_ PWSTR UserName,
    _In_ PSAMPR_ENCRYPTED_USER_PASSWORD NewPasswordEncryptedWithOldNt,
    _In_ PENCRYPTED_NT_OWF_PASSWORD OldNtOwfPasswordEncryptedWithNewNt,
    _In_ BOOLEAN LmPresent,
    _In_ PSAMPR_ENCRYPTED_USER_PASSWORD NewPasswordEncryptedWithOldLm,
    _In_ PENCRYPTED_LM_OWF_PASSWORD OldLmOwfPasswordEncryptedWithNewLmOrNt
    );
#endif
#pragma endregion
