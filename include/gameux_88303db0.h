#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IGameExplorer IGameExplorer;
typedef interface IGameStatistics IGameStatistics;
typedef interface IGameStatisticsMgr IGameStatisticsMgr;
typedef interface IGameExplorer2 IGameExplorer2;
typedef class GameExplorer GameExplorer;
typedef class GameStatistics GameStatistics;
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl_core.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum GAME_INSTALL_SCOPE
    {
        GIS_NOT_INSTALLED = 1,
        GIS_CURRENT_USER = 2,
        GIS_ALL_USERS = 3
    } GAME_INSTALL_SCOPE;
extern RPC_IF_HANDLE __MIDL_itf_gameux_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_gameux_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IGameExplorer;
    typedef struct IGameExplorerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGameExplorer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGameExplorer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGameExplorer * This);
                           HRESULT ( STDMETHODCALLTYPE *AddGame )(
            __RPC__in IGameExplorer * This,
                       __RPC__in BSTR bstrGDFBinaryPath,
                       __RPC__in BSTR bstrGameInstallDirectory,
                       GAME_INSTALL_SCOPE installScope,
                            __RPC__inout GUID *pguidInstanceID);
                           HRESULT ( STDMETHODCALLTYPE *RemoveGame )(
            __RPC__in IGameExplorer * This,
                       GUID guidInstanceID);
                           HRESULT ( STDMETHODCALLTYPE *UpdateGame )(
            __RPC__in IGameExplorer * This,
                       GUID guidInstanceID);
                           HRESULT ( STDMETHODCALLTYPE *VerifyAccess )(
            __RPC__in IGameExplorer * This,
                       __RPC__in BSTR bstrGDFBinaryPath,
                        __RPC__out BOOL *pfHasAccess);
        END_INTERFACE
    } IGameExplorerVtbl;
    interface IGameExplorer
    {
        CONST_VTBL struct IGameExplorerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddGame(This,bstrGDFBinaryPath,bstrGameInstallDirectory,installScope,pguidInstanceID) )
    ( (This)->lpVtbl -> RemoveGame(This,guidInstanceID) )
    ( (This)->lpVtbl -> UpdateGame(This,guidInstanceID) )
    ( (This)->lpVtbl -> VerifyAccess(This,bstrGDFBinaryPath,pfHasAccess) )
typedef
enum GAMESTATS_OPEN_TYPE
    {
        GAMESTATS_OPEN_OPENORCREATE = 0,
        GAMESTATS_OPEN_OPENONLY = 1
    } GAMESTATS_OPEN_TYPE;
typedef
enum GAMESTATS_OPEN_RESULT
    {
        GAMESTATS_OPEN_CREATED = 0,
        GAMESTATS_OPEN_OPENED = 1
    } GAMESTATS_OPEN_RESULT;
extern RPC_IF_HANDLE __MIDL_itf_gameux_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_gameux_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IGameStatistics;
    typedef struct IGameStatisticsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGameStatistics * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGameStatistics * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGameStatistics * This);
                           HRESULT ( STDMETHODCALLTYPE *GetMaxCategoryLength )(
            __RPC__in IGameStatistics * This,
                                __RPC__out UINT *cch);
                           HRESULT ( STDMETHODCALLTYPE *GetMaxNameLength )(
            __RPC__in IGameStatistics * This,
                                __RPC__out UINT *cch);
                           HRESULT ( STDMETHODCALLTYPE *GetMaxValueLength )(
            __RPC__in IGameStatistics * This,
                                __RPC__out UINT *cch);
                           HRESULT ( STDMETHODCALLTYPE *GetMaxCategories )(
            __RPC__in IGameStatistics * This,
                                __RPC__out WORD *pMax);
                           HRESULT ( STDMETHODCALLTYPE *GetMaxStatsPerCategory )(
            __RPC__in IGameStatistics * This,
                                __RPC__out WORD *pMax);
                           HRESULT ( STDMETHODCALLTYPE *SetCategoryTitle )(
            __RPC__in IGameStatistics * This,
                       WORD categoryIndex,
                               __RPC__in_string LPCWSTR title);
                           HRESULT ( STDMETHODCALLTYPE *GetCategoryTitle )(
            __RPC__in IGameStatistics * This,
                       WORD categoryIndex,
                                        __RPC__deref_out_opt_string LPWSTR *pTitle);
                           HRESULT ( STDMETHODCALLTYPE *GetStatistic )(
            __RPC__in IGameStatistics * This,
                       WORD categoryIndex,
                       WORD statIndex,
                                            __RPC__deref_opt_inout_opt_string LPWSTR *pName,
                                            __RPC__deref_opt_inout_opt_string LPWSTR *pValue);
                           HRESULT ( STDMETHODCALLTYPE *SetStatistic )(
            __RPC__in IGameStatistics * This,
                       WORD categoryIndex,
                       WORD statIndex,
                               __RPC__in_string LPCWSTR name,
                               __RPC__in_string LPCWSTR value);
                           HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IGameStatistics * This,
                       BOOL trackChanges);
                           HRESULT ( STDMETHODCALLTYPE *SetLastPlayedCategory )(
            __RPC__in IGameStatistics * This,
                       UINT categoryIndex);
                           HRESULT ( STDMETHODCALLTYPE *GetLastPlayedCategory )(
            __RPC__in IGameStatistics * This,
                                __RPC__out UINT *pCategoryIndex);
        END_INTERFACE
    } IGameStatisticsVtbl;
    interface IGameStatistics
    {
        CONST_VTBL struct IGameStatisticsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMaxCategoryLength(This,cch) )
    ( (This)->lpVtbl -> GetMaxNameLength(This,cch) )
    ( (This)->lpVtbl -> GetMaxValueLength(This,cch) )
    ( (This)->lpVtbl -> GetMaxCategories(This,pMax) )
    ( (This)->lpVtbl -> GetMaxStatsPerCategory(This,pMax) )
    ( (This)->lpVtbl -> SetCategoryTitle(This,categoryIndex,title) )
    ( (This)->lpVtbl -> GetCategoryTitle(This,categoryIndex,pTitle) )
    ( (This)->lpVtbl -> GetStatistic(This,categoryIndex,statIndex,pName,pValue) )
    ( (This)->lpVtbl -> SetStatistic(This,categoryIndex,statIndex,name,value) )
    ( (This)->lpVtbl -> Save(This,trackChanges) )
    ( (This)->lpVtbl -> SetLastPlayedCategory(This,categoryIndex) )
    ( (This)->lpVtbl -> GetLastPlayedCategory(This,pCategoryIndex) )
EXTERN_C const IID IID_IGameStatisticsMgr;
    typedef struct IGameStatisticsMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGameStatisticsMgr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGameStatisticsMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGameStatisticsMgr * This);
                           HRESULT ( STDMETHODCALLTYPE *GetGameStatistics )(
            __RPC__in IGameStatisticsMgr * This,
                               __RPC__in_string LPCWSTR GDFBinaryPath,
                       GAMESTATS_OPEN_TYPE openType,
                        __RPC__out GAMESTATS_OPEN_RESULT *pOpenResult,
                                __RPC__deref_out_opt IGameStatistics **ppiStats);
                           HRESULT ( STDMETHODCALLTYPE *RemoveGameStatistics )(
            __RPC__in IGameStatisticsMgr * This,
                               __RPC__in_string LPCWSTR GDFBinaryPath);
        END_INTERFACE
    } IGameStatisticsMgrVtbl;
    interface IGameStatisticsMgr
    {
        CONST_VTBL struct IGameStatisticsMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetGameStatistics(This,GDFBinaryPath,openType,pOpenResult,ppiStats) )
    ( (This)->lpVtbl -> RemoveGameStatistics(This,GDFBinaryPath) )
EXTERN_C const IID IID_IGameExplorer2;
    typedef struct IGameExplorer2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGameExplorer2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGameExplorer2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGameExplorer2 * This);
                           HRESULT ( STDMETHODCALLTYPE *InstallGame )(
            __RPC__in IGameExplorer2 * This,
                               __RPC__in_string LPCWSTR binaryGDFPath,
                               __RPC__in_opt LPCWSTR installDirectory,
                       GAME_INSTALL_SCOPE installScope);
                           HRESULT ( STDMETHODCALLTYPE *UninstallGame )(
            __RPC__in IGameExplorer2 * This,
                               __RPC__in_string LPCWSTR binaryGDFPath);
                           HRESULT ( STDMETHODCALLTYPE *CheckAccess )(
            __RPC__in IGameExplorer2 * This,
                               __RPC__in_string LPCWSTR binaryGDFPath,
                                __RPC__out BOOL *pHasAccess);
        END_INTERFACE
    } IGameExplorer2Vtbl;
    interface IGameExplorer2
    {
        CONST_VTBL struct IGameExplorer2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InstallGame(This,binaryGDFPath,installDirectory,installScope) )
    ( (This)->lpVtbl -> UninstallGame(This,binaryGDFPath) )
    ( (This)->lpVtbl -> CheckAccess(This,binaryGDFPath,pHasAccess) )
EXTERN_C const IID LIBID_gameuxLib;
EXTERN_C const CLSID CLSID_GameExplorer;
class DECLSPEC_UUID("9A5EA990-3034-4D6F-9128-01F3C61022BC")
GameExplorer;
EXTERN_C const CLSID CLSID_GameStatistics;
class DECLSPEC_UUID("DBC85A2C-C0DC-4961-B6E2-D28B62C11AD4")
GameStatistics;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_gameux_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_gameux_0000_0005_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
