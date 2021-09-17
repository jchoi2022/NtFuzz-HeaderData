       
#include <apiset.h>
#include <apisetcconv.h>
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <windows.h>
#include <Inspectable.h>
#include <winstring.h>
typedef VOID (WINAPI * GameUICompletionRoutine) (
    _In_ HRESULT returnCode,
    _In_ void* context
    );
typedef VOID (WINAPI * PlayerPickerUICompletionRoutine) (
    _In_ HRESULT returnCode,
    _In_ void* context,
    _In_reads_(selectedXuidsCount) const HSTRING* selectedXuids,
    _In_ size_t selectedXuidsCount
    );
HRESULT
WINAPI
ShowGameInviteUI(
    _In_ HSTRING serviceConfigurationId,
    _In_ HSTRING sessionTemplateName,
    _In_ HSTRING sessionId,
    _In_ HSTRING invitationDisplayText,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowPlayerPickerUI(
    _In_ HSTRING promptDisplayText,
    _In_reads_(xuidsCount) const HSTRING* xuids,
    _In_ size_t xuidsCount,
    _In_reads_opt_(preSelectedXuidsCount) const HSTRING* preSelectedXuids,
    _In_ size_t preSelectedXuidsCount,
    _In_ size_t minSelectionCount,
    _In_ size_t maxSelectionCount,
    _In_ PlayerPickerUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowProfileCardUI(
    _In_ HSTRING targetUserXuid,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowChangeFriendRelationshipUI(
    _In_ HSTRING targetUserXuid,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowTitleAchievementsUI(
    _In_ UINT32 titleId,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ProcessPendingGameUI(
    _In_ BOOL waitForCompletion
    );
BOOL
WINAPI
TryCancelPendingGameUI(
    );
typedef enum KnownGamingPrivileges{
    XPRIVILEGE_BROADCAST = 190,
    XPRIVILEGE_VIEW_FRIENDS_LIST = 197,
    XPRIVILEGE_GAME_DVR = 198,
    XPRIVILEGE_SHARE_KINECT_CONTENT = 199,
    XPRIVILEGE_MULTIPLAYER_PARTIES = 203,
    XPRIVILEGE_COMMUNICATION_VOICE_INGAME = 205,
    XPRIVILEGE_COMMUNICATION_VOICE_SKYPE = 206,
    XPRIVILEGE_CLOUD_GAMING_MANAGE_SESSION = 207,
    XPRIVILEGE_CLOUD_GAMING_JOIN_SESSION = 208,
    XPRIVILEGE_CLOUD_SAVED_GAMES = 209,
    XPRIVILEGE_SHARE_CONTENT = 211,
    XPRIVILEGE_PREMIUM_CONTENT = 214,
    XPRIVILEGE_SUBSCRIPTION_CONTENT = 219,
    XPRIVILEGE_SOCIAL_NETWORK_SHARING = 220,
    XPRIVILEGE_PREMIUM_VIDEO = 224,
    XPRIVILEGE_VIDEO_COMMUNICATIONS = 235,
    XPRIVILEGE_PURCHASE_CONTENT = 245,
    XPRIVILEGE_USER_CREATED_CONTENT = 247,
    XPRIVILEGE_PROFILE_VIEWING = 249,
    XPRIVILEGE_COMMUNICATIONS = 252,
    XPRIVILEGE_MULTIPLAYER_SESSIONS = 254,
    XPRIVILEGE_ADD_FRIEND = 255,
} KnownGamingPrivileges;
HRESULT
WINAPI
CheckGamingPrivilegeWithUI(
    _In_ UINT32 privilegeId,
    _In_ HSTRING scope,
    _In_ HSTRING policy,
    _In_opt_ HSTRING friendlyMessage,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
CheckGamingPrivilegeSilently(
    _In_ UINT32 privilegeId,
    _In_ HSTRING scope,
    _In_ HSTRING policy,
    _Out_ BOOL* hasPrivilege
    );
HRESULT
WINAPI
ShowGameInviteUIForUser(
    _In_ IInspectable* user,
    _In_ HSTRING serviceConfigurationId,
    _In_ HSTRING sessionTemplateName,
    _In_ HSTRING sessionId,
    _In_ HSTRING invitationDisplayText,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowPlayerPickerUIForUser(
    _In_ IInspectable* user,
    _In_ HSTRING promptDisplayText,
    _In_reads_(xuidsCount) const HSTRING* xuids,
    _In_ size_t xuidsCount,
    _In_reads_opt_(preSelectedXuidsCount) const HSTRING* preSelectedXuids,
    _In_ size_t preSelectedXuidsCount,
    _In_ size_t minSelectionCount,
    _In_ size_t maxSelectionCount,
    _In_ PlayerPickerUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowProfileCardUIForUser(
    _In_ IInspectable* user,
    _In_ HSTRING targetUserXuid,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowChangeFriendRelationshipUIForUser(
    _In_ IInspectable* user,
    _In_ HSTRING targetUserXuid,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowTitleAchievementsUIForUser(
    _In_ IInspectable* user,
    _In_ UINT32 titleId,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
CheckGamingPrivilegeWithUIForUser(
    _In_ IInspectable* user,
    _In_ UINT32 privilegeId,
    _In_ HSTRING scope,
    _In_ HSTRING policy,
    _In_opt_ HSTRING friendlyMessage,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
CheckGamingPrivilegeSilentlyForUser(
    _In_ IInspectable* user,
    _In_ UINT32 privilegeId,
    _In_ HSTRING scope,
    _In_ HSTRING policy,
    _Out_ BOOL* hasPrivilege
    );
HRESULT
WINAPI
ShowGameInviteUIWithContext(
    _In_ HSTRING serviceConfigurationId,
    _In_ HSTRING sessionTemplateName,
    _In_ HSTRING sessionId,
    _In_ HSTRING invitationDisplayText,
    _In_ HSTRING customActivationContext,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowGameInviteUIWithContextForUser(
    _In_ IInspectable* user,
    _In_ HSTRING serviceConfigurationId,
    _In_ HSTRING sessionTemplateName,
    _In_ HSTRING sessionId,
    _In_ HSTRING invitationDisplayText,
    _In_ HSTRING customActivationContext,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowGameInfoUI(
    _In_ UINT32 titleId,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowGameInfoUIForUser(
    _In_ IInspectable* user,
    _In_ UINT32 titleId,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowFindFriendsUI(
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowFindFriendsUIForUser(
    _In_ IInspectable* user,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowCustomizeUserProfileUI(
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowCustomizeUserProfileUIForUser(
    _In_ IInspectable* user,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowUserSettingsUI(
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
HRESULT
WINAPI
ShowUserSettingsUIForUser(
    _In_ IInspectable* user,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void* context
    );
