#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <aclui.h>
typedef HRESULT (WINAPI *PFNREADOBJECTSECURITY)(LPCWSTR, SECURITY_INFORMATION, PSECURITY_DESCRIPTOR*, LPARAM);
typedef HRESULT (WINAPI *PFNWRITEOBJECTSECURITY)(LPCWSTR, SECURITY_INFORMATION, PSECURITY_DESCRIPTOR, LPARAM);
STDAPI
DSCreateISecurityInfoObject(LPCWSTR pwszObjectPath,
                            LPCWSTR pwszObjectClass,
                            DWORD dwFlags,
                            _Out_ LPSECURITYINFO *ppSI,
                            _In_opt_ PFNREADOBJECTSECURITY pfnReadSD,
                            _In_opt_ PFNWRITEOBJECTSECURITY pfnWriteSD,
                            LPARAM lpContext);
STDAPI
DSCreateISecurityInfoObjectEx(LPCWSTR pwszObjectPath,
                              LPCWSTR pwszObjectClass,
                              LPCWSTR pwszServer,
                              LPCWSTR pwszUserName,
                              LPCWSTR pwszPassword,
                              DWORD dwFlags,
                              _Out_ LPSECURITYINFO *ppSI,
                              _In_opt_ PFNREADOBJECTSECURITY pfnReadSD,
                              _In_opt_ PFNWRITEOBJECTSECURITY pfnWriteSD,
                              LPARAM lpContext);
STDAPI
DSCreateSecurityPage(LPCWSTR pwszObjectPath,
                     LPCWSTR pwszObjectClass,
                     DWORD dwFlags,
                     _Out_ HPROPSHEETPAGE *phPage,
                     _In_opt_ PFNREADOBJECTSECURITY pfnReadSD,
                     _In_opt_ PFNWRITEOBJECTSECURITY pfnWriteSD,
                     LPARAM lpContext);
STDAPI
DSEditSecurity(HWND hwndOwner,
               LPCWSTR pwszObjectPath,
               LPCWSTR pwszObjectClass,
               DWORD dwFlags,
               LPCWSTR pwszCaption,
               _In_opt_ PFNREADOBJECTSECURITY pfnReadSD,
               _In_opt_ PFNWRITEOBJECTSECURITY pfnWriteSD,
               LPARAM lpContext);
typedef HRESULT (WINAPI *PFNDSCREATEISECINFO)(LPCWSTR,
                                              LPCWSTR,
                                              DWORD,
                                              LPSECURITYINFO*,
                                              PFNREADOBJECTSECURITY,
                                              PFNWRITEOBJECTSECURITY,
                                              LPARAM);
typedef HRESULT (WINAPI *PFNDSCREATEISECINFOEX)(LPCWSTR,
                                                LPCWSTR,
                                                LPCWSTR,
                                                LPCWSTR,
                                                LPCWSTR,
                                                DWORD,
                                                LPSECURITYINFO*,
                                                PFNREADOBJECTSECURITY,
                                                PFNWRITEOBJECTSECURITY,
                                                LPARAM);
typedef HRESULT (WINAPI *PFNDSCREATESECPAGE)(LPCWSTR,
                                             LPCWSTR,
                                             DWORD,
                                             HPROPSHEETPAGE*,
                                             PFNREADOBJECTSECURITY,
                                             PFNWRITEOBJECTSECURITY,
                                             LPARAM);
typedef HRESULT (WINAPI *PFNDSEDITSECURITY)(HWND,
                                            LPCWSTR,
                                            LPCWSTR,
                                            DWORD,
                                            LPCWSTR,
                                            PFNREADOBJECTSECURITY,
                                            PFNWRITEOBJECTSECURITY,
                                            LPARAM);
#endif
#pragma endregion
