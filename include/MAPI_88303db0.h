#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef unsigned long FAR * LPULONG;
typedef unsigned long FLAGS;
typedef ULONG_PTR LHANDLE, FAR * LPLHANDLE;
typedef unsigned char FAR * LPBYTE;
typedef struct
{
    ULONG ulReserved;
    ULONG flFlags;
    ULONG nPosition;
    LPSTR lpszPathName;
    LPSTR lpszFileName;
    LPVOID lpFileType;
} MapiFileDesc, FAR * lpMapiFileDesc;
typedef struct
{
    ULONG ulReserved;
    ULONG flFlags;
    ULONG nPosition;
    PWSTR lpszPathName;
    PWSTR lpszFileName;
    PVOID lpFileType;
} MapiFileDescW, *lpMapiFileDescW;
typedef struct
{
    ULONG ulReserved;
    ULONG cbTag;
    LPBYTE lpTag;
    ULONG cbEncoding;
    LPBYTE lpEncoding;
} MapiFileTagExt, FAR *lpMapiFileTagExt;
typedef struct
{
    ULONG ulReserved;
    ULONG ulRecipClass;
    LPSTR lpszName;
    LPSTR lpszAddress;
    ULONG ulEIDSize;
    LPVOID lpEntryID;
} MapiRecipDesc, FAR * lpMapiRecipDesc;
typedef struct
{
    ULONG ulReserved;
    ULONG ulRecipClass;
    PWSTR lpszName;
    PWSTR lpszAddress;
    ULONG ulEIDSize;
    PVOID lpEntryID;
} MapiRecipDescW, *lpMapiRecipDescW;
typedef struct
{
    ULONG ulReserved;
    LPSTR lpszSubject;
    LPSTR lpszNoteText;
    LPSTR lpszMessageType;
    LPSTR lpszDateReceived;
    LPSTR lpszConversationID;
    FLAGS flFlags;
    lpMapiRecipDesc lpOriginator;
    ULONG nRecipCount;
    lpMapiRecipDesc lpRecips;
    ULONG nFileCount;
    lpMapiFileDesc lpFiles;
} MapiMessage, FAR * lpMapiMessage;
typedef struct
{
  ULONG ulReserved;
  PWSTR lpszSubject;
  PWSTR lpszNoteText;
  PWSTR lpszMessageType;
  PWSTR lpszDateReceived;
  PWSTR lpszConversationID;
  FLAGS flFlags;
  lpMapiRecipDescW lpOriginator;
  ULONG nRecipCount;
  lpMapiRecipDescW lpRecips;
  ULONG nFileCount;
  lpMapiFileDescW lpFiles;
} MapiMessageW, *lpMapiMessageW;
typedef ULONG (FAR PASCAL MAPILOGON)(
 ULONG_PTR ulUIParam,
 _In_opt_ LPSTR lpszProfileName,
 _In_opt_ LPSTR lpszPassword,
 FLAGS flFlags,
 ULONG ulReserved,
 LPLHANDLE lplhSession
);
typedef MAPILOGON FAR *LPMAPILOGON;
DECLSPEC_DEPRECATED MAPILOGON MAPILogon;
typedef ULONG (FAR PASCAL MAPILOGOFF)(
 LHANDLE lhSession,
 ULONG_PTR ulUIParam,
 FLAGS flFlags,
 ULONG ulReserved
);
typedef MAPILOGOFF FAR *LPMAPILOGOFF;
DECLSPEC_DEPRECATED MAPILOGOFF MAPILogoff;
typedef ULONG (FAR PASCAL MAPISENDMAIL)(
 LHANDLE lhSession,
 ULONG_PTR ulUIParam,
 lpMapiMessage lpMessage,
 FLAGS flFlags,
 ULONG ulReserved
);
typedef MAPISENDMAIL FAR *LPMAPISENDMAIL;
MAPISENDMAIL MAPISendMail;
typedef ULONG (FAR PASCAL MAPISENDMAILW)(
 LHANDLE lhSession,
 ULONG_PTR ulUIParam,
 _In_ lpMapiMessageW lpMessage,
 FLAGS flFlags,
 ULONG ulReserved
);
typedef MAPISENDMAILW FAR *LPMAPISENDMAILW;
MAPISENDMAILW MAPISendMailW;
typedef ULONG (FAR PASCAL MAPISENDDOCUMENTS)(
 ULONG_PTR ulUIParam,
 _In_ LPSTR lpszDelimChar,
 _In_ LPSTR lpszFilePaths,
 _In_ LPSTR lpszFileNames,
 ULONG ulReserved
);
typedef MAPISENDDOCUMENTS FAR *LPMAPISENDDOCUMENTS;
DECLSPEC_DEPRECATED MAPISENDDOCUMENTS MAPISendDocuments;
typedef ULONG (FAR PASCAL MAPIFINDNEXT)(
 LHANDLE lhSession,
 ULONG_PTR ulUIParam,
 _In_ LPSTR lpszMessageType,
 _In_ LPSTR lpszSeedMessageID,
 FLAGS flFlags,
 ULONG ulReserved,
 _In_ LPSTR lpszMessageID
);
typedef MAPIFINDNEXT FAR *LPMAPIFINDNEXT;
DECLSPEC_DEPRECATED MAPIFINDNEXT MAPIFindNext;
typedef ULONG (FAR PASCAL MAPIREADMAIL)(
 LHANDLE lhSession,
 ULONG_PTR ulUIParam,
 _In_ LPSTR lpszMessageID,
 FLAGS flFlags,
 ULONG ulReserved,
 lpMapiMessage FAR *lppMessage
);
typedef MAPIREADMAIL FAR *LPMAPIREADMAIL;
DECLSPEC_DEPRECATED MAPIREADMAIL MAPIReadMail;
typedef ULONG (FAR PASCAL MAPISAVEMAIL)(
 LHANDLE lhSession,
 ULONG_PTR ulUIParam,
 lpMapiMessage lpMessage,
 FLAGS flFlags,
 ULONG ulReserved,
 _In_ LPSTR lpszMessageID
);
typedef MAPISAVEMAIL FAR *LPMAPISAVEMAIL;
DECLSPEC_DEPRECATED MAPISAVEMAIL MAPISaveMail;
typedef ULONG (FAR PASCAL MAPIDELETEMAIL)(
 LHANDLE lhSession,
 ULONG_PTR ulUIParam,
 _In_ LPSTR lpszMessageID,
 FLAGS flFlags,
 ULONG ulReserved
);
typedef MAPIDELETEMAIL FAR *LPMAPIDELETEMAIL;
DECLSPEC_DEPRECATED MAPIDELETEMAIL MAPIDeleteMail;
typedef ULONG (EXPORT FAR PASCAL *LPMAPIFREEBUFFER)(LPVOID pv);
ULONG FAR PASCAL MAPIFreeBuffer(LPVOID pv);
typedef ULONG (FAR PASCAL MAPIADDRESS)(
 LHANDLE lhSession,
 ULONG_PTR ulUIParam,
 _In_ LPSTR lpszCaption,
 ULONG nEditFields,
 _In_ LPSTR lpszLabels,
 ULONG nRecips,
 lpMapiRecipDesc lpRecips,
 FLAGS flFlags,
 ULONG ulReserved,
 LPULONG lpnNewRecips,
 lpMapiRecipDesc FAR *lppNewRecips
);
typedef MAPIADDRESS FAR *LPMAPIADDRESS;
DECLSPEC_DEPRECATED MAPIADDRESS MAPIAddress;
typedef ULONG (FAR PASCAL MAPIDETAILS)(
 LHANDLE lhSession,
 ULONG_PTR ulUIParam,
 lpMapiRecipDesc lpRecip,
 FLAGS flFlags,
 ULONG ulReserved
);
typedef MAPIDETAILS FAR *LPMAPIDETAILS;
DECLSPEC_DEPRECATED MAPIDETAILS MAPIDetails;
typedef ULONG (FAR PASCAL MAPIRESOLVENAME)(
 LHANDLE lhSession,
 ULONG_PTR ulUIParam,
 _In_ LPSTR lpszName,
 FLAGS flFlags,
 ULONG ulReserved,
 lpMapiRecipDesc FAR *lppRecip
);
typedef MAPIRESOLVENAME FAR *LPMAPIRESOLVENAME;
DECLSPEC_DEPRECATED MAPIRESOLVENAME MAPIResolveName;
STDMETHODIMP_(SCODE)
ScMAPIXFromSMAPI(LHANDLE lhSimpleSession,
    ULONG ulFlags,
    LPCIID lpInterface,
    LPMAPISESSION FAR * lppMAPISession);
}
#endif
#pragma endregion
