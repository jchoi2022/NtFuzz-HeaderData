#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "oaidl.h"
extern "C"{
       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum tagUpdateImpactLevel
    {
        UpdateImpactLevel_None = 0,
        UpdateImpactLevel_Low = ( UpdateImpactLevel_None + 1 ) ,
        UpdateImpactLevel_Medium = ( UpdateImpactLevel_Low + 1 ) ,
        UpdateImpactLevel_High = ( UpdateImpactLevel_Medium + 1 )
    } UpdateImpactLevel;
typedef
enum tagUpdateAssessmentStatus
    {
        UpdateAssessmentStatus_Latest = 0,
        UpdateAssessmentStatus_NotLatestSoftRestriction = ( UpdateAssessmentStatus_Latest + 1 ) ,
        UpdateAssessmentStatus_NotLatestHardRestriction = ( UpdateAssessmentStatus_NotLatestSoftRestriction + 1 ) ,
        UpdateAssessmentStatus_NotLatestEndOfSupport = ( UpdateAssessmentStatus_NotLatestHardRestriction + 1 ) ,
        UpdateAssessmentStatus_NotLatestServicingTrain = ( UpdateAssessmentStatus_NotLatestEndOfSupport + 1 ) ,
        UpdateAssessmentStatus_NotLatestDeferredFeature = ( UpdateAssessmentStatus_NotLatestServicingTrain + 1 ) ,
        UpdateAssessmentStatus_NotLatestDeferredQuality = ( UpdateAssessmentStatus_NotLatestDeferredFeature + 1 ) ,
        UpdateAssessmentStatus_NotLatestPausedFeature = ( UpdateAssessmentStatus_NotLatestDeferredQuality + 1 ) ,
        UpdateAssessmentStatus_NotLatestPausedQuality = ( UpdateAssessmentStatus_NotLatestPausedFeature + 1 ) ,
        UpdateAssessmentStatus_NotLatestManaged = ( UpdateAssessmentStatus_NotLatestPausedQuality + 1 ) ,
        UpdateAssessmentStatus_NotLatestUnknown = ( UpdateAssessmentStatus_NotLatestManaged + 1 )
    } UpdateAssessmentStatus;
typedef struct tagUpdateAssessment
    {
    UpdateAssessmentStatus status;
    UpdateImpactLevel impact;
    DWORD daysOutOfDate;
    } UpdateAssessment;
typedef struct tagOSUpdateAssessment
    {
    BOOL isEndOfSupport;
    UpdateAssessment assessmentForCurrent;
    UpdateAssessment assessmentForUpToDate;
    UpdateAssessmentStatus securityStatus;
    FILETIME assessmentTime;
    FILETIME releaseInfoTime;
    LPWSTR currentOSBuild;
    FILETIME currentOSReleaseTime;
    LPWSTR upToDateOSBuild;
    FILETIME upToDateOSReleaseTime;
    } OSUpdateAssessment;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_waasapitypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_waasapitypes_0000_0000_v0_0_s_ifspec;
}
